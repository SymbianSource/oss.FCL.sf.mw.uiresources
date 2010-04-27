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

#include "aknlayoutscalable_abrw_php_av_qhd_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0000adfa };

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
0x6dc6,	// (0x00011bc0) Screen

0x6dda,	// (0x00011bd4) application_window_ParamLimits

0x6dda,	// (0x00011bd4) application_window

0x6df4,	// (0x00011bee) screen_g1

0x491f,	// (0x0000f719) area_bottom_pane_ParamLimits

0x491f,	// (0x0000f719) area_bottom_pane

0x49df,	// (0x0000f7d9) area_top_pane_ParamLimits

0x49df,	// (0x0000f7d9) area_top_pane

0x4a7d,	// (0x0000f877) main_pane_ParamLimits

0x4a7d,	// (0x0000f877) main_pane

0x6dfe,	// (0x00011bf8) misc_graphics

0x8f65,	// (0x00013d5f) battery_pane_ParamLimits

0x8f65,	// (0x00013d5f) battery_pane

0x9d51,	// (0x00014b4b) bg_status_flat_pane_g8

0x9d59,	// (0x00014b53) bg_status_flat_pane_g9

0x9027,	// (0x00013e21) context_pane_ParamLimits

0x9027,	// (0x00013e21) context_pane

0x913d,	// (0x00013f37) navi_pane_ParamLimits

0x913d,	// (0x00013f37) navi_pane

0x91c1,	// (0x00013fbb) signal_pane_ParamLimits

0x91c1,	// (0x00013fbb) signal_pane

0x0008,

0xf874,	// (0x0001a66e) bg_status_flat_pane_g

0x922e,	// (0x00014028) status_pane_g1_ParamLimits

0x922e,	// (0x00014028) status_pane_g1

0x9242,	// (0x0001403c) status_pane_g2_ParamLimits

0x9242,	// (0x0001403c) status_pane_g2

0x924e,	// (0x00014048) status_pane_g3_ParamLimits

0x924e,	// (0x00014048) status_pane_g3

0x0004,

0xf79b,	// (0x0001a595) status_pane_g_ParamLimits

0xf79b,	// (0x0001a595) status_pane_g

0x9282,	// (0x0001407c) title_pane_ParamLimits

0x9282,	// (0x0001407c) title_pane

0x92bf,	// (0x000140b9) uni_indicator_pane_ParamLimits

0x92bf,	// (0x000140b9) uni_indicator_pane

0x8e79,	// (0x00013c73) bg_list_pane_ParamLimits

0x8e79,	// (0x00013c73) bg_list_pane

0x8e99,	// (0x00013c93) find_pane

0x8ea1,	// (0x00013c9b) listscroll_app_pane_ParamLimits

0x8ea1,	// (0x00013c9b) listscroll_app_pane

0x8ead,	// (0x00013ca7) listscroll_form_pane

0x5350,	// (0x0001014a) listscroll_gen_pane_ParamLimits

0x5350,	// (0x0001014a) listscroll_gen_pane

0x5364,	// (0x0001015e) listscroll_set_pane

0x8040,	// (0x00012e3a) main_idle_act_pane

0x8b81,	// (0x0001397b) main_idle_trad_pane

0x8b81,	// (0x0001397b) main_list_empty_pane

0x8ec7,	// (0x00013cc1) main_midp_pane

0x8ed3,	// (0x00013ccd) main_pane_g1_ParamLimits

0x8ed3,	// (0x00013ccd) main_pane_g1

0x537a,	// (0x00010174) popup_ai_message_window_ParamLimits

0x537a,	// (0x00010174) popup_ai_message_window

0x5420,	// (0x0001021a) popup_fep_china_uni_window_ParamLimits

0x5420,	// (0x0001021a) popup_fep_china_uni_window

0x547c,	// (0x00010276) popup_fep_japan_candidate_window_ParamLimits

0x547c,	// (0x00010276) popup_fep_japan_candidate_window

0x549c,	// (0x00010296) popup_fep_japan_predictive_window_ParamLimits

0x549c,	// (0x00010296) popup_fep_japan_predictive_window

0x54cc,	// (0x000102c6) popup_find_window

0x54d9,	// (0x000102d3) popup_grid_graphic_window_ParamLimits

0x54d9,	// (0x000102d3) popup_grid_graphic_window

0x5503,	// (0x000102fd) popup_large_graphic_colour_window

0x5529,	// (0x00010323) popup_menu_window_ParamLimits

0x5529,	// (0x00010323) popup_menu_window

0x56e1,	// (0x000104db) popup_note_image_window

0x56cd,	// (0x000104c7) popup_note_wait_window_ParamLimits

0x56cd,	// (0x000104c7) popup_note_wait_window

0x56cd,	// (0x000104c7) popup_note_window_ParamLimits

0x56cd,	// (0x000104c7) popup_note_window

0x5737,	// (0x00010531) popup_query_code_window_ParamLimits

0x5737,	// (0x00010531) popup_query_code_window

0x574b,	// (0x00010545) popup_query_data_code_window_ParamLimits

0x574b,	// (0x00010545) popup_query_data_code_window

0x5768,	// (0x00010562) popup_query_data_window_ParamLimits

0x5768,	// (0x00010562) popup_query_data_window

0x5784,	// (0x0001057e) popup_query_sat_info_window_ParamLimits

0x5784,	// (0x0001057e) popup_query_sat_info_window

0x57bd,	// (0x000105b7) popup_snote_single_graphic_window_ParamLimits

0x57bd,	// (0x000105b7) popup_snote_single_graphic_window

0x57bd,	// (0x000105b7) popup_snote_single_text_window_ParamLimits

0x57bd,	// (0x000105b7) popup_snote_single_text_window

0x57d2,	// (0x000105cc) popup_sub_window_general

0x5902,	// (0x000106fc) popup_window_general_ParamLimits

0x5902,	// (0x000106fc) popup_window_general

0x8ee9,	// (0x00013ce3) power_save_pane

0x51e4,	// (0x0000ffde) control_pane_g1_ParamLimits

0x51e4,	// (0x0000ffde) control_pane_g1

0x520b,	// (0x00010005) control_pane_g2_ParamLimits

0x520b,	// (0x00010005) control_pane_g2

0x8e3c,	// (0x00013c36) control_pane_g3_ParamLimits

0x8e3c,	// (0x00013c36) control_pane_g3

0x0007,

0xf783,	// (0x0001a57d) control_pane_g_ParamLimits

0xf783,	// (0x0001a57d) control_pane_g

0x5255,	// (0x0001004f) control_pane_t1_ParamLimits

0x5255,	// (0x0001004f) control_pane_t1

0x52a1,	// (0x0001009b) control_pane_t2_ParamLimits

0x52a1,	// (0x0001009b) control_pane_t2

0x0002,

0xf794,	// (0x0001a58e) control_pane_t_ParamLimits

0xf794,	// (0x0001a58e) control_pane_t

0x8d61,	// (0x00013b5b) navi_navi_volume_pane_cp1

0x8d69,	// (0x00013b63) status_small_icon_pane

0x8d71,	// (0x00013b6b) status_small_pane_g1_ParamLimits

0x8d71,	// (0x00013b6b) status_small_pane_g1

0x8da5,	// (0x00013b9f) status_small_pane_g2_ParamLimits

0x8da5,	// (0x00013b9f) status_small_pane_g2

0x8db1,	// (0x00013bab) status_small_pane_g3_ParamLimits

0x8db1,	// (0x00013bab) status_small_pane_g3

0x8dbd,	// (0x00013bb7) status_small_pane_g4_ParamLimits

0x8dbd,	// (0x00013bb7) status_small_pane_g4

0x8dc9,	// (0x00013bc3) status_small_pane_g5_ParamLimits

0x8dc9,	// (0x00013bc3) status_small_pane_g5

0x8dd7,	// (0x00013bd1) status_small_pane_g6_ParamLimits

0x8dd7,	// (0x00013bd1) status_small_pane_g6

0x0007,

0xf772,	// (0x0001a56c) status_small_pane_g_ParamLimits

0xf772,	// (0x0001a56c) status_small_pane_g

0x8e06,	// (0x00013c00) status_small_pane_t1

0x8e28,	// (0x00013c22) status_small_wait_pane_ParamLimits

0x8e28,	// (0x00013c22) status_small_wait_pane

0x8564,	// (0x0001335e) aid_levels_signal_ParamLimits

0x8564,	// (0x0001335e) aid_levels_signal

0x8576,	// (0x00013370) signal_pane_g1_ParamLimits

0x8576,	// (0x00013370) signal_pane_g1

0x858b,	// (0x00013385) signal_pane_g2_ParamLimits

0x858b,	// (0x00013385) signal_pane_g2

0x0003,

0xf703,	// (0x0001a4fd) signal_pane_g_ParamLimits

0xf703,	// (0x0001a4fd) signal_pane_g

0x85c6,	// (0x000133c0) context_pane_g1

0x6e08,	// (0x00011c02) title_pane_g1

0x6e3e,	// (0x00011c38) title_pane_t1

0x6ea6,	// (0x00011ca0) title_pane_t2

0x6ecc,	// (0x00011cc6) title_pane_t3

0x0002,

0xf557,	// (0x0001a351) title_pane_t

0x92d7,	// (0x000140d1) aid_levels_battery_ParamLimits

0x92d7,	// (0x000140d1) aid_levels_battery

0x92eb,	// (0x000140e5) battery_pane_g1_ParamLimits

0x92eb,	// (0x000140e5) battery_pane_g1

0x9301,	// (0x000140fb) battery_pane_g2_ParamLimits

0x9301,	// (0x000140fb) battery_pane_g2

0x0001,

0xf7a6,	// (0x0001a5a0) battery_pane_g_ParamLimits

0xf7a6,	// (0x0001a5a0) battery_pane_g

0xa693,	// (0x0001548d) uni_indicator_pane_g1

0xa6a9,	// (0x000154a3) uni_indicator_pane_g2

0xa6bf,	// (0x000154b9) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x0001a716) uni_indicator_pane_g

0x89f3,	// (0x000137ed) navi_icon_pane_ParamLimits

0x89f3,	// (0x000137ed) navi_icon_pane

0x8931,	// (0x0001372b) navi_midp_pane

0x8a0f,	// (0x00013809) navi_navi_pane

0x8a19,	// (0x00013813) navi_text_pane_ParamLimits

0x8a19,	// (0x00013813) navi_text_pane

0x6df4,	// (0x00011bee) status_small_wait_pane_g1

0x7315,	// (0x0001210f) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x0001a711) status_small_wait_pane_g

0xa3b8,	// (0x000151b2) navi_navi_icon_text_pane

0xa3c0,	// (0x000151ba) navi_navi_pane_g1_ParamLimits

0xa3c0,	// (0x000151ba) navi_navi_pane_g1

0xa3d2,	// (0x000151cc) navi_navi_pane_g2_ParamLimits

0xa3d2,	// (0x000151cc) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x0001a6df) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x0001a6df) navi_navi_pane_g

0xa3e4,	// (0x000151de) navi_navi_tabs_pane

0xa3ed,	// (0x000151e7) navi_navi_text_pane

0xa3b8,	// (0x000151b2) navi_navi_volume_pane

0xa394,	// (0x0001518e) navi_text_pane_t1

0xa388,	// (0x00015182) navi_icon_pane_g1

0xa2db,	// (0x000150d5) navi_navi_text_pane_t1

0x5c1a,	// (0x00010a14) navi_navi_volume_pane_g1

0x5c22,	// (0x00010a1c) volume_small_pane

0xa241,	// (0x0001503b) navi_navi_icon_text_pane_g1

0xa249,	// (0x00015043) navi_navi_icon_text_pane_t1

0x8a0f,	// (0x00013809) navi_tabs_2_long_pane

0x8a0f,	// (0x00013809) navi_tabs_2_pane

0x8a0f,	// (0x00013809) navi_tabs_3_long_pane

0x8a0f,	// (0x00013809) navi_tabs_3_pane

0x8a0f,	// (0x00013809) navi_tabs_4_pane

0x5bfa,	// (0x000109f4) tabs_2_active_pane_ParamLimits

0x5bfa,	// (0x000109f4) tabs_2_active_pane

0x5c0a,	// (0x00010a04) tabs_2_passive_pane_ParamLimits

0x5c0a,	// (0x00010a04) tabs_2_passive_pane

0x5bc8,	// (0x000109c2) tabs_3_active_pane_ParamLimits

0x5bc8,	// (0x000109c2) tabs_3_active_pane

0x5bd8,	// (0x000109d2) tabs_3_passive_pane_ParamLimits

0x5bd8,	// (0x000109d2) tabs_3_passive_pane

0x5be9,	// (0x000109e3) tabs_3_passive_pane_cp_ParamLimits

0x5be9,	// (0x000109e3) tabs_3_passive_pane_cp

0x5b84,	// (0x0001097e) tabs_4_active_pane_ParamLimits

0x5b84,	// (0x0001097e) tabs_4_active_pane

0x5b95,	// (0x0001098f) tabs_4_passive_pane_ParamLimits

0x5b95,	// (0x0001098f) tabs_4_passive_pane

0x5ba6,	// (0x000109a0) tabs_4_passive_pane_cp_ParamLimits

0x5ba6,	// (0x000109a0) tabs_4_passive_pane_cp

0x5bb7,	// (0x000109b1) tabs_4_passive_pane_cp2_ParamLimits

0x5bb7,	// (0x000109b1) tabs_4_passive_pane_cp2

0x5b60,	// (0x0001095a) tabs_2_long_active_pane_ParamLimits

0x5b60,	// (0x0001095a) tabs_2_long_active_pane

0x5b72,	// (0x0001096c) tabs_2_long_passive_pane_ParamLimits

0x5b72,	// (0x0001096c) tabs_2_long_passive_pane

0x5b21,	// (0x0001091b) tabs_3_long_active_pane_ParamLimits

0x5b21,	// (0x0001091b) tabs_3_long_active_pane

0x5b34,	// (0x0001092e) tabs_3_long_passive_pane_ParamLimits

0x5b34,	// (0x0001092e) tabs_3_long_passive_pane

0x5b4d,	// (0x00010947) tabs_3_long_passive_pane_cp_ParamLimits

0x5b4d,	// (0x00010947) tabs_3_long_passive_pane_cp

0x5ac7,	// (0x000108c1) volume_small_pane_g1

0x5ad0,	// (0x000108ca) volume_small_pane_g2

0x5ad9,	// (0x000108d3) volume_small_pane_g3

0x5ae2,	// (0x000108dc) volume_small_pane_g4

0x5aeb,	// (0x000108e5) volume_small_pane_g5

0x5af4,	// (0x000108ee) volume_small_pane_g6

0x5afd,	// (0x000108f7) volume_small_pane_g7

0x5b06,	// (0x00010900) volume_small_pane_g8

0x5b0f,	// (0x00010909) volume_small_pane_g9

0x5b18,	// (0x00010912) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x0001a6ab) volume_small_pane_g

0x6ede,	// (0x00011cd8) bg_active_tab_pane_cp2_ParamLimits

0x6ede,	// (0x00011cd8) bg_active_tab_pane_cp2

0x6eec,	// (0x00011ce6) tabs_3_active_pane_g1

0x6ef4,	// (0x00011cee) tabs_3_active_pane_t1

0x6ede,	// (0x00011cd8) bg_passive_tab_pane_cp2_ParamLimits

0x6ede,	// (0x00011cd8) bg_passive_tab_pane_cp2

0x6eec,	// (0x00011ce6) tabs_3_passive_pane_g1

0x6ef4,	// (0x00011cee) tabs_3_passive_pane_t1

0x6ede,	// (0x00011cd8) bg_active_tab_pane_cp3_ParamLimits

0x6ede,	// (0x00011cd8) bg_active_tab_pane_cp3

0x6f06,	// (0x00011d00) tabs_4_active_pane_g1

0x6f0e,	// (0x00011d08) tabs_4_active_pane_t1

0x6ede,	// (0x00011cd8) bg_passive_tab_pane_cp3_ParamLimits

0x6ede,	// (0x00011cd8) bg_passive_tab_pane_cp3

0x6f06,	// (0x00011d00) tabs_4_1_passive_pane_g1

0x6f0e,	// (0x00011d08) tabs_4_1_passive_pane_t1

0x8ec7,	// (0x00013cc1) list_highlight_pane_cp2

0xa92f,	// (0x00015729) list_set_pane_ParamLimits

0xa92f,	// (0x00015729) list_set_pane

0xa9d5,	// (0x000157cf) main_pane_set_t1_ParamLimits

0xa9d5,	// (0x000157cf) main_pane_set_t1

0xa9f5,	// (0x000157ef) main_pane_set_t2_ParamLimits

0xa9f5,	// (0x000157ef) main_pane_set_t2

0xaa09,	// (0x00015803) main_pane_set_t3_ParamLimits

0xaa09,	// (0x00015803) main_pane_set_t3

0xaa1b,	// (0x00015815) main_pane_set_t4_ParamLimits

0xaa1b,	// (0x00015815) main_pane_set_t4

0x0003,

0xf981,	// (0x0001a77b) main_pane_set_t_ParamLimits

0xf981,	// (0x0001a77b) main_pane_set_t

0xaa2d,	// (0x00015827) setting_code_pane

0xaa39,	// (0x00015833) setting_slider_graphic_pane

0xaa39,	// (0x00015833) setting_slider_pane

0xaa39,	// (0x00015833) setting_text_pane

0xaa39,	// (0x00015833) setting_volume_pane

0x4ccc,	// (0x0000fac6) volume_set_pane

0x6ede,	// (0x00011cd8) bg_set_opt_pane_cp

0x4cd4,	// (0x0000face) setting_slider_pane_t1

0x4ced,	// (0x0000fae7) setting_slider_pane_t2

0x4d07,	// (0x0000fb01) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0001a358) setting_slider_pane_t

0x4d1f,	// (0x0000fb19) slider_set_pane

0x6dfe,	// (0x00011bf8) bg_set_opt_pane_cp2

0x6f20,	// (0x00011d1a) setting_slider_graphic_pane_g1

0x4d35,	// (0x0000fb2f) setting_slider_graphic_pane_t1

0x4d45,	// (0x0000fb3f) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0001a35f) setting_slider_graphic_pane_t

0x4d55,	// (0x0000fb4f) slider_set_pane_cp

0x6dfe,	// (0x00011bf8) input_focus_pane_cp1

0xa8ee,	// (0x000156e8) list_set_text_pane

0x6df4,	// (0x00011bee) setting_text_pane_g1

0x6dfe,	// (0x00011bf8) input_focus_pane_cp2

0x6df4,	// (0x00011bee) setting_code_pane_g1

0x6f29,	// (0x00011d23) setting_code_pane_t1

0x6f37,	// (0x00011d31) set_text_pane_t1_ParamLimits

0x6f37,	// (0x00011d31) set_text_pane_t1

0x7e0b,	// (0x00012c05) set_opt_bg_pane_g1

0x7e13,	// (0x00012c0d) set_opt_bg_pane_g2

0xa8c8,	// (0x000156c2) set_opt_bg_pane_g3

0x7e23,	// (0x00012c1d) set_opt_bg_pane_g4

0x7e2b,	// (0x00012c25) set_opt_bg_pane_g5

0x7e33,	// (0x00012c2d) set_opt_bg_pane_g6

0xa8d2,	// (0x000156cc) set_opt_bg_pane_g7

0xa8da,	// (0x000156d4) set_opt_bg_pane_g8

0xa8e4,	// (0x000156de) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x0001a768) set_opt_bg_pane_g

0xa8bb,	// (0x000156b5) slider_set_pane_g1

0x5c8f,	// (0x00010a89) slider_set_pane_g2

0x0006,

0xf95f,	// (0x0001a759) slider_set_pane_g

0x5c2b,	// (0x00010a25) volume_set_pane_g1

0x5c33,	// (0x00010a2d) volume_set_pane_g2

0x5c3b,	// (0x00010a35) volume_set_pane_g3

0x5c43,	// (0x00010a3d) volume_set_pane_g4

0x5c4b,	// (0x00010a45) volume_set_pane_g5

0x5c53,	// (0x00010a4d) volume_set_pane_g6

0x5c5b,	// (0x00010a55) volume_set_pane_g7

0x5c63,	// (0x00010a5d) volume_set_pane_g8

0x5c6b,	// (0x00010a65) volume_set_pane_g9

0x5c73,	// (0x00010a6d) volume_set_pane_g10

0x0009,

0xf937,	// (0x0001a731) volume_set_pane_g

0x6f51,	// (0x00011d4b) indicator_pane_ParamLimits

0x6f51,	// (0x00011d4b) indicator_pane

0x6f5d,	// (0x00011d57) main_idle_pane_g2_ParamLimits

0x6f5d,	// (0x00011d57) main_idle_pane_g2

0x6f85,	// (0x00011d7f) main_pane_idle_g1_ParamLimits

0x6f85,	// (0x00011d7f) main_pane_idle_g1

0x6f92,	// (0x00011d8c) popup_clock_digital_analogue_window_ParamLimits

0x6f92,	// (0x00011d8c) popup_clock_digital_analogue_window

0x6fa9,	// (0x00011da3) soft_indicator_pane_ParamLimits

0x6fa9,	// (0x00011da3) soft_indicator_pane

0x6fb5,	// (0x00011daf) wallpaper_pane_ParamLimits

0x6fb5,	// (0x00011daf) wallpaper_pane

0x6df4,	// (0x00011bee) wallpaper_pane_g1

0x6fc9,	// (0x00011dc3) indicator_pane_g1_ParamLimits

0x6fc9,	// (0x00011dc3) indicator_pane_g1

0xadbb,	// (0x00015bb5) navi_navi_icon_text_pane_srt_g1

0x6fe4,	// (0x00011dde) soft_indicator_pane_t1

0x6ffe,	// (0x00011df8) aid_ps_area_pane

0x700f,	// (0x00011e09) aid_ps_clock_pane

0x701d,	// (0x00011e17) aid_ps_indicator_pane

0x7029,	// (0x00011e23) indicator_ps_pane_ParamLimits

0x7029,	// (0x00011e23) indicator_ps_pane

0x7038,	// (0x00011e32) power_save_pane_g1_ParamLimits

0x7038,	// (0x00011e32) power_save_pane_g1

0x7044,	// (0x00011e3e) power_save_pane_g2_ParamLimits

0x7044,	// (0x00011e3e) power_save_pane_g2

0x48d3,	// (0x0000f6cd) aid_navinavi_width_pane

0x6ffe,	// (0x00011df8) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0001a364) power_save_pane_g_ParamLimits

0xf56a,	// (0x0001a364) power_save_pane_g

0x7052,	// (0x00011e4c) power_save_pane_t1_ParamLimits

0x7052,	// (0x00011e4c) power_save_pane_t1

0x700f,	// (0x00011e09) aid_ps_clock_pane_ParamLimits

0x701d,	// (0x00011e17) aid_ps_indicator_pane_ParamLimits

0x7064,	// (0x00011e5e) power_save_pane_t4_ParamLimits

0x7064,	// (0x00011e5e) power_save_pane_t4

0x0001,

0xf56f,	// (0x0001a369) power_save_pane_t_ParamLimits

0xf56f,	// (0x0001a369) power_save_pane_t

0x708e,	// (0x00011e88) power_save_t3_ParamLimits

0x708e,	// (0x00011e88) power_save_t3

0x7079,	// (0x00011e73) power_save_t2_ParamLimits

0x7079,	// (0x00011e73) power_save_t2

0x70a3,	// (0x00011e9d) indicator_ps_pane_g1

0x70ac,	// (0x00011ea6) ai_gene_pane_ParamLimits

0x70ac,	// (0x00011ea6) ai_gene_pane

0x70b8,	// (0x00011eb2) ai_links_pane_ParamLimits

0x70b8,	// (0x00011eb2) ai_links_pane

0x70c4,	// (0x00011ebe) indicator_pane_cp1_ParamLimits

0x70c4,	// (0x00011ebe) indicator_pane_cp1

0x70d0,	// (0x00011eca) main_pane_idle_g1_cp_ParamLimits

0x70d0,	// (0x00011eca) main_pane_idle_g1_cp

0x70dc,	// (0x00011ed6) popup_ai_links_title_window

0x70e5,	// (0x00011edf) soft_indicator_pane_cp1_ParamLimits

0x70e5,	// (0x00011edf) soft_indicator_pane_cp1

0xa681,	// (0x0001547b) ai_links_pane_g1

0xa68a,	// (0x00015484) grid_ai_links_pane

0xa664,	// (0x0001545e) ai_gene_pane_1

0xa66f,	// (0x00015469) ai_gene_pane_2

0xa678,	// (0x00015472) list_highlight_pane_cp4

0xa648,	// (0x00015442) cell_ai_link_pane_ParamLimits

0xa648,	// (0x00015442) cell_ai_link_pane

0xa640,	// (0x0001543a) cell_ai_link_pane_g1

0x7315,	// (0x0001210f) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x0001a70c) cell_ai_link_pane_g

0x6dfe,	// (0x00011bf8) grid_highlight_cp2

0x6dfe,	// (0x00011bf8) bg_popup_sub_pane_cp1

0x70ff,	// (0x00011ef9) popup_ai_links_title_window_t1

0xa58e,	// (0x00015388) ai_gene_pane_1_g1_ParamLimits

0xa58e,	// (0x00015388) ai_gene_pane_1_g1

0xa59a,	// (0x00015394) ai_gene_pane_1_g2_ParamLimits

0xa59a,	// (0x00015394) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x0001a702) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x0001a702) ai_gene_pane_1_g

0xa5a7,	// (0x000153a1) ai_gene_pane_1_t1_ParamLimits

0xa5a7,	// (0x000153a1) ai_gene_pane_1_t1

0xa5db,	// (0x000153d5) grid_ai_soft_ind_pane

0xa579,	// (0x00015373) ai_gene_pane_2_t1_ParamLimits

0xa579,	// (0x00015373) ai_gene_pane_2_t1

0x710e,	// (0x00011f08) main_pane_empty_t1_ParamLimits

0x710e,	// (0x00011f08) main_pane_empty_t1

0x7126,	// (0x00011f20) main_pane_empty_t2_ParamLimits

0x7126,	// (0x00011f20) main_pane_empty_t2

0x713b,	// (0x00011f35) main_pane_empty_t3_ParamLimits

0x713b,	// (0x00011f35) main_pane_empty_t3

0x714d,	// (0x00011f47) main_pane_empty_t4_ParamLimits

0x714d,	// (0x00011f47) main_pane_empty_t4

0x715f,	// (0x00011f59) main_pane_empty_t5_ParamLimits

0x715f,	// (0x00011f59) main_pane_empty_t5

0x0004,

0xf574,	// (0x0001a36e) main_pane_empty_t_ParamLimits

0xf574,	// (0x0001a36e) main_pane_empty_t

0x7f08,	// (0x00012d02) bg_popup_window_pane_ParamLimits

0x7f08,	// (0x00012d02) bg_popup_window_pane

0xa2e9,	// (0x000150e3) find_popup_pane_cp2_ParamLimits

0xa2e9,	// (0x000150e3) find_popup_pane_cp2

0xa2f5,	// (0x000150ef) heading_pane_ParamLimits

0xa2f5,	// (0x000150ef) heading_pane

0x6dfe,	// (0x00011bf8) bg_popup_sub_pane

0xa263,	// (0x0001505d) bg_popup_window_pane_g1_ParamLimits

0xa263,	// (0x0001505d) bg_popup_window_pane_g1

0xa26f,	// (0x00015069) bg_popup_window_pane_g2_ParamLimits

0xa26f,	// (0x00015069) bg_popup_window_pane_g2

0xa27b,	// (0x00015075) bg_popup_window_pane_g3_ParamLimits

0xa27b,	// (0x00015075) bg_popup_window_pane_g3

0xa287,	// (0x00015081) bg_popup_window_pane_g4_ParamLimits

0xa287,	// (0x00015081) bg_popup_window_pane_g4

0xa293,	// (0x0001508d) bg_popup_window_pane_g5_ParamLimits

0xa293,	// (0x0001508d) bg_popup_window_pane_g5

0xa29f,	// (0x00015099) bg_popup_window_pane_g6_ParamLimits

0xa29f,	// (0x00015099) bg_popup_window_pane_g6

0xa2ab,	// (0x000150a5) bg_popup_window_pane_g7_ParamLimits

0xa2ab,	// (0x000150a5) bg_popup_window_pane_g7

0xa2b7,	// (0x000150b1) bg_popup_window_pane_g8_ParamLimits

0xa2b7,	// (0x000150b1) bg_popup_window_pane_g8

0xa2c3,	// (0x000150bd) bg_popup_window_pane_g9_ParamLimits

0xa2c3,	// (0x000150bd) bg_popup_window_pane_g9

0xa2cf,	// (0x000150c9) bg_popup_window_pane_g10_ParamLimits

0xa2cf,	// (0x000150c9) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x0001a6ca) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x0001a6ca) bg_popup_window_pane_g

0xa1f8,	// (0x00014ff2) bg_popup_heading_pane_ParamLimits

0xa1f8,	// (0x00014ff2) bg_popup_heading_pane

0x5d17,	// (0x00010b11) tabs_4_passive_pane_cp_srt_ParamLimits

0x5d17,	// (0x00010b11) tabs_4_passive_pane_cp_srt

0x5d29,	// (0x00010b23) tabs_4_passive_pane_srt_ParamLimits

0xa20c,	// (0x00015006) heading_pane_g2

0x5d29,	// (0x00010b23) tabs_4_passive_pane_srt

0x8ec7,	// (0x00013cc1) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8ec7,	// (0x00013cc1) bg_passive_tab_pane_cp3_srt

0xa214,	// (0x0001500e) heading_pane_t1_ParamLimits

0xa214,	// (0x0001500e) heading_pane_t1

0xa22b,	// (0x00015025) heading_pane_t2_ParamLimits

0xa22b,	// (0x00015025) heading_pane_t2

0x0001,

0xf8cb,	// (0x0001a6c5) heading_pane_t_ParamLimits

0xf8cb,	// (0x0001a6c5) heading_pane_t

0x9d19,	// (0x00014b13) bg_popup_heading_pane_g1

0x9dc8,	// (0x00014bc2) bg_popup_heading_pane_g2

0x9dd2,	// (0x00014bcc) bg_popup_heading_pane_g3

0x9ddc,	// (0x00014bd6) bg_popup_heading_pane_g4

0x9de6,	// (0x00014be0) bg_popup_heading_pane_g5

0x9df0,	// (0x00014bea) bg_popup_heading_pane_g6

0x9df8,	// (0x00014bf2) bg_popup_heading_pane_g7

0x9e00,	// (0x00014bfa) bg_popup_heading_pane_g8

0x9e0a,	// (0x00014c04) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x0001a681) bg_popup_heading_pane_g

0x9407,	// (0x00014201) bg_popup_sub_pane_g1

0x9417,	// (0x00014211) bg_popup_sub_pane_g2

0x940f,	// (0x00014209) bg_popup_sub_pane_g3

0x9427,	// (0x00014221) bg_popup_sub_pane_g4

0x941f,	// (0x00014219) bg_popup_sub_pane_g5

0x942f,	// (0x00014229) bg_popup_sub_pane_g6

0x9437,	// (0x00014231) bg_popup_sub_pane_g7

0x9447,	// (0x00014241) bg_popup_sub_pane_g8

0x943f,	// (0x00014239) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x0001a65b) bg_popup_sub_pane_g

0x7173,	// (0x00011f6d) bg_popup_window_pane_cp5_ParamLimits

0x7173,	// (0x00011f6d) bg_popup_window_pane_cp5

0x718f,	// (0x00011f89) popup_note_window_g1_ParamLimits

0x718f,	// (0x00011f89) popup_note_window_g1

0x719b,	// (0x00011f95) popup_note_window_t1_ParamLimits

0x719b,	// (0x00011f95) popup_note_window_t1

0x71b1,	// (0x00011fab) popup_note_window_t2_ParamLimits

0x71b1,	// (0x00011fab) popup_note_window_t2

0x71c7,	// (0x00011fc1) popup_note_window_t3_ParamLimits

0x71c7,	// (0x00011fc1) popup_note_window_t3

0x71dd,	// (0x00011fd7) popup_note_window_t4_ParamLimits

0x71dd,	// (0x00011fd7) popup_note_window_t4

0x7205,	// (0x00011fff) popup_note_window_t5_ParamLimits

0x7205,	// (0x00011fff) popup_note_window_t5

0x0004,

0xf57f,	// (0x0001a379) popup_note_window_t_ParamLimits

0xf57f,	// (0x0001a379) popup_note_window_t

0x7229,	// (0x00012023) bg_popup_window_pane_cp6_ParamLimits

0x7229,	// (0x00012023) bg_popup_window_pane_cp6

0x9c95,	// (0x00014a8f) popup_note_image_window_g1_ParamLimits

0x9c95,	// (0x00014a8f) popup_note_image_window_g1

0x9ca1,	// (0x00014a9b) popup_note_image_window_g2_ParamLimits

0x9ca1,	// (0x00014a9b) popup_note_image_window_g2

0x0001,

0xf855,	// (0x0001a64f) popup_note_image_window_g_ParamLimits

0xf855,	// (0x0001a64f) popup_note_image_window_g

0x9cba,	// (0x00014ab4) popup_note_image_window_t1_ParamLimits

0x9cba,	// (0x00014ab4) popup_note_image_window_t1

0x9cd3,	// (0x00014acd) popup_note_image_window_t2_ParamLimits

0x9cd3,	// (0x00014acd) popup_note_image_window_t2

0x9cec,	// (0x00014ae6) popup_note_image_window_t3_ParamLimits

0x9cec,	// (0x00014ae6) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x0001a654) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x0001a654) popup_note_image_window_t

0x9b56,	// (0x00014950) bg_popup_window_pane_cp7_ParamLimits

0x9b56,	// (0x00014950) bg_popup_window_pane_cp7

0x9b86,	// (0x00014980) popup_note_wait_window_g1_ParamLimits

0x9b86,	// (0x00014980) popup_note_wait_window_g1

0x9b92,	// (0x0001498c) popup_note_wait_window_g2_ParamLimits

0x9b92,	// (0x0001498c) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x0001a63d) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x0001a63d) popup_note_wait_window_g

0x9baa,	// (0x000149a4) popup_note_wait_window_t1_ParamLimits

0x9baa,	// (0x000149a4) popup_note_wait_window_t1

0x9bd1,	// (0x000149cb) popup_note_wait_window_t2_ParamLimits

0x9bd1,	// (0x000149cb) popup_note_wait_window_t2

0x9bee,	// (0x000149e8) popup_note_wait_window_t3_ParamLimits

0x9bee,	// (0x000149e8) popup_note_wait_window_t3

0x9c01,	// (0x000149fb) popup_note_wait_window_t4_ParamLimits

0x9c01,	// (0x000149fb) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x0001a644) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x0001a644) popup_note_wait_window_t

0x9c26,	// (0x00014a20) wait_bar_pane_ParamLimits

0x9c26,	// (0x00014a20) wait_bar_pane

0x6dfe,	// (0x00011bf8) wait_anim_pane

0x6dfe,	// (0x00011bf8) wait_border_pane

0x6df4,	// (0x00011bee) wait_anim_pane_g1

0x6df4,	// (0x00011bee) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x0001a4f8) wait_anim_pane_g

0x9afa,	// (0x000148f4) wait_border_pane_g1

0x9b05,	// (0x000148ff) wait_border_pane_g2

0x9b0e,	// (0x00014908) wait_border_pane_g3

0x0002,

0xf83c,	// (0x0001a636) wait_border_pane_g

0x9965,	// (0x0001475f) bg_popup_window_pane_cp16_ParamLimits

0x9965,	// (0x0001475f) bg_popup_window_pane_cp16

0x9a65,	// (0x0001485f) indicator_popup_pane_cp4_ParamLimits

0x9a65,	// (0x0001485f) indicator_popup_pane_cp4

0x9a79,	// (0x00014873) popup_query_data_window_t1_ParamLimits

0x9a79,	// (0x00014873) popup_query_data_window_t1

0x9a8b,	// (0x00014885) popup_query_data_window_t2_ParamLimits

0x9a8b,	// (0x00014885) popup_query_data_window_t2

0x9aa4,	// (0x0001489e) popup_query_data_window_t3_ParamLimits

0x9aa4,	// (0x0001489e) popup_query_data_window_t3

0x0002,

0xf835,	// (0x0001a62f) popup_query_data_window_t_ParamLimits

0xf835,	// (0x0001a62f) popup_query_data_window_t

0x9abe,	// (0x000148b8) query_popup_data_pane_ParamLimits

0x9abe,	// (0x000148b8) query_popup_data_pane

0x9ad2,	// (0x000148cc) query_popup_data_pane_cp1_ParamLimits

0x9ad2,	// (0x000148cc) query_popup_data_pane_cp1

0x9965,	// (0x0001475f) bg_popup_window_pane_cp10_ParamLimits

0x9965,	// (0x0001475f) bg_popup_window_pane_cp10

0x9997,	// (0x00014791) indicator_popup_pane_ParamLimits

0x9997,	// (0x00014791) indicator_popup_pane

0x99b9,	// (0x000147b3) popup_query_code_window_t1_ParamLimits

0x99b9,	// (0x000147b3) popup_query_code_window_t1

0x99d3,	// (0x000147cd) popup_query_code_window_t2_ParamLimits

0x99d3,	// (0x000147cd) popup_query_code_window_t2

0x9a1c,	// (0x00014816) popup_query_code_window_t3_ParamLimits

0x9a1c,	// (0x00014816) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x0001a628) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x0001a628) popup_query_code_window_t

0x9a4b,	// (0x00014845) query_popup_pane_ParamLimits

0x9a4b,	// (0x00014845) query_popup_pane

0x7229,	// (0x00012023) bg_popup_window_pane_cp15_ParamLimits

0x7229,	// (0x00012023) bg_popup_window_pane_cp15

0x7247,	// (0x00012041) indicator_popup_pane_cp1_ParamLimits

0x7247,	// (0x00012041) indicator_popup_pane_cp1

0x725a,	// (0x00012054) indicator_popup_pane_cp2_ParamLimits

0x725a,	// (0x00012054) indicator_popup_pane_cp2

0x726d,	// (0x00012067) popup_query_data_code_window_g1_ParamLimits

0x726d,	// (0x00012067) popup_query_data_code_window_g1

0x7280,	// (0x0001207a) popup_query_data_code_window_t1_ParamLimits

0x7280,	// (0x0001207a) popup_query_data_code_window_t1

0x7292,	// (0x0001208c) popup_query_data_code_window_t2_ParamLimits

0x7292,	// (0x0001208c) popup_query_data_code_window_t2

0x72a4,	// (0x0001209e) popup_query_data_code_window_t3_ParamLimits

0x72a4,	// (0x0001209e) popup_query_data_code_window_t3

0x72ba,	// (0x000120b4) popup_query_data_code_window_t4_ParamLimits

0x72ba,	// (0x000120b4) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0001a384) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0001a384) popup_query_data_code_window_t

0x59d8,	// (0x000107d2) list_single_midp_graphic_pane_g3

0x72d2,	// (0x000120cc) query_popup_data_pane_cp2_ParamLimits

0x72e5,	// (0x000120df) query_popup_pane_cp2_ParamLimits

0x72e5,	// (0x000120df) query_popup_pane_cp2

0x6dfe,	// (0x00011bf8) bg_popup_window_pane_cp11

0x995d,	// (0x00014757) heading_pane_cp5

0x73d0,	// (0x000121ca) listscroll_popup_info_pane

0x6dfe,	// (0x00011bf8) input_focus_pane_cp3

0x72f8,	// (0x000120f2) query_popup_pane_t1

0x7306,	// (0x00012100) list_popup_info_pane_ParamLimits

0x7306,	// (0x00012100) list_popup_info_pane

0x7315,	// (0x0001210f) listscroll_popup_info_pane_g1

0x731d,	// (0x00012117) scroll_pane_cp7

0x7327,	// (0x00012121) popup_info_list_pane_t1_ParamLimits

0x7327,	// (0x00012121) popup_info_list_pane_t1

0x7341,	// (0x0001213b) popup_info_list_pane_t2_ParamLimits

0x7341,	// (0x0001213b) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0001a38d) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0001a38d) popup_info_list_pane_t

0x6dfe,	// (0x00011bf8) bg_popup_window_pane_cp12

0xadd5,	// (0x00015bcf) find_popup_pane

0x6ede,	// (0x00011cd8) bg_popup_window_pane_cp3

0x735b,	// (0x00012155) heading_pane_cp3

0x7367,	// (0x00012161) listscroll_popup_graphic_pane

0x6dfe,	// (0x00011bf8) bg_popup_window_pane_cp4

0x73c6,	// (0x000121c0) heading_pane_cp4

0x73d0,	// (0x000121ca) listscroll_popup_colour_pane

0x73d8,	// (0x000121d2) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x73d8,	// (0x000121d2) cell_large_graphic_colour_none_popup_pane

0x73ec,	// (0x000121e6) grid_large_graphic_colour_popup_pane_ParamLimits

0x73ec,	// (0x000121e6) grid_large_graphic_colour_popup_pane

0x7418,	// (0x00012212) listscroll_popup_colour_pane_g1_ParamLimits

0x7418,	// (0x00012212) listscroll_popup_colour_pane_g1

0x742f,	// (0x00012229) listscroll_popup_colour_pane_g2_ParamLimits

0x742f,	// (0x00012229) listscroll_popup_colour_pane_g2

0x7446,	// (0x00012240) listscroll_popup_colour_pane_g3_ParamLimits

0x7446,	// (0x00012240) listscroll_popup_colour_pane_g3

0x7456,	// (0x00012250) listscroll_popup_colour_pane_g4_ParamLimits

0x7456,	// (0x00012250) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0001a392) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0001a392) listscroll_popup_colour_pane_g

0x746a,	// (0x00012264) scroll_pane_cp6_ParamLimits

0x746a,	// (0x00012264) scroll_pane_cp6

0x747c,	// (0x00012276) cell_large_graphic_colour_popup_pane_ParamLimits

0x747c,	// (0x00012276) cell_large_graphic_colour_popup_pane

0x749b,	// (0x00012295) cell_large_graphic_colour_none_popup_pane_t1

0x6dfe,	// (0x00011bf8) grid_highlight_pane_cp5

0x74aa,	// (0x000122a4) cell_large_graphic_colour_popup_pane_g1

0x74b2,	// (0x000122ac) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0001a39b) cell_large_graphic_colour_popup_pane_g

0x74ba,	// (0x000122b4) cell_large_graphic_colour_popup_pane_g2_copy1

0x74c3,	// (0x000122bd) grid_highlight_pane_cp4

0x74cb,	// (0x000122c5) bg_popup_window_pane_cp8_ParamLimits

0x74cb,	// (0x000122c5) bg_popup_window_pane_cp8

0x74e6,	// (0x000122e0) popup_snote_single_text_window_g1_ParamLimits

0x74e6,	// (0x000122e0) popup_snote_single_text_window_g1

0x74f8,	// (0x000122f2) popup_snote_single_text_window_t1_ParamLimits

0x74f8,	// (0x000122f2) popup_snote_single_text_window_t1

0x750b,	// (0x00012305) popup_snote_single_text_window_t2_ParamLimits

0x750b,	// (0x00012305) popup_snote_single_text_window_t2

0x751e,	// (0x00012318) popup_snote_single_text_window_t3_ParamLimits

0x751e,	// (0x00012318) popup_snote_single_text_window_t3

0x7557,	// (0x00012351) popup_snote_single_text_window_t4_ParamLimits

0x7557,	// (0x00012351) popup_snote_single_text_window_t4

0x758b,	// (0x00012385) popup_snote_single_text_window_t5_ParamLimits

0x758b,	// (0x00012385) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0001a3a0) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0001a3a0) popup_snote_single_text_window_t

0x75ba,	// (0x000123b4) bg_popup_window_pane_cp9_ParamLimits

0x75ba,	// (0x000123b4) bg_popup_window_pane_cp9

0x74e6,	// (0x000122e0) popup_snote_single_graphic_window_g1_ParamLimits

0x74e6,	// (0x000122e0) popup_snote_single_graphic_window_g1

0x75c8,	// (0x000123c2) popup_snote_single_graphic_window_g2_ParamLimits

0x75c8,	// (0x000123c2) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0001a3ab) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0001a3ab) popup_snote_single_graphic_window_g

0x75d4,	// (0x000123ce) popup_snote_single_graphic_window_t1_ParamLimits

0x75d4,	// (0x000123ce) popup_snote_single_graphic_window_t1

0x75e7,	// (0x000123e1) popup_snote_single_graphic_window_t2_ParamLimits

0x75e7,	// (0x000123e1) popup_snote_single_graphic_window_t2

0x75fa,	// (0x000123f4) popup_snote_single_graphic_window_t3_ParamLimits

0x75fa,	// (0x000123f4) popup_snote_single_graphic_window_t3

0x7633,	// (0x0001242d) popup_snote_single_graphic_window_t4_ParamLimits

0x7633,	// (0x0001242d) popup_snote_single_graphic_window_t4

0x7667,	// (0x00012461) popup_snote_single_graphic_window_t5_ParamLimits

0x7667,	// (0x00012461) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0001a3b0) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0001a3b0) popup_snote_single_graphic_window_t

0xad19,	// (0x00015b13) grid_graphic_popup_pane_ParamLimits

0xad19,	// (0x00015b13) grid_graphic_popup_pane

0xad41,	// (0x00015b3b) listscroll_popup_graphic_pane_g1_ParamLimits

0xad41,	// (0x00015b3b) listscroll_popup_graphic_pane_g1

0xad55,	// (0x00015b4f) listscroll_popup_graphic_pane_g2_ParamLimits

0xad55,	// (0x00015b4f) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x0001a7a5) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x0001a7a5) listscroll_popup_graphic_pane_g

0xad69,	// (0x00015b63) scroll_pane_cp5

0xacb6,	// (0x00015ab0) cell_graphic_popup_pane_ParamLimits

0xacb6,	// (0x00015ab0) cell_graphic_popup_pane

0xac97,	// (0x00015a91) cell_graphic_popup_pane_g1

0xac9f,	// (0x00015a99) cell_graphic_popup_pane_g2

0x74ba,	// (0x000122b4) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x0001a79e) cell_graphic_popup_pane_g

0xaca8,	// (0x00015aa2) cell_graphic_popup_pane_t2

0x74c3,	// (0x000122bd) grid_highlight_pane_cp3

0x76a8,	// (0x000124a2) list_gen_pane_ParamLimits

0x76a8,	// (0x000124a2) list_gen_pane

0x76da,	// (0x000124d4) scroll_pane

0xabef,	// (0x000159e9) bg_list_pane_g1_ParamLimits

0xabef,	// (0x000159e9) bg_list_pane_g1

0xac0c,	// (0x00015a06) bg_list_pane_g2_ParamLimits

0xac0c,	// (0x00015a06) bg_list_pane_g2

0xac21,	// (0x00015a1b) bg_list_pane_g3_ParamLimits

0xac21,	// (0x00015a1b) bg_list_pane_g3

0xac35,	// (0x00015a2f) bg_list_pane_g4_ParamLimits

0xac35,	// (0x00015a2f) bg_list_pane_g4

0xac49,	// (0x00015a43) bg_list_pane_g5_ParamLimits

0xac49,	// (0x00015a43) bg_list_pane_g5

0x0004,

0xf999,	// (0x0001a793) bg_list_pane_g_ParamLimits

0xf999,	// (0x0001a793) bg_list_pane_g

0xaaf2,	// (0x000158ec) list_double2_graphic_large_graphic_pane_ParamLimits

0xaaf2,	// (0x000158ec) list_double2_graphic_large_graphic_pane

0xaaf2,	// (0x000158ec) list_double2_graphic_pane_ParamLimits

0xaaf2,	// (0x000158ec) list_double2_graphic_pane

0xaaf2,	// (0x000158ec) list_double2_large_graphic_pane_ParamLimits

0xaaf2,	// (0x000158ec) list_double2_large_graphic_pane

0xaaf2,	// (0x000158ec) list_double2_pane_ParamLimits

0xaaf2,	// (0x000158ec) list_double2_pane

0xaaf2,	// (0x000158ec) list_double_graphic_heading_pane_ParamLimits

0xaaf2,	// (0x000158ec) list_double_graphic_heading_pane

0xaaf2,	// (0x000158ec) list_double_graphic_pane_ParamLimits

0xaaf2,	// (0x000158ec) list_double_graphic_pane

0xaaf2,	// (0x000158ec) list_double_heading_pane_ParamLimits

0xaaf2,	// (0x000158ec) list_double_heading_pane

0xaaf2,	// (0x000158ec) list_double_large_graphic_pane_ParamLimits

0xaaf2,	// (0x000158ec) list_double_large_graphic_pane

0xaaf2,	// (0x000158ec) list_double_number_pane_ParamLimits

0xaaf2,	// (0x000158ec) list_double_number_pane

0xaaf2,	// (0x000158ec) list_double_pane_ParamLimits

0xaaf2,	// (0x000158ec) list_double_pane

0xaaf2,	// (0x000158ec) list_double_time_pane_ParamLimits

0xaaf2,	// (0x000158ec) list_double_time_pane

0xaaf2,	// (0x000158ec) list_setting_number_pane_ParamLimits

0xaaf2,	// (0x000158ec) list_setting_number_pane

0xaaf2,	// (0x000158ec) list_setting_pane_ParamLimits

0xaaf2,	// (0x000158ec) list_setting_pane

0xab5b,	// (0x00015955) list_single_2graphic_pane_ParamLimits

0xab5b,	// (0x00015955) list_single_2graphic_pane

0xab5b,	// (0x00015955) list_single_graphic_heading_pane_ParamLimits

0xab5b,	// (0x00015955) list_single_graphic_heading_pane

0xab5b,	// (0x00015955) list_single_graphic_pane_ParamLimits

0xab5b,	// (0x00015955) list_single_graphic_pane

0xab5b,	// (0x00015955) list_single_heading_pane_ParamLimits

0xab5b,	// (0x00015955) list_single_heading_pane

0xabd0,	// (0x000159ca) list_single_large_graphic_pane_ParamLimits

0xabd0,	// (0x000159ca) list_single_large_graphic_pane

0xab5b,	// (0x00015955) list_single_number_heading_pane_ParamLimits

0xab5b,	// (0x00015955) list_single_number_heading_pane

0xab5b,	// (0x00015955) list_single_number_pane_ParamLimits

0xab5b,	// (0x00015955) list_single_number_pane

0xab5b,	// (0x00015955) list_single_pane_ParamLimits

0xab5b,	// (0x00015955) list_single_pane

0x6dfe,	// (0x00011bf8) list_highlight_pane_cp1

0x771a,	// (0x00012514) list_single_pane_g1_ParamLimits

0x771a,	// (0x00012514) list_single_pane_g1

0x7726,	// (0x00012520) list_single_pane_g2_ParamLimits

0x7726,	// (0x00012520) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0001a3c2) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0001a3c2) list_single_pane_g

0xaaab,	// (0x000158a5) list_single_pane_t1_ParamLimits

0xaaab,	// (0x000158a5) list_single_pane_t1

0x771a,	// (0x00012514) list_single_number_pane_g1_ParamLimits

0x771a,	// (0x00012514) list_single_number_pane_g1

0x7726,	// (0x00012520) list_single_number_pane_g2_ParamLimits

0x7726,	// (0x00012520) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0001a3c2) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0001a3c2) list_single_number_pane_g

0xa837,	// (0x00015631) list_single_number_pane_t1_ParamLimits

0xa837,	// (0x00015631) list_single_number_pane_t1

0xa84d,	// (0x00015647) list_single_number_pane_t2_ParamLimits

0xa84d,	// (0x00015647) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x0001a754) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x0001a754) list_single_number_pane_t

0x770e,	// (0x00012508) list_single_graphic_pane_g1_ParamLimits

0x770e,	// (0x00012508) list_single_graphic_pane_g1

0x771a,	// (0x00012514) list_single_graphic_pane_g2_ParamLimits

0x771a,	// (0x00012514) list_single_graphic_pane_g2

0x7726,	// (0x00012520) list_single_graphic_pane_g3_ParamLimits

0x7726,	// (0x00012520) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0001a3bb) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0001a3bb) list_single_graphic_pane_g

0x7732,	// (0x0001252c) list_single_graphic_pane_t1_ParamLimits

0x7732,	// (0x0001252c) list_single_graphic_pane_t1

0x771a,	// (0x00012514) list_single_heading_pane_g1_ParamLimits

0x771a,	// (0x00012514) list_single_heading_pane_g1

0x7726,	// (0x00012520) list_single_heading_pane_g2_ParamLimits

0x7726,	// (0x00012520) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001a3c2) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001a3c2) list_single_heading_pane_g

0x7748,	// (0x00012542) list_single_heading_pane_t1_ParamLimits

0x7748,	// (0x00012542) list_single_heading_pane_t1

0x775e,	// (0x00012558) list_single_heading_pane_t2_ParamLimits

0x775e,	// (0x00012558) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0001a3c7) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0001a3c7) list_single_heading_pane_t

0x771a,	// (0x00012514) list_single_number_heading_pane_g1_ParamLimits

0x771a,	// (0x00012514) list_single_number_heading_pane_g1

0x7726,	// (0x00012520) list_single_number_heading_pane_g2_ParamLimits

0x7726,	// (0x00012520) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001a3c2) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001a3c2) list_single_number_heading_pane_g

0x7748,	// (0x00012542) list_single_number_heading_pane_t1_ParamLimits

0x7748,	// (0x00012542) list_single_number_heading_pane_t1

0x7770,	// (0x0001256a) list_single_number_heading_pane_t2_ParamLimits

0x7770,	// (0x0001256a) list_single_number_heading_pane_t2

0x7782,	// (0x0001257c) list_single_number_heading_pane_t3_ParamLimits

0x7782,	// (0x0001257c) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0001a3cc) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0001a3cc) list_single_number_heading_pane_t

0x7794,	// (0x0001258e) list_single_graphic_heading_pane_g1_ParamLimits

0x7794,	// (0x0001258e) list_single_graphic_heading_pane_g1

0x77a0,	// (0x0001259a) list_single_graphic_heading_pane_g4_ParamLimits

0x77a0,	// (0x0001259a) list_single_graphic_heading_pane_g4

0x7726,	// (0x00012520) list_single_graphic_heading_pane_g5_ParamLimits

0x7726,	// (0x00012520) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0001a3d3) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0001a3d3) list_single_graphic_heading_pane_g

0x7748,	// (0x00012542) list_single_graphic_heading_pane_t1_ParamLimits

0x7748,	// (0x00012542) list_single_graphic_heading_pane_t1

0x77b1,	// (0x000125ab) list_single_graphic_heading_pane_t2_ParamLimits

0x77b1,	// (0x000125ab) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0001a3da) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0001a3da) list_single_graphic_heading_pane_t

0x77c3,	// (0x000125bd) list_single_large_graphic_pane_g1_ParamLimits

0x77c3,	// (0x000125bd) list_single_large_graphic_pane_g1

0x77cf,	// (0x000125c9) list_single_large_graphic_pane_g2_ParamLimits

0x77cf,	// (0x000125c9) list_single_large_graphic_pane_g2

0x77db,	// (0x000125d5) list_single_large_graphic_pane_g3_ParamLimits

0x77db,	// (0x000125d5) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0001a3df) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0001a3df) list_single_large_graphic_pane_g

0x9b05,	// (0x000148ff) wait_border_pane_g2_copy1

0x77e7,	// (0x000125e1) list_single_large_graphic_pane_g4_cp2

0x77ef,	// (0x000125e9) list_single_large_graphic_pane_t1_ParamLimits

0x77ef,	// (0x000125e9) list_single_large_graphic_pane_t1

0x7805,	// (0x000125ff) list_double_pane_g1_ParamLimits

0x7805,	// (0x000125ff) list_double_pane_g1

0x7811,	// (0x0001260b) list_double_pane_g2_ParamLimits

0x7811,	// (0x0001260b) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0001a3e6) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0001a3e6) list_double_pane_g

0x781d,	// (0x00012617) list_double_pane_t1_ParamLimits

0x781d,	// (0x00012617) list_double_pane_t1

0x7833,	// (0x0001262d) list_double_pane_t2_ParamLimits

0x7833,	// (0x0001262d) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0001a3eb) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0001a3eb) list_double_pane_t

0x7845,	// (0x0001263f) list_double2_pane_g1_ParamLimits

0x7845,	// (0x0001263f) list_double2_pane_g1

0x7856,	// (0x00012650) list_double2_pane_g2_ParamLimits

0x7856,	// (0x00012650) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0001a3f0) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0001a3f0) list_double2_pane_g

0x7862,	// (0x0001265c) list_double2_pane_t1_ParamLimits

0x7862,	// (0x0001265c) list_double2_pane_t1

0x7878,	// (0x00012672) list_double2_pane_t2_ParamLimits

0x7878,	// (0x00012672) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0001a3f5) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0001a3f5) list_double2_pane_t

0x7805,	// (0x000125ff) list_double_number_pane_g1_ParamLimits

0x7805,	// (0x000125ff) list_double_number_pane_g1

0x7811,	// (0x0001260b) list_double_number_pane_g2_ParamLimits

0x7811,	// (0x0001260b) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0001a3e6) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0001a3e6) list_double_number_pane_g

0x788a,	// (0x00012684) list_double_number_pane_t1_ParamLimits

0x788a,	// (0x00012684) list_double_number_pane_t1

0x789c,	// (0x00012696) list_double_number_pane_t2_ParamLimits

0x789c,	// (0x00012696) list_double_number_pane_t2

0x78b2,	// (0x000126ac) list_double_number_pane_t3_ParamLimits

0x78b2,	// (0x000126ac) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0001a3fa) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0001a3fa) list_double_number_pane_t

0x78c4,	// (0x000126be) list_double_graphic_pane_g1_ParamLimits

0x78c4,	// (0x000126be) list_double_graphic_pane_g1

0x78d0,	// (0x000126ca) list_double_graphic_pane_g2_ParamLimits

0x78d0,	// (0x000126ca) list_double_graphic_pane_g2

0x78df,	// (0x000126d9) list_double_graphic_pane_g3_ParamLimits

0x78df,	// (0x000126d9) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0001a401) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0001a401) list_double_graphic_pane_g

0x78f7,	// (0x000126f1) list_double_graphic_pane_t1_ParamLimits

0x78f7,	// (0x000126f1) list_double_graphic_pane_t1

0x790d,	// (0x00012707) list_double_graphic_pane_t2_ParamLimits

0x790d,	// (0x00012707) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0001a40a) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0001a40a) list_double_graphic_pane_t

0x791f,	// (0x00012719) list_double2_graphic_pane_g1_ParamLimits

0x791f,	// (0x00012719) list_double2_graphic_pane_g1

0x792b,	// (0x00012725) list_double2_graphic_pane_g2_ParamLimits

0x792b,	// (0x00012725) list_double2_graphic_pane_g2

0x7856,	// (0x00012650) list_double2_graphic_pane_g3_ParamLimits

0x7856,	// (0x00012650) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0001a40f) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0001a40f) list_double2_graphic_pane_g

0x7937,	// (0x00012731) list_double2_graphic_pane_t1_ParamLimits

0x7937,	// (0x00012731) list_double2_graphic_pane_t1

0x794d,	// (0x00012747) list_double2_graphic_pane_t2_ParamLimits

0x794d,	// (0x00012747) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0001a416) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0001a416) list_double2_graphic_pane_t

0x795f,	// (0x00012759) list_double_large_graphic_pane_g1_ParamLimits

0x795f,	// (0x00012759) list_double_large_graphic_pane_g1

0x797e,	// (0x00012778) list_double_large_graphic_pane_g2_ParamLimits

0x797e,	// (0x00012778) list_double_large_graphic_pane_g2

0x7811,	// (0x0001260b) list_double_large_graphic_pane_g3_ParamLimits

0x7811,	// (0x0001260b) list_double_large_graphic_pane_g3

0x798f,	// (0x00012789) list_double_large_graphic_pane_g4_ParamLimits

0x798f,	// (0x00012789) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0001a41b) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0001a41b) list_double_large_graphic_pane_g

0x79b5,	// (0x000127af) list_double_large_graphic_pane_t1_ParamLimits

0x79b5,	// (0x000127af) list_double_large_graphic_pane_t1

0x79ce,	// (0x000127c8) list_double_large_graphic_pane_t2_ParamLimits

0x79ce,	// (0x000127c8) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0001a426) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0001a426) list_double_large_graphic_pane_t

0x79e0,	// (0x000127da) list_double2_large_graphic_pane_g1_ParamLimits

0x79e0,	// (0x000127da) list_double2_large_graphic_pane_g1

0x7845,	// (0x0001263f) list_double2_large_graphic_pane_g2_ParamLimits

0x7845,	// (0x0001263f) list_double2_large_graphic_pane_g2

0x7856,	// (0x00012650) list_double2_large_graphic_pane_g3_ParamLimits

0x7856,	// (0x00012650) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0001a42b) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0001a42b) list_double2_large_graphic_pane_g

0x79ec,	// (0x000127e6) list_double2_large_graphic_pane_t1_ParamLimits

0x79ec,	// (0x000127e6) list_double2_large_graphic_pane_t1

0x7a02,	// (0x000127fc) list_double2_large_graphic_pane_t2_ParamLimits

0x7a02,	// (0x000127fc) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0001a432) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0001a432) list_double2_large_graphic_pane_t

0x7a14,	// (0x0001280e) list_double_heading_pane_g1_ParamLimits

0x7a14,	// (0x0001280e) list_double_heading_pane_g1

0x7a25,	// (0x0001281f) list_double_heading_pane_g2_ParamLimits

0x7a25,	// (0x0001281f) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0001a437) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0001a437) list_double_heading_pane_g

0x7a31,	// (0x0001282b) list_double_heading_pane_t1_ParamLimits

0x7a31,	// (0x0001282b) list_double_heading_pane_t1

0x7a47,	// (0x00012841) list_double_heading_pane_t2_ParamLimits

0x7a47,	// (0x00012841) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0001a43c) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0001a43c) list_double_heading_pane_t

0x7a59,	// (0x00012853) list_double_graphic_heading_pane_g1_ParamLimits

0x7a59,	// (0x00012853) list_double_graphic_heading_pane_g1

0x7a14,	// (0x0001280e) list_double_graphic_heading_pane_g2_ParamLimits

0x7a14,	// (0x0001280e) list_double_graphic_heading_pane_g2

0x7a25,	// (0x0001281f) list_double_graphic_heading_pane_g3_ParamLimits

0x7a25,	// (0x0001281f) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0001a441) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0001a441) list_double_graphic_heading_pane_g

0x7a65,	// (0x0001285f) list_double_graphic_heading_pane_t1_ParamLimits

0x7a65,	// (0x0001285f) list_double_graphic_heading_pane_t1

0x7a7b,	// (0x00012875) list_double_graphic_heading_pane_t2_ParamLimits

0x7a7b,	// (0x00012875) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0001a448) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0001a448) list_double_graphic_heading_pane_t

0x797e,	// (0x00012778) list_double_time_pane_g1_ParamLimits

0x797e,	// (0x00012778) list_double_time_pane_g1

0x7811,	// (0x0001260b) list_double_time_pane_g2_ParamLimits

0x7811,	// (0x0001260b) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0001a44d) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0001a44d) list_double_time_pane_g

0x7a8d,	// (0x00012887) list_double_time_pane_t1_ParamLimits

0x7a8d,	// (0x00012887) list_double_time_pane_t1

0x7aa3,	// (0x0001289d) list_double_time_pane_t2_ParamLimits

0x7aa3,	// (0x0001289d) list_double_time_pane_t2

0x7ab5,	// (0x000128af) list_double_time_pane_t3_ParamLimits

0x7ab5,	// (0x000128af) list_double_time_pane_t3

0x7ac7,	// (0x000128c1) list_double_time_pane_t4_ParamLimits

0x7ac7,	// (0x000128c1) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0001a452) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0001a452) list_double_time_pane_t

0x792b,	// (0x00012725) list_setting_pane_g1_ParamLimits

0x792b,	// (0x00012725) list_setting_pane_g1

0x7856,	// (0x00012650) list_setting_pane_g2_ParamLimits

0x7856,	// (0x00012650) list_setting_pane_g2

0x0001,

0xf661,	// (0x0001a45b) list_setting_pane_g_ParamLimits

0xf661,	// (0x0001a45b) list_setting_pane_g

0x7ad9,	// (0x000128d3) list_setting_pane_t1_ParamLimits

0x7ad9,	// (0x000128d3) list_setting_pane_t1

0x7af0,	// (0x000128ea) list_setting_pane_t2_ParamLimits

0x7af0,	// (0x000128ea) list_setting_pane_t2

0x0002,

0xf666,	// (0x0001a460) list_setting_pane_t_ParamLimits

0xf666,	// (0x0001a460) list_setting_pane_t

0x7b2f,	// (0x00012929) set_value_pane_cp_ParamLimits

0x7b2f,	// (0x00012929) set_value_pane_cp

0x792b,	// (0x00012725) list_setting_number_pane_g1_ParamLimits

0x792b,	// (0x00012725) list_setting_number_pane_g1

0x7856,	// (0x00012650) list_setting_number_pane_g2_ParamLimits

0x7856,	// (0x00012650) list_setting_number_pane_g2

0x0001,

0xf661,	// (0x0001a45b) list_setting_number_pane_g_ParamLimits

0xf661,	// (0x0001a45b) list_setting_number_pane_g

0x7b3b,	// (0x00012935) list_setting_number_pane_t1_ParamLimits

0x7b3b,	// (0x00012935) list_setting_number_pane_t1

0x7b4f,	// (0x00012949) list_setting_number_pane_t2_ParamLimits

0x7b4f,	// (0x00012949) list_setting_number_pane_t2

0x7b66,	// (0x00012960) list_setting_number_pane_t3_ParamLimits

0x7b66,	// (0x00012960) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x0001a467) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x0001a467) list_setting_number_pane_t

0x7b2f,	// (0x00012929) set_value_pane_ParamLimits

0x7b2f,	// (0x00012929) set_value_pane

0x7ba9,	// (0x000129a3) bg_set_opt_pane_ParamLimits

0x7ba9,	// (0x000129a3) bg_set_opt_pane

0x7bca,	// (0x000129c4) set_value_pane_t1

0x7bd8,	// (0x000129d2) slider_set_pane_cp3

0x7be1,	// (0x000129db) volume_small_pane_cp

0x7bea,	// (0x000129e4) list_form_gen_pane

0x7bf3,	// (0x000129ed) scroll_pane_cp8

0x7c0c,	// (0x00012a06) form_field_data_pane_ParamLimits

0x7c0c,	// (0x00012a06) form_field_data_pane

0x7c2e,	// (0x00012a28) form_field_data_wide_pane_ParamLimits

0x7c2e,	// (0x00012a28) form_field_data_wide_pane

0x7c51,	// (0x00012a4b) form_field_popup_pane_ParamLimits

0x7c51,	// (0x00012a4b) form_field_popup_pane

0x7c71,	// (0x00012a6b) form_field_popup_wide_pane_ParamLimits

0x7c71,	// (0x00012a6b) form_field_popup_wide_pane

0x7c8e,	// (0x00012a88) form_field_slider_pane_ParamLimits

0x7c8e,	// (0x00012a88) form_field_slider_pane

0x7ca1,	// (0x00012a9b) form_field_slider_wide_pane_ParamLimits

0x7ca1,	// (0x00012a9b) form_field_slider_wide_pane

0x7cb4,	// (0x00012aae) data_form_pane

0x7cca,	// (0x00012ac4) form_field_data_pane_t1

0x7ce2,	// (0x00012adc) input_focus_pane

0x7cf0,	// (0x00012aea) data_form_wide_pane

0x7d1c,	// (0x00012b16) form_field_data_wide_pane_t1

0x74d8,	// (0x000122d2) input_focus_pane_cp6

0x7d3b,	// (0x00012b35) form_field_popup_pane_t1

0x7ce2,	// (0x00012adc) input_focus_pane_cp7

0x7d53,	// (0x00012b4d) list_form_pane

0x7d67,	// (0x00012b61) form_field_popup_wide_pane_t1

0x7ce2,	// (0x00012adc) input_focus_pane_cp8

0x7d7c,	// (0x00012b76) list_form_wide_pane

0x7d93,	// (0x00012b8d) form_field_slider_pane_t1_ParamLimits

0x7d93,	// (0x00012b8d) form_field_slider_pane_t1

0x7da5,	// (0x00012b9f) form_field_slider_pane_t2_ParamLimits

0x7da5,	// (0x00012b9f) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x0001a477) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x0001a477) form_field_slider_pane_t

0x7173,	// (0x00011f6d) input_focus_pane_cp9_ParamLimits

0x7173,	// (0x00011f6d) input_focus_pane_cp9

0x7db7,	// (0x00012bb1) slider_cont_pane_ParamLimits

0x7db7,	// (0x00012bb1) slider_cont_pane

0x7dcb,	// (0x00012bc5) form_field_slider_wide_pane_t1_ParamLimits

0x7dcb,	// (0x00012bc5) form_field_slider_wide_pane_t1

0x7ddd,	// (0x00012bd7) form_field_slider_wide_pane_t2_ParamLimits

0x7ddd,	// (0x00012bd7) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x0001a47c) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x0001a47c) form_field_slider_wide_pane_t

0x7173,	// (0x00011f6d) input_focus_pane_cp10_ParamLimits

0x7173,	// (0x00011f6d) input_focus_pane_cp10

0x7def,	// (0x00012be9) slider_cont_pane_cp1_ParamLimits

0x7def,	// (0x00012be9) slider_cont_pane_cp1

0x7e03,	// (0x00012bfd) slider_form_pane_cp

0x7e0b,	// (0x00012c05) input_focus_pane_g1

0x7e13,	// (0x00012c0d) input_focus_pane_g2

0x7e1b,	// (0x00012c15) input_focus_pane_g3

0x7e23,	// (0x00012c1d) input_focus_pane_g4

0x7e2b,	// (0x00012c25) input_focus_pane_g5

0x7e33,	// (0x00012c2d) input_focus_pane_g6

0x7e3b,	// (0x00012c35) input_focus_pane_g7

0x7e43,	// (0x00012c3d) input_focus_pane_g8

0x7e4b,	// (0x00012c45) input_focus_pane_g9

0x6df4,	// (0x00011bee) input_focus_pane_g10

0x0009,

0xf687,	// (0x0001a481) input_focus_pane_g

0x9b0e,	// (0x00014908) wait_border_pane_g3_copy1

0x7e53,	// (0x00012c4d) data_form_pane_t1

0x6df4,	// (0x00011bee) wait_anim_pane_g1_copy1

0xaa8e,	// (0x00015888) data_form_wide_pane_t1

0x7e6e,	// (0x00012c68) list_form_graphic_pane_cp_ParamLimits

0x7e6e,	// (0x00012c68) list_form_graphic_pane_cp

0xaa63,	// (0x0001585d) slider_form_pane_g1

0xaa6c,	// (0x00015866) slider_form_pane_g2

0x0006,

0xf98a,	// (0x0001a784) slider_form_pane_g

0x7e87,	// (0x00012c81) list_form_graphic_pane_ParamLimits

0x7e87,	// (0x00012c81) list_form_graphic_pane

0x7ea3,	// (0x00012c9d) list_form_graphic_pane_g1

0x7eab,	// (0x00012ca5) list_form_graphic_pane_t1_ParamLimits

0x7eab,	// (0x00012ca5) list_form_graphic_pane_t1

0x6ede,	// (0x00011cd8) list_highlight_pane_cp5_ParamLimits

0x6ede,	// (0x00011cd8) list_highlight_pane_cp5

0x7ec0,	// (0x00012cba) find_pane_g1

0x7ec9,	// (0x00012cc3) input_find_pane

0x7ed2,	// (0x00012ccc) input_find_pane_g1_ParamLimits

0x7ed2,	// (0x00012ccc) input_find_pane_g1

0x7ede,	// (0x00012cd8) input_find_pane_t1_ParamLimits

0x7ede,	// (0x00012cd8) input_find_pane_t1

0x7ef3,	// (0x00012ced) input_find_pane_t2_ParamLimits

0x7ef3,	// (0x00012ced) input_find_pane_t2

0x0001,

0xf69c,	// (0x0001a496) input_find_pane_t_ParamLimits

0xf69c,	// (0x0001a496) input_find_pane_t

0x7f08,	// (0x00012d02) input_focus_pane_cp5_ParamLimits

0x7f08,	// (0x00012d02) input_focus_pane_cp5

0x7f22,	// (0x00012d1c) bg_popup_window_pane_cp2_ParamLimits

0x7f22,	// (0x00012d1c) bg_popup_window_pane_cp2

0x7f2f,	// (0x00012d29) listscroll_menu_pane_ParamLimits

0x7f2f,	// (0x00012d29) listscroll_menu_pane

0x7f3b,	// (0x00012d35) popup_submenu_window_ParamLimits

0x7f3b,	// (0x00012d35) popup_submenu_window

0x7f67,	// (0x00012d61) find_popup_pane_g1

0x7f6f,	// (0x00012d69) input_popup_find_pane_cp

0x7f08,	// (0x00012d02) input_focus_pane_cp4_ParamLimits

0x7f08,	// (0x00012d02) input_focus_pane_cp4

0x7f85,	// (0x00012d7f) input_popup_find_pane_t1_ParamLimits

0x7f85,	// (0x00012d7f) input_popup_find_pane_t1

0x6dfe,	// (0x00011bf8) bg_popup_sub_pane_cp

0x7fb3,	// (0x00012dad) listscroll_popup_sub_pane

0x7fbb,	// (0x00012db5) list_submenu_pane_ParamLimits

0x7fbb,	// (0x00012db5) list_submenu_pane

0x7fcc,	// (0x00012dc6) scroll_pane_cp4

0x7fd4,	// (0x00012dce) list_single_popup_submenu_pane_ParamLimits

0x7fd4,	// (0x00012dce) list_single_popup_submenu_pane

0x7fe8,	// (0x00012de2) list_single_popup_submenu_pane_g1

0x7ff0,	// (0x00012dea) list_single_popup_submenu_pane_t1_ParamLimits

0x7ff0,	// (0x00012dea) list_single_popup_submenu_pane_t1

0x6ede,	// (0x00011cd8) bg_active_tab_pane_cp1_ParamLimits

0x6ede,	// (0x00011cd8) bg_active_tab_pane_cp1

0x8005,	// (0x00012dff) tabs_2_active_pane_g1

0x800d,	// (0x00012e07) tabs_2_active_pane_t1

0x6ede,	// (0x00011cd8) bg_passive_tab_pane_cp1_ParamLimits

0x6ede,	// (0x00011cd8) bg_passive_tab_pane_cp1

0x8005,	// (0x00012dff) tabs_2_passive_pane_g1

0x800d,	// (0x00012e07) tabs_2_passive_pane_t1

0x801f,	// (0x00012e19) bg_active_tab_pane_cp4

0x802d,	// (0x00012e27) tabs_2_long_active_pane_t1

0x8040,	// (0x00012e3a) bg_passive_tab_pane_cp4

0x59e0,	// (0x000107da) list_single_midp_graphic_pane_g4_ParamLimits

0x801f,	// (0x00012e19) bg_active_tab_pane_cp5

0x804c,	// (0x00012e46) tabs_3_long_active_pane_t1

0x8040,	// (0x00012e3a) bg_passive_tab_pane_cp5

0x59e0,	// (0x000107da) list_single_midp_graphic_pane_g4

0x6ede,	// (0x00011cd8) bg_popup_window_pane_cp13_ParamLimits

0x6ede,	// (0x00011cd8) bg_popup_window_pane_cp13

0x8067,	// (0x00012e61) listscroll_popup_fast_pane_ParamLimits

0x8067,	// (0x00012e61) listscroll_popup_fast_pane

0x8076,	// (0x00012e70) grid_popup_fast_pane_ParamLimits

0x8076,	// (0x00012e70) grid_popup_fast_pane

0x8088,	// (0x00012e82) scroll_pane_cp9_ParamLimits

0x8088,	// (0x00012e82) scroll_pane_cp9

0xc971,	// (0x0001776b) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc971,	// (0x0001776b) list_single_graphic_hl_pane_t1_cp2

0x80ac,	// (0x00012ea6) input_focus_pane_cp20_ParamLimits

0x80ac,	// (0x00012ea6) input_focus_pane_cp20

0x80ba,	// (0x00012eb4) query_popup_data_pane_t1_ParamLimits

0x80ba,	// (0x00012eb4) query_popup_data_pane_t1

0x80cd,	// (0x00012ec7) query_popup_data_pane_t2_ParamLimits

0x80cd,	// (0x00012ec7) query_popup_data_pane_t2

0x8113,	// (0x00012f0d) query_popup_data_pane_t3_ParamLimits

0x8113,	// (0x00012f0d) query_popup_data_pane_t3

0x8154,	// (0x00012f4e) query_popup_data_pane_t4_ParamLimits

0x8154,	// (0x00012f4e) query_popup_data_pane_t4

0x8190,	// (0x00012f8a) query_popup_data_pane_t5_ParamLimits

0x8190,	// (0x00012f8a) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x0001a49b) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x0001a49b) query_popup_data_pane_t

0x7e0b,	// (0x00012c05) bg_set_opt_pane_g1

0x7e13,	// (0x00012c0d) bg_set_opt_pane_g2

0x7e1b,	// (0x00012c15) bg_set_opt_pane_g3

0x7e23,	// (0x00012c1d) bg_set_opt_pane_g4

0x7e2b,	// (0x00012c25) bg_set_opt_pane_g5

0x7e33,	// (0x00012c2d) bg_set_opt_pane_g6

0x7e3b,	// (0x00012c35) bg_set_opt_pane_g7

0x7e43,	// (0x00012c3d) bg_set_opt_pane_g8

0x7e4b,	// (0x00012c45) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x0001a4a6) bg_set_opt_pane_g

0x4ffa,	// (0x0000fdf4) control_top_pane_stacon_ParamLimits

0x4ffa,	// (0x0000fdf4) control_top_pane_stacon

0x504d,	// (0x0000fe47) signal_pane_stacon_ParamLimits

0x504d,	// (0x0000fe47) signal_pane_stacon

0x880f,	// (0x00013609) stacon_top_pane_g1_ParamLimits

0x880f,	// (0x00013609) stacon_top_pane_g1

0x5072,	// (0x0000fe6c) title_pane_stacon_ParamLimits

0x5072,	// (0x0000fe6c) title_pane_stacon

0x509c,	// (0x0000fe96) uni_indicator_pane_stacon_ParamLimits

0x509c,	// (0x0000fe96) uni_indicator_pane_stacon

0x50b1,	// (0x0000feab) battery_pane_stacon_ParamLimits

0x50b1,	// (0x0000feab) battery_pane_stacon

0x50f5,	// (0x0000feef) control_bottom_pane_stacon_ParamLimits

0x50f5,	// (0x0000feef) control_bottom_pane_stacon

0x5118,	// (0x0000ff12) navi_pane_stacon_ParamLimits

0x5118,	// (0x0000ff12) navi_pane_stacon

0x8831,	// (0x0001362b) stacon_bottom_pane_g1_ParamLimits

0x8831,	// (0x0001362b) stacon_bottom_pane_g1

0x4d5d,	// (0x0000fb57) aid_levels_signal_lsc_ParamLimits

0x4d5d,	// (0x0000fb57) aid_levels_signal_lsc

0x4d73,	// (0x0000fb6d) signal_pane_stacon_g1_ParamLimits

0x4d73,	// (0x0000fb6d) signal_pane_stacon_g1

0x4d87,	// (0x0000fb81) signal_pane_stacon_g2_ParamLimits

0x4d87,	// (0x0000fb81) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x0001a4b9) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0001a4b9) signal_pane_stacon_g

0x4dbc,	// (0x0000fbb6) title_pane_stacon_t1_ParamLimits

0x4dbc,	// (0x0000fbb6) title_pane_stacon_t1

0x81d4,	// (0x00012fce) uni_indicator_pane_stacon_g1

0x81de,	// (0x00012fd8) uni_indicator_pane_stacon_g2

0x81e8,	// (0x00012fe2) uni_indicator_pane_stacon_g3

0x81f2,	// (0x00012fec) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x0001a4c5) uni_indicator_pane_stacon_g

0x4de1,	// (0x0000fbdb) control_top_pane_stacon_g1

0x4de9,	// (0x0000fbe3) control_top_pane_stacon_t1_ParamLimits

0x4de9,	// (0x0000fbe3) control_top_pane_stacon_t1

0x4e20,	// (0x0000fc1a) aid_levels_battery_lsc_ParamLimits

0x4e20,	// (0x0000fc1a) aid_levels_battery_lsc

0x4e37,	// (0x0000fc31) battery_pane_stacon_g1_ParamLimits

0x4e37,	// (0x0000fc31) battery_pane_stacon_g1

0x4e4a,	// (0x0000fc44) battery_pane_stacon_g2_ParamLimits

0x4e4a,	// (0x0000fc44) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x0001a4ce) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0001a4ce) battery_pane_stacon_g

0x4e88,	// (0x0000fc82) navi_icon_pane_stacon

0x4e9c,	// (0x0000fc96) navi_navi_pane_stacon

0x4e88,	// (0x0000fc82) navi_text_pane_stacon

0x4de1,	// (0x0000fbdb) control_bottom_pane_stacon_g1

0x4eb0,	// (0x0000fcaa) control_bottom_pane_stacon_t1_ParamLimits

0x4eb0,	// (0x0000fcaa) control_bottom_pane_stacon_t1

0x8216,	// (0x00013010) grid_app_pane_ParamLimits

0x8216,	// (0x00013010) grid_app_pane

0x823a,	// (0x00013034) scroll_pane_cp15_ParamLimits

0x823a,	// (0x00013034) scroll_pane_cp15

0x824d,	// (0x00013047) cell_app_pane_ParamLimits

0x824d,	// (0x00013047) cell_app_pane

0x8271,	// (0x0001306b) cell_app_pane_g1_ParamLimits

0x8271,	// (0x0001306b) cell_app_pane_g1

0x8295,	// (0x0001308f) cell_app_pane_g2_ParamLimits

0x8295,	// (0x0001308f) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x0001a4d3) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x0001a4d3) cell_app_pane_g

0x82a1,	// (0x0001309b) cell_app_pane_t1_ParamLimits

0x82a1,	// (0x0001309b) cell_app_pane_t1

0x82b8,	// (0x000130b2) grid_highlight_pane_ParamLimits

0x82b8,	// (0x000130b2) grid_highlight_pane

0x7e0b,	// (0x00012c05) cell_highlight_pane_g1

0x7e13,	// (0x00012c0d) cell_highlight_pane_g2

0x7e1b,	// (0x00012c15) cell_highlight_pane_g3

0x7e23,	// (0x00012c1d) cell_highlight_pane_g4

0x7e2b,	// (0x00012c25) cell_highlight_pane_g5

0x7e33,	// (0x00012c2d) cell_highlight_pane_g6

0x7e3b,	// (0x00012c35) cell_highlight_pane_g7

0x7e43,	// (0x00012c3d) cell_highlight_pane_g8

0x7e4b,	// (0x00012c45) cell_highlight_pane_g9

0x6df4,	// (0x00011bee) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x0001a481) cell_highlight_pane_g

0x82c9,	// (0x000130c3) bg_scroll_pane

0x4efa,	// (0x0000fcf4) scroll_handle_pane

0x8310,	// (0x0001310a) scroll_bg_pane_g1

0x8325,	// (0x0001311f) scroll_bg_pane_g2

0x833d,	// (0x00013137) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x0001a4d8) scroll_bg_pane_g

0x8352,	// (0x0001314c) scroll_handle_focus_pane_ParamLimits

0x8352,	// (0x0001314c) scroll_handle_focus_pane

0x8310,	// (0x0001310a) scroll_handle_pane_g1

0x835f,	// (0x00013159) scroll_handle_pane_g2

0x833d,	// (0x00013137) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x0001a4df) scroll_handle_pane_g

0x7f08,	// (0x00012d02) bg_popup_sub_pane_cp21_ParamLimits

0x7f08,	// (0x00012d02) bg_popup_sub_pane_cp21

0x8373,	// (0x0001316d) popup_fep_japan_predictive_window_t1_ParamLimits

0x8373,	// (0x0001316d) popup_fep_japan_predictive_window_t1

0x838d,	// (0x00013187) popup_fep_japan_predictive_window_t2_ParamLimits

0x838d,	// (0x00013187) popup_fep_japan_predictive_window_t2

0x83c0,	// (0x000131ba) popup_fep_japan_predictive_window_t3_ParamLimits

0x83c0,	// (0x000131ba) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x0001a4e6) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x0001a4e6) popup_fep_japan_predictive_window_t

0x6dfe,	// (0x00011bf8) bg_popup_sub_pane_cp23

0x83f7,	// (0x000131f1) listscroll_japin_cand_pane

0x83ff,	// (0x000131f9) popup_fep_japan_candidate_window_t1

0x840d,	// (0x00013207) candidate_pane_ParamLimits

0x840d,	// (0x00013207) candidate_pane

0x841f,	// (0x00013219) scroll_pane_cp30

0x8427,	// (0x00013221) list_single_popup_jap_candidate_pane_ParamLimits

0x8427,	// (0x00013221) list_single_popup_jap_candidate_pane

0x6dfe,	// (0x00011bf8) list_highlight_pane_cp30

0x843c,	// (0x00013236) list_single_popup_jap_candidate_pane_t1

0x844b,	// (0x00013245) level_1_signal

0x845d,	// (0x00013257) level_2_signal

0x8470,	// (0x0001326a) level_3_signal

0x8483,	// (0x0001327d) level_4_signal

0x8496,	// (0x00013290) level_5_signal

0x84a9,	// (0x000132a3) level_6_signal

0x84bc,	// (0x000132b6) level_7_signal

0x844b,	// (0x00013245) level_1_battery

0x845d,	// (0x00013257) level_2_battery

0x8470,	// (0x0001326a) level_3_battery

0x8483,	// (0x0001327d) level_4_battery

0x8496,	// (0x00013290) level_5_battery

0x84a9,	// (0x000132a3) level_6_battery

0x84bc,	// (0x000132b6) level_7_battery

0x84e7,	// (0x000132e1) list_menu_pane_ParamLimits

0x84e7,	// (0x000132e1) list_menu_pane

0x84fd,	// (0x000132f7) scroll_pane_cp25_ParamLimits

0x84fd,	// (0x000132f7) scroll_pane_cp25

0x8516,	// (0x00013310) list_double2_graphic_pane_cp2_ParamLimits

0x8516,	// (0x00013310) list_double2_graphic_pane_cp2

0x8516,	// (0x00013310) list_double2_large_graphic_pane_cp2_ParamLimits

0x8516,	// (0x00013310) list_double2_large_graphic_pane_cp2

0x8516,	// (0x00013310) list_double2_pane_cp2_ParamLimits

0x8516,	// (0x00013310) list_double2_pane_cp2

0x8516,	// (0x00013310) list_double_graphic_pane_cp2_ParamLimits

0x8516,	// (0x00013310) list_double_graphic_pane_cp2

0x8516,	// (0x00013310) list_double_large_graphic_pane_cp2_ParamLimits

0x8516,	// (0x00013310) list_double_large_graphic_pane_cp2

0x8516,	// (0x00013310) list_double_number_pane_cp2_ParamLimits

0x8516,	// (0x00013310) list_double_number_pane_cp2

0x8516,	// (0x00013310) list_double_pane_cp2_ParamLimits

0x8516,	// (0x00013310) list_double_pane_cp2

0x853a,	// (0x00013334) list_single_2graphic_pane_cp2_ParamLimits

0x853a,	// (0x00013334) list_single_2graphic_pane_cp2

0x853a,	// (0x00013334) list_single_graphic_heading_pane_cp2_ParamLimits

0x853a,	// (0x00013334) list_single_graphic_heading_pane_cp2

0x853a,	// (0x00013334) list_single_graphic_pane_cp2_ParamLimits

0x853a,	// (0x00013334) list_single_graphic_pane_cp2

0x853a,	// (0x00013334) list_single_heading_pane_cp2_ParamLimits

0x853a,	// (0x00013334) list_single_heading_pane_cp2

0x8553,	// (0x0001334d) list_single_large_graphic_pane_cp2_ParamLimits

0x8553,	// (0x0001334d) list_single_large_graphic_pane_cp2

0x853a,	// (0x00013334) list_single_number_heading_pane_cp2_ParamLimits

0x853a,	// (0x00013334) list_single_number_heading_pane_cp2

0x853a,	// (0x00013334) list_single_number_pane_cp2_ParamLimits

0x853a,	// (0x00013334) list_single_number_pane_cp2

0x853a,	// (0x00013334) list_single_pane_cp2_ParamLimits

0x853a,	// (0x00013334) list_single_pane_cp2

0x85cf,	// (0x000133c9) bg_popup_sub_pane_cp22

0x4fac,	// (0x0000fda6) popup_side_volume_key_window_g1

0x4fd6,	// (0x0000fdd0) popup_side_volume_key_window_t1

0x4ff2,	// (0x0000fdec) volume_small_pane_cp1

0x7173,	// (0x00011f6d) bg_popup_sub_pane_cp24_ParamLimits

0x7173,	// (0x00011f6d) bg_popup_sub_pane_cp24

0x85e5,	// (0x000133df) fep_china_uni_candidate_pane_ParamLimits

0x85e5,	// (0x000133df) fep_china_uni_candidate_pane

0x85f9,	// (0x000133f3) fep_china_uni_entry_pane

0x8609,	// (0x00013403) popup_fep_china_uni_window_g1

0x8625,	// (0x0001341f) fep_china_uni_entry_pane_g1

0x862d,	// (0x00013427) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x0001a517) fep_china_uni_entry_pane_g

0x8635,	// (0x0001342f) fep_entry_item_pane

0x863f,	// (0x00013439) fep_candidate_item_pane

0x8647,	// (0x00013441) fep_china_uni_candidate_pane_g1

0x864f,	// (0x00013449) fep_china_uni_candidate_pane_g2

0x8657,	// (0x00013451) fep_china_uni_candidate_pane_g3

0x865f,	// (0x00013459) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x0001a51c) fep_china_uni_candidate_pane_g

0x6df4,	// (0x00011bee) fep_entry_item_pane_g1

0x8667,	// (0x00013461) fep_entry_item_pane_t1_ParamLimits

0x8667,	// (0x00013461) fep_entry_item_pane_t1

0x867d,	// (0x00013477) fep_candidate_item_pane_t1_ParamLimits

0x867d,	// (0x00013477) fep_candidate_item_pane_t1

0x8692,	// (0x0001348c) fep_candidate_item_pane_t2_ParamLimits

0x8692,	// (0x0001348c) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x0001a525) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x0001a525) fep_candidate_item_pane_t

0x6ede,	// (0x00011cd8) list_highlight_pane_cp31_ParamLimits

0x6ede,	// (0x00011cd8) list_highlight_pane_cp31

0x86a4,	// (0x0001349e) level_1_signal_lsc

0x86ad,	// (0x000134a7) level_2_signal_lsc

0x86b6,	// (0x000134b0) level_3_signal_lsc

0x86bf,	// (0x000134b9) level_4_signal_lsc

0x86c8,	// (0x000134c2) level_5_signal_lsc

0x86d1,	// (0x000134cb) level_6_signal_lsc

0x86da,	// (0x000134d4) level_7_signal_lsc

0x86da,	// (0x000134d4) level_1_battery_lsc

0x86e3,	// (0x000134dd) level_2_battery_lsc

0x86ec,	// (0x000134e6) level_3_battery_lsc

0x86f5,	// (0x000134ef) level_4_battery_lsc

0x86fe,	// (0x000134f8) level_5_battery_lsc

0x8707,	// (0x00013501) level_6_battery_lsc

0x86a4,	// (0x0001349e) level_7_battery_lsc

0x8710,	// (0x0001350a) scroll_handle_focus_pane_g1

0x8719,	// (0x00013513) scroll_handle_focus_pane_g2

0x8722,	// (0x0001351c) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x0001a52a) scroll_handle_focus_pane_g

0x872b,	// (0x00013525) list_single_2graphic_pane_g1_ParamLimits

0x872b,	// (0x00013525) list_single_2graphic_pane_g1

0x77a0,	// (0x0001259a) list_single_2graphic_pane_g2_ParamLimits

0x77a0,	// (0x0001259a) list_single_2graphic_pane_g2

0x7726,	// (0x00012520) list_single_2graphic_pane_g3_ParamLimits

0x7726,	// (0x00012520) list_single_2graphic_pane_g3

0x8737,	// (0x00013531) list_single_2graphic_pane_g4_ParamLimits

0x8737,	// (0x00013531) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x0001a531) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x0001a531) list_single_2graphic_pane_g

0x8748,	// (0x00013542) list_single_2graphic_pane_t1_ParamLimits

0x8748,	// (0x00013542) list_single_2graphic_pane_t1

0x8776,	// (0x00013570) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x8776,	// (0x00013570) list_double2_graphic_large_graphic_pane_g1

0x7845,	// (0x0001263f) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x7845,	// (0x0001263f) list_double2_graphic_large_graphic_pane_g2

0x7856,	// (0x00012650) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x7856,	// (0x00012650) list_double2_graphic_large_graphic_pane_g3

0x8786,	// (0x00013580) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x8786,	// (0x00013580) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x0001a53a) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x0001a53a) list_double2_graphic_large_graphic_pane_g

0x8792,	// (0x0001358c) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x8792,	// (0x0001358c) list_double2_graphic_large_graphic_pane_t1

0x87a8,	// (0x000135a2) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x87a8,	// (0x000135a2) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x0001a543) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x0001a543) list_double2_graphic_large_graphic_pane_t

0x88f9,	// (0x000136f3) popup_fast_swap_window_ParamLimits

0x88f9,	// (0x000136f3) popup_fast_swap_window

0x8915,	// (0x0001370f) popup_side_volume_key_window

0x8931,	// (0x0001372b) stacon_top_pane

0x893b,	// (0x00013735) status_pane_ParamLimits

0x893b,	// (0x00013735) status_pane

0x8949,	// (0x00013743) status_small_pane

0x6dfe,	// (0x00011bf8) control_pane

0x6dfe,	// (0x00011bf8) stacon_bottom_pane

0x7bf3,	// (0x000129ed) scroll_pane_cp121

0x7bea,	// (0x000129e4) set_content_pane

0x87ba,	// (0x000135b4) bg_active_tab_pane_g1_cp1

0x87c3,	// (0x000135bd) bg_active_tab_pane_g2_cp1

0x87cc,	// (0x000135c6) bg_active_tab_pane_g3_cp1

0x87ba,	// (0x000135b4) bg_passive_tab_pane_g1_cp1

0x87c3,	// (0x000135bd) bg_passive_tab_pane_g2_cp1

0x87cc,	// (0x000135c6) bg_passive_tab_pane_g3_cp1

0x87d5,	// (0x000135cf) bg_active_tab_pane_g1_cp2

0x87c3,	// (0x000135bd) bg_active_tab_pane_g2_cp2

0x87de,	// (0x000135d8) bg_active_tab_pane_g3_cp2

0x87d5,	// (0x000135cf) bg_passive_tab_pane_g1_cp2

0x87c3,	// (0x000135bd) bg_passive_tab_pane_g2_cp2

0x87de,	// (0x000135d8) bg_passive_tab_pane_g3_cp2

0x87e7,	// (0x000135e1) bg_active_tab_pane_g1_cp3

0x87c3,	// (0x000135bd) bg_active_tab_pane_g2_cp3

0x87f0,	// (0x000135ea) bg_active_tab_pane_g3_cp3

0x87e7,	// (0x000135e1) bg_passive_tab_pane_g1_cp3

0x87c3,	// (0x000135bd) bg_passive_tab_pane_g2_cp3

0x87f0,	// (0x000135ea) bg_passive_tab_pane_g3_cp3

0x87f9,	// (0x000135f3) bg_active_tab_pane_g1_cp4

0x87c3,	// (0x000135bd) bg_active_tab_pane_g2_cp4

0x8804,	// (0x000135fe) bg_active_tab_pane_g3_cp4

0x87f9,	// (0x000135f3) bg_passive_tab_pane_g1_cp4

0x87c3,	// (0x000135bd) bg_passive_tab_pane_g2_cp4

0x8804,	// (0x000135fe) bg_passive_tab_pane_g3_cp4

0x884d,	// (0x00013647) bg_active_tab_pane_g1_cp5

0x87c3,	// (0x000135bd) bg_active_tab_pane_g2_cp5

0x8856,	// (0x00013650) bg_active_tab_pane_g3_cp5

0x884d,	// (0x00013647) bg_passive_tab_pane_g1_cp5

0x87c3,	// (0x000135bd) bg_passive_tab_pane_g2_cp5

0x8856,	// (0x00013650) bg_passive_tab_pane_g3_cp5

0x885f,	// (0x00013659) list_set_graphic_pane_ParamLimits

0x885f,	// (0x00013659) list_set_graphic_pane

0x6dfe,	// (0x00011bf8) bg_set_opt_pane_cp4

0x887c,	// (0x00013676) list_set_graphic_pane_g1_ParamLimits

0x887c,	// (0x00013676) list_set_graphic_pane_g1

0x8888,	// (0x00013682) list_set_graphic_pane_g2_ParamLimits

0x8888,	// (0x00013682) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x0001a548) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x0001a548) list_set_graphic_pane_g

0x0009,

0xfacf,	// (0x0001a8c9) volume_small_pane_cp_g

0x88ac,	// (0x000136a6) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x88ac,	// (0x000136a6) list_double2_large_graphic_pane_g1_cp2

0x88b8,	// (0x000136b2) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x88b8,	// (0x000136b2) list_double2_large_graphic_pane_g2_cp2

0x88c9,	// (0x000136c3) list_double2_large_graphic_pane_g3_cp2

0x88d1,	// (0x000136cb) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x88d1,	// (0x000136cb) list_double2_large_graphic_pane_t1_cp2

0x88e7,	// (0x000136e1) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x88e7,	// (0x000136e1) list_double2_large_graphic_pane_t2_cp2

0xa5ed,	// (0x000153e7) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa5ed,	// (0x000153e7) list_double_large_graphic_pane_g1_cp2

0xa5fe,	// (0x000153f8) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa5fe,	// (0x000153f8) list_double_large_graphic_pane_g2_cp2

0x8a62,	// (0x0001385c) list_double_large_graphic_pane_g3_cp2

0xa60f,	// (0x00015409) list_double_large_graphic_pane_g4_cp

0xa617,	// (0x00015411) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa617,	// (0x00015411) list_double_large_graphic_pane_t1_cp2

0xa62e,	// (0x00015428) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa62e,	// (0x00015428) list_double_large_graphic_pane_t2_cp2

0x8954,	// (0x0001374e) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8954,	// (0x0001374e) list_double2_graphic_pane_g1_cp2

0x8962,	// (0x0001375c) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8962,	// (0x0001375c) list_double2_graphic_pane_g2_cp2

0x8973,	// (0x0001376d) list_double2_graphic_pane_g3_cp2

0x897d,	// (0x00013777) list_double2_graphic_pane_t1_cp2_ParamLimits

0x897d,	// (0x00013777) list_double2_graphic_pane_t1_cp2

0x8993,	// (0x0001378d) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8993,	// (0x0001378d) list_double2_graphic_pane_t2_cp2

0x89a5,	// (0x0001379f) list_single_number_heading_pane_g1_cp2_ParamLimits

0x89a5,	// (0x0001379f) list_single_number_heading_pane_g1_cp2

0x89b1,	// (0x000137ab) list_single_number_heading_pane_g2_cp2

0x89b9,	// (0x000137b3) list_single_number_heading_pane_t1_cp2_ParamLimits

0x89b9,	// (0x000137b3) list_single_number_heading_pane_t1_cp2

0x89cf,	// (0x000137c9) list_single_number_heading_pane_t2_cp2_ParamLimits

0x89cf,	// (0x000137c9) list_single_number_heading_pane_t2_cp2

0x89e1,	// (0x000137db) list_single_number_heading_pane_t3_cp2_ParamLimits

0x89e1,	// (0x000137db) list_single_number_heading_pane_t3_cp2

0x89a5,	// (0x0001379f) list_single_heading_pane_g1_cp2_ParamLimits

0x89a5,	// (0x0001379f) list_single_heading_pane_g1_cp2

0x89b1,	// (0x000137ab) list_single_heading_pane_g2_cp2

0x89b9,	// (0x000137b3) list_single_heading_pane_t1_cp2_ParamLimits

0x89b9,	// (0x000137b3) list_single_heading_pane_t1_cp2

0xa3f5,	// (0x000151ef) list_single_heading_pane_t2_cp2_ParamLimits

0xa3f5,	// (0x000151ef) list_single_heading_pane_t2_cp2

0xa33d,	// (0x00015137) list_double_graphic_pane_g1_cp2_ParamLimits

0xa33d,	// (0x00015137) list_double_graphic_pane_g1_cp2

0xa349,	// (0x00015143) list_double_graphic_pane_g2_cp2_ParamLimits

0xa349,	// (0x00015143) list_double_graphic_pane_g2_cp2

0xa358,	// (0x00015152) list_double_graphic_pane_g3_cp2

0xa360,	// (0x0001515a) list_double_graphic_pane_t1_cp2_ParamLimits

0xa360,	// (0x0001515a) list_double_graphic_pane_t1_cp2

0xa376,	// (0x00015170) list_double_graphic_pane_t2_cp2_ParamLimits

0xa376,	// (0x00015170) list_double_graphic_pane_t2_cp2

0x8a56,	// (0x00013850) list_double_number_pane_g1_cp2_ParamLimits

0x8a56,	// (0x00013850) list_double_number_pane_g1_cp2

0x8a62,	// (0x0001385c) list_double_number_pane_g2_cp2

0xa301,	// (0x000150fb) list_double_number_pane_t1_cp2_ParamLimits

0xa301,	// (0x000150fb) list_double_number_pane_t1_cp2

0xa315,	// (0x0001510f) list_double_number_pane_t2_cp2_ParamLimits

0xa315,	// (0x0001510f) list_double_number_pane_t2_cp2

0xa32b,	// (0x00015125) list_double_number_pane_t3_cp2_ParamLimits

0xa32b,	// (0x00015125) list_double_number_pane_t3_cp2

0xa1ea,	// (0x00014fe4) list_single_graphic_pane_g1_cp2_ParamLimits

0xa1ea,	// (0x00014fe4) list_single_graphic_pane_g1_cp2

0x8aba,	// (0x000138b4) list_single_graphic_pane_g2_cp2_ParamLimits

0x8aba,	// (0x000138b4) list_single_graphic_pane_g2_cp2

0x8ac6,	// (0x000138c0) list_single_graphic_pane_g3_cp2

0xa1c0,	// (0x00014fba) list_single_graphic_pane_t1_cp2_ParamLimits

0xa1c0,	// (0x00014fba) list_single_graphic_pane_t1_cp2

0x8aba,	// (0x000138b4) list_single_number_pane_g1_cp2_ParamLimits

0x8aba,	// (0x000138b4) list_single_number_pane_g1_cp2

0x8ac6,	// (0x000138c0) list_single_number_pane_g2_cp2

0xa1c0,	// (0x00014fba) list_single_number_pane_t1_cp2_ParamLimits

0xa1c0,	// (0x00014fba) list_single_number_pane_t1_cp2

0xa1d6,	// (0x00014fd0) list_single_number_pane_t2_cp2_ParamLimits

0xa1d6,	// (0x00014fd0) list_single_number_pane_t2_cp2

0x88b8,	// (0x000136b2) list_double2_pane_g1_cp2_ParamLimits

0x88b8,	// (0x000136b2) list_double2_pane_g1_cp2

0x88c9,	// (0x000136c3) list_double2_pane_g2_cp2

0x8a2e,	// (0x00013828) list_double2_pane_t1_cp2_ParamLimits

0x8a2e,	// (0x00013828) list_double2_pane_t1_cp2

0x8a44,	// (0x0001383e) list_double2_pane_t2_cp2_ParamLimits

0x8a44,	// (0x0001383e) list_double2_pane_t2_cp2

0x8a56,	// (0x00013850) list_double_pane_g1_cp2_ParamLimits

0x8a56,	// (0x00013850) list_double_pane_g1_cp2

0x8a62,	// (0x0001385c) list_double_pane_g2_cp2

0x8a6a,	// (0x00013864) list_double_pane_t1_cp2_ParamLimits

0x8a6a,	// (0x00013864) list_double_pane_t1_cp2

0x8a80,	// (0x0001387a) list_double_pane_t2_cp2_ParamLimits

0x8a80,	// (0x0001387a) list_double_pane_t2_cp2

0x8aaa,	// (0x000138a4) list_single_pane_cp2_g3

0x8aba,	// (0x000138b4) list_single_pane_g1_cp2_ParamLimits

0x8aba,	// (0x000138b4) list_single_pane_g1_cp2

0x8ac6,	// (0x000138c0) list_single_pane_g2_cp2

0x8ace,	// (0x000138c8) list_single_pane_t1_cp2_ParamLimits

0x8ace,	// (0x000138c8) list_single_pane_t1_cp2

0x8ae6,	// (0x000138e0) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8ae6,	// (0x000138e0) list_single_large_graphic_pane_g1_cp2

0x8af2,	// (0x000138ec) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8af2,	// (0x000138ec) list_single_large_graphic_pane_g2_cp2

0x8afe,	// (0x000138f8) list_single_large_graphic_pane_g3_cp2

0x8b06,	// (0x00013900) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8b06,	// (0x00013900) list_single_large_graphic_pane_g4_cp1

0x8b20,	// (0x0001391a) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8b20,	// (0x0001391a) list_single_large_graphic_pane_t1_cp2

0xa18c,	// (0x00014f86) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa18c,	// (0x00014f86) list_single_graphic_heading_pane_g1_cp2

0xa159,	// (0x00014f53) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa159,	// (0x00014f53) list_single_graphic_heading_pane_g4_cp2

0x8ac6,	// (0x000138c0) list_single_graphic_heading_pane_g5_cp2

0xa198,	// (0x00014f92) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa198,	// (0x00014f92) list_single_graphic_heading_pane_t1_cp2

0xa1ae,	// (0x00014fa8) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa1ae,	// (0x00014fa8) list_single_graphic_heading_pane_t2_cp2

0xa14d,	// (0x00014f47) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa14d,	// (0x00014f47) list_single_2graphic_pane_g1_cp2

0xa159,	// (0x00014f53) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa159,	// (0x00014f53) list_single_2graphic_pane_g2_cp2

0x8ac6,	// (0x000138c0) list_single_2graphic_pane_g3_cp2

0xa16a,	// (0x00014f64) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa16a,	// (0x00014f64) list_single_2graphic_pane_g4_cp2

0xa176,	// (0x00014f70) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa176,	// (0x00014f70) list_single_2graphic_pane_t1_cp2

0x6df4,	// (0x00011bee) list_highlight_pane_g10_cp1

0x9d19,	// (0x00014b13) list_highlight_pane_g1_cp1

0x9d21,	// (0x00014b1b) list_highlight_pane_g2_cp1

0x9d29,	// (0x00014b23) list_highlight_pane_g3_cp1

0x9d31,	// (0x00014b2b) list_highlight_pane_g4_cp1

0x9d39,	// (0x00014b33) list_highlight_pane_g5_cp1

0x9d41,	// (0x00014b3b) list_highlight_pane_g6_cp1

0x9d49,	// (0x00014b43) list_highlight_pane_g7_cp1

0x9d51,	// (0x00014b4b) list_highlight_pane_g8_cp1

0x9d59,	// (0x00014b53) list_highlight_pane_g9_cp1

0x9c39,	// (0x00014a33) form_field_slider_pane_t3

0x9c47,	// (0x00014a41) form_field_slider_pane_t4

0x9c55,	// (0x00014a4f) slider_form_pane_ParamLimits

0x9c55,	// (0x00014a4f) slider_form_pane

0x6dfe,	// (0x00011bf8) control_abbreviations

0x6dfe,	// (0x00011bf8) control_conventions

0x6dfe,	// (0x00011bf8) control_definitions

0x6dfe,	// (0x00011bf8) format_table_attribute

0xa43f,	// (0x00015239) bg_popup_preview_window_pane_g9

0x6dfe,	// (0x00011bf8) format_table_data2

0x6dfe,	// (0x00011bf8) format_table_data3

0x6dfe,	// (0x00011bf8) format_table_data_example

0x0008,

0x6dfe,	// (0x00011bf8) intro_purpose

0xf8ea,	// (0x0001a6e4) bg_popup_preview_window_pane_g

0x6dfe,	// (0x00011bf8) texts_category

0x6dfe,	// (0x00011bf8) texts_graphics

0x8b36,	// (0x00013930) text_digital

0x8b45,	// (0x0001393f) text_primary

0x8b54,	// (0x0001394e) text_primary_small

0x8b63,	// (0x0001395d) text_secondary

0x8b72,	// (0x0001396c) text_title

0xac6b,	// (0x00015a65) bg_passive_tab_pane_g1_cp3_srt

0x87c3,	// (0x000135bd) bg_passive_tab_pane_g2_cp3_srt

0xac74,	// (0x00015a6e) bg_passive_tab_pane_g3_cp3_srt

0x6ede,	// (0x00011cd8) bg_active_tab_pane_cp3_srt_ParamLimits

0x6ede,	// (0x00011cd8) bg_active_tab_pane_cp3_srt

0xac7d,	// (0x00015a77) tabs_4_active_pane_srt_g1

0xac85,	// (0x00015a7f) tabs_4_active_pane_srt_t1_ParamLimits

0xac85,	// (0x00015a7f) tabs_4_active_pane_srt_t1

0xac6b,	// (0x00015a65) bg_active_tab_pane_g1_cp3_copy1

0x87c3,	// (0x000135bd) bg_active_tab_pane_g2_cp3_copy1

0xac74,	// (0x00015a6e) bg_active_tab_pane_g3_cp3_copy1

0x6ede,	// (0x00011cd8) tabs_2_long_active_pane_srt_ParamLimits

0x6ede,	// (0x00011cd8) tabs_2_long_active_pane_srt

0x6ede,	// (0x00011cd8) tabs_2_long_passive_pane_srt_ParamLimits

0x6ede,	// (0x00011cd8) tabs_2_long_passive_pane_srt

0x8040,	// (0x00012e3a) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8040,	// (0x00012e3a) bg_passive_tab_pane_cp4_srt

0xa896,	// (0x00015690) bg_passive_tab_pane_g1_cp4_srt

0x87c3,	// (0x000135bd) bg_passive_tab_pane_g2_cp4_srt

0xa89f,	// (0x00015699) bg_passive_tab_pane_g3_cp4_srt

0x801f,	// (0x00012e19) bg_active_tab_pane_cp4_srt_ParamLimits

0x801f,	// (0x00012e19) bg_active_tab_pane_cp4_srt

0xa8a8,	// (0x000156a2) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa8a8,	// (0x000156a2) tabs_2_long_active_pane_srt_t1

0xa896,	// (0x00015690) bg_active_tab_pane_g1_cp4_srt

0x87c3,	// (0x000135bd) bg_active_tab_pane_g2_cp4_srt

0xa89f,	// (0x00015699) bg_active_tab_pane_g3_cp4_srt

0x7173,	// (0x00011f6d) tabs_3_long_active_pane_srt_ParamLimits

0x7173,	// (0x00011f6d) tabs_3_long_active_pane_srt

0x7173,	// (0x00011f6d) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7173,	// (0x00011f6d) tabs_3_long_passive_pane_cp_srt

0x7173,	// (0x00011f6d) tabs_3_long_passive_pane_srt_ParamLimits

0x7173,	// (0x00011f6d) tabs_3_long_passive_pane_srt

0x8040,	// (0x00012e3a) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8040,	// (0x00012e3a) bg_passive_tab_pane_cp5_srt

0x884d,	// (0x00013647) bg_passive_tab_pane_g1_cp5_srt

0x87c3,	// (0x000135bd) bg_passive_tab_pane_g2_cp5_srt

0x8856,	// (0x00013650) bg_passive_tab_pane_g3_cp5_srt

0x801f,	// (0x00012e19) bg_active_tab_pane_cp5_srt_ParamLimits

0x801f,	// (0x00012e19) bg_active_tab_pane_cp5_srt

0xa884,	// (0x0001567e) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa884,	// (0x0001567e) tabs_3_long_active_pane_srt_t1

0x884d,	// (0x00013647) bg_active_tab_pane_g1_cp5_srt

0x87c3,	// (0x000135bd) bg_active_tab_pane_g2_cp5_srt

0x8856,	// (0x00013650) bg_active_tab_pane_g3_cp5_srt

0xa876,	// (0x00015670) navi_text_pane_srt_t1

0xa86e,	// (0x00015668) navi_icon_pane_srt_g1

0x8d3b,	// (0x00013b35) midp_editing_number_pane_srt

0x8b81,	// (0x0001397b) midp_ticker_pane_srt

0x8d43,	// (0x00013b3d) midp_ticker_pane_srt_g1

0x8d4b,	// (0x00013b45) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x0001a567) midp_ticker_pane_srt_g

0x8d53,	// (0x00013b4d) midp_ticker_pane_srt_t1

0xa85f,	// (0x00015659) midp_editing_number_pane_t1_copy1

0x8040,	// (0x00012e3a) listscroll_midp_pane

0x8040,	// (0x00012e3a) midp_form_pane

0x8bed,	// (0x000139e7) midp_info_popup_window_ParamLimits

0x8bed,	// (0x000139e7) midp_info_popup_window

0x7f08,	// (0x00012d02) bg_popup_sub_pane_cp50_ParamLimits

0x7f08,	// (0x00012d02) bg_popup_sub_pane_cp50

0x9951,	// (0x0001474b) listscroll_midp_info_pane_ParamLimits

0x9951,	// (0x0001474b) listscroll_midp_info_pane

0x9939,	// (0x00014733) listscroll_form_midp_pane_ParamLimits

0x9939,	// (0x00014733) listscroll_form_midp_pane

0x9945,	// (0x0001473f) scroll_bar_cp050

0x9919,	// (0x00014713) list_midp_pane

0xb9d7,	// (0x000167d1) signal_pane_g2_cp

0x9853,	// (0x0001464d) listscroll_midp_info_pane_t1_ParamLimits

0x9853,	// (0x0001464d) listscroll_midp_info_pane_t1

0x986b,	// (0x00014665) listscroll_midp_info_pane_t2_ParamLimits

0x986b,	// (0x00014665) listscroll_midp_info_pane_t2

0x98a9,	// (0x000146a3) listscroll_midp_info_pane_t3_ParamLimits

0x98a9,	// (0x000146a3) listscroll_midp_info_pane_t3

0x98e3,	// (0x000146dd) listscroll_midp_info_pane_t4_ParamLimits

0x98e3,	// (0x000146dd) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x0001a61f) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x0001a61f) listscroll_midp_info_pane_t

0x7fcc,	// (0x00012dc6) scroll_pane_cp21

0x97f1,	// (0x000145eb) form_midp_field_choice_group_pane

0x97fa,	// (0x000145f4) form_midp_field_text_pane

0x9839,	// (0x00014633) form_midp_field_time_pane

0x9841,	// (0x0001463b) form_midp_gauge_slider_pane

0x984a,	// (0x00014644) form_midp_gauge_wait_pane

0x6dfe,	// (0x00011bf8) form_midp_image_pane

0x97c2,	// (0x000145bc) list_single_midp_pane_ParamLimits

0x97c2,	// (0x000145bc) list_single_midp_pane

0x977a,	// (0x00014574) form_midp_field_text_pane_t1

0x9535,	// (0x0001432f) input_focus_pane_cp050

0x97b1,	// (0x000145ab) list_midp_form_text_pane

0x9749,	// (0x00014543) form_midp_field_choice_group_pane_t1

0x9757,	// (0x00014551) input_focus_pane_cp051

0x976b,	// (0x00014565) list_midp_choice_pane

0x6dfe,	// (0x00011bf8) status_idle_pane

0x972d,	// (0x00014527) form_midp_field_time_pane_t1

0x6df4,	// (0x00011bee) wait_anim_pane_g2_copy1

0x973b,	// (0x00014535) form_midp_field_time_pane_t2

0x0001,

0x8c9b,	// (0x00013a95) aid_navinavi_width_2_pane

0xf820,	// (0x0001a61a) form_midp_field_time_pane_t

0x6dfe,	// (0x00011bf8) input_focus_pane_cp052

0x6dfe,	// (0x00011bf8) bg_input_focus_pane_cp040

0x96ed,	// (0x000144e7) form_midp_gauge_slider_pane_t1

0x96fb,	// (0x000144f5) form_midp_gauge_slider_pane_t2

0x9709,	// (0x00014503) form_midp_gauge_slider_pane_t3

0x9717,	// (0x00014511) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x0001a611) form_midp_gauge_slider_pane_t

0x9725,	// (0x0001451f) form_midp_slider_pane

0x6ede,	// (0x00011cd8) bg_input_focus_pane_cp041_ParamLimits

0x6ede,	// (0x00011cd8) bg_input_focus_pane_cp041

0x96ba,	// (0x000144b4) form_midp_gauge_wait_pane_t1_ParamLimits

0x96ba,	// (0x000144b4) form_midp_gauge_wait_pane_t1

0x96cc,	// (0x000144c6) form_midp_gauge_wait_pane_t2_ParamLimits

0x96cc,	// (0x000144c6) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x0001a60c) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x0001a60c) form_midp_gauge_wait_pane_t

0x96de,	// (0x000144d8) form_midp_wait_pane_ParamLimits

0x96de,	// (0x000144d8) form_midp_wait_pane

0x9684,	// (0x0001447e) form_midp_image_pane_g1

0x968d,	// (0x00014487) form_midp_image_pane_t1

0x969c,	// (0x00014496) form_midp_image_pane_t2

0x96ab,	// (0x000144a5) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x0001a605) form_midp_image_pane_t

0x966c,	// (0x00014466) list_single_midp_pane_g1

0x9675,	// (0x0001446f) list_single_midp_pane_t1

0x9644,	// (0x0001443e) list_midp_form_item_pane_ParamLimits

0x9644,	// (0x0001443e) list_midp_form_item_pane

0x8c43,	// (0x00013a3d) list_midp_form_item_pane_t1

0x8c52,	// (0x00013a4c) midp_ticker_pane_g1

0x8c5e,	// (0x00013a58) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x0001a54d) midp_ticker_pane_g

0x8c6a,	// (0x00013a64) midp_ticker_pane_t1

0xaae3,	// (0x000158dd) midp_editing_number_pane_t1

0xaac1,	// (0x000158bb) midp_editing_number_pane

0xaad0,	// (0x000158ca) midp_ticker_pane

0xa827,	// (0x00015621) ai_message_heading_pane

0x6dfe,	// (0x00011bf8) bg_popup_window_pane_cp14

0xa82f,	// (0x00015629) listscroll_ai_message_pane

0xa7b1,	// (0x000155ab) ai_message_heading_pane_g1_ParamLimits

0xa7b1,	// (0x000155ab) ai_message_heading_pane_g1

0xa7bd,	// (0x000155b7) ai_message_heading_pane_g2_ParamLimits

0xa7bd,	// (0x000155b7) ai_message_heading_pane_g2

0xa7c9,	// (0x000155c3) ai_message_heading_pane_g3_ParamLimits

0xa7c9,	// (0x000155c3) ai_message_heading_pane_g3

0xa7d5,	// (0x000155cf) ai_message_heading_pane_g4_ParamLimits

0xa7d5,	// (0x000155cf) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x0001a746) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x0001a746) ai_message_heading_pane_g

0xa7e1,	// (0x000155db) ai_message_heading_pane_t1_ParamLimits

0xa7e1,	// (0x000155db) ai_message_heading_pane_t1

0xa7fb,	// (0x000155f5) ai_message_heading_pane_t2_ParamLimits

0xa7fb,	// (0x000155f5) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x0001a74f) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x0001a74f) ai_message_heading_pane_t

0xa80d,	// (0x00015607) bg_popup_heading_pane_cp1_ParamLimits

0xa80d,	// (0x00015607) bg_popup_heading_pane_cp1

0xa79f,	// (0x00015599) list_ai_message_pane_ParamLimits

0xa79f,	// (0x00015599) list_ai_message_pane

0x7fcc,	// (0x00012dc6) scroll_pane_cp10

0xa73b,	// (0x00015535) list_ai_message_pane_g1

0xa743,	// (0x0001553d) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x0001a723) list_ai_message_pane_g

0xa74b,	// (0x00015545) list_ai_message_pane_t1_ParamLimits

0xa74b,	// (0x00015545) list_ai_message_pane_t1

0xa760,	// (0x0001555a) list_ai_message_pane_t2_ParamLimits

0xa760,	// (0x0001555a) list_ai_message_pane_t2

0xa775,	// (0x0001556f) list_ai_message_pane_t3_ParamLimits

0xa775,	// (0x0001556f) list_ai_message_pane_t3

0xa78a,	// (0x00015584) list_ai_message_pane_t4_ParamLimits

0xa78a,	// (0x00015584) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x0001a728) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x0001a728) list_ai_message_pane_t

0xa726,	// (0x00015520) cell_ai_soft_ind_pane_ParamLimits

0xa726,	// (0x00015520) cell_ai_soft_ind_pane

0x8c7c,	// (0x00013a76) cell_ai_soft_ind_pane_g1_ParamLimits

0x8c7c,	// (0x00013a76) cell_ai_soft_ind_pane_g1

0x6dfe,	// (0x00011bf8) grid_highlight_cp1

0x8c89,	// (0x00013a83) text_secondary_cp56_ParamLimits

0x8c89,	// (0x00013a83) text_secondary_cp56

0xa6fb,	// (0x000154f5) example_general_pane_ParamLimits

0xa6fb,	// (0x000154f5) example_general_pane

0xa707,	// (0x00015501) example_parent_pane_g1_ParamLimits

0xa707,	// (0x00015501) example_parent_pane_g1

0xa713,	// (0x0001550d) example_parent_pane_t1_ParamLimits

0xa713,	// (0x0001550d) example_parent_pane_t1

0x56ef,	// (0x000104e9) popup_preview_text_window_ParamLimits

0x56ef,	// (0x000104e9) popup_preview_text_window

0x8ab2,	// (0x000138ac) list_single_pane_cp2_g4

0x7229,	// (0x00012023) bg_popup_preview_window_pane_ParamLimits

0x7229,	// (0x00012023) bg_popup_preview_window_pane

0xa447,	// (0x00015241) popup_preview_text_window_t1_ParamLimits

0xa447,	// (0x00015241) popup_preview_text_window_t1

0xa465,	// (0x0001525f) popup_preview_text_window_t2_ParamLimits

0xa465,	// (0x0001525f) popup_preview_text_window_t2

0xa4ae,	// (0x000152a8) popup_preview_text_window_t3_ParamLimits

0xa4ae,	// (0x000152a8) popup_preview_text_window_t3

0xa4f3,	// (0x000152ed) popup_preview_text_window_t4_ParamLimits

0xa4f3,	// (0x000152ed) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x0001a6f7) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x0001a6f7) popup_preview_text_window_t

0xa571,	// (0x0001536b) scroll_pane_cp11

0x9407,	// (0x00014201) bg_popup_preview_window_pane_g1

0xa407,	// (0x00015201) bg_popup_preview_window_pane_g2

0xa40f,	// (0x00015209) bg_popup_preview_window_pane_g3

0xa417,	// (0x00015211) bg_popup_preview_window_pane_g4

0xa41f,	// (0x00015219) bg_popup_preview_window_pane_g5

0xa427,	// (0x00015221) bg_popup_preview_window_pane_g6

0xa42f,	// (0x00015229) bg_popup_preview_window_pane_g7

0xa437,	// (0x00015231) bg_popup_preview_window_pane_g8

0x48df,	// (0x0000f6d9) aid_popup_width_pane

0x56cd,	// (0x000104c7) popup_midp_note_alarm_window_ParamLimits

0x56cd,	// (0x000104c7) popup_midp_note_alarm_window

0x7cb4,	// (0x00012aae) data_form_pane_ParamLimits

0x7cc0,	// (0x00012aba) form_field_data_pane_g1

0x7cca,	// (0x00012ac4) form_field_data_pane_t1_ParamLimits

0x7ce2,	// (0x00012adc) input_focus_pane_ParamLimits

0x7cf0,	// (0x00012aea) data_form_wide_pane_ParamLimits

0x7cfc,	// (0x00012af6) form_field_data_wide_pane_g1

0x7d1c,	// (0x00012b16) form_field_data_wide_pane_t1_ParamLimits

0x74d8,	// (0x000122d2) input_focus_pane_cp6_ParamLimits

0x7f79,	// (0x00012d73) input_popup_find_pane_g1_ParamLimits

0x7f79,	// (0x00012d73) input_popup_find_pane_g1

0x4e5b,	// (0x0000fc55) aid_navi_side_left_pane

0x4e70,	// (0x0000fc6a) aid_navi_side_right_pane

0x9e14,	// (0x00014c0e) bg_popup_window_pane_cp30_ParamLimits

0x9e14,	// (0x00014c0e) bg_popup_window_pane_cp30

0x9e8e,	// (0x00014c88) popup_midp_note_alarm_window_g1_ParamLimits

0x9e8e,	// (0x00014c88) popup_midp_note_alarm_window_g1

0x9ebe,	// (0x00014cb8) popup_midp_note_alarm_window_t1_ParamLimits

0x9ebe,	// (0x00014cb8) popup_midp_note_alarm_window_t1

0x9f5f,	// (0x00014d59) popup_midp_note_alarm_window_t2_ParamLimits

0x9f5f,	// (0x00014d59) popup_midp_note_alarm_window_t2

0xa00d,	// (0x00014e07) popup_midp_note_alarm_window_t3_ParamLimits

0xa00d,	// (0x00014e07) popup_midp_note_alarm_window_t3

0xa03f,	// (0x00014e39) popup_midp_note_alarm_window_t4_ParamLimits

0xa03f,	// (0x00014e39) popup_midp_note_alarm_window_t4

0xa065,	// (0x00014e5f) popup_midp_note_alarm_window_t5_ParamLimits

0xa065,	// (0x00014e5f) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x0001a694) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x0001a694) popup_midp_note_alarm_window_t

0xa11d,	// (0x00014f17) wait_bar_pane_cp1_ParamLimits

0xa11d,	// (0x00014f17) wait_bar_pane_cp1

0x6dfe,	// (0x00011bf8) wait_anim_pane_copy1

0x6dfe,	// (0x00011bf8) wait_border_pane_copy1

0x9afa,	// (0x000148f4) wait_border_pane_g1_copy1

0x7d33,	// (0x00012b2d) form_field_popup_pane_g1

0x7d3b,	// (0x00012b35) form_field_popup_pane_t1_ParamLimits

0x7ce2,	// (0x00012adc) input_focus_pane_cp7_ParamLimits

0x7d53,	// (0x00012b4d) list_form_pane_ParamLimits

0x7d5f,	// (0x00012b59) form_field_popup_wide_pane_g1

0x7d67,	// (0x00012b61) form_field_popup_wide_pane_t1_ParamLimits

0x7ce2,	// (0x00012adc) input_focus_pane_cp8_ParamLimits

0x7d7c,	// (0x00012b76) list_form_wide_pane_ParamLimits

0xad03,	// (0x00015afd) aid_size_cell_graphic_pane

0x7e53,	// (0x00012c4d) data_form_pane_t1_ParamLimits

0xaa8e,	// (0x00015888) data_form_wide_pane_t1_ParamLimits

0x8fa6,	// (0x00013da0) bg_status_flat_pane

0x6e3e,	// (0x00011c38) title_pane_t1_ParamLimits

0x6ea6,	// (0x00011ca0) title_pane_t2_ParamLimits

0x6ecc,	// (0x00011cc6) title_pane_t3_ParamLimits

0xf557,	// (0x0001a351) title_pane_t_ParamLimits

0x844b,	// (0x00013245) level_1_signal_ParamLimits

0x845d,	// (0x00013257) level_2_signal_ParamLimits

0x8470,	// (0x0001326a) level_3_signal_ParamLimits

0x8483,	// (0x0001327d) level_4_signal_ParamLimits

0x8496,	// (0x00013290) level_5_signal_ParamLimits

0x84a9,	// (0x000132a3) level_6_signal_ParamLimits

0x84bc,	// (0x000132b6) level_7_signal_ParamLimits

0x844b,	// (0x00013245) level_1_battery_ParamLimits

0x845d,	// (0x00013257) level_2_battery_ParamLimits

0x8470,	// (0x0001326a) level_3_battery_ParamLimits

0x8483,	// (0x0001327d) level_4_battery_ParamLimits

0x8496,	// (0x00013290) level_5_battery_ParamLimits

0x84a9,	// (0x000132a3) level_6_battery_ParamLimits

0x84bc,	// (0x000132b6) level_7_battery_ParamLimits

0x9d19,	// (0x00014b13) bg_status_flat_pane_g1

0x9d21,	// (0x00014b1b) bg_status_flat_pane_g2

0x9d29,	// (0x00014b23) bg_status_flat_pane_g3

0x9d31,	// (0x00014b2b) bg_status_flat_pane_g4

0x9d39,	// (0x00014b33) bg_status_flat_pane_g5

0x9d41,	// (0x00014b3b) bg_status_flat_pane_g6

0x9d49,	// (0x00014b43) bg_status_flat_pane_g7

0x6ef4,	// (0x00011cee) tabs_3_active_pane_t1_ParamLimits

0x6ef4,	// (0x00011cee) tabs_3_passive_pane_t1_ParamLimits

0x6f0e,	// (0x00011d08) tabs_4_active_pane_t1_ParamLimits

0x6f0e,	// (0x00011d08) tabs_4_1_passive_pane_t1_ParamLimits

0x800d,	// (0x00012e07) tabs_2_active_pane_t1_ParamLimits

0x800d,	// (0x00012e07) tabs_2_passive_pane_t1_ParamLimits

0x801f,	// (0x00012e19) bg_active_tab_pane_cp4_ParamLimits

0x802d,	// (0x00012e27) tabs_2_long_active_pane_t1_ParamLimits

0x8040,	// (0x00012e3a) bg_passive_tab_pane_cp4_ParamLimits

0x5a14,	// (0x0001080e) list_single_midp_graphic_pane_t1_ParamLimits

0x801f,	// (0x00012e19) bg_active_tab_pane_cp5_ParamLimits

0x804c,	// (0x00012e46) tabs_3_long_active_pane_t1_ParamLimits

0x8040,	// (0x00012e3a) bg_passive_tab_pane_cp5_ParamLimits

0x5a14,	// (0x0001080e) list_single_midp_graphic_pane_t1

0x8fa6,	// (0x00013da0) bg_status_flat_pane_ParamLimits

0x9069,	// (0x00013e63) indicator_pane_cp2_ParamLimits

0x9069,	// (0x00013e63) indicator_pane_cp2

0x9194,	// (0x00013f8e) navi_pane_srt_ParamLimits

0x9194,	// (0x00013f8e) navi_pane_srt

0x91b8,	// (0x00013fb2) popup_clock_digital_analogue_window_cp1

0x6fd5,	// (0x00011dcf) indicator_pane_t1

0x8b81,	// (0x0001397b) copy_highlight_pane

0x8b81,	// (0x0001397b) cursor_graphics_pane

0x8b81,	// (0x0001397b) graphic_within_text_pane

0x8b81,	// (0x0001397b) link_highlight_pane

0xa534,	// (0x0001532e) popup_preview_text_window_t5_ParamLimits

0xa534,	// (0x0001532e) popup_preview_text_window_t5

0x8ca3,	// (0x00013a9d) cursor_digital_pane

0x8ca3,	// (0x00013a9d) cursor_primary_pane

0x8cb4,	// (0x00013aae) cursor_primary_small_pane

0x8cbc,	// (0x00013ab6) cursor_secondary_pane

0x8cc4,	// (0x00013abe) cursor_title_pane

0x8ca3,	// (0x00013a9d) link_highlight_digital_pane

0x8cab,	// (0x00013aa5) link_highlight_primary_pane

0x8cb4,	// (0x00013aae) link_highlight_primary_small_pane

0x8cbc,	// (0x00013ab6) link_highlight_secondary_pane

0x8cc4,	// (0x00013abe) link_highlight_title_pane

0x8ca3,	// (0x00013a9d) copy_highlight_digital_pane

0x8ca3,	// (0x00013a9d) copy_highlight_primary_pane

0x8cb4,	// (0x00013aae) copy_highlight_primary_small_pane

0x8cbc,	// (0x00013ab6) copy_highlight_secondary_pane

0x8cc4,	// (0x00013abe) copy_highlight_title_pane

0x8cbc,	// (0x00013ab6) graphic_text_digital_pane

0x9db7,	// (0x00014bb1) graphic_text_primary_pane

0x9dc0,	// (0x00014bba) graphic_text_primary_small_pane

0x8cb4,	// (0x00013aae) graphic_text_secondary_pane

0x8ca3,	// (0x00013a9d) graphic_text_title_pane

0x8ccc,	// (0x00013ac6) cursor_primary_pane_g1

0x9da9,	// (0x00014ba3) cursor_text_primary_t1

0x9d91,	// (0x00014b8b) cursor_primary_small_pane_g1

0x9d9b,	// (0x00014b95) cursor_text_primary_small_t1

0x9d79,	// (0x00014b73) cursor_primary_small_pane_g1_copy1

0x9d83,	// (0x00014b7d) cursor_text_primary_small_t1_copy1

0x9d61,	// (0x00014b5b) cursor_text_title_t1

0x9d6f,	// (0x00014b69) cursor_title_pane_g1

0x8ccc,	// (0x00013ac6) cursor_digital_pane_g1

0x8cd6,	// (0x00013ad0) cursor_text_digital_t1

0x8cfb,	// (0x00013af5) link_highlight_primary_pane_g1

0x9d0a,	// (0x00014b04) link_highlight_primary_pane_t1

0x8ce4,	// (0x00013ade) link_highlight_primary_small_pane_g1

0x8cec,	// (0x00013ae6) link_highlight_primary_small_pane_t1

0x8cfb,	// (0x00013af5) link_highlight_secondary_pane_g1

0x8d03,	// (0x00013afd) link_highlight_secondary_pane_t1

0x9c7e,	// (0x00014a78) link_highlight_title_pane_g1

0x9c86,	// (0x00014a80) link_highlight_title_pane_t1

0x9c67,	// (0x00014a61) link_highlight_digital_pane_g1

0x9c6f,	// (0x00014a69) link_highlight_digital_pane_t1

0x9b3f,	// (0x00014939) copy_highlight_primary_pane_g1

0x9b47,	// (0x00014941) copy_highlight_primary_pane_t1

0x9b19,	// (0x00014913) copy_highlight_primary_small_pane_g1

0x9b30,	// (0x0001492a) copy_highlight_primary_small_pane_t1

0x8d12,	// (0x00013b0c) copy_highlight_secondary_pane_g1

0x8d1a,	// (0x00013b14) copy_highlight_secondary_pane_t1

0x9b19,	// (0x00014913) copy_highlight_title_pane_g1

0x9b21,	// (0x0001491b) copy_highlight_title_pane_t1

0x9b3f,	// (0x00014939) copy_highlight_digital_pane_g1

0xaecd,	// (0x00015cc7) copy_highlight_digital_pane_t1

0xae21,	// (0x00015c1b) graphic_text_primary_pane_g1

0xaeb1,	// (0x00015cab) graphic_text_primary_pane_t1

0xaebf,	// (0x00015cb9) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x0001a7c3) graphic_text_primary_pane_t

0xae8d,	// (0x00015c87) graphic_text_primary_small_pane_g1

0xae95,	// (0x00015c8f) graphic_text_primary_small_pane_t1

0xaea3,	// (0x00015c9d) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x0001a7be) graphic_text_primary_small_pane_t

0xae69,	// (0x00015c63) graphic_text_secondary_pane_g1

0xae71,	// (0x00015c6b) graphic_text_secondary_pane_t1

0xae7f,	// (0x00015c79) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x0001a7b9) graphic_text_secondary_pane_t

0xae45,	// (0x00015c3f) graphic_text_title_pane_g1

0xae4d,	// (0x00015c47) graphic_text_title_pane_t1

0xae5b,	// (0x00015c55) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x0001a7b4) graphic_text_title_pane_t

0xae21,	// (0x00015c1b) graphic_text_digital_pane_g1

0xae29,	// (0x00015c23) graphic_text_digital_pane_t1

0xae37,	// (0x00015c31) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x0001a7af) graphic_text_digital_pane_t

0x6ede,	// (0x00011cd8) navi_icon_pane_srt_ParamLimits

0x6ede,	// (0x00011cd8) navi_icon_pane_srt

0x6dfe,	// (0x00011bf8) navi_midp_pane_srt

0x6dfe,	// (0x00011bf8) navi_navi_pane_srt

0x6ede,	// (0x00011cd8) navi_text_pane_srt_ParamLimits

0x6ede,	// (0x00011cd8) navi_text_pane_srt

0xadec,	// (0x00015be6) navi_navi_icon_text_pane_srt

0xadf4,	// (0x00015bee) navi_navi_pane_srt_g1_ParamLimits

0xadf4,	// (0x00015bee) navi_navi_pane_srt_g1

0xae06,	// (0x00015c00) navi_navi_pane_srt_g2_ParamLimits

0xae06,	// (0x00015c00) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x0001a7aa) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x0001a7aa) navi_navi_pane_srt_g

0xae18,	// (0x00015c12) navi_navi_tabs_pane_srt

0xadec,	// (0x00015be6) navi_navi_text_pane_srt

0xadec,	// (0x00015be6) navi_navi_volume_pane_srt

0xaddd,	// (0x00015bd7) navi_navi_text_pane_srt_t1

0x5d8e,	// (0x00010b88) navi_navi_volume_pane_srt_g1

0x5d96,	// (0x00010b90) volume_small_pane_srt_ParamLimits

0x5d96,	// (0x00010b90) volume_small_pane_srt

0x513b,	// (0x0000ff35) volume_small_pane_srt_g1_ParamLimits

0x513b,	// (0x0000ff35) volume_small_pane_srt_g1

0x514b,	// (0x0000ff45) volume_small_pane_srt_g2_ParamLimits

0x514b,	// (0x0000ff45) volume_small_pane_srt_g2

0x515c,	// (0x0000ff56) volume_small_pane_srt_g3_ParamLimits

0x515c,	// (0x0000ff56) volume_small_pane_srt_g3

0x516d,	// (0x0000ff67) volume_small_pane_srt_g4_ParamLimits

0x516d,	// (0x0000ff67) volume_small_pane_srt_g4

0x517e,	// (0x0000ff78) volume_small_pane_srt_g5_ParamLimits

0x517e,	// (0x0000ff78) volume_small_pane_srt_g5

0x518f,	// (0x0000ff89) volume_small_pane_srt_g6_ParamLimits

0x518f,	// (0x0000ff89) volume_small_pane_srt_g6

0x51a0,	// (0x0000ff9a) volume_small_pane_srt_g7_ParamLimits

0x51a0,	// (0x0000ff9a) volume_small_pane_srt_g7

0x51b1,	// (0x0000ffab) volume_small_pane_srt_g8_ParamLimits

0x51b1,	// (0x0000ffab) volume_small_pane_srt_g8

0x51c2,	// (0x0000ffbc) volume_small_pane_srt_g9_ParamLimits

0x51c2,	// (0x0000ffbc) volume_small_pane_srt_g9

0x51d3,	// (0x0000ffcd) volume_small_pane_srt_g10_ParamLimits

0x51d3,	// (0x0000ffcd) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x0001a552) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x0001a552) volume_small_pane_srt_g

0x72d2,	// (0x000120cc) query_popup_data_pane_cp2

0xadc3,	// (0x00015bbd) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xadc3,	// (0x00015bbd) navi_navi_icon_text_pane_srt_t1

0x9db7,	// (0x00014bb1) navi_tabs_2_long_pane_srt

0x9db7,	// (0x00014bb1) navi_tabs_2_pane_srt

0x9db7,	// (0x00014bb1) navi_tabs_3_long_pane_srt

0x9db7,	// (0x00014bb1) navi_tabs_3_pane_srt

0x9db7,	// (0x00014bb1) navi_tabs_4_pane_srt

0x5d6e,	// (0x00010b68) tabs_2_active_pane_srt_ParamLimits

0x5d6e,	// (0x00010b68) tabs_2_active_pane_srt

0x5d7e,	// (0x00010b78) tabs_2_passive_pane_srt_ParamLimits

0x5d7e,	// (0x00010b78) tabs_2_passive_pane_srt

0x8ec7,	// (0x00013cc1) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8ec7,	// (0x00013cc1) bg_passive_tab_pane_cp1_srt

0xad8f,	// (0x00015b89) bg_passive_tab_pane_g1_cp1_srt

0x87c3,	// (0x000135bd) bg_passive_tab_pane_g2_cp1_srt

0xad98,	// (0x00015b92) bg_passive_tab_pane_g3_cp1_srt

0x6ede,	// (0x00011cd8) bg_active_tab_pane_cp1_srt_ParamLimits

0x6ede,	// (0x00011cd8) bg_active_tab_pane_cp1_srt

0xada1,	// (0x00015b9b) tabs_2_active_pane_srt_g1

0xada9,	// (0x00015ba3) tabs_2_active_pane_srt_t1_ParamLimits

0xada9,	// (0x00015ba3) tabs_2_active_pane_srt_t1

0xad8f,	// (0x00015b89) bg_active_tab_pane_g1_cp1_srt

0x87c3,	// (0x000135bd) bg_active_tab_pane_g2_cp1_srt

0xad98,	// (0x00015b92) bg_active_tab_pane_g3_cp1_srt

0x5d3b,	// (0x00010b35) tabs_3_active_pane_srt_ParamLimits

0x5d3b,	// (0x00010b35) tabs_3_active_pane_srt

0x5d4c,	// (0x00010b46) tabs_3_passive_pane_cp_srt_ParamLimits

0x5d4c,	// (0x00010b46) tabs_3_passive_pane_cp_srt

0x5d5d,	// (0x00010b57) tabs_3_passive_pane_srt_ParamLimits

0x5d5d,	// (0x00010b57) tabs_3_passive_pane_srt

0x8ec7,	// (0x00013cc1) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8ec7,	// (0x00013cc1) bg_passive_tab_pane_cp2_srt

0x8d29,	// (0x00013b23) bg_passive_tab_pane_g1_cp2_srt

0x87c3,	// (0x000135bd) bg_passive_tab_pane_g2_cp2_srt

0x8d32,	// (0x00013b2c) bg_passive_tab_pane_g3_cp2_srt

0x6ede,	// (0x00011cd8) bg_active_tab_pane_cp2_srt_ParamLimits

0x6ede,	// (0x00011cd8) bg_active_tab_pane_cp2_srt

0xad75,	// (0x00015b6f) tabs_3_active_pane_srt_g1

0xad7d,	// (0x00015b77) tabs_3_active_pane_srt_t1_ParamLimits

0xad7d,	// (0x00015b77) tabs_3_active_pane_srt_t1

0x8d29,	// (0x00013b23) bg_active_tab_pane_g1_cp2_srt

0x87c3,	// (0x000135bd) bg_active_tab_pane_g2_cp2_srt

0x8d32,	// (0x00013b2c) bg_active_tab_pane_g3_cp2_srt

0x5cf3,	// (0x00010aed) tabs_4_active_pane_srt_ParamLimits

0x5cf3,	// (0x00010aed) tabs_4_active_pane_srt

0x5d05,	// (0x00010aff) tabs_4_passive_pane_cp2_srt_ParamLimits

0x5d05,	// (0x00010aff) tabs_4_passive_pane_cp2_srt

0x5338,	// (0x00010132) aid_size_cell_toolbar

0x8040,	// (0x00012e3a) main_idle_act_pane_ParamLimits

0x5503,	// (0x000102fd) popup_large_graphic_colour_window_ParamLimits

0x586a,	// (0x00010664) popup_toolbar_window_ParamLimits

0x586a,	// (0x00010664) popup_toolbar_window

0xab0d,	// (0x00015907) list_single_graphic_2heading_pane_ParamLimits

0xab0d,	// (0x00015907) list_single_graphic_2heading_pane

0x81fc,	// (0x00012ff6) aid_size_cell_apps_grid_lsc_pane

0x820e,	// (0x00013008) aid_size_cell_apps_grid_prt_pane

0x8ec7,	// (0x00013cc1) bg_wml_button_pane_cp1_ParamLimits

0x8ec7,	// (0x00013cc1) bg_wml_button_pane_cp1

0x977a,	// (0x00014574) form_midp_field_text_pane_t1_ParamLimits

0x9535,	// (0x0001432f) input_focus_pane_cp050_ParamLimits

0x97b1,	// (0x000145ab) list_midp_form_text_pane_ParamLimits

0x9757,	// (0x00014551) input_focus_pane_cp051_ParamLimits

0x976b,	// (0x00014565) list_midp_choice_pane_ParamLimits

0x95ee,	// (0x000143e8) list_single_2graphic_pane_cp3_ParamLimits

0x95ee,	// (0x000143e8) list_single_2graphic_pane_cp3

0x9612,	// (0x0001440c) list_single_midp_graphic_pane_ParamLimits

0x9612,	// (0x0001440c) list_single_midp_graphic_pane

0x5917,	// (0x00010711) list_single_graphic_2heading_pane_g1_ParamLimits

0x5917,	// (0x00010711) list_single_graphic_2heading_pane_g1

0x5923,	// (0x0001071d) list_single_graphic_2heading_pane_g4_ParamLimits

0x5923,	// (0x0001071d) list_single_graphic_2heading_pane_g4

0x592f,	// (0x00010729) list_single_graphic_2heading_pane_g5_ParamLimits

0x592f,	// (0x00010729) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x0001a5a5) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x0001a5a5) list_single_graphic_2heading_pane_g

0x593b,	// (0x00010735) list_single_graphic_2heading_pane_t1_ParamLimits

0x593b,	// (0x00010735) list_single_graphic_2heading_pane_t1

0x594f,	// (0x00010749) list_single_graphic_2heading_pane_t2_ParamLimits

0x594f,	// (0x00010749) list_single_graphic_2heading_pane_t2

0x596b,	// (0x00010765) list_single_graphic_2heading_pane_t3_ParamLimits

0x596b,	// (0x00010765) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x0001a5ac) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x0001a5ac) list_single_graphic_2heading_pane_t

0x9317,	// (0x00014111) bg_popup_sub_pane_cp2

0x9341,	// (0x0001413b) grid_toobar_pane

0x5983,	// (0x0001077d) cell_toolbar_pane_ParamLimits

0x5983,	// (0x0001077d) cell_toolbar_pane

0x93ab,	// (0x000141a5) cell_toolbar_pane_g1_ParamLimits

0x93ab,	// (0x000141a5) cell_toolbar_pane_g1

0x93bf,	// (0x000141b9) cell_toolbar_pane_g2_ParamLimits

0x93bf,	// (0x000141b9) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x0001a5ba) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x0001a5ba) cell_toolbar_pane_g

0x93e1,	// (0x000141db) grid_highlight_pane_cp2_ParamLimits

0x93e1,	// (0x000141db) grid_highlight_pane_cp2

0x93fb,	// (0x000141f5) toolbar_button_pane

0x9407,	// (0x00014201) toolbar_button_pane_g1

0x940f,	// (0x00014209) toolbar_button_pane_g2

0x9417,	// (0x00014211) toolbar_button_pane_g3

0x941f,	// (0x00014219) toolbar_button_pane_g4

0x9427,	// (0x00014221) toolbar_button_pane_g5

0x942f,	// (0x00014229) toolbar_button_pane_g6

0x9437,	// (0x00014231) toolbar_button_pane_g7

0x943f,	// (0x00014239) toolbar_button_pane_g8

0x9447,	// (0x00014241) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x0001a5bf) toolbar_button_pane_g

0x59bb,	// (0x000107b5) list_single_2graphic_pane_g1_cp3_ParamLimits

0x59bb,	// (0x000107b5) list_single_2graphic_pane_g1_cp3

0x59c7,	// (0x000107c1) list_single_2graphic_pane_g2_cp3_ParamLimits

0x59c7,	// (0x000107c1) list_single_2graphic_pane_g2_cp3

0x59d8,	// (0x000107d2) list_single_2graphic_pane_g3_cp3

0x59e0,	// (0x000107da) list_single_2graphic_pane_g4_cp3_ParamLimits

0x59e0,	// (0x000107da) list_single_2graphic_pane_g4_cp3

0x59ec,	// (0x000107e6) list_single_2graphic_pane_t1_cp3_ParamLimits

0x59ec,	// (0x000107e6) list_single_2graphic_pane_t1_cp3

0x5a08,	// (0x00010802) list_single_midp_graphic_pane_g2_ParamLimits

0x5a08,	// (0x00010802) list_single_midp_graphic_pane_g2

0x5340,	// (0x0001013a) aid_zoom_text_primary

0x5348,	// (0x00010142) aid_zoom_text_secondary

0x8de3,	// (0x00013bdd) status_small_pane_g7_ParamLimits

0x8de3,	// (0x00013bdd) status_small_pane_g7

0x8e06,	// (0x00013c00) status_small_pane_t1_ParamLimits

0x6e15,	// (0x00011c0f) title_pane_g2

0x0003,

0xf54e,	// (0x0001a348) title_pane_g

0x7376,	// (0x00012170) aid_size_cell_colour_1_pane_ParamLimits

0x7376,	// (0x00012170) aid_size_cell_colour_1_pane

0x738a,	// (0x00012184) aid_size_cell_colour_2_pane_ParamLimits

0x738a,	// (0x00012184) aid_size_cell_colour_2_pane

0x739e,	// (0x00012198) aid_size_cell_colour_3_pane_ParamLimits

0x739e,	// (0x00012198) aid_size_cell_colour_3_pane

0x73b2,	// (0x000121ac) aid_size_cell_colour_4_pane_ParamLimits

0x73b2,	// (0x000121ac) aid_size_cell_colour_4_pane

0x4d98,	// (0x0000fb92) title_pane_stacon_g1_ParamLimits

0x4d98,	// (0x0000fb92) title_pane_stacon_g1

0x9b9e,	// (0x00014998) popup_note_wait_window_g3_ParamLimits

0x9b9e,	// (0x00014998) popup_note_wait_window_g3

0x9c14,	// (0x00014a0e) popup_note_wait_window_t5_ParamLimits

0x9c14,	// (0x00014a0e) popup_note_wait_window_t5

0x6dfe,	// (0x00011bf8) main_feb_china_hwr_fs_writing_pane

0x53e6,	// (0x000101e0) popup_feb_china_hwr_fs_window_ParamLimits

0x53e6,	// (0x000101e0) popup_feb_china_hwr_fs_window

0x5a2a,	// (0x00010824) aid_size_cell_hwr_fs_ParamLimits

0x5a2a,	// (0x00010824) aid_size_cell_hwr_fs

0x9535,	// (0x0001432f) bg_popup_sub_pane_cp3_ParamLimits

0x9535,	// (0x0001432f) bg_popup_sub_pane_cp3

0x5a3f,	// (0x00010839) grid_hwr_fs_pane_ParamLimits

0x5a3f,	// (0x00010839) grid_hwr_fs_pane

0x5a57,	// (0x00010851) linegrid_hwr_fs_pane_ParamLimits

0x5a57,	// (0x00010851) linegrid_hwr_fs_pane

0x5a67,	// (0x00010861) cell_hwr_fs_pane_ParamLimits

0x5a67,	// (0x00010861) cell_hwr_fs_pane

0x9541,	// (0x0001433b) linegrid_hwr_fs_pane_g1_ParamLimits

0x9541,	// (0x0001433b) linegrid_hwr_fs_pane_g1

0x954d,	// (0x00014347) linegrid_hwr_fs_pane_g2_ParamLimits

0x954d,	// (0x00014347) linegrid_hwr_fs_pane_g2

0x955f,	// (0x00014359) linegrid_hwr_fs_pane_g3_ParamLimits

0x955f,	// (0x00014359) linegrid_hwr_fs_pane_g3

0x5a89,	// (0x00010883) linegrid_hwr_fs_pane_g4_ParamLimits

0x5a89,	// (0x00010883) linegrid_hwr_fs_pane_g4

0x5aa3,	// (0x0001089d) linegrid_hwr_fs_pane_g5_ParamLimits

0x5aa3,	// (0x0001089d) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x0001a5ea) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x0001a5ea) linegrid_hwr_fs_pane_g

0x956b,	// (0x00014365) cell_hwr_fs_pane_g1_ParamLimits

0x956b,	// (0x00014365) cell_hwr_fs_pane_g1

0x924e,	// (0x00014048) cell_hwr_fs_pane_g2_ParamLimits

0x924e,	// (0x00014048) cell_hwr_fs_pane_g2

0x9581,	// (0x0001437b) cell_hwr_fs_pane_g3_ParamLimits

0x9581,	// (0x0001437b) cell_hwr_fs_pane_g3

0x958e,	// (0x00014388) cell_hwr_fs_pane_g4_ParamLimits

0x958e,	// (0x00014388) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x0001a5f5) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0001a5f5) cell_hwr_fs_pane_g

0x5ab9,	// (0x000108b3) cell_hwr_fs_pane_t1

0x6dfe,	// (0x00011bf8) grid_highlight_pane_cp6

0x6dfe,	// (0x00011bf8) main_idle_act2_pane

0x7fb3,	// (0x00012dad) aid_inside_area_popup_secondary

0xa257,	// (0x00015051) aid_inside_area_window_primary_ParamLimits

0xa257,	// (0x00015051) aid_inside_area_window_primary

0xaedc,	// (0x00015cd6) ai2_news_ticker_pane

0xaee4,	// (0x00015cde) aid_size_cell_ai1_link_ParamLimits

0xaee4,	// (0x00015cde) aid_size_cell_ai1_link

0xaefe,	// (0x00015cf8) popup_ai2_data_window_ParamLimits

0xaefe,	// (0x00015cf8) popup_ai2_data_window

0xaf14,	// (0x00015d0e) popup_ai2_link_window_ParamLimits

0xaf14,	// (0x00015d0e) popup_ai2_link_window

0x9535,	// (0x0001432f) bg_popup_sub_pane_cp4_ParamLimits

0x9535,	// (0x0001432f) bg_popup_sub_pane_cp4

0xaf28,	// (0x00015d22) grid_ai2_link_pane_ParamLimits

0xaf28,	// (0x00015d22) grid_ai2_link_pane

0xaf3f,	// (0x00015d39) popup_ai2_link_window_g1_ParamLimits

0xaf3f,	// (0x00015d39) popup_ai2_link_window_g1

0xaf4b,	// (0x00015d45) popup_ai2_link_window_g2_ParamLimits

0xaf4b,	// (0x00015d45) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x0001a7c8) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x0001a7c8) popup_ai2_link_window_g

0xaf5a,	// (0x00015d54) ai2_mp_button_pane

0xaf62,	// (0x00015d5c) ai2_mp_volume_pane

0x9757,	// (0x00014551) bg_popup_sub_pane_cp5_ParamLimits

0x9757,	// (0x00014551) bg_popup_sub_pane_cp5

0xaf6a,	// (0x00015d64) heading_ai2_gene_pane_ParamLimits

0xaf6a,	// (0x00015d64) heading_ai2_gene_pane

0xaf76,	// (0x00015d70) list_ai2_gene_pane_ParamLimits

0xaf76,	// (0x00015d70) list_ai2_gene_pane

0xafbe,	// (0x00015db8) cell_ai2_link_pane_ParamLimits

0xafbe,	// (0x00015db8) cell_ai2_link_pane

0xafd4,	// (0x00015dce) cell_ai2_link_pane_g1

0x6dfe,	// (0x00011bf8) grid_highlight_pane_cp7

0x5dab,	// (0x00010ba5) ai2_mp_volume_pane_g1

0xb0a4,	// (0x00015e9e) ai2_mp_volume_pane_g2

0xb019,	// (0x00015e13) list_ai2_gene_pane_t1

0xb0ac,	// (0x00015ea6) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x0001a7e1) ai2_mp_volume_pane_g

0x5db3,	// (0x00010bad) volume_small_pane_cp3

0xb0b4,	// (0x00015eae) aid_size_cell_ai2_button

0xb0bc,	// (0x00015eb6) grid_ai2_button_pane

0xb0c5,	// (0x00015ebf) cell_ai2_button_pane_ParamLimits

0xb0c5,	// (0x00015ebf) cell_ai2_button_pane

0x6df4,	// (0x00011bee) cell_ai2_button_pane_g1

0x6dfe,	// (0x00011bf8) grid_highlight_pane_cp8

0xb064,	// (0x00015e5e) ai2_gene_pane_t1_ParamLimits

0xb064,	// (0x00015e5e) ai2_gene_pane_t1

0x532e,	// (0x00010128) aid_height_parent_landscape

0xa8f6,	// (0x000156f0) aid_height_set_list

0xa907,	// (0x00015701) aid_size_parent

0xad03,	// (0x00015afd) aid_size_cell_graphic_pane_ParamLimits

0xaf86,	// (0x00015d80) popup_ai2_data_window_g1_ParamLimits

0xaf86,	// (0x00015d80) popup_ai2_data_window_g1

0xaf92,	// (0x00015d8c) ai2_news_ticker_pane_g1

0xaf9a,	// (0x00015d94) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x0001a7cd) ai2_news_ticker_pane_g

0xafa2,	// (0x00015d9c) ai2_news_ticker_pane_t1

0xafb0,	// (0x00015daa) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x0001a7d2) ai2_news_ticker_pane_t

0xafdd,	// (0x00015dd7) heading_ai2_gene_pane_g1

0xafe5,	// (0x00015ddf) heading_ai2_gene_pane_t1_ParamLimits

0xafe5,	// (0x00015ddf) heading_ai2_gene_pane_t1

0xaffa,	// (0x00015df4) list_highlight_pane_cp6

0xb002,	// (0x00015dfc) ai2_gene_pane_ParamLimits

0xb002,	// (0x00015dfc) ai2_gene_pane

0xb027,	// (0x00015e21) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x0001a7d7) list_ai2_gene_pane_t

0xb035,	// (0x00015e2f) list_highlight_pane_cp8_ParamLimits

0xb035,	// (0x00015e2f) list_highlight_pane_cp8

0xb046,	// (0x00015e40) ai2_gene_pane_g1_ParamLimits

0xb046,	// (0x00015e40) ai2_gene_pane_g1

0xb058,	// (0x00015e52) ai2_gene_pane_g2_ParamLimits

0xb058,	// (0x00015e52) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x0001a7dc) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x0001a7dc) ai2_gene_pane_g

0x76fd,	// (0x000124f7) scroll_pane_cp12

0x52ed,	// (0x000100e7) control_pane_t3_ParamLimits

0x52ed,	// (0x000100e7) control_pane_t3

0x8df7,	// (0x00013bf1) status_small_pane_g8_ParamLimits

0x8df7,	// (0x00013bf1) status_small_pane_g8

0x54cc,	// (0x000102c6) popup_find_window_ParamLimits

0x56e1,	// (0x000104db) popup_note_image_window_ParamLimits

0x937d,	// (0x00014177) list_double2_graphic_pane_vc_g1_ParamLimits

0x937d,	// (0x00014177) list_double2_graphic_pane_vc_g1

0x8aba,	// (0x000138b4) list_double2_graphic_pane_vc_g2_ParamLimits

0x8aba,	// (0x000138b4) list_double2_graphic_pane_vc_g2

0x9389,	// (0x00014183) list_double2_graphic_pane_vc_g3_ParamLimits

0x9389,	// (0x00014183) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x0001a5b3) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x0001a5b3) list_double2_graphic_pane_vc_g

0x9395,	// (0x0001418f) list_double2_graphic_pane_vc_t1_ParamLimits

0x9395,	// (0x0001418f) list_double2_graphic_pane_vc_t1

0x8aba,	// (0x000138b4) list_single_heading_pane_vc_g1_ParamLimits

0x8aba,	// (0x000138b4) list_single_heading_pane_vc_g1

0x9389,	// (0x00014183) list_single_heading_pane_vc_g2_ParamLimits

0x9389,	// (0x00014183) list_single_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x0001a5d4) list_single_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x0001a5d4) list_single_heading_pane_vc_g

0x944f,	// (0x00014249) list_single_heading_pane_vc_t1_ParamLimits

0x944f,	// (0x00014249) list_single_heading_pane_vc_t1

0x9467,	// (0x00014261) list_single_heading_pane_vc_t2_ParamLimits

0x9467,	// (0x00014261) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x0001a5d9) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x0001a5d9) list_single_heading_pane_vc_t

0x9483,	// (0x0001427d) list_setting_number_pane_vc_g1_ParamLimits

0x9483,	// (0x0001427d) list_setting_number_pane_vc_g1

0x948f,	// (0x00014289) list_setting_number_pane_vc_g2_ParamLimits

0x948f,	// (0x00014289) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x0001a5de) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x0001a5de) list_setting_number_pane_vc_g

0x949b,	// (0x00014295) list_setting_number_pane_vc_t1_ParamLimits

0x949b,	// (0x00014295) list_setting_number_pane_vc_t1

0x94af,	// (0x000142a9) list_setting_number_pane_vc_t2_ParamLimits

0x94af,	// (0x000142a9) list_setting_number_pane_vc_t2

0x94cb,	// (0x000142c5) list_setting_number_pane_vc_t3_ParamLimits

0x94cb,	// (0x000142c5) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x0001a5e3) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x0001a5e3) list_setting_number_pane_vc_t

0x94f9,	// (0x000142f3) set_value_pane_vc_ParamLimits

0x94f9,	// (0x000142f3) set_value_pane_vc

0xab0d,	// (0x00015907) list_double2_graphic_pane_vc_ParamLimits

0xab0d,	// (0x00015907) list_double2_graphic_pane_vc

0xab0d,	// (0x00015907) list_double2_large_graphic_pane_vc_ParamLimits

0xab0d,	// (0x00015907) list_double2_large_graphic_pane_vc

0xab0d,	// (0x00015907) list_double2_pane_vc_ParamLimits

0xab0d,	// (0x00015907) list_double2_pane_vc

0xab0d,	// (0x00015907) list_double_graphic_heading_pane_vc_ParamLimits

0xab0d,	// (0x00015907) list_double_graphic_heading_pane_vc

0xab0d,	// (0x00015907) list_double_graphic_pane_vc_ParamLimits

0xab0d,	// (0x00015907) list_double_graphic_pane_vc

0xab0d,	// (0x00015907) list_double_heading_pane_vc_ParamLimits

0xab0d,	// (0x00015907) list_double_heading_pane_vc

0xab1f,	// (0x00015919) list_double_large_graphic_pane_vc_ParamLimits

0xab1f,	// (0x00015919) list_double_large_graphic_pane_vc

0xab0d,	// (0x00015907) list_double_number_pane_vc_ParamLimits

0xab0d,	// (0x00015907) list_double_number_pane_vc

0xab0d,	// (0x00015907) list_double_pane_vc_ParamLimits

0xab0d,	// (0x00015907) list_double_pane_vc

0xab0d,	// (0x00015907) list_double_time_pane_vc_ParamLimits

0xab0d,	// (0x00015907) list_double_time_pane_vc

0xab0d,	// (0x00015907) list_setting_number_pane_vc_ParamLimits

0xab0d,	// (0x00015907) list_setting_number_pane_vc

0xab0d,	// (0x00015907) list_setting_pane_vc_ParamLimits

0xab0d,	// (0x00015907) list_setting_pane_vc

0xab0d,	// (0x00015907) list_single_graphic_heading_pane_vc_ParamLimits

0xab0d,	// (0x00015907) list_single_graphic_heading_pane_vc

0xab0d,	// (0x00015907) list_single_heading_pane_vc_ParamLimits

0xab0d,	// (0x00015907) list_single_heading_pane_vc

0xab3d,	// (0x00015937) list_single_number_heading_pane_vc_ParamLimits

0xab3d,	// (0x00015937) list_single_number_heading_pane_vc

0x937d,	// (0x00014177) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x937d,	// (0x00014177) list_double_graphic_heading_pane_vc_g1

0xb0f9,	// (0x00015ef3) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xb0f9,	// (0x00015ef3) list_double_graphic_heading_pane_vc_g2

0xb105,	// (0x00015eff) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xb105,	// (0x00015eff) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ee,	// (0x0001a7e8) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x0001a7e8) list_double_graphic_heading_pane_vc_g

0xb111,	// (0x00015f0b) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xb111,	// (0x00015f0b) list_double_graphic_heading_pane_vc_t1

0xb12d,	// (0x00015f27) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xb12d,	// (0x00015f27) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f5,	// (0x0001a7ef) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f5,	// (0x0001a7ef) list_double_graphic_heading_pane_vc_t

0x9483,	// (0x0001427d) list_setting_pane_vc_g1_ParamLimits

0x9483,	// (0x0001427d) list_setting_pane_vc_g1

0x948f,	// (0x00014289) list_setting_pane_vc_g2_ParamLimits

0x948f,	// (0x00014289) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x0001a5de) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x0001a5de) list_setting_pane_vc_g

0xb359,	// (0x00016153) list_setting_pane_vc_t1_ParamLimits

0xb359,	// (0x00016153) list_setting_pane_vc_t1

0xb375,	// (0x0001616f) list_setting_pane_vc_t2_ParamLimits

0xb375,	// (0x0001616f) list_setting_pane_vc_t2

0x0001,

0xfa23,	// (0x0001a81d) list_setting_pane_vc_t_ParamLimits

0xfa23,	// (0x0001a81d) list_setting_pane_vc_t

0x94f9,	// (0x000142f3) set_value_pane_cp_vc_ParamLimits

0x94f9,	// (0x000142f3) set_value_pane_cp_vc

0x8aba,	// (0x000138b4) list_single_number_heading_pane_vc_g1_ParamLimits

0x8aba,	// (0x000138b4) list_single_number_heading_pane_vc_g1

0x9389,	// (0x00014183) list_single_number_heading_pane_vc_g2_ParamLimits

0x9389,	// (0x00014183) list_single_number_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x0001a5d4) list_single_number_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x0001a5d4) list_single_number_heading_pane_vc_g

0x944f,	// (0x00014249) list_single_number_heading_pane_vc_t1_ParamLimits

0x944f,	// (0x00014249) list_single_number_heading_pane_vc_t1

0xb391,	// (0x0001618b) list_single_number_heading_pane_vc_t2_ParamLimits

0xb391,	// (0x0001618b) list_single_number_heading_pane_vc_t2

0xb3a5,	// (0x0001619f) list_single_number_heading_pane_vc_t3_ParamLimits

0xb3a5,	// (0x0001619f) list_single_number_heading_pane_vc_t3

0x0002,

0xfa28,	// (0x0001a822) list_single_number_heading_pane_vc_t_ParamLimits

0xfa28,	// (0x0001a822) list_single_number_heading_pane_vc_t

0x937d,	// (0x00014177) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x937d,	// (0x00014177) list_single_graphic_heading_pane_vc_g1

0x8aba,	// (0x000138b4) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x8aba,	// (0x000138b4) list_single_graphic_heading_pane_vc_g4

0x9389,	// (0x00014183) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x9389,	// (0x00014183) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b9,	// (0x0001a5b3) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b9,	// (0x0001a5b3) list_single_graphic_heading_pane_vc_g

0x944f,	// (0x00014249) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x944f,	// (0x00014249) list_single_graphic_heading_pane_vc_t1

0xb3b7,	// (0x000161b1) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xb3b7,	// (0x000161b1) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2f,	// (0x0001a829) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2f,	// (0x0001a829) list_single_graphic_heading_pane_vc_t

0x8aba,	// (0x000138b4) list_double2_pane_vc_g1_ParamLimits

0x8aba,	// (0x000138b4) list_double2_pane_vc_g1

0x9389,	// (0x00014183) list_double2_pane_vc_g2_ParamLimits

0x9389,	// (0x00014183) list_double2_pane_vc_g2

0x0001,

0xf7da,	// (0x0001a5d4) list_double2_pane_vc_g_ParamLimits

0xf7da,	// (0x0001a5d4) list_double2_pane_vc_g

0xb3cb,	// (0x000161c5) list_double2_pane_vc_t1_ParamLimits

0xb3cb,	// (0x000161c5) list_double2_pane_vc_t1

0xb3e1,	// (0x000161db) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xb3e1,	// (0x000161db) list_double2_large_graphic_pane_vc_g1

0x8aba,	// (0x000138b4) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x8aba,	// (0x000138b4) list_double2_large_graphic_pane_vc_g2

0x9389,	// (0x00014183) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x9389,	// (0x00014183) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa34,	// (0x0001a82e) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa34,	// (0x0001a82e) list_double2_large_graphic_pane_vc_g

0xb3ed,	// (0x000161e7) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xb3ed,	// (0x000161e7) list_double2_large_graphic_pane_vc_t1

0xb403,	// (0x000161fd) list_double_time_pane_vc_g1_ParamLimits

0xb403,	// (0x000161fd) list_double_time_pane_vc_g1

0xb40f,	// (0x00016209) list_double_time_pane_vc_g2_ParamLimits

0xb40f,	// (0x00016209) list_double_time_pane_vc_g2

0x0001,

0xfa3b,	// (0x0001a835) list_double_time_pane_vc_g_ParamLimits

0xfa3b,	// (0x0001a835) list_double_time_pane_vc_g

0xb41b,	// (0x00016215) list_double_time_pane_vc_t1_ParamLimits

0xb41b,	// (0x00016215) list_double_time_pane_vc_t1

0xb43f,	// (0x00016239) list_double_time_pane_vc_t2_ParamLimits

0xb43f,	// (0x00016239) list_double_time_pane_vc_t2

0xb46e,	// (0x00016268) list_double_time_pane_vc_t3_ParamLimits

0xb46e,	// (0x00016268) list_double_time_pane_vc_t3

0xb480,	// (0x0001627a) list_double_time_pane_vc_t4_ParamLimits

0xb480,	// (0x0001627a) list_double_time_pane_vc_t4

0x0003,

0xfa40,	// (0x0001a83a) list_double_time_pane_vc_t_ParamLimits

0xfa40,	// (0x0001a83a) list_double_time_pane_vc_t

0x8aba,	// (0x000138b4) list_double_pane_vc_g1_ParamLimits

0x8aba,	// (0x000138b4) list_double_pane_vc_g1

0x9389,	// (0x00014183) list_double_pane_vc_g2_ParamLimits

0x9389,	// (0x00014183) list_double_pane_vc_g2

0x0001,

0xf7da,	// (0x0001a5d4) list_double_pane_vc_g_ParamLimits

0xf7da,	// (0x0001a5d4) list_double_pane_vc_g

0xb494,	// (0x0001628e) list_double_pane_vc_t1_ParamLimits

0xb494,	// (0x0001628e) list_double_pane_vc_t1

0xb4a8,	// (0x000162a2) list_double_pane_vc_t2_ParamLimits

0xb4a8,	// (0x000162a2) list_double_pane_vc_t2

0x0001,

0xfa49,	// (0x0001a843) list_double_pane_vc_t_ParamLimits

0xfa49,	// (0x0001a843) list_double_pane_vc_t

0x8aba,	// (0x000138b4) list_double_number_pane_vc_g1_ParamLimits

0x8aba,	// (0x000138b4) list_double_number_pane_vc_g1

0x9389,	// (0x00014183) list_double_number_pane_vc_g2_ParamLimits

0x9389,	// (0x00014183) list_double_number_pane_vc_g2

0x0001,

0xf7da,	// (0x0001a5d4) list_double_number_pane_vc_g_ParamLimits

0xf7da,	// (0x0001a5d4) list_double_number_pane_vc_g

0xb4c0,	// (0x000162ba) list_double_number_pane_vc_t1_ParamLimits

0xb4c0,	// (0x000162ba) list_double_number_pane_vc_t1

0xb4d2,	// (0x000162cc) list_double_number_pane_vc_t2_ParamLimits

0xb4d2,	// (0x000162cc) list_double_number_pane_vc_t2

0xb4e6,	// (0x000162e0) list_double_number_pane_vc_t3_ParamLimits

0xb4e6,	// (0x000162e0) list_double_number_pane_vc_t3

0x0002,

0xfa4e,	// (0x0001a848) list_double_number_pane_vc_t_ParamLimits

0xfa4e,	// (0x0001a848) list_double_number_pane_vc_t

0xb4fe,	// (0x000162f8) list_double_large_graphic_pane_vc_g1_ParamLimits

0xb4fe,	// (0x000162f8) list_double_large_graphic_pane_vc_g1

0xb520,	// (0x0001631a) list_double_large_graphic_pane_vc_g2_ParamLimits

0xb520,	// (0x0001631a) list_double_large_graphic_pane_vc_g2

0xb534,	// (0x0001632e) list_double_large_graphic_pane_vc_g3_ParamLimits

0xb534,	// (0x0001632e) list_double_large_graphic_pane_vc_g3

0xb543,	// (0x0001633d) list_double_large_graphic_pane_vc_g4_ParamLimits

0xb543,	// (0x0001633d) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa55,	// (0x0001a84f) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa55,	// (0x0001a84f) list_double_large_graphic_pane_vc_g

0xb54f,	// (0x00016349) list_double_large_graphic_pane_vc_t1_ParamLimits

0xb54f,	// (0x00016349) list_double_large_graphic_pane_vc_t1

0xb56b,	// (0x00016365) list_double_large_graphic_pane_vc_t2_ParamLimits

0xb56b,	// (0x00016365) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa5e,	// (0x0001a858) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa5e,	// (0x0001a858) list_double_large_graphic_pane_vc_t

0xb0f9,	// (0x00015ef3) list_double_heading_pane_vc_g1_ParamLimits

0xb0f9,	// (0x00015ef3) list_double_heading_pane_vc_g1

0xb105,	// (0x00015eff) list_double_heading_pane_vc_g2_ParamLimits

0xb105,	// (0x00015eff) list_double_heading_pane_vc_g2

0x0001,

0xfa63,	// (0x0001a85d) list_double_heading_pane_vc_g_ParamLimits

0xfa63,	// (0x0001a85d) list_double_heading_pane_vc_g

0xb58d,	// (0x00016387) list_double_heading_pane_vc_t1_ParamLimits

0xb58d,	// (0x00016387) list_double_heading_pane_vc_t1

0x944f,	// (0x00014249) list_double_heading_pane_vc_t2_ParamLimits

0x944f,	// (0x00014249) list_double_heading_pane_vc_t2

0x0001,

0xfa68,	// (0x0001a862) list_double_heading_pane_vc_t_ParamLimits

0xfa68,	// (0x0001a862) list_double_heading_pane_vc_t

0xb5a1,	// (0x0001639b) list_double_graphic_pane_vc_g1_ParamLimits

0xb5a1,	// (0x0001639b) list_double_graphic_pane_vc_g1

0xb5ad,	// (0x000163a7) list_double_graphic_pane_vc_g2_ParamLimits

0xb5ad,	// (0x000163a7) list_double_graphic_pane_vc_g2

0x8aba,	// (0x000138b4) list_double_graphic_pane_vc_g3_ParamLimits

0x8aba,	// (0x000138b4) list_double_graphic_pane_vc_g3

0x0003,

0xfa6d,	// (0x0001a867) list_double_graphic_pane_vc_g_ParamLimits

0xfa6d,	// (0x0001a867) list_double_graphic_pane_vc_g

0xb5ca,	// (0x000163c4) list_double_graphic_pane_vc_t1_ParamLimits

0xb5ca,	// (0x000163c4) list_double_graphic_pane_vc_t1

0xb5f4,	// (0x000163ee) list_double_graphic_pane_vc_t2_ParamLimits

0xb5f4,	// (0x000163ee) list_double_graphic_pane_vc_t2

0x0001,

0xfa76,	// (0x0001a870) list_double_graphic_pane_vc_t_ParamLimits

0xfa76,	// (0x0001a870) list_double_graphic_pane_vc_t

0x48eb,	// (0x0000f6e5) aid_size_cell_fastswap

0x48f3,	// (0x0000f6ed) aid_size_cell_touch_ParamLimits

0x48f3,	// (0x0000f6ed) aid_size_cell_touch

0x4b58,	// (0x0000f952) popup_fast_swap_wide_window_ParamLimits

0x4b58,	// (0x0000f952) popup_fast_swap_wide_window

0x4c6c,	// (0x0000fa66) touch_pane_ParamLimits

0x4c6c,	// (0x0000fa66) touch_pane

0x7bfc,	// (0x000129f6) button_value_adjust_pane_cp2

0x7c04,	// (0x000129fe) button_value_adjust_pane_cp4

0x7c26,	// (0x00012a20) form_field_data_pane_cp2

0x7c47,	// (0x00012a41) form_field_data_wide_pane_cp2

0x82c9,	// (0x000130c3) bg_scroll_pane_ParamLimits

0x4efa,	// (0x0000fcf4) scroll_handle_pane_ParamLimits

0x4f0e,	// (0x0000fd08) scroll_sc2_down_pane_ParamLimits

0x4f0e,	// (0x0000fd08) scroll_sc2_down_pane

0x82fa,	// (0x000130f4) scroll_sc2_up_pane_ParamLimits

0x82fa,	// (0x000130f4) scroll_sc2_up_pane

0xbaac,	// (0x000168a6) grid_wheel_folder_pane_g1_ParamLimits

0xbaac,	// (0x000168a6) grid_wheel_folder_pane_g1

0x50d3,	// (0x0000fecd) clock_nsta_pane_cp2_ParamLimits

0x50d3,	// (0x0000fecd) clock_nsta_pane_cp2

0x8040,	// (0x00012e3a) listscroll_midp_pane_ParamLimits

0x8b89,	// (0x00013983) midp_canvas_pane

0x8e71,	// (0x00013c6b) nsta_clock_indic_pane

0x8ead,	// (0x00013ca7) listscroll_form_pane_vc

0x8eb5,	// (0x00013caf) listscroll_set_pane_vc_ParamLimits

0x8eb5,	// (0x00013caf) listscroll_set_pane_vc

0x8fc2,	// (0x00013dbc) clock_nsta_pane

0x9037,	// (0x00013e31) indicator_nsta_pane

0x9317,	// (0x00014111) bg_popup_sub_pane_cp2_ParamLimits

0x932b,	// (0x00014125) find_pane_cp2_ParamLimits

0x932b,	// (0x00014125) find_pane_cp2

0x9341,	// (0x0001413b) grid_toobar_pane_ParamLimits

0x9509,	// (0x00014303) list_form_gen_pane_vc_ParamLimits

0x9509,	// (0x00014303) list_form_gen_pane_vc

0x951f,	// (0x00014319) scroll_pane_cp8_vc_ParamLimits

0x951f,	// (0x00014319) scroll_pane_cp8_vc

0x959b,	// (0x00014395) data_form_wide_pane_vc_ParamLimits

0x959b,	// (0x00014395) data_form_wide_pane_vc

0x95a7,	// (0x000143a1) form_field_data_wide_pane_vc_g1

0x95af,	// (0x000143a9) form_field_data_wide_pane_vc_t1_ParamLimits

0x95af,	// (0x000143a9) form_field_data_wide_pane_vc_t1

0x7ce2,	// (0x00012adc) input_focus_pane_cp6_vc_ParamLimits

0x7ce2,	// (0x00012adc) input_focus_pane_cp6_vc

0x9919,	// (0x00014713) list_midp_pane_ParamLimits

0x9925,	// (0x0001471f) scroll_pane_cp16_ParamLimits

0x9925,	// (0x0001471f) scroll_pane_cp16

0x9973,	// (0x0001476d) button_value_adjust_pane_ParamLimits

0x9973,	// (0x0001476d) button_value_adjust_pane

0xa919,	// (0x00015713) button_value_adjust_pane_cp6_ParamLimits

0xa919,	// (0x00015713) button_value_adjust_pane_cp6

0xaa43,	// (0x0001583d) settings_code_pane_cp_ParamLimits

0xaa43,	// (0x0001583d) settings_code_pane_cp

0x6df4,	// (0x00011bee) cell_touch_pane_g1

0x6df4,	// (0x00011bee) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x0001a4f8) cell_touch_pane_g

0xb0d7,	// (0x00015ed1) cell_touch_pane_cp_ParamLimits

0xb0d7,	// (0x00015ed1) cell_touch_pane_cp

0xb0e7,	// (0x00015ee1) cell_touch_pane_ParamLimits

0xb0e7,	// (0x00015ee1) cell_touch_pane

0x6df4,	// (0x00011bee) scroll_sc2_down_pane_g1

0x6df4,	// (0x00011bee) scroll_sc2_up_pane_g1

0x6dfe,	// (0x00011bf8) bg_set_opt_pane_cp4_vc

0xb14b,	// (0x00015f45) list_set_graphic_pane_vc_g1_ParamLimits

0xb14b,	// (0x00015f45) list_set_graphic_pane_vc_g1

0xb157,	// (0x00015f51) list_set_graphic_pane_vc_g2_ParamLimits

0xb157,	// (0x00015f51) list_set_graphic_pane_vc_g2

0x0001,

0xf9fa,	// (0x0001a7f4) list_set_graphic_pane_vc_g_ParamLimits

0xf9fa,	// (0x0001a7f4) list_set_graphic_pane_vc_g

0xb163,	// (0x00015f5d) text_primary_small_cp13_vc_ParamLimits

0xb163,	// (0x00015f5d) text_primary_small_cp13_vc

0xb17b,	// (0x00015f75) list_set_graphic_pane_vc_ParamLimits

0xb17b,	// (0x00015f75) list_set_graphic_pane_vc

0x6dfe,	// (0x00011bf8) input_focus_pane_cp2_vc

0x6df4,	// (0x00011bee) setting_code_pane_vc_g1

0x6f29,	// (0x00011d23) setting_code_pane_vc_t1

0xb18e,	// (0x00015f88) set_text_pane_vc_t1_ParamLimits

0xb18e,	// (0x00015f88) set_text_pane_vc_t1

0x6dfe,	// (0x00011bf8) input_focus_pane_cp1_vc

0xb1aa,	// (0x00015fa4) list_set_text_pane_vc

0x6df4,	// (0x00011bee) setting_text_pane_vc_g1

0x6dfe,	// (0x00011bf8) bg_set_opt_pane_cp2_vc

0x6f20,	// (0x00011d1a) setting_slider_graphic_pane_vc_g1

0xb1b4,	// (0x00015fae) setting_slider_graphic_pane_vc_t1

0xb1c4,	// (0x00015fbe) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ff,	// (0x0001a7f9) setting_slider_graphic_pane_vc_t

0xb1d4,	// (0x00015fce) slider_set_pane_cp_vc

0xb1dc,	// (0x00015fd6) slider_set_pane_vc_g1

0xb1e5,	// (0x00015fdf) slider_set_pane_vc_g2

0x0006,

0xfa04,	// (0x0001a7fe) slider_set_pane_vc_g

0x7e0b,	// (0x00012c05) set_opt_bg_pane_g1_copy1

0x7e13,	// (0x00012c0d) set_opt_bg_pane_g2_copy1

0xb211,	// (0x0001600b) set_opt_bg_pane_g3_copy1

0x7e23,	// (0x00012c1d) set_opt_bg_pane_g4_copy1

0x7e2b,	// (0x00012c25) set_opt_bg_pane_g5_copy1

0x7e33,	// (0x00012c2d) set_opt_bg_pane_g6_copy1

0xb21b,	// (0x00016015) set_opt_bg_pane_g7_copy1

0xb223,	// (0x0001601d) set_opt_bg_pane_g8_copy1

0xb22d,	// (0x00016027) set_opt_bg_pane_g9_copy1

0x6dfe,	// (0x00011bf8) bg_set_opt_pane_cp_vc

0xb237,	// (0x00016031) setting_slider_pane_vc_t1

0xb246,	// (0x00016040) setting_slider_pane_vc_t2

0xb256,	// (0x00016050) setting_slider_pane_vc_t3

0x0002,

0xfa13,	// (0x0001a80d) setting_slider_pane_vc_t

0xb266,	// (0x00016060) slider_set_pane_vc

0x5ac7,	// (0x000108c1) volume_set_pane_vc_g1

0x5ad0,	// (0x000108ca) volume_set_pane_vc_g2

0x5ad9,	// (0x000108d3) volume_set_pane_vc_g3

0x5ae2,	// (0x000108dc) volume_set_pane_vc_g4

0x5aeb,	// (0x000108e5) volume_set_pane_vc_g5

0x5af4,	// (0x000108ee) volume_set_pane_vc_g6

0x5afd,	// (0x000108f7) volume_set_pane_vc_g7

0x5b06,	// (0x00010900) volume_set_pane_vc_g8

0x5b0f,	// (0x00010909) volume_set_pane_vc_g9

0x5b18,	// (0x00010912) volume_set_pane_vc_g10

0x0009,

0xf8b1,	// (0x0001a6ab) volume_set_pane_vc_g

0xb26e,	// (0x00016068) volume_set_pane_vc

0xb276,	// (0x00016070) button_value_adjust_pane_cp1_vc

0xb280,	// (0x0001607a) list_highlight_pane_cp2_vc

0xb289,	// (0x00016083) list_set_pane_vc_ParamLimits

0xb289,	// (0x00016083) list_set_pane_vc

0xb2e7,	// (0x000160e1) main_pane_set_vc_t1_ParamLimits

0xb2e7,	// (0x000160e1) main_pane_set_vc_t1

0xb2fc,	// (0x000160f6) main_pane_set_vc_t2_ParamLimits

0xb2fc,	// (0x000160f6) main_pane_set_vc_t2

0xb30e,	// (0x00016108) main_pane_set_vc_t3_ParamLimits

0xb30e,	// (0x00016108) main_pane_set_vc_t3

0xb322,	// (0x0001611c) main_pane_set_vc_t4_ParamLimits

0xb322,	// (0x0001611c) main_pane_set_vc_t4

0x0003,

0xfa1a,	// (0x0001a814) main_pane_set_vc_t_ParamLimits

0xfa1a,	// (0x0001a814) main_pane_set_vc_t

0xb336,	// (0x00016130) setting_code_pane_vc_ParamLimits

0xb336,	// (0x00016130) setting_code_pane_vc

0xb347,	// (0x00016141) setting_slider_graphic_pane_vc

0xb347,	// (0x00016141) setting_slider_pane_vc

0xb347,	// (0x00016141) setting_text_pane_vc

0xb347,	// (0x00016141) setting_volume_pane_vc

0xb351,	// (0x0001614b) scroll_pane_cp121_vc

0x7bea,	// (0x000129e4) set_content_pane_vc

0xb61e,	// (0x00016418) button_value_adjust_pane_g1

0xb627,	// (0x00016421) button_value_adjust_pane_g2

0x0001,

0xfa7b,	// (0x0001a875) button_value_adjust_pane_g

0xb630,	// (0x0001642a) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb630,	// (0x0001642a) form_field_slider_wide_pane_vc_t1

0xb644,	// (0x0001643e) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb644,	// (0x0001643e) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa80,	// (0x0001a87a) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa80,	// (0x0001a87a) form_field_slider_wide_pane_vc_t

0x7173,	// (0x00011f6d) input_focus_pane_cp10_vc_ParamLimits

0x7173,	// (0x00011f6d) input_focus_pane_cp10_vc

0xb672,	// (0x0001646c) slider_cont_pane_cp1_vc_ParamLimits

0xb672,	// (0x0001646c) slider_cont_pane_cp1_vc

0xb684,	// (0x0001647e) slider_form_pane_g1_cp2

0xb1e5,	// (0x00015fdf) slider_form_pane_g2_cp2

0xb6b1,	// (0x000164ab) form_field_slider_pane_vc_t3

0xb6bf,	// (0x000164b9) form_field_slider_pane_vc_t4

0xb6cd,	// (0x000164c7) slider_form_pane_vc_ParamLimits

0xb6cd,	// (0x000164c7) slider_form_pane_vc

0xb6da,	// (0x000164d4) form_field_slider_pane_vc_t1_ParamLimits

0xb6da,	// (0x000164d4) form_field_slider_pane_vc_t1

0xb644,	// (0x0001643e) form_field_slider_pane_vc_t2_ParamLimits

0xb644,	// (0x0001643e) form_field_slider_pane_vc_t2

0x0001,

0xfa92,	// (0x0001a88c) form_field_slider_pane_vc_t_ParamLimits

0xfa92,	// (0x0001a88c) form_field_slider_pane_vc_t

0x7173,	// (0x00011f6d) input_focus_pane_cp9_vc_ParamLimits

0x7173,	// (0x00011f6d) input_focus_pane_cp9_vc

0xb6f6,	// (0x000164f0) slider_cont_pane_vc_ParamLimits

0xb6f6,	// (0x000164f0) slider_cont_pane_vc

0xb70a,	// (0x00016504) list_form_graphic_pane_cp_vc_ParamLimits

0xb70a,	// (0x00016504) list_form_graphic_pane_cp_vc

0x95a7,	// (0x000143a1) form_field_popup_wide_pane_vc_g1

0xb71f,	// (0x00016519) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb71f,	// (0x00016519) form_field_popup_wide_pane_vc_t1

0x7ce2,	// (0x00012adc) input_focus_pane_cp8_vc_ParamLimits

0x7ce2,	// (0x00012adc) input_focus_pane_cp8_vc

0xb764,	// (0x0001655e) list_form_wide_pane_vc_ParamLimits

0xb764,	// (0x0001655e) list_form_wide_pane_vc

0xb770,	// (0x0001656a) list_form_graphic_pane_vc_g1

0xb778,	// (0x00016572) list_form_graphic_pane_vc_t1_ParamLimits

0xb778,	// (0x00016572) list_form_graphic_pane_vc_t1

0x6ede,	// (0x00011cd8) list_highlight_pane_cp5_vc_ParamLimits

0x6ede,	// (0x00011cd8) list_highlight_pane_cp5_vc

0xb794,	// (0x0001658e) list_form_graphic_pane_vc_ParamLimits

0xb794,	// (0x0001658e) list_form_graphic_pane_vc

0x95a7,	// (0x000143a1) form_field_popup_pane_vc_g1

0xb7aa,	// (0x000165a4) form_field_popup_pane_vc_t1_ParamLimits

0xb7aa,	// (0x000165a4) form_field_popup_pane_vc_t1

0x7ce2,	// (0x00012adc) input_focus_pane_cp7_vc_ParamLimits

0x7ce2,	// (0x00012adc) input_focus_pane_cp7_vc

0xb7c1,	// (0x000165bb) list_form_pane_vc_ParamLimits

0xb7c1,	// (0x000165bb) list_form_pane_vc

0xb7cd,	// (0x000165c7) data_form_pane_vc_t1_ParamLimits

0xb7cd,	// (0x000165c7) data_form_pane_vc_t1

0x7e0b,	// (0x00012c05) input_focus_pane_vc_g1

0x7e13,	// (0x00012c0d) input_focus_pane_vc_g2

0x7e1b,	// (0x00012c15) input_focus_pane_vc_g3

0x7e23,	// (0x00012c1d) input_focus_pane_vc_g4

0x7e2b,	// (0x00012c25) input_focus_pane_vc_g5

0x7e33,	// (0x00012c2d) input_focus_pane_vc_g6

0x7e3b,	// (0x00012c35) input_focus_pane_vc_g7

0x7e43,	// (0x00012c3d) input_focus_pane_vc_g8

0x7e4b,	// (0x00012c45) input_focus_pane_vc_g9

0x6df4,	// (0x00011bee) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x0001a481) input_focus_pane_vc_g

0x959b,	// (0x00014395) data_form_pane_vc_ParamLimits

0x959b,	// (0x00014395) data_form_pane_vc

0x95a7,	// (0x000143a1) form_field_data_pane_vc_g1

0xb7e8,	// (0x000165e2) form_field_data_pane_vc_t1_ParamLimits

0xb7e8,	// (0x000165e2) form_field_data_pane_vc_t1

0x7ce2,	// (0x00012adc) input_focus_pane_vc_ParamLimits

0x7ce2,	// (0x00012adc) input_focus_pane_vc

0xb802,	// (0x000165fc) button_value_adjust_pane_cp3_vc

0xb80a,	// (0x00016604) button_value_adjust_pane_cp5_vc

0xb812,	// (0x0001660c) form_field_data_pane_vc_ParamLimits

0xb812,	// (0x0001660c) form_field_data_pane_vc

0xb829,	// (0x00016623) form_field_data_pane_vc_cp2

0xb831,	// (0x0001662b) form_field_data_wide_pane_vc_ParamLimits

0xb831,	// (0x0001662b) form_field_data_wide_pane_vc

0xb847,	// (0x00016641) form_field_data_wide_pane_vc_cp2

0xb84f,	// (0x00016649) form_field_popup_pane_vc_ParamLimits

0xb84f,	// (0x00016649) form_field_popup_pane_vc

0xb866,	// (0x00016660) form_field_popup_wide_pane_vc_ParamLimits

0xb866,	// (0x00016660) form_field_popup_wide_pane_vc

0xb87c,	// (0x00016676) form_field_slider_pane_vc_ParamLimits

0xb87c,	// (0x00016676) form_field_slider_pane_vc

0xb88f,	// (0x00016689) form_field_slider_wide_pane_vc_ParamLimits

0xb88f,	// (0x00016689) form_field_slider_wide_pane_vc

0xb8a2,	// (0x0001669c) grid_touch_1_pane_ParamLimits

0xb8a2,	// (0x0001669c) grid_touch_1_pane

0xb8ae,	// (0x000166a8) grid_touch_2_pane_ParamLimits

0xb8ae,	// (0x000166a8) grid_touch_2_pane

0x8e3c,	// (0x00013c36) touch_pane_g1_ParamLimits

0x8e3c,	// (0x00013c36) touch_pane_g1

0xb8c6,	// (0x000166c0) cell_app_pane_cp_wide_ParamLimits

0xb8c6,	// (0x000166c0) cell_app_pane_cp_wide

0xb8d7,	// (0x000166d1) grid_popup_fast_wide_pane_ParamLimits

0xb8d7,	// (0x000166d1) grid_popup_fast_wide_pane

0xb8eb,	// (0x000166e5) scroll_pane_cp19_ParamLimits

0xb8eb,	// (0x000166e5) scroll_pane_cp19

0x6dfe,	// (0x00011bf8) bg_popup_window_pane_cp20

0xb8ff,	// (0x000166f9) listscroll_popup_fast_wide_pane

0x6ede,	// (0x00011cd8) grid_indicator_nsta_pane

0xb907,	// (0x00016701) clock_nsta_pane_g1

0xb910,	// (0x0001670a) clock_nsta_pane_t1

0xb92c,	// (0x00016726) cell_indicator_nsta_pane_ParamLimits

0xb92c,	// (0x00016726) cell_indicator_nsta_pane

0xb95d,	// (0x00016757) cell_indicator_nsta_pane_g1

0xb96b,	// (0x00016765) cell_indicator_nsta_pane_g2

0x0001,

0xfaa3,	// (0x0001a89d) cell_indicator_nsta_pane_g

0xb978,	// (0x00016772) clock_nsta_pane_cp

0xb980,	// (0x0001677a) indicator_nsta_pane_cp

0xb988,	// (0x00016782) nsta_clock_indic_pane_g1

0x6fc1,	// (0x00011dbb) grid_indicator_pane

0x83ef,	// (0x000131e9) scroll_pane_cp29

0x5022,	// (0x0000fe1c) indicator_nsta_pane_cp2_ParamLimits

0x5022,	// (0x0000fe1c) indicator_nsta_pane_cp2

0x6ede,	// (0x00011cd8) main_apps_wheel_pane

0x97fa,	// (0x000145f4) form_midp_field_text_pane_ParamLimits

0x9945,	// (0x0001473f) scroll_bar_cp050_ParamLimits

0xb9e9,	// (0x000167e3) cell_indicator_pane_ParamLimits

0xb9e9,	// (0x000167e3) cell_indicator_pane

0xba00,	// (0x000167fa) cell_indicator_pane_g1

0xba0a,	// (0x00016804) grid_wheel_folder_pane_ParamLimits

0xba0a,	// (0x00016804) grid_wheel_folder_pane

0xba20,	// (0x0001681a) list_wheel_apps_pane_ParamLimits

0xba20,	// (0x0001681a) list_wheel_apps_pane

0xba31,	// (0x0001682b) main_apps_wheel_pane_g1_ParamLimits

0xba31,	// (0x0001682b) main_apps_wheel_pane_g1

0xba45,	// (0x0001683f) main_apps_wheel_pane_g2_ParamLimits

0xba45,	// (0x0001683f) main_apps_wheel_pane_g2

0x0001,

0xfabf,	// (0x0001a8b9) main_apps_wheel_pane_g_ParamLimits

0xfabf,	// (0x0001a8b9) main_apps_wheel_pane_g

0xba5d,	// (0x00016857) main_apps_wheel_pane_t1_ParamLimits

0xba5d,	// (0x00016857) main_apps_wheel_pane_t1

0xba80,	// (0x0001687a) list_wheel_apps_pane_g1

0xba88,	// (0x00016882) list_wheel_apps_pane_g2

0xba90,	// (0x0001688a) list_wheel_apps_pane_g3

0xba98,	// (0x00016892) list_wheel_apps_pane_g4

0xbaa2,	// (0x0001689c) list_wheel_apps_pane_g5

0x0004,

0xfac4,	// (0x0001a8be) list_wheel_apps_pane_g

0x8a01,	// (0x000137fb) navi_icon_text_pane

0x8ef1,	// (0x00013ceb) aid_fill_nsta

0xbac5,	// (0x000168bf) navi_icon_text_pane_g1

0xbad1,	// (0x000168cb) navi_icon_text_pane_t1

0x8894,	// (0x0001368e) list_set_graphic_pane_t1_ParamLimits

0x8894,	// (0x0001368e) list_set_graphic_pane_t1

0xa094,	// (0x00014e8e) popup_midp_note_alarm_window_t6_ParamLimits

0xa094,	// (0x00014e8e) popup_midp_note_alarm_window_t6

0xa0a6,	// (0x00014ea0) popup_midp_note_alarm_window_t7_ParamLimits

0xa0a6,	// (0x00014ea0) popup_midp_note_alarm_window_t7

0xa0c4,	// (0x00014ebe) popup_midp_note_alarm_window_t8_ParamLimits

0xa0c4,	// (0x00014ebe) popup_midp_note_alarm_window_t8

0xa0d6,	// (0x00014ed0) popup_midp_note_alarm_window_t9_ParamLimits

0xa0d6,	// (0x00014ed0) popup_midp_note_alarm_window_t9

0xa0e8,	// (0x00014ee2) popup_midp_note_alarm_window_t10_ParamLimits

0xa0e8,	// (0x00014ee2) popup_midp_note_alarm_window_t10

0xa0fa,	// (0x00014ef4) popup_midp_note_alarm_window_t11_ParamLimits

0xa0fa,	// (0x00014ef4) popup_midp_note_alarm_window_t11

0xa10c,	// (0x00014f06) scroll_pane_cp17_ParamLimits

0xa10c,	// (0x00014f06) scroll_pane_cp17

0x5ac7,	// (0x000108c1) volume_small_pane_cp_g1

0x5dbc,	// (0x00010bb6) volume_small_pane_cp_g2

0x5dc5,	// (0x00010bbf) volume_small_pane_cp_g3

0x5dce,	// (0x00010bc8) volume_small_pane_cp_g4

0x5dd7,	// (0x00010bd1) volume_small_pane_cp_g5

0x5de0,	// (0x00010bda) volume_small_pane_cp_g6

0x5de9,	// (0x00010be3) volume_small_pane_cp_g7

0x5df2,	// (0x00010bec) volume_small_pane_cp_g8

0x5dfb,	// (0x00010bf5) volume_small_pane_cp_g9

0x5e04,	// (0x00010bfe) volume_small_pane_cp_g10

0x8c52,	// (0x00013a4c) midp_ticker_pane_g1_ParamLimits

0x8c5e,	// (0x00013a58) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x0001a54d) midp_ticker_pane_g_ParamLimits

0x8c6a,	// (0x00013a64) midp_ticker_pane_t1_ParamLimits

0x8f07,	// (0x00013d01) aid_fill_nsta_2

0x9931,	// (0x0001472b) list_form2_midp_pane

0xaac1,	// (0x000158bb) midp_editing_number_pane_ParamLimits

0xaad0,	// (0x000158ca) midp_ticker_pane_ParamLimits

0xbae3,	// (0x000168dd) form2_midp_field_pane

0xbb07,	// (0x00016901) scroll_pane_cp51

0xbb27,	// (0x00016921) form2_midp_button_pane_ParamLimits

0xbb27,	// (0x00016921) form2_midp_button_pane

0xbb39,	// (0x00016933) form2_midp_content_pane_ParamLimits

0xbb39,	// (0x00016933) form2_midp_content_pane

0xbb53,	// (0x0001694d) form2_midp_field_choice_group_pane

0xbb5b,	// (0x00016955) form2_midp_field_pane_g1

0xbb63,	// (0x0001695d) form2_midp_field_pane_g2

0xbb6b,	// (0x00016965) form2_midp_field_pane_g3

0xbb73,	// (0x0001696d) form2_midp_field_pane_g4

0x0003,

0xfae9,	// (0x0001a8e3) form2_midp_field_pane_g

0xbb7b,	// (0x00016975) form2_midp_gauge_slider_pane

0xbb83,	// (0x0001697d) form2_midp_gauge_wait_pane

0xbb8b,	// (0x00016985) form2_midp_image_pane_ParamLimits

0xbb8b,	// (0x00016985) form2_midp_image_pane

0xbba6,	// (0x000169a0) form2_midp_label_pane_ParamLimits

0xbba6,	// (0x000169a0) form2_midp_label_pane

0xbbbf,	// (0x000169b9) form2_midp_label_pane_cp_ParamLimits

0xbbbf,	// (0x000169b9) form2_midp_label_pane_cp

0xbbe0,	// (0x000169da) form2_midp_string_pane_ParamLimits

0xbbe0,	// (0x000169da) form2_midp_string_pane

0xbbf2,	// (0x000169ec) form2_midp_text_pane_ParamLimits

0xbbf2,	// (0x000169ec) form2_midp_text_pane

0xbc0f,	// (0x00016a09) form2_midp_time_pane

0xbc1f,	// (0x00016a19) input_focus_pane_cp51_ParamLimits

0xbc1f,	// (0x00016a19) input_focus_pane_cp51

0xbc37,	// (0x00016a31) form2_midp_label_pane_t1_ParamLimits

0xbc37,	// (0x00016a31) form2_midp_label_pane_t1

0xbc78,	// (0x00016a72) form2_mdip_text_pane_t1_ParamLimits

0xbc78,	// (0x00016a72) form2_mdip_text_pane_t1

0xbc97,	// (0x00016a91) form2_midp_time_pane_t1

0xbcb2,	// (0x00016aac) form2_midp_gauge_slider_pane_t1

0xbcc4,	// (0x00016abe) form2_midp_gauge_slider_pane_t2

0xbcd6,	// (0x00016ad0) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf2,	// (0x0001a8ec) form2_midp_gauge_slider_pane_t

0xbce8,	// (0x00016ae2) form2_midp_slider_pane

0xbcf4,	// (0x00016aee) form2_midp_gauge_wait_pane_t1

0xbd02,	// (0x00016afc) form2_midp_wait_pane_ParamLimits

0xbd02,	// (0x00016afc) form2_midp_wait_pane

0x95ee,	// (0x000143e8) list_single_2graphic_pane_cp4_ParamLimits

0x95ee,	// (0x000143e8) list_single_2graphic_pane_cp4

0xbd2d,	// (0x00016b27) list_single_midp_graphic_pane_cp_ParamLimits

0xbd2d,	// (0x00016b27) list_single_midp_graphic_pane_cp

0x6dfe,	// (0x00011bf8) list_highlight_pane_cp20

0xbd5c,	// (0x00016b56) list_single_2graphic_pane_g1_cp4

0xbd64,	// (0x00016b5e) list_single_2graphic_pane_g2_cp4

0xbd6c,	// (0x00016b66) list_single_2graphic_pane_t1_cp4

0x6ede,	// (0x00011cd8) list_highlight_pane_cp21

0xbd7b,	// (0x00016b75) list_single_midp_graphic_pane_g4_cp

0xbd8a,	// (0x00016b84) list_single_midp_graphic_pane_t1_cp

0xbd9f,	// (0x00016b99) form2_mdip_string_pane_t1_ParamLimits

0xbd9f,	// (0x00016b99) form2_mdip_string_pane_t1

0x6dfe,	// (0x00011bf8) bg_wml_button_pane_cp2

0x6df4,	// (0x00011bee) form2_midp_image_pane_g1

0x79a0,	// (0x0001279a) list_double_large_graphic_pane_g5_ParamLimits

0x79a0,	// (0x0001279a) list_double_large_graphic_pane_g5

0x8040,	// (0x00012e3a) midp_form_pane_ParamLimits

0x6ede,	// (0x00011cd8) main_apps_wheel_pane_ParamLimits

0x5707,	// (0x00010501) popup_preview_window_ParamLimits

0x5707,	// (0x00010501) popup_preview_window

0x58c2,	// (0x000106bc) popup_touch_info_window_ParamLimits

0x58c2,	// (0x000106bc) popup_touch_info_window

0x58e0,	// (0x000106da) popup_touch_menu_window_ParamLimits

0x58e0,	// (0x000106da) popup_touch_menu_window

0x6dea,	// (0x00011be4) bg_popup_sub_pane_cp6

0xbe98,	// (0x00016c92) list_touch_menu_pane

0xbea0,	// (0x00016c9a) list_single_touch_menu_pane_ParamLimits

0xbea0,	// (0x00016c9a) list_single_touch_menu_pane

0xbeb6,	// (0x00016cb0) list_single_touch_menu_pane_t1

0x6ede,	// (0x00011cd8) bg_popup_sub_pane_cp7_ParamLimits

0x6ede,	// (0x00011cd8) bg_popup_sub_pane_cp7

0xbec4,	// (0x00016cbe) heading_sub_pane

0xbecc,	// (0x00016cc6) list_touch_info_pane_ParamLimits

0xbecc,	// (0x00016cc6) list_touch_info_pane

0xbedb,	// (0x00016cd5) list_single_touch_info_pane_ParamLimits

0xbedb,	// (0x00016cd5) list_single_touch_info_pane

0xbeed,	// (0x00016ce7) list_single_touch_info_pane_t1

0xbefb,	// (0x00016cf5) list_single_touch_info_pane_t2

0x0001,

0xfb00,	// (0x0001a8fa) list_single_touch_info_pane_t

0x8b81,	// (0x0001397b) bg_popup_heading_pane_cp

0xbf09,	// (0x00016d03) heading_sub_pane_t1

0x9535,	// (0x0001432f) bg_popup_preview_window_pane_cp_ParamLimits

0x9535,	// (0x0001432f) bg_popup_preview_window_pane_cp

0xbec4,	// (0x00016cbe) heading_preview_pane

0xbecc,	// (0x00016cc6) list_preview_pane_ParamLimits

0xbecc,	// (0x00016cc6) list_preview_pane

0xbf17,	// (0x00016d11) popup_preview_window_g1

0xbedb,	// (0x00016cd5) list_single_preview_pane_ParamLimits

0xbedb,	// (0x00016cd5) list_single_preview_pane

0xbf1f,	// (0x00016d19) list_single_preview_pane_g1

0xbf27,	// (0x00016d21) list_single_preview_pane_t1

0xbeed,	// (0x00016ce7) list_single_preview_pane_t2

0x0001,

0xfb05,	// (0x0001a8ff) list_single_preview_pane_t

0xbf35,	// (0x00016d2f) bg_popup_heading_pane_cp2_ParamLimits

0xbf35,	// (0x00016d2f) bg_popup_heading_pane_cp2

0xbf4b,	// (0x00016d45) heading_preview_pane_g1

0xbf53,	// (0x00016d4d) heading_preview_pane_t1_ParamLimits

0xbf53,	// (0x00016d4d) heading_preview_pane_t1

0x6fe4,	// (0x00011dde) soft_indicator_pane_t1_ParamLimits

0x76da,	// (0x000124d4) scroll_pane_ParamLimits

0x82e8,	// (0x000130e2) scroll_sc2_left_pane

0x82f1,	// (0x000130eb) scroll_sc2_right_pane

0x8310,	// (0x0001310a) scroll_bg_pane_g1_ParamLimits

0x8325,	// (0x0001311f) scroll_bg_pane_g2_ParamLimits

0x833d,	// (0x00013137) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x0001a4d8) scroll_bg_pane_g_ParamLimits

0x8310,	// (0x0001310a) scroll_handle_pane_g1_ParamLimits

0x835f,	// (0x00013159) scroll_handle_pane_g2_ParamLimits

0x833d,	// (0x00013137) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x0001a4df) scroll_handle_pane_g_ParamLimits

0x5388,	// (0x00010182) popup_choice_list_window_ParamLimits

0x5388,	// (0x00010182) popup_choice_list_window

0x9323,	// (0x0001411d) choice_list_pane

0x93d3,	// (0x000141cd) cell_toolbar_pane_t1

0x93fb,	// (0x000141f5) toolbar_button_pane_ParamLimits

0xa5c6,	// (0x000153c0) ai_gene_pane_1_t2_ParamLimits

0xa5c6,	// (0x000153c0) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x0001a707) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x0001a707) ai_gene_pane_1_t

0xbf70,	// (0x00016d6a) scroll_sc2_left_pane_g1

0xbf70,	// (0x00016d6a) scroll_sc2_right_pane_g1

0x8ec7,	// (0x00013cc1) bg_popup_sub_pane_cp10

0xbf7a,	// (0x00016d74) list_choice_list_pane

0xbf93,	// (0x00016d8d) list_single_choice_list_pane_ParamLimits

0xbf93,	// (0x00016d8d) list_single_choice_list_pane

0xbfa6,	// (0x00016da0) list_single_choice_list_pane_g1

0x7ff0,	// (0x00012dea) list_single_choice_list_pane_t1_ParamLimits

0x7ff0,	// (0x00012dea) list_single_choice_list_pane_t1

0xbfae,	// (0x00016da8) choice_list_pane_g1

0xbfb6,	// (0x00016db0) choice_list_pane_t1

0x6dea,	// (0x00011be4) input_focus_pane_cp11

0x81c7,	// (0x00012fc1) title_pane_stacon_g2_ParamLimits

0x81c7,	// (0x00012fc1) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x0001a4be) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0001a4be) title_pane_stacon_g

0x8b81,	// (0x0001397b) cursor_press_pane

0x5434,	// (0x0001022e) popup_fep_hwr_window_ParamLimits

0x5434,	// (0x0001022e) popup_fep_hwr_window

0x54ae,	// (0x000102a8) popup_fep_vkb_window_ParamLimits

0x54ae,	// (0x000102a8) popup_fep_vkb_window

0xbfc4,	// (0x00016dbe) cursor_press_pane_g1

0x0002,

0xfb2e,	// (0x0001a928) fep_vkb_side_pane_g_ParamLimits

0x5e46,	// (0x00010c40) fep_hwr_candidate_pane_ParamLimits

0x5e46,	// (0x00010c40) fep_hwr_candidate_pane

0x5e70,	// (0x00010c6a) fep_hwr_side_pane_ParamLimits

0x5e70,	// (0x00010c6a) fep_hwr_side_pane

0x5e90,	// (0x00010c8a) fep_hwr_top_pane_ParamLimits

0x5e90,	// (0x00010c8a) fep_hwr_top_pane

0x5ea8,	// (0x00010ca2) fep_hwr_write_pane_ParamLimits

0x5ea8,	// (0x00010ca2) fep_hwr_write_pane

0xfb2e,	// (0x0001a928) fep_vkb_side_pane_g

0xbfcc,	// (0x00016dc6) fep_hwr_top_pane_g1

0xbfde,	// (0x00016dd8) fep_hwr_top_pane_g2

0x5ee2,	// (0x00010cdc) fep_hwr_top_pane_g3

0x0002,

0xfb0a,	// (0x0001a904) fep_hwr_top_pane_g

0x5ef7,	// (0x00010cf1) fep_hwr_top_text_pane

0x84df,	// (0x000132d9) fep_hwr_top_text_pane_g1

0xc014,	// (0x00016e0e) fep_hwr_top_text_pane_t1

0x5fed,	// (0x00010de7) fep_hwr_candidate_pane_g1

0xc267,	// (0x00017061) fep_vkb_keypad_pane_g3_ParamLimits

0xc267,	// (0x00017061) fep_vkb_keypad_pane_g3

0xc28f,	// (0x00017089) fep_vkb_keypad_pane_g4_ParamLimits

0xc28f,	// (0x00017089) fep_vkb_keypad_pane_g4

0xc2fe,	// (0x000170f8) fep_vkb_bottom_pane_g2_ParamLimits

0xc2fe,	// (0x000170f8) fep_vkb_bottom_pane_g2

0x0001,

0xfb35,	// (0x0001a92f) fep_vkb_bottom_pane_g_ParamLimits

0xfb35,	// (0x0001a92f) fep_vkb_bottom_pane_g

0xbf70,	// (0x00016d6a) cell_vkb_side_pane_g2

0x0001,

0xfb3f,	// (0x0001a939) cell_vkb_side_pane_g

0xc389,	// (0x00017183) cell_vkb_side_pane_t1

0xc397,	// (0x00017191) cell_vkb_side_pane_t1_copy1

0xbf70,	// (0x00016d6a) bg_fep_vkb_candidate_pane_g2

0xc4c3,	// (0x000172bd) cell_vkb_candidate_pane_ParamLimits

0xc022,	// (0x00016e1c) aid_size_cell_vkb_ParamLimits

0xc022,	// (0x00016e1c) aid_size_cell_vkb

0xc4c3,	// (0x000172bd) cell_vkb_candidate_pane

0x6014,	// (0x00010e0e) bg_popup_fep_shadow_pane_g1

0xc0b0,	// (0x00016eaa) fep_vkb_bottom_pane_ParamLimits

0xc0b0,	// (0x00016eaa) fep_vkb_bottom_pane

0xc0e6,	// (0x00016ee0) fep_vkb_candidate_pane_ParamLimits

0xc0e6,	// (0x00016ee0) fep_vkb_candidate_pane

0xc102,	// (0x00016efc) fep_vkb_keypad_pane_ParamLimits

0xc102,	// (0x00016efc) fep_vkb_keypad_pane

0xc148,	// (0x00016f42) fep_vkb_side_pane_ParamLimits

0xc148,	// (0x00016f42) fep_vkb_side_pane

0xc184,	// (0x00016f7e) fep_vkb_top_pane_ParamLimits

0xc184,	// (0x00016f7e) fep_vkb_top_pane

0xc1c0,	// (0x00016fba) fep_vkb_top_pane_g1_ParamLimits

0xc1c0,	// (0x00016fba) fep_vkb_top_pane_g1

0xc1cf,	// (0x00016fc9) fep_vkb_top_pane_g2_ParamLimits

0xc1cf,	// (0x00016fc9) fep_vkb_top_pane_g2

0xc1de,	// (0x00016fd8) fep_vkb_top_pane_g3_ParamLimits

0xc1de,	// (0x00016fd8) fep_vkb_top_pane_g3

0x0003,

0xfb25,	// (0x0001a91f) fep_vkb_top_pane_g_ParamLimits

0xfb25,	// (0x0001a91f) fep_vkb_top_pane_g

0xc1fc,	// (0x00016ff6) fep_vkb_top_text_pane_ParamLimits

0xc1fc,	// (0x00016ff6) fep_vkb_top_text_pane

0xc20d,	// (0x00017007) fep_vkb_side_pane_g1_ParamLimits

0xc20d,	// (0x00017007) fep_vkb_side_pane_g1

0xc256,	// (0x00017050) grid_vkb_side_pane_ParamLimits

0xc256,	// (0x00017050) grid_vkb_side_pane

0x601c,	// (0x00010e16) bg_popup_fep_shadow_pane_g2

0x6025,	// (0x00010e1f) bg_popup_fep_shadow_pane_g3

0x602d,	// (0x00010e27) bg_popup_fep_shadow_pane_g4

0x6036,	// (0x00010e30) bg_popup_fep_shadow_pane_g5

0x6040,	// (0x00010e3a) bg_popup_fep_shadow_pane_g6

0x6048,	// (0x00010e42) bg_popup_fep_shadow_pane_g7

0x7e23,	// (0x00012c1d) bg_popup_fep_shadow_pane_g8

0xc2ad,	// (0x000170a7) grid_vkb_keypad_number_pane_ParamLimits

0xc2ad,	// (0x000170a7) grid_vkb_keypad_number_pane

0xc2bd,	// (0x000170b7) grid_vkb_keypad_pane_ParamLimits

0xc2bd,	// (0x000170b7) grid_vkb_keypad_pane

0xc2e3,	// (0x000170dd) fep_vkb_bottom_pane_g1_ParamLimits

0xc2e3,	// (0x000170dd) fep_vkb_bottom_pane_g1

0xc30c,	// (0x00017106) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc30c,	// (0x00017106) grid_vkb_keypad_bottom_left_pane

0xc321,	// (0x0001711b) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc321,	// (0x0001711b) grid_vkb_keypad_bottom_right_pane

0xc336,	// (0x00017130) fep_vkb_top_text_pane_g1

0xc351,	// (0x0001714b) fep_vkb_top_text_pane_t1

0xc366,	// (0x00017160) cell_vkb_side_pane_ParamLimits

0xc366,	// (0x00017160) cell_vkb_side_pane

0xbf70,	// (0x00016d6a) cell_vkb_side_pane_g1

0xc3a5,	// (0x0001719f) cell_vkb_keypad_pane_ParamLimits

0xc3a5,	// (0x0001719f) cell_vkb_keypad_pane

0xc41a,	// (0x00017214) cell_vkb_keypad_pane_g1

0x0008,

0xfb52,	// (0x0001a94c) bg_popup_fep_shadow_pane_g

0x605a,	// (0x00010e54) cell_hwr_side_pane_g1

0x605a,	// (0x00010e54) cell_hwr_side_pane_g2

0xc424,	// (0x0001721e) cell_vkb_keypad_pane_t1

0xc432,	// (0x0001722c) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc432,	// (0x0001722c) cell_vkb_keypad_bottom_left_pane

0xc44f,	// (0x00017249) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc44f,	// (0x00017249) cell_vkb_keypad_bottom_right_pane

0xbf70,	// (0x00016d6a) cell_vkb_keypad_bottom_left_pane_g1

0xbf70,	// (0x00016d6a) cell_vkb_keypad_bottom_right_pane_g1

0xc488,	// (0x00017282) cell_vkb_keypad_number_pane_ParamLimits

0xc488,	// (0x00017282) cell_vkb_keypad_number_pane

0xc4a7,	// (0x000172a1) cell_vkb_keypad_number_pane_g1

0xc4b1,	// (0x000172ab) cell_vkb_keypad_number_pane_g2

0xc4ba,	// (0x000172b4) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb44,	// (0x0001a93e) cell_vkb_keypad_number_pane_g

0xc424,	// (0x0001721e) cell_vkb_keypad_number_pane_t1

0xc4de,	// (0x000172d8) fep_vkb_candidate_pane_g1

0x0001,

0xfb65,	// (0x0001a95f) cell_hwr_side_pane_g

0xc4f7,	// (0x000172f1) cell_hwr_side_pane_t1

0x6064,	// (0x00010e5e) cell_hwr_side_pane_t1_copy1

0x6072,	// (0x00010e6c) cell_hwr_candidate_pane_g1

0x60a1,	// (0x00010e9b) cell_hwr_candidate_pane_t1

0xbf70,	// (0x00016d6a) cell_vkb_candidate_pane_g2

0xc53b,	// (0x00017335) cell_vkb_candidate_pane_t1

0x5e0d,	// (0x00010c07) bg_popup_fep_shadow_pane_ParamLimits

0x5e0d,	// (0x00010c07) bg_popup_fep_shadow_pane

0x5ec2,	// (0x00010cbc) bg_fep_hwr_top_pane_g4

0xbff0,	// (0x00016dea) bg_hwr_side_pane_g1_ParamLimits

0xbff0,	// (0x00016dea) bg_hwr_side_pane_g1

0x5f33,	// (0x00010d2d) cell_hwr_side_pane_ParamLimits

0x5f33,	// (0x00010d2d) cell_hwr_side_pane

0x5f6e,	// (0x00010d68) fep_hwr_write_pane_g1_ParamLimits

0x5f6e,	// (0x00010d68) fep_hwr_write_pane_g1

0x5f7b,	// (0x00010d75) fep_hwr_write_pane_g2_ParamLimits

0x5f7b,	// (0x00010d75) fep_hwr_write_pane_g2

0x5f88,	// (0x00010d82) fep_hwr_write_pane_g3_ParamLimits

0x5f88,	// (0x00010d82) fep_hwr_write_pane_g3

0x5f96,	// (0x00010d90) fep_hwr_write_pane_g4_ParamLimits

0x5f96,	// (0x00010d90) fep_hwr_write_pane_g4

0x0005,

0xfb11,	// (0x0001a90b) fep_hwr_write_pane_g_ParamLimits

0xfb11,	// (0x0001a90b) fep_hwr_write_pane_g

0x5ec2,	// (0x00010cbc) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x5ec2,	// (0x00010cbc) bg_fep_hwr_candidate_pane_g2

0x5fab,	// (0x00010da5) cell_hwr_candidate_pane_ParamLimits

0x5fab,	// (0x00010da5) cell_hwr_candidate_pane

0x5fed,	// (0x00010de7) fep_hwr_candidate_pane_g1_ParamLimits

0xc050,	// (0x00016e4a) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc050,	// (0x00016e4a) bg_popup_fep_shadow_pane_cp2

0xc1ee,	// (0x00016fe8) fep_vkb_top_pane_g4_ParamLimits

0xc1ee,	// (0x00016fe8) fep_vkb_top_pane_g4

0xc234,	// (0x0001702e) fep_vkb_side_pane_g2_ParamLimits

0xc234,	// (0x0001702e) fep_vkb_side_pane_g2

0x7b04,	// (0x000128fe) list_setting_pane_t4_ParamLimits

0x7b04,	// (0x000128fe) list_setting_pane_t4

0x7b7e,	// (0x00012978) list_setting_number_pane_t5_ParamLimits

0x7b7e,	// (0x00012978) list_setting_number_pane_t5

0x8526,	// (0x00013320) list_double_heading_pane_cp2_ParamLimits

0x8526,	// (0x00013320) list_double_heading_pane_cp2

0x792b,	// (0x00012725) list_double_heading_pane_g1_cp2_ParamLimits

0x792b,	// (0x00012725) list_double_heading_pane_g1_cp2

0x7d08,	// (0x00012b02) list_double_heading_pane_g2_cp2_ParamLimits

0x7d08,	// (0x00012b02) list_double_heading_pane_g2_cp2

0xc549,	// (0x00017343) list_double_heading_pane_t1_cp2_ParamLimits

0xc549,	// (0x00017343) list_double_heading_pane_t1_cp2

0xc55f,	// (0x00017359) list_double_heading_pane_t2_cp2_ParamLimits

0xc55f,	// (0x00017359) list_double_heading_pane_t2_cp2

0x6dd2,	// (0x00011bcc) aid_value_unit2

0x4bb2,	// (0x0000f9ac) popup_preview_fixed_window

0x7181,	// (0x00011f7b) bg_popup_preview_window_pane_cp02

0xc571,	// (0x0001736b) list_preview_fixed_pane

0xc5b7,	// (0x000173b1) list_empty_pane_fp_ParamLimits

0xc5b7,	// (0x000173b1) list_empty_pane_fp

0xc5b7,	// (0x000173b1) list_single_cale_day_pane_fp_ParamLimits

0xc5b7,	// (0x000173b1) list_single_cale_day_pane_fp

0xc5b7,	// (0x000173b1) list_single_graphic_heading_pane_fp_ParamLimits

0xc5b7,	// (0x000173b1) list_single_graphic_heading_pane_fp

0xc5b7,	// (0x000173b1) list_single_graphic_pane_fp_ParamLimits

0xc5b7,	// (0x000173b1) list_single_graphic_pane_fp

0xc5b7,	// (0x000173b1) list_single_heading_pane_fp_ParamLimits

0xc5b7,	// (0x000173b1) list_single_heading_pane_fp

0xc5b7,	// (0x000173b1) list_single_pane_fp_ParamLimits

0xc5b7,	// (0x000173b1) list_single_pane_fp

0xc5cc,	// (0x000173c6) list_single_pane_fp_g1_ParamLimits

0xc5cc,	// (0x000173c6) list_single_pane_fp_g1

0x792b,	// (0x00012725) list_single_pane_fp_g2_ParamLimits

0x792b,	// (0x00012725) list_single_pane_fp_g2

0x7d08,	// (0x00012b02) list_single_pane_fp_g3_ParamLimits

0x7d08,	// (0x00012b02) list_single_pane_fp_g3

0xc5d8,	// (0x000173d2) list_single_pane_fp_g4_ParamLimits

0xc5d8,	// (0x000173d2) list_single_pane_fp_g4

0x0003,

0xfb78,	// (0x0001a972) list_single_pane_fp_g_ParamLimits

0xfb78,	// (0x0001a972) list_single_pane_fp_g

0xc5e4,	// (0x000173de) list_single_pane_fp_t1_ParamLimits

0xc5e4,	// (0x000173de) list_single_pane_fp_t1

0xc5fb,	// (0x000173f5) list_single_graphic_pane_fp_g1_ParamLimits

0xc5fb,	// (0x000173f5) list_single_graphic_pane_fp_g1

0xc5cc,	// (0x000173c6) list_single_graphic_pane_fp_g2_ParamLimits

0xc5cc,	// (0x000173c6) list_single_graphic_pane_fp_g2

0x792b,	// (0x00012725) list_single_graphic_pane_fp_g3_ParamLimits

0x792b,	// (0x00012725) list_single_graphic_pane_fp_g3

0x7d08,	// (0x00012b02) list_single_graphic_pane_fp_g4_ParamLimits

0x7d08,	// (0x00012b02) list_single_graphic_pane_fp_g4

0xc5d8,	// (0x000173d2) list_single_graphic_pane_fp_g5_ParamLimits

0xc5d8,	// (0x000173d2) list_single_graphic_pane_fp_g5

0x0004,

0xfb81,	// (0x0001a97b) list_single_graphic_pane_fp_g_ParamLimits

0xfb81,	// (0x0001a97b) list_single_graphic_pane_fp_g

0xc607,	// (0x00017401) list_single_graphic_pane_fp_t1_ParamLimits

0xc607,	// (0x00017401) list_single_graphic_pane_fp_t1

0xc5fb,	// (0x000173f5) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc5fb,	// (0x000173f5) list_single_graphic_heading_pane_fp_g1

0xc5cc,	// (0x000173c6) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc5cc,	// (0x000173c6) list_single_graphic_heading_pane_fp_g2

0x792b,	// (0x00012725) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x792b,	// (0x00012725) list_single_graphic_heading_pane_fp_g3

0x7d08,	// (0x00012b02) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x7d08,	// (0x00012b02) list_single_graphic_heading_pane_fp_g4

0xc5d8,	// (0x000173d2) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc5d8,	// (0x000173d2) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb81,	// (0x0001a97b) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb81,	// (0x0001a97b) list_single_graphic_heading_pane_fp_g

0xc61d,	// (0x00017417) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc61d,	// (0x00017417) list_single_graphic_heading_pane_fp_t1

0xc633,	// (0x0001742d) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc633,	// (0x0001742d) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8c,	// (0x0001a986) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8c,	// (0x0001a986) list_single_graphic_heading_pane_fp_t

0xc645,	// (0x0001743f) list_single_cale_day_pane_fp_g1_ParamLimits

0xc645,	// (0x0001743f) list_single_cale_day_pane_fp_g1

0xc67d,	// (0x00017477) list_single_cale_day_pane_fp_g2_ParamLimits

0xc67d,	// (0x00017477) list_single_cale_day_pane_fp_g2

0xc689,	// (0x00017483) list_single_cale_day_pane_fp_g3_ParamLimits

0xc689,	// (0x00017483) list_single_cale_day_pane_fp_g3

0xc6b1,	// (0x000174ab) list_single_cale_day_pane_fp_g4_ParamLimits

0xc6b1,	// (0x000174ab) list_single_cale_day_pane_fp_g4

0xc6d5,	// (0x000174cf) list_single_cale_day_pane_fp_g5_ParamLimits

0xc6d5,	// (0x000174cf) list_single_cale_day_pane_fp_g5

0x0004,

0xfb91,	// (0x0001a98b) list_single_cale_day_pane_fp_g_ParamLimits

0xfb91,	// (0x0001a98b) list_single_cale_day_pane_fp_g

0xc6f9,	// (0x000174f3) list_single_cale_day_pane_fp_t1_ParamLimits

0xc6f9,	// (0x000174f3) list_single_cale_day_pane_fp_t1

0xc71f,	// (0x00017519) list_single_cale_day_pane_fp_t2_ParamLimits

0xc71f,	// (0x00017519) list_single_cale_day_pane_fp_t2

0xc738,	// (0x00017532) list_single_cale_day_pane_fp_t3_ParamLimits

0xc738,	// (0x00017532) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9c,	// (0x0001a996) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9c,	// (0x0001a996) list_single_cale_day_pane_fp_t

0xc5cc,	// (0x000173c6) list_empty_pane_fp_g1_ParamLimits

0xc5cc,	// (0x000173c6) list_empty_pane_fp_g1

0xc751,	// (0x0001754b) list_empty_pane_fp_t1

0xc75f,	// (0x00017559) list_empty_pane_fp_t2

0x0001,

0xfba3,	// (0x0001a99d) list_empty_pane_fp_t

0xc5cc,	// (0x000173c6) list_single_heading_pane_fp_g1_ParamLimits

0xc5cc,	// (0x000173c6) list_single_heading_pane_fp_g1

0x792b,	// (0x00012725) list_single_heading_pane_fp_g2_ParamLimits

0x792b,	// (0x00012725) list_single_heading_pane_fp_g2

0x7d08,	// (0x00012b02) list_single_heading_pane_fp_g3_ParamLimits

0x7d08,	// (0x00012b02) list_single_heading_pane_fp_g3

0x0002,

0xfba8,	// (0x0001a9a2) list_single_heading_pane_fp_g_ParamLimits

0xfba8,	// (0x0001a9a2) list_single_heading_pane_fp_g

0xc76d,	// (0x00017567) list_single_heading_pane_fp_t1_ParamLimits

0xc76d,	// (0x00017567) list_single_heading_pane_fp_t1

0xc77f,	// (0x00017579) list_single_heading_pane_fp_t2_ParamLimits

0xc77f,	// (0x00017579) list_single_heading_pane_fp_t2

0x0001,

0xfbaf,	// (0x0001a9a9) list_single_heading_pane_fp_t_ParamLimits

0xfbaf,	// (0x0001a9a9) list_single_heading_pane_fp_t

0x805e,	// (0x00012e58) aid_size_cell_fast

0x70f1,	// (0x00011eeb) soft_indicator_pane_cp1_t1

0x809b,	// (0x00012e95) cell_app_pane_cp2_ParamLimits

0x809b,	// (0x00012e95) cell_app_pane_cp2

0x5e2f,	// (0x00010c29) fep_hwr_candidate_drop_down_list_pane

0x6007,	// (0x00010e01) fep_hwr_candidate_pane_g3_ParamLimits

0x6007,	// (0x00010e01) fep_hwr_candidate_pane_g3

0x3ec2,	// (0x0000ecbc) fep_hwr_candidate_pane_g4_ParamLimits

0x3ec2,	// (0x0000ecbc) fep_hwr_candidate_pane_g4

0x0002,

0xfb1e,	// (0x0001a918) fep_hwr_candidate_pane_g_ParamLimits

0xfb1e,	// (0x0001a918) fep_hwr_candidate_pane_g

0xc0d5,	// (0x00016ecf) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc0d5,	// (0x00016ecf) fep_vkb_candidate_drop_down_list_pane

0xc4e6,	// (0x000172e0) fep_vkb_candidate_pane_g3

0xc4ee,	// (0x000172e8) fep_vkb_candidate_pane_g4

0x0002,

0xfb4b,	// (0x0001a945) fep_vkb_candidate_pane_g

0x6072,	// (0x00010e6c) cell_hwr_candidate_pane_g1_ParamLimits

0x6080,	// (0x00010e7a) cell_hwr_candidate_pane_g3_ParamLimits

0x6080,	// (0x00010e7a) cell_hwr_candidate_pane_g3

0xe4c1,	// (0x000192bb) cell_hwr_candidate_pane_g4_ParamLimits

0xe4c1,	// (0x000192bb) cell_hwr_candidate_pane_g4

0x0002,

0xfb6a,	// (0x0001a964) cell_hwr_candidate_pane_g_ParamLimits

0xfb6a,	// (0x0001a964) cell_hwr_candidate_pane_g

0xc505,	// (0x000172ff) cell_vkb_candidate_pane_g3_ParamLimits

0xc505,	// (0x000172ff) cell_vkb_candidate_pane_g3

0xc520,	// (0x0001731a) cell_vkb_candidate_pane_g4_ParamLimits

0xc520,	// (0x0001731a) cell_vkb_candidate_pane_g4

0xc795,	// (0x0001758f) cell_app_pane_cp2_g1_ParamLimits

0xc795,	// (0x0001758f) cell_app_pane_cp2_g1

0xc7b3,	// (0x000175ad) cell_app_pane_cp2_g2_ParamLimits

0xc7b3,	// (0x000175ad) cell_app_pane_cp2_g2

0x0001,

0xfbb4,	// (0x0001a9ae) cell_app_pane_cp2_g_ParamLimits

0xfbb4,	// (0x0001a9ae) cell_app_pane_cp2_g

0xc7bf,	// (0x000175b9) cell_app_pane_cp2_t1_ParamLimits

0xc7bf,	// (0x000175b9) cell_app_pane_cp2_t1

0x7ce2,	// (0x00012adc) grid_highlight_pane_cp1_ParamLimits

0x7ce2,	// (0x00012adc) grid_highlight_pane_cp1

0x60bf,	// (0x00010eb9) cell_hwr_candidate_pane_cp1_ParamLimits

0x60bf,	// (0x00010eb9) cell_hwr_candidate_pane_cp1

0x6072,	// (0x00010e6c) fep_hwr_candidate_drop_down_list_pane_g1

0x60de,	// (0x00010ed8) fep_hwr_candidate_drop_down_list_pane_g2

0x60eb,	// (0x00010ee5) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb9,	// (0x0001a9b3) fep_hwr_candidate_drop_down_list_pane_g

0x60f8,	// (0x00010ef2) fep_hwr_candidate_drop_down_list_scroll_pane

0x6101,	// (0x00010efb) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6101,	// (0x00010efb) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x610e,	// (0x00010f08) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x610e,	// (0x00010f08) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x611b,	// (0x00010f15) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x611b,	// (0x00010f15) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6128,	// (0x00010f22) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6128,	// (0x00010f22) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6143,	// (0x00010f3d) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6143,	// (0x00010f3d) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x615e,	// (0x00010f58) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x615e,	// (0x00010f58) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6179,	// (0x00010f73) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6179,	// (0x00010f73) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6194,	// (0x00010f8e) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6194,	// (0x00010f8e) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc0,	// (0x0001a9ba) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc0,	// (0x0001a9ba) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc7d1,	// (0x000175cb) cell_vkb_candidate_pane_cp1_ParamLimits

0xc7d1,	// (0x000175cb) cell_vkb_candidate_pane_cp1

0xc1ee,	// (0x00016fe8) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc1ee,	// (0x00016fe8) fep_vkb_candidate_drop_down_list_pane_g1

0xc7f1,	// (0x000175eb) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc7f1,	// (0x000175eb) fep_vkb_candidate_drop_down_list_pane_g2

0xc7fe,	// (0x000175f8) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc7fe,	// (0x000175f8) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd1,	// (0x0001a9cb) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd1,	// (0x0001a9cb) fep_vkb_candidate_drop_down_list_pane_g

0xc80b,	// (0x00017605) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc80b,	// (0x00017605) fep_vkb_candidate_drop_down_list_scroll_pane

0xc818,	// (0x00017612) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc818,	// (0x00017612) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc825,	// (0x0001761f) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc825,	// (0x0001761f) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc831,	// (0x0001762b) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc831,	// (0x0001762b) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc83d,	// (0x00017637) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc83d,	// (0x00017637) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc85e,	// (0x00017658) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc85e,	// (0x00017658) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc87f,	// (0x00017679) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc87f,	// (0x00017679) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc8a0,	// (0x0001769a) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc8a0,	// (0x0001769a) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc8c1,	// (0x000176bb) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc8c1,	// (0x000176bb) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd8,	// (0x0001a9d2) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd8,	// (0x0001a9d2) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x6e08,	// (0x00011c02) title_pane_g1_ParamLimits

0x6e15,	// (0x00011c0f) title_pane_g2_ParamLimits

0xf54e,	// (0x0001a348) title_pane_g_ParamLimits

0x84cf,	// (0x000132c9) aid_call2_pane

0x84d7,	// (0x000132d1) aid_call_pane

0x84df,	// (0x000132d9) popup_clock_analogue_window_g1

0x84df,	// (0x000132d9) popup_clock_analogue_window_g2

0x4f23,	// (0x0000fd1d) popup_clock_analogue_window_g3

0x4f2c,	// (0x0000fd26) popup_clock_analogue_window_g4

0x6df4,	// (0x00011bee) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x0001a4ed) popup_clock_analogue_window_g

0x4f34,	// (0x0000fd2e) popup_clock_analogue_window_t1

0x4f42,	// (0x0000fd3c) clock_digital_number_pane_ParamLimits

0x4f42,	// (0x0000fd3c) clock_digital_number_pane

0x4f4e,	// (0x0000fd48) clock_digital_number_pane_cp02_ParamLimits

0x4f4e,	// (0x0000fd48) clock_digital_number_pane_cp02

0x4f5a,	// (0x0000fd54) clock_digital_number_pane_cp03_ParamLimits

0x4f5a,	// (0x0000fd54) clock_digital_number_pane_cp03

0x4f66,	// (0x0000fd60) clock_digital_number_pane_cp04_ParamLimits

0x4f66,	// (0x0000fd60) clock_digital_number_pane_cp04

0x4f72,	// (0x0000fd6c) clock_digital_separator_pane_ParamLimits

0x4f72,	// (0x0000fd6c) clock_digital_separator_pane

0x4f7e,	// (0x0000fd78) popup_clock_digital_window_t1_ParamLimits

0x4f7e,	// (0x0000fd78) popup_clock_digital_window_t1

0x6df4,	// (0x00011bee) clock_digital_number_pane_g1

0x6df4,	// (0x00011bee) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x0001a4f8) clock_digital_number_pane_g

0x6df4,	// (0x00011bee) clock_digital_separator_pane_g1

0x6df4,	// (0x00011bee) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x0001a4f8) clock_digital_separator_pane_g

0x8ef1,	// (0x00013ceb) aid_fill_nsta_ParamLimits

0x9037,	// (0x00013e31) indicator_nsta_pane_ParamLimits

0x91b0,	// (0x00013faa) popup_clock_analogue_window

0x91b0,	// (0x00013faa) popup_clock_digital_window

0x6ede,	// (0x00011cd8) grid_indicator_nsta_pane_ParamLimits

0xb91e,	// (0x00016718) clock_nsta_pane_t2

0x0001,

0xfa9e,	// (0x0001a898) clock_nsta_pane_t

0x4ee7,	// (0x0000fce1) aid_size_max_handle

0x4ef1,	// (0x0000fceb) aid_size_min_handle

0x8b81,	// (0x0001397b) editor_scroll_pane

0xc8dc,	// (0x000176d6) ex_editor_pane

0x7fcc,	// (0x00012dc6) scroll_pane_cp13

0x7706,	// (0x00012500) scroll_pane_cp14

0x850e,	// (0x00013308) scroll_pane_cp36

0x853a,	// (0x00013334) list_single_graphic_hl_pane_cp2_ParamLimits

0x853a,	// (0x00013334) list_single_graphic_hl_pane_cp2

0xab99,	// (0x00015993) list_single_graphic_hl_pane_ParamLimits

0xab99,	// (0x00015993) list_single_graphic_hl_pane

0xc8e4,	// (0x000176de) aid_size_min_hl_cp1

0xc8ed,	// (0x000176e7) list_highlight_pane_cp34_ParamLimits

0xc8ed,	// (0x000176e7) list_highlight_pane_cp34

0xc8fe,	// (0x000176f8) list_single_graphic_hl_pane_g1_ParamLimits

0xc8fe,	// (0x000176f8) list_single_graphic_hl_pane_g1

0xc90b,	// (0x00017705) list_single_graphic_hl_pane_g2_ParamLimits

0xc90b,	// (0x00017705) list_single_graphic_hl_pane_g2

0xc90b,	// (0x00017705) list_single_graphic_hl_pane_g3_ParamLimits

0xc90b,	// (0x00017705) list_single_graphic_hl_pane_g3

0xb0f9,	// (0x00015ef3) list_single_graphic_hl_pane_g4_ParamLimits

0xb0f9,	// (0x00015ef3) list_single_graphic_hl_pane_g4

0xc917,	// (0x00017711) list_single_graphic_hl_pane_g5_ParamLimits

0xc917,	// (0x00017711) list_single_graphic_hl_pane_g5

0x0004,

0xfbe9,	// (0x0001a9e3) list_single_graphic_hl_pane_g_ParamLimits

0xfbe9,	// (0x0001a9e3) list_single_graphic_hl_pane_g

0xc92b,	// (0x00017725) list_single_graphic_hl_pane_t1_ParamLimits

0xc92b,	// (0x00017725) list_single_graphic_hl_pane_t1

0xc941,	// (0x0001773b) aid_size_min_hl_cp2

0xc94a,	// (0x00017744) list_highlight_pane_cp34_cp2_ParamLimits

0xc94a,	// (0x00017744) list_highlight_pane_cp34_cp2

0xc8fe,	// (0x000176f8) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc8fe,	// (0x000176f8) list_single_graphic_hl_pane_g1_cp2

0xc957,	// (0x00017751) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc957,	// (0x00017751) list_single_graphic_hl_pane_g2_cp2

0xc963,	// (0x0001775d) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc963,	// (0x0001775d) list_single_graphic_hl_pane_g3_cp2

0xb0f9,	// (0x00015ef3) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xb0f9,	// (0x00015ef3) list_single_graphic_hl_pane_g4_cp2

0xc917,	// (0x00017711) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc917,	// (0x00017711) list_single_graphic_hl_pane_g5_cp2

0x5232,	// (0x0001002c) control_pane_g4_ParamLimits

0x5232,	// (0x0001002c) control_pane_g4

0x8ec7,	// (0x00013cc1) bg_popup_sub_pane_cp10_ParamLimits

0xbf7a,	// (0x00016d74) list_choice_list_pane_ParamLimits

0xbf89,	// (0x00016d83) scroll_pane_cp23

0x7181,	// (0x00011f7b) bg_popup_preview_window_pane_cp02_ParamLimits

0xc571,	// (0x0001736b) list_preview_fixed_pane_ParamLimits

0xc587,	// (0x00017381) list_preview_fixed_pane_cp_ParamLimits

0xc587,	// (0x00017381) list_preview_fixed_pane_cp

0xc593,	// (0x0001738d) popup_preview_fixed_window_g1_ParamLimits

0xc593,	// (0x0001738d) popup_preview_fixed_window_g1

0xc59f,	// (0x00017399) popup_preview_fixed_window_g2_ParamLimits

0xc59f,	// (0x00017399) popup_preview_fixed_window_g2

0x0002,

0xfb71,	// (0x0001a96b) popup_preview_fixed_window_g_ParamLimits

0xfb71,	// (0x0001a96b) popup_preview_fixed_window_g

0x4e5b,	// (0x0000fc55) aid_navi_side_left_pane_ParamLimits

0x4e70,	// (0x0000fc6a) aid_navi_side_right_pane_ParamLimits

0x4e88,	// (0x0000fc82) navi_icon_pane_stacon_ParamLimits

0x4e9c,	// (0x0000fc96) navi_navi_pane_stacon_ParamLimits

0x4e88,	// (0x0000fc82) navi_text_pane_stacon_ParamLimits

0x4a73,	// (0x0000f86d) main_text_info_pane

0xc987,	// (0x00017781) listscroll_text_info_pane

0xc98f,	// (0x00017789) list_text_info_pane_ParamLimits

0xc98f,	// (0x00017789) list_text_info_pane

0xc99e,	// (0x00017798) scroll_pane_cp24_ParamLimits

0xc99e,	// (0x00017798) scroll_pane_cp24

0xc9bc,	// (0x000177b6) list_text_info_pane_t1_ParamLimits

0xc9bc,	// (0x000177b6) list_text_info_pane_t1

0x53a6,	// (0x000101a0) popup_fast_swap2_window_ParamLimits

0x53a6,	// (0x000101a0) popup_fast_swap2_window

0xc9ed,	// (0x000177e7) aid_size_cell_fast2

0x6dea,	// (0x00011be4) bg_popup_window_pane_cp17

0x995d,	// (0x00014757) heading_pane_cp2

0x73d0,	// (0x000121ca) listscroll_fast2_pane

0xc9f7,	// (0x000177f1) grid_fast2_pane

0xca01,	// (0x000177fb) listscroll_fast2_pane_g1

0xca09,	// (0x00017803) listscroll_fast2_pane_g2

0x0001,

0xfbf4,	// (0x0001a9ee) listscroll_fast2_pane_g

0x7fcc,	// (0x00012dc6) scroll_pane_cp26

0xca13,	// (0x0001780d) cell_fast2_pane_ParamLimits

0xca13,	// (0x0001780d) cell_fast2_pane

0xca28,	// (0x00017822) cell_fast2_pane_g1

0xca31,	// (0x0001782b) cell_fast2_pane_g2

0xca3a,	// (0x00017834) cell_fast2_pane_g3

0x0002,

0xfbf9,	// (0x0001a9f3) cell_fast2_pane_g

0x74c3,	// (0x000122bd) grid_highlight_pane_cp9

0x536c,	// (0x00010166) main_eswt_pane_ParamLimits

0x536c,	// (0x00010166) main_eswt_pane

0xc9b3,	// (0x000177ad) list_single_text_info_pane

0xca42,	// (0x0001783c) eswt_ctrl_button_pane

0xca42,	// (0x0001783c) eswt_ctrl_canvas_pane

0xca4a,	// (0x00017844) eswt_ctrl_combo_pane

0xca42,	// (0x0001783c) eswt_ctrl_default_pane

0xca42,	// (0x0001783c) eswt_ctrl_label_pane

0xca52,	// (0x0001784c) eswt_ctrl_wait_pane

0xca5a,	// (0x00017854) eswt_shell_pane

0x6dea,	// (0x00011be4) listscroll_eswt_app_pane

0xca7a,	// (0x00017874) popup_eswt_tasktip_window_ParamLimits

0xca7a,	// (0x00017874) popup_eswt_tasktip_window

0x9535,	// (0x0001432f) bg_popup_window_pane_cp18

0xca8b,	// (0x00017885) eswt_control_pane_g1_ParamLimits

0xca8b,	// (0x00017885) eswt_control_pane_g1

0xca98,	// (0x00017892) eswt_control_pane_g2_ParamLimits

0xca98,	// (0x00017892) eswt_control_pane_g2

0xcaa5,	// (0x0001789f) eswt_control_pane_g3_ParamLimits

0xcaa5,	// (0x0001789f) eswt_control_pane_g3

0xcab2,	// (0x000178ac) eswt_control_pane_g4_ParamLimits

0xcab2,	// (0x000178ac) eswt_control_pane_g4

0x0003,

0xfc00,	// (0x0001a9fa) eswt_control_pane_g_ParamLimits

0xfc00,	// (0x0001a9fa) eswt_control_pane_g

0x7ce2,	// (0x00012adc) bg_button_pane_ParamLimits

0x7ce2,	// (0x00012adc) bg_button_pane

0x74d8,	// (0x000122d2) common_borders_pane_copy2_ParamLimits

0x74d8,	// (0x000122d2) common_borders_pane_copy2

0xcabf,	// (0x000178b9) control_button_pane_g1_ParamLimits

0xcabf,	// (0x000178b9) control_button_pane_g1

0xcacb,	// (0x000178c5) control_button_pane_g2_ParamLimits

0xcacb,	// (0x000178c5) control_button_pane_g2

0xcad7,	// (0x000178d1) control_button_pane_g3_ParamLimits

0xcad7,	// (0x000178d1) control_button_pane_g3

0x0002,

0xfc09,	// (0x0001aa03) control_button_pane_g_ParamLimits

0xfc09,	// (0x0001aa03) control_button_pane_g

0xcaeb,	// (0x000178e5) control_button_pane_t1

0xcaf9,	// (0x000178f3) control_button_pane_t2

0x0001,

0xfc10,	// (0x0001aa0a) control_button_pane_t

0x9407,	// (0x00014201) bg_button_pane_g1

0x9417,	// (0x00014211) bg_button_pane_g2

0x940f,	// (0x00014209) bg_button_pane_g3

0x9427,	// (0x00014221) bg_button_pane_g4

0x941f,	// (0x00014219) bg_button_pane_g5

0x942f,	// (0x00014229) bg_button_pane_g6

0x9437,	// (0x00014231) bg_button_pane_g7

0x9447,	// (0x00014241) bg_button_pane_g8

0x943f,	// (0x00014239) bg_button_pane_g9

0x0008,

0xf861,	// (0x0001a65b) bg_button_pane_g

0xbf35,	// (0x00016d2f) common_borders_pane_ParamLimits

0xbf35,	// (0x00016d2f) common_borders_pane

0xca8b,	// (0x00017885) eswt_control_pane_g1_copy1_ParamLimits

0xca8b,	// (0x00017885) eswt_control_pane_g1_copy1

0xca98,	// (0x00017892) eswt_control_pane_g2_copy1_ParamLimits

0xca98,	// (0x00017892) eswt_control_pane_g2_copy1

0xcaa5,	// (0x0001789f) eswt_control_pane_g3_copy1_ParamLimits

0xcaa5,	// (0x0001789f) eswt_control_pane_g3_copy1

0xcab2,	// (0x000178ac) eswt_control_pane_g4_copy1_ParamLimits

0xcab2,	// (0x000178ac) eswt_control_pane_g4_copy1

0xbf70,	// (0x00016d6a) bg_eswt_ctrl_canvas_pane_g1

0xbf35,	// (0x00016d2f) common_borders_pane_cp2_ParamLimits

0xbf35,	// (0x00016d2f) common_borders_pane_cp2

0xbf35,	// (0x00016d2f) common_borders_pane_cp3_ParamLimits

0xbf35,	// (0x00016d2f) common_borders_pane_cp3

0xcb07,	// (0x00017901) separator_horizontal_pane

0xcb0f,	// (0x00017909) separator_vertical_pane

0xca8b,	// (0x00017885) eswt_control_pane_g1_copy2_ParamLimits

0xca8b,	// (0x00017885) eswt_control_pane_g1_copy2

0xca98,	// (0x00017892) eswt_control_pane_g2_copy2_ParamLimits

0xca98,	// (0x00017892) eswt_control_pane_g2_copy2

0xcaa5,	// (0x0001789f) eswt_control_pane_g3_copy2_ParamLimits

0xcaa5,	// (0x0001789f) eswt_control_pane_g3_copy2

0xcab2,	// (0x000178ac) eswt_control_pane_g4_copy2_ParamLimits

0xcab2,	// (0x000178ac) eswt_control_pane_g4_copy2

0x6dea,	// (0x00011be4) common_borders_pane_cp4

0xcb18,	// (0x00017912) separator_horizontal_pane_g1

0xcb21,	// (0x0001791b) separator_horizontal_pane_g2

0xcb2a,	// (0x00017924) separator_horizontal_pane_g3

0x0002,

0xfc15,	// (0x0001aa0f) separator_horizontal_pane_g

0xca8b,	// (0x00017885) eswt_control_pane_g1_copy3_ParamLimits

0xca8b,	// (0x00017885) eswt_control_pane_g1_copy3

0xca98,	// (0x00017892) eswt_control_pane_g2_copy3_ParamLimits

0xca98,	// (0x00017892) eswt_control_pane_g2_copy3

0xcaa5,	// (0x0001789f) eswt_control_pane_g3_copy3_ParamLimits

0xcaa5,	// (0x0001789f) eswt_control_pane_g3_copy3

0xcab2,	// (0x000178ac) eswt_control_pane_g4_copy3_ParamLimits

0xcab2,	// (0x000178ac) eswt_control_pane_g4_copy3

0x6dea,	// (0x00011be4) common_borders_pane_cp5

0xcb33,	// (0x0001792d) separator_vertical_pane_g1

0xcb3c,	// (0x00017936) separator_vertical_pane_g2

0xcb45,	// (0x0001793f) separator_vertical_pane_g3

0x0002,

0xfc1c,	// (0x0001aa16) separator_vertical_pane_g

0xca8b,	// (0x00017885) eswt_control_pane_g1_copy4_ParamLimits

0xca8b,	// (0x00017885) eswt_control_pane_g1_copy4

0xca98,	// (0x00017892) eswt_control_pane_g2_copy4_ParamLimits

0xca98,	// (0x00017892) eswt_control_pane_g2_copy4

0xcaa5,	// (0x0001789f) eswt_control_pane_g3_copy4_ParamLimits

0xcaa5,	// (0x0001789f) eswt_control_pane_g3_copy4

0xcab2,	// (0x000178ac) eswt_control_pane_g4_copy4_ParamLimits

0xcab2,	// (0x000178ac) eswt_control_pane_g4_copy4

0xcb4e,	// (0x00017948) eswt_ctrl_combo_button_pane

0xcb56,	// (0x00017950) eswt_ctrl_input_pane

0xcb5e,	// (0x00017958) popup_choice_list_window_cp70

0xcb66,	// (0x00017960) eswt_ctrl_input_pane_t1

0x6dea,	// (0x00011be4) input_focus_pane_cp70

0xbf35,	// (0x00016d2f) bg_button_pane_cp70_ParamLimits

0xbf35,	// (0x00016d2f) bg_button_pane_cp70

0xcb74,	// (0x0001796e) eswt_ctrl_combo_button_pane_g1

0xcb7c,	// (0x00017976) wait_bar_pane_cp70

0x9535,	// (0x0001432f) bg_popup_window_pane_cp70_ParamLimits

0x9535,	// (0x0001432f) bg_popup_window_pane_cp70

0xcb84,	// (0x0001797e) popup_eswt_tasktip_window_t1

0xcb9a,	// (0x00017994) wait_bar_pane_cp71_ParamLimits

0xcb9a,	// (0x00017994) wait_bar_pane_cp71

0xcba6,	// (0x000179a0) grid_eswt_app_pane

0x82e8,	// (0x000130e2) scroll_pane_cp70

0xcbaf,	// (0x000179a9) cell_eswt_app_pane_ParamLimits

0xcbaf,	// (0x000179a9) cell_eswt_app_pane

0xcbdf,	// (0x000179d9) cell_eswt_app_pane_g1_ParamLimits

0xcbdf,	// (0x000179d9) cell_eswt_app_pane_g1

0xcc0e,	// (0x00017a08) cell_eswt_app_pane_g2_ParamLimits

0xcc0e,	// (0x00017a08) cell_eswt_app_pane_g2

0x0001,

0xfc23,	// (0x0001aa1d) cell_eswt_app_pane_g_ParamLimits

0xfc23,	// (0x0001aa1d) cell_eswt_app_pane_g

0xcc37,	// (0x00017a31) cell_eswt_app_pane_t1_ParamLimits

0xcc37,	// (0x00017a31) cell_eswt_app_pane_t1

0xcc69,	// (0x00017a63) grid_highlight_pane_cp70_ParamLimits

0xcc69,	// (0x00017a63) grid_highlight_pane_cp70

0x8a56,	// (0x00013850) set_content_pane_g1

0x8e20,	// (0x00013c1a) status_small_volume_pane

0x61af,	// (0x00010fa9) status_small_volume_pane_g1

0x61b7,	// (0x00010fb1) volume_small2_pane

0x61c0,	// (0x00010fba) volume_small2_pane_g1

0x61c9,	// (0x00010fc3) volume_small2_pane_g2

0x61d2,	// (0x00010fcc) volume_small2_pane_g3

0x61db,	// (0x00010fd5) volume_small2_pane_g4

0x61e4,	// (0x00010fde) volume_small2_pane_g5

0x61ed,	// (0x00010fe7) volume_small2_pane_g6

0x61f6,	// (0x00010ff0) volume_small2_pane_g7

0x61ff,	// (0x00010ff9) volume_small2_pane_g8

0x6208,	// (0x00011002) volume_small2_pane_g9

0x6211,	// (0x0001100b) volume_small2_pane_g10

0x0009,

0xfc28,	// (0x0001aa22) volume_small2_pane_g

0xc336,	// (0x00017130) fep_vkb_top_text_pane_g1_ParamLimits

0xc351,	// (0x0001714b) fep_vkb_top_text_pane_t1_ParamLimits

0xc5ab,	// (0x000173a5) popup_preview_fixed_window_g3_ParamLimits

0xc5ab,	// (0x000173a5) popup_preview_fixed_window_g3

0x5855,	// (0x0001064f) popup_toolbar_trans_pane

0xa8f6,	// (0x000156f0) aid_height_set_list_ParamLimits

0xa907,	// (0x00015701) aid_size_parent_ParamLimits

0x8ec7,	// (0x00013cc1) list_highlight_pane_cp2_ParamLimits

0x8a56,	// (0x00013850) set_content_pane_g1_ParamLimits

0xabb5,	// (0x000159af) list_single_image_pane_ParamLimits

0xabb5,	// (0x000159af) list_single_image_pane

0xcc75,	// (0x00017a6f) aid_size_cell_image_ParamLimits

0xcc75,	// (0x00017a6f) aid_size_cell_image

0xcc82,	// (0x00017a7c) grid_single_image_pane_ParamLimits

0xcc82,	// (0x00017a7c) grid_single_image_pane

0xa0b8,	// (0x00014eb2) list_single_image_pane_g1_ParamLimits

0xa0b8,	// (0x00014eb2) list_single_image_pane_g1

0xcc8e,	// (0x00017a88) list_single_image_pane_g2_ParamLimits

0xcc8e,	// (0x00017a88) list_single_image_pane_g2

0x0001,

0xfc3d,	// (0x0001aa37) list_single_image_pane_g_ParamLimits

0xfc3d,	// (0x0001aa37) list_single_image_pane_g

0xcca2,	// (0x00017a9c) list_single_image_pane_t1_ParamLimits

0xcca2,	// (0x00017a9c) list_single_image_pane_t1

0xccb8,	// (0x00017ab2) cell_image_list_pane_ParamLimits

0xccb8,	// (0x00017ab2) cell_image_list_pane

0xcccc,	// (0x00017ac6) cell_image_list_pane_g1

0xccd5,	// (0x00017acf) cell_image_list_pane_g2

0x0001,

0xfc42,	// (0x0001aa3c) cell_image_list_pane_g

0xccde,	// (0x00017ad8) aid_size_cell_tb_trans_pane

0x7ce2,	// (0x00012adc) bg_tb_trans_pane

0xccf0,	// (0x00017aea) grid_tb_trans_pane

0x9407,	// (0x00014201) bg_tb_trans_pane_g1

0x9417,	// (0x00014211) bg_tb_trans_pane_g2

0x940f,	// (0x00014209) bg_tb_trans_pane_g3

0x9427,	// (0x00014221) bg_tb_trans_pane_g4

0x941f,	// (0x00014219) bg_tb_trans_pane_g5

0x9447,	// (0x00014241) bg_tb_trans_pane_g6

0x943f,	// (0x00014239) bg_tb_trans_pane_g7

0x942f,	// (0x00014229) bg_tb_trans_pane_g8

0x9437,	// (0x00014231) bg_tb_trans_pane_g9

0x0008,

0xfc47,	// (0x0001aa41) bg_tb_trans_pane_g

0xcd04,	// (0x00017afe) cell_toolbar_trans_pane_ParamLimits

0xcd04,	// (0x00017afe) cell_toolbar_trans_pane

0xbf70,	// (0x00016d6a) cell_toolbar_trans_pane_g1

0xbaeb,	// (0x000168e5) list_form2_midp_pane_t1

0xbaf9,	// (0x000168f3) list_form2_midp_pane_t2

0x0001,

0xfae4,	// (0x0001a8de) list_form2_midp_pane_t

0xbb07,	// (0x00016901) scroll_pane_cp51_ParamLimits

0xbd12,	// (0x00016b0c) form2_midp_wait_pane_g1

0xbd1b,	// (0x00016b15) form2_midp_wait_pane_g2

0xbd24,	// (0x00016b1e) form2_midp_wait_pane_g3

0x0002,

0xfaf9,	// (0x0001a8f3) form2_midp_wait_pane_g

0x6ede,	// (0x00011cd8) list_highlight_pane_cp21_ParamLimits

0xbd7b,	// (0x00016b75) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbd8a,	// (0x00016b84) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xab3d,	// (0x00015937) list_single_2graphic_im_pane_ParamLimits

0xab3d,	// (0x00015937) list_single_2graphic_im_pane

0xcd2a,	// (0x00017b24) list_single_2graphic_im_pane_g1_ParamLimits

0xcd2a,	// (0x00017b24) list_single_2graphic_im_pane_g1

0xcd3b,	// (0x00017b35) list_single_2graphic_im_pane_g2_ParamLimits

0xcd3b,	// (0x00017b35) list_single_2graphic_im_pane_g2

0xcd47,	// (0x00017b41) list_single_2graphic_im_pane_g3_ParamLimits

0xcd47,	// (0x00017b41) list_single_2graphic_im_pane_g3

0x0003,

0xfc5a,	// (0x0001aa54) list_single_2graphic_im_pane_g_ParamLimits

0xfc5a,	// (0x0001aa54) list_single_2graphic_im_pane_g

0xcd67,	// (0x00017b61) list_single_2graphic_im_pane_t1_ParamLimits

0xcd67,	// (0x00017b61) list_single_2graphic_im_pane_t1

0xc5b7,	// (0x000173b1) list_single_graphic_2heading_pane_fp_ParamLimits

0xc5b7,	// (0x000173b1) list_single_graphic_2heading_pane_fp

0xc5fb,	// (0x000173f5) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc5fb,	// (0x000173f5) list_single_graphic_2heading_pane_fp_g1

0xc5cc,	// (0x000173c6) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc5cc,	// (0x000173c6) list_single_graphic_2heading_pane_fp_g2

0x792b,	// (0x00012725) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x792b,	// (0x00012725) list_single_graphic_2heading_pane_fp_g3

0x7d08,	// (0x00012b02) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x7d08,	// (0x00012b02) list_single_graphic_2heading_pane_fp_g4

0xc5d8,	// (0x000173d2) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc5d8,	// (0x000173d2) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb81,	// (0x0001a97b) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb81,	// (0x0001a97b) list_single_graphic_2heading_pane_fp_g

0xcd98,	// (0x00017b92) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xcd98,	// (0x00017b92) list_single_graphic_2heading_pane_fp_t1

0xc633,	// (0x0001742d) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc633,	// (0x0001742d) list_single_graphic_2heading_pane_fp_t2

0xcdae,	// (0x00017ba8) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xcdae,	// (0x00017ba8) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc63,	// (0x0001aa5d) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc63,	// (0x0001aa5d) list_single_graphic_2heading_pane_fp_t

0xbffc,	// (0x00016df6) fep_hwr_write_pane_g5_ParamLimits

0xbffc,	// (0x00016df6) fep_hwr_write_pane_g5

0xc008,	// (0x00016e02) fep_hwr_write_pane_g6_ParamLimits

0xc008,	// (0x00016e02) fep_hwr_write_pane_g6

0xca5a,	// (0x00017854) eswt_shell_pane_ParamLimits

0x9535,	// (0x0001432f) bg_popup_window_pane_cp18_ParamLimits

0xa827,	// (0x00015621) heading_pane_cp70

0xcb84,	// (0x0001797e) popup_eswt_tasktip_window_t1_ParamLimits

0x8f46,	// (0x00013d40) aid_touch_tab_arrow_left

0x8f55,	// (0x00013d4f) aid_touch_tab_arrow_right

0x6e26,	// (0x00011c20) title_pane_g3_ParamLimits

0x6e26,	// (0x00011c20) title_pane_g3

0x7bc1,	// (0x000129bb) set_value_pane_g1

0x5855,	// (0x0001064f) popup_toolbar_trans_pane_ParamLimits

0xccde,	// (0x00017ad8) aid_size_cell_tb_trans_pane_ParamLimits

0x7ce2,	// (0x00012adc) bg_tb_trans_pane_ParamLimits

0xccf0,	// (0x00017aea) grid_tb_trans_pane_ParamLimits

0x7181,	// (0x00011f7b) cont_note_pane_ParamLimits

0x7181,	// (0x00011f7b) cont_note_pane

0x74d8,	// (0x000122d2) cont_snote2_single_text_pane_ParamLimits

0x74d8,	// (0x000122d2) cont_snote2_single_text_pane

0x74d8,	// (0x000122d2) cont_snote2_single_graphic_pane_ParamLimits

0x74d8,	// (0x000122d2) cont_snote2_single_graphic_pane

0x9b78,	// (0x00014972) cont_note_wait_pane_ParamLimits

0x9b78,	// (0x00014972) cont_note_wait_pane

0x9b78,	// (0x00014972) cont_note_image_pane_ParamLimits

0x9b78,	// (0x00014972) cont_note_image_pane

0xcdc4,	// (0x00017bbe) popup_note2_window_g1_ParamLimits

0xcdc4,	// (0x00017bbe) popup_note2_window_g1

0xcdf5,	// (0x00017bef) popup_note2_window_t1_ParamLimits

0xcdf5,	// (0x00017bef) popup_note2_window_t1

0xce3a,	// (0x00017c34) popup_note2_window_t2_ParamLimits

0xce3a,	// (0x00017c34) popup_note2_window_t2

0xce7f,	// (0x00017c79) popup_note2_window_t3_ParamLimits

0xce7f,	// (0x00017c79) popup_note2_window_t3

0xcec4,	// (0x00017cbe) popup_note2_window_t4_ParamLimits

0xcec4,	// (0x00017cbe) popup_note2_window_t4

0x7205,	// (0x00011fff) popup_note2_window_t5_ParamLimits

0x7205,	// (0x00011fff) popup_note2_window_t5

0x0004,

0xfc6f,	// (0x0001aa69) popup_note2_window_t_ParamLimits

0xfc6f,	// (0x0001aa69) popup_note2_window_t

0xcef3,	// (0x00017ced) popup_note2_image_window_g1_ParamLimits

0xcef3,	// (0x00017ced) popup_note2_image_window_g1

0xceff,	// (0x00017cf9) popup_note2_image_window_g2_ParamLimits

0xceff,	// (0x00017cf9) popup_note2_image_window_g2

0x0001,

0xfc7a,	// (0x0001aa74) popup_note2_image_window_g_ParamLimits

0xfc7a,	// (0x0001aa74) popup_note2_image_window_g

0xcf11,	// (0x00017d0b) popup_note2_image_window_t1_ParamLimits

0xcf11,	// (0x00017d0b) popup_note2_image_window_t1

0xcf29,	// (0x00017d23) popup_note2_image_window_t2_ParamLimits

0xcf29,	// (0x00017d23) popup_note2_image_window_t2

0xcf41,	// (0x00017d3b) popup_note2_image_window_t3_ParamLimits

0xcf41,	// (0x00017d3b) popup_note2_image_window_t3

0x0002,

0xfc7f,	// (0x0001aa79) popup_note2_image_window_t_ParamLimits

0xfc7f,	// (0x0001aa79) popup_note2_image_window_t

0x9b86,	// (0x00014980) popup_note2_wait_window_g1_ParamLimits

0x9b86,	// (0x00014980) popup_note2_wait_window_g1

0xcf5d,	// (0x00017d57) popup_note2_wait_window_g2_ParamLimits

0xcf5d,	// (0x00017d57) popup_note2_wait_window_g2

0x9b9e,	// (0x00014998) popup_note2_wait_window_g3_ParamLimits

0x9b9e,	// (0x00014998) popup_note2_wait_window_g3

0x0002,

0xfc86,	// (0x0001aa80) popup_note2_wait_window_g_ParamLimits

0xfc86,	// (0x0001aa80) popup_note2_wait_window_g

0xcf69,	// (0x00017d63) popup_note2_wait_window_t1_ParamLimits

0xcf69,	// (0x00017d63) popup_note2_wait_window_t1

0xcf87,	// (0x00017d81) popup_note2_wait_window_t2_ParamLimits

0xcf87,	// (0x00017d81) popup_note2_wait_window_t2

0xcfa5,	// (0x00017d9f) popup_note2_wait_window_t3_ParamLimits

0xcfa5,	// (0x00017d9f) popup_note2_wait_window_t3

0xcfb7,	// (0x00017db1) popup_note2_wait_window_t4_ParamLimits

0xcfb7,	// (0x00017db1) popup_note2_wait_window_t4

0x0003,

0xfc8d,	// (0x0001aa87) popup_note2_wait_window_t_ParamLimits

0xfc8d,	// (0x0001aa87) popup_note2_wait_window_t

0xcfc9,	// (0x00017dc3) wait_bar2_pane_ParamLimits

0xcfc9,	// (0x00017dc3) wait_bar2_pane

0xcfe1,	// (0x00017ddb) popup_snote2_single_text_window_g1_ParamLimits

0xcfe1,	// (0x00017ddb) popup_snote2_single_text_window_g1

0xd009,	// (0x00017e03) popup_snote2_single_text_window_t1_ParamLimits

0xd009,	// (0x00017e03) popup_snote2_single_text_window_t1

0xd055,	// (0x00017e4f) popup_snote2_single_text_window_t2_ParamLimits

0xd055,	// (0x00017e4f) popup_snote2_single_text_window_t2

0xd0a1,	// (0x00017e9b) popup_snote2_single_text_window_t3_ParamLimits

0xd0a1,	// (0x00017e9b) popup_snote2_single_text_window_t3

0xd0e2,	// (0x00017edc) popup_snote2_single_text_window_t4_ParamLimits

0xd0e2,	// (0x00017edc) popup_snote2_single_text_window_t4

0xd118,	// (0x00017f12) popup_snote2_single_text_window_t5_ParamLimits

0xd118,	// (0x00017f12) popup_snote2_single_text_window_t5

0x0004,

0xfc96,	// (0x0001aa90) popup_snote2_single_text_window_t_ParamLimits

0xfc96,	// (0x0001aa90) popup_snote2_single_text_window_t

0xd143,	// (0x00017f3d) popup_snote2_single_graphic_window_g1_ParamLimits

0xd143,	// (0x00017f3d) popup_snote2_single_graphic_window_g1

0xd16b,	// (0x00017f65) popup_snote2_single_graphic_window_g2_ParamLimits

0xd16b,	// (0x00017f65) popup_snote2_single_graphic_window_g2

0x0001,

0xfca1,	// (0x0001aa9b) popup_snote2_single_graphic_window_g_ParamLimits

0xfca1,	// (0x0001aa9b) popup_snote2_single_graphic_window_g

0xd193,	// (0x00017f8d) popup_snote2_single_graphic_window_t1_ParamLimits

0xd193,	// (0x00017f8d) popup_snote2_single_graphic_window_t1

0xd1df,	// (0x00017fd9) popup_snote2_single_graphic_window_t2_ParamLimits

0xd1df,	// (0x00017fd9) popup_snote2_single_graphic_window_t2

0xd0a1,	// (0x00017e9b) popup_snote2_single_graphic_window_t3_ParamLimits

0xd0a1,	// (0x00017e9b) popup_snote2_single_graphic_window_t3

0xd0e2,	// (0x00017edc) popup_snote2_single_graphic_window_t4_ParamLimits

0xd0e2,	// (0x00017edc) popup_snote2_single_graphic_window_t4

0xd118,	// (0x00017f12) popup_snote2_single_graphic_window_t5_ParamLimits

0xd118,	// (0x00017f12) popup_snote2_single_graphic_window_t5

0x0004,

0xfca6,	// (0x0001aaa0) popup_snote2_single_graphic_window_t_ParamLimits

0xfca6,	// (0x0001aaa0) popup_snote2_single_graphic_window_t

0xb9c8,	// (0x000167c2) clock_nsta_pane_cp2_t1

0xb9c8,	// (0x000167c2) clock_nsta_pane_cp2_t2

0x0001,

0xfaba,	// (0x0001a8b4) clock_nsta_pane_cp2_t

0x7cfc,	// (0x00012af6) form_field_data_wide_pane_g1_ParamLimits

0x792b,	// (0x00012725) form_field_data_wide_pane_g2_ParamLimits

0x792b,	// (0x00012725) form_field_data_wide_pane_g2

0x7d08,	// (0x00012b02) form_field_data_wide_pane_g3_ParamLimits

0x7d08,	// (0x00012b02) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x0001a470) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x0001a470) form_field_data_wide_pane_g

0xb8ba,	// (0x000166b4) grid_touch_3_pane_ParamLimits

0xb8ba,	// (0x000166b4) grid_touch_3_pane

0xd22b,	// (0x00018025) cell_touch_3_pane_ParamLimits

0xd22b,	// (0x00018025) cell_touch_3_pane

0xbf70,	// (0x00016d6a) cell_touch_3_pane_g1

0xbf70,	// (0x00016d6a) cell_touch_3_pane_g2

0x0001,

0xfb3f,	// (0x0001a939) cell_touch_3_pane_g

0x7237,	// (0x00012031) cont_query_data_pane

0x723f,	// (0x00012039) cont_query_data_pane_cp1

0xd259,	// (0x00018053) button_value_adjust_pane_cp7

0xd261,	// (0x0001805b) query_popup_pane_cp3

0x85cf,	// (0x000133c9) bg_popup_sub_pane_cp22_ParamLimits

0x4f9d,	// (0x0000fd97) navi_navi_volume_pane_cp2

0x4fb8,	// (0x0000fdb2) popup_side_volume_key_window_g2

0x4fc7,	// (0x0000fdc1) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x0001a506) popup_side_volume_key_window_g

0x4fe4,	// (0x0000fdde) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x0001a50d) popup_side_volume_key_window_t

0x8915,	// (0x0001370f) popup_side_volume_key_window_ParamLimits

0x78eb,	// (0x000126e5) list_double_graphic_pane_g4_ParamLimits

0x78eb,	// (0x000126e5) list_double_graphic_pane_g4

0xab7a,	// (0x00015974) list_single_2heading_msg_pane_ParamLimits

0xab7a,	// (0x00015974) list_single_2heading_msg_pane

0xd290,	// (0x0001808a) list_single_2heading_msg_pane_g1_ParamLimits

0xd290,	// (0x0001808a) list_single_2heading_msg_pane_g1

0x8aba,	// (0x000138b4) list_single_2heading_msg_pane_g2_ParamLimits

0x8aba,	// (0x000138b4) list_single_2heading_msg_pane_g2

0xb403,	// (0x000161fd) list_single_2heading_msg_pane_g3_ParamLimits

0xb403,	// (0x000161fd) list_single_2heading_msg_pane_g3

0xd29c,	// (0x00018096) list_single_2heading_msg_pane_g4_ParamLimits

0xd29c,	// (0x00018096) list_single_2heading_msg_pane_g4

0x0003,

0xfcb1,	// (0x0001aaab) list_single_2heading_msg_pane_g_ParamLimits

0xfcb1,	// (0x0001aaab) list_single_2heading_msg_pane_g

0xd2b4,	// (0x000180ae) list_single_2heading_msg_pane_t1_ParamLimits

0xd2b4,	// (0x000180ae) list_single_2heading_msg_pane_t1

0xd2dc,	// (0x000180d6) list_single_2heading_msg_pane_t2_ParamLimits

0xd2dc,	// (0x000180d6) list_single_2heading_msg_pane_t2

0xd30b,	// (0x00018105) list_single_2heading_msg_pane_t3_ParamLimits

0xd30b,	// (0x00018105) list_single_2heading_msg_pane_t3

0xd344,	// (0x0001813e) list_single_2heading_msg_pane_t4_ParamLimits

0xd344,	// (0x0001813e) list_single_2heading_msg_pane_t4

0x0003,

0xfcba,	// (0x0001aab4) list_single_2heading_msg_pane_t_ParamLimits

0xfcba,	// (0x0001aab4) list_single_2heading_msg_pane_t

0x6e32,	// (0x00011c2c) title_pane_g4_ParamLimits

0x6e32,	// (0x00011c2c) title_pane_g4

0x4dac,	// (0x0000fba6) title_pane_stacon_g3_ParamLimits

0x4dac,	// (0x0000fba6) title_pane_stacon_g3

0xcd5b,	// (0x00017b55) list_single_2graphic_im_pane_g4_ParamLimits

0xcd5b,	// (0x00017b55) list_single_2graphic_im_pane_g4

0xa5e3,	// (0x000153dd) popup_side_volume_key_window_cp

0xaef0,	// (0x00015cea) main_idle_act2_pane_t1

0x59b3,	// (0x000107ad) toolbar_button_pane_g10

0x76d0,	// (0x000124ca) popup_toolbar_window_cp1

0xb9b9,	// (0x000167b3) clock_nsta_pane_cp_t1

0xb9b9,	// (0x000167b3) clock_nsta_pane_cp_t2

0x0001,

0xfab5,	// (0x0001a8af) clock_nsta_pane_cp_t

0x4f9d,	// (0x0000fd97) navi_navi_volume_pane_cp2_ParamLimits

0x4fac,	// (0x0000fda6) popup_side_volume_key_window_g1_ParamLimits

0x4fb8,	// (0x0000fdb2) popup_side_volume_key_window_g2_ParamLimits

0x4fc7,	// (0x0000fdc1) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x0001a506) popup_side_volume_key_window_g_ParamLimits

0x5e1b,	// (0x00010c15) fep_hwr_aid_pane

0x5ec2,	// (0x00010cbc) bg_fep_hwr_top_pane_g4_ParamLimits

0xbfcc,	// (0x00016dc6) fep_hwr_top_pane_g1_ParamLimits

0xbfde,	// (0x00016dd8) fep_hwr_top_pane_g2_ParamLimits

0x5ee2,	// (0x00010cdc) fep_hwr_top_pane_g3_ParamLimits

0xfb0a,	// (0x0001a904) fep_hwr_top_pane_g_ParamLimits

0x5ef7,	// (0x00010cf1) fep_hwr_top_text_pane_ParamLimits

0xa3a6,	// (0x000151a0) aid_touch_tab_arrow_arrow_2

0xa3af,	// (0x000151a9) aid_touch_tab_arrow_left_2

0x5e2f,	// (0x00010c29) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x5e66,	// (0x00010c60) fep_hwr_prediction_pane

0xc13e,	// (0x00016f38) fep_vkb_prediction_pane

0xc242,	// (0x0001703c) fep_vkb_side_pane_g3_ParamLimits

0xc242,	// (0x0001703c) fep_vkb_side_pane_g3

0x6072,	// (0x00010e6c) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x60de,	// (0x00010ed8) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x60eb,	// (0x00010ee5) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb9,	// (0x0001a9b3) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x621a,	// (0x00011014) fep_hwr_prediction_pane_g1

0x6224,	// (0x0001101e) fep_hwr_prediction_pane_g2

0x622c,	// (0x00011026) fep_hwr_prediction_pane_g3

0x6234,	// (0x0001102e) fep_hwr_prediction_pane_g4

0x0003,

0xfcc3,	// (0x0001aabd) fep_hwr_prediction_pane_g

0xd369,	// (0x00018163) fep_vkb_prediction_pane_g1

0xd373,	// (0x0001816d) fep_vkb_prediction_pane_g2

0xd37b,	// (0x00018175) fep_vkb_prediction_pane_g3

0xd383,	// (0x0001817d) fep_vkb_prediction_pane_g4

0x0003,

0xfccc,	// (0x0001aac6) fep_vkb_prediction_pane_g

0x5c9b,	// (0x00010a95) slider_set_pane_g3

0x5caf,	// (0x00010aa9) slider_set_pane_g4

0x5cc7,	// (0x00010ac1) slider_set_pane_g5

0x5c9b,	// (0x00010a95) slider_set_pane_g6

0x5cdd,	// (0x00010ad7) slider_set_pane_g7

0xaa6c,	// (0x00015866) slider_form_pane_g3

0xaa75,	// (0x0001586f) slider_form_pane_g4

0xaa7d,	// (0x00015877) slider_form_pane_g5

0xaa6c,	// (0x00015866) slider_form_pane_g6

0xaa85,	// (0x0001587f) slider_form_pane_g7

0xb1ed,	// (0x00015fe7) slider_set_pane_vc_g3

0xb1f6,	// (0x00015ff0) slider_set_pane_vc_g4

0xb1ff,	// (0x00015ff9) slider_set_pane_vc_g5

0xb1ed,	// (0x00015fe7) slider_set_pane_vc_g6

0xb208,	// (0x00016002) slider_set_pane_vc_g7

0xb68d,	// (0x00016487) slider_form_pane_vc_g1

0xb696,	// (0x00016490) slider_form_pane_vc_g2

0xb69f,	// (0x00016499) slider_form_pane_vc_g3

0xb68d,	// (0x00016487) slider_form_pane_vc_g4

0xb6a8,	// (0x000164a2) slider_form_pane_vc_g5

0x0004,

0xfa87,	// (0x0001a881) slider_form_pane_vc_g

0x4a73,	// (0x0000f86d) main_idle_act3_pane

0xd38b,	// (0x00018185) ai3_links_pane

0xd394,	// (0x0001818e) popup_ai3_data_window_ParamLimits

0xd394,	// (0x0001818e) popup_ai3_data_window

0x6dea,	// (0x00011be4) grid_ai3_links_pane

0xd3ae,	// (0x000181a8) cell_ai3_links_pane_ParamLimits

0xd3ae,	// (0x000181a8) cell_ai3_links_pane

0xd3c6,	// (0x000181c0) bg_popup_sub_pane_cp11

0xd3d3,	// (0x000181cd) cell_ai3_links_pane_g1

0x6dea,	// (0x00011be4) bg_popup_sub_pane_cp12

0xd3f8,	// (0x000181f2) heading_ai3_data_pane

0xd400,	// (0x000181fa) list_ai3_gene_pane

0xd40c,	// (0x00018206) popup_ai3_data_window_g1

0xd414,	// (0x0001820e) heading_ai3_data_pane_g1

0xd41c,	// (0x00018216) heading_ai3_data_pane_t1

0xd42a,	// (0x00018224) list_double_ai3_gene_pane_ParamLimits

0xd42a,	// (0x00018224) list_double_ai3_gene_pane

0xd437,	// (0x00018231) list_single_ai3_gene_pane_ParamLimits

0xd437,	// (0x00018231) list_single_ai3_gene_pane

0xbf35,	// (0x00016d2f) list_highlight_pane_cp7_ParamLimits

0xbf35,	// (0x00016d2f) list_highlight_pane_cp7

0xd444,	// (0x0001823e) list_single_a13_gene_pane_t1_ParamLimits

0xd444,	// (0x0001823e) list_single_a13_gene_pane_t1

0xd45b,	// (0x00018255) list_single_ai3_gene_pane_g1

0xd464,	// (0x0001825e) list_single_ai3_gene_pane_g2

0x0001,

0xfcd5,	// (0x0001aacf) list_single_ai3_gene_pane_g

0xd46c,	// (0x00018266) list_double_ai3_gene_pane_g1_ParamLimits

0xd46c,	// (0x00018266) list_double_ai3_gene_pane_g1

0xd478,	// (0x00018272) list_double_ai3_gene_pane_t1_ParamLimits

0xd478,	// (0x00018272) list_double_ai3_gene_pane_t1

0xd494,	// (0x0001828e) list_double_ai3_gene_pane_t2_ParamLimits

0xd494,	// (0x0001828e) list_double_ai3_gene_pane_t2

0xd4aa,	// (0x000182a4) list_double_ai3_gene_pane_t3_ParamLimits

0xd4aa,	// (0x000182a4) list_double_ai3_gene_pane_t3

0x0002,

0xfcda,	// (0x0001aad4) list_double_ai3_gene_pane_t_ParamLimits

0xfcda,	// (0x0001aad4) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xd272,	// (0x0001806c) aid_size_min_col_2

0xd27c,	// (0x00018076) aid_size_min_msg_ParamLimits

0xd27c,	// (0x00018076) aid_size_min_msg

0xc342,	// (0x0001713c) fep_vkb_top_text_pane_g2_ParamLimits

0xc342,	// (0x0001713c) fep_vkb_top_text_pane_g2

0x0001,

0xfb3a,	// (0x0001a934) fep_vkb_top_text_pane_g_ParamLimits

0xfb3a,	// (0x0001a934) fep_vkb_top_text_pane_g

0x4a73,	// (0x0000f86d) main_hc_apps_shell_pane

0xd4c7,	// (0x000182c1) grid_hc_apps_pane_ParamLimits

0xd4c7,	// (0x000182c1) grid_hc_apps_pane

0xd4d6,	// (0x000182d0) list_hc_apps_pane

0xd4de,	// (0x000182d8) scroll_pane_cp37_ParamLimits

0xd4de,	// (0x000182d8) scroll_pane_cp37

0xd4ea,	// (0x000182e4) cell_hc_apps_pane_ParamLimits

0xd4ea,	// (0x000182e4) cell_hc_apps_pane

0xd598,	// (0x00018392) cell_hc_apps_pane_g1_ParamLimits

0xd598,	// (0x00018392) cell_hc_apps_pane_g1

0xd5c9,	// (0x000183c3) cell_hc_apps_pane_g2_ParamLimits

0xd5c9,	// (0x000183c3) cell_hc_apps_pane_g2

0xd5e5,	// (0x000183df) cell_hc_apps_pane_g3_ParamLimits

0xd5e5,	// (0x000183df) cell_hc_apps_pane_g3

0x0002,

0xfce1,	// (0x0001aadb) cell_hc_apps_pane_g_ParamLimits

0xfce1,	// (0x0001aadb) cell_hc_apps_pane_g

0xd607,	// (0x00018401) cell_hc_apps_pane_t1_ParamLimits

0xd607,	// (0x00018401) cell_hc_apps_pane_t1

0x7181,	// (0x00011f7b) grid_highlight_pane_cp10_ParamLimits

0x7181,	// (0x00011f7b) grid_highlight_pane_cp10

0xd647,	// (0x00018441) list_single_hc_apps_pane_ParamLimits

0xd647,	// (0x00018441) list_single_hc_apps_pane

0xd6a3,	// (0x0001849d) list_single_hc_apps_pane_g1

0xd6bc,	// (0x000184b6) list_single_hc_apps_pane_g2

0x0001,

0xfce8,	// (0x0001aae2) list_single_hc_apps_pane_g

0xd6d5,	// (0x000184cf) list_single_hc_apps_pane_g2_copy1

0xd6f1,	// (0x000184eb) list_single_hc_apps_pane_t1

0x6ede,	// (0x00011cd8) bg_set_opt_pane_cp_ParamLimits

0x4cd4,	// (0x0000face) setting_slider_pane_t1_ParamLimits

0x4ced,	// (0x0000fae7) setting_slider_pane_t2_ParamLimits

0x4d07,	// (0x0000fb01) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0001a358) setting_slider_pane_t_ParamLimits

0x4d1f,	// (0x0000fb19) slider_set_pane_ParamLimits

0x5246,	// (0x00010040) control_pane_g5_ParamLimits

0x5246,	// (0x00010040) control_pane_g5

0xa8bb,	// (0x000156b5) slider_set_pane_g1_ParamLimits

0x5c8f,	// (0x00010a89) slider_set_pane_g2_ParamLimits

0x5c9b,	// (0x00010a95) slider_set_pane_g3_ParamLimits

0x5caf,	// (0x00010aa9) slider_set_pane_g4_ParamLimits

0x5cc7,	// (0x00010ac1) slider_set_pane_g5_ParamLimits

0x5c9b,	// (0x00010a95) slider_set_pane_g6_ParamLimits

0x5cdd,	// (0x00010ad7) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x0001a759) slider_set_pane_g_ParamLimits

0x8a01,	// (0x000137fb) navi_icon_text_pane_ParamLimits

0x8f07,	// (0x00013d01) aid_fill_nsta_2_ParamLimits

0x8f46,	// (0x00013d40) aid_touch_tab_arrow_left_ParamLimits

0x8f55,	// (0x00013d4f) aid_touch_tab_arrow_right_ParamLimits

0x8fc2,	// (0x00013dbc) clock_nsta_pane_ParamLimits

0xa388,	// (0x00015182) navi_icon_pane_g1_ParamLimits

0xa394,	// (0x0001518e) navi_text_pane_t1_ParamLimits

0xbac5,	// (0x000168bf) navi_icon_text_pane_g1_ParamLimits

0xbad1,	// (0x000168cb) navi_icon_text_pane_t1_ParamLimits

0xd6a3,	// (0x0001849d) list_single_hc_apps_pane_g1_ParamLimits

0xd6bc,	// (0x000184b6) list_single_hc_apps_pane_g2_ParamLimits

0xfce8,	// (0x0001aae2) list_single_hc_apps_pane_g_ParamLimits

0xd6d5,	// (0x000184cf) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd6f1,	// (0x000184eb) list_single_hc_apps_pane_t1_ParamLimits

0x4bde,	// (0x0000f9d8) popup_toolbar2_fixed_window_ParamLimits

0x4bde,	// (0x0000f9d8) popup_toolbar2_fixed_window

0x584b,	// (0x00010645) popup_toolbar2_float_window

0x6dea,	// (0x00011be4) bg_popup_sub_pane_cp27

0xd71f,	// (0x00018519) grid_toolbar2_float_pane

0x6dea,	// (0x00011be4) bg_popup_sub_pane_cp26

0xd71f,	// (0x00018519) grid_toolbar2_fixed_pane

0xd727,	// (0x00018521) cell_toolbar2_fixed_pane_ParamLimits

0xd727,	// (0x00018521) cell_toolbar2_fixed_pane

0xd737,	// (0x00018531) cell_toolbar2_fixed_pane_g1

0xd740,	// (0x0001853a) toolbar2_fixed_button_pane

0x9407,	// (0x00014201) toolbar2_fixed_button_pane_g1

0x9417,	// (0x00014211) toolbar2_fixed_button_pane_g2

0x940f,	// (0x00014209) toolbar2_fixed_button_pane_g3

0x9427,	// (0x00014221) toolbar2_fixed_button_pane_g4

0x941f,	// (0x00014219) toolbar2_fixed_button_pane_g5

0x942f,	// (0x00014229) toolbar2_fixed_button_pane_g6

0x9437,	// (0x00014231) toolbar2_fixed_button_pane_g7

0x9447,	// (0x00014241) toolbar2_fixed_button_pane_g8

0x943f,	// (0x00014239) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x0001a65b) toolbar2_fixed_button_pane_g

0xd748,	// (0x00018542) cell_toolbar2_float_pane_ParamLimits

0xd748,	// (0x00018542) cell_toolbar2_float_pane

0xd759,	// (0x00018553) cell_toolbar2_float_pane_g1

0xd740,	// (0x0001853a) toolbar2_fixed_button_pane_cp

0xc09e,	// (0x00016e98) fep_vkb_accented_list_pane_ParamLimits

0xc09e,	// (0x00016e98) fep_vkb_accented_list_pane

0x6052,	// (0x00010e4c) bg_popup_fep_shadow_pane_g9

0x8b81,	// (0x0001397b) bg_popup_fep_shadow_pane_cp3

0x7fb3,	// (0x00012dad) list_accented_list_pane

0xd762,	// (0x0001855c) list_single_accented_list_pane_ParamLimits

0xd762,	// (0x0001855c) list_single_accented_list_pane

0x8b81,	// (0x0001397b) list_highlight_pane_cp10

0xd773,	// (0x0001856d) list_single_accented_list_pane_t1

0x579b,	// (0x00010595) popup_slider_window_ParamLimits

0x579b,	// (0x00010595) popup_slider_window

0xd269,	// (0x00018063) aid_indentation_list_msg

0xd82d,	// (0x00018627) bg_popup_window_pane_cp19

0xd897,	// (0x00018691) popup_slider_window_g1

0xd8b3,	// (0x000186ad) popup_slider_window_g2

0xd8cf,	// (0x000186c9) popup_slider_window_g3

0x0005,

0xfced,	// (0x0001aae7) popup_slider_window_g

0xd92b,	// (0x00018725) popup_slider_window_t1

0xd99f,	// (0x00018799) small_volume_slider_vertical_pane

0xbf70,	// (0x00016d6a) small_volume_slider_vertical_pane_g1

0xbf70,	// (0x00016d6a) small_volume_slider_vertical_pane_g2

0xd9bb,	// (0x000187b5) small_volume_slider_vertical_pane_g3

0x0002,

0xfcff,	// (0x0001aaf9) small_volume_slider_vertical_pane_g

0x4996,	// (0x0000f790) area_side_right_pane_ParamLimits

0x4996,	// (0x0000f790) area_side_right_pane

0x623c,	// (0x00011036) aid_size_side_button_ParamLimits

0x623c,	// (0x00011036) aid_size_side_button

0x6250,	// (0x0001104a) grid_sctrl_middle_pane_ParamLimits

0x6250,	// (0x0001104a) grid_sctrl_middle_pane

0x626f,	// (0x00011069) sctrl_sk_bottom_pane

0x6280,	// (0x0001107a) sctrl_sk_top_pane

0x6292,	// (0x0001108c) aid_touch_sctrl_top

0x629f,	// (0x00011099) bg_sctrl_sk_pane_ParamLimits

0x629f,	// (0x00011099) bg_sctrl_sk_pane

0x62ad,	// (0x000110a7) sctrl_sk_top_pane_g1

0x62ba,	// (0x000110b4) sctrl_sk_top_pane_t1

0x6292,	// (0x0001108c) aid_touch_sctrl_bottom

0x629f,	// (0x00011099) bg_sctrl_sk_pane_cp_ParamLimits

0x629f,	// (0x00011099) bg_sctrl_sk_pane_cp

0x62d5,	// (0x000110cf) sctrl_sk_bottom_pane_g1

0x62ba,	// (0x000110b4) sctrl_sk_bottom_pane_t1

0x62de,	// (0x000110d8) cell_sctrl_middle_pane_ParamLimits

0x62de,	// (0x000110d8) cell_sctrl_middle_pane

0x62f9,	// (0x000110f3) aid_touch_sctrl_middle_ParamLimits

0x62f9,	// (0x000110f3) aid_touch_sctrl_middle

0x630b,	// (0x00011105) bg_sctrl_middle_pane_ParamLimits

0x630b,	// (0x00011105) bg_sctrl_middle_pane

0x6072,	// (0x00010e6c) cell_sctrl_middle_pane_g1_ParamLimits

0x6072,	// (0x00010e6c) cell_sctrl_middle_pane_g1

0x6319,	// (0x00011113) cell_sctrl_middle_pane_g2_ParamLimits

0x6319,	// (0x00011113) cell_sctrl_middle_pane_g2

0x0001,

0xfd0b,	// (0x0001ab05) cell_sctrl_middle_pane_g_ParamLimits

0xfd0b,	// (0x0001ab05) cell_sctrl_middle_pane_g

0x9407,	// (0x00014201) bg_sctrl_middle_pane_g1

0x940f,	// (0x00014209) bg_sctrl_middle_pane_g2

0x9417,	// (0x00014211) bg_sctrl_middle_pane_g3

0x941f,	// (0x00014219) bg_sctrl_middle_pane_g4

0x9427,	// (0x00014221) bg_sctrl_middle_pane_g5

0x942f,	// (0x00014229) bg_sctrl_middle_pane_g6

0x9437,	// (0x00014231) bg_sctrl_middle_pane_g7

0x943f,	// (0x00014239) bg_sctrl_middle_pane_g8

0x0007,

0xfd10,	// (0x0001ab0a) bg_sctrl_middle_pane_g

0x9447,	// (0x00014241) bg_sctrl_middle_pane_g8_copy1

0x9407,	// (0x00014201) bg_sctrl_sk_pane_g1

0x9417,	// (0x00014211) bg_sctrl_sk_pane_g2

0x940f,	// (0x00014209) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x0001a65b) bg_sctrl_sk_pane_g

0x7696,	// (0x00012490) aid_size_touch_scroll_bar

0x9427,	// (0x00014221) bg_sctrl_sk_pane_g4

0x941f,	// (0x00014219) bg_sctrl_sk_pane_g5

0x942f,	// (0x00014229) bg_sctrl_sk_pane_g6

0x9437,	// (0x00014231) bg_sctrl_sk_pane_g7

0x9447,	// (0x00014241) bg_sctrl_sk_pane_g8

0x943f,	// (0x00014239) bg_sctrl_sk_pane_g9

0x5404,	// (0x000101fe) popup_fep_china_hwr2_fs_candidate_window

0x540e,	// (0x00010208) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x540e,	// (0x00010208) popup_fep_china_hwr2_fs_control_window

0x6072,	// (0x00010e6c) sctrl_sk_top_pane_g2

0x0001,

0xfd06,	// (0x0001ab00) sctrl_sk_top_pane_g

0xd9c4,	// (0x000187be) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd9c4,	// (0x000187be) aid_fep_china_hwr2_fs_cell

0xd9d6,	// (0x000187d0) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd9d6,	// (0x000187d0) bg_popup_fep_shadow_pane_cp4

0xd9ed,	// (0x000187e7) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd9ed,	// (0x000187e7) bg_popup_fep_shadow_pane_cp5

0xd9ff,	// (0x000187f9) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd9ff,	// (0x000187f9) popup_fep_china_hwr2_fs_control_bar_grid

0xda0f,	// (0x00018809) popup_fep_china_hwr2_fs_control_funtion_grid

0xda17,	// (0x00018811) aid_fep_china_hwr2_fs_candi_cell

0x6dea,	// (0x00011be4) bg_popup_fep_shadow_pane_cp6

0xda21,	// (0x0001881b) popup_fep_china_hwr2_fs_candidate_grid

0xda2b,	// (0x00018825) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda2b,	// (0x00018825) cell_fep_china_hwr2_fs_funtion_grid

0xbf70,	// (0x00016d6a) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda43,	// (0x0001883d) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda43,	// (0x0001883d) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda51,	// (0x0001884b) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda51,	// (0x0001884b) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd21,	// (0x0001ab1b) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd21,	// (0x0001ab1b) cell_fep_china_hwr2_fs_funtion_grid_g

0xda67,	// (0x00018861) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda67,	// (0x00018861) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda7c,	// (0x00018876) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda7c,	// (0x00018876) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd26,	// (0x0001ab20) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd26,	// (0x0001ab20) cell_fep_china_hwr2_fs_funtion_grid_t

0xda98,	// (0x00018892) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xdaa0,	// (0x0001889a) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xdaa8,	// (0x000188a2) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2b,	// (0x0001ab25) popup_fep_china_hwr2_fs_control_bar_grid_g

0xdab0,	// (0x000188aa) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xdab0,	// (0x000188aa) cell_fep_china_hwr2_fs_candidate_grid

0xdac9,	// (0x000188c3) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdad1,	// (0x000188cb) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbf70,	// (0x00016d6a) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbf70,	// (0x00016d6a) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3f,	// (0x0001a939) cell_fep_china_hwr2_fs_candidate_grid_g

0xdad9,	// (0x000188d3) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8fcf,	// (0x00013dc9) clock_nsta_pane_cp_24_ParamLimits

0x8fcf,	// (0x00013dc9) clock_nsta_pane_cp_24

0x904d,	// (0x00013e47) indicator_nsta_pane_cp_24_ParamLimits

0x904d,	// (0x00013e47) indicator_nsta_pane_cp_24

0xa204,	// (0x00014ffe) heading_pane_g1

0x0001,

0xf8c6,	// (0x0001a6c0) heading_pane_g

0xad39,	// (0x00015b33) grid_sct_catagory_button_pane

0xad69,	// (0x00015b63) scroll_pane_cp5_ParamLimits

0xbb13,	// (0x0001690d) button_value_adjust_pane_cp5_ParamLimits

0xbb13,	// (0x0001690d) button_value_adjust_pane_cp5

0xbc0f,	// (0x00016a09) form2_midp_time_pane_ParamLimits

0xdae7,	// (0x000188e1) cell_sct_catagory_button_pane_ParamLimits

0xdae7,	// (0x000188e1) cell_sct_catagory_button_pane

0xbf35,	// (0x00016d2f) bg_button_pane_cp01_ParamLimits

0xbf35,	// (0x00016d2f) bg_button_pane_cp01

0xbf70,	// (0x00016d6a) cell_sct_catagory_button_pane_g1

0x57da,	// (0x000105d4) popup_tb_extension_window

0xdaf9,	// (0x000188f3) aid_size_cell_ext_ParamLimits

0xdaf9,	// (0x000188f3) aid_size_cell_ext

0x7181,	// (0x00011f7b) bg_tb_trans_pane_cp1_ParamLimits

0x7181,	// (0x00011f7b) bg_tb_trans_pane_cp1

0xdb19,	// (0x00018913) grid_tb_ext_pane_ParamLimits

0xdb19,	// (0x00018913) grid_tb_ext_pane

0xdb47,	// (0x00018941) cell_tb_ext_pane_ParamLimits

0xdb47,	// (0x00018941) cell_tb_ext_pane

0xdb5e,	// (0x00018958) cell_tb_ext_pane_g1_ParamLimits

0xdb5e,	// (0x00018958) cell_tb_ext_pane_g1

0xdb7b,	// (0x00018975) cell_tb_ext_pane_t1

0x7181,	// (0x00011f7b) list_highlight_pane_cp11_ParamLimits

0x7181,	// (0x00011f7b) list_highlight_pane_cp11

0x4bfd,	// (0x0000f9f7) popup_uni_indicator_window_ParamLimits

0x4bfd,	// (0x0000f9f7) popup_uni_indicator_window

0x7ce2,	// (0x00012adc) bg_popup_sub_pane_cp14

0xdb96,	// (0x00018990) list_uniindi_pane

0xdba2,	// (0x0001899c) uniindi_top_pane

0x7181,	// (0x00011f7b) bg_uniindi_top_pane

0xdbc1,	// (0x000189bb) uniindi_top_pane_g1

0xdbd7,	// (0x000189d1) uniindi_top_pane_g2

0x0003,

0xfd32,	// (0x0001ab2c) uniindi_top_pane_g

0xdc01,	// (0x000189fb) uniindi_top_pane_t1

0xdc2b,	// (0x00018a25) list_single_uniindi_pane_ParamLimits

0xdc2b,	// (0x00018a25) list_single_uniindi_pane

0xbf70,	// (0x00016d6a) bg_uniindi_top_pane_g1

0xdc3e,	// (0x00018a38) list_single_uniindi_pane_g1

0xdc51,	// (0x00018a4b) list_single_uniindi_pane_t1

0x4a73,	// (0x0000f86d) control_bg_pane

0xdc76,	// (0x00018a70) bg_sctrl_sk_pane_cp1

0xdc7f,	// (0x00018a79) bg_sctrl_sk_pane_cp2

0xdc88,	// (0x00018a82) control_bg_pane_g1

0xdc91,	// (0x00018a8b) control_bg_pane_g2

0x0001,

0xfd3b,	// (0x0001ab35) control_bg_pane_g

0xb95d,	// (0x00016757) cell_indicator_nsta_pane_g1_ParamLimits

0xb96b,	// (0x00016765) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa3,	// (0x0001a89d) cell_indicator_nsta_pane_g_ParamLimits

0xbc97,	// (0x00016a91) form2_midp_time_pane_t1_ParamLimits

0x536c,	// (0x00010166) main_idle_act4_pane_ParamLimits

0x536c,	// (0x00010166) main_idle_act4_pane

0x57da,	// (0x000105d4) popup_tb_extension_window_ParamLimits

0xdb37,	// (0x00018931) tb_ext_find_pane_ParamLimits

0xdb37,	// (0x00018931) tb_ext_find_pane

0xdc9a,	// (0x00018a94) ai_gene_pane_1_cp1

0x8cbc,	// (0x00013ab6) ai_gene_pane_2_cp1

0xdca2,	// (0x00018a9c) list_single_idle_plugin_calendar_pane

0xdcab,	// (0x00018aa5) list_single_idle_plugin_notification_pane

0xdcb4,	// (0x00018aae) list_single_idle_plugin_player_pane

0xdcbd,	// (0x00018ab7) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdcbd,	// (0x00018ab7) list_single_idle_plugin_shortcut_pane

0xdcdf,	// (0x00018ad9) main_idle_act4_pane_t1

0xdcf1,	// (0x00018aeb) main_idle_act4_pane_t2

0x0001,

0xfd40,	// (0x0001ab3a) main_idle_act4_pane_t

0xdd03,	// (0x00018afd) middle_sk_idle_act4_pane_ParamLimits

0xdd03,	// (0x00018afd) middle_sk_idle_act4_pane

0xdd19,	// (0x00018b13) popup_clock_digital_analogue_window_cp2

0xdd33,	// (0x00018b2d) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd33,	// (0x00018b2d) shortcut_wheel_idle_act4_pane

0xbf70,	// (0x00016d6a) shortcut_wheel_idle_act4_pane_g1

0xbf70,	// (0x00016d6a) shortcut_wheel_idle_act4_pane_g2

0xbf70,	// (0x00016d6a) shortcut_wheel_idle_act4_pane_g3

0xbf70,	// (0x00016d6a) shortcut_wheel_idle_act4_pane_g4

0xbf70,	// (0x00016d6a) shortcut_wheel_idle_act4_pane_g5

0xdd47,	// (0x00018b41) shortcut_wheel_idle_act4_pane_g6

0xdd4f,	// (0x00018b49) shortcut_wheel_idle_act4_pane_g7

0xdd57,	// (0x00018b51) shortcut_wheel_idle_act4_pane_g8

0xdd5f,	// (0x00018b59) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd45,	// (0x0001ab3f) shortcut_wheel_idle_act4_pane_g

0xc1ee,	// (0x00016fe8) middle_sk_idle_act4_pane_g1_ParamLimits

0xc1ee,	// (0x00016fe8) middle_sk_idle_act4_pane_g1

0xddc3,	// (0x00018bbd) middle_sk_idle_act4_pane_g2_ParamLimits

0xddc3,	// (0x00018bbd) middle_sk_idle_act4_pane_g2

0x0001,

0xfd68,	// (0x0001ab62) middle_sk_idle_act4_pane_g_ParamLimits

0xfd68,	// (0x0001ab62) middle_sk_idle_act4_pane_g

0xddcf,	// (0x00018bc9) middle_sk_idle_act4_pane_t1_ParamLimits

0xddcf,	// (0x00018bc9) middle_sk_idle_act4_pane_t1

0xddec,	// (0x00018be6) grid_ai_shortcut_pane_ParamLimits

0xddec,	// (0x00018be6) grid_ai_shortcut_pane

0xde05,	// (0x00018bff) list_highlight_pane_cp16_ParamLimits

0xde05,	// (0x00018bff) list_highlight_pane_cp16

0xde12,	// (0x00018c0c) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde12,	// (0x00018c0c) list_single_idle_plugin_shortcut_pane_g1

0xde1e,	// (0x00018c18) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde1e,	// (0x00018c18) list_single_idle_plugin_shortcut_pane_g2

0xde36,	// (0x00018c30) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde36,	// (0x00018c30) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6d,	// (0x0001ab67) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6d,	// (0x0001ab67) list_single_idle_plugin_shortcut_pane_g

0xde49,	// (0x00018c43) cell_ai_shortcut_pane_ParamLimits

0xde49,	// (0x00018c43) cell_ai_shortcut_pane

0xde6d,	// (0x00018c67) cell_ai_shortcut_pane_g1_ParamLimits

0xde6d,	// (0x00018c67) cell_ai_shortcut_pane_g1

0xdc9a,	// (0x00018a94) ai_gene_pane_1_cp2

0xde8f,	// (0x00018c89) ai_gene_pane_2_cp2

0xde97,	// (0x00018c91) list_highlight_pane_cp15

0xdea0,	// (0x00018c9a) list_single_idle_plugin_calendar_pane_g1

0xde97,	// (0x00018c91) list_highlight_pane_cp17

0xdea8,	// (0x00018ca2) list_single_idle_plugin_calendar_pane_g1_copy1

0xdeb0,	// (0x00018caa) list_single_idle_plugin_player_pane_g1

0xaf92,	// (0x00015d8c) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd74,	// (0x0001ab6e) list_single_idle_plugin_player_pane_g

0xdeb8,	// (0x00018cb2) list_single_idle_plugin_player_pane_t1

0xdec6,	// (0x00018cc0) list_single_idle_plugin_player_pane_t2

0xded4,	// (0x00018cce) list_single_idle_plugin_player_pane_t3

0xdee2,	// (0x00018cdc) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd79,	// (0x0001ab73) list_single_idle_plugin_player_pane_t

0xdef0,	// (0x00018cea) wait_bar_pane_cp15

0xdef8,	// (0x00018cf2) grid_ai_notification_pane

0xaf92,	// (0x00015d8c) list_single_idle_plugin_notification_pane_g1

0xdf01,	// (0x00018cfb) cell_ai_notification_pane_ParamLimits

0xdf01,	// (0x00018cfb) cell_ai_notification_pane

0xdf0e,	// (0x00018d08) cell_ai_notification_pane_g1

0xdf16,	// (0x00018d10) cell_ai_notification_pane_t1

0xdf24,	// (0x00018d1e) tb_ext_find_button_pane

0xdf2c,	// (0x00018d26) tb_ext_find_pane_g1

0xdf34,	// (0x00018d2e) tb_ext_find_pane_t1

0x84df,	// (0x000132d9) tb_ext_find_button_pane_g1

0xdf42,	// (0x00018d3c) tb_ext_find_button_pane_g2

0x0001,

0xfd82,	// (0x0001ab7c) tb_ext_find_button_pane_g

0xdcdf,	// (0x00018ad9) main_idle_act4_pane_t1_ParamLimits

0xdcf1,	// (0x00018aeb) main_idle_act4_pane_t2_ParamLimits

0xfd40,	// (0x0001ab3a) main_idle_act4_pane_t_ParamLimits

0xdd19,	// (0x00018b13) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd27,	// (0x00018b21) sat_plugin_idle_act4_pane_ParamLimits

0xdd27,	// (0x00018b21) sat_plugin_idle_act4_pane

0xdf4b,	// (0x00018d45) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf4b,	// (0x00018d45) sat_plugin_idle_act4_pane_t1

0xdf5e,	// (0x00018d58) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf5e,	// (0x00018d58) sat_plugin_idle_act4_pane_t2

0xdf71,	// (0x00018d6b) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf71,	// (0x00018d6b) sat_plugin_idle_act4_pane_t3

0xdf84,	// (0x00018d7e) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf84,	// (0x00018d7e) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd87,	// (0x0001ab81) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd87,	// (0x0001ab81) sat_plugin_idle_act4_pane_t

0x4b38,	// (0x0000f932) popup_battery_window_ParamLimits

0x4b38,	// (0x0000f932) popup_battery_window

0x7181,	// (0x00011f7b) bg_popup_sub_pane_cp25_ParamLimits

0x7181,	// (0x00011f7b) bg_popup_sub_pane_cp25

0xdf97,	// (0x00018d91) popup_battery_window_g1_ParamLimits

0xdf97,	// (0x00018d91) popup_battery_window_g1

0xdfa3,	// (0x00018d9d) popup_battery_window_t1_ParamLimits

0xdfa3,	// (0x00018d9d) popup_battery_window_t1

0xdfb5,	// (0x00018daf) popup_battery_window_t2_ParamLimits

0xdfb5,	// (0x00018daf) popup_battery_window_t2

0x0001,

0xfd90,	// (0x0001ab8a) popup_battery_window_t_ParamLimits

0xfd90,	// (0x0001ab8a) popup_battery_window_t

0x8b89,	// (0x00013983) midp_canvas_pane_ParamLimits

0x8c00,	// (0x000139fa) midp_keypad_pane_ParamLimits

0x8c00,	// (0x000139fa) midp_keypad_pane

0x8ec7,	// (0x00013cc1) main_midp_pane_ParamLimits

0xb9d7,	// (0x000167d1) signal_pane_g2_cp_ParamLimits

0xdfd2,	// (0x00018dcc) aid_size_cell_midp_keypad_ParamLimits

0xdfd2,	// (0x00018dcc) aid_size_cell_midp_keypad

0xdfec,	// (0x00018de6) midp_keyp_game_grid_pane_ParamLimits

0xdfec,	// (0x00018de6) midp_keyp_game_grid_pane

0xe00c,	// (0x00018e06) midp_keyp_rocker_pane_ParamLimits

0xe00c,	// (0x00018e06) midp_keyp_rocker_pane

0xe045,	// (0x00018e3f) midp_keyp_sk_left_pane_ParamLimits

0xe045,	// (0x00018e3f) midp_keyp_sk_left_pane

0xe09f,	// (0x00018e99) midp_keyp_sk_right_pane_ParamLimits

0xe09f,	// (0x00018e99) midp_keyp_sk_right_pane

0x6dea,	// (0x00011be4) bg_button_pane_cp03

0xe0f9,	// (0x00018ef3) midp_keyp_sk_left_pane_g1

0x6dea,	// (0x00011be4) bg_button_pane_cp04

0xe0f9,	// (0x00018ef3) midp_keyp_sk_right_pane_g1

0xbf70,	// (0x00016d6a) midp_keyp_rocker_pane_g1

0xe102,	// (0x00018efc) keyp_game_cell_pane_ParamLimits

0xe102,	// (0x00018efc) keyp_game_cell_pane

0x6dea,	// (0x00011be4) bg_button_pane_cp02

0xe115,	// (0x00018f0f) keyp_game_cell_pane_g1

0x4b7c,	// (0x0000f976) popup_fep_vkb2_window_ParamLimits

0x4b7c,	// (0x0000f976) popup_fep_vkb2_window

0x6337,	// (0x00011131) aid_size_cell_vkb2_ParamLimits

0x6337,	// (0x00011131) aid_size_cell_vkb2

0x638b,	// (0x00011185) popup_fep_vkb2_window_g1_ParamLimits

0x638b,	// (0x00011185) popup_fep_vkb2_window_g1

0x63d3,	// (0x000111cd) vkb2_area_bottom_pane_ParamLimits

0x63d3,	// (0x000111cd) vkb2_area_bottom_pane

0x641f,	// (0x00011219) vkb2_area_keypad_pane_ParamLimits

0x641f,	// (0x00011219) vkb2_area_keypad_pane

0x6461,	// (0x0001125b) vkb2_area_top_pane_ParamLimits

0x6461,	// (0x0001125b) vkb2_area_top_pane

0x64db,	// (0x000112d5) vkb2_top_entry_pane_ParamLimits

0x64db,	// (0x000112d5) vkb2_top_entry_pane

0x6505,	// (0x000112ff) vkb2_top_grid_left_pane_ParamLimits

0x6505,	// (0x000112ff) vkb2_top_grid_left_pane

0x6523,	// (0x0001131d) vkb2_top_grid_right_pane_ParamLimits

0x6523,	// (0x0001131d) vkb2_top_grid_right_pane

0x6541,	// (0x0001133b) vkb2_cell_keypad_pane_ParamLimits

0x6541,	// (0x0001133b) vkb2_cell_keypad_pane

0x6612,	// (0x0001140c) vkb2_area_bottom_grid_pane_ParamLimits

0x6612,	// (0x0001140c) vkb2_area_bottom_grid_pane

0x6638,	// (0x00011432) vkb2_area_bottom_pane_g1_ParamLimits

0x6638,	// (0x00011432) vkb2_area_bottom_pane_g1

0x665c,	// (0x00011456) vkb2_area_bottom_pane_g2_ParamLimits

0x665c,	// (0x00011456) vkb2_area_bottom_pane_g2

0x668a,	// (0x00011484) vkb2_area_bottom_pane_g3_ParamLimits

0x668a,	// (0x00011484) vkb2_area_bottom_pane_g3

0x0002,

0xfd95,	// (0x0001ab8f) vkb2_area_bottom_pane_g_ParamLimits

0xfd95,	// (0x0001ab8f) vkb2_area_bottom_pane_g

0x66eb,	// (0x000114e5) vkb2_top_cell_left_pane_ParamLimits

0x66eb,	// (0x000114e5) vkb2_top_cell_left_pane

0xe126,	// (0x00018f20) vkb2_top_entry_pane_g1_ParamLimits

0xe126,	// (0x00018f20) vkb2_top_entry_pane_g1

0xe134,	// (0x00018f2e) vkb2_top_entry_pane_t1_ParamLimits

0xe134,	// (0x00018f2e) vkb2_top_entry_pane_t1

0xe166,	// (0x00018f60) vkb2_top_entry_pane_t2_ParamLimits

0xe166,	// (0x00018f60) vkb2_top_entry_pane_t2

0xe198,	// (0x00018f92) vkb2_top_entry_pane_t3_ParamLimits

0xe198,	// (0x00018f92) vkb2_top_entry_pane_t3

0x0002,

0xfd9c,	// (0x0001ab96) vkb2_top_entry_pane_t_ParamLimits

0xfd9c,	// (0x0001ab96) vkb2_top_entry_pane_t

0x6738,	// (0x00011532) vkb2_top_grid_right_pane_g1_ParamLimits

0x6738,	// (0x00011532) vkb2_top_grid_right_pane_g1

0x674e,	// (0x00011548) vkb2_top_grid_right_pane_g2_ParamLimits

0x674e,	// (0x00011548) vkb2_top_grid_right_pane_g2

0x6766,	// (0x00011560) vkb2_top_grid_right_pane_g3_ParamLimits

0x6766,	// (0x00011560) vkb2_top_grid_right_pane_g3

0x677e,	// (0x00011578) vkb2_top_grid_right_pane_g4_ParamLimits

0x677e,	// (0x00011578) vkb2_top_grid_right_pane_g4

0x0003,

0xfda3,	// (0x0001ab9d) vkb2_top_grid_right_pane_g_ParamLimits

0xfda3,	// (0x0001ab9d) vkb2_top_grid_right_pane_g

0x6794,	// (0x0001158e) vkb2_top_cell_left_pane_g1

0x67ab,	// (0x000115a5) vkb2_cell_keypad_pane_g1_ParamLimits

0x67ab,	// (0x000115a5) vkb2_cell_keypad_pane_g1

0xe1bc,	// (0x00018fb6) vkb2_cell_keypad_pane_t1_ParamLimits

0xe1bc,	// (0x00018fb6) vkb2_cell_keypad_pane_t1

0x67b9,	// (0x000115b3) vkb2_cell_bottom_grid_pane_ParamLimits

0x67b9,	// (0x000115b3) vkb2_cell_bottom_grid_pane

0x67f2,	// (0x000115ec) vkb2_cell_bottom_grid_pane_g1

0xdd67,	// (0x00018b61) aid_call2_pane_cp02

0xdd6f,	// (0x00018b69) aid_call_pane_cp02

0xdd77,	// (0x00018b71) clock_digital_number_pane_cp10

0xdd7f,	// (0x00018b79) clock_digital_number_pane_cp11

0xdd87,	// (0x00018b81) clock_digital_number_pane_cp12

0xdd8f,	// (0x00018b89) clock_digital_number_pane_cp13

0xdd97,	// (0x00018b91) clock_digital_separator_pane_cp10

0x84df,	// (0x000132d9) popup_clock_digital_analogue_window_cp2_g1

0x84df,	// (0x000132d9) popup_clock_digital_analogue_window_cp2_g2

0xdd9f,	// (0x00018b99) popup_clock_digital_analogue_window_cp2_g3

0x84df,	// (0x000132d9) popup_clock_digital_analogue_window_cp2_g4

0xdd9f,	// (0x00018b99) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd58,	// (0x0001ab52) popup_clock_digital_analogue_window_cp2_g

0xdda7,	// (0x00018ba1) popup_clock_digital_analogue_window_cp2_t1

0xddb5,	// (0x00018baf) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd63,	// (0x0001ab5d) popup_clock_digital_analogue_window_cp2_t

0xbf70,	// (0x00016d6a) clock_digital_number_pane_cp10_g1

0xbf70,	// (0x00016d6a) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3f,	// (0x0001a939) clock_digital_number_pane_cp10_g

0xbf70,	// (0x00016d6a) clock_digital_separator_pane_cp10_g1

0xbf70,	// (0x00016d6a) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3f,	// (0x0001a939) clock_digital_separator_pane_cp10_g

0xdbe3,	// (0x000189dd) uniindi_top_pane_g3

0xdbf4,	// (0x000189ee) uniindi_top_pane_g4

0x65cc,	// (0x000113c6) vkb2_row_keypad_pane_ParamLimits

0x65cc,	// (0x000113c6) vkb2_row_keypad_pane

0x680e,	// (0x00011608) vkb2_cell_t_keypad_pane_ParamLimits

0x680e,	// (0x00011608) vkb2_cell_t_keypad_pane

0x681e,	// (0x00011618) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x681e,	// (0x00011618) vkb2_cell_t_keypad_pane_cp08

0x6831,	// (0x0001162b) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6831,	// (0x0001162b) vkb2_cell_t_keypad_pane_cp09

0x6845,	// (0x0001163f) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6845,	// (0x0001163f) vkb2_cell_t_keypad_pane_cp01

0x6856,	// (0x00011650) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6856,	// (0x00011650) vkb2_cell_t_keypad_pane_cp02

0x6867,	// (0x00011661) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6867,	// (0x00011661) vkb2_cell_t_keypad_pane_cp03

0x6878,	// (0x00011672) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6878,	// (0x00011672) vkb2_cell_t_keypad_pane_cp04

0x6889,	// (0x00011683) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6889,	// (0x00011683) vkb2_cell_t_keypad_pane_cp05

0x689a,	// (0x00011694) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x689a,	// (0x00011694) vkb2_cell_t_keypad_pane_cp06

0x68ab,	// (0x000116a5) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x68ab,	// (0x000116a5) vkb2_cell_t_keypad_pane_cp07

0x68bc,	// (0x000116b6) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x68bc,	// (0x000116b6) vkb2_cell_t_keypad_pane_cp10

0x6072,	// (0x00010e6c) vkb2_cell_t_keypad_pane_g1

0xe1d3,	// (0x00018fcd) vkb2_cell_t_keypad_pane_t1

0x4a73,	// (0x0000f86d) popup_grid_graphic2_window

0xe1e5,	// (0x00018fdf) aid_size_cell_graphic2_ParamLimits

0xe1e5,	// (0x00018fdf) aid_size_cell_graphic2

0xe21d,	// (0x00019017) bg_popup_window_pane_cp21_ParamLimits

0xe21d,	// (0x00019017) bg_popup_window_pane_cp21

0xe22b,	// (0x00019025) graphic2_pages_pane_ParamLimits

0xe22b,	// (0x00019025) graphic2_pages_pane

0xe271,	// (0x0001906b) grid_graphic2_control_pane_ParamLimits

0xe271,	// (0x0001906b) grid_graphic2_control_pane

0xe2af,	// (0x000190a9) grid_graphic2_pane_ParamLimits

0xe2af,	// (0x000190a9) grid_graphic2_pane

0xe323,	// (0x0001911d) cell_graphic2_pane

0x4a73,	// (0x0000f86d) main_comp_mode_pane

0xd400,	// (0x000181fa) list_ai3_gene_pane_ParamLimits

0xd82d,	// (0x00018627) bg_popup_window_pane_cp19_ParamLimits

0xd839,	// (0x00018633) bg_touch_area_indi_pane_ParamLimits

0xd839,	// (0x00018633) bg_touch_area_indi_pane

0xd84f,	// (0x00018649) bg_touch_area_indi_pane_cp01_ParamLimits

0xd84f,	// (0x00018649) bg_touch_area_indi_pane_cp01

0xd865,	// (0x0001865f) bg_touch_area_indi_pane_cp02_ParamLimits

0xd865,	// (0x0001865f) bg_touch_area_indi_pane_cp02

0xd87d,	// (0x00018677) bg_touch_area_indi_pane_cp03_ParamLimits

0xd87d,	// (0x00018677) bg_touch_area_indi_pane_cp03

0xd897,	// (0x00018691) popup_slider_window_g1_ParamLimits

0xd8b3,	// (0x000186ad) popup_slider_window_g2_ParamLimits

0xd8cf,	// (0x000186c9) popup_slider_window_g3_ParamLimits

0xfced,	// (0x0001aae7) popup_slider_window_g_ParamLimits

0xd92b,	// (0x00018725) popup_slider_window_t1_ParamLimits

0xd99f,	// (0x00018799) small_volume_slider_vertical_pane_ParamLimits

0xe323,	// (0x0001911d) cell_graphic2_pane_ParamLimits

0xe371,	// (0x0001916b) bg_button_pane_cp10_ParamLimits

0xe371,	// (0x0001916b) bg_button_pane_cp10

0xe384,	// (0x0001917e) bg_button_pane_cp11_ParamLimits

0xe384,	// (0x0001917e) bg_button_pane_cp11

0xe397,	// (0x00019191) graphic2_pages_pane_g1_ParamLimits

0xe397,	// (0x00019191) graphic2_pages_pane_g1

0xe3b2,	// (0x000191ac) graphic2_pages_pane_g2_ParamLimits

0xe3b2,	// (0x000191ac) graphic2_pages_pane_g2

0x0001,

0xfdb1,	// (0x0001abab) graphic2_pages_pane_g_ParamLimits

0xfdb1,	// (0x0001abab) graphic2_pages_pane_g

0xe3ca,	// (0x000191c4) graphic2_pages_pane_t1_ParamLimits

0xe3ca,	// (0x000191c4) graphic2_pages_pane_t1

0xe3e2,	// (0x000191dc) cell_graphic2_control_pane_ParamLimits

0xe3e2,	// (0x000191dc) cell_graphic2_control_pane

0xe403,	// (0x000191fd) cell_graphic2_pane_g1_ParamLimits

0xe403,	// (0x000191fd) cell_graphic2_pane_g1

0xe410,	// (0x0001920a) cell_graphic2_pane_g2_ParamLimits

0xe410,	// (0x0001920a) cell_graphic2_pane_g2

0xe41d,	// (0x00019217) cell_graphic2_pane_g3_ParamLimits

0xe41d,	// (0x00019217) cell_graphic2_pane_g3

0xe42a,	// (0x00019224) cell_graphic2_pane_g4_ParamLimits

0xe42a,	// (0x00019224) cell_graphic2_pane_g4

0xe437,	// (0x00019231) cell_graphic2_pane_g5_ParamLimits

0xe437,	// (0x00019231) cell_graphic2_pane_g5

0x0004,

0xfdb6,	// (0x0001abb0) cell_graphic2_pane_g_ParamLimits

0xfdb6,	// (0x0001abb0) cell_graphic2_pane_g

0xe452,	// (0x0001924c) cell_graphic2_pane_t1_ParamLimits

0xe452,	// (0x0001924c) cell_graphic2_pane_t1

0x9535,	// (0x0001432f) grid_highlight_pane_cp11_ParamLimits

0x9535,	// (0x0001432f) grid_highlight_pane_cp11

0x7181,	// (0x00011f7b) bg_button_pane_cp05

0xe47b,	// (0x00019275) cell_graphic2_control_pane_g1

0xbf70,	// (0x00016d6a) bg_touch_area_indi_pane_g1

0xe4a3,	// (0x0001929d) aid_cmod_rocker_key_size

0xe4ad,	// (0x000192a7) aid_cmode_itu_key_size

0xe4b7,	// (0x000192b1) main_cmode_video_pane

0xe4e2,	// (0x000192dc) main_comp_mode_itu_pane

0xe4ee,	// (0x000192e8) main_comp_mode_rocker_pane

0xe4fa,	// (0x000192f4) cell_cmode_rocker_pane_ParamLimits

0xe4fa,	// (0x000192f4) cell_cmode_rocker_pane

0xe50c,	// (0x00019306) cell_cmode_itu_pane_ParamLimits

0xe50c,	// (0x00019306) cell_cmode_itu_pane

0x7ce2,	// (0x00012adc) bg_button_pane_cp06_ParamLimits

0x7ce2,	// (0x00012adc) bg_button_pane_cp06

0xc1ee,	// (0x00016fe8) cell_cmode_rocker_pane_g1_ParamLimits

0xc1ee,	// (0x00016fe8) cell_cmode_rocker_pane_g1

0xda43,	// (0x0001883d) cell_cmode_rocker_pane_g2_ParamLimits

0xda43,	// (0x0001883d) cell_cmode_rocker_pane_g2

0x0001,

0xfdc6,	// (0x0001abc0) cell_cmode_rocker_pane_g_ParamLimits

0xfdc6,	// (0x0001abc0) cell_cmode_rocker_pane_g

0x6dea,	// (0x00011be4) bg_button_pane_cp07

0xe521,	// (0x0001931b) cell_cmode_itu_pane_g1

0xe52a,	// (0x00019324) cell_cmode_itu_pane_t1

0xe538,	// (0x00019332) cell_cmode_itu_pane_t2

0x0001,

0xfdcb,	// (0x0001abc5) cell_cmode_itu_pane_t

0xdc66,	// (0x00018a60) aid_touch_ctrl_left

0xdc6e,	// (0x00018a68) aid_touch_ctrl_right

0x6dea,	// (0x00011be4) compa_mode_pane

0xe546,	// (0x00019340) aid_cmod_rocker_key_size_cp

0xe550,	// (0x0001934a) aid_cmode_itu_key_size_cp

0xe55a,	// (0x00019354) compa_mode_pane_g1

0xe562,	// (0x0001935c) compa_mode_pane_g2

0xe56a,	// (0x00019364) compa_mode_pane_g3

0x0002,

0xfdd0,	// (0x0001abca) compa_mode_pane_g

0xe572,	// (0x0001936c) main_comp_mode_itu_pane_cp

0xe57a,	// (0x00019374) main_comp_mode_rocker_pane_cp

0xe582,	// (0x0001937c) cell_cmode_itu_pane_cp_ParamLimits

0xe582,	// (0x0001937c) cell_cmode_itu_pane_cp

0xe597,	// (0x00019391) cell_cmode_rocker_pane_cp_ParamLimits

0xe597,	// (0x00019391) cell_cmode_rocker_pane_cp

0x7ce2,	// (0x00012adc) bg_button_pane_cp06_cp_ParamLimits

0x7ce2,	// (0x00012adc) bg_button_pane_cp06_cp

0xc1ee,	// (0x00016fe8) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc1ee,	// (0x00016fe8) cell_cmode_rocker_pane_g1_cp

0xbf70,	// (0x00016d6a) cell_cmode_rocker_pane_g2_cp

0x6dea,	// (0x00011be4) bg_button_pane_cp07_cp

0xaa6c,	// (0x00015866) cell_cmode_itu_pane_g1_cp

0xe5a9,	// (0x000193a3) cell_cmode_itu_pane_t1_cp

0xe5a9,	// (0x000193a3) cell_cmode_itu_pane_t2_cp

0xaa59,	// (0x00015853) settings_code_pane_cp2

0x6ede,	// (0x00011cd8) bg_popup_window_pane_cp3_ParamLimits

0x735b,	// (0x00012155) heading_pane_cp3_ParamLimits

0x7367,	// (0x00012161) listscroll_popup_graphic_pane_ParamLimits

0x5e1b,	// (0x00010c15) fep_hwr_aid_pane_ParamLimits

0x6292,	// (0x0001108c) aid_touch_sctrl_top_ParamLimits

0x62ad,	// (0x000110a7) sctrl_sk_top_pane_g1_ParamLimits

0x6072,	// (0x00010e6c) sctrl_sk_top_pane_g2_ParamLimits

0xfd06,	// (0x0001ab00) sctrl_sk_top_pane_g_ParamLimits

0x62ba,	// (0x000110b4) sctrl_sk_top_pane_t1_ParamLimits

0x6292,	// (0x0001108c) aid_touch_sctrl_bottom_ParamLimits

0x62ba,	// (0x000110b4) sctrl_sk_bottom_pane_t1_ParamLimits

0xdbaf,	// (0x000189a9) aid_area_touch_clock

0x64a3,	// (0x0001129d) aid_vkb2_area_top_pane_cell_ParamLimits

0x64a3,	// (0x0001129d) aid_vkb2_area_top_pane_cell

0x65ee,	// (0x000113e8) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x65ee,	// (0x000113e8) aid_vkb2_area_bottom_pane_cell

0xe11e,	// (0x00018f18) popup_char_count_window

0xe5b7,	// (0x000193b1) popup_char_count_window_g1

0xe5c0,	// (0x000193ba) popup_char_count_window_g2

0xe5c9,	// (0x000193c3) popup_char_count_window_g3

0x0002,

0xfdd7,	// (0x0001abd1) popup_char_count_window_g

0xe5d2,	// (0x000193cc) popup_char_count_window_t1

0x6369,	// (0x00011163) popup_fep_char_preview_window_ParamLimits

0x6369,	// (0x00011163) popup_fep_char_preview_window

0x64c1,	// (0x000112bb) vkb2_top_candi_pane_ParamLimits

0x64c1,	// (0x000112bb) vkb2_top_candi_pane

0xe5e0,	// (0x000193da) cell_vkb2_top_candi_pane_ParamLimits

0xe5e0,	// (0x000193da) cell_vkb2_top_candi_pane

0x68d1,	// (0x000116cb) bg_popup_fep_char_preview_window_ParamLimits

0x68d1,	// (0x000116cb) bg_popup_fep_char_preview_window

0x68df,	// (0x000116d9) popup_fep_char_preview_window_t1_ParamLimits

0x68df,	// (0x000116d9) popup_fep_char_preview_window_t1

0xe62d,	// (0x00019427) bg_popup_fep_char_preview_window_g1

0xe635,	// (0x0001942f) bg_popup_fep_char_preview_window_g2

0xe63d,	// (0x00019437) bg_popup_fep_char_preview_window_g3

0xe645,	// (0x0001943f) bg_popup_fep_char_preview_window_g4

0xe64d,	// (0x00019447) bg_popup_fep_char_preview_window_g5

0x6919,	// (0x00011713) bg_popup_fep_char_preview_window_g6

0xe655,	// (0x0001944f) bg_popup_fep_char_preview_window_g7

0xe65d,	// (0x00019457) bg_popup_fep_char_preview_window_g8

0xe665,	// (0x0001945f) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdde,	// (0x0001abd8) bg_popup_fep_char_preview_window_g

0x6072,	// (0x00010e6c) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6072,	// (0x00010e6c) cell_vkb2_top_candi_pane_g1

0x6080,	// (0x00010e7a) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6080,	// (0x00010e7a) cell_vkb2_top_candi_pane_g2

0xe4c1,	// (0x000192bb) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe4c1,	// (0x000192bb) cell_vkb2_top_candi_pane_g3

0x6921,	// (0x0001171b) cell_vkb2_top_candi_pane_g4_ParamLimits

0x6921,	// (0x0001171b) cell_vkb2_top_candi_pane_g4

0xc85e,	// (0x00017658) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc85e,	// (0x00017658) cell_vkb2_top_candi_pane_g5

0x6942,	// (0x0001173c) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6942,	// (0x0001173c) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf1,	// (0x0001abeb) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf1,	// (0x0001abeb) cell_vkb2_top_candi_pane_g

0x6950,	// (0x0001174a) cell_vkb2_top_candi_pane_t1

0x5c7b,	// (0x00010a75) aid_size_touch_slider_mark_ParamLimits

0x5c7b,	// (0x00010a75) aid_size_touch_slider_mark

0xe261,	// (0x0001905b) grid_graphic2_catg_pane_ParamLimits

0xe261,	// (0x0001905b) grid_graphic2_catg_pane

0xe2ff,	// (0x000190f9) popup_grid_graphic2_window_t1_ParamLimits

0xe2ff,	// (0x000190f9) popup_grid_graphic2_window_t1

0xe311,	// (0x0001910b) popup_grid_graphic2_window_t2_ParamLimits

0xe311,	// (0x0001910b) popup_grid_graphic2_window_t2

0x0001,

0xfdac,	// (0x0001aba6) popup_grid_graphic2_window_t_ParamLimits

0xfdac,	// (0x0001aba6) popup_grid_graphic2_window_t

0x7181,	// (0x00011f7b) bg_button_pane_cp05_ParamLimits

0xe47b,	// (0x00019275) cell_graphic2_control_pane_g1_ParamLimits

0xe66d,	// (0x00019467) cell_graphic2_catg_pane_ParamLimits

0xe66d,	// (0x00019467) cell_graphic2_catg_pane

0x6dea,	// (0x00011be4) bg_button_pane_cp12

0xe67f,	// (0x00019479) cell_graphic2_catg_pane_g1

0xdb7b,	// (0x00018975) cell_tb_ext_pane_t1_ParamLimits

0x670b,	// (0x00011505) vkb2_top_cell_right_narrow_pane_ParamLimits

0x670b,	// (0x00011505) vkb2_top_cell_right_narrow_pane

0x6723,	// (0x0001151d) vkb2_top_cell_right_wide_pane_ParamLimits

0x6723,	// (0x0001151d) vkb2_top_cell_right_wide_pane

0x5e0d,	// (0x00010c07) bg_vkb2_func_pane_ParamLimits

0x5e0d,	// (0x00010c07) bg_vkb2_func_pane

0x6794,	// (0x0001158e) vkb2_top_cell_left_pane_g1_ParamLimits

0x5e0d,	// (0x00010c07) bg_vkb2_fuc_pane_cp03_ParamLimits

0x5e0d,	// (0x00010c07) bg_vkb2_fuc_pane_cp03

0x67f2,	// (0x000115ec) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x940f,	// (0x00014209) bg_vkb2_func_pane_g1

0x9417,	// (0x00014211) bg_vkb2_func_pane_g2

0x9427,	// (0x00014221) bg_vkb2_func_pane_g3

0x941f,	// (0x00014219) bg_vkb2_func_pane_g4

0x942f,	// (0x00014229) bg_vkb2_func_pane_g5

0x9437,	// (0x00014231) bg_vkb2_func_pane_g6

0x943f,	// (0x00014239) bg_vkb2_func_pane_g7

0x9447,	// (0x00014241) bg_vkb2_func_pane_g8

0x9407,	// (0x00014201) bg_vkb2_func_pane_g9

0x0008,

0xfdfe,	// (0x0001abf8) bg_vkb2_func_pane_g

0x5e0d,	// (0x00010c07) bg_vkb2_fuc_pane_cp01_ParamLimits

0x5e0d,	// (0x00010c07) bg_vkb2_fuc_pane_cp01

0x6794,	// (0x0001158e) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6794,	// (0x0001158e) vkb2_top_cell_right_wide_pane_g1

0x5e0d,	// (0x00010c07) bg_vkb2_fuc_pane_cp02_ParamLimits

0x5e0d,	// (0x00010c07) bg_vkb2_fuc_pane_cp02

0x67f2,	// (0x000115ec) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x67f2,	// (0x000115ec) vkb2_top_cell_right_narrow_pane_g1

0xd7b1,	// (0x000185ab) aid_touch_area_decrease_ParamLimits

0xd7b1,	// (0x000185ab) aid_touch_area_decrease

0xd7cf,	// (0x000185c9) aid_touch_area_increase_ParamLimits

0xd7cf,	// (0x000185c9) aid_touch_area_increase

0xd7db,	// (0x000185d5) aid_touch_area_mute_ParamLimits

0xd7db,	// (0x000185d5) aid_touch_area_mute

0xd7ff,	// (0x000185f9) aid_touch_area_slider_ParamLimits

0xd7ff,	// (0x000185f9) aid_touch_area_slider

0xd8eb,	// (0x000186e5) popup_slider_window_g4_ParamLimits

0xd8eb,	// (0x000186e5) popup_slider_window_g4

0xd8f7,	// (0x000186f1) popup_slider_window_g5_ParamLimits

0xd8f7,	// (0x000186f1) popup_slider_window_g5

0xd919,	// (0x00018713) popup_slider_window_g6_ParamLimits

0xd919,	// (0x00018713) popup_slider_window_g6

0xd959,	// (0x00018753) popup_slider_window_t2_ParamLimits

0xd959,	// (0x00018753) popup_slider_window_t2

0x0001,

0xfcfa,	// (0x0001aaf4) popup_slider_window_t_ParamLimits

0xfcfa,	// (0x0001aaf4) popup_slider_window_t

0xd971,	// (0x0001876b) slider_pane_ParamLimits

0xd971,	// (0x0001876b) slider_pane

0xe688,	// (0x00019482) slider_pane_g1_ParamLimits

0xe688,	// (0x00019482) slider_pane_g1

0xe69c,	// (0x00019496) slider_pane_g2_ParamLimits

0xe69c,	// (0x00019496) slider_pane_g2

0xe6b2,	// (0x000194ac) slider_pane_g3_ParamLimits

0xe6b2,	// (0x000194ac) slider_pane_g3

0x0003,

0xfe11,	// (0x0001ac0b) slider_pane_g_ParamLimits

0xfe11,	// (0x0001ac0b) slider_pane_g

0x5836,	// (0x00010630) popup_tb_float_extension_window_ParamLimits

0x5836,	// (0x00010630) popup_tb_float_extension_window

0xe6de,	// (0x000194d8) aid_size_cell_tb_float_ext

0x6dea,	// (0x00011be4) bg_popup_sub_window_cp28

0xe6ea,	// (0x000194e4) grid_tb_float_ext_pane

0xe6f4,	// (0x000194ee) cell_tb_float_ext_pane_ParamLimits

0xe6f4,	// (0x000194ee) cell_tb_float_ext_pane

0xe70e,	// (0x00019508) cell_tb_float_ext_pane_g1

0xe717,	// (0x00019511) grid_highlight_pane_cp12

0x5f5c,	// (0x00010d56) cell_last_hwr_side_pane_ParamLimits

0x5f5c,	// (0x00010d56) cell_last_hwr_side_pane

0xbf70,	// (0x00016d6a) cell_last_hwr_side_pane_g1

0xe720,	// (0x0001951a) cell_last_hwr_side_pane_g2

0x0001,

0xfe1a,	// (0x0001ac14) cell_last_hwr_side_pane_g

0x66ba,	// (0x000114b4) vkb2_area_bottom_space_btn_pane_ParamLimits

0x66ba,	// (0x000114b4) vkb2_area_bottom_space_btn_pane

0x6072,	// (0x00010e6c) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe1d3,	// (0x00018fcd) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6950,	// (0x0001174a) cell_vkb2_top_candi_pane_t1_ParamLimits

0x696f,	// (0x00011769) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x696f,	// (0x00011769) vkb2_area_bottom_space_btn_pane_g1

0x69a9,	// (0x000117a3) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x69a9,	// (0x000117a3) vkb2_area_bottom_space_btn_pane_g2

0x69df,	// (0x000117d9) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x69df,	// (0x000117d9) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1f,	// (0x0001ac19) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1f,	// (0x0001ac19) vkb2_area_bottom_space_btn_pane_g

0x5ed0,	// (0x00010cca) cel_fep_hwr_func_pane_ParamLimits

0x5ed0,	// (0x00010cca) cel_fep_hwr_func_pane

0x5f0c,	// (0x00010d06) cell_hwr_side_button_pane_ParamLimits

0x5f0c,	// (0x00010d06) cell_hwr_side_button_pane

0xdbaf,	// (0x000189a9) aid_area_touch_clock_ParamLimits

0x7181,	// (0x00011f7b) bg_uniindi_top_pane_ParamLimits

0xdbc1,	// (0x000189bb) uniindi_top_pane_g1_ParamLimits

0xdbd7,	// (0x000189d1) uniindi_top_pane_g2_ParamLimits

0xdbe3,	// (0x000189dd) uniindi_top_pane_g3_ParamLimits

0xdbf4,	// (0x000189ee) uniindi_top_pane_g4_ParamLimits

0xfd32,	// (0x0001ab2c) uniindi_top_pane_g_ParamLimits

0xdc01,	// (0x000189fb) uniindi_top_pane_t1_ParamLimits

0x7181,	// (0x00011f7b) bg_vkb2_func_pane_cp01_ParamLimits

0x7181,	// (0x00011f7b) bg_vkb2_func_pane_cp01

0xe729,	// (0x00019523) cel_fep_hwr_func_pane_g1_ParamLimits

0xe729,	// (0x00019523) cel_fep_hwr_func_pane_g1

0x7181,	// (0x00011f7b) bg_vkb2_func_pane_cp02_ParamLimits

0x7181,	// (0x00011f7b) bg_vkb2_func_pane_cp02

0xe729,	// (0x00019523) cell_hwr_side_button_pane_g1_ParamLimits

0xe729,	// (0x00019523) cell_hwr_side_button_pane_g1

0x925a,	// (0x00014054) status_pane_g4_ParamLimits

0x925a,	// (0x00014054) status_pane_g4

0x9274,	// (0x0001406e) status_pane_t1

0xbcaa,	// (0x00016aa4) form2_midp_gauge_slider_cont_pane

0xbcb2,	// (0x00016aac) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbcc4,	// (0x00016abe) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbcd6,	// (0x00016ad0) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf2,	// (0x0001a8ec) form2_midp_gauge_slider_pane_t_ParamLimits

0xbce8,	// (0x00016ae2) form2_midp_slider_pane_ParamLimits

0x6329,	// (0x00011123) aid_size_cell_func_vkb2_ParamLimits

0x6329,	// (0x00011123) aid_size_cell_func_vkb2

0xe6ca,	// (0x000194c4) slider_pane_g4_ParamLimits

0xe6ca,	// (0x000194c4) slider_pane_g4

0x6a29,	// (0x00011823) form2_midp_gauge_slider_pane_t2_cp01

0x6a37,	// (0x00011831) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x6a37,	// (0x00011831) form2_midp_gauge_slider_pane_t3_cp01

0x6a54,	// (0x0001184e) form2_midp_slider_pane_cp01

0x6dea,	// (0x00011be4) navi_smil_pane

0xe762,	// (0x0001955c) navi_smil_pane_g1

0xe76a,	// (0x00019564) navi_smil_pane_t1

0xe737,	// (0x00019531) form2_midp_slider_pane_g1

0xe740,	// (0x0001953a) form2_midp_slider_pane_g2

0xe748,	// (0x00019542) form2_midp_slider_pane_g3

0xe737,	// (0x00019531) form2_midp_slider_pane_g4

0xe750,	// (0x0001954a) form2_midp_slider_pane_g5

0x0004,

0xfe28,	// (0x0001ac22) form2_midp_slider_pane_g

0x6a19,	// (0x00011813) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x6a19,	// (0x00011813) vkb2_area_bottom_space_btn_pane_g4

0x9089,	// (0x00013e83) lc0_navi_pane_ParamLimits

0x9089,	// (0x00013e83) lc0_navi_pane

0x90ff,	// (0x00013ef9) lc0_stat_indi_pane_ParamLimits

0x90ff,	// (0x00013ef9) lc0_stat_indi_pane

0x9116,	// (0x00013f10) ls0_title_pane_ParamLimits

0x9116,	// (0x00013f10) ls0_title_pane

0x7ce2,	// (0x00012adc) bg_popup_sub_pane_cp14_ParamLimits

0xdb96,	// (0x00018990) list_uniindi_pane_ParamLimits

0xdba2,	// (0x0001899c) uniindi_top_pane_ParamLimits

0xdc3e,	// (0x00018a38) list_single_uniindi_pane_g1_ParamLimits

0xdc51,	// (0x00018a4b) list_single_uniindi_pane_t1_ParamLimits

0x6a5d,	// (0x00011857) lc0_stat_clock_pane_ParamLimits

0x6a5d,	// (0x00011857) lc0_stat_clock_pane

0xe778,	// (0x00019572) lc0_stat_indi_pane_g1_ParamLimits

0xe778,	// (0x00019572) lc0_stat_indi_pane_g1

0xe785,	// (0x0001957f) lc0_stat_indi_pane_g2_ParamLimits

0xe785,	// (0x0001957f) lc0_stat_indi_pane_g2

0x0001,

0xfe33,	// (0x0001ac2d) lc0_stat_indi_pane_g_ParamLimits

0xfe33,	// (0x0001ac2d) lc0_stat_indi_pane_g

0x6a6a,	// (0x00011864) lc0_uni_indicator_pane_ParamLimits

0x6a6a,	// (0x00011864) lc0_uni_indicator_pane

0xe792,	// (0x0001958c) ls0_title_pane_g1_ParamLimits

0xe792,	// (0x0001958c) ls0_title_pane_g1

0xe7a6,	// (0x000195a0) ls0_title_pane_t1_ParamLimits

0xe7a6,	// (0x000195a0) ls0_title_pane_t1

0x6a77,	// (0x00011871) lc0_uni_indicator_pane_g1_ParamLimits

0x6a77,	// (0x00011871) lc0_uni_indicator_pane_g1

0xe7dc,	// (0x000195d6) lc0_stat_clock_pane_t1

0x4a73,	// (0x0000f86d) main_ai5_pane

0xe7ea,	// (0x000195e4) ai5_sk_pane_ParamLimits

0xe7ea,	// (0x000195e4) ai5_sk_pane

0xe7f7,	// (0x000195f1) cell_ai5_widget_pane_ParamLimits

0xe7f7,	// (0x000195f1) cell_ai5_widget_pane

0xe8ad,	// (0x000196a7) aid_size_cell_widget_grid

0xe8c3,	// (0x000196bd) bg_ai5_widget_pane_ParamLimits

0xe8c3,	// (0x000196bd) bg_ai5_widget_pane

0xe937,	// (0x00019731) cell_ai5_widget_pane_g2

0xe947,	// (0x00019741) cell_ai5_widget_pane_g3

0xe95e,	// (0x00019758) cell_ai5_widget_pane_g4

0xe96a,	// (0x00019764) cell_ai5_widget_pane_g5

0xe976,	// (0x00019770) cell_ai5_widget_pane_g6

0xe982,	// (0x0001977c) cell_ai5_widget_pane_g7

0xe9ca,	// (0x000197c4) cell_ai5_widget_pane_t1_ParamLimits

0xe9ca,	// (0x000197c4) cell_ai5_widget_pane_t1

0xe9e7,	// (0x000197e1) cell_ai5_widget_pane_t2_ParamLimits

0xe9e7,	// (0x000197e1) cell_ai5_widget_pane_t2

0xe9ff,	// (0x000197f9) cell_ai5_widget_pane_t3_ParamLimits

0xe9ff,	// (0x000197f9) cell_ai5_widget_pane_t3

0xea17,	// (0x00019811) cell_ai5_widget_pane_t4_ParamLimits

0xea17,	// (0x00019811) cell_ai5_widget_pane_t4

0xea34,	// (0x0001982e) cell_ai5_widget_pane_t5_ParamLimits

0xea34,	// (0x0001982e) cell_ai5_widget_pane_t5

0xea53,	// (0x0001984d) cell_ai5_widget_pane_t6_ParamLimits

0xea53,	// (0x0001984d) cell_ai5_widget_pane_t6

0xea65,	// (0x0001985f) cell_ai5_widget_pane_t7_ParamLimits

0xea65,	// (0x0001985f) cell_ai5_widget_pane_t7

0xea7e,	// (0x00019878) cell_ai5_widget_pane_t8_ParamLimits

0xea7e,	// (0x00019878) cell_ai5_widget_pane_t8

0x0009,

0xfe4d,	// (0x0001ac47) cell_ai5_widget_pane_t_ParamLimits

0xfe4d,	// (0x0001ac47) cell_ai5_widget_pane_t

0xead2,	// (0x000198cc) grid_ai5_widget_pane

0x7ce2,	// (0x00012adc) highlight_cell_ai5_widget_pane_ParamLimits

0x7ce2,	// (0x00012adc) highlight_cell_ai5_widget_pane

0xeae9,	// (0x000198e3) ai5_sk_left_pane

0xeaf3,	// (0x000198ed) ai5_sk_middle_pane

0xeafd,	// (0x000198f7) ai5_sk_right_pane

0xeb07,	// (0x00019901) bg_ai5_widget_pane_g1_ParamLimits

0xeb07,	// (0x00019901) bg_ai5_widget_pane_g1

0xeb13,	// (0x0001990d) bg_ai5_widget_pane_g2_ParamLimits

0xeb13,	// (0x0001990d) bg_ai5_widget_pane_g2

0xeb1f,	// (0x00019919) bg_ai5_widget_pane_g3_ParamLimits

0xeb1f,	// (0x00019919) bg_ai5_widget_pane_g3

0xeb2b,	// (0x00019925) bg_ai5_widget_pane_g4_ParamLimits

0xeb2b,	// (0x00019925) bg_ai5_widget_pane_g4

0xeb37,	// (0x00019931) bg_ai5_widget_pane_g5_ParamLimits

0xeb37,	// (0x00019931) bg_ai5_widget_pane_g5

0xeb43,	// (0x0001993d) bg_ai5_widget_pane_g6_ParamLimits

0xeb43,	// (0x0001993d) bg_ai5_widget_pane_g6

0xeb4f,	// (0x00019949) bg_ai5_widget_pane_g7_ParamLimits

0xeb4f,	// (0x00019949) bg_ai5_widget_pane_g7

0xeb5b,	// (0x00019955) bg_ai5_widget_pane_g8_ParamLimits

0xeb5b,	// (0x00019955) bg_ai5_widget_pane_g8

0xeb67,	// (0x00019961) bg_ai5_widget_pane_g9_ParamLimits

0xeb67,	// (0x00019961) bg_ai5_widget_pane_g9

0x0008,

0xfe62,	// (0x0001ac5c) bg_ai5_widget_pane_g_ParamLimits

0xfe62,	// (0x0001ac5c) bg_ai5_widget_pane_g

0xeb99,	// (0x00019993) cell_shortcut_ai5_widget_pane_ParamLimits

0xeb99,	// (0x00019993) cell_shortcut_ai5_widget_pane

0x8b81,	// (0x0001397b) bg_cell_shortcut_ai5_widget_pane

0xebaa,	// (0x000199a4) cell_grid_ai5_widget_pane_g1

0x8b81,	// (0x0001397b) highlight_cell_shortcut_ai5_widget_pane

0x940f,	// (0x00014209) ai5_sk_left_pane_g1

0xebb3,	// (0x000199ad) ai5_sk_left_pane_g2

0xebbb,	// (0x000199b5) ai5_sk_left_pane_g3

0xebc3,	// (0x000199bd) ai5_sk_left_pane_g4

0x0003,

0xfe75,	// (0x0001ac6f) ai5_sk_left_pane_g

0xebcb,	// (0x000199c5) ai5_sk_left_pane_t1

0x9417,	// (0x00014211) ai5_sk_right_pane_g1

0xebd9,	// (0x000199d3) ai5_sk_right_pane_g2

0xebe1,	// (0x000199db) ai5_sk_right_pane_g3

0xebe9,	// (0x000199e3) ai5_sk_right_pane_g4

0x0003,

0xfe7e,	// (0x0001ac78) ai5_sk_right_pane_g

0xebf1,	// (0x000199eb) ai5_sk_right_pane_t1

0x9417,	// (0x00014211) ai5_sk_middle_pane_g1

0x940f,	// (0x00014209) ai5_sk_middle_pane_g2

0x942f,	// (0x00014229) ai5_sk_middle_pane_g3

0xebe1,	// (0x000199db) ai5_sk_middle_pane_g4

0xebbb,	// (0x000199b5) ai5_sk_middle_pane_g5

0xebff,	// (0x000199f9) ai5_sk_middle_pane_g6

0xec07,	// (0x00019a01) ai5_sk_middle_pane_g7

0x0006,

0xfe87,	// (0x0001ac81) ai5_sk_middle_pane_g

0x8f15,	// (0x00013d0f) aid_touch_area_size_lc0_ParamLimits

0x8f15,	// (0x00013d0f) aid_touch_area_size_lc0

0x60a1,	// (0x00010e9b) cell_hwr_candidate_pane_t1_ParamLimits

0x8f31,	// (0x00013d2b) aid_touch_navi_pane

0x9204,	// (0x00013ffe) status_dt_navi_pane_ParamLimits

0x9204,	// (0x00013ffe) status_dt_navi_pane

0x9211,	// (0x0001400b) status_dt_sta_pane_ParamLimits

0x9211,	// (0x0001400b) status_dt_sta_pane

0xec0f,	// (0x00019a09) dt_sta_controll_pane

0xec1c,	// (0x00019a16) dt_sta_indi_pane

0xec2d,	// (0x00019a27) dt_sta_title_pane

0x7181,	// (0x00011f7b) bg_dt_sta_indi_pane_ParamLimits

0x7181,	// (0x00011f7b) bg_dt_sta_indi_pane

0xec40,	// (0x00019a3a) dt_sta_battery_pane

0xec48,	// (0x00019a42) dt_sta_indi_pane_g1

0xec51,	// (0x00019a4b) dt_sta_indi_pane_g2

0xec5a,	// (0x00019a54) dt_sta_indi_pane_g3

0x0002,

0xfe96,	// (0x0001ac90) dt_sta_indi_pane_g

0xec63,	// (0x00019a5d) dt_sta_signal_pane

0x7ce2,	// (0x00012adc) bg_dt_sta_title_pane_ParamLimits

0x7ce2,	// (0x00012adc) bg_dt_sta_title_pane

0xec6c,	// (0x00019a66) dt_sta_title_pane_g1

0xec74,	// (0x00019a6e) dt_sta_title_pane_t1_ParamLimits

0xec74,	// (0x00019a6e) dt_sta_title_pane_t1

0x6dea,	// (0x00011be4) bg_dt_sta_control_pane

0xec89,	// (0x00019a83) dt_sta_controll_pane_g1

0xec92,	// (0x00019a8c) bg_dt_sta_title_pane_g1

0xec9b,	// (0x00019a95) bg_dt_sta_title_pane_g2

0xeca4,	// (0x00019a9e) bg_dt_sta_title_pane_g3

0x0002,

0xfe9d,	// (0x0001ac97) bg_dt_sta_title_pane_g

0xbf70,	// (0x00016d6a) bg_dt_sta_indi_pane_g1

0xecad,	// (0x00019aa7) dt_sta_signal_pane_g1

0xecb5,	// (0x00019aaf) dt_sta_signal_pane_g2

0x0001,

0xfea4,	// (0x0001ac9e) dt_sta_signal_pane_g

0xecbd,	// (0x00019ab7) dt_sta_battery_pane_g1

0xecc6,	// (0x00019ac0) dt_sta_battery_pane_t1

0xbf70,	// (0x00016d6a) bg_dt_sta_control_pane_g1

0x85f1,	// (0x000133eb) fep_china_uni_eep_pane

0x85f9,	// (0x000133f3) fep_china_uni_entry_pane_ParamLimits

0x8609,	// (0x00013403) popup_fep_china_uni_window_g1_ParamLimits

0x8619,	// (0x00013413) popup_fep_china_uni_window_g2_ParamLimits

0x8619,	// (0x00013413) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x0001a512) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x0001a512) popup_fep_china_uni_window_g

0xecd5,	// (0x00019acf) fep_china_uni_eep_pane_g1

0xecdd,	// (0x00019ad7) fep_china_uni_eep_pane_t1

0xe759,	// (0x00019553) aid_touch_area_size_smil_player

0x9081,	// (0x00013e7b) lc0_clock_pane

0x9268,	// (0x00014062) status_pane_g5_ParamLimits

0x9268,	// (0x00014062) status_pane_g5

0x54fb,	// (0x000102f5) popup_keymap_window

0x9226,	// (0x00014020) status_icon_pane

0xe947,	// (0x00019741) cell_ai5_widget_pane_g3_ParamLimits

0xe95e,	// (0x00019758) cell_ai5_widget_pane_g4_ParamLimits

0xe96a,	// (0x00019764) cell_ai5_widget_pane_g5_ParamLimits

0xe98e,	// (0x00019788) cell_ai5_widget_pane_g8_ParamLimits

0xe98e,	// (0x00019788) cell_ai5_widget_pane_g8

0xe9a2,	// (0x0001979c) cell_ai5_widget_pane_g9_ParamLimits

0xe9a2,	// (0x0001979c) cell_ai5_widget_pane_g9

0xe9b6,	// (0x000197b0) cell_ai5_widget_pane_g10_ParamLimits

0xe9b6,	// (0x000197b0) cell_ai5_widget_pane_g10

0xecec,	// (0x00019ae6) status_icon_pane_g1

0x6dea,	// (0x00011be4) bg_popup_sub_pane_cp13

0xecf4,	// (0x00019aee) popup_keymap_window_t1

0x8e4a,	// (0x00013c44) control_pane_g6_ParamLimits

0x8e4a,	// (0x00013c44) control_pane_g6

0x8e57,	// (0x00013c51) control_pane_g7_ParamLimits

0x8e57,	// (0x00013c51) control_pane_g7

0x8e64,	// (0x00013c5e) control_pane_g8_ParamLimits

0x8e64,	// (0x00013c5e) control_pane_g8

0xec0f,	// (0x00019a09) dt_sta_controll_pane_ParamLimits

0xec1c,	// (0x00019a16) dt_sta_indi_pane_ParamLimits

0xec2d,	// (0x00019a27) dt_sta_title_pane_ParamLimits

0x769f,	// (0x00012499) aid_size_touch_scroll_bar_cale

0x4b4c,	// (0x0000f946) popup_discreet_window_ParamLimits

0x4b4c,	// (0x0000f946) popup_discreet_window

0x4bd4,	// (0x0000f9ce) popup_sk_window

0x9b78,	// (0x00014972) bg_popup_sub_pane_cp28_ParamLimits

0x9b78,	// (0x00014972) bg_popup_sub_pane_cp28

0xed02,	// (0x00019afc) popup_discreet_window_g1_ParamLimits

0xed02,	// (0x00019afc) popup_discreet_window_g1

0xed22,	// (0x00019b1c) popup_discreet_window_t1_ParamLimits

0xed22,	// (0x00019b1c) popup_discreet_window_t1

0xed40,	// (0x00019b3a) popup_discreet_window_t2_ParamLimits

0xed40,	// (0x00019b3a) popup_discreet_window_t2

0x0002,

0xfea9,	// (0x0001aca3) popup_discreet_window_t_ParamLimits

0xfea9,	// (0x0001aca3) popup_discreet_window_t

0x6a8b,	// (0x00011885) popup_sk_window_g1

0x6a95,	// (0x0001188f) popup_sk_window_g2

0x0001,

0xfeb0,	// (0x0001acaa) popup_sk_window_g

0x6a9f,	// (0x00011899) popup_sk_window_t1

0x6aad,	// (0x000118a7) popup_sk_window_t1_copy1

0xe937,	// (0x00019731) cell_ai5_widget_pane_g2_ParamLimits

0xea90,	// (0x0001988a) cell_ai5_widget_pane_t9_ParamLimits

0xea90,	// (0x0001988a) cell_ai5_widget_pane_t9

0x6dea,	// (0x00011be4) main_fep_fshwr2_pane

0x6abb,	// (0x000118b5) aid_fshwr2_btn_pane

0x6ac7,	// (0x000118c1) aid_fshwr2_syb_pane

0x6ad3,	// (0x000118cd) aid_fshwr2_txt_pane

0x6adf,	// (0x000118d9) fshwr2_func_candi_pane

0x6af4,	// (0x000118ee) fshwr2_hwr_syb_pane

0x6b04,	// (0x000118fe) fshwr2_icf_pane

0x4a73,	// (0x0000f86d) fshwr2_icf_bg_pane

0x6b2d,	// (0x00011927) fshwr2_icf_pane_t1_ParamLimits

0x6b2d,	// (0x00011927) fshwr2_icf_pane_t1

0x84df,	// (0x000132d9) fshwr2_func_candi_pane_g1

0xed92,	// (0x00019b8c) fshwr2_func_candi_row_pane_ParamLimits

0xed92,	// (0x00019b8c) fshwr2_func_candi_row_pane

0x6b45,	// (0x0001193f) cell_fshwr2_syb_pane_ParamLimits

0x6b45,	// (0x0001193f) cell_fshwr2_syb_pane

0x6072,	// (0x00010e6c) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6072,	// (0x00010e6c) fshwr2_hwr_syb_pane_g1

0x4a73,	// (0x0000f86d) bg_popup_call_pane_cp01

0x6b5b,	// (0x00011955) fshwr2_func_candi_cell_pane_ParamLimits

0x6b5b,	// (0x00011955) fshwr2_func_candi_cell_pane

0xeda2,	// (0x00019b9c) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xeda2,	// (0x00019b9c) fshwr2_func_candi_cell_bg_pane

0x6b90,	// (0x0001198a) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x6b90,	// (0x0001198a) fshwr2_func_candi_cell_pane_g1

0x6bb8,	// (0x000119b2) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x6bb8,	// (0x000119b2) fshwr2_func_candi_cell_pane_t1

0x4a73,	// (0x0000f86d) bg_button_pane_cp08

0xedae,	// (0x00019ba8) cell_fshwr2_syb_bg_pane

0x6bcb,	// (0x000119c5) cell_fshwr2_syb_bg_pane_g1

0x6bd3,	// (0x000119cd) cell_fshwr2_syb_bg_pane_t1

0x7ce2,	// (0x00012adc) main_tmo_pane

0xa693,	// (0x0001548d) uni_indicator_pane_g1_ParamLimits

0xa6a9,	// (0x000154a3) uni_indicator_pane_g2_ParamLimits

0xa6bf,	// (0x000154b9) uni_indicator_pane_g3_ParamLimits

0xa6d3,	// (0x000154cd) uni_indicator_pane_g4_ParamLimits

0xa6d3,	// (0x000154cd) uni_indicator_pane_g4

0xa6e7,	// (0x000154e1) uni_indicator_pane_g5_ParamLimits

0xa6e7,	// (0x000154e1) uni_indicator_pane_g5

0xa6e7,	// (0x000154e1) uni_indicator_pane_g6_ParamLimits

0xa6e7,	// (0x000154e1) uni_indicator_pane_g6

0xf91c,	// (0x0001a716) uni_indicator_pane_g_ParamLimits

0xd78d,	// (0x00018587) popup_tmo_note_window_ParamLimits

0xd78d,	// (0x00018587) popup_tmo_note_window

0x630b,	// (0x00011105) fshwr2_bg_pane

0x6ba9,	// (0x000119a3) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x6ba9,	// (0x000119a3) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb5,	// (0x0001acaf) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb5,	// (0x0001acaf) fshwr2_func_candi_cell_pane_g

0x605a,	// (0x00010e54) bg_popup_window_pane_cp01

0x6be2,	// (0x000119dc) bg_popup_window_pane_g1_cp01

0xedb6,	// (0x00019bb0) bg_popup_window_pane_cp22_ParamLimits

0xedb6,	// (0x00019bb0) bg_popup_window_pane_cp22

0xedc4,	// (0x00019bbe) listscroll_tmo_link_pane_ParamLimits

0xedc4,	// (0x00019bbe) listscroll_tmo_link_pane

0xee04,	// (0x00019bfe) popup_tmo_note_window_g1_ParamLimits

0xee04,	// (0x00019bfe) popup_tmo_note_window_g1

0xee11,	// (0x00019c0b) tmo_note_info_pane_ParamLimits

0xee11,	// (0x00019c0b) tmo_note_info_pane

0xee2b,	// (0x00019c25) list_tmo_note_info_pane_g1_ParamLimits

0xee2b,	// (0x00019c25) list_tmo_note_info_pane_g1

0xee42,	// (0x00019c3c) list_tmo_note_info_pane_g2_ParamLimits

0xee42,	// (0x00019c3c) list_tmo_note_info_pane_g2

0x0001,

0xfeba,	// (0x0001acb4) list_tmo_note_info_pane_g_ParamLimits

0xfeba,	// (0x0001acb4) list_tmo_note_info_pane_g

0xee5e,	// (0x00019c58) list_tmo_note_info_text_pane_ParamLimits

0xee5e,	// (0x00019c58) list_tmo_note_info_text_pane

0xeedf,	// (0x00019cd9) list_tmo_link_pane

0xeeec,	// (0x00019ce6) scroll_pane_cp20

0xeef9,	// (0x00019cf3) list_single_tmo_link_pane_ParamLimits

0xeef9,	// (0x00019cf3) list_single_tmo_link_pane

0xef09,	// (0x00019d03) list_single_tmo_link_pane_t1

0xef17,	// (0x00019d11) list_tmo_note_info_text_pane_t1_ParamLimits

0xef17,	// (0x00019d11) list_tmo_note_info_text_pane_t1

0x7f16,	// (0x00012d10) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7f16,	// (0x00012d10) aid_size_touch_scroll_bar_cp01

0x7d8b,	// (0x00012b85) aid_size_touch_slider_marker

0x4bbc,	// (0x0000f9b6) popup_settings_window_ParamLimits

0x4bbc,	// (0x0000f9b6) popup_settings_window

0x8ee1,	// (0x00013cdb) popup_candi_list_indi_window

0x8f31,	// (0x00013d2b) aid_touch_navi_pane_ParamLimits

0x6266,	// (0x00011060) rs_clock_indi_pane

0x626f,	// (0x00011069) sctrl_sk_bottom_pane_ParamLimits

0x6280,	// (0x0001107a) sctrl_sk_top_pane_ParamLimits

0x6383,	// (0x0001117d) popup_fep_tooltip_window

0xe8ad,	// (0x000196a7) aid_size_cell_widget_grid_ParamLimits

0xe922,	// (0x0001971c) cell_ai5_widget_pane_g1_ParamLimits

0xe922,	// (0x0001971c) cell_ai5_widget_pane_g1

0xe976,	// (0x00019770) cell_ai5_widget_pane_g6_ParamLimits

0xe982,	// (0x0001977c) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe38,	// (0x0001ac32) cell_ai5_widget_pane_g_ParamLimits

0xfe38,	// (0x0001ac32) cell_ai5_widget_pane_g

0xeab4,	// (0x000198ae) cell_ai5_widget_pane_t10_ParamLimits

0xeab4,	// (0x000198ae) cell_ai5_widget_pane_t10

0xead2,	// (0x000198cc) grid_ai5_widget_pane_ParamLimits

0xeb73,	// (0x0001996d) cell_contacts_ai5_widget_pane_ParamLimits

0xeb73,	// (0x0001996d) cell_contacts_ai5_widget_pane

0xed55,	// (0x00019b4f) popup_discreet_window_t3_ParamLimits

0xed55,	// (0x00019b4f) popup_discreet_window_t3

0x6b19,	// (0x00011913) popup_fshwr2_char_preview_window_ParamLimits

0x6b19,	// (0x00011913) popup_fshwr2_char_preview_window

0xee7c,	// (0x00019c76) tmo_note_info_pane_t1

0xee91,	// (0x00019c8b) tmo_note_info_pane_t2

0xeea6,	// (0x00019ca0) tmo_note_info_pane_t3

0xeebb,	// (0x00019cb5) tmo_note_info_pane_t4

0xeecd,	// (0x00019cc7) tmo_note_info_pane_t5

0x0004,

0xfebf,	// (0x0001acb9) tmo_note_info_pane_t

0xeedf,	// (0x00019cd9) list_tmo_link_pane_ParamLimits

0xeeec,	// (0x00019ce6) scroll_pane_cp20_ParamLimits

0x4a73,	// (0x0000f86d) bg_popup_fep_char_preview_window_cp01

0xef30,	// (0x00019d2a) popup_fshwr2_char_preview_window_t1

0xef3e,	// (0x00019d38) popup_candi_list_indi_window_g1

0xef47,	// (0x00019d41) bg_cell_contacts_ai5_widget_pane

0xef53,	// (0x00019d4d) cell_contacts_ai5_widget_pane_g1

0xc7b3,	// (0x000175ad) cell_contacts_ai5_widget_pane_g2

0xef68,	// (0x00019d62) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeca,	// (0x0001acc4) cell_contacts_ai5_widget_pane_g

0xef74,	// (0x00019d6e) cell_contacts_ai5_widget_pane_t1

0x7ce2,	// (0x00012adc) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefeb,	// (0x00019de5) settings_container_pane

0x8b81,	// (0x0001397b) listscroll_set_pane_copy1

0xb351,	// (0x0001614b) scroll_pane_cp121_copy1

0xeff7,	// (0x00019df1) set_content_pane_copy1

0xefff,	// (0x00019df9) aid_height_set_list_copy1_ParamLimits

0xefff,	// (0x00019df9) aid_height_set_list_copy1

0xa907,	// (0x00015701) aid_size_parent_copy1_ParamLimits

0xa907,	// (0x00015701) aid_size_parent_copy1

0xf00b,	// (0x00019e05) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf00b,	// (0x00019e05) button_value_adjust_pane_cp6_copy1

0x8ec7,	// (0x00013cc1) list_highlight_pane_cp2_copy1_ParamLimits

0x8ec7,	// (0x00013cc1) list_highlight_pane_cp2_copy1

0xf01f,	// (0x00019e19) list_set_pane_copy1_ParamLimits

0xf01f,	// (0x00019e19) list_set_pane_copy1

0xef86,	// (0x00019d80) main_pane_set_t1_copy1_ParamLimits

0xef86,	// (0x00019d80) main_pane_set_t1_copy1

0xefc0,	// (0x00019dba) main_pane_set_t2_copy1_ParamLimits

0xefc0,	// (0x00019dba) main_pane_set_t2_copy1

0xf0cc,	// (0x00019ec6) main_pane_set_t3_copy1

0xf0da,	// (0x00019ed4) main_pane_set_t4_copy1

0xefdf,	// (0x00019dd9) set_content_pane_g1_copy1_ParamLimits

0xefdf,	// (0x00019dd9) set_content_pane_g1_copy1

0xf0e8,	// (0x00019ee2) setting_code_pane_copy1

0xf0f0,	// (0x00019eea) setting_slider_graphic_pane_copy1

0xf0f0,	// (0x00019eea) setting_slider_pane_copy1

0xf0f0,	// (0x00019eea) setting_text_pane_copy1

0xf0f0,	// (0x00019eea) setting_volume_pane_copy1

0xf0e8,	// (0x00019ee2) settings_code_pane_cp2_copy1

0xf0f8,	// (0x00019ef2) settings_code_pane_cp_copy1_ParamLimits

0xf0f8,	// (0x00019ef2) settings_code_pane_cp_copy1

0x6beb,	// (0x000119e5) volume_set_pane_copy1

0xf10c,	// (0x00019f06) volume_set_pane_g10_copy1

0xf114,	// (0x00019f0e) volume_set_pane_g1_copy1

0xf11c,	// (0x00019f16) volume_set_pane_g2_copy1

0xf124,	// (0x00019f1e) volume_set_pane_g3_copy1

0xf12c,	// (0x00019f26) volume_set_pane_g4_copy1

0xf134,	// (0x00019f2e) volume_set_pane_g5_copy1

0xf13c,	// (0x00019f36) volume_set_pane_g6_copy1

0xf144,	// (0x00019f3e) volume_set_pane_g7_copy1

0xf14c,	// (0x00019f46) volume_set_pane_g8_copy1

0xf154,	// (0x00019f4e) volume_set_pane_g9_copy1

0x6ede,	// (0x00011cd8) bg_set_opt_pane_cp_copy1_ParamLimits

0x6ede,	// (0x00011cd8) bg_set_opt_pane_cp_copy1

0x6bf3,	// (0x000119ed) setting_slider_pane_t1_copy1_ParamLimits

0x6bf3,	// (0x000119ed) setting_slider_pane_t1_copy1

0x6c11,	// (0x00011a0b) setting_slider_pane_t2_copy1_ParamLimits

0x6c11,	// (0x00011a0b) setting_slider_pane_t2_copy1

0x6c2b,	// (0x00011a25) setting_slider_pane_t3_copy1_ParamLimits

0x6c2b,	// (0x00011a25) setting_slider_pane_t3_copy1

0x6c43,	// (0x00011a3d) slider_set_pane_copy1_ParamLimits

0x6c43,	// (0x00011a3d) slider_set_pane_copy1

0x7e0b,	// (0x00012c05) set_opt_bg_pane_g1_copy2

0x7e13,	// (0x00012c0d) set_opt_bg_pane_g2_copy2

0xf15c,	// (0x00019f56) set_opt_bg_pane_g3_copy2

0x7e23,	// (0x00012c1d) set_opt_bg_pane_g4_copy2

0x7e2b,	// (0x00012c25) set_opt_bg_pane_g5_copy2

0x7e33,	// (0x00012c2d) set_opt_bg_pane_g6_copy2

0xf166,	// (0x00019f60) set_opt_bg_pane_g7_copy2

0xf16e,	// (0x00019f68) set_opt_bg_pane_g8_copy2

0xf178,	// (0x00019f72) set_opt_bg_pane_g9_copy2

0x6c59,	// (0x00011a53) aid_size_touch_slider_mark_copy1_ParamLimits

0x6c59,	// (0x00011a53) aid_size_touch_slider_mark_copy1

0xf182,	// (0x00019f7c) slider_set_pane_g1_copy1

0x6c6d,	// (0x00011a67) slider_set_pane_g2_copy1

0x5c9b,	// (0x00010a95) slider_set_pane_g3_copy1_ParamLimits

0x5c9b,	// (0x00010a95) slider_set_pane_g3_copy1

0x5caf,	// (0x00010aa9) slider_set_pane_g4_copy1_ParamLimits

0x5caf,	// (0x00010aa9) slider_set_pane_g4_copy1

0x5cc7,	// (0x00010ac1) slider_set_pane_g5_copy1_ParamLimits

0x5cc7,	// (0x00010ac1) slider_set_pane_g5_copy1

0x5c9b,	// (0x00010a95) slider_set_pane_g6_copy1_ParamLimits

0x5c9b,	// (0x00010a95) slider_set_pane_g6_copy1

0x6c75,	// (0x00011a6f) slider_set_pane_g7_copy1_ParamLimits

0x6c75,	// (0x00011a6f) slider_set_pane_g7_copy1

0x6dfe,	// (0x00011bf8) bg_set_opt_pane_cp2_copy1

0xf18b,	// (0x00019f85) setting_slider_graphic_pane_g1_copy1

0xf194,	// (0x00019f8e) setting_slider_graphic_pane_t1_copy1

0xf1a4,	// (0x00019f9e) setting_slider_graphic_pane_t2_copy1

0xf1b4,	// (0x00019fae) slider_set_pane_cp_copy1

0xf1c4,	// (0x00019fbe) input_focus_pane_cp1_copy1

0xf1cd,	// (0x00019fc7) list_set_text_pane_copy1

0xf1d5,	// (0x00019fcf) setting_text_pane_g1_copy1

0x6f37,	// (0x00011d31) set_text_pane_t1_copy1

0xf1c4,	// (0x00019fbe) input_focus_pane_cp2_copy1

0xf1d5,	// (0x00019fcf) setting_code_pane_g1_copy1

0xf1de,	// (0x00019fd8) setting_code_pane_t1_copy1

0xf1ec,	// (0x00019fe6) list_set_graphic_pane_copy1

0x6dfe,	// (0x00011bf8) bg_set_opt_pane_cp4_copy1

0x887c,	// (0x00013676) list_set_graphic_pane_g1_copy1_ParamLimits

0x887c,	// (0x00013676) list_set_graphic_pane_g1_copy1

0xf1fe,	// (0x00019ff8) list_set_graphic_pane_g2_copy1

0x8894,	// (0x0001368e) list_set_graphic_pane_t1_copy1_ParamLimits

0x8894,	// (0x0001368e) list_set_graphic_pane_t1_copy1

0xbf70,	// (0x00016d6a) rs_clock_indi_pane_g1

0xf206,	// (0x0001a000) rs_clock_indi_pane_t1

0xf214,	// (0x0001a00e) rs_indi_pane

0xf21c,	// (0x0001a016) rs_indi_pane_g1

0xf225,	// (0x0001a01f) rs_indi_pane_g2

0xf22e,	// (0x0001a028) rs_indi_pane_g3

0x0002,

0xfed1,	// (0x0001accb) rs_indi_pane_g

0x8b81,	// (0x0001397b) bg_popup_preview_window_pane_cp03

0xf237,	// (0x0001a031) popup_fep_tooltip_window_t1

0xcde8,	// (0x00017be2) popup_note2_window_g2_ParamLimits

0xcde8,	// (0x00017be2) popup_note2_window_g2

0x0001,

0xfc6a,	// (0x0001aa64) popup_note2_window_g_ParamLimits

0xfc6a,	// (0x0001aa64) popup_note2_window_g

0xd3c6,	// (0x000181c0) bg_popup_sub_pane_cp11_ParamLimits

0xd3d3,	// (0x000181cd) cell_ai3_links_pane_g1_ParamLimits

0xd3ea,	// (0x000181e4) cell_ai3_links_pane_t1

0x6f37,	// (0x00011d31) set_text_pane_t1_copy1_ParamLimits

0x8a92,	// (0x0001388c) cell_graphic_popup_pane_cp2_ParamLimits

0x8a92,	// (0x0001388c) cell_graphic_popup_pane_cp2

0xf245,	// (0x0001a03f) cell_graphic_popup_pane_g1_cp2

0x74b2,	// (0x000122ac) cell_graphic_popup_pane_g2_cp2

0xf24d,	// (0x0001a047) cell_graphic_popup_pane_g3_cp2

0xf255,	// (0x0001a04f) cell_graphic_popup_pane_t2_cp2

0x74c3,	// (0x000122bd) grid_highlight_pane_cp3_cp2

0x81fc,	// (0x00012ff6) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x7ce2,	// (0x00012adc) main_tmo_pane_ParamLimits

0xd781,	// (0x0001857b) popup_tmo_big_image_note_window

0xe911,	// (0x0001970b) cell_ai5_widget_list_pane

0xe919,	// (0x00019713) cell_ai5_widget_lrg_icon_pane

0xee7c,	// (0x00019c76) tmo_note_info_pane_t1_ParamLimits

0xee91,	// (0x00019c8b) tmo_note_info_pane_t2_ParamLimits

0xeea6,	// (0x00019ca0) tmo_note_info_pane_t3_ParamLimits

0xeebb,	// (0x00019cb5) tmo_note_info_pane_t4_ParamLimits

0xeecd,	// (0x00019cc7) tmo_note_info_pane_t5_ParamLimits

0xfebf,	// (0x0001acb9) tmo_note_info_pane_t_ParamLimits

0xefeb,	// (0x00019de5) settings_container_pane_ParamLimits

0xf1bc,	// (0x00019fb6) indicator_popup_pane_cp5

0xf1bc,	// (0x00019fb6) indicator_popup_pane_cp6

0xf1ec,	// (0x00019fe6) list_set_graphic_pane_copy1_ParamLimits

0x6dea,	// (0x00011be4) bg_popup_window_pane_cp23

0xf263,	// (0x0001a05d) popup_tmo_big_image_note_window_g1

0xf26d,	// (0x0001a067) popup_tmo_big_image_note_window_t1

0xf27d,	// (0x0001a077) popup_tmo_big_image_note_window_t2

0xf28d,	// (0x0001a087) popup_tmo_big_image_note_window_t3

0x0002,

0xfed8,	// (0x0001acd2) popup_tmo_big_image_note_window_t

0xbf70,	// (0x00016d6a) cell_ai5_widget_lrg_icon_pane_g1

0xf29d,	// (0x0001a097) cell_ai5_widget_lrg_icon_pane_t1

0xf2ab,	// (0x0001a0a5) cell_ai5_widget_list_row_pane_ParamLimits

0xf2ab,	// (0x0001a0a5) cell_ai5_widget_list_row_pane

0xf2c2,	// (0x0001a0bc) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2c2,	// (0x0001a0bc) cell_ai5_widget_list_row_pane_g1

0xf2cf,	// (0x0001a0c9) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2cf,	// (0x0001a0c9) cell_ai5_widget_list_row_pane_t1

0xf300,	// (0x0001a0fa) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf300,	// (0x0001a0fa) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfedf,	// (0x0001acd9) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfedf,	// (0x0001acd9) cell_ai5_widget_list_row_pane_t

0x4a73,	// (0x0000f86d) main_fep_vtchi_ss_pane

0xf344,	// (0x0001a13e) popup_fep_char_pre_window

0xf34c,	// (0x0001a146) popup_fep_ituss_window

0xf36d,	// (0x0001a167) popup_fep_vkbss_window

0xf38c,	// (0x0001a186) grid_vkbss_keypad_pane_ParamLimits

0xf38c,	// (0x0001a186) grid_vkbss_keypad_pane

0xf39c,	// (0x0001a196) ituss_keypad_pane

0x6c97,	// (0x00011a91) aid_vkbss_key_offset_ParamLimits

0x6c97,	// (0x00011a91) aid_vkbss_key_offset

0x6ca3,	// (0x00011a9d) cell_vkbss_key_pane_ParamLimits

0x6ca3,	// (0x00011a9d) cell_vkbss_key_pane

0xf3ab,	// (0x0001a1a5) bg_cell_vkbss_key_g1_ParamLimits

0xf3ab,	// (0x0001a1a5) bg_cell_vkbss_key_g1

0xf3b7,	// (0x0001a1b1) cell_vkbss_key_3p_pane_ParamLimits

0xf3b7,	// (0x0001a1b1) cell_vkbss_key_3p_pane

0xf3d1,	// (0x0001a1cb) cell_vkbss_key_g1_ParamLimits

0xf3d1,	// (0x0001a1cb) cell_vkbss_key_g1

0xf3eb,	// (0x0001a1e5) cell_vkbss_key_t1_ParamLimits

0xf3eb,	// (0x0001a1e5) cell_vkbss_key_t1

0x6cb9,	// (0x00011ab3) cell_ituss_key_pane_ParamLimits

0x6cb9,	// (0x00011ab3) cell_ituss_key_pane

0xf416,	// (0x0001a210) bg_cell_ituss_key_g1_ParamLimits

0xf416,	// (0x0001a210) bg_cell_ituss_key_g1

0xf422,	// (0x0001a21c) cell_ituss_key_pane_g1_ParamLimits

0xf422,	// (0x0001a21c) cell_ituss_key_pane_g1

0x6cca,	// (0x00011ac4) cell_ituss_key_pane_g2_ParamLimits

0x6cca,	// (0x00011ac4) cell_ituss_key_pane_g2

0x0002,

0xfee6,	// (0x0001ace0) cell_ituss_key_pane_g_ParamLimits

0xfee6,	// (0x0001ace0) cell_ituss_key_pane_g

0x6cf6,	// (0x00011af0) cell_ituss_key_t1_ParamLimits

0x6cf6,	// (0x00011af0) cell_ituss_key_t1

0x6d30,	// (0x00011b2a) cell_ituss_key_t2_ParamLimits

0x6d30,	// (0x00011b2a) cell_ituss_key_t2

0x6d61,	// (0x00011b5b) cell_ituss_key_t3_ParamLimits

0x6d61,	// (0x00011b5b) cell_ituss_key_t3

0x6d30,	// (0x00011b2a) cell_ituss_key_t4_ParamLimits

0x6d30,	// (0x00011b2a) cell_ituss_key_t4

0x0004,

0xfeed,	// (0x0001ace7) cell_ituss_key_t_ParamLimits

0xfeed,	// (0x0001ace7) cell_ituss_key_t

0xf44e,	// (0x0001a248) cell_vkbss_key_3p_pane_g1

0xf456,	// (0x0001a250) cell_vkbss_key_3p_pane_g2

0xf45e,	// (0x0001a258) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef8,	// (0x0001acf2) cell_vkbss_key_3p_pane_g

0x4a73,	// (0x0000f86d) bg_popup_fep_char_preview_window_cp02

0x6da4,	// (0x00011b9e) popup_fep_char_pre_window_t1

0xe8a3,	// (0x0001969d) main_ai5_sk_pane

0xef47,	// (0x00019d41) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef53,	// (0x00019d4d) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc7b3,	// (0x000175ad) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef68,	// (0x00019d62) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeca,	// (0x0001acc4) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef74,	// (0x00019d6e) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x7ce2,	// (0x00012adc) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf466,	// (0x0001a260) main_ai5_sk_pane_g1

0x99b1,	// (0x000147ab) popup_query_code_window_g1

0xf362,	// (0x0001a15c) popup_fep_vkb_icf_pane

0xf376,	// (0x0001a170) popup_fep_vtchi_icf_pane

0xf46f,	// (0x0001a269) bg_icf_pane

0xf47b,	// (0x0001a275) list_vkb_icf_pane

0xf487,	// (0x0001a281) bg_icf_pane_cp01

0xf49a,	// (0x0001a294) vtchi_icf_list_pane

0xf4aa,	// (0x0001a2a4) list_vkb_icf_pane_t1_ParamLimits

0xf4aa,	// (0x0001a2a4) list_vkb_icf_pane_t1

0xf4c0,	// (0x0001a2ba) vtchi_icf_list_pane_t1_ParamLimits

0xf4c0,	// (0x0001a2ba) vtchi_icf_list_pane_t1

0xf34c,	// (0x0001a146) popup_fep_ituss_window_ParamLimits

0xf376,	// (0x0001a170) popup_fep_vtchi_icf_pane_ParamLimits

0xf39c,	// (0x0001a196) ituss_keypad_pane_ParamLimits

0x6c8b,	// (0x00011a85) ituss_sks_pane

0xf46f,	// (0x0001a269) bg_icf_pane_ParamLimits

0xf328,	// (0x0001a122) icf_edit_indi_pane_ParamLimits

0xf328,	// (0x0001a122) icf_edit_indi_pane

0xf47b,	// (0x0001a275) list_vkb_icf_pane_ParamLimits

0xf487,	// (0x0001a281) bg_icf_pane_cp01_ParamLimits

0xf337,	// (0x0001a131) icf_edit_indi_pane_cp01_ParamLimits

0xf337,	// (0x0001a131) icf_edit_indi_pane_cp01

0xf4a2,	// (0x0001a29c) vtchi_query_pane

0xc1ee,	// (0x00016fe8) icf_edit_indi_pane_g1_ParamLimits

0xc1ee,	// (0x00016fe8) icf_edit_indi_pane_g1

0xf531,	// (0x0001a32b) icf_edit_indi_pane_g2_ParamLimits

0xf531,	// (0x0001a32b) icf_edit_indi_pane_g2

0x0001,

0xff10,	// (0x0001ad0a) icf_edit_indi_pane_g_ParamLimits

0xff10,	// (0x0001ad0a) icf_edit_indi_pane_g

0xf540,	// (0x0001a33a) icf_edit_indi_pane_t1

0xf4da,	// (0x0001a2d4) bg_input_focus_pane_cp042

0x7696,	// (0x00012490) vtchi_button_pane

0xf4e3,	// (0x0001a2dd) vtchi_query_pane_t1

0xf4f1,	// (0x0001a2eb) vtchi_query_pane_t2

0xf4ff,	// (0x0001a2f9) vtchi_query_pane_t3

0x0002,

0xfeff,	// (0x0001acf9) vtchi_query_pane_t

0x4a73,	// (0x0000f86d) bg_button_pane_cp13

0xf50d,	// (0x0001a307) vtchi_button_pane_g1

0x6db3,	// (0x00011bad) ituss_sks_pane_g1

0x6dbe,	// (0x00011bb8) ituss_sks_pane_g2

0x0001,

0xff06,	// (0x0001ad00) ituss_sks_pane_g

0xf515,	// (0x0001a30f) ituss_sks_pane_t1

0xf523,	// (0x0001a31d) ituss_sks_pane_t2

0x0001,

0xff0b,	// (0x0001ad05) ituss_sks_pane_t

0xb990,	// (0x0001678a) indicator_nsta_pane_cp_g1

0xb999,	// (0x00016793) indicator_nsta_pane_cp_g2

0xb9a1,	// (0x0001679b) indicator_nsta_pane_cp_g3

0xb9a9,	// (0x000167a3) indicator_nsta_pane_cp_g4

0xb9b1,	// (0x000167ab) indicator_nsta_pane_cp_g5

0xb9b1,	// (0x000167ab) indicator_nsta_pane_cp_g6

0x0005,

0xfaa8,	// (0x0001a8a2) indicator_nsta_pane_cp_g

0xe468,	// (0x00019262) cell_graphic2_pane_t2_ParamLimits

0xe468,	// (0x00019262) cell_graphic2_pane_t2

0x0001,

0xfdc1,	// (0x0001abbb) cell_graphic2_pane_t_ParamLimits

0xfdc1,	// (0x0001abbb) cell_graphic2_pane_t

0xe495,	// (0x0001928f) cell_graphic2_control_pane_t1

0x85a0,	// (0x0001339a) signal_pane_g3_ParamLimits

0x85a0,	// (0x0001339a) signal_pane_g3

0x85b2,	// (0x000133ac) signal_pane_g4_ParamLimits

0x85b2,	// (0x000133ac) signal_pane_g4

0xf312,	// (0x0001a10c) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf312,	// (0x0001a10c) cell_ai5_widget_list_row_pane_t3

0xf43c,	// (0x0001a236) cell_ituss_key_pane_t1_ParamLimits

0xf43c,	// (0x0001a236) cell_ituss_key_pane_t1

0x95c6,	// (0x000143c0) form_field_data_wide_pane_vc_t2_ParamLimits

0x95c6,	// (0x000143c0) form_field_data_wide_pane_vc_t2

0x95da,	// (0x000143d4) form_field_data_wide_pane_vc_t3_ParamLimits

0x95da,	// (0x000143d4) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x0001a5fe) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x0001a5fe) form_field_data_wide_pane_vc_t

0xb658,	// (0x00016452) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb658,	// (0x00016452) form_field_slider_wide_pane_vc_t3

0xb736,	// (0x00016530) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb736,	// (0x00016530) form_field_popup_wide_pane_vc_t2

0xb74d,	// (0x00016547) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb74d,	// (0x00016547) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa97,	// (0x0001a891) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa97,	// (0x0001a891) form_field_popup_wide_pane_vc_t

0x6abb,	// (0x000118b5) aid_fshwr2_btn_pane_ParamLimits

0x6ac7,	// (0x000118c1) aid_fshwr2_syb_pane_ParamLimits

0x6ad3,	// (0x000118cd) aid_fshwr2_txt_pane_ParamLimits

0x630b,	// (0x00011105) fshwr2_bg_pane_ParamLimits

0x6adf,	// (0x000118d9) fshwr2_func_candi_pane_ParamLimits

0x6af4,	// (0x000118ee) fshwr2_hwr_syb_pane_ParamLimits

0x6b04,	// (0x000118fe) fshwr2_icf_pane_ParamLimits

0xb5be,	// (0x000163b8) list_double_graphic_pane_vc_g4_ParamLimits

0xb5be,	// (0x000163b8) list_double_graphic_pane_vc_g4

0x6cea,	// (0x00011ae4) cell_ituss_key_pane_g3_ParamLimits

0x6cea,	// (0x00011ae4) cell_ituss_key_pane_g3

0x6d92,	// (0x00011b8c) cell_ituss_key_t5_ParamLimits

0x6d92,	// (0x00011b8c) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Normal

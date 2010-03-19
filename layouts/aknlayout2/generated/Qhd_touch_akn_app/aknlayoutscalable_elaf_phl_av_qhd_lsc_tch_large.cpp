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

#include "aknlayoutscalable_elaf_phl_av_qhd_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0003eb6d };

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
0xbbd5,	// (0x0004a742) Screen

0xbbe1,	// (0x0004a74e) application_window_ParamLimits

0xbbe1,	// (0x0004a74e) application_window

0x2dd8,	// (0x00041945) screen_g1

0xbc19,	// (0x0004a786) area_bottom_pane_ParamLimits

0xbc19,	// (0x0004a786) area_bottom_pane

0x1165,	// (0x0003fcd2) area_top_pane_ParamLimits

0x1165,	// (0x0003fcd2) area_top_pane

0x11f9,	// (0x0003fd66) main_pane_ParamLimits

0x11f9,	// (0x0003fd66) main_pane

0x2de2,	// (0x0004194f) misc_graphics

0xd3e4,	// (0x0004bf51) battery_pane_ParamLimits

0xd3e4,	// (0x0004bf51) battery_pane

0x5a39,	// (0x000445a6) bg_status_flat_pane_g8

0x5a41,	// (0x000445ae) bg_status_flat_pane_g9

0x4ddc,	// (0x00043949) context_pane_ParamLimits

0x4ddc,	// (0x00043949) context_pane

0xd54f,	// (0x0004c0bc) navi_pane_ParamLimits

0xd54f,	// (0x0004c0bc) navi_pane

0xd5c6,	// (0x0004c133) signal_pane_ParamLimits

0xd5c6,	// (0x0004c133) signal_pane

0x0008,

0xf879,	// (0x0004e3e6) bg_status_flat_pane_g

0xd656,	// (0x0004c1c3) status_pane_g1_ParamLimits

0xd656,	// (0x0004c1c3) status_pane_g1

0xd66c,	// (0x0004c1d9) status_pane_g2_ParamLimits

0xd66c,	// (0x0004c1d9) status_pane_g2

0x4ffc,	// (0x00043b69) status_pane_g3_ParamLimits

0x4ffc,	// (0x00043b69) status_pane_g3

0x0004,

0xf7b3,	// (0x0004e320) status_pane_g_ParamLimits

0xf7b3,	// (0x0004e320) status_pane_g

0xd678,	// (0x0004c1e5) title_pane_ParamLimits

0xd678,	// (0x0004c1e5) title_pane

0xd6d9,	// (0x0004c246) uni_indicator_pane_ParamLimits

0xd6d9,	// (0x0004c246) uni_indicator_pane

0x46ab,	// (0x00043218) bg_list_pane_ParamLimits

0x46ab,	// (0x00043218) bg_list_pane

0xccc0,	// (0x0004b82d) find_pane

0xccc8,	// (0x0004b835) listscroll_app_pane_ParamLimits

0xccc8,	// (0x0004b835) listscroll_app_pane

0x46d7,	// (0x00043244) listscroll_form_pane

0xccd4,	// (0x0004b841) listscroll_gen_pane_ParamLimits

0xccd4,	// (0x0004b841) listscroll_gen_pane

0x46d7,	// (0x00043244) listscroll_set_pane

0x65d6,	// (0x00045143) main_idle_act_pane

0x4393,	// (0x00042f00) main_idle_trad_pane

0x4393,	// (0x00042f00) main_list_empty_pane

0x46f1,	// (0x0004325e) main_midp_pane

0x46fd,	// (0x0004326a) main_pane_g1_ParamLimits

0x46fd,	// (0x0004326a) main_pane_g1

0xcce8,	// (0x0004b855) popup_ai_message_window_ParamLimits

0xcce8,	// (0x0004b855) popup_ai_message_window

0xcd79,	// (0x0004b8e6) popup_fep_china_uni_window_ParamLimits

0xcd79,	// (0x0004b8e6) popup_fep_china_uni_window

0x4809,	// (0x00043376) popup_fep_japan_candidate_window_ParamLimits

0x4809,	// (0x00043376) popup_fep_japan_candidate_window

0x4829,	// (0x00043396) popup_fep_japan_predictive_window_ParamLimits

0x4829,	// (0x00043396) popup_fep_japan_predictive_window

0xcdd5,	// (0x0004b942) popup_find_window

0xcdf2,	// (0x0004b95f) popup_grid_graphic_window_ParamLimits

0xcdf2,	// (0x0004b95f) popup_grid_graphic_window

0x488e,	// (0x000433fb) popup_large_graphic_colour_window

0xce8a,	// (0x0004b9f7) popup_menu_window_ParamLimits

0xce8a,	// (0x0004b9f7) popup_menu_window

0xd044,	// (0x0004bbb1) popup_note_image_window

0xd00a,	// (0x0004bb77) popup_note_wait_window_ParamLimits

0xd00a,	// (0x0004bb77) popup_note_wait_window

0xd05c,	// (0x0004bbc9) popup_note_window_ParamLimits

0xd05c,	// (0x0004bbc9) popup_note_window

0xd102,	// (0x0004bc6f) popup_query_code_window_ParamLimits

0xd102,	// (0x0004bc6f) popup_query_code_window

0x4ad6,	// (0x00043643) popup_query_data_code_window_ParamLimits

0x4ad6,	// (0x00043643) popup_query_data_code_window

0xd13c,	// (0x0004bca9) popup_query_data_window_ParamLimits

0xd13c,	// (0x0004bca9) popup_query_data_window

0xd1b2,	// (0x0004bd1f) popup_query_sat_info_window_ParamLimits

0xd1b2,	// (0x0004bd1f) popup_query_sat_info_window

0xd249,	// (0x0004bdb6) popup_snote_single_graphic_window_ParamLimits

0xd249,	// (0x0004bdb6) popup_snote_single_graphic_window

0xd249,	// (0x0004bdb6) popup_snote_single_text_window_ParamLimits

0xd249,	// (0x0004bdb6) popup_snote_single_text_window

0x4b5d,	// (0x000436ca) popup_sub_window_general

0x4c8d,	// (0x000437fa) popup_window_general_ParamLimits

0x4c8d,	// (0x000437fa) popup_window_general

0x4ca2,	// (0x0004380f) power_save_pane

0xbdde,	// (0x0004a94b) control_pane_g1_ParamLimits

0xbdde,	// (0x0004a94b) control_pane_g1

0x19fd,	// (0x0004056a) control_pane_g2_ParamLimits

0x19fd,	// (0x0004056a) control_pane_g2

0x465c,	// (0x000431c9) control_pane_g3_ParamLimits

0x465c,	// (0x000431c9) control_pane_g3

0x0007,

0xf79b,	// (0x0004e308) control_pane_g_ParamLimits

0xf79b,	// (0x0004e308) control_pane_g

0xbe1d,	// (0x0004a98a) control_pane_t1_ParamLimits

0xbe1d,	// (0x0004a98a) control_pane_t1

0xbe7b,	// (0x0004a9e8) control_pane_t2_ParamLimits

0xbe7b,	// (0x0004a9e8) control_pane_t2

0x0002,

0xf7ac,	// (0x0004e319) control_pane_t_ParamLimits

0xf7ac,	// (0x0004e319) control_pane_t

0x457d,	// (0x000430ea) navi_navi_volume_pane_cp1

0x4586,	// (0x000430f3) status_small_icon_pane

0x458e,	// (0x000430fb) status_small_pane_g1_ParamLimits

0x458e,	// (0x000430fb) status_small_pane_g1

0x45c2,	// (0x0004312f) status_small_pane_g2_ParamLimits

0x45c2,	// (0x0004312f) status_small_pane_g2

0x45ce,	// (0x0004313b) status_small_pane_g3_ParamLimits

0x45ce,	// (0x0004313b) status_small_pane_g3

0x45da,	// (0x00043147) status_small_pane_g4_ParamLimits

0x45da,	// (0x00043147) status_small_pane_g4

0x45e6,	// (0x00043153) status_small_pane_g5_ParamLimits

0x45e6,	// (0x00043153) status_small_pane_g5

0x45f5,	// (0x00043162) status_small_pane_g6_ParamLimits

0x45f5,	// (0x00043162) status_small_pane_g6

0x0007,

0xf78a,	// (0x0004e2f7) status_small_pane_g_ParamLimits

0xf78a,	// (0x0004e2f7) status_small_pane_g

0x4625,	// (0x00043192) status_small_pane_t1

0x4648,	// (0x000431b5) status_small_wait_pane_ParamLimits

0x4648,	// (0x000431b5) status_small_wait_pane

0xcb04,	// (0x0004b671) aid_levels_signal_ParamLimits

0xcb04,	// (0x0004b671) aid_levels_signal

0xcb1c,	// (0x0004b689) signal_pane_g1_ParamLimits

0xcb1c,	// (0x0004b689) signal_pane_g1

0xcb37,	// (0x0004b6a4) signal_pane_g2_ParamLimits

0xcb37,	// (0x0004b6a4) signal_pane_g2

0x0001,

0xf71f,	// (0x0004e28c) signal_pane_g_ParamLimits

0xf71f,	// (0x0004e28c) signal_pane_g

0x3e50,	// (0x000429bd) context_pane_g1

0xc5ee,	// (0x0004b15b) title_pane_g1

0xc623,	// (0x0004b190) title_pane_t1

0x2e8a,	// (0x000419f7) title_pane_t2

0x2eb0,	// (0x00041a1d) title_pane_t3

0x0002,

0xf573,	// (0x0004e0e0) title_pane_t

0xd701,	// (0x0004c26e) aid_levels_battery_ParamLimits

0xd701,	// (0x0004c26e) aid_levels_battery

0xd71d,	// (0x0004c28a) battery_pane_g1_ParamLimits

0xd71d,	// (0x0004c28a) battery_pane_g1

0xd73a,	// (0x0004c2a7) battery_pane_g2_ParamLimits

0xd73a,	// (0x0004c2a7) battery_pane_g2

0x0001,

0xf7be,	// (0x0004e32b) battery_pane_g_ParamLimits

0xf7be,	// (0x0004e32b) battery_pane_g

0xd93f,	// (0x0004c4ac) uni_indicator_pane_g1

0xd954,	// (0x0004c4c1) uni_indicator_pane_g2

0xd969,	// (0x0004c4d6) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x0004e48e) uni_indicator_pane_g

0x4211,	// (0x00042d7e) navi_icon_pane_ParamLimits

0x4211,	// (0x00042d7e) navi_icon_pane

0x415a,	// (0x00042cc7) navi_midp_pane

0x422d,	// (0x00042d9a) navi_navi_pane

0x4237,	// (0x00042da4) navi_text_pane_ParamLimits

0x4237,	// (0x00042da4) navi_text_pane

0x2dd8,	// (0x00041945) status_small_wait_pane_g1

0x32df,	// (0x00041e4c) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x0004e489) status_small_wait_pane_g

0x609a,	// (0x00044c07) navi_navi_icon_text_pane

0x60a2,	// (0x00044c0f) navi_navi_pane_g1_ParamLimits

0x60a2,	// (0x00044c0f) navi_navi_pane_g1

0x60b4,	// (0x00044c21) navi_navi_pane_g2_ParamLimits

0x60b4,	// (0x00044c21) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x0004e457) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x0004e457) navi_navi_pane_g

0x60c6,	// (0x00044c33) navi_navi_tabs_pane

0x60cf,	// (0x00044c3c) navi_navi_text_pane

0x609a,	// (0x00044c07) navi_navi_volume_pane

0xd900,	// (0x0004c46d) navi_text_pane_t1

0xd8f4,	// (0x0004c461) navi_icon_pane_g1

0x5fb7,	// (0x00044b24) navi_navi_text_pane_t1

0xc0c8,	// (0x0004ac35) navi_navi_volume_pane_g1

0xc0d0,	// (0x0004ac3d) volume_small_pane

0xd850,	// (0x0004c3bd) navi_navi_icon_text_pane_g1

0xd858,	// (0x0004c3c5) navi_navi_icon_text_pane_t1

0x422d,	// (0x00042d9a) navi_tabs_2_long_pane

0x422d,	// (0x00042d9a) navi_tabs_2_pane

0x422d,	// (0x00042d9a) navi_tabs_3_long_pane

0x422d,	// (0x00042d9a) navi_tabs_3_pane

0x422d,	// (0x00042d9a) navi_tabs_4_pane

0xc0a8,	// (0x0004ac15) tabs_2_active_pane_ParamLimits

0xc0a8,	// (0x0004ac15) tabs_2_active_pane

0xc0b8,	// (0x0004ac25) tabs_2_passive_pane_ParamLimits

0xc0b8,	// (0x0004ac25) tabs_2_passive_pane

0xc076,	// (0x0004abe3) tabs_3_active_pane_ParamLimits

0xc076,	// (0x0004abe3) tabs_3_active_pane

0xc086,	// (0x0004abf3) tabs_3_passive_pane_ParamLimits

0xc086,	// (0x0004abf3) tabs_3_passive_pane

0xc097,	// (0x0004ac04) tabs_3_passive_pane_cp_ParamLimits

0xc097,	// (0x0004ac04) tabs_3_passive_pane_cp

0xc032,	// (0x0004ab9f) tabs_4_active_pane_ParamLimits

0xc032,	// (0x0004ab9f) tabs_4_active_pane

0xc043,	// (0x0004abb0) tabs_4_passive_pane_ParamLimits

0xc043,	// (0x0004abb0) tabs_4_passive_pane

0xc054,	// (0x0004abc1) tabs_4_passive_pane_cp_ParamLimits

0xc054,	// (0x0004abc1) tabs_4_passive_pane_cp

0xc065,	// (0x0004abd2) tabs_4_passive_pane_cp2_ParamLimits

0xc065,	// (0x0004abd2) tabs_4_passive_pane_cp2

0xc012,	// (0x0004ab7f) tabs_2_long_active_pane_ParamLimits

0xc012,	// (0x0004ab7f) tabs_2_long_active_pane

0xc022,	// (0x0004ab8f) tabs_2_long_passive_pane_ParamLimits

0xc022,	// (0x0004ab8f) tabs_2_long_passive_pane

0xbfdf,	// (0x0004ab4c) tabs_3_long_active_pane_ParamLimits

0xbfdf,	// (0x0004ab4c) tabs_3_long_active_pane

0xbff0,	// (0x0004ab5d) tabs_3_long_passive_pane_ParamLimits

0xbff0,	// (0x0004ab5d) tabs_3_long_passive_pane

0xc001,	// (0x0004ab6e) tabs_3_long_passive_pane_cp_ParamLimits

0xc001,	// (0x0004ab6e) tabs_3_long_passive_pane_cp

0x1c91,	// (0x000407fe) volume_small_pane_g1

0xbf8e,	// (0x0004aafb) volume_small_pane_g2

0xbf97,	// (0x0004ab04) volume_small_pane_g3

0xbfa0,	// (0x0004ab0d) volume_small_pane_g4

0xbfa9,	// (0x0004ab16) volume_small_pane_g5

0xbfb2,	// (0x0004ab1f) volume_small_pane_g6

0xbfbb,	// (0x0004ab28) volume_small_pane_g7

0xbfc4,	// (0x0004ab31) volume_small_pane_g8

0xbfcd,	// (0x0004ab3a) volume_small_pane_g9

0xbfd6,	// (0x0004ab43) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x0004e423) volume_small_pane_g

0x313d,	// (0x00041caa) bg_active_tab_pane_cp2_ParamLimits

0x313d,	// (0x00041caa) bg_active_tab_pane_cp2

0xc6af,	// (0x0004b21c) tabs_3_active_pane_g1

0xc6b7,	// (0x0004b224) tabs_3_active_pane_t1

0x313d,	// (0x00041caa) bg_passive_tab_pane_cp2_ParamLimits

0x313d,	// (0x00041caa) bg_passive_tab_pane_cp2

0xc6af,	// (0x0004b21c) tabs_3_passive_pane_g1

0xc6b7,	// (0x0004b224) tabs_3_passive_pane_t1

0x313d,	// (0x00041caa) bg_active_tab_pane_cp3_ParamLimits

0x313d,	// (0x00041caa) bg_active_tab_pane_cp3

0xc6c9,	// (0x0004b236) tabs_4_active_pane_g1

0xc6d1,	// (0x0004b23e) tabs_4_active_pane_t1

0x313d,	// (0x00041caa) bg_passive_tab_pane_cp3_ParamLimits

0x313d,	// (0x00041caa) bg_passive_tab_pane_cp3

0xc6c9,	// (0x0004b236) tabs_4_1_passive_pane_g1

0xc6d1,	// (0x0004b23e) tabs_4_1_passive_pane_t1

0x46f1,	// (0x0004325e) list_highlight_pane_cp2

0xd9f2,	// (0x0004c55f) list_set_pane_ParamLimits

0xd9f2,	// (0x0004c55f) list_set_pane

0xda8c,	// (0x0004c5f9) main_pane_set_t1_ParamLimits

0xda8c,	// (0x0004c5f9) main_pane_set_t1

0xdaac,	// (0x0004c619) main_pane_set_t2_ParamLimits

0xdaac,	// (0x0004c619) main_pane_set_t2

0xdac0,	// (0x0004c62d) main_pane_set_t3_ParamLimits

0xdac0,	// (0x0004c62d) main_pane_set_t3

0xdad2,	// (0x0004c63f) main_pane_set_t4_ParamLimits

0xdad2,	// (0x0004c63f) main_pane_set_t4

0x0003,

0xf986,	// (0x0004e4f3) main_pane_set_t_ParamLimits

0xf986,	// (0x0004e4f3) main_pane_set_t

0xdae4,	// (0x0004c651) setting_code_pane

0xdaee,	// (0x0004c65b) setting_slider_graphic_pane

0xdaee,	// (0x0004c65b) setting_slider_pane

0xdaee,	// (0x0004c65b) setting_text_pane

0xdaee,	// (0x0004c65b) setting_volume_pane

0x143e,	// (0x0003ffab) volume_set_pane

0x2ec2,	// (0x00041a2f) bg_set_opt_pane_cp

0x1446,	// (0x0003ffb3) setting_slider_pane_t1

0x145f,	// (0x0003ffcc) setting_slider_pane_t2

0x1479,	// (0x0003ffe6) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x0004e0e7) setting_slider_pane_t

0x1491,	// (0x0003fffe) slider_set_pane

0x2de2,	// (0x0004194f) bg_set_opt_pane_cp2

0x2f04,	// (0x00041a71) setting_slider_graphic_pane_g1

0x14a7,	// (0x00040014) setting_slider_graphic_pane_t1

0x14b7,	// (0x00040024) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x0004e0ee) setting_slider_graphic_pane_t

0x14c7,	// (0x00040034) slider_set_pane_cp

0x2de2,	// (0x0004194f) input_focus_pane_cp1

0x65bd,	// (0x0004512a) list_set_text_pane

0x2dd8,	// (0x00041945) setting_text_pane_g1

0x2de2,	// (0x0004194f) input_focus_pane_cp2

0x2dd8,	// (0x00041945) setting_code_pane_g1

0x2f0d,	// (0x00041a7a) setting_code_pane_t1

0x028e,	// (0x0003edfb) set_text_pane_t1_ParamLimits

0x028e,	// (0x0003edfb) set_text_pane_t1

0x3795,	// (0x00042302) set_opt_bg_pane_g1

0x379d,	// (0x0004230a) set_opt_bg_pane_g2

0x6597,	// (0x00045104) set_opt_bg_pane_g3

0x37ad,	// (0x0004231a) set_opt_bg_pane_g4

0x37b5,	// (0x00042322) set_opt_bg_pane_g5

0x37bd,	// (0x0004232a) set_opt_bg_pane_g6

0x65a1,	// (0x0004510e) set_opt_bg_pane_g7

0x65a9,	// (0x00045116) set_opt_bg_pane_g8

0x65b3,	// (0x00045120) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x0004e4e0) set_opt_bg_pane_g

0x658a,	// (0x000450f7) slider_set_pane_g1

0x1e59,	// (0x000409c6) slider_set_pane_g2

0x0006,

0xf964,	// (0x0004e4d1) slider_set_pane_g

0x1df5,	// (0x00040962) volume_set_pane_g1

0x1dfd,	// (0x0004096a) volume_set_pane_g2

0x1e05,	// (0x00040972) volume_set_pane_g3

0x1e0d,	// (0x0004097a) volume_set_pane_g4

0x1e15,	// (0x00040982) volume_set_pane_g5

0x1e1d,	// (0x0004098a) volume_set_pane_g6

0x1e25,	// (0x00040992) volume_set_pane_g7

0x1e2d,	// (0x0004099a) volume_set_pane_g8

0x1e35,	// (0x000409a2) volume_set_pane_g9

0x1e3d,	// (0x000409aa) volume_set_pane_g10

0x0009,

0xf93c,	// (0x0004e4a9) volume_set_pane_g

0xc6e3,	// (0x0004b250) indicator_pane_ParamLimits

0xc6e3,	// (0x0004b250) indicator_pane

0xc70b,	// (0x0004b278) main_idle_pane_g2_ParamLimits

0xc70b,	// (0x0004b278) main_idle_pane_g2

0xc743,	// (0x0004b2b0) main_pane_idle_g1_ParamLimits

0xc743,	// (0x0004b2b0) main_pane_idle_g1

0x2f5c,	// (0x00041ac9) popup_clock_digital_analogue_window_ParamLimits

0x2f5c,	// (0x00041ac9) popup_clock_digital_analogue_window

0xc76a,	// (0x0004b2d7) soft_indicator_pane_ParamLimits

0xc76a,	// (0x0004b2d7) soft_indicator_pane

0xc784,	// (0x0004b2f1) wallpaper_pane_ParamLimits

0xc784,	// (0x0004b2f1) wallpaper_pane

0x2dd8,	// (0x00041945) wallpaper_pane_g1

0xc796,	// (0x0004b303) indicator_pane_g1_ParamLimits

0xc796,	// (0x0004b303) indicator_pane_g1

0x6971,	// (0x000454de) navi_navi_icon_text_pane_srt_g1

0x2fae,	// (0x00041b1b) soft_indicator_pane_t1

0x2fc8,	// (0x00041b35) aid_ps_area_pane

0xc7ac,	// (0x0004b319) aid_ps_clock_pane

0x2fe7,	// (0x00041b54) aid_ps_indicator_pane

0x2ff3,	// (0x00041b60) indicator_ps_pane_ParamLimits

0x2ff3,	// (0x00041b60) indicator_ps_pane

0x3002,	// (0x00041b6f) power_save_pane_g1_ParamLimits

0x3002,	// (0x00041b6f) power_save_pane_g1

0x300e,	// (0x00041b7b) power_save_pane_g2_ParamLimits

0x300e,	// (0x00041b7b) power_save_pane_g2

0x1059,	// (0x0003fbc6) aid_navinavi_width_pane

0x2fc8,	// (0x00041b35) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x0004e0f3) power_save_pane_g_ParamLimits

0xf586,	// (0x0004e0f3) power_save_pane_g

0x301c,	// (0x00041b89) power_save_pane_t1_ParamLimits

0x301c,	// (0x00041b89) power_save_pane_t1

0xc7ac,	// (0x0004b319) aid_ps_clock_pane_ParamLimits

0x2fe7,	// (0x00041b54) aid_ps_indicator_pane_ParamLimits

0x302e,	// (0x00041b9b) power_save_pane_t4_ParamLimits

0x302e,	// (0x00041b9b) power_save_pane_t4

0x0001,

0xf58b,	// (0x0004e0f8) power_save_pane_t_ParamLimits

0xf58b,	// (0x0004e0f8) power_save_pane_t

0x3058,	// (0x00041bc5) power_save_t3_ParamLimits

0x3058,	// (0x00041bc5) power_save_t3

0x3043,	// (0x00041bb0) power_save_t2_ParamLimits

0x3043,	// (0x00041bb0) power_save_t2

0x306d,	// (0x00041bda) indicator_ps_pane_g1

0xc7ba,	// (0x0004b327) ai_gene_pane_ParamLimits

0xc7ba,	// (0x0004b327) ai_gene_pane

0xc7d1,	// (0x0004b33e) ai_links_pane_ParamLimits

0xc7d1,	// (0x0004b33e) ai_links_pane

0xc7e9,	// (0x0004b356) indicator_pane_cp1_ParamLimits

0xc7e9,	// (0x0004b356) indicator_pane_cp1

0xc7f8,	// (0x0004b365) main_pane_idle_g1_cp_ParamLimits

0xc7f8,	// (0x0004b365) main_pane_idle_g1_cp

0x30a6,	// (0x00041c13) popup_ai_links_title_window

0xc810,	// (0x0004b37d) soft_indicator_pane_cp1_ParamLimits

0xc810,	// (0x0004b37d) soft_indicator_pane_cp1

0x6363,	// (0x00044ed0) ai_links_pane_g1

0x636c,	// (0x00044ed9) grid_ai_links_pane

0xd936,	// (0x0004c4a3) ai_gene_pane_1

0x6351,	// (0x00044ebe) ai_gene_pane_2

0x635a,	// (0x00044ec7) list_highlight_pane_cp4

0xd912,	// (0x0004c47f) cell_ai_link_pane_ParamLimits

0xd912,	// (0x0004c47f) cell_ai_link_pane

0x6322,	// (0x00044e8f) cell_ai_link_pane_g1

0x32df,	// (0x00041e4c) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x0004e484) cell_ai_link_pane_g

0x2de2,	// (0x0004194f) grid_highlight_cp2

0x2de2,	// (0x0004194f) bg_popup_sub_pane_cp1

0x30c9,	// (0x00041c36) popup_ai_links_title_window_t1

0x6270,	// (0x00044ddd) ai_gene_pane_1_g1_ParamLimits

0x6270,	// (0x00044ddd) ai_gene_pane_1_g1

0x627c,	// (0x00044de9) ai_gene_pane_1_g2_ParamLimits

0x627c,	// (0x00044de9) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x0004e47a) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x0004e47a) ai_gene_pane_1_g

0x6289,	// (0x00044df6) ai_gene_pane_1_t1_ParamLimits

0x6289,	// (0x00044df6) ai_gene_pane_1_t1

0x62bd,	// (0x00044e2a) grid_ai_soft_ind_pane

0x625b,	// (0x00044dc8) ai_gene_pane_2_t1_ParamLimits

0x625b,	// (0x00044dc8) ai_gene_pane_2_t1

0xc824,	// (0x0004b391) main_pane_empty_t1_ParamLimits

0xc824,	// (0x0004b391) main_pane_empty_t1

0xc83c,	// (0x0004b3a9) main_pane_empty_t2_ParamLimits

0xc83c,	// (0x0004b3a9) main_pane_empty_t2

0xc851,	// (0x0004b3be) main_pane_empty_t3_ParamLimits

0xc851,	// (0x0004b3be) main_pane_empty_t3

0xc863,	// (0x0004b3d0) main_pane_empty_t4_ParamLimits

0xc863,	// (0x0004b3d0) main_pane_empty_t4

0xc875,	// (0x0004b3e2) main_pane_empty_t5_ParamLimits

0xc875,	// (0x0004b3e2) main_pane_empty_t5

0x0004,

0xf590,	// (0x0004e0fd) main_pane_empty_t_ParamLimits

0xf590,	// (0x0004e0fd) main_pane_empty_t

0x37e6,	// (0x00042353) bg_popup_window_pane_ParamLimits

0x37e6,	// (0x00042353) bg_popup_window_pane

0x5fc5,	// (0x00044b32) find_popup_pane_cp2_ParamLimits

0x5fc5,	// (0x00044b32) find_popup_pane_cp2

0x5fd1,	// (0x00044b3e) heading_pane_ParamLimits

0x5fd1,	// (0x00044b3e) heading_pane

0x2de2,	// (0x0004194f) bg_popup_sub_pane

0xd875,	// (0x0004c3e2) bg_popup_window_pane_g1_ParamLimits

0xd875,	// (0x0004c3e2) bg_popup_window_pane_g1

0xd884,	// (0x0004c3f1) bg_popup_window_pane_g2_ParamLimits

0xd884,	// (0x0004c3f1) bg_popup_window_pane_g2

0xd890,	// (0x0004c3fd) bg_popup_window_pane_g3_ParamLimits

0xd890,	// (0x0004c3fd) bg_popup_window_pane_g3

0xd89c,	// (0x0004c409) bg_popup_window_pane_g4_ParamLimits

0xd89c,	// (0x0004c409) bg_popup_window_pane_g4

0xd8ab,	// (0x0004c418) bg_popup_window_pane_g5_ParamLimits

0xd8ab,	// (0x0004c418) bg_popup_window_pane_g5

0xd8bb,	// (0x0004c428) bg_popup_window_pane_g6_ParamLimits

0xd8bb,	// (0x0004c428) bg_popup_window_pane_g6

0xd8c7,	// (0x0004c434) bg_popup_window_pane_g7_ParamLimits

0xd8c7,	// (0x0004c434) bg_popup_window_pane_g7

0xd8d6,	// (0x0004c443) bg_popup_window_pane_g8_ParamLimits

0xd8d6,	// (0x0004c443) bg_popup_window_pane_g8

0xd8e5,	// (0x0004c452) bg_popup_window_pane_g9_ParamLimits

0xd8e5,	// (0x0004c452) bg_popup_window_pane_g9

0x5fab,	// (0x00044b18) bg_popup_window_pane_g10_ParamLimits

0x5fab,	// (0x00044b18) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x0004e442) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x0004e442) bg_popup_window_pane_g

0x5ed4,	// (0x00044a41) bg_popup_heading_pane_ParamLimits

0x5ed4,	// (0x00044a41) bg_popup_heading_pane

0x1f85,	// (0x00040af2) tabs_4_passive_pane_cp_srt_ParamLimits

0x1f85,	// (0x00040af2) tabs_4_passive_pane_cp_srt

0x1f97,	// (0x00040b04) tabs_4_passive_pane_srt_ParamLimits

0x5ee8,	// (0x00044a55) heading_pane_g2

0x1f97,	// (0x00040b04) tabs_4_passive_pane_srt

0x5277,	// (0x00043de4) bg_passive_tab_pane_cp3_srt_ParamLimits

0x5277,	// (0x00043de4) bg_passive_tab_pane_cp3_srt

0x5ef0,	// (0x00044a5d) heading_pane_t1_ParamLimits

0x5ef0,	// (0x00044a5d) heading_pane_t1

0x5f07,	// (0x00044a74) heading_pane_t2_ParamLimits

0x5f07,	// (0x00044a74) heading_pane_t2

0x0001,

0xf8d0,	// (0x0004e43d) heading_pane_t_ParamLimits

0xf8d0,	// (0x0004e43d) heading_pane_t

0x5a01,	// (0x0004456e) bg_popup_heading_pane_g1

0x5ab0,	// (0x0004461d) bg_popup_heading_pane_g2

0x5aba,	// (0x00044627) bg_popup_heading_pane_g3

0x5ac4,	// (0x00044631) bg_popup_heading_pane_g4

0x5ace,	// (0x0004463b) bg_popup_heading_pane_g5

0x5ad8,	// (0x00044645) bg_popup_heading_pane_g6

0x5ae0,	// (0x0004464d) bg_popup_heading_pane_g7

0x5ae8,	// (0x00044655) bg_popup_heading_pane_g8

0x5af2,	// (0x0004465f) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x0004e3f9) bg_popup_heading_pane_g

0x5187,	// (0x00043cf4) bg_popup_sub_pane_g1

0x518f,	// (0x00043cfc) bg_popup_sub_pane_g2

0x5197,	// (0x00043d04) bg_popup_sub_pane_g3

0x519f,	// (0x00043d0c) bg_popup_sub_pane_g4

0x51a7,	// (0x00043d14) bg_popup_sub_pane_g5

0x51af,	// (0x00043d1c) bg_popup_sub_pane_g6

0x51b7,	// (0x00043d24) bg_popup_sub_pane_g7

0x51bf,	// (0x00043d2c) bg_popup_sub_pane_g8

0x51c7,	// (0x00043d34) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x0004e3d3) bg_popup_sub_pane_g

0x313d,	// (0x00041caa) bg_popup_window_pane_cp5_ParamLimits

0x313d,	// (0x00041caa) bg_popup_window_pane_cp5

0x3159,	// (0x00041cc6) popup_note_window_g1_ParamLimits

0x3159,	// (0x00041cc6) popup_note_window_g1

0x3165,	// (0x00041cd2) popup_note_window_t1_ParamLimits

0x3165,	// (0x00041cd2) popup_note_window_t1

0x317b,	// (0x00041ce8) popup_note_window_t2_ParamLimits

0x317b,	// (0x00041ce8) popup_note_window_t2

0x3191,	// (0x00041cfe) popup_note_window_t3_ParamLimits

0x3191,	// (0x00041cfe) popup_note_window_t3

0x31a7,	// (0x00041d14) popup_note_window_t4_ParamLimits

0x31a7,	// (0x00041d14) popup_note_window_t4

0x31cf,	// (0x00041d3c) popup_note_window_t5_ParamLimits

0x31cf,	// (0x00041d3c) popup_note_window_t5

0x0004,

0xf59b,	// (0x0004e108) popup_note_window_t_ParamLimits

0xf59b,	// (0x0004e108) popup_note_window_t

0x31f3,	// (0x00041d60) bg_popup_window_pane_cp6_ParamLimits

0x31f3,	// (0x00041d60) bg_popup_window_pane_cp6

0x597d,	// (0x000444ea) popup_note_image_window_g1_ParamLimits

0x597d,	// (0x000444ea) popup_note_image_window_g1

0x5989,	// (0x000444f6) popup_note_image_window_g2_ParamLimits

0x5989,	// (0x000444f6) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x0004e3c7) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x0004e3c7) popup_note_image_window_g

0x59a2,	// (0x0004450f) popup_note_image_window_t1_ParamLimits

0x59a2,	// (0x0004450f) popup_note_image_window_t1

0x59bb,	// (0x00044528) popup_note_image_window_t2_ParamLimits

0x59bb,	// (0x00044528) popup_note_image_window_t2

0x59d4,	// (0x00044541) popup_note_image_window_t3_ParamLimits

0x59d4,	// (0x00044541) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x0004e3cc) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x0004e3cc) popup_note_image_window_t

0x583e,	// (0x000443ab) bg_popup_window_pane_cp7_ParamLimits

0x583e,	// (0x000443ab) bg_popup_window_pane_cp7

0x586e,	// (0x000443db) popup_note_wait_window_g1_ParamLimits

0x586e,	// (0x000443db) popup_note_wait_window_g1

0x587a,	// (0x000443e7) popup_note_wait_window_g2_ParamLimits

0x587a,	// (0x000443e7) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x0004e3b5) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x0004e3b5) popup_note_wait_window_g

0x5892,	// (0x000443ff) popup_note_wait_window_t1_ParamLimits

0x5892,	// (0x000443ff) popup_note_wait_window_t1

0x58b9,	// (0x00044426) popup_note_wait_window_t2_ParamLimits

0x58b9,	// (0x00044426) popup_note_wait_window_t2

0x58d6,	// (0x00044443) popup_note_wait_window_t3_ParamLimits

0x58d6,	// (0x00044443) popup_note_wait_window_t3

0x58e9,	// (0x00044456) popup_note_wait_window_t4_ParamLimits

0x58e9,	// (0x00044456) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x0004e3bc) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x0004e3bc) popup_note_wait_window_t

0x590e,	// (0x0004447b) wait_bar_pane_ParamLimits

0x590e,	// (0x0004447b) wait_bar_pane

0x2de2,	// (0x0004194f) wait_anim_pane

0x2de2,	// (0x0004194f) wait_border_pane

0x2dd8,	// (0x00041945) wait_anim_pane_g1

0x2dd8,	// (0x00041945) wait_anim_pane_g2

0x0001,

0xf71a,	// (0x0004e287) wait_anim_pane_g

0x57e2,	// (0x0004434f) wait_border_pane_g1

0x57ed,	// (0x0004435a) wait_border_pane_g2

0x57f6,	// (0x00044363) wait_border_pane_g3

0x0002,

0xf841,	// (0x0004e3ae) wait_border_pane_g

0x5641,	// (0x000441ae) bg_popup_window_pane_cp16_ParamLimits

0x5641,	// (0x000441ae) bg_popup_window_pane_cp16

0x5741,	// (0x000442ae) indicator_popup_pane_cp4_ParamLimits

0x5741,	// (0x000442ae) indicator_popup_pane_cp4

0x5755,	// (0x000442c2) popup_query_data_window_t1_ParamLimits

0x5755,	// (0x000442c2) popup_query_data_window_t1

0x5767,	// (0x000442d4) popup_query_data_window_t2_ParamLimits

0x5767,	// (0x000442d4) popup_query_data_window_t2

0x5780,	// (0x000442ed) popup_query_data_window_t3_ParamLimits

0x5780,	// (0x000442ed) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x0004e3a7) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x0004e3a7) popup_query_data_window_t

0x57a6,	// (0x00044313) query_popup_data_pane_ParamLimits

0x57a6,	// (0x00044313) query_popup_data_pane

0x57ba,	// (0x00044327) query_popup_data_pane_cp1_ParamLimits

0x57ba,	// (0x00044327) query_popup_data_pane_cp1

0x5641,	// (0x000441ae) bg_popup_window_pane_cp10_ParamLimits

0x5641,	// (0x000441ae) bg_popup_window_pane_cp10

0x5673,	// (0x000441e0) indicator_popup_pane_ParamLimits

0x5673,	// (0x000441e0) indicator_popup_pane

0x5695,	// (0x00044202) popup_query_code_window_t1_ParamLimits

0x5695,	// (0x00044202) popup_query_code_window_t1

0x56af,	// (0x0004421c) popup_query_code_window_t2_ParamLimits

0x56af,	// (0x0004421c) popup_query_code_window_t2

0x56f8,	// (0x00044265) popup_query_code_window_t3_ParamLimits

0x56f8,	// (0x00044265) popup_query_code_window_t3

0x0002,

0xf833,	// (0x0004e3a0) popup_query_code_window_t_ParamLimits

0xf833,	// (0x0004e3a0) popup_query_code_window_t

0x5727,	// (0x00044294) query_popup_pane_ParamLimits

0x5727,	// (0x00044294) query_popup_pane

0x31f3,	// (0x00041d60) bg_popup_window_pane_cp15_ParamLimits

0x31f3,	// (0x00041d60) bg_popup_window_pane_cp15

0x3211,	// (0x00041d7e) indicator_popup_pane_cp1_ParamLimits

0x3211,	// (0x00041d7e) indicator_popup_pane_cp1

0x3224,	// (0x00041d91) indicator_popup_pane_cp2_ParamLimits

0x3224,	// (0x00041d91) indicator_popup_pane_cp2

0x3237,	// (0x00041da4) popup_query_data_code_window_g1_ParamLimits

0x3237,	// (0x00041da4) popup_query_data_code_window_g1

0x324a,	// (0x00041db7) popup_query_data_code_window_t1_ParamLimits

0x324a,	// (0x00041db7) popup_query_data_code_window_t1

0x325c,	// (0x00041dc9) popup_query_data_code_window_t2_ParamLimits

0x325c,	// (0x00041dc9) popup_query_data_code_window_t2

0x326e,	// (0x00041ddb) popup_query_data_code_window_t3_ParamLimits

0x326e,	// (0x00041ddb) popup_query_data_code_window_t3

0x3284,	// (0x00041df1) popup_query_data_code_window_t4_ParamLimits

0x3284,	// (0x00041df1) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x0004e113) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x0004e113) popup_query_data_code_window_t

0x1bae,	// (0x0004071b) list_single_midp_graphic_pane_g3

0x329c,	// (0x00041e09) query_popup_data_pane_cp2_ParamLimits

0x32af,	// (0x00041e1c) query_popup_pane_cp2_ParamLimits

0x32af,	// (0x00041e1c) query_popup_pane_cp2

0x2de2,	// (0x0004194f) bg_popup_window_pane_cp11

0x5639,	// (0x000441a6) heading_pane_cp5

0x3397,	// (0x00041f04) listscroll_popup_info_pane

0x2de2,	// (0x0004194f) input_focus_pane_cp3

0x32c2,	// (0x00041e2f) query_popup_pane_t1

0x32d0,	// (0x00041e3d) list_popup_info_pane_ParamLimits

0x32d0,	// (0x00041e3d) list_popup_info_pane

0x32df,	// (0x00041e4c) listscroll_popup_info_pane_g1

0x32e7,	// (0x00041e54) scroll_pane_cp7

0x32f1,	// (0x00041e5e) popup_info_list_pane_t1_ParamLimits

0x32f1,	// (0x00041e5e) popup_info_list_pane_t1

0x330b,	// (0x00041e78) popup_info_list_pane_t2_ParamLimits

0x330b,	// (0x00041e78) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x0004e11c) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x0004e11c) popup_info_list_pane_t

0x2de2,	// (0x0004194f) bg_popup_window_pane_cp12

0x698b,	// (0x000454f8) find_popup_pane

0x2ec2,	// (0x00041a2f) bg_popup_window_pane_cp3

0x3325,	// (0x00041e92) heading_pane_cp3

0x3331,	// (0x00041e9e) listscroll_popup_graphic_pane

0x2de2,	// (0x0004194f) bg_popup_window_pane_cp4

0xc8d7,	// (0x0004b444) heading_pane_cp4

0x3397,	// (0x00041f04) listscroll_popup_colour_pane

0xc8df,	// (0x0004b44c) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xc8df,	// (0x0004b44c) cell_large_graphic_colour_none_popup_pane

0xc8f3,	// (0x0004b460) grid_large_graphic_colour_popup_pane_ParamLimits

0xc8f3,	// (0x0004b460) grid_large_graphic_colour_popup_pane

0xc917,	// (0x0004b484) listscroll_popup_colour_pane_g1_ParamLimits

0xc917,	// (0x0004b484) listscroll_popup_colour_pane_g1

0xc92e,	// (0x0004b49b) listscroll_popup_colour_pane_g2_ParamLimits

0xc92e,	// (0x0004b49b) listscroll_popup_colour_pane_g2

0xc945,	// (0x0004b4b2) listscroll_popup_colour_pane_g3_ParamLimits

0xc945,	// (0x0004b4b2) listscroll_popup_colour_pane_g3

0xc955,	// (0x0004b4c2) listscroll_popup_colour_pane_g4_ParamLimits

0xc955,	// (0x0004b4c2) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x0004e121) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x0004e121) listscroll_popup_colour_pane_g

0x3431,	// (0x00041f9e) scroll_pane_cp6_ParamLimits

0x3431,	// (0x00041f9e) scroll_pane_cp6

0xc965,	// (0x0004b4d2) cell_large_graphic_colour_popup_pane_ParamLimits

0xc965,	// (0x0004b4d2) cell_large_graphic_colour_popup_pane

0x3462,	// (0x00041fcf) cell_large_graphic_colour_none_popup_pane_t1

0x2de2,	// (0x0004194f) grid_highlight_pane_cp5

0x3471,	// (0x00041fde) cell_large_graphic_colour_popup_pane_g1

0x3479,	// (0x00041fe6) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x0004e12a) cell_large_graphic_colour_popup_pane_g

0x3481,	// (0x00041fee) cell_large_graphic_colour_popup_pane_g2_copy1

0x348a,	// (0x00041ff7) grid_highlight_pane_cp4

0x3492,	// (0x00041fff) bg_popup_window_pane_cp8_ParamLimits

0x3492,	// (0x00041fff) bg_popup_window_pane_cp8

0x34ad,	// (0x0004201a) popup_snote_single_text_window_g1_ParamLimits

0x34ad,	// (0x0004201a) popup_snote_single_text_window_g1

0x34bf,	// (0x0004202c) popup_snote_single_text_window_t1_ParamLimits

0x34bf,	// (0x0004202c) popup_snote_single_text_window_t1

0x34d2,	// (0x0004203f) popup_snote_single_text_window_t2_ParamLimits

0x34d2,	// (0x0004203f) popup_snote_single_text_window_t2

0x34e5,	// (0x00042052) popup_snote_single_text_window_t3_ParamLimits

0x34e5,	// (0x00042052) popup_snote_single_text_window_t3

0x351e,	// (0x0004208b) popup_snote_single_text_window_t4_ParamLimits

0x351e,	// (0x0004208b) popup_snote_single_text_window_t4

0x3552,	// (0x000420bf) popup_snote_single_text_window_t5_ParamLimits

0x3552,	// (0x000420bf) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x0004e12f) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x0004e12f) popup_snote_single_text_window_t

0x3581,	// (0x000420ee) bg_popup_window_pane_cp9_ParamLimits

0x3581,	// (0x000420ee) bg_popup_window_pane_cp9

0x34ad,	// (0x0004201a) popup_snote_single_graphic_window_g1_ParamLimits

0x34ad,	// (0x0004201a) popup_snote_single_graphic_window_g1

0x358f,	// (0x000420fc) popup_snote_single_graphic_window_g2_ParamLimits

0x358f,	// (0x000420fc) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x0004e13a) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x0004e13a) popup_snote_single_graphic_window_g

0x359b,	// (0x00042108) popup_snote_single_graphic_window_t1_ParamLimits

0x359b,	// (0x00042108) popup_snote_single_graphic_window_t1

0x35ae,	// (0x0004211b) popup_snote_single_graphic_window_t2_ParamLimits

0x35ae,	// (0x0004211b) popup_snote_single_graphic_window_t2

0x35c1,	// (0x0004212e) popup_snote_single_graphic_window_t3_ParamLimits

0x35c1,	// (0x0004212e) popup_snote_single_graphic_window_t3

0x35fa,	// (0x00042167) popup_snote_single_graphic_window_t4_ParamLimits

0x35fa,	// (0x00042167) popup_snote_single_graphic_window_t4

0x362e,	// (0x0004219b) popup_snote_single_graphic_window_t5_ParamLimits

0x362e,	// (0x0004219b) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x0004e13f) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x0004e13f) popup_snote_single_graphic_window_t

0x68cf,	// (0x0004543c) grid_graphic_popup_pane_ParamLimits

0x68cf,	// (0x0004543c) grid_graphic_popup_pane

0x68f7,	// (0x00045464) listscroll_popup_graphic_pane_g1_ParamLimits

0x68f7,	// (0x00045464) listscroll_popup_graphic_pane_g1

0xdc22,	// (0x0004c78f) listscroll_popup_graphic_pane_g2_ParamLimits

0xdc22,	// (0x0004c78f) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x0004e51d) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x0004e51d) listscroll_popup_graphic_pane_g

0x691f,	// (0x0004548c) scroll_pane_cp5

0xdbe6,	// (0x0004c753) cell_graphic_popup_pane_ParamLimits

0xdbe6,	// (0x0004c753) cell_graphic_popup_pane

0x6859,	// (0x000453c6) cell_graphic_popup_pane_g1

0x6861,	// (0x000453ce) cell_graphic_popup_pane_g2

0x3481,	// (0x00041fee) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x0004e516) cell_graphic_popup_pane_g

0x686a,	// (0x000453d7) cell_graphic_popup_pane_t2

0x348a,	// (0x00041ff7) grid_highlight_pane_cp3

0x366f,	// (0x000421dc) list_gen_pane_ParamLimits

0x366f,	// (0x000421dc) list_gen_pane

0x36a1,	// (0x0004220e) scroll_pane

0xdb79,	// (0x0004c6e6) bg_list_pane_g1_ParamLimits

0xdb79,	// (0x0004c6e6) bg_list_pane_g1

0x67d6,	// (0x00045343) bg_list_pane_g2_ParamLimits

0x67d6,	// (0x00045343) bg_list_pane_g2

0x67e9,	// (0x00045356) bg_list_pane_g3_ParamLimits

0x67e9,	// (0x00045356) bg_list_pane_g3

0x67fb,	// (0x00045368) bg_list_pane_g4_ParamLimits

0x67fb,	// (0x00045368) bg_list_pane_g4

0xdb94,	// (0x0004c701) bg_list_pane_g5_ParamLimits

0xdb94,	// (0x0004c701) bg_list_pane_g5

0x0004,

0xf99e,	// (0x0004e50b) bg_list_pane_g_ParamLimits

0xf99e,	// (0x0004e50b) bg_list_pane_g

0xba8a,	// (0x0004a5f7) list_double2_graphic_large_graphic_pane_ParamLimits

0xba8a,	// (0x0004a5f7) list_double2_graphic_large_graphic_pane

0xba8a,	// (0x0004a5f7) list_double2_graphic_pane_ParamLimits

0xba8a,	// (0x0004a5f7) list_double2_graphic_pane

0xba8a,	// (0x0004a5f7) list_double2_large_graphic_pane_ParamLimits

0xba8a,	// (0x0004a5f7) list_double2_large_graphic_pane

0xba8a,	// (0x0004a5f7) list_double2_pane_ParamLimits

0xba8a,	// (0x0004a5f7) list_double2_pane

0xba8a,	// (0x0004a5f7) list_double_graphic_heading_pane_ParamLimits

0xba8a,	// (0x0004a5f7) list_double_graphic_heading_pane

0xba8a,	// (0x0004a5f7) list_double_graphic_pane_ParamLimits

0xba8a,	// (0x0004a5f7) list_double_graphic_pane

0xba8a,	// (0x0004a5f7) list_double_heading_pane_ParamLimits

0xba8a,	// (0x0004a5f7) list_double_heading_pane

0xba8a,	// (0x0004a5f7) list_double_large_graphic_pane_ParamLimits

0xba8a,	// (0x0004a5f7) list_double_large_graphic_pane

0xba8a,	// (0x0004a5f7) list_double_number_pane_ParamLimits

0xba8a,	// (0x0004a5f7) list_double_number_pane

0xba8a,	// (0x0004a5f7) list_double_pane_ParamLimits

0xba8a,	// (0x0004a5f7) list_double_pane

0xba8a,	// (0x0004a5f7) list_double_time_pane_ParamLimits

0xba8a,	// (0x0004a5f7) list_double_time_pane

0xba8a,	// (0x0004a5f7) list_setting_number_pane_ParamLimits

0xba8a,	// (0x0004a5f7) list_setting_number_pane

0xba8a,	// (0x0004a5f7) list_setting_pane_ParamLimits

0xba8a,	// (0x0004a5f7) list_setting_pane

0xdb30,	// (0x0004c69d) list_single_2graphic_pane_ParamLimits

0xdb30,	// (0x0004c69d) list_single_2graphic_pane

0xdb30,	// (0x0004c69d) list_single_graphic_heading_pane_ParamLimits

0xdb30,	// (0x0004c69d) list_single_graphic_heading_pane

0xdb30,	// (0x0004c69d) list_single_graphic_pane_ParamLimits

0xdb30,	// (0x0004c69d) list_single_graphic_pane

0xdb30,	// (0x0004c69d) list_single_heading_pane_ParamLimits

0xdb30,	// (0x0004c69d) list_single_heading_pane

0xdb67,	// (0x0004c6d4) list_single_large_graphic_pane_ParamLimits

0xdb67,	// (0x0004c6d4) list_single_large_graphic_pane

0xdb30,	// (0x0004c69d) list_single_number_heading_pane_ParamLimits

0xdb30,	// (0x0004c69d) list_single_number_heading_pane

0xdb30,	// (0x0004c69d) list_single_number_pane_ParamLimits

0xdb30,	// (0x0004c69d) list_single_number_pane

0xdb30,	// (0x0004c69d) list_single_pane_ParamLimits

0xdb30,	// (0x0004c69d) list_single_pane

0x2de2,	// (0x0004194f) list_highlight_pane_cp1

0x579a,	// (0x00044307) list_single_pane_g1_ParamLimits

0x579a,	// (0x00044307) list_single_pane_g1

0x1b7d,	// (0x000406ea) list_single_pane_g2_ParamLimits

0x1b7d,	// (0x000406ea) list_single_pane_g2

0x0001,

0xf5ee,	// (0x0004e15b) list_single_pane_g_ParamLimits

0xf5ee,	// (0x0004e15b) list_single_pane_g

0x0c2d,	// (0x0003f79a) list_single_pane_t1_ParamLimits

0x0c2d,	// (0x0003f79a) list_single_pane_t1

0x579a,	// (0x00044307) list_single_number_pane_g1_ParamLimits

0x579a,	// (0x00044307) list_single_number_pane_g1

0x1b7d,	// (0x000406ea) list_single_number_pane_g2_ParamLimits

0x1b7d,	// (0x000406ea) list_single_number_pane_g2

0x0001,

0xf5ee,	// (0x0004e15b) list_single_number_pane_g_ParamLimits

0xf5ee,	// (0x0004e15b) list_single_number_pane_g

0x0ac4,	// (0x0003f631) list_single_number_pane_t1_ParamLimits

0x0ac4,	// (0x0003f631) list_single_number_pane_t1

0xba4c,	// (0x0004a5b9) list_single_number_pane_t2_ParamLimits

0xba4c,	// (0x0004a5b9) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x0004e4cc) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x0004e4cc) list_single_number_pane_t

0xb4ae,	// (0x0004a01b) list_single_graphic_pane_g1_ParamLimits

0xb4ae,	// (0x0004a01b) list_single_graphic_pane_g1

0x579a,	// (0x00044307) list_single_graphic_pane_g2_ParamLimits

0x579a,	// (0x00044307) list_single_graphic_pane_g2

0x1b7d,	// (0x000406ea) list_single_graphic_pane_g3_ParamLimits

0x1b7d,	// (0x000406ea) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x0004e14a) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x0004e14a) list_single_graphic_pane_g

0xb4ba,	// (0x0004a027) list_single_graphic_pane_t1_ParamLimits

0xb4ba,	// (0x0004a027) list_single_graphic_pane_t1

0xb4d0,	// (0x0004a03d) list_single_heading_pane_g1_ParamLimits

0xb4d0,	// (0x0004a03d) list_single_heading_pane_g1

0x1b7d,	// (0x000406ea) list_single_heading_pane_g2_ParamLimits

0x1b7d,	// (0x000406ea) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x0004e151) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x0004e151) list_single_heading_pane_g

0xb4e3,	// (0x0004a050) list_single_heading_pane_t1_ParamLimits

0xb4e3,	// (0x0004a050) list_single_heading_pane_t1

0xbd92,	// (0x0004a8ff) list_single_heading_pane_t2_ParamLimits

0xbd92,	// (0x0004a8ff) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x0004e156) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x0004e156) list_single_heading_pane_t

0x579a,	// (0x00044307) list_single_number_heading_pane_g1_ParamLimits

0x579a,	// (0x00044307) list_single_number_heading_pane_g1

0x1b7d,	// (0x000406ea) list_single_number_heading_pane_g2_ParamLimits

0x1b7d,	// (0x000406ea) list_single_number_heading_pane_g2

0x0001,

0xf5ee,	// (0x0004e15b) list_single_number_heading_pane_g_ParamLimits

0xf5ee,	// (0x0004e15b) list_single_number_heading_pane_g

0xb4f9,	// (0x0004a066) list_single_number_heading_pane_t1_ParamLimits

0xb4f9,	// (0x0004a066) list_single_number_heading_pane_t1

0xb50f,	// (0x0004a07c) list_single_number_heading_pane_t2_ParamLimits

0xb50f,	// (0x0004a07c) list_single_number_heading_pane_t2

0x0c07,	// (0x0003f774) list_single_number_heading_pane_t3_ParamLimits

0x0c07,	// (0x0003f774) list_single_number_heading_pane_t3

0x0002,

0xf5f3,	// (0x0004e160) list_single_number_heading_pane_t_ParamLimits

0xf5f3,	// (0x0004e160) list_single_number_heading_pane_t

0xb521,	// (0x0004a08e) list_single_graphic_heading_pane_g1_ParamLimits

0xb521,	// (0x0004a08e) list_single_graphic_heading_pane_g1

0xbda4,	// (0x0004a911) list_single_graphic_heading_pane_g4_ParamLimits

0xbda4,	// (0x0004a911) list_single_graphic_heading_pane_g4

0x1b7d,	// (0x000406ea) list_single_graphic_heading_pane_g5_ParamLimits

0x1b7d,	// (0x000406ea) list_single_graphic_heading_pane_g5

0x0002,

0xf5fa,	// (0x0004e167) list_single_graphic_heading_pane_g_ParamLimits

0xf5fa,	// (0x0004e167) list_single_graphic_heading_pane_g

0xb4f9,	// (0x0004a066) list_single_graphic_heading_pane_t1_ParamLimits

0xb4f9,	// (0x0004a066) list_single_graphic_heading_pane_t1

0xb537,	// (0x0004a0a4) list_single_graphic_heading_pane_t2_ParamLimits

0xb537,	// (0x0004a0a4) list_single_graphic_heading_pane_t2

0x0001,

0xf601,	// (0x0004e16e) list_single_graphic_heading_pane_t_ParamLimits

0xf601,	// (0x0004e16e) list_single_graphic_heading_pane_t

0x202a,	// (0x00040b97) list_single_large_graphic_pane_g1_ParamLimits

0x202a,	// (0x00040b97) list_single_large_graphic_pane_g1

0x2036,	// (0x00040ba3) list_single_large_graphic_pane_g2_ParamLimits

0x2036,	// (0x00040ba3) list_single_large_graphic_pane_g2

0x2042,	// (0x00040baf) list_single_large_graphic_pane_g3_ParamLimits

0x2042,	// (0x00040baf) list_single_large_graphic_pane_g3

0x0002,

0xf606,	// (0x0004e173) list_single_large_graphic_pane_g_ParamLimits

0xf606,	// (0x0004e173) list_single_large_graphic_pane_g

0x57ed,	// (0x0004435a) wait_border_pane_g2_copy1

0xbdb5,	// (0x0004a922) list_single_large_graphic_pane_g4_cp2

0x0c43,	// (0x0003f7b0) list_single_large_graphic_pane_t1_ParamLimits

0x0c43,	// (0x0003f7b0) list_single_large_graphic_pane_t1

0x579a,	// (0x00044307) list_double_pane_g1_ParamLimits

0x579a,	// (0x00044307) list_double_pane_g1

0x1b7d,	// (0x000406ea) list_double_pane_g2_ParamLimits

0x1b7d,	// (0x000406ea) list_double_pane_g2

0x0001,

0xf5ee,	// (0x0004e15b) list_double_pane_g_ParamLimits

0xf5ee,	// (0x0004e15b) list_double_pane_g

0x0c2d,	// (0x0003f79a) list_double_pane_t1_ParamLimits

0x0c2d,	// (0x0003f79a) list_double_pane_t1

0xb54d,	// (0x0004a0ba) list_double_pane_t2_ParamLimits

0xb54d,	// (0x0004a0ba) list_double_pane_t2

0x0001,

0xf60d,	// (0x0004e17a) list_double_pane_t_ParamLimits

0xf60d,	// (0x0004e17a) list_double_pane_t

0xb55f,	// (0x0004a0cc) list_double2_pane_g1_ParamLimits

0xb55f,	// (0x0004a0cc) list_double2_pane_g1

0x0a64,	// (0x0003f5d1) list_double2_pane_g2_ParamLimits

0x0a64,	// (0x0003f5d1) list_double2_pane_g2

0x0001,

0xf612,	// (0x0004e17f) list_double2_pane_g_ParamLimits

0xf612,	// (0x0004e17f) list_double2_pane_g

0xb570,	// (0x0004a0dd) list_double2_pane_t1_ParamLimits

0xb570,	// (0x0004a0dd) list_double2_pane_t1

0xb586,	// (0x0004a0f3) list_double2_pane_t2_ParamLimits

0xb586,	// (0x0004a0f3) list_double2_pane_t2

0x0001,

0xf617,	// (0x0004e184) list_double2_pane_t_ParamLimits

0xf617,	// (0x0004e184) list_double2_pane_t

0x579a,	// (0x00044307) list_double_number_pane_g1_ParamLimits

0x579a,	// (0x00044307) list_double_number_pane_g1

0x1b7d,	// (0x000406ea) list_double_number_pane_g2_ParamLimits

0x1b7d,	// (0x000406ea) list_double_number_pane_g2

0x0001,

0xf5ee,	// (0x0004e15b) list_double_number_pane_g_ParamLimits

0xf5ee,	// (0x0004e15b) list_double_number_pane_g

0xb598,	// (0x0004a105) list_double_number_pane_t1_ParamLimits

0xb598,	// (0x0004a105) list_double_number_pane_t1

0x0ac4,	// (0x0003f631) list_double_number_pane_t2_ParamLimits

0x0ac4,	// (0x0003f631) list_double_number_pane_t2

0xb5aa,	// (0x0004a117) list_double_number_pane_t3_ParamLimits

0xb5aa,	// (0x0004a117) list_double_number_pane_t3

0x0002,

0xf61c,	// (0x0004e189) list_double_number_pane_t_ParamLimits

0xf61c,	// (0x0004e189) list_double_number_pane_t

0x0ab8,	// (0x0003f625) list_double_graphic_pane_g1_ParamLimits

0x0ab8,	// (0x0003f625) list_double_graphic_pane_g1

0x2081,	// (0x00040bee) list_double_graphic_pane_g2_ParamLimits

0x2081,	// (0x00040bee) list_double_graphic_pane_g2

0x2090,	// (0x00040bfd) list_double_graphic_pane_g3_ParamLimits

0x2090,	// (0x00040bfd) list_double_graphic_pane_g3

0x0003,

0xf623,	// (0x0004e190) list_double_graphic_pane_g_ParamLimits

0xf623,	// (0x0004e190) list_double_graphic_pane_g

0xb4ba,	// (0x0004a027) list_double_graphic_pane_t1_ParamLimits

0xb4ba,	// (0x0004a027) list_double_graphic_pane_t1

0xb5c8,	// (0x0004a135) list_double_graphic_pane_t2_ParamLimits

0xb5c8,	// (0x0004a135) list_double_graphic_pane_t2

0x0001,

0xf62c,	// (0x0004e199) list_double_graphic_pane_t_ParamLimits

0xf62c,	// (0x0004e199) list_double_graphic_pane_t

0x0ab8,	// (0x0003f625) list_double2_graphic_pane_g1_ParamLimits

0x0ab8,	// (0x0003f625) list_double2_graphic_pane_g1

0x579a,	// (0x00044307) list_double2_graphic_pane_g2_ParamLimits

0x579a,	// (0x00044307) list_double2_graphic_pane_g2

0x1b7d,	// (0x000406ea) list_double2_graphic_pane_g3_ParamLimits

0x1b7d,	// (0x000406ea) list_double2_graphic_pane_g3

0x0002,

0xf631,	// (0x0004e19e) list_double2_graphic_pane_g_ParamLimits

0xf631,	// (0x0004e19e) list_double2_graphic_pane_g

0x0ac4,	// (0x0003f631) list_double2_graphic_pane_t1_ParamLimits

0x0ac4,	// (0x0003f631) list_double2_graphic_pane_t1

0xb5da,	// (0x0004a147) list_double2_graphic_pane_t2_ParamLimits

0xb5da,	// (0x0004a147) list_double2_graphic_pane_t2

0x0001,

0xf638,	// (0x0004e1a5) list_double2_graphic_pane_t_ParamLimits

0xf638,	// (0x0004e1a5) list_double2_graphic_pane_t

0xb5ec,	// (0x0004a159) list_double_large_graphic_pane_g1_ParamLimits

0xb5ec,	// (0x0004a159) list_double_large_graphic_pane_g1

0xb612,	// (0x0004a17f) list_double_large_graphic_pane_g2_ParamLimits

0xb612,	// (0x0004a17f) list_double_large_graphic_pane_g2

0x1b7d,	// (0x000406ea) list_double_large_graphic_pane_g3_ParamLimits

0x1b7d,	// (0x000406ea) list_double_large_graphic_pane_g3

0xb628,	// (0x0004a195) list_double_large_graphic_pane_g4_ParamLimits

0xb628,	// (0x0004a195) list_double_large_graphic_pane_g4

0x0004,

0xf63d,	// (0x0004e1aa) list_double_large_graphic_pane_g_ParamLimits

0xf63d,	// (0x0004e1aa) list_double_large_graphic_pane_g

0xb63b,	// (0x0004a1a8) list_double_large_graphic_pane_t1_ParamLimits

0xb63b,	// (0x0004a1a8) list_double_large_graphic_pane_t1

0xb654,	// (0x0004a1c1) list_double_large_graphic_pane_t2_ParamLimits

0xb654,	// (0x0004a1c1) list_double_large_graphic_pane_t2

0x0001,

0xf648,	// (0x0004e1b5) list_double_large_graphic_pane_t_ParamLimits

0xf648,	// (0x0004e1b5) list_double_large_graphic_pane_t

0xb666,	// (0x0004a1d3) list_double2_large_graphic_pane_g1_ParamLimits

0xb666,	// (0x0004a1d3) list_double2_large_graphic_pane_g1

0xbda4,	// (0x0004a911) list_double2_large_graphic_pane_g2_ParamLimits

0xbda4,	// (0x0004a911) list_double2_large_graphic_pane_g2

0x1b7d,	// (0x000406ea) list_double2_large_graphic_pane_g3_ParamLimits

0x1b7d,	// (0x000406ea) list_double2_large_graphic_pane_g3

0x0002,

0xf64d,	// (0x0004e1ba) list_double2_large_graphic_pane_g_ParamLimits

0xf64d,	// (0x0004e1ba) list_double2_large_graphic_pane_g

0xb4f9,	// (0x0004a066) list_double2_large_graphic_pane_t1_ParamLimits

0xb4f9,	// (0x0004a066) list_double2_large_graphic_pane_t1

0xb672,	// (0x0004a1df) list_double2_large_graphic_pane_t2_ParamLimits

0xb672,	// (0x0004a1df) list_double2_large_graphic_pane_t2

0x0001,

0xf654,	// (0x0004e1c1) list_double2_large_graphic_pane_t_ParamLimits

0xf654,	// (0x0004e1c1) list_double2_large_graphic_pane_t

0xb684,	// (0x0004a1f1) list_double_heading_pane_g1_ParamLimits

0xb684,	// (0x0004a1f1) list_double_heading_pane_g1

0xbdbd,	// (0x0004a92a) list_double_heading_pane_g2_ParamLimits

0xbdbd,	// (0x0004a92a) list_double_heading_pane_g2

0x0001,

0xf659,	// (0x0004e1c6) list_double_heading_pane_g_ParamLimits

0xf659,	// (0x0004e1c6) list_double_heading_pane_g

0xb695,	// (0x0004a202) list_double_heading_pane_t1_ParamLimits

0xb695,	// (0x0004a202) list_double_heading_pane_t1

0xb6ab,	// (0x0004a218) list_double_heading_pane_t2_ParamLimits

0xb6ab,	// (0x0004a218) list_double_heading_pane_t2

0x0001,

0xf65e,	// (0x0004e1cb) list_double_heading_pane_t_ParamLimits

0xf65e,	// (0x0004e1cb) list_double_heading_pane_t

0x046f,	// (0x0003efdc) list_double_graphic_heading_pane_g1_ParamLimits

0x046f,	// (0x0003efdc) list_double_graphic_heading_pane_g1

0xb684,	// (0x0004a1f1) list_double_graphic_heading_pane_g2_ParamLimits

0xb684,	// (0x0004a1f1) list_double_graphic_heading_pane_g2

0xbdbd,	// (0x0004a92a) list_double_graphic_heading_pane_g3_ParamLimits

0xbdbd,	// (0x0004a92a) list_double_graphic_heading_pane_g3

0x0002,

0xf663,	// (0x0004e1d0) list_double_graphic_heading_pane_g_ParamLimits

0xf663,	// (0x0004e1d0) list_double_graphic_heading_pane_g

0xb6bd,	// (0x0004a22a) list_double_graphic_heading_pane_t1_ParamLimits

0xb6bd,	// (0x0004a22a) list_double_graphic_heading_pane_t1

0xb6d3,	// (0x0004a240) list_double_graphic_heading_pane_t2_ParamLimits

0xb6d3,	// (0x0004a240) list_double_graphic_heading_pane_t2

0x0001,

0xf66a,	// (0x0004e1d7) list_double_graphic_heading_pane_t_ParamLimits

0xf66a,	// (0x0004e1d7) list_double_graphic_heading_pane_t

0xb55f,	// (0x0004a0cc) list_double_time_pane_g1_ParamLimits

0xb55f,	// (0x0004a0cc) list_double_time_pane_g1

0x0a64,	// (0x0003f5d1) list_double_time_pane_g2_ParamLimits

0x0a64,	// (0x0003f5d1) list_double_time_pane_g2

0x0001,

0xf612,	// (0x0004e17f) list_double_time_pane_g_ParamLimits

0xf612,	// (0x0004e17f) list_double_time_pane_g

0xb6e5,	// (0x0004a252) list_double_time_pane_t1_ParamLimits

0xb6e5,	// (0x0004a252) list_double_time_pane_t1

0xb6fb,	// (0x0004a268) list_double_time_pane_t2_ParamLimits

0xb6fb,	// (0x0004a268) list_double_time_pane_t2

0xb70d,	// (0x0004a27a) list_double_time_pane_t3_ParamLimits

0xb70d,	// (0x0004a27a) list_double_time_pane_t3

0xb71f,	// (0x0004a28c) list_double_time_pane_t4_ParamLimits

0xb71f,	// (0x0004a28c) list_double_time_pane_t4

0x0003,

0xf66f,	// (0x0004e1dc) list_double_time_pane_t_ParamLimits

0xf66f,	// (0x0004e1dc) list_double_time_pane_t

0xb731,	// (0x0004a29e) list_setting_pane_g1_ParamLimits

0xb731,	// (0x0004a29e) list_setting_pane_g1

0x05e7,	// (0x0003f154) list_setting_pane_g2_ParamLimits

0x05e7,	// (0x0003f154) list_setting_pane_g2

0x0001,

0xf678,	// (0x0004e1e5) list_setting_pane_g_ParamLimits

0xf678,	// (0x0004e1e5) list_setting_pane_g

0xb73d,	// (0x0004a2aa) list_setting_pane_t1_ParamLimits

0xb73d,	// (0x0004a2aa) list_setting_pane_t1

0xb757,	// (0x0004a2c4) list_setting_pane_t2_ParamLimits

0xb757,	// (0x0004a2c4) list_setting_pane_t2

0x0002,

0xf67d,	// (0x0004e1ea) list_setting_pane_t_ParamLimits

0xf67d,	// (0x0004e1ea) list_setting_pane_t

0xb796,	// (0x0004a303) set_value_pane_cp_ParamLimits

0xb796,	// (0x0004a303) set_value_pane_cp

0xb7a2,	// (0x0004a30f) list_setting_number_pane_g1_ParamLimits

0xb7a2,	// (0x0004a30f) list_setting_number_pane_g1

0xb7ae,	// (0x0004a31b) list_setting_number_pane_g2_ParamLimits

0xb7ae,	// (0x0004a31b) list_setting_number_pane_g2

0x0001,

0xf684,	// (0x0004e1f1) list_setting_number_pane_g_ParamLimits

0xf684,	// (0x0004e1f1) list_setting_number_pane_g

0xb7ba,	// (0x0004a327) list_setting_number_pane_t1_ParamLimits

0xb7ba,	// (0x0004a327) list_setting_number_pane_t1

0xb7d3,	// (0x0004a340) list_setting_number_pane_t2_ParamLimits

0xb7d3,	// (0x0004a340) list_setting_number_pane_t2

0xb7ed,	// (0x0004a35a) list_setting_number_pane_t3_ParamLimits

0xb7ed,	// (0x0004a35a) list_setting_number_pane_t3

0x0003,

0xf689,	// (0x0004e1f6) list_setting_number_pane_t_ParamLimits

0xf689,	// (0x0004e1f6) list_setting_number_pane_t

0xb796,	// (0x0004a303) set_value_pane_ParamLimits

0xb796,	// (0x0004a303) set_value_pane

0x36d5,	// (0x00042242) bg_set_opt_pane_ParamLimits

0x36d5,	// (0x00042242) bg_set_opt_pane

0x074a,	// (0x0003f2b7) set_value_pane_t1

0x36f6,	// (0x00042263) slider_set_pane_cp3

0x36ff,	// (0x0004226c) volume_small_pane_cp

0x3708,	// (0x00042275) list_form_gen_pane

0x3711,	// (0x0004227e) scroll_pane_cp8

0xb830,	// (0x0004a39d) form_field_data_pane_ParamLimits

0xb830,	// (0x0004a39d) form_field_data_pane

0xb847,	// (0x0004a3b4) form_field_data_wide_pane_ParamLimits

0xb847,	// (0x0004a3b4) form_field_data_wide_pane

0xb867,	// (0x0004a3d4) form_field_popup_pane_ParamLimits

0xb867,	// (0x0004a3d4) form_field_popup_pane

0xb87f,	// (0x0004a3ec) form_field_popup_wide_pane_ParamLimits

0xb87f,	// (0x0004a3ec) form_field_popup_wide_pane

0x07e6,	// (0x0003f353) form_field_slider_pane_ParamLimits

0x07e6,	// (0x0003f353) form_field_slider_pane

0x07f9,	// (0x0003f366) form_field_slider_wide_pane_ParamLimits

0x07f9,	// (0x0003f366) form_field_slider_wide_pane

0x3722,	// (0x0004228f) data_form_pane

0xb8a0,	// (0x0004a40d) form_field_data_pane_t1

0x372e,	// (0x0004229b) input_focus_pane

0x373c,	// (0x000422a9) data_form_wide_pane

0x083a,	// (0x0003f3a7) form_field_data_wide_pane_t1

0x349f,	// (0x0004200c) input_focus_pane_cp6

0xb8ba,	// (0x0004a427) form_field_popup_pane_t1

0x372e,	// (0x0004229b) input_focus_pane_cp7

0x3768,	// (0x000422d5) list_form_pane

0x087c,	// (0x0003f3e9) form_field_popup_wide_pane_t1

0x372e,	// (0x0004229b) input_focus_pane_cp8

0x3774,	// (0x000422e1) list_form_wide_pane

0xb8dc,	// (0x0004a449) form_field_slider_pane_t1_ParamLimits

0xb8dc,	// (0x0004a449) form_field_slider_pane_t1

0xb8f4,	// (0x0004a461) form_field_slider_pane_t2_ParamLimits

0xb8f4,	// (0x0004a461) form_field_slider_pane_t2

0x0001,

0xf699,	// (0x0004e206) form_field_slider_pane_t_ParamLimits

0xf699,	// (0x0004e206) form_field_slider_pane_t

0x313d,	// (0x00041caa) input_focus_pane_cp9_ParamLimits

0x313d,	// (0x00041caa) input_focus_pane_cp9

0xb909,	// (0x0004a476) slider_cont_pane_ParamLimits

0xb909,	// (0x0004a476) slider_cont_pane

0x3783,	// (0x000422f0) form_field_slider_wide_pane_t1_ParamLimits

0x3783,	// (0x000422f0) form_field_slider_wide_pane_t1

0x08d8,	// (0x0003f445) form_field_slider_wide_pane_t2_ParamLimits

0x08d8,	// (0x0003f445) form_field_slider_wide_pane_t2

0x0001,

0xf69e,	// (0x0004e20b) form_field_slider_wide_pane_t_ParamLimits

0xf69e,	// (0x0004e20b) form_field_slider_wide_pane_t

0x313d,	// (0x00041caa) input_focus_pane_cp10_ParamLimits

0x313d,	// (0x00041caa) input_focus_pane_cp10

0xb91d,	// (0x0004a48a) slider_cont_pane_cp1_ParamLimits

0xb91d,	// (0x0004a48a) slider_cont_pane_cp1

0xb931,	// (0x0004a49e) slider_form_pane_cp

0x3795,	// (0x00042302) input_focus_pane_g1

0x379d,	// (0x0004230a) input_focus_pane_g2

0x37a5,	// (0x00042312) input_focus_pane_g3

0x37ad,	// (0x0004231a) input_focus_pane_g4

0x37b5,	// (0x00042322) input_focus_pane_g5

0x37bd,	// (0x0004232a) input_focus_pane_g6

0x37c5,	// (0x00042332) input_focus_pane_g7

0x37cd,	// (0x0004233a) input_focus_pane_g8

0x37d5,	// (0x00042342) input_focus_pane_g9

0x2dd8,	// (0x00041945) input_focus_pane_g10

0x0009,

0xf6a3,	// (0x0004e210) input_focus_pane_g

0x57f6,	// (0x00044363) wait_border_pane_g3_copy1

0xb939,	// (0x0004a4a6) data_form_pane_t1

0x2dd8,	// (0x00041945) wait_anim_pane_g1_copy1

0xba5e,	// (0x0004a5cb) data_form_wide_pane_t1

0xb952,	// (0x0004a4bf) list_form_graphic_pane_cp_ParamLimits

0xb952,	// (0x0004a4bf) list_form_graphic_pane_cp

0x6732,	// (0x0004529f) slider_form_pane_g1

0x673b,	// (0x000452a8) slider_form_pane_g2

0x0006,

0xf98f,	// (0x0004e4fc) slider_form_pane_g

0xb963,	// (0x0004a4d0) list_form_graphic_pane_ParamLimits

0xb963,	// (0x0004a4d0) list_form_graphic_pane

0x0956,	// (0x0003f4c3) list_form_graphic_pane_g1

0x095e,	// (0x0003f4cb) list_form_graphic_pane_t1_ParamLimits

0x095e,	// (0x0003f4cb) list_form_graphic_pane_t1

0x2ec2,	// (0x00041a2f) list_highlight_pane_cp5_ParamLimits

0x2ec2,	// (0x00041a2f) list_highlight_pane_cp5

0xb975,	// (0x0004a4e2) find_pane_g1

0x37dd,	// (0x0004234a) input_find_pane

0xb97e,	// (0x0004a4eb) input_find_pane_g1_ParamLimits

0xb97e,	// (0x0004a4eb) input_find_pane_g1

0xb98a,	// (0x0004a4f7) input_find_pane_t1_ParamLimits

0xb98a,	// (0x0004a4f7) input_find_pane_t1

0xb99f,	// (0x0004a50c) input_find_pane_t2_ParamLimits

0xb99f,	// (0x0004a50c) input_find_pane_t2

0x0001,

0xf6b8,	// (0x0004e225) input_find_pane_t_ParamLimits

0xf6b8,	// (0x0004e225) input_find_pane_t

0x37e6,	// (0x00042353) input_focus_pane_cp5_ParamLimits

0x37e6,	// (0x00042353) input_focus_pane_cp5

0xc99a,	// (0x0004b507) bg_popup_window_pane_cp2_ParamLimits

0xc99a,	// (0x0004b507) bg_popup_window_pane_cp2

0xc9a7,	// (0x0004b514) listscroll_menu_pane_ParamLimits

0xc9a7,	// (0x0004b514) listscroll_menu_pane

0xc9b3,	// (0x0004b520) popup_submenu_window_ParamLimits

0xc9b3,	// (0x0004b520) popup_submenu_window

0x3843,	// (0x000423b0) find_popup_pane_g1

0x384b,	// (0x000423b8) input_popup_find_pane_cp

0x37e6,	// (0x00042353) input_focus_pane_cp4_ParamLimits

0x37e6,	// (0x00042353) input_focus_pane_cp4

0x3861,	// (0x000423ce) input_popup_find_pane_t1_ParamLimits

0x3861,	// (0x000423ce) input_popup_find_pane_t1

0x2de2,	// (0x0004194f) bg_popup_sub_pane_cp

0x388f,	// (0x000423fc) listscroll_popup_sub_pane

0x3897,	// (0x00042404) list_submenu_pane_ParamLimits

0x3897,	// (0x00042404) list_submenu_pane

0x38a8,	// (0x00042415) scroll_pane_cp4

0x38b0,	// (0x0004241d) list_single_popup_submenu_pane_ParamLimits

0x38b0,	// (0x0004241d) list_single_popup_submenu_pane

0x38c4,	// (0x00042431) list_single_popup_submenu_pane_g1

0x38cc,	// (0x00042439) list_single_popup_submenu_pane_t1_ParamLimits

0x38cc,	// (0x00042439) list_single_popup_submenu_pane_t1

0x313d,	// (0x00041caa) bg_active_tab_pane_cp1_ParamLimits

0x313d,	// (0x00041caa) bg_active_tab_pane_cp1

0xc9eb,	// (0x0004b558) tabs_2_active_pane_g1

0xc9f3,	// (0x0004b560) tabs_2_active_pane_t1

0x313d,	// (0x00041caa) bg_passive_tab_pane_cp1_ParamLimits

0x313d,	// (0x00041caa) bg_passive_tab_pane_cp1

0xc9eb,	// (0x0004b558) tabs_2_passive_pane_g1

0xc9f3,	// (0x0004b560) tabs_2_passive_pane_t1

0x2ec2,	// (0x00041a2f) bg_active_tab_pane_cp4

0xca05,	// (0x0004b572) tabs_2_long_active_pane_t1

0x46f1,	// (0x0004325e) bg_passive_tab_pane_cp4

0x1bb6,	// (0x00040723) list_single_midp_graphic_pane_g4_ParamLimits

0x2ec2,	// (0x00041a2f) bg_active_tab_pane_cp5

0xca18,	// (0x0004b585) tabs_3_long_active_pane_t1

0x46f1,	// (0x0004325e) bg_passive_tab_pane_cp5

0x1bb6,	// (0x00040723) list_single_midp_graphic_pane_g4

0x2ec2,	// (0x00041a2f) bg_popup_window_pane_cp13_ParamLimits

0x2ec2,	// (0x00041a2f) bg_popup_window_pane_cp13

0x3943,	// (0x000424b0) listscroll_popup_fast_pane_ParamLimits

0x3943,	// (0x000424b0) listscroll_popup_fast_pane

0x3952,	// (0x000424bf) grid_popup_fast_pane_ParamLimits

0x3952,	// (0x000424bf) grid_popup_fast_pane

0x3964,	// (0x000424d1) scroll_pane_cp9_ParamLimits

0x3964,	// (0x000424d1) scroll_pane_cp9

0x7fdd,	// (0x00046b4a) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7fdd,	// (0x00046b4a) list_single_graphic_hl_pane_t1_cp2

0x3988,	// (0x000424f5) input_focus_pane_cp20_ParamLimits

0x3988,	// (0x000424f5) input_focus_pane_cp20

0x3996,	// (0x00042503) query_popup_data_pane_t1_ParamLimits

0x3996,	// (0x00042503) query_popup_data_pane_t1

0x39a9,	// (0x00042516) query_popup_data_pane_t2_ParamLimits

0x39a9,	// (0x00042516) query_popup_data_pane_t2

0x39ef,	// (0x0004255c) query_popup_data_pane_t3_ParamLimits

0x39ef,	// (0x0004255c) query_popup_data_pane_t3

0x3a30,	// (0x0004259d) query_popup_data_pane_t4_ParamLimits

0x3a30,	// (0x0004259d) query_popup_data_pane_t4

0x3a6c,	// (0x000425d9) query_popup_data_pane_t5_ParamLimits

0x3a6c,	// (0x000425d9) query_popup_data_pane_t5

0x0004,

0xf6bd,	// (0x0004e22a) query_popup_data_pane_t_ParamLimits

0xf6bd,	// (0x0004e22a) query_popup_data_pane_t

0x3795,	// (0x00042302) bg_set_opt_pane_g1

0x379d,	// (0x0004230a) bg_set_opt_pane_g2

0x37a5,	// (0x00042312) bg_set_opt_pane_g3

0x37ad,	// (0x0004231a) bg_set_opt_pane_g4

0x37b5,	// (0x00042322) bg_set_opt_pane_g5

0x37bd,	// (0x0004232a) bg_set_opt_pane_g6

0x37c5,	// (0x00042332) bg_set_opt_pane_g7

0x37cd,	// (0x0004233a) bg_set_opt_pane_g8

0x37d5,	// (0x00042342) bg_set_opt_pane_g9

0x0008,

0xf6c8,	// (0x0004e235) bg_set_opt_pane_g

0x17ea,	// (0x00040357) control_top_pane_stacon_ParamLimits

0x17ea,	// (0x00040357) control_top_pane_stacon

0x183d,	// (0x000403aa) signal_pane_stacon_ParamLimits

0x183d,	// (0x000403aa) signal_pane_stacon

0x4038,	// (0x00042ba5) stacon_top_pane_g1_ParamLimits

0x4038,	// (0x00042ba5) stacon_top_pane_g1

0x1862,	// (0x000403cf) title_pane_stacon_ParamLimits

0x1862,	// (0x000403cf) title_pane_stacon

0x188c,	// (0x000403f9) uni_indicator_pane_stacon_ParamLimits

0x188c,	// (0x000403f9) uni_indicator_pane_stacon

0x18a1,	// (0x0004040e) battery_pane_stacon_ParamLimits

0x18a1,	// (0x0004040e) battery_pane_stacon

0x18e5,	// (0x00040452) control_bottom_pane_stacon_ParamLimits

0x18e5,	// (0x00040452) control_bottom_pane_stacon

0x1908,	// (0x00040475) navi_pane_stacon_ParamLimits

0x1908,	// (0x00040475) navi_pane_stacon

0x405a,	// (0x00042bc7) stacon_bottom_pane_g1_ParamLimits

0x405a,	// (0x00042bc7) stacon_bottom_pane_g1

0x154b,	// (0x000400b8) aid_levels_signal_lsc_ParamLimits

0x154b,	// (0x000400b8) aid_levels_signal_lsc

0x1562,	// (0x000400cf) signal_pane_stacon_g1_ParamLimits

0x1562,	// (0x000400cf) signal_pane_stacon_g1

0x1576,	// (0x000400e3) signal_pane_stacon_g2_ParamLimits

0x1576,	// (0x000400e3) signal_pane_stacon_g2

0x0001,

0xf6db,	// (0x0004e248) signal_pane_stacon_g_ParamLimits

0xf6db,	// (0x0004e248) signal_pane_stacon_g

0x15ab,	// (0x00040118) title_pane_stacon_t1_ParamLimits

0x15ab,	// (0x00040118) title_pane_stacon_t1

0x3ab0,	// (0x0004261d) uni_indicator_pane_stacon_g1

0x3aba,	// (0x00042627) uni_indicator_pane_stacon_g2

0x3ac4,	// (0x00042631) uni_indicator_pane_stacon_g3

0x3ace,	// (0x0004263b) uni_indicator_pane_stacon_g4

0x0003,

0xf6e7,	// (0x0004e254) uni_indicator_pane_stacon_g

0x15d0,	// (0x0004013d) control_top_pane_stacon_g1

0x15d8,	// (0x00040145) control_top_pane_stacon_t1_ParamLimits

0x15d8,	// (0x00040145) control_top_pane_stacon_t1

0x160f,	// (0x0004017c) aid_levels_battery_lsc_ParamLimits

0x160f,	// (0x0004017c) aid_levels_battery_lsc

0x1627,	// (0x00040194) battery_pane_stacon_g1_ParamLimits

0x1627,	// (0x00040194) battery_pane_stacon_g1

0x163a,	// (0x000401a7) battery_pane_stacon_g2_ParamLimits

0x163a,	// (0x000401a7) battery_pane_stacon_g2

0x0001,

0xf6f0,	// (0x0004e25d) battery_pane_stacon_g_ParamLimits

0xf6f0,	// (0x0004e25d) battery_pane_stacon_g

0x1678,	// (0x000401e5) navi_icon_pane_stacon

0x168c,	// (0x000401f9) navi_navi_pane_stacon

0x1678,	// (0x000401e5) navi_text_pane_stacon

0x15d0,	// (0x0004013d) control_bottom_pane_stacon_g1

0x16a0,	// (0x0004020d) control_bottom_pane_stacon_t1_ParamLimits

0x16a0,	// (0x0004020d) control_bottom_pane_stacon_t1

0xca2a,	// (0x0004b597) grid_app_pane_ParamLimits

0xca2a,	// (0x0004b597) grid_app_pane

0xca62,	// (0x0004b5cf) scroll_pane_cp15_ParamLimits

0xca62,	// (0x0004b5cf) scroll_pane_cp15

0xca7b,	// (0x0004b5e8) cell_app_pane_ParamLimits

0xca7b,	// (0x0004b5e8) cell_app_pane

0xcac0,	// (0x0004b62d) cell_app_pane_g1_ParamLimits

0xcac0,	// (0x0004b62d) cell_app_pane_g1

0x3b73,	// (0x000426e0) cell_app_pane_g2_ParamLimits

0x3b73,	// (0x000426e0) cell_app_pane_g2

0x0001,

0xf6f5,	// (0x0004e262) cell_app_pane_g_ParamLimits

0xf6f5,	// (0x0004e262) cell_app_pane_g

0x3b7f,	// (0x000426ec) cell_app_pane_t1_ParamLimits

0x3b7f,	// (0x000426ec) cell_app_pane_t1

0x3b96,	// (0x00042703) grid_highlight_pane_ParamLimits

0x3b96,	// (0x00042703) grid_highlight_pane

0x3795,	// (0x00042302) cell_highlight_pane_g1

0x379d,	// (0x0004230a) cell_highlight_pane_g2

0x37a5,	// (0x00042312) cell_highlight_pane_g3

0x37ad,	// (0x0004231a) cell_highlight_pane_g4

0x37b5,	// (0x00042322) cell_highlight_pane_g5

0x37bd,	// (0x0004232a) cell_highlight_pane_g6

0x37c5,	// (0x00042332) cell_highlight_pane_g7

0x37cd,	// (0x0004233a) cell_highlight_pane_g8

0x37d5,	// (0x00042342) cell_highlight_pane_g9

0x2dd8,	// (0x00041945) cell_highlight_pane_g10

0x0009,

0xf6a3,	// (0x0004e210) cell_highlight_pane_g

0x3ba7,	// (0x00042714) bg_scroll_pane

0x16ea,	// (0x00040257) scroll_handle_pane

0x3bee,	// (0x0004275b) scroll_bg_pane_g1

0x3c03,	// (0x00042770) scroll_bg_pane_g2

0x3c1b,	// (0x00042788) scroll_bg_pane_g3

0x0002,

0xf6fa,	// (0x0004e267) scroll_bg_pane_g

0x3c30,	// (0x0004279d) scroll_handle_focus_pane_ParamLimits

0x3c30,	// (0x0004279d) scroll_handle_focus_pane

0x3bee,	// (0x0004275b) scroll_handle_pane_g1

0x3c3d,	// (0x000427aa) scroll_handle_pane_g2

0x3c1b,	// (0x00042788) scroll_handle_pane_g3

0x0002,

0xf701,	// (0x0004e26e) scroll_handle_pane_g

0x37e6,	// (0x00042353) bg_popup_sub_pane_cp21_ParamLimits

0x37e6,	// (0x00042353) bg_popup_sub_pane_cp21

0x3c51,	// (0x000427be) popup_fep_japan_predictive_window_t1_ParamLimits

0x3c51,	// (0x000427be) popup_fep_japan_predictive_window_t1

0x3c6b,	// (0x000427d8) popup_fep_japan_predictive_window_t2_ParamLimits

0x3c6b,	// (0x000427d8) popup_fep_japan_predictive_window_t2

0x3c9e,	// (0x0004280b) popup_fep_japan_predictive_window_t3_ParamLimits

0x3c9e,	// (0x0004280b) popup_fep_japan_predictive_window_t3

0x0002,

0xf708,	// (0x0004e275) popup_fep_japan_predictive_window_t_ParamLimits

0xf708,	// (0x0004e275) popup_fep_japan_predictive_window_t

0x2de2,	// (0x0004194f) bg_popup_sub_pane_cp23

0x3cd5,	// (0x00042842) listscroll_japin_cand_pane

0x3cdd,	// (0x0004284a) popup_fep_japan_candidate_window_t1

0x3ceb,	// (0x00042858) candidate_pane_ParamLimits

0x3ceb,	// (0x00042858) candidate_pane

0x3cfd,	// (0x0004286a) scroll_pane_cp30

0x3d05,	// (0x00042872) list_single_popup_jap_candidate_pane_ParamLimits

0x3d05,	// (0x00042872) list_single_popup_jap_candidate_pane

0x2de2,	// (0x0004194f) list_highlight_pane_cp30

0x3d1a,	// (0x00042887) list_single_popup_jap_candidate_pane_t1

0x3d29,	// (0x00042896) level_1_signal

0x3d36,	// (0x000428a3) level_2_signal

0x3d43,	// (0x000428b0) level_3_signal

0x3d50,	// (0x000428bd) level_4_signal

0x3d5d,	// (0x000428ca) level_5_signal

0x3d6a,	// (0x000428d7) level_6_signal

0x3d77,	// (0x000428e4) level_7_signal

0x3d29,	// (0x00042896) level_1_battery

0x3d36,	// (0x000428a3) level_2_battery

0x3d43,	// (0x000428b0) level_3_battery

0x3d50,	// (0x000428bd) level_4_battery

0x3d5d,	// (0x000428ca) level_5_battery

0x3d6a,	// (0x000428d7) level_6_battery

0x3d77,	// (0x000428e4) level_7_battery

0x3d9c,	// (0x00042909) list_menu_pane_ParamLimits

0x3d9c,	// (0x00042909) list_menu_pane

0x3dad,	// (0x0004291a) scroll_pane_cp25_ParamLimits

0x3dad,	// (0x0004291a) scroll_pane_cp25

0x3dc6,	// (0x00042933) list_double2_graphic_pane_cp2_ParamLimits

0x3dc6,	// (0x00042933) list_double2_graphic_pane_cp2

0x3dc6,	// (0x00042933) list_double2_large_graphic_pane_cp2_ParamLimits

0x3dc6,	// (0x00042933) list_double2_large_graphic_pane_cp2

0x3dc6,	// (0x00042933) list_double2_pane_cp2_ParamLimits

0x3dc6,	// (0x00042933) list_double2_pane_cp2

0x3dc6,	// (0x00042933) list_double_graphic_pane_cp2_ParamLimits

0x3dc6,	// (0x00042933) list_double_graphic_pane_cp2

0x3dc6,	// (0x00042933) list_double_large_graphic_pane_cp2_ParamLimits

0x3dc6,	// (0x00042933) list_double_large_graphic_pane_cp2

0x3dc6,	// (0x00042933) list_double_number_pane_cp2_ParamLimits

0x3dc6,	// (0x00042933) list_double_number_pane_cp2

0x3dc6,	// (0x00042933) list_double_pane_cp2_ParamLimits

0x3dc6,	// (0x00042933) list_double_pane_cp2

0xcaf3,	// (0x0004b660) list_single_2graphic_pane_cp2_ParamLimits

0xcaf3,	// (0x0004b660) list_single_2graphic_pane_cp2

0xcaf3,	// (0x0004b660) list_single_graphic_heading_pane_cp2_ParamLimits

0xcaf3,	// (0x0004b660) list_single_graphic_heading_pane_cp2

0xcaf3,	// (0x0004b660) list_single_graphic_pane_cp2_ParamLimits

0xcaf3,	// (0x0004b660) list_single_graphic_pane_cp2

0xcaf3,	// (0x0004b660) list_single_heading_pane_cp2_ParamLimits

0xcaf3,	// (0x0004b660) list_single_heading_pane_cp2

0x3e03,	// (0x00042970) list_single_large_graphic_pane_cp2_ParamLimits

0x3e03,	// (0x00042970) list_single_large_graphic_pane_cp2

0xcaf3,	// (0x0004b660) list_single_number_heading_pane_cp2_ParamLimits

0xcaf3,	// (0x0004b660) list_single_number_heading_pane_cp2

0xcaf3,	// (0x0004b660) list_single_number_pane_cp2_ParamLimits

0xcaf3,	// (0x0004b660) list_single_number_pane_cp2

0xcaf3,	// (0x0004b660) list_single_pane_cp2_ParamLimits

0xcaf3,	// (0x0004b660) list_single_pane_cp2

0x3e59,	// (0x000429c6) bg_popup_sub_pane_cp22

0x179c,	// (0x00040309) popup_side_volume_key_window_g1

0x17c6,	// (0x00040333) popup_side_volume_key_window_t1

0x17e2,	// (0x0004034f) volume_small_pane_cp1

0x313d,	// (0x00041caa) bg_popup_sub_pane_cp24_ParamLimits

0x313d,	// (0x00041caa) bg_popup_sub_pane_cp24

0x3e9d,	// (0x00042a0a) fep_china_uni_candidate_pane_ParamLimits

0x3e9d,	// (0x00042a0a) fep_china_uni_candidate_pane

0x3eb1,	// (0x00042a1e) fep_china_uni_entry_pane

0x3ec1,	// (0x00042a2e) popup_fep_china_uni_window_g1

0x3edd,	// (0x00042a4a) fep_china_uni_entry_pane_g1

0x3ee5,	// (0x00042a52) fep_china_uni_entry_pane_g2

0x0001,

0xf735,	// (0x0004e2a2) fep_china_uni_entry_pane_g

0x3eed,	// (0x00042a5a) fep_entry_item_pane

0x3ef7,	// (0x00042a64) fep_candidate_item_pane

0x3eff,	// (0x00042a6c) fep_china_uni_candidate_pane_g1

0x3f07,	// (0x00042a74) fep_china_uni_candidate_pane_g2

0x3f0f,	// (0x00042a7c) fep_china_uni_candidate_pane_g3

0x3f17,	// (0x00042a84) fep_china_uni_candidate_pane_g4

0x0003,

0xf73a,	// (0x0004e2a7) fep_china_uni_candidate_pane_g

0x2dd8,	// (0x00041945) fep_entry_item_pane_g1

0x3f1f,	// (0x00042a8c) fep_entry_item_pane_t1_ParamLimits

0x3f1f,	// (0x00042a8c) fep_entry_item_pane_t1

0x3f35,	// (0x00042aa2) fep_candidate_item_pane_t1_ParamLimits

0x3f35,	// (0x00042aa2) fep_candidate_item_pane_t1

0x3f4a,	// (0x00042ab7) fep_candidate_item_pane_t2_ParamLimits

0x3f4a,	// (0x00042ab7) fep_candidate_item_pane_t2

0x0001,

0xf743,	// (0x0004e2b0) fep_candidate_item_pane_t_ParamLimits

0xf743,	// (0x0004e2b0) fep_candidate_item_pane_t

0x2ec2,	// (0x00041a2f) list_highlight_pane_cp31_ParamLimits

0x2ec2,	// (0x00041a2f) list_highlight_pane_cp31

0x3f5c,	// (0x00042ac9) level_1_signal_lsc

0x3f65,	// (0x00042ad2) level_2_signal_lsc

0x3f6e,	// (0x00042adb) level_3_signal_lsc

0x3f77,	// (0x00042ae4) level_4_signal_lsc

0x3f80,	// (0x00042aed) level_5_signal_lsc

0x3f89,	// (0x00042af6) level_6_signal_lsc

0x3f92,	// (0x00042aff) level_7_signal_lsc

0x3f92,	// (0x00042aff) level_1_battery_lsc

0x3f9b,	// (0x00042b08) level_2_battery_lsc

0x3fa4,	// (0x00042b11) level_3_battery_lsc

0x3fad,	// (0x00042b1a) level_4_battery_lsc

0x3fb6,	// (0x00042b23) level_5_battery_lsc

0x3fbf,	// (0x00042b2c) level_6_battery_lsc

0x3f5c,	// (0x00042ac9) level_7_battery_lsc

0x3fc8,	// (0x00042b35) scroll_handle_focus_pane_g1

0x3fd1,	// (0x00042b3e) scroll_handle_focus_pane_g2

0x3fda,	// (0x00042b47) scroll_handle_focus_pane_g3

0x0002,

0xf748,	// (0x0004e2b5) scroll_handle_focus_pane_g

0xb9b4,	// (0x0004a521) list_single_2graphic_pane_g1_ParamLimits

0xb9b4,	// (0x0004a521) list_single_2graphic_pane_g1

0xbda4,	// (0x0004a911) list_single_2graphic_pane_g2_ParamLimits

0xbda4,	// (0x0004a911) list_single_2graphic_pane_g2

0x1b7d,	// (0x000406ea) list_single_2graphic_pane_g3_ParamLimits

0x1b7d,	// (0x000406ea) list_single_2graphic_pane_g3

0xbdd2,	// (0x0004a93f) list_single_2graphic_pane_g4_ParamLimits

0xbdd2,	// (0x0004a93f) list_single_2graphic_pane_g4

0x0003,

0xf74f,	// (0x0004e2bc) list_single_2graphic_pane_g_ParamLimits

0xf74f,	// (0x0004e2bc) list_single_2graphic_pane_g

0xb9c0,	// (0x0004a52d) list_single_2graphic_pane_t1_ParamLimits

0xb9c0,	// (0x0004a52d) list_single_2graphic_pane_t1

0xb9ee,	// (0x0004a55b) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xb9ee,	// (0x0004a55b) list_double2_graphic_large_graphic_pane_g1

0xbda4,	// (0x0004a911) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xbda4,	// (0x0004a911) list_double2_graphic_large_graphic_pane_g2

0x1b7d,	// (0x000406ea) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x1b7d,	// (0x000406ea) list_double2_graphic_large_graphic_pane_g3

0xba00,	// (0x0004a56d) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xba00,	// (0x0004a56d) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf758,	// (0x0004e2c5) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf758,	// (0x0004e2c5) list_double2_graphic_large_graphic_pane_g

0xba0c,	// (0x0004a579) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xba0c,	// (0x0004a579) list_double2_graphic_large_graphic_pane_t1

0xba22,	// (0x0004a58f) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xba22,	// (0x0004a58f) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf761,	// (0x0004e2ce) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf761,	// (0x0004e2ce) list_double2_graphic_large_graphic_pane_t

0x4122,	// (0x00042c8f) popup_fast_swap_window_ParamLimits

0x4122,	// (0x00042c8f) popup_fast_swap_window

0x413e,	// (0x00042cab) popup_side_volume_key_window

0x415a,	// (0x00042cc7) stacon_top_pane

0x4164,	// (0x00042cd1) status_pane_ParamLimits

0x4164,	// (0x00042cd1) status_pane

0x415a,	// (0x00042cc7) status_small_pane

0x2de2,	// (0x0004194f) control_pane

0x2de2,	// (0x0004194f) stacon_bottom_pane

0x3711,	// (0x0004227e) scroll_pane_cp121

0x3708,	// (0x00042275) set_content_pane

0x3ffe,	// (0x00042b6b) bg_active_tab_pane_g1_cp1

0x3fec,	// (0x00042b59) bg_active_tab_pane_g2_cp1

0x4007,	// (0x00042b74) bg_active_tab_pane_g3_cp1

0x3ffe,	// (0x00042b6b) bg_passive_tab_pane_g1_cp1

0x3fec,	// (0x00042b59) bg_passive_tab_pane_g2_cp1

0x4007,	// (0x00042b74) bg_passive_tab_pane_g3_cp1

0xcb53,	// (0x0004b6c0) bg_active_tab_pane_g1_cp2

0x3fec,	// (0x00042b59) bg_active_tab_pane_g2_cp2

0xcb5c,	// (0x0004b6c9) bg_active_tab_pane_g3_cp2

0xcb53,	// (0x0004b6c0) bg_passive_tab_pane_g1_cp2

0x3fec,	// (0x00042b59) bg_passive_tab_pane_g2_cp2

0xcb5c,	// (0x0004b6c9) bg_passive_tab_pane_g3_cp2

0xcb65,	// (0x0004b6d2) bg_active_tab_pane_g1_cp3

0x3fec,	// (0x00042b59) bg_active_tab_pane_g2_cp3

0xcb6e,	// (0x0004b6db) bg_active_tab_pane_g3_cp3

0xcb65,	// (0x0004b6d2) bg_passive_tab_pane_g1_cp3

0x3fec,	// (0x00042b59) bg_passive_tab_pane_g2_cp3

0xcb6e,	// (0x0004b6db) bg_passive_tab_pane_g3_cp3

0xcb77,	// (0x0004b6e4) bg_active_tab_pane_g1_cp4

0x3fec,	// (0x00042b59) bg_active_tab_pane_g2_cp4

0xcb80,	// (0x0004b6ed) bg_active_tab_pane_g3_cp4

0xcb77,	// (0x0004b6e4) bg_passive_tab_pane_g1_cp4

0x3fec,	// (0x00042b59) bg_passive_tab_pane_g2_cp4

0xcb80,	// (0x0004b6ed) bg_passive_tab_pane_g3_cp4

0x4076,	// (0x00042be3) bg_active_tab_pane_g1_cp5

0x3fec,	// (0x00042b59) bg_active_tab_pane_g2_cp5

0x407f,	// (0x00042bec) bg_active_tab_pane_g3_cp5

0x4076,	// (0x00042be3) bg_passive_tab_pane_g1_cp5

0x3fec,	// (0x00042b59) bg_passive_tab_pane_g2_cp5

0x407f,	// (0x00042bec) bg_passive_tab_pane_g3_cp5

0xcb89,	// (0x0004b6f6) list_set_graphic_pane_ParamLimits

0xcb89,	// (0x0004b6f6) list_set_graphic_pane

0x2de2,	// (0x0004194f) bg_set_opt_pane_cp4

0xcb9b,	// (0x0004b708) list_set_graphic_pane_g1_ParamLimits

0xcb9b,	// (0x0004b708) list_set_graphic_pane_g1

0xcba7,	// (0x0004b714) list_set_graphic_pane_g2_ParamLimits

0xcba7,	// (0x0004b714) list_set_graphic_pane_g2

0x0001,

0xf766,	// (0x0004e2d3) list_set_graphic_pane_g_ParamLimits

0xf766,	// (0x0004e2d3) list_set_graphic_pane_g

0x0009,

0xfacb,	// (0x0004e638) volume_small_pane_cp_g

0x40d5,	// (0x00042c42) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x40d5,	// (0x00042c42) list_double2_large_graphic_pane_g1_cp2

0x40e1,	// (0x00042c4e) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x40e1,	// (0x00042c4e) list_double2_large_graphic_pane_g2_cp2

0x40f2,	// (0x00042c5f) list_double2_large_graphic_pane_g3_cp2

0x40fa,	// (0x00042c67) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x40fa,	// (0x00042c67) list_double2_large_graphic_pane_t1_cp2

0x4110,	// (0x00042c7d) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4110,	// (0x00042c7d) list_double2_large_graphic_pane_t2_cp2

0x62cf,	// (0x00044e3c) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x62cf,	// (0x00044e3c) list_double_large_graphic_pane_g1_cp2

0x62e0,	// (0x00044e4d) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x62e0,	// (0x00044e4d) list_double_large_graphic_pane_g2_cp2

0x4274,	// (0x00042de1) list_double_large_graphic_pane_g3_cp2

0x62f1,	// (0x00044e5e) list_double_large_graphic_pane_g4_cp

0x62f9,	// (0x00044e66) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x62f9,	// (0x00044e66) list_double_large_graphic_pane_t1_cp2

0x6310,	// (0x00044e7d) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x6310,	// (0x00044e7d) list_double_large_graphic_pane_t2_cp2

0x4172,	// (0x00042cdf) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4172,	// (0x00042cdf) list_double2_graphic_pane_g1_cp2

0x4180,	// (0x00042ced) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4180,	// (0x00042ced) list_double2_graphic_pane_g2_cp2

0x4191,	// (0x00042cfe) list_double2_graphic_pane_g3_cp2

0x419b,	// (0x00042d08) list_double2_graphic_pane_t1_cp2_ParamLimits

0x419b,	// (0x00042d08) list_double2_graphic_pane_t1_cp2

0x41b1,	// (0x00042d1e) list_double2_graphic_pane_t2_cp2_ParamLimits

0x41b1,	// (0x00042d1e) list_double2_graphic_pane_t2_cp2

0x41c3,	// (0x00042d30) list_single_number_heading_pane_g1_cp2_ParamLimits

0x41c3,	// (0x00042d30) list_single_number_heading_pane_g1_cp2

0x41cf,	// (0x00042d3c) list_single_number_heading_pane_g2_cp2

0x41d7,	// (0x00042d44) list_single_number_heading_pane_t1_cp2_ParamLimits

0x41d7,	// (0x00042d44) list_single_number_heading_pane_t1_cp2

0x41ed,	// (0x00042d5a) list_single_number_heading_pane_t2_cp2_ParamLimits

0x41ed,	// (0x00042d5a) list_single_number_heading_pane_t2_cp2

0x41ff,	// (0x00042d6c) list_single_number_heading_pane_t3_cp2_ParamLimits

0x41ff,	// (0x00042d6c) list_single_number_heading_pane_t3_cp2

0x41c3,	// (0x00042d30) list_single_heading_pane_g1_cp2_ParamLimits

0x41c3,	// (0x00042d30) list_single_heading_pane_g1_cp2

0x41cf,	// (0x00042d3c) list_single_heading_pane_g2_cp2

0x41d7,	// (0x00042d44) list_single_heading_pane_t1_cp2_ParamLimits

0x41d7,	// (0x00042d44) list_single_heading_pane_t1_cp2

0x60d7,	// (0x00044c44) list_single_heading_pane_t2_cp2_ParamLimits

0x60d7,	// (0x00044c44) list_single_heading_pane_t2_cp2

0x6028,	// (0x00044b95) list_double_graphic_pane_g1_cp2_ParamLimits

0x6028,	// (0x00044b95) list_double_graphic_pane_g1_cp2

0x5ff1,	// (0x00044b5e) list_double_graphic_pane_g2_cp2_ParamLimits

0x5ff1,	// (0x00044b5e) list_double_graphic_pane_g2_cp2

0x6034,	// (0x00044ba1) list_double_graphic_pane_g3_cp2

0x603c,	// (0x00044ba9) list_double_graphic_pane_t1_cp2_ParamLimits

0x603c,	// (0x00044ba9) list_double_graphic_pane_t1_cp2

0x6052,	// (0x00044bbf) list_double_graphic_pane_t2_cp2_ParamLimits

0x6052,	// (0x00044bbf) list_double_graphic_pane_t2_cp2

0x3e91,	// (0x000429fe) list_double_number_pane_g1_cp2_ParamLimits

0x3e91,	// (0x000429fe) list_double_number_pane_g1_cp2

0x4274,	// (0x00042de1) list_double_number_pane_g2_cp2

0x5fdd,	// (0x00044b4a) list_double_number_pane_t1_cp2_ParamLimits

0x5fdd,	// (0x00044b4a) list_double_number_pane_t1_cp2

0x6000,	// (0x00044b6d) list_double_number_pane_t2_cp2_ParamLimits

0x6000,	// (0x00044b6d) list_double_number_pane_t2_cp2

0x6016,	// (0x00044b83) list_double_number_pane_t3_cp2_ParamLimits

0x6016,	// (0x00044b83) list_double_number_pane_t3_cp2

0x5ec6,	// (0x00044a33) list_single_graphic_pane_g1_cp2_ParamLimits

0x5ec6,	// (0x00044a33) list_single_graphic_pane_g1_cp2

0x42cc,	// (0x00042e39) list_single_graphic_pane_g2_cp2_ParamLimits

0x42cc,	// (0x00042e39) list_single_graphic_pane_g2_cp2

0x42d8,	// (0x00042e45) list_single_graphic_pane_g3_cp2

0x5e9c,	// (0x00044a09) list_single_graphic_pane_t1_cp2_ParamLimits

0x5e9c,	// (0x00044a09) list_single_graphic_pane_t1_cp2

0x42cc,	// (0x00042e39) list_single_number_pane_g1_cp2_ParamLimits

0x42cc,	// (0x00042e39) list_single_number_pane_g1_cp2

0x42d8,	// (0x00042e45) list_single_number_pane_g2_cp2

0x5e9c,	// (0x00044a09) list_single_number_pane_t1_cp2_ParamLimits

0x5e9c,	// (0x00044a09) list_single_number_pane_t1_cp2

0x5eb2,	// (0x00044a1f) list_single_number_pane_t2_cp2_ParamLimits

0x5eb2,	// (0x00044a1f) list_single_number_pane_t2_cp2

0x40e1,	// (0x00042c4e) list_double2_pane_g1_cp2_ParamLimits

0x40e1,	// (0x00042c4e) list_double2_pane_g1_cp2

0x40f2,	// (0x00042c5f) list_double2_pane_g2_cp2

0x424c,	// (0x00042db9) list_double2_pane_t1_cp2_ParamLimits

0x424c,	// (0x00042db9) list_double2_pane_t1_cp2

0x4262,	// (0x00042dcf) list_double2_pane_t2_cp2_ParamLimits

0x4262,	// (0x00042dcf) list_double2_pane_t2_cp2

0x3e91,	// (0x000429fe) list_double_pane_g1_cp2_ParamLimits

0x3e91,	// (0x000429fe) list_double_pane_g1_cp2

0x4274,	// (0x00042de1) list_double_pane_g2_cp2

0x427c,	// (0x00042de9) list_double_pane_t1_cp2_ParamLimits

0x427c,	// (0x00042de9) list_double_pane_t1_cp2

0x4292,	// (0x00042dff) list_double_pane_t2_cp2_ParamLimits

0x4292,	// (0x00042dff) list_double_pane_t2_cp2

0x42bc,	// (0x00042e29) list_single_pane_cp2_g3

0x42cc,	// (0x00042e39) list_single_pane_g1_cp2_ParamLimits

0x42cc,	// (0x00042e39) list_single_pane_g1_cp2

0x42d8,	// (0x00042e45) list_single_pane_g2_cp2

0x42e0,	// (0x00042e4d) list_single_pane_t1_cp2_ParamLimits

0x42e0,	// (0x00042e4d) list_single_pane_t1_cp2

0x42f8,	// (0x00042e65) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x42f8,	// (0x00042e65) list_single_large_graphic_pane_g1_cp2

0x4304,	// (0x00042e71) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4304,	// (0x00042e71) list_single_large_graphic_pane_g2_cp2

0x4310,	// (0x00042e7d) list_single_large_graphic_pane_g3_cp2

0x4318,	// (0x00042e85) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4318,	// (0x00042e85) list_single_large_graphic_pane_g4_cp1

0x4332,	// (0x00042e9f) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4332,	// (0x00042e9f) list_single_large_graphic_pane_t1_cp2

0x5e68,	// (0x000449d5) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5e68,	// (0x000449d5) list_single_graphic_heading_pane_g1_cp2

0x5e35,	// (0x000449a2) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5e35,	// (0x000449a2) list_single_graphic_heading_pane_g4_cp2

0x42d8,	// (0x00042e45) list_single_graphic_heading_pane_g5_cp2

0x5e74,	// (0x000449e1) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5e74,	// (0x000449e1) list_single_graphic_heading_pane_t1_cp2

0x5e8a,	// (0x000449f7) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5e8a,	// (0x000449f7) list_single_graphic_heading_pane_t2_cp2

0x5e29,	// (0x00044996) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5e29,	// (0x00044996) list_single_2graphic_pane_g1_cp2

0x5e35,	// (0x000449a2) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5e35,	// (0x000449a2) list_single_2graphic_pane_g2_cp2

0x42d8,	// (0x00042e45) list_single_2graphic_pane_g3_cp2

0x5e46,	// (0x000449b3) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5e46,	// (0x000449b3) list_single_2graphic_pane_g4_cp2

0x5e52,	// (0x000449bf) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5e52,	// (0x000449bf) list_single_2graphic_pane_t1_cp2

0x2dd8,	// (0x00041945) list_highlight_pane_g10_cp1

0x5a01,	// (0x0004456e) list_highlight_pane_g1_cp1

0x5a09,	// (0x00044576) list_highlight_pane_g2_cp1

0x5a11,	// (0x0004457e) list_highlight_pane_g3_cp1

0x5a19,	// (0x00044586) list_highlight_pane_g4_cp1

0x5a21,	// (0x0004458e) list_highlight_pane_g5_cp1

0x5a29,	// (0x00044596) list_highlight_pane_g6_cp1

0x5a31,	// (0x0004459e) list_highlight_pane_g7_cp1

0x5a39,	// (0x000445a6) list_highlight_pane_g8_cp1

0x5a41,	// (0x000445ae) list_highlight_pane_g9_cp1

0xd816,	// (0x0004c383) form_field_slider_pane_t3

0xd824,	// (0x0004c391) form_field_slider_pane_t4

0x593d,	// (0x000444aa) slider_form_pane_ParamLimits

0x593d,	// (0x000444aa) slider_form_pane

0x2de2,	// (0x0004194f) control_abbreviations

0x2de2,	// (0x0004194f) control_conventions

0x2de2,	// (0x0004194f) control_definitions

0x2de2,	// (0x0004194f) format_table_attribute

0x6121,	// (0x00044c8e) bg_popup_preview_window_pane_g9

0x2de2,	// (0x0004194f) format_table_data2

0x2de2,	// (0x0004194f) format_table_data3

0x2de2,	// (0x0004194f) format_table_data_example

0x0008,

0x2de2,	// (0x0004194f) intro_purpose

0xf8ef,	// (0x0004e45c) bg_popup_preview_window_pane_g

0x2de2,	// (0x0004194f) texts_category

0x2de2,	// (0x0004194f) texts_graphics

0x4348,	// (0x00042eb5) text_digital

0x4357,	// (0x00042ec4) text_primary

0x4366,	// (0x00042ed3) text_primary_small

0x4375,	// (0x00042ee2) text_secondary

0x4384,	// (0x00042ef1) text_title

0x682d,	// (0x0004539a) bg_passive_tab_pane_g1_cp3_srt

0x3fec,	// (0x00042b59) bg_passive_tab_pane_g2_cp3_srt

0x6836,	// (0x000453a3) bg_passive_tab_pane_g3_cp3_srt

0x313d,	// (0x00041caa) bg_active_tab_pane_cp3_srt_ParamLimits

0x313d,	// (0x00041caa) bg_active_tab_pane_cp3_srt

0x683f,	// (0x000453ac) tabs_4_active_pane_srt_g1

0xdbd0,	// (0x0004c73d) tabs_4_active_pane_srt_t1_ParamLimits

0xdbd0,	// (0x0004c73d) tabs_4_active_pane_srt_t1

0x682d,	// (0x0004539a) bg_active_tab_pane_g1_cp3_copy1

0x3fec,	// (0x00042b59) bg_active_tab_pane_g2_cp3_copy1

0x6836,	// (0x000453a3) bg_active_tab_pane_g3_cp3_copy1

0x2ec2,	// (0x00041a2f) tabs_2_long_active_pane_srt_ParamLimits

0x2ec2,	// (0x00041a2f) tabs_2_long_active_pane_srt

0x2ec2,	// (0x00041a2f) tabs_2_long_passive_pane_srt_ParamLimits

0x2ec2,	// (0x00041a2f) tabs_2_long_passive_pane_srt

0x46f1,	// (0x0004325e) bg_passive_tab_pane_cp4_srt_ParamLimits

0x46f1,	// (0x0004325e) bg_passive_tab_pane_cp4_srt

0x6565,	// (0x000450d2) bg_passive_tab_pane_g1_cp4_srt

0x3fec,	// (0x00042b59) bg_passive_tab_pane_g2_cp4_srt

0x656e,	// (0x000450db) bg_passive_tab_pane_g3_cp4_srt

0x2ec2,	// (0x00041a2f) bg_active_tab_pane_cp4_srt_ParamLimits

0x2ec2,	// (0x00041a2f) bg_active_tab_pane_cp4_srt

0xd9b6,	// (0x0004c523) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd9b6,	// (0x0004c523) tabs_2_long_active_pane_srt_t1

0x6565,	// (0x000450d2) bg_active_tab_pane_g1_cp4_srt

0x3fec,	// (0x00042b59) bg_active_tab_pane_g2_cp4_srt

0x656e,	// (0x000450db) bg_active_tab_pane_g3_cp4_srt

0x313d,	// (0x00041caa) tabs_3_long_active_pane_srt_ParamLimits

0x313d,	// (0x00041caa) tabs_3_long_active_pane_srt

0x313d,	// (0x00041caa) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x313d,	// (0x00041caa) tabs_3_long_passive_pane_cp_srt

0x313d,	// (0x00041caa) tabs_3_long_passive_pane_srt_ParamLimits

0x313d,	// (0x00041caa) tabs_3_long_passive_pane_srt

0x46f1,	// (0x0004325e) bg_passive_tab_pane_cp5_srt_ParamLimits

0x46f1,	// (0x0004325e) bg_passive_tab_pane_cp5_srt

0x4076,	// (0x00042be3) bg_passive_tab_pane_g1_cp5_srt

0x3fec,	// (0x00042b59) bg_passive_tab_pane_g2_cp5_srt

0x407f,	// (0x00042bec) bg_passive_tab_pane_g3_cp5_srt

0x2ec2,	// (0x00041a2f) bg_active_tab_pane_cp5_srt_ParamLimits

0x2ec2,	// (0x00041a2f) bg_active_tab_pane_cp5_srt

0xd9a0,	// (0x0004c50d) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd9a0,	// (0x0004c50d) tabs_3_long_active_pane_srt_t1

0x4076,	// (0x00042be3) bg_active_tab_pane_g1_cp5_srt

0x3fec,	// (0x00042b59) bg_active_tab_pane_g2_cp5_srt

0x407f,	// (0x00042bec) bg_active_tab_pane_g3_cp5_srt

0x6545,	// (0x000450b2) navi_text_pane_srt_t1

0x653d,	// (0x000450aa) navi_icon_pane_srt_g1

0x4557,	// (0x000430c4) midp_editing_number_pane_srt

0x4393,	// (0x00042f00) midp_ticker_pane_srt

0x455f,	// (0x000430cc) midp_ticker_pane_srt_g1

0x4567,	// (0x000430d4) midp_ticker_pane_srt_g2

0x0001,

0xf785,	// (0x0004e2f2) midp_ticker_pane_srt_g

0x456f,	// (0x000430dc) midp_ticker_pane_srt_t1

0x652e,	// (0x0004509b) midp_editing_number_pane_t1_copy1

0xcbcb,	// (0x0004b738) listscroll_midp_pane

0xcbcb,	// (0x0004b738) midp_form_pane

0x4409,	// (0x00042f76) midp_info_popup_window_ParamLimits

0x4409,	// (0x00042f76) midp_info_popup_window

0x37e6,	// (0x00042353) bg_popup_sub_pane_cp50_ParamLimits

0x37e6,	// (0x00042353) bg_popup_sub_pane_cp50

0x562d,	// (0x0004419a) listscroll_midp_info_pane_ParamLimits

0x562d,	// (0x0004419a) listscroll_midp_info_pane

0x5615,	// (0x00044182) listscroll_form_midp_pane_ParamLimits

0x5615,	// (0x00044182) listscroll_form_midp_pane

0x5621,	// (0x0004418e) scroll_bar_cp050

0xd80a,	// (0x0004c377) list_midp_pane

0x7249,	// (0x00045db6) signal_pane_g2_cp

0x552f,	// (0x0004409c) listscroll_midp_info_pane_t1_ParamLimits

0x552f,	// (0x0004409c) listscroll_midp_info_pane_t1

0x5547,	// (0x000440b4) listscroll_midp_info_pane_t2_ParamLimits

0x5547,	// (0x000440b4) listscroll_midp_info_pane_t2

0x5585,	// (0x000440f2) listscroll_midp_info_pane_t3_ParamLimits

0x5585,	// (0x000440f2) listscroll_midp_info_pane_t3

0x55bf,	// (0x0004412c) listscroll_midp_info_pane_t4_ParamLimits

0x55bf,	// (0x0004412c) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x0004e397) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x0004e397) listscroll_midp_info_pane_t

0x38a8,	// (0x00042415) scroll_pane_cp21

0x54cd,	// (0x0004403a) form_midp_field_choice_group_pane

0x54d6,	// (0x00044043) form_midp_field_text_pane

0x5515,	// (0x00044082) form_midp_field_time_pane

0x551d,	// (0x0004408a) form_midp_gauge_slider_pane

0x5526,	// (0x00044093) form_midp_gauge_wait_pane

0x2de2,	// (0x0004194f) form_midp_image_pane

0xba34,	// (0x0004a5a1) list_single_midp_pane_ParamLimits

0xba34,	// (0x0004a5a1) list_single_midp_pane

0xd7e8,	// (0x0004c355) form_midp_field_text_pane_t1

0x5277,	// (0x00043de4) input_focus_pane_cp050

0x54bc,	// (0x00044029) list_midp_form_text_pane

0x5454,	// (0x00043fc1) form_midp_field_choice_group_pane_t1

0x5462,	// (0x00043fcf) input_focus_pane_cp051

0x5476,	// (0x00043fe3) list_midp_choice_pane

0x2de2,	// (0x0004194f) status_idle_pane

0x5438,	// (0x00043fa5) form_midp_field_time_pane_t1

0x2dd8,	// (0x00041945) wait_anim_pane_g2_copy1

0x5446,	// (0x00043fb3) form_midp_field_time_pane_t2

0x0001,

0x44b7,	// (0x00043024) aid_navinavi_width_2_pane

0xf825,	// (0x0004e392) form_midp_field_time_pane_t

0x2de2,	// (0x0004194f) input_focus_pane_cp052

0x2de2,	// (0x0004194f) bg_input_focus_pane_cp040

0x53f8,	// (0x00043f65) form_midp_gauge_slider_pane_t1

0x5406,	// (0x00043f73) form_midp_gauge_slider_pane_t2

0xd7cc,	// (0x0004c339) form_midp_gauge_slider_pane_t3

0xd7da,	// (0x0004c347) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x0004e389) form_midp_gauge_slider_pane_t

0x5430,	// (0x00043f9d) form_midp_slider_pane

0x2ec2,	// (0x00041a2f) bg_input_focus_pane_cp041_ParamLimits

0x2ec2,	// (0x00041a2f) bg_input_focus_pane_cp041

0x53c5,	// (0x00043f32) form_midp_gauge_wait_pane_t1_ParamLimits

0x53c5,	// (0x00043f32) form_midp_gauge_wait_pane_t1

0x53d7,	// (0x00043f44) form_midp_gauge_wait_pane_t2_ParamLimits

0x53d7,	// (0x00043f44) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x0004e384) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x0004e384) form_midp_gauge_wait_pane_t

0x53e9,	// (0x00043f56) form_midp_wait_pane_ParamLimits

0x53e9,	// (0x00043f56) form_midp_wait_pane

0x538f,	// (0x00043efc) form_midp_image_pane_g1

0x5398,	// (0x00043f05) form_midp_image_pane_t1

0x53a7,	// (0x00043f14) form_midp_image_pane_t2

0x53b6,	// (0x00043f23) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x0004e37d) form_midp_image_pane_t

0x5386,	// (0x00043ef3) list_single_midp_pane_g1

0x0b04,	// (0x0003f671) list_single_midp_pane_t1

0xd7b7,	// (0x0004c324) list_midp_form_item_pane_ParamLimits

0xd7b7,	// (0x0004c324) list_midp_form_item_pane

0x445f,	// (0x00042fcc) list_midp_form_item_pane_t1

0x446e,	// (0x00042fdb) midp_ticker_pane_g1

0x447a,	// (0x00042fe7) midp_ticker_pane_g2

0x0001,

0xf76b,	// (0x0004e2d8) midp_ticker_pane_g

0xcc73,	// (0x0004b7e0) midp_ticker_pane_t1

0xdb21,	// (0x0004c68e) midp_editing_number_pane_t1

0x675d,	// (0x000452ca) midp_editing_number_pane

0x676c,	// (0x000452d9) midp_ticker_pane

0x651e,	// (0x0004508b) ai_message_heading_pane

0x2de2,	// (0x0004194f) bg_popup_window_pane_cp14

0x6526,	// (0x00045093) listscroll_ai_message_pane

0x64a8,	// (0x00045015) ai_message_heading_pane_g1_ParamLimits

0x64a8,	// (0x00045015) ai_message_heading_pane_g1

0x64b4,	// (0x00045021) ai_message_heading_pane_g2_ParamLimits

0x64b4,	// (0x00045021) ai_message_heading_pane_g2

0x64c0,	// (0x0004502d) ai_message_heading_pane_g3_ParamLimits

0x64c0,	// (0x0004502d) ai_message_heading_pane_g3

0x64cc,	// (0x00045039) ai_message_heading_pane_g4_ParamLimits

0x64cc,	// (0x00045039) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x0004e4be) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x0004e4be) ai_message_heading_pane_g

0x64d8,	// (0x00045045) ai_message_heading_pane_t1_ParamLimits

0x64d8,	// (0x00045045) ai_message_heading_pane_t1

0x64f2,	// (0x0004505f) ai_message_heading_pane_t2_ParamLimits

0x64f2,	// (0x0004505f) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x0004e4c7) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x0004e4c7) ai_message_heading_pane_t

0x6504,	// (0x00045071) bg_popup_heading_pane_cp1_ParamLimits

0x6504,	// (0x00045071) bg_popup_heading_pane_cp1

0x6496,	// (0x00045003) list_ai_message_pane_ParamLimits

0x6496,	// (0x00045003) list_ai_message_pane

0x38a8,	// (0x00042415) scroll_pane_cp10

0x6432,	// (0x00044f9f) list_ai_message_pane_g1

0x643a,	// (0x00044fa7) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x0004e49b) list_ai_message_pane_g

0x6442,	// (0x00044faf) list_ai_message_pane_t1_ParamLimits

0x6442,	// (0x00044faf) list_ai_message_pane_t1

0x6457,	// (0x00044fc4) list_ai_message_pane_t2_ParamLimits

0x6457,	// (0x00044fc4) list_ai_message_pane_t2

0x646c,	// (0x00044fd9) list_ai_message_pane_t3_ParamLimits

0x646c,	// (0x00044fd9) list_ai_message_pane_t3

0x6481,	// (0x00044fee) list_ai_message_pane_t4_ParamLimits

0x6481,	// (0x00044fee) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x0004e4a0) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x0004e4a0) list_ai_message_pane_t

0xd97f,	// (0x0004c4ec) cell_ai_soft_ind_pane_ParamLimits

0xd97f,	// (0x0004c4ec) cell_ai_soft_ind_pane

0x4498,	// (0x00043005) cell_ai_soft_ind_pane_g1_ParamLimits

0x4498,	// (0x00043005) cell_ai_soft_ind_pane_g1

0x2de2,	// (0x0004194f) grid_highlight_cp1

0x44a5,	// (0x00043012) text_secondary_cp56_ParamLimits

0x44a5,	// (0x00043012) text_secondary_cp56

0x63f2,	// (0x00044f5f) example_general_pane_ParamLimits

0x63f2,	// (0x00044f5f) example_general_pane

0x63fe,	// (0x00044f6b) example_parent_pane_g1_ParamLimits

0x63fe,	// (0x00044f6b) example_parent_pane_g1

0x640a,	// (0x00044f77) example_parent_pane_t1_ParamLimits

0x640a,	// (0x00044f77) example_parent_pane_t1

0xd08e,	// (0x0004bbfb) popup_preview_text_window_ParamLimits

0xd08e,	// (0x0004bbfb) popup_preview_text_window

0x42c4,	// (0x00042e31) list_single_pane_cp2_g4

0x31f3,	// (0x00041d60) bg_popup_preview_window_pane_ParamLimits

0x31f3,	// (0x00041d60) bg_popup_preview_window_pane

0x6129,	// (0x00044c96) popup_preview_text_window_t1_ParamLimits

0x6129,	// (0x00044c96) popup_preview_text_window_t1

0x6147,	// (0x00044cb4) popup_preview_text_window_t2_ParamLimits

0x6147,	// (0x00044cb4) popup_preview_text_window_t2

0x6190,	// (0x00044cfd) popup_preview_text_window_t3_ParamLimits

0x6190,	// (0x00044cfd) popup_preview_text_window_t3

0x61d5,	// (0x00044d42) popup_preview_text_window_t4_ParamLimits

0x61d5,	// (0x00044d42) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x0004e46f) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x0004e46f) popup_preview_text_window_t

0x6253,	// (0x00044dc0) scroll_pane_cp11

0x5187,	// (0x00043cf4) bg_popup_preview_window_pane_g1

0x60e9,	// (0x00044c56) bg_popup_preview_window_pane_g2

0x60f1,	// (0x00044c5e) bg_popup_preview_window_pane_g3

0x60f9,	// (0x00044c66) bg_popup_preview_window_pane_g4

0x6101,	// (0x00044c6e) bg_popup_preview_window_pane_g5

0x6109,	// (0x00044c76) bg_popup_preview_window_pane_g6

0x6111,	// (0x00044c7e) bg_popup_preview_window_pane_g7

0x6119,	// (0x00044c86) bg_popup_preview_window_pane_g8

0x1065,	// (0x0003fbd2) aid_popup_width_pane

0xd00a,	// (0x0004bb77) popup_midp_note_alarm_window_ParamLimits

0xd00a,	// (0x0004bb77) popup_midp_note_alarm_window

0x3722,	// (0x0004228f) data_form_pane_ParamLimits

0xb896,	// (0x0004a403) form_field_data_pane_g1

0xb8a0,	// (0x0004a40d) form_field_data_pane_t1_ParamLimits

0x372e,	// (0x0004229b) input_focus_pane_ParamLimits

0x373c,	// (0x000422a9) data_form_wide_pane_ParamLimits

0x082e,	// (0x0003f39b) form_field_data_wide_pane_g1

0x083a,	// (0x0003f3a7) form_field_data_wide_pane_t1_ParamLimits

0x349f,	// (0x0004200c) input_focus_pane_cp6_ParamLimits

0xc9dd,	// (0x0004b54a) input_popup_find_pane_g1_ParamLimits

0xc9dd,	// (0x0004b54a) input_popup_find_pane_g1

0x164b,	// (0x000401b8) aid_navi_side_left_pane

0x1660,	// (0x000401cd) aid_navi_side_right_pane

0x5afc,	// (0x00044669) bg_popup_window_pane_cp30_ParamLimits

0x5afc,	// (0x00044669) bg_popup_window_pane_cp30

0x5b76,	// (0x000446e3) popup_midp_note_alarm_window_g1_ParamLimits

0x5b76,	// (0x000446e3) popup_midp_note_alarm_window_g1

0x5ba6,	// (0x00044713) popup_midp_note_alarm_window_t1_ParamLimits

0x5ba6,	// (0x00044713) popup_midp_note_alarm_window_t1

0x5c47,	// (0x000447b4) popup_midp_note_alarm_window_t2_ParamLimits

0x5c47,	// (0x000447b4) popup_midp_note_alarm_window_t2

0x5cf5,	// (0x00044862) popup_midp_note_alarm_window_t3_ParamLimits

0x5cf5,	// (0x00044862) popup_midp_note_alarm_window_t3

0x5d27,	// (0x00044894) popup_midp_note_alarm_window_t4_ParamLimits

0x5d27,	// (0x00044894) popup_midp_note_alarm_window_t4

0x5d4d,	// (0x000448ba) popup_midp_note_alarm_window_t5_ParamLimits

0x5d4d,	// (0x000448ba) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x0004e40c) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x0004e40c) popup_midp_note_alarm_window_t

0x5df9,	// (0x00044966) wait_bar_pane_cp1_ParamLimits

0x5df9,	// (0x00044966) wait_bar_pane_cp1

0x2de2,	// (0x0004194f) wait_anim_pane_copy1

0x2de2,	// (0x0004194f) wait_border_pane_copy1

0x57e2,	// (0x0004434f) wait_border_pane_g1_copy1

0x0854,	// (0x0003f3c1) form_field_popup_pane_g1

0xb8ba,	// (0x0004a427) form_field_popup_pane_t1_ParamLimits

0x372e,	// (0x0004229b) input_focus_pane_cp7_ParamLimits

0x3768,	// (0x000422d5) list_form_pane_ParamLimits

0x0874,	// (0x0003f3e1) form_field_popup_wide_pane_g1

0x087c,	// (0x0003f3e9) form_field_popup_wide_pane_t1_ParamLimits

0x372e,	// (0x0004229b) input_focus_pane_cp8_ParamLimits

0x3774,	// (0x000422e1) list_form_wide_pane_ParamLimits

0x68b9,	// (0x00045426) aid_size_cell_graphic_pane

0xb939,	// (0x0004a4a6) data_form_pane_t1_ParamLimits

0xba5e,	// (0x0004a5cb) data_form_wide_pane_t1_ParamLimits

0xd443,	// (0x0004bfb0) bg_status_flat_pane

0xc623,	// (0x0004b190) title_pane_t1_ParamLimits

0x2e8a,	// (0x000419f7) title_pane_t2_ParamLimits

0x2eb0,	// (0x00041a1d) title_pane_t3_ParamLimits

0xf573,	// (0x0004e0e0) title_pane_t_ParamLimits

0x3d29,	// (0x00042896) level_1_signal_ParamLimits

0x3d36,	// (0x000428a3) level_2_signal_ParamLimits

0x3d43,	// (0x000428b0) level_3_signal_ParamLimits

0x3d50,	// (0x000428bd) level_4_signal_ParamLimits

0x3d5d,	// (0x000428ca) level_5_signal_ParamLimits

0x3d6a,	// (0x000428d7) level_6_signal_ParamLimits

0x3d77,	// (0x000428e4) level_7_signal_ParamLimits

0x3d29,	// (0x00042896) level_1_battery_ParamLimits

0x3d36,	// (0x000428a3) level_2_battery_ParamLimits

0x3d43,	// (0x000428b0) level_3_battery_ParamLimits

0x3d50,	// (0x000428bd) level_4_battery_ParamLimits

0x3d5d,	// (0x000428ca) level_5_battery_ParamLimits

0x3d6a,	// (0x000428d7) level_6_battery_ParamLimits

0x3d77,	// (0x000428e4) level_7_battery_ParamLimits

0x5a01,	// (0x0004456e) bg_status_flat_pane_g1

0x5a09,	// (0x00044576) bg_status_flat_pane_g2

0x5a11,	// (0x0004457e) bg_status_flat_pane_g3

0x5a19,	// (0x00044586) bg_status_flat_pane_g4

0x5a21,	// (0x0004458e) bg_status_flat_pane_g5

0x5a29,	// (0x00044596) bg_status_flat_pane_g6

0x5a31,	// (0x0004459e) bg_status_flat_pane_g7

0xc6b7,	// (0x0004b224) tabs_3_active_pane_t1_ParamLimits

0xc6b7,	// (0x0004b224) tabs_3_passive_pane_t1_ParamLimits

0xc6d1,	// (0x0004b23e) tabs_4_active_pane_t1_ParamLimits

0xc6d1,	// (0x0004b23e) tabs_4_1_passive_pane_t1_ParamLimits

0xc9f3,	// (0x0004b560) tabs_2_active_pane_t1_ParamLimits

0xc9f3,	// (0x0004b560) tabs_2_passive_pane_t1_ParamLimits

0x2ec2,	// (0x00041a2f) bg_active_tab_pane_cp4_ParamLimits

0xca05,	// (0x0004b572) tabs_2_long_active_pane_t1_ParamLimits

0x46f1,	// (0x0004325e) bg_passive_tab_pane_cp4_ParamLimits

0x1bde,	// (0x0004074b) list_single_midp_graphic_pane_t1_ParamLimits

0x2ec2,	// (0x00041a2f) bg_active_tab_pane_cp5_ParamLimits

0xca18,	// (0x0004b585) tabs_3_long_active_pane_t1_ParamLimits

0x46f1,	// (0x0004325e) bg_passive_tab_pane_cp5_ParamLimits

0x1bde,	// (0x0004074b) list_single_midp_graphic_pane_t1

0xd443,	// (0x0004bfb0) bg_status_flat_pane_ParamLimits

0x4e1e,	// (0x0004398b) indicator_pane_cp2_ParamLimits

0x4e1e,	// (0x0004398b) indicator_pane_cp2

0xd5ba,	// (0x0004c127) navi_pane_srt_ParamLimits

0xd5ba,	// (0x0004c127) navi_pane_srt

0x4f66,	// (0x00043ad3) popup_clock_digital_analogue_window_cp1

0x2f9f,	// (0x00041b0c) indicator_pane_t1

0x4393,	// (0x00042f00) copy_highlight_pane

0x4393,	// (0x00042f00) cursor_graphics_pane

0x4393,	// (0x00042f00) graphic_within_text_pane

0x4393,	// (0x00042f00) link_highlight_pane

0x6216,	// (0x00044d83) popup_preview_text_window_t5_ParamLimits

0x6216,	// (0x00044d83) popup_preview_text_window_t5

0x44bf,	// (0x0004302c) cursor_digital_pane

0x44bf,	// (0x0004302c) cursor_primary_pane

0x44d0,	// (0x0004303d) cursor_primary_small_pane

0x44d8,	// (0x00043045) cursor_secondary_pane

0x44e0,	// (0x0004304d) cursor_title_pane

0x44bf,	// (0x0004302c) link_highlight_digital_pane

0x44c7,	// (0x00043034) link_highlight_primary_pane

0x44d0,	// (0x0004303d) link_highlight_primary_small_pane

0x44d8,	// (0x00043045) link_highlight_secondary_pane

0x44e0,	// (0x0004304d) link_highlight_title_pane

0x44bf,	// (0x0004302c) copy_highlight_digital_pane

0x44bf,	// (0x0004302c) copy_highlight_primary_pane

0x44d0,	// (0x0004303d) copy_highlight_primary_small_pane

0x44d8,	// (0x00043045) copy_highlight_secondary_pane

0x44e0,	// (0x0004304d) copy_highlight_title_pane

0x44d8,	// (0x00043045) graphic_text_digital_pane

0x5a9f,	// (0x0004460c) graphic_text_primary_pane

0x5aa8,	// (0x00044615) graphic_text_primary_small_pane

0x44d0,	// (0x0004303d) graphic_text_secondary_pane

0x44bf,	// (0x0004302c) graphic_text_title_pane

0xcc85,	// (0x0004b7f2) cursor_primary_pane_g1

0x5a91,	// (0x000445fe) cursor_text_primary_t1

0xd846,	// (0x0004c3b3) cursor_primary_small_pane_g1

0x5a83,	// (0x000445f0) cursor_text_primary_small_t1

0xd83c,	// (0x0004c3a9) cursor_primary_small_pane_g1_copy1

0x5a6b,	// (0x000445d8) cursor_text_primary_small_t1_copy1

0x5a49,	// (0x000445b6) cursor_text_title_t1

0xd832,	// (0x0004c39f) cursor_title_pane_g1

0xcc85,	// (0x0004b7f2) cursor_digital_pane_g1

0x44f2,	// (0x0004305f) cursor_text_digital_t1

0x4517,	// (0x00043084) link_highlight_primary_pane_g1

0x59f2,	// (0x0004455f) link_highlight_primary_pane_t1

0x4500,	// (0x0004306d) link_highlight_primary_small_pane_g1

0x4508,	// (0x00043075) link_highlight_primary_small_pane_t1

0x4517,	// (0x00043084) link_highlight_secondary_pane_g1

0x451f,	// (0x0004308c) link_highlight_secondary_pane_t1

0x5966,	// (0x000444d3) link_highlight_title_pane_g1

0x596e,	// (0x000444db) link_highlight_title_pane_t1

0x594f,	// (0x000444bc) link_highlight_digital_pane_g1

0x5957,	// (0x000444c4) link_highlight_digital_pane_t1

0x5827,	// (0x00044394) copy_highlight_primary_pane_g1

0x582f,	// (0x0004439c) copy_highlight_primary_pane_t1

0x5801,	// (0x0004436e) copy_highlight_primary_small_pane_g1

0x5818,	// (0x00044385) copy_highlight_primary_small_pane_t1

0x452e,	// (0x0004309b) copy_highlight_secondary_pane_g1

0x4536,	// (0x000430a3) copy_highlight_secondary_pane_t1

0x5801,	// (0x0004436e) copy_highlight_title_pane_g1

0x5809,	// (0x00044376) copy_highlight_title_pane_t1

0x5827,	// (0x00044394) copy_highlight_digital_pane_g1

0x6a83,	// (0x000455f0) copy_highlight_digital_pane_t1

0x69d7,	// (0x00045544) graphic_text_primary_pane_g1

0x6a67,	// (0x000455d4) graphic_text_primary_pane_t1

0x6a75,	// (0x000455e2) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x0004e53b) graphic_text_primary_pane_t

0x6a43,	// (0x000455b0) graphic_text_primary_small_pane_g1

0x6a4b,	// (0x000455b8) graphic_text_primary_small_pane_t1

0x6a59,	// (0x000455c6) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x0004e536) graphic_text_primary_small_pane_t

0x6a1f,	// (0x0004558c) graphic_text_secondary_pane_g1

0x6a27,	// (0x00045594) graphic_text_secondary_pane_t1

0x6a35,	// (0x000455a2) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x0004e531) graphic_text_secondary_pane_t

0x69fb,	// (0x00045568) graphic_text_title_pane_g1

0x6a03,	// (0x00045570) graphic_text_title_pane_t1

0x6a11,	// (0x0004557e) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x0004e52c) graphic_text_title_pane_t

0x69d7,	// (0x00045544) graphic_text_digital_pane_g1

0x69df,	// (0x0004554c) graphic_text_digital_pane_t1

0x69ed,	// (0x0004555a) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x0004e527) graphic_text_digital_pane_t

0x2ec2,	// (0x00041a2f) navi_icon_pane_srt_ParamLimits

0x2ec2,	// (0x00041a2f) navi_icon_pane_srt

0x2de2,	// (0x0004194f) navi_midp_pane_srt

0x2de2,	// (0x0004194f) navi_navi_pane_srt

0x2ec2,	// (0x00041a2f) navi_text_pane_srt_ParamLimits

0x2ec2,	// (0x00041a2f) navi_text_pane_srt

0x69a2,	// (0x0004550f) navi_navi_icon_text_pane_srt

0x69aa,	// (0x00045517) navi_navi_pane_srt_g1_ParamLimits

0x69aa,	// (0x00045517) navi_navi_pane_srt_g1

0x69bc,	// (0x00045529) navi_navi_pane_srt_g2_ParamLimits

0x69bc,	// (0x00045529) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x0004e522) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x0004e522) navi_navi_pane_srt_g

0x69ce,	// (0x0004553b) navi_navi_tabs_pane_srt

0x69a2,	// (0x0004550f) navi_navi_text_pane_srt

0x69a2,	// (0x0004550f) navi_navi_volume_pane_srt

0x6993,	// (0x00045500) navi_navi_text_pane_srt_t1

0x1ffc,	// (0x00040b69) navi_navi_volume_pane_srt_g1

0x2004,	// (0x00040b71) volume_small_pane_srt_ParamLimits

0x2004,	// (0x00040b71) volume_small_pane_srt

0x192b,	// (0x00040498) volume_small_pane_srt_g1_ParamLimits

0x192b,	// (0x00040498) volume_small_pane_srt_g1

0x193b,	// (0x000404a8) volume_small_pane_srt_g2_ParamLimits

0x193b,	// (0x000404a8) volume_small_pane_srt_g2

0x194c,	// (0x000404b9) volume_small_pane_srt_g3_ParamLimits

0x194c,	// (0x000404b9) volume_small_pane_srt_g3

0x195d,	// (0x000404ca) volume_small_pane_srt_g4_ParamLimits

0x195d,	// (0x000404ca) volume_small_pane_srt_g4

0x196e,	// (0x000404db) volume_small_pane_srt_g5_ParamLimits

0x196e,	// (0x000404db) volume_small_pane_srt_g5

0x197f,	// (0x000404ec) volume_small_pane_srt_g6_ParamLimits

0x197f,	// (0x000404ec) volume_small_pane_srt_g6

0x1990,	// (0x000404fd) volume_small_pane_srt_g7_ParamLimits

0x1990,	// (0x000404fd) volume_small_pane_srt_g7

0x19a1,	// (0x0004050e) volume_small_pane_srt_g8_ParamLimits

0x19a1,	// (0x0004050e) volume_small_pane_srt_g8

0x19b2,	// (0x0004051f) volume_small_pane_srt_g9_ParamLimits

0x19b2,	// (0x0004051f) volume_small_pane_srt_g9

0x19c3,	// (0x00040530) volume_small_pane_srt_g10_ParamLimits

0x19c3,	// (0x00040530) volume_small_pane_srt_g10

0x0009,

0xf770,	// (0x0004e2dd) volume_small_pane_srt_g_ParamLimits

0xf770,	// (0x0004e2dd) volume_small_pane_srt_g

0x329c,	// (0x00041e09) query_popup_data_pane_cp2

0x6979,	// (0x000454e6) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6979,	// (0x000454e6) navi_navi_icon_text_pane_srt_t1

0x5a9f,	// (0x0004460c) navi_tabs_2_long_pane_srt

0x5a9f,	// (0x0004460c) navi_tabs_2_pane_srt

0x5a9f,	// (0x0004460c) navi_tabs_3_long_pane_srt

0x5a9f,	// (0x0004460c) navi_tabs_3_pane_srt

0x5a9f,	// (0x0004460c) navi_tabs_4_pane_srt

0x1fdc,	// (0x00040b49) tabs_2_active_pane_srt_ParamLimits

0x1fdc,	// (0x00040b49) tabs_2_active_pane_srt

0x1fec,	// (0x00040b59) tabs_2_passive_pane_srt_ParamLimits

0x1fec,	// (0x00040b59) tabs_2_passive_pane_srt

0x5277,	// (0x00043de4) bg_passive_tab_pane_cp1_srt_ParamLimits

0x5277,	// (0x00043de4) bg_passive_tab_pane_cp1_srt

0x6945,	// (0x000454b2) bg_passive_tab_pane_g1_cp1_srt

0x3fec,	// (0x00042b59) bg_passive_tab_pane_g2_cp1_srt

0x694e,	// (0x000454bb) bg_passive_tab_pane_g3_cp1_srt

0x313d,	// (0x00041caa) bg_active_tab_pane_cp1_srt_ParamLimits

0x313d,	// (0x00041caa) bg_active_tab_pane_cp1_srt

0x6957,	// (0x000454c4) tabs_2_active_pane_srt_g1

0xdc4c,	// (0x0004c7b9) tabs_2_active_pane_srt_t1_ParamLimits

0xdc4c,	// (0x0004c7b9) tabs_2_active_pane_srt_t1

0x6945,	// (0x000454b2) bg_active_tab_pane_g1_cp1_srt

0x3fec,	// (0x00042b59) bg_active_tab_pane_g2_cp1_srt

0x694e,	// (0x000454bb) bg_active_tab_pane_g3_cp1_srt

0x1fa9,	// (0x00040b16) tabs_3_active_pane_srt_ParamLimits

0x1fa9,	// (0x00040b16) tabs_3_active_pane_srt

0x1fba,	// (0x00040b27) tabs_3_passive_pane_cp_srt_ParamLimits

0x1fba,	// (0x00040b27) tabs_3_passive_pane_cp_srt

0x1fcb,	// (0x00040b38) tabs_3_passive_pane_srt_ParamLimits

0x1fcb,	// (0x00040b38) tabs_3_passive_pane_srt

0x5277,	// (0x00043de4) bg_passive_tab_pane_cp2_srt_ParamLimits

0x5277,	// (0x00043de4) bg_passive_tab_pane_cp2_srt

0x4545,	// (0x000430b2) bg_passive_tab_pane_g1_cp2_srt

0x3fec,	// (0x00042b59) bg_passive_tab_pane_g2_cp2_srt

0x454e,	// (0x000430bb) bg_passive_tab_pane_g3_cp2_srt

0x313d,	// (0x00041caa) bg_active_tab_pane_cp2_srt_ParamLimits

0x313d,	// (0x00041caa) bg_active_tab_pane_cp2_srt

0x692b,	// (0x00045498) tabs_3_active_pane_srt_g1

0xdc36,	// (0x0004c7a3) tabs_3_active_pane_srt_t1_ParamLimits

0xdc36,	// (0x0004c7a3) tabs_3_active_pane_srt_t1

0x4545,	// (0x000430b2) bg_active_tab_pane_g1_cp2_srt

0x3fec,	// (0x00042b59) bg_active_tab_pane_g2_cp2_srt

0x454e,	// (0x000430bb) bg_active_tab_pane_g3_cp2_srt

0x1f61,	// (0x00040ace) tabs_4_active_pane_srt_ParamLimits

0x1f61,	// (0x00040ace) tabs_4_active_pane_srt

0x1f73,	// (0x00040ae0) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1f73,	// (0x00040ae0) tabs_4_passive_pane_cp2_srt

0x46a3,	// (0x00043210) aid_size_cell_toolbar

0x65d6,	// (0x00045143) main_idle_act_pane_ParamLimits

0x488e,	// (0x000433fb) popup_large_graphic_colour_window_ParamLimits

0xd30e,	// (0x0004be7b) popup_toolbar_window_ParamLimits

0xd30e,	// (0x0004be7b) popup_toolbar_window

0x678e,	// (0x000452fb) list_single_graphic_2heading_pane_ParamLimits

0x678e,	// (0x000452fb) list_single_graphic_2heading_pane

0x3ad8,	// (0x00042645) aid_size_cell_apps_grid_lsc_pane

0x3aea,	// (0x00042657) aid_size_cell_apps_grid_prt_pane

0x46f1,	// (0x0004325e) bg_wml_button_pane_cp1_ParamLimits

0x46f1,	// (0x0004325e) bg_wml_button_pane_cp1

0xd7e8,	// (0x0004c355) form_midp_field_text_pane_t1_ParamLimits

0x5277,	// (0x00043de4) input_focus_pane_cp050_ParamLimits

0x54bc,	// (0x00044029) list_midp_form_text_pane_ParamLimits

0x5462,	// (0x00043fcf) input_focus_pane_cp051_ParamLimits

0x5476,	// (0x00043fe3) list_midp_choice_pane_ParamLimits

0xd783,	// (0x0004c2f0) list_single_2graphic_pane_cp3_ParamLimits

0xd783,	// (0x0004c2f0) list_single_2graphic_pane_cp3

0xd797,	// (0x0004c304) list_single_midp_graphic_pane_ParamLimits

0xd797,	// (0x0004c304) list_single_midp_graphic_pane

0x0a4c,	// (0x0003f5b9) list_single_graphic_2heading_pane_g1_ParamLimits

0x0a4c,	// (0x0003f5b9) list_single_graphic_2heading_pane_g1

0x0a58,	// (0x0003f5c5) list_single_graphic_2heading_pane_g4_ParamLimits

0x0a58,	// (0x0003f5c5) list_single_graphic_2heading_pane_g4

0x0a64,	// (0x0003f5d1) list_single_graphic_2heading_pane_g5_ParamLimits

0x0a64,	// (0x0003f5d1) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c3,	// (0x0004e330) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c3,	// (0x0004e330) list_single_graphic_2heading_pane_g

0x0a70,	// (0x0003f5dd) list_single_graphic_2heading_pane_t1_ParamLimits

0x0a70,	// (0x0003f5dd) list_single_graphic_2heading_pane_t1

0x0a84,	// (0x0003f5f1) list_single_graphic_2heading_pane_t2_ParamLimits

0x0a84,	// (0x0003f5f1) list_single_graphic_2heading_pane_t2

0x0aa0,	// (0x0003f60d) list_single_graphic_2heading_pane_t3_ParamLimits

0x0aa0,	// (0x0003f60d) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ca,	// (0x0004e337) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ca,	// (0x0004e337) list_single_graphic_2heading_pane_t

0x50c5,	// (0x00043c32) bg_popup_sub_pane_cp2

0x50ef,	// (0x00043c5c) grid_toobar_pane

0x1b4d,	// (0x000406ba) cell_toolbar_pane_ParamLimits

0x1b4d,	// (0x000406ba) cell_toolbar_pane

0x512b,	// (0x00043c98) cell_toolbar_pane_g1_ParamLimits

0x512b,	// (0x00043c98) cell_toolbar_pane_g1

0x513f,	// (0x00043cac) cell_toolbar_pane_g2_ParamLimits

0x513f,	// (0x00043cac) cell_toolbar_pane_g2

0x0001,

0xf7d1,	// (0x0004e33e) cell_toolbar_pane_g_ParamLimits

0xf7d1,	// (0x0004e33e) cell_toolbar_pane_g

0x5161,	// (0x00043cce) grid_highlight_pane_cp2_ParamLimits

0x5161,	// (0x00043cce) grid_highlight_pane_cp2

0x517b,	// (0x00043ce8) toolbar_button_pane

0x5187,	// (0x00043cf4) toolbar_button_pane_g1

0x518f,	// (0x00043cfc) toolbar_button_pane_g2

0x5197,	// (0x00043d04) toolbar_button_pane_g3

0x519f,	// (0x00043d0c) toolbar_button_pane_g4

0x51a7,	// (0x00043d14) toolbar_button_pane_g5

0x51af,	// (0x00043d1c) toolbar_button_pane_g6

0x51b7,	// (0x00043d24) toolbar_button_pane_g7

0x51bf,	// (0x00043d2c) toolbar_button_pane_g8

0x51c7,	// (0x00043d34) toolbar_button_pane_g9

0x0009,

0xf7d6,	// (0x0004e343) toolbar_button_pane_g

0x1b91,	// (0x000406fe) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1b91,	// (0x000406fe) list_single_2graphic_pane_g1_cp3

0xbf1c,	// (0x0004aa89) list_single_2graphic_pane_g2_cp3_ParamLimits

0xbf1c,	// (0x0004aa89) list_single_2graphic_pane_g2_cp3

0x1bae,	// (0x0004071b) list_single_2graphic_pane_g3_cp3

0x1bb6,	// (0x00040723) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1bb6,	// (0x00040723) list_single_2graphic_pane_g4_cp3

0x1bc2,	// (0x0004072f) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1bc2,	// (0x0004072f) list_single_2graphic_pane_t1_cp3

0x3e6f,	// (0x000429dc) list_single_midp_graphic_pane_g2_ParamLimits

0x3e6f,	// (0x000429dc) list_single_midp_graphic_pane_g2

0x0a3c,	// (0x0003f5a9) aid_zoom_text_primary

0x1b29,	// (0x00040696) aid_zoom_text_secondary

0x4602,	// (0x0004316f) status_small_pane_g7_ParamLimits

0x4602,	// (0x0004316f) status_small_pane_g7

0x4625,	// (0x00043192) status_small_pane_t1_ParamLimits

0xc5ff,	// (0x0004b16c) title_pane_g2

0x0003,

0xf56a,	// (0x0004e0d7) title_pane_g

0xc887,	// (0x0004b3f4) aid_size_cell_colour_1_pane_ParamLimits

0xc887,	// (0x0004b3f4) aid_size_cell_colour_1_pane

0xc89b,	// (0x0004b408) aid_size_cell_colour_2_pane_ParamLimits

0xc89b,	// (0x0004b408) aid_size_cell_colour_2_pane

0xc8af,	// (0x0004b41c) aid_size_cell_colour_3_pane_ParamLimits

0xc8af,	// (0x0004b41c) aid_size_cell_colour_3_pane

0xc8c3,	// (0x0004b430) aid_size_cell_colour_4_pane_ParamLimits

0xc8c3,	// (0x0004b430) aid_size_cell_colour_4_pane

0x1587,	// (0x000400f4) title_pane_stacon_g1_ParamLimits

0x1587,	// (0x000400f4) title_pane_stacon_g1

0x5886,	// (0x000443f3) popup_note_wait_window_g3_ParamLimits

0x5886,	// (0x000443f3) popup_note_wait_window_g3

0x58fc,	// (0x00044469) popup_note_wait_window_t5_ParamLimits

0x58fc,	// (0x00044469) popup_note_wait_window_t5

0x2de2,	// (0x0004194f) main_feb_china_hwr_fs_writing_pane

0xcd40,	// (0x0004b8ad) popup_feb_china_hwr_fs_window_ParamLimits

0xcd40,	// (0x0004b8ad) popup_feb_china_hwr_fs_window

0xbf2d,	// (0x0004aa9a) aid_size_cell_hwr_fs_ParamLimits

0xbf2d,	// (0x0004aa9a) aid_size_cell_hwr_fs

0x5277,	// (0x00043de4) bg_popup_sub_pane_cp3_ParamLimits

0x5277,	// (0x00043de4) bg_popup_sub_pane_cp3

0xbf42,	// (0x0004aaaf) grid_hwr_fs_pane_ParamLimits

0xbf42,	// (0x0004aaaf) grid_hwr_fs_pane

0x1c21,	// (0x0004078e) linegrid_hwr_fs_pane_ParamLimits

0x1c21,	// (0x0004078e) linegrid_hwr_fs_pane

0xbf5a,	// (0x0004aac7) cell_hwr_fs_pane_ParamLimits

0xbf5a,	// (0x0004aac7) cell_hwr_fs_pane

0x5283,	// (0x00043df0) linegrid_hwr_fs_pane_g1_ParamLimits

0x5283,	// (0x00043df0) linegrid_hwr_fs_pane_g1

0xd757,	// (0x0004c2c4) linegrid_hwr_fs_pane_g2_ParamLimits

0xd757,	// (0x0004c2c4) linegrid_hwr_fs_pane_g2

0x52a1,	// (0x00043e0e) linegrid_hwr_fs_pane_g3_ParamLimits

0x52a1,	// (0x00043e0e) linegrid_hwr_fs_pane_g3

0x1c53,	// (0x000407c0) linegrid_hwr_fs_pane_g4_ParamLimits

0x1c53,	// (0x000407c0) linegrid_hwr_fs_pane_g4

0x1c6d,	// (0x000407da) linegrid_hwr_fs_pane_g5_ParamLimits

0x1c6d,	// (0x000407da) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fc,	// (0x0004e369) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fc,	// (0x0004e369) linegrid_hwr_fs_pane_g

0x52ad,	// (0x00043e1a) cell_hwr_fs_pane_g1_ParamLimits

0x52ad,	// (0x00043e1a) cell_hwr_fs_pane_g1

0x4ffc,	// (0x00043b69) cell_hwr_fs_pane_g2_ParamLimits

0x4ffc,	// (0x00043b69) cell_hwr_fs_pane_g2

0xd769,	// (0x0004c2d6) cell_hwr_fs_pane_g3_ParamLimits

0xd769,	// (0x0004c2d6) cell_hwr_fs_pane_g3

0xd776,	// (0x0004c2e3) cell_hwr_fs_pane_g4_ParamLimits

0xd776,	// (0x0004c2e3) cell_hwr_fs_pane_g4

0x0003,

0xf807,	// (0x0004e374) cell_hwr_fs_pane_g_ParamLimits

0xf807,	// (0x0004e374) cell_hwr_fs_pane_g

0xbf80,	// (0x0004aaed) cell_hwr_fs_pane_t1

0x2de2,	// (0x0004194f) grid_highlight_pane_cp6

0x2de2,	// (0x0004194f) main_idle_act2_pane

0x388f,	// (0x000423fc) aid_inside_area_popup_secondary

0xd866,	// (0x0004c3d3) aid_inside_area_window_primary_ParamLimits

0xd866,	// (0x0004c3d3) aid_inside_area_window_primary

0x6a92,	// (0x000455ff) ai2_news_ticker_pane

0x6a9a,	// (0x00045607) aid_size_cell_ai1_link_ParamLimits

0x6a9a,	// (0x00045607) aid_size_cell_ai1_link

0xdc62,	// (0x0004c7cf) popup_ai2_data_window_ParamLimits

0xdc62,	// (0x0004c7cf) popup_ai2_data_window

0x6aca,	// (0x00045637) popup_ai2_link_window_ParamLimits

0x6aca,	// (0x00045637) popup_ai2_link_window

0x5277,	// (0x00043de4) bg_popup_sub_pane_cp4_ParamLimits

0x5277,	// (0x00043de4) bg_popup_sub_pane_cp4

0x6ade,	// (0x0004564b) grid_ai2_link_pane_ParamLimits

0x6ade,	// (0x0004564b) grid_ai2_link_pane

0x6af5,	// (0x00045662) popup_ai2_link_window_g1_ParamLimits

0x6af5,	// (0x00045662) popup_ai2_link_window_g1

0x6b01,	// (0x0004566e) popup_ai2_link_window_g2_ParamLimits

0x6b01,	// (0x0004566e) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x0004e540) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x0004e540) popup_ai2_link_window_g

0x6b10,	// (0x0004567d) ai2_mp_button_pane

0x6b18,	// (0x00045685) ai2_mp_volume_pane

0x5462,	// (0x00043fcf) bg_popup_sub_pane_cp5_ParamLimits

0x5462,	// (0x00043fcf) bg_popup_sub_pane_cp5

0x6b20,	// (0x0004568d) heading_ai2_gene_pane_ParamLimits

0x6b20,	// (0x0004568d) heading_ai2_gene_pane

0x6b2c,	// (0x00045699) list_ai2_gene_pane_ParamLimits

0x6b2c,	// (0x00045699) list_ai2_gene_pane

0x6b74,	// (0x000456e1) cell_ai2_link_pane_ParamLimits

0x6b74,	// (0x000456e1) cell_ai2_link_pane

0x6b8a,	// (0x000456f7) cell_ai2_link_pane_g1

0x2de2,	// (0x0004194f) grid_highlight_pane_cp7

0x2019,	// (0x00040b86) ai2_mp_volume_pane_g1

0x6c5a,	// (0x000457c7) ai2_mp_volume_pane_g2

0xdc8c,	// (0x0004c7f9) list_ai2_gene_pane_t1

0x6c62,	// (0x000457cf) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x0004e559) ai2_mp_volume_pane_g

0x2021,	// (0x00040b8e) volume_small_pane_cp3

0x6c6a,	// (0x000457d7) aid_size_cell_ai2_button

0x6c72,	// (0x000457df) grid_ai2_button_pane

0x6c7b,	// (0x000457e8) cell_ai2_button_pane_ParamLimits

0x6c7b,	// (0x000457e8) cell_ai2_button_pane

0x2dd8,	// (0x00041945) cell_ai2_button_pane_g1

0x2de2,	// (0x0004194f) grid_highlight_pane_cp8

0x6c1a,	// (0x00045787) ai2_gene_pane_t1_ParamLimits

0x6c1a,	// (0x00045787) ai2_gene_pane_t1

0xccb6,	// (0x0004b823) aid_height_parent_landscape

0xd9cd,	// (0x0004c53a) aid_height_set_list

0x65d6,	// (0x00045143) aid_size_parent

0x68b9,	// (0x00045426) aid_size_cell_graphic_pane_ParamLimits

0x6b3c,	// (0x000456a9) popup_ai2_data_window_g1_ParamLimits

0x6b3c,	// (0x000456a9) popup_ai2_data_window_g1

0x6b48,	// (0x000456b5) ai2_news_ticker_pane_g1

0x6b50,	// (0x000456bd) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x0004e545) ai2_news_ticker_pane_g

0x6b58,	// (0x000456c5) ai2_news_ticker_pane_t1

0x6b66,	// (0x000456d3) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x0004e54a) ai2_news_ticker_pane_t

0x6b93,	// (0x00045700) heading_ai2_gene_pane_g1

0x6b9b,	// (0x00045708) heading_ai2_gene_pane_t1_ParamLimits

0x6b9b,	// (0x00045708) heading_ai2_gene_pane_t1

0x6bb0,	// (0x0004571d) list_highlight_pane_cp6

0xdc76,	// (0x0004c7e3) ai2_gene_pane_ParamLimits

0xdc76,	// (0x0004c7e3) ai2_gene_pane

0xdc9a,	// (0x0004c807) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x0004e54f) list_ai2_gene_pane_t

0x6beb,	// (0x00045758) list_highlight_pane_cp8_ParamLimits

0x6beb,	// (0x00045758) list_highlight_pane_cp8

0x6bfc,	// (0x00045769) ai2_gene_pane_g1_ParamLimits

0x6bfc,	// (0x00045769) ai2_gene_pane_g1

0x6c0e,	// (0x0004577b) ai2_gene_pane_g2_ParamLimits

0x6c0e,	// (0x0004577b) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x0004e554) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x0004e554) ai2_gene_pane_g

0x36c4,	// (0x00042231) scroll_pane_cp12

0xbed9,	// (0x0004aa46) control_pane_t3_ParamLimits

0xbed9,	// (0x0004aa46) control_pane_t3

0x4616,	// (0x00043183) status_small_pane_g8_ParamLimits

0x4616,	// (0x00043183) status_small_pane_g8

0xcdd5,	// (0x0004b942) popup_find_window_ParamLimits

0xd044,	// (0x0004bbb1) popup_note_image_window_ParamLimits

0x0ab8,	// (0x0003f625) list_double2_graphic_pane_vc_g1_ParamLimits

0x0ab8,	// (0x0003f625) list_double2_graphic_pane_vc_g1

0x579a,	// (0x00044307) list_double2_graphic_pane_vc_g2_ParamLimits

0x579a,	// (0x00044307) list_double2_graphic_pane_vc_g2

0x1b7d,	// (0x000406ea) list_double2_graphic_pane_vc_g3_ParamLimits

0x1b7d,	// (0x000406ea) list_double2_graphic_pane_vc_g3

0x0002,

0xf631,	// (0x0004e19e) list_double2_graphic_pane_vc_g_ParamLimits

0xf631,	// (0x0004e19e) list_double2_graphic_pane_vc_g

0x0ac4,	// (0x0003f631) list_double2_graphic_pane_vc_t1_ParamLimits

0x0ac4,	// (0x0003f631) list_double2_graphic_pane_vc_t1

0x579a,	// (0x00044307) list_single_heading_pane_vc_g1_ParamLimits

0x579a,	// (0x00044307) list_single_heading_pane_vc_g1

0x1b7d,	// (0x000406ea) list_single_heading_pane_vc_g2_ParamLimits

0x1b7d,	// (0x000406ea) list_single_heading_pane_vc_g2

0x0001,

0xf5ee,	// (0x0004e15b) list_single_heading_pane_vc_g_ParamLimits

0xf5ee,	// (0x0004e15b) list_single_heading_pane_vc_g

0x0ada,	// (0x0003f647) list_single_heading_pane_vc_t1_ParamLimits

0x0ada,	// (0x0003f647) list_single_heading_pane_vc_t1

0x0af0,	// (0x0003f65d) list_single_heading_pane_vc_t2_ParamLimits

0x0af0,	// (0x0003f65d) list_single_heading_pane_vc_t2

0x0001,

0xf7eb,	// (0x0004e358) list_single_heading_pane_vc_t_ParamLimits

0xf7eb,	// (0x0004e358) list_single_heading_pane_vc_t

0x51cf,	// (0x00043d3c) list_setting_number_pane_vc_g1_ParamLimits

0x51cf,	// (0x00043d3c) list_setting_number_pane_vc_g1

0x51db,	// (0x00043d48) list_setting_number_pane_vc_g2_ParamLimits

0x51db,	// (0x00043d48) list_setting_number_pane_vc_g2

0x0001,

0xf7f0,	// (0x0004e35d) list_setting_number_pane_vc_g_ParamLimits

0xf7f0,	// (0x0004e35d) list_setting_number_pane_vc_g

0x51e7,	// (0x00043d54) list_setting_number_pane_vc_t1_ParamLimits

0x51e7,	// (0x00043d54) list_setting_number_pane_vc_t1

0x51fb,	// (0x00043d68) list_setting_number_pane_vc_t2_ParamLimits

0x51fb,	// (0x00043d68) list_setting_number_pane_vc_t2

0x5217,	// (0x00043d84) list_setting_number_pane_vc_t3_ParamLimits

0x5217,	// (0x00043d84) list_setting_number_pane_vc_t3

0x0002,

0xf7f5,	// (0x0004e362) list_setting_number_pane_vc_t_ParamLimits

0xf7f5,	// (0x0004e362) list_setting_number_pane_vc_t

0x523d,	// (0x00043daa) set_value_pane_vc_ParamLimits

0x523d,	// (0x00043daa) set_value_pane_vc

0x678e,	// (0x000452fb) list_double2_graphic_pane_vc_ParamLimits

0x678e,	// (0x000452fb) list_double2_graphic_pane_vc

0x1ebd,	// (0x00040a2a) list_double2_large_graphic_pane_vc_ParamLimits

0x1ebd,	// (0x00040a2a) list_double2_large_graphic_pane_vc

0x678e,	// (0x000452fb) list_double2_pane_vc_ParamLimits

0x678e,	// (0x000452fb) list_double2_pane_vc

0x678e,	// (0x000452fb) list_double_graphic_heading_pane_vc_ParamLimits

0x678e,	// (0x000452fb) list_double_graphic_heading_pane_vc

0x678e,	// (0x000452fb) list_double_graphic_pane_vc_ParamLimits

0x678e,	// (0x000452fb) list_double_graphic_pane_vc

0x678e,	// (0x000452fb) list_double_heading_pane_vc_ParamLimits

0x678e,	// (0x000452fb) list_double_heading_pane_vc

0x1ebd,	// (0x00040a2a) list_double_large_graphic_pane_vc_ParamLimits

0x1ebd,	// (0x00040a2a) list_double_large_graphic_pane_vc

0x678e,	// (0x000452fb) list_double_number_pane_vc_ParamLimits

0x678e,	// (0x000452fb) list_double_number_pane_vc

0x678e,	// (0x000452fb) list_double_pane_vc_ParamLimits

0x678e,	// (0x000452fb) list_double_pane_vc

0x678e,	// (0x000452fb) list_double_time_pane_vc_ParamLimits

0x678e,	// (0x000452fb) list_double_time_pane_vc

0x678e,	// (0x000452fb) list_setting_number_pane_vc_ParamLimits

0x678e,	// (0x000452fb) list_setting_number_pane_vc

0x678e,	// (0x000452fb) list_setting_pane_vc_ParamLimits

0x678e,	// (0x000452fb) list_setting_pane_vc

0x678e,	// (0x000452fb) list_single_graphic_heading_pane_vc_ParamLimits

0x678e,	// (0x000452fb) list_single_graphic_heading_pane_vc

0x678e,	// (0x000452fb) list_single_heading_pane_vc_ParamLimits

0x678e,	// (0x000452fb) list_single_heading_pane_vc

0x678e,	// (0x000452fb) list_single_number_heading_pane_vc_ParamLimits

0x678e,	// (0x000452fb) list_single_number_heading_pane_vc

0x0ab8,	// (0x0003f625) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0ab8,	// (0x0003f625) list_double_graphic_heading_pane_vc_g1

0x579a,	// (0x00044307) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x579a,	// (0x00044307) list_double_graphic_heading_pane_vc_g2

0x1b7d,	// (0x000406ea) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x1b7d,	// (0x000406ea) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf631,	// (0x0004e19e) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf631,	// (0x0004e19e) list_double_graphic_heading_pane_vc_g

0x0bdf,	// (0x0003f74c) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x0bdf,	// (0x0003f74c) list_double_graphic_heading_pane_vc_t1

0x0ada,	// (0x0003f647) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x0ada,	// (0x0003f647) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f3,	// (0x0004e560) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f3,	// (0x0004e560) list_double_graphic_heading_pane_vc_t

0x51cf,	// (0x00043d3c) list_setting_pane_vc_g1_ParamLimits

0x51cf,	// (0x00043d3c) list_setting_pane_vc_g1

0x51db,	// (0x00043d48) list_setting_pane_vc_g2_ParamLimits

0x51db,	// (0x00043d48) list_setting_pane_vc_g2

0x0001,

0xf7f0,	// (0x0004e35d) list_setting_pane_vc_g_ParamLimits

0xf7f0,	// (0x0004e35d) list_setting_pane_vc_g

0x6eb3,	// (0x00045a20) list_setting_pane_vc_t1_ParamLimits

0x6eb3,	// (0x00045a20) list_setting_pane_vc_t1

0x6ec7,	// (0x00045a34) list_setting_pane_vc_t2_ParamLimits

0x6ec7,	// (0x00045a34) list_setting_pane_vc_t2

0x0001,

0xfa36,	// (0x0004e5a3) list_setting_pane_vc_t_ParamLimits

0xfa36,	// (0x0004e5a3) list_setting_pane_vc_t

0x523d,	// (0x00043daa) set_value_pane_cp_vc_ParamLimits

0x523d,	// (0x00043daa) set_value_pane_cp_vc

0x579a,	// (0x00044307) list_single_number_heading_pane_vc_g1_ParamLimits

0x579a,	// (0x00044307) list_single_number_heading_pane_vc_g1

0x1b7d,	// (0x000406ea) list_single_number_heading_pane_vc_g2_ParamLimits

0x1b7d,	// (0x000406ea) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ee,	// (0x0004e15b) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ee,	// (0x0004e15b) list_single_number_heading_pane_vc_g

0x0ada,	// (0x0003f647) list_single_number_heading_pane_vc_t1_ParamLimits

0x0ada,	// (0x0003f647) list_single_number_heading_pane_vc_t1

0x0bf3,	// (0x0003f760) list_single_number_heading_pane_vc_t2_ParamLimits

0x0bf3,	// (0x0003f760) list_single_number_heading_pane_vc_t2

0x0c07,	// (0x0003f774) list_single_number_heading_pane_vc_t3_ParamLimits

0x0c07,	// (0x0003f774) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3b,	// (0x0004e5a8) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3b,	// (0x0004e5a8) list_single_number_heading_pane_vc_t

0x0ab8,	// (0x0003f625) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0ab8,	// (0x0003f625) list_single_graphic_heading_pane_vc_g1

0x579a,	// (0x00044307) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x579a,	// (0x00044307) list_single_graphic_heading_pane_vc_g4

0x1b7d,	// (0x000406ea) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x1b7d,	// (0x000406ea) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf631,	// (0x0004e19e) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf631,	// (0x0004e19e) list_single_graphic_heading_pane_vc_g

0x0ada,	// (0x0003f647) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x0ada,	// (0x0003f647) list_single_graphic_heading_pane_vc_t1

0x0c19,	// (0x0003f786) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x0c19,	// (0x0003f786) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa42,	// (0x0004e5af) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x0004e5af) list_single_graphic_heading_pane_vc_t

0x579a,	// (0x00044307) list_double2_pane_vc_g1_ParamLimits

0x579a,	// (0x00044307) list_double2_pane_vc_g1

0x1b7d,	// (0x000406ea) list_double2_pane_vc_g2_ParamLimits

0x1b7d,	// (0x000406ea) list_double2_pane_vc_g2

0x0001,

0xf5ee,	// (0x0004e15b) list_double2_pane_vc_g_ParamLimits

0xf5ee,	// (0x0004e15b) list_double2_pane_vc_g

0x0c2d,	// (0x0003f79a) list_double2_pane_vc_t1_ParamLimits

0x0c2d,	// (0x0003f79a) list_double2_pane_vc_t1

0x202a,	// (0x00040b97) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x202a,	// (0x00040b97) list_double2_large_graphic_pane_vc_g1

0x2036,	// (0x00040ba3) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x2036,	// (0x00040ba3) list_double2_large_graphic_pane_vc_g2

0x2042,	// (0x00040baf) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x2042,	// (0x00040baf) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf606,	// (0x0004e173) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf606,	// (0x0004e173) list_double2_large_graphic_pane_vc_g

0x0c43,	// (0x0003f7b0) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0c43,	// (0x0003f7b0) list_double2_large_graphic_pane_vc_t1

0x204e,	// (0x00040bbb) list_double_time_pane_vc_g1_ParamLimits

0x204e,	// (0x00040bbb) list_double_time_pane_vc_g1

0x205a,	// (0x00040bc7) list_double_time_pane_vc_g2_ParamLimits

0x205a,	// (0x00040bc7) list_double_time_pane_vc_g2

0x0001,

0xfa47,	// (0x0004e5b4) list_double_time_pane_vc_g_ParamLimits

0xfa47,	// (0x0004e5b4) list_double_time_pane_vc_g

0x0c59,	// (0x0003f7c6) list_double_time_pane_vc_t1_ParamLimits

0x0c59,	// (0x0003f7c6) list_double_time_pane_vc_t1

0x0c72,	// (0x0003f7df) list_double_time_pane_vc_t2_ParamLimits

0x0c72,	// (0x0003f7df) list_double_time_pane_vc_t2

0x0cb2,	// (0x0003f81f) list_double_time_pane_vc_t3_ParamLimits

0x0cb2,	// (0x0003f81f) list_double_time_pane_vc_t3

0x0cca,	// (0x0003f837) list_double_time_pane_vc_t4_ParamLimits

0x0cca,	// (0x0003f837) list_double_time_pane_vc_t4

0x0003,

0xfa4c,	// (0x0004e5b9) list_double_time_pane_vc_t_ParamLimits

0xfa4c,	// (0x0004e5b9) list_double_time_pane_vc_t

0x579a,	// (0x00044307) list_double_pane_vc_g1_ParamLimits

0x579a,	// (0x00044307) list_double_pane_vc_g1

0x1b7d,	// (0x000406ea) list_double_pane_vc_g2_ParamLimits

0x1b7d,	// (0x000406ea) list_double_pane_vc_g2

0x0001,

0xf5ee,	// (0x0004e15b) list_double_pane_vc_g_ParamLimits

0xf5ee,	// (0x0004e15b) list_double_pane_vc_g

0x0cde,	// (0x0003f84b) list_double_pane_vc_t1_ParamLimits

0x0cde,	// (0x0003f84b) list_double_pane_vc_t1

0x0cf0,	// (0x0003f85d) list_double_pane_vc_t2_ParamLimits

0x0cf0,	// (0x0003f85d) list_double_pane_vc_t2

0x0001,

0xfa55,	// (0x0004e5c2) list_double_pane_vc_t_ParamLimits

0xfa55,	// (0x0004e5c2) list_double_pane_vc_t

0x579a,	// (0x00044307) list_double_number_pane_vc_g1_ParamLimits

0x579a,	// (0x00044307) list_double_number_pane_vc_g1

0x1b7d,	// (0x000406ea) list_double_number_pane_vc_g2_ParamLimits

0x1b7d,	// (0x000406ea) list_double_number_pane_vc_g2

0x0001,

0xf5ee,	// (0x0004e15b) list_double_number_pane_vc_g_ParamLimits

0xf5ee,	// (0x0004e15b) list_double_number_pane_vc_g

0x0d08,	// (0x0003f875) list_double_number_pane_vc_t1_ParamLimits

0x0d08,	// (0x0003f875) list_double_number_pane_vc_t1

0x0d1c,	// (0x0003f889) list_double_number_pane_vc_t2_ParamLimits

0x0d1c,	// (0x0003f889) list_double_number_pane_vc_t2

0x0cf0,	// (0x0003f85d) list_double_number_pane_vc_t3_ParamLimits

0x0cf0,	// (0x0003f85d) list_double_number_pane_vc_t3

0x0002,

0xfa5a,	// (0x0004e5c7) list_double_number_pane_vc_t_ParamLimits

0xfa5a,	// (0x0004e5c7) list_double_number_pane_vc_t

0x2066,	// (0x00040bd3) list_double_large_graphic_pane_vc_g1_ParamLimits

0x2066,	// (0x00040bd3) list_double_large_graphic_pane_vc_g1

0x2072,	// (0x00040bdf) list_double_large_graphic_pane_vc_g2_ParamLimits

0x2072,	// (0x00040bdf) list_double_large_graphic_pane_vc_g2

0x2042,	// (0x00040baf) list_double_large_graphic_pane_vc_g3_ParamLimits

0x2042,	// (0x00040baf) list_double_large_graphic_pane_vc_g3

0x0d2e,	// (0x0003f89b) list_double_large_graphic_pane_vc_g4_ParamLimits

0x0d2e,	// (0x0003f89b) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa61,	// (0x0004e5ce) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa61,	// (0x0004e5ce) list_double_large_graphic_pane_vc_g

0x0d3a,	// (0x0003f8a7) list_double_large_graphic_pane_vc_t1_ParamLimits

0x0d3a,	// (0x0003f8a7) list_double_large_graphic_pane_vc_t1

0x0d4c,	// (0x0003f8b9) list_double_large_graphic_pane_vc_t2_ParamLimits

0x0d4c,	// (0x0003f8b9) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6a,	// (0x0004e5d7) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6a,	// (0x0004e5d7) list_double_large_graphic_pane_vc_t

0x579a,	// (0x00044307) list_double_heading_pane_vc_g1_ParamLimits

0x579a,	// (0x00044307) list_double_heading_pane_vc_g1

0x1b7d,	// (0x000406ea) list_double_heading_pane_vc_g2_ParamLimits

0x1b7d,	// (0x000406ea) list_double_heading_pane_vc_g2

0x0001,

0xf5ee,	// (0x0004e15b) list_double_heading_pane_vc_g_ParamLimits

0xf5ee,	// (0x0004e15b) list_double_heading_pane_vc_g

0x0d65,	// (0x0003f8d2) list_double_heading_pane_vc_t1_ParamLimits

0x0d65,	// (0x0003f8d2) list_double_heading_pane_vc_t1

0x0ada,	// (0x0003f647) list_double_heading_pane_vc_t2_ParamLimits

0x0ada,	// (0x0003f647) list_double_heading_pane_vc_t2

0x0001,

0xfa6f,	// (0x0004e5dc) list_double_heading_pane_vc_t_ParamLimits

0xfa6f,	// (0x0004e5dc) list_double_heading_pane_vc_t

0x0ab8,	// (0x0003f625) list_double_graphic_pane_vc_g1_ParamLimits

0x0ab8,	// (0x0003f625) list_double_graphic_pane_vc_g1

0x2081,	// (0x00040bee) list_double_graphic_pane_vc_g2_ParamLimits

0x2081,	// (0x00040bee) list_double_graphic_pane_vc_g2

0x2090,	// (0x00040bfd) list_double_graphic_pane_vc_g3_ParamLimits

0x2090,	// (0x00040bfd) list_double_graphic_pane_vc_g3

0x0002,

0xfa74,	// (0x0004e5e1) list_double_graphic_pane_vc_g_ParamLimits

0xfa74,	// (0x0004e5e1) list_double_graphic_pane_vc_g

0x0d79,	// (0x0003f8e6) list_double_graphic_pane_vc_t1_ParamLimits

0x0d79,	// (0x0003f8e6) list_double_graphic_pane_vc_t1

0x0cf0,	// (0x0003f85d) list_double_graphic_pane_vc_t2_ParamLimits

0x0cf0,	// (0x0003f85d) list_double_graphic_pane_vc_t2

0x0001,

0xfa7b,	// (0x0004e5e8) list_double_graphic_pane_vc_t_ParamLimits

0xfa7b,	// (0x0004e5e8) list_double_graphic_pane_vc_t

0x1071,	// (0x0003fbde) aid_size_cell_fastswap

0xbbf1,	// (0x0004a75e) aid_size_cell_touch_ParamLimits

0xbbf1,	// (0x0004a75e) aid_size_cell_touch

0x12d4,	// (0x0003fe41) popup_fast_swap_wide_window_ParamLimits

0x12d4,	// (0x0003fe41) popup_fast_swap_wide_window

0xbd3c,	// (0x0004a8a9) touch_pane_ParamLimits

0xbd3c,	// (0x0004a8a9) touch_pane

0x371a,	// (0x00042287) button_value_adjust_pane_cp2

0x0758,	// (0x0003f2c5) button_value_adjust_pane_cp4

0x077c,	// (0x0003f2e9) form_field_data_pane_cp2

0xb85d,	// (0x0004a3ca) form_field_data_wide_pane_cp2

0x3ba7,	// (0x00042714) bg_scroll_pane_ParamLimits

0x16ea,	// (0x00040257) scroll_handle_pane_ParamLimits

0x16fe,	// (0x0004026b) scroll_sc2_down_pane_ParamLimits

0x16fe,	// (0x0004026b) scroll_sc2_down_pane

0x3bd8,	// (0x00042745) scroll_sc2_up_pane_ParamLimits

0x3bd8,	// (0x00042745) scroll_sc2_up_pane

0xddc5,	// (0x0004c932) grid_wheel_folder_pane_g1_ParamLimits

0xddc5,	// (0x0004c932) grid_wheel_folder_pane_g1

0x18c3,	// (0x00040430) clock_nsta_pane_cp2_ParamLimits

0x18c3,	// (0x00040430) clock_nsta_pane_cp2

0xcbcb,	// (0x0004b738) listscroll_midp_pane_ParamLimits

0xcbdc,	// (0x0004b749) midp_canvas_pane

0x4691,	// (0x000431fe) nsta_clock_indic_pane

0x46d7,	// (0x00043244) listscroll_form_pane_vc

0x46df,	// (0x0004324c) listscroll_set_pane_vc_ParamLimits

0x46df,	// (0x0004324c) listscroll_set_pane_vc

0xd46b,	// (0x0004bfd8) clock_nsta_pane

0xd495,	// (0x0004c002) indicator_nsta_pane

0x50c5,	// (0x00043c32) bg_popup_sub_pane_cp2_ParamLimits

0x50d9,	// (0x00043c46) find_pane_cp2_ParamLimits

0x50d9,	// (0x00043c46) find_pane_cp2

0x50ef,	// (0x00043c5c) grid_toobar_pane_ParamLimits

0x524b,	// (0x00043db8) list_form_gen_pane_vc_ParamLimits

0x524b,	// (0x00043db8) list_form_gen_pane_vc

0x5261,	// (0x00043dce) scroll_pane_cp8_vc_ParamLimits

0x5261,	// (0x00043dce) scroll_pane_cp8_vc

0x52dd,	// (0x00043e4a) data_form_wide_pane_vc_ParamLimits

0x52dd,	// (0x00043e4a) data_form_wide_pane_vc

0x52e9,	// (0x00043e56) form_field_data_wide_pane_vc_g1

0x52f1,	// (0x00043e5e) form_field_data_wide_pane_vc_t1_ParamLimits

0x52f1,	// (0x00043e5e) form_field_data_wide_pane_vc_t1

0x372e,	// (0x0004229b) input_focus_pane_cp6_vc_ParamLimits

0x372e,	// (0x0004229b) input_focus_pane_cp6_vc

0xd80a,	// (0x0004c377) list_midp_pane_ParamLimits

0x691f,	// (0x0004548c) scroll_pane_cp16_ParamLimits

0x691f,	// (0x0004548c) scroll_pane_cp16

0x564f,	// (0x000441bc) button_value_adjust_pane_ParamLimits

0x564f,	// (0x000441bc) button_value_adjust_pane

0xd9de,	// (0x0004c54b) button_value_adjust_pane_cp6_ParamLimits

0xd9de,	// (0x0004c54b) button_value_adjust_pane_cp6

0xdaf8,	// (0x0004c665) settings_code_pane_cp_ParamLimits

0xdaf8,	// (0x0004c665) settings_code_pane_cp

0x2dd8,	// (0x00041945) cell_touch_pane_g1

0x2dd8,	// (0x00041945) cell_touch_pane_g2

0x0001,

0xf71a,	// (0x0004e287) cell_touch_pane_g

0xdca8,	// (0x0004c815) cell_touch_pane_cp_ParamLimits

0xdca8,	// (0x0004c815) cell_touch_pane_cp

0xdcc4,	// (0x0004c831) cell_touch_pane_ParamLimits

0xdcc4,	// (0x0004c831) cell_touch_pane

0x2dd8,	// (0x00041945) scroll_sc2_down_pane_g1

0x2dd8,	// (0x00041945) scroll_sc2_up_pane_g1

0x2de2,	// (0x0004194f) bg_set_opt_pane_cp4_vc

0x6caf,	// (0x0004581c) list_set_graphic_pane_vc_g1_ParamLimits

0x6caf,	// (0x0004581c) list_set_graphic_pane_vc_g1

0x6cbb,	// (0x00045828) list_set_graphic_pane_vc_g2_ParamLimits

0x6cbb,	// (0x00045828) list_set_graphic_pane_vc_g2

0x0001,

0xf9f8,	// (0x0004e565) list_set_graphic_pane_vc_g_ParamLimits

0xf9f8,	// (0x0004e565) list_set_graphic_pane_vc_g

0x6cc7,	// (0x00045834) text_primary_small_cp13_vc_ParamLimits

0x6cc7,	// (0x00045834) text_primary_small_cp13_vc

0x6cdf,	// (0x0004584c) list_set_graphic_pane_vc_ParamLimits

0x6cdf,	// (0x0004584c) list_set_graphic_pane_vc

0x2de2,	// (0x0004194f) input_focus_pane_cp2_vc

0x2dd8,	// (0x00041945) setting_code_pane_vc_g1

0x6cf3,	// (0x00045860) setting_code_pane_vc_t1

0x6d01,	// (0x0004586e) set_text_pane_vc_t1_ParamLimits

0x6d01,	// (0x0004586e) set_text_pane_vc_t1

0x2de2,	// (0x0004194f) input_focus_pane_cp1_vc

0x6d1c,	// (0x00045889) list_set_text_pane_vc

0x2dd8,	// (0x00041945) setting_text_pane_vc_g1

0x2de2,	// (0x0004194f) bg_set_opt_pane_cp2_vc

0x6d26,	// (0x00045893) setting_slider_graphic_pane_vc_g1

0x6d2e,	// (0x0004589b) setting_slider_graphic_pane_vc_t1

0x6d3c,	// (0x000458a9) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fd,	// (0x0004e56a) setting_slider_graphic_pane_vc_t

0x6d4a,	// (0x000458b7) slider_set_pane_cp_vc

0x6d52,	// (0x000458bf) slider_set_pane_vc_g1

0x6d5b,	// (0x000458c8) slider_set_pane_vc_g2

0x0006,

0xfa02,	// (0x0004e56f) slider_set_pane_vc_g

0x3795,	// (0x00042302) set_opt_bg_pane_g1_copy1

0x379d,	// (0x0004230a) set_opt_bg_pane_g2_copy1

0x6d87,	// (0x000458f4) set_opt_bg_pane_g3_copy1

0x37ad,	// (0x0004231a) set_opt_bg_pane_g4_copy1

0x37b5,	// (0x00042322) set_opt_bg_pane_g5_copy1

0x37bd,	// (0x0004232a) set_opt_bg_pane_g6_copy1

0x6d91,	// (0x000458fe) set_opt_bg_pane_g7_copy1

0x6d99,	// (0x00045906) set_opt_bg_pane_g8_copy1

0x6da3,	// (0x00045910) set_opt_bg_pane_g9_copy1

0x2de2,	// (0x0004194f) bg_set_opt_pane_cp_vc

0x6dad,	// (0x0004591a) setting_slider_pane_vc_t1

0x6d2e,	// (0x0004589b) setting_slider_pane_vc_t2

0x6d3c,	// (0x000458a9) setting_slider_pane_vc_t3

0x0002,

0xfa11,	// (0x0004e57e) setting_slider_pane_vc_t

0x6d4a,	// (0x000458b7) slider_set_pane_vc

0x1c91,	// (0x000407fe) volume_set_pane_vc_g1

0x1c9a,	// (0x00040807) volume_set_pane_vc_g2

0x1ca3,	// (0x00040810) volume_set_pane_vc_g3

0x1cac,	// (0x00040819) volume_set_pane_vc_g4

0x1cb5,	// (0x00040822) volume_set_pane_vc_g5

0x1cbe,	// (0x0004082b) volume_set_pane_vc_g6

0x1cc7,	// (0x00040834) volume_set_pane_vc_g7

0x1cd0,	// (0x0004083d) volume_set_pane_vc_g8

0x1cd9,	// (0x00040846) volume_set_pane_vc_g9

0x1ce2,	// (0x0004084f) volume_set_pane_vc_g10

0x0009,

0xfa18,	// (0x0004e585) volume_set_pane_vc_g

0x6dbc,	// (0x00045929) volume_set_pane_vc

0x6dc4,	// (0x00045931) button_value_adjust_pane_cp1_vc

0x6dce,	// (0x0004593b) list_highlight_pane_cp2_vc

0x6dd7,	// (0x00045944) list_set_pane_vc_ParamLimits

0x6dd7,	// (0x00045944) list_set_pane_vc

0x6e41,	// (0x000459ae) main_pane_set_vc_t1_ParamLimits

0x6e41,	// (0x000459ae) main_pane_set_vc_t1

0x6e56,	// (0x000459c3) main_pane_set_vc_t2_ParamLimits

0x6e56,	// (0x000459c3) main_pane_set_vc_t2

0x6e68,	// (0x000459d5) main_pane_set_vc_t3_ParamLimits

0x6e68,	// (0x000459d5) main_pane_set_vc_t3

0x6e7c,	// (0x000459e9) main_pane_set_vc_t4_ParamLimits

0x6e7c,	// (0x000459e9) main_pane_set_vc_t4

0x0003,

0xfa2d,	// (0x0004e59a) main_pane_set_vc_t_ParamLimits

0xfa2d,	// (0x0004e59a) main_pane_set_vc_t

0x6e90,	// (0x000459fd) setting_code_pane_vc_ParamLimits

0x6e90,	// (0x000459fd) setting_code_pane_vc

0x6ea1,	// (0x00045a0e) setting_slider_graphic_pane_vc

0x6ea1,	// (0x00045a0e) setting_slider_pane_vc

0x6ea1,	// (0x00045a0e) setting_text_pane_vc

0x6ea1,	// (0x00045a0e) setting_volume_pane_vc

0x6eab,	// (0x00045a18) scroll_pane_cp121_vc

0x3708,	// (0x00042275) set_content_pane_vc

0x6ee9,	// (0x00045a56) button_value_adjust_pane_g1

0x6ef2,	// (0x00045a5f) button_value_adjust_pane_g2

0x0001,

0xfa80,	// (0x0004e5ed) button_value_adjust_pane_g

0x6efb,	// (0x00045a68) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6efb,	// (0x00045a68) form_field_slider_wide_pane_vc_t1

0x6f0f,	// (0x00045a7c) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6f0f,	// (0x00045a7c) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa85,	// (0x0004e5f2) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa85,	// (0x0004e5f2) form_field_slider_wide_pane_vc_t

0x313d,	// (0x00041caa) input_focus_pane_cp10_vc_ParamLimits

0x313d,	// (0x00041caa) input_focus_pane_cp10_vc

0x6f21,	// (0x00045a8e) slider_cont_pane_cp1_vc_ParamLimits

0x6f21,	// (0x00045a8e) slider_cont_pane_cp1_vc

0x6d52,	// (0x000458bf) slider_form_pane_g1_cp2

0x6d5b,	// (0x000458c8) slider_form_pane_g2_cp2

0x6f3a,	// (0x00045aa7) form_field_slider_pane_vc_t3

0x6f48,	// (0x00045ab5) form_field_slider_pane_vc_t4

0x6f56,	// (0x00045ac3) slider_form_pane_vc_ParamLimits

0x6f56,	// (0x00045ac3) slider_form_pane_vc

0x6f63,	// (0x00045ad0) form_field_slider_pane_vc_t1_ParamLimits

0x6f63,	// (0x00045ad0) form_field_slider_pane_vc_t1

0x6f0f,	// (0x00045a7c) form_field_slider_pane_vc_t2_ParamLimits

0x6f0f,	// (0x00045a7c) form_field_slider_pane_vc_t2

0x0001,

0xfa95,	// (0x0004e602) form_field_slider_pane_vc_t_ParamLimits

0xfa95,	// (0x0004e602) form_field_slider_pane_vc_t

0x313d,	// (0x00041caa) input_focus_pane_cp9_vc_ParamLimits

0x313d,	// (0x00041caa) input_focus_pane_cp9_vc

0x6f7f,	// (0x00045aec) slider_cont_pane_vc_ParamLimits

0x6f7f,	// (0x00045aec) slider_cont_pane_vc

0x6f91,	// (0x00045afe) list_form_graphic_pane_cp_vc_ParamLimits

0x6f91,	// (0x00045afe) list_form_graphic_pane_cp_vc

0x52e9,	// (0x00043e56) form_field_popup_wide_pane_vc_g1

0x6fa6,	// (0x00045b13) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6fa6,	// (0x00045b13) form_field_popup_wide_pane_vc_t1

0x372e,	// (0x0004229b) input_focus_pane_cp8_vc_ParamLimits

0x372e,	// (0x0004229b) input_focus_pane_cp8_vc

0x6fbd,	// (0x00045b2a) list_form_wide_pane_vc_ParamLimits

0x6fbd,	// (0x00045b2a) list_form_wide_pane_vc

0x6fc9,	// (0x00045b36) list_form_graphic_pane_vc_g1

0x6fd1,	// (0x00045b3e) list_form_graphic_pane_vc_t1_ParamLimits

0x6fd1,	// (0x00045b3e) list_form_graphic_pane_vc_t1

0x2ec2,	// (0x00041a2f) list_highlight_pane_cp5_vc_ParamLimits

0x2ec2,	// (0x00041a2f) list_highlight_pane_cp5_vc

0x6fed,	// (0x00045b5a) list_form_graphic_pane_vc_ParamLimits

0x6fed,	// (0x00045b5a) list_form_graphic_pane_vc

0x52e9,	// (0x00043e56) form_field_popup_pane_vc_g1

0x7003,	// (0x00045b70) form_field_popup_pane_vc_t1_ParamLimits

0x7003,	// (0x00045b70) form_field_popup_pane_vc_t1

0x372e,	// (0x0004229b) input_focus_pane_cp7_vc_ParamLimits

0x372e,	// (0x0004229b) input_focus_pane_cp7_vc

0x701a,	// (0x00045b87) list_form_pane_vc_ParamLimits

0x701a,	// (0x00045b87) list_form_pane_vc

0x7026,	// (0x00045b93) data_form_pane_vc_t1_ParamLimits

0x7026,	// (0x00045b93) data_form_pane_vc_t1

0x3795,	// (0x00042302) input_focus_pane_vc_g1

0x379d,	// (0x0004230a) input_focus_pane_vc_g2

0x37a5,	// (0x00042312) input_focus_pane_vc_g3

0x37ad,	// (0x0004231a) input_focus_pane_vc_g4

0x37b5,	// (0x00042322) input_focus_pane_vc_g5

0x37bd,	// (0x0004232a) input_focus_pane_vc_g6

0x37c5,	// (0x00042332) input_focus_pane_vc_g7

0x37cd,	// (0x0004233a) input_focus_pane_vc_g8

0x37d5,	// (0x00042342) input_focus_pane_vc_g9

0x2dd8,	// (0x00041945) input_focus_pane_vc_g10

0x0009,

0xf6a3,	// (0x0004e210) input_focus_pane_vc_g

0x52dd,	// (0x00043e4a) data_form_pane_vc_ParamLimits

0x52dd,	// (0x00043e4a) data_form_pane_vc

0x52e9,	// (0x00043e56) form_field_data_pane_vc_g1

0x7041,	// (0x00045bae) form_field_data_pane_vc_t1_ParamLimits

0x7041,	// (0x00045bae) form_field_data_pane_vc_t1

0x372e,	// (0x0004229b) input_focus_pane_vc_ParamLimits

0x372e,	// (0x0004229b) input_focus_pane_vc

0x705b,	// (0x00045bc8) button_value_adjust_pane_cp3_vc

0x7063,	// (0x00045bd0) button_value_adjust_pane_cp5_vc

0x706b,	// (0x00045bd8) form_field_data_pane_vc_ParamLimits

0x706b,	// (0x00045bd8) form_field_data_pane_vc

0x7082,	// (0x00045bef) form_field_data_pane_vc_cp2

0x708a,	// (0x00045bf7) form_field_data_wide_pane_vc_ParamLimits

0x708a,	// (0x00045bf7) form_field_data_wide_pane_vc

0x70a0,	// (0x00045c0d) form_field_data_wide_pane_vc_cp2

0x70a8,	// (0x00045c15) form_field_popup_pane_vc_ParamLimits

0x70a8,	// (0x00045c15) form_field_popup_pane_vc

0x70bf,	// (0x00045c2c) form_field_popup_wide_pane_vc_ParamLimits

0x70bf,	// (0x00045c2c) form_field_popup_wide_pane_vc

0x70d5,	// (0x00045c42) form_field_slider_pane_vc_ParamLimits

0x70d5,	// (0x00045c42) form_field_slider_pane_vc

0x70e8,	// (0x00045c55) form_field_slider_wide_pane_vc_ParamLimits

0x70e8,	// (0x00045c55) form_field_slider_wide_pane_vc

0xdce2,	// (0x0004c84f) grid_touch_1_pane_ParamLimits

0xdce2,	// (0x0004c84f) grid_touch_1_pane

0xdcf6,	// (0x0004c863) grid_touch_2_pane_ParamLimits

0xdcf6,	// (0x0004c863) grid_touch_2_pane

0x71bd,	// (0x00045d2a) touch_pane_g1_ParamLimits

0x71bd,	// (0x00045d2a) touch_pane_g1

0x711f,	// (0x00045c8c) cell_app_pane_cp_wide_ParamLimits

0x711f,	// (0x00045c8c) cell_app_pane_cp_wide

0x7130,	// (0x00045c9d) grid_popup_fast_wide_pane_ParamLimits

0x7130,	// (0x00045c9d) grid_popup_fast_wide_pane

0x7144,	// (0x00045cb1) scroll_pane_cp19_ParamLimits

0x7144,	// (0x00045cb1) scroll_pane_cp19

0x2de2,	// (0x0004194f) bg_popup_window_pane_cp20

0x7158,	// (0x00045cc5) listscroll_popup_fast_wide_pane

0x38fb,	// (0x00042468) grid_indicator_nsta_pane

0x7160,	// (0x00045ccd) clock_nsta_pane_g1

0x7169,	// (0x00045cd6) clock_nsta_pane_t1

0xdd20,	// (0x0004c88d) cell_indicator_nsta_pane_ParamLimits

0xdd20,	// (0x0004c88d) cell_indicator_nsta_pane

0x71bd,	// (0x00045d2a) cell_indicator_nsta_pane_g1

0xdd39,	// (0x0004c8a6) cell_indicator_nsta_pane_g2

0x0001,

0xfa9f,	// (0x0004e60c) cell_indicator_nsta_pane_g

0x71e1,	// (0x00045d4e) clock_nsta_pane_cp

0x71e9,	// (0x00045d56) indicator_nsta_pane_cp

0x71f2,	// (0x00045d5f) nsta_clock_indic_pane_g1

0x2f8b,	// (0x00041af8) grid_indicator_pane

0x3ccd,	// (0x0004283a) scroll_pane_cp29

0x1812,	// (0x0004037f) indicator_nsta_pane_cp2_ParamLimits

0x1812,	// (0x0004037f) indicator_nsta_pane_cp2

0x2ec2,	// (0x00041a2f) main_apps_wheel_pane

0x54d6,	// (0x00044043) form_midp_field_text_pane_ParamLimits

0x5621,	// (0x0004418e) scroll_bar_cp050_ParamLimits

0x725b,	// (0x00045dc8) cell_indicator_pane_ParamLimits

0x725b,	// (0x00045dc8) cell_indicator_pane

0x7272,	// (0x00045ddf) cell_indicator_pane_g1

0xdd4f,	// (0x0004c8bc) grid_wheel_folder_pane_ParamLimits

0xdd4f,	// (0x0004c8bc) grid_wheel_folder_pane

0xdd5d,	// (0x0004c8ca) list_wheel_apps_pane_ParamLimits

0xdd5d,	// (0x0004c8ca) list_wheel_apps_pane

0xdd6b,	// (0x0004c8d8) main_apps_wheel_pane_g1_ParamLimits

0xdd6b,	// (0x0004c8d8) main_apps_wheel_pane_g1

0xdd77,	// (0x0004c8e4) main_apps_wheel_pane_g2_ParamLimits

0xdd77,	// (0x0004c8e4) main_apps_wheel_pane_g2

0x0001,

0xfabb,	// (0x0004e628) main_apps_wheel_pane_g_ParamLimits

0xfabb,	// (0x0004e628) main_apps_wheel_pane_g

0xdd85,	// (0x0004c8f2) main_apps_wheel_pane_t1_ParamLimits

0xdd85,	// (0x0004c8f2) main_apps_wheel_pane_t1

0xdd99,	// (0x0004c906) list_wheel_apps_pane_g1

0xdda1,	// (0x0004c90e) list_wheel_apps_pane_g2

0xdda9,	// (0x0004c916) list_wheel_apps_pane_g3

0xddb1,	// (0x0004c91e) list_wheel_apps_pane_g4

0xddbb,	// (0x0004c928) list_wheel_apps_pane_g5

0x0004,

0xfac0,	// (0x0004e62d) list_wheel_apps_pane_g

0x421f,	// (0x00042d8c) navi_icon_text_pane

0xd366,	// (0x0004bed3) aid_fill_nsta

0xddd2,	// (0x0004c93f) navi_icon_text_pane_g1

0xddde,	// (0x0004c94b) navi_icon_text_pane_t1

0xcbb3,	// (0x0004b720) list_set_graphic_pane_t1_ParamLimits

0xcbb3,	// (0x0004b720) list_set_graphic_pane_t1

0x5d7c,	// (0x000448e9) popup_midp_note_alarm_window_t6_ParamLimits

0x5d7c,	// (0x000448e9) popup_midp_note_alarm_window_t6

0x5d8e,	// (0x000448fb) popup_midp_note_alarm_window_t7_ParamLimits

0x5d8e,	// (0x000448fb) popup_midp_note_alarm_window_t7

0x5da0,	// (0x0004490d) popup_midp_note_alarm_window_t8_ParamLimits

0x5da0,	// (0x0004490d) popup_midp_note_alarm_window_t8

0x5db2,	// (0x0004491f) popup_midp_note_alarm_window_t9_ParamLimits

0x5db2,	// (0x0004491f) popup_midp_note_alarm_window_t9

0x5dc4,	// (0x00044931) popup_midp_note_alarm_window_t10_ParamLimits

0x5dc4,	// (0x00044931) popup_midp_note_alarm_window_t10

0x5dd6,	// (0x00044943) popup_midp_note_alarm_window_t11_ParamLimits

0x5dd6,	// (0x00044943) popup_midp_note_alarm_window_t11

0x5de8,	// (0x00044955) scroll_pane_cp17_ParamLimits

0x5de8,	// (0x00044955) scroll_pane_cp17

0x1c91,	// (0x000407fe) volume_small_pane_cp_g1

0x209c,	// (0x00040c09) volume_small_pane_cp_g2

0x20a5,	// (0x00040c12) volume_small_pane_cp_g3

0x20ae,	// (0x00040c1b) volume_small_pane_cp_g4

0x20b7,	// (0x00040c24) volume_small_pane_cp_g5

0x20c0,	// (0x00040c2d) volume_small_pane_cp_g6

0x20c9,	// (0x00040c36) volume_small_pane_cp_g7

0x20d2,	// (0x00040c3f) volume_small_pane_cp_g8

0x20db,	// (0x00040c48) volume_small_pane_cp_g9

0x20e4,	// (0x00040c51) volume_small_pane_cp_g10

0x446e,	// (0x00042fdb) midp_ticker_pane_g1_ParamLimits

0x447a,	// (0x00042fe7) midp_ticker_pane_g2_ParamLimits

0xf76b,	// (0x0004e2d8) midp_ticker_pane_g_ParamLimits

0xcc73,	// (0x0004b7e0) midp_ticker_pane_t1_ParamLimits

0xd386,	// (0x0004bef3) aid_fill_nsta_2

0x560d,	// (0x0004417a) list_form2_midp_pane

0x675d,	// (0x000452ca) midp_editing_number_pane_ParamLimits

0x676c,	// (0x000452d9) midp_ticker_pane_ParamLimits

0x7359,	// (0x00045ec6) form2_midp_field_pane

0x737d,	// (0x00045eea) scroll_pane_cp51

0x739d,	// (0x00045f0a) form2_midp_button_pane_ParamLimits

0x739d,	// (0x00045f0a) form2_midp_button_pane

0x73af,	// (0x00045f1c) form2_midp_content_pane_ParamLimits

0x73af,	// (0x00045f1c) form2_midp_content_pane

0x73c9,	// (0x00045f36) form2_midp_field_choice_group_pane

0x73d1,	// (0x00045f3e) form2_midp_field_pane_g1

0x73d9,	// (0x00045f46) form2_midp_field_pane_g2

0x73e1,	// (0x00045f4e) form2_midp_field_pane_g3

0x73e9,	// (0x00045f56) form2_midp_field_pane_g4

0x0003,

0xfae5,	// (0x0004e652) form2_midp_field_pane_g

0x73f1,	// (0x00045f5e) form2_midp_gauge_slider_pane

0x73f9,	// (0x00045f66) form2_midp_gauge_wait_pane

0x7401,	// (0x00045f6e) form2_midp_image_pane_ParamLimits

0x7401,	// (0x00045f6e) form2_midp_image_pane

0x741c,	// (0x00045f89) form2_midp_label_pane_ParamLimits

0x741c,	// (0x00045f89) form2_midp_label_pane

0xde0c,	// (0x0004c979) form2_midp_label_pane_cp_ParamLimits

0xde0c,	// (0x0004c979) form2_midp_label_pane_cp

0x7456,	// (0x00045fc3) form2_midp_string_pane_ParamLimits

0x7456,	// (0x00045fc3) form2_midp_string_pane

0xba9b,	// (0x0004a608) form2_midp_text_pane_ParamLimits

0xba9b,	// (0x0004a608) form2_midp_text_pane

0x7468,	// (0x00045fd5) form2_midp_time_pane

0x7478,	// (0x00045fe5) input_focus_pane_cp51_ParamLimits

0x7478,	// (0x00045fe5) input_focus_pane_cp51

0x7490,	// (0x00045ffd) form2_midp_label_pane_t1_ParamLimits

0x7490,	// (0x00045ffd) form2_midp_label_pane_t1

0xbaba,	// (0x0004a627) form2_mdip_text_pane_t1_ParamLimits

0xbaba,	// (0x0004a627) form2_mdip_text_pane_t1

0x0dc8,	// (0x0003f935) form2_midp_time_pane_t1

0x74d9,	// (0x00046046) form2_midp_gauge_slider_pane_t1

0xde2d,	// (0x0004c99a) form2_midp_gauge_slider_pane_t2

0xde3f,	// (0x0004c9ac) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaee,	// (0x0004e65b) form2_midp_gauge_slider_pane_t

0x750f,	// (0x0004607c) form2_midp_slider_pane

0x751b,	// (0x00046088) form2_midp_gauge_wait_pane_t1

0x7529,	// (0x00046096) form2_midp_wait_pane_ParamLimits

0x7529,	// (0x00046096) form2_midp_wait_pane

0xde51,	// (0x0004c9be) list_single_2graphic_pane_cp4_ParamLimits

0xde51,	// (0x0004c9be) list_single_2graphic_pane_cp4

0xd797,	// (0x0004c304) list_single_midp_graphic_pane_cp_ParamLimits

0xd797,	// (0x0004c304) list_single_midp_graphic_pane_cp

0x2de2,	// (0x0004194f) list_highlight_pane_cp20

0x7583,	// (0x000460f0) list_single_2graphic_pane_g1_cp4

0x758b,	// (0x000460f8) list_single_2graphic_pane_g2_cp4

0x7593,	// (0x00046100) list_single_2graphic_pane_t1_cp4

0x2ec2,	// (0x00041a2f) list_highlight_pane_cp21

0x75a2,	// (0x0004610f) list_single_midp_graphic_pane_g4_cp

0x75b1,	// (0x0004611e) list_single_midp_graphic_pane_t1_cp

0xde66,	// (0x0004c9d3) form2_mdip_string_pane_t1_ParamLimits

0xde66,	// (0x0004c9d3) form2_mdip_string_pane_t1

0x2de2,	// (0x0004194f) bg_wml_button_pane_cp2

0x2dd8,	// (0x00041945) form2_midp_image_pane_g1

0x1536,	// (0x000400a3) list_double_large_graphic_pane_g5_ParamLimits

0x1536,	// (0x000400a3) list_double_large_graphic_pane_g5

0xcbcb,	// (0x0004b738) midp_form_pane_ParamLimits

0x2ec2,	// (0x00041a2f) main_apps_wheel_pane_ParamLimits

0xd0c2,	// (0x0004bc2f) popup_preview_window_ParamLimits

0xd0c2,	// (0x0004bc2f) popup_preview_window

0x4c4d,	// (0x000437ba) popup_touch_info_window_ParamLimits

0x4c4d,	// (0x000437ba) popup_touch_info_window

0x4c6b,	// (0x000437d8) popup_touch_menu_window_ParamLimits

0x4c6b,	// (0x000437d8) popup_touch_menu_window

0x2dce,	// (0x0004193b) bg_popup_sub_pane_cp6

0x76bf,	// (0x0004622c) list_touch_menu_pane

0x76c7,	// (0x00046234) list_single_touch_menu_pane_ParamLimits

0x76c7,	// (0x00046234) list_single_touch_menu_pane

0x76de,	// (0x0004624b) list_single_touch_menu_pane_t1

0x2ec2,	// (0x00041a2f) bg_popup_sub_pane_cp7_ParamLimits

0x2ec2,	// (0x00041a2f) bg_popup_sub_pane_cp7

0x76ec,	// (0x00046259) heading_sub_pane

0x76f4,	// (0x00046261) list_touch_info_pane_ParamLimits

0x76f4,	// (0x00046261) list_touch_info_pane

0x7703,	// (0x00046270) list_single_touch_info_pane_ParamLimits

0x7703,	// (0x00046270) list_single_touch_info_pane

0x7715,	// (0x00046282) list_single_touch_info_pane_t1

0x7723,	// (0x00046290) list_single_touch_info_pane_t2

0x0001,

0xfafc,	// (0x0004e669) list_single_touch_info_pane_t

0x4393,	// (0x00042f00) bg_popup_heading_pane_cp

0x7731,	// (0x0004629e) heading_sub_pane_t1

0x5277,	// (0x00043de4) bg_popup_preview_window_pane_cp_ParamLimits

0x5277,	// (0x00043de4) bg_popup_preview_window_pane_cp

0x76ec,	// (0x00046259) heading_preview_pane

0x76f4,	// (0x00046261) list_preview_pane_ParamLimits

0x76f4,	// (0x00046261) list_preview_pane

0x773f,	// (0x000462ac) popup_preview_window_g1

0x7703,	// (0x00046270) list_single_preview_pane_ParamLimits

0x7703,	// (0x00046270) list_single_preview_pane

0x7747,	// (0x000462b4) list_single_preview_pane_g1

0x774f,	// (0x000462bc) list_single_preview_pane_t1

0x7715,	// (0x00046282) list_single_preview_pane_t2

0x0001,

0xfb01,	// (0x0004e66e) list_single_preview_pane_t

0x775d,	// (0x000462ca) bg_popup_heading_pane_cp2_ParamLimits

0x775d,	// (0x000462ca) bg_popup_heading_pane_cp2

0x7773,	// (0x000462e0) heading_preview_pane_g1

0x777b,	// (0x000462e8) heading_preview_pane_t1_ParamLimits

0x777b,	// (0x000462e8) heading_preview_pane_t1

0x2fae,	// (0x00041b1b) soft_indicator_pane_t1_ParamLimits

0x36a1,	// (0x0004220e) scroll_pane_ParamLimits

0x3bc6,	// (0x00042733) scroll_sc2_left_pane

0x3bcf,	// (0x0004273c) scroll_sc2_right_pane

0x3bee,	// (0x0004275b) scroll_bg_pane_g1_ParamLimits

0x3c03,	// (0x00042770) scroll_bg_pane_g2_ParamLimits

0x3c1b,	// (0x00042788) scroll_bg_pane_g3_ParamLimits

0xf6fa,	// (0x0004e267) scroll_bg_pane_g_ParamLimits

0x3bee,	// (0x0004275b) scroll_handle_pane_g1_ParamLimits

0x3c3d,	// (0x000427aa) scroll_handle_pane_g2_ParamLimits

0x3c1b,	// (0x00042788) scroll_handle_pane_g3_ParamLimits

0xf701,	// (0x0004e26e) scroll_handle_pane_g_ParamLimits

0x4719,	// (0x00043286) popup_choice_list_window_ParamLimits

0x4719,	// (0x00043286) popup_choice_list_window

0x50d1,	// (0x00043c3e) choice_list_pane

0x5153,	// (0x00043cc0) cell_toolbar_pane_t1

0x517b,	// (0x00043ce8) toolbar_button_pane_ParamLimits

0x62a8,	// (0x00044e15) ai_gene_pane_1_t2_ParamLimits

0x62a8,	// (0x00044e15) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x0004e47f) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x0004e47f) ai_gene_pane_1_t

0x7798,	// (0x00046305) scroll_sc2_left_pane_g1

0x7798,	// (0x00046305) scroll_sc2_right_pane_g1

0x46f1,	// (0x0004325e) bg_popup_sub_pane_cp10

0x77a2,	// (0x0004630f) list_choice_list_pane

0x77b9,	// (0x00046326) list_single_choice_list_pane_ParamLimits

0x77b9,	// (0x00046326) list_single_choice_list_pane

0x77cd,	// (0x0004633a) list_single_choice_list_pane_g1

0x77d5,	// (0x00046342) list_single_choice_list_pane_t1_ParamLimits

0x77d5,	// (0x00046342) list_single_choice_list_pane_t1

0x77ea,	// (0x00046357) choice_list_pane_g1

0x77f2,	// (0x0004635f) choice_list_pane_t1

0x2dce,	// (0x0004193b) input_focus_pane_cp11

0x3aa3,	// (0x00042610) title_pane_stacon_g2_ParamLimits

0x3aa3,	// (0x00042610) title_pane_stacon_g2

0x0002,

0xf6e0,	// (0x0004e24d) title_pane_stacon_g_ParamLimits

0xf6e0,	// (0x0004e24d) title_pane_stacon_g

0x4393,	// (0x00042f00) cursor_press_pane

0xcd8d,	// (0x0004b8fa) popup_fep_hwr_window_ParamLimits

0xcd8d,	// (0x0004b8fa) popup_fep_hwr_window

0x483b,	// (0x000433a8) popup_fep_vkb_window_ParamLimits

0x483b,	// (0x000433a8) popup_fep_vkb_window

0x7800,	// (0x0004636d) cursor_press_pane_g1

0x0002,

0xfb2a,	// (0x0004e697) fep_vkb_side_pane_g_ParamLimits

0x2118,	// (0x00040c85) fep_hwr_candidate_pane_ParamLimits

0x2118,	// (0x00040c85) fep_hwr_candidate_pane

0x2142,	// (0x00040caf) fep_hwr_side_pane_ParamLimits

0x2142,	// (0x00040caf) fep_hwr_side_pane

0x2162,	// (0x00040ccf) fep_hwr_top_pane_ParamLimits

0x2162,	// (0x00040ccf) fep_hwr_top_pane

0x217a,	// (0x00040ce7) fep_hwr_write_pane_ParamLimits

0x217a,	// (0x00040ce7) fep_hwr_write_pane

0xfb2a,	// (0x0004e697) fep_vkb_side_pane_g

0x7808,	// (0x00046375) fep_hwr_top_pane_g1

0x781a,	// (0x00046387) fep_hwr_top_pane_g2

0x21a6,	// (0x00040d13) fep_hwr_top_pane_g3

0x0002,

0xfb06,	// (0x0004e673) fep_hwr_top_pane_g

0x21bb,	// (0x00040d28) fep_hwr_top_text_pane

0x3d94,	// (0x00042901) fep_hwr_top_text_pane_g1

0x7850,	// (0x000463bd) fep_hwr_top_text_pane_t1

0x22b1,	// (0x00040e1e) fep_hwr_candidate_pane_g1

0x7aa3,	// (0x00046610) fep_vkb_keypad_pane_g3_ParamLimits

0x7aa3,	// (0x00046610) fep_vkb_keypad_pane_g3

0x7acb,	// (0x00046638) fep_vkb_keypad_pane_g4_ParamLimits

0x7acb,	// (0x00046638) fep_vkb_keypad_pane_g4

0x7b3a,	// (0x000466a7) fep_vkb_bottom_pane_g2_ParamLimits

0x7b3a,	// (0x000466a7) fep_vkb_bottom_pane_g2

0x0001,

0xfb31,	// (0x0004e69e) fep_vkb_bottom_pane_g_ParamLimits

0xfb31,	// (0x0004e69e) fep_vkb_bottom_pane_g

0x7798,	// (0x00046305) cell_vkb_side_pane_g2

0x0001,

0xfb3b,	// (0x0004e6a8) cell_vkb_side_pane_g

0x7bc5,	// (0x00046732) cell_vkb_side_pane_t1

0x7bd3,	// (0x00046740) cell_vkb_side_pane_t1_copy1

0x7798,	// (0x00046305) bg_fep_vkb_candidate_pane_g2

0x7cff,	// (0x0004686c) cell_vkb_candidate_pane_ParamLimits

0x785e,	// (0x000463cb) aid_size_cell_vkb_ParamLimits

0x785e,	// (0x000463cb) aid_size_cell_vkb

0x7cff,	// (0x0004686c) cell_vkb_candidate_pane

0x22cb,	// (0x00040e38) bg_popup_fep_shadow_pane_g1

0xdef4,	// (0x0004ca61) fep_vkb_bottom_pane_ParamLimits

0xdef4,	// (0x0004ca61) fep_vkb_bottom_pane

0x7922,	// (0x0004648f) fep_vkb_candidate_pane_ParamLimits

0x7922,	// (0x0004648f) fep_vkb_candidate_pane

0xdf19,	// (0x0004ca86) fep_vkb_keypad_pane_ParamLimits

0xdf19,	// (0x0004ca86) fep_vkb_keypad_pane

0xdf55,	// (0x0004cac2) fep_vkb_side_pane_ParamLimits

0xdf55,	// (0x0004cac2) fep_vkb_side_pane

0xdf91,	// (0x0004cafe) fep_vkb_top_pane_ParamLimits

0xdf91,	// (0x0004cafe) fep_vkb_top_pane

0x79fc,	// (0x00046569) fep_vkb_top_pane_g1_ParamLimits

0x79fc,	// (0x00046569) fep_vkb_top_pane_g1

0x7a0b,	// (0x00046578) fep_vkb_top_pane_g2_ParamLimits

0x7a0b,	// (0x00046578) fep_vkb_top_pane_g2

0x7a1a,	// (0x00046587) fep_vkb_top_pane_g3_ParamLimits

0x7a1a,	// (0x00046587) fep_vkb_top_pane_g3

0x0003,

0xfb21,	// (0x0004e68e) fep_vkb_top_pane_g_ParamLimits

0xfb21,	// (0x0004e68e) fep_vkb_top_pane_g

0x7a38,	// (0x000465a5) fep_vkb_top_text_pane_ParamLimits

0x7a38,	// (0x000465a5) fep_vkb_top_text_pane

0xdfcd,	// (0x0004cb3a) fep_vkb_side_pane_g1_ParamLimits

0xdfcd,	// (0x0004cb3a) fep_vkb_side_pane_g1

0x7a92,	// (0x000465ff) grid_vkb_side_pane_ParamLimits

0x7a92,	// (0x000465ff) grid_vkb_side_pane

0x22d3,	// (0x00040e40) bg_popup_fep_shadow_pane_g2

0x22dc,	// (0x00040e49) bg_popup_fep_shadow_pane_g3

0x22e4,	// (0x00040e51) bg_popup_fep_shadow_pane_g4

0x22ed,	// (0x00040e5a) bg_popup_fep_shadow_pane_g5

0x22f7,	// (0x00040e64) bg_popup_fep_shadow_pane_g6

0x22ff,	// (0x00040e6c) bg_popup_fep_shadow_pane_g7

0x37b5,	// (0x00042322) bg_popup_fep_shadow_pane_g8

0x7ae9,	// (0x00046656) grid_vkb_keypad_number_pane_ParamLimits

0x7ae9,	// (0x00046656) grid_vkb_keypad_number_pane

0x7af9,	// (0x00046666) grid_vkb_keypad_pane_ParamLimits

0x7af9,	// (0x00046666) grid_vkb_keypad_pane

0x7b1f,	// (0x0004668c) fep_vkb_bottom_pane_g1_ParamLimits

0x7b1f,	// (0x0004668c) fep_vkb_bottom_pane_g1

0x7b48,	// (0x000466b5) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7b48,	// (0x000466b5) grid_vkb_keypad_bottom_left_pane

0x7b5d,	// (0x000466ca) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7b5d,	// (0x000466ca) grid_vkb_keypad_bottom_right_pane

0x7b72,	// (0x000466df) fep_vkb_top_text_pane_g1

0xe014,	// (0x0004cb81) fep_vkb_top_text_pane_t1

0xe026,	// (0x0004cb93) cell_vkb_side_pane_ParamLimits

0xe026,	// (0x0004cb93) cell_vkb_side_pane

0x7798,	// (0x00046305) cell_vkb_side_pane_g1

0x7be1,	// (0x0004674e) cell_vkb_keypad_pane_ParamLimits

0x7be1,	// (0x0004674e) cell_vkb_keypad_pane

0x7c56,	// (0x000467c3) cell_vkb_keypad_pane_g1

0x0008,

0xfb4e,	// (0x0004e6bb) bg_popup_fep_shadow_pane_g

0x7798,	// (0x00046305) cell_hwr_side_pane_g1

0x7798,	// (0x00046305) cell_hwr_side_pane_g2

0x7c60,	// (0x000467cd) cell_vkb_keypad_pane_t1

0xe03c,	// (0x0004cba9) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe03c,	// (0x0004cba9) cell_vkb_keypad_bottom_left_pane

0xe051,	// (0x0004cbbe) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe051,	// (0x0004cbbe) cell_vkb_keypad_bottom_right_pane

0x7798,	// (0x00046305) cell_vkb_keypad_bottom_left_pane_g1

0x7798,	// (0x00046305) cell_vkb_keypad_bottom_right_pane_g1

0x7cc4,	// (0x00046831) cell_vkb_keypad_number_pane_ParamLimits

0x7cc4,	// (0x00046831) cell_vkb_keypad_number_pane

0x7ce3,	// (0x00046850) cell_vkb_keypad_number_pane_g1

0x7ced,	// (0x0004685a) cell_vkb_keypad_number_pane_g2

0x7cf6,	// (0x00046863) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb40,	// (0x0004e6ad) cell_vkb_keypad_number_pane_g

0x7c60,	// (0x000467cd) cell_vkb_keypad_number_pane_t1

0x7d1a,	// (0x00046887) fep_vkb_candidate_pane_g1

0x0001,

0xfb3b,	// (0x0004e6a8) cell_hwr_side_pane_g

0x7d33,	// (0x000468a0) cell_hwr_side_pane_t1

0x2311,	// (0x00040e7e) cell_hwr_side_pane_t1_copy1

0x7a2a,	// (0x00046597) cell_hwr_candidate_pane_g1

0x231f,	// (0x00040e8c) cell_hwr_candidate_pane_t1

0x7798,	// (0x00046305) cell_vkb_candidate_pane_g2

0x7db9,	// (0x00046926) cell_vkb_candidate_pane_t1

0x80be,	// (0x00046c2b) bg_popup_fep_shadow_pane_ParamLimits

0x80be,	// (0x00046c2b) bg_popup_fep_shadow_pane

0xdba8,	// (0x0004c715) bg_fep_hwr_top_pane_g4

0x782c,	// (0x00046399) bg_hwr_side_pane_g1_ParamLimits

0x782c,	// (0x00046399) bg_hwr_side_pane_g1

0xc102,	// (0x0004ac6f) cell_hwr_side_pane_ParamLimits

0xc102,	// (0x0004ac6f) cell_hwr_side_pane

0x2232,	// (0x00040d9f) fep_hwr_write_pane_g1_ParamLimits

0x2232,	// (0x00040d9f) fep_hwr_write_pane_g1

0x223f,	// (0x00040dac) fep_hwr_write_pane_g2_ParamLimits

0x223f,	// (0x00040dac) fep_hwr_write_pane_g2

0x224c,	// (0x00040db9) fep_hwr_write_pane_g3_ParamLimits

0x224c,	// (0x00040db9) fep_hwr_write_pane_g3

0xc122,	// (0x0004ac8f) fep_hwr_write_pane_g4_ParamLimits

0xc122,	// (0x0004ac8f) fep_hwr_write_pane_g4

0x0005,

0xfb0d,	// (0x0004e67a) fep_hwr_write_pane_g_ParamLimits

0xfb0d,	// (0x0004e67a) fep_hwr_write_pane_g

0xdba8,	// (0x0004c715) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xdba8,	// (0x0004c715) bg_fep_hwr_candidate_pane_g2

0x226f,	// (0x00040ddc) cell_hwr_candidate_pane_ParamLimits

0x226f,	// (0x00040ddc) cell_hwr_candidate_pane

0x22b1,	// (0x00040e1e) fep_hwr_candidate_pane_g1_ParamLimits

0x788c,	// (0x000463f9) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x788c,	// (0x000463f9) bg_popup_fep_shadow_pane_cp2

0x7a2a,	// (0x00046597) fep_vkb_top_pane_g4_ParamLimits

0x7a2a,	// (0x00046597) fep_vkb_top_pane_g4

0x7a70,	// (0x000465dd) fep_vkb_side_pane_g2_ParamLimits

0x7a70,	// (0x000465dd) fep_vkb_side_pane_g2

0xb76b,	// (0x0004a2d8) list_setting_pane_t4_ParamLimits

0xb76b,	// (0x0004a2d8) list_setting_pane_t4

0xb805,	// (0x0004a372) list_setting_number_pane_t5_ParamLimits

0xb805,	// (0x0004a372) list_setting_number_pane_t5

0xcae4,	// (0x0004b651) list_double_heading_pane_cp2_ParamLimits

0xcae4,	// (0x0004b651) list_double_heading_pane_cp2

0x3748,	// (0x000422b5) list_double_heading_pane_g1_cp2_ParamLimits

0x3748,	// (0x000422b5) list_double_heading_pane_g1_cp2

0x3754,	// (0x000422c1) list_double_heading_pane_g2_cp2_ParamLimits

0x3754,	// (0x000422c1) list_double_heading_pane_g2_cp2

0x7dc7,	// (0x00046934) list_double_heading_pane_t1_cp2_ParamLimits

0x7dc7,	// (0x00046934) list_double_heading_pane_t1_cp2

0x7ddd,	// (0x0004694a) list_double_heading_pane_t2_cp2_ParamLimits

0x7ddd,	// (0x0004694a) list_double_heading_pane_t2_cp2

0x2db6,	// (0x00041923) aid_value_unit2

0x132e,	// (0x0003fe9b) popup_preview_fixed_window

0x314b,	// (0x00041cb8) bg_popup_preview_window_pane_cp02

0x7def,	// (0x0004695c) list_preview_fixed_pane

0x7e35,	// (0x000469a2) list_empty_pane_fp_ParamLimits

0x7e35,	// (0x000469a2) list_empty_pane_fp

0x7e35,	// (0x000469a2) list_single_cale_day_pane_fp_ParamLimits

0x7e35,	// (0x000469a2) list_single_cale_day_pane_fp

0x7e35,	// (0x000469a2) list_single_graphic_heading_pane_fp_ParamLimits

0x7e35,	// (0x000469a2) list_single_graphic_heading_pane_fp

0x7e35,	// (0x000469a2) list_single_graphic_pane_fp_ParamLimits

0x7e35,	// (0x000469a2) list_single_graphic_pane_fp

0x7e35,	// (0x000469a2) list_single_heading_pane_fp_ParamLimits

0x7e35,	// (0x000469a2) list_single_heading_pane_fp

0x7e35,	// (0x000469a2) list_single_pane_fp_ParamLimits

0x7e35,	// (0x000469a2) list_single_pane_fp

0x7e4a,	// (0x000469b7) list_single_pane_fp_g1_ParamLimits

0x7e4a,	// (0x000469b7) list_single_pane_fp_g1

0x3e6f,	// (0x000429dc) list_single_pane_fp_g2_ParamLimits

0x3e6f,	// (0x000429dc) list_single_pane_fp_g2

0x80cc,	// (0x00046c39) list_single_pane_fp_g3_ParamLimits

0x80cc,	// (0x00046c39) list_single_pane_fp_g3

0x7e56,	// (0x000469c3) list_single_pane_fp_g4_ParamLimits

0x7e56,	// (0x000469c3) list_single_pane_fp_g4

0x0003,

0xfb6f,	// (0x0004e6dc) list_single_pane_fp_g_ParamLimits

0xfb6f,	// (0x0004e6dc) list_single_pane_fp_g

0x0ddb,	// (0x0003f948) list_single_pane_fp_t1_ParamLimits

0x0ddb,	// (0x0003f948) list_single_pane_fp_t1

0x0df2,	// (0x0003f95f) list_single_graphic_pane_fp_g1_ParamLimits

0x0df2,	// (0x0003f95f) list_single_graphic_pane_fp_g1

0x7e4a,	// (0x000469b7) list_single_graphic_pane_fp_g2_ParamLimits

0x7e4a,	// (0x000469b7) list_single_graphic_pane_fp_g2

0x3e6f,	// (0x000429dc) list_single_graphic_pane_fp_g3_ParamLimits

0x3e6f,	// (0x000429dc) list_single_graphic_pane_fp_g3

0x80cc,	// (0x00046c39) list_single_graphic_pane_fp_g4_ParamLimits

0x80cc,	// (0x00046c39) list_single_graphic_pane_fp_g4

0x7e56,	// (0x000469c3) list_single_graphic_pane_fp_g5_ParamLimits

0x7e56,	// (0x000469c3) list_single_graphic_pane_fp_g5

0x0004,

0xfb78,	// (0x0004e6e5) list_single_graphic_pane_fp_g_ParamLimits

0xfb78,	// (0x0004e6e5) list_single_graphic_pane_fp_g

0x0dfe,	// (0x0003f96b) list_single_graphic_pane_fp_t1_ParamLimits

0x0dfe,	// (0x0003f96b) list_single_graphic_pane_fp_t1

0x0df2,	// (0x0003f95f) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x0df2,	// (0x0003f95f) list_single_graphic_heading_pane_fp_g1

0x7e4a,	// (0x000469b7) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7e4a,	// (0x000469b7) list_single_graphic_heading_pane_fp_g2

0x3e6f,	// (0x000429dc) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x3e6f,	// (0x000429dc) list_single_graphic_heading_pane_fp_g3

0x80cc,	// (0x00046c39) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x80cc,	// (0x00046c39) list_single_graphic_heading_pane_fp_g4

0x7e56,	// (0x000469c3) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7e56,	// (0x000469c3) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb78,	// (0x0004e6e5) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb78,	// (0x0004e6e5) list_single_graphic_heading_pane_fp_g

0x0e14,	// (0x0003f981) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x0e14,	// (0x0003f981) list_single_graphic_heading_pane_fp_t1

0x0e2a,	// (0x0003f997) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x0e2a,	// (0x0003f997) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb83,	// (0x0004e6f0) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb83,	// (0x0004e6f0) list_single_graphic_heading_pane_fp_t

0x0e3c,	// (0x0003f9a9) list_single_cale_day_pane_fp_g1_ParamLimits

0x0e3c,	// (0x0003f9a9) list_single_cale_day_pane_fp_g1

0x7e62,	// (0x000469cf) list_single_cale_day_pane_fp_g2_ParamLimits

0x7e62,	// (0x000469cf) list_single_cale_day_pane_fp_g2

0x233d,	// (0x00040eaa) list_single_cale_day_pane_fp_g3_ParamLimits

0x233d,	// (0x00040eaa) list_single_cale_day_pane_fp_g3

0x2365,	// (0x00040ed2) list_single_cale_day_pane_fp_g4_ParamLimits

0x2365,	// (0x00040ed2) list_single_cale_day_pane_fp_g4

0x2389,	// (0x00040ef6) list_single_cale_day_pane_fp_g5_ParamLimits

0x2389,	// (0x00040ef6) list_single_cale_day_pane_fp_g5

0x0004,

0xfb88,	// (0x0004e6f5) list_single_cale_day_pane_fp_g_ParamLimits

0xfb88,	// (0x0004e6f5) list_single_cale_day_pane_fp_g

0x0e74,	// (0x0003f9e1) list_single_cale_day_pane_fp_t1_ParamLimits

0x0e74,	// (0x0003f9e1) list_single_cale_day_pane_fp_t1

0x0e9a,	// (0x0003fa07) list_single_cale_day_pane_fp_t2_ParamLimits

0x0e9a,	// (0x0003fa07) list_single_cale_day_pane_fp_t2

0x0eb3,	// (0x0003fa20) list_single_cale_day_pane_fp_t3_ParamLimits

0x0eb3,	// (0x0003fa20) list_single_cale_day_pane_fp_t3

0x0002,

0xfb93,	// (0x0004e700) list_single_cale_day_pane_fp_t_ParamLimits

0xfb93,	// (0x0004e700) list_single_cale_day_pane_fp_t

0x7e4a,	// (0x000469b7) list_empty_pane_fp_g1_ParamLimits

0x7e4a,	// (0x000469b7) list_empty_pane_fp_g1

0x0ecc,	// (0x0003fa39) list_empty_pane_fp_t1

0x0eda,	// (0x0003fa47) list_empty_pane_fp_t2

0x0001,

0xfb9a,	// (0x0004e707) list_empty_pane_fp_t

0x7e4a,	// (0x000469b7) list_single_heading_pane_fp_g1_ParamLimits

0x7e4a,	// (0x000469b7) list_single_heading_pane_fp_g1

0x3e6f,	// (0x000429dc) list_single_heading_pane_fp_g2_ParamLimits

0x3e6f,	// (0x000429dc) list_single_heading_pane_fp_g2

0x80cc,	// (0x00046c39) list_single_heading_pane_fp_g3_ParamLimits

0x80cc,	// (0x00046c39) list_single_heading_pane_fp_g3

0x0002,

0xfb9f,	// (0x0004e70c) list_single_heading_pane_fp_g_ParamLimits

0xfb9f,	// (0x0004e70c) list_single_heading_pane_fp_g

0x0ee8,	// (0x0003fa55) list_single_heading_pane_fp_t1_ParamLimits

0x0ee8,	// (0x0003fa55) list_single_heading_pane_fp_t1

0x0efa,	// (0x0003fa67) list_single_heading_pane_fp_t2_ParamLimits

0x0efa,	// (0x0003fa67) list_single_heading_pane_fp_t2

0x0001,

0xfba6,	// (0x0004e713) list_single_heading_pane_fp_t_ParamLimits

0xfba6,	// (0x0004e713) list_single_heading_pane_fp_t

0x393a,	// (0x000424a7) aid_size_cell_fast

0x30bb,	// (0x00041c28) soft_indicator_pane_cp1_t1

0x3977,	// (0x000424e4) cell_app_pane_cp2_ParamLimits

0x3977,	// (0x000424e4) cell_app_pane_cp2

0x2101,	// (0x00040c6e) fep_hwr_candidate_drop_down_list_pane

0xdbb6,	// (0x0004c723) fep_hwr_candidate_pane_g3_ParamLimits

0xdbb6,	// (0x0004c723) fep_hwr_candidate_pane_g3

0xdbc3,	// (0x0004c730) fep_hwr_candidate_pane_g4_ParamLimits

0xdbc3,	// (0x0004c730) fep_hwr_candidate_pane_g4

0x0002,

0xfb1a,	// (0x0004e687) fep_hwr_candidate_pane_g_ParamLimits

0xfb1a,	// (0x0004e687) fep_hwr_candidate_pane_g

0x7911,	// (0x0004647e) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7911,	// (0x0004647e) fep_vkb_candidate_drop_down_list_pane

0x7d22,	// (0x0004688f) fep_vkb_candidate_pane_g3

0x7d2a,	// (0x00046897) fep_vkb_candidate_pane_g4

0x0002,

0xfb47,	// (0x0004e6b4) fep_vkb_candidate_pane_g

0x7a2a,	// (0x00046597) cell_hwr_candidate_pane_g1_ParamLimits

0x7d41,	// (0x000468ae) cell_hwr_candidate_pane_g3_ParamLimits

0x7d41,	// (0x000468ae) cell_hwr_candidate_pane_g3

0x7d62,	// (0x000468cf) cell_hwr_candidate_pane_g4_ParamLimits

0x7d62,	// (0x000468cf) cell_hwr_candidate_pane_g4

0x0002,

0xfb61,	// (0x0004e6ce) cell_hwr_candidate_pane_g_ParamLimits

0xfb61,	// (0x0004e6ce) cell_hwr_candidate_pane_g

0x7d83,	// (0x000468f0) cell_vkb_candidate_pane_g3_ParamLimits

0x7d83,	// (0x000468f0) cell_vkb_candidate_pane_g3

0x7d9e,	// (0x0004690b) cell_vkb_candidate_pane_g4_ParamLimits

0x7d9e,	// (0x0004690b) cell_vkb_candidate_pane_g4

0x7e6e,	// (0x000469db) cell_app_pane_cp2_g1_ParamLimits

0x7e6e,	// (0x000469db) cell_app_pane_cp2_g1

0x7e8c,	// (0x000469f9) cell_app_pane_cp2_g2_ParamLimits

0x7e8c,	// (0x000469f9) cell_app_pane_cp2_g2

0x0001,

0xfbab,	// (0x0004e718) cell_app_pane_cp2_g_ParamLimits

0xfbab,	// (0x0004e718) cell_app_pane_cp2_g

0x7e98,	// (0x00046a05) cell_app_pane_cp2_t1_ParamLimits

0x7e98,	// (0x00046a05) cell_app_pane_cp2_t1

0x372e,	// (0x0004229b) grid_highlight_pane_cp1_ParamLimits

0x372e,	// (0x0004229b) grid_highlight_pane_cp1

0x23ad,	// (0x00040f1a) cell_hwr_candidate_pane_cp1_ParamLimits

0x23ad,	// (0x00040f1a) cell_hwr_candidate_pane_cp1

0x7a2a,	// (0x00046597) fep_hwr_candidate_drop_down_list_pane_g1

0x7eaa,	// (0x00046a17) fep_hwr_candidate_drop_down_list_pane_g2

0x7eb7,	// (0x00046a24) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb0,	// (0x0004e71d) fep_hwr_candidate_drop_down_list_pane_g

0x23cc,	// (0x00040f39) fep_hwr_candidate_drop_down_list_scroll_pane

0x23d5,	// (0x00040f42) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x23d5,	// (0x00040f42) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x23e2,	// (0x00040f4f) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x23e2,	// (0x00040f4f) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x23ef,	// (0x00040f5c) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x23ef,	// (0x00040f5c) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7d83,	// (0x000468f0) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7d83,	// (0x000468f0) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7d9e,	// (0x0004690b) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7d9e,	// (0x0004690b) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x23fc,	// (0x00040f69) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x23fc,	// (0x00040f69) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x2417,	// (0x00040f84) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2417,	// (0x00040f84) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x2432,	// (0x00040f9f) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x2432,	// (0x00040f9f) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb7,	// (0x0004e724) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb7,	// (0x0004e724) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7ec4,	// (0x00046a31) cell_vkb_candidate_pane_cp1_ParamLimits

0x7ec4,	// (0x00046a31) cell_vkb_candidate_pane_cp1

0x7a2a,	// (0x00046597) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7a2a,	// (0x00046597) fep_vkb_candidate_drop_down_list_pane_g1

0x7eaa,	// (0x00046a17) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7eaa,	// (0x00046a17) fep_vkb_candidate_drop_down_list_pane_g2

0x7eb7,	// (0x00046a24) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7eb7,	// (0x00046a24) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb0,	// (0x0004e71d) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb0,	// (0x0004e71d) fep_vkb_candidate_drop_down_list_pane_g

0x7ee4,	// (0x00046a51) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7ee4,	// (0x00046a51) fep_vkb_candidate_drop_down_list_scroll_pane

0x7ef1,	// (0x00046a5e) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7ef1,	// (0x00046a5e) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7efe,	// (0x00046a6b) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7efe,	// (0x00046a6b) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7f0a,	// (0x00046a77) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7f0a,	// (0x00046a77) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7d41,	// (0x000468ae) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7d41,	// (0x000468ae) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7d62,	// (0x000468cf) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7d62,	// (0x000468cf) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7f16,	// (0x00046a83) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7f16,	// (0x00046a83) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7f37,	// (0x00046aa4) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7f37,	// (0x00046aa4) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7f58,	// (0x00046ac5) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7f58,	// (0x00046ac5) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc8,	// (0x0004e735) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc8,	// (0x0004e735) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xc5ee,	// (0x0004b15b) title_pane_g1_ParamLimits

0xc5ff,	// (0x0004b16c) title_pane_g2_ParamLimits

0xf56a,	// (0x0004e0d7) title_pane_g_ParamLimits

0x3d84,	// (0x000428f1) aid_call2_pane

0x3d8c,	// (0x000428f9) aid_call_pane

0x3d94,	// (0x00042901) popup_clock_analogue_window_g1

0x3d94,	// (0x00042901) popup_clock_analogue_window_g2

0x1713,	// (0x00040280) popup_clock_analogue_window_g3

0x171c,	// (0x00040289) popup_clock_analogue_window_g4

0x2dd8,	// (0x00041945) popup_clock_analogue_window_g5

0x0004,

0xf70f,	// (0x0004e27c) popup_clock_analogue_window_g

0x1724,	// (0x00040291) popup_clock_analogue_window_t1

0x1732,	// (0x0004029f) clock_digital_number_pane_ParamLimits

0x1732,	// (0x0004029f) clock_digital_number_pane

0x173e,	// (0x000402ab) clock_digital_number_pane_cp02_ParamLimits

0x173e,	// (0x000402ab) clock_digital_number_pane_cp02

0x174a,	// (0x000402b7) clock_digital_number_pane_cp03_ParamLimits

0x174a,	// (0x000402b7) clock_digital_number_pane_cp03

0x1756,	// (0x000402c3) clock_digital_number_pane_cp04_ParamLimits

0x1756,	// (0x000402c3) clock_digital_number_pane_cp04

0x1762,	// (0x000402cf) clock_digital_separator_pane_ParamLimits

0x1762,	// (0x000402cf) clock_digital_separator_pane

0x176e,	// (0x000402db) popup_clock_digital_window_t1_ParamLimits

0x176e,	// (0x000402db) popup_clock_digital_window_t1

0x2dd8,	// (0x00041945) clock_digital_number_pane_g1

0x2dd8,	// (0x00041945) clock_digital_number_pane_g2

0x0001,

0xf71a,	// (0x0004e287) clock_digital_number_pane_g

0x2dd8,	// (0x00041945) clock_digital_separator_pane_g1

0x2dd8,	// (0x00041945) clock_digital_separator_pane_g2

0x0001,

0xf71a,	// (0x0004e287) clock_digital_separator_pane_g

0xd366,	// (0x0004bed3) aid_fill_nsta_ParamLimits

0xd495,	// (0x0004c002) indicator_nsta_pane_ParamLimits

0x4f5e,	// (0x00043acb) popup_clock_analogue_window

0x4f5e,	// (0x00043acb) popup_clock_digital_window

0x38fb,	// (0x00042468) grid_indicator_nsta_pane_ParamLimits

0x7177,	// (0x00045ce4) clock_nsta_pane_t2

0x0001,

0xfa9a,	// (0x0004e607) clock_nsta_pane_t

0x16d7,	// (0x00040244) aid_size_max_handle

0xbdc9,	// (0x0004a936) aid_size_min_handle

0x4393,	// (0x00042f00) editor_scroll_pane

0x7f73,	// (0x00046ae0) ex_editor_pane

0x38a8,	// (0x00042415) scroll_pane_cp13

0x36cd,	// (0x0004223a) scroll_pane_cp14

0x3dbe,	// (0x0004292b) scroll_pane_cp36

0xcaf3,	// (0x0004b660) list_single_graphic_hl_pane_cp2_ParamLimits

0xcaf3,	// (0x0004b660) list_single_graphic_hl_pane_cp2

0xc0d9,	// (0x0004ac46) list_single_graphic_hl_pane_ParamLimits

0xc0d9,	// (0x0004ac46) list_single_graphic_hl_pane

0x0f10,	// (0x0003fa7d) aid_size_min_hl_cp1

0x7f7b,	// (0x00046ae8) list_highlight_pane_cp34_ParamLimits

0x7f7b,	// (0x00046ae8) list_highlight_pane_cp34

0x7f8c,	// (0x00046af9) list_single_graphic_hl_pane_g1_ParamLimits

0x7f8c,	// (0x00046af9) list_single_graphic_hl_pane_g1

0x0f19,	// (0x0003fa86) list_single_graphic_hl_pane_g2_ParamLimits

0x0f19,	// (0x0003fa86) list_single_graphic_hl_pane_g2

0x0f19,	// (0x0003fa86) list_single_graphic_hl_pane_g3_ParamLimits

0x0f19,	// (0x0003fa86) list_single_graphic_hl_pane_g3

0x4304,	// (0x00042e71) list_single_graphic_hl_pane_g4_ParamLimits

0x4304,	// (0x00042e71) list_single_graphic_hl_pane_g4

0x244d,	// (0x00040fba) list_single_graphic_hl_pane_g5_ParamLimits

0x244d,	// (0x00040fba) list_single_graphic_hl_pane_g5

0x0004,

0xfbd9,	// (0x0004e746) list_single_graphic_hl_pane_g_ParamLimits

0xfbd9,	// (0x0004e746) list_single_graphic_hl_pane_g

0x0f25,	// (0x0003fa92) list_single_graphic_hl_pane_t1_ParamLimits

0x0f25,	// (0x0003fa92) list_single_graphic_hl_pane_t1

0x7f99,	// (0x00046b06) aid_size_min_hl_cp2

0x7fa2,	// (0x00046b0f) list_highlight_pane_cp34_cp2_ParamLimits

0x7fa2,	// (0x00046b0f) list_highlight_pane_cp34_cp2

0x7f8c,	// (0x00046af9) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7f8c,	// (0x00046af9) list_single_graphic_hl_pane_g1_cp2

0x7faf,	// (0x00046b1c) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7faf,	// (0x00046b1c) list_single_graphic_hl_pane_g2_cp2

0x7fbb,	// (0x00046b28) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7fbb,	// (0x00046b28) list_single_graphic_hl_pane_g3_cp2

0x579a,	// (0x00044307) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x579a,	// (0x00044307) list_single_graphic_hl_pane_g4_cp2

0x7fc9,	// (0x00046b36) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7fc9,	// (0x00046b36) list_single_graphic_hl_pane_g5_cp2

0xbe07,	// (0x0004a974) control_pane_g4_ParamLimits

0xbe07,	// (0x0004a974) control_pane_g4

0x46f1,	// (0x0004325e) bg_popup_sub_pane_cp10_ParamLimits

0x77a2,	// (0x0004630f) list_choice_list_pane_ParamLimits

0x77b1,	// (0x0004631e) scroll_pane_cp23

0x314b,	// (0x00041cb8) bg_popup_preview_window_pane_cp02_ParamLimits

0x7def,	// (0x0004695c) list_preview_fixed_pane_ParamLimits

0x7e05,	// (0x00046972) list_preview_fixed_pane_cp_ParamLimits

0x7e05,	// (0x00046972) list_preview_fixed_pane_cp

0x7e11,	// (0x0004697e) popup_preview_fixed_window_g1_ParamLimits

0x7e11,	// (0x0004697e) popup_preview_fixed_window_g1

0x7e1d,	// (0x0004698a) popup_preview_fixed_window_g2_ParamLimits

0x7e1d,	// (0x0004698a) popup_preview_fixed_window_g2

0x0002,

0xfb68,	// (0x0004e6d5) popup_preview_fixed_window_g_ParamLimits

0xfb68,	// (0x0004e6d5) popup_preview_fixed_window_g

0x164b,	// (0x000401b8) aid_navi_side_left_pane_ParamLimits

0x1660,	// (0x000401cd) aid_navi_side_right_pane_ParamLimits

0x1678,	// (0x000401e5) navi_icon_pane_stacon_ParamLimits

0x168c,	// (0x000401f9) navi_navi_pane_stacon_ParamLimits

0x1678,	// (0x000401e5) navi_text_pane_stacon_ParamLimits

0x2dce,	// (0x0004193b) main_text_info_pane

0x7ff3,	// (0x00046b60) listscroll_text_info_pane

0x7ffb,	// (0x00046b68) list_text_info_pane_ParamLimits

0x7ffb,	// (0x00046b68) list_text_info_pane

0x800a,	// (0x00046b77) scroll_pane_cp24_ParamLimits

0x800a,	// (0x00046b77) scroll_pane_cp24

0xe06c,	// (0x0004cbd9) list_text_info_pane_t1_ParamLimits

0xe06c,	// (0x0004cbd9) list_text_info_pane_t1

0xcd00,	// (0x0004b86d) popup_fast_swap2_window_ParamLimits

0xcd00,	// (0x0004b86d) popup_fast_swap2_window

0x8059,	// (0x00046bc6) aid_size_cell_fast2

0x2dce,	// (0x0004193b) bg_popup_window_pane_cp17

0x5639,	// (0x000441a6) heading_pane_cp2

0x3397,	// (0x00041f04) listscroll_fast2_pane

0x8063,	// (0x00046bd0) grid_fast2_pane

0x806d,	// (0x00046bda) listscroll_fast2_pane_g1

0x8075,	// (0x00046be2) listscroll_fast2_pane_g2

0x0001,

0xfbe4,	// (0x0004e751) listscroll_fast2_pane_g

0x38a8,	// (0x00042415) scroll_pane_cp26

0x807f,	// (0x00046bec) cell_fast2_pane_ParamLimits

0x807f,	// (0x00046bec) cell_fast2_pane

0x8094,	// (0x00046c01) cell_fast2_pane_g1

0x809d,	// (0x00046c0a) cell_fast2_pane_g2

0x80a6,	// (0x00046c13) cell_fast2_pane_g3

0x0002,

0xfbe9,	// (0x0004e756) cell_fast2_pane_g

0x348a,	// (0x00041ff7) grid_highlight_pane_cp9

0x349f,	// (0x0004200c) main_eswt_pane_ParamLimits

0x349f,	// (0x0004200c) main_eswt_pane

0x801f,	// (0x00046b8c) list_single_text_info_pane

0x80ae,	// (0x00046c1b) eswt_ctrl_button_pane

0x80ae,	// (0x00046c1b) eswt_ctrl_canvas_pane

0x80b6,	// (0x00046c23) eswt_ctrl_combo_pane

0x80ae,	// (0x00046c1b) eswt_ctrl_default_pane

0x80ae,	// (0x00046c1b) eswt_ctrl_label_pane

0x80e0,	// (0x00046c4d) eswt_ctrl_wait_pane

0x80e8,	// (0x00046c55) eswt_shell_pane

0x2dce,	// (0x0004193b) listscroll_eswt_app_pane

0x8108,	// (0x00046c75) popup_eswt_tasktip_window_ParamLimits

0x8108,	// (0x00046c75) popup_eswt_tasktip_window

0x5277,	// (0x00043de4) bg_popup_window_pane_cp18

0x8119,	// (0x00046c86) eswt_control_pane_g1_ParamLimits

0x8119,	// (0x00046c86) eswt_control_pane_g1

0x8126,	// (0x00046c93) eswt_control_pane_g2_ParamLimits

0x8126,	// (0x00046c93) eswt_control_pane_g2

0x8133,	// (0x00046ca0) eswt_control_pane_g3_ParamLimits

0x8133,	// (0x00046ca0) eswt_control_pane_g3

0x8140,	// (0x00046cad) eswt_control_pane_g4_ParamLimits

0x8140,	// (0x00046cad) eswt_control_pane_g4

0x0003,

0xfbf0,	// (0x0004e75d) eswt_control_pane_g_ParamLimits

0xfbf0,	// (0x0004e75d) eswt_control_pane_g

0x372e,	// (0x0004229b) bg_button_pane_ParamLimits

0x372e,	// (0x0004229b) bg_button_pane

0x349f,	// (0x0004200c) common_borders_pane_copy2_ParamLimits

0x349f,	// (0x0004200c) common_borders_pane_copy2

0x814d,	// (0x00046cba) control_button_pane_g1_ParamLimits

0x814d,	// (0x00046cba) control_button_pane_g1

0x8159,	// (0x00046cc6) control_button_pane_g2_ParamLimits

0x8159,	// (0x00046cc6) control_button_pane_g2

0x8165,	// (0x00046cd2) control_button_pane_g3_ParamLimits

0x8165,	// (0x00046cd2) control_button_pane_g3

0x0002,

0xfbf9,	// (0x0004e766) control_button_pane_g_ParamLimits

0xfbf9,	// (0x0004e766) control_button_pane_g

0x8179,	// (0x00046ce6) control_button_pane_t1

0x8187,	// (0x00046cf4) control_button_pane_t2

0x0001,

0xfc00,	// (0x0004e76d) control_button_pane_t

0x5187,	// (0x00043cf4) bg_button_pane_g1

0x518f,	// (0x00043cfc) bg_button_pane_g2

0x5197,	// (0x00043d04) bg_button_pane_g3

0x519f,	// (0x00043d0c) bg_button_pane_g4

0x51a7,	// (0x00043d14) bg_button_pane_g5

0x51af,	// (0x00043d1c) bg_button_pane_g6

0x51b7,	// (0x00043d24) bg_button_pane_g7

0x51bf,	// (0x00043d2c) bg_button_pane_g8

0x51c7,	// (0x00043d34) bg_button_pane_g9

0x0008,

0xf866,	// (0x0004e3d3) bg_button_pane_g

0x775d,	// (0x000462ca) common_borders_pane_ParamLimits

0x775d,	// (0x000462ca) common_borders_pane

0x8119,	// (0x00046c86) eswt_control_pane_g1_copy1_ParamLimits

0x8119,	// (0x00046c86) eswt_control_pane_g1_copy1

0x8126,	// (0x00046c93) eswt_control_pane_g2_copy1_ParamLimits

0x8126,	// (0x00046c93) eswt_control_pane_g2_copy1

0x8133,	// (0x00046ca0) eswt_control_pane_g3_copy1_ParamLimits

0x8133,	// (0x00046ca0) eswt_control_pane_g3_copy1

0x8140,	// (0x00046cad) eswt_control_pane_g4_copy1_ParamLimits

0x8140,	// (0x00046cad) eswt_control_pane_g4_copy1

0x7798,	// (0x00046305) bg_eswt_ctrl_canvas_pane_g1

0x775d,	// (0x000462ca) common_borders_pane_cp2_ParamLimits

0x775d,	// (0x000462ca) common_borders_pane_cp2

0x775d,	// (0x000462ca) common_borders_pane_cp3_ParamLimits

0x775d,	// (0x000462ca) common_borders_pane_cp3

0x8195,	// (0x00046d02) separator_horizontal_pane

0x819d,	// (0x00046d0a) separator_vertical_pane

0x8119,	// (0x00046c86) eswt_control_pane_g1_copy2_ParamLimits

0x8119,	// (0x00046c86) eswt_control_pane_g1_copy2

0x8126,	// (0x00046c93) eswt_control_pane_g2_copy2_ParamLimits

0x8126,	// (0x00046c93) eswt_control_pane_g2_copy2

0x8133,	// (0x00046ca0) eswt_control_pane_g3_copy2_ParamLimits

0x8133,	// (0x00046ca0) eswt_control_pane_g3_copy2

0x8140,	// (0x00046cad) eswt_control_pane_g4_copy2_ParamLimits

0x8140,	// (0x00046cad) eswt_control_pane_g4_copy2

0x2dce,	// (0x0004193b) common_borders_pane_cp4

0x81a6,	// (0x00046d13) separator_horizontal_pane_g1

0x81af,	// (0x00046d1c) separator_horizontal_pane_g2

0x81b8,	// (0x00046d25) separator_horizontal_pane_g3

0x0002,

0xfc05,	// (0x0004e772) separator_horizontal_pane_g

0x8119,	// (0x00046c86) eswt_control_pane_g1_copy3_ParamLimits

0x8119,	// (0x00046c86) eswt_control_pane_g1_copy3

0x8126,	// (0x00046c93) eswt_control_pane_g2_copy3_ParamLimits

0x8126,	// (0x00046c93) eswt_control_pane_g2_copy3

0x8133,	// (0x00046ca0) eswt_control_pane_g3_copy3_ParamLimits

0x8133,	// (0x00046ca0) eswt_control_pane_g3_copy3

0x8140,	// (0x00046cad) eswt_control_pane_g4_copy3_ParamLimits

0x8140,	// (0x00046cad) eswt_control_pane_g4_copy3

0x2dce,	// (0x0004193b) common_borders_pane_cp5

0x81c1,	// (0x00046d2e) separator_vertical_pane_g1

0x81ca,	// (0x00046d37) separator_vertical_pane_g2

0x81d3,	// (0x00046d40) separator_vertical_pane_g3

0x0002,

0xfc0c,	// (0x0004e779) separator_vertical_pane_g

0x8119,	// (0x00046c86) eswt_control_pane_g1_copy4_ParamLimits

0x8119,	// (0x00046c86) eswt_control_pane_g1_copy4

0x8126,	// (0x00046c93) eswt_control_pane_g2_copy4_ParamLimits

0x8126,	// (0x00046c93) eswt_control_pane_g2_copy4

0x8133,	// (0x00046ca0) eswt_control_pane_g3_copy4_ParamLimits

0x8133,	// (0x00046ca0) eswt_control_pane_g3_copy4

0x8140,	// (0x00046cad) eswt_control_pane_g4_copy4_ParamLimits

0x8140,	// (0x00046cad) eswt_control_pane_g4_copy4

0xe087,	// (0x0004cbf4) eswt_ctrl_combo_button_pane

0xe08f,	// (0x0004cbfc) eswt_ctrl_input_pane

0xe097,	// (0x0004cc04) popup_choice_list_window_cp70

0xe09f,	// (0x0004cc0c) eswt_ctrl_input_pane_t1

0x2dce,	// (0x0004193b) input_focus_pane_cp70

0x775d,	// (0x000462ca) bg_button_pane_cp70_ParamLimits

0x775d,	// (0x000462ca) bg_button_pane_cp70

0xe0ad,	// (0x0004cc1a) eswt_ctrl_combo_button_pane_g1

0x820a,	// (0x00046d77) wait_bar_pane_cp70

0x5277,	// (0x00043de4) bg_popup_window_pane_cp70_ParamLimits

0x5277,	// (0x00043de4) bg_popup_window_pane_cp70

0x8212,	// (0x00046d7f) popup_eswt_tasktip_window_t1

0x8228,	// (0x00046d95) wait_bar_pane_cp71_ParamLimits

0x8228,	// (0x00046d95) wait_bar_pane_cp71

0x8234,	// (0x00046da1) grid_eswt_app_pane

0x3bcf,	// (0x0004273c) scroll_pane_cp70

0xe0b5,	// (0x0004cc22) cell_eswt_app_pane_ParamLimits

0xe0b5,	// (0x0004cc22) cell_eswt_app_pane

0xe0df,	// (0x0004cc4c) cell_eswt_app_pane_g1_ParamLimits

0xe0df,	// (0x0004cc4c) cell_eswt_app_pane_g1

0xe10e,	// (0x0004cc7b) cell_eswt_app_pane_g2_ParamLimits

0xe10e,	// (0x0004cc7b) cell_eswt_app_pane_g2

0x0001,

0xfc13,	// (0x0004e780) cell_eswt_app_pane_g_ParamLimits

0xfc13,	// (0x0004e780) cell_eswt_app_pane_g

0xe137,	// (0x0004cca4) cell_eswt_app_pane_t1_ParamLimits

0xe137,	// (0x0004cca4) cell_eswt_app_pane_t1

0x82f7,	// (0x00046e64) grid_highlight_pane_cp70_ParamLimits

0x82f7,	// (0x00046e64) grid_highlight_pane_cp70

0x3e91,	// (0x000429fe) set_content_pane_g1

0x463f,	// (0x000431ac) status_small_volume_pane

0x2461,	// (0x00040fce) status_small_volume_pane_g1

0x2469,	// (0x00040fd6) volume_small2_pane

0x2472,	// (0x00040fdf) volume_small2_pane_g1

0x247b,	// (0x00040fe8) volume_small2_pane_g2

0x2484,	// (0x00040ff1) volume_small2_pane_g3

0x248d,	// (0x00040ffa) volume_small2_pane_g4

0x2496,	// (0x00041003) volume_small2_pane_g5

0x249f,	// (0x0004100c) volume_small2_pane_g6

0x24a8,	// (0x00041015) volume_small2_pane_g7

0x24b1,	// (0x0004101e) volume_small2_pane_g8

0x24ba,	// (0x00041027) volume_small2_pane_g9

0x24c3,	// (0x00041030) volume_small2_pane_g10

0x0009,

0xfc18,	// (0x0004e785) volume_small2_pane_g

0x7b72,	// (0x000466df) fep_vkb_top_text_pane_g1_ParamLimits

0xe014,	// (0x0004cb81) fep_vkb_top_text_pane_t1_ParamLimits

0x7e29,	// (0x00046996) popup_preview_fixed_window_g3_ParamLimits

0x7e29,	// (0x00046996) popup_preview_fixed_window_g3

0xd2f9,	// (0x0004be66) popup_toolbar_trans_pane

0xd9cd,	// (0x0004c53a) aid_height_set_list_ParamLimits

0x65d6,	// (0x00045143) aid_size_parent_ParamLimits

0x46f1,	// (0x0004325e) list_highlight_pane_cp2_ParamLimits

0x3e91,	// (0x000429fe) set_content_pane_g1_ParamLimits

0xdb56,	// (0x0004c6c3) list_single_image_pane_ParamLimits

0xdb56,	// (0x0004c6c3) list_single_image_pane

0x8303,	// (0x00046e70) aid_size_cell_image_ParamLimits

0x8303,	// (0x00046e70) aid_size_cell_image

0xe169,	// (0x0004ccd6) grid_single_image_pane_ParamLimits

0xe169,	// (0x0004ccd6) grid_single_image_pane

0x3e6f,	// (0x000429dc) list_single_image_pane_g1_ParamLimits

0x3e6f,	// (0x000429dc) list_single_image_pane_g1

0x80cc,	// (0x00046c39) list_single_image_pane_g2_ParamLimits

0x80cc,	// (0x00046c39) list_single_image_pane_g2

0x0001,

0xfc2d,	// (0x0004e79a) list_single_image_pane_g_ParamLimits

0xfc2d,	// (0x0004e79a) list_single_image_pane_g

0x3e7b,	// (0x000429e8) list_single_image_pane_t1_ParamLimits

0x3e7b,	// (0x000429e8) list_single_image_pane_t1

0xe177,	// (0x0004cce4) cell_image_list_pane_ParamLimits

0xe177,	// (0x0004cce4) cell_image_list_pane

0x8331,	// (0x00046e9e) cell_image_list_pane_g1

0x833a,	// (0x00046ea7) cell_image_list_pane_g2

0x0001,

0xfc32,	// (0x0004e79f) cell_image_list_pane_g

0x8343,	// (0x00046eb0) aid_size_cell_tb_trans_pane

0x372e,	// (0x0004229b) bg_tb_trans_pane

0x8355,	// (0x00046ec2) grid_tb_trans_pane

0x5187,	// (0x00043cf4) bg_tb_trans_pane_g1

0x518f,	// (0x00043cfc) bg_tb_trans_pane_g2

0x5197,	// (0x00043d04) bg_tb_trans_pane_g3

0x519f,	// (0x00043d0c) bg_tb_trans_pane_g4

0x51a7,	// (0x00043d14) bg_tb_trans_pane_g5

0x51bf,	// (0x00043d2c) bg_tb_trans_pane_g6

0x51c7,	// (0x00043d34) bg_tb_trans_pane_g7

0x51af,	// (0x00043d1c) bg_tb_trans_pane_g8

0x51b7,	// (0x00043d24) bg_tb_trans_pane_g9

0x0008,

0xfc37,	// (0x0004e7a4) bg_tb_trans_pane_g

0x8369,	// (0x00046ed6) cell_toolbar_trans_pane_ParamLimits

0x8369,	// (0x00046ed6) cell_toolbar_trans_pane

0x7798,	// (0x00046305) cell_toolbar_trans_pane_g1

0xddf0,	// (0x0004c95d) list_form2_midp_pane_t1

0xddfe,	// (0x0004c96b) list_form2_midp_pane_t2

0x0001,

0xfae0,	// (0x0004e64d) list_form2_midp_pane_t

0x737d,	// (0x00045eea) scroll_pane_cp51_ParamLimits

0x7539,	// (0x000460a6) form2_midp_wait_pane_g1

0x7542,	// (0x000460af) form2_midp_wait_pane_g2

0x754b,	// (0x000460b8) form2_midp_wait_pane_g3

0x0002,

0xfaf5,	// (0x0004e662) form2_midp_wait_pane_g

0x2ec2,	// (0x00041a2f) list_highlight_pane_cp21_ParamLimits

0x75a2,	// (0x0004610f) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x75b1,	// (0x0004611e) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x678e,	// (0x000452fb) list_single_2graphic_im_pane_ParamLimits

0x678e,	// (0x000452fb) list_single_2graphic_im_pane

0xe18d,	// (0x0004ccfa) list_single_2graphic_im_pane_g1_ParamLimits

0xe18d,	// (0x0004ccfa) list_single_2graphic_im_pane_g1

0xe19e,	// (0x0004cd0b) list_single_2graphic_im_pane_g2_ParamLimits

0xe19e,	// (0x0004cd0b) list_single_2graphic_im_pane_g2

0xe1aa,	// (0x0004cd17) list_single_2graphic_im_pane_g3_ParamLimits

0xe1aa,	// (0x0004cd17) list_single_2graphic_im_pane_g3

0x0003,

0xfc4a,	// (0x0004e7b7) list_single_2graphic_im_pane_g_ParamLimits

0xfc4a,	// (0x0004e7b7) list_single_2graphic_im_pane_g

0xe1be,	// (0x0004cd2b) list_single_2graphic_im_pane_t1_ParamLimits

0xe1be,	// (0x0004cd2b) list_single_2graphic_im_pane_t1

0x7e35,	// (0x000469a2) list_single_graphic_2heading_pane_fp_ParamLimits

0x7e35,	// (0x000469a2) list_single_graphic_2heading_pane_fp

0x0df2,	// (0x0003f95f) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x0df2,	// (0x0003f95f) list_single_graphic_2heading_pane_fp_g1

0x7e4a,	// (0x000469b7) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7e4a,	// (0x000469b7) list_single_graphic_2heading_pane_fp_g2

0x3e6f,	// (0x000429dc) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x3e6f,	// (0x000429dc) list_single_graphic_2heading_pane_fp_g3

0x80cc,	// (0x00046c39) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x80cc,	// (0x00046c39) list_single_graphic_2heading_pane_fp_g4

0x7e56,	// (0x000469c3) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7e56,	// (0x000469c3) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb78,	// (0x0004e6e5) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb78,	// (0x0004e6e5) list_single_graphic_2heading_pane_fp_g

0x0f3b,	// (0x0003faa8) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x0f3b,	// (0x0003faa8) list_single_graphic_2heading_pane_fp_t1

0x0e2a,	// (0x0003f997) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x0e2a,	// (0x0003f997) list_single_graphic_2heading_pane_fp_t2

0x0f51,	// (0x0003fabe) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x0f51,	// (0x0003fabe) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc53,	// (0x0004e7c0) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc53,	// (0x0004e7c0) list_single_graphic_2heading_pane_fp_t

0x7838,	// (0x000463a5) fep_hwr_write_pane_g5_ParamLimits

0x7838,	// (0x000463a5) fep_hwr_write_pane_g5

0x7844,	// (0x000463b1) fep_hwr_write_pane_g6_ParamLimits

0x7844,	// (0x000463b1) fep_hwr_write_pane_g6

0x80e8,	// (0x00046c55) eswt_shell_pane_ParamLimits

0x5277,	// (0x00043de4) bg_popup_window_pane_cp18_ParamLimits

0x651e,	// (0x0004508b) heading_pane_cp70

0x8212,	// (0x00046d7f) popup_eswt_tasktip_window_t1_ParamLimits

0xd3ba,	// (0x0004bf27) aid_touch_tab_arrow_left

0xd3d0,	// (0x0004bf3d) aid_touch_tab_arrow_right

0xc617,	// (0x0004b184) title_pane_g3_ParamLimits

0xc617,	// (0x0004b184) title_pane_g3

0x36ed,	// (0x0004225a) set_value_pane_g1

0xd2f9,	// (0x0004be66) popup_toolbar_trans_pane_ParamLimits

0x8343,	// (0x00046eb0) aid_size_cell_tb_trans_pane_ParamLimits

0x372e,	// (0x0004229b) bg_tb_trans_pane_ParamLimits

0x8355,	// (0x00046ec2) grid_tb_trans_pane_ParamLimits

0x314b,	// (0x00041cb8) cont_note_pane_ParamLimits

0x314b,	// (0x00041cb8) cont_note_pane

0x349f,	// (0x0004200c) cont_snote2_single_text_pane_ParamLimits

0x349f,	// (0x0004200c) cont_snote2_single_text_pane

0x349f,	// (0x0004200c) cont_snote2_single_graphic_pane_ParamLimits

0x349f,	// (0x0004200c) cont_snote2_single_graphic_pane

0x5860,	// (0x000443cd) cont_note_wait_pane_ParamLimits

0x5860,	// (0x000443cd) cont_note_wait_pane

0x5860,	// (0x000443cd) cont_note_image_pane_ParamLimits

0x5860,	// (0x000443cd) cont_note_image_pane

0x83fd,	// (0x00046f6a) popup_note2_window_g1_ParamLimits

0x83fd,	// (0x00046f6a) popup_note2_window_g1

0x842e,	// (0x00046f9b) popup_note2_window_t1_ParamLimits

0x842e,	// (0x00046f9b) popup_note2_window_t1

0x8473,	// (0x00046fe0) popup_note2_window_t2_ParamLimits

0x8473,	// (0x00046fe0) popup_note2_window_t2

0x84b8,	// (0x00047025) popup_note2_window_t3_ParamLimits

0x84b8,	// (0x00047025) popup_note2_window_t3

0x84fd,	// (0x0004706a) popup_note2_window_t4_ParamLimits

0x84fd,	// (0x0004706a) popup_note2_window_t4

0x31cf,	// (0x00041d3c) popup_note2_window_t5_ParamLimits

0x31cf,	// (0x00041d3c) popup_note2_window_t5

0x0004,

0xfc5f,	// (0x0004e7cc) popup_note2_window_t_ParamLimits

0xfc5f,	// (0x0004e7cc) popup_note2_window_t

0x852c,	// (0x00047099) popup_note2_image_window_g1_ParamLimits

0x852c,	// (0x00047099) popup_note2_image_window_g1

0x8538,	// (0x000470a5) popup_note2_image_window_g2_ParamLimits

0x8538,	// (0x000470a5) popup_note2_image_window_g2

0x0001,

0xfc6a,	// (0x0004e7d7) popup_note2_image_window_g_ParamLimits

0xfc6a,	// (0x0004e7d7) popup_note2_image_window_g

0x854a,	// (0x000470b7) popup_note2_image_window_t1_ParamLimits

0x854a,	// (0x000470b7) popup_note2_image_window_t1

0x8562,	// (0x000470cf) popup_note2_image_window_t2_ParamLimits

0x8562,	// (0x000470cf) popup_note2_image_window_t2

0x857a,	// (0x000470e7) popup_note2_image_window_t3_ParamLimits

0x857a,	// (0x000470e7) popup_note2_image_window_t3

0x0002,

0xfc6f,	// (0x0004e7dc) popup_note2_image_window_t_ParamLimits

0xfc6f,	// (0x0004e7dc) popup_note2_image_window_t

0x586e,	// (0x000443db) popup_note2_wait_window_g1_ParamLimits

0x586e,	// (0x000443db) popup_note2_wait_window_g1

0x8596,	// (0x00047103) popup_note2_wait_window_g2_ParamLimits

0x8596,	// (0x00047103) popup_note2_wait_window_g2

0x5886,	// (0x000443f3) popup_note2_wait_window_g3_ParamLimits

0x5886,	// (0x000443f3) popup_note2_wait_window_g3

0x0002,

0xfc76,	// (0x0004e7e3) popup_note2_wait_window_g_ParamLimits

0xfc76,	// (0x0004e7e3) popup_note2_wait_window_g

0x85a2,	// (0x0004710f) popup_note2_wait_window_t1_ParamLimits

0x85a2,	// (0x0004710f) popup_note2_wait_window_t1

0x85c0,	// (0x0004712d) popup_note2_wait_window_t2_ParamLimits

0x85c0,	// (0x0004712d) popup_note2_wait_window_t2

0x85de,	// (0x0004714b) popup_note2_wait_window_t3_ParamLimits

0x85de,	// (0x0004714b) popup_note2_wait_window_t3

0x85f0,	// (0x0004715d) popup_note2_wait_window_t4_ParamLimits

0x85f0,	// (0x0004715d) popup_note2_wait_window_t4

0x0003,

0xfc7d,	// (0x0004e7ea) popup_note2_wait_window_t_ParamLimits

0xfc7d,	// (0x0004e7ea) popup_note2_wait_window_t

0x8602,	// (0x0004716f) wait_bar2_pane_ParamLimits

0x8602,	// (0x0004716f) wait_bar2_pane

0x861a,	// (0x00047187) popup_snote2_single_text_window_g1_ParamLimits

0x861a,	// (0x00047187) popup_snote2_single_text_window_g1

0x8642,	// (0x000471af) popup_snote2_single_text_window_t1_ParamLimits

0x8642,	// (0x000471af) popup_snote2_single_text_window_t1

0x868e,	// (0x000471fb) popup_snote2_single_text_window_t2_ParamLimits

0x868e,	// (0x000471fb) popup_snote2_single_text_window_t2

0x86da,	// (0x00047247) popup_snote2_single_text_window_t3_ParamLimits

0x86da,	// (0x00047247) popup_snote2_single_text_window_t3

0x871b,	// (0x00047288) popup_snote2_single_text_window_t4_ParamLimits

0x871b,	// (0x00047288) popup_snote2_single_text_window_t4

0x8751,	// (0x000472be) popup_snote2_single_text_window_t5_ParamLimits

0x8751,	// (0x000472be) popup_snote2_single_text_window_t5

0x0004,

0xfc86,	// (0x0004e7f3) popup_snote2_single_text_window_t_ParamLimits

0xfc86,	// (0x0004e7f3) popup_snote2_single_text_window_t

0x877c,	// (0x000472e9) popup_snote2_single_graphic_window_g1_ParamLimits

0x877c,	// (0x000472e9) popup_snote2_single_graphic_window_g1

0x87a4,	// (0x00047311) popup_snote2_single_graphic_window_g2_ParamLimits

0x87a4,	// (0x00047311) popup_snote2_single_graphic_window_g2

0x0001,

0xfc91,	// (0x0004e7fe) popup_snote2_single_graphic_window_g_ParamLimits

0xfc91,	// (0x0004e7fe) popup_snote2_single_graphic_window_g

0x87cc,	// (0x00047339) popup_snote2_single_graphic_window_t1_ParamLimits

0x87cc,	// (0x00047339) popup_snote2_single_graphic_window_t1

0x8818,	// (0x00047385) popup_snote2_single_graphic_window_t2_ParamLimits

0x8818,	// (0x00047385) popup_snote2_single_graphic_window_t2

0x86da,	// (0x00047247) popup_snote2_single_graphic_window_t3_ParamLimits

0x86da,	// (0x00047247) popup_snote2_single_graphic_window_t3

0x871b,	// (0x00047288) popup_snote2_single_graphic_window_t4_ParamLimits

0x871b,	// (0x00047288) popup_snote2_single_graphic_window_t4

0x8751,	// (0x000472be) popup_snote2_single_graphic_window_t5_ParamLimits

0x8751,	// (0x000472be) popup_snote2_single_graphic_window_t5

0x0004,

0xfc96,	// (0x0004e803) popup_snote2_single_graphic_window_t_ParamLimits

0xfc96,	// (0x0004e803) popup_snote2_single_graphic_window_t

0x723a,	// (0x00045da7) clock_nsta_pane_cp2_t1

0x723a,	// (0x00045da7) clock_nsta_pane_cp2_t2

0x0001,

0xfab6,	// (0x0004e623) clock_nsta_pane_cp2_t

0x082e,	// (0x0003f39b) form_field_data_wide_pane_g1_ParamLimits

0x3748,	// (0x000422b5) form_field_data_wide_pane_g2_ParamLimits

0x3748,	// (0x000422b5) form_field_data_wide_pane_g2

0x3754,	// (0x000422c1) form_field_data_wide_pane_g3_ParamLimits

0x3754,	// (0x000422c1) form_field_data_wide_pane_g3

0x0002,

0xf692,	// (0x0004e1ff) form_field_data_wide_pane_g_ParamLimits

0xf692,	// (0x0004e1ff) form_field_data_wide_pane_g

0xdd0a,	// (0x0004c877) grid_touch_3_pane_ParamLimits

0xdd0a,	// (0x0004c877) grid_touch_3_pane

0xe1ef,	// (0x0004cd5c) cell_touch_3_pane_ParamLimits

0xe1ef,	// (0x0004cd5c) cell_touch_3_pane

0x7798,	// (0x00046305) cell_touch_3_pane_g1

0x7798,	// (0x00046305) cell_touch_3_pane_g2

0x0001,

0xfb3b,	// (0x0004e6a8) cell_touch_3_pane_g

0x3201,	// (0x00041d6e) cont_query_data_pane

0x3209,	// (0x00041d76) cont_query_data_pane_cp1

0x8892,	// (0x000473ff) button_value_adjust_pane_cp7

0x889a,	// (0x00047407) query_popup_pane_cp3

0x3e59,	// (0x000429c6) bg_popup_sub_pane_cp22_ParamLimits

0x178d,	// (0x000402fa) navi_navi_volume_pane_cp2

0x17a8,	// (0x00040315) popup_side_volume_key_window_g2

0x17b7,	// (0x00040324) popup_side_volume_key_window_g3

0x0002,

0xf724,	// (0x0004e291) popup_side_volume_key_window_g

0x17d4,	// (0x00040341) popup_side_volume_key_window_t2

0x0001,

0xf72b,	// (0x0004e298) popup_side_volume_key_window_t

0x413e,	// (0x00042cab) popup_side_volume_key_window_ParamLimits

0xb5bc,	// (0x0004a129) list_double_graphic_pane_g4_ParamLimits

0xb5bc,	// (0x0004a129) list_double_graphic_pane_g4

0xdb43,	// (0x0004c6b0) list_single_2heading_msg_pane_ParamLimits

0xdb43,	// (0x0004c6b0) list_single_2heading_msg_pane

0xc137,	// (0x0004aca4) list_single_2heading_msg_pane_g1_ParamLimits

0xc137,	// (0x0004aca4) list_single_2heading_msg_pane_g1

0xc143,	// (0x0004acb0) list_single_2heading_msg_pane_g2_ParamLimits

0xc143,	// (0x0004acb0) list_single_2heading_msg_pane_g2

0xc156,	// (0x0004acc3) list_single_2heading_msg_pane_g3_ParamLimits

0xc156,	// (0x0004acc3) list_single_2heading_msg_pane_g3

0xc162,	// (0x0004accf) list_single_2heading_msg_pane_g4_ParamLimits

0xc162,	// (0x0004accf) list_single_2heading_msg_pane_g4

0x0003,

0xfca1,	// (0x0004e80e) list_single_2heading_msg_pane_g_ParamLimits

0xfca1,	// (0x0004e80e) list_single_2heading_msg_pane_g

0xbad4,	// (0x0004a641) list_single_2heading_msg_pane_t1_ParamLimits

0xbad4,	// (0x0004a641) list_single_2heading_msg_pane_t1

0xbafc,	// (0x0004a669) list_single_2heading_msg_pane_t2_ParamLimits

0xbafc,	// (0x0004a669) list_single_2heading_msg_pane_t2

0xbb67,	// (0x0004a6d4) list_single_2heading_msg_pane_t3_ParamLimits

0xbb67,	// (0x0004a6d4) list_single_2heading_msg_pane_t3

0x1006,	// (0x0003fb73) list_single_2heading_msg_pane_t4_ParamLimits

0x1006,	// (0x0003fb73) list_single_2heading_msg_pane_t4

0x0003,

0xfcaa,	// (0x0004e817) list_single_2heading_msg_pane_t_ParamLimits

0xfcaa,	// (0x0004e817) list_single_2heading_msg_pane_t

0x2e16,	// (0x00041983) title_pane_g4_ParamLimits

0x2e16,	// (0x00041983) title_pane_g4

0x159b,	// (0x00040108) title_pane_stacon_g3_ParamLimits

0x159b,	// (0x00040108) title_pane_stacon_g3

0x83c0,	// (0x00046f2d) list_single_2graphic_im_pane_g4_ParamLimits

0x83c0,	// (0x00046f2d) list_single_2graphic_im_pane_g4

0x62c5,	// (0x00044e32) popup_side_volume_key_window_cp

0x6aa6,	// (0x00045613) main_idle_act2_pane_t1

0x1b89,	// (0x000406f6) toolbar_button_pane_g10

0xc984,	// (0x0004b4f1) popup_toolbar_window_cp1

0x722b,	// (0x00045d98) clock_nsta_pane_cp_t1

0x722b,	// (0x00045d98) clock_nsta_pane_cp_t2

0x0001,

0xfab1,	// (0x0004e61e) clock_nsta_pane_cp_t

0x178d,	// (0x000402fa) navi_navi_volume_pane_cp2_ParamLimits

0x179c,	// (0x00040309) popup_side_volume_key_window_g1_ParamLimits

0x17a8,	// (0x00040315) popup_side_volume_key_window_g2_ParamLimits

0x17b7,	// (0x00040324) popup_side_volume_key_window_g3_ParamLimits

0xf724,	// (0x0004e291) popup_side_volume_key_window_g_ParamLimits

0x20ed,	// (0x00040c5a) fep_hwr_aid_pane

0xdba8,	// (0x0004c715) bg_fep_hwr_top_pane_g4_ParamLimits

0x7808,	// (0x00046375) fep_hwr_top_pane_g1_ParamLimits

0x781a,	// (0x00046387) fep_hwr_top_pane_g2_ParamLimits

0x21a6,	// (0x00040d13) fep_hwr_top_pane_g3_ParamLimits

0xfb06,	// (0x0004e673) fep_hwr_top_pane_g_ParamLimits

0x21bb,	// (0x00040d28) fep_hwr_top_text_pane_ParamLimits

0x6088,	// (0x00044bf5) aid_touch_tab_arrow_arrow_2

0x6091,	// (0x00044bfe) aid_touch_tab_arrow_left_2

0x2101,	// (0x00040c6e) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x2138,	// (0x00040ca5) fep_hwr_prediction_pane

0x797a,	// (0x000464e7) fep_vkb_prediction_pane

0xdff4,	// (0x0004cb61) fep_vkb_side_pane_g3_ParamLimits

0xdff4,	// (0x0004cb61) fep_vkb_side_pane_g3

0x7a2a,	// (0x00046597) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7eaa,	// (0x00046a17) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7eb7,	// (0x00046a24) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb0,	// (0x0004e71d) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x88bf,	// (0x0004742c) fep_hwr_prediction_pane_g1

0x24fc,	// (0x00041069) fep_hwr_prediction_pane_g2

0x2504,	// (0x00041071) fep_hwr_prediction_pane_g3

0x250c,	// (0x00041079) fep_hwr_prediction_pane_g4

0x0003,

0xfcb3,	// (0x0004e820) fep_hwr_prediction_pane_g

0x88bf,	// (0x0004742c) fep_vkb_prediction_pane_g1

0x88c9,	// (0x00047436) fep_vkb_prediction_pane_g2

0x88d1,	// (0x0004743e) fep_vkb_prediction_pane_g3

0x88d9,	// (0x00047446) fep_vkb_prediction_pane_g4

0x0003,

0xfcbc,	// (0x0004e829) fep_vkb_prediction_pane_g

0x1e65,	// (0x000409d2) slider_set_pane_g3

0x1e79,	// (0x000409e6) slider_set_pane_g4

0x1e91,	// (0x000409fe) slider_set_pane_g5

0x1e65,	// (0x000409d2) slider_set_pane_g6

0x1ea7,	// (0x00040a14) slider_set_pane_g7

0x673b,	// (0x000452a8) slider_form_pane_g3

0x6744,	// (0x000452b1) slider_form_pane_g4

0x674c,	// (0x000452b9) slider_form_pane_g5

0x673b,	// (0x000452a8) slider_form_pane_g6

0xdb18,	// (0x0004c685) slider_form_pane_g7

0x6d63,	// (0x000458d0) slider_set_pane_vc_g3

0x6d6c,	// (0x000458d9) slider_set_pane_vc_g4

0x6d75,	// (0x000458e2) slider_set_pane_vc_g5

0x6d63,	// (0x000458d0) slider_set_pane_vc_g6

0x6d7e,	// (0x000458eb) slider_set_pane_vc_g7

0x6d63,	// (0x000458d0) slider_form_pane_vc_g1

0x6d6c,	// (0x000458d9) slider_form_pane_vc_g2

0x6d75,	// (0x000458e2) slider_form_pane_vc_g3

0x6d63,	// (0x000458d0) slider_form_pane_vc_g4

0x6f31,	// (0x00045a9e) slider_form_pane_vc_g5

0x0004,

0xfa8a,	// (0x0004e5f7) slider_form_pane_vc_g

0x2dce,	// (0x0004193b) main_idle_act3_pane

0x88e1,	// (0x0004744e) ai3_links_pane

0xe238,	// (0x0004cda5) popup_ai3_data_window_ParamLimits

0xe238,	// (0x0004cda5) popup_ai3_data_window

0x2dce,	// (0x0004193b) grid_ai3_links_pane

0xe252,	// (0x0004cdbf) cell_ai3_links_pane_ParamLimits

0xe252,	// (0x0004cdbf) cell_ai3_links_pane

0x891c,	// (0x00047489) bg_popup_sub_pane_cp11

0x8929,	// (0x00047496) cell_ai3_links_pane_g1

0x2dce,	// (0x0004193b) bg_popup_sub_pane_cp12

0x894e,	// (0x000474bb) heading_ai3_data_pane

0x8956,	// (0x000474c3) list_ai3_gene_pane

0x8962,	// (0x000474cf) popup_ai3_data_window_g1

0x896a,	// (0x000474d7) heading_ai3_data_pane_g1

0x8972,	// (0x000474df) heading_ai3_data_pane_t1

0x8980,	// (0x000474ed) list_double_ai3_gene_pane_ParamLimits

0x8980,	// (0x000474ed) list_double_ai3_gene_pane

0x898d,	// (0x000474fa) list_single_ai3_gene_pane_ParamLimits

0x898d,	// (0x000474fa) list_single_ai3_gene_pane

0x775d,	// (0x000462ca) list_highlight_pane_cp7_ParamLimits

0x775d,	// (0x000462ca) list_highlight_pane_cp7

0x899a,	// (0x00047507) list_single_a13_gene_pane_t1_ParamLimits

0x899a,	// (0x00047507) list_single_a13_gene_pane_t1

0x89b1,	// (0x0004751e) list_single_ai3_gene_pane_g1

0x89ba,	// (0x00047527) list_single_ai3_gene_pane_g2

0x0001,

0xfcc5,	// (0x0004e832) list_single_ai3_gene_pane_g

0x89c2,	// (0x0004752f) list_double_ai3_gene_pane_g1_ParamLimits

0x89c2,	// (0x0004752f) list_double_ai3_gene_pane_g1

0x89ce,	// (0x0004753b) list_double_ai3_gene_pane_t1_ParamLimits

0x89ce,	// (0x0004753b) list_double_ai3_gene_pane_t1

0x89ea,	// (0x00047557) list_double_ai3_gene_pane_t2_ParamLimits

0x89ea,	// (0x00047557) list_double_ai3_gene_pane_t2

0x8a00,	// (0x0004756d) list_double_ai3_gene_pane_t3_ParamLimits

0x8a00,	// (0x0004756d) list_double_ai3_gene_pane_t3

0x0002,

0xfcca,	// (0x0004e837) list_double_ai3_gene_pane_t_ParamLimits

0xfcca,	// (0x0004e837) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0f67,	// (0x0003fad4) aid_size_min_col_2

0xe222,	// (0x0004cd8f) aid_size_min_msg_ParamLimits

0xe222,	// (0x0004cd8f) aid_size_min_msg

0xe008,	// (0x0004cb75) fep_vkb_top_text_pane_g2_ParamLimits

0xe008,	// (0x0004cb75) fep_vkb_top_text_pane_g2

0x0001,

0xfb36,	// (0x0004e6a3) fep_vkb_top_text_pane_g_ParamLimits

0xfb36,	// (0x0004e6a3) fep_vkb_top_text_pane_g

0x2dce,	// (0x0004193b) main_hc_apps_shell_pane

0x8a1d,	// (0x0004758a) grid_hc_apps_pane_ParamLimits

0x8a1d,	// (0x0004758a) grid_hc_apps_pane

0x8a2c,	// (0x00047599) list_hc_apps_pane

0x8a34,	// (0x000475a1) scroll_pane_cp37_ParamLimits

0x8a34,	// (0x000475a1) scroll_pane_cp37

0xe26c,	// (0x0004cdd9) cell_hc_apps_pane_ParamLimits

0xe26c,	// (0x0004cdd9) cell_hc_apps_pane

0xe32a,	// (0x0004ce97) cell_hc_apps_pane_g1_ParamLimits

0xe32a,	// (0x0004ce97) cell_hc_apps_pane_g1

0x8b1f,	// (0x0004768c) cell_hc_apps_pane_g2_ParamLimits

0x8b1f,	// (0x0004768c) cell_hc_apps_pane_g2

0x8b3b,	// (0x000476a8) cell_hc_apps_pane_g3_ParamLimits

0x8b3b,	// (0x000476a8) cell_hc_apps_pane_g3

0x0002,

0xfcd1,	// (0x0004e83e) cell_hc_apps_pane_g_ParamLimits

0xfcd1,	// (0x0004e83e) cell_hc_apps_pane_g

0xe357,	// (0x0004cec4) cell_hc_apps_pane_t1_ParamLimits

0xe357,	// (0x0004cec4) cell_hc_apps_pane_t1

0x314b,	// (0x00041cb8) grid_highlight_pane_cp10_ParamLimits

0x314b,	// (0x00041cb8) grid_highlight_pane_cp10

0xe395,	// (0x0004cf02) list_single_hc_apps_pane_ParamLimits

0xe395,	// (0x0004cf02) list_single_hc_apps_pane

0xe3c2,	// (0x0004cf2f) list_single_hc_apps_pane_g1

0xc17a,	// (0x0004ace7) list_single_hc_apps_pane_g2

0x0001,

0xfcd8,	// (0x0004e845) list_single_hc_apps_pane_g

0xc193,	// (0x0004ad00) list_single_hc_apps_pane_g2_copy1

0x102b,	// (0x0003fb98) list_single_hc_apps_pane_t1

0x2ec2,	// (0x00041a2f) bg_set_opt_pane_cp_ParamLimits

0x1446,	// (0x0003ffb3) setting_slider_pane_t1_ParamLimits

0x145f,	// (0x0003ffcc) setting_slider_pane_t2_ParamLimits

0x1479,	// (0x0003ffe6) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x0004e0e7) setting_slider_pane_t_ParamLimits

0x1491,	// (0x0003fffe) slider_set_pane_ParamLimits

0x1a35,	// (0x000405a2) control_pane_g5_ParamLimits

0x1a35,	// (0x000405a2) control_pane_g5

0x658a,	// (0x000450f7) slider_set_pane_g1_ParamLimits

0x1e59,	// (0x000409c6) slider_set_pane_g2_ParamLimits

0x1e65,	// (0x000409d2) slider_set_pane_g3_ParamLimits

0x1e79,	// (0x000409e6) slider_set_pane_g4_ParamLimits

0x1e91,	// (0x000409fe) slider_set_pane_g5_ParamLimits

0x1e65,	// (0x000409d2) slider_set_pane_g6_ParamLimits

0x1ea7,	// (0x00040a14) slider_set_pane_g7_ParamLimits

0xf964,	// (0x0004e4d1) slider_set_pane_g_ParamLimits

0x421f,	// (0x00042d8c) navi_icon_text_pane_ParamLimits

0xd386,	// (0x0004bef3) aid_fill_nsta_2_ParamLimits

0xd3ba,	// (0x0004bf27) aid_touch_tab_arrow_left_ParamLimits

0xd3d0,	// (0x0004bf3d) aid_touch_tab_arrow_right_ParamLimits

0xd46b,	// (0x0004bfd8) clock_nsta_pane_ParamLimits

0xd8f4,	// (0x0004c461) navi_icon_pane_g1_ParamLimits

0xd900,	// (0x0004c46d) navi_text_pane_t1_ParamLimits

0xddd2,	// (0x0004c93f) navi_icon_text_pane_g1_ParamLimits

0xddde,	// (0x0004c94b) navi_icon_text_pane_t1_ParamLimits

0xe3c2,	// (0x0004cf2f) list_single_hc_apps_pane_g1_ParamLimits

0xc17a,	// (0x0004ace7) list_single_hc_apps_pane_g2_ParamLimits

0xfcd8,	// (0x0004e845) list_single_hc_apps_pane_g_ParamLimits

0xc193,	// (0x0004ad00) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x102b,	// (0x0003fb98) list_single_hc_apps_pane_t1_ParamLimits

0xbd27,	// (0x0004a894) popup_toolbar2_fixed_window_ParamLimits

0xbd27,	// (0x0004a894) popup_toolbar2_fixed_window

0xd2ef,	// (0x0004be5c) popup_toolbar2_float_window

0x2dce,	// (0x0004193b) bg_popup_sub_pane_cp27

0x8c12,	// (0x0004777f) grid_toolbar2_float_pane

0x2dce,	// (0x0004193b) bg_popup_sub_pane_cp26

0x8c12,	// (0x0004777f) grid_toolbar2_fixed_pane

0xe3db,	// (0x0004cf48) cell_toolbar2_fixed_pane_ParamLimits

0xe3db,	// (0x0004cf48) cell_toolbar2_fixed_pane

0xe3f6,	// (0x0004cf63) cell_toolbar2_fixed_pane_g1

0x8c33,	// (0x000477a0) toolbar2_fixed_button_pane

0x5187,	// (0x00043cf4) toolbar2_fixed_button_pane_g1

0x518f,	// (0x00043cfc) toolbar2_fixed_button_pane_g2

0x5197,	// (0x00043d04) toolbar2_fixed_button_pane_g3

0x519f,	// (0x00043d0c) toolbar2_fixed_button_pane_g4

0x51a7,	// (0x00043d14) toolbar2_fixed_button_pane_g5

0x51af,	// (0x00043d1c) toolbar2_fixed_button_pane_g6

0x51b7,	// (0x00043d24) toolbar2_fixed_button_pane_g7

0x51bf,	// (0x00043d2c) toolbar2_fixed_button_pane_g8

0x51c7,	// (0x00043d34) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x0004e3d3) toolbar2_fixed_button_pane_g

0x8c3b,	// (0x000477a8) cell_toolbar2_float_pane_ParamLimits

0x8c3b,	// (0x000477a8) cell_toolbar2_float_pane

0x8c4c,	// (0x000477b9) cell_toolbar2_float_pane_g1

0x8c33,	// (0x000477a0) toolbar2_fixed_button_pane_cp

0xdee2,	// (0x0004ca4f) fep_vkb_accented_list_pane_ParamLimits

0xdee2,	// (0x0004ca4f) fep_vkb_accented_list_pane

0x2309,	// (0x00040e76) bg_popup_fep_shadow_pane_g9

0x4393,	// (0x00042f00) bg_popup_fep_shadow_pane_cp3

0x388f,	// (0x000423fc) list_accented_list_pane

0x8c55,	// (0x000477c2) list_single_accented_list_pane_ParamLimits

0x8c55,	// (0x000477c2) list_single_accented_list_pane

0x4393,	// (0x00042f00) list_highlight_pane_cp10

0x8c66,	// (0x000477d3) list_single_accented_list_pane_t1

0xd219,	// (0x0004bd86) popup_slider_window_ParamLimits

0xd219,	// (0x0004bd86) popup_slider_window

0x88a2,	// (0x0004740f) aid_indentation_list_msg

0xe4ef,	// (0x0004d05c) bg_popup_window_pane_cp19

0x8d8a,	// (0x000478f7) popup_slider_window_g1

0x8da6,	// (0x00047913) popup_slider_window_g2

0x8dc2,	// (0x0004792f) popup_slider_window_g3

0x0005,

0xfcdd,	// (0x0004e84a) popup_slider_window_g

0x8e1e,	// (0x0004798b) popup_slider_window_t1

0x8e92,	// (0x000479ff) small_volume_slider_vertical_pane

0x7798,	// (0x00046305) small_volume_slider_vertical_pane_g1

0x7798,	// (0x00046305) small_volume_slider_vertical_pane_g2

0x8eae,	// (0x00047a1b) small_volume_slider_vertical_pane_g3

0x0002,

0xfcef,	// (0x0004e85c) small_volume_slider_vertical_pane_g

0xbc95,	// (0x0004a802) area_side_right_pane_ParamLimits

0xbc95,	// (0x0004a802) area_side_right_pane

0xc1af,	// (0x0004ad1c) aid_size_side_button_ParamLimits

0xc1af,	// (0x0004ad1c) aid_size_side_button

0xc1c8,	// (0x0004ad35) grid_sctrl_middle_pane_ParamLimits

0xc1c8,	// (0x0004ad35) grid_sctrl_middle_pane

0x257d,	// (0x000410ea) sctrl_sk_bottom_pane

0x258e,	// (0x000410fb) sctrl_sk_top_pane

0x25a0,	// (0x0004110d) aid_touch_sctrl_top

0x314b,	// (0x00041cb8) bg_sctrl_sk_pane_ParamLimits

0x314b,	// (0x00041cb8) bg_sctrl_sk_pane

0x25ad,	// (0x0004111a) sctrl_sk_top_pane_g1

0x25ba,	// (0x00041127) sctrl_sk_top_pane_t1

0x25a0,	// (0x0004110d) aid_touch_sctrl_bottom

0x314b,	// (0x00041cb8) bg_sctrl_sk_pane_cp_ParamLimits

0x314b,	// (0x00041cb8) bg_sctrl_sk_pane_cp

0x25d5,	// (0x00041142) sctrl_sk_bottom_pane_g1

0x25ba,	// (0x00041127) sctrl_sk_bottom_pane_t1

0xc1e2,	// (0x0004ad4f) cell_sctrl_middle_pane_ParamLimits

0xc1e2,	// (0x0004ad4f) cell_sctrl_middle_pane

0xc1f3,	// (0x0004ad60) aid_touch_sctrl_middle_ParamLimits

0xc1f3,	// (0x0004ad60) aid_touch_sctrl_middle

0xc200,	// (0x0004ad6d) bg_sctrl_middle_pane_ParamLimits

0xc200,	// (0x0004ad6d) bg_sctrl_middle_pane

0x8f36,	// (0x00047aa3) cell_sctrl_middle_pane_g1_ParamLimits

0x8f36,	// (0x00047aa3) cell_sctrl_middle_pane_g1

0xc20e,	// (0x0004ad7b) cell_sctrl_middle_pane_g2_ParamLimits

0xc20e,	// (0x0004ad7b) cell_sctrl_middle_pane_g2

0x0001,

0xfcfb,	// (0x0004e868) cell_sctrl_middle_pane_g_ParamLimits

0xfcfb,	// (0x0004e868) cell_sctrl_middle_pane_g

0x5187,	// (0x00043cf4) bg_sctrl_middle_pane_g1

0x518f,	// (0x00043cfc) bg_sctrl_middle_pane_g2

0x5197,	// (0x00043d04) bg_sctrl_middle_pane_g3

0x519f,	// (0x00043d0c) bg_sctrl_middle_pane_g4

0x51a7,	// (0x00043d14) bg_sctrl_middle_pane_g5

0x51af,	// (0x00043d1c) bg_sctrl_middle_pane_g6

0x51b7,	// (0x00043d24) bg_sctrl_middle_pane_g7

0x51bf,	// (0x00043d2c) bg_sctrl_middle_pane_g8

0x0007,

0xfd00,	// (0x0004e86d) bg_sctrl_middle_pane_g

0x51c7,	// (0x00043d34) bg_sctrl_middle_pane_g8_copy1

0x5187,	// (0x00043cf4) bg_sctrl_sk_pane_g1

0x518f,	// (0x00043cfc) bg_sctrl_sk_pane_g2

0x5197,	// (0x00043d04) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x0004e3d3) bg_sctrl_sk_pane_g

0x365d,	// (0x000421ca) aid_size_touch_scroll_bar

0x519f,	// (0x00043d0c) bg_sctrl_sk_pane_g4

0x51a7,	// (0x00043d14) bg_sctrl_sk_pane_g5

0x51af,	// (0x00043d1c) bg_sctrl_sk_pane_g6

0x51b7,	// (0x00043d24) bg_sctrl_sk_pane_g7

0x51bf,	// (0x00043d2c) bg_sctrl_sk_pane_g8

0x51c7,	// (0x00043d34) bg_sctrl_sk_pane_g9

0x4791,	// (0x000432fe) popup_fep_china_hwr2_fs_candidate_window

0xcd5d,	// (0x0004b8ca) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xcd5d,	// (0x0004b8ca) popup_fep_china_hwr2_fs_control_window

0x7a2a,	// (0x00046597) sctrl_sk_top_pane_g2

0x0001,

0xfcf6,	// (0x0004e863) sctrl_sk_top_pane_g

0xe5a7,	// (0x0004d114) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe5a7,	// (0x0004d114) aid_fep_china_hwr2_fs_cell

0xe5bb,	// (0x0004d128) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe5bb,	// (0x0004d128) bg_popup_fep_shadow_pane_cp4

0xe5d2,	// (0x0004d13f) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe5d2,	// (0x0004d13f) bg_popup_fep_shadow_pane_cp5

0xe5e4,	// (0x0004d151) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe5e4,	// (0x0004d151) popup_fep_china_hwr2_fs_control_bar_grid

0xe5f8,	// (0x0004d165) popup_fep_china_hwr2_fs_control_funtion_grid

0x8f0a,	// (0x00047a77) aid_fep_china_hwr2_fs_candi_cell

0x2dce,	// (0x0004193b) bg_popup_fep_shadow_pane_cp6

0x8f14,	// (0x00047a81) popup_fep_china_hwr2_fs_candidate_grid

0xe600,	// (0x0004d16d) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe600,	// (0x0004d16d) cell_fep_china_hwr2_fs_funtion_grid

0x7798,	// (0x00046305) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8f36,	// (0x00047aa3) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8f36,	// (0x00047aa3) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8f44,	// (0x00047ab1) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8f44,	// (0x00047ab1) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd11,	// (0x0004e87e) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd11,	// (0x0004e87e) cell_fep_china_hwr2_fs_funtion_grid_g

0xe618,	// (0x0004d185) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe618,	// (0x0004d185) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe62d,	// (0x0004d19a) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe62d,	// (0x0004d19a) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0x00a5,	// (0x0003ec12) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0x00a5,	// (0x0003ec12) cell_fep_china_hwr2_fs_funtion_grid_t

0x8f8b,	// (0x00047af8) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8f93,	// (0x00047b00) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8f9b,	// (0x00047b08) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd16,	// (0x0004e883) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8fa3,	// (0x00047b10) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8fa3,	// (0x00047b10) cell_fep_china_hwr2_fs_candidate_grid

0x8fbc,	// (0x00047b29) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8fc4,	// (0x00047b31) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7798,	// (0x00046305) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7798,	// (0x00046305) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3b,	// (0x0004e6a8) cell_fep_china_hwr2_fs_candidate_grid_g

0x8fcc,	// (0x00047b39) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4d84,	// (0x000438f1) clock_nsta_pane_cp_24_ParamLimits

0x4d84,	// (0x000438f1) clock_nsta_pane_cp_24

0x4e02,	// (0x0004396f) indicator_nsta_pane_cp_24_ParamLimits

0x4e02,	// (0x0004396f) indicator_nsta_pane_cp_24

0x5ee0,	// (0x00044a4d) heading_pane_g1

0x0001,

0xf8cb,	// (0x0004e438) heading_pane_g

0x68ef,	// (0x0004545c) grid_sct_catagory_button_pane

0x691f,	// (0x0004548c) scroll_pane_cp5_ParamLimits

0x7389,	// (0x00045ef6) button_value_adjust_pane_cp5_ParamLimits

0x7389,	// (0x00045ef6) button_value_adjust_pane_cp5

0x7468,	// (0x00045fd5) form2_midp_time_pane_ParamLimits

0x8fda,	// (0x00047b47) cell_sct_catagory_button_pane_ParamLimits

0x8fda,	// (0x00047b47) cell_sct_catagory_button_pane

0x775d,	// (0x000462ca) bg_button_pane_cp01_ParamLimits

0x775d,	// (0x000462ca) bg_button_pane_cp01

0x7798,	// (0x00046305) cell_sct_catagory_button_pane_g1

0xd292,	// (0x0004bdff) popup_tb_extension_window

0xe649,	// (0x0004d1b6) aid_size_cell_ext_ParamLimits

0xe649,	// (0x0004d1b6) aid_size_cell_ext

0x349f,	// (0x0004200c) bg_tb_trans_pane_cp1_ParamLimits

0x349f,	// (0x0004200c) bg_tb_trans_pane_cp1

0xe66f,	// (0x0004d1dc) grid_tb_ext_pane_ParamLimits

0xe66f,	// (0x0004d1dc) grid_tb_ext_pane

0xe6aa,	// (0x0004d217) cell_tb_ext_pane_ParamLimits

0xe6aa,	// (0x0004d217) cell_tb_ext_pane

0xe6d2,	// (0x0004d23f) cell_tb_ext_pane_g1_ParamLimits

0xe6d2,	// (0x0004d23f) cell_tb_ext_pane_g1

0x906e,	// (0x00047bdb) cell_tb_ext_pane_t1

0x314b,	// (0x00041cb8) list_highlight_pane_cp11_ParamLimits

0x314b,	// (0x00041cb8) list_highlight_pane_cp11

0x1379,	// (0x0003fee6) popup_uni_indicator_window_ParamLimits

0x1379,	// (0x0003fee6) popup_uni_indicator_window

0x372e,	// (0x0004229b) bg_popup_sub_pane_cp14

0x9089,	// (0x00047bf6) list_uniindi_pane

0x9095,	// (0x00047c02) uniindi_top_pane

0x314b,	// (0x00041cb8) bg_uniindi_top_pane

0x90b4,	// (0x00047c21) uniindi_top_pane_g1

0x90ca,	// (0x00047c37) uniindi_top_pane_g2

0x0003,

0xfd1d,	// (0x0004e88a) uniindi_top_pane_g

0x90f4,	// (0x00047c61) uniindi_top_pane_t1

0x911e,	// (0x00047c8b) list_single_uniindi_pane_ParamLimits

0x911e,	// (0x00047c8b) list_single_uniindi_pane

0x7798,	// (0x00046305) bg_uniindi_top_pane_g1

0x9131,	// (0x00047c9e) list_single_uniindi_pane_g1

0x9144,	// (0x00047cb1) list_single_uniindi_pane_t1

0x2dce,	// (0x0004193b) control_bg_pane

0x9169,	// (0x00047cd6) bg_sctrl_sk_pane_cp1

0x9172,	// (0x00047cdf) bg_sctrl_sk_pane_cp2

0x917b,	// (0x00047ce8) control_bg_pane_g1

0x9184,	// (0x00047cf1) control_bg_pane_g2

0x0001,

0xfd26,	// (0x0004e893) control_bg_pane_g

0x71bd,	// (0x00045d2a) cell_indicator_nsta_pane_g1_ParamLimits

0xdd39,	// (0x0004c8a6) cell_indicator_nsta_pane_g2_ParamLimits

0xfa9f,	// (0x0004e60c) cell_indicator_nsta_pane_g_ParamLimits

0x0dc8,	// (0x0003f935) form2_midp_time_pane_t1_ParamLimits

0x80be,	// (0x00046c2b) main_idle_act4_pane_ParamLimits

0x80be,	// (0x00046c2b) main_idle_act4_pane

0xd292,	// (0x0004bdff) popup_tb_extension_window_ParamLimits

0xe691,	// (0x0004d1fe) tb_ext_find_pane_ParamLimits

0xe691,	// (0x0004d1fe) tb_ext_find_pane

0x918d,	// (0x00047cfa) ai_gene_pane_1_cp1

0x44d8,	// (0x00043045) ai_gene_pane_2_cp1

0x9195,	// (0x00047d02) list_single_idle_plugin_calendar_pane

0x919e,	// (0x00047d0b) list_single_idle_plugin_notification_pane

0x91a7,	// (0x00047d14) list_single_idle_plugin_player_pane

0xe6ef,	// (0x0004d25c) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe6ef,	// (0x0004d25c) list_single_idle_plugin_shortcut_pane

0xe717,	// (0x0004d284) main_idle_act4_pane_t1

0xe72d,	// (0x0004d29a) main_idle_act4_pane_t2

0x0001,

0x00bf,	// (0x0003ec2c) main_idle_act4_pane_t

0xe743,	// (0x0004d2b0) middle_sk_idle_act4_pane_ParamLimits

0xe743,	// (0x0004d2b0) middle_sk_idle_act4_pane

0xe75f,	// (0x0004d2cc) popup_clock_digital_analogue_window_cp2

0xe787,	// (0x0004d2f4) shortcut_wheel_idle_act4_pane_ParamLimits

0xe787,	// (0x0004d2f4) shortcut_wheel_idle_act4_pane

0x7798,	// (0x00046305) shortcut_wheel_idle_act4_pane_g1

0x7798,	// (0x00046305) shortcut_wheel_idle_act4_pane_g2

0x7798,	// (0x00046305) shortcut_wheel_idle_act4_pane_g3

0x7798,	// (0x00046305) shortcut_wheel_idle_act4_pane_g4

0x7798,	// (0x00046305) shortcut_wheel_idle_act4_pane_g5

0x923a,	// (0x00047da7) shortcut_wheel_idle_act4_pane_g6

0x9242,	// (0x00047daf) shortcut_wheel_idle_act4_pane_g7

0x924a,	// (0x00047db7) shortcut_wheel_idle_act4_pane_g8

0x9252,	// (0x00047dbf) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd2b,	// (0x0004e898) shortcut_wheel_idle_act4_pane_g

0xdba8,	// (0x0004c715) middle_sk_idle_act4_pane_g1_ParamLimits

0xdba8,	// (0x0004c715) middle_sk_idle_act4_pane_g1

0xe804,	// (0x0004d371) middle_sk_idle_act4_pane_g2_ParamLimits

0xe804,	// (0x0004d371) middle_sk_idle_act4_pane_g2

0x0001,

0xfd49,	// (0x0004e8b6) middle_sk_idle_act4_pane_g_ParamLimits

0xfd49,	// (0x0004e8b6) middle_sk_idle_act4_pane_g

0xe81c,	// (0x0004d389) middle_sk_idle_act4_pane_t1_ParamLimits

0xe81c,	// (0x0004d389) middle_sk_idle_act4_pane_t1

0xe84b,	// (0x0004d3b8) grid_ai_shortcut_pane_ParamLimits

0xe84b,	// (0x0004d3b8) grid_ai_shortcut_pane

0xe868,	// (0x0004d3d5) list_highlight_pane_cp16_ParamLimits

0xe868,	// (0x0004d3d5) list_highlight_pane_cp16

0xe875,	// (0x0004d3e2) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe875,	// (0x0004d3e2) list_single_idle_plugin_shortcut_pane_g1

0xe881,	// (0x0004d3ee) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe881,	// (0x0004d3ee) list_single_idle_plugin_shortcut_pane_g2

0xe89d,	// (0x0004d40a) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe89d,	// (0x0004d40a) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0x00ec,	// (0x0003ec59) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0x00ec,	// (0x0003ec59) list_single_idle_plugin_shortcut_pane_g

0xe8b2,	// (0x0004d41f) cell_ai_shortcut_pane_ParamLimits

0xe8b2,	// (0x0004d41f) cell_ai_shortcut_pane

0xe8c8,	// (0x0004d435) cell_ai_shortcut_pane_g1_ParamLimits

0xe8c8,	// (0x0004d435) cell_ai_shortcut_pane_g1

0x918d,	// (0x00047cfa) ai_gene_pane_1_cp2

0x9382,	// (0x00047eef) ai_gene_pane_2_cp2

0x938a,	// (0x00047ef7) list_highlight_pane_cp15

0x9393,	// (0x00047f00) list_single_idle_plugin_calendar_pane_g1

0x938a,	// (0x00047ef7) list_highlight_pane_cp17

0x939b,	// (0x00047f08) list_single_idle_plugin_calendar_pane_g1_copy1

0x93a3,	// (0x00047f10) list_single_idle_plugin_player_pane_g1

0x6b48,	// (0x000456b5) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd4e,	// (0x0004e8bb) list_single_idle_plugin_player_pane_g

0x93ab,	// (0x00047f18) list_single_idle_plugin_player_pane_t1

0x93b9,	// (0x00047f26) list_single_idle_plugin_player_pane_t2

0x93c7,	// (0x00047f34) list_single_idle_plugin_player_pane_t3

0x93d5,	// (0x00047f42) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd53,	// (0x0004e8c0) list_single_idle_plugin_player_pane_t

0x93e3,	// (0x00047f50) wait_bar_pane_cp15

0x93eb,	// (0x00047f58) grid_ai_notification_pane

0x6b48,	// (0x000456b5) list_single_idle_plugin_notification_pane_g1

0xe8ea,	// (0x0004d457) cell_ai_notification_pane_ParamLimits

0xe8ea,	// (0x0004d457) cell_ai_notification_pane

0x9401,	// (0x00047f6e) cell_ai_notification_pane_g1

0x9409,	// (0x00047f76) cell_ai_notification_pane_t1

0xe8f7,	// (0x0004d464) tb_ext_find_button_pane

0xe8ff,	// (0x0004d46c) tb_ext_find_pane_g1

0xe907,	// (0x0004d474) tb_ext_find_pane_t1

0x3d94,	// (0x00042901) tb_ext_find_button_pane_g1

0x9435,	// (0x00047fa2) tb_ext_find_button_pane_g2

0x0001,

0xfd5c,	// (0x0004e8c9) tb_ext_find_button_pane_g

0xe717,	// (0x0004d284) main_idle_act4_pane_t1_ParamLimits

0xe72d,	// (0x0004d29a) main_idle_act4_pane_t2_ParamLimits

0x00bf,	// (0x0003ec2c) main_idle_act4_pane_t_ParamLimits

0xe75f,	// (0x0004d2cc) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe777,	// (0x0004d2e4) sat_plugin_idle_act4_pane_ParamLimits

0xe777,	// (0x0004d2e4) sat_plugin_idle_act4_pane

0xe915,	// (0x0004d482) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe915,	// (0x0004d482) sat_plugin_idle_act4_pane_t1

0xe92d,	// (0x0004d49a) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe92d,	// (0x0004d49a) sat_plugin_idle_act4_pane_t2

0xe945,	// (0x0004d4b2) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe945,	// (0x0004d4b2) sat_plugin_idle_act4_pane_t3

0xe95d,	// (0x0004d4ca) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe95d,	// (0x0004d4ca) sat_plugin_idle_act4_pane_t4

0x0003,

0x0106,	// (0x0003ec73) sat_plugin_idle_act4_pane_t_ParamLimits

0x0106,	// (0x0003ec73) sat_plugin_idle_act4_pane_t

0x12b4,	// (0x0003fe21) popup_battery_window_ParamLimits

0x12b4,	// (0x0003fe21) popup_battery_window

0x314b,	// (0x00041cb8) bg_popup_sub_pane_cp25_ParamLimits

0x314b,	// (0x00041cb8) bg_popup_sub_pane_cp25

0x948a,	// (0x00047ff7) popup_battery_window_g1_ParamLimits

0x948a,	// (0x00047ff7) popup_battery_window_g1

0x9496,	// (0x00048003) popup_battery_window_t1_ParamLimits

0x9496,	// (0x00048003) popup_battery_window_t1

0x94a8,	// (0x00048015) popup_battery_window_t2_ParamLimits

0x94a8,	// (0x00048015) popup_battery_window_t2

0x0001,

0xfd61,	// (0x0004e8ce) popup_battery_window_t_ParamLimits

0xfd61,	// (0x0004e8ce) popup_battery_window_t

0xcbdc,	// (0x0004b749) midp_canvas_pane_ParamLimits

0xcc37,	// (0x0004b7a4) midp_keypad_pane_ParamLimits

0xcc37,	// (0x0004b7a4) midp_keypad_pane

0x46f1,	// (0x0004325e) main_midp_pane_ParamLimits

0x7249,	// (0x00045db6) signal_pane_g2_cp_ParamLimits

0xe975,	// (0x0004d4e2) aid_size_cell_midp_keypad_ParamLimits

0xe975,	// (0x0004d4e2) aid_size_cell_midp_keypad

0xe993,	// (0x0004d500) midp_keyp_game_grid_pane_ParamLimits

0xe993,	// (0x0004d500) midp_keyp_game_grid_pane

0xe9ba,	// (0x0004d527) midp_keyp_rocker_pane_ParamLimits

0xe9ba,	// (0x0004d527) midp_keyp_rocker_pane

0xea13,	// (0x0004d580) midp_keyp_sk_left_pane_ParamLimits

0xea13,	// (0x0004d580) midp_keyp_sk_left_pane

0xea67,	// (0x0004d5d4) midp_keyp_sk_right_pane_ParamLimits

0xea67,	// (0x0004d5d4) midp_keyp_sk_right_pane

0x2dce,	// (0x0004193b) bg_button_pane_cp03

0xeabb,	// (0x0004d628) midp_keyp_sk_left_pane_g1

0x2dce,	// (0x0004193b) bg_button_pane_cp04

0xeabb,	// (0x0004d628) midp_keyp_sk_right_pane_g1

0x7798,	// (0x00046305) midp_keyp_rocker_pane_g1

0xeac4,	// (0x0004d631) keyp_game_cell_pane_ParamLimits

0xeac4,	// (0x0004d631) keyp_game_cell_pane

0x2dce,	// (0x0004193b) bg_button_pane_cp02

0xeae8,	// (0x0004d655) keyp_game_cell_pane_g1

0xbcd7,	// (0x0004a844) popup_fep_vkb2_window_ParamLimits

0xbcd7,	// (0x0004a844) popup_fep_vkb2_window

0xc21a,	// (0x0004ad87) aid_size_cell_vkb2_ParamLimits

0xc21a,	// (0x0004ad87) aid_size_cell_vkb2

0xc250,	// (0x0004adbd) popup_fep_vkb2_window_g1_ParamLimits

0xc250,	// (0x0004adbd) popup_fep_vkb2_window_g1

0xc2a0,	// (0x0004ae0d) vkb2_area_bottom_pane_ParamLimits

0xc2a0,	// (0x0004ae0d) vkb2_area_bottom_pane

0xc2f4,	// (0x0004ae61) vkb2_area_keypad_pane_ParamLimits

0xc2f4,	// (0x0004ae61) vkb2_area_keypad_pane

0xc33c,	// (0x0004aea9) vkb2_area_top_pane_ParamLimits

0xc33c,	// (0x0004aea9) vkb2_area_top_pane

0xc3c2,	// (0x0004af2f) vkb2_top_entry_pane_ParamLimits

0xc3c2,	// (0x0004af2f) vkb2_top_entry_pane

0xc3ef,	// (0x0004af5c) vkb2_top_grid_left_pane_ParamLimits

0xc3ef,	// (0x0004af5c) vkb2_top_grid_left_pane

0xc40f,	// (0x0004af7c) vkb2_top_grid_right_pane_ParamLimits

0xc40f,	// (0x0004af7c) vkb2_top_grid_right_pane

0x2836,	// (0x000413a3) vkb2_cell_keypad_pane_ParamLimits

0x2836,	// (0x000413a3) vkb2_cell_keypad_pane

0xc455,	// (0x0004afc2) vkb2_area_bottom_grid_pane_ParamLimits

0xc455,	// (0x0004afc2) vkb2_area_bottom_grid_pane

0xc47f,	// (0x0004afec) vkb2_area_bottom_pane_g1_ParamLimits

0xc47f,	// (0x0004afec) vkb2_area_bottom_pane_g1

0xc4a5,	// (0x0004b012) vkb2_area_bottom_pane_g2_ParamLimits

0xc4a5,	// (0x0004b012) vkb2_area_bottom_pane_g2

0xc4d6,	// (0x0004b043) vkb2_area_bottom_pane_g3_ParamLimits

0xc4d6,	// (0x0004b043) vkb2_area_bottom_pane_g3

0x0002,

0xfd66,	// (0x0004e8d3) vkb2_area_bottom_pane_g_ParamLimits

0xfd66,	// (0x0004e8d3) vkb2_area_bottom_pane_g

0x29e0,	// (0x0004154d) vkb2_top_cell_left_pane_ParamLimits

0x29e0,	// (0x0004154d) vkb2_top_cell_left_pane

0xeaf1,	// (0x0004d65e) vkb2_top_entry_pane_g1_ParamLimits

0xeaf1,	// (0x0004d65e) vkb2_top_entry_pane_g1

0xeaff,	// (0x0004d66c) vkb2_top_entry_pane_t1_ParamLimits

0xeaff,	// (0x0004d66c) vkb2_top_entry_pane_t1

0x9659,	// (0x000481c6) vkb2_top_entry_pane_t2_ParamLimits

0x9659,	// (0x000481c6) vkb2_top_entry_pane_t2

0x968b,	// (0x000481f8) vkb2_top_entry_pane_t3_ParamLimits

0x968b,	// (0x000481f8) vkb2_top_entry_pane_t3

0x0002,

0xfd6d,	// (0x0004e8da) vkb2_top_entry_pane_t_ParamLimits

0xfd6d,	// (0x0004e8da) vkb2_top_entry_pane_t

0xc540,	// (0x0004b0ad) vkb2_top_grid_right_pane_g1_ParamLimits

0xc540,	// (0x0004b0ad) vkb2_top_grid_right_pane_g1

0x2a43,	// (0x000415b0) vkb2_top_grid_right_pane_g2_ParamLimits

0x2a43,	// (0x000415b0) vkb2_top_grid_right_pane_g2

0x2a5b,	// (0x000415c8) vkb2_top_grid_right_pane_g3_ParamLimits

0x2a5b,	// (0x000415c8) vkb2_top_grid_right_pane_g3

0xc556,	// (0x0004b0c3) vkb2_top_grid_right_pane_g4_ParamLimits

0xc556,	// (0x0004b0c3) vkb2_top_grid_right_pane_g4

0x0003,

0xfd74,	// (0x0004e8e1) vkb2_top_grid_right_pane_g_ParamLimits

0xfd74,	// (0x0004e8e1) vkb2_top_grid_right_pane_g

0x2a89,	// (0x000415f6) vkb2_top_cell_left_pane_g1

0x2aa0,	// (0x0004160d) vkb2_cell_keypad_pane_g1_ParamLimits

0x2aa0,	// (0x0004160d) vkb2_cell_keypad_pane_g1

0x96af,	// (0x0004821c) vkb2_cell_keypad_pane_t1_ParamLimits

0x96af,	// (0x0004821c) vkb2_cell_keypad_pane_t1

0x2aae,	// (0x0004161b) vkb2_cell_bottom_grid_pane_ParamLimits

0x2aae,	// (0x0004161b) vkb2_cell_bottom_grid_pane

0x2ae7,	// (0x00041654) vkb2_cell_bottom_grid_pane_g1

0xe7a8,	// (0x0004d315) aid_call2_pane_cp02

0xe7b0,	// (0x0004d31d) aid_call_pane_cp02

0xe7b8,	// (0x0004d325) clock_digital_number_pane_cp10

0xe7c0,	// (0x0004d32d) clock_digital_number_pane_cp11

0xe7c8,	// (0x0004d335) clock_digital_number_pane_cp12

0xe7d0,	// (0x0004d33d) clock_digital_number_pane_cp13

0xe7d8,	// (0x0004d345) clock_digital_separator_pane_cp10

0x3d94,	// (0x00042901) popup_clock_digital_analogue_window_cp2_g1

0x3d94,	// (0x00042901) popup_clock_digital_analogue_window_cp2_g2

0xe7e0,	// (0x0004d34d) popup_clock_digital_analogue_window_cp2_g3

0x3d94,	// (0x00042901) popup_clock_digital_analogue_window_cp2_g4

0xe7e0,	// (0x0004d34d) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd3e,	// (0x0004e8ab) popup_clock_digital_analogue_window_cp2_g

0xe7e8,	// (0x0004d355) popup_clock_digital_analogue_window_cp2_t1

0xe7f6,	// (0x0004d363) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0x00e2,	// (0x0003ec4f) popup_clock_digital_analogue_window_cp2_t

0x7798,	// (0x00046305) clock_digital_number_pane_cp10_g1

0x7798,	// (0x00046305) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3b,	// (0x0004e6a8) clock_digital_number_pane_cp10_g

0x7798,	// (0x00046305) clock_digital_separator_pane_cp10_g1

0x7798,	// (0x00046305) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3b,	// (0x0004e6a8) clock_digital_separator_pane_cp10_g

0x90d6,	// (0x00047c43) uniindi_top_pane_g3

0x90e7,	// (0x00047c54) uniindi_top_pane_g4

0x28c1,	// (0x0004142e) vkb2_row_keypad_pane_ParamLimits

0x28c1,	// (0x0004142e) vkb2_row_keypad_pane

0x2b03,	// (0x00041670) vkb2_cell_t_keypad_pane_ParamLimits

0x2b03,	// (0x00041670) vkb2_cell_t_keypad_pane

0x2b13,	// (0x00041680) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2b13,	// (0x00041680) vkb2_cell_t_keypad_pane_cp08

0x2b26,	// (0x00041693) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2b26,	// (0x00041693) vkb2_cell_t_keypad_pane_cp09

0x2b3a,	// (0x000416a7) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x2b3a,	// (0x000416a7) vkb2_cell_t_keypad_pane_cp01

0x2b4b,	// (0x000416b8) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2b4b,	// (0x000416b8) vkb2_cell_t_keypad_pane_cp02

0x2b5c,	// (0x000416c9) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2b5c,	// (0x000416c9) vkb2_cell_t_keypad_pane_cp03

0x2b6d,	// (0x000416da) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2b6d,	// (0x000416da) vkb2_cell_t_keypad_pane_cp04

0x2b7e,	// (0x000416eb) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2b7e,	// (0x000416eb) vkb2_cell_t_keypad_pane_cp05

0x2b8f,	// (0x000416fc) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2b8f,	// (0x000416fc) vkb2_cell_t_keypad_pane_cp06

0x2ba0,	// (0x0004170d) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2ba0,	// (0x0004170d) vkb2_cell_t_keypad_pane_cp07

0x2bb1,	// (0x0004171e) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x2bb1,	// (0x0004171e) vkb2_cell_t_keypad_pane_cp10

0x7a2a,	// (0x00046597) vkb2_cell_t_keypad_pane_g1

0x96c6,	// (0x00048233) vkb2_cell_t_keypad_pane_t1

0x2dce,	// (0x0004193b) popup_grid_graphic2_window

0xeb38,	// (0x0004d6a5) aid_size_cell_graphic2_ParamLimits

0xeb38,	// (0x0004d6a5) aid_size_cell_graphic2

0x5860,	// (0x000443cd) bg_popup_window_pane_cp21_ParamLimits

0x5860,	// (0x000443cd) bg_popup_window_pane_cp21

0xeb6a,	// (0x0004d6d7) graphic2_pages_pane_ParamLimits

0xeb6a,	// (0x0004d6d7) graphic2_pages_pane

0xebc0,	// (0x0004d72d) grid_graphic2_control_pane_ParamLimits

0xebc0,	// (0x0004d72d) grid_graphic2_control_pane

0xebf4,	// (0x0004d761) grid_graphic2_pane_ParamLimits

0xebf4,	// (0x0004d761) grid_graphic2_pane

0xec67,	// (0x0004d7d4) cell_graphic2_pane

0x2dce,	// (0x0004193b) main_comp_mode_pane

0x8956,	// (0x000474c3) list_ai3_gene_pane_ParamLimits

0xe4ef,	// (0x0004d05c) bg_popup_window_pane_cp19_ParamLimits

0x8d2c,	// (0x00047899) bg_touch_area_indi_pane_ParamLimits

0x8d2c,	// (0x00047899) bg_touch_area_indi_pane

0x8d42,	// (0x000478af) bg_touch_area_indi_pane_cp01_ParamLimits

0x8d42,	// (0x000478af) bg_touch_area_indi_pane_cp01

0x8d58,	// (0x000478c5) bg_touch_area_indi_pane_cp02_ParamLimits

0x8d58,	// (0x000478c5) bg_touch_area_indi_pane_cp02

0x8d70,	// (0x000478dd) bg_touch_area_indi_pane_cp03_ParamLimits

0x8d70,	// (0x000478dd) bg_touch_area_indi_pane_cp03

0x8d8a,	// (0x000478f7) popup_slider_window_g1_ParamLimits

0x8da6,	// (0x00047913) popup_slider_window_g2_ParamLimits

0x8dc2,	// (0x0004792f) popup_slider_window_g3_ParamLimits

0xfcdd,	// (0x0004e84a) popup_slider_window_g_ParamLimits

0x8e1e,	// (0x0004798b) popup_slider_window_t1_ParamLimits

0x8e92,	// (0x000479ff) small_volume_slider_vertical_pane_ParamLimits

0xec67,	// (0x0004d7d4) cell_graphic2_pane_ParamLimits

0xecc2,	// (0x0004d82f) bg_button_pane_cp10_ParamLimits

0xecc2,	// (0x0004d82f) bg_button_pane_cp10

0xecd5,	// (0x0004d842) bg_button_pane_cp11_ParamLimits

0xecd5,	// (0x0004d842) bg_button_pane_cp11

0xece8,	// (0x0004d855) graphic2_pages_pane_g1_ParamLimits

0xece8,	// (0x0004d855) graphic2_pages_pane_g1

0xed03,	// (0x0004d870) graphic2_pages_pane_g2_ParamLimits

0xed03,	// (0x0004d870) graphic2_pages_pane_g2

0x0001,

0xfd82,	// (0x0004e8ef) graphic2_pages_pane_g_ParamLimits

0xfd82,	// (0x0004e8ef) graphic2_pages_pane_g

0xed1b,	// (0x0004d888) graphic2_pages_pane_t1_ParamLimits

0xed1b,	// (0x0004d888) graphic2_pages_pane_t1

0xed33,	// (0x0004d8a0) cell_graphic2_control_pane_ParamLimits

0xed33,	// (0x0004d8a0) cell_graphic2_control_pane

0xed4d,	// (0x0004d8ba) cell_graphic2_pane_g1_ParamLimits

0xed4d,	// (0x0004d8ba) cell_graphic2_pane_g1

0xdbb6,	// (0x0004c723) cell_graphic2_pane_g2_ParamLimits

0xdbb6,	// (0x0004c723) cell_graphic2_pane_g2

0xed5a,	// (0x0004d8c7) cell_graphic2_pane_g3_ParamLimits

0xed5a,	// (0x0004d8c7) cell_graphic2_pane_g3

0xdbc3,	// (0x0004c730) cell_graphic2_pane_g4_ParamLimits

0xdbc3,	// (0x0004c730) cell_graphic2_pane_g4

0xed67,	// (0x0004d8d4) cell_graphic2_pane_g5_ParamLimits

0xed67,	// (0x0004d8d4) cell_graphic2_pane_g5

0x0004,

0xfd87,	// (0x0004e8f4) cell_graphic2_pane_g_ParamLimits

0xfd87,	// (0x0004e8f4) cell_graphic2_pane_g

0xed87,	// (0x0004d8f4) cell_graphic2_pane_t1_ParamLimits

0xed87,	// (0x0004d8f4) cell_graphic2_pane_t1

0x5ed4,	// (0x00044a41) grid_highlight_pane_cp11_ParamLimits

0x5ed4,	// (0x00044a41) grid_highlight_pane_cp11

0x372e,	// (0x0004229b) bg_button_pane_cp05

0xedbc,	// (0x0004d929) cell_graphic2_control_pane_g1

0x7798,	// (0x00046305) bg_touch_area_indi_pane_g1

0x9937,	// (0x000484a4) aid_cmod_rocker_key_size

0x9941,	// (0x000484ae) aid_cmode_itu_key_size

0x994b,	// (0x000484b8) main_cmode_video_pane

0x9976,	// (0x000484e3) main_comp_mode_itu_pane

0x9982,	// (0x000484ef) main_comp_mode_rocker_pane

0x998e,	// (0x000484fb) cell_cmode_rocker_pane_ParamLimits

0x998e,	// (0x000484fb) cell_cmode_rocker_pane

0x99a0,	// (0x0004850d) cell_cmode_itu_pane_ParamLimits

0x99a0,	// (0x0004850d) cell_cmode_itu_pane

0x372e,	// (0x0004229b) bg_button_pane_cp06_ParamLimits

0x372e,	// (0x0004229b) bg_button_pane_cp06

0x7a2a,	// (0x00046597) cell_cmode_rocker_pane_g1_ParamLimits

0x7a2a,	// (0x00046597) cell_cmode_rocker_pane_g1

0x8f36,	// (0x00047aa3) cell_cmode_rocker_pane_g2_ParamLimits

0x8f36,	// (0x00047aa3) cell_cmode_rocker_pane_g2

0x0001,

0xfd92,	// (0x0004e8ff) cell_cmode_rocker_pane_g_ParamLimits

0xfd92,	// (0x0004e8ff) cell_cmode_rocker_pane_g

0x2dce,	// (0x0004193b) bg_button_pane_cp07

0x99b5,	// (0x00048522) cell_cmode_itu_pane_g1

0x99be,	// (0x0004852b) cell_cmode_itu_pane_t1

0x99cc,	// (0x00048539) cell_cmode_itu_pane_t2

0x0001,

0xfd97,	// (0x0004e904) cell_cmode_itu_pane_t

0x9159,	// (0x00047cc6) aid_touch_ctrl_left

0x9161,	// (0x00047cce) aid_touch_ctrl_right

0x2dce,	// (0x0004193b) compa_mode_pane

0xedc9,	// (0x0004d936) aid_cmod_rocker_key_size_cp

0xedd3,	// (0x0004d940) aid_cmode_itu_key_size_cp

0x99ee,	// (0x0004855b) compa_mode_pane_g1

0x99f6,	// (0x00048563) compa_mode_pane_g2

0x99fe,	// (0x0004856b) compa_mode_pane_g3

0x0002,

0xfd9c,	// (0x0004e909) compa_mode_pane_g

0xeddd,	// (0x0004d94a) main_comp_mode_itu_pane_cp

0xede5,	// (0x0004d952) main_comp_mode_rocker_pane_cp

0xeded,	// (0x0004d95a) cell_cmode_itu_pane_cp_ParamLimits

0xeded,	// (0x0004d95a) cell_cmode_itu_pane_cp

0xee02,	// (0x0004d96f) cell_cmode_rocker_pane_cp_ParamLimits

0xee02,	// (0x0004d96f) cell_cmode_rocker_pane_cp

0x372e,	// (0x0004229b) bg_button_pane_cp06_cp_ParamLimits

0x372e,	// (0x0004229b) bg_button_pane_cp06_cp

0x7a2a,	// (0x00046597) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7a2a,	// (0x00046597) cell_cmode_rocker_pane_g1_cp

0x7798,	// (0x00046305) cell_cmode_rocker_pane_g2_cp

0x2dce,	// (0x0004193b) bg_button_pane_cp07_cp

0xee14,	// (0x0004d981) cell_cmode_itu_pane_g1_cp

0xee1d,	// (0x0004d98a) cell_cmode_itu_pane_t1_cp

0xee1d,	// (0x0004d98a) cell_cmode_itu_pane_t2_cp

0xdb0e,	// (0x0004c67b) settings_code_pane_cp2

0x2ec2,	// (0x00041a2f) bg_popup_window_pane_cp3_ParamLimits

0x3325,	// (0x00041e92) heading_pane_cp3_ParamLimits

0x3331,	// (0x00041e9e) listscroll_popup_graphic_pane_ParamLimits

0x20ed,	// (0x00040c5a) fep_hwr_aid_pane_ParamLimits

0x25a0,	// (0x0004110d) aid_touch_sctrl_top_ParamLimits

0x25ad,	// (0x0004111a) sctrl_sk_top_pane_g1_ParamLimits

0x7a2a,	// (0x00046597) sctrl_sk_top_pane_g2_ParamLimits

0xfcf6,	// (0x0004e863) sctrl_sk_top_pane_g_ParamLimits

0x25ba,	// (0x00041127) sctrl_sk_top_pane_t1_ParamLimits

0x25a0,	// (0x0004110d) aid_touch_sctrl_bottom_ParamLimits

0x25ba,	// (0x00041127) sctrl_sk_bottom_pane_t1_ParamLimits

0x90a2,	// (0x00047c0f) aid_area_touch_clock

0xc384,	// (0x0004aef1) aid_vkb2_area_top_pane_cell_ParamLimits

0xc384,	// (0x0004aef1) aid_vkb2_area_top_pane_cell

0xc42f,	// (0x0004af9c) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc42f,	// (0x0004af9c) aid_vkb2_area_bottom_pane_cell

0x9611,	// (0x0004817e) popup_char_count_window

0x9a4b,	// (0x000485b8) popup_char_count_window_g1

0x9a54,	// (0x000485c1) popup_char_count_window_g2

0x9a5d,	// (0x000485ca) popup_char_count_window_g3

0x0002,

0xfda3,	// (0x0004e910) popup_char_count_window_g

0x9a66,	// (0x000485d3) popup_char_count_window_t1

0x265e,	// (0x000411cb) popup_fep_char_preview_window_ParamLimits

0x265e,	// (0x000411cb) popup_fep_char_preview_window

0xc3a4,	// (0x0004af11) vkb2_top_candi_pane_ParamLimits

0xc3a4,	// (0x0004af11) vkb2_top_candi_pane

0xee2b,	// (0x0004d998) cell_vkb2_top_candi_pane_ParamLimits

0xee2b,	// (0x0004d998) cell_vkb2_top_candi_pane

0x5860,	// (0x000443cd) bg_popup_fep_char_preview_window_ParamLimits

0x5860,	// (0x000443cd) bg_popup_fep_char_preview_window

0x2bc6,	// (0x00041733) popup_fep_char_preview_window_t1_ParamLimits

0x2bc6,	// (0x00041733) popup_fep_char_preview_window_t1

0x9ac1,	// (0x0004862e) bg_popup_fep_char_preview_window_g1

0x9ac9,	// (0x00048636) bg_popup_fep_char_preview_window_g2

0x9ad1,	// (0x0004863e) bg_popup_fep_char_preview_window_g3

0x9ad9,	// (0x00048646) bg_popup_fep_char_preview_window_g4

0x9ae1,	// (0x0004864e) bg_popup_fep_char_preview_window_g5

0x2c00,	// (0x0004176d) bg_popup_fep_char_preview_window_g6

0x9ae9,	// (0x00048656) bg_popup_fep_char_preview_window_g7

0x9af1,	// (0x0004865e) bg_popup_fep_char_preview_window_g8

0x9af9,	// (0x00048666) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdaa,	// (0x0004e917) bg_popup_fep_char_preview_window_g

0x7a2a,	// (0x00046597) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7a2a,	// (0x00046597) cell_vkb2_top_candi_pane_g1

0x7d41,	// (0x000468ae) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7d41,	// (0x000468ae) cell_vkb2_top_candi_pane_g2

0x7d62,	// (0x000468cf) cell_vkb2_top_candi_pane_g3_ParamLimits

0x7d62,	// (0x000468cf) cell_vkb2_top_candi_pane_g3

0x2c08,	// (0x00041775) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2c08,	// (0x00041775) cell_vkb2_top_candi_pane_g4

0x9955,	// (0x000484c2) cell_vkb2_top_candi_pane_g5_ParamLimits

0x9955,	// (0x000484c2) cell_vkb2_top_candi_pane_g5

0x8f36,	// (0x00047aa3) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8f36,	// (0x00047aa3) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdbd,	// (0x0004e92a) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdbd,	// (0x0004e92a) cell_vkb2_top_candi_pane_g

0x2c29,	// (0x00041796) cell_vkb2_top_candi_pane_t1

0x1e45,	// (0x000409b2) aid_size_touch_slider_mark_ParamLimits

0x1e45,	// (0x000409b2) aid_size_touch_slider_mark

0xeba6,	// (0x0004d713) grid_graphic2_catg_pane_ParamLimits

0xeba6,	// (0x0004d713) grid_graphic2_catg_pane

0xec3a,	// (0x0004d7a7) popup_grid_graphic2_window_t1_ParamLimits

0xec3a,	// (0x0004d7a7) popup_grid_graphic2_window_t1

0xec50,	// (0x0004d7bd) popup_grid_graphic2_window_t2_ParamLimits

0xec50,	// (0x0004d7bd) popup_grid_graphic2_window_t2

0x0001,

0xfd7d,	// (0x0004e8ea) popup_grid_graphic2_window_t_ParamLimits

0xfd7d,	// (0x0004e8ea) popup_grid_graphic2_window_t

0x372e,	// (0x0004229b) bg_button_pane_cp05_ParamLimits

0xedbc,	// (0x0004d929) cell_graphic2_control_pane_g1_ParamLimits

0xee91,	// (0x0004d9fe) cell_graphic2_catg_pane_ParamLimits

0xee91,	// (0x0004d9fe) cell_graphic2_catg_pane

0x2dce,	// (0x0004193b) bg_button_pane_cp12

0xeea3,	// (0x0004da10) cell_graphic2_catg_pane_g1

0x906e,	// (0x00047bdb) cell_tb_ext_pane_t1_ParamLimits

0x2a00,	// (0x0004156d) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2a00,	// (0x0004156d) vkb2_top_cell_right_narrow_pane

0x2a18,	// (0x00041585) vkb2_top_cell_right_wide_pane_ParamLimits

0x2a18,	// (0x00041585) vkb2_top_cell_right_wide_pane

0x80be,	// (0x00046c2b) bg_vkb2_func_pane_ParamLimits

0x80be,	// (0x00046c2b) bg_vkb2_func_pane

0x2a89,	// (0x000415f6) vkb2_top_cell_left_pane_g1_ParamLimits

0x80be,	// (0x00046c2b) bg_vkb2_fuc_pane_cp03_ParamLimits

0x80be,	// (0x00046c2b) bg_vkb2_fuc_pane_cp03

0x2ae7,	// (0x00041654) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x518f,	// (0x00043cfc) bg_vkb2_func_pane_g1

0x5197,	// (0x00043d04) bg_vkb2_func_pane_g2

0x51a7,	// (0x00043d14) bg_vkb2_func_pane_g3

0x519f,	// (0x00043d0c) bg_vkb2_func_pane_g4

0x51af,	// (0x00043d1c) bg_vkb2_func_pane_g5

0x51b7,	// (0x00043d24) bg_vkb2_func_pane_g6

0x51bf,	// (0x00043d2c) bg_vkb2_func_pane_g7

0x51c7,	// (0x00043d34) bg_vkb2_func_pane_g8

0x5187,	// (0x00043cf4) bg_vkb2_func_pane_g9

0x0008,

0xfdca,	// (0x0004e937) bg_vkb2_func_pane_g

0x80be,	// (0x00046c2b) bg_vkb2_fuc_pane_cp01_ParamLimits

0x80be,	// (0x00046c2b) bg_vkb2_fuc_pane_cp01

0x2a89,	// (0x000415f6) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2a89,	// (0x000415f6) vkb2_top_cell_right_wide_pane_g1

0x80be,	// (0x00046c2b) bg_vkb2_fuc_pane_cp02_ParamLimits

0x80be,	// (0x00046c2b) bg_vkb2_fuc_pane_cp02

0x2ae7,	// (0x00041654) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2ae7,	// (0x00041654) vkb2_top_cell_right_narrow_pane_g1

0xe42f,	// (0x0004cf9c) aid_touch_area_decrease_ParamLimits

0xe42f,	// (0x0004cf9c) aid_touch_area_decrease

0xe463,	// (0x0004cfd0) aid_touch_area_increase_ParamLimits

0xe463,	// (0x0004cfd0) aid_touch_area_increase

0xe48b,	// (0x0004cff8) aid_touch_area_mute_ParamLimits

0xe48b,	// (0x0004cff8) aid_touch_area_mute

0xe4bb,	// (0x0004d028) aid_touch_area_slider_ParamLimits

0xe4bb,	// (0x0004d028) aid_touch_area_slider

0xe4fb,	// (0x0004d068) popup_slider_window_g4_ParamLimits

0xe4fb,	// (0x0004d068) popup_slider_window_g4

0xe523,	// (0x0004d090) popup_slider_window_g5_ParamLimits

0xe523,	// (0x0004d090) popup_slider_window_g5

0xe557,	// (0x0004d0c4) popup_slider_window_g6_ParamLimits

0xe557,	// (0x0004d0c4) popup_slider_window_g6

0x8e4c,	// (0x000479b9) popup_slider_window_t2_ParamLimits

0x8e4c,	// (0x000479b9) popup_slider_window_t2

0x0001,

0xfcea,	// (0x0004e857) popup_slider_window_t_ParamLimits

0xfcea,	// (0x0004e857) popup_slider_window_t

0xe573,	// (0x0004d0e0) slider_pane_ParamLimits

0xe573,	// (0x0004d0e0) slider_pane

0x9b1c,	// (0x00048689) slider_pane_g1_ParamLimits

0x9b1c,	// (0x00048689) slider_pane_g1

0x9b30,	// (0x0004869d) slider_pane_g2_ParamLimits

0x9b30,	// (0x0004869d) slider_pane_g2

0x9b46,	// (0x000486b3) slider_pane_g3_ParamLimits

0x9b46,	// (0x000486b3) slider_pane_g3

0x0003,

0xfddd,	// (0x0004e94a) slider_pane_g_ParamLimits

0xfddd,	// (0x0004e94a) slider_pane_g

0xd2da,	// (0x0004be47) popup_tb_float_extension_window_ParamLimits

0xd2da,	// (0x0004be47) popup_tb_float_extension_window

0x9b72,	// (0x000486df) aid_size_cell_tb_float_ext

0x2dce,	// (0x0004193b) bg_popup_sub_window_cp28

0x9b7e,	// (0x000486eb) grid_tb_float_ext_pane

0x9b88,	// (0x000486f5) cell_tb_float_ext_pane_ParamLimits

0x9b88,	// (0x000486f5) cell_tb_float_ext_pane

0x9ba2,	// (0x0004870f) cell_tb_float_ext_pane_g1

0x9bab,	// (0x00048718) grid_highlight_pane_cp12

0xc115,	// (0x0004ac82) cell_last_hwr_side_pane_ParamLimits

0xc115,	// (0x0004ac82) cell_last_hwr_side_pane

0x7798,	// (0x00046305) cell_last_hwr_side_pane_g1

0x9bb4,	// (0x00048721) cell_last_hwr_side_pane_g2

0x0001,

0xfde6,	// (0x0004e953) cell_last_hwr_side_pane_g

0xc50b,	// (0x0004b078) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc50b,	// (0x0004b078) vkb2_area_bottom_space_btn_pane

0x7a2a,	// (0x00046597) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x96c6,	// (0x00048233) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2c29,	// (0x00041796) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2c48,	// (0x000417b5) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2c48,	// (0x000417b5) vkb2_area_bottom_space_btn_pane_g1

0x2c82,	// (0x000417ef) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2c82,	// (0x000417ef) vkb2_area_bottom_space_btn_pane_g2

0x2cb8,	// (0x00041825) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2cb8,	// (0x00041825) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdeb,	// (0x0004e958) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdeb,	// (0x0004e958) vkb2_area_bottom_space_btn_pane_g

0x2194,	// (0x00040d01) cel_fep_hwr_func_pane_ParamLimits

0x2194,	// (0x00040d01) cel_fep_hwr_func_pane

0xc0ea,	// (0x0004ac57) cell_hwr_side_button_pane_ParamLimits

0xc0ea,	// (0x0004ac57) cell_hwr_side_button_pane

0x90a2,	// (0x00047c0f) aid_area_touch_clock_ParamLimits

0x314b,	// (0x00041cb8) bg_uniindi_top_pane_ParamLimits

0x90b4,	// (0x00047c21) uniindi_top_pane_g1_ParamLimits

0x90ca,	// (0x00047c37) uniindi_top_pane_g2_ParamLimits

0x90d6,	// (0x00047c43) uniindi_top_pane_g3_ParamLimits

0x90e7,	// (0x00047c54) uniindi_top_pane_g4_ParamLimits

0xfd1d,	// (0x0004e88a) uniindi_top_pane_g_ParamLimits

0x90f4,	// (0x00047c61) uniindi_top_pane_t1_ParamLimits

0x314b,	// (0x00041cb8) bg_vkb2_func_pane_cp01_ParamLimits

0x314b,	// (0x00041cb8) bg_vkb2_func_pane_cp01

0x9bbd,	// (0x0004872a) cel_fep_hwr_func_pane_g1_ParamLimits

0x9bbd,	// (0x0004872a) cel_fep_hwr_func_pane_g1

0x314b,	// (0x00041cb8) bg_vkb2_func_pane_cp02_ParamLimits

0x314b,	// (0x00041cb8) bg_vkb2_func_pane_cp02

0x9bbd,	// (0x0004872a) cell_hwr_side_button_pane_g1_ParamLimits

0x9bbd,	// (0x0004872a) cell_hwr_side_button_pane_g1

0x5008,	// (0x00043b75) status_pane_g4_ParamLimits

0x5008,	// (0x00043b75) status_pane_g4

0x5022,	// (0x00043b8f) status_pane_t1

0x74d1,	// (0x0004603e) form2_midp_gauge_slider_cont_pane

0x74d9,	// (0x00046046) form2_midp_gauge_slider_pane_t1_ParamLimits

0xde2d,	// (0x0004c99a) form2_midp_gauge_slider_pane_t2_ParamLimits

0xde3f,	// (0x0004c9ac) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaee,	// (0x0004e65b) form2_midp_gauge_slider_pane_t_ParamLimits

0x750f,	// (0x0004607c) form2_midp_slider_pane_ParamLimits

0x261e,	// (0x0004118b) aid_size_cell_func_vkb2_ParamLimits

0x261e,	// (0x0004118b) aid_size_cell_func_vkb2

0x9b5e,	// (0x000486cb) slider_pane_g4_ParamLimits

0x9b5e,	// (0x000486cb) slider_pane_g4

0xc56c,	// (0x0004b0d9) form2_midp_gauge_slider_pane_t2_cp01

0xc57a,	// (0x0004b0e7) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc57a,	// (0x0004b0e7) form2_midp_gauge_slider_pane_t3_cp01

0x2d2d,	// (0x0004189a) form2_midp_slider_pane_cp01

0x2dce,	// (0x0004193b) navi_smil_pane

0x9bf6,	// (0x00048763) navi_smil_pane_g1

0x9bfe,	// (0x0004876b) navi_smil_pane_t1

0x9bcb,	// (0x00048738) form2_midp_slider_pane_g1

0x9bd4,	// (0x00048741) form2_midp_slider_pane_g2

0x9bdc,	// (0x00048749) form2_midp_slider_pane_g3

0x9bcb,	// (0x00048738) form2_midp_slider_pane_g4

0xeeac,	// (0x0004da19) form2_midp_slider_pane_g5

0x0004,

0xfdf4,	// (0x0004e961) form2_midp_slider_pane_g

0x2cf2,	// (0x0004185f) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2cf2,	// (0x0004185f) vkb2_area_bottom_space_btn_pane_g4

0xd4b6,	// (0x0004c023) lc0_navi_pane_ParamLimits

0xd4b6,	// (0x0004c023) lc0_navi_pane

0xd520,	// (0x0004c08d) lc0_stat_indi_pane_ParamLimits

0xd520,	// (0x0004c08d) lc0_stat_indi_pane

0xd535,	// (0x0004c0a2) ls0_title_pane_ParamLimits

0xd535,	// (0x0004c0a2) ls0_title_pane

0x372e,	// (0x0004229b) bg_popup_sub_pane_cp14_ParamLimits

0x9089,	// (0x00047bf6) list_uniindi_pane_ParamLimits

0x9095,	// (0x00047c02) uniindi_top_pane_ParamLimits

0x9131,	// (0x00047c9e) list_single_uniindi_pane_g1_ParamLimits

0x9144,	// (0x00047cb1) list_single_uniindi_pane_t1_ParamLimits

0xc597,	// (0x0004b104) lc0_stat_clock_pane_ParamLimits

0xc597,	// (0x0004b104) lc0_stat_clock_pane

0xeeb5,	// (0x0004da22) lc0_stat_indi_pane_g1_ParamLimits

0xeeb5,	// (0x0004da22) lc0_stat_indi_pane_g1

0xeec2,	// (0x0004da2f) lc0_stat_indi_pane_g2_ParamLimits

0xeec2,	// (0x0004da2f) lc0_stat_indi_pane_g2

0x0001,

0x01b2,	// (0x0003ed1f) lc0_stat_indi_pane_g_ParamLimits

0x01b2,	// (0x0003ed1f) lc0_stat_indi_pane_g

0xc5a4,	// (0x0004b111) lc0_uni_indicator_pane_ParamLimits

0xc5a4,	// (0x0004b111) lc0_uni_indicator_pane

0x9c26,	// (0x00048793) ls0_title_pane_g1_ParamLimits

0x9c26,	// (0x00048793) ls0_title_pane_g1

0xeecf,	// (0x0004da3c) ls0_title_pane_t1_ParamLimits

0xeecf,	// (0x0004da3c) ls0_title_pane_t1

0xc5b1,	// (0x0004b11e) lc0_uni_indicator_pane_g1_ParamLimits

0xc5b1,	// (0x0004b11e) lc0_uni_indicator_pane_g1

0x9c70,	// (0x000487dd) lc0_stat_clock_pane_t1

0x2dce,	// (0x0004193b) main_ai5_pane

0x9c7e,	// (0x000487eb) ai5_sk_pane_ParamLimits

0x9c7e,	// (0x000487eb) ai5_sk_pane

0xeefd,	// (0x0004da6a) cell_ai5_widget_pane_ParamLimits

0xeefd,	// (0x0004da6a) cell_ai5_widget_pane

0x9d0d,	// (0x0004887a) aid_size_cell_widget_grid

0x9d21,	// (0x0004888e) bg_ai5_widget_pane_ParamLimits

0x9d21,	// (0x0004888e) bg_ai5_widget_pane

0xef86,	// (0x0004daf3) cell_ai5_widget_pane_g2

0xef96,	// (0x0004db03) cell_ai5_widget_pane_g3

0xefb5,	// (0x0004db22) cell_ai5_widget_pane_g4

0xefc1,	// (0x0004db2e) cell_ai5_widget_pane_g5

0xefcd,	// (0x0004db3a) cell_ai5_widget_pane_g6

0xefd9,	// (0x0004db46) cell_ai5_widget_pane_g7

0xf021,	// (0x0004db8e) cell_ai5_widget_pane_t1_ParamLimits

0xf021,	// (0x0004db8e) cell_ai5_widget_pane_t1

0xf03e,	// (0x0004dbab) cell_ai5_widget_pane_t2_ParamLimits

0xf03e,	// (0x0004dbab) cell_ai5_widget_pane_t2

0xf056,	// (0x0004dbc3) cell_ai5_widget_pane_t3_ParamLimits

0xf056,	// (0x0004dbc3) cell_ai5_widget_pane_t3

0xf06e,	// (0x0004dbdb) cell_ai5_widget_pane_t4_ParamLimits

0xf06e,	// (0x0004dbdb) cell_ai5_widget_pane_t4

0xf088,	// (0x0004dbf5) cell_ai5_widget_pane_t5_ParamLimits

0xf088,	// (0x0004dbf5) cell_ai5_widget_pane_t5

0x9e6a,	// (0x000489d7) cell_ai5_widget_pane_t6_ParamLimits

0x9e6a,	// (0x000489d7) cell_ai5_widget_pane_t6

0x9e7c,	// (0x000489e9) cell_ai5_widget_pane_t7_ParamLimits

0x9e7c,	// (0x000489e9) cell_ai5_widget_pane_t7

0xf0a7,	// (0x0004dc14) cell_ai5_widget_pane_t8_ParamLimits

0xf0a7,	// (0x0004dc14) cell_ai5_widget_pane_t8

0x0009,

0xfdff,	// (0x0004e96c) cell_ai5_widget_pane_t_ParamLimits

0xfdff,	// (0x0004e96c) cell_ai5_widget_pane_t

0xf0f3,	// (0x0004dc60) grid_ai5_widget_pane

0x372e,	// (0x0004229b) highlight_cell_ai5_widget_pane_ParamLimits

0x372e,	// (0x0004229b) highlight_cell_ai5_widget_pane

0xf10b,	// (0x0004dc78) ai5_sk_left_pane

0xf115,	// (0x0004dc82) ai5_sk_middle_pane

0xf11f,	// (0x0004dc8c) ai5_sk_right_pane

0x9f17,	// (0x00048a84) bg_ai5_widget_pane_g1_ParamLimits

0x9f17,	// (0x00048a84) bg_ai5_widget_pane_g1

0x9f23,	// (0x00048a90) bg_ai5_widget_pane_g2_ParamLimits

0x9f23,	// (0x00048a90) bg_ai5_widget_pane_g2

0x9f2f,	// (0x00048a9c) bg_ai5_widget_pane_g3_ParamLimits

0x9f2f,	// (0x00048a9c) bg_ai5_widget_pane_g3

0x9f3b,	// (0x00048aa8) bg_ai5_widget_pane_g4_ParamLimits

0x9f3b,	// (0x00048aa8) bg_ai5_widget_pane_g4

0x9f47,	// (0x00048ab4) bg_ai5_widget_pane_g5_ParamLimits

0x9f47,	// (0x00048ab4) bg_ai5_widget_pane_g5

0x9f53,	// (0x00048ac0) bg_ai5_widget_pane_g6_ParamLimits

0x9f53,	// (0x00048ac0) bg_ai5_widget_pane_g6

0x9f5f,	// (0x00048acc) bg_ai5_widget_pane_g7_ParamLimits

0x9f5f,	// (0x00048acc) bg_ai5_widget_pane_g7

0x9f6b,	// (0x00048ad8) bg_ai5_widget_pane_g8_ParamLimits

0x9f6b,	// (0x00048ad8) bg_ai5_widget_pane_g8

0x9f77,	// (0x00048ae4) bg_ai5_widget_pane_g9_ParamLimits

0x9f77,	// (0x00048ae4) bg_ai5_widget_pane_g9

0x0008,

0xfe14,	// (0x0004e981) bg_ai5_widget_pane_g_ParamLimits

0xfe14,	// (0x0004e981) bg_ai5_widget_pane_g

0x9faa,	// (0x00048b17) cell_shortcut_ai5_widget_pane_ParamLimits

0x9faa,	// (0x00048b17) cell_shortcut_ai5_widget_pane

0x2f8b,	// (0x00041af8) bg_cell_shortcut_ai5_widget_pane

0x9fbb,	// (0x00048b28) cell_grid_ai5_widget_pane_g1

0x9fc4,	// (0x00048b31) highlight_cell_shortcut_ai5_widget_pane

0x5197,	// (0x00043d04) ai5_sk_left_pane_g1

0x9fcc,	// (0x00048b39) ai5_sk_left_pane_g2

0x9fd4,	// (0x00048b41) ai5_sk_left_pane_g3

0x9fdc,	// (0x00048b49) ai5_sk_left_pane_g4

0x0003,

0xfe27,	// (0x0004e994) ai5_sk_left_pane_g

0x9fe4,	// (0x00048b51) ai5_sk_left_pane_t1

0x518f,	// (0x00043cfc) ai5_sk_right_pane_g1

0x9ff2,	// (0x00048b5f) ai5_sk_right_pane_g2

0x9ffa,	// (0x00048b67) ai5_sk_right_pane_g3

0xa002,	// (0x00048b6f) ai5_sk_right_pane_g4

0x0003,

0xfe30,	// (0x0004e99d) ai5_sk_right_pane_g

0xa00a,	// (0x00048b77) ai5_sk_right_pane_t1

0x518f,	// (0x00043cfc) ai5_sk_middle_pane_g1

0x5197,	// (0x00043d04) ai5_sk_middle_pane_g2

0x51af,	// (0x00043d1c) ai5_sk_middle_pane_g3

0x9ffa,	// (0x00048b67) ai5_sk_middle_pane_g4

0x9fd4,	// (0x00048b41) ai5_sk_middle_pane_g5

0xa018,	// (0x00048b85) ai5_sk_middle_pane_g6

0xf129,	// (0x0004dc96) ai5_sk_middle_pane_g7

0x0006,

0xfe39,	// (0x0004e9a6) ai5_sk_middle_pane_g

0xd3a2,	// (0x0004bf0f) aid_touch_area_size_lc0_ParamLimits

0xd3a2,	// (0x0004bf0f) aid_touch_area_size_lc0

0x231f,	// (0x00040e8c) cell_hwr_candidate_pane_t1_ParamLimits

0x4cea,	// (0x00043857) aid_touch_navi_pane

0xd627,	// (0x0004c194) status_dt_navi_pane_ParamLimits

0xd627,	// (0x0004c194) status_dt_navi_pane

0xd63f,	// (0x0004c1ac) status_dt_sta_pane_ParamLimits

0xd63f,	// (0x0004c1ac) status_dt_sta_pane

0xf131,	// (0x0004dc9e) dt_sta_controll_pane

0xf13e,	// (0x0004dcab) dt_sta_indi_pane

0xf14b,	// (0x0004dcb8) dt_sta_title_pane

0x314b,	// (0x00041cb8) bg_dt_sta_indi_pane_ParamLimits

0x314b,	// (0x00041cb8) bg_dt_sta_indi_pane

0xa059,	// (0x00048bc6) dt_sta_battery_pane

0xf15d,	// (0x0004dcca) dt_sta_indi_pane_g1

0xf166,	// (0x0004dcd3) dt_sta_indi_pane_g2

0xf16f,	// (0x0004dcdc) dt_sta_indi_pane_g3

0x0002,

0x0215,	// (0x0003ed82) dt_sta_indi_pane_g

0xf178,	// (0x0004dce5) dt_sta_signal_pane

0x372e,	// (0x0004229b) bg_dt_sta_title_pane_ParamLimits

0x372e,	// (0x0004229b) bg_dt_sta_title_pane

0x6034,	// (0x00044ba1) dt_sta_title_pane_g1

0xf181,	// (0x0004dcee) dt_sta_title_pane_t1_ParamLimits

0xf181,	// (0x0004dcee) dt_sta_title_pane_t1

0x2dce,	// (0x0004193b) bg_dt_sta_control_pane

0xf196,	// (0x0004dd03) dt_sta_controll_pane_g1

0xf19f,	// (0x0004dd0c) bg_dt_sta_title_pane_g1

0xf1a8,	// (0x0004dd15) bg_dt_sta_title_pane_g2

0xf1b1,	// (0x0004dd1e) bg_dt_sta_title_pane_g3

0x0002,

0x021c,	// (0x0003ed89) bg_dt_sta_title_pane_g

0x7798,	// (0x00046305) bg_dt_sta_indi_pane_g1

0xa0c6,	// (0x00048c33) dt_sta_signal_pane_g1

0xa0ce,	// (0x00048c3b) dt_sta_signal_pane_g2

0x0001,

0xfe48,	// (0x0004e9b5) dt_sta_signal_pane_g

0xa0d6,	// (0x00048c43) dt_sta_battery_pane_g1

0xa0df,	// (0x00048c4c) dt_sta_battery_pane_t1

0x7798,	// (0x00046305) bg_dt_sta_control_pane_g1

0x3ea9,	// (0x00042a16) fep_china_uni_eep_pane

0x3eb1,	// (0x00042a1e) fep_china_uni_entry_pane_ParamLimits

0x3ec1,	// (0x00042a2e) popup_fep_china_uni_window_g1_ParamLimits

0x3ed1,	// (0x00042a3e) popup_fep_china_uni_window_g2_ParamLimits

0x3ed1,	// (0x00042a3e) popup_fep_china_uni_window_g2

0x0001,

0xf730,	// (0x0004e29d) popup_fep_china_uni_window_g_ParamLimits

0xf730,	// (0x0004e29d) popup_fep_china_uni_window_g

0xa0ee,	// (0x00048c5b) fep_china_uni_eep_pane_g1

0xa0f6,	// (0x00048c63) fep_china_uni_eep_pane_t1

0x9bed,	// (0x0004875a) aid_touch_area_size_smil_player

0x4e36,	// (0x000439a3) lc0_clock_pane

0x5016,	// (0x00043b83) status_pane_g5_ParamLimits

0x5016,	// (0x00043b83) status_pane_g5

0xce80,	// (0x0004b9ed) popup_keymap_window

0x4fd4,	// (0x00043b41) status_icon_pane

0xef96,	// (0x0004db03) cell_ai5_widget_pane_g3_ParamLimits

0xefb5,	// (0x0004db22) cell_ai5_widget_pane_g4_ParamLimits

0xefc1,	// (0x0004db2e) cell_ai5_widget_pane_g5_ParamLimits

0xefe5,	// (0x0004db52) cell_ai5_widget_pane_g8_ParamLimits

0xefe5,	// (0x0004db52) cell_ai5_widget_pane_g8

0xeff9,	// (0x0004db66) cell_ai5_widget_pane_g9_ParamLimits

0xeff9,	// (0x0004db66) cell_ai5_widget_pane_g9

0xf00d,	// (0x0004db7a) cell_ai5_widget_pane_g10_ParamLimits

0xf00d,	// (0x0004db7a) cell_ai5_widget_pane_g10

0xa105,	// (0x00048c72) status_icon_pane_g1

0x2dce,	// (0x0004193b) bg_popup_sub_pane_cp13

0xa10d,	// (0x00048c7a) popup_keymap_window_t1

0xcc8f,	// (0x0004b7fc) control_pane_g6_ParamLimits

0xcc8f,	// (0x0004b7fc) control_pane_g6

0xcc9c,	// (0x0004b809) control_pane_g7_ParamLimits

0xcc9c,	// (0x0004b809) control_pane_g7

0xcca9,	// (0x0004b816) control_pane_g8_ParamLimits

0xcca9,	// (0x0004b816) control_pane_g8

0xf131,	// (0x0004dc9e) dt_sta_controll_pane_ParamLimits

0xf13e,	// (0x0004dcab) dt_sta_indi_pane_ParamLimits

0xf14b,	// (0x0004dcb8) dt_sta_title_pane_ParamLimits

0x3666,	// (0x000421d3) aid_size_touch_scroll_bar_cale

0x12c8,	// (0x0003fe35) popup_discreet_window_ParamLimits

0x12c8,	// (0x0003fe35) popup_discreet_window

0xbd1d,	// (0x0004a88a) popup_sk_window

0x5860,	// (0x000443cd) bg_popup_sub_pane_cp28_ParamLimits

0x5860,	// (0x000443cd) bg_popup_sub_pane_cp28

0xa11b,	// (0x00048c88) popup_discreet_window_g1_ParamLimits

0xa11b,	// (0x00048c88) popup_discreet_window_g1

0xa13b,	// (0x00048ca8) popup_discreet_window_t1_ParamLimits

0xa13b,	// (0x00048ca8) popup_discreet_window_t1

0xa159,	// (0x00048cc6) popup_discreet_window_t2_ParamLimits

0xa159,	// (0x00048cc6) popup_discreet_window_t2

0x0002,

0xfe4d,	// (0x0004e9ba) popup_discreet_window_t_ParamLimits

0xfe4d,	// (0x0004e9ba) popup_discreet_window_t

0x2d64,	// (0x000418d1) popup_sk_window_g1

0x2d6e,	// (0x000418db) popup_sk_window_g2

0x0001,

0xfe54,	// (0x0004e9c1) popup_sk_window_g

0xa1ab,	// (0x00048d18) popup_sk_window_t1

0xa1b9,	// (0x00048d26) popup_sk_window_t1_copy1

0xef86,	// (0x0004daf3) cell_ai5_widget_pane_g2_ParamLimits

0xf0b9,	// (0x0004dc26) cell_ai5_widget_pane_t9_ParamLimits

0xf0b9,	// (0x0004dc26) cell_ai5_widget_pane_t9

0x2dce,	// (0x0004193b) main_fep_fshwr2_pane

0xf1ba,	// (0x0004dd27) aid_fshwr2_btn_pane

0xf1c2,	// (0x0004dd2f) aid_fshwr2_syb_pane

0xf1ca,	// (0x0004dd37) aid_fshwr2_txt_pane

0xf1d2,	// (0x0004dd3f) fshwr2_func_candi_pane

0xf1dc,	// (0x0004dd49) fshwr2_hwr_syb_pane

0xf1ea,	// (0x0004dd57) fshwr2_icf_pane

0x2dce,	// (0x0004193b) fshwr2_icf_bg_pane

0xf1f4,	// (0x0004dd61) fshwr2_icf_pane_t1_ParamLimits

0xf1f4,	// (0x0004dd61) fshwr2_icf_pane_t1

0x7798,	// (0x00046305) fshwr2_func_candi_pane_g1

0xa22c,	// (0x00048d99) fshwr2_func_candi_row_pane_ParamLimits

0xa22c,	// (0x00048d99) fshwr2_func_candi_row_pane

0xf20c,	// (0x0004dd79) cell_fshwr2_syb_pane_ParamLimits

0xf20c,	// (0x0004dd79) cell_fshwr2_syb_pane

0x7a2a,	// (0x00046597) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7a2a,	// (0x00046597) fshwr2_hwr_syb_pane_g1

0x2dce,	// (0x0004193b) bg_popup_call_pane_cp01

0xa257,	// (0x00048dc4) fshwr2_func_candi_cell_pane_ParamLimits

0xa257,	// (0x00048dc4) fshwr2_func_candi_cell_pane

0xa288,	// (0x00048df5) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa288,	// (0x00048df5) fshwr2_func_candi_cell_bg_pane

0xa2a2,	// (0x00048e0f) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xa2a2,	// (0x00048e0f) fshwr2_func_candi_cell_pane_g1

0xa2ca,	// (0x00048e37) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xa2ca,	// (0x00048e37) fshwr2_func_candi_cell_pane_t1

0x2dce,	// (0x0004193b) bg_button_pane_cp08

0x4393,	// (0x00042f00) cell_fshwr2_syb_bg_pane

0xf226,	// (0x0004dd93) cell_fshwr2_syb_bg_pane_g1

0xf22e,	// (0x0004dd9b) cell_fshwr2_syb_bg_pane_t1

0x372e,	// (0x0004229b) main_tmo_pane

0xd93f,	// (0x0004c4ac) uni_indicator_pane_g1_ParamLimits

0xd954,	// (0x0004c4c1) uni_indicator_pane_g2_ParamLimits

0xd969,	// (0x0004c4d6) uni_indicator_pane_g3_ParamLimits

0x63b6,	// (0x00044f23) uni_indicator_pane_g4_ParamLimits

0x63b6,	// (0x00044f23) uni_indicator_pane_g4

0x63ca,	// (0x00044f37) uni_indicator_pane_g5_ParamLimits

0x63ca,	// (0x00044f37) uni_indicator_pane_g5

0x63de,	// (0x00044f4b) uni_indicator_pane_g6_ParamLimits

0x63de,	// (0x00044f4b) uni_indicator_pane_g6

0xf921,	// (0x0004e48e) uni_indicator_pane_g_ParamLimits

0xe40b,	// (0x0004cf78) popup_tmo_note_window_ParamLimits

0xe40b,	// (0x0004cf78) popup_tmo_note_window

0x2dce,	// (0x0004193b) fshwr2_bg_pane

0xa2bb,	// (0x00048e28) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xa2bb,	// (0x00048e28) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe59,	// (0x0004e9c6) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe59,	// (0x0004e9c6) fshwr2_func_candi_cell_pane_g

0x7798,	// (0x00046305) bg_popup_window_pane_cp01

0xa2f4,	// (0x00048e61) bg_popup_window_pane_g1_cp01

0xa2fd,	// (0x00048e6a) bg_popup_window_pane_cp22_ParamLimits

0xa2fd,	// (0x00048e6a) bg_popup_window_pane_cp22

0xa30b,	// (0x00048e78) listscroll_tmo_link_pane_ParamLimits

0xa30b,	// (0x00048e78) listscroll_tmo_link_pane

0xa34b,	// (0x00048eb8) popup_tmo_note_window_g1_ParamLimits

0xa34b,	// (0x00048eb8) popup_tmo_note_window_g1

0xa358,	// (0x00048ec5) tmo_note_info_pane_ParamLimits

0xa358,	// (0x00048ec5) tmo_note_info_pane

0xf23d,	// (0x0004ddaa) list_tmo_note_info_pane_g1_ParamLimits

0xf23d,	// (0x0004ddaa) list_tmo_note_info_pane_g1

0xa389,	// (0x00048ef6) list_tmo_note_info_pane_g2_ParamLimits

0xa389,	// (0x00048ef6) list_tmo_note_info_pane_g2

0x0001,

0xfe5e,	// (0x0004e9cb) list_tmo_note_info_pane_g_ParamLimits

0xfe5e,	// (0x0004e9cb) list_tmo_note_info_pane_g

0xa3a5,	// (0x00048f12) list_tmo_note_info_text_pane_ParamLimits

0xa3a5,	// (0x00048f12) list_tmo_note_info_text_pane

0xa426,	// (0x00048f93) list_tmo_link_pane

0xa433,	// (0x00048fa0) scroll_pane_cp20

0xa440,	// (0x00048fad) list_single_tmo_link_pane_ParamLimits

0xa440,	// (0x00048fad) list_single_tmo_link_pane

0xa450,	// (0x00048fbd) list_single_tmo_link_pane_t1

0xa45e,	// (0x00048fcb) list_tmo_note_info_text_pane_t1_ParamLimits

0xa45e,	// (0x00048fcb) list_tmo_note_info_text_pane_t1

0xc98e,	// (0x0004b4fb) aid_size_touch_scroll_bar_cp01_ParamLimits

0xc98e,	// (0x0004b4fb) aid_size_touch_scroll_bar_cp01

0xb8d4,	// (0x0004a441) aid_size_touch_slider_marker

0xbd0d,	// (0x0004a87a) popup_settings_window_ParamLimits

0xbd0d,	// (0x0004a87a) popup_settings_window

0x0a44,	// (0x0003f5b1) popup_candi_list_indi_window

0x4cea,	// (0x00043857) aid_touch_navi_pane_ParamLimits

0x2574,	// (0x000410e1) rs_clock_indi_pane

0x257d,	// (0x000410ea) sctrl_sk_bottom_pane_ParamLimits

0x258e,	// (0x000410fb) sctrl_sk_top_pane_ParamLimits

0x2678,	// (0x000411e5) popup_fep_tooltip_window

0x9d0d,	// (0x0004887a) aid_size_cell_widget_grid_ParamLimits

0xef7a,	// (0x0004dae7) cell_ai5_widget_pane_g1_ParamLimits

0xef7a,	// (0x0004dae7) cell_ai5_widget_pane_g1

0xefcd,	// (0x0004db3a) cell_ai5_widget_pane_g6_ParamLimits

0xefd9,	// (0x0004db46) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0x01b7,	// (0x0003ed24) cell_ai5_widget_pane_g_ParamLimits

0x01b7,	// (0x0003ed24) cell_ai5_widget_pane_g

0xf0dd,	// (0x0004dc4a) cell_ai5_widget_pane_t10_ParamLimits

0xf0dd,	// (0x0004dc4a) cell_ai5_widget_pane_t10

0xf0f3,	// (0x0004dc60) grid_ai5_widget_pane_ParamLimits

0x9f83,	// (0x00048af0) cell_contacts_ai5_widget_pane_ParamLimits

0x9f83,	// (0x00048af0) cell_contacts_ai5_widget_pane

0xa16e,	// (0x00048cdb) popup_discreet_window_t3_ParamLimits

0xa16e,	// (0x00048cdb) popup_discreet_window_t3

0xa201,	// (0x00048d6e) popup_fshwr2_char_preview_window_ParamLimits

0xa201,	// (0x00048d6e) popup_fshwr2_char_preview_window

0xf254,	// (0x0004ddc1) tmo_note_info_pane_t1

0xf269,	// (0x0004ddd6) tmo_note_info_pane_t2

0xf280,	// (0x0004dded) tmo_note_info_pane_t3

0xa402,	// (0x00048f6f) tmo_note_info_pane_t4

0xa414,	// (0x00048f81) tmo_note_info_pane_t5

0x0004,

0xfe63,	// (0x0004e9d0) tmo_note_info_pane_t

0xa426,	// (0x00048f93) list_tmo_link_pane_ParamLimits

0xa433,	// (0x00048fa0) scroll_pane_cp20_ParamLimits

0x2dce,	// (0x0004193b) bg_popup_fep_char_preview_window_cp01

0xa477,	// (0x00048fe4) popup_fshwr2_char_preview_window_t1

0xa485,	// (0x00048ff2) popup_candi_list_indi_window_g1

0xa48e,	// (0x00048ffb) bg_cell_contacts_ai5_widget_pane

0xa49a,	// (0x00049007) cell_contacts_ai5_widget_pane_g1

0xa4ae,	// (0x0004901b) cell_contacts_ai5_widget_pane_g2

0xa4bd,	// (0x0004902a) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe6e,	// (0x0004e9db) cell_contacts_ai5_widget_pane_g

0xa4d0,	// (0x0004903d) cell_contacts_ai5_widget_pane_t1

0x372e,	// (0x0004229b) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf2fa,	// (0x0004de67) settings_container_pane

0x4393,	// (0x00042f00) listscroll_set_pane_copy1

0x6eab,	// (0x00045a18) scroll_pane_cp121_copy1

0xa556,	// (0x000490c3) set_content_pane_copy1

0xf306,	// (0x0004de73) aid_height_set_list_copy1_ParamLimits

0xf306,	// (0x0004de73) aid_height_set_list_copy1

0x65d6,	// (0x00045143) aid_size_parent_copy1_ParamLimits

0x65d6,	// (0x00045143) aid_size_parent_copy1

0xf312,	// (0x0004de7f) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf312,	// (0x0004de7f) button_value_adjust_pane_cp6_copy1

0x46f1,	// (0x0004325e) list_highlight_pane_cp2_copy1_ParamLimits

0x46f1,	// (0x0004325e) list_highlight_pane_cp2_copy1

0xf326,	// (0x0004de93) list_set_pane_copy1_ParamLimits

0xf326,	// (0x0004de93) list_set_pane_copy1

0xf295,	// (0x0004de02) main_pane_set_t1_copy1_ParamLimits

0xf295,	// (0x0004de02) main_pane_set_t1_copy1

0xf2cf,	// (0x0004de3c) main_pane_set_t2_copy1_ParamLimits

0xf2cf,	// (0x0004de3c) main_pane_set_t2_copy1

0xf3d3,	// (0x0004df40) main_pane_set_t3_copy1

0xf3e1,	// (0x0004df4e) main_pane_set_t4_copy1

0xf2ee,	// (0x0004de5b) set_content_pane_g1_copy1_ParamLimits

0xf2ee,	// (0x0004de5b) set_content_pane_g1_copy1

0xf3ef,	// (0x0004df5c) setting_code_pane_copy1

0xa651,	// (0x000491be) setting_slider_graphic_pane_copy1

0xa651,	// (0x000491be) setting_slider_pane_copy1

0xa651,	// (0x000491be) setting_text_pane_copy1

0xa65b,	// (0x000491c8) setting_volume_pane_copy1

0xf3f9,	// (0x0004df66) settings_code_pane_cp2_copy1

0xf401,	// (0x0004df6e) settings_code_pane_cp_copy1_ParamLimits

0xf401,	// (0x0004df6e) settings_code_pane_cp_copy1

0xf415,	// (0x0004df82) volume_set_pane_copy1

0xf41d,	// (0x0004df8a) volume_set_pane_g10_copy1

0xf425,	// (0x0004df92) volume_set_pane_g1_copy1

0xf42d,	// (0x0004df9a) volume_set_pane_g2_copy1

0xf435,	// (0x0004dfa2) volume_set_pane_g3_copy1

0xf43d,	// (0x0004dfaa) volume_set_pane_g4_copy1

0xf445,	// (0x0004dfb2) volume_set_pane_g5_copy1

0xf44d,	// (0x0004dfba) volume_set_pane_g6_copy1

0xf455,	// (0x0004dfc2) volume_set_pane_g7_copy1

0xf45d,	// (0x0004dfca) volume_set_pane_g8_copy1

0xf465,	// (0x0004dfd2) volume_set_pane_g9_copy1

0x2ec2,	// (0x00041a2f) bg_set_opt_pane_cp_copy1_ParamLimits

0x2ec2,	// (0x00041a2f) bg_set_opt_pane_cp_copy1

0xa6d8,	// (0x00049245) setting_slider_pane_t1_copy1_ParamLimits

0xa6d8,	// (0x00049245) setting_slider_pane_t1_copy1

0xf46d,	// (0x0004dfda) setting_slider_pane_t2_copy1_ParamLimits

0xf46d,	// (0x0004dfda) setting_slider_pane_t2_copy1

0xf487,	// (0x0004dff4) setting_slider_pane_t3_copy1_ParamLimits

0xf487,	// (0x0004dff4) setting_slider_pane_t3_copy1

0xf49f,	// (0x0004e00c) slider_set_pane_copy1_ParamLimits

0xf49f,	// (0x0004e00c) slider_set_pane_copy1

0x3795,	// (0x00042302) set_opt_bg_pane_g1_copy2

0x379d,	// (0x0004230a) set_opt_bg_pane_g2_copy2

0xa73e,	// (0x000492ab) set_opt_bg_pane_g3_copy2

0x37ad,	// (0x0004231a) set_opt_bg_pane_g4_copy2

0x37b5,	// (0x00042322) set_opt_bg_pane_g5_copy2

0x37bd,	// (0x0004232a) set_opt_bg_pane_g6_copy2

0xf4b5,	// (0x0004e022) set_opt_bg_pane_g7_copy2

0xa750,	// (0x000492bd) set_opt_bg_pane_g8_copy2

0xa75a,	// (0x000492c7) set_opt_bg_pane_g9_copy2

0x2d78,	// (0x000418e5) aid_size_touch_slider_mark_copy1_ParamLimits

0x2d78,	// (0x000418e5) aid_size_touch_slider_mark_copy1

0xa764,	// (0x000492d1) slider_set_pane_g1_copy1

0x2d8c,	// (0x000418f9) slider_set_pane_g2_copy1

0x1e65,	// (0x000409d2) slider_set_pane_g3_copy1_ParamLimits

0x1e65,	// (0x000409d2) slider_set_pane_g3_copy1

0x1e79,	// (0x000409e6) slider_set_pane_g4_copy1_ParamLimits

0x1e79,	// (0x000409e6) slider_set_pane_g4_copy1

0x1e91,	// (0x000409fe) slider_set_pane_g5_copy1_ParamLimits

0x1e91,	// (0x000409fe) slider_set_pane_g5_copy1

0x1e65,	// (0x000409d2) slider_set_pane_g6_copy1_ParamLimits

0x1e65,	// (0x000409d2) slider_set_pane_g6_copy1

0xc5d8,	// (0x0004b145) slider_set_pane_g7_copy1_ParamLimits

0xc5d8,	// (0x0004b145) slider_set_pane_g7_copy1

0x2de2,	// (0x0004194f) bg_set_opt_pane_cp2_copy1

0xa76d,	// (0x000492da) setting_slider_graphic_pane_g1_copy1

0xf4bd,	// (0x0004e02a) setting_slider_graphic_pane_t1_copy1

0xf4cd,	// (0x0004e03a) setting_slider_graphic_pane_t2_copy1

0xf4dd,	// (0x0004e04a) slider_set_pane_cp_copy1

0xa7a6,	// (0x00049313) input_focus_pane_cp1_copy1

0xa7af,	// (0x0004931c) list_set_text_pane_copy1

0xa7b7,	// (0x00049324) setting_text_pane_g1_copy1

0x028e,	// (0x0003edfb) set_text_pane_t1_copy1

0xa7a6,	// (0x00049313) input_focus_pane_cp2_copy1

0xa7b7,	// (0x00049324) setting_code_pane_g1_copy1

0xf4e5,	// (0x0004e052) setting_code_pane_t1_copy1

0xcb89,	// (0x0004b6f6) list_set_graphic_pane_copy1

0x2de2,	// (0x0004194f) bg_set_opt_pane_cp4_copy1

0xcb9b,	// (0x0004b708) list_set_graphic_pane_g1_copy1_ParamLimits

0xcb9b,	// (0x0004b708) list_set_graphic_pane_g1_copy1

0xf4f3,	// (0x0004e060) list_set_graphic_pane_g2_copy1

0xcbb3,	// (0x0004b720) list_set_graphic_pane_t1_copy1_ParamLimits

0xcbb3,	// (0x0004b720) list_set_graphic_pane_t1_copy1

0x7798,	// (0x00046305) rs_clock_indi_pane_g1

0xa7e8,	// (0x00049355) rs_clock_indi_pane_t1

0xa059,	// (0x00048bc6) rs_indi_pane

0xa7f6,	// (0x00049363) rs_indi_pane_g1

0xa7ff,	// (0x0004936c) rs_indi_pane_g2

0xa808,	// (0x00049375) rs_indi_pane_g3

0x0002,

0xfe75,	// (0x0004e9e2) rs_indi_pane_g

0x4393,	// (0x00042f00) bg_popup_preview_window_pane_cp03

0xa811,	// (0x0004937e) popup_fep_tooltip_window_t1

0x8421,	// (0x00046f8e) popup_note2_window_g2_ParamLimits

0x8421,	// (0x00046f8e) popup_note2_window_g2

0x0001,

0xfc5a,	// (0x0004e7c7) popup_note2_window_g_ParamLimits

0xfc5a,	// (0x0004e7c7) popup_note2_window_g

0x891c,	// (0x00047489) bg_popup_sub_pane_cp11_ParamLimits

0x8929,	// (0x00047496) cell_ai3_links_pane_g1_ParamLimits

0x8940,	// (0x000474ad) cell_ai3_links_pane_t1

0x028e,	// (0x0003edfb) set_text_pane_t1_copy1_ParamLimits

0x42a4,	// (0x00042e11) cell_graphic_popup_pane_cp2_ParamLimits

0x42a4,	// (0x00042e11) cell_graphic_popup_pane_cp2

0xa81f,	// (0x0004938c) cell_graphic_popup_pane_g1_cp2

0x3479,	// (0x00041fe6) cell_graphic_popup_pane_g2_cp2

0xa827,	// (0x00049394) cell_graphic_popup_pane_g3_cp2

0xa82f,	// (0x0004939c) cell_graphic_popup_pane_t2_cp2

0x348a,	// (0x00041ff7) grid_highlight_pane_cp3_cp2

0x3ad8,	// (0x00042645) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x372e,	// (0x0004229b) main_tmo_pane_ParamLimits

0xe3ff,	// (0x0004cf6c) popup_tmo_big_image_note_window

0xef6a,	// (0x0004dad7) cell_ai5_widget_list_pane

0xef72,	// (0x0004dadf) cell_ai5_widget_lrg_icon_pane

0xf254,	// (0x0004ddc1) tmo_note_info_pane_t1_ParamLimits

0xf269,	// (0x0004ddd6) tmo_note_info_pane_t2_ParamLimits

0xf280,	// (0x0004dded) tmo_note_info_pane_t3_ParamLimits

0xa402,	// (0x00048f6f) tmo_note_info_pane_t4_ParamLimits

0xa414,	// (0x00048f81) tmo_note_info_pane_t5_ParamLimits

0xfe63,	// (0x0004e9d0) tmo_note_info_pane_t_ParamLimits

0xf2fa,	// (0x0004de67) settings_container_pane_ParamLimits

0xa79e,	// (0x0004930b) indicator_popup_pane_cp5

0xa79e,	// (0x0004930b) indicator_popup_pane_cp6

0xcb89,	// (0x0004b6f6) list_set_graphic_pane_copy1_ParamLimits

0x2dce,	// (0x0004193b) bg_popup_window_pane_cp23

0xa83d,	// (0x000493aa) popup_tmo_big_image_note_window_g1

0xa847,	// (0x000493b4) popup_tmo_big_image_note_window_t1

0xa857,	// (0x000493c4) popup_tmo_big_image_note_window_t2

0xa867,	// (0x000493d4) popup_tmo_big_image_note_window_t3

0x0002,

0xfe7c,	// (0x0004e9e9) popup_tmo_big_image_note_window_t

0xf4fb,	// (0x0004e068) cell_ai5_widget_lrg_icon_pane_g1

0xf503,	// (0x0004e070) cell_ai5_widget_lrg_icon_pane_t1

0xf511,	// (0x0004e07e) cell_ai5_widget_list_row_pane_ParamLimits

0xf511,	// (0x0004e07e) cell_ai5_widget_list_row_pane

0xf52a,	// (0x0004e097) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf52a,	// (0x0004e097) cell_ai5_widget_list_row_pane_g1

0xf537,	// (0x0004e0a4) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf537,	// (0x0004e0a4) cell_ai5_widget_list_row_pane_t1

0xf54f,	// (0x0004e0bc) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf54f,	// (0x0004e0bc) cell_ai5_widget_list_row_pane_t2

0x0001,

0x025e,	// (0x0003edcb) cell_ai5_widget_list_row_pane_t_ParamLimits

0x025e,	// (0x0003edcb) cell_ai5_widget_list_row_pane_t

0x2dce,	// (0x0004193b) main_fep_vtchi_ss_pane

0xa8dd,	// (0x0004944a) popup_fep_char_pre_window

0xa8e5,	// (0x00049452) popup_fep_ituss_window

0xa906,	// (0x00049473) popup_fep_vkbss_window

0xa925,	// (0x00049492) grid_vkbss_keypad_pane_ParamLimits

0xa925,	// (0x00049492) grid_vkbss_keypad_pane

0xa935,	// (0x000494a2) ituss_keypad_pane

0xa94e,	// (0x000494bb) aid_vkbss_key_offset_ParamLimits

0xa94e,	// (0x000494bb) aid_vkbss_key_offset

0xa95a,	// (0x000494c7) cell_vkbss_key_pane_ParamLimits

0xa95a,	// (0x000494c7) cell_vkbss_key_pane

0xa970,	// (0x000494dd) bg_cell_vkbss_key_g1_ParamLimits

0xa970,	// (0x000494dd) bg_cell_vkbss_key_g1

0xa97c,	// (0x000494e9) cell_vkbss_key_3p_pane_ParamLimits

0xa97c,	// (0x000494e9) cell_vkbss_key_3p_pane

0xa996,	// (0x00049503) cell_vkbss_key_g1_ParamLimits

0xa996,	// (0x00049503) cell_vkbss_key_g1

0xa9b0,	// (0x0004951d) cell_vkbss_key_t1_ParamLimits

0xa9b0,	// (0x0004951d) cell_vkbss_key_t1

0xa9db,	// (0x00049548) cell_ituss_key_pane_ParamLimits

0xa9db,	// (0x00049548) cell_ituss_key_pane

0xa9eb,	// (0x00049558) bg_cell_ituss_key_g1_ParamLimits

0xa9eb,	// (0x00049558) bg_cell_ituss_key_g1

0xa9f7,	// (0x00049564) cell_ituss_key_pane_g1_ParamLimits

0xa9f7,	// (0x00049564) cell_ituss_key_pane_g1

0xaa03,	// (0x00049570) cell_ituss_key_pane_g2_ParamLimits

0xaa03,	// (0x00049570) cell_ituss_key_pane_g2

0x0001,

0xfe83,	// (0x0004e9f0) cell_ituss_key_pane_g_ParamLimits

0xfe83,	// (0x0004e9f0) cell_ituss_key_pane_g

0xaa1c,	// (0x00049589) cell_ituss_key_t1_ParamLimits

0xaa1c,	// (0x00049589) cell_ituss_key_t1

0xaa4a,	// (0x000495b7) cell_ituss_key_t2_ParamLimits

0xaa4a,	// (0x000495b7) cell_ituss_key_t2

0xaa7b,	// (0x000495e8) cell_ituss_key_t3_ParamLimits

0xaa7b,	// (0x000495e8) cell_ituss_key_t3

0xaaac,	// (0x00049619) cell_ituss_key_t4_ParamLimits

0xaaac,	// (0x00049619) cell_ituss_key_t4

0x0003,

0xfe88,	// (0x0004e9f5) cell_ituss_key_t_ParamLimits

0xfe88,	// (0x0004e9f5) cell_ituss_key_t

0xaadd,	// (0x0004964a) cell_vkbss_key_3p_pane_g1

0xaae5,	// (0x00049652) cell_vkbss_key_3p_pane_g2

0xaaed,	// (0x0004965a) cell_vkbss_key_3p_pane_g3

0x0002,

0xfe91,	// (0x0004e9fe) cell_vkbss_key_3p_pane_g

0x2dce,	// (0x0004193b) bg_popup_fep_char_preview_window_cp02

0xaaf5,	// (0x00049662) popup_fep_char_pre_window_t1

0xef60,	// (0x0004dacd) main_ai5_sk_pane

0xa48e,	// (0x00048ffb) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa49a,	// (0x00049007) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa4ae,	// (0x0004901b) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa4bd,	// (0x0004902a) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe6e,	// (0x0004e9db) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa4d0,	// (0x0004903d) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x372e,	// (0x0004229b) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf561,	// (0x0004e0ce) main_ai5_sk_pane_g1

0x568d,	// (0x000441fa) popup_query_code_window_g1

0xa8fb,	// (0x00049468) popup_fep_vkb_icf_pane

0xa90f,	// (0x0004947c) popup_fep_vtchi_icf_pane

0x372e,	// (0x0004229b) bg_icf_pane

0xab1c,	// (0x00049689) list_vkb_icf_pane

0x372e,	// (0x0004229b) bg_icf_pane_cp01

0x8c33,	// (0x000477a0) vtchi_icf_list_pane

0xab3c,	// (0x000496a9) list_vkb_icf_pane_t1_ParamLimits

0xab3c,	// (0x000496a9) list_vkb_icf_pane_t1

0xab53,	// (0x000496c0) vtchi_icf_list_pane_t1_ParamLimits

0xab53,	// (0x000496c0) vtchi_icf_list_pane_t1

0xa8e5,	// (0x00049452) popup_fep_ituss_window_ParamLimits

0xa90f,	// (0x0004947c) popup_fep_vtchi_icf_pane_ParamLimits

0xa935,	// (0x000494a2) ituss_keypad_pane_ParamLimits

0xa945,	// (0x000494b2) ituss_sks_pane

0x372e,	// (0x0004229b) bg_icf_pane_ParamLimits

0xab0d,	// (0x0004967a) icf_edit_indi_pane_ParamLimits

0xab0d,	// (0x0004967a) icf_edit_indi_pane

0xab1c,	// (0x00049689) list_vkb_icf_pane_ParamLimits

0x372e,	// (0x0004229b) bg_icf_pane_cp01_ParamLimits

0xab28,	// (0x00049695) icf_edit_indi_pane_cp01_ParamLimits

0xab28,	// (0x00049695) icf_edit_indi_pane_cp01

0xab34,	// (0x000496a1) vtchi_query_pane

0x7a2a,	// (0x00046597) icf_edit_indi_pane_g1_ParamLimits

0x7a2a,	// (0x00046597) icf_edit_indi_pane_g1

0xab6f,	// (0x000496dc) icf_edit_indi_pane_g2_ParamLimits

0xab6f,	// (0x000496dc) icf_edit_indi_pane_g2

0x0001,

0xfe98,	// (0x0004ea05) icf_edit_indi_pane_g_ParamLimits

0xfe98,	// (0x0004ea05) icf_edit_indi_pane_g

0xab7b,	// (0x000496e8) icf_edit_indi_pane_t1

0xab89,	// (0x000496f6) bg_input_focus_pane_cp042

0x365d,	// (0x000421ca) vtchi_button_pane

0xab92,	// (0x000496ff) vtchi_query_pane_t1

0xaba0,	// (0x0004970d) vtchi_query_pane_t2

0xabae,	// (0x0004971b) vtchi_query_pane_t3

0x0002,

0xfe9d,	// (0x0004ea0a) vtchi_query_pane_t

0x2dce,	// (0x0004193b) bg_button_pane_cp13

0xabbc,	// (0x00049729) vtchi_button_pane_g1

0x917b,	// (0x00047ce8) ituss_sks_pane_g1

0xabc4,	// (0x00049731) ituss_sks_pane_g2

0x0001,

0xfea4,	// (0x0004ea11) ituss_sks_pane_g

0xabcd,	// (0x0004973a) ituss_sks_pane_t1

0xabdb,	// (0x00049748) ituss_sks_pane_t2

0x0001,

0xfea9,	// (0x0004ea16) ituss_sks_pane_t

0x71fa,	// (0x00045d67) indicator_nsta_pane_cp_g1

0x7203,	// (0x00045d70) indicator_nsta_pane_cp_g2

0x720b,	// (0x00045d78) indicator_nsta_pane_cp_g3

0x7213,	// (0x00045d80) indicator_nsta_pane_cp_g4

0x721b,	// (0x00045d88) indicator_nsta_pane_cp_g5

0x7223,	// (0x00045d90) indicator_nsta_pane_cp_g6

0x0005,

0xfaa4,	// (0x0004e611) indicator_nsta_pane_cp_g

0xed9e,	// (0x0004d90b) cell_graphic2_pane_t2_ParamLimits

0xed9e,	// (0x0004d90b) cell_graphic2_pane_t2

0x0001,

0x0140,	// (0x0003ecad) cell_graphic2_pane_t_ParamLimits

0x0140,	// (0x0003ecad) cell_graphic2_pane_t
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Large

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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0003f89a };

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
0xbd29,	// (0x0004b5c3) Screen

0xbd35,	// (0x0004b5cf) application_window_ParamLimits

0xbd35,	// (0x0004b5cf) application_window

0x34b6,	// (0x00042d50) screen_g1

0xbd6d,	// (0x0004b607) area_bottom_pane_ParamLimits

0xbd6d,	// (0x0004b607) area_bottom_pane

0x0f7b,	// (0x00040815) area_top_pane_ParamLimits

0x0f7b,	// (0x00040815) area_top_pane

0x100f,	// (0x000408a9) main_pane_ParamLimits

0x100f,	// (0x000408a9) main_pane

0x34c0,	// (0x00042d5a) misc_graphics

0xd680,	// (0x0004cf1a) battery_pane_ParamLimits

0xd680,	// (0x0004cf1a) battery_pane

0x5b4b,	// (0x000453e5) bg_status_flat_pane_g8

0x5b53,	// (0x000453ed) bg_status_flat_pane_g9

0x4f3b,	// (0x000447d5) context_pane_ParamLimits

0x4f3b,	// (0x000447d5) context_pane

0xd7eb,	// (0x0004d085) navi_pane_ParamLimits

0xd7eb,	// (0x0004d085) navi_pane

0xd869,	// (0x0004d103) signal_pane_ParamLimits

0xd869,	// (0x0004d103) signal_pane

0x0008,

0xf879,	// (0x0004f113) bg_status_flat_pane_g

0xd8f9,	// (0x0004d193) status_pane_g1_ParamLimits

0xd8f9,	// (0x0004d193) status_pane_g1

0xd90f,	// (0x0004d1a9) status_pane_g2_ParamLimits

0xd90f,	// (0x0004d1a9) status_pane_g2

0x5162,	// (0x000449fc) status_pane_g3_ParamLimits

0x5162,	// (0x000449fc) status_pane_g3

0x0004,

0xf7a5,	// (0x0004f03f) status_pane_g_ParamLimits

0xf7a5,	// (0x0004f03f) status_pane_g

0xd91b,	// (0x0004d1b5) title_pane_ParamLimits

0xd91b,	// (0x0004d1b5) title_pane

0xd97e,	// (0x0004d218) uni_indicator_pane_ParamLimits

0xd97e,	// (0x0004d218) uni_indicator_pane

0x4d9d,	// (0x00044637) bg_list_pane_ParamLimits

0x4d9d,	// (0x00044637) bg_list_pane

0xd5f3,	// (0x0004ce8d) find_pane

0xc155,	// (0x0004b9ef) listscroll_app_pane_ParamLimits

0xc155,	// (0x0004b9ef) listscroll_app_pane

0x4dc9,	// (0x00044663) listscroll_form_pane

0xc165,	// (0x0004b9ff) listscroll_gen_pane_ParamLimits

0xc165,	// (0x0004b9ff) listscroll_gen_pane

0x19be,	// (0x00041258) listscroll_set_pane

0x66cd,	// (0x00045f67) main_idle_act_pane

0x4aa5,	// (0x0004433f) main_idle_trad_pane

0x4aa5,	// (0x0004433f) main_list_empty_pane

0x4de3,	// (0x0004467d) main_midp_pane

0x4def,	// (0x00044689) main_pane_g1_ParamLimits

0x4def,	// (0x00044689) main_pane_g1

0xc179,	// (0x0004ba13) popup_ai_message_window_ParamLimits

0xc179,	// (0x0004ba13) popup_ai_message_window

0xc20a,	// (0x0004baa4) popup_fep_china_uni_window_ParamLimits

0xc20a,	// (0x0004baa4) popup_fep_china_uni_window

0x1ac8,	// (0x00041362) popup_fep_japan_candidate_window_ParamLimits

0x1ac8,	// (0x00041362) popup_fep_japan_candidate_window

0x1ae8,	// (0x00041382) popup_fep_japan_predictive_window_ParamLimits

0x1ae8,	// (0x00041382) popup_fep_japan_predictive_window

0xc266,	// (0x0004bb00) popup_find_window

0xc283,	// (0x0004bb1d) popup_grid_graphic_window_ParamLimits

0xc283,	// (0x0004bb1d) popup_grid_graphic_window

0x1b4f,	// (0x000413e9) popup_large_graphic_colour_window

0xc321,	// (0x0004bbbb) popup_menu_window_ParamLimits

0xc321,	// (0x0004bbbb) popup_menu_window

0xc4f3,	// (0x0004bd8d) popup_note_image_window

0xc4b9,	// (0x0004bd53) popup_note_wait_window_ParamLimits

0xc4b9,	// (0x0004bd53) popup_note_wait_window

0xc50b,	// (0x0004bda5) popup_note_window_ParamLimits

0xc50b,	// (0x0004bda5) popup_note_window

0xc5b1,	// (0x0004be4b) popup_query_code_window_ParamLimits

0xc5b1,	// (0x0004be4b) popup_query_code_window

0x1d97,	// (0x00041631) popup_query_data_code_window_ParamLimits

0x1d97,	// (0x00041631) popup_query_data_code_window

0xc5eb,	// (0x0004be85) popup_query_data_window_ParamLimits

0xc5eb,	// (0x0004be85) popup_query_data_window

0xc66d,	// (0x0004bf07) popup_query_sat_info_window_ParamLimits

0xc66d,	// (0x0004bf07) popup_query_sat_info_window

0xc704,	// (0x0004bf9e) popup_snote_single_graphic_window_ParamLimits

0xc704,	// (0x0004bf9e) popup_snote_single_graphic_window

0xc704,	// (0x0004bf9e) popup_snote_single_text_window_ParamLimits

0xc704,	// (0x0004bf9e) popup_snote_single_text_window

0x1e1e,	// (0x000416b8) popup_sub_window_general

0x1f4e,	// (0x000417e8) popup_window_general_ParamLimits

0x1f4e,	// (0x000417e8) popup_window_general

0x4dfd,	// (0x00044697) power_save_pane

0xbfe4,	// (0x0004b87e) control_pane_g1_ParamLimits

0xbfe4,	// (0x0004b87e) control_pane_g1

0xc00d,	// (0x0004b8a7) control_pane_g2_ParamLimits

0xc00d,	// (0x0004b8a7) control_pane_g2

0x4d60,	// (0x000445fa) control_pane_g3_ParamLimits

0x4d60,	// (0x000445fa) control_pane_g3

0x0007,

0xf78d,	// (0x0004f027) control_pane_g_ParamLimits

0xf78d,	// (0x0004f027) control_pane_g

0xc04e,	// (0x0004b8e8) control_pane_t1_ParamLimits

0xc04e,	// (0x0004b8e8) control_pane_t1

0xc0ac,	// (0x0004b946) control_pane_t2_ParamLimits

0xc0ac,	// (0x0004b946) control_pane_t2

0x0002,

0xf79e,	// (0x0004f038) control_pane_t_ParamLimits

0xf79e,	// (0x0004f038) control_pane_t

0xd525,	// (0x0004cdbf) navi_navi_volume_pane_cp1

0xd52d,	// (0x0004cdc7) status_small_icon_pane

0x4c95,	// (0x0004452f) status_small_pane_g1_ParamLimits

0x4c95,	// (0x0004452f) status_small_pane_g1

0xd535,	// (0x0004cdcf) status_small_pane_g2_ParamLimits

0xd535,	// (0x0004cdcf) status_small_pane_g2

0xd541,	// (0x0004cddb) status_small_pane_g3_ParamLimits

0xd541,	// (0x0004cddb) status_small_pane_g3

0xd54d,	// (0x0004cde7) status_small_pane_g4_ParamLimits

0xd54d,	// (0x0004cde7) status_small_pane_g4

0xd559,	// (0x0004cdf3) status_small_pane_g5_ParamLimits

0xd559,	// (0x0004cdf3) status_small_pane_g5

0xd567,	// (0x0004ce01) status_small_pane_g6_ParamLimits

0xd567,	// (0x0004ce01) status_small_pane_g6

0x0007,

0xf77c,	// (0x0004f016) status_small_pane_g_ParamLimits

0xf77c,	// (0x0004f016) status_small_pane_g

0xd596,	// (0x0004ce30) status_small_pane_t1

0xd5b8,	// (0x0004ce52) status_small_wait_pane_ParamLimits

0xd5b8,	// (0x0004ce52) status_small_wait_pane

0xd3cc,	// (0x0004cc66) aid_levels_signal_ParamLimits

0xd3cc,	// (0x0004cc66) aid_levels_signal

0xd3e4,	// (0x0004cc7e) signal_pane_g1_ParamLimits

0xd3e4,	// (0x0004cc7e) signal_pane_g1

0xd3ff,	// (0x0004cc99) signal_pane_g2_ParamLimits

0xd3ff,	// (0x0004cc99) signal_pane_g2

0x0003,

0xf70d,	// (0x0004efa7) signal_pane_g_ParamLimits

0xf70d,	// (0x0004efa7) signal_pane_g

0x4579,	// (0x00043e13) context_pane_g1

0xbf4b,	// (0x0004b7e5) title_pane_g1

0xcf67,	// (0x0004c801) title_pane_t1

0x3568,	// (0x00042e02) title_pane_t2

0x358e,	// (0x00042e28) title_pane_t3

0x0002,

0xf557,	// (0x0004edf1) title_pane_t

0xd9a6,	// (0x0004d240) aid_levels_battery_ParamLimits

0xd9a6,	// (0x0004d240) aid_levels_battery

0xd9c2,	// (0x0004d25c) battery_pane_g1_ParamLimits

0xd9c2,	// (0x0004d25c) battery_pane_g1

0xd9df,	// (0x0004d279) battery_pane_g2_ParamLimits

0xd9df,	// (0x0004d279) battery_pane_g2

0x0001,

0xf7b0,	// (0x0004f04a) battery_pane_g_ParamLimits

0xf7b0,	// (0x0004f04a) battery_pane_g

0xdbae,	// (0x0004d448) uni_indicator_pane_g1

0xdbc4,	// (0x0004d45e) uni_indicator_pane_g2

0xdbda,	// (0x0004d474) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x0004f1bb) uni_indicator_pane_g

0x4917,	// (0x000441b1) navi_icon_pane_ParamLimits

0x4917,	// (0x000441b1) navi_icon_pane

0x4855,	// (0x000440ef) navi_midp_pane

0x4933,	// (0x000441cd) navi_navi_pane

0x493d,	// (0x000441d7) navi_text_pane_ParamLimits

0x493d,	// (0x000441d7) navi_text_pane

0x34b6,	// (0x00042d50) status_small_wait_pane_g1

0x39bd,	// (0x00043257) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x0004f1b6) status_small_wait_pane_g

0x61a6,	// (0x00045a40) navi_navi_icon_text_pane

0x61ae,	// (0x00045a48) navi_navi_pane_g1_ParamLimits

0x61ae,	// (0x00045a48) navi_navi_pane_g1

0x61c0,	// (0x00045a5a) navi_navi_pane_g2_ParamLimits

0x61c0,	// (0x00045a5a) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x0004f184) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x0004f184) navi_navi_pane_g

0x61d2,	// (0x00045a6c) navi_navi_tabs_pane

0x61db,	// (0x00045a75) navi_navi_text_pane

0x61a6,	// (0x00045a40) navi_navi_volume_pane

0x6182,	// (0x00045a1c) navi_text_pane_t1

0x6176,	// (0x00045a10) navi_icon_pane_g1

0x60c9,	// (0x00045963) navi_navi_text_pane_t1

0x2206,	// (0x00041aa0) navi_navi_volume_pane_g1

0x220e,	// (0x00041aa8) volume_small_pane

0x602f,	// (0x000458c9) navi_navi_icon_text_pane_g1

0x6037,	// (0x000458d1) navi_navi_icon_text_pane_t1

0x4933,	// (0x000441cd) navi_tabs_2_long_pane

0x4933,	// (0x000441cd) navi_tabs_2_pane

0x4933,	// (0x000441cd) navi_tabs_3_long_pane

0x4933,	// (0x000441cd) navi_tabs_3_pane

0x4933,	// (0x000441cd) navi_tabs_4_pane

0x21e6,	// (0x00041a80) tabs_2_active_pane_ParamLimits

0x21e6,	// (0x00041a80) tabs_2_active_pane

0x21f6,	// (0x00041a90) tabs_2_passive_pane_ParamLimits

0x21f6,	// (0x00041a90) tabs_2_passive_pane

0x21b4,	// (0x00041a4e) tabs_3_active_pane_ParamLimits

0x21b4,	// (0x00041a4e) tabs_3_active_pane

0x21c4,	// (0x00041a5e) tabs_3_passive_pane_ParamLimits

0x21c4,	// (0x00041a5e) tabs_3_passive_pane

0x21d5,	// (0x00041a6f) tabs_3_passive_pane_cp_ParamLimits

0x21d5,	// (0x00041a6f) tabs_3_passive_pane_cp

0x2170,	// (0x00041a0a) tabs_4_active_pane_ParamLimits

0x2170,	// (0x00041a0a) tabs_4_active_pane

0x2181,	// (0x00041a1b) tabs_4_passive_pane_ParamLimits

0x2181,	// (0x00041a1b) tabs_4_passive_pane

0x2192,	// (0x00041a2c) tabs_4_passive_pane_cp_ParamLimits

0x2192,	// (0x00041a2c) tabs_4_passive_pane_cp

0x21a3,	// (0x00041a3d) tabs_4_passive_pane_cp2_ParamLimits

0x21a3,	// (0x00041a3d) tabs_4_passive_pane_cp2

0x214c,	// (0x000419e6) tabs_2_long_active_pane_ParamLimits

0x214c,	// (0x000419e6) tabs_2_long_active_pane

0x215e,	// (0x000419f8) tabs_2_long_passive_pane_ParamLimits

0x215e,	// (0x000419f8) tabs_2_long_passive_pane

0x210d,	// (0x000419a7) tabs_3_long_active_pane_ParamLimits

0x210d,	// (0x000419a7) tabs_3_long_active_pane

0x2120,	// (0x000419ba) tabs_3_long_passive_pane_ParamLimits

0x2120,	// (0x000419ba) tabs_3_long_passive_pane

0x2139,	// (0x000419d3) tabs_3_long_passive_pane_cp_ParamLimits

0x2139,	// (0x000419d3) tabs_3_long_passive_pane_cp

0x20b3,	// (0x0004194d) volume_small_pane_g1

0x20bc,	// (0x00041956) volume_small_pane_g2

0x20c5,	// (0x0004195f) volume_small_pane_g3

0x20ce,	// (0x00041968) volume_small_pane_g4

0x20d7,	// (0x00041971) volume_small_pane_g5

0x20e0,	// (0x0004197a) volume_small_pane_g6

0x20e9,	// (0x00041983) volume_small_pane_g7

0x20f2,	// (0x0004198c) volume_small_pane_g8

0x20fb,	// (0x00041995) volume_small_pane_g9

0x2104,	// (0x0004199e) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x0004f150) volume_small_pane_g

0x381b,	// (0x000430b5) bg_active_tab_pane_cp2_ParamLimits

0x381b,	// (0x000430b5) bg_active_tab_pane_cp2

0x35ae,	// (0x00042e48) tabs_3_active_pane_g1

0xcff3,	// (0x0004c88d) tabs_3_active_pane_t1

0x381b,	// (0x000430b5) bg_passive_tab_pane_cp2_ParamLimits

0x381b,	// (0x000430b5) bg_passive_tab_pane_cp2

0x35ae,	// (0x00042e48) tabs_3_passive_pane_g1

0xcff3,	// (0x0004c88d) tabs_3_passive_pane_t1

0x381b,	// (0x000430b5) bg_active_tab_pane_cp3_ParamLimits

0x381b,	// (0x000430b5) bg_active_tab_pane_cp3

0x35c8,	// (0x00042e62) tabs_4_active_pane_g1

0xd005,	// (0x0004c89f) tabs_4_active_pane_t1

0x381b,	// (0x000430b5) bg_passive_tab_pane_cp3_ParamLimits

0x381b,	// (0x000430b5) bg_passive_tab_pane_cp3

0x35c8,	// (0x00042e62) tabs_4_1_passive_pane_g1

0xd005,	// (0x0004c89f) tabs_4_1_passive_pane_t1

0x4de3,	// (0x0004467d) list_highlight_pane_cp2

0xdc62,	// (0x0004d4fc) list_set_pane_ParamLimits

0xdc62,	// (0x0004d4fc) list_set_pane

0xdcfc,	// (0x0004d596) main_pane_set_t1_ParamLimits

0xdcfc,	// (0x0004d596) main_pane_set_t1

0xdd1c,	// (0x0004d5b6) main_pane_set_t2_ParamLimits

0xdd1c,	// (0x0004d5b6) main_pane_set_t2

0xdd30,	// (0x0004d5ca) main_pane_set_t3_ParamLimits

0xdd30,	// (0x0004d5ca) main_pane_set_t3

0xdd42,	// (0x0004d5dc) main_pane_set_t4_ParamLimits

0xdd42,	// (0x0004d5dc) main_pane_set_t4

0x0003,

0xf986,	// (0x0004f220) main_pane_set_t_ParamLimits

0xf986,	// (0x0004f220) main_pane_set_t

0xdd54,	// (0x0004d5ee) setting_code_pane

0xdd5e,	// (0x0004d5f8) setting_slider_graphic_pane

0xdd5e,	// (0x0004d5f8) setting_slider_pane

0xdd5e,	// (0x0004d5f8) setting_text_pane

0xdd5e,	// (0x0004d5f8) setting_volume_pane

0x125e,	// (0x00040af8) volume_set_pane

0x35a0,	// (0x00042e3a) bg_set_opt_pane_cp

0x1266,	// (0x00040b00) setting_slider_pane_t1

0x127f,	// (0x00040b19) setting_slider_pane_t2

0x1299,	// (0x00040b33) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0004edf8) setting_slider_pane_t

0x12b1,	// (0x00040b4b) slider_set_pane

0x34c0,	// (0x00042d5a) bg_set_opt_pane_cp2

0x35e2,	// (0x00042e7c) setting_slider_graphic_pane_g1

0x12c7,	// (0x00040b61) setting_slider_graphic_pane_t1

0x12d7,	// (0x00040b71) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0004edff) setting_slider_graphic_pane_t

0x12e7,	// (0x00040b81) slider_set_pane_cp

0x34c0,	// (0x00042d5a) input_focus_pane_cp1

0x66b4,	// (0x00045f4e) list_set_text_pane

0x34b6,	// (0x00042d50) setting_text_pane_g1

0x34c0,	// (0x00042d5a) input_focus_pane_cp2

0x34b6,	// (0x00042d50) setting_code_pane_g1

0x35eb,	// (0x00042e85) setting_code_pane_t1

0xf535,	// (0x0004edcf) set_text_pane_t1_ParamLimits

0xf535,	// (0x0004edcf) set_text_pane_t1

0x3e6a,	// (0x00043704) set_opt_bg_pane_g1

0x3e72,	// (0x0004370c) set_opt_bg_pane_g2

0x668e,	// (0x00045f28) set_opt_bg_pane_g3

0x3e82,	// (0x0004371c) set_opt_bg_pane_g4

0x3e8a,	// (0x00043724) set_opt_bg_pane_g5

0x3e92,	// (0x0004372c) set_opt_bg_pane_g6

0x6698,	// (0x00045f32) set_opt_bg_pane_g7

0x66a0,	// (0x00045f3a) set_opt_bg_pane_g8

0x66aa,	// (0x00045f44) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x0004f20d) set_opt_bg_pane_g

0x6681,	// (0x00045f1b) slider_set_pane_g1

0x227b,	// (0x00041b15) slider_set_pane_g2

0x0006,

0xf964,	// (0x0004f1fe) slider_set_pane_g

0x2217,	// (0x00041ab1) volume_set_pane_g1

0x221f,	// (0x00041ab9) volume_set_pane_g2

0x2227,	// (0x00041ac1) volume_set_pane_g3

0x222f,	// (0x00041ac9) volume_set_pane_g4

0x2237,	// (0x00041ad1) volume_set_pane_g5

0x223f,	// (0x00041ad9) volume_set_pane_g6

0x2247,	// (0x00041ae1) volume_set_pane_g7

0x224f,	// (0x00041ae9) volume_set_pane_g8

0x2257,	// (0x00041af1) volume_set_pane_g9

0x225f,	// (0x00041af9) volume_set_pane_g10

0x0009,

0xf93c,	// (0x0004f1d6) volume_set_pane_g

0xd017,	// (0x0004c8b1) indicator_pane_ParamLimits

0xd017,	// (0x0004c8b1) indicator_pane

0xd03f,	// (0x0004c8d9) main_idle_pane_g2_ParamLimits

0xd03f,	// (0x0004c8d9) main_idle_pane_g2

0xd077,	// (0x0004c911) main_pane_idle_g1_ParamLimits

0xd077,	// (0x0004c911) main_pane_idle_g1

0x363a,	// (0x00042ed4) popup_clock_digital_analogue_window_ParamLimits

0x363a,	// (0x00042ed4) popup_clock_digital_analogue_window

0xd09e,	// (0x0004c938) soft_indicator_pane_ParamLimits

0xd09e,	// (0x0004c938) soft_indicator_pane

0xd0b8,	// (0x0004c952) wallpaper_pane_ParamLimits

0xd0b8,	// (0x0004c952) wallpaper_pane

0x34b6,	// (0x00042d50) wallpaper_pane_g1

0xd0ca,	// (0x0004c964) indicator_pane_g1_ParamLimits

0xd0ca,	// (0x0004c964) indicator_pane_g1

0x6a63,	// (0x000462fd) navi_navi_icon_text_pane_srt_g1

0x368c,	// (0x00042f26) soft_indicator_pane_t1

0x36a6,	// (0x00042f40) aid_ps_area_pane

0xd0e0,	// (0x0004c97a) aid_ps_clock_pane

0x36c5,	// (0x00042f5f) aid_ps_indicator_pane

0x36d1,	// (0x00042f6b) indicator_ps_pane_ParamLimits

0x36d1,	// (0x00042f6b) indicator_ps_pane

0x36e0,	// (0x00042f7a) power_save_pane_g1_ParamLimits

0x36e0,	// (0x00042f7a) power_save_pane_g1

0x36ec,	// (0x00042f86) power_save_pane_g2_ParamLimits

0x36ec,	// (0x00042f86) power_save_pane_g2

0x0e6f,	// (0x00040709) aid_navinavi_width_pane

0x36a6,	// (0x00042f40) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0004ee04) power_save_pane_g_ParamLimits

0xf56a,	// (0x0004ee04) power_save_pane_g

0x36fa,	// (0x00042f94) power_save_pane_t1_ParamLimits

0x36fa,	// (0x00042f94) power_save_pane_t1

0xd0e0,	// (0x0004c97a) aid_ps_clock_pane_ParamLimits

0x36c5,	// (0x00042f5f) aid_ps_indicator_pane_ParamLimits

0x370c,	// (0x00042fa6) power_save_pane_t4_ParamLimits

0x370c,	// (0x00042fa6) power_save_pane_t4

0x0001,

0xf56f,	// (0x0004ee09) power_save_pane_t_ParamLimits

0xf56f,	// (0x0004ee09) power_save_pane_t

0x3736,	// (0x00042fd0) power_save_t3_ParamLimits

0x3736,	// (0x00042fd0) power_save_t3

0x3721,	// (0x00042fbb) power_save_t2_ParamLimits

0x3721,	// (0x00042fbb) power_save_t2

0x374b,	// (0x00042fe5) indicator_ps_pane_g1

0xd0ee,	// (0x0004c988) ai_gene_pane_ParamLimits

0xd0ee,	// (0x0004c988) ai_gene_pane

0xd105,	// (0x0004c99f) ai_links_pane_ParamLimits

0xd105,	// (0x0004c99f) ai_links_pane

0xd11d,	// (0x0004c9b7) indicator_pane_cp1_ParamLimits

0xd11d,	// (0x0004c9b7) indicator_pane_cp1

0xd12c,	// (0x0004c9c6) main_pane_idle_g1_cp_ParamLimits

0xd12c,	// (0x0004c9c6) main_pane_idle_g1_cp

0x3784,	// (0x0004301e) popup_ai_links_title_window

0xd144,	// (0x0004c9de) soft_indicator_pane_cp1_ParamLimits

0xd144,	// (0x0004c9de) soft_indicator_pane_cp1

0x646f,	// (0x00045d09) ai_links_pane_g1

0x6478,	// (0x00045d12) grid_ai_links_pane

0xdba5,	// (0x0004d43f) ai_gene_pane_1

0x645d,	// (0x00045cf7) ai_gene_pane_2

0x6466,	// (0x00045d00) list_highlight_pane_cp4

0xdb81,	// (0x0004d41b) cell_ai_link_pane_ParamLimits

0xdb81,	// (0x0004d41b) cell_ai_link_pane

0x642e,	// (0x00045cc8) cell_ai_link_pane_g1

0x39bd,	// (0x00043257) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x0004f1b1) cell_ai_link_pane_g

0x34c0,	// (0x00042d5a) grid_highlight_cp2

0x34c0,	// (0x00042d5a) bg_popup_sub_pane_cp1

0x37a7,	// (0x00043041) popup_ai_links_title_window_t1

0x637c,	// (0x00045c16) ai_gene_pane_1_g1_ParamLimits

0x637c,	// (0x00045c16) ai_gene_pane_1_g1

0x6388,	// (0x00045c22) ai_gene_pane_1_g2_ParamLimits

0x6388,	// (0x00045c22) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x0004f1a7) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x0004f1a7) ai_gene_pane_1_g

0x6395,	// (0x00045c2f) ai_gene_pane_1_t1_ParamLimits

0x6395,	// (0x00045c2f) ai_gene_pane_1_t1

0x63c9,	// (0x00045c63) grid_ai_soft_ind_pane

0x6367,	// (0x00045c01) ai_gene_pane_2_t1_ParamLimits

0x6367,	// (0x00045c01) ai_gene_pane_2_t1

0xd158,	// (0x0004c9f2) main_pane_empty_t1_ParamLimits

0xd158,	// (0x0004c9f2) main_pane_empty_t1

0xd170,	// (0x0004ca0a) main_pane_empty_t2_ParamLimits

0xd170,	// (0x0004ca0a) main_pane_empty_t2

0xd185,	// (0x0004ca1f) main_pane_empty_t3_ParamLimits

0xd185,	// (0x0004ca1f) main_pane_empty_t3

0xd197,	// (0x0004ca31) main_pane_empty_t4_ParamLimits

0xd197,	// (0x0004ca31) main_pane_empty_t4

0xd1a9,	// (0x0004ca43) main_pane_empty_t5_ParamLimits

0xd1a9,	// (0x0004ca43) main_pane_empty_t5

0x0004,

0xf574,	// (0x0004ee0e) main_pane_empty_t_ParamLimits

0xf574,	// (0x0004ee0e) main_pane_empty_t

0x3ebb,	// (0x00043755) bg_popup_window_pane_ParamLimits

0x3ebb,	// (0x00043755) bg_popup_window_pane

0x60d7,	// (0x00045971) find_popup_pane_cp2_ParamLimits

0x60d7,	// (0x00045971) find_popup_pane_cp2

0x60e3,	// (0x0004597d) heading_pane_ParamLimits

0x60e3,	// (0x0004597d) heading_pane

0x34c0,	// (0x00042d5a) bg_popup_sub_pane

0xdb02,	// (0x0004d39c) bg_popup_window_pane_g1_ParamLimits

0xdb02,	// (0x0004d39c) bg_popup_window_pane_g1

0xdb11,	// (0x0004d3ab) bg_popup_window_pane_g2_ParamLimits

0xdb11,	// (0x0004d3ab) bg_popup_window_pane_g2

0xdb1d,	// (0x0004d3b7) bg_popup_window_pane_g3_ParamLimits

0xdb1d,	// (0x0004d3b7) bg_popup_window_pane_g3

0xdb29,	// (0x0004d3c3) bg_popup_window_pane_g4_ParamLimits

0xdb29,	// (0x0004d3c3) bg_popup_window_pane_g4

0xdb38,	// (0x0004d3d2) bg_popup_window_pane_g5_ParamLimits

0xdb38,	// (0x0004d3d2) bg_popup_window_pane_g5

0xdb48,	// (0x0004d3e2) bg_popup_window_pane_g6_ParamLimits

0xdb48,	// (0x0004d3e2) bg_popup_window_pane_g6

0xdb54,	// (0x0004d3ee) bg_popup_window_pane_g7_ParamLimits

0xdb54,	// (0x0004d3ee) bg_popup_window_pane_g7

0xdb63,	// (0x0004d3fd) bg_popup_window_pane_g8_ParamLimits

0xdb63,	// (0x0004d3fd) bg_popup_window_pane_g8

0xdb72,	// (0x0004d40c) bg_popup_window_pane_g9_ParamLimits

0xdb72,	// (0x0004d40c) bg_popup_window_pane_g9

0x60bd,	// (0x00045957) bg_popup_window_pane_g10_ParamLimits

0x60bd,	// (0x00045957) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x0004f16f) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x0004f16f) bg_popup_window_pane_g

0x5fe6,	// (0x00045880) bg_popup_heading_pane_ParamLimits

0x5fe6,	// (0x00045880) bg_popup_heading_pane

0x2399,	// (0x00041c33) tabs_4_passive_pane_cp_srt_ParamLimits

0x2399,	// (0x00041c33) tabs_4_passive_pane_cp_srt

0x23ab,	// (0x00041c45) tabs_4_passive_pane_srt_ParamLimits

0x5ffa,	// (0x00045894) heading_pane_g2

0x23ab,	// (0x00041c45) tabs_4_passive_pane_srt

0x5361,	// (0x00044bfb) bg_passive_tab_pane_cp3_srt_ParamLimits

0x5361,	// (0x00044bfb) bg_passive_tab_pane_cp3_srt

0x6002,	// (0x0004589c) heading_pane_t1_ParamLimits

0x6002,	// (0x0004589c) heading_pane_t1

0x6019,	// (0x000458b3) heading_pane_t2_ParamLimits

0x6019,	// (0x000458b3) heading_pane_t2

0x0001,

0xf8d0,	// (0x0004f16a) heading_pane_t_ParamLimits

0xf8d0,	// (0x0004f16a) heading_pane_t

0x5b13,	// (0x000453ad) bg_popup_heading_pane_g1

0x5bc2,	// (0x0004545c) bg_popup_heading_pane_g2

0x5bcc,	// (0x00045466) bg_popup_heading_pane_g3

0x5bd6,	// (0x00045470) bg_popup_heading_pane_g4

0x5be0,	// (0x0004547a) bg_popup_heading_pane_g5

0x5bea,	// (0x00045484) bg_popup_heading_pane_g6

0x5bf2,	// (0x0004548c) bg_popup_heading_pane_g7

0x5bfa,	// (0x00045494) bg_popup_heading_pane_g8

0x5c04,	// (0x0004549e) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x0004f126) bg_popup_heading_pane_g

0x52ed,	// (0x00044b87) bg_popup_sub_pane_g1

0x52f5,	// (0x00044b8f) bg_popup_sub_pane_g2

0x52fd,	// (0x00044b97) bg_popup_sub_pane_g3

0x5305,	// (0x00044b9f) bg_popup_sub_pane_g4

0x530d,	// (0x00044ba7) bg_popup_sub_pane_g5

0x5315,	// (0x00044baf) bg_popup_sub_pane_g6

0x531d,	// (0x00044bb7) bg_popup_sub_pane_g7

0x5325,	// (0x00044bbf) bg_popup_sub_pane_g8

0x532d,	// (0x00044bc7) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x0004f100) bg_popup_sub_pane_g

0x381b,	// (0x000430b5) bg_popup_window_pane_cp5_ParamLimits

0x381b,	// (0x000430b5) bg_popup_window_pane_cp5

0x3837,	// (0x000430d1) popup_note_window_g1_ParamLimits

0x3837,	// (0x000430d1) popup_note_window_g1

0x3843,	// (0x000430dd) popup_note_window_t1_ParamLimits

0x3843,	// (0x000430dd) popup_note_window_t1

0x3859,	// (0x000430f3) popup_note_window_t2_ParamLimits

0x3859,	// (0x000430f3) popup_note_window_t2

0x386f,	// (0x00043109) popup_note_window_t3_ParamLimits

0x386f,	// (0x00043109) popup_note_window_t3

0x3885,	// (0x0004311f) popup_note_window_t4_ParamLimits

0x3885,	// (0x0004311f) popup_note_window_t4

0x38ad,	// (0x00043147) popup_note_window_t5_ParamLimits

0x38ad,	// (0x00043147) popup_note_window_t5

0x0004,

0xf57f,	// (0x0004ee19) popup_note_window_t_ParamLimits

0xf57f,	// (0x0004ee19) popup_note_window_t

0x38d1,	// (0x0004316b) bg_popup_window_pane_cp6_ParamLimits

0x38d1,	// (0x0004316b) bg_popup_window_pane_cp6

0x5a83,	// (0x0004531d) popup_note_image_window_g1_ParamLimits

0x5a83,	// (0x0004531d) popup_note_image_window_g1

0x5a8f,	// (0x00045329) popup_note_image_window_g2_ParamLimits

0x5a8f,	// (0x00045329) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x0004f0f4) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x0004f0f4) popup_note_image_window_g

0x5aa8,	// (0x00045342) popup_note_image_window_t1_ParamLimits

0x5aa8,	// (0x00045342) popup_note_image_window_t1

0x5acd,	// (0x00045367) popup_note_image_window_t2_ParamLimits

0x5acd,	// (0x00045367) popup_note_image_window_t2

0x5ae6,	// (0x00045380) popup_note_image_window_t3_ParamLimits

0x5ae6,	// (0x00045380) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x0004f0f9) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x0004f0f9) popup_note_image_window_t

0x5944,	// (0x000451de) bg_popup_window_pane_cp7_ParamLimits

0x5944,	// (0x000451de) bg_popup_window_pane_cp7

0x5974,	// (0x0004520e) popup_note_wait_window_g1_ParamLimits

0x5974,	// (0x0004520e) popup_note_wait_window_g1

0x5980,	// (0x0004521a) popup_note_wait_window_g2_ParamLimits

0x5980,	// (0x0004521a) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x0004f0e2) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x0004f0e2) popup_note_wait_window_g

0x5998,	// (0x00045232) popup_note_wait_window_t1_ParamLimits

0x5998,	// (0x00045232) popup_note_wait_window_t1

0x59bf,	// (0x00045259) popup_note_wait_window_t2_ParamLimits

0x59bf,	// (0x00045259) popup_note_wait_window_t2

0x59dc,	// (0x00045276) popup_note_wait_window_t3_ParamLimits

0x59dc,	// (0x00045276) popup_note_wait_window_t3

0x59ef,	// (0x00045289) popup_note_wait_window_t4_ParamLimits

0x59ef,	// (0x00045289) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x0004f0e9) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x0004f0e9) popup_note_wait_window_t

0x5a14,	// (0x000452ae) wait_bar_pane_ParamLimits

0x5a14,	// (0x000452ae) wait_bar_pane

0x34c0,	// (0x00042d5a) wait_anim_pane

0x34c0,	// (0x00042d5a) wait_border_pane

0x34b6,	// (0x00042d50) wait_anim_pane_g1

0x34b6,	// (0x00042d50) wait_anim_pane_g2

0x0001,

0xf708,	// (0x0004efa2) wait_anim_pane_g

0x58e8,	// (0x00045182) wait_border_pane_g1

0x58f3,	// (0x0004518d) wait_border_pane_g2

0x58fc,	// (0x00045196) wait_border_pane_g3

0x0002,

0xf841,	// (0x0004f0db) wait_border_pane_g

0x5753,	// (0x00044fed) bg_popup_window_pane_cp16_ParamLimits

0x5753,	// (0x00044fed) bg_popup_window_pane_cp16

0x5853,	// (0x000450ed) indicator_popup_pane_cp4_ParamLimits

0x5853,	// (0x000450ed) indicator_popup_pane_cp4

0x5867,	// (0x00045101) popup_query_data_window_t1_ParamLimits

0x5867,	// (0x00045101) popup_query_data_window_t1

0x5879,	// (0x00045113) popup_query_data_window_t2_ParamLimits

0x5879,	// (0x00045113) popup_query_data_window_t2

0x5892,	// (0x0004512c) popup_query_data_window_t3_ParamLimits

0x5892,	// (0x0004512c) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x0004f0d4) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x0004f0d4) popup_query_data_window_t

0x58ac,	// (0x00045146) query_popup_data_pane_ParamLimits

0x58ac,	// (0x00045146) query_popup_data_pane

0x58c0,	// (0x0004515a) query_popup_data_pane_cp1_ParamLimits

0x58c0,	// (0x0004515a) query_popup_data_pane_cp1

0x5753,	// (0x00044fed) bg_popup_window_pane_cp10_ParamLimits

0x5753,	// (0x00044fed) bg_popup_window_pane_cp10

0x5785,	// (0x0004501f) indicator_popup_pane_ParamLimits

0x5785,	// (0x0004501f) indicator_popup_pane

0x57a7,	// (0x00045041) popup_query_code_window_t1_ParamLimits

0x57a7,	// (0x00045041) popup_query_code_window_t1

0x57c1,	// (0x0004505b) popup_query_code_window_t2_ParamLimits

0x57c1,	// (0x0004505b) popup_query_code_window_t2

0x580a,	// (0x000450a4) popup_query_code_window_t3_ParamLimits

0x580a,	// (0x000450a4) popup_query_code_window_t3

0x0002,

0xf833,	// (0x0004f0cd) popup_query_code_window_t_ParamLimits

0xf833,	// (0x0004f0cd) popup_query_code_window_t

0x5839,	// (0x000450d3) query_popup_pane_ParamLimits

0x5839,	// (0x000450d3) query_popup_pane

0x38d1,	// (0x0004316b) bg_popup_window_pane_cp15_ParamLimits

0x38d1,	// (0x0004316b) bg_popup_window_pane_cp15

0x38ef,	// (0x00043189) indicator_popup_pane_cp1_ParamLimits

0x38ef,	// (0x00043189) indicator_popup_pane_cp1

0x3902,	// (0x0004319c) indicator_popup_pane_cp2_ParamLimits

0x3902,	// (0x0004319c) indicator_popup_pane_cp2

0x3915,	// (0x000431af) popup_query_data_code_window_g1_ParamLimits

0x3915,	// (0x000431af) popup_query_data_code_window_g1

0x3928,	// (0x000431c2) popup_query_data_code_window_t1_ParamLimits

0x3928,	// (0x000431c2) popup_query_data_code_window_t1

0x393a,	// (0x000431d4) popup_query_data_code_window_t2_ParamLimits

0x393a,	// (0x000431d4) popup_query_data_code_window_t2

0x394c,	// (0x000431e6) popup_query_data_code_window_t3_ParamLimits

0x394c,	// (0x000431e6) popup_query_data_code_window_t3

0x3962,	// (0x000431fc) popup_query_data_code_window_t4_ParamLimits

0x3962,	// (0x000431fc) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0004ee24) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0004ee24) popup_query_data_code_window_t

0x1fc4,	// (0x0004185e) list_single_midp_graphic_pane_g3

0x397a,	// (0x00043214) query_popup_data_pane_cp2_ParamLimits

0x398d,	// (0x00043227) query_popup_pane_cp2_ParamLimits

0x398d,	// (0x00043227) query_popup_pane_cp2

0x34c0,	// (0x00042d5a) bg_popup_window_pane_cp11

0x574b,	// (0x00044fe5) heading_pane_cp5

0x3a78,	// (0x00043312) listscroll_popup_info_pane

0x34c0,	// (0x00042d5a) input_focus_pane_cp3

0x39a0,	// (0x0004323a) query_popup_pane_t1

0x39ae,	// (0x00043248) list_popup_info_pane_ParamLimits

0x39ae,	// (0x00043248) list_popup_info_pane

0x39bd,	// (0x00043257) listscroll_popup_info_pane_g1

0x39c5,	// (0x0004325f) scroll_pane_cp7

0x39cf,	// (0x00043269) popup_info_list_pane_t1_ParamLimits

0x39cf,	// (0x00043269) popup_info_list_pane_t1

0x39e9,	// (0x00043283) popup_info_list_pane_t2_ParamLimits

0x39e9,	// (0x00043283) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0004ee2d) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0004ee2d) popup_info_list_pane_t

0x34c0,	// (0x00042d5a) bg_popup_window_pane_cp12

0x6a7d,	// (0x00046317) find_popup_pane

0x35a0,	// (0x00042e3a) bg_popup_window_pane_cp3

0x3a03,	// (0x0004329d) heading_pane_cp3

0x3a0f,	// (0x000432a9) listscroll_popup_graphic_pane

0x34c0,	// (0x00042d5a) bg_popup_window_pane_cp4

0xd20b,	// (0x0004caa5) heading_pane_cp4

0x3a78,	// (0x00043312) listscroll_popup_colour_pane

0x3a80,	// (0x0004331a) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x3a80,	// (0x0004331a) cell_large_graphic_colour_none_popup_pane

0xd213,	// (0x0004caad) grid_large_graphic_colour_popup_pane_ParamLimits

0xd213,	// (0x0004caad) grid_large_graphic_colour_popup_pane

0x3ac0,	// (0x0004335a) listscroll_popup_colour_pane_g1_ParamLimits

0x3ac0,	// (0x0004335a) listscroll_popup_colour_pane_g1

0x3ad7,	// (0x00043371) listscroll_popup_colour_pane_g2_ParamLimits

0x3ad7,	// (0x00043371) listscroll_popup_colour_pane_g2

0x3aee,	// (0x00043388) listscroll_popup_colour_pane_g3_ParamLimits

0x3aee,	// (0x00043388) listscroll_popup_colour_pane_g3

0xd237,	// (0x0004cad1) listscroll_popup_colour_pane_g4_ParamLimits

0xd237,	// (0x0004cad1) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0004ee32) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0004ee32) listscroll_popup_colour_pane_g

0x3b12,	// (0x000433ac) scroll_pane_cp6_ParamLimits

0x3b12,	// (0x000433ac) scroll_pane_cp6

0xd247,	// (0x0004cae1) cell_large_graphic_colour_popup_pane_ParamLimits

0xd247,	// (0x0004cae1) cell_large_graphic_colour_popup_pane

0x3b43,	// (0x000433dd) cell_large_graphic_colour_none_popup_pane_t1

0x34c0,	// (0x00042d5a) grid_highlight_pane_cp5

0x3b52,	// (0x000433ec) cell_large_graphic_colour_popup_pane_g1

0x3b5a,	// (0x000433f4) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0004ee3b) cell_large_graphic_colour_popup_pane_g

0x3b62,	// (0x000433fc) cell_large_graphic_colour_popup_pane_g2_copy1

0x3b6b,	// (0x00043405) grid_highlight_pane_cp4

0x3b73,	// (0x0004340d) bg_popup_window_pane_cp8_ParamLimits

0x3b73,	// (0x0004340d) bg_popup_window_pane_cp8

0x3b8e,	// (0x00043428) popup_snote_single_text_window_g1_ParamLimits

0x3b8e,	// (0x00043428) popup_snote_single_text_window_g1

0x3ba0,	// (0x0004343a) popup_snote_single_text_window_t1_ParamLimits

0x3ba0,	// (0x0004343a) popup_snote_single_text_window_t1

0x3bb3,	// (0x0004344d) popup_snote_single_text_window_t2_ParamLimits

0x3bb3,	// (0x0004344d) popup_snote_single_text_window_t2

0x3bc6,	// (0x00043460) popup_snote_single_text_window_t3_ParamLimits

0x3bc6,	// (0x00043460) popup_snote_single_text_window_t3

0x3bff,	// (0x00043499) popup_snote_single_text_window_t4_ParamLimits

0x3bff,	// (0x00043499) popup_snote_single_text_window_t4

0x3c33,	// (0x000434cd) popup_snote_single_text_window_t5_ParamLimits

0x3c33,	// (0x000434cd) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0004ee40) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0004ee40) popup_snote_single_text_window_t

0x3c62,	// (0x000434fc) bg_popup_window_pane_cp9_ParamLimits

0x3c62,	// (0x000434fc) bg_popup_window_pane_cp9

0x3b8e,	// (0x00043428) popup_snote_single_graphic_window_g1_ParamLimits

0x3b8e,	// (0x00043428) popup_snote_single_graphic_window_g1

0x3c70,	// (0x0004350a) popup_snote_single_graphic_window_g2_ParamLimits

0x3c70,	// (0x0004350a) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0004ee4b) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0004ee4b) popup_snote_single_graphic_window_g

0x3c7c,	// (0x00043516) popup_snote_single_graphic_window_t1_ParamLimits

0x3c7c,	// (0x00043516) popup_snote_single_graphic_window_t1

0x3c8f,	// (0x00043529) popup_snote_single_graphic_window_t2_ParamLimits

0x3c8f,	// (0x00043529) popup_snote_single_graphic_window_t2

0x3ca2,	// (0x0004353c) popup_snote_single_graphic_window_t3_ParamLimits

0x3ca2,	// (0x0004353c) popup_snote_single_graphic_window_t3

0x3cdb,	// (0x00043575) popup_snote_single_graphic_window_t4_ParamLimits

0x3cdb,	// (0x00043575) popup_snote_single_graphic_window_t4

0x3d0f,	// (0x000435a9) popup_snote_single_graphic_window_t5_ParamLimits

0x3d0f,	// (0x000435a9) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0004ee50) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0004ee50) popup_snote_single_graphic_window_t

0x69c1,	// (0x0004625b) grid_graphic_popup_pane_ParamLimits

0x69c1,	// (0x0004625b) grid_graphic_popup_pane

0x69e9,	// (0x00046283) listscroll_popup_graphic_pane_g1_ParamLimits

0x69e9,	// (0x00046283) listscroll_popup_graphic_pane_g1

0xde56,	// (0x0004d6f0) listscroll_popup_graphic_pane_g2_ParamLimits

0xde56,	// (0x0004d6f0) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x0004f24a) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x0004f24a) listscroll_popup_graphic_pane_g

0x6a11,	// (0x000462ab) scroll_pane_cp5

0xde12,	// (0x0004d6ac) cell_graphic_popup_pane_ParamLimits

0xde12,	// (0x0004d6ac) cell_graphic_popup_pane

0x693f,	// (0x000461d9) cell_graphic_popup_pane_g1

0x6947,	// (0x000461e1) cell_graphic_popup_pane_g2

0x3b62,	// (0x000433fc) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x0004f243) cell_graphic_popup_pane_g

0x6950,	// (0x000461ea) cell_graphic_popup_pane_t2

0x3b6b,	// (0x00043405) grid_highlight_pane_cp3

0x3d50,	// (0x000435ea) list_gen_pane_ParamLimits

0x3d50,	// (0x000435ea) list_gen_pane

0x3d82,	// (0x0004361c) scroll_pane

0xddc9,	// (0x0004d663) bg_list_pane_g1_ParamLimits

0xddc9,	// (0x0004d663) bg_list_pane_g1

0x68b4,	// (0x0004614e) bg_list_pane_g2_ParamLimits

0x68b4,	// (0x0004614e) bg_list_pane_g2

0x68c9,	// (0x00046163) bg_list_pane_g3_ParamLimits

0x68c9,	// (0x00046163) bg_list_pane_g3

0x68dd,	// (0x00046177) bg_list_pane_g4_ParamLimits

0x68dd,	// (0x00046177) bg_list_pane_g4

0xdde6,	// (0x0004d680) bg_list_pane_g5_ParamLimits

0xdde6,	// (0x0004d680) bg_list_pane_g5

0x0004,

0xf99e,	// (0x0004f238) bg_list_pane_g_ParamLimits

0xf99e,	// (0x0004f238) bg_list_pane_g

0xdd91,	// (0x0004d62b) list_double2_graphic_large_graphic_pane_ParamLimits

0xdd91,	// (0x0004d62b) list_double2_graphic_large_graphic_pane

0xdd91,	// (0x0004d62b) list_double2_graphic_pane_ParamLimits

0xdd91,	// (0x0004d62b) list_double2_graphic_pane

0xdd91,	// (0x0004d62b) list_double2_large_graphic_pane_ParamLimits

0xdd91,	// (0x0004d62b) list_double2_large_graphic_pane

0xdd91,	// (0x0004d62b) list_double2_pane_ParamLimits

0xdd91,	// (0x0004d62b) list_double2_pane

0xdd91,	// (0x0004d62b) list_double_graphic_heading_pane_ParamLimits

0xdd91,	// (0x0004d62b) list_double_graphic_heading_pane

0xdd91,	// (0x0004d62b) list_double_graphic_pane_ParamLimits

0xdd91,	// (0x0004d62b) list_double_graphic_pane

0xdd91,	// (0x0004d62b) list_double_heading_pane_ParamLimits

0xdd91,	// (0x0004d62b) list_double_heading_pane

0xdd91,	// (0x0004d62b) list_double_large_graphic_pane_ParamLimits

0xdd91,	// (0x0004d62b) list_double_large_graphic_pane

0xdd91,	// (0x0004d62b) list_double_number_pane_ParamLimits

0xdd91,	// (0x0004d62b) list_double_number_pane

0xdd91,	// (0x0004d62b) list_double_pane_ParamLimits

0xdd91,	// (0x0004d62b) list_double_pane

0xdd91,	// (0x0004d62b) list_double_time_pane_ParamLimits

0xdd91,	// (0x0004d62b) list_double_time_pane

0xdd91,	// (0x0004d62b) list_setting_number_pane_ParamLimits

0xdd91,	// (0x0004d62b) list_setting_number_pane

0xdd91,	// (0x0004d62b) list_setting_pane_ParamLimits

0xdd91,	// (0x0004d62b) list_setting_pane

0xdda3,	// (0x0004d63d) list_single_2graphic_pane_ParamLimits

0xdda3,	// (0x0004d63d) list_single_2graphic_pane

0xdda3,	// (0x0004d63d) list_single_graphic_heading_pane_ParamLimits

0xdda3,	// (0x0004d63d) list_single_graphic_heading_pane

0xdda3,	// (0x0004d63d) list_single_graphic_pane_ParamLimits

0xdda3,	// (0x0004d63d) list_single_graphic_pane

0xdda3,	// (0x0004d63d) list_single_heading_pane_ParamLimits

0xdda3,	// (0x0004d63d) list_single_heading_pane

0xdd91,	// (0x0004d62b) list_single_large_graphic_pane_ParamLimits

0xdd91,	// (0x0004d62b) list_single_large_graphic_pane

0xdda3,	// (0x0004d63d) list_single_number_heading_pane_ParamLimits

0xdda3,	// (0x0004d63d) list_single_number_heading_pane

0xdda3,	// (0x0004d63d) list_single_number_pane_ParamLimits

0xdda3,	// (0x0004d63d) list_single_number_pane

0xdda3,	// (0x0004d63d) list_single_pane_ParamLimits

0xdda3,	// (0x0004d63d) list_single_pane

0x34c0,	// (0x00042d5a) list_highlight_pane_cp1

0x49de,	// (0x00044278) list_single_pane_g1_ParamLimits

0x49de,	// (0x00044278) list_single_pane_g1

0x1f93,	// (0x0004182d) list_single_pane_g2_ParamLimits

0x1f93,	// (0x0004182d) list_single_pane_g2

0x0001,

0xf5d2,	// (0x0004ee6c) list_single_pane_g_ParamLimits

0xf5d2,	// (0x0004ee6c) list_single_pane_g

0x094b,	// (0x000401e5) list_single_pane_t1_ParamLimits

0x094b,	// (0x000401e5) list_single_pane_t1

0x49de,	// (0x00044278) list_single_number_pane_g1_ParamLimits

0x49de,	// (0x00044278) list_single_number_pane_g1

0x1f93,	// (0x0004182d) list_single_number_pane_g2_ParamLimits

0x1f93,	// (0x0004182d) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x0004ee6c) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x0004ee6c) list_single_number_pane_g

0x06e1,	// (0x0003ff7b) list_single_number_pane_t1_ParamLimits

0x06e1,	// (0x0003ff7b) list_single_number_pane_t1

0xbb75,	// (0x0004b40f) list_single_number_pane_t2_ParamLimits

0xbb75,	// (0x0004b40f) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x0004f1f9) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x0004f1f9) list_single_number_pane_t

0xb516,	// (0x0004adb0) list_single_graphic_pane_g1_ParamLimits

0xb516,	// (0x0004adb0) list_single_graphic_pane_g1

0x49de,	// (0x00044278) list_single_graphic_pane_g2_ParamLimits

0x49de,	// (0x00044278) list_single_graphic_pane_g2

0x1f93,	// (0x0004182d) list_single_graphic_pane_g3_ParamLimits

0x1f93,	// (0x0004182d) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0004ee5b) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0004ee5b) list_single_graphic_pane_g

0xb522,	// (0x0004adbc) list_single_graphic_pane_t1_ParamLimits

0xb522,	// (0x0004adbc) list_single_graphic_pane_t1

0xb538,	// (0x0004add2) list_single_heading_pane_g1_ParamLimits

0xb538,	// (0x0004add2) list_single_heading_pane_g1

0x1f93,	// (0x0004182d) list_single_heading_pane_g2_ParamLimits

0x1f93,	// (0x0004182d) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0004ee62) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0004ee62) list_single_heading_pane_g

0xb54b,	// (0x0004ade5) list_single_heading_pane_t1_ParamLimits

0xb54b,	// (0x0004ade5) list_single_heading_pane_t1

0xbf82,	// (0x0004b81c) list_single_heading_pane_t2_ParamLimits

0xbf82,	// (0x0004b81c) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0004ee67) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0004ee67) list_single_heading_pane_t

0x49de,	// (0x00044278) list_single_number_heading_pane_g1_ParamLimits

0x49de,	// (0x00044278) list_single_number_heading_pane_g1

0x1f93,	// (0x0004182d) list_single_number_heading_pane_g2_ParamLimits

0x1f93,	// (0x0004182d) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x0004ee6c) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x0004ee6c) list_single_number_heading_pane_g

0xb561,	// (0x0004adfb) list_single_number_heading_pane_t1_ParamLimits

0xb561,	// (0x0004adfb) list_single_number_heading_pane_t1

0xb577,	// (0x0004ae11) list_single_number_heading_pane_t2_ParamLimits

0xb577,	// (0x0004ae11) list_single_number_heading_pane_t2

0x0925,	// (0x000401bf) list_single_number_heading_pane_t3_ParamLimits

0x0925,	// (0x000401bf) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x0004ee71) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x0004ee71) list_single_number_heading_pane_t

0xb589,	// (0x0004ae23) list_single_graphic_heading_pane_g1_ParamLimits

0xb589,	// (0x0004ae23) list_single_graphic_heading_pane_g1

0xbf94,	// (0x0004b82e) list_single_graphic_heading_pane_g4_ParamLimits

0xbf94,	// (0x0004b82e) list_single_graphic_heading_pane_g4

0x1f93,	// (0x0004182d) list_single_graphic_heading_pane_g5_ParamLimits

0x1f93,	// (0x0004182d) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x0004ee78) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x0004ee78) list_single_graphic_heading_pane_g

0xb561,	// (0x0004adfb) list_single_graphic_heading_pane_t1_ParamLimits

0xb561,	// (0x0004adfb) list_single_graphic_heading_pane_t1

0xb5a1,	// (0x0004ae3b) list_single_graphic_heading_pane_t2_ParamLimits

0xb5a1,	// (0x0004ae3b) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x0004ee7f) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x0004ee7f) list_single_graphic_heading_pane_t

0x0961,	// (0x000401fb) list_single_large_graphic_pane_g1_ParamLimits

0x0961,	// (0x000401fb) list_single_large_graphic_pane_g1

0x096d,	// (0x00040207) list_single_large_graphic_pane_g2_ParamLimits

0x096d,	// (0x00040207) list_single_large_graphic_pane_g2

0x0979,	// (0x00040213) list_single_large_graphic_pane_g3_ParamLimits

0x0979,	// (0x00040213) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x0004ee84) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x0004ee84) list_single_large_graphic_pane_g

0x58f3,	// (0x0004518d) wait_border_pane_g2_copy1

0x134e,	// (0x00040be8) list_single_large_graphic_pane_g4_cp2

0x0985,	// (0x0004021f) list_single_large_graphic_pane_t1_ParamLimits

0x0985,	// (0x0004021f) list_single_large_graphic_pane_t1

0x48c9,	// (0x00044163) list_double_pane_g1_ParamLimits

0x48c9,	// (0x00044163) list_double_pane_g1

0xbfa5,	// (0x0004b83f) list_double_pane_g2_ParamLimits

0xbfa5,	// (0x0004b83f) list_double_pane_g2

0x0001,

0xf5f1,	// (0x0004ee8b) list_double_pane_g_ParamLimits

0xf5f1,	// (0x0004ee8b) list_double_pane_g

0xb5b7,	// (0x0004ae51) list_double_pane_t1_ParamLimits

0xb5b7,	// (0x0004ae51) list_double_pane_t1

0xb5cd,	// (0x0004ae67) list_double_pane_t2_ParamLimits

0xb5cd,	// (0x0004ae67) list_double_pane_t2

0x0001,

0xf5f6,	// (0x0004ee90) list_double_pane_t_ParamLimits

0xf5f6,	// (0x0004ee90) list_double_pane_t

0xb5df,	// (0x0004ae79) list_double2_pane_g1_ParamLimits

0xb5df,	// (0x0004ae79) list_double2_pane_g1

0xb5f0,	// (0x0004ae8a) list_double2_pane_g2_ParamLimits

0xb5f0,	// (0x0004ae8a) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x0004ee95) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x0004ee95) list_double2_pane_g

0xb5fc,	// (0x0004ae96) list_double2_pane_t1_ParamLimits

0xb5fc,	// (0x0004ae96) list_double2_pane_t1

0xb612,	// (0x0004aeac) list_double2_pane_t2_ParamLimits

0xb612,	// (0x0004aeac) list_double2_pane_t2

0x0001,

0xf600,	// (0x0004ee9a) list_double2_pane_t_ParamLimits

0xf600,	// (0x0004ee9a) list_double2_pane_t

0x48c9,	// (0x00044163) list_double_number_pane_g1_ParamLimits

0x48c9,	// (0x00044163) list_double_number_pane_g1

0xbfa5,	// (0x0004b83f) list_double_number_pane_g2_ParamLimits

0xbfa5,	// (0x0004b83f) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x0004ee8b) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x0004ee8b) list_double_number_pane_g

0xb624,	// (0x0004aebe) list_double_number_pane_t1_ParamLimits

0xb624,	// (0x0004aebe) list_double_number_pane_t1

0xb636,	// (0x0004aed0) list_double_number_pane_t2_ParamLimits

0xb636,	// (0x0004aed0) list_double_number_pane_t2

0xb64c,	// (0x0004aee6) list_double_number_pane_t3_ParamLimits

0xb64c,	// (0x0004aee6) list_double_number_pane_t3

0x0002,

0xf605,	// (0x0004ee9f) list_double_number_pane_t_ParamLimits

0xf605,	// (0x0004ee9f) list_double_number_pane_t

0xb65e,	// (0x0004aef8) list_double_graphic_pane_g1_ParamLimits

0xb65e,	// (0x0004aef8) list_double_graphic_pane_g1

0xb66a,	// (0x0004af04) list_double_graphic_pane_g2_ParamLimits

0xb66a,	// (0x0004af04) list_double_graphic_pane_g2

0xb679,	// (0x0004af13) list_double_graphic_pane_g3_ParamLimits

0xb679,	// (0x0004af13) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x0004eea6) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x0004eea6) list_double_graphic_pane_g

0xb685,	// (0x0004af1f) list_double_graphic_pane_t1_ParamLimits

0xb685,	// (0x0004af1f) list_double_graphic_pane_t1

0xb69b,	// (0x0004af35) list_double_graphic_pane_t2_ParamLimits

0xb69b,	// (0x0004af35) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x0004eeaf) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x0004eeaf) list_double_graphic_pane_t

0xb6ad,	// (0x0004af47) list_double2_graphic_pane_g1_ParamLimits

0xb6ad,	// (0x0004af47) list_double2_graphic_pane_g1

0xb6b9,	// (0x0004af53) list_double2_graphic_pane_g2_ParamLimits

0xb6b9,	// (0x0004af53) list_double2_graphic_pane_g2

0xbfbd,	// (0x0004b857) list_double2_graphic_pane_g3_ParamLimits

0xbfbd,	// (0x0004b857) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x0004eeb4) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x0004eeb4) list_double2_graphic_pane_g

0xb6c5,	// (0x0004af5f) list_double2_graphic_pane_t1_ParamLimits

0xb6c5,	// (0x0004af5f) list_double2_graphic_pane_t1

0xb6db,	// (0x0004af75) list_double2_graphic_pane_t2_ParamLimits

0xb6db,	// (0x0004af75) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x0004eebb) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x0004eebb) list_double2_graphic_pane_t

0xb6ed,	// (0x0004af87) list_double_large_graphic_pane_g1_ParamLimits

0xb6ed,	// (0x0004af87) list_double_large_graphic_pane_g1

0xb70c,	// (0x0004afa6) list_double_large_graphic_pane_g2_ParamLimits

0xb70c,	// (0x0004afa6) list_double_large_graphic_pane_g2

0xbfa5,	// (0x0004b83f) list_double_large_graphic_pane_g3_ParamLimits

0xbfa5,	// (0x0004b83f) list_double_large_graphic_pane_g3

0xb722,	// (0x0004afbc) list_double_large_graphic_pane_g4_ParamLimits

0xb722,	// (0x0004afbc) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x0004eec0) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x0004eec0) list_double_large_graphic_pane_g

0xb734,	// (0x0004afce) list_double_large_graphic_pane_t1_ParamLimits

0xb734,	// (0x0004afce) list_double_large_graphic_pane_t1

0xb74d,	// (0x0004afe7) list_double_large_graphic_pane_t2_ParamLimits

0xb74d,	// (0x0004afe7) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x0004eecb) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x0004eecb) list_double_large_graphic_pane_t

0xb75f,	// (0x0004aff9) list_double2_large_graphic_pane_g1_ParamLimits

0xb75f,	// (0x0004aff9) list_double2_large_graphic_pane_g1

0xb76b,	// (0x0004b005) list_double2_large_graphic_pane_g2_ParamLimits

0xb76b,	// (0x0004b005) list_double2_large_graphic_pane_g2

0xbfbd,	// (0x0004b857) list_double2_large_graphic_pane_g3_ParamLimits

0xbfbd,	// (0x0004b857) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x0004eed0) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x0004eed0) list_double2_large_graphic_pane_g

0xb77c,	// (0x0004b016) list_double2_large_graphic_pane_t1_ParamLimits

0xb77c,	// (0x0004b016) list_double2_large_graphic_pane_t1

0xb792,	// (0x0004b02c) list_double2_large_graphic_pane_t2_ParamLimits

0xb792,	// (0x0004b02c) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x0004eed7) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x0004eed7) list_double2_large_graphic_pane_t

0xb7a4,	// (0x0004b03e) list_double_heading_pane_g1_ParamLimits

0xb7a4,	// (0x0004b03e) list_double_heading_pane_g1

0xb7b5,	// (0x0004b04f) list_double_heading_pane_g2_ParamLimits

0xb7b5,	// (0x0004b04f) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x0004eedc) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x0004eedc) list_double_heading_pane_g

0xb7c1,	// (0x0004b05b) list_double_heading_pane_t1_ParamLimits

0xb7c1,	// (0x0004b05b) list_double_heading_pane_t1

0xb612,	// (0x0004aeac) list_double_heading_pane_t2_ParamLimits

0xb612,	// (0x0004aeac) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x0004eee1) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x0004eee1) list_double_heading_pane_t

0xb7d7,	// (0x0004b071) list_double_graphic_heading_pane_g1_ParamLimits

0xb7d7,	// (0x0004b071) list_double_graphic_heading_pane_g1

0xb7a4,	// (0x0004b03e) list_double_graphic_heading_pane_g2_ParamLimits

0xb7a4,	// (0x0004b03e) list_double_graphic_heading_pane_g2

0xb7b5,	// (0x0004b04f) list_double_graphic_heading_pane_g3_ParamLimits

0xb7b5,	// (0x0004b04f) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x0004eee6) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x0004eee6) list_double_graphic_heading_pane_g

0xb7e3,	// (0x0004b07d) list_double_graphic_heading_pane_t1_ParamLimits

0xb7e3,	// (0x0004b07d) list_double_graphic_heading_pane_t1

0xb6db,	// (0x0004af75) list_double_graphic_heading_pane_t2_ParamLimits

0xb6db,	// (0x0004af75) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x0004eeed) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x0004eeed) list_double_graphic_heading_pane_t

0xb7f9,	// (0x0004b093) list_double_time_pane_g1_ParamLimits

0xb7f9,	// (0x0004b093) list_double_time_pane_g1

0xb80a,	// (0x0004b0a4) list_double_time_pane_g2_ParamLimits

0xb80a,	// (0x0004b0a4) list_double_time_pane_g2

0x0001,

0xf658,	// (0x0004eef2) list_double_time_pane_g_ParamLimits

0xf658,	// (0x0004eef2) list_double_time_pane_g

0xb816,	// (0x0004b0b0) list_double_time_pane_t1_ParamLimits

0xb816,	// (0x0004b0b0) list_double_time_pane_t1

0xb82c,	// (0x0004b0c6) list_double_time_pane_t2_ParamLimits

0xb82c,	// (0x0004b0c6) list_double_time_pane_t2

0xb83e,	// (0x0004b0d8) list_double_time_pane_t3_ParamLimits

0xb83e,	// (0x0004b0d8) list_double_time_pane_t3

0xb850,	// (0x0004b0ea) list_double_time_pane_t4_ParamLimits

0xb850,	// (0x0004b0ea) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x0004eef7) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x0004eef7) list_double_time_pane_t

0xb862,	// (0x0004b0fc) list_setting_pane_g1_ParamLimits

0xb862,	// (0x0004b0fc) list_setting_pane_g1

0xb5f0,	// (0x0004ae8a) list_setting_pane_g2_ParamLimits

0xb5f0,	// (0x0004ae8a) list_setting_pane_g2

0x0001,

0xf666,	// (0x0004ef00) list_setting_pane_g_ParamLimits

0xf666,	// (0x0004ef00) list_setting_pane_g

0xb86e,	// (0x0004b108) list_setting_pane_t1_ParamLimits

0xb86e,	// (0x0004b108) list_setting_pane_t1

0xb888,	// (0x0004b122) list_setting_pane_t2_ParamLimits

0xb888,	// (0x0004b122) list_setting_pane_t2

0x0002,

0xf66b,	// (0x0004ef05) list_setting_pane_t_ParamLimits

0xf66b,	// (0x0004ef05) list_setting_pane_t

0xb8c7,	// (0x0004b161) set_value_pane_cp_ParamLimits

0xb8c7,	// (0x0004b161) set_value_pane_cp

0xb8d3,	// (0x0004b16d) list_setting_number_pane_g1_ParamLimits

0xb8d3,	// (0x0004b16d) list_setting_number_pane_g1

0xb8df,	// (0x0004b179) list_setting_number_pane_g2_ParamLimits

0xb8df,	// (0x0004b179) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x0004ef0c) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x0004ef0c) list_setting_number_pane_g

0xb8eb,	// (0x0004b185) list_setting_number_pane_t1_ParamLimits

0xb8eb,	// (0x0004b185) list_setting_number_pane_t1

0xb904,	// (0x0004b19e) list_setting_number_pane_t2_ParamLimits

0xb904,	// (0x0004b19e) list_setting_number_pane_t2

0xb91e,	// (0x0004b1b8) list_setting_number_pane_t3_ParamLimits

0xb91e,	// (0x0004b1b8) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x0004ef11) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x0004ef11) list_setting_number_pane_t

0xb8c7,	// (0x0004b161) set_value_pane_ParamLimits

0xb8c7,	// (0x0004b161) set_value_pane

0x3dc2,	// (0x0004365c) bg_set_opt_pane_ParamLimits

0x3dc2,	// (0x0004365c) bg_set_opt_pane

0x0372,	// (0x0003fc0c) set_value_pane_t1

0x3de3,	// (0x0004367d) slider_set_pane_cp3

0x3dec,	// (0x00043686) volume_small_pane_cp

0x3df5,	// (0x0004368f) list_form_gen_pane

0x3dfe,	// (0x00043698) scroll_pane_cp8

0xb961,	// (0x0004b1fb) form_field_data_pane_ParamLimits

0xb961,	// (0x0004b1fb) form_field_data_pane

0xb978,	// (0x0004b212) form_field_data_wide_pane_ParamLimits

0xb978,	// (0x0004b212) form_field_data_wide_pane

0xb998,	// (0x0004b232) form_field_popup_pane_ParamLimits

0xb998,	// (0x0004b232) form_field_popup_pane

0xb9b0,	// (0x0004b24a) form_field_popup_wide_pane_ParamLimits

0xb9b0,	// (0x0004b24a) form_field_popup_wide_pane

0x040e,	// (0x0003fca8) form_field_slider_pane_ParamLimits

0x040e,	// (0x0003fca8) form_field_slider_pane

0x0421,	// (0x0003fcbb) form_field_slider_wide_pane_ParamLimits

0x0421,	// (0x0003fcbb) form_field_slider_wide_pane

0x3e0f,	// (0x000436a9) data_form_pane

0xb9d1,	// (0x0004b26b) form_field_data_pane_t1

0x3e1b,	// (0x000436b5) input_focus_pane

0x0456,	// (0x0003fcf0) data_form_wide_pane

0x0473,	// (0x0003fd0d) form_field_data_wide_pane_t1

0x3b80,	// (0x0004341a) input_focus_pane_cp6

0xb9eb,	// (0x0004b285) form_field_popup_pane_t1

0x3e1b,	// (0x000436b5) input_focus_pane_cp7

0x3e3d,	// (0x000436d7) list_form_pane

0x04b5,	// (0x0003fd4f) form_field_popup_wide_pane_t1

0x3e1b,	// (0x000436b5) input_focus_pane_cp8

0x3e49,	// (0x000436e3) list_form_wide_pane

0xba0d,	// (0x0004b2a7) form_field_slider_pane_t1_ParamLimits

0xba0d,	// (0x0004b2a7) form_field_slider_pane_t1

0xba25,	// (0x0004b2bf) form_field_slider_pane_t2_ParamLimits

0xba25,	// (0x0004b2bf) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x0004ef21) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x0004ef21) form_field_slider_pane_t

0x381b,	// (0x000430b5) input_focus_pane_cp9_ParamLimits

0x381b,	// (0x000430b5) input_focus_pane_cp9

0xba3a,	// (0x0004b2d4) slider_cont_pane_ParamLimits

0xba3a,	// (0x0004b2d4) slider_cont_pane

0x3e58,	// (0x000436f2) form_field_slider_wide_pane_t1_ParamLimits

0x3e58,	// (0x000436f2) form_field_slider_wide_pane_t1

0x0511,	// (0x0003fdab) form_field_slider_wide_pane_t2_ParamLimits

0x0511,	// (0x0003fdab) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x0004ef26) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x0004ef26) form_field_slider_wide_pane_t

0x381b,	// (0x000430b5) input_focus_pane_cp10_ParamLimits

0x381b,	// (0x000430b5) input_focus_pane_cp10

0xba4e,	// (0x0004b2e8) slider_cont_pane_cp1_ParamLimits

0xba4e,	// (0x0004b2e8) slider_cont_pane_cp1

0xba62,	// (0x0004b2fc) slider_form_pane_cp

0x3e6a,	// (0x00043704) input_focus_pane_g1

0x3e72,	// (0x0004370c) input_focus_pane_g2

0x3e7a,	// (0x00043714) input_focus_pane_g3

0x3e82,	// (0x0004371c) input_focus_pane_g4

0x3e8a,	// (0x00043724) input_focus_pane_g5

0x3e92,	// (0x0004372c) input_focus_pane_g6

0x3e9a,	// (0x00043734) input_focus_pane_g7

0x3ea2,	// (0x0004373c) input_focus_pane_g8

0x3eaa,	// (0x00043744) input_focus_pane_g9

0x34b6,	// (0x00042d50) input_focus_pane_g10

0x0009,

0xf691,	// (0x0004ef2b) input_focus_pane_g

0x58fc,	// (0x00045196) wait_border_pane_g3_copy1

0xba6a,	// (0x0004b304) data_form_pane_t1

0x34b6,	// (0x00042d50) wait_anim_pane_g1_copy1

0xbb87,	// (0x0004b421) data_form_wide_pane_t1

0xba83,	// (0x0004b31d) list_form_graphic_pane_cp_ParamLimits

0xba83,	// (0x0004b31d) list_form_graphic_pane_cp

0x6829,	// (0x000460c3) slider_form_pane_g1

0x6832,	// (0x000460cc) slider_form_pane_g2

0x0006,

0xf98f,	// (0x0004f229) slider_form_pane_g

0xba94,	// (0x0004b32e) list_form_graphic_pane_ParamLimits

0xba94,	// (0x0004b32e) list_form_graphic_pane

0x058f,	// (0x0003fe29) list_form_graphic_pane_g1

0x0597,	// (0x0003fe31) list_form_graphic_pane_t1_ParamLimits

0x0597,	// (0x0003fe31) list_form_graphic_pane_t1

0x35a0,	// (0x00042e3a) list_highlight_pane_cp5_ParamLimits

0x35a0,	// (0x00042e3a) list_highlight_pane_cp5

0xbaa6,	// (0x0004b340) find_pane_g1

0x3eb2,	// (0x0004374c) input_find_pane

0xbaaf,	// (0x0004b349) input_find_pane_g1_ParamLimits

0xbaaf,	// (0x0004b349) input_find_pane_g1

0xbabb,	// (0x0004b355) input_find_pane_t1_ParamLimits

0xbabb,	// (0x0004b355) input_find_pane_t1

0xbad0,	// (0x0004b36a) input_find_pane_t2_ParamLimits

0xbad0,	// (0x0004b36a) input_find_pane_t2

0x0001,

0xf6a6,	// (0x0004ef40) input_find_pane_t_ParamLimits

0xf6a6,	// (0x0004ef40) input_find_pane_t

0x3ebb,	// (0x00043755) input_focus_pane_cp5_ParamLimits

0x3ebb,	// (0x00043755) input_focus_pane_cp5

0x3ed5,	// (0x0004376f) bg_popup_window_pane_cp2_ParamLimits

0x3ed5,	// (0x0004376f) bg_popup_window_pane_cp2

0x3ee2,	// (0x0004377c) listscroll_menu_pane_ParamLimits

0x3ee2,	// (0x0004377c) listscroll_menu_pane

0xd27c,	// (0x0004cb16) popup_submenu_window_ParamLimits

0xd27c,	// (0x0004cb16) popup_submenu_window

0x3f1a,	// (0x000437b4) find_popup_pane_g1

0x3f22,	// (0x000437bc) input_popup_find_pane_cp

0x3ebb,	// (0x00043755) input_focus_pane_cp4_ParamLimits

0x3ebb,	// (0x00043755) input_focus_pane_cp4

0x3f38,	// (0x000437d2) input_popup_find_pane_t1_ParamLimits

0x3f38,	// (0x000437d2) input_popup_find_pane_t1

0x34c0,	// (0x00042d5a) bg_popup_sub_pane_cp

0x3f66,	// (0x00043800) listscroll_popup_sub_pane

0x3f6e,	// (0x00043808) list_submenu_pane_ParamLimits

0x3f6e,	// (0x00043808) list_submenu_pane

0x3f7f,	// (0x00043819) scroll_pane_cp4

0x3f87,	// (0x00043821) list_single_popup_submenu_pane_ParamLimits

0x3f87,	// (0x00043821) list_single_popup_submenu_pane

0x3f9b,	// (0x00043835) list_single_popup_submenu_pane_g1

0x3fa3,	// (0x0004383d) list_single_popup_submenu_pane_t1_ParamLimits

0x3fa3,	// (0x0004383d) list_single_popup_submenu_pane_t1

0x381b,	// (0x000430b5) bg_active_tab_pane_cp1_ParamLimits

0x381b,	// (0x000430b5) bg_active_tab_pane_cp1

0x3fb8,	// (0x00043852) tabs_2_active_pane_g1

0xd2b6,	// (0x0004cb50) tabs_2_active_pane_t1

0x381b,	// (0x000430b5) bg_passive_tab_pane_cp1_ParamLimits

0x381b,	// (0x000430b5) bg_passive_tab_pane_cp1

0x3fb8,	// (0x00043852) tabs_2_passive_pane_g1

0xd2b6,	// (0x0004cb50) tabs_2_passive_pane_t1

0x35a0,	// (0x00042e3a) bg_active_tab_pane_cp4

0xd2c8,	// (0x0004cb62) tabs_2_long_active_pane_t1

0x4de3,	// (0x0004467d) bg_passive_tab_pane_cp4

0x1648,	// (0x00040ee2) list_single_midp_graphic_pane_g4_ParamLimits

0x35a0,	// (0x00042e3a) bg_active_tab_pane_cp5

0xd2db,	// (0x0004cb75) tabs_3_long_active_pane_t1

0x4de3,	// (0x0004467d) bg_passive_tab_pane_cp5

0x1648,	// (0x00040ee2) list_single_midp_graphic_pane_g4

0x35a0,	// (0x00042e3a) bg_popup_window_pane_cp13_ParamLimits

0x35a0,	// (0x00042e3a) bg_popup_window_pane_cp13

0x401a,	// (0x000438b4) listscroll_popup_fast_pane_ParamLimits

0x401a,	// (0x000438b4) listscroll_popup_fast_pane

0x4029,	// (0x000438c3) grid_popup_fast_pane_ParamLimits

0x4029,	// (0x000438c3) grid_popup_fast_pane

0x403b,	// (0x000438d5) scroll_pane_cp9_ParamLimits

0x403b,	// (0x000438d5) scroll_pane_cp9

0x80ef,	// (0x00047989) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x80ef,	// (0x00047989) list_single_graphic_hl_pane_t1_cp2

0x405f,	// (0x000438f9) input_focus_pane_cp20_ParamLimits

0x405f,	// (0x000438f9) input_focus_pane_cp20

0x406d,	// (0x00043907) query_popup_data_pane_t1_ParamLimits

0x406d,	// (0x00043907) query_popup_data_pane_t1

0x4080,	// (0x0004391a) query_popup_data_pane_t2_ParamLimits

0x4080,	// (0x0004391a) query_popup_data_pane_t2

0x40c6,	// (0x00043960) query_popup_data_pane_t3_ParamLimits

0x40c6,	// (0x00043960) query_popup_data_pane_t3

0x4107,	// (0x000439a1) query_popup_data_pane_t4_ParamLimits

0x4107,	// (0x000439a1) query_popup_data_pane_t4

0x4143,	// (0x000439dd) query_popup_data_pane_t5_ParamLimits

0x4143,	// (0x000439dd) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x0004ef45) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x0004ef45) query_popup_data_pane_t

0x3e6a,	// (0x00043704) bg_set_opt_pane_g1

0x3e72,	// (0x0004370c) bg_set_opt_pane_g2

0x3e7a,	// (0x00043714) bg_set_opt_pane_g3

0x3e82,	// (0x0004371c) bg_set_opt_pane_g4

0x3e8a,	// (0x00043724) bg_set_opt_pane_g5

0x3e92,	// (0x0004372c) bg_set_opt_pane_g6

0x3e9a,	// (0x00043734) bg_set_opt_pane_g7

0x3ea2,	// (0x0004373c) bg_set_opt_pane_g8

0x3eaa,	// (0x00043744) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x0004ef50) bg_set_opt_pane_g

0x1654,	// (0x00040eee) control_top_pane_stacon_ParamLimits

0x1654,	// (0x00040eee) control_top_pane_stacon

0x16a7,	// (0x00040f41) signal_pane_stacon_ParamLimits

0x16a7,	// (0x00040f41) signal_pane_stacon

0x4733,	// (0x00043fcd) stacon_top_pane_g1_ParamLimits

0x4733,	// (0x00043fcd) stacon_top_pane_g1

0x16cc,	// (0x00040f66) title_pane_stacon_ParamLimits

0x16cc,	// (0x00040f66) title_pane_stacon

0x16f6,	// (0x00040f90) uni_indicator_pane_stacon_ParamLimits

0x16f6,	// (0x00040f90) uni_indicator_pane_stacon

0x170b,	// (0x00040fa5) battery_pane_stacon_ParamLimits

0x170b,	// (0x00040fa5) battery_pane_stacon

0x174f,	// (0x00040fe9) control_bottom_pane_stacon_ParamLimits

0x174f,	// (0x00040fe9) control_bottom_pane_stacon

0x1772,	// (0x0004100c) navi_pane_stacon_ParamLimits

0x1772,	// (0x0004100c) navi_pane_stacon

0x4755,	// (0x00043fef) stacon_bottom_pane_g1_ParamLimits

0x4755,	// (0x00043fef) stacon_bottom_pane_g1

0x139b,	// (0x00040c35) aid_levels_signal_lsc_ParamLimits

0x139b,	// (0x00040c35) aid_levels_signal_lsc

0x13b1,	// (0x00040c4b) signal_pane_stacon_g1_ParamLimits

0x13b1,	// (0x00040c4b) signal_pane_stacon_g1

0x13c5,	// (0x00040c5f) signal_pane_stacon_g2_ParamLimits

0x13c5,	// (0x00040c5f) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x0004ef63) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0004ef63) signal_pane_stacon_g

0x13fa,	// (0x00040c94) title_pane_stacon_t1_ParamLimits

0x13fa,	// (0x00040c94) title_pane_stacon_t1

0x4187,	// (0x00043a21) uni_indicator_pane_stacon_g1

0x4191,	// (0x00043a2b) uni_indicator_pane_stacon_g2

0x419b,	// (0x00043a35) uni_indicator_pane_stacon_g3

0x41a5,	// (0x00043a3f) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x0004ef6f) uni_indicator_pane_stacon_g

0x141f,	// (0x00040cb9) control_top_pane_stacon_g1

0x1427,	// (0x00040cc1) control_top_pane_stacon_t1_ParamLimits

0x1427,	// (0x00040cc1) control_top_pane_stacon_t1

0x145e,	// (0x00040cf8) aid_levels_battery_lsc_ParamLimits

0x145e,	// (0x00040cf8) aid_levels_battery_lsc

0x1475,	// (0x00040d0f) battery_pane_stacon_g1_ParamLimits

0x1475,	// (0x00040d0f) battery_pane_stacon_g1

0x1488,	// (0x00040d22) battery_pane_stacon_g2_ParamLimits

0x1488,	// (0x00040d22) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x0004ef78) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x0004ef78) battery_pane_stacon_g

0x14c6,	// (0x00040d60) navi_icon_pane_stacon

0x14da,	// (0x00040d74) navi_navi_pane_stacon

0x14c6,	// (0x00040d60) navi_text_pane_stacon

0x141f,	// (0x00040cb9) control_bottom_pane_stacon_g1

0x14ee,	// (0x00040d88) control_bottom_pane_stacon_t1_ParamLimits

0x14ee,	// (0x00040d88) control_bottom_pane_stacon_t1

0xd2ed,	// (0x0004cb87) grid_app_pane_ParamLimits

0xd2ed,	// (0x0004cb87) grid_app_pane

0xd325,	// (0x0004cbbf) scroll_pane_cp15_ParamLimits

0xd325,	// (0x0004cbbf) scroll_pane_cp15

0xd33a,	// (0x0004cbd4) cell_app_pane_ParamLimits

0xd33a,	// (0x0004cbd4) cell_app_pane

0xd37f,	// (0x0004cc19) cell_app_pane_g1_ParamLimits

0xd37f,	// (0x0004cc19) cell_app_pane_g1

0x4248,	// (0x00043ae2) cell_app_pane_g2_ParamLimits

0x4248,	// (0x00043ae2) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x0004ef7d) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x0004ef7d) cell_app_pane_g

0xd3a3,	// (0x0004cc3d) cell_app_pane_t1_ParamLimits

0xd3a3,	// (0x0004cc3d) cell_app_pane_t1

0x426b,	// (0x00043b05) grid_highlight_pane_ParamLimits

0x426b,	// (0x00043b05) grid_highlight_pane

0x3e6a,	// (0x00043704) cell_highlight_pane_g1

0x3e72,	// (0x0004370c) cell_highlight_pane_g2

0x3e7a,	// (0x00043714) cell_highlight_pane_g3

0x3e82,	// (0x0004371c) cell_highlight_pane_g4

0x3e8a,	// (0x00043724) cell_highlight_pane_g5

0x3e92,	// (0x0004372c) cell_highlight_pane_g6

0x3e9a,	// (0x00043734) cell_highlight_pane_g7

0x3ea2,	// (0x0004373c) cell_highlight_pane_g8

0x3eaa,	// (0x00043744) cell_highlight_pane_g9

0x34b6,	// (0x00042d50) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x0004ef2b) cell_highlight_pane_g

0x427c,	// (0x00043b16) bg_scroll_pane

0x1538,	// (0x00040dd2) scroll_handle_pane

0x42c3,	// (0x00043b5d) scroll_bg_pane_g1

0x42d8,	// (0x00043b72) scroll_bg_pane_g2

0x42f0,	// (0x00043b8a) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x0004ef82) scroll_bg_pane_g

0x4305,	// (0x00043b9f) scroll_handle_focus_pane_ParamLimits

0x4305,	// (0x00043b9f) scroll_handle_focus_pane

0x42c3,	// (0x00043b5d) scroll_handle_pane_g1

0x4312,	// (0x00043bac) scroll_handle_pane_g2

0x42f0,	// (0x00043b8a) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x0004ef89) scroll_handle_pane_g

0x3ebb,	// (0x00043755) bg_popup_sub_pane_cp21_ParamLimits

0x3ebb,	// (0x00043755) bg_popup_sub_pane_cp21

0x4326,	// (0x00043bc0) popup_fep_japan_predictive_window_t1_ParamLimits

0x4326,	// (0x00043bc0) popup_fep_japan_predictive_window_t1

0x4340,	// (0x00043bda) popup_fep_japan_predictive_window_t2_ParamLimits

0x4340,	// (0x00043bda) popup_fep_japan_predictive_window_t2

0x4373,	// (0x00043c0d) popup_fep_japan_predictive_window_t3_ParamLimits

0x4373,	// (0x00043c0d) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x0004ef90) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x0004ef90) popup_fep_japan_predictive_window_t

0x34c0,	// (0x00042d5a) bg_popup_sub_pane_cp23

0x43aa,	// (0x00043c44) listscroll_japin_cand_pane

0x43b2,	// (0x00043c4c) popup_fep_japan_candidate_window_t1

0x43c0,	// (0x00043c5a) candidate_pane_ParamLimits

0x43c0,	// (0x00043c5a) candidate_pane

0x43d2,	// (0x00043c6c) scroll_pane_cp30

0x43da,	// (0x00043c74) list_single_popup_jap_candidate_pane_ParamLimits

0x43da,	// (0x00043c74) list_single_popup_jap_candidate_pane

0x34c0,	// (0x00042d5a) list_highlight_pane_cp30

0x43ef,	// (0x00043c89) list_single_popup_jap_candidate_pane_t1

0x43fe,	// (0x00043c98) level_1_signal

0x4410,	// (0x00043caa) level_2_signal

0x4423,	// (0x00043cbd) level_3_signal

0x4436,	// (0x00043cd0) level_4_signal

0x4449,	// (0x00043ce3) level_5_signal

0x445c,	// (0x00043cf6) level_6_signal

0x446f,	// (0x00043d09) level_7_signal

0x43fe,	// (0x00043c98) level_1_battery

0x4410,	// (0x00043caa) level_2_battery

0x4423,	// (0x00043cbd) level_3_battery

0x4436,	// (0x00043cd0) level_4_battery

0x4449,	// (0x00043ce3) level_5_battery

0x445c,	// (0x00043cf6) level_6_battery

0x446f,	// (0x00043d09) level_7_battery

0x449a,	// (0x00043d34) list_menu_pane_ParamLimits

0x449a,	// (0x00043d34) list_menu_pane

0x44b0,	// (0x00043d4a) scroll_pane_cp25_ParamLimits

0x44b0,	// (0x00043d4a) scroll_pane_cp25

0x44c9,	// (0x00043d63) list_double2_graphic_pane_cp2_ParamLimits

0x44c9,	// (0x00043d63) list_double2_graphic_pane_cp2

0x44c9,	// (0x00043d63) list_double2_large_graphic_pane_cp2_ParamLimits

0x44c9,	// (0x00043d63) list_double2_large_graphic_pane_cp2

0x44c9,	// (0x00043d63) list_double2_pane_cp2_ParamLimits

0x44c9,	// (0x00043d63) list_double2_pane_cp2

0x44c9,	// (0x00043d63) list_double_graphic_pane_cp2_ParamLimits

0x44c9,	// (0x00043d63) list_double_graphic_pane_cp2

0x44c9,	// (0x00043d63) list_double_large_graphic_pane_cp2_ParamLimits

0x44c9,	// (0x00043d63) list_double_large_graphic_pane_cp2

0x44c9,	// (0x00043d63) list_double_number_pane_cp2_ParamLimits

0x44c9,	// (0x00043d63) list_double_number_pane_cp2

0x44c9,	// (0x00043d63) list_double_pane_cp2_ParamLimits

0x44c9,	// (0x00043d63) list_double_pane_cp2

0xd3ba,	// (0x0004cc54) list_single_2graphic_pane_cp2_ParamLimits

0xd3ba,	// (0x0004cc54) list_single_2graphic_pane_cp2

0xd3ba,	// (0x0004cc54) list_single_graphic_heading_pane_cp2_ParamLimits

0xd3ba,	// (0x0004cc54) list_single_graphic_heading_pane_cp2

0xd3ba,	// (0x0004cc54) list_single_graphic_pane_cp2_ParamLimits

0xd3ba,	// (0x0004cc54) list_single_graphic_pane_cp2

0xd3ba,	// (0x0004cc54) list_single_heading_pane_cp2_ParamLimits

0xd3ba,	// (0x0004cc54) list_single_heading_pane_cp2

0x4506,	// (0x00043da0) list_single_large_graphic_pane_cp2_ParamLimits

0x4506,	// (0x00043da0) list_single_large_graphic_pane_cp2

0xd3ba,	// (0x0004cc54) list_single_number_heading_pane_cp2_ParamLimits

0xd3ba,	// (0x0004cc54) list_single_number_heading_pane_cp2

0xd3ba,	// (0x0004cc54) list_single_number_pane_cp2_ParamLimits

0xd3ba,	// (0x0004cc54) list_single_number_pane_cp2

0xd3ba,	// (0x0004cc54) list_single_pane_cp2_ParamLimits

0xd3ba,	// (0x0004cc54) list_single_pane_cp2

0x4582,	// (0x00043e1c) bg_popup_sub_pane_cp22

0x15ea,	// (0x00040e84) popup_side_volume_key_window_g1

0x1614,	// (0x00040eae) popup_side_volume_key_window_t1

0x1630,	// (0x00040eca) volume_small_pane_cp1

0x381b,	// (0x000430b5) bg_popup_sub_pane_cp24_ParamLimits

0x381b,	// (0x000430b5) bg_popup_sub_pane_cp24

0x4598,	// (0x00043e32) fep_china_uni_candidate_pane_ParamLimits

0x4598,	// (0x00043e32) fep_china_uni_candidate_pane

0x45ac,	// (0x00043e46) fep_china_uni_entry_pane

0x45bc,	// (0x00043e56) popup_fep_china_uni_window_g1

0x45d8,	// (0x00043e72) fep_china_uni_entry_pane_g1

0x45e0,	// (0x00043e7a) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x0004efc1) fep_china_uni_entry_pane_g

0x45e8,	// (0x00043e82) fep_entry_item_pane

0x45f2,	// (0x00043e8c) fep_candidate_item_pane

0x45fa,	// (0x00043e94) fep_china_uni_candidate_pane_g1

0x4602,	// (0x00043e9c) fep_china_uni_candidate_pane_g2

0x460a,	// (0x00043ea4) fep_china_uni_candidate_pane_g3

0x4612,	// (0x00043eac) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x0004efc6) fep_china_uni_candidate_pane_g

0x34b6,	// (0x00042d50) fep_entry_item_pane_g1

0x461a,	// (0x00043eb4) fep_entry_item_pane_t1_ParamLimits

0x461a,	// (0x00043eb4) fep_entry_item_pane_t1

0x4630,	// (0x00043eca) fep_candidate_item_pane_t1_ParamLimits

0x4630,	// (0x00043eca) fep_candidate_item_pane_t1

0x4645,	// (0x00043edf) fep_candidate_item_pane_t2_ParamLimits

0x4645,	// (0x00043edf) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x0004efcf) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x0004efcf) fep_candidate_item_pane_t

0x35a0,	// (0x00042e3a) list_highlight_pane_cp31_ParamLimits

0x35a0,	// (0x00042e3a) list_highlight_pane_cp31

0x4657,	// (0x00043ef1) level_1_signal_lsc

0x4660,	// (0x00043efa) level_2_signal_lsc

0x4669,	// (0x00043f03) level_3_signal_lsc

0x4672,	// (0x00043f0c) level_4_signal_lsc

0x467b,	// (0x00043f15) level_5_signal_lsc

0x4684,	// (0x00043f1e) level_6_signal_lsc

0x468d,	// (0x00043f27) level_7_signal_lsc

0x468d,	// (0x00043f27) level_1_battery_lsc

0x4696,	// (0x00043f30) level_2_battery_lsc

0x469f,	// (0x00043f39) level_3_battery_lsc

0x46a8,	// (0x00043f42) level_4_battery_lsc

0x46b1,	// (0x00043f4b) level_5_battery_lsc

0x46ba,	// (0x00043f54) level_6_battery_lsc

0x4657,	// (0x00043ef1) level_7_battery_lsc

0x46c3,	// (0x00043f5d) scroll_handle_focus_pane_g1

0x46cc,	// (0x00043f66) scroll_handle_focus_pane_g2

0x46d5,	// (0x00043f6f) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x0004efd4) scroll_handle_focus_pane_g

0xbae5,	// (0x0004b37f) list_single_2graphic_pane_g1_ParamLimits

0xbae5,	// (0x0004b37f) list_single_2graphic_pane_g1

0xbf94,	// (0x0004b82e) list_single_2graphic_pane_g2_ParamLimits

0xbf94,	// (0x0004b82e) list_single_2graphic_pane_g2

0x1f93,	// (0x0004182d) list_single_2graphic_pane_g3_ParamLimits

0x1f93,	// (0x0004182d) list_single_2graphic_pane_g3

0xbaf1,	// (0x0004b38b) list_single_2graphic_pane_g4_ParamLimits

0xbaf1,	// (0x0004b38b) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x0004efdb) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x0004efdb) list_single_2graphic_pane_g

0xbafd,	// (0x0004b397) list_single_2graphic_pane_t1_ParamLimits

0xbafd,	// (0x0004b397) list_single_2graphic_pane_t1

0xbfd2,	// (0x0004b86c) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbfd2,	// (0x0004b86c) list_double2_graphic_large_graphic_pane_g1

0xb76b,	// (0x0004b005) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb76b,	// (0x0004b005) list_double2_graphic_large_graphic_pane_g2

0xbfbd,	// (0x0004b857) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xbfbd,	// (0x0004b857) list_double2_graphic_large_graphic_pane_g3

0xbb2b,	// (0x0004b3c5) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbb2b,	// (0x0004b3c5) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x0004efe4) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x0004efe4) list_double2_graphic_large_graphic_pane_g

0xbb37,	// (0x0004b3d1) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbb37,	// (0x0004b3d1) list_double2_graphic_large_graphic_pane_t1

0xbb4d,	// (0x0004b3e7) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbb4d,	// (0x0004b3e7) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x0004efed) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x0004efed) list_double2_graphic_large_graphic_pane_t

0x481d,	// (0x000440b7) popup_fast_swap_window_ParamLimits

0x481d,	// (0x000440b7) popup_fast_swap_window

0x4839,	// (0x000440d3) popup_side_volume_key_window

0x4855,	// (0x000440ef) stacon_top_pane

0x485f,	// (0x000440f9) status_pane_ParamLimits

0x485f,	// (0x000440f9) status_pane

0xd477,	// (0x0004cd11) status_small_pane

0x34c0,	// (0x00042d5a) control_pane

0x34c0,	// (0x00042d5a) stacon_bottom_pane

0x3dfe,	// (0x00043698) scroll_pane_cp121

0x3df5,	// (0x0004368f) set_content_pane

0x46de,	// (0x00043f78) bg_active_tab_pane_g1_cp1

0x46e7,	// (0x00043f81) bg_active_tab_pane_g2_cp1

0x46f0,	// (0x00043f8a) bg_active_tab_pane_g3_cp1

0x46de,	// (0x00043f78) bg_passive_tab_pane_g1_cp1

0x46e7,	// (0x00043f81) bg_passive_tab_pane_g2_cp1

0x46f0,	// (0x00043f8a) bg_passive_tab_pane_g3_cp1

0x46f9,	// (0x00043f93) bg_active_tab_pane_g1_cp2

0x46e7,	// (0x00043f81) bg_active_tab_pane_g2_cp2

0x4702,	// (0x00043f9c) bg_active_tab_pane_g3_cp2

0x46f9,	// (0x00043f93) bg_passive_tab_pane_g1_cp2

0x46e7,	// (0x00043f81) bg_passive_tab_pane_g2_cp2

0x4702,	// (0x00043f9c) bg_passive_tab_pane_g3_cp2

0x470b,	// (0x00043fa5) bg_active_tab_pane_g1_cp3

0x46e7,	// (0x00043f81) bg_active_tab_pane_g2_cp3

0x4714,	// (0x00043fae) bg_active_tab_pane_g3_cp3

0x470b,	// (0x00043fa5) bg_passive_tab_pane_g1_cp3

0x46e7,	// (0x00043f81) bg_passive_tab_pane_g2_cp3

0x4714,	// (0x00043fae) bg_passive_tab_pane_g3_cp3

0x471d,	// (0x00043fb7) bg_active_tab_pane_g1_cp4

0x46e7,	// (0x00043f81) bg_active_tab_pane_g2_cp4

0x4728,	// (0x00043fc2) bg_active_tab_pane_g3_cp4

0x471d,	// (0x00043fb7) bg_passive_tab_pane_g1_cp4

0x46e7,	// (0x00043f81) bg_passive_tab_pane_g2_cp4

0x4728,	// (0x00043fc2) bg_passive_tab_pane_g3_cp4

0x4771,	// (0x0004400b) bg_active_tab_pane_g1_cp5

0x46e7,	// (0x00043f81) bg_active_tab_pane_g2_cp5

0x477a,	// (0x00044014) bg_active_tab_pane_g3_cp5

0x4771,	// (0x0004400b) bg_passive_tab_pane_g1_cp5

0x46e7,	// (0x00043f81) bg_passive_tab_pane_g2_cp5

0x477a,	// (0x00044014) bg_passive_tab_pane_g3_cp5

0x6dd1,	// (0x0004666b) list_set_graphic_pane_ParamLimits

0x6dd1,	// (0x0004666b) list_set_graphic_pane

0x34c0,	// (0x00042d5a) bg_set_opt_pane_cp4

0xd447,	// (0x0004cce1) list_set_graphic_pane_g1_ParamLimits

0xd447,	// (0x0004cce1) list_set_graphic_pane_g1

0xd453,	// (0x0004cced) list_set_graphic_pane_g2_ParamLimits

0xd453,	// (0x0004cced) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x0004eff2) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x0004eff2) list_set_graphic_pane_g

0x0009,

0xfac1,	// (0x0004f35b) volume_small_pane_cp_g

0x47d0,	// (0x0004406a) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x47d0,	// (0x0004406a) list_double2_large_graphic_pane_g1_cp2

0x47dc,	// (0x00044076) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x47dc,	// (0x00044076) list_double2_large_graphic_pane_g2_cp2

0x47ed,	// (0x00044087) list_double2_large_graphic_pane_g3_cp2

0x47f5,	// (0x0004408f) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x47f5,	// (0x0004408f) list_double2_large_graphic_pane_t1_cp2

0x480b,	// (0x000440a5) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x480b,	// (0x000440a5) list_double2_large_graphic_pane_t2_cp2

0x63db,	// (0x00045c75) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x63db,	// (0x00045c75) list_double_large_graphic_pane_g1_cp2

0x63ec,	// (0x00045c86) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x63ec,	// (0x00045c86) list_double_large_graphic_pane_g2_cp2

0x4986,	// (0x00044220) list_double_large_graphic_pane_g3_cp2

0x63fd,	// (0x00045c97) list_double_large_graphic_pane_g4_cp

0x6405,	// (0x00045c9f) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x6405,	// (0x00045c9f) list_double_large_graphic_pane_t1_cp2

0x641c,	// (0x00045cb6) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x641c,	// (0x00045cb6) list_double_large_graphic_pane_t2_cp2

0x4878,	// (0x00044112) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4878,	// (0x00044112) list_double2_graphic_pane_g1_cp2

0x4886,	// (0x00044120) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4886,	// (0x00044120) list_double2_graphic_pane_g2_cp2

0x4897,	// (0x00044131) list_double2_graphic_pane_g3_cp2

0x48a1,	// (0x0004413b) list_double2_graphic_pane_t1_cp2_ParamLimits

0x48a1,	// (0x0004413b) list_double2_graphic_pane_t1_cp2

0x48b7,	// (0x00044151) list_double2_graphic_pane_t2_cp2_ParamLimits

0x48b7,	// (0x00044151) list_double2_graphic_pane_t2_cp2

0x48c9,	// (0x00044163) list_single_number_heading_pane_g1_cp2_ParamLimits

0x48c9,	// (0x00044163) list_single_number_heading_pane_g1_cp2

0x48d5,	// (0x0004416f) list_single_number_heading_pane_g2_cp2

0x48dd,	// (0x00044177) list_single_number_heading_pane_t1_cp2_ParamLimits

0x48dd,	// (0x00044177) list_single_number_heading_pane_t1_cp2

0x48f3,	// (0x0004418d) list_single_number_heading_pane_t2_cp2_ParamLimits

0x48f3,	// (0x0004418d) list_single_number_heading_pane_t2_cp2

0x4905,	// (0x0004419f) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4905,	// (0x0004419f) list_single_number_heading_pane_t3_cp2

0x48c9,	// (0x00044163) list_single_heading_pane_g1_cp2_ParamLimits

0x48c9,	// (0x00044163) list_single_heading_pane_g1_cp2

0x48d5,	// (0x0004416f) list_single_heading_pane_g2_cp2

0x48dd,	// (0x00044177) list_single_heading_pane_t1_cp2_ParamLimits

0x48dd,	// (0x00044177) list_single_heading_pane_t1_cp2

0x61e3,	// (0x00045a7d) list_single_heading_pane_t2_cp2_ParamLimits

0x61e3,	// (0x00045a7d) list_single_heading_pane_t2_cp2

0x612b,	// (0x000459c5) list_double_graphic_pane_g1_cp2_ParamLimits

0x612b,	// (0x000459c5) list_double_graphic_pane_g1_cp2

0x6137,	// (0x000459d1) list_double_graphic_pane_g2_cp2_ParamLimits

0x6137,	// (0x000459d1) list_double_graphic_pane_g2_cp2

0x6146,	// (0x000459e0) list_double_graphic_pane_g3_cp2

0x614e,	// (0x000459e8) list_double_graphic_pane_t1_cp2_ParamLimits

0x614e,	// (0x000459e8) list_double_graphic_pane_t1_cp2

0x6164,	// (0x000459fe) list_double_graphic_pane_t2_cp2_ParamLimits

0x6164,	// (0x000459fe) list_double_graphic_pane_t2_cp2

0x497a,	// (0x00044214) list_double_number_pane_g1_cp2_ParamLimits

0x497a,	// (0x00044214) list_double_number_pane_g1_cp2

0x4986,	// (0x00044220) list_double_number_pane_g2_cp2

0x60ef,	// (0x00045989) list_double_number_pane_t1_cp2_ParamLimits

0x60ef,	// (0x00045989) list_double_number_pane_t1_cp2

0x6103,	// (0x0004599d) list_double_number_pane_t2_cp2_ParamLimits

0x6103,	// (0x0004599d) list_double_number_pane_t2_cp2

0x6119,	// (0x000459b3) list_double_number_pane_t3_cp2_ParamLimits

0x6119,	// (0x000459b3) list_double_number_pane_t3_cp2

0x5fd8,	// (0x00045872) list_single_graphic_pane_g1_cp2_ParamLimits

0x5fd8,	// (0x00045872) list_single_graphic_pane_g1_cp2

0x49de,	// (0x00044278) list_single_graphic_pane_g2_cp2_ParamLimits

0x49de,	// (0x00044278) list_single_graphic_pane_g2_cp2

0x49ea,	// (0x00044284) list_single_graphic_pane_g3_cp2

0x5fae,	// (0x00045848) list_single_graphic_pane_t1_cp2_ParamLimits

0x5fae,	// (0x00045848) list_single_graphic_pane_t1_cp2

0x49de,	// (0x00044278) list_single_number_pane_g1_cp2_ParamLimits

0x49de,	// (0x00044278) list_single_number_pane_g1_cp2

0x49ea,	// (0x00044284) list_single_number_pane_g2_cp2

0x5fae,	// (0x00045848) list_single_number_pane_t1_cp2_ParamLimits

0x5fae,	// (0x00045848) list_single_number_pane_t1_cp2

0x5fc4,	// (0x0004585e) list_single_number_pane_t2_cp2_ParamLimits

0x5fc4,	// (0x0004585e) list_single_number_pane_t2_cp2

0x47dc,	// (0x00044076) list_double2_pane_g1_cp2_ParamLimits

0x47dc,	// (0x00044076) list_double2_pane_g1_cp2

0x47ed,	// (0x00044087) list_double2_pane_g2_cp2

0x4952,	// (0x000441ec) list_double2_pane_t1_cp2_ParamLimits

0x4952,	// (0x000441ec) list_double2_pane_t1_cp2

0x4968,	// (0x00044202) list_double2_pane_t2_cp2_ParamLimits

0x4968,	// (0x00044202) list_double2_pane_t2_cp2

0x497a,	// (0x00044214) list_double_pane_g1_cp2_ParamLimits

0x497a,	// (0x00044214) list_double_pane_g1_cp2

0x4986,	// (0x00044220) list_double_pane_g2_cp2

0x498e,	// (0x00044228) list_double_pane_t1_cp2_ParamLimits

0x498e,	// (0x00044228) list_double_pane_t1_cp2

0x49a4,	// (0x0004423e) list_double_pane_t2_cp2_ParamLimits

0x49a4,	// (0x0004423e) list_double_pane_t2_cp2

0x49ce,	// (0x00044268) list_single_pane_cp2_g3

0x49de,	// (0x00044278) list_single_pane_g1_cp2_ParamLimits

0x49de,	// (0x00044278) list_single_pane_g1_cp2

0x49ea,	// (0x00044284) list_single_pane_g2_cp2

0x49f2,	// (0x0004428c) list_single_pane_t1_cp2_ParamLimits

0x49f2,	// (0x0004428c) list_single_pane_t1_cp2

0x4a0a,	// (0x000442a4) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x4a0a,	// (0x000442a4) list_single_large_graphic_pane_g1_cp2

0x4a16,	// (0x000442b0) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4a16,	// (0x000442b0) list_single_large_graphic_pane_g2_cp2

0x4a22,	// (0x000442bc) list_single_large_graphic_pane_g3_cp2

0x4a2a,	// (0x000442c4) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4a2a,	// (0x000442c4) list_single_large_graphic_pane_g4_cp1

0x4a44,	// (0x000442de) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4a44,	// (0x000442de) list_single_large_graphic_pane_t1_cp2

0x5f7a,	// (0x00045814) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5f7a,	// (0x00045814) list_single_graphic_heading_pane_g1_cp2

0x5f47,	// (0x000457e1) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5f47,	// (0x000457e1) list_single_graphic_heading_pane_g4_cp2

0x49ea,	// (0x00044284) list_single_graphic_heading_pane_g5_cp2

0x5f86,	// (0x00045820) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5f86,	// (0x00045820) list_single_graphic_heading_pane_t1_cp2

0x5f9c,	// (0x00045836) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5f9c,	// (0x00045836) list_single_graphic_heading_pane_t2_cp2

0x5f3b,	// (0x000457d5) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5f3b,	// (0x000457d5) list_single_2graphic_pane_g1_cp2

0x5f47,	// (0x000457e1) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5f47,	// (0x000457e1) list_single_2graphic_pane_g2_cp2

0x49ea,	// (0x00044284) list_single_2graphic_pane_g3_cp2

0x5f58,	// (0x000457f2) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5f58,	// (0x000457f2) list_single_2graphic_pane_g4_cp2

0x5f64,	// (0x000457fe) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5f64,	// (0x000457fe) list_single_2graphic_pane_t1_cp2

0x34b6,	// (0x00042d50) list_highlight_pane_g10_cp1

0x5b13,	// (0x000453ad) list_highlight_pane_g1_cp1

0x5b1b,	// (0x000453b5) list_highlight_pane_g2_cp1

0x5b23,	// (0x000453bd) list_highlight_pane_g3_cp1

0x5b2b,	// (0x000453c5) list_highlight_pane_g4_cp1

0x5b33,	// (0x000453cd) list_highlight_pane_g5_cp1

0x5b3b,	// (0x000453d5) list_highlight_pane_g6_cp1

0x5b43,	// (0x000453dd) list_highlight_pane_g7_cp1

0x5b4b,	// (0x000453e5) list_highlight_pane_g8_cp1

0x5b53,	// (0x000453ed) list_highlight_pane_g9_cp1

0xdab9,	// (0x0004d353) form_field_slider_pane_t3

0xdac7,	// (0x0004d361) form_field_slider_pane_t4

0x5a43,	// (0x000452dd) slider_form_pane_ParamLimits

0x5a43,	// (0x000452dd) slider_form_pane

0x34c0,	// (0x00042d5a) control_abbreviations

0x34c0,	// (0x00042d5a) control_conventions

0x34c0,	// (0x00042d5a) control_definitions

0x34c0,	// (0x00042d5a) format_table_attribute

0x622d,	// (0x00045ac7) bg_popup_preview_window_pane_g9

0x34c0,	// (0x00042d5a) format_table_data2

0x34c0,	// (0x00042d5a) format_table_data3

0x34c0,	// (0x00042d5a) format_table_data_example

0x0008,

0x34c0,	// (0x00042d5a) intro_purpose

0xf8ef,	// (0x0004f189) bg_popup_preview_window_pane_g

0x34c0,	// (0x00042d5a) texts_category

0x34c0,	// (0x00042d5a) texts_graphics

0x4a5a,	// (0x000442f4) text_digital

0x4a69,	// (0x00044303) text_primary

0x4a78,	// (0x00044312) text_primary_small

0x4a87,	// (0x00044321) text_secondary

0x4a96,	// (0x00044330) text_title

0x6913,	// (0x000461ad) bg_passive_tab_pane_g1_cp3_srt

0x46e7,	// (0x00043f81) bg_passive_tab_pane_g2_cp3_srt

0x691c,	// (0x000461b6) bg_passive_tab_pane_g3_cp3_srt

0x381b,	// (0x000430b5) bg_active_tab_pane_cp3_srt_ParamLimits

0x381b,	// (0x000430b5) bg_active_tab_pane_cp3_srt

0x6925,	// (0x000461bf) tabs_4_active_pane_srt_g1

0xddfc,	// (0x0004d696) tabs_4_active_pane_srt_t1_ParamLimits

0xddfc,	// (0x0004d696) tabs_4_active_pane_srt_t1

0x6913,	// (0x000461ad) bg_active_tab_pane_g1_cp3_copy1

0x46e7,	// (0x00043f81) bg_active_tab_pane_g2_cp3_copy1

0x691c,	// (0x000461b6) bg_active_tab_pane_g3_cp3_copy1

0x35a0,	// (0x00042e3a) tabs_2_long_active_pane_srt_ParamLimits

0x35a0,	// (0x00042e3a) tabs_2_long_active_pane_srt

0x35a0,	// (0x00042e3a) tabs_2_long_passive_pane_srt_ParamLimits

0x35a0,	// (0x00042e3a) tabs_2_long_passive_pane_srt

0x4de3,	// (0x0004467d) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4de3,	// (0x0004467d) bg_passive_tab_pane_cp4_srt

0x665c,	// (0x00045ef6) bg_passive_tab_pane_g1_cp4_srt

0x46e7,	// (0x00043f81) bg_passive_tab_pane_g2_cp4_srt

0x6665,	// (0x00045eff) bg_passive_tab_pane_g3_cp4_srt

0x35a0,	// (0x00042e3a) bg_active_tab_pane_cp4_srt_ParamLimits

0x35a0,	// (0x00042e3a) bg_active_tab_pane_cp4_srt

0xdc26,	// (0x0004d4c0) tabs_2_long_active_pane_srt_t1_ParamLimits

0xdc26,	// (0x0004d4c0) tabs_2_long_active_pane_srt_t1

0x665c,	// (0x00045ef6) bg_active_tab_pane_g1_cp4_srt

0x46e7,	// (0x00043f81) bg_active_tab_pane_g2_cp4_srt

0x6665,	// (0x00045eff) bg_active_tab_pane_g3_cp4_srt

0x381b,	// (0x000430b5) tabs_3_long_active_pane_srt_ParamLimits

0x381b,	// (0x000430b5) tabs_3_long_active_pane_srt

0x381b,	// (0x000430b5) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x381b,	// (0x000430b5) tabs_3_long_passive_pane_cp_srt

0x381b,	// (0x000430b5) tabs_3_long_passive_pane_srt_ParamLimits

0x381b,	// (0x000430b5) tabs_3_long_passive_pane_srt

0x4de3,	// (0x0004467d) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4de3,	// (0x0004467d) bg_passive_tab_pane_cp5_srt

0x4771,	// (0x0004400b) bg_passive_tab_pane_g1_cp5_srt

0x46e7,	// (0x00043f81) bg_passive_tab_pane_g2_cp5_srt

0x477a,	// (0x00044014) bg_passive_tab_pane_g3_cp5_srt

0x35a0,	// (0x00042e3a) bg_active_tab_pane_cp5_srt_ParamLimits

0x35a0,	// (0x00042e3a) bg_active_tab_pane_cp5_srt

0xdc10,	// (0x0004d4aa) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdc10,	// (0x0004d4aa) tabs_3_long_active_pane_srt_t1

0x4771,	// (0x0004400b) bg_active_tab_pane_g1_cp5_srt

0x46e7,	// (0x00043f81) bg_active_tab_pane_g2_cp5_srt

0x477a,	// (0x00044014) bg_active_tab_pane_g3_cp5_srt

0x663c,	// (0x00045ed6) navi_text_pane_srt_t1

0x6634,	// (0x00045ece) navi_icon_pane_srt_g1

0x4c5f,	// (0x000444f9) midp_editing_number_pane_srt

0x4aa5,	// (0x0004433f) midp_ticker_pane_srt

0x4c67,	// (0x00044501) midp_ticker_pane_srt_g1

0x4c6f,	// (0x00044509) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x0004f011) midp_ticker_pane_srt_g

0x4c77,	// (0x00044511) midp_ticker_pane_srt_t1

0x6625,	// (0x00045ebf) midp_editing_number_pane_t1_copy1

0x4de3,	// (0x0004467d) listscroll_midp_pane

0x4de3,	// (0x0004467d) midp_form_pane

0x4b11,	// (0x000443ab) midp_info_popup_window_ParamLimits

0x4b11,	// (0x000443ab) midp_info_popup_window

0x3ebb,	// (0x00043755) bg_popup_sub_pane_cp50_ParamLimits

0x3ebb,	// (0x00043755) bg_popup_sub_pane_cp50

0x573f,	// (0x00044fd9) listscroll_midp_info_pane_ParamLimits

0x573f,	// (0x00044fd9) listscroll_midp_info_pane

0x5727,	// (0x00044fc1) listscroll_form_midp_pane_ParamLimits

0x5727,	// (0x00044fc1) listscroll_form_midp_pane

0x5733,	// (0x00044fcd) scroll_bar_cp050

0xdaad,	// (0x0004d347) list_midp_pane

0x7368,	// (0x00046c02) signal_pane_g2_cp

0x5641,	// (0x00044edb) listscroll_midp_info_pane_t1_ParamLimits

0x5641,	// (0x00044edb) listscroll_midp_info_pane_t1

0x5659,	// (0x00044ef3) listscroll_midp_info_pane_t2_ParamLimits

0x5659,	// (0x00044ef3) listscroll_midp_info_pane_t2

0x5697,	// (0x00044f31) listscroll_midp_info_pane_t3_ParamLimits

0x5697,	// (0x00044f31) listscroll_midp_info_pane_t3

0x56d1,	// (0x00044f6b) listscroll_midp_info_pane_t4_ParamLimits

0x56d1,	// (0x00044f6b) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x0004f0c4) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x0004f0c4) listscroll_midp_info_pane_t

0x3f7f,	// (0x00043819) scroll_pane_cp21

0x55df,	// (0x00044e79) form_midp_field_choice_group_pane

0x55e8,	// (0x00044e82) form_midp_field_text_pane

0x5627,	// (0x00044ec1) form_midp_field_time_pane

0x562f,	// (0x00044ec9) form_midp_gauge_slider_pane

0x5638,	// (0x00044ed2) form_midp_gauge_wait_pane

0x34c0,	// (0x00042d5a) form_midp_image_pane

0xbb5f,	// (0x0004b3f9) list_single_midp_pane_ParamLimits

0xbb5f,	// (0x0004b3f9) list_single_midp_pane

0xda8b,	// (0x0004d325) form_midp_field_text_pane_t1

0x5361,	// (0x00044bfb) input_focus_pane_cp050

0x55ce,	// (0x00044e68) list_midp_form_text_pane

0x5566,	// (0x00044e00) form_midp_field_choice_group_pane_t1

0x5574,	// (0x00044e0e) input_focus_pane_cp051

0x5588,	// (0x00044e22) list_midp_choice_pane

0x34c0,	// (0x00042d5a) status_idle_pane

0x554a,	// (0x00044de4) form_midp_field_time_pane_t1

0x34b6,	// (0x00042d50) wait_anim_pane_g2_copy1

0x5558,	// (0x00044df2) form_midp_field_time_pane_t2

0x0001,

0x4bbf,	// (0x00044459) aid_navinavi_width_2_pane

0xf825,	// (0x0004f0bf) form_midp_field_time_pane_t

0x34c0,	// (0x00042d5a) input_focus_pane_cp052

0x34c0,	// (0x00042d5a) bg_input_focus_pane_cp040

0x550a,	// (0x00044da4) form_midp_gauge_slider_pane_t1

0x5518,	// (0x00044db2) form_midp_gauge_slider_pane_t2

0xda6f,	// (0x0004d309) form_midp_gauge_slider_pane_t3

0xda7d,	// (0x0004d317) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x0004f0b6) form_midp_gauge_slider_pane_t

0x5542,	// (0x00044ddc) form_midp_slider_pane

0x35a0,	// (0x00042e3a) bg_input_focus_pane_cp041_ParamLimits

0x35a0,	// (0x00042e3a) bg_input_focus_pane_cp041

0x54d7,	// (0x00044d71) form_midp_gauge_wait_pane_t1_ParamLimits

0x54d7,	// (0x00044d71) form_midp_gauge_wait_pane_t1

0x54e9,	// (0x00044d83) form_midp_gauge_wait_pane_t2_ParamLimits

0x54e9,	// (0x00044d83) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x0004f0b1) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x0004f0b1) form_midp_gauge_wait_pane_t

0x54fb,	// (0x00044d95) form_midp_wait_pane_ParamLimits

0x54fb,	// (0x00044d95) form_midp_wait_pane

0x54a1,	// (0x00044d3b) form_midp_image_pane_g1

0x54aa,	// (0x00044d44) form_midp_image_pane_t1

0x54b9,	// (0x00044d53) form_midp_image_pane_t2

0x54c8,	// (0x00044d62) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x0004f0aa) form_midp_image_pane_t

0x5498,	// (0x00044d32) list_single_midp_pane_g1

0x0797,	// (0x00040031) list_single_midp_pane_t1

0xda5a,	// (0x0004d2f4) list_midp_form_item_pane_ParamLimits

0xda5a,	// (0x0004d2f4) list_midp_form_item_pane

0x4b67,	// (0x00044401) list_midp_form_item_pane_t1

0x4b76,	// (0x00044410) midp_ticker_pane_g1

0x4b82,	// (0x0004441c) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x0004eff7) midp_ticker_pane_g

0x4b8e,	// (0x00044428) midp_ticker_pane_t1

0x6876,	// (0x00046110) midp_editing_number_pane_t1

0x6854,	// (0x000460ee) midp_editing_number_pane

0x6863,	// (0x000460fd) midp_ticker_pane

0x6615,	// (0x00045eaf) ai_message_heading_pane

0x34c0,	// (0x00042d5a) bg_popup_window_pane_cp14

0x661d,	// (0x00045eb7) listscroll_ai_message_pane

0x659f,	// (0x00045e39) ai_message_heading_pane_g1_ParamLimits

0x659f,	// (0x00045e39) ai_message_heading_pane_g1

0x65ab,	// (0x00045e45) ai_message_heading_pane_g2_ParamLimits

0x65ab,	// (0x00045e45) ai_message_heading_pane_g2

0x65b7,	// (0x00045e51) ai_message_heading_pane_g3_ParamLimits

0x65b7,	// (0x00045e51) ai_message_heading_pane_g3

0x65c3,	// (0x00045e5d) ai_message_heading_pane_g4_ParamLimits

0x65c3,	// (0x00045e5d) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x0004f1eb) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x0004f1eb) ai_message_heading_pane_g

0x65cf,	// (0x00045e69) ai_message_heading_pane_t1_ParamLimits

0x65cf,	// (0x00045e69) ai_message_heading_pane_t1

0x65e9,	// (0x00045e83) ai_message_heading_pane_t2_ParamLimits

0x65e9,	// (0x00045e83) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x0004f1f4) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x0004f1f4) ai_message_heading_pane_t

0x65fb,	// (0x00045e95) bg_popup_heading_pane_cp1_ParamLimits

0x65fb,	// (0x00045e95) bg_popup_heading_pane_cp1

0x658d,	// (0x00045e27) list_ai_message_pane_ParamLimits

0x658d,	// (0x00045e27) list_ai_message_pane

0x3f7f,	// (0x00043819) scroll_pane_cp10

0x6529,	// (0x00045dc3) list_ai_message_pane_g1

0x6531,	// (0x00045dcb) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x0004f1c8) list_ai_message_pane_g

0x6539,	// (0x00045dd3) list_ai_message_pane_t1_ParamLimits

0x6539,	// (0x00045dd3) list_ai_message_pane_t1

0x654e,	// (0x00045de8) list_ai_message_pane_t2_ParamLimits

0x654e,	// (0x00045de8) list_ai_message_pane_t2

0x6563,	// (0x00045dfd) list_ai_message_pane_t3_ParamLimits

0x6563,	// (0x00045dfd) list_ai_message_pane_t3

0x6578,	// (0x00045e12) list_ai_message_pane_t4_ParamLimits

0x6578,	// (0x00045e12) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x0004f1cd) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x0004f1cd) list_ai_message_pane_t

0xdbef,	// (0x0004d489) cell_ai_soft_ind_pane_ParamLimits

0xdbef,	// (0x0004d489) cell_ai_soft_ind_pane

0x4ba0,	// (0x0004443a) cell_ai_soft_ind_pane_g1_ParamLimits

0x4ba0,	// (0x0004443a) cell_ai_soft_ind_pane_g1

0x34c0,	// (0x00042d5a) grid_highlight_cp1

0x4bad,	// (0x00044447) text_secondary_cp56_ParamLimits

0x4bad,	// (0x00044447) text_secondary_cp56

0x64e9,	// (0x00045d83) example_general_pane_ParamLimits

0x64e9,	// (0x00045d83) example_general_pane

0x64f5,	// (0x00045d8f) example_parent_pane_g1_ParamLimits

0x64f5,	// (0x00045d8f) example_parent_pane_g1

0x6501,	// (0x00045d9b) example_parent_pane_t1_ParamLimits

0x6501,	// (0x00045d9b) example_parent_pane_t1

0xc53d,	// (0x0004bdd7) popup_preview_text_window_ParamLimits

0xc53d,	// (0x0004bdd7) popup_preview_text_window

0x49d6,	// (0x00044270) list_single_pane_cp2_g4

0x38d1,	// (0x0004316b) bg_popup_preview_window_pane_ParamLimits

0x38d1,	// (0x0004316b) bg_popup_preview_window_pane

0x6235,	// (0x00045acf) popup_preview_text_window_t1_ParamLimits

0x6235,	// (0x00045acf) popup_preview_text_window_t1

0x6253,	// (0x00045aed) popup_preview_text_window_t2_ParamLimits

0x6253,	// (0x00045aed) popup_preview_text_window_t2

0x629c,	// (0x00045b36) popup_preview_text_window_t3_ParamLimits

0x629c,	// (0x00045b36) popup_preview_text_window_t3

0x62e1,	// (0x00045b7b) popup_preview_text_window_t4_ParamLimits

0x62e1,	// (0x00045b7b) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x0004f19c) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x0004f19c) popup_preview_text_window_t

0x635f,	// (0x00045bf9) scroll_pane_cp11

0x52ed,	// (0x00044b87) bg_popup_preview_window_pane_g1

0x61f5,	// (0x00045a8f) bg_popup_preview_window_pane_g2

0x61fd,	// (0x00045a97) bg_popup_preview_window_pane_g3

0x6205,	// (0x00045a9f) bg_popup_preview_window_pane_g4

0x620d,	// (0x00045aa7) bg_popup_preview_window_pane_g5

0x6215,	// (0x00045aaf) bg_popup_preview_window_pane_g6

0x621d,	// (0x00045ab7) bg_popup_preview_window_pane_g7

0x6225,	// (0x00045abf) bg_popup_preview_window_pane_g8

0x0e7b,	// (0x00040715) aid_popup_width_pane

0xc4b9,	// (0x0004bd53) popup_midp_note_alarm_window_ParamLimits

0xc4b9,	// (0x0004bd53) popup_midp_note_alarm_window

0x3e0f,	// (0x000436a9) data_form_pane_ParamLimits

0xb9c7,	// (0x0004b261) form_field_data_pane_g1

0xb9d1,	// (0x0004b26b) form_field_data_pane_t1_ParamLimits

0x3e1b,	// (0x000436b5) input_focus_pane_ParamLimits

0x0456,	// (0x0003fcf0) data_form_wide_pane_ParamLimits

0x0467,	// (0x0003fd01) form_field_data_wide_pane_g1

0x0473,	// (0x0003fd0d) form_field_data_wide_pane_t1_ParamLimits

0x3b80,	// (0x0004341a) input_focus_pane_cp6_ParamLimits

0xd2a8,	// (0x0004cb42) input_popup_find_pane_g1_ParamLimits

0xd2a8,	// (0x0004cb42) input_popup_find_pane_g1

0x1499,	// (0x00040d33) aid_navi_side_left_pane

0x14ae,	// (0x00040d48) aid_navi_side_right_pane

0x5c0e,	// (0x000454a8) bg_popup_window_pane_cp30_ParamLimits

0x5c0e,	// (0x000454a8) bg_popup_window_pane_cp30

0x5c88,	// (0x00045522) popup_midp_note_alarm_window_g1_ParamLimits

0x5c88,	// (0x00045522) popup_midp_note_alarm_window_g1

0x5cb8,	// (0x00045552) popup_midp_note_alarm_window_t1_ParamLimits

0x5cb8,	// (0x00045552) popup_midp_note_alarm_window_t1

0x5d59,	// (0x000455f3) popup_midp_note_alarm_window_t2_ParamLimits

0x5d59,	// (0x000455f3) popup_midp_note_alarm_window_t2

0x5e07,	// (0x000456a1) popup_midp_note_alarm_window_t3_ParamLimits

0x5e07,	// (0x000456a1) popup_midp_note_alarm_window_t3

0x5e39,	// (0x000456d3) popup_midp_note_alarm_window_t4_ParamLimits

0x5e39,	// (0x000456d3) popup_midp_note_alarm_window_t4

0x5e5f,	// (0x000456f9) popup_midp_note_alarm_window_t5_ParamLimits

0x5e5f,	// (0x000456f9) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x0004f139) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x0004f139) popup_midp_note_alarm_window_t

0x5f0b,	// (0x000457a5) wait_bar_pane_cp1_ParamLimits

0x5f0b,	// (0x000457a5) wait_bar_pane_cp1

0x34c0,	// (0x00042d5a) wait_anim_pane_copy1

0x34c0,	// (0x00042d5a) wait_border_pane_copy1

0x58e8,	// (0x00045182) wait_border_pane_g1_copy1

0x048d,	// (0x0003fd27) form_field_popup_pane_g1

0xb9eb,	// (0x0004b285) form_field_popup_pane_t1_ParamLimits

0x3e1b,	// (0x000436b5) input_focus_pane_cp7_ParamLimits

0x3e3d,	// (0x000436d7) list_form_pane_ParamLimits

0x04ad,	// (0x0003fd47) form_field_popup_wide_pane_g1

0x04b5,	// (0x0003fd4f) form_field_popup_wide_pane_t1_ParamLimits

0x3e1b,	// (0x000436b5) input_focus_pane_cp8_ParamLimits

0x3e49,	// (0x000436e3) list_form_wide_pane_ParamLimits

0x69ab,	// (0x00046245) aid_size_cell_graphic_pane

0xba6a,	// (0x0004b304) data_form_pane_t1_ParamLimits

0xbb87,	// (0x0004b421) data_form_wide_pane_t1_ParamLimits

0xd6df,	// (0x0004cf79) bg_status_flat_pane

0xcf67,	// (0x0004c801) title_pane_t1_ParamLimits

0x3568,	// (0x00042e02) title_pane_t2_ParamLimits

0x358e,	// (0x00042e28) title_pane_t3_ParamLimits

0xf557,	// (0x0004edf1) title_pane_t_ParamLimits

0x43fe,	// (0x00043c98) level_1_signal_ParamLimits

0x4410,	// (0x00043caa) level_2_signal_ParamLimits

0x4423,	// (0x00043cbd) level_3_signal_ParamLimits

0x4436,	// (0x00043cd0) level_4_signal_ParamLimits

0x4449,	// (0x00043ce3) level_5_signal_ParamLimits

0x445c,	// (0x00043cf6) level_6_signal_ParamLimits

0x446f,	// (0x00043d09) level_7_signal_ParamLimits

0x43fe,	// (0x00043c98) level_1_battery_ParamLimits

0x4410,	// (0x00043caa) level_2_battery_ParamLimits

0x4423,	// (0x00043cbd) level_3_battery_ParamLimits

0x4436,	// (0x00043cd0) level_4_battery_ParamLimits

0x4449,	// (0x00043ce3) level_5_battery_ParamLimits

0x445c,	// (0x00043cf6) level_6_battery_ParamLimits

0x446f,	// (0x00043d09) level_7_battery_ParamLimits

0x5b13,	// (0x000453ad) bg_status_flat_pane_g1

0x5b1b,	// (0x000453b5) bg_status_flat_pane_g2

0x5b23,	// (0x000453bd) bg_status_flat_pane_g3

0x5b2b,	// (0x000453c5) bg_status_flat_pane_g4

0x5b33,	// (0x000453cd) bg_status_flat_pane_g5

0x5b3b,	// (0x000453d5) bg_status_flat_pane_g6

0x5b43,	// (0x000453dd) bg_status_flat_pane_g7

0xcff3,	// (0x0004c88d) tabs_3_active_pane_t1_ParamLimits

0xcff3,	// (0x0004c88d) tabs_3_passive_pane_t1_ParamLimits

0xd005,	// (0x0004c89f) tabs_4_active_pane_t1_ParamLimits

0xd005,	// (0x0004c89f) tabs_4_1_passive_pane_t1_ParamLimits

0xd2b6,	// (0x0004cb50) tabs_2_active_pane_t1_ParamLimits

0xd2b6,	// (0x0004cb50) tabs_2_passive_pane_t1_ParamLimits

0x35a0,	// (0x00042e3a) bg_active_tab_pane_cp4_ParamLimits

0xd2c8,	// (0x0004cb62) tabs_2_long_active_pane_t1_ParamLimits

0x4de3,	// (0x0004467d) bg_passive_tab_pane_cp4_ParamLimits

0x1fe8,	// (0x00041882) list_single_midp_graphic_pane_t1_ParamLimits

0x35a0,	// (0x00042e3a) bg_active_tab_pane_cp5_ParamLimits

0xd2db,	// (0x0004cb75) tabs_3_long_active_pane_t1_ParamLimits

0x4de3,	// (0x0004467d) bg_passive_tab_pane_cp5_ParamLimits

0x1fe8,	// (0x00041882) list_single_midp_graphic_pane_t1

0xd6df,	// (0x0004cf79) bg_status_flat_pane_ParamLimits

0x4f7d,	// (0x00044817) indicator_pane_cp2_ParamLimits

0x4f7d,	// (0x00044817) indicator_pane_cp2

0xd85d,	// (0x0004d0f7) navi_pane_srt_ParamLimits

0xd85d,	// (0x0004d0f7) navi_pane_srt

0x50cc,	// (0x00044966) popup_clock_digital_analogue_window_cp1

0x367d,	// (0x00042f17) indicator_pane_t1

0x4aa5,	// (0x0004433f) copy_highlight_pane

0x4aa5,	// (0x0004433f) cursor_graphics_pane

0x4aa5,	// (0x0004433f) graphic_within_text_pane

0x4aa5,	// (0x0004433f) link_highlight_pane

0x6322,	// (0x00045bbc) popup_preview_text_window_t5_ParamLimits

0x6322,	// (0x00045bbc) popup_preview_text_window_t5

0x4bc7,	// (0x00044461) cursor_digital_pane

0x4bc7,	// (0x00044461) cursor_primary_pane

0x4bd8,	// (0x00044472) cursor_primary_small_pane

0x4be0,	// (0x0004447a) cursor_secondary_pane

0x4be8,	// (0x00044482) cursor_title_pane

0x4bc7,	// (0x00044461) link_highlight_digital_pane

0x4bcf,	// (0x00044469) link_highlight_primary_pane

0x4bd8,	// (0x00044472) link_highlight_primary_small_pane

0x4be0,	// (0x0004447a) link_highlight_secondary_pane

0x4be8,	// (0x00044482) link_highlight_title_pane

0x4bc7,	// (0x00044461) copy_highlight_digital_pane

0x4bc7,	// (0x00044461) copy_highlight_primary_pane

0x4bd8,	// (0x00044472) copy_highlight_primary_small_pane

0x4be0,	// (0x0004447a) copy_highlight_secondary_pane

0x4be8,	// (0x00044482) copy_highlight_title_pane

0x4be0,	// (0x0004447a) graphic_text_digital_pane

0x5bb1,	// (0x0004544b) graphic_text_primary_pane

0x5bba,	// (0x00045454) graphic_text_primary_small_pane

0x4bd8,	// (0x00044472) graphic_text_secondary_pane

0x4bc7,	// (0x00044461) graphic_text_title_pane

0xd51b,	// (0x0004cdb5) cursor_primary_pane_g1

0x5ba3,	// (0x0004543d) cursor_text_primary_t1

0xdae9,	// (0x0004d383) cursor_primary_small_pane_g1

0x5b95,	// (0x0004542f) cursor_text_primary_small_t1

0xdadf,	// (0x0004d379) cursor_primary_small_pane_g1_copy1

0x5b7d,	// (0x00045417) cursor_text_primary_small_t1_copy1

0x5b5b,	// (0x000453f5) cursor_text_title_t1

0xdad5,	// (0x0004d36f) cursor_title_pane_g1

0xd51b,	// (0x0004cdb5) cursor_digital_pane_g1

0x4bfa,	// (0x00044494) cursor_text_digital_t1

0x4c1f,	// (0x000444b9) link_highlight_primary_pane_g1

0x5b04,	// (0x0004539e) link_highlight_primary_pane_t1

0x4c08,	// (0x000444a2) link_highlight_primary_small_pane_g1

0x4c10,	// (0x000444aa) link_highlight_primary_small_pane_t1

0x4c1f,	// (0x000444b9) link_highlight_secondary_pane_g1

0x4c27,	// (0x000444c1) link_highlight_secondary_pane_t1

0x5a6c,	// (0x00045306) link_highlight_title_pane_g1

0x5a74,	// (0x0004530e) link_highlight_title_pane_t1

0x5a55,	// (0x000452ef) link_highlight_digital_pane_g1

0x5a5d,	// (0x000452f7) link_highlight_digital_pane_t1

0x592d,	// (0x000451c7) copy_highlight_primary_pane_g1

0x5935,	// (0x000451cf) copy_highlight_primary_pane_t1

0x5907,	// (0x000451a1) copy_highlight_primary_small_pane_g1

0x591e,	// (0x000451b8) copy_highlight_primary_small_pane_t1

0x4c36,	// (0x000444d0) copy_highlight_secondary_pane_g1

0x4c3e,	// (0x000444d8) copy_highlight_secondary_pane_t1

0x5907,	// (0x000451a1) copy_highlight_title_pane_g1

0x590f,	// (0x000451a9) copy_highlight_title_pane_t1

0x592d,	// (0x000451c7) copy_highlight_digital_pane_g1

0x6b75,	// (0x0004640f) copy_highlight_digital_pane_t1

0x6ac9,	// (0x00046363) graphic_text_primary_pane_g1

0x6b59,	// (0x000463f3) graphic_text_primary_pane_t1

0x6b67,	// (0x00046401) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x0004f268) graphic_text_primary_pane_t

0x6b35,	// (0x000463cf) graphic_text_primary_small_pane_g1

0x6b3d,	// (0x000463d7) graphic_text_primary_small_pane_t1

0x6b4b,	// (0x000463e5) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x0004f263) graphic_text_primary_small_pane_t

0x6b11,	// (0x000463ab) graphic_text_secondary_pane_g1

0x6b19,	// (0x000463b3) graphic_text_secondary_pane_t1

0x6b27,	// (0x000463c1) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x0004f25e) graphic_text_secondary_pane_t

0x6aed,	// (0x00046387) graphic_text_title_pane_g1

0x6af5,	// (0x0004638f) graphic_text_title_pane_t1

0x6b03,	// (0x0004639d) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x0004f259) graphic_text_title_pane_t

0x6ac9,	// (0x00046363) graphic_text_digital_pane_g1

0x6ad1,	// (0x0004636b) graphic_text_digital_pane_t1

0x6adf,	// (0x00046379) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x0004f254) graphic_text_digital_pane_t

0x35a0,	// (0x00042e3a) navi_icon_pane_srt_ParamLimits

0x35a0,	// (0x00042e3a) navi_icon_pane_srt

0x34c0,	// (0x00042d5a) navi_midp_pane_srt

0x34c0,	// (0x00042d5a) navi_navi_pane_srt

0x35a0,	// (0x00042e3a) navi_text_pane_srt_ParamLimits

0x35a0,	// (0x00042e3a) navi_text_pane_srt

0x6a94,	// (0x0004632e) navi_navi_icon_text_pane_srt

0x6a9c,	// (0x00046336) navi_navi_pane_srt_g1_ParamLimits

0x6a9c,	// (0x00046336) navi_navi_pane_srt_g1

0x6aae,	// (0x00046348) navi_navi_pane_srt_g2_ParamLimits

0x6aae,	// (0x00046348) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x0004f24f) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x0004f24f) navi_navi_pane_srt_g

0x6ac0,	// (0x0004635a) navi_navi_tabs_pane_srt

0x6a94,	// (0x0004632e) navi_navi_text_pane_srt

0x6a94,	// (0x0004632e) navi_navi_volume_pane_srt

0x6a85,	// (0x0004631f) navi_navi_text_pane_srt_t1

0x2410,	// (0x00041caa) navi_navi_volume_pane_srt_g1

0x2418,	// (0x00041cb2) volume_small_pane_srt_ParamLimits

0x2418,	// (0x00041cb2) volume_small_pane_srt

0x1795,	// (0x0004102f) volume_small_pane_srt_g1_ParamLimits

0x1795,	// (0x0004102f) volume_small_pane_srt_g1

0x17a5,	// (0x0004103f) volume_small_pane_srt_g2_ParamLimits

0x17a5,	// (0x0004103f) volume_small_pane_srt_g2

0x17b6,	// (0x00041050) volume_small_pane_srt_g3_ParamLimits

0x17b6,	// (0x00041050) volume_small_pane_srt_g3

0x17c7,	// (0x00041061) volume_small_pane_srt_g4_ParamLimits

0x17c7,	// (0x00041061) volume_small_pane_srt_g4

0x17d8,	// (0x00041072) volume_small_pane_srt_g5_ParamLimits

0x17d8,	// (0x00041072) volume_small_pane_srt_g5

0x17e9,	// (0x00041083) volume_small_pane_srt_g6_ParamLimits

0x17e9,	// (0x00041083) volume_small_pane_srt_g6

0x17fa,	// (0x00041094) volume_small_pane_srt_g7_ParamLimits

0x17fa,	// (0x00041094) volume_small_pane_srt_g7

0x180b,	// (0x000410a5) volume_small_pane_srt_g8_ParamLimits

0x180b,	// (0x000410a5) volume_small_pane_srt_g8

0x181c,	// (0x000410b6) volume_small_pane_srt_g9_ParamLimits

0x181c,	// (0x000410b6) volume_small_pane_srt_g9

0x182d,	// (0x000410c7) volume_small_pane_srt_g10_ParamLimits

0x182d,	// (0x000410c7) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x0004effc) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x0004effc) volume_small_pane_srt_g

0x397a,	// (0x00043214) query_popup_data_pane_cp2

0x6a6b,	// (0x00046305) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6a6b,	// (0x00046305) navi_navi_icon_text_pane_srt_t1

0x5bb1,	// (0x0004544b) navi_tabs_2_long_pane_srt

0x5bb1,	// (0x0004544b) navi_tabs_2_pane_srt

0x5bb1,	// (0x0004544b) navi_tabs_3_long_pane_srt

0x5bb1,	// (0x0004544b) navi_tabs_3_pane_srt

0x5bb1,	// (0x0004544b) navi_tabs_4_pane_srt

0x23f0,	// (0x00041c8a) tabs_2_active_pane_srt_ParamLimits

0x23f0,	// (0x00041c8a) tabs_2_active_pane_srt

0x2400,	// (0x00041c9a) tabs_2_passive_pane_srt_ParamLimits

0x2400,	// (0x00041c9a) tabs_2_passive_pane_srt

0x5361,	// (0x00044bfb) bg_passive_tab_pane_cp1_srt_ParamLimits

0x5361,	// (0x00044bfb) bg_passive_tab_pane_cp1_srt

0x6a37,	// (0x000462d1) bg_passive_tab_pane_g1_cp1_srt

0x46e7,	// (0x00043f81) bg_passive_tab_pane_g2_cp1_srt

0x6a40,	// (0x000462da) bg_passive_tab_pane_g3_cp1_srt

0x381b,	// (0x000430b5) bg_active_tab_pane_cp1_srt_ParamLimits

0x381b,	// (0x000430b5) bg_active_tab_pane_cp1_srt

0x6a49,	// (0x000462e3) tabs_2_active_pane_srt_g1

0xde80,	// (0x0004d71a) tabs_2_active_pane_srt_t1_ParamLimits

0xde80,	// (0x0004d71a) tabs_2_active_pane_srt_t1

0x6a37,	// (0x000462d1) bg_active_tab_pane_g1_cp1_srt

0x46e7,	// (0x00043f81) bg_active_tab_pane_g2_cp1_srt

0x6a40,	// (0x000462da) bg_active_tab_pane_g3_cp1_srt

0x23bd,	// (0x00041c57) tabs_3_active_pane_srt_ParamLimits

0x23bd,	// (0x00041c57) tabs_3_active_pane_srt

0x23ce,	// (0x00041c68) tabs_3_passive_pane_cp_srt_ParamLimits

0x23ce,	// (0x00041c68) tabs_3_passive_pane_cp_srt

0x23df,	// (0x00041c79) tabs_3_passive_pane_srt_ParamLimits

0x23df,	// (0x00041c79) tabs_3_passive_pane_srt

0x5361,	// (0x00044bfb) bg_passive_tab_pane_cp2_srt_ParamLimits

0x5361,	// (0x00044bfb) bg_passive_tab_pane_cp2_srt

0x4c4d,	// (0x000444e7) bg_passive_tab_pane_g1_cp2_srt

0x46e7,	// (0x00043f81) bg_passive_tab_pane_g2_cp2_srt

0x4c56,	// (0x000444f0) bg_passive_tab_pane_g3_cp2_srt

0x381b,	// (0x000430b5) bg_active_tab_pane_cp2_srt_ParamLimits

0x381b,	// (0x000430b5) bg_active_tab_pane_cp2_srt

0x6a1d,	// (0x000462b7) tabs_3_active_pane_srt_g1

0xde6a,	// (0x0004d704) tabs_3_active_pane_srt_t1_ParamLimits

0xde6a,	// (0x0004d704) tabs_3_active_pane_srt_t1

0x4c4d,	// (0x000444e7) bg_active_tab_pane_g1_cp2_srt

0x46e7,	// (0x00043f81) bg_active_tab_pane_g2_cp2_srt

0x4c56,	// (0x000444f0) bg_active_tab_pane_g3_cp2_srt

0x2375,	// (0x00041c0f) tabs_4_active_pane_srt_ParamLimits

0x2375,	// (0x00041c0f) tabs_4_active_pane_srt

0x2387,	// (0x00041c21) tabs_4_passive_pane_cp2_srt_ParamLimits

0x2387,	// (0x00041c21) tabs_4_passive_pane_cp2_srt

0x1992,	// (0x0004122c) aid_size_cell_toolbar

0x66cd,	// (0x00045f67) main_idle_act_pane_ParamLimits

0x1b4f,	// (0x000413e9) popup_large_graphic_colour_window_ParamLimits

0xc7c9,	// (0x0004c063) popup_toolbar_window_ParamLimits

0xc7c9,	// (0x0004c063) popup_toolbar_window

0x6885,	// (0x0004611f) list_single_graphic_2heading_pane_ParamLimits

0x6885,	// (0x0004611f) list_single_graphic_2heading_pane

0x41af,	// (0x00043a49) aid_size_cell_apps_grid_lsc_pane

0x41c1,	// (0x00043a5b) aid_size_cell_apps_grid_prt_pane

0x4de3,	// (0x0004467d) bg_wml_button_pane_cp1_ParamLimits

0x4de3,	// (0x0004467d) bg_wml_button_pane_cp1

0xda8b,	// (0x0004d325) form_midp_field_text_pane_t1_ParamLimits

0x5361,	// (0x00044bfb) input_focus_pane_cp050_ParamLimits

0x55ce,	// (0x00044e68) list_midp_form_text_pane_ParamLimits

0x5574,	// (0x00044e0e) input_focus_pane_cp051_ParamLimits

0x5588,	// (0x00044e22) list_midp_choice_pane_ParamLimits

0xda28,	// (0x0004d2c2) list_single_2graphic_pane_cp3_ParamLimits

0xda28,	// (0x0004d2c2) list_single_2graphic_pane_cp3

0xda3b,	// (0x0004d2d5) list_single_midp_graphic_pane_ParamLimits

0xda3b,	// (0x0004d2d5) list_single_midp_graphic_pane

0x0669,	// (0x0003ff03) list_single_graphic_2heading_pane_g1_ParamLimits

0x0669,	// (0x0003ff03) list_single_graphic_2heading_pane_g1

0x0675,	// (0x0003ff0f) list_single_graphic_2heading_pane_g4_ParamLimits

0x0675,	// (0x0003ff0f) list_single_graphic_2heading_pane_g4

0x0681,	// (0x0003ff1b) list_single_graphic_2heading_pane_g5_ParamLimits

0x0681,	// (0x0003ff1b) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x0004f04f) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x0004f04f) list_single_graphic_2heading_pane_g

0x068d,	// (0x0003ff27) list_single_graphic_2heading_pane_t1_ParamLimits

0x068d,	// (0x0003ff27) list_single_graphic_2heading_pane_t1

0x06a1,	// (0x0003ff3b) list_single_graphic_2heading_pane_t2_ParamLimits

0x06a1,	// (0x0003ff3b) list_single_graphic_2heading_pane_t2

0x06bd,	// (0x0003ff57) list_single_graphic_2heading_pane_t3_ParamLimits

0x06bd,	// (0x0003ff57) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x0004f056) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x0004f056) list_single_graphic_2heading_pane_t

0x522b,	// (0x00044ac5) bg_popup_sub_pane_cp2

0x5255,	// (0x00044aef) grid_toobar_pane

0x1f63,	// (0x000417fd) cell_toolbar_pane_ParamLimits

0x1f63,	// (0x000417fd) cell_toolbar_pane

0x5291,	// (0x00044b2b) cell_toolbar_pane_g1_ParamLimits

0x5291,	// (0x00044b2b) cell_toolbar_pane_g1

0x52a5,	// (0x00044b3f) cell_toolbar_pane_g2_ParamLimits

0x52a5,	// (0x00044b3f) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x0004f064) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x0004f064) cell_toolbar_pane_g

0x52c7,	// (0x00044b61) grid_highlight_pane_cp2_ParamLimits

0x52c7,	// (0x00044b61) grid_highlight_pane_cp2

0x52e1,	// (0x00044b7b) toolbar_button_pane

0x52ed,	// (0x00044b87) toolbar_button_pane_g1

0x52f5,	// (0x00044b8f) toolbar_button_pane_g2

0x52fd,	// (0x00044b97) toolbar_button_pane_g3

0x5305,	// (0x00044b9f) toolbar_button_pane_g4

0x530d,	// (0x00044ba7) toolbar_button_pane_g5

0x5315,	// (0x00044baf) toolbar_button_pane_g6

0x531d,	// (0x00044bb7) toolbar_button_pane_g7

0x5325,	// (0x00044bbf) toolbar_button_pane_g8

0x532d,	// (0x00044bc7) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x0004f069) toolbar_button_pane_g

0x1fa7,	// (0x00041841) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1fa7,	// (0x00041841) list_single_2graphic_pane_g1_cp3

0xc821,	// (0x0004c0bb) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc821,	// (0x0004c0bb) list_single_2graphic_pane_g2_cp3

0x1fc4,	// (0x0004185e) list_single_2graphic_pane_g3_cp3

0x1648,	// (0x00040ee2) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1648,	// (0x00040ee2) list_single_2graphic_pane_g4_cp3

0x1fcc,	// (0x00041866) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1fcc,	// (0x00041866) list_single_2graphic_pane_t1_cp3

0x5ac1,	// (0x0004535b) list_single_midp_graphic_pane_g2_ParamLimits

0x5ac1,	// (0x0004535b) list_single_midp_graphic_pane_g2

0x0659,	// (0x0003fef3) aid_zoom_text_primary

0x199a,	// (0x00041234) aid_zoom_text_secondary

0xd573,	// (0x0004ce0d) status_small_pane_g7_ParamLimits

0xd573,	// (0x0004ce0d) status_small_pane_g7

0xd596,	// (0x0004ce30) status_small_pane_t1_ParamLimits

0xbf5e,	// (0x0004b7f8) title_pane_g2

0x0003,

0xf54e,	// (0x0004ede8) title_pane_g

0xd1bb,	// (0x0004ca55) aid_size_cell_colour_1_pane_ParamLimits

0xd1bb,	// (0x0004ca55) aid_size_cell_colour_1_pane

0xd1cf,	// (0x0004ca69) aid_size_cell_colour_2_pane_ParamLimits

0xd1cf,	// (0x0004ca69) aid_size_cell_colour_2_pane

0xd1e3,	// (0x0004ca7d) aid_size_cell_colour_3_pane_ParamLimits

0xd1e3,	// (0x0004ca7d) aid_size_cell_colour_3_pane

0xd1f7,	// (0x0004ca91) aid_size_cell_colour_4_pane_ParamLimits

0xd1f7,	// (0x0004ca91) aid_size_cell_colour_4_pane

0x13d6,	// (0x00040c70) title_pane_stacon_g1_ParamLimits

0x13d6,	// (0x00040c70) title_pane_stacon_g1

0x598c,	// (0x00045226) popup_note_wait_window_g3_ParamLimits

0x598c,	// (0x00045226) popup_note_wait_window_g3

0x5a02,	// (0x0004529c) popup_note_wait_window_t5_ParamLimits

0x5a02,	// (0x0004529c) popup_note_wait_window_t5

0x34c0,	// (0x00042d5a) main_feb_china_hwr_fs_writing_pane

0xc1d1,	// (0x0004ba6b) popup_feb_china_hwr_fs_window_ParamLimits

0xc1d1,	// (0x0004ba6b) popup_feb_china_hwr_fs_window

0xc832,	// (0x0004c0cc) aid_size_cell_hwr_fs_ParamLimits

0xc832,	// (0x0004c0cc) aid_size_cell_hwr_fs

0x5361,	// (0x00044bfb) bg_popup_sub_pane_cp3_ParamLimits

0x5361,	// (0x00044bfb) bg_popup_sub_pane_cp3

0xc847,	// (0x0004c0e1) grid_hwr_fs_pane_ParamLimits

0xc847,	// (0x0004c0e1) grid_hwr_fs_pane

0x2043,	// (0x000418dd) linegrid_hwr_fs_pane_ParamLimits

0x2043,	// (0x000418dd) linegrid_hwr_fs_pane

0xc85f,	// (0x0004c0f9) cell_hwr_fs_pane_ParamLimits

0xc85f,	// (0x0004c0f9) cell_hwr_fs_pane

0x536d,	// (0x00044c07) linegrid_hwr_fs_pane_g1_ParamLimits

0x536d,	// (0x00044c07) linegrid_hwr_fs_pane_g1

0xd9fc,	// (0x0004d296) linegrid_hwr_fs_pane_g2_ParamLimits

0xd9fc,	// (0x0004d296) linegrid_hwr_fs_pane_g2

0x538b,	// (0x00044c25) linegrid_hwr_fs_pane_g3_ParamLimits

0x538b,	// (0x00044c25) linegrid_hwr_fs_pane_g3

0x2075,	// (0x0004190f) linegrid_hwr_fs_pane_g4_ParamLimits

0x2075,	// (0x0004190f) linegrid_hwr_fs_pane_g4

0x208f,	// (0x00041929) linegrid_hwr_fs_pane_g5_ParamLimits

0x208f,	// (0x00041929) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f5,	// (0x0004f08f) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x0004f08f) linegrid_hwr_fs_pane_g

0x5397,	// (0x00044c31) cell_hwr_fs_pane_g1_ParamLimits

0x5397,	// (0x00044c31) cell_hwr_fs_pane_g1

0x5162,	// (0x000449fc) cell_hwr_fs_pane_g2_ParamLimits

0x5162,	// (0x000449fc) cell_hwr_fs_pane_g2

0xda0e,	// (0x0004d2a8) cell_hwr_fs_pane_g3_ParamLimits

0xda0e,	// (0x0004d2a8) cell_hwr_fs_pane_g3

0xda1b,	// (0x0004d2b5) cell_hwr_fs_pane_g4_ParamLimits

0xda1b,	// (0x0004d2b5) cell_hwr_fs_pane_g4

0x0003,

0xf800,	// (0x0004f09a) cell_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x0004f09a) cell_hwr_fs_pane_g

0xc885,	// (0x0004c11f) cell_hwr_fs_pane_t1

0x34c0,	// (0x00042d5a) grid_highlight_pane_cp6

0x34c0,	// (0x00042d5a) main_idle_act2_pane

0x3f66,	// (0x00043800) aid_inside_area_popup_secondary

0xdaf3,	// (0x0004d38d) aid_inside_area_window_primary_ParamLimits

0xdaf3,	// (0x0004d38d) aid_inside_area_window_primary

0x6b84,	// (0x0004641e) ai2_news_ticker_pane

0x6b8c,	// (0x00046426) aid_size_cell_ai1_link_ParamLimits

0x6b8c,	// (0x00046426) aid_size_cell_ai1_link

0xde96,	// (0x0004d730) popup_ai2_data_window_ParamLimits

0xde96,	// (0x0004d730) popup_ai2_data_window

0x6bbc,	// (0x00046456) popup_ai2_link_window_ParamLimits

0x6bbc,	// (0x00046456) popup_ai2_link_window

0x5361,	// (0x00044bfb) bg_popup_sub_pane_cp4_ParamLimits

0x5361,	// (0x00044bfb) bg_popup_sub_pane_cp4

0x6bd0,	// (0x0004646a) grid_ai2_link_pane_ParamLimits

0x6bd0,	// (0x0004646a) grid_ai2_link_pane

0x6be7,	// (0x00046481) popup_ai2_link_window_g1_ParamLimits

0x6be7,	// (0x00046481) popup_ai2_link_window_g1

0x6bf3,	// (0x0004648d) popup_ai2_link_window_g2_ParamLimits

0x6bf3,	// (0x0004648d) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x0004f26d) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x0004f26d) popup_ai2_link_window_g

0x6c02,	// (0x0004649c) ai2_mp_button_pane

0x6c0a,	// (0x000464a4) ai2_mp_volume_pane

0x5574,	// (0x00044e0e) bg_popup_sub_pane_cp5_ParamLimits

0x5574,	// (0x00044e0e) bg_popup_sub_pane_cp5

0x6c12,	// (0x000464ac) heading_ai2_gene_pane_ParamLimits

0x6c12,	// (0x000464ac) heading_ai2_gene_pane

0x6c1e,	// (0x000464b8) list_ai2_gene_pane_ParamLimits

0x6c1e,	// (0x000464b8) list_ai2_gene_pane

0x6c66,	// (0x00046500) cell_ai2_link_pane_ParamLimits

0x6c66,	// (0x00046500) cell_ai2_link_pane

0x6c7c,	// (0x00046516) cell_ai2_link_pane_g1

0x34c0,	// (0x00042d5a) grid_highlight_pane_cp7

0x242d,	// (0x00041cc7) ai2_mp_volume_pane_g1

0x6d4c,	// (0x000465e6) ai2_mp_volume_pane_g2

0xdec0,	// (0x0004d75a) list_ai2_gene_pane_t1

0x6d54,	// (0x000465ee) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x0004f286) ai2_mp_volume_pane_g

0x2435,	// (0x00041ccf) volume_small_pane_cp3

0x6d5c,	// (0x000465f6) aid_size_cell_ai2_button

0x6d64,	// (0x000465fe) grid_ai2_button_pane

0x6d6d,	// (0x00046607) cell_ai2_button_pane_ParamLimits

0x6d6d,	// (0x00046607) cell_ai2_button_pane

0x34b6,	// (0x00042d50) cell_ai2_button_pane_g1

0x34c0,	// (0x00042d5a) grid_highlight_pane_cp8

0x6d0c,	// (0x000465a6) ai2_gene_pane_t1_ParamLimits

0x6d0c,	// (0x000465a6) ai2_gene_pane_t1

0xc14b,	// (0x0004b9e5) aid_height_parent_landscape

0xdc3d,	// (0x0004d4d7) aid_height_set_list

0x66cd,	// (0x00045f67) aid_size_parent

0x69ab,	// (0x00046245) aid_size_cell_graphic_pane_ParamLimits

0x6c2e,	// (0x000464c8) popup_ai2_data_window_g1_ParamLimits

0x6c2e,	// (0x000464c8) popup_ai2_data_window_g1

0x6c3a,	// (0x000464d4) ai2_news_ticker_pane_g1

0x6c42,	// (0x000464dc) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x0004f272) ai2_news_ticker_pane_g

0x6c4a,	// (0x000464e4) ai2_news_ticker_pane_t1

0x6c58,	// (0x000464f2) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x0004f277) ai2_news_ticker_pane_t

0x6c85,	// (0x0004651f) heading_ai2_gene_pane_g1

0x6c8d,	// (0x00046527) heading_ai2_gene_pane_t1_ParamLimits

0x6c8d,	// (0x00046527) heading_ai2_gene_pane_t1

0x6ca2,	// (0x0004653c) list_highlight_pane_cp6

0xdeaa,	// (0x0004d744) ai2_gene_pane_ParamLimits

0xdeaa,	// (0x0004d744) ai2_gene_pane

0xdece,	// (0x0004d768) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x0004f27c) list_ai2_gene_pane_t

0x6cdd,	// (0x00046577) list_highlight_pane_cp8_ParamLimits

0x6cdd,	// (0x00046577) list_highlight_pane_cp8

0x6cee,	// (0x00046588) ai2_gene_pane_g1_ParamLimits

0x6cee,	// (0x00046588) ai2_gene_pane_g1

0x6d00,	// (0x0004659a) ai2_gene_pane_g2_ParamLimits

0x6d00,	// (0x0004659a) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x0004f281) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x0004f281) ai2_gene_pane_g

0x3da5,	// (0x0004363f) scroll_pane_cp12

0xc10a,	// (0x0004b9a4) control_pane_t3_ParamLimits

0xc10a,	// (0x0004b9a4) control_pane_t3

0xd587,	// (0x0004ce21) status_small_pane_g8_ParamLimits

0xd587,	// (0x0004ce21) status_small_pane_g8

0xc266,	// (0x0004bb00) popup_find_window_ParamLimits

0xc4f3,	// (0x0004bd8d) popup_note_image_window_ParamLimits

0x06d5,	// (0x0003ff6f) list_double2_graphic_pane_vc_g1_ParamLimits

0x06d5,	// (0x0003ff6f) list_double2_graphic_pane_vc_g1

0x49de,	// (0x00044278) list_double2_graphic_pane_vc_g2_ParamLimits

0x49de,	// (0x00044278) list_double2_graphic_pane_vc_g2

0x1f93,	// (0x0004182d) list_double2_graphic_pane_vc_g3_ParamLimits

0x1f93,	// (0x0004182d) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x0004f05d) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x0004f05d) list_double2_graphic_pane_vc_g

0x06e1,	// (0x0003ff7b) list_double2_graphic_pane_vc_t1_ParamLimits

0x06e1,	// (0x0003ff7b) list_double2_graphic_pane_vc_t1

0x49de,	// (0x00044278) list_single_heading_pane_vc_g1_ParamLimits

0x49de,	// (0x00044278) list_single_heading_pane_vc_g1

0x1f93,	// (0x0004182d) list_single_heading_pane_vc_g2_ParamLimits

0x1f93,	// (0x0004182d) list_single_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004ee6c) list_single_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004ee6c) list_single_heading_pane_vc_g

0x06f7,	// (0x0003ff91) list_single_heading_pane_vc_t1_ParamLimits

0x06f7,	// (0x0003ff91) list_single_heading_pane_vc_t1

0x070f,	// (0x0003ffa9) list_single_heading_pane_vc_t2_ParamLimits

0x070f,	// (0x0003ffa9) list_single_heading_pane_vc_t2

0x0001,

0xf7e4,	// (0x0004f07e) list_single_heading_pane_vc_t_ParamLimits

0xf7e4,	// (0x0004f07e) list_single_heading_pane_vc_t

0x1ffe,	// (0x00041898) list_setting_number_pane_vc_g1_ParamLimits

0x1ffe,	// (0x00041898) list_setting_number_pane_vc_g1

0x200a,	// (0x000418a4) list_setting_number_pane_vc_g2_ParamLimits

0x200a,	// (0x000418a4) list_setting_number_pane_vc_g2

0x0001,

0xf7e9,	// (0x0004f083) list_setting_number_pane_vc_g_ParamLimits

0xf7e9,	// (0x0004f083) list_setting_number_pane_vc_g

0x072b,	// (0x0003ffc5) list_setting_number_pane_vc_t1_ParamLimits

0x072b,	// (0x0003ffc5) list_setting_number_pane_vc_t1

0x073f,	// (0x0003ffd9) list_setting_number_pane_vc_t2_ParamLimits

0x073f,	// (0x0003ffd9) list_setting_number_pane_vc_t2

0x075b,	// (0x0003fff5) list_setting_number_pane_vc_t3_ParamLimits

0x075b,	// (0x0003fff5) list_setting_number_pane_vc_t3

0x0002,

0xf7ee,	// (0x0004f088) list_setting_number_pane_vc_t_ParamLimits

0xf7ee,	// (0x0004f088) list_setting_number_pane_vc_t

0x0787,	// (0x00040021) set_value_pane_vc_ParamLimits

0x0787,	// (0x00040021) set_value_pane_vc

0x6885,	// (0x0004611f) list_double2_graphic_pane_vc_ParamLimits

0x6885,	// (0x0004611f) list_double2_graphic_pane_vc

0x083f,	// (0x000400d9) list_double2_large_graphic_pane_vc_ParamLimits

0x083f,	// (0x000400d9) list_double2_large_graphic_pane_vc

0x6885,	// (0x0004611f) list_double2_pane_vc_ParamLimits

0x6885,	// (0x0004611f) list_double2_pane_vc

0x6885,	// (0x0004611f) list_double_graphic_heading_pane_vc_ParamLimits

0x6885,	// (0x0004611f) list_double_graphic_heading_pane_vc

0x6885,	// (0x0004611f) list_double_graphic_pane_vc_ParamLimits

0x6885,	// (0x0004611f) list_double_graphic_pane_vc

0x6885,	// (0x0004611f) list_double_heading_pane_vc_ParamLimits

0x6885,	// (0x0004611f) list_double_heading_pane_vc

0x0850,	// (0x000400ea) list_double_large_graphic_pane_vc_ParamLimits

0x0850,	// (0x000400ea) list_double_large_graphic_pane_vc

0x6885,	// (0x0004611f) list_double_number_pane_vc_ParamLimits

0x6885,	// (0x0004611f) list_double_number_pane_vc

0x6885,	// (0x0004611f) list_double_pane_vc_ParamLimits

0x6885,	// (0x0004611f) list_double_pane_vc

0x6885,	// (0x0004611f) list_double_time_pane_vc_ParamLimits

0x6885,	// (0x0004611f) list_double_time_pane_vc

0x6885,	// (0x0004611f) list_setting_number_pane_vc_ParamLimits

0x6885,	// (0x0004611f) list_setting_number_pane_vc

0x6885,	// (0x0004611f) list_setting_pane_vc_ParamLimits

0x6885,	// (0x0004611f) list_setting_pane_vc

0x6885,	// (0x0004611f) list_single_graphic_heading_pane_vc_ParamLimits

0x6885,	// (0x0004611f) list_single_graphic_heading_pane_vc

0x6885,	// (0x0004611f) list_single_heading_pane_vc_ParamLimits

0x6885,	// (0x0004611f) list_single_heading_pane_vc

0x6885,	// (0x0004611f) list_single_number_heading_pane_vc_ParamLimits

0x6885,	// (0x0004611f) list_single_number_heading_pane_vc

0x06d5,	// (0x0003ff6f) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x06d5,	// (0x0003ff6f) list_double_graphic_heading_pane_vc_g1

0x49de,	// (0x00044278) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x49de,	// (0x00044278) list_double_graphic_heading_pane_vc_g2

0x1f93,	// (0x0004182d) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x1f93,	// (0x0004182d) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c3,	// (0x0004f05d) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0004f05d) list_double_graphic_heading_pane_vc_g

0x089f,	// (0x00040139) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x089f,	// (0x00040139) list_double_graphic_heading_pane_vc_t1

0x08bb,	// (0x00040155) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x08bb,	// (0x00040155) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f3,	// (0x0004f28d) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f3,	// (0x0004f28d) list_double_graphic_heading_pane_vc_t

0x1ffe,	// (0x00041898) list_setting_pane_vc_g1_ParamLimits

0x1ffe,	// (0x00041898) list_setting_pane_vc_g1

0x200a,	// (0x000418a4) list_setting_pane_vc_g2_ParamLimits

0x200a,	// (0x000418a4) list_setting_pane_vc_g2

0x0001,

0xf7e9,	// (0x0004f083) list_setting_pane_vc_g_ParamLimits

0xf7e9,	// (0x0004f083) list_setting_pane_vc_g

0x08d9,	// (0x00040173) list_setting_pane_vc_t1_ParamLimits

0x08d9,	// (0x00040173) list_setting_pane_vc_t1

0x08f5,	// (0x0004018f) list_setting_pane_vc_t2_ParamLimits

0x08f5,	// (0x0004018f) list_setting_pane_vc_t2

0x0001,

0xfa21,	// (0x0004f2bb) list_setting_pane_vc_t_ParamLimits

0xfa21,	// (0x0004f2bb) list_setting_pane_vc_t

0x0787,	// (0x00040021) set_value_pane_cp_vc_ParamLimits

0x0787,	// (0x00040021) set_value_pane_cp_vc

0x49de,	// (0x00044278) list_single_number_heading_pane_vc_g1_ParamLimits

0x49de,	// (0x00044278) list_single_number_heading_pane_vc_g1

0x1f93,	// (0x0004182d) list_single_number_heading_pane_vc_g2_ParamLimits

0x1f93,	// (0x0004182d) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004ee6c) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004ee6c) list_single_number_heading_pane_vc_g

0x06f7,	// (0x0003ff91) list_single_number_heading_pane_vc_t1_ParamLimits

0x06f7,	// (0x0003ff91) list_single_number_heading_pane_vc_t1

0x0911,	// (0x000401ab) list_single_number_heading_pane_vc_t2_ParamLimits

0x0911,	// (0x000401ab) list_single_number_heading_pane_vc_t2

0x0925,	// (0x000401bf) list_single_number_heading_pane_vc_t3_ParamLimits

0x0925,	// (0x000401bf) list_single_number_heading_pane_vc_t3

0x0002,

0xfa26,	// (0x0004f2c0) list_single_number_heading_pane_vc_t_ParamLimits

0xfa26,	// (0x0004f2c0) list_single_number_heading_pane_vc_t

0x06d5,	// (0x0003ff6f) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x06d5,	// (0x0003ff6f) list_single_graphic_heading_pane_vc_g1

0x49de,	// (0x00044278) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x49de,	// (0x00044278) list_single_graphic_heading_pane_vc_g4

0x1f93,	// (0x0004182d) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x1f93,	// (0x0004182d) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x0004f05d) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0004f05d) list_single_graphic_heading_pane_vc_g

0x06f7,	// (0x0003ff91) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x06f7,	// (0x0003ff91) list_single_graphic_heading_pane_vc_t1

0x0937,	// (0x000401d1) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x0937,	// (0x000401d1) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2d,	// (0x0004f2c7) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2d,	// (0x0004f2c7) list_single_graphic_heading_pane_vc_t

0x49de,	// (0x00044278) list_double2_pane_vc_g1_ParamLimits

0x49de,	// (0x00044278) list_double2_pane_vc_g1

0x1f93,	// (0x0004182d) list_double2_pane_vc_g2_ParamLimits

0x1f93,	// (0x0004182d) list_double2_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004ee6c) list_double2_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004ee6c) list_double2_pane_vc_g

0x094b,	// (0x000401e5) list_double2_pane_vc_t1_ParamLimits

0x094b,	// (0x000401e5) list_double2_pane_vc_t1

0x0961,	// (0x000401fb) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x0961,	// (0x000401fb) list_double2_large_graphic_pane_vc_g1

0x096d,	// (0x00040207) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x096d,	// (0x00040207) list_double2_large_graphic_pane_vc_g2

0x0979,	// (0x00040213) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x0979,	// (0x00040213) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5ea,	// (0x0004ee84) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5ea,	// (0x0004ee84) list_double2_large_graphic_pane_vc_g

0x0985,	// (0x0004021f) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0985,	// (0x0004021f) list_double2_large_graphic_pane_vc_t1

0x243e,	// (0x00041cd8) list_double_time_pane_vc_g1_ParamLimits

0x243e,	// (0x00041cd8) list_double_time_pane_vc_g1

0x244a,	// (0x00041ce4) list_double_time_pane_vc_g2_ParamLimits

0x244a,	// (0x00041ce4) list_double_time_pane_vc_g2

0x0001,

0xfa32,	// (0x0004f2cc) list_double_time_pane_vc_g_ParamLimits

0xfa32,	// (0x0004f2cc) list_double_time_pane_vc_g

0x099b,	// (0x00040235) list_double_time_pane_vc_t1_ParamLimits

0x099b,	// (0x00040235) list_double_time_pane_vc_t1

0x09bf,	// (0x00040259) list_double_time_pane_vc_t2_ParamLimits

0x09bf,	// (0x00040259) list_double_time_pane_vc_t2

0x0a0e,	// (0x000402a8) list_double_time_pane_vc_t3_ParamLimits

0x0a0e,	// (0x000402a8) list_double_time_pane_vc_t3

0x0a20,	// (0x000402ba) list_double_time_pane_vc_t4_ParamLimits

0x0a20,	// (0x000402ba) list_double_time_pane_vc_t4

0x0003,

0xfa37,	// (0x0004f2d1) list_double_time_pane_vc_t_ParamLimits

0xfa37,	// (0x0004f2d1) list_double_time_pane_vc_t

0x49de,	// (0x00044278) list_double_pane_vc_g1_ParamLimits

0x49de,	// (0x00044278) list_double_pane_vc_g1

0x1f93,	// (0x0004182d) list_double_pane_vc_g2_ParamLimits

0x1f93,	// (0x0004182d) list_double_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004ee6c) list_double_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004ee6c) list_double_pane_vc_g

0x0a34,	// (0x000402ce) list_double_pane_vc_t1_ParamLimits

0x0a34,	// (0x000402ce) list_double_pane_vc_t1

0x0a48,	// (0x000402e2) list_double_pane_vc_t2_ParamLimits

0x0a48,	// (0x000402e2) list_double_pane_vc_t2

0x0001,

0xfa40,	// (0x0004f2da) list_double_pane_vc_t_ParamLimits

0xfa40,	// (0x0004f2da) list_double_pane_vc_t

0x49de,	// (0x00044278) list_double_number_pane_vc_g1_ParamLimits

0x49de,	// (0x00044278) list_double_number_pane_vc_g1

0x1f93,	// (0x0004182d) list_double_number_pane_vc_g2_ParamLimits

0x1f93,	// (0x0004182d) list_double_number_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004ee6c) list_double_number_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004ee6c) list_double_number_pane_vc_g

0x0a60,	// (0x000402fa) list_double_number_pane_vc_t1_ParamLimits

0x0a60,	// (0x000402fa) list_double_number_pane_vc_t1

0x0a72,	// (0x0004030c) list_double_number_pane_vc_t2_ParamLimits

0x0a72,	// (0x0004030c) list_double_number_pane_vc_t2

0x0a86,	// (0x00040320) list_double_number_pane_vc_t3_ParamLimits

0x0a86,	// (0x00040320) list_double_number_pane_vc_t3

0x0002,

0xfa45,	// (0x0004f2df) list_double_number_pane_vc_t_ParamLimits

0xfa45,	// (0x0004f2df) list_double_number_pane_vc_t

0x0a9e,	// (0x00040338) list_double_large_graphic_pane_vc_g1_ParamLimits

0x0a9e,	// (0x00040338) list_double_large_graphic_pane_vc_g1

0x0ac0,	// (0x0004035a) list_double_large_graphic_pane_vc_g2_ParamLimits

0x0ac0,	// (0x0004035a) list_double_large_graphic_pane_vc_g2

0x0ad4,	// (0x0004036e) list_double_large_graphic_pane_vc_g3_ParamLimits

0x0ad4,	// (0x0004036e) list_double_large_graphic_pane_vc_g3

0x0ae3,	// (0x0004037d) list_double_large_graphic_pane_vc_g4_ParamLimits

0x0ae3,	// (0x0004037d) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa4c,	// (0x0004f2e6) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa4c,	// (0x0004f2e6) list_double_large_graphic_pane_vc_g

0x0aef,	// (0x00040389) list_double_large_graphic_pane_vc_t1_ParamLimits

0x0aef,	// (0x00040389) list_double_large_graphic_pane_vc_t1

0x0b0b,	// (0x000403a5) list_double_large_graphic_pane_vc_t2_ParamLimits

0x0b0b,	// (0x000403a5) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa55,	// (0x0004f2ef) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa55,	// (0x0004f2ef) list_double_large_graphic_pane_vc_t

0x49de,	// (0x00044278) list_double_heading_pane_vc_g1_ParamLimits

0x49de,	// (0x00044278) list_double_heading_pane_vc_g1

0x1f93,	// (0x0004182d) list_double_heading_pane_vc_g2_ParamLimits

0x1f93,	// (0x0004182d) list_double_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004ee6c) list_double_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004ee6c) list_double_heading_pane_vc_g

0x0b2d,	// (0x000403c7) list_double_heading_pane_vc_t1_ParamLimits

0x0b2d,	// (0x000403c7) list_double_heading_pane_vc_t1

0x06f7,	// (0x0003ff91) list_double_heading_pane_vc_t2_ParamLimits

0x06f7,	// (0x0003ff91) list_double_heading_pane_vc_t2

0x0001,

0xfa5a,	// (0x0004f2f4) list_double_heading_pane_vc_t_ParamLimits

0xfa5a,	// (0x0004f2f4) list_double_heading_pane_vc_t

0x0b41,	// (0x000403db) list_double_graphic_pane_vc_g1_ParamLimits

0x0b41,	// (0x000403db) list_double_graphic_pane_vc_g1

0x2456,	// (0x00041cf0) list_double_graphic_pane_vc_g2_ParamLimits

0x2456,	// (0x00041cf0) list_double_graphic_pane_vc_g2

0x49de,	// (0x00044278) list_double_graphic_pane_vc_g3_ParamLimits

0x49de,	// (0x00044278) list_double_graphic_pane_vc_g3

0x0003,

0xfa5f,	// (0x0004f2f9) list_double_graphic_pane_vc_g_ParamLimits

0xfa5f,	// (0x0004f2f9) list_double_graphic_pane_vc_g

0x0b4d,	// (0x000403e7) list_double_graphic_pane_vc_t1_ParamLimits

0x0b4d,	// (0x000403e7) list_double_graphic_pane_vc_t1

0x0b77,	// (0x00040411) list_double_graphic_pane_vc_t2_ParamLimits

0x0b77,	// (0x00040411) list_double_graphic_pane_vc_t2

0x0001,

0xfa68,	// (0x0004f302) list_double_graphic_pane_vc_t_ParamLimits

0xfa68,	// (0x0004f302) list_double_graphic_pane_vc_t

0x0e87,	// (0x00040721) aid_size_cell_fastswap

0xbd45,	// (0x0004b5df) aid_size_cell_touch_ParamLimits

0xbd45,	// (0x0004b5df) aid_size_cell_touch

0x10ea,	// (0x00040984) popup_fast_swap_wide_window_ParamLimits

0x10ea,	// (0x00040984) popup_fast_swap_wide_window

0xbef5,	// (0x0004b78f) touch_pane_ParamLimits

0xbef5,	// (0x0004b78f) touch_pane

0x3e07,	// (0x000436a1) button_value_adjust_pane_cp2

0x0380,	// (0x0003fc1a) button_value_adjust_pane_cp4

0x03a4,	// (0x0003fc3e) form_field_data_pane_cp2

0xb98e,	// (0x0004b228) form_field_data_wide_pane_cp2

0x427c,	// (0x00043b16) bg_scroll_pane_ParamLimits

0x1538,	// (0x00040dd2) scroll_handle_pane_ParamLimits

0x154c,	// (0x00040de6) scroll_sc2_down_pane_ParamLimits

0x154c,	// (0x00040de6) scroll_sc2_down_pane

0x42ad,	// (0x00043b47) scroll_sc2_up_pane_ParamLimits

0x42ad,	// (0x00043b47) scroll_sc2_up_pane

0xdfee,	// (0x0004d888) grid_wheel_folder_pane_g1_ParamLimits

0xdfee,	// (0x0004d888) grid_wheel_folder_pane_g1

0x172d,	// (0x00040fc7) clock_nsta_pane_cp2_ParamLimits

0x172d,	// (0x00040fc7) clock_nsta_pane_cp2

0x4de3,	// (0x0004467d) listscroll_midp_pane_ParamLimits

0xd482,	// (0x0004cd1c) midp_canvas_pane

0x4d95,	// (0x0004462f) nsta_clock_indic_pane

0x4dc9,	// (0x00044663) listscroll_form_pane_vc

0x4dd1,	// (0x0004466b) listscroll_set_pane_vc_ParamLimits

0x4dd1,	// (0x0004466b) listscroll_set_pane_vc

0xd707,	// (0x0004cfa1) clock_nsta_pane

0xd731,	// (0x0004cfcb) indicator_nsta_pane

0x522b,	// (0x00044ac5) bg_popup_sub_pane_cp2_ParamLimits

0x523f,	// (0x00044ad9) find_pane_cp2_ParamLimits

0x523f,	// (0x00044ad9) find_pane_cp2

0x5255,	// (0x00044aef) grid_toobar_pane_ParamLimits

0x5335,	// (0x00044bcf) list_form_gen_pane_vc_ParamLimits

0x5335,	// (0x00044bcf) list_form_gen_pane_vc

0x534b,	// (0x00044be5) scroll_pane_cp8_vc_ParamLimits

0x534b,	// (0x00044be5) scroll_pane_cp8_vc

0x53c7,	// (0x00044c61) data_form_wide_pane_vc_ParamLimits

0x53c7,	// (0x00044c61) data_form_wide_pane_vc

0x53d3,	// (0x00044c6d) form_field_data_wide_pane_vc_g1

0x53db,	// (0x00044c75) form_field_data_wide_pane_vc_t1_ParamLimits

0x53db,	// (0x00044c75) form_field_data_wide_pane_vc_t1

0x3e1b,	// (0x000436b5) input_focus_pane_cp6_vc_ParamLimits

0x3e1b,	// (0x000436b5) input_focus_pane_cp6_vc

0xdaad,	// (0x0004d347) list_midp_pane_ParamLimits

0x6a11,	// (0x000462ab) scroll_pane_cp16_ParamLimits

0x6a11,	// (0x000462ab) scroll_pane_cp16

0x5761,	// (0x00044ffb) button_value_adjust_pane_ParamLimits

0x5761,	// (0x00044ffb) button_value_adjust_pane

0xdc4e,	// (0x0004d4e8) button_value_adjust_pane_cp6_ParamLimits

0xdc4e,	// (0x0004d4e8) button_value_adjust_pane_cp6

0xdd68,	// (0x0004d602) settings_code_pane_cp_ParamLimits

0xdd68,	// (0x0004d602) settings_code_pane_cp

0x34b6,	// (0x00042d50) cell_touch_pane_g1

0x34b6,	// (0x00042d50) cell_touch_pane_g2

0x0001,

0xf708,	// (0x0004efa2) cell_touch_pane_g

0xdedc,	// (0x0004d776) cell_touch_pane_cp_ParamLimits

0xdedc,	// (0x0004d776) cell_touch_pane_cp

0xdef8,	// (0x0004d792) cell_touch_pane_ParamLimits

0xdef8,	// (0x0004d792) cell_touch_pane

0x34b6,	// (0x00042d50) scroll_sc2_down_pane_g1

0x34b6,	// (0x00042d50) scroll_sc2_up_pane_g1

0x34c0,	// (0x00042d5a) bg_set_opt_pane_cp4_vc

0x6da1,	// (0x0004663b) list_set_graphic_pane_vc_g1_ParamLimits

0x6da1,	// (0x0004663b) list_set_graphic_pane_vc_g1

0x6dad,	// (0x00046647) list_set_graphic_pane_vc_g2_ParamLimits

0x6dad,	// (0x00046647) list_set_graphic_pane_vc_g2

0x0001,

0xf9f8,	// (0x0004f292) list_set_graphic_pane_vc_g_ParamLimits

0xf9f8,	// (0x0004f292) list_set_graphic_pane_vc_g

0x6db9,	// (0x00046653) text_primary_small_cp13_vc_ParamLimits

0x6db9,	// (0x00046653) text_primary_small_cp13_vc

0x6dd1,	// (0x0004666b) list_set_graphic_pane_vc_ParamLimits

0x6dd1,	// (0x0004666b) list_set_graphic_pane_vc

0x34c0,	// (0x00042d5a) input_focus_pane_cp2_vc

0x34b6,	// (0x00042d50) setting_code_pane_vc_g1

0x35eb,	// (0x00042e85) setting_code_pane_vc_t1

0x6de4,	// (0x0004667e) set_text_pane_vc_t1_ParamLimits

0x6de4,	// (0x0004667e) set_text_pane_vc_t1

0x34c0,	// (0x00042d5a) input_focus_pane_cp1_vc

0x6e00,	// (0x0004669a) list_set_text_pane_vc

0x34b6,	// (0x00042d50) setting_text_pane_vc_g1

0x34c0,	// (0x00042d5a) bg_set_opt_pane_cp2_vc

0x35e2,	// (0x00042e7c) setting_slider_graphic_pane_vc_g1

0x6e0a,	// (0x000466a4) setting_slider_graphic_pane_vc_t1

0x6e1a,	// (0x000466b4) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fd,	// (0x0004f297) setting_slider_graphic_pane_vc_t

0x6e2a,	// (0x000466c4) slider_set_pane_cp_vc

0x6e32,	// (0x000466cc) slider_set_pane_vc_g1

0x6e3b,	// (0x000466d5) slider_set_pane_vc_g2

0x0006,

0xfa02,	// (0x0004f29c) slider_set_pane_vc_g

0x3e6a,	// (0x00043704) set_opt_bg_pane_g1_copy1

0x3e72,	// (0x0004370c) set_opt_bg_pane_g2_copy1

0x6e67,	// (0x00046701) set_opt_bg_pane_g3_copy1

0x3e82,	// (0x0004371c) set_opt_bg_pane_g4_copy1

0x3e8a,	// (0x00043724) set_opt_bg_pane_g5_copy1

0x3e92,	// (0x0004372c) set_opt_bg_pane_g6_copy1

0x6e71,	// (0x0004670b) set_opt_bg_pane_g7_copy1

0x6e79,	// (0x00046713) set_opt_bg_pane_g8_copy1

0x6e83,	// (0x0004671d) set_opt_bg_pane_g9_copy1

0x34c0,	// (0x00042d5a) bg_set_opt_pane_cp_vc

0x6e8d,	// (0x00046727) setting_slider_pane_vc_t1

0x6e9c,	// (0x00046736) setting_slider_pane_vc_t2

0x6eac,	// (0x00046746) setting_slider_pane_vc_t3

0x0002,

0xfa11,	// (0x0004f2ab) setting_slider_pane_vc_t

0x6ebc,	// (0x00046756) slider_set_pane_vc

0x20b3,	// (0x0004194d) volume_set_pane_vc_g1

0x20bc,	// (0x00041956) volume_set_pane_vc_g2

0x20c5,	// (0x0004195f) volume_set_pane_vc_g3

0x20ce,	// (0x00041968) volume_set_pane_vc_g4

0x20d7,	// (0x00041971) volume_set_pane_vc_g5

0x20e0,	// (0x0004197a) volume_set_pane_vc_g6

0x20e9,	// (0x00041983) volume_set_pane_vc_g7

0x20f2,	// (0x0004198c) volume_set_pane_vc_g8

0x20fb,	// (0x00041995) volume_set_pane_vc_g9

0x2104,	// (0x0004199e) volume_set_pane_vc_g10

0x0009,

0xf8b6,	// (0x0004f150) volume_set_pane_vc_g

0x6ec4,	// (0x0004675e) volume_set_pane_vc

0x6ecc,	// (0x00046766) button_value_adjust_pane_cp1_vc

0x6ed6,	// (0x00046770) list_highlight_pane_cp2_vc

0x6edf,	// (0x00046779) list_set_pane_vc_ParamLimits

0x6edf,	// (0x00046779) list_set_pane_vc

0x6f3d,	// (0x000467d7) main_pane_set_vc_t1_ParamLimits

0x6f3d,	// (0x000467d7) main_pane_set_vc_t1

0x6f52,	// (0x000467ec) main_pane_set_vc_t2_ParamLimits

0x6f52,	// (0x000467ec) main_pane_set_vc_t2

0x6f64,	// (0x000467fe) main_pane_set_vc_t3_ParamLimits

0x6f64,	// (0x000467fe) main_pane_set_vc_t3

0x6f78,	// (0x00046812) main_pane_set_vc_t4_ParamLimits

0x6f78,	// (0x00046812) main_pane_set_vc_t4

0x0003,

0xfa18,	// (0x0004f2b2) main_pane_set_vc_t_ParamLimits

0xfa18,	// (0x0004f2b2) main_pane_set_vc_t

0x6f8c,	// (0x00046826) setting_code_pane_vc_ParamLimits

0x6f8c,	// (0x00046826) setting_code_pane_vc

0x6f9d,	// (0x00046837) setting_slider_graphic_pane_vc

0x6f9d,	// (0x00046837) setting_slider_pane_vc

0x6f9d,	// (0x00046837) setting_text_pane_vc

0x6f9d,	// (0x00046837) setting_volume_pane_vc

0x6fa7,	// (0x00046841) scroll_pane_cp121_vc

0x3df5,	// (0x0004368f) set_content_pane_vc

0x6faf,	// (0x00046849) button_value_adjust_pane_g1

0x6fb8,	// (0x00046852) button_value_adjust_pane_g2

0x0001,

0xfa6d,	// (0x0004f307) button_value_adjust_pane_g

0x6fc1,	// (0x0004685b) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6fc1,	// (0x0004685b) form_field_slider_wide_pane_vc_t1

0x6fd5,	// (0x0004686f) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6fd5,	// (0x0004686f) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa72,	// (0x0004f30c) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x0004f30c) form_field_slider_wide_pane_vc_t

0x381b,	// (0x000430b5) input_focus_pane_cp10_vc_ParamLimits

0x381b,	// (0x000430b5) input_focus_pane_cp10_vc

0x7003,	// (0x0004689d) slider_cont_pane_cp1_vc_ParamLimits

0x7003,	// (0x0004689d) slider_cont_pane_cp1_vc

0x7015,	// (0x000468af) slider_form_pane_g1_cp2

0x6e3b,	// (0x000466d5) slider_form_pane_g2_cp2

0x7042,	// (0x000468dc) form_field_slider_pane_vc_t3

0x7050,	// (0x000468ea) form_field_slider_pane_vc_t4

0x705e,	// (0x000468f8) slider_form_pane_vc_ParamLimits

0x705e,	// (0x000468f8) slider_form_pane_vc

0x706b,	// (0x00046905) form_field_slider_pane_vc_t1_ParamLimits

0x706b,	// (0x00046905) form_field_slider_pane_vc_t1

0x6fd5,	// (0x0004686f) form_field_slider_pane_vc_t2_ParamLimits

0x6fd5,	// (0x0004686f) form_field_slider_pane_vc_t2

0x0001,

0xfa84,	// (0x0004f31e) form_field_slider_pane_vc_t_ParamLimits

0xfa84,	// (0x0004f31e) form_field_slider_pane_vc_t

0x381b,	// (0x000430b5) input_focus_pane_cp9_vc_ParamLimits

0x381b,	// (0x000430b5) input_focus_pane_cp9_vc

0x7087,	// (0x00046921) slider_cont_pane_vc_ParamLimits

0x7087,	// (0x00046921) slider_cont_pane_vc

0x709b,	// (0x00046935) list_form_graphic_pane_cp_vc_ParamLimits

0x709b,	// (0x00046935) list_form_graphic_pane_cp_vc

0x53d3,	// (0x00044c6d) form_field_popup_wide_pane_vc_g1

0x70b0,	// (0x0004694a) form_field_popup_wide_pane_vc_t1_ParamLimits

0x70b0,	// (0x0004694a) form_field_popup_wide_pane_vc_t1

0x3e1b,	// (0x000436b5) input_focus_pane_cp8_vc_ParamLimits

0x3e1b,	// (0x000436b5) input_focus_pane_cp8_vc

0x70f5,	// (0x0004698f) list_form_wide_pane_vc_ParamLimits

0x70f5,	// (0x0004698f) list_form_wide_pane_vc

0x7101,	// (0x0004699b) list_form_graphic_pane_vc_g1

0x7109,	// (0x000469a3) list_form_graphic_pane_vc_t1_ParamLimits

0x7109,	// (0x000469a3) list_form_graphic_pane_vc_t1

0x35a0,	// (0x00042e3a) list_highlight_pane_cp5_vc_ParamLimits

0x35a0,	// (0x00042e3a) list_highlight_pane_cp5_vc

0x7125,	// (0x000469bf) list_form_graphic_pane_vc_ParamLimits

0x7125,	// (0x000469bf) list_form_graphic_pane_vc

0x53d3,	// (0x00044c6d) form_field_popup_pane_vc_g1

0x713b,	// (0x000469d5) form_field_popup_pane_vc_t1_ParamLimits

0x713b,	// (0x000469d5) form_field_popup_pane_vc_t1

0x3e1b,	// (0x000436b5) input_focus_pane_cp7_vc_ParamLimits

0x3e1b,	// (0x000436b5) input_focus_pane_cp7_vc

0x7152,	// (0x000469ec) list_form_pane_vc_ParamLimits

0x7152,	// (0x000469ec) list_form_pane_vc

0x715e,	// (0x000469f8) data_form_pane_vc_t1_ParamLimits

0x715e,	// (0x000469f8) data_form_pane_vc_t1

0x3e6a,	// (0x00043704) input_focus_pane_vc_g1

0x3e72,	// (0x0004370c) input_focus_pane_vc_g2

0x3e7a,	// (0x00043714) input_focus_pane_vc_g3

0x3e82,	// (0x0004371c) input_focus_pane_vc_g4

0x3e8a,	// (0x00043724) input_focus_pane_vc_g5

0x3e92,	// (0x0004372c) input_focus_pane_vc_g6

0x3e9a,	// (0x00043734) input_focus_pane_vc_g7

0x3ea2,	// (0x0004373c) input_focus_pane_vc_g8

0x3eaa,	// (0x00043744) input_focus_pane_vc_g9

0x34b6,	// (0x00042d50) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x0004ef2b) input_focus_pane_vc_g

0x53c7,	// (0x00044c61) data_form_pane_vc_ParamLimits

0x53c7,	// (0x00044c61) data_form_pane_vc

0x53d3,	// (0x00044c6d) form_field_data_pane_vc_g1

0x7179,	// (0x00046a13) form_field_data_pane_vc_t1_ParamLimits

0x7179,	// (0x00046a13) form_field_data_pane_vc_t1

0x3e1b,	// (0x000436b5) input_focus_pane_vc_ParamLimits

0x3e1b,	// (0x000436b5) input_focus_pane_vc

0x7193,	// (0x00046a2d) button_value_adjust_pane_cp3_vc

0x719b,	// (0x00046a35) button_value_adjust_pane_cp5_vc

0x71a3,	// (0x00046a3d) form_field_data_pane_vc_ParamLimits

0x71a3,	// (0x00046a3d) form_field_data_pane_vc

0x71ba,	// (0x00046a54) form_field_data_pane_vc_cp2

0x71c2,	// (0x00046a5c) form_field_data_wide_pane_vc_ParamLimits

0x71c2,	// (0x00046a5c) form_field_data_wide_pane_vc

0x71d8,	// (0x00046a72) form_field_data_wide_pane_vc_cp2

0x71e0,	// (0x00046a7a) form_field_popup_pane_vc_ParamLimits

0x71e0,	// (0x00046a7a) form_field_popup_pane_vc

0x71f7,	// (0x00046a91) form_field_popup_wide_pane_vc_ParamLimits

0x71f7,	// (0x00046a91) form_field_popup_wide_pane_vc

0x720d,	// (0x00046aa7) form_field_slider_pane_vc_ParamLimits

0x720d,	// (0x00046aa7) form_field_slider_pane_vc

0x7220,	// (0x00046aba) form_field_slider_wide_pane_vc_ParamLimits

0x7220,	// (0x00046aba) form_field_slider_wide_pane_vc

0xdf16,	// (0x0004d7b0) grid_touch_1_pane_ParamLimits

0xdf16,	// (0x0004d7b0) grid_touch_1_pane

0xdf2a,	// (0x0004d7c4) grid_touch_2_pane_ParamLimits

0xdf2a,	// (0x0004d7c4) grid_touch_2_pane

0x72ee,	// (0x00046b88) touch_pane_g1_ParamLimits

0x72ee,	// (0x00046b88) touch_pane_g1

0x7257,	// (0x00046af1) cell_app_pane_cp_wide_ParamLimits

0x7257,	// (0x00046af1) cell_app_pane_cp_wide

0x7268,	// (0x00046b02) grid_popup_fast_wide_pane_ParamLimits

0x7268,	// (0x00046b02) grid_popup_fast_wide_pane

0x727c,	// (0x00046b16) scroll_pane_cp19_ParamLimits

0x727c,	// (0x00046b16) scroll_pane_cp19

0x34c0,	// (0x00042d5a) bg_popup_window_pane_cp20

0x7290,	// (0x00046b2a) listscroll_popup_fast_wide_pane

0x3fd2,	// (0x0004386c) grid_indicator_nsta_pane

0x7298,	// (0x00046b32) clock_nsta_pane_g1

0x72a1,	// (0x00046b3b) clock_nsta_pane_t1

0xdf54,	// (0x0004d7ee) cell_indicator_nsta_pane_ParamLimits

0xdf54,	// (0x0004d7ee) cell_indicator_nsta_pane

0x72ee,	// (0x00046b88) cell_indicator_nsta_pane_g1

0xdf6b,	// (0x0004d805) cell_indicator_nsta_pane_g2

0x0001,

0xfa95,	// (0x0004f32f) cell_indicator_nsta_pane_g

0x7309,	// (0x00046ba3) clock_nsta_pane_cp

0x7311,	// (0x00046bab) indicator_nsta_pane_cp

0x7319,	// (0x00046bb3) nsta_clock_indic_pane_g1

0x3669,	// (0x00042f03) grid_indicator_pane

0x43a2,	// (0x00043c3c) scroll_pane_cp29

0x167c,	// (0x00040f16) indicator_nsta_pane_cp2_ParamLimits

0x167c,	// (0x00040f16) indicator_nsta_pane_cp2

0x35a0,	// (0x00042e3a) main_apps_wheel_pane

0x55e8,	// (0x00044e82) form_midp_field_text_pane_ParamLimits

0x5733,	// (0x00044fcd) scroll_bar_cp050_ParamLimits

0x737a,	// (0x00046c14) cell_indicator_pane_ParamLimits

0x737a,	// (0x00046c14) cell_indicator_pane

0x7391,	// (0x00046c2b) cell_indicator_pane_g1

0xdf78,	// (0x0004d812) grid_wheel_folder_pane_ParamLimits

0xdf78,	// (0x0004d812) grid_wheel_folder_pane

0xdf86,	// (0x0004d820) list_wheel_apps_pane_ParamLimits

0xdf86,	// (0x0004d820) list_wheel_apps_pane

0xdf94,	// (0x0004d82e) main_apps_wheel_pane_g1_ParamLimits

0xdf94,	// (0x0004d82e) main_apps_wheel_pane_g1

0xdfa0,	// (0x0004d83a) main_apps_wheel_pane_g2_ParamLimits

0xdfa0,	// (0x0004d83a) main_apps_wheel_pane_g2

0x0001,

0xfab1,	// (0x0004f34b) main_apps_wheel_pane_g_ParamLimits

0xfab1,	// (0x0004f34b) main_apps_wheel_pane_g

0xdfae,	// (0x0004d848) main_apps_wheel_pane_t1_ParamLimits

0xdfae,	// (0x0004d848) main_apps_wheel_pane_t1

0xdfc2,	// (0x0004d85c) list_wheel_apps_pane_g1

0xdfca,	// (0x0004d864) list_wheel_apps_pane_g2

0xdfd2,	// (0x0004d86c) list_wheel_apps_pane_g3

0xdfda,	// (0x0004d874) list_wheel_apps_pane_g4

0xdfe4,	// (0x0004d87e) list_wheel_apps_pane_g5

0x0004,

0xfab6,	// (0x0004f350) list_wheel_apps_pane_g

0x4925,	// (0x000441bf) navi_icon_text_pane

0xd5fb,	// (0x0004ce95) aid_fill_nsta

0x7456,	// (0x00046cf0) navi_icon_text_pane_g1

0x7462,	// (0x00046cfc) navi_icon_text_pane_t1

0xd45f,	// (0x0004ccf9) list_set_graphic_pane_t1_ParamLimits

0xd45f,	// (0x0004ccf9) list_set_graphic_pane_t1

0x5e8e,	// (0x00045728) popup_midp_note_alarm_window_t6_ParamLimits

0x5e8e,	// (0x00045728) popup_midp_note_alarm_window_t6

0x5ea0,	// (0x0004573a) popup_midp_note_alarm_window_t7_ParamLimits

0x5ea0,	// (0x0004573a) popup_midp_note_alarm_window_t7

0x5eb2,	// (0x0004574c) popup_midp_note_alarm_window_t8_ParamLimits

0x5eb2,	// (0x0004574c) popup_midp_note_alarm_window_t8

0x5ec4,	// (0x0004575e) popup_midp_note_alarm_window_t9_ParamLimits

0x5ec4,	// (0x0004575e) popup_midp_note_alarm_window_t9

0x5ed6,	// (0x00045770) popup_midp_note_alarm_window_t10_ParamLimits

0x5ed6,	// (0x00045770) popup_midp_note_alarm_window_t10

0x5ee8,	// (0x00045782) popup_midp_note_alarm_window_t11_ParamLimits

0x5ee8,	// (0x00045782) popup_midp_note_alarm_window_t11

0x5efa,	// (0x00045794) scroll_pane_cp17_ParamLimits

0x5efa,	// (0x00045794) scroll_pane_cp17

0x20b3,	// (0x0004194d) volume_small_pane_cp_g1

0x2473,	// (0x00041d0d) volume_small_pane_cp_g2

0x247c,	// (0x00041d16) volume_small_pane_cp_g3

0x2485,	// (0x00041d1f) volume_small_pane_cp_g4

0x248e,	// (0x00041d28) volume_small_pane_cp_g5

0x2497,	// (0x00041d31) volume_small_pane_cp_g6

0x24a0,	// (0x00041d3a) volume_small_pane_cp_g7

0x24a9,	// (0x00041d43) volume_small_pane_cp_g8

0x24b2,	// (0x00041d4c) volume_small_pane_cp_g9

0x24bb,	// (0x00041d55) volume_small_pane_cp_g10

0x4b76,	// (0x00044410) midp_ticker_pane_g1_ParamLimits

0x4b82,	// (0x0004441c) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x0004eff7) midp_ticker_pane_g_ParamLimits

0x4b8e,	// (0x00044428) midp_ticker_pane_t1_ParamLimits

0xd61f,	// (0x0004ceb9) aid_fill_nsta_2

0x571f,	// (0x00044fb9) list_form2_midp_pane

0x6854,	// (0x000460ee) midp_editing_number_pane_ParamLimits

0x6863,	// (0x000460fd) midp_ticker_pane_ParamLimits

0x7474,	// (0x00046d0e) form2_midp_field_pane

0x7498,	// (0x00046d32) scroll_pane_cp51

0x74b8,	// (0x00046d52) form2_midp_button_pane_ParamLimits

0x74b8,	// (0x00046d52) form2_midp_button_pane

0x74ca,	// (0x00046d64) form2_midp_content_pane_ParamLimits

0x74ca,	// (0x00046d64) form2_midp_content_pane

0x74e4,	// (0x00046d7e) form2_midp_field_choice_group_pane

0x74ec,	// (0x00046d86) form2_midp_field_pane_g1

0x74f4,	// (0x00046d8e) form2_midp_field_pane_g2

0x74fc,	// (0x00046d96) form2_midp_field_pane_g3

0x7504,	// (0x00046d9e) form2_midp_field_pane_g4

0x0003,

0xfadb,	// (0x0004f375) form2_midp_field_pane_g

0x750c,	// (0x00046da6) form2_midp_gauge_slider_pane

0x7514,	// (0x00046dae) form2_midp_gauge_wait_pane

0x751c,	// (0x00046db6) form2_midp_image_pane_ParamLimits

0x751c,	// (0x00046db6) form2_midp_image_pane

0x7537,	// (0x00046dd1) form2_midp_label_pane_ParamLimits

0x7537,	// (0x00046dd1) form2_midp_label_pane

0xe017,	// (0x0004d8b1) form2_midp_label_pane_cp_ParamLimits

0xe017,	// (0x0004d8b1) form2_midp_label_pane_cp

0x7571,	// (0x00046e0b) form2_midp_string_pane_ParamLimits

0x7571,	// (0x00046e0b) form2_midp_string_pane

0xbbb3,	// (0x0004b44d) form2_midp_text_pane_ParamLimits

0xbbb3,	// (0x0004b44d) form2_midp_text_pane

0x7583,	// (0x00046e1d) form2_midp_time_pane

0x7593,	// (0x00046e2d) input_focus_pane_cp51_ParamLimits

0x7593,	// (0x00046e2d) input_focus_pane_cp51

0x75ab,	// (0x00046e45) form2_midp_label_pane_t1_ParamLimits

0x75ab,	// (0x00046e45) form2_midp_label_pane_t1

0xbbd2,	// (0x0004b46c) form2_mdip_text_pane_t1_ParamLimits

0xbbd2,	// (0x0004b46c) form2_mdip_text_pane_t1

0x0bde,	// (0x00040478) form2_midp_time_pane_t1

0x75f4,	// (0x00046e8e) form2_midp_gauge_slider_pane_t1

0xe036,	// (0x0004d8d0) form2_midp_gauge_slider_pane_t2

0xe048,	// (0x0004d8e2) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae4,	// (0x0004f37e) form2_midp_gauge_slider_pane_t

0x762a,	// (0x00046ec4) form2_midp_slider_pane

0x7636,	// (0x00046ed0) form2_midp_gauge_wait_pane_t1

0x7644,	// (0x00046ede) form2_midp_wait_pane_ParamLimits

0x7644,	// (0x00046ede) form2_midp_wait_pane

0xe05a,	// (0x0004d8f4) list_single_2graphic_pane_cp4_ParamLimits

0xe05a,	// (0x0004d8f4) list_single_2graphic_pane_cp4

0xda3b,	// (0x0004d2d5) list_single_midp_graphic_pane_cp_ParamLimits

0xda3b,	// (0x0004d2d5) list_single_midp_graphic_pane_cp

0x34c0,	// (0x00042d5a) list_highlight_pane_cp20

0x769e,	// (0x00046f38) list_single_2graphic_pane_g1_cp4

0x76a6,	// (0x00046f40) list_single_2graphic_pane_g2_cp4

0x76ae,	// (0x00046f48) list_single_2graphic_pane_t1_cp4

0x35a0,	// (0x00042e3a) list_highlight_pane_cp21

0x76bd,	// (0x00046f57) list_single_midp_graphic_pane_g4_cp

0x76cc,	// (0x00046f66) list_single_midp_graphic_pane_t1_cp

0xe06e,	// (0x0004d908) form2_mdip_string_pane_t1_ParamLimits

0xe06e,	// (0x0004d908) form2_mdip_string_pane_t1

0x34c0,	// (0x00042d5a) bg_wml_button_pane_cp2

0x34b6,	// (0x00042d50) form2_midp_image_pane_g1

0x136e,	// (0x00040c08) list_double_large_graphic_pane_g5_ParamLimits

0x136e,	// (0x00040c08) list_double_large_graphic_pane_g5

0x4de3,	// (0x0004467d) midp_form_pane_ParamLimits

0x35a0,	// (0x00042e3a) main_apps_wheel_pane_ParamLimits

0xc571,	// (0x0004be0b) popup_preview_window_ParamLimits

0xc571,	// (0x0004be0b) popup_preview_window

0x1f0e,	// (0x000417a8) popup_touch_info_window_ParamLimits

0x1f0e,	// (0x000417a8) popup_touch_info_window

0x1f2c,	// (0x000417c6) popup_touch_menu_window_ParamLimits

0x1f2c,	// (0x000417c6) popup_touch_menu_window

0x34ac,	// (0x00042d46) bg_popup_sub_pane_cp6

0x77da,	// (0x00047074) list_touch_menu_pane

0x77e2,	// (0x0004707c) list_single_touch_menu_pane_ParamLimits

0x77e2,	// (0x0004707c) list_single_touch_menu_pane

0x77f8,	// (0x00047092) list_single_touch_menu_pane_t1

0x35a0,	// (0x00042e3a) bg_popup_sub_pane_cp7_ParamLimits

0x35a0,	// (0x00042e3a) bg_popup_sub_pane_cp7

0x7806,	// (0x000470a0) heading_sub_pane

0x780e,	// (0x000470a8) list_touch_info_pane_ParamLimits

0x780e,	// (0x000470a8) list_touch_info_pane

0x781d,	// (0x000470b7) list_single_touch_info_pane_ParamLimits

0x781d,	// (0x000470b7) list_single_touch_info_pane

0x782f,	// (0x000470c9) list_single_touch_info_pane_t1

0x783d,	// (0x000470d7) list_single_touch_info_pane_t2

0x0001,

0xfaf2,	// (0x0004f38c) list_single_touch_info_pane_t

0x4aa5,	// (0x0004433f) bg_popup_heading_pane_cp

0x784b,	// (0x000470e5) heading_sub_pane_t1

0x5361,	// (0x00044bfb) bg_popup_preview_window_pane_cp_ParamLimits

0x5361,	// (0x00044bfb) bg_popup_preview_window_pane_cp

0x7806,	// (0x000470a0) heading_preview_pane

0x780e,	// (0x000470a8) list_preview_pane_ParamLimits

0x780e,	// (0x000470a8) list_preview_pane

0x7859,	// (0x000470f3) popup_preview_window_g1

0x781d,	// (0x000470b7) list_single_preview_pane_ParamLimits

0x781d,	// (0x000470b7) list_single_preview_pane

0x7861,	// (0x000470fb) list_single_preview_pane_g1

0x7869,	// (0x00047103) list_single_preview_pane_t1

0x782f,	// (0x000470c9) list_single_preview_pane_t2

0x0001,

0xfaf7,	// (0x0004f391) list_single_preview_pane_t

0x7877,	// (0x00047111) bg_popup_heading_pane_cp2_ParamLimits

0x7877,	// (0x00047111) bg_popup_heading_pane_cp2

0x788d,	// (0x00047127) heading_preview_pane_g1

0x7895,	// (0x0004712f) heading_preview_pane_t1_ParamLimits

0x7895,	// (0x0004712f) heading_preview_pane_t1

0x368c,	// (0x00042f26) soft_indicator_pane_t1_ParamLimits

0x3d82,	// (0x0004361c) scroll_pane_ParamLimits

0x429b,	// (0x00043b35) scroll_sc2_left_pane

0x42a4,	// (0x00043b3e) scroll_sc2_right_pane

0x42c3,	// (0x00043b5d) scroll_bg_pane_g1_ParamLimits

0x42d8,	// (0x00043b72) scroll_bg_pane_g2_ParamLimits

0x42f0,	// (0x00043b8a) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x0004ef82) scroll_bg_pane_g_ParamLimits

0x42c3,	// (0x00043b5d) scroll_handle_pane_g1_ParamLimits

0x4312,	// (0x00043bac) scroll_handle_pane_g2_ParamLimits

0x42f0,	// (0x00043b8a) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x0004ef89) scroll_handle_pane_g_ParamLimits

0x19d4,	// (0x0004126e) popup_choice_list_window_ParamLimits

0x19d4,	// (0x0004126e) popup_choice_list_window

0x5237,	// (0x00044ad1) choice_list_pane

0x52b9,	// (0x00044b53) cell_toolbar_pane_t1

0x52e1,	// (0x00044b7b) toolbar_button_pane_ParamLimits

0x63b4,	// (0x00045c4e) ai_gene_pane_1_t2_ParamLimits

0x63b4,	// (0x00045c4e) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x0004f1ac) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x0004f1ac) ai_gene_pane_1_t

0x78b2,	// (0x0004714c) scroll_sc2_left_pane_g1

0x78b2,	// (0x0004714c) scroll_sc2_right_pane_g1

0x4de3,	// (0x0004467d) bg_popup_sub_pane_cp10

0x78bc,	// (0x00047156) list_choice_list_pane

0x78d5,	// (0x0004716f) list_single_choice_list_pane_ParamLimits

0x78d5,	// (0x0004716f) list_single_choice_list_pane

0x78e8,	// (0x00047182) list_single_choice_list_pane_g1

0x3fa3,	// (0x0004383d) list_single_choice_list_pane_t1_ParamLimits

0x3fa3,	// (0x0004383d) list_single_choice_list_pane_t1

0x78f0,	// (0x0004718a) choice_list_pane_g1

0x78f8,	// (0x00047192) choice_list_pane_t1

0x34ac,	// (0x00042d46) input_focus_pane_cp11

0x417a,	// (0x00043a14) title_pane_stacon_g2_ParamLimits

0x417a,	// (0x00043a14) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x0004ef68) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x0004ef68) title_pane_stacon_g

0x4aa5,	// (0x0004433f) cursor_press_pane

0xc21e,	// (0x0004bab8) popup_fep_hwr_window_ParamLimits

0xc21e,	// (0x0004bab8) popup_fep_hwr_window

0x1afa,	// (0x00041394) popup_fep_vkb_window_ParamLimits

0x1afa,	// (0x00041394) popup_fep_vkb_window

0x7906,	// (0x000471a0) cursor_press_pane_g1

0x0002,

0xfb20,	// (0x0004f3ba) fep_vkb_side_pane_g_ParamLimits

0x24fd,	// (0x00041d97) fep_hwr_candidate_pane_ParamLimits

0x24fd,	// (0x00041d97) fep_hwr_candidate_pane

0x2527,	// (0x00041dc1) fep_hwr_side_pane_ParamLimits

0x2527,	// (0x00041dc1) fep_hwr_side_pane

0x2547,	// (0x00041de1) fep_hwr_top_pane_ParamLimits

0x2547,	// (0x00041de1) fep_hwr_top_pane

0x255f,	// (0x00041df9) fep_hwr_write_pane_ParamLimits

0x255f,	// (0x00041df9) fep_hwr_write_pane

0xfb20,	// (0x0004f3ba) fep_vkb_side_pane_g

0x790e,	// (0x000471a8) fep_hwr_top_pane_g1

0x7920,	// (0x000471ba) fep_hwr_top_pane_g2

0x258b,	// (0x00041e25) fep_hwr_top_pane_g3

0x0002,

0xfafc,	// (0x0004f396) fep_hwr_top_pane_g

0x25a0,	// (0x00041e3a) fep_hwr_top_text_pane

0x4492,	// (0x00043d2c) fep_hwr_top_text_pane_g1

0x7956,	// (0x000471f0) fep_hwr_top_text_pane_t1

0x2696,	// (0x00041f30) fep_hwr_candidate_pane_g1

0x7ba9,	// (0x00047443) fep_vkb_keypad_pane_g3_ParamLimits

0x7ba9,	// (0x00047443) fep_vkb_keypad_pane_g3

0x7bd1,	// (0x0004746b) fep_vkb_keypad_pane_g4_ParamLimits

0x7bd1,	// (0x0004746b) fep_vkb_keypad_pane_g4

0x7c40,	// (0x000474da) fep_vkb_bottom_pane_g2_ParamLimits

0x7c40,	// (0x000474da) fep_vkb_bottom_pane_g2

0x0001,

0xfb27,	// (0x0004f3c1) fep_vkb_bottom_pane_g_ParamLimits

0xfb27,	// (0x0004f3c1) fep_vkb_bottom_pane_g

0x78b2,	// (0x0004714c) cell_vkb_side_pane_g2

0x0001,

0xfb31,	// (0x0004f3cb) cell_vkb_side_pane_g

0x7ccb,	// (0x00047565) cell_vkb_side_pane_t1

0x7cd9,	// (0x00047573) cell_vkb_side_pane_t1_copy1

0x78b2,	// (0x0004714c) bg_fep_vkb_candidate_pane_g2

0x7e05,	// (0x0004769f) cell_vkb_candidate_pane_ParamLimits

0x7964,	// (0x000471fe) aid_size_cell_vkb_ParamLimits

0x7964,	// (0x000471fe) aid_size_cell_vkb

0x7e05,	// (0x0004769f) cell_vkb_candidate_pane

0x26b0,	// (0x00041f4a) bg_popup_fep_shadow_pane_g1

0xe11a,	// (0x0004d9b4) fep_vkb_bottom_pane_ParamLimits

0xe11a,	// (0x0004d9b4) fep_vkb_bottom_pane

0x7a28,	// (0x000472c2) fep_vkb_candidate_pane_ParamLimits

0x7a28,	// (0x000472c2) fep_vkb_candidate_pane

0xe13f,	// (0x0004d9d9) fep_vkb_keypad_pane_ParamLimits

0xe13f,	// (0x0004d9d9) fep_vkb_keypad_pane

0xe17b,	// (0x0004da15) fep_vkb_side_pane_ParamLimits

0xe17b,	// (0x0004da15) fep_vkb_side_pane

0xe1b7,	// (0x0004da51) fep_vkb_top_pane_ParamLimits

0xe1b7,	// (0x0004da51) fep_vkb_top_pane

0x7b02,	// (0x0004739c) fep_vkb_top_pane_g1_ParamLimits

0x7b02,	// (0x0004739c) fep_vkb_top_pane_g1

0x7b11,	// (0x000473ab) fep_vkb_top_pane_g2_ParamLimits

0x7b11,	// (0x000473ab) fep_vkb_top_pane_g2

0x7b20,	// (0x000473ba) fep_vkb_top_pane_g3_ParamLimits

0x7b20,	// (0x000473ba) fep_vkb_top_pane_g3

0x0003,

0xfb17,	// (0x0004f3b1) fep_vkb_top_pane_g_ParamLimits

0xfb17,	// (0x0004f3b1) fep_vkb_top_pane_g

0x7b3e,	// (0x000473d8) fep_vkb_top_text_pane_ParamLimits

0x7b3e,	// (0x000473d8) fep_vkb_top_text_pane

0xe1f3,	// (0x0004da8d) fep_vkb_side_pane_g1_ParamLimits

0xe1f3,	// (0x0004da8d) fep_vkb_side_pane_g1

0x7b98,	// (0x00047432) grid_vkb_side_pane_ParamLimits

0x7b98,	// (0x00047432) grid_vkb_side_pane

0x26b8,	// (0x00041f52) bg_popup_fep_shadow_pane_g2

0x26c1,	// (0x00041f5b) bg_popup_fep_shadow_pane_g3

0x26c9,	// (0x00041f63) bg_popup_fep_shadow_pane_g4

0x26d2,	// (0x00041f6c) bg_popup_fep_shadow_pane_g5

0x26dc,	// (0x00041f76) bg_popup_fep_shadow_pane_g6

0x26e4,	// (0x00041f7e) bg_popup_fep_shadow_pane_g7

0x3e8a,	// (0x00043724) bg_popup_fep_shadow_pane_g8

0x7bef,	// (0x00047489) grid_vkb_keypad_number_pane_ParamLimits

0x7bef,	// (0x00047489) grid_vkb_keypad_number_pane

0x7bff,	// (0x00047499) grid_vkb_keypad_pane_ParamLimits

0x7bff,	// (0x00047499) grid_vkb_keypad_pane

0x7c25,	// (0x000474bf) fep_vkb_bottom_pane_g1_ParamLimits

0x7c25,	// (0x000474bf) fep_vkb_bottom_pane_g1

0x7c4e,	// (0x000474e8) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7c4e,	// (0x000474e8) grid_vkb_keypad_bottom_left_pane

0x7c63,	// (0x000474fd) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7c63,	// (0x000474fd) grid_vkb_keypad_bottom_right_pane

0x7c78,	// (0x00047512) fep_vkb_top_text_pane_g1

0xe23a,	// (0x0004dad4) fep_vkb_top_text_pane_t1

0xe24c,	// (0x0004dae6) cell_vkb_side_pane_ParamLimits

0xe24c,	// (0x0004dae6) cell_vkb_side_pane

0x78b2,	// (0x0004714c) cell_vkb_side_pane_g1

0x7ce7,	// (0x00047581) cell_vkb_keypad_pane_ParamLimits

0x7ce7,	// (0x00047581) cell_vkb_keypad_pane

0x7d5c,	// (0x000475f6) cell_vkb_keypad_pane_g1

0x0008,

0xfb44,	// (0x0004f3de) bg_popup_fep_shadow_pane_g

0x78b2,	// (0x0004714c) cell_hwr_side_pane_g1

0x78b2,	// (0x0004714c) cell_hwr_side_pane_g2

0x7d66,	// (0x00047600) cell_vkb_keypad_pane_t1

0xe262,	// (0x0004dafc) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe262,	// (0x0004dafc) cell_vkb_keypad_bottom_left_pane

0xe277,	// (0x0004db11) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe277,	// (0x0004db11) cell_vkb_keypad_bottom_right_pane

0x78b2,	// (0x0004714c) cell_vkb_keypad_bottom_left_pane_g1

0x78b2,	// (0x0004714c) cell_vkb_keypad_bottom_right_pane_g1

0x7dca,	// (0x00047664) cell_vkb_keypad_number_pane_ParamLimits

0x7dca,	// (0x00047664) cell_vkb_keypad_number_pane

0x7de9,	// (0x00047683) cell_vkb_keypad_number_pane_g1

0x7df3,	// (0x0004768d) cell_vkb_keypad_number_pane_g2

0x7dfc,	// (0x00047696) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb36,	// (0x0004f3d0) cell_vkb_keypad_number_pane_g

0x7d66,	// (0x00047600) cell_vkb_keypad_number_pane_t1

0x7e20,	// (0x000476ba) fep_vkb_candidate_pane_g1

0x0001,

0xfb31,	// (0x0004f3cb) cell_hwr_side_pane_g

0x7e39,	// (0x000476d3) cell_hwr_side_pane_t1

0x26f6,	// (0x00041f90) cell_hwr_side_pane_t1_copy1

0x7b30,	// (0x000473ca) cell_hwr_candidate_pane_g1

0x2704,	// (0x00041f9e) cell_hwr_candidate_pane_t1

0x78b2,	// (0x0004714c) cell_vkb_candidate_pane_g2

0x7ebf,	// (0x00047759) cell_vkb_candidate_pane_t1

0x24c4,	// (0x00041d5e) bg_popup_fep_shadow_pane_ParamLimits

0x24c4,	// (0x00041d5e) bg_popup_fep_shadow_pane

0xe0e0,	// (0x0004d97a) bg_fep_hwr_top_pane_g4

0x7932,	// (0x000471cc) bg_hwr_side_pane_g1_ParamLimits

0x7932,	// (0x000471cc) bg_hwr_side_pane_g1

0xc8cd,	// (0x0004c167) cell_hwr_side_pane_ParamLimits

0xc8cd,	// (0x0004c167) cell_hwr_side_pane

0x2617,	// (0x00041eb1) fep_hwr_write_pane_g1_ParamLimits

0x2617,	// (0x00041eb1) fep_hwr_write_pane_g1

0x2624,	// (0x00041ebe) fep_hwr_write_pane_g2_ParamLimits

0x2624,	// (0x00041ebe) fep_hwr_write_pane_g2

0x2631,	// (0x00041ecb) fep_hwr_write_pane_g3_ParamLimits

0x2631,	// (0x00041ecb) fep_hwr_write_pane_g3

0xc8ed,	// (0x0004c187) fep_hwr_write_pane_g4_ParamLimits

0xc8ed,	// (0x0004c187) fep_hwr_write_pane_g4

0x0005,

0xfb03,	// (0x0004f39d) fep_hwr_write_pane_g_ParamLimits

0xfb03,	// (0x0004f39d) fep_hwr_write_pane_g

0xe0e0,	// (0x0004d97a) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xe0e0,	// (0x0004d97a) bg_fep_hwr_candidate_pane_g2

0x2654,	// (0x00041eee) cell_hwr_candidate_pane_ParamLimits

0x2654,	// (0x00041eee) cell_hwr_candidate_pane

0x2696,	// (0x00041f30) fep_hwr_candidate_pane_g1_ParamLimits

0x7992,	// (0x0004722c) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7992,	// (0x0004722c) bg_popup_fep_shadow_pane_cp2

0x7b30,	// (0x000473ca) fep_vkb_top_pane_g4_ParamLimits

0x7b30,	// (0x000473ca) fep_vkb_top_pane_g4

0x7b76,	// (0x00047410) fep_vkb_side_pane_g2_ParamLimits

0x7b76,	// (0x00047410) fep_vkb_side_pane_g2

0xb89c,	// (0x0004b136) list_setting_pane_t4_ParamLimits

0xb89c,	// (0x0004b136) list_setting_pane_t4

0xb936,	// (0x0004b1d0) list_setting_number_pane_t5_ParamLimits

0xb936,	// (0x0004b1d0) list_setting_number_pane_t5

0x44c9,	// (0x00043d63) list_double_heading_pane_cp2_ParamLimits

0x44c9,	// (0x00043d63) list_double_heading_pane_cp2

0x3db6,	// (0x00043650) list_double_heading_pane_g1_cp2_ParamLimits

0x3db6,	// (0x00043650) list_double_heading_pane_g1_cp2

0x3e29,	// (0x000436c3) list_double_heading_pane_g2_cp2_ParamLimits

0x3e29,	// (0x000436c3) list_double_heading_pane_g2_cp2

0x7ecd,	// (0x00047767) list_double_heading_pane_t1_cp2_ParamLimits

0x7ecd,	// (0x00047767) list_double_heading_pane_t1_cp2

0x7ee3,	// (0x0004777d) list_double_heading_pane_t2_cp2_ParamLimits

0x7ee3,	// (0x0004777d) list_double_heading_pane_t2_cp2

0x3494,	// (0x00042d2e) aid_value_unit2

0x1144,	// (0x000409de) popup_preview_fixed_window

0x3829,	// (0x000430c3) bg_popup_preview_window_pane_cp02

0x7ef5,	// (0x0004778f) list_preview_fixed_pane

0x7f3b,	// (0x000477d5) list_empty_pane_fp_ParamLimits

0x7f3b,	// (0x000477d5) list_empty_pane_fp

0x7f3b,	// (0x000477d5) list_single_cale_day_pane_fp_ParamLimits

0x7f3b,	// (0x000477d5) list_single_cale_day_pane_fp

0x7f3b,	// (0x000477d5) list_single_graphic_heading_pane_fp_ParamLimits

0x7f3b,	// (0x000477d5) list_single_graphic_heading_pane_fp

0x7f3b,	// (0x000477d5) list_single_graphic_pane_fp_ParamLimits

0x7f3b,	// (0x000477d5) list_single_graphic_pane_fp

0x7f3b,	// (0x000477d5) list_single_heading_pane_fp_ParamLimits

0x7f3b,	// (0x000477d5) list_single_heading_pane_fp

0x7f3b,	// (0x000477d5) list_single_pane_fp_ParamLimits

0x7f3b,	// (0x000477d5) list_single_pane_fp

0x7f50,	// (0x000477ea) list_single_pane_fp_g1_ParamLimits

0x7f50,	// (0x000477ea) list_single_pane_fp_g1

0x3db6,	// (0x00043650) list_single_pane_fp_g2_ParamLimits

0x3db6,	// (0x00043650) list_single_pane_fp_g2

0x3e29,	// (0x000436c3) list_single_pane_fp_g3_ParamLimits

0x3e29,	// (0x000436c3) list_single_pane_fp_g3

0x7f5c,	// (0x000477f6) list_single_pane_fp_g4_ParamLimits

0x7f5c,	// (0x000477f6) list_single_pane_fp_g4

0x0003,

0xfb65,	// (0x0004f3ff) list_single_pane_fp_g_ParamLimits

0xfb65,	// (0x0004f3ff) list_single_pane_fp_g

0x0bf1,	// (0x0004048b) list_single_pane_fp_t1_ParamLimits

0x0bf1,	// (0x0004048b) list_single_pane_fp_t1

0x0c08,	// (0x000404a2) list_single_graphic_pane_fp_g1_ParamLimits

0x0c08,	// (0x000404a2) list_single_graphic_pane_fp_g1

0x7f50,	// (0x000477ea) list_single_graphic_pane_fp_g2_ParamLimits

0x7f50,	// (0x000477ea) list_single_graphic_pane_fp_g2

0x3db6,	// (0x00043650) list_single_graphic_pane_fp_g3_ParamLimits

0x3db6,	// (0x00043650) list_single_graphic_pane_fp_g3

0x3e29,	// (0x000436c3) list_single_graphic_pane_fp_g4_ParamLimits

0x3e29,	// (0x000436c3) list_single_graphic_pane_fp_g4

0x7f5c,	// (0x000477f6) list_single_graphic_pane_fp_g5_ParamLimits

0x7f5c,	// (0x000477f6) list_single_graphic_pane_fp_g5

0x0004,

0xfb6e,	// (0x0004f408) list_single_graphic_pane_fp_g_ParamLimits

0xfb6e,	// (0x0004f408) list_single_graphic_pane_fp_g

0x0c14,	// (0x000404ae) list_single_graphic_pane_fp_t1_ParamLimits

0x0c14,	// (0x000404ae) list_single_graphic_pane_fp_t1

0x0c08,	// (0x000404a2) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x0c08,	// (0x000404a2) list_single_graphic_heading_pane_fp_g1

0x7f50,	// (0x000477ea) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7f50,	// (0x000477ea) list_single_graphic_heading_pane_fp_g2

0x3db6,	// (0x00043650) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x3db6,	// (0x00043650) list_single_graphic_heading_pane_fp_g3

0x3e29,	// (0x000436c3) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x3e29,	// (0x000436c3) list_single_graphic_heading_pane_fp_g4

0x7f5c,	// (0x000477f6) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7f5c,	// (0x000477f6) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb6e,	// (0x0004f408) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb6e,	// (0x0004f408) list_single_graphic_heading_pane_fp_g

0x0c2a,	// (0x000404c4) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x0c2a,	// (0x000404c4) list_single_graphic_heading_pane_fp_t1

0x0c40,	// (0x000404da) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x0c40,	// (0x000404da) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb79,	// (0x0004f413) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb79,	// (0x0004f413) list_single_graphic_heading_pane_fp_t

0x0c52,	// (0x000404ec) list_single_cale_day_pane_fp_g1_ParamLimits

0x0c52,	// (0x000404ec) list_single_cale_day_pane_fp_g1

0x7f68,	// (0x00047802) list_single_cale_day_pane_fp_g2_ParamLimits

0x7f68,	// (0x00047802) list_single_cale_day_pane_fp_g2

0x2722,	// (0x00041fbc) list_single_cale_day_pane_fp_g3_ParamLimits

0x2722,	// (0x00041fbc) list_single_cale_day_pane_fp_g3

0x274a,	// (0x00041fe4) list_single_cale_day_pane_fp_g4_ParamLimits

0x274a,	// (0x00041fe4) list_single_cale_day_pane_fp_g4

0x276e,	// (0x00042008) list_single_cale_day_pane_fp_g5_ParamLimits

0x276e,	// (0x00042008) list_single_cale_day_pane_fp_g5

0x0004,

0xfb7e,	// (0x0004f418) list_single_cale_day_pane_fp_g_ParamLimits

0xfb7e,	// (0x0004f418) list_single_cale_day_pane_fp_g

0x0c8a,	// (0x00040524) list_single_cale_day_pane_fp_t1_ParamLimits

0x0c8a,	// (0x00040524) list_single_cale_day_pane_fp_t1

0x0cb0,	// (0x0004054a) list_single_cale_day_pane_fp_t2_ParamLimits

0x0cb0,	// (0x0004054a) list_single_cale_day_pane_fp_t2

0x0cc9,	// (0x00040563) list_single_cale_day_pane_fp_t3_ParamLimits

0x0cc9,	// (0x00040563) list_single_cale_day_pane_fp_t3

0x0002,

0xfb89,	// (0x0004f423) list_single_cale_day_pane_fp_t_ParamLimits

0xfb89,	// (0x0004f423) list_single_cale_day_pane_fp_t

0x7f50,	// (0x000477ea) list_empty_pane_fp_g1_ParamLimits

0x7f50,	// (0x000477ea) list_empty_pane_fp_g1

0x0ce2,	// (0x0004057c) list_empty_pane_fp_t1

0x0cf0,	// (0x0004058a) list_empty_pane_fp_t2

0x0001,

0xfb90,	// (0x0004f42a) list_empty_pane_fp_t

0x7f50,	// (0x000477ea) list_single_heading_pane_fp_g1_ParamLimits

0x7f50,	// (0x000477ea) list_single_heading_pane_fp_g1

0x3db6,	// (0x00043650) list_single_heading_pane_fp_g2_ParamLimits

0x3db6,	// (0x00043650) list_single_heading_pane_fp_g2

0x3e29,	// (0x000436c3) list_single_heading_pane_fp_g3_ParamLimits

0x3e29,	// (0x000436c3) list_single_heading_pane_fp_g3

0x0002,

0xfb95,	// (0x0004f42f) list_single_heading_pane_fp_g_ParamLimits

0xfb95,	// (0x0004f42f) list_single_heading_pane_fp_g

0x0cfe,	// (0x00040598) list_single_heading_pane_fp_t1_ParamLimits

0x0cfe,	// (0x00040598) list_single_heading_pane_fp_t1

0x0d10,	// (0x000405aa) list_single_heading_pane_fp_t2_ParamLimits

0x0d10,	// (0x000405aa) list_single_heading_pane_fp_t2

0x0001,

0xfb9c,	// (0x0004f436) list_single_heading_pane_fp_t_ParamLimits

0xfb9c,	// (0x0004f436) list_single_heading_pane_fp_t

0x4011,	// (0x000438ab) aid_size_cell_fast

0x3799,	// (0x00043033) soft_indicator_pane_cp1_t1

0x404e,	// (0x000438e8) cell_app_pane_cp2_ParamLimits

0x404e,	// (0x000438e8) cell_app_pane_cp2

0x24e6,	// (0x00041d80) fep_hwr_candidate_drop_down_list_pane

0xe0ee,	// (0x0004d988) fep_hwr_candidate_pane_g3_ParamLimits

0xe0ee,	// (0x0004d988) fep_hwr_candidate_pane_g3

0xe0fb,	// (0x0004d995) fep_hwr_candidate_pane_g4_ParamLimits

0xe0fb,	// (0x0004d995) fep_hwr_candidate_pane_g4

0x0002,

0xfb10,	// (0x0004f3aa) fep_hwr_candidate_pane_g_ParamLimits

0xfb10,	// (0x0004f3aa) fep_hwr_candidate_pane_g

0x7a17,	// (0x000472b1) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7a17,	// (0x000472b1) fep_vkb_candidate_drop_down_list_pane

0x7e28,	// (0x000476c2) fep_vkb_candidate_pane_g3

0x7e30,	// (0x000476ca) fep_vkb_candidate_pane_g4

0x0002,

0xfb3d,	// (0x0004f3d7) fep_vkb_candidate_pane_g

0x7b30,	// (0x000473ca) cell_hwr_candidate_pane_g1_ParamLimits

0x7e47,	// (0x000476e1) cell_hwr_candidate_pane_g3_ParamLimits

0x7e47,	// (0x000476e1) cell_hwr_candidate_pane_g3

0x7e68,	// (0x00047702) cell_hwr_candidate_pane_g4_ParamLimits

0x7e68,	// (0x00047702) cell_hwr_candidate_pane_g4

0x0002,

0xfb57,	// (0x0004f3f1) cell_hwr_candidate_pane_g_ParamLimits

0xfb57,	// (0x0004f3f1) cell_hwr_candidate_pane_g

0x7e89,	// (0x00047723) cell_vkb_candidate_pane_g3_ParamLimits

0x7e89,	// (0x00047723) cell_vkb_candidate_pane_g3

0x7ea4,	// (0x0004773e) cell_vkb_candidate_pane_g4_ParamLimits

0x7ea4,	// (0x0004773e) cell_vkb_candidate_pane_g4

0x7f74,	// (0x0004780e) cell_app_pane_cp2_g1_ParamLimits

0x7f74,	// (0x0004780e) cell_app_pane_cp2_g1

0x7f92,	// (0x0004782c) cell_app_pane_cp2_g2_ParamLimits

0x7f92,	// (0x0004782c) cell_app_pane_cp2_g2

0x0001,

0xfba1,	// (0x0004f43b) cell_app_pane_cp2_g_ParamLimits

0xfba1,	// (0x0004f43b) cell_app_pane_cp2_g

0x7f9e,	// (0x00047838) cell_app_pane_cp2_t1_ParamLimits

0x7f9e,	// (0x00047838) cell_app_pane_cp2_t1

0x3e1b,	// (0x000436b5) grid_highlight_pane_cp1_ParamLimits

0x3e1b,	// (0x000436b5) grid_highlight_pane_cp1

0x2792,	// (0x0004202c) cell_hwr_candidate_pane_cp1_ParamLimits

0x2792,	// (0x0004202c) cell_hwr_candidate_pane_cp1

0x7b30,	// (0x000473ca) fep_hwr_candidate_drop_down_list_pane_g1

0x7fb0,	// (0x0004784a) fep_hwr_candidate_drop_down_list_pane_g2

0x7fbd,	// (0x00047857) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfba6,	// (0x0004f440) fep_hwr_candidate_drop_down_list_pane_g

0x27b1,	// (0x0004204b) fep_hwr_candidate_drop_down_list_scroll_pane

0x27ba,	// (0x00042054) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x27ba,	// (0x00042054) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x27c7,	// (0x00042061) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x27c7,	// (0x00042061) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x27d4,	// (0x0004206e) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x27d4,	// (0x0004206e) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7e89,	// (0x00047723) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7e89,	// (0x00047723) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7ea4,	// (0x0004773e) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7ea4,	// (0x0004773e) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x27e1,	// (0x0004207b) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x27e1,	// (0x0004207b) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x27fc,	// (0x00042096) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x27fc,	// (0x00042096) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x2817,	// (0x000420b1) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x2817,	// (0x000420b1) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbad,	// (0x0004f447) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbad,	// (0x0004f447) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7fca,	// (0x00047864) cell_vkb_candidate_pane_cp1_ParamLimits

0x7fca,	// (0x00047864) cell_vkb_candidate_pane_cp1

0x7b30,	// (0x000473ca) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7b30,	// (0x000473ca) fep_vkb_candidate_drop_down_list_pane_g1

0x7fb0,	// (0x0004784a) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7fb0,	// (0x0004784a) fep_vkb_candidate_drop_down_list_pane_g2

0x7fbd,	// (0x00047857) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7fbd,	// (0x00047857) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfba6,	// (0x0004f440) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfba6,	// (0x0004f440) fep_vkb_candidate_drop_down_list_pane_g

0x7fea,	// (0x00047884) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7fea,	// (0x00047884) fep_vkb_candidate_drop_down_list_scroll_pane

0x7ff7,	// (0x00047891) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7ff7,	// (0x00047891) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x8004,	// (0x0004789e) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x8004,	// (0x0004789e) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x8010,	// (0x000478aa) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x8010,	// (0x000478aa) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7e47,	// (0x000476e1) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7e47,	// (0x000476e1) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7e68,	// (0x00047702) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7e68,	// (0x00047702) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x801c,	// (0x000478b6) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x801c,	// (0x000478b6) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x803d,	// (0x000478d7) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x803d,	// (0x000478d7) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x805e,	// (0x000478f8) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x805e,	// (0x000478f8) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbe,	// (0x0004f458) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbe,	// (0x0004f458) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xbf4b,	// (0x0004b7e5) title_pane_g1_ParamLimits

0xbf5e,	// (0x0004b7f8) title_pane_g2_ParamLimits

0xf54e,	// (0x0004ede8) title_pane_g_ParamLimits

0x4482,	// (0x00043d1c) aid_call2_pane

0x448a,	// (0x00043d24) aid_call_pane

0x4492,	// (0x00043d2c) popup_clock_analogue_window_g1

0x4492,	// (0x00043d2c) popup_clock_analogue_window_g2

0x1561,	// (0x00040dfb) popup_clock_analogue_window_g3

0x156a,	// (0x00040e04) popup_clock_analogue_window_g4

0x34b6,	// (0x00042d50) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x0004ef97) popup_clock_analogue_window_g

0x1572,	// (0x00040e0c) popup_clock_analogue_window_t1

0x1580,	// (0x00040e1a) clock_digital_number_pane_ParamLimits

0x1580,	// (0x00040e1a) clock_digital_number_pane

0x158c,	// (0x00040e26) clock_digital_number_pane_cp02_ParamLimits

0x158c,	// (0x00040e26) clock_digital_number_pane_cp02

0x1598,	// (0x00040e32) clock_digital_number_pane_cp03_ParamLimits

0x1598,	// (0x00040e32) clock_digital_number_pane_cp03

0x15a4,	// (0x00040e3e) clock_digital_number_pane_cp04_ParamLimits

0x15a4,	// (0x00040e3e) clock_digital_number_pane_cp04

0x15b0,	// (0x00040e4a) clock_digital_separator_pane_ParamLimits

0x15b0,	// (0x00040e4a) clock_digital_separator_pane

0x15bc,	// (0x00040e56) popup_clock_digital_window_t1_ParamLimits

0x15bc,	// (0x00040e56) popup_clock_digital_window_t1

0x34b6,	// (0x00042d50) clock_digital_number_pane_g1

0x34b6,	// (0x00042d50) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x0004efa2) clock_digital_number_pane_g

0x34b6,	// (0x00042d50) clock_digital_separator_pane_g1

0x34b6,	// (0x00042d50) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x0004efa2) clock_digital_separator_pane_g

0xd5fb,	// (0x0004ce95) aid_fill_nsta_ParamLimits

0xd731,	// (0x0004cfcb) indicator_nsta_pane_ParamLimits

0x50c4,	// (0x0004495e) popup_clock_analogue_window

0x50c4,	// (0x0004495e) popup_clock_digital_window

0x3fd2,	// (0x0004386c) grid_indicator_nsta_pane_ParamLimits

0x72af,	// (0x00046b49) clock_nsta_pane_t2

0x0001,

0xfa90,	// (0x0004f32a) clock_nsta_pane_t

0x1525,	// (0x00040dbf) aid_size_max_handle

0xbfc9,	// (0x0004b863) aid_size_min_handle

0x4aa5,	// (0x0004433f) editor_scroll_pane

0x8085,	// (0x0004791f) ex_editor_pane

0x3f7f,	// (0x00043819) scroll_pane_cp13

0x3dae,	// (0x00043648) scroll_pane_cp14

0x44c1,	// (0x00043d5b) scroll_pane_cp36

0xd3ba,	// (0x0004cc54) list_single_graphic_hl_pane_cp2_ParamLimits

0xd3ba,	// (0x0004cc54) list_single_graphic_hl_pane_cp2

0xc893,	// (0x0004c12d) list_single_graphic_hl_pane_ParamLimits

0xc893,	// (0x0004c12d) list_single_graphic_hl_pane

0x0d26,	// (0x000405c0) aid_size_min_hl_cp1

0x808d,	// (0x00047927) list_highlight_pane_cp34_ParamLimits

0x808d,	// (0x00047927) list_highlight_pane_cp34

0x809e,	// (0x00047938) list_single_graphic_hl_pane_g1_ParamLimits

0x809e,	// (0x00047938) list_single_graphic_hl_pane_g1

0xbbec,	// (0x0004b486) list_single_graphic_hl_pane_g2_ParamLimits

0xbbec,	// (0x0004b486) list_single_graphic_hl_pane_g2

0xbbec,	// (0x0004b486) list_single_graphic_hl_pane_g3_ParamLimits

0xbbec,	// (0x0004b486) list_single_graphic_hl_pane_g3

0x4a16,	// (0x000442b0) list_single_graphic_hl_pane_g4_ParamLimits

0x4a16,	// (0x000442b0) list_single_graphic_hl_pane_g4

0x2832,	// (0x000420cc) list_single_graphic_hl_pane_g5_ParamLimits

0x2832,	// (0x000420cc) list_single_graphic_hl_pane_g5

0x0004,

0xfbcf,	// (0x0004f469) list_single_graphic_hl_pane_g_ParamLimits

0xfbcf,	// (0x0004f469) list_single_graphic_hl_pane_g

0xbbf8,	// (0x0004b492) list_single_graphic_hl_pane_t1_ParamLimits

0xbbf8,	// (0x0004b492) list_single_graphic_hl_pane_t1

0x80ab,	// (0x00047945) aid_size_min_hl_cp2

0x80b4,	// (0x0004794e) list_highlight_pane_cp34_cp2_ParamLimits

0x80b4,	// (0x0004794e) list_highlight_pane_cp34_cp2

0x809e,	// (0x00047938) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x809e,	// (0x00047938) list_single_graphic_hl_pane_g1_cp2

0x80c1,	// (0x0004795b) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x80c1,	// (0x0004795b) list_single_graphic_hl_pane_g2_cp2

0x80cd,	// (0x00047967) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x80cd,	// (0x00047967) list_single_graphic_hl_pane_g3_cp2

0x8079,	// (0x00047913) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x8079,	// (0x00047913) list_single_graphic_hl_pane_g4_cp2

0x80db,	// (0x00047975) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x80db,	// (0x00047975) list_single_graphic_hl_pane_g5_cp2

0xc036,	// (0x0004b8d0) control_pane_g4_ParamLimits

0xc036,	// (0x0004b8d0) control_pane_g4

0x4de3,	// (0x0004467d) bg_popup_sub_pane_cp10_ParamLimits

0x78bc,	// (0x00047156) list_choice_list_pane_ParamLimits

0x78cb,	// (0x00047165) scroll_pane_cp23

0x3829,	// (0x000430c3) bg_popup_preview_window_pane_cp02_ParamLimits

0x7ef5,	// (0x0004778f) list_preview_fixed_pane_ParamLimits

0x7f0b,	// (0x000477a5) list_preview_fixed_pane_cp_ParamLimits

0x7f0b,	// (0x000477a5) list_preview_fixed_pane_cp

0x7f17,	// (0x000477b1) popup_preview_fixed_window_g1_ParamLimits

0x7f17,	// (0x000477b1) popup_preview_fixed_window_g1

0x7f23,	// (0x000477bd) popup_preview_fixed_window_g2_ParamLimits

0x7f23,	// (0x000477bd) popup_preview_fixed_window_g2

0x0002,

0xfb5e,	// (0x0004f3f8) popup_preview_fixed_window_g_ParamLimits

0xfb5e,	// (0x0004f3f8) popup_preview_fixed_window_g

0x1499,	// (0x00040d33) aid_navi_side_left_pane_ParamLimits

0x14ae,	// (0x00040d48) aid_navi_side_right_pane_ParamLimits

0x14c6,	// (0x00040d60) navi_icon_pane_stacon_ParamLimits

0x14da,	// (0x00040d74) navi_navi_pane_stacon_ParamLimits

0x14c6,	// (0x00040d60) navi_text_pane_stacon_ParamLimits

0x34ac,	// (0x00042d46) main_text_info_pane

0x8105,	// (0x0004799f) listscroll_text_info_pane

0x810d,	// (0x000479a7) list_text_info_pane_ParamLimits

0x810d,	// (0x000479a7) list_text_info_pane

0x811c,	// (0x000479b6) scroll_pane_cp24_ParamLimits

0x811c,	// (0x000479b6) scroll_pane_cp24

0xe292,	// (0x0004db2c) list_text_info_pane_t1_ParamLimits

0xe292,	// (0x0004db2c) list_text_info_pane_t1

0xc191,	// (0x0004ba2b) popup_fast_swap2_window_ParamLimits

0xc191,	// (0x0004ba2b) popup_fast_swap2_window

0x816b,	// (0x00047a05) aid_size_cell_fast2

0x34ac,	// (0x00042d46) bg_popup_window_pane_cp17

0x574b,	// (0x00044fe5) heading_pane_cp2

0x3a78,	// (0x00043312) listscroll_fast2_pane

0x8175,	// (0x00047a0f) grid_fast2_pane

0x817f,	// (0x00047a19) listscroll_fast2_pane_g1

0x8187,	// (0x00047a21) listscroll_fast2_pane_g2

0x0001,

0xfbda,	// (0x0004f474) listscroll_fast2_pane_g

0x3f7f,	// (0x00043819) scroll_pane_cp26

0x8191,	// (0x00047a2b) cell_fast2_pane_ParamLimits

0x8191,	// (0x00047a2b) cell_fast2_pane

0x81a6,	// (0x00047a40) cell_fast2_pane_g1

0x81af,	// (0x00047a49) cell_fast2_pane_g2

0x81b8,	// (0x00047a52) cell_fast2_pane_g3

0x0002,

0xfbdf,	// (0x0004f479) cell_fast2_pane_g

0x3b6b,	// (0x00043405) grid_highlight_pane_cp9

0x3b80,	// (0x0004341a) main_eswt_pane_ParamLimits

0x3b80,	// (0x0004341a) main_eswt_pane

0x8131,	// (0x000479cb) list_single_text_info_pane

0x81c0,	// (0x00047a5a) eswt_ctrl_button_pane

0x81c0,	// (0x00047a5a) eswt_ctrl_canvas_pane

0x81c8,	// (0x00047a62) eswt_ctrl_combo_pane

0x81c0,	// (0x00047a5a) eswt_ctrl_default_pane

0x81c0,	// (0x00047a5a) eswt_ctrl_label_pane

0x81d0,	// (0x00047a6a) eswt_ctrl_wait_pane

0x81d8,	// (0x00047a72) eswt_shell_pane

0x34ac,	// (0x00042d46) listscroll_eswt_app_pane

0x81f8,	// (0x00047a92) popup_eswt_tasktip_window_ParamLimits

0x81f8,	// (0x00047a92) popup_eswt_tasktip_window

0x5361,	// (0x00044bfb) bg_popup_window_pane_cp18

0x8209,	// (0x00047aa3) eswt_control_pane_g1_ParamLimits

0x8209,	// (0x00047aa3) eswt_control_pane_g1

0x8216,	// (0x00047ab0) eswt_control_pane_g2_ParamLimits

0x8216,	// (0x00047ab0) eswt_control_pane_g2

0x8223,	// (0x00047abd) eswt_control_pane_g3_ParamLimits

0x8223,	// (0x00047abd) eswt_control_pane_g3

0x8230,	// (0x00047aca) eswt_control_pane_g4_ParamLimits

0x8230,	// (0x00047aca) eswt_control_pane_g4

0x0003,

0xfbe6,	// (0x0004f480) eswt_control_pane_g_ParamLimits

0xfbe6,	// (0x0004f480) eswt_control_pane_g

0x3e1b,	// (0x000436b5) bg_button_pane_ParamLimits

0x3e1b,	// (0x000436b5) bg_button_pane

0x3b80,	// (0x0004341a) common_borders_pane_copy2_ParamLimits

0x3b80,	// (0x0004341a) common_borders_pane_copy2

0x823d,	// (0x00047ad7) control_button_pane_g1_ParamLimits

0x823d,	// (0x00047ad7) control_button_pane_g1

0x8249,	// (0x00047ae3) control_button_pane_g2_ParamLimits

0x8249,	// (0x00047ae3) control_button_pane_g2

0x8255,	// (0x00047aef) control_button_pane_g3_ParamLimits

0x8255,	// (0x00047aef) control_button_pane_g3

0x0002,

0xfbef,	// (0x0004f489) control_button_pane_g_ParamLimits

0xfbef,	// (0x0004f489) control_button_pane_g

0x8269,	// (0x00047b03) control_button_pane_t1

0x8277,	// (0x00047b11) control_button_pane_t2

0x0001,

0xfbf6,	// (0x0004f490) control_button_pane_t

0x52ed,	// (0x00044b87) bg_button_pane_g1

0x52f5,	// (0x00044b8f) bg_button_pane_g2

0x52fd,	// (0x00044b97) bg_button_pane_g3

0x5305,	// (0x00044b9f) bg_button_pane_g4

0x530d,	// (0x00044ba7) bg_button_pane_g5

0x5315,	// (0x00044baf) bg_button_pane_g6

0x531d,	// (0x00044bb7) bg_button_pane_g7

0x5325,	// (0x00044bbf) bg_button_pane_g8

0x532d,	// (0x00044bc7) bg_button_pane_g9

0x0008,

0xf866,	// (0x0004f100) bg_button_pane_g

0x7877,	// (0x00047111) common_borders_pane_ParamLimits

0x7877,	// (0x00047111) common_borders_pane

0x8209,	// (0x00047aa3) eswt_control_pane_g1_copy1_ParamLimits

0x8209,	// (0x00047aa3) eswt_control_pane_g1_copy1

0x8216,	// (0x00047ab0) eswt_control_pane_g2_copy1_ParamLimits

0x8216,	// (0x00047ab0) eswt_control_pane_g2_copy1

0x8223,	// (0x00047abd) eswt_control_pane_g3_copy1_ParamLimits

0x8223,	// (0x00047abd) eswt_control_pane_g3_copy1

0x8230,	// (0x00047aca) eswt_control_pane_g4_copy1_ParamLimits

0x8230,	// (0x00047aca) eswt_control_pane_g4_copy1

0x78b2,	// (0x0004714c) bg_eswt_ctrl_canvas_pane_g1

0x7877,	// (0x00047111) common_borders_pane_cp2_ParamLimits

0x7877,	// (0x00047111) common_borders_pane_cp2

0x7877,	// (0x00047111) common_borders_pane_cp3_ParamLimits

0x7877,	// (0x00047111) common_borders_pane_cp3

0x8285,	// (0x00047b1f) separator_horizontal_pane

0x828d,	// (0x00047b27) separator_vertical_pane

0x8209,	// (0x00047aa3) eswt_control_pane_g1_copy2_ParamLimits

0x8209,	// (0x00047aa3) eswt_control_pane_g1_copy2

0x8216,	// (0x00047ab0) eswt_control_pane_g2_copy2_ParamLimits

0x8216,	// (0x00047ab0) eswt_control_pane_g2_copy2

0x8223,	// (0x00047abd) eswt_control_pane_g3_copy2_ParamLimits

0x8223,	// (0x00047abd) eswt_control_pane_g3_copy2

0x8230,	// (0x00047aca) eswt_control_pane_g4_copy2_ParamLimits

0x8230,	// (0x00047aca) eswt_control_pane_g4_copy2

0x34ac,	// (0x00042d46) common_borders_pane_cp4

0x8296,	// (0x00047b30) separator_horizontal_pane_g1

0x829f,	// (0x00047b39) separator_horizontal_pane_g2

0x82a8,	// (0x00047b42) separator_horizontal_pane_g3

0x0002,

0xfbfb,	// (0x0004f495) separator_horizontal_pane_g

0x8209,	// (0x00047aa3) eswt_control_pane_g1_copy3_ParamLimits

0x8209,	// (0x00047aa3) eswt_control_pane_g1_copy3

0x8216,	// (0x00047ab0) eswt_control_pane_g2_copy3_ParamLimits

0x8216,	// (0x00047ab0) eswt_control_pane_g2_copy3

0x8223,	// (0x00047abd) eswt_control_pane_g3_copy3_ParamLimits

0x8223,	// (0x00047abd) eswt_control_pane_g3_copy3

0x8230,	// (0x00047aca) eswt_control_pane_g4_copy3_ParamLimits

0x8230,	// (0x00047aca) eswt_control_pane_g4_copy3

0x34ac,	// (0x00042d46) common_borders_pane_cp5

0x82b1,	// (0x00047b4b) separator_vertical_pane_g1

0x82ba,	// (0x00047b54) separator_vertical_pane_g2

0x82c3,	// (0x00047b5d) separator_vertical_pane_g3

0x0002,

0xfc02,	// (0x0004f49c) separator_vertical_pane_g

0x8209,	// (0x00047aa3) eswt_control_pane_g1_copy4_ParamLimits

0x8209,	// (0x00047aa3) eswt_control_pane_g1_copy4

0x8216,	// (0x00047ab0) eswt_control_pane_g2_copy4_ParamLimits

0x8216,	// (0x00047ab0) eswt_control_pane_g2_copy4

0x8223,	// (0x00047abd) eswt_control_pane_g3_copy4_ParamLimits

0x8223,	// (0x00047abd) eswt_control_pane_g3_copy4

0x8230,	// (0x00047aca) eswt_control_pane_g4_copy4_ParamLimits

0x8230,	// (0x00047aca) eswt_control_pane_g4_copy4

0xe2ad,	// (0x0004db47) eswt_ctrl_combo_button_pane

0xe2b5,	// (0x0004db4f) eswt_ctrl_input_pane

0xe2bd,	// (0x0004db57) popup_choice_list_window_cp70

0xe2c5,	// (0x0004db5f) eswt_ctrl_input_pane_t1

0x34ac,	// (0x00042d46) input_focus_pane_cp70

0x7877,	// (0x00047111) bg_button_pane_cp70_ParamLimits

0x7877,	// (0x00047111) bg_button_pane_cp70

0xe2d3,	// (0x0004db6d) eswt_ctrl_combo_button_pane_g1

0x82fa,	// (0x00047b94) wait_bar_pane_cp70

0x5361,	// (0x00044bfb) bg_popup_window_pane_cp70_ParamLimits

0x5361,	// (0x00044bfb) bg_popup_window_pane_cp70

0x8302,	// (0x00047b9c) popup_eswt_tasktip_window_t1

0x8318,	// (0x00047bb2) wait_bar_pane_cp71_ParamLimits

0x8318,	// (0x00047bb2) wait_bar_pane_cp71

0x8324,	// (0x00047bbe) grid_eswt_app_pane

0x42a4,	// (0x00043b3e) scroll_pane_cp70

0xe2db,	// (0x0004db75) cell_eswt_app_pane_ParamLimits

0xe2db,	// (0x0004db75) cell_eswt_app_pane

0xe305,	// (0x0004db9f) cell_eswt_app_pane_g1_ParamLimits

0xe305,	// (0x0004db9f) cell_eswt_app_pane_g1

0xe334,	// (0x0004dbce) cell_eswt_app_pane_g2_ParamLimits

0xe334,	// (0x0004dbce) cell_eswt_app_pane_g2

0x0001,

0xfc09,	// (0x0004f4a3) cell_eswt_app_pane_g_ParamLimits

0xfc09,	// (0x0004f4a3) cell_eswt_app_pane_g

0xe35d,	// (0x0004dbf7) cell_eswt_app_pane_t1_ParamLimits

0xe35d,	// (0x0004dbf7) cell_eswt_app_pane_t1

0x83e7,	// (0x00047c81) grid_highlight_pane_cp70_ParamLimits

0x83e7,	// (0x00047c81) grid_highlight_pane_cp70

0x497a,	// (0x00044214) set_content_pane_g1

0xd5b0,	// (0x0004ce4a) status_small_volume_pane

0x2846,	// (0x000420e0) status_small_volume_pane_g1

0x284e,	// (0x000420e8) volume_small2_pane

0x2857,	// (0x000420f1) volume_small2_pane_g1

0x2860,	// (0x000420fa) volume_small2_pane_g2

0x2869,	// (0x00042103) volume_small2_pane_g3

0x2872,	// (0x0004210c) volume_small2_pane_g4

0x287b,	// (0x00042115) volume_small2_pane_g5

0x2884,	// (0x0004211e) volume_small2_pane_g6

0x288d,	// (0x00042127) volume_small2_pane_g7

0x2896,	// (0x00042130) volume_small2_pane_g8

0x289f,	// (0x00042139) volume_small2_pane_g9

0x28a8,	// (0x00042142) volume_small2_pane_g10

0x0009,

0xfc0e,	// (0x0004f4a8) volume_small2_pane_g

0x7c78,	// (0x00047512) fep_vkb_top_text_pane_g1_ParamLimits

0xe23a,	// (0x0004dad4) fep_vkb_top_text_pane_t1_ParamLimits

0x7f2f,	// (0x000477c9) popup_preview_fixed_window_g3_ParamLimits

0x7f2f,	// (0x000477c9) popup_preview_fixed_window_g3

0xc7b4,	// (0x0004c04e) popup_toolbar_trans_pane

0xdc3d,	// (0x0004d4d7) aid_height_set_list_ParamLimits

0x66cd,	// (0x00045f67) aid_size_parent_ParamLimits

0x4de3,	// (0x0004467d) list_highlight_pane_cp2_ParamLimits

0x497a,	// (0x00044214) set_content_pane_g1_ParamLimits

0xc8a4,	// (0x0004c13e) list_single_image_pane_ParamLimits

0xc8a4,	// (0x0004c13e) list_single_image_pane

0xe38f,	// (0x0004dc29) aid_size_cell_image_ParamLimits

0xe38f,	// (0x0004dc29) aid_size_cell_image

0xe39c,	// (0x0004dc36) grid_single_image_pane_ParamLimits

0xe39c,	// (0x0004dc36) grid_single_image_pane

0x5ac1,	// (0x0004535b) list_single_image_pane_g1_ParamLimits

0x5ac1,	// (0x0004535b) list_single_image_pane_g1

0x840c,	// (0x00047ca6) list_single_image_pane_g2_ParamLimits

0x840c,	// (0x00047ca6) list_single_image_pane_g2

0x0001,

0xfc23,	// (0x0004f4bd) list_single_image_pane_g_ParamLimits

0xfc23,	// (0x0004f4bd) list_single_image_pane_g

0x8420,	// (0x00047cba) list_single_image_pane_t1_ParamLimits

0x8420,	// (0x00047cba) list_single_image_pane_t1

0xe3aa,	// (0x0004dc44) cell_image_list_pane_ParamLimits

0xe3aa,	// (0x0004dc44) cell_image_list_pane

0xe3c0,	// (0x0004dc5a) cell_image_list_pane_g1

0xe3c9,	// (0x0004dc63) cell_image_list_pane_g2

0x0001,

0xfc28,	// (0x0004f4c2) cell_image_list_pane_g

0x845c,	// (0x00047cf6) aid_size_cell_tb_trans_pane

0x3e1b,	// (0x000436b5) bg_tb_trans_pane

0x846e,	// (0x00047d08) grid_tb_trans_pane

0x52ed,	// (0x00044b87) bg_tb_trans_pane_g1

0x52f5,	// (0x00044b8f) bg_tb_trans_pane_g2

0x52fd,	// (0x00044b97) bg_tb_trans_pane_g3

0x5305,	// (0x00044b9f) bg_tb_trans_pane_g4

0x530d,	// (0x00044ba7) bg_tb_trans_pane_g5

0x5325,	// (0x00044bbf) bg_tb_trans_pane_g6

0x532d,	// (0x00044bc7) bg_tb_trans_pane_g7

0x5315,	// (0x00044baf) bg_tb_trans_pane_g8

0x531d,	// (0x00044bb7) bg_tb_trans_pane_g9

0x0008,

0xfc2d,	// (0x0004f4c7) bg_tb_trans_pane_g

0x8482,	// (0x00047d1c) cell_toolbar_trans_pane_ParamLimits

0x8482,	// (0x00047d1c) cell_toolbar_trans_pane

0x78b2,	// (0x0004714c) cell_toolbar_trans_pane_g1

0xdffb,	// (0x0004d895) list_form2_midp_pane_t1

0xe009,	// (0x0004d8a3) list_form2_midp_pane_t2

0x0001,

0xfad6,	// (0x0004f370) list_form2_midp_pane_t

0x7498,	// (0x00046d32) scroll_pane_cp51_ParamLimits

0x7654,	// (0x00046eee) form2_midp_wait_pane_g1

0x765d,	// (0x00046ef7) form2_midp_wait_pane_g2

0x7666,	// (0x00046f00) form2_midp_wait_pane_g3

0x0002,

0xfaeb,	// (0x0004f385) form2_midp_wait_pane_g

0x35a0,	// (0x00042e3a) list_highlight_pane_cp21_ParamLimits

0x76bd,	// (0x00046f57) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x76cc,	// (0x00046f66) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6885,	// (0x0004611f) list_single_2graphic_im_pane_ParamLimits

0x6885,	// (0x0004611f) list_single_2graphic_im_pane

0xe3d2,	// (0x0004dc6c) list_single_2graphic_im_pane_g1_ParamLimits

0xe3d2,	// (0x0004dc6c) list_single_2graphic_im_pane_g1

0xe3e3,	// (0x0004dc7d) list_single_2graphic_im_pane_g2_ParamLimits

0xe3e3,	// (0x0004dc7d) list_single_2graphic_im_pane_g2

0xe3ef,	// (0x0004dc89) list_single_2graphic_im_pane_g3_ParamLimits

0xe3ef,	// (0x0004dc89) list_single_2graphic_im_pane_g3

0x0003,

0xfc40,	// (0x0004f4da) list_single_2graphic_im_pane_g_ParamLimits

0xfc40,	// (0x0004f4da) list_single_2graphic_im_pane_g

0xe403,	// (0x0004dc9d) list_single_2graphic_im_pane_t1_ParamLimits

0xe403,	// (0x0004dc9d) list_single_2graphic_im_pane_t1

0x7f3b,	// (0x000477d5) list_single_graphic_2heading_pane_fp_ParamLimits

0x7f3b,	// (0x000477d5) list_single_graphic_2heading_pane_fp

0x0c08,	// (0x000404a2) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x0c08,	// (0x000404a2) list_single_graphic_2heading_pane_fp_g1

0x7f50,	// (0x000477ea) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7f50,	// (0x000477ea) list_single_graphic_2heading_pane_fp_g2

0x3db6,	// (0x00043650) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x3db6,	// (0x00043650) list_single_graphic_2heading_pane_fp_g3

0x3e29,	// (0x000436c3) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x3e29,	// (0x000436c3) list_single_graphic_2heading_pane_fp_g4

0x7f5c,	// (0x000477f6) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7f5c,	// (0x000477f6) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb6e,	// (0x0004f408) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb6e,	// (0x0004f408) list_single_graphic_2heading_pane_fp_g

0x0d51,	// (0x000405eb) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x0d51,	// (0x000405eb) list_single_graphic_2heading_pane_fp_t1

0x0c40,	// (0x000404da) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x0c40,	// (0x000404da) list_single_graphic_2heading_pane_fp_t2

0x0d67,	// (0x00040601) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x0d67,	// (0x00040601) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc49,	// (0x0004f4e3) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc49,	// (0x0004f4e3) list_single_graphic_2heading_pane_fp_t

0x793e,	// (0x000471d8) fep_hwr_write_pane_g5_ParamLimits

0x793e,	// (0x000471d8) fep_hwr_write_pane_g5

0x794a,	// (0x000471e4) fep_hwr_write_pane_g6_ParamLimits

0x794a,	// (0x000471e4) fep_hwr_write_pane_g6

0x81d8,	// (0x00047a72) eswt_shell_pane_ParamLimits

0x5361,	// (0x00044bfb) bg_popup_window_pane_cp18_ParamLimits

0x6615,	// (0x00045eaf) heading_pane_cp70

0x8302,	// (0x00047b9c) popup_eswt_tasktip_window_t1_ParamLimits

0xd656,	// (0x0004cef0) aid_touch_tab_arrow_left

0xd66c,	// (0x0004cf06) aid_touch_tab_arrow_right

0xbf76,	// (0x0004b810) title_pane_g3_ParamLimits

0xbf76,	// (0x0004b810) title_pane_g3

0x3dda,	// (0x00043674) set_value_pane_g1

0xc7b4,	// (0x0004c04e) popup_toolbar_trans_pane_ParamLimits

0x845c,	// (0x00047cf6) aid_size_cell_tb_trans_pane_ParamLimits

0x3e1b,	// (0x000436b5) bg_tb_trans_pane_ParamLimits

0x846e,	// (0x00047d08) grid_tb_trans_pane_ParamLimits

0x3829,	// (0x000430c3) cont_note_pane_ParamLimits

0x3829,	// (0x000430c3) cont_note_pane

0x3b80,	// (0x0004341a) cont_snote2_single_text_pane_ParamLimits

0x3b80,	// (0x0004341a) cont_snote2_single_text_pane

0x3b80,	// (0x0004341a) cont_snote2_single_graphic_pane_ParamLimits

0x3b80,	// (0x0004341a) cont_snote2_single_graphic_pane

0x5966,	// (0x00045200) cont_note_wait_pane_ParamLimits

0x5966,	// (0x00045200) cont_note_wait_pane

0x5966,	// (0x00045200) cont_note_image_pane_ParamLimits

0x5966,	// (0x00045200) cont_note_image_pane

0x8516,	// (0x00047db0) popup_note2_window_g1_ParamLimits

0x8516,	// (0x00047db0) popup_note2_window_g1

0x8547,	// (0x00047de1) popup_note2_window_t1_ParamLimits

0x8547,	// (0x00047de1) popup_note2_window_t1

0x858c,	// (0x00047e26) popup_note2_window_t2_ParamLimits

0x858c,	// (0x00047e26) popup_note2_window_t2

0x85d1,	// (0x00047e6b) popup_note2_window_t3_ParamLimits

0x85d1,	// (0x00047e6b) popup_note2_window_t3

0x8616,	// (0x00047eb0) popup_note2_window_t4_ParamLimits

0x8616,	// (0x00047eb0) popup_note2_window_t4

0x38ad,	// (0x00043147) popup_note2_window_t5_ParamLimits

0x38ad,	// (0x00043147) popup_note2_window_t5

0x0004,

0xfc55,	// (0x0004f4ef) popup_note2_window_t_ParamLimits

0xfc55,	// (0x0004f4ef) popup_note2_window_t

0x8645,	// (0x00047edf) popup_note2_image_window_g1_ParamLimits

0x8645,	// (0x00047edf) popup_note2_image_window_g1

0x8651,	// (0x00047eeb) popup_note2_image_window_g2_ParamLimits

0x8651,	// (0x00047eeb) popup_note2_image_window_g2

0x0001,

0xfc60,	// (0x0004f4fa) popup_note2_image_window_g_ParamLimits

0xfc60,	// (0x0004f4fa) popup_note2_image_window_g

0x8663,	// (0x00047efd) popup_note2_image_window_t1_ParamLimits

0x8663,	// (0x00047efd) popup_note2_image_window_t1

0x867b,	// (0x00047f15) popup_note2_image_window_t2_ParamLimits

0x867b,	// (0x00047f15) popup_note2_image_window_t2

0x8693,	// (0x00047f2d) popup_note2_image_window_t3_ParamLimits

0x8693,	// (0x00047f2d) popup_note2_image_window_t3

0x0002,

0xfc65,	// (0x0004f4ff) popup_note2_image_window_t_ParamLimits

0xfc65,	// (0x0004f4ff) popup_note2_image_window_t

0x5974,	// (0x0004520e) popup_note2_wait_window_g1_ParamLimits

0x5974,	// (0x0004520e) popup_note2_wait_window_g1

0x86af,	// (0x00047f49) popup_note2_wait_window_g2_ParamLimits

0x86af,	// (0x00047f49) popup_note2_wait_window_g2

0x598c,	// (0x00045226) popup_note2_wait_window_g3_ParamLimits

0x598c,	// (0x00045226) popup_note2_wait_window_g3

0x0002,

0xfc6c,	// (0x0004f506) popup_note2_wait_window_g_ParamLimits

0xfc6c,	// (0x0004f506) popup_note2_wait_window_g

0x86bb,	// (0x00047f55) popup_note2_wait_window_t1_ParamLimits

0x86bb,	// (0x00047f55) popup_note2_wait_window_t1

0x86d9,	// (0x00047f73) popup_note2_wait_window_t2_ParamLimits

0x86d9,	// (0x00047f73) popup_note2_wait_window_t2

0x86f7,	// (0x00047f91) popup_note2_wait_window_t3_ParamLimits

0x86f7,	// (0x00047f91) popup_note2_wait_window_t3

0x8709,	// (0x00047fa3) popup_note2_wait_window_t4_ParamLimits

0x8709,	// (0x00047fa3) popup_note2_wait_window_t4

0x0003,

0xfc73,	// (0x0004f50d) popup_note2_wait_window_t_ParamLimits

0xfc73,	// (0x0004f50d) popup_note2_wait_window_t

0x871b,	// (0x00047fb5) wait_bar2_pane_ParamLimits

0x871b,	// (0x00047fb5) wait_bar2_pane

0x8733,	// (0x00047fcd) popup_snote2_single_text_window_g1_ParamLimits

0x8733,	// (0x00047fcd) popup_snote2_single_text_window_g1

0x875b,	// (0x00047ff5) popup_snote2_single_text_window_t1_ParamLimits

0x875b,	// (0x00047ff5) popup_snote2_single_text_window_t1

0x87a7,	// (0x00048041) popup_snote2_single_text_window_t2_ParamLimits

0x87a7,	// (0x00048041) popup_snote2_single_text_window_t2

0x87f3,	// (0x0004808d) popup_snote2_single_text_window_t3_ParamLimits

0x87f3,	// (0x0004808d) popup_snote2_single_text_window_t3

0x8834,	// (0x000480ce) popup_snote2_single_text_window_t4_ParamLimits

0x8834,	// (0x000480ce) popup_snote2_single_text_window_t4

0x886a,	// (0x00048104) popup_snote2_single_text_window_t5_ParamLimits

0x886a,	// (0x00048104) popup_snote2_single_text_window_t5

0x0004,

0xfc7c,	// (0x0004f516) popup_snote2_single_text_window_t_ParamLimits

0xfc7c,	// (0x0004f516) popup_snote2_single_text_window_t

0x8895,	// (0x0004812f) popup_snote2_single_graphic_window_g1_ParamLimits

0x8895,	// (0x0004812f) popup_snote2_single_graphic_window_g1

0x88bd,	// (0x00048157) popup_snote2_single_graphic_window_g2_ParamLimits

0x88bd,	// (0x00048157) popup_snote2_single_graphic_window_g2

0x0001,

0xfc87,	// (0x0004f521) popup_snote2_single_graphic_window_g_ParamLimits

0xfc87,	// (0x0004f521) popup_snote2_single_graphic_window_g

0x88e5,	// (0x0004817f) popup_snote2_single_graphic_window_t1_ParamLimits

0x88e5,	// (0x0004817f) popup_snote2_single_graphic_window_t1

0x8931,	// (0x000481cb) popup_snote2_single_graphic_window_t2_ParamLimits

0x8931,	// (0x000481cb) popup_snote2_single_graphic_window_t2

0x87f3,	// (0x0004808d) popup_snote2_single_graphic_window_t3_ParamLimits

0x87f3,	// (0x0004808d) popup_snote2_single_graphic_window_t3

0x8834,	// (0x000480ce) popup_snote2_single_graphic_window_t4_ParamLimits

0x8834,	// (0x000480ce) popup_snote2_single_graphic_window_t4

0x886a,	// (0x00048104) popup_snote2_single_graphic_window_t5_ParamLimits

0x886a,	// (0x00048104) popup_snote2_single_graphic_window_t5

0x0004,

0xfc8c,	// (0x0004f526) popup_snote2_single_graphic_window_t_ParamLimits

0xfc8c,	// (0x0004f526) popup_snote2_single_graphic_window_t

0x7359,	// (0x00046bf3) clock_nsta_pane_cp2_t1

0x7359,	// (0x00046bf3) clock_nsta_pane_cp2_t2

0x0001,

0xfaac,	// (0x0004f346) clock_nsta_pane_cp2_t

0x0467,	// (0x0003fd01) form_field_data_wide_pane_g1_ParamLimits

0x3db6,	// (0x00043650) form_field_data_wide_pane_g2_ParamLimits

0x3db6,	// (0x00043650) form_field_data_wide_pane_g2

0x3e29,	// (0x000436c3) form_field_data_wide_pane_g3_ParamLimits

0x3e29,	// (0x000436c3) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x0004ef1a) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x0004ef1a) form_field_data_wide_pane_g

0xdf3e,	// (0x0004d7d8) grid_touch_3_pane_ParamLimits

0xdf3e,	// (0x0004d7d8) grid_touch_3_pane

0xe434,	// (0x0004dcce) cell_touch_3_pane_ParamLimits

0xe434,	// (0x0004dcce) cell_touch_3_pane

0x78b2,	// (0x0004714c) cell_touch_3_pane_g1

0x78b2,	// (0x0004714c) cell_touch_3_pane_g2

0x0001,

0xfb31,	// (0x0004f3cb) cell_touch_3_pane_g

0x38df,	// (0x00043179) cont_query_data_pane

0x38e7,	// (0x00043181) cont_query_data_pane_cp1

0x89ab,	// (0x00048245) button_value_adjust_pane_cp7

0x89b3,	// (0x0004824d) query_popup_pane_cp3

0x4582,	// (0x00043e1c) bg_popup_sub_pane_cp22_ParamLimits

0x15db,	// (0x00040e75) navi_navi_volume_pane_cp2

0x15f6,	// (0x00040e90) popup_side_volume_key_window_g2

0x1605,	// (0x00040e9f) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x0004efb0) popup_side_volume_key_window_g

0x1622,	// (0x00040ebc) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x0004efb7) popup_side_volume_key_window_t

0x4839,	// (0x000440d3) popup_side_volume_key_window_ParamLimits

0xbfb1,	// (0x0004b84b) list_double_graphic_pane_g4_ParamLimits

0xbfb1,	// (0x0004b84b) list_double_graphic_pane_g4

0xddb6,	// (0x0004d650) list_single_2heading_msg_pane_ParamLimits

0xddb6,	// (0x0004d650) list_single_2heading_msg_pane

0xc902,	// (0x0004c19c) list_single_2heading_msg_pane_g1_ParamLimits

0xc902,	// (0x0004c19c) list_single_2heading_msg_pane_g1

0xc90e,	// (0x0004c1a8) list_single_2heading_msg_pane_g2_ParamLimits

0xc90e,	// (0x0004c1a8) list_single_2heading_msg_pane_g2

0xc921,	// (0x0004c1bb) list_single_2heading_msg_pane_g3_ParamLimits

0xc921,	// (0x0004c1bb) list_single_2heading_msg_pane_g3

0xc92d,	// (0x0004c1c7) list_single_2heading_msg_pane_g4_ParamLimits

0xc92d,	// (0x0004c1c7) list_single_2heading_msg_pane_g4

0x0003,

0xfc97,	// (0x0004f531) list_single_2heading_msg_pane_g_ParamLimits

0xfc97,	// (0x0004f531) list_single_2heading_msg_pane_g

0xbc0e,	// (0x0004b4a8) list_single_2heading_msg_pane_t1_ParamLimits

0xbc0e,	// (0x0004b4a8) list_single_2heading_msg_pane_t1

0xbc36,	// (0x0004b4d0) list_single_2heading_msg_pane_t2_ParamLimits

0xbc36,	// (0x0004b4d0) list_single_2heading_msg_pane_t2

0xbca1,	// (0x0004b53b) list_single_2heading_msg_pane_t3_ParamLimits

0xbca1,	// (0x0004b53b) list_single_2heading_msg_pane_t3

0x0e1c,	// (0x000406b6) list_single_2heading_msg_pane_t4_ParamLimits

0x0e1c,	// (0x000406b6) list_single_2heading_msg_pane_t4

0x0003,

0xfca0,	// (0x0004f53a) list_single_2heading_msg_pane_t_ParamLimits

0xfca0,	// (0x0004f53a) list_single_2heading_msg_pane_t

0x34f4,	// (0x00042d8e) title_pane_g4_ParamLimits

0x34f4,	// (0x00042d8e) title_pane_g4

0x13ea,	// (0x00040c84) title_pane_stacon_g3_ParamLimits

0x13ea,	// (0x00040c84) title_pane_stacon_g3

0x84d9,	// (0x00047d73) list_single_2graphic_im_pane_g4_ParamLimits

0x84d9,	// (0x00047d73) list_single_2graphic_im_pane_g4

0x63d1,	// (0x00045c6b) popup_side_volume_key_window_cp

0x6b98,	// (0x00046432) main_idle_act2_pane_t1

0x1f9f,	// (0x00041839) toolbar_button_pane_g10

0xd266,	// (0x0004cb00) popup_toolbar_window_cp1

0x734a,	// (0x00046be4) clock_nsta_pane_cp_t1

0x734a,	// (0x00046be4) clock_nsta_pane_cp_t2

0x0001,

0xfaa7,	// (0x0004f341) clock_nsta_pane_cp_t

0x15db,	// (0x00040e75) navi_navi_volume_pane_cp2_ParamLimits

0x15ea,	// (0x00040e84) popup_side_volume_key_window_g1_ParamLimits

0x15f6,	// (0x00040e90) popup_side_volume_key_window_g2_ParamLimits

0x1605,	// (0x00040e9f) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x0004efb0) popup_side_volume_key_window_g_ParamLimits

0x24d2,	// (0x00041d6c) fep_hwr_aid_pane

0xe0e0,	// (0x0004d97a) bg_fep_hwr_top_pane_g4_ParamLimits

0x790e,	// (0x000471a8) fep_hwr_top_pane_g1_ParamLimits

0x7920,	// (0x000471ba) fep_hwr_top_pane_g2_ParamLimits

0x258b,	// (0x00041e25) fep_hwr_top_pane_g3_ParamLimits

0xfafc,	// (0x0004f396) fep_hwr_top_pane_g_ParamLimits

0x25a0,	// (0x00041e3a) fep_hwr_top_text_pane_ParamLimits

0x6194,	// (0x00045a2e) aid_touch_tab_arrow_arrow_2

0x619d,	// (0x00045a37) aid_touch_tab_arrow_left_2

0x24e6,	// (0x00041d80) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x251d,	// (0x00041db7) fep_hwr_prediction_pane

0x7a80,	// (0x0004731a) fep_vkb_prediction_pane

0xe21a,	// (0x0004dab4) fep_vkb_side_pane_g3_ParamLimits

0xe21a,	// (0x0004dab4) fep_vkb_side_pane_g3

0x7b30,	// (0x000473ca) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7fb0,	// (0x0004784a) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7fbd,	// (0x00047857) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfba6,	// (0x0004f440) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x89d8,	// (0x00048272) fep_hwr_prediction_pane_g1

0x28d5,	// (0x0004216f) fep_hwr_prediction_pane_g2

0x28dd,	// (0x00042177) fep_hwr_prediction_pane_g3

0x28e5,	// (0x0004217f) fep_hwr_prediction_pane_g4

0x0003,

0xfca9,	// (0x0004f543) fep_hwr_prediction_pane_g

0x89d8,	// (0x00048272) fep_vkb_prediction_pane_g1

0x89e2,	// (0x0004827c) fep_vkb_prediction_pane_g2

0x89ea,	// (0x00048284) fep_vkb_prediction_pane_g3

0x89f2,	// (0x0004828c) fep_vkb_prediction_pane_g4

0x0003,

0xfcb2,	// (0x0004f54c) fep_vkb_prediction_pane_g

0x2287,	// (0x00041b21) slider_set_pane_g3

0x229b,	// (0x00041b35) slider_set_pane_g4

0x22b3,	// (0x00041b4d) slider_set_pane_g5

0x2287,	// (0x00041b21) slider_set_pane_g6

0x22c9,	// (0x00041b63) slider_set_pane_g7

0x6832,	// (0x000460cc) slider_form_pane_g3

0x683b,	// (0x000460d5) slider_form_pane_g4

0x6843,	// (0x000460dd) slider_form_pane_g5

0x6832,	// (0x000460cc) slider_form_pane_g6

0xdd88,	// (0x0004d622) slider_form_pane_g7

0x6e43,	// (0x000466dd) slider_set_pane_vc_g3

0x6e4c,	// (0x000466e6) slider_set_pane_vc_g4

0x6e55,	// (0x000466ef) slider_set_pane_vc_g5

0x6e43,	// (0x000466dd) slider_set_pane_vc_g6

0x6e5e,	// (0x000466f8) slider_set_pane_vc_g7

0x701e,	// (0x000468b8) slider_form_pane_vc_g1

0x7027,	// (0x000468c1) slider_form_pane_vc_g2

0x7030,	// (0x000468ca) slider_form_pane_vc_g3

0x701e,	// (0x000468b8) slider_form_pane_vc_g4

0x7039,	// (0x000468d3) slider_form_pane_vc_g5

0x0004,

0xfa79,	// (0x0004f313) slider_form_pane_vc_g

0x34ac,	// (0x00042d46) main_idle_act3_pane

0x89fa,	// (0x00048294) ai3_links_pane

0xe47c,	// (0x0004dd16) popup_ai3_data_window_ParamLimits

0xe47c,	// (0x0004dd16) popup_ai3_data_window

0x34ac,	// (0x00042d46) grid_ai3_links_pane

0xe496,	// (0x0004dd30) cell_ai3_links_pane_ParamLimits

0xe496,	// (0x0004dd30) cell_ai3_links_pane

0x8a35,	// (0x000482cf) bg_popup_sub_pane_cp11

0x8a42,	// (0x000482dc) cell_ai3_links_pane_g1

0x34ac,	// (0x00042d46) bg_popup_sub_pane_cp12

0x8a67,	// (0x00048301) heading_ai3_data_pane

0x8a6f,	// (0x00048309) list_ai3_gene_pane

0x8a7b,	// (0x00048315) popup_ai3_data_window_g1

0x8a83,	// (0x0004831d) heading_ai3_data_pane_g1

0x8a8b,	// (0x00048325) heading_ai3_data_pane_t1

0x8a99,	// (0x00048333) list_double_ai3_gene_pane_ParamLimits

0x8a99,	// (0x00048333) list_double_ai3_gene_pane

0x8aa6,	// (0x00048340) list_single_ai3_gene_pane_ParamLimits

0x8aa6,	// (0x00048340) list_single_ai3_gene_pane

0x7877,	// (0x00047111) list_highlight_pane_cp7_ParamLimits

0x7877,	// (0x00047111) list_highlight_pane_cp7

0x8ab3,	// (0x0004834d) list_single_a13_gene_pane_t1_ParamLimits

0x8ab3,	// (0x0004834d) list_single_a13_gene_pane_t1

0x8aca,	// (0x00048364) list_single_ai3_gene_pane_g1

0x8ad3,	// (0x0004836d) list_single_ai3_gene_pane_g2

0x0001,

0xfcbb,	// (0x0004f555) list_single_ai3_gene_pane_g

0x8adb,	// (0x00048375) list_double_ai3_gene_pane_g1_ParamLimits

0x8adb,	// (0x00048375) list_double_ai3_gene_pane_g1

0x8ae7,	// (0x00048381) list_double_ai3_gene_pane_t1_ParamLimits

0x8ae7,	// (0x00048381) list_double_ai3_gene_pane_t1

0x8b03,	// (0x0004839d) list_double_ai3_gene_pane_t2_ParamLimits

0x8b03,	// (0x0004839d) list_double_ai3_gene_pane_t2

0x8b19,	// (0x000483b3) list_double_ai3_gene_pane_t3_ParamLimits

0x8b19,	// (0x000483b3) list_double_ai3_gene_pane_t3

0x0002,

0xfcc0,	// (0x0004f55a) list_double_ai3_gene_pane_t_ParamLimits

0xfcc0,	// (0x0004f55a) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0d7d,	// (0x00040617) aid_size_min_col_2

0xe466,	// (0x0004dd00) aid_size_min_msg_ParamLimits

0xe466,	// (0x0004dd00) aid_size_min_msg

0xe22e,	// (0x0004dac8) fep_vkb_top_text_pane_g2_ParamLimits

0xe22e,	// (0x0004dac8) fep_vkb_top_text_pane_g2

0x0001,

0xfb2c,	// (0x0004f3c6) fep_vkb_top_text_pane_g_ParamLimits

0xfb2c,	// (0x0004f3c6) fep_vkb_top_text_pane_g

0x34ac,	// (0x00042d46) main_hc_apps_shell_pane

0x8b36,	// (0x000483d0) grid_hc_apps_pane_ParamLimits

0x8b36,	// (0x000483d0) grid_hc_apps_pane

0x8b45,	// (0x000483df) list_hc_apps_pane

0x8b4d,	// (0x000483e7) scroll_pane_cp37_ParamLimits

0x8b4d,	// (0x000483e7) scroll_pane_cp37

0xe4b0,	// (0x0004dd4a) cell_hc_apps_pane_ParamLimits

0xe4b0,	// (0x0004dd4a) cell_hc_apps_pane

0xe56e,	// (0x0004de08) cell_hc_apps_pane_g1_ParamLimits

0xe56e,	// (0x0004de08) cell_hc_apps_pane_g1

0x8c38,	// (0x000484d2) cell_hc_apps_pane_g2_ParamLimits

0x8c38,	// (0x000484d2) cell_hc_apps_pane_g2

0x8c54,	// (0x000484ee) cell_hc_apps_pane_g3_ParamLimits

0x8c54,	// (0x000484ee) cell_hc_apps_pane_g3

0x0002,

0xfcc7,	// (0x0004f561) cell_hc_apps_pane_g_ParamLimits

0xfcc7,	// (0x0004f561) cell_hc_apps_pane_g

0xe59b,	// (0x0004de35) cell_hc_apps_pane_t1_ParamLimits

0xe59b,	// (0x0004de35) cell_hc_apps_pane_t1

0x3829,	// (0x000430c3) grid_highlight_pane_cp10_ParamLimits

0x3829,	// (0x000430c3) grid_highlight_pane_cp10

0xe5d9,	// (0x0004de73) list_single_hc_apps_pane_ParamLimits

0xe5d9,	// (0x0004de73) list_single_hc_apps_pane

0xe606,	// (0x0004dea0) list_single_hc_apps_pane_g1

0xc945,	// (0x0004c1df) list_single_hc_apps_pane_g2

0x0001,

0xfcce,	// (0x0004f568) list_single_hc_apps_pane_g

0xc95e,	// (0x0004c1f8) list_single_hc_apps_pane_g2_copy1

0x0e41,	// (0x000406db) list_single_hc_apps_pane_t1

0x35a0,	// (0x00042e3a) bg_set_opt_pane_cp_ParamLimits

0x1266,	// (0x00040b00) setting_slider_pane_t1_ParamLimits

0x127f,	// (0x00040b19) setting_slider_pane_t2_ParamLimits

0x1299,	// (0x00040b33) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0004edf8) setting_slider_pane_t_ParamLimits

0x12b1,	// (0x00040b4b) slider_set_pane_ParamLimits

0x18a0,	// (0x0004113a) control_pane_g5_ParamLimits

0x18a0,	// (0x0004113a) control_pane_g5

0x6681,	// (0x00045f1b) slider_set_pane_g1_ParamLimits

0x227b,	// (0x00041b15) slider_set_pane_g2_ParamLimits

0x2287,	// (0x00041b21) slider_set_pane_g3_ParamLimits

0x229b,	// (0x00041b35) slider_set_pane_g4_ParamLimits

0x22b3,	// (0x00041b4d) slider_set_pane_g5_ParamLimits

0x2287,	// (0x00041b21) slider_set_pane_g6_ParamLimits

0x22c9,	// (0x00041b63) slider_set_pane_g7_ParamLimits

0xf964,	// (0x0004f1fe) slider_set_pane_g_ParamLimits

0x4925,	// (0x000441bf) navi_icon_text_pane_ParamLimits

0xd61f,	// (0x0004ceb9) aid_fill_nsta_2_ParamLimits

0xd656,	// (0x0004cef0) aid_touch_tab_arrow_left_ParamLimits

0xd66c,	// (0x0004cf06) aid_touch_tab_arrow_right_ParamLimits

0xd707,	// (0x0004cfa1) clock_nsta_pane_ParamLimits

0x6176,	// (0x00045a10) navi_icon_pane_g1_ParamLimits

0x6182,	// (0x00045a1c) navi_text_pane_t1_ParamLimits

0x7456,	// (0x00046cf0) navi_icon_text_pane_g1_ParamLimits

0x7462,	// (0x00046cfc) navi_icon_text_pane_t1_ParamLimits

0xe606,	// (0x0004dea0) list_single_hc_apps_pane_g1_ParamLimits

0xc945,	// (0x0004c1df) list_single_hc_apps_pane_g2_ParamLimits

0xfcce,	// (0x0004f568) list_single_hc_apps_pane_g_ParamLimits

0xc95e,	// (0x0004c1f8) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x0e41,	// (0x000406db) list_single_hc_apps_pane_t1_ParamLimits

0xbe7b,	// (0x0004b715) popup_toolbar2_fixed_window_ParamLimits

0xbe7b,	// (0x0004b715) popup_toolbar2_fixed_window

0xc7aa,	// (0x0004c044) popup_toolbar2_float_window

0x34ac,	// (0x00042d46) bg_popup_sub_pane_cp27

0x8d2b,	// (0x000485c5) grid_toolbar2_float_pane

0x34ac,	// (0x00042d46) bg_popup_sub_pane_cp26

0x8d2b,	// (0x000485c5) grid_toolbar2_fixed_pane

0xe61f,	// (0x0004deb9) cell_toolbar2_fixed_pane_ParamLimits

0xe61f,	// (0x0004deb9) cell_toolbar2_fixed_pane

0xe639,	// (0x0004ded3) cell_toolbar2_fixed_pane_g1

0x8d4c,	// (0x000485e6) toolbar2_fixed_button_pane

0x52ed,	// (0x00044b87) toolbar2_fixed_button_pane_g1

0x52f5,	// (0x00044b8f) toolbar2_fixed_button_pane_g2

0x52fd,	// (0x00044b97) toolbar2_fixed_button_pane_g3

0x5305,	// (0x00044b9f) toolbar2_fixed_button_pane_g4

0x530d,	// (0x00044ba7) toolbar2_fixed_button_pane_g5

0x5315,	// (0x00044baf) toolbar2_fixed_button_pane_g6

0x531d,	// (0x00044bb7) toolbar2_fixed_button_pane_g7

0x5325,	// (0x00044bbf) toolbar2_fixed_button_pane_g8

0x532d,	// (0x00044bc7) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x0004f100) toolbar2_fixed_button_pane_g

0x8d54,	// (0x000485ee) cell_toolbar2_float_pane_ParamLimits

0x8d54,	// (0x000485ee) cell_toolbar2_float_pane

0x8d65,	// (0x000485ff) cell_toolbar2_float_pane_g1

0x8d4c,	// (0x000485e6) toolbar2_fixed_button_pane_cp

0xe108,	// (0x0004d9a2) fep_vkb_accented_list_pane_ParamLimits

0xe108,	// (0x0004d9a2) fep_vkb_accented_list_pane

0x26ee,	// (0x00041f88) bg_popup_fep_shadow_pane_g9

0x4aa5,	// (0x0004433f) bg_popup_fep_shadow_pane_cp3

0x3f66,	// (0x00043800) list_accented_list_pane

0x8d6e,	// (0x00048608) list_single_accented_list_pane_ParamLimits

0x8d6e,	// (0x00048608) list_single_accented_list_pane

0x4aa5,	// (0x0004433f) list_highlight_pane_cp10

0x8d7f,	// (0x00048619) list_single_accented_list_pane_t1

0xc6d4,	// (0x0004bf6e) popup_slider_window_ParamLimits

0xc6d4,	// (0x0004bf6e) popup_slider_window

0x89bb,	// (0x00048255) aid_indentation_list_msg

0xe732,	// (0x0004dfcc) bg_popup_window_pane_cp19

0x8ea3,	// (0x0004873d) popup_slider_window_g1

0x8ebf,	// (0x00048759) popup_slider_window_g2

0x8edb,	// (0x00048775) popup_slider_window_g3

0x0005,

0xfcd3,	// (0x0004f56d) popup_slider_window_g

0x8f37,	// (0x000487d1) popup_slider_window_t1

0x8fab,	// (0x00048845) small_volume_slider_vertical_pane

0x78b2,	// (0x0004714c) small_volume_slider_vertical_pane_g1

0x78b2,	// (0x0004714c) small_volume_slider_vertical_pane_g2

0x8fc7,	// (0x00048861) small_volume_slider_vertical_pane_g3

0x0002,

0xfce5,	// (0x0004f57f) small_volume_slider_vertical_pane_g

0xbde9,	// (0x0004b683) area_side_right_pane_ParamLimits

0xbde9,	// (0x0004b683) area_side_right_pane

0xc97a,	// (0x0004c214) aid_size_side_button_ParamLimits

0xc97a,	// (0x0004c214) aid_size_side_button

0xc993,	// (0x0004c22d) grid_sctrl_middle_pane_ParamLimits

0xc993,	// (0x0004c22d) grid_sctrl_middle_pane

0x2955,	// (0x000421ef) sctrl_sk_bottom_pane

0x2966,	// (0x00042200) sctrl_sk_top_pane

0x2978,	// (0x00042212) aid_touch_sctrl_top

0x3829,	// (0x000430c3) bg_sctrl_sk_pane_ParamLimits

0x3829,	// (0x000430c3) bg_sctrl_sk_pane

0x2985,	// (0x0004221f) sctrl_sk_top_pane_g1

0x2992,	// (0x0004222c) sctrl_sk_top_pane_t1

0x2978,	// (0x00042212) aid_touch_sctrl_bottom

0x3829,	// (0x000430c3) bg_sctrl_sk_pane_cp_ParamLimits

0x3829,	// (0x000430c3) bg_sctrl_sk_pane_cp

0x29ad,	// (0x00042247) sctrl_sk_bottom_pane_g1

0x2992,	// (0x0004222c) sctrl_sk_bottom_pane_t1

0xc9ad,	// (0x0004c247) cell_sctrl_middle_pane_ParamLimits

0xc9ad,	// (0x0004c247) cell_sctrl_middle_pane

0xc9be,	// (0x0004c258) aid_touch_sctrl_middle_ParamLimits

0xc9be,	// (0x0004c258) aid_touch_sctrl_middle

0xc9cb,	// (0x0004c265) bg_sctrl_middle_pane_ParamLimits

0xc9cb,	// (0x0004c265) bg_sctrl_middle_pane

0x904f,	// (0x000488e9) cell_sctrl_middle_pane_g1_ParamLimits

0x904f,	// (0x000488e9) cell_sctrl_middle_pane_g1

0xc9d9,	// (0x0004c273) cell_sctrl_middle_pane_g2_ParamLimits

0xc9d9,	// (0x0004c273) cell_sctrl_middle_pane_g2

0x0001,

0xfcf1,	// (0x0004f58b) cell_sctrl_middle_pane_g_ParamLimits

0xfcf1,	// (0x0004f58b) cell_sctrl_middle_pane_g

0x52ed,	// (0x00044b87) bg_sctrl_middle_pane_g1

0x52f5,	// (0x00044b8f) bg_sctrl_middle_pane_g2

0x52fd,	// (0x00044b97) bg_sctrl_middle_pane_g3

0x5305,	// (0x00044b9f) bg_sctrl_middle_pane_g4

0x530d,	// (0x00044ba7) bg_sctrl_middle_pane_g5

0x5315,	// (0x00044baf) bg_sctrl_middle_pane_g6

0x531d,	// (0x00044bb7) bg_sctrl_middle_pane_g7

0x5325,	// (0x00044bbf) bg_sctrl_middle_pane_g8

0x0007,

0xfcf6,	// (0x0004f590) bg_sctrl_middle_pane_g

0x532d,	// (0x00044bc7) bg_sctrl_middle_pane_g8_copy1

0x52ed,	// (0x00044b87) bg_sctrl_sk_pane_g1

0x52f5,	// (0x00044b8f) bg_sctrl_sk_pane_g2

0x52fd,	// (0x00044b97) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x0004f100) bg_sctrl_sk_pane_g

0x3d3e,	// (0x000435d8) aid_size_touch_scroll_bar

0x5305,	// (0x00044b9f) bg_sctrl_sk_pane_g4

0x530d,	// (0x00044ba7) bg_sctrl_sk_pane_g5

0x5315,	// (0x00044baf) bg_sctrl_sk_pane_g6

0x531d,	// (0x00044bb7) bg_sctrl_sk_pane_g7

0x5325,	// (0x00044bbf) bg_sctrl_sk_pane_g8

0x532d,	// (0x00044bc7) bg_sctrl_sk_pane_g9

0x1a50,	// (0x000412ea) popup_fep_china_hwr2_fs_candidate_window

0xc1ee,	// (0x0004ba88) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc1ee,	// (0x0004ba88) popup_fep_china_hwr2_fs_control_window

0x7b30,	// (0x000473ca) sctrl_sk_top_pane_g2

0x0001,

0xfcec,	// (0x0004f586) sctrl_sk_top_pane_g

0xe7ea,	// (0x0004e084) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe7ea,	// (0x0004e084) aid_fep_china_hwr2_fs_cell

0xe7fe,	// (0x0004e098) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe7fe,	// (0x0004e098) bg_popup_fep_shadow_pane_cp4

0xe815,	// (0x0004e0af) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe815,	// (0x0004e0af) bg_popup_fep_shadow_pane_cp5

0xe827,	// (0x0004e0c1) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe827,	// (0x0004e0c1) popup_fep_china_hwr2_fs_control_bar_grid

0xe83b,	// (0x0004e0d5) popup_fep_china_hwr2_fs_control_funtion_grid

0x9023,	// (0x000488bd) aid_fep_china_hwr2_fs_candi_cell

0x34ac,	// (0x00042d46) bg_popup_fep_shadow_pane_cp6

0x902d,	// (0x000488c7) popup_fep_china_hwr2_fs_candidate_grid

0xe843,	// (0x0004e0dd) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe843,	// (0x0004e0dd) cell_fep_china_hwr2_fs_funtion_grid

0x78b2,	// (0x0004714c) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x904f,	// (0x000488e9) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x904f,	// (0x000488e9) cell_fep_china_hwr2_fs_funtion_grid_g1

0x905d,	// (0x000488f7) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x905d,	// (0x000488f7) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd07,	// (0x0004f5a1) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd07,	// (0x0004f5a1) cell_fep_china_hwr2_fs_funtion_grid_g

0xe85b,	// (0x0004e0f5) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe85b,	// (0x0004e0f5) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe870,	// (0x0004e10a) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe870,	// (0x0004e10a) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd0c,	// (0x0004f5a6) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd0c,	// (0x0004f5a6) cell_fep_china_hwr2_fs_funtion_grid_t

0x90a4,	// (0x0004893e) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x90ac,	// (0x00048946) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x90b4,	// (0x0004894e) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd11,	// (0x0004f5ab) popup_fep_china_hwr2_fs_control_bar_grid_g

0x90bc,	// (0x00048956) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x90bc,	// (0x00048956) cell_fep_china_hwr2_fs_candidate_grid

0x90d5,	// (0x0004896f) popup_fep_china_hwr2_fs_candidate_grid_g20

0x90dd,	// (0x00048977) popup_fep_china_hwr2_fs_candidate_grid_g21

0x78b2,	// (0x0004714c) cell_fep_china_hwr2_fs_candidate_grid_g1

0x78b2,	// (0x0004714c) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb31,	// (0x0004f3cb) cell_fep_china_hwr2_fs_candidate_grid_g

0x90e5,	// (0x0004897f) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4ee3,	// (0x0004477d) clock_nsta_pane_cp_24_ParamLimits

0x4ee3,	// (0x0004477d) clock_nsta_pane_cp_24

0x4f61,	// (0x000447fb) indicator_nsta_pane_cp_24_ParamLimits

0x4f61,	// (0x000447fb) indicator_nsta_pane_cp_24

0x5ff2,	// (0x0004588c) heading_pane_g1

0x0001,

0xf8cb,	// (0x0004f165) heading_pane_g

0x69e1,	// (0x0004627b) grid_sct_catagory_button_pane

0x6a11,	// (0x000462ab) scroll_pane_cp5_ParamLimits

0x74a4,	// (0x00046d3e) button_value_adjust_pane_cp5_ParamLimits

0x74a4,	// (0x00046d3e) button_value_adjust_pane_cp5

0x7583,	// (0x00046e1d) form2_midp_time_pane_ParamLimits

0x90f3,	// (0x0004898d) cell_sct_catagory_button_pane_ParamLimits

0x90f3,	// (0x0004898d) cell_sct_catagory_button_pane

0x7877,	// (0x00047111) bg_button_pane_cp01_ParamLimits

0x7877,	// (0x00047111) bg_button_pane_cp01

0x78b2,	// (0x0004714c) cell_sct_catagory_button_pane_g1

0xc74d,	// (0x0004bfe7) popup_tb_extension_window

0xe88c,	// (0x0004e126) aid_size_cell_ext_ParamLimits

0xe88c,	// (0x0004e126) aid_size_cell_ext

0x3b80,	// (0x0004341a) bg_tb_trans_pane_cp1_ParamLimits

0x3b80,	// (0x0004341a) bg_tb_trans_pane_cp1

0xe8b2,	// (0x0004e14c) grid_tb_ext_pane_ParamLimits

0xe8b2,	// (0x0004e14c) grid_tb_ext_pane

0xe8ed,	// (0x0004e187) cell_tb_ext_pane_ParamLimits

0xe8ed,	// (0x0004e187) cell_tb_ext_pane

0xe922,	// (0x0004e1bc) cell_tb_ext_pane_g1_ParamLimits

0xe922,	// (0x0004e1bc) cell_tb_ext_pane_g1

0x9187,	// (0x00048a21) cell_tb_ext_pane_t1

0x3829,	// (0x000430c3) list_highlight_pane_cp11_ParamLimits

0x3829,	// (0x000430c3) list_highlight_pane_cp11

0xbe90,	// (0x0004b72a) popup_uni_indicator_window_ParamLimits

0xbe90,	// (0x0004b72a) popup_uni_indicator_window

0x3e1b,	// (0x000436b5) bg_popup_sub_pane_cp14

0x91a2,	// (0x00048a3c) list_uniindi_pane

0x91ae,	// (0x00048a48) uniindi_top_pane

0x3829,	// (0x000430c3) bg_uniindi_top_pane

0x91cd,	// (0x00048a67) uniindi_top_pane_g1

0x91e3,	// (0x00048a7d) uniindi_top_pane_g2

0x0003,

0xfd18,	// (0x0004f5b2) uniindi_top_pane_g

0x920d,	// (0x00048aa7) uniindi_top_pane_t1

0x9237,	// (0x00048ad1) list_single_uniindi_pane_ParamLimits

0x9237,	// (0x00048ad1) list_single_uniindi_pane

0x78b2,	// (0x0004714c) bg_uniindi_top_pane_g1

0x924a,	// (0x00048ae4) list_single_uniindi_pane_g1

0x925d,	// (0x00048af7) list_single_uniindi_pane_t1

0x34ac,	// (0x00042d46) control_bg_pane

0x9282,	// (0x00048b1c) bg_sctrl_sk_pane_cp1

0x928b,	// (0x00048b25) bg_sctrl_sk_pane_cp2

0x9294,	// (0x00048b2e) control_bg_pane_g1

0x929d,	// (0x00048b37) control_bg_pane_g2

0x0001,

0xfd21,	// (0x0004f5bb) control_bg_pane_g

0x72ee,	// (0x00046b88) cell_indicator_nsta_pane_g1_ParamLimits

0xdf6b,	// (0x0004d805) cell_indicator_nsta_pane_g2_ParamLimits

0xfa95,	// (0x0004f32f) cell_indicator_nsta_pane_g_ParamLimits

0x0bde,	// (0x00040478) form2_midp_time_pane_t1_ParamLimits

0x24c4,	// (0x00041d5e) main_idle_act4_pane_ParamLimits

0x24c4,	// (0x00041d5e) main_idle_act4_pane

0xc74d,	// (0x0004bfe7) popup_tb_extension_window_ParamLimits

0xe8d4,	// (0x0004e16e) tb_ext_find_pane_ParamLimits

0xe8d4,	// (0x0004e16e) tb_ext_find_pane

0x92a6,	// (0x00048b40) ai_gene_pane_1_cp1

0x4be0,	// (0x0004447a) ai_gene_pane_2_cp1

0x92ae,	// (0x00048b48) list_single_idle_plugin_calendar_pane

0x92b7,	// (0x00048b51) list_single_idle_plugin_notification_pane

0x92c0,	// (0x00048b5a) list_single_idle_plugin_player_pane

0xe93f,	// (0x0004e1d9) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe93f,	// (0x0004e1d9) list_single_idle_plugin_shortcut_pane

0xe967,	// (0x0004e201) main_idle_act4_pane_t1

0xe97d,	// (0x0004e217) main_idle_act4_pane_t2

0x0001,

0xfd26,	// (0x0004f5c0) main_idle_act4_pane_t

0xe993,	// (0x0004e22d) middle_sk_idle_act4_pane_ParamLimits

0xe993,	// (0x0004e22d) middle_sk_idle_act4_pane

0xe9af,	// (0x0004e249) popup_clock_digital_analogue_window_cp2

0xe9d7,	// (0x0004e271) shortcut_wheel_idle_act4_pane_ParamLimits

0xe9d7,	// (0x0004e271) shortcut_wheel_idle_act4_pane

0x78b2,	// (0x0004714c) shortcut_wheel_idle_act4_pane_g1

0x78b2,	// (0x0004714c) shortcut_wheel_idle_act4_pane_g2

0x78b2,	// (0x0004714c) shortcut_wheel_idle_act4_pane_g3

0x78b2,	// (0x0004714c) shortcut_wheel_idle_act4_pane_g4

0x78b2,	// (0x0004714c) shortcut_wheel_idle_act4_pane_g5

0x9353,	// (0x00048bed) shortcut_wheel_idle_act4_pane_g6

0x935b,	// (0x00048bf5) shortcut_wheel_idle_act4_pane_g7

0x9363,	// (0x00048bfd) shortcut_wheel_idle_act4_pane_g8

0x936b,	// (0x00048c05) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd2b,	// (0x0004f5c5) shortcut_wheel_idle_act4_pane_g

0xe0e0,	// (0x0004d97a) middle_sk_idle_act4_pane_g1_ParamLimits

0xe0e0,	// (0x0004d97a) middle_sk_idle_act4_pane_g1

0xea54,	// (0x0004e2ee) middle_sk_idle_act4_pane_g2_ParamLimits

0xea54,	// (0x0004e2ee) middle_sk_idle_act4_pane_g2

0x0001,

0xfd4e,	// (0x0004f5e8) middle_sk_idle_act4_pane_g_ParamLimits

0xfd4e,	// (0x0004f5e8) middle_sk_idle_act4_pane_g

0xea6c,	// (0x0004e306) middle_sk_idle_act4_pane_t1_ParamLimits

0xea6c,	// (0x0004e306) middle_sk_idle_act4_pane_t1

0xea9b,	// (0x0004e335) grid_ai_shortcut_pane_ParamLimits

0xea9b,	// (0x0004e335) grid_ai_shortcut_pane

0xeab8,	// (0x0004e352) list_highlight_pane_cp16_ParamLimits

0xeab8,	// (0x0004e352) list_highlight_pane_cp16

0xeac5,	// (0x0004e35f) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xeac5,	// (0x0004e35f) list_single_idle_plugin_shortcut_pane_g1

0xead1,	// (0x0004e36b) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xead1,	// (0x0004e36b) list_single_idle_plugin_shortcut_pane_g2

0xeaed,	// (0x0004e387) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xeaed,	// (0x0004e387) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd53,	// (0x0004f5ed) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd53,	// (0x0004f5ed) list_single_idle_plugin_shortcut_pane_g

0xeb02,	// (0x0004e39c) cell_ai_shortcut_pane_ParamLimits

0xeb02,	// (0x0004e39c) cell_ai_shortcut_pane

0xeb18,	// (0x0004e3b2) cell_ai_shortcut_pane_g1_ParamLimits

0xeb18,	// (0x0004e3b2) cell_ai_shortcut_pane_g1

0x92a6,	// (0x00048b40) ai_gene_pane_1_cp2

0x949b,	// (0x00048d35) ai_gene_pane_2_cp2

0x94a3,	// (0x00048d3d) list_highlight_pane_cp15

0x94ac,	// (0x00048d46) list_single_idle_plugin_calendar_pane_g1

0x94a3,	// (0x00048d3d) list_highlight_pane_cp17

0x94b4,	// (0x00048d4e) list_single_idle_plugin_calendar_pane_g1_copy1

0x94bc,	// (0x00048d56) list_single_idle_plugin_player_pane_g1

0x6c3a,	// (0x000464d4) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd5a,	// (0x0004f5f4) list_single_idle_plugin_player_pane_g

0x94c4,	// (0x00048d5e) list_single_idle_plugin_player_pane_t1

0x94d2,	// (0x00048d6c) list_single_idle_plugin_player_pane_t2

0x94e0,	// (0x00048d7a) list_single_idle_plugin_player_pane_t3

0x94ee,	// (0x00048d88) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd5f,	// (0x0004f5f9) list_single_idle_plugin_player_pane_t

0x94fc,	// (0x00048d96) wait_bar_pane_cp15

0x9504,	// (0x00048d9e) grid_ai_notification_pane

0x6c3a,	// (0x000464d4) list_single_idle_plugin_notification_pane_g1

0xeb3a,	// (0x0004e3d4) cell_ai_notification_pane_ParamLimits

0xeb3a,	// (0x0004e3d4) cell_ai_notification_pane

0x951a,	// (0x00048db4) cell_ai_notification_pane_g1

0x9522,	// (0x00048dbc) cell_ai_notification_pane_t1

0xeb47,	// (0x0004e3e1) tb_ext_find_button_pane

0xeb4f,	// (0x0004e3e9) tb_ext_find_pane_g1

0xeb57,	// (0x0004e3f1) tb_ext_find_pane_t1

0x4492,	// (0x00043d2c) tb_ext_find_button_pane_g1

0x954e,	// (0x00048de8) tb_ext_find_button_pane_g2

0x0001,

0xfd68,	// (0x0004f602) tb_ext_find_button_pane_g

0xe967,	// (0x0004e201) main_idle_act4_pane_t1_ParamLimits

0xe97d,	// (0x0004e217) main_idle_act4_pane_t2_ParamLimits

0xfd26,	// (0x0004f5c0) main_idle_act4_pane_t_ParamLimits

0xe9af,	// (0x0004e249) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe9c7,	// (0x0004e261) sat_plugin_idle_act4_pane_ParamLimits

0xe9c7,	// (0x0004e261) sat_plugin_idle_act4_pane

0xeb65,	// (0x0004e3ff) sat_plugin_idle_act4_pane_t1_ParamLimits

0xeb65,	// (0x0004e3ff) sat_plugin_idle_act4_pane_t1

0xeb7d,	// (0x0004e417) sat_plugin_idle_act4_pane_t2_ParamLimits

0xeb7d,	// (0x0004e417) sat_plugin_idle_act4_pane_t2

0xeb95,	// (0x0004e42f) sat_plugin_idle_act4_pane_t3_ParamLimits

0xeb95,	// (0x0004e42f) sat_plugin_idle_act4_pane_t3

0xebad,	// (0x0004e447) sat_plugin_idle_act4_pane_t4_ParamLimits

0xebad,	// (0x0004e447) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd6d,	// (0x0004f607) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd6d,	// (0x0004f607) sat_plugin_idle_act4_pane_t

0x10ca,	// (0x00040964) popup_battery_window_ParamLimits

0x10ca,	// (0x00040964) popup_battery_window

0x3829,	// (0x000430c3) bg_popup_sub_pane_cp25_ParamLimits

0x3829,	// (0x000430c3) bg_popup_sub_pane_cp25

0x95a3,	// (0x00048e3d) popup_battery_window_g1_ParamLimits

0x95a3,	// (0x00048e3d) popup_battery_window_g1

0x95af,	// (0x00048e49) popup_battery_window_t1_ParamLimits

0x95af,	// (0x00048e49) popup_battery_window_t1

0x95c1,	// (0x00048e5b) popup_battery_window_t2_ParamLimits

0x95c1,	// (0x00048e5b) popup_battery_window_t2

0x0001,

0xfd76,	// (0x0004f610) popup_battery_window_t_ParamLimits

0xfd76,	// (0x0004f610) popup_battery_window_t

0xd482,	// (0x0004cd1c) midp_canvas_pane_ParamLimits

0xd4df,	// (0x0004cd79) midp_keypad_pane_ParamLimits

0xd4df,	// (0x0004cd79) midp_keypad_pane

0x4de3,	// (0x0004467d) main_midp_pane_ParamLimits

0x7368,	// (0x00046c02) signal_pane_g2_cp_ParamLimits

0xebc5,	// (0x0004e45f) aid_size_cell_midp_keypad_ParamLimits

0xebc5,	// (0x0004e45f) aid_size_cell_midp_keypad

0xebe3,	// (0x0004e47d) midp_keyp_game_grid_pane_ParamLimits

0xebe3,	// (0x0004e47d) midp_keyp_game_grid_pane

0xec0a,	// (0x0004e4a4) midp_keyp_rocker_pane_ParamLimits

0xec0a,	// (0x0004e4a4) midp_keyp_rocker_pane

0xec5b,	// (0x0004e4f5) midp_keyp_sk_left_pane_ParamLimits

0xec5b,	// (0x0004e4f5) midp_keyp_sk_left_pane

0xecaf,	// (0x0004e549) midp_keyp_sk_right_pane_ParamLimits

0xecaf,	// (0x0004e549) midp_keyp_sk_right_pane

0x34ac,	// (0x00042d46) bg_button_pane_cp03

0xed03,	// (0x0004e59d) midp_keyp_sk_left_pane_g1

0x34ac,	// (0x00042d46) bg_button_pane_cp04

0xed03,	// (0x0004e59d) midp_keyp_sk_right_pane_g1

0x78b2,	// (0x0004714c) midp_keyp_rocker_pane_g1

0xed0c,	// (0x0004e5a6) keyp_game_cell_pane_ParamLimits

0xed0c,	// (0x0004e5a6) keyp_game_cell_pane

0x34ac,	// (0x00042d46) bg_button_pane_cp02

0xed30,	// (0x0004e5ca) keyp_game_cell_pane_g1

0xbe2b,	// (0x0004b6c5) popup_fep_vkb2_window_ParamLimits

0xbe2b,	// (0x0004b6c5) popup_fep_vkb2_window

0xc9e5,	// (0x0004c27f) aid_size_cell_vkb2_ParamLimits

0xc9e5,	// (0x0004c27f) aid_size_cell_vkb2

0xca1b,	// (0x0004c2b5) popup_fep_vkb2_window_g1_ParamLimits

0xca1b,	// (0x0004c2b5) popup_fep_vkb2_window_g1

0xca6b,	// (0x0004c305) vkb2_area_bottom_pane_ParamLimits

0xca6b,	// (0x0004c305) vkb2_area_bottom_pane

0xcabf,	// (0x0004c359) vkb2_area_keypad_pane_ParamLimits

0xcabf,	// (0x0004c359) vkb2_area_keypad_pane

0xcb07,	// (0x0004c3a1) vkb2_area_top_pane_ParamLimits

0xcb07,	// (0x0004c3a1) vkb2_area_top_pane

0xcb8d,	// (0x0004c427) vkb2_top_entry_pane_ParamLimits

0xcb8d,	// (0x0004c427) vkb2_top_entry_pane

0xcbba,	// (0x0004c454) vkb2_top_grid_left_pane_ParamLimits

0xcbba,	// (0x0004c454) vkb2_top_grid_left_pane

0xcbda,	// (0x0004c474) vkb2_top_grid_right_pane_ParamLimits

0xcbda,	// (0x0004c474) vkb2_top_grid_right_pane

0x2c0b,	// (0x000424a5) vkb2_cell_keypad_pane_ParamLimits

0x2c0b,	// (0x000424a5) vkb2_cell_keypad_pane

0xcc20,	// (0x0004c4ba) vkb2_area_bottom_grid_pane_ParamLimits

0xcc20,	// (0x0004c4ba) vkb2_area_bottom_grid_pane

0xcc4a,	// (0x0004c4e4) vkb2_area_bottom_pane_g1_ParamLimits

0xcc4a,	// (0x0004c4e4) vkb2_area_bottom_pane_g1

0xcc70,	// (0x0004c50a) vkb2_area_bottom_pane_g2_ParamLimits

0xcc70,	// (0x0004c50a) vkb2_area_bottom_pane_g2

0xcca1,	// (0x0004c53b) vkb2_area_bottom_pane_g3_ParamLimits

0xcca1,	// (0x0004c53b) vkb2_area_bottom_pane_g3

0x0002,

0xfd7b,	// (0x0004f615) vkb2_area_bottom_pane_g_ParamLimits

0xfd7b,	// (0x0004f615) vkb2_area_bottom_pane_g

0x2db5,	// (0x0004264f) vkb2_top_cell_left_pane_ParamLimits

0x2db5,	// (0x0004264f) vkb2_top_cell_left_pane

0xed39,	// (0x0004e5d3) vkb2_top_entry_pane_g1_ParamLimits

0xed39,	// (0x0004e5d3) vkb2_top_entry_pane_g1

0xed47,	// (0x0004e5e1) vkb2_top_entry_pane_t1_ParamLimits

0xed47,	// (0x0004e5e1) vkb2_top_entry_pane_t1

0x9772,	// (0x0004900c) vkb2_top_entry_pane_t2_ParamLimits

0x9772,	// (0x0004900c) vkb2_top_entry_pane_t2

0x97a4,	// (0x0004903e) vkb2_top_entry_pane_t3_ParamLimits

0x97a4,	// (0x0004903e) vkb2_top_entry_pane_t3

0x0002,

0xfd82,	// (0x0004f61c) vkb2_top_entry_pane_t_ParamLimits

0xfd82,	// (0x0004f61c) vkb2_top_entry_pane_t

0xcd0b,	// (0x0004c5a5) vkb2_top_grid_right_pane_g1_ParamLimits

0xcd0b,	// (0x0004c5a5) vkb2_top_grid_right_pane_g1

0x2e18,	// (0x000426b2) vkb2_top_grid_right_pane_g2_ParamLimits

0x2e18,	// (0x000426b2) vkb2_top_grid_right_pane_g2

0x2e30,	// (0x000426ca) vkb2_top_grid_right_pane_g3_ParamLimits

0x2e30,	// (0x000426ca) vkb2_top_grid_right_pane_g3

0xcd21,	// (0x0004c5bb) vkb2_top_grid_right_pane_g4_ParamLimits

0xcd21,	// (0x0004c5bb) vkb2_top_grid_right_pane_g4

0x0003,

0xfd89,	// (0x0004f623) vkb2_top_grid_right_pane_g_ParamLimits

0xfd89,	// (0x0004f623) vkb2_top_grid_right_pane_g

0x2e5e,	// (0x000426f8) vkb2_top_cell_left_pane_g1

0x2e75,	// (0x0004270f) vkb2_cell_keypad_pane_g1_ParamLimits

0x2e75,	// (0x0004270f) vkb2_cell_keypad_pane_g1

0x97c8,	// (0x00049062) vkb2_cell_keypad_pane_t1_ParamLimits

0x97c8,	// (0x00049062) vkb2_cell_keypad_pane_t1

0x2e83,	// (0x0004271d) vkb2_cell_bottom_grid_pane_ParamLimits

0x2e83,	// (0x0004271d) vkb2_cell_bottom_grid_pane

0x2ebc,	// (0x00042756) vkb2_cell_bottom_grid_pane_g1

0xe9f8,	// (0x0004e292) aid_call2_pane_cp02

0xea00,	// (0x0004e29a) aid_call_pane_cp02

0xea08,	// (0x0004e2a2) clock_digital_number_pane_cp10

0xea10,	// (0x0004e2aa) clock_digital_number_pane_cp11

0xea18,	// (0x0004e2b2) clock_digital_number_pane_cp12

0xea20,	// (0x0004e2ba) clock_digital_number_pane_cp13

0xea28,	// (0x0004e2c2) clock_digital_separator_pane_cp10

0x4492,	// (0x00043d2c) popup_clock_digital_analogue_window_cp2_g1

0x4492,	// (0x00043d2c) popup_clock_digital_analogue_window_cp2_g2

0xea30,	// (0x0004e2ca) popup_clock_digital_analogue_window_cp2_g3

0x4492,	// (0x00043d2c) popup_clock_digital_analogue_window_cp2_g4

0xea30,	// (0x0004e2ca) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd3e,	// (0x0004f5d8) popup_clock_digital_analogue_window_cp2_g

0xea38,	// (0x0004e2d2) popup_clock_digital_analogue_window_cp2_t1

0xea46,	// (0x0004e2e0) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd49,	// (0x0004f5e3) popup_clock_digital_analogue_window_cp2_t

0x78b2,	// (0x0004714c) clock_digital_number_pane_cp10_g1

0x78b2,	// (0x0004714c) clock_digital_number_pane_cp10_g2

0x0001,

0xfb31,	// (0x0004f3cb) clock_digital_number_pane_cp10_g

0x78b2,	// (0x0004714c) clock_digital_separator_pane_cp10_g1

0x78b2,	// (0x0004714c) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb31,	// (0x0004f3cb) clock_digital_separator_pane_cp10_g

0x91ef,	// (0x00048a89) uniindi_top_pane_g3

0x9200,	// (0x00048a9a) uniindi_top_pane_g4

0x2c96,	// (0x00042530) vkb2_row_keypad_pane_ParamLimits

0x2c96,	// (0x00042530) vkb2_row_keypad_pane

0x2ed8,	// (0x00042772) vkb2_cell_t_keypad_pane_ParamLimits

0x2ed8,	// (0x00042772) vkb2_cell_t_keypad_pane

0x2ee8,	// (0x00042782) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2ee8,	// (0x00042782) vkb2_cell_t_keypad_pane_cp08

0x2efb,	// (0x00042795) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2efb,	// (0x00042795) vkb2_cell_t_keypad_pane_cp09

0x2f0f,	// (0x000427a9) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x2f0f,	// (0x000427a9) vkb2_cell_t_keypad_pane_cp01

0x2f20,	// (0x000427ba) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2f20,	// (0x000427ba) vkb2_cell_t_keypad_pane_cp02

0x2f31,	// (0x000427cb) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2f31,	// (0x000427cb) vkb2_cell_t_keypad_pane_cp03

0x2f42,	// (0x000427dc) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2f42,	// (0x000427dc) vkb2_cell_t_keypad_pane_cp04

0x2f53,	// (0x000427ed) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2f53,	// (0x000427ed) vkb2_cell_t_keypad_pane_cp05

0x2f64,	// (0x000427fe) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2f64,	// (0x000427fe) vkb2_cell_t_keypad_pane_cp06

0x2f75,	// (0x0004280f) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2f75,	// (0x0004280f) vkb2_cell_t_keypad_pane_cp07

0x2f86,	// (0x00042820) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x2f86,	// (0x00042820) vkb2_cell_t_keypad_pane_cp10

0x7b30,	// (0x000473ca) vkb2_cell_t_keypad_pane_g1

0x97df,	// (0x00049079) vkb2_cell_t_keypad_pane_t1

0x34ac,	// (0x00042d46) popup_grid_graphic2_window

0xed80,	// (0x0004e61a) aid_size_cell_graphic2_ParamLimits

0xed80,	// (0x0004e61a) aid_size_cell_graphic2

0xedbe,	// (0x0004e658) bg_popup_window_pane_cp21_ParamLimits

0xedbe,	// (0x0004e658) bg_popup_window_pane_cp21

0xedcc,	// (0x0004e666) graphic2_pages_pane_ParamLimits

0xedcc,	// (0x0004e666) graphic2_pages_pane

0xee22,	// (0x0004e6bc) grid_graphic2_control_pane_ParamLimits

0xee22,	// (0x0004e6bc) grid_graphic2_control_pane

0xee6a,	// (0x0004e704) grid_graphic2_pane_ParamLimits

0xee6a,	// (0x0004e704) grid_graphic2_pane

0xeef1,	// (0x0004e78b) cell_graphic2_pane

0x34ac,	// (0x00042d46) main_comp_mode_pane

0x8a6f,	// (0x00048309) list_ai3_gene_pane_ParamLimits

0xe732,	// (0x0004dfcc) bg_popup_window_pane_cp19_ParamLimits

0x8e45,	// (0x000486df) bg_touch_area_indi_pane_ParamLimits

0x8e45,	// (0x000486df) bg_touch_area_indi_pane

0x8e5b,	// (0x000486f5) bg_touch_area_indi_pane_cp01_ParamLimits

0x8e5b,	// (0x000486f5) bg_touch_area_indi_pane_cp01

0x8e71,	// (0x0004870b) bg_touch_area_indi_pane_cp02_ParamLimits

0x8e71,	// (0x0004870b) bg_touch_area_indi_pane_cp02

0x8e89,	// (0x00048723) bg_touch_area_indi_pane_cp03_ParamLimits

0x8e89,	// (0x00048723) bg_touch_area_indi_pane_cp03

0x8ea3,	// (0x0004873d) popup_slider_window_g1_ParamLimits

0x8ebf,	// (0x00048759) popup_slider_window_g2_ParamLimits

0x8edb,	// (0x00048775) popup_slider_window_g3_ParamLimits

0xfcd3,	// (0x0004f56d) popup_slider_window_g_ParamLimits

0x8f37,	// (0x000487d1) popup_slider_window_t1_ParamLimits

0x8fab,	// (0x00048845) small_volume_slider_vertical_pane_ParamLimits

0xeef1,	// (0x0004e78b) cell_graphic2_pane_ParamLimits

0xef4e,	// (0x0004e7e8) bg_button_pane_cp10_ParamLimits

0xef4e,	// (0x0004e7e8) bg_button_pane_cp10

0xef61,	// (0x0004e7fb) bg_button_pane_cp11_ParamLimits

0xef61,	// (0x0004e7fb) bg_button_pane_cp11

0xef74,	// (0x0004e80e) graphic2_pages_pane_g1_ParamLimits

0xef74,	// (0x0004e80e) graphic2_pages_pane_g1

0xef8f,	// (0x0004e829) graphic2_pages_pane_g2_ParamLimits

0xef8f,	// (0x0004e829) graphic2_pages_pane_g2

0x0001,

0xfd97,	// (0x0004f631) graphic2_pages_pane_g_ParamLimits

0xfd97,	// (0x0004f631) graphic2_pages_pane_g

0xefa7,	// (0x0004e841) graphic2_pages_pane_t1_ParamLimits

0xefa7,	// (0x0004e841) graphic2_pages_pane_t1

0xefbf,	// (0x0004e859) cell_graphic2_control_pane_ParamLimits

0xefbf,	// (0x0004e859) cell_graphic2_control_pane

0xeff1,	// (0x0004e88b) cell_graphic2_pane_g1_ParamLimits

0xeff1,	// (0x0004e88b) cell_graphic2_pane_g1

0xe0ee,	// (0x0004d988) cell_graphic2_pane_g2_ParamLimits

0xe0ee,	// (0x0004d988) cell_graphic2_pane_g2

0xe915,	// (0x0004e1af) cell_graphic2_pane_g3_ParamLimits

0xe915,	// (0x0004e1af) cell_graphic2_pane_g3

0xe0fb,	// (0x0004d995) cell_graphic2_pane_g4_ParamLimits

0xe0fb,	// (0x0004d995) cell_graphic2_pane_g4

0xeffe,	// (0x0004e898) cell_graphic2_pane_g5_ParamLimits

0xeffe,	// (0x0004e898) cell_graphic2_pane_g5

0x0004,

0xfd9c,	// (0x0004f636) cell_graphic2_pane_g_ParamLimits

0xfd9c,	// (0x0004f636) cell_graphic2_pane_g

0xf01e,	// (0x0004e8b8) cell_graphic2_pane_t1_ParamLimits

0xf01e,	// (0x0004e8b8) cell_graphic2_pane_t1

0x5fe6,	// (0x00045880) grid_highlight_pane_cp11_ParamLimits

0x5fe6,	// (0x00045880) grid_highlight_pane_cp11

0x3829,	// (0x000430c3) bg_button_pane_cp05

0xf053,	// (0x0004e8ed) cell_graphic2_control_pane_g1

0x78b2,	// (0x0004714c) bg_touch_area_indi_pane_g1

0x9ad0,	// (0x0004936a) aid_cmod_rocker_key_size

0x9ada,	// (0x00049374) aid_cmode_itu_key_size

0x9ae4,	// (0x0004937e) main_cmode_video_pane

0x9aee,	// (0x00049388) main_comp_mode_itu_pane

0x9afa,	// (0x00049394) main_comp_mode_rocker_pane

0x9b06,	// (0x000493a0) cell_cmode_rocker_pane_ParamLimits

0x9b06,	// (0x000493a0) cell_cmode_rocker_pane

0x9b18,	// (0x000493b2) cell_cmode_itu_pane_ParamLimits

0x9b18,	// (0x000493b2) cell_cmode_itu_pane

0x3e1b,	// (0x000436b5) bg_button_pane_cp06_ParamLimits

0x3e1b,	// (0x000436b5) bg_button_pane_cp06

0x7b30,	// (0x000473ca) cell_cmode_rocker_pane_g1_ParamLimits

0x7b30,	// (0x000473ca) cell_cmode_rocker_pane_g1

0x904f,	// (0x000488e9) cell_cmode_rocker_pane_g2_ParamLimits

0x904f,	// (0x000488e9) cell_cmode_rocker_pane_g2

0x0001,

0xfdac,	// (0x0004f646) cell_cmode_rocker_pane_g_ParamLimits

0xfdac,	// (0x0004f646) cell_cmode_rocker_pane_g

0x34ac,	// (0x00042d46) bg_button_pane_cp07

0x9b2d,	// (0x000493c7) cell_cmode_itu_pane_g1

0x9b36,	// (0x000493d0) cell_cmode_itu_pane_t1

0x9b44,	// (0x000493de) cell_cmode_itu_pane_t2

0x0001,

0xfdb1,	// (0x0004f64b) cell_cmode_itu_pane_t

0x9272,	// (0x00048b0c) aid_touch_ctrl_left

0x927a,	// (0x00048b14) aid_touch_ctrl_right

0x34ac,	// (0x00042d46) compa_mode_pane

0xf079,	// (0x0004e913) aid_cmod_rocker_key_size_cp

0xf083,	// (0x0004e91d) aid_cmode_itu_key_size_cp

0x9b66,	// (0x00049400) compa_mode_pane_g1

0x9b6e,	// (0x00049408) compa_mode_pane_g2

0x9b76,	// (0x00049410) compa_mode_pane_g3

0x0002,

0xfdb6,	// (0x0004f650) compa_mode_pane_g

0xf08d,	// (0x0004e927) main_comp_mode_itu_pane_cp

0xf095,	// (0x0004e92f) main_comp_mode_rocker_pane_cp

0xf09d,	// (0x0004e937) cell_cmode_itu_pane_cp_ParamLimits

0xf09d,	// (0x0004e937) cell_cmode_itu_pane_cp

0xf0b2,	// (0x0004e94c) cell_cmode_rocker_pane_cp_ParamLimits

0xf0b2,	// (0x0004e94c) cell_cmode_rocker_pane_cp

0x3e1b,	// (0x000436b5) bg_button_pane_cp06_cp_ParamLimits

0x3e1b,	// (0x000436b5) bg_button_pane_cp06_cp

0x7b30,	// (0x000473ca) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7b30,	// (0x000473ca) cell_cmode_rocker_pane_g1_cp

0x78b2,	// (0x0004714c) cell_cmode_rocker_pane_g2_cp

0x34ac,	// (0x00042d46) bg_button_pane_cp07_cp

0xf0c4,	// (0x0004e95e) cell_cmode_itu_pane_g1_cp

0xf0cd,	// (0x0004e967) cell_cmode_itu_pane_t1_cp

0xf0cd,	// (0x0004e967) cell_cmode_itu_pane_t2_cp

0xdd7e,	// (0x0004d618) settings_code_pane_cp2

0x35a0,	// (0x00042e3a) bg_popup_window_pane_cp3_ParamLimits

0x3a03,	// (0x0004329d) heading_pane_cp3_ParamLimits

0x3a0f,	// (0x000432a9) listscroll_popup_graphic_pane_ParamLimits

0x24d2,	// (0x00041d6c) fep_hwr_aid_pane_ParamLimits

0x2978,	// (0x00042212) aid_touch_sctrl_top_ParamLimits

0x2985,	// (0x0004221f) sctrl_sk_top_pane_g1_ParamLimits

0x7b30,	// (0x000473ca) sctrl_sk_top_pane_g2_ParamLimits

0xfcec,	// (0x0004f586) sctrl_sk_top_pane_g_ParamLimits

0x2992,	// (0x0004222c) sctrl_sk_top_pane_t1_ParamLimits

0x2978,	// (0x00042212) aid_touch_sctrl_bottom_ParamLimits

0x2992,	// (0x0004222c) sctrl_sk_bottom_pane_t1_ParamLimits

0x91bb,	// (0x00048a55) aid_area_touch_clock

0xcb4f,	// (0x0004c3e9) aid_vkb2_area_top_pane_cell_ParamLimits

0xcb4f,	// (0x0004c3e9) aid_vkb2_area_top_pane_cell

0xcbfa,	// (0x0004c494) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcbfa,	// (0x0004c494) aid_vkb2_area_bottom_pane_cell

0x972a,	// (0x00048fc4) popup_char_count_window

0x9bc3,	// (0x0004945d) popup_char_count_window_g1

0x9bcc,	// (0x00049466) popup_char_count_window_g2

0x9bd5,	// (0x0004946f) popup_char_count_window_g3

0x0002,

0xfdbd,	// (0x0004f657) popup_char_count_window_g

0x9bde,	// (0x00049478) popup_char_count_window_t1

0x2a33,	// (0x000422cd) popup_fep_char_preview_window_ParamLimits

0x2a33,	// (0x000422cd) popup_fep_char_preview_window

0xcb6f,	// (0x0004c409) vkb2_top_candi_pane_ParamLimits

0xcb6f,	// (0x0004c409) vkb2_top_candi_pane

0xf0db,	// (0x0004e975) cell_vkb2_top_candi_pane_ParamLimits

0xf0db,	// (0x0004e975) cell_vkb2_top_candi_pane

0x5966,	// (0x00045200) bg_popup_fep_char_preview_window_ParamLimits

0x5966,	// (0x00045200) bg_popup_fep_char_preview_window

0x2f9b,	// (0x00042835) popup_fep_char_preview_window_t1_ParamLimits

0x2f9b,	// (0x00042835) popup_fep_char_preview_window_t1

0x9c39,	// (0x000494d3) bg_popup_fep_char_preview_window_g1

0x9c41,	// (0x000494db) bg_popup_fep_char_preview_window_g2

0x9c49,	// (0x000494e3) bg_popup_fep_char_preview_window_g3

0x9c51,	// (0x000494eb) bg_popup_fep_char_preview_window_g4

0x9c59,	// (0x000494f3) bg_popup_fep_char_preview_window_g5

0x2fd5,	// (0x0004286f) bg_popup_fep_char_preview_window_g6

0x9c61,	// (0x000494fb) bg_popup_fep_char_preview_window_g7

0x9c69,	// (0x00049503) bg_popup_fep_char_preview_window_g8

0x9c71,	// (0x0004950b) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdc4,	// (0x0004f65e) bg_popup_fep_char_preview_window_g

0x7b30,	// (0x000473ca) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7b30,	// (0x000473ca) cell_vkb2_top_candi_pane_g1

0x7e47,	// (0x000476e1) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7e47,	// (0x000476e1) cell_vkb2_top_candi_pane_g2

0x7e68,	// (0x00047702) cell_vkb2_top_candi_pane_g3_ParamLimits

0x7e68,	// (0x00047702) cell_vkb2_top_candi_pane_g3

0x2fdd,	// (0x00042877) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2fdd,	// (0x00042877) cell_vkb2_top_candi_pane_g4

0x997d,	// (0x00049217) cell_vkb2_top_candi_pane_g5_ParamLimits

0x997d,	// (0x00049217) cell_vkb2_top_candi_pane_g5

0x904f,	// (0x000488e9) cell_vkb2_top_candi_pane_g6_ParamLimits

0x904f,	// (0x000488e9) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd7,	// (0x0004f671) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd7,	// (0x0004f671) cell_vkb2_top_candi_pane_g

0x2ffe,	// (0x00042898) cell_vkb2_top_candi_pane_t1

0x2267,	// (0x00041b01) aid_size_touch_slider_mark_ParamLimits

0x2267,	// (0x00041b01) aid_size_touch_slider_mark

0xee08,	// (0x0004e6a2) grid_graphic2_catg_pane_ParamLimits

0xee08,	// (0x0004e6a2) grid_graphic2_catg_pane

0xeec4,	// (0x0004e75e) popup_grid_graphic2_window_t1_ParamLimits

0xeec4,	// (0x0004e75e) popup_grid_graphic2_window_t1

0xeeda,	// (0x0004e774) popup_grid_graphic2_window_t2_ParamLimits

0xeeda,	// (0x0004e774) popup_grid_graphic2_window_t2

0x0001,

0xfd92,	// (0x0004f62c) popup_grid_graphic2_window_t_ParamLimits

0xfd92,	// (0x0004f62c) popup_grid_graphic2_window_t

0x3829,	// (0x000430c3) bg_button_pane_cp05_ParamLimits

0xf053,	// (0x0004e8ed) cell_graphic2_control_pane_g1_ParamLimits

0xf141,	// (0x0004e9db) cell_graphic2_catg_pane_ParamLimits

0xf141,	// (0x0004e9db) cell_graphic2_catg_pane

0x34ac,	// (0x00042d46) bg_button_pane_cp12

0xf153,	// (0x0004e9ed) cell_graphic2_catg_pane_g1

0x9187,	// (0x00048a21) cell_tb_ext_pane_t1_ParamLimits

0x2dd5,	// (0x0004266f) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2dd5,	// (0x0004266f) vkb2_top_cell_right_narrow_pane

0x2ded,	// (0x00042687) vkb2_top_cell_right_wide_pane_ParamLimits

0x2ded,	// (0x00042687) vkb2_top_cell_right_wide_pane

0x24c4,	// (0x00041d5e) bg_vkb2_func_pane_ParamLimits

0x24c4,	// (0x00041d5e) bg_vkb2_func_pane

0x2e5e,	// (0x000426f8) vkb2_top_cell_left_pane_g1_ParamLimits

0x24c4,	// (0x00041d5e) bg_vkb2_fuc_pane_cp03_ParamLimits

0x24c4,	// (0x00041d5e) bg_vkb2_fuc_pane_cp03

0x2ebc,	// (0x00042756) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x52f5,	// (0x00044b8f) bg_vkb2_func_pane_g1

0x52fd,	// (0x00044b97) bg_vkb2_func_pane_g2

0x530d,	// (0x00044ba7) bg_vkb2_func_pane_g3

0x5305,	// (0x00044b9f) bg_vkb2_func_pane_g4

0x5315,	// (0x00044baf) bg_vkb2_func_pane_g5

0x531d,	// (0x00044bb7) bg_vkb2_func_pane_g6

0x5325,	// (0x00044bbf) bg_vkb2_func_pane_g7

0x532d,	// (0x00044bc7) bg_vkb2_func_pane_g8

0x52ed,	// (0x00044b87) bg_vkb2_func_pane_g9

0x0008,

0xfde4,	// (0x0004f67e) bg_vkb2_func_pane_g

0x24c4,	// (0x00041d5e) bg_vkb2_fuc_pane_cp01_ParamLimits

0x24c4,	// (0x00041d5e) bg_vkb2_fuc_pane_cp01

0x2e5e,	// (0x000426f8) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2e5e,	// (0x000426f8) vkb2_top_cell_right_wide_pane_g1

0x24c4,	// (0x00041d5e) bg_vkb2_fuc_pane_cp02_ParamLimits

0x24c4,	// (0x00041d5e) bg_vkb2_fuc_pane_cp02

0x2ebc,	// (0x00042756) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2ebc,	// (0x00042756) vkb2_top_cell_right_narrow_pane_g1

0xe672,	// (0x0004df0c) aid_touch_area_decrease_ParamLimits

0xe672,	// (0x0004df0c) aid_touch_area_decrease

0xe6a6,	// (0x0004df40) aid_touch_area_increase_ParamLimits

0xe6a6,	// (0x0004df40) aid_touch_area_increase

0xe6ce,	// (0x0004df68) aid_touch_area_mute_ParamLimits

0xe6ce,	// (0x0004df68) aid_touch_area_mute

0xe6fe,	// (0x0004df98) aid_touch_area_slider_ParamLimits

0xe6fe,	// (0x0004df98) aid_touch_area_slider

0xe73e,	// (0x0004dfd8) popup_slider_window_g4_ParamLimits

0xe73e,	// (0x0004dfd8) popup_slider_window_g4

0xe766,	// (0x0004e000) popup_slider_window_g5_ParamLimits

0xe766,	// (0x0004e000) popup_slider_window_g5

0xe79a,	// (0x0004e034) popup_slider_window_g6_ParamLimits

0xe79a,	// (0x0004e034) popup_slider_window_g6

0x8f65,	// (0x000487ff) popup_slider_window_t2_ParamLimits

0x8f65,	// (0x000487ff) popup_slider_window_t2

0x0001,

0xfce0,	// (0x0004f57a) popup_slider_window_t_ParamLimits

0xfce0,	// (0x0004f57a) popup_slider_window_t

0xe7b6,	// (0x0004e050) slider_pane_ParamLimits

0xe7b6,	// (0x0004e050) slider_pane

0x9c94,	// (0x0004952e) slider_pane_g1_ParamLimits

0x9c94,	// (0x0004952e) slider_pane_g1

0x9ca8,	// (0x00049542) slider_pane_g2_ParamLimits

0x9ca8,	// (0x00049542) slider_pane_g2

0x9cbe,	// (0x00049558) slider_pane_g3_ParamLimits

0x9cbe,	// (0x00049558) slider_pane_g3

0x0003,

0xfdf7,	// (0x0004f691) slider_pane_g_ParamLimits

0xfdf7,	// (0x0004f691) slider_pane_g

0xc795,	// (0x0004c02f) popup_tb_float_extension_window_ParamLimits

0xc795,	// (0x0004c02f) popup_tb_float_extension_window

0x9cea,	// (0x00049584) aid_size_cell_tb_float_ext

0x34ac,	// (0x00042d46) bg_popup_sub_window_cp28

0x9cf6,	// (0x00049590) grid_tb_float_ext_pane

0x9d00,	// (0x0004959a) cell_tb_float_ext_pane_ParamLimits

0x9d00,	// (0x0004959a) cell_tb_float_ext_pane

0x9d1a,	// (0x000495b4) cell_tb_float_ext_pane_g1

0x9d23,	// (0x000495bd) grid_highlight_pane_cp12

0xc8e0,	// (0x0004c17a) cell_last_hwr_side_pane_ParamLimits

0xc8e0,	// (0x0004c17a) cell_last_hwr_side_pane

0x78b2,	// (0x0004714c) cell_last_hwr_side_pane_g1

0x9d2c,	// (0x000495c6) cell_last_hwr_side_pane_g2

0x0001,

0xfe00,	// (0x0004f69a) cell_last_hwr_side_pane_g

0xccd6,	// (0x0004c570) vkb2_area_bottom_space_btn_pane_ParamLimits

0xccd6,	// (0x0004c570) vkb2_area_bottom_space_btn_pane

0x7b30,	// (0x000473ca) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x97df,	// (0x00049079) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2ffe,	// (0x00042898) cell_vkb2_top_candi_pane_t1_ParamLimits

0x301d,	// (0x000428b7) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x301d,	// (0x000428b7) vkb2_area_bottom_space_btn_pane_g1

0x3057,	// (0x000428f1) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x3057,	// (0x000428f1) vkb2_area_bottom_space_btn_pane_g2

0x308d,	// (0x00042927) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x308d,	// (0x00042927) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe05,	// (0x0004f69f) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe05,	// (0x0004f69f) vkb2_area_bottom_space_btn_pane_g

0x2579,	// (0x00041e13) cel_fep_hwr_func_pane_ParamLimits

0x2579,	// (0x00041e13) cel_fep_hwr_func_pane

0xc8b5,	// (0x0004c14f) cell_hwr_side_button_pane_ParamLimits

0xc8b5,	// (0x0004c14f) cell_hwr_side_button_pane

0x91bb,	// (0x00048a55) aid_area_touch_clock_ParamLimits

0x3829,	// (0x000430c3) bg_uniindi_top_pane_ParamLimits

0x91cd,	// (0x00048a67) uniindi_top_pane_g1_ParamLimits

0x91e3,	// (0x00048a7d) uniindi_top_pane_g2_ParamLimits

0x91ef,	// (0x00048a89) uniindi_top_pane_g3_ParamLimits

0x9200,	// (0x00048a9a) uniindi_top_pane_g4_ParamLimits

0xfd18,	// (0x0004f5b2) uniindi_top_pane_g_ParamLimits

0x920d,	// (0x00048aa7) uniindi_top_pane_t1_ParamLimits

0x3829,	// (0x000430c3) bg_vkb2_func_pane_cp01_ParamLimits

0x3829,	// (0x000430c3) bg_vkb2_func_pane_cp01

0x9d35,	// (0x000495cf) cel_fep_hwr_func_pane_g1_ParamLimits

0x9d35,	// (0x000495cf) cel_fep_hwr_func_pane_g1

0x3829,	// (0x000430c3) bg_vkb2_func_pane_cp02_ParamLimits

0x3829,	// (0x000430c3) bg_vkb2_func_pane_cp02

0x9d35,	// (0x000495cf) cell_hwr_side_button_pane_g1_ParamLimits

0x9d35,	// (0x000495cf) cell_hwr_side_button_pane_g1

0x516e,	// (0x00044a08) status_pane_g4_ParamLimits

0x516e,	// (0x00044a08) status_pane_g4

0x5188,	// (0x00044a22) status_pane_t1

0x75ec,	// (0x00046e86) form2_midp_gauge_slider_cont_pane

0x75f4,	// (0x00046e8e) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe036,	// (0x0004d8d0) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe048,	// (0x0004d8e2) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae4,	// (0x0004f37e) form2_midp_gauge_slider_pane_t_ParamLimits

0x762a,	// (0x00046ec4) form2_midp_slider_pane_ParamLimits

0x29f3,	// (0x0004228d) aid_size_cell_func_vkb2_ParamLimits

0x29f3,	// (0x0004228d) aid_size_cell_func_vkb2

0x9cd6,	// (0x00049570) slider_pane_g4_ParamLimits

0x9cd6,	// (0x00049570) slider_pane_g4

0xcd37,	// (0x0004c5d1) form2_midp_gauge_slider_pane_t2_cp01

0xcd45,	// (0x0004c5df) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xcd45,	// (0x0004c5df) form2_midp_gauge_slider_pane_t3_cp01

0x3102,	// (0x0004299c) form2_midp_slider_pane_cp01

0x34ac,	// (0x00042d46) navi_smil_pane

0x9d6e,	// (0x00049608) navi_smil_pane_g1

0x9d76,	// (0x00049610) navi_smil_pane_t1

0x9d43,	// (0x000495dd) form2_midp_slider_pane_g1

0x9d4c,	// (0x000495e6) form2_midp_slider_pane_g2

0x9d54,	// (0x000495ee) form2_midp_slider_pane_g3

0x9d43,	// (0x000495dd) form2_midp_slider_pane_g4

0xf15c,	// (0x0004e9f6) form2_midp_slider_pane_g5

0x0004,

0xfe0e,	// (0x0004f6a8) form2_midp_slider_pane_g

0x30c7,	// (0x00042961) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x30c7,	// (0x00042961) vkb2_area_bottom_space_btn_pane_g4

0xd752,	// (0x0004cfec) lc0_navi_pane_ParamLimits

0xd752,	// (0x0004cfec) lc0_navi_pane

0xd7bc,	// (0x0004d056) lc0_stat_indi_pane_ParamLimits

0xd7bc,	// (0x0004d056) lc0_stat_indi_pane

0xd7d1,	// (0x0004d06b) ls0_title_pane_ParamLimits

0xd7d1,	// (0x0004d06b) ls0_title_pane

0x3e1b,	// (0x000436b5) bg_popup_sub_pane_cp14_ParamLimits

0x91a2,	// (0x00048a3c) list_uniindi_pane_ParamLimits

0x91ae,	// (0x00048a48) uniindi_top_pane_ParamLimits

0x924a,	// (0x00048ae4) list_single_uniindi_pane_g1_ParamLimits

0x925d,	// (0x00048af7) list_single_uniindi_pane_t1_ParamLimits

0xcd62,	// (0x0004c5fc) lc0_stat_clock_pane_ParamLimits

0xcd62,	// (0x0004c5fc) lc0_stat_clock_pane

0xf167,	// (0x0004ea01) lc0_stat_indi_pane_g1_ParamLimits

0xf167,	// (0x0004ea01) lc0_stat_indi_pane_g1

0xf174,	// (0x0004ea0e) lc0_stat_indi_pane_g2_ParamLimits

0xf174,	// (0x0004ea0e) lc0_stat_indi_pane_g2

0x0001,

0xfe19,	// (0x0004f6b3) lc0_stat_indi_pane_g_ParamLimits

0xfe19,	// (0x0004f6b3) lc0_stat_indi_pane_g

0xcd6f,	// (0x0004c609) lc0_uni_indicator_pane_ParamLimits

0xcd6f,	// (0x0004c609) lc0_uni_indicator_pane

0xf181,	// (0x0004ea1b) ls0_title_pane_g1_ParamLimits

0xf181,	// (0x0004ea1b) ls0_title_pane_g1

0xf195,	// (0x0004ea2f) ls0_title_pane_t1_ParamLimits

0xf195,	// (0x0004ea2f) ls0_title_pane_t1

0xcd7c,	// (0x0004c616) lc0_uni_indicator_pane_g1_ParamLimits

0xcd7c,	// (0x0004c616) lc0_uni_indicator_pane_g1

0x9de8,	// (0x00049682) lc0_stat_clock_pane_t1

0x34ac,	// (0x00042d46) main_ai5_pane

0x9df6,	// (0x00049690) ai5_sk_pane_ParamLimits

0x9df6,	// (0x00049690) ai5_sk_pane

0xf1c3,	// (0x0004ea5d) cell_ai5_widget_pane_ParamLimits

0xf1c3,	// (0x0004ea5d) cell_ai5_widget_pane

0x9eb9,	// (0x00049753) aid_size_cell_widget_grid

0x9ecf,	// (0x00049769) bg_ai5_widget_pane_ParamLimits

0x9ecf,	// (0x00049769) bg_ai5_widget_pane

0x9f43,	// (0x000497dd) cell_ai5_widget_pane_g2

0x9f53,	// (0x000497ed) cell_ai5_widget_pane_g3

0x9f6a,	// (0x00049804) cell_ai5_widget_pane_g4

0x9f76,	// (0x00049810) cell_ai5_widget_pane_g5

0x9f82,	// (0x0004981c) cell_ai5_widget_pane_g6

0x9f8e,	// (0x00049828) cell_ai5_widget_pane_g7

0x9fd6,	// (0x00049870) cell_ai5_widget_pane_t1_ParamLimits

0x9fd6,	// (0x00049870) cell_ai5_widget_pane_t1

0x9ff3,	// (0x0004988d) cell_ai5_widget_pane_t2_ParamLimits

0x9ff3,	// (0x0004988d) cell_ai5_widget_pane_t2

0xa00b,	// (0x000498a5) cell_ai5_widget_pane_t3_ParamLimits

0xa00b,	// (0x000498a5) cell_ai5_widget_pane_t3

0xa023,	// (0x000498bd) cell_ai5_widget_pane_t4_ParamLimits

0xa023,	// (0x000498bd) cell_ai5_widget_pane_t4

0xa040,	// (0x000498da) cell_ai5_widget_pane_t5_ParamLimits

0xa040,	// (0x000498da) cell_ai5_widget_pane_t5

0xa05f,	// (0x000498f9) cell_ai5_widget_pane_t6_ParamLimits

0xa05f,	// (0x000498f9) cell_ai5_widget_pane_t6

0xa071,	// (0x0004990b) cell_ai5_widget_pane_t7_ParamLimits

0xa071,	// (0x0004990b) cell_ai5_widget_pane_t7

0xa08a,	// (0x00049924) cell_ai5_widget_pane_t8_ParamLimits

0xa08a,	// (0x00049924) cell_ai5_widget_pane_t8

0x0009,

0xfe33,	// (0x0004f6cd) cell_ai5_widget_pane_t_ParamLimits

0xfe33,	// (0x0004f6cd) cell_ai5_widget_pane_t

0xa0de,	// (0x00049978) grid_ai5_widget_pane

0x3e1b,	// (0x000436b5) highlight_cell_ai5_widget_pane_ParamLimits

0x3e1b,	// (0x000436b5) highlight_cell_ai5_widget_pane

0xf22d,	// (0x0004eac7) ai5_sk_left_pane

0xf237,	// (0x0004ead1) ai5_sk_middle_pane

0xf241,	// (0x0004eadb) ai5_sk_right_pane

0xa113,	// (0x000499ad) bg_ai5_widget_pane_g1_ParamLimits

0xa113,	// (0x000499ad) bg_ai5_widget_pane_g1

0xa11f,	// (0x000499b9) bg_ai5_widget_pane_g2_ParamLimits

0xa11f,	// (0x000499b9) bg_ai5_widget_pane_g2

0xa12b,	// (0x000499c5) bg_ai5_widget_pane_g3_ParamLimits

0xa12b,	// (0x000499c5) bg_ai5_widget_pane_g3

0xa137,	// (0x000499d1) bg_ai5_widget_pane_g4_ParamLimits

0xa137,	// (0x000499d1) bg_ai5_widget_pane_g4

0xa143,	// (0x000499dd) bg_ai5_widget_pane_g5_ParamLimits

0xa143,	// (0x000499dd) bg_ai5_widget_pane_g5

0xa14f,	// (0x000499e9) bg_ai5_widget_pane_g6_ParamLimits

0xa14f,	// (0x000499e9) bg_ai5_widget_pane_g6

0xa15b,	// (0x000499f5) bg_ai5_widget_pane_g7_ParamLimits

0xa15b,	// (0x000499f5) bg_ai5_widget_pane_g7

0xa167,	// (0x00049a01) bg_ai5_widget_pane_g8_ParamLimits

0xa167,	// (0x00049a01) bg_ai5_widget_pane_g8

0xa173,	// (0x00049a0d) bg_ai5_widget_pane_g9_ParamLimits

0xa173,	// (0x00049a0d) bg_ai5_widget_pane_g9

0x0008,

0xfe48,	// (0x0004f6e2) bg_ai5_widget_pane_g_ParamLimits

0xfe48,	// (0x0004f6e2) bg_ai5_widget_pane_g

0xa1a5,	// (0x00049a3f) cell_shortcut_ai5_widget_pane_ParamLimits

0xa1a5,	// (0x00049a3f) cell_shortcut_ai5_widget_pane

0x4aa5,	// (0x0004433f) bg_cell_shortcut_ai5_widget_pane

0xa1b6,	// (0x00049a50) cell_grid_ai5_widget_pane_g1

0x4aa5,	// (0x0004433f) highlight_cell_shortcut_ai5_widget_pane

0x52fd,	// (0x00044b97) ai5_sk_left_pane_g1

0xa1bf,	// (0x00049a59) ai5_sk_left_pane_g2

0xa1c7,	// (0x00049a61) ai5_sk_left_pane_g3

0xa1cf,	// (0x00049a69) ai5_sk_left_pane_g4

0x0003,

0xfe5b,	// (0x0004f6f5) ai5_sk_left_pane_g

0xa1d7,	// (0x00049a71) ai5_sk_left_pane_t1

0x52f5,	// (0x00044b8f) ai5_sk_right_pane_g1

0xa1e5,	// (0x00049a7f) ai5_sk_right_pane_g2

0xa1ed,	// (0x00049a87) ai5_sk_right_pane_g3

0xa1f5,	// (0x00049a8f) ai5_sk_right_pane_g4

0x0003,

0xfe64,	// (0x0004f6fe) ai5_sk_right_pane_g

0xa1fd,	// (0x00049a97) ai5_sk_right_pane_t1

0x52f5,	// (0x00044b8f) ai5_sk_middle_pane_g1

0x52fd,	// (0x00044b97) ai5_sk_middle_pane_g2

0x5315,	// (0x00044baf) ai5_sk_middle_pane_g3

0xa1ed,	// (0x00049a87) ai5_sk_middle_pane_g4

0xa1c7,	// (0x00049a61) ai5_sk_middle_pane_g5

0xa20b,	// (0x00049aa5) ai5_sk_middle_pane_g6

0xf24b,	// (0x0004eae5) ai5_sk_middle_pane_g7

0x0006,

0xfe6d,	// (0x0004f707) ai5_sk_middle_pane_g

0xd63e,	// (0x0004ced8) aid_touch_area_size_lc0_ParamLimits

0xd63e,	// (0x0004ced8) aid_touch_area_size_lc0

0x2704,	// (0x00041f9e) cell_hwr_candidate_pane_t1_ParamLimits

0x4e45,	// (0x000446df) aid_touch_navi_pane

0xd8ca,	// (0x0004d164) status_dt_navi_pane_ParamLimits

0xd8ca,	// (0x0004d164) status_dt_navi_pane

0xd8e2,	// (0x0004d17c) status_dt_sta_pane_ParamLimits

0xd8e2,	// (0x0004d17c) status_dt_sta_pane

0xf253,	// (0x0004eaed) dt_sta_controll_pane

0xf260,	// (0x0004eafa) dt_sta_indi_pane

0xf26d,	// (0x0004eb07) dt_sta_title_pane

0x3829,	// (0x000430c3) bg_dt_sta_indi_pane_ParamLimits

0x3829,	// (0x000430c3) bg_dt_sta_indi_pane

0xf27f,	// (0x0004eb19) dt_sta_battery_pane

0xf287,	// (0x0004eb21) dt_sta_indi_pane_g1

0xa25d,	// (0x00049af7) dt_sta_indi_pane_g2

0xa266,	// (0x00049b00) dt_sta_indi_pane_g3

0x0002,

0xfe7c,	// (0x0004f716) dt_sta_indi_pane_g

0xa26f,	// (0x00049b09) dt_sta_signal_pane

0x3e1b,	// (0x000436b5) bg_dt_sta_title_pane_ParamLimits

0x3e1b,	// (0x000436b5) bg_dt_sta_title_pane

0xa278,	// (0x00049b12) dt_sta_title_pane_g1

0xa280,	// (0x00049b1a) dt_sta_title_pane_t1_ParamLimits

0xa280,	// (0x00049b1a) dt_sta_title_pane_t1

0x34ac,	// (0x00042d46) bg_dt_sta_control_pane

0xf290,	// (0x0004eb2a) dt_sta_controll_pane_g1

0xa29e,	// (0x00049b38) bg_dt_sta_title_pane_g1

0xa2a7,	// (0x00049b41) bg_dt_sta_title_pane_g2

0xa2b0,	// (0x00049b4a) bg_dt_sta_title_pane_g3

0x0002,

0xfe83,	// (0x0004f71d) bg_dt_sta_title_pane_g

0x78b2,	// (0x0004714c) bg_dt_sta_indi_pane_g1

0xa2b9,	// (0x00049b53) dt_sta_signal_pane_g1

0xa2c1,	// (0x00049b5b) dt_sta_signal_pane_g2

0x0001,

0xfe8a,	// (0x0004f724) dt_sta_signal_pane_g

0xa2c9,	// (0x00049b63) dt_sta_battery_pane_g1

0xa2d2,	// (0x00049b6c) dt_sta_battery_pane_t1

0x78b2,	// (0x0004714c) bg_dt_sta_control_pane_g1

0x45a4,	// (0x00043e3e) fep_china_uni_eep_pane

0x45ac,	// (0x00043e46) fep_china_uni_entry_pane_ParamLimits

0x45bc,	// (0x00043e56) popup_fep_china_uni_window_g1_ParamLimits

0x45cc,	// (0x00043e66) popup_fep_china_uni_window_g2_ParamLimits

0x45cc,	// (0x00043e66) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x0004efbc) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x0004efbc) popup_fep_china_uni_window_g

0xa2e1,	// (0x00049b7b) fep_china_uni_eep_pane_g1

0xa2e9,	// (0x00049b83) fep_china_uni_eep_pane_t1

0x9d65,	// (0x000495ff) aid_touch_area_size_smil_player

0x4f95,	// (0x0004482f) lc0_clock_pane

0x517c,	// (0x00044a16) status_pane_g5_ParamLimits

0x517c,	// (0x00044a16) status_pane_g5

0xc317,	// (0x0004bbb1) popup_keymap_window

0x513a,	// (0x000449d4) status_icon_pane

0x9f53,	// (0x000497ed) cell_ai5_widget_pane_g3_ParamLimits

0x9f6a,	// (0x00049804) cell_ai5_widget_pane_g4_ParamLimits

0x9f76,	// (0x00049810) cell_ai5_widget_pane_g5_ParamLimits

0x9f9a,	// (0x00049834) cell_ai5_widget_pane_g8_ParamLimits

0x9f9a,	// (0x00049834) cell_ai5_widget_pane_g8

0x9fae,	// (0x00049848) cell_ai5_widget_pane_g9_ParamLimits

0x9fae,	// (0x00049848) cell_ai5_widget_pane_g9

0x9fc2,	// (0x0004985c) cell_ai5_widget_pane_g10_ParamLimits

0x9fc2,	// (0x0004985c) cell_ai5_widget_pane_g10

0xa2f8,	// (0x00049b92) status_icon_pane_g1

0x34ac,	// (0x00042d46) bg_popup_sub_pane_cp13

0xa300,	// (0x00049b9a) popup_keymap_window_t1

0xd5cc,	// (0x0004ce66) control_pane_g6_ParamLimits

0xd5cc,	// (0x0004ce66) control_pane_g6

0xd5d9,	// (0x0004ce73) control_pane_g7_ParamLimits

0xd5d9,	// (0x0004ce73) control_pane_g7

0xd5e6,	// (0x0004ce80) control_pane_g8_ParamLimits

0xd5e6,	// (0x0004ce80) control_pane_g8

0xf253,	// (0x0004eaed) dt_sta_controll_pane_ParamLimits

0xf260,	// (0x0004eafa) dt_sta_indi_pane_ParamLimits

0xf26d,	// (0x0004eb07) dt_sta_title_pane_ParamLimits

0x3d47,	// (0x000435e1) aid_size_touch_scroll_bar_cale

0x10de,	// (0x00040978) popup_discreet_window_ParamLimits

0x10de,	// (0x00040978) popup_discreet_window

0xbe71,	// (0x0004b70b) popup_sk_window

0x5966,	// (0x00045200) bg_popup_sub_pane_cp28_ParamLimits

0x5966,	// (0x00045200) bg_popup_sub_pane_cp28

0xa30e,	// (0x00049ba8) popup_discreet_window_g1_ParamLimits

0xa30e,	// (0x00049ba8) popup_discreet_window_g1

0xa32e,	// (0x00049bc8) popup_discreet_window_t1_ParamLimits

0xa32e,	// (0x00049bc8) popup_discreet_window_t1

0xa34c,	// (0x00049be6) popup_discreet_window_t2_ParamLimits

0xa34c,	// (0x00049be6) popup_discreet_window_t2

0x0002,

0xfe8f,	// (0x0004f729) popup_discreet_window_t_ParamLimits

0xfe8f,	// (0x0004f729) popup_discreet_window_t

0x3139,	// (0x000429d3) popup_sk_window_g1

0x3143,	// (0x000429dd) popup_sk_window_g2

0x0001,

0xfe96,	// (0x0004f730) popup_sk_window_g

0x314d,	// (0x000429e7) popup_sk_window_t1

0x315b,	// (0x000429f5) popup_sk_window_t1_copy1

0x9f43,	// (0x000497dd) cell_ai5_widget_pane_g2_ParamLimits

0xa09c,	// (0x00049936) cell_ai5_widget_pane_t9_ParamLimits

0xa09c,	// (0x00049936) cell_ai5_widget_pane_t9

0x34ac,	// (0x00042d46) main_fep_fshwr2_pane

0xcda3,	// (0x0004c63d) aid_fshwr2_btn_pane

0xcdb4,	// (0x0004c64e) aid_fshwr2_syb_pane

0xcdc5,	// (0x0004c65f) aid_fshwr2_txt_pane

0xcdd1,	// (0x0004c66b) fshwr2_func_candi_pane

0xcdf0,	// (0x0004c68a) fshwr2_hwr_syb_pane

0xce0b,	// (0x0004c6a5) fshwr2_icf_pane

0x34ac,	// (0x00042d46) fshwr2_icf_bg_pane

0x31db,	// (0x00042a75) fshwr2_icf_pane_t1_ParamLimits

0x31db,	// (0x00042a75) fshwr2_icf_pane_t1

0x4492,	// (0x00043d2c) fshwr2_func_candi_pane_g1

0xf299,	// (0x0004eb33) fshwr2_func_candi_row_pane_ParamLimits

0xf299,	// (0x0004eb33) fshwr2_func_candi_row_pane

0xce37,	// (0x0004c6d1) cell_fshwr2_syb_pane_ParamLimits

0xce37,	// (0x0004c6d1) cell_fshwr2_syb_pane

0x7b30,	// (0x000473ca) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7b30,	// (0x000473ca) fshwr2_hwr_syb_pane_g1

0x34ac,	// (0x00042d46) bg_popup_call_pane_cp01

0xce4d,	// (0x0004c6e7) fshwr2_func_candi_cell_pane_ParamLimits

0xce4d,	// (0x0004c6e7) fshwr2_func_candi_cell_pane

0xf2bc,	// (0x0004eb56) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf2bc,	// (0x0004eb56) fshwr2_func_candi_cell_bg_pane

0xce98,	// (0x0004c732) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xce98,	// (0x0004c732) fshwr2_func_candi_cell_pane_g1

0xcecf,	// (0x0004c769) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xcecf,	// (0x0004c769) fshwr2_func_candi_cell_pane_t1

0x34ac,	// (0x00042d46) bg_button_pane_cp08

0xa3ba,	// (0x00049c54) cell_fshwr2_syb_bg_pane

0xceea,	// (0x0004c784) cell_fshwr2_syb_bg_pane_g1

0xcef2,	// (0x0004c78c) cell_fshwr2_syb_bg_pane_t1

0x3e1b,	// (0x000436b5) main_tmo_pane

0xdbae,	// (0x0004d448) uni_indicator_pane_g1_ParamLimits

0xdbc4,	// (0x0004d45e) uni_indicator_pane_g2_ParamLimits

0xdbda,	// (0x0004d474) uni_indicator_pane_g3_ParamLimits

0x64c1,	// (0x00045d5b) uni_indicator_pane_g4_ParamLimits

0x64c1,	// (0x00045d5b) uni_indicator_pane_g4

0x64d5,	// (0x00045d6f) uni_indicator_pane_g5_ParamLimits

0x64d5,	// (0x00045d6f) uni_indicator_pane_g5

0x64d5,	// (0x00045d6f) uni_indicator_pane_g6_ParamLimits

0x64d5,	// (0x00045d6f) uni_indicator_pane_g6

0xf921,	// (0x0004f1bb) uni_indicator_pane_g_ParamLimits

0xe64e,	// (0x0004dee8) popup_tmo_note_window_ParamLimits

0xe64e,	// (0x0004dee8) popup_tmo_note_window

0x3e1b,	// (0x000436b5) fshwr2_bg_pane

0xcec0,	// (0x0004c75a) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xcec0,	// (0x0004c75a) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe9b,	// (0x0004f735) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe9b,	// (0x0004f735) fshwr2_func_candi_cell_pane_g

0x78b2,	// (0x0004714c) bg_popup_window_pane_cp01

0x32a4,	// (0x00042b3e) bg_popup_window_pane_g1_cp01

0xa3c2,	// (0x00049c5c) bg_popup_window_pane_cp22_ParamLimits

0xa3c2,	// (0x00049c5c) bg_popup_window_pane_cp22

0xa3d0,	// (0x00049c6a) listscroll_tmo_link_pane_ParamLimits

0xa3d0,	// (0x00049c6a) listscroll_tmo_link_pane

0xa410,	// (0x00049caa) popup_tmo_note_window_g1_ParamLimits

0xa410,	// (0x00049caa) popup_tmo_note_window_g1

0xa41d,	// (0x00049cb7) tmo_note_info_pane_ParamLimits

0xa41d,	// (0x00049cb7) tmo_note_info_pane

0xf2c8,	// (0x0004eb62) list_tmo_note_info_pane_g1_ParamLimits

0xf2c8,	// (0x0004eb62) list_tmo_note_info_pane_g1

0xa44e,	// (0x00049ce8) list_tmo_note_info_pane_g2_ParamLimits

0xa44e,	// (0x00049ce8) list_tmo_note_info_pane_g2

0x0001,

0xfea0,	// (0x0004f73a) list_tmo_note_info_pane_g_ParamLimits

0xfea0,	// (0x0004f73a) list_tmo_note_info_pane_g

0xa46a,	// (0x00049d04) list_tmo_note_info_text_pane_ParamLimits

0xa46a,	// (0x00049d04) list_tmo_note_info_text_pane

0xa4eb,	// (0x00049d85) list_tmo_link_pane

0xa4f8,	// (0x00049d92) scroll_pane_cp20

0xa505,	// (0x00049d9f) list_single_tmo_link_pane_ParamLimits

0xa505,	// (0x00049d9f) list_single_tmo_link_pane

0xa515,	// (0x00049daf) list_single_tmo_link_pane_t1

0xa523,	// (0x00049dbd) list_tmo_note_info_text_pane_t1_ParamLimits

0xa523,	// (0x00049dbd) list_tmo_note_info_text_pane_t1

0xd270,	// (0x0004cb0a) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd270,	// (0x0004cb0a) aid_size_touch_scroll_bar_cp01

0xba05,	// (0x0004b29f) aid_size_touch_slider_marker

0xbe61,	// (0x0004b6fb) popup_settings_window_ParamLimits

0xbe61,	// (0x0004b6fb) popup_settings_window

0x0661,	// (0x0003fefb) popup_candi_list_indi_window

0x4e45,	// (0x000446df) aid_touch_navi_pane_ParamLimits

0x294c,	// (0x000421e6) rs_clock_indi_pane

0x2955,	// (0x000421ef) sctrl_sk_bottom_pane_ParamLimits

0x2966,	// (0x00042200) sctrl_sk_top_pane_ParamLimits

0x2a4d,	// (0x000422e7) popup_fep_tooltip_window

0x9eb9,	// (0x00049753) aid_size_cell_widget_grid_ParamLimits

0x9f2e,	// (0x000497c8) cell_ai5_widget_pane_g1_ParamLimits

0x9f2e,	// (0x000497c8) cell_ai5_widget_pane_g1

0x9f82,	// (0x0004981c) cell_ai5_widget_pane_g6_ParamLimits

0x9f8e,	// (0x00049828) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe1e,	// (0x0004f6b8) cell_ai5_widget_pane_g_ParamLimits

0xfe1e,	// (0x0004f6b8) cell_ai5_widget_pane_g

0xa0c0,	// (0x0004995a) cell_ai5_widget_pane_t10_ParamLimits

0xa0c0,	// (0x0004995a) cell_ai5_widget_pane_t10

0xa0de,	// (0x00049978) grid_ai5_widget_pane_ParamLimits

0xa17f,	// (0x00049a19) cell_contacts_ai5_widget_pane_ParamLimits

0xa17f,	// (0x00049a19) cell_contacts_ai5_widget_pane

0xa361,	// (0x00049bfb) popup_discreet_window_t3_ParamLimits

0xa361,	// (0x00049bfb) popup_discreet_window_t3

0xce23,	// (0x0004c6bd) popup_fshwr2_char_preview_window_ParamLimits

0xce23,	// (0x0004c6bd) popup_fshwr2_char_preview_window

0xf2df,	// (0x0004eb79) tmo_note_info_pane_t1

0xf2f4,	// (0x0004eb8e) tmo_note_info_pane_t2

0xf30b,	// (0x0004eba5) tmo_note_info_pane_t3

0xa4c7,	// (0x00049d61) tmo_note_info_pane_t4

0xa4d9,	// (0x00049d73) tmo_note_info_pane_t5

0x0004,

0xfea5,	// (0x0004f73f) tmo_note_info_pane_t

0xa4eb,	// (0x00049d85) list_tmo_link_pane_ParamLimits

0xa4f8,	// (0x00049d92) scroll_pane_cp20_ParamLimits

0x34ac,	// (0x00042d46) bg_popup_fep_char_preview_window_cp01

0xa53c,	// (0x00049dd6) popup_fshwr2_char_preview_window_t1

0xa54a,	// (0x00049de4) popup_candi_list_indi_window_g1

0xa553,	// (0x00049ded) bg_cell_contacts_ai5_widget_pane

0xa55f,	// (0x00049df9) cell_contacts_ai5_widget_pane_g1

0x7f92,	// (0x0004782c) cell_contacts_ai5_widget_pane_g2

0xa574,	// (0x00049e0e) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb0,	// (0x0004f74a) cell_contacts_ai5_widget_pane_g

0xa580,	// (0x00049e1a) cell_contacts_ai5_widget_pane_t1

0x3e1b,	// (0x000436b5) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf385,	// (0x0004ec1f) settings_container_pane

0x4aa5,	// (0x0004433f) listscroll_set_pane_copy1

0x6fa7,	// (0x00046841) scroll_pane_cp121_copy1

0xa603,	// (0x00049e9d) set_content_pane_copy1

0xf391,	// (0x0004ec2b) aid_height_set_list_copy1_ParamLimits

0xf391,	// (0x0004ec2b) aid_height_set_list_copy1

0x66cd,	// (0x00045f67) aid_size_parent_copy1_ParamLimits

0x66cd,	// (0x00045f67) aid_size_parent_copy1

0xf39d,	// (0x0004ec37) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf39d,	// (0x0004ec37) button_value_adjust_pane_cp6_copy1

0x4de3,	// (0x0004467d) list_highlight_pane_cp2_copy1_ParamLimits

0x4de3,	// (0x0004467d) list_highlight_pane_cp2_copy1

0xf3b1,	// (0x0004ec4b) list_set_pane_copy1_ParamLimits

0xf3b1,	// (0x0004ec4b) list_set_pane_copy1

0xf320,	// (0x0004ebba) main_pane_set_t1_copy1_ParamLimits

0xf320,	// (0x0004ebba) main_pane_set_t1_copy1

0xf35a,	// (0x0004ebf4) main_pane_set_t2_copy1_ParamLimits

0xf35a,	// (0x0004ebf4) main_pane_set_t2_copy1

0xf45e,	// (0x0004ecf8) main_pane_set_t3_copy1

0xf46c,	// (0x0004ed06) main_pane_set_t4_copy1

0xf379,	// (0x0004ec13) set_content_pane_g1_copy1_ParamLimits

0xf379,	// (0x0004ec13) set_content_pane_g1_copy1

0xf47a,	// (0x0004ed14) setting_code_pane_copy1

0xa6fc,	// (0x00049f96) setting_slider_graphic_pane_copy1

0xa6fc,	// (0x00049f96) setting_slider_pane_copy1

0xa6fc,	// (0x00049f96) setting_text_pane_copy1

0xa6fc,	// (0x00049f96) setting_volume_pane_copy1

0xf47a,	// (0x0004ed14) settings_code_pane_cp2_copy1

0xf482,	// (0x0004ed1c) settings_code_pane_cp_copy1_ParamLimits

0xf482,	// (0x0004ed1c) settings_code_pane_cp_copy1

0xcf01,	// (0x0004c79b) volume_set_pane_copy1

0xf496,	// (0x0004ed30) volume_set_pane_g10_copy1

0xf49e,	// (0x0004ed38) volume_set_pane_g1_copy1

0xf4a6,	// (0x0004ed40) volume_set_pane_g2_copy1

0xf4ae,	// (0x0004ed48) volume_set_pane_g3_copy1

0xf4b6,	// (0x0004ed50) volume_set_pane_g4_copy1

0xf4be,	// (0x0004ed58) volume_set_pane_g5_copy1

0xf4c6,	// (0x0004ed60) volume_set_pane_g6_copy1

0xf4ce,	// (0x0004ed68) volume_set_pane_g7_copy1

0xf4d6,	// (0x0004ed70) volume_set_pane_g8_copy1

0xf4de,	// (0x0004ed78) volume_set_pane_g9_copy1

0x35a0,	// (0x00042e3a) bg_set_opt_pane_cp_copy1_ParamLimits

0x35a0,	// (0x00042e3a) bg_set_opt_pane_cp_copy1

0x32b5,	// (0x00042b4f) setting_slider_pane_t1_copy1_ParamLimits

0x32b5,	// (0x00042b4f) setting_slider_pane_t1_copy1

0xcf09,	// (0x0004c7a3) setting_slider_pane_t2_copy1_ParamLimits

0xcf09,	// (0x0004c7a3) setting_slider_pane_t2_copy1

0xcf23,	// (0x0004c7bd) setting_slider_pane_t3_copy1_ParamLimits

0xcf23,	// (0x0004c7bd) setting_slider_pane_t3_copy1

0xcf3b,	// (0x0004c7d5) slider_set_pane_copy1_ParamLimits

0xcf3b,	// (0x0004c7d5) slider_set_pane_copy1

0x3e6a,	// (0x00043704) set_opt_bg_pane_g1_copy2

0x3e72,	// (0x0004370c) set_opt_bg_pane_g2_copy2

0xa768,	// (0x0004a002) set_opt_bg_pane_g3_copy2

0x3e82,	// (0x0004371c) set_opt_bg_pane_g4_copy2

0x3e8a,	// (0x00043724) set_opt_bg_pane_g5_copy2

0x3e92,	// (0x0004372c) set_opt_bg_pane_g6_copy2

0xf4e6,	// (0x0004ed80) set_opt_bg_pane_g7_copy2

0xa77a,	// (0x0004a014) set_opt_bg_pane_g8_copy2

0xa784,	// (0x0004a01e) set_opt_bg_pane_g9_copy2

0x331b,	// (0x00042bb5) aid_size_touch_slider_mark_copy1_ParamLimits

0x331b,	// (0x00042bb5) aid_size_touch_slider_mark_copy1

0xa78e,	// (0x0004a028) slider_set_pane_g1_copy1

0x332f,	// (0x00042bc9) slider_set_pane_g2_copy1

0x2287,	// (0x00041b21) slider_set_pane_g3_copy1_ParamLimits

0x2287,	// (0x00041b21) slider_set_pane_g3_copy1

0x229b,	// (0x00041b35) slider_set_pane_g4_copy1_ParamLimits

0x229b,	// (0x00041b35) slider_set_pane_g4_copy1

0x22b3,	// (0x00041b4d) slider_set_pane_g5_copy1_ParamLimits

0x22b3,	// (0x00041b4d) slider_set_pane_g5_copy1

0x2287,	// (0x00041b21) slider_set_pane_g6_copy1_ParamLimits

0x2287,	// (0x00041b21) slider_set_pane_g6_copy1

0xcf51,	// (0x0004c7eb) slider_set_pane_g7_copy1_ParamLimits

0xcf51,	// (0x0004c7eb) slider_set_pane_g7_copy1

0x34c0,	// (0x00042d5a) bg_set_opt_pane_cp2_copy1

0xa797,	// (0x0004a031) setting_slider_graphic_pane_g1_copy1

0xf4ee,	// (0x0004ed88) setting_slider_graphic_pane_t1_copy1

0xf4fe,	// (0x0004ed98) setting_slider_graphic_pane_t2_copy1

0xf50e,	// (0x0004eda8) slider_set_pane_cp_copy1

0xa7d0,	// (0x0004a06a) input_focus_pane_cp1_copy1

0xa7d9,	// (0x0004a073) list_set_text_pane_copy1

0xa7e1,	// (0x0004a07b) setting_text_pane_g1_copy1

0xbd0f,	// (0x0004b5a9) set_text_pane_t1_copy1

0xa7d0,	// (0x0004a06a) input_focus_pane_cp2_copy1

0xa7e1,	// (0x0004a07b) setting_code_pane_g1_copy1

0xf516,	// (0x0004edb0) setting_code_pane_t1_copy1

0x6dd1,	// (0x0004666b) list_set_graphic_pane_copy1

0x34c0,	// (0x00042d5a) bg_set_opt_pane_cp4_copy1

0xd447,	// (0x0004cce1) list_set_graphic_pane_g1_copy1_ParamLimits

0xd447,	// (0x0004cce1) list_set_graphic_pane_g1_copy1

0xf524,	// (0x0004edbe) list_set_graphic_pane_g2_copy1

0xd45f,	// (0x0004ccf9) list_set_graphic_pane_t1_copy1_ParamLimits

0xd45f,	// (0x0004ccf9) list_set_graphic_pane_t1_copy1

0x78b2,	// (0x0004714c) rs_clock_indi_pane_g1

0xa812,	// (0x0004a0ac) rs_clock_indi_pane_t1

0xa820,	// (0x0004a0ba) rs_indi_pane

0xa828,	// (0x0004a0c2) rs_indi_pane_g1

0xa831,	// (0x0004a0cb) rs_indi_pane_g2

0xa83a,	// (0x0004a0d4) rs_indi_pane_g3

0x0002,

0xfeb7,	// (0x0004f751) rs_indi_pane_g

0x4aa5,	// (0x0004433f) bg_popup_preview_window_pane_cp03

0xa843,	// (0x0004a0dd) popup_fep_tooltip_window_t1

0x853a,	// (0x00047dd4) popup_note2_window_g2_ParamLimits

0x853a,	// (0x00047dd4) popup_note2_window_g2

0x0001,

0xfc50,	// (0x0004f4ea) popup_note2_window_g_ParamLimits

0xfc50,	// (0x0004f4ea) popup_note2_window_g

0x8a35,	// (0x000482cf) bg_popup_sub_pane_cp11_ParamLimits

0x8a42,	// (0x000482dc) cell_ai3_links_pane_g1_ParamLimits

0x8a59,	// (0x000482f3) cell_ai3_links_pane_t1

0xbd0f,	// (0x0004b5a9) set_text_pane_t1_copy1_ParamLimits

0x49b6,	// (0x00044250) cell_graphic_popup_pane_cp2_ParamLimits

0x49b6,	// (0x00044250) cell_graphic_popup_pane_cp2

0xa851,	// (0x0004a0eb) cell_graphic_popup_pane_g1_cp2

0x3b5a,	// (0x000433f4) cell_graphic_popup_pane_g2_cp2

0xa859,	// (0x0004a0f3) cell_graphic_popup_pane_g3_cp2

0xa861,	// (0x0004a0fb) cell_graphic_popup_pane_t2_cp2

0x3b6b,	// (0x00043405) grid_highlight_pane_cp3_cp2

0x41af,	// (0x00043a49) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3e1b,	// (0x000436b5) main_tmo_pane_ParamLimits

0xe642,	// (0x0004dedc) popup_tmo_big_image_note_window

0x9f1d,	// (0x000497b7) cell_ai5_widget_list_pane

0x9f25,	// (0x000497bf) cell_ai5_widget_lrg_icon_pane

0xf2df,	// (0x0004eb79) tmo_note_info_pane_t1_ParamLimits

0xf2f4,	// (0x0004eb8e) tmo_note_info_pane_t2_ParamLimits

0xf30b,	// (0x0004eba5) tmo_note_info_pane_t3_ParamLimits

0xa4c7,	// (0x00049d61) tmo_note_info_pane_t4_ParamLimits

0xa4d9,	// (0x00049d73) tmo_note_info_pane_t5_ParamLimits

0xfea5,	// (0x0004f73f) tmo_note_info_pane_t_ParamLimits

0xf385,	// (0x0004ec1f) settings_container_pane_ParamLimits

0xa7c8,	// (0x0004a062) indicator_popup_pane_cp5

0xa7c8,	// (0x0004a062) indicator_popup_pane_cp6

0x6dd1,	// (0x0004666b) list_set_graphic_pane_copy1_ParamLimits

0x34ac,	// (0x00042d46) bg_popup_window_pane_cp23

0xa86f,	// (0x0004a109) popup_tmo_big_image_note_window_g1

0xa879,	// (0x0004a113) popup_tmo_big_image_note_window_t1

0xa889,	// (0x0004a123) popup_tmo_big_image_note_window_t2

0xa899,	// (0x0004a133) popup_tmo_big_image_note_window_t3

0x0002,

0xfebe,	// (0x0004f758) popup_tmo_big_image_note_window_t

0x78b2,	// (0x0004714c) cell_ai5_widget_lrg_icon_pane_g1

0xa8a9,	// (0x0004a143) cell_ai5_widget_lrg_icon_pane_t1

0xa8b7,	// (0x0004a151) cell_ai5_widget_list_row_pane_ParamLimits

0xa8b7,	// (0x0004a151) cell_ai5_widget_list_row_pane

0xa8ce,	// (0x0004a168) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa8ce,	// (0x0004a168) cell_ai5_widget_list_row_pane_g1

0xa8db,	// (0x0004a175) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa8db,	// (0x0004a175) cell_ai5_widget_list_row_pane_t1

0xa90c,	// (0x0004a1a6) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa90c,	// (0x0004a1a6) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec5,	// (0x0004f75f) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec5,	// (0x0004f75f) cell_ai5_widget_list_row_pane_t

0x34ac,	// (0x00042d46) main_fep_vtchi_ss_pane

0xa950,	// (0x0004a1ea) popup_fep_char_pre_window

0xa958,	// (0x0004a1f2) popup_fep_ituss_window

0xa979,	// (0x0004a213) popup_fep_vkbss_window

0xa998,	// (0x0004a232) grid_vkbss_keypad_pane_ParamLimits

0xa998,	// (0x0004a232) grid_vkbss_keypad_pane

0xa9a8,	// (0x0004a242) ituss_keypad_pane

0x3359,	// (0x00042bf3) aid_vkbss_key_offset_ParamLimits

0x3359,	// (0x00042bf3) aid_vkbss_key_offset

0x3365,	// (0x00042bff) cell_vkbss_key_pane_ParamLimits

0x3365,	// (0x00042bff) cell_vkbss_key_pane

0xa9b7,	// (0x0004a251) bg_cell_vkbss_key_g1_ParamLimits

0xa9b7,	// (0x0004a251) bg_cell_vkbss_key_g1

0xa9c3,	// (0x0004a25d) cell_vkbss_key_3p_pane_ParamLimits

0xa9c3,	// (0x0004a25d) cell_vkbss_key_3p_pane

0xa9dd,	// (0x0004a277) cell_vkbss_key_g1_ParamLimits

0xa9dd,	// (0x0004a277) cell_vkbss_key_g1

0xa9f7,	// (0x0004a291) cell_vkbss_key_t1_ParamLimits

0xa9f7,	// (0x0004a291) cell_vkbss_key_t1

0x337b,	// (0x00042c15) cell_ituss_key_pane_ParamLimits

0x337b,	// (0x00042c15) cell_ituss_key_pane

0xaa22,	// (0x0004a2bc) bg_cell_ituss_key_g1_ParamLimits

0xaa22,	// (0x0004a2bc) bg_cell_ituss_key_g1

0xaa2e,	// (0x0004a2c8) cell_ituss_key_pane_g1_ParamLimits

0xaa2e,	// (0x0004a2c8) cell_ituss_key_pane_g1

0x338c,	// (0x00042c26) cell_ituss_key_pane_g2_ParamLimits

0x338c,	// (0x00042c26) cell_ituss_key_pane_g2

0x0002,

0xfecc,	// (0x0004f766) cell_ituss_key_pane_g_ParamLimits

0xfecc,	// (0x0004f766) cell_ituss_key_pane_g

0x33b8,	// (0x00042c52) cell_ituss_key_t1_ParamLimits

0x33b8,	// (0x00042c52) cell_ituss_key_t1

0x33f2,	// (0x00042c8c) cell_ituss_key_t2_ParamLimits

0x33f2,	// (0x00042c8c) cell_ituss_key_t2

0x3423,	// (0x00042cbd) cell_ituss_key_t3_ParamLimits

0x3423,	// (0x00042cbd) cell_ituss_key_t3

0x33f2,	// (0x00042c8c) cell_ituss_key_t4_ParamLimits

0x33f2,	// (0x00042c8c) cell_ituss_key_t4

0x0004,

0xfed3,	// (0x0004f76d) cell_ituss_key_t_ParamLimits

0xfed3,	// (0x0004f76d) cell_ituss_key_t

0xaa5a,	// (0x0004a2f4) cell_vkbss_key_3p_pane_g1

0xaa62,	// (0x0004a2fc) cell_vkbss_key_3p_pane_g2

0xaa6a,	// (0x0004a304) cell_vkbss_key_3p_pane_g3

0x0002,

0xfede,	// (0x0004f778) cell_vkbss_key_3p_pane_g

0x34ac,	// (0x00042d46) bg_popup_fep_char_preview_window_cp02

0x3466,	// (0x00042d00) popup_fep_char_pre_window_t1

0xf223,	// (0x0004eabd) main_ai5_sk_pane

0xa553,	// (0x00049ded) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa55f,	// (0x00049df9) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7f92,	// (0x0004782c) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa574,	// (0x00049e0e) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb0,	// (0x0004f74a) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa580,	// (0x00049e1a) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3e1b,	// (0x000436b5) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf52c,	// (0x0004edc6) main_ai5_sk_pane_g1

0x579f,	// (0x00045039) popup_query_code_window_g1

0xa96e,	// (0x0004a208) popup_fep_vkb_icf_pane

0xa982,	// (0x0004a21c) popup_fep_vtchi_icf_pane

0xaa7b,	// (0x0004a315) bg_icf_pane

0xaa87,	// (0x0004a321) list_vkb_icf_pane

0xaa96,	// (0x0004a330) bg_icf_pane_cp01

0xaaa9,	// (0x0004a343) vtchi_icf_list_pane

0xaab9,	// (0x0004a353) list_vkb_icf_pane_t1_ParamLimits

0xaab9,	// (0x0004a353) list_vkb_icf_pane_t1

0xaacf,	// (0x0004a369) vtchi_icf_list_pane_t1_ParamLimits

0xaacf,	// (0x0004a369) vtchi_icf_list_pane_t1

0xa958,	// (0x0004a1f2) popup_fep_ituss_window_ParamLimits

0xa982,	// (0x0004a21c) popup_fep_vtchi_icf_pane_ParamLimits

0xa9a8,	// (0x0004a242) ituss_keypad_pane_ParamLimits

0x334d,	// (0x00042be7) ituss_sks_pane

0xaa7b,	// (0x0004a315) bg_icf_pane_ParamLimits

0xa934,	// (0x0004a1ce) icf_edit_indi_pane_ParamLimits

0xa934,	// (0x0004a1ce) icf_edit_indi_pane

0xaa87,	// (0x0004a321) list_vkb_icf_pane_ParamLimits

0xaa96,	// (0x0004a330) bg_icf_pane_cp01_ParamLimits

0xa943,	// (0x0004a1dd) icf_edit_indi_pane_cp01_ParamLimits

0xa943,	// (0x0004a1dd) icf_edit_indi_pane_cp01

0xaab1,	// (0x0004a34b) vtchi_query_pane

0x7b30,	// (0x000473ca) icf_edit_indi_pane_g1_ParamLimits

0x7b30,	// (0x000473ca) icf_edit_indi_pane_g1

0xab40,	// (0x0004a3da) icf_edit_indi_pane_g2_ParamLimits

0xab40,	// (0x0004a3da) icf_edit_indi_pane_g2

0x0001,

0xfef6,	// (0x0004f790) icf_edit_indi_pane_g_ParamLimits

0xfef6,	// (0x0004f790) icf_edit_indi_pane_g

0xab4f,	// (0x0004a3e9) icf_edit_indi_pane_t1

0xaae9,	// (0x0004a383) bg_input_focus_pane_cp042

0x3d3e,	// (0x000435d8) vtchi_button_pane

0xaaf2,	// (0x0004a38c) vtchi_query_pane_t1

0xab00,	// (0x0004a39a) vtchi_query_pane_t2

0xab0e,	// (0x0004a3a8) vtchi_query_pane_t3

0x0002,

0xfee5,	// (0x0004f77f) vtchi_query_pane_t

0x34ac,	// (0x00042d46) bg_button_pane_cp13

0xab1c,	// (0x0004a3b6) vtchi_button_pane_g1

0x3475,	// (0x00042d0f) ituss_sks_pane_g1

0x3480,	// (0x00042d1a) ituss_sks_pane_g2

0x0001,

0xfeec,	// (0x0004f786) ituss_sks_pane_g

0xab24,	// (0x0004a3be) ituss_sks_pane_t1

0xab32,	// (0x0004a3cc) ituss_sks_pane_t2

0x0001,

0xfef1,	// (0x0004f78b) ituss_sks_pane_t

0x7321,	// (0x00046bbb) indicator_nsta_pane_cp_g1

0x732a,	// (0x00046bc4) indicator_nsta_pane_cp_g2

0x7332,	// (0x00046bcc) indicator_nsta_pane_cp_g3

0x733a,	// (0x00046bd4) indicator_nsta_pane_cp_g4

0x7342,	// (0x00046bdc) indicator_nsta_pane_cp_g5

0x7342,	// (0x00046bdc) indicator_nsta_pane_cp_g6

0x0005,

0xfa9a,	// (0x0004f334) indicator_nsta_pane_cp_g

0xf035,	// (0x0004e8cf) cell_graphic2_pane_t2_ParamLimits

0xf035,	// (0x0004e8cf) cell_graphic2_pane_t2

0x0001,

0xfda7,	// (0x0004f641) cell_graphic2_pane_t_ParamLimits

0xfda7,	// (0x0004f641) cell_graphic2_pane_t

0xf06b,	// (0x0004e905) cell_graphic2_control_pane_t1

0xd41b,	// (0x0004ccb5) signal_pane_g3_ParamLimits

0xd41b,	// (0x0004ccb5) signal_pane_g3

0xd42f,	// (0x0004ccc9) signal_pane_g4_ParamLimits

0xd42f,	// (0x0004ccc9) signal_pane_g4

0xa91e,	// (0x0004a1b8) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa91e,	// (0x0004a1b8) cell_ai5_widget_list_row_pane_t3

0xaa48,	// (0x0004a2e2) cell_ituss_key_pane_t1_ParamLimits

0xaa48,	// (0x0004a2e2) cell_ituss_key_pane_t1

0x53f2,	// (0x00044c8c) form_field_data_wide_pane_vc_t2_ParamLimits

0x53f2,	// (0x00044c8c) form_field_data_wide_pane_vc_t2

0x5406,	// (0x00044ca0) form_field_data_wide_pane_vc_t3_ParamLimits

0x5406,	// (0x00044ca0) form_field_data_wide_pane_vc_t3

0x0002,

0xf809,	// (0x0004f0a3) form_field_data_wide_pane_vc_t_ParamLimits

0xf809,	// (0x0004f0a3) form_field_data_wide_pane_vc_t

0x6fe9,	// (0x00046883) form_field_slider_wide_pane_vc_t3_ParamLimits

0x6fe9,	// (0x00046883) form_field_slider_wide_pane_vc_t3

0x70c7,	// (0x00046961) form_field_popup_wide_pane_vc_t2_ParamLimits

0x70c7,	// (0x00046961) form_field_popup_wide_pane_vc_t2

0x70de,	// (0x00046978) form_field_popup_wide_pane_vc_t3_ParamLimits

0x70de,	// (0x00046978) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa89,	// (0x0004f323) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x0004f323) form_field_popup_wide_pane_vc_t

0xcda3,	// (0x0004c63d) aid_fshwr2_btn_pane_ParamLimits

0xcdb4,	// (0x0004c64e) aid_fshwr2_syb_pane_ParamLimits

0xcdc5,	// (0x0004c65f) aid_fshwr2_txt_pane_ParamLimits

0x3e1b,	// (0x000436b5) fshwr2_bg_pane_ParamLimits

0xcdd1,	// (0x0004c66b) fshwr2_func_candi_pane_ParamLimits

0xcdf0,	// (0x0004c68a) fshwr2_hwr_syb_pane_ParamLimits

0xce0b,	// (0x0004c6a5) fshwr2_icf_pane_ParamLimits

0x2467,	// (0x00041d01) list_double_graphic_pane_vc_g4_ParamLimits

0x2467,	// (0x00041d01) list_double_graphic_pane_vc_g4

0x33ac,	// (0x00042c46) cell_ituss_key_pane_g3_ParamLimits

0x33ac,	// (0x00042c46) cell_ituss_key_pane_g3

0x3454,	// (0x00042cee) cell_ituss_key_t5_ParamLimits

0x3454,	// (0x00042cee) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Large

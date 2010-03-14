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

#include "aknlayoutscalable_elaf_pnl4_av_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x000169e7 };

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
0x884d,	// (0x0001f234) Screen

0x8859,	// (0x0001f240) application_window_ParamLimits

0x8859,	// (0x0001f240) application_window

0xbb87,	// (0x0002256e) screen_g1

0x8891,	// (0x0001f278) area_bottom_pane_ParamLimits

0x8891,	// (0x0001f278) area_bottom_pane

0x5801,	// (0x0001c1e8) area_top_pane_ParamLimits

0x5801,	// (0x0001c1e8) area_top_pane

0x5895,	// (0x0001c27c) main_pane_ParamLimits

0x5895,	// (0x0001c27c) main_pane

0xbb91,	// (0x00022578) misc_graphics

0x9957,	// (0x0002033e) battery_pane_ParamLimits

0x9957,	// (0x0002033e) battery_pane

0xd8e3,	// (0x000242ca) bg_status_flat_pane_g8

0xd8eb,	// (0x000242d2) bg_status_flat_pane_g9

0xd018,	// (0x000239ff) context_pane_ParamLimits

0xd018,	// (0x000239ff) context_pane

0x9ac2,	// (0x000204a9) navi_pane_ParamLimits

0x9ac2,	// (0x000204a9) navi_pane

0x9b3a,	// (0x00020521) signal_pane_ParamLimits

0x9b3a,	// (0x00020521) signal_pane

0x0008,

0xf87e,	// (0x00026265) bg_status_flat_pane_g

0x9bca,	// (0x000205b1) status_pane_g1_ParamLimits

0x9bca,	// (0x000205b1) status_pane_g1

0x9be0,	// (0x000205c7) status_pane_g2_ParamLimits

0x9be0,	// (0x000205c7) status_pane_g2

0xd07d,	// (0x00023a64) status_pane_g3_ParamLimits

0xd07d,	// (0x00023a64) status_pane_g3

0x0004,

0xf7b8,	// (0x0002619f) status_pane_g_ParamLimits

0xf7b8,	// (0x0002619f) status_pane_g

0x9bec,	// (0x000205d3) title_pane_ParamLimits

0x9bec,	// (0x000205d3) title_pane

0x9c4f,	// (0x00020636) uni_indicator_pane_ParamLimits

0x9c4f,	// (0x00020636) uni_indicator_pane

0xce43,	// (0x0002382a) bg_list_pane_ParamLimits

0xce43,	// (0x0002382a) bg_list_pane

0x6120,	// (0x0001cb07) find_pane

0x923e,	// (0x0001fc25) listscroll_app_pane_ParamLimits

0x923e,	// (0x0001fc25) listscroll_app_pane

0xce63,	// (0x0002384a) listscroll_form_pane

0x6128,	// (0x0001cb0f) listscroll_gen_pane_ParamLimits

0x6128,	// (0x0001cb0f) listscroll_gen_pane

0xce63,	// (0x0002384a) listscroll_set_pane

0xdaeb,	// (0x000244d2) main_idle_act_pane

0xcc17,	// (0x000235fe) main_idle_trad_pane

0xcc17,	// (0x000235fe) main_list_empty_pane

0xc339,	// (0x00022d20) main_midp_pane

0xce7d,	// (0x00023864) main_pane_g1_ParamLimits

0xce7d,	// (0x00023864) main_pane_g1

0x924a,	// (0x0001fc31) popup_ai_message_window_ParamLimits

0x924a,	// (0x0001fc31) popup_ai_message_window

0x92db,	// (0x0001fcc2) popup_fep_china_uni_window_ParamLimits

0x92db,	// (0x0001fcc2) popup_fep_china_uni_window

0xceaf,	// (0x00023896) popup_fep_japan_candidate_window_ParamLimits

0xceaf,	// (0x00023896) popup_fep_japan_candidate_window

0xcecd,	// (0x000238b4) popup_fep_japan_predictive_window_ParamLimits

0xcecd,	// (0x000238b4) popup_fep_japan_predictive_window

0x9335,	// (0x0001fd1c) popup_find_window

0x9352,	// (0x0001fd39) popup_grid_graphic_window_ParamLimits

0x9352,	// (0x0001fd39) popup_grid_graphic_window

0xcefd,	// (0x000238e4) popup_large_graphic_colour_window

0x93e4,	// (0x0001fdcb) popup_menu_window_ParamLimits

0x93e4,	// (0x0001fdcb) popup_menu_window

0x95b0,	// (0x0001ff97) popup_note_image_window

0x9576,	// (0x0001ff5d) popup_note_wait_window_ParamLimits

0x9576,	// (0x0001ff5d) popup_note_wait_window

0x95c8,	// (0x0001ffaf) popup_note_window_ParamLimits

0x95c8,	// (0x0001ffaf) popup_note_window

0x966e,	// (0x00020055) popup_query_code_window_ParamLimits

0x966e,	// (0x00020055) popup_query_code_window

0xcf31,	// (0x00023918) popup_query_data_code_window_ParamLimits

0xcf31,	// (0x00023918) popup_query_data_code_window

0x96a8,	// (0x0002008f) popup_query_data_window_ParamLimits

0x96a8,	// (0x0002008f) popup_query_data_window

0x971e,	// (0x00020105) popup_query_sat_info_window_ParamLimits

0x971e,	// (0x00020105) popup_query_sat_info_window

0x97b5,	// (0x0002019c) popup_snote_single_graphic_window_ParamLimits

0x97b5,	// (0x0002019c) popup_snote_single_graphic_window

0x97b5,	// (0x0002019c) popup_snote_single_text_window_ParamLimits

0x97b5,	// (0x0002019c) popup_snote_single_text_window

0xcf48,	// (0x0002392f) popup_sub_window_general

0xcf8e,	// (0x00023975) popup_window_general_ParamLimits

0xcf8e,	// (0x00023975) popup_window_general

0xcfa3,	// (0x0002398a) power_save_pane

0x90aa,	// (0x0001fa91) control_pane_g1_ParamLimits

0x90aa,	// (0x0001fa91) control_pane_g1

0x90d3,	// (0x0001faba) control_pane_g2_ParamLimits

0x90d3,	// (0x0001faba) control_pane_g2

0xce1d,	// (0x00023804) control_pane_g3_ParamLimits

0xce1d,	// (0x00023804) control_pane_g3

0x0007,

0xf7a0,	// (0x00026187) control_pane_g_ParamLimits

0xf7a0,	// (0x00026187) control_pane_g

0x9137,	// (0x0001fb1e) control_pane_t1_ParamLimits

0x9137,	// (0x0001fb1e) control_pane_t1

0x9195,	// (0x0001fb7c) control_pane_t2_ParamLimits

0x9195,	// (0x0001fb7c) control_pane_t2

0x0002,

0xf7b1,	// (0x00026198) control_pane_t_ParamLimits

0xf7b1,	// (0x00026198) control_pane_t

0xcd3e,	// (0x00023725) navi_navi_volume_pane_cp1

0xcd47,	// (0x0002372e) status_small_icon_pane

0xcd4f,	// (0x00023736) status_small_pane_g1_ParamLimits

0xcd4f,	// (0x00023736) status_small_pane_g1

0xcd83,	// (0x0002376a) status_small_pane_g2_ParamLimits

0xcd83,	// (0x0002376a) status_small_pane_g2

0xcd8f,	// (0x00023776) status_small_pane_g3_ParamLimits

0xcd8f,	// (0x00023776) status_small_pane_g3

0xcd9b,	// (0x00023782) status_small_pane_g4_ParamLimits

0xcd9b,	// (0x00023782) status_small_pane_g4

0xcda7,	// (0x0002378e) status_small_pane_g5_ParamLimits

0xcda7,	// (0x0002378e) status_small_pane_g5

0xcdb6,	// (0x0002379d) status_small_pane_g6_ParamLimits

0xcdb6,	// (0x0002379d) status_small_pane_g6

0x0007,

0xf78f,	// (0x00026176) status_small_pane_g_ParamLimits

0xf78f,	// (0x00026176) status_small_pane_g

0xcde6,	// (0x000237cd) status_small_pane_t1

0xce09,	// (0x000237f0) status_small_wait_pane_ParamLimits

0xce09,	// (0x000237f0) status_small_wait_pane

0x8f42,	// (0x0001f929) aid_levels_signal_ParamLimits

0x8f42,	// (0x0001f929) aid_levels_signal

0x8f5a,	// (0x0001f941) signal_pane_g1_ParamLimits

0x8f5a,	// (0x0001f941) signal_pane_g1

0x8f75,	// (0x0001f95c) signal_pane_g2_ParamLimits

0x8f75,	// (0x0001f95c) signal_pane_g2

0x0003,

0xf720,	// (0x00026107) signal_pane_g_ParamLimits

0xf720,	// (0x00026107) signal_pane_g

0xc75b,	// (0x00023142) context_pane_g1

0x8a0a,	// (0x0001f3f1) title_pane_g1

0x8a41,	// (0x0001f428) title_pane_t1

0xbba7,	// (0x0002258e) title_pane_t2

0xbbcd,	// (0x000225b4) title_pane_t3

0x0002,

0xf56f,	// (0x00025f56) title_pane_t

0x9c77,	// (0x0002065e) aid_levels_battery_ParamLimits

0x9c77,	// (0x0002065e) aid_levels_battery

0x9c93,	// (0x0002067a) battery_pane_g1_ParamLimits

0x9c93,	// (0x0002067a) battery_pane_g1

0x9cb0,	// (0x00020697) battery_pane_g2_ParamLimits

0x9cb0,	// (0x00020697) battery_pane_g2

0x0001,

0xf7c3,	// (0x000261aa) battery_pane_g_ParamLimits

0xf7c3,	// (0x000261aa) battery_pane_g

0xa066,	// (0x00020a4d) uni_indicator_pane_g1

0xa07b,	// (0x00020a62) uni_indicator_pane_g2

0xe158,	// (0x00024b3f) uni_indicator_pane_g3

0x0005,

0xf926,	// (0x0002630d) uni_indicator_pane_g

0xca87,	// (0x0002346e) navi_icon_pane_ParamLimits

0xca87,	// (0x0002346e) navi_icon_pane

0xc9ce,	// (0x000233b5) navi_midp_pane

0xcaa3,	// (0x0002348a) navi_navi_pane

0xcaad,	// (0x00023494) navi_text_pane_ParamLimits

0xcaad,	// (0x00023494) navi_text_pane

0xbb87,	// (0x0002256e) status_small_wait_pane_g1

0xbea8,	// (0x0002288f) status_small_wait_pane_g2

0x0001,

0xf921,	// (0x00026308) status_small_wait_pane_g

0xdea2,	// (0x00024889) navi_navi_icon_text_pane

0xdeaa,	// (0x00024891) navi_navi_pane_g1_ParamLimits

0xdeaa,	// (0x00024891) navi_navi_pane_g1

0xdebc,	// (0x000248a3) navi_navi_pane_g2_ParamLimits

0xdebc,	// (0x000248a3) navi_navi_pane_g2

0x0001,

0xf8ef,	// (0x000262d6) navi_navi_pane_g_ParamLimits

0xf8ef,	// (0x000262d6) navi_navi_pane_g

0xdece,	// (0x000248b5) navi_navi_tabs_pane

0xded7,	// (0x000248be) navi_navi_text_pane

0xdea2,	// (0x00024889) navi_navi_volume_pane

0xde7e,	// (0x00024865) navi_text_pane_t1

0xde72,	// (0x00024859) navi_icon_pane_g1

0xddd1,	// (0x000247b8) navi_navi_text_pane_t1

0xa028,	// (0x00020a0f) navi_navi_volume_pane_g1

0xa030,	// (0x00020a17) volume_small_pane

0x9f84,	// (0x0002096b) navi_navi_icon_text_pane_g1

0x9f8c,	// (0x00020973) navi_navi_icon_text_pane_t1

0xcaa3,	// (0x0002348a) navi_tabs_2_long_pane

0xcaa3,	// (0x0002348a) navi_tabs_2_pane

0xcaa3,	// (0x0002348a) navi_tabs_3_long_pane

0xcaa3,	// (0x0002348a) navi_tabs_3_pane

0xcaa3,	// (0x0002348a) navi_tabs_4_pane

0x9f64,	// (0x0002094b) tabs_2_active_pane_ParamLimits

0x9f64,	// (0x0002094b) tabs_2_active_pane

0x9f74,	// (0x0002095b) tabs_2_passive_pane_ParamLimits

0x9f74,	// (0x0002095b) tabs_2_passive_pane

0x9f32,	// (0x00020919) tabs_3_active_pane_ParamLimits

0x9f32,	// (0x00020919) tabs_3_active_pane

0x9f42,	// (0x00020929) tabs_3_passive_pane_ParamLimits

0x9f42,	// (0x00020929) tabs_3_passive_pane

0x9f53,	// (0x0002093a) tabs_3_passive_pane_cp_ParamLimits

0x9f53,	// (0x0002093a) tabs_3_passive_pane_cp

0x9eee,	// (0x000208d5) tabs_4_active_pane_ParamLimits

0x9eee,	// (0x000208d5) tabs_4_active_pane

0x9eff,	// (0x000208e6) tabs_4_passive_pane_ParamLimits

0x9eff,	// (0x000208e6) tabs_4_passive_pane

0x9f10,	// (0x000208f7) tabs_4_passive_pane_cp_ParamLimits

0x9f10,	// (0x000208f7) tabs_4_passive_pane_cp

0x9f21,	// (0x00020908) tabs_4_passive_pane_cp2_ParamLimits

0x9f21,	// (0x00020908) tabs_4_passive_pane_cp2

0x9ece,	// (0x000208b5) tabs_2_long_active_pane_ParamLimits

0x9ece,	// (0x000208b5) tabs_2_long_active_pane

0x9ede,	// (0x000208c5) tabs_2_long_passive_pane_ParamLimits

0x9ede,	// (0x000208c5) tabs_2_long_passive_pane

0x9e99,	// (0x00020880) tabs_3_long_active_pane_ParamLimits

0x9e99,	// (0x00020880) tabs_3_long_active_pane

0x9eaa,	// (0x00020891) tabs_3_long_passive_pane_ParamLimits

0x9eaa,	// (0x00020891) tabs_3_long_passive_pane

0x9ebd,	// (0x000208a4) tabs_3_long_passive_pane_cp_ParamLimits

0x9ebd,	// (0x000208a4) tabs_3_long_passive_pane_cp

0x626a,	// (0x0001cc51) volume_small_pane_g1

0x9e48,	// (0x0002082f) volume_small_pane_g2

0x9e51,	// (0x00020838) volume_small_pane_g3

0x9e5a,	// (0x00020841) volume_small_pane_g4

0x9e63,	// (0x0002084a) volume_small_pane_g5

0x9e6c,	// (0x00020853) volume_small_pane_g6

0x9e75,	// (0x0002085c) volume_small_pane_g7

0x9e7e,	// (0x00020865) volume_small_pane_g8

0x9e87,	// (0x0002086e) volume_small_pane_g9

0x9e90,	// (0x00020877) volume_small_pane_g10

0x0009,

0xf8bb,	// (0x000262a2) volume_small_pane_g

0xbbdf,	// (0x000225c6) bg_active_tab_pane_cp2_ParamLimits

0xbbdf,	// (0x000225c6) bg_active_tab_pane_cp2

0x8acd,	// (0x0001f4b4) tabs_3_active_pane_g1

0x8ad5,	// (0x0001f4bc) tabs_3_active_pane_t1

0xbbdf,	// (0x000225c6) bg_passive_tab_pane_cp2_ParamLimits

0xbbdf,	// (0x000225c6) bg_passive_tab_pane_cp2

0x8acd,	// (0x0001f4b4) tabs_3_passive_pane_g1

0x8ad5,	// (0x0001f4bc) tabs_3_passive_pane_t1

0xbbdf,	// (0x000225c6) bg_active_tab_pane_cp3_ParamLimits

0xbbdf,	// (0x000225c6) bg_active_tab_pane_cp3

0x8ae7,	// (0x0001f4ce) tabs_4_active_pane_g1

0x8aef,	// (0x0001f4d6) tabs_4_active_pane_t1

0xbbdf,	// (0x000225c6) bg_passive_tab_pane_cp3_ParamLimits

0xbbdf,	// (0x000225c6) bg_passive_tab_pane_cp3

0x8ae7,	// (0x0001f4ce) tabs_4_1_passive_pane_g1

0x8aef,	// (0x0001f4d6) tabs_4_1_passive_pane_t1

0xc339,	// (0x00022d20) list_highlight_pane_cp2

0xa108,	// (0x00020aef) list_set_pane_ParamLimits

0xa108,	// (0x00020aef) list_set_pane

0xa1a2,	// (0x00020b89) main_pane_set_t1_ParamLimits

0xa1a2,	// (0x00020b89) main_pane_set_t1

0xa1c2,	// (0x00020ba9) main_pane_set_t2_ParamLimits

0xa1c2,	// (0x00020ba9) main_pane_set_t2

0xa1d6,	// (0x00020bbd) main_pane_set_t3_ParamLimits

0xa1d6,	// (0x00020bbd) main_pane_set_t3

0xa1e8,	// (0x00020bcf) main_pane_set_t4_ParamLimits

0xa1e8,	// (0x00020bcf) main_pane_set_t4

0x0003,

0xf98b,	// (0x00026372) main_pane_set_t_ParamLimits

0xf98b,	// (0x00026372) main_pane_set_t

0xa1fa,	// (0x00020be1) setting_code_pane

0xa202,	// (0x00020be9) setting_slider_graphic_pane

0xa202,	// (0x00020be9) setting_slider_pane

0xa202,	// (0x00020be9) setting_text_pane

0xa202,	// (0x00020be9) setting_volume_pane

0x5ac6,	// (0x0001c4ad) volume_set_pane

0xbbed,	// (0x000225d4) bg_set_opt_pane_cp

0x5ace,	// (0x0001c4b5) setting_slider_pane_t1

0x5ae7,	// (0x0001c4ce) setting_slider_pane_t2

0x5b00,	// (0x0001c4e7) setting_slider_pane_t3

0x0002,

0xf576,	// (0x00025f5d) setting_slider_pane_t

0x5b17,	// (0x0001c4fe) slider_set_pane

0xbb91,	// (0x00022578) bg_set_opt_pane_cp2

0xbbfb,	// (0x000225e2) setting_slider_graphic_pane_g1

0x5b2d,	// (0x0001c514) setting_slider_graphic_pane_t1

0x5b3c,	// (0x0001c523) setting_slider_graphic_pane_t2

0x0001,

0xf57d,	// (0x00025f64) setting_slider_graphic_pane_t

0x5b4b,	// (0x0001c532) slider_set_pane_cp

0xbb91,	// (0x00022578) input_focus_pane_cp1

0xe335,	// (0x00024d1c) list_set_text_pane

0xbb87,	// (0x0002256e) setting_text_pane_g1

0xbb91,	// (0x00022578) input_focus_pane_cp2

0xbb87,	// (0x0002256e) setting_code_pane_g1

0xbc04,	// (0x000225eb) setting_code_pane_t1

0x47b1,	// (0x0001b198) set_text_pane_t1_ParamLimits

0x47b1,	// (0x0001b198) set_text_pane_t1

0xc249,	// (0x00022c30) set_opt_bg_pane_g1

0xc251,	// (0x00022c38) set_opt_bg_pane_g2

0xe315,	// (0x00024cfc) set_opt_bg_pane_g3

0xc261,	// (0x00022c48) set_opt_bg_pane_g4

0xc269,	// (0x00022c50) set_opt_bg_pane_g5

0xc271,	// (0x00022c58) set_opt_bg_pane_g6

0xe31d,	// (0x00024d04) set_opt_bg_pane_g7

0xe325,	// (0x00024d0c) set_opt_bg_pane_g8

0xe32d,	// (0x00024d14) set_opt_bg_pane_g9

0x0008,

0xf978,	// (0x0002635f) set_opt_bg_pane_g

0xe308,	// (0x00024cef) slider_set_pane_g1

0x6438,	// (0x0001ce1f) slider_set_pane_g2

0x0006,

0xf969,	// (0x00026350) slider_set_pane_g

0x63d4,	// (0x0001cdbb) volume_set_pane_g1

0x63dc,	// (0x0001cdc3) volume_set_pane_g2

0x63e4,	// (0x0001cdcb) volume_set_pane_g3

0x63ec,	// (0x0001cdd3) volume_set_pane_g4

0x63f4,	// (0x0001cddb) volume_set_pane_g5

0x63fc,	// (0x0001cde3) volume_set_pane_g6

0x6404,	// (0x0001cdeb) volume_set_pane_g7

0x640c,	// (0x0001cdf3) volume_set_pane_g8

0x6414,	// (0x0001cdfb) volume_set_pane_g9

0x641c,	// (0x0001ce03) volume_set_pane_g10

0x0009,

0xf941,	// (0x00026328) volume_set_pane_g

0x8b01,	// (0x0001f4e8) indicator_pane_ParamLimits

0x8b01,	// (0x0001f4e8) indicator_pane

0x8b29,	// (0x0001f510) main_idle_pane_g2_ParamLimits

0x8b29,	// (0x0001f510) main_idle_pane_g2

0x8b61,	// (0x0001f548) main_pane_idle_g1_ParamLimits

0x8b61,	// (0x0001f548) main_pane_idle_g1

0xbc12,	// (0x000225f9) popup_clock_digital_analogue_window_ParamLimits

0xbc12,	// (0x000225f9) popup_clock_digital_analogue_window

0x8b88,	// (0x0001f56f) soft_indicator_pane_ParamLimits

0x8b88,	// (0x0001f56f) soft_indicator_pane

0x8ba2,	// (0x0001f589) wallpaper_pane_ParamLimits

0x8ba2,	// (0x0001f589) wallpaper_pane

0xbb87,	// (0x0002256e) wallpaper_pane_g1

0x8bb4,	// (0x0001f59b) indicator_pane_g1_ParamLimits

0x8bb4,	// (0x0001f59b) indicator_pane_g1

0xe4ab,	// (0x00024e92) navi_navi_icon_text_pane_srt_g1

0xbc40,	// (0x00022627) soft_indicator_pane_t1

0xbc5a,	// (0x00022641) aid_ps_area_pane

0x8bcd,	// (0x0001f5b4) aid_ps_clock_pane

0xbc6b,	// (0x00022652) aid_ps_indicator_pane

0xbc77,	// (0x0002265e) indicator_ps_pane_ParamLimits

0xbc77,	// (0x0002265e) indicator_ps_pane

0xbc86,	// (0x0002266d) power_save_pane_g1_ParamLimits

0xbc86,	// (0x0002266d) power_save_pane_g1

0xbc92,	// (0x00022679) power_save_pane_g2_ParamLimits

0xbc92,	// (0x00022679) power_save_pane_g2

0x56f5,	// (0x0001c0dc) aid_navinavi_width_pane

0xbc5a,	// (0x00022641) aid_ps_area_pane_ParamLimits

0x0001,

0xf582,	// (0x00025f69) power_save_pane_g_ParamLimits

0xf582,	// (0x00025f69) power_save_pane_g

0xbca0,	// (0x00022687) power_save_pane_t1_ParamLimits

0xbca0,	// (0x00022687) power_save_pane_t1

0x8bcd,	// (0x0001f5b4) aid_ps_clock_pane_ParamLimits

0xbc6b,	// (0x00022652) aid_ps_indicator_pane_ParamLimits

0xbcb2,	// (0x00022699) power_save_pane_t4_ParamLimits

0xbcb2,	// (0x00022699) power_save_pane_t4

0x0001,

0xf587,	// (0x00025f6e) power_save_pane_t_ParamLimits

0xf587,	// (0x00025f6e) power_save_pane_t

0xbcdc,	// (0x000226c3) power_save_t3_ParamLimits

0xbcdc,	// (0x000226c3) power_save_t3

0xbcc7,	// (0x000226ae) power_save_t2_ParamLimits

0xbcc7,	// (0x000226ae) power_save_t2

0xbcf1,	// (0x000226d8) indicator_ps_pane_g1

0x8bdb,	// (0x0001f5c2) ai_gene_pane_ParamLimits

0x8bdb,	// (0x0001f5c2) ai_gene_pane

0x8bf2,	// (0x0001f5d9) ai_links_pane_ParamLimits

0x8bf2,	// (0x0001f5d9) ai_links_pane

0x8c0a,	// (0x0001f5f1) indicator_pane_cp1_ParamLimits

0x8c0a,	// (0x0001f5f1) indicator_pane_cp1

0x8c19,	// (0x0001f600) main_pane_idle_g1_cp_ParamLimits

0x8c19,	// (0x0001f600) main_pane_idle_g1_cp

0xbcfa,	// (0x000226e1) popup_ai_links_title_window

0x8c31,	// (0x0001f618) soft_indicator_pane_cp1_ParamLimits

0x8c31,	// (0x0001f618) soft_indicator_pane_cp1

0xe146,	// (0x00024b2d) ai_links_pane_g1

0xe14f,	// (0x00024b36) grid_ai_links_pane

0xa05d,	// (0x00020a44) ai_gene_pane_1

0xe134,	// (0x00024b1b) ai_gene_pane_2

0xe13d,	// (0x00024b24) list_highlight_pane_cp4

0xa039,	// (0x00020a20) cell_ai_link_pane_ParamLimits

0xa039,	// (0x00020a20) cell_ai_link_pane

0xe12c,	// (0x00024b13) cell_ai_link_pane_g1

0xbea8,	// (0x0002288f) cell_ai_link_pane_g2

0x0001,

0xf91c,	// (0x00026303) cell_ai_link_pane_g

0xbb91,	// (0x00022578) grid_highlight_cp2

0xbb91,	// (0x00022578) bg_popup_sub_pane_cp1

0xbd11,	// (0x000226f8) popup_ai_links_title_window_t1

0xe07a,	// (0x00024a61) ai_gene_pane_1_g1_ParamLimits

0xe07a,	// (0x00024a61) ai_gene_pane_1_g1

0xe086,	// (0x00024a6d) ai_gene_pane_1_g2_ParamLimits

0xe086,	// (0x00024a6d) ai_gene_pane_1_g2

0x0001,

0xf912,	// (0x000262f9) ai_gene_pane_1_g_ParamLimits

0xf912,	// (0x000262f9) ai_gene_pane_1_g

0xe093,	// (0x00024a7a) ai_gene_pane_1_t1_ParamLimits

0xe093,	// (0x00024a7a) ai_gene_pane_1_t1

0xe0c7,	// (0x00024aae) grid_ai_soft_ind_pane

0xe065,	// (0x00024a4c) ai_gene_pane_2_t1_ParamLimits

0xe065,	// (0x00024a4c) ai_gene_pane_2_t1

0x8c45,	// (0x0001f62c) main_pane_empty_t1_ParamLimits

0x8c45,	// (0x0001f62c) main_pane_empty_t1

0x8c5d,	// (0x0001f644) main_pane_empty_t2_ParamLimits

0x8c5d,	// (0x0001f644) main_pane_empty_t2

0x8c72,	// (0x0001f659) main_pane_empty_t3_ParamLimits

0x8c72,	// (0x0001f659) main_pane_empty_t3

0x8c84,	// (0x0001f66b) main_pane_empty_t4_ParamLimits

0x8c84,	// (0x0001f66b) main_pane_empty_t4

0x8c96,	// (0x0001f67d) main_pane_empty_t5_ParamLimits

0x8c96,	// (0x0001f67d) main_pane_empty_t5

0x0004,

0xf58c,	// (0x00025f73) main_pane_empty_t_ParamLimits

0xf58c,	// (0x00025f73) main_pane_empty_t

0xc29a,	// (0x00022c81) bg_popup_window_pane_ParamLimits

0xc29a,	// (0x00022c81) bg_popup_window_pane

0xdddf,	// (0x000247c6) find_popup_pane_cp2_ParamLimits

0xdddf,	// (0x000247c6) find_popup_pane_cp2

0xddeb,	// (0x000247d2) heading_pane_ParamLimits

0xddeb,	// (0x000247d2) heading_pane

0xbb91,	// (0x00022578) bg_popup_sub_pane

0x9fa9,	// (0x00020990) bg_popup_window_pane_g1_ParamLimits

0x9fa9,	// (0x00020990) bg_popup_window_pane_g1

0x9fb8,	// (0x0002099f) bg_popup_window_pane_g2_ParamLimits

0x9fb8,	// (0x0002099f) bg_popup_window_pane_g2

0x9fc4,	// (0x000209ab) bg_popup_window_pane_g3_ParamLimits

0x9fc4,	// (0x000209ab) bg_popup_window_pane_g3

0x9fd0,	// (0x000209b7) bg_popup_window_pane_g4_ParamLimits

0x9fd0,	// (0x000209b7) bg_popup_window_pane_g4

0x9fdf,	// (0x000209c6) bg_popup_window_pane_g5_ParamLimits

0x9fdf,	// (0x000209c6) bg_popup_window_pane_g5

0x9fef,	// (0x000209d6) bg_popup_window_pane_g6_ParamLimits

0x9fef,	// (0x000209d6) bg_popup_window_pane_g6

0x9ffb,	// (0x000209e2) bg_popup_window_pane_g7_ParamLimits

0x9ffb,	// (0x000209e2) bg_popup_window_pane_g7

0xa00a,	// (0x000209f1) bg_popup_window_pane_g8_ParamLimits

0xa00a,	// (0x000209f1) bg_popup_window_pane_g8

0xa019,	// (0x00020a00) bg_popup_window_pane_g9_ParamLimits

0xa019,	// (0x00020a00) bg_popup_window_pane_g9

0xddc5,	// (0x000247ac) bg_popup_window_pane_g10_ParamLimits

0xddc5,	// (0x000247ac) bg_popup_window_pane_g10

0x0009,

0xf8da,	// (0x000262c1) bg_popup_window_pane_g_ParamLimits

0xf8da,	// (0x000262c1) bg_popup_window_pane_g

0xdd7c,	// (0x00024763) bg_popup_heading_pane_ParamLimits

0xdd7c,	// (0x00024763) bg_popup_heading_pane

0x64c0,	// (0x0001cea7) tabs_4_passive_pane_cp_srt_ParamLimits

0x64c0,	// (0x0001cea7) tabs_4_passive_pane_cp_srt

0x64d2,	// (0x0001ceb9) tabs_4_passive_pane_srt_ParamLimits

0xdd90,	// (0x00024777) heading_pane_g2

0x64d2,	// (0x0001ceb9) tabs_4_passive_pane_srt

0xd261,	// (0x00023c48) bg_passive_tab_pane_cp3_srt_ParamLimits

0xd261,	// (0x00023c48) bg_passive_tab_pane_cp3_srt

0xdd98,	// (0x0002477f) heading_pane_t1_ParamLimits

0xdd98,	// (0x0002477f) heading_pane_t1

0xddaf,	// (0x00024796) heading_pane_t2_ParamLimits

0xddaf,	// (0x00024796) heading_pane_t2

0x0001,

0xf8d5,	// (0x000262bc) heading_pane_t_ParamLimits

0xf8d5,	// (0x000262bc) heading_pane_t

0xd8ab,	// (0x00024292) bg_popup_heading_pane_g1

0xd93c,	// (0x00024323) bg_popup_heading_pane_g2

0xd946,	// (0x0002432d) bg_popup_heading_pane_g3

0xd950,	// (0x00024337) bg_popup_heading_pane_g4

0xd95a,	// (0x00024341) bg_popup_heading_pane_g5

0xd964,	// (0x0002434b) bg_popup_heading_pane_g6

0xd96c,	// (0x00024353) bg_popup_heading_pane_g7

0xd974,	// (0x0002435b) bg_popup_heading_pane_g8

0xd97e,	// (0x00024365) bg_popup_heading_pane_g9

0x0008,

0xf891,	// (0x00026278) bg_popup_heading_pane_g

0xd171,	// (0x00023b58) bg_popup_sub_pane_g1

0xd179,	// (0x00023b60) bg_popup_sub_pane_g2

0xd181,	// (0x00023b68) bg_popup_sub_pane_g3

0xd189,	// (0x00023b70) bg_popup_sub_pane_g4

0xd191,	// (0x00023b78) bg_popup_sub_pane_g5

0xd199,	// (0x00023b80) bg_popup_sub_pane_g6

0xd1a1,	// (0x00023b88) bg_popup_sub_pane_g7

0xd1a9,	// (0x00023b90) bg_popup_sub_pane_g8

0xd1b1,	// (0x00023b98) bg_popup_sub_pane_g9

0x0008,

0xf86b,	// (0x00026252) bg_popup_sub_pane_g

0xbbdf,	// (0x000225c6) bg_popup_window_pane_cp5_ParamLimits

0xbbdf,	// (0x000225c6) bg_popup_window_pane_cp5

0xbd2e,	// (0x00022715) popup_note_window_g1_ParamLimits

0xbd2e,	// (0x00022715) popup_note_window_g1

0xbd3a,	// (0x00022721) popup_note_window_t1_ParamLimits

0xbd3a,	// (0x00022721) popup_note_window_t1

0xbd4c,	// (0x00022733) popup_note_window_t2_ParamLimits

0xbd4c,	// (0x00022733) popup_note_window_t2

0xbd5e,	// (0x00022745) popup_note_window_t3_ParamLimits

0xbd5e,	// (0x00022745) popup_note_window_t3

0xbd70,	// (0x00022757) popup_note_window_t4_ParamLimits

0xbd70,	// (0x00022757) popup_note_window_t4

0xbd98,	// (0x0002277f) popup_note_window_t5_ParamLimits

0xbd98,	// (0x0002277f) popup_note_window_t5

0x0004,

0xf597,	// (0x00025f7e) popup_note_window_t_ParamLimits

0xf597,	// (0x00025f7e) popup_note_window_t

0xbdbc,	// (0x000227a3) bg_popup_window_pane_cp6_ParamLimits

0xbdbc,	// (0x000227a3) bg_popup_window_pane_cp6

0xd81f,	// (0x00024206) popup_note_image_window_g1_ParamLimits

0xd81f,	// (0x00024206) popup_note_image_window_g1

0xd82b,	// (0x00024212) popup_note_image_window_g2_ParamLimits

0xd82b,	// (0x00024212) popup_note_image_window_g2

0x0001,

0xf85f,	// (0x00026246) popup_note_image_window_g_ParamLimits

0xf85f,	// (0x00026246) popup_note_image_window_g

0xd844,	// (0x0002422b) popup_note_image_window_t1_ParamLimits

0xd844,	// (0x0002422b) popup_note_image_window_t1

0xd85d,	// (0x00024244) popup_note_image_window_t2_ParamLimits

0xd85d,	// (0x00024244) popup_note_image_window_t2

0xd876,	// (0x0002425d) popup_note_image_window_t3_ParamLimits

0xd876,	// (0x0002425d) popup_note_image_window_t3

0x0002,

0xf864,	// (0x0002624b) popup_note_image_window_t_ParamLimits

0xf864,	// (0x0002624b) popup_note_image_window_t

0xd6fc,	// (0x000240e3) bg_popup_window_pane_cp7_ParamLimits

0xd6fc,	// (0x000240e3) bg_popup_window_pane_cp7

0xd72c,	// (0x00024113) popup_note_wait_window_g1_ParamLimits

0xd72c,	// (0x00024113) popup_note_wait_window_g1

0xd738,	// (0x0002411f) popup_note_wait_window_g2_ParamLimits

0xd738,	// (0x0002411f) popup_note_wait_window_g2

0x0002,

0xf84d,	// (0x00026234) popup_note_wait_window_g_ParamLimits

0xf84d,	// (0x00026234) popup_note_wait_window_g

0xd750,	// (0x00024137) popup_note_wait_window_t1_ParamLimits

0xd750,	// (0x00024137) popup_note_wait_window_t1

0xd777,	// (0x0002415e) popup_note_wait_window_t2_ParamLimits

0xd777,	// (0x0002415e) popup_note_wait_window_t2

0xd794,	// (0x0002417b) popup_note_wait_window_t3_ParamLimits

0xd794,	// (0x0002417b) popup_note_wait_window_t3

0xd7a7,	// (0x0002418e) popup_note_wait_window_t4_ParamLimits

0xd7a7,	// (0x0002418e) popup_note_wait_window_t4

0x0004,

0xf854,	// (0x0002623b) popup_note_wait_window_t_ParamLimits

0xf854,	// (0x0002623b) popup_note_wait_window_t

0xd7cc,	// (0x000241b3) wait_bar_pane_ParamLimits

0xd7cc,	// (0x000241b3) wait_bar_pane

0xbb91,	// (0x00022578) wait_anim_pane

0xbb91,	// (0x00022578) wait_border_pane

0xbb87,	// (0x0002256e) wait_anim_pane_g1

0xbb87,	// (0x0002256e) wait_anim_pane_g2

0x0001,

0xf71b,	// (0x00026102) wait_anim_pane_g

0xd6a0,	// (0x00024087) wait_border_pane_g1

0xd6ab,	// (0x00024092) wait_border_pane_g2

0xd6b4,	// (0x0002409b) wait_border_pane_g3

0x0002,

0xf846,	// (0x0002622d) wait_border_pane_g

0xd510,	// (0x00023ef7) bg_popup_window_pane_cp16_ParamLimits

0xd510,	// (0x00023ef7) bg_popup_window_pane_cp16

0xd610,	// (0x00023ff7) indicator_popup_pane_cp4_ParamLimits

0xd610,	// (0x00023ff7) indicator_popup_pane_cp4

0xd624,	// (0x0002400b) popup_query_data_window_t1_ParamLimits

0xd624,	// (0x0002400b) popup_query_data_window_t1

0xd636,	// (0x0002401d) popup_query_data_window_t2_ParamLimits

0xd636,	// (0x0002401d) popup_query_data_window_t2

0xd64f,	// (0x00024036) popup_query_data_window_t3_ParamLimits

0xd64f,	// (0x00024036) popup_query_data_window_t3

0x0002,

0xf83f,	// (0x00026226) popup_query_data_window_t_ParamLimits

0xf83f,	// (0x00026226) popup_query_data_window_t

0xd669,	// (0x00024050) query_popup_data_pane_ParamLimits

0xd669,	// (0x00024050) query_popup_data_pane

0xd67d,	// (0x00024064) query_popup_data_pane_cp1_ParamLimits

0xd67d,	// (0x00024064) query_popup_data_pane_cp1

0xd510,	// (0x00023ef7) bg_popup_window_pane_cp10_ParamLimits

0xd510,	// (0x00023ef7) bg_popup_window_pane_cp10

0xd542,	// (0x00023f29) indicator_popup_pane_ParamLimits

0xd542,	// (0x00023f29) indicator_popup_pane

0xd564,	// (0x00023f4b) popup_query_code_window_t1_ParamLimits

0xd564,	// (0x00023f4b) popup_query_code_window_t1

0xd57e,	// (0x00023f65) popup_query_code_window_t2_ParamLimits

0xd57e,	// (0x00023f65) popup_query_code_window_t2

0xd5c7,	// (0x00023fae) popup_query_code_window_t3_ParamLimits

0xd5c7,	// (0x00023fae) popup_query_code_window_t3

0x0002,

0xf838,	// (0x0002621f) popup_query_code_window_t_ParamLimits

0xf838,	// (0x0002621f) popup_query_code_window_t

0xd5f6,	// (0x00023fdd) query_popup_pane_ParamLimits

0xd5f6,	// (0x00023fdd) query_popup_pane

0xbdbc,	// (0x000227a3) bg_popup_window_pane_cp15_ParamLimits

0xbdbc,	// (0x000227a3) bg_popup_window_pane_cp15

0xbdda,	// (0x000227c1) indicator_popup_pane_cp1_ParamLimits

0xbdda,	// (0x000227c1) indicator_popup_pane_cp1

0xbded,	// (0x000227d4) indicator_popup_pane_cp2_ParamLimits

0xbded,	// (0x000227d4) indicator_popup_pane_cp2

0xbe00,	// (0x000227e7) popup_query_data_code_window_g1_ParamLimits

0xbe00,	// (0x000227e7) popup_query_data_code_window_g1

0xbe13,	// (0x000227fa) popup_query_data_code_window_t1_ParamLimits

0xbe13,	// (0x000227fa) popup_query_data_code_window_t1

0xbe25,	// (0x0002280c) popup_query_data_code_window_t2_ParamLimits

0xbe25,	// (0x0002280c) popup_query_data_code_window_t2

0xbe37,	// (0x0002281e) popup_query_data_code_window_t3_ParamLimits

0xbe37,	// (0x0002281e) popup_query_data_code_window_t3

0xbe4d,	// (0x00022834) popup_query_data_code_window_t4_ParamLimits

0xbe4d,	// (0x00022834) popup_query_data_code_window_t4

0x0003,

0xf5a2,	// (0x00025f89) popup_query_data_code_window_t_ParamLimits

0xf5a2,	// (0x00025f89) popup_query_data_code_window_t

0xca43,	// (0x0002342a) list_single_midp_graphic_pane_g3

0xbe65,	// (0x0002284c) query_popup_data_pane_cp2_ParamLimits

0xbe78,	// (0x0002285f) query_popup_pane_cp2_ParamLimits

0xbe78,	// (0x0002285f) query_popup_pane_cp2

0xbb91,	// (0x00022578) bg_popup_window_pane_cp11

0xd508,	// (0x00023eef) heading_pane_cp5

0xbf06,	// (0x000228ed) listscroll_popup_info_pane

0xbb91,	// (0x00022578) input_focus_pane_cp3

0xbe8b,	// (0x00022872) query_popup_pane_t1

0xbe99,	// (0x00022880) list_popup_info_pane_ParamLimits

0xbe99,	// (0x00022880) list_popup_info_pane

0xbea8,	// (0x0002288f) listscroll_popup_info_pane_g1

0xbeb0,	// (0x00022897) scroll_pane_cp7

0xbeba,	// (0x000228a1) popup_info_list_pane_t1_ParamLimits

0xbeba,	// (0x000228a1) popup_info_list_pane_t1

0xbed4,	// (0x000228bb) popup_info_list_pane_t2_ParamLimits

0xbed4,	// (0x000228bb) popup_info_list_pane_t2

0x0001,

0xf5ab,	// (0x00025f92) popup_info_list_pane_t_ParamLimits

0xf5ab,	// (0x00025f92) popup_info_list_pane_t

0xbb91,	// (0x00022578) bg_popup_window_pane_cp12

0xe4c5,	// (0x00024eac) find_popup_pane

0xbbed,	// (0x000225d4) bg_popup_window_pane_cp3

0xbeee,	// (0x000228d5) heading_pane_cp3

0xbefa,	// (0x000228e1) listscroll_popup_graphic_pane

0xbb91,	// (0x00022578) bg_popup_window_pane_cp4

0x8cf8,	// (0x0001f6df) heading_pane_cp4

0xbf06,	// (0x000228ed) listscroll_popup_colour_pane

0x8d00,	// (0x0001f6e7) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x8d00,	// (0x0001f6e7) cell_large_graphic_colour_none_popup_pane

0x8d14,	// (0x0001f6fb) grid_large_graphic_colour_popup_pane_ParamLimits

0x8d14,	// (0x0001f6fb) grid_large_graphic_colour_popup_pane

0x8d38,	// (0x0001f71f) listscroll_popup_colour_pane_g1_ParamLimits

0x8d38,	// (0x0001f71f) listscroll_popup_colour_pane_g1

0x8d4f,	// (0x0001f736) listscroll_popup_colour_pane_g2_ParamLimits

0x8d4f,	// (0x0001f736) listscroll_popup_colour_pane_g2

0x8d66,	// (0x0001f74d) listscroll_popup_colour_pane_g3_ParamLimits

0x8d66,	// (0x0001f74d) listscroll_popup_colour_pane_g3

0x8d76,	// (0x0001f75d) listscroll_popup_colour_pane_g4_ParamLimits

0x8d76,	// (0x0001f75d) listscroll_popup_colour_pane_g4

0x0003,

0xf5b0,	// (0x00025f97) listscroll_popup_colour_pane_g_ParamLimits

0xf5b0,	// (0x00025f97) listscroll_popup_colour_pane_g

0xbf0e,	// (0x000228f5) scroll_pane_cp6_ParamLimits

0xbf0e,	// (0x000228f5) scroll_pane_cp6

0x8d85,	// (0x0001f76c) cell_large_graphic_colour_popup_pane_ParamLimits

0x8d85,	// (0x0001f76c) cell_large_graphic_colour_popup_pane

0xbf20,	// (0x00022907) cell_large_graphic_colour_none_popup_pane_t1

0xbb91,	// (0x00022578) grid_highlight_pane_cp5

0xbf2f,	// (0x00022916) cell_large_graphic_colour_popup_pane_g1

0xbf37,	// (0x0002291e) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5b9,	// (0x00025fa0) cell_large_graphic_colour_popup_pane_g

0xbf3f,	// (0x00022926) cell_large_graphic_colour_popup_pane_g2_copy1

0xbf48,	// (0x0002292f) grid_highlight_pane_cp4

0xbf50,	// (0x00022937) bg_popup_window_pane_cp8_ParamLimits

0xbf50,	// (0x00022937) bg_popup_window_pane_cp8

0xbf6b,	// (0x00022952) popup_snote_single_text_window_g1_ParamLimits

0xbf6b,	// (0x00022952) popup_snote_single_text_window_g1

0xbf7d,	// (0x00022964) popup_snote_single_text_window_t1_ParamLimits

0xbf7d,	// (0x00022964) popup_snote_single_text_window_t1

0xbf90,	// (0x00022977) popup_snote_single_text_window_t2_ParamLimits

0xbf90,	// (0x00022977) popup_snote_single_text_window_t2

0xbfa3,	// (0x0002298a) popup_snote_single_text_window_t3_ParamLimits

0xbfa3,	// (0x0002298a) popup_snote_single_text_window_t3

0xbfdc,	// (0x000229c3) popup_snote_single_text_window_t4_ParamLimits

0xbfdc,	// (0x000229c3) popup_snote_single_text_window_t4

0xc010,	// (0x000229f7) popup_snote_single_text_window_t5_ParamLimits

0xc010,	// (0x000229f7) popup_snote_single_text_window_t5

0x0004,

0xf5be,	// (0x00025fa5) popup_snote_single_text_window_t_ParamLimits

0xf5be,	// (0x00025fa5) popup_snote_single_text_window_t

0xc03f,	// (0x00022a26) bg_popup_window_pane_cp9_ParamLimits

0xc03f,	// (0x00022a26) bg_popup_window_pane_cp9

0xbf6b,	// (0x00022952) popup_snote_single_graphic_window_g1_ParamLimits

0xbf6b,	// (0x00022952) popup_snote_single_graphic_window_g1

0xc04d,	// (0x00022a34) popup_snote_single_graphic_window_g2_ParamLimits

0xc04d,	// (0x00022a34) popup_snote_single_graphic_window_g2

0x0001,

0xf5c9,	// (0x00025fb0) popup_snote_single_graphic_window_g_ParamLimits

0xf5c9,	// (0x00025fb0) popup_snote_single_graphic_window_g

0xc059,	// (0x00022a40) popup_snote_single_graphic_window_t1_ParamLimits

0xc059,	// (0x00022a40) popup_snote_single_graphic_window_t1

0xc06c,	// (0x00022a53) popup_snote_single_graphic_window_t2_ParamLimits

0xc06c,	// (0x00022a53) popup_snote_single_graphic_window_t2

0xc07f,	// (0x00022a66) popup_snote_single_graphic_window_t3_ParamLimits

0xc07f,	// (0x00022a66) popup_snote_single_graphic_window_t3

0xc0b8,	// (0x00022a9f) popup_snote_single_graphic_window_t4_ParamLimits

0xc0b8,	// (0x00022a9f) popup_snote_single_graphic_window_t4

0xc0ec,	// (0x00022ad3) popup_snote_single_graphic_window_t5_ParamLimits

0xc0ec,	// (0x00022ad3) popup_snote_single_graphic_window_t5

0x0004,

0xf5ce,	// (0x00025fb5) popup_snote_single_graphic_window_t_ParamLimits

0xf5ce,	// (0x00025fb5) popup_snote_single_graphic_window_t

0xe449,	// (0x00024e30) grid_graphic_popup_pane_ParamLimits

0xe449,	// (0x00024e30) grid_graphic_popup_pane

0xe475,	// (0x00024e5c) listscroll_popup_graphic_pane_g1_ParamLimits

0xe475,	// (0x00024e5c) listscroll_popup_graphic_pane_g1

0xa32e,	// (0x00020d15) listscroll_popup_graphic_pane_g2_ParamLimits

0xa32e,	// (0x00020d15) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b5,	// (0x0002639c) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b5,	// (0x0002639c) listscroll_popup_graphic_pane_g

0xe3b7,	// (0x00024d9e) scroll_pane_cp5

0xa2f1,	// (0x00020cd8) cell_graphic_popup_pane_ParamLimits

0xa2f1,	// (0x00020cd8) cell_graphic_popup_pane

0xe414,	// (0x00024dfb) cell_graphic_popup_pane_g1

0xe41c,	// (0x00024e03) cell_graphic_popup_pane_g2

0xbf3f,	// (0x00022926) cell_graphic_popup_pane_g3

0x0002,

0xf9ae,	// (0x00026395) cell_graphic_popup_pane_g

0xe425,	// (0x00024e0c) cell_graphic_popup_pane_t2

0xbf48,	// (0x0002292f) grid_highlight_pane_cp3

0xc12d,	// (0x00022b14) list_gen_pane_ParamLimits

0xc12d,	// (0x00022b14) list_gen_pane

0xc155,	// (0x00022b3c) scroll_pane

0xa2ac,	// (0x00020c93) bg_list_pane_g1_ParamLimits

0xa2ac,	// (0x00020c93) bg_list_pane_g1

0xe3c3,	// (0x00024daa) bg_list_pane_g2_ParamLimits

0xe3c3,	// (0x00024daa) bg_list_pane_g2

0xe3d6,	// (0x00024dbd) bg_list_pane_g3_ParamLimits

0xe3d6,	// (0x00024dbd) bg_list_pane_g3

0xe3e8,	// (0x00024dcf) bg_list_pane_g4_ParamLimits

0xe3e8,	// (0x00024dcf) bg_list_pane_g4

0xa2c7,	// (0x00020cae) bg_list_pane_g5_ParamLimits

0xa2c7,	// (0x00020cae) bg_list_pane_g5

0x0004,

0xf9a3,	// (0x0002638a) bg_list_pane_g_ParamLimits

0xf9a3,	// (0x0002638a) bg_list_pane_g

0xa235,	// (0x00020c1c) list_double2_graphic_large_graphic_pane_ParamLimits

0xa235,	// (0x00020c1c) list_double2_graphic_large_graphic_pane

0xa235,	// (0x00020c1c) list_double2_graphic_pane_ParamLimits

0xa235,	// (0x00020c1c) list_double2_graphic_pane

0xa235,	// (0x00020c1c) list_double2_large_graphic_pane_ParamLimits

0xa235,	// (0x00020c1c) list_double2_large_graphic_pane

0xa248,	// (0x00020c2f) list_double2_pane_ParamLimits

0xa248,	// (0x00020c2f) list_double2_pane

0xa235,	// (0x00020c1c) list_double_graphic_heading_pane_ParamLimits

0xa235,	// (0x00020c1c) list_double_graphic_heading_pane

0xa235,	// (0x00020c1c) list_double_graphic_pane_ParamLimits

0xa235,	// (0x00020c1c) list_double_graphic_pane

0xa235,	// (0x00020c1c) list_double_heading_pane_ParamLimits

0xa235,	// (0x00020c1c) list_double_heading_pane

0xa235,	// (0x00020c1c) list_double_large_graphic_pane_ParamLimits

0xa235,	// (0x00020c1c) list_double_large_graphic_pane

0xa235,	// (0x00020c1c) list_double_number_pane_ParamLimits

0xa235,	// (0x00020c1c) list_double_number_pane

0xa235,	// (0x00020c1c) list_double_pane_ParamLimits

0xa235,	// (0x00020c1c) list_double_pane

0xa235,	// (0x00020c1c) list_double_time_pane_ParamLimits

0xa235,	// (0x00020c1c) list_double_time_pane

0xa235,	// (0x00020c1c) list_setting_number_pane_ParamLimits

0xa235,	// (0x00020c1c) list_setting_number_pane

0xa235,	// (0x00020c1c) list_setting_pane_ParamLimits

0xa235,	// (0x00020c1c) list_setting_pane

0xa25c,	// (0x00020c43) list_single_2graphic_pane_ParamLimits

0xa25c,	// (0x00020c43) list_single_2graphic_pane

0xa25c,	// (0x00020c43) list_single_graphic_heading_pane_ParamLimits

0xa25c,	// (0x00020c43) list_single_graphic_heading_pane

0xa25c,	// (0x00020c43) list_single_graphic_pane_ParamLimits

0xa25c,	// (0x00020c43) list_single_graphic_pane

0xa25c,	// (0x00020c43) list_single_heading_pane_ParamLimits

0xa25c,	// (0x00020c43) list_single_heading_pane

0xa248,	// (0x00020c2f) list_single_large_graphic_pane_ParamLimits

0xa248,	// (0x00020c2f) list_single_large_graphic_pane

0xa25c,	// (0x00020c43) list_single_number_heading_pane_ParamLimits

0xa25c,	// (0x00020c43) list_single_number_heading_pane

0xa25c,	// (0x00020c43) list_single_number_pane_ParamLimits

0xa25c,	// (0x00020c43) list_single_number_pane

0xa25c,	// (0x00020c43) list_single_pane_ParamLimits

0xa25c,	// (0x00020c43) list_single_pane

0xbb91,	// (0x00022578) list_highlight_pane_cp1

0x47d7,	// (0x0001b1be) list_single_pane_g1_ParamLimits

0x47d7,	// (0x0001b1be) list_single_pane_g1

0x47e3,	// (0x0001b1ca) list_single_pane_g2_ParamLimits

0x47e3,	// (0x0001b1ca) list_single_pane_g2

0x0001,

0xf5e0,	// (0x00025fc7) list_single_pane_g_ParamLimits

0xf5e0,	// (0x00025fc7) list_single_pane_g

0x5018,	// (0x0001b9ff) list_single_pane_t1_ParamLimits

0x5018,	// (0x0001b9ff) list_single_pane_t1

0x47d7,	// (0x0001b1be) list_single_number_pane_g1_ParamLimits

0x47d7,	// (0x0001b1be) list_single_number_pane_g1

0x47e3,	// (0x0001b1ca) list_single_number_pane_g2_ParamLimits

0x47e3,	// (0x0001b1ca) list_single_number_pane_g2

0x0001,

0xf5e0,	// (0x00025fc7) list_single_number_pane_g_ParamLimits

0xf5e0,	// (0x00025fc7) list_single_number_pane_g

0x4f4c,	// (0x0001b933) list_single_number_pane_t1_ParamLimits

0x4f4c,	// (0x0001b933) list_single_number_pane_t1

0x4fd8,	// (0x0001b9bf) list_single_number_pane_t2_ParamLimits

0x4fd8,	// (0x0001b9bf) list_single_number_pane_t2

0x0001,

0xf964,	// (0x0002634b) list_single_number_pane_t_ParamLimits

0xf964,	// (0x0002634b) list_single_number_pane_t

0x47cb,	// (0x0001b1b2) list_single_graphic_pane_g1_ParamLimits

0x47cb,	// (0x0001b1b2) list_single_graphic_pane_g1

0x47d7,	// (0x0001b1be) list_single_graphic_pane_g2_ParamLimits

0x47d7,	// (0x0001b1be) list_single_graphic_pane_g2

0x47e3,	// (0x0001b1ca) list_single_graphic_pane_g3_ParamLimits

0x47e3,	// (0x0001b1ca) list_single_graphic_pane_g3

0x0002,

0xf5d9,	// (0x00025fc0) list_single_graphic_pane_g_ParamLimits

0xf5d9,	// (0x00025fc0) list_single_graphic_pane_g

0x47ef,	// (0x0001b1d6) list_single_graphic_pane_t1_ParamLimits

0x47ef,	// (0x0001b1d6) list_single_graphic_pane_t1

0x47d7,	// (0x0001b1be) list_single_heading_pane_g1_ParamLimits

0x47d7,	// (0x0001b1be) list_single_heading_pane_g1

0x47e3,	// (0x0001b1ca) list_single_heading_pane_g2_ParamLimits

0x47e3,	// (0x0001b1ca) list_single_heading_pane_g2

0x0001,

0xf5e0,	// (0x00025fc7) list_single_heading_pane_g_ParamLimits

0xf5e0,	// (0x00025fc7) list_single_heading_pane_g

0x4805,	// (0x0001b1ec) list_single_heading_pane_t1_ParamLimits

0x4805,	// (0x0001b1ec) list_single_heading_pane_t1

0x481b,	// (0x0001b202) list_single_heading_pane_t2_ParamLimits

0x481b,	// (0x0001b202) list_single_heading_pane_t2

0x0001,

0xf5e5,	// (0x00025fcc) list_single_heading_pane_t_ParamLimits

0xf5e5,	// (0x00025fcc) list_single_heading_pane_t

0x47d7,	// (0x0001b1be) list_single_number_heading_pane_g1_ParamLimits

0x47d7,	// (0x0001b1be) list_single_number_heading_pane_g1

0x47e3,	// (0x0001b1ca) list_single_number_heading_pane_g2_ParamLimits

0x47e3,	// (0x0001b1ca) list_single_number_heading_pane_g2

0x0001,

0xf5e0,	// (0x00025fc7) list_single_number_heading_pane_g_ParamLimits

0xf5e0,	// (0x00025fc7) list_single_number_heading_pane_g

0x4805,	// (0x0001b1ec) list_single_number_heading_pane_t1_ParamLimits

0x4805,	// (0x0001b1ec) list_single_number_heading_pane_t1

0x482d,	// (0x0001b214) list_single_number_heading_pane_t2_ParamLimits

0x482d,	// (0x0001b214) list_single_number_heading_pane_t2

0x483f,	// (0x0001b226) list_single_number_heading_pane_t3_ParamLimits

0x483f,	// (0x0001b226) list_single_number_heading_pane_t3

0x0002,

0xf5ea,	// (0x00025fd1) list_single_number_heading_pane_t_ParamLimits

0xf5ea,	// (0x00025fd1) list_single_number_heading_pane_t

0x4851,	// (0x0001b238) list_single_graphic_heading_pane_g1_ParamLimits

0x4851,	// (0x0001b238) list_single_graphic_heading_pane_g1

0x8188,	// (0x0001eb6f) list_single_graphic_heading_pane_g4_ParamLimits

0x8188,	// (0x0001eb6f) list_single_graphic_heading_pane_g4

0x47e3,	// (0x0001b1ca) list_single_graphic_heading_pane_g5_ParamLimits

0x47e3,	// (0x0001b1ca) list_single_graphic_heading_pane_g5

0x0002,

0xf5f1,	// (0x00025fd8) list_single_graphic_heading_pane_g_ParamLimits

0xf5f1,	// (0x00025fd8) list_single_graphic_heading_pane_g

0x4805,	// (0x0001b1ec) list_single_graphic_heading_pane_t1_ParamLimits

0x4805,	// (0x0001b1ec) list_single_graphic_heading_pane_t1

0x486e,	// (0x0001b255) list_single_graphic_heading_pane_t2_ParamLimits

0x486e,	// (0x0001b255) list_single_graphic_heading_pane_t2

0x0001,

0xf5f8,	// (0x00025fdf) list_single_graphic_heading_pane_t_ParamLimits

0xf5f8,	// (0x00025fdf) list_single_graphic_heading_pane_t

0x5149,	// (0x0001bb30) list_single_large_graphic_pane_g1_ParamLimits

0x5149,	// (0x0001bb30) list_single_large_graphic_pane_g1

0x5155,	// (0x0001bb3c) list_single_large_graphic_pane_g2_ParamLimits

0x5155,	// (0x0001bb3c) list_single_large_graphic_pane_g2

0x5161,	// (0x0001bb48) list_single_large_graphic_pane_g3_ParamLimits

0x5161,	// (0x0001bb48) list_single_large_graphic_pane_g3

0x0002,

0xf5fd,	// (0x00025fe4) list_single_large_graphic_pane_g_ParamLimits

0xf5fd,	// (0x00025fe4) list_single_large_graphic_pane_g

0xd6ab,	// (0x00024092) wait_border_pane_g2_copy1

0x8199,	// (0x0001eb80) list_single_large_graphic_pane_g4_cp2

0x516d,	// (0x0001bb54) list_single_large_graphic_pane_t1_ParamLimits

0x516d,	// (0x0001bb54) list_single_large_graphic_pane_t1

0x81a1,	// (0x0001eb88) list_double_pane_g1_ParamLimits

0x81a1,	// (0x0001eb88) list_double_pane_g1

0x81ad,	// (0x0001eb94) list_double_pane_g2_ParamLimits

0x81ad,	// (0x0001eb94) list_double_pane_g2

0x0001,

0xf604,	// (0x00025feb) list_double_pane_g_ParamLimits

0xf604,	// (0x00025feb) list_double_pane_g

0x81b9,	// (0x0001eba0) list_double_pane_t1_ParamLimits

0x81b9,	// (0x0001eba0) list_double_pane_t1

0x81cf,	// (0x0001ebb6) list_double_pane_t2_ParamLimits

0x81cf,	// (0x0001ebb6) list_double_pane_t2

0x0001,

0xf609,	// (0x00025ff0) list_double_pane_t_ParamLimits

0xf609,	// (0x00025ff0) list_double_pane_t

0x81e1,	// (0x0001ebc8) list_double2_pane_g1_ParamLimits

0x81e1,	// (0x0001ebc8) list_double2_pane_g1

0x4aa7,	// (0x0001b48e) list_double2_pane_g2_ParamLimits

0x4aa7,	// (0x0001b48e) list_double2_pane_g2

0x0001,

0xf60e,	// (0x00025ff5) list_double2_pane_g_ParamLimits

0xf60e,	// (0x00025ff5) list_double2_pane_g

0x81f2,	// (0x0001ebd9) list_double2_pane_t1_ParamLimits

0x81f2,	// (0x0001ebd9) list_double2_pane_t1

0x8208,	// (0x0001ebef) list_double2_pane_t2_ParamLimits

0x8208,	// (0x0001ebef) list_double2_pane_t2

0x0001,

0xf613,	// (0x00025ffa) list_double2_pane_t_ParamLimits

0xf613,	// (0x00025ffa) list_double2_pane_t

0x81a1,	// (0x0001eb88) list_double_number_pane_g1_ParamLimits

0x81a1,	// (0x0001eb88) list_double_number_pane_g1

0x81ad,	// (0x0001eb94) list_double_number_pane_g2_ParamLimits

0x81ad,	// (0x0001eb94) list_double_number_pane_g2

0x0001,

0xf604,	// (0x00025feb) list_double_number_pane_g_ParamLimits

0xf604,	// (0x00025feb) list_double_number_pane_g

0x821a,	// (0x0001ec01) list_double_number_pane_t1_ParamLimits

0x821a,	// (0x0001ec01) list_double_number_pane_t1

0x822c,	// (0x0001ec13) list_double_number_pane_t2_ParamLimits

0x822c,	// (0x0001ec13) list_double_number_pane_t2

0x8242,	// (0x0001ec29) list_double_number_pane_t3_ParamLimits

0x8242,	// (0x0001ec29) list_double_number_pane_t3

0x0002,

0xf618,	// (0x00025fff) list_double_number_pane_t_ParamLimits

0xf618,	// (0x00025fff) list_double_number_pane_t

0x8254,	// (0x0001ec3b) list_double_graphic_pane_g1_ParamLimits

0x8254,	// (0x0001ec3b) list_double_graphic_pane_g1

0x8260,	// (0x0001ec47) list_double_graphic_pane_g2_ParamLimits

0x8260,	// (0x0001ec47) list_double_graphic_pane_g2

0x826f,	// (0x0001ec56) list_double_graphic_pane_g3_ParamLimits

0x826f,	// (0x0001ec56) list_double_graphic_pane_g3

0x0003,

0xf61f,	// (0x00026006) list_double_graphic_pane_g_ParamLimits

0xf61f,	// (0x00026006) list_double_graphic_pane_g

0x8287,	// (0x0001ec6e) list_double_graphic_pane_t1_ParamLimits

0x8287,	// (0x0001ec6e) list_double_graphic_pane_t1

0x829d,	// (0x0001ec84) list_double_graphic_pane_t2_ParamLimits

0x829d,	// (0x0001ec84) list_double_graphic_pane_t2

0x0001,

0xf628,	// (0x0002600f) list_double_graphic_pane_t_ParamLimits

0xf628,	// (0x0002600f) list_double_graphic_pane_t

0x8254,	// (0x0001ec3b) list_double2_graphic_pane_g1_ParamLimits

0x8254,	// (0x0001ec3b) list_double2_graphic_pane_g1

0x82af,	// (0x0001ec96) list_double2_graphic_pane_g2_ParamLimits

0x82af,	// (0x0001ec96) list_double2_graphic_pane_g2

0x82bb,	// (0x0001eca2) list_double2_graphic_pane_g3_ParamLimits

0x82bb,	// (0x0001eca2) list_double2_graphic_pane_g3

0x0002,

0xf62d,	// (0x00026014) list_double2_graphic_pane_g_ParamLimits

0xf62d,	// (0x00026014) list_double2_graphic_pane_g

0x822c,	// (0x0001ec13) list_double2_graphic_pane_t1_ParamLimits

0x822c,	// (0x0001ec13) list_double2_graphic_pane_t1

0x82c7,	// (0x0001ecae) list_double2_graphic_pane_t2_ParamLimits

0x82c7,	// (0x0001ecae) list_double2_graphic_pane_t2

0x0001,

0xf634,	// (0x0002601b) list_double2_graphic_pane_t_ParamLimits

0xf634,	// (0x0002601b) list_double2_graphic_pane_t

0x82d9,	// (0x0001ecc0) list_double_large_graphic_pane_g1_ParamLimits

0x82d9,	// (0x0001ecc0) list_double_large_graphic_pane_g1

0x8304,	// (0x0001eceb) list_double_large_graphic_pane_g2_ParamLimits

0x8304,	// (0x0001eceb) list_double_large_graphic_pane_g2

0x81ad,	// (0x0001eb94) list_double_large_graphic_pane_g3_ParamLimits

0x81ad,	// (0x0001eb94) list_double_large_graphic_pane_g3

0x8315,	// (0x0001ecfc) list_double_large_graphic_pane_g4_ParamLimits

0x8315,	// (0x0001ecfc) list_double_large_graphic_pane_g4

0x0004,

0xf639,	// (0x00026020) list_double_large_graphic_pane_g_ParamLimits

0xf639,	// (0x00026020) list_double_large_graphic_pane_g

0x8327,	// (0x0001ed0e) list_double_large_graphic_pane_t1_ParamLimits

0x8327,	// (0x0001ed0e) list_double_large_graphic_pane_t1

0x8340,	// (0x0001ed27) list_double_large_graphic_pane_t2_ParamLimits

0x8340,	// (0x0001ed27) list_double_large_graphic_pane_t2

0x0001,

0xf644,	// (0x0002602b) list_double_large_graphic_pane_t_ParamLimits

0xf644,	// (0x0002602b) list_double_large_graphic_pane_t

0x8352,	// (0x0001ed39) list_double2_large_graphic_pane_g1_ParamLimits

0x8352,	// (0x0001ed39) list_double2_large_graphic_pane_g1

0x8304,	// (0x0001eceb) list_double2_large_graphic_pane_g2_ParamLimits

0x8304,	// (0x0001eceb) list_double2_large_graphic_pane_g2

0x81ad,	// (0x0001eb94) list_double2_large_graphic_pane_g3_ParamLimits

0x81ad,	// (0x0001eb94) list_double2_large_graphic_pane_g3

0x0002,

0xf649,	// (0x00026030) list_double2_large_graphic_pane_g_ParamLimits

0xf649,	// (0x00026030) list_double2_large_graphic_pane_g

0x835e,	// (0x0001ed45) list_double2_large_graphic_pane_t1_ParamLimits

0x835e,	// (0x0001ed45) list_double2_large_graphic_pane_t1

0x8374,	// (0x0001ed5b) list_double2_large_graphic_pane_t2_ParamLimits

0x8374,	// (0x0001ed5b) list_double2_large_graphic_pane_t2

0x0001,

0xf650,	// (0x00026037) list_double2_large_graphic_pane_t_ParamLimits

0xf650,	// (0x00026037) list_double2_large_graphic_pane_t

0x8386,	// (0x0001ed6d) list_double_heading_pane_g1_ParamLimits

0x8386,	// (0x0001ed6d) list_double_heading_pane_g1

0x48ce,	// (0x0001b2b5) list_double_heading_pane_g2_ParamLimits

0x48ce,	// (0x0001b2b5) list_double_heading_pane_g2

0x0001,

0xf655,	// (0x0002603c) list_double_heading_pane_g_ParamLimits

0xf655,	// (0x0002603c) list_double_heading_pane_g

0x8397,	// (0x0001ed7e) list_double_heading_pane_t1_ParamLimits

0x8397,	// (0x0001ed7e) list_double_heading_pane_t1

0x83ad,	// (0x0001ed94) list_double_heading_pane_t2_ParamLimits

0x83ad,	// (0x0001ed94) list_double_heading_pane_t2

0x0001,

0xf65a,	// (0x00026041) list_double_heading_pane_t_ParamLimits

0xf65a,	// (0x00026041) list_double_heading_pane_t

0x495f,	// (0x0001b346) list_double_graphic_heading_pane_g1_ParamLimits

0x495f,	// (0x0001b346) list_double_graphic_heading_pane_g1

0x8386,	// (0x0001ed6d) list_double_graphic_heading_pane_g2_ParamLimits

0x8386,	// (0x0001ed6d) list_double_graphic_heading_pane_g2

0x48ce,	// (0x0001b2b5) list_double_graphic_heading_pane_g3_ParamLimits

0x48ce,	// (0x0001b2b5) list_double_graphic_heading_pane_g3

0x0002,

0xf65f,	// (0x00026046) list_double_graphic_heading_pane_g_ParamLimits

0xf65f,	// (0x00026046) list_double_graphic_heading_pane_g

0x83bf,	// (0x0001eda6) list_double_graphic_heading_pane_t1_ParamLimits

0x83bf,	// (0x0001eda6) list_double_graphic_heading_pane_t1

0x82c7,	// (0x0001ecae) list_double_graphic_heading_pane_t2_ParamLimits

0x82c7,	// (0x0001ecae) list_double_graphic_heading_pane_t2

0x0001,

0xf666,	// (0x0002604d) list_double_graphic_heading_pane_t_ParamLimits

0xf666,	// (0x0002604d) list_double_graphic_heading_pane_t

0x8304,	// (0x0001eceb) list_double_time_pane_g1_ParamLimits

0x8304,	// (0x0001eceb) list_double_time_pane_g1

0x81ad,	// (0x0001eb94) list_double_time_pane_g2_ParamLimits

0x81ad,	// (0x0001eb94) list_double_time_pane_g2

0x0001,

0xf66b,	// (0x00026052) list_double_time_pane_g_ParamLimits

0xf66b,	// (0x00026052) list_double_time_pane_g

0x835e,	// (0x0001ed45) list_double_time_pane_t1_ParamLimits

0x835e,	// (0x0001ed45) list_double_time_pane_t1

0x83d5,	// (0x0001edbc) list_double_time_pane_t2_ParamLimits

0x83d5,	// (0x0001edbc) list_double_time_pane_t2

0x83e7,	// (0x0001edce) list_double_time_pane_t3_ParamLimits

0x83e7,	// (0x0001edce) list_double_time_pane_t3

0x83f9,	// (0x0001ede0) list_double_time_pane_t4_ParamLimits

0x83f9,	// (0x0001ede0) list_double_time_pane_t4

0x0003,

0xf670,	// (0x00026057) list_double_time_pane_t_ParamLimits

0xf670,	// (0x00026057) list_double_time_pane_t

0x49ba,	// (0x0001b3a1) list_setting_pane_g1_ParamLimits

0x49ba,	// (0x0001b3a1) list_setting_pane_g1

0x49c6,	// (0x0001b3ad) list_setting_pane_g2_ParamLimits

0x49c6,	// (0x0001b3ad) list_setting_pane_g2

0x0001,

0xf679,	// (0x00026060) list_setting_pane_g_ParamLimits

0xf679,	// (0x00026060) list_setting_pane_g

0x840b,	// (0x0001edf2) list_setting_pane_t1_ParamLimits

0x840b,	// (0x0001edf2) list_setting_pane_t1

0x8425,	// (0x0001ee0c) list_setting_pane_t2_ParamLimits

0x8425,	// (0x0001ee0c) list_setting_pane_t2

0x0002,

0xf67e,	// (0x00026065) list_setting_pane_t_ParamLimits

0xf67e,	// (0x00026065) list_setting_pane_t

0x8462,	// (0x0001ee49) set_value_pane_cp_ParamLimits

0x8462,	// (0x0001ee49) set_value_pane_cp

0x846e,	// (0x0001ee55) list_setting_number_pane_g1_ParamLimits

0x846e,	// (0x0001ee55) list_setting_number_pane_g1

0x847a,	// (0x0001ee61) list_setting_number_pane_g2_ParamLimits

0x847a,	// (0x0001ee61) list_setting_number_pane_g2

0x0001,

0xf685,	// (0x0002606c) list_setting_number_pane_g_ParamLimits

0xf685,	// (0x0002606c) list_setting_number_pane_g

0x8486,	// (0x0001ee6d) list_setting_number_pane_t1_ParamLimits

0x8486,	// (0x0001ee6d) list_setting_number_pane_t1

0x849f,	// (0x0001ee86) list_setting_number_pane_t2_ParamLimits

0x849f,	// (0x0001ee86) list_setting_number_pane_t2

0x84b9,	// (0x0001eea0) list_setting_number_pane_t3_ParamLimits

0x84b9,	// (0x0001eea0) list_setting_number_pane_t3

0x0003,

0xf68a,	// (0x00026071) list_setting_number_pane_t_ParamLimits

0xf68a,	// (0x00026071) list_setting_number_pane_t

0x8462,	// (0x0001ee49) set_value_pane_ParamLimits

0x8462,	// (0x0001ee49) set_value_pane

0xc189,	// (0x00022b70) bg_set_opt_pane_ParamLimits

0xc189,	// (0x00022b70) bg_set_opt_pane

0x4c13,	// (0x0001b5fa) set_value_pane_t1

0xc1aa,	// (0x00022b91) slider_set_pane_cp3

0xc1b3,	// (0x00022b9a) volume_small_pane_cp

0xc1bc,	// (0x00022ba3) list_form_gen_pane

0xc1c5,	// (0x00022bac) scroll_pane_cp8

0x84fc,	// (0x0001eee3) form_field_data_pane_ParamLimits

0x84fc,	// (0x0001eee3) form_field_data_pane

0x8513,	// (0x0001eefa) form_field_data_wide_pane_ParamLimits

0x8513,	// (0x0001eefa) form_field_data_wide_pane

0x8533,	// (0x0001ef1a) form_field_popup_pane_ParamLimits

0x8533,	// (0x0001ef1a) form_field_popup_pane

0x8551,	// (0x0001ef38) form_field_popup_wide_pane_ParamLimits

0x8551,	// (0x0001ef38) form_field_popup_wide_pane

0x4ca3,	// (0x0001b68a) form_field_slider_pane_ParamLimits

0x4ca3,	// (0x0001b68a) form_field_slider_pane

0x4cb6,	// (0x0001b69d) form_field_slider_wide_pane_ParamLimits

0x4cb6,	// (0x0001b69d) form_field_slider_wide_pane

0xc1d6,	// (0x00022bbd) data_form_pane

0x8572,	// (0x0001ef59) form_field_data_pane_t1

0xc1e2,	// (0x00022bc9) input_focus_pane

0xc1f0,	// (0x00022bd7) data_form_wide_pane

0x4cf9,	// (0x0001b6e0) form_field_data_wide_pane_t1

0xbf5d,	// (0x00022944) input_focus_pane_cp6

0x858c,	// (0x0001ef73) form_field_popup_pane_t1

0xc1e2,	// (0x00022bc9) input_focus_pane_cp7

0xc21c,	// (0x00022c03) list_form_pane

0x4d3d,	// (0x0001b724) form_field_popup_wide_pane_t1

0xc1e2,	// (0x00022bc9) input_focus_pane_cp8

0xc228,	// (0x00022c0f) list_form_wide_pane

0x85ae,	// (0x0001ef95) form_field_slider_pane_t1_ParamLimits

0x85ae,	// (0x0001ef95) form_field_slider_pane_t1

0x85c6,	// (0x0001efad) form_field_slider_pane_t2_ParamLimits

0x85c6,	// (0x0001efad) form_field_slider_pane_t2

0x0001,

0xf69a,	// (0x00026081) form_field_slider_pane_t_ParamLimits

0xf69a,	// (0x00026081) form_field_slider_pane_t

0xbbdf,	// (0x000225c6) input_focus_pane_cp9_ParamLimits

0xbbdf,	// (0x000225c6) input_focus_pane_cp9

0x85db,	// (0x0001efc2) slider_cont_pane_ParamLimits

0x85db,	// (0x0001efc2) slider_cont_pane

0xc237,	// (0x00022c1e) form_field_slider_wide_pane_t1_ParamLimits

0xc237,	// (0x00022c1e) form_field_slider_wide_pane_t1

0x4d94,	// (0x0001b77b) form_field_slider_wide_pane_t2_ParamLimits

0x4d94,	// (0x0001b77b) form_field_slider_wide_pane_t2

0x0001,

0xf69f,	// (0x00026086) form_field_slider_wide_pane_t_ParamLimits

0xf69f,	// (0x00026086) form_field_slider_wide_pane_t

0xbbdf,	// (0x000225c6) input_focus_pane_cp10_ParamLimits

0xbbdf,	// (0x000225c6) input_focus_pane_cp10

0x85ef,	// (0x0001efd6) slider_cont_pane_cp1_ParamLimits

0x85ef,	// (0x0001efd6) slider_cont_pane_cp1

0x8603,	// (0x0001efea) slider_form_pane_cp

0xc249,	// (0x00022c30) input_focus_pane_g1

0xc251,	// (0x00022c38) input_focus_pane_g2

0xc259,	// (0x00022c40) input_focus_pane_g3

0xc261,	// (0x00022c48) input_focus_pane_g4

0xc269,	// (0x00022c50) input_focus_pane_g5

0xc271,	// (0x00022c58) input_focus_pane_g6

0xc279,	// (0x00022c60) input_focus_pane_g7

0xc281,	// (0x00022c68) input_focus_pane_g8

0xc289,	// (0x00022c70) input_focus_pane_g9

0xbb87,	// (0x0002256e) input_focus_pane_g10

0x0009,

0xf6a4,	// (0x0002608b) input_focus_pane_g

0xd6b4,	// (0x0002409b) wait_border_pane_g3_copy1

0x860b,	// (0x0001eff2) data_form_pane_t1

0xbb87,	// (0x0002256e) wait_anim_pane_g1_copy1

0x86ae,	// (0x0001f095) data_form_wide_pane_t1

0x8625,	// (0x0001f00c) list_form_graphic_pane_cp_ParamLimits

0x8625,	// (0x0001f00c) list_form_graphic_pane_cp

0xe33d,	// (0x00024d24) slider_form_pane_g1

0xe346,	// (0x00024d2d) slider_form_pane_g2

0x0006,

0xf994,	// (0x0002637b) slider_form_pane_g

0x8638,	// (0x0001f01f) list_form_graphic_pane_ParamLimits

0x8638,	// (0x0001f01f) list_form_graphic_pane

0x4e0e,	// (0x0001b7f5) list_form_graphic_pane_g1

0x4e16,	// (0x0001b7fd) list_form_graphic_pane_t1_ParamLimits

0x4e16,	// (0x0001b7fd) list_form_graphic_pane_t1

0xbbed,	// (0x000225d4) list_highlight_pane_cp5_ParamLimits

0xbbed,	// (0x000225d4) list_highlight_pane_cp5

0x4e2b,	// (0x0001b812) find_pane_g1

0xc291,	// (0x00022c78) input_find_pane

0x4e34,	// (0x0001b81b) input_find_pane_g1_ParamLimits

0x4e34,	// (0x0001b81b) input_find_pane_g1

0x4e40,	// (0x0001b827) input_find_pane_t1_ParamLimits

0x4e40,	// (0x0001b827) input_find_pane_t1

0x4e55,	// (0x0001b83c) input_find_pane_t2_ParamLimits

0x4e55,	// (0x0001b83c) input_find_pane_t2

0x0001,

0xf6b9,	// (0x000260a0) input_find_pane_t_ParamLimits

0xf6b9,	// (0x000260a0) input_find_pane_t

0xc29a,	// (0x00022c81) input_focus_pane_cp5_ParamLimits

0xc29a,	// (0x00022c81) input_focus_pane_cp5

0x8dba,	// (0x0001f7a1) bg_popup_window_pane_cp2_ParamLimits

0x8dba,	// (0x0001f7a1) bg_popup_window_pane_cp2

0x8dc7,	// (0x0001f7ae) listscroll_menu_pane_ParamLimits

0x8dc7,	// (0x0001f7ae) listscroll_menu_pane

0x8dd3,	// (0x0001f7ba) popup_submenu_window_ParamLimits

0x8dd3,	// (0x0001f7ba) popup_submenu_window

0xc2a8,	// (0x00022c8f) find_popup_pane_g1

0xc2b0,	// (0x00022c97) input_popup_find_pane_cp

0xc29a,	// (0x00022c81) input_focus_pane_cp4_ParamLimits

0xc29a,	// (0x00022c81) input_focus_pane_cp4

0xc2ba,	// (0x00022ca1) input_popup_find_pane_t1_ParamLimits

0xc2ba,	// (0x00022ca1) input_popup_find_pane_t1

0xbb91,	// (0x00022578) bg_popup_sub_pane_cp

0xc2e8,	// (0x00022ccf) listscroll_popup_sub_pane

0xc2f0,	// (0x00022cd7) list_submenu_pane_ParamLimits

0xc2f0,	// (0x00022cd7) list_submenu_pane

0xc301,	// (0x00022ce8) scroll_pane_cp4

0xc309,	// (0x00022cf0) list_single_popup_submenu_pane_ParamLimits

0xc309,	// (0x00022cf0) list_single_popup_submenu_pane

0xc31c,	// (0x00022d03) list_single_popup_submenu_pane_g1

0xc324,	// (0x00022d0b) list_single_popup_submenu_pane_t1_ParamLimits

0xc324,	// (0x00022d0b) list_single_popup_submenu_pane_t1

0xbbdf,	// (0x000225c6) bg_active_tab_pane_cp1_ParamLimits

0xbbdf,	// (0x000225c6) bg_active_tab_pane_cp1

0x8e09,	// (0x0001f7f0) tabs_2_active_pane_g1

0x8e11,	// (0x0001f7f8) tabs_2_active_pane_t1

0xbbdf,	// (0x000225c6) bg_passive_tab_pane_cp1_ParamLimits

0xbbdf,	// (0x000225c6) bg_passive_tab_pane_cp1

0x8e09,	// (0x0001f7f0) tabs_2_passive_pane_g1

0x8e11,	// (0x0001f7f8) tabs_2_passive_pane_t1

0xbbed,	// (0x000225d4) bg_active_tab_pane_cp4

0x8e23,	// (0x0001f80a) tabs_2_long_active_pane_t1

0xc339,	// (0x00022d20) bg_passive_tab_pane_cp4

0x6191,	// (0x0001cb78) list_single_midp_graphic_pane_g4_ParamLimits

0xbbed,	// (0x000225d4) bg_active_tab_pane_cp5

0x8e36,	// (0x0001f81d) tabs_3_long_active_pane_t1

0xc339,	// (0x00022d20) bg_passive_tab_pane_cp5

0x6191,	// (0x0001cb78) list_single_midp_graphic_pane_g4

0xbbed,	// (0x000225d4) bg_popup_window_pane_cp13_ParamLimits

0xbbed,	// (0x000225d4) bg_popup_window_pane_cp13

0xc34e,	// (0x00022d35) listscroll_popup_fast_pane_ParamLimits

0xc34e,	// (0x00022d35) listscroll_popup_fast_pane

0xc35d,	// (0x00022d44) grid_popup_fast_pane_ParamLimits

0xc35d,	// (0x00022d44) grid_popup_fast_pane

0xc36f,	// (0x00022d56) scroll_pane_cp9_ParamLimits

0xc36f,	// (0x00022d56) scroll_pane_cp9

0x0284,	// (0x00016c6b) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x0284,	// (0x00016c6b) list_single_graphic_hl_pane_t1_cp2

0xc393,	// (0x00022d7a) input_focus_pane_cp20_ParamLimits

0xc393,	// (0x00022d7a) input_focus_pane_cp20

0xc3a1,	// (0x00022d88) query_popup_data_pane_t1_ParamLimits

0xc3a1,	// (0x00022d88) query_popup_data_pane_t1

0xc3b4,	// (0x00022d9b) query_popup_data_pane_t2_ParamLimits

0xc3b4,	// (0x00022d9b) query_popup_data_pane_t2

0xc3fa,	// (0x00022de1) query_popup_data_pane_t3_ParamLimits

0xc3fa,	// (0x00022de1) query_popup_data_pane_t3

0xc43b,	// (0x00022e22) query_popup_data_pane_t4_ParamLimits

0xc43b,	// (0x00022e22) query_popup_data_pane_t4

0xc477,	// (0x00022e5e) query_popup_data_pane_t5_ParamLimits

0xc477,	// (0x00022e5e) query_popup_data_pane_t5

0x0004,

0xf6be,	// (0x000260a5) query_popup_data_pane_t_ParamLimits

0xf6be,	// (0x000260a5) query_popup_data_pane_t

0xc249,	// (0x00022c30) bg_set_opt_pane_g1

0xc251,	// (0x00022c38) bg_set_opt_pane_g2

0xc259,	// (0x00022c40) bg_set_opt_pane_g3

0xc261,	// (0x00022c48) bg_set_opt_pane_g4

0xc269,	// (0x00022c50) bg_set_opt_pane_g5

0xc271,	// (0x00022c58) bg_set_opt_pane_g6

0xc279,	// (0x00022c60) bg_set_opt_pane_g7

0xc281,	// (0x00022c68) bg_set_opt_pane_g8

0xc289,	// (0x00022c70) bg_set_opt_pane_g9

0x0008,

0xf6c9,	// (0x000260b0) bg_set_opt_pane_g

0x5df2,	// (0x0001c7d9) control_top_pane_stacon_ParamLimits

0x5df2,	// (0x0001c7d9) control_top_pane_stacon

0x5e45,	// (0x0001c82c) signal_pane_stacon_ParamLimits

0x5e45,	// (0x0001c82c) signal_pane_stacon

0xc8c9,	// (0x000232b0) stacon_top_pane_g1_ParamLimits

0xc8c9,	// (0x000232b0) stacon_top_pane_g1

0x5e6a,	// (0x0001c851) title_pane_stacon_ParamLimits

0x5e6a,	// (0x0001c851) title_pane_stacon

0x5e94,	// (0x0001c87b) uni_indicator_pane_stacon_ParamLimits

0x5e94,	// (0x0001c87b) uni_indicator_pane_stacon

0x5ea9,	// (0x0001c890) battery_pane_stacon_ParamLimits

0x5ea9,	// (0x0001c890) battery_pane_stacon

0x5eed,	// (0x0001c8d4) control_bottom_pane_stacon_ParamLimits

0x5eed,	// (0x0001c8d4) control_bottom_pane_stacon

0x5f10,	// (0x0001c8f7) navi_pane_stacon_ParamLimits

0x5f10,	// (0x0001c8f7) navi_pane_stacon

0xc8eb,	// (0x000232d2) stacon_bottom_pane_g1_ParamLimits

0xc8eb,	// (0x000232d2) stacon_bottom_pane_g1

0x5b53,	// (0x0001c53a) aid_levels_signal_lsc_ParamLimits

0x5b53,	// (0x0001c53a) aid_levels_signal_lsc

0x5b6a,	// (0x0001c551) signal_pane_stacon_g1_ParamLimits

0x5b6a,	// (0x0001c551) signal_pane_stacon_g1

0x5b7e,	// (0x0001c565) signal_pane_stacon_g2_ParamLimits

0x5b7e,	// (0x0001c565) signal_pane_stacon_g2

0x0001,

0xf6dc,	// (0x000260c3) signal_pane_stacon_g_ParamLimits

0xf6dc,	// (0x000260c3) signal_pane_stacon_g

0x5bb3,	// (0x0001c59a) title_pane_stacon_t1_ParamLimits

0x5bb3,	// (0x0001c59a) title_pane_stacon_t1

0xc4bb,	// (0x00022ea2) uni_indicator_pane_stacon_g1

0xc4c5,	// (0x00022eac) uni_indicator_pane_stacon_g2

0xc4cf,	// (0x00022eb6) uni_indicator_pane_stacon_g3

0xc4d9,	// (0x00022ec0) uni_indicator_pane_stacon_g4

0x0003,

0xf6e8,	// (0x000260cf) uni_indicator_pane_stacon_g

0x5bd8,	// (0x0001c5bf) control_top_pane_stacon_g1

0x5be0,	// (0x0001c5c7) control_top_pane_stacon_t1_ParamLimits

0x5be0,	// (0x0001c5c7) control_top_pane_stacon_t1

0x5c17,	// (0x0001c5fe) aid_levels_battery_lsc_ParamLimits

0x5c17,	// (0x0001c5fe) aid_levels_battery_lsc

0x5c2f,	// (0x0001c616) battery_pane_stacon_g1_ParamLimits

0x5c2f,	// (0x0001c616) battery_pane_stacon_g1

0x5c42,	// (0x0001c629) battery_pane_stacon_g2_ParamLimits

0x5c42,	// (0x0001c629) battery_pane_stacon_g2

0x0001,

0xf6f1,	// (0x000260d8) battery_pane_stacon_g_ParamLimits

0xf6f1,	// (0x000260d8) battery_pane_stacon_g

0x5c80,	// (0x0001c667) navi_icon_pane_stacon

0x5c94,	// (0x0001c67b) navi_navi_pane_stacon

0x5c80,	// (0x0001c667) navi_text_pane_stacon

0x5bd8,	// (0x0001c5bf) control_bottom_pane_stacon_g1

0x5ca8,	// (0x0001c68f) control_bottom_pane_stacon_t1_ParamLimits

0x5ca8,	// (0x0001c68f) control_bottom_pane_stacon_t1

0x8e48,	// (0x0001f82f) grid_app_pane_ParamLimits

0x8e48,	// (0x0001f82f) grid_app_pane

0x8e7e,	// (0x0001f865) scroll_pane_cp15_ParamLimits

0x8e7e,	// (0x0001f865) scroll_pane_cp15

0x8e97,	// (0x0001f87e) cell_app_pane_ParamLimits

0x8e97,	// (0x0001f87e) cell_app_pane

0x8ede,	// (0x0001f8c5) cell_app_pane_g1_ParamLimits

0x8ede,	// (0x0001f8c5) cell_app_pane_g1

0xc4fd,	// (0x00022ee4) cell_app_pane_g2_ParamLimits

0xc4fd,	// (0x00022ee4) cell_app_pane_g2

0x0001,

0xf6f6,	// (0x000260dd) cell_app_pane_g_ParamLimits

0xf6f6,	// (0x000260dd) cell_app_pane_g

0x8efe,	// (0x0001f8e5) cell_app_pane_t1_ParamLimits

0x8efe,	// (0x0001f8e5) cell_app_pane_t1

0xc509,	// (0x00022ef0) grid_highlight_pane_ParamLimits

0xc509,	// (0x00022ef0) grid_highlight_pane

0xc249,	// (0x00022c30) cell_highlight_pane_g1

0xc251,	// (0x00022c38) cell_highlight_pane_g2

0xc259,	// (0x00022c40) cell_highlight_pane_g3

0xc261,	// (0x00022c48) cell_highlight_pane_g4

0xc269,	// (0x00022c50) cell_highlight_pane_g5

0xc271,	// (0x00022c58) cell_highlight_pane_g6

0xc279,	// (0x00022c60) cell_highlight_pane_g7

0xc281,	// (0x00022c68) cell_highlight_pane_g8

0xc289,	// (0x00022c70) cell_highlight_pane_g9

0xbb87,	// (0x0002256e) cell_highlight_pane_g10

0x0009,

0xf6a4,	// (0x0002608b) cell_highlight_pane_g

0xc51a,	// (0x00022f01) bg_scroll_pane

0x5cf2,	// (0x0001c6d9) scroll_handle_pane

0xc561,	// (0x00022f48) scroll_bg_pane_g1

0xc576,	// (0x00022f5d) scroll_bg_pane_g2

0xc58e,	// (0x00022f75) scroll_bg_pane_g3

0x0002,

0xf6fb,	// (0x000260e2) scroll_bg_pane_g

0xc5a3,	// (0x00022f8a) scroll_handle_focus_pane_ParamLimits

0xc5a3,	// (0x00022f8a) scroll_handle_focus_pane

0xc561,	// (0x00022f48) scroll_handle_pane_g1

0xc5b0,	// (0x00022f97) scroll_handle_pane_g2

0xc58e,	// (0x00022f75) scroll_handle_pane_g3

0x0002,

0xf702,	// (0x000260e9) scroll_handle_pane_g

0xc29a,	// (0x00022c81) bg_popup_sub_pane_cp21_ParamLimits

0xc29a,	// (0x00022c81) bg_popup_sub_pane_cp21

0xc5c4,	// (0x00022fab) popup_fep_japan_predictive_window_t1_ParamLimits

0xc5c4,	// (0x00022fab) popup_fep_japan_predictive_window_t1

0xc5db,	// (0x00022fc2) popup_fep_japan_predictive_window_t2_ParamLimits

0xc5db,	// (0x00022fc2) popup_fep_japan_predictive_window_t2

0xc60e,	// (0x00022ff5) popup_fep_japan_predictive_window_t3_ParamLimits

0xc60e,	// (0x00022ff5) popup_fep_japan_predictive_window_t3

0x0002,

0xf709,	// (0x000260f0) popup_fep_japan_predictive_window_t_ParamLimits

0xf709,	// (0x000260f0) popup_fep_japan_predictive_window_t

0xbb91,	// (0x00022578) bg_popup_sub_pane_cp23

0xc645,	// (0x0002302c) listscroll_japin_cand_pane

0xc64d,	// (0x00023034) popup_fep_japan_candidate_window_t1

0xc65b,	// (0x00023042) candidate_pane_ParamLimits

0xc65b,	// (0x00023042) candidate_pane

0xc66d,	// (0x00023054) scroll_pane_cp30

0xc675,	// (0x0002305c) list_single_popup_jap_candidate_pane_ParamLimits

0xc675,	// (0x0002305c) list_single_popup_jap_candidate_pane

0xbb91,	// (0x00022578) list_highlight_pane_cp30

0xc689,	// (0x00023070) list_single_popup_jap_candidate_pane_t1

0xc698,	// (0x0002307f) level_1_signal

0xc6a5,	// (0x0002308c) level_2_signal

0xc6b2,	// (0x00023099) level_3_signal

0xc6bf,	// (0x000230a6) level_4_signal

0xc6cc,	// (0x000230b3) level_5_signal

0xc6d9,	// (0x000230c0) level_6_signal

0xc6e6,	// (0x000230cd) level_7_signal

0xc698,	// (0x0002307f) level_1_battery

0xc6a5,	// (0x0002308c) level_2_battery

0xc6b2,	// (0x00023099) level_3_battery

0xc6bf,	// (0x000230a6) level_4_battery

0xc6cc,	// (0x000230b3) level_5_battery

0xc6d9,	// (0x000230c0) level_6_battery

0xc6e6,	// (0x000230cd) level_7_battery

0xc70b,	// (0x000230f2) list_menu_pane_ParamLimits

0xc70b,	// (0x000230f2) list_menu_pane

0xc721,	// (0x00023108) scroll_pane_cp25_ParamLimits

0xc721,	// (0x00023108) scroll_pane_cp25

0xc73a,	// (0x00023121) list_double2_graphic_pane_cp2_ParamLimits

0xc73a,	// (0x00023121) list_double2_graphic_pane_cp2

0xc73a,	// (0x00023121) list_double2_large_graphic_pane_cp2_ParamLimits

0xc73a,	// (0x00023121) list_double2_large_graphic_pane_cp2

0xc73a,	// (0x00023121) list_double2_pane_cp2_ParamLimits

0xc73a,	// (0x00023121) list_double2_pane_cp2

0xc73a,	// (0x00023121) list_double_graphic_pane_cp2_ParamLimits

0xc73a,	// (0x00023121) list_double_graphic_pane_cp2

0xc73a,	// (0x00023121) list_double_large_graphic_pane_cp2_ParamLimits

0xc73a,	// (0x00023121) list_double_large_graphic_pane_cp2

0xc73a,	// (0x00023121) list_double_number_pane_cp2_ParamLimits

0xc73a,	// (0x00023121) list_double_number_pane_cp2

0xc73a,	// (0x00023121) list_double_pane_cp2_ParamLimits

0xc73a,	// (0x00023121) list_double_pane_cp2

0x8f2f,	// (0x0001f916) list_single_2graphic_pane_cp2_ParamLimits

0x8f2f,	// (0x0001f916) list_single_2graphic_pane_cp2

0x8f2f,	// (0x0001f916) list_single_graphic_heading_pane_cp2_ParamLimits

0x8f2f,	// (0x0001f916) list_single_graphic_heading_pane_cp2

0x8f2f,	// (0x0001f916) list_single_graphic_pane_cp2_ParamLimits

0x8f2f,	// (0x0001f916) list_single_graphic_pane_cp2

0x8f2f,	// (0x0001f916) list_single_heading_pane_cp2_ParamLimits

0x8f2f,	// (0x0001f916) list_single_heading_pane_cp2

0xc74a,	// (0x00023131) list_single_large_graphic_pane_cp2_ParamLimits

0xc74a,	// (0x00023131) list_single_large_graphic_pane_cp2

0x8f2f,	// (0x0001f916) list_single_number_heading_pane_cp2_ParamLimits

0x8f2f,	// (0x0001f916) list_single_number_heading_pane_cp2

0x8f2f,	// (0x0001f916) list_single_number_pane_cp2_ParamLimits

0x8f2f,	// (0x0001f916) list_single_number_pane_cp2

0x8f2f,	// (0x0001f916) list_single_pane_cp2_ParamLimits

0x8f2f,	// (0x0001f916) list_single_pane_cp2

0xc764,	// (0x0002314b) bg_popup_sub_pane_cp22

0x5da4,	// (0x0001c78b) popup_side_volume_key_window_g1

0x5dce,	// (0x0001c7b5) popup_side_volume_key_window_t1

0x5dea,	// (0x0001c7d1) volume_small_pane_cp1

0xbbdf,	// (0x000225c6) bg_popup_sub_pane_cp24_ParamLimits

0xbbdf,	// (0x000225c6) bg_popup_sub_pane_cp24

0xc77a,	// (0x00023161) fep_china_uni_candidate_pane_ParamLimits

0xc77a,	// (0x00023161) fep_china_uni_candidate_pane

0xc78e,	// (0x00023175) fep_china_uni_entry_pane

0xc79e,	// (0x00023185) popup_fep_china_uni_window_g1

0xc7ba,	// (0x000231a1) fep_china_uni_entry_pane_g1

0xc7c2,	// (0x000231a9) fep_china_uni_entry_pane_g2

0x0001,

0xf73a,	// (0x00026121) fep_china_uni_entry_pane_g

0xc7ca,	// (0x000231b1) fep_entry_item_pane

0xc7d4,	// (0x000231bb) fep_candidate_item_pane

0xc7dc,	// (0x000231c3) fep_china_uni_candidate_pane_g1

0xc7e4,	// (0x000231cb) fep_china_uni_candidate_pane_g2

0xc7ec,	// (0x000231d3) fep_china_uni_candidate_pane_g3

0xc7f4,	// (0x000231db) fep_china_uni_candidate_pane_g4

0x0003,

0xf73f,	// (0x00026126) fep_china_uni_candidate_pane_g

0xbb87,	// (0x0002256e) fep_entry_item_pane_g1

0xc7fc,	// (0x000231e3) fep_entry_item_pane_t1_ParamLimits

0xc7fc,	// (0x000231e3) fep_entry_item_pane_t1

0xc812,	// (0x000231f9) fep_candidate_item_pane_t1_ParamLimits

0xc812,	// (0x000231f9) fep_candidate_item_pane_t1

0xc827,	// (0x0002320e) fep_candidate_item_pane_t2_ParamLimits

0xc827,	// (0x0002320e) fep_candidate_item_pane_t2

0x0001,

0xf748,	// (0x0002612f) fep_candidate_item_pane_t_ParamLimits

0xf748,	// (0x0002612f) fep_candidate_item_pane_t

0xbbed,	// (0x000225d4) list_highlight_pane_cp31_ParamLimits

0xbbed,	// (0x000225d4) list_highlight_pane_cp31

0xc839,	// (0x00023220) level_1_signal_lsc

0xc842,	// (0x00023229) level_2_signal_lsc

0xc84b,	// (0x00023232) level_3_signal_lsc

0xc854,	// (0x0002323b) level_4_signal_lsc

0xc85d,	// (0x00023244) level_5_signal_lsc

0xc866,	// (0x0002324d) level_6_signal_lsc

0xc86f,	// (0x00023256) level_7_signal_lsc

0xc86f,	// (0x00023256) level_1_battery_lsc

0xc878,	// (0x0002325f) level_2_battery_lsc

0xc881,	// (0x00023268) level_3_battery_lsc

0xc88a,	// (0x00023271) level_4_battery_lsc

0xc893,	// (0x0002327a) level_5_battery_lsc

0xc89c,	// (0x00023283) level_6_battery_lsc

0xc839,	// (0x00023220) level_7_battery_lsc

0xc8a5,	// (0x0002328c) scroll_handle_focus_pane_g1

0xc8ae,	// (0x00023295) scroll_handle_focus_pane_g2

0xc8b7,	// (0x0002329e) scroll_handle_focus_pane_g3

0x0002,

0xf74d,	// (0x00026134) scroll_handle_focus_pane_g

0x4e6a,	// (0x0001b851) list_single_2graphic_pane_g1_ParamLimits

0x4e6a,	// (0x0001b851) list_single_2graphic_pane_g1

0x8188,	// (0x0001eb6f) list_single_2graphic_pane_g2_ParamLimits

0x8188,	// (0x0001eb6f) list_single_2graphic_pane_g2

0x47e3,	// (0x0001b1ca) list_single_2graphic_pane_g3_ParamLimits

0x47e3,	// (0x0001b1ca) list_single_2graphic_pane_g3

0x4e76,	// (0x0001b85d) list_single_2graphic_pane_g4_ParamLimits

0x4e76,	// (0x0001b85d) list_single_2graphic_pane_g4

0x0003,

0xf754,	// (0x0002613b) list_single_2graphic_pane_g_ParamLimits

0xf754,	// (0x0002613b) list_single_2graphic_pane_g

0x4e82,	// (0x0001b869) list_single_2graphic_pane_t1_ParamLimits

0x4e82,	// (0x0001b869) list_single_2graphic_pane_t1

0x864c,	// (0x0001f033) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x864c,	// (0x0001f033) list_double2_graphic_large_graphic_pane_g1

0x8304,	// (0x0001eceb) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x8304,	// (0x0001eceb) list_double2_graphic_large_graphic_pane_g2

0x81ad,	// (0x0001eb94) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x81ad,	// (0x0001eb94) list_double2_graphic_large_graphic_pane_g3

0x865e,	// (0x0001f045) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x865e,	// (0x0001f045) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf75d,	// (0x00026144) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf75d,	// (0x00026144) list_double2_graphic_large_graphic_pane_g

0x866a,	// (0x0001f051) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x866a,	// (0x0001f051) list_double2_graphic_large_graphic_pane_t1

0x8680,	// (0x0001f067) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x8680,	// (0x0001f067) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf766,	// (0x0002614d) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf766,	// (0x0002614d) list_double2_graphic_large_graphic_pane_t

0xc998,	// (0x0002337f) popup_fast_swap_window_ParamLimits

0xc998,	// (0x0002337f) popup_fast_swap_window

0xc9b4,	// (0x0002339b) popup_side_volume_key_window

0xc9ce,	// (0x000233b5) stacon_top_pane

0xc9d8,	// (0x000233bf) status_pane_ParamLimits

0xc9d8,	// (0x000233bf) status_pane

0xc9ce,	// (0x000233b5) status_small_pane

0xbb91,	// (0x00022578) control_pane

0xbb91,	// (0x00022578) stacon_bottom_pane

0xc1c5,	// (0x00022bac) scroll_pane_cp121

0xc1bc,	// (0x00022ba3) set_content_pane

0x8fbd,	// (0x0001f9a4) bg_active_tab_pane_g1_cp1

0xc8c0,	// (0x000232a7) bg_active_tab_pane_g2_cp1

0x8fc6,	// (0x0001f9ad) bg_active_tab_pane_g3_cp1

0x8fbd,	// (0x0001f9a4) bg_passive_tab_pane_g1_cp1

0xc8c0,	// (0x000232a7) bg_passive_tab_pane_g2_cp1

0x8fc6,	// (0x0001f9ad) bg_passive_tab_pane_g3_cp1

0x8fcf,	// (0x0001f9b6) bg_active_tab_pane_g1_cp2

0xc8c0,	// (0x000232a7) bg_active_tab_pane_g2_cp2

0x8fd8,	// (0x0001f9bf) bg_active_tab_pane_g3_cp2

0x8fcf,	// (0x0001f9b6) bg_passive_tab_pane_g1_cp2

0xc8c0,	// (0x000232a7) bg_passive_tab_pane_g2_cp2

0x8fd8,	// (0x0001f9bf) bg_passive_tab_pane_g3_cp2

0x8fe1,	// (0x0001f9c8) bg_active_tab_pane_g1_cp3

0xc8c0,	// (0x000232a7) bg_active_tab_pane_g2_cp3

0x8fea,	// (0x0001f9d1) bg_active_tab_pane_g3_cp3

0x8fe1,	// (0x0001f9c8) bg_passive_tab_pane_g1_cp3

0xc8c0,	// (0x000232a7) bg_passive_tab_pane_g2_cp3

0x8fea,	// (0x0001f9d1) bg_passive_tab_pane_g3_cp3

0x8ff3,	// (0x0001f9da) bg_active_tab_pane_g1_cp4

0xc8c0,	// (0x000232a7) bg_active_tab_pane_g2_cp4

0x8ffc,	// (0x0001f9e3) bg_active_tab_pane_g3_cp4

0x8ff3,	// (0x0001f9da) bg_passive_tab_pane_g1_cp4

0xc8c0,	// (0x000232a7) bg_passive_tab_pane_g2_cp4

0x8ffc,	// (0x0001f9e3) bg_passive_tab_pane_g3_cp4

0xc907,	// (0x000232ee) bg_active_tab_pane_g1_cp5

0xc8c0,	// (0x000232a7) bg_active_tab_pane_g2_cp5

0xc910,	// (0x000232f7) bg_active_tab_pane_g3_cp5

0xc907,	// (0x000232ee) bg_passive_tab_pane_g1_cp5

0xc8c0,	// (0x000232a7) bg_passive_tab_pane_g2_cp5

0xc910,	// (0x000232f7) bg_passive_tab_pane_g3_cp5

0x36d4,	// (0x0001a0bb) list_set_graphic_pane_ParamLimits

0x36d4,	// (0x0001a0bb) list_set_graphic_pane

0xbb91,	// (0x00022578) bg_set_opt_pane_cp4

0xc919,	// (0x00023300) list_set_graphic_pane_g1_ParamLimits

0xc919,	// (0x00023300) list_set_graphic_pane_g1

0xc925,	// (0x0002330c) list_set_graphic_pane_g2_ParamLimits

0xc925,	// (0x0002330c) list_set_graphic_pane_g2

0x0001,

0xf76b,	// (0x00026152) list_set_graphic_pane_g_ParamLimits

0xf76b,	// (0x00026152) list_set_graphic_pane_g

0x0009,

0xfad0,	// (0x000264b7) volume_small_pane_cp_g

0xc949,	// (0x00023330) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xc949,	// (0x00023330) list_double2_large_graphic_pane_g1_cp2

0xc957,	// (0x0002333e) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xc957,	// (0x0002333e) list_double2_large_graphic_pane_g2_cp2

0xc968,	// (0x0002334f) list_double2_large_graphic_pane_g3_cp2

0xc970,	// (0x00023357) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xc970,	// (0x00023357) list_double2_large_graphic_pane_t1_cp2

0xc986,	// (0x0002336d) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xc986,	// (0x0002336d) list_double2_large_graphic_pane_t2_cp2

0xe0d7,	// (0x00024abe) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xe0d7,	// (0x00024abe) list_double_large_graphic_pane_g1_cp2

0xe0ea,	// (0x00024ad1) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xe0ea,	// (0x00024ad1) list_double_large_graphic_pane_g2_cp2

0xcaf6,	// (0x000234dd) list_double_large_graphic_pane_g3_cp2

0xe0fb,	// (0x00024ae2) list_double_large_graphic_pane_g4_cp

0xe103,	// (0x00024aea) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xe103,	// (0x00024aea) list_double_large_graphic_pane_t1_cp2

0xe11a,	// (0x00024b01) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xe11a,	// (0x00024b01) list_double_large_graphic_pane_t2_cp2

0xc9e6,	// (0x000233cd) list_double2_graphic_pane_g1_cp2_ParamLimits

0xc9e6,	// (0x000233cd) list_double2_graphic_pane_g1_cp2

0xc9f4,	// (0x000233db) list_double2_graphic_pane_g2_cp2_ParamLimits

0xc9f4,	// (0x000233db) list_double2_graphic_pane_g2_cp2

0xca05,	// (0x000233ec) list_double2_graphic_pane_g3_cp2

0xca0f,	// (0x000233f6) list_double2_graphic_pane_t1_cp2_ParamLimits

0xca0f,	// (0x000233f6) list_double2_graphic_pane_t1_cp2

0xca25,	// (0x0002340c) list_double2_graphic_pane_t2_cp2_ParamLimits

0xca25,	// (0x0002340c) list_double2_graphic_pane_t2_cp2

0xca37,	// (0x0002341e) list_single_number_heading_pane_g1_cp2_ParamLimits

0xca37,	// (0x0002341e) list_single_number_heading_pane_g1_cp2

0xca43,	// (0x0002342a) list_single_number_heading_pane_g2_cp2

0xca4b,	// (0x00023432) list_single_number_heading_pane_t1_cp2_ParamLimits

0xca4b,	// (0x00023432) list_single_number_heading_pane_t1_cp2

0xca61,	// (0x00023448) list_single_number_heading_pane_t2_cp2_ParamLimits

0xca61,	// (0x00023448) list_single_number_heading_pane_t2_cp2

0xca75,	// (0x0002345c) list_single_number_heading_pane_t3_cp2_ParamLimits

0xca75,	// (0x0002345c) list_single_number_heading_pane_t3_cp2

0xca37,	// (0x0002341e) list_single_heading_pane_g1_cp2_ParamLimits

0xca37,	// (0x0002341e) list_single_heading_pane_g1_cp2

0xca43,	// (0x0002342a) list_single_heading_pane_g2_cp2

0xca4b,	// (0x00023432) list_single_heading_pane_t1_cp2_ParamLimits

0xca4b,	// (0x00023432) list_single_heading_pane_t1_cp2

0xdedf,	// (0x000248c6) list_single_heading_pane_t2_cp2_ParamLimits

0xdedf,	// (0x000248c6) list_single_heading_pane_t2_cp2

0xdad3,	// (0x000244ba) list_double_graphic_pane_g1_cp2_ParamLimits

0xdad3,	// (0x000244ba) list_double_graphic_pane_g1_cp2

0xde33,	// (0x0002481a) list_double_graphic_pane_g2_cp2_ParamLimits

0xde33,	// (0x0002481a) list_double_graphic_pane_g2_cp2

0xde42,	// (0x00024829) list_double_graphic_pane_g3_cp2

0xde4a,	// (0x00024831) list_double_graphic_pane_t1_cp2_ParamLimits

0xde4a,	// (0x00024831) list_double_graphic_pane_t1_cp2

0xde60,	// (0x00024847) list_double_graphic_pane_t2_cp2_ParamLimits

0xde60,	// (0x00024847) list_double_graphic_pane_t2_cp2

0xcaea,	// (0x000234d1) list_double_number_pane_g1_cp2_ParamLimits

0xcaea,	// (0x000234d1) list_double_number_pane_g1_cp2

0xcaf6,	// (0x000234dd) list_double_number_pane_g2_cp2

0xddf7,	// (0x000247de) list_double_number_pane_t1_cp2_ParamLimits

0xddf7,	// (0x000247de) list_double_number_pane_t1_cp2

0xde0b,	// (0x000247f2) list_double_number_pane_t2_cp2_ParamLimits

0xde0b,	// (0x000247f2) list_double_number_pane_t2_cp2

0xde21,	// (0x00024808) list_double_number_pane_t3_cp2_ParamLimits

0xde21,	// (0x00024808) list_double_number_pane_t3_cp2

0xdd6e,	// (0x00024755) list_single_graphic_pane_g1_cp2_ParamLimits

0xdd6e,	// (0x00024755) list_single_graphic_pane_g1_cp2

0xcb4e,	// (0x00023535) list_single_graphic_pane_g2_cp2_ParamLimits

0xcb4e,	// (0x00023535) list_single_graphic_pane_g2_cp2

0xcb5a,	// (0x00023541) list_single_graphic_pane_g3_cp2

0xdd44,	// (0x0002472b) list_single_graphic_pane_t1_cp2_ParamLimits

0xdd44,	// (0x0002472b) list_single_graphic_pane_t1_cp2

0xcb4e,	// (0x00023535) list_single_number_pane_g1_cp2_ParamLimits

0xcb4e,	// (0x00023535) list_single_number_pane_g1_cp2

0xcb5a,	// (0x00023541) list_single_number_pane_g2_cp2

0xdd44,	// (0x0002472b) list_single_number_pane_t1_cp2_ParamLimits

0xdd44,	// (0x0002472b) list_single_number_pane_t1_cp2

0xdd5a,	// (0x00024741) list_single_number_pane_t2_cp2_ParamLimits

0xdd5a,	// (0x00024741) list_single_number_pane_t2_cp2

0xc957,	// (0x0002333e) list_double2_pane_g1_cp2_ParamLimits

0xc957,	// (0x0002333e) list_double2_pane_g1_cp2

0xc968,	// (0x0002334f) list_double2_pane_g2_cp2

0xcac2,	// (0x000234a9) list_double2_pane_t1_cp2_ParamLimits

0xcac2,	// (0x000234a9) list_double2_pane_t1_cp2

0xcad8,	// (0x000234bf) list_double2_pane_t2_cp2_ParamLimits

0xcad8,	// (0x000234bf) list_double2_pane_t2_cp2

0xcaea,	// (0x000234d1) list_double_pane_g1_cp2_ParamLimits

0xcaea,	// (0x000234d1) list_double_pane_g1_cp2

0xcaf6,	// (0x000234dd) list_double_pane_g2_cp2

0xcafe,	// (0x000234e5) list_double_pane_t1_cp2_ParamLimits

0xcafe,	// (0x000234e5) list_double_pane_t1_cp2

0xcb14,	// (0x000234fb) list_double_pane_t2_cp2_ParamLimits

0xcb14,	// (0x000234fb) list_double_pane_t2_cp2

0xcb3e,	// (0x00023525) list_single_pane_cp2_g3

0xcb4e,	// (0x00023535) list_single_pane_g1_cp2_ParamLimits

0xcb4e,	// (0x00023535) list_single_pane_g1_cp2

0xcb5a,	// (0x00023541) list_single_pane_g2_cp2

0xcb62,	// (0x00023549) list_single_pane_t1_cp2_ParamLimits

0xcb62,	// (0x00023549) list_single_pane_t1_cp2

0xcb7a,	// (0x00023561) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xcb7a,	// (0x00023561) list_single_large_graphic_pane_g1_cp2

0xcb88,	// (0x0002356f) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xcb88,	// (0x0002356f) list_single_large_graphic_pane_g2_cp2

0xcb94,	// (0x0002357b) list_single_large_graphic_pane_g3_cp2

0xcb9c,	// (0x00023583) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xcb9c,	// (0x00023583) list_single_large_graphic_pane_g4_cp1

0xcbb6,	// (0x0002359d) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xcbb6,	// (0x0002359d) list_single_large_graphic_pane_t1_cp2

0xdd0e,	// (0x000246f5) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xdd0e,	// (0x000246f5) list_single_graphic_heading_pane_g1_cp2

0xdcdb,	// (0x000246c2) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xdcdb,	// (0x000246c2) list_single_graphic_heading_pane_g4_cp2

0xcb5a,	// (0x00023541) list_single_graphic_heading_pane_g5_cp2

0xdd1a,	// (0x00024701) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xdd1a,	// (0x00024701) list_single_graphic_heading_pane_t1_cp2

0xdd30,	// (0x00024717) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xdd30,	// (0x00024717) list_single_graphic_heading_pane_t2_cp2

0xdccf,	// (0x000246b6) list_single_2graphic_pane_g1_cp2_ParamLimits

0xdccf,	// (0x000246b6) list_single_2graphic_pane_g1_cp2

0xdcdb,	// (0x000246c2) list_single_2graphic_pane_g2_cp2_ParamLimits

0xdcdb,	// (0x000246c2) list_single_2graphic_pane_g2_cp2

0xcb5a,	// (0x00023541) list_single_2graphic_pane_g3_cp2

0xdcec,	// (0x000246d3) list_single_2graphic_pane_g4_cp2_ParamLimits

0xdcec,	// (0x000246d3) list_single_2graphic_pane_g4_cp2

0xdcf8,	// (0x000246df) list_single_2graphic_pane_t1_cp2_ParamLimits

0xdcf8,	// (0x000246df) list_single_2graphic_pane_t1_cp2

0xbb87,	// (0x0002256e) list_highlight_pane_g10_cp1

0xd8ab,	// (0x00024292) list_highlight_pane_g1_cp1

0xd8b3,	// (0x0002429a) list_highlight_pane_g2_cp1

0xd8bb,	// (0x000242a2) list_highlight_pane_g3_cp1

0xd8c3,	// (0x000242aa) list_highlight_pane_g4_cp1

0xd8cb,	// (0x000242b2) list_highlight_pane_g5_cp1

0xd8d3,	// (0x000242ba) list_highlight_pane_g6_cp1

0xd8db,	// (0x000242c2) list_highlight_pane_g7_cp1

0xd8e3,	// (0x000242ca) list_highlight_pane_g8_cp1

0xd8eb,	// (0x000242d2) list_highlight_pane_g9_cp1

0x9e0a,	// (0x000207f1) form_field_slider_pane_t3

0x9e1a,	// (0x00020801) form_field_slider_pane_t4

0xd7df,	// (0x000241c6) slider_form_pane_ParamLimits

0xd7df,	// (0x000241c6) slider_form_pane

0xbb91,	// (0x00022578) control_abbreviations

0xbb91,	// (0x00022578) control_conventions

0xbb91,	// (0x00022578) control_definitions

0xbb91,	// (0x00022578) format_table_attribute

0xdf2b,	// (0x00024912) bg_popup_preview_window_pane_g9

0xbb91,	// (0x00022578) format_table_data2

0xbb91,	// (0x00022578) format_table_data3

0xbb91,	// (0x00022578) format_table_data_example

0x0008,

0xbb91,	// (0x00022578) intro_purpose

0xf8f4,	// (0x000262db) bg_popup_preview_window_pane_g

0xbb91,	// (0x00022578) texts_category

0xbb91,	// (0x00022578) texts_graphics

0xcbcc,	// (0x000235b3) text_digital

0xcbdb,	// (0x000235c2) text_primary

0xcbea,	// (0x000235d1) text_primary_small

0xcbf9,	// (0x000235e0) text_secondary

0xcc08,	// (0x000235ef) text_title

0xe3fa,	// (0x00024de1) bg_passive_tab_pane_g1_cp3_srt

0xc8c0,	// (0x000232a7) bg_passive_tab_pane_g2_cp3_srt

0xe403,	// (0x00024dea) bg_passive_tab_pane_g3_cp3_srt

0xbbdf,	// (0x000225c6) bg_active_tab_pane_cp3_srt_ParamLimits

0xbbdf,	// (0x000225c6) bg_active_tab_pane_cp3_srt

0xe40c,	// (0x00024df3) tabs_4_active_pane_srt_g1

0xa2db,	// (0x00020cc2) tabs_4_active_pane_srt_t1_ParamLimits

0xa2db,	// (0x00020cc2) tabs_4_active_pane_srt_t1

0xe3fa,	// (0x00024de1) bg_active_tab_pane_g1_cp3_copy1

0xc8c0,	// (0x000232a7) bg_active_tab_pane_g2_cp3_copy1

0xe403,	// (0x00024dea) bg_active_tab_pane_g3_cp3_copy1

0xbbed,	// (0x000225d4) tabs_2_long_active_pane_srt_ParamLimits

0xbbed,	// (0x000225d4) tabs_2_long_active_pane_srt

0xbbed,	// (0x000225d4) tabs_2_long_passive_pane_srt_ParamLimits

0xbbed,	// (0x000225d4) tabs_2_long_passive_pane_srt

0xc339,	// (0x00022d20) bg_passive_tab_pane_cp4_srt_ParamLimits

0xc339,	// (0x00022d20) bg_passive_tab_pane_cp4_srt

0xe2f6,	// (0x00024cdd) bg_passive_tab_pane_g1_cp4_srt

0xc8c0,	// (0x000232a7) bg_passive_tab_pane_g2_cp4_srt

0xe2ff,	// (0x00024ce6) bg_passive_tab_pane_g3_cp4_srt

0xbbed,	// (0x000225d4) bg_active_tab_pane_cp4_srt_ParamLimits

0xbbed,	// (0x000225d4) bg_active_tab_pane_cp4_srt

0xa0cc,	// (0x00020ab3) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa0cc,	// (0x00020ab3) tabs_2_long_active_pane_srt_t1

0xe2f6,	// (0x00024cdd) bg_active_tab_pane_g1_cp4_srt

0xc8c0,	// (0x000232a7) bg_active_tab_pane_g2_cp4_srt

0xe2ff,	// (0x00024ce6) bg_active_tab_pane_g3_cp4_srt

0xbbdf,	// (0x000225c6) tabs_3_long_active_pane_srt_ParamLimits

0xbbdf,	// (0x000225c6) tabs_3_long_active_pane_srt

0xbbdf,	// (0x000225c6) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xbbdf,	// (0x000225c6) tabs_3_long_passive_pane_cp_srt

0xbbdf,	// (0x000225c6) tabs_3_long_passive_pane_srt_ParamLimits

0xbbdf,	// (0x000225c6) tabs_3_long_passive_pane_srt

0xc339,	// (0x00022d20) bg_passive_tab_pane_cp5_srt_ParamLimits

0xc339,	// (0x00022d20) bg_passive_tab_pane_cp5_srt

0xc907,	// (0x000232ee) bg_passive_tab_pane_g1_cp5_srt

0xc8c0,	// (0x000232a7) bg_passive_tab_pane_g2_cp5_srt

0xc910,	// (0x000232f7) bg_passive_tab_pane_g3_cp5_srt

0xbbed,	// (0x000225d4) bg_active_tab_pane_cp5_srt_ParamLimits

0xbbed,	// (0x000225d4) bg_active_tab_pane_cp5_srt

0xa0b6,	// (0x00020a9d) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa0b6,	// (0x00020a9d) tabs_3_long_active_pane_srt_t1

0xc907,	// (0x000232ee) bg_active_tab_pane_g1_cp5_srt

0xc8c0,	// (0x000232a7) bg_active_tab_pane_g2_cp5_srt

0xc910,	// (0x000232f7) bg_active_tab_pane_g3_cp5_srt

0xe2e8,	// (0x00024ccf) navi_text_pane_srt_t1

0xe2e0,	// (0x00024cc7) navi_icon_pane_srt_g1

0xcd18,	// (0x000236ff) midp_editing_number_pane_srt

0xcc17,	// (0x000235fe) midp_ticker_pane_srt

0xcd20,	// (0x00023707) midp_ticker_pane_srt_g1

0xcd28,	// (0x0002370f) midp_ticker_pane_srt_g2

0x0001,

0xf78a,	// (0x00026171) midp_ticker_pane_srt_g

0xcd30,	// (0x00023717) midp_ticker_pane_srt_t1

0xe2d1,	// (0x00024cb8) midp_editing_number_pane_t1_copy1

0xc339,	// (0x00022d20) listscroll_midp_pane

0xc339,	// (0x00022d20) midp_form_pane

0xcc1f,	// (0x00023606) midp_info_popup_window_ParamLimits

0xcc1f,	// (0x00023606) midp_info_popup_window

0xc29a,	// (0x00022c81) bg_popup_sub_pane_cp50_ParamLimits

0xc29a,	// (0x00022c81) bg_popup_sub_pane_cp50

0xd4fc,	// (0x00023ee3) listscroll_midp_info_pane_ParamLimits

0xd4fc,	// (0x00023ee3) listscroll_midp_info_pane

0xd4e4,	// (0x00023ecb) listscroll_form_midp_pane_ParamLimits

0xd4e4,	// (0x00023ecb) listscroll_form_midp_pane

0xd4f0,	// (0x00023ed7) scroll_bar_cp050

0x9dfe,	// (0x000207e5) list_midp_pane

0xecc8,	// (0x000256af) signal_pane_g2_cp

0xd416,	// (0x00023dfd) listscroll_midp_info_pane_t1_ParamLimits

0xd416,	// (0x00023dfd) listscroll_midp_info_pane_t1

0xd42e,	// (0x00023e15) listscroll_midp_info_pane_t2_ParamLimits

0xd42e,	// (0x00023e15) listscroll_midp_info_pane_t2

0xd46c,	// (0x00023e53) listscroll_midp_info_pane_t3_ParamLimits

0xd46c,	// (0x00023e53) listscroll_midp_info_pane_t3

0xd4a6,	// (0x00023e8d) listscroll_midp_info_pane_t4_ParamLimits

0xd4a6,	// (0x00023e8d) listscroll_midp_info_pane_t4

0x0003,

0xf82f,	// (0x00026216) listscroll_midp_info_pane_t_ParamLimits

0xf82f,	// (0x00026216) listscroll_midp_info_pane_t

0xc301,	// (0x00022ce8) scroll_pane_cp21

0xd3ba,	// (0x00023da1) form_midp_field_choice_group_pane

0xd3c3,	// (0x00023daa) form_midp_field_text_pane

0xd3fc,	// (0x00023de3) form_midp_field_time_pane

0xd404,	// (0x00023deb) form_midp_gauge_slider_pane

0xd40d,	// (0x00023df4) form_midp_gauge_wait_pane

0xbb91,	// (0x00022578) form_midp_image_pane

0x8692,	// (0x0001f079) list_single_midp_pane_ParamLimits

0x8692,	// (0x0001f079) list_single_midp_pane

0x9dda,	// (0x000207c1) form_midp_field_text_pane_t1

0xd261,	// (0x00023c48) input_focus_pane_cp050

0xd3a9,	// (0x00023d90) list_midp_form_text_pane

0xd378,	// (0x00023d5f) form_midp_field_choice_group_pane_t1

0xd386,	// (0x00023d6d) input_focus_pane_cp051

0xd39a,	// (0x00023d81) list_midp_choice_pane

0xbb91,	// (0x00022578) status_idle_pane

0xd35c,	// (0x00023d43) form_midp_field_time_pane_t1

0xbb87,	// (0x0002256e) wait_anim_pane_g2_copy1

0xd36a,	// (0x00023d51) form_midp_field_time_pane_t2

0x0001,

0xcc8a,	// (0x00023671) aid_navinavi_width_2_pane

0xf82a,	// (0x00026211) form_midp_field_time_pane_t

0xbb91,	// (0x00022578) input_focus_pane_cp052

0xbb91,	// (0x00022578) bg_input_focus_pane_cp040

0xd338,	// (0x00023d1f) form_midp_gauge_slider_pane_t1

0xd346,	// (0x00023d2d) form_midp_gauge_slider_pane_t2

0x9dba,	// (0x000207a1) form_midp_gauge_slider_pane_t3

0x9dca,	// (0x000207b1) form_midp_gauge_slider_pane_t4

0x0003,

0xf821,	// (0x00026208) form_midp_gauge_slider_pane_t

0xd354,	// (0x00023d3b) form_midp_slider_pane

0xbbed,	// (0x000225d4) bg_input_focus_pane_cp041_ParamLimits

0xbbed,	// (0x000225d4) bg_input_focus_pane_cp041

0xd305,	// (0x00023cec) form_midp_gauge_wait_pane_t1_ParamLimits

0xd305,	// (0x00023cec) form_midp_gauge_wait_pane_t1

0xd317,	// (0x00023cfe) form_midp_gauge_wait_pane_t2_ParamLimits

0xd317,	// (0x00023cfe) form_midp_gauge_wait_pane_t2

0x0001,

0xf81c,	// (0x00026203) form_midp_gauge_wait_pane_t_ParamLimits

0xf81c,	// (0x00026203) form_midp_gauge_wait_pane_t

0xd329,	// (0x00023d10) form_midp_wait_pane_ParamLimits

0xd329,	// (0x00023d10) form_midp_wait_pane

0xd2cf,	// (0x00023cb6) form_midp_image_pane_g1

0xd2d8,	// (0x00023cbf) form_midp_image_pane_t1

0xd2e7,	// (0x00023cce) form_midp_image_pane_t2

0xd2f6,	// (0x00023cdd) form_midp_image_pane_t3

0x0002,

0xf815,	// (0x000261fc) form_midp_image_pane_t

0xd2c6,	// (0x00023cad) list_single_midp_pane_g1

0x4f8c,	// (0x0001b973) list_single_midp_pane_t1

0x9da3,	// (0x0002078a) list_midp_form_item_pane_ParamLimits

0x9da3,	// (0x0002078a) list_midp_form_item_pane

0xcc32,	// (0x00023619) list_midp_form_item_pane_t1

0xcc41,	// (0x00023628) midp_ticker_pane_g1

0xcc4d,	// (0x00023634) midp_ticker_pane_g2

0x0001,

0xf770,	// (0x00026157) midp_ticker_pane_g

0xcc59,	// (0x00023640) midp_ticker_pane_t1

0xe381,	// (0x00024d68) midp_editing_number_pane_t1

0xe35f,	// (0x00024d46) midp_editing_number_pane

0xe36e,	// (0x00024d55) midp_ticker_pane

0xe2c1,	// (0x00024ca8) ai_message_heading_pane

0xbb91,	// (0x00022578) bg_popup_window_pane_cp14

0xe2c9,	// (0x00024cb0) listscroll_ai_message_pane

0xe24b,	// (0x00024c32) ai_message_heading_pane_g1_ParamLimits

0xe24b,	// (0x00024c32) ai_message_heading_pane_g1

0xe257,	// (0x00024c3e) ai_message_heading_pane_g2_ParamLimits

0xe257,	// (0x00024c3e) ai_message_heading_pane_g2

0xe263,	// (0x00024c4a) ai_message_heading_pane_g3_ParamLimits

0xe263,	// (0x00024c4a) ai_message_heading_pane_g3

0xe26f,	// (0x00024c56) ai_message_heading_pane_g4_ParamLimits

0xe26f,	// (0x00024c56) ai_message_heading_pane_g4

0x0003,

0xf956,	// (0x0002633d) ai_message_heading_pane_g_ParamLimits

0xf956,	// (0x0002633d) ai_message_heading_pane_g

0xe27b,	// (0x00024c62) ai_message_heading_pane_t1_ParamLimits

0xe27b,	// (0x00024c62) ai_message_heading_pane_t1

0xe295,	// (0x00024c7c) ai_message_heading_pane_t2_ParamLimits

0xe295,	// (0x00024c7c) ai_message_heading_pane_t2

0x0001,

0xf95f,	// (0x00026346) ai_message_heading_pane_t_ParamLimits

0xf95f,	// (0x00026346) ai_message_heading_pane_t

0xe2a7,	// (0x00024c8e) bg_popup_heading_pane_cp1_ParamLimits

0xe2a7,	// (0x00024c8e) bg_popup_heading_pane_cp1

0xe239,	// (0x00024c20) list_ai_message_pane_ParamLimits

0xe239,	// (0x00024c20) list_ai_message_pane

0xc301,	// (0x00022ce8) scroll_pane_cp10

0xe1d5,	// (0x00024bbc) list_ai_message_pane_g1

0xe1dd,	// (0x00024bc4) list_ai_message_pane_g2

0x0001,

0xf933,	// (0x0002631a) list_ai_message_pane_g

0xe1e5,	// (0x00024bcc) list_ai_message_pane_t1_ParamLimits

0xe1e5,	// (0x00024bcc) list_ai_message_pane_t1

0xe1fa,	// (0x00024be1) list_ai_message_pane_t2_ParamLimits

0xe1fa,	// (0x00024be1) list_ai_message_pane_t2

0xe20f,	// (0x00024bf6) list_ai_message_pane_t3_ParamLimits

0xe20f,	// (0x00024bf6) list_ai_message_pane_t3

0xe224,	// (0x00024c0b) list_ai_message_pane_t4_ParamLimits

0xe224,	// (0x00024c0b) list_ai_message_pane_t4

0x0003,

0xf938,	// (0x0002631f) list_ai_message_pane_t_ParamLimits

0xf938,	// (0x0002631f) list_ai_message_pane_t

0xa091,	// (0x00020a78) cell_ai_soft_ind_pane_ParamLimits

0xa091,	// (0x00020a78) cell_ai_soft_ind_pane

0xcc6b,	// (0x00023652) cell_ai_soft_ind_pane_g1_ParamLimits

0xcc6b,	// (0x00023652) cell_ai_soft_ind_pane_g1

0xbb91,	// (0x00022578) grid_highlight_cp1

0xcc78,	// (0x0002365f) text_secondary_cp56_ParamLimits

0xcc78,	// (0x0002365f) text_secondary_cp56

0xe1aa,	// (0x00024b91) example_general_pane_ParamLimits

0xe1aa,	// (0x00024b91) example_general_pane

0xe1b6,	// (0x00024b9d) example_parent_pane_g1_ParamLimits

0xe1b6,	// (0x00024b9d) example_parent_pane_g1

0xe1c2,	// (0x00024ba9) example_parent_pane_t1_ParamLimits

0xe1c2,	// (0x00024ba9) example_parent_pane_t1

0x95fa,	// (0x0001ffe1) popup_preview_text_window_ParamLimits

0x95fa,	// (0x0001ffe1) popup_preview_text_window

0xcb46,	// (0x0002352d) list_single_pane_cp2_g4

0xbdbc,	// (0x000227a3) bg_popup_preview_window_pane_ParamLimits

0xbdbc,	// (0x000227a3) bg_popup_preview_window_pane

0xdf33,	// (0x0002491a) popup_preview_text_window_t1_ParamLimits

0xdf33,	// (0x0002491a) popup_preview_text_window_t1

0xdf51,	// (0x00024938) popup_preview_text_window_t2_ParamLimits

0xdf51,	// (0x00024938) popup_preview_text_window_t2

0xdf9a,	// (0x00024981) popup_preview_text_window_t3_ParamLimits

0xdf9a,	// (0x00024981) popup_preview_text_window_t3

0xdfdf,	// (0x000249c6) popup_preview_text_window_t4_ParamLimits

0xdfdf,	// (0x000249c6) popup_preview_text_window_t4

0x0004,

0xf907,	// (0x000262ee) popup_preview_text_window_t_ParamLimits

0xf907,	// (0x000262ee) popup_preview_text_window_t

0xe05d,	// (0x00024a44) scroll_pane_cp11

0xd171,	// (0x00023b58) bg_popup_preview_window_pane_g1

0xdef3,	// (0x000248da) bg_popup_preview_window_pane_g2

0xdefb,	// (0x000248e2) bg_popup_preview_window_pane_g3

0xdf03,	// (0x000248ea) bg_popup_preview_window_pane_g4

0xdf0b,	// (0x000248f2) bg_popup_preview_window_pane_g5

0xdf13,	// (0x000248fa) bg_popup_preview_window_pane_g6

0xdf1b,	// (0x00024902) bg_popup_preview_window_pane_g7

0xdf23,	// (0x0002490a) bg_popup_preview_window_pane_g8

0x5701,	// (0x0001c0e8) aid_popup_width_pane

0x9576,	// (0x0001ff5d) popup_midp_note_alarm_window_ParamLimits

0x9576,	// (0x0001ff5d) popup_midp_note_alarm_window

0xc1d6,	// (0x00022bbd) data_form_pane_ParamLimits

0x8568,	// (0x0001ef4f) form_field_data_pane_g1

0x8572,	// (0x0001ef59) form_field_data_pane_t1_ParamLimits

0xc1e2,	// (0x00022bc9) input_focus_pane_ParamLimits

0xc1f0,	// (0x00022bd7) data_form_wide_pane_ParamLimits

0x4ced,	// (0x0001b6d4) form_field_data_wide_pane_g1

0x4cf9,	// (0x0001b6e0) form_field_data_wide_pane_t1_ParamLimits

0xbf5d,	// (0x00022944) input_focus_pane_cp6_ParamLimits

0x8dfb,	// (0x0001f7e2) input_popup_find_pane_g1_ParamLimits

0x8dfb,	// (0x0001f7e2) input_popup_find_pane_g1

0x5c53,	// (0x0001c63a) aid_navi_side_left_pane

0x5c68,	// (0x0001c64f) aid_navi_side_right_pane

0xd988,	// (0x0002436f) bg_popup_window_pane_cp30_ParamLimits

0xd988,	// (0x0002436f) bg_popup_window_pane_cp30

0xda02,	// (0x000243e9) popup_midp_note_alarm_window_g1_ParamLimits

0xda02,	// (0x000243e9) popup_midp_note_alarm_window_g1

0xda32,	// (0x00024419) popup_midp_note_alarm_window_t1_ParamLimits

0xda32,	// (0x00024419) popup_midp_note_alarm_window_t1

0xdafd,	// (0x000244e4) popup_midp_note_alarm_window_t2_ParamLimits

0xdafd,	// (0x000244e4) popup_midp_note_alarm_window_t2

0xdbab,	// (0x00024592) popup_midp_note_alarm_window_t3_ParamLimits

0xdbab,	// (0x00024592) popup_midp_note_alarm_window_t3

0xdbd3,	// (0x000245ba) popup_midp_note_alarm_window_t4_ParamLimits

0xdbd3,	// (0x000245ba) popup_midp_note_alarm_window_t4

0xdbf3,	// (0x000245da) popup_midp_note_alarm_window_t5_ParamLimits

0xdbf3,	// (0x000245da) popup_midp_note_alarm_window_t5

0x000a,

0xf8a4,	// (0x0002628b) popup_midp_note_alarm_window_t_ParamLimits

0xf8a4,	// (0x0002628b) popup_midp_note_alarm_window_t

0xdc9f,	// (0x00024686) wait_bar_pane_cp1_ParamLimits

0xdc9f,	// (0x00024686) wait_bar_pane_cp1

0xbb91,	// (0x00022578) wait_anim_pane_copy1

0xbb91,	// (0x00022578) wait_border_pane_copy1

0xd6a0,	// (0x00024087) wait_border_pane_g1_copy1

0x4d13,	// (0x0001b6fa) form_field_popup_pane_g1

0x858c,	// (0x0001ef73) form_field_popup_pane_t1_ParamLimits

0xc1e2,	// (0x00022bc9) input_focus_pane_cp7_ParamLimits

0xc21c,	// (0x00022c03) list_form_pane_ParamLimits

0x4d35,	// (0x0001b71c) form_field_popup_wide_pane_g1

0x4d3d,	// (0x0001b724) form_field_popup_wide_pane_t1_ParamLimits

0xc1e2,	// (0x00022bc9) input_focus_pane_cp8_ParamLimits

0xc228,	// (0x00022c0f) list_form_wide_pane_ParamLimits

0xe433,	// (0x00024e1a) aid_size_cell_graphic_pane

0x860b,	// (0x0001eff2) data_form_pane_t1_ParamLimits

0x86ae,	// (0x0001f095) data_form_wide_pane_t1_ParamLimits

0x99b6,	// (0x0002039d) bg_status_flat_pane

0x8a41,	// (0x0001f428) title_pane_t1_ParamLimits

0xbba7,	// (0x0002258e) title_pane_t2_ParamLimits

0xbbcd,	// (0x000225b4) title_pane_t3_ParamLimits

0xf56f,	// (0x00025f56) title_pane_t_ParamLimits

0xc698,	// (0x0002307f) level_1_signal_ParamLimits

0xc6a5,	// (0x0002308c) level_2_signal_ParamLimits

0xc6b2,	// (0x00023099) level_3_signal_ParamLimits

0xc6bf,	// (0x000230a6) level_4_signal_ParamLimits

0xc6cc,	// (0x000230b3) level_5_signal_ParamLimits

0xc6d9,	// (0x000230c0) level_6_signal_ParamLimits

0xc6e6,	// (0x000230cd) level_7_signal_ParamLimits

0xc698,	// (0x0002307f) level_1_battery_ParamLimits

0xc6a5,	// (0x0002308c) level_2_battery_ParamLimits

0xc6b2,	// (0x00023099) level_3_battery_ParamLimits

0xc6bf,	// (0x000230a6) level_4_battery_ParamLimits

0xc6cc,	// (0x000230b3) level_5_battery_ParamLimits

0xc6d9,	// (0x000230c0) level_6_battery_ParamLimits

0xc6e6,	// (0x000230cd) level_7_battery_ParamLimits

0xd8ab,	// (0x00024292) bg_status_flat_pane_g1

0xd8b3,	// (0x0002429a) bg_status_flat_pane_g2

0xd8bb,	// (0x000242a2) bg_status_flat_pane_g3

0xd8c3,	// (0x000242aa) bg_status_flat_pane_g4

0xd8cb,	// (0x000242b2) bg_status_flat_pane_g5

0xd8d3,	// (0x000242ba) bg_status_flat_pane_g6

0xd8db,	// (0x000242c2) bg_status_flat_pane_g7

0x8ad5,	// (0x0001f4bc) tabs_3_active_pane_t1_ParamLimits

0x8ad5,	// (0x0001f4bc) tabs_3_passive_pane_t1_ParamLimits

0x8aef,	// (0x0001f4d6) tabs_4_active_pane_t1_ParamLimits

0x8aef,	// (0x0001f4d6) tabs_4_1_passive_pane_t1_ParamLimits

0x8e11,	// (0x0001f7f8) tabs_2_active_pane_t1_ParamLimits

0x8e11,	// (0x0001f7f8) tabs_2_passive_pane_t1_ParamLimits

0xbbed,	// (0x000225d4) bg_active_tab_pane_cp4_ParamLimits

0x8e23,	// (0x0001f80a) tabs_2_long_active_pane_t1_ParamLimits

0xc339,	// (0x00022d20) bg_passive_tab_pane_cp4_ParamLimits

0x61b7,	// (0x0001cb9e) list_single_midp_graphic_pane_t1_ParamLimits

0xbbed,	// (0x000225d4) bg_active_tab_pane_cp5_ParamLimits

0x8e36,	// (0x0001f81d) tabs_3_long_active_pane_t1_ParamLimits

0xc339,	// (0x00022d20) bg_passive_tab_pane_cp5_ParamLimits

0x61b7,	// (0x0001cb9e) list_single_midp_graphic_pane_t1

0x99b6,	// (0x0002039d) bg_status_flat_pane_ParamLimits

0xd044,	// (0x00023a2b) indicator_pane_cp2_ParamLimits

0xd044,	// (0x00023a2b) indicator_pane_cp2

0x9b2e,	// (0x00020515) navi_pane_srt_ParamLimits

0x9b2e,	// (0x00020515) navi_pane_srt

0xd06c,	// (0x00023a53) popup_clock_digital_analogue_window_cp1

0xbc31,	// (0x00022618) indicator_pane_t1

0xcc17,	// (0x000235fe) copy_highlight_pane

0xcc17,	// (0x000235fe) cursor_graphics_pane

0xcc17,	// (0x000235fe) graphic_within_text_pane

0xcc17,	// (0x000235fe) link_highlight_pane

0xe020,	// (0x00024a07) popup_preview_text_window_t5_ParamLimits

0xe020,	// (0x00024a07) popup_preview_text_window_t5

0xcc92,	// (0x00023679) cursor_digital_pane

0xcc92,	// (0x00023679) cursor_primary_pane

0xcca3,	// (0x0002368a) cursor_primary_small_pane

0xccab,	// (0x00023692) cursor_secondary_pane

0xccb3,	// (0x0002369a) cursor_title_pane

0xcc92,	// (0x00023679) link_highlight_digital_pane

0xcc9a,	// (0x00023681) link_highlight_primary_pane

0xcca3,	// (0x0002368a) link_highlight_primary_small_pane

0xccab,	// (0x00023692) link_highlight_secondary_pane

0xccb3,	// (0x0002369a) link_highlight_title_pane

0xcc92,	// (0x00023679) copy_highlight_digital_pane

0xcc92,	// (0x00023679) copy_highlight_primary_pane

0xcca3,	// (0x0002368a) copy_highlight_primary_small_pane

0xccab,	// (0x00023692) copy_highlight_secondary_pane

0xccb3,	// (0x0002369a) copy_highlight_title_pane

0xccab,	// (0x00023692) graphic_text_digital_pane

0xd92b,	// (0x00024312) graphic_text_primary_pane

0xd934,	// (0x0002431b) graphic_text_primary_small_pane

0xcca3,	// (0x0002368a) graphic_text_secondary_pane

0xcc92,	// (0x00023679) graphic_text_title_pane

0x90a0,	// (0x0001fa87) cursor_primary_pane_g1

0xd91d,	// (0x00024304) cursor_text_primary_t1

0x9e3e,	// (0x00020825) cursor_primary_small_pane_g1

0xd90f,	// (0x000242f6) cursor_text_primary_small_t1

0x9e34,	// (0x0002081b) cursor_primary_small_pane_g1_copy1

0xd901,	// (0x000242e8) cursor_text_primary_small_t1_copy1

0xd8f3,	// (0x000242da) cursor_text_title_t1

0x9e2a,	// (0x00020811) cursor_title_pane_g1

0x90a0,	// (0x0001fa87) cursor_digital_pane_g1

0xccbb,	// (0x000236a2) cursor_text_digital_t1

0xd894,	// (0x0002427b) link_highlight_primary_pane_g1

0xd89c,	// (0x00024283) link_highlight_primary_pane_t1

0xccc9,	// (0x000236b0) link_highlight_primary_small_pane_g1

0xccd1,	// (0x000236b8) link_highlight_primary_small_pane_t1

0xccc9,	// (0x000236b0) link_highlight_secondary_pane_g1

0xcce0,	// (0x000236c7) link_highlight_secondary_pane_t1

0xd808,	// (0x000241ef) link_highlight_title_pane_g1

0xd810,	// (0x000241f7) link_highlight_title_pane_t1

0xd7f1,	// (0x000241d8) link_highlight_digital_pane_g1

0xd7f9,	// (0x000241e0) link_highlight_digital_pane_t1

0xd6e5,	// (0x000240cc) copy_highlight_primary_pane_g1

0xd6ed,	// (0x000240d4) copy_highlight_primary_pane_t1

0xd6bf,	// (0x000240a6) copy_highlight_primary_small_pane_g1

0xd6d6,	// (0x000240bd) copy_highlight_primary_small_pane_t1

0xccef,	// (0x000236d6) copy_highlight_secondary_pane_g1

0xccf7,	// (0x000236de) copy_highlight_secondary_pane_t1

0xd6bf,	// (0x000240a6) copy_highlight_title_pane_g1

0xd6c7,	// (0x000240ae) copy_highlight_title_pane_t1

0xd6e5,	// (0x000240cc) copy_highlight_digital_pane_g1

0xe5bd,	// (0x00024fa4) copy_highlight_digital_pane_t1

0xe511,	// (0x00024ef8) graphic_text_primary_pane_g1

0xe5a1,	// (0x00024f88) graphic_text_primary_pane_t1

0xe5af,	// (0x00024f96) graphic_text_primary_pane_t2

0x0001,

0xf9d3,	// (0x000263ba) graphic_text_primary_pane_t

0xe57d,	// (0x00024f64) graphic_text_primary_small_pane_g1

0xe585,	// (0x00024f6c) graphic_text_primary_small_pane_t1

0xe593,	// (0x00024f7a) graphic_text_primary_small_pane_t2

0x0001,

0xf9ce,	// (0x000263b5) graphic_text_primary_small_pane_t

0xe559,	// (0x00024f40) graphic_text_secondary_pane_g1

0xe561,	// (0x00024f48) graphic_text_secondary_pane_t1

0xe56f,	// (0x00024f56) graphic_text_secondary_pane_t2

0x0001,

0xf9c9,	// (0x000263b0) graphic_text_secondary_pane_t

0xe535,	// (0x00024f1c) graphic_text_title_pane_g1

0xe53d,	// (0x00024f24) graphic_text_title_pane_t1

0xe54b,	// (0x00024f32) graphic_text_title_pane_t2

0x0001,

0xf9c4,	// (0x000263ab) graphic_text_title_pane_t

0xe511,	// (0x00024ef8) graphic_text_digital_pane_g1

0xe519,	// (0x00024f00) graphic_text_digital_pane_t1

0xe527,	// (0x00024f0e) graphic_text_digital_pane_t2

0x0001,

0xf9bf,	// (0x000263a6) graphic_text_digital_pane_t

0xbbed,	// (0x000225d4) navi_icon_pane_srt_ParamLimits

0xbbed,	// (0x000225d4) navi_icon_pane_srt

0xbb91,	// (0x00022578) navi_midp_pane_srt

0xbb91,	// (0x00022578) navi_navi_pane_srt

0xbbed,	// (0x000225d4) navi_text_pane_srt_ParamLimits

0xbbed,	// (0x000225d4) navi_text_pane_srt

0xe4dc,	// (0x00024ec3) navi_navi_icon_text_pane_srt

0xe4e4,	// (0x00024ecb) navi_navi_pane_srt_g1_ParamLimits

0xe4e4,	// (0x00024ecb) navi_navi_pane_srt_g1

0xe4f6,	// (0x00024edd) navi_navi_pane_srt_g2_ParamLimits

0xe4f6,	// (0x00024edd) navi_navi_pane_srt_g2

0x0001,

0xf9ba,	// (0x000263a1) navi_navi_pane_srt_g_ParamLimits

0xf9ba,	// (0x000263a1) navi_navi_pane_srt_g

0xe508,	// (0x00024eef) navi_navi_tabs_pane_srt

0xe4dc,	// (0x00024ec3) navi_navi_text_pane_srt

0xe4dc,	// (0x00024ec3) navi_navi_volume_pane_srt

0xe4cd,	// (0x00024eb4) navi_navi_text_pane_srt_t1

0x6537,	// (0x0001cf1e) navi_navi_volume_pane_srt_g1

0x653f,	// (0x0001cf26) volume_small_pane_srt_ParamLimits

0x653f,	// (0x0001cf26) volume_small_pane_srt

0x5f33,	// (0x0001c91a) volume_small_pane_srt_g1_ParamLimits

0x5f33,	// (0x0001c91a) volume_small_pane_srt_g1

0x5f43,	// (0x0001c92a) volume_small_pane_srt_g2_ParamLimits

0x5f43,	// (0x0001c92a) volume_small_pane_srt_g2

0x5f54,	// (0x0001c93b) volume_small_pane_srt_g3_ParamLimits

0x5f54,	// (0x0001c93b) volume_small_pane_srt_g3

0x5f65,	// (0x0001c94c) volume_small_pane_srt_g4_ParamLimits

0x5f65,	// (0x0001c94c) volume_small_pane_srt_g4

0x5f76,	// (0x0001c95d) volume_small_pane_srt_g5_ParamLimits

0x5f76,	// (0x0001c95d) volume_small_pane_srt_g5

0x5f87,	// (0x0001c96e) volume_small_pane_srt_g6_ParamLimits

0x5f87,	// (0x0001c96e) volume_small_pane_srt_g6

0x5f98,	// (0x0001c97f) volume_small_pane_srt_g7_ParamLimits

0x5f98,	// (0x0001c97f) volume_small_pane_srt_g7

0x5fa9,	// (0x0001c990) volume_small_pane_srt_g8_ParamLimits

0x5fa9,	// (0x0001c990) volume_small_pane_srt_g8

0x5fba,	// (0x0001c9a1) volume_small_pane_srt_g9_ParamLimits

0x5fba,	// (0x0001c9a1) volume_small_pane_srt_g9

0x5fcb,	// (0x0001c9b2) volume_small_pane_srt_g10_ParamLimits

0x5fcb,	// (0x0001c9b2) volume_small_pane_srt_g10

0x0009,

0xf775,	// (0x0002615c) volume_small_pane_srt_g_ParamLimits

0xf775,	// (0x0002615c) volume_small_pane_srt_g

0xbe65,	// (0x0002284c) query_popup_data_pane_cp2

0xe4b3,	// (0x00024e9a) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xe4b3,	// (0x00024e9a) navi_navi_icon_text_pane_srt_t1

0xd92b,	// (0x00024312) navi_tabs_2_long_pane_srt

0xd92b,	// (0x00024312) navi_tabs_2_pane_srt

0xd92b,	// (0x00024312) navi_tabs_3_long_pane_srt

0xd92b,	// (0x00024312) navi_tabs_3_pane_srt

0xd92b,	// (0x00024312) navi_tabs_4_pane_srt

0x6517,	// (0x0001cefe) tabs_2_active_pane_srt_ParamLimits

0x6517,	// (0x0001cefe) tabs_2_active_pane_srt

0x6527,	// (0x0001cf0e) tabs_2_passive_pane_srt_ParamLimits

0x6527,	// (0x0001cf0e) tabs_2_passive_pane_srt

0xd261,	// (0x00023c48) bg_passive_tab_pane_cp1_srt_ParamLimits

0xd261,	// (0x00023c48) bg_passive_tab_pane_cp1_srt

0xe491,	// (0x00024e78) bg_passive_tab_pane_g1_cp1_srt

0xc8c0,	// (0x000232a7) bg_passive_tab_pane_g2_cp1_srt

0xe49a,	// (0x00024e81) bg_passive_tab_pane_g3_cp1_srt

0xbbdf,	// (0x000225c6) bg_active_tab_pane_cp1_srt_ParamLimits

0xbbdf,	// (0x000225c6) bg_active_tab_pane_cp1_srt

0xe4a3,	// (0x00024e8a) tabs_2_active_pane_srt_g1

0xa358,	// (0x00020d3f) tabs_2_active_pane_srt_t1_ParamLimits

0xa358,	// (0x00020d3f) tabs_2_active_pane_srt_t1

0xe491,	// (0x00024e78) bg_active_tab_pane_g1_cp1_srt

0xc8c0,	// (0x000232a7) bg_active_tab_pane_g2_cp1_srt

0xe49a,	// (0x00024e81) bg_active_tab_pane_g3_cp1_srt

0x64e4,	// (0x0001cecb) tabs_3_active_pane_srt_ParamLimits

0x64e4,	// (0x0001cecb) tabs_3_active_pane_srt

0x64f5,	// (0x0001cedc) tabs_3_passive_pane_cp_srt_ParamLimits

0x64f5,	// (0x0001cedc) tabs_3_passive_pane_cp_srt

0x6506,	// (0x0001ceed) tabs_3_passive_pane_srt_ParamLimits

0x6506,	// (0x0001ceed) tabs_3_passive_pane_srt

0xd261,	// (0x00023c48) bg_passive_tab_pane_cp2_srt_ParamLimits

0xd261,	// (0x00023c48) bg_passive_tab_pane_cp2_srt

0xcd06,	// (0x000236ed) bg_passive_tab_pane_g1_cp2_srt

0xc8c0,	// (0x000232a7) bg_passive_tab_pane_g2_cp2_srt

0xcd0f,	// (0x000236f6) bg_passive_tab_pane_g3_cp2_srt

0xbbdf,	// (0x000225c6) bg_active_tab_pane_cp2_srt_ParamLimits

0xbbdf,	// (0x000225c6) bg_active_tab_pane_cp2_srt

0xe489,	// (0x00024e70) tabs_3_active_pane_srt_g1

0xa342,	// (0x00020d29) tabs_3_active_pane_srt_t1_ParamLimits

0xa342,	// (0x00020d29) tabs_3_active_pane_srt_t1

0xcd06,	// (0x000236ed) bg_active_tab_pane_g1_cp2_srt

0xc8c0,	// (0x000232a7) bg_active_tab_pane_g2_cp2_srt

0xcd0f,	// (0x000236f6) bg_active_tab_pane_g3_cp2_srt

0x649c,	// (0x0001ce83) tabs_4_active_pane_srt_ParamLimits

0x649c,	// (0x0001ce83) tabs_4_active_pane_srt

0x64ae,	// (0x0001ce95) tabs_4_passive_pane_cp2_srt_ParamLimits

0x64ae,	// (0x0001ce95) tabs_4_passive_pane_cp2_srt

0xce33,	// (0x0002381a) aid_size_cell_toolbar

0xdaeb,	// (0x000244d2) main_idle_act_pane_ParamLimits

0xcefd,	// (0x000238e4) popup_large_graphic_colour_window_ParamLimits

0x987a,	// (0x00020261) popup_toolbar_window_ParamLimits

0x987a,	// (0x00020261) popup_toolbar_window

0xe390,	// (0x00024d77) list_single_graphic_2heading_pane_ParamLimits

0xe390,	// (0x00024d77) list_single_graphic_2heading_pane

0xc4e3,	// (0x00022eca) aid_size_cell_apps_grid_lsc_pane

0xc4f5,	// (0x00022edc) aid_size_cell_apps_grid_prt_pane

0xc339,	// (0x00022d20) bg_wml_button_pane_cp1_ParamLimits

0xc339,	// (0x00022d20) bg_wml_button_pane_cp1

0x9dda,	// (0x000207c1) form_midp_field_text_pane_t1_ParamLimits

0xd261,	// (0x00023c48) input_focus_pane_cp050_ParamLimits

0xd3a9,	// (0x00023d90) list_midp_form_text_pane_ParamLimits

0xd386,	// (0x00023d6d) input_focus_pane_cp051_ParamLimits

0xd39a,	// (0x00023d81) list_midp_choice_pane_ParamLimits

0x9d6b,	// (0x00020752) list_single_2graphic_pane_cp3_ParamLimits

0x9d6b,	// (0x00020752) list_single_2graphic_pane_cp3

0x9d81,	// (0x00020768) list_single_midp_graphic_pane_ParamLimits

0x9d81,	// (0x00020768) list_single_midp_graphic_pane

0x4851,	// (0x0001b238) list_single_graphic_2heading_pane_g1_ParamLimits

0x4851,	// (0x0001b238) list_single_graphic_2heading_pane_g1

0x47d7,	// (0x0001b1be) list_single_graphic_2heading_pane_g4_ParamLimits

0x47d7,	// (0x0001b1be) list_single_graphic_2heading_pane_g4

0x47e3,	// (0x0001b1ca) list_single_graphic_2heading_pane_g5_ParamLimits

0x47e3,	// (0x0001b1ca) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c8,	// (0x000261af) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c8,	// (0x000261af) list_single_graphic_2heading_pane_g

0x4f06,	// (0x0001b8ed) list_single_graphic_2heading_pane_t1_ParamLimits

0x4f06,	// (0x0001b8ed) list_single_graphic_2heading_pane_t1

0x4f1a,	// (0x0001b901) list_single_graphic_2heading_pane_t2_ParamLimits

0x4f1a,	// (0x0001b901) list_single_graphic_2heading_pane_t2

0x4f34,	// (0x0001b91b) list_single_graphic_2heading_pane_t3_ParamLimits

0x4f34,	// (0x0001b91b) list_single_graphic_2heading_pane_t3

0x0002,

0xf7cf,	// (0x000261b6) list_single_graphic_2heading_pane_t_ParamLimits

0xf7cf,	// (0x000261b6) list_single_graphic_2heading_pane_t

0xd0af,	// (0x00023a96) bg_popup_sub_pane_cp2

0xd0d9,	// (0x00023ac0) grid_toobar_pane

0x613c,	// (0x0001cb23) cell_toolbar_pane_ParamLimits

0x613c,	// (0x0001cb23) cell_toolbar_pane

0xd115,	// (0x00023afc) cell_toolbar_pane_g1_ParamLimits

0xd115,	// (0x00023afc) cell_toolbar_pane_g1

0xd129,	// (0x00023b10) cell_toolbar_pane_g2_ParamLimits

0xd129,	// (0x00023b10) cell_toolbar_pane_g2

0x0001,

0xf7d6,	// (0x000261bd) cell_toolbar_pane_g_ParamLimits

0xf7d6,	// (0x000261bd) cell_toolbar_pane_g

0xd14b,	// (0x00023b32) grid_highlight_pane_cp2_ParamLimits

0xd14b,	// (0x00023b32) grid_highlight_pane_cp2

0xd165,	// (0x00023b4c) toolbar_button_pane

0xd171,	// (0x00023b58) toolbar_button_pane_g1

0xd179,	// (0x00023b60) toolbar_button_pane_g2

0xd181,	// (0x00023b68) toolbar_button_pane_g3

0xd189,	// (0x00023b70) toolbar_button_pane_g4

0xd191,	// (0x00023b78) toolbar_button_pane_g5

0xd199,	// (0x00023b80) toolbar_button_pane_g6

0xd1a1,	// (0x00023b88) toolbar_button_pane_g7

0xd1a9,	// (0x00023b90) toolbar_button_pane_g8

0xd1b1,	// (0x00023b98) toolbar_button_pane_g9

0x0009,

0xf7db,	// (0x000261c2) toolbar_button_pane_g

0x6174,	// (0x0001cb5b) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6174,	// (0x0001cb5b) list_single_2graphic_pane_g1_cp3

0x9ccd,	// (0x000206b4) list_single_2graphic_pane_g2_cp3_ParamLimits

0x9ccd,	// (0x000206b4) list_single_2graphic_pane_g2_cp3

0xca43,	// (0x0002342a) list_single_2graphic_pane_g3_cp3

0x6191,	// (0x0001cb78) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6191,	// (0x0001cb78) list_single_2graphic_pane_g4_cp3

0x619d,	// (0x0001cb84) list_single_2graphic_pane_t1_cp3_ParamLimits

0x619d,	// (0x0001cb84) list_single_2graphic_pane_t1_cp3

0xca37,	// (0x0002341e) list_single_midp_graphic_pane_g2_ParamLimits

0xca37,	// (0x0002341e) list_single_midp_graphic_pane_g2

0xce3b,	// (0x00023822) aid_zoom_text_primary

0x4ef6,	// (0x0001b8dd) aid_zoom_text_secondary

0xcdc3,	// (0x000237aa) status_small_pane_g7_ParamLimits

0xcdc3,	// (0x000237aa) status_small_pane_g7

0xcde6,	// (0x000237cd) status_small_pane_t1_ParamLimits

0x8a1d,	// (0x0001f404) title_pane_g2

0x0003,

0xf566,	// (0x00025f4d) title_pane_g

0x8ca8,	// (0x0001f68f) aid_size_cell_colour_1_pane_ParamLimits

0x8ca8,	// (0x0001f68f) aid_size_cell_colour_1_pane

0x8cbc,	// (0x0001f6a3) aid_size_cell_colour_2_pane_ParamLimits

0x8cbc,	// (0x0001f6a3) aid_size_cell_colour_2_pane

0x8cd0,	// (0x0001f6b7) aid_size_cell_colour_3_pane_ParamLimits

0x8cd0,	// (0x0001f6b7) aid_size_cell_colour_3_pane

0x8ce4,	// (0x0001f6cb) aid_size_cell_colour_4_pane_ParamLimits

0x8ce4,	// (0x0001f6cb) aid_size_cell_colour_4_pane

0x5b8f,	// (0x0001c576) title_pane_stacon_g1_ParamLimits

0x5b8f,	// (0x0001c576) title_pane_stacon_g1

0xd744,	// (0x0002412b) popup_note_wait_window_g3_ParamLimits

0xd744,	// (0x0002412b) popup_note_wait_window_g3

0xd7ba,	// (0x000241a1) popup_note_wait_window_t5_ParamLimits

0xd7ba,	// (0x000241a1) popup_note_wait_window_t5

0xbb91,	// (0x00022578) main_feb_china_hwr_fs_writing_pane

0x92a2,	// (0x0001fc89) popup_feb_china_hwr_fs_window_ParamLimits

0x92a2,	// (0x0001fc89) popup_feb_china_hwr_fs_window

0x9cde,	// (0x000206c5) aid_size_cell_hwr_fs_ParamLimits

0x9cde,	// (0x000206c5) aid_size_cell_hwr_fs

0xd261,	// (0x00023c48) bg_popup_sub_pane_cp3_ParamLimits

0xd261,	// (0x00023c48) bg_popup_sub_pane_cp3

0x9cf3,	// (0x000206da) grid_hwr_fs_pane_ParamLimits

0x9cf3,	// (0x000206da) grid_hwr_fs_pane

0x61fa,	// (0x0001cbe1) linegrid_hwr_fs_pane_ParamLimits

0x61fa,	// (0x0001cbe1) linegrid_hwr_fs_pane

0x9d0b,	// (0x000206f2) cell_hwr_fs_pane_ParamLimits

0x9d0b,	// (0x000206f2) cell_hwr_fs_pane

0xd26d,	// (0x00023c54) linegrid_hwr_fs_pane_g1_ParamLimits

0xd26d,	// (0x00023c54) linegrid_hwr_fs_pane_g1

0x9d31,	// (0x00020718) linegrid_hwr_fs_pane_g2_ParamLimits

0x9d31,	// (0x00020718) linegrid_hwr_fs_pane_g2

0xd279,	// (0x00023c60) linegrid_hwr_fs_pane_g3_ParamLimits

0xd279,	// (0x00023c60) linegrid_hwr_fs_pane_g3

0x622c,	// (0x0001cc13) linegrid_hwr_fs_pane_g4_ParamLimits

0x622c,	// (0x0001cc13) linegrid_hwr_fs_pane_g4

0x6246,	// (0x0001cc2d) linegrid_hwr_fs_pane_g5_ParamLimits

0x6246,	// (0x0001cc2d) linegrid_hwr_fs_pane_g5

0x0004,

0xf801,	// (0x000261e8) linegrid_hwr_fs_pane_g_ParamLimits

0xf801,	// (0x000261e8) linegrid_hwr_fs_pane_g

0xd285,	// (0x00023c6c) cell_hwr_fs_pane_g1_ParamLimits

0xd285,	// (0x00023c6c) cell_hwr_fs_pane_g1

0xd07d,	// (0x00023a64) cell_hwr_fs_pane_g2_ParamLimits

0xd07d,	// (0x00023a64) cell_hwr_fs_pane_g2

0x9d43,	// (0x0002072a) cell_hwr_fs_pane_g3_ParamLimits

0x9d43,	// (0x0002072a) cell_hwr_fs_pane_g3

0x9d50,	// (0x00020737) cell_hwr_fs_pane_g4_ParamLimits

0x9d50,	// (0x00020737) cell_hwr_fs_pane_g4

0x0003,

0xf80c,	// (0x000261f3) cell_hwr_fs_pane_g_ParamLimits

0xf80c,	// (0x000261f3) cell_hwr_fs_pane_g

0x9d5d,	// (0x00020744) cell_hwr_fs_pane_t1

0xbb91,	// (0x00022578) grid_highlight_pane_cp6

0xbb91,	// (0x00022578) main_idle_act2_pane

0xc2e8,	// (0x00022ccf) aid_inside_area_popup_secondary

0x9f9a,	// (0x00020981) aid_inside_area_window_primary_ParamLimits

0x9f9a,	// (0x00020981) aid_inside_area_window_primary

0xe5cc,	// (0x00024fb3) ai2_news_ticker_pane

0xe5d4,	// (0x00024fbb) aid_size_cell_ai1_link_ParamLimits

0xe5d4,	// (0x00024fbb) aid_size_cell_ai1_link

0xe5ee,	// (0x00024fd5) popup_ai2_data_window_ParamLimits

0xe5ee,	// (0x00024fd5) popup_ai2_data_window

0xe602,	// (0x00024fe9) popup_ai2_link_window_ParamLimits

0xe602,	// (0x00024fe9) popup_ai2_link_window

0xd261,	// (0x00023c48) bg_popup_sub_pane_cp4_ParamLimits

0xd261,	// (0x00023c48) bg_popup_sub_pane_cp4

0xe616,	// (0x00024ffd) grid_ai2_link_pane_ParamLimits

0xe616,	// (0x00024ffd) grid_ai2_link_pane

0xe62d,	// (0x00025014) popup_ai2_link_window_g1_ParamLimits

0xe62d,	// (0x00025014) popup_ai2_link_window_g1

0xe639,	// (0x00025020) popup_ai2_link_window_g2_ParamLimits

0xe639,	// (0x00025020) popup_ai2_link_window_g2

0x0001,

0xf9d8,	// (0x000263bf) popup_ai2_link_window_g_ParamLimits

0xf9d8,	// (0x000263bf) popup_ai2_link_window_g

0xe648,	// (0x0002502f) ai2_mp_button_pane

0xe650,	// (0x00025037) ai2_mp_volume_pane

0xd386,	// (0x00023d6d) bg_popup_sub_pane_cp5_ParamLimits

0xd386,	// (0x00023d6d) bg_popup_sub_pane_cp5

0xe658,	// (0x0002503f) heading_ai2_gene_pane_ParamLimits

0xe658,	// (0x0002503f) heading_ai2_gene_pane

0xe664,	// (0x0002504b) list_ai2_gene_pane_ParamLimits

0xe664,	// (0x0002504b) list_ai2_gene_pane

0xe6ac,	// (0x00025093) cell_ai2_link_pane_ParamLimits

0xe6ac,	// (0x00025093) cell_ai2_link_pane

0xe6c2,	// (0x000250a9) cell_ai2_link_pane_g1

0xbb91,	// (0x00022578) grid_highlight_pane_cp7

0x6554,	// (0x0001cf3b) ai2_mp_volume_pane_g1

0xe793,	// (0x0002517a) ai2_mp_volume_pane_g2

0xe708,	// (0x000250ef) list_ai2_gene_pane_t1

0xe79b,	// (0x00025182) ai2_mp_volume_pane_g3

0x0002,

0xf9f1,	// (0x000263d8) ai2_mp_volume_pane_g

0x655c,	// (0x0001cf43) volume_small_pane_cp3

0xe7a3,	// (0x0002518a) aid_size_cell_ai2_button

0xe7ab,	// (0x00025192) grid_ai2_button_pane

0xe7b4,	// (0x0002519b) cell_ai2_button_pane_ParamLimits

0xe7b4,	// (0x0002519b) cell_ai2_button_pane

0xbb87,	// (0x0002256e) cell_ai2_button_pane_g1

0xbb91,	// (0x00022578) grid_highlight_pane_cp8

0xe753,	// (0x0002513a) ai2_gene_pane_t1_ParamLimits

0xe753,	// (0x0002513a) ai2_gene_pane_t1

0x9234,	// (0x0001fc1b) aid_height_parent_landscape

0xa0e3,	// (0x00020aca) aid_height_set_list

0xdaeb,	// (0x000244d2) aid_size_parent

0xe433,	// (0x00024e1a) aid_size_cell_graphic_pane_ParamLimits

0xe674,	// (0x0002505b) popup_ai2_data_window_g1_ParamLimits

0xe674,	// (0x0002505b) popup_ai2_data_window_g1

0xe680,	// (0x00025067) ai2_news_ticker_pane_g1

0xe688,	// (0x0002506f) ai2_news_ticker_pane_g2

0x0001,

0xf9dd,	// (0x000263c4) ai2_news_ticker_pane_g

0xe690,	// (0x00025077) ai2_news_ticker_pane_t1

0xe69e,	// (0x00025085) ai2_news_ticker_pane_t2

0x0001,

0xf9e2,	// (0x000263c9) ai2_news_ticker_pane_t

0xe6cb,	// (0x000250b2) heading_ai2_gene_pane_g1

0xe6d3,	// (0x000250ba) heading_ai2_gene_pane_t1_ParamLimits

0xe6d3,	// (0x000250ba) heading_ai2_gene_pane_t1

0xe6e8,	// (0x000250cf) list_highlight_pane_cp6

0xe6f0,	// (0x000250d7) ai2_gene_pane_ParamLimits

0xe6f0,	// (0x000250d7) ai2_gene_pane

0xe716,	// (0x000250fd) list_ai2_gene_pane_t2

0x0001,

0xf9e7,	// (0x000263ce) list_ai2_gene_pane_t

0xe724,	// (0x0002510b) list_highlight_pane_cp8_ParamLimits

0xe724,	// (0x0002510b) list_highlight_pane_cp8

0xe735,	// (0x0002511c) ai2_gene_pane_g1_ParamLimits

0xe735,	// (0x0002511c) ai2_gene_pane_g1

0xe747,	// (0x0002512e) ai2_gene_pane_g2_ParamLimits

0xe747,	// (0x0002512e) ai2_gene_pane_g2

0x0001,

0xf9ec,	// (0x000263d3) ai2_gene_pane_g_ParamLimits

0xf9ec,	// (0x000263d3) ai2_gene_pane_g

0xc178,	// (0x00022b5f) scroll_pane_cp12

0x91f3,	// (0x0001fbda) control_pane_t3_ParamLimits

0x91f3,	// (0x0001fbda) control_pane_t3

0xcdd7,	// (0x000237be) status_small_pane_g8_ParamLimits

0xcdd7,	// (0x000237be) status_small_pane_g8

0x9335,	// (0x0001fd1c) popup_find_window_ParamLimits

0x95b0,	// (0x0001ff97) popup_note_image_window_ParamLimits

0x4851,	// (0x0001b238) list_double2_graphic_pane_vc_g1_ParamLimits

0x4851,	// (0x0001b238) list_double2_graphic_pane_vc_g1

0x47d7,	// (0x0001b1be) list_double2_graphic_pane_vc_g2_ParamLimits

0x47d7,	// (0x0001b1be) list_double2_graphic_pane_vc_g2

0x47e3,	// (0x0001b1ca) list_double2_graphic_pane_vc_g3_ParamLimits

0x47e3,	// (0x0001b1ca) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c8,	// (0x000261af) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c8,	// (0x000261af) list_double2_graphic_pane_vc_g

0x4f4c,	// (0x0001b933) list_double2_graphic_pane_vc_t1_ParamLimits

0x4f4c,	// (0x0001b933) list_double2_graphic_pane_vc_t1

0x47d7,	// (0x0001b1be) list_single_heading_pane_vc_g1_ParamLimits

0x47d7,	// (0x0001b1be) list_single_heading_pane_vc_g1

0x47e3,	// (0x0001b1ca) list_single_heading_pane_vc_g2_ParamLimits

0x47e3,	// (0x0001b1ca) list_single_heading_pane_vc_g2

0x0001,

0xf5e0,	// (0x00025fc7) list_single_heading_pane_vc_g_ParamLimits

0xf5e0,	// (0x00025fc7) list_single_heading_pane_vc_g

0x4f62,	// (0x0001b949) list_single_heading_pane_vc_t1_ParamLimits

0x4f62,	// (0x0001b949) list_single_heading_pane_vc_t1

0x4f78,	// (0x0001b95f) list_single_heading_pane_vc_t2_ParamLimits

0x4f78,	// (0x0001b95f) list_single_heading_pane_vc_t2

0x0001,

0xf7f0,	// (0x000261d7) list_single_heading_pane_vc_t_ParamLimits

0xf7f0,	// (0x000261d7) list_single_heading_pane_vc_t

0xd1b9,	// (0x00023ba0) list_setting_number_pane_vc_g1_ParamLimits

0xd1b9,	// (0x00023ba0) list_setting_number_pane_vc_g1

0xd1c5,	// (0x00023bac) list_setting_number_pane_vc_g2_ParamLimits

0xd1c5,	// (0x00023bac) list_setting_number_pane_vc_g2

0x0001,

0xf7f5,	// (0x000261dc) list_setting_number_pane_vc_g_ParamLimits

0xf7f5,	// (0x000261dc) list_setting_number_pane_vc_g

0xd1d1,	// (0x00023bb8) list_setting_number_pane_vc_t1_ParamLimits

0xd1d1,	// (0x00023bb8) list_setting_number_pane_vc_t1

0xd1e5,	// (0x00023bcc) list_setting_number_pane_vc_t2_ParamLimits

0xd1e5,	// (0x00023bcc) list_setting_number_pane_vc_t2

0xd1ff,	// (0x00023be6) list_setting_number_pane_vc_t3_ParamLimits

0xd1ff,	// (0x00023be6) list_setting_number_pane_vc_t3

0x0002,

0xf7fa,	// (0x000261e1) list_setting_number_pane_vc_t_ParamLimits

0xf7fa,	// (0x000261e1) list_setting_number_pane_vc_t

0xd225,	// (0x00023c0c) set_value_pane_vc_ParamLimits

0xd225,	// (0x00023c0c) set_value_pane_vc

0xe390,	// (0x00024d77) list_double2_graphic_pane_vc_ParamLimits

0xe390,	// (0x00024d77) list_double2_graphic_pane_vc

0xe3a4,	// (0x00024d8b) list_double2_large_graphic_pane_vc_ParamLimits

0xe3a4,	// (0x00024d8b) list_double2_large_graphic_pane_vc

0xe390,	// (0x00024d77) list_double2_pane_vc_ParamLimits

0xe390,	// (0x00024d77) list_double2_pane_vc

0xe390,	// (0x00024d77) list_double_graphic_heading_pane_vc_ParamLimits

0xe390,	// (0x00024d77) list_double_graphic_heading_pane_vc

0xe390,	// (0x00024d77) list_double_graphic_pane_vc_ParamLimits

0xe390,	// (0x00024d77) list_double_graphic_pane_vc

0xe390,	// (0x00024d77) list_double_heading_pane_vc_ParamLimits

0xe390,	// (0x00024d77) list_double_heading_pane_vc

0xe3a4,	// (0x00024d8b) list_double_large_graphic_pane_vc_ParamLimits

0xe3a4,	// (0x00024d8b) list_double_large_graphic_pane_vc

0xe390,	// (0x00024d77) list_double_number_pane_vc_ParamLimits

0xe390,	// (0x00024d77) list_double_number_pane_vc

0xe390,	// (0x00024d77) list_double_pane_vc_ParamLimits

0xe390,	// (0x00024d77) list_double_pane_vc

0xe390,	// (0x00024d77) list_double_time_pane_vc_ParamLimits

0xe390,	// (0x00024d77) list_double_time_pane_vc

0xe390,	// (0x00024d77) list_setting_number_pane_vc_ParamLimits

0xe390,	// (0x00024d77) list_setting_number_pane_vc

0xe390,	// (0x00024d77) list_setting_pane_vc_ParamLimits

0xe390,	// (0x00024d77) list_setting_pane_vc

0xe390,	// (0x00024d77) list_single_graphic_heading_pane_vc_ParamLimits

0xe390,	// (0x00024d77) list_single_graphic_heading_pane_vc

0xe390,	// (0x00024d77) list_single_heading_pane_vc_ParamLimits

0xe390,	// (0x00024d77) list_single_heading_pane_vc

0xe390,	// (0x00024d77) list_single_number_heading_pane_vc_ParamLimits

0xe390,	// (0x00024d77) list_single_number_heading_pane_vc

0x4851,	// (0x0001b238) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x4851,	// (0x0001b238) list_double_graphic_heading_pane_vc_g1

0x47d7,	// (0x0001b1be) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x47d7,	// (0x0001b1be) list_double_graphic_heading_pane_vc_g2

0x47e3,	// (0x0001b1ca) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x47e3,	// (0x0001b1ca) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c8,	// (0x000261af) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c8,	// (0x000261af) list_double_graphic_heading_pane_vc_g

0x510d,	// (0x0001baf4) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x510d,	// (0x0001baf4) list_double_graphic_heading_pane_vc_t1

0x4f62,	// (0x0001b949) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x4f62,	// (0x0001b949) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f8,	// (0x000263df) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f8,	// (0x000263df) list_double_graphic_heading_pane_vc_t

0xd1b9,	// (0x00023ba0) list_setting_pane_vc_g1_ParamLimits

0xd1b9,	// (0x00023ba0) list_setting_pane_vc_g1

0xd1c5,	// (0x00023bac) list_setting_pane_vc_g2_ParamLimits

0xd1c5,	// (0x00023bac) list_setting_pane_vc_g2

0x0001,

0xf7f5,	// (0x000261dc) list_setting_pane_vc_g_ParamLimits

0xf7f5,	// (0x000261dc) list_setting_pane_vc_g

0xe9aa,	// (0x00025391) list_setting_pane_vc_t1_ParamLimits

0xe9aa,	// (0x00025391) list_setting_pane_vc_t1

0xe9c4,	// (0x000253ab) list_setting_pane_vc_t2_ParamLimits

0xe9c4,	// (0x000253ab) list_setting_pane_vc_t2

0x0001,

0xfa3b,	// (0x00026422) list_setting_pane_vc_t_ParamLimits

0xfa3b,	// (0x00026422) list_setting_pane_vc_t

0xd225,	// (0x00023c0c) set_value_pane_cp_vc_ParamLimits

0xd225,	// (0x00023c0c) set_value_pane_cp_vc

0x47d7,	// (0x0001b1be) list_single_number_heading_pane_vc_g1_ParamLimits

0x47d7,	// (0x0001b1be) list_single_number_heading_pane_vc_g1

0x47e3,	// (0x0001b1ca) list_single_number_heading_pane_vc_g2_ParamLimits

0x47e3,	// (0x0001b1ca) list_single_number_heading_pane_vc_g2

0x0001,

0xf5e0,	// (0x00025fc7) list_single_number_heading_pane_vc_g_ParamLimits

0xf5e0,	// (0x00025fc7) list_single_number_heading_pane_vc_g

0x4f62,	// (0x0001b949) list_single_number_heading_pane_vc_t1_ParamLimits

0x4f62,	// (0x0001b949) list_single_number_heading_pane_vc_t1

0x5121,	// (0x0001bb08) list_single_number_heading_pane_vc_t2_ParamLimits

0x5121,	// (0x0001bb08) list_single_number_heading_pane_vc_t2

0x483f,	// (0x0001b226) list_single_number_heading_pane_vc_t3_ParamLimits

0x483f,	// (0x0001b226) list_single_number_heading_pane_vc_t3

0x0002,

0xfa40,	// (0x00026427) list_single_number_heading_pane_vc_t_ParamLimits

0xfa40,	// (0x00026427) list_single_number_heading_pane_vc_t

0x4851,	// (0x0001b238) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x4851,	// (0x0001b238) list_single_graphic_heading_pane_vc_g1

0x47d7,	// (0x0001b1be) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x47d7,	// (0x0001b1be) list_single_graphic_heading_pane_vc_g4

0x47e3,	// (0x0001b1ca) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x47e3,	// (0x0001b1ca) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c8,	// (0x000261af) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c8,	// (0x000261af) list_single_graphic_heading_pane_vc_g

0x4f62,	// (0x0001b949) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x4f62,	// (0x0001b949) list_single_graphic_heading_pane_vc_t1

0x5135,	// (0x0001bb1c) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5135,	// (0x0001bb1c) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa47,	// (0x0002642e) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa47,	// (0x0002642e) list_single_graphic_heading_pane_vc_t

0x47d7,	// (0x0001b1be) list_double2_pane_vc_g1_ParamLimits

0x47d7,	// (0x0001b1be) list_double2_pane_vc_g1

0x47e3,	// (0x0001b1ca) list_double2_pane_vc_g2_ParamLimits

0x47e3,	// (0x0001b1ca) list_double2_pane_vc_g2

0x0001,

0xf5e0,	// (0x00025fc7) list_double2_pane_vc_g_ParamLimits

0xf5e0,	// (0x00025fc7) list_double2_pane_vc_g

0x5018,	// (0x0001b9ff) list_double2_pane_vc_t1_ParamLimits

0x5018,	// (0x0001b9ff) list_double2_pane_vc_t1

0x5149,	// (0x0001bb30) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5149,	// (0x0001bb30) list_double2_large_graphic_pane_vc_g1

0x5155,	// (0x0001bb3c) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x5155,	// (0x0001bb3c) list_double2_large_graphic_pane_vc_g2

0x5161,	// (0x0001bb48) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x5161,	// (0x0001bb48) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5fd,	// (0x00025fe4) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5fd,	// (0x00025fe4) list_double2_large_graphic_pane_vc_g

0x516d,	// (0x0001bb54) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x516d,	// (0x0001bb54) list_double2_large_graphic_pane_vc_t1

0x5183,	// (0x0001bb6a) list_double_time_pane_vc_g1_ParamLimits

0x5183,	// (0x0001bb6a) list_double_time_pane_vc_g1

0x518f,	// (0x0001bb76) list_double_time_pane_vc_g2_ParamLimits

0x518f,	// (0x0001bb76) list_double_time_pane_vc_g2

0x0001,

0xfa4c,	// (0x00026433) list_double_time_pane_vc_g_ParamLimits

0xfa4c,	// (0x00026433) list_double_time_pane_vc_g

0x519b,	// (0x0001bb82) list_double_time_pane_vc_t1_ParamLimits

0x519b,	// (0x0001bb82) list_double_time_pane_vc_t1

0x51b4,	// (0x0001bb9b) list_double_time_pane_vc_t2_ParamLimits

0x51b4,	// (0x0001bb9b) list_double_time_pane_vc_t2

0x51f4,	// (0x0001bbdb) list_double_time_pane_vc_t3_ParamLimits

0x51f4,	// (0x0001bbdb) list_double_time_pane_vc_t3

0x520c,	// (0x0001bbf3) list_double_time_pane_vc_t4_ParamLimits

0x520c,	// (0x0001bbf3) list_double_time_pane_vc_t4

0x0003,

0xfa51,	// (0x00026438) list_double_time_pane_vc_t_ParamLimits

0xfa51,	// (0x00026438) list_double_time_pane_vc_t

0x47d7,	// (0x0001b1be) list_double_pane_vc_g1_ParamLimits

0x47d7,	// (0x0001b1be) list_double_pane_vc_g1

0x47e3,	// (0x0001b1ca) list_double_pane_vc_g2_ParamLimits

0x47e3,	// (0x0001b1ca) list_double_pane_vc_g2

0x0001,

0xf5e0,	// (0x00025fc7) list_double_pane_vc_g_ParamLimits

0xf5e0,	// (0x00025fc7) list_double_pane_vc_g

0x5220,	// (0x0001bc07) list_double_pane_vc_t1_ParamLimits

0x5220,	// (0x0001bc07) list_double_pane_vc_t1

0x5232,	// (0x0001bc19) list_double_pane_vc_t2_ParamLimits

0x5232,	// (0x0001bc19) list_double_pane_vc_t2

0x0001,

0xfa5a,	// (0x00026441) list_double_pane_vc_t_ParamLimits

0xfa5a,	// (0x00026441) list_double_pane_vc_t

0x47d7,	// (0x0001b1be) list_double_number_pane_vc_g1_ParamLimits

0x47d7,	// (0x0001b1be) list_double_number_pane_vc_g1

0x47e3,	// (0x0001b1ca) list_double_number_pane_vc_g2_ParamLimits

0x47e3,	// (0x0001b1ca) list_double_number_pane_vc_g2

0x0001,

0xf5e0,	// (0x00025fc7) list_double_number_pane_vc_g_ParamLimits

0xf5e0,	// (0x00025fc7) list_double_number_pane_vc_g

0x524a,	// (0x0001bc31) list_double_number_pane_vc_t1_ParamLimits

0x524a,	// (0x0001bc31) list_double_number_pane_vc_t1

0x525e,	// (0x0001bc45) list_double_number_pane_vc_t2_ParamLimits

0x525e,	// (0x0001bc45) list_double_number_pane_vc_t2

0x5232,	// (0x0001bc19) list_double_number_pane_vc_t3_ParamLimits

0x5232,	// (0x0001bc19) list_double_number_pane_vc_t3

0x0002,

0xfa5f,	// (0x00026446) list_double_number_pane_vc_t_ParamLimits

0xfa5f,	// (0x00026446) list_double_number_pane_vc_t

0x5270,	// (0x0001bc57) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5270,	// (0x0001bc57) list_double_large_graphic_pane_vc_g1

0x527c,	// (0x0001bc63) list_double_large_graphic_pane_vc_g2_ParamLimits

0x527c,	// (0x0001bc63) list_double_large_graphic_pane_vc_g2

0x5161,	// (0x0001bb48) list_double_large_graphic_pane_vc_g3_ParamLimits

0x5161,	// (0x0001bb48) list_double_large_graphic_pane_vc_g3

0x528b,	// (0x0001bc72) list_double_large_graphic_pane_vc_g4_ParamLimits

0x528b,	// (0x0001bc72) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa66,	// (0x0002644d) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa66,	// (0x0002644d) list_double_large_graphic_pane_vc_g

0x5297,	// (0x0001bc7e) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5297,	// (0x0001bc7e) list_double_large_graphic_pane_vc_t1

0x52a9,	// (0x0001bc90) list_double_large_graphic_pane_vc_t2_ParamLimits

0x52a9,	// (0x0001bc90) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6f,	// (0x00026456) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6f,	// (0x00026456) list_double_large_graphic_pane_vc_t

0x47d7,	// (0x0001b1be) list_double_heading_pane_vc_g1_ParamLimits

0x47d7,	// (0x0001b1be) list_double_heading_pane_vc_g1

0x47e3,	// (0x0001b1ca) list_double_heading_pane_vc_g2_ParamLimits

0x47e3,	// (0x0001b1ca) list_double_heading_pane_vc_g2

0x0001,

0xf5e0,	// (0x00025fc7) list_double_heading_pane_vc_g_ParamLimits

0xf5e0,	// (0x00025fc7) list_double_heading_pane_vc_g

0x52c2,	// (0x0001bca9) list_double_heading_pane_vc_t1_ParamLimits

0x52c2,	// (0x0001bca9) list_double_heading_pane_vc_t1

0x4f62,	// (0x0001b949) list_double_heading_pane_vc_t2_ParamLimits

0x4f62,	// (0x0001b949) list_double_heading_pane_vc_t2

0x0001,

0xfa74,	// (0x0002645b) list_double_heading_pane_vc_t_ParamLimits

0xfa74,	// (0x0002645b) list_double_heading_pane_vc_t

0x52d6,	// (0x0001bcbd) list_double_graphic_pane_vc_g1_ParamLimits

0x52d6,	// (0x0001bcbd) list_double_graphic_pane_vc_g1

0x52e6,	// (0x0001bccd) list_double_graphic_pane_vc_g2_ParamLimits

0x52e6,	// (0x0001bccd) list_double_graphic_pane_vc_g2

0x52f5,	// (0x0001bcdc) list_double_graphic_pane_vc_g3_ParamLimits

0x52f5,	// (0x0001bcdc) list_double_graphic_pane_vc_g3

0x0002,

0xfa79,	// (0x00026460) list_double_graphic_pane_vc_g_ParamLimits

0xfa79,	// (0x00026460) list_double_graphic_pane_vc_g

0x5301,	// (0x0001bce8) list_double_graphic_pane_vc_t1_ParamLimits

0x5301,	// (0x0001bce8) list_double_graphic_pane_vc_t1

0x5232,	// (0x0001bc19) list_double_graphic_pane_vc_t2_ParamLimits

0x5232,	// (0x0001bc19) list_double_graphic_pane_vc_t2

0x0001,

0xfa80,	// (0x00026467) list_double_graphic_pane_vc_t_ParamLimits

0xfa80,	// (0x00026467) list_double_graphic_pane_vc_t

0x570d,	// (0x0001c0f4) aid_size_cell_fastswap

0x8869,	// (0x0001f250) aid_size_cell_touch_ParamLimits

0x8869,	// (0x0001f250) aid_size_cell_touch

0x5970,	// (0x0001c357) popup_fast_swap_wide_window_ParamLimits

0x5970,	// (0x0001c357) popup_fast_swap_wide_window

0x89b4,	// (0x0001f39b) touch_pane_ParamLimits

0x89b4,	// (0x0001f39b) touch_pane

0xc1ce,	// (0x00022bb5) button_value_adjust_pane_cp2

0x4c21,	// (0x0001b608) button_value_adjust_pane_cp4

0x4c41,	// (0x0001b628) form_field_data_pane_cp2

0x8529,	// (0x0001ef10) form_field_data_wide_pane_cp2

0xc51a,	// (0x00022f01) bg_scroll_pane_ParamLimits

0x5cf2,	// (0x0001c6d9) scroll_handle_pane_ParamLimits

0x5d06,	// (0x0001c6ed) scroll_sc2_down_pane_ParamLimits

0x5d06,	// (0x0001c6ed) scroll_sc2_down_pane

0xc54b,	// (0x00022f32) scroll_sc2_up_pane_ParamLimits

0xc54b,	// (0x00022f32) scroll_sc2_up_pane

0xa48f,	// (0x00020e76) grid_wheel_folder_pane_g1_ParamLimits

0xa48f,	// (0x00020e76) grid_wheel_folder_pane_g1

0x5ecb,	// (0x0001c8b2) clock_nsta_pane_cp2_ParamLimits

0x5ecb,	// (0x0001c8b2) clock_nsta_pane_cp2

0xc339,	// (0x00022d20) listscroll_midp_pane_ParamLimits

0x9005,	// (0x0001f9ec) midp_canvas_pane

0xce2b,	// (0x00023812) nsta_clock_indic_pane

0xce63,	// (0x0002384a) listscroll_form_pane_vc

0xce6b,	// (0x00023852) listscroll_set_pane_vc_ParamLimits

0xce6b,	// (0x00023852) listscroll_set_pane_vc

0x99de,	// (0x000203c5) clock_nsta_pane

0x9a08,	// (0x000203ef) indicator_nsta_pane

0xd0af,	// (0x00023a96) bg_popup_sub_pane_cp2_ParamLimits

0xd0c3,	// (0x00023aaa) find_pane_cp2_ParamLimits

0xd0c3,	// (0x00023aaa) find_pane_cp2

0xd0d9,	// (0x00023ac0) grid_toobar_pane_ParamLimits

0xd235,	// (0x00023c1c) list_form_gen_pane_vc_ParamLimits

0xd235,	// (0x00023c1c) list_form_gen_pane_vc

0xd24b,	// (0x00023c32) scroll_pane_cp8_vc_ParamLimits

0xd24b,	// (0x00023c32) scroll_pane_cp8_vc

0xd29b,	// (0x00023c82) data_form_wide_pane_vc_ParamLimits

0xd29b,	// (0x00023c82) data_form_wide_pane_vc

0xd2a7,	// (0x00023c8e) form_field_data_wide_pane_vc_g1

0xd2af,	// (0x00023c96) form_field_data_wide_pane_vc_t1_ParamLimits

0xd2af,	// (0x00023c96) form_field_data_wide_pane_vc_t1

0xc1e2,	// (0x00022bc9) input_focus_pane_cp6_vc_ParamLimits

0xc1e2,	// (0x00022bc9) input_focus_pane_cp6_vc

0x9dfe,	// (0x000207e5) list_midp_pane_ParamLimits

0xe3b7,	// (0x00024d9e) scroll_pane_cp16_ParamLimits

0xe3b7,	// (0x00024d9e) scroll_pane_cp16

0xd51e,	// (0x00023f05) button_value_adjust_pane_ParamLimits

0xd51e,	// (0x00023f05) button_value_adjust_pane

0xa0f4,	// (0x00020adb) button_value_adjust_pane_cp6_ParamLimits

0xa0f4,	// (0x00020adb) button_value_adjust_pane_cp6

0xa20a,	// (0x00020bf1) settings_code_pane_cp_ParamLimits

0xa20a,	// (0x00020bf1) settings_code_pane_cp

0xbb87,	// (0x0002256e) cell_touch_pane_g1

0xbb87,	// (0x0002256e) cell_touch_pane_g2

0x0001,

0xf71b,	// (0x00026102) cell_touch_pane_g

0xa36e,	// (0x00020d55) cell_touch_pane_cp_ParamLimits

0xa36e,	// (0x00020d55) cell_touch_pane_cp

0xa38a,	// (0x00020d71) cell_touch_pane_ParamLimits

0xa38a,	// (0x00020d71) cell_touch_pane

0xbb87,	// (0x0002256e) scroll_sc2_down_pane_g1

0xbb87,	// (0x0002256e) scroll_sc2_up_pane_g1

0xbb91,	// (0x00022578) bg_set_opt_pane_cp4_vc

0xe7c6,	// (0x000251ad) list_set_graphic_pane_vc_g1_ParamLimits

0xe7c6,	// (0x000251ad) list_set_graphic_pane_vc_g1

0xe7d2,	// (0x000251b9) list_set_graphic_pane_vc_g2_ParamLimits

0xe7d2,	// (0x000251b9) list_set_graphic_pane_vc_g2

0x0001,

0xf9fd,	// (0x000263e4) list_set_graphic_pane_vc_g_ParamLimits

0xf9fd,	// (0x000263e4) list_set_graphic_pane_vc_g

0xe7de,	// (0x000251c5) text_primary_small_cp13_vc_ParamLimits

0xe7de,	// (0x000251c5) text_primary_small_cp13_vc

0xe7f6,	// (0x000251dd) list_set_graphic_pane_vc_ParamLimits

0xe7f6,	// (0x000251dd) list_set_graphic_pane_vc

0xbb91,	// (0x00022578) input_focus_pane_cp2_vc

0xbb87,	// (0x0002256e) setting_code_pane_vc_g1

0xe80a,	// (0x000251f1) setting_code_pane_vc_t1

0xe818,	// (0x000251ff) set_text_pane_vc_t1_ParamLimits

0xe818,	// (0x000251ff) set_text_pane_vc_t1

0xbb91,	// (0x00022578) input_focus_pane_cp1_vc

0xe837,	// (0x0002521e) list_set_text_pane_vc

0xbb87,	// (0x0002256e) setting_text_pane_vc_g1

0xbb91,	// (0x00022578) bg_set_opt_pane_cp2_vc

0xe841,	// (0x00025228) setting_slider_graphic_pane_vc_g1

0xe849,	// (0x00025230) setting_slider_graphic_pane_vc_t1

0xe857,	// (0x0002523e) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa02,	// (0x000263e9) setting_slider_graphic_pane_vc_t

0xe865,	// (0x0002524c) slider_set_pane_cp_vc

0xe86d,	// (0x00025254) slider_set_pane_vc_g1

0xe876,	// (0x0002525d) slider_set_pane_vc_g2

0x0006,

0xfa07,	// (0x000263ee) slider_set_pane_vc_g

0xc249,	// (0x00022c30) set_opt_bg_pane_g1_copy1

0xc251,	// (0x00022c38) set_opt_bg_pane_g2_copy1

0xe8a2,	// (0x00025289) set_opt_bg_pane_g3_copy1

0xc261,	// (0x00022c48) set_opt_bg_pane_g4_copy1

0xc269,	// (0x00022c50) set_opt_bg_pane_g5_copy1

0xc271,	// (0x00022c58) set_opt_bg_pane_g6_copy1

0xe8aa,	// (0x00025291) set_opt_bg_pane_g7_copy1

0xe8b4,	// (0x0002529b) set_opt_bg_pane_g8_copy1

0xe8bc,	// (0x000252a3) set_opt_bg_pane_g9_copy1

0xbb91,	// (0x00022578) bg_set_opt_pane_cp_vc

0xe8c4,	// (0x000252ab) setting_slider_pane_vc_t1

0xe849,	// (0x00025230) setting_slider_pane_vc_t2

0xe857,	// (0x0002523e) setting_slider_pane_vc_t3

0x0002,

0xfa16,	// (0x000263fd) setting_slider_pane_vc_t

0xe865,	// (0x0002524c) slider_set_pane_vc

0x626a,	// (0x0001cc51) volume_set_pane_vc_g1

0x6565,	// (0x0001cf4c) volume_set_pane_vc_g2

0x656e,	// (0x0001cf55) volume_set_pane_vc_g3

0x6577,	// (0x0001cf5e) volume_set_pane_vc_g4

0x6580,	// (0x0001cf67) volume_set_pane_vc_g5

0x6589,	// (0x0001cf70) volume_set_pane_vc_g6

0x6592,	// (0x0001cf79) volume_set_pane_vc_g7

0x659b,	// (0x0001cf82) volume_set_pane_vc_g8

0x65a4,	// (0x0001cf8b) volume_set_pane_vc_g9

0x65ad,	// (0x0001cf94) volume_set_pane_vc_g10

0x0009,

0xfa1d,	// (0x00026404) volume_set_pane_vc_g

0xe8d3,	// (0x000252ba) volume_set_pane_vc

0xe8db,	// (0x000252c2) button_value_adjust_pane_cp1_vc

0xe8e5,	// (0x000252cc) list_highlight_pane_cp2_vc

0xe8ee,	// (0x000252d5) list_set_pane_vc_ParamLimits

0xe8ee,	// (0x000252d5) list_set_pane_vc

0xe940,	// (0x00025327) main_pane_set_vc_t1_ParamLimits

0xe940,	// (0x00025327) main_pane_set_vc_t1

0xe955,	// (0x0002533c) main_pane_set_vc_t2_ParamLimits

0xe955,	// (0x0002533c) main_pane_set_vc_t2

0xe967,	// (0x0002534e) main_pane_set_vc_t3_ParamLimits

0xe967,	// (0x0002534e) main_pane_set_vc_t3

0xe979,	// (0x00025360) main_pane_set_vc_t4_ParamLimits

0xe979,	// (0x00025360) main_pane_set_vc_t4

0x0003,

0xfa32,	// (0x00026419) main_pane_set_vc_t_ParamLimits

0xfa32,	// (0x00026419) main_pane_set_vc_t

0xe98b,	// (0x00025372) setting_code_pane_vc_ParamLimits

0xe98b,	// (0x00025372) setting_code_pane_vc

0xe99a,	// (0x00025381) setting_slider_graphic_pane_vc

0xe99a,	// (0x00025381) setting_slider_pane_vc

0xe99a,	// (0x00025381) setting_text_pane_vc

0xe99a,	// (0x00025381) setting_volume_pane_vc

0xe9a2,	// (0x00025389) scroll_pane_cp121_vc

0xc1bc,	// (0x00022ba3) set_content_pane_vc

0xe9da,	// (0x000253c1) button_value_adjust_pane_g1

0xe9e3,	// (0x000253ca) button_value_adjust_pane_g2

0x0001,

0xfa85,	// (0x0002646c) button_value_adjust_pane_g

0xe9ec,	// (0x000253d3) form_field_slider_wide_pane_vc_t1_ParamLimits

0xe9ec,	// (0x000253d3) form_field_slider_wide_pane_vc_t1

0xea00,	// (0x000253e7) form_field_slider_wide_pane_vc_t2_ParamLimits

0xea00,	// (0x000253e7) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa8a,	// (0x00026471) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8a,	// (0x00026471) form_field_slider_wide_pane_vc_t

0xbbdf,	// (0x000225c6) input_focus_pane_cp10_vc_ParamLimits

0xbbdf,	// (0x000225c6) input_focus_pane_cp10_vc

0xea12,	// (0x000253f9) slider_cont_pane_cp1_vc_ParamLimits

0xea12,	// (0x000253f9) slider_cont_pane_cp1_vc

0xe86d,	// (0x00025254) slider_form_pane_g1_cp2

0xe876,	// (0x0002525d) slider_form_pane_g2_cp2

0xea2b,	// (0x00025412) form_field_slider_pane_vc_t3

0xea39,	// (0x00025420) form_field_slider_pane_vc_t4

0xea47,	// (0x0002542e) slider_form_pane_vc_ParamLimits

0xea47,	// (0x0002542e) slider_form_pane_vc

0xea54,	// (0x0002543b) form_field_slider_pane_vc_t1_ParamLimits

0xea54,	// (0x0002543b) form_field_slider_pane_vc_t1

0xea00,	// (0x000253e7) form_field_slider_pane_vc_t2_ParamLimits

0xea00,	// (0x000253e7) form_field_slider_pane_vc_t2

0x0001,

0xfa9a,	// (0x00026481) form_field_slider_pane_vc_t_ParamLimits

0xfa9a,	// (0x00026481) form_field_slider_pane_vc_t

0xbbdf,	// (0x000225c6) input_focus_pane_cp9_vc_ParamLimits

0xbbdf,	// (0x000225c6) input_focus_pane_cp9_vc

0xea70,	// (0x00025457) slider_cont_pane_vc_ParamLimits

0xea70,	// (0x00025457) slider_cont_pane_vc

0xea82,	// (0x00025469) list_form_graphic_pane_cp_vc_ParamLimits

0xea82,	// (0x00025469) list_form_graphic_pane_cp_vc

0xd2a7,	// (0x00023c8e) form_field_popup_wide_pane_vc_g1

0xea97,	// (0x0002547e) form_field_popup_wide_pane_vc_t1_ParamLimits

0xea97,	// (0x0002547e) form_field_popup_wide_pane_vc_t1

0xc1e2,	// (0x00022bc9) input_focus_pane_cp8_vc_ParamLimits

0xc1e2,	// (0x00022bc9) input_focus_pane_cp8_vc

0xeaae,	// (0x00025495) list_form_wide_pane_vc_ParamLimits

0xeaae,	// (0x00025495) list_form_wide_pane_vc

0xeaba,	// (0x000254a1) list_form_graphic_pane_vc_g1

0xeac2,	// (0x000254a9) list_form_graphic_pane_vc_t1_ParamLimits

0xeac2,	// (0x000254a9) list_form_graphic_pane_vc_t1

0xbbed,	// (0x000225d4) list_highlight_pane_cp5_vc_ParamLimits

0xbbed,	// (0x000225d4) list_highlight_pane_cp5_vc

0xeade,	// (0x000254c5) list_form_graphic_pane_vc_ParamLimits

0xeade,	// (0x000254c5) list_form_graphic_pane_vc

0xd2a7,	// (0x00023c8e) form_field_popup_pane_vc_g1

0xeaf4,	// (0x000254db) form_field_popup_pane_vc_t1_ParamLimits

0xeaf4,	// (0x000254db) form_field_popup_pane_vc_t1

0xc1e2,	// (0x00022bc9) input_focus_pane_cp7_vc_ParamLimits

0xc1e2,	// (0x00022bc9) input_focus_pane_cp7_vc

0xeb0b,	// (0x000254f2) list_form_pane_vc_ParamLimits

0xeb0b,	// (0x000254f2) list_form_pane_vc

0xeb17,	// (0x000254fe) data_form_pane_vc_t1_ParamLimits

0xeb17,	// (0x000254fe) data_form_pane_vc_t1

0xc249,	// (0x00022c30) input_focus_pane_vc_g1

0xc251,	// (0x00022c38) input_focus_pane_vc_g2

0xc259,	// (0x00022c40) input_focus_pane_vc_g3

0xc261,	// (0x00022c48) input_focus_pane_vc_g4

0xc269,	// (0x00022c50) input_focus_pane_vc_g5

0xc271,	// (0x00022c58) input_focus_pane_vc_g6

0xc279,	// (0x00022c60) input_focus_pane_vc_g7

0xc281,	// (0x00022c68) input_focus_pane_vc_g8

0xc289,	// (0x00022c70) input_focus_pane_vc_g9

0xbb87,	// (0x0002256e) input_focus_pane_vc_g10

0x0009,

0xf6a4,	// (0x0002608b) input_focus_pane_vc_g

0xd29b,	// (0x00023c82) data_form_pane_vc_ParamLimits

0xd29b,	// (0x00023c82) data_form_pane_vc

0xd2a7,	// (0x00023c8e) form_field_data_pane_vc_g1

0xeb32,	// (0x00025519) form_field_data_pane_vc_t1_ParamLimits

0xeb32,	// (0x00025519) form_field_data_pane_vc_t1

0xc1e2,	// (0x00022bc9) input_focus_pane_vc_ParamLimits

0xc1e2,	// (0x00022bc9) input_focus_pane_vc

0xeb4c,	// (0x00025533) button_value_adjust_pane_cp3_vc

0xeb54,	// (0x0002553b) button_value_adjust_pane_cp5_vc

0xeb5c,	// (0x00025543) form_field_data_pane_vc_ParamLimits

0xeb5c,	// (0x00025543) form_field_data_pane_vc

0xeb73,	// (0x0002555a) form_field_data_pane_vc_cp2

0xeb7b,	// (0x00025562) form_field_data_wide_pane_vc_ParamLimits

0xeb7b,	// (0x00025562) form_field_data_wide_pane_vc

0xeb91,	// (0x00025578) form_field_data_wide_pane_vc_cp2

0xeb99,	// (0x00025580) form_field_popup_pane_vc_ParamLimits

0xeb99,	// (0x00025580) form_field_popup_pane_vc

0xebb0,	// (0x00025597) form_field_popup_wide_pane_vc_ParamLimits

0xebb0,	// (0x00025597) form_field_popup_wide_pane_vc

0xebc6,	// (0x000255ad) form_field_slider_pane_vc_ParamLimits

0xebc6,	// (0x000255ad) form_field_slider_pane_vc

0xebd9,	// (0x000255c0) form_field_slider_wide_pane_vc_ParamLimits

0xebd9,	// (0x000255c0) form_field_slider_wide_pane_vc

0xa3a8,	// (0x00020d8f) grid_touch_1_pane_ParamLimits

0xa3a8,	// (0x00020d8f) grid_touch_1_pane

0xa3bc,	// (0x00020da3) grid_touch_2_pane_ParamLimits

0xa3bc,	// (0x00020da3) grid_touch_2_pane

0xebec,	// (0x000255d3) touch_pane_g1_ParamLimits

0xebec,	// (0x000255d3) touch_pane_g1

0xebfa,	// (0x000255e1) cell_app_pane_cp_wide_ParamLimits

0xebfa,	// (0x000255e1) cell_app_pane_cp_wide

0xec0b,	// (0x000255f2) grid_popup_fast_wide_pane_ParamLimits

0xec0b,	// (0x000255f2) grid_popup_fast_wide_pane

0xec1f,	// (0x00025606) scroll_pane_cp19_ParamLimits

0xec1f,	// (0x00025606) scroll_pane_cp19

0xbb91,	// (0x00022578) bg_popup_window_pane_cp20

0xec33,	// (0x0002561a) listscroll_popup_fast_wide_pane

0xcf23,	// (0x0002390a) grid_indicator_nsta_pane

0xec3b,	// (0x00025622) clock_nsta_pane_g1

0xec44,	// (0x0002562b) clock_nsta_pane_t1

0xa3e6,	// (0x00020dcd) cell_indicator_nsta_pane_ParamLimits

0xa3e6,	// (0x00020dcd) cell_indicator_nsta_pane

0xebec,	// (0x000255d3) cell_indicator_nsta_pane_g1

0xa403,	// (0x00020dea) cell_indicator_nsta_pane_g2

0x0001,

0xfaa4,	// (0x0002648b) cell_indicator_nsta_pane_g

0xec60,	// (0x00025647) clock_nsta_pane_cp

0xec68,	// (0x0002564f) indicator_nsta_pane_cp

0xec71,	// (0x00025658) nsta_clock_indic_pane_g1

0xbc29,	// (0x00022610) grid_indicator_pane

0xc63d,	// (0x00023024) scroll_pane_cp29

0x5e1a,	// (0x0001c801) indicator_nsta_pane_cp2_ParamLimits

0x5e1a,	// (0x0001c801) indicator_nsta_pane_cp2

0xbbed,	// (0x000225d4) main_apps_wheel_pane

0xd3c3,	// (0x00023daa) form_midp_field_text_pane_ParamLimits

0xd4f0,	// (0x00023ed7) scroll_bar_cp050_ParamLimits

0xecda,	// (0x000256c1) cell_indicator_pane_ParamLimits

0xecda,	// (0x000256c1) cell_indicator_pane

0xecf7,	// (0x000256de) cell_indicator_pane_g1

0xa419,	// (0x00020e00) grid_wheel_folder_pane_ParamLimits

0xa419,	// (0x00020e00) grid_wheel_folder_pane

0xa427,	// (0x00020e0e) list_wheel_apps_pane_ParamLimits

0xa427,	// (0x00020e0e) list_wheel_apps_pane

0xa435,	// (0x00020e1c) main_apps_wheel_pane_g1_ParamLimits

0xa435,	// (0x00020e1c) main_apps_wheel_pane_g1

0xa441,	// (0x00020e28) main_apps_wheel_pane_g2_ParamLimits

0xa441,	// (0x00020e28) main_apps_wheel_pane_g2

0x0001,

0xfac0,	// (0x000264a7) main_apps_wheel_pane_g_ParamLimits

0xfac0,	// (0x000264a7) main_apps_wheel_pane_g

0xa44f,	// (0x00020e36) main_apps_wheel_pane_t1_ParamLimits

0xa44f,	// (0x00020e36) main_apps_wheel_pane_t1

0xa463,	// (0x00020e4a) list_wheel_apps_pane_g1

0xa46b,	// (0x00020e52) list_wheel_apps_pane_g2

0xa473,	// (0x00020e5a) list_wheel_apps_pane_g3

0xa47b,	// (0x00020e62) list_wheel_apps_pane_g4

0xa485,	// (0x00020e6c) list_wheel_apps_pane_g5

0x0004,

0xfac5,	// (0x000264ac) list_wheel_apps_pane_g

0xca95,	// (0x0002347c) navi_icon_text_pane

0x98d2,	// (0x000202b9) aid_fill_nsta

0xed01,	// (0x000256e8) navi_icon_text_pane_g1

0xed0d,	// (0x000256f4) navi_icon_text_pane_t1

0xc931,	// (0x00023318) list_set_graphic_pane_t1_ParamLimits

0xc931,	// (0x00023318) list_set_graphic_pane_t1

0xdc22,	// (0x00024609) popup_midp_note_alarm_window_t6_ParamLimits

0xdc22,	// (0x00024609) popup_midp_note_alarm_window_t6

0xdc34,	// (0x0002461b) popup_midp_note_alarm_window_t7_ParamLimits

0xdc34,	// (0x0002461b) popup_midp_note_alarm_window_t7

0xdc46,	// (0x0002462d) popup_midp_note_alarm_window_t8_ParamLimits

0xdc46,	// (0x0002462d) popup_midp_note_alarm_window_t8

0xdc58,	// (0x0002463f) popup_midp_note_alarm_window_t9_ParamLimits

0xdc58,	// (0x0002463f) popup_midp_note_alarm_window_t9

0xdc6a,	// (0x00024651) popup_midp_note_alarm_window_t10_ParamLimits

0xdc6a,	// (0x00024651) popup_midp_note_alarm_window_t10

0xdc7c,	// (0x00024663) popup_midp_note_alarm_window_t11_ParamLimits

0xdc7c,	// (0x00024663) popup_midp_note_alarm_window_t11

0xdc8e,	// (0x00024675) scroll_pane_cp17_ParamLimits

0xdc8e,	// (0x00024675) scroll_pane_cp17

0x626a,	// (0x0001cc51) volume_small_pane_cp_g1

0x65b6,	// (0x0001cf9d) volume_small_pane_cp_g2

0x65bf,	// (0x0001cfa6) volume_small_pane_cp_g3

0x65c8,	// (0x0001cfaf) volume_small_pane_cp_g4

0x65d1,	// (0x0001cfb8) volume_small_pane_cp_g5

0x65da,	// (0x0001cfc1) volume_small_pane_cp_g6

0x65e3,	// (0x0001cfca) volume_small_pane_cp_g7

0x65ec,	// (0x0001cfd3) volume_small_pane_cp_g8

0x65f5,	// (0x0001cfdc) volume_small_pane_cp_g9

0x65fe,	// (0x0001cfe5) volume_small_pane_cp_g10

0xcc41,	// (0x00023628) midp_ticker_pane_g1_ParamLimits

0xcc4d,	// (0x00023634) midp_ticker_pane_g2_ParamLimits

0xf770,	// (0x00026157) midp_ticker_pane_g_ParamLimits

0xcc59,	// (0x00023640) midp_ticker_pane_t1_ParamLimits

0x98f6,	// (0x000202dd) aid_fill_nsta_2

0xd4dc,	// (0x00023ec3) list_form2_midp_pane

0xe35f,	// (0x00024d46) midp_editing_number_pane_ParamLimits

0xe36e,	// (0x00024d55) midp_ticker_pane_ParamLimits

0xed1f,	// (0x00025706) form2_midp_field_pane

0xed27,	// (0x0002570e) scroll_pane_cp51

0xed47,	// (0x0002572e) form2_midp_button_pane_ParamLimits

0xed47,	// (0x0002572e) form2_midp_button_pane

0xed59,	// (0x00025740) form2_midp_content_pane_ParamLimits

0xed59,	// (0x00025740) form2_midp_content_pane

0xed73,	// (0x0002575a) form2_midp_field_choice_group_pane

0xed7b,	// (0x00025762) form2_midp_field_pane_g1

0xed83,	// (0x0002576a) form2_midp_field_pane_g2

0xed8b,	// (0x00025772) form2_midp_field_pane_g3

0xed93,	// (0x0002577a) form2_midp_field_pane_g4

0x0003,

0xfaea,	// (0x000264d1) form2_midp_field_pane_g

0xed9b,	// (0x00025782) form2_midp_gauge_slider_pane

0xeda3,	// (0x0002578a) form2_midp_gauge_wait_pane

0xedab,	// (0x00025792) form2_midp_image_pane_ParamLimits

0xedab,	// (0x00025792) form2_midp_image_pane

0xedc6,	// (0x000257ad) form2_midp_label_pane_ParamLimits

0xedc6,	// (0x000257ad) form2_midp_label_pane

0xa4b8,	// (0x00020e9f) form2_midp_label_pane_cp_ParamLimits

0xa4b8,	// (0x00020e9f) form2_midp_label_pane_cp

0xeddf,	// (0x000257c6) form2_midp_string_pane_ParamLimits

0xeddf,	// (0x000257c6) form2_midp_string_pane

0x5313,	// (0x0001bcfa) form2_midp_text_pane_ParamLimits

0x5313,	// (0x0001bcfa) form2_midp_text_pane

0xedf1,	// (0x000257d8) form2_midp_time_pane

0xee01,	// (0x000257e8) input_focus_pane_cp51_ParamLimits

0xee01,	// (0x000257e8) input_focus_pane_cp51

0xee19,	// (0x00025800) form2_midp_label_pane_t1_ParamLimits

0xee19,	// (0x00025800) form2_midp_label_pane_t1

0x532c,	// (0x0001bd13) form2_mdip_text_pane_t1_ParamLimits

0x532c,	// (0x0001bd13) form2_mdip_text_pane_t1

0x5349,	// (0x0001bd30) form2_midp_time_pane_t1

0xee61,	// (0x00025848) form2_midp_gauge_slider_pane_t1

0xa4d9,	// (0x00020ec0) form2_midp_gauge_slider_pane_t2

0xa4ed,	// (0x00020ed4) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf3,	// (0x000264da) form2_midp_gauge_slider_pane_t

0xee73,	// (0x0002585a) form2_midp_slider_pane

0xee7f,	// (0x00025866) form2_midp_gauge_wait_pane_t1

0xee8d,	// (0x00025874) form2_midp_wait_pane_ParamLimits

0xee8d,	// (0x00025874) form2_midp_wait_pane

0xa501,	// (0x00020ee8) list_single_2graphic_pane_cp4_ParamLimits

0xa501,	// (0x00020ee8) list_single_2graphic_pane_cp4

0x9d81,	// (0x00020768) list_single_midp_graphic_pane_cp_ParamLimits

0x9d81,	// (0x00020768) list_single_midp_graphic_pane_cp

0xbb91,	// (0x00022578) list_highlight_pane_cp20

0xeeb8,	// (0x0002589f) list_single_2graphic_pane_g1_cp4

0xe6cb,	// (0x000250b2) list_single_2graphic_pane_g2_cp4

0xeec0,	// (0x000258a7) list_single_2graphic_pane_t1_cp4

0xbbed,	// (0x000225d4) list_highlight_pane_cp21

0xeecf,	// (0x000258b6) list_single_midp_graphic_pane_g4_cp

0xeede,	// (0x000258c5) list_single_midp_graphic_pane_t1_cp

0xa518,	// (0x00020eff) form2_mdip_string_pane_t1_ParamLimits

0xa518,	// (0x00020eff) form2_mdip_string_pane_t1

0xbb91,	// (0x00022578) bg_wml_button_pane_cp2

0xbb87,	// (0x0002256e) form2_midp_image_pane_g1

0x4a22,	// (0x0001b409) list_double_large_graphic_pane_g5_ParamLimits

0x4a22,	// (0x0001b409) list_double_large_graphic_pane_g5

0xc339,	// (0x00022d20) midp_form_pane_ParamLimits

0xbbed,	// (0x000225d4) main_apps_wheel_pane_ParamLimits

0x962e,	// (0x00020015) popup_preview_window_ParamLimits

0x962e,	// (0x00020015) popup_preview_window

0xcf50,	// (0x00023937) popup_touch_info_window_ParamLimits

0xcf50,	// (0x00023937) popup_touch_info_window

0xcf6e,	// (0x00023955) popup_touch_menu_window_ParamLimits

0xcf6e,	// (0x00023955) popup_touch_menu_window

0xbb7d,	// (0x00022564) bg_popup_sub_pane_cp6

0xeef3,	// (0x000258da) list_touch_menu_pane

0xeefb,	// (0x000258e2) list_single_touch_menu_pane_ParamLimits

0xeefb,	// (0x000258e2) list_single_touch_menu_pane

0xef0f,	// (0x000258f6) list_single_touch_menu_pane_t1

0xbbed,	// (0x000225d4) bg_popup_sub_pane_cp7_ParamLimits

0xbbed,	// (0x000225d4) bg_popup_sub_pane_cp7

0xef1d,	// (0x00025904) heading_sub_pane

0xef25,	// (0x0002590c) list_touch_info_pane_ParamLimits

0xef25,	// (0x0002590c) list_touch_info_pane

0xef34,	// (0x0002591b) list_single_touch_info_pane_ParamLimits

0xef34,	// (0x0002591b) list_single_touch_info_pane

0xef46,	// (0x0002592d) list_single_touch_info_pane_t1

0xef54,	// (0x0002593b) list_single_touch_info_pane_t2

0x0001,

0xfb01,	// (0x000264e8) list_single_touch_info_pane_t

0xcc17,	// (0x000235fe) bg_popup_heading_pane_cp

0xef62,	// (0x00025949) heading_sub_pane_t1

0xd261,	// (0x00023c48) bg_popup_preview_window_pane_cp_ParamLimits

0xd261,	// (0x00023c48) bg_popup_preview_window_pane_cp

0xef1d,	// (0x00025904) heading_preview_pane

0xef25,	// (0x0002590c) list_preview_pane_ParamLimits

0xef25,	// (0x0002590c) list_preview_pane

0xef70,	// (0x00025957) popup_preview_window_g1

0xef34,	// (0x0002591b) list_single_preview_pane_ParamLimits

0xef34,	// (0x0002591b) list_single_preview_pane

0xef78,	// (0x0002595f) list_single_preview_pane_g1

0xef80,	// (0x00025967) list_single_preview_pane_t1

0xef46,	// (0x0002592d) list_single_preview_pane_t2

0x0001,

0xfb06,	// (0x000264ed) list_single_preview_pane_t

0xef8e,	// (0x00025975) bg_popup_heading_pane_cp2_ParamLimits

0xef8e,	// (0x00025975) bg_popup_heading_pane_cp2

0xefa4,	// (0x0002598b) heading_preview_pane_g1

0xefac,	// (0x00025993) heading_preview_pane_t1_ParamLimits

0xefac,	// (0x00025993) heading_preview_pane_t1

0xbc40,	// (0x00022627) soft_indicator_pane_t1_ParamLimits

0xc155,	// (0x00022b3c) scroll_pane_ParamLimits

0xc539,	// (0x00022f20) scroll_sc2_left_pane

0xc542,	// (0x00022f29) scroll_sc2_right_pane

0xc561,	// (0x00022f48) scroll_bg_pane_g1_ParamLimits

0xc576,	// (0x00022f5d) scroll_bg_pane_g2_ParamLimits

0xc58e,	// (0x00022f75) scroll_bg_pane_g3_ParamLimits

0xf6fb,	// (0x000260e2) scroll_bg_pane_g_ParamLimits

0xc561,	// (0x00022f48) scroll_handle_pane_g1_ParamLimits

0xc5b0,	// (0x00022f97) scroll_handle_pane_g2_ParamLimits

0xc58e,	// (0x00022f75) scroll_handle_pane_g3_ParamLimits

0xf702,	// (0x000260e9) scroll_handle_pane_g_ParamLimits

0xce8b,	// (0x00023872) popup_choice_list_window_ParamLimits

0xce8b,	// (0x00023872) popup_choice_list_window

0xd0bb,	// (0x00023aa2) choice_list_pane

0xd13d,	// (0x00023b24) cell_toolbar_pane_t1

0xd165,	// (0x00023b4c) toolbar_button_pane_ParamLimits

0xe0b2,	// (0x00024a99) ai_gene_pane_1_t2_ParamLimits

0xe0b2,	// (0x00024a99) ai_gene_pane_1_t2

0x0001,

0xf917,	// (0x000262fe) ai_gene_pane_1_t_ParamLimits

0xf917,	// (0x000262fe) ai_gene_pane_1_t

0xefc9,	// (0x000259b0) scroll_sc2_left_pane_g1

0xefc9,	// (0x000259b0) scroll_sc2_right_pane_g1

0xc339,	// (0x00022d20) bg_popup_sub_pane_cp10

0xefd3,	// (0x000259ba) list_choice_list_pane

0xefea,	// (0x000259d1) list_single_choice_list_pane_ParamLimits

0xefea,	// (0x000259d1) list_single_choice_list_pane

0xc31c,	// (0x00022d03) list_single_choice_list_pane_g1

0xc324,	// (0x00022d0b) list_single_choice_list_pane_t1_ParamLimits

0xc324,	// (0x00022d0b) list_single_choice_list_pane_t1

0xeffd,	// (0x000259e4) choice_list_pane_g1

0xf005,	// (0x000259ec) choice_list_pane_t1

0xbb7d,	// (0x00022564) input_focus_pane_cp11

0xc4ae,	// (0x00022e95) title_pane_stacon_g2_ParamLimits

0xc4ae,	// (0x00022e95) title_pane_stacon_g2

0x0002,

0xf6e1,	// (0x000260c8) title_pane_stacon_g_ParamLimits

0xf6e1,	// (0x000260c8) title_pane_stacon_g

0xcc17,	// (0x000235fe) cursor_press_pane

0x92ed,	// (0x0001fcd4) popup_fep_hwr_window_ParamLimits

0x92ed,	// (0x0001fcd4) popup_fep_hwr_window

0xcedf,	// (0x000238c6) popup_fep_vkb_window_ParamLimits

0xcedf,	// (0x000238c6) popup_fep_vkb_window

0xf013,	// (0x000259fa) cursor_press_pane_g1

0x0002,

0xfb2f,	// (0x00026516) fep_vkb_side_pane_g_ParamLimits

0x6632,	// (0x0001d019) fep_hwr_candidate_pane_ParamLimits

0x6632,	// (0x0001d019) fep_hwr_candidate_pane

0x665c,	// (0x0001d043) fep_hwr_side_pane_ParamLimits

0x665c,	// (0x0001d043) fep_hwr_side_pane

0x667c,	// (0x0001d063) fep_hwr_top_pane_ParamLimits

0x667c,	// (0x0001d063) fep_hwr_top_pane

0x6694,	// (0x0001d07b) fep_hwr_write_pane_ParamLimits

0x6694,	// (0x0001d07b) fep_hwr_write_pane

0xfb2f,	// (0x00026516) fep_vkb_side_pane_g

0xf01b,	// (0x00025a02) fep_hwr_top_pane_g1

0xf02d,	// (0x00025a14) fep_hwr_top_pane_g2

0x66c0,	// (0x0001d0a7) fep_hwr_top_pane_g3

0x0002,

0xfb0b,	// (0x000264f2) fep_hwr_top_pane_g

0x66d5,	// (0x0001d0bc) fep_hwr_top_text_pane

0xc703,	// (0x000230ea) fep_hwr_top_text_pane_g1

0xf063,	// (0x00025a4a) fep_hwr_top_text_pane_t1

0x67cb,	// (0x0001d1b2) fep_hwr_candidate_pane_g1

0xf270,	// (0x00025c57) fep_vkb_keypad_pane_g3_ParamLimits

0xf270,	// (0x00025c57) fep_vkb_keypad_pane_g3

0xf298,	// (0x00025c7f) fep_vkb_keypad_pane_g4_ParamLimits

0xf298,	// (0x00025c7f) fep_vkb_keypad_pane_g4

0xf307,	// (0x00025cee) fep_vkb_bottom_pane_g2_ParamLimits

0xf307,	// (0x00025cee) fep_vkb_bottom_pane_g2

0x0001,

0xfb36,	// (0x0002651d) fep_vkb_bottom_pane_g_ParamLimits

0xfb36,	// (0x0002651d) fep_vkb_bottom_pane_g

0xefc9,	// (0x000259b0) cell_vkb_side_pane_g2

0x0001,

0xfb40,	// (0x00026527) cell_vkb_side_pane_g

0xf34b,	// (0x00025d32) cell_vkb_side_pane_t1

0xf359,	// (0x00025d40) cell_vkb_side_pane_t1_copy1

0xefc9,	// (0x000259b0) bg_fep_vkb_candidate_pane_g2

0xf435,	// (0x00025e1c) cell_vkb_candidate_pane_ParamLimits

0xf071,	// (0x00025a58) aid_size_cell_vkb_ParamLimits

0xf071,	// (0x00025a58) aid_size_cell_vkb

0xf435,	// (0x00025e1c) cell_vkb_candidate_pane

0x67e5,	// (0x0001d1cc) bg_popup_fep_shadow_pane_g1

0xf0ed,	// (0x00025ad4) fep_vkb_bottom_pane_ParamLimits

0xf0ed,	// (0x00025ad4) fep_vkb_bottom_pane

0xf12a,	// (0x00025b11) fep_vkb_candidate_pane_ParamLimits

0xf12a,	// (0x00025b11) fep_vkb_candidate_pane

0xf146,	// (0x00025b2d) fep_vkb_keypad_pane_ParamLimits

0xf146,	// (0x00025b2d) fep_vkb_keypad_pane

0xf18c,	// (0x00025b73) fep_vkb_side_pane_ParamLimits

0xf18c,	// (0x00025b73) fep_vkb_side_pane

0xf1c8,	// (0x00025baf) fep_vkb_top_pane_ParamLimits

0xf1c8,	// (0x00025baf) fep_vkb_top_pane

0xf204,	// (0x00025beb) fep_vkb_top_pane_g1_ParamLimits

0xf204,	// (0x00025beb) fep_vkb_top_pane_g1

0xf213,	// (0x00025bfa) fep_vkb_top_pane_g2_ParamLimits

0xf213,	// (0x00025bfa) fep_vkb_top_pane_g2

0xf222,	// (0x00025c09) fep_vkb_top_pane_g3_ParamLimits

0xf222,	// (0x00025c09) fep_vkb_top_pane_g3

0x0003,

0xfb26,	// (0x0002650d) fep_vkb_top_pane_g_ParamLimits

0xfb26,	// (0x0002650d) fep_vkb_top_pane_g

0xf240,	// (0x00025c27) fep_vkb_top_text_pane_ParamLimits

0xf240,	// (0x00025c27) fep_vkb_top_text_pane

0xa5fd,	// (0x00020fe4) fep_vkb_side_pane_g1_ParamLimits

0xa5fd,	// (0x00020fe4) fep_vkb_side_pane_g1

0xf25f,	// (0x00025c46) grid_vkb_side_pane_ParamLimits

0xf25f,	// (0x00025c46) grid_vkb_side_pane

0x67ed,	// (0x0001d1d4) bg_popup_fep_shadow_pane_g2

0x67f6,	// (0x0001d1dd) bg_popup_fep_shadow_pane_g3

0x67fe,	// (0x0001d1e5) bg_popup_fep_shadow_pane_g4

0x6807,	// (0x0001d1ee) bg_popup_fep_shadow_pane_g5

0x6811,	// (0x0001d1f8) bg_popup_fep_shadow_pane_g6

0x6819,	// (0x0001d200) bg_popup_fep_shadow_pane_g7

0xc269,	// (0x00022c50) bg_popup_fep_shadow_pane_g8

0xf2b6,	// (0x00025c9d) grid_vkb_keypad_number_pane_ParamLimits

0xf2b6,	// (0x00025c9d) grid_vkb_keypad_number_pane

0xf2c6,	// (0x00025cad) grid_vkb_keypad_pane_ParamLimits

0xf2c6,	// (0x00025cad) grid_vkb_keypad_pane

0xf2ec,	// (0x00025cd3) fep_vkb_bottom_pane_g1_ParamLimits

0xf2ec,	// (0x00025cd3) fep_vkb_bottom_pane_g1

0xf315,	// (0x00025cfc) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xf315,	// (0x00025cfc) grid_vkb_keypad_bottom_left_pane

0xf32a,	// (0x00025d11) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xf32a,	// (0x00025d11) grid_vkb_keypad_bottom_right_pane

0xf33f,	// (0x00025d26) fep_vkb_top_text_pane_g1

0xa644,	// (0x0002102b) fep_vkb_top_text_pane_t1

0xa656,	// (0x0002103d) cell_vkb_side_pane_ParamLimits

0xa656,	// (0x0002103d) cell_vkb_side_pane

0xefc9,	// (0x000259b0) cell_vkb_side_pane_g1

0xf367,	// (0x00025d4e) cell_vkb_keypad_pane_ParamLimits

0xf367,	// (0x00025d4e) cell_vkb_keypad_pane

0xf3e2,	// (0x00025dc9) cell_vkb_keypad_pane_g1

0x0008,

0xfb53,	// (0x0002653a) bg_popup_fep_shadow_pane_g

0xefc9,	// (0x000259b0) cell_hwr_side_pane_g1

0xefc9,	// (0x000259b0) cell_hwr_side_pane_g2

0xf3ec,	// (0x00025dd3) cell_vkb_keypad_pane_t1

0xa66c,	// (0x00021053) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xa66c,	// (0x00021053) cell_vkb_keypad_bottom_left_pane

0xa681,	// (0x00021068) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xa681,	// (0x00021068) cell_vkb_keypad_bottom_right_pane

0xefc9,	// (0x000259b0) cell_vkb_keypad_bottom_left_pane_g1

0xefc9,	// (0x000259b0) cell_vkb_keypad_bottom_right_pane_g1

0xf3fa,	// (0x00025de1) cell_vkb_keypad_number_pane_ParamLimits

0xf3fa,	// (0x00025de1) cell_vkb_keypad_number_pane

0xf419,	// (0x00025e00) cell_vkb_keypad_number_pane_g1

0xf423,	// (0x00025e0a) cell_vkb_keypad_number_pane_g2

0xf42c,	// (0x00025e13) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb45,	// (0x0002652c) cell_vkb_keypad_number_pane_g

0xf3ec,	// (0x00025dd3) cell_vkb_keypad_number_pane_t1

0xf452,	// (0x00025e39) fep_vkb_candidate_pane_g1

0x0001,

0xfb40,	// (0x00026527) cell_hwr_side_pane_g

0xf46b,	// (0x00025e52) cell_hwr_side_pane_t1

0x682b,	// (0x0001d212) cell_hwr_side_pane_t1_copy1

0xf232,	// (0x00025c19) cell_hwr_candidate_pane_g1

0x6839,	// (0x0001d220) cell_hwr_candidate_pane_t1

0xefc9,	// (0x000259b0) cell_vkb_candidate_pane_g2

0xf4af,	// (0x00025e96) cell_vkb_candidate_pane_t1

0x2d38,	// (0x0001971f) bg_popup_fep_shadow_pane_ParamLimits

0x2d38,	// (0x0001971f) bg_popup_fep_shadow_pane

0x2d67,	// (0x0001974e) bg_fep_hwr_top_pane_g4

0xf03f,	// (0x00025a26) bg_hwr_side_pane_g1_ParamLimits

0xf03f,	// (0x00025a26) bg_hwr_side_pane_g1

0xa5b6,	// (0x00020f9d) cell_hwr_side_pane_ParamLimits

0xa5b6,	// (0x00020f9d) cell_hwr_side_pane

0x674c,	// (0x0001d133) fep_hwr_write_pane_g1_ParamLimits

0x674c,	// (0x0001d133) fep_hwr_write_pane_g1

0x6759,	// (0x0001d140) fep_hwr_write_pane_g2_ParamLimits

0x6759,	// (0x0001d140) fep_hwr_write_pane_g2

0x6766,	// (0x0001d14d) fep_hwr_write_pane_g3_ParamLimits

0x6766,	// (0x0001d14d) fep_hwr_write_pane_g3

0xa5d6,	// (0x00020fbd) fep_hwr_write_pane_g4_ParamLimits

0xa5d6,	// (0x00020fbd) fep_hwr_write_pane_g4

0x0005,

0xfb12,	// (0x000264f9) fep_hwr_write_pane_g_ParamLimits

0xfb12,	// (0x000264f9) fep_hwr_write_pane_g

0x2d67,	// (0x0001974e) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x2d67,	// (0x0001974e) bg_fep_hwr_candidate_pane_g2

0x6789,	// (0x0001d170) cell_hwr_candidate_pane_ParamLimits

0x6789,	// (0x0001d170) cell_hwr_candidate_pane

0x67cb,	// (0x0001d1b2) fep_hwr_candidate_pane_g1_ParamLimits

0xf09f,	// (0x00025a86) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xf09f,	// (0x00025a86) bg_popup_fep_shadow_pane_cp2

0xf232,	// (0x00025c19) fep_vkb_top_pane_g4_ParamLimits

0xf232,	// (0x00025c19) fep_vkb_top_pane_g4

0xf251,	// (0x00025c38) fep_vkb_side_pane_g2_ParamLimits

0xf251,	// (0x00025c38) fep_vkb_side_pane_g2

0x8437,	// (0x0001ee1e) list_setting_pane_t4_ParamLimits

0x8437,	// (0x0001ee1e) list_setting_pane_t4

0x84d1,	// (0x0001eeb8) list_setting_number_pane_t5_ParamLimits

0x84d1,	// (0x0001eeb8) list_setting_number_pane_t5

0x8f1e,	// (0x0001f905) list_double_heading_pane_cp2_ParamLimits

0x8f1e,	// (0x0001f905) list_double_heading_pane_cp2

0xc1fc,	// (0x00022be3) list_double_heading_pane_g1_cp2_ParamLimits

0xc1fc,	// (0x00022be3) list_double_heading_pane_g1_cp2

0xc208,	// (0x00022bef) list_double_heading_pane_g2_cp2_ParamLimits

0xc208,	// (0x00022bef) list_double_heading_pane_g2_cp2

0xf4bd,	// (0x00025ea4) list_double_heading_pane_t1_cp2_ParamLimits

0xf4bd,	// (0x00025ea4) list_double_heading_pane_t1_cp2

0xf4d3,	// (0x00025eba) list_double_heading_pane_t2_cp2_ParamLimits

0xf4d3,	// (0x00025eba) list_double_heading_pane_t2_cp2

0xbb75,	// (0x0002255c) aid_value_unit2

0x59bc,	// (0x0001c3a3) popup_preview_fixed_window

0xbd20,	// (0x00022707) bg_popup_preview_window_pane_cp02

0xf4e5,	// (0x00025ecc) list_preview_fixed_pane

0xf52b,	// (0x00025f12) list_empty_pane_fp_ParamLimits

0xf52b,	// (0x00025f12) list_empty_pane_fp

0xf52b,	// (0x00025f12) list_single_cale_day_pane_fp_ParamLimits

0xf52b,	// (0x00025f12) list_single_cale_day_pane_fp

0xf52b,	// (0x00025f12) list_single_graphic_heading_pane_fp_ParamLimits

0xf52b,	// (0x00025f12) list_single_graphic_heading_pane_fp

0xf52b,	// (0x00025f12) list_single_graphic_pane_fp_ParamLimits

0xf52b,	// (0x00025f12) list_single_graphic_pane_fp

0xf52b,	// (0x00025f12) list_single_heading_pane_fp_ParamLimits

0xf52b,	// (0x00025f12) list_single_heading_pane_fp

0xf52b,	// (0x00025f12) list_single_pane_fp_ParamLimits

0xf52b,	// (0x00025f12) list_single_pane_fp

0xf542,	// (0x00025f29) list_single_pane_fp_g1_ParamLimits

0xf542,	// (0x00025f29) list_single_pane_fp_g1

0x49ba,	// (0x0001b3a1) list_single_pane_fp_g2_ParamLimits

0x49ba,	// (0x0001b3a1) list_single_pane_fp_g2

0x535c,	// (0x0001bd43) list_single_pane_fp_g3_ParamLimits

0x535c,	// (0x0001bd43) list_single_pane_fp_g3

0xf54e,	// (0x00025f35) list_single_pane_fp_g4_ParamLimits

0xf54e,	// (0x00025f35) list_single_pane_fp_g4

0x0003,

0xfb74,	// (0x0002655b) list_single_pane_fp_g_ParamLimits

0xfb74,	// (0x0002655b) list_single_pane_fp_g

0x5370,	// (0x0001bd57) list_single_pane_fp_t1_ParamLimits

0x5370,	// (0x0001bd57) list_single_pane_fp_t1

0x5387,	// (0x0001bd6e) list_single_graphic_pane_fp_g1_ParamLimits

0x5387,	// (0x0001bd6e) list_single_graphic_pane_fp_g1

0xf542,	// (0x00025f29) list_single_graphic_pane_fp_g2_ParamLimits

0xf542,	// (0x00025f29) list_single_graphic_pane_fp_g2

0x49ba,	// (0x0001b3a1) list_single_graphic_pane_fp_g3_ParamLimits

0x49ba,	// (0x0001b3a1) list_single_graphic_pane_fp_g3

0x535c,	// (0x0001bd43) list_single_graphic_pane_fp_g4_ParamLimits

0x535c,	// (0x0001bd43) list_single_graphic_pane_fp_g4

0xf54e,	// (0x00025f35) list_single_graphic_pane_fp_g5_ParamLimits

0xf54e,	// (0x00025f35) list_single_graphic_pane_fp_g5

0x0004,

0xfb7d,	// (0x00026564) list_single_graphic_pane_fp_g_ParamLimits

0xfb7d,	// (0x00026564) list_single_graphic_pane_fp_g

0x5393,	// (0x0001bd7a) list_single_graphic_pane_fp_t1_ParamLimits

0x5393,	// (0x0001bd7a) list_single_graphic_pane_fp_t1

0x5387,	// (0x0001bd6e) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x5387,	// (0x0001bd6e) list_single_graphic_heading_pane_fp_g1

0xf542,	// (0x00025f29) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xf542,	// (0x00025f29) list_single_graphic_heading_pane_fp_g2

0x49ba,	// (0x0001b3a1) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x49ba,	// (0x0001b3a1) list_single_graphic_heading_pane_fp_g3

0x535c,	// (0x0001bd43) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x535c,	// (0x0001bd43) list_single_graphic_heading_pane_fp_g4

0xf54e,	// (0x00025f35) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xf54e,	// (0x00025f35) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7d,	// (0x00026564) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7d,	// (0x00026564) list_single_graphic_heading_pane_fp_g

0x53a9,	// (0x0001bd90) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x53a9,	// (0x0001bd90) list_single_graphic_heading_pane_fp_t1

0x53bf,	// (0x0001bda6) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x53bf,	// (0x0001bda6) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb88,	// (0x0002656f) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb88,	// (0x0002656f) list_single_graphic_heading_pane_fp_t

0x53d1,	// (0x0001bdb8) list_single_cale_day_pane_fp_g1_ParamLimits

0x53d1,	// (0x0001bdb8) list_single_cale_day_pane_fp_g1

0xf55a,	// (0x00025f41) list_single_cale_day_pane_fp_g2_ParamLimits

0xf55a,	// (0x00025f41) list_single_cale_day_pane_fp_g2

0x5409,	// (0x0001bdf0) list_single_cale_day_pane_fp_g3_ParamLimits

0x5409,	// (0x0001bdf0) list_single_cale_day_pane_fp_g3

0x5431,	// (0x0001be18) list_single_cale_day_pane_fp_g4_ParamLimits

0x5431,	// (0x0001be18) list_single_cale_day_pane_fp_g4

0x5455,	// (0x0001be3c) list_single_cale_day_pane_fp_g5_ParamLimits

0x5455,	// (0x0001be3c) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8d,	// (0x00026574) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8d,	// (0x00026574) list_single_cale_day_pane_fp_g

0x5479,	// (0x0001be60) list_single_cale_day_pane_fp_t1_ParamLimits

0x5479,	// (0x0001be60) list_single_cale_day_pane_fp_t1

0x549f,	// (0x0001be86) list_single_cale_day_pane_fp_t2_ParamLimits

0x549f,	// (0x0001be86) list_single_cale_day_pane_fp_t2

0x54b8,	// (0x0001be9f) list_single_cale_day_pane_fp_t3_ParamLimits

0x54b8,	// (0x0001be9f) list_single_cale_day_pane_fp_t3

0x0002,

0xfb98,	// (0x0002657f) list_single_cale_day_pane_fp_t_ParamLimits

0xfb98,	// (0x0002657f) list_single_cale_day_pane_fp_t

0xf542,	// (0x00025f29) list_empty_pane_fp_g1_ParamLimits

0xf542,	// (0x00025f29) list_empty_pane_fp_g1

0x54d1,	// (0x0001beb8) list_empty_pane_fp_t1

0x54df,	// (0x0001bec6) list_empty_pane_fp_t2

0x0001,

0xfb9f,	// (0x00026586) list_empty_pane_fp_t

0xf542,	// (0x00025f29) list_single_heading_pane_fp_g1_ParamLimits

0xf542,	// (0x00025f29) list_single_heading_pane_fp_g1

0x49ba,	// (0x0001b3a1) list_single_heading_pane_fp_g2_ParamLimits

0x49ba,	// (0x0001b3a1) list_single_heading_pane_fp_g2

0x535c,	// (0x0001bd43) list_single_heading_pane_fp_g3_ParamLimits

0x535c,	// (0x0001bd43) list_single_heading_pane_fp_g3

0x0002,

0xfba4,	// (0x0002658b) list_single_heading_pane_fp_g_ParamLimits

0xfba4,	// (0x0002658b) list_single_heading_pane_fp_g

0x54ed,	// (0x0001bed4) list_single_heading_pane_fp_t1_ParamLimits

0x54ed,	// (0x0001bed4) list_single_heading_pane_fp_t1

0x54ff,	// (0x0001bee6) list_single_heading_pane_fp_t2_ParamLimits

0x54ff,	// (0x0001bee6) list_single_heading_pane_fp_t2

0x0001,

0xfbab,	// (0x00026592) list_single_heading_pane_fp_t_ParamLimits

0xfbab,	// (0x00026592) list_single_heading_pane_fp_t

0xc345,	// (0x00022d2c) aid_size_cell_fast

0xbd03,	// (0x000226ea) soft_indicator_pane_cp1_t1

0xc382,	// (0x00022d69) cell_app_pane_cp2_ParamLimits

0xc382,	// (0x00022d69) cell_app_pane_cp2

0x661b,	// (0x0001d002) fep_hwr_candidate_drop_down_list_pane

0x2dfc,	// (0x000197e3) fep_hwr_candidate_pane_g3_ParamLimits

0x2dfc,	// (0x000197e3) fep_hwr_candidate_pane_g3

0x2e09,	// (0x000197f0) fep_hwr_candidate_pane_g4_ParamLimits

0x2e09,	// (0x000197f0) fep_hwr_candidate_pane_g4

0x0002,

0xfb1f,	// (0x00026506) fep_hwr_candidate_pane_g_ParamLimits

0xfb1f,	// (0x00026506) fep_hwr_candidate_pane_g

0xf119,	// (0x00025b00) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xf119,	// (0x00025b00) fep_vkb_candidate_drop_down_list_pane

0xf45a,	// (0x00025e41) fep_vkb_candidate_pane_g3

0xf462,	// (0x00025e49) fep_vkb_candidate_pane_g4

0x0002,

0xfb4c,	// (0x00026533) fep_vkb_candidate_pane_g

0xf232,	// (0x00025c19) cell_hwr_candidate_pane_g1_ParamLimits

0x0114,	// (0x00016afb) cell_hwr_candidate_pane_g3_ParamLimits

0x0114,	// (0x00016afb) cell_hwr_candidate_pane_g3

0x0135,	// (0x00016b1c) cell_hwr_candidate_pane_g4_ParamLimits

0x0135,	// (0x00016b1c) cell_hwr_candidate_pane_g4

0x0002,

0xfb66,	// (0x0002654d) cell_hwr_candidate_pane_g_ParamLimits

0xfb66,	// (0x0002654d) cell_hwr_candidate_pane_g

0xf479,	// (0x00025e60) cell_vkb_candidate_pane_g3_ParamLimits

0xf479,	// (0x00025e60) cell_vkb_candidate_pane_g3

0xf494,	// (0x00025e7b) cell_vkb_candidate_pane_g4_ParamLimits

0xf494,	// (0x00025e7b) cell_vkb_candidate_pane_g4

0x00be,	// (0x00016aa5) cell_app_pane_cp2_g1_ParamLimits

0x00be,	// (0x00016aa5) cell_app_pane_cp2_g1

0x00dc,	// (0x00016ac3) cell_app_pane_cp2_g2_ParamLimits

0x00dc,	// (0x00016ac3) cell_app_pane_cp2_g2

0x0001,

0xfbb0,	// (0x00026597) cell_app_pane_cp2_g_ParamLimits

0xfbb0,	// (0x00026597) cell_app_pane_cp2_g

0x00e8,	// (0x00016acf) cell_app_pane_cp2_t1_ParamLimits

0x00e8,	// (0x00016acf) cell_app_pane_cp2_t1

0xc1e2,	// (0x00022bc9) grid_highlight_pane_cp1_ParamLimits

0xc1e2,	// (0x00022bc9) grid_highlight_pane_cp1

0x6857,	// (0x0001d23e) cell_hwr_candidate_pane_cp1_ParamLimits

0x6857,	// (0x0001d23e) cell_hwr_candidate_pane_cp1

0xf232,	// (0x00025c19) fep_hwr_candidate_drop_down_list_pane_g1

0x00fa,	// (0x00016ae1) fep_hwr_candidate_drop_down_list_pane_g2

0x0107,	// (0x00016aee) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb5,	// (0x0002659c) fep_hwr_candidate_drop_down_list_pane_g

0x6876,	// (0x0001d25d) fep_hwr_candidate_drop_down_list_scroll_pane

0x687f,	// (0x0001d266) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x687f,	// (0x0001d266) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x688c,	// (0x0001d273) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x688c,	// (0x0001d273) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6899,	// (0x0001d280) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6899,	// (0x0001d280) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xf479,	// (0x00025e60) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xf479,	// (0x00025e60) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xf494,	// (0x00025e7b) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xf494,	// (0x00025e7b) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x68a6,	// (0x0001d28d) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x68a6,	// (0x0001d28d) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x68c1,	// (0x0001d2a8) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x68c1,	// (0x0001d2a8) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x0156,	// (0x00016b3d) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x0156,	// (0x00016b3d) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbc,	// (0x000265a3) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbc,	// (0x000265a3) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x0171,	// (0x00016b58) cell_vkb_candidate_pane_cp1_ParamLimits

0x0171,	// (0x00016b58) cell_vkb_candidate_pane_cp1

0xf232,	// (0x00025c19) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xf232,	// (0x00025c19) fep_vkb_candidate_drop_down_list_pane_g1

0x00fa,	// (0x00016ae1) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x00fa,	// (0x00016ae1) fep_vkb_candidate_drop_down_list_pane_g2

0x0107,	// (0x00016aee) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x0107,	// (0x00016aee) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb5,	// (0x0002659c) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb5,	// (0x0002659c) fep_vkb_candidate_drop_down_list_pane_g

0x0191,	// (0x00016b78) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x0191,	// (0x00016b78) fep_vkb_candidate_drop_down_list_scroll_pane

0x019e,	// (0x00016b85) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x019e,	// (0x00016b85) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x01ab,	// (0x00016b92) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x01ab,	// (0x00016b92) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x01b7,	// (0x00016b9e) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x01b7,	// (0x00016b9e) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x0114,	// (0x00016afb) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x0114,	// (0x00016afb) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x0135,	// (0x00016b1c) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x0135,	// (0x00016b1c) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x01c3,	// (0x00016baa) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x01c3,	// (0x00016baa) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x01e4,	// (0x00016bcb) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x01e4,	// (0x00016bcb) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x0156,	// (0x00016b3d) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x0156,	// (0x00016b3d) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcd,	// (0x000265b4) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcd,	// (0x000265b4) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x8a0a,	// (0x0001f3f1) title_pane_g1_ParamLimits

0x8a1d,	// (0x0001f404) title_pane_g2_ParamLimits

0xf566,	// (0x00025f4d) title_pane_g_ParamLimits

0xc6f3,	// (0x000230da) aid_call2_pane

0xc6fb,	// (0x000230e2) aid_call_pane

0xc703,	// (0x000230ea) popup_clock_analogue_window_g1

0xc703,	// (0x000230ea) popup_clock_analogue_window_g2

0x5d1b,	// (0x0001c702) popup_clock_analogue_window_g3

0x5d24,	// (0x0001c70b) popup_clock_analogue_window_g4

0xbb87,	// (0x0002256e) popup_clock_analogue_window_g5

0x0004,

0xf710,	// (0x000260f7) popup_clock_analogue_window_g

0x5d2c,	// (0x0001c713) popup_clock_analogue_window_t1

0x5d3a,	// (0x0001c721) clock_digital_number_pane_ParamLimits

0x5d3a,	// (0x0001c721) clock_digital_number_pane

0x5d46,	// (0x0001c72d) clock_digital_number_pane_cp02_ParamLimits

0x5d46,	// (0x0001c72d) clock_digital_number_pane_cp02

0x5d52,	// (0x0001c739) clock_digital_number_pane_cp03_ParamLimits

0x5d52,	// (0x0001c739) clock_digital_number_pane_cp03

0x5d5e,	// (0x0001c745) clock_digital_number_pane_cp04_ParamLimits

0x5d5e,	// (0x0001c745) clock_digital_number_pane_cp04

0x5d6a,	// (0x0001c751) clock_digital_separator_pane_ParamLimits

0x5d6a,	// (0x0001c751) clock_digital_separator_pane

0x5d76,	// (0x0001c75d) popup_clock_digital_window_t1_ParamLimits

0x5d76,	// (0x0001c75d) popup_clock_digital_window_t1

0xbb87,	// (0x0002256e) clock_digital_number_pane_g1

0xbb87,	// (0x0002256e) clock_digital_number_pane_g2

0x0001,

0xf71b,	// (0x00026102) clock_digital_number_pane_g

0xbb87,	// (0x0002256e) clock_digital_separator_pane_g1

0xbb87,	// (0x0002256e) clock_digital_separator_pane_g2

0x0001,

0xf71b,	// (0x00026102) clock_digital_separator_pane_g

0x98d2,	// (0x000202b9) aid_fill_nsta_ParamLimits

0x9a08,	// (0x000203ef) indicator_nsta_pane_ParamLimits

0xd064,	// (0x00023a4b) popup_clock_analogue_window

0xd064,	// (0x00023a4b) popup_clock_digital_window

0xcf23,	// (0x0002390a) grid_indicator_nsta_pane_ParamLimits

0xec52,	// (0x00025639) clock_nsta_pane_t2

0x0001,

0xfa9f,	// (0x00026486) clock_nsta_pane_t

0x5cdf,	// (0x0001c6c6) aid_size_max_handle

0x8f15,	// (0x0001f8fc) aid_size_min_handle

0xcc17,	// (0x000235fe) editor_scroll_pane

0x0205,	// (0x00016bec) ex_editor_pane

0xc301,	// (0x00022ce8) scroll_pane_cp13

0xc181,	// (0x00022b68) scroll_pane_cp14

0xc732,	// (0x00023119) scroll_pane_cp36

0x8f2f,	// (0x0001f916) list_single_graphic_hl_pane_cp2_ParamLimits

0x8f2f,	// (0x0001f916) list_single_graphic_hl_pane_cp2

0xa286,	// (0x00020c6d) list_single_graphic_hl_pane_ParamLimits

0xa286,	// (0x00020c6d) list_single_graphic_hl_pane

0x5515,	// (0x0001befc) aid_size_min_hl_cp1

0x0216,	// (0x00016bfd) list_highlight_pane_cp34_ParamLimits

0x0216,	// (0x00016bfd) list_highlight_pane_cp34

0x0227,	// (0x00016c0e) list_single_graphic_hl_pane_g1_ParamLimits

0x0227,	// (0x00016c0e) list_single_graphic_hl_pane_g1

0x86da,	// (0x0001f0c1) list_single_graphic_hl_pane_g2_ParamLimits

0x86da,	// (0x0001f0c1) list_single_graphic_hl_pane_g2

0x86da,	// (0x0001f0c1) list_single_graphic_hl_pane_g3_ParamLimits

0x86da,	// (0x0001f0c1) list_single_graphic_hl_pane_g3

0x552a,	// (0x0001bf11) list_single_graphic_hl_pane_g4_ParamLimits

0x552a,	// (0x0001bf11) list_single_graphic_hl_pane_g4

0x5536,	// (0x0001bf1d) list_single_graphic_hl_pane_g5_ParamLimits

0x5536,	// (0x0001bf1d) list_single_graphic_hl_pane_g5

0x0004,

0xfbde,	// (0x000265c5) list_single_graphic_hl_pane_g_ParamLimits

0xfbde,	// (0x000265c5) list_single_graphic_hl_pane_g

0x554a,	// (0x0001bf31) list_single_graphic_hl_pane_t1_ParamLimits

0x554a,	// (0x0001bf31) list_single_graphic_hl_pane_t1

0x0254,	// (0x00016c3b) aid_size_min_hl_cp2

0x025d,	// (0x00016c44) list_highlight_pane_cp34_cp2_ParamLimits

0x025d,	// (0x00016c44) list_highlight_pane_cp34_cp2

0x0227,	// (0x00016c0e) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x0227,	// (0x00016c0e) list_single_graphic_hl_pane_g1_cp2

0x026a,	// (0x00016c51) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x026a,	// (0x00016c51) list_single_graphic_hl_pane_g2_cp2

0x0276,	// (0x00016c5d) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x0276,	// (0x00016c5d) list_single_graphic_hl_pane_g3_cp2

0xcb4e,	// (0x00023535) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xcb4e,	// (0x00023535) list_single_graphic_hl_pane_g4_cp2

0x0240,	// (0x00016c27) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x0240,	// (0x00016c27) list_single_graphic_hl_pane_g5_cp2

0x90f8,	// (0x0001fadf) control_pane_g4_ParamLimits

0x90f8,	// (0x0001fadf) control_pane_g4

0xc339,	// (0x00022d20) bg_popup_sub_pane_cp10_ParamLimits

0xefd3,	// (0x000259ba) list_choice_list_pane_ParamLimits

0xefe2,	// (0x000259c9) scroll_pane_cp23

0xbd20,	// (0x00022707) bg_popup_preview_window_pane_cp02_ParamLimits

0xf4e5,	// (0x00025ecc) list_preview_fixed_pane_ParamLimits

0xf4fb,	// (0x00025ee2) list_preview_fixed_pane_cp_ParamLimits

0xf4fb,	// (0x00025ee2) list_preview_fixed_pane_cp

0xf507,	// (0x00025eee) popup_preview_fixed_window_g1_ParamLimits

0xf507,	// (0x00025eee) popup_preview_fixed_window_g1

0xf513,	// (0x00025efa) popup_preview_fixed_window_g2_ParamLimits

0xf513,	// (0x00025efa) popup_preview_fixed_window_g2

0x0002,

0xfb6d,	// (0x00026554) popup_preview_fixed_window_g_ParamLimits

0xfb6d,	// (0x00026554) popup_preview_fixed_window_g

0x5c53,	// (0x0001c63a) aid_navi_side_left_pane_ParamLimits

0x5c68,	// (0x0001c64f) aid_navi_side_right_pane_ParamLimits

0x5c80,	// (0x0001c667) navi_icon_pane_stacon_ParamLimits

0x5c94,	// (0x0001c67b) navi_navi_pane_stacon_ParamLimits

0x5c80,	// (0x0001c667) navi_text_pane_stacon_ParamLimits

0xbb7d,	// (0x00022564) main_text_info_pane

0x029a,	// (0x00016c81) listscroll_text_info_pane

0x02a2,	// (0x00016c89) list_text_info_pane_ParamLimits

0x02a2,	// (0x00016c89) list_text_info_pane

0x02b1,	// (0x00016c98) scroll_pane_cp24_ParamLimits

0x02b1,	// (0x00016c98) scroll_pane_cp24

0xa69c,	// (0x00021083) list_text_info_pane_t1_ParamLimits

0xa69c,	// (0x00021083) list_text_info_pane_t1

0x9262,	// (0x0001fc49) popup_fast_swap2_window_ParamLimits

0x9262,	// (0x0001fc49) popup_fast_swap2_window

0x0308,	// (0x00016cef) aid_size_cell_fast2

0xbb7d,	// (0x00022564) bg_popup_window_pane_cp17

0xd508,	// (0x00023eef) heading_pane_cp2

0xbf06,	// (0x000228ed) listscroll_fast2_pane

0x0312,	// (0x00016cf9) grid_fast2_pane

0x031c,	// (0x00016d03) listscroll_fast2_pane_g1

0x0324,	// (0x00016d0b) listscroll_fast2_pane_g2

0x0001,

0xfbe9,	// (0x000265d0) listscroll_fast2_pane_g

0xc301,	// (0x00022ce8) scroll_pane_cp26

0x032e,	// (0x00016d15) cell_fast2_pane_ParamLimits

0x032e,	// (0x00016d15) cell_fast2_pane

0x0343,	// (0x00016d2a) cell_fast2_pane_g1

0x034c,	// (0x00016d33) cell_fast2_pane_g2

0x0355,	// (0x00016d3c) cell_fast2_pane_g3

0x0002,

0xfbee,	// (0x000265d5) cell_fast2_pane_g

0xbf48,	// (0x0002292f) grid_highlight_pane_cp9

0xbf5d,	// (0x00022944) main_eswt_pane_ParamLimits

0xbf5d,	// (0x00022944) main_eswt_pane

0x02c6,	// (0x00016cad) list_single_text_info_pane

0x035d,	// (0x00016d44) eswt_ctrl_button_pane

0x035d,	// (0x00016d44) eswt_ctrl_canvas_pane

0x0365,	// (0x00016d4c) eswt_ctrl_combo_pane

0x035d,	// (0x00016d44) eswt_ctrl_default_pane

0x035d,	// (0x00016d44) eswt_ctrl_label_pane

0x036d,	// (0x00016d54) eswt_ctrl_wait_pane

0x0375,	// (0x00016d5c) eswt_shell_pane

0xbb7d,	// (0x00022564) listscroll_eswt_app_pane

0x0395,	// (0x00016d7c) popup_eswt_tasktip_window_ParamLimits

0x0395,	// (0x00016d7c) popup_eswt_tasktip_window

0xd261,	// (0x00023c48) bg_popup_window_pane_cp18

0x03a6,	// (0x00016d8d) eswt_control_pane_g1_ParamLimits

0x03a6,	// (0x00016d8d) eswt_control_pane_g1

0x03b3,	// (0x00016d9a) eswt_control_pane_g2_ParamLimits

0x03b3,	// (0x00016d9a) eswt_control_pane_g2

0x03c0,	// (0x00016da7) eswt_control_pane_g3_ParamLimits

0x03c0,	// (0x00016da7) eswt_control_pane_g3

0x03cd,	// (0x00016db4) eswt_control_pane_g4_ParamLimits

0x03cd,	// (0x00016db4) eswt_control_pane_g4

0x0003,

0xfbf5,	// (0x000265dc) eswt_control_pane_g_ParamLimits

0xfbf5,	// (0x000265dc) eswt_control_pane_g

0xc1e2,	// (0x00022bc9) bg_button_pane_ParamLimits

0xc1e2,	// (0x00022bc9) bg_button_pane

0xbf5d,	// (0x00022944) common_borders_pane_copy2_ParamLimits

0xbf5d,	// (0x00022944) common_borders_pane_copy2

0x03da,	// (0x00016dc1) control_button_pane_g1_ParamLimits

0x03da,	// (0x00016dc1) control_button_pane_g1

0x03e6,	// (0x00016dcd) control_button_pane_g2_ParamLimits

0x03e6,	// (0x00016dcd) control_button_pane_g2

0x03f2,	// (0x00016dd9) control_button_pane_g3_ParamLimits

0x03f2,	// (0x00016dd9) control_button_pane_g3

0x0002,

0xfbfe,	// (0x000265e5) control_button_pane_g_ParamLimits

0xfbfe,	// (0x000265e5) control_button_pane_g

0x0406,	// (0x00016ded) control_button_pane_t1

0x0414,	// (0x00016dfb) control_button_pane_t2

0x0001,

0xfc05,	// (0x000265ec) control_button_pane_t

0xd171,	// (0x00023b58) bg_button_pane_g1

0xd179,	// (0x00023b60) bg_button_pane_g2

0xd181,	// (0x00023b68) bg_button_pane_g3

0xd189,	// (0x00023b70) bg_button_pane_g4

0xd191,	// (0x00023b78) bg_button_pane_g5

0xd199,	// (0x00023b80) bg_button_pane_g6

0xd1a1,	// (0x00023b88) bg_button_pane_g7

0xd1a9,	// (0x00023b90) bg_button_pane_g8

0xd1b1,	// (0x00023b98) bg_button_pane_g9

0x0008,

0xf86b,	// (0x00026252) bg_button_pane_g

0xef8e,	// (0x00025975) common_borders_pane_ParamLimits

0xef8e,	// (0x00025975) common_borders_pane

0x03a6,	// (0x00016d8d) eswt_control_pane_g1_copy1_ParamLimits

0x03a6,	// (0x00016d8d) eswt_control_pane_g1_copy1

0x03b3,	// (0x00016d9a) eswt_control_pane_g2_copy1_ParamLimits

0x03b3,	// (0x00016d9a) eswt_control_pane_g2_copy1

0x03c0,	// (0x00016da7) eswt_control_pane_g3_copy1_ParamLimits

0x03c0,	// (0x00016da7) eswt_control_pane_g3_copy1

0x03cd,	// (0x00016db4) eswt_control_pane_g4_copy1_ParamLimits

0x03cd,	// (0x00016db4) eswt_control_pane_g4_copy1

0xefc9,	// (0x000259b0) bg_eswt_ctrl_canvas_pane_g1

0xef8e,	// (0x00025975) common_borders_pane_cp2_ParamLimits

0xef8e,	// (0x00025975) common_borders_pane_cp2

0xef8e,	// (0x00025975) common_borders_pane_cp3_ParamLimits

0xef8e,	// (0x00025975) common_borders_pane_cp3

0x0422,	// (0x00016e09) separator_horizontal_pane

0x042a,	// (0x00016e11) separator_vertical_pane

0x03a6,	// (0x00016d8d) eswt_control_pane_g1_copy2_ParamLimits

0x03a6,	// (0x00016d8d) eswt_control_pane_g1_copy2

0x03b3,	// (0x00016d9a) eswt_control_pane_g2_copy2_ParamLimits

0x03b3,	// (0x00016d9a) eswt_control_pane_g2_copy2

0x03c0,	// (0x00016da7) eswt_control_pane_g3_copy2_ParamLimits

0x03c0,	// (0x00016da7) eswt_control_pane_g3_copy2

0x03cd,	// (0x00016db4) eswt_control_pane_g4_copy2_ParamLimits

0x03cd,	// (0x00016db4) eswt_control_pane_g4_copy2

0xbb7d,	// (0x00022564) common_borders_pane_cp4

0x0433,	// (0x00016e1a) separator_horizontal_pane_g1

0x043c,	// (0x00016e23) separator_horizontal_pane_g2

0x0445,	// (0x00016e2c) separator_horizontal_pane_g3

0x0002,

0xfc0a,	// (0x000265f1) separator_horizontal_pane_g

0x03a6,	// (0x00016d8d) eswt_control_pane_g1_copy3_ParamLimits

0x03a6,	// (0x00016d8d) eswt_control_pane_g1_copy3

0x03b3,	// (0x00016d9a) eswt_control_pane_g2_copy3_ParamLimits

0x03b3,	// (0x00016d9a) eswt_control_pane_g2_copy3

0x03c0,	// (0x00016da7) eswt_control_pane_g3_copy3_ParamLimits

0x03c0,	// (0x00016da7) eswt_control_pane_g3_copy3

0x03cd,	// (0x00016db4) eswt_control_pane_g4_copy3_ParamLimits

0x03cd,	// (0x00016db4) eswt_control_pane_g4_copy3

0xbb7d,	// (0x00022564) common_borders_pane_cp5

0x044e,	// (0x00016e35) separator_vertical_pane_g1

0x0457,	// (0x00016e3e) separator_vertical_pane_g2

0x0460,	// (0x00016e47) separator_vertical_pane_g3

0x0002,

0xfc11,	// (0x000265f8) separator_vertical_pane_g

0x03a6,	// (0x00016d8d) eswt_control_pane_g1_copy4_ParamLimits

0x03a6,	// (0x00016d8d) eswt_control_pane_g1_copy4

0x03b3,	// (0x00016d9a) eswt_control_pane_g2_copy4_ParamLimits

0x03b3,	// (0x00016d9a) eswt_control_pane_g2_copy4

0x03c0,	// (0x00016da7) eswt_control_pane_g3_copy4_ParamLimits

0x03c0,	// (0x00016da7) eswt_control_pane_g3_copy4

0x03cd,	// (0x00016db4) eswt_control_pane_g4_copy4_ParamLimits

0x03cd,	// (0x00016db4) eswt_control_pane_g4_copy4

0xa6ba,	// (0x000210a1) eswt_ctrl_combo_button_pane

0xa6c2,	// (0x000210a9) eswt_ctrl_input_pane

0xa6ca,	// (0x000210b1) popup_choice_list_window_cp70

0xa6d2,	// (0x000210b9) eswt_ctrl_input_pane_t1

0xbb7d,	// (0x00022564) input_focus_pane_cp70

0xef8e,	// (0x00025975) bg_button_pane_cp70_ParamLimits

0xef8e,	// (0x00025975) bg_button_pane_cp70

0xa6e0,	// (0x000210c7) eswt_ctrl_combo_button_pane_g1

0x0497,	// (0x00016e7e) wait_bar_pane_cp70

0xd261,	// (0x00023c48) bg_popup_window_pane_cp70_ParamLimits

0xd261,	// (0x00023c48) bg_popup_window_pane_cp70

0x049f,	// (0x00016e86) popup_eswt_tasktip_window_t1

0x04b5,	// (0x00016e9c) wait_bar_pane_cp71_ParamLimits

0x04b5,	// (0x00016e9c) wait_bar_pane_cp71

0x04c1,	// (0x00016ea8) grid_eswt_app_pane

0xc542,	// (0x00022f29) scroll_pane_cp70

0xa6e8,	// (0x000210cf) cell_eswt_app_pane_ParamLimits

0xa6e8,	// (0x000210cf) cell_eswt_app_pane

0xa712,	// (0x000210f9) cell_eswt_app_pane_g1_ParamLimits

0xa712,	// (0x000210f9) cell_eswt_app_pane_g1

0xa741,	// (0x00021128) cell_eswt_app_pane_g2_ParamLimits

0xa741,	// (0x00021128) cell_eswt_app_pane_g2

0x0001,

0xfc18,	// (0x000265ff) cell_eswt_app_pane_g_ParamLimits

0xfc18,	// (0x000265ff) cell_eswt_app_pane_g

0xa76a,	// (0x00021151) cell_eswt_app_pane_t1_ParamLimits

0xa76a,	// (0x00021151) cell_eswt_app_pane_t1

0x0588,	// (0x00016f6f) grid_highlight_pane_cp70_ParamLimits

0x0588,	// (0x00016f6f) grid_highlight_pane_cp70

0xcaea,	// (0x000234d1) set_content_pane_g1

0xce00,	// (0x000237e7) status_small_volume_pane

0x68dc,	// (0x0001d2c3) status_small_volume_pane_g1

0x68e4,	// (0x0001d2cb) volume_small2_pane

0x68ed,	// (0x0001d2d4) volume_small2_pane_g1

0x68f6,	// (0x0001d2dd) volume_small2_pane_g2

0x68ff,	// (0x0001d2e6) volume_small2_pane_g3

0x6908,	// (0x0001d2ef) volume_small2_pane_g4

0x6911,	// (0x0001d2f8) volume_small2_pane_g5

0x691a,	// (0x0001d301) volume_small2_pane_g6

0x6923,	// (0x0001d30a) volume_small2_pane_g7

0x692c,	// (0x0001d313) volume_small2_pane_g8

0x6935,	// (0x0001d31c) volume_small2_pane_g9

0x693e,	// (0x0001d325) volume_small2_pane_g10

0x0009,

0xfc1d,	// (0x00026604) volume_small2_pane_g

0xf33f,	// (0x00025d26) fep_vkb_top_text_pane_g1_ParamLimits

0xa644,	// (0x0002102b) fep_vkb_top_text_pane_t1_ParamLimits

0xf51f,	// (0x00025f06) popup_preview_fixed_window_g3_ParamLimits

0xf51f,	// (0x00025f06) popup_preview_fixed_window_g3

0x9865,	// (0x0002024c) popup_toolbar_trans_pane

0xa0e3,	// (0x00020aca) aid_height_set_list_ParamLimits

0xdaeb,	// (0x000244d2) aid_size_parent_ParamLimits

0xc339,	// (0x00022d20) list_highlight_pane_cp2_ParamLimits

0xcaea,	// (0x000234d1) set_content_pane_g1_ParamLimits

0xa299,	// (0x00020c80) list_single_image_pane_ParamLimits

0xa299,	// (0x00020c80) list_single_image_pane

0xa79c,	// (0x00021183) aid_size_cell_image_ParamLimits

0xa79c,	// (0x00021183) aid_size_cell_image

0xa7a9,	// (0x00021190) grid_single_image_pane_ParamLimits

0xa7a9,	// (0x00021190) grid_single_image_pane

0xc1fc,	// (0x00022be3) list_single_image_pane_g1_ParamLimits

0xc1fc,	// (0x00022be3) list_single_image_pane_g1

0xc208,	// (0x00022bef) list_single_image_pane_g2_ParamLimits

0xc208,	// (0x00022bef) list_single_image_pane_g2

0x0001,

0xfc32,	// (0x00026619) list_single_image_pane_g_ParamLimits

0xfc32,	// (0x00026619) list_single_image_pane_g

0x05ad,	// (0x00016f94) list_single_image_pane_t1_ParamLimits

0x05ad,	// (0x00016f94) list_single_image_pane_t1

0xa7b5,	// (0x0002119c) cell_image_list_pane_ParamLimits

0xa7b5,	// (0x0002119c) cell_image_list_pane

0xa7c9,	// (0x000211b0) cell_image_list_pane_g1

0xa7d2,	// (0x000211b9) cell_image_list_pane_g2

0x0001,

0xfc37,	// (0x0002661e) cell_image_list_pane_g

0x05e9,	// (0x00016fd0) aid_size_cell_tb_trans_pane

0xc1e2,	// (0x00022bc9) bg_tb_trans_pane

0x05fb,	// (0x00016fe2) grid_tb_trans_pane

0xd171,	// (0x00023b58) bg_tb_trans_pane_g1

0xd179,	// (0x00023b60) bg_tb_trans_pane_g2

0xd181,	// (0x00023b68) bg_tb_trans_pane_g3

0xd189,	// (0x00023b70) bg_tb_trans_pane_g4

0xd191,	// (0x00023b78) bg_tb_trans_pane_g5

0xd1a9,	// (0x00023b90) bg_tb_trans_pane_g6

0xd1b1,	// (0x00023b98) bg_tb_trans_pane_g7

0xd199,	// (0x00023b80) bg_tb_trans_pane_g8

0xd1a1,	// (0x00023b88) bg_tb_trans_pane_g9

0x0008,

0xfc3c,	// (0x00026623) bg_tb_trans_pane_g

0x060f,	// (0x00016ff6) cell_toolbar_trans_pane_ParamLimits

0x060f,	// (0x00016ff6) cell_toolbar_trans_pane

0xefc9,	// (0x000259b0) cell_toolbar_trans_pane_g1

0xa49c,	// (0x00020e83) list_form2_midp_pane_t1

0xa4aa,	// (0x00020e91) list_form2_midp_pane_t2

0x0001,

0xfae5,	// (0x000264cc) list_form2_midp_pane_t

0xed27,	// (0x0002570e) scroll_pane_cp51_ParamLimits

0xee9d,	// (0x00025884) form2_midp_wait_pane_g1

0xeea6,	// (0x0002588d) form2_midp_wait_pane_g2

0xeeaf,	// (0x00025896) form2_midp_wait_pane_g3

0x0002,

0xfafa,	// (0x000264e1) form2_midp_wait_pane_g

0xbbed,	// (0x000225d4) list_highlight_pane_cp21_ParamLimits

0xeecf,	// (0x000258b6) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xeede,	// (0x000258c5) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xe390,	// (0x00024d77) list_single_2graphic_im_pane_ParamLimits

0xe390,	// (0x00024d77) list_single_2graphic_im_pane

0xa7db,	// (0x000211c2) list_single_2graphic_im_pane_g1_ParamLimits

0xa7db,	// (0x000211c2) list_single_2graphic_im_pane_g1

0xa7ec,	// (0x000211d3) list_single_2graphic_im_pane_g2_ParamLimits

0xa7ec,	// (0x000211d3) list_single_2graphic_im_pane_g2

0xa7f8,	// (0x000211df) list_single_2graphic_im_pane_g3_ParamLimits

0xa7f8,	// (0x000211df) list_single_2graphic_im_pane_g3

0x0003,

0xfc4f,	// (0x00026636) list_single_2graphic_im_pane_g_ParamLimits

0xfc4f,	// (0x00026636) list_single_2graphic_im_pane_g

0xa80c,	// (0x000211f3) list_single_2graphic_im_pane_t1_ParamLimits

0xa80c,	// (0x000211f3) list_single_2graphic_im_pane_t1

0xf52b,	// (0x00025f12) list_single_graphic_2heading_pane_fp_ParamLimits

0xf52b,	// (0x00025f12) list_single_graphic_2heading_pane_fp

0x5387,	// (0x0001bd6e) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x5387,	// (0x0001bd6e) list_single_graphic_2heading_pane_fp_g1

0xf542,	// (0x00025f29) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xf542,	// (0x00025f29) list_single_graphic_2heading_pane_fp_g2

0x49ba,	// (0x0001b3a1) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x49ba,	// (0x0001b3a1) list_single_graphic_2heading_pane_fp_g3

0x535c,	// (0x0001bd43) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x535c,	// (0x0001bd43) list_single_graphic_2heading_pane_fp_g4

0xf54e,	// (0x00025f35) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xf54e,	// (0x00025f35) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7d,	// (0x00026564) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7d,	// (0x00026564) list_single_graphic_2heading_pane_fp_g

0x5560,	// (0x0001bf47) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5560,	// (0x0001bf47) list_single_graphic_2heading_pane_fp_t1

0x53bf,	// (0x0001bda6) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x53bf,	// (0x0001bda6) list_single_graphic_2heading_pane_fp_t2

0x5576,	// (0x0001bf5d) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5576,	// (0x0001bf5d) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc58,	// (0x0002663f) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc58,	// (0x0002663f) list_single_graphic_2heading_pane_fp_t

0xf04b,	// (0x00025a32) fep_hwr_write_pane_g5_ParamLimits

0xf04b,	// (0x00025a32) fep_hwr_write_pane_g5

0xf057,	// (0x00025a3e) fep_hwr_write_pane_g6_ParamLimits

0xf057,	// (0x00025a3e) fep_hwr_write_pane_g6

0x0375,	// (0x00016d5c) eswt_shell_pane_ParamLimits

0xd261,	// (0x00023c48) bg_popup_window_pane_cp18_ParamLimits

0xe2c1,	// (0x00024ca8) heading_pane_cp70

0x049f,	// (0x00016e86) popup_eswt_tasktip_window_t1_ParamLimits

0x992d,	// (0x00020314) aid_touch_tab_arrow_left

0x9943,	// (0x0002032a) aid_touch_tab_arrow_right

0x8a35,	// (0x0001f41c) title_pane_g3_ParamLimits

0x8a35,	// (0x0001f41c) title_pane_g3

0xc1a1,	// (0x00022b88) set_value_pane_g1

0x9865,	// (0x0002024c) popup_toolbar_trans_pane_ParamLimits

0x05e9,	// (0x00016fd0) aid_size_cell_tb_trans_pane_ParamLimits

0xc1e2,	// (0x00022bc9) bg_tb_trans_pane_ParamLimits

0x05fb,	// (0x00016fe2) grid_tb_trans_pane_ParamLimits

0xbd20,	// (0x00022707) cont_note_pane_ParamLimits

0xbd20,	// (0x00022707) cont_note_pane

0xbf5d,	// (0x00022944) cont_snote2_single_text_pane_ParamLimits

0xbf5d,	// (0x00022944) cont_snote2_single_text_pane

0xbf5d,	// (0x00022944) cont_snote2_single_graphic_pane_ParamLimits

0xbf5d,	// (0x00022944) cont_snote2_single_graphic_pane

0xd71e,	// (0x00024105) cont_note_wait_pane_ParamLimits

0xd71e,	// (0x00024105) cont_note_wait_pane

0xd71e,	// (0x00024105) cont_note_image_pane_ParamLimits

0xd71e,	// (0x00024105) cont_note_image_pane

0x06cf,	// (0x000170b6) popup_note2_window_g1_ParamLimits

0x06cf,	// (0x000170b6) popup_note2_window_g1

0x0700,	// (0x000170e7) popup_note2_window_t1_ParamLimits

0x0700,	// (0x000170e7) popup_note2_window_t1

0x0745,	// (0x0001712c) popup_note2_window_t2_ParamLimits

0x0745,	// (0x0001712c) popup_note2_window_t2

0x078a,	// (0x00017171) popup_note2_window_t3_ParamLimits

0x078a,	// (0x00017171) popup_note2_window_t3

0x07cf,	// (0x000171b6) popup_note2_window_t4_ParamLimits

0x07cf,	// (0x000171b6) popup_note2_window_t4

0xbd98,	// (0x0002277f) popup_note2_window_t5_ParamLimits

0xbd98,	// (0x0002277f) popup_note2_window_t5

0x0004,

0xfc64,	// (0x0002664b) popup_note2_window_t_ParamLimits

0xfc64,	// (0x0002664b) popup_note2_window_t

0x07fe,	// (0x000171e5) popup_note2_image_window_g1_ParamLimits

0x07fe,	// (0x000171e5) popup_note2_image_window_g1

0x080a,	// (0x000171f1) popup_note2_image_window_g2_ParamLimits

0x080a,	// (0x000171f1) popup_note2_image_window_g2

0x0001,

0xfc6f,	// (0x00026656) popup_note2_image_window_g_ParamLimits

0xfc6f,	// (0x00026656) popup_note2_image_window_g

0x081c,	// (0x00017203) popup_note2_image_window_t1_ParamLimits

0x081c,	// (0x00017203) popup_note2_image_window_t1

0x0834,	// (0x0001721b) popup_note2_image_window_t2_ParamLimits

0x0834,	// (0x0001721b) popup_note2_image_window_t2

0x084c,	// (0x00017233) popup_note2_image_window_t3_ParamLimits

0x084c,	// (0x00017233) popup_note2_image_window_t3

0x0002,

0xfc74,	// (0x0002665b) popup_note2_image_window_t_ParamLimits

0xfc74,	// (0x0002665b) popup_note2_image_window_t

0xd72c,	// (0x00024113) popup_note2_wait_window_g1_ParamLimits

0xd72c,	// (0x00024113) popup_note2_wait_window_g1

0xd738,	// (0x0002411f) popup_note2_wait_window_g2_ParamLimits

0xd738,	// (0x0002411f) popup_note2_wait_window_g2

0xd744,	// (0x0002412b) popup_note2_wait_window_g3_ParamLimits

0xd744,	// (0x0002412b) popup_note2_wait_window_g3

0x0002,

0xf84d,	// (0x00026234) popup_note2_wait_window_g_ParamLimits

0xf84d,	// (0x00026234) popup_note2_wait_window_g

0x0868,	// (0x0001724f) popup_note2_wait_window_t1_ParamLimits

0x0868,	// (0x0001724f) popup_note2_wait_window_t1

0x0886,	// (0x0001726d) popup_note2_wait_window_t2_ParamLimits

0x0886,	// (0x0001726d) popup_note2_wait_window_t2

0x08a4,	// (0x0001728b) popup_note2_wait_window_t3_ParamLimits

0x08a4,	// (0x0001728b) popup_note2_wait_window_t3

0x08b6,	// (0x0001729d) popup_note2_wait_window_t4_ParamLimits

0x08b6,	// (0x0001729d) popup_note2_wait_window_t4

0x0003,

0xfc7b,	// (0x00026662) popup_note2_wait_window_t_ParamLimits

0xfc7b,	// (0x00026662) popup_note2_wait_window_t

0x08c8,	// (0x000172af) wait_bar2_pane_ParamLimits

0x08c8,	// (0x000172af) wait_bar2_pane

0x08e0,	// (0x000172c7) popup_snote2_single_text_window_g1_ParamLimits

0x08e0,	// (0x000172c7) popup_snote2_single_text_window_g1

0x0908,	// (0x000172ef) popup_snote2_single_text_window_t1_ParamLimits

0x0908,	// (0x000172ef) popup_snote2_single_text_window_t1

0x0954,	// (0x0001733b) popup_snote2_single_text_window_t2_ParamLimits

0x0954,	// (0x0001733b) popup_snote2_single_text_window_t2

0x09a0,	// (0x00017387) popup_snote2_single_text_window_t3_ParamLimits

0x09a0,	// (0x00017387) popup_snote2_single_text_window_t3

0x09e1,	// (0x000173c8) popup_snote2_single_text_window_t4_ParamLimits

0x09e1,	// (0x000173c8) popup_snote2_single_text_window_t4

0x0a17,	// (0x000173fe) popup_snote2_single_text_window_t5_ParamLimits

0x0a17,	// (0x000173fe) popup_snote2_single_text_window_t5

0x0004,

0xfc84,	// (0x0002666b) popup_snote2_single_text_window_t_ParamLimits

0xfc84,	// (0x0002666b) popup_snote2_single_text_window_t

0x0a42,	// (0x00017429) popup_snote2_single_graphic_window_g1_ParamLimits

0x0a42,	// (0x00017429) popup_snote2_single_graphic_window_g1

0x0a6a,	// (0x00017451) popup_snote2_single_graphic_window_g2_ParamLimits

0x0a6a,	// (0x00017451) popup_snote2_single_graphic_window_g2

0x0001,

0xfc8f,	// (0x00026676) popup_snote2_single_graphic_window_g_ParamLimits

0xfc8f,	// (0x00026676) popup_snote2_single_graphic_window_g

0x0a92,	// (0x00017479) popup_snote2_single_graphic_window_t1_ParamLimits

0x0a92,	// (0x00017479) popup_snote2_single_graphic_window_t1

0x0ade,	// (0x000174c5) popup_snote2_single_graphic_window_t2_ParamLimits

0x0ade,	// (0x000174c5) popup_snote2_single_graphic_window_t2

0x09a0,	// (0x00017387) popup_snote2_single_graphic_window_t3_ParamLimits

0x09a0,	// (0x00017387) popup_snote2_single_graphic_window_t3

0x09e1,	// (0x000173c8) popup_snote2_single_graphic_window_t4_ParamLimits

0x09e1,	// (0x000173c8) popup_snote2_single_graphic_window_t4

0x0a17,	// (0x000173fe) popup_snote2_single_graphic_window_t5_ParamLimits

0x0a17,	// (0x000173fe) popup_snote2_single_graphic_window_t5

0x0004,

0xfc94,	// (0x0002667b) popup_snote2_single_graphic_window_t_ParamLimits

0xfc94,	// (0x0002667b) popup_snote2_single_graphic_window_t

0xecb9,	// (0x000256a0) clock_nsta_pane_cp2_t1

0xecb9,	// (0x000256a0) clock_nsta_pane_cp2_t2

0x0001,

0xfabb,	// (0x000264a2) clock_nsta_pane_cp2_t

0x4ced,	// (0x0001b6d4) form_field_data_wide_pane_g1_ParamLimits

0xc1fc,	// (0x00022be3) form_field_data_wide_pane_g2_ParamLimits

0xc1fc,	// (0x00022be3) form_field_data_wide_pane_g2

0xc208,	// (0x00022bef) form_field_data_wide_pane_g3_ParamLimits

0xc208,	// (0x00022bef) form_field_data_wide_pane_g3

0x0002,

0xf693,	// (0x0002607a) form_field_data_wide_pane_g_ParamLimits

0xf693,	// (0x0002607a) form_field_data_wide_pane_g

0xa3d0,	// (0x00020db7) grid_touch_3_pane_ParamLimits

0xa3d0,	// (0x00020db7) grid_touch_3_pane

0xa83d,	// (0x00021224) cell_touch_3_pane_ParamLimits

0xa83d,	// (0x00021224) cell_touch_3_pane

0xefc9,	// (0x000259b0) cell_touch_3_pane_g1

0xefc9,	// (0x000259b0) cell_touch_3_pane_g2

0x0001,

0xfb40,	// (0x00026527) cell_touch_3_pane_g

0xbdca,	// (0x000227b1) cont_query_data_pane

0xbdd2,	// (0x000227b9) cont_query_data_pane_cp1

0x0b59,	// (0x00017540) button_value_adjust_pane_cp7

0x0b61,	// (0x00017548) query_popup_pane_cp3

0xc764,	// (0x0002314b) bg_popup_sub_pane_cp22_ParamLimits

0x5d95,	// (0x0001c77c) navi_navi_volume_pane_cp2

0x5db0,	// (0x0001c797) popup_side_volume_key_window_g2

0x5dbf,	// (0x0001c7a6) popup_side_volume_key_window_g3

0x0002,

0xf729,	// (0x00026110) popup_side_volume_key_window_g

0x5ddc,	// (0x0001c7c3) popup_side_volume_key_window_t2

0x0001,

0xf730,	// (0x00026117) popup_side_volume_key_window_t

0xc9b4,	// (0x0002339b) popup_side_volume_key_window_ParamLimits

0x827b,	// (0x0001ec62) list_double_graphic_pane_g4_ParamLimits

0x827b,	// (0x0001ec62) list_double_graphic_pane_g4

0xa271,	// (0x00020c58) list_single_2heading_msg_pane_ParamLimits

0xa271,	// (0x00020c58) list_single_2heading_msg_pane

0x86e6,	// (0x0001f0cd) list_single_2heading_msg_pane_g1_ParamLimits

0x86e6,	// (0x0001f0cd) list_single_2heading_msg_pane_g1

0x86f2,	// (0x0001f0d9) list_single_2heading_msg_pane_g2_ParamLimits

0x86f2,	// (0x0001f0d9) list_single_2heading_msg_pane_g2

0x8705,	// (0x0001f0ec) list_single_2heading_msg_pane_g3_ParamLimits

0x8705,	// (0x0001f0ec) list_single_2heading_msg_pane_g3

0x55a2,	// (0x0001bf89) list_single_2heading_msg_pane_g4_ParamLimits

0x55a2,	// (0x0001bf89) list_single_2heading_msg_pane_g4

0x0003,

0xfc9f,	// (0x00026686) list_single_2heading_msg_pane_g_ParamLimits

0xfc9f,	// (0x00026686) list_single_2heading_msg_pane_g

0x55ba,	// (0x0001bfa1) list_single_2heading_msg_pane_t1_ParamLimits

0x55ba,	// (0x0001bfa1) list_single_2heading_msg_pane_t1

0x8711,	// (0x0001f0f8) list_single_2heading_msg_pane_t2_ParamLimits

0x8711,	// (0x0001f0f8) list_single_2heading_msg_pane_t2

0x877c,	// (0x0001f163) list_single_2heading_msg_pane_t3_ParamLimits

0x877c,	// (0x0001f163) list_single_2heading_msg_pane_t3

0x564f,	// (0x0001c036) list_single_2heading_msg_pane_t4_ParamLimits

0x564f,	// (0x0001c036) list_single_2heading_msg_pane_t4

0x0003,

0xfca8,	// (0x0002668f) list_single_2heading_msg_pane_t_ParamLimits

0xfca8,	// (0x0002668f) list_single_2heading_msg_pane_t

0xbb9b,	// (0x00022582) title_pane_g4_ParamLimits

0xbb9b,	// (0x00022582) title_pane_g4

0x5ba3,	// (0x0001c58a) title_pane_stacon_g3_ParamLimits

0x5ba3,	// (0x0001c58a) title_pane_stacon_g3

0x0666,	// (0x0001704d) list_single_2graphic_im_pane_g4_ParamLimits

0x0666,	// (0x0001704d) list_single_2graphic_im_pane_g4

0xe0cf,	// (0x00024ab6) popup_side_volume_key_window_cp

0xe5e0,	// (0x00024fc7) main_idle_act2_pane_t1

0x616c,	// (0x0001cb53) toolbar_button_pane_g10

0x8da4,	// (0x0001f78b) popup_toolbar_window_cp1

0xecaa,	// (0x00025691) clock_nsta_pane_cp_t1

0xecaa,	// (0x00025691) clock_nsta_pane_cp_t2

0x0001,

0xfab6,	// (0x0002649d) clock_nsta_pane_cp_t

0x5d95,	// (0x0001c77c) navi_navi_volume_pane_cp2_ParamLimits

0x5da4,	// (0x0001c78b) popup_side_volume_key_window_g1_ParamLimits

0x5db0,	// (0x0001c797) popup_side_volume_key_window_g2_ParamLimits

0x5dbf,	// (0x0001c7a6) popup_side_volume_key_window_g3_ParamLimits

0xf729,	// (0x00026110) popup_side_volume_key_window_g_ParamLimits

0x6607,	// (0x0001cfee) fep_hwr_aid_pane

0x2d67,	// (0x0001974e) bg_fep_hwr_top_pane_g4_ParamLimits

0xf01b,	// (0x00025a02) fep_hwr_top_pane_g1_ParamLimits

0xf02d,	// (0x00025a14) fep_hwr_top_pane_g2_ParamLimits

0x66c0,	// (0x0001d0a7) fep_hwr_top_pane_g3_ParamLimits

0xfb0b,	// (0x000264f2) fep_hwr_top_pane_g_ParamLimits

0x66d5,	// (0x0001d0bc) fep_hwr_top_text_pane_ParamLimits

0xde90,	// (0x00024877) aid_touch_tab_arrow_arrow_2

0xde99,	// (0x00024880) aid_touch_tab_arrow_left_2

0x661b,	// (0x0001d002) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6652,	// (0x0001d039) fep_hwr_prediction_pane

0xf182,	// (0x00025b69) fep_vkb_prediction_pane

0xa624,	// (0x0002100b) fep_vkb_side_pane_g3_ParamLimits

0xa624,	// (0x0002100b) fep_vkb_side_pane_g3

0xf232,	// (0x00025c19) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x00fa,	// (0x00016ae1) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x0107,	// (0x00016aee) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb5,	// (0x0002659c) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x0c7a,	// (0x00017661) fep_hwr_prediction_pane_g1

0x6947,	// (0x0001d32e) fep_hwr_prediction_pane_g2

0x694f,	// (0x0001d336) fep_hwr_prediction_pane_g3

0x6957,	// (0x0001d33e) fep_hwr_prediction_pane_g4

0x0003,

0xfcb1,	// (0x00026698) fep_hwr_prediction_pane_g

0x0c7a,	// (0x00017661) fep_vkb_prediction_pane_g1

0x0c84,	// (0x0001766b) fep_vkb_prediction_pane_g2

0x0c8c,	// (0x00017673) fep_vkb_prediction_pane_g3

0x0c94,	// (0x0001767b) fep_vkb_prediction_pane_g4

0x0003,

0xfcba,	// (0x000266a1) fep_vkb_prediction_pane_g

0x6444,	// (0x0001ce2b) slider_set_pane_g3

0x6458,	// (0x0001ce3f) slider_set_pane_g4

0x6470,	// (0x0001ce57) slider_set_pane_g5

0x6444,	// (0x0001ce2b) slider_set_pane_g6

0x6486,	// (0x0001ce6d) slider_set_pane_g7

0xe346,	// (0x00024d2d) slider_form_pane_g3

0xe34f,	// (0x00024d36) slider_form_pane_g4

0xe357,	// (0x00024d3e) slider_form_pane_g5

0xe346,	// (0x00024d2d) slider_form_pane_g6

0xa22a,	// (0x00020c11) slider_form_pane_g7

0xe87e,	// (0x00025265) slider_set_pane_vc_g3

0xe887,	// (0x0002526e) slider_set_pane_vc_g4

0xe890,	// (0x00025277) slider_set_pane_vc_g5

0xe87e,	// (0x00025265) slider_set_pane_vc_g6

0xe899,	// (0x00025280) slider_set_pane_vc_g7

0xe87e,	// (0x00025265) slider_form_pane_vc_g1

0xe887,	// (0x0002526e) slider_form_pane_vc_g2

0xe890,	// (0x00025277) slider_form_pane_vc_g3

0xe87e,	// (0x00025265) slider_form_pane_vc_g4

0xea22,	// (0x00025409) slider_form_pane_vc_g5

0x0004,

0xfa8f,	// (0x00026476) slider_form_pane_vc_g

0xbb7d,	// (0x00022564) main_idle_act3_pane

0x0c9c,	// (0x00017683) ai3_links_pane

0xa887,	// (0x0002126e) popup_ai3_data_window_ParamLimits

0xa887,	// (0x0002126e) popup_ai3_data_window

0xbb7d,	// (0x00022564) grid_ai3_links_pane

0xa89f,	// (0x00021286) cell_ai3_links_pane_ParamLimits

0xa89f,	// (0x00021286) cell_ai3_links_pane

0x0cd5,	// (0x000176bc) bg_popup_sub_pane_cp11

0x0ce2,	// (0x000176c9) cell_ai3_links_pane_g1

0xbb7d,	// (0x00022564) bg_popup_sub_pane_cp12

0x0d07,	// (0x000176ee) heading_ai3_data_pane

0x0d0f,	// (0x000176f6) list_ai3_gene_pane

0x0d1b,	// (0x00017702) popup_ai3_data_window_g1

0x0d23,	// (0x0001770a) heading_ai3_data_pane_g1

0x0d2b,	// (0x00017712) heading_ai3_data_pane_t1

0x0d39,	// (0x00017720) list_double_ai3_gene_pane_ParamLimits

0x0d39,	// (0x00017720) list_double_ai3_gene_pane

0x0d46,	// (0x0001772d) list_single_ai3_gene_pane_ParamLimits

0x0d46,	// (0x0001772d) list_single_ai3_gene_pane

0xef8e,	// (0x00025975) list_highlight_pane_cp7_ParamLimits

0xef8e,	// (0x00025975) list_highlight_pane_cp7

0x0d53,	// (0x0001773a) list_single_a13_gene_pane_t1_ParamLimits

0x0d53,	// (0x0001773a) list_single_a13_gene_pane_t1

0x0d6a,	// (0x00017751) list_single_ai3_gene_pane_g1

0x0d73,	// (0x0001775a) list_single_ai3_gene_pane_g2

0x0001,

0xfcc3,	// (0x000266aa) list_single_ai3_gene_pane_g

0x0d7b,	// (0x00017762) list_double_ai3_gene_pane_g1_ParamLimits

0x0d7b,	// (0x00017762) list_double_ai3_gene_pane_g1

0x0d87,	// (0x0001776e) list_double_ai3_gene_pane_t1_ParamLimits

0x0d87,	// (0x0001776e) list_double_ai3_gene_pane_t1

0x0da3,	// (0x0001778a) list_double_ai3_gene_pane_t2_ParamLimits

0x0da3,	// (0x0001778a) list_double_ai3_gene_pane_t2

0x0db8,	// (0x0001779f) list_double_ai3_gene_pane_t3_ParamLimits

0x0db8,	// (0x0001779f) list_double_ai3_gene_pane_t3

0x0002,

0xfcc8,	// (0x000266af) list_double_ai3_gene_pane_t_ParamLimits

0xfcc8,	// (0x000266af) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x558c,	// (0x0001bf73) aid_size_min_col_2

0xa871,	// (0x00021258) aid_size_min_msg_ParamLimits

0xa871,	// (0x00021258) aid_size_min_msg

0xa638,	// (0x0002101f) fep_vkb_top_text_pane_g2_ParamLimits

0xa638,	// (0x0002101f) fep_vkb_top_text_pane_g2

0x0001,

0xfb3b,	// (0x00026522) fep_vkb_top_text_pane_g_ParamLimits

0xfb3b,	// (0x00026522) fep_vkb_top_text_pane_g

0xbb7d,	// (0x00022564) main_hc_apps_shell_pane

0x0dd5,	// (0x000177bc) grid_hc_apps_pane_ParamLimits

0x0dd5,	// (0x000177bc) grid_hc_apps_pane

0x0de4,	// (0x000177cb) list_hc_apps_pane

0x0dec,	// (0x000177d3) scroll_pane_cp37_ParamLimits

0x0dec,	// (0x000177d3) scroll_pane_cp37

0xa8b9,	// (0x000212a0) cell_hc_apps_pane_ParamLimits

0xa8b9,	// (0x000212a0) cell_hc_apps_pane

0xa979,	// (0x00021360) cell_hc_apps_pane_g1_ParamLimits

0xa979,	// (0x00021360) cell_hc_apps_pane_g1

0x0ed9,	// (0x000178c0) cell_hc_apps_pane_g2_ParamLimits

0x0ed9,	// (0x000178c0) cell_hc_apps_pane_g2

0x0ef5,	// (0x000178dc) cell_hc_apps_pane_g3_ParamLimits

0x0ef5,	// (0x000178dc) cell_hc_apps_pane_g3

0x0002,

0xfccf,	// (0x000266b6) cell_hc_apps_pane_g_ParamLimits

0xfccf,	// (0x000266b6) cell_hc_apps_pane_g

0xa9a6,	// (0x0002138d) cell_hc_apps_pane_t1_ParamLimits

0xa9a6,	// (0x0002138d) cell_hc_apps_pane_t1

0xbd20,	// (0x00022707) grid_highlight_pane_cp10_ParamLimits

0xbd20,	// (0x00022707) grid_highlight_pane_cp10

0xa9e4,	// (0x000213cb) list_single_hc_apps_pane_ParamLimits

0xa9e4,	// (0x000213cb) list_single_hc_apps_pane

0xaa17,	// (0x000213fe) list_single_hc_apps_pane_g1

0x87ea,	// (0x0001f1d1) list_single_hc_apps_pane_g2

0x0001,

0xfcd6,	// (0x000266bd) list_single_hc_apps_pane_g

0x8803,	// (0x0001f1ea) list_single_hc_apps_pane_g2_copy1

0x881f,	// (0x0001f206) list_single_hc_apps_pane_t1

0xbbed,	// (0x000225d4) bg_set_opt_pane_cp_ParamLimits

0x5ace,	// (0x0001c4b5) setting_slider_pane_t1_ParamLimits

0x5ae7,	// (0x0001c4ce) setting_slider_pane_t2_ParamLimits

0x5b00,	// (0x0001c4e7) setting_slider_pane_t3_ParamLimits

0xf576,	// (0x00025f5d) setting_slider_pane_t_ParamLimits

0x5b17,	// (0x0001c4fe) slider_set_pane_ParamLimits

0x603a,	// (0x0001ca21) control_pane_g5_ParamLimits

0x603a,	// (0x0001ca21) control_pane_g5

0xe308,	// (0x00024cef) slider_set_pane_g1_ParamLimits

0x6438,	// (0x0001ce1f) slider_set_pane_g2_ParamLimits

0x6444,	// (0x0001ce2b) slider_set_pane_g3_ParamLimits

0x6458,	// (0x0001ce3f) slider_set_pane_g4_ParamLimits

0x6470,	// (0x0001ce57) slider_set_pane_g5_ParamLimits

0x6444,	// (0x0001ce2b) slider_set_pane_g6_ParamLimits

0x6486,	// (0x0001ce6d) slider_set_pane_g7_ParamLimits

0xf969,	// (0x00026350) slider_set_pane_g_ParamLimits

0xca95,	// (0x0002347c) navi_icon_text_pane_ParamLimits

0x98f6,	// (0x000202dd) aid_fill_nsta_2_ParamLimits

0x992d,	// (0x00020314) aid_touch_tab_arrow_left_ParamLimits

0x9943,	// (0x0002032a) aid_touch_tab_arrow_right_ParamLimits

0x99de,	// (0x000203c5) clock_nsta_pane_ParamLimits

0xde72,	// (0x00024859) navi_icon_pane_g1_ParamLimits

0xde7e,	// (0x00024865) navi_text_pane_t1_ParamLimits

0xed01,	// (0x000256e8) navi_icon_text_pane_g1_ParamLimits

0xed0d,	// (0x000256f4) navi_icon_text_pane_t1_ParamLimits

0xaa17,	// (0x000213fe) list_single_hc_apps_pane_g1_ParamLimits

0x87ea,	// (0x0001f1d1) list_single_hc_apps_pane_g2_ParamLimits

0xfcd6,	// (0x000266bd) list_single_hc_apps_pane_g_ParamLimits

0x8803,	// (0x0001f1ea) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x881f,	// (0x0001f206) list_single_hc_apps_pane_t1_ParamLimits

0x899f,	// (0x0001f386) popup_toolbar2_fixed_window_ParamLimits

0x899f,	// (0x0001f386) popup_toolbar2_fixed_window

0x985b,	// (0x00020242) popup_toolbar2_float_window

0xbb7d,	// (0x00022564) bg_popup_sub_pane_cp27

0x1046,	// (0x00017a2d) grid_toolbar2_float_pane

0xbb7d,	// (0x00022564) bg_popup_sub_pane_cp26

0x1046,	// (0x00017a2d) grid_toolbar2_fixed_pane

0xaa30,	// (0x00021417) cell_toolbar2_fixed_pane_ParamLimits

0xaa30,	// (0x00021417) cell_toolbar2_fixed_pane

0xaa4a,	// (0x00021431) cell_toolbar2_fixed_pane_g1

0x1068,	// (0x00017a4f) toolbar2_fixed_button_pane

0xd171,	// (0x00023b58) toolbar2_fixed_button_pane_g1

0xd179,	// (0x00023b60) toolbar2_fixed_button_pane_g2

0xd181,	// (0x00023b68) toolbar2_fixed_button_pane_g3

0xd189,	// (0x00023b70) toolbar2_fixed_button_pane_g4

0xd191,	// (0x00023b78) toolbar2_fixed_button_pane_g5

0xd199,	// (0x00023b80) toolbar2_fixed_button_pane_g6

0xd1a1,	// (0x00023b88) toolbar2_fixed_button_pane_g7

0xd1a9,	// (0x00023b90) toolbar2_fixed_button_pane_g8

0xd1b1,	// (0x00023b98) toolbar2_fixed_button_pane_g9

0x0008,

0xf86b,	// (0x00026252) toolbar2_fixed_button_pane_g

0x1070,	// (0x00017a57) cell_toolbar2_float_pane_ParamLimits

0x1070,	// (0x00017a57) cell_toolbar2_float_pane

0x1081,	// (0x00017a68) cell_toolbar2_float_pane_g1

0x1068,	// (0x00017a4f) toolbar2_fixed_button_pane_cp

0xa5eb,	// (0x00020fd2) fep_vkb_accented_list_pane_ParamLimits

0xa5eb,	// (0x00020fd2) fep_vkb_accented_list_pane

0x6823,	// (0x0001d20a) bg_popup_fep_shadow_pane_g9

0xcc17,	// (0x000235fe) bg_popup_fep_shadow_pane_cp3

0xc2e8,	// (0x00022ccf) list_accented_list_pane

0x108a,	// (0x00017a71) list_single_accented_list_pane_ParamLimits

0x108a,	// (0x00017a71) list_single_accented_list_pane

0xcc17,	// (0x000235fe) list_highlight_pane_cp10

0x109b,	// (0x00017a82) list_single_accented_list_pane_t1

0x9785,	// (0x0002016c) popup_slider_window_ParamLimits

0x9785,	// (0x0002016c) popup_slider_window

0x0b69,	// (0x00017550) aid_indentation_list_msg

0xab43,	// (0x0002152a) bg_popup_window_pane_cp19

0x11bf,	// (0x00017ba6) popup_slider_window_g1

0x11db,	// (0x00017bc2) popup_slider_window_g2

0x11f7,	// (0x00017bde) popup_slider_window_g3

0x0005,

0xfcdb,	// (0x000266c2) popup_slider_window_g

0x1253,	// (0x00017c3a) popup_slider_window_t1

0x12c7,	// (0x00017cae) small_volume_slider_vertical_pane

0xefc9,	// (0x000259b0) small_volume_slider_vertical_pane_g1

0xefc9,	// (0x000259b0) small_volume_slider_vertical_pane_g2

0x12e3,	// (0x00017cca) small_volume_slider_vertical_pane_g3

0x0002,

0xfced,	// (0x000266d4) small_volume_slider_vertical_pane_g

0x890d,	// (0x0001f2f4) area_side_right_pane_ParamLimits

0x890d,	// (0x0001f2f4) area_side_right_pane

0xabfb,	// (0x000215e2) aid_size_side_button_ParamLimits

0xabfb,	// (0x000215e2) aid_size_side_button

0xac14,	// (0x000215fb) grid_sctrl_middle_pane_ParamLimits

0xac14,	// (0x000215fb) grid_sctrl_middle_pane

0x6993,	// (0x0001d37a) sctrl_sk_bottom_pane

0x69a4,	// (0x0001d38b) sctrl_sk_top_pane

0x69b6,	// (0x0001d39d) aid_touch_sctrl_top

0xbd20,	// (0x00022707) bg_sctrl_sk_pane_ParamLimits

0xbd20,	// (0x00022707) bg_sctrl_sk_pane

0x69c3,	// (0x0001d3aa) sctrl_sk_top_pane_g1

0x69d0,	// (0x0001d3b7) sctrl_sk_top_pane_t1

0x69b6,	// (0x0001d39d) aid_touch_sctrl_bottom

0xbd20,	// (0x00022707) bg_sctrl_sk_pane_cp_ParamLimits

0xbd20,	// (0x00022707) bg_sctrl_sk_pane_cp

0x69eb,	// (0x0001d3d2) sctrl_sk_bottom_pane_g1

0x69d0,	// (0x0001d3b7) sctrl_sk_bottom_pane_t1

0xac2e,	// (0x00021615) cell_sctrl_middle_pane_ParamLimits

0xac2e,	// (0x00021615) cell_sctrl_middle_pane

0xac3f,	// (0x00021626) aid_touch_sctrl_middle_ParamLimits

0xac3f,	// (0x00021626) aid_touch_sctrl_middle

0xac4c,	// (0x00021633) bg_sctrl_middle_pane_ParamLimits

0xac4c,	// (0x00021633) bg_sctrl_middle_pane

0x136b,	// (0x00017d52) cell_sctrl_middle_pane_g1_ParamLimits

0x136b,	// (0x00017d52) cell_sctrl_middle_pane_g1

0xac5a,	// (0x00021641) cell_sctrl_middle_pane_g2_ParamLimits

0xac5a,	// (0x00021641) cell_sctrl_middle_pane_g2

0x0001,

0xfcf9,	// (0x000266e0) cell_sctrl_middle_pane_g_ParamLimits

0xfcf9,	// (0x000266e0) cell_sctrl_middle_pane_g

0xd171,	// (0x00023b58) bg_sctrl_middle_pane_g1

0xd179,	// (0x00023b60) bg_sctrl_middle_pane_g2

0xd181,	// (0x00023b68) bg_sctrl_middle_pane_g3

0xd189,	// (0x00023b70) bg_sctrl_middle_pane_g4

0xd191,	// (0x00023b78) bg_sctrl_middle_pane_g5

0xd199,	// (0x00023b80) bg_sctrl_middle_pane_g6

0xd1a1,	// (0x00023b88) bg_sctrl_middle_pane_g7

0xd1a9,	// (0x00023b90) bg_sctrl_middle_pane_g8

0x0007,

0xfcfe,	// (0x000266e5) bg_sctrl_middle_pane_g

0xd1b1,	// (0x00023b98) bg_sctrl_middle_pane_g8_copy1

0xd171,	// (0x00023b58) bg_sctrl_sk_pane_g1

0xd179,	// (0x00023b60) bg_sctrl_sk_pane_g2

0xd181,	// (0x00023b68) bg_sctrl_sk_pane_g3

0x0008,

0xf86b,	// (0x00026252) bg_sctrl_sk_pane_g

0xc11b,	// (0x00022b02) aid_size_touch_scroll_bar

0xd189,	// (0x00023b70) bg_sctrl_sk_pane_g4

0xd191,	// (0x00023b78) bg_sctrl_sk_pane_g5

0xd199,	// (0x00023b80) bg_sctrl_sk_pane_g6

0xd1a1,	// (0x00023b88) bg_sctrl_sk_pane_g7

0xd1a9,	// (0x00023b90) bg_sctrl_sk_pane_g8

0xd1b1,	// (0x00023b98) bg_sctrl_sk_pane_g9

0xcea5,	// (0x0002388c) popup_fep_china_hwr2_fs_candidate_window

0x92bf,	// (0x0001fca6) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x92bf,	// (0x0001fca6) popup_fep_china_hwr2_fs_control_window

0xf232,	// (0x00025c19) sctrl_sk_top_pane_g2

0x0001,

0xfcf4,	// (0x000266db) sctrl_sk_top_pane_g

0xac66,	// (0x0002164d) aid_fep_china_hwr2_fs_cell_ParamLimits

0xac66,	// (0x0002164d) aid_fep_china_hwr2_fs_cell

0xac7a,	// (0x00021661) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xac7a,	// (0x00021661) bg_popup_fep_shadow_pane_cp4

0xac91,	// (0x00021678) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xac91,	// (0x00021678) bg_popup_fep_shadow_pane_cp5

0xaca3,	// (0x0002168a) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xaca3,	// (0x0002168a) popup_fep_china_hwr2_fs_control_bar_grid

0xacb7,	// (0x0002169e) popup_fep_china_hwr2_fs_control_funtion_grid

0x133f,	// (0x00017d26) aid_fep_china_hwr2_fs_candi_cell

0xbb7d,	// (0x00022564) bg_popup_fep_shadow_pane_cp6

0x1349,	// (0x00017d30) popup_fep_china_hwr2_fs_candidate_grid

0xacbf,	// (0x000216a6) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xacbf,	// (0x000216a6) cell_fep_china_hwr2_fs_funtion_grid

0xefc9,	// (0x000259b0) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x136b,	// (0x00017d52) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x136b,	// (0x00017d52) cell_fep_china_hwr2_fs_funtion_grid_g1

0x1379,	// (0x00017d60) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x1379,	// (0x00017d60) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd0f,	// (0x000266f6) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd0f,	// (0x000266f6) cell_fep_china_hwr2_fs_funtion_grid_g

0xacd7,	// (0x000216be) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xacd7,	// (0x000216be) cell_fep_china_hwr2_fs_funtion_grid_t1

0xacec,	// (0x000216d3) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xacec,	// (0x000216d3) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd14,	// (0x000266fb) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd14,	// (0x000266fb) cell_fep_china_hwr2_fs_funtion_grid_t

0x13c0,	// (0x00017da7) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x13c8,	// (0x00017daf) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x13d0,	// (0x00017db7) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd19,	// (0x00026700) popup_fep_china_hwr2_fs_control_bar_grid_g

0x13d8,	// (0x00017dbf) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x13d8,	// (0x00017dbf) cell_fep_china_hwr2_fs_candidate_grid

0x13f1,	// (0x00017dd8) popup_fep_china_hwr2_fs_candidate_grid_g20

0x13f9,	// (0x00017de0) popup_fep_china_hwr2_fs_candidate_grid_g21

0xefc9,	// (0x000259b0) cell_fep_china_hwr2_fs_candidate_grid_g1

0xefc9,	// (0x000259b0) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb40,	// (0x00026527) cell_fep_china_hwr2_fs_candidate_grid_g

0x1401,	// (0x00017de8) cell_fep_china_hwr2_fs_candidate_grid_t1

0xcfc0,	// (0x000239a7) clock_nsta_pane_cp_24_ParamLimits

0xcfc0,	// (0x000239a7) clock_nsta_pane_cp_24

0xd028,	// (0x00023a0f) indicator_nsta_pane_cp_24_ParamLimits

0xd028,	// (0x00023a0f) indicator_nsta_pane_cp_24

0xdd88,	// (0x0002476f) heading_pane_g1

0x0001,

0xf8d0,	// (0x000262b7) heading_pane_g

0xe46b,	// (0x00024e52) grid_sct_catagory_button_pane

0xe3b7,	// (0x00024d9e) scroll_pane_cp5_ParamLimits

0xed33,	// (0x0002571a) button_value_adjust_pane_cp5_ParamLimits

0xed33,	// (0x0002571a) button_value_adjust_pane_cp5

0xedf1,	// (0x000257d8) form2_midp_time_pane_ParamLimits

0x140f,	// (0x00017df6) cell_sct_catagory_button_pane_ParamLimits

0x140f,	// (0x00017df6) cell_sct_catagory_button_pane

0xef8e,	// (0x00025975) bg_button_pane_cp01_ParamLimits

0xef8e,	// (0x00025975) bg_button_pane_cp01

0xefc9,	// (0x000259b0) cell_sct_catagory_button_pane_g1

0x97fe,	// (0x000201e5) popup_tb_extension_window

0xad08,	// (0x000216ef) aid_size_cell_ext_ParamLimits

0xad08,	// (0x000216ef) aid_size_cell_ext

0xbf5d,	// (0x00022944) bg_tb_trans_pane_cp1_ParamLimits

0xbf5d,	// (0x00022944) bg_tb_trans_pane_cp1

0xad2e,	// (0x00021715) grid_tb_ext_pane_ParamLimits

0xad2e,	// (0x00021715) grid_tb_ext_pane

0xad6b,	// (0x00021752) cell_tb_ext_pane_ParamLimits

0xad6b,	// (0x00021752) cell_tb_ext_pane

0xad93,	// (0x0002177a) cell_tb_ext_pane_g1_ParamLimits

0xad93,	// (0x0002177a) cell_tb_ext_pane_g1

0x14a5,	// (0x00017e8c) cell_tb_ext_pane_t1

0xbd20,	// (0x00022707) list_highlight_pane_cp11_ParamLimits

0xbd20,	// (0x00022707) list_highlight_pane_cp11

0x5a07,	// (0x0001c3ee) popup_uni_indicator_window_ParamLimits

0x5a07,	// (0x0001c3ee) popup_uni_indicator_window

0xc1e2,	// (0x00022bc9) bg_popup_sub_pane_cp14

0x14c0,	// (0x00017ea7) list_uniindi_pane

0x14cc,	// (0x00017eb3) uniindi_top_pane

0xbd20,	// (0x00022707) bg_uniindi_top_pane

0x14eb,	// (0x00017ed2) uniindi_top_pane_g1

0x1501,	// (0x00017ee8) uniindi_top_pane_g2

0x0003,

0xfd20,	// (0x00026707) uniindi_top_pane_g

0x152b,	// (0x00017f12) uniindi_top_pane_t1

0x1555,	// (0x00017f3c) list_single_uniindi_pane_ParamLimits

0x1555,	// (0x00017f3c) list_single_uniindi_pane

0xefc9,	// (0x000259b0) bg_uniindi_top_pane_g1

0x1567,	// (0x00017f4e) list_single_uniindi_pane_g1

0x157a,	// (0x00017f61) list_single_uniindi_pane_t1

0xbb7d,	// (0x00022564) control_bg_pane

0x159f,	// (0x00017f86) bg_sctrl_sk_pane_cp1

0x15a8,	// (0x00017f8f) bg_sctrl_sk_pane_cp2

0x15b1,	// (0x00017f98) control_bg_pane_g1

0x15ba,	// (0x00017fa1) control_bg_pane_g2

0x0001,

0xfd29,	// (0x00026710) control_bg_pane_g

0xebec,	// (0x000255d3) cell_indicator_nsta_pane_g1_ParamLimits

0xa403,	// (0x00020dea) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa4,	// (0x0002648b) cell_indicator_nsta_pane_g_ParamLimits

0x5349,	// (0x0001bd30) form2_midp_time_pane_t1_ParamLimits

0x2d38,	// (0x0001971f) main_idle_act4_pane_ParamLimits

0x2d38,	// (0x0001971f) main_idle_act4_pane

0x97fe,	// (0x000201e5) popup_tb_extension_window_ParamLimits

0xad52,	// (0x00021739) tb_ext_find_pane_ParamLimits

0xad52,	// (0x00021739) tb_ext_find_pane

0x15c3,	// (0x00017faa) ai_gene_pane_1_cp1

0xccab,	// (0x00023692) ai_gene_pane_2_cp1

0x15cb,	// (0x00017fb2) list_single_idle_plugin_calendar_pane

0x15d4,	// (0x00017fbb) list_single_idle_plugin_notification_pane

0x15dd,	// (0x00017fc4) list_single_idle_plugin_player_pane

0xadb0,	// (0x00021797) list_single_idle_plugin_shortcut_pane_ParamLimits

0xadb0,	// (0x00021797) list_single_idle_plugin_shortcut_pane

0xadd8,	// (0x000217bf) main_idle_act4_pane_t1

0xadee,	// (0x000217d5) main_idle_act4_pane_t2

0x0001,

0xfd2e,	// (0x00026715) main_idle_act4_pane_t

0xae06,	// (0x000217ed) middle_sk_idle_act4_pane_ParamLimits

0xae06,	// (0x000217ed) middle_sk_idle_act4_pane

0xae22,	// (0x00021809) popup_clock_digital_analogue_window_cp2

0xae49,	// (0x00021830) shortcut_wheel_idle_act4_pane_ParamLimits

0xae49,	// (0x00021830) shortcut_wheel_idle_act4_pane

0xefc9,	// (0x000259b0) shortcut_wheel_idle_act4_pane_g1

0xefc9,	// (0x000259b0) shortcut_wheel_idle_act4_pane_g2

0xefc9,	// (0x000259b0) shortcut_wheel_idle_act4_pane_g3

0xefc9,	// (0x000259b0) shortcut_wheel_idle_act4_pane_g4

0xefc9,	// (0x000259b0) shortcut_wheel_idle_act4_pane_g5

0x1670,	// (0x00018057) shortcut_wheel_idle_act4_pane_g6

0x1678,	// (0x0001805f) shortcut_wheel_idle_act4_pane_g7

0x1680,	// (0x00018067) shortcut_wheel_idle_act4_pane_g8

0x1688,	// (0x0001806f) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd33,	// (0x0002671a) shortcut_wheel_idle_act4_pane_g

0x2d67,	// (0x0001974e) middle_sk_idle_act4_pane_g1_ParamLimits

0x2d67,	// (0x0001974e) middle_sk_idle_act4_pane_g1

0xaec6,	// (0x000218ad) middle_sk_idle_act4_pane_g2_ParamLimits

0xaec6,	// (0x000218ad) middle_sk_idle_act4_pane_g2

0x0001,

0xfd56,	// (0x0002673d) middle_sk_idle_act4_pane_g_ParamLimits

0xfd56,	// (0x0002673d) middle_sk_idle_act4_pane_g

0xaede,	// (0x000218c5) middle_sk_idle_act4_pane_t1_ParamLimits

0xaede,	// (0x000218c5) middle_sk_idle_act4_pane_t1

0xaf0d,	// (0x000218f4) grid_ai_shortcut_pane_ParamLimits

0xaf0d,	// (0x000218f4) grid_ai_shortcut_pane

0xaf2a,	// (0x00021911) list_highlight_pane_cp16_ParamLimits

0xaf2a,	// (0x00021911) list_highlight_pane_cp16

0xaf37,	// (0x0002191e) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xaf37,	// (0x0002191e) list_single_idle_plugin_shortcut_pane_g1

0xaf43,	// (0x0002192a) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xaf43,	// (0x0002192a) list_single_idle_plugin_shortcut_pane_g2

0xaf5f,	// (0x00021946) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xaf5f,	// (0x00021946) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd5b,	// (0x00026742) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd5b,	// (0x00026742) list_single_idle_plugin_shortcut_pane_g

0xaf74,	// (0x0002195b) cell_ai_shortcut_pane_ParamLimits

0xaf74,	// (0x0002195b) cell_ai_shortcut_pane

0xaf8a,	// (0x00021971) cell_ai_shortcut_pane_g1_ParamLimits

0xaf8a,	// (0x00021971) cell_ai_shortcut_pane_g1

0x15c3,	// (0x00017faa) ai_gene_pane_1_cp2

0x17b5,	// (0x0001819c) ai_gene_pane_2_cp2

0x17bd,	// (0x000181a4) list_highlight_pane_cp15

0x17c6,	// (0x000181ad) list_single_idle_plugin_calendar_pane_g1

0x17bd,	// (0x000181a4) list_highlight_pane_cp17

0x17ce,	// (0x000181b5) list_single_idle_plugin_calendar_pane_g1_copy1

0x17d6,	// (0x000181bd) list_single_idle_plugin_player_pane_g1

0xe680,	// (0x00025067) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd62,	// (0x00026749) list_single_idle_plugin_player_pane_g

0x17de,	// (0x000181c5) list_single_idle_plugin_player_pane_t1

0x17ec,	// (0x000181d3) list_single_idle_plugin_player_pane_t2

0x17fa,	// (0x000181e1) list_single_idle_plugin_player_pane_t3

0x1808,	// (0x000181ef) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd67,	// (0x0002674e) list_single_idle_plugin_player_pane_t

0x1816,	// (0x000181fd) wait_bar_pane_cp15

0x181e,	// (0x00018205) grid_ai_notification_pane

0xe680,	// (0x00025067) list_single_idle_plugin_notification_pane_g1

0xafac,	// (0x00021993) cell_ai_notification_pane_ParamLimits

0xafac,	// (0x00021993) cell_ai_notification_pane

0x1834,	// (0x0001821b) cell_ai_notification_pane_g1

0x183c,	// (0x00018223) cell_ai_notification_pane_t1

0xafb9,	// (0x000219a0) tb_ext_find_button_pane

0xafc1,	// (0x000219a8) tb_ext_find_pane_g1

0xafc9,	// (0x000219b0) tb_ext_find_pane_t1

0xc703,	// (0x000230ea) tb_ext_find_button_pane_g1

0x1868,	// (0x0001824f) tb_ext_find_button_pane_g2

0x0001,

0xfd70,	// (0x00026757) tb_ext_find_button_pane_g

0xadd8,	// (0x000217bf) main_idle_act4_pane_t1_ParamLimits

0xadee,	// (0x000217d5) main_idle_act4_pane_t2_ParamLimits

0xfd2e,	// (0x00026715) main_idle_act4_pane_t_ParamLimits

0xae22,	// (0x00021809) popup_clock_digital_analogue_window_cp2_ParamLimits

0xae39,	// (0x00021820) sat_plugin_idle_act4_pane_ParamLimits

0xae39,	// (0x00021820) sat_plugin_idle_act4_pane

0xafd7,	// (0x000219be) sat_plugin_idle_act4_pane_t1_ParamLimits

0xafd7,	// (0x000219be) sat_plugin_idle_act4_pane_t1

0xafef,	// (0x000219d6) sat_plugin_idle_act4_pane_t2_ParamLimits

0xafef,	// (0x000219d6) sat_plugin_idle_act4_pane_t2

0xb007,	// (0x000219ee) sat_plugin_idle_act4_pane_t3_ParamLimits

0xb007,	// (0x000219ee) sat_plugin_idle_act4_pane_t3

0xb01f,	// (0x00021a06) sat_plugin_idle_act4_pane_t4_ParamLimits

0xb01f,	// (0x00021a06) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd75,	// (0x0002675c) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd75,	// (0x0002675c) sat_plugin_idle_act4_pane_t

0x5950,	// (0x0001c337) popup_battery_window_ParamLimits

0x5950,	// (0x0001c337) popup_battery_window

0xbd20,	// (0x00022707) bg_popup_sub_pane_cp25_ParamLimits

0xbd20,	// (0x00022707) bg_popup_sub_pane_cp25

0x18bd,	// (0x000182a4) popup_battery_window_g1_ParamLimits

0x18bd,	// (0x000182a4) popup_battery_window_g1

0x18c9,	// (0x000182b0) popup_battery_window_t1_ParamLimits

0x18c9,	// (0x000182b0) popup_battery_window_t1

0x18db,	// (0x000182c2) popup_battery_window_t2_ParamLimits

0x18db,	// (0x000182c2) popup_battery_window_t2

0x0001,

0xfd7e,	// (0x00026765) popup_battery_window_t_ParamLimits

0xfd7e,	// (0x00026765) popup_battery_window_t

0x9005,	// (0x0001f9ec) midp_canvas_pane_ParamLimits

0x9062,	// (0x0001fa49) midp_keypad_pane_ParamLimits

0x9062,	// (0x0001fa49) midp_keypad_pane

0xc339,	// (0x00022d20) main_midp_pane_ParamLimits

0xecc8,	// (0x000256af) signal_pane_g2_cp_ParamLimits

0xb037,	// (0x00021a1e) aid_size_cell_midp_keypad_ParamLimits

0xb037,	// (0x00021a1e) aid_size_cell_midp_keypad

0xb055,	// (0x00021a3c) midp_keyp_game_grid_pane_ParamLimits

0xb055,	// (0x00021a3c) midp_keyp_game_grid_pane

0xb07c,	// (0x00021a63) midp_keyp_rocker_pane_ParamLimits

0xb07c,	// (0x00021a63) midp_keyp_rocker_pane

0xb0bd,	// (0x00021aa4) midp_keyp_sk_left_pane_ParamLimits

0xb0bd,	// (0x00021aa4) midp_keyp_sk_left_pane

0xb111,	// (0x00021af8) midp_keyp_sk_right_pane_ParamLimits

0xb111,	// (0x00021af8) midp_keyp_sk_right_pane

0xbb7d,	// (0x00022564) bg_button_pane_cp03

0xb165,	// (0x00021b4c) midp_keyp_sk_left_pane_g1

0xbb7d,	// (0x00022564) bg_button_pane_cp04

0xb165,	// (0x00021b4c) midp_keyp_sk_right_pane_g1

0xefc9,	// (0x000259b0) midp_keyp_rocker_pane_g1

0xb16e,	// (0x00021b55) keyp_game_cell_pane_ParamLimits

0xb16e,	// (0x00021b55) keyp_game_cell_pane

0xbb7d,	// (0x00022564) bg_button_pane_cp02

0xb192,	// (0x00021b79) keyp_game_cell_pane_g1

0x894f,	// (0x0001f336) popup_fep_vkb2_window_ParamLimits

0x894f,	// (0x0001f336) popup_fep_vkb2_window

0xb19b,	// (0x00021b82) aid_size_cell_vkb2_ParamLimits

0xb19b,	// (0x00021b82) aid_size_cell_vkb2

0xb1d1,	// (0x00021bb8) popup_fep_vkb2_window_g1_ParamLimits

0xb1d1,	// (0x00021bb8) popup_fep_vkb2_window_g1

0xb218,	// (0x00021bff) vkb2_area_bottom_pane_ParamLimits

0xb218,	// (0x00021bff) vkb2_area_bottom_pane

0xb26c,	// (0x00021c53) vkb2_area_keypad_pane_ParamLimits

0xb26c,	// (0x00021c53) vkb2_area_keypad_pane

0xb2b4,	// (0x00021c9b) vkb2_area_top_pane_ParamLimits

0xb2b4,	// (0x00021c9b) vkb2_area_top_pane

0xb33a,	// (0x00021d21) vkb2_top_entry_pane_ParamLimits

0xb33a,	// (0x00021d21) vkb2_top_entry_pane

0xb367,	// (0x00021d4e) vkb2_top_grid_left_pane_ParamLimits

0xb367,	// (0x00021d4e) vkb2_top_grid_left_pane

0xb387,	// (0x00021d6e) vkb2_top_grid_right_pane_ParamLimits

0xb387,	// (0x00021d6e) vkb2_top_grid_right_pane

0x6c41,	// (0x0001d628) vkb2_cell_keypad_pane_ParamLimits

0x6c41,	// (0x0001d628) vkb2_cell_keypad_pane

0xb3cd,	// (0x00021db4) vkb2_area_bottom_grid_pane_ParamLimits

0xb3cd,	// (0x00021db4) vkb2_area_bottom_grid_pane

0xb3f7,	// (0x00021dde) vkb2_area_bottom_pane_g1_ParamLimits

0xb3f7,	// (0x00021dde) vkb2_area_bottom_pane_g1

0xb41d,	// (0x00021e04) vkb2_area_bottom_pane_g2_ParamLimits

0xb41d,	// (0x00021e04) vkb2_area_bottom_pane_g2

0xb44e,	// (0x00021e35) vkb2_area_bottom_pane_g3_ParamLimits

0xb44e,	// (0x00021e35) vkb2_area_bottom_pane_g3

0x0002,

0xfd83,	// (0x0002676a) vkb2_area_bottom_pane_g_ParamLimits

0xfd83,	// (0x0002676a) vkb2_area_bottom_pane_g

0x6deb,	// (0x0001d7d2) vkb2_top_cell_left_pane_ParamLimits

0x6deb,	// (0x0001d7d2) vkb2_top_cell_left_pane

0xb4b8,	// (0x00021e9f) vkb2_top_entry_pane_g1_ParamLimits

0xb4b8,	// (0x00021e9f) vkb2_top_entry_pane_g1

0xb4c6,	// (0x00021ead) vkb2_top_entry_pane_t1_ParamLimits

0xb4c6,	// (0x00021ead) vkb2_top_entry_pane_t1

0x2d7d,	// (0x00019764) vkb2_top_entry_pane_t2_ParamLimits

0x2d7d,	// (0x00019764) vkb2_top_entry_pane_t2

0x2daf,	// (0x00019796) vkb2_top_entry_pane_t3_ParamLimits

0x2daf,	// (0x00019796) vkb2_top_entry_pane_t3

0x0002,

0xfd8a,	// (0x00026771) vkb2_top_entry_pane_t_ParamLimits

0xfd8a,	// (0x00026771) vkb2_top_entry_pane_t

0xb4ff,	// (0x00021ee6) vkb2_top_grid_right_pane_g1_ParamLimits

0xb4ff,	// (0x00021ee6) vkb2_top_grid_right_pane_g1

0x6e8e,	// (0x0001d875) vkb2_top_grid_right_pane_g2_ParamLimits

0x6e8e,	// (0x0001d875) vkb2_top_grid_right_pane_g2

0x6ea6,	// (0x0001d88d) vkb2_top_grid_right_pane_g3_ParamLimits

0x6ea6,	// (0x0001d88d) vkb2_top_grid_right_pane_g3

0xb515,	// (0x00021efc) vkb2_top_grid_right_pane_g4_ParamLimits

0xb515,	// (0x00021efc) vkb2_top_grid_right_pane_g4

0x0003,

0xfd91,	// (0x00026778) vkb2_top_grid_right_pane_g_ParamLimits

0xfd91,	// (0x00026778) vkb2_top_grid_right_pane_g

0x6ed4,	// (0x0001d8bb) vkb2_top_cell_left_pane_g1

0x6eeb,	// (0x0001d8d2) vkb2_cell_keypad_pane_g1_ParamLimits

0x6eeb,	// (0x0001d8d2) vkb2_cell_keypad_pane_g1

0x2dd3,	// (0x000197ba) vkb2_cell_keypad_pane_t1_ParamLimits

0x2dd3,	// (0x000197ba) vkb2_cell_keypad_pane_t1

0x6ef9,	// (0x0001d8e0) vkb2_cell_bottom_grid_pane_ParamLimits

0x6ef9,	// (0x0001d8e0) vkb2_cell_bottom_grid_pane

0x6f32,	// (0x0001d919) vkb2_cell_bottom_grid_pane_g1

0xae6a,	// (0x00021851) aid_call2_pane_cp02

0xae72,	// (0x00021859) aid_call_pane_cp02

0xae7a,	// (0x00021861) clock_digital_number_pane_cp10

0xae82,	// (0x00021869) clock_digital_number_pane_cp11

0xae8a,	// (0x00021871) clock_digital_number_pane_cp12

0xae92,	// (0x00021879) clock_digital_number_pane_cp13

0xae9a,	// (0x00021881) clock_digital_separator_pane_cp10

0xc703,	// (0x000230ea) popup_clock_digital_analogue_window_cp2_g1

0xc703,	// (0x000230ea) popup_clock_digital_analogue_window_cp2_g2

0xaea2,	// (0x00021889) popup_clock_digital_analogue_window_cp2_g3

0xc703,	// (0x000230ea) popup_clock_digital_analogue_window_cp2_g4

0xaea2,	// (0x00021889) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd46,	// (0x0002672d) popup_clock_digital_analogue_window_cp2_g

0xaeaa,	// (0x00021891) popup_clock_digital_analogue_window_cp2_t1

0xaeb8,	// (0x0002189f) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd51,	// (0x00026738) popup_clock_digital_analogue_window_cp2_t

0xefc9,	// (0x000259b0) clock_digital_number_pane_cp10_g1

0xefc9,	// (0x000259b0) clock_digital_number_pane_cp10_g2

0x0001,

0xfb40,	// (0x00026527) clock_digital_number_pane_cp10_g

0xefc9,	// (0x000259b0) clock_digital_separator_pane_cp10_g1

0xefc9,	// (0x000259b0) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb40,	// (0x00026527) clock_digital_separator_pane_cp10_g

0x150d,	// (0x00017ef4) uniindi_top_pane_g3

0x151e,	// (0x00017f05) uniindi_top_pane_g4

0x6ccc,	// (0x0001d6b3) vkb2_row_keypad_pane_ParamLimits

0x6ccc,	// (0x0001d6b3) vkb2_row_keypad_pane

0x6f52,	// (0x0001d939) vkb2_cell_t_keypad_pane_ParamLimits

0x6f52,	// (0x0001d939) vkb2_cell_t_keypad_pane

0x6f62,	// (0x0001d949) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6f62,	// (0x0001d949) vkb2_cell_t_keypad_pane_cp08

0x6f75,	// (0x0001d95c) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6f75,	// (0x0001d95c) vkb2_cell_t_keypad_pane_cp09

0x6f89,	// (0x0001d970) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6f89,	// (0x0001d970) vkb2_cell_t_keypad_pane_cp01

0x6f9a,	// (0x0001d981) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6f9a,	// (0x0001d981) vkb2_cell_t_keypad_pane_cp02

0x6fab,	// (0x0001d992) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6fab,	// (0x0001d992) vkb2_cell_t_keypad_pane_cp03

0x6fbc,	// (0x0001d9a3) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6fbc,	// (0x0001d9a3) vkb2_cell_t_keypad_pane_cp04

0x6fcd,	// (0x0001d9b4) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6fcd,	// (0x0001d9b4) vkb2_cell_t_keypad_pane_cp05

0x6fde,	// (0x0001d9c5) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x6fde,	// (0x0001d9c5) vkb2_cell_t_keypad_pane_cp06

0x6fef,	// (0x0001d9d6) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6fef,	// (0x0001d9d6) vkb2_cell_t_keypad_pane_cp07

0x7000,	// (0x0001d9e7) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7000,	// (0x0001d9e7) vkb2_cell_t_keypad_pane_cp10

0xf232,	// (0x00025c19) vkb2_cell_t_keypad_pane_g1

0x2dea,	// (0x000197d1) vkb2_cell_t_keypad_pane_t1

0xbb7d,	// (0x00022564) popup_grid_graphic2_window

0xb52b,	// (0x00021f12) aid_size_cell_graphic2_ParamLimits

0xb52b,	// (0x00021f12) aid_size_cell_graphic2

0xb569,	// (0x00021f50) bg_popup_window_pane_cp21_ParamLimits

0xb569,	// (0x00021f50) bg_popup_window_pane_cp21

0xb577,	// (0x00021f5e) graphic2_pages_pane_ParamLimits

0xb577,	// (0x00021f5e) graphic2_pages_pane

0xb5cd,	// (0x00021fb4) grid_graphic2_control_pane_ParamLimits

0xb5cd,	// (0x00021fb4) grid_graphic2_control_pane

0xb615,	// (0x00021ffc) grid_graphic2_pane_ParamLimits

0xb615,	// (0x00021ffc) grid_graphic2_pane

0xb69c,	// (0x00022083) cell_graphic2_pane

0xbb7d,	// (0x00022564) main_comp_mode_pane

0x0d0f,	// (0x000176f6) list_ai3_gene_pane_ParamLimits

0xab43,	// (0x0002152a) bg_popup_window_pane_cp19_ParamLimits

0x1161,	// (0x00017b48) bg_touch_area_indi_pane_ParamLimits

0x1161,	// (0x00017b48) bg_touch_area_indi_pane

0x1177,	// (0x00017b5e) bg_touch_area_indi_pane_cp01_ParamLimits

0x1177,	// (0x00017b5e) bg_touch_area_indi_pane_cp01

0x118d,	// (0x00017b74) bg_touch_area_indi_pane_cp02_ParamLimits

0x118d,	// (0x00017b74) bg_touch_area_indi_pane_cp02

0x11a5,	// (0x00017b8c) bg_touch_area_indi_pane_cp03_ParamLimits

0x11a5,	// (0x00017b8c) bg_touch_area_indi_pane_cp03

0x11bf,	// (0x00017ba6) popup_slider_window_g1_ParamLimits

0x11db,	// (0x00017bc2) popup_slider_window_g2_ParamLimits

0x11f7,	// (0x00017bde) popup_slider_window_g3_ParamLimits

0xfcdb,	// (0x000266c2) popup_slider_window_g_ParamLimits

0x1253,	// (0x00017c3a) popup_slider_window_t1_ParamLimits

0x12c7,	// (0x00017cae) small_volume_slider_vertical_pane_ParamLimits

0xb69c,	// (0x00022083) cell_graphic2_pane_ParamLimits

0xb6f9,	// (0x000220e0) bg_button_pane_cp10_ParamLimits

0xb6f9,	// (0x000220e0) bg_button_pane_cp10

0xb70c,	// (0x000220f3) bg_button_pane_cp11_ParamLimits

0xb70c,	// (0x000220f3) bg_button_pane_cp11

0xb71f,	// (0x00022106) graphic2_pages_pane_g1_ParamLimits

0xb71f,	// (0x00022106) graphic2_pages_pane_g1

0xb73a,	// (0x00022121) graphic2_pages_pane_g2_ParamLimits

0xb73a,	// (0x00022121) graphic2_pages_pane_g2

0x0001,

0xfd9f,	// (0x00026786) graphic2_pages_pane_g_ParamLimits

0xfd9f,	// (0x00026786) graphic2_pages_pane_g

0xb752,	// (0x00022139) graphic2_pages_pane_t1_ParamLimits

0xb752,	// (0x00022139) graphic2_pages_pane_t1

0xb76a,	// (0x00022151) cell_graphic2_control_pane_ParamLimits

0xb76a,	// (0x00022151) cell_graphic2_control_pane

0xb79c,	// (0x00022183) cell_graphic2_pane_g1_ParamLimits

0xb79c,	// (0x00022183) cell_graphic2_pane_g1

0x2dfc,	// (0x000197e3) cell_graphic2_pane_g2_ParamLimits

0x2dfc,	// (0x000197e3) cell_graphic2_pane_g2

0xb7a9,	// (0x00022190) cell_graphic2_pane_g3_ParamLimits

0xb7a9,	// (0x00022190) cell_graphic2_pane_g3

0x2e09,	// (0x000197f0) cell_graphic2_pane_g4_ParamLimits

0x2e09,	// (0x000197f0) cell_graphic2_pane_g4

0xb7b6,	// (0x0002219d) cell_graphic2_pane_g5_ParamLimits

0xb7b6,	// (0x0002219d) cell_graphic2_pane_g5

0x0004,

0xfda4,	// (0x0002678b) cell_graphic2_pane_g_ParamLimits

0xfda4,	// (0x0002678b) cell_graphic2_pane_g

0xb7d6,	// (0x000221bd) cell_graphic2_pane_t1_ParamLimits

0xb7d6,	// (0x000221bd) cell_graphic2_pane_t1

0xdd7c,	// (0x00024763) grid_highlight_pane_cp11_ParamLimits

0xdd7c,	// (0x00024763) grid_highlight_pane_cp11

0xbd20,	// (0x00022707) bg_button_pane_cp05

0xb80b,	// (0x000221f2) cell_graphic2_control_pane_g1

0xefc9,	// (0x000259b0) bg_touch_area_indi_pane_g1

0x2e16,	// (0x000197fd) aid_cmod_rocker_key_size

0x2e20,	// (0x00019807) aid_cmode_itu_key_size

0x2e2a,	// (0x00019811) main_cmode_video_pane

0x2e34,	// (0x0001981b) main_comp_mode_itu_pane

0x2e40,	// (0x00019827) main_comp_mode_rocker_pane

0x2e4c,	// (0x00019833) cell_cmode_rocker_pane_ParamLimits

0x2e4c,	// (0x00019833) cell_cmode_rocker_pane

0x2e5e,	// (0x00019845) cell_cmode_itu_pane_ParamLimits

0x2e5e,	// (0x00019845) cell_cmode_itu_pane

0xc1e2,	// (0x00022bc9) bg_button_pane_cp06_ParamLimits

0xc1e2,	// (0x00022bc9) bg_button_pane_cp06

0xf232,	// (0x00025c19) cell_cmode_rocker_pane_g1_ParamLimits

0xf232,	// (0x00025c19) cell_cmode_rocker_pane_g1

0x136b,	// (0x00017d52) cell_cmode_rocker_pane_g2_ParamLimits

0x136b,	// (0x00017d52) cell_cmode_rocker_pane_g2

0x0001,

0xfdb4,	// (0x0002679b) cell_cmode_rocker_pane_g_ParamLimits

0xfdb4,	// (0x0002679b) cell_cmode_rocker_pane_g

0xbb7d,	// (0x00022564) bg_button_pane_cp07

0x2e73,	// (0x0001985a) cell_cmode_itu_pane_g1

0x2e7c,	// (0x00019863) cell_cmode_itu_pane_t1

0x2e8a,	// (0x00019871) cell_cmode_itu_pane_t2

0x0001,

0xfdb9,	// (0x000267a0) cell_cmode_itu_pane_t

0x158f,	// (0x00017f76) aid_touch_ctrl_left

0x1597,	// (0x00017f7e) aid_touch_ctrl_right

0xbb7d,	// (0x00022564) compa_mode_pane

0xb831,	// (0x00022218) aid_cmod_rocker_key_size_cp

0xb83b,	// (0x00022222) aid_cmode_itu_key_size_cp

0x2e98,	// (0x0001987f) compa_mode_pane_g1

0x2ea0,	// (0x00019887) compa_mode_pane_g2

0x2ea8,	// (0x0001988f) compa_mode_pane_g3

0x0002,

0xfdbe,	// (0x000267a5) compa_mode_pane_g

0xb845,	// (0x0002222c) main_comp_mode_itu_pane_cp

0xb84d,	// (0x00022234) main_comp_mode_rocker_pane_cp

0xb855,	// (0x0002223c) cell_cmode_itu_pane_cp_ParamLimits

0xb855,	// (0x0002223c) cell_cmode_itu_pane_cp

0xb86a,	// (0x00022251) cell_cmode_rocker_pane_cp_ParamLimits

0xb86a,	// (0x00022251) cell_cmode_rocker_pane_cp

0xc1e2,	// (0x00022bc9) bg_button_pane_cp06_cp_ParamLimits

0xc1e2,	// (0x00022bc9) bg_button_pane_cp06_cp

0xf232,	// (0x00025c19) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xf232,	// (0x00025c19) cell_cmode_rocker_pane_g1_cp

0xefc9,	// (0x000259b0) cell_cmode_rocker_pane_g2_cp

0xbb7d,	// (0x00022564) bg_button_pane_cp07_cp

0xb87c,	// (0x00022263) cell_cmode_itu_pane_g1_cp

0xb885,	// (0x0002226c) cell_cmode_itu_pane_t1_cp

0xb885,	// (0x0002226c) cell_cmode_itu_pane_t2_cp

0xa220,	// (0x00020c07) settings_code_pane_cp2

0xbbed,	// (0x000225d4) bg_popup_window_pane_cp3_ParamLimits

0xbeee,	// (0x000228d5) heading_pane_cp3_ParamLimits

0xbefa,	// (0x000228e1) listscroll_popup_graphic_pane_ParamLimits

0x6607,	// (0x0001cfee) fep_hwr_aid_pane_ParamLimits

0x69b6,	// (0x0001d39d) aid_touch_sctrl_top_ParamLimits

0x69c3,	// (0x0001d3aa) sctrl_sk_top_pane_g1_ParamLimits

0xf232,	// (0x00025c19) sctrl_sk_top_pane_g2_ParamLimits

0xfcf4,	// (0x000266db) sctrl_sk_top_pane_g_ParamLimits

0x69d0,	// (0x0001d3b7) sctrl_sk_top_pane_t1_ParamLimits

0x69b6,	// (0x0001d39d) aid_touch_sctrl_bottom_ParamLimits

0x69d0,	// (0x0001d3b7) sctrl_sk_bottom_pane_t1_ParamLimits

0x14d9,	// (0x00017ec0) aid_area_touch_clock

0xb2fc,	// (0x00021ce3) aid_vkb2_area_top_pane_cell_ParamLimits

0xb2fc,	// (0x00021ce3) aid_vkb2_area_top_pane_cell

0xb3a7,	// (0x00021d8e) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xb3a7,	// (0x00021d8e) aid_vkb2_area_bottom_pane_cell

0x2d75,	// (0x0001975c) popup_char_count_window

0x2eb0,	// (0x00019897) popup_char_count_window_g1

0x2eb9,	// (0x000198a0) popup_char_count_window_g2

0x2ec2,	// (0x000198a9) popup_char_count_window_g3

0x0002,

0xfdc5,	// (0x000267ac) popup_char_count_window_g

0x2ecb,	// (0x000198b2) popup_char_count_window_t1

0x6a71,	// (0x0001d458) popup_fep_char_preview_window_ParamLimits

0x6a71,	// (0x0001d458) popup_fep_char_preview_window

0xb31c,	// (0x00021d03) vkb2_top_candi_pane_ParamLimits

0xb31c,	// (0x00021d03) vkb2_top_candi_pane

0xb893,	// (0x0002227a) cell_vkb2_top_candi_pane_ParamLimits

0xb893,	// (0x0002227a) cell_vkb2_top_candi_pane

0xd71e,	// (0x00024105) bg_popup_fep_char_preview_window_ParamLimits

0xd71e,	// (0x00024105) bg_popup_fep_char_preview_window

0x7380,	// (0x0001dd67) popup_fep_char_preview_window_t1_ParamLimits

0x7380,	// (0x0001dd67) popup_fep_char_preview_window_t1

0x2ee9,	// (0x000198d0) bg_popup_fep_char_preview_window_g1

0x2ee1,	// (0x000198c8) bg_popup_fep_char_preview_window_g2

0x2ed9,	// (0x000198c0) bg_popup_fep_char_preview_window_g3

0x2f09,	// (0x000198f0) bg_popup_fep_char_preview_window_g4

0x2f01,	// (0x000198e8) bg_popup_fep_char_preview_window_g5

0x73ba,	// (0x0001dda1) bg_popup_fep_char_preview_window_g6

0x2ef9,	// (0x000198e0) bg_popup_fep_char_preview_window_g7

0x2ef1,	// (0x000198d8) bg_popup_fep_char_preview_window_g8

0x2f11,	// (0x000198f8) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdcc,	// (0x000267b3) bg_popup_fep_char_preview_window_g

0xf232,	// (0x00025c19) cell_vkb2_top_candi_pane_g1_ParamLimits

0xf232,	// (0x00025c19) cell_vkb2_top_candi_pane_g1

0x0114,	// (0x00016afb) cell_vkb2_top_candi_pane_g2_ParamLimits

0x0114,	// (0x00016afb) cell_vkb2_top_candi_pane_g2

0x0135,	// (0x00016b1c) cell_vkb2_top_candi_pane_g3_ParamLimits

0x0135,	// (0x00016b1c) cell_vkb2_top_candi_pane_g3

0x73c2,	// (0x0001dda9) cell_vkb2_top_candi_pane_g4_ParamLimits

0x73c2,	// (0x0001dda9) cell_vkb2_top_candi_pane_g4

0x2d46,	// (0x0001972d) cell_vkb2_top_candi_pane_g5_ParamLimits

0x2d46,	// (0x0001972d) cell_vkb2_top_candi_pane_g5

0x136b,	// (0x00017d52) cell_vkb2_top_candi_pane_g6_ParamLimits

0x136b,	// (0x00017d52) cell_vkb2_top_candi_pane_g6

0x0005,

0xfddf,	// (0x000267c6) cell_vkb2_top_candi_pane_g_ParamLimits

0xfddf,	// (0x000267c6) cell_vkb2_top_candi_pane_g

0x73e3,	// (0x0001ddca) cell_vkb2_top_candi_pane_t1

0x6424,	// (0x0001ce0b) aid_size_touch_slider_mark_ParamLimits

0x6424,	// (0x0001ce0b) aid_size_touch_slider_mark

0xb5b3,	// (0x00021f9a) grid_graphic2_catg_pane_ParamLimits

0xb5b3,	// (0x00021f9a) grid_graphic2_catg_pane

0xb66f,	// (0x00022056) popup_grid_graphic2_window_t1_ParamLimits

0xb66f,	// (0x00022056) popup_grid_graphic2_window_t1

0xb685,	// (0x0002206c) popup_grid_graphic2_window_t2_ParamLimits

0xb685,	// (0x0002206c) popup_grid_graphic2_window_t2

0x0001,

0xfd9a,	// (0x00026781) popup_grid_graphic2_window_t_ParamLimits

0xfd9a,	// (0x00026781) popup_grid_graphic2_window_t

0xbd20,	// (0x00022707) bg_button_pane_cp05_ParamLimits

0xb80b,	// (0x000221f2) cell_graphic2_control_pane_g1_ParamLimits

0xb8f9,	// (0x000222e0) cell_graphic2_catg_pane_ParamLimits

0xb8f9,	// (0x000222e0) cell_graphic2_catg_pane

0xbb7d,	// (0x00022564) bg_button_pane_cp12

0xb90b,	// (0x000222f2) cell_graphic2_catg_pane_g1

0x14a5,	// (0x00017e8c) cell_tb_ext_pane_t1_ParamLimits

0x6e4b,	// (0x0001d832) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6e4b,	// (0x0001d832) vkb2_top_cell_right_narrow_pane

0x6e63,	// (0x0001d84a) vkb2_top_cell_right_wide_pane_ParamLimits

0x6e63,	// (0x0001d84a) vkb2_top_cell_right_wide_pane

0x2d38,	// (0x0001971f) bg_vkb2_func_pane_ParamLimits

0x2d38,	// (0x0001971f) bg_vkb2_func_pane

0x6ed4,	// (0x0001d8bb) vkb2_top_cell_left_pane_g1_ParamLimits

0x2d38,	// (0x0001971f) bg_vkb2_fuc_pane_cp03_ParamLimits

0x2d38,	// (0x0001971f) bg_vkb2_fuc_pane_cp03

0x6f32,	// (0x0001d919) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xd179,	// (0x00023b60) bg_vkb2_func_pane_g1

0xd181,	// (0x00023b68) bg_vkb2_func_pane_g2

0xd191,	// (0x00023b78) bg_vkb2_func_pane_g3

0xd189,	// (0x00023b70) bg_vkb2_func_pane_g4

0xd199,	// (0x00023b80) bg_vkb2_func_pane_g5

0xd1a1,	// (0x00023b88) bg_vkb2_func_pane_g6

0xd1a9,	// (0x00023b90) bg_vkb2_func_pane_g7

0xd1b1,	// (0x00023b98) bg_vkb2_func_pane_g8

0xd171,	// (0x00023b58) bg_vkb2_func_pane_g9

0x0008,

0xfdec,	// (0x000267d3) bg_vkb2_func_pane_g

0x2d38,	// (0x0001971f) bg_vkb2_fuc_pane_cp01_ParamLimits

0x2d38,	// (0x0001971f) bg_vkb2_fuc_pane_cp01

0x6ed4,	// (0x0001d8bb) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6ed4,	// (0x0001d8bb) vkb2_top_cell_right_wide_pane_g1

0x2d38,	// (0x0001971f) bg_vkb2_fuc_pane_cp02_ParamLimits

0x2d38,	// (0x0001971f) bg_vkb2_fuc_pane_cp02

0x6f32,	// (0x0001d919) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6f32,	// (0x0001d919) vkb2_top_cell_right_narrow_pane_g1

0xaa7d,	// (0x00021464) aid_touch_area_decrease_ParamLimits

0xaa7d,	// (0x00021464) aid_touch_area_decrease

0xaab7,	// (0x0002149e) aid_touch_area_increase_ParamLimits

0xaab7,	// (0x0002149e) aid_touch_area_increase

0xaadf,	// (0x000214c6) aid_touch_area_mute_ParamLimits

0xaadf,	// (0x000214c6) aid_touch_area_mute

0xab0f,	// (0x000214f6) aid_touch_area_slider_ParamLimits

0xab0f,	// (0x000214f6) aid_touch_area_slider

0xab4f,	// (0x00021536) popup_slider_window_g4_ParamLimits

0xab4f,	// (0x00021536) popup_slider_window_g4

0xab77,	// (0x0002155e) popup_slider_window_g5_ParamLimits

0xab77,	// (0x0002155e) popup_slider_window_g5

0xabab,	// (0x00021592) popup_slider_window_g6_ParamLimits

0xabab,	// (0x00021592) popup_slider_window_g6

0x1281,	// (0x00017c68) popup_slider_window_t2_ParamLimits

0x1281,	// (0x00017c68) popup_slider_window_t2

0x0001,

0xfce8,	// (0x000266cf) popup_slider_window_t_ParamLimits

0xfce8,	// (0x000266cf) popup_slider_window_t

0xabc7,	// (0x000215ae) slider_pane_ParamLimits

0xabc7,	// (0x000215ae) slider_pane

0x2f19,	// (0x00019900) slider_pane_g1_ParamLimits

0x2f19,	// (0x00019900) slider_pane_g1

0x2f2d,	// (0x00019914) slider_pane_g2_ParamLimits

0x2f2d,	// (0x00019914) slider_pane_g2

0x2f43,	// (0x0001992a) slider_pane_g3_ParamLimits

0x2f43,	// (0x0001992a) slider_pane_g3

0x0003,

0xfdff,	// (0x000267e6) slider_pane_g_ParamLimits

0xfdff,	// (0x000267e6) slider_pane_g

0x9846,	// (0x0002022d) popup_tb_float_extension_window_ParamLimits

0x9846,	// (0x0002022d) popup_tb_float_extension_window

0x2f6f,	// (0x00019956) aid_size_cell_tb_float_ext

0xbb7d,	// (0x00022564) bg_popup_sub_window_cp28

0x2f7b,	// (0x00019962) grid_tb_float_ext_pane

0x2f85,	// (0x0001996c) cell_tb_float_ext_pane_ParamLimits

0x2f85,	// (0x0001996c) cell_tb_float_ext_pane

0x2f9f,	// (0x00019986) cell_tb_float_ext_pane_g1

0x2fa8,	// (0x0001998f) grid_highlight_pane_cp12

0xa5c9,	// (0x00020fb0) cell_last_hwr_side_pane_ParamLimits

0xa5c9,	// (0x00020fb0) cell_last_hwr_side_pane

0xefc9,	// (0x000259b0) cell_last_hwr_side_pane_g1

0x2fb1,	// (0x00019998) cell_last_hwr_side_pane_g2

0x0001,

0xfe08,	// (0x000267ef) cell_last_hwr_side_pane_g

0xb483,	// (0x00021e6a) vkb2_area_bottom_space_btn_pane_ParamLimits

0xb483,	// (0x00021e6a) vkb2_area_bottom_space_btn_pane

0xf232,	// (0x00025c19) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x2dea,	// (0x000197d1) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x73e3,	// (0x0001ddca) cell_vkb2_top_candi_pane_t1_ParamLimits

0x741d,	// (0x0001de04) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x741d,	// (0x0001de04) vkb2_area_bottom_space_btn_pane_g1

0x7457,	// (0x0001de3e) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7457,	// (0x0001de3e) vkb2_area_bottom_space_btn_pane_g2

0x748d,	// (0x0001de74) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x748d,	// (0x0001de74) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe0d,	// (0x000267f4) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe0d,	// (0x000267f4) vkb2_area_bottom_space_btn_pane_g

0x66ae,	// (0x0001d095) cel_fep_hwr_func_pane_ParamLimits

0x66ae,	// (0x0001d095) cel_fep_hwr_func_pane

0xa59e,	// (0x00020f85) cell_hwr_side_button_pane_ParamLimits

0xa59e,	// (0x00020f85) cell_hwr_side_button_pane

0x14d9,	// (0x00017ec0) aid_area_touch_clock_ParamLimits

0xbd20,	// (0x00022707) bg_uniindi_top_pane_ParamLimits

0x14eb,	// (0x00017ed2) uniindi_top_pane_g1_ParamLimits

0x1501,	// (0x00017ee8) uniindi_top_pane_g2_ParamLimits

0x150d,	// (0x00017ef4) uniindi_top_pane_g3_ParamLimits

0x151e,	// (0x00017f05) uniindi_top_pane_g4_ParamLimits

0xfd20,	// (0x00026707) uniindi_top_pane_g_ParamLimits

0x152b,	// (0x00017f12) uniindi_top_pane_t1_ParamLimits

0xbd20,	// (0x00022707) bg_vkb2_func_pane_cp01_ParamLimits

0xbd20,	// (0x00022707) bg_vkb2_func_pane_cp01

0x2fba,	// (0x000199a1) cel_fep_hwr_func_pane_g1_ParamLimits

0x2fba,	// (0x000199a1) cel_fep_hwr_func_pane_g1

0xbd20,	// (0x00022707) bg_vkb2_func_pane_cp02_ParamLimits

0xbd20,	// (0x00022707) bg_vkb2_func_pane_cp02

0x2fba,	// (0x000199a1) cell_hwr_side_button_pane_g1_ParamLimits

0x2fba,	// (0x000199a1) cell_hwr_side_button_pane_g1

0xd089,	// (0x00023a70) status_pane_g4_ParamLimits

0xd089,	// (0x00023a70) status_pane_g4

0xd0a1,	// (0x00023a88) status_pane_t1

0xee59,	// (0x00025840) form2_midp_gauge_slider_cont_pane

0xee61,	// (0x00025848) form2_midp_gauge_slider_pane_t1_ParamLimits

0xa4d9,	// (0x00020ec0) form2_midp_gauge_slider_pane_t2_ParamLimits

0xa4ed,	// (0x00020ed4) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf3,	// (0x000264da) form2_midp_gauge_slider_pane_t_ParamLimits

0xee73,	// (0x0002585a) form2_midp_slider_pane_ParamLimits

0x6a31,	// (0x0001d418) aid_size_cell_func_vkb2_ParamLimits

0x6a31,	// (0x0001d418) aid_size_cell_func_vkb2

0x2f5b,	// (0x00019942) slider_pane_g4_ParamLimits

0x2f5b,	// (0x00019942) slider_pane_g4

0xb914,	// (0x000222fb) form2_midp_gauge_slider_pane_t2_cp01

0xb924,	// (0x0002230b) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xb924,	// (0x0002230b) form2_midp_gauge_slider_pane_t3_cp01

0x7502,	// (0x0001dee9) form2_midp_slider_pane_cp01

0xbb7d,	// (0x00022564) navi_smil_pane

0x2fea,	// (0x000199d1) navi_smil_pane_g1

0x2ff2,	// (0x000199d9) navi_smil_pane_t1

0x2fc8,	// (0x000199af) form2_midp_slider_pane_g1

0x2fd1,	// (0x000199b8) form2_midp_slider_pane_g2

0x2fd9,	// (0x000199c0) form2_midp_slider_pane_g3

0x2fc8,	// (0x000199af) form2_midp_slider_pane_g4

0xb943,	// (0x0002232a) form2_midp_slider_pane_g5

0x0004,

0xfe16,	// (0x000267fd) form2_midp_slider_pane_g

0x74c7,	// (0x0001deae) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x74c7,	// (0x0001deae) vkb2_area_bottom_space_btn_pane_g4

0x9a29,	// (0x00020410) lc0_navi_pane_ParamLimits

0x9a29,	// (0x00020410) lc0_navi_pane

0x9a93,	// (0x0002047a) lc0_stat_indi_pane_ParamLimits

0x9a93,	// (0x0002047a) lc0_stat_indi_pane

0x9aa8,	// (0x0002048f) ls0_title_pane_ParamLimits

0x9aa8,	// (0x0002048f) ls0_title_pane

0xc1e2,	// (0x00022bc9) bg_popup_sub_pane_cp14_ParamLimits

0x14c0,	// (0x00017ea7) list_uniindi_pane_ParamLimits

0x14cc,	// (0x00017eb3) uniindi_top_pane_ParamLimits

0x1567,	// (0x00017f4e) list_single_uniindi_pane_g1_ParamLimits

0x157a,	// (0x00017f61) list_single_uniindi_pane_t1_ParamLimits

0xb94e,	// (0x00022335) lc0_stat_clock_pane_ParamLimits

0xb94e,	// (0x00022335) lc0_stat_clock_pane

0xb95b,	// (0x00022342) lc0_stat_indi_pane_g1_ParamLimits

0xb95b,	// (0x00022342) lc0_stat_indi_pane_g1

0xb968,	// (0x0002234f) lc0_stat_indi_pane_g2_ParamLimits

0xb968,	// (0x0002234f) lc0_stat_indi_pane_g2

0x0001,

0xfe21,	// (0x00026808) lc0_stat_indi_pane_g_ParamLimits

0xfe21,	// (0x00026808) lc0_stat_indi_pane_g

0xb975,	// (0x0002235c) lc0_uni_indicator_pane_ParamLimits

0xb975,	// (0x0002235c) lc0_uni_indicator_pane

0x3000,	// (0x000199e7) ls0_title_pane_g1_ParamLimits

0x3000,	// (0x000199e7) ls0_title_pane_g1

0xb982,	// (0x00022369) ls0_title_pane_t1_ParamLimits

0xb982,	// (0x00022369) ls0_title_pane_t1

0xb9b0,	// (0x00022397) lc0_uni_indicator_pane_g1_ParamLimits

0xb9b0,	// (0x00022397) lc0_uni_indicator_pane_g1

0x3014,	// (0x000199fb) lc0_stat_clock_pane_t1

0xbb7d,	// (0x00022564) main_ai5_pane

0x3022,	// (0x00019a09) ai5_sk_pane_ParamLimits

0x3022,	// (0x00019a09) ai5_sk_pane

0xb9df,	// (0x000223c6) cell_ai5_widget_pane_ParamLimits

0xb9df,	// (0x000223c6) cell_ai5_widget_pane

0x302f,	// (0x00019a16) aid_size_cell_widget_grid

0x3043,	// (0x00019a2a) bg_ai5_widget_pane_ParamLimits

0x3043,	// (0x00019a2a) bg_ai5_widget_pane

0x308d,	// (0x00019a74) cell_ai5_widget_pane_g2

0x309d,	// (0x00019a84) cell_ai5_widget_pane_g3

0x30bc,	// (0x00019aa3) cell_ai5_widget_pane_g4

0x30c8,	// (0x00019aaf) cell_ai5_widget_pane_g5

0x30d4,	// (0x00019abb) cell_ai5_widget_pane_g6

0x30e0,	// (0x00019ac7) cell_ai5_widget_pane_g7

0x3128,	// (0x00019b0f) cell_ai5_widget_pane_t1_ParamLimits

0x3128,	// (0x00019b0f) cell_ai5_widget_pane_t1

0x3145,	// (0x00019b2c) cell_ai5_widget_pane_t2_ParamLimits

0x3145,	// (0x00019b2c) cell_ai5_widget_pane_t2

0x315d,	// (0x00019b44) cell_ai5_widget_pane_t3_ParamLimits

0x315d,	// (0x00019b44) cell_ai5_widget_pane_t3

0x3175,	// (0x00019b5c) cell_ai5_widget_pane_t4_ParamLimits

0x3175,	// (0x00019b5c) cell_ai5_widget_pane_t4

0x318f,	// (0x00019b76) cell_ai5_widget_pane_t5_ParamLimits

0x318f,	// (0x00019b76) cell_ai5_widget_pane_t5

0x31ae,	// (0x00019b95) cell_ai5_widget_pane_t6_ParamLimits

0x31ae,	// (0x00019b95) cell_ai5_widget_pane_t6

0x31c0,	// (0x00019ba7) cell_ai5_widget_pane_t7_ParamLimits

0x31c0,	// (0x00019ba7) cell_ai5_widget_pane_t7

0x31d9,	// (0x00019bc0) cell_ai5_widget_pane_t8_ParamLimits

0x31d9,	// (0x00019bc0) cell_ai5_widget_pane_t8

0x0009,

0xfe3b,	// (0x00026822) cell_ai5_widget_pane_t_ParamLimits

0xfe3b,	// (0x00026822) cell_ai5_widget_pane_t

0x3225,	// (0x00019c0c) grid_ai5_widget_pane

0xc1e2,	// (0x00022bc9) highlight_cell_ai5_widget_pane_ParamLimits

0xc1e2,	// (0x00022bc9) highlight_cell_ai5_widget_pane

0xba4a,	// (0x00022431) ai5_sk_left_pane

0xba54,	// (0x0002243b) ai5_sk_middle_pane

0xba5e,	// (0x00022445) ai5_sk_right_pane

0x3239,	// (0x00019c20) bg_ai5_widget_pane_g1_ParamLimits

0x3239,	// (0x00019c20) bg_ai5_widget_pane_g1

0x3245,	// (0x00019c2c) bg_ai5_widget_pane_g2_ParamLimits

0x3245,	// (0x00019c2c) bg_ai5_widget_pane_g2

0x3251,	// (0x00019c38) bg_ai5_widget_pane_g3_ParamLimits

0x3251,	// (0x00019c38) bg_ai5_widget_pane_g3

0x325d,	// (0x00019c44) bg_ai5_widget_pane_g4_ParamLimits

0x325d,	// (0x00019c44) bg_ai5_widget_pane_g4

0x3269,	// (0x00019c50) bg_ai5_widget_pane_g5_ParamLimits

0x3269,	// (0x00019c50) bg_ai5_widget_pane_g5

0x3275,	// (0x00019c5c) bg_ai5_widget_pane_g6_ParamLimits

0x3275,	// (0x00019c5c) bg_ai5_widget_pane_g6

0x3281,	// (0x00019c68) bg_ai5_widget_pane_g7_ParamLimits

0x3281,	// (0x00019c68) bg_ai5_widget_pane_g7

0x328d,	// (0x00019c74) bg_ai5_widget_pane_g8_ParamLimits

0x328d,	// (0x00019c74) bg_ai5_widget_pane_g8

0x3299,	// (0x00019c80) bg_ai5_widget_pane_g9_ParamLimits

0x3299,	// (0x00019c80) bg_ai5_widget_pane_g9

0x0008,

0xfe50,	// (0x00026837) bg_ai5_widget_pane_g_ParamLimits

0xfe50,	// (0x00026837) bg_ai5_widget_pane_g

0x32cc,	// (0x00019cb3) cell_shortcut_ai5_widget_pane_ParamLimits

0x32cc,	// (0x00019cb3) cell_shortcut_ai5_widget_pane

0xbc29,	// (0x00022610) bg_cell_shortcut_ai5_widget_pane

0x32dd,	// (0x00019cc4) cell_grid_ai5_widget_pane_g1

0x32e6,	// (0x00019ccd) highlight_cell_shortcut_ai5_widget_pane

0xd181,	// (0x00023b68) ai5_sk_left_pane_g1

0x32ee,	// (0x00019cd5) ai5_sk_left_pane_g2

0x32f6,	// (0x00019cdd) ai5_sk_left_pane_g3

0x32fe,	// (0x00019ce5) ai5_sk_left_pane_g4

0x0003,

0xfe63,	// (0x0002684a) ai5_sk_left_pane_g

0x3306,	// (0x00019ced) ai5_sk_left_pane_t1

0xd179,	// (0x00023b60) ai5_sk_right_pane_g1

0x3314,	// (0x00019cfb) ai5_sk_right_pane_g2

0x331c,	// (0x00019d03) ai5_sk_right_pane_g3

0x3324,	// (0x00019d0b) ai5_sk_right_pane_g4

0x0003,

0xfe6c,	// (0x00026853) ai5_sk_right_pane_g

0x332c,	// (0x00019d13) ai5_sk_right_pane_t1

0xd179,	// (0x00023b60) ai5_sk_middle_pane_g1

0xd181,	// (0x00023b68) ai5_sk_middle_pane_g2

0xd199,	// (0x00023b80) ai5_sk_middle_pane_g3

0x331c,	// (0x00019d03) ai5_sk_middle_pane_g4

0x32f6,	// (0x00019cdd) ai5_sk_middle_pane_g5

0x333a,	// (0x00019d21) ai5_sk_middle_pane_g6

0xba68,	// (0x0002244f) ai5_sk_middle_pane_g7

0x0006,

0xfe75,	// (0x0002685c) ai5_sk_middle_pane_g

0x9915,	// (0x000202fc) aid_touch_area_size_lc0_ParamLimits

0x9915,	// (0x000202fc) aid_touch_area_size_lc0

0x6839,	// (0x0001d220) cell_hwr_candidate_pane_t1_ParamLimits

0xcfab,	// (0x00023992) aid_touch_navi_pane

0x9b9b,	// (0x00020582) status_dt_navi_pane_ParamLimits

0x9b9b,	// (0x00020582) status_dt_navi_pane

0x9bb3,	// (0x0002059a) status_dt_sta_pane_ParamLimits

0x9bb3,	// (0x0002059a) status_dt_sta_pane

0xba70,	// (0x00022457) dt_sta_controll_pane

0xba7d,	// (0x00022464) dt_sta_indi_pane

0xba8a,	// (0x00022471) dt_sta_title_pane

0xbd20,	// (0x00022707) bg_dt_sta_indi_pane_ParamLimits

0xbd20,	// (0x00022707) bg_dt_sta_indi_pane

0x3342,	// (0x00019d29) dt_sta_battery_pane

0x334a,	// (0x00019d31) dt_sta_indi_pane_g1

0x3353,	// (0x00019d3a) dt_sta_indi_pane_g2

0x335c,	// (0x00019d43) dt_sta_indi_pane_g3

0x0002,

0xfe84,	// (0x0002686b) dt_sta_indi_pane_g

0x3365,	// (0x00019d4c) dt_sta_signal_pane

0xc1e2,	// (0x00022bc9) bg_dt_sta_title_pane_ParamLimits

0xc1e2,	// (0x00022bc9) bg_dt_sta_title_pane

0xde42,	// (0x00024829) dt_sta_title_pane_g1

0x336e,	// (0x00019d55) dt_sta_title_pane_t1_ParamLimits

0x336e,	// (0x00019d55) dt_sta_title_pane_t1

0xbb7d,	// (0x00022564) bg_dt_sta_control_pane

0x3383,	// (0x00019d6a) dt_sta_controll_pane_g1

0x338c,	// (0x00019d73) bg_dt_sta_title_pane_g1

0x3395,	// (0x00019d7c) bg_dt_sta_title_pane_g2

0x339e,	// (0x00019d85) bg_dt_sta_title_pane_g3

0x0002,

0xfe8b,	// (0x00026872) bg_dt_sta_title_pane_g

0xefc9,	// (0x000259b0) bg_dt_sta_indi_pane_g1

0x33a7,	// (0x00019d8e) dt_sta_signal_pane_g1

0x33af,	// (0x00019d96) dt_sta_signal_pane_g2

0x0001,

0xfe92,	// (0x00026879) dt_sta_signal_pane_g

0x33b7,	// (0x00019d9e) dt_sta_battery_pane_g1

0x33c0,	// (0x00019da7) dt_sta_battery_pane_t1

0xefc9,	// (0x000259b0) bg_dt_sta_control_pane_g1

0xc786,	// (0x0002316d) fep_china_uni_eep_pane

0xc78e,	// (0x00023175) fep_china_uni_entry_pane_ParamLimits

0xc79e,	// (0x00023185) popup_fep_china_uni_window_g1_ParamLimits

0xc7ae,	// (0x00023195) popup_fep_china_uni_window_g2_ParamLimits

0xc7ae,	// (0x00023195) popup_fep_china_uni_window_g2

0x0001,

0xf735,	// (0x0002611c) popup_fep_china_uni_window_g_ParamLimits

0xf735,	// (0x0002611c) popup_fep_china_uni_window_g

0x33cf,	// (0x00019db6) fep_china_uni_eep_pane_g1

0x33d7,	// (0x00019dbe) fep_china_uni_eep_pane_t1

0x2fe1,	// (0x000199c8) aid_touch_area_size_smil_player

0xd05c,	// (0x00023a43) lc0_clock_pane

0xd095,	// (0x00023a7c) status_pane_g5_ParamLimits

0xd095,	// (0x00023a7c) status_pane_g5

0x93da,	// (0x0001fdc1) popup_keymap_window

0xd075,	// (0x00023a5c) status_icon_pane

0x309d,	// (0x00019a84) cell_ai5_widget_pane_g3_ParamLimits

0x30bc,	// (0x00019aa3) cell_ai5_widget_pane_g4_ParamLimits

0x30c8,	// (0x00019aaf) cell_ai5_widget_pane_g5_ParamLimits

0x30ec,	// (0x00019ad3) cell_ai5_widget_pane_g8_ParamLimits

0x30ec,	// (0x00019ad3) cell_ai5_widget_pane_g8

0x3100,	// (0x00019ae7) cell_ai5_widget_pane_g9_ParamLimits

0x3100,	// (0x00019ae7) cell_ai5_widget_pane_g9

0x3114,	// (0x00019afb) cell_ai5_widget_pane_g10_ParamLimits

0x3114,	// (0x00019afb) cell_ai5_widget_pane_g10

0x33e6,	// (0x00019dcd) status_icon_pane_g1

0xbb7d,	// (0x00022564) bg_popup_sub_pane_cp13

0x33ee,	// (0x00019dd5) popup_keymap_window_t1

0x9110,	// (0x0001faf7) control_pane_g6_ParamLimits

0x9110,	// (0x0001faf7) control_pane_g6

0x911d,	// (0x0001fb04) control_pane_g7_ParamLimits

0x911d,	// (0x0001fb04) control_pane_g7

0x912a,	// (0x0001fb11) control_pane_g8_ParamLimits

0x912a,	// (0x0001fb11) control_pane_g8

0xba70,	// (0x00022457) dt_sta_controll_pane_ParamLimits

0xba7d,	// (0x00022464) dt_sta_indi_pane_ParamLimits

0xba8a,	// (0x00022471) dt_sta_title_pane_ParamLimits

0xc124,	// (0x00022b0b) aid_size_touch_scroll_bar_cale

0x5964,	// (0x0001c34b) popup_discreet_window_ParamLimits

0x5964,	// (0x0001c34b) popup_discreet_window

0x8995,	// (0x0001f37c) popup_sk_window

0xd71e,	// (0x00024105) bg_popup_sub_pane_cp28_ParamLimits

0xd71e,	// (0x00024105) bg_popup_sub_pane_cp28

0x33fc,	// (0x00019de3) popup_discreet_window_g1_ParamLimits

0x33fc,	// (0x00019de3) popup_discreet_window_g1

0x341c,	// (0x00019e03) popup_discreet_window_t1_ParamLimits

0x341c,	// (0x00019e03) popup_discreet_window_t1

0x343a,	// (0x00019e21) popup_discreet_window_t2_ParamLimits

0x343a,	// (0x00019e21) popup_discreet_window_t2

0x0002,

0xfe97,	// (0x0002687e) popup_discreet_window_t_ParamLimits

0xfe97,	// (0x0002687e) popup_discreet_window_t

0x76b5,	// (0x0001e09c) popup_sk_window_g1

0x76bf,	// (0x0001e0a6) popup_sk_window_g2

0x0001,

0xfe9e,	// (0x00026885) popup_sk_window_g

0x76c9,	// (0x0001e0b0) popup_sk_window_t1

0x76d7,	// (0x0001e0be) popup_sk_window_t1_copy1

0x308d,	// (0x00019a74) cell_ai5_widget_pane_g2_ParamLimits

0x31eb,	// (0x00019bd2) cell_ai5_widget_pane_t9_ParamLimits

0x31eb,	// (0x00019bd2) cell_ai5_widget_pane_t9

0xbb7d,	// (0x00022564) main_fep_fshwr2_pane

0xba9c,	// (0x00022483) aid_fshwr2_btn_pane

0xbaa4,	// (0x0002248b) aid_fshwr2_syb_pane

0xbaac,	// (0x00022493) aid_fshwr2_txt_pane

0xbab4,	// (0x0002249b) fshwr2_func_candi_pane

0xbabe,	// (0x000224a5) fshwr2_hwr_syb_pane

0xbacc,	// (0x000224b3) fshwr2_icf_pane

0xbb7d,	// (0x00022564) fshwr2_icf_bg_pane

0xbad6,	// (0x000224bd) fshwr2_icf_pane_t1_ParamLimits

0xbad6,	// (0x000224bd) fshwr2_icf_pane_t1

0xefc9,	// (0x000259b0) fshwr2_func_candi_pane_g1

0x34a0,	// (0x00019e87) fshwr2_func_candi_row_pane_ParamLimits

0x34a0,	// (0x00019e87) fshwr2_func_candi_row_pane

0xbaf0,	// (0x000224d7) cell_fshwr2_syb_pane_ParamLimits

0xbaf0,	// (0x000224d7) cell_fshwr2_syb_pane

0xf232,	// (0x00025c19) fshwr2_hwr_syb_pane_g1_ParamLimits

0xf232,	// (0x00025c19) fshwr2_hwr_syb_pane_g1

0xbb7d,	// (0x00022564) bg_popup_call_pane_cp01

0x34b1,	// (0x00019e98) fshwr2_func_candi_cell_pane_ParamLimits

0x34b1,	// (0x00019e98) fshwr2_func_candi_cell_pane

0x34e2,	// (0x00019ec9) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x34e2,	// (0x00019ec9) fshwr2_func_candi_cell_bg_pane

0x34fc,	// (0x00019ee3) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x34fc,	// (0x00019ee3) fshwr2_func_candi_cell_pane_g1

0x351c,	// (0x00019f03) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x351c,	// (0x00019f03) fshwr2_func_candi_cell_pane_t1

0xbb7d,	// (0x00022564) bg_button_pane_cp08

0xcc17,	// (0x000235fe) cell_fshwr2_syb_bg_pane

0xbb0a,	// (0x000224f1) cell_fshwr2_syb_bg_pane_g1

0x352f,	// (0x00019f16) cell_fshwr2_syb_bg_pane_t1

0xc1e2,	// (0x00022bc9) main_tmo_pane

0xa066,	// (0x00020a4d) uni_indicator_pane_g1_ParamLimits

0xa07b,	// (0x00020a62) uni_indicator_pane_g2_ParamLimits

0xe158,	// (0x00024b3f) uni_indicator_pane_g3_ParamLimits

0xe16e,	// (0x00024b55) uni_indicator_pane_g4_ParamLimits

0xe16e,	// (0x00024b55) uni_indicator_pane_g4

0xe182,	// (0x00024b69) uni_indicator_pane_g5_ParamLimits

0xe182,	// (0x00024b69) uni_indicator_pane_g5

0xe196,	// (0x00024b7d) uni_indicator_pane_g6_ParamLimits

0xe196,	// (0x00024b7d) uni_indicator_pane_g6

0xf926,	// (0x0002630d) uni_indicator_pane_g_ParamLimits

0xaa5f,	// (0x00021446) popup_tmo_note_window_ParamLimits

0xaa5f,	// (0x00021446) popup_tmo_note_window

0xbb7d,	// (0x00022564) fshwr2_bg_pane

0x350d,	// (0x00019ef4) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x350d,	// (0x00019ef4) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea3,	// (0x0002688a) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea3,	// (0x0002688a) fshwr2_func_candi_cell_pane_g

0xefc9,	// (0x000259b0) bg_popup_window_pane_cp01

0x353e,	// (0x00019f25) bg_popup_window_pane_g1_cp01

0x3547,	// (0x00019f2e) bg_popup_window_pane_cp22_ParamLimits

0x3547,	// (0x00019f2e) bg_popup_window_pane_cp22

0x3555,	// (0x00019f3c) listscroll_tmo_link_pane_ParamLimits

0x3555,	// (0x00019f3c) listscroll_tmo_link_pane

0x3595,	// (0x00019f7c) popup_tmo_note_window_g1_ParamLimits

0x3595,	// (0x00019f7c) popup_tmo_note_window_g1

0x35a2,	// (0x00019f89) tmo_note_info_pane_ParamLimits

0x35a2,	// (0x00019f89) tmo_note_info_pane

0xbb12,	// (0x000224f9) list_tmo_note_info_pane_g1_ParamLimits

0xbb12,	// (0x000224f9) list_tmo_note_info_pane_g1

0x35bc,	// (0x00019fa3) list_tmo_note_info_pane_g2_ParamLimits

0x35bc,	// (0x00019fa3) list_tmo_note_info_pane_g2

0x0001,

0xfea8,	// (0x0002688f) list_tmo_note_info_pane_g_ParamLimits

0xfea8,	// (0x0002688f) list_tmo_note_info_pane_g

0x35d8,	// (0x00019fbf) list_tmo_note_info_text_pane_ParamLimits

0x35d8,	// (0x00019fbf) list_tmo_note_info_text_pane

0x361a,	// (0x0001a001) list_tmo_link_pane

0x3627,	// (0x0001a00e) scroll_pane_cp20

0x3634,	// (0x0001a01b) list_single_tmo_link_pane_ParamLimits

0x3634,	// (0x0001a01b) list_single_tmo_link_pane

0x3644,	// (0x0001a02b) list_single_tmo_link_pane_t1

0x3652,	// (0x0001a039) list_tmo_note_info_text_pane_t1_ParamLimits

0x3652,	// (0x0001a039) list_tmo_note_info_text_pane_t1

0x8dae,	// (0x0001f795) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8dae,	// (0x0001f795) aid_size_touch_scroll_bar_cp01

0x85a6,	// (0x0001ef8d) aid_size_touch_slider_marker

0x8985,	// (0x0001f36c) popup_settings_window_ParamLimits

0x8985,	// (0x0001f36c) popup_settings_window

0x4efe,	// (0x0001b8e5) popup_candi_list_indi_window

0xcfab,	// (0x00023992) aid_touch_navi_pane_ParamLimits

0x698a,	// (0x0001d371) rs_clock_indi_pane

0x6993,	// (0x0001d37a) sctrl_sk_bottom_pane_ParamLimits

0x69a4,	// (0x0001d38b) sctrl_sk_top_pane_ParamLimits

0x6a8b,	// (0x0001d472) popup_fep_tooltip_window

0x302f,	// (0x00019a16) aid_size_cell_widget_grid_ParamLimits

0x3081,	// (0x00019a68) cell_ai5_widget_pane_g1_ParamLimits

0x3081,	// (0x00019a68) cell_ai5_widget_pane_g1

0x30d4,	// (0x00019abb) cell_ai5_widget_pane_g6_ParamLimits

0x30e0,	// (0x00019ac7) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe26,	// (0x0002680d) cell_ai5_widget_pane_g_ParamLimits

0xfe26,	// (0x0002680d) cell_ai5_widget_pane_g

0x320f,	// (0x00019bf6) cell_ai5_widget_pane_t10_ParamLimits

0x320f,	// (0x00019bf6) cell_ai5_widget_pane_t10

0x3225,	// (0x00019c0c) grid_ai5_widget_pane_ParamLimits

0x32a5,	// (0x00019c8c) cell_contacts_ai5_widget_pane_ParamLimits

0x32a5,	// (0x00019c8c) cell_contacts_ai5_widget_pane

0x344f,	// (0x00019e36) popup_discreet_window_t3_ParamLimits

0x344f,	// (0x00019e36) popup_discreet_window_t3

0x348c,	// (0x00019e73) popup_fshwr2_char_preview_window_ParamLimits

0x348c,	// (0x00019e73) popup_fshwr2_char_preview_window

0xbb29,	// (0x00022510) tmo_note_info_pane_t1

0xbb3e,	// (0x00022525) tmo_note_info_pane_t2

0xbb57,	// (0x0002253e) tmo_note_info_pane_t3

0x35f6,	// (0x00019fdd) tmo_note_info_pane_t4

0x3608,	// (0x00019fef) tmo_note_info_pane_t5

0x0004,

0xfead,	// (0x00026894) tmo_note_info_pane_t

0x361a,	// (0x0001a001) list_tmo_link_pane_ParamLimits

0x3627,	// (0x0001a00e) scroll_pane_cp20_ParamLimits

0xbb7d,	// (0x00022564) bg_popup_fep_char_preview_window_cp01

0x366b,	// (0x0001a052) popup_fshwr2_char_preview_window_t1

0x3679,	// (0x0001a060) popup_candi_list_indi_window_g1

0x3682,	// (0x0001a069) bg_cell_contacts_ai5_widget_pane

0x368e,	// (0x0001a075) cell_contacts_ai5_widget_pane_g1

0x36a1,	// (0x0001a088) cell_contacts_ai5_widget_pane_g2

0x36ad,	// (0x0001a094) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb8,	// (0x0002689f) cell_contacts_ai5_widget_pane_g

0x36bf,	// (0x0001a0a6) cell_contacts_ai5_widget_pane_t1

0xc1e2,	// (0x00022bc9) highlight_cell_shortcut_ai5_widget_pane_cp01

0x374d,	// (0x0001a134) settings_container_pane

0xcc17,	// (0x000235fe) listscroll_set_pane_copy1

0xe9a2,	// (0x00025389) scroll_pane_cp121_copy1

0x3759,	// (0x0001a140) set_content_pane_copy1

0x3761,	// (0x0001a148) aid_height_set_list_copy1_ParamLimits

0x3761,	// (0x0001a148) aid_height_set_list_copy1

0xdaeb,	// (0x000244d2) aid_size_parent_copy1_ParamLimits

0xdaeb,	// (0x000244d2) aid_size_parent_copy1

0x376d,	// (0x0001a154) button_value_adjust_pane_cp6_copy1_ParamLimits

0x376d,	// (0x0001a154) button_value_adjust_pane_cp6_copy1

0xc339,	// (0x00022d20) list_highlight_pane_cp2_copy1_ParamLimits

0xc339,	// (0x00022d20) list_highlight_pane_cp2_copy1

0x3781,	// (0x0001a168) list_set_pane_copy1_ParamLimits

0x3781,	// (0x0001a168) list_set_pane_copy1

0x36e8,	// (0x0001a0cf) main_pane_set_t1_copy1_ParamLimits

0x36e8,	// (0x0001a0cf) main_pane_set_t1_copy1

0x3722,	// (0x0001a109) main_pane_set_t2_copy1_ParamLimits

0x3722,	// (0x0001a109) main_pane_set_t2_copy1

0x382e,	// (0x0001a215) main_pane_set_t3_copy1

0x383c,	// (0x0001a223) main_pane_set_t4_copy1

0x3741,	// (0x0001a128) set_content_pane_g1_copy1_ParamLimits

0x3741,	// (0x0001a128) set_content_pane_g1_copy1

0x384a,	// (0x0001a231) setting_code_pane_copy1

0x3854,	// (0x0001a23b) setting_slider_graphic_pane_copy1

0x3854,	// (0x0001a23b) setting_slider_pane_copy1

0x3854,	// (0x0001a23b) setting_text_pane_copy1

0x385e,	// (0x0001a245) setting_volume_pane_copy1

0x3867,	// (0x0001a24e) settings_code_pane_cp2_copy1

0x386f,	// (0x0001a256) settings_code_pane_cp_copy1_ParamLimits

0x386f,	// (0x0001a256) settings_code_pane_cp_copy1

0x3883,	// (0x0001a26a) volume_set_pane_copy1

0x388b,	// (0x0001a272) volume_set_pane_g10_copy1

0x3893,	// (0x0001a27a) volume_set_pane_g1_copy1

0x389b,	// (0x0001a282) volume_set_pane_g2_copy1

0x38a3,	// (0x0001a28a) volume_set_pane_g3_copy1

0x38ab,	// (0x0001a292) volume_set_pane_g4_copy1

0x38b3,	// (0x0001a29a) volume_set_pane_g5_copy1

0x38bb,	// (0x0001a2a2) volume_set_pane_g6_copy1

0x38c3,	// (0x0001a2aa) volume_set_pane_g7_copy1

0x38cb,	// (0x0001a2b2) volume_set_pane_g8_copy1

0x38d3,	// (0x0001a2ba) volume_set_pane_g9_copy1

0xbbed,	// (0x000225d4) bg_set_opt_pane_cp_copy1_ParamLimits

0xbbed,	// (0x000225d4) bg_set_opt_pane_cp_copy1

0x38db,	// (0x0001a2c2) setting_slider_pane_t1_copy1_ParamLimits

0x38db,	// (0x0001a2c2) setting_slider_pane_t1_copy1

0x38f9,	// (0x0001a2e0) setting_slider_pane_t2_copy1_ParamLimits

0x38f9,	// (0x0001a2e0) setting_slider_pane_t2_copy1

0x3913,	// (0x0001a2fa) setting_slider_pane_t3_copy1_ParamLimits

0x3913,	// (0x0001a2fa) setting_slider_pane_t3_copy1

0x392b,	// (0x0001a312) slider_set_pane_copy1_ParamLimits

0x392b,	// (0x0001a312) slider_set_pane_copy1

0xc249,	// (0x00022c30) set_opt_bg_pane_g1_copy2

0xc251,	// (0x00022c38) set_opt_bg_pane_g2_copy2

0x3941,	// (0x0001a328) set_opt_bg_pane_g3_copy2

0xc261,	// (0x00022c48) set_opt_bg_pane_g4_copy2

0xc269,	// (0x00022c50) set_opt_bg_pane_g5_copy2

0xc271,	// (0x00022c58) set_opt_bg_pane_g6_copy2

0x394b,	// (0x0001a332) set_opt_bg_pane_g7_copy2

0x3953,	// (0x0001a33a) set_opt_bg_pane_g8_copy2

0x395d,	// (0x0001a344) set_opt_bg_pane_g9_copy2

0x77b4,	// (0x0001e19b) aid_size_touch_slider_mark_copy1_ParamLimits

0x77b4,	// (0x0001e19b) aid_size_touch_slider_mark_copy1

0x3967,	// (0x0001a34e) slider_set_pane_g1_copy1

0x77c8,	// (0x0001e1af) slider_set_pane_g2_copy1

0x6444,	// (0x0001ce2b) slider_set_pane_g3_copy1_ParamLimits

0x6444,	// (0x0001ce2b) slider_set_pane_g3_copy1

0x6458,	// (0x0001ce3f) slider_set_pane_g4_copy1_ParamLimits

0x6458,	// (0x0001ce3f) slider_set_pane_g4_copy1

0x6470,	// (0x0001ce57) slider_set_pane_g5_copy1_ParamLimits

0x6470,	// (0x0001ce57) slider_set_pane_g5_copy1

0x6444,	// (0x0001ce2b) slider_set_pane_g6_copy1_ParamLimits

0x6444,	// (0x0001ce2b) slider_set_pane_g6_copy1

0x77d0,	// (0x0001e1b7) slider_set_pane_g7_copy1_ParamLimits

0x77d0,	// (0x0001e1b7) slider_set_pane_g7_copy1

0xbb91,	// (0x00022578) bg_set_opt_pane_cp2_copy1

0x3970,	// (0x0001a357) setting_slider_graphic_pane_g1_copy1

0x3979,	// (0x0001a360) setting_slider_graphic_pane_t1_copy1

0x3989,	// (0x0001a370) setting_slider_graphic_pane_t2_copy1

0x3999,	// (0x0001a380) slider_set_pane_cp_copy1

0x39a9,	// (0x0001a390) input_focus_pane_cp1_copy1

0x39b2,	// (0x0001a399) list_set_text_pane_copy1

0x39ba,	// (0x0001a3a1) setting_text_pane_g1_copy1

0x56d7,	// (0x0001c0be) set_text_pane_t1_copy1

0x39a9,	// (0x0001a390) input_focus_pane_cp2_copy1

0x39ba,	// (0x0001a3a1) setting_code_pane_g1_copy1

0x39e0,	// (0x0001a3c7) setting_code_pane_t1_copy1

0x36d4,	// (0x0001a0bb) list_set_graphic_pane_copy1

0xbb91,	// (0x00022578) bg_set_opt_pane_cp4_copy1

0xc919,	// (0x00023300) list_set_graphic_pane_g1_copy1_ParamLimits

0xc919,	// (0x00023300) list_set_graphic_pane_g1_copy1

0x39ee,	// (0x0001a3d5) list_set_graphic_pane_g2_copy1

0xc931,	// (0x00023318) list_set_graphic_pane_t1_copy1_ParamLimits

0xc931,	// (0x00023318) list_set_graphic_pane_t1_copy1

0xefc9,	// (0x000259b0) rs_clock_indi_pane_g1

0x39f6,	// (0x0001a3dd) rs_clock_indi_pane_t1

0x3a04,	// (0x0001a3eb) rs_indi_pane

0x3a0c,	// (0x0001a3f3) rs_indi_pane_g1

0x3a15,	// (0x0001a3fc) rs_indi_pane_g2

0x3a1e,	// (0x0001a405) rs_indi_pane_g3

0x0002,

0xfebf,	// (0x000268a6) rs_indi_pane_g

0xcc17,	// (0x000235fe) bg_popup_preview_window_pane_cp03

0x3a27,	// (0x0001a40e) popup_fep_tooltip_window_t1

0x06f3,	// (0x000170da) popup_note2_window_g2_ParamLimits

0x06f3,	// (0x000170da) popup_note2_window_g2

0x0001,

0xfc5f,	// (0x00026646) popup_note2_window_g_ParamLimits

0xfc5f,	// (0x00026646) popup_note2_window_g

0x0cd5,	// (0x000176bc) bg_popup_sub_pane_cp11_ParamLimits

0x0ce2,	// (0x000176c9) cell_ai3_links_pane_g1_ParamLimits

0x0cf9,	// (0x000176e0) cell_ai3_links_pane_t1

0x56d7,	// (0x0001c0be) set_text_pane_t1_copy1_ParamLimits

0xcb26,	// (0x0002350d) cell_graphic_popup_pane_cp2_ParamLimits

0xcb26,	// (0x0002350d) cell_graphic_popup_pane_cp2

0x3a35,	// (0x0001a41c) cell_graphic_popup_pane_g1_cp2

0xbf37,	// (0x0002291e) cell_graphic_popup_pane_g2_cp2

0x3a3d,	// (0x0001a424) cell_graphic_popup_pane_g3_cp2

0x3a45,	// (0x0001a42c) cell_graphic_popup_pane_t2_cp2

0xbf48,	// (0x0002292f) grid_highlight_pane_cp3_cp2

0xc4e3,	// (0x00022eca) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xc1e2,	// (0x00022bc9) main_tmo_pane_ParamLimits

0xaa53,	// (0x0002143a) popup_tmo_big_image_note_window

0x3071,	// (0x00019a58) cell_ai5_widget_list_pane

0x3079,	// (0x00019a60) cell_ai5_widget_lrg_icon_pane

0xbb29,	// (0x00022510) tmo_note_info_pane_t1_ParamLimits

0xbb3e,	// (0x00022525) tmo_note_info_pane_t2_ParamLimits

0xbb57,	// (0x0002253e) tmo_note_info_pane_t3_ParamLimits

0x35f6,	// (0x00019fdd) tmo_note_info_pane_t4_ParamLimits

0x3608,	// (0x00019fef) tmo_note_info_pane_t5_ParamLimits

0xfead,	// (0x00026894) tmo_note_info_pane_t_ParamLimits

0x374d,	// (0x0001a134) settings_container_pane_ParamLimits

0x39a1,	// (0x0001a388) indicator_popup_pane_cp5

0x39a1,	// (0x0001a388) indicator_popup_pane_cp6

0x36d4,	// (0x0001a0bb) list_set_graphic_pane_copy1_ParamLimits

0xbb7d,	// (0x00022564) bg_popup_window_pane_cp23

0x3a53,	// (0x0001a43a) popup_tmo_big_image_note_window_g1

0x3a5e,	// (0x0001a445) popup_tmo_big_image_note_window_t1

0x3a6e,	// (0x0001a455) popup_tmo_big_image_note_window_t2

0x3a7e,	// (0x0001a465) popup_tmo_big_image_note_window_t3

0x0002,

0xfec6,	// (0x000268ad) popup_tmo_big_image_note_window_t

0x3a8e,	// (0x0001a475) cell_ai5_widget_lrg_icon_pane_g1

0x3a96,	// (0x0001a47d) cell_ai5_widget_lrg_icon_pane_t1

0x3aa4,	// (0x0001a48b) cell_ai5_widget_list_row_pane_ParamLimits

0x3aa4,	// (0x0001a48b) cell_ai5_widget_list_row_pane

0x3abd,	// (0x0001a4a4) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x3abd,	// (0x0001a4a4) cell_ai5_widget_list_row_pane_g1

0x3aca,	// (0x0001a4b1) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x3aca,	// (0x0001a4b1) cell_ai5_widget_list_row_pane_t1

0x3ae2,	// (0x0001a4c9) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x3ae2,	// (0x0001a4c9) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfecd,	// (0x000268b4) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfecd,	// (0x000268b4) cell_ai5_widget_list_row_pane_t

0xbb7d,	// (0x00022564) main_fep_vtchi_ss_pane

0x3af4,	// (0x0001a4db) popup_fep_char_pre_window

0x3afc,	// (0x0001a4e3) popup_fep_ituss_window

0x3b16,	// (0x0001a4fd) popup_fep_vkbss_window

0x3b34,	// (0x0001a51b) grid_vkbss_keypad_pane_ParamLimits

0x3b34,	// (0x0001a51b) grid_vkbss_keypad_pane

0x3b44,	// (0x0001a52b) ituss_keypad_pane

0x3b5a,	// (0x0001a541) aid_vkbss_key_offset_ParamLimits

0x3b5a,	// (0x0001a541) aid_vkbss_key_offset

0x3b66,	// (0x0001a54d) cell_vkbss_key_pane_ParamLimits

0x3b66,	// (0x0001a54d) cell_vkbss_key_pane

0xdadf,	// (0x000244c6) bg_cell_vkbss_key_g1_ParamLimits

0xdadf,	// (0x000244c6) bg_cell_vkbss_key_g1

0x3b7c,	// (0x0001a563) cell_vkbss_key_3p_pane_ParamLimits

0x3b7c,	// (0x0001a563) cell_vkbss_key_3p_pane

0x3b96,	// (0x0001a57d) cell_vkbss_key_g1_ParamLimits

0x3b96,	// (0x0001a57d) cell_vkbss_key_g1

0x3bb0,	// (0x0001a597) cell_vkbss_key_t1_ParamLimits

0x3bb0,	// (0x0001a597) cell_vkbss_key_t1

0x3bdb,	// (0x0001a5c2) cell_ituss_key_pane_ParamLimits

0x3bdb,	// (0x0001a5c2) cell_ituss_key_pane

0x3beb,	// (0x0001a5d2) bg_cell_ituss_key_g1_ParamLimits

0x3beb,	// (0x0001a5d2) bg_cell_ituss_key_g1

0x3bf7,	// (0x0001a5de) cell_ituss_key_pane_g1_ParamLimits

0x3bf7,	// (0x0001a5de) cell_ituss_key_pane_g1

0x3c03,	// (0x0001a5ea) cell_ituss_key_pane_g2_ParamLimits

0x3c03,	// (0x0001a5ea) cell_ituss_key_pane_g2

0x0001,

0xfed2,	// (0x000268b9) cell_ituss_key_pane_g_ParamLimits

0xfed2,	// (0x000268b9) cell_ituss_key_pane_g

0x3c1c,	// (0x0001a603) cell_ituss_key_t1_ParamLimits

0x3c1c,	// (0x0001a603) cell_ituss_key_t1

0x3c4a,	// (0x0001a631) cell_ituss_key_t2_ParamLimits

0x3c4a,	// (0x0001a631) cell_ituss_key_t2

0x3c7b,	// (0x0001a662) cell_ituss_key_t3_ParamLimits

0x3c7b,	// (0x0001a662) cell_ituss_key_t3

0x3cac,	// (0x0001a693) cell_ituss_key_t4_ParamLimits

0x3cac,	// (0x0001a693) cell_ituss_key_t4

0x0003,

0xfed7,	// (0x000268be) cell_ituss_key_t_ParamLimits

0xfed7,	// (0x000268be) cell_ituss_key_t

0x3cdd,	// (0x0001a6c4) cell_vkbss_key_3p_pane_g1

0x3ce5,	// (0x0001a6cc) cell_vkbss_key_3p_pane_g2

0x3ced,	// (0x0001a6d4) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee0,	// (0x000268c7) cell_vkbss_key_3p_pane_g

0xbb7d,	// (0x00022564) bg_popup_fep_char_preview_window_cp02

0x3cf5,	// (0x0001a6dc) popup_fep_char_pre_window_t1

0xba40,	// (0x00022427) main_ai5_sk_pane

0x3682,	// (0x0001a069) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x368e,	// (0x0001a075) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x36a1,	// (0x0001a088) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x36ad,	// (0x0001a094) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb8,	// (0x0002689f) cell_contacts_ai5_widget_pane_g_ParamLimits

0x36bf,	// (0x0001a0a6) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xc1e2,	// (0x00022bc9) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xbb6c,	// (0x00022553) main_ai5_sk_pane_g1

0xd55c,	// (0x00023f43) popup_query_code_window_g1

0x3b0b,	// (0x0001a4f2) popup_fep_vkb_icf_pane

0x3b1f,	// (0x0001a506) popup_fep_vtchi_icf_pane

0xc1e2,	// (0x00022bc9) bg_icf_pane

0x3d13,	// (0x0001a6fa) list_vkb_icf_pane

0xc1e2,	// (0x00022bc9) bg_icf_pane_cp01

0x3d2b,	// (0x0001a712) vtchi_icf_list_pane

0x3d3b,	// (0x0001a722) list_vkb_icf_pane_t1_ParamLimits

0x3d3b,	// (0x0001a722) list_vkb_icf_pane_t1

0x3d55,	// (0x0001a73c) vtchi_icf_list_pane_t1_ParamLimits

0x3d55,	// (0x0001a73c) vtchi_icf_list_pane_t1

0x3afc,	// (0x0001a4e3) popup_fep_ituss_window_ParamLimits

0x3b1f,	// (0x0001a506) popup_fep_vtchi_icf_pane_ParamLimits

0x3b44,	// (0x0001a52b) ituss_keypad_pane_ParamLimits

0x3b50,	// (0x0001a537) ituss_sks_pane

0xc1e2,	// (0x00022bc9) bg_icf_pane_ParamLimits

0x3d04,	// (0x0001a6eb) icf_edit_indi_pane_ParamLimits

0x3d04,	// (0x0001a6eb) icf_edit_indi_pane

0x3d13,	// (0x0001a6fa) list_vkb_icf_pane_ParamLimits

0xc1e2,	// (0x00022bc9) bg_icf_pane_cp01_ParamLimits

0x3d1f,	// (0x0001a706) icf_edit_indi_pane_cp01_ParamLimits

0x3d1f,	// (0x0001a706) icf_edit_indi_pane_cp01

0x3d33,	// (0x0001a71a) vtchi_query_pane

0xf232,	// (0x00025c19) icf_edit_indi_pane_g1_ParamLimits

0xf232,	// (0x00025c19) icf_edit_indi_pane_g1

0x3d7c,	// (0x0001a763) icf_edit_indi_pane_g2_ParamLimits

0x3d7c,	// (0x0001a763) icf_edit_indi_pane_g2

0x0001,

0xfee7,	// (0x000268ce) icf_edit_indi_pane_g_ParamLimits

0xfee7,	// (0x000268ce) icf_edit_indi_pane_g

0x3d88,	// (0x0001a76f) icf_edit_indi_pane_t1

0x3d96,	// (0x0001a77d) bg_input_focus_pane_cp042

0xc11b,	// (0x00022b02) vtchi_button_pane

0x3d9f,	// (0x0001a786) vtchi_query_pane_t1

0x3dad,	// (0x0001a794) vtchi_query_pane_t2

0x3dbb,	// (0x0001a7a2) vtchi_query_pane_t3

0x0002,

0xfeec,	// (0x000268d3) vtchi_query_pane_t

0xbb7d,	// (0x00022564) bg_button_pane_cp13

0x3dc9,	// (0x0001a7b0) vtchi_button_pane_g1

0x3dd1,	// (0x0001a7b8) ituss_sks_pane_g1

0x3ddc,	// (0x0001a7c3) ituss_sks_pane_g2

0x0001,

0xfef3,	// (0x000268da) ituss_sks_pane_g

0x3de4,	// (0x0001a7cb) ituss_sks_pane_t1

0x3df2,	// (0x0001a7d9) ituss_sks_pane_t2

0x0001,

0xfef8,	// (0x000268df) ituss_sks_pane_t

0xec79,	// (0x00025660) indicator_nsta_pane_cp_g1

0xec82,	// (0x00025669) indicator_nsta_pane_cp_g2

0xec8a,	// (0x00025671) indicator_nsta_pane_cp_g3

0xec92,	// (0x00025679) indicator_nsta_pane_cp_g4

0xec9a,	// (0x00025681) indicator_nsta_pane_cp_g5

0xeca2,	// (0x00025689) indicator_nsta_pane_cp_g6

0x0005,

0xfaa9,	// (0x00026490) indicator_nsta_pane_cp_g

0xb7ed,	// (0x000221d4) cell_graphic2_pane_t2_ParamLimits

0xb7ed,	// (0x000221d4) cell_graphic2_pane_t2

0x0001,

0xfdaf,	// (0x00026796) cell_graphic2_pane_t_ParamLimits

0xfdaf,	// (0x00026796) cell_graphic2_pane_t

0xb823,	// (0x0002220a) cell_graphic2_control_pane_t1

0x8f91,	// (0x0001f978) signal_pane_g3_ParamLimits

0x8f91,	// (0x0001f978) signal_pane_g3

0x8fa5,	// (0x0001f98c) signal_pane_g4_ParamLimits

0x8fa5,	// (0x0001f98c) signal_pane_g4
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Small

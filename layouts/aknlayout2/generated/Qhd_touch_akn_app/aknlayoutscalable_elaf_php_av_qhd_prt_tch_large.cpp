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

#include "aknlayoutscalable_elaf_php_av_qhd_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0003c74a };

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
0x7b88,	// (0x000442d2) Screen

0x7b94,	// (0x000442de) application_window_ParamLimits

0x7b94,	// (0x000442de) application_window

0x25ae,	// (0x0003ecf8) screen_g1

0x54d4,	// (0x00041c1e) area_bottom_pane_ParamLimits

0x54d4,	// (0x00041c1e) area_bottom_pane

0x5594,	// (0x00041cde) area_top_pane_ParamLimits

0x5594,	// (0x00041cde) area_top_pane

0x5628,	// (0x00041d72) main_pane_ParamLimits

0x5628,	// (0x00041d72) main_pane

0x7ba4,	// (0x000442ee) misc_graphics

0x9590,	// (0x00045cda) battery_pane_ParamLimits

0x9590,	// (0x00045cda) battery_pane

0xa272,	// (0x000469bc) bg_status_flat_pane_g8

0xa27a,	// (0x000469c4) bg_status_flat_pane_g9

0x9658,	// (0x00045da2) context_pane_ParamLimits

0x9658,	// (0x00045da2) context_pane

0x976e,	// (0x00045eb8) navi_pane_ParamLimits

0x976e,	// (0x00045eb8) navi_pane

0x97f2,	// (0x00045f3c) signal_pane_ParamLimits

0x97f2,	// (0x00045f3c) signal_pane

0x0008,

0xf854,	// (0x0004bf9e) bg_status_flat_pane_g

0x985f,	// (0x00045fa9) status_pane_g1_ParamLimits

0x985f,	// (0x00045fa9) status_pane_g1

0x9873,	// (0x00045fbd) status_pane_g2_ParamLimits

0x9873,	// (0x00045fbd) status_pane_g2

0x987f,	// (0x00045fc9) status_pane_g3_ParamLimits

0x987f,	// (0x00045fc9) status_pane_g3

0x0004,

0xf780,	// (0x0004beca) status_pane_g_ParamLimits

0xf780,	// (0x0004beca) status_pane_g

0x98b3,	// (0x00045ffd) title_pane_ParamLimits

0x98b3,	// (0x00045ffd) title_pane

0x98f0,	// (0x0004603a) uni_indicator_pane_ParamLimits

0x98f0,	// (0x0004603a) uni_indicator_pane

0x94c0,	// (0x00045c0a) bg_list_pane_ParamLimits

0x94c0,	// (0x00045c0a) bg_list_pane

0x5f9c,	// (0x000426e6) find_pane

0x94e0,	// (0x00045c2a) listscroll_app_pane_ParamLimits

0x94e0,	// (0x00045c2a) listscroll_app_pane

0x94ec,	// (0x00045c36) listscroll_form_pane

0x5fa4,	// (0x000426ee) listscroll_gen_pane_ParamLimits

0x5fa4,	// (0x000426ee) listscroll_gen_pane

0x5fb8,	// (0x00042702) listscroll_set_pane

0x8705,	// (0x00044e4f) main_idle_act_pane

0x91bc,	// (0x00045906) main_idle_trad_pane

0x91bc,	// (0x00045906) main_list_empty_pane

0x94e0,	// (0x00045c2a) main_midp_pane

0x9506,	// (0x00045c50) main_pane_g1_ParamLimits

0x9506,	// (0x00045c50) main_pane_g1

0x5fc0,	// (0x0004270a) popup_ai_message_window_ParamLimits

0x5fc0,	// (0x0004270a) popup_ai_message_window

0x6066,	// (0x000427b0) popup_fep_china_uni_window_ParamLimits

0x6066,	// (0x000427b0) popup_fep_china_uni_window

0x60c2,	// (0x0004280c) popup_fep_japan_candidate_window_ParamLimits

0x60c2,	// (0x0004280c) popup_fep_japan_candidate_window

0x60e2,	// (0x0004282c) popup_fep_japan_predictive_window_ParamLimits

0x60e2,	// (0x0004282c) popup_fep_japan_predictive_window

0x6112,	// (0x0004285c) popup_find_window

0x611f,	// (0x00042869) popup_grid_graphic_window_ParamLimits

0x611f,	// (0x00042869) popup_grid_graphic_window

0x614b,	// (0x00042895) popup_large_graphic_colour_window

0x6171,	// (0x000428bb) popup_menu_window_ParamLimits

0x6171,	// (0x000428bb) popup_menu_window

0x6329,	// (0x00042a73) popup_note_image_window

0x6315,	// (0x00042a5f) popup_note_wait_window_ParamLimits

0x6315,	// (0x00042a5f) popup_note_wait_window

0x6315,	// (0x00042a5f) popup_note_window_ParamLimits

0x6315,	// (0x00042a5f) popup_note_window

0x637f,	// (0x00042ac9) popup_query_code_window_ParamLimits

0x637f,	// (0x00042ac9) popup_query_code_window

0x6393,	// (0x00042add) popup_query_data_code_window_ParamLimits

0x6393,	// (0x00042add) popup_query_data_code_window

0x63b0,	// (0x00042afa) popup_query_data_window_ParamLimits

0x63b0,	// (0x00042afa) popup_query_data_window

0x63cc,	// (0x00042b16) popup_query_sat_info_window_ParamLimits

0x63cc,	// (0x00042b16) popup_query_sat_info_window

0x6405,	// (0x00042b4f) popup_snote_single_graphic_window_ParamLimits

0x6405,	// (0x00042b4f) popup_snote_single_graphic_window

0x6405,	// (0x00042b4f) popup_snote_single_text_window_ParamLimits

0x6405,	// (0x00042b4f) popup_snote_single_text_window

0x641a,	// (0x00042b64) popup_sub_window_general

0x654a,	// (0x00042c94) popup_window_general_ParamLimits

0x654a,	// (0x00042c94) popup_window_general

0x9514,	// (0x00045c5e) power_save_pane

0x5e2e,	// (0x00042578) control_pane_g1_ParamLimits

0x5e2e,	// (0x00042578) control_pane_g1

0x5e55,	// (0x0004259f) control_pane_g2_ParamLimits

0x5e55,	// (0x0004259f) control_pane_g2

0x9483,	// (0x00045bcd) control_pane_g3_ParamLimits

0x9483,	// (0x00045bcd) control_pane_g3

0x0007,

0xf768,	// (0x0004beb2) control_pane_g_ParamLimits

0xf768,	// (0x0004beb2) control_pane_g

0x5e9f,	// (0x000425e9) control_pane_t1_ParamLimits

0x5e9f,	// (0x000425e9) control_pane_t1

0x5ef3,	// (0x0004263d) control_pane_t2_ParamLimits

0x5ef3,	// (0x0004263d) control_pane_t2

0x0002,

0xf779,	// (0x0004bec3) control_pane_t_ParamLimits

0xf779,	// (0x0004bec3) control_pane_t

0x93a8,	// (0x00045af2) navi_navi_volume_pane_cp1

0x93b0,	// (0x00045afa) status_small_icon_pane

0x93b8,	// (0x00045b02) status_small_pane_g1_ParamLimits

0x93b8,	// (0x00045b02) status_small_pane_g1

0x93ec,	// (0x00045b36) status_small_pane_g2_ParamLimits

0x93ec,	// (0x00045b36) status_small_pane_g2

0x93f8,	// (0x00045b42) status_small_pane_g3_ParamLimits

0x93f8,	// (0x00045b42) status_small_pane_g3

0x9404,	// (0x00045b4e) status_small_pane_g4_ParamLimits

0x9404,	// (0x00045b4e) status_small_pane_g4

0x9410,	// (0x00045b5a) status_small_pane_g5_ParamLimits

0x9410,	// (0x00045b5a) status_small_pane_g5

0x941e,	// (0x00045b68) status_small_pane_g6_ParamLimits

0x941e,	// (0x00045b68) status_small_pane_g6

0x0007,

0xf757,	// (0x0004bea1) status_small_pane_g_ParamLimits

0xf757,	// (0x0004bea1) status_small_pane_g

0x944d,	// (0x00045b97) status_small_pane_t1

0x946f,	// (0x00045bb9) status_small_wait_pane_ParamLimits

0x946f,	// (0x00045bb9) status_small_wait_pane

0x8c2b,	// (0x00045375) aid_levels_signal_ParamLimits

0x8c2b,	// (0x00045375) aid_levels_signal

0x8c3d,	// (0x00045387) signal_pane_g1_ParamLimits

0x8c3d,	// (0x00045387) signal_pane_g1

0x8c52,	// (0x0004539c) signal_pane_g2_ParamLimits

0x8c52,	// (0x0004539c) signal_pane_g2

0x0003,

0xf6e8,	// (0x0004be32) signal_pane_g_ParamLimits

0xf6e8,	// (0x0004be32) signal_pane_g

0x8c8d,	// (0x000453d7) context_pane_g1

0x7bae,	// (0x000442f8) title_pane_g1

0x7be4,	// (0x0004432e) title_pane_t1

0x7c4c,	// (0x00044396) title_pane_t2

0x7c72,	// (0x000443bc) title_pane_t3

0x0002,

0xf532,	// (0x0004bc7c) title_pane_t

0x9908,	// (0x00046052) aid_levels_battery_ParamLimits

0x9908,	// (0x00046052) aid_levels_battery

0x991c,	// (0x00046066) battery_pane_g1_ParamLimits

0x991c,	// (0x00046066) battery_pane_g1

0x9932,	// (0x0004607c) battery_pane_g2_ParamLimits

0x9932,	// (0x0004607c) battery_pane_g2

0x0001,

0xf78b,	// (0x0004bed5) battery_pane_g_ParamLimits

0xf78b,	// (0x0004bed5) battery_pane_g

0xaba8,	// (0x000472f2) uni_indicator_pane_g1

0xabbe,	// (0x00047308) uni_indicator_pane_g2

0xabd4,	// (0x0004731e) uni_indicator_pane_g3

0x0005,

0xf8fc,	// (0x0004c046) uni_indicator_pane_g

0x903a,	// (0x00045784) navi_icon_pane_ParamLimits

0x903a,	// (0x00045784) navi_icon_pane

0x8f78,	// (0x000456c2) navi_midp_pane

0x9056,	// (0x000457a0) navi_navi_pane

0x9060,	// (0x000457aa) navi_text_pane_ParamLimits

0x9060,	// (0x000457aa) navi_text_pane

0x25ae,	// (0x0003ecf8) status_small_wait_pane_g1

0x80c7,	// (0x00044811) status_small_wait_pane_g2

0x0001,

0xf8f7,	// (0x0004c041) status_small_wait_pane_g

0xa8cd,	// (0x00047017) navi_navi_icon_text_pane

0xa8d5,	// (0x0004701f) navi_navi_pane_g1_ParamLimits

0xa8d5,	// (0x0004701f) navi_navi_pane_g1

0xa8e7,	// (0x00047031) navi_navi_pane_g2_ParamLimits

0xa8e7,	// (0x00047031) navi_navi_pane_g2

0x0001,

0xf8c5,	// (0x0004c00f) navi_navi_pane_g_ParamLimits

0xf8c5,	// (0x0004c00f) navi_navi_pane_g

0xa8f9,	// (0x00047043) navi_navi_tabs_pane

0xa902,	// (0x0004704c) navi_navi_text_pane

0xa8cd,	// (0x00047017) navi_navi_volume_pane

0xa8a9,	// (0x00046ff3) navi_text_pane_t1

0xa89d,	// (0x00046fe7) navi_icon_pane_g1

0xa7f0,	// (0x00046f3a) navi_navi_text_pane_t1

0x6802,	// (0x00042f4c) navi_navi_volume_pane_g1

0x680a,	// (0x00042f54) volume_small_pane

0xa756,	// (0x00046ea0) navi_navi_icon_text_pane_g1

0xa75e,	// (0x00046ea8) navi_navi_icon_text_pane_t1

0x9056,	// (0x000457a0) navi_tabs_2_long_pane

0x9056,	// (0x000457a0) navi_tabs_2_pane

0x9056,	// (0x000457a0) navi_tabs_3_long_pane

0x9056,	// (0x000457a0) navi_tabs_3_pane

0x9056,	// (0x000457a0) navi_tabs_4_pane

0x67e2,	// (0x00042f2c) tabs_2_active_pane_ParamLimits

0x67e2,	// (0x00042f2c) tabs_2_active_pane

0x67f2,	// (0x00042f3c) tabs_2_passive_pane_ParamLimits

0x67f2,	// (0x00042f3c) tabs_2_passive_pane

0x67b0,	// (0x00042efa) tabs_3_active_pane_ParamLimits

0x67b0,	// (0x00042efa) tabs_3_active_pane

0x67c0,	// (0x00042f0a) tabs_3_passive_pane_ParamLimits

0x67c0,	// (0x00042f0a) tabs_3_passive_pane

0x67d1,	// (0x00042f1b) tabs_3_passive_pane_cp_ParamLimits

0x67d1,	// (0x00042f1b) tabs_3_passive_pane_cp

0x676c,	// (0x00042eb6) tabs_4_active_pane_ParamLimits

0x676c,	// (0x00042eb6) tabs_4_active_pane

0x677d,	// (0x00042ec7) tabs_4_passive_pane_ParamLimits

0x677d,	// (0x00042ec7) tabs_4_passive_pane

0x678e,	// (0x00042ed8) tabs_4_passive_pane_cp_ParamLimits

0x678e,	// (0x00042ed8) tabs_4_passive_pane_cp

0x679f,	// (0x00042ee9) tabs_4_passive_pane_cp2_ParamLimits

0x679f,	// (0x00042ee9) tabs_4_passive_pane_cp2

0x6748,	// (0x00042e92) tabs_2_long_active_pane_ParamLimits

0x6748,	// (0x00042e92) tabs_2_long_active_pane

0x675a,	// (0x00042ea4) tabs_2_long_passive_pane_ParamLimits

0x675a,	// (0x00042ea4) tabs_2_long_passive_pane

0x6709,	// (0x00042e53) tabs_3_long_active_pane_ParamLimits

0x6709,	// (0x00042e53) tabs_3_long_active_pane

0x671c,	// (0x00042e66) tabs_3_long_passive_pane_ParamLimits

0x671c,	// (0x00042e66) tabs_3_long_passive_pane

0x6735,	// (0x00042e7f) tabs_3_long_passive_pane_cp_ParamLimits

0x6735,	// (0x00042e7f) tabs_3_long_passive_pane_cp

0x66af,	// (0x00042df9) volume_small_pane_g1

0x66b8,	// (0x00042e02) volume_small_pane_g2

0x66c1,	// (0x00042e0b) volume_small_pane_g3

0x66ca,	// (0x00042e14) volume_small_pane_g4

0x66d3,	// (0x00042e1d) volume_small_pane_g5

0x66dc,	// (0x00042e26) volume_small_pane_g6

0x66e5,	// (0x00042e2f) volume_small_pane_g7

0x66ee,	// (0x00042e38) volume_small_pane_g8

0x66f7,	// (0x00042e41) volume_small_pane_g9

0x6700,	// (0x00042e4a) volume_small_pane_g10

0x0009,

0xf891,	// (0x0004bfdb) volume_small_pane_g

0x7c84,	// (0x000443ce) bg_active_tab_pane_cp2_ParamLimits

0x7c84,	// (0x000443ce) bg_active_tab_pane_cp2

0x7c92,	// (0x000443dc) tabs_3_active_pane_g1

0x7c9a,	// (0x000443e4) tabs_3_active_pane_t1

0x7c84,	// (0x000443ce) bg_passive_tab_pane_cp2_ParamLimits

0x7c84,	// (0x000443ce) bg_passive_tab_pane_cp2

0x7c92,	// (0x000443dc) tabs_3_passive_pane_g1

0x7c9a,	// (0x000443e4) tabs_3_passive_pane_t1

0x7c84,	// (0x000443ce) bg_active_tab_pane_cp3_ParamLimits

0x7c84,	// (0x000443ce) bg_active_tab_pane_cp3

0x7cac,	// (0x000443f6) tabs_4_active_pane_g1

0x7cb4,	// (0x000443fe) tabs_4_active_pane_t1

0x7c84,	// (0x000443ce) bg_passive_tab_pane_cp3_ParamLimits

0x7c84,	// (0x000443ce) bg_passive_tab_pane_cp3

0x7cac,	// (0x000443f6) tabs_4_1_passive_pane_g1

0x7cb4,	// (0x000443fe) tabs_4_1_passive_pane_t1

0x94e0,	// (0x00045c2a) list_highlight_pane_cp2

0xae1b,	// (0x00047565) list_set_pane_ParamLimits

0xae1b,	// (0x00047565) list_set_pane

0xaec1,	// (0x0004760b) main_pane_set_t1_ParamLimits

0xaec1,	// (0x0004760b) main_pane_set_t1

0xaee1,	// (0x0004762b) main_pane_set_t2_ParamLimits

0xaee1,	// (0x0004762b) main_pane_set_t2

0xaef5,	// (0x0004763f) main_pane_set_t3_ParamLimits

0xaef5,	// (0x0004763f) main_pane_set_t3

0xaf07,	// (0x00047651) main_pane_set_t4_ParamLimits

0xaf07,	// (0x00047651) main_pane_set_t4

0x0003,

0xf961,	// (0x0004c0ab) main_pane_set_t_ParamLimits

0xf961,	// (0x0004c0ab) main_pane_set_t

0xaf25,	// (0x0004766f) setting_code_pane

0xaf31,	// (0x0004767b) setting_slider_graphic_pane

0xaf31,	// (0x0004767b) setting_slider_pane

0xaf31,	// (0x0004767b) setting_text_pane

0xaf31,	// (0x0004767b) setting_volume_pane

0x5877,	// (0x00041fc1) volume_set_pane

0x7c84,	// (0x000443ce) bg_set_opt_pane_cp

0x587f,	// (0x00041fc9) setting_slider_pane_t1

0x5898,	// (0x00041fe2) setting_slider_pane_t2

0x58b2,	// (0x00041ffc) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0004bc83) setting_slider_pane_t

0x58ca,	// (0x00042014) slider_set_pane

0x7ba4,	// (0x000442ee) bg_set_opt_pane_cp2

0x7cc6,	// (0x00044410) setting_slider_graphic_pane_g1

0x58e0,	// (0x0004202a) setting_slider_graphic_pane_t1

0x58f0,	// (0x0004203a) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0004bc8a) setting_slider_graphic_pane_t

0x5900,	// (0x0004204a) slider_set_pane_cp

0x7ba4,	// (0x000442ee) input_focus_pane_cp1

0xadda,	// (0x00047524) list_set_text_pane

0x25ae,	// (0x0003ecf8) setting_text_pane_g1

0x7ba4,	// (0x000442ee) input_focus_pane_cp2

0x25ae,	// (0x0003ecf8) setting_code_pane_g1

0x7ccf,	// (0x00044419) setting_code_pane_t1

0x4597,	// (0x00040ce1) set_text_pane_t1_ParamLimits

0x4597,	// (0x00040ce1) set_text_pane_t1

0x8569,	// (0x00044cb3) set_opt_bg_pane_g1

0x8571,	// (0x00044cbb) set_opt_bg_pane_g2

0xadb4,	// (0x000474fe) set_opt_bg_pane_g3

0x8581,	// (0x00044ccb) set_opt_bg_pane_g4

0x8589,	// (0x00044cd3) set_opt_bg_pane_g5

0x8591,	// (0x00044cdb) set_opt_bg_pane_g6

0xadbe,	// (0x00047508) set_opt_bg_pane_g7

0xadc6,	// (0x00047510) set_opt_bg_pane_g8

0xadd0,	// (0x0004751a) set_opt_bg_pane_g9

0x0008,

0xf94e,	// (0x0004c098) set_opt_bg_pane_g

0xada7,	// (0x000474f1) slider_set_pane_g1

0x6877,	// (0x00042fc1) slider_set_pane_g2

0x0006,

0xf93f,	// (0x0004c089) slider_set_pane_g

0x6813,	// (0x00042f5d) volume_set_pane_g1

0x681b,	// (0x00042f65) volume_set_pane_g2

0x6823,	// (0x00042f6d) volume_set_pane_g3

0x682b,	// (0x00042f75) volume_set_pane_g4

0x6833,	// (0x00042f7d) volume_set_pane_g5

0x683b,	// (0x00042f85) volume_set_pane_g6

0x6843,	// (0x00042f8d) volume_set_pane_g7

0x684b,	// (0x00042f95) volume_set_pane_g8

0x6853,	// (0x00042f9d) volume_set_pane_g9

0x685b,	// (0x00042fa5) volume_set_pane_g10

0x0009,

0xf917,	// (0x0004c061) volume_set_pane_g

0x7cdd,	// (0x00044427) indicator_pane_ParamLimits

0x7cdd,	// (0x00044427) indicator_pane

0x7ce9,	// (0x00044433) main_idle_pane_g2_ParamLimits

0x7ce9,	// (0x00044433) main_idle_pane_g2

0x7d11,	// (0x0004445b) main_pane_idle_g1_ParamLimits

0x7d11,	// (0x0004445b) main_pane_idle_g1

0x7d1e,	// (0x00044468) popup_clock_digital_analogue_window_ParamLimits

0x7d1e,	// (0x00044468) popup_clock_digital_analogue_window

0x7d35,	// (0x0004447f) soft_indicator_pane_ParamLimits

0x7d35,	// (0x0004447f) soft_indicator_pane

0x7d41,	// (0x0004448b) wallpaper_pane_ParamLimits

0x7d41,	// (0x0004448b) wallpaper_pane

0x25ae,	// (0x0003ecf8) wallpaper_pane_g1

0x7d55,	// (0x0004449f) indicator_pane_g1_ParamLimits

0x7d55,	// (0x0004449f) indicator_pane_g1

0xb1df,	// (0x00047929) navi_navi_icon_text_pane_srt_g1

0x7d70,	// (0x000444ba) soft_indicator_pane_t1

0x7d8a,	// (0x000444d4) aid_ps_area_pane

0x7d9b,	// (0x000444e5) aid_ps_clock_pane

0x7da9,	// (0x000444f3) aid_ps_indicator_pane

0x7db5,	// (0x000444ff) indicator_ps_pane_ParamLimits

0x7db5,	// (0x000444ff) indicator_ps_pane

0x7dc4,	// (0x0004450e) power_save_pane_g1_ParamLimits

0x7dc4,	// (0x0004450e) power_save_pane_g1

0x7dd0,	// (0x0004451a) power_save_pane_g2_ParamLimits

0x7dd0,	// (0x0004451a) power_save_pane_g2

0x5488,	// (0x00041bd2) aid_navinavi_width_pane

0x7d8a,	// (0x000444d4) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0004bc8f) power_save_pane_g_ParamLimits

0xf545,	// (0x0004bc8f) power_save_pane_g

0x7dde,	// (0x00044528) power_save_pane_t1_ParamLimits

0x7dde,	// (0x00044528) power_save_pane_t1

0x7d9b,	// (0x000444e5) aid_ps_clock_pane_ParamLimits

0x7da9,	// (0x000444f3) aid_ps_indicator_pane_ParamLimits

0x7df0,	// (0x0004453a) power_save_pane_t4_ParamLimits

0x7df0,	// (0x0004453a) power_save_pane_t4

0x0001,

0xf54a,	// (0x0004bc94) power_save_pane_t_ParamLimits

0xf54a,	// (0x0004bc94) power_save_pane_t

0x7e1a,	// (0x00044564) power_save_t3_ParamLimits

0x7e1a,	// (0x00044564) power_save_t3

0x7e05,	// (0x0004454f) power_save_t2_ParamLimits

0x7e05,	// (0x0004454f) power_save_t2

0x7e2f,	// (0x00044579) indicator_ps_pane_g1

0x7e38,	// (0x00044582) ai_gene_pane_ParamLimits

0x7e38,	// (0x00044582) ai_gene_pane

0x7e44,	// (0x0004458e) ai_links_pane_ParamLimits

0x7e44,	// (0x0004458e) ai_links_pane

0x7e50,	// (0x0004459a) indicator_pane_cp1_ParamLimits

0x7e50,	// (0x0004459a) indicator_pane_cp1

0x7e5c,	// (0x000445a6) main_pane_idle_g1_cp_ParamLimits

0x7e5c,	// (0x000445a6) main_pane_idle_g1_cp

0x7e68,	// (0x000445b2) popup_ai_links_title_window

0x7e71,	// (0x000445bb) soft_indicator_pane_cp1_ParamLimits

0x7e71,	// (0x000445bb) soft_indicator_pane_cp1

0xab96,	// (0x000472e0) ai_links_pane_g1

0xab9f,	// (0x000472e9) grid_ai_links_pane

0xab79,	// (0x000472c3) ai_gene_pane_1

0xab84,	// (0x000472ce) ai_gene_pane_2

0xab8d,	// (0x000472d7) list_highlight_pane_cp4

0xab5d,	// (0x000472a7) cell_ai_link_pane_ParamLimits

0xab5d,	// (0x000472a7) cell_ai_link_pane

0xab55,	// (0x0004729f) cell_ai_link_pane_g1

0x80c7,	// (0x00044811) cell_ai_link_pane_g2

0x0001,

0xf8f2,	// (0x0004c03c) cell_ai_link_pane_g

0x7ba4,	// (0x000442ee) grid_highlight_cp2

0x7ba4,	// (0x000442ee) bg_popup_sub_pane_cp1

0x7e8b,	// (0x000445d5) popup_ai_links_title_window_t1

0xaaa3,	// (0x000471ed) ai_gene_pane_1_g1_ParamLimits

0xaaa3,	// (0x000471ed) ai_gene_pane_1_g1

0xaaaf,	// (0x000471f9) ai_gene_pane_1_g2_ParamLimits

0xaaaf,	// (0x000471f9) ai_gene_pane_1_g2

0x0001,

0xf8e8,	// (0x0004c032) ai_gene_pane_1_g_ParamLimits

0xf8e8,	// (0x0004c032) ai_gene_pane_1_g

0xaabc,	// (0x00047206) ai_gene_pane_1_t1_ParamLimits

0xaabc,	// (0x00047206) ai_gene_pane_1_t1

0xaaf0,	// (0x0004723a) grid_ai_soft_ind_pane

0xaa8e,	// (0x000471d8) ai_gene_pane_2_t1_ParamLimits

0xaa8e,	// (0x000471d8) ai_gene_pane_2_t1

0x7e9a,	// (0x000445e4) main_pane_empty_t1_ParamLimits

0x7e9a,	// (0x000445e4) main_pane_empty_t1

0x7eb2,	// (0x000445fc) main_pane_empty_t2_ParamLimits

0x7eb2,	// (0x000445fc) main_pane_empty_t2

0x7ec7,	// (0x00044611) main_pane_empty_t3_ParamLimits

0x7ec7,	// (0x00044611) main_pane_empty_t3

0x7ed9,	// (0x00044623) main_pane_empty_t4_ParamLimits

0x7ed9,	// (0x00044623) main_pane_empty_t4

0x7eeb,	// (0x00044635) main_pane_empty_t5_ParamLimits

0x7eeb,	// (0x00044635) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0004bc99) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0004bc99) main_pane_empty_t

0x8630,	// (0x00044d7a) bg_popup_window_pane_ParamLimits

0x8630,	// (0x00044d7a) bg_popup_window_pane

0xa7fe,	// (0x00046f48) find_popup_pane_cp2_ParamLimits

0xa7fe,	// (0x00046f48) find_popup_pane_cp2

0xa80a,	// (0x00046f54) heading_pane_ParamLimits

0xa80a,	// (0x00046f54) heading_pane

0x7ba4,	// (0x000442ee) bg_popup_sub_pane

0xa778,	// (0x00046ec2) bg_popup_window_pane_g1_ParamLimits

0xa778,	// (0x00046ec2) bg_popup_window_pane_g1

0xa784,	// (0x00046ece) bg_popup_window_pane_g2_ParamLimits

0xa784,	// (0x00046ece) bg_popup_window_pane_g2

0xa790,	// (0x00046eda) bg_popup_window_pane_g3_ParamLimits

0xa790,	// (0x00046eda) bg_popup_window_pane_g3

0xa79c,	// (0x00046ee6) bg_popup_window_pane_g4_ParamLimits

0xa79c,	// (0x00046ee6) bg_popup_window_pane_g4

0xa7a8,	// (0x00046ef2) bg_popup_window_pane_g5_ParamLimits

0xa7a8,	// (0x00046ef2) bg_popup_window_pane_g5

0xa7b4,	// (0x00046efe) bg_popup_window_pane_g6_ParamLimits

0xa7b4,	// (0x00046efe) bg_popup_window_pane_g6

0xa7c0,	// (0x00046f0a) bg_popup_window_pane_g7_ParamLimits

0xa7c0,	// (0x00046f0a) bg_popup_window_pane_g7

0xa7cc,	// (0x00046f16) bg_popup_window_pane_g8_ParamLimits

0xa7cc,	// (0x00046f16) bg_popup_window_pane_g8

0xa7d8,	// (0x00046f22) bg_popup_window_pane_g9_ParamLimits

0xa7d8,	// (0x00046f22) bg_popup_window_pane_g9

0xa7e4,	// (0x00046f2e) bg_popup_window_pane_g10_ParamLimits

0xa7e4,	// (0x00046f2e) bg_popup_window_pane_g10

0x0009,

0xf8b0,	// (0x0004bffa) bg_popup_window_pane_g_ParamLimits

0xf8b0,	// (0x0004bffa) bg_popup_window_pane_g

0xa70d,	// (0x00046e57) bg_popup_heading_pane_ParamLimits

0xa70d,	// (0x00046e57) bg_popup_heading_pane

0x6976,	// (0x000430c0) tabs_4_passive_pane_cp_srt_ParamLimits

0x6976,	// (0x000430c0) tabs_4_passive_pane_cp_srt

0x6988,	// (0x000430d2) tabs_4_passive_pane_srt_ParamLimits

0xa721,	// (0x00046e6b) heading_pane_g2

0x6988,	// (0x000430d2) tabs_4_passive_pane_srt

0x94e0,	// (0x00045c2a) bg_passive_tab_pane_cp3_srt_ParamLimits

0x94e0,	// (0x00045c2a) bg_passive_tab_pane_cp3_srt

0xa729,	// (0x00046e73) heading_pane_t1_ParamLimits

0xa729,	// (0x00046e73) heading_pane_t1

0xa740,	// (0x00046e8a) heading_pane_t2_ParamLimits

0xa740,	// (0x00046e8a) heading_pane_t2

0x0001,

0xf8ab,	// (0x0004bff5) heading_pane_t_ParamLimits

0xf8ab,	// (0x0004bff5) heading_pane_t

0xa23a,	// (0x00046984) bg_popup_heading_pane_g1

0xa2e9,	// (0x00046a33) bg_popup_heading_pane_g2

0xa2f3,	// (0x00046a3d) bg_popup_heading_pane_g3

0xa2fd,	// (0x00046a47) bg_popup_heading_pane_g4

0xa307,	// (0x00046a51) bg_popup_heading_pane_g5

0xa311,	// (0x00046a5b) bg_popup_heading_pane_g6

0xa319,	// (0x00046a63) bg_popup_heading_pane_g7

0xa321,	// (0x00046a6b) bg_popup_heading_pane_g8

0xa32b,	// (0x00046a75) bg_popup_heading_pane_g9

0x0008,

0xf867,	// (0x0004bfb1) bg_popup_heading_pane_g

0x9a0a,	// (0x00046154) bg_popup_sub_pane_g1

0x9a12,	// (0x0004615c) bg_popup_sub_pane_g2

0x9a1a,	// (0x00046164) bg_popup_sub_pane_g3

0x9a22,	// (0x0004616c) bg_popup_sub_pane_g4

0x9a2a,	// (0x00046174) bg_popup_sub_pane_g5

0x9a32,	// (0x0004617c) bg_popup_sub_pane_g6

0x9a3a,	// (0x00046184) bg_popup_sub_pane_g7

0x9a42,	// (0x0004618c) bg_popup_sub_pane_g8

0x9a4a,	// (0x00046194) bg_popup_sub_pane_g9

0x0008,

0xf841,	// (0x0004bf8b) bg_popup_sub_pane_g

0x7eff,	// (0x00044649) bg_popup_window_pane_cp5_ParamLimits

0x7eff,	// (0x00044649) bg_popup_window_pane_cp5

0x7f1b,	// (0x00044665) popup_note_window_g1_ParamLimits

0x7f1b,	// (0x00044665) popup_note_window_g1

0x7f27,	// (0x00044671) popup_note_window_t1_ParamLimits

0x7f27,	// (0x00044671) popup_note_window_t1

0x7f3d,	// (0x00044687) popup_note_window_t2_ParamLimits

0x7f3d,	// (0x00044687) popup_note_window_t2

0x7f53,	// (0x0004469d) popup_note_window_t3_ParamLimits

0x7f53,	// (0x0004469d) popup_note_window_t3

0x7f69,	// (0x000446b3) popup_note_window_t4_ParamLimits

0x7f69,	// (0x000446b3) popup_note_window_t4

0x7f91,	// (0x000446db) popup_note_window_t5_ParamLimits

0x7f91,	// (0x000446db) popup_note_window_t5

0x0004,

0xf55a,	// (0x0004bca4) popup_note_window_t_ParamLimits

0xf55a,	// (0x0004bca4) popup_note_window_t

0x7fdb,	// (0x00044725) bg_popup_window_pane_cp6_ParamLimits

0x7fdb,	// (0x00044725) bg_popup_window_pane_cp6

0xa1b6,	// (0x00046900) popup_note_image_window_g1_ParamLimits

0xa1b6,	// (0x00046900) popup_note_image_window_g1

0xa1c2,	// (0x0004690c) popup_note_image_window_g2_ParamLimits

0xa1c2,	// (0x0004690c) popup_note_image_window_g2

0x0001,

0xf835,	// (0x0004bf7f) popup_note_image_window_g_ParamLimits

0xf835,	// (0x0004bf7f) popup_note_image_window_g

0xa1db,	// (0x00046925) popup_note_image_window_t1_ParamLimits

0xa1db,	// (0x00046925) popup_note_image_window_t1

0xa1f4,	// (0x0004693e) popup_note_image_window_t2_ParamLimits

0xa1f4,	// (0x0004693e) popup_note_image_window_t2

0xa20d,	// (0x00046957) popup_note_image_window_t3_ParamLimits

0xa20d,	// (0x00046957) popup_note_image_window_t3

0x0002,

0xf83a,	// (0x0004bf84) popup_note_image_window_t_ParamLimits

0xf83a,	// (0x0004bf84) popup_note_image_window_t

0xa077,	// (0x000467c1) bg_popup_window_pane_cp7_ParamLimits

0xa077,	// (0x000467c1) bg_popup_window_pane_cp7

0xa0a7,	// (0x000467f1) popup_note_wait_window_g1_ParamLimits

0xa0a7,	// (0x000467f1) popup_note_wait_window_g1

0xa0b3,	// (0x000467fd) popup_note_wait_window_g2_ParamLimits

0xa0b3,	// (0x000467fd) popup_note_wait_window_g2

0x0002,

0xf823,	// (0x0004bf6d) popup_note_wait_window_g_ParamLimits

0xf823,	// (0x0004bf6d) popup_note_wait_window_g

0xa0cb,	// (0x00046815) popup_note_wait_window_t1_ParamLimits

0xa0cb,	// (0x00046815) popup_note_wait_window_t1

0xa0f2,	// (0x0004683c) popup_note_wait_window_t2_ParamLimits

0xa0f2,	// (0x0004683c) popup_note_wait_window_t2

0xa10f,	// (0x00046859) popup_note_wait_window_t3_ParamLimits

0xa10f,	// (0x00046859) popup_note_wait_window_t3

0xa122,	// (0x0004686c) popup_note_wait_window_t4_ParamLimits

0xa122,	// (0x0004686c) popup_note_wait_window_t4

0x0004,

0xf82a,	// (0x0004bf74) popup_note_wait_window_t_ParamLimits

0xf82a,	// (0x0004bf74) popup_note_wait_window_t

0xa147,	// (0x00046891) wait_bar_pane_ParamLimits

0xa147,	// (0x00046891) wait_bar_pane

0x7ba4,	// (0x000442ee) wait_anim_pane

0x7ba4,	// (0x000442ee) wait_border_pane

0x25ae,	// (0x0003ecf8) wait_anim_pane_g1

0x25ae,	// (0x0003ecf8) wait_anim_pane_g2

0x0001,

0xf6e3,	// (0x0004be2d) wait_anim_pane_g

0xa01b,	// (0x00046765) wait_border_pane_g1

0xa026,	// (0x00046770) wait_border_pane_g2

0xa02f,	// (0x00046779) wait_border_pane_g3

0x0002,

0xf81c,	// (0x0004bf66) wait_border_pane_g

0x9e86,	// (0x000465d0) bg_popup_window_pane_cp16_ParamLimits

0x9e86,	// (0x000465d0) bg_popup_window_pane_cp16

0x9f86,	// (0x000466d0) indicator_popup_pane_cp4_ParamLimits

0x9f86,	// (0x000466d0) indicator_popup_pane_cp4

0x9f9a,	// (0x000466e4) popup_query_data_window_t1_ParamLimits

0x9f9a,	// (0x000466e4) popup_query_data_window_t1

0x9fac,	// (0x000466f6) popup_query_data_window_t2_ParamLimits

0x9fac,	// (0x000466f6) popup_query_data_window_t2

0x9fc5,	// (0x0004670f) popup_query_data_window_t3_ParamLimits

0x9fc5,	// (0x0004670f) popup_query_data_window_t3

0x0002,

0xf815,	// (0x0004bf5f) popup_query_data_window_t_ParamLimits

0xf815,	// (0x0004bf5f) popup_query_data_window_t

0x9fdf,	// (0x00046729) query_popup_data_pane_ParamLimits

0x9fdf,	// (0x00046729) query_popup_data_pane

0x9ff3,	// (0x0004673d) query_popup_data_pane_cp1_ParamLimits

0x9ff3,	// (0x0004673d) query_popup_data_pane_cp1

0x9e86,	// (0x000465d0) bg_popup_window_pane_cp10_ParamLimits

0x9e86,	// (0x000465d0) bg_popup_window_pane_cp10

0x9eb8,	// (0x00046602) indicator_popup_pane_ParamLimits

0x9eb8,	// (0x00046602) indicator_popup_pane

0x9eda,	// (0x00046624) popup_query_code_window_t1_ParamLimits

0x9eda,	// (0x00046624) popup_query_code_window_t1

0x9ef4,	// (0x0004663e) popup_query_code_window_t2_ParamLimits

0x9ef4,	// (0x0004663e) popup_query_code_window_t2

0x9f3d,	// (0x00046687) popup_query_code_window_t3_ParamLimits

0x9f3d,	// (0x00046687) popup_query_code_window_t3

0x0002,

0xf80e,	// (0x0004bf58) popup_query_code_window_t_ParamLimits

0xf80e,	// (0x0004bf58) popup_query_code_window_t

0x9f6c,	// (0x000466b6) query_popup_pane_ParamLimits

0x9f6c,	// (0x000466b6) query_popup_pane

0x7fdb,	// (0x00044725) bg_popup_window_pane_cp15_ParamLimits

0x7fdb,	// (0x00044725) bg_popup_window_pane_cp15

0x7ff9,	// (0x00044743) indicator_popup_pane_cp1_ParamLimits

0x7ff9,	// (0x00044743) indicator_popup_pane_cp1

0x800c,	// (0x00044756) indicator_popup_pane_cp2_ParamLimits

0x800c,	// (0x00044756) indicator_popup_pane_cp2

0x801f,	// (0x00044769) popup_query_data_code_window_g1_ParamLimits

0x801f,	// (0x00044769) popup_query_data_code_window_g1

0x8032,	// (0x0004477c) popup_query_data_code_window_t1_ParamLimits

0x8032,	// (0x0004477c) popup_query_data_code_window_t1

0x8044,	// (0x0004478e) popup_query_data_code_window_t2_ParamLimits

0x8044,	// (0x0004478e) popup_query_data_code_window_t2

0x8056,	// (0x000447a0) popup_query_data_code_window_t3_ParamLimits

0x8056,	// (0x000447a0) popup_query_data_code_window_t3

0x806c,	// (0x000447b6) popup_query_data_code_window_t4_ParamLimits

0x806c,	// (0x000447b6) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0004bcaf) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0004bcaf) popup_query_data_code_window_t

0x65b4,	// (0x00042cfe) list_single_midp_graphic_pane_g3

0x8084,	// (0x000447ce) query_popup_data_pane_cp2_ParamLimits

0x8097,	// (0x000447e1) query_popup_pane_cp2_ParamLimits

0x8097,	// (0x000447e1) query_popup_pane_cp2

0x7ba4,	// (0x000442ee) bg_popup_window_pane_cp11

0x9e6a,	// (0x000465b4) heading_pane_cp5

0x9e72,	// (0x000465bc) listscroll_popup_info_pane

0x7ba4,	// (0x000442ee) input_focus_pane_cp3

0x80aa,	// (0x000447f4) query_popup_pane_t1

0x80b8,	// (0x00044802) list_popup_info_pane_ParamLimits

0x80b8,	// (0x00044802) list_popup_info_pane

0x80c7,	// (0x00044811) listscroll_popup_info_pane_g1

0x80cf,	// (0x00044819) scroll_pane_cp7

0x80d9,	// (0x00044823) popup_info_list_pane_t1_ParamLimits

0x80d9,	// (0x00044823) popup_info_list_pane_t1

0x80f3,	// (0x0004483d) popup_info_list_pane_t2_ParamLimits

0x80f3,	// (0x0004483d) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0004bcb8) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0004bcb8) popup_info_list_pane_t

0x7ba4,	// (0x000442ee) bg_popup_window_pane_cp12

0xb1f9,	// (0x00047943) find_popup_pane

0x7c84,	// (0x000443ce) bg_popup_window_pane_cp3

0x810d,	// (0x00044857) heading_pane_cp3

0x811c,	// (0x00044866) listscroll_popup_graphic_pane

0x7ba4,	// (0x000442ee) bg_popup_window_pane_cp4

0x817c,	// (0x000448c6) heading_pane_cp4

0x8186,	// (0x000448d0) listscroll_popup_colour_pane

0x818e,	// (0x000448d8) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x818e,	// (0x000448d8) cell_large_graphic_colour_none_popup_pane

0x81a2,	// (0x000448ec) grid_large_graphic_colour_popup_pane_ParamLimits

0x81a2,	// (0x000448ec) grid_large_graphic_colour_popup_pane

0x81c6,	// (0x00044910) listscroll_popup_colour_pane_g1_ParamLimits

0x81c6,	// (0x00044910) listscroll_popup_colour_pane_g1

0x81dd,	// (0x00044927) listscroll_popup_colour_pane_g2_ParamLimits

0x81dd,	// (0x00044927) listscroll_popup_colour_pane_g2

0x81f4,	// (0x0004493e) listscroll_popup_colour_pane_g3_ParamLimits

0x81f4,	// (0x0004493e) listscroll_popup_colour_pane_g3

0x8204,	// (0x0004494e) listscroll_popup_colour_pane_g4_ParamLimits

0x8204,	// (0x0004494e) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0004bcbd) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0004bcbd) listscroll_popup_colour_pane_g

0x8214,	// (0x0004495e) scroll_pane_cp6_ParamLimits

0x8214,	// (0x0004495e) scroll_pane_cp6

0x8226,	// (0x00044970) cell_large_graphic_colour_popup_pane_ParamLimits

0x8226,	// (0x00044970) cell_large_graphic_colour_popup_pane

0x8245,	// (0x0004498f) cell_large_graphic_colour_none_popup_pane_t1

0x7ba4,	// (0x000442ee) grid_highlight_pane_cp5

0x8254,	// (0x0004499e) cell_large_graphic_colour_popup_pane_g1

0x825c,	// (0x000449a6) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0004bcc6) cell_large_graphic_colour_popup_pane_g

0x8264,	// (0x000449ae) cell_large_graphic_colour_popup_pane_g2_copy1

0x826d,	// (0x000449b7) grid_highlight_pane_cp4

0x8275,	// (0x000449bf) bg_popup_window_pane_cp8_ParamLimits

0x8275,	// (0x000449bf) bg_popup_window_pane_cp8

0x8290,	// (0x000449da) popup_snote_single_text_window_g1_ParamLimits

0x8290,	// (0x000449da) popup_snote_single_text_window_g1

0x82a2,	// (0x000449ec) popup_snote_single_text_window_t1_ParamLimits

0x82a2,	// (0x000449ec) popup_snote_single_text_window_t1

0x82b5,	// (0x000449ff) popup_snote_single_text_window_t2_ParamLimits

0x82b5,	// (0x000449ff) popup_snote_single_text_window_t2

0x82c8,	// (0x00044a12) popup_snote_single_text_window_t3_ParamLimits

0x82c8,	// (0x00044a12) popup_snote_single_text_window_t3

0x8301,	// (0x00044a4b) popup_snote_single_text_window_t4_ParamLimits

0x8301,	// (0x00044a4b) popup_snote_single_text_window_t4

0x8335,	// (0x00044a7f) popup_snote_single_text_window_t5_ParamLimits

0x8335,	// (0x00044a7f) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0004bccb) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0004bccb) popup_snote_single_text_window_t

0x8364,	// (0x00044aae) bg_popup_window_pane_cp9_ParamLimits

0x8364,	// (0x00044aae) bg_popup_window_pane_cp9

0x8290,	// (0x000449da) popup_snote_single_graphic_window_g1_ParamLimits

0x8290,	// (0x000449da) popup_snote_single_graphic_window_g1

0x8372,	// (0x00044abc) popup_snote_single_graphic_window_g2_ParamLimits

0x8372,	// (0x00044abc) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0004bcd6) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0004bcd6) popup_snote_single_graphic_window_g

0x837e,	// (0x00044ac8) popup_snote_single_graphic_window_t1_ParamLimits

0x837e,	// (0x00044ac8) popup_snote_single_graphic_window_t1

0x8391,	// (0x00044adb) popup_snote_single_graphic_window_t2_ParamLimits

0x8391,	// (0x00044adb) popup_snote_single_graphic_window_t2

0x83a4,	// (0x00044aee) popup_snote_single_graphic_window_t3_ParamLimits

0x83a4,	// (0x00044aee) popup_snote_single_graphic_window_t3

0x83dd,	// (0x00044b27) popup_snote_single_graphic_window_t4_ParamLimits

0x83dd,	// (0x00044b27) popup_snote_single_graphic_window_t4

0x8411,	// (0x00044b5b) popup_snote_single_graphic_window_t5_ParamLimits

0x8411,	// (0x00044b5b) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0004bcdb) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0004bcdb) popup_snote_single_graphic_window_t

0xb13b,	// (0x00047885) grid_graphic_popup_pane_ParamLimits

0xb13b,	// (0x00047885) grid_graphic_popup_pane

0xb165,	// (0x000478af) listscroll_popup_graphic_pane_g1_ParamLimits

0xb165,	// (0x000478af) listscroll_popup_graphic_pane_g1

0xb179,	// (0x000478c3) listscroll_popup_graphic_pane_g2_ParamLimits

0xb179,	// (0x000478c3) listscroll_popup_graphic_pane_g2

0x0001,

0xf98b,	// (0x0004c0d5) listscroll_popup_graphic_pane_g_ParamLimits

0xf98b,	// (0x0004c0d5) listscroll_popup_graphic_pane_g

0xb18d,	// (0x000478d7) scroll_pane_cp5

0xb0cc,	// (0x00047816) cell_graphic_popup_pane_ParamLimits

0xb0cc,	// (0x00047816) cell_graphic_popup_pane

0xb0ad,	// (0x000477f7) cell_graphic_popup_pane_g1

0xb0b5,	// (0x000477ff) cell_graphic_popup_pane_g2

0x8264,	// (0x000449ae) cell_graphic_popup_pane_g3

0x0002,

0xf984,	// (0x0004c0ce) cell_graphic_popup_pane_g

0xb0be,	// (0x00047808) cell_graphic_popup_pane_t2

0x826d,	// (0x000449b7) grid_highlight_pane_cp3

0x8452,	// (0x00044b9c) list_gen_pane_ParamLimits

0x8452,	// (0x00044b9c) list_gen_pane

0x8484,	// (0x00044bce) scroll_pane

0xb005,	// (0x0004774f) bg_list_pane_g1_ParamLimits

0xb005,	// (0x0004774f) bg_list_pane_g1

0xb022,	// (0x0004776c) bg_list_pane_g2_ParamLimits

0xb022,	// (0x0004776c) bg_list_pane_g2

0xb037,	// (0x00047781) bg_list_pane_g3_ParamLimits

0xb037,	// (0x00047781) bg_list_pane_g3

0xb04b,	// (0x00047795) bg_list_pane_g4_ParamLimits

0xb04b,	// (0x00047795) bg_list_pane_g4

0xb05f,	// (0x000477a9) bg_list_pane_g5_ParamLimits

0xb05f,	// (0x000477a9) bg_list_pane_g5

0x0004,

0xf979,	// (0x0004c0c3) bg_list_pane_g_ParamLimits

0xf979,	// (0x0004c0c3) bg_list_pane_g

0x68db,	// (0x00043025) list_double2_graphic_large_graphic_pane_ParamLimits

0x68db,	// (0x00043025) list_double2_graphic_large_graphic_pane

0x68db,	// (0x00043025) list_double2_graphic_pane_ParamLimits

0x68db,	// (0x00043025) list_double2_graphic_pane

0x68db,	// (0x00043025) list_double2_large_graphic_pane_ParamLimits

0x68db,	// (0x00043025) list_double2_large_graphic_pane

0x68db,	// (0x00043025) list_double2_pane_ParamLimits

0x68db,	// (0x00043025) list_double2_pane

0x68db,	// (0x00043025) list_double_graphic_heading_pane_ParamLimits

0x68db,	// (0x00043025) list_double_graphic_heading_pane

0x68db,	// (0x00043025) list_double_graphic_pane_ParamLimits

0x68db,	// (0x00043025) list_double_graphic_pane

0x68db,	// (0x00043025) list_double_heading_pane_ParamLimits

0x68db,	// (0x00043025) list_double_heading_pane

0x68db,	// (0x00043025) list_double_large_graphic_pane_ParamLimits

0x68db,	// (0x00043025) list_double_large_graphic_pane

0x68db,	// (0x00043025) list_double_number_pane_ParamLimits

0x68db,	// (0x00043025) list_double_number_pane

0x68db,	// (0x00043025) list_double_pane_ParamLimits

0x68db,	// (0x00043025) list_double_pane

0x68db,	// (0x00043025) list_double_time_pane_ParamLimits

0x68db,	// (0x00043025) list_double_time_pane

0x68db,	// (0x00043025) list_setting_number_pane_ParamLimits

0x68db,	// (0x00043025) list_setting_number_pane

0x68db,	// (0x00043025) list_setting_pane_ParamLimits

0x68db,	// (0x00043025) list_setting_pane

0x6914,	// (0x0004305e) list_single_2graphic_pane_ParamLimits

0x6914,	// (0x0004305e) list_single_2graphic_pane

0x6914,	// (0x0004305e) list_single_graphic_heading_pane_ParamLimits

0x6914,	// (0x0004305e) list_single_graphic_heading_pane

0x6914,	// (0x0004305e) list_single_graphic_pane_ParamLimits

0x6914,	// (0x0004305e) list_single_graphic_pane

0x6914,	// (0x0004305e) list_single_heading_pane_ParamLimits

0x6914,	// (0x0004305e) list_single_heading_pane

0x4ef5,	// (0x0004163f) list_single_large_graphic_pane_ParamLimits

0x4ef5,	// (0x0004163f) list_single_large_graphic_pane

0x6914,	// (0x0004305e) list_single_number_heading_pane_ParamLimits

0x6914,	// (0x0004305e) list_single_number_heading_pane

0x6914,	// (0x0004305e) list_single_number_pane_ParamLimits

0x6914,	// (0x0004305e) list_single_number_pane

0x6914,	// (0x0004305e) list_single_pane_ParamLimits

0x6914,	// (0x0004305e) list_single_pane

0x7ba4,	// (0x000442ee) list_highlight_pane_cp1

0x8cb8,	// (0x00045402) list_single_pane_g1_ParamLimits

0x8cb8,	// (0x00045402) list_single_pane_g1

0x5908,	// (0x00042052) list_single_pane_g2_ParamLimits

0x5908,	// (0x00042052) list_single_pane_g2

0x0001,

0xf5ad,	// (0x0004bcf7) list_single_pane_g_ParamLimits

0xf5ad,	// (0x0004bcf7) list_single_pane_g

0x4ec7,	// (0x00041611) list_single_pane_t1_ParamLimits

0x4ec7,	// (0x00041611) list_single_pane_t1

0x8cb8,	// (0x00045402) list_single_number_pane_g1_ParamLimits

0x8cb8,	// (0x00045402) list_single_number_pane_g1

0x5908,	// (0x00042052) list_single_number_pane_g2_ParamLimits

0x5908,	// (0x00042052) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x0004bcf7) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x0004bcf7) list_single_number_pane_g

0x4da2,	// (0x000414ec) list_single_number_pane_t1_ParamLimits

0x4da2,	// (0x000414ec) list_single_number_pane_t1

0x4e85,	// (0x000415cf) list_single_number_pane_t2_ParamLimits

0x4e85,	// (0x000415cf) list_single_number_pane_t2

0x0001,

0xf93a,	// (0x0004c084) list_single_number_pane_t_ParamLimits

0xf93a,	// (0x0004c084) list_single_number_pane_t

0x45b0,	// (0x00040cfa) list_single_graphic_pane_g1_ParamLimits

0x45b0,	// (0x00040cfa) list_single_graphic_pane_g1

0x8cb8,	// (0x00045402) list_single_graphic_pane_g2_ParamLimits

0x8cb8,	// (0x00045402) list_single_graphic_pane_g2

0x5908,	// (0x00042052) list_single_graphic_pane_g3_ParamLimits

0x5908,	// (0x00042052) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0004bce6) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0004bce6) list_single_graphic_pane_g

0x45bc,	// (0x00040d06) list_single_graphic_pane_t1_ParamLimits

0x45bc,	// (0x00040d06) list_single_graphic_pane_t1

0x45d2,	// (0x00040d1c) list_single_heading_pane_g1_ParamLimits

0x45d2,	// (0x00040d1c) list_single_heading_pane_g1

0x5908,	// (0x00042052) list_single_heading_pane_g2_ParamLimits

0x5908,	// (0x00042052) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0004bced) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0004bced) list_single_heading_pane_g

0x45e5,	// (0x00040d2f) list_single_heading_pane_t1_ParamLimits

0x45e5,	// (0x00040d2f) list_single_heading_pane_t1

0x5914,	// (0x0004205e) list_single_heading_pane_t2_ParamLimits

0x5914,	// (0x0004205e) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0004bcf2) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0004bcf2) list_single_heading_pane_t

0x8cb8,	// (0x00045402) list_single_number_heading_pane_g1_ParamLimits

0x8cb8,	// (0x00045402) list_single_number_heading_pane_g1

0x5908,	// (0x00042052) list_single_number_heading_pane_g2_ParamLimits

0x5908,	// (0x00042052) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x0004bcf7) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x0004bcf7) list_single_number_heading_pane_g

0x45fb,	// (0x00040d45) list_single_number_heading_pane_t1_ParamLimits

0x45fb,	// (0x00040d45) list_single_number_heading_pane_t1

0x4611,	// (0x00040d5b) list_single_number_heading_pane_t2_ParamLimits

0x4611,	// (0x00040d5b) list_single_number_heading_pane_t2

0x4623,	// (0x00040d6d) list_single_number_heading_pane_t3_ParamLimits

0x4623,	// (0x00040d6d) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x0004bcfc) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x0004bcfc) list_single_number_heading_pane_t

0x4635,	// (0x00040d7f) list_single_graphic_heading_pane_g1_ParamLimits

0x4635,	// (0x00040d7f) list_single_graphic_heading_pane_g1

0x5926,	// (0x00042070) list_single_graphic_heading_pane_g4_ParamLimits

0x5926,	// (0x00042070) list_single_graphic_heading_pane_g4

0x5908,	// (0x00042052) list_single_graphic_heading_pane_g5_ParamLimits

0x5908,	// (0x00042052) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x0004bd03) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x0004bd03) list_single_graphic_heading_pane_g

0x45fb,	// (0x00040d45) list_single_graphic_heading_pane_t1_ParamLimits

0x45fb,	// (0x00040d45) list_single_graphic_heading_pane_t1

0x464d,	// (0x00040d97) list_single_graphic_heading_pane_t2_ParamLimits

0x464d,	// (0x00040d97) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x0004bd0a) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x0004bd0a) list_single_graphic_heading_pane_t

0x4663,	// (0x00040dad) list_single_large_graphic_pane_g1_ParamLimits

0x4663,	// (0x00040dad) list_single_large_graphic_pane_g1

0x466f,	// (0x00040db9) list_single_large_graphic_pane_g2_ParamLimits

0x466f,	// (0x00040db9) list_single_large_graphic_pane_g2

0x467b,	// (0x00040dc5) list_single_large_graphic_pane_g3_ParamLimits

0x467b,	// (0x00040dc5) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x0004bd0f) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x0004bd0f) list_single_large_graphic_pane_g

0xa026,	// (0x00046770) wait_border_pane_g2_copy1

0x4687,	// (0x00040dd1) list_single_large_graphic_pane_g4_cp2

0x468f,	// (0x00040dd9) list_single_large_graphic_pane_t1_ParamLimits

0x468f,	// (0x00040dd9) list_single_large_graphic_pane_t1

0x5937,	// (0x00042081) list_double_pane_g1_ParamLimits

0x5937,	// (0x00042081) list_double_pane_g1

0x5943,	// (0x0004208d) list_double_pane_g2_ParamLimits

0x5943,	// (0x0004208d) list_double_pane_g2

0x0001,

0xf5cc,	// (0x0004bd16) list_double_pane_g_ParamLimits

0xf5cc,	// (0x0004bd16) list_double_pane_g

0x46a5,	// (0x00040def) list_double_pane_t1_ParamLimits

0x46a5,	// (0x00040def) list_double_pane_t1

0x46bb,	// (0x00040e05) list_double_pane_t2_ParamLimits

0x46bb,	// (0x00040e05) list_double_pane_t2

0x0001,

0xf5d1,	// (0x0004bd1b) list_double_pane_t_ParamLimits

0xf5d1,	// (0x0004bd1b) list_double_pane_t

0x46cd,	// (0x00040e17) list_double2_pane_g1_ParamLimits

0x46cd,	// (0x00040e17) list_double2_pane_g1

0x46de,	// (0x00040e28) list_double2_pane_g2_ParamLimits

0x46de,	// (0x00040e28) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x0004bd20) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x0004bd20) list_double2_pane_g

0x46ea,	// (0x00040e34) list_double2_pane_t1_ParamLimits

0x46ea,	// (0x00040e34) list_double2_pane_t1

0x4700,	// (0x00040e4a) list_double2_pane_t2_ParamLimits

0x4700,	// (0x00040e4a) list_double2_pane_t2

0x0001,

0xf5db,	// (0x0004bd25) list_double2_pane_t_ParamLimits

0xf5db,	// (0x0004bd25) list_double2_pane_t

0x5937,	// (0x00042081) list_double_number_pane_g1_ParamLimits

0x5937,	// (0x00042081) list_double_number_pane_g1

0x5943,	// (0x0004208d) list_double_number_pane_g2_ParamLimits

0x5943,	// (0x0004208d) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x0004bd16) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x0004bd16) list_double_number_pane_g

0x4712,	// (0x00040e5c) list_double_number_pane_t1_ParamLimits

0x4712,	// (0x00040e5c) list_double_number_pane_t1

0x4724,	// (0x00040e6e) list_double_number_pane_t2_ParamLimits

0x4724,	// (0x00040e6e) list_double_number_pane_t2

0x473a,	// (0x00040e84) list_double_number_pane_t3_ParamLimits

0x473a,	// (0x00040e84) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x0004bd2a) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x0004bd2a) list_double_number_pane_t

0x474c,	// (0x00040e96) list_double_graphic_pane_g1_ParamLimits

0x474c,	// (0x00040e96) list_double_graphic_pane_g1

0x594f,	// (0x00042099) list_double_graphic_pane_g2_ParamLimits

0x594f,	// (0x00042099) list_double_graphic_pane_g2

0x595e,	// (0x000420a8) list_double_graphic_pane_g3_ParamLimits

0x595e,	// (0x000420a8) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x0004bd31) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x0004bd31) list_double_graphic_pane_g

0x4764,	// (0x00040eae) list_double_graphic_pane_t1_ParamLimits

0x4764,	// (0x00040eae) list_double_graphic_pane_t1

0x477a,	// (0x00040ec4) list_double_graphic_pane_t2_ParamLimits

0x477a,	// (0x00040ec4) list_double_graphic_pane_t2

0x0001,

0xf5f0,	// (0x0004bd3a) list_double_graphic_pane_t_ParamLimits

0xf5f0,	// (0x0004bd3a) list_double_graphic_pane_t

0x478c,	// (0x00040ed6) list_double2_graphic_pane_g1_ParamLimits

0x478c,	// (0x00040ed6) list_double2_graphic_pane_g1

0x84b8,	// (0x00044c02) list_double2_graphic_pane_g2_ParamLimits

0x84b8,	// (0x00044c02) list_double2_graphic_pane_g2

0x596a,	// (0x000420b4) list_double2_graphic_pane_g3_ParamLimits

0x596a,	// (0x000420b4) list_double2_graphic_pane_g3

0x0002,

0xf5f5,	// (0x0004bd3f) list_double2_graphic_pane_g_ParamLimits

0xf5f5,	// (0x0004bd3f) list_double2_graphic_pane_g

0x4798,	// (0x00040ee2) list_double2_graphic_pane_t1_ParamLimits

0x4798,	// (0x00040ee2) list_double2_graphic_pane_t1

0x47ae,	// (0x00040ef8) list_double2_graphic_pane_t2_ParamLimits

0x47ae,	// (0x00040ef8) list_double2_graphic_pane_t2

0x0001,

0xf5fc,	// (0x0004bd46) list_double2_graphic_pane_t_ParamLimits

0xf5fc,	// (0x0004bd46) list_double2_graphic_pane_t

0x47c0,	// (0x00040f0a) list_double_large_graphic_pane_g1_ParamLimits

0x47c0,	// (0x00040f0a) list_double_large_graphic_pane_g1

0x47d3,	// (0x00040f1d) list_double_large_graphic_pane_g2_ParamLimits

0x47d3,	// (0x00040f1d) list_double_large_graphic_pane_g2

0x5943,	// (0x0004208d) list_double_large_graphic_pane_g3_ParamLimits

0x5943,	// (0x0004208d) list_double_large_graphic_pane_g3

0x47e9,	// (0x00040f33) list_double_large_graphic_pane_g4_ParamLimits

0x47e9,	// (0x00040f33) list_double_large_graphic_pane_g4

0x0004,

0xf601,	// (0x0004bd4b) list_double_large_graphic_pane_g_ParamLimits

0xf601,	// (0x0004bd4b) list_double_large_graphic_pane_g

0x47fa,	// (0x00040f44) list_double_large_graphic_pane_t1_ParamLimits

0x47fa,	// (0x00040f44) list_double_large_graphic_pane_t1

0x4813,	// (0x00040f5d) list_double_large_graphic_pane_t2_ParamLimits

0x4813,	// (0x00040f5d) list_double_large_graphic_pane_t2

0x0001,

0xf60c,	// (0x0004bd56) list_double_large_graphic_pane_t_ParamLimits

0xf60c,	// (0x0004bd56) list_double_large_graphic_pane_t

0x4825,	// (0x00040f6f) list_double2_large_graphic_pane_g1_ParamLimits

0x4825,	// (0x00040f6f) list_double2_large_graphic_pane_g1

0x4831,	// (0x00040f7b) list_double2_large_graphic_pane_g2_ParamLimits

0x4831,	// (0x00040f7b) list_double2_large_graphic_pane_g2

0x596a,	// (0x000420b4) list_double2_large_graphic_pane_g3_ParamLimits

0x596a,	// (0x000420b4) list_double2_large_graphic_pane_g3

0x0002,

0xf611,	// (0x0004bd5b) list_double2_large_graphic_pane_g_ParamLimits

0xf611,	// (0x0004bd5b) list_double2_large_graphic_pane_g

0x4842,	// (0x00040f8c) list_double2_large_graphic_pane_t1_ParamLimits

0x4842,	// (0x00040f8c) list_double2_large_graphic_pane_t1

0x4858,	// (0x00040fa2) list_double2_large_graphic_pane_t2_ParamLimits

0x4858,	// (0x00040fa2) list_double2_large_graphic_pane_t2

0x0001,

0xf618,	// (0x0004bd62) list_double2_large_graphic_pane_t_ParamLimits

0xf618,	// (0x0004bd62) list_double2_large_graphic_pane_t

0x486a,	// (0x00040fb4) list_double_heading_pane_g1_ParamLimits

0x486a,	// (0x00040fb4) list_double_heading_pane_g1

0x487b,	// (0x00040fc5) list_double_heading_pane_g2_ParamLimits

0x487b,	// (0x00040fc5) list_double_heading_pane_g2

0x0001,

0xf61d,	// (0x0004bd67) list_double_heading_pane_g_ParamLimits

0xf61d,	// (0x0004bd67) list_double_heading_pane_g

0x4887,	// (0x00040fd1) list_double_heading_pane_t1_ParamLimits

0x4887,	// (0x00040fd1) list_double_heading_pane_t1

0x4700,	// (0x00040e4a) list_double_heading_pane_t2_ParamLimits

0x4700,	// (0x00040e4a) list_double_heading_pane_t2

0x0001,

0xf622,	// (0x0004bd6c) list_double_heading_pane_t_ParamLimits

0xf622,	// (0x0004bd6c) list_double_heading_pane_t

0x489d,	// (0x00040fe7) list_double_graphic_heading_pane_g1_ParamLimits

0x489d,	// (0x00040fe7) list_double_graphic_heading_pane_g1

0x486a,	// (0x00040fb4) list_double_graphic_heading_pane_g2_ParamLimits

0x486a,	// (0x00040fb4) list_double_graphic_heading_pane_g2

0x487b,	// (0x00040fc5) list_double_graphic_heading_pane_g3_ParamLimits

0x487b,	// (0x00040fc5) list_double_graphic_heading_pane_g3

0x0002,

0xf627,	// (0x0004bd71) list_double_graphic_heading_pane_g_ParamLimits

0xf627,	// (0x0004bd71) list_double_graphic_heading_pane_g

0x48a9,	// (0x00040ff3) list_double_graphic_heading_pane_t1_ParamLimits

0x48a9,	// (0x00040ff3) list_double_graphic_heading_pane_t1

0x47ae,	// (0x00040ef8) list_double_graphic_heading_pane_t2_ParamLimits

0x47ae,	// (0x00040ef8) list_double_graphic_heading_pane_t2

0x0001,

0xf62e,	// (0x0004bd78) list_double_graphic_heading_pane_t_ParamLimits

0xf62e,	// (0x0004bd78) list_double_graphic_heading_pane_t

0x48bf,	// (0x00041009) list_double_time_pane_g1_ParamLimits

0x48bf,	// (0x00041009) list_double_time_pane_g1

0x48d0,	// (0x0004101a) list_double_time_pane_g2_ParamLimits

0x48d0,	// (0x0004101a) list_double_time_pane_g2

0x0001,

0xf633,	// (0x0004bd7d) list_double_time_pane_g_ParamLimits

0xf633,	// (0x0004bd7d) list_double_time_pane_g

0x48dc,	// (0x00041026) list_double_time_pane_t1_ParamLimits

0x48dc,	// (0x00041026) list_double_time_pane_t1

0x48f2,	// (0x0004103c) list_double_time_pane_t2_ParamLimits

0x48f2,	// (0x0004103c) list_double_time_pane_t2

0x4904,	// (0x0004104e) list_double_time_pane_t3_ParamLimits

0x4904,	// (0x0004104e) list_double_time_pane_t3

0x4916,	// (0x00041060) list_double_time_pane_t4_ParamLimits

0x4916,	// (0x00041060) list_double_time_pane_t4

0x0003,

0xf638,	// (0x0004bd82) list_double_time_pane_t_ParamLimits

0xf638,	// (0x0004bd82) list_double_time_pane_t

0x4928,	// (0x00041072) list_setting_pane_g1_ParamLimits

0x4928,	// (0x00041072) list_setting_pane_g1

0x4934,	// (0x0004107e) list_setting_pane_g2_ParamLimits

0x4934,	// (0x0004107e) list_setting_pane_g2

0x0001,

0xf641,	// (0x0004bd8b) list_setting_pane_g_ParamLimits

0xf641,	// (0x0004bd8b) list_setting_pane_g

0x4940,	// (0x0004108a) list_setting_pane_t1_ParamLimits

0x4940,	// (0x0004108a) list_setting_pane_t1

0x495a,	// (0x000410a4) list_setting_pane_t2_ParamLimits

0x495a,	// (0x000410a4) list_setting_pane_t2

0x0002,

0xf646,	// (0x0004bd90) list_setting_pane_t_ParamLimits

0xf646,	// (0x0004bd90) list_setting_pane_t

0x4999,	// (0x000410e3) set_value_pane_cp_ParamLimits

0x4999,	// (0x000410e3) set_value_pane_cp

0x49a5,	// (0x000410ef) list_setting_number_pane_g1_ParamLimits

0x49a5,	// (0x000410ef) list_setting_number_pane_g1

0x49b1,	// (0x000410fb) list_setting_number_pane_g2_ParamLimits

0x49b1,	// (0x000410fb) list_setting_number_pane_g2

0x0001,

0xf64d,	// (0x0004bd97) list_setting_number_pane_g_ParamLimits

0xf64d,	// (0x0004bd97) list_setting_number_pane_g

0x49bd,	// (0x00041107) list_setting_number_pane_t1_ParamLimits

0x49bd,	// (0x00041107) list_setting_number_pane_t1

0x49d6,	// (0x00041120) list_setting_number_pane_t2_ParamLimits

0x49d6,	// (0x00041120) list_setting_number_pane_t2

0x49f0,	// (0x0004113a) list_setting_number_pane_t3_ParamLimits

0x49f0,	// (0x0004113a) list_setting_number_pane_t3

0x0003,

0xf652,	// (0x0004bd9c) list_setting_number_pane_t_ParamLimits

0xf652,	// (0x0004bd9c) list_setting_number_pane_t

0x4999,	// (0x000410e3) set_value_pane_ParamLimits

0x4999,	// (0x000410e3) set_value_pane

0x84c4,	// (0x00044c0e) bg_set_opt_pane_ParamLimits

0x84c4,	// (0x00044c0e) bg_set_opt_pane

0x4a33,	// (0x0004117d) set_value_pane_t1

0x84e5,	// (0x00044c2f) slider_set_pane_cp3

0x84ee,	// (0x00044c38) volume_small_pane_cp

0x84f7,	// (0x00044c41) list_form_gen_pane

0x8500,	// (0x00044c4a) scroll_pane_cp8

0x4a49,	// (0x00041193) form_field_data_pane_ParamLimits

0x4a49,	// (0x00041193) form_field_data_pane

0x4a6d,	// (0x000411b7) form_field_data_wide_pane_ParamLimits

0x4a6d,	// (0x000411b7) form_field_data_wide_pane

0x4a90,	// (0x000411da) form_field_popup_pane_ParamLimits

0x4a90,	// (0x000411da) form_field_popup_pane

0x4ab0,	// (0x000411fa) form_field_popup_wide_pane_ParamLimits

0x4ab0,	// (0x000411fa) form_field_popup_wide_pane

0x4acf,	// (0x00041219) form_field_slider_pane_ParamLimits

0x4acf,	// (0x00041219) form_field_slider_pane

0x4ae2,	// (0x0004122c) form_field_slider_wide_pane_ParamLimits

0x4ae2,	// (0x0004122c) form_field_slider_wide_pane

0x8511,	// (0x00044c5b) data_form_pane

0x4aff,	// (0x00041249) form_field_data_pane_t1

0x851d,	// (0x00044c67) input_focus_pane

0x4b17,	// (0x00041261) data_form_wide_pane

0x4b34,	// (0x0004127e) form_field_data_wide_pane_t1

0x8282,	// (0x000449cc) input_focus_pane_cp6

0x4b56,	// (0x000412a0) form_field_popup_pane_t1

0x851d,	// (0x00044c67) input_focus_pane_cp7

0x853f,	// (0x00044c89) list_form_pane

0x4b76,	// (0x000412c0) form_field_popup_wide_pane_t1

0x851d,	// (0x00044c67) input_focus_pane_cp8

0x854b,	// (0x00044c95) list_form_wide_pane

0x4b93,	// (0x000412dd) form_field_slider_pane_t1_ParamLimits

0x4b93,	// (0x000412dd) form_field_slider_pane_t1

0x4ba9,	// (0x000412f3) form_field_slider_pane_t2_ParamLimits

0x4ba9,	// (0x000412f3) form_field_slider_pane_t2

0x0001,

0xf662,	// (0x0004bdac) form_field_slider_pane_t_ParamLimits

0xf662,	// (0x0004bdac) form_field_slider_pane_t

0x7eff,	// (0x00044649) input_focus_pane_cp9_ParamLimits

0x7eff,	// (0x00044649) input_focus_pane_cp9

0x4bbe,	// (0x00041308) slider_cont_pane_ParamLimits

0x4bbe,	// (0x00041308) slider_cont_pane

0x8557,	// (0x00044ca1) form_field_slider_wide_pane_t1_ParamLimits

0x8557,	// (0x00044ca1) form_field_slider_wide_pane_t1

0x4bd2,	// (0x0004131c) form_field_slider_wide_pane_t2_ParamLimits

0x4bd2,	// (0x0004131c) form_field_slider_wide_pane_t2

0x0001,

0xf667,	// (0x0004bdb1) form_field_slider_wide_pane_t_ParamLimits

0xf667,	// (0x0004bdb1) form_field_slider_wide_pane_t

0x7eff,	// (0x00044649) input_focus_pane_cp10_ParamLimits

0x7eff,	// (0x00044649) input_focus_pane_cp10

0x4be4,	// (0x0004132e) slider_cont_pane_cp1_ParamLimits

0x4be4,	// (0x0004132e) slider_cont_pane_cp1

0x4bf8,	// (0x00041342) slider_form_pane_cp

0x8569,	// (0x00044cb3) input_focus_pane_g1

0x8571,	// (0x00044cbb) input_focus_pane_g2

0x8579,	// (0x00044cc3) input_focus_pane_g3

0x8581,	// (0x00044ccb) input_focus_pane_g4

0x8589,	// (0x00044cd3) input_focus_pane_g5

0x8591,	// (0x00044cdb) input_focus_pane_g6

0x8599,	// (0x00044ce3) input_focus_pane_g7

0x85a1,	// (0x00044ceb) input_focus_pane_g8

0x85a9,	// (0x00044cf3) input_focus_pane_g9

0x25ae,	// (0x0003ecf8) input_focus_pane_g10

0x0009,

0xf66c,	// (0x0004bdb6) input_focus_pane_g

0xa02f,	// (0x00046779) wait_border_pane_g3_copy1

0x4c00,	// (0x0004134a) data_form_pane_t1

0x25ae,	// (0x0003ecf8) wait_anim_pane_g1_copy1

0x4e97,	// (0x000415e1) data_form_wide_pane_t1

0x4c1b,	// (0x00041365) list_form_graphic_pane_cp_ParamLimits

0x4c1b,	// (0x00041365) list_form_graphic_pane_cp

0xaf5b,	// (0x000476a5) slider_form_pane_g1

0xaf64,	// (0x000476ae) slider_form_pane_g2

0x0006,

0xf96a,	// (0x0004c0b4) slider_form_pane_g

0x4c34,	// (0x0004137e) list_form_graphic_pane_ParamLimits

0x4c34,	// (0x0004137e) list_form_graphic_pane

0x4c50,	// (0x0004139a) list_form_graphic_pane_g1

0x4c58,	// (0x000413a2) list_form_graphic_pane_t1_ParamLimits

0x4c58,	// (0x000413a2) list_form_graphic_pane_t1

0x7c84,	// (0x000443ce) list_highlight_pane_cp5_ParamLimits

0x7c84,	// (0x000443ce) list_highlight_pane_cp5

0x4c6d,	// (0x000413b7) find_pane_g1

0x85b1,	// (0x00044cfb) input_find_pane

0x4c76,	// (0x000413c0) input_find_pane_g1_ParamLimits

0x4c76,	// (0x000413c0) input_find_pane_g1

0x4c82,	// (0x000413cc) input_find_pane_t1_ParamLimits

0x4c82,	// (0x000413cc) input_find_pane_t1

0x4c97,	// (0x000413e1) input_find_pane_t2_ParamLimits

0x4c97,	// (0x000413e1) input_find_pane_t2

0x0001,

0xf681,	// (0x0004bdcb) input_find_pane_t_ParamLimits

0xf681,	// (0x0004bdcb) input_find_pane_t

0x85ba,	// (0x00044d04) input_focus_pane_cp5_ParamLimits

0x85ba,	// (0x00044d04) input_focus_pane_cp5

0x85d9,	// (0x00044d23) bg_popup_window_pane_cp2_ParamLimits

0x85d9,	// (0x00044d23) bg_popup_window_pane_cp2

0x85e6,	// (0x00044d30) listscroll_menu_pane_ParamLimits

0x85e6,	// (0x00044d30) listscroll_menu_pane

0x85f2,	// (0x00044d3c) popup_submenu_window_ParamLimits

0x85f2,	// (0x00044d3c) popup_submenu_window

0x861e,	// (0x00044d68) find_popup_pane_g1

0x8626,	// (0x00044d70) input_popup_find_pane_cp

0x8630,	// (0x00044d7a) input_focus_pane_cp4_ParamLimits

0x8630,	// (0x00044d7a) input_focus_pane_cp4

0x864a,	// (0x00044d94) input_popup_find_pane_t1_ParamLimits

0x864a,	// (0x00044d94) input_popup_find_pane_t1

0x7ba4,	// (0x000442ee) bg_popup_sub_pane_cp

0x8678,	// (0x00044dc2) listscroll_popup_sub_pane

0x8680,	// (0x00044dca) list_submenu_pane_ParamLimits

0x8680,	// (0x00044dca) list_submenu_pane

0x8691,	// (0x00044ddb) scroll_pane_cp4

0x8699,	// (0x00044de3) list_single_popup_submenu_pane_ParamLimits

0x8699,	// (0x00044de3) list_single_popup_submenu_pane

0x86ad,	// (0x00044df7) list_single_popup_submenu_pane_g1

0x86b5,	// (0x00044dff) list_single_popup_submenu_pane_t1_ParamLimits

0x86b5,	// (0x00044dff) list_single_popup_submenu_pane_t1

0x7c84,	// (0x000443ce) bg_active_tab_pane_cp1_ParamLimits

0x7c84,	// (0x000443ce) bg_active_tab_pane_cp1

0x86ca,	// (0x00044e14) tabs_2_active_pane_g1

0x86d2,	// (0x00044e1c) tabs_2_active_pane_t1

0x7c84,	// (0x000443ce) bg_passive_tab_pane_cp1_ParamLimits

0x7c84,	// (0x000443ce) bg_passive_tab_pane_cp1

0x86ca,	// (0x00044e14) tabs_2_passive_pane_g1

0x86d2,	// (0x00044e1c) tabs_2_passive_pane_t1

0x86e4,	// (0x00044e2e) bg_active_tab_pane_cp4

0x86f2,	// (0x00044e3c) tabs_2_long_active_pane_t1

0x8705,	// (0x00044e4f) bg_passive_tab_pane_cp4

0x65bc,	// (0x00042d06) list_single_midp_graphic_pane_g4_ParamLimits

0x86e4,	// (0x00044e2e) bg_active_tab_pane_cp5

0x8711,	// (0x00044e5b) tabs_3_long_active_pane_t1

0x8705,	// (0x00044e4f) bg_passive_tab_pane_cp5

0x65bc,	// (0x00042d06) list_single_midp_graphic_pane_g4

0x7c84,	// (0x000443ce) bg_popup_window_pane_cp13_ParamLimits

0x7c84,	// (0x000443ce) bg_popup_window_pane_cp13

0x872c,	// (0x00044e76) listscroll_popup_fast_pane_ParamLimits

0x872c,	// (0x00044e76) listscroll_popup_fast_pane

0x873b,	// (0x00044e85) grid_popup_fast_pane_ParamLimits

0x873b,	// (0x00044e85) grid_popup_fast_pane

0x874d,	// (0x00044e97) scroll_pane_cp9_ParamLimits

0x874d,	// (0x00044e97) scroll_pane_cp9

0xc878,	// (0x00048fc2) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc878,	// (0x00048fc2) list_single_graphic_hl_pane_t1_cp2

0x8771,	// (0x00044ebb) input_focus_pane_cp20_ParamLimits

0x8771,	// (0x00044ebb) input_focus_pane_cp20

0x877f,	// (0x00044ec9) query_popup_data_pane_t1_ParamLimits

0x877f,	// (0x00044ec9) query_popup_data_pane_t1

0x8792,	// (0x00044edc) query_popup_data_pane_t2_ParamLimits

0x8792,	// (0x00044edc) query_popup_data_pane_t2

0x87d8,	// (0x00044f22) query_popup_data_pane_t3_ParamLimits

0x87d8,	// (0x00044f22) query_popup_data_pane_t3

0x8819,	// (0x00044f63) query_popup_data_pane_t4_ParamLimits

0x8819,	// (0x00044f63) query_popup_data_pane_t4

0x8855,	// (0x00044f9f) query_popup_data_pane_t5_ParamLimits

0x8855,	// (0x00044f9f) query_popup_data_pane_t5

0x0004,

0xf686,	// (0x0004bdd0) query_popup_data_pane_t_ParamLimits

0xf686,	// (0x0004bdd0) query_popup_data_pane_t

0x8569,	// (0x00044cb3) bg_set_opt_pane_g1

0x8571,	// (0x00044cbb) bg_set_opt_pane_g2

0x8579,	// (0x00044cc3) bg_set_opt_pane_g3

0x8581,	// (0x00044ccb) bg_set_opt_pane_g4

0x8589,	// (0x00044cd3) bg_set_opt_pane_g5

0x8591,	// (0x00044cdb) bg_set_opt_pane_g6

0x8599,	// (0x00044ce3) bg_set_opt_pane_g7

0x85a1,	// (0x00044ceb) bg_set_opt_pane_g8

0x85a9,	// (0x00044cf3) bg_set_opt_pane_g9

0x0008,

0xf691,	// (0x0004bddb) bg_set_opt_pane_g

0x5c44,	// (0x0004238e) control_top_pane_stacon_ParamLimits

0x5c44,	// (0x0004238e) control_top_pane_stacon

0x5c97,	// (0x000423e1) signal_pane_stacon_ParamLimits

0x5c97,	// (0x000423e1) signal_pane_stacon

0x8e53,	// (0x0004559d) stacon_top_pane_g1_ParamLimits

0x8e53,	// (0x0004559d) stacon_top_pane_g1

0x5cbc,	// (0x00042406) title_pane_stacon_ParamLimits

0x5cbc,	// (0x00042406) title_pane_stacon

0x5ce6,	// (0x00042430) uni_indicator_pane_stacon_ParamLimits

0x5ce6,	// (0x00042430) uni_indicator_pane_stacon

0x5cfb,	// (0x00042445) battery_pane_stacon_ParamLimits

0x5cfb,	// (0x00042445) battery_pane_stacon

0x5d3f,	// (0x00042489) control_bottom_pane_stacon_ParamLimits

0x5d3f,	// (0x00042489) control_bottom_pane_stacon

0x5d62,	// (0x000424ac) navi_pane_stacon_ParamLimits

0x5d62,	// (0x000424ac) navi_pane_stacon

0x8e75,	// (0x000455bf) stacon_bottom_pane_g1_ParamLimits

0x8e75,	// (0x000455bf) stacon_bottom_pane_g1

0x598b,	// (0x000420d5) aid_levels_signal_lsc_ParamLimits

0x598b,	// (0x000420d5) aid_levels_signal_lsc

0x59a1,	// (0x000420eb) signal_pane_stacon_g1_ParamLimits

0x59a1,	// (0x000420eb) signal_pane_stacon_g1

0x59b5,	// (0x000420ff) signal_pane_stacon_g2_ParamLimits

0x59b5,	// (0x000420ff) signal_pane_stacon_g2

0x0001,

0xf6a4,	// (0x0004bdee) signal_pane_stacon_g_ParamLimits

0xf6a4,	// (0x0004bdee) signal_pane_stacon_g

0x59ea,	// (0x00042134) title_pane_stacon_t1_ParamLimits

0x59ea,	// (0x00042134) title_pane_stacon_t1

0x8899,	// (0x00044fe3) uni_indicator_pane_stacon_g1

0x88a3,	// (0x00044fed) uni_indicator_pane_stacon_g2

0x88ad,	// (0x00044ff7) uni_indicator_pane_stacon_g3

0x88b7,	// (0x00045001) uni_indicator_pane_stacon_g4

0x0003,

0xf6b0,	// (0x0004bdfa) uni_indicator_pane_stacon_g

0x5a0f,	// (0x00042159) control_top_pane_stacon_g1

0x5a17,	// (0x00042161) control_top_pane_stacon_t1_ParamLimits

0x5a17,	// (0x00042161) control_top_pane_stacon_t1

0x5a4e,	// (0x00042198) aid_levels_battery_lsc_ParamLimits

0x5a4e,	// (0x00042198) aid_levels_battery_lsc

0x5a65,	// (0x000421af) battery_pane_stacon_g1_ParamLimits

0x5a65,	// (0x000421af) battery_pane_stacon_g1

0x5a78,	// (0x000421c2) battery_pane_stacon_g2_ParamLimits

0x5a78,	// (0x000421c2) battery_pane_stacon_g2

0x0001,

0xf6b9,	// (0x0004be03) battery_pane_stacon_g_ParamLimits

0xf6b9,	// (0x0004be03) battery_pane_stacon_g

0x5ab6,	// (0x00042200) navi_icon_pane_stacon

0x5aca,	// (0x00042214) navi_navi_pane_stacon

0x5ab6,	// (0x00042200) navi_text_pane_stacon

0x5a0f,	// (0x00042159) control_bottom_pane_stacon_g1

0x5ade,	// (0x00042228) control_bottom_pane_stacon_t1_ParamLimits

0x5ade,	// (0x00042228) control_bottom_pane_stacon_t1

0x88db,	// (0x00045025) grid_app_pane_ParamLimits

0x88db,	// (0x00045025) grid_app_pane

0x88fd,	// (0x00045047) scroll_pane_cp15_ParamLimits

0x88fd,	// (0x00045047) scroll_pane_cp15

0x8910,	// (0x0004505a) cell_app_pane_ParamLimits

0x8910,	// (0x0004505a) cell_app_pane

0x8938,	// (0x00045082) cell_app_pane_g1_ParamLimits

0x8938,	// (0x00045082) cell_app_pane_g1

0x895c,	// (0x000450a6) cell_app_pane_g2_ParamLimits

0x895c,	// (0x000450a6) cell_app_pane_g2

0x0001,

0xf6be,	// (0x0004be08) cell_app_pane_g_ParamLimits

0xf6be,	// (0x0004be08) cell_app_pane_g

0x8968,	// (0x000450b2) cell_app_pane_t1_ParamLimits

0x8968,	// (0x000450b2) cell_app_pane_t1

0x897f,	// (0x000450c9) grid_highlight_pane_ParamLimits

0x897f,	// (0x000450c9) grid_highlight_pane

0x8569,	// (0x00044cb3) cell_highlight_pane_g1

0x8571,	// (0x00044cbb) cell_highlight_pane_g2

0x8579,	// (0x00044cc3) cell_highlight_pane_g3

0x8581,	// (0x00044ccb) cell_highlight_pane_g4

0x8589,	// (0x00044cd3) cell_highlight_pane_g5

0x8591,	// (0x00044cdb) cell_highlight_pane_g6

0x8599,	// (0x00044ce3) cell_highlight_pane_g7

0x85a1,	// (0x00044ceb) cell_highlight_pane_g8

0x85a9,	// (0x00044cf3) cell_highlight_pane_g9

0x25ae,	// (0x0003ecf8) cell_highlight_pane_g10

0x0009,

0xf66c,	// (0x0004bdb6) cell_highlight_pane_g

0x8990,	// (0x000450da) bg_scroll_pane

0x5b28,	// (0x00042272) scroll_handle_pane

0x89d7,	// (0x00045121) scroll_bg_pane_g1

0x89ec,	// (0x00045136) scroll_bg_pane_g2

0x8a04,	// (0x0004514e) scroll_bg_pane_g3

0x0002,

0xf6c3,	// (0x0004be0d) scroll_bg_pane_g

0x8a19,	// (0x00045163) scroll_handle_focus_pane_ParamLimits

0x8a19,	// (0x00045163) scroll_handle_focus_pane

0x89d7,	// (0x00045121) scroll_handle_pane_g1

0x8a26,	// (0x00045170) scroll_handle_pane_g2

0x8a04,	// (0x0004514e) scroll_handle_pane_g3

0x0002,

0xf6ca,	// (0x0004be14) scroll_handle_pane_g

0x8630,	// (0x00044d7a) bg_popup_sub_pane_cp21_ParamLimits

0x8630,	// (0x00044d7a) bg_popup_sub_pane_cp21

0x8a3a,	// (0x00045184) popup_fep_japan_predictive_window_t1_ParamLimits

0x8a3a,	// (0x00045184) popup_fep_japan_predictive_window_t1

0x8a54,	// (0x0004519e) popup_fep_japan_predictive_window_t2_ParamLimits

0x8a54,	// (0x0004519e) popup_fep_japan_predictive_window_t2

0x8a87,	// (0x000451d1) popup_fep_japan_predictive_window_t3_ParamLimits

0x8a87,	// (0x000451d1) popup_fep_japan_predictive_window_t3

0x0002,

0xf6d1,	// (0x0004be1b) popup_fep_japan_predictive_window_t_ParamLimits

0xf6d1,	// (0x0004be1b) popup_fep_japan_predictive_window_t

0x7ba4,	// (0x000442ee) bg_popup_sub_pane_cp23

0x8abe,	// (0x00045208) listscroll_japin_cand_pane

0x8ac6,	// (0x00045210) popup_fep_japan_candidate_window_t1

0x8ad4,	// (0x0004521e) candidate_pane_ParamLimits

0x8ad4,	// (0x0004521e) candidate_pane

0x8ae6,	// (0x00045230) scroll_pane_cp30

0x8aee,	// (0x00045238) list_single_popup_jap_candidate_pane_ParamLimits

0x8aee,	// (0x00045238) list_single_popup_jap_candidate_pane

0x7ba4,	// (0x000442ee) list_highlight_pane_cp30

0x8b03,	// (0x0004524d) list_single_popup_jap_candidate_pane_t1

0x8b12,	// (0x0004525c) level_1_signal

0x8b24,	// (0x0004526e) level_2_signal

0x8b37,	// (0x00045281) level_3_signal

0x8b4a,	// (0x00045294) level_4_signal

0x8b5d,	// (0x000452a7) level_5_signal

0x8b70,	// (0x000452ba) level_6_signal

0x8b83,	// (0x000452cd) level_7_signal

0x8b12,	// (0x0004525c) level_1_battery

0x8b24,	// (0x0004526e) level_2_battery

0x8b37,	// (0x00045281) level_3_battery

0x8b4a,	// (0x00045294) level_4_battery

0x8b5d,	// (0x000452a7) level_5_battery

0x8b70,	// (0x000452ba) level_6_battery

0x8b83,	// (0x000452cd) level_7_battery

0x8bae,	// (0x000452f8) list_menu_pane_ParamLimits

0x8bae,	// (0x000452f8) list_menu_pane

0x8bc4,	// (0x0004530e) scroll_pane_cp25_ParamLimits

0x8bc4,	// (0x0004530e) scroll_pane_cp25

0x8bdd,	// (0x00045327) list_double2_graphic_pane_cp2_ParamLimits

0x8bdd,	// (0x00045327) list_double2_graphic_pane_cp2

0x8bdd,	// (0x00045327) list_double2_large_graphic_pane_cp2_ParamLimits

0x8bdd,	// (0x00045327) list_double2_large_graphic_pane_cp2

0x8bdd,	// (0x00045327) list_double2_pane_cp2_ParamLimits

0x8bdd,	// (0x00045327) list_double2_pane_cp2

0x8bdd,	// (0x00045327) list_double_graphic_pane_cp2_ParamLimits

0x8bdd,	// (0x00045327) list_double_graphic_pane_cp2

0x8bdd,	// (0x00045327) list_double_large_graphic_pane_cp2_ParamLimits

0x8bdd,	// (0x00045327) list_double_large_graphic_pane_cp2

0x8bdd,	// (0x00045327) list_double_number_pane_cp2_ParamLimits

0x8bdd,	// (0x00045327) list_double_number_pane_cp2

0x8bdd,	// (0x00045327) list_double_pane_cp2_ParamLimits

0x8bdd,	// (0x00045327) list_double_pane_cp2

0x8c01,	// (0x0004534b) list_single_2graphic_pane_cp2_ParamLimits

0x8c01,	// (0x0004534b) list_single_2graphic_pane_cp2

0x8c01,	// (0x0004534b) list_single_graphic_heading_pane_cp2_ParamLimits

0x8c01,	// (0x0004534b) list_single_graphic_heading_pane_cp2

0x8c01,	// (0x0004534b) list_single_graphic_pane_cp2_ParamLimits

0x8c01,	// (0x0004534b) list_single_graphic_pane_cp2

0x8c01,	// (0x0004534b) list_single_heading_pane_cp2_ParamLimits

0x8c01,	// (0x0004534b) list_single_heading_pane_cp2

0x8c1a,	// (0x00045364) list_single_large_graphic_pane_cp2_ParamLimits

0x8c1a,	// (0x00045364) list_single_large_graphic_pane_cp2

0x8c01,	// (0x0004534b) list_single_number_heading_pane_cp2_ParamLimits

0x8c01,	// (0x0004534b) list_single_number_heading_pane_cp2

0x8c01,	// (0x0004534b) list_single_number_pane_cp2_ParamLimits

0x8c01,	// (0x0004534b) list_single_number_pane_cp2

0x8c01,	// (0x0004534b) list_single_pane_cp2_ParamLimits

0x8c01,	// (0x0004534b) list_single_pane_cp2

0x8c96,	// (0x000453e0) bg_popup_sub_pane_cp22

0x5bda,	// (0x00042324) popup_side_volume_key_window_g1

0x5c04,	// (0x0004234e) popup_side_volume_key_window_t1

0x5c20,	// (0x0004236a) volume_small_pane_cp1

0x7eff,	// (0x00044649) bg_popup_sub_pane_cp24_ParamLimits

0x7eff,	// (0x00044649) bg_popup_sub_pane_cp24

0x8cac,	// (0x000453f6) fep_china_uni_candidate_pane_ParamLimits

0x8cac,	// (0x000453f6) fep_china_uni_candidate_pane

0x8ccc,	// (0x00045416) fep_china_uni_entry_pane

0x8cdc,	// (0x00045426) popup_fep_china_uni_window_g1

0x8cf8,	// (0x00045442) fep_china_uni_entry_pane_g1

0x8d00,	// (0x0004544a) fep_china_uni_entry_pane_g2

0x0001,

0xf702,	// (0x0004be4c) fep_china_uni_entry_pane_g

0x8d08,	// (0x00045452) fep_entry_item_pane

0x8d12,	// (0x0004545c) fep_candidate_item_pane

0x8d1a,	// (0x00045464) fep_china_uni_candidate_pane_g1

0x8d22,	// (0x0004546c) fep_china_uni_candidate_pane_g2

0x8d2a,	// (0x00045474) fep_china_uni_candidate_pane_g3

0x8d32,	// (0x0004547c) fep_china_uni_candidate_pane_g4

0x0003,

0xf707,	// (0x0004be51) fep_china_uni_candidate_pane_g

0x25ae,	// (0x0003ecf8) fep_entry_item_pane_g1

0x8d3a,	// (0x00045484) fep_entry_item_pane_t1_ParamLimits

0x8d3a,	// (0x00045484) fep_entry_item_pane_t1

0x8d50,	// (0x0004549a) fep_candidate_item_pane_t1_ParamLimits

0x8d50,	// (0x0004549a) fep_candidate_item_pane_t1

0x8d65,	// (0x000454af) fep_candidate_item_pane_t2_ParamLimits

0x8d65,	// (0x000454af) fep_candidate_item_pane_t2

0x0001,

0xf710,	// (0x0004be5a) fep_candidate_item_pane_t_ParamLimits

0xf710,	// (0x0004be5a) fep_candidate_item_pane_t

0x7c84,	// (0x000443ce) list_highlight_pane_cp31_ParamLimits

0x7c84,	// (0x000443ce) list_highlight_pane_cp31

0x8d77,	// (0x000454c1) level_1_signal_lsc

0x8d80,	// (0x000454ca) level_2_signal_lsc

0x8d89,	// (0x000454d3) level_3_signal_lsc

0x8d92,	// (0x000454dc) level_4_signal_lsc

0x8d9b,	// (0x000454e5) level_5_signal_lsc

0x8da4,	// (0x000454ee) level_6_signal_lsc

0x8dad,	// (0x000454f7) level_7_signal_lsc

0x8dad,	// (0x000454f7) level_1_battery_lsc

0x8db6,	// (0x00045500) level_2_battery_lsc

0x8dbf,	// (0x00045509) level_3_battery_lsc

0x8dc8,	// (0x00045512) level_4_battery_lsc

0x8dd1,	// (0x0004551b) level_5_battery_lsc

0x8dda,	// (0x00045524) level_6_battery_lsc

0x8d77,	// (0x000454c1) level_7_battery_lsc

0x8de3,	// (0x0004552d) scroll_handle_focus_pane_g1

0x8dec,	// (0x00045536) scroll_handle_focus_pane_g2

0x8df5,	// (0x0004553f) scroll_handle_focus_pane_g3

0x0002,

0xf715,	// (0x0004be5f) scroll_handle_focus_pane_g

0x4cac,	// (0x000413f6) list_single_2graphic_pane_g1_ParamLimits

0x4cac,	// (0x000413f6) list_single_2graphic_pane_g1

0x5926,	// (0x00042070) list_single_2graphic_pane_g2_ParamLimits

0x5926,	// (0x00042070) list_single_2graphic_pane_g2

0x5908,	// (0x00042052) list_single_2graphic_pane_g3_ParamLimits

0x5908,	// (0x00042052) list_single_2graphic_pane_g3

0x4cb8,	// (0x00041402) list_single_2graphic_pane_g4_ParamLimits

0x4cb8,	// (0x00041402) list_single_2graphic_pane_g4

0x0003,

0xf71c,	// (0x0004be66) list_single_2graphic_pane_g_ParamLimits

0xf71c,	// (0x0004be66) list_single_2graphic_pane_g

0x4cc4,	// (0x0004140e) list_single_2graphic_pane_t1_ParamLimits

0x4cc4,	// (0x0004140e) list_single_2graphic_pane_t1

0x5c28,	// (0x00042372) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5c28,	// (0x00042372) list_double2_graphic_large_graphic_pane_g1

0x4831,	// (0x00040f7b) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4831,	// (0x00040f7b) list_double2_graphic_large_graphic_pane_g2

0x596a,	// (0x000420b4) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x596a,	// (0x000420b4) list_double2_graphic_large_graphic_pane_g3

0x5c38,	// (0x00042382) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5c38,	// (0x00042382) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf725,	// (0x0004be6f) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf725,	// (0x0004be6f) list_double2_graphic_large_graphic_pane_g

0x4cf2,	// (0x0004143c) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x4cf2,	// (0x0004143c) list_double2_graphic_large_graphic_pane_t1

0x4d08,	// (0x00041452) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x4d08,	// (0x00041452) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf72e,	// (0x0004be78) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf72e,	// (0x0004be78) list_double2_graphic_large_graphic_pane_t

0x8f40,	// (0x0004568a) popup_fast_swap_window_ParamLimits

0x8f40,	// (0x0004568a) popup_fast_swap_window

0x8f5c,	// (0x000456a6) popup_side_volume_key_window

0x8f78,	// (0x000456c2) stacon_top_pane

0x8f82,	// (0x000456cc) status_pane_ParamLimits

0x8f82,	// (0x000456cc) status_pane

0x8f90,	// (0x000456da) status_small_pane

0x7ba4,	// (0x000442ee) control_pane

0x7ba4,	// (0x000442ee) stacon_bottom_pane

0x8500,	// (0x00044c4a) scroll_pane_cp121

0x84f7,	// (0x00044c41) set_content_pane

0x8dfe,	// (0x00045548) bg_active_tab_pane_g1_cp1

0x8e07,	// (0x00045551) bg_active_tab_pane_g2_cp1

0x8e10,	// (0x0004555a) bg_active_tab_pane_g3_cp1

0x8dfe,	// (0x00045548) bg_passive_tab_pane_g1_cp1

0x8e07,	// (0x00045551) bg_passive_tab_pane_g2_cp1

0x8e10,	// (0x0004555a) bg_passive_tab_pane_g3_cp1

0x8e19,	// (0x00045563) bg_active_tab_pane_g1_cp2

0x8e07,	// (0x00045551) bg_active_tab_pane_g2_cp2

0x8e22,	// (0x0004556c) bg_active_tab_pane_g3_cp2

0x8e19,	// (0x00045563) bg_passive_tab_pane_g1_cp2

0x8e07,	// (0x00045551) bg_passive_tab_pane_g2_cp2

0x8e22,	// (0x0004556c) bg_passive_tab_pane_g3_cp2

0x8e2b,	// (0x00045575) bg_active_tab_pane_g1_cp3

0x8e07,	// (0x00045551) bg_active_tab_pane_g2_cp3

0x8e34,	// (0x0004557e) bg_active_tab_pane_g3_cp3

0x8e2b,	// (0x00045575) bg_passive_tab_pane_g1_cp3

0x8e07,	// (0x00045551) bg_passive_tab_pane_g2_cp3

0x8e34,	// (0x0004557e) bg_passive_tab_pane_g3_cp3

0x8e3d,	// (0x00045587) bg_active_tab_pane_g1_cp4

0x8e07,	// (0x00045551) bg_active_tab_pane_g2_cp4

0x8e48,	// (0x00045592) bg_active_tab_pane_g3_cp4

0x8e3d,	// (0x00045587) bg_passive_tab_pane_g1_cp4

0x8e07,	// (0x00045551) bg_passive_tab_pane_g2_cp4

0x8e48,	// (0x00045592) bg_passive_tab_pane_g3_cp4

0x8e91,	// (0x000455db) bg_active_tab_pane_g1_cp5

0x8e07,	// (0x00045551) bg_active_tab_pane_g2_cp5

0x8e9a,	// (0x000455e4) bg_active_tab_pane_g3_cp5

0x8e91,	// (0x000455db) bg_passive_tab_pane_g1_cp5

0x8e07,	// (0x00045551) bg_passive_tab_pane_g2_cp5

0x8e9a,	// (0x000455e4) bg_passive_tab_pane_g3_cp5

0x8ea3,	// (0x000455ed) list_set_graphic_pane_ParamLimits

0x8ea3,	// (0x000455ed) list_set_graphic_pane

0x7ba4,	// (0x000442ee) bg_set_opt_pane_cp4

0x8ec3,	// (0x0004560d) list_set_graphic_pane_g1_ParamLimits

0x8ec3,	// (0x0004560d) list_set_graphic_pane_g1

0x8ecf,	// (0x00045619) list_set_graphic_pane_g2_ParamLimits

0x8ecf,	// (0x00045619) list_set_graphic_pane_g2

0x0001,

0xf733,	// (0x0004be7d) list_set_graphic_pane_g_ParamLimits

0xf733,	// (0x0004be7d) list_set_graphic_pane_g

0x0009,

0xfaa3,	// (0x0004c1ed) volume_small_pane_cp_g

0x8ef3,	// (0x0004563d) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8ef3,	// (0x0004563d) list_double2_large_graphic_pane_g1_cp2

0x8eff,	// (0x00045649) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8eff,	// (0x00045649) list_double2_large_graphic_pane_g2_cp2

0x8f10,	// (0x0004565a) list_double2_large_graphic_pane_g3_cp2

0x8f18,	// (0x00045662) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8f18,	// (0x00045662) list_double2_large_graphic_pane_t1_cp2

0x8f2e,	// (0x00045678) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8f2e,	// (0x00045678) list_double2_large_graphic_pane_t2_cp2

0xab02,	// (0x0004724c) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xab02,	// (0x0004724c) list_double_large_graphic_pane_g1_cp2

0xab13,	// (0x0004725d) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xab13,	// (0x0004725d) list_double_large_graphic_pane_g2_cp2

0x90a9,	// (0x000457f3) list_double_large_graphic_pane_g3_cp2

0xab24,	// (0x0004726e) list_double_large_graphic_pane_g4_cp

0xab2c,	// (0x00047276) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xab2c,	// (0x00047276) list_double_large_graphic_pane_t1_cp2

0xab43,	// (0x0004728d) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xab43,	// (0x0004728d) list_double_large_graphic_pane_t2_cp2

0x8f9b,	// (0x000456e5) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8f9b,	// (0x000456e5) list_double2_graphic_pane_g1_cp2

0x8fa9,	// (0x000456f3) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8fa9,	// (0x000456f3) list_double2_graphic_pane_g2_cp2

0x8fba,	// (0x00045704) list_double2_graphic_pane_g3_cp2

0x8fc4,	// (0x0004570e) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8fc4,	// (0x0004570e) list_double2_graphic_pane_t1_cp2

0x8fda,	// (0x00045724) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8fda,	// (0x00045724) list_double2_graphic_pane_t2_cp2

0x8fec,	// (0x00045736) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8fec,	// (0x00045736) list_single_number_heading_pane_g1_cp2

0x8ff8,	// (0x00045742) list_single_number_heading_pane_g2_cp2

0x9000,	// (0x0004574a) list_single_number_heading_pane_t1_cp2_ParamLimits

0x9000,	// (0x0004574a) list_single_number_heading_pane_t1_cp2

0x9016,	// (0x00045760) list_single_number_heading_pane_t2_cp2_ParamLimits

0x9016,	// (0x00045760) list_single_number_heading_pane_t2_cp2

0x9028,	// (0x00045772) list_single_number_heading_pane_t3_cp2_ParamLimits

0x9028,	// (0x00045772) list_single_number_heading_pane_t3_cp2

0x8fec,	// (0x00045736) list_single_heading_pane_g1_cp2_ParamLimits

0x8fec,	// (0x00045736) list_single_heading_pane_g1_cp2

0x8ff8,	// (0x00045742) list_single_heading_pane_g2_cp2

0x9000,	// (0x0004574a) list_single_heading_pane_t1_cp2_ParamLimits

0x9000,	// (0x0004574a) list_single_heading_pane_t1_cp2

0xa90a,	// (0x00047054) list_single_heading_pane_t2_cp2_ParamLimits

0xa90a,	// (0x00047054) list_single_heading_pane_t2_cp2

0xa852,	// (0x00046f9c) list_double_graphic_pane_g1_cp2_ParamLimits

0xa852,	// (0x00046f9c) list_double_graphic_pane_g1_cp2

0xa85e,	// (0x00046fa8) list_double_graphic_pane_g2_cp2_ParamLimits

0xa85e,	// (0x00046fa8) list_double_graphic_pane_g2_cp2

0xa86d,	// (0x00046fb7) list_double_graphic_pane_g3_cp2

0xa875,	// (0x00046fbf) list_double_graphic_pane_t1_cp2_ParamLimits

0xa875,	// (0x00046fbf) list_double_graphic_pane_t1_cp2

0xa88b,	// (0x00046fd5) list_double_graphic_pane_t2_cp2_ParamLimits

0xa88b,	// (0x00046fd5) list_double_graphic_pane_t2_cp2

0x909d,	// (0x000457e7) list_double_number_pane_g1_cp2_ParamLimits

0x909d,	// (0x000457e7) list_double_number_pane_g1_cp2

0x90a9,	// (0x000457f3) list_double_number_pane_g2_cp2

0xa816,	// (0x00046f60) list_double_number_pane_t1_cp2_ParamLimits

0xa816,	// (0x00046f60) list_double_number_pane_t1_cp2

0xa82a,	// (0x00046f74) list_double_number_pane_t2_cp2_ParamLimits

0xa82a,	// (0x00046f74) list_double_number_pane_t2_cp2

0xa840,	// (0x00046f8a) list_double_number_pane_t3_cp2_ParamLimits

0xa840,	// (0x00046f8a) list_double_number_pane_t3_cp2

0xa6ff,	// (0x00046e49) list_single_graphic_pane_g1_cp2_ParamLimits

0xa6ff,	// (0x00046e49) list_single_graphic_pane_g1_cp2

0x9101,	// (0x0004584b) list_single_graphic_pane_g2_cp2_ParamLimits

0x9101,	// (0x0004584b) list_single_graphic_pane_g2_cp2

0x910d,	// (0x00045857) list_single_graphic_pane_g3_cp2

0xa6d5,	// (0x00046e1f) list_single_graphic_pane_t1_cp2_ParamLimits

0xa6d5,	// (0x00046e1f) list_single_graphic_pane_t1_cp2

0x9101,	// (0x0004584b) list_single_number_pane_g1_cp2_ParamLimits

0x9101,	// (0x0004584b) list_single_number_pane_g1_cp2

0x910d,	// (0x00045857) list_single_number_pane_g2_cp2

0xa6d5,	// (0x00046e1f) list_single_number_pane_t1_cp2_ParamLimits

0xa6d5,	// (0x00046e1f) list_single_number_pane_t1_cp2

0xa6eb,	// (0x00046e35) list_single_number_pane_t2_cp2_ParamLimits

0xa6eb,	// (0x00046e35) list_single_number_pane_t2_cp2

0x8eff,	// (0x00045649) list_double2_pane_g1_cp2_ParamLimits

0x8eff,	// (0x00045649) list_double2_pane_g1_cp2

0x8f10,	// (0x0004565a) list_double2_pane_g2_cp2

0x9075,	// (0x000457bf) list_double2_pane_t1_cp2_ParamLimits

0x9075,	// (0x000457bf) list_double2_pane_t1_cp2

0x908b,	// (0x000457d5) list_double2_pane_t2_cp2_ParamLimits

0x908b,	// (0x000457d5) list_double2_pane_t2_cp2

0x909d,	// (0x000457e7) list_double_pane_g1_cp2_ParamLimits

0x909d,	// (0x000457e7) list_double_pane_g1_cp2

0x90a9,	// (0x000457f3) list_double_pane_g2_cp2

0x90b1,	// (0x000457fb) list_double_pane_t1_cp2_ParamLimits

0x90b1,	// (0x000457fb) list_double_pane_t1_cp2

0x90c7,	// (0x00045811) list_double_pane_t2_cp2_ParamLimits

0x90c7,	// (0x00045811) list_double_pane_t2_cp2

0x90f1,	// (0x0004583b) list_single_pane_cp2_g3

0x9101,	// (0x0004584b) list_single_pane_g1_cp2_ParamLimits

0x9101,	// (0x0004584b) list_single_pane_g1_cp2

0x910d,	// (0x00045857) list_single_pane_g2_cp2

0x9115,	// (0x0004585f) list_single_pane_t1_cp2_ParamLimits

0x9115,	// (0x0004585f) list_single_pane_t1_cp2

0x912d,	// (0x00045877) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x912d,	// (0x00045877) list_single_large_graphic_pane_g1_cp2

0x8cb8,	// (0x00045402) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8cb8,	// (0x00045402) list_single_large_graphic_pane_g2_cp2

0x9139,	// (0x00045883) list_single_large_graphic_pane_g3_cp2

0x9141,	// (0x0004588b) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x9141,	// (0x0004588b) list_single_large_graphic_pane_g4_cp1

0x915b,	// (0x000458a5) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x915b,	// (0x000458a5) list_single_large_graphic_pane_t1_cp2

0xa6a1,	// (0x00046deb) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa6a1,	// (0x00046deb) list_single_graphic_heading_pane_g1_cp2

0xa66e,	// (0x00046db8) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa66e,	// (0x00046db8) list_single_graphic_heading_pane_g4_cp2

0x910d,	// (0x00045857) list_single_graphic_heading_pane_g5_cp2

0xa6ad,	// (0x00046df7) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa6ad,	// (0x00046df7) list_single_graphic_heading_pane_t1_cp2

0xa6c3,	// (0x00046e0d) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa6c3,	// (0x00046e0d) list_single_graphic_heading_pane_t2_cp2

0xa662,	// (0x00046dac) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa662,	// (0x00046dac) list_single_2graphic_pane_g1_cp2

0xa66e,	// (0x00046db8) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa66e,	// (0x00046db8) list_single_2graphic_pane_g2_cp2

0x910d,	// (0x00045857) list_single_2graphic_pane_g3_cp2

0xa67f,	// (0x00046dc9) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa67f,	// (0x00046dc9) list_single_2graphic_pane_g4_cp2

0xa68b,	// (0x00046dd5) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa68b,	// (0x00046dd5) list_single_2graphic_pane_t1_cp2

0x25ae,	// (0x0003ecf8) list_highlight_pane_g10_cp1

0xa23a,	// (0x00046984) list_highlight_pane_g1_cp1

0xa242,	// (0x0004698c) list_highlight_pane_g2_cp1

0xa24a,	// (0x00046994) list_highlight_pane_g3_cp1

0xa252,	// (0x0004699c) list_highlight_pane_g4_cp1

0xa25a,	// (0x000469a4) list_highlight_pane_g5_cp1

0xa262,	// (0x000469ac) list_highlight_pane_g6_cp1

0xa26a,	// (0x000469b4) list_highlight_pane_g7_cp1

0xa272,	// (0x000469bc) list_highlight_pane_g8_cp1

0xa27a,	// (0x000469c4) list_highlight_pane_g9_cp1

0xa15a,	// (0x000468a4) form_field_slider_pane_t3

0xa168,	// (0x000468b2) form_field_slider_pane_t4

0xa176,	// (0x000468c0) slider_form_pane_ParamLimits

0xa176,	// (0x000468c0) slider_form_pane

0x7ba4,	// (0x000442ee) control_abbreviations

0x7ba4,	// (0x000442ee) control_conventions

0x7ba4,	// (0x000442ee) control_definitions

0x7ba4,	// (0x000442ee) format_table_attribute

0xa954,	// (0x0004709e) bg_popup_preview_window_pane_g9

0x7ba4,	// (0x000442ee) format_table_data2

0x7ba4,	// (0x000442ee) format_table_data3

0x7ba4,	// (0x000442ee) format_table_data_example

0x0008,

0x7ba4,	// (0x000442ee) intro_purpose

0xf8ca,	// (0x0004c014) bg_popup_preview_window_pane_g

0x7ba4,	// (0x000442ee) texts_category

0x7ba4,	// (0x000442ee) texts_graphics

0x9171,	// (0x000458bb) text_digital

0x9180,	// (0x000458ca) text_primary

0x918f,	// (0x000458d9) text_primary_small

0x919e,	// (0x000458e8) text_secondary

0x91ad,	// (0x000458f7) text_title

0xb081,	// (0x000477cb) bg_passive_tab_pane_g1_cp3_srt

0x8e07,	// (0x00045551) bg_passive_tab_pane_g2_cp3_srt

0xb08a,	// (0x000477d4) bg_passive_tab_pane_g3_cp3_srt

0x7c84,	// (0x000443ce) bg_active_tab_pane_cp3_srt_ParamLimits

0x7c84,	// (0x000443ce) bg_active_tab_pane_cp3_srt

0xb093,	// (0x000477dd) tabs_4_active_pane_srt_g1

0xb09b,	// (0x000477e5) tabs_4_active_pane_srt_t1_ParamLimits

0xb09b,	// (0x000477e5) tabs_4_active_pane_srt_t1

0xb081,	// (0x000477cb) bg_active_tab_pane_g1_cp3_copy1

0x8e07,	// (0x00045551) bg_active_tab_pane_g2_cp3_copy1

0xb08a,	// (0x000477d4) bg_active_tab_pane_g3_cp3_copy1

0x7c84,	// (0x000443ce) tabs_2_long_active_pane_srt_ParamLimits

0x7c84,	// (0x000443ce) tabs_2_long_active_pane_srt

0x7c84,	// (0x000443ce) tabs_2_long_passive_pane_srt_ParamLimits

0x7c84,	// (0x000443ce) tabs_2_long_passive_pane_srt

0x8705,	// (0x00044e4f) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8705,	// (0x00044e4f) bg_passive_tab_pane_cp4_srt

0xad82,	// (0x000474cc) bg_passive_tab_pane_g1_cp4_srt

0x8e07,	// (0x00045551) bg_passive_tab_pane_g2_cp4_srt

0xad8b,	// (0x000474d5) bg_passive_tab_pane_g3_cp4_srt

0x86e4,	// (0x00044e2e) bg_active_tab_pane_cp4_srt_ParamLimits

0x86e4,	// (0x00044e2e) bg_active_tab_pane_cp4_srt

0xad94,	// (0x000474de) tabs_2_long_active_pane_srt_t1_ParamLimits

0xad94,	// (0x000474de) tabs_2_long_active_pane_srt_t1

0xad82,	// (0x000474cc) bg_active_tab_pane_g1_cp4_srt

0x8e07,	// (0x00045551) bg_active_tab_pane_g2_cp4_srt

0xad8b,	// (0x000474d5) bg_active_tab_pane_g3_cp4_srt

0x7eff,	// (0x00044649) tabs_3_long_active_pane_srt_ParamLimits

0x7eff,	// (0x00044649) tabs_3_long_active_pane_srt

0x7eff,	// (0x00044649) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7eff,	// (0x00044649) tabs_3_long_passive_pane_cp_srt

0x7eff,	// (0x00044649) tabs_3_long_passive_pane_srt_ParamLimits

0x7eff,	// (0x00044649) tabs_3_long_passive_pane_srt

0x8705,	// (0x00044e4f) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8705,	// (0x00044e4f) bg_passive_tab_pane_cp5_srt

0x8e91,	// (0x000455db) bg_passive_tab_pane_g1_cp5_srt

0x8e07,	// (0x00045551) bg_passive_tab_pane_g2_cp5_srt

0x8e9a,	// (0x000455e4) bg_passive_tab_pane_g3_cp5_srt

0x86e4,	// (0x00044e2e) bg_active_tab_pane_cp5_srt_ParamLimits

0x86e4,	// (0x00044e2e) bg_active_tab_pane_cp5_srt

0xad70,	// (0x000474ba) tabs_3_long_active_pane_srt_t1_ParamLimits

0xad70,	// (0x000474ba) tabs_3_long_active_pane_srt_t1

0x8e91,	// (0x000455db) bg_active_tab_pane_g1_cp5_srt

0x8e07,	// (0x00045551) bg_active_tab_pane_g2_cp5_srt

0x8e9a,	// (0x000455e4) bg_active_tab_pane_g3_cp5_srt

0xad62,	// (0x000474ac) navi_text_pane_srt_t1

0xad5a,	// (0x000474a4) navi_icon_pane_srt_g1

0x9382,	// (0x00045acc) midp_editing_number_pane_srt

0x91bc,	// (0x00045906) midp_ticker_pane_srt

0x938a,	// (0x00045ad4) midp_ticker_pane_srt_g1

0x9392,	// (0x00045adc) midp_ticker_pane_srt_g2

0x0001,

0xf752,	// (0x0004be9c) midp_ticker_pane_srt_g

0x939a,	// (0x00045ae4) midp_ticker_pane_srt_t1

0xad4b,	// (0x00047495) midp_editing_number_pane_t1_copy1

0x91c4,	// (0x0004590e) listscroll_midp_pane

0x91c4,	// (0x0004590e) midp_form_pane

0x9234,	// (0x0004597e) midp_info_popup_window_ParamLimits

0x9234,	// (0x0004597e) midp_info_popup_window

0x8630,	// (0x00044d7a) bg_popup_sub_pane_cp50_ParamLimits

0x8630,	// (0x00044d7a) bg_popup_sub_pane_cp50

0x9e5e,	// (0x000465a8) listscroll_midp_info_pane_ParamLimits

0x9e5e,	// (0x000465a8) listscroll_midp_info_pane

0x9e3e,	// (0x00046588) listscroll_form_midp_pane_ParamLimits

0x9e3e,	// (0x00046588) listscroll_form_midp_pane

0x9e4a,	// (0x00046594) scroll_bar_cp050

0x9e1e,	// (0x00046568) list_midp_pane

0xbafc,	// (0x00048246) signal_pane_g2_cp

0x9d58,	// (0x000464a2) listscroll_midp_info_pane_t1_ParamLimits

0x9d58,	// (0x000464a2) listscroll_midp_info_pane_t1

0x9d70,	// (0x000464ba) listscroll_midp_info_pane_t2_ParamLimits

0x9d70,	// (0x000464ba) listscroll_midp_info_pane_t2

0x9dae,	// (0x000464f8) listscroll_midp_info_pane_t3_ParamLimits

0x9dae,	// (0x000464f8) listscroll_midp_info_pane_t3

0x9de8,	// (0x00046532) listscroll_midp_info_pane_t4_ParamLimits

0x9de8,	// (0x00046532) listscroll_midp_info_pane_t4

0x0003,

0xf805,	// (0x0004bf4f) listscroll_midp_info_pane_t_ParamLimits

0xf805,	// (0x0004bf4f) listscroll_midp_info_pane_t

0x8691,	// (0x00044ddb) scroll_pane_cp21

0x9cf6,	// (0x00046440) form_midp_field_choice_group_pane

0x9cff,	// (0x00046449) form_midp_field_text_pane

0x9d3e,	// (0x00046488) form_midp_field_time_pane

0x9d46,	// (0x00046490) form_midp_gauge_slider_pane

0x9d4f,	// (0x00046499) form_midp_gauge_wait_pane

0x7ba4,	// (0x000442ee) form_midp_image_pane

0x4e5b,	// (0x000415a5) list_single_midp_pane_ParamLimits

0x4e5b,	// (0x000415a5) list_single_midp_pane

0x9cae,	// (0x000463f8) form_midp_field_text_pane_t1

0x9a7e,	// (0x000461c8) input_focus_pane_cp050

0x9ce5,	// (0x0004642f) list_midp_form_text_pane

0x9c7d,	// (0x000463c7) form_midp_field_choice_group_pane_t1

0x9c8b,	// (0x000463d5) input_focus_pane_cp051

0x9c9f,	// (0x000463e9) list_midp_choice_pane

0x7ba4,	// (0x000442ee) status_idle_pane

0x9c61,	// (0x000463ab) form_midp_field_time_pane_t1

0x25ae,	// (0x0003ecf8) wait_anim_pane_g2_copy1

0x9c6f,	// (0x000463b9) form_midp_field_time_pane_t2

0x0001,

0x92e2,	// (0x00045a2c) aid_navinavi_width_2_pane

0xf800,	// (0x0004bf4a) form_midp_field_time_pane_t

0x7ba4,	// (0x000442ee) input_focus_pane_cp052

0x7ba4,	// (0x000442ee) bg_input_focus_pane_cp040

0x9c21,	// (0x0004636b) form_midp_gauge_slider_pane_t1

0x9c2f,	// (0x00046379) form_midp_gauge_slider_pane_t2

0x9c3d,	// (0x00046387) form_midp_gauge_slider_pane_t3

0x9c4b,	// (0x00046395) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f7,	// (0x0004bf41) form_midp_gauge_slider_pane_t

0x9c59,	// (0x000463a3) form_midp_slider_pane

0x7c84,	// (0x000443ce) bg_input_focus_pane_cp041_ParamLimits

0x7c84,	// (0x000443ce) bg_input_focus_pane_cp041

0x9bee,	// (0x00046338) form_midp_gauge_wait_pane_t1_ParamLimits

0x9bee,	// (0x00046338) form_midp_gauge_wait_pane_t1

0x9c00,	// (0x0004634a) form_midp_gauge_wait_pane_t2_ParamLimits

0x9c00,	// (0x0004634a) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f2,	// (0x0004bf3c) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f2,	// (0x0004bf3c) form_midp_gauge_wait_pane_t

0x9c12,	// (0x0004635c) form_midp_wait_pane_ParamLimits

0x9c12,	// (0x0004635c) form_midp_wait_pane

0x9bb8,	// (0x00046302) form_midp_image_pane_g1

0x9bc1,	// (0x0004630b) form_midp_image_pane_t1

0x9bd0,	// (0x0004631a) form_midp_image_pane_t2

0x9bdf,	// (0x00046329) form_midp_image_pane_t3

0x0002,

0xf7eb,	// (0x0004bf35) form_midp_image_pane_t

0x9baf,	// (0x000462f9) list_single_midp_pane_g1

0x4e4c,	// (0x00041596) list_single_midp_pane_t1

0x9b87,	// (0x000462d1) list_midp_form_item_pane_ParamLimits

0x9b87,	// (0x000462d1) list_midp_form_item_pane

0x928a,	// (0x000459d4) list_midp_form_item_pane_t1

0x9299,	// (0x000459e3) midp_ticker_pane_g1

0x92a5,	// (0x000459ef) midp_ticker_pane_g2

0x0001,

0xf738,	// (0x0004be82) midp_ticker_pane_g

0x92b1,	// (0x000459fb) midp_ticker_pane_t1

0xafa8,	// (0x000476f2) midp_editing_number_pane_t1

0xaf86,	// (0x000476d0) midp_editing_number_pane

0xaf95,	// (0x000476df) midp_ticker_pane

0xad3b,	// (0x00047485) ai_message_heading_pane

0x7ba4,	// (0x000442ee) bg_popup_window_pane_cp14

0xad43,	// (0x0004748d) listscroll_ai_message_pane

0xacc5,	// (0x0004740f) ai_message_heading_pane_g1_ParamLimits

0xacc5,	// (0x0004740f) ai_message_heading_pane_g1

0xacd1,	// (0x0004741b) ai_message_heading_pane_g2_ParamLimits

0xacd1,	// (0x0004741b) ai_message_heading_pane_g2

0xacdd,	// (0x00047427) ai_message_heading_pane_g3_ParamLimits

0xacdd,	// (0x00047427) ai_message_heading_pane_g3

0xace9,	// (0x00047433) ai_message_heading_pane_g4_ParamLimits

0xace9,	// (0x00047433) ai_message_heading_pane_g4

0x0003,

0xf92c,	// (0x0004c076) ai_message_heading_pane_g_ParamLimits

0xf92c,	// (0x0004c076) ai_message_heading_pane_g

0xacf5,	// (0x0004743f) ai_message_heading_pane_t1_ParamLimits

0xacf5,	// (0x0004743f) ai_message_heading_pane_t1

0xad0f,	// (0x00047459) ai_message_heading_pane_t2_ParamLimits

0xad0f,	// (0x00047459) ai_message_heading_pane_t2

0x0001,

0xf935,	// (0x0004c07f) ai_message_heading_pane_t_ParamLimits

0xf935,	// (0x0004c07f) ai_message_heading_pane_t

0xad21,	// (0x0004746b) bg_popup_heading_pane_cp1_ParamLimits

0xad21,	// (0x0004746b) bg_popup_heading_pane_cp1

0xacb3,	// (0x000473fd) list_ai_message_pane_ParamLimits

0xacb3,	// (0x000473fd) list_ai_message_pane

0x8691,	// (0x00044ddb) scroll_pane_cp10

0xac4f,	// (0x00047399) list_ai_message_pane_g1

0xac57,	// (0x000473a1) list_ai_message_pane_g2

0x0001,

0xf909,	// (0x0004c053) list_ai_message_pane_g

0xac5f,	// (0x000473a9) list_ai_message_pane_t1_ParamLimits

0xac5f,	// (0x000473a9) list_ai_message_pane_t1

0xac74,	// (0x000473be) list_ai_message_pane_t2_ParamLimits

0xac74,	// (0x000473be) list_ai_message_pane_t2

0xac89,	// (0x000473d3) list_ai_message_pane_t3_ParamLimits

0xac89,	// (0x000473d3) list_ai_message_pane_t3

0xac9e,	// (0x000473e8) list_ai_message_pane_t4_ParamLimits

0xac9e,	// (0x000473e8) list_ai_message_pane_t4

0x0003,

0xf90e,	// (0x0004c058) list_ai_message_pane_t_ParamLimits

0xf90e,	// (0x0004c058) list_ai_message_pane_t

0xac3a,	// (0x00047384) cell_ai_soft_ind_pane_ParamLimits

0xac3a,	// (0x00047384) cell_ai_soft_ind_pane

0x92c3,	// (0x00045a0d) cell_ai_soft_ind_pane_g1_ParamLimits

0x92c3,	// (0x00045a0d) cell_ai_soft_ind_pane_g1

0x7ba4,	// (0x000442ee) grid_highlight_cp1

0x92d0,	// (0x00045a1a) text_secondary_cp56_ParamLimits

0x92d0,	// (0x00045a1a) text_secondary_cp56

0xac0f,	// (0x00047359) example_general_pane_ParamLimits

0xac0f,	// (0x00047359) example_general_pane

0xac1b,	// (0x00047365) example_parent_pane_g1_ParamLimits

0xac1b,	// (0x00047365) example_parent_pane_g1

0xac27,	// (0x00047371) example_parent_pane_t1_ParamLimits

0xac27,	// (0x00047371) example_parent_pane_t1

0x6337,	// (0x00042a81) popup_preview_text_window_ParamLimits

0x6337,	// (0x00042a81) popup_preview_text_window

0x90f9,	// (0x00045843) list_single_pane_cp2_g4

0x7fdb,	// (0x00044725) bg_popup_preview_window_pane_ParamLimits

0x7fdb,	// (0x00044725) bg_popup_preview_window_pane

0xa95c,	// (0x000470a6) popup_preview_text_window_t1_ParamLimits

0xa95c,	// (0x000470a6) popup_preview_text_window_t1

0xa97a,	// (0x000470c4) popup_preview_text_window_t2_ParamLimits

0xa97a,	// (0x000470c4) popup_preview_text_window_t2

0xa9c3,	// (0x0004710d) popup_preview_text_window_t3_ParamLimits

0xa9c3,	// (0x0004710d) popup_preview_text_window_t3

0xaa08,	// (0x00047152) popup_preview_text_window_t4_ParamLimits

0xaa08,	// (0x00047152) popup_preview_text_window_t4

0x0004,

0xf8dd,	// (0x0004c027) popup_preview_text_window_t_ParamLimits

0xf8dd,	// (0x0004c027) popup_preview_text_window_t

0xaa86,	// (0x000471d0) scroll_pane_cp11

0x9a0a,	// (0x00046154) bg_popup_preview_window_pane_g1

0xa91c,	// (0x00047066) bg_popup_preview_window_pane_g2

0xa924,	// (0x0004706e) bg_popup_preview_window_pane_g3

0xa92c,	// (0x00047076) bg_popup_preview_window_pane_g4

0xa934,	// (0x0004707e) bg_popup_preview_window_pane_g5

0xa93c,	// (0x00047086) bg_popup_preview_window_pane_g6

0xa944,	// (0x0004708e) bg_popup_preview_window_pane_g7

0xa94c,	// (0x00047096) bg_popup_preview_window_pane_g8

0x5494,	// (0x00041bde) aid_popup_width_pane

0x6315,	// (0x00042a5f) popup_midp_note_alarm_window_ParamLimits

0x6315,	// (0x00042a5f) popup_midp_note_alarm_window

0x8511,	// (0x00044c5b) data_form_pane_ParamLimits

0x4af5,	// (0x0004123f) form_field_data_pane_g1

0x4aff,	// (0x00041249) form_field_data_pane_t1_ParamLimits

0x851d,	// (0x00044c67) input_focus_pane_ParamLimits

0x4b17,	// (0x00041261) data_form_wide_pane_ParamLimits

0x4b28,	// (0x00041272) form_field_data_wide_pane_g1

0x4b34,	// (0x0004127e) form_field_data_wide_pane_t1_ParamLimits

0x8282,	// (0x000449cc) input_focus_pane_cp6_ParamLimits

0x863e,	// (0x00044d88) input_popup_find_pane_g1_ParamLimits

0x863e,	// (0x00044d88) input_popup_find_pane_g1

0x5a89,	// (0x000421d3) aid_navi_side_left_pane

0x5a9e,	// (0x000421e8) aid_navi_side_right_pane

0xa335,	// (0x00046a7f) bg_popup_window_pane_cp30_ParamLimits

0xa335,	// (0x00046a7f) bg_popup_window_pane_cp30

0xa3af,	// (0x00046af9) popup_midp_note_alarm_window_g1_ParamLimits

0xa3af,	// (0x00046af9) popup_midp_note_alarm_window_g1

0xa3df,	// (0x00046b29) popup_midp_note_alarm_window_t1_ParamLimits

0xa3df,	// (0x00046b29) popup_midp_note_alarm_window_t1

0xa480,	// (0x00046bca) popup_midp_note_alarm_window_t2_ParamLimits

0xa480,	// (0x00046bca) popup_midp_note_alarm_window_t2

0xa52e,	// (0x00046c78) popup_midp_note_alarm_window_t3_ParamLimits

0xa52e,	// (0x00046c78) popup_midp_note_alarm_window_t3

0xa560,	// (0x00046caa) popup_midp_note_alarm_window_t4_ParamLimits

0xa560,	// (0x00046caa) popup_midp_note_alarm_window_t4

0xa586,	// (0x00046cd0) popup_midp_note_alarm_window_t5_ParamLimits

0xa586,	// (0x00046cd0) popup_midp_note_alarm_window_t5

0x000a,

0xf87a,	// (0x0004bfc4) popup_midp_note_alarm_window_t_ParamLimits

0xf87a,	// (0x0004bfc4) popup_midp_note_alarm_window_t

0xa632,	// (0x00046d7c) wait_bar_pane_cp1_ParamLimits

0xa632,	// (0x00046d7c) wait_bar_pane_cp1

0x7ba4,	// (0x000442ee) wait_anim_pane_copy1

0x7ba4,	// (0x000442ee) wait_border_pane_copy1

0xa01b,	// (0x00046765) wait_border_pane_g1_copy1

0x4b4e,	// (0x00041298) form_field_popup_pane_g1

0x4b56,	// (0x000412a0) form_field_popup_pane_t1_ParamLimits

0x851d,	// (0x00044c67) input_focus_pane_cp7_ParamLimits

0x853f,	// (0x00044c89) list_form_pane_ParamLimits

0x4b6e,	// (0x000412b8) form_field_popup_wide_pane_g1

0x4b76,	// (0x000412c0) form_field_popup_wide_pane_t1_ParamLimits

0x851d,	// (0x00044c67) input_focus_pane_cp8_ParamLimits

0x854b,	// (0x00044c95) list_form_wide_pane_ParamLimits

0xb123,	// (0x0004786d) aid_size_cell_graphic_pane

0x4c00,	// (0x0004134a) data_form_pane_t1_ParamLimits

0x4e97,	// (0x000415e1) data_form_wide_pane_t1_ParamLimits

0x95d1,	// (0x00045d1b) bg_status_flat_pane

0x7be4,	// (0x0004432e) title_pane_t1_ParamLimits

0x7c4c,	// (0x00044396) title_pane_t2_ParamLimits

0x7c72,	// (0x000443bc) title_pane_t3_ParamLimits

0xf532,	// (0x0004bc7c) title_pane_t_ParamLimits

0x8b12,	// (0x0004525c) level_1_signal_ParamLimits

0x8b24,	// (0x0004526e) level_2_signal_ParamLimits

0x8b37,	// (0x00045281) level_3_signal_ParamLimits

0x8b4a,	// (0x00045294) level_4_signal_ParamLimits

0x8b5d,	// (0x000452a7) level_5_signal_ParamLimits

0x8b70,	// (0x000452ba) level_6_signal_ParamLimits

0x8b83,	// (0x000452cd) level_7_signal_ParamLimits

0x8b12,	// (0x0004525c) level_1_battery_ParamLimits

0x8b24,	// (0x0004526e) level_2_battery_ParamLimits

0x8b37,	// (0x00045281) level_3_battery_ParamLimits

0x8b4a,	// (0x00045294) level_4_battery_ParamLimits

0x8b5d,	// (0x000452a7) level_5_battery_ParamLimits

0x8b70,	// (0x000452ba) level_6_battery_ParamLimits

0x8b83,	// (0x000452cd) level_7_battery_ParamLimits

0xa23a,	// (0x00046984) bg_status_flat_pane_g1

0xa242,	// (0x0004698c) bg_status_flat_pane_g2

0xa24a,	// (0x00046994) bg_status_flat_pane_g3

0xa252,	// (0x0004699c) bg_status_flat_pane_g4

0xa25a,	// (0x000469a4) bg_status_flat_pane_g5

0xa262,	// (0x000469ac) bg_status_flat_pane_g6

0xa26a,	// (0x000469b4) bg_status_flat_pane_g7

0x7c9a,	// (0x000443e4) tabs_3_active_pane_t1_ParamLimits

0x7c9a,	// (0x000443e4) tabs_3_passive_pane_t1_ParamLimits

0x7cb4,	// (0x000443fe) tabs_4_active_pane_t1_ParamLimits

0x7cb4,	// (0x000443fe) tabs_4_1_passive_pane_t1_ParamLimits

0x86d2,	// (0x00044e1c) tabs_2_active_pane_t1_ParamLimits

0x86d2,	// (0x00044e1c) tabs_2_passive_pane_t1_ParamLimits

0x86e4,	// (0x00044e2e) bg_active_tab_pane_cp4_ParamLimits

0x86f2,	// (0x00044e3c) tabs_2_long_active_pane_t1_ParamLimits

0x8705,	// (0x00044e4f) bg_passive_tab_pane_cp4_ParamLimits

0x65e4,	// (0x00042d2e) list_single_midp_graphic_pane_t1_ParamLimits

0x86e4,	// (0x00044e2e) bg_active_tab_pane_cp5_ParamLimits

0x8711,	// (0x00044e5b) tabs_3_long_active_pane_t1_ParamLimits

0x8705,	// (0x00044e4f) bg_passive_tab_pane_cp5_ParamLimits

0x65e4,	// (0x00042d2e) list_single_midp_graphic_pane_t1

0x95d1,	// (0x00045d1b) bg_status_flat_pane_ParamLimits

0x969a,	// (0x00045de4) indicator_pane_cp2_ParamLimits

0x969a,	// (0x00045de4) indicator_pane_cp2

0x97c5,	// (0x00045f0f) navi_pane_srt_ParamLimits

0x97c5,	// (0x00045f0f) navi_pane_srt

0x97e9,	// (0x00045f33) popup_clock_digital_analogue_window_cp1

0x7d61,	// (0x000444ab) indicator_pane_t1

0x91bc,	// (0x00045906) copy_highlight_pane

0x91bc,	// (0x00045906) cursor_graphics_pane

0x91bc,	// (0x00045906) graphic_within_text_pane

0x91bc,	// (0x00045906) link_highlight_pane

0xaa49,	// (0x00047193) popup_preview_text_window_t5_ParamLimits

0xaa49,	// (0x00047193) popup_preview_text_window_t5

0x92ea,	// (0x00045a34) cursor_digital_pane

0x92ea,	// (0x00045a34) cursor_primary_pane

0x92fb,	// (0x00045a45) cursor_primary_small_pane

0x9303,	// (0x00045a4d) cursor_secondary_pane

0x930b,	// (0x00045a55) cursor_title_pane

0x92ea,	// (0x00045a34) link_highlight_digital_pane

0x92f2,	// (0x00045a3c) link_highlight_primary_pane

0x92fb,	// (0x00045a45) link_highlight_primary_small_pane

0x9303,	// (0x00045a4d) link_highlight_secondary_pane

0x930b,	// (0x00045a55) link_highlight_title_pane

0x92ea,	// (0x00045a34) copy_highlight_digital_pane

0x92ea,	// (0x00045a34) copy_highlight_primary_pane

0x92fb,	// (0x00045a45) copy_highlight_primary_small_pane

0x9303,	// (0x00045a4d) copy_highlight_secondary_pane

0x930b,	// (0x00045a55) copy_highlight_title_pane

0x9303,	// (0x00045a4d) graphic_text_digital_pane

0xa2d8,	// (0x00046a22) graphic_text_primary_pane

0xa2e1,	// (0x00046a2b) graphic_text_primary_small_pane

0x92fb,	// (0x00045a45) graphic_text_secondary_pane

0x92ea,	// (0x00045a34) graphic_text_title_pane

0x9313,	// (0x00045a5d) cursor_primary_pane_g1

0xa2ca,	// (0x00046a14) cursor_text_primary_t1

0xa2b2,	// (0x000469fc) cursor_primary_small_pane_g1

0xa2bc,	// (0x00046a06) cursor_text_primary_small_t1

0xa29a,	// (0x000469e4) cursor_primary_small_pane_g1_copy1

0xa2a4,	// (0x000469ee) cursor_text_primary_small_t1_copy1

0xa282,	// (0x000469cc) cursor_text_title_t1

0xa290,	// (0x000469da) cursor_title_pane_g1

0x9313,	// (0x00045a5d) cursor_digital_pane_g1

0x931d,	// (0x00045a67) cursor_text_digital_t1

0x9342,	// (0x00045a8c) link_highlight_primary_pane_g1

0xa22b,	// (0x00046975) link_highlight_primary_pane_t1

0x932b,	// (0x00045a75) link_highlight_primary_small_pane_g1

0x9333,	// (0x00045a7d) link_highlight_primary_small_pane_t1

0x9342,	// (0x00045a8c) link_highlight_secondary_pane_g1

0x934a,	// (0x00045a94) link_highlight_secondary_pane_t1

0xa19f,	// (0x000468e9) link_highlight_title_pane_g1

0xa1a7,	// (0x000468f1) link_highlight_title_pane_t1

0xa188,	// (0x000468d2) link_highlight_digital_pane_g1

0xa190,	// (0x000468da) link_highlight_digital_pane_t1

0xa060,	// (0x000467aa) copy_highlight_primary_pane_g1

0xa068,	// (0x000467b2) copy_highlight_primary_pane_t1

0xa03a,	// (0x00046784) copy_highlight_primary_small_pane_g1

0xa051,	// (0x0004679b) copy_highlight_primary_small_pane_t1

0x9359,	// (0x00045aa3) copy_highlight_secondary_pane_g1

0x9361,	// (0x00045aab) copy_highlight_secondary_pane_t1

0xa03a,	// (0x00046784) copy_highlight_title_pane_g1

0xa042,	// (0x0004678c) copy_highlight_title_pane_t1

0xa060,	// (0x000467aa) copy_highlight_digital_pane_g1

0xb2f1,	// (0x00047a3b) copy_highlight_digital_pane_t1

0xb245,	// (0x0004798f) graphic_text_primary_pane_g1

0xb2d5,	// (0x00047a1f) graphic_text_primary_pane_t1

0xb2e3,	// (0x00047a2d) graphic_text_primary_pane_t2

0x0001,

0xf9a9,	// (0x0004c0f3) graphic_text_primary_pane_t

0xb2b1,	// (0x000479fb) graphic_text_primary_small_pane_g1

0xb2b9,	// (0x00047a03) graphic_text_primary_small_pane_t1

0xb2c7,	// (0x00047a11) graphic_text_primary_small_pane_t2

0x0001,

0xf9a4,	// (0x0004c0ee) graphic_text_primary_small_pane_t

0xb28d,	// (0x000479d7) graphic_text_secondary_pane_g1

0xb295,	// (0x000479df) graphic_text_secondary_pane_t1

0xb2a3,	// (0x000479ed) graphic_text_secondary_pane_t2

0x0001,

0xf99f,	// (0x0004c0e9) graphic_text_secondary_pane_t

0xb269,	// (0x000479b3) graphic_text_title_pane_g1

0xb271,	// (0x000479bb) graphic_text_title_pane_t1

0xb27f,	// (0x000479c9) graphic_text_title_pane_t2

0x0001,

0xf99a,	// (0x0004c0e4) graphic_text_title_pane_t

0xb245,	// (0x0004798f) graphic_text_digital_pane_g1

0xb24d,	// (0x00047997) graphic_text_digital_pane_t1

0xb25b,	// (0x000479a5) graphic_text_digital_pane_t2

0x0001,

0xf995,	// (0x0004c0df) graphic_text_digital_pane_t

0x7c84,	// (0x000443ce) navi_icon_pane_srt_ParamLimits

0x7c84,	// (0x000443ce) navi_icon_pane_srt

0x7ba4,	// (0x000442ee) navi_midp_pane_srt

0x7ba4,	// (0x000442ee) navi_navi_pane_srt

0x7c84,	// (0x000443ce) navi_text_pane_srt_ParamLimits

0x7c84,	// (0x000443ce) navi_text_pane_srt

0xb210,	// (0x0004795a) navi_navi_icon_text_pane_srt

0xb218,	// (0x00047962) navi_navi_pane_srt_g1_ParamLimits

0xb218,	// (0x00047962) navi_navi_pane_srt_g1

0xb22a,	// (0x00047974) navi_navi_pane_srt_g2_ParamLimits

0xb22a,	// (0x00047974) navi_navi_pane_srt_g2

0x0001,

0xf990,	// (0x0004c0da) navi_navi_pane_srt_g_ParamLimits

0xf990,	// (0x0004c0da) navi_navi_pane_srt_g

0xb23c,	// (0x00047986) navi_navi_tabs_pane_srt

0xb210,	// (0x0004795a) navi_navi_text_pane_srt

0xb210,	// (0x0004795a) navi_navi_volume_pane_srt

0xb201,	// (0x0004794b) navi_navi_text_pane_srt_t1

0x69ed,	// (0x00043137) navi_navi_volume_pane_srt_g1

0x69f5,	// (0x0004313f) volume_small_pane_srt_ParamLimits

0x69f5,	// (0x0004313f) volume_small_pane_srt

0x5d85,	// (0x000424cf) volume_small_pane_srt_g1_ParamLimits

0x5d85,	// (0x000424cf) volume_small_pane_srt_g1

0x5d95,	// (0x000424df) volume_small_pane_srt_g2_ParamLimits

0x5d95,	// (0x000424df) volume_small_pane_srt_g2

0x5da6,	// (0x000424f0) volume_small_pane_srt_g3_ParamLimits

0x5da6,	// (0x000424f0) volume_small_pane_srt_g3

0x5db7,	// (0x00042501) volume_small_pane_srt_g4_ParamLimits

0x5db7,	// (0x00042501) volume_small_pane_srt_g4

0x5dc8,	// (0x00042512) volume_small_pane_srt_g5_ParamLimits

0x5dc8,	// (0x00042512) volume_small_pane_srt_g5

0x5dd9,	// (0x00042523) volume_small_pane_srt_g6_ParamLimits

0x5dd9,	// (0x00042523) volume_small_pane_srt_g6

0x5dea,	// (0x00042534) volume_small_pane_srt_g7_ParamLimits

0x5dea,	// (0x00042534) volume_small_pane_srt_g7

0x5dfb,	// (0x00042545) volume_small_pane_srt_g8_ParamLimits

0x5dfb,	// (0x00042545) volume_small_pane_srt_g8

0x5e0c,	// (0x00042556) volume_small_pane_srt_g9_ParamLimits

0x5e0c,	// (0x00042556) volume_small_pane_srt_g9

0x5e1d,	// (0x00042567) volume_small_pane_srt_g10_ParamLimits

0x5e1d,	// (0x00042567) volume_small_pane_srt_g10

0x0009,

0xf73d,	// (0x0004be87) volume_small_pane_srt_g_ParamLimits

0xf73d,	// (0x0004be87) volume_small_pane_srt_g

0x8084,	// (0x000447ce) query_popup_data_pane_cp2

0xb1e7,	// (0x00047931) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb1e7,	// (0x00047931) navi_navi_icon_text_pane_srt_t1

0xa2d8,	// (0x00046a22) navi_tabs_2_long_pane_srt

0xa2d8,	// (0x00046a22) navi_tabs_2_pane_srt

0xa2d8,	// (0x00046a22) navi_tabs_3_long_pane_srt

0xa2d8,	// (0x00046a22) navi_tabs_3_pane_srt

0xa2d8,	// (0x00046a22) navi_tabs_4_pane_srt

0x69cd,	// (0x00043117) tabs_2_active_pane_srt_ParamLimits

0x69cd,	// (0x00043117) tabs_2_active_pane_srt

0x69dd,	// (0x00043127) tabs_2_passive_pane_srt_ParamLimits

0x69dd,	// (0x00043127) tabs_2_passive_pane_srt

0x94e0,	// (0x00045c2a) bg_passive_tab_pane_cp1_srt_ParamLimits

0x94e0,	// (0x00045c2a) bg_passive_tab_pane_cp1_srt

0xb1b3,	// (0x000478fd) bg_passive_tab_pane_g1_cp1_srt

0x8e07,	// (0x00045551) bg_passive_tab_pane_g2_cp1_srt

0xb1bc,	// (0x00047906) bg_passive_tab_pane_g3_cp1_srt

0x7c84,	// (0x000443ce) bg_active_tab_pane_cp1_srt_ParamLimits

0x7c84,	// (0x000443ce) bg_active_tab_pane_cp1_srt

0xb1c5,	// (0x0004790f) tabs_2_active_pane_srt_g1

0xb1cd,	// (0x00047917) tabs_2_active_pane_srt_t1_ParamLimits

0xb1cd,	// (0x00047917) tabs_2_active_pane_srt_t1

0xb1b3,	// (0x000478fd) bg_active_tab_pane_g1_cp1_srt

0x8e07,	// (0x00045551) bg_active_tab_pane_g2_cp1_srt

0xb1bc,	// (0x00047906) bg_active_tab_pane_g3_cp1_srt

0x699a,	// (0x000430e4) tabs_3_active_pane_srt_ParamLimits

0x699a,	// (0x000430e4) tabs_3_active_pane_srt

0x69ab,	// (0x000430f5) tabs_3_passive_pane_cp_srt_ParamLimits

0x69ab,	// (0x000430f5) tabs_3_passive_pane_cp_srt

0x69bc,	// (0x00043106) tabs_3_passive_pane_srt_ParamLimits

0x69bc,	// (0x00043106) tabs_3_passive_pane_srt

0x94e0,	// (0x00045c2a) bg_passive_tab_pane_cp2_srt_ParamLimits

0x94e0,	// (0x00045c2a) bg_passive_tab_pane_cp2_srt

0x9370,	// (0x00045aba) bg_passive_tab_pane_g1_cp2_srt

0x8e07,	// (0x00045551) bg_passive_tab_pane_g2_cp2_srt

0x9379,	// (0x00045ac3) bg_passive_tab_pane_g3_cp2_srt

0x7c84,	// (0x000443ce) bg_active_tab_pane_cp2_srt_ParamLimits

0x7c84,	// (0x000443ce) bg_active_tab_pane_cp2_srt

0xb199,	// (0x000478e3) tabs_3_active_pane_srt_g1

0xb1a1,	// (0x000478eb) tabs_3_active_pane_srt_t1_ParamLimits

0xb1a1,	// (0x000478eb) tabs_3_active_pane_srt_t1

0x9370,	// (0x00045aba) bg_active_tab_pane_g1_cp2_srt

0x8e07,	// (0x00045551) bg_active_tab_pane_g2_cp2_srt

0x9379,	// (0x00045ac3) bg_active_tab_pane_g3_cp2_srt

0x6952,	// (0x0004309c) tabs_4_active_pane_srt_ParamLimits

0x6952,	// (0x0004309c) tabs_4_active_pane_srt

0x6964,	// (0x000430ae) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6964,	// (0x000430ae) tabs_4_passive_pane_cp2_srt

0x5f8c,	// (0x000426d6) aid_size_cell_toolbar

0x8705,	// (0x00044e4f) main_idle_act_pane_ParamLimits

0x614b,	// (0x00042895) popup_large_graphic_colour_window_ParamLimits

0x64b2,	// (0x00042bfc) popup_toolbar_window_ParamLimits

0x64b2,	// (0x00042bfc) popup_toolbar_window

0xafb7,	// (0x00047701) list_single_graphic_2heading_pane_ParamLimits

0xafb7,	// (0x00047701) list_single_graphic_2heading_pane

0x88c1,	// (0x0004500b) aid_size_cell_apps_grid_lsc_pane

0x88d3,	// (0x0004501d) aid_size_cell_apps_grid_prt_pane

0x94e0,	// (0x00045c2a) bg_wml_button_pane_cp1_ParamLimits

0x94e0,	// (0x00045c2a) bg_wml_button_pane_cp1

0x9cae,	// (0x000463f8) form_midp_field_text_pane_t1_ParamLimits

0x9a7e,	// (0x000461c8) input_focus_pane_cp050_ParamLimits

0x9ce5,	// (0x0004642f) list_midp_form_text_pane_ParamLimits

0x9c8b,	// (0x000463d5) input_focus_pane_cp051_ParamLimits

0x9c9f,	// (0x000463e9) list_midp_choice_pane_ParamLimits

0x9b37,	// (0x00046281) list_single_2graphic_pane_cp3_ParamLimits

0x9b37,	// (0x00046281) list_single_2graphic_pane_cp3

0x9b58,	// (0x000462a2) list_single_midp_graphic_pane_ParamLimits

0x9b58,	// (0x000462a2) list_single_midp_graphic_pane

0x4d2a,	// (0x00041474) list_single_graphic_2heading_pane_g1_ParamLimits

0x4d2a,	// (0x00041474) list_single_graphic_2heading_pane_g1

0x4d36,	// (0x00041480) list_single_graphic_2heading_pane_g4_ParamLimits

0x4d36,	// (0x00041480) list_single_graphic_2heading_pane_g4

0x4d42,	// (0x0004148c) list_single_graphic_2heading_pane_g5_ParamLimits

0x4d42,	// (0x0004148c) list_single_graphic_2heading_pane_g5

0x0002,

0xf790,	// (0x0004beda) list_single_graphic_2heading_pane_g_ParamLimits

0xf790,	// (0x0004beda) list_single_graphic_2heading_pane_g

0x4d4e,	// (0x00041498) list_single_graphic_2heading_pane_t1_ParamLimits

0x4d4e,	// (0x00041498) list_single_graphic_2heading_pane_t1

0x4d62,	// (0x000414ac) list_single_graphic_2heading_pane_t2_ParamLimits

0x4d62,	// (0x000414ac) list_single_graphic_2heading_pane_t2

0x4d7e,	// (0x000414c8) list_single_graphic_2heading_pane_t3_ParamLimits

0x4d7e,	// (0x000414c8) list_single_graphic_2heading_pane_t3

0x0002,

0xf797,	// (0x0004bee1) list_single_graphic_2heading_pane_t_ParamLimits

0xf797,	// (0x0004bee1) list_single_graphic_2heading_pane_t

0x9948,	// (0x00046092) bg_popup_sub_pane_cp2

0x9972,	// (0x000460bc) grid_toobar_pane

0x655f,	// (0x00042ca9) cell_toolbar_pane_ParamLimits

0x655f,	// (0x00042ca9) cell_toolbar_pane

0x99ae,	// (0x000460f8) cell_toolbar_pane_g1_ParamLimits

0x99ae,	// (0x000460f8) cell_toolbar_pane_g1

0x99c2,	// (0x0004610c) cell_toolbar_pane_g2_ParamLimits

0x99c2,	// (0x0004610c) cell_toolbar_pane_g2

0x0001,

0xf7a5,	// (0x0004beef) cell_toolbar_pane_g_ParamLimits

0xf7a5,	// (0x0004beef) cell_toolbar_pane_g

0x99e4,	// (0x0004612e) grid_highlight_pane_cp2_ParamLimits

0x99e4,	// (0x0004612e) grid_highlight_pane_cp2

0x99fe,	// (0x00046148) toolbar_button_pane

0x9a0a,	// (0x00046154) toolbar_button_pane_g1

0x9a12,	// (0x0004615c) toolbar_button_pane_g2

0x9a1a,	// (0x00046164) toolbar_button_pane_g3

0x9a22,	// (0x0004616c) toolbar_button_pane_g4

0x9a2a,	// (0x00046174) toolbar_button_pane_g5

0x9a32,	// (0x0004617c) toolbar_button_pane_g6

0x9a3a,	// (0x00046184) toolbar_button_pane_g7

0x9a42,	// (0x0004618c) toolbar_button_pane_g8

0x9a4a,	// (0x00046194) toolbar_button_pane_g9

0x0009,

0xf7aa,	// (0x0004bef4) toolbar_button_pane_g

0x6597,	// (0x00042ce1) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6597,	// (0x00042ce1) list_single_2graphic_pane_g1_cp3

0x65a3,	// (0x00042ced) list_single_2graphic_pane_g2_cp3_ParamLimits

0x65a3,	// (0x00042ced) list_single_2graphic_pane_g2_cp3

0x65b4,	// (0x00042cfe) list_single_2graphic_pane_g3_cp3

0x65bc,	// (0x00042d06) list_single_2graphic_pane_g4_cp3_ParamLimits

0x65bc,	// (0x00042d06) list_single_2graphic_pane_g4_cp3

0x65c8,	// (0x00042d12) list_single_2graphic_pane_t1_cp3_ParamLimits

0x65c8,	// (0x00042d12) list_single_2graphic_pane_t1_cp3

0xaf19,	// (0x00047663) list_single_midp_graphic_pane_g2_ParamLimits

0xaf19,	// (0x00047663) list_single_midp_graphic_pane_g2

0x4d1a,	// (0x00041464) aid_zoom_text_primary

0x5f94,	// (0x000426de) aid_zoom_text_secondary

0x942a,	// (0x00045b74) status_small_pane_g7_ParamLimits

0x942a,	// (0x00045b74) status_small_pane_g7

0x944d,	// (0x00045b97) status_small_pane_t1_ParamLimits

0x7bbb,	// (0x00044305) title_pane_g2

0x0003,

0xf529,	// (0x0004bc73) title_pane_g

0x812c,	// (0x00044876) aid_size_cell_colour_1_pane_ParamLimits

0x812c,	// (0x00044876) aid_size_cell_colour_1_pane

0x8140,	// (0x0004488a) aid_size_cell_colour_2_pane_ParamLimits

0x8140,	// (0x0004488a) aid_size_cell_colour_2_pane

0x8154,	// (0x0004489e) aid_size_cell_colour_3_pane_ParamLimits

0x8154,	// (0x0004489e) aid_size_cell_colour_3_pane

0x8168,	// (0x000448b2) aid_size_cell_colour_4_pane_ParamLimits

0x8168,	// (0x000448b2) aid_size_cell_colour_4_pane

0x59c6,	// (0x00042110) title_pane_stacon_g1_ParamLimits

0x59c6,	// (0x00042110) title_pane_stacon_g1

0xa0bf,	// (0x00046809) popup_note_wait_window_g3_ParamLimits

0xa0bf,	// (0x00046809) popup_note_wait_window_g3

0xa135,	// (0x0004687f) popup_note_wait_window_t5_ParamLimits

0xa135,	// (0x0004687f) popup_note_wait_window_t5

0x7ba4,	// (0x000442ee) main_feb_china_hwr_fs_writing_pane

0x602c,	// (0x00042776) popup_feb_china_hwr_fs_window_ParamLimits

0x602c,	// (0x00042776) popup_feb_china_hwr_fs_window

0x6612,	// (0x00042d5c) aid_size_cell_hwr_fs_ParamLimits

0x6612,	// (0x00042d5c) aid_size_cell_hwr_fs

0x9a7e,	// (0x000461c8) bg_popup_sub_pane_cp3_ParamLimits

0x9a7e,	// (0x000461c8) bg_popup_sub_pane_cp3

0x6627,	// (0x00042d71) grid_hwr_fs_pane_ParamLimits

0x6627,	// (0x00042d71) grid_hwr_fs_pane

0x663f,	// (0x00042d89) linegrid_hwr_fs_pane_ParamLimits

0x663f,	// (0x00042d89) linegrid_hwr_fs_pane

0x664f,	// (0x00042d99) cell_hwr_fs_pane_ParamLimits

0x664f,	// (0x00042d99) cell_hwr_fs_pane

0x9a8a,	// (0x000461d4) linegrid_hwr_fs_pane_g1_ParamLimits

0x9a8a,	// (0x000461d4) linegrid_hwr_fs_pane_g1

0x9a96,	// (0x000461e0) linegrid_hwr_fs_pane_g2_ParamLimits

0x9a96,	// (0x000461e0) linegrid_hwr_fs_pane_g2

0x9aa8,	// (0x000461f2) linegrid_hwr_fs_pane_g3_ParamLimits

0x9aa8,	// (0x000461f2) linegrid_hwr_fs_pane_g3

0x6671,	// (0x00042dbb) linegrid_hwr_fs_pane_g4_ParamLimits

0x6671,	// (0x00042dbb) linegrid_hwr_fs_pane_g4

0x668b,	// (0x00042dd5) linegrid_hwr_fs_pane_g5_ParamLimits

0x668b,	// (0x00042dd5) linegrid_hwr_fs_pane_g5

0x0004,

0xf7d0,	// (0x0004bf1a) linegrid_hwr_fs_pane_g_ParamLimits

0xf7d0,	// (0x0004bf1a) linegrid_hwr_fs_pane_g

0x9ab4,	// (0x000461fe) cell_hwr_fs_pane_g1_ParamLimits

0x9ab4,	// (0x000461fe) cell_hwr_fs_pane_g1

0x987f,	// (0x00045fc9) cell_hwr_fs_pane_g2_ParamLimits

0x987f,	// (0x00045fc9) cell_hwr_fs_pane_g2

0x9aca,	// (0x00046214) cell_hwr_fs_pane_g3_ParamLimits

0x9aca,	// (0x00046214) cell_hwr_fs_pane_g3

0x9ad7,	// (0x00046221) cell_hwr_fs_pane_g4_ParamLimits

0x9ad7,	// (0x00046221) cell_hwr_fs_pane_g4

0x0003,

0xf7db,	// (0x0004bf25) cell_hwr_fs_pane_g_ParamLimits

0xf7db,	// (0x0004bf25) cell_hwr_fs_pane_g

0x66a1,	// (0x00042deb) cell_hwr_fs_pane_t1

0x7ba4,	// (0x000442ee) grid_highlight_pane_cp6

0x7ba4,	// (0x000442ee) main_idle_act2_pane

0x8678,	// (0x00044dc2) aid_inside_area_popup_secondary

0xa76c,	// (0x00046eb6) aid_inside_area_window_primary_ParamLimits

0xa76c,	// (0x00046eb6) aid_inside_area_window_primary

0xb300,	// (0x00047a4a) ai2_news_ticker_pane

0xb308,	// (0x00047a52) aid_size_cell_ai1_link_ParamLimits

0xb308,	// (0x00047a52) aid_size_cell_ai1_link

0xb322,	// (0x00047a6c) popup_ai2_data_window_ParamLimits

0xb322,	// (0x00047a6c) popup_ai2_data_window

0xb338,	// (0x00047a82) popup_ai2_link_window_ParamLimits

0xb338,	// (0x00047a82) popup_ai2_link_window

0x9a7e,	// (0x000461c8) bg_popup_sub_pane_cp4_ParamLimits

0x9a7e,	// (0x000461c8) bg_popup_sub_pane_cp4

0xb34c,	// (0x00047a96) grid_ai2_link_pane_ParamLimits

0xb34c,	// (0x00047a96) grid_ai2_link_pane

0xb363,	// (0x00047aad) popup_ai2_link_window_g1_ParamLimits

0xb363,	// (0x00047aad) popup_ai2_link_window_g1

0xb36f,	// (0x00047ab9) popup_ai2_link_window_g2_ParamLimits

0xb36f,	// (0x00047ab9) popup_ai2_link_window_g2

0x0001,

0xf9ae,	// (0x0004c0f8) popup_ai2_link_window_g_ParamLimits

0xf9ae,	// (0x0004c0f8) popup_ai2_link_window_g

0xb37e,	// (0x00047ac8) ai2_mp_button_pane

0xb386,	// (0x00047ad0) ai2_mp_volume_pane

0x9c8b,	// (0x000463d5) bg_popup_sub_pane_cp5_ParamLimits

0x9c8b,	// (0x000463d5) bg_popup_sub_pane_cp5

0xb38e,	// (0x00047ad8) heading_ai2_gene_pane_ParamLimits

0xb38e,	// (0x00047ad8) heading_ai2_gene_pane

0xb39a,	// (0x00047ae4) list_ai2_gene_pane_ParamLimits

0xb39a,	// (0x00047ae4) list_ai2_gene_pane

0xb3e2,	// (0x00047b2c) cell_ai2_link_pane_ParamLimits

0xb3e2,	// (0x00047b2c) cell_ai2_link_pane

0xb3f8,	// (0x00047b42) cell_ai2_link_pane_g1

0x7ba4,	// (0x000442ee) grid_highlight_pane_cp7

0x6a0a,	// (0x00043154) ai2_mp_volume_pane_g1

0xb4c8,	// (0x00047c12) ai2_mp_volume_pane_g2

0xb43d,	// (0x00047b87) list_ai2_gene_pane_t1

0xb4d0,	// (0x00047c1a) ai2_mp_volume_pane_g3

0x0002,

0xf9c7,	// (0x0004c111) ai2_mp_volume_pane_g

0x6a12,	// (0x0004315c) volume_small_pane_cp3

0xb4d8,	// (0x00047c22) aid_size_cell_ai2_button

0xb4e0,	// (0x00047c2a) grid_ai2_button_pane

0xb4e9,	// (0x00047c33) cell_ai2_button_pane_ParamLimits

0xb4e9,	// (0x00047c33) cell_ai2_button_pane

0x25ae,	// (0x0003ecf8) cell_ai2_button_pane_g1

0x7ba4,	// (0x000442ee) grid_highlight_pane_cp8

0xb488,	// (0x00047bd2) ai2_gene_pane_t1_ParamLimits

0xb488,	// (0x00047bd2) ai2_gene_pane_t1

0x5f82,	// (0x000426cc) aid_height_parent_landscape

0xade2,	// (0x0004752c) aid_height_set_list

0xadf3,	// (0x0004753d) aid_size_parent

0xb123,	// (0x0004786d) aid_size_cell_graphic_pane_ParamLimits

0xb3aa,	// (0x00047af4) popup_ai2_data_window_g1_ParamLimits

0xb3aa,	// (0x00047af4) popup_ai2_data_window_g1

0xb3b6,	// (0x00047b00) ai2_news_ticker_pane_g1

0xb3be,	// (0x00047b08) ai2_news_ticker_pane_g2

0x0001,

0xf9b3,	// (0x0004c0fd) ai2_news_ticker_pane_g

0xb3c6,	// (0x00047b10) ai2_news_ticker_pane_t1

0xb3d4,	// (0x00047b1e) ai2_news_ticker_pane_t2

0x0001,

0xf9b8,	// (0x0004c102) ai2_news_ticker_pane_t

0xb401,	// (0x00047b4b) heading_ai2_gene_pane_g1

0xb409,	// (0x00047b53) heading_ai2_gene_pane_t1_ParamLimits

0xb409,	// (0x00047b53) heading_ai2_gene_pane_t1

0xb41e,	// (0x00047b68) list_highlight_pane_cp6

0xb426,	// (0x00047b70) ai2_gene_pane_ParamLimits

0xb426,	// (0x00047b70) ai2_gene_pane

0xb44b,	// (0x00047b95) list_ai2_gene_pane_t2

0x0001,

0xf9bd,	// (0x0004c107) list_ai2_gene_pane_t

0xb459,	// (0x00047ba3) list_highlight_pane_cp8_ParamLimits

0xb459,	// (0x00047ba3) list_highlight_pane_cp8

0xb46a,	// (0x00047bb4) ai2_gene_pane_g1_ParamLimits

0xb46a,	// (0x00047bb4) ai2_gene_pane_g1

0xb47c,	// (0x00047bc6) ai2_gene_pane_g2_ParamLimits

0xb47c,	// (0x00047bc6) ai2_gene_pane_g2

0x0001,

0xf9c2,	// (0x0004c10c) ai2_gene_pane_g_ParamLimits

0xf9c2,	// (0x0004c10c) ai2_gene_pane_g

0x84a7,	// (0x00044bf1) scroll_pane_cp12

0x5f3f,	// (0x00042689) control_pane_t3_ParamLimits

0x5f3f,	// (0x00042689) control_pane_t3

0x943e,	// (0x00045b88) status_small_pane_g8_ParamLimits

0x943e,	// (0x00045b88) status_small_pane_g8

0x6112,	// (0x0004285c) popup_find_window_ParamLimits

0x6329,	// (0x00042a73) popup_note_image_window_ParamLimits

0x4d96,	// (0x000414e0) list_double2_graphic_pane_vc_g1_ParamLimits

0x4d96,	// (0x000414e0) list_double2_graphic_pane_vc_g1

0x8cb8,	// (0x00045402) list_double2_graphic_pane_vc_g2_ParamLimits

0x8cb8,	// (0x00045402) list_double2_graphic_pane_vc_g2

0x5908,	// (0x00042052) list_double2_graphic_pane_vc_g3_ParamLimits

0x5908,	// (0x00042052) list_double2_graphic_pane_vc_g3

0x0002,

0xf79e,	// (0x0004bee8) list_double2_graphic_pane_vc_g_ParamLimits

0xf79e,	// (0x0004bee8) list_double2_graphic_pane_vc_g

0x4da2,	// (0x000414ec) list_double2_graphic_pane_vc_t1_ParamLimits

0x4da2,	// (0x000414ec) list_double2_graphic_pane_vc_t1

0x8cb8,	// (0x00045402) list_single_heading_pane_vc_g1_ParamLimits

0x8cb8,	// (0x00045402) list_single_heading_pane_vc_g1

0x5908,	// (0x00042052) list_single_heading_pane_vc_g2_ParamLimits

0x5908,	// (0x00042052) list_single_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0004bcf7) list_single_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0004bcf7) list_single_heading_pane_vc_g

0x4db8,	// (0x00041502) list_single_heading_pane_vc_t1_ParamLimits

0x4db8,	// (0x00041502) list_single_heading_pane_vc_t1

0x4dce,	// (0x00041518) list_single_heading_pane_vc_t2_ParamLimits

0x4dce,	// (0x00041518) list_single_heading_pane_vc_t2

0x0001,

0xf7bf,	// (0x0004bf09) list_single_heading_pane_vc_t_ParamLimits

0xf7bf,	// (0x0004bf09) list_single_heading_pane_vc_t

0x65fa,	// (0x00042d44) list_setting_number_pane_vc_g1_ParamLimits

0x65fa,	// (0x00042d44) list_setting_number_pane_vc_g1

0x6606,	// (0x00042d50) list_setting_number_pane_vc_g2_ParamLimits

0x6606,	// (0x00042d50) list_setting_number_pane_vc_g2

0x0001,

0xf7c4,	// (0x0004bf0e) list_setting_number_pane_vc_g_ParamLimits

0xf7c4,	// (0x0004bf0e) list_setting_number_pane_vc_g

0x4de0,	// (0x0004152a) list_setting_number_pane_vc_t1_ParamLimits

0x4de0,	// (0x0004152a) list_setting_number_pane_vc_t1

0x4df4,	// (0x0004153e) list_setting_number_pane_vc_t2_ParamLimits

0x4df4,	// (0x0004153e) list_setting_number_pane_vc_t2

0x4e10,	// (0x0004155a) list_setting_number_pane_vc_t3_ParamLimits

0x4e10,	// (0x0004155a) list_setting_number_pane_vc_t3

0x0002,

0xf7c9,	// (0x0004bf13) list_setting_number_pane_vc_t_ParamLimits

0xf7c9,	// (0x0004bf13) list_setting_number_pane_vc_t

0x4e3c,	// (0x00041586) set_value_pane_vc_ParamLimits

0x4e3c,	// (0x00041586) set_value_pane_vc

0xafb7,	// (0x00047701) list_double2_graphic_pane_vc_ParamLimits

0xafb7,	// (0x00047701) list_double2_graphic_pane_vc

0xafb7,	// (0x00047701) list_double2_large_graphic_pane_vc_ParamLimits

0xafb7,	// (0x00047701) list_double2_large_graphic_pane_vc

0xafb7,	// (0x00047701) list_double2_pane_vc_ParamLimits

0xafb7,	// (0x00047701) list_double2_pane_vc

0xafb7,	// (0x00047701) list_double_graphic_heading_pane_vc_ParamLimits

0xafb7,	// (0x00047701) list_double_graphic_heading_pane_vc

0xafb7,	// (0x00047701) list_double_graphic_pane_vc_ParamLimits

0xafb7,	// (0x00047701) list_double_graphic_pane_vc

0xafb7,	// (0x00047701) list_double_heading_pane_vc_ParamLimits

0xafb7,	// (0x00047701) list_double_heading_pane_vc

0xafc9,	// (0x00047713) list_double_large_graphic_pane_vc_ParamLimits

0xafc9,	// (0x00047713) list_double_large_graphic_pane_vc

0xafb7,	// (0x00047701) list_double_number_pane_vc_ParamLimits

0xafb7,	// (0x00047701) list_double_number_pane_vc

0xafb7,	// (0x00047701) list_double_pane_vc_ParamLimits

0xafb7,	// (0x00047701) list_double_pane_vc

0xafb7,	// (0x00047701) list_double_time_pane_vc_ParamLimits

0xafb7,	// (0x00047701) list_double_time_pane_vc

0xafb7,	// (0x00047701) list_setting_number_pane_vc_ParamLimits

0xafb7,	// (0x00047701) list_setting_number_pane_vc

0xafb7,	// (0x00047701) list_setting_pane_vc_ParamLimits

0xafb7,	// (0x00047701) list_setting_pane_vc

0xafb7,	// (0x00047701) list_single_graphic_heading_pane_vc_ParamLimits

0xafb7,	// (0x00047701) list_single_graphic_heading_pane_vc

0xafb7,	// (0x00047701) list_single_heading_pane_vc_ParamLimits

0xafb7,	// (0x00047701) list_single_heading_pane_vc

0x68f6,	// (0x00043040) list_single_number_heading_pane_vc_ParamLimits

0x68f6,	// (0x00043040) list_single_number_heading_pane_vc

0x4d96,	// (0x000414e0) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x4d96,	// (0x000414e0) list_double_graphic_heading_pane_vc_g1

0x8cb8,	// (0x00045402) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x8cb8,	// (0x00045402) list_double_graphic_heading_pane_vc_g2

0x5908,	// (0x00042052) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x5908,	// (0x00042052) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf79e,	// (0x0004bee8) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf79e,	// (0x0004bee8) list_double_graphic_heading_pane_vc_g

0x4f14,	// (0x0004165e) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x4f14,	// (0x0004165e) list_double_graphic_heading_pane_vc_t1

0x4f30,	// (0x0004167a) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x4f30,	// (0x0004167a) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ce,	// (0x0004c118) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ce,	// (0x0004c118) list_double_graphic_heading_pane_vc_t

0x65fa,	// (0x00042d44) list_setting_pane_vc_g1_ParamLimits

0x65fa,	// (0x00042d44) list_setting_pane_vc_g1

0x6606,	// (0x00042d50) list_setting_pane_vc_g2_ParamLimits

0x6606,	// (0x00042d50) list_setting_pane_vc_g2

0x0001,

0xf7c4,	// (0x0004bf0e) list_setting_pane_vc_g_ParamLimits

0xf7c4,	// (0x0004bf0e) list_setting_pane_vc_g

0x4f4e,	// (0x00041698) list_setting_pane_vc_t1_ParamLimits

0x4f4e,	// (0x00041698) list_setting_pane_vc_t1

0x4f6a,	// (0x000416b4) list_setting_pane_vc_t2_ParamLimits

0x4f6a,	// (0x000416b4) list_setting_pane_vc_t2

0x0001,

0xf9fc,	// (0x0004c146) list_setting_pane_vc_t_ParamLimits

0xf9fc,	// (0x0004c146) list_setting_pane_vc_t

0x4e3c,	// (0x00041586) set_value_pane_cp_vc_ParamLimits

0x4e3c,	// (0x00041586) set_value_pane_cp_vc

0x8cb8,	// (0x00045402) list_single_number_heading_pane_vc_g1_ParamLimits

0x8cb8,	// (0x00045402) list_single_number_heading_pane_vc_g1

0x5908,	// (0x00042052) list_single_number_heading_pane_vc_g2_ParamLimits

0x5908,	// (0x00042052) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0004bcf7) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0004bcf7) list_single_number_heading_pane_vc_g

0x4f86,	// (0x000416d0) list_single_number_heading_pane_vc_t1_ParamLimits

0x4f86,	// (0x000416d0) list_single_number_heading_pane_vc_t1

0x4611,	// (0x00040d5b) list_single_number_heading_pane_vc_t2_ParamLimits

0x4611,	// (0x00040d5b) list_single_number_heading_pane_vc_t2

0x4623,	// (0x00040d6d) list_single_number_heading_pane_vc_t3_ParamLimits

0x4623,	// (0x00040d6d) list_single_number_heading_pane_vc_t3

0x0002,

0xfa01,	// (0x0004c14b) list_single_number_heading_pane_vc_t_ParamLimits

0xfa01,	// (0x0004c14b) list_single_number_heading_pane_vc_t

0x4d96,	// (0x000414e0) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x4d96,	// (0x000414e0) list_single_graphic_heading_pane_vc_g1

0x8cb8,	// (0x00045402) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x8cb8,	// (0x00045402) list_single_graphic_heading_pane_vc_g4

0x5908,	// (0x00042052) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x5908,	// (0x00042052) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf79e,	// (0x0004bee8) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf79e,	// (0x0004bee8) list_single_graphic_heading_pane_vc_g

0x4f86,	// (0x000416d0) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x4f86,	// (0x000416d0) list_single_graphic_heading_pane_vc_t1

0x4f9c,	// (0x000416e6) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x4f9c,	// (0x000416e6) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa08,	// (0x0004c152) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa08,	// (0x0004c152) list_single_graphic_heading_pane_vc_t

0x8cb8,	// (0x00045402) list_double2_pane_vc_g1_ParamLimits

0x8cb8,	// (0x00045402) list_double2_pane_vc_g1

0x5908,	// (0x00042052) list_double2_pane_vc_g2_ParamLimits

0x5908,	// (0x00042052) list_double2_pane_vc_g2

0x0001,

0xf5ad,	// (0x0004bcf7) list_double2_pane_vc_g_ParamLimits

0xf5ad,	// (0x0004bcf7) list_double2_pane_vc_g

0x4ec7,	// (0x00041611) list_double2_pane_vc_t1_ParamLimits

0x4ec7,	// (0x00041611) list_double2_pane_vc_t1

0x6a1b,	// (0x00043165) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x6a1b,	// (0x00043165) list_double2_large_graphic_pane_vc_g1

0x8cb8,	// (0x00045402) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x8cb8,	// (0x00045402) list_double2_large_graphic_pane_vc_g2

0x5908,	// (0x00042052) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x5908,	// (0x00042052) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa0d,	// (0x0004c157) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa0d,	// (0x0004c157) list_double2_large_graphic_pane_vc_g

0x4fae,	// (0x000416f8) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x4fae,	// (0x000416f8) list_double2_large_graphic_pane_vc_t1

0x6a27,	// (0x00043171) list_double_time_pane_vc_g1_ParamLimits

0x6a27,	// (0x00043171) list_double_time_pane_vc_g1

0x6a33,	// (0x0004317d) list_double_time_pane_vc_g2_ParamLimits

0x6a33,	// (0x0004317d) list_double_time_pane_vc_g2

0x0001,

0xfa14,	// (0x0004c15e) list_double_time_pane_vc_g_ParamLimits

0xfa14,	// (0x0004c15e) list_double_time_pane_vc_g

0x4fc4,	// (0x0004170e) list_double_time_pane_vc_t1_ParamLimits

0x4fc4,	// (0x0004170e) list_double_time_pane_vc_t1

0x4fe8,	// (0x00041732) list_double_time_pane_vc_t2_ParamLimits

0x4fe8,	// (0x00041732) list_double_time_pane_vc_t2

0x5037,	// (0x00041781) list_double_time_pane_vc_t3_ParamLimits

0x5037,	// (0x00041781) list_double_time_pane_vc_t3

0x5049,	// (0x00041793) list_double_time_pane_vc_t4_ParamLimits

0x5049,	// (0x00041793) list_double_time_pane_vc_t4

0x0003,

0xfa19,	// (0x0004c163) list_double_time_pane_vc_t_ParamLimits

0xfa19,	// (0x0004c163) list_double_time_pane_vc_t

0x8cb8,	// (0x00045402) list_double_pane_vc_g1_ParamLimits

0x8cb8,	// (0x00045402) list_double_pane_vc_g1

0x5908,	// (0x00042052) list_double_pane_vc_g2_ParamLimits

0x5908,	// (0x00042052) list_double_pane_vc_g2

0x0001,

0xf5ad,	// (0x0004bcf7) list_double_pane_vc_g_ParamLimits

0xf5ad,	// (0x0004bcf7) list_double_pane_vc_g

0x505d,	// (0x000417a7) list_double_pane_vc_t1_ParamLimits

0x505d,	// (0x000417a7) list_double_pane_vc_t1

0x5071,	// (0x000417bb) list_double_pane_vc_t2_ParamLimits

0x5071,	// (0x000417bb) list_double_pane_vc_t2

0x0001,

0xfa22,	// (0x0004c16c) list_double_pane_vc_t_ParamLimits

0xfa22,	// (0x0004c16c) list_double_pane_vc_t

0x8cb8,	// (0x00045402) list_double_number_pane_vc_g1_ParamLimits

0x8cb8,	// (0x00045402) list_double_number_pane_vc_g1

0x5908,	// (0x00042052) list_double_number_pane_vc_g2_ParamLimits

0x5908,	// (0x00042052) list_double_number_pane_vc_g2

0x0001,

0xf5ad,	// (0x0004bcf7) list_double_number_pane_vc_g_ParamLimits

0xf5ad,	// (0x0004bcf7) list_double_number_pane_vc_g

0x5089,	// (0x000417d3) list_double_number_pane_vc_t1_ParamLimits

0x5089,	// (0x000417d3) list_double_number_pane_vc_t1

0x509b,	// (0x000417e5) list_double_number_pane_vc_t2_ParamLimits

0x509b,	// (0x000417e5) list_double_number_pane_vc_t2

0x50af,	// (0x000417f9) list_double_number_pane_vc_t3_ParamLimits

0x50af,	// (0x000417f9) list_double_number_pane_vc_t3

0x0002,

0xfa27,	// (0x0004c171) list_double_number_pane_vc_t_ParamLimits

0xfa27,	// (0x0004c171) list_double_number_pane_vc_t

0x6a3f,	// (0x00043189) list_double_large_graphic_pane_vc_g1_ParamLimits

0x6a3f,	// (0x00043189) list_double_large_graphic_pane_vc_g1

0x6a5b,	// (0x000431a5) list_double_large_graphic_pane_vc_g2_ParamLimits

0x6a5b,	// (0x000431a5) list_double_large_graphic_pane_vc_g2

0x6a6f,	// (0x000431b9) list_double_large_graphic_pane_vc_g3_ParamLimits

0x6a6f,	// (0x000431b9) list_double_large_graphic_pane_vc_g3

0x50c7,	// (0x00041811) list_double_large_graphic_pane_vc_g4_ParamLimits

0x50c7,	// (0x00041811) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa2e,	// (0x0004c178) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa2e,	// (0x0004c178) list_double_large_graphic_pane_vc_g

0x50d6,	// (0x00041820) list_double_large_graphic_pane_vc_t1_ParamLimits

0x50d6,	// (0x00041820) list_double_large_graphic_pane_vc_t1

0x50f2,	// (0x0004183c) list_double_large_graphic_pane_vc_t2_ParamLimits

0x50f2,	// (0x0004183c) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa37,	// (0x0004c181) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa37,	// (0x0004c181) list_double_large_graphic_pane_vc_t

0x8cb8,	// (0x00045402) list_double_heading_pane_vc_g1_ParamLimits

0x8cb8,	// (0x00045402) list_double_heading_pane_vc_g1

0x5908,	// (0x00042052) list_double_heading_pane_vc_g2_ParamLimits

0x5908,	// (0x00042052) list_double_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0004bcf7) list_double_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0004bcf7) list_double_heading_pane_vc_g

0x5114,	// (0x0004185e) list_double_heading_pane_vc_t1_ParamLimits

0x5114,	// (0x0004185e) list_double_heading_pane_vc_t1

0x5128,	// (0x00041872) list_double_heading_pane_vc_t2_ParamLimits

0x5128,	// (0x00041872) list_double_heading_pane_vc_t2

0x0001,

0xfa3c,	// (0x0004c186) list_double_heading_pane_vc_t_ParamLimits

0xfa3c,	// (0x0004c186) list_double_heading_pane_vc_t

0x5140,	// (0x0004188a) list_double_graphic_pane_vc_g1_ParamLimits

0x5140,	// (0x0004188a) list_double_graphic_pane_vc_g1

0x6a7e,	// (0x000431c8) list_double_graphic_pane_vc_g2_ParamLimits

0x6a7e,	// (0x000431c8) list_double_graphic_pane_vc_g2

0x8cb8,	// (0x00045402) list_double_graphic_pane_vc_g3_ParamLimits

0x8cb8,	// (0x00045402) list_double_graphic_pane_vc_g3

0x0003,

0xfa41,	// (0x0004c18b) list_double_graphic_pane_vc_g_ParamLimits

0xfa41,	// (0x0004c18b) list_double_graphic_pane_vc_g

0x514c,	// (0x00041896) list_double_graphic_pane_vc_t1_ParamLimits

0x514c,	// (0x00041896) list_double_graphic_pane_vc_t1

0x5176,	// (0x000418c0) list_double_graphic_pane_vc_t2_ParamLimits

0x5176,	// (0x000418c0) list_double_graphic_pane_vc_t2

0x0001,

0xfa4a,	// (0x0004c194) list_double_graphic_pane_vc_t_ParamLimits

0xfa4a,	// (0x0004c194) list_double_graphic_pane_vc_t

0x54a0,	// (0x00041bea) aid_size_cell_fastswap

0x54a8,	// (0x00041bf2) aid_size_cell_touch_ParamLimits

0x54a8,	// (0x00041bf2) aid_size_cell_touch

0x5703,	// (0x00041e4d) popup_fast_swap_wide_window_ParamLimits

0x5703,	// (0x00041e4d) popup_fast_swap_wide_window

0x5817,	// (0x00041f61) touch_pane_ParamLimits

0x5817,	// (0x00041f61) touch_pane

0x8509,	// (0x00044c53) button_value_adjust_pane_cp2

0x4a41,	// (0x0004118b) button_value_adjust_pane_cp4

0x4a65,	// (0x000411af) form_field_data_pane_cp2

0x4a86,	// (0x000411d0) form_field_data_wide_pane_cp2

0x8990,	// (0x000450da) bg_scroll_pane_ParamLimits

0x5b28,	// (0x00042272) scroll_handle_pane_ParamLimits

0x5b3c,	// (0x00042286) scroll_sc2_down_pane_ParamLimits

0x5b3c,	// (0x00042286) scroll_sc2_down_pane

0x89c1,	// (0x0004510b) scroll_sc2_up_pane_ParamLimits

0x89c1,	// (0x0004510b) scroll_sc2_up_pane

0xbbd1,	// (0x0004831b) grid_wheel_folder_pane_g1_ParamLimits

0xbbd1,	// (0x0004831b) grid_wheel_folder_pane_g1

0x5d1d,	// (0x00042467) clock_nsta_pane_cp2_ParamLimits

0x5d1d,	// (0x00042467) clock_nsta_pane_cp2

0x91c4,	// (0x0004590e) listscroll_midp_pane_ParamLimits

0x91d0,	// (0x0004591a) midp_canvas_pane

0x94b8,	// (0x00045c02) nsta_clock_indic_pane

0x94ec,	// (0x00045c36) listscroll_form_pane_vc

0x94f4,	// (0x00045c3e) listscroll_set_pane_vc_ParamLimits

0x94f4,	// (0x00045c3e) listscroll_set_pane_vc

0x95ed,	// (0x00045d37) clock_nsta_pane

0x9668,	// (0x00045db2) indicator_nsta_pane

0x9948,	// (0x00046092) bg_popup_sub_pane_cp2_ParamLimits

0x995c,	// (0x000460a6) find_pane_cp2_ParamLimits

0x995c,	// (0x000460a6) find_pane_cp2

0x9972,	// (0x000460bc) grid_toobar_pane_ParamLimits

0x9a52,	// (0x0004619c) list_form_gen_pane_vc_ParamLimits

0x9a52,	// (0x0004619c) list_form_gen_pane_vc

0x9a68,	// (0x000461b2) scroll_pane_cp8_vc_ParamLimits

0x9a68,	// (0x000461b2) scroll_pane_cp8_vc

0x9ae4,	// (0x0004622e) data_form_wide_pane_vc_ParamLimits

0x9ae4,	// (0x0004622e) data_form_wide_pane_vc

0x9af0,	// (0x0004623a) form_field_data_wide_pane_vc_g1

0x9af8,	// (0x00046242) form_field_data_wide_pane_vc_t1_ParamLimits

0x9af8,	// (0x00046242) form_field_data_wide_pane_vc_t1

0x851d,	// (0x00044c67) input_focus_pane_cp6_vc_ParamLimits

0x851d,	// (0x00044c67) input_focus_pane_cp6_vc

0x9e1e,	// (0x00046568) list_midp_pane_ParamLimits

0x9e2a,	// (0x00046574) scroll_pane_cp16_ParamLimits

0x9e2a,	// (0x00046574) scroll_pane_cp16

0x9e94,	// (0x000465de) button_value_adjust_pane_ParamLimits

0x9e94,	// (0x000465de) button_value_adjust_pane

0xae05,	// (0x0004754f) button_value_adjust_pane_cp6_ParamLimits

0xae05,	// (0x0004754f) button_value_adjust_pane_cp6

0xaf3b,	// (0x00047685) settings_code_pane_cp_ParamLimits

0xaf3b,	// (0x00047685) settings_code_pane_cp

0x25ae,	// (0x0003ecf8) cell_touch_pane_g1

0x25ae,	// (0x0003ecf8) cell_touch_pane_g2

0x0001,

0xf6e3,	// (0x0004be2d) cell_touch_pane_g

0xb4fb,	// (0x00047c45) cell_touch_pane_cp_ParamLimits

0xb4fb,	// (0x00047c45) cell_touch_pane_cp

0xb50b,	// (0x00047c55) cell_touch_pane_ParamLimits

0xb50b,	// (0x00047c55) cell_touch_pane

0x25ae,	// (0x0003ecf8) scroll_sc2_down_pane_g1

0x25ae,	// (0x0003ecf8) scroll_sc2_up_pane_g1

0x7ba4,	// (0x000442ee) bg_set_opt_pane_cp4_vc

0xb51d,	// (0x00047c67) list_set_graphic_pane_vc_g1_ParamLimits

0xb51d,	// (0x00047c67) list_set_graphic_pane_vc_g1

0xb529,	// (0x00047c73) list_set_graphic_pane_vc_g2_ParamLimits

0xb529,	// (0x00047c73) list_set_graphic_pane_vc_g2

0x0001,

0xf9d3,	// (0x0004c11d) list_set_graphic_pane_vc_g_ParamLimits

0xf9d3,	// (0x0004c11d) list_set_graphic_pane_vc_g

0xb535,	// (0x00047c7f) text_primary_small_cp13_vc_ParamLimits

0xb535,	// (0x00047c7f) text_primary_small_cp13_vc

0xb54d,	// (0x00047c97) list_set_graphic_pane_vc_ParamLimits

0xb54d,	// (0x00047c97) list_set_graphic_pane_vc

0x7ba4,	// (0x000442ee) input_focus_pane_cp2_vc

0x25ae,	// (0x0003ecf8) setting_code_pane_vc_g1

0x7ccf,	// (0x00044419) setting_code_pane_vc_t1

0xb560,	// (0x00047caa) set_text_pane_vc_t1_ParamLimits

0xb560,	// (0x00047caa) set_text_pane_vc_t1

0x7ba4,	// (0x000442ee) input_focus_pane_cp1_vc

0xb57c,	// (0x00047cc6) list_set_text_pane_vc

0x25ae,	// (0x0003ecf8) setting_text_pane_vc_g1

0x7ba4,	// (0x000442ee) bg_set_opt_pane_cp2_vc

0x7cc6,	// (0x00044410) setting_slider_graphic_pane_vc_g1

0xb586,	// (0x00047cd0) setting_slider_graphic_pane_vc_t1

0xb596,	// (0x00047ce0) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9d8,	// (0x0004c122) setting_slider_graphic_pane_vc_t

0xb5a6,	// (0x00047cf0) slider_set_pane_cp_vc

0xb5ae,	// (0x00047cf8) slider_set_pane_vc_g1

0xb5b7,	// (0x00047d01) slider_set_pane_vc_g2

0x0006,

0xf9dd,	// (0x0004c127) slider_set_pane_vc_g

0x8569,	// (0x00044cb3) set_opt_bg_pane_g1_copy1

0x8571,	// (0x00044cbb) set_opt_bg_pane_g2_copy1

0xb5e3,	// (0x00047d2d) set_opt_bg_pane_g3_copy1

0x8581,	// (0x00044ccb) set_opt_bg_pane_g4_copy1

0x8589,	// (0x00044cd3) set_opt_bg_pane_g5_copy1

0x8591,	// (0x00044cdb) set_opt_bg_pane_g6_copy1

0xb5ed,	// (0x00047d37) set_opt_bg_pane_g7_copy1

0xb5f7,	// (0x00047d41) set_opt_bg_pane_g8_copy1

0xb601,	// (0x00047d4b) set_opt_bg_pane_g9_copy1

0x7ba4,	// (0x000442ee) bg_set_opt_pane_cp_vc

0xb60b,	// (0x00047d55) setting_slider_pane_vc_t1

0xb61a,	// (0x00047d64) setting_slider_pane_vc_t2

0xb62a,	// (0x00047d74) setting_slider_pane_vc_t3

0x0002,

0xf9ec,	// (0x0004c136) setting_slider_pane_vc_t

0xb63a,	// (0x00047d84) slider_set_pane_vc

0x66af,	// (0x00042df9) volume_set_pane_vc_g1

0x66b8,	// (0x00042e02) volume_set_pane_vc_g2

0x66c1,	// (0x00042e0b) volume_set_pane_vc_g3

0x66ca,	// (0x00042e14) volume_set_pane_vc_g4

0x66d3,	// (0x00042e1d) volume_set_pane_vc_g5

0x66dc,	// (0x00042e26) volume_set_pane_vc_g6

0x66e5,	// (0x00042e2f) volume_set_pane_vc_g7

0x66ee,	// (0x00042e38) volume_set_pane_vc_g8

0x66f7,	// (0x00042e41) volume_set_pane_vc_g9

0x6700,	// (0x00042e4a) volume_set_pane_vc_g10

0x0009,

0xf891,	// (0x0004bfdb) volume_set_pane_vc_g

0xb642,	// (0x00047d8c) volume_set_pane_vc

0xb64a,	// (0x00047d94) button_value_adjust_pane_cp1_vc

0xb654,	// (0x00047d9e) list_highlight_pane_cp2_vc

0xb65d,	// (0x00047da7) list_set_pane_vc_ParamLimits

0xb65d,	// (0x00047da7) list_set_pane_vc

0xb6bb,	// (0x00047e05) main_pane_set_vc_t1_ParamLimits

0xb6bb,	// (0x00047e05) main_pane_set_vc_t1

0xb6d0,	// (0x00047e1a) main_pane_set_vc_t2_ParamLimits

0xb6d0,	// (0x00047e1a) main_pane_set_vc_t2

0xb6e2,	// (0x00047e2c) main_pane_set_vc_t3_ParamLimits

0xb6e2,	// (0x00047e2c) main_pane_set_vc_t3

0xb6f6,	// (0x00047e40) main_pane_set_vc_t4_ParamLimits

0xb6f6,	// (0x00047e40) main_pane_set_vc_t4

0x0003,

0xf9f3,	// (0x0004c13d) main_pane_set_vc_t_ParamLimits

0xf9f3,	// (0x0004c13d) main_pane_set_vc_t

0xb70a,	// (0x00047e54) setting_code_pane_vc_ParamLimits

0xb70a,	// (0x00047e54) setting_code_pane_vc

0xb71b,	// (0x00047e65) setting_slider_graphic_pane_vc

0xb71b,	// (0x00047e65) setting_slider_pane_vc

0xb71b,	// (0x00047e65) setting_text_pane_vc

0xb71b,	// (0x00047e65) setting_volume_pane_vc

0xb725,	// (0x00047e6f) scroll_pane_cp121_vc

0x84f7,	// (0x00044c41) set_content_pane_vc

0xb72d,	// (0x00047e77) button_value_adjust_pane_g1

0xb736,	// (0x00047e80) button_value_adjust_pane_g2

0x0001,

0xfa4f,	// (0x0004c199) button_value_adjust_pane_g

0xb73f,	// (0x00047e89) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb73f,	// (0x00047e89) form_field_slider_wide_pane_vc_t1

0xb753,	// (0x00047e9d) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb753,	// (0x00047e9d) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa54,	// (0x0004c19e) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa54,	// (0x0004c19e) form_field_slider_wide_pane_vc_t

0x7eff,	// (0x00044649) input_focus_pane_cp10_vc_ParamLimits

0x7eff,	// (0x00044649) input_focus_pane_cp10_vc

0xb781,	// (0x00047ecb) slider_cont_pane_cp1_vc_ParamLimits

0xb781,	// (0x00047ecb) slider_cont_pane_cp1_vc

0xb793,	// (0x00047edd) slider_form_pane_g1_cp2

0xb5b7,	// (0x00047d01) slider_form_pane_g2_cp2

0xb7c0,	// (0x00047f0a) form_field_slider_pane_vc_t3

0xb7ce,	// (0x00047f18) form_field_slider_pane_vc_t4

0xb7dc,	// (0x00047f26) slider_form_pane_vc_ParamLimits

0xb7dc,	// (0x00047f26) slider_form_pane_vc

0xb7e9,	// (0x00047f33) form_field_slider_pane_vc_t1_ParamLimits

0xb7e9,	// (0x00047f33) form_field_slider_pane_vc_t1

0xb753,	// (0x00047e9d) form_field_slider_pane_vc_t2_ParamLimits

0xb753,	// (0x00047e9d) form_field_slider_pane_vc_t2

0x0001,

0xfa66,	// (0x0004c1b0) form_field_slider_pane_vc_t_ParamLimits

0xfa66,	// (0x0004c1b0) form_field_slider_pane_vc_t

0x7eff,	// (0x00044649) input_focus_pane_cp9_vc_ParamLimits

0x7eff,	// (0x00044649) input_focus_pane_cp9_vc

0xb805,	// (0x00047f4f) slider_cont_pane_vc_ParamLimits

0xb805,	// (0x00047f4f) slider_cont_pane_vc

0xb819,	// (0x00047f63) list_form_graphic_pane_cp_vc_ParamLimits

0xb819,	// (0x00047f63) list_form_graphic_pane_cp_vc

0x9af0,	// (0x0004623a) form_field_popup_wide_pane_vc_g1

0xb82e,	// (0x00047f78) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb82e,	// (0x00047f78) form_field_popup_wide_pane_vc_t1

0x851d,	// (0x00044c67) input_focus_pane_cp8_vc_ParamLimits

0x851d,	// (0x00044c67) input_focus_pane_cp8_vc

0xb873,	// (0x00047fbd) list_form_wide_pane_vc_ParamLimits

0xb873,	// (0x00047fbd) list_form_wide_pane_vc

0xb87f,	// (0x00047fc9) list_form_graphic_pane_vc_g1

0xb887,	// (0x00047fd1) list_form_graphic_pane_vc_t1_ParamLimits

0xb887,	// (0x00047fd1) list_form_graphic_pane_vc_t1

0x7c84,	// (0x000443ce) list_highlight_pane_cp5_vc_ParamLimits

0x7c84,	// (0x000443ce) list_highlight_pane_cp5_vc

0xb8a3,	// (0x00047fed) list_form_graphic_pane_vc_ParamLimits

0xb8a3,	// (0x00047fed) list_form_graphic_pane_vc

0x9af0,	// (0x0004623a) form_field_popup_pane_vc_g1

0xb8b9,	// (0x00048003) form_field_popup_pane_vc_t1_ParamLimits

0xb8b9,	// (0x00048003) form_field_popup_pane_vc_t1

0x851d,	// (0x00044c67) input_focus_pane_cp7_vc_ParamLimits

0x851d,	// (0x00044c67) input_focus_pane_cp7_vc

0xb8d0,	// (0x0004801a) list_form_pane_vc_ParamLimits

0xb8d0,	// (0x0004801a) list_form_pane_vc

0xb8dc,	// (0x00048026) data_form_pane_vc_t1_ParamLimits

0xb8dc,	// (0x00048026) data_form_pane_vc_t1

0x8569,	// (0x00044cb3) input_focus_pane_vc_g1

0x8571,	// (0x00044cbb) input_focus_pane_vc_g2

0x8579,	// (0x00044cc3) input_focus_pane_vc_g3

0x8581,	// (0x00044ccb) input_focus_pane_vc_g4

0x8589,	// (0x00044cd3) input_focus_pane_vc_g5

0x8591,	// (0x00044cdb) input_focus_pane_vc_g6

0x8599,	// (0x00044ce3) input_focus_pane_vc_g7

0x85a1,	// (0x00044ceb) input_focus_pane_vc_g8

0x85a9,	// (0x00044cf3) input_focus_pane_vc_g9

0x25ae,	// (0x0003ecf8) input_focus_pane_vc_g10

0x0009,

0xf66c,	// (0x0004bdb6) input_focus_pane_vc_g

0x9ae4,	// (0x0004622e) data_form_pane_vc_ParamLimits

0x9ae4,	// (0x0004622e) data_form_pane_vc

0x9af0,	// (0x0004623a) form_field_data_pane_vc_g1

0xb8f7,	// (0x00048041) form_field_data_pane_vc_t1_ParamLimits

0xb8f7,	// (0x00048041) form_field_data_pane_vc_t1

0x851d,	// (0x00044c67) input_focus_pane_vc_ParamLimits

0x851d,	// (0x00044c67) input_focus_pane_vc

0xb911,	// (0x0004805b) button_value_adjust_pane_cp3_vc

0xb919,	// (0x00048063) button_value_adjust_pane_cp5_vc

0xb921,	// (0x0004806b) form_field_data_pane_vc_ParamLimits

0xb921,	// (0x0004806b) form_field_data_pane_vc

0xb938,	// (0x00048082) form_field_data_pane_vc_cp2

0xb940,	// (0x0004808a) form_field_data_wide_pane_vc_ParamLimits

0xb940,	// (0x0004808a) form_field_data_wide_pane_vc

0xb956,	// (0x000480a0) form_field_data_wide_pane_vc_cp2

0xb95e,	// (0x000480a8) form_field_popup_pane_vc_ParamLimits

0xb95e,	// (0x000480a8) form_field_popup_pane_vc

0xb975,	// (0x000480bf) form_field_popup_wide_pane_vc_ParamLimits

0xb975,	// (0x000480bf) form_field_popup_wide_pane_vc

0xb98b,	// (0x000480d5) form_field_slider_pane_vc_ParamLimits

0xb98b,	// (0x000480d5) form_field_slider_pane_vc

0xb99e,	// (0x000480e8) form_field_slider_wide_pane_vc_ParamLimits

0xb99e,	// (0x000480e8) form_field_slider_wide_pane_vc

0xb9b1,	// (0x000480fb) grid_touch_1_pane_ParamLimits

0xb9b1,	// (0x000480fb) grid_touch_1_pane

0xb9bd,	// (0x00048107) grid_touch_2_pane_ParamLimits

0xb9bd,	// (0x00048107) grid_touch_2_pane

0x9483,	// (0x00045bcd) touch_pane_g1_ParamLimits

0x9483,	// (0x00045bcd) touch_pane_g1

0xb9d5,	// (0x0004811f) cell_app_pane_cp_wide_ParamLimits

0xb9d5,	// (0x0004811f) cell_app_pane_cp_wide

0xb9e6,	// (0x00048130) grid_popup_fast_wide_pane_ParamLimits

0xb9e6,	// (0x00048130) grid_popup_fast_wide_pane

0xb9fa,	// (0x00048144) scroll_pane_cp19_ParamLimits

0xb9fa,	// (0x00048144) scroll_pane_cp19

0x7ba4,	// (0x000442ee) bg_popup_window_pane_cp20

0xba0e,	// (0x00048158) listscroll_popup_fast_wide_pane

0xba16,	// (0x00048160) grid_indicator_nsta_pane

0xba28,	// (0x00048172) clock_nsta_pane_g1

0xba31,	// (0x0004817b) clock_nsta_pane_t1

0xba4d,	// (0x00048197) cell_indicator_nsta_pane_ParamLimits

0xba4d,	// (0x00048197) cell_indicator_nsta_pane

0xba82,	// (0x000481cc) cell_indicator_nsta_pane_g1

0xba90,	// (0x000481da) cell_indicator_nsta_pane_g2

0x0001,

0xfa77,	// (0x0004c1c1) cell_indicator_nsta_pane_g

0xbaa2,	// (0x000481ec) clock_nsta_pane_cp

0xbaab,	// (0x000481f5) indicator_nsta_pane_cp

0xbab5,	// (0x000481ff) nsta_clock_indic_pane_g1

0x7d4d,	// (0x00044497) grid_indicator_pane

0x8ab6,	// (0x00045200) scroll_pane_cp29

0x5c6c,	// (0x000423b6) indicator_nsta_pane_cp2_ParamLimits

0x5c6c,	// (0x000423b6) indicator_nsta_pane_cp2

0x7c84,	// (0x000443ce) main_apps_wheel_pane

0x9cff,	// (0x00046449) form_midp_field_text_pane_ParamLimits

0x9e4a,	// (0x00046594) scroll_bar_cp050_ParamLimits

0xbb0e,	// (0x00048258) cell_indicator_pane_ParamLimits

0xbb0e,	// (0x00048258) cell_indicator_pane

0xbb25,	// (0x0004826f) cell_indicator_pane_g1

0xbb2f,	// (0x00048279) grid_wheel_folder_pane_ParamLimits

0xbb2f,	// (0x00048279) grid_wheel_folder_pane

0xbb45,	// (0x0004828f) list_wheel_apps_pane_ParamLimits

0xbb45,	// (0x0004828f) list_wheel_apps_pane

0xbb56,	// (0x000482a0) main_apps_wheel_pane_g1_ParamLimits

0xbb56,	// (0x000482a0) main_apps_wheel_pane_g1

0xbb6a,	// (0x000482b4) main_apps_wheel_pane_g2_ParamLimits

0xbb6a,	// (0x000482b4) main_apps_wheel_pane_g2

0x0001,

0xfa93,	// (0x0004c1dd) main_apps_wheel_pane_g_ParamLimits

0xfa93,	// (0x0004c1dd) main_apps_wheel_pane_g

0xbb82,	// (0x000482cc) main_apps_wheel_pane_t1_ParamLimits

0xbb82,	// (0x000482cc) main_apps_wheel_pane_t1

0xbba5,	// (0x000482ef) list_wheel_apps_pane_g1

0xbbad,	// (0x000482f7) list_wheel_apps_pane_g2

0xbbb5,	// (0x000482ff) list_wheel_apps_pane_g3

0xbbbd,	// (0x00048307) list_wheel_apps_pane_g4

0xbbc7,	// (0x00048311) list_wheel_apps_pane_g5

0x0004,

0xfa98,	// (0x0004c1e2) list_wheel_apps_pane_g

0x9048,	// (0x00045792) navi_icon_text_pane

0x951c,	// (0x00045c66) aid_fill_nsta

0xbbea,	// (0x00048334) navi_icon_text_pane_g1

0xbbf6,	// (0x00048340) navi_icon_text_pane_t1

0x8edb,	// (0x00045625) list_set_graphic_pane_t1_ParamLimits

0x8edb,	// (0x00045625) list_set_graphic_pane_t1

0xa5b5,	// (0x00046cff) popup_midp_note_alarm_window_t6_ParamLimits

0xa5b5,	// (0x00046cff) popup_midp_note_alarm_window_t6

0xa5c7,	// (0x00046d11) popup_midp_note_alarm_window_t7_ParamLimits

0xa5c7,	// (0x00046d11) popup_midp_note_alarm_window_t7

0xa5d9,	// (0x00046d23) popup_midp_note_alarm_window_t8_ParamLimits

0xa5d9,	// (0x00046d23) popup_midp_note_alarm_window_t8

0xa5eb,	// (0x00046d35) popup_midp_note_alarm_window_t9_ParamLimits

0xa5eb,	// (0x00046d35) popup_midp_note_alarm_window_t9

0xa5fd,	// (0x00046d47) popup_midp_note_alarm_window_t10_ParamLimits

0xa5fd,	// (0x00046d47) popup_midp_note_alarm_window_t10

0xa60f,	// (0x00046d59) popup_midp_note_alarm_window_t11_ParamLimits

0xa60f,	// (0x00046d59) popup_midp_note_alarm_window_t11

0xa621,	// (0x00046d6b) scroll_pane_cp17_ParamLimits

0xa621,	// (0x00046d6b) scroll_pane_cp17

0x66af,	// (0x00042df9) volume_small_pane_cp_g1

0x6a9b,	// (0x000431e5) volume_small_pane_cp_g2

0x6aa4,	// (0x000431ee) volume_small_pane_cp_g3

0x6aad,	// (0x000431f7) volume_small_pane_cp_g4

0x6ab6,	// (0x00043200) volume_small_pane_cp_g5

0x6abf,	// (0x00043209) volume_small_pane_cp_g6

0x6ac8,	// (0x00043212) volume_small_pane_cp_g7

0x6ad1,	// (0x0004321b) volume_small_pane_cp_g8

0x6ada,	// (0x00043224) volume_small_pane_cp_g9

0x6ae3,	// (0x0004322d) volume_small_pane_cp_g10

0x9299,	// (0x000459e3) midp_ticker_pane_g1_ParamLimits

0x92a5,	// (0x000459ef) midp_ticker_pane_g2_ParamLimits

0xf738,	// (0x0004be82) midp_ticker_pane_g_ParamLimits

0x92b1,	// (0x000459fb) midp_ticker_pane_t1_ParamLimits

0x9532,	// (0x00045c7c) aid_fill_nsta_2

0x9e36,	// (0x00046580) list_form2_midp_pane

0xaf86,	// (0x000476d0) midp_editing_number_pane_ParamLimits

0xaf95,	// (0x000476df) midp_ticker_pane_ParamLimits

0xbc08,	// (0x00048352) form2_midp_field_pane

0xbc2c,	// (0x00048376) scroll_pane_cp51

0xbc4c,	// (0x00048396) form2_midp_button_pane_ParamLimits

0xbc4c,	// (0x00048396) form2_midp_button_pane

0xbc5e,	// (0x000483a8) form2_midp_content_pane_ParamLimits

0xbc5e,	// (0x000483a8) form2_midp_content_pane

0xbc78,	// (0x000483c2) form2_midp_field_choice_group_pane

0xbc80,	// (0x000483ca) form2_midp_field_pane_g1

0xbc88,	// (0x000483d2) form2_midp_field_pane_g2

0xbc90,	// (0x000483da) form2_midp_field_pane_g3

0xbc98,	// (0x000483e2) form2_midp_field_pane_g4

0x0003,

0xfabd,	// (0x0004c207) form2_midp_field_pane_g

0xbca0,	// (0x000483ea) form2_midp_gauge_slider_pane

0xbca8,	// (0x000483f2) form2_midp_gauge_wait_pane

0xbcb0,	// (0x000483fa) form2_midp_image_pane_ParamLimits

0xbcb0,	// (0x000483fa) form2_midp_image_pane

0xbccb,	// (0x00048415) form2_midp_label_pane_ParamLimits

0xbccb,	// (0x00048415) form2_midp_label_pane

0xbce4,	// (0x0004842e) form2_midp_label_pane_cp_ParamLimits

0xbce4,	// (0x0004842e) form2_midp_label_pane_cp

0xbd05,	// (0x0004844f) form2_midp_string_pane_ParamLimits

0xbd05,	// (0x0004844f) form2_midp_string_pane

0x51a0,	// (0x000418ea) form2_midp_text_pane_ParamLimits

0x51a0,	// (0x000418ea) form2_midp_text_pane

0xbd17,	// (0x00048461) form2_midp_time_pane

0xbd27,	// (0x00048471) input_focus_pane_cp51_ParamLimits

0xbd27,	// (0x00048471) input_focus_pane_cp51

0xbd3f,	// (0x00048489) form2_midp_label_pane_t1_ParamLimits

0xbd3f,	// (0x00048489) form2_midp_label_pane_t1

0x51bf,	// (0x00041909) form2_mdip_text_pane_t1_ParamLimits

0x51bf,	// (0x00041909) form2_mdip_text_pane_t1

0x51dd,	// (0x00041927) form2_midp_time_pane_t1

0xbd88,	// (0x000484d2) form2_midp_gauge_slider_pane_t1

0xbd9a,	// (0x000484e4) form2_midp_gauge_slider_pane_t2

0xbdac,	// (0x000484f6) form2_midp_gauge_slider_pane_t3

0x0002,

0xfac6,	// (0x0004c210) form2_midp_gauge_slider_pane_t

0xbdbe,	// (0x00048508) form2_midp_slider_pane

0xbdca,	// (0x00048514) form2_midp_gauge_wait_pane_t1

0xbdd8,	// (0x00048522) form2_midp_wait_pane_ParamLimits

0xbdd8,	// (0x00048522) form2_midp_wait_pane

0xbe03,	// (0x0004854d) list_single_2graphic_pane_cp4_ParamLimits

0xbe03,	// (0x0004854d) list_single_2graphic_pane_cp4

0x9b58,	// (0x000462a2) list_single_midp_graphic_pane_cp_ParamLimits

0x9b58,	// (0x000462a2) list_single_midp_graphic_pane_cp

0x7ba4,	// (0x000442ee) list_highlight_pane_cp20

0xbe27,	// (0x00048571) list_single_2graphic_pane_g1_cp4

0xbe2f,	// (0x00048579) list_single_2graphic_pane_g2_cp4

0xbe37,	// (0x00048581) list_single_2graphic_pane_t1_cp4

0x7c84,	// (0x000443ce) list_highlight_pane_cp21

0xbe46,	// (0x00048590) list_single_midp_graphic_pane_g4_cp

0xbe55,	// (0x0004859f) list_single_midp_graphic_pane_t1_cp

0xbe6a,	// (0x000485b4) form2_mdip_string_pane_t1_ParamLimits

0xbe6a,	// (0x000485b4) form2_mdip_string_pane_t1

0x7ba4,	// (0x000442ee) bg_wml_button_pane_cp2

0x25ae,	// (0x0003ecf8) form2_midp_image_pane_g1

0x5976,	// (0x000420c0) list_double_large_graphic_pane_g5_ParamLimits

0x5976,	// (0x000420c0) list_double_large_graphic_pane_g5

0x91c4,	// (0x0004590e) midp_form_pane_ParamLimits

0x7c84,	// (0x000443ce) main_apps_wheel_pane_ParamLimits

0x634f,	// (0x00042a99) popup_preview_window_ParamLimits

0x634f,	// (0x00042a99) popup_preview_window

0x650a,	// (0x00042c54) popup_touch_info_window_ParamLimits

0x650a,	// (0x00042c54) popup_touch_info_window

0x6528,	// (0x00042c72) popup_touch_menu_window_ParamLimits

0x6528,	// (0x00042c72) popup_touch_menu_window

0x25a4,	// (0x0003ecee) bg_popup_sub_pane_cp6

0xbf63,	// (0x000486ad) list_touch_menu_pane

0xbf6b,	// (0x000486b5) list_single_touch_menu_pane_ParamLimits

0xbf6b,	// (0x000486b5) list_single_touch_menu_pane

0xbf81,	// (0x000486cb) list_single_touch_menu_pane_t1

0x7c84,	// (0x000443ce) bg_popup_sub_pane_cp7_ParamLimits

0x7c84,	// (0x000443ce) bg_popup_sub_pane_cp7

0xbf8f,	// (0x000486d9) heading_sub_pane

0xbf97,	// (0x000486e1) list_touch_info_pane_ParamLimits

0xbf97,	// (0x000486e1) list_touch_info_pane

0xbfa6,	// (0x000486f0) list_single_touch_info_pane_ParamLimits

0xbfa6,	// (0x000486f0) list_single_touch_info_pane

0xbfb8,	// (0x00048702) list_single_touch_info_pane_t1

0xbfc6,	// (0x00048710) list_single_touch_info_pane_t2

0x0001,

0xfad4,	// (0x0004c21e) list_single_touch_info_pane_t

0x91bc,	// (0x00045906) bg_popup_heading_pane_cp

0xbfd4,	// (0x0004871e) heading_sub_pane_t1

0x9a7e,	// (0x000461c8) bg_popup_preview_window_pane_cp_ParamLimits

0x9a7e,	// (0x000461c8) bg_popup_preview_window_pane_cp

0xbf8f,	// (0x000486d9) heading_preview_pane

0xbf97,	// (0x000486e1) list_preview_pane_ParamLimits

0xbf97,	// (0x000486e1) list_preview_pane

0xbfe2,	// (0x0004872c) popup_preview_window_g1

0xbfa6,	// (0x000486f0) list_single_preview_pane_ParamLimits

0xbfa6,	// (0x000486f0) list_single_preview_pane

0xbfea,	// (0x00048734) list_single_preview_pane_g1

0xbff2,	// (0x0004873c) list_single_preview_pane_t1

0xbfb8,	// (0x00048702) list_single_preview_pane_t2

0x0001,

0xfad9,	// (0x0004c223) list_single_preview_pane_t

0xc000,	// (0x0004874a) bg_popup_heading_pane_cp2_ParamLimits

0xc000,	// (0x0004874a) bg_popup_heading_pane_cp2

0xc016,	// (0x00048760) heading_preview_pane_g1

0xc01e,	// (0x00048768) heading_preview_pane_t1_ParamLimits

0xc01e,	// (0x00048768) heading_preview_pane_t1

0x7d70,	// (0x000444ba) soft_indicator_pane_t1_ParamLimits

0x8484,	// (0x00044bce) scroll_pane_ParamLimits

0x89af,	// (0x000450f9) scroll_sc2_left_pane

0x89b8,	// (0x00045102) scroll_sc2_right_pane

0x89d7,	// (0x00045121) scroll_bg_pane_g1_ParamLimits

0x89ec,	// (0x00045136) scroll_bg_pane_g2_ParamLimits

0x8a04,	// (0x0004514e) scroll_bg_pane_g3_ParamLimits

0xf6c3,	// (0x0004be0d) scroll_bg_pane_g_ParamLimits

0x89d7,	// (0x00045121) scroll_handle_pane_g1_ParamLimits

0x8a26,	// (0x00045170) scroll_handle_pane_g2_ParamLimits

0x8a04,	// (0x0004514e) scroll_handle_pane_g3_ParamLimits

0xf6ca,	// (0x0004be14) scroll_handle_pane_g_ParamLimits

0x5fce,	// (0x00042718) popup_choice_list_window_ParamLimits

0x5fce,	// (0x00042718) popup_choice_list_window

0x9954,	// (0x0004609e) choice_list_pane

0x99d6,	// (0x00046120) cell_toolbar_pane_t1

0x99fe,	// (0x00046148) toolbar_button_pane_ParamLimits

0xaadb,	// (0x00047225) ai_gene_pane_1_t2_ParamLimits

0xaadb,	// (0x00047225) ai_gene_pane_1_t2

0x0001,

0xf8ed,	// (0x0004c037) ai_gene_pane_1_t_ParamLimits

0xf8ed,	// (0x0004c037) ai_gene_pane_1_t

0xc03b,	// (0x00048785) scroll_sc2_left_pane_g1

0xc03b,	// (0x00048785) scroll_sc2_right_pane_g1

0x94e0,	// (0x00045c2a) bg_popup_sub_pane_cp10

0xc045,	// (0x0004878f) list_choice_list_pane

0xc05e,	// (0x000487a8) list_single_choice_list_pane_ParamLimits

0xc05e,	// (0x000487a8) list_single_choice_list_pane

0xc071,	// (0x000487bb) list_single_choice_list_pane_g1

0x86b5,	// (0x00044dff) list_single_choice_list_pane_t1_ParamLimits

0x86b5,	// (0x00044dff) list_single_choice_list_pane_t1

0xc079,	// (0x000487c3) choice_list_pane_g1

0xc081,	// (0x000487cb) choice_list_pane_t1

0x25a4,	// (0x0003ecee) input_focus_pane_cp11

0x888c,	// (0x00044fd6) title_pane_stacon_g2_ParamLimits

0x888c,	// (0x00044fd6) title_pane_stacon_g2

0x0002,

0xf6a9,	// (0x0004bdf3) title_pane_stacon_g_ParamLimits

0xf6a9,	// (0x0004bdf3) title_pane_stacon_g

0x91bc,	// (0x00045906) cursor_press_pane

0x607a,	// (0x000427c4) popup_fep_hwr_window_ParamLimits

0x607a,	// (0x000427c4) popup_fep_hwr_window

0x60f4,	// (0x0004283e) popup_fep_vkb_window_ParamLimits

0x60f4,	// (0x0004283e) popup_fep_vkb_window

0xc08f,	// (0x000487d9) cursor_press_pane_g1

0x0002,

0xfb02,	// (0x0004c24c) fep_vkb_side_pane_g_ParamLimits

0x6b25,	// (0x0004326f) fep_hwr_candidate_pane_ParamLimits

0x6b25,	// (0x0004326f) fep_hwr_candidate_pane

0x6b4f,	// (0x00043299) fep_hwr_side_pane_ParamLimits

0x6b4f,	// (0x00043299) fep_hwr_side_pane

0x6b6f,	// (0x000432b9) fep_hwr_top_pane_ParamLimits

0x6b6f,	// (0x000432b9) fep_hwr_top_pane

0x6b87,	// (0x000432d1) fep_hwr_write_pane_ParamLimits

0x6b87,	// (0x000432d1) fep_hwr_write_pane

0xfb02,	// (0x0004c24c) fep_vkb_side_pane_g

0xc097,	// (0x000487e1) fep_hwr_top_pane_g1

0xc0a9,	// (0x000487f3) fep_hwr_top_pane_g2

0x6bb3,	// (0x000432fd) fep_hwr_top_pane_g3

0x0002,

0xfade,	// (0x0004c228) fep_hwr_top_pane_g

0x6bc8,	// (0x00043312) fep_hwr_top_text_pane

0x8ba6,	// (0x000452f0) fep_hwr_top_text_pane_g1

0xc0df,	// (0x00048829) fep_hwr_top_text_pane_t1

0x6cbe,	// (0x00043408) fep_hwr_candidate_pane_g1

0xc332,	// (0x00048a7c) fep_vkb_keypad_pane_g3_ParamLimits

0xc332,	// (0x00048a7c) fep_vkb_keypad_pane_g3

0xc35a,	// (0x00048aa4) fep_vkb_keypad_pane_g4_ParamLimits

0xc35a,	// (0x00048aa4) fep_vkb_keypad_pane_g4

0xc3c9,	// (0x00048b13) fep_vkb_bottom_pane_g2_ParamLimits

0xc3c9,	// (0x00048b13) fep_vkb_bottom_pane_g2

0x0001,

0xfb09,	// (0x0004c253) fep_vkb_bottom_pane_g_ParamLimits

0xfb09,	// (0x0004c253) fep_vkb_bottom_pane_g

0xc03b,	// (0x00048785) cell_vkb_side_pane_g2

0x0001,

0xfb13,	// (0x0004c25d) cell_vkb_side_pane_g

0xc454,	// (0x00048b9e) cell_vkb_side_pane_t1

0xc462,	// (0x00048bac) cell_vkb_side_pane_t1_copy1

0xc03b,	// (0x00048785) bg_fep_vkb_candidate_pane_g2

0xc58e,	// (0x00048cd8) cell_vkb_candidate_pane_ParamLimits

0xc0ed,	// (0x00048837) aid_size_cell_vkb_ParamLimits

0xc0ed,	// (0x00048837) aid_size_cell_vkb

0xc58e,	// (0x00048cd8) cell_vkb_candidate_pane

0x6cd8,	// (0x00043422) bg_popup_fep_shadow_pane_g1

0xc17b,	// (0x000488c5) fep_vkb_bottom_pane_ParamLimits

0xc17b,	// (0x000488c5) fep_vkb_bottom_pane

0xc1b1,	// (0x000488fb) fep_vkb_candidate_pane_ParamLimits

0xc1b1,	// (0x000488fb) fep_vkb_candidate_pane

0xc1cd,	// (0x00048917) fep_vkb_keypad_pane_ParamLimits

0xc1cd,	// (0x00048917) fep_vkb_keypad_pane

0xc213,	// (0x0004895d) fep_vkb_side_pane_ParamLimits

0xc213,	// (0x0004895d) fep_vkb_side_pane

0xc24f,	// (0x00048999) fep_vkb_top_pane_ParamLimits

0xc24f,	// (0x00048999) fep_vkb_top_pane

0xc28b,	// (0x000489d5) fep_vkb_top_pane_g1_ParamLimits

0xc28b,	// (0x000489d5) fep_vkb_top_pane_g1

0xc29a,	// (0x000489e4) fep_vkb_top_pane_g2_ParamLimits

0xc29a,	// (0x000489e4) fep_vkb_top_pane_g2

0xc2a9,	// (0x000489f3) fep_vkb_top_pane_g3_ParamLimits

0xc2a9,	// (0x000489f3) fep_vkb_top_pane_g3

0x0003,

0xfaf9,	// (0x0004c243) fep_vkb_top_pane_g_ParamLimits

0xfaf9,	// (0x0004c243) fep_vkb_top_pane_g

0xc2c7,	// (0x00048a11) fep_vkb_top_text_pane_ParamLimits

0xc2c7,	// (0x00048a11) fep_vkb_top_text_pane

0xc2d8,	// (0x00048a22) fep_vkb_side_pane_g1_ParamLimits

0xc2d8,	// (0x00048a22) fep_vkb_side_pane_g1

0xc321,	// (0x00048a6b) grid_vkb_side_pane_ParamLimits

0xc321,	// (0x00048a6b) grid_vkb_side_pane

0x6ce0,	// (0x0004342a) bg_popup_fep_shadow_pane_g2

0x6ce9,	// (0x00043433) bg_popup_fep_shadow_pane_g3

0x6cf1,	// (0x0004343b) bg_popup_fep_shadow_pane_g4

0x6cfa,	// (0x00043444) bg_popup_fep_shadow_pane_g5

0x6d04,	// (0x0004344e) bg_popup_fep_shadow_pane_g6

0x6d0c,	// (0x00043456) bg_popup_fep_shadow_pane_g7

0x8589,	// (0x00044cd3) bg_popup_fep_shadow_pane_g8

0xc378,	// (0x00048ac2) grid_vkb_keypad_number_pane_ParamLimits

0xc378,	// (0x00048ac2) grid_vkb_keypad_number_pane

0xc388,	// (0x00048ad2) grid_vkb_keypad_pane_ParamLimits

0xc388,	// (0x00048ad2) grid_vkb_keypad_pane

0xc3ae,	// (0x00048af8) fep_vkb_bottom_pane_g1_ParamLimits

0xc3ae,	// (0x00048af8) fep_vkb_bottom_pane_g1

0xc3d7,	// (0x00048b21) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc3d7,	// (0x00048b21) grid_vkb_keypad_bottom_left_pane

0xc3ec,	// (0x00048b36) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc3ec,	// (0x00048b36) grid_vkb_keypad_bottom_right_pane

0xc401,	// (0x00048b4b) fep_vkb_top_text_pane_g1

0xc41c,	// (0x00048b66) fep_vkb_top_text_pane_t1

0xc431,	// (0x00048b7b) cell_vkb_side_pane_ParamLimits

0xc431,	// (0x00048b7b) cell_vkb_side_pane

0xc03b,	// (0x00048785) cell_vkb_side_pane_g1

0xc470,	// (0x00048bba) cell_vkb_keypad_pane_ParamLimits

0xc470,	// (0x00048bba) cell_vkb_keypad_pane

0xc4e5,	// (0x00048c2f) cell_vkb_keypad_pane_g1

0x0008,

0xfb26,	// (0x0004c270) bg_popup_fep_shadow_pane_g

0xc03b,	// (0x00048785) cell_hwr_side_pane_g1

0xc03b,	// (0x00048785) cell_hwr_side_pane_g2

0xc4ef,	// (0x00048c39) cell_vkb_keypad_pane_t1

0xc4fd,	// (0x00048c47) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc4fd,	// (0x00048c47) cell_vkb_keypad_bottom_left_pane

0xc51a,	// (0x00048c64) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc51a,	// (0x00048c64) cell_vkb_keypad_bottom_right_pane

0xc03b,	// (0x00048785) cell_vkb_keypad_bottom_left_pane_g1

0xc03b,	// (0x00048785) cell_vkb_keypad_bottom_right_pane_g1

0xc553,	// (0x00048c9d) cell_vkb_keypad_number_pane_ParamLimits

0xc553,	// (0x00048c9d) cell_vkb_keypad_number_pane

0xc572,	// (0x00048cbc) cell_vkb_keypad_number_pane_g1

0xc57c,	// (0x00048cc6) cell_vkb_keypad_number_pane_g2

0xc585,	// (0x00048ccf) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb18,	// (0x0004c262) cell_vkb_keypad_number_pane_g

0xc4ef,	// (0x00048c39) cell_vkb_keypad_number_pane_t1

0xc5a9,	// (0x00048cf3) fep_vkb_candidate_pane_g1

0x0001,

0xfb13,	// (0x0004c25d) cell_hwr_side_pane_g

0xc5c2,	// (0x00048d0c) cell_hwr_side_pane_t1

0x6d1e,	// (0x00043468) cell_hwr_side_pane_t1_copy1

0xc2b9,	// (0x00048a03) cell_hwr_candidate_pane_g1

0x6d2c,	// (0x00043476) cell_hwr_candidate_pane_t1

0xc03b,	// (0x00048785) cell_vkb_candidate_pane_g2

0xc648,	// (0x00048d92) cell_vkb_candidate_pane_t1

0x6aec,	// (0x00043236) bg_popup_fep_shadow_pane_ParamLimits

0x6aec,	// (0x00043236) bg_popup_fep_shadow_pane

0x2574,	// (0x0003ecbe) bg_fep_hwr_top_pane_g4

0xc0bb,	// (0x00048805) bg_hwr_side_pane_g1_ParamLimits

0xc0bb,	// (0x00048805) bg_hwr_side_pane_g1

0x6c04,	// (0x0004334e) cell_hwr_side_pane_ParamLimits

0x6c04,	// (0x0004334e) cell_hwr_side_pane

0x6c3f,	// (0x00043389) fep_hwr_write_pane_g1_ParamLimits

0x6c3f,	// (0x00043389) fep_hwr_write_pane_g1

0x6c4c,	// (0x00043396) fep_hwr_write_pane_g2_ParamLimits

0x6c4c,	// (0x00043396) fep_hwr_write_pane_g2

0x6c59,	// (0x000433a3) fep_hwr_write_pane_g3_ParamLimits

0x6c59,	// (0x000433a3) fep_hwr_write_pane_g3

0x6c67,	// (0x000433b1) fep_hwr_write_pane_g4_ParamLimits

0x6c67,	// (0x000433b1) fep_hwr_write_pane_g4

0x0005,

0xfae5,	// (0x0004c22f) fep_hwr_write_pane_g_ParamLimits

0xfae5,	// (0x0004c22f) fep_hwr_write_pane_g

0x2574,	// (0x0003ecbe) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x2574,	// (0x0003ecbe) bg_fep_hwr_candidate_pane_g2

0x6c7c,	// (0x000433c6) cell_hwr_candidate_pane_ParamLimits

0x6c7c,	// (0x000433c6) cell_hwr_candidate_pane

0x6cbe,	// (0x00043408) fep_hwr_candidate_pane_g1_ParamLimits

0xc11b,	// (0x00048865) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc11b,	// (0x00048865) bg_popup_fep_shadow_pane_cp2

0xc2b9,	// (0x00048a03) fep_vkb_top_pane_g4_ParamLimits

0xc2b9,	// (0x00048a03) fep_vkb_top_pane_g4

0xc2ff,	// (0x00048a49) fep_vkb_side_pane_g2_ParamLimits

0xc2ff,	// (0x00048a49) fep_vkb_side_pane_g2

0x496e,	// (0x000410b8) list_setting_pane_t4_ParamLimits

0x496e,	// (0x000410b8) list_setting_pane_t4

0x4a08,	// (0x00041152) list_setting_number_pane_t5_ParamLimits

0x4a08,	// (0x00041152) list_setting_number_pane_t5

0x8bed,	// (0x00045337) list_double_heading_pane_cp2_ParamLimits

0x8bed,	// (0x00045337) list_double_heading_pane_cp2

0x84b8,	// (0x00044c02) list_double_heading_pane_g1_cp2_ParamLimits

0x84b8,	// (0x00044c02) list_double_heading_pane_g1_cp2

0x852b,	// (0x00044c75) list_double_heading_pane_g2_cp2_ParamLimits

0x852b,	// (0x00044c75) list_double_heading_pane_g2_cp2

0xc656,	// (0x00048da0) list_double_heading_pane_t1_cp2_ParamLimits

0xc656,	// (0x00048da0) list_double_heading_pane_t1_cp2

0xc66c,	// (0x00048db6) list_double_heading_pane_t2_cp2_ParamLimits

0xc66c,	// (0x00048db6) list_double_heading_pane_t2_cp2

0x259c,	// (0x0003ece6) aid_value_unit2

0x575d,	// (0x00041ea7) popup_preview_fixed_window

0x7f0d,	// (0x00044657) bg_popup_preview_window_pane_cp02

0xc67e,	// (0x00048dc8) list_preview_fixed_pane

0xc6c4,	// (0x00048e0e) list_empty_pane_fp_ParamLimits

0xc6c4,	// (0x00048e0e) list_empty_pane_fp

0xc6c4,	// (0x00048e0e) list_single_cale_day_pane_fp_ParamLimits

0xc6c4,	// (0x00048e0e) list_single_cale_day_pane_fp

0xc6c4,	// (0x00048e0e) list_single_graphic_heading_pane_fp_ParamLimits

0xc6c4,	// (0x00048e0e) list_single_graphic_heading_pane_fp

0xc6c4,	// (0x00048e0e) list_single_graphic_pane_fp_ParamLimits

0xc6c4,	// (0x00048e0e) list_single_graphic_pane_fp

0xc6c4,	// (0x00048e0e) list_single_heading_pane_fp_ParamLimits

0xc6c4,	// (0x00048e0e) list_single_heading_pane_fp

0xc6c4,	// (0x00048e0e) list_single_pane_fp_ParamLimits

0xc6c4,	// (0x00048e0e) list_single_pane_fp

0xc6d9,	// (0x00048e23) list_single_pane_fp_g1_ParamLimits

0xc6d9,	// (0x00048e23) list_single_pane_fp_g1

0x84b8,	// (0x00044c02) list_single_pane_fp_g2_ParamLimits

0x84b8,	// (0x00044c02) list_single_pane_fp_g2

0x852b,	// (0x00044c75) list_single_pane_fp_g3_ParamLimits

0x852b,	// (0x00044c75) list_single_pane_fp_g3

0xc6e5,	// (0x00048e2f) list_single_pane_fp_g4_ParamLimits

0xc6e5,	// (0x00048e2f) list_single_pane_fp_g4

0x0003,

0xfb47,	// (0x0004c291) list_single_pane_fp_g_ParamLimits

0xfb47,	// (0x0004c291) list_single_pane_fp_g

0x51f0,	// (0x0004193a) list_single_pane_fp_t1_ParamLimits

0x51f0,	// (0x0004193a) list_single_pane_fp_t1

0x5207,	// (0x00041951) list_single_graphic_pane_fp_g1_ParamLimits

0x5207,	// (0x00041951) list_single_graphic_pane_fp_g1

0xc6d9,	// (0x00048e23) list_single_graphic_pane_fp_g2_ParamLimits

0xc6d9,	// (0x00048e23) list_single_graphic_pane_fp_g2

0x84b8,	// (0x00044c02) list_single_graphic_pane_fp_g3_ParamLimits

0x84b8,	// (0x00044c02) list_single_graphic_pane_fp_g3

0x852b,	// (0x00044c75) list_single_graphic_pane_fp_g4_ParamLimits

0x852b,	// (0x00044c75) list_single_graphic_pane_fp_g4

0xc6e5,	// (0x00048e2f) list_single_graphic_pane_fp_g5_ParamLimits

0xc6e5,	// (0x00048e2f) list_single_graphic_pane_fp_g5

0x0004,

0xfb50,	// (0x0004c29a) list_single_graphic_pane_fp_g_ParamLimits

0xfb50,	// (0x0004c29a) list_single_graphic_pane_fp_g

0x5213,	// (0x0004195d) list_single_graphic_pane_fp_t1_ParamLimits

0x5213,	// (0x0004195d) list_single_graphic_pane_fp_t1

0x5207,	// (0x00041951) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x5207,	// (0x00041951) list_single_graphic_heading_pane_fp_g1

0xc6d9,	// (0x00048e23) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc6d9,	// (0x00048e23) list_single_graphic_heading_pane_fp_g2

0x84b8,	// (0x00044c02) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x84b8,	// (0x00044c02) list_single_graphic_heading_pane_fp_g3

0x852b,	// (0x00044c75) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x852b,	// (0x00044c75) list_single_graphic_heading_pane_fp_g4

0xc6e5,	// (0x00048e2f) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc6e5,	// (0x00048e2f) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb50,	// (0x0004c29a) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb50,	// (0x0004c29a) list_single_graphic_heading_pane_fp_g

0x5229,	// (0x00041973) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x5229,	// (0x00041973) list_single_graphic_heading_pane_fp_t1

0x523f,	// (0x00041989) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x523f,	// (0x00041989) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb5b,	// (0x0004c2a5) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb5b,	// (0x0004c2a5) list_single_graphic_heading_pane_fp_t

0x5251,	// (0x0004199b) list_single_cale_day_pane_fp_g1_ParamLimits

0x5251,	// (0x0004199b) list_single_cale_day_pane_fp_g1

0xc6f1,	// (0x00048e3b) list_single_cale_day_pane_fp_g2_ParamLimits

0xc6f1,	// (0x00048e3b) list_single_cale_day_pane_fp_g2

0x6d4a,	// (0x00043494) list_single_cale_day_pane_fp_g3_ParamLimits

0x6d4a,	// (0x00043494) list_single_cale_day_pane_fp_g3

0x6d72,	// (0x000434bc) list_single_cale_day_pane_fp_g4_ParamLimits

0x6d72,	// (0x000434bc) list_single_cale_day_pane_fp_g4

0x6d96,	// (0x000434e0) list_single_cale_day_pane_fp_g5_ParamLimits

0x6d96,	// (0x000434e0) list_single_cale_day_pane_fp_g5

0x0004,

0xfb60,	// (0x0004c2aa) list_single_cale_day_pane_fp_g_ParamLimits

0xfb60,	// (0x0004c2aa) list_single_cale_day_pane_fp_g

0x5289,	// (0x000419d3) list_single_cale_day_pane_fp_t1_ParamLimits

0x5289,	// (0x000419d3) list_single_cale_day_pane_fp_t1

0x52af,	// (0x000419f9) list_single_cale_day_pane_fp_t2_ParamLimits

0x52af,	// (0x000419f9) list_single_cale_day_pane_fp_t2

0x52c8,	// (0x00041a12) list_single_cale_day_pane_fp_t3_ParamLimits

0x52c8,	// (0x00041a12) list_single_cale_day_pane_fp_t3

0x0002,

0xfb6b,	// (0x0004c2b5) list_single_cale_day_pane_fp_t_ParamLimits

0xfb6b,	// (0x0004c2b5) list_single_cale_day_pane_fp_t

0xc6d9,	// (0x00048e23) list_empty_pane_fp_g1_ParamLimits

0xc6d9,	// (0x00048e23) list_empty_pane_fp_g1

0x52e1,	// (0x00041a2b) list_empty_pane_fp_t1

0x52ef,	// (0x00041a39) list_empty_pane_fp_t2

0x0001,

0xfb72,	// (0x0004c2bc) list_empty_pane_fp_t

0xc6d9,	// (0x00048e23) list_single_heading_pane_fp_g1_ParamLimits

0xc6d9,	// (0x00048e23) list_single_heading_pane_fp_g1

0x84b8,	// (0x00044c02) list_single_heading_pane_fp_g2_ParamLimits

0x84b8,	// (0x00044c02) list_single_heading_pane_fp_g2

0x852b,	// (0x00044c75) list_single_heading_pane_fp_g3_ParamLimits

0x852b,	// (0x00044c75) list_single_heading_pane_fp_g3

0x0002,

0xfb77,	// (0x0004c2c1) list_single_heading_pane_fp_g_ParamLimits

0xfb77,	// (0x0004c2c1) list_single_heading_pane_fp_g

0x52fd,	// (0x00041a47) list_single_heading_pane_fp_t1_ParamLimits

0x52fd,	// (0x00041a47) list_single_heading_pane_fp_t1

0x530f,	// (0x00041a59) list_single_heading_pane_fp_t2_ParamLimits

0x530f,	// (0x00041a59) list_single_heading_pane_fp_t2

0x0001,

0xfb7e,	// (0x0004c2c8) list_single_heading_pane_fp_t_ParamLimits

0xfb7e,	// (0x0004c2c8) list_single_heading_pane_fp_t

0x8723,	// (0x00044e6d) aid_size_cell_fast

0x7e7d,	// (0x000445c7) soft_indicator_pane_cp1_t1

0x8760,	// (0x00044eaa) cell_app_pane_cp2_ParamLimits

0x8760,	// (0x00044eaa) cell_app_pane_cp2

0x6b0e,	// (0x00043258) fep_hwr_candidate_drop_down_list_pane

0x2582,	// (0x0003eccc) fep_hwr_candidate_pane_g3_ParamLimits

0x2582,	// (0x0003eccc) fep_hwr_candidate_pane_g3

0x258f,	// (0x0003ecd9) fep_hwr_candidate_pane_g4_ParamLimits

0x258f,	// (0x0003ecd9) fep_hwr_candidate_pane_g4

0x0002,

0xfaf2,	// (0x0004c23c) fep_hwr_candidate_pane_g_ParamLimits

0xfaf2,	// (0x0004c23c) fep_hwr_candidate_pane_g

0xc1a0,	// (0x000488ea) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc1a0,	// (0x000488ea) fep_vkb_candidate_drop_down_list_pane

0xc5b1,	// (0x00048cfb) fep_vkb_candidate_pane_g3

0xc5b9,	// (0x00048d03) fep_vkb_candidate_pane_g4

0x0002,

0xfb1f,	// (0x0004c269) fep_vkb_candidate_pane_g

0xc2b9,	// (0x00048a03) cell_hwr_candidate_pane_g1_ParamLimits

0xc5d0,	// (0x00048d1a) cell_hwr_candidate_pane_g3_ParamLimits

0xc5d0,	// (0x00048d1a) cell_hwr_candidate_pane_g3

0xc5f1,	// (0x00048d3b) cell_hwr_candidate_pane_g4_ParamLimits

0xc5f1,	// (0x00048d3b) cell_hwr_candidate_pane_g4

0x0002,

0xfb39,	// (0x0004c283) cell_hwr_candidate_pane_g_ParamLimits

0xfb39,	// (0x0004c283) cell_hwr_candidate_pane_g

0xc612,	// (0x00048d5c) cell_vkb_candidate_pane_g3_ParamLimits

0xc612,	// (0x00048d5c) cell_vkb_candidate_pane_g3

0xc62d,	// (0x00048d77) cell_vkb_candidate_pane_g4_ParamLimits

0xc62d,	// (0x00048d77) cell_vkb_candidate_pane_g4

0xc6fd,	// (0x00048e47) cell_app_pane_cp2_g1_ParamLimits

0xc6fd,	// (0x00048e47) cell_app_pane_cp2_g1

0xc71b,	// (0x00048e65) cell_app_pane_cp2_g2_ParamLimits

0xc71b,	// (0x00048e65) cell_app_pane_cp2_g2

0x0001,

0xfb83,	// (0x0004c2cd) cell_app_pane_cp2_g_ParamLimits

0xfb83,	// (0x0004c2cd) cell_app_pane_cp2_g

0xc727,	// (0x00048e71) cell_app_pane_cp2_t1_ParamLimits

0xc727,	// (0x00048e71) cell_app_pane_cp2_t1

0x851d,	// (0x00044c67) grid_highlight_pane_cp1_ParamLimits

0x851d,	// (0x00044c67) grid_highlight_pane_cp1

0x6dba,	// (0x00043504) cell_hwr_candidate_pane_cp1_ParamLimits

0x6dba,	// (0x00043504) cell_hwr_candidate_pane_cp1

0xc2b9,	// (0x00048a03) fep_hwr_candidate_drop_down_list_pane_g1

0xc739,	// (0x00048e83) fep_hwr_candidate_drop_down_list_pane_g2

0xc746,	// (0x00048e90) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb88,	// (0x0004c2d2) fep_hwr_candidate_drop_down_list_pane_g

0x6dd9,	// (0x00043523) fep_hwr_candidate_drop_down_list_scroll_pane

0x6de2,	// (0x0004352c) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6de2,	// (0x0004352c) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6def,	// (0x00043539) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6def,	// (0x00043539) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6dfc,	// (0x00043546) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6dfc,	// (0x00043546) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc612,	// (0x00048d5c) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc612,	// (0x00048d5c) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc62d,	// (0x00048d77) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc62d,	// (0x00048d77) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6e09,	// (0x00043553) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6e09,	// (0x00043553) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6e24,	// (0x0004356e) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6e24,	// (0x0004356e) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6e3f,	// (0x00043589) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6e3f,	// (0x00043589) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb8f,	// (0x0004c2d9) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb8f,	// (0x0004c2d9) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc753,	// (0x00048e9d) cell_vkb_candidate_pane_cp1_ParamLimits

0xc753,	// (0x00048e9d) cell_vkb_candidate_pane_cp1

0xc2b9,	// (0x00048a03) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc2b9,	// (0x00048a03) fep_vkb_candidate_drop_down_list_pane_g1

0xc739,	// (0x00048e83) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc739,	// (0x00048e83) fep_vkb_candidate_drop_down_list_pane_g2

0xc746,	// (0x00048e90) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc746,	// (0x00048e90) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb88,	// (0x0004c2d2) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb88,	// (0x0004c2d2) fep_vkb_candidate_drop_down_list_pane_g

0xc773,	// (0x00048ebd) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc773,	// (0x00048ebd) fep_vkb_candidate_drop_down_list_scroll_pane

0xc780,	// (0x00048eca) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc780,	// (0x00048eca) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc78d,	// (0x00048ed7) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc78d,	// (0x00048ed7) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc799,	// (0x00048ee3) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc799,	// (0x00048ee3) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc5d0,	// (0x00048d1a) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc5d0,	// (0x00048d1a) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc5f1,	// (0x00048d3b) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc5f1,	// (0x00048d3b) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc7a5,	// (0x00048eef) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc7a5,	// (0x00048eef) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc7c6,	// (0x00048f10) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc7c6,	// (0x00048f10) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc7e7,	// (0x00048f31) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc7e7,	// (0x00048f31) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba0,	// (0x0004c2ea) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba0,	// (0x0004c2ea) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7bae,	// (0x000442f8) title_pane_g1_ParamLimits

0x7bbb,	// (0x00044305) title_pane_g2_ParamLimits

0xf529,	// (0x0004bc73) title_pane_g_ParamLimits

0x8b96,	// (0x000452e0) aid_call2_pane

0x8b9e,	// (0x000452e8) aid_call_pane

0x8ba6,	// (0x000452f0) popup_clock_analogue_window_g1

0x8ba6,	// (0x000452f0) popup_clock_analogue_window_g2

0x5b51,	// (0x0004229b) popup_clock_analogue_window_g3

0x5b5a,	// (0x000422a4) popup_clock_analogue_window_g4

0x25ae,	// (0x0003ecf8) popup_clock_analogue_window_g5

0x0004,

0xf6d8,	// (0x0004be22) popup_clock_analogue_window_g

0x5b62,	// (0x000422ac) popup_clock_analogue_window_t1

0x5b70,	// (0x000422ba) clock_digital_number_pane_ParamLimits

0x5b70,	// (0x000422ba) clock_digital_number_pane

0x5b7c,	// (0x000422c6) clock_digital_number_pane_cp02_ParamLimits

0x5b7c,	// (0x000422c6) clock_digital_number_pane_cp02

0x5b88,	// (0x000422d2) clock_digital_number_pane_cp03_ParamLimits

0x5b88,	// (0x000422d2) clock_digital_number_pane_cp03

0x5b94,	// (0x000422de) clock_digital_number_pane_cp04_ParamLimits

0x5b94,	// (0x000422de) clock_digital_number_pane_cp04

0x5ba0,	// (0x000422ea) clock_digital_separator_pane_ParamLimits

0x5ba0,	// (0x000422ea) clock_digital_separator_pane

0x5bac,	// (0x000422f6) popup_clock_digital_window_t1_ParamLimits

0x5bac,	// (0x000422f6) popup_clock_digital_window_t1

0x25ae,	// (0x0003ecf8) clock_digital_number_pane_g1

0x25ae,	// (0x0003ecf8) clock_digital_number_pane_g2

0x0001,

0xf6e3,	// (0x0004be2d) clock_digital_number_pane_g

0x25ae,	// (0x0003ecf8) clock_digital_separator_pane_g1

0x25ae,	// (0x0003ecf8) clock_digital_separator_pane_g2

0x0001,

0xf6e3,	// (0x0004be2d) clock_digital_separator_pane_g

0x951c,	// (0x00045c66) aid_fill_nsta_ParamLimits

0x9668,	// (0x00045db2) indicator_nsta_pane_ParamLimits

0x97e1,	// (0x00045f2b) popup_clock_analogue_window

0x97e1,	// (0x00045f2b) popup_clock_digital_window

0xba16,	// (0x00048160) grid_indicator_nsta_pane_ParamLimits

0xba3f,	// (0x00048189) clock_nsta_pane_t2

0x0001,

0xfa72,	// (0x0004c1bc) clock_nsta_pane_t

0x5b15,	// (0x0004225f) aid_size_max_handle

0x5b1f,	// (0x00042269) aid_size_min_handle

0x91bc,	// (0x00045906) editor_scroll_pane

0xc802,	// (0x00048f4c) ex_editor_pane

0x8691,	// (0x00044ddb) scroll_pane_cp13

0x84b0,	// (0x00044bfa) scroll_pane_cp14

0x8bd5,	// (0x0004531f) scroll_pane_cp36

0x8c01,	// (0x0004534b) list_single_graphic_hl_pane_cp2_ParamLimits

0x8c01,	// (0x0004534b) list_single_graphic_hl_pane_cp2

0xafe7,	// (0x00047731) list_single_graphic_hl_pane_ParamLimits

0xafe7,	// (0x00047731) list_single_graphic_hl_pane

0x5325,	// (0x00041a6f) aid_size_min_hl_cp1

0xc80a,	// (0x00048f54) list_highlight_pane_cp34_ParamLimits

0xc80a,	// (0x00048f54) list_highlight_pane_cp34

0xc81b,	// (0x00048f65) list_single_graphic_hl_pane_g1_ParamLimits

0xc81b,	// (0x00048f65) list_single_graphic_hl_pane_g1

0x532e,	// (0x00041a78) list_single_graphic_hl_pane_g2_ParamLimits

0x532e,	// (0x00041a78) list_single_graphic_hl_pane_g2

0x532e,	// (0x00041a78) list_single_graphic_hl_pane_g3_ParamLimits

0x532e,	// (0x00041a78) list_single_graphic_hl_pane_g3

0x9101,	// (0x0004584b) list_single_graphic_hl_pane_g4_ParamLimits

0x9101,	// (0x0004584b) list_single_graphic_hl_pane_g4

0x6e5a,	// (0x000435a4) list_single_graphic_hl_pane_g5_ParamLimits

0x6e5a,	// (0x000435a4) list_single_graphic_hl_pane_g5

0x0004,

0xfbb1,	// (0x0004c2fb) list_single_graphic_hl_pane_g_ParamLimits

0xfbb1,	// (0x0004c2fb) list_single_graphic_hl_pane_g

0x533a,	// (0x00041a84) list_single_graphic_hl_pane_t1_ParamLimits

0x533a,	// (0x00041a84) list_single_graphic_hl_pane_t1

0xc828,	// (0x00048f72) aid_size_min_hl_cp2

0xc831,	// (0x00048f7b) list_highlight_pane_cp34_cp2_ParamLimits

0xc831,	// (0x00048f7b) list_highlight_pane_cp34_cp2

0xc81b,	// (0x00048f65) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc81b,	// (0x00048f65) list_single_graphic_hl_pane_g1_cp2

0xc83e,	// (0x00048f88) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc83e,	// (0x00048f88) list_single_graphic_hl_pane_g2_cp2

0xc84a,	// (0x00048f94) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc84a,	// (0x00048f94) list_single_graphic_hl_pane_g3_cp2

0xc858,	// (0x00048fa2) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc858,	// (0x00048fa2) list_single_graphic_hl_pane_g4_cp2

0xc864,	// (0x00048fae) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc864,	// (0x00048fae) list_single_graphic_hl_pane_g5_cp2

0x5e7c,	// (0x000425c6) control_pane_g4_ParamLimits

0x5e7c,	// (0x000425c6) control_pane_g4

0x94e0,	// (0x00045c2a) bg_popup_sub_pane_cp10_ParamLimits

0xc045,	// (0x0004878f) list_choice_list_pane_ParamLimits

0xc054,	// (0x0004879e) scroll_pane_cp23

0x7f0d,	// (0x00044657) bg_popup_preview_window_pane_cp02_ParamLimits

0xc67e,	// (0x00048dc8) list_preview_fixed_pane_ParamLimits

0xc694,	// (0x00048dde) list_preview_fixed_pane_cp_ParamLimits

0xc694,	// (0x00048dde) list_preview_fixed_pane_cp

0xc6a0,	// (0x00048dea) popup_preview_fixed_window_g1_ParamLimits

0xc6a0,	// (0x00048dea) popup_preview_fixed_window_g1

0xc6ac,	// (0x00048df6) popup_preview_fixed_window_g2_ParamLimits

0xc6ac,	// (0x00048df6) popup_preview_fixed_window_g2

0x0002,

0xfb40,	// (0x0004c28a) popup_preview_fixed_window_g_ParamLimits

0xfb40,	// (0x0004c28a) popup_preview_fixed_window_g

0x5a89,	// (0x000421d3) aid_navi_side_left_pane_ParamLimits

0x5a9e,	// (0x000421e8) aid_navi_side_right_pane_ParamLimits

0x5ab6,	// (0x00042200) navi_icon_pane_stacon_ParamLimits

0x5aca,	// (0x00042214) navi_navi_pane_stacon_ParamLimits

0x5ab6,	// (0x00042200) navi_text_pane_stacon_ParamLimits

0x25a4,	// (0x0003ecee) main_text_info_pane

0xc88e,	// (0x00048fd8) listscroll_text_info_pane

0xc896,	// (0x00048fe0) list_text_info_pane_ParamLimits

0xc896,	// (0x00048fe0) list_text_info_pane

0xc8a5,	// (0x00048fef) scroll_pane_cp24_ParamLimits

0xc8a5,	// (0x00048fef) scroll_pane_cp24

0xc8c3,	// (0x0004900d) list_text_info_pane_t1_ParamLimits

0xc8c3,	// (0x0004900d) list_text_info_pane_t1

0x5fec,	// (0x00042736) popup_fast_swap2_window_ParamLimits

0x5fec,	// (0x00042736) popup_fast_swap2_window

0xc8f4,	// (0x0004903e) aid_size_cell_fast2

0x25a4,	// (0x0003ecee) bg_popup_window_pane_cp17

0x9e6a,	// (0x000465b4) heading_pane_cp2

0x9e72,	// (0x000465bc) listscroll_fast2_pane

0xc8fe,	// (0x00049048) grid_fast2_pane

0xc908,	// (0x00049052) listscroll_fast2_pane_g1

0xc910,	// (0x0004905a) listscroll_fast2_pane_g2

0x0001,

0xfbbc,	// (0x0004c306) listscroll_fast2_pane_g

0x8691,	// (0x00044ddb) scroll_pane_cp26

0xc91a,	// (0x00049064) cell_fast2_pane_ParamLimits

0xc91a,	// (0x00049064) cell_fast2_pane

0xc92f,	// (0x00049079) cell_fast2_pane_g1

0xc938,	// (0x00049082) cell_fast2_pane_g2

0xc941,	// (0x0004908b) cell_fast2_pane_g3

0x0002,

0xfbc1,	// (0x0004c30b) cell_fast2_pane_g

0x826d,	// (0x000449b7) grid_highlight_pane_cp9

0x8282,	// (0x000449cc) main_eswt_pane_ParamLimits

0x8282,	// (0x000449cc) main_eswt_pane

0xc8ba,	// (0x00049004) list_single_text_info_pane

0xc949,	// (0x00049093) eswt_ctrl_button_pane

0xc949,	// (0x00049093) eswt_ctrl_canvas_pane

0xc951,	// (0x0004909b) eswt_ctrl_combo_pane

0xc949,	// (0x00049093) eswt_ctrl_default_pane

0xc949,	// (0x00049093) eswt_ctrl_label_pane

0xc959,	// (0x000490a3) eswt_ctrl_wait_pane

0xc961,	// (0x000490ab) eswt_shell_pane

0x25a4,	// (0x0003ecee) listscroll_eswt_app_pane

0xc981,	// (0x000490cb) popup_eswt_tasktip_window_ParamLimits

0xc981,	// (0x000490cb) popup_eswt_tasktip_window

0x9a7e,	// (0x000461c8) bg_popup_window_pane_cp18

0xc992,	// (0x000490dc) eswt_control_pane_g1_ParamLimits

0xc992,	// (0x000490dc) eswt_control_pane_g1

0xc99f,	// (0x000490e9) eswt_control_pane_g2_ParamLimits

0xc99f,	// (0x000490e9) eswt_control_pane_g2

0xc9ac,	// (0x000490f6) eswt_control_pane_g3_ParamLimits

0xc9ac,	// (0x000490f6) eswt_control_pane_g3

0xc9b9,	// (0x00049103) eswt_control_pane_g4_ParamLimits

0xc9b9,	// (0x00049103) eswt_control_pane_g4

0x0003,

0xfbc8,	// (0x0004c312) eswt_control_pane_g_ParamLimits

0xfbc8,	// (0x0004c312) eswt_control_pane_g

0x851d,	// (0x00044c67) bg_button_pane_ParamLimits

0x851d,	// (0x00044c67) bg_button_pane

0x8282,	// (0x000449cc) common_borders_pane_copy2_ParamLimits

0x8282,	// (0x000449cc) common_borders_pane_copy2

0xc9c6,	// (0x00049110) control_button_pane_g1_ParamLimits

0xc9c6,	// (0x00049110) control_button_pane_g1

0xc9d2,	// (0x0004911c) control_button_pane_g2_ParamLimits

0xc9d2,	// (0x0004911c) control_button_pane_g2

0xc9de,	// (0x00049128) control_button_pane_g3_ParamLimits

0xc9de,	// (0x00049128) control_button_pane_g3

0x0002,

0xfbd1,	// (0x0004c31b) control_button_pane_g_ParamLimits

0xfbd1,	// (0x0004c31b) control_button_pane_g

0xc9f2,	// (0x0004913c) control_button_pane_t1

0xca00,	// (0x0004914a) control_button_pane_t2

0x0001,

0xfbd8,	// (0x0004c322) control_button_pane_t

0x9a0a,	// (0x00046154) bg_button_pane_g1

0x9a12,	// (0x0004615c) bg_button_pane_g2

0x9a1a,	// (0x00046164) bg_button_pane_g3

0x9a22,	// (0x0004616c) bg_button_pane_g4

0x9a2a,	// (0x00046174) bg_button_pane_g5

0x9a32,	// (0x0004617c) bg_button_pane_g6

0x9a3a,	// (0x00046184) bg_button_pane_g7

0x9a42,	// (0x0004618c) bg_button_pane_g8

0x9a4a,	// (0x00046194) bg_button_pane_g9

0x0008,

0xf841,	// (0x0004bf8b) bg_button_pane_g

0xc000,	// (0x0004874a) common_borders_pane_ParamLimits

0xc000,	// (0x0004874a) common_borders_pane

0xc992,	// (0x000490dc) eswt_control_pane_g1_copy1_ParamLimits

0xc992,	// (0x000490dc) eswt_control_pane_g1_copy1

0xc99f,	// (0x000490e9) eswt_control_pane_g2_copy1_ParamLimits

0xc99f,	// (0x000490e9) eswt_control_pane_g2_copy1

0xc9ac,	// (0x000490f6) eswt_control_pane_g3_copy1_ParamLimits

0xc9ac,	// (0x000490f6) eswt_control_pane_g3_copy1

0xc9b9,	// (0x00049103) eswt_control_pane_g4_copy1_ParamLimits

0xc9b9,	// (0x00049103) eswt_control_pane_g4_copy1

0xc03b,	// (0x00048785) bg_eswt_ctrl_canvas_pane_g1

0xc000,	// (0x0004874a) common_borders_pane_cp2_ParamLimits

0xc000,	// (0x0004874a) common_borders_pane_cp2

0xc000,	// (0x0004874a) common_borders_pane_cp3_ParamLimits

0xc000,	// (0x0004874a) common_borders_pane_cp3

0xca0e,	// (0x00049158) separator_horizontal_pane

0xca16,	// (0x00049160) separator_vertical_pane

0xc992,	// (0x000490dc) eswt_control_pane_g1_copy2_ParamLimits

0xc992,	// (0x000490dc) eswt_control_pane_g1_copy2

0xc99f,	// (0x000490e9) eswt_control_pane_g2_copy2_ParamLimits

0xc99f,	// (0x000490e9) eswt_control_pane_g2_copy2

0xc9ac,	// (0x000490f6) eswt_control_pane_g3_copy2_ParamLimits

0xc9ac,	// (0x000490f6) eswt_control_pane_g3_copy2

0xc9b9,	// (0x00049103) eswt_control_pane_g4_copy2_ParamLimits

0xc9b9,	// (0x00049103) eswt_control_pane_g4_copy2

0x25a4,	// (0x0003ecee) common_borders_pane_cp4

0xca1f,	// (0x00049169) separator_horizontal_pane_g1

0xca28,	// (0x00049172) separator_horizontal_pane_g2

0xca31,	// (0x0004917b) separator_horizontal_pane_g3

0x0002,

0xfbdd,	// (0x0004c327) separator_horizontal_pane_g

0xc992,	// (0x000490dc) eswt_control_pane_g1_copy3_ParamLimits

0xc992,	// (0x000490dc) eswt_control_pane_g1_copy3

0xc99f,	// (0x000490e9) eswt_control_pane_g2_copy3_ParamLimits

0xc99f,	// (0x000490e9) eswt_control_pane_g2_copy3

0xc9ac,	// (0x000490f6) eswt_control_pane_g3_copy3_ParamLimits

0xc9ac,	// (0x000490f6) eswt_control_pane_g3_copy3

0xc9b9,	// (0x00049103) eswt_control_pane_g4_copy3_ParamLimits

0xc9b9,	// (0x00049103) eswt_control_pane_g4_copy3

0x25a4,	// (0x0003ecee) common_borders_pane_cp5

0xca3a,	// (0x00049184) separator_vertical_pane_g1

0xca43,	// (0x0004918d) separator_vertical_pane_g2

0xca4c,	// (0x00049196) separator_vertical_pane_g3

0x0002,

0xfbe4,	// (0x0004c32e) separator_vertical_pane_g

0xc992,	// (0x000490dc) eswt_control_pane_g1_copy4_ParamLimits

0xc992,	// (0x000490dc) eswt_control_pane_g1_copy4

0xc99f,	// (0x000490e9) eswt_control_pane_g2_copy4_ParamLimits

0xc99f,	// (0x000490e9) eswt_control_pane_g2_copy4

0xc9ac,	// (0x000490f6) eswt_control_pane_g3_copy4_ParamLimits

0xc9ac,	// (0x000490f6) eswt_control_pane_g3_copy4

0xc9b9,	// (0x00049103) eswt_control_pane_g4_copy4_ParamLimits

0xc9b9,	// (0x00049103) eswt_control_pane_g4_copy4

0xca55,	// (0x0004919f) eswt_ctrl_combo_button_pane

0xca5d,	// (0x000491a7) eswt_ctrl_input_pane

0xca65,	// (0x000491af) popup_choice_list_window_cp70

0xca6d,	// (0x000491b7) eswt_ctrl_input_pane_t1

0x25a4,	// (0x0003ecee) input_focus_pane_cp70

0xc000,	// (0x0004874a) bg_button_pane_cp70_ParamLimits

0xc000,	// (0x0004874a) bg_button_pane_cp70

0xca7b,	// (0x000491c5) eswt_ctrl_combo_button_pane_g1

0xca83,	// (0x000491cd) wait_bar_pane_cp70

0x9a7e,	// (0x000461c8) bg_popup_window_pane_cp70_ParamLimits

0x9a7e,	// (0x000461c8) bg_popup_window_pane_cp70

0xca8b,	// (0x000491d5) popup_eswt_tasktip_window_t1

0xcaa1,	// (0x000491eb) wait_bar_pane_cp71_ParamLimits

0xcaa1,	// (0x000491eb) wait_bar_pane_cp71

0xcaad,	// (0x000491f7) grid_eswt_app_pane

0x89b8,	// (0x00045102) scroll_pane_cp70

0xcab6,	// (0x00049200) cell_eswt_app_pane_ParamLimits

0xcab6,	// (0x00049200) cell_eswt_app_pane

0xcae6,	// (0x00049230) cell_eswt_app_pane_g1_ParamLimits

0xcae6,	// (0x00049230) cell_eswt_app_pane_g1

0xcb15,	// (0x0004925f) cell_eswt_app_pane_g2_ParamLimits

0xcb15,	// (0x0004925f) cell_eswt_app_pane_g2

0x0001,

0xfbeb,	// (0x0004c335) cell_eswt_app_pane_g_ParamLimits

0xfbeb,	// (0x0004c335) cell_eswt_app_pane_g

0xcb3e,	// (0x00049288) cell_eswt_app_pane_t1_ParamLimits

0xcb3e,	// (0x00049288) cell_eswt_app_pane_t1

0xcb70,	// (0x000492ba) grid_highlight_pane_cp70_ParamLimits

0xcb70,	// (0x000492ba) grid_highlight_pane_cp70

0x909d,	// (0x000457e7) set_content_pane_g1

0x9467,	// (0x00045bb1) status_small_volume_pane

0x6e6e,	// (0x000435b8) status_small_volume_pane_g1

0x6e76,	// (0x000435c0) volume_small2_pane

0x6e7f,	// (0x000435c9) volume_small2_pane_g1

0x6e88,	// (0x000435d2) volume_small2_pane_g2

0x6e91,	// (0x000435db) volume_small2_pane_g3

0x6e9a,	// (0x000435e4) volume_small2_pane_g4

0x6ea3,	// (0x000435ed) volume_small2_pane_g5

0x6eac,	// (0x000435f6) volume_small2_pane_g6

0x6eb5,	// (0x000435ff) volume_small2_pane_g7

0x6ebe,	// (0x00043608) volume_small2_pane_g8

0x6ec7,	// (0x00043611) volume_small2_pane_g9

0x6ed0,	// (0x0004361a) volume_small2_pane_g10

0x0009,

0xfbf0,	// (0x0004c33a) volume_small2_pane_g

0xc401,	// (0x00048b4b) fep_vkb_top_text_pane_g1_ParamLimits

0xc41c,	// (0x00048b66) fep_vkb_top_text_pane_t1_ParamLimits

0xc6b8,	// (0x00048e02) popup_preview_fixed_window_g3_ParamLimits

0xc6b8,	// (0x00048e02) popup_preview_fixed_window_g3

0x649d,	// (0x00042be7) popup_toolbar_trans_pane

0xade2,	// (0x0004752c) aid_height_set_list_ParamLimits

0xadf3,	// (0x0004753d) aid_size_parent_ParamLimits

0x94e0,	// (0x00045c2a) list_highlight_pane_cp2_ParamLimits

0x909d,	// (0x000457e7) set_content_pane_g1_ParamLimits

0x4edd,	// (0x00041627) list_single_image_pane_ParamLimits

0x4edd,	// (0x00041627) list_single_image_pane

0xcb7c,	// (0x000492c6) aid_size_cell_image_ParamLimits

0xcb7c,	// (0x000492c6) aid_size_cell_image

0xcb89,	// (0x000492d3) grid_single_image_pane_ParamLimits

0xcb89,	// (0x000492d3) grid_single_image_pane

0xaf19,	// (0x00047663) list_single_image_pane_g1_ParamLimits

0xaf19,	// (0x00047663) list_single_image_pane_g1

0xcb95,	// (0x000492df) list_single_image_pane_g2_ParamLimits

0xcb95,	// (0x000492df) list_single_image_pane_g2

0x0001,

0xfc05,	// (0x0004c34f) list_single_image_pane_g_ParamLimits

0xfc05,	// (0x0004c34f) list_single_image_pane_g

0xcba9,	// (0x000492f3) list_single_image_pane_t1_ParamLimits

0xcba9,	// (0x000492f3) list_single_image_pane_t1

0xcbbf,	// (0x00049309) cell_image_list_pane_ParamLimits

0xcbbf,	// (0x00049309) cell_image_list_pane

0xcbd3,	// (0x0004931d) cell_image_list_pane_g1

0xcbdc,	// (0x00049326) cell_image_list_pane_g2

0x0001,

0xfc0a,	// (0x0004c354) cell_image_list_pane_g

0xcbe5,	// (0x0004932f) aid_size_cell_tb_trans_pane

0x851d,	// (0x00044c67) bg_tb_trans_pane

0xcbf7,	// (0x00049341) grid_tb_trans_pane

0x9a0a,	// (0x00046154) bg_tb_trans_pane_g1

0x9a12,	// (0x0004615c) bg_tb_trans_pane_g2

0x9a1a,	// (0x00046164) bg_tb_trans_pane_g3

0x9a22,	// (0x0004616c) bg_tb_trans_pane_g4

0x9a2a,	// (0x00046174) bg_tb_trans_pane_g5

0x9a42,	// (0x0004618c) bg_tb_trans_pane_g6

0x9a4a,	// (0x00046194) bg_tb_trans_pane_g7

0x9a32,	// (0x0004617c) bg_tb_trans_pane_g8

0x9a3a,	// (0x00046184) bg_tb_trans_pane_g9

0x0008,

0xfc0f,	// (0x0004c359) bg_tb_trans_pane_g

0xcc0b,	// (0x00049355) cell_toolbar_trans_pane_ParamLimits

0xcc0b,	// (0x00049355) cell_toolbar_trans_pane

0xc03b,	// (0x00048785) cell_toolbar_trans_pane_g1

0xbc10,	// (0x0004835a) list_form2_midp_pane_t1

0xbc1e,	// (0x00048368) list_form2_midp_pane_t2

0x0001,

0xfab8,	// (0x0004c202) list_form2_midp_pane_t

0xbc2c,	// (0x00048376) scroll_pane_cp51_ParamLimits

0xbde8,	// (0x00048532) form2_midp_wait_pane_g1

0xbdf1,	// (0x0004853b) form2_midp_wait_pane_g2

0xbdfa,	// (0x00048544) form2_midp_wait_pane_g3

0x0002,

0xfacd,	// (0x0004c217) form2_midp_wait_pane_g

0x7c84,	// (0x000443ce) list_highlight_pane_cp21_ParamLimits

0xbe46,	// (0x00048590) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbe55,	// (0x0004859f) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x68f6,	// (0x00043040) list_single_2graphic_im_pane_ParamLimits

0x68f6,	// (0x00043040) list_single_2graphic_im_pane

0xcc31,	// (0x0004937b) list_single_2graphic_im_pane_g1_ParamLimits

0xcc31,	// (0x0004937b) list_single_2graphic_im_pane_g1

0xcc42,	// (0x0004938c) list_single_2graphic_im_pane_g2_ParamLimits

0xcc42,	// (0x0004938c) list_single_2graphic_im_pane_g2

0xcc4e,	// (0x00049398) list_single_2graphic_im_pane_g3_ParamLimits

0xcc4e,	// (0x00049398) list_single_2graphic_im_pane_g3

0x0003,

0xfc22,	// (0x0004c36c) list_single_2graphic_im_pane_g_ParamLimits

0xfc22,	// (0x0004c36c) list_single_2graphic_im_pane_g

0xcc6e,	// (0x000493b8) list_single_2graphic_im_pane_t1_ParamLimits

0xcc6e,	// (0x000493b8) list_single_2graphic_im_pane_t1

0xc6c4,	// (0x00048e0e) list_single_graphic_2heading_pane_fp_ParamLimits

0xc6c4,	// (0x00048e0e) list_single_graphic_2heading_pane_fp

0x5207,	// (0x00041951) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x5207,	// (0x00041951) list_single_graphic_2heading_pane_fp_g1

0xc6d9,	// (0x00048e23) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc6d9,	// (0x00048e23) list_single_graphic_2heading_pane_fp_g2

0x84b8,	// (0x00044c02) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x84b8,	// (0x00044c02) list_single_graphic_2heading_pane_fp_g3

0x852b,	// (0x00044c75) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x852b,	// (0x00044c75) list_single_graphic_2heading_pane_fp_g4

0xc6e5,	// (0x00048e2f) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc6e5,	// (0x00048e2f) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb50,	// (0x0004c29a) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb50,	// (0x0004c29a) list_single_graphic_2heading_pane_fp_g

0x5350,	// (0x00041a9a) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5350,	// (0x00041a9a) list_single_graphic_2heading_pane_fp_t1

0x523f,	// (0x00041989) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x523f,	// (0x00041989) list_single_graphic_2heading_pane_fp_t2

0x5366,	// (0x00041ab0) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5366,	// (0x00041ab0) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc2b,	// (0x0004c375) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc2b,	// (0x0004c375) list_single_graphic_2heading_pane_fp_t

0xc0c7,	// (0x00048811) fep_hwr_write_pane_g5_ParamLimits

0xc0c7,	// (0x00048811) fep_hwr_write_pane_g5

0xc0d3,	// (0x0004881d) fep_hwr_write_pane_g6_ParamLimits

0xc0d3,	// (0x0004881d) fep_hwr_write_pane_g6

0xc961,	// (0x000490ab) eswt_shell_pane_ParamLimits

0x9a7e,	// (0x000461c8) bg_popup_window_pane_cp18_ParamLimits

0xad3b,	// (0x00047485) heading_pane_cp70

0xca8b,	// (0x000491d5) popup_eswt_tasktip_window_t1_ParamLimits

0x9571,	// (0x00045cbb) aid_touch_tab_arrow_left

0x9580,	// (0x00045cca) aid_touch_tab_arrow_right

0x7bcc,	// (0x00044316) title_pane_g3_ParamLimits

0x7bcc,	// (0x00044316) title_pane_g3

0x84dc,	// (0x00044c26) set_value_pane_g1

0x649d,	// (0x00042be7) popup_toolbar_trans_pane_ParamLimits

0xcbe5,	// (0x0004932f) aid_size_cell_tb_trans_pane_ParamLimits

0x851d,	// (0x00044c67) bg_tb_trans_pane_ParamLimits

0xcbf7,	// (0x00049341) grid_tb_trans_pane_ParamLimits

0x7f0d,	// (0x00044657) cont_note_pane_ParamLimits

0x7f0d,	// (0x00044657) cont_note_pane

0x8282,	// (0x000449cc) cont_snote2_single_text_pane_ParamLimits

0x8282,	// (0x000449cc) cont_snote2_single_text_pane

0x8282,	// (0x000449cc) cont_snote2_single_graphic_pane_ParamLimits

0x8282,	// (0x000449cc) cont_snote2_single_graphic_pane

0xa099,	// (0x000467e3) cont_note_wait_pane_ParamLimits

0xa099,	// (0x000467e3) cont_note_wait_pane

0xa099,	// (0x000467e3) cont_note_image_pane_ParamLimits

0xa099,	// (0x000467e3) cont_note_image_pane

0xcc9f,	// (0x000493e9) popup_note2_window_g1_ParamLimits

0xcc9f,	// (0x000493e9) popup_note2_window_g1

0xccd0,	// (0x0004941a) popup_note2_window_t1_ParamLimits

0xccd0,	// (0x0004941a) popup_note2_window_t1

0xcd15,	// (0x0004945f) popup_note2_window_t2_ParamLimits

0xcd15,	// (0x0004945f) popup_note2_window_t2

0xcd5a,	// (0x000494a4) popup_note2_window_t3_ParamLimits

0xcd5a,	// (0x000494a4) popup_note2_window_t3

0xcd9f,	// (0x000494e9) popup_note2_window_t4_ParamLimits

0xcd9f,	// (0x000494e9) popup_note2_window_t4

0x7f91,	// (0x000446db) popup_note2_window_t5_ParamLimits

0x7f91,	// (0x000446db) popup_note2_window_t5

0x0004,

0xfc37,	// (0x0004c381) popup_note2_window_t_ParamLimits

0xfc37,	// (0x0004c381) popup_note2_window_t

0xcdce,	// (0x00049518) popup_note2_image_window_g1_ParamLimits

0xcdce,	// (0x00049518) popup_note2_image_window_g1

0xcdda,	// (0x00049524) popup_note2_image_window_g2_ParamLimits

0xcdda,	// (0x00049524) popup_note2_image_window_g2

0x0001,

0xfc42,	// (0x0004c38c) popup_note2_image_window_g_ParamLimits

0xfc42,	// (0x0004c38c) popup_note2_image_window_g

0xcdec,	// (0x00049536) popup_note2_image_window_t1_ParamLimits

0xcdec,	// (0x00049536) popup_note2_image_window_t1

0xce04,	// (0x0004954e) popup_note2_image_window_t2_ParamLimits

0xce04,	// (0x0004954e) popup_note2_image_window_t2

0xce1c,	// (0x00049566) popup_note2_image_window_t3_ParamLimits

0xce1c,	// (0x00049566) popup_note2_image_window_t3

0x0002,

0xfc47,	// (0x0004c391) popup_note2_image_window_t_ParamLimits

0xfc47,	// (0x0004c391) popup_note2_image_window_t

0xa0a7,	// (0x000467f1) popup_note2_wait_window_g1_ParamLimits

0xa0a7,	// (0x000467f1) popup_note2_wait_window_g1

0xce38,	// (0x00049582) popup_note2_wait_window_g2_ParamLimits

0xce38,	// (0x00049582) popup_note2_wait_window_g2

0xa0bf,	// (0x00046809) popup_note2_wait_window_g3_ParamLimits

0xa0bf,	// (0x00046809) popup_note2_wait_window_g3

0x0002,

0xfc4e,	// (0x0004c398) popup_note2_wait_window_g_ParamLimits

0xfc4e,	// (0x0004c398) popup_note2_wait_window_g

0xce44,	// (0x0004958e) popup_note2_wait_window_t1_ParamLimits

0xce44,	// (0x0004958e) popup_note2_wait_window_t1

0xce62,	// (0x000495ac) popup_note2_wait_window_t2_ParamLimits

0xce62,	// (0x000495ac) popup_note2_wait_window_t2

0xce80,	// (0x000495ca) popup_note2_wait_window_t3_ParamLimits

0xce80,	// (0x000495ca) popup_note2_wait_window_t3

0xce92,	// (0x000495dc) popup_note2_wait_window_t4_ParamLimits

0xce92,	// (0x000495dc) popup_note2_wait_window_t4

0x0003,

0xfc55,	// (0x0004c39f) popup_note2_wait_window_t_ParamLimits

0xfc55,	// (0x0004c39f) popup_note2_wait_window_t

0xcea4,	// (0x000495ee) wait_bar2_pane_ParamLimits

0xcea4,	// (0x000495ee) wait_bar2_pane

0xcebc,	// (0x00049606) popup_snote2_single_text_window_g1_ParamLimits

0xcebc,	// (0x00049606) popup_snote2_single_text_window_g1

0xcee4,	// (0x0004962e) popup_snote2_single_text_window_t1_ParamLimits

0xcee4,	// (0x0004962e) popup_snote2_single_text_window_t1

0xcf30,	// (0x0004967a) popup_snote2_single_text_window_t2_ParamLimits

0xcf30,	// (0x0004967a) popup_snote2_single_text_window_t2

0xcf7c,	// (0x000496c6) popup_snote2_single_text_window_t3_ParamLimits

0xcf7c,	// (0x000496c6) popup_snote2_single_text_window_t3

0xcfbd,	// (0x00049707) popup_snote2_single_text_window_t4_ParamLimits

0xcfbd,	// (0x00049707) popup_snote2_single_text_window_t4

0xcff3,	// (0x0004973d) popup_snote2_single_text_window_t5_ParamLimits

0xcff3,	// (0x0004973d) popup_snote2_single_text_window_t5

0x0004,

0xfc5e,	// (0x0004c3a8) popup_snote2_single_text_window_t_ParamLimits

0xfc5e,	// (0x0004c3a8) popup_snote2_single_text_window_t

0xd01e,	// (0x00049768) popup_snote2_single_graphic_window_g1_ParamLimits

0xd01e,	// (0x00049768) popup_snote2_single_graphic_window_g1

0xd046,	// (0x00049790) popup_snote2_single_graphic_window_g2_ParamLimits

0xd046,	// (0x00049790) popup_snote2_single_graphic_window_g2

0x0001,

0xfc69,	// (0x0004c3b3) popup_snote2_single_graphic_window_g_ParamLimits

0xfc69,	// (0x0004c3b3) popup_snote2_single_graphic_window_g

0xd06e,	// (0x000497b8) popup_snote2_single_graphic_window_t1_ParamLimits

0xd06e,	// (0x000497b8) popup_snote2_single_graphic_window_t1

0xd0ba,	// (0x00049804) popup_snote2_single_graphic_window_t2_ParamLimits

0xd0ba,	// (0x00049804) popup_snote2_single_graphic_window_t2

0xcf7c,	// (0x000496c6) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf7c,	// (0x000496c6) popup_snote2_single_graphic_window_t3

0xcfbd,	// (0x00049707) popup_snote2_single_graphic_window_t4_ParamLimits

0xcfbd,	// (0x00049707) popup_snote2_single_graphic_window_t4

0xcff3,	// (0x0004973d) popup_snote2_single_graphic_window_t5_ParamLimits

0xcff3,	// (0x0004973d) popup_snote2_single_graphic_window_t5

0x0004,

0xfc6e,	// (0x0004c3b8) popup_snote2_single_graphic_window_t_ParamLimits

0xfc6e,	// (0x0004c3b8) popup_snote2_single_graphic_window_t

0xbaed,	// (0x00048237) clock_nsta_pane_cp2_t1

0xbaed,	// (0x00048237) clock_nsta_pane_cp2_t2

0x0001,

0xfa8e,	// (0x0004c1d8) clock_nsta_pane_cp2_t

0x4b28,	// (0x00041272) form_field_data_wide_pane_g1_ParamLimits

0x84b8,	// (0x00044c02) form_field_data_wide_pane_g2_ParamLimits

0x84b8,	// (0x00044c02) form_field_data_wide_pane_g2

0x852b,	// (0x00044c75) form_field_data_wide_pane_g3_ParamLimits

0x852b,	// (0x00044c75) form_field_data_wide_pane_g3

0x0002,

0xf65b,	// (0x0004bda5) form_field_data_wide_pane_g_ParamLimits

0xf65b,	// (0x0004bda5) form_field_data_wide_pane_g

0xb9c9,	// (0x00048113) grid_touch_3_pane_ParamLimits

0xb9c9,	// (0x00048113) grid_touch_3_pane

0xd106,	// (0x00049850) cell_touch_3_pane_ParamLimits

0xd106,	// (0x00049850) cell_touch_3_pane

0xc03b,	// (0x00048785) cell_touch_3_pane_g1

0xc03b,	// (0x00048785) cell_touch_3_pane_g2

0x0001,

0xfb13,	// (0x0004c25d) cell_touch_3_pane_g

0x7fe9,	// (0x00044733) cont_query_data_pane

0x7ff1,	// (0x0004473b) cont_query_data_pane_cp1

0xd134,	// (0x0004987e) button_value_adjust_pane_cp7

0xd13c,	// (0x00049886) query_popup_pane_cp3

0x8c96,	// (0x000453e0) bg_popup_sub_pane_cp22_ParamLimits

0x5bcb,	// (0x00042315) navi_navi_volume_pane_cp2

0x5be6,	// (0x00042330) popup_side_volume_key_window_g2

0x5bf5,	// (0x0004233f) popup_side_volume_key_window_g3

0x0002,

0xf6f1,	// (0x0004be3b) popup_side_volume_key_window_g

0x5c12,	// (0x0004235c) popup_side_volume_key_window_t2

0x0001,

0xf6f8,	// (0x0004be42) popup_side_volume_key_window_t

0x8f5c,	// (0x000456a6) popup_side_volume_key_window_ParamLimits

0x4758,	// (0x00040ea2) list_double_graphic_pane_g4_ParamLimits

0x4758,	// (0x00040ea2) list_double_graphic_pane_g4

0x6933,	// (0x0004307d) list_single_2heading_msg_pane_ParamLimits

0x6933,	// (0x0004307d) list_single_2heading_msg_pane

0x6ed9,	// (0x00043623) list_single_2heading_msg_pane_g1_ParamLimits

0x6ed9,	// (0x00043623) list_single_2heading_msg_pane_g1

0x6ee5,	// (0x0004362f) list_single_2heading_msg_pane_g2_ParamLimits

0x6ee5,	// (0x0004362f) list_single_2heading_msg_pane_g2

0x6ef1,	// (0x0004363b) list_single_2heading_msg_pane_g3_ParamLimits

0x6ef1,	// (0x0004363b) list_single_2heading_msg_pane_g3

0x6efd,	// (0x00043647) list_single_2heading_msg_pane_g4_ParamLimits

0x6efd,	// (0x00043647) list_single_2heading_msg_pane_g4

0x0003,

0xfc79,	// (0x0004c3c3) list_single_2heading_msg_pane_g_ParamLimits

0xfc79,	// (0x0004c3c3) list_single_2heading_msg_pane_g

0x5386,	// (0x00041ad0) list_single_2heading_msg_pane_t1_ParamLimits

0x5386,	// (0x00041ad0) list_single_2heading_msg_pane_t1

0x53ae,	// (0x00041af8) list_single_2heading_msg_pane_t2_ParamLimits

0x53ae,	// (0x00041af8) list_single_2heading_msg_pane_t2

0x53e2,	// (0x00041b2c) list_single_2heading_msg_pane_t3_ParamLimits

0x53e2,	// (0x00041b2c) list_single_2heading_msg_pane_t3

0x541b,	// (0x00041b65) list_single_2heading_msg_pane_t4_ParamLimits

0x541b,	// (0x00041b65) list_single_2heading_msg_pane_t4

0x0003,

0xfc82,	// (0x0004c3cc) list_single_2heading_msg_pane_t_ParamLimits

0xfc82,	// (0x0004c3cc) list_single_2heading_msg_pane_t

0x7bd8,	// (0x00044322) title_pane_g4_ParamLimits

0x7bd8,	// (0x00044322) title_pane_g4

0x59da,	// (0x00042124) title_pane_stacon_g3_ParamLimits

0x59da,	// (0x00042124) title_pane_stacon_g3

0xcc62,	// (0x000493ac) list_single_2graphic_im_pane_g4_ParamLimits

0xcc62,	// (0x000493ac) list_single_2graphic_im_pane_g4

0xaaf8,	// (0x00047242) popup_side_volume_key_window_cp

0xb314,	// (0x00047a5e) main_idle_act2_pane_t1

0x658f,	// (0x00042cd9) toolbar_button_pane_g10

0x847a,	// (0x00044bc4) popup_toolbar_window_cp1

0xbade,	// (0x00048228) clock_nsta_pane_cp_t1

0xbade,	// (0x00048228) clock_nsta_pane_cp_t2

0x0001,

0xfa89,	// (0x0004c1d3) clock_nsta_pane_cp_t

0x5bcb,	// (0x00042315) navi_navi_volume_pane_cp2_ParamLimits

0x5bda,	// (0x00042324) popup_side_volume_key_window_g1_ParamLimits

0x5be6,	// (0x00042330) popup_side_volume_key_window_g2_ParamLimits

0x5bf5,	// (0x0004233f) popup_side_volume_key_window_g3_ParamLimits

0xf6f1,	// (0x0004be3b) popup_side_volume_key_window_g_ParamLimits

0x6afa,	// (0x00043244) fep_hwr_aid_pane

0x2574,	// (0x0003ecbe) bg_fep_hwr_top_pane_g4_ParamLimits

0xc097,	// (0x000487e1) fep_hwr_top_pane_g1_ParamLimits

0xc0a9,	// (0x000487f3) fep_hwr_top_pane_g2_ParamLimits

0x6bb3,	// (0x000432fd) fep_hwr_top_pane_g3_ParamLimits

0xfade,	// (0x0004c228) fep_hwr_top_pane_g_ParamLimits

0x6bc8,	// (0x00043312) fep_hwr_top_text_pane_ParamLimits

0xa8bb,	// (0x00047005) aid_touch_tab_arrow_arrow_2

0xa8c4,	// (0x0004700e) aid_touch_tab_arrow_left_2

0x6b0e,	// (0x00043258) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6b45,	// (0x0004328f) fep_hwr_prediction_pane

0xc209,	// (0x00048953) fep_vkb_prediction_pane

0xc30d,	// (0x00048a57) fep_vkb_side_pane_g3_ParamLimits

0xc30d,	// (0x00048a57) fep_vkb_side_pane_g3

0xc2b9,	// (0x00048a03) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc739,	// (0x00048e83) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc746,	// (0x00048e90) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb88,	// (0x0004c2d2) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd161,	// (0x000498ab) fep_hwr_prediction_pane_g1

0x6f15,	// (0x0004365f) fep_hwr_prediction_pane_g2

0x6f1d,	// (0x00043667) fep_hwr_prediction_pane_g3

0x6f25,	// (0x0004366f) fep_hwr_prediction_pane_g4

0x0003,

0xfc8b,	// (0x0004c3d5) fep_hwr_prediction_pane_g

0xd161,	// (0x000498ab) fep_vkb_prediction_pane_g1

0xd16b,	// (0x000498b5) fep_vkb_prediction_pane_g2

0xd173,	// (0x000498bd) fep_vkb_prediction_pane_g3

0xd17b,	// (0x000498c5) fep_vkb_prediction_pane_g4

0x0003,

0xfc94,	// (0x0004c3de) fep_vkb_prediction_pane_g

0x6883,	// (0x00042fcd) slider_set_pane_g3

0x6897,	// (0x00042fe1) slider_set_pane_g4

0x68af,	// (0x00042ff9) slider_set_pane_g5

0x6883,	// (0x00042fcd) slider_set_pane_g6

0x68c5,	// (0x0004300f) slider_set_pane_g7

0xaf64,	// (0x000476ae) slider_form_pane_g3

0xaf6d,	// (0x000476b7) slider_form_pane_g4

0xaf75,	// (0x000476bf) slider_form_pane_g5

0xaf64,	// (0x000476ae) slider_form_pane_g6

0xaf7d,	// (0x000476c7) slider_form_pane_g7

0xb5bf,	// (0x00047d09) slider_set_pane_vc_g3

0xb5c8,	// (0x00047d12) slider_set_pane_vc_g4

0xb5d1,	// (0x00047d1b) slider_set_pane_vc_g5

0xb5bf,	// (0x00047d09) slider_set_pane_vc_g6

0xb5da,	// (0x00047d24) slider_set_pane_vc_g7

0xb79c,	// (0x00047ee6) slider_form_pane_vc_g1

0xb7a5,	// (0x00047eef) slider_form_pane_vc_g2

0xb7ae,	// (0x00047ef8) slider_form_pane_vc_g3

0xb79c,	// (0x00047ee6) slider_form_pane_vc_g4

0xb7b7,	// (0x00047f01) slider_form_pane_vc_g5

0x0004,

0xfa5b,	// (0x0004c1a5) slider_form_pane_vc_g

0x25a4,	// (0x0003ecee) main_idle_act3_pane

0xd183,	// (0x000498cd) ai3_links_pane

0xd18c,	// (0x000498d6) popup_ai3_data_window_ParamLimits

0xd18c,	// (0x000498d6) popup_ai3_data_window

0x25a4,	// (0x0003ecee) grid_ai3_links_pane

0xd1a6,	// (0x000498f0) cell_ai3_links_pane_ParamLimits

0xd1a6,	// (0x000498f0) cell_ai3_links_pane

0xd1be,	// (0x00049908) bg_popup_sub_pane_cp11

0xd1cb,	// (0x00049915) cell_ai3_links_pane_g1

0x25a4,	// (0x0003ecee) bg_popup_sub_pane_cp12

0xd1f0,	// (0x0004993a) heading_ai3_data_pane

0xd1f8,	// (0x00049942) list_ai3_gene_pane

0xd204,	// (0x0004994e) popup_ai3_data_window_g1

0xd20c,	// (0x00049956) heading_ai3_data_pane_g1

0xd214,	// (0x0004995e) heading_ai3_data_pane_t1

0xd222,	// (0x0004996c) list_double_ai3_gene_pane_ParamLimits

0xd222,	// (0x0004996c) list_double_ai3_gene_pane

0xd22f,	// (0x00049979) list_single_ai3_gene_pane_ParamLimits

0xd22f,	// (0x00049979) list_single_ai3_gene_pane

0xc000,	// (0x0004874a) list_highlight_pane_cp7_ParamLimits

0xc000,	// (0x0004874a) list_highlight_pane_cp7

0xd23c,	// (0x00049986) list_single_a13_gene_pane_t1_ParamLimits

0xd23c,	// (0x00049986) list_single_a13_gene_pane_t1

0xd253,	// (0x0004999d) list_single_ai3_gene_pane_g1

0xd25c,	// (0x000499a6) list_single_ai3_gene_pane_g2

0x0001,

0xfc9d,	// (0x0004c3e7) list_single_ai3_gene_pane_g

0xd264,	// (0x000499ae) list_double_ai3_gene_pane_g1_ParamLimits

0xd264,	// (0x000499ae) list_double_ai3_gene_pane_g1

0xd270,	// (0x000499ba) list_double_ai3_gene_pane_t1_ParamLimits

0xd270,	// (0x000499ba) list_double_ai3_gene_pane_t1

0xd28c,	// (0x000499d6) list_double_ai3_gene_pane_t2_ParamLimits

0xd28c,	// (0x000499d6) list_double_ai3_gene_pane_t2

0xd2a2,	// (0x000499ec) list_double_ai3_gene_pane_t3_ParamLimits

0xd2a2,	// (0x000499ec) list_double_ai3_gene_pane_t3

0x0002,

0xfca2,	// (0x0004c3ec) list_double_ai3_gene_pane_t_ParamLimits

0xfca2,	// (0x0004c3ec) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x537c,	// (0x00041ac6) aid_size_min_col_2

0xd14d,	// (0x00049897) aid_size_min_msg_ParamLimits

0xd14d,	// (0x00049897) aid_size_min_msg

0xc40d,	// (0x00048b57) fep_vkb_top_text_pane_g2_ParamLimits

0xc40d,	// (0x00048b57) fep_vkb_top_text_pane_g2

0x0001,

0xfb0e,	// (0x0004c258) fep_vkb_top_text_pane_g_ParamLimits

0xfb0e,	// (0x0004c258) fep_vkb_top_text_pane_g

0x25a4,	// (0x0003ecee) main_hc_apps_shell_pane

0xd2bf,	// (0x00049a09) grid_hc_apps_pane_ParamLimits

0xd2bf,	// (0x00049a09) grid_hc_apps_pane

0xd2d1,	// (0x00049a1b) list_hc_apps_pane

0xd2d9,	// (0x00049a23) scroll_pane_cp37_ParamLimits

0xd2d9,	// (0x00049a23) scroll_pane_cp37

0xd2e5,	// (0x00049a2f) cell_hc_apps_pane_ParamLimits

0xd2e5,	// (0x00049a2f) cell_hc_apps_pane

0xd393,	// (0x00049add) cell_hc_apps_pane_g1_ParamLimits

0xd393,	// (0x00049add) cell_hc_apps_pane_g1

0xd3c3,	// (0x00049b0d) cell_hc_apps_pane_g2_ParamLimits

0xd3c3,	// (0x00049b0d) cell_hc_apps_pane_g2

0xd3df,	// (0x00049b29) cell_hc_apps_pane_g3_ParamLimits

0xd3df,	// (0x00049b29) cell_hc_apps_pane_g3

0x0002,

0xfca9,	// (0x0004c3f3) cell_hc_apps_pane_g_ParamLimits

0xfca9,	// (0x0004c3f3) cell_hc_apps_pane_g

0xd401,	// (0x00049b4b) cell_hc_apps_pane_t1_ParamLimits

0xd401,	// (0x00049b4b) cell_hc_apps_pane_t1

0x7f0d,	// (0x00044657) grid_highlight_pane_cp10_ParamLimits

0x7f0d,	// (0x00044657) grid_highlight_pane_cp10

0xd441,	// (0x00049b8b) list_single_hc_apps_pane_ParamLimits

0xd441,	// (0x00049b8b) list_single_hc_apps_pane

0xd49d,	// (0x00049be7) list_single_hc_apps_pane_g1

0x6f2d,	// (0x00043677) list_single_hc_apps_pane_g2

0x0001,

0xfcb0,	// (0x0004c3fa) list_single_hc_apps_pane_g

0x6f46,	// (0x00043690) list_single_hc_apps_pane_g2_copy1

0x5440,	// (0x00041b8a) list_single_hc_apps_pane_t1

0x7c84,	// (0x000443ce) bg_set_opt_pane_cp_ParamLimits

0x587f,	// (0x00041fc9) setting_slider_pane_t1_ParamLimits

0x5898,	// (0x00041fe2) setting_slider_pane_t2_ParamLimits

0x58b2,	// (0x00041ffc) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0004bc83) setting_slider_pane_t_ParamLimits

0x58ca,	// (0x00042014) slider_set_pane_ParamLimits

0x5e90,	// (0x000425da) control_pane_g5_ParamLimits

0x5e90,	// (0x000425da) control_pane_g5

0xada7,	// (0x000474f1) slider_set_pane_g1_ParamLimits

0x6877,	// (0x00042fc1) slider_set_pane_g2_ParamLimits

0x6883,	// (0x00042fcd) slider_set_pane_g3_ParamLimits

0x6897,	// (0x00042fe1) slider_set_pane_g4_ParamLimits

0x68af,	// (0x00042ff9) slider_set_pane_g5_ParamLimits

0x6883,	// (0x00042fcd) slider_set_pane_g6_ParamLimits

0x68c5,	// (0x0004300f) slider_set_pane_g7_ParamLimits

0xf93f,	// (0x0004c089) slider_set_pane_g_ParamLimits

0x9048,	// (0x00045792) navi_icon_text_pane_ParamLimits

0x9532,	// (0x00045c7c) aid_fill_nsta_2_ParamLimits

0x9571,	// (0x00045cbb) aid_touch_tab_arrow_left_ParamLimits

0x9580,	// (0x00045cca) aid_touch_tab_arrow_right_ParamLimits

0x95ed,	// (0x00045d37) clock_nsta_pane_ParamLimits

0xa89d,	// (0x00046fe7) navi_icon_pane_g1_ParamLimits

0xa8a9,	// (0x00046ff3) navi_text_pane_t1_ParamLimits

0xbbea,	// (0x00048334) navi_icon_text_pane_g1_ParamLimits

0xbbf6,	// (0x00048340) navi_icon_text_pane_t1_ParamLimits

0xd49d,	// (0x00049be7) list_single_hc_apps_pane_g1_ParamLimits

0x6f2d,	// (0x00043677) list_single_hc_apps_pane_g2_ParamLimits

0xfcb0,	// (0x0004c3fa) list_single_hc_apps_pane_g_ParamLimits

0x6f46,	// (0x00043690) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5440,	// (0x00041b8a) list_single_hc_apps_pane_t1_ParamLimits

0x5789,	// (0x00041ed3) popup_toolbar2_fixed_window_ParamLimits

0x5789,	// (0x00041ed3) popup_toolbar2_fixed_window

0x6493,	// (0x00042bdd) popup_toolbar2_float_window

0x25a4,	// (0x0003ecee) bg_popup_sub_pane_cp27

0xd4b6,	// (0x00049c00) grid_toolbar2_float_pane

0x25a4,	// (0x0003ecee) bg_popup_sub_pane_cp26

0xd4b6,	// (0x00049c00) grid_toolbar2_fixed_pane

0xd4be,	// (0x00049c08) cell_toolbar2_fixed_pane_ParamLimits

0xd4be,	// (0x00049c08) cell_toolbar2_fixed_pane

0xd4ce,	// (0x00049c18) cell_toolbar2_fixed_pane_g1

0xd4d7,	// (0x00049c21) toolbar2_fixed_button_pane

0x9a0a,	// (0x00046154) toolbar2_fixed_button_pane_g1

0x9a12,	// (0x0004615c) toolbar2_fixed_button_pane_g2

0x9a1a,	// (0x00046164) toolbar2_fixed_button_pane_g3

0x9a22,	// (0x0004616c) toolbar2_fixed_button_pane_g4

0x9a2a,	// (0x00046174) toolbar2_fixed_button_pane_g5

0x9a32,	// (0x0004617c) toolbar2_fixed_button_pane_g6

0x9a3a,	// (0x00046184) toolbar2_fixed_button_pane_g7

0x9a42,	// (0x0004618c) toolbar2_fixed_button_pane_g8

0x9a4a,	// (0x00046194) toolbar2_fixed_button_pane_g9

0x0008,

0xf841,	// (0x0004bf8b) toolbar2_fixed_button_pane_g

0xd4df,	// (0x00049c29) cell_toolbar2_float_pane_ParamLimits

0xd4df,	// (0x00049c29) cell_toolbar2_float_pane

0xd4f0,	// (0x00049c3a) cell_toolbar2_float_pane_g1

0xd4d7,	// (0x00049c21) toolbar2_fixed_button_pane_cp

0xc169,	// (0x000488b3) fep_vkb_accented_list_pane_ParamLimits

0xc169,	// (0x000488b3) fep_vkb_accented_list_pane

0x6d16,	// (0x00043460) bg_popup_fep_shadow_pane_g9

0x91bc,	// (0x00045906) bg_popup_fep_shadow_pane_cp3

0x8678,	// (0x00044dc2) list_accented_list_pane

0xd4f9,	// (0x00049c43) list_single_accented_list_pane_ParamLimits

0xd4f9,	// (0x00049c43) list_single_accented_list_pane

0x91bc,	// (0x00045906) list_highlight_pane_cp10

0xd50a,	// (0x00049c54) list_single_accented_list_pane_t1

0x63e3,	// (0x00042b2d) popup_slider_window_ParamLimits

0x63e3,	// (0x00042b2d) popup_slider_window

0xd144,	// (0x0004988e) aid_indentation_list_msg

0xd5ce,	// (0x00049d18) bg_popup_window_pane_cp19

0xd636,	// (0x00049d80) popup_slider_window_g1

0xd652,	// (0x00049d9c) popup_slider_window_g2

0xd66e,	// (0x00049db8) popup_slider_window_g3

0x0005,

0xfcb5,	// (0x0004c3ff) popup_slider_window_g

0xd6d4,	// (0x00049e1e) popup_slider_window_t1

0xd748,	// (0x00049e92) small_volume_slider_vertical_pane

0xc03b,	// (0x00048785) small_volume_slider_vertical_pane_g1

0xc03b,	// (0x00048785) small_volume_slider_vertical_pane_g2

0xd764,	// (0x00049eae) small_volume_slider_vertical_pane_g3

0x0002,

0xfcc7,	// (0x0004c411) small_volume_slider_vertical_pane_g

0x554b,	// (0x00041c95) area_side_right_pane_ParamLimits

0x554b,	// (0x00041c95) area_side_right_pane

0x6f62,	// (0x000436ac) aid_size_side_button_ParamLimits

0x6f62,	// (0x000436ac) aid_size_side_button

0x6f76,	// (0x000436c0) grid_sctrl_middle_pane_ParamLimits

0x6f76,	// (0x000436c0) grid_sctrl_middle_pane

0x6f95,	// (0x000436df) sctrl_sk_bottom_pane

0x6fa6,	// (0x000436f0) sctrl_sk_top_pane

0x6fb8,	// (0x00043702) aid_touch_sctrl_top

0x7f0d,	// (0x00044657) bg_sctrl_sk_pane_ParamLimits

0x7f0d,	// (0x00044657) bg_sctrl_sk_pane

0x6fc5,	// (0x0004370f) sctrl_sk_top_pane_g1

0x6fd2,	// (0x0004371c) sctrl_sk_top_pane_t1

0x6fb8,	// (0x00043702) aid_touch_sctrl_bottom

0x7f0d,	// (0x00044657) bg_sctrl_sk_pane_cp_ParamLimits

0x7f0d,	// (0x00044657) bg_sctrl_sk_pane_cp

0x6fed,	// (0x00043737) sctrl_sk_bottom_pane_g1

0x6fd2,	// (0x0004371c) sctrl_sk_bottom_pane_t1

0x6ff6,	// (0x00043740) cell_sctrl_middle_pane_ParamLimits

0x6ff6,	// (0x00043740) cell_sctrl_middle_pane

0x7011,	// (0x0004375b) aid_touch_sctrl_middle_ParamLimits

0x7011,	// (0x0004375b) aid_touch_sctrl_middle

0x851d,	// (0x00044c67) bg_sctrl_middle_pane_ParamLimits

0x851d,	// (0x00044c67) bg_sctrl_middle_pane

0xc2b9,	// (0x00048a03) cell_sctrl_middle_pane_g1_ParamLimits

0xc2b9,	// (0x00048a03) cell_sctrl_middle_pane_g1

0x7023,	// (0x0004376d) cell_sctrl_middle_pane_g2_ParamLimits

0x7023,	// (0x0004376d) cell_sctrl_middle_pane_g2

0x0001,

0xfcd3,	// (0x0004c41d) cell_sctrl_middle_pane_g_ParamLimits

0xfcd3,	// (0x0004c41d) cell_sctrl_middle_pane_g

0x9a0a,	// (0x00046154) bg_sctrl_middle_pane_g1

0x9a12,	// (0x0004615c) bg_sctrl_middle_pane_g2

0x9a1a,	// (0x00046164) bg_sctrl_middle_pane_g3

0x9a22,	// (0x0004616c) bg_sctrl_middle_pane_g4

0x9a2a,	// (0x00046174) bg_sctrl_middle_pane_g5

0x9a32,	// (0x0004617c) bg_sctrl_middle_pane_g6

0x9a3a,	// (0x00046184) bg_sctrl_middle_pane_g7

0x9a42,	// (0x0004618c) bg_sctrl_middle_pane_g8

0x0007,

0xfcd8,	// (0x0004c422) bg_sctrl_middle_pane_g

0x9a4a,	// (0x00046194) bg_sctrl_middle_pane_g8_copy1

0x9a0a,	// (0x00046154) bg_sctrl_sk_pane_g1

0x9a12,	// (0x0004615c) bg_sctrl_sk_pane_g2

0x9a1a,	// (0x00046164) bg_sctrl_sk_pane_g3

0x0008,

0xf841,	// (0x0004bf8b) bg_sctrl_sk_pane_g

0x8440,	// (0x00044b8a) aid_size_touch_scroll_bar

0x9a22,	// (0x0004616c) bg_sctrl_sk_pane_g4

0x9a2a,	// (0x00046174) bg_sctrl_sk_pane_g5

0x9a32,	// (0x0004617c) bg_sctrl_sk_pane_g6

0x9a3a,	// (0x00046184) bg_sctrl_sk_pane_g7

0x9a42,	// (0x0004618c) bg_sctrl_sk_pane_g8

0x9a4a,	// (0x00046194) bg_sctrl_sk_pane_g9

0x604a,	// (0x00042794) popup_fep_china_hwr2_fs_candidate_window

0x6054,	// (0x0004279e) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x6054,	// (0x0004279e) popup_fep_china_hwr2_fs_control_window

0xc2b9,	// (0x00048a03) sctrl_sk_top_pane_g2

0x0001,

0xfcce,	// (0x0004c418) sctrl_sk_top_pane_g

0xd76d,	// (0x00049eb7) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd76d,	// (0x00049eb7) aid_fep_china_hwr2_fs_cell

0xd77f,	// (0x00049ec9) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd77f,	// (0x00049ec9) bg_popup_fep_shadow_pane_cp4

0xd796,	// (0x00049ee0) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd796,	// (0x00049ee0) bg_popup_fep_shadow_pane_cp5

0xd7a8,	// (0x00049ef2) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd7a8,	// (0x00049ef2) popup_fep_china_hwr2_fs_control_bar_grid

0xd7b8,	// (0x00049f02) popup_fep_china_hwr2_fs_control_funtion_grid

0xd7c0,	// (0x00049f0a) aid_fep_china_hwr2_fs_candi_cell

0x25a4,	// (0x0003ecee) bg_popup_fep_shadow_pane_cp6

0xd7ca,	// (0x00049f14) popup_fep_china_hwr2_fs_candidate_grid

0xd7d4,	// (0x00049f1e) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7d4,	// (0x00049f1e) cell_fep_china_hwr2_fs_funtion_grid

0xc03b,	// (0x00048785) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7ec,	// (0x00049f36) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7ec,	// (0x00049f36) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7fa,	// (0x00049f44) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7fa,	// (0x00049f44) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfce9,	// (0x0004c433) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfce9,	// (0x0004c433) cell_fep_china_hwr2_fs_funtion_grid_g

0xd810,	// (0x00049f5a) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd810,	// (0x00049f5a) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd825,	// (0x00049f6f) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd825,	// (0x00049f6f) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcee,	// (0x0004c438) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcee,	// (0x0004c438) cell_fep_china_hwr2_fs_funtion_grid_t

0xd841,	// (0x00049f8b) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd849,	// (0x00049f93) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd851,	// (0x00049f9b) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcf3,	// (0x0004c43d) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd859,	// (0x00049fa3) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd859,	// (0x00049fa3) cell_fep_china_hwr2_fs_candidate_grid

0xd872,	// (0x00049fbc) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd87a,	// (0x00049fc4) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc03b,	// (0x00048785) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc03b,	// (0x00048785) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb13,	// (0x0004c25d) cell_fep_china_hwr2_fs_candidate_grid_g

0xd882,	// (0x00049fcc) cell_fep_china_hwr2_fs_candidate_grid_t1

0x9600,	// (0x00045d4a) clock_nsta_pane_cp_24_ParamLimits

0x9600,	// (0x00045d4a) clock_nsta_pane_cp_24

0x967e,	// (0x00045dc8) indicator_nsta_pane_cp_24_ParamLimits

0x967e,	// (0x00045dc8) indicator_nsta_pane_cp_24

0xa719,	// (0x00046e63) heading_pane_g1

0x0001,

0xf8a6,	// (0x0004bff0) heading_pane_g

0xb15d,	// (0x000478a7) grid_sct_catagory_button_pane

0xb18d,	// (0x000478d7) scroll_pane_cp5_ParamLimits

0xbc38,	// (0x00048382) button_value_adjust_pane_cp5_ParamLimits

0xbc38,	// (0x00048382) button_value_adjust_pane_cp5

0xbd17,	// (0x00048461) form2_midp_time_pane_ParamLimits

0xd890,	// (0x00049fda) cell_sct_catagory_button_pane_ParamLimits

0xd890,	// (0x00049fda) cell_sct_catagory_button_pane

0xc000,	// (0x0004874a) bg_button_pane_cp01_ParamLimits

0xc000,	// (0x0004874a) bg_button_pane_cp01

0xc03b,	// (0x00048785) cell_sct_catagory_button_pane_g1

0x6422,	// (0x00042b6c) popup_tb_extension_window

0xd8a2,	// (0x00049fec) aid_size_cell_ext_ParamLimits

0xd8a2,	// (0x00049fec) aid_size_cell_ext

0x7f0d,	// (0x00044657) bg_tb_trans_pane_cp1_ParamLimits

0x7f0d,	// (0x00044657) bg_tb_trans_pane_cp1

0xd8c2,	// (0x0004a00c) grid_tb_ext_pane_ParamLimits

0xd8c2,	// (0x0004a00c) grid_tb_ext_pane

0xd8f0,	// (0x0004a03a) cell_tb_ext_pane_ParamLimits

0xd8f0,	// (0x0004a03a) cell_tb_ext_pane

0xd907,	// (0x0004a051) cell_tb_ext_pane_g1_ParamLimits

0xd907,	// (0x0004a051) cell_tb_ext_pane_g1

0xd924,	// (0x0004a06e) cell_tb_ext_pane_t1

0x7f0d,	// (0x00044657) list_highlight_pane_cp11_ParamLimits

0x7f0d,	// (0x00044657) list_highlight_pane_cp11

0x57a8,	// (0x00041ef2) popup_uni_indicator_window_ParamLimits

0x57a8,	// (0x00041ef2) popup_uni_indicator_window

0x851d,	// (0x00044c67) bg_popup_sub_pane_cp14

0xd93f,	// (0x0004a089) list_uniindi_pane

0xd94b,	// (0x0004a095) uniindi_top_pane

0x7f0d,	// (0x00044657) bg_uniindi_top_pane

0xd96a,	// (0x0004a0b4) uniindi_top_pane_g1

0xd980,	// (0x0004a0ca) uniindi_top_pane_g2

0x0003,

0xfcfa,	// (0x0004c444) uniindi_top_pane_g

0xd9aa,	// (0x0004a0f4) uniindi_top_pane_t1

0xd9d4,	// (0x0004a11e) list_single_uniindi_pane_ParamLimits

0xd9d4,	// (0x0004a11e) list_single_uniindi_pane

0xc03b,	// (0x00048785) bg_uniindi_top_pane_g1

0xd9e7,	// (0x0004a131) list_single_uniindi_pane_g1

0xd9fa,	// (0x0004a144) list_single_uniindi_pane_t1

0x25a4,	// (0x0003ecee) control_bg_pane

0xda1f,	// (0x0004a169) bg_sctrl_sk_pane_cp1

0xda28,	// (0x0004a172) bg_sctrl_sk_pane_cp2

0xda31,	// (0x0004a17b) control_bg_pane_g1

0xda3a,	// (0x0004a184) control_bg_pane_g2

0x0001,

0xfd03,	// (0x0004c44d) control_bg_pane_g

0xba82,	// (0x000481cc) cell_indicator_nsta_pane_g1_ParamLimits

0xba90,	// (0x000481da) cell_indicator_nsta_pane_g2_ParamLimits

0xfa77,	// (0x0004c1c1) cell_indicator_nsta_pane_g_ParamLimits

0x51dd,	// (0x00041927) form2_midp_time_pane_t1_ParamLimits

0x8282,	// (0x000449cc) main_idle_act4_pane_ParamLimits

0x8282,	// (0x000449cc) main_idle_act4_pane

0x6422,	// (0x00042b6c) popup_tb_extension_window_ParamLimits

0xd8e0,	// (0x0004a02a) tb_ext_find_pane_ParamLimits

0xd8e0,	// (0x0004a02a) tb_ext_find_pane

0xda43,	// (0x0004a18d) ai_gene_pane_1_cp1

0x9303,	// (0x00045a4d) ai_gene_pane_2_cp1

0xda4b,	// (0x0004a195) list_single_idle_plugin_calendar_pane

0xda54,	// (0x0004a19e) list_single_idle_plugin_notification_pane

0xda5d,	// (0x0004a1a7) list_single_idle_plugin_player_pane

0xda66,	// (0x0004a1b0) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda66,	// (0x0004a1b0) list_single_idle_plugin_shortcut_pane

0xda88,	// (0x0004a1d2) main_idle_act4_pane_t1

0xda9a,	// (0x0004a1e4) main_idle_act4_pane_t2

0x0001,

0xfd08,	// (0x0004c452) main_idle_act4_pane_t

0xdaac,	// (0x0004a1f6) middle_sk_idle_act4_pane_ParamLimits

0xdaac,	// (0x0004a1f6) middle_sk_idle_act4_pane

0xdac2,	// (0x0004a20c) popup_clock_digital_analogue_window_cp2

0xdadc,	// (0x0004a226) shortcut_wheel_idle_act4_pane_ParamLimits

0xdadc,	// (0x0004a226) shortcut_wheel_idle_act4_pane

0xc03b,	// (0x00048785) shortcut_wheel_idle_act4_pane_g1

0xc03b,	// (0x00048785) shortcut_wheel_idle_act4_pane_g2

0xc03b,	// (0x00048785) shortcut_wheel_idle_act4_pane_g3

0xc03b,	// (0x00048785) shortcut_wheel_idle_act4_pane_g4

0xc03b,	// (0x00048785) shortcut_wheel_idle_act4_pane_g5

0xdaf0,	// (0x0004a23a) shortcut_wheel_idle_act4_pane_g6

0xdaf8,	// (0x0004a242) shortcut_wheel_idle_act4_pane_g7

0xdb00,	// (0x0004a24a) shortcut_wheel_idle_act4_pane_g8

0xdb08,	// (0x0004a252) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd0d,	// (0x0004c457) shortcut_wheel_idle_act4_pane_g

0xc2b9,	// (0x00048a03) middle_sk_idle_act4_pane_g1_ParamLimits

0xc2b9,	// (0x00048a03) middle_sk_idle_act4_pane_g1

0xdb6c,	// (0x0004a2b6) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb6c,	// (0x0004a2b6) middle_sk_idle_act4_pane_g2

0x0001,

0xfd30,	// (0x0004c47a) middle_sk_idle_act4_pane_g_ParamLimits

0xfd30,	// (0x0004c47a) middle_sk_idle_act4_pane_g

0xdb78,	// (0x0004a2c2) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb78,	// (0x0004a2c2) middle_sk_idle_act4_pane_t1

0xdb95,	// (0x0004a2df) grid_ai_shortcut_pane_ParamLimits

0xdb95,	// (0x0004a2df) grid_ai_shortcut_pane

0xdbae,	// (0x0004a2f8) list_highlight_pane_cp16_ParamLimits

0xdbae,	// (0x0004a2f8) list_highlight_pane_cp16

0xdbbb,	// (0x0004a305) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdbbb,	// (0x0004a305) list_single_idle_plugin_shortcut_pane_g1

0xdbc7,	// (0x0004a311) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbc7,	// (0x0004a311) list_single_idle_plugin_shortcut_pane_g2

0xdbdf,	// (0x0004a329) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbdf,	// (0x0004a329) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd35,	// (0x0004c47f) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd35,	// (0x0004c47f) list_single_idle_plugin_shortcut_pane_g

0xdbf2,	// (0x0004a33c) cell_ai_shortcut_pane_ParamLimits

0xdbf2,	// (0x0004a33c) cell_ai_shortcut_pane

0xdc16,	// (0x0004a360) cell_ai_shortcut_pane_g1_ParamLimits

0xdc16,	// (0x0004a360) cell_ai_shortcut_pane_g1

0xda43,	// (0x0004a18d) ai_gene_pane_1_cp2

0xdc38,	// (0x0004a382) ai_gene_pane_2_cp2

0xdc40,	// (0x0004a38a) list_highlight_pane_cp15

0xdc49,	// (0x0004a393) list_single_idle_plugin_calendar_pane_g1

0xdc40,	// (0x0004a38a) list_highlight_pane_cp17

0xdc51,	// (0x0004a39b) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc59,	// (0x0004a3a3) list_single_idle_plugin_player_pane_g1

0xb3b6,	// (0x00047b00) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd3c,	// (0x0004c486) list_single_idle_plugin_player_pane_g

0xdc61,	// (0x0004a3ab) list_single_idle_plugin_player_pane_t1

0xdc6f,	// (0x0004a3b9) list_single_idle_plugin_player_pane_t2

0xdc7d,	// (0x0004a3c7) list_single_idle_plugin_player_pane_t3

0xdc8b,	// (0x0004a3d5) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd41,	// (0x0004c48b) list_single_idle_plugin_player_pane_t

0xdc99,	// (0x0004a3e3) wait_bar_pane_cp15

0xdca1,	// (0x0004a3eb) grid_ai_notification_pane

0xb3b6,	// (0x00047b00) list_single_idle_plugin_notification_pane_g1

0xdcaa,	// (0x0004a3f4) cell_ai_notification_pane_ParamLimits

0xdcaa,	// (0x0004a3f4) cell_ai_notification_pane

0xdcb7,	// (0x0004a401) cell_ai_notification_pane_g1

0xdcbf,	// (0x0004a409) cell_ai_notification_pane_t1

0xdccd,	// (0x0004a417) tb_ext_find_button_pane

0xdcd5,	// (0x0004a41f) tb_ext_find_pane_g1

0xdcdd,	// (0x0004a427) tb_ext_find_pane_t1

0x8ba6,	// (0x000452f0) tb_ext_find_button_pane_g1

0xdceb,	// (0x0004a435) tb_ext_find_button_pane_g2

0x0001,

0xfd4a,	// (0x0004c494) tb_ext_find_button_pane_g

0xda88,	// (0x0004a1d2) main_idle_act4_pane_t1_ParamLimits

0xda9a,	// (0x0004a1e4) main_idle_act4_pane_t2_ParamLimits

0xfd08,	// (0x0004c452) main_idle_act4_pane_t_ParamLimits

0xdac2,	// (0x0004a20c) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdad0,	// (0x0004a21a) sat_plugin_idle_act4_pane_ParamLimits

0xdad0,	// (0x0004a21a) sat_plugin_idle_act4_pane

0xdcf4,	// (0x0004a43e) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdcf4,	// (0x0004a43e) sat_plugin_idle_act4_pane_t1

0xdd07,	// (0x0004a451) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd07,	// (0x0004a451) sat_plugin_idle_act4_pane_t2

0xdd1a,	// (0x0004a464) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd1a,	// (0x0004a464) sat_plugin_idle_act4_pane_t3

0xdd2d,	// (0x0004a477) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd2d,	// (0x0004a477) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd4f,	// (0x0004c499) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd4f,	// (0x0004c499) sat_plugin_idle_act4_pane_t

0x56e3,	// (0x00041e2d) popup_battery_window_ParamLimits

0x56e3,	// (0x00041e2d) popup_battery_window

0x7f0d,	// (0x00044657) bg_popup_sub_pane_cp25_ParamLimits

0x7f0d,	// (0x00044657) bg_popup_sub_pane_cp25

0xdd40,	// (0x0004a48a) popup_battery_window_g1_ParamLimits

0xdd40,	// (0x0004a48a) popup_battery_window_g1

0xdd4c,	// (0x0004a496) popup_battery_window_t1_ParamLimits

0xdd4c,	// (0x0004a496) popup_battery_window_t1

0xdd5e,	// (0x0004a4a8) popup_battery_window_t2_ParamLimits

0xdd5e,	// (0x0004a4a8) popup_battery_window_t2

0x0001,

0xfd58,	// (0x0004c4a2) popup_battery_window_t_ParamLimits

0xfd58,	// (0x0004c4a2) popup_battery_window_t

0x91d0,	// (0x0004591a) midp_canvas_pane_ParamLimits

0x9247,	// (0x00045991) midp_keypad_pane_ParamLimits

0x9247,	// (0x00045991) midp_keypad_pane

0x94e0,	// (0x00045c2a) main_midp_pane_ParamLimits

0xbafc,	// (0x00048246) signal_pane_g2_cp_ParamLimits

0xdd7b,	// (0x0004a4c5) aid_size_cell_midp_keypad_ParamLimits

0xdd7b,	// (0x0004a4c5) aid_size_cell_midp_keypad

0xdd95,	// (0x0004a4df) midp_keyp_game_grid_pane_ParamLimits

0xdd95,	// (0x0004a4df) midp_keyp_game_grid_pane

0xddb5,	// (0x0004a4ff) midp_keyp_rocker_pane_ParamLimits

0xddb5,	// (0x0004a4ff) midp_keyp_rocker_pane

0xddee,	// (0x0004a538) midp_keyp_sk_left_pane_ParamLimits

0xddee,	// (0x0004a538) midp_keyp_sk_left_pane

0xde48,	// (0x0004a592) midp_keyp_sk_right_pane_ParamLimits

0xde48,	// (0x0004a592) midp_keyp_sk_right_pane

0x25a4,	// (0x0003ecee) bg_button_pane_cp03

0xdea2,	// (0x0004a5ec) midp_keyp_sk_left_pane_g1

0x25a4,	// (0x0003ecee) bg_button_pane_cp04

0xdea2,	// (0x0004a5ec) midp_keyp_sk_right_pane_g1

0xc03b,	// (0x00048785) midp_keyp_rocker_pane_g1

0xdeab,	// (0x0004a5f5) keyp_game_cell_pane_ParamLimits

0xdeab,	// (0x0004a5f5) keyp_game_cell_pane

0x25a4,	// (0x0003ecee) bg_button_pane_cp02

0xdebe,	// (0x0004a608) keyp_game_cell_pane_g1

0x5727,	// (0x00041e71) popup_fep_vkb2_window_ParamLimits

0x5727,	// (0x00041e71) popup_fep_vkb2_window

0x7041,	// (0x0004378b) aid_size_cell_vkb2_ParamLimits

0x7041,	// (0x0004378b) aid_size_cell_vkb2

0x7095,	// (0x000437df) popup_fep_vkb2_window_g1_ParamLimits

0x7095,	// (0x000437df) popup_fep_vkb2_window_g1

0x70dd,	// (0x00043827) vkb2_area_bottom_pane_ParamLimits

0x70dd,	// (0x00043827) vkb2_area_bottom_pane

0x7129,	// (0x00043873) vkb2_area_keypad_pane_ParamLimits

0x7129,	// (0x00043873) vkb2_area_keypad_pane

0x716b,	// (0x000438b5) vkb2_area_top_pane_ParamLimits

0x716b,	// (0x000438b5) vkb2_area_top_pane

0x71e5,	// (0x0004392f) vkb2_top_entry_pane_ParamLimits

0x71e5,	// (0x0004392f) vkb2_top_entry_pane

0x720f,	// (0x00043959) vkb2_top_grid_left_pane_ParamLimits

0x720f,	// (0x00043959) vkb2_top_grid_left_pane

0x722d,	// (0x00043977) vkb2_top_grid_right_pane_ParamLimits

0x722d,	// (0x00043977) vkb2_top_grid_right_pane

0x724b,	// (0x00043995) vkb2_cell_keypad_pane_ParamLimits

0x724b,	// (0x00043995) vkb2_cell_keypad_pane

0x731c,	// (0x00043a66) vkb2_area_bottom_grid_pane_ParamLimits

0x731c,	// (0x00043a66) vkb2_area_bottom_grid_pane

0x7342,	// (0x00043a8c) vkb2_area_bottom_pane_g1_ParamLimits

0x7342,	// (0x00043a8c) vkb2_area_bottom_pane_g1

0x7366,	// (0x00043ab0) vkb2_area_bottom_pane_g2_ParamLimits

0x7366,	// (0x00043ab0) vkb2_area_bottom_pane_g2

0x7394,	// (0x00043ade) vkb2_area_bottom_pane_g3_ParamLimits

0x7394,	// (0x00043ade) vkb2_area_bottom_pane_g3

0x0002,

0xfd5d,	// (0x0004c4a7) vkb2_area_bottom_pane_g_ParamLimits

0xfd5d,	// (0x0004c4a7) vkb2_area_bottom_pane_g

0x73f5,	// (0x00043b3f) vkb2_top_cell_left_pane_ParamLimits

0x73f5,	// (0x00043b3f) vkb2_top_cell_left_pane

0xdecf,	// (0x0004a619) vkb2_top_entry_pane_g1_ParamLimits

0xdecf,	// (0x0004a619) vkb2_top_entry_pane_g1

0xdedd,	// (0x0004a627) vkb2_top_entry_pane_t1_ParamLimits

0xdedd,	// (0x0004a627) vkb2_top_entry_pane_t1

0xdf0f,	// (0x0004a659) vkb2_top_entry_pane_t2_ParamLimits

0xdf0f,	// (0x0004a659) vkb2_top_entry_pane_t2

0xdf41,	// (0x0004a68b) vkb2_top_entry_pane_t3_ParamLimits

0xdf41,	// (0x0004a68b) vkb2_top_entry_pane_t3

0x0002,

0xfd64,	// (0x0004c4ae) vkb2_top_entry_pane_t_ParamLimits

0xfd64,	// (0x0004c4ae) vkb2_top_entry_pane_t

0x7442,	// (0x00043b8c) vkb2_top_grid_right_pane_g1_ParamLimits

0x7442,	// (0x00043b8c) vkb2_top_grid_right_pane_g1

0x7458,	// (0x00043ba2) vkb2_top_grid_right_pane_g2_ParamLimits

0x7458,	// (0x00043ba2) vkb2_top_grid_right_pane_g2

0x7470,	// (0x00043bba) vkb2_top_grid_right_pane_g3_ParamLimits

0x7470,	// (0x00043bba) vkb2_top_grid_right_pane_g3

0x7488,	// (0x00043bd2) vkb2_top_grid_right_pane_g4_ParamLimits

0x7488,	// (0x00043bd2) vkb2_top_grid_right_pane_g4

0x0003,

0xfd6b,	// (0x0004c4b5) vkb2_top_grid_right_pane_g_ParamLimits

0xfd6b,	// (0x0004c4b5) vkb2_top_grid_right_pane_g

0x749e,	// (0x00043be8) vkb2_top_cell_left_pane_g1

0x74b5,	// (0x00043bff) vkb2_cell_keypad_pane_g1_ParamLimits

0x74b5,	// (0x00043bff) vkb2_cell_keypad_pane_g1

0xdf65,	// (0x0004a6af) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf65,	// (0x0004a6af) vkb2_cell_keypad_pane_t1

0x74c3,	// (0x00043c0d) vkb2_cell_bottom_grid_pane_ParamLimits

0x74c3,	// (0x00043c0d) vkb2_cell_bottom_grid_pane

0x74fc,	// (0x00043c46) vkb2_cell_bottom_grid_pane_g1

0xdb10,	// (0x0004a25a) aid_call2_pane_cp02

0xdb18,	// (0x0004a262) aid_call_pane_cp02

0xdb20,	// (0x0004a26a) clock_digital_number_pane_cp10

0xdb28,	// (0x0004a272) clock_digital_number_pane_cp11

0xdb30,	// (0x0004a27a) clock_digital_number_pane_cp12

0xdb38,	// (0x0004a282) clock_digital_number_pane_cp13

0xdb40,	// (0x0004a28a) clock_digital_separator_pane_cp10

0x8ba6,	// (0x000452f0) popup_clock_digital_analogue_window_cp2_g1

0x8ba6,	// (0x000452f0) popup_clock_digital_analogue_window_cp2_g2

0xdb48,	// (0x0004a292) popup_clock_digital_analogue_window_cp2_g3

0x8ba6,	// (0x000452f0) popup_clock_digital_analogue_window_cp2_g4

0xdb48,	// (0x0004a292) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd20,	// (0x0004c46a) popup_clock_digital_analogue_window_cp2_g

0xdb50,	// (0x0004a29a) popup_clock_digital_analogue_window_cp2_t1

0xdb5e,	// (0x0004a2a8) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd2b,	// (0x0004c475) popup_clock_digital_analogue_window_cp2_t

0xc03b,	// (0x00048785) clock_digital_number_pane_cp10_g1

0xc03b,	// (0x00048785) clock_digital_number_pane_cp10_g2

0x0001,

0xfb13,	// (0x0004c25d) clock_digital_number_pane_cp10_g

0xc03b,	// (0x00048785) clock_digital_separator_pane_cp10_g1

0xc03b,	// (0x00048785) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb13,	// (0x0004c25d) clock_digital_separator_pane_cp10_g

0xd98c,	// (0x0004a0d6) uniindi_top_pane_g3

0xd99d,	// (0x0004a0e7) uniindi_top_pane_g4

0x72d6,	// (0x00043a20) vkb2_row_keypad_pane_ParamLimits

0x72d6,	// (0x00043a20) vkb2_row_keypad_pane

0x7518,	// (0x00043c62) vkb2_cell_t_keypad_pane_ParamLimits

0x7518,	// (0x00043c62) vkb2_cell_t_keypad_pane

0x7528,	// (0x00043c72) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7528,	// (0x00043c72) vkb2_cell_t_keypad_pane_cp08

0x753b,	// (0x00043c85) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x753b,	// (0x00043c85) vkb2_cell_t_keypad_pane_cp09

0x754f,	// (0x00043c99) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x754f,	// (0x00043c99) vkb2_cell_t_keypad_pane_cp01

0x7560,	// (0x00043caa) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7560,	// (0x00043caa) vkb2_cell_t_keypad_pane_cp02

0x7571,	// (0x00043cbb) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7571,	// (0x00043cbb) vkb2_cell_t_keypad_pane_cp03

0x7582,	// (0x00043ccc) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7582,	// (0x00043ccc) vkb2_cell_t_keypad_pane_cp04

0x7593,	// (0x00043cdd) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7593,	// (0x00043cdd) vkb2_cell_t_keypad_pane_cp05

0x75a4,	// (0x00043cee) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x75a4,	// (0x00043cee) vkb2_cell_t_keypad_pane_cp06

0x75b5,	// (0x00043cff) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x75b5,	// (0x00043cff) vkb2_cell_t_keypad_pane_cp07

0x75c6,	// (0x00043d10) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x75c6,	// (0x00043d10) vkb2_cell_t_keypad_pane_cp10

0xc2b9,	// (0x00048a03) vkb2_cell_t_keypad_pane_g1

0xdf7c,	// (0x0004a6c6) vkb2_cell_t_keypad_pane_t1

0x25a4,	// (0x0003ecee) popup_grid_graphic2_window

0xdf8e,	// (0x0004a6d8) aid_size_cell_graphic2_ParamLimits

0xdf8e,	// (0x0004a6d8) aid_size_cell_graphic2

0xdfc6,	// (0x0004a710) bg_popup_window_pane_cp21_ParamLimits

0xdfc6,	// (0x0004a710) bg_popup_window_pane_cp21

0xdfd4,	// (0x0004a71e) graphic2_pages_pane_ParamLimits

0xdfd4,	// (0x0004a71e) graphic2_pages_pane

0xe01a,	// (0x0004a764) grid_graphic2_control_pane_ParamLimits

0xe01a,	// (0x0004a764) grid_graphic2_control_pane

0xe058,	// (0x0004a7a2) grid_graphic2_pane_ParamLimits

0xe058,	// (0x0004a7a2) grid_graphic2_pane

0xe0cc,	// (0x0004a816) cell_graphic2_pane

0x25a4,	// (0x0003ecee) main_comp_mode_pane

0xd1f8,	// (0x00049942) list_ai3_gene_pane_ParamLimits

0xd5ce,	// (0x00049d18) bg_popup_window_pane_cp19_ParamLimits

0xd5da,	// (0x00049d24) bg_touch_area_indi_pane_ParamLimits

0xd5da,	// (0x00049d24) bg_touch_area_indi_pane

0xd5f0,	// (0x00049d3a) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5f0,	// (0x00049d3a) bg_touch_area_indi_pane_cp01

0xd606,	// (0x00049d50) bg_touch_area_indi_pane_cp02_ParamLimits

0xd606,	// (0x00049d50) bg_touch_area_indi_pane_cp02

0xd61c,	// (0x00049d66) bg_touch_area_indi_pane_cp03_ParamLimits

0xd61c,	// (0x00049d66) bg_touch_area_indi_pane_cp03

0xd636,	// (0x00049d80) popup_slider_window_g1_ParamLimits

0xd652,	// (0x00049d9c) popup_slider_window_g2_ParamLimits

0xd66e,	// (0x00049db8) popup_slider_window_g3_ParamLimits

0xfcb5,	// (0x0004c3ff) popup_slider_window_g_ParamLimits

0xd6d4,	// (0x00049e1e) popup_slider_window_t1_ParamLimits

0xd748,	// (0x00049e92) small_volume_slider_vertical_pane_ParamLimits

0xe0cc,	// (0x0004a816) cell_graphic2_pane_ParamLimits

0xe11b,	// (0x0004a865) bg_button_pane_cp10_ParamLimits

0xe11b,	// (0x0004a865) bg_button_pane_cp10

0xe12e,	// (0x0004a878) bg_button_pane_cp11_ParamLimits

0xe12e,	// (0x0004a878) bg_button_pane_cp11

0xe141,	// (0x0004a88b) graphic2_pages_pane_g1_ParamLimits

0xe141,	// (0x0004a88b) graphic2_pages_pane_g1

0xe15c,	// (0x0004a8a6) graphic2_pages_pane_g2_ParamLimits

0xe15c,	// (0x0004a8a6) graphic2_pages_pane_g2

0x0001,

0xfd79,	// (0x0004c4c3) graphic2_pages_pane_g_ParamLimits

0xfd79,	// (0x0004c4c3) graphic2_pages_pane_g

0xe174,	// (0x0004a8be) graphic2_pages_pane_t1_ParamLimits

0xe174,	// (0x0004a8be) graphic2_pages_pane_t1

0xe18c,	// (0x0004a8d6) cell_graphic2_control_pane_ParamLimits

0xe18c,	// (0x0004a8d6) cell_graphic2_control_pane

0xe1aa,	// (0x0004a8f4) cell_graphic2_pane_g1_ParamLimits

0xe1aa,	// (0x0004a8f4) cell_graphic2_pane_g1

0xe1b7,	// (0x0004a901) cell_graphic2_pane_g2_ParamLimits

0xe1b7,	// (0x0004a901) cell_graphic2_pane_g2

0xe1c4,	// (0x0004a90e) cell_graphic2_pane_g3_ParamLimits

0xe1c4,	// (0x0004a90e) cell_graphic2_pane_g3

0xe1d1,	// (0x0004a91b) cell_graphic2_pane_g4_ParamLimits

0xe1d1,	// (0x0004a91b) cell_graphic2_pane_g4

0xe1de,	// (0x0004a928) cell_graphic2_pane_g5_ParamLimits

0xe1de,	// (0x0004a928) cell_graphic2_pane_g5

0x0004,

0xfd7e,	// (0x0004c4c8) cell_graphic2_pane_g_ParamLimits

0xfd7e,	// (0x0004c4c8) cell_graphic2_pane_g

0xe1f7,	// (0x0004a941) cell_graphic2_pane_t1_ParamLimits

0xe1f7,	// (0x0004a941) cell_graphic2_pane_t1

0x9a7e,	// (0x000461c8) grid_highlight_pane_cp11_ParamLimits

0x9a7e,	// (0x000461c8) grid_highlight_pane_cp11

0x7f0d,	// (0x00044657) bg_button_pane_cp05

0xe24e,	// (0x0004a998) cell_graphic2_control_pane_g1

0xc03b,	// (0x00048785) bg_touch_area_indi_pane_g1

0xe276,	// (0x0004a9c0) aid_cmod_rocker_key_size

0xe280,	// (0x0004a9ca) aid_cmode_itu_key_size

0xe28a,	// (0x0004a9d4) main_cmode_video_pane

0xe294,	// (0x0004a9de) main_comp_mode_itu_pane

0xe2a0,	// (0x0004a9ea) main_comp_mode_rocker_pane

0xe2ac,	// (0x0004a9f6) cell_cmode_rocker_pane_ParamLimits

0xe2ac,	// (0x0004a9f6) cell_cmode_rocker_pane

0xe2be,	// (0x0004aa08) cell_cmode_itu_pane_ParamLimits

0xe2be,	// (0x0004aa08) cell_cmode_itu_pane

0x851d,	// (0x00044c67) bg_button_pane_cp06_ParamLimits

0x851d,	// (0x00044c67) bg_button_pane_cp06

0xc2b9,	// (0x00048a03) cell_cmode_rocker_pane_g1_ParamLimits

0xc2b9,	// (0x00048a03) cell_cmode_rocker_pane_g1

0xd7ec,	// (0x00049f36) cell_cmode_rocker_pane_g2_ParamLimits

0xd7ec,	// (0x00049f36) cell_cmode_rocker_pane_g2

0x0001,

0xfd8e,	// (0x0004c4d8) cell_cmode_rocker_pane_g_ParamLimits

0xfd8e,	// (0x0004c4d8) cell_cmode_rocker_pane_g

0x25a4,	// (0x0003ecee) bg_button_pane_cp07

0xe2d3,	// (0x0004aa1d) cell_cmode_itu_pane_g1

0xe2dc,	// (0x0004aa26) cell_cmode_itu_pane_t1

0xe2ea,	// (0x0004aa34) cell_cmode_itu_pane_t2

0x0001,

0xfd93,	// (0x0004c4dd) cell_cmode_itu_pane_t

0xda0f,	// (0x0004a159) aid_touch_ctrl_left

0xda17,	// (0x0004a161) aid_touch_ctrl_right

0x25a4,	// (0x0003ecee) compa_mode_pane

0xe2f8,	// (0x0004aa42) aid_cmod_rocker_key_size_cp

0xe302,	// (0x0004aa4c) aid_cmode_itu_key_size_cp

0xe30c,	// (0x0004aa56) compa_mode_pane_g1

0xe314,	// (0x0004aa5e) compa_mode_pane_g2

0xe31c,	// (0x0004aa66) compa_mode_pane_g3

0x0002,

0xfd98,	// (0x0004c4e2) compa_mode_pane_g

0xe324,	// (0x0004aa6e) main_comp_mode_itu_pane_cp

0xe32c,	// (0x0004aa76) main_comp_mode_rocker_pane_cp

0xe334,	// (0x0004aa7e) cell_cmode_itu_pane_cp_ParamLimits

0xe334,	// (0x0004aa7e) cell_cmode_itu_pane_cp

0xe349,	// (0x0004aa93) cell_cmode_rocker_pane_cp_ParamLimits

0xe349,	// (0x0004aa93) cell_cmode_rocker_pane_cp

0x851d,	// (0x00044c67) bg_button_pane_cp06_cp_ParamLimits

0x851d,	// (0x00044c67) bg_button_pane_cp06_cp

0xc2b9,	// (0x00048a03) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc2b9,	// (0x00048a03) cell_cmode_rocker_pane_g1_cp

0xc03b,	// (0x00048785) cell_cmode_rocker_pane_g2_cp

0x25a4,	// (0x0003ecee) bg_button_pane_cp07_cp

0xaf64,	// (0x000476ae) cell_cmode_itu_pane_g1_cp

0xe35b,	// (0x0004aaa5) cell_cmode_itu_pane_t1_cp

0xe35b,	// (0x0004aaa5) cell_cmode_itu_pane_t2_cp

0xaf51,	// (0x0004769b) settings_code_pane_cp2

0x7c84,	// (0x000443ce) bg_popup_window_pane_cp3_ParamLimits

0x810d,	// (0x00044857) heading_pane_cp3_ParamLimits

0x811c,	// (0x00044866) listscroll_popup_graphic_pane_ParamLimits

0x6afa,	// (0x00043244) fep_hwr_aid_pane_ParamLimits

0x6fb8,	// (0x00043702) aid_touch_sctrl_top_ParamLimits

0x6fc5,	// (0x0004370f) sctrl_sk_top_pane_g1_ParamLimits

0xc2b9,	// (0x00048a03) sctrl_sk_top_pane_g2_ParamLimits

0xfcce,	// (0x0004c418) sctrl_sk_top_pane_g_ParamLimits

0x6fd2,	// (0x0004371c) sctrl_sk_top_pane_t1_ParamLimits

0x6fb8,	// (0x00043702) aid_touch_sctrl_bottom_ParamLimits

0x6fd2,	// (0x0004371c) sctrl_sk_bottom_pane_t1_ParamLimits

0xd958,	// (0x0004a0a2) aid_area_touch_clock

0x71ad,	// (0x000438f7) aid_vkb2_area_top_pane_cell_ParamLimits

0x71ad,	// (0x000438f7) aid_vkb2_area_top_pane_cell

0x72f8,	// (0x00043a42) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x72f8,	// (0x00043a42) aid_vkb2_area_bottom_pane_cell

0xdec7,	// (0x0004a611) popup_char_count_window

0xe369,	// (0x0004aab3) popup_char_count_window_g1

0xe372,	// (0x0004aabc) popup_char_count_window_g2

0xe37b,	// (0x0004aac5) popup_char_count_window_g3

0x0002,

0xfd9f,	// (0x0004c4e9) popup_char_count_window_g

0xe384,	// (0x0004aace) popup_char_count_window_t1

0x7073,	// (0x000437bd) popup_fep_char_preview_window_ParamLimits

0x7073,	// (0x000437bd) popup_fep_char_preview_window

0x71cb,	// (0x00043915) vkb2_top_candi_pane_ParamLimits

0x71cb,	// (0x00043915) vkb2_top_candi_pane

0xe392,	// (0x0004aadc) cell_vkb2_top_candi_pane_ParamLimits

0xe392,	// (0x0004aadc) cell_vkb2_top_candi_pane

0xa099,	// (0x000467e3) bg_popup_fep_char_preview_window_ParamLimits

0xa099,	// (0x000467e3) bg_popup_fep_char_preview_window

0x75db,	// (0x00043d25) popup_fep_char_preview_window_t1_ParamLimits

0x75db,	// (0x00043d25) popup_fep_char_preview_window_t1

0xe3df,	// (0x0004ab29) bg_popup_fep_char_preview_window_g1

0xe3e7,	// (0x0004ab31) bg_popup_fep_char_preview_window_g2

0xe3ef,	// (0x0004ab39) bg_popup_fep_char_preview_window_g3

0xe3f7,	// (0x0004ab41) bg_popup_fep_char_preview_window_g4

0xe3ff,	// (0x0004ab49) bg_popup_fep_char_preview_window_g5

0xe407,	// (0x0004ab51) bg_popup_fep_char_preview_window_g6

0xe40f,	// (0x0004ab59) bg_popup_fep_char_preview_window_g7

0xe417,	// (0x0004ab61) bg_popup_fep_char_preview_window_g8

0xe41f,	// (0x0004ab69) bg_popup_fep_char_preview_window_g9

0x0009,

0xfda6,	// (0x0004c4f0) bg_popup_fep_char_preview_window_g

0xc2b9,	// (0x00048a03) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc2b9,	// (0x00048a03) cell_vkb2_top_candi_pane_g1

0xc5d0,	// (0x00048d1a) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc5d0,	// (0x00048d1a) cell_vkb2_top_candi_pane_g2

0xc5f1,	// (0x00048d3b) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc5f1,	// (0x00048d3b) cell_vkb2_top_candi_pane_g3

0x761d,	// (0x00043d67) cell_vkb2_top_candi_pane_g4_ParamLimits

0x761d,	// (0x00043d67) cell_vkb2_top_candi_pane_g4

0xe21b,	// (0x0004a965) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe21b,	// (0x0004a965) cell_vkb2_top_candi_pane_g5

0xd7ec,	// (0x00049f36) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd7ec,	// (0x00049f36) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdbb,	// (0x0004c505) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdbb,	// (0x0004c505) cell_vkb2_top_candi_pane_g

0x763e,	// (0x00043d88) cell_vkb2_top_candi_pane_t1

0x6863,	// (0x00042fad) aid_size_touch_slider_mark_ParamLimits

0x6863,	// (0x00042fad) aid_size_touch_slider_mark

0xe00a,	// (0x0004a754) grid_graphic2_catg_pane_ParamLimits

0xe00a,	// (0x0004a754) grid_graphic2_catg_pane

0xe0a8,	// (0x0004a7f2) popup_grid_graphic2_window_t1_ParamLimits

0xe0a8,	// (0x0004a7f2) popup_grid_graphic2_window_t1

0xe0ba,	// (0x0004a804) popup_grid_graphic2_window_t2_ParamLimits

0xe0ba,	// (0x0004a804) popup_grid_graphic2_window_t2

0x0001,

0xfd74,	// (0x0004c4be) popup_grid_graphic2_window_t_ParamLimits

0xfd74,	// (0x0004c4be) popup_grid_graphic2_window_t

0x7f0d,	// (0x00044657) bg_button_pane_cp05_ParamLimits

0xe24e,	// (0x0004a998) cell_graphic2_control_pane_g1_ParamLimits

0xe427,	// (0x0004ab71) cell_graphic2_catg_pane_ParamLimits

0xe427,	// (0x0004ab71) cell_graphic2_catg_pane

0x25a4,	// (0x0003ecee) bg_button_pane_cp12

0xe439,	// (0x0004ab83) cell_graphic2_catg_pane_g1

0xd924,	// (0x0004a06e) cell_tb_ext_pane_t1_ParamLimits

0x7415,	// (0x00043b5f) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7415,	// (0x00043b5f) vkb2_top_cell_right_narrow_pane

0x742d,	// (0x00043b77) vkb2_top_cell_right_wide_pane_ParamLimits

0x742d,	// (0x00043b77) vkb2_top_cell_right_wide_pane

0x6aec,	// (0x00043236) bg_vkb2_func_pane_ParamLimits

0x6aec,	// (0x00043236) bg_vkb2_func_pane

0x749e,	// (0x00043be8) vkb2_top_cell_left_pane_g1_ParamLimits

0x6aec,	// (0x00043236) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6aec,	// (0x00043236) bg_vkb2_fuc_pane_cp03

0x74fc,	// (0x00043c46) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9a12,	// (0x0004615c) bg_vkb2_func_pane_g1

0x9a1a,	// (0x00046164) bg_vkb2_func_pane_g2

0x9a2a,	// (0x00046174) bg_vkb2_func_pane_g3

0x9a22,	// (0x0004616c) bg_vkb2_func_pane_g4

0x9a32,	// (0x0004617c) bg_vkb2_func_pane_g5

0x9a3a,	// (0x00046184) bg_vkb2_func_pane_g6

0x9a42,	// (0x0004618c) bg_vkb2_func_pane_g7

0x9a4a,	// (0x00046194) bg_vkb2_func_pane_g8

0x9a0a,	// (0x00046154) bg_vkb2_func_pane_g9

0x0008,

0xfdc8,	// (0x0004c512) bg_vkb2_func_pane_g

0x6aec,	// (0x00043236) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6aec,	// (0x00043236) bg_vkb2_fuc_pane_cp01

0x749e,	// (0x00043be8) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x749e,	// (0x00043be8) vkb2_top_cell_right_wide_pane_g1

0x6aec,	// (0x00043236) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6aec,	// (0x00043236) bg_vkb2_fuc_pane_cp02

0x74fc,	// (0x00043c46) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x74fc,	// (0x00043c46) vkb2_top_cell_right_narrow_pane_g1

0xd548,	// (0x00049c92) aid_touch_area_decrease_ParamLimits

0xd548,	// (0x00049c92) aid_touch_area_decrease

0xd56c,	// (0x00049cb6) aid_touch_area_increase_ParamLimits

0xd56c,	// (0x00049cb6) aid_touch_area_increase

0xd584,	// (0x00049cce) aid_touch_area_mute_ParamLimits

0xd584,	// (0x00049cce) aid_touch_area_mute

0xd5a0,	// (0x00049cea) aid_touch_area_slider_ParamLimits

0xd5a0,	// (0x00049cea) aid_touch_area_slider

0xd68a,	// (0x00049dd4) popup_slider_window_g4_ParamLimits

0xd68a,	// (0x00049dd4) popup_slider_window_g4

0xd6a2,	// (0x00049dec) popup_slider_window_g5_ParamLimits

0xd6a2,	// (0x00049dec) popup_slider_window_g5

0xd6c4,	// (0x00049e0e) popup_slider_window_g6_ParamLimits

0xd6c4,	// (0x00049e0e) popup_slider_window_g6

0xd702,	// (0x00049e4c) popup_slider_window_t2_ParamLimits

0xd702,	// (0x00049e4c) popup_slider_window_t2

0x0001,

0xfcc2,	// (0x0004c40c) popup_slider_window_t_ParamLimits

0xfcc2,	// (0x0004c40c) popup_slider_window_t

0xd71a,	// (0x00049e64) slider_pane_ParamLimits

0xd71a,	// (0x00049e64) slider_pane

0xe442,	// (0x0004ab8c) slider_pane_g1_ParamLimits

0xe442,	// (0x0004ab8c) slider_pane_g1

0xe456,	// (0x0004aba0) slider_pane_g2_ParamLimits

0xe456,	// (0x0004aba0) slider_pane_g2

0xe46c,	// (0x0004abb6) slider_pane_g3_ParamLimits

0xe46c,	// (0x0004abb6) slider_pane_g3

0x0003,

0xfddb,	// (0x0004c525) slider_pane_g_ParamLimits

0xfddb,	// (0x0004c525) slider_pane_g

0x647e,	// (0x00042bc8) popup_tb_float_extension_window_ParamLimits

0x647e,	// (0x00042bc8) popup_tb_float_extension_window

0xe498,	// (0x0004abe2) aid_size_cell_tb_float_ext

0x25a4,	// (0x0003ecee) bg_popup_sub_window_cp28

0xe4a4,	// (0x0004abee) grid_tb_float_ext_pane

0xe4ae,	// (0x0004abf8) cell_tb_float_ext_pane_ParamLimits

0xe4ae,	// (0x0004abf8) cell_tb_float_ext_pane

0xe4c8,	// (0x0004ac12) cell_tb_float_ext_pane_g1

0xe4d1,	// (0x0004ac1b) grid_highlight_pane_cp12

0x6c2d,	// (0x00043377) cell_last_hwr_side_pane_ParamLimits

0x6c2d,	// (0x00043377) cell_last_hwr_side_pane

0xc03b,	// (0x00048785) cell_last_hwr_side_pane_g1

0xe4da,	// (0x0004ac24) cell_last_hwr_side_pane_g2

0x0001,

0xfde4,	// (0x0004c52e) cell_last_hwr_side_pane_g

0x73c4,	// (0x00043b0e) vkb2_area_bottom_space_btn_pane_ParamLimits

0x73c4,	// (0x00043b0e) vkb2_area_bottom_space_btn_pane

0xc2b9,	// (0x00048a03) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf7c,	// (0x0004a6c6) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x763e,	// (0x00043d88) cell_vkb2_top_candi_pane_t1_ParamLimits

0x765d,	// (0x00043da7) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x765d,	// (0x00043da7) vkb2_area_bottom_space_btn_pane_g1

0x7697,	// (0x00043de1) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7697,	// (0x00043de1) vkb2_area_bottom_space_btn_pane_g2

0x76cd,	// (0x00043e17) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x76cd,	// (0x00043e17) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfde9,	// (0x0004c533) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfde9,	// (0x0004c533) vkb2_area_bottom_space_btn_pane_g

0x6ba1,	// (0x000432eb) cel_fep_hwr_func_pane_ParamLimits

0x6ba1,	// (0x000432eb) cel_fep_hwr_func_pane

0x6bdd,	// (0x00043327) cell_hwr_side_button_pane_ParamLimits

0x6bdd,	// (0x00043327) cell_hwr_side_button_pane

0xd958,	// (0x0004a0a2) aid_area_touch_clock_ParamLimits

0x7f0d,	// (0x00044657) bg_uniindi_top_pane_ParamLimits

0xd96a,	// (0x0004a0b4) uniindi_top_pane_g1_ParamLimits

0xd980,	// (0x0004a0ca) uniindi_top_pane_g2_ParamLimits

0xd98c,	// (0x0004a0d6) uniindi_top_pane_g3_ParamLimits

0xd99d,	// (0x0004a0e7) uniindi_top_pane_g4_ParamLimits

0xfcfa,	// (0x0004c444) uniindi_top_pane_g_ParamLimits

0xd9aa,	// (0x0004a0f4) uniindi_top_pane_t1_ParamLimits

0x7f0d,	// (0x00044657) bg_vkb2_func_pane_cp01_ParamLimits

0x7f0d,	// (0x00044657) bg_vkb2_func_pane_cp01

0xe4e3,	// (0x0004ac2d) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4e3,	// (0x0004ac2d) cel_fep_hwr_func_pane_g1

0x7f0d,	// (0x00044657) bg_vkb2_func_pane_cp02_ParamLimits

0x7f0d,	// (0x00044657) bg_vkb2_func_pane_cp02

0xe4e3,	// (0x0004ac2d) cell_hwr_side_button_pane_g1_ParamLimits

0xe4e3,	// (0x0004ac2d) cell_hwr_side_button_pane_g1

0x988b,	// (0x00045fd5) status_pane_g4_ParamLimits

0x988b,	// (0x00045fd5) status_pane_g4

0x98a5,	// (0x00045fef) status_pane_t1

0xbd80,	// (0x000484ca) form2_midp_gauge_slider_cont_pane

0xbd88,	// (0x000484d2) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbd9a,	// (0x000484e4) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbdac,	// (0x000484f6) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfac6,	// (0x0004c210) form2_midp_gauge_slider_pane_t_ParamLimits

0xbdbe,	// (0x00048508) form2_midp_slider_pane_ParamLimits

0x7033,	// (0x0004377d) aid_size_cell_func_vkb2_ParamLimits

0x7033,	// (0x0004377d) aid_size_cell_func_vkb2

0xe484,	// (0x0004abce) slider_pane_g4_ParamLimits

0xe484,	// (0x0004abce) slider_pane_g4

0x7717,	// (0x00043e61) form2_midp_gauge_slider_pane_t2_cp01

0x7725,	// (0x00043e6f) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7725,	// (0x00043e6f) form2_midp_gauge_slider_pane_t3_cp01

0x7742,	// (0x00043e8c) form2_midp_slider_pane_cp01

0x25a4,	// (0x0003ecee) navi_smil_pane

0xe51c,	// (0x0004ac66) navi_smil_pane_g1

0xe524,	// (0x0004ac6e) navi_smil_pane_t1

0xe4f1,	// (0x0004ac3b) form2_midp_slider_pane_g1

0xe4fa,	// (0x0004ac44) form2_midp_slider_pane_g2

0xe502,	// (0x0004ac4c) form2_midp_slider_pane_g3

0xe4f1,	// (0x0004ac3b) form2_midp_slider_pane_g4

0xe50a,	// (0x0004ac54) form2_midp_slider_pane_g5

0x0004,

0xfdf2,	// (0x0004c53c) form2_midp_slider_pane_g

0x7707,	// (0x00043e51) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7707,	// (0x00043e51) vkb2_area_bottom_space_btn_pane_g4

0x96ba,	// (0x00045e04) lc0_navi_pane_ParamLimits

0x96ba,	// (0x00045e04) lc0_navi_pane

0x9730,	// (0x00045e7a) lc0_stat_indi_pane_ParamLimits

0x9730,	// (0x00045e7a) lc0_stat_indi_pane

0x9747,	// (0x00045e91) ls0_title_pane_ParamLimits

0x9747,	// (0x00045e91) ls0_title_pane

0x851d,	// (0x00044c67) bg_popup_sub_pane_cp14_ParamLimits

0xd93f,	// (0x0004a089) list_uniindi_pane_ParamLimits

0xd94b,	// (0x0004a095) uniindi_top_pane_ParamLimits

0xd9e7,	// (0x0004a131) list_single_uniindi_pane_g1_ParamLimits

0xd9fa,	// (0x0004a144) list_single_uniindi_pane_t1_ParamLimits

0x774b,	// (0x00043e95) lc0_stat_clock_pane_ParamLimits

0x774b,	// (0x00043e95) lc0_stat_clock_pane

0xe532,	// (0x0004ac7c) lc0_stat_indi_pane_g1_ParamLimits

0xe532,	// (0x0004ac7c) lc0_stat_indi_pane_g1

0xe53f,	// (0x0004ac89) lc0_stat_indi_pane_g2_ParamLimits

0xe53f,	// (0x0004ac89) lc0_stat_indi_pane_g2

0x0001,

0xfdfd,	// (0x0004c547) lc0_stat_indi_pane_g_ParamLimits

0xfdfd,	// (0x0004c547) lc0_stat_indi_pane_g

0x7758,	// (0x00043ea2) lc0_uni_indicator_pane_ParamLimits

0x7758,	// (0x00043ea2) lc0_uni_indicator_pane

0xe54c,	// (0x0004ac96) ls0_title_pane_g1_ParamLimits

0xe54c,	// (0x0004ac96) ls0_title_pane_g1

0xe560,	// (0x0004acaa) ls0_title_pane_t1_ParamLimits

0xe560,	// (0x0004acaa) ls0_title_pane_t1

0x7765,	// (0x00043eaf) lc0_uni_indicator_pane_g1_ParamLimits

0x7765,	// (0x00043eaf) lc0_uni_indicator_pane_g1

0xe596,	// (0x0004ace0) lc0_stat_clock_pane_t1

0x25a4,	// (0x0003ecee) main_ai5_pane

0xe5a4,	// (0x0004acee) ai5_sk_pane_ParamLimits

0xe5a4,	// (0x0004acee) ai5_sk_pane

0xe5b1,	// (0x0004acfb) cell_ai5_widget_pane_ParamLimits

0xe5b1,	// (0x0004acfb) cell_ai5_widget_pane

0xe67a,	// (0x0004adc4) aid_size_cell_widget_grid

0xe690,	// (0x0004adda) bg_ai5_widget_pane_ParamLimits

0xe690,	// (0x0004adda) bg_ai5_widget_pane

0xe70c,	// (0x0004ae56) cell_ai5_widget_pane_g2

0xe720,	// (0x0004ae6a) cell_ai5_widget_pane_g3

0xe73a,	// (0x0004ae84) cell_ai5_widget_pane_g4

0xe74a,	// (0x0004ae94) cell_ai5_widget_pane_g5

0xe75a,	// (0x0004aea4) cell_ai5_widget_pane_g6

0xe766,	// (0x0004aeb0) cell_ai5_widget_pane_g7

0xe7d2,	// (0x0004af1c) cell_ai5_widget_pane_t1_ParamLimits

0xe7d2,	// (0x0004af1c) cell_ai5_widget_pane_t1

0xe7ef,	// (0x0004af39) cell_ai5_widget_pane_t2_ParamLimits

0xe7ef,	// (0x0004af39) cell_ai5_widget_pane_t2

0xe807,	// (0x0004af51) cell_ai5_widget_pane_t3_ParamLimits

0xe807,	// (0x0004af51) cell_ai5_widget_pane_t3

0xe81f,	// (0x0004af69) cell_ai5_widget_pane_t4_ParamLimits

0xe81f,	// (0x0004af69) cell_ai5_widget_pane_t4

0xe845,	// (0x0004af8f) cell_ai5_widget_pane_t5_ParamLimits

0xe845,	// (0x0004af8f) cell_ai5_widget_pane_t5

0xe864,	// (0x0004afae) cell_ai5_widget_pane_t6_ParamLimits

0xe864,	// (0x0004afae) cell_ai5_widget_pane_t6

0xe876,	// (0x0004afc0) cell_ai5_widget_pane_t7_ParamLimits

0xe876,	// (0x0004afc0) cell_ai5_widget_pane_t7

0xe895,	// (0x0004afdf) cell_ai5_widget_pane_t8_ParamLimits

0xe895,	// (0x0004afdf) cell_ai5_widget_pane_t8

0x000b,

0xfe1d,	// (0x0004c567) cell_ai5_widget_pane_t_ParamLimits

0xfe1d,	// (0x0004c567) cell_ai5_widget_pane_t

0xe919,	// (0x0004b063) grid_ai5_widget_pane

0x851d,	// (0x00044c67) highlight_cell_ai5_widget_pane_ParamLimits

0x851d,	// (0x00044c67) highlight_cell_ai5_widget_pane

0xe930,	// (0x0004b07a) ai5_sk_left_pane

0xe93a,	// (0x0004b084) ai5_sk_middle_pane

0xe944,	// (0x0004b08e) ai5_sk_right_pane

0xe94e,	// (0x0004b098) bg_ai5_widget_pane_g1_ParamLimits

0xe94e,	// (0x0004b098) bg_ai5_widget_pane_g1

0xe95a,	// (0x0004b0a4) bg_ai5_widget_pane_g2_ParamLimits

0xe95a,	// (0x0004b0a4) bg_ai5_widget_pane_g2

0xe966,	// (0x0004b0b0) bg_ai5_widget_pane_g3_ParamLimits

0xe966,	// (0x0004b0b0) bg_ai5_widget_pane_g3

0xe972,	// (0x0004b0bc) bg_ai5_widget_pane_g4_ParamLimits

0xe972,	// (0x0004b0bc) bg_ai5_widget_pane_g4

0xe97e,	// (0x0004b0c8) bg_ai5_widget_pane_g5_ParamLimits

0xe97e,	// (0x0004b0c8) bg_ai5_widget_pane_g5

0xe98a,	// (0x0004b0d4) bg_ai5_widget_pane_g6_ParamLimits

0xe98a,	// (0x0004b0d4) bg_ai5_widget_pane_g6

0xe996,	// (0x0004b0e0) bg_ai5_widget_pane_g7_ParamLimits

0xe996,	// (0x0004b0e0) bg_ai5_widget_pane_g7

0xe9a2,	// (0x0004b0ec) bg_ai5_widget_pane_g8_ParamLimits

0xe9a2,	// (0x0004b0ec) bg_ai5_widget_pane_g8

0xe9ae,	// (0x0004b0f8) bg_ai5_widget_pane_g9_ParamLimits

0xe9ae,	// (0x0004b0f8) bg_ai5_widget_pane_g9

0x0008,

0xfe36,	// (0x0004c580) bg_ai5_widget_pane_g_ParamLimits

0xfe36,	// (0x0004c580) bg_ai5_widget_pane_g

0xe9e0,	// (0x0004b12a) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9e0,	// (0x0004b12a) cell_shortcut_ai5_widget_pane

0x91bc,	// (0x00045906) bg_cell_shortcut_ai5_widget_pane

0xe9f1,	// (0x0004b13b) cell_grid_ai5_widget_pane_g1

0x91bc,	// (0x00045906) highlight_cell_shortcut_ai5_widget_pane

0x9a1a,	// (0x00046164) ai5_sk_left_pane_g1

0xe9fa,	// (0x0004b144) ai5_sk_left_pane_g2

0xea02,	// (0x0004b14c) ai5_sk_left_pane_g3

0xea0a,	// (0x0004b154) ai5_sk_left_pane_g4

0x0003,

0xfe49,	// (0x0004c593) ai5_sk_left_pane_g

0xea12,	// (0x0004b15c) ai5_sk_left_pane_t1

0x9a12,	// (0x0004615c) ai5_sk_right_pane_g1

0xea20,	// (0x0004b16a) ai5_sk_right_pane_g2

0xea28,	// (0x0004b172) ai5_sk_right_pane_g3

0xea30,	// (0x0004b17a) ai5_sk_right_pane_g4

0x0003,

0xfe52,	// (0x0004c59c) ai5_sk_right_pane_g

0xea38,	// (0x0004b182) ai5_sk_right_pane_t1

0x9a12,	// (0x0004615c) ai5_sk_middle_pane_g1

0x9a1a,	// (0x00046164) ai5_sk_middle_pane_g2

0x9a32,	// (0x0004617c) ai5_sk_middle_pane_g3

0xea28,	// (0x0004b172) ai5_sk_middle_pane_g4

0xea02,	// (0x0004b14c) ai5_sk_middle_pane_g5

0xea46,	// (0x0004b190) ai5_sk_middle_pane_g6

0xea4e,	// (0x0004b198) ai5_sk_middle_pane_g7

0x0006,

0xfe5b,	// (0x0004c5a5) ai5_sk_middle_pane_g

0x9540,	// (0x00045c8a) aid_touch_area_size_lc0_ParamLimits

0x9540,	// (0x00045c8a) aid_touch_area_size_lc0

0x6d2c,	// (0x00043476) cell_hwr_candidate_pane_t1_ParamLimits

0x955c,	// (0x00045ca6) aid_touch_navi_pane

0x9835,	// (0x00045f7f) status_dt_navi_pane_ParamLimits

0x9835,	// (0x00045f7f) status_dt_navi_pane

0x9842,	// (0x00045f8c) status_dt_sta_pane_ParamLimits

0x9842,	// (0x00045f8c) status_dt_sta_pane

0xea56,	// (0x0004b1a0) dt_sta_controll_pane

0xea63,	// (0x0004b1ad) dt_sta_indi_pane

0xea74,	// (0x0004b1be) dt_sta_title_pane

0x7f0d,	// (0x00044657) bg_dt_sta_indi_pane_ParamLimits

0x7f0d,	// (0x00044657) bg_dt_sta_indi_pane

0xea87,	// (0x0004b1d1) dt_sta_battery_pane

0xea8f,	// (0x0004b1d9) dt_sta_indi_pane_g1

0xea98,	// (0x0004b1e2) dt_sta_indi_pane_g2

0xeaa1,	// (0x0004b1eb) dt_sta_indi_pane_g3

0x0002,

0xfe6a,	// (0x0004c5b4) dt_sta_indi_pane_g

0xeaaa,	// (0x0004b1f4) dt_sta_signal_pane

0x851d,	// (0x00044c67) bg_dt_sta_title_pane_ParamLimits

0x851d,	// (0x00044c67) bg_dt_sta_title_pane

0xeab3,	// (0x0004b1fd) dt_sta_title_pane_g1

0xeabb,	// (0x0004b205) dt_sta_title_pane_t1_ParamLimits

0xeabb,	// (0x0004b205) dt_sta_title_pane_t1

0x25a4,	// (0x0003ecee) bg_dt_sta_control_pane

0xead0,	// (0x0004b21a) dt_sta_controll_pane_g1

0xead9,	// (0x0004b223) bg_dt_sta_title_pane_g1

0xeae2,	// (0x0004b22c) bg_dt_sta_title_pane_g2

0xeaeb,	// (0x0004b235) bg_dt_sta_title_pane_g3

0x0002,

0xfe71,	// (0x0004c5bb) bg_dt_sta_title_pane_g

0xc03b,	// (0x00048785) bg_dt_sta_indi_pane_g1

0xeaf4,	// (0x0004b23e) dt_sta_signal_pane_g1

0xeafc,	// (0x0004b246) dt_sta_signal_pane_g2

0x0001,

0xfe78,	// (0x0004c5c2) dt_sta_signal_pane_g

0xeb04,	// (0x0004b24e) dt_sta_battery_pane_g1

0xeb0d,	// (0x0004b257) dt_sta_battery_pane_t1

0xc03b,	// (0x00048785) bg_dt_sta_control_pane_g1

0x8cc4,	// (0x0004540e) fep_china_uni_eep_pane

0x8ccc,	// (0x00045416) fep_china_uni_entry_pane_ParamLimits

0x8cdc,	// (0x00045426) popup_fep_china_uni_window_g1_ParamLimits

0x8cec,	// (0x00045436) popup_fep_china_uni_window_g2_ParamLimits

0x8cec,	// (0x00045436) popup_fep_china_uni_window_g2

0x0001,

0xf6fd,	// (0x0004be47) popup_fep_china_uni_window_g_ParamLimits

0xf6fd,	// (0x0004be47) popup_fep_china_uni_window_g

0xeb1c,	// (0x0004b266) fep_china_uni_eep_pane_g1

0xeb24,	// (0x0004b26e) fep_china_uni_eep_pane_t1

0xe513,	// (0x0004ac5d) aid_touch_area_size_smil_player

0x96b2,	// (0x00045dfc) lc0_clock_pane

0x9899,	// (0x00045fe3) status_pane_g5_ParamLimits

0x9899,	// (0x00045fe3) status_pane_g5

0x6143,	// (0x0004288d) popup_keymap_window

0x9857,	// (0x00045fa1) status_icon_pane

0xe720,	// (0x0004ae6a) cell_ai5_widget_pane_g3_ParamLimits

0xe73a,	// (0x0004ae84) cell_ai5_widget_pane_g4_ParamLimits

0xe74a,	// (0x0004ae94) cell_ai5_widget_pane_g5_ParamLimits

0xe772,	// (0x0004aebc) cell_ai5_widget_pane_g8_ParamLimits

0xe772,	// (0x0004aebc) cell_ai5_widget_pane_g8

0xe786,	// (0x0004aed0) cell_ai5_widget_pane_g9_ParamLimits

0xe786,	// (0x0004aed0) cell_ai5_widget_pane_g9

0xe79a,	// (0x0004aee4) cell_ai5_widget_pane_g10_ParamLimits

0xe79a,	// (0x0004aee4) cell_ai5_widget_pane_g10

0xeb33,	// (0x0004b27d) status_icon_pane_g1

0x25a4,	// (0x0003ecee) bg_popup_sub_pane_cp13

0xeb3b,	// (0x0004b285) popup_keymap_window_t1

0x9491,	// (0x00045bdb) control_pane_g6_ParamLimits

0x9491,	// (0x00045bdb) control_pane_g6

0x949e,	// (0x00045be8) control_pane_g7_ParamLimits

0x949e,	// (0x00045be8) control_pane_g7

0x94ab,	// (0x00045bf5) control_pane_g8_ParamLimits

0x94ab,	// (0x00045bf5) control_pane_g8

0xea56,	// (0x0004b1a0) dt_sta_controll_pane_ParamLimits

0xea63,	// (0x0004b1ad) dt_sta_indi_pane_ParamLimits

0xea74,	// (0x0004b1be) dt_sta_title_pane_ParamLimits

0x8449,	// (0x00044b93) aid_size_touch_scroll_bar_cale

0x56f7,	// (0x00041e41) popup_discreet_window_ParamLimits

0x56f7,	// (0x00041e41) popup_discreet_window

0x577f,	// (0x00041ec9) popup_sk_window

0xa099,	// (0x000467e3) bg_popup_sub_pane_cp28_ParamLimits

0xa099,	// (0x000467e3) bg_popup_sub_pane_cp28

0xeb49,	// (0x0004b293) popup_discreet_window_g1_ParamLimits

0xeb49,	// (0x0004b293) popup_discreet_window_g1

0xeb69,	// (0x0004b2b3) popup_discreet_window_t1_ParamLimits

0xeb69,	// (0x0004b2b3) popup_discreet_window_t1

0xeb87,	// (0x0004b2d1) popup_discreet_window_t2_ParamLimits

0xeb87,	// (0x0004b2d1) popup_discreet_window_t2

0x0002,

0xfe7d,	// (0x0004c5c7) popup_discreet_window_t_ParamLimits

0xfe7d,	// (0x0004c5c7) popup_discreet_window_t

0x7779,	// (0x00043ec3) popup_sk_window_g1

0x7783,	// (0x00043ecd) popup_sk_window_g2

0x0001,

0xfe84,	// (0x0004c5ce) popup_sk_window_g

0x778b,	// (0x00043ed5) popup_sk_window_t1

0x7799,	// (0x00043ee3) popup_sk_window_t1_copy1

0xe70c,	// (0x0004ae56) cell_ai5_widget_pane_g2_ParamLimits

0xe8a7,	// (0x0004aff1) cell_ai5_widget_pane_t9_ParamLimits

0xe8a7,	// (0x0004aff1) cell_ai5_widget_pane_t9

0x25a4,	// (0x0003ecee) main_fep_fshwr2_pane

0x77a7,	// (0x00043ef1) aid_fshwr2_btn_pane

0x77b3,	// (0x00043efd) aid_fshwr2_syb_pane

0x77c5,	// (0x00043f0f) aid_fshwr2_txt_pane

0x77d1,	// (0x00043f1b) fshwr2_func_candi_pane

0x77ed,	// (0x00043f37) fshwr2_hwr_syb_pane

0x7807,	// (0x00043f51) fshwr2_icf_pane

0x25a4,	// (0x0003ecee) fshwr2_icf_bg_pane

0x7835,	// (0x00043f7f) fshwr2_icf_pane_t1_ParamLimits

0x7835,	// (0x00043f7f) fshwr2_icf_pane_t1

0x8ba6,	// (0x000452f0) fshwr2_func_candi_pane_g1

0xebd9,	// (0x0004b323) fshwr2_func_candi_row_pane_ParamLimits

0xebd9,	// (0x0004b323) fshwr2_func_candi_row_pane

0x784d,	// (0x00043f97) cell_fshwr2_syb_pane_ParamLimits

0x784d,	// (0x00043f97) cell_fshwr2_syb_pane

0xe4e3,	// (0x0004ac2d) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe4e3,	// (0x0004ac2d) fshwr2_hwr_syb_pane_g1

0x25a4,	// (0x0003ecee) bg_popup_call_pane_cp01

0x7870,	// (0x00043fba) fshwr2_func_candi_cell_pane_ParamLimits

0x7870,	// (0x00043fba) fshwr2_func_candi_cell_pane

0xa70d,	// (0x00046e57) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa70d,	// (0x00046e57) fshwr2_func_candi_cell_bg_pane

0x78bb,	// (0x00044005) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x78bb,	// (0x00044005) fshwr2_func_candi_cell_pane_g1

0x78db,	// (0x00044025) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x78db,	// (0x00044025) fshwr2_func_candi_cell_pane_t1

0x25a4,	// (0x0003ecee) bg_button_pane_cp08

0x94e0,	// (0x00045c2a) cell_fshwr2_syb_bg_pane

0x78ee,	// (0x00044038) cell_fshwr2_syb_bg_pane_g1

0x7902,	// (0x0004404c) cell_fshwr2_syb_bg_pane_t1

0x851d,	// (0x00044c67) main_tmo_pane

0xaba8,	// (0x000472f2) uni_indicator_pane_g1_ParamLimits

0xabbe,	// (0x00047308) uni_indicator_pane_g2_ParamLimits

0xabd4,	// (0x0004731e) uni_indicator_pane_g3_ParamLimits

0xabe7,	// (0x00047331) uni_indicator_pane_g4_ParamLimits

0xabe7,	// (0x00047331) uni_indicator_pane_g4

0xabfb,	// (0x00047345) uni_indicator_pane_g5_ParamLimits

0xabfb,	// (0x00047345) uni_indicator_pane_g5

0xabfb,	// (0x00047345) uni_indicator_pane_g6_ParamLimits

0xabfb,	// (0x00047345) uni_indicator_pane_g6

0xf8fc,	// (0x0004c046) uni_indicator_pane_g_ParamLimits

0xd524,	// (0x00049c6e) popup_tmo_note_window_ParamLimits

0xd524,	// (0x00049c6e) popup_tmo_note_window

0x851d,	// (0x00044c67) fshwr2_bg_pane

0x78cc,	// (0x00044016) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x78cc,	// (0x00044016) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe89,	// (0x0004c5d3) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe89,	// (0x0004c5d3) fshwr2_func_candi_cell_pane_g

0xc03b,	// (0x00048785) bg_popup_window_pane_cp01

0x7918,	// (0x00044062) bg_popup_window_pane_g1_cp01

0xec00,	// (0x0004b34a) bg_popup_window_pane_cp22_ParamLimits

0xec00,	// (0x0004b34a) bg_popup_window_pane_cp22

0xec0e,	// (0x0004b358) listscroll_tmo_link_pane_ParamLimits

0xec0e,	// (0x0004b358) listscroll_tmo_link_pane

0xec4e,	// (0x0004b398) popup_tmo_note_window_g1_ParamLimits

0xec4e,	// (0x0004b398) popup_tmo_note_window_g1

0xec5b,	// (0x0004b3a5) tmo_note_info_pane_ParamLimits

0xec5b,	// (0x0004b3a5) tmo_note_info_pane

0xec75,	// (0x0004b3bf) list_tmo_note_info_pane_g1_ParamLimits

0xec75,	// (0x0004b3bf) list_tmo_note_info_pane_g1

0xec8c,	// (0x0004b3d6) list_tmo_note_info_pane_g2_ParamLimits

0xec8c,	// (0x0004b3d6) list_tmo_note_info_pane_g2

0x0001,

0xfe8e,	// (0x0004c5d8) list_tmo_note_info_pane_g_ParamLimits

0xfe8e,	// (0x0004c5d8) list_tmo_note_info_pane_g

0xeca8,	// (0x0004b3f2) list_tmo_note_info_text_pane_ParamLimits

0xeca8,	// (0x0004b3f2) list_tmo_note_info_text_pane

0xed29,	// (0x0004b473) list_tmo_link_pane

0xed36,	// (0x0004b480) scroll_pane_cp20

0xed43,	// (0x0004b48d) list_single_tmo_link_pane_ParamLimits

0xed43,	// (0x0004b48d) list_single_tmo_link_pane

0xed53,	// (0x0004b49d) list_single_tmo_link_pane_t1

0xed61,	// (0x0004b4ab) list_tmo_note_info_text_pane_t1_ParamLimits

0xed61,	// (0x0004b4ab) list_tmo_note_info_text_pane_t1

0x85cd,	// (0x00044d17) aid_size_touch_scroll_bar_cp01_ParamLimits

0x85cd,	// (0x00044d17) aid_size_touch_scroll_bar_cp01

0x4b8b,	// (0x000412d5) aid_size_touch_slider_marker

0x5767,	// (0x00041eb1) popup_settings_window_ParamLimits

0x5767,	// (0x00041eb1) popup_settings_window

0x4d22,	// (0x0004146c) popup_candi_list_indi_window

0x955c,	// (0x00045ca6) aid_touch_navi_pane_ParamLimits

0x6f8c,	// (0x000436d6) rs_clock_indi_pane

0x6f95,	// (0x000436df) sctrl_sk_bottom_pane_ParamLimits

0x6fa6,	// (0x000436f0) sctrl_sk_top_pane_ParamLimits

0x708d,	// (0x000437d7) popup_fep_tooltip_window

0xe67a,	// (0x0004adc4) aid_size_cell_widget_grid_ParamLimits

0xe6f7,	// (0x0004ae41) cell_ai5_widget_pane_g1_ParamLimits

0xe6f7,	// (0x0004ae41) cell_ai5_widget_pane_g1

0xe75a,	// (0x0004aea4) cell_ai5_widget_pane_g6_ParamLimits

0xe766,	// (0x0004aeb0) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe02,	// (0x0004c54c) cell_ai5_widget_pane_g_ParamLimits

0xfe02,	// (0x0004c54c) cell_ai5_widget_pane_g

0xe8d6,	// (0x0004b020) cell_ai5_widget_pane_t10_ParamLimits

0xe8d6,	// (0x0004b020) cell_ai5_widget_pane_t10

0xe919,	// (0x0004b063) grid_ai5_widget_pane_ParamLimits

0xe9ba,	// (0x0004b104) cell_contacts_ai5_widget_pane_ParamLimits

0xe9ba,	// (0x0004b104) cell_contacts_ai5_widget_pane

0xeb9c,	// (0x0004b2e6) popup_discreet_window_t3_ParamLimits

0xeb9c,	// (0x0004b2e6) popup_discreet_window_t3

0x781f,	// (0x00043f69) popup_fshwr2_char_preview_window_ParamLimits

0x781f,	// (0x00043f69) popup_fshwr2_char_preview_window

0xecc6,	// (0x0004b410) tmo_note_info_pane_t1

0xecdb,	// (0x0004b425) tmo_note_info_pane_t2

0xecf0,	// (0x0004b43a) tmo_note_info_pane_t3

0xed05,	// (0x0004b44f) tmo_note_info_pane_t4

0xed17,	// (0x0004b461) tmo_note_info_pane_t5

0x0004,

0xfe93,	// (0x0004c5dd) tmo_note_info_pane_t

0xed29,	// (0x0004b473) list_tmo_link_pane_ParamLimits

0xed36,	// (0x0004b480) scroll_pane_cp20_ParamLimits

0x25a4,	// (0x0003ecee) bg_popup_fep_char_preview_window_cp01

0xed7a,	// (0x0004b4c4) popup_fshwr2_char_preview_window_t1

0xed88,	// (0x0004b4d2) popup_candi_list_indi_window_g1

0xed91,	// (0x0004b4db) bg_cell_contacts_ai5_widget_pane

0xed9d,	// (0x0004b4e7) cell_contacts_ai5_widget_pane_g1

0xc71b,	// (0x00048e65) cell_contacts_ai5_widget_pane_g2

0xedb2,	// (0x0004b4fc) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe9e,	// (0x0004c5e8) cell_contacts_ai5_widget_pane_g

0xedbe,	// (0x0004b508) cell_contacts_ai5_widget_pane_t1

0x851d,	// (0x00044c67) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee35,	// (0x0004b57f) settings_container_pane

0x91bc,	// (0x00045906) listscroll_set_pane_copy1

0xb725,	// (0x00047e6f) scroll_pane_cp121_copy1

0x9e36,	// (0x00046580) set_content_pane_copy1

0xee41,	// (0x0004b58b) aid_height_set_list_copy1_ParamLimits

0xee41,	// (0x0004b58b) aid_height_set_list_copy1

0xadf3,	// (0x0004753d) aid_size_parent_copy1_ParamLimits

0xadf3,	// (0x0004753d) aid_size_parent_copy1

0xee4d,	// (0x0004b597) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee4d,	// (0x0004b597) button_value_adjust_pane_cp6_copy1

0x94e0,	// (0x00045c2a) list_highlight_pane_cp2_copy1_ParamLimits

0x94e0,	// (0x00045c2a) list_highlight_pane_cp2_copy1

0xee61,	// (0x0004b5ab) list_set_pane_copy1_ParamLimits

0xee61,	// (0x0004b5ab) list_set_pane_copy1

0xedd0,	// (0x0004b51a) main_pane_set_t1_copy1_ParamLimits

0xedd0,	// (0x0004b51a) main_pane_set_t1_copy1

0xee0a,	// (0x0004b554) main_pane_set_t2_copy1_ParamLimits

0xee0a,	// (0x0004b554) main_pane_set_t2_copy1

0xef0e,	// (0x0004b658) main_pane_set_t3_copy1

0xef1c,	// (0x0004b666) main_pane_set_t4_copy1

0xee29,	// (0x0004b573) set_content_pane_g1_copy1_ParamLimits

0xee29,	// (0x0004b573) set_content_pane_g1_copy1

0xef2a,	// (0x0004b674) setting_code_pane_copy1

0xef32,	// (0x0004b67c) setting_slider_graphic_pane_copy1

0xef32,	// (0x0004b67c) setting_slider_pane_copy1

0xef3a,	// (0x0004b684) setting_text_pane_copy1

0xef3a,	// (0x0004b684) setting_volume_pane_copy1

0xef2a,	// (0x0004b674) settings_code_pane_cp2_copy1

0xef42,	// (0x0004b68c) settings_code_pane_cp_copy1_ParamLimits

0xef42,	// (0x0004b68c) settings_code_pane_cp_copy1

0x7921,	// (0x0004406b) volume_set_pane_copy1

0xef56,	// (0x0004b6a0) volume_set_pane_g10_copy1

0xef5e,	// (0x0004b6a8) volume_set_pane_g1_copy1

0xef66,	// (0x0004b6b0) volume_set_pane_g2_copy1

0xef6e,	// (0x0004b6b8) volume_set_pane_g3_copy1

0xef76,	// (0x0004b6c0) volume_set_pane_g4_copy1

0xef7e,	// (0x0004b6c8) volume_set_pane_g5_copy1

0xef86,	// (0x0004b6d0) volume_set_pane_g6_copy1

0xef8e,	// (0x0004b6d8) volume_set_pane_g7_copy1

0xef96,	// (0x0004b6e0) volume_set_pane_g8_copy1

0xef9e,	// (0x0004b6e8) volume_set_pane_g9_copy1

0x7c84,	// (0x000443ce) bg_set_opt_pane_cp_copy1_ParamLimits

0x7c84,	// (0x000443ce) bg_set_opt_pane_cp_copy1

0x7929,	// (0x00044073) setting_slider_pane_t1_copy1_ParamLimits

0x7929,	// (0x00044073) setting_slider_pane_t1_copy1

0x7948,	// (0x00044092) setting_slider_pane_t2_copy1_ParamLimits

0x7948,	// (0x00044092) setting_slider_pane_t2_copy1

0x7962,	// (0x000440ac) setting_slider_pane_t3_copy1_ParamLimits

0x7962,	// (0x000440ac) setting_slider_pane_t3_copy1

0x797a,	// (0x000440c4) slider_set_pane_copy1_ParamLimits

0x797a,	// (0x000440c4) slider_set_pane_copy1

0x8569,	// (0x00044cb3) set_opt_bg_pane_g1_copy2

0x8571,	// (0x00044cbb) set_opt_bg_pane_g2_copy2

0xefa6,	// (0x0004b6f0) set_opt_bg_pane_g3_copy2

0x8581,	// (0x00044ccb) set_opt_bg_pane_g4_copy2

0x8589,	// (0x00044cd3) set_opt_bg_pane_g5_copy2

0x8591,	// (0x00044cdb) set_opt_bg_pane_g6_copy2

0xefb0,	// (0x0004b6fa) set_opt_bg_pane_g7_copy2

0xefb8,	// (0x0004b702) set_opt_bg_pane_g8_copy2

0xefc2,	// (0x0004b70c) set_opt_bg_pane_g9_copy2

0x7990,	// (0x000440da) aid_size_touch_slider_mark_copy1_ParamLimits

0x7990,	// (0x000440da) aid_size_touch_slider_mark_copy1

0xefcc,	// (0x0004b716) slider_set_pane_g1_copy1

0x79a4,	// (0x000440ee) slider_set_pane_g2_copy1

0x6883,	// (0x00042fcd) slider_set_pane_g3_copy1_ParamLimits

0x6883,	// (0x00042fcd) slider_set_pane_g3_copy1

0x6897,	// (0x00042fe1) slider_set_pane_g4_copy1_ParamLimits

0x6897,	// (0x00042fe1) slider_set_pane_g4_copy1

0x68af,	// (0x00042ff9) slider_set_pane_g5_copy1_ParamLimits

0x68af,	// (0x00042ff9) slider_set_pane_g5_copy1

0x6883,	// (0x00042fcd) slider_set_pane_g6_copy1_ParamLimits

0x6883,	// (0x00042fcd) slider_set_pane_g6_copy1

0x79ac,	// (0x000440f6) slider_set_pane_g7_copy1_ParamLimits

0x79ac,	// (0x000440f6) slider_set_pane_g7_copy1

0x7ba4,	// (0x000442ee) bg_set_opt_pane_cp2_copy1

0xefd5,	// (0x0004b71f) setting_slider_graphic_pane_g1_copy1

0xefde,	// (0x0004b728) setting_slider_graphic_pane_t1_copy1

0xefee,	// (0x0004b738) setting_slider_graphic_pane_t2_copy1

0xeffe,	// (0x0004b748) slider_set_pane_cp_copy1

0xf00e,	// (0x0004b758) input_focus_pane_cp1_copy1

0xf017,	// (0x0004b761) list_set_text_pane_copy1

0xf01f,	// (0x0004b769) setting_text_pane_g1_copy1

0x546e,	// (0x00041bb8) set_text_pane_t1_copy1

0xf00e,	// (0x0004b758) input_focus_pane_cp2_copy1

0xf01f,	// (0x0004b769) setting_code_pane_g1_copy1

0xf028,	// (0x0004b772) setting_code_pane_t1_copy1

0xb54d,	// (0x00047c97) list_set_graphic_pane_copy1

0x7ba4,	// (0x000442ee) bg_set_opt_pane_cp4_copy1

0x8ec3,	// (0x0004560d) list_set_graphic_pane_g1_copy1_ParamLimits

0x8ec3,	// (0x0004560d) list_set_graphic_pane_g1_copy1

0xf036,	// (0x0004b780) list_set_graphic_pane_g2_copy1

0x8edb,	// (0x00045625) list_set_graphic_pane_t1_copy1_ParamLimits

0x8edb,	// (0x00045625) list_set_graphic_pane_t1_copy1

0xc03b,	// (0x00048785) rs_clock_indi_pane_g1

0xf03e,	// (0x0004b788) rs_clock_indi_pane_t1

0xf04c,	// (0x0004b796) rs_indi_pane

0xf054,	// (0x0004b79e) rs_indi_pane_g1

0xf05d,	// (0x0004b7a7) rs_indi_pane_g2

0xf066,	// (0x0004b7b0) rs_indi_pane_g3

0x0002,

0xfea5,	// (0x0004c5ef) rs_indi_pane_g

0x91bc,	// (0x00045906) bg_popup_preview_window_pane_cp03

0xf06f,	// (0x0004b7b9) popup_fep_tooltip_window_t1

0xccc3,	// (0x0004940d) popup_note2_window_g2_ParamLimits

0xccc3,	// (0x0004940d) popup_note2_window_g2

0x0001,

0xfc32,	// (0x0004c37c) popup_note2_window_g_ParamLimits

0xfc32,	// (0x0004c37c) popup_note2_window_g

0xd1be,	// (0x00049908) bg_popup_sub_pane_cp11_ParamLimits

0xd1cb,	// (0x00049915) cell_ai3_links_pane_g1_ParamLimits

0xd1e2,	// (0x0004992c) cell_ai3_links_pane_t1

0x546e,	// (0x00041bb8) set_text_pane_t1_copy1_ParamLimits

0x90d9,	// (0x00045823) cell_graphic_popup_pane_cp2_ParamLimits

0x90d9,	// (0x00045823) cell_graphic_popup_pane_cp2

0xf07d,	// (0x0004b7c7) cell_graphic_popup_pane_g1_cp2

0x825c,	// (0x000449a6) cell_graphic_popup_pane_g2_cp2

0xf085,	// (0x0004b7cf) cell_graphic_popup_pane_g3_cp2

0xf08d,	// (0x0004b7d7) cell_graphic_popup_pane_t2_cp2

0x826d,	// (0x000449b7) grid_highlight_pane_cp3_cp2

0x88c1,	// (0x0004500b) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x851d,	// (0x00044c67) main_tmo_pane_ParamLimits

0xd518,	// (0x00049c62) popup_tmo_big_image_note_window

0xe6e6,	// (0x0004ae30) cell_ai5_widget_list_pane

0xe6ee,	// (0x0004ae38) cell_ai5_widget_lrg_icon_pane

0xecc6,	// (0x0004b410) tmo_note_info_pane_t1_ParamLimits

0xecdb,	// (0x0004b425) tmo_note_info_pane_t2_ParamLimits

0xecf0,	// (0x0004b43a) tmo_note_info_pane_t3_ParamLimits

0xed05,	// (0x0004b44f) tmo_note_info_pane_t4_ParamLimits

0xed17,	// (0x0004b461) tmo_note_info_pane_t5_ParamLimits

0xfe93,	// (0x0004c5dd) tmo_note_info_pane_t_ParamLimits

0xee35,	// (0x0004b57f) settings_container_pane_ParamLimits

0xf006,	// (0x0004b750) indicator_popup_pane_cp5

0xf006,	// (0x0004b750) indicator_popup_pane_cp6

0xb54d,	// (0x00047c97) list_set_graphic_pane_copy1_ParamLimits

0x25a4,	// (0x0003ecee) bg_popup_window_pane_cp23

0xf09b,	// (0x0004b7e5) popup_tmo_big_image_note_window_g1

0xf0a5,	// (0x0004b7ef) popup_tmo_big_image_note_window_t1

0xf0b5,	// (0x0004b7ff) popup_tmo_big_image_note_window_t2

0xf0c5,	// (0x0004b80f) popup_tmo_big_image_note_window_t3

0x0002,

0xfeac,	// (0x0004c5f6) popup_tmo_big_image_note_window_t

0xc03b,	// (0x00048785) cell_ai5_widget_lrg_icon_pane_g1

0xf0d5,	// (0x0004b81f) cell_ai5_widget_lrg_icon_pane_t1

0xf0e3,	// (0x0004b82d) cell_ai5_widget_list_row_pane_ParamLimits

0xf0e3,	// (0x0004b82d) cell_ai5_widget_list_row_pane

0xf0fa,	// (0x0004b844) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf0fa,	// (0x0004b844) cell_ai5_widget_list_row_pane_g1

0xf107,	// (0x0004b851) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf107,	// (0x0004b851) cell_ai5_widget_list_row_pane_t1

0xf138,	// (0x0004b882) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf138,	// (0x0004b882) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeb3,	// (0x0004c5fd) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeb3,	// (0x0004c5fd) cell_ai5_widget_list_row_pane_t

0x25a4,	// (0x0003ecee) main_fep_vtchi_ss_pane

0xf188,	// (0x0004b8d2) popup_fep_char_pre_window

0xf190,	// (0x0004b8da) popup_fep_ituss_window

0xf1bc,	// (0x0004b906) popup_fep_vkbss_window

0x94e0,	// (0x00045c2a) grid_vkbss_keypad_pane_ParamLimits

0x94e0,	// (0x00045c2a) grid_vkbss_keypad_pane

0x94e0,	// (0x00045c2a) ituss_keypad_pane

0x79ce,	// (0x00044118) aid_vkbss_key_offset_ParamLimits

0x79ce,	// (0x00044118) aid_vkbss_key_offset

0x79da,	// (0x00044124) cell_vkbss_key_pane_ParamLimits

0x79da,	// (0x00044124) cell_vkbss_key_pane

0xf1fc,	// (0x0004b946) bg_cell_vkbss_key_g1_ParamLimits

0xf1fc,	// (0x0004b946) bg_cell_vkbss_key_g1

0xf208,	// (0x0004b952) cell_vkbss_key_3p_pane_ParamLimits

0xf208,	// (0x0004b952) cell_vkbss_key_3p_pane

0xf23e,	// (0x0004b988) cell_vkbss_key_g1_ParamLimits

0xf23e,	// (0x0004b988) cell_vkbss_key_g1

0xf274,	// (0x0004b9be) cell_vkbss_key_t1_ParamLimits

0xf274,	// (0x0004b9be) cell_vkbss_key_t1

0x7a32,	// (0x0004417c) cell_ituss_key_pane_ParamLimits

0x7a32,	// (0x0004417c) cell_ituss_key_pane

0xf2d0,	// (0x0004ba1a) bg_cell_ituss_key_g1_ParamLimits

0xf2d0,	// (0x0004ba1a) bg_cell_ituss_key_g1

0xf2dc,	// (0x0004ba26) cell_ituss_key_pane_g1_ParamLimits

0xf2dc,	// (0x0004ba26) cell_ituss_key_pane_g1

0x7a43,	// (0x0004418d) cell_ituss_key_pane_g2_ParamLimits

0x7a43,	// (0x0004418d) cell_ituss_key_pane_g2

0x0005,

0xfeba,	// (0x0004c604) cell_ituss_key_pane_g_ParamLimits

0xfeba,	// (0x0004c604) cell_ituss_key_pane_g

0x7ac7,	// (0x00044211) cell_ituss_key_t1_ParamLimits

0x7ac7,	// (0x00044211) cell_ituss_key_t1

0x7b01,	// (0x0004424b) cell_ituss_key_t2_ParamLimits

0x7b01,	// (0x0004424b) cell_ituss_key_t2

0x7b32,	// (0x0004427c) cell_ituss_key_t3_ParamLimits

0x7b32,	// (0x0004427c) cell_ituss_key_t3

0x7b01,	// (0x0004424b) cell_ituss_key_t4_ParamLimits

0x7b01,	// (0x0004424b) cell_ituss_key_t4

0x0004,

0xfec7,	// (0x0004c611) cell_ituss_key_t_ParamLimits

0xfec7,	// (0x0004c611) cell_ituss_key_t

0xf302,	// (0x0004ba4c) cell_vkbss_key_3p_pane_g1

0xf30a,	// (0x0004ba54) cell_vkbss_key_3p_pane_g2

0xf312,	// (0x0004ba5c) cell_vkbss_key_3p_pane_g3

0x0002,

0xfed2,	// (0x0004c61c) cell_vkbss_key_3p_pane_g

0x91bc,	// (0x00045906) bg_popup_fep_char_preview_window_cp02

0xf31a,	// (0x0004ba64) popup_fep_char_pre_window_t1

0xe667,	// (0x0004adb1) main_ai5_sk_pane

0xed91,	// (0x0004b4db) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed9d,	// (0x0004b4e7) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc71b,	// (0x00048e65) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xedb2,	// (0x0004b4fc) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe9e,	// (0x0004c5e8) cell_contacts_ai5_widget_pane_g_ParamLimits

0xedbe,	// (0x0004b508) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x851d,	// (0x00044c67) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf328,	// (0x0004ba72) main_ai5_sk_pane_g1

0x9ed2,	// (0x0004661c) popup_query_code_window_g1

0xf1a6,	// (0x0004b8f0) popup_fep_vkb_icf_pane

0xf1d3,	// (0x0004b91d) popup_fep_vtchi_icf_pane

0x94e0,	// (0x00045c2a) bg_icf_pane

0x94e0,	// (0x00045c2a) list_vkb_icf_pane

0xf331,	// (0x0004ba7b) bg_icf_pane_cp01

0x91bc,	// (0x00045906) vtchi_icf_list_pane

0xf3a4,	// (0x0004baee) list_vkb_icf_pane_t1_ParamLimits

0xf3a4,	// (0x0004baee) list_vkb_icf_pane_t1

0xf3c5,	// (0x0004bb0f) vtchi_icf_list_pane_t1_ParamLimits

0xf3c5,	// (0x0004bb0f) vtchi_icf_list_pane_t1

0xf190,	// (0x0004b8da) popup_fep_ituss_window_ParamLimits

0xf1d3,	// (0x0004b91d) popup_fep_vtchi_icf_pane_ParamLimits

0x94e0,	// (0x00045c2a) ituss_keypad_pane_ParamLimits

0x79c2,	// (0x0004410c) ituss_sks_pane

0x94e0,	// (0x00045c2a) bg_icf_pane_ParamLimits

0xf160,	// (0x0004b8aa) icf_edit_indi_pane_ParamLimits

0xf160,	// (0x0004b8aa) icf_edit_indi_pane

0x94e0,	// (0x00045c2a) list_vkb_icf_pane_ParamLimits

0xf331,	// (0x0004ba7b) bg_icf_pane_cp01_ParamLimits

0xf17b,	// (0x0004b8c5) icf_edit_indi_pane_cp01_ParamLimits

0xf17b,	// (0x0004b8c5) icf_edit_indi_pane_cp01

0xf344,	// (0x0004ba8e) vtchi_query_pane

0xe4e3,	// (0x0004ac2d) icf_edit_indi_pane_g1_ParamLimits

0xe4e3,	// (0x0004ac2d) icf_edit_indi_pane_g1

0xf43a,	// (0x0004bb84) icf_edit_indi_pane_g2_ParamLimits

0xf43a,	// (0x0004bb84) icf_edit_indi_pane_g2

0x0001,

0xfefd,	// (0x0004c647) icf_edit_indi_pane_g_ParamLimits

0xfefd,	// (0x0004c647) icf_edit_indi_pane_g

0xf44e,	// (0x0004bb98) icf_edit_indi_pane_t1

0xf3e3,	// (0x0004bb2d) bg_input_focus_pane_cp042

0x8440,	// (0x00044b8a) vtchi_button_pane

0xf3ec,	// (0x0004bb36) vtchi_query_pane_t1

0xf3fa,	// (0x0004bb44) vtchi_query_pane_t2

0xf408,	// (0x0004bb52) vtchi_query_pane_t3

0x0002,

0xfeec,	// (0x0004c636) vtchi_query_pane_t

0x25a4,	// (0x0003ecee) bg_button_pane_cp13

0xf416,	// (0x0004bb60) vtchi_button_pane_g1

0x7b75,	// (0x000442bf) ituss_sks_pane_g1

0x7b80,	// (0x000442ca) ituss_sks_pane_g2

0x0001,

0xfef3,	// (0x0004c63d) ituss_sks_pane_g

0xf41e,	// (0x0004bb68) ituss_sks_pane_t1

0xf42c,	// (0x0004bb76) ituss_sks_pane_t2

0x0001,

0xfef8,	// (0x0004c642) ituss_sks_pane_t

0xbabd,	// (0x00048207) indicator_nsta_pane_cp_g1

0xbac6,	// (0x00048210) indicator_nsta_pane_cp_g2

0xbace,	// (0x00048218) indicator_nsta_pane_cp_g3

0xbad6,	// (0x00048220) indicator_nsta_pane_cp_g4

0xbac6,	// (0x00048210) indicator_nsta_pane_cp_g5

0xbace,	// (0x00048218) indicator_nsta_pane_cp_g6

0x0005,

0xfa7c,	// (0x0004c1c6) indicator_nsta_pane_cp_g

0xe23c,	// (0x0004a986) cell_graphic2_pane_t2_ParamLimits

0xe23c,	// (0x0004a986) cell_graphic2_pane_t2

0x0001,

0xfd89,	// (0x0004c4d3) cell_graphic2_pane_t_ParamLimits

0xfd89,	// (0x0004c4d3) cell_graphic2_pane_t

0xe268,	// (0x0004a9b2) cell_graphic2_control_pane_t1

0x8c67,	// (0x000453b1) signal_pane_g3_ParamLimits

0x8c67,	// (0x000453b1) signal_pane_g3

0x8c79,	// (0x000453c3) signal_pane_g4_ParamLimits

0x8c79,	// (0x000453c3) signal_pane_g4

0xf14a,	// (0x0004b894) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf14a,	// (0x0004b894) cell_ai5_widget_list_row_pane_t3

0xf2f0,	// (0x0004ba3a) cell_ituss_key_pane_t1_ParamLimits

0xf2f0,	// (0x0004ba3a) cell_ituss_key_pane_t1

0x9b0f,	// (0x00046259) form_field_data_wide_pane_vc_t2_ParamLimits

0x9b0f,	// (0x00046259) form_field_data_wide_pane_vc_t2

0x9b23,	// (0x0004626d) form_field_data_wide_pane_vc_t3_ParamLimits

0x9b23,	// (0x0004626d) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e4,	// (0x0004bf2e) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e4,	// (0x0004bf2e) form_field_data_wide_pane_vc_t

0xb767,	// (0x00047eb1) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb767,	// (0x00047eb1) form_field_slider_wide_pane_vc_t3

0xb845,	// (0x00047f8f) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb845,	// (0x00047f8f) form_field_popup_wide_pane_vc_t2

0xb85c,	// (0x00047fa6) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb85c,	// (0x00047fa6) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa6b,	// (0x0004c1b5) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa6b,	// (0x0004c1b5) form_field_popup_wide_pane_vc_t

0x77a7,	// (0x00043ef1) aid_fshwr2_btn_pane_ParamLimits

0x77b3,	// (0x00043efd) aid_fshwr2_syb_pane_ParamLimits

0x77c5,	// (0x00043f0f) aid_fshwr2_txt_pane_ParamLimits

0x851d,	// (0x00044c67) fshwr2_bg_pane_ParamLimits

0x77d1,	// (0x00043f1b) fshwr2_func_candi_pane_ParamLimits

0x77ed,	// (0x00043f37) fshwr2_hwr_syb_pane_ParamLimits

0x7807,	// (0x00043f51) fshwr2_icf_pane_ParamLimits

0x6a8f,	// (0x000431d9) list_double_graphic_pane_vc_g4_ParamLimits

0x6a8f,	// (0x000431d9) list_double_graphic_pane_vc_g4

0x7a63,	// (0x000441ad) cell_ituss_key_pane_g3_ParamLimits

0x7a63,	// (0x000441ad) cell_ituss_key_pane_g3

0x7b63,	// (0x000442ad) cell_ituss_key_t5_ParamLimits

0x7b63,	// (0x000442ad) cell_ituss_key_t5

0xf1bc,	// (0x0004b906) popup_fep_vkbss_window_ParamLimits

0xe671,	// (0x0004adbb) aid_cell_ai5_quarter

0xf44e,	// (0x0004bb98) icf_edit_indi_pane_t1_ParamLimits

0x7fb5,	// (0x000446ff) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x7fb5,	// (0x000446ff) aid_tch_indicator_popup_pane_cp2

0x7fc8,	// (0x00044712) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x7fc8,	// (0x00044712) aid_tch_query_popup_data_pane_cp2

0x9e7a,	// (0x000465c4) aid_tch_query_popup_pane_ParamLimits

0x9e7a,	// (0x000465c4) aid_tch_query_popup_pane

0x9e7a,	// (0x000465c4) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9e7a,	// (0x000465c4) aid_tch_query_popup_data_pane_cp1

0x94e0,	// (0x00045c2a) cell_fshwr2_syb_bg_pane_ParamLimits

0x78ee,	// (0x00044038) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x7902,	// (0x0004404c) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf1a6,	// (0x0004b8f0) popup_fep_vkb_icf_pane_ParamLimits

0x7615,	// (0x00043d5f) bg_popup_fep_char_preview_window_g10

0xe7ae,	// (0x0004aef8) cell_ai5_widget_pane_g11_ParamLimits

0xe7ae,	// (0x0004aef8) cell_ai5_widget_pane_g11

0xe7ba,	// (0x0004af04) cell_ai5_widget_pane_g12_ParamLimits

0xe7ba,	// (0x0004af04) cell_ai5_widget_pane_g12

0xe7c6,	// (0x0004af10) cell_ai5_widget_pane_g13_ParamLimits

0xe7c6,	// (0x0004af10) cell_ai5_widget_pane_g13

0xe8f5,	// (0x0004b03f) cell_ai5_widget_pane_t11_ParamLimits

0xe8f5,	// (0x0004b03f) cell_ai5_widget_pane_t11

0xe907,	// (0x0004b051) cell_ai5_widget_pane_t12_ParamLimits

0xe907,	// (0x0004b051) cell_ai5_widget_pane_t12

0x7a6f,	// (0x000441b9) cell_ituss_key_pane_g4_ParamLimits

0x7a6f,	// (0x000441b9) cell_ituss_key_pane_g4

0x7a8b,	// (0x000441d5) cell_ituss_key_pane_g5_ParamLimits

0x7a8b,	// (0x000441d5) cell_ituss_key_pane_g5

0x7aa7,	// (0x000441f1) cell_ituss_key_pane_g6_ParamLimits

0x7aa7,	// (0x000441f1) cell_ituss_key_pane_g6

0x9a0a,	// (0x00046154) bg_icf_pane_g1

0xf34c,	// (0x0004ba96) bg_icf_pane_g2

0xf358,	// (0x0004baa2) bg_icf_pane_g3

0xf362,	// (0x0004baac) bg_icf_pane_g4

0xf36e,	// (0x0004bab8) bg_icf_pane_g5

0xf378,	// (0x0004bac2) bg_icf_pane_g6

0xf384,	// (0x0004bace) bg_icf_pane_g7

0xf38e,	// (0x0004bad8) bg_icf_pane_g8

0xf39a,	// (0x0004bae4) bg_icf_pane_g9

0x0008,

0xfed9,	// (0x0004c623) bg_icf_pane_g

0xf1e9,	// (0x0004b933) popup_hyb_candi_window_ParamLimits

0xf1e9,	// (0x0004b933) popup_hyb_candi_window

0x9a7e,	// (0x000461c8) bg_popup_sub_pane_cp01_ParamLimits

0x9a7e,	// (0x000461c8) bg_popup_sub_pane_cp01

0xf467,	// (0x0004bbb1) entry_hyb_candi_pane_ParamLimits

0xf467,	// (0x0004bbb1) entry_hyb_candi_pane

0xf476,	// (0x0004bbc0) grid_hyb_candi_pane_ParamLimits

0xf476,	// (0x0004bbc0) grid_hyb_candi_pane

0xf48b,	// (0x0004bbd5) grid_hyb_phrase_pane_ParamLimits

0xf48b,	// (0x0004bbd5) grid_hyb_phrase_pane

0xf49a,	// (0x0004bbe4) cell_hyb_candi_pane_ParamLimits

0xf49a,	// (0x0004bbe4) cell_hyb_candi_pane

0xf4bd,	// (0x0004bc07) cell_hyb_candi_scroll_pane

0x8ba6,	// (0x000452f0) cell_hyb_candi_pane_g1

0xf4c6,	// (0x0004bc10) cell_hyb_candi_pane_t1

0xf4d4,	// (0x0004bc1e) cell_hyb_phrase_pane

0x8ba6,	// (0x000452f0) cell_hyb_phrase_pane_g1

0xf4dd,	// (0x0004bc27) cell_hyb_phrase_pane_t1

0xf4eb,	// (0x0004bc35) entry_hyb_candi_pane_t1

0x91bc,	// (0x00045906) input_focus_pane_cp06

0xf4f9,	// (0x0004bc43) cell_hyb_candi_scroll_pane_g1

0xf501,	// (0x0004bc4b) cell_hyb_candi_scroll_pane_g1_aid

0xf509,	// (0x0004bc53) cell_hyb_candi_scroll_pane_g2

0xf511,	// (0x0004bc5b) cell_hyb_candi_scroll_pane_g2_aid

0xf519,	// (0x0004bc63) cell_hyb_candi_scroll_pane_g3

0xf521,	// (0x0004bc6b) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Large

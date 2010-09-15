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

#include "aknlayoutscalable_abrw_php_av_qhd_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0004cbbf };

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
0x774d,	// (0x0005430c) Screen

0x7759,	// (0x00054318) application_window_ParamLimits

0x7759,	// (0x00054318) application_window

0x2847,	// (0x0004f406) screen_g1

0x4595,	// (0x00051154) area_bottom_pane_ParamLimits

0x4595,	// (0x00051154) area_bottom_pane

0x4655,	// (0x00051214) area_top_pane_ParamLimits

0x4655,	// (0x00051214) area_top_pane

0x46f3,	// (0x000512b2) main_pane_ParamLimits

0x46f3,	// (0x000512b2) main_pane

0x7769,	// (0x00054328) misc_graphics

0x9577,	// (0x00056136) battery_pane_ParamLimits

0x9577,	// (0x00056136) battery_pane

0xa259,	// (0x00056e18) bg_status_flat_pane_g8

0xa261,	// (0x00056e20) bg_status_flat_pane_g9

0x963f,	// (0x000561fe) context_pane_ParamLimits

0x963f,	// (0x000561fe) context_pane

0x9755,	// (0x00056314) navi_pane_ParamLimits

0x9755,	// (0x00056314) navi_pane

0x97d9,	// (0x00056398) signal_pane_ParamLimits

0x97d9,	// (0x00056398) signal_pane

0x0008,

0xf854,	// (0x0005c413) bg_status_flat_pane_g

0x9846,	// (0x00056405) status_pane_g1_ParamLimits

0x9846,	// (0x00056405) status_pane_g1

0x985a,	// (0x00056419) status_pane_g2_ParamLimits

0x985a,	// (0x00056419) status_pane_g2

0x9866,	// (0x00056425) status_pane_g3_ParamLimits

0x9866,	// (0x00056425) status_pane_g3

0x0004,

0xf780,	// (0x0005c33f) status_pane_g_ParamLimits

0xf780,	// (0x0005c33f) status_pane_g

0x989a,	// (0x00056459) title_pane_ParamLimits

0x989a,	// (0x00056459) title_pane

0x98d7,	// (0x00056496) uni_indicator_pane_ParamLimits

0x98d7,	// (0x00056496) uni_indicator_pane

0x94a7,	// (0x00056066) bg_list_pane_ParamLimits

0x94a7,	// (0x00056066) bg_list_pane

0x812e,	// (0x00054ced) find_pane

0x94c7,	// (0x00056086) listscroll_app_pane_ParamLimits

0x94c7,	// (0x00056086) listscroll_app_pane

0x94d3,	// (0x00056092) listscroll_form_pane

0x5649,	// (0x00052208) listscroll_gen_pane_ParamLimits

0x5649,	// (0x00052208) listscroll_gen_pane

0x565d,	// (0x0005221c) listscroll_set_pane

0x86e1,	// (0x000552a0) main_idle_act_pane

0x91a3,	// (0x00055d62) main_idle_trad_pane

0x91a3,	// (0x00055d62) main_list_empty_pane

0x94c7,	// (0x00056086) main_midp_pane

0x94ed,	// (0x000560ac) main_pane_g1_ParamLimits

0x94ed,	// (0x000560ac) main_pane_g1

0x5673,	// (0x00052232) popup_ai_message_window_ParamLimits

0x5673,	// (0x00052232) popup_ai_message_window

0x5721,	// (0x000522e0) popup_fep_china_uni_window_ParamLimits

0x5721,	// (0x000522e0) popup_fep_china_uni_window

0x577d,	// (0x0005233c) popup_fep_japan_candidate_window_ParamLimits

0x577d,	// (0x0005233c) popup_fep_japan_candidate_window

0x579d,	// (0x0005235c) popup_fep_japan_predictive_window_ParamLimits

0x579d,	// (0x0005235c) popup_fep_japan_predictive_window

0x57cd,	// (0x0005238c) popup_find_window

0x57da,	// (0x00052399) popup_grid_graphic_window_ParamLimits

0x57da,	// (0x00052399) popup_grid_graphic_window

0x5806,	// (0x000523c5) popup_large_graphic_colour_window

0x582c,	// (0x000523eb) popup_menu_window_ParamLimits

0x582c,	// (0x000523eb) popup_menu_window

0x59e4,	// (0x000525a3) popup_note_image_window

0x59d0,	// (0x0005258f) popup_note_wait_window_ParamLimits

0x59d0,	// (0x0005258f) popup_note_wait_window

0x59d0,	// (0x0005258f) popup_note_window_ParamLimits

0x59d0,	// (0x0005258f) popup_note_window

0x5a3a,	// (0x000525f9) popup_query_code_window_ParamLimits

0x5a3a,	// (0x000525f9) popup_query_code_window

0x5a4e,	// (0x0005260d) popup_query_data_code_window_ParamLimits

0x5a4e,	// (0x0005260d) popup_query_data_code_window

0x5a6b,	// (0x0005262a) popup_query_data_window_ParamLimits

0x5a6b,	// (0x0005262a) popup_query_data_window

0x5a87,	// (0x00052646) popup_query_sat_info_window_ParamLimits

0x5a87,	// (0x00052646) popup_query_sat_info_window

0x5ac0,	// (0x0005267f) popup_snote_single_graphic_window_ParamLimits

0x5ac0,	// (0x0005267f) popup_snote_single_graphic_window

0x5ac0,	// (0x0005267f) popup_snote_single_text_window_ParamLimits

0x5ac0,	// (0x0005267f) popup_snote_single_text_window

0x5ad5,	// (0x00052694) popup_sub_window_general

0x5c05,	// (0x000527c4) popup_window_general_ParamLimits

0x5c05,	// (0x000527c4) popup_window_general

0x94fb,	// (0x000560ba) power_save_pane

0x54d7,	// (0x00052096) control_pane_g1_ParamLimits

0x54d7,	// (0x00052096) control_pane_g1

0x54fe,	// (0x000520bd) control_pane_g2_ParamLimits

0x54fe,	// (0x000520bd) control_pane_g2

0x946a,	// (0x00056029) control_pane_g3_ParamLimits

0x946a,	// (0x00056029) control_pane_g3

0x0007,

0xf768,	// (0x0005c327) control_pane_g_ParamLimits

0xf768,	// (0x0005c327) control_pane_g

0x5548,	// (0x00052107) control_pane_t1_ParamLimits

0x5548,	// (0x00052107) control_pane_t1

0x559e,	// (0x0005215d) control_pane_t2_ParamLimits

0x559e,	// (0x0005215d) control_pane_t2

0x0002,

0xf779,	// (0x0005c338) control_pane_t_ParamLimits

0xf779,	// (0x0005c338) control_pane_t

0x938f,	// (0x00055f4e) navi_navi_volume_pane_cp1

0x9397,	// (0x00055f56) status_small_icon_pane

0x939f,	// (0x00055f5e) status_small_pane_g1_ParamLimits

0x939f,	// (0x00055f5e) status_small_pane_g1

0x93d3,	// (0x00055f92) status_small_pane_g2_ParamLimits

0x93d3,	// (0x00055f92) status_small_pane_g2

0x93df,	// (0x00055f9e) status_small_pane_g3_ParamLimits

0x93df,	// (0x00055f9e) status_small_pane_g3

0x93eb,	// (0x00055faa) status_small_pane_g4_ParamLimits

0x93eb,	// (0x00055faa) status_small_pane_g4

0x93f7,	// (0x00055fb6) status_small_pane_g5_ParamLimits

0x93f7,	// (0x00055fb6) status_small_pane_g5

0x9405,	// (0x00055fc4) status_small_pane_g6_ParamLimits

0x9405,	// (0x00055fc4) status_small_pane_g6

0x0007,

0xf757,	// (0x0005c316) status_small_pane_g_ParamLimits

0xf757,	// (0x0005c316) status_small_pane_g

0x9434,	// (0x00055ff3) status_small_pane_t1

0x9456,	// (0x00056015) status_small_wait_pane_ParamLimits

0x9456,	// (0x00056015) status_small_wait_pane

0x8c20,	// (0x000557df) aid_levels_signal_ParamLimits

0x8c20,	// (0x000557df) aid_levels_signal

0x8c32,	// (0x000557f1) signal_pane_g1_ParamLimits

0x8c32,	// (0x000557f1) signal_pane_g1

0x8c47,	// (0x00055806) signal_pane_g2_ParamLimits

0x8c47,	// (0x00055806) signal_pane_g2

0x0003,

0xf6e8,	// (0x0005c2a7) signal_pane_g_ParamLimits

0xf6e8,	// (0x0005c2a7) signal_pane_g

0x8c82,	// (0x00055841) context_pane_g1

0x7773,	// (0x00054332) title_pane_g1

0x77a9,	// (0x00054368) title_pane_t1

0x7811,	// (0x000543d0) title_pane_t2

0x7837,	// (0x000543f6) title_pane_t3

0x0002,

0xf532,	// (0x0005c0f1) title_pane_t

0x98ef,	// (0x000564ae) aid_levels_battery_ParamLimits

0x98ef,	// (0x000564ae) aid_levels_battery

0x9903,	// (0x000564c2) battery_pane_g1_ParamLimits

0x9903,	// (0x000564c2) battery_pane_g1

0x9919,	// (0x000564d8) battery_pane_g2_ParamLimits

0x9919,	// (0x000564d8) battery_pane_g2

0x0001,

0xf78b,	// (0x0005c34a) battery_pane_g_ParamLimits

0xf78b,	// (0x0005c34a) battery_pane_g

0xab8f,	// (0x0005774e) uni_indicator_pane_g1

0xaba5,	// (0x00057764) uni_indicator_pane_g2

0xabbb,	// (0x0005777a) uni_indicator_pane_g3

0x0005,

0xf8fc,	// (0x0005c4bb) uni_indicator_pane_g

0x9018,	// (0x00055bd7) navi_icon_pane_ParamLimits

0x9018,	// (0x00055bd7) navi_icon_pane

0x8f61,	// (0x00055b20) navi_midp_pane

0x9034,	// (0x00055bf3) navi_navi_pane

0x903e,	// (0x00055bfd) navi_text_pane_ParamLimits

0x903e,	// (0x00055bfd) navi_text_pane

0x2847,	// (0x0004f406) status_small_wait_pane_g1

0x7c8c,	// (0x0005484b) status_small_wait_pane_g2

0x0001,

0xf8f7,	// (0x0005c4b6) status_small_wait_pane_g

0xa8b4,	// (0x00057473) navi_navi_icon_text_pane

0xa8bc,	// (0x0005747b) navi_navi_pane_g1_ParamLimits

0xa8bc,	// (0x0005747b) navi_navi_pane_g1

0xa8ce,	// (0x0005748d) navi_navi_pane_g2_ParamLimits

0xa8ce,	// (0x0005748d) navi_navi_pane_g2

0x0001,

0xf8c5,	// (0x0005c484) navi_navi_pane_g_ParamLimits

0xf8c5,	// (0x0005c484) navi_navi_pane_g

0xa8e0,	// (0x0005749f) navi_navi_tabs_pane

0xa8e9,	// (0x000574a8) navi_navi_text_pane

0xa8b4,	// (0x00057473) navi_navi_volume_pane

0xa890,	// (0x0005744f) navi_text_pane_t1

0xa884,	// (0x00057443) navi_icon_pane_g1

0xa7d7,	// (0x00057396) navi_navi_text_pane_t1

0x5f94,	// (0x00052b53) navi_navi_volume_pane_g1

0x5f9c,	// (0x00052b5b) volume_small_pane

0xa73d,	// (0x000572fc) navi_navi_icon_text_pane_g1

0xa745,	// (0x00057304) navi_navi_icon_text_pane_t1

0x9034,	// (0x00055bf3) navi_tabs_2_long_pane

0x9034,	// (0x00055bf3) navi_tabs_2_pane

0x9034,	// (0x00055bf3) navi_tabs_3_long_pane

0x9034,	// (0x00055bf3) navi_tabs_3_pane

0x9034,	// (0x00055bf3) navi_tabs_4_pane

0x5f74,	// (0x00052b33) tabs_2_active_pane_ParamLimits

0x5f74,	// (0x00052b33) tabs_2_active_pane

0x5f84,	// (0x00052b43) tabs_2_passive_pane_ParamLimits

0x5f84,	// (0x00052b43) tabs_2_passive_pane

0x5f42,	// (0x00052b01) tabs_3_active_pane_ParamLimits

0x5f42,	// (0x00052b01) tabs_3_active_pane

0x5f52,	// (0x00052b11) tabs_3_passive_pane_ParamLimits

0x5f52,	// (0x00052b11) tabs_3_passive_pane

0x5f63,	// (0x00052b22) tabs_3_passive_pane_cp_ParamLimits

0x5f63,	// (0x00052b22) tabs_3_passive_pane_cp

0x5efe,	// (0x00052abd) tabs_4_active_pane_ParamLimits

0x5efe,	// (0x00052abd) tabs_4_active_pane

0x5f0f,	// (0x00052ace) tabs_4_passive_pane_ParamLimits

0x5f0f,	// (0x00052ace) tabs_4_passive_pane

0x5f20,	// (0x00052adf) tabs_4_passive_pane_cp_ParamLimits

0x5f20,	// (0x00052adf) tabs_4_passive_pane_cp

0x5f31,	// (0x00052af0) tabs_4_passive_pane_cp2_ParamLimits

0x5f31,	// (0x00052af0) tabs_4_passive_pane_cp2

0x5eda,	// (0x00052a99) tabs_2_long_active_pane_ParamLimits

0x5eda,	// (0x00052a99) tabs_2_long_active_pane

0x5eec,	// (0x00052aab) tabs_2_long_passive_pane_ParamLimits

0x5eec,	// (0x00052aab) tabs_2_long_passive_pane

0x5e9b,	// (0x00052a5a) tabs_3_long_active_pane_ParamLimits

0x5e9b,	// (0x00052a5a) tabs_3_long_active_pane

0x5eae,	// (0x00052a6d) tabs_3_long_passive_pane_ParamLimits

0x5eae,	// (0x00052a6d) tabs_3_long_passive_pane

0x5ec7,	// (0x00052a86) tabs_3_long_passive_pane_cp_ParamLimits

0x5ec7,	// (0x00052a86) tabs_3_long_passive_pane_cp

0x5e41,	// (0x00052a00) volume_small_pane_g1

0x5e4a,	// (0x00052a09) volume_small_pane_g2

0x5e53,	// (0x00052a12) volume_small_pane_g3

0x5e5c,	// (0x00052a1b) volume_small_pane_g4

0x5e65,	// (0x00052a24) volume_small_pane_g5

0x5e6e,	// (0x00052a2d) volume_small_pane_g6

0x5e77,	// (0x00052a36) volume_small_pane_g7

0x5e80,	// (0x00052a3f) volume_small_pane_g8

0x5e89,	// (0x00052a48) volume_small_pane_g9

0x5e92,	// (0x00052a51) volume_small_pane_g10

0x0009,

0xf891,	// (0x0005c450) volume_small_pane_g

0x7849,	// (0x00054408) bg_active_tab_pane_cp2_ParamLimits

0x7849,	// (0x00054408) bg_active_tab_pane_cp2

0x7857,	// (0x00054416) tabs_3_active_pane_g1

0x785f,	// (0x0005441e) tabs_3_active_pane_t1

0x7849,	// (0x00054408) bg_passive_tab_pane_cp2_ParamLimits

0x7849,	// (0x00054408) bg_passive_tab_pane_cp2

0x7857,	// (0x00054416) tabs_3_passive_pane_g1

0x785f,	// (0x0005441e) tabs_3_passive_pane_t1

0x7849,	// (0x00054408) bg_active_tab_pane_cp3_ParamLimits

0x7849,	// (0x00054408) bg_active_tab_pane_cp3

0x7871,	// (0x00054430) tabs_4_active_pane_g1

0x7879,	// (0x00054438) tabs_4_active_pane_t1

0x7849,	// (0x00054408) bg_passive_tab_pane_cp3_ParamLimits

0x7849,	// (0x00054408) bg_passive_tab_pane_cp3

0x7871,	// (0x00054430) tabs_4_1_passive_pane_g1

0x7879,	// (0x00054438) tabs_4_1_passive_pane_t1

0x94c7,	// (0x00056086) list_highlight_pane_cp2

0xae02,	// (0x000579c1) list_set_pane_ParamLimits

0xae02,	// (0x000579c1) list_set_pane

0xaea8,	// (0x00057a67) main_pane_set_t1_ParamLimits

0xaea8,	// (0x00057a67) main_pane_set_t1

0xaec8,	// (0x00057a87) main_pane_set_t2_ParamLimits

0xaec8,	// (0x00057a87) main_pane_set_t2

0xaedc,	// (0x00057a9b) main_pane_set_t3_ParamLimits

0xaedc,	// (0x00057a9b) main_pane_set_t3

0xaeee,	// (0x00057aad) main_pane_set_t4_ParamLimits

0xaeee,	// (0x00057aad) main_pane_set_t4

0x0003,

0xf961,	// (0x0005c520) main_pane_set_t_ParamLimits

0xf961,	// (0x0005c520) main_pane_set_t

0xaf00,	// (0x00057abf) setting_code_pane

0xaf0c,	// (0x00057acb) setting_slider_graphic_pane

0xaf0c,	// (0x00057acb) setting_slider_pane

0xaf0c,	// (0x00057acb) setting_text_pane

0xaf0c,	// (0x00057acb) setting_volume_pane

0x4942,	// (0x00051501) volume_set_pane

0x7849,	// (0x00054408) bg_set_opt_pane_cp

0x494a,	// (0x00051509) setting_slider_pane_t1

0x4963,	// (0x00051522) setting_slider_pane_t2

0x497d,	// (0x0005153c) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0005c0f8) setting_slider_pane_t

0x4995,	// (0x00051554) slider_set_pane

0x7769,	// (0x00054328) bg_set_opt_pane_cp2

0x788b,	// (0x0005444a) setting_slider_graphic_pane_g1

0x49ab,	// (0x0005156a) setting_slider_graphic_pane_t1

0x49bb,	// (0x0005157a) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0005c0ff) setting_slider_graphic_pane_t

0x49cb,	// (0x0005158a) slider_set_pane_cp

0x7769,	// (0x00054328) input_focus_pane_cp1

0xadc1,	// (0x00057980) list_set_text_pane

0x2847,	// (0x0004f406) setting_text_pane_g1

0x7769,	// (0x00054328) input_focus_pane_cp2

0x2847,	// (0x0004f406) setting_code_pane_g1

0x7894,	// (0x00054453) setting_code_pane_t1

0x3a1f,	// (0x000505de) set_text_pane_t1_ParamLimits

0x3a1f,	// (0x000505de) set_text_pane_t1

0x8545,	// (0x00055104) set_opt_bg_pane_g1

0x854d,	// (0x0005510c) set_opt_bg_pane_g2

0xad9b,	// (0x0005795a) set_opt_bg_pane_g3

0x855d,	// (0x0005511c) set_opt_bg_pane_g4

0x8565,	// (0x00055124) set_opt_bg_pane_g5

0x856d,	// (0x0005512c) set_opt_bg_pane_g6

0xada5,	// (0x00057964) set_opt_bg_pane_g7

0xadad,	// (0x0005796c) set_opt_bg_pane_g8

0xadb7,	// (0x00057976) set_opt_bg_pane_g9

0x0008,

0xf94e,	// (0x0005c50d) set_opt_bg_pane_g

0xad8e,	// (0x0005794d) slider_set_pane_g1

0x601b,	// (0x00052bda) slider_set_pane_g2

0x0006,

0xf93f,	// (0x0005c4fe) slider_set_pane_g

0x5fa5,	// (0x00052b64) volume_set_pane_g1

0x5fad,	// (0x00052b6c) volume_set_pane_g2

0x5fb5,	// (0x00052b74) volume_set_pane_g3

0x5fbd,	// (0x00052b7c) volume_set_pane_g4

0x5fc5,	// (0x00052b84) volume_set_pane_g5

0x5fcd,	// (0x00052b8c) volume_set_pane_g6

0x5fd5,	// (0x00052b94) volume_set_pane_g7

0x5fdd,	// (0x00052b9c) volume_set_pane_g8

0x5fe5,	// (0x00052ba4) volume_set_pane_g9

0x5fed,	// (0x00052bac) volume_set_pane_g10

0x0009,

0xf917,	// (0x0005c4d6) volume_set_pane_g

0x78a2,	// (0x00054461) indicator_pane_ParamLimits

0x78a2,	// (0x00054461) indicator_pane

0x78ae,	// (0x0005446d) main_idle_pane_g2_ParamLimits

0x78ae,	// (0x0005446d) main_idle_pane_g2

0x78d6,	// (0x00054495) main_pane_idle_g1_ParamLimits

0x78d6,	// (0x00054495) main_pane_idle_g1

0x78e3,	// (0x000544a2) popup_clock_digital_analogue_window_ParamLimits

0x78e3,	// (0x000544a2) popup_clock_digital_analogue_window

0x78fa,	// (0x000544b9) soft_indicator_pane_ParamLimits

0x78fa,	// (0x000544b9) soft_indicator_pane

0x7906,	// (0x000544c5) wallpaper_pane_ParamLimits

0x7906,	// (0x000544c5) wallpaper_pane

0x2847,	// (0x0004f406) wallpaper_pane_g1

0x791a,	// (0x000544d9) indicator_pane_g1_ParamLimits

0x791a,	// (0x000544d9) indicator_pane_g1

0xb1ba,	// (0x00057d79) navi_navi_icon_text_pane_srt_g1

0x7935,	// (0x000544f4) soft_indicator_pane_t1

0x794f,	// (0x0005450e) aid_ps_area_pane

0x7960,	// (0x0005451f) aid_ps_clock_pane

0x796e,	// (0x0005452d) aid_ps_indicator_pane

0x797a,	// (0x00054539) indicator_ps_pane_ParamLimits

0x797a,	// (0x00054539) indicator_ps_pane

0x7989,	// (0x00054548) power_save_pane_g1_ParamLimits

0x7989,	// (0x00054548) power_save_pane_g1

0x7995,	// (0x00054554) power_save_pane_g2_ParamLimits

0x7995,	// (0x00054554) power_save_pane_g2

0x4549,	// (0x00051108) aid_navinavi_width_pane

0x794f,	// (0x0005450e) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0005c104) power_save_pane_g_ParamLimits

0xf545,	// (0x0005c104) power_save_pane_g

0x79a3,	// (0x00054562) power_save_pane_t1_ParamLimits

0x79a3,	// (0x00054562) power_save_pane_t1

0x7960,	// (0x0005451f) aid_ps_clock_pane_ParamLimits

0x796e,	// (0x0005452d) aid_ps_indicator_pane_ParamLimits

0x79b5,	// (0x00054574) power_save_pane_t4_ParamLimits

0x79b5,	// (0x00054574) power_save_pane_t4

0x0001,

0xf54a,	// (0x0005c109) power_save_pane_t_ParamLimits

0xf54a,	// (0x0005c109) power_save_pane_t

0x79df,	// (0x0005459e) power_save_t3_ParamLimits

0x79df,	// (0x0005459e) power_save_t3

0x79ca,	// (0x00054589) power_save_t2_ParamLimits

0x79ca,	// (0x00054589) power_save_t2

0x79f4,	// (0x000545b3) indicator_ps_pane_g1

0x79fd,	// (0x000545bc) ai_gene_pane_ParamLimits

0x79fd,	// (0x000545bc) ai_gene_pane

0x7a09,	// (0x000545c8) ai_links_pane_ParamLimits

0x7a09,	// (0x000545c8) ai_links_pane

0x7a15,	// (0x000545d4) indicator_pane_cp1_ParamLimits

0x7a15,	// (0x000545d4) indicator_pane_cp1

0x7a21,	// (0x000545e0) main_pane_idle_g1_cp_ParamLimits

0x7a21,	// (0x000545e0) main_pane_idle_g1_cp

0x7a2d,	// (0x000545ec) popup_ai_links_title_window

0x7a36,	// (0x000545f5) soft_indicator_pane_cp1_ParamLimits

0x7a36,	// (0x000545f5) soft_indicator_pane_cp1

0xab7d,	// (0x0005773c) ai_links_pane_g1

0xab86,	// (0x00057745) grid_ai_links_pane

0xab60,	// (0x0005771f) ai_gene_pane_1

0xab6b,	// (0x0005772a) ai_gene_pane_2

0xab74,	// (0x00057733) list_highlight_pane_cp4

0xab44,	// (0x00057703) cell_ai_link_pane_ParamLimits

0xab44,	// (0x00057703) cell_ai_link_pane

0xab3c,	// (0x000576fb) cell_ai_link_pane_g1

0x7c8c,	// (0x0005484b) cell_ai_link_pane_g2

0x0001,

0xf8f2,	// (0x0005c4b1) cell_ai_link_pane_g

0x7769,	// (0x00054328) grid_highlight_cp2

0x7769,	// (0x00054328) bg_popup_sub_pane_cp1

0x7a50,	// (0x0005460f) popup_ai_links_title_window_t1

0xaa8a,	// (0x00057649) ai_gene_pane_1_g1_ParamLimits

0xaa8a,	// (0x00057649) ai_gene_pane_1_g1

0xaa96,	// (0x00057655) ai_gene_pane_1_g2_ParamLimits

0xaa96,	// (0x00057655) ai_gene_pane_1_g2

0x0001,

0xf8e8,	// (0x0005c4a7) ai_gene_pane_1_g_ParamLimits

0xf8e8,	// (0x0005c4a7) ai_gene_pane_1_g

0xaaa3,	// (0x00057662) ai_gene_pane_1_t1_ParamLimits

0xaaa3,	// (0x00057662) ai_gene_pane_1_t1

0xaad7,	// (0x00057696) grid_ai_soft_ind_pane

0xaa75,	// (0x00057634) ai_gene_pane_2_t1_ParamLimits

0xaa75,	// (0x00057634) ai_gene_pane_2_t1

0x7a5f,	// (0x0005461e) main_pane_empty_t1_ParamLimits

0x7a5f,	// (0x0005461e) main_pane_empty_t1

0x7a77,	// (0x00054636) main_pane_empty_t2_ParamLimits

0x7a77,	// (0x00054636) main_pane_empty_t2

0x7a8c,	// (0x0005464b) main_pane_empty_t3_ParamLimits

0x7a8c,	// (0x0005464b) main_pane_empty_t3

0x7a9e,	// (0x0005465d) main_pane_empty_t4_ParamLimits

0x7a9e,	// (0x0005465d) main_pane_empty_t4

0x7ab0,	// (0x0005466f) main_pane_empty_t5_ParamLimits

0x7ab0,	// (0x0005466f) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0005c10e) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0005c10e) main_pane_empty_t

0x860c,	// (0x000551cb) bg_popup_window_pane_ParamLimits

0x860c,	// (0x000551cb) bg_popup_window_pane

0xa7e5,	// (0x000573a4) find_popup_pane_cp2_ParamLimits

0xa7e5,	// (0x000573a4) find_popup_pane_cp2

0xa7f1,	// (0x000573b0) heading_pane_ParamLimits

0xa7f1,	// (0x000573b0) heading_pane

0x7769,	// (0x00054328) bg_popup_sub_pane

0xa75f,	// (0x0005731e) bg_popup_window_pane_g1_ParamLimits

0xa75f,	// (0x0005731e) bg_popup_window_pane_g1

0xa76b,	// (0x0005732a) bg_popup_window_pane_g2_ParamLimits

0xa76b,	// (0x0005732a) bg_popup_window_pane_g2

0xa777,	// (0x00057336) bg_popup_window_pane_g3_ParamLimits

0xa777,	// (0x00057336) bg_popup_window_pane_g3

0xa783,	// (0x00057342) bg_popup_window_pane_g4_ParamLimits

0xa783,	// (0x00057342) bg_popup_window_pane_g4

0xa78f,	// (0x0005734e) bg_popup_window_pane_g5_ParamLimits

0xa78f,	// (0x0005734e) bg_popup_window_pane_g5

0xa79b,	// (0x0005735a) bg_popup_window_pane_g6_ParamLimits

0xa79b,	// (0x0005735a) bg_popup_window_pane_g6

0xa7a7,	// (0x00057366) bg_popup_window_pane_g7_ParamLimits

0xa7a7,	// (0x00057366) bg_popup_window_pane_g7

0xa7b3,	// (0x00057372) bg_popup_window_pane_g8_ParamLimits

0xa7b3,	// (0x00057372) bg_popup_window_pane_g8

0xa7bf,	// (0x0005737e) bg_popup_window_pane_g9_ParamLimits

0xa7bf,	// (0x0005737e) bg_popup_window_pane_g9

0xa7cb,	// (0x0005738a) bg_popup_window_pane_g10_ParamLimits

0xa7cb,	// (0x0005738a) bg_popup_window_pane_g10

0x0009,

0xf8b0,	// (0x0005c46f) bg_popup_window_pane_g_ParamLimits

0xf8b0,	// (0x0005c46f) bg_popup_window_pane_g

0xa6f4,	// (0x000572b3) bg_popup_heading_pane_ParamLimits

0xa6f4,	// (0x000572b3) bg_popup_heading_pane

0x6120,	// (0x00052cdf) tabs_4_passive_pane_cp_srt_ParamLimits

0x6120,	// (0x00052cdf) tabs_4_passive_pane_cp_srt

0x6132,	// (0x00052cf1) tabs_4_passive_pane_srt_ParamLimits

0xa708,	// (0x000572c7) heading_pane_g2

0x6132,	// (0x00052cf1) tabs_4_passive_pane_srt

0x94c7,	// (0x00056086) bg_passive_tab_pane_cp3_srt_ParamLimits

0x94c7,	// (0x00056086) bg_passive_tab_pane_cp3_srt

0xa710,	// (0x000572cf) heading_pane_t1_ParamLimits

0xa710,	// (0x000572cf) heading_pane_t1

0xa727,	// (0x000572e6) heading_pane_t2_ParamLimits

0xa727,	// (0x000572e6) heading_pane_t2

0x0001,

0xf8ab,	// (0x0005c46a) heading_pane_t_ParamLimits

0xf8ab,	// (0x0005c46a) heading_pane_t

0xa221,	// (0x00056de0) bg_popup_heading_pane_g1

0xa2d0,	// (0x00056e8f) bg_popup_heading_pane_g2

0xa2da,	// (0x00056e99) bg_popup_heading_pane_g3

0xa2e4,	// (0x00056ea3) bg_popup_heading_pane_g4

0xa2ee,	// (0x00056ead) bg_popup_heading_pane_g5

0xa2f8,	// (0x00056eb7) bg_popup_heading_pane_g6

0xa300,	// (0x00056ebf) bg_popup_heading_pane_g7

0xa308,	// (0x00056ec7) bg_popup_heading_pane_g8

0xa312,	// (0x00056ed1) bg_popup_heading_pane_g9

0x0008,

0xf867,	// (0x0005c426) bg_popup_heading_pane_g

0x99f1,	// (0x000565b0) bg_popup_sub_pane_g1

0x9a01,	// (0x000565c0) bg_popup_sub_pane_g2

0x99f9,	// (0x000565b8) bg_popup_sub_pane_g3

0x9a11,	// (0x000565d0) bg_popup_sub_pane_g4

0x9a09,	// (0x000565c8) bg_popup_sub_pane_g5

0x9a19,	// (0x000565d8) bg_popup_sub_pane_g6

0x9a21,	// (0x000565e0) bg_popup_sub_pane_g7

0x9a31,	// (0x000565f0) bg_popup_sub_pane_g8

0x9a29,	// (0x000565e8) bg_popup_sub_pane_g9

0x0008,

0xf841,	// (0x0005c400) bg_popup_sub_pane_g

0x7ac4,	// (0x00054683) bg_popup_window_pane_cp5_ParamLimits

0x7ac4,	// (0x00054683) bg_popup_window_pane_cp5

0x7ae0,	// (0x0005469f) popup_note_window_g1_ParamLimits

0x7ae0,	// (0x0005469f) popup_note_window_g1

0x7aec,	// (0x000546ab) popup_note_window_t1_ParamLimits

0x7aec,	// (0x000546ab) popup_note_window_t1

0x7b02,	// (0x000546c1) popup_note_window_t2_ParamLimits

0x7b02,	// (0x000546c1) popup_note_window_t2

0x7b18,	// (0x000546d7) popup_note_window_t3_ParamLimits

0x7b18,	// (0x000546d7) popup_note_window_t3

0x7b2e,	// (0x000546ed) popup_note_window_t4_ParamLimits

0x7b2e,	// (0x000546ed) popup_note_window_t4

0x7b56,	// (0x00054715) popup_note_window_t5_ParamLimits

0x7b56,	// (0x00054715) popup_note_window_t5

0x0004,

0xf55a,	// (0x0005c119) popup_note_window_t_ParamLimits

0xf55a,	// (0x0005c119) popup_note_window_t

0x7ba0,	// (0x0005475f) bg_popup_window_pane_cp6_ParamLimits

0x7ba0,	// (0x0005475f) bg_popup_window_pane_cp6

0xa19d,	// (0x00056d5c) popup_note_image_window_g1_ParamLimits

0xa19d,	// (0x00056d5c) popup_note_image_window_g1

0xa1a9,	// (0x00056d68) popup_note_image_window_g2_ParamLimits

0xa1a9,	// (0x00056d68) popup_note_image_window_g2

0x0001,

0xf835,	// (0x0005c3f4) popup_note_image_window_g_ParamLimits

0xf835,	// (0x0005c3f4) popup_note_image_window_g

0xa1c2,	// (0x00056d81) popup_note_image_window_t1_ParamLimits

0xa1c2,	// (0x00056d81) popup_note_image_window_t1

0xa1db,	// (0x00056d9a) popup_note_image_window_t2_ParamLimits

0xa1db,	// (0x00056d9a) popup_note_image_window_t2

0xa1f4,	// (0x00056db3) popup_note_image_window_t3_ParamLimits

0xa1f4,	// (0x00056db3) popup_note_image_window_t3

0x0002,

0xf83a,	// (0x0005c3f9) popup_note_image_window_t_ParamLimits

0xf83a,	// (0x0005c3f9) popup_note_image_window_t

0xa05e,	// (0x00056c1d) bg_popup_window_pane_cp7_ParamLimits

0xa05e,	// (0x00056c1d) bg_popup_window_pane_cp7

0xa08e,	// (0x00056c4d) popup_note_wait_window_g1_ParamLimits

0xa08e,	// (0x00056c4d) popup_note_wait_window_g1

0xa09a,	// (0x00056c59) popup_note_wait_window_g2_ParamLimits

0xa09a,	// (0x00056c59) popup_note_wait_window_g2

0x0002,

0xf823,	// (0x0005c3e2) popup_note_wait_window_g_ParamLimits

0xf823,	// (0x0005c3e2) popup_note_wait_window_g

0xa0b2,	// (0x00056c71) popup_note_wait_window_t1_ParamLimits

0xa0b2,	// (0x00056c71) popup_note_wait_window_t1

0xa0d9,	// (0x00056c98) popup_note_wait_window_t2_ParamLimits

0xa0d9,	// (0x00056c98) popup_note_wait_window_t2

0xa0f6,	// (0x00056cb5) popup_note_wait_window_t3_ParamLimits

0xa0f6,	// (0x00056cb5) popup_note_wait_window_t3

0xa109,	// (0x00056cc8) popup_note_wait_window_t4_ParamLimits

0xa109,	// (0x00056cc8) popup_note_wait_window_t4

0x0004,

0xf82a,	// (0x0005c3e9) popup_note_wait_window_t_ParamLimits

0xf82a,	// (0x0005c3e9) popup_note_wait_window_t

0xa12e,	// (0x00056ced) wait_bar_pane_ParamLimits

0xa12e,	// (0x00056ced) wait_bar_pane

0x7769,	// (0x00054328) wait_anim_pane

0x7769,	// (0x00054328) wait_border_pane

0x2847,	// (0x0004f406) wait_anim_pane_g1

0x2847,	// (0x0004f406) wait_anim_pane_g2

0x0001,

0xf6e3,	// (0x0005c2a2) wait_anim_pane_g

0xa002,	// (0x00056bc1) wait_border_pane_g1

0xa00d,	// (0x00056bcc) wait_border_pane_g2

0xa016,	// (0x00056bd5) wait_border_pane_g3

0x0002,

0xf81c,	// (0x0005c3db) wait_border_pane_g

0x9e6d,	// (0x00056a2c) bg_popup_window_pane_cp16_ParamLimits

0x9e6d,	// (0x00056a2c) bg_popup_window_pane_cp16

0x9f6d,	// (0x00056b2c) indicator_popup_pane_cp4_ParamLimits

0x9f6d,	// (0x00056b2c) indicator_popup_pane_cp4

0x9f81,	// (0x00056b40) popup_query_data_window_t1_ParamLimits

0x9f81,	// (0x00056b40) popup_query_data_window_t1

0x9f93,	// (0x00056b52) popup_query_data_window_t2_ParamLimits

0x9f93,	// (0x00056b52) popup_query_data_window_t2

0x9fac,	// (0x00056b6b) popup_query_data_window_t3_ParamLimits

0x9fac,	// (0x00056b6b) popup_query_data_window_t3

0x0002,

0xf815,	// (0x0005c3d4) popup_query_data_window_t_ParamLimits

0xf815,	// (0x0005c3d4) popup_query_data_window_t

0x9fc6,	// (0x00056b85) query_popup_data_pane_ParamLimits

0x9fc6,	// (0x00056b85) query_popup_data_pane

0x9fda,	// (0x00056b99) query_popup_data_pane_cp1_ParamLimits

0x9fda,	// (0x00056b99) query_popup_data_pane_cp1

0x9e6d,	// (0x00056a2c) bg_popup_window_pane_cp10_ParamLimits

0x9e6d,	// (0x00056a2c) bg_popup_window_pane_cp10

0x9e9f,	// (0x00056a5e) indicator_popup_pane_ParamLimits

0x9e9f,	// (0x00056a5e) indicator_popup_pane

0x9ec1,	// (0x00056a80) popup_query_code_window_t1_ParamLimits

0x9ec1,	// (0x00056a80) popup_query_code_window_t1

0x9edb,	// (0x00056a9a) popup_query_code_window_t2_ParamLimits

0x9edb,	// (0x00056a9a) popup_query_code_window_t2

0x9f24,	// (0x00056ae3) popup_query_code_window_t3_ParamLimits

0x9f24,	// (0x00056ae3) popup_query_code_window_t3

0x0002,

0xf80e,	// (0x0005c3cd) popup_query_code_window_t_ParamLimits

0xf80e,	// (0x0005c3cd) popup_query_code_window_t

0x9f53,	// (0x00056b12) query_popup_pane_ParamLimits

0x9f53,	// (0x00056b12) query_popup_pane

0x7ba0,	// (0x0005475f) bg_popup_window_pane_cp15_ParamLimits

0x7ba0,	// (0x0005475f) bg_popup_window_pane_cp15

0x7bbe,	// (0x0005477d) indicator_popup_pane_cp1_ParamLimits

0x7bbe,	// (0x0005477d) indicator_popup_pane_cp1

0x7bd1,	// (0x00054790) indicator_popup_pane_cp2_ParamLimits

0x7bd1,	// (0x00054790) indicator_popup_pane_cp2

0x7be4,	// (0x000547a3) popup_query_data_code_window_g1_ParamLimits

0x7be4,	// (0x000547a3) popup_query_data_code_window_g1

0x7bf7,	// (0x000547b6) popup_query_data_code_window_t1_ParamLimits

0x7bf7,	// (0x000547b6) popup_query_data_code_window_t1

0x7c09,	// (0x000547c8) popup_query_data_code_window_t2_ParamLimits

0x7c09,	// (0x000547c8) popup_query_data_code_window_t2

0x7c1b,	// (0x000547da) popup_query_data_code_window_t3_ParamLimits

0x7c1b,	// (0x000547da) popup_query_data_code_window_t3

0x7c31,	// (0x000547f0) popup_query_data_code_window_t4_ParamLimits

0x7c31,	// (0x000547f0) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0005c124) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0005c124) popup_query_data_code_window_t

0x5c85,	// (0x00052844) list_single_midp_graphic_pane_g3

0x7c49,	// (0x00054808) query_popup_data_pane_cp2_ParamLimits

0x7c5c,	// (0x0005481b) query_popup_pane_cp2_ParamLimits

0x7c5c,	// (0x0005481b) query_popup_pane_cp2

0x7769,	// (0x00054328) bg_popup_window_pane_cp11

0x9e51,	// (0x00056a10) heading_pane_cp5

0x9e59,	// (0x00056a18) listscroll_popup_info_pane

0x7769,	// (0x00054328) input_focus_pane_cp3

0x7c6f,	// (0x0005482e) query_popup_pane_t1

0x7c7d,	// (0x0005483c) list_popup_info_pane_ParamLimits

0x7c7d,	// (0x0005483c) list_popup_info_pane

0x7c8c,	// (0x0005484b) listscroll_popup_info_pane_g1

0x7c94,	// (0x00054853) scroll_pane_cp7

0x7c9e,	// (0x0005485d) popup_info_list_pane_t1_ParamLimits

0x7c9e,	// (0x0005485d) popup_info_list_pane_t1

0x7cb8,	// (0x00054877) popup_info_list_pane_t2_ParamLimits

0x7cb8,	// (0x00054877) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0005c12d) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0005c12d) popup_info_list_pane_t

0x7769,	// (0x00054328) bg_popup_window_pane_cp12

0xb1d4,	// (0x00057d93) find_popup_pane

0x7849,	// (0x00054408) bg_popup_window_pane_cp3

0x7cd2,	// (0x00054891) heading_pane_cp3

0x7ce1,	// (0x000548a0) listscroll_popup_graphic_pane

0x7769,	// (0x00054328) bg_popup_window_pane_cp4

0x7d41,	// (0x00054900) heading_pane_cp4

0x7d4b,	// (0x0005490a) listscroll_popup_colour_pane

0x7d53,	// (0x00054912) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7d53,	// (0x00054912) cell_large_graphic_colour_none_popup_pane

0x7d67,	// (0x00054926) grid_large_graphic_colour_popup_pane_ParamLimits

0x7d67,	// (0x00054926) grid_large_graphic_colour_popup_pane

0x7d8b,	// (0x0005494a) listscroll_popup_colour_pane_g1_ParamLimits

0x7d8b,	// (0x0005494a) listscroll_popup_colour_pane_g1

0x7da2,	// (0x00054961) listscroll_popup_colour_pane_g2_ParamLimits

0x7da2,	// (0x00054961) listscroll_popup_colour_pane_g2

0x7db9,	// (0x00054978) listscroll_popup_colour_pane_g3_ParamLimits

0x7db9,	// (0x00054978) listscroll_popup_colour_pane_g3

0x7dc9,	// (0x00054988) listscroll_popup_colour_pane_g4_ParamLimits

0x7dc9,	// (0x00054988) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0005c132) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0005c132) listscroll_popup_colour_pane_g

0x7dd9,	// (0x00054998) scroll_pane_cp6_ParamLimits

0x7dd9,	// (0x00054998) scroll_pane_cp6

0x7deb,	// (0x000549aa) cell_large_graphic_colour_popup_pane_ParamLimits

0x7deb,	// (0x000549aa) cell_large_graphic_colour_popup_pane

0x7e0a,	// (0x000549c9) cell_large_graphic_colour_none_popup_pane_t1

0x7769,	// (0x00054328) grid_highlight_pane_cp5

0x7e19,	// (0x000549d8) cell_large_graphic_colour_popup_pane_g1

0x7e21,	// (0x000549e0) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0005c13b) cell_large_graphic_colour_popup_pane_g

0x7e29,	// (0x000549e8) cell_large_graphic_colour_popup_pane_g2_copy1

0x7e32,	// (0x000549f1) grid_highlight_pane_cp4

0x7e3a,	// (0x000549f9) bg_popup_window_pane_cp8_ParamLimits

0x7e3a,	// (0x000549f9) bg_popup_window_pane_cp8

0x7e55,	// (0x00054a14) popup_snote_single_text_window_g1_ParamLimits

0x7e55,	// (0x00054a14) popup_snote_single_text_window_g1

0x7e67,	// (0x00054a26) popup_snote_single_text_window_t1_ParamLimits

0x7e67,	// (0x00054a26) popup_snote_single_text_window_t1

0x7e7a,	// (0x00054a39) popup_snote_single_text_window_t2_ParamLimits

0x7e7a,	// (0x00054a39) popup_snote_single_text_window_t2

0x7e8d,	// (0x00054a4c) popup_snote_single_text_window_t3_ParamLimits

0x7e8d,	// (0x00054a4c) popup_snote_single_text_window_t3

0x7ec6,	// (0x00054a85) popup_snote_single_text_window_t4_ParamLimits

0x7ec6,	// (0x00054a85) popup_snote_single_text_window_t4

0x7efa,	// (0x00054ab9) popup_snote_single_text_window_t5_ParamLimits

0x7efa,	// (0x00054ab9) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0005c140) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0005c140) popup_snote_single_text_window_t

0x7f29,	// (0x00054ae8) bg_popup_window_pane_cp9_ParamLimits

0x7f29,	// (0x00054ae8) bg_popup_window_pane_cp9

0x7e55,	// (0x00054a14) popup_snote_single_graphic_window_g1_ParamLimits

0x7e55,	// (0x00054a14) popup_snote_single_graphic_window_g1

0x7f37,	// (0x00054af6) popup_snote_single_graphic_window_g2_ParamLimits

0x7f37,	// (0x00054af6) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0005c14b) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0005c14b) popup_snote_single_graphic_window_g

0x7f43,	// (0x00054b02) popup_snote_single_graphic_window_t1_ParamLimits

0x7f43,	// (0x00054b02) popup_snote_single_graphic_window_t1

0x7f56,	// (0x00054b15) popup_snote_single_graphic_window_t2_ParamLimits

0x7f56,	// (0x00054b15) popup_snote_single_graphic_window_t2

0x7f69,	// (0x00054b28) popup_snote_single_graphic_window_t3_ParamLimits

0x7f69,	// (0x00054b28) popup_snote_single_graphic_window_t3

0x7fa2,	// (0x00054b61) popup_snote_single_graphic_window_t4_ParamLimits

0x7fa2,	// (0x00054b61) popup_snote_single_graphic_window_t4

0x7fd6,	// (0x00054b95) popup_snote_single_graphic_window_t5_ParamLimits

0x7fd6,	// (0x00054b95) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0005c150) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0005c150) popup_snote_single_graphic_window_t

0xb116,	// (0x00057cd5) grid_graphic_popup_pane_ParamLimits

0xb116,	// (0x00057cd5) grid_graphic_popup_pane

0xb140,	// (0x00057cff) listscroll_popup_graphic_pane_g1_ParamLimits

0xb140,	// (0x00057cff) listscroll_popup_graphic_pane_g1

0xb154,	// (0x00057d13) listscroll_popup_graphic_pane_g2_ParamLimits

0xb154,	// (0x00057d13) listscroll_popup_graphic_pane_g2

0x0001,

0xf98b,	// (0x0005c54a) listscroll_popup_graphic_pane_g_ParamLimits

0xf98b,	// (0x0005c54a) listscroll_popup_graphic_pane_g

0xb168,	// (0x00057d27) scroll_pane_cp5

0xb0a7,	// (0x00057c66) cell_graphic_popup_pane_ParamLimits

0xb0a7,	// (0x00057c66) cell_graphic_popup_pane

0xb088,	// (0x00057c47) cell_graphic_popup_pane_g1

0xb090,	// (0x00057c4f) cell_graphic_popup_pane_g2

0x7e29,	// (0x000549e8) cell_graphic_popup_pane_g3

0x0002,

0xf984,	// (0x0005c543) cell_graphic_popup_pane_g

0xb099,	// (0x00057c58) cell_graphic_popup_pane_t2

0x7e32,	// (0x000549f1) grid_highlight_pane_cp3

0x8017,	// (0x00054bd6) list_gen_pane_ParamLimits

0x8017,	// (0x00054bd6) list_gen_pane

0x8049,	// (0x00054c08) scroll_pane

0xafe0,	// (0x00057b9f) bg_list_pane_g1_ParamLimits

0xafe0,	// (0x00057b9f) bg_list_pane_g1

0xaffd,	// (0x00057bbc) bg_list_pane_g2_ParamLimits

0xaffd,	// (0x00057bbc) bg_list_pane_g2

0xb012,	// (0x00057bd1) bg_list_pane_g3_ParamLimits

0xb012,	// (0x00057bd1) bg_list_pane_g3

0xb026,	// (0x00057be5) bg_list_pane_g4_ParamLimits

0xb026,	// (0x00057be5) bg_list_pane_g4

0xb03a,	// (0x00057bf9) bg_list_pane_g5_ParamLimits

0xb03a,	// (0x00057bf9) bg_list_pane_g5

0x0004,

0xf979,	// (0x0005c538) bg_list_pane_g_ParamLimits

0xf979,	// (0x0005c538) bg_list_pane_g

0x814e,	// (0x00054d0d) list_double2_graphic_large_graphic_pane_ParamLimits

0x814e,	// (0x00054d0d) list_double2_graphic_large_graphic_pane

0x814e,	// (0x00054d0d) list_double2_graphic_pane_ParamLimits

0x814e,	// (0x00054d0d) list_double2_graphic_pane

0x814e,	// (0x00054d0d) list_double2_large_graphic_pane_ParamLimits

0x814e,	// (0x00054d0d) list_double2_large_graphic_pane

0x814e,	// (0x00054d0d) list_double2_pane_ParamLimits

0x814e,	// (0x00054d0d) list_double2_pane

0x814e,	// (0x00054d0d) list_double_graphic_heading_pane_ParamLimits

0x814e,	// (0x00054d0d) list_double_graphic_heading_pane

0x814e,	// (0x00054d0d) list_double_graphic_pane_ParamLimits

0x814e,	// (0x00054d0d) list_double_graphic_pane

0x814e,	// (0x00054d0d) list_double_heading_pane_ParamLimits

0x814e,	// (0x00054d0d) list_double_heading_pane

0x814e,	// (0x00054d0d) list_double_large_graphic_pane_ParamLimits

0x814e,	// (0x00054d0d) list_double_large_graphic_pane

0x814e,	// (0x00054d0d) list_double_number_pane_ParamLimits

0x814e,	// (0x00054d0d) list_double_number_pane

0x814e,	// (0x00054d0d) list_double_pane_ParamLimits

0x814e,	// (0x00054d0d) list_double_pane

0x814e,	// (0x00054d0d) list_double_time_pane_ParamLimits

0x814e,	// (0x00054d0d) list_double_time_pane

0x814e,	// (0x00054d0d) list_setting_number_pane_ParamLimits

0x814e,	// (0x00054d0d) list_setting_number_pane

0x814e,	// (0x00054d0d) list_setting_pane_ParamLimits

0x814e,	// (0x00054d0d) list_setting_pane

0x8187,	// (0x00054d46) list_single_2graphic_pane_ParamLimits

0x8187,	// (0x00054d46) list_single_2graphic_pane

0x8187,	// (0x00054d46) list_single_graphic_heading_pane_ParamLimits

0x8187,	// (0x00054d46) list_single_graphic_heading_pane

0x8187,	// (0x00054d46) list_single_graphic_pane_ParamLimits

0x8187,	// (0x00054d46) list_single_graphic_pane

0x8187,	// (0x00054d46) list_single_heading_pane_ParamLimits

0x8187,	// (0x00054d46) list_single_heading_pane

0x60dd,	// (0x00052c9c) list_single_large_graphic_pane_ParamLimits

0x60dd,	// (0x00052c9c) list_single_large_graphic_pane

0x8187,	// (0x00054d46) list_single_number_heading_pane_ParamLimits

0x8187,	// (0x00054d46) list_single_number_heading_pane

0x8187,	// (0x00054d46) list_single_number_pane_ParamLimits

0x8187,	// (0x00054d46) list_single_number_pane

0x8187,	// (0x00054d46) list_single_pane_ParamLimits

0x8187,	// (0x00054d46) list_single_pane

0x7769,	// (0x00054328) list_highlight_pane_cp1

0x8488,	// (0x00055047) list_single_pane_g1_ParamLimits

0x8488,	// (0x00055047) list_single_pane_g1

0x807d,	// (0x00054c3c) list_single_pane_g2_ParamLimits

0x807d,	// (0x00054c3c) list_single_pane_g2

0x0001,

0xf5ad,	// (0x0005c16c) list_single_pane_g_ParamLimits

0xf5ad,	// (0x0005c16c) list_single_pane_g

0x60af,	// (0x00052c6e) list_single_pane_t1_ParamLimits

0x60af,	// (0x00052c6e) list_single_pane_t1

0x8488,	// (0x00055047) list_single_number_pane_g1_ParamLimits

0x8488,	// (0x00055047) list_single_number_pane_g1

0x807d,	// (0x00054c3c) list_single_number_pane_g2_ParamLimits

0x807d,	// (0x00054c3c) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x0005c16c) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x0005c16c) list_single_number_pane_g

0x5c4a,	// (0x00052809) list_single_number_pane_t1_ParamLimits

0x5c4a,	// (0x00052809) list_single_number_pane_t1

0x5ff5,	// (0x00052bb4) list_single_number_pane_t2_ParamLimits

0x5ff5,	// (0x00052bb4) list_single_number_pane_t2

0x0001,

0xf93a,	// (0x0005c4f9) list_single_number_pane_t_ParamLimits

0xf93a,	// (0x0005c4f9) list_single_number_pane_t

0x3a38,	// (0x000505f7) list_single_graphic_pane_g1_ParamLimits

0x3a38,	// (0x000505f7) list_single_graphic_pane_g1

0x8488,	// (0x00055047) list_single_graphic_pane_g2_ParamLimits

0x8488,	// (0x00055047) list_single_graphic_pane_g2

0x807d,	// (0x00054c3c) list_single_graphic_pane_g3_ParamLimits

0x807d,	// (0x00054c3c) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0005c15b) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0005c15b) list_single_graphic_pane_g

0x3a44,	// (0x00050603) list_single_graphic_pane_t1_ParamLimits

0x3a44,	// (0x00050603) list_single_graphic_pane_t1

0x3a5a,	// (0x00050619) list_single_heading_pane_g1_ParamLimits

0x3a5a,	// (0x00050619) list_single_heading_pane_g1

0x807d,	// (0x00054c3c) list_single_heading_pane_g2_ParamLimits

0x807d,	// (0x00054c3c) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0005c162) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0005c162) list_single_heading_pane_g

0x3a6d,	// (0x0005062c) list_single_heading_pane_t1_ParamLimits

0x3a6d,	// (0x0005062c) list_single_heading_pane_t1

0x8089,	// (0x00054c48) list_single_heading_pane_t2_ParamLimits

0x8089,	// (0x00054c48) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0005c167) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0005c167) list_single_heading_pane_t

0x8488,	// (0x00055047) list_single_number_heading_pane_g1_ParamLimits

0x8488,	// (0x00055047) list_single_number_heading_pane_g1

0x807d,	// (0x00054c3c) list_single_number_heading_pane_g2_ParamLimits

0x807d,	// (0x00054c3c) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x0005c16c) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x0005c16c) list_single_number_heading_pane_g

0x3a83,	// (0x00050642) list_single_number_heading_pane_t1_ParamLimits

0x3a83,	// (0x00050642) list_single_number_heading_pane_t1

0x3a99,	// (0x00050658) list_single_number_heading_pane_t2_ParamLimits

0x3a99,	// (0x00050658) list_single_number_heading_pane_t2

0x3aab,	// (0x0005066a) list_single_number_heading_pane_t3_ParamLimits

0x3aab,	// (0x0005066a) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x0005c171) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x0005c171) list_single_number_heading_pane_t

0x3abd,	// (0x0005067c) list_single_graphic_heading_pane_g1_ParamLimits

0x3abd,	// (0x0005067c) list_single_graphic_heading_pane_g1

0x809b,	// (0x00054c5a) list_single_graphic_heading_pane_g4_ParamLimits

0x809b,	// (0x00054c5a) list_single_graphic_heading_pane_g4

0x807d,	// (0x00054c3c) list_single_graphic_heading_pane_g5_ParamLimits

0x807d,	// (0x00054c3c) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x0005c178) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x0005c178) list_single_graphic_heading_pane_g

0x3a83,	// (0x00050642) list_single_graphic_heading_pane_t1_ParamLimits

0x3a83,	// (0x00050642) list_single_graphic_heading_pane_t1

0x80ac,	// (0x00054c6b) list_single_graphic_heading_pane_t2_ParamLimits

0x80ac,	// (0x00054c6b) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x0005c17f) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x0005c17f) list_single_graphic_heading_pane_t

0x49d3,	// (0x00051592) list_single_large_graphic_pane_g1_ParamLimits

0x49d3,	// (0x00051592) list_single_large_graphic_pane_g1

0x49df,	// (0x0005159e) list_single_large_graphic_pane_g2_ParamLimits

0x49df,	// (0x0005159e) list_single_large_graphic_pane_g2

0x49eb,	// (0x000515aa) list_single_large_graphic_pane_g3_ParamLimits

0x49eb,	// (0x000515aa) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x0005c184) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x0005c184) list_single_large_graphic_pane_g

0xa00d,	// (0x00056bcc) wait_border_pane_g2_copy1

0x49f7,	// (0x000515b6) list_single_large_graphic_pane_g4_cp2

0x49ff,	// (0x000515be) list_single_large_graphic_pane_t1_ParamLimits

0x49ff,	// (0x000515be) list_single_large_graphic_pane_t1

0x80be,	// (0x00054c7d) list_double_pane_g1_ParamLimits

0x80be,	// (0x00054c7d) list_double_pane_g1

0x80ca,	// (0x00054c89) list_double_pane_g2_ParamLimits

0x80ca,	// (0x00054c89) list_double_pane_g2

0x0001,

0xf5cc,	// (0x0005c18b) list_double_pane_g_ParamLimits

0xf5cc,	// (0x0005c18b) list_double_pane_g

0x4a15,	// (0x000515d4) list_double_pane_t1_ParamLimits

0x4a15,	// (0x000515d4) list_double_pane_t1

0x4a2b,	// (0x000515ea) list_double_pane_t2_ParamLimits

0x4a2b,	// (0x000515ea) list_double_pane_t2

0x0001,

0xf5d1,	// (0x0005c190) list_double_pane_t_ParamLimits

0xf5d1,	// (0x0005c190) list_double_pane_t

0x4a3d,	// (0x000515fc) list_double2_pane_g1_ParamLimits

0x4a3d,	// (0x000515fc) list_double2_pane_g1

0x3aeb,	// (0x000506aa) list_double2_pane_g2_ParamLimits

0x3aeb,	// (0x000506aa) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x0005c195) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x0005c195) list_double2_pane_g

0x4a4e,	// (0x0005160d) list_double2_pane_t1_ParamLimits

0x4a4e,	// (0x0005160d) list_double2_pane_t1

0x4a64,	// (0x00051623) list_double2_pane_t2_ParamLimits

0x4a64,	// (0x00051623) list_double2_pane_t2

0x0001,

0xf5db,	// (0x0005c19a) list_double2_pane_t_ParamLimits

0xf5db,	// (0x0005c19a) list_double2_pane_t

0x80be,	// (0x00054c7d) list_double_number_pane_g1_ParamLimits

0x80be,	// (0x00054c7d) list_double_number_pane_g1

0x80ca,	// (0x00054c89) list_double_number_pane_g2_ParamLimits

0x80ca,	// (0x00054c89) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x0005c18b) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x0005c18b) list_double_number_pane_g

0x4a76,	// (0x00051635) list_double_number_pane_t1_ParamLimits

0x4a76,	// (0x00051635) list_double_number_pane_t1

0x4a88,	// (0x00051647) list_double_number_pane_t2_ParamLimits

0x4a88,	// (0x00051647) list_double_number_pane_t2

0x4a9e,	// (0x0005165d) list_double_number_pane_t3_ParamLimits

0x4a9e,	// (0x0005165d) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x0005c19f) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x0005c19f) list_double_number_pane_t

0x4ab0,	// (0x0005166f) list_double_graphic_pane_g1_ParamLimits

0x4ab0,	// (0x0005166f) list_double_graphic_pane_g1

0x80d6,	// (0x00054c95) list_double_graphic_pane_g2_ParamLimits

0x80d6,	// (0x00054c95) list_double_graphic_pane_g2

0x80e5,	// (0x00054ca4) list_double_graphic_pane_g3_ParamLimits

0x80e5,	// (0x00054ca4) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x0005c1a6) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x0005c1a6) list_double_graphic_pane_g

0x4ac8,	// (0x00051687) list_double_graphic_pane_t1_ParamLimits

0x4ac8,	// (0x00051687) list_double_graphic_pane_t1

0x4ade,	// (0x0005169d) list_double_graphic_pane_t2_ParamLimits

0x4ade,	// (0x0005169d) list_double_graphic_pane_t2

0x0001,

0xf5f0,	// (0x0005c1af) list_double_graphic_pane_t_ParamLimits

0xf5f0,	// (0x0005c1af) list_double_graphic_pane_t

0x3adf,	// (0x0005069e) list_double2_graphic_pane_g1_ParamLimits

0x3adf,	// (0x0005069e) list_double2_graphic_pane_g1

0x8494,	// (0x00055053) list_double2_graphic_pane_g2_ParamLimits

0x8494,	// (0x00055053) list_double2_graphic_pane_g2

0x80f1,	// (0x00054cb0) list_double2_graphic_pane_g3_ParamLimits

0x80f1,	// (0x00054cb0) list_double2_graphic_pane_g3

0x0002,

0xf5f5,	// (0x0005c1b4) list_double2_graphic_pane_g_ParamLimits

0xf5f5,	// (0x0005c1b4) list_double2_graphic_pane_g

0x3ac9,	// (0x00050688) list_double2_graphic_pane_t1_ParamLimits

0x3ac9,	// (0x00050688) list_double2_graphic_pane_t1

0x4af0,	// (0x000516af) list_double2_graphic_pane_t2_ParamLimits

0x4af0,	// (0x000516af) list_double2_graphic_pane_t2

0x0001,

0xf5fc,	// (0x0005c1bb) list_double2_graphic_pane_t_ParamLimits

0xf5fc,	// (0x0005c1bb) list_double2_graphic_pane_t

0x4b02,	// (0x000516c1) list_double_large_graphic_pane_g1_ParamLimits

0x4b02,	// (0x000516c1) list_double_large_graphic_pane_g1

0x4b15,	// (0x000516d4) list_double_large_graphic_pane_g2_ParamLimits

0x4b15,	// (0x000516d4) list_double_large_graphic_pane_g2

0x80ca,	// (0x00054c89) list_double_large_graphic_pane_g3_ParamLimits

0x80ca,	// (0x00054c89) list_double_large_graphic_pane_g3

0x4b2b,	// (0x000516ea) list_double_large_graphic_pane_g4_ParamLimits

0x4b2b,	// (0x000516ea) list_double_large_graphic_pane_g4

0x0004,

0xf601,	// (0x0005c1c0) list_double_large_graphic_pane_g_ParamLimits

0xf601,	// (0x0005c1c0) list_double_large_graphic_pane_g

0x4b3c,	// (0x000516fb) list_double_large_graphic_pane_t1_ParamLimits

0x4b3c,	// (0x000516fb) list_double_large_graphic_pane_t1

0x4b55,	// (0x00051714) list_double_large_graphic_pane_t2_ParamLimits

0x4b55,	// (0x00051714) list_double_large_graphic_pane_t2

0x0001,

0xf60c,	// (0x0005c1cb) list_double_large_graphic_pane_t_ParamLimits

0xf60c,	// (0x0005c1cb) list_double_large_graphic_pane_t

0x4b67,	// (0x00051726) list_double2_large_graphic_pane_g1_ParamLimits

0x4b67,	// (0x00051726) list_double2_large_graphic_pane_g1

0x4b73,	// (0x00051732) list_double2_large_graphic_pane_g2_ParamLimits

0x4b73,	// (0x00051732) list_double2_large_graphic_pane_g2

0x80f1,	// (0x00054cb0) list_double2_large_graphic_pane_g3_ParamLimits

0x80f1,	// (0x00054cb0) list_double2_large_graphic_pane_g3

0x0002,

0xf611,	// (0x0005c1d0) list_double2_large_graphic_pane_g_ParamLimits

0xf611,	// (0x0005c1d0) list_double2_large_graphic_pane_g

0x4b84,	// (0x00051743) list_double2_large_graphic_pane_t1_ParamLimits

0x4b84,	// (0x00051743) list_double2_large_graphic_pane_t1

0x4b9a,	// (0x00051759) list_double2_large_graphic_pane_t2_ParamLimits

0x4b9a,	// (0x00051759) list_double2_large_graphic_pane_t2

0x0001,

0xf618,	// (0x0005c1d7) list_double2_large_graphic_pane_t_ParamLimits

0xf618,	// (0x0005c1d7) list_double2_large_graphic_pane_t

0x4bac,	// (0x0005176b) list_double_heading_pane_g1_ParamLimits

0x4bac,	// (0x0005176b) list_double_heading_pane_g1

0x4bbd,	// (0x0005177c) list_double_heading_pane_g2_ParamLimits

0x4bbd,	// (0x0005177c) list_double_heading_pane_g2

0x0001,

0xf61d,	// (0x0005c1dc) list_double_heading_pane_g_ParamLimits

0xf61d,	// (0x0005c1dc) list_double_heading_pane_g

0x4bc9,	// (0x00051788) list_double_heading_pane_t1_ParamLimits

0x4bc9,	// (0x00051788) list_double_heading_pane_t1

0x4a64,	// (0x00051623) list_double_heading_pane_t2_ParamLimits

0x4a64,	// (0x00051623) list_double_heading_pane_t2

0x0001,

0xf622,	// (0x0005c1e1) list_double_heading_pane_t_ParamLimits

0xf622,	// (0x0005c1e1) list_double_heading_pane_t

0x3af7,	// (0x000506b6) list_double_graphic_heading_pane_g1_ParamLimits

0x3af7,	// (0x000506b6) list_double_graphic_heading_pane_g1

0x4bac,	// (0x0005176b) list_double_graphic_heading_pane_g2_ParamLimits

0x4bac,	// (0x0005176b) list_double_graphic_heading_pane_g2

0x4bbd,	// (0x0005177c) list_double_graphic_heading_pane_g3_ParamLimits

0x4bbd,	// (0x0005177c) list_double_graphic_heading_pane_g3

0x0002,

0xf627,	// (0x0005c1e6) list_double_graphic_heading_pane_g_ParamLimits

0xf627,	// (0x0005c1e6) list_double_graphic_heading_pane_g

0x4bdf,	// (0x0005179e) list_double_graphic_heading_pane_t1_ParamLimits

0x4bdf,	// (0x0005179e) list_double_graphic_heading_pane_t1

0x4af0,	// (0x000516af) list_double_graphic_heading_pane_t2_ParamLimits

0x4af0,	// (0x000516af) list_double_graphic_heading_pane_t2

0x0001,

0xf62e,	// (0x0005c1ed) list_double_graphic_heading_pane_t_ParamLimits

0xf62e,	// (0x0005c1ed) list_double_graphic_heading_pane_t

0x4bf5,	// (0x000517b4) list_double_time_pane_g1_ParamLimits

0x4bf5,	// (0x000517b4) list_double_time_pane_g1

0x4c06,	// (0x000517c5) list_double_time_pane_g2_ParamLimits

0x4c06,	// (0x000517c5) list_double_time_pane_g2

0x0001,

0xf633,	// (0x0005c1f2) list_double_time_pane_g_ParamLimits

0xf633,	// (0x0005c1f2) list_double_time_pane_g

0x4c12,	// (0x000517d1) list_double_time_pane_t1_ParamLimits

0x4c12,	// (0x000517d1) list_double_time_pane_t1

0x4c28,	// (0x000517e7) list_double_time_pane_t2_ParamLimits

0x4c28,	// (0x000517e7) list_double_time_pane_t2

0x4c3a,	// (0x000517f9) list_double_time_pane_t3_ParamLimits

0x4c3a,	// (0x000517f9) list_double_time_pane_t3

0x4c4c,	// (0x0005180b) list_double_time_pane_t4_ParamLimits

0x4c4c,	// (0x0005180b) list_double_time_pane_t4

0x0003,

0xf638,	// (0x0005c1f7) list_double_time_pane_t_ParamLimits

0xf638,	// (0x0005c1f7) list_double_time_pane_t

0x4c5e,	// (0x0005181d) list_setting_pane_g1_ParamLimits

0x4c5e,	// (0x0005181d) list_setting_pane_g1

0x4c6a,	// (0x00051829) list_setting_pane_g2_ParamLimits

0x4c6a,	// (0x00051829) list_setting_pane_g2

0x0001,

0xf641,	// (0x0005c200) list_setting_pane_g_ParamLimits

0xf641,	// (0x0005c200) list_setting_pane_g

0x4c76,	// (0x00051835) list_setting_pane_t1_ParamLimits

0x4c76,	// (0x00051835) list_setting_pane_t1

0x4c90,	// (0x0005184f) list_setting_pane_t2_ParamLimits

0x4c90,	// (0x0005184f) list_setting_pane_t2

0x0002,

0xf646,	// (0x0005c205) list_setting_pane_t_ParamLimits

0xf646,	// (0x0005c205) list_setting_pane_t

0x4ccf,	// (0x0005188e) set_value_pane_cp_ParamLimits

0x4ccf,	// (0x0005188e) set_value_pane_cp

0x4cdb,	// (0x0005189a) list_setting_number_pane_g1_ParamLimits

0x4cdb,	// (0x0005189a) list_setting_number_pane_g1

0x4ce7,	// (0x000518a6) list_setting_number_pane_g2_ParamLimits

0x4ce7,	// (0x000518a6) list_setting_number_pane_g2

0x0001,

0xf64d,	// (0x0005c20c) list_setting_number_pane_g_ParamLimits

0xf64d,	// (0x0005c20c) list_setting_number_pane_g

0x4cf3,	// (0x000518b2) list_setting_number_pane_t1_ParamLimits

0x4cf3,	// (0x000518b2) list_setting_number_pane_t1

0x4d0c,	// (0x000518cb) list_setting_number_pane_t2_ParamLimits

0x4d0c,	// (0x000518cb) list_setting_number_pane_t2

0x4d26,	// (0x000518e5) list_setting_number_pane_t3_ParamLimits

0x4d26,	// (0x000518e5) list_setting_number_pane_t3

0x0003,

0xf652,	// (0x0005c211) list_setting_number_pane_t_ParamLimits

0xf652,	// (0x0005c211) list_setting_number_pane_t

0x4ccf,	// (0x0005188e) set_value_pane_ParamLimits

0x4ccf,	// (0x0005188e) set_value_pane

0x84a0,	// (0x0005505f) bg_set_opt_pane_ParamLimits

0x84a0,	// (0x0005505f) bg_set_opt_pane

0x4d69,	// (0x00051928) set_value_pane_t1

0x84c1,	// (0x00055080) slider_set_pane_cp3

0x84ca,	// (0x00055089) volume_small_pane_cp

0x84d3,	// (0x00055092) list_form_gen_pane

0x84dc,	// (0x0005509b) scroll_pane_cp8

0x4d7f,	// (0x0005193e) form_field_data_pane_ParamLimits

0x4d7f,	// (0x0005193e) form_field_data_pane

0x4da3,	// (0x00051962) form_field_data_wide_pane_ParamLimits

0x4da3,	// (0x00051962) form_field_data_wide_pane

0x4dc6,	// (0x00051985) form_field_popup_pane_ParamLimits

0x4dc6,	// (0x00051985) form_field_popup_pane

0x4de6,	// (0x000519a5) form_field_popup_wide_pane_ParamLimits

0x4de6,	// (0x000519a5) form_field_popup_wide_pane

0x4e05,	// (0x000519c4) form_field_slider_pane_ParamLimits

0x4e05,	// (0x000519c4) form_field_slider_pane

0x4e18,	// (0x000519d7) form_field_slider_wide_pane_ParamLimits

0x4e18,	// (0x000519d7) form_field_slider_wide_pane

0x84ed,	// (0x000550ac) data_form_pane

0x4e35,	// (0x000519f4) form_field_data_pane_t1

0x84f9,	// (0x000550b8) input_focus_pane

0x4e4d,	// (0x00051a0c) data_form_wide_pane

0x4e6a,	// (0x00051a29) form_field_data_wide_pane_t1

0x7e47,	// (0x00054a06) input_focus_pane_cp6

0x4e8c,	// (0x00051a4b) form_field_popup_pane_t1

0x84f9,	// (0x000550b8) input_focus_pane_cp7

0x851b,	// (0x000550da) list_form_pane

0x4eac,	// (0x00051a6b) form_field_popup_wide_pane_t1

0x84f9,	// (0x000550b8) input_focus_pane_cp8

0x8527,	// (0x000550e6) list_form_wide_pane

0x4ec9,	// (0x00051a88) form_field_slider_pane_t1_ParamLimits

0x4ec9,	// (0x00051a88) form_field_slider_pane_t1

0x4edf,	// (0x00051a9e) form_field_slider_pane_t2_ParamLimits

0x4edf,	// (0x00051a9e) form_field_slider_pane_t2

0x0001,

0xf662,	// (0x0005c221) form_field_slider_pane_t_ParamLimits

0xf662,	// (0x0005c221) form_field_slider_pane_t

0x7ac4,	// (0x00054683) input_focus_pane_cp9_ParamLimits

0x7ac4,	// (0x00054683) input_focus_pane_cp9

0x4ef4,	// (0x00051ab3) slider_cont_pane_ParamLimits

0x4ef4,	// (0x00051ab3) slider_cont_pane

0x8533,	// (0x000550f2) form_field_slider_wide_pane_t1_ParamLimits

0x8533,	// (0x000550f2) form_field_slider_wide_pane_t1

0x4f08,	// (0x00051ac7) form_field_slider_wide_pane_t2_ParamLimits

0x4f08,	// (0x00051ac7) form_field_slider_wide_pane_t2

0x0001,

0xf667,	// (0x0005c226) form_field_slider_wide_pane_t_ParamLimits

0xf667,	// (0x0005c226) form_field_slider_wide_pane_t

0x7ac4,	// (0x00054683) input_focus_pane_cp10_ParamLimits

0x7ac4,	// (0x00054683) input_focus_pane_cp10

0x4f1a,	// (0x00051ad9) slider_cont_pane_cp1_ParamLimits

0x4f1a,	// (0x00051ad9) slider_cont_pane_cp1

0x4f2e,	// (0x00051aed) slider_form_pane_cp

0x8545,	// (0x00055104) input_focus_pane_g1

0x854d,	// (0x0005510c) input_focus_pane_g2

0x8555,	// (0x00055114) input_focus_pane_g3

0x855d,	// (0x0005511c) input_focus_pane_g4

0x8565,	// (0x00055124) input_focus_pane_g5

0x856d,	// (0x0005512c) input_focus_pane_g6

0x8575,	// (0x00055134) input_focus_pane_g7

0x857d,	// (0x0005513c) input_focus_pane_g8

0x8585,	// (0x00055144) input_focus_pane_g9

0x2847,	// (0x0004f406) input_focus_pane_g10

0x0009,

0xf66c,	// (0x0005c22b) input_focus_pane_g

0xa016,	// (0x00056bd5) wait_border_pane_g3_copy1

0x4f36,	// (0x00051af5) data_form_pane_t1

0x2847,	// (0x0004f406) wait_anim_pane_g1_copy1

0x607f,	// (0x00052c3e) data_form_wide_pane_t1

0x4f51,	// (0x00051b10) list_form_graphic_pane_cp_ParamLimits

0x4f51,	// (0x00051b10) list_form_graphic_pane_cp

0xaf36,	// (0x00057af5) slider_form_pane_g1

0xaf3f,	// (0x00057afe) slider_form_pane_g2

0x0006,

0xf96a,	// (0x0005c529) slider_form_pane_g

0x4f6a,	// (0x00051b29) list_form_graphic_pane_ParamLimits

0x4f6a,	// (0x00051b29) list_form_graphic_pane

0x4f86,	// (0x00051b45) list_form_graphic_pane_g1

0x4f8e,	// (0x00051b4d) list_form_graphic_pane_t1_ParamLimits

0x4f8e,	// (0x00051b4d) list_form_graphic_pane_t1

0x7849,	// (0x00054408) list_highlight_pane_cp5_ParamLimits

0x7849,	// (0x00054408) list_highlight_pane_cp5

0x4fa3,	// (0x00051b62) find_pane_g1

0x858d,	// (0x0005514c) input_find_pane

0x4fac,	// (0x00051b6b) input_find_pane_g1_ParamLimits

0x4fac,	// (0x00051b6b) input_find_pane_g1

0x4fb8,	// (0x00051b77) input_find_pane_t1_ParamLimits

0x4fb8,	// (0x00051b77) input_find_pane_t1

0x4fcd,	// (0x00051b8c) input_find_pane_t2_ParamLimits

0x4fcd,	// (0x00051b8c) input_find_pane_t2

0x0001,

0xf681,	// (0x0005c240) input_find_pane_t_ParamLimits

0xf681,	// (0x0005c240) input_find_pane_t

0x8596,	// (0x00055155) input_focus_pane_cp5_ParamLimits

0x8596,	// (0x00055155) input_focus_pane_cp5

0x85b5,	// (0x00055174) bg_popup_window_pane_cp2_ParamLimits

0x85b5,	// (0x00055174) bg_popup_window_pane_cp2

0x85c2,	// (0x00055181) listscroll_menu_pane_ParamLimits

0x85c2,	// (0x00055181) listscroll_menu_pane

0x85ce,	// (0x0005518d) popup_submenu_window_ParamLimits

0x85ce,	// (0x0005518d) popup_submenu_window

0x85fa,	// (0x000551b9) find_popup_pane_g1

0x8602,	// (0x000551c1) input_popup_find_pane_cp

0x860c,	// (0x000551cb) input_focus_pane_cp4_ParamLimits

0x860c,	// (0x000551cb) input_focus_pane_cp4

0x8626,	// (0x000551e5) input_popup_find_pane_t1_ParamLimits

0x8626,	// (0x000551e5) input_popup_find_pane_t1

0x7769,	// (0x00054328) bg_popup_sub_pane_cp

0x8654,	// (0x00055213) listscroll_popup_sub_pane

0x865c,	// (0x0005521b) list_submenu_pane_ParamLimits

0x865c,	// (0x0005521b) list_submenu_pane

0x866d,	// (0x0005522c) scroll_pane_cp4

0x8675,	// (0x00055234) list_single_popup_submenu_pane_ParamLimits

0x8675,	// (0x00055234) list_single_popup_submenu_pane

0x8689,	// (0x00055248) list_single_popup_submenu_pane_g1

0x8691,	// (0x00055250) list_single_popup_submenu_pane_t1_ParamLimits

0x8691,	// (0x00055250) list_single_popup_submenu_pane_t1

0x7849,	// (0x00054408) bg_active_tab_pane_cp1_ParamLimits

0x7849,	// (0x00054408) bg_active_tab_pane_cp1

0x86a6,	// (0x00055265) tabs_2_active_pane_g1

0x86ae,	// (0x0005526d) tabs_2_active_pane_t1

0x7849,	// (0x00054408) bg_passive_tab_pane_cp1_ParamLimits

0x7849,	// (0x00054408) bg_passive_tab_pane_cp1

0x86a6,	// (0x00055265) tabs_2_passive_pane_g1

0x86ae,	// (0x0005526d) tabs_2_passive_pane_t1

0x86c0,	// (0x0005527f) bg_active_tab_pane_cp4

0x86ce,	// (0x0005528d) tabs_2_long_active_pane_t1

0x86e1,	// (0x000552a0) bg_passive_tab_pane_cp4

0x5c8d,	// (0x0005284c) list_single_midp_graphic_pane_g4_ParamLimits

0x86c0,	// (0x0005527f) bg_active_tab_pane_cp5

0x86ed,	// (0x000552ac) tabs_3_long_active_pane_t1

0x86e1,	// (0x000552a0) bg_passive_tab_pane_cp5

0x5c8d,	// (0x0005284c) list_single_midp_graphic_pane_g4

0x7849,	// (0x00054408) bg_popup_window_pane_cp13_ParamLimits

0x7849,	// (0x00054408) bg_popup_window_pane_cp13

0x8708,	// (0x000552c7) listscroll_popup_fast_pane_ParamLimits

0x8708,	// (0x000552c7) listscroll_popup_fast_pane

0x8717,	// (0x000552d6) grid_popup_fast_pane_ParamLimits

0x8717,	// (0x000552d6) grid_popup_fast_pane

0x8729,	// (0x000552e8) scroll_pane_cp9_ParamLimits

0x8729,	// (0x000552e8) scroll_pane_cp9

0xc85f,	// (0x0005941e) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc85f,	// (0x0005941e) list_single_graphic_hl_pane_t1_cp2

0x874d,	// (0x0005530c) input_focus_pane_cp20_ParamLimits

0x874d,	// (0x0005530c) input_focus_pane_cp20

0x875b,	// (0x0005531a) query_popup_data_pane_t1_ParamLimits

0x875b,	// (0x0005531a) query_popup_data_pane_t1

0x876e,	// (0x0005532d) query_popup_data_pane_t2_ParamLimits

0x876e,	// (0x0005532d) query_popup_data_pane_t2

0x87b4,	// (0x00055373) query_popup_data_pane_t3_ParamLimits

0x87b4,	// (0x00055373) query_popup_data_pane_t3

0x87f5,	// (0x000553b4) query_popup_data_pane_t4_ParamLimits

0x87f5,	// (0x000553b4) query_popup_data_pane_t4

0x8831,	// (0x000553f0) query_popup_data_pane_t5_ParamLimits

0x8831,	// (0x000553f0) query_popup_data_pane_t5

0x0004,

0xf686,	// (0x0005c245) query_popup_data_pane_t_ParamLimits

0xf686,	// (0x0005c245) query_popup_data_pane_t

0x8545,	// (0x00055104) bg_set_opt_pane_g1

0x854d,	// (0x0005510c) bg_set_opt_pane_g2

0x8555,	// (0x00055114) bg_set_opt_pane_g3

0x855d,	// (0x0005511c) bg_set_opt_pane_g4

0x8565,	// (0x00055124) bg_set_opt_pane_g5

0x856d,	// (0x0005512c) bg_set_opt_pane_g6

0x8575,	// (0x00055134) bg_set_opt_pane_g7

0x857d,	// (0x0005513c) bg_set_opt_pane_g8

0x8585,	// (0x00055144) bg_set_opt_pane_g9

0x0008,

0xf691,	// (0x0005c250) bg_set_opt_pane_g

0x52ed,	// (0x00051eac) control_top_pane_stacon_ParamLimits

0x52ed,	// (0x00051eac) control_top_pane_stacon

0x5340,	// (0x00051eff) signal_pane_stacon_ParamLimits

0x5340,	// (0x00051eff) signal_pane_stacon

0x8e3c,	// (0x000559fb) stacon_top_pane_g1_ParamLimits

0x8e3c,	// (0x000559fb) stacon_top_pane_g1

0x5365,	// (0x00051f24) title_pane_stacon_ParamLimits

0x5365,	// (0x00051f24) title_pane_stacon

0x538f,	// (0x00051f4e) uni_indicator_pane_stacon_ParamLimits

0x538f,	// (0x00051f4e) uni_indicator_pane_stacon

0x53a4,	// (0x00051f63) battery_pane_stacon_ParamLimits

0x53a4,	// (0x00051f63) battery_pane_stacon

0x53e8,	// (0x00051fa7) control_bottom_pane_stacon_ParamLimits

0x53e8,	// (0x00051fa7) control_bottom_pane_stacon

0x540b,	// (0x00051fca) navi_pane_stacon_ParamLimits

0x540b,	// (0x00051fca) navi_pane_stacon

0x8e5e,	// (0x00055a1d) stacon_bottom_pane_g1_ParamLimits

0x8e5e,	// (0x00055a1d) stacon_bottom_pane_g1

0x4fe2,	// (0x00051ba1) aid_levels_signal_lsc_ParamLimits

0x4fe2,	// (0x00051ba1) aid_levels_signal_lsc

0x4ff8,	// (0x00051bb7) signal_pane_stacon_g1_ParamLimits

0x4ff8,	// (0x00051bb7) signal_pane_stacon_g1

0x500c,	// (0x00051bcb) signal_pane_stacon_g2_ParamLimits

0x500c,	// (0x00051bcb) signal_pane_stacon_g2

0x0001,

0xf6a4,	// (0x0005c263) signal_pane_stacon_g_ParamLimits

0xf6a4,	// (0x0005c263) signal_pane_stacon_g

0x5041,	// (0x00051c00) title_pane_stacon_t1_ParamLimits

0x5041,	// (0x00051c00) title_pane_stacon_t1

0x8875,	// (0x00055434) uni_indicator_pane_stacon_g1

0x887f,	// (0x0005543e) uni_indicator_pane_stacon_g2

0x8889,	// (0x00055448) uni_indicator_pane_stacon_g3

0x8893,	// (0x00055452) uni_indicator_pane_stacon_g4

0x0003,

0xf6b0,	// (0x0005c26f) uni_indicator_pane_stacon_g

0x5066,	// (0x00051c25) control_top_pane_stacon_g1

0x506e,	// (0x00051c2d) control_top_pane_stacon_t1_ParamLimits

0x506e,	// (0x00051c2d) control_top_pane_stacon_t1

0x50a5,	// (0x00051c64) aid_levels_battery_lsc_ParamLimits

0x50a5,	// (0x00051c64) aid_levels_battery_lsc

0x50bc,	// (0x00051c7b) battery_pane_stacon_g1_ParamLimits

0x50bc,	// (0x00051c7b) battery_pane_stacon_g1

0x50cf,	// (0x00051c8e) battery_pane_stacon_g2_ParamLimits

0x50cf,	// (0x00051c8e) battery_pane_stacon_g2

0x0001,

0xf6b9,	// (0x0005c278) battery_pane_stacon_g_ParamLimits

0xf6b9,	// (0x0005c278) battery_pane_stacon_g

0x510d,	// (0x00051ccc) navi_icon_pane_stacon

0x5121,	// (0x00051ce0) navi_navi_pane_stacon

0x510d,	// (0x00051ccc) navi_text_pane_stacon

0x5066,	// (0x00051c25) control_bottom_pane_stacon_g1

0x5135,	// (0x00051cf4) control_bottom_pane_stacon_t1_ParamLimits

0x5135,	// (0x00051cf4) control_bottom_pane_stacon_t1

0x88b7,	// (0x00055476) grid_app_pane_ParamLimits

0x88b7,	// (0x00055476) grid_app_pane

0x88d9,	// (0x00055498) scroll_pane_cp15_ParamLimits

0x88d9,	// (0x00055498) scroll_pane_cp15

0x88ec,	// (0x000554ab) cell_app_pane_ParamLimits

0x88ec,	// (0x000554ab) cell_app_pane

0x8914,	// (0x000554d3) cell_app_pane_g1_ParamLimits

0x8914,	// (0x000554d3) cell_app_pane_g1

0x8938,	// (0x000554f7) cell_app_pane_g2_ParamLimits

0x8938,	// (0x000554f7) cell_app_pane_g2

0x0001,

0xf6be,	// (0x0005c27d) cell_app_pane_g_ParamLimits

0xf6be,	// (0x0005c27d) cell_app_pane_g

0x8944,	// (0x00055503) cell_app_pane_t1_ParamLimits

0x8944,	// (0x00055503) cell_app_pane_t1

0x895b,	// (0x0005551a) grid_highlight_pane_ParamLimits

0x895b,	// (0x0005551a) grid_highlight_pane

0x8545,	// (0x00055104) cell_highlight_pane_g1

0x854d,	// (0x0005510c) cell_highlight_pane_g2

0x8555,	// (0x00055114) cell_highlight_pane_g3

0x855d,	// (0x0005511c) cell_highlight_pane_g4

0x8565,	// (0x00055124) cell_highlight_pane_g5

0x856d,	// (0x0005512c) cell_highlight_pane_g6

0x8575,	// (0x00055134) cell_highlight_pane_g7

0x857d,	// (0x0005513c) cell_highlight_pane_g8

0x8585,	// (0x00055144) cell_highlight_pane_g9

0x2847,	// (0x0004f406) cell_highlight_pane_g10

0x0009,

0xf66c,	// (0x0005c22b) cell_highlight_pane_g

0x896c,	// (0x0005552b) bg_scroll_pane

0x517f,	// (0x00051d3e) scroll_handle_pane

0x89b3,	// (0x00055572) scroll_bg_pane_g1

0x89c8,	// (0x00055587) scroll_bg_pane_g2

0x89e0,	// (0x0005559f) scroll_bg_pane_g3

0x0002,

0xf6c3,	// (0x0005c282) scroll_bg_pane_g

0x89f5,	// (0x000555b4) scroll_handle_focus_pane_ParamLimits

0x89f5,	// (0x000555b4) scroll_handle_focus_pane

0x89b3,	// (0x00055572) scroll_handle_pane_g1

0x8a02,	// (0x000555c1) scroll_handle_pane_g2

0x89e0,	// (0x0005559f) scroll_handle_pane_g3

0x0002,

0xf6ca,	// (0x0005c289) scroll_handle_pane_g

0x860c,	// (0x000551cb) bg_popup_sub_pane_cp21_ParamLimits

0x860c,	// (0x000551cb) bg_popup_sub_pane_cp21

0x8a16,	// (0x000555d5) popup_fep_japan_predictive_window_t1_ParamLimits

0x8a16,	// (0x000555d5) popup_fep_japan_predictive_window_t1

0x8a30,	// (0x000555ef) popup_fep_japan_predictive_window_t2_ParamLimits

0x8a30,	// (0x000555ef) popup_fep_japan_predictive_window_t2

0x8a63,	// (0x00055622) popup_fep_japan_predictive_window_t3_ParamLimits

0x8a63,	// (0x00055622) popup_fep_japan_predictive_window_t3

0x0002,

0xf6d1,	// (0x0005c290) popup_fep_japan_predictive_window_t_ParamLimits

0xf6d1,	// (0x0005c290) popup_fep_japan_predictive_window_t

0x7769,	// (0x00054328) bg_popup_sub_pane_cp23

0x8a9a,	// (0x00055659) listscroll_japin_cand_pane

0x8aa2,	// (0x00055661) popup_fep_japan_candidate_window_t1

0x8ab0,	// (0x0005566f) candidate_pane_ParamLimits

0x8ab0,	// (0x0005566f) candidate_pane

0x8ac2,	// (0x00055681) scroll_pane_cp30

0x8aca,	// (0x00055689) list_single_popup_jap_candidate_pane_ParamLimits

0x8aca,	// (0x00055689) list_single_popup_jap_candidate_pane

0x7769,	// (0x00054328) list_highlight_pane_cp30

0x8adf,	// (0x0005569e) list_single_popup_jap_candidate_pane_t1

0x8aee,	// (0x000556ad) level_1_signal

0x8b00,	// (0x000556bf) level_2_signal

0x8b13,	// (0x000556d2) level_3_signal

0x8b26,	// (0x000556e5) level_4_signal

0x8b39,	// (0x000556f8) level_5_signal

0x8b4c,	// (0x0005570b) level_6_signal

0x8b5f,	// (0x0005571e) level_7_signal

0x8aee,	// (0x000556ad) level_1_battery

0x8b00,	// (0x000556bf) level_2_battery

0x8b13,	// (0x000556d2) level_3_battery

0x8b26,	// (0x000556e5) level_4_battery

0x8b39,	// (0x000556f8) level_5_battery

0x8b4c,	// (0x0005570b) level_6_battery

0x8b5f,	// (0x0005571e) level_7_battery

0x8b8a,	// (0x00055749) list_menu_pane_ParamLimits

0x8b8a,	// (0x00055749) list_menu_pane

0x8ba0,	// (0x0005575f) scroll_pane_cp25_ParamLimits

0x8ba0,	// (0x0005575f) scroll_pane_cp25

0x8bb9,	// (0x00055778) list_double2_graphic_pane_cp2_ParamLimits

0x8bb9,	// (0x00055778) list_double2_graphic_pane_cp2

0x8bb9,	// (0x00055778) list_double2_large_graphic_pane_cp2_ParamLimits

0x8bb9,	// (0x00055778) list_double2_large_graphic_pane_cp2

0x8bb9,	// (0x00055778) list_double2_pane_cp2_ParamLimits

0x8bb9,	// (0x00055778) list_double2_pane_cp2

0x8bb9,	// (0x00055778) list_double_graphic_pane_cp2_ParamLimits

0x8bb9,	// (0x00055778) list_double_graphic_pane_cp2

0x8bb9,	// (0x00055778) list_double_large_graphic_pane_cp2_ParamLimits

0x8bb9,	// (0x00055778) list_double_large_graphic_pane_cp2

0x8bb9,	// (0x00055778) list_double_number_pane_cp2_ParamLimits

0x8bb9,	// (0x00055778) list_double_number_pane_cp2

0x8bb9,	// (0x00055778) list_double_pane_cp2_ParamLimits

0x8bb9,	// (0x00055778) list_double_pane_cp2

0x8bdd,	// (0x0005579c) list_single_2graphic_pane_cp2_ParamLimits

0x8bdd,	// (0x0005579c) list_single_2graphic_pane_cp2

0x8bdd,	// (0x0005579c) list_single_graphic_heading_pane_cp2_ParamLimits

0x8bdd,	// (0x0005579c) list_single_graphic_heading_pane_cp2

0x8bdd,	// (0x0005579c) list_single_graphic_pane_cp2_ParamLimits

0x8bdd,	// (0x0005579c) list_single_graphic_pane_cp2

0x8bdd,	// (0x0005579c) list_single_heading_pane_cp2_ParamLimits

0x8bdd,	// (0x0005579c) list_single_heading_pane_cp2

0x8bf6,	// (0x000557b5) list_single_large_graphic_pane_cp2_ParamLimits

0x8bf6,	// (0x000557b5) list_single_large_graphic_pane_cp2

0x8bdd,	// (0x0005579c) list_single_number_heading_pane_cp2_ParamLimits

0x8bdd,	// (0x0005579c) list_single_number_heading_pane_cp2

0x8bdd,	// (0x0005579c) list_single_number_pane_cp2_ParamLimits

0x8bdd,	// (0x0005579c) list_single_number_pane_cp2

0x8c07,	// (0x000557c6) list_single_pane_cp2_ParamLimits

0x8c07,	// (0x000557c6) list_single_pane_cp2

0x8c8b,	// (0x0005584a) bg_popup_sub_pane_cp22

0x5231,	// (0x00051df0) popup_side_volume_key_window_g1

0x525b,	// (0x00051e1a) popup_side_volume_key_window_t1

0x5277,	// (0x00051e36) volume_small_pane_cp1

0x7ac4,	// (0x00054683) bg_popup_sub_pane_cp24_ParamLimits

0x7ac4,	// (0x00054683) bg_popup_sub_pane_cp24

0x8ca1,	// (0x00055860) fep_china_uni_candidate_pane_ParamLimits

0x8ca1,	// (0x00055860) fep_china_uni_candidate_pane

0x8cb5,	// (0x00055874) fep_china_uni_entry_pane

0x8cc5,	// (0x00055884) popup_fep_china_uni_window_g1

0x8ce1,	// (0x000558a0) fep_china_uni_entry_pane_g1

0x8ce9,	// (0x000558a8) fep_china_uni_entry_pane_g2

0x0001,

0xf702,	// (0x0005c2c1) fep_china_uni_entry_pane_g

0x8cf1,	// (0x000558b0) fep_entry_item_pane

0x8cfb,	// (0x000558ba) fep_candidate_item_pane

0x8d03,	// (0x000558c2) fep_china_uni_candidate_pane_g1

0x8d0b,	// (0x000558ca) fep_china_uni_candidate_pane_g2

0x8d13,	// (0x000558d2) fep_china_uni_candidate_pane_g3

0x8d1b,	// (0x000558da) fep_china_uni_candidate_pane_g4

0x0003,

0xf707,	// (0x0005c2c6) fep_china_uni_candidate_pane_g

0x2847,	// (0x0004f406) fep_entry_item_pane_g1

0x8d23,	// (0x000558e2) fep_entry_item_pane_t1_ParamLimits

0x8d23,	// (0x000558e2) fep_entry_item_pane_t1

0x8d39,	// (0x000558f8) fep_candidate_item_pane_t1_ParamLimits

0x8d39,	// (0x000558f8) fep_candidate_item_pane_t1

0x8d4e,	// (0x0005590d) fep_candidate_item_pane_t2_ParamLimits

0x8d4e,	// (0x0005590d) fep_candidate_item_pane_t2

0x0001,

0xf710,	// (0x0005c2cf) fep_candidate_item_pane_t_ParamLimits

0xf710,	// (0x0005c2cf) fep_candidate_item_pane_t

0x7849,	// (0x00054408) list_highlight_pane_cp31_ParamLimits

0x7849,	// (0x00054408) list_highlight_pane_cp31

0x8d60,	// (0x0005591f) level_1_signal_lsc

0x8d69,	// (0x00055928) level_2_signal_lsc

0x8d72,	// (0x00055931) level_3_signal_lsc

0x8d7b,	// (0x0005593a) level_4_signal_lsc

0x8d84,	// (0x00055943) level_5_signal_lsc

0x8d8d,	// (0x0005594c) level_6_signal_lsc

0x8d96,	// (0x00055955) level_7_signal_lsc

0x8d96,	// (0x00055955) level_1_battery_lsc

0x8d9f,	// (0x0005595e) level_2_battery_lsc

0x8da8,	// (0x00055967) level_3_battery_lsc

0x8db1,	// (0x00055970) level_4_battery_lsc

0x8dba,	// (0x00055979) level_5_battery_lsc

0x8dc3,	// (0x00055982) level_6_battery_lsc

0x8d60,	// (0x0005591f) level_7_battery_lsc

0x8dcc,	// (0x0005598b) scroll_handle_focus_pane_g1

0x8dd5,	// (0x00055994) scroll_handle_focus_pane_g2

0x8dde,	// (0x0005599d) scroll_handle_focus_pane_g3

0x0002,

0xf715,	// (0x0005c2d4) scroll_handle_focus_pane_g

0x527f,	// (0x00051e3e) list_single_2graphic_pane_g1_ParamLimits

0x527f,	// (0x00051e3e) list_single_2graphic_pane_g1

0x809b,	// (0x00054c5a) list_single_2graphic_pane_g2_ParamLimits

0x809b,	// (0x00054c5a) list_single_2graphic_pane_g2

0x807d,	// (0x00054c3c) list_single_2graphic_pane_g3_ParamLimits

0x807d,	// (0x00054c3c) list_single_2graphic_pane_g3

0x528b,	// (0x00051e4a) list_single_2graphic_pane_g4_ParamLimits

0x528b,	// (0x00051e4a) list_single_2graphic_pane_g4

0x0003,

0xf71c,	// (0x0005c2db) list_single_2graphic_pane_g_ParamLimits

0xf71c,	// (0x0005c2db) list_single_2graphic_pane_g

0x5297,	// (0x00051e56) list_single_2graphic_pane_t1_ParamLimits

0x5297,	// (0x00051e56) list_single_2graphic_pane_t1

0x8112,	// (0x00054cd1) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x8112,	// (0x00054cd1) list_double2_graphic_large_graphic_pane_g1

0x4b73,	// (0x00051732) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4b73,	// (0x00051732) list_double2_graphic_large_graphic_pane_g2

0x80f1,	// (0x00054cb0) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x80f1,	// (0x00054cb0) list_double2_graphic_large_graphic_pane_g3

0x8122,	// (0x00054ce1) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x8122,	// (0x00054ce1) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf725,	// (0x0005c2e4) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf725,	// (0x0005c2e4) list_double2_graphic_large_graphic_pane_g

0x52c5,	// (0x00051e84) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x52c5,	// (0x00051e84) list_double2_graphic_large_graphic_pane_t1

0x52db,	// (0x00051e9a) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x52db,	// (0x00051e9a) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf72e,	// (0x0005c2ed) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf72e,	// (0x0005c2ed) list_double2_graphic_large_graphic_pane_t

0x8f29,	// (0x00055ae8) popup_fast_swap_window_ParamLimits

0x8f29,	// (0x00055ae8) popup_fast_swap_window

0x8f45,	// (0x00055b04) popup_side_volume_key_window

0x8f61,	// (0x00055b20) stacon_top_pane

0x8f6b,	// (0x00055b2a) status_pane_ParamLimits

0x8f6b,	// (0x00055b2a) status_pane

0x18ce,	// (0x0004e48d) status_small_pane

0x7769,	// (0x00054328) control_pane

0x7769,	// (0x00054328) stacon_bottom_pane

0x84dc,	// (0x0005509b) scroll_pane_cp121

0x84d3,	// (0x00055092) set_content_pane

0x8de7,	// (0x000559a6) bg_active_tab_pane_g1_cp1

0x8df0,	// (0x000559af) bg_active_tab_pane_g2_cp1

0x8df9,	// (0x000559b8) bg_active_tab_pane_g3_cp1

0x8de7,	// (0x000559a6) bg_passive_tab_pane_g1_cp1

0x8df0,	// (0x000559af) bg_passive_tab_pane_g2_cp1

0x8df9,	// (0x000559b8) bg_passive_tab_pane_g3_cp1

0x8e02,	// (0x000559c1) bg_active_tab_pane_g1_cp2

0x8df0,	// (0x000559af) bg_active_tab_pane_g2_cp2

0x8e0b,	// (0x000559ca) bg_active_tab_pane_g3_cp2

0x8e02,	// (0x000559c1) bg_passive_tab_pane_g1_cp2

0x8df0,	// (0x000559af) bg_passive_tab_pane_g2_cp2

0x8e0b,	// (0x000559ca) bg_passive_tab_pane_g3_cp2

0x8e14,	// (0x000559d3) bg_active_tab_pane_g1_cp3

0x8df0,	// (0x000559af) bg_active_tab_pane_g2_cp3

0x8e1d,	// (0x000559dc) bg_active_tab_pane_g3_cp3

0x8e14,	// (0x000559d3) bg_passive_tab_pane_g1_cp3

0x8df0,	// (0x000559af) bg_passive_tab_pane_g2_cp3

0x8e1d,	// (0x000559dc) bg_passive_tab_pane_g3_cp3

0x8e26,	// (0x000559e5) bg_active_tab_pane_g1_cp4

0x8df0,	// (0x000559af) bg_active_tab_pane_g2_cp4

0x8e31,	// (0x000559f0) bg_active_tab_pane_g3_cp4

0x8e26,	// (0x000559e5) bg_passive_tab_pane_g1_cp4

0x8df0,	// (0x000559af) bg_passive_tab_pane_g2_cp4

0x8e31,	// (0x000559f0) bg_passive_tab_pane_g3_cp4

0x8e7a,	// (0x00055a39) bg_active_tab_pane_g1_cp5

0x8df0,	// (0x000559af) bg_active_tab_pane_g2_cp5

0x8e83,	// (0x00055a42) bg_active_tab_pane_g3_cp5

0x8e7a,	// (0x00055a39) bg_passive_tab_pane_g1_cp5

0x8df0,	// (0x000559af) bg_passive_tab_pane_g2_cp5

0x8e83,	// (0x00055a42) bg_passive_tab_pane_g3_cp5

0x8e8c,	// (0x00055a4b) list_set_graphic_pane_ParamLimits

0x8e8c,	// (0x00055a4b) list_set_graphic_pane

0x7769,	// (0x00054328) bg_set_opt_pane_cp4

0x8eac,	// (0x00055a6b) list_set_graphic_pane_g1_ParamLimits

0x8eac,	// (0x00055a6b) list_set_graphic_pane_g1

0x8eb8,	// (0x00055a77) list_set_graphic_pane_g2_ParamLimits

0x8eb8,	// (0x00055a77) list_set_graphic_pane_g2

0x0001,

0xf733,	// (0x0005c2f2) list_set_graphic_pane_g_ParamLimits

0xf733,	// (0x0005c2f2) list_set_graphic_pane_g

0x0009,

0xfaa3,	// (0x0005c662) volume_small_pane_cp_g

0x8edc,	// (0x00055a9b) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8edc,	// (0x00055a9b) list_double2_large_graphic_pane_g1_cp2

0x8ee8,	// (0x00055aa7) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8ee8,	// (0x00055aa7) list_double2_large_graphic_pane_g2_cp2

0x8ef9,	// (0x00055ab8) list_double2_large_graphic_pane_g3_cp2

0x8f01,	// (0x00055ac0) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8f01,	// (0x00055ac0) list_double2_large_graphic_pane_t1_cp2

0x8f17,	// (0x00055ad6) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8f17,	// (0x00055ad6) list_double2_large_graphic_pane_t2_cp2

0xaae9,	// (0x000576a8) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xaae9,	// (0x000576a8) list_double_large_graphic_pane_g1_cp2

0xaafa,	// (0x000576b9) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xaafa,	// (0x000576b9) list_double_large_graphic_pane_g2_cp2

0x9087,	// (0x00055c46) list_double_large_graphic_pane_g3_cp2

0xab0b,	// (0x000576ca) list_double_large_graphic_pane_g4_cp

0xab13,	// (0x000576d2) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xab13,	// (0x000576d2) list_double_large_graphic_pane_t1_cp2

0xab2a,	// (0x000576e9) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xab2a,	// (0x000576e9) list_double_large_graphic_pane_t2_cp2

0x8f79,	// (0x00055b38) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8f79,	// (0x00055b38) list_double2_graphic_pane_g1_cp2

0x8f87,	// (0x00055b46) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8f87,	// (0x00055b46) list_double2_graphic_pane_g2_cp2

0x8f98,	// (0x00055b57) list_double2_graphic_pane_g3_cp2

0x8fa2,	// (0x00055b61) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8fa2,	// (0x00055b61) list_double2_graphic_pane_t1_cp2

0x8fb8,	// (0x00055b77) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8fb8,	// (0x00055b77) list_double2_graphic_pane_t2_cp2

0x8fca,	// (0x00055b89) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8fca,	// (0x00055b89) list_single_number_heading_pane_g1_cp2

0x8fd6,	// (0x00055b95) list_single_number_heading_pane_g2_cp2

0x8fde,	// (0x00055b9d) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8fde,	// (0x00055b9d) list_single_number_heading_pane_t1_cp2

0x8ff4,	// (0x00055bb3) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8ff4,	// (0x00055bb3) list_single_number_heading_pane_t2_cp2

0x9006,	// (0x00055bc5) list_single_number_heading_pane_t3_cp2_ParamLimits

0x9006,	// (0x00055bc5) list_single_number_heading_pane_t3_cp2

0x8fca,	// (0x00055b89) list_single_heading_pane_g1_cp2_ParamLimits

0x8fca,	// (0x00055b89) list_single_heading_pane_g1_cp2

0x8fd6,	// (0x00055b95) list_single_heading_pane_g2_cp2

0x8fde,	// (0x00055b9d) list_single_heading_pane_t1_cp2_ParamLimits

0x8fde,	// (0x00055b9d) list_single_heading_pane_t1_cp2

0xa8f1,	// (0x000574b0) list_single_heading_pane_t2_cp2_ParamLimits

0xa8f1,	// (0x000574b0) list_single_heading_pane_t2_cp2

0xa839,	// (0x000573f8) list_double_graphic_pane_g1_cp2_ParamLimits

0xa839,	// (0x000573f8) list_double_graphic_pane_g1_cp2

0xa845,	// (0x00057404) list_double_graphic_pane_g2_cp2_ParamLimits

0xa845,	// (0x00057404) list_double_graphic_pane_g2_cp2

0xa854,	// (0x00057413) list_double_graphic_pane_g3_cp2

0xa85c,	// (0x0005741b) list_double_graphic_pane_t1_cp2_ParamLimits

0xa85c,	// (0x0005741b) list_double_graphic_pane_t1_cp2

0xa872,	// (0x00057431) list_double_graphic_pane_t2_cp2_ParamLimits

0xa872,	// (0x00057431) list_double_graphic_pane_t2_cp2

0x907b,	// (0x00055c3a) list_double_number_pane_g1_cp2_ParamLimits

0x907b,	// (0x00055c3a) list_double_number_pane_g1_cp2

0x9087,	// (0x00055c46) list_double_number_pane_g2_cp2

0xa7fd,	// (0x000573bc) list_double_number_pane_t1_cp2_ParamLimits

0xa7fd,	// (0x000573bc) list_double_number_pane_t1_cp2

0xa811,	// (0x000573d0) list_double_number_pane_t2_cp2_ParamLimits

0xa811,	// (0x000573d0) list_double_number_pane_t2_cp2

0xa827,	// (0x000573e6) list_double_number_pane_t3_cp2_ParamLimits

0xa827,	// (0x000573e6) list_double_number_pane_t3_cp2

0xa6e6,	// (0x000572a5) list_single_graphic_pane_g1_cp2_ParamLimits

0xa6e6,	// (0x000572a5) list_single_graphic_pane_g1_cp2

0x90e8,	// (0x00055ca7) list_single_graphic_pane_g2_cp2_ParamLimits

0x90e8,	// (0x00055ca7) list_single_graphic_pane_g2_cp2

0x90f4,	// (0x00055cb3) list_single_graphic_pane_g3_cp2

0xa6bc,	// (0x0005727b) list_single_graphic_pane_t1_cp2_ParamLimits

0xa6bc,	// (0x0005727b) list_single_graphic_pane_t1_cp2

0x90e8,	// (0x00055ca7) list_single_number_pane_g1_cp2_ParamLimits

0x90e8,	// (0x00055ca7) list_single_number_pane_g1_cp2

0x90f4,	// (0x00055cb3) list_single_number_pane_g2_cp2

0xa6bc,	// (0x0005727b) list_single_number_pane_t1_cp2_ParamLimits

0xa6bc,	// (0x0005727b) list_single_number_pane_t1_cp2

0xa6d2,	// (0x00057291) list_single_number_pane_t2_cp2_ParamLimits

0xa6d2,	// (0x00057291) list_single_number_pane_t2_cp2

0x8ee8,	// (0x00055aa7) list_double2_pane_g1_cp2_ParamLimits

0x8ee8,	// (0x00055aa7) list_double2_pane_g1_cp2

0x8ef9,	// (0x00055ab8) list_double2_pane_g2_cp2

0x9053,	// (0x00055c12) list_double2_pane_t1_cp2_ParamLimits

0x9053,	// (0x00055c12) list_double2_pane_t1_cp2

0x9069,	// (0x00055c28) list_double2_pane_t2_cp2_ParamLimits

0x9069,	// (0x00055c28) list_double2_pane_t2_cp2

0x907b,	// (0x00055c3a) list_double_pane_g1_cp2_ParamLimits

0x907b,	// (0x00055c3a) list_double_pane_g1_cp2

0x9087,	// (0x00055c46) list_double_pane_g2_cp2

0x908f,	// (0x00055c4e) list_double_pane_t1_cp2_ParamLimits

0x908f,	// (0x00055c4e) list_double_pane_t1_cp2

0x90a5,	// (0x00055c64) list_double_pane_t2_cp2_ParamLimits

0x90a5,	// (0x00055c64) list_double_pane_t2_cp2

0x90d8,	// (0x00055c97) list_single_pane_cp2_g3

0x90e8,	// (0x00055ca7) list_single_pane_g1_cp2_ParamLimits

0x90e8,	// (0x00055ca7) list_single_pane_g1_cp2

0x90f4,	// (0x00055cb3) list_single_pane_g2_cp2

0x90fc,	// (0x00055cbb) list_single_pane_t1_cp2_ParamLimits

0x90fc,	// (0x00055cbb) list_single_pane_t1_cp2

0x9114,	// (0x00055cd3) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9114,	// (0x00055cd3) list_single_large_graphic_pane_g1_cp2

0x8488,	// (0x00055047) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8488,	// (0x00055047) list_single_large_graphic_pane_g2_cp2

0x9120,	// (0x00055cdf) list_single_large_graphic_pane_g3_cp2

0x9128,	// (0x00055ce7) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x9128,	// (0x00055ce7) list_single_large_graphic_pane_g4_cp1

0x9142,	// (0x00055d01) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x9142,	// (0x00055d01) list_single_large_graphic_pane_t1_cp2

0xa688,	// (0x00057247) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa688,	// (0x00057247) list_single_graphic_heading_pane_g1_cp2

0xa655,	// (0x00057214) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa655,	// (0x00057214) list_single_graphic_heading_pane_g4_cp2

0x90f4,	// (0x00055cb3) list_single_graphic_heading_pane_g5_cp2

0xa694,	// (0x00057253) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa694,	// (0x00057253) list_single_graphic_heading_pane_t1_cp2

0xa6aa,	// (0x00057269) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa6aa,	// (0x00057269) list_single_graphic_heading_pane_t2_cp2

0xa649,	// (0x00057208) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa649,	// (0x00057208) list_single_2graphic_pane_g1_cp2

0xa655,	// (0x00057214) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa655,	// (0x00057214) list_single_2graphic_pane_g2_cp2

0x90f4,	// (0x00055cb3) list_single_2graphic_pane_g3_cp2

0xa666,	// (0x00057225) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa666,	// (0x00057225) list_single_2graphic_pane_g4_cp2

0xa672,	// (0x00057231) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa672,	// (0x00057231) list_single_2graphic_pane_t1_cp2

0x2847,	// (0x0004f406) list_highlight_pane_g10_cp1

0xa221,	// (0x00056de0) list_highlight_pane_g1_cp1

0xa229,	// (0x00056de8) list_highlight_pane_g2_cp1

0xa231,	// (0x00056df0) list_highlight_pane_g3_cp1

0xa239,	// (0x00056df8) list_highlight_pane_g4_cp1

0xa241,	// (0x00056e00) list_highlight_pane_g5_cp1

0xa249,	// (0x00056e08) list_highlight_pane_g6_cp1

0xa251,	// (0x00056e10) list_highlight_pane_g7_cp1

0xa259,	// (0x00056e18) list_highlight_pane_g8_cp1

0xa261,	// (0x00056e20) list_highlight_pane_g9_cp1

0xa141,	// (0x00056d00) form_field_slider_pane_t3

0xa14f,	// (0x00056d0e) form_field_slider_pane_t4

0xa15d,	// (0x00056d1c) slider_form_pane_ParamLimits

0xa15d,	// (0x00056d1c) slider_form_pane

0x7769,	// (0x00054328) control_abbreviations

0x7769,	// (0x00054328) control_conventions

0x7769,	// (0x00054328) control_definitions

0x7769,	// (0x00054328) format_table_attribute

0xa93b,	// (0x000574fa) bg_popup_preview_window_pane_g9

0x7769,	// (0x00054328) format_table_data2

0x7769,	// (0x00054328) format_table_data3

0x7769,	// (0x00054328) format_table_data_example

0x0008,

0x7769,	// (0x00054328) intro_purpose

0xf8ca,	// (0x0005c489) bg_popup_preview_window_pane_g

0x7769,	// (0x00054328) texts_category

0x7769,	// (0x00054328) texts_graphics

0x9158,	// (0x00055d17) text_digital

0x9167,	// (0x00055d26) text_primary

0x9176,	// (0x00055d35) text_primary_small

0x9185,	// (0x00055d44) text_secondary

0x9194,	// (0x00055d53) text_title

0xb05c,	// (0x00057c1b) bg_passive_tab_pane_g1_cp3_srt

0x8df0,	// (0x000559af) bg_passive_tab_pane_g2_cp3_srt

0xb065,	// (0x00057c24) bg_passive_tab_pane_g3_cp3_srt

0x7849,	// (0x00054408) bg_active_tab_pane_cp3_srt_ParamLimits

0x7849,	// (0x00054408) bg_active_tab_pane_cp3_srt

0xb06e,	// (0x00057c2d) tabs_4_active_pane_srt_g1

0xb076,	// (0x00057c35) tabs_4_active_pane_srt_t1_ParamLimits

0xb076,	// (0x00057c35) tabs_4_active_pane_srt_t1

0xb05c,	// (0x00057c1b) bg_active_tab_pane_g1_cp3_copy1

0x8df0,	// (0x000559af) bg_active_tab_pane_g2_cp3_copy1

0xb065,	// (0x00057c24) bg_active_tab_pane_g3_cp3_copy1

0x7849,	// (0x00054408) tabs_2_long_active_pane_srt_ParamLimits

0x7849,	// (0x00054408) tabs_2_long_active_pane_srt

0x7849,	// (0x00054408) tabs_2_long_passive_pane_srt_ParamLimits

0x7849,	// (0x00054408) tabs_2_long_passive_pane_srt

0x86e1,	// (0x000552a0) bg_passive_tab_pane_cp4_srt_ParamLimits

0x86e1,	// (0x000552a0) bg_passive_tab_pane_cp4_srt

0xad69,	// (0x00057928) bg_passive_tab_pane_g1_cp4_srt

0x8df0,	// (0x000559af) bg_passive_tab_pane_g2_cp4_srt

0xad72,	// (0x00057931) bg_passive_tab_pane_g3_cp4_srt

0x86c0,	// (0x0005527f) bg_active_tab_pane_cp4_srt_ParamLimits

0x86c0,	// (0x0005527f) bg_active_tab_pane_cp4_srt

0xad7b,	// (0x0005793a) tabs_2_long_active_pane_srt_t1_ParamLimits

0xad7b,	// (0x0005793a) tabs_2_long_active_pane_srt_t1

0xad69,	// (0x00057928) bg_active_tab_pane_g1_cp4_srt

0x8df0,	// (0x000559af) bg_active_tab_pane_g2_cp4_srt

0xad72,	// (0x00057931) bg_active_tab_pane_g3_cp4_srt

0x7ac4,	// (0x00054683) tabs_3_long_active_pane_srt_ParamLimits

0x7ac4,	// (0x00054683) tabs_3_long_active_pane_srt

0x7ac4,	// (0x00054683) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7ac4,	// (0x00054683) tabs_3_long_passive_pane_cp_srt

0x7ac4,	// (0x00054683) tabs_3_long_passive_pane_srt_ParamLimits

0x7ac4,	// (0x00054683) tabs_3_long_passive_pane_srt

0x86e1,	// (0x000552a0) bg_passive_tab_pane_cp5_srt_ParamLimits

0x86e1,	// (0x000552a0) bg_passive_tab_pane_cp5_srt

0x8e7a,	// (0x00055a39) bg_passive_tab_pane_g1_cp5_srt

0x8df0,	// (0x000559af) bg_passive_tab_pane_g2_cp5_srt

0x8e83,	// (0x00055a42) bg_passive_tab_pane_g3_cp5_srt

0x86c0,	// (0x0005527f) bg_active_tab_pane_cp5_srt_ParamLimits

0x86c0,	// (0x0005527f) bg_active_tab_pane_cp5_srt

0xad57,	// (0x00057916) tabs_3_long_active_pane_srt_t1_ParamLimits

0xad57,	// (0x00057916) tabs_3_long_active_pane_srt_t1

0x8e7a,	// (0x00055a39) bg_active_tab_pane_g1_cp5_srt

0x8df0,	// (0x000559af) bg_active_tab_pane_g2_cp5_srt

0x8e83,	// (0x00055a42) bg_active_tab_pane_g3_cp5_srt

0xad49,	// (0x00057908) navi_text_pane_srt_t1

0xad41,	// (0x00057900) navi_icon_pane_srt_g1

0x9369,	// (0x00055f28) midp_editing_number_pane_srt

0x91a3,	// (0x00055d62) midp_ticker_pane_srt

0x9371,	// (0x00055f30) midp_ticker_pane_srt_g1

0x9379,	// (0x00055f38) midp_ticker_pane_srt_g2

0x0001,

0xf752,	// (0x0005c311) midp_ticker_pane_srt_g

0x9381,	// (0x00055f40) midp_ticker_pane_srt_t1

0xad32,	// (0x000578f1) midp_editing_number_pane_t1_copy1

0x91ab,	// (0x00055d6a) listscroll_midp_pane

0x91ab,	// (0x00055d6a) midp_form_pane

0x921b,	// (0x00055dda) midp_info_popup_window_ParamLimits

0x921b,	// (0x00055dda) midp_info_popup_window

0x860c,	// (0x000551cb) bg_popup_sub_pane_cp50_ParamLimits

0x860c,	// (0x000551cb) bg_popup_sub_pane_cp50

0x9e45,	// (0x00056a04) listscroll_midp_info_pane_ParamLimits

0x9e45,	// (0x00056a04) listscroll_midp_info_pane

0x9e25,	// (0x000569e4) listscroll_form_midp_pane_ParamLimits

0x9e25,	// (0x000569e4) listscroll_form_midp_pane

0x9e31,	// (0x000569f0) scroll_bar_cp050

0x9e05,	// (0x000569c4) list_midp_pane

0xbae3,	// (0x000586a2) signal_pane_g2_cp

0x9d3f,	// (0x000568fe) listscroll_midp_info_pane_t1_ParamLimits

0x9d3f,	// (0x000568fe) listscroll_midp_info_pane_t1

0x9d57,	// (0x00056916) listscroll_midp_info_pane_t2_ParamLimits

0x9d57,	// (0x00056916) listscroll_midp_info_pane_t2

0x9d95,	// (0x00056954) listscroll_midp_info_pane_t3_ParamLimits

0x9d95,	// (0x00056954) listscroll_midp_info_pane_t3

0x9dcf,	// (0x0005698e) listscroll_midp_info_pane_t4_ParamLimits

0x9dcf,	// (0x0005698e) listscroll_midp_info_pane_t4

0x0003,

0xf805,	// (0x0005c3c4) listscroll_midp_info_pane_t_ParamLimits

0xf805,	// (0x0005c3c4) listscroll_midp_info_pane_t

0x866d,	// (0x0005522c) scroll_pane_cp21

0x9cdd,	// (0x0005689c) form_midp_field_choice_group_pane

0x9ce6,	// (0x000568a5) form_midp_field_text_pane

0x9d25,	// (0x000568e4) form_midp_field_time_pane

0x9d2d,	// (0x000568ec) form_midp_gauge_slider_pane

0x9d36,	// (0x000568f5) form_midp_gauge_wait_pane

0x7769,	// (0x00054328) form_midp_image_pane

0x5e17,	// (0x000529d6) list_single_midp_pane_ParamLimits

0x5e17,	// (0x000529d6) list_single_midp_pane

0x9c95,	// (0x00056854) form_midp_field_text_pane_t1

0x9a65,	// (0x00056624) input_focus_pane_cp050

0x9ccc,	// (0x0005688b) list_midp_form_text_pane

0x9c64,	// (0x00056823) form_midp_field_choice_group_pane_t1

0x9c72,	// (0x00056831) input_focus_pane_cp051

0x9c86,	// (0x00056845) list_midp_choice_pane

0x7769,	// (0x00054328) status_idle_pane

0x9c48,	// (0x00056807) form_midp_field_time_pane_t1

0x2847,	// (0x0004f406) wait_anim_pane_g2_copy1

0x9c56,	// (0x00056815) form_midp_field_time_pane_t2

0x0001,

0x92c9,	// (0x00055e88) aid_navinavi_width_2_pane

0xf800,	// (0x0005c3bf) form_midp_field_time_pane_t

0x7769,	// (0x00054328) input_focus_pane_cp052

0x7769,	// (0x00054328) bg_input_focus_pane_cp040

0x9c08,	// (0x000567c7) form_midp_gauge_slider_pane_t1

0x9c16,	// (0x000567d5) form_midp_gauge_slider_pane_t2

0x9c24,	// (0x000567e3) form_midp_gauge_slider_pane_t3

0x9c32,	// (0x000567f1) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f7,	// (0x0005c3b6) form_midp_gauge_slider_pane_t

0x9c40,	// (0x000567ff) form_midp_slider_pane

0x7849,	// (0x00054408) bg_input_focus_pane_cp041_ParamLimits

0x7849,	// (0x00054408) bg_input_focus_pane_cp041

0x9bd5,	// (0x00056794) form_midp_gauge_wait_pane_t1_ParamLimits

0x9bd5,	// (0x00056794) form_midp_gauge_wait_pane_t1

0x9be7,	// (0x000567a6) form_midp_gauge_wait_pane_t2_ParamLimits

0x9be7,	// (0x000567a6) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f2,	// (0x0005c3b1) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f2,	// (0x0005c3b1) form_midp_gauge_wait_pane_t

0x9bf9,	// (0x000567b8) form_midp_wait_pane_ParamLimits

0x9bf9,	// (0x000567b8) form_midp_wait_pane

0x9b9f,	// (0x0005675e) form_midp_image_pane_g1

0x9ba8,	// (0x00056767) form_midp_image_pane_t1

0x9bb7,	// (0x00056776) form_midp_image_pane_t2

0x9bc6,	// (0x00056785) form_midp_image_pane_t3

0x0002,

0xf7eb,	// (0x0005c3aa) form_midp_image_pane_t

0x9b96,	// (0x00056755) list_single_midp_pane_g1

0x5e08,	// (0x000529c7) list_single_midp_pane_t1

0x9b6e,	// (0x0005672d) list_midp_form_item_pane_ParamLimits

0x9b6e,	// (0x0005672d) list_midp_form_item_pane

0x9271,	// (0x00055e30) list_midp_form_item_pane_t1

0x9280,	// (0x00055e3f) midp_ticker_pane_g1

0x928c,	// (0x00055e4b) midp_ticker_pane_g2

0x0001,

0xf738,	// (0x0005c2f7) midp_ticker_pane_g

0x9298,	// (0x00055e57) midp_ticker_pane_t1

0xaf83,	// (0x00057b42) midp_editing_number_pane_t1

0xaf61,	// (0x00057b20) midp_editing_number_pane

0xaf70,	// (0x00057b2f) midp_ticker_pane

0xad22,	// (0x000578e1) ai_message_heading_pane

0x7769,	// (0x00054328) bg_popup_window_pane_cp14

0xad2a,	// (0x000578e9) listscroll_ai_message_pane

0xacac,	// (0x0005786b) ai_message_heading_pane_g1_ParamLimits

0xacac,	// (0x0005786b) ai_message_heading_pane_g1

0xacb8,	// (0x00057877) ai_message_heading_pane_g2_ParamLimits

0xacb8,	// (0x00057877) ai_message_heading_pane_g2

0xacc4,	// (0x00057883) ai_message_heading_pane_g3_ParamLimits

0xacc4,	// (0x00057883) ai_message_heading_pane_g3

0xacd0,	// (0x0005788f) ai_message_heading_pane_g4_ParamLimits

0xacd0,	// (0x0005788f) ai_message_heading_pane_g4

0x0003,

0xf92c,	// (0x0005c4eb) ai_message_heading_pane_g_ParamLimits

0xf92c,	// (0x0005c4eb) ai_message_heading_pane_g

0xacdc,	// (0x0005789b) ai_message_heading_pane_t1_ParamLimits

0xacdc,	// (0x0005789b) ai_message_heading_pane_t1

0xacf6,	// (0x000578b5) ai_message_heading_pane_t2_ParamLimits

0xacf6,	// (0x000578b5) ai_message_heading_pane_t2

0x0001,

0xf935,	// (0x0005c4f4) ai_message_heading_pane_t_ParamLimits

0xf935,	// (0x0005c4f4) ai_message_heading_pane_t

0xad08,	// (0x000578c7) bg_popup_heading_pane_cp1_ParamLimits

0xad08,	// (0x000578c7) bg_popup_heading_pane_cp1

0xac9a,	// (0x00057859) list_ai_message_pane_ParamLimits

0xac9a,	// (0x00057859) list_ai_message_pane

0x866d,	// (0x0005522c) scroll_pane_cp10

0xac36,	// (0x000577f5) list_ai_message_pane_g1

0xac3e,	// (0x000577fd) list_ai_message_pane_g2

0x0001,

0xf909,	// (0x0005c4c8) list_ai_message_pane_g

0xac46,	// (0x00057805) list_ai_message_pane_t1_ParamLimits

0xac46,	// (0x00057805) list_ai_message_pane_t1

0xac5b,	// (0x0005781a) list_ai_message_pane_t2_ParamLimits

0xac5b,	// (0x0005781a) list_ai_message_pane_t2

0xac70,	// (0x0005782f) list_ai_message_pane_t3_ParamLimits

0xac70,	// (0x0005782f) list_ai_message_pane_t3

0xac85,	// (0x00057844) list_ai_message_pane_t4_ParamLimits

0xac85,	// (0x00057844) list_ai_message_pane_t4

0x0003,

0xf90e,	// (0x0005c4cd) list_ai_message_pane_t_ParamLimits

0xf90e,	// (0x0005c4cd) list_ai_message_pane_t

0xac21,	// (0x000577e0) cell_ai_soft_ind_pane_ParamLimits

0xac21,	// (0x000577e0) cell_ai_soft_ind_pane

0x92aa,	// (0x00055e69) cell_ai_soft_ind_pane_g1_ParamLimits

0x92aa,	// (0x00055e69) cell_ai_soft_ind_pane_g1

0x7769,	// (0x00054328) grid_highlight_cp1

0x92b7,	// (0x00055e76) text_secondary_cp56_ParamLimits

0x92b7,	// (0x00055e76) text_secondary_cp56

0xabf6,	// (0x000577b5) example_general_pane_ParamLimits

0xabf6,	// (0x000577b5) example_general_pane

0xac02,	// (0x000577c1) example_parent_pane_g1_ParamLimits

0xac02,	// (0x000577c1) example_parent_pane_g1

0xac0e,	// (0x000577cd) example_parent_pane_t1_ParamLimits

0xac0e,	// (0x000577cd) example_parent_pane_t1

0x59f2,	// (0x000525b1) popup_preview_text_window_ParamLimits

0x59f2,	// (0x000525b1) popup_preview_text_window

0x90e0,	// (0x00055c9f) list_single_pane_cp2_g4

0x7ba0,	// (0x0005475f) bg_popup_preview_window_pane_ParamLimits

0x7ba0,	// (0x0005475f) bg_popup_preview_window_pane

0xa943,	// (0x00057502) popup_preview_text_window_t1_ParamLimits

0xa943,	// (0x00057502) popup_preview_text_window_t1

0xa961,	// (0x00057520) popup_preview_text_window_t2_ParamLimits

0xa961,	// (0x00057520) popup_preview_text_window_t2

0xa9aa,	// (0x00057569) popup_preview_text_window_t3_ParamLimits

0xa9aa,	// (0x00057569) popup_preview_text_window_t3

0xa9ef,	// (0x000575ae) popup_preview_text_window_t4_ParamLimits

0xa9ef,	// (0x000575ae) popup_preview_text_window_t4

0x0004,

0xf8dd,	// (0x0005c49c) popup_preview_text_window_t_ParamLimits

0xf8dd,	// (0x0005c49c) popup_preview_text_window_t

0xaa6d,	// (0x0005762c) scroll_pane_cp11

0x99f1,	// (0x000565b0) bg_popup_preview_window_pane_g1

0xa903,	// (0x000574c2) bg_popup_preview_window_pane_g2

0xa90b,	// (0x000574ca) bg_popup_preview_window_pane_g3

0xa913,	// (0x000574d2) bg_popup_preview_window_pane_g4

0xa91b,	// (0x000574da) bg_popup_preview_window_pane_g5

0xa923,	// (0x000574e2) bg_popup_preview_window_pane_g6

0xa92b,	// (0x000574ea) bg_popup_preview_window_pane_g7

0xa933,	// (0x000574f2) bg_popup_preview_window_pane_g8

0x4555,	// (0x00051114) aid_popup_width_pane

0x59d0,	// (0x0005258f) popup_midp_note_alarm_window_ParamLimits

0x59d0,	// (0x0005258f) popup_midp_note_alarm_window

0x84ed,	// (0x000550ac) data_form_pane_ParamLimits

0x4e2b,	// (0x000519ea) form_field_data_pane_g1

0x4e35,	// (0x000519f4) form_field_data_pane_t1_ParamLimits

0x84f9,	// (0x000550b8) input_focus_pane_ParamLimits

0x4e4d,	// (0x00051a0c) data_form_wide_pane_ParamLimits

0x4e5e,	// (0x00051a1d) form_field_data_wide_pane_g1

0x4e6a,	// (0x00051a29) form_field_data_wide_pane_t1_ParamLimits

0x7e47,	// (0x00054a06) input_focus_pane_cp6_ParamLimits

0x861a,	// (0x000551d9) input_popup_find_pane_g1_ParamLimits

0x861a,	// (0x000551d9) input_popup_find_pane_g1

0x50e0,	// (0x00051c9f) aid_navi_side_left_pane

0x50f5,	// (0x00051cb4) aid_navi_side_right_pane

0xa31c,	// (0x00056edb) bg_popup_window_pane_cp30_ParamLimits

0xa31c,	// (0x00056edb) bg_popup_window_pane_cp30

0xa396,	// (0x00056f55) popup_midp_note_alarm_window_g1_ParamLimits

0xa396,	// (0x00056f55) popup_midp_note_alarm_window_g1

0xa3c6,	// (0x00056f85) popup_midp_note_alarm_window_t1_ParamLimits

0xa3c6,	// (0x00056f85) popup_midp_note_alarm_window_t1

0xa467,	// (0x00057026) popup_midp_note_alarm_window_t2_ParamLimits

0xa467,	// (0x00057026) popup_midp_note_alarm_window_t2

0xa515,	// (0x000570d4) popup_midp_note_alarm_window_t3_ParamLimits

0xa515,	// (0x000570d4) popup_midp_note_alarm_window_t3

0xa547,	// (0x00057106) popup_midp_note_alarm_window_t4_ParamLimits

0xa547,	// (0x00057106) popup_midp_note_alarm_window_t4

0xa56d,	// (0x0005712c) popup_midp_note_alarm_window_t5_ParamLimits

0xa56d,	// (0x0005712c) popup_midp_note_alarm_window_t5

0x000a,

0xf87a,	// (0x0005c439) popup_midp_note_alarm_window_t_ParamLimits

0xf87a,	// (0x0005c439) popup_midp_note_alarm_window_t

0xa619,	// (0x000571d8) wait_bar_pane_cp1_ParamLimits

0xa619,	// (0x000571d8) wait_bar_pane_cp1

0x7769,	// (0x00054328) wait_anim_pane_copy1

0x7769,	// (0x00054328) wait_border_pane_copy1

0xa002,	// (0x00056bc1) wait_border_pane_g1_copy1

0x4e84,	// (0x00051a43) form_field_popup_pane_g1

0x4e8c,	// (0x00051a4b) form_field_popup_pane_t1_ParamLimits

0x84f9,	// (0x000550b8) input_focus_pane_cp7_ParamLimits

0x851b,	// (0x000550da) list_form_pane_ParamLimits

0x4ea4,	// (0x00051a63) form_field_popup_wide_pane_g1

0x4eac,	// (0x00051a6b) form_field_popup_wide_pane_t1_ParamLimits

0x84f9,	// (0x000550b8) input_focus_pane_cp8_ParamLimits

0x8527,	// (0x000550e6) list_form_wide_pane_ParamLimits

0xb0fe,	// (0x00057cbd) aid_size_cell_graphic_pane

0x4f36,	// (0x00051af5) data_form_pane_t1_ParamLimits

0x607f,	// (0x00052c3e) data_form_wide_pane_t1_ParamLimits

0x95b8,	// (0x00056177) bg_status_flat_pane

0x77a9,	// (0x00054368) title_pane_t1_ParamLimits

0x7811,	// (0x000543d0) title_pane_t2_ParamLimits

0x7837,	// (0x000543f6) title_pane_t3_ParamLimits

0xf532,	// (0x0005c0f1) title_pane_t_ParamLimits

0x8aee,	// (0x000556ad) level_1_signal_ParamLimits

0x8b00,	// (0x000556bf) level_2_signal_ParamLimits

0x8b13,	// (0x000556d2) level_3_signal_ParamLimits

0x8b26,	// (0x000556e5) level_4_signal_ParamLimits

0x8b39,	// (0x000556f8) level_5_signal_ParamLimits

0x8b4c,	// (0x0005570b) level_6_signal_ParamLimits

0x8b5f,	// (0x0005571e) level_7_signal_ParamLimits

0x8aee,	// (0x000556ad) level_1_battery_ParamLimits

0x8b00,	// (0x000556bf) level_2_battery_ParamLimits

0x8b13,	// (0x000556d2) level_3_battery_ParamLimits

0x8b26,	// (0x000556e5) level_4_battery_ParamLimits

0x8b39,	// (0x000556f8) level_5_battery_ParamLimits

0x8b4c,	// (0x0005570b) level_6_battery_ParamLimits

0x8b5f,	// (0x0005571e) level_7_battery_ParamLimits

0xa221,	// (0x00056de0) bg_status_flat_pane_g1

0xa229,	// (0x00056de8) bg_status_flat_pane_g2

0xa231,	// (0x00056df0) bg_status_flat_pane_g3

0xa239,	// (0x00056df8) bg_status_flat_pane_g4

0xa241,	// (0x00056e00) bg_status_flat_pane_g5

0xa249,	// (0x00056e08) bg_status_flat_pane_g6

0xa251,	// (0x00056e10) bg_status_flat_pane_g7

0x785f,	// (0x0005441e) tabs_3_active_pane_t1_ParamLimits

0x785f,	// (0x0005441e) tabs_3_passive_pane_t1_ParamLimits

0x7879,	// (0x00054438) tabs_4_active_pane_t1_ParamLimits

0x7879,	// (0x00054438) tabs_4_1_passive_pane_t1_ParamLimits

0x86ae,	// (0x0005526d) tabs_2_active_pane_t1_ParamLimits

0x86ae,	// (0x0005526d) tabs_2_passive_pane_t1_ParamLimits

0x86c0,	// (0x0005527f) bg_active_tab_pane_cp4_ParamLimits

0x86ce,	// (0x0005528d) tabs_2_long_active_pane_t1_ParamLimits

0x86e1,	// (0x000552a0) bg_passive_tab_pane_cp4_ParamLimits

0x5ce9,	// (0x000528a8) list_single_midp_graphic_pane_t1_ParamLimits

0x86c0,	// (0x0005527f) bg_active_tab_pane_cp5_ParamLimits

0x86ed,	// (0x000552ac) tabs_3_long_active_pane_t1_ParamLimits

0x86e1,	// (0x000552a0) bg_passive_tab_pane_cp5_ParamLimits

0x5ce9,	// (0x000528a8) list_single_midp_graphic_pane_t1

0x95b8,	// (0x00056177) bg_status_flat_pane_ParamLimits

0x9681,	// (0x00056240) indicator_pane_cp2_ParamLimits

0x9681,	// (0x00056240) indicator_pane_cp2

0x97ac,	// (0x0005636b) navi_pane_srt_ParamLimits

0x97ac,	// (0x0005636b) navi_pane_srt

0x97d0,	// (0x0005638f) popup_clock_digital_analogue_window_cp1

0x7926,	// (0x000544e5) indicator_pane_t1

0x91a3,	// (0x00055d62) copy_highlight_pane

0x91a3,	// (0x00055d62) cursor_graphics_pane

0x91a3,	// (0x00055d62) graphic_within_text_pane

0x91a3,	// (0x00055d62) link_highlight_pane

0xaa30,	// (0x000575ef) popup_preview_text_window_t5_ParamLimits

0xaa30,	// (0x000575ef) popup_preview_text_window_t5

0x92d1,	// (0x00055e90) cursor_digital_pane

0x92d1,	// (0x00055e90) cursor_primary_pane

0x92e2,	// (0x00055ea1) cursor_primary_small_pane

0x92ea,	// (0x00055ea9) cursor_secondary_pane

0x92f2,	// (0x00055eb1) cursor_title_pane

0x92d1,	// (0x00055e90) link_highlight_digital_pane

0x92d9,	// (0x00055e98) link_highlight_primary_pane

0x92e2,	// (0x00055ea1) link_highlight_primary_small_pane

0x92ea,	// (0x00055ea9) link_highlight_secondary_pane

0x92f2,	// (0x00055eb1) link_highlight_title_pane

0x92d1,	// (0x00055e90) copy_highlight_digital_pane

0x92d1,	// (0x00055e90) copy_highlight_primary_pane

0x92e2,	// (0x00055ea1) copy_highlight_primary_small_pane

0x92ea,	// (0x00055ea9) copy_highlight_secondary_pane

0x92f2,	// (0x00055eb1) copy_highlight_title_pane

0x92ea,	// (0x00055ea9) graphic_text_digital_pane

0xa2bf,	// (0x00056e7e) graphic_text_primary_pane

0xa2c8,	// (0x00056e87) graphic_text_primary_small_pane

0x92e2,	// (0x00055ea1) graphic_text_secondary_pane

0x92d1,	// (0x00055e90) graphic_text_title_pane

0x92fa,	// (0x00055eb9) cursor_primary_pane_g1

0xa2b1,	// (0x00056e70) cursor_text_primary_t1

0xa299,	// (0x00056e58) cursor_primary_small_pane_g1

0xa2a3,	// (0x00056e62) cursor_text_primary_small_t1

0xa281,	// (0x00056e40) cursor_primary_small_pane_g1_copy1

0xa28b,	// (0x00056e4a) cursor_text_primary_small_t1_copy1

0xa269,	// (0x00056e28) cursor_text_title_t1

0xa277,	// (0x00056e36) cursor_title_pane_g1

0x92fa,	// (0x00055eb9) cursor_digital_pane_g1

0x9304,	// (0x00055ec3) cursor_text_digital_t1

0x9329,	// (0x00055ee8) link_highlight_primary_pane_g1

0xa212,	// (0x00056dd1) link_highlight_primary_pane_t1

0x9312,	// (0x00055ed1) link_highlight_primary_small_pane_g1

0x931a,	// (0x00055ed9) link_highlight_primary_small_pane_t1

0x9329,	// (0x00055ee8) link_highlight_secondary_pane_g1

0x9331,	// (0x00055ef0) link_highlight_secondary_pane_t1

0xa186,	// (0x00056d45) link_highlight_title_pane_g1

0xa18e,	// (0x00056d4d) link_highlight_title_pane_t1

0xa16f,	// (0x00056d2e) link_highlight_digital_pane_g1

0xa177,	// (0x00056d36) link_highlight_digital_pane_t1

0xa047,	// (0x00056c06) copy_highlight_primary_pane_g1

0xa04f,	// (0x00056c0e) copy_highlight_primary_pane_t1

0xa021,	// (0x00056be0) copy_highlight_primary_small_pane_g1

0xa038,	// (0x00056bf7) copy_highlight_primary_small_pane_t1

0x9340,	// (0x00055eff) copy_highlight_secondary_pane_g1

0x9348,	// (0x00055f07) copy_highlight_secondary_pane_t1

0xa021,	// (0x00056be0) copy_highlight_title_pane_g1

0xa029,	// (0x00056be8) copy_highlight_title_pane_t1

0xa047,	// (0x00056c06) copy_highlight_digital_pane_g1

0xb2cc,	// (0x00057e8b) copy_highlight_digital_pane_t1

0xb220,	// (0x00057ddf) graphic_text_primary_pane_g1

0xb2b0,	// (0x00057e6f) graphic_text_primary_pane_t1

0xb2be,	// (0x00057e7d) graphic_text_primary_pane_t2

0x0001,

0xf9a9,	// (0x0005c568) graphic_text_primary_pane_t

0xb28c,	// (0x00057e4b) graphic_text_primary_small_pane_g1

0xb294,	// (0x00057e53) graphic_text_primary_small_pane_t1

0xb2a2,	// (0x00057e61) graphic_text_primary_small_pane_t2

0x0001,

0xf9a4,	// (0x0005c563) graphic_text_primary_small_pane_t

0xb268,	// (0x00057e27) graphic_text_secondary_pane_g1

0xb270,	// (0x00057e2f) graphic_text_secondary_pane_t1

0xb27e,	// (0x00057e3d) graphic_text_secondary_pane_t2

0x0001,

0xf99f,	// (0x0005c55e) graphic_text_secondary_pane_t

0xb244,	// (0x00057e03) graphic_text_title_pane_g1

0xb24c,	// (0x00057e0b) graphic_text_title_pane_t1

0xb25a,	// (0x00057e19) graphic_text_title_pane_t2

0x0001,

0xf99a,	// (0x0005c559) graphic_text_title_pane_t

0xb220,	// (0x00057ddf) graphic_text_digital_pane_g1

0xb228,	// (0x00057de7) graphic_text_digital_pane_t1

0xb236,	// (0x00057df5) graphic_text_digital_pane_t2

0x0001,

0xf995,	// (0x0005c554) graphic_text_digital_pane_t

0x7849,	// (0x00054408) navi_icon_pane_srt_ParamLimits

0x7849,	// (0x00054408) navi_icon_pane_srt

0x7769,	// (0x00054328) navi_midp_pane_srt

0x7769,	// (0x00054328) navi_navi_pane_srt

0x7849,	// (0x00054408) navi_text_pane_srt_ParamLimits

0x7849,	// (0x00054408) navi_text_pane_srt

0xb1eb,	// (0x00057daa) navi_navi_icon_text_pane_srt

0xb1f3,	// (0x00057db2) navi_navi_pane_srt_g1_ParamLimits

0xb1f3,	// (0x00057db2) navi_navi_pane_srt_g1

0xb205,	// (0x00057dc4) navi_navi_pane_srt_g2_ParamLimits

0xb205,	// (0x00057dc4) navi_navi_pane_srt_g2

0x0001,

0xf990,	// (0x0005c54f) navi_navi_pane_srt_g_ParamLimits

0xf990,	// (0x0005c54f) navi_navi_pane_srt_g

0xb217,	// (0x00057dd6) navi_navi_tabs_pane_srt

0xb1eb,	// (0x00057daa) navi_navi_text_pane_srt

0xb1eb,	// (0x00057daa) navi_navi_volume_pane_srt

0xb1dc,	// (0x00057d9b) navi_navi_text_pane_srt_t1

0x6197,	// (0x00052d56) navi_navi_volume_pane_srt_g1

0x619f,	// (0x00052d5e) volume_small_pane_srt_ParamLimits

0x619f,	// (0x00052d5e) volume_small_pane_srt

0x542e,	// (0x00051fed) volume_small_pane_srt_g1_ParamLimits

0x542e,	// (0x00051fed) volume_small_pane_srt_g1

0x543e,	// (0x00051ffd) volume_small_pane_srt_g2_ParamLimits

0x543e,	// (0x00051ffd) volume_small_pane_srt_g2

0x544f,	// (0x0005200e) volume_small_pane_srt_g3_ParamLimits

0x544f,	// (0x0005200e) volume_small_pane_srt_g3

0x5460,	// (0x0005201f) volume_small_pane_srt_g4_ParamLimits

0x5460,	// (0x0005201f) volume_small_pane_srt_g4

0x5471,	// (0x00052030) volume_small_pane_srt_g5_ParamLimits

0x5471,	// (0x00052030) volume_small_pane_srt_g5

0x5482,	// (0x00052041) volume_small_pane_srt_g6_ParamLimits

0x5482,	// (0x00052041) volume_small_pane_srt_g6

0x5493,	// (0x00052052) volume_small_pane_srt_g7_ParamLimits

0x5493,	// (0x00052052) volume_small_pane_srt_g7

0x54a4,	// (0x00052063) volume_small_pane_srt_g8_ParamLimits

0x54a4,	// (0x00052063) volume_small_pane_srt_g8

0x54b5,	// (0x00052074) volume_small_pane_srt_g9_ParamLimits

0x54b5,	// (0x00052074) volume_small_pane_srt_g9

0x54c6,	// (0x00052085) volume_small_pane_srt_g10_ParamLimits

0x54c6,	// (0x00052085) volume_small_pane_srt_g10

0x0009,

0xf73d,	// (0x0005c2fc) volume_small_pane_srt_g_ParamLimits

0xf73d,	// (0x0005c2fc) volume_small_pane_srt_g

0x7c49,	// (0x00054808) query_popup_data_pane_cp2

0xb1c2,	// (0x00057d81) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb1c2,	// (0x00057d81) navi_navi_icon_text_pane_srt_t1

0xa2bf,	// (0x00056e7e) navi_tabs_2_long_pane_srt

0xa2bf,	// (0x00056e7e) navi_tabs_2_pane_srt

0xa2bf,	// (0x00056e7e) navi_tabs_3_long_pane_srt

0xa2bf,	// (0x00056e7e) navi_tabs_3_pane_srt

0xa2bf,	// (0x00056e7e) navi_tabs_4_pane_srt

0x6177,	// (0x00052d36) tabs_2_active_pane_srt_ParamLimits

0x6177,	// (0x00052d36) tabs_2_active_pane_srt

0x6187,	// (0x00052d46) tabs_2_passive_pane_srt_ParamLimits

0x6187,	// (0x00052d46) tabs_2_passive_pane_srt

0x94c7,	// (0x00056086) bg_passive_tab_pane_cp1_srt_ParamLimits

0x94c7,	// (0x00056086) bg_passive_tab_pane_cp1_srt

0xb18e,	// (0x00057d4d) bg_passive_tab_pane_g1_cp1_srt

0x8df0,	// (0x000559af) bg_passive_tab_pane_g2_cp1_srt

0xb197,	// (0x00057d56) bg_passive_tab_pane_g3_cp1_srt

0x7849,	// (0x00054408) bg_active_tab_pane_cp1_srt_ParamLimits

0x7849,	// (0x00054408) bg_active_tab_pane_cp1_srt

0xb1a0,	// (0x00057d5f) tabs_2_active_pane_srt_g1

0xb1a8,	// (0x00057d67) tabs_2_active_pane_srt_t1_ParamLimits

0xb1a8,	// (0x00057d67) tabs_2_active_pane_srt_t1

0xb18e,	// (0x00057d4d) bg_active_tab_pane_g1_cp1_srt

0x8df0,	// (0x000559af) bg_active_tab_pane_g2_cp1_srt

0xb197,	// (0x00057d56) bg_active_tab_pane_g3_cp1_srt

0x6144,	// (0x00052d03) tabs_3_active_pane_srt_ParamLimits

0x6144,	// (0x00052d03) tabs_3_active_pane_srt

0x6155,	// (0x00052d14) tabs_3_passive_pane_cp_srt_ParamLimits

0x6155,	// (0x00052d14) tabs_3_passive_pane_cp_srt

0x6166,	// (0x00052d25) tabs_3_passive_pane_srt_ParamLimits

0x6166,	// (0x00052d25) tabs_3_passive_pane_srt

0x94c7,	// (0x00056086) bg_passive_tab_pane_cp2_srt_ParamLimits

0x94c7,	// (0x00056086) bg_passive_tab_pane_cp2_srt

0x9357,	// (0x00055f16) bg_passive_tab_pane_g1_cp2_srt

0x8df0,	// (0x000559af) bg_passive_tab_pane_g2_cp2_srt

0x9360,	// (0x00055f1f) bg_passive_tab_pane_g3_cp2_srt

0x7849,	// (0x00054408) bg_active_tab_pane_cp2_srt_ParamLimits

0x7849,	// (0x00054408) bg_active_tab_pane_cp2_srt

0xb174,	// (0x00057d33) tabs_3_active_pane_srt_g1

0xb17c,	// (0x00057d3b) tabs_3_active_pane_srt_t1_ParamLimits

0xb17c,	// (0x00057d3b) tabs_3_active_pane_srt_t1

0x9357,	// (0x00055f16) bg_active_tab_pane_g1_cp2_srt

0x8df0,	// (0x000559af) bg_active_tab_pane_g2_cp2_srt

0x9360,	// (0x00055f1f) bg_active_tab_pane_g3_cp2_srt

0x60fc,	// (0x00052cbb) tabs_4_active_pane_srt_ParamLimits

0x60fc,	// (0x00052cbb) tabs_4_active_pane_srt

0x610e,	// (0x00052ccd) tabs_4_passive_pane_cp2_srt_ParamLimits

0x610e,	// (0x00052ccd) tabs_4_passive_pane_cp2_srt

0x5639,	// (0x000521f8) aid_size_cell_toolbar

0x86e1,	// (0x000552a0) main_idle_act_pane_ParamLimits

0x5806,	// (0x000523c5) popup_large_graphic_colour_window_ParamLimits

0x5b6d,	// (0x0005272c) popup_toolbar_window_ParamLimits

0x5b6d,	// (0x0005272c) popup_toolbar_window

0xaf92,	// (0x00057b51) list_single_graphic_2heading_pane_ParamLimits

0xaf92,	// (0x00057b51) list_single_graphic_2heading_pane

0x889d,	// (0x0005545c) aid_size_cell_apps_grid_lsc_pane

0x88af,	// (0x0005546e) aid_size_cell_apps_grid_prt_pane

0x94c7,	// (0x00056086) bg_wml_button_pane_cp1_ParamLimits

0x94c7,	// (0x00056086) bg_wml_button_pane_cp1

0x9c95,	// (0x00056854) form_midp_field_text_pane_t1_ParamLimits

0x9a65,	// (0x00056624) input_focus_pane_cp050_ParamLimits

0x9ccc,	// (0x0005688b) list_midp_form_text_pane_ParamLimits

0x9c72,	// (0x00056831) input_focus_pane_cp051_ParamLimits

0x9c86,	// (0x00056845) list_midp_choice_pane_ParamLimits

0x9b1e,	// (0x000566dd) list_single_2graphic_pane_cp3_ParamLimits

0x9b1e,	// (0x000566dd) list_single_2graphic_pane_cp3

0x9b3f,	// (0x000566fe) list_single_midp_graphic_pane_ParamLimits

0x9b3f,	// (0x000566fe) list_single_midp_graphic_pane

0x44dd,	// (0x0005109c) list_single_graphic_2heading_pane_g1_ParamLimits

0x44dd,	// (0x0005109c) list_single_graphic_2heading_pane_g1

0x44e9,	// (0x000510a8) list_single_graphic_2heading_pane_g4_ParamLimits

0x44e9,	// (0x000510a8) list_single_graphic_2heading_pane_g4

0x44f5,	// (0x000510b4) list_single_graphic_2heading_pane_g5_ParamLimits

0x44f5,	// (0x000510b4) list_single_graphic_2heading_pane_g5

0x0002,

0xf790,	// (0x0005c34f) list_single_graphic_2heading_pane_g_ParamLimits

0xf790,	// (0x0005c34f) list_single_graphic_2heading_pane_g

0x4501,	// (0x000510c0) list_single_graphic_2heading_pane_t1_ParamLimits

0x4501,	// (0x000510c0) list_single_graphic_2heading_pane_t1

0x4515,	// (0x000510d4) list_single_graphic_2heading_pane_t2_ParamLimits

0x4515,	// (0x000510d4) list_single_graphic_2heading_pane_t2

0x4531,	// (0x000510f0) list_single_graphic_2heading_pane_t3_ParamLimits

0x4531,	// (0x000510f0) list_single_graphic_2heading_pane_t3

0x0002,

0xf797,	// (0x0005c356) list_single_graphic_2heading_pane_t_ParamLimits

0xf797,	// (0x0005c356) list_single_graphic_2heading_pane_t

0x992f,	// (0x000564ee) bg_popup_sub_pane_cp2

0x9959,	// (0x00056518) grid_toobar_pane

0x5c1a,	// (0x000527d9) cell_toolbar_pane_ParamLimits

0x5c1a,	// (0x000527d9) cell_toolbar_pane

0x9995,	// (0x00056554) cell_toolbar_pane_g1_ParamLimits

0x9995,	// (0x00056554) cell_toolbar_pane_g1

0x99a9,	// (0x00056568) cell_toolbar_pane_g2_ParamLimits

0x99a9,	// (0x00056568) cell_toolbar_pane_g2

0x0001,

0xf7a5,	// (0x0005c364) cell_toolbar_pane_g_ParamLimits

0xf7a5,	// (0x0005c364) cell_toolbar_pane_g

0x99cb,	// (0x0005658a) grid_highlight_pane_cp2_ParamLimits

0x99cb,	// (0x0005658a) grid_highlight_pane_cp2

0x99e5,	// (0x000565a4) toolbar_button_pane

0x99f1,	// (0x000565b0) toolbar_button_pane_g1

0x99f9,	// (0x000565b8) toolbar_button_pane_g2

0x9a01,	// (0x000565c0) toolbar_button_pane_g3

0x9a09,	// (0x000565c8) toolbar_button_pane_g4

0x9a11,	// (0x000565d0) toolbar_button_pane_g5

0x9a19,	// (0x000565d8) toolbar_button_pane_g6

0x9a21,	// (0x000565e0) toolbar_button_pane_g7

0x9a29,	// (0x000565e8) toolbar_button_pane_g8

0x9a31,	// (0x000565f0) toolbar_button_pane_g9

0x0009,

0xf7aa,	// (0x0005c369) toolbar_button_pane_g

0x5c68,	// (0x00052827) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5c68,	// (0x00052827) list_single_2graphic_pane_g1_cp3

0x5c74,	// (0x00052833) list_single_2graphic_pane_g2_cp3_ParamLimits

0x5c74,	// (0x00052833) list_single_2graphic_pane_g2_cp3

0x5c85,	// (0x00052844) list_single_2graphic_pane_g3_cp3

0x5c8d,	// (0x0005284c) list_single_2graphic_pane_g4_cp3_ParamLimits

0x5c8d,	// (0x0005284c) list_single_2graphic_pane_g4_cp3

0x5c99,	// (0x00052858) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5c99,	// (0x00052858) list_single_2graphic_pane_t1_cp3

0x5cdd,	// (0x0005289c) list_single_midp_graphic_pane_g2_ParamLimits

0x5cdd,	// (0x0005289c) list_single_midp_graphic_pane_g2

0x44d5,	// (0x00051094) aid_zoom_text_primary

0x5641,	// (0x00052200) aid_zoom_text_secondary

0x9411,	// (0x00055fd0) status_small_pane_g7_ParamLimits

0x9411,	// (0x00055fd0) status_small_pane_g7

0x9434,	// (0x00055ff3) status_small_pane_t1_ParamLimits

0x7780,	// (0x0005433f) title_pane_g2

0x0003,

0xf529,	// (0x0005c0e8) title_pane_g

0x7cf1,	// (0x000548b0) aid_size_cell_colour_1_pane_ParamLimits

0x7cf1,	// (0x000548b0) aid_size_cell_colour_1_pane

0x7d05,	// (0x000548c4) aid_size_cell_colour_2_pane_ParamLimits

0x7d05,	// (0x000548c4) aid_size_cell_colour_2_pane

0x7d19,	// (0x000548d8) aid_size_cell_colour_3_pane_ParamLimits

0x7d19,	// (0x000548d8) aid_size_cell_colour_3_pane

0x7d2d,	// (0x000548ec) aid_size_cell_colour_4_pane_ParamLimits

0x7d2d,	// (0x000548ec) aid_size_cell_colour_4_pane

0x501d,	// (0x00051bdc) title_pane_stacon_g1_ParamLimits

0x501d,	// (0x00051bdc) title_pane_stacon_g1

0xa0a6,	// (0x00056c65) popup_note_wait_window_g3_ParamLimits

0xa0a6,	// (0x00056c65) popup_note_wait_window_g3

0xa11c,	// (0x00056cdb) popup_note_wait_window_t5_ParamLimits

0xa11c,	// (0x00056cdb) popup_note_wait_window_t5

0x7769,	// (0x00054328) main_feb_china_hwr_fs_writing_pane

0x56e7,	// (0x000522a6) popup_feb_china_hwr_fs_window_ParamLimits

0x56e7,	// (0x000522a6) popup_feb_china_hwr_fs_window

0x5d6b,	// (0x0005292a) aid_size_cell_hwr_fs_ParamLimits

0x5d6b,	// (0x0005292a) aid_size_cell_hwr_fs

0x9a65,	// (0x00056624) bg_popup_sub_pane_cp3_ParamLimits

0x9a65,	// (0x00056624) bg_popup_sub_pane_cp3

0x5d80,	// (0x0005293f) grid_hwr_fs_pane_ParamLimits

0x5d80,	// (0x0005293f) grid_hwr_fs_pane

0x5d98,	// (0x00052957) linegrid_hwr_fs_pane_ParamLimits

0x5d98,	// (0x00052957) linegrid_hwr_fs_pane

0x5da8,	// (0x00052967) cell_hwr_fs_pane_ParamLimits

0x5da8,	// (0x00052967) cell_hwr_fs_pane

0x9a71,	// (0x00056630) linegrid_hwr_fs_pane_g1_ParamLimits

0x9a71,	// (0x00056630) linegrid_hwr_fs_pane_g1

0x9a7d,	// (0x0005663c) linegrid_hwr_fs_pane_g2_ParamLimits

0x9a7d,	// (0x0005663c) linegrid_hwr_fs_pane_g2

0x9a8f,	// (0x0005664e) linegrid_hwr_fs_pane_g3_ParamLimits

0x9a8f,	// (0x0005664e) linegrid_hwr_fs_pane_g3

0x5dca,	// (0x00052989) linegrid_hwr_fs_pane_g4_ParamLimits

0x5dca,	// (0x00052989) linegrid_hwr_fs_pane_g4

0x5de4,	// (0x000529a3) linegrid_hwr_fs_pane_g5_ParamLimits

0x5de4,	// (0x000529a3) linegrid_hwr_fs_pane_g5

0x0004,

0xf7d0,	// (0x0005c38f) linegrid_hwr_fs_pane_g_ParamLimits

0xf7d0,	// (0x0005c38f) linegrid_hwr_fs_pane_g

0x9a9b,	// (0x0005665a) cell_hwr_fs_pane_g1_ParamLimits

0x9a9b,	// (0x0005665a) cell_hwr_fs_pane_g1

0x9866,	// (0x00056425) cell_hwr_fs_pane_g2_ParamLimits

0x9866,	// (0x00056425) cell_hwr_fs_pane_g2

0x9ab1,	// (0x00056670) cell_hwr_fs_pane_g3_ParamLimits

0x9ab1,	// (0x00056670) cell_hwr_fs_pane_g3

0x9abe,	// (0x0005667d) cell_hwr_fs_pane_g4_ParamLimits

0x9abe,	// (0x0005667d) cell_hwr_fs_pane_g4

0x0003,

0xf7db,	// (0x0005c39a) cell_hwr_fs_pane_g_ParamLimits

0xf7db,	// (0x0005c39a) cell_hwr_fs_pane_g

0x5dfa,	// (0x000529b9) cell_hwr_fs_pane_t1

0x7769,	// (0x00054328) grid_highlight_pane_cp6

0x7769,	// (0x00054328) main_idle_act2_pane

0x8654,	// (0x00055213) aid_inside_area_popup_secondary

0xa753,	// (0x00057312) aid_inside_area_window_primary_ParamLimits

0xa753,	// (0x00057312) aid_inside_area_window_primary

0xb2db,	// (0x00057e9a) ai2_news_ticker_pane

0xb2e3,	// (0x00057ea2) aid_size_cell_ai1_link_ParamLimits

0xb2e3,	// (0x00057ea2) aid_size_cell_ai1_link

0xb2fd,	// (0x00057ebc) popup_ai2_data_window_ParamLimits

0xb2fd,	// (0x00057ebc) popup_ai2_data_window

0xb313,	// (0x00057ed2) popup_ai2_link_window_ParamLimits

0xb313,	// (0x00057ed2) popup_ai2_link_window

0x9a65,	// (0x00056624) bg_popup_sub_pane_cp4_ParamLimits

0x9a65,	// (0x00056624) bg_popup_sub_pane_cp4

0xb327,	// (0x00057ee6) grid_ai2_link_pane_ParamLimits

0xb327,	// (0x00057ee6) grid_ai2_link_pane

0xb33e,	// (0x00057efd) popup_ai2_link_window_g1_ParamLimits

0xb33e,	// (0x00057efd) popup_ai2_link_window_g1

0xb34a,	// (0x00057f09) popup_ai2_link_window_g2_ParamLimits

0xb34a,	// (0x00057f09) popup_ai2_link_window_g2

0x0001,

0xf9ae,	// (0x0005c56d) popup_ai2_link_window_g_ParamLimits

0xf9ae,	// (0x0005c56d) popup_ai2_link_window_g

0xb359,	// (0x00057f18) ai2_mp_button_pane

0xb361,	// (0x00057f20) ai2_mp_volume_pane

0x9c72,	// (0x00056831) bg_popup_sub_pane_cp5_ParamLimits

0x9c72,	// (0x00056831) bg_popup_sub_pane_cp5

0xb369,	// (0x00057f28) heading_ai2_gene_pane_ParamLimits

0xb369,	// (0x00057f28) heading_ai2_gene_pane

0xb375,	// (0x00057f34) list_ai2_gene_pane_ParamLimits

0xb375,	// (0x00057f34) list_ai2_gene_pane

0xb3bd,	// (0x00057f7c) cell_ai2_link_pane_ParamLimits

0xb3bd,	// (0x00057f7c) cell_ai2_link_pane

0xb3d3,	// (0x00057f92) cell_ai2_link_pane_g1

0x7769,	// (0x00054328) grid_highlight_pane_cp7

0x61b4,	// (0x00052d73) ai2_mp_volume_pane_g1

0xb4a3,	// (0x00058062) ai2_mp_volume_pane_g2

0xb418,	// (0x00057fd7) list_ai2_gene_pane_t1

0xb4ab,	// (0x0005806a) ai2_mp_volume_pane_g3

0x0002,

0xf9c7,	// (0x0005c586) ai2_mp_volume_pane_g

0x61bc,	// (0x00052d7b) volume_small_pane_cp3

0xb4b3,	// (0x00058072) aid_size_cell_ai2_button

0xb4bb,	// (0x0005807a) grid_ai2_button_pane

0xb4c4,	// (0x00058083) cell_ai2_button_pane_ParamLimits

0xb4c4,	// (0x00058083) cell_ai2_button_pane

0x2847,	// (0x0004f406) cell_ai2_button_pane_g1

0x7769,	// (0x00054328) grid_highlight_pane_cp8

0xb463,	// (0x00058022) ai2_gene_pane_t1_ParamLimits

0xb463,	// (0x00058022) ai2_gene_pane_t1

0x562f,	// (0x000521ee) aid_height_parent_landscape

0xadc9,	// (0x00057988) aid_height_set_list

0xadda,	// (0x00057999) aid_size_parent

0xb0fe,	// (0x00057cbd) aid_size_cell_graphic_pane_ParamLimits

0xb385,	// (0x00057f44) popup_ai2_data_window_g1_ParamLimits

0xb385,	// (0x00057f44) popup_ai2_data_window_g1

0xb391,	// (0x00057f50) ai2_news_ticker_pane_g1

0xb399,	// (0x00057f58) ai2_news_ticker_pane_g2

0x0001,

0xf9b3,	// (0x0005c572) ai2_news_ticker_pane_g

0xb3a1,	// (0x00057f60) ai2_news_ticker_pane_t1

0xb3af,	// (0x00057f6e) ai2_news_ticker_pane_t2

0x0001,

0xf9b8,	// (0x0005c577) ai2_news_ticker_pane_t

0xb3dc,	// (0x00057f9b) heading_ai2_gene_pane_g1

0xb3e4,	// (0x00057fa3) heading_ai2_gene_pane_t1_ParamLimits

0xb3e4,	// (0x00057fa3) heading_ai2_gene_pane_t1

0xb3f9,	// (0x00057fb8) list_highlight_pane_cp6

0xb401,	// (0x00057fc0) ai2_gene_pane_ParamLimits

0xb401,	// (0x00057fc0) ai2_gene_pane

0xb426,	// (0x00057fe5) list_ai2_gene_pane_t2

0x0001,

0xf9bd,	// (0x0005c57c) list_ai2_gene_pane_t

0xb434,	// (0x00057ff3) list_highlight_pane_cp8_ParamLimits

0xb434,	// (0x00057ff3) list_highlight_pane_cp8

0xb445,	// (0x00058004) ai2_gene_pane_g1_ParamLimits

0xb445,	// (0x00058004) ai2_gene_pane_g1

0xb457,	// (0x00058016) ai2_gene_pane_g2_ParamLimits

0xb457,	// (0x00058016) ai2_gene_pane_g2

0x0001,

0xf9c2,	// (0x0005c581) ai2_gene_pane_g_ParamLimits

0xf9c2,	// (0x0005c581) ai2_gene_pane_g

0x806c,	// (0x00054c2b) scroll_pane_cp12

0x55ec,	// (0x000521ab) control_pane_t3_ParamLimits

0x55ec,	// (0x000521ab) control_pane_t3

0x9425,	// (0x00055fe4) status_small_pane_g8_ParamLimits

0x9425,	// (0x00055fe4) status_small_pane_g8

0x57cd,	// (0x0005238c) popup_find_window_ParamLimits

0x59e4,	// (0x000525a3) popup_note_image_window_ParamLimits

0x3abd,	// (0x0005067c) list_double2_graphic_pane_vc_g1_ParamLimits

0x3abd,	// (0x0005067c) list_double2_graphic_pane_vc_g1

0x8488,	// (0x00055047) list_double2_graphic_pane_vc_g2_ParamLimits

0x8488,	// (0x00055047) list_double2_graphic_pane_vc_g2

0x807d,	// (0x00054c3c) list_double2_graphic_pane_vc_g3_ParamLimits

0x807d,	// (0x00054c3c) list_double2_graphic_pane_vc_g3

0x0002,

0xf79e,	// (0x0005c35d) list_double2_graphic_pane_vc_g_ParamLimits

0xf79e,	// (0x0005c35d) list_double2_graphic_pane_vc_g

0x5c4a,	// (0x00052809) list_double2_graphic_pane_vc_t1_ParamLimits

0x5c4a,	// (0x00052809) list_double2_graphic_pane_vc_t1

0x8488,	// (0x00055047) list_single_heading_pane_vc_g1_ParamLimits

0x8488,	// (0x00055047) list_single_heading_pane_vc_g1

0x807d,	// (0x00054c3c) list_single_heading_pane_vc_g2_ParamLimits

0x807d,	// (0x00054c3c) list_single_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005c16c) list_single_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005c16c) list_single_heading_pane_vc_g

0x5cb5,	// (0x00052874) list_single_heading_pane_vc_t1_ParamLimits

0x5cb5,	// (0x00052874) list_single_heading_pane_vc_t1

0x5ccb,	// (0x0005288a) list_single_heading_pane_vc_t2_ParamLimits

0x5ccb,	// (0x0005288a) list_single_heading_pane_vc_t2

0x0001,

0xf7bf,	// (0x0005c37e) list_single_heading_pane_vc_t_ParamLimits

0xf7bf,	// (0x0005c37e) list_single_heading_pane_vc_t

0x8136,	// (0x00054cf5) list_setting_number_pane_vc_g1_ParamLimits

0x8136,	// (0x00054cf5) list_setting_number_pane_vc_g1

0x8142,	// (0x00054d01) list_setting_number_pane_vc_g2_ParamLimits

0x8142,	// (0x00054d01) list_setting_number_pane_vc_g2

0x0001,

0xf7c4,	// (0x0005c383) list_setting_number_pane_vc_g_ParamLimits

0xf7c4,	// (0x0005c383) list_setting_number_pane_vc_g

0x5cff,	// (0x000528be) list_setting_number_pane_vc_t1_ParamLimits

0x5cff,	// (0x000528be) list_setting_number_pane_vc_t1

0x5d13,	// (0x000528d2) list_setting_number_pane_vc_t2_ParamLimits

0x5d13,	// (0x000528d2) list_setting_number_pane_vc_t2

0x5d2f,	// (0x000528ee) list_setting_number_pane_vc_t3_ParamLimits

0x5d2f,	// (0x000528ee) list_setting_number_pane_vc_t3

0x0002,

0xf7c9,	// (0x0005c388) list_setting_number_pane_vc_t_ParamLimits

0xf7c9,	// (0x0005c388) list_setting_number_pane_vc_t

0x5d5b,	// (0x0005291a) set_value_pane_vc_ParamLimits

0x5d5b,	// (0x0005291a) set_value_pane_vc

0xaf92,	// (0x00057b51) list_double2_graphic_pane_vc_ParamLimits

0xaf92,	// (0x00057b51) list_double2_graphic_pane_vc

0xaf92,	// (0x00057b51) list_double2_large_graphic_pane_vc_ParamLimits

0xaf92,	// (0x00057b51) list_double2_large_graphic_pane_vc

0xaf92,	// (0x00057b51) list_double2_pane_vc_ParamLimits

0xaf92,	// (0x00057b51) list_double2_pane_vc

0xaf92,	// (0x00057b51) list_double_graphic_heading_pane_vc_ParamLimits

0xaf92,	// (0x00057b51) list_double_graphic_heading_pane_vc

0xaf92,	// (0x00057b51) list_double_graphic_pane_vc_ParamLimits

0xaf92,	// (0x00057b51) list_double_graphic_pane_vc

0xaf92,	// (0x00057b51) list_double_heading_pane_vc_ParamLimits

0xaf92,	// (0x00057b51) list_double_heading_pane_vc

0xafa4,	// (0x00057b63) list_double_large_graphic_pane_vc_ParamLimits

0xafa4,	// (0x00057b63) list_double_large_graphic_pane_vc

0xaf92,	// (0x00057b51) list_double_number_pane_vc_ParamLimits

0xaf92,	// (0x00057b51) list_double_number_pane_vc

0xaf92,	// (0x00057b51) list_double_pane_vc_ParamLimits

0xaf92,	// (0x00057b51) list_double_pane_vc

0xaf92,	// (0x00057b51) list_double_time_pane_vc_ParamLimits

0xaf92,	// (0x00057b51) list_double_time_pane_vc

0xaf92,	// (0x00057b51) list_setting_number_pane_vc_ParamLimits

0xaf92,	// (0x00057b51) list_setting_number_pane_vc

0xaf92,	// (0x00057b51) list_setting_pane_vc_ParamLimits

0xaf92,	// (0x00057b51) list_setting_pane_vc

0xaf92,	// (0x00057b51) list_single_graphic_heading_pane_vc_ParamLimits

0xaf92,	// (0x00057b51) list_single_graphic_heading_pane_vc

0xaf92,	// (0x00057b51) list_single_heading_pane_vc_ParamLimits

0xaf92,	// (0x00057b51) list_single_heading_pane_vc

0x8169,	// (0x00054d28) list_single_number_heading_pane_vc_ParamLimits

0x8169,	// (0x00054d28) list_single_number_heading_pane_vc

0x3abd,	// (0x0005067c) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x3abd,	// (0x0005067c) list_double_graphic_heading_pane_vc_g1

0x8488,	// (0x00055047) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x8488,	// (0x00055047) list_double_graphic_heading_pane_vc_g2

0x807d,	// (0x00054c3c) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x807d,	// (0x00054c3c) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf79e,	// (0x0005c35d) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf79e,	// (0x0005c35d) list_double_graphic_heading_pane_vc_g

0x61c5,	// (0x00052d84) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x61c5,	// (0x00052d84) list_double_graphic_heading_pane_vc_t1

0x61e1,	// (0x00052da0) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x61e1,	// (0x00052da0) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ce,	// (0x0005c58d) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ce,	// (0x0005c58d) list_double_graphic_heading_pane_vc_t

0x8136,	// (0x00054cf5) list_setting_pane_vc_g1_ParamLimits

0x8136,	// (0x00054cf5) list_setting_pane_vc_g1

0x8142,	// (0x00054d01) list_setting_pane_vc_g2_ParamLimits

0x8142,	// (0x00054d01) list_setting_pane_vc_g2

0x0001,

0xf7c4,	// (0x0005c383) list_setting_pane_vc_g_ParamLimits

0xf7c4,	// (0x0005c383) list_setting_pane_vc_g

0x61ff,	// (0x00052dbe) list_setting_pane_vc_t1_ParamLimits

0x61ff,	// (0x00052dbe) list_setting_pane_vc_t1

0x621b,	// (0x00052dda) list_setting_pane_vc_t2_ParamLimits

0x621b,	// (0x00052dda) list_setting_pane_vc_t2

0x0001,

0xf9fc,	// (0x0005c5bb) list_setting_pane_vc_t_ParamLimits

0xf9fc,	// (0x0005c5bb) list_setting_pane_vc_t

0x5d5b,	// (0x0005291a) set_value_pane_cp_vc_ParamLimits

0x5d5b,	// (0x0005291a) set_value_pane_cp_vc

0x8488,	// (0x00055047) list_single_number_heading_pane_vc_g1_ParamLimits

0x8488,	// (0x00055047) list_single_number_heading_pane_vc_g1

0x807d,	// (0x00054c3c) list_single_number_heading_pane_vc_g2_ParamLimits

0x807d,	// (0x00054c3c) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005c16c) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005c16c) list_single_number_heading_pane_vc_g

0x3a83,	// (0x00050642) list_single_number_heading_pane_vc_t1_ParamLimits

0x3a83,	// (0x00050642) list_single_number_heading_pane_vc_t1

0x6237,	// (0x00052df6) list_single_number_heading_pane_vc_t2_ParamLimits

0x6237,	// (0x00052df6) list_single_number_heading_pane_vc_t2

0x3aab,	// (0x0005066a) list_single_number_heading_pane_vc_t3_ParamLimits

0x3aab,	// (0x0005066a) list_single_number_heading_pane_vc_t3

0x0002,

0xfa01,	// (0x0005c5c0) list_single_number_heading_pane_vc_t_ParamLimits

0xfa01,	// (0x0005c5c0) list_single_number_heading_pane_vc_t

0x3abd,	// (0x0005067c) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3abd,	// (0x0005067c) list_single_graphic_heading_pane_vc_g1

0x8488,	// (0x00055047) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x8488,	// (0x00055047) list_single_graphic_heading_pane_vc_g4

0x807d,	// (0x00054c3c) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x807d,	// (0x00054c3c) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf79e,	// (0x0005c35d) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf79e,	// (0x0005c35d) list_single_graphic_heading_pane_vc_g

0x3a83,	// (0x00050642) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3a83,	// (0x00050642) list_single_graphic_heading_pane_vc_t1

0x624d,	// (0x00052e0c) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x624d,	// (0x00052e0c) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa08,	// (0x0005c5c7) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa08,	// (0x0005c5c7) list_single_graphic_heading_pane_vc_t

0x8488,	// (0x00055047) list_double2_pane_vc_g1_ParamLimits

0x8488,	// (0x00055047) list_double2_pane_vc_g1

0x807d,	// (0x00054c3c) list_double2_pane_vc_g2_ParamLimits

0x807d,	// (0x00054c3c) list_double2_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005c16c) list_double2_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005c16c) list_double2_pane_vc_g

0x60af,	// (0x00052c6e) list_double2_pane_vc_t1_ParamLimits

0x60af,	// (0x00052c6e) list_double2_pane_vc_t1

0x81c5,	// (0x00054d84) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x81c5,	// (0x00054d84) list_double2_large_graphic_pane_vc_g1

0x8488,	// (0x00055047) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x8488,	// (0x00055047) list_double2_large_graphic_pane_vc_g2

0x807d,	// (0x00054c3c) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x807d,	// (0x00054c3c) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa0d,	// (0x0005c5cc) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa0d,	// (0x0005c5cc) list_double2_large_graphic_pane_vc_g

0x625f,	// (0x00052e1e) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x625f,	// (0x00052e1e) list_double2_large_graphic_pane_vc_t1

0x81d1,	// (0x00054d90) list_double_time_pane_vc_g1_ParamLimits

0x81d1,	// (0x00054d90) list_double_time_pane_vc_g1

0x81dd,	// (0x00054d9c) list_double_time_pane_vc_g2_ParamLimits

0x81dd,	// (0x00054d9c) list_double_time_pane_vc_g2

0x0001,

0xfa14,	// (0x0005c5d3) list_double_time_pane_vc_g_ParamLimits

0xfa14,	// (0x0005c5d3) list_double_time_pane_vc_g

0x6275,	// (0x00052e34) list_double_time_pane_vc_t1_ParamLimits

0x6275,	// (0x00052e34) list_double_time_pane_vc_t1

0x6299,	// (0x00052e58) list_double_time_pane_vc_t2_ParamLimits

0x6299,	// (0x00052e58) list_double_time_pane_vc_t2

0x62e8,	// (0x00052ea7) list_double_time_pane_vc_t3_ParamLimits

0x62e8,	// (0x00052ea7) list_double_time_pane_vc_t3

0x62fa,	// (0x00052eb9) list_double_time_pane_vc_t4_ParamLimits

0x62fa,	// (0x00052eb9) list_double_time_pane_vc_t4

0x0003,

0xfa19,	// (0x0005c5d8) list_double_time_pane_vc_t_ParamLimits

0xfa19,	// (0x0005c5d8) list_double_time_pane_vc_t

0x8488,	// (0x00055047) list_double_pane_vc_g1_ParamLimits

0x8488,	// (0x00055047) list_double_pane_vc_g1

0x807d,	// (0x00054c3c) list_double_pane_vc_g2_ParamLimits

0x807d,	// (0x00054c3c) list_double_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005c16c) list_double_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005c16c) list_double_pane_vc_g

0x630e,	// (0x00052ecd) list_double_pane_vc_t1_ParamLimits

0x630e,	// (0x00052ecd) list_double_pane_vc_t1

0x6322,	// (0x00052ee1) list_double_pane_vc_t2_ParamLimits

0x6322,	// (0x00052ee1) list_double_pane_vc_t2

0x0001,

0xfa22,	// (0x0005c5e1) list_double_pane_vc_t_ParamLimits

0xfa22,	// (0x0005c5e1) list_double_pane_vc_t

0x8488,	// (0x00055047) list_double_number_pane_vc_g1_ParamLimits

0x8488,	// (0x00055047) list_double_number_pane_vc_g1

0x807d,	// (0x00054c3c) list_double_number_pane_vc_g2_ParamLimits

0x807d,	// (0x00054c3c) list_double_number_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005c16c) list_double_number_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005c16c) list_double_number_pane_vc_g

0x633a,	// (0x00052ef9) list_double_number_pane_vc_t1_ParamLimits

0x633a,	// (0x00052ef9) list_double_number_pane_vc_t1

0x634c,	// (0x00052f0b) list_double_number_pane_vc_t2_ParamLimits

0x634c,	// (0x00052f0b) list_double_number_pane_vc_t2

0x6360,	// (0x00052f1f) list_double_number_pane_vc_t3_ParamLimits

0x6360,	// (0x00052f1f) list_double_number_pane_vc_t3

0x0002,

0xfa27,	// (0x0005c5e6) list_double_number_pane_vc_t_ParamLimits

0xfa27,	// (0x0005c5e6) list_double_number_pane_vc_t

0x81e9,	// (0x00054da8) list_double_large_graphic_pane_vc_g1_ParamLimits

0x81e9,	// (0x00054da8) list_double_large_graphic_pane_vc_g1

0x8205,	// (0x00054dc4) list_double_large_graphic_pane_vc_g2_ParamLimits

0x8205,	// (0x00054dc4) list_double_large_graphic_pane_vc_g2

0x8219,	// (0x00054dd8) list_double_large_graphic_pane_vc_g3_ParamLimits

0x8219,	// (0x00054dd8) list_double_large_graphic_pane_vc_g3

0x6378,	// (0x00052f37) list_double_large_graphic_pane_vc_g4_ParamLimits

0x6378,	// (0x00052f37) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa2e,	// (0x0005c5ed) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa2e,	// (0x0005c5ed) list_double_large_graphic_pane_vc_g

0x6387,	// (0x00052f46) list_double_large_graphic_pane_vc_t1_ParamLimits

0x6387,	// (0x00052f46) list_double_large_graphic_pane_vc_t1

0x63a3,	// (0x00052f62) list_double_large_graphic_pane_vc_t2_ParamLimits

0x63a3,	// (0x00052f62) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa37,	// (0x0005c5f6) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa37,	// (0x0005c5f6) list_double_large_graphic_pane_vc_t

0x8488,	// (0x00055047) list_double_heading_pane_vc_g1_ParamLimits

0x8488,	// (0x00055047) list_double_heading_pane_vc_g1

0x807d,	// (0x00054c3c) list_double_heading_pane_vc_g2_ParamLimits

0x807d,	// (0x00054c3c) list_double_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005c16c) list_double_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005c16c) list_double_heading_pane_vc_g

0x63c5,	// (0x00052f84) list_double_heading_pane_vc_t1_ParamLimits

0x63c5,	// (0x00052f84) list_double_heading_pane_vc_t1

0x63d9,	// (0x00052f98) list_double_heading_pane_vc_t2_ParamLimits

0x63d9,	// (0x00052f98) list_double_heading_pane_vc_t2

0x0001,

0xfa3c,	// (0x0005c5fb) list_double_heading_pane_vc_t_ParamLimits

0xfa3c,	// (0x0005c5fb) list_double_heading_pane_vc_t

0x63f1,	// (0x00052fb0) list_double_graphic_pane_vc_g1_ParamLimits

0x63f1,	// (0x00052fb0) list_double_graphic_pane_vc_g1

0x8228,	// (0x00054de7) list_double_graphic_pane_vc_g2_ParamLimits

0x8228,	// (0x00054de7) list_double_graphic_pane_vc_g2

0x8488,	// (0x00055047) list_double_graphic_pane_vc_g3_ParamLimits

0x8488,	// (0x00055047) list_double_graphic_pane_vc_g3

0x0003,

0xfa41,	// (0x0005c600) list_double_graphic_pane_vc_g_ParamLimits

0xfa41,	// (0x0005c600) list_double_graphic_pane_vc_g

0x63fd,	// (0x00052fbc) list_double_graphic_pane_vc_t1_ParamLimits

0x63fd,	// (0x00052fbc) list_double_graphic_pane_vc_t1

0x6427,	// (0x00052fe6) list_double_graphic_pane_vc_t2_ParamLimits

0x6427,	// (0x00052fe6) list_double_graphic_pane_vc_t2

0x0001,

0xfa4a,	// (0x0005c609) list_double_graphic_pane_vc_t_ParamLimits

0xfa4a,	// (0x0005c609) list_double_graphic_pane_vc_t

0x4561,	// (0x00051120) aid_size_cell_fastswap

0x4569,	// (0x00051128) aid_size_cell_touch_ParamLimits

0x4569,	// (0x00051128) aid_size_cell_touch

0x47ce,	// (0x0005138d) popup_fast_swap_wide_window_ParamLimits

0x47ce,	// (0x0005138d) popup_fast_swap_wide_window

0x48e2,	// (0x000514a1) touch_pane_ParamLimits

0x48e2,	// (0x000514a1) touch_pane

0x84e5,	// (0x000550a4) button_value_adjust_pane_cp2

0x4d77,	// (0x00051936) button_value_adjust_pane_cp4

0x4d9b,	// (0x0005195a) form_field_data_pane_cp2

0x4dbc,	// (0x0005197b) form_field_data_wide_pane_cp2

0x896c,	// (0x0005552b) bg_scroll_pane_ParamLimits

0x517f,	// (0x00051d3e) scroll_handle_pane_ParamLimits

0x5193,	// (0x00051d52) scroll_sc2_down_pane_ParamLimits

0x5193,	// (0x00051d52) scroll_sc2_down_pane

0x899d,	// (0x0005555c) scroll_sc2_up_pane_ParamLimits

0x899d,	// (0x0005555c) scroll_sc2_up_pane

0xbbb8,	// (0x00058777) grid_wheel_folder_pane_g1_ParamLimits

0xbbb8,	// (0x00058777) grid_wheel_folder_pane_g1

0x53c6,	// (0x00051f85) clock_nsta_pane_cp2_ParamLimits

0x53c6,	// (0x00051f85) clock_nsta_pane_cp2

0x91ab,	// (0x00055d6a) listscroll_midp_pane_ParamLimits

0x91b7,	// (0x00055d76) midp_canvas_pane

0x949f,	// (0x0005605e) nsta_clock_indic_pane

0x94d3,	// (0x00056092) listscroll_form_pane_vc

0x94db,	// (0x0005609a) listscroll_set_pane_vc_ParamLimits

0x94db,	// (0x0005609a) listscroll_set_pane_vc

0x95d4,	// (0x00056193) clock_nsta_pane

0x964f,	// (0x0005620e) indicator_nsta_pane

0x992f,	// (0x000564ee) bg_popup_sub_pane_cp2_ParamLimits

0x9943,	// (0x00056502) find_pane_cp2_ParamLimits

0x9943,	// (0x00056502) find_pane_cp2

0x9959,	// (0x00056518) grid_toobar_pane_ParamLimits

0x9a39,	// (0x000565f8) list_form_gen_pane_vc_ParamLimits

0x9a39,	// (0x000565f8) list_form_gen_pane_vc

0x9a4f,	// (0x0005660e) scroll_pane_cp8_vc_ParamLimits

0x9a4f,	// (0x0005660e) scroll_pane_cp8_vc

0x9acb,	// (0x0005668a) data_form_wide_pane_vc_ParamLimits

0x9acb,	// (0x0005668a) data_form_wide_pane_vc

0x9ad7,	// (0x00056696) form_field_data_wide_pane_vc_g1

0x9adf,	// (0x0005669e) form_field_data_wide_pane_vc_t1_ParamLimits

0x9adf,	// (0x0005669e) form_field_data_wide_pane_vc_t1

0x84f9,	// (0x000550b8) input_focus_pane_cp6_vc_ParamLimits

0x84f9,	// (0x000550b8) input_focus_pane_cp6_vc

0x9e05,	// (0x000569c4) list_midp_pane_ParamLimits

0x9e11,	// (0x000569d0) scroll_pane_cp16_ParamLimits

0x9e11,	// (0x000569d0) scroll_pane_cp16

0x9e7b,	// (0x00056a3a) button_value_adjust_pane_ParamLimits

0x9e7b,	// (0x00056a3a) button_value_adjust_pane

0xadec,	// (0x000579ab) button_value_adjust_pane_cp6_ParamLimits

0xadec,	// (0x000579ab) button_value_adjust_pane_cp6

0xaf16,	// (0x00057ad5) settings_code_pane_cp_ParamLimits

0xaf16,	// (0x00057ad5) settings_code_pane_cp

0x2847,	// (0x0004f406) cell_touch_pane_g1

0x2847,	// (0x0004f406) cell_touch_pane_g2

0x0001,

0xf6e3,	// (0x0005c2a2) cell_touch_pane_g

0xb4d6,	// (0x00058095) cell_touch_pane_cp_ParamLimits

0xb4d6,	// (0x00058095) cell_touch_pane_cp

0xb4e6,	// (0x000580a5) cell_touch_pane_ParamLimits

0xb4e6,	// (0x000580a5) cell_touch_pane

0x2847,	// (0x0004f406) scroll_sc2_down_pane_g1

0x2847,	// (0x0004f406) scroll_sc2_up_pane_g1

0x7769,	// (0x00054328) bg_set_opt_pane_cp4_vc

0xb4f8,	// (0x000580b7) list_set_graphic_pane_vc_g1_ParamLimits

0xb4f8,	// (0x000580b7) list_set_graphic_pane_vc_g1

0xb504,	// (0x000580c3) list_set_graphic_pane_vc_g2_ParamLimits

0xb504,	// (0x000580c3) list_set_graphic_pane_vc_g2

0x0001,

0xf9d3,	// (0x0005c592) list_set_graphic_pane_vc_g_ParamLimits

0xf9d3,	// (0x0005c592) list_set_graphic_pane_vc_g

0xb510,	// (0x000580cf) text_primary_small_cp13_vc_ParamLimits

0xb510,	// (0x000580cf) text_primary_small_cp13_vc

0xb528,	// (0x000580e7) list_set_graphic_pane_vc_ParamLimits

0xb528,	// (0x000580e7) list_set_graphic_pane_vc

0x7769,	// (0x00054328) input_focus_pane_cp2_vc

0x2847,	// (0x0004f406) setting_code_pane_vc_g1

0x7894,	// (0x00054453) setting_code_pane_vc_t1

0xb53b,	// (0x000580fa) set_text_pane_vc_t1_ParamLimits

0xb53b,	// (0x000580fa) set_text_pane_vc_t1

0x7769,	// (0x00054328) input_focus_pane_cp1_vc

0xb557,	// (0x00058116) list_set_text_pane_vc

0x2847,	// (0x0004f406) setting_text_pane_vc_g1

0x7769,	// (0x00054328) bg_set_opt_pane_cp2_vc

0x788b,	// (0x0005444a) setting_slider_graphic_pane_vc_g1

0xb561,	// (0x00058120) setting_slider_graphic_pane_vc_t1

0xb571,	// (0x00058130) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9d8,	// (0x0005c597) setting_slider_graphic_pane_vc_t

0xb581,	// (0x00058140) slider_set_pane_cp_vc

0xb589,	// (0x00058148) slider_set_pane_vc_g1

0xb592,	// (0x00058151) slider_set_pane_vc_g2

0x0006,

0xf9dd,	// (0x0005c59c) slider_set_pane_vc_g

0x8545,	// (0x00055104) set_opt_bg_pane_g1_copy1

0x854d,	// (0x0005510c) set_opt_bg_pane_g2_copy1

0xb5be,	// (0x0005817d) set_opt_bg_pane_g3_copy1

0x855d,	// (0x0005511c) set_opt_bg_pane_g4_copy1

0x8565,	// (0x00055124) set_opt_bg_pane_g5_copy1

0x856d,	// (0x0005512c) set_opt_bg_pane_g6_copy1

0xb5c8,	// (0x00058187) set_opt_bg_pane_g7_copy1

0xb5d2,	// (0x00058191) set_opt_bg_pane_g8_copy1

0xb5dc,	// (0x0005819b) set_opt_bg_pane_g9_copy1

0x7769,	// (0x00054328) bg_set_opt_pane_cp_vc

0xb5e6,	// (0x000581a5) setting_slider_pane_vc_t1

0xb5f5,	// (0x000581b4) setting_slider_pane_vc_t2

0xb605,	// (0x000581c4) setting_slider_pane_vc_t3

0x0002,

0xf9ec,	// (0x0005c5ab) setting_slider_pane_vc_t

0xb615,	// (0x000581d4) slider_set_pane_vc

0x5e41,	// (0x00052a00) volume_set_pane_vc_g1

0x5e4a,	// (0x00052a09) volume_set_pane_vc_g2

0x5e53,	// (0x00052a12) volume_set_pane_vc_g3

0x5e5c,	// (0x00052a1b) volume_set_pane_vc_g4

0x5e65,	// (0x00052a24) volume_set_pane_vc_g5

0x5e6e,	// (0x00052a2d) volume_set_pane_vc_g6

0x5e77,	// (0x00052a36) volume_set_pane_vc_g7

0x5e80,	// (0x00052a3f) volume_set_pane_vc_g8

0x5e89,	// (0x00052a48) volume_set_pane_vc_g9

0x5e92,	// (0x00052a51) volume_set_pane_vc_g10

0x0009,

0xf891,	// (0x0005c450) volume_set_pane_vc_g

0xb61d,	// (0x000581dc) volume_set_pane_vc

0xb625,	// (0x000581e4) button_value_adjust_pane_cp1_vc

0xb62f,	// (0x000581ee) list_highlight_pane_cp2_vc

0xb638,	// (0x000581f7) list_set_pane_vc_ParamLimits

0xb638,	// (0x000581f7) list_set_pane_vc

0xb696,	// (0x00058255) main_pane_set_vc_t1_ParamLimits

0xb696,	// (0x00058255) main_pane_set_vc_t1

0xb6ab,	// (0x0005826a) main_pane_set_vc_t2_ParamLimits

0xb6ab,	// (0x0005826a) main_pane_set_vc_t2

0xb6bd,	// (0x0005827c) main_pane_set_vc_t3_ParamLimits

0xb6bd,	// (0x0005827c) main_pane_set_vc_t3

0xb6d1,	// (0x00058290) main_pane_set_vc_t4_ParamLimits

0xb6d1,	// (0x00058290) main_pane_set_vc_t4

0x0003,

0xf9f3,	// (0x0005c5b2) main_pane_set_vc_t_ParamLimits

0xf9f3,	// (0x0005c5b2) main_pane_set_vc_t

0xb6e5,	// (0x000582a4) setting_code_pane_vc_ParamLimits

0xb6e5,	// (0x000582a4) setting_code_pane_vc

0xb6f6,	// (0x000582b5) setting_slider_graphic_pane_vc

0xb6f6,	// (0x000582b5) setting_slider_pane_vc

0xb6f6,	// (0x000582b5) setting_text_pane_vc

0xb6f6,	// (0x000582b5) setting_volume_pane_vc

0xb700,	// (0x000582bf) scroll_pane_cp121_vc

0x84d3,	// (0x00055092) set_content_pane_vc

0xb708,	// (0x000582c7) button_value_adjust_pane_g1

0xb711,	// (0x000582d0) button_value_adjust_pane_g2

0x0001,

0xfa4f,	// (0x0005c60e) button_value_adjust_pane_g

0xb71a,	// (0x000582d9) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb71a,	// (0x000582d9) form_field_slider_wide_pane_vc_t1

0xb72e,	// (0x000582ed) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb72e,	// (0x000582ed) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa54,	// (0x0005c613) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa54,	// (0x0005c613) form_field_slider_wide_pane_vc_t

0x7ac4,	// (0x00054683) input_focus_pane_cp10_vc_ParamLimits

0x7ac4,	// (0x00054683) input_focus_pane_cp10_vc

0xb75c,	// (0x0005831b) slider_cont_pane_cp1_vc_ParamLimits

0xb75c,	// (0x0005831b) slider_cont_pane_cp1_vc

0xb76e,	// (0x0005832d) slider_form_pane_g1_cp2

0xb592,	// (0x00058151) slider_form_pane_g2_cp2

0xb79b,	// (0x0005835a) form_field_slider_pane_vc_t3

0xb7a9,	// (0x00058368) form_field_slider_pane_vc_t4

0xb7b7,	// (0x00058376) slider_form_pane_vc_ParamLimits

0xb7b7,	// (0x00058376) slider_form_pane_vc

0xb7c4,	// (0x00058383) form_field_slider_pane_vc_t1_ParamLimits

0xb7c4,	// (0x00058383) form_field_slider_pane_vc_t1

0xb72e,	// (0x000582ed) form_field_slider_pane_vc_t2_ParamLimits

0xb72e,	// (0x000582ed) form_field_slider_pane_vc_t2

0x0001,

0xfa66,	// (0x0005c625) form_field_slider_pane_vc_t_ParamLimits

0xfa66,	// (0x0005c625) form_field_slider_pane_vc_t

0x7ac4,	// (0x00054683) input_focus_pane_cp9_vc_ParamLimits

0x7ac4,	// (0x00054683) input_focus_pane_cp9_vc

0xb7e0,	// (0x0005839f) slider_cont_pane_vc_ParamLimits

0xb7e0,	// (0x0005839f) slider_cont_pane_vc

0xb7f4,	// (0x000583b3) list_form_graphic_pane_cp_vc_ParamLimits

0xb7f4,	// (0x000583b3) list_form_graphic_pane_cp_vc

0x9ad7,	// (0x00056696) form_field_popup_wide_pane_vc_g1

0xb809,	// (0x000583c8) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb809,	// (0x000583c8) form_field_popup_wide_pane_vc_t1

0x84f9,	// (0x000550b8) input_focus_pane_cp8_vc_ParamLimits

0x84f9,	// (0x000550b8) input_focus_pane_cp8_vc

0xb84e,	// (0x0005840d) list_form_wide_pane_vc_ParamLimits

0xb84e,	// (0x0005840d) list_form_wide_pane_vc

0xb85a,	// (0x00058419) list_form_graphic_pane_vc_g1

0xb862,	// (0x00058421) list_form_graphic_pane_vc_t1_ParamLimits

0xb862,	// (0x00058421) list_form_graphic_pane_vc_t1

0x7849,	// (0x00054408) list_highlight_pane_cp5_vc_ParamLimits

0x7849,	// (0x00054408) list_highlight_pane_cp5_vc

0xb87e,	// (0x0005843d) list_form_graphic_pane_vc_ParamLimits

0xb87e,	// (0x0005843d) list_form_graphic_pane_vc

0x9ad7,	// (0x00056696) form_field_popup_pane_vc_g1

0xb894,	// (0x00058453) form_field_popup_pane_vc_t1_ParamLimits

0xb894,	// (0x00058453) form_field_popup_pane_vc_t1

0x84f9,	// (0x000550b8) input_focus_pane_cp7_vc_ParamLimits

0x84f9,	// (0x000550b8) input_focus_pane_cp7_vc

0xb8ab,	// (0x0005846a) list_form_pane_vc_ParamLimits

0xb8ab,	// (0x0005846a) list_form_pane_vc

0xb8b7,	// (0x00058476) data_form_pane_vc_t1_ParamLimits

0xb8b7,	// (0x00058476) data_form_pane_vc_t1

0x8545,	// (0x00055104) input_focus_pane_vc_g1

0x854d,	// (0x0005510c) input_focus_pane_vc_g2

0x8555,	// (0x00055114) input_focus_pane_vc_g3

0x855d,	// (0x0005511c) input_focus_pane_vc_g4

0x8565,	// (0x00055124) input_focus_pane_vc_g5

0x856d,	// (0x0005512c) input_focus_pane_vc_g6

0x8575,	// (0x00055134) input_focus_pane_vc_g7

0x857d,	// (0x0005513c) input_focus_pane_vc_g8

0x8585,	// (0x00055144) input_focus_pane_vc_g9

0x2847,	// (0x0004f406) input_focus_pane_vc_g10

0x0009,

0xf66c,	// (0x0005c22b) input_focus_pane_vc_g

0x9acb,	// (0x0005668a) data_form_pane_vc_ParamLimits

0x9acb,	// (0x0005668a) data_form_pane_vc

0x9ad7,	// (0x00056696) form_field_data_pane_vc_g1

0xb8d2,	// (0x00058491) form_field_data_pane_vc_t1_ParamLimits

0xb8d2,	// (0x00058491) form_field_data_pane_vc_t1

0x84f9,	// (0x000550b8) input_focus_pane_vc_ParamLimits

0x84f9,	// (0x000550b8) input_focus_pane_vc

0xb8ec,	// (0x000584ab) button_value_adjust_pane_cp3_vc

0xb8f4,	// (0x000584b3) button_value_adjust_pane_cp5_vc

0xb8fc,	// (0x000584bb) form_field_data_pane_vc_ParamLimits

0xb8fc,	// (0x000584bb) form_field_data_pane_vc

0xb913,	// (0x000584d2) form_field_data_pane_vc_cp2

0xb91b,	// (0x000584da) form_field_data_wide_pane_vc_ParamLimits

0xb91b,	// (0x000584da) form_field_data_wide_pane_vc

0xb931,	// (0x000584f0) form_field_data_wide_pane_vc_cp2

0xb939,	// (0x000584f8) form_field_popup_pane_vc_ParamLimits

0xb939,	// (0x000584f8) form_field_popup_pane_vc

0xb950,	// (0x0005850f) form_field_popup_wide_pane_vc_ParamLimits

0xb950,	// (0x0005850f) form_field_popup_wide_pane_vc

0xb966,	// (0x00058525) form_field_slider_pane_vc_ParamLimits

0xb966,	// (0x00058525) form_field_slider_pane_vc

0xb979,	// (0x00058538) form_field_slider_wide_pane_vc_ParamLimits

0xb979,	// (0x00058538) form_field_slider_wide_pane_vc

0xb98c,	// (0x0005854b) grid_touch_1_pane_ParamLimits

0xb98c,	// (0x0005854b) grid_touch_1_pane

0xb998,	// (0x00058557) grid_touch_2_pane_ParamLimits

0xb998,	// (0x00058557) grid_touch_2_pane

0x946a,	// (0x00056029) touch_pane_g1_ParamLimits

0x946a,	// (0x00056029) touch_pane_g1

0xb9b0,	// (0x0005856f) cell_app_pane_cp_wide_ParamLimits

0xb9b0,	// (0x0005856f) cell_app_pane_cp_wide

0xb9c1,	// (0x00058580) grid_popup_fast_wide_pane_ParamLimits

0xb9c1,	// (0x00058580) grid_popup_fast_wide_pane

0xb9e1,	// (0x000585a0) scroll_pane_cp19_ParamLimits

0xb9e1,	// (0x000585a0) scroll_pane_cp19

0x7769,	// (0x00054328) bg_popup_window_pane_cp20

0xb9f5,	// (0x000585b4) listscroll_popup_fast_wide_pane

0xb9fd,	// (0x000585bc) grid_indicator_nsta_pane

0xba0f,	// (0x000585ce) clock_nsta_pane_g1

0xba18,	// (0x000585d7) clock_nsta_pane_t1

0xba34,	// (0x000585f3) cell_indicator_nsta_pane_ParamLimits

0xba34,	// (0x000585f3) cell_indicator_nsta_pane

0xba69,	// (0x00058628) cell_indicator_nsta_pane_g1

0xba77,	// (0x00058636) cell_indicator_nsta_pane_g2

0x0001,

0xfa77,	// (0x0005c636) cell_indicator_nsta_pane_g

0xba89,	// (0x00058648) clock_nsta_pane_cp

0xba92,	// (0x00058651) indicator_nsta_pane_cp

0xba9c,	// (0x0005865b) nsta_clock_indic_pane_g1

0x7912,	// (0x000544d1) grid_indicator_pane

0x8a92,	// (0x00055651) scroll_pane_cp29

0x5315,	// (0x00051ed4) indicator_nsta_pane_cp2_ParamLimits

0x5315,	// (0x00051ed4) indicator_nsta_pane_cp2

0x7849,	// (0x00054408) main_apps_wheel_pane

0x9ce6,	// (0x000568a5) form_midp_field_text_pane_ParamLimits

0x9e31,	// (0x000569f0) scroll_bar_cp050_ParamLimits

0xbaf5,	// (0x000586b4) cell_indicator_pane_ParamLimits

0xbaf5,	// (0x000586b4) cell_indicator_pane

0xbb0c,	// (0x000586cb) cell_indicator_pane_g1

0xbb16,	// (0x000586d5) grid_wheel_folder_pane_ParamLimits

0xbb16,	// (0x000586d5) grid_wheel_folder_pane

0xbb2c,	// (0x000586eb) list_wheel_apps_pane_ParamLimits

0xbb2c,	// (0x000586eb) list_wheel_apps_pane

0xbb3d,	// (0x000586fc) main_apps_wheel_pane_g1_ParamLimits

0xbb3d,	// (0x000586fc) main_apps_wheel_pane_g1

0xbb51,	// (0x00058710) main_apps_wheel_pane_g2_ParamLimits

0xbb51,	// (0x00058710) main_apps_wheel_pane_g2

0x0001,

0xfa93,	// (0x0005c652) main_apps_wheel_pane_g_ParamLimits

0xfa93,	// (0x0005c652) main_apps_wheel_pane_g

0xbb69,	// (0x00058728) main_apps_wheel_pane_t1_ParamLimits

0xbb69,	// (0x00058728) main_apps_wheel_pane_t1

0xbb8c,	// (0x0005874b) list_wheel_apps_pane_g1

0xbb94,	// (0x00058753) list_wheel_apps_pane_g2

0xbb9c,	// (0x0005875b) list_wheel_apps_pane_g3

0xbba4,	// (0x00058763) list_wheel_apps_pane_g4

0xbbae,	// (0x0005876d) list_wheel_apps_pane_g5

0x0004,

0xfa98,	// (0x0005c657) list_wheel_apps_pane_g

0x9026,	// (0x00055be5) navi_icon_text_pane

0x9503,	// (0x000560c2) aid_fill_nsta

0xbbd1,	// (0x00058790) navi_icon_text_pane_g1

0xbbdd,	// (0x0005879c) navi_icon_text_pane_t1

0x8ec4,	// (0x00055a83) list_set_graphic_pane_t1_ParamLimits

0x8ec4,	// (0x00055a83) list_set_graphic_pane_t1

0xa59c,	// (0x0005715b) popup_midp_note_alarm_window_t6_ParamLimits

0xa59c,	// (0x0005715b) popup_midp_note_alarm_window_t6

0xa5ae,	// (0x0005716d) popup_midp_note_alarm_window_t7_ParamLimits

0xa5ae,	// (0x0005716d) popup_midp_note_alarm_window_t7

0xa5c0,	// (0x0005717f) popup_midp_note_alarm_window_t8_ParamLimits

0xa5c0,	// (0x0005717f) popup_midp_note_alarm_window_t8

0xa5d2,	// (0x00057191) popup_midp_note_alarm_window_t9_ParamLimits

0xa5d2,	// (0x00057191) popup_midp_note_alarm_window_t9

0xa5e4,	// (0x000571a3) popup_midp_note_alarm_window_t10_ParamLimits

0xa5e4,	// (0x000571a3) popup_midp_note_alarm_window_t10

0xa5f6,	// (0x000571b5) popup_midp_note_alarm_window_t11_ParamLimits

0xa5f6,	// (0x000571b5) popup_midp_note_alarm_window_t11

0xa608,	// (0x000571c7) scroll_pane_cp17_ParamLimits

0xa608,	// (0x000571c7) scroll_pane_cp17

0x5e41,	// (0x00052a00) volume_small_pane_cp_g1

0x6451,	// (0x00053010) volume_small_pane_cp_g2

0x645a,	// (0x00053019) volume_small_pane_cp_g3

0x6463,	// (0x00053022) volume_small_pane_cp_g4

0x646c,	// (0x0005302b) volume_small_pane_cp_g5

0x6475,	// (0x00053034) volume_small_pane_cp_g6

0x647e,	// (0x0005303d) volume_small_pane_cp_g7

0x6487,	// (0x00053046) volume_small_pane_cp_g8

0x6490,	// (0x0005304f) volume_small_pane_cp_g9

0x6499,	// (0x00053058) volume_small_pane_cp_g10

0x9280,	// (0x00055e3f) midp_ticker_pane_g1_ParamLimits

0x928c,	// (0x00055e4b) midp_ticker_pane_g2_ParamLimits

0xf738,	// (0x0005c2f7) midp_ticker_pane_g_ParamLimits

0x9298,	// (0x00055e57) midp_ticker_pane_t1_ParamLimits

0x9519,	// (0x000560d8) aid_fill_nsta_2

0x9e1d,	// (0x000569dc) list_form2_midp_pane

0xaf61,	// (0x00057b20) midp_editing_number_pane_ParamLimits

0xaf70,	// (0x00057b2f) midp_ticker_pane_ParamLimits

0xbbef,	// (0x000587ae) form2_midp_field_pane

0xbc13,	// (0x000587d2) scroll_pane_cp51

0xbc33,	// (0x000587f2) form2_midp_button_pane_ParamLimits

0xbc33,	// (0x000587f2) form2_midp_button_pane

0xbc45,	// (0x00058804) form2_midp_content_pane_ParamLimits

0xbc45,	// (0x00058804) form2_midp_content_pane

0xbc5f,	// (0x0005881e) form2_midp_field_choice_group_pane

0xbc67,	// (0x00058826) form2_midp_field_pane_g1

0xbc6f,	// (0x0005882e) form2_midp_field_pane_g2

0xbc77,	// (0x00058836) form2_midp_field_pane_g3

0xbc7f,	// (0x0005883e) form2_midp_field_pane_g4

0x0003,

0xfabd,	// (0x0005c67c) form2_midp_field_pane_g

0xbc87,	// (0x00058846) form2_midp_gauge_slider_pane

0xbc8f,	// (0x0005884e) form2_midp_gauge_wait_pane

0xbc97,	// (0x00058856) form2_midp_image_pane_ParamLimits

0xbc97,	// (0x00058856) form2_midp_image_pane

0xbcb2,	// (0x00058871) form2_midp_label_pane_ParamLimits

0xbcb2,	// (0x00058871) form2_midp_label_pane

0xbccb,	// (0x0005888a) form2_midp_label_pane_cp_ParamLimits

0xbccb,	// (0x0005888a) form2_midp_label_pane_cp

0xbcec,	// (0x000588ab) form2_midp_string_pane_ParamLimits

0xbcec,	// (0x000588ab) form2_midp_string_pane

0x64a2,	// (0x00053061) form2_midp_text_pane_ParamLimits

0x64a2,	// (0x00053061) form2_midp_text_pane

0xbcfe,	// (0x000588bd) form2_midp_time_pane

0xbd0e,	// (0x000588cd) input_focus_pane_cp51_ParamLimits

0xbd0e,	// (0x000588cd) input_focus_pane_cp51

0xbd26,	// (0x000588e5) form2_midp_label_pane_t1_ParamLimits

0xbd26,	// (0x000588e5) form2_midp_label_pane_t1

0x64c1,	// (0x00053080) form2_mdip_text_pane_t1_ParamLimits

0x64c1,	// (0x00053080) form2_mdip_text_pane_t1

0x64df,	// (0x0005309e) form2_midp_time_pane_t1

0xbd6f,	// (0x0005892e) form2_midp_gauge_slider_pane_t1

0xbd81,	// (0x00058940) form2_midp_gauge_slider_pane_t2

0xbd93,	// (0x00058952) form2_midp_gauge_slider_pane_t3

0x0002,

0xfac6,	// (0x0005c685) form2_midp_gauge_slider_pane_t

0xbda5,	// (0x00058964) form2_midp_slider_pane

0xbdb1,	// (0x00058970) form2_midp_gauge_wait_pane_t1

0xbdbf,	// (0x0005897e) form2_midp_wait_pane_ParamLimits

0xbdbf,	// (0x0005897e) form2_midp_wait_pane

0xbdea,	// (0x000589a9) list_single_2graphic_pane_cp4_ParamLimits

0xbdea,	// (0x000589a9) list_single_2graphic_pane_cp4

0x9b3f,	// (0x000566fe) list_single_midp_graphic_pane_cp_ParamLimits

0x9b3f,	// (0x000566fe) list_single_midp_graphic_pane_cp

0x7769,	// (0x00054328) list_highlight_pane_cp20

0xbe0e,	// (0x000589cd) list_single_2graphic_pane_g1_cp4

0xbe16,	// (0x000589d5) list_single_2graphic_pane_g2_cp4

0xbe1e,	// (0x000589dd) list_single_2graphic_pane_t1_cp4

0x7849,	// (0x00054408) list_highlight_pane_cp21

0xbe2d,	// (0x000589ec) list_single_midp_graphic_pane_g4_cp

0xbe3c,	// (0x000589fb) list_single_midp_graphic_pane_t1_cp

0xbe51,	// (0x00058a10) form2_mdip_string_pane_t1_ParamLimits

0xbe51,	// (0x00058a10) form2_mdip_string_pane_t1

0x7769,	// (0x00054328) bg_wml_button_pane_cp2

0x2847,	// (0x0004f406) form2_midp_image_pane_g1

0x80fd,	// (0x00054cbc) list_double_large_graphic_pane_g5_ParamLimits

0x80fd,	// (0x00054cbc) list_double_large_graphic_pane_g5

0x91ab,	// (0x00055d6a) midp_form_pane_ParamLimits

0x7849,	// (0x00054408) main_apps_wheel_pane_ParamLimits

0x5a0a,	// (0x000525c9) popup_preview_window_ParamLimits

0x5a0a,	// (0x000525c9) popup_preview_window

0x5bc5,	// (0x00052784) popup_touch_info_window_ParamLimits

0x5bc5,	// (0x00052784) popup_touch_info_window

0x5be3,	// (0x000527a2) popup_touch_menu_window_ParamLimits

0x5be3,	// (0x000527a2) popup_touch_menu_window

0x18ce,	// (0x0004e48d) bg_popup_sub_pane_cp6

0xbf4a,	// (0x00058b09) list_touch_menu_pane

0xbf52,	// (0x00058b11) list_single_touch_menu_pane_ParamLimits

0xbf52,	// (0x00058b11) list_single_touch_menu_pane

0xbf68,	// (0x00058b27) list_single_touch_menu_pane_t1

0x7849,	// (0x00054408) bg_popup_sub_pane_cp7_ParamLimits

0x7849,	// (0x00054408) bg_popup_sub_pane_cp7

0xbf76,	// (0x00058b35) heading_sub_pane

0xbf7e,	// (0x00058b3d) list_touch_info_pane_ParamLimits

0xbf7e,	// (0x00058b3d) list_touch_info_pane

0xbf8d,	// (0x00058b4c) list_single_touch_info_pane_ParamLimits

0xbf8d,	// (0x00058b4c) list_single_touch_info_pane

0xbf9f,	// (0x00058b5e) list_single_touch_info_pane_t1

0xbfad,	// (0x00058b6c) list_single_touch_info_pane_t2

0x0001,

0xfad4,	// (0x0005c693) list_single_touch_info_pane_t

0x91a3,	// (0x00055d62) bg_popup_heading_pane_cp

0xbfbb,	// (0x00058b7a) heading_sub_pane_t1

0x9a65,	// (0x00056624) bg_popup_preview_window_pane_cp_ParamLimits

0x9a65,	// (0x00056624) bg_popup_preview_window_pane_cp

0xbf76,	// (0x00058b35) heading_preview_pane

0xbf7e,	// (0x00058b3d) list_preview_pane_ParamLimits

0xbf7e,	// (0x00058b3d) list_preview_pane

0xbfc9,	// (0x00058b88) popup_preview_window_g1

0xbf8d,	// (0x00058b4c) list_single_preview_pane_ParamLimits

0xbf8d,	// (0x00058b4c) list_single_preview_pane

0xbfd1,	// (0x00058b90) list_single_preview_pane_g1

0xbfd9,	// (0x00058b98) list_single_preview_pane_t1

0xbf9f,	// (0x00058b5e) list_single_preview_pane_t2

0x0001,

0xfad9,	// (0x0005c698) list_single_preview_pane_t

0xbfe7,	// (0x00058ba6) bg_popup_heading_pane_cp2_ParamLimits

0xbfe7,	// (0x00058ba6) bg_popup_heading_pane_cp2

0xbffd,	// (0x00058bbc) heading_preview_pane_g1

0xc005,	// (0x00058bc4) heading_preview_pane_t1_ParamLimits

0xc005,	// (0x00058bc4) heading_preview_pane_t1

0x7935,	// (0x000544f4) soft_indicator_pane_t1_ParamLimits

0x8049,	// (0x00054c08) scroll_pane_ParamLimits

0x898b,	// (0x0005554a) scroll_sc2_left_pane

0x8994,	// (0x00055553) scroll_sc2_right_pane

0x89b3,	// (0x00055572) scroll_bg_pane_g1_ParamLimits

0x89c8,	// (0x00055587) scroll_bg_pane_g2_ParamLimits

0x89e0,	// (0x0005559f) scroll_bg_pane_g3_ParamLimits

0xf6c3,	// (0x0005c282) scroll_bg_pane_g_ParamLimits

0x89b3,	// (0x00055572) scroll_handle_pane_g1_ParamLimits

0x8a02,	// (0x000555c1) scroll_handle_pane_g2_ParamLimits

0x89e0,	// (0x0005559f) scroll_handle_pane_g3_ParamLimits

0xf6ca,	// (0x0005c289) scroll_handle_pane_g_ParamLimits

0x5689,	// (0x00052248) popup_choice_list_window_ParamLimits

0x5689,	// (0x00052248) popup_choice_list_window

0x993b,	// (0x000564fa) choice_list_pane

0x99bd,	// (0x0005657c) cell_toolbar_pane_t1

0x99e5,	// (0x000565a4) toolbar_button_pane_ParamLimits

0xaac2,	// (0x00057681) ai_gene_pane_1_t2_ParamLimits

0xaac2,	// (0x00057681) ai_gene_pane_1_t2

0x0001,

0xf8ed,	// (0x0005c4ac) ai_gene_pane_1_t_ParamLimits

0xf8ed,	// (0x0005c4ac) ai_gene_pane_1_t

0xc022,	// (0x00058be1) scroll_sc2_left_pane_g1

0xc022,	// (0x00058be1) scroll_sc2_right_pane_g1

0x94c7,	// (0x00056086) bg_popup_sub_pane_cp10

0xc02c,	// (0x00058beb) list_choice_list_pane

0xc045,	// (0x00058c04) list_single_choice_list_pane_ParamLimits

0xc045,	// (0x00058c04) list_single_choice_list_pane

0xc058,	// (0x00058c17) list_single_choice_list_pane_g1

0x8691,	// (0x00055250) list_single_choice_list_pane_t1_ParamLimits

0x8691,	// (0x00055250) list_single_choice_list_pane_t1

0xc060,	// (0x00058c1f) choice_list_pane_g1

0xc068,	// (0x00058c27) choice_list_pane_t1

0x18ce,	// (0x0004e48d) input_focus_pane_cp11

0x8868,	// (0x00055427) title_pane_stacon_g2_ParamLimits

0x8868,	// (0x00055427) title_pane_stacon_g2

0x0002,

0xf6a9,	// (0x0005c268) title_pane_stacon_g_ParamLimits

0xf6a9,	// (0x0005c268) title_pane_stacon_g

0x91a3,	// (0x00055d62) cursor_press_pane

0x5735,	// (0x000522f4) popup_fep_hwr_window_ParamLimits

0x5735,	// (0x000522f4) popup_fep_hwr_window

0x57af,	// (0x0005236e) popup_fep_vkb_window_ParamLimits

0x57af,	// (0x0005236e) popup_fep_vkb_window

0xc076,	// (0x00058c35) cursor_press_pane_g1

0x0002,

0xfb02,	// (0x0005c6c1) fep_vkb_side_pane_g_ParamLimits

0x652b,	// (0x000530ea) fep_hwr_candidate_pane_ParamLimits

0x652b,	// (0x000530ea) fep_hwr_candidate_pane

0x6555,	// (0x00053114) fep_hwr_side_pane_ParamLimits

0x6555,	// (0x00053114) fep_hwr_side_pane

0x6575,	// (0x00053134) fep_hwr_top_pane_ParamLimits

0x6575,	// (0x00053134) fep_hwr_top_pane

0x658d,	// (0x0005314c) fep_hwr_write_pane_ParamLimits

0x658d,	// (0x0005314c) fep_hwr_write_pane

0xfb02,	// (0x0005c6c1) fep_vkb_side_pane_g

0xc07e,	// (0x00058c3d) fep_hwr_top_pane_g1

0xc090,	// (0x00058c4f) fep_hwr_top_pane_g2

0x65c7,	// (0x00053186) fep_hwr_top_pane_g3

0x0002,

0xfade,	// (0x0005c69d) fep_hwr_top_pane_g

0x65dc,	// (0x0005319b) fep_hwr_top_text_pane

0x8b82,	// (0x00055741) fep_hwr_top_text_pane_g1

0xc0c6,	// (0x00058c85) fep_hwr_top_text_pane_t1

0x66d2,	// (0x00053291) fep_hwr_candidate_pane_g1

0xc319,	// (0x00058ed8) fep_vkb_keypad_pane_g3_ParamLimits

0xc319,	// (0x00058ed8) fep_vkb_keypad_pane_g3

0xc341,	// (0x00058f00) fep_vkb_keypad_pane_g4_ParamLimits

0xc341,	// (0x00058f00) fep_vkb_keypad_pane_g4

0xc3b0,	// (0x00058f6f) fep_vkb_bottom_pane_g2_ParamLimits

0xc3b0,	// (0x00058f6f) fep_vkb_bottom_pane_g2

0x0001,

0xfb09,	// (0x0005c6c8) fep_vkb_bottom_pane_g_ParamLimits

0xfb09,	// (0x0005c6c8) fep_vkb_bottom_pane_g

0xc022,	// (0x00058be1) cell_vkb_side_pane_g2

0x0001,

0xfb13,	// (0x0005c6d2) cell_vkb_side_pane_g

0xc43b,	// (0x00058ffa) cell_vkb_side_pane_t1

0xc449,	// (0x00059008) cell_vkb_side_pane_t1_copy1

0xc022,	// (0x00058be1) bg_fep_vkb_candidate_pane_g2

0xc575,	// (0x00059134) cell_vkb_candidate_pane_ParamLimits

0xc0d4,	// (0x00058c93) aid_size_cell_vkb_ParamLimits

0xc0d4,	// (0x00058c93) aid_size_cell_vkb

0xc575,	// (0x00059134) cell_vkb_candidate_pane

0x66f9,	// (0x000532b8) bg_popup_fep_shadow_pane_g1

0xc162,	// (0x00058d21) fep_vkb_bottom_pane_ParamLimits

0xc162,	// (0x00058d21) fep_vkb_bottom_pane

0xc198,	// (0x00058d57) fep_vkb_candidate_pane_ParamLimits

0xc198,	// (0x00058d57) fep_vkb_candidate_pane

0xc1b4,	// (0x00058d73) fep_vkb_keypad_pane_ParamLimits

0xc1b4,	// (0x00058d73) fep_vkb_keypad_pane

0xc1fa,	// (0x00058db9) fep_vkb_side_pane_ParamLimits

0xc1fa,	// (0x00058db9) fep_vkb_side_pane

0xc236,	// (0x00058df5) fep_vkb_top_pane_ParamLimits

0xc236,	// (0x00058df5) fep_vkb_top_pane

0xc272,	// (0x00058e31) fep_vkb_top_pane_g1_ParamLimits

0xc272,	// (0x00058e31) fep_vkb_top_pane_g1

0xc281,	// (0x00058e40) fep_vkb_top_pane_g2_ParamLimits

0xc281,	// (0x00058e40) fep_vkb_top_pane_g2

0xc290,	// (0x00058e4f) fep_vkb_top_pane_g3_ParamLimits

0xc290,	// (0x00058e4f) fep_vkb_top_pane_g3

0x0003,

0xfaf9,	// (0x0005c6b8) fep_vkb_top_pane_g_ParamLimits

0xfaf9,	// (0x0005c6b8) fep_vkb_top_pane_g

0xc2ae,	// (0x00058e6d) fep_vkb_top_text_pane_ParamLimits

0xc2ae,	// (0x00058e6d) fep_vkb_top_text_pane

0xc2bf,	// (0x00058e7e) fep_vkb_side_pane_g1_ParamLimits

0xc2bf,	// (0x00058e7e) fep_vkb_side_pane_g1

0xc308,	// (0x00058ec7) grid_vkb_side_pane_ParamLimits

0xc308,	// (0x00058ec7) grid_vkb_side_pane

0x6701,	// (0x000532c0) bg_popup_fep_shadow_pane_g2

0x670a,	// (0x000532c9) bg_popup_fep_shadow_pane_g3

0x6712,	// (0x000532d1) bg_popup_fep_shadow_pane_g4

0x671b,	// (0x000532da) bg_popup_fep_shadow_pane_g5

0x6725,	// (0x000532e4) bg_popup_fep_shadow_pane_g6

0x672d,	// (0x000532ec) bg_popup_fep_shadow_pane_g7

0x855d,	// (0x0005511c) bg_popup_fep_shadow_pane_g8

0xc35f,	// (0x00058f1e) grid_vkb_keypad_number_pane_ParamLimits

0xc35f,	// (0x00058f1e) grid_vkb_keypad_number_pane

0xc36f,	// (0x00058f2e) grid_vkb_keypad_pane_ParamLimits

0xc36f,	// (0x00058f2e) grid_vkb_keypad_pane

0xc395,	// (0x00058f54) fep_vkb_bottom_pane_g1_ParamLimits

0xc395,	// (0x00058f54) fep_vkb_bottom_pane_g1

0xc3be,	// (0x00058f7d) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc3be,	// (0x00058f7d) grid_vkb_keypad_bottom_left_pane

0xc3d3,	// (0x00058f92) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc3d3,	// (0x00058f92) grid_vkb_keypad_bottom_right_pane

0xc3e8,	// (0x00058fa7) fep_vkb_top_text_pane_g1

0xc403,	// (0x00058fc2) fep_vkb_top_text_pane_t1

0xc418,	// (0x00058fd7) cell_vkb_side_pane_ParamLimits

0xc418,	// (0x00058fd7) cell_vkb_side_pane

0xc022,	// (0x00058be1) cell_vkb_side_pane_g1

0xc457,	// (0x00059016) cell_vkb_keypad_pane_ParamLimits

0xc457,	// (0x00059016) cell_vkb_keypad_pane

0xc4cc,	// (0x0005908b) cell_vkb_keypad_pane_g1

0x0008,

0xfb26,	// (0x0005c6e5) bg_popup_fep_shadow_pane_g

0x673f,	// (0x000532fe) cell_hwr_side_pane_g1

0x673f,	// (0x000532fe) cell_hwr_side_pane_g2

0xc4d6,	// (0x00059095) cell_vkb_keypad_pane_t1

0xc4e4,	// (0x000590a3) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc4e4,	// (0x000590a3) cell_vkb_keypad_bottom_left_pane

0xc501,	// (0x000590c0) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc501,	// (0x000590c0) cell_vkb_keypad_bottom_right_pane

0xc022,	// (0x00058be1) cell_vkb_keypad_bottom_left_pane_g1

0xc022,	// (0x00058be1) cell_vkb_keypad_bottom_right_pane_g1

0xc53a,	// (0x000590f9) cell_vkb_keypad_number_pane_ParamLimits

0xc53a,	// (0x000590f9) cell_vkb_keypad_number_pane

0xc559,	// (0x00059118) cell_vkb_keypad_number_pane_g1

0xc563,	// (0x00059122) cell_vkb_keypad_number_pane_g2

0xc56c,	// (0x0005912b) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb18,	// (0x0005c6d7) cell_vkb_keypad_number_pane_g

0xc4d6,	// (0x00059095) cell_vkb_keypad_number_pane_t1

0xc590,	// (0x0005914f) fep_vkb_candidate_pane_g1

0x0001,

0xfb39,	// (0x0005c6f8) cell_hwr_side_pane_g

0xc5a9,	// (0x00059168) cell_hwr_side_pane_t1

0x6749,	// (0x00053308) cell_hwr_side_pane_t1_copy1

0x6757,	// (0x00053316) cell_hwr_candidate_pane_g1

0x6786,	// (0x00053345) cell_hwr_candidate_pane_t1

0xc022,	// (0x00058be1) cell_vkb_candidate_pane_g2

0xc5ed,	// (0x000591ac) cell_vkb_candidate_pane_t1

0x64f2,	// (0x000530b1) bg_popup_fep_shadow_pane_ParamLimits

0x64f2,	// (0x000530b1) bg_popup_fep_shadow_pane

0x65a7,	// (0x00053166) bg_fep_hwr_top_pane_g4

0xc0a2,	// (0x00058c61) bg_hwr_side_pane_g1_ParamLimits

0xc0a2,	// (0x00058c61) bg_hwr_side_pane_g1

0x6618,	// (0x000531d7) cell_hwr_side_pane_ParamLimits

0x6618,	// (0x000531d7) cell_hwr_side_pane

0x6653,	// (0x00053212) fep_hwr_write_pane_g1_ParamLimits

0x6653,	// (0x00053212) fep_hwr_write_pane_g1

0x6660,	// (0x0005321f) fep_hwr_write_pane_g2_ParamLimits

0x6660,	// (0x0005321f) fep_hwr_write_pane_g2

0x666d,	// (0x0005322c) fep_hwr_write_pane_g3_ParamLimits

0x666d,	// (0x0005322c) fep_hwr_write_pane_g3

0x667b,	// (0x0005323a) fep_hwr_write_pane_g4_ParamLimits

0x667b,	// (0x0005323a) fep_hwr_write_pane_g4

0x0005,

0xfae5,	// (0x0005c6a4) fep_hwr_write_pane_g_ParamLimits

0xfae5,	// (0x0005c6a4) fep_hwr_write_pane_g

0x65a7,	// (0x00053166) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x65a7,	// (0x00053166) bg_fep_hwr_candidate_pane_g2

0x6690,	// (0x0005324f) cell_hwr_candidate_pane_ParamLimits

0x6690,	// (0x0005324f) cell_hwr_candidate_pane

0x66d2,	// (0x00053291) fep_hwr_candidate_pane_g1_ParamLimits

0xc102,	// (0x00058cc1) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc102,	// (0x00058cc1) bg_popup_fep_shadow_pane_cp2

0xc2a0,	// (0x00058e5f) fep_vkb_top_pane_g4_ParamLimits

0xc2a0,	// (0x00058e5f) fep_vkb_top_pane_g4

0xc2e6,	// (0x00058ea5) fep_vkb_side_pane_g2_ParamLimits

0xc2e6,	// (0x00058ea5) fep_vkb_side_pane_g2

0x4ca4,	// (0x00051863) list_setting_pane_t4_ParamLimits

0x4ca4,	// (0x00051863) list_setting_pane_t4

0x4d3e,	// (0x000518fd) list_setting_number_pane_t5_ParamLimits

0x4d3e,	// (0x000518fd) list_setting_number_pane_t5

0x8bc9,	// (0x00055788) list_double_heading_pane_cp2_ParamLimits

0x8bc9,	// (0x00055788) list_double_heading_pane_cp2

0x8494,	// (0x00055053) list_double_heading_pane_g1_cp2_ParamLimits

0x8494,	// (0x00055053) list_double_heading_pane_g1_cp2

0x8507,	// (0x000550c6) list_double_heading_pane_g2_cp2_ParamLimits

0x8507,	// (0x000550c6) list_double_heading_pane_g2_cp2

0xc5fb,	// (0x000591ba) list_double_heading_pane_t1_cp2_ParamLimits

0xc5fb,	// (0x000591ba) list_double_heading_pane_t1_cp2

0xc611,	// (0x000591d0) list_double_heading_pane_t2_cp2_ParamLimits

0xc611,	// (0x000591d0) list_double_heading_pane_t2_cp2

0x18c6,	// (0x0004e485) aid_value_unit2

0x4828,	// (0x000513e7) popup_preview_fixed_window

0x7ad2,	// (0x00054691) bg_popup_preview_window_pane_cp02

0xc623,	// (0x000591e2) list_preview_fixed_pane

0xc669,	// (0x00059228) list_empty_pane_fp_ParamLimits

0xc669,	// (0x00059228) list_empty_pane_fp

0xc669,	// (0x00059228) list_single_cale_day_pane_fp_ParamLimits

0xc669,	// (0x00059228) list_single_cale_day_pane_fp

0xc669,	// (0x00059228) list_single_graphic_heading_pane_fp_ParamLimits

0xc669,	// (0x00059228) list_single_graphic_heading_pane_fp

0xc669,	// (0x00059228) list_single_graphic_pane_fp_ParamLimits

0xc669,	// (0x00059228) list_single_graphic_pane_fp

0xc669,	// (0x00059228) list_single_heading_pane_fp_ParamLimits

0xc669,	// (0x00059228) list_single_heading_pane_fp

0xc669,	// (0x00059228) list_single_pane_fp_ParamLimits

0xc669,	// (0x00059228) list_single_pane_fp

0xc67e,	// (0x0005923d) list_single_pane_fp_g1_ParamLimits

0xc67e,	// (0x0005923d) list_single_pane_fp_g1

0x8494,	// (0x00055053) list_single_pane_fp_g2_ParamLimits

0x8494,	// (0x00055053) list_single_pane_fp_g2

0x8507,	// (0x000550c6) list_single_pane_fp_g3_ParamLimits

0x8507,	// (0x000550c6) list_single_pane_fp_g3

0xc68a,	// (0x00059249) list_single_pane_fp_g4_ParamLimits

0xc68a,	// (0x00059249) list_single_pane_fp_g4

0x0003,

0xfb4c,	// (0x0005c70b) list_single_pane_fp_g_ParamLimits

0xfb4c,	// (0x0005c70b) list_single_pane_fp_g

0x67a4,	// (0x00053363) list_single_pane_fp_t1_ParamLimits

0x67a4,	// (0x00053363) list_single_pane_fp_t1

0x67bb,	// (0x0005337a) list_single_graphic_pane_fp_g1_ParamLimits

0x67bb,	// (0x0005337a) list_single_graphic_pane_fp_g1

0xc67e,	// (0x0005923d) list_single_graphic_pane_fp_g2_ParamLimits

0xc67e,	// (0x0005923d) list_single_graphic_pane_fp_g2

0x8494,	// (0x00055053) list_single_graphic_pane_fp_g3_ParamLimits

0x8494,	// (0x00055053) list_single_graphic_pane_fp_g3

0x8507,	// (0x000550c6) list_single_graphic_pane_fp_g4_ParamLimits

0x8507,	// (0x000550c6) list_single_graphic_pane_fp_g4

0xc68a,	// (0x00059249) list_single_graphic_pane_fp_g5_ParamLimits

0xc68a,	// (0x00059249) list_single_graphic_pane_fp_g5

0x0004,

0xfb55,	// (0x0005c714) list_single_graphic_pane_fp_g_ParamLimits

0xfb55,	// (0x0005c714) list_single_graphic_pane_fp_g

0x67c7,	// (0x00053386) list_single_graphic_pane_fp_t1_ParamLimits

0x67c7,	// (0x00053386) list_single_graphic_pane_fp_t1

0x67bb,	// (0x0005337a) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x67bb,	// (0x0005337a) list_single_graphic_heading_pane_fp_g1

0xc67e,	// (0x0005923d) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc67e,	// (0x0005923d) list_single_graphic_heading_pane_fp_g2

0x8494,	// (0x00055053) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x8494,	// (0x00055053) list_single_graphic_heading_pane_fp_g3

0x8507,	// (0x000550c6) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x8507,	// (0x000550c6) list_single_graphic_heading_pane_fp_g4

0xc68a,	// (0x00059249) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc68a,	// (0x00059249) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb55,	// (0x0005c714) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb55,	// (0x0005c714) list_single_graphic_heading_pane_fp_g

0x67dd,	// (0x0005339c) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x67dd,	// (0x0005339c) list_single_graphic_heading_pane_fp_t1

0x67f3,	// (0x000533b2) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x67f3,	// (0x000533b2) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb60,	// (0x0005c71f) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb60,	// (0x0005c71f) list_single_graphic_heading_pane_fp_t

0x6805,	// (0x000533c4) list_single_cale_day_pane_fp_g1_ParamLimits

0x6805,	// (0x000533c4) list_single_cale_day_pane_fp_g1

0xc696,	// (0x00059255) list_single_cale_day_pane_fp_g2_ParamLimits

0xc696,	// (0x00059255) list_single_cale_day_pane_fp_g2

0x8245,	// (0x00054e04) list_single_cale_day_pane_fp_g3_ParamLimits

0x8245,	// (0x00054e04) list_single_cale_day_pane_fp_g3

0x826d,	// (0x00054e2c) list_single_cale_day_pane_fp_g4_ParamLimits

0x826d,	// (0x00054e2c) list_single_cale_day_pane_fp_g4

0x8291,	// (0x00054e50) list_single_cale_day_pane_fp_g5_ParamLimits

0x8291,	// (0x00054e50) list_single_cale_day_pane_fp_g5

0x0004,

0xfb65,	// (0x0005c724) list_single_cale_day_pane_fp_g_ParamLimits

0xfb65,	// (0x0005c724) list_single_cale_day_pane_fp_g

0x683d,	// (0x000533fc) list_single_cale_day_pane_fp_t1_ParamLimits

0x683d,	// (0x000533fc) list_single_cale_day_pane_fp_t1

0x6863,	// (0x00053422) list_single_cale_day_pane_fp_t2_ParamLimits

0x6863,	// (0x00053422) list_single_cale_day_pane_fp_t2

0x687c,	// (0x0005343b) list_single_cale_day_pane_fp_t3_ParamLimits

0x687c,	// (0x0005343b) list_single_cale_day_pane_fp_t3

0x0002,

0xfb70,	// (0x0005c72f) list_single_cale_day_pane_fp_t_ParamLimits

0xfb70,	// (0x0005c72f) list_single_cale_day_pane_fp_t

0xc67e,	// (0x0005923d) list_empty_pane_fp_g1_ParamLimits

0xc67e,	// (0x0005923d) list_empty_pane_fp_g1

0x6895,	// (0x00053454) list_empty_pane_fp_t1

0x68a3,	// (0x00053462) list_empty_pane_fp_t2

0x0001,

0xfb77,	// (0x0005c736) list_empty_pane_fp_t

0xc67e,	// (0x0005923d) list_single_heading_pane_fp_g1_ParamLimits

0xc67e,	// (0x0005923d) list_single_heading_pane_fp_g1

0x8494,	// (0x00055053) list_single_heading_pane_fp_g2_ParamLimits

0x8494,	// (0x00055053) list_single_heading_pane_fp_g2

0x8507,	// (0x000550c6) list_single_heading_pane_fp_g3_ParamLimits

0x8507,	// (0x000550c6) list_single_heading_pane_fp_g3

0x0002,

0xfb7c,	// (0x0005c73b) list_single_heading_pane_fp_g_ParamLimits

0xfb7c,	// (0x0005c73b) list_single_heading_pane_fp_g

0x68b1,	// (0x00053470) list_single_heading_pane_fp_t1_ParamLimits

0x68b1,	// (0x00053470) list_single_heading_pane_fp_t1

0x68c3,	// (0x00053482) list_single_heading_pane_fp_t2_ParamLimits

0x68c3,	// (0x00053482) list_single_heading_pane_fp_t2

0x0001,

0xfb83,	// (0x0005c742) list_single_heading_pane_fp_t_ParamLimits

0xfb83,	// (0x0005c742) list_single_heading_pane_fp_t

0x86ff,	// (0x000552be) aid_size_cell_fast

0x7a42,	// (0x00054601) soft_indicator_pane_cp1_t1

0x873c,	// (0x000552fb) cell_app_pane_cp2_ParamLimits

0x873c,	// (0x000552fb) cell_app_pane_cp2

0x6514,	// (0x000530d3) fep_hwr_candidate_drop_down_list_pane

0x66ec,	// (0x000532ab) fep_hwr_candidate_pane_g3_ParamLimits

0x66ec,	// (0x000532ab) fep_hwr_candidate_pane_g3

0x3532,	// (0x000500f1) fep_hwr_candidate_pane_g4_ParamLimits

0x3532,	// (0x000500f1) fep_hwr_candidate_pane_g4

0x0002,

0xfaf2,	// (0x0005c6b1) fep_hwr_candidate_pane_g_ParamLimits

0xfaf2,	// (0x0005c6b1) fep_hwr_candidate_pane_g

0xc187,	// (0x00058d46) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc187,	// (0x00058d46) fep_vkb_candidate_drop_down_list_pane

0xc598,	// (0x00059157) fep_vkb_candidate_pane_g3

0xc5a0,	// (0x0005915f) fep_vkb_candidate_pane_g4

0x0002,

0xfb1f,	// (0x0005c6de) fep_vkb_candidate_pane_g

0x6757,	// (0x00053316) cell_hwr_candidate_pane_g1_ParamLimits

0x6765,	// (0x00053324) cell_hwr_candidate_pane_g3_ParamLimits

0x6765,	// (0x00053324) cell_hwr_candidate_pane_g3

0xe1d0,	// (0x0005ad8f) cell_hwr_candidate_pane_g4_ParamLimits

0xe1d0,	// (0x0005ad8f) cell_hwr_candidate_pane_g4

0x0002,

0xfb3e,	// (0x0005c6fd) cell_hwr_candidate_pane_g_ParamLimits

0xfb3e,	// (0x0005c6fd) cell_hwr_candidate_pane_g

0xc5b7,	// (0x00059176) cell_vkb_candidate_pane_g3_ParamLimits

0xc5b7,	// (0x00059176) cell_vkb_candidate_pane_g3

0xc5d2,	// (0x00059191) cell_vkb_candidate_pane_g4_ParamLimits

0xc5d2,	// (0x00059191) cell_vkb_candidate_pane_g4

0xc6a2,	// (0x00059261) cell_app_pane_cp2_g1_ParamLimits

0xc6a2,	// (0x00059261) cell_app_pane_cp2_g1

0xc6c0,	// (0x0005927f) cell_app_pane_cp2_g2_ParamLimits

0xc6c0,	// (0x0005927f) cell_app_pane_cp2_g2

0x0001,

0xfb88,	// (0x0005c747) cell_app_pane_cp2_g_ParamLimits

0xfb88,	// (0x0005c747) cell_app_pane_cp2_g

0xc6cc,	// (0x0005928b) cell_app_pane_cp2_t1_ParamLimits

0xc6cc,	// (0x0005928b) cell_app_pane_cp2_t1

0x84f9,	// (0x000550b8) grid_highlight_pane_cp1_ParamLimits

0x84f9,	// (0x000550b8) grid_highlight_pane_cp1

0x68d9,	// (0x00053498) cell_hwr_candidate_pane_cp1_ParamLimits

0x68d9,	// (0x00053498) cell_hwr_candidate_pane_cp1

0x6757,	// (0x00053316) fep_hwr_candidate_drop_down_list_pane_g1

0x68f8,	// (0x000534b7) fep_hwr_candidate_drop_down_list_pane_g2

0x6905,	// (0x000534c4) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb8d,	// (0x0005c74c) fep_hwr_candidate_drop_down_list_pane_g

0x6912,	// (0x000534d1) fep_hwr_candidate_drop_down_list_scroll_pane

0x691b,	// (0x000534da) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x691b,	// (0x000534da) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6928,	// (0x000534e7) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6928,	// (0x000534e7) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6935,	// (0x000534f4) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6935,	// (0x000534f4) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6942,	// (0x00053501) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6942,	// (0x00053501) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x695d,	// (0x0005351c) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x695d,	// (0x0005351c) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6978,	// (0x00053537) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6978,	// (0x00053537) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6993,	// (0x00053552) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6993,	// (0x00053552) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x69ae,	// (0x0005356d) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x69ae,	// (0x0005356d) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb94,	// (0x0005c753) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb94,	// (0x0005c753) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc720,	// (0x000592df) cell_vkb_candidate_pane_cp1_ParamLimits

0xc720,	// (0x000592df) cell_vkb_candidate_pane_cp1

0xc2a0,	// (0x00058e5f) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc2a0,	// (0x00058e5f) fep_vkb_candidate_drop_down_list_pane_g1

0xc740,	// (0x000592ff) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc740,	// (0x000592ff) fep_vkb_candidate_drop_down_list_pane_g2

0xc74d,	// (0x0005930c) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc74d,	// (0x0005930c) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfba5,	// (0x0005c764) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfba5,	// (0x0005c764) fep_vkb_candidate_drop_down_list_pane_g

0xc75a,	// (0x00059319) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc75a,	// (0x00059319) fep_vkb_candidate_drop_down_list_scroll_pane

0xc767,	// (0x00059326) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc767,	// (0x00059326) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc774,	// (0x00059333) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc774,	// (0x00059333) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc780,	// (0x0005933f) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc780,	// (0x0005933f) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc6de,	// (0x0005929d) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc6de,	// (0x0005929d) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc6ff,	// (0x000592be) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc6ff,	// (0x000592be) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc78c,	// (0x0005934b) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc78c,	// (0x0005934b) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc7ad,	// (0x0005936c) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc7ad,	// (0x0005936c) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc7ce,	// (0x0005938d) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc7ce,	// (0x0005938d) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbac,	// (0x0005c76b) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbac,	// (0x0005c76b) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7773,	// (0x00054332) title_pane_g1_ParamLimits

0x7780,	// (0x0005433f) title_pane_g2_ParamLimits

0xf529,	// (0x0005c0e8) title_pane_g_ParamLimits

0x8b72,	// (0x00055731) aid_call2_pane

0x8b7a,	// (0x00055739) aid_call_pane

0x8b82,	// (0x00055741) popup_clock_analogue_window_g1

0x8b82,	// (0x00055741) popup_clock_analogue_window_g2

0x51a8,	// (0x00051d67) popup_clock_analogue_window_g3

0x51b1,	// (0x00051d70) popup_clock_analogue_window_g4

0x2847,	// (0x0004f406) popup_clock_analogue_window_g5

0x0004,

0xf6d8,	// (0x0005c297) popup_clock_analogue_window_g

0x51b9,	// (0x00051d78) popup_clock_analogue_window_t1

0x51c7,	// (0x00051d86) clock_digital_number_pane_ParamLimits

0x51c7,	// (0x00051d86) clock_digital_number_pane

0x51d3,	// (0x00051d92) clock_digital_number_pane_cp02_ParamLimits

0x51d3,	// (0x00051d92) clock_digital_number_pane_cp02

0x51df,	// (0x00051d9e) clock_digital_number_pane_cp03_ParamLimits

0x51df,	// (0x00051d9e) clock_digital_number_pane_cp03

0x51eb,	// (0x00051daa) clock_digital_number_pane_cp04_ParamLimits

0x51eb,	// (0x00051daa) clock_digital_number_pane_cp04

0x51f7,	// (0x00051db6) clock_digital_separator_pane_ParamLimits

0x51f7,	// (0x00051db6) clock_digital_separator_pane

0x5203,	// (0x00051dc2) popup_clock_digital_window_t1_ParamLimits

0x5203,	// (0x00051dc2) popup_clock_digital_window_t1

0x2847,	// (0x0004f406) clock_digital_number_pane_g1

0x2847,	// (0x0004f406) clock_digital_number_pane_g2

0x0001,

0xf6e3,	// (0x0005c2a2) clock_digital_number_pane_g

0x2847,	// (0x0004f406) clock_digital_separator_pane_g1

0x2847,	// (0x0004f406) clock_digital_separator_pane_g2

0x0001,

0xf6e3,	// (0x0005c2a2) clock_digital_separator_pane_g

0x9503,	// (0x000560c2) aid_fill_nsta_ParamLimits

0x964f,	// (0x0005620e) indicator_nsta_pane_ParamLimits

0x97c8,	// (0x00056387) popup_clock_analogue_window

0x97c8,	// (0x00056387) popup_clock_digital_window

0xb9fd,	// (0x000585bc) grid_indicator_nsta_pane_ParamLimits

0xba26,	// (0x000585e5) clock_nsta_pane_t2

0x0001,

0xfa72,	// (0x0005c631) clock_nsta_pane_t

0x516c,	// (0x00051d2b) aid_size_max_handle

0x5176,	// (0x00051d35) aid_size_min_handle

0x91a3,	// (0x00055d62) editor_scroll_pane

0xc7e9,	// (0x000593a8) ex_editor_pane

0x866d,	// (0x0005522c) scroll_pane_cp13

0x8075,	// (0x00054c34) scroll_pane_cp14

0x8bb1,	// (0x00055770) scroll_pane_cp36

0x8bdd,	// (0x0005579c) list_single_graphic_hl_pane_cp2_ParamLimits

0x8bdd,	// (0x0005579c) list_single_graphic_hl_pane_cp2

0xafc2,	// (0x00057b81) list_single_graphic_hl_pane_ParamLimits

0xafc2,	// (0x00057b81) list_single_graphic_hl_pane

0x69c9,	// (0x00053588) aid_size_min_hl_cp1

0xc7f1,	// (0x000593b0) list_highlight_pane_cp34_ParamLimits

0xc7f1,	// (0x000593b0) list_highlight_pane_cp34

0xc802,	// (0x000593c1) list_single_graphic_hl_pane_g1_ParamLimits

0xc802,	// (0x000593c1) list_single_graphic_hl_pane_g1

0x69d2,	// (0x00053591) list_single_graphic_hl_pane_g2_ParamLimits

0x69d2,	// (0x00053591) list_single_graphic_hl_pane_g2

0x69d2,	// (0x00053591) list_single_graphic_hl_pane_g3_ParamLimits

0x69d2,	// (0x00053591) list_single_graphic_hl_pane_g3

0x90e8,	// (0x00055ca7) list_single_graphic_hl_pane_g4_ParamLimits

0x90e8,	// (0x00055ca7) list_single_graphic_hl_pane_g4

0x82b5,	// (0x00054e74) list_single_graphic_hl_pane_g5_ParamLimits

0x82b5,	// (0x00054e74) list_single_graphic_hl_pane_g5

0x0004,

0xfbbd,	// (0x0005c77c) list_single_graphic_hl_pane_g_ParamLimits

0xfbbd,	// (0x0005c77c) list_single_graphic_hl_pane_g

0x82c9,	// (0x00054e88) list_single_graphic_hl_pane_t1_ParamLimits

0x82c9,	// (0x00054e88) list_single_graphic_hl_pane_t1

0xc80f,	// (0x000593ce) aid_size_min_hl_cp2

0xc818,	// (0x000593d7) list_highlight_pane_cp34_cp2_ParamLimits

0xc818,	// (0x000593d7) list_highlight_pane_cp34_cp2

0xc802,	// (0x000593c1) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc802,	// (0x000593c1) list_single_graphic_hl_pane_g1_cp2

0xc825,	// (0x000593e4) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc825,	// (0x000593e4) list_single_graphic_hl_pane_g2_cp2

0xc831,	// (0x000593f0) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc831,	// (0x000593f0) list_single_graphic_hl_pane_g3_cp2

0xc83f,	// (0x000593fe) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc83f,	// (0x000593fe) list_single_graphic_hl_pane_g4_cp2

0xc84b,	// (0x0005940a) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc84b,	// (0x0005940a) list_single_graphic_hl_pane_g5_cp2

0x5525,	// (0x000520e4) control_pane_g4_ParamLimits

0x5525,	// (0x000520e4) control_pane_g4

0x94c7,	// (0x00056086) bg_popup_sub_pane_cp10_ParamLimits

0xc02c,	// (0x00058beb) list_choice_list_pane_ParamLimits

0xc03b,	// (0x00058bfa) scroll_pane_cp23

0x7ad2,	// (0x00054691) bg_popup_preview_window_pane_cp02_ParamLimits

0xc623,	// (0x000591e2) list_preview_fixed_pane_ParamLimits

0xc639,	// (0x000591f8) list_preview_fixed_pane_cp_ParamLimits

0xc639,	// (0x000591f8) list_preview_fixed_pane_cp

0xc645,	// (0x00059204) popup_preview_fixed_window_g1_ParamLimits

0xc645,	// (0x00059204) popup_preview_fixed_window_g1

0xc651,	// (0x00059210) popup_preview_fixed_window_g2_ParamLimits

0xc651,	// (0x00059210) popup_preview_fixed_window_g2

0x0002,

0xfb45,	// (0x0005c704) popup_preview_fixed_window_g_ParamLimits

0xfb45,	// (0x0005c704) popup_preview_fixed_window_g

0x50e0,	// (0x00051c9f) aid_navi_side_left_pane_ParamLimits

0x50f5,	// (0x00051cb4) aid_navi_side_right_pane_ParamLimits

0x510d,	// (0x00051ccc) navi_icon_pane_stacon_ParamLimits

0x5121,	// (0x00051ce0) navi_navi_pane_stacon_ParamLimits

0x510d,	// (0x00051ccc) navi_text_pane_stacon_ParamLimits

0x46e9,	// (0x000512a8) main_text_info_pane

0xc875,	// (0x00059434) listscroll_text_info_pane

0xc87d,	// (0x0005943c) list_text_info_pane_ParamLimits

0xc87d,	// (0x0005943c) list_text_info_pane

0xc88c,	// (0x0005944b) scroll_pane_cp24_ParamLimits

0xc88c,	// (0x0005944b) scroll_pane_cp24

0xc8aa,	// (0x00059469) list_text_info_pane_t1_ParamLimits

0xc8aa,	// (0x00059469) list_text_info_pane_t1

0x56a7,	// (0x00052266) popup_fast_swap2_window_ParamLimits

0x56a7,	// (0x00052266) popup_fast_swap2_window

0xc8db,	// (0x0005949a) aid_size_cell_fast2

0x18ce,	// (0x0004e48d) bg_popup_window_pane_cp17

0xc8e5,	// (0x000594a4) heading_pane_cp2

0xc8ed,	// (0x000594ac) listscroll_fast2_pane

0xc8f5,	// (0x000594b4) grid_fast2_pane

0xc8ff,	// (0x000594be) listscroll_fast2_pane_g1

0xc907,	// (0x000594c6) listscroll_fast2_pane_g2

0x0001,

0xfbc8,	// (0x0005c787) listscroll_fast2_pane_g

0x866d,	// (0x0005522c) scroll_pane_cp26

0xc911,	// (0x000594d0) cell_fast2_pane_ParamLimits

0xc911,	// (0x000594d0) cell_fast2_pane

0xc926,	// (0x000594e5) cell_fast2_pane_g1

0xc92f,	// (0x000594ee) cell_fast2_pane_g2

0xc938,	// (0x000594f7) cell_fast2_pane_g3

0x0002,

0xfbcd,	// (0x0005c78c) cell_fast2_pane_g

0x7e32,	// (0x000549f1) grid_highlight_pane_cp9

0x5665,	// (0x00052224) main_eswt_pane_ParamLimits

0x5665,	// (0x00052224) main_eswt_pane

0xc8a1,	// (0x00059460) list_single_text_info_pane

0xc940,	// (0x000594ff) eswt_ctrl_button_pane

0xc940,	// (0x000594ff) eswt_ctrl_canvas_pane

0xc948,	// (0x00059507) eswt_ctrl_combo_pane

0xc940,	// (0x000594ff) eswt_ctrl_default_pane

0xc940,	// (0x000594ff) eswt_ctrl_label_pane

0xc950,	// (0x0005950f) eswt_ctrl_wait_pane

0xc958,	// (0x00059517) eswt_shell_pane

0x18ce,	// (0x0004e48d) listscroll_eswt_app_pane

0xc978,	// (0x00059537) popup_eswt_tasktip_window_ParamLimits

0xc978,	// (0x00059537) popup_eswt_tasktip_window

0x9a65,	// (0x00056624) bg_popup_window_pane_cp18

0xc991,	// (0x00059550) eswt_control_pane_g1_ParamLimits

0xc991,	// (0x00059550) eswt_control_pane_g1

0xc99e,	// (0x0005955d) eswt_control_pane_g2_ParamLimits

0xc99e,	// (0x0005955d) eswt_control_pane_g2

0xc9ab,	// (0x0005956a) eswt_control_pane_g3_ParamLimits

0xc9ab,	// (0x0005956a) eswt_control_pane_g3

0xc9b8,	// (0x00059577) eswt_control_pane_g4_ParamLimits

0xc9b8,	// (0x00059577) eswt_control_pane_g4

0x0003,

0xfbd4,	// (0x0005c793) eswt_control_pane_g_ParamLimits

0xfbd4,	// (0x0005c793) eswt_control_pane_g

0x84f9,	// (0x000550b8) bg_button_pane_ParamLimits

0x84f9,	// (0x000550b8) bg_button_pane

0x7e47,	// (0x00054a06) common_borders_pane_copy2_ParamLimits

0x7e47,	// (0x00054a06) common_borders_pane_copy2

0xc9c5,	// (0x00059584) control_button_pane_g1_ParamLimits

0xc9c5,	// (0x00059584) control_button_pane_g1

0xc9d1,	// (0x00059590) control_button_pane_g2_ParamLimits

0xc9d1,	// (0x00059590) control_button_pane_g2

0xc9dd,	// (0x0005959c) control_button_pane_g3_ParamLimits

0xc9dd,	// (0x0005959c) control_button_pane_g3

0x0002,

0xfbdd,	// (0x0005c79c) control_button_pane_g_ParamLimits

0xfbdd,	// (0x0005c79c) control_button_pane_g

0xc9f1,	// (0x000595b0) control_button_pane_t1

0xc9ff,	// (0x000595be) control_button_pane_t2

0x0001,

0xfbe4,	// (0x0005c7a3) control_button_pane_t

0x99f1,	// (0x000565b0) bg_button_pane_g1

0x9a01,	// (0x000565c0) bg_button_pane_g2

0x99f9,	// (0x000565b8) bg_button_pane_g3

0x9a11,	// (0x000565d0) bg_button_pane_g4

0x9a09,	// (0x000565c8) bg_button_pane_g5

0x9a19,	// (0x000565d8) bg_button_pane_g6

0x9a21,	// (0x000565e0) bg_button_pane_g7

0x9a31,	// (0x000565f0) bg_button_pane_g8

0x9a29,	// (0x000565e8) bg_button_pane_g9

0x0008,

0xf841,	// (0x0005c400) bg_button_pane_g

0xbfe7,	// (0x00058ba6) common_borders_pane_ParamLimits

0xbfe7,	// (0x00058ba6) common_borders_pane

0xc991,	// (0x00059550) eswt_control_pane_g1_copy1_ParamLimits

0xc991,	// (0x00059550) eswt_control_pane_g1_copy1

0xc99e,	// (0x0005955d) eswt_control_pane_g2_copy1_ParamLimits

0xc99e,	// (0x0005955d) eswt_control_pane_g2_copy1

0xc9ab,	// (0x0005956a) eswt_control_pane_g3_copy1_ParamLimits

0xc9ab,	// (0x0005956a) eswt_control_pane_g3_copy1

0xc9b8,	// (0x00059577) eswt_control_pane_g4_copy1_ParamLimits

0xc9b8,	// (0x00059577) eswt_control_pane_g4_copy1

0xc022,	// (0x00058be1) bg_eswt_ctrl_canvas_pane_g1

0xbfe7,	// (0x00058ba6) common_borders_pane_cp2_ParamLimits

0xbfe7,	// (0x00058ba6) common_borders_pane_cp2

0xbfe7,	// (0x00058ba6) common_borders_pane_cp3_ParamLimits

0xbfe7,	// (0x00058ba6) common_borders_pane_cp3

0xca0d,	// (0x000595cc) separator_horizontal_pane

0xca15,	// (0x000595d4) separator_vertical_pane

0xc991,	// (0x00059550) eswt_control_pane_g1_copy2_ParamLimits

0xc991,	// (0x00059550) eswt_control_pane_g1_copy2

0xc99e,	// (0x0005955d) eswt_control_pane_g2_copy2_ParamLimits

0xc99e,	// (0x0005955d) eswt_control_pane_g2_copy2

0xc9ab,	// (0x0005956a) eswt_control_pane_g3_copy2_ParamLimits

0xc9ab,	// (0x0005956a) eswt_control_pane_g3_copy2

0xc9b8,	// (0x00059577) eswt_control_pane_g4_copy2_ParamLimits

0xc9b8,	// (0x00059577) eswt_control_pane_g4_copy2

0x18ce,	// (0x0004e48d) common_borders_pane_cp4

0xca1e,	// (0x000595dd) separator_horizontal_pane_g1

0xca27,	// (0x000595e6) separator_horizontal_pane_g2

0xca30,	// (0x000595ef) separator_horizontal_pane_g3

0x0002,

0xfbe9,	// (0x0005c7a8) separator_horizontal_pane_g

0xc991,	// (0x00059550) eswt_control_pane_g1_copy3_ParamLimits

0xc991,	// (0x00059550) eswt_control_pane_g1_copy3

0xc99e,	// (0x0005955d) eswt_control_pane_g2_copy3_ParamLimits

0xc99e,	// (0x0005955d) eswt_control_pane_g2_copy3

0xc9ab,	// (0x0005956a) eswt_control_pane_g3_copy3_ParamLimits

0xc9ab,	// (0x0005956a) eswt_control_pane_g3_copy3

0xc9b8,	// (0x00059577) eswt_control_pane_g4_copy3_ParamLimits

0xc9b8,	// (0x00059577) eswt_control_pane_g4_copy3

0x18ce,	// (0x0004e48d) common_borders_pane_cp5

0xca39,	// (0x000595f8) separator_vertical_pane_g1

0xca42,	// (0x00059601) separator_vertical_pane_g2

0xca4b,	// (0x0005960a) separator_vertical_pane_g3

0x0002,

0xfbf0,	// (0x0005c7af) separator_vertical_pane_g

0xc991,	// (0x00059550) eswt_control_pane_g1_copy4_ParamLimits

0xc991,	// (0x00059550) eswt_control_pane_g1_copy4

0xc99e,	// (0x0005955d) eswt_control_pane_g2_copy4_ParamLimits

0xc99e,	// (0x0005955d) eswt_control_pane_g2_copy4

0xc9ab,	// (0x0005956a) eswt_control_pane_g3_copy4_ParamLimits

0xc9ab,	// (0x0005956a) eswt_control_pane_g3_copy4

0xc9b8,	// (0x00059577) eswt_control_pane_g4_copy4_ParamLimits

0xc9b8,	// (0x00059577) eswt_control_pane_g4_copy4

0xca54,	// (0x00059613) eswt_ctrl_combo_button_pane

0xca5c,	// (0x0005961b) eswt_ctrl_input_pane

0xca64,	// (0x00059623) popup_choice_list_window_cp70

0xca6c,	// (0x0005962b) eswt_ctrl_input_pane_t1

0x18ce,	// (0x0004e48d) input_focus_pane_cp70

0xbfe7,	// (0x00058ba6) bg_button_pane_cp70_ParamLimits

0xbfe7,	// (0x00058ba6) bg_button_pane_cp70

0xca7a,	// (0x00059639) eswt_ctrl_combo_button_pane_g1

0xca82,	// (0x00059641) wait_bar_pane_cp70

0x9a65,	// (0x00056624) bg_popup_window_pane_cp70_ParamLimits

0x9a65,	// (0x00056624) bg_popup_window_pane_cp70

0xca8a,	// (0x00059649) popup_eswt_tasktip_window_t1

0xcaa0,	// (0x0005965f) wait_bar_pane_cp71_ParamLimits

0xcaa0,	// (0x0005965f) wait_bar_pane_cp71

0xcaac,	// (0x0005966b) grid_eswt_app_pane

0x898b,	// (0x0005554a) scroll_pane_cp70

0xcab5,	// (0x00059674) cell_eswt_app_pane_ParamLimits

0xcab5,	// (0x00059674) cell_eswt_app_pane

0xcae5,	// (0x000596a4) cell_eswt_app_pane_g1_ParamLimits

0xcae5,	// (0x000596a4) cell_eswt_app_pane_g1

0xcb14,	// (0x000596d3) cell_eswt_app_pane_g2_ParamLimits

0xcb14,	// (0x000596d3) cell_eswt_app_pane_g2

0x0001,

0xfbf7,	// (0x0005c7b6) cell_eswt_app_pane_g_ParamLimits

0xfbf7,	// (0x0005c7b6) cell_eswt_app_pane_g

0xcb3d,	// (0x000596fc) cell_eswt_app_pane_t1_ParamLimits

0xcb3d,	// (0x000596fc) cell_eswt_app_pane_t1

0xcb6f,	// (0x0005972e) grid_highlight_pane_cp70_ParamLimits

0xcb6f,	// (0x0005972e) grid_highlight_pane_cp70

0x907b,	// (0x00055c3a) set_content_pane_g1

0x944e,	// (0x0005600d) status_small_volume_pane

0x69de,	// (0x0005359d) status_small_volume_pane_g1

0x69e6,	// (0x000535a5) volume_small2_pane

0x69ef,	// (0x000535ae) volume_small2_pane_g1

0x69f8,	// (0x000535b7) volume_small2_pane_g2

0x6a01,	// (0x000535c0) volume_small2_pane_g3

0x6a0a,	// (0x000535c9) volume_small2_pane_g4

0x6a13,	// (0x000535d2) volume_small2_pane_g5

0x6a1c,	// (0x000535db) volume_small2_pane_g6

0x6a25,	// (0x000535e4) volume_small2_pane_g7

0x6a2e,	// (0x000535ed) volume_small2_pane_g8

0x6a37,	// (0x000535f6) volume_small2_pane_g9

0x6a40,	// (0x000535ff) volume_small2_pane_g10

0x0009,

0xfbfc,	// (0x0005c7bb) volume_small2_pane_g

0xc3e8,	// (0x00058fa7) fep_vkb_top_text_pane_g1_ParamLimits

0xc403,	// (0x00058fc2) fep_vkb_top_text_pane_t1_ParamLimits

0xc65d,	// (0x0005921c) popup_preview_fixed_window_g3_ParamLimits

0xc65d,	// (0x0005921c) popup_preview_fixed_window_g3

0x5b58,	// (0x00052717) popup_toolbar_trans_pane

0xadc9,	// (0x00057988) aid_height_set_list_ParamLimits

0xadda,	// (0x00057999) aid_size_parent_ParamLimits

0x94c7,	// (0x00056086) list_highlight_pane_cp2_ParamLimits

0x907b,	// (0x00055c3a) set_content_pane_g1_ParamLimits

0x60c5,	// (0x00052c84) list_single_image_pane_ParamLimits

0x60c5,	// (0x00052c84) list_single_image_pane

0xcb7b,	// (0x0005973a) aid_size_cell_image_ParamLimits

0xcb7b,	// (0x0005973a) aid_size_cell_image

0xcb88,	// (0x00059747) grid_single_image_pane_ParamLimits

0xcb88,	// (0x00059747) grid_single_image_pane

0xb9d5,	// (0x00058594) list_single_image_pane_g1_ParamLimits

0xb9d5,	// (0x00058594) list_single_image_pane_g1

0xcb94,	// (0x00059753) list_single_image_pane_g2_ParamLimits

0xcb94,	// (0x00059753) list_single_image_pane_g2

0x0001,

0xfc11,	// (0x0005c7d0) list_single_image_pane_g_ParamLimits

0xfc11,	// (0x0005c7d0) list_single_image_pane_g

0xcba8,	// (0x00059767) list_single_image_pane_t1_ParamLimits

0xcba8,	// (0x00059767) list_single_image_pane_t1

0xcbbe,	// (0x0005977d) cell_image_list_pane_ParamLimits

0xcbbe,	// (0x0005977d) cell_image_list_pane

0xcbd2,	// (0x00059791) cell_image_list_pane_g1

0xcbdb,	// (0x0005979a) cell_image_list_pane_g2

0x0001,

0xfc16,	// (0x0005c7d5) cell_image_list_pane_g

0xcbe4,	// (0x000597a3) aid_size_cell_tb_trans_pane

0x84f9,	// (0x000550b8) bg_tb_trans_pane

0xcbf6,	// (0x000597b5) grid_tb_trans_pane

0x99f1,	// (0x000565b0) bg_tb_trans_pane_g1

0x9a01,	// (0x000565c0) bg_tb_trans_pane_g2

0x99f9,	// (0x000565b8) bg_tb_trans_pane_g3

0x9a11,	// (0x000565d0) bg_tb_trans_pane_g4

0x9a09,	// (0x000565c8) bg_tb_trans_pane_g5

0x9a31,	// (0x000565f0) bg_tb_trans_pane_g6

0x9a29,	// (0x000565e8) bg_tb_trans_pane_g7

0x9a19,	// (0x000565d8) bg_tb_trans_pane_g8

0x9a21,	// (0x000565e0) bg_tb_trans_pane_g9

0x0008,

0xfc1b,	// (0x0005c7da) bg_tb_trans_pane_g

0xcc0a,	// (0x000597c9) cell_toolbar_trans_pane_ParamLimits

0xcc0a,	// (0x000597c9) cell_toolbar_trans_pane

0xc022,	// (0x00058be1) cell_toolbar_trans_pane_g1

0xbbf7,	// (0x000587b6) list_form2_midp_pane_t1

0xbc05,	// (0x000587c4) list_form2_midp_pane_t2

0x0001,

0xfab8,	// (0x0005c677) list_form2_midp_pane_t

0xbc13,	// (0x000587d2) scroll_pane_cp51_ParamLimits

0xbdcf,	// (0x0005898e) form2_midp_wait_pane_g1

0xbdd8,	// (0x00058997) form2_midp_wait_pane_g2

0xbde1,	// (0x000589a0) form2_midp_wait_pane_g3

0x0002,

0xfacd,	// (0x0005c68c) form2_midp_wait_pane_g

0x7849,	// (0x00054408) list_highlight_pane_cp21_ParamLimits

0xbe2d,	// (0x000589ec) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbe3c,	// (0x000589fb) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x8169,	// (0x00054d28) list_single_2graphic_im_pane_ParamLimits

0x8169,	// (0x00054d28) list_single_2graphic_im_pane

0xcc30,	// (0x000597ef) list_single_2graphic_im_pane_g1_ParamLimits

0xcc30,	// (0x000597ef) list_single_2graphic_im_pane_g1

0xcc41,	// (0x00059800) list_single_2graphic_im_pane_g2_ParamLimits

0xcc41,	// (0x00059800) list_single_2graphic_im_pane_g2

0xcc4d,	// (0x0005980c) list_single_2graphic_im_pane_g3_ParamLimits

0xcc4d,	// (0x0005980c) list_single_2graphic_im_pane_g3

0x0003,

0xfc2e,	// (0x0005c7ed) list_single_2graphic_im_pane_g_ParamLimits

0xfc2e,	// (0x0005c7ed) list_single_2graphic_im_pane_g

0xcc6d,	// (0x0005982c) list_single_2graphic_im_pane_t1_ParamLimits

0xcc6d,	// (0x0005982c) list_single_2graphic_im_pane_t1

0xc669,	// (0x00059228) list_single_graphic_2heading_pane_fp_ParamLimits

0xc669,	// (0x00059228) list_single_graphic_2heading_pane_fp

0x67bb,	// (0x0005337a) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x67bb,	// (0x0005337a) list_single_graphic_2heading_pane_fp_g1

0xc67e,	// (0x0005923d) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc67e,	// (0x0005923d) list_single_graphic_2heading_pane_fp_g2

0x8494,	// (0x00055053) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x8494,	// (0x00055053) list_single_graphic_2heading_pane_fp_g3

0x8507,	// (0x000550c6) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x8507,	// (0x000550c6) list_single_graphic_2heading_pane_fp_g4

0xc68a,	// (0x00059249) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc68a,	// (0x00059249) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb55,	// (0x0005c714) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb55,	// (0x0005c714) list_single_graphic_2heading_pane_fp_g

0x82df,	// (0x00054e9e) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x82df,	// (0x00054e9e) list_single_graphic_2heading_pane_fp_t1

0x67f3,	// (0x000533b2) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x67f3,	// (0x000533b2) list_single_graphic_2heading_pane_fp_t2

0x82f5,	// (0x00054eb4) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x82f5,	// (0x00054eb4) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc37,	// (0x0005c7f6) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc37,	// (0x0005c7f6) list_single_graphic_2heading_pane_fp_t

0xc0ae,	// (0x00058c6d) fep_hwr_write_pane_g5_ParamLimits

0xc0ae,	// (0x00058c6d) fep_hwr_write_pane_g5

0xc0ba,	// (0x00058c79) fep_hwr_write_pane_g6_ParamLimits

0xc0ba,	// (0x00058c79) fep_hwr_write_pane_g6

0xc958,	// (0x00059517) eswt_shell_pane_ParamLimits

0x9a65,	// (0x00056624) bg_popup_window_pane_cp18_ParamLimits

0xc989,	// (0x00059548) heading_pane_cp70

0xca8a,	// (0x00059649) popup_eswt_tasktip_window_t1_ParamLimits

0x9558,	// (0x00056117) aid_touch_tab_arrow_left

0x9567,	// (0x00056126) aid_touch_tab_arrow_right

0x7791,	// (0x00054350) title_pane_g3_ParamLimits

0x7791,	// (0x00054350) title_pane_g3

0x84b8,	// (0x00055077) set_value_pane_g1

0x5b58,	// (0x00052717) popup_toolbar_trans_pane_ParamLimits

0xcbe4,	// (0x000597a3) aid_size_cell_tb_trans_pane_ParamLimits

0x84f9,	// (0x000550b8) bg_tb_trans_pane_ParamLimits

0xcbf6,	// (0x000597b5) grid_tb_trans_pane_ParamLimits

0x7ad2,	// (0x00054691) cont_note_pane_ParamLimits

0x7ad2,	// (0x00054691) cont_note_pane

0x7e47,	// (0x00054a06) cont_snote2_single_text_pane_ParamLimits

0x7e47,	// (0x00054a06) cont_snote2_single_text_pane

0x7e47,	// (0x00054a06) cont_snote2_single_graphic_pane_ParamLimits

0x7e47,	// (0x00054a06) cont_snote2_single_graphic_pane

0xa080,	// (0x00056c3f) cont_note_wait_pane_ParamLimits

0xa080,	// (0x00056c3f) cont_note_wait_pane

0xa080,	// (0x00056c3f) cont_note_image_pane_ParamLimits

0xa080,	// (0x00056c3f) cont_note_image_pane

0xcc9e,	// (0x0005985d) popup_note2_window_g1_ParamLimits

0xcc9e,	// (0x0005985d) popup_note2_window_g1

0xcccf,	// (0x0005988e) popup_note2_window_t1_ParamLimits

0xcccf,	// (0x0005988e) popup_note2_window_t1

0xcd14,	// (0x000598d3) popup_note2_window_t2_ParamLimits

0xcd14,	// (0x000598d3) popup_note2_window_t2

0xcd59,	// (0x00059918) popup_note2_window_t3_ParamLimits

0xcd59,	// (0x00059918) popup_note2_window_t3

0xcd9e,	// (0x0005995d) popup_note2_window_t4_ParamLimits

0xcd9e,	// (0x0005995d) popup_note2_window_t4

0x7b56,	// (0x00054715) popup_note2_window_t5_ParamLimits

0x7b56,	// (0x00054715) popup_note2_window_t5

0x0004,

0xfc43,	// (0x0005c802) popup_note2_window_t_ParamLimits

0xfc43,	// (0x0005c802) popup_note2_window_t

0xcdcd,	// (0x0005998c) popup_note2_image_window_g1_ParamLimits

0xcdcd,	// (0x0005998c) popup_note2_image_window_g1

0xcdd9,	// (0x00059998) popup_note2_image_window_g2_ParamLimits

0xcdd9,	// (0x00059998) popup_note2_image_window_g2

0x0001,

0xfc4e,	// (0x0005c80d) popup_note2_image_window_g_ParamLimits

0xfc4e,	// (0x0005c80d) popup_note2_image_window_g

0xcdeb,	// (0x000599aa) popup_note2_image_window_t1_ParamLimits

0xcdeb,	// (0x000599aa) popup_note2_image_window_t1

0xce03,	// (0x000599c2) popup_note2_image_window_t2_ParamLimits

0xce03,	// (0x000599c2) popup_note2_image_window_t2

0xce1b,	// (0x000599da) popup_note2_image_window_t3_ParamLimits

0xce1b,	// (0x000599da) popup_note2_image_window_t3

0x0002,

0xfc53,	// (0x0005c812) popup_note2_image_window_t_ParamLimits

0xfc53,	// (0x0005c812) popup_note2_image_window_t

0xa08e,	// (0x00056c4d) popup_note2_wait_window_g1_ParamLimits

0xa08e,	// (0x00056c4d) popup_note2_wait_window_g1

0xce37,	// (0x000599f6) popup_note2_wait_window_g2_ParamLimits

0xce37,	// (0x000599f6) popup_note2_wait_window_g2

0xa0a6,	// (0x00056c65) popup_note2_wait_window_g3_ParamLimits

0xa0a6,	// (0x00056c65) popup_note2_wait_window_g3

0x0002,

0xfc5a,	// (0x0005c819) popup_note2_wait_window_g_ParamLimits

0xfc5a,	// (0x0005c819) popup_note2_wait_window_g

0xce43,	// (0x00059a02) popup_note2_wait_window_t1_ParamLimits

0xce43,	// (0x00059a02) popup_note2_wait_window_t1

0xce61,	// (0x00059a20) popup_note2_wait_window_t2_ParamLimits

0xce61,	// (0x00059a20) popup_note2_wait_window_t2

0xce7f,	// (0x00059a3e) popup_note2_wait_window_t3_ParamLimits

0xce7f,	// (0x00059a3e) popup_note2_wait_window_t3

0xce91,	// (0x00059a50) popup_note2_wait_window_t4_ParamLimits

0xce91,	// (0x00059a50) popup_note2_wait_window_t4

0x0003,

0xfc61,	// (0x0005c820) popup_note2_wait_window_t_ParamLimits

0xfc61,	// (0x0005c820) popup_note2_wait_window_t

0xcea3,	// (0x00059a62) wait_bar2_pane_ParamLimits

0xcea3,	// (0x00059a62) wait_bar2_pane

0xcebb,	// (0x00059a7a) popup_snote2_single_text_window_g1_ParamLimits

0xcebb,	// (0x00059a7a) popup_snote2_single_text_window_g1

0xcee3,	// (0x00059aa2) popup_snote2_single_text_window_t1_ParamLimits

0xcee3,	// (0x00059aa2) popup_snote2_single_text_window_t1

0xcf2f,	// (0x00059aee) popup_snote2_single_text_window_t2_ParamLimits

0xcf2f,	// (0x00059aee) popup_snote2_single_text_window_t2

0xcf7b,	// (0x00059b3a) popup_snote2_single_text_window_t3_ParamLimits

0xcf7b,	// (0x00059b3a) popup_snote2_single_text_window_t3

0xcfbc,	// (0x00059b7b) popup_snote2_single_text_window_t4_ParamLimits

0xcfbc,	// (0x00059b7b) popup_snote2_single_text_window_t4

0xcff2,	// (0x00059bb1) popup_snote2_single_text_window_t5_ParamLimits

0xcff2,	// (0x00059bb1) popup_snote2_single_text_window_t5

0x0004,

0xfc6a,	// (0x0005c829) popup_snote2_single_text_window_t_ParamLimits

0xfc6a,	// (0x0005c829) popup_snote2_single_text_window_t

0xd01d,	// (0x00059bdc) popup_snote2_single_graphic_window_g1_ParamLimits

0xd01d,	// (0x00059bdc) popup_snote2_single_graphic_window_g1

0xd045,	// (0x00059c04) popup_snote2_single_graphic_window_g2_ParamLimits

0xd045,	// (0x00059c04) popup_snote2_single_graphic_window_g2

0x0001,

0xfc75,	// (0x0005c834) popup_snote2_single_graphic_window_g_ParamLimits

0xfc75,	// (0x0005c834) popup_snote2_single_graphic_window_g

0xd06d,	// (0x00059c2c) popup_snote2_single_graphic_window_t1_ParamLimits

0xd06d,	// (0x00059c2c) popup_snote2_single_graphic_window_t1

0xd0b9,	// (0x00059c78) popup_snote2_single_graphic_window_t2_ParamLimits

0xd0b9,	// (0x00059c78) popup_snote2_single_graphic_window_t2

0xcf7b,	// (0x00059b3a) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf7b,	// (0x00059b3a) popup_snote2_single_graphic_window_t3

0xcfbc,	// (0x00059b7b) popup_snote2_single_graphic_window_t4_ParamLimits

0xcfbc,	// (0x00059b7b) popup_snote2_single_graphic_window_t4

0xcff2,	// (0x00059bb1) popup_snote2_single_graphic_window_t5_ParamLimits

0xcff2,	// (0x00059bb1) popup_snote2_single_graphic_window_t5

0x0004,

0xfc7a,	// (0x0005c839) popup_snote2_single_graphic_window_t_ParamLimits

0xfc7a,	// (0x0005c839) popup_snote2_single_graphic_window_t

0xbad4,	// (0x00058693) clock_nsta_pane_cp2_t1

0xbad4,	// (0x00058693) clock_nsta_pane_cp2_t2

0x0001,

0xfa8e,	// (0x0005c64d) clock_nsta_pane_cp2_t

0x4e5e,	// (0x00051a1d) form_field_data_wide_pane_g1_ParamLimits

0x8494,	// (0x00055053) form_field_data_wide_pane_g2_ParamLimits

0x8494,	// (0x00055053) form_field_data_wide_pane_g2

0x8507,	// (0x000550c6) form_field_data_wide_pane_g3_ParamLimits

0x8507,	// (0x000550c6) form_field_data_wide_pane_g3

0x0002,

0xf65b,	// (0x0005c21a) form_field_data_wide_pane_g_ParamLimits

0xf65b,	// (0x0005c21a) form_field_data_wide_pane_g

0xb9a4,	// (0x00058563) grid_touch_3_pane_ParamLimits

0xb9a4,	// (0x00058563) grid_touch_3_pane

0xd105,	// (0x00059cc4) cell_touch_3_pane_ParamLimits

0xd105,	// (0x00059cc4) cell_touch_3_pane

0xc022,	// (0x00058be1) cell_touch_3_pane_g1

0xc022,	// (0x00058be1) cell_touch_3_pane_g2

0x0001,

0xfb13,	// (0x0005c6d2) cell_touch_3_pane_g

0x7bae,	// (0x0005476d) cont_query_data_pane

0x7bb6,	// (0x00054775) cont_query_data_pane_cp1

0xd133,	// (0x00059cf2) button_value_adjust_pane_cp7

0xd13b,	// (0x00059cfa) query_popup_pane_cp3

0x8c8b,	// (0x0005584a) bg_popup_sub_pane_cp22_ParamLimits

0x5222,	// (0x00051de1) navi_navi_volume_pane_cp2

0x523d,	// (0x00051dfc) popup_side_volume_key_window_g2

0x524c,	// (0x00051e0b) popup_side_volume_key_window_g3

0x0002,

0xf6f1,	// (0x0005c2b0) popup_side_volume_key_window_g

0x5269,	// (0x00051e28) popup_side_volume_key_window_t2

0x0001,

0xf6f8,	// (0x0005c2b7) popup_side_volume_key_window_t

0x8f45,	// (0x00055b04) popup_side_volume_key_window_ParamLimits

0x4abc,	// (0x0005167b) list_double_graphic_pane_g4_ParamLimits

0x4abc,	// (0x0005167b) list_double_graphic_pane_g4

0x81a6,	// (0x00054d65) list_single_2heading_msg_pane_ParamLimits

0x81a6,	// (0x00054d65) list_single_2heading_msg_pane

0x8315,	// (0x00054ed4) list_single_2heading_msg_pane_g1_ParamLimits

0x8315,	// (0x00054ed4) list_single_2heading_msg_pane_g1

0x8321,	// (0x00054ee0) list_single_2heading_msg_pane_g2_ParamLimits

0x8321,	// (0x00054ee0) list_single_2heading_msg_pane_g2

0x832d,	// (0x00054eec) list_single_2heading_msg_pane_g3_ParamLimits

0x832d,	// (0x00054eec) list_single_2heading_msg_pane_g3

0x8339,	// (0x00054ef8) list_single_2heading_msg_pane_g4_ParamLimits

0x8339,	// (0x00054ef8) list_single_2heading_msg_pane_g4

0x0003,

0xfc85,	// (0x0005c844) list_single_2heading_msg_pane_g_ParamLimits

0xfc85,	// (0x0005c844) list_single_2heading_msg_pane_g

0x8351,	// (0x00054f10) list_single_2heading_msg_pane_t1_ParamLimits

0x8351,	// (0x00054f10) list_single_2heading_msg_pane_t1

0x8379,	// (0x00054f38) list_single_2heading_msg_pane_t2_ParamLimits

0x8379,	// (0x00054f38) list_single_2heading_msg_pane_t2

0x83ad,	// (0x00054f6c) list_single_2heading_msg_pane_t3_ParamLimits

0x83ad,	// (0x00054f6c) list_single_2heading_msg_pane_t3

0x83e6,	// (0x00054fa5) list_single_2heading_msg_pane_t4_ParamLimits

0x83e6,	// (0x00054fa5) list_single_2heading_msg_pane_t4

0x0003,

0xfc8e,	// (0x0005c84d) list_single_2heading_msg_pane_t_ParamLimits

0xfc8e,	// (0x0005c84d) list_single_2heading_msg_pane_t

0x779d,	// (0x0005435c) title_pane_g4_ParamLimits

0x779d,	// (0x0005435c) title_pane_g4

0x5031,	// (0x00051bf0) title_pane_stacon_g3_ParamLimits

0x5031,	// (0x00051bf0) title_pane_stacon_g3

0xcc61,	// (0x00059820) list_single_2graphic_im_pane_g4_ParamLimits

0xcc61,	// (0x00059820) list_single_2graphic_im_pane_g4

0xaadf,	// (0x0005769e) popup_side_volume_key_window_cp

0xb2ef,	// (0x00057eae) main_idle_act2_pane_t1

0x5c60,	// (0x0005281f) toolbar_button_pane_g10

0x803f,	// (0x00054bfe) popup_toolbar_window_cp1

0xbac5,	// (0x00058684) clock_nsta_pane_cp_t1

0xbac5,	// (0x00058684) clock_nsta_pane_cp_t2

0x0001,

0xfa89,	// (0x0005c648) clock_nsta_pane_cp_t

0x5222,	// (0x00051de1) navi_navi_volume_pane_cp2_ParamLimits

0x5231,	// (0x00051df0) popup_side_volume_key_window_g1_ParamLimits

0x523d,	// (0x00051dfc) popup_side_volume_key_window_g2_ParamLimits

0x524c,	// (0x00051e0b) popup_side_volume_key_window_g3_ParamLimits

0xf6f1,	// (0x0005c2b0) popup_side_volume_key_window_g_ParamLimits

0x6500,	// (0x000530bf) fep_hwr_aid_pane

0x65a7,	// (0x00053166) bg_fep_hwr_top_pane_g4_ParamLimits

0xc07e,	// (0x00058c3d) fep_hwr_top_pane_g1_ParamLimits

0xc090,	// (0x00058c4f) fep_hwr_top_pane_g2_ParamLimits

0x65c7,	// (0x00053186) fep_hwr_top_pane_g3_ParamLimits

0xfade,	// (0x0005c69d) fep_hwr_top_pane_g_ParamLimits

0x65dc,	// (0x0005319b) fep_hwr_top_text_pane_ParamLimits

0xa8a2,	// (0x00057461) aid_touch_tab_arrow_arrow_2

0xa8ab,	// (0x0005746a) aid_touch_tab_arrow_left_2

0x6514,	// (0x000530d3) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x654b,	// (0x0005310a) fep_hwr_prediction_pane

0xc1f0,	// (0x00058daf) fep_vkb_prediction_pane

0xc2f4,	// (0x00058eb3) fep_vkb_side_pane_g3_ParamLimits

0xc2f4,	// (0x00058eb3) fep_vkb_side_pane_g3

0x6757,	// (0x00053316) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x68f8,	// (0x000534b7) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6905,	// (0x000534c4) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb8d,	// (0x0005c74c) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6a49,	// (0x00053608) fep_hwr_prediction_pane_g1

0x6a53,	// (0x00053612) fep_hwr_prediction_pane_g2

0x6a5b,	// (0x0005361a) fep_hwr_prediction_pane_g3

0x6a63,	// (0x00053622) fep_hwr_prediction_pane_g4

0x0003,

0xfc97,	// (0x0005c856) fep_hwr_prediction_pane_g

0xd160,	// (0x00059d1f) fep_vkb_prediction_pane_g1

0xd16a,	// (0x00059d29) fep_vkb_prediction_pane_g2

0xd172,	// (0x00059d31) fep_vkb_prediction_pane_g3

0xd17a,	// (0x00059d39) fep_vkb_prediction_pane_g4

0x0003,

0xfca0,	// (0x0005c85f) fep_vkb_prediction_pane_g

0x6027,	// (0x00052be6) slider_set_pane_g3

0x603b,	// (0x00052bfa) slider_set_pane_g4

0x6053,	// (0x00052c12) slider_set_pane_g5

0x6027,	// (0x00052be6) slider_set_pane_g6

0x6069,	// (0x00052c28) slider_set_pane_g7

0xaf3f,	// (0x00057afe) slider_form_pane_g3

0xaf48,	// (0x00057b07) slider_form_pane_g4

0xaf50,	// (0x00057b0f) slider_form_pane_g5

0xaf3f,	// (0x00057afe) slider_form_pane_g6

0xaf58,	// (0x00057b17) slider_form_pane_g7

0xb59a,	// (0x00058159) slider_set_pane_vc_g3

0xb5a3,	// (0x00058162) slider_set_pane_vc_g4

0xb5ac,	// (0x0005816b) slider_set_pane_vc_g5

0xb59a,	// (0x00058159) slider_set_pane_vc_g6

0xb5b5,	// (0x00058174) slider_set_pane_vc_g7

0xb777,	// (0x00058336) slider_form_pane_vc_g1

0xb780,	// (0x0005833f) slider_form_pane_vc_g2

0xb789,	// (0x00058348) slider_form_pane_vc_g3

0xb777,	// (0x00058336) slider_form_pane_vc_g4

0xb792,	// (0x00058351) slider_form_pane_vc_g5

0x0004,

0xfa5b,	// (0x0005c61a) slider_form_pane_vc_g

0x46e9,	// (0x000512a8) main_idle_act3_pane

0xd182,	// (0x00059d41) ai3_links_pane

0xd18b,	// (0x00059d4a) popup_ai3_data_window_ParamLimits

0xd18b,	// (0x00059d4a) popup_ai3_data_window

0x18ce,	// (0x0004e48d) grid_ai3_links_pane

0xd1a5,	// (0x00059d64) cell_ai3_links_pane_ParamLimits

0xd1a5,	// (0x00059d64) cell_ai3_links_pane

0xd1bd,	// (0x00059d7c) bg_popup_sub_pane_cp11

0xd1ca,	// (0x00059d89) cell_ai3_links_pane_g1

0x18ce,	// (0x0004e48d) bg_popup_sub_pane_cp12

0xd1ef,	// (0x00059dae) heading_ai3_data_pane

0xd1f7,	// (0x00059db6) list_ai3_gene_pane

0xd203,	// (0x00059dc2) popup_ai3_data_window_g1

0xd20b,	// (0x00059dca) heading_ai3_data_pane_g1

0xd213,	// (0x00059dd2) heading_ai3_data_pane_t1

0xd221,	// (0x00059de0) list_double_ai3_gene_pane_ParamLimits

0xd221,	// (0x00059de0) list_double_ai3_gene_pane

0xd22e,	// (0x00059ded) list_single_ai3_gene_pane_ParamLimits

0xd22e,	// (0x00059ded) list_single_ai3_gene_pane

0xbfe7,	// (0x00058ba6) list_highlight_pane_cp7_ParamLimits

0xbfe7,	// (0x00058ba6) list_highlight_pane_cp7

0xd23b,	// (0x00059dfa) list_single_a13_gene_pane_t1_ParamLimits

0xd23b,	// (0x00059dfa) list_single_a13_gene_pane_t1

0xd252,	// (0x00059e11) list_single_ai3_gene_pane_g1

0xd25b,	// (0x00059e1a) list_single_ai3_gene_pane_g2

0x0001,

0xfca9,	// (0x0005c868) list_single_ai3_gene_pane_g

0xd263,	// (0x00059e22) list_double_ai3_gene_pane_g1_ParamLimits

0xd263,	// (0x00059e22) list_double_ai3_gene_pane_g1

0xd26f,	// (0x00059e2e) list_double_ai3_gene_pane_t1_ParamLimits

0xd26f,	// (0x00059e2e) list_double_ai3_gene_pane_t1

0xd28b,	// (0x00059e4a) list_double_ai3_gene_pane_t2_ParamLimits

0xd28b,	// (0x00059e4a) list_double_ai3_gene_pane_t2

0xd2a1,	// (0x00059e60) list_double_ai3_gene_pane_t3_ParamLimits

0xd2a1,	// (0x00059e60) list_double_ai3_gene_pane_t3

0x0002,

0xfcae,	// (0x0005c86d) list_double_ai3_gene_pane_t_ParamLimits

0xfcae,	// (0x0005c86d) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x830b,	// (0x00054eca) aid_size_min_col_2

0xd14c,	// (0x00059d0b) aid_size_min_msg_ParamLimits

0xd14c,	// (0x00059d0b) aid_size_min_msg

0xc3f4,	// (0x00058fb3) fep_vkb_top_text_pane_g2_ParamLimits

0xc3f4,	// (0x00058fb3) fep_vkb_top_text_pane_g2

0x0001,

0xfb0e,	// (0x0005c6cd) fep_vkb_top_text_pane_g_ParamLimits

0xfb0e,	// (0x0005c6cd) fep_vkb_top_text_pane_g

0x46e9,	// (0x000512a8) main_hc_apps_shell_pane

0xd2be,	// (0x00059e7d) grid_hc_apps_pane_ParamLimits

0xd2be,	// (0x00059e7d) grid_hc_apps_pane

0xd2d0,	// (0x00059e8f) list_hc_apps_pane

0xd2d8,	// (0x00059e97) scroll_pane_cp37_ParamLimits

0xd2d8,	// (0x00059e97) scroll_pane_cp37

0xd2e4,	// (0x00059ea3) cell_hc_apps_pane_ParamLimits

0xd2e4,	// (0x00059ea3) cell_hc_apps_pane

0xd392,	// (0x00059f51) cell_hc_apps_pane_g1_ParamLimits

0xd392,	// (0x00059f51) cell_hc_apps_pane_g1

0xd3c2,	// (0x00059f81) cell_hc_apps_pane_g2_ParamLimits

0xd3c2,	// (0x00059f81) cell_hc_apps_pane_g2

0xd3de,	// (0x00059f9d) cell_hc_apps_pane_g3_ParamLimits

0xd3de,	// (0x00059f9d) cell_hc_apps_pane_g3

0x0002,

0xfcb5,	// (0x0005c874) cell_hc_apps_pane_g_ParamLimits

0xfcb5,	// (0x0005c874) cell_hc_apps_pane_g

0xd400,	// (0x00059fbf) cell_hc_apps_pane_t1_ParamLimits

0xd400,	// (0x00059fbf) cell_hc_apps_pane_t1

0x7ad2,	// (0x00054691) grid_highlight_pane_cp10_ParamLimits

0x7ad2,	// (0x00054691) grid_highlight_pane_cp10

0xd440,	// (0x00059fff) list_single_hc_apps_pane_ParamLimits

0xd440,	// (0x00059fff) list_single_hc_apps_pane

0xd49c,	// (0x0005a05b) list_single_hc_apps_pane_g1

0x840b,	// (0x00054fca) list_single_hc_apps_pane_g2

0x0001,

0xfcbc,	// (0x0005c87b) list_single_hc_apps_pane_g

0x8424,	// (0x00054fe3) list_single_hc_apps_pane_g2_copy1

0x8440,	// (0x00054fff) list_single_hc_apps_pane_t1

0x7849,	// (0x00054408) bg_set_opt_pane_cp_ParamLimits

0x494a,	// (0x00051509) setting_slider_pane_t1_ParamLimits

0x4963,	// (0x00051522) setting_slider_pane_t2_ParamLimits

0x497d,	// (0x0005153c) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0005c0f8) setting_slider_pane_t_ParamLimits

0x4995,	// (0x00051554) slider_set_pane_ParamLimits

0x5539,	// (0x000520f8) control_pane_g5_ParamLimits

0x5539,	// (0x000520f8) control_pane_g5

0xad8e,	// (0x0005794d) slider_set_pane_g1_ParamLimits

0x601b,	// (0x00052bda) slider_set_pane_g2_ParamLimits

0x6027,	// (0x00052be6) slider_set_pane_g3_ParamLimits

0x603b,	// (0x00052bfa) slider_set_pane_g4_ParamLimits

0x6053,	// (0x00052c12) slider_set_pane_g5_ParamLimits

0x6027,	// (0x00052be6) slider_set_pane_g6_ParamLimits

0x6069,	// (0x00052c28) slider_set_pane_g7_ParamLimits

0xf93f,	// (0x0005c4fe) slider_set_pane_g_ParamLimits

0x9026,	// (0x00055be5) navi_icon_text_pane_ParamLimits

0x9519,	// (0x000560d8) aid_fill_nsta_2_ParamLimits

0x9558,	// (0x00056117) aid_touch_tab_arrow_left_ParamLimits

0x9567,	// (0x00056126) aid_touch_tab_arrow_right_ParamLimits

0x95d4,	// (0x00056193) clock_nsta_pane_ParamLimits

0xa884,	// (0x00057443) navi_icon_pane_g1_ParamLimits

0xa890,	// (0x0005744f) navi_text_pane_t1_ParamLimits

0xbbd1,	// (0x00058790) navi_icon_text_pane_g1_ParamLimits

0xbbdd,	// (0x0005879c) navi_icon_text_pane_t1_ParamLimits

0xd49c,	// (0x0005a05b) list_single_hc_apps_pane_g1_ParamLimits

0x840b,	// (0x00054fca) list_single_hc_apps_pane_g2_ParamLimits

0xfcbc,	// (0x0005c87b) list_single_hc_apps_pane_g_ParamLimits

0x8424,	// (0x00054fe3) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8440,	// (0x00054fff) list_single_hc_apps_pane_t1_ParamLimits

0x4854,	// (0x00051413) popup_toolbar2_fixed_window_ParamLimits

0x4854,	// (0x00051413) popup_toolbar2_fixed_window

0x5b4e,	// (0x0005270d) popup_toolbar2_float_window

0x18ce,	// (0x0004e48d) bg_popup_sub_pane_cp27

0xd4b5,	// (0x0005a074) grid_toolbar2_float_pane

0x18ce,	// (0x0004e48d) bg_popup_sub_pane_cp26

0xd4b5,	// (0x0005a074) grid_toolbar2_fixed_pane

0xd4bd,	// (0x0005a07c) cell_toolbar2_fixed_pane_ParamLimits

0xd4bd,	// (0x0005a07c) cell_toolbar2_fixed_pane

0xd4cd,	// (0x0005a08c) cell_toolbar2_fixed_pane_g1

0xd4d6,	// (0x0005a095) toolbar2_fixed_button_pane

0x99f1,	// (0x000565b0) toolbar2_fixed_button_pane_g1

0x9a01,	// (0x000565c0) toolbar2_fixed_button_pane_g2

0x99f9,	// (0x000565b8) toolbar2_fixed_button_pane_g3

0x9a11,	// (0x000565d0) toolbar2_fixed_button_pane_g4

0x9a09,	// (0x000565c8) toolbar2_fixed_button_pane_g5

0x9a19,	// (0x000565d8) toolbar2_fixed_button_pane_g6

0x9a21,	// (0x000565e0) toolbar2_fixed_button_pane_g7

0x9a31,	// (0x000565f0) toolbar2_fixed_button_pane_g8

0x9a29,	// (0x000565e8) toolbar2_fixed_button_pane_g9

0x0008,

0xf841,	// (0x0005c400) toolbar2_fixed_button_pane_g

0xd4de,	// (0x0005a09d) cell_toolbar2_float_pane_ParamLimits

0xd4de,	// (0x0005a09d) cell_toolbar2_float_pane

0xd4ef,	// (0x0005a0ae) cell_toolbar2_float_pane_g1

0xd4d6,	// (0x0005a095) toolbar2_fixed_button_pane_cp

0xc150,	// (0x00058d0f) fep_vkb_accented_list_pane_ParamLimits

0xc150,	// (0x00058d0f) fep_vkb_accented_list_pane

0x6737,	// (0x000532f6) bg_popup_fep_shadow_pane_g9

0x91a3,	// (0x00055d62) bg_popup_fep_shadow_pane_cp3

0x8654,	// (0x00055213) list_accented_list_pane

0xd4f8,	// (0x0005a0b7) list_single_accented_list_pane_ParamLimits

0xd4f8,	// (0x0005a0b7) list_single_accented_list_pane

0x91a3,	// (0x00055d62) list_highlight_pane_cp10

0xd509,	// (0x0005a0c8) list_single_accented_list_pane_t1

0x5a9e,	// (0x0005265d) popup_slider_window_ParamLimits

0x5a9e,	// (0x0005265d) popup_slider_window

0xd143,	// (0x00059d02) aid_indentation_list_msg

0xd5cd,	// (0x0005a18c) bg_popup_window_pane_cp19

0xd635,	// (0x0005a1f4) popup_slider_window_g1

0xd651,	// (0x0005a210) popup_slider_window_g2

0xd66d,	// (0x0005a22c) popup_slider_window_g3

0x0005,

0xfcc1,	// (0x0005c880) popup_slider_window_g

0xd6d3,	// (0x0005a292) popup_slider_window_t1

0xd747,	// (0x0005a306) small_volume_slider_vertical_pane

0xc022,	// (0x00058be1) small_volume_slider_vertical_pane_g1

0xc022,	// (0x00058be1) small_volume_slider_vertical_pane_g2

0xd763,	// (0x0005a322) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd3,	// (0x0005c892) small_volume_slider_vertical_pane_g

0x460c,	// (0x000511cb) area_side_right_pane_ParamLimits

0x460c,	// (0x000511cb) area_side_right_pane

0x6a6b,	// (0x0005362a) aid_size_side_button_ParamLimits

0x6a6b,	// (0x0005362a) aid_size_side_button

0x6a7f,	// (0x0005363e) grid_sctrl_middle_pane_ParamLimits

0x6a7f,	// (0x0005363e) grid_sctrl_middle_pane

0x6a9e,	// (0x0005365d) sctrl_sk_bottom_pane

0x6aaf,	// (0x0005366e) sctrl_sk_top_pane

0x6ac1,	// (0x00053680) aid_touch_sctrl_top

0x6ace,	// (0x0005368d) bg_sctrl_sk_pane_ParamLimits

0x6ace,	// (0x0005368d) bg_sctrl_sk_pane

0x6adc,	// (0x0005369b) sctrl_sk_top_pane_g1

0x6ae9,	// (0x000536a8) sctrl_sk_top_pane_t1

0x6ac1,	// (0x00053680) aid_touch_sctrl_bottom

0x6ace,	// (0x0005368d) bg_sctrl_sk_pane_cp_ParamLimits

0x6ace,	// (0x0005368d) bg_sctrl_sk_pane_cp

0x6b04,	// (0x000536c3) sctrl_sk_bottom_pane_g1

0x6ae9,	// (0x000536a8) sctrl_sk_bottom_pane_t1

0x6b0d,	// (0x000536cc) cell_sctrl_middle_pane_ParamLimits

0x6b0d,	// (0x000536cc) cell_sctrl_middle_pane

0x6b28,	// (0x000536e7) aid_touch_sctrl_middle_ParamLimits

0x6b28,	// (0x000536e7) aid_touch_sctrl_middle

0x6b3a,	// (0x000536f9) bg_sctrl_middle_pane_ParamLimits

0x6b3a,	// (0x000536f9) bg_sctrl_middle_pane

0x6757,	// (0x00053316) cell_sctrl_middle_pane_g1_ParamLimits

0x6757,	// (0x00053316) cell_sctrl_middle_pane_g1

0x6b48,	// (0x00053707) cell_sctrl_middle_pane_g2_ParamLimits

0x6b48,	// (0x00053707) cell_sctrl_middle_pane_g2

0x0001,

0xfcdf,	// (0x0005c89e) cell_sctrl_middle_pane_g_ParamLimits

0xfcdf,	// (0x0005c89e) cell_sctrl_middle_pane_g

0x99f1,	// (0x000565b0) bg_sctrl_middle_pane_g1

0x99f9,	// (0x000565b8) bg_sctrl_middle_pane_g2

0x9a01,	// (0x000565c0) bg_sctrl_middle_pane_g3

0x9a09,	// (0x000565c8) bg_sctrl_middle_pane_g4

0x9a11,	// (0x000565d0) bg_sctrl_middle_pane_g5

0x9a19,	// (0x000565d8) bg_sctrl_middle_pane_g6

0x9a21,	// (0x000565e0) bg_sctrl_middle_pane_g7

0x9a29,	// (0x000565e8) bg_sctrl_middle_pane_g8

0x0007,

0xfce4,	// (0x0005c8a3) bg_sctrl_middle_pane_g

0x9a31,	// (0x000565f0) bg_sctrl_middle_pane_g8_copy1

0x99f1,	// (0x000565b0) bg_sctrl_sk_pane_g1

0x9a01,	// (0x000565c0) bg_sctrl_sk_pane_g2

0x99f9,	// (0x000565b8) bg_sctrl_sk_pane_g3

0x0008,

0xf841,	// (0x0005c400) bg_sctrl_sk_pane_g

0x8005,	// (0x00054bc4) aid_size_touch_scroll_bar

0x9a11,	// (0x000565d0) bg_sctrl_sk_pane_g4

0x9a09,	// (0x000565c8) bg_sctrl_sk_pane_g5

0x9a19,	// (0x000565d8) bg_sctrl_sk_pane_g6

0x9a21,	// (0x000565e0) bg_sctrl_sk_pane_g7

0x9a31,	// (0x000565f0) bg_sctrl_sk_pane_g8

0x9a29,	// (0x000565e8) bg_sctrl_sk_pane_g9

0x5705,	// (0x000522c4) popup_fep_china_hwr2_fs_candidate_window

0x570f,	// (0x000522ce) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x570f,	// (0x000522ce) popup_fep_china_hwr2_fs_control_window

0x6757,	// (0x00053316) sctrl_sk_top_pane_g2

0x0001,

0xfcda,	// (0x0005c899) sctrl_sk_top_pane_g

0xd76c,	// (0x0005a32b) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd76c,	// (0x0005a32b) aid_fep_china_hwr2_fs_cell

0xd77e,	// (0x0005a33d) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd77e,	// (0x0005a33d) bg_popup_fep_shadow_pane_cp4

0xd795,	// (0x0005a354) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd795,	// (0x0005a354) bg_popup_fep_shadow_pane_cp5

0xd7a7,	// (0x0005a366) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd7a7,	// (0x0005a366) popup_fep_china_hwr2_fs_control_bar_grid

0xd7b7,	// (0x0005a376) popup_fep_china_hwr2_fs_control_funtion_grid

0xd7bf,	// (0x0005a37e) aid_fep_china_hwr2_fs_candi_cell

0x18ce,	// (0x0004e48d) bg_popup_fep_shadow_pane_cp6

0xd7c9,	// (0x0005a388) popup_fep_china_hwr2_fs_candidate_grid

0xd7d3,	// (0x0005a392) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7d3,	// (0x0005a392) cell_fep_china_hwr2_fs_funtion_grid

0xc022,	// (0x00058be1) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7eb,	// (0x0005a3aa) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7eb,	// (0x0005a3aa) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7f9,	// (0x0005a3b8) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7f9,	// (0x0005a3b8) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf5,	// (0x0005c8b4) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf5,	// (0x0005c8b4) cell_fep_china_hwr2_fs_funtion_grid_g

0xd80f,	// (0x0005a3ce) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd80f,	// (0x0005a3ce) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd824,	// (0x0005a3e3) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd824,	// (0x0005a3e3) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcfa,	// (0x0005c8b9) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcfa,	// (0x0005c8b9) cell_fep_china_hwr2_fs_funtion_grid_t

0xd840,	// (0x0005a3ff) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd848,	// (0x0005a407) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd850,	// (0x0005a40f) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcff,	// (0x0005c8be) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd858,	// (0x0005a417) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd858,	// (0x0005a417) cell_fep_china_hwr2_fs_candidate_grid

0xd871,	// (0x0005a430) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd879,	// (0x0005a438) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc022,	// (0x00058be1) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc022,	// (0x00058be1) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb13,	// (0x0005c6d2) cell_fep_china_hwr2_fs_candidate_grid_g

0xd881,	// (0x0005a440) cell_fep_china_hwr2_fs_candidate_grid_t1

0x95e7,	// (0x000561a6) clock_nsta_pane_cp_24_ParamLimits

0x95e7,	// (0x000561a6) clock_nsta_pane_cp_24

0x9665,	// (0x00056224) indicator_nsta_pane_cp_24_ParamLimits

0x9665,	// (0x00056224) indicator_nsta_pane_cp_24

0xa700,	// (0x000572bf) heading_pane_g1

0x0001,

0xf8a6,	// (0x0005c465) heading_pane_g

0xb138,	// (0x00057cf7) grid_sct_catagory_button_pane

0xb168,	// (0x00057d27) scroll_pane_cp5_ParamLimits

0xbc1f,	// (0x000587de) button_value_adjust_pane_cp5_ParamLimits

0xbc1f,	// (0x000587de) button_value_adjust_pane_cp5

0xbcfe,	// (0x000588bd) form2_midp_time_pane_ParamLimits

0xd88f,	// (0x0005a44e) cell_sct_catagory_button_pane_ParamLimits

0xd88f,	// (0x0005a44e) cell_sct_catagory_button_pane

0xbfe7,	// (0x00058ba6) bg_button_pane_cp01_ParamLimits

0xbfe7,	// (0x00058ba6) bg_button_pane_cp01

0xc022,	// (0x00058be1) cell_sct_catagory_button_pane_g1

0x5add,	// (0x0005269c) popup_tb_extension_window

0xd8a1,	// (0x0005a460) aid_size_cell_ext_ParamLimits

0xd8a1,	// (0x0005a460) aid_size_cell_ext

0x7ad2,	// (0x00054691) bg_tb_trans_pane_cp1_ParamLimits

0x7ad2,	// (0x00054691) bg_tb_trans_pane_cp1

0xd8c1,	// (0x0005a480) grid_tb_ext_pane_ParamLimits

0xd8c1,	// (0x0005a480) grid_tb_ext_pane

0xd8ef,	// (0x0005a4ae) cell_tb_ext_pane_ParamLimits

0xd8ef,	// (0x0005a4ae) cell_tb_ext_pane

0xd906,	// (0x0005a4c5) cell_tb_ext_pane_g1_ParamLimits

0xd906,	// (0x0005a4c5) cell_tb_ext_pane_g1

0xd923,	// (0x0005a4e2) cell_tb_ext_pane_t1

0x7ad2,	// (0x00054691) list_highlight_pane_cp11_ParamLimits

0x7ad2,	// (0x00054691) list_highlight_pane_cp11

0x4873,	// (0x00051432) popup_uni_indicator_window_ParamLimits

0x4873,	// (0x00051432) popup_uni_indicator_window

0x84f9,	// (0x000550b8) bg_popup_sub_pane_cp14

0xd93e,	// (0x0005a4fd) list_uniindi_pane

0xd94a,	// (0x0005a509) uniindi_top_pane

0x7ad2,	// (0x00054691) bg_uniindi_top_pane

0xd969,	// (0x0005a528) uniindi_top_pane_g1

0xd97f,	// (0x0005a53e) uniindi_top_pane_g2

0x0003,

0xfd06,	// (0x0005c8c5) uniindi_top_pane_g

0xd9a9,	// (0x0005a568) uniindi_top_pane_t1

0xd9d3,	// (0x0005a592) list_single_uniindi_pane_ParamLimits

0xd9d3,	// (0x0005a592) list_single_uniindi_pane

0xc022,	// (0x00058be1) bg_uniindi_top_pane_g1

0xd9e6,	// (0x0005a5a5) list_single_uniindi_pane_g1

0xd9f9,	// (0x0005a5b8) list_single_uniindi_pane_t1

0x46e9,	// (0x000512a8) control_bg_pane

0xda1e,	// (0x0005a5dd) bg_sctrl_sk_pane_cp1

0xda27,	// (0x0005a5e6) bg_sctrl_sk_pane_cp2

0xda30,	// (0x0005a5ef) control_bg_pane_g1

0xda39,	// (0x0005a5f8) control_bg_pane_g2

0x0001,

0xfd0f,	// (0x0005c8ce) control_bg_pane_g

0xba69,	// (0x00058628) cell_indicator_nsta_pane_g1_ParamLimits

0xba77,	// (0x00058636) cell_indicator_nsta_pane_g2_ParamLimits

0xfa77,	// (0x0005c636) cell_indicator_nsta_pane_g_ParamLimits

0x64df,	// (0x0005309e) form2_midp_time_pane_t1_ParamLimits

0x5665,	// (0x00052224) main_idle_act4_pane_ParamLimits

0x5665,	// (0x00052224) main_idle_act4_pane

0x5add,	// (0x0005269c) popup_tb_extension_window_ParamLimits

0xd8df,	// (0x0005a49e) tb_ext_find_pane_ParamLimits

0xd8df,	// (0x0005a49e) tb_ext_find_pane

0xda42,	// (0x0005a601) ai_gene_pane_1_cp1

0x92ea,	// (0x00055ea9) ai_gene_pane_2_cp1

0xda4a,	// (0x0005a609) list_single_idle_plugin_calendar_pane

0xda53,	// (0x0005a612) list_single_idle_plugin_notification_pane

0xda5c,	// (0x0005a61b) list_single_idle_plugin_player_pane

0xda65,	// (0x0005a624) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda65,	// (0x0005a624) list_single_idle_plugin_shortcut_pane

0xda87,	// (0x0005a646) main_idle_act4_pane_t1

0xda99,	// (0x0005a658) main_idle_act4_pane_t2

0x0001,

0xfd14,	// (0x0005c8d3) main_idle_act4_pane_t

0xdaab,	// (0x0005a66a) middle_sk_idle_act4_pane_ParamLimits

0xdaab,	// (0x0005a66a) middle_sk_idle_act4_pane

0xdac1,	// (0x0005a680) popup_clock_digital_analogue_window_cp2

0xdadb,	// (0x0005a69a) shortcut_wheel_idle_act4_pane_ParamLimits

0xdadb,	// (0x0005a69a) shortcut_wheel_idle_act4_pane

0xc022,	// (0x00058be1) shortcut_wheel_idle_act4_pane_g1

0xc022,	// (0x00058be1) shortcut_wheel_idle_act4_pane_g2

0xc022,	// (0x00058be1) shortcut_wheel_idle_act4_pane_g3

0xc022,	// (0x00058be1) shortcut_wheel_idle_act4_pane_g4

0xc022,	// (0x00058be1) shortcut_wheel_idle_act4_pane_g5

0xdaef,	// (0x0005a6ae) shortcut_wheel_idle_act4_pane_g6

0xdaf7,	// (0x0005a6b6) shortcut_wheel_idle_act4_pane_g7

0xdaff,	// (0x0005a6be) shortcut_wheel_idle_act4_pane_g8

0xdb07,	// (0x0005a6c6) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd19,	// (0x0005c8d8) shortcut_wheel_idle_act4_pane_g

0xc2a0,	// (0x00058e5f) middle_sk_idle_act4_pane_g1_ParamLimits

0xc2a0,	// (0x00058e5f) middle_sk_idle_act4_pane_g1

0xdb6b,	// (0x0005a72a) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb6b,	// (0x0005a72a) middle_sk_idle_act4_pane_g2

0x0001,

0xfd3c,	// (0x0005c8fb) middle_sk_idle_act4_pane_g_ParamLimits

0xfd3c,	// (0x0005c8fb) middle_sk_idle_act4_pane_g

0xdb77,	// (0x0005a736) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb77,	// (0x0005a736) middle_sk_idle_act4_pane_t1

0xdb94,	// (0x0005a753) grid_ai_shortcut_pane_ParamLimits

0xdb94,	// (0x0005a753) grid_ai_shortcut_pane

0xdbad,	// (0x0005a76c) list_highlight_pane_cp16_ParamLimits

0xdbad,	// (0x0005a76c) list_highlight_pane_cp16

0xdbba,	// (0x0005a779) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdbba,	// (0x0005a779) list_single_idle_plugin_shortcut_pane_g1

0xdbc6,	// (0x0005a785) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbc6,	// (0x0005a785) list_single_idle_plugin_shortcut_pane_g2

0xdbde,	// (0x0005a79d) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbde,	// (0x0005a79d) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd41,	// (0x0005c900) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd41,	// (0x0005c900) list_single_idle_plugin_shortcut_pane_g

0xdbf1,	// (0x0005a7b0) cell_ai_shortcut_pane_ParamLimits

0xdbf1,	// (0x0005a7b0) cell_ai_shortcut_pane

0xdc15,	// (0x0005a7d4) cell_ai_shortcut_pane_g1_ParamLimits

0xdc15,	// (0x0005a7d4) cell_ai_shortcut_pane_g1

0xda42,	// (0x0005a601) ai_gene_pane_1_cp2

0xdc37,	// (0x0005a7f6) ai_gene_pane_2_cp2

0xdc3f,	// (0x0005a7fe) list_highlight_pane_cp15

0xdc48,	// (0x0005a807) list_single_idle_plugin_calendar_pane_g1

0xdc3f,	// (0x0005a7fe) list_highlight_pane_cp17

0xdc50,	// (0x0005a80f) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc58,	// (0x0005a817) list_single_idle_plugin_player_pane_g1

0xb391,	// (0x00057f50) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd48,	// (0x0005c907) list_single_idle_plugin_player_pane_g

0xdc60,	// (0x0005a81f) list_single_idle_plugin_player_pane_t1

0xdc6e,	// (0x0005a82d) list_single_idle_plugin_player_pane_t2

0xdc7c,	// (0x0005a83b) list_single_idle_plugin_player_pane_t3

0xdc8a,	// (0x0005a849) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd4d,	// (0x0005c90c) list_single_idle_plugin_player_pane_t

0xdc98,	// (0x0005a857) wait_bar_pane_cp15

0xdca0,	// (0x0005a85f) grid_ai_notification_pane

0xb391,	// (0x00057f50) list_single_idle_plugin_notification_pane_g1

0xdca9,	// (0x0005a868) cell_ai_notification_pane_ParamLimits

0xdca9,	// (0x0005a868) cell_ai_notification_pane

0xdcb6,	// (0x0005a875) cell_ai_notification_pane_g1

0xdcbe,	// (0x0005a87d) cell_ai_notification_pane_t1

0xdccc,	// (0x0005a88b) tb_ext_find_button_pane

0xdcd4,	// (0x0005a893) tb_ext_find_pane_g1

0xdcdc,	// (0x0005a89b) tb_ext_find_pane_t1

0x8b82,	// (0x00055741) tb_ext_find_button_pane_g1

0xdcea,	// (0x0005a8a9) tb_ext_find_button_pane_g2

0x0001,

0xfd56,	// (0x0005c915) tb_ext_find_button_pane_g

0xda87,	// (0x0005a646) main_idle_act4_pane_t1_ParamLimits

0xda99,	// (0x0005a658) main_idle_act4_pane_t2_ParamLimits

0xfd14,	// (0x0005c8d3) main_idle_act4_pane_t_ParamLimits

0xdac1,	// (0x0005a680) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdacf,	// (0x0005a68e) sat_plugin_idle_act4_pane_ParamLimits

0xdacf,	// (0x0005a68e) sat_plugin_idle_act4_pane

0xdcf3,	// (0x0005a8b2) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdcf3,	// (0x0005a8b2) sat_plugin_idle_act4_pane_t1

0xdd06,	// (0x0005a8c5) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd06,	// (0x0005a8c5) sat_plugin_idle_act4_pane_t2

0xdd19,	// (0x0005a8d8) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd19,	// (0x0005a8d8) sat_plugin_idle_act4_pane_t3

0xdd2c,	// (0x0005a8eb) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd2c,	// (0x0005a8eb) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd5b,	// (0x0005c91a) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd5b,	// (0x0005c91a) sat_plugin_idle_act4_pane_t

0x47ae,	// (0x0005136d) popup_battery_window_ParamLimits

0x47ae,	// (0x0005136d) popup_battery_window

0x7ad2,	// (0x00054691) bg_popup_sub_pane_cp25_ParamLimits

0x7ad2,	// (0x00054691) bg_popup_sub_pane_cp25

0xdd3f,	// (0x0005a8fe) popup_battery_window_g1_ParamLimits

0xdd3f,	// (0x0005a8fe) popup_battery_window_g1

0xdd4b,	// (0x0005a90a) popup_battery_window_t1_ParamLimits

0xdd4b,	// (0x0005a90a) popup_battery_window_t1

0xdd5d,	// (0x0005a91c) popup_battery_window_t2_ParamLimits

0xdd5d,	// (0x0005a91c) popup_battery_window_t2

0x0001,

0xfd64,	// (0x0005c923) popup_battery_window_t_ParamLimits

0xfd64,	// (0x0005c923) popup_battery_window_t

0x91b7,	// (0x00055d76) midp_canvas_pane_ParamLimits

0x922e,	// (0x00055ded) midp_keypad_pane_ParamLimits

0x922e,	// (0x00055ded) midp_keypad_pane

0x94c7,	// (0x00056086) main_midp_pane_ParamLimits

0xbae3,	// (0x000586a2) signal_pane_g2_cp_ParamLimits

0xdd7a,	// (0x0005a939) aid_size_cell_midp_keypad_ParamLimits

0xdd7a,	// (0x0005a939) aid_size_cell_midp_keypad

0xdd94,	// (0x0005a953) midp_keyp_game_grid_pane_ParamLimits

0xdd94,	// (0x0005a953) midp_keyp_game_grid_pane

0xddb4,	// (0x0005a973) midp_keyp_rocker_pane_ParamLimits

0xddb4,	// (0x0005a973) midp_keyp_rocker_pane

0xdded,	// (0x0005a9ac) midp_keyp_sk_left_pane_ParamLimits

0xdded,	// (0x0005a9ac) midp_keyp_sk_left_pane

0xde47,	// (0x0005aa06) midp_keyp_sk_right_pane_ParamLimits

0xde47,	// (0x0005aa06) midp_keyp_sk_right_pane

0x18ce,	// (0x0004e48d) bg_button_pane_cp03

0xdea1,	// (0x0005aa60) midp_keyp_sk_left_pane_g1

0x18ce,	// (0x0004e48d) bg_button_pane_cp04

0xdea1,	// (0x0005aa60) midp_keyp_sk_right_pane_g1

0xc022,	// (0x00058be1) midp_keyp_rocker_pane_g1

0xdeaa,	// (0x0005aa69) keyp_game_cell_pane_ParamLimits

0xdeaa,	// (0x0005aa69) keyp_game_cell_pane

0x18ce,	// (0x0004e48d) bg_button_pane_cp02

0xdebd,	// (0x0005aa7c) keyp_game_cell_pane_g1

0x47f2,	// (0x000513b1) popup_fep_vkb2_window_ParamLimits

0x47f2,	// (0x000513b1) popup_fep_vkb2_window

0x6b66,	// (0x00053725) aid_size_cell_vkb2_ParamLimits

0x6b66,	// (0x00053725) aid_size_cell_vkb2

0x6bb2,	// (0x00053771) popup_fep_vkb2_window_g1_ParamLimits

0x6bb2,	// (0x00053771) popup_fep_vkb2_window_g1

0x6bfa,	// (0x000537b9) vkb2_area_bottom_pane_ParamLimits

0x6bfa,	// (0x000537b9) vkb2_area_bottom_pane

0x6c46,	// (0x00053805) vkb2_area_keypad_pane_ParamLimits

0x6c46,	// (0x00053805) vkb2_area_keypad_pane

0x6c88,	// (0x00053847) vkb2_area_top_pane_ParamLimits

0x6c88,	// (0x00053847) vkb2_area_top_pane

0x6d07,	// (0x000538c6) vkb2_top_entry_pane_ParamLimits

0x6d07,	// (0x000538c6) vkb2_top_entry_pane

0x6d31,	// (0x000538f0) vkb2_top_grid_left_pane_ParamLimits

0x6d31,	// (0x000538f0) vkb2_top_grid_left_pane

0x6d50,	// (0x0005390f) vkb2_top_grid_right_pane_ParamLimits

0x6d50,	// (0x0005390f) vkb2_top_grid_right_pane

0x6d6f,	// (0x0005392e) vkb2_cell_keypad_pane_ParamLimits

0x6d6f,	// (0x0005392e) vkb2_cell_keypad_pane

0x6e40,	// (0x000539ff) vkb2_area_bottom_grid_pane_ParamLimits

0x6e40,	// (0x000539ff) vkb2_area_bottom_grid_pane

0x6e66,	// (0x00053a25) vkb2_area_bottom_pane_g1_ParamLimits

0x6e66,	// (0x00053a25) vkb2_area_bottom_pane_g1

0x6e8a,	// (0x00053a49) vkb2_area_bottom_pane_g2_ParamLimits

0x6e8a,	// (0x00053a49) vkb2_area_bottom_pane_g2

0x6eb8,	// (0x00053a77) vkb2_area_bottom_pane_g3_ParamLimits

0x6eb8,	// (0x00053a77) vkb2_area_bottom_pane_g3

0x0002,

0xfd69,	// (0x0005c928) vkb2_area_bottom_pane_g_ParamLimits

0xfd69,	// (0x0005c928) vkb2_area_bottom_pane_g

0x6f19,	// (0x00053ad8) vkb2_top_cell_left_pane_ParamLimits

0x6f19,	// (0x00053ad8) vkb2_top_cell_left_pane

0xdece,	// (0x0005aa8d) vkb2_top_entry_pane_g1_ParamLimits

0xdece,	// (0x0005aa8d) vkb2_top_entry_pane_g1

0xdedc,	// (0x0005aa9b) vkb2_top_entry_pane_t1_ParamLimits

0xdedc,	// (0x0005aa9b) vkb2_top_entry_pane_t1

0xdf0e,	// (0x0005aacd) vkb2_top_entry_pane_t2_ParamLimits

0xdf0e,	// (0x0005aacd) vkb2_top_entry_pane_t2

0xdf40,	// (0x0005aaff) vkb2_top_entry_pane_t3_ParamLimits

0xdf40,	// (0x0005aaff) vkb2_top_entry_pane_t3

0x0002,

0xfd70,	// (0x0005c92f) vkb2_top_entry_pane_t_ParamLimits

0xfd70,	// (0x0005c92f) vkb2_top_entry_pane_t

0x6f66,	// (0x00053b25) vkb2_top_grid_right_pane_g1_ParamLimits

0x6f66,	// (0x00053b25) vkb2_top_grid_right_pane_g1

0x6f7c,	// (0x00053b3b) vkb2_top_grid_right_pane_g2_ParamLimits

0x6f7c,	// (0x00053b3b) vkb2_top_grid_right_pane_g2

0x6f94,	// (0x00053b53) vkb2_top_grid_right_pane_g3_ParamLimits

0x6f94,	// (0x00053b53) vkb2_top_grid_right_pane_g3

0x6fac,	// (0x00053b6b) vkb2_top_grid_right_pane_g4_ParamLimits

0x6fac,	// (0x00053b6b) vkb2_top_grid_right_pane_g4

0x0003,

0xfd77,	// (0x0005c936) vkb2_top_grid_right_pane_g_ParamLimits

0xfd77,	// (0x0005c936) vkb2_top_grid_right_pane_g

0x6fc2,	// (0x00053b81) vkb2_top_cell_left_pane_g1

0x6fd9,	// (0x00053b98) vkb2_cell_keypad_pane_g1_ParamLimits

0x6fd9,	// (0x00053b98) vkb2_cell_keypad_pane_g1

0xdf64,	// (0x0005ab23) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf64,	// (0x0005ab23) vkb2_cell_keypad_pane_t1

0x6fe7,	// (0x00053ba6) vkb2_cell_bottom_grid_pane_ParamLimits

0x6fe7,	// (0x00053ba6) vkb2_cell_bottom_grid_pane

0x7020,	// (0x00053bdf) vkb2_cell_bottom_grid_pane_g1

0xdb0f,	// (0x0005a6ce) aid_call2_pane_cp02

0xdb17,	// (0x0005a6d6) aid_call_pane_cp02

0xdb1f,	// (0x0005a6de) clock_digital_number_pane_cp10

0xdb27,	// (0x0005a6e6) clock_digital_number_pane_cp11

0xdb2f,	// (0x0005a6ee) clock_digital_number_pane_cp12

0xdb37,	// (0x0005a6f6) clock_digital_number_pane_cp13

0xdb3f,	// (0x0005a6fe) clock_digital_separator_pane_cp10

0x8b82,	// (0x00055741) popup_clock_digital_analogue_window_cp2_g1

0x8b82,	// (0x00055741) popup_clock_digital_analogue_window_cp2_g2

0xdb47,	// (0x0005a706) popup_clock_digital_analogue_window_cp2_g3

0x8b82,	// (0x00055741) popup_clock_digital_analogue_window_cp2_g4

0xdb47,	// (0x0005a706) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd2c,	// (0x0005c8eb) popup_clock_digital_analogue_window_cp2_g

0xdb4f,	// (0x0005a70e) popup_clock_digital_analogue_window_cp2_t1

0xdb5d,	// (0x0005a71c) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd37,	// (0x0005c8f6) popup_clock_digital_analogue_window_cp2_t

0xc022,	// (0x00058be1) clock_digital_number_pane_cp10_g1

0xc022,	// (0x00058be1) clock_digital_number_pane_cp10_g2

0x0001,

0xfb13,	// (0x0005c6d2) clock_digital_number_pane_cp10_g

0xc022,	// (0x00058be1) clock_digital_separator_pane_cp10_g1

0xc022,	// (0x00058be1) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb13,	// (0x0005c6d2) clock_digital_separator_pane_cp10_g

0xd98b,	// (0x0005a54a) uniindi_top_pane_g3

0xd99c,	// (0x0005a55b) uniindi_top_pane_g4

0x6dfa,	// (0x000539b9) vkb2_row_keypad_pane_ParamLimits

0x6dfa,	// (0x000539b9) vkb2_row_keypad_pane

0x7040,	// (0x00053bff) vkb2_cell_t_keypad_pane_ParamLimits

0x7040,	// (0x00053bff) vkb2_cell_t_keypad_pane

0x7050,	// (0x00053c0f) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7050,	// (0x00053c0f) vkb2_cell_t_keypad_pane_cp08

0x7063,	// (0x00053c22) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7063,	// (0x00053c22) vkb2_cell_t_keypad_pane_cp09

0x7077,	// (0x00053c36) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7077,	// (0x00053c36) vkb2_cell_t_keypad_pane_cp01

0x7088,	// (0x00053c47) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7088,	// (0x00053c47) vkb2_cell_t_keypad_pane_cp02

0x7099,	// (0x00053c58) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7099,	// (0x00053c58) vkb2_cell_t_keypad_pane_cp03

0x70aa,	// (0x00053c69) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x70aa,	// (0x00053c69) vkb2_cell_t_keypad_pane_cp04

0x70bb,	// (0x00053c7a) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x70bb,	// (0x00053c7a) vkb2_cell_t_keypad_pane_cp05

0x70cc,	// (0x00053c8b) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x70cc,	// (0x00053c8b) vkb2_cell_t_keypad_pane_cp06

0x70dd,	// (0x00053c9c) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x70dd,	// (0x00053c9c) vkb2_cell_t_keypad_pane_cp07

0x70ee,	// (0x00053cad) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x70ee,	// (0x00053cad) vkb2_cell_t_keypad_pane_cp10

0x6757,	// (0x00053316) vkb2_cell_t_keypad_pane_g1

0xdf7b,	// (0x0005ab3a) vkb2_cell_t_keypad_pane_t1

0x46e9,	// (0x000512a8) popup_grid_graphic2_window

0xdf8d,	// (0x0005ab4c) aid_size_cell_graphic2_ParamLimits

0xdf8d,	// (0x0005ab4c) aid_size_cell_graphic2

0xdfc5,	// (0x0005ab84) bg_popup_window_pane_cp21_ParamLimits

0xdfc5,	// (0x0005ab84) bg_popup_window_pane_cp21

0xdfd3,	// (0x0005ab92) graphic2_pages_pane_ParamLimits

0xdfd3,	// (0x0005ab92) graphic2_pages_pane

0xe019,	// (0x0005abd8) grid_graphic2_control_pane_ParamLimits

0xe019,	// (0x0005abd8) grid_graphic2_control_pane

0xe057,	// (0x0005ac16) grid_graphic2_pane_ParamLimits

0xe057,	// (0x0005ac16) grid_graphic2_pane

0xe0cb,	// (0x0005ac8a) cell_graphic2_pane

0x46e9,	// (0x000512a8) main_comp_mode_pane

0xd1f7,	// (0x00059db6) list_ai3_gene_pane_ParamLimits

0xd5cd,	// (0x0005a18c) bg_popup_window_pane_cp19_ParamLimits

0xd5d9,	// (0x0005a198) bg_touch_area_indi_pane_ParamLimits

0xd5d9,	// (0x0005a198) bg_touch_area_indi_pane

0xd5ef,	// (0x0005a1ae) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5ef,	// (0x0005a1ae) bg_touch_area_indi_pane_cp01

0xd605,	// (0x0005a1c4) bg_touch_area_indi_pane_cp02_ParamLimits

0xd605,	// (0x0005a1c4) bg_touch_area_indi_pane_cp02

0xd61b,	// (0x0005a1da) bg_touch_area_indi_pane_cp03_ParamLimits

0xd61b,	// (0x0005a1da) bg_touch_area_indi_pane_cp03

0xd635,	// (0x0005a1f4) popup_slider_window_g1_ParamLimits

0xd651,	// (0x0005a210) popup_slider_window_g2_ParamLimits

0xd66d,	// (0x0005a22c) popup_slider_window_g3_ParamLimits

0xfcc1,	// (0x0005c880) popup_slider_window_g_ParamLimits

0xd6d3,	// (0x0005a292) popup_slider_window_t1_ParamLimits

0xd747,	// (0x0005a306) small_volume_slider_vertical_pane_ParamLimits

0xe0cb,	// (0x0005ac8a) cell_graphic2_pane_ParamLimits

0xe11a,	// (0x0005acd9) bg_button_pane_cp10_ParamLimits

0xe11a,	// (0x0005acd9) bg_button_pane_cp10

0xe12d,	// (0x0005acec) bg_button_pane_cp11_ParamLimits

0xe12d,	// (0x0005acec) bg_button_pane_cp11

0xe140,	// (0x0005acff) graphic2_pages_pane_g1_ParamLimits

0xe140,	// (0x0005acff) graphic2_pages_pane_g1

0xe15b,	// (0x0005ad1a) graphic2_pages_pane_g2_ParamLimits

0xe15b,	// (0x0005ad1a) graphic2_pages_pane_g2

0x0001,

0xfd85,	// (0x0005c944) graphic2_pages_pane_g_ParamLimits

0xfd85,	// (0x0005c944) graphic2_pages_pane_g

0xe173,	// (0x0005ad32) graphic2_pages_pane_t1_ParamLimits

0xe173,	// (0x0005ad32) graphic2_pages_pane_t1

0xe18b,	// (0x0005ad4a) cell_graphic2_control_pane_ParamLimits

0xe18b,	// (0x0005ad4a) cell_graphic2_control_pane

0xe1a9,	// (0x0005ad68) cell_graphic2_pane_g1_ParamLimits

0xe1a9,	// (0x0005ad68) cell_graphic2_pane_g1

0xe1b6,	// (0x0005ad75) cell_graphic2_pane_g2_ParamLimits

0xe1b6,	// (0x0005ad75) cell_graphic2_pane_g2

0xe1c3,	// (0x0005ad82) cell_graphic2_pane_g3_ParamLimits

0xe1c3,	// (0x0005ad82) cell_graphic2_pane_g3

0xe1f1,	// (0x0005adb0) cell_graphic2_pane_g4_ParamLimits

0xe1f1,	// (0x0005adb0) cell_graphic2_pane_g4

0xe1fe,	// (0x0005adbd) cell_graphic2_pane_g5_ParamLimits

0xe1fe,	// (0x0005adbd) cell_graphic2_pane_g5

0x0004,

0xfd8a,	// (0x0005c949) cell_graphic2_pane_g_ParamLimits

0xfd8a,	// (0x0005c949) cell_graphic2_pane_g

0xe217,	// (0x0005add6) cell_graphic2_pane_t1_ParamLimits

0xe217,	// (0x0005add6) cell_graphic2_pane_t1

0x9a65,	// (0x00056624) grid_highlight_pane_cp11_ParamLimits

0x9a65,	// (0x00056624) grid_highlight_pane_cp11

0x7ad2,	// (0x00054691) bg_button_pane_cp05

0xe24d,	// (0x0005ae0c) cell_graphic2_control_pane_g1

0xc022,	// (0x00058be1) bg_touch_area_indi_pane_g1

0xe275,	// (0x0005ae34) aid_cmod_rocker_key_size

0xe27f,	// (0x0005ae3e) aid_cmode_itu_key_size

0xe289,	// (0x0005ae48) main_cmode_video_pane

0xe293,	// (0x0005ae52) main_comp_mode_itu_pane

0xe29f,	// (0x0005ae5e) main_comp_mode_rocker_pane

0xe2ab,	// (0x0005ae6a) cell_cmode_rocker_pane_ParamLimits

0xe2ab,	// (0x0005ae6a) cell_cmode_rocker_pane

0xe2bd,	// (0x0005ae7c) cell_cmode_itu_pane_ParamLimits

0xe2bd,	// (0x0005ae7c) cell_cmode_itu_pane

0x84f9,	// (0x000550b8) bg_button_pane_cp06_ParamLimits

0x84f9,	// (0x000550b8) bg_button_pane_cp06

0xc2a0,	// (0x00058e5f) cell_cmode_rocker_pane_g1_ParamLimits

0xc2a0,	// (0x00058e5f) cell_cmode_rocker_pane_g1

0xd7eb,	// (0x0005a3aa) cell_cmode_rocker_pane_g2_ParamLimits

0xd7eb,	// (0x0005a3aa) cell_cmode_rocker_pane_g2

0x0001,

0xfd9a,	// (0x0005c959) cell_cmode_rocker_pane_g_ParamLimits

0xfd9a,	// (0x0005c959) cell_cmode_rocker_pane_g

0x18ce,	// (0x0004e48d) bg_button_pane_cp07

0xe2d2,	// (0x0005ae91) cell_cmode_itu_pane_g1

0xe2db,	// (0x0005ae9a) cell_cmode_itu_pane_t1

0xe2e9,	// (0x0005aea8) cell_cmode_itu_pane_t2

0x0001,

0xfd9f,	// (0x0005c95e) cell_cmode_itu_pane_t

0xda0e,	// (0x0005a5cd) aid_touch_ctrl_left

0xda16,	// (0x0005a5d5) aid_touch_ctrl_right

0x18ce,	// (0x0004e48d) compa_mode_pane

0xe2f7,	// (0x0005aeb6) aid_cmod_rocker_key_size_cp

0xe301,	// (0x0005aec0) aid_cmode_itu_key_size_cp

0xe30b,	// (0x0005aeca) compa_mode_pane_g1

0xe313,	// (0x0005aed2) compa_mode_pane_g2

0xe31b,	// (0x0005aeda) compa_mode_pane_g3

0x0002,

0xfda4,	// (0x0005c963) compa_mode_pane_g

0xe323,	// (0x0005aee2) main_comp_mode_itu_pane_cp

0xe32b,	// (0x0005aeea) main_comp_mode_rocker_pane_cp

0xe333,	// (0x0005aef2) cell_cmode_itu_pane_cp_ParamLimits

0xe333,	// (0x0005aef2) cell_cmode_itu_pane_cp

0xe348,	// (0x0005af07) cell_cmode_rocker_pane_cp_ParamLimits

0xe348,	// (0x0005af07) cell_cmode_rocker_pane_cp

0x84f9,	// (0x000550b8) bg_button_pane_cp06_cp_ParamLimits

0x84f9,	// (0x000550b8) bg_button_pane_cp06_cp

0xc2a0,	// (0x00058e5f) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc2a0,	// (0x00058e5f) cell_cmode_rocker_pane_g1_cp

0xc022,	// (0x00058be1) cell_cmode_rocker_pane_g2_cp

0x18ce,	// (0x0004e48d) bg_button_pane_cp07_cp

0xaf3f,	// (0x00057afe) cell_cmode_itu_pane_g1_cp

0xe35a,	// (0x0005af19) cell_cmode_itu_pane_t1_cp

0xe35a,	// (0x0005af19) cell_cmode_itu_pane_t2_cp

0xaf2c,	// (0x00057aeb) settings_code_pane_cp2

0x7849,	// (0x00054408) bg_popup_window_pane_cp3_ParamLimits

0x7cd2,	// (0x00054891) heading_pane_cp3_ParamLimits

0x7ce1,	// (0x000548a0) listscroll_popup_graphic_pane_ParamLimits

0x6500,	// (0x000530bf) fep_hwr_aid_pane_ParamLimits

0x6ac1,	// (0x00053680) aid_touch_sctrl_top_ParamLimits

0x6adc,	// (0x0005369b) sctrl_sk_top_pane_g1_ParamLimits

0x6757,	// (0x00053316) sctrl_sk_top_pane_g2_ParamLimits

0xfcda,	// (0x0005c899) sctrl_sk_top_pane_g_ParamLimits

0x6ae9,	// (0x000536a8) sctrl_sk_top_pane_t1_ParamLimits

0x6ac1,	// (0x00053680) aid_touch_sctrl_bottom_ParamLimits

0x6ae9,	// (0x000536a8) sctrl_sk_bottom_pane_t1_ParamLimits

0xd957,	// (0x0005a516) aid_area_touch_clock

0x6cce,	// (0x0005388d) aid_vkb2_area_top_pane_cell_ParamLimits

0x6cce,	// (0x0005388d) aid_vkb2_area_top_pane_cell

0x6e1c,	// (0x000539db) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6e1c,	// (0x000539db) aid_vkb2_area_bottom_pane_cell

0xdec6,	// (0x0005aa85) popup_char_count_window

0xe368,	// (0x0005af27) popup_char_count_window_g1

0xe371,	// (0x0005af30) popup_char_count_window_g2

0xe37a,	// (0x0005af39) popup_char_count_window_g3

0x0002,

0xfdab,	// (0x0005c96a) popup_char_count_window_g

0xe383,	// (0x0005af42) popup_char_count_window_t1

0x6b90,	// (0x0005374f) popup_fep_char_preview_window_ParamLimits

0x6b90,	// (0x0005374f) popup_fep_char_preview_window

0x6cec,	// (0x000538ab) vkb2_top_candi_pane_ParamLimits

0x6cec,	// (0x000538ab) vkb2_top_candi_pane

0xe391,	// (0x0005af50) cell_vkb2_top_candi_pane_ParamLimits

0xe391,	// (0x0005af50) cell_vkb2_top_candi_pane

0x7103,	// (0x00053cc2) bg_popup_fep_char_preview_window_ParamLimits

0x7103,	// (0x00053cc2) bg_popup_fep_char_preview_window

0x7111,	// (0x00053cd0) popup_fep_char_preview_window_t1_ParamLimits

0x7111,	// (0x00053cd0) popup_fep_char_preview_window_t1

0xe3db,	// (0x0005af9a) bg_popup_fep_char_preview_window_g1

0xe3e3,	// (0x0005afa2) bg_popup_fep_char_preview_window_g2

0xe3eb,	// (0x0005afaa) bg_popup_fep_char_preview_window_g3

0xe3f3,	// (0x0005afb2) bg_popup_fep_char_preview_window_g4

0xe3fb,	// (0x0005afba) bg_popup_fep_char_preview_window_g5

0xe403,	// (0x0005afc2) bg_popup_fep_char_preview_window_g6

0xe40b,	// (0x0005afca) bg_popup_fep_char_preview_window_g7

0xe413,	// (0x0005afd2) bg_popup_fep_char_preview_window_g8

0xe41b,	// (0x0005afda) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb2,	// (0x0005c971) bg_popup_fep_char_preview_window_g

0x6757,	// (0x00053316) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6757,	// (0x00053316) cell_vkb2_top_candi_pane_g1

0x6765,	// (0x00053324) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6765,	// (0x00053324) cell_vkb2_top_candi_pane_g2

0xe1d0,	// (0x0005ad8f) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe1d0,	// (0x0005ad8f) cell_vkb2_top_candi_pane_g3

0x7153,	// (0x00053d12) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7153,	// (0x00053d12) cell_vkb2_top_candi_pane_g4

0xc6ff,	// (0x000592be) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc6ff,	// (0x000592be) cell_vkb2_top_candi_pane_g5

0x7174,	// (0x00053d33) cell_vkb2_top_candi_pane_g6_ParamLimits

0x7174,	// (0x00053d33) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc7,	// (0x0005c986) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc7,	// (0x0005c986) cell_vkb2_top_candi_pane_g

0x7182,	// (0x00053d41) cell_vkb2_top_candi_pane_t1

0x6007,	// (0x00052bc6) aid_size_touch_slider_mark_ParamLimits

0x6007,	// (0x00052bc6) aid_size_touch_slider_mark

0xe009,	// (0x0005abc8) grid_graphic2_catg_pane_ParamLimits

0xe009,	// (0x0005abc8) grid_graphic2_catg_pane

0xe0a7,	// (0x0005ac66) popup_grid_graphic2_window_t1_ParamLimits

0xe0a7,	// (0x0005ac66) popup_grid_graphic2_window_t1

0xe0b9,	// (0x0005ac78) popup_grid_graphic2_window_t2_ParamLimits

0xe0b9,	// (0x0005ac78) popup_grid_graphic2_window_t2

0x0001,

0xfd80,	// (0x0005c93f) popup_grid_graphic2_window_t_ParamLimits

0xfd80,	// (0x0005c93f) popup_grid_graphic2_window_t

0x7ad2,	// (0x00054691) bg_button_pane_cp05_ParamLimits

0xe24d,	// (0x0005ae0c) cell_graphic2_control_pane_g1_ParamLimits

0xe423,	// (0x0005afe2) cell_graphic2_catg_pane_ParamLimits

0xe423,	// (0x0005afe2) cell_graphic2_catg_pane

0x18ce,	// (0x0004e48d) bg_button_pane_cp12

0xe435,	// (0x0005aff4) cell_graphic2_catg_pane_g1

0xd923,	// (0x0005a4e2) cell_tb_ext_pane_t1_ParamLimits

0x6f39,	// (0x00053af8) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6f39,	// (0x00053af8) vkb2_top_cell_right_narrow_pane

0x6f51,	// (0x00053b10) vkb2_top_cell_right_wide_pane_ParamLimits

0x6f51,	// (0x00053b10) vkb2_top_cell_right_wide_pane

0x64f2,	// (0x000530b1) bg_vkb2_func_pane_ParamLimits

0x64f2,	// (0x000530b1) bg_vkb2_func_pane

0x6fc2,	// (0x00053b81) vkb2_top_cell_left_pane_g1_ParamLimits

0x64f2,	// (0x000530b1) bg_vkb2_fuc_pane_cp03_ParamLimits

0x64f2,	// (0x000530b1) bg_vkb2_fuc_pane_cp03

0x7020,	// (0x00053bdf) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x99f9,	// (0x000565b8) bg_vkb2_func_pane_g1

0x9a01,	// (0x000565c0) bg_vkb2_func_pane_g2

0x9a11,	// (0x000565d0) bg_vkb2_func_pane_g3

0x9a09,	// (0x000565c8) bg_vkb2_func_pane_g4

0x9a19,	// (0x000565d8) bg_vkb2_func_pane_g5

0x9a21,	// (0x000565e0) bg_vkb2_func_pane_g6

0x9a29,	// (0x000565e8) bg_vkb2_func_pane_g7

0x9a31,	// (0x000565f0) bg_vkb2_func_pane_g8

0x99f1,	// (0x000565b0) bg_vkb2_func_pane_g9

0x0008,

0xfdd4,	// (0x0005c993) bg_vkb2_func_pane_g

0x64f2,	// (0x000530b1) bg_vkb2_fuc_pane_cp01_ParamLimits

0x64f2,	// (0x000530b1) bg_vkb2_fuc_pane_cp01

0x6fc2,	// (0x00053b81) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6fc2,	// (0x00053b81) vkb2_top_cell_right_wide_pane_g1

0x64f2,	// (0x000530b1) bg_vkb2_fuc_pane_cp02_ParamLimits

0x64f2,	// (0x000530b1) bg_vkb2_fuc_pane_cp02

0x71a1,	// (0x00053d60) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x71a1,	// (0x00053d60) vkb2_top_cell_right_narrow_pane_g1

0xd547,	// (0x0005a106) aid_touch_area_decrease_ParamLimits

0xd547,	// (0x0005a106) aid_touch_area_decrease

0xd56b,	// (0x0005a12a) aid_touch_area_increase_ParamLimits

0xd56b,	// (0x0005a12a) aid_touch_area_increase

0xd583,	// (0x0005a142) aid_touch_area_mute_ParamLimits

0xd583,	// (0x0005a142) aid_touch_area_mute

0xd59f,	// (0x0005a15e) aid_touch_area_slider_ParamLimits

0xd59f,	// (0x0005a15e) aid_touch_area_slider

0xd689,	// (0x0005a248) popup_slider_window_g4_ParamLimits

0xd689,	// (0x0005a248) popup_slider_window_g4

0xd6a1,	// (0x0005a260) popup_slider_window_g5_ParamLimits

0xd6a1,	// (0x0005a260) popup_slider_window_g5

0xd6c3,	// (0x0005a282) popup_slider_window_g6_ParamLimits

0xd6c3,	// (0x0005a282) popup_slider_window_g6

0xd701,	// (0x0005a2c0) popup_slider_window_t2_ParamLimits

0xd701,	// (0x0005a2c0) popup_slider_window_t2

0x0001,

0xfcce,	// (0x0005c88d) popup_slider_window_t_ParamLimits

0xfcce,	// (0x0005c88d) popup_slider_window_t

0xd719,	// (0x0005a2d8) slider_pane_ParamLimits

0xd719,	// (0x0005a2d8) slider_pane

0xe43e,	// (0x0005affd) slider_pane_g1_ParamLimits

0xe43e,	// (0x0005affd) slider_pane_g1

0xe452,	// (0x0005b011) slider_pane_g2_ParamLimits

0xe452,	// (0x0005b011) slider_pane_g2

0xe468,	// (0x0005b027) slider_pane_g3_ParamLimits

0xe468,	// (0x0005b027) slider_pane_g3

0x0003,

0xfde7,	// (0x0005c9a6) slider_pane_g_ParamLimits

0xfde7,	// (0x0005c9a6) slider_pane_g

0x5b39,	// (0x000526f8) popup_tb_float_extension_window_ParamLimits

0x5b39,	// (0x000526f8) popup_tb_float_extension_window

0xe494,	// (0x0005b053) aid_size_cell_tb_float_ext

0x18ce,	// (0x0004e48d) bg_popup_sub_window_cp28

0xe4a0,	// (0x0005b05f) grid_tb_float_ext_pane

0xe4aa,	// (0x0005b069) cell_tb_float_ext_pane_ParamLimits

0xe4aa,	// (0x0005b069) cell_tb_float_ext_pane

0xe4c4,	// (0x0005b083) cell_tb_float_ext_pane_g1

0xe4cd,	// (0x0005b08c) grid_highlight_pane_cp12

0x6641,	// (0x00053200) cell_last_hwr_side_pane_ParamLimits

0x6641,	// (0x00053200) cell_last_hwr_side_pane

0xc022,	// (0x00058be1) cell_last_hwr_side_pane_g1

0xe4d6,	// (0x0005b095) cell_last_hwr_side_pane_g2

0x0001,

0xfdf0,	// (0x0005c9af) cell_last_hwr_side_pane_g

0x6ee8,	// (0x00053aa7) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6ee8,	// (0x00053aa7) vkb2_area_bottom_space_btn_pane

0x6757,	// (0x00053316) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf7b,	// (0x0005ab3a) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7182,	// (0x00053d41) cell_vkb2_top_candi_pane_t1_ParamLimits

0x71c1,	// (0x00053d80) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x71c1,	// (0x00053d80) vkb2_area_bottom_space_btn_pane_g1

0x71fb,	// (0x00053dba) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x71fb,	// (0x00053dba) vkb2_area_bottom_space_btn_pane_g2

0x7231,	// (0x00053df0) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7231,	// (0x00053df0) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf5,	// (0x0005c9b4) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf5,	// (0x0005c9b4) vkb2_area_bottom_space_btn_pane_g

0x65b5,	// (0x00053174) cel_fep_hwr_func_pane_ParamLimits

0x65b5,	// (0x00053174) cel_fep_hwr_func_pane

0x65f1,	// (0x000531b0) cell_hwr_side_button_pane_ParamLimits

0x65f1,	// (0x000531b0) cell_hwr_side_button_pane

0xd957,	// (0x0005a516) aid_area_touch_clock_ParamLimits

0x7ad2,	// (0x00054691) bg_uniindi_top_pane_ParamLimits

0xd969,	// (0x0005a528) uniindi_top_pane_g1_ParamLimits

0xd97f,	// (0x0005a53e) uniindi_top_pane_g2_ParamLimits

0xd98b,	// (0x0005a54a) uniindi_top_pane_g3_ParamLimits

0xd99c,	// (0x0005a55b) uniindi_top_pane_g4_ParamLimits

0xfd06,	// (0x0005c8c5) uniindi_top_pane_g_ParamLimits

0xd9a9,	// (0x0005a568) uniindi_top_pane_t1_ParamLimits

0x7ad2,	// (0x00054691) bg_vkb2_func_pane_cp01_ParamLimits

0x7ad2,	// (0x00054691) bg_vkb2_func_pane_cp01

0xe4df,	// (0x0005b09e) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4df,	// (0x0005b09e) cel_fep_hwr_func_pane_g1

0x7ad2,	// (0x00054691) bg_vkb2_func_pane_cp02_ParamLimits

0x7ad2,	// (0x00054691) bg_vkb2_func_pane_cp02

0xe4df,	// (0x0005b09e) cell_hwr_side_button_pane_g1_ParamLimits

0xe4df,	// (0x0005b09e) cell_hwr_side_button_pane_g1

0x9872,	// (0x00056431) status_pane_g4_ParamLimits

0x9872,	// (0x00056431) status_pane_g4

0x988c,	// (0x0005644b) status_pane_t1

0xbd67,	// (0x00058926) form2_midp_gauge_slider_cont_pane

0xbd6f,	// (0x0005892e) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbd81,	// (0x00058940) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbd93,	// (0x00058952) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfac6,	// (0x0005c685) form2_midp_gauge_slider_pane_t_ParamLimits

0xbda5,	// (0x00058964) form2_midp_slider_pane_ParamLimits

0x6b58,	// (0x00053717) aid_size_cell_func_vkb2_ParamLimits

0x6b58,	// (0x00053717) aid_size_cell_func_vkb2

0xe480,	// (0x0005b03f) slider_pane_g4_ParamLimits

0xe480,	// (0x0005b03f) slider_pane_g4

0x727b,	// (0x00053e3a) form2_midp_gauge_slider_pane_t2_cp01

0x7289,	// (0x00053e48) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7289,	// (0x00053e48) form2_midp_gauge_slider_pane_t3_cp01

0x72a6,	// (0x00053e65) form2_midp_slider_pane_cp01

0x18ce,	// (0x0004e48d) navi_smil_pane

0xe518,	// (0x0005b0d7) navi_smil_pane_g1

0xe520,	// (0x0005b0df) navi_smil_pane_t1

0xe4ed,	// (0x0005b0ac) form2_midp_slider_pane_g1

0xe4f6,	// (0x0005b0b5) form2_midp_slider_pane_g2

0xe4fe,	// (0x0005b0bd) form2_midp_slider_pane_g3

0xe4ed,	// (0x0005b0ac) form2_midp_slider_pane_g4

0xe506,	// (0x0005b0c5) form2_midp_slider_pane_g5

0x0004,

0xfdfe,	// (0x0005c9bd) form2_midp_slider_pane_g

0x726b,	// (0x00053e2a) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x726b,	// (0x00053e2a) vkb2_area_bottom_space_btn_pane_g4

0x96a1,	// (0x00056260) lc0_navi_pane_ParamLimits

0x96a1,	// (0x00056260) lc0_navi_pane

0x9717,	// (0x000562d6) lc0_stat_indi_pane_ParamLimits

0x9717,	// (0x000562d6) lc0_stat_indi_pane

0x972e,	// (0x000562ed) ls0_title_pane_ParamLimits

0x972e,	// (0x000562ed) ls0_title_pane

0x84f9,	// (0x000550b8) bg_popup_sub_pane_cp14_ParamLimits

0xd93e,	// (0x0005a4fd) list_uniindi_pane_ParamLimits

0xd94a,	// (0x0005a509) uniindi_top_pane_ParamLimits

0xd9e6,	// (0x0005a5a5) list_single_uniindi_pane_g1_ParamLimits

0xd9f9,	// (0x0005a5b8) list_single_uniindi_pane_t1_ParamLimits

0x72af,	// (0x00053e6e) lc0_stat_clock_pane_ParamLimits

0x72af,	// (0x00053e6e) lc0_stat_clock_pane

0xe52e,	// (0x0005b0ed) lc0_stat_indi_pane_g1_ParamLimits

0xe52e,	// (0x0005b0ed) lc0_stat_indi_pane_g1

0xe53b,	// (0x0005b0fa) lc0_stat_indi_pane_g2_ParamLimits

0xe53b,	// (0x0005b0fa) lc0_stat_indi_pane_g2

0x0001,

0xfe09,	// (0x0005c9c8) lc0_stat_indi_pane_g_ParamLimits

0xfe09,	// (0x0005c9c8) lc0_stat_indi_pane_g

0x72bc,	// (0x00053e7b) lc0_uni_indicator_pane_ParamLimits

0x72bc,	// (0x00053e7b) lc0_uni_indicator_pane

0xe548,	// (0x0005b107) ls0_title_pane_g1_ParamLimits

0xe548,	// (0x0005b107) ls0_title_pane_g1

0xe55c,	// (0x0005b11b) ls0_title_pane_t1_ParamLimits

0xe55c,	// (0x0005b11b) ls0_title_pane_t1

0x72c9,	// (0x00053e88) lc0_uni_indicator_pane_g1_ParamLimits

0x72c9,	// (0x00053e88) lc0_uni_indicator_pane_g1

0xe592,	// (0x0005b151) lc0_stat_clock_pane_t1

0x46e9,	// (0x000512a8) main_ai5_pane

0xe5a0,	// (0x0005b15f) ai5_sk_pane_ParamLimits

0xe5a0,	// (0x0005b15f) ai5_sk_pane

0xe5ad,	// (0x0005b16c) cell_ai5_widget_pane_ParamLimits

0xe5ad,	// (0x0005b16c) cell_ai5_widget_pane

0xe676,	// (0x0005b235) aid_size_cell_widget_grid

0xe684,	// (0x0005b243) bg_ai5_widget_pane_ParamLimits

0xe684,	// (0x0005b243) bg_ai5_widget_pane

0xe700,	// (0x0005b2bf) cell_ai5_widget_pane_g2

0xe714,	// (0x0005b2d3) cell_ai5_widget_pane_g3

0xe72e,	// (0x0005b2ed) cell_ai5_widget_pane_g4

0xe73e,	// (0x0005b2fd) cell_ai5_widget_pane_g5

0xe74e,	// (0x0005b30d) cell_ai5_widget_pane_g6

0xe75a,	// (0x0005b319) cell_ai5_widget_pane_g7

0xe7c6,	// (0x0005b385) cell_ai5_widget_pane_t1_ParamLimits

0xe7c6,	// (0x0005b385) cell_ai5_widget_pane_t1

0xe7e3,	// (0x0005b3a2) cell_ai5_widget_pane_t2_ParamLimits

0xe7e3,	// (0x0005b3a2) cell_ai5_widget_pane_t2

0xe7fb,	// (0x0005b3ba) cell_ai5_widget_pane_t3_ParamLimits

0xe7fb,	// (0x0005b3ba) cell_ai5_widget_pane_t3

0xe813,	// (0x0005b3d2) cell_ai5_widget_pane_t4_ParamLimits

0xe813,	// (0x0005b3d2) cell_ai5_widget_pane_t4

0xe839,	// (0x0005b3f8) cell_ai5_widget_pane_t5_ParamLimits

0xe839,	// (0x0005b3f8) cell_ai5_widget_pane_t5

0xe858,	// (0x0005b417) cell_ai5_widget_pane_t6_ParamLimits

0xe858,	// (0x0005b417) cell_ai5_widget_pane_t6

0xe86a,	// (0x0005b429) cell_ai5_widget_pane_t7_ParamLimits

0xe86a,	// (0x0005b429) cell_ai5_widget_pane_t7

0xe889,	// (0x0005b448) cell_ai5_widget_pane_t8_ParamLimits

0xe889,	// (0x0005b448) cell_ai5_widget_pane_t8

0x000b,

0xfe29,	// (0x0005c9e8) cell_ai5_widget_pane_t_ParamLimits

0xfe29,	// (0x0005c9e8) cell_ai5_widget_pane_t

0xe90d,	// (0x0005b4cc) grid_ai5_widget_pane

0x84f9,	// (0x000550b8) highlight_cell_ai5_widget_pane_ParamLimits

0x84f9,	// (0x000550b8) highlight_cell_ai5_widget_pane

0xe91b,	// (0x0005b4da) ai5_sk_left_pane

0xe925,	// (0x0005b4e4) ai5_sk_middle_pane

0xe92f,	// (0x0005b4ee) ai5_sk_right_pane

0xe939,	// (0x0005b4f8) bg_ai5_widget_pane_g1_ParamLimits

0xe939,	// (0x0005b4f8) bg_ai5_widget_pane_g1

0xe945,	// (0x0005b504) bg_ai5_widget_pane_g2_ParamLimits

0xe945,	// (0x0005b504) bg_ai5_widget_pane_g2

0xe951,	// (0x0005b510) bg_ai5_widget_pane_g3_ParamLimits

0xe951,	// (0x0005b510) bg_ai5_widget_pane_g3

0xe95d,	// (0x0005b51c) bg_ai5_widget_pane_g4_ParamLimits

0xe95d,	// (0x0005b51c) bg_ai5_widget_pane_g4

0xe969,	// (0x0005b528) bg_ai5_widget_pane_g5_ParamLimits

0xe969,	// (0x0005b528) bg_ai5_widget_pane_g5

0xe975,	// (0x0005b534) bg_ai5_widget_pane_g6_ParamLimits

0xe975,	// (0x0005b534) bg_ai5_widget_pane_g6

0xe981,	// (0x0005b540) bg_ai5_widget_pane_g7_ParamLimits

0xe981,	// (0x0005b540) bg_ai5_widget_pane_g7

0xe98d,	// (0x0005b54c) bg_ai5_widget_pane_g8_ParamLimits

0xe98d,	// (0x0005b54c) bg_ai5_widget_pane_g8

0xe999,	// (0x0005b558) bg_ai5_widget_pane_g9_ParamLimits

0xe999,	// (0x0005b558) bg_ai5_widget_pane_g9

0x0008,

0xfe42,	// (0x0005ca01) bg_ai5_widget_pane_g_ParamLimits

0xfe42,	// (0x0005ca01) bg_ai5_widget_pane_g

0xe9cb,	// (0x0005b58a) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9cb,	// (0x0005b58a) cell_shortcut_ai5_widget_pane

0x91a3,	// (0x00055d62) bg_cell_shortcut_ai5_widget_pane

0xe9dc,	// (0x0005b59b) cell_grid_ai5_widget_pane_g1

0x91a3,	// (0x00055d62) highlight_cell_shortcut_ai5_widget_pane

0x99f9,	// (0x000565b8) ai5_sk_left_pane_g1

0xe9e5,	// (0x0005b5a4) ai5_sk_left_pane_g2

0xe9ed,	// (0x0005b5ac) ai5_sk_left_pane_g3

0xe9f5,	// (0x0005b5b4) ai5_sk_left_pane_g4

0x0003,

0xfe55,	// (0x0005ca14) ai5_sk_left_pane_g

0xe9fd,	// (0x0005b5bc) ai5_sk_left_pane_t1

0x9a01,	// (0x000565c0) ai5_sk_right_pane_g1

0xea0b,	// (0x0005b5ca) ai5_sk_right_pane_g2

0xea13,	// (0x0005b5d2) ai5_sk_right_pane_g3

0xea1b,	// (0x0005b5da) ai5_sk_right_pane_g4

0x0003,

0xfe5e,	// (0x0005ca1d) ai5_sk_right_pane_g

0xea23,	// (0x0005b5e2) ai5_sk_right_pane_t1

0x9a01,	// (0x000565c0) ai5_sk_middle_pane_g1

0x99f9,	// (0x000565b8) ai5_sk_middle_pane_g2

0x9a19,	// (0x000565d8) ai5_sk_middle_pane_g3

0xea13,	// (0x0005b5d2) ai5_sk_middle_pane_g4

0xe9ed,	// (0x0005b5ac) ai5_sk_middle_pane_g5

0xea31,	// (0x0005b5f0) ai5_sk_middle_pane_g6

0xea39,	// (0x0005b5f8) ai5_sk_middle_pane_g7

0x0006,

0xfe67,	// (0x0005ca26) ai5_sk_middle_pane_g

0x9527,	// (0x000560e6) aid_touch_area_size_lc0_ParamLimits

0x9527,	// (0x000560e6) aid_touch_area_size_lc0

0x6786,	// (0x00053345) cell_hwr_candidate_pane_t1_ParamLimits

0x9543,	// (0x00056102) aid_touch_navi_pane

0x981c,	// (0x000563db) status_dt_navi_pane_ParamLimits

0x981c,	// (0x000563db) status_dt_navi_pane

0x9829,	// (0x000563e8) status_dt_sta_pane_ParamLimits

0x9829,	// (0x000563e8) status_dt_sta_pane

0xea41,	// (0x0005b600) dt_sta_controll_pane

0xea4e,	// (0x0005b60d) dt_sta_indi_pane

0xea5f,	// (0x0005b61e) dt_sta_title_pane

0x7ad2,	// (0x00054691) bg_dt_sta_indi_pane_ParamLimits

0x7ad2,	// (0x00054691) bg_dt_sta_indi_pane

0xea72,	// (0x0005b631) dt_sta_battery_pane

0xea7a,	// (0x0005b639) dt_sta_indi_pane_g1

0xea83,	// (0x0005b642) dt_sta_indi_pane_g2

0xea8c,	// (0x0005b64b) dt_sta_indi_pane_g3

0x0002,

0xfe76,	// (0x0005ca35) dt_sta_indi_pane_g

0xea95,	// (0x0005b654) dt_sta_signal_pane

0x84f9,	// (0x000550b8) bg_dt_sta_title_pane_ParamLimits

0x84f9,	// (0x000550b8) bg_dt_sta_title_pane

0xea9e,	// (0x0005b65d) dt_sta_title_pane_g1

0xeaa6,	// (0x0005b665) dt_sta_title_pane_t1_ParamLimits

0xeaa6,	// (0x0005b665) dt_sta_title_pane_t1

0x18ce,	// (0x0004e48d) bg_dt_sta_control_pane

0xeabb,	// (0x0005b67a) dt_sta_controll_pane_g1

0xeac4,	// (0x0005b683) bg_dt_sta_title_pane_g1

0xeacd,	// (0x0005b68c) bg_dt_sta_title_pane_g2

0xead6,	// (0x0005b695) bg_dt_sta_title_pane_g3

0x0002,

0xfe7d,	// (0x0005ca3c) bg_dt_sta_title_pane_g

0xc022,	// (0x00058be1) bg_dt_sta_indi_pane_g1

0xeadf,	// (0x0005b69e) dt_sta_signal_pane_g1

0xeae7,	// (0x0005b6a6) dt_sta_signal_pane_g2

0x0001,

0xfe84,	// (0x0005ca43) dt_sta_signal_pane_g

0xeaef,	// (0x0005b6ae) dt_sta_battery_pane_g1

0xeaf8,	// (0x0005b6b7) dt_sta_battery_pane_t1

0xc022,	// (0x00058be1) bg_dt_sta_control_pane_g1

0x8cad,	// (0x0005586c) fep_china_uni_eep_pane

0x8cb5,	// (0x00055874) fep_china_uni_entry_pane_ParamLimits

0x8cc5,	// (0x00055884) popup_fep_china_uni_window_g1_ParamLimits

0x8cd5,	// (0x00055894) popup_fep_china_uni_window_g2_ParamLimits

0x8cd5,	// (0x00055894) popup_fep_china_uni_window_g2

0x0001,

0xf6fd,	// (0x0005c2bc) popup_fep_china_uni_window_g_ParamLimits

0xf6fd,	// (0x0005c2bc) popup_fep_china_uni_window_g

0xeb07,	// (0x0005b6c6) fep_china_uni_eep_pane_g1

0xeb0f,	// (0x0005b6ce) fep_china_uni_eep_pane_t1

0xe50f,	// (0x0005b0ce) aid_touch_area_size_smil_player

0x9699,	// (0x00056258) lc0_clock_pane

0x9880,	// (0x0005643f) status_pane_g5_ParamLimits

0x9880,	// (0x0005643f) status_pane_g5

0x57fe,	// (0x000523bd) popup_keymap_window

0x983e,	// (0x000563fd) status_icon_pane

0xe714,	// (0x0005b2d3) cell_ai5_widget_pane_g3_ParamLimits

0xe72e,	// (0x0005b2ed) cell_ai5_widget_pane_g4_ParamLimits

0xe73e,	// (0x0005b2fd) cell_ai5_widget_pane_g5_ParamLimits

0xe766,	// (0x0005b325) cell_ai5_widget_pane_g8_ParamLimits

0xe766,	// (0x0005b325) cell_ai5_widget_pane_g8

0xe77a,	// (0x0005b339) cell_ai5_widget_pane_g9_ParamLimits

0xe77a,	// (0x0005b339) cell_ai5_widget_pane_g9

0xe78e,	// (0x0005b34d) cell_ai5_widget_pane_g10_ParamLimits

0xe78e,	// (0x0005b34d) cell_ai5_widget_pane_g10

0xeb1e,	// (0x0005b6dd) status_icon_pane_g1

0x18ce,	// (0x0004e48d) bg_popup_sub_pane_cp13

0xeb26,	// (0x0005b6e5) popup_keymap_window_t1

0x9478,	// (0x00056037) control_pane_g6_ParamLimits

0x9478,	// (0x00056037) control_pane_g6

0x9485,	// (0x00056044) control_pane_g7_ParamLimits

0x9485,	// (0x00056044) control_pane_g7

0x9492,	// (0x00056051) control_pane_g8_ParamLimits

0x9492,	// (0x00056051) control_pane_g8

0xea41,	// (0x0005b600) dt_sta_controll_pane_ParamLimits

0xea4e,	// (0x0005b60d) dt_sta_indi_pane_ParamLimits

0xea5f,	// (0x0005b61e) dt_sta_title_pane_ParamLimits

0x800e,	// (0x00054bcd) aid_size_touch_scroll_bar_cale

0x47c2,	// (0x00051381) popup_discreet_window_ParamLimits

0x47c2,	// (0x00051381) popup_discreet_window

0x484a,	// (0x00051409) popup_sk_window

0xa080,	// (0x00056c3f) bg_popup_sub_pane_cp28_ParamLimits

0xa080,	// (0x00056c3f) bg_popup_sub_pane_cp28

0xeb34,	// (0x0005b6f3) popup_discreet_window_g1_ParamLimits

0xeb34,	// (0x0005b6f3) popup_discreet_window_g1

0xeb54,	// (0x0005b713) popup_discreet_window_t1_ParamLimits

0xeb54,	// (0x0005b713) popup_discreet_window_t1

0xeb72,	// (0x0005b731) popup_discreet_window_t2_ParamLimits

0xeb72,	// (0x0005b731) popup_discreet_window_t2

0x0002,

0xfe89,	// (0x0005ca48) popup_discreet_window_t_ParamLimits

0xfe89,	// (0x0005ca48) popup_discreet_window_t

0x72dd,	// (0x00053e9c) popup_sk_window_g1

0x72e7,	// (0x00053ea6) popup_sk_window_g2

0x0001,

0xfe90,	// (0x0005ca4f) popup_sk_window_g

0x72ef,	// (0x00053eae) popup_sk_window_t1

0x72fd,	// (0x00053ebc) popup_sk_window_t1_copy1

0xe700,	// (0x0005b2bf) cell_ai5_widget_pane_g2_ParamLimits

0xe89b,	// (0x0005b45a) cell_ai5_widget_pane_t9_ParamLimits

0xe89b,	// (0x0005b45a) cell_ai5_widget_pane_t9

0x18ce,	// (0x0004e48d) main_fep_fshwr2_pane

0x730b,	// (0x00053eca) aid_fshwr2_btn_pane

0x731b,	// (0x00053eda) aid_fshwr2_syb_pane

0x732f,	// (0x00053eee) aid_fshwr2_txt_pane

0x733f,	// (0x00053efe) fshwr2_func_candi_pane

0x7363,	// (0x00053f22) fshwr2_hwr_syb_pane

0x737d,	// (0x00053f3c) fshwr2_icf_pane

0x46e9,	// (0x000512a8) fshwr2_icf_bg_pane

0x73ab,	// (0x00053f6a) fshwr2_icf_pane_t1_ParamLimits

0x73ab,	// (0x00053f6a) fshwr2_icf_pane_t1

0x8b82,	// (0x00055741) fshwr2_func_candi_pane_g1

0xebc4,	// (0x0005b783) fshwr2_func_candi_row_pane_ParamLimits

0xebc4,	// (0x0005b783) fshwr2_func_candi_row_pane

0x73c3,	// (0x00053f82) cell_fshwr2_syb_pane_ParamLimits

0x73c3,	// (0x00053f82) cell_fshwr2_syb_pane

0x73e6,	// (0x00053fa5) fshwr2_hwr_syb_pane_g1_ParamLimits

0x73e6,	// (0x00053fa5) fshwr2_hwr_syb_pane_g1

0x46e9,	// (0x000512a8) bg_popup_call_pane_cp01

0x73f4,	// (0x00053fb3) fshwr2_func_candi_cell_pane_ParamLimits

0x73f4,	// (0x00053fb3) fshwr2_func_candi_cell_pane

0xa6f4,	// (0x000572b3) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa6f4,	// (0x000572b3) fshwr2_func_candi_cell_bg_pane

0x743f,	// (0x00053ffe) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x743f,	// (0x00053ffe) fshwr2_func_candi_cell_pane_g1

0x746a,	// (0x00054029) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x746a,	// (0x00054029) fshwr2_func_candi_cell_pane_t1

0x46e9,	// (0x000512a8) bg_button_pane_cp08

0x94c7,	// (0x00056086) cell_fshwr2_syb_bg_pane

0x747d,	// (0x0005403c) cell_fshwr2_syb_bg_pane_g1

0x7491,	// (0x00054050) cell_fshwr2_syb_bg_pane_t1

0x84f9,	// (0x000550b8) main_tmo_pane

0xab8f,	// (0x0005774e) uni_indicator_pane_g1_ParamLimits

0xaba5,	// (0x00057764) uni_indicator_pane_g2_ParamLimits

0xabbb,	// (0x0005777a) uni_indicator_pane_g3_ParamLimits

0xabce,	// (0x0005778d) uni_indicator_pane_g4_ParamLimits

0xabce,	// (0x0005778d) uni_indicator_pane_g4

0xabe2,	// (0x000577a1) uni_indicator_pane_g5_ParamLimits

0xabe2,	// (0x000577a1) uni_indicator_pane_g5

0xabe2,	// (0x000577a1) uni_indicator_pane_g6_ParamLimits

0xabe2,	// (0x000577a1) uni_indicator_pane_g6

0xf8fc,	// (0x0005c4bb) uni_indicator_pane_g_ParamLimits

0xd523,	// (0x0005a0e2) popup_tmo_note_window_ParamLimits

0xd523,	// (0x0005a0e2) popup_tmo_note_window

0x6b3a,	// (0x000536f9) fshwr2_bg_pane

0x745b,	// (0x0005401a) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x745b,	// (0x0005401a) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe95,	// (0x0005ca54) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe95,	// (0x0005ca54) fshwr2_func_candi_cell_pane_g

0x673f,	// (0x000532fe) bg_popup_window_pane_cp01

0x74a7,	// (0x00054066) bg_popup_window_pane_g1_cp01

0xebeb,	// (0x0005b7aa) bg_popup_window_pane_cp22_ParamLimits

0xebeb,	// (0x0005b7aa) bg_popup_window_pane_cp22

0xebf9,	// (0x0005b7b8) listscroll_tmo_link_pane_ParamLimits

0xebf9,	// (0x0005b7b8) listscroll_tmo_link_pane

0xec39,	// (0x0005b7f8) popup_tmo_note_window_g1_ParamLimits

0xec39,	// (0x0005b7f8) popup_tmo_note_window_g1

0xec46,	// (0x0005b805) tmo_note_info_pane_ParamLimits

0xec46,	// (0x0005b805) tmo_note_info_pane

0xec60,	// (0x0005b81f) list_tmo_note_info_pane_g1_ParamLimits

0xec60,	// (0x0005b81f) list_tmo_note_info_pane_g1

0xec77,	// (0x0005b836) list_tmo_note_info_pane_g2_ParamLimits

0xec77,	// (0x0005b836) list_tmo_note_info_pane_g2

0x0001,

0xfe9a,	// (0x0005ca59) list_tmo_note_info_pane_g_ParamLimits

0xfe9a,	// (0x0005ca59) list_tmo_note_info_pane_g

0xec93,	// (0x0005b852) list_tmo_note_info_text_pane_ParamLimits

0xec93,	// (0x0005b852) list_tmo_note_info_text_pane

0xed14,	// (0x0005b8d3) list_tmo_link_pane

0xed21,	// (0x0005b8e0) scroll_pane_cp20

0xed2e,	// (0x0005b8ed) list_single_tmo_link_pane_ParamLimits

0xed2e,	// (0x0005b8ed) list_single_tmo_link_pane

0xed3e,	// (0x0005b8fd) list_single_tmo_link_pane_t1

0xed4c,	// (0x0005b90b) list_tmo_note_info_text_pane_t1_ParamLimits

0xed4c,	// (0x0005b90b) list_tmo_note_info_text_pane_t1

0x85a9,	// (0x00055168) aid_size_touch_scroll_bar_cp01_ParamLimits

0x85a9,	// (0x00055168) aid_size_touch_scroll_bar_cp01

0x4ec1,	// (0x00051a80) aid_size_touch_slider_marker

0x4832,	// (0x000513f1) popup_settings_window_ParamLimits

0x4832,	// (0x000513f1) popup_settings_window

0x5681,	// (0x00052240) popup_candi_list_indi_window

0x9543,	// (0x00056102) aid_touch_navi_pane_ParamLimits

0x6a95,	// (0x00053654) rs_clock_indi_pane

0x6a9e,	// (0x0005365d) sctrl_sk_bottom_pane_ParamLimits

0x6aaf,	// (0x0005366e) sctrl_sk_top_pane_ParamLimits

0x6baa,	// (0x00053769) popup_fep_tooltip_window

0xe676,	// (0x0005b235) aid_size_cell_widget_grid_ParamLimits

0xe6eb,	// (0x0005b2aa) cell_ai5_widget_pane_g1_ParamLimits

0xe6eb,	// (0x0005b2aa) cell_ai5_widget_pane_g1

0xe74e,	// (0x0005b30d) cell_ai5_widget_pane_g6_ParamLimits

0xe75a,	// (0x0005b319) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe0e,	// (0x0005c9cd) cell_ai5_widget_pane_g_ParamLimits

0xfe0e,	// (0x0005c9cd) cell_ai5_widget_pane_g

0xe8ca,	// (0x0005b489) cell_ai5_widget_pane_t10_ParamLimits

0xe8ca,	// (0x0005b489) cell_ai5_widget_pane_t10

0xe90d,	// (0x0005b4cc) grid_ai5_widget_pane_ParamLimits

0xe9a5,	// (0x0005b564) cell_contacts_ai5_widget_pane_ParamLimits

0xe9a5,	// (0x0005b564) cell_contacts_ai5_widget_pane

0xeb87,	// (0x0005b746) popup_discreet_window_t3_ParamLimits

0xeb87,	// (0x0005b746) popup_discreet_window_t3

0x7395,	// (0x00053f54) popup_fshwr2_char_preview_window_ParamLimits

0x7395,	// (0x00053f54) popup_fshwr2_char_preview_window

0xecb1,	// (0x0005b870) tmo_note_info_pane_t1

0xecc6,	// (0x0005b885) tmo_note_info_pane_t2

0xecdb,	// (0x0005b89a) tmo_note_info_pane_t3

0xecf0,	// (0x0005b8af) tmo_note_info_pane_t4

0xed02,	// (0x0005b8c1) tmo_note_info_pane_t5

0x0004,

0xfe9f,	// (0x0005ca5e) tmo_note_info_pane_t

0xed14,	// (0x0005b8d3) list_tmo_link_pane_ParamLimits

0xed21,	// (0x0005b8e0) scroll_pane_cp20_ParamLimits

0x46e9,	// (0x000512a8) bg_popup_fep_char_preview_window_cp01

0xed65,	// (0x0005b924) popup_fshwr2_char_preview_window_t1

0xed73,	// (0x0005b932) popup_candi_list_indi_window_g1

0xed7c,	// (0x0005b93b) bg_cell_contacts_ai5_widget_pane

0xed88,	// (0x0005b947) cell_contacts_ai5_widget_pane_g1

0xc6c0,	// (0x0005927f) cell_contacts_ai5_widget_pane_g2

0xed9d,	// (0x0005b95c) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeaa,	// (0x0005ca69) cell_contacts_ai5_widget_pane_g

0xeda9,	// (0x0005b968) cell_contacts_ai5_widget_pane_t1

0x84f9,	// (0x000550b8) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee20,	// (0x0005b9df) settings_container_pane

0x91a3,	// (0x00055d62) listscroll_set_pane_copy1

0xb700,	// (0x000582bf) scroll_pane_cp121_copy1

0x9e1d,	// (0x000569dc) set_content_pane_copy1

0xee2c,	// (0x0005b9eb) aid_height_set_list_copy1_ParamLimits

0xee2c,	// (0x0005b9eb) aid_height_set_list_copy1

0xadda,	// (0x00057999) aid_size_parent_copy1_ParamLimits

0xadda,	// (0x00057999) aid_size_parent_copy1

0xee38,	// (0x0005b9f7) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee38,	// (0x0005b9f7) button_value_adjust_pane_cp6_copy1

0x94c7,	// (0x00056086) list_highlight_pane_cp2_copy1_ParamLimits

0x94c7,	// (0x00056086) list_highlight_pane_cp2_copy1

0xee4c,	// (0x0005ba0b) list_set_pane_copy1_ParamLimits

0xee4c,	// (0x0005ba0b) list_set_pane_copy1

0xedbb,	// (0x0005b97a) main_pane_set_t1_copy1_ParamLimits

0xedbb,	// (0x0005b97a) main_pane_set_t1_copy1

0xedf5,	// (0x0005b9b4) main_pane_set_t2_copy1_ParamLimits

0xedf5,	// (0x0005b9b4) main_pane_set_t2_copy1

0xeef9,	// (0x0005bab8) main_pane_set_t3_copy1

0xef07,	// (0x0005bac6) main_pane_set_t4_copy1

0xee14,	// (0x0005b9d3) set_content_pane_g1_copy1_ParamLimits

0xee14,	// (0x0005b9d3) set_content_pane_g1_copy1

0xef15,	// (0x0005bad4) setting_code_pane_copy1

0xef1d,	// (0x0005badc) setting_slider_graphic_pane_copy1

0xef1d,	// (0x0005badc) setting_slider_pane_copy1

0xef25,	// (0x0005bae4) setting_text_pane_copy1

0xef25,	// (0x0005bae4) setting_volume_pane_copy1

0xef15,	// (0x0005bad4) settings_code_pane_cp2_copy1

0xef2d,	// (0x0005baec) settings_code_pane_cp_copy1_ParamLimits

0xef2d,	// (0x0005baec) settings_code_pane_cp_copy1

0x74b0,	// (0x0005406f) volume_set_pane_copy1

0xef41,	// (0x0005bb00) volume_set_pane_g10_copy1

0xef49,	// (0x0005bb08) volume_set_pane_g1_copy1

0xef51,	// (0x0005bb10) volume_set_pane_g2_copy1

0xef59,	// (0x0005bb18) volume_set_pane_g3_copy1

0xef61,	// (0x0005bb20) volume_set_pane_g4_copy1

0xef69,	// (0x0005bb28) volume_set_pane_g5_copy1

0xef71,	// (0x0005bb30) volume_set_pane_g6_copy1

0xef79,	// (0x0005bb38) volume_set_pane_g7_copy1

0xef81,	// (0x0005bb40) volume_set_pane_g8_copy1

0xef89,	// (0x0005bb48) volume_set_pane_g9_copy1

0x7849,	// (0x00054408) bg_set_opt_pane_cp_copy1_ParamLimits

0x7849,	// (0x00054408) bg_set_opt_pane_cp_copy1

0x74b8,	// (0x00054077) setting_slider_pane_t1_copy1_ParamLimits

0x74b8,	// (0x00054077) setting_slider_pane_t1_copy1

0x74d7,	// (0x00054096) setting_slider_pane_t2_copy1_ParamLimits

0x74d7,	// (0x00054096) setting_slider_pane_t2_copy1

0x74f1,	// (0x000540b0) setting_slider_pane_t3_copy1_ParamLimits

0x74f1,	// (0x000540b0) setting_slider_pane_t3_copy1

0x7509,	// (0x000540c8) slider_set_pane_copy1_ParamLimits

0x7509,	// (0x000540c8) slider_set_pane_copy1

0x8545,	// (0x00055104) set_opt_bg_pane_g1_copy2

0x854d,	// (0x0005510c) set_opt_bg_pane_g2_copy2

0xef91,	// (0x0005bb50) set_opt_bg_pane_g3_copy2

0x855d,	// (0x0005511c) set_opt_bg_pane_g4_copy2

0x8565,	// (0x00055124) set_opt_bg_pane_g5_copy2

0x856d,	// (0x0005512c) set_opt_bg_pane_g6_copy2

0xef9b,	// (0x0005bb5a) set_opt_bg_pane_g7_copy2

0xefa3,	// (0x0005bb62) set_opt_bg_pane_g8_copy2

0xefad,	// (0x0005bb6c) set_opt_bg_pane_g9_copy2

0x751f,	// (0x000540de) aid_size_touch_slider_mark_copy1_ParamLimits

0x751f,	// (0x000540de) aid_size_touch_slider_mark_copy1

0xefb7,	// (0x0005bb76) slider_set_pane_g1_copy1

0x7533,	// (0x000540f2) slider_set_pane_g2_copy1

0x6027,	// (0x00052be6) slider_set_pane_g3_copy1_ParamLimits

0x6027,	// (0x00052be6) slider_set_pane_g3_copy1

0x603b,	// (0x00052bfa) slider_set_pane_g4_copy1_ParamLimits

0x603b,	// (0x00052bfa) slider_set_pane_g4_copy1

0x6053,	// (0x00052c12) slider_set_pane_g5_copy1_ParamLimits

0x6053,	// (0x00052c12) slider_set_pane_g5_copy1

0x6027,	// (0x00052be6) slider_set_pane_g6_copy1_ParamLimits

0x6027,	// (0x00052be6) slider_set_pane_g6_copy1

0x753b,	// (0x000540fa) slider_set_pane_g7_copy1_ParamLimits

0x753b,	// (0x000540fa) slider_set_pane_g7_copy1

0x7769,	// (0x00054328) bg_set_opt_pane_cp2_copy1

0xefc0,	// (0x0005bb7f) setting_slider_graphic_pane_g1_copy1

0xefc9,	// (0x0005bb88) setting_slider_graphic_pane_t1_copy1

0xefd9,	// (0x0005bb98) setting_slider_graphic_pane_t2_copy1

0xefe9,	// (0x0005bba8) slider_set_pane_cp_copy1

0xeff9,	// (0x0005bbb8) input_focus_pane_cp1_copy1

0xf002,	// (0x0005bbc1) list_set_text_pane_copy1

0xf00a,	// (0x0005bbc9) setting_text_pane_g1_copy1

0x846e,	// (0x0005502d) set_text_pane_t1_copy1

0xeff9,	// (0x0005bbb8) input_focus_pane_cp2_copy1

0xf00a,	// (0x0005bbc9) setting_code_pane_g1_copy1

0xf013,	// (0x0005bbd2) setting_code_pane_t1_copy1

0xb528,	// (0x000580e7) list_set_graphic_pane_copy1

0x7769,	// (0x00054328) bg_set_opt_pane_cp4_copy1

0x8eac,	// (0x00055a6b) list_set_graphic_pane_g1_copy1_ParamLimits

0x8eac,	// (0x00055a6b) list_set_graphic_pane_g1_copy1

0xf021,	// (0x0005bbe0) list_set_graphic_pane_g2_copy1

0x8ec4,	// (0x00055a83) list_set_graphic_pane_t1_copy1_ParamLimits

0x8ec4,	// (0x00055a83) list_set_graphic_pane_t1_copy1

0xc022,	// (0x00058be1) rs_clock_indi_pane_g1

0xf029,	// (0x0005bbe8) rs_clock_indi_pane_t1

0xf037,	// (0x0005bbf6) rs_indi_pane

0xf03f,	// (0x0005bbfe) rs_indi_pane_g1

0xf048,	// (0x0005bc07) rs_indi_pane_g2

0xf051,	// (0x0005bc10) rs_indi_pane_g3

0x0002,

0xfeb1,	// (0x0005ca70) rs_indi_pane_g

0x91a3,	// (0x00055d62) bg_popup_preview_window_pane_cp03

0xf05a,	// (0x0005bc19) popup_fep_tooltip_window_t1

0xccc2,	// (0x00059881) popup_note2_window_g2_ParamLimits

0xccc2,	// (0x00059881) popup_note2_window_g2

0x0001,

0xfc3e,	// (0x0005c7fd) popup_note2_window_g_ParamLimits

0xfc3e,	// (0x0005c7fd) popup_note2_window_g

0xd1bd,	// (0x00059d7c) bg_popup_sub_pane_cp11_ParamLimits

0xd1ca,	// (0x00059d89) cell_ai3_links_pane_g1_ParamLimits

0xd1e1,	// (0x00059da0) cell_ai3_links_pane_t1

0x846e,	// (0x0005502d) set_text_pane_t1_copy1_ParamLimits

0x90b7,	// (0x00055c76) cell_graphic_popup_pane_cp2_ParamLimits

0x90b7,	// (0x00055c76) cell_graphic_popup_pane_cp2

0xf068,	// (0x0005bc27) cell_graphic_popup_pane_g1_cp2

0x7e21,	// (0x000549e0) cell_graphic_popup_pane_g2_cp2

0xf070,	// (0x0005bc2f) cell_graphic_popup_pane_g3_cp2

0xf078,	// (0x0005bc37) cell_graphic_popup_pane_t2_cp2

0x7e32,	// (0x000549f1) grid_highlight_pane_cp3_cp2

0x889d,	// (0x0005545c) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x84f9,	// (0x000550b8) main_tmo_pane_ParamLimits

0xd517,	// (0x0005a0d6) popup_tmo_big_image_note_window

0xe6da,	// (0x0005b299) cell_ai5_widget_list_pane

0xe6e2,	// (0x0005b2a1) cell_ai5_widget_lrg_icon_pane

0xecb1,	// (0x0005b870) tmo_note_info_pane_t1_ParamLimits

0xecc6,	// (0x0005b885) tmo_note_info_pane_t2_ParamLimits

0xecdb,	// (0x0005b89a) tmo_note_info_pane_t3_ParamLimits

0xecf0,	// (0x0005b8af) tmo_note_info_pane_t4_ParamLimits

0xed02,	// (0x0005b8c1) tmo_note_info_pane_t5_ParamLimits

0xfe9f,	// (0x0005ca5e) tmo_note_info_pane_t_ParamLimits

0xee20,	// (0x0005b9df) settings_container_pane_ParamLimits

0xeff1,	// (0x0005bbb0) indicator_popup_pane_cp5

0xeff1,	// (0x0005bbb0) indicator_popup_pane_cp6

0xb528,	// (0x000580e7) list_set_graphic_pane_copy1_ParamLimits

0x18ce,	// (0x0004e48d) bg_popup_window_pane_cp23

0xf086,	// (0x0005bc45) popup_tmo_big_image_note_window_g1

0xf090,	// (0x0005bc4f) popup_tmo_big_image_note_window_t1

0xf0a0,	// (0x0005bc5f) popup_tmo_big_image_note_window_t2

0xf0b0,	// (0x0005bc6f) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb8,	// (0x0005ca77) popup_tmo_big_image_note_window_t

0xc022,	// (0x00058be1) cell_ai5_widget_lrg_icon_pane_g1

0xf0c0,	// (0x0005bc7f) cell_ai5_widget_lrg_icon_pane_t1

0xf0ce,	// (0x0005bc8d) cell_ai5_widget_list_row_pane_ParamLimits

0xf0ce,	// (0x0005bc8d) cell_ai5_widget_list_row_pane

0xf0e5,	// (0x0005bca4) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf0e5,	// (0x0005bca4) cell_ai5_widget_list_row_pane_g1

0xf0f2,	// (0x0005bcb1) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf0f2,	// (0x0005bcb1) cell_ai5_widget_list_row_pane_t1

0xf123,	// (0x0005bce2) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf123,	// (0x0005bce2) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfebf,	// (0x0005ca7e) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfebf,	// (0x0005ca7e) cell_ai5_widget_list_row_pane_t

0x46e9,	// (0x000512a8) main_fep_vtchi_ss_pane

0xf173,	// (0x0005bd32) popup_fep_char_pre_window

0xf17b,	// (0x0005bd3a) popup_fep_ituss_window

0xf1a7,	// (0x0005bd66) popup_fep_vkbss_window

0x94c7,	// (0x00056086) grid_vkbss_keypad_pane_ParamLimits

0x94c7,	// (0x00056086) grid_vkbss_keypad_pane

0xf1e7,	// (0x0005bda6) ituss_keypad_pane

0x755b,	// (0x0005411a) aid_vkbss_key_offset_ParamLimits

0x755b,	// (0x0005411a) aid_vkbss_key_offset

0x7567,	// (0x00054126) cell_vkbss_key_pane_ParamLimits

0x7567,	// (0x00054126) cell_vkbss_key_pane

0xf1f3,	// (0x0005bdb2) bg_cell_vkbss_key_g1_ParamLimits

0xf1f3,	// (0x0005bdb2) bg_cell_vkbss_key_g1

0xf1ff,	// (0x0005bdbe) cell_vkbss_key_3p_pane_ParamLimits

0xf1ff,	// (0x0005bdbe) cell_vkbss_key_3p_pane

0xf235,	// (0x0005bdf4) cell_vkbss_key_g1_ParamLimits

0xf235,	// (0x0005bdf4) cell_vkbss_key_g1

0xf26b,	// (0x0005be2a) cell_vkbss_key_t1_ParamLimits

0xf26b,	// (0x0005be2a) cell_vkbss_key_t1

0x75c5,	// (0x00054184) cell_ituss_key_pane_ParamLimits

0x75c5,	// (0x00054184) cell_ituss_key_pane

0xf2c7,	// (0x0005be86) bg_cell_ituss_key_g1_ParamLimits

0xf2c7,	// (0x0005be86) bg_cell_ituss_key_g1

0xf2d3,	// (0x0005be92) cell_ituss_key_pane_g1_ParamLimits

0xf2d3,	// (0x0005be92) cell_ituss_key_pane_g1

0x75d6,	// (0x00054195) cell_ituss_key_pane_g2_ParamLimits

0x75d6,	// (0x00054195) cell_ituss_key_pane_g2

0x0005,

0xfec6,	// (0x0005ca85) cell_ituss_key_pane_g_ParamLimits

0xfec6,	// (0x0005ca85) cell_ituss_key_pane_g

0x765a,	// (0x00054219) cell_ituss_key_t1_ParamLimits

0x765a,	// (0x00054219) cell_ituss_key_t1

0x7694,	// (0x00054253) cell_ituss_key_t2_ParamLimits

0x7694,	// (0x00054253) cell_ituss_key_t2

0x76c6,	// (0x00054285) cell_ituss_key_t3_ParamLimits

0x76c6,	// (0x00054285) cell_ituss_key_t3

0x76f7,	// (0x000542b6) cell_ituss_key_t4_ParamLimits

0x76f7,	// (0x000542b6) cell_ituss_key_t4

0x0004,

0xfed3,	// (0x0005ca92) cell_ituss_key_t_ParamLimits

0xfed3,	// (0x0005ca92) cell_ituss_key_t

0xf2f9,	// (0x0005beb8) cell_vkbss_key_3p_pane_g1

0xf301,	// (0x0005bec0) cell_vkbss_key_3p_pane_g2

0xf309,	// (0x0005bec8) cell_vkbss_key_3p_pane_g3

0x0002,

0xfede,	// (0x0005ca9d) cell_vkbss_key_3p_pane_g

0x91a3,	// (0x00055d62) bg_popup_fep_char_preview_window_cp02

0xf311,	// (0x0005bed0) popup_fep_char_pre_window_t1

0xe663,	// (0x0005b222) main_ai5_sk_pane

0xed7c,	// (0x0005b93b) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed88,	// (0x0005b947) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc6c0,	// (0x0005927f) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed9d,	// (0x0005b95c) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeaa,	// (0x0005ca69) cell_contacts_ai5_widget_pane_g_ParamLimits

0xeda9,	// (0x0005b968) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x84f9,	// (0x000550b8) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf31f,	// (0x0005bede) main_ai5_sk_pane_g1

0x9eb9,	// (0x00056a78) popup_query_code_window_g1

0xf191,	// (0x0005bd50) popup_fep_vkb_icf_pane

0xf1be,	// (0x0005bd7d) popup_fep_vtchi_icf_pane

0xf328,	// (0x0005bee7) bg_icf_pane

0xf328,	// (0x0005bee7) list_vkb_icf_pane

0xf334,	// (0x0005bef3) bg_icf_pane_cp01

0xf347,	// (0x0005bf06) vtchi_icf_list_pane

0xf3a7,	// (0x0005bf66) list_vkb_icf_pane_t1_ParamLimits

0xf3a7,	// (0x0005bf66) list_vkb_icf_pane_t1

0xf3c5,	// (0x0005bf84) vtchi_icf_list_pane_t1_ParamLimits

0xf3c5,	// (0x0005bf84) vtchi_icf_list_pane_t1

0xf17b,	// (0x0005bd3a) popup_fep_ituss_window_ParamLimits

0xf1be,	// (0x0005bd7d) popup_fep_vtchi_icf_pane_ParamLimits

0xf1e7,	// (0x0005bda6) ituss_keypad_pane_ParamLimits

0x7551,	// (0x00054110) ituss_sks_pane

0xf328,	// (0x0005bee7) bg_icf_pane_ParamLimits

0xf14b,	// (0x0005bd0a) icf_edit_indi_pane_ParamLimits

0xf14b,	// (0x0005bd0a) icf_edit_indi_pane

0xf328,	// (0x0005bee7) list_vkb_icf_pane_ParamLimits

0xf334,	// (0x0005bef3) bg_icf_pane_cp01_ParamLimits

0xf166,	// (0x0005bd25) icf_edit_indi_pane_cp01_ParamLimits

0xf166,	// (0x0005bd25) icf_edit_indi_pane_cp01

0xf347,	// (0x0005bf06) vtchi_query_pane

0xe4df,	// (0x0005b09e) icf_edit_indi_pane_g1_ParamLimits

0xe4df,	// (0x0005b09e) icf_edit_indi_pane_g1

0xf43a,	// (0x0005bff9) icf_edit_indi_pane_g2_ParamLimits

0xf43a,	// (0x0005bff9) icf_edit_indi_pane_g2

0x0001,

0xff09,	// (0x0005cac8) icf_edit_indi_pane_g_ParamLimits

0xff09,	// (0x0005cac8) icf_edit_indi_pane_g

0xf44e,	// (0x0005c00d) icf_edit_indi_pane_t1

0xf3e3,	// (0x0005bfa2) bg_input_focus_pane_cp042

0x8005,	// (0x00054bc4) vtchi_button_pane

0xf3ec,	// (0x0005bfab) vtchi_query_pane_t1

0xf3fa,	// (0x0005bfb9) vtchi_query_pane_t2

0xf408,	// (0x0005bfc7) vtchi_query_pane_t3

0x0002,

0xfef8,	// (0x0005cab7) vtchi_query_pane_t

0x46e9,	// (0x000512a8) bg_button_pane_cp13

0xf416,	// (0x0005bfd5) vtchi_button_pane_g1

0x773a,	// (0x000542f9) ituss_sks_pane_g1

0x7745,	// (0x00054304) ituss_sks_pane_g2

0x0001,

0xfeff,	// (0x0005cabe) ituss_sks_pane_g

0xf41e,	// (0x0005bfdd) ituss_sks_pane_t1

0xf42c,	// (0x0005bfeb) ituss_sks_pane_t2

0x0001,

0xff04,	// (0x0005cac3) ituss_sks_pane_t

0xbaa4,	// (0x00058663) indicator_nsta_pane_cp_g1

0xbaad,	// (0x0005866c) indicator_nsta_pane_cp_g2

0xbab5,	// (0x00058674) indicator_nsta_pane_cp_g3

0xbabd,	// (0x0005867c) indicator_nsta_pane_cp_g4

0xbaad,	// (0x0005866c) indicator_nsta_pane_cp_g5

0xbab5,	// (0x00058674) indicator_nsta_pane_cp_g6

0x0005,

0xfa7c,	// (0x0005c63b) indicator_nsta_pane_cp_g

0xe23b,	// (0x0005adfa) cell_graphic2_pane_t2_ParamLimits

0xe23b,	// (0x0005adfa) cell_graphic2_pane_t2

0x0001,

0xfd95,	// (0x0005c954) cell_graphic2_pane_t_ParamLimits

0xfd95,	// (0x0005c954) cell_graphic2_pane_t

0xe267,	// (0x0005ae26) cell_graphic2_control_pane_t1

0x8c5c,	// (0x0005581b) signal_pane_g3_ParamLimits

0x8c5c,	// (0x0005581b) signal_pane_g3

0x8c6e,	// (0x0005582d) signal_pane_g4_ParamLimits

0x8c6e,	// (0x0005582d) signal_pane_g4

0xf135,	// (0x0005bcf4) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf135,	// (0x0005bcf4) cell_ai5_widget_list_row_pane_t3

0xf2e7,	// (0x0005bea6) cell_ituss_key_pane_t1_ParamLimits

0xf2e7,	// (0x0005bea6) cell_ituss_key_pane_t1

0x9af6,	// (0x000566b5) form_field_data_wide_pane_vc_t2_ParamLimits

0x9af6,	// (0x000566b5) form_field_data_wide_pane_vc_t2

0x9b0a,	// (0x000566c9) form_field_data_wide_pane_vc_t3_ParamLimits

0x9b0a,	// (0x000566c9) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e4,	// (0x0005c3a3) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e4,	// (0x0005c3a3) form_field_data_wide_pane_vc_t

0xb742,	// (0x00058301) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb742,	// (0x00058301) form_field_slider_wide_pane_vc_t3

0xb820,	// (0x000583df) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb820,	// (0x000583df) form_field_popup_wide_pane_vc_t2

0xb837,	// (0x000583f6) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb837,	// (0x000583f6) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa6b,	// (0x0005c62a) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa6b,	// (0x0005c62a) form_field_popup_wide_pane_vc_t

0x730b,	// (0x00053eca) aid_fshwr2_btn_pane_ParamLimits

0x731b,	// (0x00053eda) aid_fshwr2_syb_pane_ParamLimits

0x732f,	// (0x00053eee) aid_fshwr2_txt_pane_ParamLimits

0x6b3a,	// (0x000536f9) fshwr2_bg_pane_ParamLimits

0x733f,	// (0x00053efe) fshwr2_func_candi_pane_ParamLimits

0x7363,	// (0x00053f22) fshwr2_hwr_syb_pane_ParamLimits

0x737d,	// (0x00053f3c) fshwr2_icf_pane_ParamLimits

0x8239,	// (0x00054df8) list_double_graphic_pane_vc_g4_ParamLimits

0x8239,	// (0x00054df8) list_double_graphic_pane_vc_g4

0x75f6,	// (0x000541b5) cell_ituss_key_pane_g3_ParamLimits

0x75f6,	// (0x000541b5) cell_ituss_key_pane_g3

0x7728,	// (0x000542e7) cell_ituss_key_t5_ParamLimits

0x7728,	// (0x000542e7) cell_ituss_key_t5

0xf1a7,	// (0x0005bd66) popup_fep_vkbss_window_ParamLimits

0xe66d,	// (0x0005b22c) aid_cell_ai5_quarter

0xf44e,	// (0x0005c00d) icf_edit_indi_pane_t1_ParamLimits

0x7b7a,	// (0x00054739) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x7b7a,	// (0x00054739) aid_tch_indicator_popup_pane_cp2

0x7b8d,	// (0x0005474c) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x7b8d,	// (0x0005474c) aid_tch_query_popup_data_pane_cp2

0x9e61,	// (0x00056a20) aid_tch_query_popup_pane_ParamLimits

0x9e61,	// (0x00056a20) aid_tch_query_popup_pane

0x9e61,	// (0x00056a20) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9e61,	// (0x00056a20) aid_tch_query_popup_data_pane_cp1

0x94c7,	// (0x00056086) cell_fshwr2_syb_bg_pane_ParamLimits

0x747d,	// (0x0005403c) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x7491,	// (0x00054050) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf191,	// (0x0005bd50) popup_fep_vkb_icf_pane_ParamLimits

0x714b,	// (0x00053d0a) bg_popup_fep_char_preview_window_g10

0xe7a2,	// (0x0005b361) cell_ai5_widget_pane_g11_ParamLimits

0xe7a2,	// (0x0005b361) cell_ai5_widget_pane_g11

0xe7ae,	// (0x0005b36d) cell_ai5_widget_pane_g12_ParamLimits

0xe7ae,	// (0x0005b36d) cell_ai5_widget_pane_g12

0xe7ba,	// (0x0005b379) cell_ai5_widget_pane_g13_ParamLimits

0xe7ba,	// (0x0005b379) cell_ai5_widget_pane_g13

0xe8e9,	// (0x0005b4a8) cell_ai5_widget_pane_t11_ParamLimits

0xe8e9,	// (0x0005b4a8) cell_ai5_widget_pane_t11

0xe8fb,	// (0x0005b4ba) cell_ai5_widget_pane_t12_ParamLimits

0xe8fb,	// (0x0005b4ba) cell_ai5_widget_pane_t12

0x7602,	// (0x000541c1) cell_ituss_key_pane_g4_ParamLimits

0x7602,	// (0x000541c1) cell_ituss_key_pane_g4

0x761e,	// (0x000541dd) cell_ituss_key_pane_g5_ParamLimits

0x761e,	// (0x000541dd) cell_ituss_key_pane_g5

0x763a,	// (0x000541f9) cell_ituss_key_pane_g6_ParamLimits

0x763a,	// (0x000541f9) cell_ituss_key_pane_g6

0x99f1,	// (0x000565b0) bg_icf_pane_g1

0xf34f,	// (0x0005bf0e) bg_icf_pane_g2

0xf35b,	// (0x0005bf1a) bg_icf_pane_g3

0xf365,	// (0x0005bf24) bg_icf_pane_g4

0xf371,	// (0x0005bf30) bg_icf_pane_g5

0xf37b,	// (0x0005bf3a) bg_icf_pane_g6

0xf387,	// (0x0005bf46) bg_icf_pane_g7

0xf391,	// (0x0005bf50) bg_icf_pane_g8

0xf39d,	// (0x0005bf5c) bg_icf_pane_g9

0x0008,

0xfee5,	// (0x0005caa4) bg_icf_pane_g

0xf1d4,	// (0x0005bd93) popup_hyb_candi_window_ParamLimits

0xf1d4,	// (0x0005bd93) popup_hyb_candi_window

0x9a65,	// (0x00056624) bg_popup_sub_pane_cp01_ParamLimits

0x9a65,	// (0x00056624) bg_popup_sub_pane_cp01

0xf467,	// (0x0005c026) entry_hyb_candi_pane_ParamLimits

0xf467,	// (0x0005c026) entry_hyb_candi_pane

0xf476,	// (0x0005c035) grid_hyb_candi_pane_ParamLimits

0xf476,	// (0x0005c035) grid_hyb_candi_pane

0xf48b,	// (0x0005c04a) grid_hyb_phrase_pane_ParamLimits

0xf48b,	// (0x0005c04a) grid_hyb_phrase_pane

0xf49a,	// (0x0005c059) cell_hyb_candi_pane_ParamLimits

0xf49a,	// (0x0005c059) cell_hyb_candi_pane

0xf4bd,	// (0x0005c07c) cell_hyb_candi_scroll_pane

0x8b82,	// (0x00055741) cell_hyb_candi_pane_g1

0xf4c6,	// (0x0005c085) cell_hyb_candi_pane_t1

0xf4d4,	// (0x0005c093) cell_hyb_phrase_pane

0x8b82,	// (0x00055741) cell_hyb_phrase_pane_g1

0xf4dd,	// (0x0005c09c) cell_hyb_phrase_pane_t1

0xf4eb,	// (0x0005c0aa) entry_hyb_candi_pane_t1

0x91a3,	// (0x00055d62) input_focus_pane_cp06

0xf4f9,	// (0x0005c0b8) cell_hyb_candi_scroll_pane_g1

0xf501,	// (0x0005c0c0) cell_hyb_candi_scroll_pane_g1_aid

0xf509,	// (0x0005c0c8) cell_hyb_candi_scroll_pane_g2

0xf511,	// (0x0005c0d0) cell_hyb_candi_scroll_pane_g2_aid

0xf519,	// (0x0005c0d8) cell_hyb_candi_scroll_pane_g3

0xf521,	// (0x0005c0e0) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Large

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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0003c962 };

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
0x7b58,	// (0x000444ba) Screen

0x7b64,	// (0x000444c6) application_window_ParamLimits

0x7b64,	// (0x000444c6) application_window

0x25fe,	// (0x0003ef60) screen_g1

0x5418,	// (0x00041d7a) area_bottom_pane_ParamLimits

0x5418,	// (0x00041d7a) area_bottom_pane

0x54d8,	// (0x00041e3a) area_top_pane_ParamLimits

0x54d8,	// (0x00041e3a) area_top_pane

0x556c,	// (0x00041ece) main_pane_ParamLimits

0x556c,	// (0x00041ece) main_pane

0x7b74,	// (0x000444d6) misc_graphics

0x9577,	// (0x00045ed9) battery_pane_ParamLimits

0x9577,	// (0x00045ed9) battery_pane

0xa259,	// (0x00046bbb) bg_status_flat_pane_g8

0xa261,	// (0x00046bc3) bg_status_flat_pane_g9

0x963f,	// (0x00045fa1) context_pane_ParamLimits

0x963f,	// (0x00045fa1) context_pane

0x9755,	// (0x000460b7) navi_pane_ParamLimits

0x9755,	// (0x000460b7) navi_pane

0x97d9,	// (0x0004613b) signal_pane_ParamLimits

0x97d9,	// (0x0004613b) signal_pane

0x0008,

0xf854,	// (0x0004c1b6) bg_status_flat_pane_g

0x9846,	// (0x000461a8) status_pane_g1_ParamLimits

0x9846,	// (0x000461a8) status_pane_g1

0x985a,	// (0x000461bc) status_pane_g2_ParamLimits

0x985a,	// (0x000461bc) status_pane_g2

0x9866,	// (0x000461c8) status_pane_g3_ParamLimits

0x9866,	// (0x000461c8) status_pane_g3

0x0004,

0xf780,	// (0x0004c0e2) status_pane_g_ParamLimits

0xf780,	// (0x0004c0e2) status_pane_g

0x989a,	// (0x000461fc) title_pane_ParamLimits

0x989a,	// (0x000461fc) title_pane

0x98d7,	// (0x00046239) uni_indicator_pane_ParamLimits

0x98d7,	// (0x00046239) uni_indicator_pane

0x94a7,	// (0x00045e09) bg_list_pane_ParamLimits

0x94a7,	// (0x00045e09) bg_list_pane

0x5ef6,	// (0x00042858) find_pane

0x94c7,	// (0x00045e29) listscroll_app_pane_ParamLimits

0x94c7,	// (0x00045e29) listscroll_app_pane

0x94d3,	// (0x00045e35) listscroll_form_pane

0x5efe,	// (0x00042860) listscroll_gen_pane_ParamLimits

0x5efe,	// (0x00042860) listscroll_gen_pane

0x5f12,	// (0x00042874) listscroll_set_pane

0x86d5,	// (0x00045037) main_idle_act_pane

0x91a3,	// (0x00045b05) main_idle_trad_pane

0x91a3,	// (0x00045b05) main_list_empty_pane

0x94c7,	// (0x00045e29) main_midp_pane

0x94ed,	// (0x00045e4f) main_pane_g1_ParamLimits

0x94ed,	// (0x00045e4f) main_pane_g1

0x5f1a,	// (0x0004287c) popup_ai_message_window_ParamLimits

0x5f1a,	// (0x0004287c) popup_ai_message_window

0x5fc0,	// (0x00042922) popup_fep_china_uni_window_ParamLimits

0x5fc0,	// (0x00042922) popup_fep_china_uni_window

0x601c,	// (0x0004297e) popup_fep_japan_candidate_window_ParamLimits

0x601c,	// (0x0004297e) popup_fep_japan_candidate_window

0x603c,	// (0x0004299e) popup_fep_japan_predictive_window_ParamLimits

0x603c,	// (0x0004299e) popup_fep_japan_predictive_window

0x606c,	// (0x000429ce) popup_find_window

0x6079,	// (0x000429db) popup_grid_graphic_window_ParamLimits

0x6079,	// (0x000429db) popup_grid_graphic_window

0x60a5,	// (0x00042a07) popup_large_graphic_colour_window

0x60cb,	// (0x00042a2d) popup_menu_window_ParamLimits

0x60cb,	// (0x00042a2d) popup_menu_window

0x6283,	// (0x00042be5) popup_note_image_window

0x626f,	// (0x00042bd1) popup_note_wait_window_ParamLimits

0x626f,	// (0x00042bd1) popup_note_wait_window

0x626f,	// (0x00042bd1) popup_note_window_ParamLimits

0x626f,	// (0x00042bd1) popup_note_window

0x62d9,	// (0x00042c3b) popup_query_code_window_ParamLimits

0x62d9,	// (0x00042c3b) popup_query_code_window

0x62ed,	// (0x00042c4f) popup_query_data_code_window_ParamLimits

0x62ed,	// (0x00042c4f) popup_query_data_code_window

0x630a,	// (0x00042c6c) popup_query_data_window_ParamLimits

0x630a,	// (0x00042c6c) popup_query_data_window

0x6326,	// (0x00042c88) popup_query_sat_info_window_ParamLimits

0x6326,	// (0x00042c88) popup_query_sat_info_window

0x635f,	// (0x00042cc1) popup_snote_single_graphic_window_ParamLimits

0x635f,	// (0x00042cc1) popup_snote_single_graphic_window

0x635f,	// (0x00042cc1) popup_snote_single_text_window_ParamLimits

0x635f,	// (0x00042cc1) popup_snote_single_text_window

0x6374,	// (0x00042cd6) popup_sub_window_general

0x64a4,	// (0x00042e06) popup_window_general_ParamLimits

0x64a4,	// (0x00042e06) popup_window_general

0x94fb,	// (0x00045e5d) power_save_pane

0x5d84,	// (0x000426e6) control_pane_g1_ParamLimits

0x5d84,	// (0x000426e6) control_pane_g1

0x5dab,	// (0x0004270d) control_pane_g2_ParamLimits

0x5dab,	// (0x0004270d) control_pane_g2

0x946a,	// (0x00045dcc) control_pane_g3_ParamLimits

0x946a,	// (0x00045dcc) control_pane_g3

0x0007,

0xf768,	// (0x0004c0ca) control_pane_g_ParamLimits

0xf768,	// (0x0004c0ca) control_pane_g

0x5df5,	// (0x00042757) control_pane_t1_ParamLimits

0x5df5,	// (0x00042757) control_pane_t1

0x5e4b,	// (0x000427ad) control_pane_t2_ParamLimits

0x5e4b,	// (0x000427ad) control_pane_t2

0x0002,

0xf779,	// (0x0004c0db) control_pane_t_ParamLimits

0xf779,	// (0x0004c0db) control_pane_t

0x938f,	// (0x00045cf1) navi_navi_volume_pane_cp1

0x9397,	// (0x00045cf9) status_small_icon_pane

0x939f,	// (0x00045d01) status_small_pane_g1_ParamLimits

0x939f,	// (0x00045d01) status_small_pane_g1

0x93d3,	// (0x00045d35) status_small_pane_g2_ParamLimits

0x93d3,	// (0x00045d35) status_small_pane_g2

0x93df,	// (0x00045d41) status_small_pane_g3_ParamLimits

0x93df,	// (0x00045d41) status_small_pane_g3

0x93eb,	// (0x00045d4d) status_small_pane_g4_ParamLimits

0x93eb,	// (0x00045d4d) status_small_pane_g4

0x93f7,	// (0x00045d59) status_small_pane_g5_ParamLimits

0x93f7,	// (0x00045d59) status_small_pane_g5

0x9405,	// (0x00045d67) status_small_pane_g6_ParamLimits

0x9405,	// (0x00045d67) status_small_pane_g6

0x0007,

0xf757,	// (0x0004c0b9) status_small_pane_g_ParamLimits

0xf757,	// (0x0004c0b9) status_small_pane_g

0x9434,	// (0x00045d96) status_small_pane_t1

0x9456,	// (0x00045db8) status_small_wait_pane_ParamLimits

0x9456,	// (0x00045db8) status_small_wait_pane

0x8c14,	// (0x00045576) aid_levels_signal_ParamLimits

0x8c14,	// (0x00045576) aid_levels_signal

0x8c26,	// (0x00045588) signal_pane_g1_ParamLimits

0x8c26,	// (0x00045588) signal_pane_g1

0x8c3b,	// (0x0004559d) signal_pane_g2_ParamLimits

0x8c3b,	// (0x0004559d) signal_pane_g2

0x0003,

0xf6e8,	// (0x0004c04a) signal_pane_g_ParamLimits

0xf6e8,	// (0x0004c04a) signal_pane_g

0x8c76,	// (0x000455d8) context_pane_g1

0x7b7e,	// (0x000444e0) title_pane_g1

0x7bb4,	// (0x00044516) title_pane_t1

0x7c1c,	// (0x0004457e) title_pane_t2

0x7c42,	// (0x000445a4) title_pane_t3

0x0002,

0xf532,	// (0x0004be94) title_pane_t

0x98ef,	// (0x00046251) aid_levels_battery_ParamLimits

0x98ef,	// (0x00046251) aid_levels_battery

0x9903,	// (0x00046265) battery_pane_g1_ParamLimits

0x9903,	// (0x00046265) battery_pane_g1

0x9919,	// (0x0004627b) battery_pane_g2_ParamLimits

0x9919,	// (0x0004627b) battery_pane_g2

0x0001,

0xf78b,	// (0x0004c0ed) battery_pane_g_ParamLimits

0xf78b,	// (0x0004c0ed) battery_pane_g

0xab8f,	// (0x000474f1) uni_indicator_pane_g1

0xaba5,	// (0x00047507) uni_indicator_pane_g2

0xabbb,	// (0x0004751d) uni_indicator_pane_g3

0x0005,

0xf8fc,	// (0x0004c25e) uni_indicator_pane_g

0x9018,	// (0x0004597a) navi_icon_pane_ParamLimits

0x9018,	// (0x0004597a) navi_icon_pane

0x8f61,	// (0x000458c3) navi_midp_pane

0x9034,	// (0x00045996) navi_navi_pane

0x903e,	// (0x000459a0) navi_text_pane_ParamLimits

0x903e,	// (0x000459a0) navi_text_pane

0x25fe,	// (0x0003ef60) status_small_wait_pane_g1

0x8097,	// (0x000449f9) status_small_wait_pane_g2

0x0001,

0xf8f7,	// (0x0004c259) status_small_wait_pane_g

0xa8b4,	// (0x00047216) navi_navi_icon_text_pane

0xa8bc,	// (0x0004721e) navi_navi_pane_g1_ParamLimits

0xa8bc,	// (0x0004721e) navi_navi_pane_g1

0xa8ce,	// (0x00047230) navi_navi_pane_g2_ParamLimits

0xa8ce,	// (0x00047230) navi_navi_pane_g2

0x0001,

0xf8c5,	// (0x0004c227) navi_navi_pane_g_ParamLimits

0xf8c5,	// (0x0004c227) navi_navi_pane_g

0xa8e0,	// (0x00047242) navi_navi_tabs_pane

0xa8e9,	// (0x0004724b) navi_navi_text_pane

0xa8b4,	// (0x00047216) navi_navi_volume_pane

0xa890,	// (0x000471f2) navi_text_pane_t1

0xa884,	// (0x000471e6) navi_icon_pane_g1

0xa7d7,	// (0x00047139) navi_navi_text_pane_t1

0x675c,	// (0x000430be) navi_navi_volume_pane_g1

0x6764,	// (0x000430c6) volume_small_pane

0xa73d,	// (0x0004709f) navi_navi_icon_text_pane_g1

0xa745,	// (0x000470a7) navi_navi_icon_text_pane_t1

0x9034,	// (0x00045996) navi_tabs_2_long_pane

0x9034,	// (0x00045996) navi_tabs_2_pane

0x9034,	// (0x00045996) navi_tabs_3_long_pane

0x9034,	// (0x00045996) navi_tabs_3_pane

0x9034,	// (0x00045996) navi_tabs_4_pane

0x673c,	// (0x0004309e) tabs_2_active_pane_ParamLimits

0x673c,	// (0x0004309e) tabs_2_active_pane

0x674c,	// (0x000430ae) tabs_2_passive_pane_ParamLimits

0x674c,	// (0x000430ae) tabs_2_passive_pane

0x670a,	// (0x0004306c) tabs_3_active_pane_ParamLimits

0x670a,	// (0x0004306c) tabs_3_active_pane

0x671a,	// (0x0004307c) tabs_3_passive_pane_ParamLimits

0x671a,	// (0x0004307c) tabs_3_passive_pane

0x672b,	// (0x0004308d) tabs_3_passive_pane_cp_ParamLimits

0x672b,	// (0x0004308d) tabs_3_passive_pane_cp

0x66c6,	// (0x00043028) tabs_4_active_pane_ParamLimits

0x66c6,	// (0x00043028) tabs_4_active_pane

0x66d7,	// (0x00043039) tabs_4_passive_pane_ParamLimits

0x66d7,	// (0x00043039) tabs_4_passive_pane

0x66e8,	// (0x0004304a) tabs_4_passive_pane_cp_ParamLimits

0x66e8,	// (0x0004304a) tabs_4_passive_pane_cp

0x66f9,	// (0x0004305b) tabs_4_passive_pane_cp2_ParamLimits

0x66f9,	// (0x0004305b) tabs_4_passive_pane_cp2

0x66a2,	// (0x00043004) tabs_2_long_active_pane_ParamLimits

0x66a2,	// (0x00043004) tabs_2_long_active_pane

0x66b4,	// (0x00043016) tabs_2_long_passive_pane_ParamLimits

0x66b4,	// (0x00043016) tabs_2_long_passive_pane

0x6663,	// (0x00042fc5) tabs_3_long_active_pane_ParamLimits

0x6663,	// (0x00042fc5) tabs_3_long_active_pane

0x6676,	// (0x00042fd8) tabs_3_long_passive_pane_ParamLimits

0x6676,	// (0x00042fd8) tabs_3_long_passive_pane

0x668f,	// (0x00042ff1) tabs_3_long_passive_pane_cp_ParamLimits

0x668f,	// (0x00042ff1) tabs_3_long_passive_pane_cp

0x6609,	// (0x00042f6b) volume_small_pane_g1

0x6612,	// (0x00042f74) volume_small_pane_g2

0x661b,	// (0x00042f7d) volume_small_pane_g3

0x6624,	// (0x00042f86) volume_small_pane_g4

0x662d,	// (0x00042f8f) volume_small_pane_g5

0x6636,	// (0x00042f98) volume_small_pane_g6

0x663f,	// (0x00042fa1) volume_small_pane_g7

0x6648,	// (0x00042faa) volume_small_pane_g8

0x6651,	// (0x00042fb3) volume_small_pane_g9

0x665a,	// (0x00042fbc) volume_small_pane_g10

0x0009,

0xf891,	// (0x0004c1f3) volume_small_pane_g

0x7c54,	// (0x000445b6) bg_active_tab_pane_cp2_ParamLimits

0x7c54,	// (0x000445b6) bg_active_tab_pane_cp2

0x7c62,	// (0x000445c4) tabs_3_active_pane_g1

0x7c6a,	// (0x000445cc) tabs_3_active_pane_t1

0x7c54,	// (0x000445b6) bg_passive_tab_pane_cp2_ParamLimits

0x7c54,	// (0x000445b6) bg_passive_tab_pane_cp2

0x7c62,	// (0x000445c4) tabs_3_passive_pane_g1

0x7c6a,	// (0x000445cc) tabs_3_passive_pane_t1

0x7c54,	// (0x000445b6) bg_active_tab_pane_cp3_ParamLimits

0x7c54,	// (0x000445b6) bg_active_tab_pane_cp3

0x7c7c,	// (0x000445de) tabs_4_active_pane_g1

0x7c84,	// (0x000445e6) tabs_4_active_pane_t1

0x7c54,	// (0x000445b6) bg_passive_tab_pane_cp3_ParamLimits

0x7c54,	// (0x000445b6) bg_passive_tab_pane_cp3

0x7c7c,	// (0x000445de) tabs_4_1_passive_pane_g1

0x7c84,	// (0x000445e6) tabs_4_1_passive_pane_t1

0x94c7,	// (0x00045e29) list_highlight_pane_cp2

0xae02,	// (0x00047764) list_set_pane_ParamLimits

0xae02,	// (0x00047764) list_set_pane

0xaea8,	// (0x0004780a) main_pane_set_t1_ParamLimits

0xaea8,	// (0x0004780a) main_pane_set_t1

0xaec8,	// (0x0004782a) main_pane_set_t2_ParamLimits

0xaec8,	// (0x0004782a) main_pane_set_t2

0xaedc,	// (0x0004783e) main_pane_set_t3_ParamLimits

0xaedc,	// (0x0004783e) main_pane_set_t3

0xaeee,	// (0x00047850) main_pane_set_t4_ParamLimits

0xaeee,	// (0x00047850) main_pane_set_t4

0x0003,

0xf961,	// (0x0004c2c3) main_pane_set_t_ParamLimits

0xf961,	// (0x0004c2c3) main_pane_set_t

0xaf00,	// (0x00047862) setting_code_pane

0xaf0c,	// (0x0004786e) setting_slider_graphic_pane

0xaf0c,	// (0x0004786e) setting_slider_pane

0xaf0c,	// (0x0004786e) setting_text_pane

0xaf0c,	// (0x0004786e) setting_volume_pane

0x57bb,	// (0x0004211d) volume_set_pane

0x7c54,	// (0x000445b6) bg_set_opt_pane_cp

0x57c3,	// (0x00042125) setting_slider_pane_t1

0x57dc,	// (0x0004213e) setting_slider_pane_t2

0x57f6,	// (0x00042158) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0004be9b) setting_slider_pane_t

0x580e,	// (0x00042170) slider_set_pane

0x7b74,	// (0x000444d6) bg_set_opt_pane_cp2

0x7c96,	// (0x000445f8) setting_slider_graphic_pane_g1

0x5824,	// (0x00042186) setting_slider_graphic_pane_t1

0x5834,	// (0x00042196) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0004bea2) setting_slider_graphic_pane_t

0x5844,	// (0x000421a6) slider_set_pane_cp

0x7b74,	// (0x000444d6) input_focus_pane_cp1

0xadc1,	// (0x00047723) list_set_text_pane

0x25fe,	// (0x0003ef60) setting_text_pane_g1

0x7b74,	// (0x000444d6) input_focus_pane_cp2

0x25fe,	// (0x0003ef60) setting_code_pane_g1

0x7c9f,	// (0x00044601) setting_code_pane_t1

0x4509,	// (0x00040e6b) set_text_pane_t1_ParamLimits

0x4509,	// (0x00040e6b) set_text_pane_t1

0x8539,	// (0x00044e9b) set_opt_bg_pane_g1

0x8541,	// (0x00044ea3) set_opt_bg_pane_g2

0xad9b,	// (0x000476fd) set_opt_bg_pane_g3

0x8551,	// (0x00044eb3) set_opt_bg_pane_g4

0x8559,	// (0x00044ebb) set_opt_bg_pane_g5

0x8561,	// (0x00044ec3) set_opt_bg_pane_g6

0xada5,	// (0x00047707) set_opt_bg_pane_g7

0xadad,	// (0x0004770f) set_opt_bg_pane_g8

0xadb7,	// (0x00047719) set_opt_bg_pane_g9

0x0008,

0xf94e,	// (0x0004c2b0) set_opt_bg_pane_g

0xad8e,	// (0x000476f0) slider_set_pane_g1

0x67d1,	// (0x00043133) slider_set_pane_g2

0x0006,

0xf93f,	// (0x0004c2a1) slider_set_pane_g

0x676d,	// (0x000430cf) volume_set_pane_g1

0x6775,	// (0x000430d7) volume_set_pane_g2

0x677d,	// (0x000430df) volume_set_pane_g3

0x6785,	// (0x000430e7) volume_set_pane_g4

0x678d,	// (0x000430ef) volume_set_pane_g5

0x6795,	// (0x000430f7) volume_set_pane_g6

0x679d,	// (0x000430ff) volume_set_pane_g7

0x67a5,	// (0x00043107) volume_set_pane_g8

0x67ad,	// (0x0004310f) volume_set_pane_g9

0x67b5,	// (0x00043117) volume_set_pane_g10

0x0009,

0xf917,	// (0x0004c279) volume_set_pane_g

0x7cad,	// (0x0004460f) indicator_pane_ParamLimits

0x7cad,	// (0x0004460f) indicator_pane

0x7cb9,	// (0x0004461b) main_idle_pane_g2_ParamLimits

0x7cb9,	// (0x0004461b) main_idle_pane_g2

0x7ce1,	// (0x00044643) main_pane_idle_g1_ParamLimits

0x7ce1,	// (0x00044643) main_pane_idle_g1

0x7cee,	// (0x00044650) popup_clock_digital_analogue_window_ParamLimits

0x7cee,	// (0x00044650) popup_clock_digital_analogue_window

0x7d05,	// (0x00044667) soft_indicator_pane_ParamLimits

0x7d05,	// (0x00044667) soft_indicator_pane

0x7d11,	// (0x00044673) wallpaper_pane_ParamLimits

0x7d11,	// (0x00044673) wallpaper_pane

0x25fe,	// (0x0003ef60) wallpaper_pane_g1

0x7d25,	// (0x00044687) indicator_pane_g1_ParamLimits

0x7d25,	// (0x00044687) indicator_pane_g1

0xb1c6,	// (0x00047b28) navi_navi_icon_text_pane_srt_g1

0x7d40,	// (0x000446a2) soft_indicator_pane_t1

0x7d5a,	// (0x000446bc) aid_ps_area_pane

0x7d6b,	// (0x000446cd) aid_ps_clock_pane

0x7d79,	// (0x000446db) aid_ps_indicator_pane

0x7d85,	// (0x000446e7) indicator_ps_pane_ParamLimits

0x7d85,	// (0x000446e7) indicator_ps_pane

0x7d94,	// (0x000446f6) power_save_pane_g1_ParamLimits

0x7d94,	// (0x000446f6) power_save_pane_g1

0x7da0,	// (0x00044702) power_save_pane_g2_ParamLimits

0x7da0,	// (0x00044702) power_save_pane_g2

0x53cc,	// (0x00041d2e) aid_navinavi_width_pane

0x7d5a,	// (0x000446bc) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0004bea7) power_save_pane_g_ParamLimits

0xf545,	// (0x0004bea7) power_save_pane_g

0x7dae,	// (0x00044710) power_save_pane_t1_ParamLimits

0x7dae,	// (0x00044710) power_save_pane_t1

0x7d6b,	// (0x000446cd) aid_ps_clock_pane_ParamLimits

0x7d79,	// (0x000446db) aid_ps_indicator_pane_ParamLimits

0x7dc0,	// (0x00044722) power_save_pane_t4_ParamLimits

0x7dc0,	// (0x00044722) power_save_pane_t4

0x0001,

0xf54a,	// (0x0004beac) power_save_pane_t_ParamLimits

0xf54a,	// (0x0004beac) power_save_pane_t

0x7dea,	// (0x0004474c) power_save_t3_ParamLimits

0x7dea,	// (0x0004474c) power_save_t3

0x7dd5,	// (0x00044737) power_save_t2_ParamLimits

0x7dd5,	// (0x00044737) power_save_t2

0x7dff,	// (0x00044761) indicator_ps_pane_g1

0x7e08,	// (0x0004476a) ai_gene_pane_ParamLimits

0x7e08,	// (0x0004476a) ai_gene_pane

0x7e14,	// (0x00044776) ai_links_pane_ParamLimits

0x7e14,	// (0x00044776) ai_links_pane

0x7e20,	// (0x00044782) indicator_pane_cp1_ParamLimits

0x7e20,	// (0x00044782) indicator_pane_cp1

0x7e2c,	// (0x0004478e) main_pane_idle_g1_cp_ParamLimits

0x7e2c,	// (0x0004478e) main_pane_idle_g1_cp

0x7e38,	// (0x0004479a) popup_ai_links_title_window

0x7e41,	// (0x000447a3) soft_indicator_pane_cp1_ParamLimits

0x7e41,	// (0x000447a3) soft_indicator_pane_cp1

0xab7d,	// (0x000474df) ai_links_pane_g1

0xab86,	// (0x000474e8) grid_ai_links_pane

0xab60,	// (0x000474c2) ai_gene_pane_1

0xab6b,	// (0x000474cd) ai_gene_pane_2

0xab74,	// (0x000474d6) list_highlight_pane_cp4

0xab44,	// (0x000474a6) cell_ai_link_pane_ParamLimits

0xab44,	// (0x000474a6) cell_ai_link_pane

0xab3c,	// (0x0004749e) cell_ai_link_pane_g1

0x8097,	// (0x000449f9) cell_ai_link_pane_g2

0x0001,

0xf8f2,	// (0x0004c254) cell_ai_link_pane_g

0x7b74,	// (0x000444d6) grid_highlight_cp2

0x7b74,	// (0x000444d6) bg_popup_sub_pane_cp1

0x7e5b,	// (0x000447bd) popup_ai_links_title_window_t1

0xaa8a,	// (0x000473ec) ai_gene_pane_1_g1_ParamLimits

0xaa8a,	// (0x000473ec) ai_gene_pane_1_g1

0xaa96,	// (0x000473f8) ai_gene_pane_1_g2_ParamLimits

0xaa96,	// (0x000473f8) ai_gene_pane_1_g2

0x0001,

0xf8e8,	// (0x0004c24a) ai_gene_pane_1_g_ParamLimits

0xf8e8,	// (0x0004c24a) ai_gene_pane_1_g

0xaaa3,	// (0x00047405) ai_gene_pane_1_t1_ParamLimits

0xaaa3,	// (0x00047405) ai_gene_pane_1_t1

0xaad7,	// (0x00047439) grid_ai_soft_ind_pane

0xaa75,	// (0x000473d7) ai_gene_pane_2_t1_ParamLimits

0xaa75,	// (0x000473d7) ai_gene_pane_2_t1

0x7e6a,	// (0x000447cc) main_pane_empty_t1_ParamLimits

0x7e6a,	// (0x000447cc) main_pane_empty_t1

0x7e82,	// (0x000447e4) main_pane_empty_t2_ParamLimits

0x7e82,	// (0x000447e4) main_pane_empty_t2

0x7e97,	// (0x000447f9) main_pane_empty_t3_ParamLimits

0x7e97,	// (0x000447f9) main_pane_empty_t3

0x7ea9,	// (0x0004480b) main_pane_empty_t4_ParamLimits

0x7ea9,	// (0x0004480b) main_pane_empty_t4

0x7ebb,	// (0x0004481d) main_pane_empty_t5_ParamLimits

0x7ebb,	// (0x0004481d) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0004beb1) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0004beb1) main_pane_empty_t

0x8600,	// (0x00044f62) bg_popup_window_pane_ParamLimits

0x8600,	// (0x00044f62) bg_popup_window_pane

0xa7e5,	// (0x00047147) find_popup_pane_cp2_ParamLimits

0xa7e5,	// (0x00047147) find_popup_pane_cp2

0xa7f1,	// (0x00047153) heading_pane_ParamLimits

0xa7f1,	// (0x00047153) heading_pane

0x7b74,	// (0x000444d6) bg_popup_sub_pane

0xa75f,	// (0x000470c1) bg_popup_window_pane_g1_ParamLimits

0xa75f,	// (0x000470c1) bg_popup_window_pane_g1

0xa76b,	// (0x000470cd) bg_popup_window_pane_g2_ParamLimits

0xa76b,	// (0x000470cd) bg_popup_window_pane_g2

0xa777,	// (0x000470d9) bg_popup_window_pane_g3_ParamLimits

0xa777,	// (0x000470d9) bg_popup_window_pane_g3

0xa783,	// (0x000470e5) bg_popup_window_pane_g4_ParamLimits

0xa783,	// (0x000470e5) bg_popup_window_pane_g4

0xa78f,	// (0x000470f1) bg_popup_window_pane_g5_ParamLimits

0xa78f,	// (0x000470f1) bg_popup_window_pane_g5

0xa79b,	// (0x000470fd) bg_popup_window_pane_g6_ParamLimits

0xa79b,	// (0x000470fd) bg_popup_window_pane_g6

0xa7a7,	// (0x00047109) bg_popup_window_pane_g7_ParamLimits

0xa7a7,	// (0x00047109) bg_popup_window_pane_g7

0xa7b3,	// (0x00047115) bg_popup_window_pane_g8_ParamLimits

0xa7b3,	// (0x00047115) bg_popup_window_pane_g8

0xa7bf,	// (0x00047121) bg_popup_window_pane_g9_ParamLimits

0xa7bf,	// (0x00047121) bg_popup_window_pane_g9

0xa7cb,	// (0x0004712d) bg_popup_window_pane_g10_ParamLimits

0xa7cb,	// (0x0004712d) bg_popup_window_pane_g10

0x0009,

0xf8b0,	// (0x0004c212) bg_popup_window_pane_g_ParamLimits

0xf8b0,	// (0x0004c212) bg_popup_window_pane_g

0xa6f4,	// (0x00047056) bg_popup_heading_pane_ParamLimits

0xa6f4,	// (0x00047056) bg_popup_heading_pane

0x68d0,	// (0x00043232) tabs_4_passive_pane_cp_srt_ParamLimits

0x68d0,	// (0x00043232) tabs_4_passive_pane_cp_srt

0x68e2,	// (0x00043244) tabs_4_passive_pane_srt_ParamLimits

0xa708,	// (0x0004706a) heading_pane_g2

0x68e2,	// (0x00043244) tabs_4_passive_pane_srt

0x94c7,	// (0x00045e29) bg_passive_tab_pane_cp3_srt_ParamLimits

0x94c7,	// (0x00045e29) bg_passive_tab_pane_cp3_srt

0xa710,	// (0x00047072) heading_pane_t1_ParamLimits

0xa710,	// (0x00047072) heading_pane_t1

0xa727,	// (0x00047089) heading_pane_t2_ParamLimits

0xa727,	// (0x00047089) heading_pane_t2

0x0001,

0xf8ab,	// (0x0004c20d) heading_pane_t_ParamLimits

0xf8ab,	// (0x0004c20d) heading_pane_t

0xa221,	// (0x00046b83) bg_popup_heading_pane_g1

0xa2d0,	// (0x00046c32) bg_popup_heading_pane_g2

0xa2da,	// (0x00046c3c) bg_popup_heading_pane_g3

0xa2e4,	// (0x00046c46) bg_popup_heading_pane_g4

0xa2ee,	// (0x00046c50) bg_popup_heading_pane_g5

0xa2f8,	// (0x00046c5a) bg_popup_heading_pane_g6

0xa300,	// (0x00046c62) bg_popup_heading_pane_g7

0xa308,	// (0x00046c6a) bg_popup_heading_pane_g8

0xa312,	// (0x00046c74) bg_popup_heading_pane_g9

0x0008,

0xf867,	// (0x0004c1c9) bg_popup_heading_pane_g

0x99f1,	// (0x00046353) bg_popup_sub_pane_g1

0x99f9,	// (0x0004635b) bg_popup_sub_pane_g2

0x9a01,	// (0x00046363) bg_popup_sub_pane_g3

0x9a09,	// (0x0004636b) bg_popup_sub_pane_g4

0x9a11,	// (0x00046373) bg_popup_sub_pane_g5

0x9a19,	// (0x0004637b) bg_popup_sub_pane_g6

0x9a21,	// (0x00046383) bg_popup_sub_pane_g7

0x9a29,	// (0x0004638b) bg_popup_sub_pane_g8

0x9a31,	// (0x00046393) bg_popup_sub_pane_g9

0x0008,

0xf841,	// (0x0004c1a3) bg_popup_sub_pane_g

0x7ecf,	// (0x00044831) bg_popup_window_pane_cp5_ParamLimits

0x7ecf,	// (0x00044831) bg_popup_window_pane_cp5

0x7eeb,	// (0x0004484d) popup_note_window_g1_ParamLimits

0x7eeb,	// (0x0004484d) popup_note_window_g1

0x7ef7,	// (0x00044859) popup_note_window_t1_ParamLimits

0x7ef7,	// (0x00044859) popup_note_window_t1

0x7f0d,	// (0x0004486f) popup_note_window_t2_ParamLimits

0x7f0d,	// (0x0004486f) popup_note_window_t2

0x7f23,	// (0x00044885) popup_note_window_t3_ParamLimits

0x7f23,	// (0x00044885) popup_note_window_t3

0x7f39,	// (0x0004489b) popup_note_window_t4_ParamLimits

0x7f39,	// (0x0004489b) popup_note_window_t4

0x7f61,	// (0x000448c3) popup_note_window_t5_ParamLimits

0x7f61,	// (0x000448c3) popup_note_window_t5

0x0004,

0xf55a,	// (0x0004bebc) popup_note_window_t_ParamLimits

0xf55a,	// (0x0004bebc) popup_note_window_t

0x7fab,	// (0x0004490d) bg_popup_window_pane_cp6_ParamLimits

0x7fab,	// (0x0004490d) bg_popup_window_pane_cp6

0xa19d,	// (0x00046aff) popup_note_image_window_g1_ParamLimits

0xa19d,	// (0x00046aff) popup_note_image_window_g1

0xa1a9,	// (0x00046b0b) popup_note_image_window_g2_ParamLimits

0xa1a9,	// (0x00046b0b) popup_note_image_window_g2

0x0001,

0xf835,	// (0x0004c197) popup_note_image_window_g_ParamLimits

0xf835,	// (0x0004c197) popup_note_image_window_g

0xa1c2,	// (0x00046b24) popup_note_image_window_t1_ParamLimits

0xa1c2,	// (0x00046b24) popup_note_image_window_t1

0xa1db,	// (0x00046b3d) popup_note_image_window_t2_ParamLimits

0xa1db,	// (0x00046b3d) popup_note_image_window_t2

0xa1f4,	// (0x00046b56) popup_note_image_window_t3_ParamLimits

0xa1f4,	// (0x00046b56) popup_note_image_window_t3

0x0002,

0xf83a,	// (0x0004c19c) popup_note_image_window_t_ParamLimits

0xf83a,	// (0x0004c19c) popup_note_image_window_t

0xa05e,	// (0x000469c0) bg_popup_window_pane_cp7_ParamLimits

0xa05e,	// (0x000469c0) bg_popup_window_pane_cp7

0xa08e,	// (0x000469f0) popup_note_wait_window_g1_ParamLimits

0xa08e,	// (0x000469f0) popup_note_wait_window_g1

0xa09a,	// (0x000469fc) popup_note_wait_window_g2_ParamLimits

0xa09a,	// (0x000469fc) popup_note_wait_window_g2

0x0002,

0xf823,	// (0x0004c185) popup_note_wait_window_g_ParamLimits

0xf823,	// (0x0004c185) popup_note_wait_window_g

0xa0b2,	// (0x00046a14) popup_note_wait_window_t1_ParamLimits

0xa0b2,	// (0x00046a14) popup_note_wait_window_t1

0xa0d9,	// (0x00046a3b) popup_note_wait_window_t2_ParamLimits

0xa0d9,	// (0x00046a3b) popup_note_wait_window_t2

0xa0f6,	// (0x00046a58) popup_note_wait_window_t3_ParamLimits

0xa0f6,	// (0x00046a58) popup_note_wait_window_t3

0xa109,	// (0x00046a6b) popup_note_wait_window_t4_ParamLimits

0xa109,	// (0x00046a6b) popup_note_wait_window_t4

0x0004,

0xf82a,	// (0x0004c18c) popup_note_wait_window_t_ParamLimits

0xf82a,	// (0x0004c18c) popup_note_wait_window_t

0xa12e,	// (0x00046a90) wait_bar_pane_ParamLimits

0xa12e,	// (0x00046a90) wait_bar_pane

0x7b74,	// (0x000444d6) wait_anim_pane

0x7b74,	// (0x000444d6) wait_border_pane

0x25fe,	// (0x0003ef60) wait_anim_pane_g1

0x25fe,	// (0x0003ef60) wait_anim_pane_g2

0x0001,

0xf6e3,	// (0x0004c045) wait_anim_pane_g

0xa002,	// (0x00046964) wait_border_pane_g1

0xa00d,	// (0x0004696f) wait_border_pane_g2

0xa016,	// (0x00046978) wait_border_pane_g3

0x0002,

0xf81c,	// (0x0004c17e) wait_border_pane_g

0x9e6d,	// (0x000467cf) bg_popup_window_pane_cp16_ParamLimits

0x9e6d,	// (0x000467cf) bg_popup_window_pane_cp16

0x9f6d,	// (0x000468cf) indicator_popup_pane_cp4_ParamLimits

0x9f6d,	// (0x000468cf) indicator_popup_pane_cp4

0x9f81,	// (0x000468e3) popup_query_data_window_t1_ParamLimits

0x9f81,	// (0x000468e3) popup_query_data_window_t1

0x9f93,	// (0x000468f5) popup_query_data_window_t2_ParamLimits

0x9f93,	// (0x000468f5) popup_query_data_window_t2

0x9fac,	// (0x0004690e) popup_query_data_window_t3_ParamLimits

0x9fac,	// (0x0004690e) popup_query_data_window_t3

0x0002,

0xf815,	// (0x0004c177) popup_query_data_window_t_ParamLimits

0xf815,	// (0x0004c177) popup_query_data_window_t

0x9fc6,	// (0x00046928) query_popup_data_pane_ParamLimits

0x9fc6,	// (0x00046928) query_popup_data_pane

0x9fda,	// (0x0004693c) query_popup_data_pane_cp1_ParamLimits

0x9fda,	// (0x0004693c) query_popup_data_pane_cp1

0x9e6d,	// (0x000467cf) bg_popup_window_pane_cp10_ParamLimits

0x9e6d,	// (0x000467cf) bg_popup_window_pane_cp10

0x9e9f,	// (0x00046801) indicator_popup_pane_ParamLimits

0x9e9f,	// (0x00046801) indicator_popup_pane

0x9ec1,	// (0x00046823) popup_query_code_window_t1_ParamLimits

0x9ec1,	// (0x00046823) popup_query_code_window_t1

0x9edb,	// (0x0004683d) popup_query_code_window_t2_ParamLimits

0x9edb,	// (0x0004683d) popup_query_code_window_t2

0x9f24,	// (0x00046886) popup_query_code_window_t3_ParamLimits

0x9f24,	// (0x00046886) popup_query_code_window_t3

0x0002,

0xf80e,	// (0x0004c170) popup_query_code_window_t_ParamLimits

0xf80e,	// (0x0004c170) popup_query_code_window_t

0x9f53,	// (0x000468b5) query_popup_pane_ParamLimits

0x9f53,	// (0x000468b5) query_popup_pane

0x7fab,	// (0x0004490d) bg_popup_window_pane_cp15_ParamLimits

0x7fab,	// (0x0004490d) bg_popup_window_pane_cp15

0x7fc9,	// (0x0004492b) indicator_popup_pane_cp1_ParamLimits

0x7fc9,	// (0x0004492b) indicator_popup_pane_cp1

0x7fdc,	// (0x0004493e) indicator_popup_pane_cp2_ParamLimits

0x7fdc,	// (0x0004493e) indicator_popup_pane_cp2

0x7fef,	// (0x00044951) popup_query_data_code_window_g1_ParamLimits

0x7fef,	// (0x00044951) popup_query_data_code_window_g1

0x8002,	// (0x00044964) popup_query_data_code_window_t1_ParamLimits

0x8002,	// (0x00044964) popup_query_data_code_window_t1

0x8014,	// (0x00044976) popup_query_data_code_window_t2_ParamLimits

0x8014,	// (0x00044976) popup_query_data_code_window_t2

0x8026,	// (0x00044988) popup_query_data_code_window_t3_ParamLimits

0x8026,	// (0x00044988) popup_query_data_code_window_t3

0x803c,	// (0x0004499e) popup_query_data_code_window_t4_ParamLimits

0x803c,	// (0x0004499e) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0004bec7) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0004bec7) popup_query_data_code_window_t

0x650e,	// (0x00042e70) list_single_midp_graphic_pane_g3

0x8054,	// (0x000449b6) query_popup_data_pane_cp2_ParamLimits

0x8067,	// (0x000449c9) query_popup_pane_cp2_ParamLimits

0x8067,	// (0x000449c9) query_popup_pane_cp2

0x7b74,	// (0x000444d6) bg_popup_window_pane_cp11

0x9e51,	// (0x000467b3) heading_pane_cp5

0x9e59,	// (0x000467bb) listscroll_popup_info_pane

0x7b74,	// (0x000444d6) input_focus_pane_cp3

0x807a,	// (0x000449dc) query_popup_pane_t1

0x8088,	// (0x000449ea) list_popup_info_pane_ParamLimits

0x8088,	// (0x000449ea) list_popup_info_pane

0x8097,	// (0x000449f9) listscroll_popup_info_pane_g1

0x809f,	// (0x00044a01) scroll_pane_cp7

0x80a9,	// (0x00044a0b) popup_info_list_pane_t1_ParamLimits

0x80a9,	// (0x00044a0b) popup_info_list_pane_t1

0x80c3,	// (0x00044a25) popup_info_list_pane_t2_ParamLimits

0x80c3,	// (0x00044a25) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0004bed0) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0004bed0) popup_info_list_pane_t

0x7b74,	// (0x000444d6) bg_popup_window_pane_cp12

0xb1e0,	// (0x00047b42) find_popup_pane

0x7c54,	// (0x000445b6) bg_popup_window_pane_cp3

0x80dd,	// (0x00044a3f) heading_pane_cp3

0x80ec,	// (0x00044a4e) listscroll_popup_graphic_pane

0x7b74,	// (0x000444d6) bg_popup_window_pane_cp4

0x814c,	// (0x00044aae) heading_pane_cp4

0x8156,	// (0x00044ab8) listscroll_popup_colour_pane

0x815e,	// (0x00044ac0) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x815e,	// (0x00044ac0) cell_large_graphic_colour_none_popup_pane

0x8172,	// (0x00044ad4) grid_large_graphic_colour_popup_pane_ParamLimits

0x8172,	// (0x00044ad4) grid_large_graphic_colour_popup_pane

0x8196,	// (0x00044af8) listscroll_popup_colour_pane_g1_ParamLimits

0x8196,	// (0x00044af8) listscroll_popup_colour_pane_g1

0x81ad,	// (0x00044b0f) listscroll_popup_colour_pane_g2_ParamLimits

0x81ad,	// (0x00044b0f) listscroll_popup_colour_pane_g2

0x81c4,	// (0x00044b26) listscroll_popup_colour_pane_g3_ParamLimits

0x81c4,	// (0x00044b26) listscroll_popup_colour_pane_g3

0x81d4,	// (0x00044b36) listscroll_popup_colour_pane_g4_ParamLimits

0x81d4,	// (0x00044b36) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0004bed5) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0004bed5) listscroll_popup_colour_pane_g

0x81e4,	// (0x00044b46) scroll_pane_cp6_ParamLimits

0x81e4,	// (0x00044b46) scroll_pane_cp6

0x81f6,	// (0x00044b58) cell_large_graphic_colour_popup_pane_ParamLimits

0x81f6,	// (0x00044b58) cell_large_graphic_colour_popup_pane

0x8215,	// (0x00044b77) cell_large_graphic_colour_none_popup_pane_t1

0x7b74,	// (0x000444d6) grid_highlight_pane_cp5

0x8224,	// (0x00044b86) cell_large_graphic_colour_popup_pane_g1

0x822c,	// (0x00044b8e) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0004bede) cell_large_graphic_colour_popup_pane_g

0x8234,	// (0x00044b96) cell_large_graphic_colour_popup_pane_g2_copy1

0x823d,	// (0x00044b9f) grid_highlight_pane_cp4

0x8245,	// (0x00044ba7) bg_popup_window_pane_cp8_ParamLimits

0x8245,	// (0x00044ba7) bg_popup_window_pane_cp8

0x8260,	// (0x00044bc2) popup_snote_single_text_window_g1_ParamLimits

0x8260,	// (0x00044bc2) popup_snote_single_text_window_g1

0x8272,	// (0x00044bd4) popup_snote_single_text_window_t1_ParamLimits

0x8272,	// (0x00044bd4) popup_snote_single_text_window_t1

0x8285,	// (0x00044be7) popup_snote_single_text_window_t2_ParamLimits

0x8285,	// (0x00044be7) popup_snote_single_text_window_t2

0x8298,	// (0x00044bfa) popup_snote_single_text_window_t3_ParamLimits

0x8298,	// (0x00044bfa) popup_snote_single_text_window_t3

0x82d1,	// (0x00044c33) popup_snote_single_text_window_t4_ParamLimits

0x82d1,	// (0x00044c33) popup_snote_single_text_window_t4

0x8305,	// (0x00044c67) popup_snote_single_text_window_t5_ParamLimits

0x8305,	// (0x00044c67) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0004bee3) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0004bee3) popup_snote_single_text_window_t

0x8334,	// (0x00044c96) bg_popup_window_pane_cp9_ParamLimits

0x8334,	// (0x00044c96) bg_popup_window_pane_cp9

0x8260,	// (0x00044bc2) popup_snote_single_graphic_window_g1_ParamLimits

0x8260,	// (0x00044bc2) popup_snote_single_graphic_window_g1

0x8342,	// (0x00044ca4) popup_snote_single_graphic_window_g2_ParamLimits

0x8342,	// (0x00044ca4) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0004beee) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0004beee) popup_snote_single_graphic_window_g

0x834e,	// (0x00044cb0) popup_snote_single_graphic_window_t1_ParamLimits

0x834e,	// (0x00044cb0) popup_snote_single_graphic_window_t1

0x8361,	// (0x00044cc3) popup_snote_single_graphic_window_t2_ParamLimits

0x8361,	// (0x00044cc3) popup_snote_single_graphic_window_t2

0x8374,	// (0x00044cd6) popup_snote_single_graphic_window_t3_ParamLimits

0x8374,	// (0x00044cd6) popup_snote_single_graphic_window_t3

0x83ad,	// (0x00044d0f) popup_snote_single_graphic_window_t4_ParamLimits

0x83ad,	// (0x00044d0f) popup_snote_single_graphic_window_t4

0x83e1,	// (0x00044d43) popup_snote_single_graphic_window_t5_ParamLimits

0x83e1,	// (0x00044d43) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0004bef3) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0004bef3) popup_snote_single_graphic_window_t

0xb122,	// (0x00047a84) grid_graphic_popup_pane_ParamLimits

0xb122,	// (0x00047a84) grid_graphic_popup_pane

0xb14c,	// (0x00047aae) listscroll_popup_graphic_pane_g1_ParamLimits

0xb14c,	// (0x00047aae) listscroll_popup_graphic_pane_g1

0xb160,	// (0x00047ac2) listscroll_popup_graphic_pane_g2_ParamLimits

0xb160,	// (0x00047ac2) listscroll_popup_graphic_pane_g2

0x0001,

0xf98b,	// (0x0004c2ed) listscroll_popup_graphic_pane_g_ParamLimits

0xf98b,	// (0x0004c2ed) listscroll_popup_graphic_pane_g

0xb174,	// (0x00047ad6) scroll_pane_cp5

0xb0b3,	// (0x00047a15) cell_graphic_popup_pane_ParamLimits

0xb0b3,	// (0x00047a15) cell_graphic_popup_pane

0xb094,	// (0x000479f6) cell_graphic_popup_pane_g1

0xb09c,	// (0x000479fe) cell_graphic_popup_pane_g2

0x8234,	// (0x00044b96) cell_graphic_popup_pane_g3

0x0002,

0xf984,	// (0x0004c2e6) cell_graphic_popup_pane_g

0xb0a5,	// (0x00047a07) cell_graphic_popup_pane_t2

0x823d,	// (0x00044b9f) grid_highlight_pane_cp3

0x8422,	// (0x00044d84) list_gen_pane_ParamLimits

0x8422,	// (0x00044d84) list_gen_pane

0x8454,	// (0x00044db6) scroll_pane

0xafe0,	// (0x00047942) bg_list_pane_g1_ParamLimits

0xafe0,	// (0x00047942) bg_list_pane_g1

0xaffd,	// (0x0004795f) bg_list_pane_g2_ParamLimits

0xaffd,	// (0x0004795f) bg_list_pane_g2

0xb01e,	// (0x00047980) bg_list_pane_g3_ParamLimits

0xb01e,	// (0x00047980) bg_list_pane_g3

0xb032,	// (0x00047994) bg_list_pane_g4_ParamLimits

0xb032,	// (0x00047994) bg_list_pane_g4

0xb046,	// (0x000479a8) bg_list_pane_g5_ParamLimits

0xb046,	// (0x000479a8) bg_list_pane_g5

0x0004,

0xf979,	// (0x0004c2db) bg_list_pane_g_ParamLimits

0xf979,	// (0x0004c2db) bg_list_pane_g

0x6835,	// (0x00043197) list_double2_graphic_large_graphic_pane_ParamLimits

0x6835,	// (0x00043197) list_double2_graphic_large_graphic_pane

0x6835,	// (0x00043197) list_double2_graphic_pane_ParamLimits

0x6835,	// (0x00043197) list_double2_graphic_pane

0x6835,	// (0x00043197) list_double2_large_graphic_pane_ParamLimits

0x6835,	// (0x00043197) list_double2_large_graphic_pane

0x6835,	// (0x00043197) list_double2_pane_ParamLimits

0x6835,	// (0x00043197) list_double2_pane

0x6835,	// (0x00043197) list_double_graphic_heading_pane_ParamLimits

0x6835,	// (0x00043197) list_double_graphic_heading_pane

0x6835,	// (0x00043197) list_double_graphic_pane_ParamLimits

0x6835,	// (0x00043197) list_double_graphic_pane

0x6835,	// (0x00043197) list_double_heading_pane_ParamLimits

0x6835,	// (0x00043197) list_double_heading_pane

0x6835,	// (0x00043197) list_double_large_graphic_pane_ParamLimits

0x6835,	// (0x00043197) list_double_large_graphic_pane

0x6835,	// (0x00043197) list_double_number_pane_ParamLimits

0x6835,	// (0x00043197) list_double_number_pane

0x6835,	// (0x00043197) list_double_pane_ParamLimits

0x6835,	// (0x00043197) list_double_pane

0x6835,	// (0x00043197) list_double_time_pane_ParamLimits

0x6835,	// (0x00043197) list_double_time_pane

0x6835,	// (0x00043197) list_setting_number_pane_ParamLimits

0x6835,	// (0x00043197) list_setting_number_pane

0x6835,	// (0x00043197) list_setting_pane_ParamLimits

0x6835,	// (0x00043197) list_setting_pane

0x686e,	// (0x000431d0) list_single_2graphic_pane_ParamLimits

0x686e,	// (0x000431d0) list_single_2graphic_pane

0x686e,	// (0x000431d0) list_single_graphic_heading_pane_ParamLimits

0x686e,	// (0x000431d0) list_single_graphic_heading_pane

0x686e,	// (0x000431d0) list_single_graphic_pane_ParamLimits

0x686e,	// (0x000431d0) list_single_graphic_pane

0x686e,	// (0x000431d0) list_single_heading_pane_ParamLimits

0x686e,	// (0x000431d0) list_single_heading_pane

0x4e39,	// (0x0004179b) list_single_large_graphic_pane_ParamLimits

0x4e39,	// (0x0004179b) list_single_large_graphic_pane

0x686e,	// (0x000431d0) list_single_number_heading_pane_ParamLimits

0x686e,	// (0x000431d0) list_single_number_heading_pane

0x686e,	// (0x000431d0) list_single_number_pane_ParamLimits

0x686e,	// (0x000431d0) list_single_number_pane

0x686e,	// (0x000431d0) list_single_pane_ParamLimits

0x686e,	// (0x000431d0) list_single_pane

0x7b74,	// (0x000444d6) list_highlight_pane_cp1

0x8cef,	// (0x00045651) list_single_pane_g1_ParamLimits

0x8cef,	// (0x00045651) list_single_pane_g1

0x584c,	// (0x000421ae) list_single_pane_g2_ParamLimits

0x584c,	// (0x000421ae) list_single_pane_g2

0x0001,

0xf5ad,	// (0x0004bf0f) list_single_pane_g_ParamLimits

0xf5ad,	// (0x0004bf0f) list_single_pane_g

0x4e0b,	// (0x0004176d) list_single_pane_t1_ParamLimits

0x4e0b,	// (0x0004176d) list_single_pane_t1

0x8cef,	// (0x00045651) list_single_number_pane_g1_ParamLimits

0x8cef,	// (0x00045651) list_single_number_pane_g1

0x584c,	// (0x000421ae) list_single_number_pane_g2_ParamLimits

0x584c,	// (0x000421ae) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x0004bf0f) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x0004bf0f) list_single_number_pane_g

0x4ce6,	// (0x00041648) list_single_number_pane_t1_ParamLimits

0x4ce6,	// (0x00041648) list_single_number_pane_t1

0x4dc9,	// (0x0004172b) list_single_number_pane_t2_ParamLimits

0x4dc9,	// (0x0004172b) list_single_number_pane_t2

0x0001,

0xf93a,	// (0x0004c29c) list_single_number_pane_t_ParamLimits

0xf93a,	// (0x0004c29c) list_single_number_pane_t

0x4522,	// (0x00040e84) list_single_graphic_pane_g1_ParamLimits

0x4522,	// (0x00040e84) list_single_graphic_pane_g1

0x8cef,	// (0x00045651) list_single_graphic_pane_g2_ParamLimits

0x8cef,	// (0x00045651) list_single_graphic_pane_g2

0x584c,	// (0x000421ae) list_single_graphic_pane_g3_ParamLimits

0x584c,	// (0x000421ae) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0004befe) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0004befe) list_single_graphic_pane_g

0x452e,	// (0x00040e90) list_single_graphic_pane_t1_ParamLimits

0x452e,	// (0x00040e90) list_single_graphic_pane_t1

0x4544,	// (0x00040ea6) list_single_heading_pane_g1_ParamLimits

0x4544,	// (0x00040ea6) list_single_heading_pane_g1

0x584c,	// (0x000421ae) list_single_heading_pane_g2_ParamLimits

0x584c,	// (0x000421ae) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0004bf05) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0004bf05) list_single_heading_pane_g

0x4557,	// (0x00040eb9) list_single_heading_pane_t1_ParamLimits

0x4557,	// (0x00040eb9) list_single_heading_pane_t1

0x5858,	// (0x000421ba) list_single_heading_pane_t2_ParamLimits

0x5858,	// (0x000421ba) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0004bf0a) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0004bf0a) list_single_heading_pane_t

0x8cef,	// (0x00045651) list_single_number_heading_pane_g1_ParamLimits

0x8cef,	// (0x00045651) list_single_number_heading_pane_g1

0x584c,	// (0x000421ae) list_single_number_heading_pane_g2_ParamLimits

0x584c,	// (0x000421ae) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x0004bf0f) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x0004bf0f) list_single_number_heading_pane_g

0x456d,	// (0x00040ecf) list_single_number_heading_pane_t1_ParamLimits

0x456d,	// (0x00040ecf) list_single_number_heading_pane_t1

0x4583,	// (0x00040ee5) list_single_number_heading_pane_t2_ParamLimits

0x4583,	// (0x00040ee5) list_single_number_heading_pane_t2

0x4595,	// (0x00040ef7) list_single_number_heading_pane_t3_ParamLimits

0x4595,	// (0x00040ef7) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x0004bf14) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x0004bf14) list_single_number_heading_pane_t

0x45a7,	// (0x00040f09) list_single_graphic_heading_pane_g1_ParamLimits

0x45a7,	// (0x00040f09) list_single_graphic_heading_pane_g1

0x586a,	// (0x000421cc) list_single_graphic_heading_pane_g4_ParamLimits

0x586a,	// (0x000421cc) list_single_graphic_heading_pane_g4

0x584c,	// (0x000421ae) list_single_graphic_heading_pane_g5_ParamLimits

0x584c,	// (0x000421ae) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x0004bf1b) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x0004bf1b) list_single_graphic_heading_pane_g

0x456d,	// (0x00040ecf) list_single_graphic_heading_pane_t1_ParamLimits

0x456d,	// (0x00040ecf) list_single_graphic_heading_pane_t1

0x587b,	// (0x000421dd) list_single_graphic_heading_pane_t2_ParamLimits

0x587b,	// (0x000421dd) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x0004bf22) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x0004bf22) list_single_graphic_heading_pane_t

0x45b3,	// (0x00040f15) list_single_large_graphic_pane_g1_ParamLimits

0x45b3,	// (0x00040f15) list_single_large_graphic_pane_g1

0x45bf,	// (0x00040f21) list_single_large_graphic_pane_g2_ParamLimits

0x45bf,	// (0x00040f21) list_single_large_graphic_pane_g2

0x45cb,	// (0x00040f2d) list_single_large_graphic_pane_g3_ParamLimits

0x45cb,	// (0x00040f2d) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x0004bf27) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x0004bf27) list_single_large_graphic_pane_g

0xa00d,	// (0x0004696f) wait_border_pane_g2_copy1

0x45d7,	// (0x00040f39) list_single_large_graphic_pane_g4_cp2

0x45df,	// (0x00040f41) list_single_large_graphic_pane_t1_ParamLimits

0x45df,	// (0x00040f41) list_single_large_graphic_pane_t1

0x588d,	// (0x000421ef) list_double_pane_g1_ParamLimits

0x588d,	// (0x000421ef) list_double_pane_g1

0x5899,	// (0x000421fb) list_double_pane_g2_ParamLimits

0x5899,	// (0x000421fb) list_double_pane_g2

0x0001,

0xf5cc,	// (0x0004bf2e) list_double_pane_g_ParamLimits

0xf5cc,	// (0x0004bf2e) list_double_pane_g

0x45f5,	// (0x00040f57) list_double_pane_t1_ParamLimits

0x45f5,	// (0x00040f57) list_double_pane_t1

0x460b,	// (0x00040f6d) list_double_pane_t2_ParamLimits

0x460b,	// (0x00040f6d) list_double_pane_t2

0x0001,

0xf5d1,	// (0x0004bf33) list_double_pane_t_ParamLimits

0xf5d1,	// (0x0004bf33) list_double_pane_t

0x461d,	// (0x00040f7f) list_double2_pane_g1_ParamLimits

0x461d,	// (0x00040f7f) list_double2_pane_g1

0x462e,	// (0x00040f90) list_double2_pane_g2_ParamLimits

0x462e,	// (0x00040f90) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x0004bf38) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x0004bf38) list_double2_pane_g

0x463a,	// (0x00040f9c) list_double2_pane_t1_ParamLimits

0x463a,	// (0x00040f9c) list_double2_pane_t1

0x4650,	// (0x00040fb2) list_double2_pane_t2_ParamLimits

0x4650,	// (0x00040fb2) list_double2_pane_t2

0x0001,

0xf5db,	// (0x0004bf3d) list_double2_pane_t_ParamLimits

0xf5db,	// (0x0004bf3d) list_double2_pane_t

0x588d,	// (0x000421ef) list_double_number_pane_g1_ParamLimits

0x588d,	// (0x000421ef) list_double_number_pane_g1

0x5899,	// (0x000421fb) list_double_number_pane_g2_ParamLimits

0x5899,	// (0x000421fb) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x0004bf2e) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x0004bf2e) list_double_number_pane_g

0x4662,	// (0x00040fc4) list_double_number_pane_t1_ParamLimits

0x4662,	// (0x00040fc4) list_double_number_pane_t1

0x4674,	// (0x00040fd6) list_double_number_pane_t2_ParamLimits

0x4674,	// (0x00040fd6) list_double_number_pane_t2

0x468a,	// (0x00040fec) list_double_number_pane_t3_ParamLimits

0x468a,	// (0x00040fec) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x0004bf42) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x0004bf42) list_double_number_pane_t

0x469c,	// (0x00040ffe) list_double_graphic_pane_g1_ParamLimits

0x469c,	// (0x00040ffe) list_double_graphic_pane_g1

0x58a5,	// (0x00042207) list_double_graphic_pane_g2_ParamLimits

0x58a5,	// (0x00042207) list_double_graphic_pane_g2

0x58b4,	// (0x00042216) list_double_graphic_pane_g3_ParamLimits

0x58b4,	// (0x00042216) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x0004bf49) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x0004bf49) list_double_graphic_pane_g

0x46b4,	// (0x00041016) list_double_graphic_pane_t1_ParamLimits

0x46b4,	// (0x00041016) list_double_graphic_pane_t1

0x46ca,	// (0x0004102c) list_double_graphic_pane_t2_ParamLimits

0x46ca,	// (0x0004102c) list_double_graphic_pane_t2

0x0001,

0xf5f0,	// (0x0004bf52) list_double_graphic_pane_t_ParamLimits

0xf5f0,	// (0x0004bf52) list_double_graphic_pane_t

0x46dc,	// (0x0004103e) list_double2_graphic_pane_g1_ParamLimits

0x46dc,	// (0x0004103e) list_double2_graphic_pane_g1

0x8488,	// (0x00044dea) list_double2_graphic_pane_g2_ParamLimits

0x8488,	// (0x00044dea) list_double2_graphic_pane_g2

0x58c0,	// (0x00042222) list_double2_graphic_pane_g3_ParamLimits

0x58c0,	// (0x00042222) list_double2_graphic_pane_g3

0x0002,

0xf5f5,	// (0x0004bf57) list_double2_graphic_pane_g_ParamLimits

0xf5f5,	// (0x0004bf57) list_double2_graphic_pane_g

0x46e8,	// (0x0004104a) list_double2_graphic_pane_t1_ParamLimits

0x46e8,	// (0x0004104a) list_double2_graphic_pane_t1

0x46fe,	// (0x00041060) list_double2_graphic_pane_t2_ParamLimits

0x46fe,	// (0x00041060) list_double2_graphic_pane_t2

0x0001,

0xf5fc,	// (0x0004bf5e) list_double2_graphic_pane_t_ParamLimits

0xf5fc,	// (0x0004bf5e) list_double2_graphic_pane_t

0x4710,	// (0x00041072) list_double_large_graphic_pane_g1_ParamLimits

0x4710,	// (0x00041072) list_double_large_graphic_pane_g1

0x4723,	// (0x00041085) list_double_large_graphic_pane_g2_ParamLimits

0x4723,	// (0x00041085) list_double_large_graphic_pane_g2

0x5899,	// (0x000421fb) list_double_large_graphic_pane_g3_ParamLimits

0x5899,	// (0x000421fb) list_double_large_graphic_pane_g3

0x4739,	// (0x0004109b) list_double_large_graphic_pane_g4_ParamLimits

0x4739,	// (0x0004109b) list_double_large_graphic_pane_g4

0x0004,

0xf601,	// (0x0004bf63) list_double_large_graphic_pane_g_ParamLimits

0xf601,	// (0x0004bf63) list_double_large_graphic_pane_g

0x474a,	// (0x000410ac) list_double_large_graphic_pane_t1_ParamLimits

0x474a,	// (0x000410ac) list_double_large_graphic_pane_t1

0x4763,	// (0x000410c5) list_double_large_graphic_pane_t2_ParamLimits

0x4763,	// (0x000410c5) list_double_large_graphic_pane_t2

0x0001,

0xf60c,	// (0x0004bf6e) list_double_large_graphic_pane_t_ParamLimits

0xf60c,	// (0x0004bf6e) list_double_large_graphic_pane_t

0x4775,	// (0x000410d7) list_double2_large_graphic_pane_g1_ParamLimits

0x4775,	// (0x000410d7) list_double2_large_graphic_pane_g1

0x4781,	// (0x000410e3) list_double2_large_graphic_pane_g2_ParamLimits

0x4781,	// (0x000410e3) list_double2_large_graphic_pane_g2

0x58c0,	// (0x00042222) list_double2_large_graphic_pane_g3_ParamLimits

0x58c0,	// (0x00042222) list_double2_large_graphic_pane_g3

0x0002,

0xf611,	// (0x0004bf73) list_double2_large_graphic_pane_g_ParamLimits

0xf611,	// (0x0004bf73) list_double2_large_graphic_pane_g

0x4792,	// (0x000410f4) list_double2_large_graphic_pane_t1_ParamLimits

0x4792,	// (0x000410f4) list_double2_large_graphic_pane_t1

0x47a8,	// (0x0004110a) list_double2_large_graphic_pane_t2_ParamLimits

0x47a8,	// (0x0004110a) list_double2_large_graphic_pane_t2

0x0001,

0xf618,	// (0x0004bf7a) list_double2_large_graphic_pane_t_ParamLimits

0xf618,	// (0x0004bf7a) list_double2_large_graphic_pane_t

0x47ba,	// (0x0004111c) list_double_heading_pane_g1_ParamLimits

0x47ba,	// (0x0004111c) list_double_heading_pane_g1

0x47cb,	// (0x0004112d) list_double_heading_pane_g2_ParamLimits

0x47cb,	// (0x0004112d) list_double_heading_pane_g2

0x0001,

0xf61d,	// (0x0004bf7f) list_double_heading_pane_g_ParamLimits

0xf61d,	// (0x0004bf7f) list_double_heading_pane_g

0x47d7,	// (0x00041139) list_double_heading_pane_t1_ParamLimits

0x47d7,	// (0x00041139) list_double_heading_pane_t1

0x4650,	// (0x00040fb2) list_double_heading_pane_t2_ParamLimits

0x4650,	// (0x00040fb2) list_double_heading_pane_t2

0x0001,

0xf622,	// (0x0004bf84) list_double_heading_pane_t_ParamLimits

0xf622,	// (0x0004bf84) list_double_heading_pane_t

0x47ed,	// (0x0004114f) list_double_graphic_heading_pane_g1_ParamLimits

0x47ed,	// (0x0004114f) list_double_graphic_heading_pane_g1

0x47ba,	// (0x0004111c) list_double_graphic_heading_pane_g2_ParamLimits

0x47ba,	// (0x0004111c) list_double_graphic_heading_pane_g2

0x47cb,	// (0x0004112d) list_double_graphic_heading_pane_g3_ParamLimits

0x47cb,	// (0x0004112d) list_double_graphic_heading_pane_g3

0x0002,

0xf627,	// (0x0004bf89) list_double_graphic_heading_pane_g_ParamLimits

0xf627,	// (0x0004bf89) list_double_graphic_heading_pane_g

0x47f9,	// (0x0004115b) list_double_graphic_heading_pane_t1_ParamLimits

0x47f9,	// (0x0004115b) list_double_graphic_heading_pane_t1

0x46fe,	// (0x00041060) list_double_graphic_heading_pane_t2_ParamLimits

0x46fe,	// (0x00041060) list_double_graphic_heading_pane_t2

0x0001,

0xf62e,	// (0x0004bf90) list_double_graphic_heading_pane_t_ParamLimits

0xf62e,	// (0x0004bf90) list_double_graphic_heading_pane_t

0x480f,	// (0x00041171) list_double_time_pane_g1_ParamLimits

0x480f,	// (0x00041171) list_double_time_pane_g1

0x4820,	// (0x00041182) list_double_time_pane_g2_ParamLimits

0x4820,	// (0x00041182) list_double_time_pane_g2

0x0001,

0xf633,	// (0x0004bf95) list_double_time_pane_g_ParamLimits

0xf633,	// (0x0004bf95) list_double_time_pane_g

0x482c,	// (0x0004118e) list_double_time_pane_t1_ParamLimits

0x482c,	// (0x0004118e) list_double_time_pane_t1

0x4842,	// (0x000411a4) list_double_time_pane_t2_ParamLimits

0x4842,	// (0x000411a4) list_double_time_pane_t2

0x4854,	// (0x000411b6) list_double_time_pane_t3_ParamLimits

0x4854,	// (0x000411b6) list_double_time_pane_t3

0x4866,	// (0x000411c8) list_double_time_pane_t4_ParamLimits

0x4866,	// (0x000411c8) list_double_time_pane_t4

0x0003,

0xf638,	// (0x0004bf9a) list_double_time_pane_t_ParamLimits

0xf638,	// (0x0004bf9a) list_double_time_pane_t

0x4878,	// (0x000411da) list_setting_pane_g1_ParamLimits

0x4878,	// (0x000411da) list_setting_pane_g1

0x4884,	// (0x000411e6) list_setting_pane_g2_ParamLimits

0x4884,	// (0x000411e6) list_setting_pane_g2

0x0001,

0xf641,	// (0x0004bfa3) list_setting_pane_g_ParamLimits

0xf641,	// (0x0004bfa3) list_setting_pane_g

0x4890,	// (0x000411f2) list_setting_pane_t1_ParamLimits

0x4890,	// (0x000411f2) list_setting_pane_t1

0x48aa,	// (0x0004120c) list_setting_pane_t2_ParamLimits

0x48aa,	// (0x0004120c) list_setting_pane_t2

0x0002,

0xf646,	// (0x0004bfa8) list_setting_pane_t_ParamLimits

0xf646,	// (0x0004bfa8) list_setting_pane_t

0x48e9,	// (0x0004124b) set_value_pane_cp_ParamLimits

0x48e9,	// (0x0004124b) set_value_pane_cp

0x48f5,	// (0x00041257) list_setting_number_pane_g1_ParamLimits

0x48f5,	// (0x00041257) list_setting_number_pane_g1

0x4901,	// (0x00041263) list_setting_number_pane_g2_ParamLimits

0x4901,	// (0x00041263) list_setting_number_pane_g2

0x0001,

0xf64d,	// (0x0004bfaf) list_setting_number_pane_g_ParamLimits

0xf64d,	// (0x0004bfaf) list_setting_number_pane_g

0x490d,	// (0x0004126f) list_setting_number_pane_t1_ParamLimits

0x490d,	// (0x0004126f) list_setting_number_pane_t1

0x4926,	// (0x00041288) list_setting_number_pane_t2_ParamLimits

0x4926,	// (0x00041288) list_setting_number_pane_t2

0x4940,	// (0x000412a2) list_setting_number_pane_t3_ParamLimits

0x4940,	// (0x000412a2) list_setting_number_pane_t3

0x0003,

0xf652,	// (0x0004bfb4) list_setting_number_pane_t_ParamLimits

0xf652,	// (0x0004bfb4) list_setting_number_pane_t

0x48e9,	// (0x0004124b) set_value_pane_ParamLimits

0x48e9,	// (0x0004124b) set_value_pane

0x8494,	// (0x00044df6) bg_set_opt_pane_ParamLimits

0x8494,	// (0x00044df6) bg_set_opt_pane

0x4983,	// (0x000412e5) set_value_pane_t1

0x84b5,	// (0x00044e17) slider_set_pane_cp3

0x84be,	// (0x00044e20) volume_small_pane_cp

0x84c7,	// (0x00044e29) list_form_gen_pane

0x84d0,	// (0x00044e32) scroll_pane_cp8

0x4999,	// (0x000412fb) form_field_data_pane_ParamLimits

0x4999,	// (0x000412fb) form_field_data_pane

0x49bd,	// (0x0004131f) form_field_data_wide_pane_ParamLimits

0x49bd,	// (0x0004131f) form_field_data_wide_pane

0x49e0,	// (0x00041342) form_field_popup_pane_ParamLimits

0x49e0,	// (0x00041342) form_field_popup_pane

0x4a00,	// (0x00041362) form_field_popup_wide_pane_ParamLimits

0x4a00,	// (0x00041362) form_field_popup_wide_pane

0x4a1f,	// (0x00041381) form_field_slider_pane_ParamLimits

0x4a1f,	// (0x00041381) form_field_slider_pane

0x4a32,	// (0x00041394) form_field_slider_wide_pane_ParamLimits

0x4a32,	// (0x00041394) form_field_slider_wide_pane

0x84e1,	// (0x00044e43) data_form_pane

0x4a4f,	// (0x000413b1) form_field_data_pane_t1

0x84ed,	// (0x00044e4f) input_focus_pane

0x4a67,	// (0x000413c9) data_form_wide_pane

0x4a84,	// (0x000413e6) form_field_data_wide_pane_t1

0x8252,	// (0x00044bb4) input_focus_pane_cp6

0x4aa6,	// (0x00041408) form_field_popup_pane_t1

0x84ed,	// (0x00044e4f) input_focus_pane_cp7

0x850f,	// (0x00044e71) list_form_pane

0x4ac6,	// (0x00041428) form_field_popup_wide_pane_t1

0x84ed,	// (0x00044e4f) input_focus_pane_cp8

0x851b,	// (0x00044e7d) list_form_wide_pane

0x4ae3,	// (0x00041445) form_field_slider_pane_t1_ParamLimits

0x4ae3,	// (0x00041445) form_field_slider_pane_t1

0x4af9,	// (0x0004145b) form_field_slider_pane_t2_ParamLimits

0x4af9,	// (0x0004145b) form_field_slider_pane_t2

0x0001,

0xf662,	// (0x0004bfc4) form_field_slider_pane_t_ParamLimits

0xf662,	// (0x0004bfc4) form_field_slider_pane_t

0x7ecf,	// (0x00044831) input_focus_pane_cp9_ParamLimits

0x7ecf,	// (0x00044831) input_focus_pane_cp9

0x4b0e,	// (0x00041470) slider_cont_pane_ParamLimits

0x4b0e,	// (0x00041470) slider_cont_pane

0x8527,	// (0x00044e89) form_field_slider_wide_pane_t1_ParamLimits

0x8527,	// (0x00044e89) form_field_slider_wide_pane_t1

0x4b22,	// (0x00041484) form_field_slider_wide_pane_t2_ParamLimits

0x4b22,	// (0x00041484) form_field_slider_wide_pane_t2

0x0001,

0xf667,	// (0x0004bfc9) form_field_slider_wide_pane_t_ParamLimits

0xf667,	// (0x0004bfc9) form_field_slider_wide_pane_t

0x7ecf,	// (0x00044831) input_focus_pane_cp10_ParamLimits

0x7ecf,	// (0x00044831) input_focus_pane_cp10

0x4b34,	// (0x00041496) slider_cont_pane_cp1_ParamLimits

0x4b34,	// (0x00041496) slider_cont_pane_cp1

0x4b48,	// (0x000414aa) slider_form_pane_cp

0x8539,	// (0x00044e9b) input_focus_pane_g1

0x8541,	// (0x00044ea3) input_focus_pane_g2

0x8549,	// (0x00044eab) input_focus_pane_g3

0x8551,	// (0x00044eb3) input_focus_pane_g4

0x8559,	// (0x00044ebb) input_focus_pane_g5

0x8561,	// (0x00044ec3) input_focus_pane_g6

0x8569,	// (0x00044ecb) input_focus_pane_g7

0x8571,	// (0x00044ed3) input_focus_pane_g8

0x8579,	// (0x00044edb) input_focus_pane_g9

0x25fe,	// (0x0003ef60) input_focus_pane_g10

0x0009,

0xf66c,	// (0x0004bfce) input_focus_pane_g

0xa016,	// (0x00046978) wait_border_pane_g3_copy1

0x4b50,	// (0x000414b2) data_form_pane_t1

0x25fe,	// (0x0003ef60) wait_anim_pane_g1_copy1

0x4ddb,	// (0x0004173d) data_form_wide_pane_t1

0x4b6b,	// (0x000414cd) list_form_graphic_pane_cp_ParamLimits

0x4b6b,	// (0x000414cd) list_form_graphic_pane_cp

0xaf36,	// (0x00047898) slider_form_pane_g1

0xaf3f,	// (0x000478a1) slider_form_pane_g2

0x0006,

0xf96a,	// (0x0004c2cc) slider_form_pane_g

0x4b84,	// (0x000414e6) list_form_graphic_pane_ParamLimits

0x4b84,	// (0x000414e6) list_form_graphic_pane

0x4ba0,	// (0x00041502) list_form_graphic_pane_g1

0x4ba8,	// (0x0004150a) list_form_graphic_pane_t1_ParamLimits

0x4ba8,	// (0x0004150a) list_form_graphic_pane_t1

0x7c54,	// (0x000445b6) list_highlight_pane_cp5_ParamLimits

0x7c54,	// (0x000445b6) list_highlight_pane_cp5

0x4bbd,	// (0x0004151f) find_pane_g1

0x8581,	// (0x00044ee3) input_find_pane

0x4bc6,	// (0x00041528) input_find_pane_g1_ParamLimits

0x4bc6,	// (0x00041528) input_find_pane_g1

0x4bd2,	// (0x00041534) input_find_pane_t1_ParamLimits

0x4bd2,	// (0x00041534) input_find_pane_t1

0x4be7,	// (0x00041549) input_find_pane_t2_ParamLimits

0x4be7,	// (0x00041549) input_find_pane_t2

0x0001,

0xf681,	// (0x0004bfe3) input_find_pane_t_ParamLimits

0xf681,	// (0x0004bfe3) input_find_pane_t

0x858a,	// (0x00044eec) input_focus_pane_cp5_ParamLimits

0x858a,	// (0x00044eec) input_focus_pane_cp5

0x85a9,	// (0x00044f0b) bg_popup_window_pane_cp2_ParamLimits

0x85a9,	// (0x00044f0b) bg_popup_window_pane_cp2

0x85b6,	// (0x00044f18) listscroll_menu_pane_ParamLimits

0x85b6,	// (0x00044f18) listscroll_menu_pane

0x85c2,	// (0x00044f24) popup_submenu_window_ParamLimits

0x85c2,	// (0x00044f24) popup_submenu_window

0x85ee,	// (0x00044f50) find_popup_pane_g1

0x85f6,	// (0x00044f58) input_popup_find_pane_cp

0x8600,	// (0x00044f62) input_focus_pane_cp4_ParamLimits

0x8600,	// (0x00044f62) input_focus_pane_cp4

0x861a,	// (0x00044f7c) input_popup_find_pane_t1_ParamLimits

0x861a,	// (0x00044f7c) input_popup_find_pane_t1

0x7b74,	// (0x000444d6) bg_popup_sub_pane_cp

0x8648,	// (0x00044faa) listscroll_popup_sub_pane

0x8650,	// (0x00044fb2) list_submenu_pane_ParamLimits

0x8650,	// (0x00044fb2) list_submenu_pane

0x8661,	// (0x00044fc3) scroll_pane_cp4

0x8669,	// (0x00044fcb) list_single_popup_submenu_pane_ParamLimits

0x8669,	// (0x00044fcb) list_single_popup_submenu_pane

0x867d,	// (0x00044fdf) list_single_popup_submenu_pane_g1

0x8685,	// (0x00044fe7) list_single_popup_submenu_pane_t1_ParamLimits

0x8685,	// (0x00044fe7) list_single_popup_submenu_pane_t1

0x7c54,	// (0x000445b6) bg_active_tab_pane_cp1_ParamLimits

0x7c54,	// (0x000445b6) bg_active_tab_pane_cp1

0x869a,	// (0x00044ffc) tabs_2_active_pane_g1

0x86a2,	// (0x00045004) tabs_2_active_pane_t1

0x7c54,	// (0x000445b6) bg_passive_tab_pane_cp1_ParamLimits

0x7c54,	// (0x000445b6) bg_passive_tab_pane_cp1

0x869a,	// (0x00044ffc) tabs_2_passive_pane_g1

0x86a2,	// (0x00045004) tabs_2_passive_pane_t1

0x86b4,	// (0x00045016) bg_active_tab_pane_cp4

0x86c2,	// (0x00045024) tabs_2_long_active_pane_t1

0x86d5,	// (0x00045037) bg_passive_tab_pane_cp4

0x6516,	// (0x00042e78) list_single_midp_graphic_pane_g4_ParamLimits

0x86b4,	// (0x00045016) bg_active_tab_pane_cp5

0x86e1,	// (0x00045043) tabs_3_long_active_pane_t1

0x86d5,	// (0x00045037) bg_passive_tab_pane_cp5

0x6516,	// (0x00042e78) list_single_midp_graphic_pane_g4

0x7c54,	// (0x000445b6) bg_popup_window_pane_cp13_ParamLimits

0x7c54,	// (0x000445b6) bg_popup_window_pane_cp13

0x86fc,	// (0x0004505e) listscroll_popup_fast_pane_ParamLimits

0x86fc,	// (0x0004505e) listscroll_popup_fast_pane

0x870b,	// (0x0004506d) grid_popup_fast_pane_ParamLimits

0x870b,	// (0x0004506d) grid_popup_fast_pane

0x871d,	// (0x0004507f) scroll_pane_cp9_ParamLimits

0x871d,	// (0x0004507f) scroll_pane_cp9

0xc85f,	// (0x000491c1) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc85f,	// (0x000491c1) list_single_graphic_hl_pane_t1_cp2

0x8741,	// (0x000450a3) input_focus_pane_cp20_ParamLimits

0x8741,	// (0x000450a3) input_focus_pane_cp20

0x874f,	// (0x000450b1) query_popup_data_pane_t1_ParamLimits

0x874f,	// (0x000450b1) query_popup_data_pane_t1

0x8762,	// (0x000450c4) query_popup_data_pane_t2_ParamLimits

0x8762,	// (0x000450c4) query_popup_data_pane_t2

0x87a8,	// (0x0004510a) query_popup_data_pane_t3_ParamLimits

0x87a8,	// (0x0004510a) query_popup_data_pane_t3

0x87e9,	// (0x0004514b) query_popup_data_pane_t4_ParamLimits

0x87e9,	// (0x0004514b) query_popup_data_pane_t4

0x8825,	// (0x00045187) query_popup_data_pane_t5_ParamLimits

0x8825,	// (0x00045187) query_popup_data_pane_t5

0x0004,

0xf686,	// (0x0004bfe8) query_popup_data_pane_t_ParamLimits

0xf686,	// (0x0004bfe8) query_popup_data_pane_t

0x8539,	// (0x00044e9b) bg_set_opt_pane_g1

0x8541,	// (0x00044ea3) bg_set_opt_pane_g2

0x8549,	// (0x00044eab) bg_set_opt_pane_g3

0x8551,	// (0x00044eb3) bg_set_opt_pane_g4

0x8559,	// (0x00044ebb) bg_set_opt_pane_g5

0x8561,	// (0x00044ec3) bg_set_opt_pane_g6

0x8569,	// (0x00044ecb) bg_set_opt_pane_g7

0x8571,	// (0x00044ed3) bg_set_opt_pane_g8

0x8579,	// (0x00044edb) bg_set_opt_pane_g9

0x0008,

0xf691,	// (0x0004bff3) bg_set_opt_pane_g

0x5b9a,	// (0x000424fc) control_top_pane_stacon_ParamLimits

0x5b9a,	// (0x000424fc) control_top_pane_stacon

0x5bed,	// (0x0004254f) signal_pane_stacon_ParamLimits

0x5bed,	// (0x0004254f) signal_pane_stacon

0x8e3c,	// (0x0004579e) stacon_top_pane_g1_ParamLimits

0x8e3c,	// (0x0004579e) stacon_top_pane_g1

0x5c12,	// (0x00042574) title_pane_stacon_ParamLimits

0x5c12,	// (0x00042574) title_pane_stacon

0x5c3c,	// (0x0004259e) uni_indicator_pane_stacon_ParamLimits

0x5c3c,	// (0x0004259e) uni_indicator_pane_stacon

0x5c51,	// (0x000425b3) battery_pane_stacon_ParamLimits

0x5c51,	// (0x000425b3) battery_pane_stacon

0x5c95,	// (0x000425f7) control_bottom_pane_stacon_ParamLimits

0x5c95,	// (0x000425f7) control_bottom_pane_stacon

0x5cb8,	// (0x0004261a) navi_pane_stacon_ParamLimits

0x5cb8,	// (0x0004261a) navi_pane_stacon

0x8e5e,	// (0x000457c0) stacon_bottom_pane_g1_ParamLimits

0x8e5e,	// (0x000457c0) stacon_bottom_pane_g1

0x58e1,	// (0x00042243) aid_levels_signal_lsc_ParamLimits

0x58e1,	// (0x00042243) aid_levels_signal_lsc

0x58f7,	// (0x00042259) signal_pane_stacon_g1_ParamLimits

0x58f7,	// (0x00042259) signal_pane_stacon_g1

0x590b,	// (0x0004226d) signal_pane_stacon_g2_ParamLimits

0x590b,	// (0x0004226d) signal_pane_stacon_g2

0x0001,

0xf6a4,	// (0x0004c006) signal_pane_stacon_g_ParamLimits

0xf6a4,	// (0x0004c006) signal_pane_stacon_g

0x5940,	// (0x000422a2) title_pane_stacon_t1_ParamLimits

0x5940,	// (0x000422a2) title_pane_stacon_t1

0x8869,	// (0x000451cb) uni_indicator_pane_stacon_g1

0x8873,	// (0x000451d5) uni_indicator_pane_stacon_g2

0x887d,	// (0x000451df) uni_indicator_pane_stacon_g3

0x8887,	// (0x000451e9) uni_indicator_pane_stacon_g4

0x0003,

0xf6b0,	// (0x0004c012) uni_indicator_pane_stacon_g

0x5965,	// (0x000422c7) control_top_pane_stacon_g1

0x596d,	// (0x000422cf) control_top_pane_stacon_t1_ParamLimits

0x596d,	// (0x000422cf) control_top_pane_stacon_t1

0x59a4,	// (0x00042306) aid_levels_battery_lsc_ParamLimits

0x59a4,	// (0x00042306) aid_levels_battery_lsc

0x59bb,	// (0x0004231d) battery_pane_stacon_g1_ParamLimits

0x59bb,	// (0x0004231d) battery_pane_stacon_g1

0x59ce,	// (0x00042330) battery_pane_stacon_g2_ParamLimits

0x59ce,	// (0x00042330) battery_pane_stacon_g2

0x0001,

0xf6b9,	// (0x0004c01b) battery_pane_stacon_g_ParamLimits

0xf6b9,	// (0x0004c01b) battery_pane_stacon_g

0x5a0c,	// (0x0004236e) navi_icon_pane_stacon

0x5a20,	// (0x00042382) navi_navi_pane_stacon

0x5a0c,	// (0x0004236e) navi_text_pane_stacon

0x5965,	// (0x000422c7) control_bottom_pane_stacon_g1

0x5a34,	// (0x00042396) control_bottom_pane_stacon_t1_ParamLimits

0x5a34,	// (0x00042396) control_bottom_pane_stacon_t1

0x88ab,	// (0x0004520d) grid_app_pane_ParamLimits

0x88ab,	// (0x0004520d) grid_app_pane

0x88cd,	// (0x0004522f) scroll_pane_cp15_ParamLimits

0x88cd,	// (0x0004522f) scroll_pane_cp15

0x88e0,	// (0x00045242) cell_app_pane_ParamLimits

0x88e0,	// (0x00045242) cell_app_pane

0x8908,	// (0x0004526a) cell_app_pane_g1_ParamLimits

0x8908,	// (0x0004526a) cell_app_pane_g1

0x892c,	// (0x0004528e) cell_app_pane_g2_ParamLimits

0x892c,	// (0x0004528e) cell_app_pane_g2

0x0001,

0xf6be,	// (0x0004c020) cell_app_pane_g_ParamLimits

0xf6be,	// (0x0004c020) cell_app_pane_g

0x8938,	// (0x0004529a) cell_app_pane_t1_ParamLimits

0x8938,	// (0x0004529a) cell_app_pane_t1

0x894f,	// (0x000452b1) grid_highlight_pane_ParamLimits

0x894f,	// (0x000452b1) grid_highlight_pane

0x8539,	// (0x00044e9b) cell_highlight_pane_g1

0x8541,	// (0x00044ea3) cell_highlight_pane_g2

0x8549,	// (0x00044eab) cell_highlight_pane_g3

0x8551,	// (0x00044eb3) cell_highlight_pane_g4

0x8559,	// (0x00044ebb) cell_highlight_pane_g5

0x8561,	// (0x00044ec3) cell_highlight_pane_g6

0x8569,	// (0x00044ecb) cell_highlight_pane_g7

0x8571,	// (0x00044ed3) cell_highlight_pane_g8

0x8579,	// (0x00044edb) cell_highlight_pane_g9

0x25fe,	// (0x0003ef60) cell_highlight_pane_g10

0x0009,

0xf66c,	// (0x0004bfce) cell_highlight_pane_g

0x8960,	// (0x000452c2) bg_scroll_pane

0x5a7e,	// (0x000423e0) scroll_handle_pane

0x89a7,	// (0x00045309) scroll_bg_pane_g1

0x89bc,	// (0x0004531e) scroll_bg_pane_g2

0x89d4,	// (0x00045336) scroll_bg_pane_g3

0x0002,

0xf6c3,	// (0x0004c025) scroll_bg_pane_g

0x89e9,	// (0x0004534b) scroll_handle_focus_pane_ParamLimits

0x89e9,	// (0x0004534b) scroll_handle_focus_pane

0x89a7,	// (0x00045309) scroll_handle_pane_g1

0x89f6,	// (0x00045358) scroll_handle_pane_g2

0x89d4,	// (0x00045336) scroll_handle_pane_g3

0x0002,

0xf6ca,	// (0x0004c02c) scroll_handle_pane_g

0x8600,	// (0x00044f62) bg_popup_sub_pane_cp21_ParamLimits

0x8600,	// (0x00044f62) bg_popup_sub_pane_cp21

0x8a0a,	// (0x0004536c) popup_fep_japan_predictive_window_t1_ParamLimits

0x8a0a,	// (0x0004536c) popup_fep_japan_predictive_window_t1

0x8a24,	// (0x00045386) popup_fep_japan_predictive_window_t2_ParamLimits

0x8a24,	// (0x00045386) popup_fep_japan_predictive_window_t2

0x8a57,	// (0x000453b9) popup_fep_japan_predictive_window_t3_ParamLimits

0x8a57,	// (0x000453b9) popup_fep_japan_predictive_window_t3

0x0002,

0xf6d1,	// (0x0004c033) popup_fep_japan_predictive_window_t_ParamLimits

0xf6d1,	// (0x0004c033) popup_fep_japan_predictive_window_t

0x7b74,	// (0x000444d6) bg_popup_sub_pane_cp23

0x8a8e,	// (0x000453f0) listscroll_japin_cand_pane

0x8a96,	// (0x000453f8) popup_fep_japan_candidate_window_t1

0x8aa4,	// (0x00045406) candidate_pane_ParamLimits

0x8aa4,	// (0x00045406) candidate_pane

0x8ab6,	// (0x00045418) scroll_pane_cp30

0x8abe,	// (0x00045420) list_single_popup_jap_candidate_pane_ParamLimits

0x8abe,	// (0x00045420) list_single_popup_jap_candidate_pane

0x7b74,	// (0x000444d6) list_highlight_pane_cp30

0x8ad3,	// (0x00045435) list_single_popup_jap_candidate_pane_t1

0x8ae2,	// (0x00045444) level_1_signal

0x8af4,	// (0x00045456) level_2_signal

0x8b07,	// (0x00045469) level_3_signal

0x8b1a,	// (0x0004547c) level_4_signal

0x8b2d,	// (0x0004548f) level_5_signal

0x8b40,	// (0x000454a2) level_6_signal

0x8b53,	// (0x000454b5) level_7_signal

0x8ae2,	// (0x00045444) level_1_battery

0x8af4,	// (0x00045456) level_2_battery

0x8b07,	// (0x00045469) level_3_battery

0x8b1a,	// (0x0004547c) level_4_battery

0x8b2d,	// (0x0004548f) level_5_battery

0x8b40,	// (0x000454a2) level_6_battery

0x8b53,	// (0x000454b5) level_7_battery

0x8b7e,	// (0x000454e0) list_menu_pane_ParamLimits

0x8b7e,	// (0x000454e0) list_menu_pane

0x8b94,	// (0x000454f6) scroll_pane_cp25_ParamLimits

0x8b94,	// (0x000454f6) scroll_pane_cp25

0x8bad,	// (0x0004550f) list_double2_graphic_pane_cp2_ParamLimits

0x8bad,	// (0x0004550f) list_double2_graphic_pane_cp2

0x8bad,	// (0x0004550f) list_double2_large_graphic_pane_cp2_ParamLimits

0x8bad,	// (0x0004550f) list_double2_large_graphic_pane_cp2

0x8bad,	// (0x0004550f) list_double2_pane_cp2_ParamLimits

0x8bad,	// (0x0004550f) list_double2_pane_cp2

0x8bad,	// (0x0004550f) list_double_graphic_pane_cp2_ParamLimits

0x8bad,	// (0x0004550f) list_double_graphic_pane_cp2

0x8bad,	// (0x0004550f) list_double_large_graphic_pane_cp2_ParamLimits

0x8bad,	// (0x0004550f) list_double_large_graphic_pane_cp2

0x8bad,	// (0x0004550f) list_double_number_pane_cp2_ParamLimits

0x8bad,	// (0x0004550f) list_double_number_pane_cp2

0x8bad,	// (0x0004550f) list_double_pane_cp2_ParamLimits

0x8bad,	// (0x0004550f) list_double_pane_cp2

0x8bd1,	// (0x00045533) list_single_2graphic_pane_cp2_ParamLimits

0x8bd1,	// (0x00045533) list_single_2graphic_pane_cp2

0x8bd1,	// (0x00045533) list_single_graphic_heading_pane_cp2_ParamLimits

0x8bd1,	// (0x00045533) list_single_graphic_heading_pane_cp2

0x8bd1,	// (0x00045533) list_single_graphic_pane_cp2_ParamLimits

0x8bd1,	// (0x00045533) list_single_graphic_pane_cp2

0x8bd1,	// (0x00045533) list_single_heading_pane_cp2_ParamLimits

0x8bd1,	// (0x00045533) list_single_heading_pane_cp2

0x8bea,	// (0x0004554c) list_single_large_graphic_pane_cp2_ParamLimits

0x8bea,	// (0x0004554c) list_single_large_graphic_pane_cp2

0x8bd1,	// (0x00045533) list_single_number_heading_pane_cp2_ParamLimits

0x8bd1,	// (0x00045533) list_single_number_heading_pane_cp2

0x8bd1,	// (0x00045533) list_single_number_pane_cp2_ParamLimits

0x8bd1,	// (0x00045533) list_single_number_pane_cp2

0x8bfb,	// (0x0004555d) list_single_pane_cp2_ParamLimits

0x8bfb,	// (0x0004555d) list_single_pane_cp2

0x8c7f,	// (0x000455e1) bg_popup_sub_pane_cp22

0x5b30,	// (0x00042492) popup_side_volume_key_window_g1

0x5b5a,	// (0x000424bc) popup_side_volume_key_window_t1

0x5b76,	// (0x000424d8) volume_small_pane_cp1

0x7ecf,	// (0x00044831) bg_popup_sub_pane_cp24_ParamLimits

0x7ecf,	// (0x00044831) bg_popup_sub_pane_cp24

0x8c95,	// (0x000455f7) fep_china_uni_candidate_pane_ParamLimits

0x8c95,	// (0x000455f7) fep_china_uni_candidate_pane

0x8ca9,	// (0x0004560b) fep_china_uni_entry_pane

0x8cb9,	// (0x0004561b) popup_fep_china_uni_window_g1

0x8cd5,	// (0x00045637) fep_china_uni_entry_pane_g1

0x8cdd,	// (0x0004563f) fep_china_uni_entry_pane_g2

0x0001,

0xf702,	// (0x0004c064) fep_china_uni_entry_pane_g

0x8ce5,	// (0x00045647) fep_entry_item_pane

0x8cfb,	// (0x0004565d) fep_candidate_item_pane

0x8d03,	// (0x00045665) fep_china_uni_candidate_pane_g1

0x8d0b,	// (0x0004566d) fep_china_uni_candidate_pane_g2

0x8d13,	// (0x00045675) fep_china_uni_candidate_pane_g3

0x8d1b,	// (0x0004567d) fep_china_uni_candidate_pane_g4

0x0003,

0xf707,	// (0x0004c069) fep_china_uni_candidate_pane_g

0x25fe,	// (0x0003ef60) fep_entry_item_pane_g1

0x8d23,	// (0x00045685) fep_entry_item_pane_t1_ParamLimits

0x8d23,	// (0x00045685) fep_entry_item_pane_t1

0x8d39,	// (0x0004569b) fep_candidate_item_pane_t1_ParamLimits

0x8d39,	// (0x0004569b) fep_candidate_item_pane_t1

0x8d4e,	// (0x000456b0) fep_candidate_item_pane_t2_ParamLimits

0x8d4e,	// (0x000456b0) fep_candidate_item_pane_t2

0x0001,

0xf710,	// (0x0004c072) fep_candidate_item_pane_t_ParamLimits

0xf710,	// (0x0004c072) fep_candidate_item_pane_t

0x7c54,	// (0x000445b6) list_highlight_pane_cp31_ParamLimits

0x7c54,	// (0x000445b6) list_highlight_pane_cp31

0x8d60,	// (0x000456c2) level_1_signal_lsc

0x8d69,	// (0x000456cb) level_2_signal_lsc

0x8d72,	// (0x000456d4) level_3_signal_lsc

0x8d7b,	// (0x000456dd) level_4_signal_lsc

0x8d84,	// (0x000456e6) level_5_signal_lsc

0x8d8d,	// (0x000456ef) level_6_signal_lsc

0x8d96,	// (0x000456f8) level_7_signal_lsc

0x8d96,	// (0x000456f8) level_1_battery_lsc

0x8d9f,	// (0x00045701) level_2_battery_lsc

0x8da8,	// (0x0004570a) level_3_battery_lsc

0x8db1,	// (0x00045713) level_4_battery_lsc

0x8dba,	// (0x0004571c) level_5_battery_lsc

0x8dc3,	// (0x00045725) level_6_battery_lsc

0x8d60,	// (0x000456c2) level_7_battery_lsc

0x8dcc,	// (0x0004572e) scroll_handle_focus_pane_g1

0x8dd5,	// (0x00045737) scroll_handle_focus_pane_g2

0x8dde,	// (0x00045740) scroll_handle_focus_pane_g3

0x0002,

0xf715,	// (0x0004c077) scroll_handle_focus_pane_g

0x4bfc,	// (0x0004155e) list_single_2graphic_pane_g1_ParamLimits

0x4bfc,	// (0x0004155e) list_single_2graphic_pane_g1

0x586a,	// (0x000421cc) list_single_2graphic_pane_g2_ParamLimits

0x586a,	// (0x000421cc) list_single_2graphic_pane_g2

0x584c,	// (0x000421ae) list_single_2graphic_pane_g3_ParamLimits

0x584c,	// (0x000421ae) list_single_2graphic_pane_g3

0x4c08,	// (0x0004156a) list_single_2graphic_pane_g4_ParamLimits

0x4c08,	// (0x0004156a) list_single_2graphic_pane_g4

0x0003,

0xf71c,	// (0x0004c07e) list_single_2graphic_pane_g_ParamLimits

0xf71c,	// (0x0004c07e) list_single_2graphic_pane_g

0x4c14,	// (0x00041576) list_single_2graphic_pane_t1_ParamLimits

0x4c14,	// (0x00041576) list_single_2graphic_pane_t1

0x5b7e,	// (0x000424e0) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5b7e,	// (0x000424e0) list_double2_graphic_large_graphic_pane_g1

0x4781,	// (0x000410e3) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4781,	// (0x000410e3) list_double2_graphic_large_graphic_pane_g2

0x58c0,	// (0x00042222) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x58c0,	// (0x00042222) list_double2_graphic_large_graphic_pane_g3

0x5b8e,	// (0x000424f0) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5b8e,	// (0x000424f0) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf725,	// (0x0004c087) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf725,	// (0x0004c087) list_double2_graphic_large_graphic_pane_g

0x4c42,	// (0x000415a4) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x4c42,	// (0x000415a4) list_double2_graphic_large_graphic_pane_t1

0x4c58,	// (0x000415ba) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x4c58,	// (0x000415ba) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf72e,	// (0x0004c090) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf72e,	// (0x0004c090) list_double2_graphic_large_graphic_pane_t

0x8f29,	// (0x0004588b) popup_fast_swap_window_ParamLimits

0x8f29,	// (0x0004588b) popup_fast_swap_window

0x8f45,	// (0x000458a7) popup_side_volume_key_window

0x8f61,	// (0x000458c3) stacon_top_pane

0x8f6b,	// (0x000458cd) status_pane_ParamLimits

0x8f6b,	// (0x000458cd) status_pane

0x25f4,	// (0x0003ef56) status_small_pane

0x7b74,	// (0x000444d6) control_pane

0x7b74,	// (0x000444d6) stacon_bottom_pane

0x84d0,	// (0x00044e32) scroll_pane_cp121

0x84c7,	// (0x00044e29) set_content_pane

0x8de7,	// (0x00045749) bg_active_tab_pane_g1_cp1

0x8df0,	// (0x00045752) bg_active_tab_pane_g2_cp1

0x8df9,	// (0x0004575b) bg_active_tab_pane_g3_cp1

0x8de7,	// (0x00045749) bg_passive_tab_pane_g1_cp1

0x8df0,	// (0x00045752) bg_passive_tab_pane_g2_cp1

0x8df9,	// (0x0004575b) bg_passive_tab_pane_g3_cp1

0x8e02,	// (0x00045764) bg_active_tab_pane_g1_cp2

0x8df0,	// (0x00045752) bg_active_tab_pane_g2_cp2

0x8e0b,	// (0x0004576d) bg_active_tab_pane_g3_cp2

0x8e02,	// (0x00045764) bg_passive_tab_pane_g1_cp2

0x8df0,	// (0x00045752) bg_passive_tab_pane_g2_cp2

0x8e0b,	// (0x0004576d) bg_passive_tab_pane_g3_cp2

0x8e14,	// (0x00045776) bg_active_tab_pane_g1_cp3

0x8df0,	// (0x00045752) bg_active_tab_pane_g2_cp3

0x8e1d,	// (0x0004577f) bg_active_tab_pane_g3_cp3

0x8e14,	// (0x00045776) bg_passive_tab_pane_g1_cp3

0x8df0,	// (0x00045752) bg_passive_tab_pane_g2_cp3

0x8e1d,	// (0x0004577f) bg_passive_tab_pane_g3_cp3

0x8e26,	// (0x00045788) bg_active_tab_pane_g1_cp4

0x8df0,	// (0x00045752) bg_active_tab_pane_g2_cp4

0x8e31,	// (0x00045793) bg_active_tab_pane_g3_cp4

0x8e26,	// (0x00045788) bg_passive_tab_pane_g1_cp4

0x8df0,	// (0x00045752) bg_passive_tab_pane_g2_cp4

0x8e31,	// (0x00045793) bg_passive_tab_pane_g3_cp4

0x8e7a,	// (0x000457dc) bg_active_tab_pane_g1_cp5

0x8df0,	// (0x00045752) bg_active_tab_pane_g2_cp5

0x8e83,	// (0x000457e5) bg_active_tab_pane_g3_cp5

0x8e7a,	// (0x000457dc) bg_passive_tab_pane_g1_cp5

0x8df0,	// (0x00045752) bg_passive_tab_pane_g2_cp5

0x8e83,	// (0x000457e5) bg_passive_tab_pane_g3_cp5

0x8e8c,	// (0x000457ee) list_set_graphic_pane_ParamLimits

0x8e8c,	// (0x000457ee) list_set_graphic_pane

0x7b74,	// (0x000444d6) bg_set_opt_pane_cp4

0x8eac,	// (0x0004580e) list_set_graphic_pane_g1_ParamLimits

0x8eac,	// (0x0004580e) list_set_graphic_pane_g1

0x8eb8,	// (0x0004581a) list_set_graphic_pane_g2_ParamLimits

0x8eb8,	// (0x0004581a) list_set_graphic_pane_g2

0x0001,

0xf733,	// (0x0004c095) list_set_graphic_pane_g_ParamLimits

0xf733,	// (0x0004c095) list_set_graphic_pane_g

0x0009,

0xfaa3,	// (0x0004c405) volume_small_pane_cp_g

0x8edc,	// (0x0004583e) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8edc,	// (0x0004583e) list_double2_large_graphic_pane_g1_cp2

0x8ee8,	// (0x0004584a) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8ee8,	// (0x0004584a) list_double2_large_graphic_pane_g2_cp2

0x8ef9,	// (0x0004585b) list_double2_large_graphic_pane_g3_cp2

0x8f01,	// (0x00045863) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8f01,	// (0x00045863) list_double2_large_graphic_pane_t1_cp2

0x8f17,	// (0x00045879) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8f17,	// (0x00045879) list_double2_large_graphic_pane_t2_cp2

0xaae9,	// (0x0004744b) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xaae9,	// (0x0004744b) list_double_large_graphic_pane_g1_cp2

0xaafa,	// (0x0004745c) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xaafa,	// (0x0004745c) list_double_large_graphic_pane_g2_cp2

0x9087,	// (0x000459e9) list_double_large_graphic_pane_g3_cp2

0xab0b,	// (0x0004746d) list_double_large_graphic_pane_g4_cp

0xab13,	// (0x00047475) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xab13,	// (0x00047475) list_double_large_graphic_pane_t1_cp2

0xab2a,	// (0x0004748c) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xab2a,	// (0x0004748c) list_double_large_graphic_pane_t2_cp2

0x8f79,	// (0x000458db) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8f79,	// (0x000458db) list_double2_graphic_pane_g1_cp2

0x8f87,	// (0x000458e9) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8f87,	// (0x000458e9) list_double2_graphic_pane_g2_cp2

0x8f98,	// (0x000458fa) list_double2_graphic_pane_g3_cp2

0x8fa2,	// (0x00045904) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8fa2,	// (0x00045904) list_double2_graphic_pane_t1_cp2

0x8fb8,	// (0x0004591a) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8fb8,	// (0x0004591a) list_double2_graphic_pane_t2_cp2

0x8fca,	// (0x0004592c) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8fca,	// (0x0004592c) list_single_number_heading_pane_g1_cp2

0x8fd6,	// (0x00045938) list_single_number_heading_pane_g2_cp2

0x8fde,	// (0x00045940) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8fde,	// (0x00045940) list_single_number_heading_pane_t1_cp2

0x8ff4,	// (0x00045956) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8ff4,	// (0x00045956) list_single_number_heading_pane_t2_cp2

0x9006,	// (0x00045968) list_single_number_heading_pane_t3_cp2_ParamLimits

0x9006,	// (0x00045968) list_single_number_heading_pane_t3_cp2

0x8fca,	// (0x0004592c) list_single_heading_pane_g1_cp2_ParamLimits

0x8fca,	// (0x0004592c) list_single_heading_pane_g1_cp2

0x8fd6,	// (0x00045938) list_single_heading_pane_g2_cp2

0x8fde,	// (0x00045940) list_single_heading_pane_t1_cp2_ParamLimits

0x8fde,	// (0x00045940) list_single_heading_pane_t1_cp2

0xa8f1,	// (0x00047253) list_single_heading_pane_t2_cp2_ParamLimits

0xa8f1,	// (0x00047253) list_single_heading_pane_t2_cp2

0xa839,	// (0x0004719b) list_double_graphic_pane_g1_cp2_ParamLimits

0xa839,	// (0x0004719b) list_double_graphic_pane_g1_cp2

0xa845,	// (0x000471a7) list_double_graphic_pane_g2_cp2_ParamLimits

0xa845,	// (0x000471a7) list_double_graphic_pane_g2_cp2

0xa854,	// (0x000471b6) list_double_graphic_pane_g3_cp2

0xa85c,	// (0x000471be) list_double_graphic_pane_t1_cp2_ParamLimits

0xa85c,	// (0x000471be) list_double_graphic_pane_t1_cp2

0xa872,	// (0x000471d4) list_double_graphic_pane_t2_cp2_ParamLimits

0xa872,	// (0x000471d4) list_double_graphic_pane_t2_cp2

0x907b,	// (0x000459dd) list_double_number_pane_g1_cp2_ParamLimits

0x907b,	// (0x000459dd) list_double_number_pane_g1_cp2

0x9087,	// (0x000459e9) list_double_number_pane_g2_cp2

0xa7fd,	// (0x0004715f) list_double_number_pane_t1_cp2_ParamLimits

0xa7fd,	// (0x0004715f) list_double_number_pane_t1_cp2

0xa811,	// (0x00047173) list_double_number_pane_t2_cp2_ParamLimits

0xa811,	// (0x00047173) list_double_number_pane_t2_cp2

0xa827,	// (0x00047189) list_double_number_pane_t3_cp2_ParamLimits

0xa827,	// (0x00047189) list_double_number_pane_t3_cp2

0xa6e6,	// (0x00047048) list_single_graphic_pane_g1_cp2_ParamLimits

0xa6e6,	// (0x00047048) list_single_graphic_pane_g1_cp2

0x90e8,	// (0x00045a4a) list_single_graphic_pane_g2_cp2_ParamLimits

0x90e8,	// (0x00045a4a) list_single_graphic_pane_g2_cp2

0x90f4,	// (0x00045a56) list_single_graphic_pane_g3_cp2

0xa6bc,	// (0x0004701e) list_single_graphic_pane_t1_cp2_ParamLimits

0xa6bc,	// (0x0004701e) list_single_graphic_pane_t1_cp2

0x90e8,	// (0x00045a4a) list_single_number_pane_g1_cp2_ParamLimits

0x90e8,	// (0x00045a4a) list_single_number_pane_g1_cp2

0x90f4,	// (0x00045a56) list_single_number_pane_g2_cp2

0xa6bc,	// (0x0004701e) list_single_number_pane_t1_cp2_ParamLimits

0xa6bc,	// (0x0004701e) list_single_number_pane_t1_cp2

0xa6d2,	// (0x00047034) list_single_number_pane_t2_cp2_ParamLimits

0xa6d2,	// (0x00047034) list_single_number_pane_t2_cp2

0x8ee8,	// (0x0004584a) list_double2_pane_g1_cp2_ParamLimits

0x8ee8,	// (0x0004584a) list_double2_pane_g1_cp2

0x8ef9,	// (0x0004585b) list_double2_pane_g2_cp2

0x9053,	// (0x000459b5) list_double2_pane_t1_cp2_ParamLimits

0x9053,	// (0x000459b5) list_double2_pane_t1_cp2

0x9069,	// (0x000459cb) list_double2_pane_t2_cp2_ParamLimits

0x9069,	// (0x000459cb) list_double2_pane_t2_cp2

0x907b,	// (0x000459dd) list_double_pane_g1_cp2_ParamLimits

0x907b,	// (0x000459dd) list_double_pane_g1_cp2

0x9087,	// (0x000459e9) list_double_pane_g2_cp2

0x908f,	// (0x000459f1) list_double_pane_t1_cp2_ParamLimits

0x908f,	// (0x000459f1) list_double_pane_t1_cp2

0x90a5,	// (0x00045a07) list_double_pane_t2_cp2_ParamLimits

0x90a5,	// (0x00045a07) list_double_pane_t2_cp2

0x90d8,	// (0x00045a3a) list_single_pane_cp2_g3

0x90e8,	// (0x00045a4a) list_single_pane_g1_cp2_ParamLimits

0x90e8,	// (0x00045a4a) list_single_pane_g1_cp2

0x90f4,	// (0x00045a56) list_single_pane_g2_cp2

0x90fc,	// (0x00045a5e) list_single_pane_t1_cp2_ParamLimits

0x90fc,	// (0x00045a5e) list_single_pane_t1_cp2

0x9114,	// (0x00045a76) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9114,	// (0x00045a76) list_single_large_graphic_pane_g1_cp2

0x8cef,	// (0x00045651) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8cef,	// (0x00045651) list_single_large_graphic_pane_g2_cp2

0x9120,	// (0x00045a82) list_single_large_graphic_pane_g3_cp2

0x9128,	// (0x00045a8a) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x9128,	// (0x00045a8a) list_single_large_graphic_pane_g4_cp1

0x9142,	// (0x00045aa4) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x9142,	// (0x00045aa4) list_single_large_graphic_pane_t1_cp2

0xa688,	// (0x00046fea) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa688,	// (0x00046fea) list_single_graphic_heading_pane_g1_cp2

0xa655,	// (0x00046fb7) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa655,	// (0x00046fb7) list_single_graphic_heading_pane_g4_cp2

0x90f4,	// (0x00045a56) list_single_graphic_heading_pane_g5_cp2

0xa694,	// (0x00046ff6) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa694,	// (0x00046ff6) list_single_graphic_heading_pane_t1_cp2

0xa6aa,	// (0x0004700c) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa6aa,	// (0x0004700c) list_single_graphic_heading_pane_t2_cp2

0xa649,	// (0x00046fab) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa649,	// (0x00046fab) list_single_2graphic_pane_g1_cp2

0xa655,	// (0x00046fb7) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa655,	// (0x00046fb7) list_single_2graphic_pane_g2_cp2

0x90f4,	// (0x00045a56) list_single_2graphic_pane_g3_cp2

0xa666,	// (0x00046fc8) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa666,	// (0x00046fc8) list_single_2graphic_pane_g4_cp2

0xa672,	// (0x00046fd4) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa672,	// (0x00046fd4) list_single_2graphic_pane_t1_cp2

0x25fe,	// (0x0003ef60) list_highlight_pane_g10_cp1

0xa221,	// (0x00046b83) list_highlight_pane_g1_cp1

0xa229,	// (0x00046b8b) list_highlight_pane_g2_cp1

0xa231,	// (0x00046b93) list_highlight_pane_g3_cp1

0xa239,	// (0x00046b9b) list_highlight_pane_g4_cp1

0xa241,	// (0x00046ba3) list_highlight_pane_g5_cp1

0xa249,	// (0x00046bab) list_highlight_pane_g6_cp1

0xa251,	// (0x00046bb3) list_highlight_pane_g7_cp1

0xa259,	// (0x00046bbb) list_highlight_pane_g8_cp1

0xa261,	// (0x00046bc3) list_highlight_pane_g9_cp1

0xa141,	// (0x00046aa3) form_field_slider_pane_t3

0xa14f,	// (0x00046ab1) form_field_slider_pane_t4

0xa15d,	// (0x00046abf) slider_form_pane_ParamLimits

0xa15d,	// (0x00046abf) slider_form_pane

0x7b74,	// (0x000444d6) control_abbreviations

0x7b74,	// (0x000444d6) control_conventions

0x7b74,	// (0x000444d6) control_definitions

0x7b74,	// (0x000444d6) format_table_attribute

0xa93b,	// (0x0004729d) bg_popup_preview_window_pane_g9

0x7b74,	// (0x000444d6) format_table_data2

0x7b74,	// (0x000444d6) format_table_data3

0x7b74,	// (0x000444d6) format_table_data_example

0x0008,

0x7b74,	// (0x000444d6) intro_purpose

0xf8ca,	// (0x0004c22c) bg_popup_preview_window_pane_g

0x7b74,	// (0x000444d6) texts_category

0x7b74,	// (0x000444d6) texts_graphics

0x9158,	// (0x00045aba) text_digital

0x9167,	// (0x00045ac9) text_primary

0x9176,	// (0x00045ad8) text_primary_small

0x9185,	// (0x00045ae7) text_secondary

0x9194,	// (0x00045af6) text_title

0xb068,	// (0x000479ca) bg_passive_tab_pane_g1_cp3_srt

0x8df0,	// (0x00045752) bg_passive_tab_pane_g2_cp3_srt

0xb071,	// (0x000479d3) bg_passive_tab_pane_g3_cp3_srt

0x7c54,	// (0x000445b6) bg_active_tab_pane_cp3_srt_ParamLimits

0x7c54,	// (0x000445b6) bg_active_tab_pane_cp3_srt

0xb07a,	// (0x000479dc) tabs_4_active_pane_srt_g1

0xb082,	// (0x000479e4) tabs_4_active_pane_srt_t1_ParamLimits

0xb082,	// (0x000479e4) tabs_4_active_pane_srt_t1

0xb068,	// (0x000479ca) bg_active_tab_pane_g1_cp3_copy1

0x8df0,	// (0x00045752) bg_active_tab_pane_g2_cp3_copy1

0xb071,	// (0x000479d3) bg_active_tab_pane_g3_cp3_copy1

0x7c54,	// (0x000445b6) tabs_2_long_active_pane_srt_ParamLimits

0x7c54,	// (0x000445b6) tabs_2_long_active_pane_srt

0x7c54,	// (0x000445b6) tabs_2_long_passive_pane_srt_ParamLimits

0x7c54,	// (0x000445b6) tabs_2_long_passive_pane_srt

0x86d5,	// (0x00045037) bg_passive_tab_pane_cp4_srt_ParamLimits

0x86d5,	// (0x00045037) bg_passive_tab_pane_cp4_srt

0xad69,	// (0x000476cb) bg_passive_tab_pane_g1_cp4_srt

0x8df0,	// (0x00045752) bg_passive_tab_pane_g2_cp4_srt

0xad72,	// (0x000476d4) bg_passive_tab_pane_g3_cp4_srt

0x86b4,	// (0x00045016) bg_active_tab_pane_cp4_srt_ParamLimits

0x86b4,	// (0x00045016) bg_active_tab_pane_cp4_srt

0xad7b,	// (0x000476dd) tabs_2_long_active_pane_srt_t1_ParamLimits

0xad7b,	// (0x000476dd) tabs_2_long_active_pane_srt_t1

0xad69,	// (0x000476cb) bg_active_tab_pane_g1_cp4_srt

0x8df0,	// (0x00045752) bg_active_tab_pane_g2_cp4_srt

0xad72,	// (0x000476d4) bg_active_tab_pane_g3_cp4_srt

0x7ecf,	// (0x00044831) tabs_3_long_active_pane_srt_ParamLimits

0x7ecf,	// (0x00044831) tabs_3_long_active_pane_srt

0x7ecf,	// (0x00044831) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7ecf,	// (0x00044831) tabs_3_long_passive_pane_cp_srt

0x7ecf,	// (0x00044831) tabs_3_long_passive_pane_srt_ParamLimits

0x7ecf,	// (0x00044831) tabs_3_long_passive_pane_srt

0x86d5,	// (0x00045037) bg_passive_tab_pane_cp5_srt_ParamLimits

0x86d5,	// (0x00045037) bg_passive_tab_pane_cp5_srt

0x8e7a,	// (0x000457dc) bg_passive_tab_pane_g1_cp5_srt

0x8df0,	// (0x00045752) bg_passive_tab_pane_g2_cp5_srt

0x8e83,	// (0x000457e5) bg_passive_tab_pane_g3_cp5_srt

0x86b4,	// (0x00045016) bg_active_tab_pane_cp5_srt_ParamLimits

0x86b4,	// (0x00045016) bg_active_tab_pane_cp5_srt

0xad57,	// (0x000476b9) tabs_3_long_active_pane_srt_t1_ParamLimits

0xad57,	// (0x000476b9) tabs_3_long_active_pane_srt_t1

0x8e7a,	// (0x000457dc) bg_active_tab_pane_g1_cp5_srt

0x8df0,	// (0x00045752) bg_active_tab_pane_g2_cp5_srt

0x8e83,	// (0x000457e5) bg_active_tab_pane_g3_cp5_srt

0xad49,	// (0x000476ab) navi_text_pane_srt_t1

0xad41,	// (0x000476a3) navi_icon_pane_srt_g1

0x9369,	// (0x00045ccb) midp_editing_number_pane_srt

0x91a3,	// (0x00045b05) midp_ticker_pane_srt

0x9371,	// (0x00045cd3) midp_ticker_pane_srt_g1

0x9379,	// (0x00045cdb) midp_ticker_pane_srt_g2

0x0001,

0xf752,	// (0x0004c0b4) midp_ticker_pane_srt_g

0x9381,	// (0x00045ce3) midp_ticker_pane_srt_t1

0xad32,	// (0x00047694) midp_editing_number_pane_t1_copy1

0x91ab,	// (0x00045b0d) listscroll_midp_pane

0x91ab,	// (0x00045b0d) midp_form_pane

0x921b,	// (0x00045b7d) midp_info_popup_window_ParamLimits

0x921b,	// (0x00045b7d) midp_info_popup_window

0x8600,	// (0x00044f62) bg_popup_sub_pane_cp50_ParamLimits

0x8600,	// (0x00044f62) bg_popup_sub_pane_cp50

0x9e45,	// (0x000467a7) listscroll_midp_info_pane_ParamLimits

0x9e45,	// (0x000467a7) listscroll_midp_info_pane

0x9e25,	// (0x00046787) listscroll_form_midp_pane_ParamLimits

0x9e25,	// (0x00046787) listscroll_form_midp_pane

0x9e31,	// (0x00046793) scroll_bar_cp050

0x9e05,	// (0x00046767) list_midp_pane

0xbae3,	// (0x00048445) signal_pane_g2_cp

0x9d3f,	// (0x000466a1) listscroll_midp_info_pane_t1_ParamLimits

0x9d3f,	// (0x000466a1) listscroll_midp_info_pane_t1

0x9d57,	// (0x000466b9) listscroll_midp_info_pane_t2_ParamLimits

0x9d57,	// (0x000466b9) listscroll_midp_info_pane_t2

0x9d95,	// (0x000466f7) listscroll_midp_info_pane_t3_ParamLimits

0x9d95,	// (0x000466f7) listscroll_midp_info_pane_t3

0x9dcf,	// (0x00046731) listscroll_midp_info_pane_t4_ParamLimits

0x9dcf,	// (0x00046731) listscroll_midp_info_pane_t4

0x0003,

0xf805,	// (0x0004c167) listscroll_midp_info_pane_t_ParamLimits

0xf805,	// (0x0004c167) listscroll_midp_info_pane_t

0x8661,	// (0x00044fc3) scroll_pane_cp21

0x9cdd,	// (0x0004663f) form_midp_field_choice_group_pane

0x9ce6,	// (0x00046648) form_midp_field_text_pane

0x9d25,	// (0x00046687) form_midp_field_time_pane

0x9d2d,	// (0x0004668f) form_midp_gauge_slider_pane

0x9d36,	// (0x00046698) form_midp_gauge_wait_pane

0x7b74,	// (0x000444d6) form_midp_image_pane

0x4d9f,	// (0x00041701) list_single_midp_pane_ParamLimits

0x4d9f,	// (0x00041701) list_single_midp_pane

0x9c95,	// (0x000465f7) form_midp_field_text_pane_t1

0x9a65,	// (0x000463c7) input_focus_pane_cp050

0x9ccc,	// (0x0004662e) list_midp_form_text_pane

0x9c64,	// (0x000465c6) form_midp_field_choice_group_pane_t1

0x9c72,	// (0x000465d4) input_focus_pane_cp051

0x9c86,	// (0x000465e8) list_midp_choice_pane

0x7b74,	// (0x000444d6) status_idle_pane

0x9c48,	// (0x000465aa) form_midp_field_time_pane_t1

0x25fe,	// (0x0003ef60) wait_anim_pane_g2_copy1

0x9c56,	// (0x000465b8) form_midp_field_time_pane_t2

0x0001,

0x92c9,	// (0x00045c2b) aid_navinavi_width_2_pane

0xf800,	// (0x0004c162) form_midp_field_time_pane_t

0x7b74,	// (0x000444d6) input_focus_pane_cp052

0x7b74,	// (0x000444d6) bg_input_focus_pane_cp040

0x9c08,	// (0x0004656a) form_midp_gauge_slider_pane_t1

0x9c16,	// (0x00046578) form_midp_gauge_slider_pane_t2

0x9c24,	// (0x00046586) form_midp_gauge_slider_pane_t3

0x9c32,	// (0x00046594) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f7,	// (0x0004c159) form_midp_gauge_slider_pane_t

0x9c40,	// (0x000465a2) form_midp_slider_pane

0x7c54,	// (0x000445b6) bg_input_focus_pane_cp041_ParamLimits

0x7c54,	// (0x000445b6) bg_input_focus_pane_cp041

0x9bd5,	// (0x00046537) form_midp_gauge_wait_pane_t1_ParamLimits

0x9bd5,	// (0x00046537) form_midp_gauge_wait_pane_t1

0x9be7,	// (0x00046549) form_midp_gauge_wait_pane_t2_ParamLimits

0x9be7,	// (0x00046549) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f2,	// (0x0004c154) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f2,	// (0x0004c154) form_midp_gauge_wait_pane_t

0x9bf9,	// (0x0004655b) form_midp_wait_pane_ParamLimits

0x9bf9,	// (0x0004655b) form_midp_wait_pane

0x9b9f,	// (0x00046501) form_midp_image_pane_g1

0x9ba8,	// (0x0004650a) form_midp_image_pane_t1

0x9bb7,	// (0x00046519) form_midp_image_pane_t2

0x9bc6,	// (0x00046528) form_midp_image_pane_t3

0x0002,

0xf7eb,	// (0x0004c14d) form_midp_image_pane_t

0x9b96,	// (0x000464f8) list_single_midp_pane_g1

0x4d90,	// (0x000416f2) list_single_midp_pane_t1

0x9b6e,	// (0x000464d0) list_midp_form_item_pane_ParamLimits

0x9b6e,	// (0x000464d0) list_midp_form_item_pane

0x9271,	// (0x00045bd3) list_midp_form_item_pane_t1

0x9280,	// (0x00045be2) midp_ticker_pane_g1

0x928c,	// (0x00045bee) midp_ticker_pane_g2

0x0001,

0xf738,	// (0x0004c09a) midp_ticker_pane_g

0x9298,	// (0x00045bfa) midp_ticker_pane_t1

0xaf83,	// (0x000478e5) midp_editing_number_pane_t1

0xaf61,	// (0x000478c3) midp_editing_number_pane

0xaf70,	// (0x000478d2) midp_ticker_pane

0xad22,	// (0x00047684) ai_message_heading_pane

0x7b74,	// (0x000444d6) bg_popup_window_pane_cp14

0xad2a,	// (0x0004768c) listscroll_ai_message_pane

0xacac,	// (0x0004760e) ai_message_heading_pane_g1_ParamLimits

0xacac,	// (0x0004760e) ai_message_heading_pane_g1

0xacb8,	// (0x0004761a) ai_message_heading_pane_g2_ParamLimits

0xacb8,	// (0x0004761a) ai_message_heading_pane_g2

0xacc4,	// (0x00047626) ai_message_heading_pane_g3_ParamLimits

0xacc4,	// (0x00047626) ai_message_heading_pane_g3

0xacd0,	// (0x00047632) ai_message_heading_pane_g4_ParamLimits

0xacd0,	// (0x00047632) ai_message_heading_pane_g4

0x0003,

0xf92c,	// (0x0004c28e) ai_message_heading_pane_g_ParamLimits

0xf92c,	// (0x0004c28e) ai_message_heading_pane_g

0xacdc,	// (0x0004763e) ai_message_heading_pane_t1_ParamLimits

0xacdc,	// (0x0004763e) ai_message_heading_pane_t1

0xacf6,	// (0x00047658) ai_message_heading_pane_t2_ParamLimits

0xacf6,	// (0x00047658) ai_message_heading_pane_t2

0x0001,

0xf935,	// (0x0004c297) ai_message_heading_pane_t_ParamLimits

0xf935,	// (0x0004c297) ai_message_heading_pane_t

0xad08,	// (0x0004766a) bg_popup_heading_pane_cp1_ParamLimits

0xad08,	// (0x0004766a) bg_popup_heading_pane_cp1

0xac9a,	// (0x000475fc) list_ai_message_pane_ParamLimits

0xac9a,	// (0x000475fc) list_ai_message_pane

0x8661,	// (0x00044fc3) scroll_pane_cp10

0xac36,	// (0x00047598) list_ai_message_pane_g1

0xac3e,	// (0x000475a0) list_ai_message_pane_g2

0x0001,

0xf909,	// (0x0004c26b) list_ai_message_pane_g

0xac46,	// (0x000475a8) list_ai_message_pane_t1_ParamLimits

0xac46,	// (0x000475a8) list_ai_message_pane_t1

0xac5b,	// (0x000475bd) list_ai_message_pane_t2_ParamLimits

0xac5b,	// (0x000475bd) list_ai_message_pane_t2

0xac70,	// (0x000475d2) list_ai_message_pane_t3_ParamLimits

0xac70,	// (0x000475d2) list_ai_message_pane_t3

0xac85,	// (0x000475e7) list_ai_message_pane_t4_ParamLimits

0xac85,	// (0x000475e7) list_ai_message_pane_t4

0x0003,

0xf90e,	// (0x0004c270) list_ai_message_pane_t_ParamLimits

0xf90e,	// (0x0004c270) list_ai_message_pane_t

0xac21,	// (0x00047583) cell_ai_soft_ind_pane_ParamLimits

0xac21,	// (0x00047583) cell_ai_soft_ind_pane

0x92aa,	// (0x00045c0c) cell_ai_soft_ind_pane_g1_ParamLimits

0x92aa,	// (0x00045c0c) cell_ai_soft_ind_pane_g1

0x7b74,	// (0x000444d6) grid_highlight_cp1

0x92b7,	// (0x00045c19) text_secondary_cp56_ParamLimits

0x92b7,	// (0x00045c19) text_secondary_cp56

0xabf6,	// (0x00047558) example_general_pane_ParamLimits

0xabf6,	// (0x00047558) example_general_pane

0xac02,	// (0x00047564) example_parent_pane_g1_ParamLimits

0xac02,	// (0x00047564) example_parent_pane_g1

0xac0e,	// (0x00047570) example_parent_pane_t1_ParamLimits

0xac0e,	// (0x00047570) example_parent_pane_t1

0x6291,	// (0x00042bf3) popup_preview_text_window_ParamLimits

0x6291,	// (0x00042bf3) popup_preview_text_window

0x90e0,	// (0x00045a42) list_single_pane_cp2_g4

0x7fab,	// (0x0004490d) bg_popup_preview_window_pane_ParamLimits

0x7fab,	// (0x0004490d) bg_popup_preview_window_pane

0xa943,	// (0x000472a5) popup_preview_text_window_t1_ParamLimits

0xa943,	// (0x000472a5) popup_preview_text_window_t1

0xa961,	// (0x000472c3) popup_preview_text_window_t2_ParamLimits

0xa961,	// (0x000472c3) popup_preview_text_window_t2

0xa9aa,	// (0x0004730c) popup_preview_text_window_t3_ParamLimits

0xa9aa,	// (0x0004730c) popup_preview_text_window_t3

0xa9ef,	// (0x00047351) popup_preview_text_window_t4_ParamLimits

0xa9ef,	// (0x00047351) popup_preview_text_window_t4

0x0004,

0xf8dd,	// (0x0004c23f) popup_preview_text_window_t_ParamLimits

0xf8dd,	// (0x0004c23f) popup_preview_text_window_t

0xaa6d,	// (0x000473cf) scroll_pane_cp11

0x99f1,	// (0x00046353) bg_popup_preview_window_pane_g1

0xa903,	// (0x00047265) bg_popup_preview_window_pane_g2

0xa90b,	// (0x0004726d) bg_popup_preview_window_pane_g3

0xa913,	// (0x00047275) bg_popup_preview_window_pane_g4

0xa91b,	// (0x0004727d) bg_popup_preview_window_pane_g5

0xa923,	// (0x00047285) bg_popup_preview_window_pane_g6

0xa92b,	// (0x0004728d) bg_popup_preview_window_pane_g7

0xa933,	// (0x00047295) bg_popup_preview_window_pane_g8

0x53d8,	// (0x00041d3a) aid_popup_width_pane

0x626f,	// (0x00042bd1) popup_midp_note_alarm_window_ParamLimits

0x626f,	// (0x00042bd1) popup_midp_note_alarm_window

0x84e1,	// (0x00044e43) data_form_pane_ParamLimits

0x4a45,	// (0x000413a7) form_field_data_pane_g1

0x4a4f,	// (0x000413b1) form_field_data_pane_t1_ParamLimits

0x84ed,	// (0x00044e4f) input_focus_pane_ParamLimits

0x4a67,	// (0x000413c9) data_form_wide_pane_ParamLimits

0x4a78,	// (0x000413da) form_field_data_wide_pane_g1

0x4a84,	// (0x000413e6) form_field_data_wide_pane_t1_ParamLimits

0x8252,	// (0x00044bb4) input_focus_pane_cp6_ParamLimits

0x860e,	// (0x00044f70) input_popup_find_pane_g1_ParamLimits

0x860e,	// (0x00044f70) input_popup_find_pane_g1

0x59df,	// (0x00042341) aid_navi_side_left_pane

0x59f4,	// (0x00042356) aid_navi_side_right_pane

0xa31c,	// (0x00046c7e) bg_popup_window_pane_cp30_ParamLimits

0xa31c,	// (0x00046c7e) bg_popup_window_pane_cp30

0xa396,	// (0x00046cf8) popup_midp_note_alarm_window_g1_ParamLimits

0xa396,	// (0x00046cf8) popup_midp_note_alarm_window_g1

0xa3c6,	// (0x00046d28) popup_midp_note_alarm_window_t1_ParamLimits

0xa3c6,	// (0x00046d28) popup_midp_note_alarm_window_t1

0xa467,	// (0x00046dc9) popup_midp_note_alarm_window_t2_ParamLimits

0xa467,	// (0x00046dc9) popup_midp_note_alarm_window_t2

0xa515,	// (0x00046e77) popup_midp_note_alarm_window_t3_ParamLimits

0xa515,	// (0x00046e77) popup_midp_note_alarm_window_t3

0xa547,	// (0x00046ea9) popup_midp_note_alarm_window_t4_ParamLimits

0xa547,	// (0x00046ea9) popup_midp_note_alarm_window_t4

0xa56d,	// (0x00046ecf) popup_midp_note_alarm_window_t5_ParamLimits

0xa56d,	// (0x00046ecf) popup_midp_note_alarm_window_t5

0x000a,

0xf87a,	// (0x0004c1dc) popup_midp_note_alarm_window_t_ParamLimits

0xf87a,	// (0x0004c1dc) popup_midp_note_alarm_window_t

0xa619,	// (0x00046f7b) wait_bar_pane_cp1_ParamLimits

0xa619,	// (0x00046f7b) wait_bar_pane_cp1

0x7b74,	// (0x000444d6) wait_anim_pane_copy1

0x7b74,	// (0x000444d6) wait_border_pane_copy1

0xa002,	// (0x00046964) wait_border_pane_g1_copy1

0x4a9e,	// (0x00041400) form_field_popup_pane_g1

0x4aa6,	// (0x00041408) form_field_popup_pane_t1_ParamLimits

0x84ed,	// (0x00044e4f) input_focus_pane_cp7_ParamLimits

0x850f,	// (0x00044e71) list_form_pane_ParamLimits

0x4abe,	// (0x00041420) form_field_popup_wide_pane_g1

0x4ac6,	// (0x00041428) form_field_popup_wide_pane_t1_ParamLimits

0x84ed,	// (0x00044e4f) input_focus_pane_cp8_ParamLimits

0x851b,	// (0x00044e7d) list_form_wide_pane_ParamLimits

0xb10a,	// (0x00047a6c) aid_size_cell_graphic_pane

0x4b50,	// (0x000414b2) data_form_pane_t1_ParamLimits

0x4ddb,	// (0x0004173d) data_form_wide_pane_t1_ParamLimits

0x95b8,	// (0x00045f1a) bg_status_flat_pane

0x7bb4,	// (0x00044516) title_pane_t1_ParamLimits

0x7c1c,	// (0x0004457e) title_pane_t2_ParamLimits

0x7c42,	// (0x000445a4) title_pane_t3_ParamLimits

0xf532,	// (0x0004be94) title_pane_t_ParamLimits

0x8ae2,	// (0x00045444) level_1_signal_ParamLimits

0x8af4,	// (0x00045456) level_2_signal_ParamLimits

0x8b07,	// (0x00045469) level_3_signal_ParamLimits

0x8b1a,	// (0x0004547c) level_4_signal_ParamLimits

0x8b2d,	// (0x0004548f) level_5_signal_ParamLimits

0x8b40,	// (0x000454a2) level_6_signal_ParamLimits

0x8b53,	// (0x000454b5) level_7_signal_ParamLimits

0x8ae2,	// (0x00045444) level_1_battery_ParamLimits

0x8af4,	// (0x00045456) level_2_battery_ParamLimits

0x8b07,	// (0x00045469) level_3_battery_ParamLimits

0x8b1a,	// (0x0004547c) level_4_battery_ParamLimits

0x8b2d,	// (0x0004548f) level_5_battery_ParamLimits

0x8b40,	// (0x000454a2) level_6_battery_ParamLimits

0x8b53,	// (0x000454b5) level_7_battery_ParamLimits

0xa221,	// (0x00046b83) bg_status_flat_pane_g1

0xa229,	// (0x00046b8b) bg_status_flat_pane_g2

0xa231,	// (0x00046b93) bg_status_flat_pane_g3

0xa239,	// (0x00046b9b) bg_status_flat_pane_g4

0xa241,	// (0x00046ba3) bg_status_flat_pane_g5

0xa249,	// (0x00046bab) bg_status_flat_pane_g6

0xa251,	// (0x00046bb3) bg_status_flat_pane_g7

0x7c6a,	// (0x000445cc) tabs_3_active_pane_t1_ParamLimits

0x7c6a,	// (0x000445cc) tabs_3_passive_pane_t1_ParamLimits

0x7c84,	// (0x000445e6) tabs_4_active_pane_t1_ParamLimits

0x7c84,	// (0x000445e6) tabs_4_1_passive_pane_t1_ParamLimits

0x86a2,	// (0x00045004) tabs_2_active_pane_t1_ParamLimits

0x86a2,	// (0x00045004) tabs_2_passive_pane_t1_ParamLimits

0x86b4,	// (0x00045016) bg_active_tab_pane_cp4_ParamLimits

0x86c2,	// (0x00045024) tabs_2_long_active_pane_t1_ParamLimits

0x86d5,	// (0x00045037) bg_passive_tab_pane_cp4_ParamLimits

0x653e,	// (0x00042ea0) list_single_midp_graphic_pane_t1_ParamLimits

0x86b4,	// (0x00045016) bg_active_tab_pane_cp5_ParamLimits

0x86e1,	// (0x00045043) tabs_3_long_active_pane_t1_ParamLimits

0x86d5,	// (0x00045037) bg_passive_tab_pane_cp5_ParamLimits

0x653e,	// (0x00042ea0) list_single_midp_graphic_pane_t1

0x95b8,	// (0x00045f1a) bg_status_flat_pane_ParamLimits

0x9681,	// (0x00045fe3) indicator_pane_cp2_ParamLimits

0x9681,	// (0x00045fe3) indicator_pane_cp2

0x97ac,	// (0x0004610e) navi_pane_srt_ParamLimits

0x97ac,	// (0x0004610e) navi_pane_srt

0x97d0,	// (0x00046132) popup_clock_digital_analogue_window_cp1

0x7d31,	// (0x00044693) indicator_pane_t1

0x91a3,	// (0x00045b05) copy_highlight_pane

0x91a3,	// (0x00045b05) cursor_graphics_pane

0x91a3,	// (0x00045b05) graphic_within_text_pane

0x91a3,	// (0x00045b05) link_highlight_pane

0xaa30,	// (0x00047392) popup_preview_text_window_t5_ParamLimits

0xaa30,	// (0x00047392) popup_preview_text_window_t5

0x92d1,	// (0x00045c33) cursor_digital_pane

0x92d1,	// (0x00045c33) cursor_primary_pane

0x92e2,	// (0x00045c44) cursor_primary_small_pane

0x92ea,	// (0x00045c4c) cursor_secondary_pane

0x92f2,	// (0x00045c54) cursor_title_pane

0x92d1,	// (0x00045c33) link_highlight_digital_pane

0x92d9,	// (0x00045c3b) link_highlight_primary_pane

0x92e2,	// (0x00045c44) link_highlight_primary_small_pane

0x92ea,	// (0x00045c4c) link_highlight_secondary_pane

0x92f2,	// (0x00045c54) link_highlight_title_pane

0x92d1,	// (0x00045c33) copy_highlight_digital_pane

0x92d1,	// (0x00045c33) copy_highlight_primary_pane

0x92e2,	// (0x00045c44) copy_highlight_primary_small_pane

0x92ea,	// (0x00045c4c) copy_highlight_secondary_pane

0x92f2,	// (0x00045c54) copy_highlight_title_pane

0x92ea,	// (0x00045c4c) graphic_text_digital_pane

0xa2bf,	// (0x00046c21) graphic_text_primary_pane

0xa2c8,	// (0x00046c2a) graphic_text_primary_small_pane

0x92e2,	// (0x00045c44) graphic_text_secondary_pane

0x92d1,	// (0x00045c33) graphic_text_title_pane

0x92fa,	// (0x00045c5c) cursor_primary_pane_g1

0xa2b1,	// (0x00046c13) cursor_text_primary_t1

0xa299,	// (0x00046bfb) cursor_primary_small_pane_g1

0xa2a3,	// (0x00046c05) cursor_text_primary_small_t1

0xa281,	// (0x00046be3) cursor_primary_small_pane_g1_copy1

0xa28b,	// (0x00046bed) cursor_text_primary_small_t1_copy1

0xa269,	// (0x00046bcb) cursor_text_title_t1

0xa277,	// (0x00046bd9) cursor_title_pane_g1

0x92fa,	// (0x00045c5c) cursor_digital_pane_g1

0x9304,	// (0x00045c66) cursor_text_digital_t1

0x9329,	// (0x00045c8b) link_highlight_primary_pane_g1

0xa212,	// (0x00046b74) link_highlight_primary_pane_t1

0x9312,	// (0x00045c74) link_highlight_primary_small_pane_g1

0x931a,	// (0x00045c7c) link_highlight_primary_small_pane_t1

0x9329,	// (0x00045c8b) link_highlight_secondary_pane_g1

0x9331,	// (0x00045c93) link_highlight_secondary_pane_t1

0xa186,	// (0x00046ae8) link_highlight_title_pane_g1

0xa18e,	// (0x00046af0) link_highlight_title_pane_t1

0xa16f,	// (0x00046ad1) link_highlight_digital_pane_g1

0xa177,	// (0x00046ad9) link_highlight_digital_pane_t1

0xa047,	// (0x000469a9) copy_highlight_primary_pane_g1

0xa04f,	// (0x000469b1) copy_highlight_primary_pane_t1

0xa021,	// (0x00046983) copy_highlight_primary_small_pane_g1

0xa038,	// (0x0004699a) copy_highlight_primary_small_pane_t1

0x9340,	// (0x00045ca2) copy_highlight_secondary_pane_g1

0x9348,	// (0x00045caa) copy_highlight_secondary_pane_t1

0xa021,	// (0x00046983) copy_highlight_title_pane_g1

0xa029,	// (0x0004698b) copy_highlight_title_pane_t1

0xa047,	// (0x000469a9) copy_highlight_digital_pane_g1

0xb2d8,	// (0x00047c3a) copy_highlight_digital_pane_t1

0xb22c,	// (0x00047b8e) graphic_text_primary_pane_g1

0xb2bc,	// (0x00047c1e) graphic_text_primary_pane_t1

0xb2ca,	// (0x00047c2c) graphic_text_primary_pane_t2

0x0001,

0xf9a9,	// (0x0004c30b) graphic_text_primary_pane_t

0xb298,	// (0x00047bfa) graphic_text_primary_small_pane_g1

0xb2a0,	// (0x00047c02) graphic_text_primary_small_pane_t1

0xb2ae,	// (0x00047c10) graphic_text_primary_small_pane_t2

0x0001,

0xf9a4,	// (0x0004c306) graphic_text_primary_small_pane_t

0xb274,	// (0x00047bd6) graphic_text_secondary_pane_g1

0xb27c,	// (0x00047bde) graphic_text_secondary_pane_t1

0xb28a,	// (0x00047bec) graphic_text_secondary_pane_t2

0x0001,

0xf99f,	// (0x0004c301) graphic_text_secondary_pane_t

0xb250,	// (0x00047bb2) graphic_text_title_pane_g1

0xb258,	// (0x00047bba) graphic_text_title_pane_t1

0xb266,	// (0x00047bc8) graphic_text_title_pane_t2

0x0001,

0xf99a,	// (0x0004c2fc) graphic_text_title_pane_t

0xb22c,	// (0x00047b8e) graphic_text_digital_pane_g1

0xb234,	// (0x00047b96) graphic_text_digital_pane_t1

0xb242,	// (0x00047ba4) graphic_text_digital_pane_t2

0x0001,

0xf995,	// (0x0004c2f7) graphic_text_digital_pane_t

0x7c54,	// (0x000445b6) navi_icon_pane_srt_ParamLimits

0x7c54,	// (0x000445b6) navi_icon_pane_srt

0x7b74,	// (0x000444d6) navi_midp_pane_srt

0x7b74,	// (0x000444d6) navi_navi_pane_srt

0x7c54,	// (0x000445b6) navi_text_pane_srt_ParamLimits

0x7c54,	// (0x000445b6) navi_text_pane_srt

0xb1f7,	// (0x00047b59) navi_navi_icon_text_pane_srt

0xb1ff,	// (0x00047b61) navi_navi_pane_srt_g1_ParamLimits

0xb1ff,	// (0x00047b61) navi_navi_pane_srt_g1

0xb211,	// (0x00047b73) navi_navi_pane_srt_g2_ParamLimits

0xb211,	// (0x00047b73) navi_navi_pane_srt_g2

0x0001,

0xf990,	// (0x0004c2f2) navi_navi_pane_srt_g_ParamLimits

0xf990,	// (0x0004c2f2) navi_navi_pane_srt_g

0xb223,	// (0x00047b85) navi_navi_tabs_pane_srt

0xb1f7,	// (0x00047b59) navi_navi_text_pane_srt

0xb1f7,	// (0x00047b59) navi_navi_volume_pane_srt

0xb1e8,	// (0x00047b4a) navi_navi_text_pane_srt_t1

0x6947,	// (0x000432a9) navi_navi_volume_pane_srt_g1

0x694f,	// (0x000432b1) volume_small_pane_srt_ParamLimits

0x694f,	// (0x000432b1) volume_small_pane_srt

0x5cdb,	// (0x0004263d) volume_small_pane_srt_g1_ParamLimits

0x5cdb,	// (0x0004263d) volume_small_pane_srt_g1

0x5ceb,	// (0x0004264d) volume_small_pane_srt_g2_ParamLimits

0x5ceb,	// (0x0004264d) volume_small_pane_srt_g2

0x5cfc,	// (0x0004265e) volume_small_pane_srt_g3_ParamLimits

0x5cfc,	// (0x0004265e) volume_small_pane_srt_g3

0x5d0d,	// (0x0004266f) volume_small_pane_srt_g4_ParamLimits

0x5d0d,	// (0x0004266f) volume_small_pane_srt_g4

0x5d1e,	// (0x00042680) volume_small_pane_srt_g5_ParamLimits

0x5d1e,	// (0x00042680) volume_small_pane_srt_g5

0x5d2f,	// (0x00042691) volume_small_pane_srt_g6_ParamLimits

0x5d2f,	// (0x00042691) volume_small_pane_srt_g6

0x5d40,	// (0x000426a2) volume_small_pane_srt_g7_ParamLimits

0x5d40,	// (0x000426a2) volume_small_pane_srt_g7

0x5d51,	// (0x000426b3) volume_small_pane_srt_g8_ParamLimits

0x5d51,	// (0x000426b3) volume_small_pane_srt_g8

0x5d62,	// (0x000426c4) volume_small_pane_srt_g9_ParamLimits

0x5d62,	// (0x000426c4) volume_small_pane_srt_g9

0x5d73,	// (0x000426d5) volume_small_pane_srt_g10_ParamLimits

0x5d73,	// (0x000426d5) volume_small_pane_srt_g10

0x0009,

0xf73d,	// (0x0004c09f) volume_small_pane_srt_g_ParamLimits

0xf73d,	// (0x0004c09f) volume_small_pane_srt_g

0x8054,	// (0x000449b6) query_popup_data_pane_cp2

0xb1ce,	// (0x00047b30) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb1ce,	// (0x00047b30) navi_navi_icon_text_pane_srt_t1

0xa2bf,	// (0x00046c21) navi_tabs_2_long_pane_srt

0xa2bf,	// (0x00046c21) navi_tabs_2_pane_srt

0xa2bf,	// (0x00046c21) navi_tabs_3_long_pane_srt

0xa2bf,	// (0x00046c21) navi_tabs_3_pane_srt

0xa2bf,	// (0x00046c21) navi_tabs_4_pane_srt

0x6927,	// (0x00043289) tabs_2_active_pane_srt_ParamLimits

0x6927,	// (0x00043289) tabs_2_active_pane_srt

0x6937,	// (0x00043299) tabs_2_passive_pane_srt_ParamLimits

0x6937,	// (0x00043299) tabs_2_passive_pane_srt

0x94c7,	// (0x00045e29) bg_passive_tab_pane_cp1_srt_ParamLimits

0x94c7,	// (0x00045e29) bg_passive_tab_pane_cp1_srt

0xb19a,	// (0x00047afc) bg_passive_tab_pane_g1_cp1_srt

0x8df0,	// (0x00045752) bg_passive_tab_pane_g2_cp1_srt

0xb1a3,	// (0x00047b05) bg_passive_tab_pane_g3_cp1_srt

0x7c54,	// (0x000445b6) bg_active_tab_pane_cp1_srt_ParamLimits

0x7c54,	// (0x000445b6) bg_active_tab_pane_cp1_srt

0xb1ac,	// (0x00047b0e) tabs_2_active_pane_srt_g1

0xb1b4,	// (0x00047b16) tabs_2_active_pane_srt_t1_ParamLimits

0xb1b4,	// (0x00047b16) tabs_2_active_pane_srt_t1

0xb19a,	// (0x00047afc) bg_active_tab_pane_g1_cp1_srt

0x8df0,	// (0x00045752) bg_active_tab_pane_g2_cp1_srt

0xb1a3,	// (0x00047b05) bg_active_tab_pane_g3_cp1_srt

0x68f4,	// (0x00043256) tabs_3_active_pane_srt_ParamLimits

0x68f4,	// (0x00043256) tabs_3_active_pane_srt

0x6905,	// (0x00043267) tabs_3_passive_pane_cp_srt_ParamLimits

0x6905,	// (0x00043267) tabs_3_passive_pane_cp_srt

0x6916,	// (0x00043278) tabs_3_passive_pane_srt_ParamLimits

0x6916,	// (0x00043278) tabs_3_passive_pane_srt

0x94c7,	// (0x00045e29) bg_passive_tab_pane_cp2_srt_ParamLimits

0x94c7,	// (0x00045e29) bg_passive_tab_pane_cp2_srt

0x9357,	// (0x00045cb9) bg_passive_tab_pane_g1_cp2_srt

0x8df0,	// (0x00045752) bg_passive_tab_pane_g2_cp2_srt

0x9360,	// (0x00045cc2) bg_passive_tab_pane_g3_cp2_srt

0x7c54,	// (0x000445b6) bg_active_tab_pane_cp2_srt_ParamLimits

0x7c54,	// (0x000445b6) bg_active_tab_pane_cp2_srt

0xb180,	// (0x00047ae2) tabs_3_active_pane_srt_g1

0xb188,	// (0x00047aea) tabs_3_active_pane_srt_t1_ParamLimits

0xb188,	// (0x00047aea) tabs_3_active_pane_srt_t1

0x9357,	// (0x00045cb9) bg_active_tab_pane_g1_cp2_srt

0x8df0,	// (0x00045752) bg_active_tab_pane_g2_cp2_srt

0x9360,	// (0x00045cc2) bg_active_tab_pane_g3_cp2_srt

0x68ac,	// (0x0004320e) tabs_4_active_pane_srt_ParamLimits

0x68ac,	// (0x0004320e) tabs_4_active_pane_srt

0x68be,	// (0x00043220) tabs_4_passive_pane_cp2_srt_ParamLimits

0x68be,	// (0x00043220) tabs_4_passive_pane_cp2_srt

0x5ee6,	// (0x00042848) aid_size_cell_toolbar

0x86d5,	// (0x00045037) main_idle_act_pane_ParamLimits

0x60a5,	// (0x00042a07) popup_large_graphic_colour_window_ParamLimits

0x640c,	// (0x00042d6e) popup_toolbar_window_ParamLimits

0x640c,	// (0x00042d6e) popup_toolbar_window

0xaf92,	// (0x000478f4) list_single_graphic_2heading_pane_ParamLimits

0xaf92,	// (0x000478f4) list_single_graphic_2heading_pane

0x8891,	// (0x000451f3) aid_size_cell_apps_grid_lsc_pane

0x88a3,	// (0x00045205) aid_size_cell_apps_grid_prt_pane

0x94c7,	// (0x00045e29) bg_wml_button_pane_cp1_ParamLimits

0x94c7,	// (0x00045e29) bg_wml_button_pane_cp1

0x9c95,	// (0x000465f7) form_midp_field_text_pane_t1_ParamLimits

0x9a65,	// (0x000463c7) input_focus_pane_cp050_ParamLimits

0x9ccc,	// (0x0004662e) list_midp_form_text_pane_ParamLimits

0x9c72,	// (0x000465d4) input_focus_pane_cp051_ParamLimits

0x9c86,	// (0x000465e8) list_midp_choice_pane_ParamLimits

0x9b1e,	// (0x00046480) list_single_2graphic_pane_cp3_ParamLimits

0x9b1e,	// (0x00046480) list_single_2graphic_pane_cp3

0x9b3f,	// (0x000464a1) list_single_midp_graphic_pane_ParamLimits

0x9b3f,	// (0x000464a1) list_single_midp_graphic_pane

0x4c7a,	// (0x000415dc) list_single_graphic_2heading_pane_g1_ParamLimits

0x4c7a,	// (0x000415dc) list_single_graphic_2heading_pane_g1

0x4c86,	// (0x000415e8) list_single_graphic_2heading_pane_g4_ParamLimits

0x4c86,	// (0x000415e8) list_single_graphic_2heading_pane_g4

0x4c92,	// (0x000415f4) list_single_graphic_2heading_pane_g5_ParamLimits

0x4c92,	// (0x000415f4) list_single_graphic_2heading_pane_g5

0x0002,

0xf790,	// (0x0004c0f2) list_single_graphic_2heading_pane_g_ParamLimits

0xf790,	// (0x0004c0f2) list_single_graphic_2heading_pane_g

0x4c9e,	// (0x00041600) list_single_graphic_2heading_pane_t1_ParamLimits

0x4c9e,	// (0x00041600) list_single_graphic_2heading_pane_t1

0x4cb2,	// (0x00041614) list_single_graphic_2heading_pane_t2_ParamLimits

0x4cb2,	// (0x00041614) list_single_graphic_2heading_pane_t2

0x4cce,	// (0x00041630) list_single_graphic_2heading_pane_t3_ParamLimits

0x4cce,	// (0x00041630) list_single_graphic_2heading_pane_t3

0x0002,

0xf797,	// (0x0004c0f9) list_single_graphic_2heading_pane_t_ParamLimits

0xf797,	// (0x0004c0f9) list_single_graphic_2heading_pane_t

0x992f,	// (0x00046291) bg_popup_sub_pane_cp2

0x9959,	// (0x000462bb) grid_toobar_pane

0x64b9,	// (0x00042e1b) cell_toolbar_pane_ParamLimits

0x64b9,	// (0x00042e1b) cell_toolbar_pane

0x9995,	// (0x000462f7) cell_toolbar_pane_g1_ParamLimits

0x9995,	// (0x000462f7) cell_toolbar_pane_g1

0x99a9,	// (0x0004630b) cell_toolbar_pane_g2_ParamLimits

0x99a9,	// (0x0004630b) cell_toolbar_pane_g2

0x0001,

0xf7a5,	// (0x0004c107) cell_toolbar_pane_g_ParamLimits

0xf7a5,	// (0x0004c107) cell_toolbar_pane_g

0x99cb,	// (0x0004632d) grid_highlight_pane_cp2_ParamLimits

0x99cb,	// (0x0004632d) grid_highlight_pane_cp2

0x99e5,	// (0x00046347) toolbar_button_pane

0x99f1,	// (0x00046353) toolbar_button_pane_g1

0x99f9,	// (0x0004635b) toolbar_button_pane_g2

0x9a01,	// (0x00046363) toolbar_button_pane_g3

0x9a09,	// (0x0004636b) toolbar_button_pane_g4

0x9a11,	// (0x00046373) toolbar_button_pane_g5

0x9a19,	// (0x0004637b) toolbar_button_pane_g6

0x9a21,	// (0x00046383) toolbar_button_pane_g7

0x9a29,	// (0x0004638b) toolbar_button_pane_g8

0x9a31,	// (0x00046393) toolbar_button_pane_g9

0x0009,

0xf7aa,	// (0x0004c10c) toolbar_button_pane_g

0x64f1,	// (0x00042e53) list_single_2graphic_pane_g1_cp3_ParamLimits

0x64f1,	// (0x00042e53) list_single_2graphic_pane_g1_cp3

0x64fd,	// (0x00042e5f) list_single_2graphic_pane_g2_cp3_ParamLimits

0x64fd,	// (0x00042e5f) list_single_2graphic_pane_g2_cp3

0x650e,	// (0x00042e70) list_single_2graphic_pane_g3_cp3

0x6516,	// (0x00042e78) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6516,	// (0x00042e78) list_single_2graphic_pane_g4_cp3

0x6522,	// (0x00042e84) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6522,	// (0x00042e84) list_single_2graphic_pane_t1_cp3

0xb012,	// (0x00047974) list_single_midp_graphic_pane_g2_ParamLimits

0xb012,	// (0x00047974) list_single_midp_graphic_pane_g2

0x4c6a,	// (0x000415cc) aid_zoom_text_primary

0x5eee,	// (0x00042850) aid_zoom_text_secondary

0x9411,	// (0x00045d73) status_small_pane_g7_ParamLimits

0x9411,	// (0x00045d73) status_small_pane_g7

0x9434,	// (0x00045d96) status_small_pane_t1_ParamLimits

0x7b8b,	// (0x000444ed) title_pane_g2

0x0003,

0xf529,	// (0x0004be8b) title_pane_g

0x80fc,	// (0x00044a5e) aid_size_cell_colour_1_pane_ParamLimits

0x80fc,	// (0x00044a5e) aid_size_cell_colour_1_pane

0x8110,	// (0x00044a72) aid_size_cell_colour_2_pane_ParamLimits

0x8110,	// (0x00044a72) aid_size_cell_colour_2_pane

0x8124,	// (0x00044a86) aid_size_cell_colour_3_pane_ParamLimits

0x8124,	// (0x00044a86) aid_size_cell_colour_3_pane

0x8138,	// (0x00044a9a) aid_size_cell_colour_4_pane_ParamLimits

0x8138,	// (0x00044a9a) aid_size_cell_colour_4_pane

0x591c,	// (0x0004227e) title_pane_stacon_g1_ParamLimits

0x591c,	// (0x0004227e) title_pane_stacon_g1

0xa0a6,	// (0x00046a08) popup_note_wait_window_g3_ParamLimits

0xa0a6,	// (0x00046a08) popup_note_wait_window_g3

0xa11c,	// (0x00046a7e) popup_note_wait_window_t5_ParamLimits

0xa11c,	// (0x00046a7e) popup_note_wait_window_t5

0x7b74,	// (0x000444d6) main_feb_china_hwr_fs_writing_pane

0x5f86,	// (0x000428e8) popup_feb_china_hwr_fs_window_ParamLimits

0x5f86,	// (0x000428e8) popup_feb_china_hwr_fs_window

0x656c,	// (0x00042ece) aid_size_cell_hwr_fs_ParamLimits

0x656c,	// (0x00042ece) aid_size_cell_hwr_fs

0x9a65,	// (0x000463c7) bg_popup_sub_pane_cp3_ParamLimits

0x9a65,	// (0x000463c7) bg_popup_sub_pane_cp3

0x6581,	// (0x00042ee3) grid_hwr_fs_pane_ParamLimits

0x6581,	// (0x00042ee3) grid_hwr_fs_pane

0x6599,	// (0x00042efb) linegrid_hwr_fs_pane_ParamLimits

0x6599,	// (0x00042efb) linegrid_hwr_fs_pane

0x65a9,	// (0x00042f0b) cell_hwr_fs_pane_ParamLimits

0x65a9,	// (0x00042f0b) cell_hwr_fs_pane

0x9a71,	// (0x000463d3) linegrid_hwr_fs_pane_g1_ParamLimits

0x9a71,	// (0x000463d3) linegrid_hwr_fs_pane_g1

0x9a7d,	// (0x000463df) linegrid_hwr_fs_pane_g2_ParamLimits

0x9a7d,	// (0x000463df) linegrid_hwr_fs_pane_g2

0x9a8f,	// (0x000463f1) linegrid_hwr_fs_pane_g3_ParamLimits

0x9a8f,	// (0x000463f1) linegrid_hwr_fs_pane_g3

0x65cb,	// (0x00042f2d) linegrid_hwr_fs_pane_g4_ParamLimits

0x65cb,	// (0x00042f2d) linegrid_hwr_fs_pane_g4

0x65e5,	// (0x00042f47) linegrid_hwr_fs_pane_g5_ParamLimits

0x65e5,	// (0x00042f47) linegrid_hwr_fs_pane_g5

0x0004,

0xf7d0,	// (0x0004c132) linegrid_hwr_fs_pane_g_ParamLimits

0xf7d0,	// (0x0004c132) linegrid_hwr_fs_pane_g

0x9a9b,	// (0x000463fd) cell_hwr_fs_pane_g1_ParamLimits

0x9a9b,	// (0x000463fd) cell_hwr_fs_pane_g1

0x9866,	// (0x000461c8) cell_hwr_fs_pane_g2_ParamLimits

0x9866,	// (0x000461c8) cell_hwr_fs_pane_g2

0x9ab1,	// (0x00046413) cell_hwr_fs_pane_g3_ParamLimits

0x9ab1,	// (0x00046413) cell_hwr_fs_pane_g3

0x9abe,	// (0x00046420) cell_hwr_fs_pane_g4_ParamLimits

0x9abe,	// (0x00046420) cell_hwr_fs_pane_g4

0x0003,

0xf7db,	// (0x0004c13d) cell_hwr_fs_pane_g_ParamLimits

0xf7db,	// (0x0004c13d) cell_hwr_fs_pane_g

0x65fb,	// (0x00042f5d) cell_hwr_fs_pane_t1

0x7b74,	// (0x000444d6) grid_highlight_pane_cp6

0x7b74,	// (0x000444d6) main_idle_act2_pane

0x8648,	// (0x00044faa) aid_inside_area_popup_secondary

0xa753,	// (0x000470b5) aid_inside_area_window_primary_ParamLimits

0xa753,	// (0x000470b5) aid_inside_area_window_primary

0xb2e7,	// (0x00047c49) ai2_news_ticker_pane

0xb2ef,	// (0x00047c51) aid_size_cell_ai1_link_ParamLimits

0xb2ef,	// (0x00047c51) aid_size_cell_ai1_link

0xb309,	// (0x00047c6b) popup_ai2_data_window_ParamLimits

0xb309,	// (0x00047c6b) popup_ai2_data_window

0xb31f,	// (0x00047c81) popup_ai2_link_window_ParamLimits

0xb31f,	// (0x00047c81) popup_ai2_link_window

0x9a65,	// (0x000463c7) bg_popup_sub_pane_cp4_ParamLimits

0x9a65,	// (0x000463c7) bg_popup_sub_pane_cp4

0xb333,	// (0x00047c95) grid_ai2_link_pane_ParamLimits

0xb333,	// (0x00047c95) grid_ai2_link_pane

0xb34a,	// (0x00047cac) popup_ai2_link_window_g1_ParamLimits

0xb34a,	// (0x00047cac) popup_ai2_link_window_g1

0xb356,	// (0x00047cb8) popup_ai2_link_window_g2_ParamLimits

0xb356,	// (0x00047cb8) popup_ai2_link_window_g2

0x0001,

0xf9ae,	// (0x0004c310) popup_ai2_link_window_g_ParamLimits

0xf9ae,	// (0x0004c310) popup_ai2_link_window_g

0xb365,	// (0x00047cc7) ai2_mp_button_pane

0xb36d,	// (0x00047ccf) ai2_mp_volume_pane

0x9c72,	// (0x000465d4) bg_popup_sub_pane_cp5_ParamLimits

0x9c72,	// (0x000465d4) bg_popup_sub_pane_cp5

0xb375,	// (0x00047cd7) heading_ai2_gene_pane_ParamLimits

0xb375,	// (0x00047cd7) heading_ai2_gene_pane

0xb381,	// (0x00047ce3) list_ai2_gene_pane_ParamLimits

0xb381,	// (0x00047ce3) list_ai2_gene_pane

0xb3c9,	// (0x00047d2b) cell_ai2_link_pane_ParamLimits

0xb3c9,	// (0x00047d2b) cell_ai2_link_pane

0xb3df,	// (0x00047d41) cell_ai2_link_pane_g1

0x7b74,	// (0x000444d6) grid_highlight_pane_cp7

0x6964,	// (0x000432c6) ai2_mp_volume_pane_g1

0xb4af,	// (0x00047e11) ai2_mp_volume_pane_g2

0xb424,	// (0x00047d86) list_ai2_gene_pane_t1

0xb4b7,	// (0x00047e19) ai2_mp_volume_pane_g3

0x0002,

0xf9c7,	// (0x0004c329) ai2_mp_volume_pane_g

0x696c,	// (0x000432ce) volume_small_pane_cp3

0xb4bf,	// (0x00047e21) aid_size_cell_ai2_button

0xb4c7,	// (0x00047e29) grid_ai2_button_pane

0xb4d0,	// (0x00047e32) cell_ai2_button_pane_ParamLimits

0xb4d0,	// (0x00047e32) cell_ai2_button_pane

0x25fe,	// (0x0003ef60) cell_ai2_button_pane_g1

0x7b74,	// (0x000444d6) grid_highlight_pane_cp8

0xb46f,	// (0x00047dd1) ai2_gene_pane_t1_ParamLimits

0xb46f,	// (0x00047dd1) ai2_gene_pane_t1

0x5edc,	// (0x0004283e) aid_height_parent_landscape

0xadc9,	// (0x0004772b) aid_height_set_list

0xadda,	// (0x0004773c) aid_size_parent

0xb10a,	// (0x00047a6c) aid_size_cell_graphic_pane_ParamLimits

0xb391,	// (0x00047cf3) popup_ai2_data_window_g1_ParamLimits

0xb391,	// (0x00047cf3) popup_ai2_data_window_g1

0xb39d,	// (0x00047cff) ai2_news_ticker_pane_g1

0xb3a5,	// (0x00047d07) ai2_news_ticker_pane_g2

0x0001,

0xf9b3,	// (0x0004c315) ai2_news_ticker_pane_g

0xb3ad,	// (0x00047d0f) ai2_news_ticker_pane_t1

0xb3bb,	// (0x00047d1d) ai2_news_ticker_pane_t2

0x0001,

0xf9b8,	// (0x0004c31a) ai2_news_ticker_pane_t

0xb3e8,	// (0x00047d4a) heading_ai2_gene_pane_g1

0xb3f0,	// (0x00047d52) heading_ai2_gene_pane_t1_ParamLimits

0xb3f0,	// (0x00047d52) heading_ai2_gene_pane_t1

0xb405,	// (0x00047d67) list_highlight_pane_cp6

0xb40d,	// (0x00047d6f) ai2_gene_pane_ParamLimits

0xb40d,	// (0x00047d6f) ai2_gene_pane

0xb432,	// (0x00047d94) list_ai2_gene_pane_t2

0x0001,

0xf9bd,	// (0x0004c31f) list_ai2_gene_pane_t

0xb440,	// (0x00047da2) list_highlight_pane_cp8_ParamLimits

0xb440,	// (0x00047da2) list_highlight_pane_cp8

0xb451,	// (0x00047db3) ai2_gene_pane_g1_ParamLimits

0xb451,	// (0x00047db3) ai2_gene_pane_g1

0xb463,	// (0x00047dc5) ai2_gene_pane_g2_ParamLimits

0xb463,	// (0x00047dc5) ai2_gene_pane_g2

0x0001,

0xf9c2,	// (0x0004c324) ai2_gene_pane_g_ParamLimits

0xf9c2,	// (0x0004c324) ai2_gene_pane_g

0x8477,	// (0x00044dd9) scroll_pane_cp12

0x5e99,	// (0x000427fb) control_pane_t3_ParamLimits

0x5e99,	// (0x000427fb) control_pane_t3

0x9425,	// (0x00045d87) status_small_pane_g8_ParamLimits

0x9425,	// (0x00045d87) status_small_pane_g8

0x606c,	// (0x000429ce) popup_find_window_ParamLimits

0x6283,	// (0x00042be5) popup_note_image_window_ParamLimits

0x45a7,	// (0x00040f09) list_double2_graphic_pane_vc_g1_ParamLimits

0x45a7,	// (0x00040f09) list_double2_graphic_pane_vc_g1

0x8cef,	// (0x00045651) list_double2_graphic_pane_vc_g2_ParamLimits

0x8cef,	// (0x00045651) list_double2_graphic_pane_vc_g2

0x584c,	// (0x000421ae) list_double2_graphic_pane_vc_g3_ParamLimits

0x584c,	// (0x000421ae) list_double2_graphic_pane_vc_g3

0x0002,

0xf79e,	// (0x0004c100) list_double2_graphic_pane_vc_g_ParamLimits

0xf79e,	// (0x0004c100) list_double2_graphic_pane_vc_g

0x4ce6,	// (0x00041648) list_double2_graphic_pane_vc_t1_ParamLimits

0x4ce6,	// (0x00041648) list_double2_graphic_pane_vc_t1

0x8cef,	// (0x00045651) list_single_heading_pane_vc_g1_ParamLimits

0x8cef,	// (0x00045651) list_single_heading_pane_vc_g1

0x584c,	// (0x000421ae) list_single_heading_pane_vc_g2_ParamLimits

0x584c,	// (0x000421ae) list_single_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0004bf0f) list_single_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0004bf0f) list_single_heading_pane_vc_g

0x4cfc,	// (0x0004165e) list_single_heading_pane_vc_t1_ParamLimits

0x4cfc,	// (0x0004165e) list_single_heading_pane_vc_t1

0x4d12,	// (0x00041674) list_single_heading_pane_vc_t2_ParamLimits

0x4d12,	// (0x00041674) list_single_heading_pane_vc_t2

0x0001,

0xf7bf,	// (0x0004c121) list_single_heading_pane_vc_t_ParamLimits

0xf7bf,	// (0x0004c121) list_single_heading_pane_vc_t

0x6554,	// (0x00042eb6) list_setting_number_pane_vc_g1_ParamLimits

0x6554,	// (0x00042eb6) list_setting_number_pane_vc_g1

0x6560,	// (0x00042ec2) list_setting_number_pane_vc_g2_ParamLimits

0x6560,	// (0x00042ec2) list_setting_number_pane_vc_g2

0x0001,

0xf7c4,	// (0x0004c126) list_setting_number_pane_vc_g_ParamLimits

0xf7c4,	// (0x0004c126) list_setting_number_pane_vc_g

0x4d24,	// (0x00041686) list_setting_number_pane_vc_t1_ParamLimits

0x4d24,	// (0x00041686) list_setting_number_pane_vc_t1

0x4d38,	// (0x0004169a) list_setting_number_pane_vc_t2_ParamLimits

0x4d38,	// (0x0004169a) list_setting_number_pane_vc_t2

0x4d54,	// (0x000416b6) list_setting_number_pane_vc_t3_ParamLimits

0x4d54,	// (0x000416b6) list_setting_number_pane_vc_t3

0x0002,

0xf7c9,	// (0x0004c12b) list_setting_number_pane_vc_t_ParamLimits

0xf7c9,	// (0x0004c12b) list_setting_number_pane_vc_t

0x4d80,	// (0x000416e2) set_value_pane_vc_ParamLimits

0x4d80,	// (0x000416e2) set_value_pane_vc

0xaf92,	// (0x000478f4) list_double2_graphic_pane_vc_ParamLimits

0xaf92,	// (0x000478f4) list_double2_graphic_pane_vc

0xaf92,	// (0x000478f4) list_double2_large_graphic_pane_vc_ParamLimits

0xaf92,	// (0x000478f4) list_double2_large_graphic_pane_vc

0xaf92,	// (0x000478f4) list_double2_pane_vc_ParamLimits

0xaf92,	// (0x000478f4) list_double2_pane_vc

0xaf92,	// (0x000478f4) list_double_graphic_heading_pane_vc_ParamLimits

0xaf92,	// (0x000478f4) list_double_graphic_heading_pane_vc

0xaf92,	// (0x000478f4) list_double_graphic_pane_vc_ParamLimits

0xaf92,	// (0x000478f4) list_double_graphic_pane_vc

0xaf92,	// (0x000478f4) list_double_heading_pane_vc_ParamLimits

0xaf92,	// (0x000478f4) list_double_heading_pane_vc

0xafa4,	// (0x00047906) list_double_large_graphic_pane_vc_ParamLimits

0xafa4,	// (0x00047906) list_double_large_graphic_pane_vc

0xaf92,	// (0x000478f4) list_double_number_pane_vc_ParamLimits

0xaf92,	// (0x000478f4) list_double_number_pane_vc

0xaf92,	// (0x000478f4) list_double_pane_vc_ParamLimits

0xaf92,	// (0x000478f4) list_double_pane_vc

0xaf92,	// (0x000478f4) list_double_time_pane_vc_ParamLimits

0xaf92,	// (0x000478f4) list_double_time_pane_vc

0xaf92,	// (0x000478f4) list_setting_number_pane_vc_ParamLimits

0xaf92,	// (0x000478f4) list_setting_number_pane_vc

0xaf92,	// (0x000478f4) list_setting_pane_vc_ParamLimits

0xaf92,	// (0x000478f4) list_setting_pane_vc

0xaf92,	// (0x000478f4) list_single_graphic_heading_pane_vc_ParamLimits

0xaf92,	// (0x000478f4) list_single_graphic_heading_pane_vc

0xaf92,	// (0x000478f4) list_single_heading_pane_vc_ParamLimits

0xaf92,	// (0x000478f4) list_single_heading_pane_vc

0x6850,	// (0x000431b2) list_single_number_heading_pane_vc_ParamLimits

0x6850,	// (0x000431b2) list_single_number_heading_pane_vc

0x45a7,	// (0x00040f09) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x45a7,	// (0x00040f09) list_double_graphic_heading_pane_vc_g1

0x8cef,	// (0x00045651) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x8cef,	// (0x00045651) list_double_graphic_heading_pane_vc_g2

0x584c,	// (0x000421ae) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x584c,	// (0x000421ae) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf79e,	// (0x0004c100) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf79e,	// (0x0004c100) list_double_graphic_heading_pane_vc_g

0x4e58,	// (0x000417ba) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x4e58,	// (0x000417ba) list_double_graphic_heading_pane_vc_t1

0x4e74,	// (0x000417d6) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x4e74,	// (0x000417d6) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ce,	// (0x0004c330) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ce,	// (0x0004c330) list_double_graphic_heading_pane_vc_t

0x6554,	// (0x00042eb6) list_setting_pane_vc_g1_ParamLimits

0x6554,	// (0x00042eb6) list_setting_pane_vc_g1

0x6560,	// (0x00042ec2) list_setting_pane_vc_g2_ParamLimits

0x6560,	// (0x00042ec2) list_setting_pane_vc_g2

0x0001,

0xf7c4,	// (0x0004c126) list_setting_pane_vc_g_ParamLimits

0xf7c4,	// (0x0004c126) list_setting_pane_vc_g

0x4e92,	// (0x000417f4) list_setting_pane_vc_t1_ParamLimits

0x4e92,	// (0x000417f4) list_setting_pane_vc_t1

0x4eae,	// (0x00041810) list_setting_pane_vc_t2_ParamLimits

0x4eae,	// (0x00041810) list_setting_pane_vc_t2

0x0001,

0xf9fc,	// (0x0004c35e) list_setting_pane_vc_t_ParamLimits

0xf9fc,	// (0x0004c35e) list_setting_pane_vc_t

0x4d80,	// (0x000416e2) set_value_pane_cp_vc_ParamLimits

0x4d80,	// (0x000416e2) set_value_pane_cp_vc

0x8cef,	// (0x00045651) list_single_number_heading_pane_vc_g1_ParamLimits

0x8cef,	// (0x00045651) list_single_number_heading_pane_vc_g1

0x584c,	// (0x000421ae) list_single_number_heading_pane_vc_g2_ParamLimits

0x584c,	// (0x000421ae) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0004bf0f) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0004bf0f) list_single_number_heading_pane_vc_g

0x456d,	// (0x00040ecf) list_single_number_heading_pane_vc_t1_ParamLimits

0x456d,	// (0x00040ecf) list_single_number_heading_pane_vc_t1

0x4eca,	// (0x0004182c) list_single_number_heading_pane_vc_t2_ParamLimits

0x4eca,	// (0x0004182c) list_single_number_heading_pane_vc_t2

0x4595,	// (0x00040ef7) list_single_number_heading_pane_vc_t3_ParamLimits

0x4595,	// (0x00040ef7) list_single_number_heading_pane_vc_t3

0x0002,

0xfa01,	// (0x0004c363) list_single_number_heading_pane_vc_t_ParamLimits

0xfa01,	// (0x0004c363) list_single_number_heading_pane_vc_t

0x45a7,	// (0x00040f09) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x45a7,	// (0x00040f09) list_single_graphic_heading_pane_vc_g1

0x8cef,	// (0x00045651) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x8cef,	// (0x00045651) list_single_graphic_heading_pane_vc_g4

0x584c,	// (0x000421ae) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x584c,	// (0x000421ae) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf79e,	// (0x0004c100) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf79e,	// (0x0004c100) list_single_graphic_heading_pane_vc_g

0x456d,	// (0x00040ecf) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x456d,	// (0x00040ecf) list_single_graphic_heading_pane_vc_t1

0x4ee0,	// (0x00041842) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x4ee0,	// (0x00041842) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa08,	// (0x0004c36a) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa08,	// (0x0004c36a) list_single_graphic_heading_pane_vc_t

0x8cef,	// (0x00045651) list_double2_pane_vc_g1_ParamLimits

0x8cef,	// (0x00045651) list_double2_pane_vc_g1

0x584c,	// (0x000421ae) list_double2_pane_vc_g2_ParamLimits

0x584c,	// (0x000421ae) list_double2_pane_vc_g2

0x0001,

0xf5ad,	// (0x0004bf0f) list_double2_pane_vc_g_ParamLimits

0xf5ad,	// (0x0004bf0f) list_double2_pane_vc_g

0x4e0b,	// (0x0004176d) list_double2_pane_vc_t1_ParamLimits

0x4e0b,	// (0x0004176d) list_double2_pane_vc_t1

0x6975,	// (0x000432d7) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x6975,	// (0x000432d7) list_double2_large_graphic_pane_vc_g1

0x8cef,	// (0x00045651) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x8cef,	// (0x00045651) list_double2_large_graphic_pane_vc_g2

0x584c,	// (0x000421ae) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x584c,	// (0x000421ae) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa0d,	// (0x0004c36f) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa0d,	// (0x0004c36f) list_double2_large_graphic_pane_vc_g

0x4ef2,	// (0x00041854) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x4ef2,	// (0x00041854) list_double2_large_graphic_pane_vc_t1

0x6981,	// (0x000432e3) list_double_time_pane_vc_g1_ParamLimits

0x6981,	// (0x000432e3) list_double_time_pane_vc_g1

0x698d,	// (0x000432ef) list_double_time_pane_vc_g2_ParamLimits

0x698d,	// (0x000432ef) list_double_time_pane_vc_g2

0x0001,

0xfa14,	// (0x0004c376) list_double_time_pane_vc_g_ParamLimits

0xfa14,	// (0x0004c376) list_double_time_pane_vc_g

0x4f08,	// (0x0004186a) list_double_time_pane_vc_t1_ParamLimits

0x4f08,	// (0x0004186a) list_double_time_pane_vc_t1

0x4f2c,	// (0x0004188e) list_double_time_pane_vc_t2_ParamLimits

0x4f2c,	// (0x0004188e) list_double_time_pane_vc_t2

0x4f7b,	// (0x000418dd) list_double_time_pane_vc_t3_ParamLimits

0x4f7b,	// (0x000418dd) list_double_time_pane_vc_t3

0x4f8d,	// (0x000418ef) list_double_time_pane_vc_t4_ParamLimits

0x4f8d,	// (0x000418ef) list_double_time_pane_vc_t4

0x0003,

0xfa19,	// (0x0004c37b) list_double_time_pane_vc_t_ParamLimits

0xfa19,	// (0x0004c37b) list_double_time_pane_vc_t

0x8cef,	// (0x00045651) list_double_pane_vc_g1_ParamLimits

0x8cef,	// (0x00045651) list_double_pane_vc_g1

0x584c,	// (0x000421ae) list_double_pane_vc_g2_ParamLimits

0x584c,	// (0x000421ae) list_double_pane_vc_g2

0x0001,

0xf5ad,	// (0x0004bf0f) list_double_pane_vc_g_ParamLimits

0xf5ad,	// (0x0004bf0f) list_double_pane_vc_g

0x4fa1,	// (0x00041903) list_double_pane_vc_t1_ParamLimits

0x4fa1,	// (0x00041903) list_double_pane_vc_t1

0x4fb5,	// (0x00041917) list_double_pane_vc_t2_ParamLimits

0x4fb5,	// (0x00041917) list_double_pane_vc_t2

0x0001,

0xfa22,	// (0x0004c384) list_double_pane_vc_t_ParamLimits

0xfa22,	// (0x0004c384) list_double_pane_vc_t

0x8cef,	// (0x00045651) list_double_number_pane_vc_g1_ParamLimits

0x8cef,	// (0x00045651) list_double_number_pane_vc_g1

0x584c,	// (0x000421ae) list_double_number_pane_vc_g2_ParamLimits

0x584c,	// (0x000421ae) list_double_number_pane_vc_g2

0x0001,

0xf5ad,	// (0x0004bf0f) list_double_number_pane_vc_g_ParamLimits

0xf5ad,	// (0x0004bf0f) list_double_number_pane_vc_g

0x4fcd,	// (0x0004192f) list_double_number_pane_vc_t1_ParamLimits

0x4fcd,	// (0x0004192f) list_double_number_pane_vc_t1

0x4fdf,	// (0x00041941) list_double_number_pane_vc_t2_ParamLimits

0x4fdf,	// (0x00041941) list_double_number_pane_vc_t2

0x4ff3,	// (0x00041955) list_double_number_pane_vc_t3_ParamLimits

0x4ff3,	// (0x00041955) list_double_number_pane_vc_t3

0x0002,

0xfa27,	// (0x0004c389) list_double_number_pane_vc_t_ParamLimits

0xfa27,	// (0x0004c389) list_double_number_pane_vc_t

0x6999,	// (0x000432fb) list_double_large_graphic_pane_vc_g1_ParamLimits

0x6999,	// (0x000432fb) list_double_large_graphic_pane_vc_g1

0x69b5,	// (0x00043317) list_double_large_graphic_pane_vc_g2_ParamLimits

0x69b5,	// (0x00043317) list_double_large_graphic_pane_vc_g2

0x69c9,	// (0x0004332b) list_double_large_graphic_pane_vc_g3_ParamLimits

0x69c9,	// (0x0004332b) list_double_large_graphic_pane_vc_g3

0x500b,	// (0x0004196d) list_double_large_graphic_pane_vc_g4_ParamLimits

0x500b,	// (0x0004196d) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa2e,	// (0x0004c390) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa2e,	// (0x0004c390) list_double_large_graphic_pane_vc_g

0x501a,	// (0x0004197c) list_double_large_graphic_pane_vc_t1_ParamLimits

0x501a,	// (0x0004197c) list_double_large_graphic_pane_vc_t1

0x5036,	// (0x00041998) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5036,	// (0x00041998) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa37,	// (0x0004c399) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa37,	// (0x0004c399) list_double_large_graphic_pane_vc_t

0x8cef,	// (0x00045651) list_double_heading_pane_vc_g1_ParamLimits

0x8cef,	// (0x00045651) list_double_heading_pane_vc_g1

0x584c,	// (0x000421ae) list_double_heading_pane_vc_g2_ParamLimits

0x584c,	// (0x000421ae) list_double_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0004bf0f) list_double_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0004bf0f) list_double_heading_pane_vc_g

0x5058,	// (0x000419ba) list_double_heading_pane_vc_t1_ParamLimits

0x5058,	// (0x000419ba) list_double_heading_pane_vc_t1

0x506c,	// (0x000419ce) list_double_heading_pane_vc_t2_ParamLimits

0x506c,	// (0x000419ce) list_double_heading_pane_vc_t2

0x0001,

0xfa3c,	// (0x0004c39e) list_double_heading_pane_vc_t_ParamLimits

0xfa3c,	// (0x0004c39e) list_double_heading_pane_vc_t

0x5084,	// (0x000419e6) list_double_graphic_pane_vc_g1_ParamLimits

0x5084,	// (0x000419e6) list_double_graphic_pane_vc_g1

0x69d8,	// (0x0004333a) list_double_graphic_pane_vc_g2_ParamLimits

0x69d8,	// (0x0004333a) list_double_graphic_pane_vc_g2

0x8cef,	// (0x00045651) list_double_graphic_pane_vc_g3_ParamLimits

0x8cef,	// (0x00045651) list_double_graphic_pane_vc_g3

0x0003,

0xfa41,	// (0x0004c3a3) list_double_graphic_pane_vc_g_ParamLimits

0xfa41,	// (0x0004c3a3) list_double_graphic_pane_vc_g

0x5090,	// (0x000419f2) list_double_graphic_pane_vc_t1_ParamLimits

0x5090,	// (0x000419f2) list_double_graphic_pane_vc_t1

0x50ba,	// (0x00041a1c) list_double_graphic_pane_vc_t2_ParamLimits

0x50ba,	// (0x00041a1c) list_double_graphic_pane_vc_t2

0x0001,

0xfa4a,	// (0x0004c3ac) list_double_graphic_pane_vc_t_ParamLimits

0xfa4a,	// (0x0004c3ac) list_double_graphic_pane_vc_t

0x53e4,	// (0x00041d46) aid_size_cell_fastswap

0x53ec,	// (0x00041d4e) aid_size_cell_touch_ParamLimits

0x53ec,	// (0x00041d4e) aid_size_cell_touch

0x5647,	// (0x00041fa9) popup_fast_swap_wide_window_ParamLimits

0x5647,	// (0x00041fa9) popup_fast_swap_wide_window

0x575b,	// (0x000420bd) touch_pane_ParamLimits

0x575b,	// (0x000420bd) touch_pane

0x84d9,	// (0x00044e3b) button_value_adjust_pane_cp2

0x4991,	// (0x000412f3) button_value_adjust_pane_cp4

0x49b5,	// (0x00041317) form_field_data_pane_cp2

0x49d6,	// (0x00041338) form_field_data_wide_pane_cp2

0x8960,	// (0x000452c2) bg_scroll_pane_ParamLimits

0x5a7e,	// (0x000423e0) scroll_handle_pane_ParamLimits

0x5a92,	// (0x000423f4) scroll_sc2_down_pane_ParamLimits

0x5a92,	// (0x000423f4) scroll_sc2_down_pane

0x8991,	// (0x000452f3) scroll_sc2_up_pane_ParamLimits

0x8991,	// (0x000452f3) scroll_sc2_up_pane

0xbbb8,	// (0x0004851a) grid_wheel_folder_pane_g1_ParamLimits

0xbbb8,	// (0x0004851a) grid_wheel_folder_pane_g1

0x5c73,	// (0x000425d5) clock_nsta_pane_cp2_ParamLimits

0x5c73,	// (0x000425d5) clock_nsta_pane_cp2

0x91ab,	// (0x00045b0d) listscroll_midp_pane_ParamLimits

0x91b7,	// (0x00045b19) midp_canvas_pane

0x949f,	// (0x00045e01) nsta_clock_indic_pane

0x94d3,	// (0x00045e35) listscroll_form_pane_vc

0x94db,	// (0x00045e3d) listscroll_set_pane_vc_ParamLimits

0x94db,	// (0x00045e3d) listscroll_set_pane_vc

0x95d4,	// (0x00045f36) clock_nsta_pane

0x964f,	// (0x00045fb1) indicator_nsta_pane

0x992f,	// (0x00046291) bg_popup_sub_pane_cp2_ParamLimits

0x9943,	// (0x000462a5) find_pane_cp2_ParamLimits

0x9943,	// (0x000462a5) find_pane_cp2

0x9959,	// (0x000462bb) grid_toobar_pane_ParamLimits

0x9a39,	// (0x0004639b) list_form_gen_pane_vc_ParamLimits

0x9a39,	// (0x0004639b) list_form_gen_pane_vc

0x9a4f,	// (0x000463b1) scroll_pane_cp8_vc_ParamLimits

0x9a4f,	// (0x000463b1) scroll_pane_cp8_vc

0x9acb,	// (0x0004642d) data_form_wide_pane_vc_ParamLimits

0x9acb,	// (0x0004642d) data_form_wide_pane_vc

0x9ad7,	// (0x00046439) form_field_data_wide_pane_vc_g1

0x9adf,	// (0x00046441) form_field_data_wide_pane_vc_t1_ParamLimits

0x9adf,	// (0x00046441) form_field_data_wide_pane_vc_t1

0x84ed,	// (0x00044e4f) input_focus_pane_cp6_vc_ParamLimits

0x84ed,	// (0x00044e4f) input_focus_pane_cp6_vc

0x9e05,	// (0x00046767) list_midp_pane_ParamLimits

0x9e11,	// (0x00046773) scroll_pane_cp16_ParamLimits

0x9e11,	// (0x00046773) scroll_pane_cp16

0x9e7b,	// (0x000467dd) button_value_adjust_pane_ParamLimits

0x9e7b,	// (0x000467dd) button_value_adjust_pane

0xadec,	// (0x0004774e) button_value_adjust_pane_cp6_ParamLimits

0xadec,	// (0x0004774e) button_value_adjust_pane_cp6

0xaf16,	// (0x00047878) settings_code_pane_cp_ParamLimits

0xaf16,	// (0x00047878) settings_code_pane_cp

0x25fe,	// (0x0003ef60) cell_touch_pane_g1

0x25fe,	// (0x0003ef60) cell_touch_pane_g2

0x0001,

0xf6e3,	// (0x0004c045) cell_touch_pane_g

0xb4e2,	// (0x00047e44) cell_touch_pane_cp_ParamLimits

0xb4e2,	// (0x00047e44) cell_touch_pane_cp

0xb4f2,	// (0x00047e54) cell_touch_pane_ParamLimits

0xb4f2,	// (0x00047e54) cell_touch_pane

0x25fe,	// (0x0003ef60) scroll_sc2_down_pane_g1

0x25fe,	// (0x0003ef60) scroll_sc2_up_pane_g1

0x7b74,	// (0x000444d6) bg_set_opt_pane_cp4_vc

0xb504,	// (0x00047e66) list_set_graphic_pane_vc_g1_ParamLimits

0xb504,	// (0x00047e66) list_set_graphic_pane_vc_g1

0xb510,	// (0x00047e72) list_set_graphic_pane_vc_g2_ParamLimits

0xb510,	// (0x00047e72) list_set_graphic_pane_vc_g2

0x0001,

0xf9d3,	// (0x0004c335) list_set_graphic_pane_vc_g_ParamLimits

0xf9d3,	// (0x0004c335) list_set_graphic_pane_vc_g

0xb51c,	// (0x00047e7e) text_primary_small_cp13_vc_ParamLimits

0xb51c,	// (0x00047e7e) text_primary_small_cp13_vc

0xb534,	// (0x00047e96) list_set_graphic_pane_vc_ParamLimits

0xb534,	// (0x00047e96) list_set_graphic_pane_vc

0x7b74,	// (0x000444d6) input_focus_pane_cp2_vc

0x25fe,	// (0x0003ef60) setting_code_pane_vc_g1

0x7c9f,	// (0x00044601) setting_code_pane_vc_t1

0xb547,	// (0x00047ea9) set_text_pane_vc_t1_ParamLimits

0xb547,	// (0x00047ea9) set_text_pane_vc_t1

0x7b74,	// (0x000444d6) input_focus_pane_cp1_vc

0xb563,	// (0x00047ec5) list_set_text_pane_vc

0x25fe,	// (0x0003ef60) setting_text_pane_vc_g1

0x7b74,	// (0x000444d6) bg_set_opt_pane_cp2_vc

0x7c96,	// (0x000445f8) setting_slider_graphic_pane_vc_g1

0xb56d,	// (0x00047ecf) setting_slider_graphic_pane_vc_t1

0xb57d,	// (0x00047edf) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9d8,	// (0x0004c33a) setting_slider_graphic_pane_vc_t

0xb58d,	// (0x00047eef) slider_set_pane_cp_vc

0xb595,	// (0x00047ef7) slider_set_pane_vc_g1

0xb59e,	// (0x00047f00) slider_set_pane_vc_g2

0x0006,

0xf9dd,	// (0x0004c33f) slider_set_pane_vc_g

0x8539,	// (0x00044e9b) set_opt_bg_pane_g1_copy1

0x8541,	// (0x00044ea3) set_opt_bg_pane_g2_copy1

0xb5ca,	// (0x00047f2c) set_opt_bg_pane_g3_copy1

0x8551,	// (0x00044eb3) set_opt_bg_pane_g4_copy1

0x8559,	// (0x00044ebb) set_opt_bg_pane_g5_copy1

0x8561,	// (0x00044ec3) set_opt_bg_pane_g6_copy1

0xb5d4,	// (0x00047f36) set_opt_bg_pane_g7_copy1

0xb5de,	// (0x00047f40) set_opt_bg_pane_g8_copy1

0xb5e8,	// (0x00047f4a) set_opt_bg_pane_g9_copy1

0x7b74,	// (0x000444d6) bg_set_opt_pane_cp_vc

0xb5f2,	// (0x00047f54) setting_slider_pane_vc_t1

0xb601,	// (0x00047f63) setting_slider_pane_vc_t2

0xb611,	// (0x00047f73) setting_slider_pane_vc_t3

0x0002,

0xf9ec,	// (0x0004c34e) setting_slider_pane_vc_t

0xb621,	// (0x00047f83) slider_set_pane_vc

0x6609,	// (0x00042f6b) volume_set_pane_vc_g1

0x6612,	// (0x00042f74) volume_set_pane_vc_g2

0x661b,	// (0x00042f7d) volume_set_pane_vc_g3

0x6624,	// (0x00042f86) volume_set_pane_vc_g4

0x662d,	// (0x00042f8f) volume_set_pane_vc_g5

0x6636,	// (0x00042f98) volume_set_pane_vc_g6

0x663f,	// (0x00042fa1) volume_set_pane_vc_g7

0x6648,	// (0x00042faa) volume_set_pane_vc_g8

0x6651,	// (0x00042fb3) volume_set_pane_vc_g9

0x665a,	// (0x00042fbc) volume_set_pane_vc_g10

0x0009,

0xf891,	// (0x0004c1f3) volume_set_pane_vc_g

0xb629,	// (0x00047f8b) volume_set_pane_vc

0xb631,	// (0x00047f93) button_value_adjust_pane_cp1_vc

0xb63b,	// (0x00047f9d) list_highlight_pane_cp2_vc

0xb644,	// (0x00047fa6) list_set_pane_vc_ParamLimits

0xb644,	// (0x00047fa6) list_set_pane_vc

0xb6a2,	// (0x00048004) main_pane_set_vc_t1_ParamLimits

0xb6a2,	// (0x00048004) main_pane_set_vc_t1

0xb6b7,	// (0x00048019) main_pane_set_vc_t2_ParamLimits

0xb6b7,	// (0x00048019) main_pane_set_vc_t2

0xb6c9,	// (0x0004802b) main_pane_set_vc_t3_ParamLimits

0xb6c9,	// (0x0004802b) main_pane_set_vc_t3

0xb6dd,	// (0x0004803f) main_pane_set_vc_t4_ParamLimits

0xb6dd,	// (0x0004803f) main_pane_set_vc_t4

0x0003,

0xf9f3,	// (0x0004c355) main_pane_set_vc_t_ParamLimits

0xf9f3,	// (0x0004c355) main_pane_set_vc_t

0xb6f1,	// (0x00048053) setting_code_pane_vc_ParamLimits

0xb6f1,	// (0x00048053) setting_code_pane_vc

0xb702,	// (0x00048064) setting_slider_graphic_pane_vc

0xb702,	// (0x00048064) setting_slider_pane_vc

0xb702,	// (0x00048064) setting_text_pane_vc

0xb702,	// (0x00048064) setting_volume_pane_vc

0xb70c,	// (0x0004806e) scroll_pane_cp121_vc

0x84c7,	// (0x00044e29) set_content_pane_vc

0xb714,	// (0x00048076) button_value_adjust_pane_g1

0xb71d,	// (0x0004807f) button_value_adjust_pane_g2

0x0001,

0xfa4f,	// (0x0004c3b1) button_value_adjust_pane_g

0xb726,	// (0x00048088) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb726,	// (0x00048088) form_field_slider_wide_pane_vc_t1

0xb73a,	// (0x0004809c) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb73a,	// (0x0004809c) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa54,	// (0x0004c3b6) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa54,	// (0x0004c3b6) form_field_slider_wide_pane_vc_t

0x7ecf,	// (0x00044831) input_focus_pane_cp10_vc_ParamLimits

0x7ecf,	// (0x00044831) input_focus_pane_cp10_vc

0xb768,	// (0x000480ca) slider_cont_pane_cp1_vc_ParamLimits

0xb768,	// (0x000480ca) slider_cont_pane_cp1_vc

0xb77a,	// (0x000480dc) slider_form_pane_g1_cp2

0xb59e,	// (0x00047f00) slider_form_pane_g2_cp2

0xb7a7,	// (0x00048109) form_field_slider_pane_vc_t3

0xb7b5,	// (0x00048117) form_field_slider_pane_vc_t4

0xb7c3,	// (0x00048125) slider_form_pane_vc_ParamLimits

0xb7c3,	// (0x00048125) slider_form_pane_vc

0xb7d0,	// (0x00048132) form_field_slider_pane_vc_t1_ParamLimits

0xb7d0,	// (0x00048132) form_field_slider_pane_vc_t1

0xb73a,	// (0x0004809c) form_field_slider_pane_vc_t2_ParamLimits

0xb73a,	// (0x0004809c) form_field_slider_pane_vc_t2

0x0001,

0xfa66,	// (0x0004c3c8) form_field_slider_pane_vc_t_ParamLimits

0xfa66,	// (0x0004c3c8) form_field_slider_pane_vc_t

0x7ecf,	// (0x00044831) input_focus_pane_cp9_vc_ParamLimits

0x7ecf,	// (0x00044831) input_focus_pane_cp9_vc

0xb7ec,	// (0x0004814e) slider_cont_pane_vc_ParamLimits

0xb7ec,	// (0x0004814e) slider_cont_pane_vc

0xb800,	// (0x00048162) list_form_graphic_pane_cp_vc_ParamLimits

0xb800,	// (0x00048162) list_form_graphic_pane_cp_vc

0x9ad7,	// (0x00046439) form_field_popup_wide_pane_vc_g1

0xb815,	// (0x00048177) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb815,	// (0x00048177) form_field_popup_wide_pane_vc_t1

0x84ed,	// (0x00044e4f) input_focus_pane_cp8_vc_ParamLimits

0x84ed,	// (0x00044e4f) input_focus_pane_cp8_vc

0xb85a,	// (0x000481bc) list_form_wide_pane_vc_ParamLimits

0xb85a,	// (0x000481bc) list_form_wide_pane_vc

0xb866,	// (0x000481c8) list_form_graphic_pane_vc_g1

0xb86e,	// (0x000481d0) list_form_graphic_pane_vc_t1_ParamLimits

0xb86e,	// (0x000481d0) list_form_graphic_pane_vc_t1

0x7c54,	// (0x000445b6) list_highlight_pane_cp5_vc_ParamLimits

0x7c54,	// (0x000445b6) list_highlight_pane_cp5_vc

0xb88a,	// (0x000481ec) list_form_graphic_pane_vc_ParamLimits

0xb88a,	// (0x000481ec) list_form_graphic_pane_vc

0x9ad7,	// (0x00046439) form_field_popup_pane_vc_g1

0xb8a0,	// (0x00048202) form_field_popup_pane_vc_t1_ParamLimits

0xb8a0,	// (0x00048202) form_field_popup_pane_vc_t1

0x84ed,	// (0x00044e4f) input_focus_pane_cp7_vc_ParamLimits

0x84ed,	// (0x00044e4f) input_focus_pane_cp7_vc

0xb8b7,	// (0x00048219) list_form_pane_vc_ParamLimits

0xb8b7,	// (0x00048219) list_form_pane_vc

0xb8c3,	// (0x00048225) data_form_pane_vc_t1_ParamLimits

0xb8c3,	// (0x00048225) data_form_pane_vc_t1

0x8539,	// (0x00044e9b) input_focus_pane_vc_g1

0x8541,	// (0x00044ea3) input_focus_pane_vc_g2

0x8549,	// (0x00044eab) input_focus_pane_vc_g3

0x8551,	// (0x00044eb3) input_focus_pane_vc_g4

0x8559,	// (0x00044ebb) input_focus_pane_vc_g5

0x8561,	// (0x00044ec3) input_focus_pane_vc_g6

0x8569,	// (0x00044ecb) input_focus_pane_vc_g7

0x8571,	// (0x00044ed3) input_focus_pane_vc_g8

0x8579,	// (0x00044edb) input_focus_pane_vc_g9

0x25fe,	// (0x0003ef60) input_focus_pane_vc_g10

0x0009,

0xf66c,	// (0x0004bfce) input_focus_pane_vc_g

0x9acb,	// (0x0004642d) data_form_pane_vc_ParamLimits

0x9acb,	// (0x0004642d) data_form_pane_vc

0x9ad7,	// (0x00046439) form_field_data_pane_vc_g1

0xb8de,	// (0x00048240) form_field_data_pane_vc_t1_ParamLimits

0xb8de,	// (0x00048240) form_field_data_pane_vc_t1

0x84ed,	// (0x00044e4f) input_focus_pane_vc_ParamLimits

0x84ed,	// (0x00044e4f) input_focus_pane_vc

0xb8f8,	// (0x0004825a) button_value_adjust_pane_cp3_vc

0xb900,	// (0x00048262) button_value_adjust_pane_cp5_vc

0xb908,	// (0x0004826a) form_field_data_pane_vc_ParamLimits

0xb908,	// (0x0004826a) form_field_data_pane_vc

0xb91f,	// (0x00048281) form_field_data_pane_vc_cp2

0xb927,	// (0x00048289) form_field_data_wide_pane_vc_ParamLimits

0xb927,	// (0x00048289) form_field_data_wide_pane_vc

0xb93d,	// (0x0004829f) form_field_data_wide_pane_vc_cp2

0xb945,	// (0x000482a7) form_field_popup_pane_vc_ParamLimits

0xb945,	// (0x000482a7) form_field_popup_pane_vc

0xb95c,	// (0x000482be) form_field_popup_wide_pane_vc_ParamLimits

0xb95c,	// (0x000482be) form_field_popup_wide_pane_vc

0xb972,	// (0x000482d4) form_field_slider_pane_vc_ParamLimits

0xb972,	// (0x000482d4) form_field_slider_pane_vc

0xb985,	// (0x000482e7) form_field_slider_wide_pane_vc_ParamLimits

0xb985,	// (0x000482e7) form_field_slider_wide_pane_vc

0xb998,	// (0x000482fa) grid_touch_1_pane_ParamLimits

0xb998,	// (0x000482fa) grid_touch_1_pane

0xb9a4,	// (0x00048306) grid_touch_2_pane_ParamLimits

0xb9a4,	// (0x00048306) grid_touch_2_pane

0x946a,	// (0x00045dcc) touch_pane_g1_ParamLimits

0x946a,	// (0x00045dcc) touch_pane_g1

0xb9bc,	// (0x0004831e) cell_app_pane_cp_wide_ParamLimits

0xb9bc,	// (0x0004831e) cell_app_pane_cp_wide

0xb9cd,	// (0x0004832f) grid_popup_fast_wide_pane_ParamLimits

0xb9cd,	// (0x0004832f) grid_popup_fast_wide_pane

0xb9e1,	// (0x00048343) scroll_pane_cp19_ParamLimits

0xb9e1,	// (0x00048343) scroll_pane_cp19

0x7b74,	// (0x000444d6) bg_popup_window_pane_cp20

0xb9f5,	// (0x00048357) listscroll_popup_fast_wide_pane

0xb9fd,	// (0x0004835f) grid_indicator_nsta_pane

0xba0f,	// (0x00048371) clock_nsta_pane_g1

0xba18,	// (0x0004837a) clock_nsta_pane_t1

0xba34,	// (0x00048396) cell_indicator_nsta_pane_ParamLimits

0xba34,	// (0x00048396) cell_indicator_nsta_pane

0xba69,	// (0x000483cb) cell_indicator_nsta_pane_g1

0xba77,	// (0x000483d9) cell_indicator_nsta_pane_g2

0x0001,

0xfa77,	// (0x0004c3d9) cell_indicator_nsta_pane_g

0xba89,	// (0x000483eb) clock_nsta_pane_cp

0xba92,	// (0x000483f4) indicator_nsta_pane_cp

0xba9c,	// (0x000483fe) nsta_clock_indic_pane_g1

0x7d1d,	// (0x0004467f) grid_indicator_pane

0x8a86,	// (0x000453e8) scroll_pane_cp29

0x5bc2,	// (0x00042524) indicator_nsta_pane_cp2_ParamLimits

0x5bc2,	// (0x00042524) indicator_nsta_pane_cp2

0x7c54,	// (0x000445b6) main_apps_wheel_pane

0x9ce6,	// (0x00046648) form_midp_field_text_pane_ParamLimits

0x9e31,	// (0x00046793) scroll_bar_cp050_ParamLimits

0xbaf5,	// (0x00048457) cell_indicator_pane_ParamLimits

0xbaf5,	// (0x00048457) cell_indicator_pane

0xbb0c,	// (0x0004846e) cell_indicator_pane_g1

0xbb16,	// (0x00048478) grid_wheel_folder_pane_ParamLimits

0xbb16,	// (0x00048478) grid_wheel_folder_pane

0xbb2c,	// (0x0004848e) list_wheel_apps_pane_ParamLimits

0xbb2c,	// (0x0004848e) list_wheel_apps_pane

0xbb3d,	// (0x0004849f) main_apps_wheel_pane_g1_ParamLimits

0xbb3d,	// (0x0004849f) main_apps_wheel_pane_g1

0xbb51,	// (0x000484b3) main_apps_wheel_pane_g2_ParamLimits

0xbb51,	// (0x000484b3) main_apps_wheel_pane_g2

0x0001,

0xfa93,	// (0x0004c3f5) main_apps_wheel_pane_g_ParamLimits

0xfa93,	// (0x0004c3f5) main_apps_wheel_pane_g

0xbb69,	// (0x000484cb) main_apps_wheel_pane_t1_ParamLimits

0xbb69,	// (0x000484cb) main_apps_wheel_pane_t1

0xbb8c,	// (0x000484ee) list_wheel_apps_pane_g1

0xbb94,	// (0x000484f6) list_wheel_apps_pane_g2

0xbb9c,	// (0x000484fe) list_wheel_apps_pane_g3

0xbba4,	// (0x00048506) list_wheel_apps_pane_g4

0xbbae,	// (0x00048510) list_wheel_apps_pane_g5

0x0004,

0xfa98,	// (0x0004c3fa) list_wheel_apps_pane_g

0x9026,	// (0x00045988) navi_icon_text_pane

0x9503,	// (0x00045e65) aid_fill_nsta

0xbbd1,	// (0x00048533) navi_icon_text_pane_g1

0xbbdd,	// (0x0004853f) navi_icon_text_pane_t1

0x8ec4,	// (0x00045826) list_set_graphic_pane_t1_ParamLimits

0x8ec4,	// (0x00045826) list_set_graphic_pane_t1

0xa59c,	// (0x00046efe) popup_midp_note_alarm_window_t6_ParamLimits

0xa59c,	// (0x00046efe) popup_midp_note_alarm_window_t6

0xa5ae,	// (0x00046f10) popup_midp_note_alarm_window_t7_ParamLimits

0xa5ae,	// (0x00046f10) popup_midp_note_alarm_window_t7

0xa5c0,	// (0x00046f22) popup_midp_note_alarm_window_t8_ParamLimits

0xa5c0,	// (0x00046f22) popup_midp_note_alarm_window_t8

0xa5d2,	// (0x00046f34) popup_midp_note_alarm_window_t9_ParamLimits

0xa5d2,	// (0x00046f34) popup_midp_note_alarm_window_t9

0xa5e4,	// (0x00046f46) popup_midp_note_alarm_window_t10_ParamLimits

0xa5e4,	// (0x00046f46) popup_midp_note_alarm_window_t10

0xa5f6,	// (0x00046f58) popup_midp_note_alarm_window_t11_ParamLimits

0xa5f6,	// (0x00046f58) popup_midp_note_alarm_window_t11

0xa608,	// (0x00046f6a) scroll_pane_cp17_ParamLimits

0xa608,	// (0x00046f6a) scroll_pane_cp17

0x6609,	// (0x00042f6b) volume_small_pane_cp_g1

0x69f5,	// (0x00043357) volume_small_pane_cp_g2

0x69fe,	// (0x00043360) volume_small_pane_cp_g3

0x6a07,	// (0x00043369) volume_small_pane_cp_g4

0x6a10,	// (0x00043372) volume_small_pane_cp_g5

0x6a19,	// (0x0004337b) volume_small_pane_cp_g6

0x6a22,	// (0x00043384) volume_small_pane_cp_g7

0x6a2b,	// (0x0004338d) volume_small_pane_cp_g8

0x6a34,	// (0x00043396) volume_small_pane_cp_g9

0x6a3d,	// (0x0004339f) volume_small_pane_cp_g10

0x9280,	// (0x00045be2) midp_ticker_pane_g1_ParamLimits

0x928c,	// (0x00045bee) midp_ticker_pane_g2_ParamLimits

0xf738,	// (0x0004c09a) midp_ticker_pane_g_ParamLimits

0x9298,	// (0x00045bfa) midp_ticker_pane_t1_ParamLimits

0x9519,	// (0x00045e7b) aid_fill_nsta_2

0x9e1d,	// (0x0004677f) list_form2_midp_pane

0xaf61,	// (0x000478c3) midp_editing_number_pane_ParamLimits

0xaf70,	// (0x000478d2) midp_ticker_pane_ParamLimits

0xbbef,	// (0x00048551) form2_midp_field_pane

0xbc13,	// (0x00048575) scroll_pane_cp51

0xbc33,	// (0x00048595) form2_midp_button_pane_ParamLimits

0xbc33,	// (0x00048595) form2_midp_button_pane

0xbc45,	// (0x000485a7) form2_midp_content_pane_ParamLimits

0xbc45,	// (0x000485a7) form2_midp_content_pane

0xbc5f,	// (0x000485c1) form2_midp_field_choice_group_pane

0xbc67,	// (0x000485c9) form2_midp_field_pane_g1

0xbc6f,	// (0x000485d1) form2_midp_field_pane_g2

0xbc77,	// (0x000485d9) form2_midp_field_pane_g3

0xbc7f,	// (0x000485e1) form2_midp_field_pane_g4

0x0003,

0xfabd,	// (0x0004c41f) form2_midp_field_pane_g

0xbc87,	// (0x000485e9) form2_midp_gauge_slider_pane

0xbc8f,	// (0x000485f1) form2_midp_gauge_wait_pane

0xbc97,	// (0x000485f9) form2_midp_image_pane_ParamLimits

0xbc97,	// (0x000485f9) form2_midp_image_pane

0xbcb2,	// (0x00048614) form2_midp_label_pane_ParamLimits

0xbcb2,	// (0x00048614) form2_midp_label_pane

0xbccb,	// (0x0004862d) form2_midp_label_pane_cp_ParamLimits

0xbccb,	// (0x0004862d) form2_midp_label_pane_cp

0xbcec,	// (0x0004864e) form2_midp_string_pane_ParamLimits

0xbcec,	// (0x0004864e) form2_midp_string_pane

0x50e4,	// (0x00041a46) form2_midp_text_pane_ParamLimits

0x50e4,	// (0x00041a46) form2_midp_text_pane

0xbcfe,	// (0x00048660) form2_midp_time_pane

0xbd0e,	// (0x00048670) input_focus_pane_cp51_ParamLimits

0xbd0e,	// (0x00048670) input_focus_pane_cp51

0xbd26,	// (0x00048688) form2_midp_label_pane_t1_ParamLimits

0xbd26,	// (0x00048688) form2_midp_label_pane_t1

0x5103,	// (0x00041a65) form2_mdip_text_pane_t1_ParamLimits

0x5103,	// (0x00041a65) form2_mdip_text_pane_t1

0x5121,	// (0x00041a83) form2_midp_time_pane_t1

0xbd6f,	// (0x000486d1) form2_midp_gauge_slider_pane_t1

0xbd81,	// (0x000486e3) form2_midp_gauge_slider_pane_t2

0xbd93,	// (0x000486f5) form2_midp_gauge_slider_pane_t3

0x0002,

0xfac6,	// (0x0004c428) form2_midp_gauge_slider_pane_t

0xbda5,	// (0x00048707) form2_midp_slider_pane

0xbdb1,	// (0x00048713) form2_midp_gauge_wait_pane_t1

0xbdbf,	// (0x00048721) form2_midp_wait_pane_ParamLimits

0xbdbf,	// (0x00048721) form2_midp_wait_pane

0xbdea,	// (0x0004874c) list_single_2graphic_pane_cp4_ParamLimits

0xbdea,	// (0x0004874c) list_single_2graphic_pane_cp4

0x9b3f,	// (0x000464a1) list_single_midp_graphic_pane_cp_ParamLimits

0x9b3f,	// (0x000464a1) list_single_midp_graphic_pane_cp

0x7b74,	// (0x000444d6) list_highlight_pane_cp20

0xbe0e,	// (0x00048770) list_single_2graphic_pane_g1_cp4

0xbe16,	// (0x00048778) list_single_2graphic_pane_g2_cp4

0xbe1e,	// (0x00048780) list_single_2graphic_pane_t1_cp4

0x7c54,	// (0x000445b6) list_highlight_pane_cp21

0xbe2d,	// (0x0004878f) list_single_midp_graphic_pane_g4_cp

0xbe3c,	// (0x0004879e) list_single_midp_graphic_pane_t1_cp

0xbe51,	// (0x000487b3) form2_mdip_string_pane_t1_ParamLimits

0xbe51,	// (0x000487b3) form2_mdip_string_pane_t1

0x7b74,	// (0x000444d6) bg_wml_button_pane_cp2

0x25fe,	// (0x0003ef60) form2_midp_image_pane_g1

0x58cc,	// (0x0004222e) list_double_large_graphic_pane_g5_ParamLimits

0x58cc,	// (0x0004222e) list_double_large_graphic_pane_g5

0x91ab,	// (0x00045b0d) midp_form_pane_ParamLimits

0x7c54,	// (0x000445b6) main_apps_wheel_pane_ParamLimits

0x62a9,	// (0x00042c0b) popup_preview_window_ParamLimits

0x62a9,	// (0x00042c0b) popup_preview_window

0x6464,	// (0x00042dc6) popup_touch_info_window_ParamLimits

0x6464,	// (0x00042dc6) popup_touch_info_window

0x6482,	// (0x00042de4) popup_touch_menu_window_ParamLimits

0x6482,	// (0x00042de4) popup_touch_menu_window

0x25f4,	// (0x0003ef56) bg_popup_sub_pane_cp6

0xbf4a,	// (0x000488ac) list_touch_menu_pane

0xbf52,	// (0x000488b4) list_single_touch_menu_pane_ParamLimits

0xbf52,	// (0x000488b4) list_single_touch_menu_pane

0xbf68,	// (0x000488ca) list_single_touch_menu_pane_t1

0x7c54,	// (0x000445b6) bg_popup_sub_pane_cp7_ParamLimits

0x7c54,	// (0x000445b6) bg_popup_sub_pane_cp7

0xbf76,	// (0x000488d8) heading_sub_pane

0xbf7e,	// (0x000488e0) list_touch_info_pane_ParamLimits

0xbf7e,	// (0x000488e0) list_touch_info_pane

0xbf8d,	// (0x000488ef) list_single_touch_info_pane_ParamLimits

0xbf8d,	// (0x000488ef) list_single_touch_info_pane

0xbf9f,	// (0x00048901) list_single_touch_info_pane_t1

0xbfad,	// (0x0004890f) list_single_touch_info_pane_t2

0x0001,

0xfad4,	// (0x0004c436) list_single_touch_info_pane_t

0x91a3,	// (0x00045b05) bg_popup_heading_pane_cp

0xbfbb,	// (0x0004891d) heading_sub_pane_t1

0x9a65,	// (0x000463c7) bg_popup_preview_window_pane_cp_ParamLimits

0x9a65,	// (0x000463c7) bg_popup_preview_window_pane_cp

0xbf76,	// (0x000488d8) heading_preview_pane

0xbf7e,	// (0x000488e0) list_preview_pane_ParamLimits

0xbf7e,	// (0x000488e0) list_preview_pane

0xbfc9,	// (0x0004892b) popup_preview_window_g1

0xbf8d,	// (0x000488ef) list_single_preview_pane_ParamLimits

0xbf8d,	// (0x000488ef) list_single_preview_pane

0xbfd1,	// (0x00048933) list_single_preview_pane_g1

0xbfd9,	// (0x0004893b) list_single_preview_pane_t1

0xbf9f,	// (0x00048901) list_single_preview_pane_t2

0x0001,

0xfad9,	// (0x0004c43b) list_single_preview_pane_t

0xbfe7,	// (0x00048949) bg_popup_heading_pane_cp2_ParamLimits

0xbfe7,	// (0x00048949) bg_popup_heading_pane_cp2

0xbffd,	// (0x0004895f) heading_preview_pane_g1

0xc005,	// (0x00048967) heading_preview_pane_t1_ParamLimits

0xc005,	// (0x00048967) heading_preview_pane_t1

0x7d40,	// (0x000446a2) soft_indicator_pane_t1_ParamLimits

0x8454,	// (0x00044db6) scroll_pane_ParamLimits

0x897f,	// (0x000452e1) scroll_sc2_left_pane

0x8988,	// (0x000452ea) scroll_sc2_right_pane

0x89a7,	// (0x00045309) scroll_bg_pane_g1_ParamLimits

0x89bc,	// (0x0004531e) scroll_bg_pane_g2_ParamLimits

0x89d4,	// (0x00045336) scroll_bg_pane_g3_ParamLimits

0xf6c3,	// (0x0004c025) scroll_bg_pane_g_ParamLimits

0x89a7,	// (0x00045309) scroll_handle_pane_g1_ParamLimits

0x89f6,	// (0x00045358) scroll_handle_pane_g2_ParamLimits

0x89d4,	// (0x00045336) scroll_handle_pane_g3_ParamLimits

0xf6ca,	// (0x0004c02c) scroll_handle_pane_g_ParamLimits

0x5f28,	// (0x0004288a) popup_choice_list_window_ParamLimits

0x5f28,	// (0x0004288a) popup_choice_list_window

0x993b,	// (0x0004629d) choice_list_pane

0x99bd,	// (0x0004631f) cell_toolbar_pane_t1

0x99e5,	// (0x00046347) toolbar_button_pane_ParamLimits

0xaac2,	// (0x00047424) ai_gene_pane_1_t2_ParamLimits

0xaac2,	// (0x00047424) ai_gene_pane_1_t2

0x0001,

0xf8ed,	// (0x0004c24f) ai_gene_pane_1_t_ParamLimits

0xf8ed,	// (0x0004c24f) ai_gene_pane_1_t

0xc022,	// (0x00048984) scroll_sc2_left_pane_g1

0xc022,	// (0x00048984) scroll_sc2_right_pane_g1

0x94c7,	// (0x00045e29) bg_popup_sub_pane_cp10

0xc02c,	// (0x0004898e) list_choice_list_pane

0xc045,	// (0x000489a7) list_single_choice_list_pane_ParamLimits

0xc045,	// (0x000489a7) list_single_choice_list_pane

0xc058,	// (0x000489ba) list_single_choice_list_pane_g1

0x8685,	// (0x00044fe7) list_single_choice_list_pane_t1_ParamLimits

0x8685,	// (0x00044fe7) list_single_choice_list_pane_t1

0xc060,	// (0x000489c2) choice_list_pane_g1

0xc068,	// (0x000489ca) choice_list_pane_t1

0x25f4,	// (0x0003ef56) input_focus_pane_cp11

0x885c,	// (0x000451be) title_pane_stacon_g2_ParamLimits

0x885c,	// (0x000451be) title_pane_stacon_g2

0x0002,

0xf6a9,	// (0x0004c00b) title_pane_stacon_g_ParamLimits

0xf6a9,	// (0x0004c00b) title_pane_stacon_g

0x91a3,	// (0x00045b05) cursor_press_pane

0x5fd4,	// (0x00042936) popup_fep_hwr_window_ParamLimits

0x5fd4,	// (0x00042936) popup_fep_hwr_window

0x604e,	// (0x000429b0) popup_fep_vkb_window_ParamLimits

0x604e,	// (0x000429b0) popup_fep_vkb_window

0xc076,	// (0x000489d8) cursor_press_pane_g1

0x0002,

0xfb02,	// (0x0004c464) fep_vkb_side_pane_g_ParamLimits

0x6a7f,	// (0x000433e1) fep_hwr_candidate_pane_ParamLimits

0x6a7f,	// (0x000433e1) fep_hwr_candidate_pane

0x6aa9,	// (0x0004340b) fep_hwr_side_pane_ParamLimits

0x6aa9,	// (0x0004340b) fep_hwr_side_pane

0x6ac9,	// (0x0004342b) fep_hwr_top_pane_ParamLimits

0x6ac9,	// (0x0004342b) fep_hwr_top_pane

0x6ae1,	// (0x00043443) fep_hwr_write_pane_ParamLimits

0x6ae1,	// (0x00043443) fep_hwr_write_pane

0xfb02,	// (0x0004c464) fep_vkb_side_pane_g

0xc07e,	// (0x000489e0) fep_hwr_top_pane_g1

0xc090,	// (0x000489f2) fep_hwr_top_pane_g2

0x6b0d,	// (0x0004346f) fep_hwr_top_pane_g3

0x0002,

0xfade,	// (0x0004c440) fep_hwr_top_pane_g

0x6b22,	// (0x00043484) fep_hwr_top_text_pane

0x8b76,	// (0x000454d8) fep_hwr_top_text_pane_g1

0xc0c6,	// (0x00048a28) fep_hwr_top_text_pane_t1

0x6c18,	// (0x0004357a) fep_hwr_candidate_pane_g1

0xc319,	// (0x00048c7b) fep_vkb_keypad_pane_g3_ParamLimits

0xc319,	// (0x00048c7b) fep_vkb_keypad_pane_g3

0xc341,	// (0x00048ca3) fep_vkb_keypad_pane_g4_ParamLimits

0xc341,	// (0x00048ca3) fep_vkb_keypad_pane_g4

0xc3b0,	// (0x00048d12) fep_vkb_bottom_pane_g2_ParamLimits

0xc3b0,	// (0x00048d12) fep_vkb_bottom_pane_g2

0x0001,

0xfb09,	// (0x0004c46b) fep_vkb_bottom_pane_g_ParamLimits

0xfb09,	// (0x0004c46b) fep_vkb_bottom_pane_g

0xc022,	// (0x00048984) cell_vkb_side_pane_g2

0x0001,

0xfb13,	// (0x0004c475) cell_vkb_side_pane_g

0xc43b,	// (0x00048d9d) cell_vkb_side_pane_t1

0xc449,	// (0x00048dab) cell_vkb_side_pane_t1_copy1

0xc022,	// (0x00048984) bg_fep_vkb_candidate_pane_g2

0xc575,	// (0x00048ed7) cell_vkb_candidate_pane_ParamLimits

0xc0d4,	// (0x00048a36) aid_size_cell_vkb_ParamLimits

0xc0d4,	// (0x00048a36) aid_size_cell_vkb

0xc575,	// (0x00048ed7) cell_vkb_candidate_pane

0x6c32,	// (0x00043594) bg_popup_fep_shadow_pane_g1

0xc162,	// (0x00048ac4) fep_vkb_bottom_pane_ParamLimits

0xc162,	// (0x00048ac4) fep_vkb_bottom_pane

0xc198,	// (0x00048afa) fep_vkb_candidate_pane_ParamLimits

0xc198,	// (0x00048afa) fep_vkb_candidate_pane

0xc1b4,	// (0x00048b16) fep_vkb_keypad_pane_ParamLimits

0xc1b4,	// (0x00048b16) fep_vkb_keypad_pane

0xc1fa,	// (0x00048b5c) fep_vkb_side_pane_ParamLimits

0xc1fa,	// (0x00048b5c) fep_vkb_side_pane

0xc236,	// (0x00048b98) fep_vkb_top_pane_ParamLimits

0xc236,	// (0x00048b98) fep_vkb_top_pane

0xc272,	// (0x00048bd4) fep_vkb_top_pane_g1_ParamLimits

0xc272,	// (0x00048bd4) fep_vkb_top_pane_g1

0xc281,	// (0x00048be3) fep_vkb_top_pane_g2_ParamLimits

0xc281,	// (0x00048be3) fep_vkb_top_pane_g2

0xc290,	// (0x00048bf2) fep_vkb_top_pane_g3_ParamLimits

0xc290,	// (0x00048bf2) fep_vkb_top_pane_g3

0x0003,

0xfaf9,	// (0x0004c45b) fep_vkb_top_pane_g_ParamLimits

0xfaf9,	// (0x0004c45b) fep_vkb_top_pane_g

0xc2ae,	// (0x00048c10) fep_vkb_top_text_pane_ParamLimits

0xc2ae,	// (0x00048c10) fep_vkb_top_text_pane

0xc2bf,	// (0x00048c21) fep_vkb_side_pane_g1_ParamLimits

0xc2bf,	// (0x00048c21) fep_vkb_side_pane_g1

0xc308,	// (0x00048c6a) grid_vkb_side_pane_ParamLimits

0xc308,	// (0x00048c6a) grid_vkb_side_pane

0x6c3a,	// (0x0004359c) bg_popup_fep_shadow_pane_g2

0x6c43,	// (0x000435a5) bg_popup_fep_shadow_pane_g3

0x6c4b,	// (0x000435ad) bg_popup_fep_shadow_pane_g4

0x6c54,	// (0x000435b6) bg_popup_fep_shadow_pane_g5

0x6c5e,	// (0x000435c0) bg_popup_fep_shadow_pane_g6

0x6c66,	// (0x000435c8) bg_popup_fep_shadow_pane_g7

0x8559,	// (0x00044ebb) bg_popup_fep_shadow_pane_g8

0xc35f,	// (0x00048cc1) grid_vkb_keypad_number_pane_ParamLimits

0xc35f,	// (0x00048cc1) grid_vkb_keypad_number_pane

0xc36f,	// (0x00048cd1) grid_vkb_keypad_pane_ParamLimits

0xc36f,	// (0x00048cd1) grid_vkb_keypad_pane

0xc395,	// (0x00048cf7) fep_vkb_bottom_pane_g1_ParamLimits

0xc395,	// (0x00048cf7) fep_vkb_bottom_pane_g1

0xc3be,	// (0x00048d20) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc3be,	// (0x00048d20) grid_vkb_keypad_bottom_left_pane

0xc3d3,	// (0x00048d35) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc3d3,	// (0x00048d35) grid_vkb_keypad_bottom_right_pane

0xc3e8,	// (0x00048d4a) fep_vkb_top_text_pane_g1

0xc403,	// (0x00048d65) fep_vkb_top_text_pane_t1

0xc418,	// (0x00048d7a) cell_vkb_side_pane_ParamLimits

0xc418,	// (0x00048d7a) cell_vkb_side_pane

0xc022,	// (0x00048984) cell_vkb_side_pane_g1

0xc457,	// (0x00048db9) cell_vkb_keypad_pane_ParamLimits

0xc457,	// (0x00048db9) cell_vkb_keypad_pane

0xc4cc,	// (0x00048e2e) cell_vkb_keypad_pane_g1

0x0008,

0xfb26,	// (0x0004c488) bg_popup_fep_shadow_pane_g

0xc022,	// (0x00048984) cell_hwr_side_pane_g1

0xc022,	// (0x00048984) cell_hwr_side_pane_g2

0xc4d6,	// (0x00048e38) cell_vkb_keypad_pane_t1

0xc4e4,	// (0x00048e46) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc4e4,	// (0x00048e46) cell_vkb_keypad_bottom_left_pane

0xc501,	// (0x00048e63) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc501,	// (0x00048e63) cell_vkb_keypad_bottom_right_pane

0xc022,	// (0x00048984) cell_vkb_keypad_bottom_left_pane_g1

0xc022,	// (0x00048984) cell_vkb_keypad_bottom_right_pane_g1

0xc53a,	// (0x00048e9c) cell_vkb_keypad_number_pane_ParamLimits

0xc53a,	// (0x00048e9c) cell_vkb_keypad_number_pane

0xc559,	// (0x00048ebb) cell_vkb_keypad_number_pane_g1

0xc563,	// (0x00048ec5) cell_vkb_keypad_number_pane_g2

0xc56c,	// (0x00048ece) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb18,	// (0x0004c47a) cell_vkb_keypad_number_pane_g

0xc4d6,	// (0x00048e38) cell_vkb_keypad_number_pane_t1

0xc590,	// (0x00048ef2) fep_vkb_candidate_pane_g1

0x0001,

0xfb13,	// (0x0004c475) cell_hwr_side_pane_g

0xc5a9,	// (0x00048f0b) cell_hwr_side_pane_t1

0x6c78,	// (0x000435da) cell_hwr_side_pane_t1_copy1

0xc2a0,	// (0x00048c02) cell_hwr_candidate_pane_g1

0x6c86,	// (0x000435e8) cell_hwr_candidate_pane_t1

0xc022,	// (0x00048984) cell_vkb_candidate_pane_g2

0xc62f,	// (0x00048f91) cell_vkb_candidate_pane_t1

0x6a46,	// (0x000433a8) bg_popup_fep_shadow_pane_ParamLimits

0x6a46,	// (0x000433a8) bg_popup_fep_shadow_pane

0x25c4,	// (0x0003ef26) bg_fep_hwr_top_pane_g4

0xc0a2,	// (0x00048a04) bg_hwr_side_pane_g1_ParamLimits

0xc0a2,	// (0x00048a04) bg_hwr_side_pane_g1

0x6b5e,	// (0x000434c0) cell_hwr_side_pane_ParamLimits

0x6b5e,	// (0x000434c0) cell_hwr_side_pane

0x6b99,	// (0x000434fb) fep_hwr_write_pane_g1_ParamLimits

0x6b99,	// (0x000434fb) fep_hwr_write_pane_g1

0x6ba6,	// (0x00043508) fep_hwr_write_pane_g2_ParamLimits

0x6ba6,	// (0x00043508) fep_hwr_write_pane_g2

0x6bb3,	// (0x00043515) fep_hwr_write_pane_g3_ParamLimits

0x6bb3,	// (0x00043515) fep_hwr_write_pane_g3

0x6bc1,	// (0x00043523) fep_hwr_write_pane_g4_ParamLimits

0x6bc1,	// (0x00043523) fep_hwr_write_pane_g4

0x0005,

0xfae5,	// (0x0004c447) fep_hwr_write_pane_g_ParamLimits

0xfae5,	// (0x0004c447) fep_hwr_write_pane_g

0x25c4,	// (0x0003ef26) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x25c4,	// (0x0003ef26) bg_fep_hwr_candidate_pane_g2

0x6bd6,	// (0x00043538) cell_hwr_candidate_pane_ParamLimits

0x6bd6,	// (0x00043538) cell_hwr_candidate_pane

0x6c18,	// (0x0004357a) fep_hwr_candidate_pane_g1_ParamLimits

0xc102,	// (0x00048a64) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc102,	// (0x00048a64) bg_popup_fep_shadow_pane_cp2

0xc2a0,	// (0x00048c02) fep_vkb_top_pane_g4_ParamLimits

0xc2a0,	// (0x00048c02) fep_vkb_top_pane_g4

0xc2e6,	// (0x00048c48) fep_vkb_side_pane_g2_ParamLimits

0xc2e6,	// (0x00048c48) fep_vkb_side_pane_g2

0x48be,	// (0x00041220) list_setting_pane_t4_ParamLimits

0x48be,	// (0x00041220) list_setting_pane_t4

0x4958,	// (0x000412ba) list_setting_number_pane_t5_ParamLimits

0x4958,	// (0x000412ba) list_setting_number_pane_t5

0x8bbd,	// (0x0004551f) list_double_heading_pane_cp2_ParamLimits

0x8bbd,	// (0x0004551f) list_double_heading_pane_cp2

0x8488,	// (0x00044dea) list_double_heading_pane_g1_cp2_ParamLimits

0x8488,	// (0x00044dea) list_double_heading_pane_g1_cp2

0x84fb,	// (0x00044e5d) list_double_heading_pane_g2_cp2_ParamLimits

0x84fb,	// (0x00044e5d) list_double_heading_pane_g2_cp2

0xc63d,	// (0x00048f9f) list_double_heading_pane_t1_cp2_ParamLimits

0xc63d,	// (0x00048f9f) list_double_heading_pane_t1_cp2

0xc653,	// (0x00048fb5) list_double_heading_pane_t2_cp2_ParamLimits

0xc653,	// (0x00048fb5) list_double_heading_pane_t2_cp2

0x25ec,	// (0x0003ef4e) aid_value_unit2

0x56a1,	// (0x00042003) popup_preview_fixed_window

0x7edd,	// (0x0004483f) bg_popup_preview_window_pane_cp02

0xc665,	// (0x00048fc7) list_preview_fixed_pane

0xc6ab,	// (0x0004900d) list_empty_pane_fp_ParamLimits

0xc6ab,	// (0x0004900d) list_empty_pane_fp

0xc6ab,	// (0x0004900d) list_single_cale_day_pane_fp_ParamLimits

0xc6ab,	// (0x0004900d) list_single_cale_day_pane_fp

0xc6ab,	// (0x0004900d) list_single_graphic_heading_pane_fp_ParamLimits

0xc6ab,	// (0x0004900d) list_single_graphic_heading_pane_fp

0xc6ab,	// (0x0004900d) list_single_graphic_pane_fp_ParamLimits

0xc6ab,	// (0x0004900d) list_single_graphic_pane_fp

0xc6ab,	// (0x0004900d) list_single_heading_pane_fp_ParamLimits

0xc6ab,	// (0x0004900d) list_single_heading_pane_fp

0xc6ab,	// (0x0004900d) list_single_pane_fp_ParamLimits

0xc6ab,	// (0x0004900d) list_single_pane_fp

0xc6c0,	// (0x00049022) list_single_pane_fp_g1_ParamLimits

0xc6c0,	// (0x00049022) list_single_pane_fp_g1

0x8488,	// (0x00044dea) list_single_pane_fp_g2_ParamLimits

0x8488,	// (0x00044dea) list_single_pane_fp_g2

0x84fb,	// (0x00044e5d) list_single_pane_fp_g3_ParamLimits

0x84fb,	// (0x00044e5d) list_single_pane_fp_g3

0xc6cc,	// (0x0004902e) list_single_pane_fp_g4_ParamLimits

0xc6cc,	// (0x0004902e) list_single_pane_fp_g4

0x0003,

0xfb47,	// (0x0004c4a9) list_single_pane_fp_g_ParamLimits

0xfb47,	// (0x0004c4a9) list_single_pane_fp_g

0x5134,	// (0x00041a96) list_single_pane_fp_t1_ParamLimits

0x5134,	// (0x00041a96) list_single_pane_fp_t1

0x514b,	// (0x00041aad) list_single_graphic_pane_fp_g1_ParamLimits

0x514b,	// (0x00041aad) list_single_graphic_pane_fp_g1

0xc6c0,	// (0x00049022) list_single_graphic_pane_fp_g2_ParamLimits

0xc6c0,	// (0x00049022) list_single_graphic_pane_fp_g2

0x8488,	// (0x00044dea) list_single_graphic_pane_fp_g3_ParamLimits

0x8488,	// (0x00044dea) list_single_graphic_pane_fp_g3

0x84fb,	// (0x00044e5d) list_single_graphic_pane_fp_g4_ParamLimits

0x84fb,	// (0x00044e5d) list_single_graphic_pane_fp_g4

0xc6cc,	// (0x0004902e) list_single_graphic_pane_fp_g5_ParamLimits

0xc6cc,	// (0x0004902e) list_single_graphic_pane_fp_g5

0x0004,

0xfb50,	// (0x0004c4b2) list_single_graphic_pane_fp_g_ParamLimits

0xfb50,	// (0x0004c4b2) list_single_graphic_pane_fp_g

0x5157,	// (0x00041ab9) list_single_graphic_pane_fp_t1_ParamLimits

0x5157,	// (0x00041ab9) list_single_graphic_pane_fp_t1

0x514b,	// (0x00041aad) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x514b,	// (0x00041aad) list_single_graphic_heading_pane_fp_g1

0xc6c0,	// (0x00049022) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc6c0,	// (0x00049022) list_single_graphic_heading_pane_fp_g2

0x8488,	// (0x00044dea) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x8488,	// (0x00044dea) list_single_graphic_heading_pane_fp_g3

0x84fb,	// (0x00044e5d) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x84fb,	// (0x00044e5d) list_single_graphic_heading_pane_fp_g4

0xc6cc,	// (0x0004902e) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc6cc,	// (0x0004902e) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb50,	// (0x0004c4b2) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb50,	// (0x0004c4b2) list_single_graphic_heading_pane_fp_g

0x516d,	// (0x00041acf) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x516d,	// (0x00041acf) list_single_graphic_heading_pane_fp_t1

0x5183,	// (0x00041ae5) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5183,	// (0x00041ae5) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb5b,	// (0x0004c4bd) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb5b,	// (0x0004c4bd) list_single_graphic_heading_pane_fp_t

0x5195,	// (0x00041af7) list_single_cale_day_pane_fp_g1_ParamLimits

0x5195,	// (0x00041af7) list_single_cale_day_pane_fp_g1

0xc6d8,	// (0x0004903a) list_single_cale_day_pane_fp_g2_ParamLimits

0xc6d8,	// (0x0004903a) list_single_cale_day_pane_fp_g2

0x6ca4,	// (0x00043606) list_single_cale_day_pane_fp_g3_ParamLimits

0x6ca4,	// (0x00043606) list_single_cale_day_pane_fp_g3

0x6ccc,	// (0x0004362e) list_single_cale_day_pane_fp_g4_ParamLimits

0x6ccc,	// (0x0004362e) list_single_cale_day_pane_fp_g4

0x6cf0,	// (0x00043652) list_single_cale_day_pane_fp_g5_ParamLimits

0x6cf0,	// (0x00043652) list_single_cale_day_pane_fp_g5

0x0004,

0xfb60,	// (0x0004c4c2) list_single_cale_day_pane_fp_g_ParamLimits

0xfb60,	// (0x0004c4c2) list_single_cale_day_pane_fp_g

0x51cd,	// (0x00041b2f) list_single_cale_day_pane_fp_t1_ParamLimits

0x51cd,	// (0x00041b2f) list_single_cale_day_pane_fp_t1

0x51f3,	// (0x00041b55) list_single_cale_day_pane_fp_t2_ParamLimits

0x51f3,	// (0x00041b55) list_single_cale_day_pane_fp_t2

0x520c,	// (0x00041b6e) list_single_cale_day_pane_fp_t3_ParamLimits

0x520c,	// (0x00041b6e) list_single_cale_day_pane_fp_t3

0x0002,

0xfb6b,	// (0x0004c4cd) list_single_cale_day_pane_fp_t_ParamLimits

0xfb6b,	// (0x0004c4cd) list_single_cale_day_pane_fp_t

0xc6c0,	// (0x00049022) list_empty_pane_fp_g1_ParamLimits

0xc6c0,	// (0x00049022) list_empty_pane_fp_g1

0x5225,	// (0x00041b87) list_empty_pane_fp_t1

0x5233,	// (0x00041b95) list_empty_pane_fp_t2

0x0001,

0xfb72,	// (0x0004c4d4) list_empty_pane_fp_t

0xc6c0,	// (0x00049022) list_single_heading_pane_fp_g1_ParamLimits

0xc6c0,	// (0x00049022) list_single_heading_pane_fp_g1

0x8488,	// (0x00044dea) list_single_heading_pane_fp_g2_ParamLimits

0x8488,	// (0x00044dea) list_single_heading_pane_fp_g2

0x84fb,	// (0x00044e5d) list_single_heading_pane_fp_g3_ParamLimits

0x84fb,	// (0x00044e5d) list_single_heading_pane_fp_g3

0x0002,

0xfb77,	// (0x0004c4d9) list_single_heading_pane_fp_g_ParamLimits

0xfb77,	// (0x0004c4d9) list_single_heading_pane_fp_g

0x5241,	// (0x00041ba3) list_single_heading_pane_fp_t1_ParamLimits

0x5241,	// (0x00041ba3) list_single_heading_pane_fp_t1

0x5253,	// (0x00041bb5) list_single_heading_pane_fp_t2_ParamLimits

0x5253,	// (0x00041bb5) list_single_heading_pane_fp_t2

0x0001,

0xfb7e,	// (0x0004c4e0) list_single_heading_pane_fp_t_ParamLimits

0xfb7e,	// (0x0004c4e0) list_single_heading_pane_fp_t

0x86f3,	// (0x00045055) aid_size_cell_fast

0x7e4d,	// (0x000447af) soft_indicator_pane_cp1_t1

0x8730,	// (0x00045092) cell_app_pane_cp2_ParamLimits

0x8730,	// (0x00045092) cell_app_pane_cp2

0x6a68,	// (0x000433ca) fep_hwr_candidate_drop_down_list_pane

0x25d2,	// (0x0003ef34) fep_hwr_candidate_pane_g3_ParamLimits

0x25d2,	// (0x0003ef34) fep_hwr_candidate_pane_g3

0x25df,	// (0x0003ef41) fep_hwr_candidate_pane_g4_ParamLimits

0x25df,	// (0x0003ef41) fep_hwr_candidate_pane_g4

0x0002,

0xfaf2,	// (0x0004c454) fep_hwr_candidate_pane_g_ParamLimits

0xfaf2,	// (0x0004c454) fep_hwr_candidate_pane_g

0xc187,	// (0x00048ae9) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc187,	// (0x00048ae9) fep_vkb_candidate_drop_down_list_pane

0xc598,	// (0x00048efa) fep_vkb_candidate_pane_g3

0xc5a0,	// (0x00048f02) fep_vkb_candidate_pane_g4

0x0002,

0xfb1f,	// (0x0004c481) fep_vkb_candidate_pane_g

0xc2a0,	// (0x00048c02) cell_hwr_candidate_pane_g1_ParamLimits

0xc5b7,	// (0x00048f19) cell_hwr_candidate_pane_g3_ParamLimits

0xc5b7,	// (0x00048f19) cell_hwr_candidate_pane_g3

0xc5d8,	// (0x00048f3a) cell_hwr_candidate_pane_g4_ParamLimits

0xc5d8,	// (0x00048f3a) cell_hwr_candidate_pane_g4

0x0002,

0xfb39,	// (0x0004c49b) cell_hwr_candidate_pane_g_ParamLimits

0xfb39,	// (0x0004c49b) cell_hwr_candidate_pane_g

0xc5f9,	// (0x00048f5b) cell_vkb_candidate_pane_g3_ParamLimits

0xc5f9,	// (0x00048f5b) cell_vkb_candidate_pane_g3

0xc614,	// (0x00048f76) cell_vkb_candidate_pane_g4_ParamLimits

0xc614,	// (0x00048f76) cell_vkb_candidate_pane_g4

0xc6e4,	// (0x00049046) cell_app_pane_cp2_g1_ParamLimits

0xc6e4,	// (0x00049046) cell_app_pane_cp2_g1

0xc702,	// (0x00049064) cell_app_pane_cp2_g2_ParamLimits

0xc702,	// (0x00049064) cell_app_pane_cp2_g2

0x0001,

0xfb83,	// (0x0004c4e5) cell_app_pane_cp2_g_ParamLimits

0xfb83,	// (0x0004c4e5) cell_app_pane_cp2_g

0xc70e,	// (0x00049070) cell_app_pane_cp2_t1_ParamLimits

0xc70e,	// (0x00049070) cell_app_pane_cp2_t1

0x84ed,	// (0x00044e4f) grid_highlight_pane_cp1_ParamLimits

0x84ed,	// (0x00044e4f) grid_highlight_pane_cp1

0x6d14,	// (0x00043676) cell_hwr_candidate_pane_cp1_ParamLimits

0x6d14,	// (0x00043676) cell_hwr_candidate_pane_cp1

0xc2a0,	// (0x00048c02) fep_hwr_candidate_drop_down_list_pane_g1

0xc720,	// (0x00049082) fep_hwr_candidate_drop_down_list_pane_g2

0xc72d,	// (0x0004908f) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb88,	// (0x0004c4ea) fep_hwr_candidate_drop_down_list_pane_g

0x6d33,	// (0x00043695) fep_hwr_candidate_drop_down_list_scroll_pane

0x6d3c,	// (0x0004369e) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6d3c,	// (0x0004369e) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6d49,	// (0x000436ab) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6d49,	// (0x000436ab) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6d56,	// (0x000436b8) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6d56,	// (0x000436b8) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc5f9,	// (0x00048f5b) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc5f9,	// (0x00048f5b) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc614,	// (0x00048f76) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc614,	// (0x00048f76) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6d63,	// (0x000436c5) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6d63,	// (0x000436c5) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6d7e,	// (0x000436e0) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6d7e,	// (0x000436e0) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6d99,	// (0x000436fb) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6d99,	// (0x000436fb) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb8f,	// (0x0004c4f1) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb8f,	// (0x0004c4f1) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc73a,	// (0x0004909c) cell_vkb_candidate_pane_cp1_ParamLimits

0xc73a,	// (0x0004909c) cell_vkb_candidate_pane_cp1

0xc2a0,	// (0x00048c02) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc2a0,	// (0x00048c02) fep_vkb_candidate_drop_down_list_pane_g1

0xc720,	// (0x00049082) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc720,	// (0x00049082) fep_vkb_candidate_drop_down_list_pane_g2

0xc72d,	// (0x0004908f) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc72d,	// (0x0004908f) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb88,	// (0x0004c4ea) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb88,	// (0x0004c4ea) fep_vkb_candidate_drop_down_list_pane_g

0xc75a,	// (0x000490bc) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc75a,	// (0x000490bc) fep_vkb_candidate_drop_down_list_scroll_pane

0xc767,	// (0x000490c9) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc767,	// (0x000490c9) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc774,	// (0x000490d6) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc774,	// (0x000490d6) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc780,	// (0x000490e2) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc780,	// (0x000490e2) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc5b7,	// (0x00048f19) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc5b7,	// (0x00048f19) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc5d8,	// (0x00048f3a) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc5d8,	// (0x00048f3a) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc78c,	// (0x000490ee) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc78c,	// (0x000490ee) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc7ad,	// (0x0004910f) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc7ad,	// (0x0004910f) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc7ce,	// (0x00049130) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc7ce,	// (0x00049130) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba0,	// (0x0004c502) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba0,	// (0x0004c502) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7b7e,	// (0x000444e0) title_pane_g1_ParamLimits

0x7b8b,	// (0x000444ed) title_pane_g2_ParamLimits

0xf529,	// (0x0004be8b) title_pane_g_ParamLimits

0x8b66,	// (0x000454c8) aid_call2_pane

0x8b6e,	// (0x000454d0) aid_call_pane

0x8b76,	// (0x000454d8) popup_clock_analogue_window_g1

0x8b76,	// (0x000454d8) popup_clock_analogue_window_g2

0x5aa7,	// (0x00042409) popup_clock_analogue_window_g3

0x5ab0,	// (0x00042412) popup_clock_analogue_window_g4

0x25fe,	// (0x0003ef60) popup_clock_analogue_window_g5

0x0004,

0xf6d8,	// (0x0004c03a) popup_clock_analogue_window_g

0x5ab8,	// (0x0004241a) popup_clock_analogue_window_t1

0x5ac6,	// (0x00042428) clock_digital_number_pane_ParamLimits

0x5ac6,	// (0x00042428) clock_digital_number_pane

0x5ad2,	// (0x00042434) clock_digital_number_pane_cp02_ParamLimits

0x5ad2,	// (0x00042434) clock_digital_number_pane_cp02

0x5ade,	// (0x00042440) clock_digital_number_pane_cp03_ParamLimits

0x5ade,	// (0x00042440) clock_digital_number_pane_cp03

0x5aea,	// (0x0004244c) clock_digital_number_pane_cp04_ParamLimits

0x5aea,	// (0x0004244c) clock_digital_number_pane_cp04

0x5af6,	// (0x00042458) clock_digital_separator_pane_ParamLimits

0x5af6,	// (0x00042458) clock_digital_separator_pane

0x5b02,	// (0x00042464) popup_clock_digital_window_t1_ParamLimits

0x5b02,	// (0x00042464) popup_clock_digital_window_t1

0x25fe,	// (0x0003ef60) clock_digital_number_pane_g1

0x25fe,	// (0x0003ef60) clock_digital_number_pane_g2

0x0001,

0xf6e3,	// (0x0004c045) clock_digital_number_pane_g

0x25fe,	// (0x0003ef60) clock_digital_separator_pane_g1

0x25fe,	// (0x0003ef60) clock_digital_separator_pane_g2

0x0001,

0xf6e3,	// (0x0004c045) clock_digital_separator_pane_g

0x9503,	// (0x00045e65) aid_fill_nsta_ParamLimits

0x964f,	// (0x00045fb1) indicator_nsta_pane_ParamLimits

0x97c8,	// (0x0004612a) popup_clock_analogue_window

0x97c8,	// (0x0004612a) popup_clock_digital_window

0xb9fd,	// (0x0004835f) grid_indicator_nsta_pane_ParamLimits

0xba26,	// (0x00048388) clock_nsta_pane_t2

0x0001,

0xfa72,	// (0x0004c3d4) clock_nsta_pane_t

0x5a6b,	// (0x000423cd) aid_size_max_handle

0x5a75,	// (0x000423d7) aid_size_min_handle

0x91a3,	// (0x00045b05) editor_scroll_pane

0xc7e9,	// (0x0004914b) ex_editor_pane

0x8661,	// (0x00044fc3) scroll_pane_cp13

0x8480,	// (0x00044de2) scroll_pane_cp14

0x8ba5,	// (0x00045507) scroll_pane_cp36

0x8bd1,	// (0x00045533) list_single_graphic_hl_pane_cp2_ParamLimits

0x8bd1,	// (0x00045533) list_single_graphic_hl_pane_cp2

0xafc2,	// (0x00047924) list_single_graphic_hl_pane_ParamLimits

0xafc2,	// (0x00047924) list_single_graphic_hl_pane

0x5269,	// (0x00041bcb) aid_size_min_hl_cp1

0xc7f1,	// (0x00049153) list_highlight_pane_cp34_ParamLimits

0xc7f1,	// (0x00049153) list_highlight_pane_cp34

0xc802,	// (0x00049164) list_single_graphic_hl_pane_g1_ParamLimits

0xc802,	// (0x00049164) list_single_graphic_hl_pane_g1

0x5272,	// (0x00041bd4) list_single_graphic_hl_pane_g2_ParamLimits

0x5272,	// (0x00041bd4) list_single_graphic_hl_pane_g2

0x5272,	// (0x00041bd4) list_single_graphic_hl_pane_g3_ParamLimits

0x5272,	// (0x00041bd4) list_single_graphic_hl_pane_g3

0x90e8,	// (0x00045a4a) list_single_graphic_hl_pane_g4_ParamLimits

0x90e8,	// (0x00045a4a) list_single_graphic_hl_pane_g4

0x6db4,	// (0x00043716) list_single_graphic_hl_pane_g5_ParamLimits

0x6db4,	// (0x00043716) list_single_graphic_hl_pane_g5

0x0004,

0xfbb1,	// (0x0004c513) list_single_graphic_hl_pane_g_ParamLimits

0xfbb1,	// (0x0004c513) list_single_graphic_hl_pane_g

0x527e,	// (0x00041be0) list_single_graphic_hl_pane_t1_ParamLimits

0x527e,	// (0x00041be0) list_single_graphic_hl_pane_t1

0xc80f,	// (0x00049171) aid_size_min_hl_cp2

0xc818,	// (0x0004917a) list_highlight_pane_cp34_cp2_ParamLimits

0xc818,	// (0x0004917a) list_highlight_pane_cp34_cp2

0xc802,	// (0x00049164) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc802,	// (0x00049164) list_single_graphic_hl_pane_g1_cp2

0xc825,	// (0x00049187) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc825,	// (0x00049187) list_single_graphic_hl_pane_g2_cp2

0xc831,	// (0x00049193) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc831,	// (0x00049193) list_single_graphic_hl_pane_g3_cp2

0xc83f,	// (0x000491a1) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc83f,	// (0x000491a1) list_single_graphic_hl_pane_g4_cp2

0xc84b,	// (0x000491ad) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc84b,	// (0x000491ad) list_single_graphic_hl_pane_g5_cp2

0x5dd2,	// (0x00042734) control_pane_g4_ParamLimits

0x5dd2,	// (0x00042734) control_pane_g4

0x94c7,	// (0x00045e29) bg_popup_sub_pane_cp10_ParamLimits

0xc02c,	// (0x0004898e) list_choice_list_pane_ParamLimits

0xc03b,	// (0x0004899d) scroll_pane_cp23

0x7edd,	// (0x0004483f) bg_popup_preview_window_pane_cp02_ParamLimits

0xc665,	// (0x00048fc7) list_preview_fixed_pane_ParamLimits

0xc67b,	// (0x00048fdd) list_preview_fixed_pane_cp_ParamLimits

0xc67b,	// (0x00048fdd) list_preview_fixed_pane_cp

0xc687,	// (0x00048fe9) popup_preview_fixed_window_g1_ParamLimits

0xc687,	// (0x00048fe9) popup_preview_fixed_window_g1

0xc693,	// (0x00048ff5) popup_preview_fixed_window_g2_ParamLimits

0xc693,	// (0x00048ff5) popup_preview_fixed_window_g2

0x0002,

0xfb40,	// (0x0004c4a2) popup_preview_fixed_window_g_ParamLimits

0xfb40,	// (0x0004c4a2) popup_preview_fixed_window_g

0x59df,	// (0x00042341) aid_navi_side_left_pane_ParamLimits

0x59f4,	// (0x00042356) aid_navi_side_right_pane_ParamLimits

0x5a0c,	// (0x0004236e) navi_icon_pane_stacon_ParamLimits

0x5a20,	// (0x00042382) navi_navi_pane_stacon_ParamLimits

0x5a0c,	// (0x0004236e) navi_text_pane_stacon_ParamLimits

0x25f4,	// (0x0003ef56) main_text_info_pane

0xc875,	// (0x000491d7) listscroll_text_info_pane

0xc87d,	// (0x000491df) list_text_info_pane_ParamLimits

0xc87d,	// (0x000491df) list_text_info_pane

0xc88c,	// (0x000491ee) scroll_pane_cp24_ParamLimits

0xc88c,	// (0x000491ee) scroll_pane_cp24

0xc8aa,	// (0x0004920c) list_text_info_pane_t1_ParamLimits

0xc8aa,	// (0x0004920c) list_text_info_pane_t1

0x5f46,	// (0x000428a8) popup_fast_swap2_window_ParamLimits

0x5f46,	// (0x000428a8) popup_fast_swap2_window

0xc8db,	// (0x0004923d) aid_size_cell_fast2

0x25f4,	// (0x0003ef56) bg_popup_window_pane_cp17

0xc8e5,	// (0x00049247) heading_pane_cp2

0xc8ed,	// (0x0004924f) listscroll_fast2_pane

0xc8f5,	// (0x00049257) grid_fast2_pane

0xc8ff,	// (0x00049261) listscroll_fast2_pane_g1

0xc907,	// (0x00049269) listscroll_fast2_pane_g2

0x0001,

0xfbbc,	// (0x0004c51e) listscroll_fast2_pane_g

0x8661,	// (0x00044fc3) scroll_pane_cp26

0xc911,	// (0x00049273) cell_fast2_pane_ParamLimits

0xc911,	// (0x00049273) cell_fast2_pane

0xc926,	// (0x00049288) cell_fast2_pane_g1

0xc92f,	// (0x00049291) cell_fast2_pane_g2

0xc938,	// (0x0004929a) cell_fast2_pane_g3

0x0002,

0xfbc1,	// (0x0004c523) cell_fast2_pane_g

0x823d,	// (0x00044b9f) grid_highlight_pane_cp9

0x8252,	// (0x00044bb4) main_eswt_pane_ParamLimits

0x8252,	// (0x00044bb4) main_eswt_pane

0xc8a1,	// (0x00049203) list_single_text_info_pane

0xc940,	// (0x000492a2) eswt_ctrl_button_pane

0xc940,	// (0x000492a2) eswt_ctrl_canvas_pane

0xc948,	// (0x000492aa) eswt_ctrl_combo_pane

0xc940,	// (0x000492a2) eswt_ctrl_default_pane

0xc940,	// (0x000492a2) eswt_ctrl_label_pane

0xc950,	// (0x000492b2) eswt_ctrl_wait_pane

0xc958,	// (0x000492ba) eswt_shell_pane

0x25f4,	// (0x0003ef56) listscroll_eswt_app_pane

0xc978,	// (0x000492da) popup_eswt_tasktip_window_ParamLimits

0xc978,	// (0x000492da) popup_eswt_tasktip_window

0x9a65,	// (0x000463c7) bg_popup_window_pane_cp18

0xc991,	// (0x000492f3) eswt_control_pane_g1_ParamLimits

0xc991,	// (0x000492f3) eswt_control_pane_g1

0xc99e,	// (0x00049300) eswt_control_pane_g2_ParamLimits

0xc99e,	// (0x00049300) eswt_control_pane_g2

0xc9ab,	// (0x0004930d) eswt_control_pane_g3_ParamLimits

0xc9ab,	// (0x0004930d) eswt_control_pane_g3

0xc9b8,	// (0x0004931a) eswt_control_pane_g4_ParamLimits

0xc9b8,	// (0x0004931a) eswt_control_pane_g4

0x0003,

0xfbc8,	// (0x0004c52a) eswt_control_pane_g_ParamLimits

0xfbc8,	// (0x0004c52a) eswt_control_pane_g

0x84ed,	// (0x00044e4f) bg_button_pane_ParamLimits

0x84ed,	// (0x00044e4f) bg_button_pane

0x8252,	// (0x00044bb4) common_borders_pane_copy2_ParamLimits

0x8252,	// (0x00044bb4) common_borders_pane_copy2

0xc9c5,	// (0x00049327) control_button_pane_g1_ParamLimits

0xc9c5,	// (0x00049327) control_button_pane_g1

0xc9d1,	// (0x00049333) control_button_pane_g2_ParamLimits

0xc9d1,	// (0x00049333) control_button_pane_g2

0xc9dd,	// (0x0004933f) control_button_pane_g3_ParamLimits

0xc9dd,	// (0x0004933f) control_button_pane_g3

0x0002,

0xfbd1,	// (0x0004c533) control_button_pane_g_ParamLimits

0xfbd1,	// (0x0004c533) control_button_pane_g

0xc9f1,	// (0x00049353) control_button_pane_t1

0xc9ff,	// (0x00049361) control_button_pane_t2

0x0001,

0xfbd8,	// (0x0004c53a) control_button_pane_t

0x99f1,	// (0x00046353) bg_button_pane_g1

0x99f9,	// (0x0004635b) bg_button_pane_g2

0x9a01,	// (0x00046363) bg_button_pane_g3

0x9a09,	// (0x0004636b) bg_button_pane_g4

0x9a11,	// (0x00046373) bg_button_pane_g5

0x9a19,	// (0x0004637b) bg_button_pane_g6

0x9a21,	// (0x00046383) bg_button_pane_g7

0x9a29,	// (0x0004638b) bg_button_pane_g8

0x9a31,	// (0x00046393) bg_button_pane_g9

0x0008,

0xf841,	// (0x0004c1a3) bg_button_pane_g

0xbfe7,	// (0x00048949) common_borders_pane_ParamLimits

0xbfe7,	// (0x00048949) common_borders_pane

0xc991,	// (0x000492f3) eswt_control_pane_g1_copy1_ParamLimits

0xc991,	// (0x000492f3) eswt_control_pane_g1_copy1

0xc99e,	// (0x00049300) eswt_control_pane_g2_copy1_ParamLimits

0xc99e,	// (0x00049300) eswt_control_pane_g2_copy1

0xc9ab,	// (0x0004930d) eswt_control_pane_g3_copy1_ParamLimits

0xc9ab,	// (0x0004930d) eswt_control_pane_g3_copy1

0xc9b8,	// (0x0004931a) eswt_control_pane_g4_copy1_ParamLimits

0xc9b8,	// (0x0004931a) eswt_control_pane_g4_copy1

0xc022,	// (0x00048984) bg_eswt_ctrl_canvas_pane_g1

0xbfe7,	// (0x00048949) common_borders_pane_cp2_ParamLimits

0xbfe7,	// (0x00048949) common_borders_pane_cp2

0xbfe7,	// (0x00048949) common_borders_pane_cp3_ParamLimits

0xbfe7,	// (0x00048949) common_borders_pane_cp3

0xca0d,	// (0x0004936f) separator_horizontal_pane

0xca15,	// (0x00049377) separator_vertical_pane

0xc991,	// (0x000492f3) eswt_control_pane_g1_copy2_ParamLimits

0xc991,	// (0x000492f3) eswt_control_pane_g1_copy2

0xc99e,	// (0x00049300) eswt_control_pane_g2_copy2_ParamLimits

0xc99e,	// (0x00049300) eswt_control_pane_g2_copy2

0xc9ab,	// (0x0004930d) eswt_control_pane_g3_copy2_ParamLimits

0xc9ab,	// (0x0004930d) eswt_control_pane_g3_copy2

0xc9b8,	// (0x0004931a) eswt_control_pane_g4_copy2_ParamLimits

0xc9b8,	// (0x0004931a) eswt_control_pane_g4_copy2

0x25f4,	// (0x0003ef56) common_borders_pane_cp4

0xca1e,	// (0x00049380) separator_horizontal_pane_g1

0xca27,	// (0x00049389) separator_horizontal_pane_g2

0xca30,	// (0x00049392) separator_horizontal_pane_g3

0x0002,

0xfbdd,	// (0x0004c53f) separator_horizontal_pane_g

0xc991,	// (0x000492f3) eswt_control_pane_g1_copy3_ParamLimits

0xc991,	// (0x000492f3) eswt_control_pane_g1_copy3

0xc99e,	// (0x00049300) eswt_control_pane_g2_copy3_ParamLimits

0xc99e,	// (0x00049300) eswt_control_pane_g2_copy3

0xc9ab,	// (0x0004930d) eswt_control_pane_g3_copy3_ParamLimits

0xc9ab,	// (0x0004930d) eswt_control_pane_g3_copy3

0xc9b8,	// (0x0004931a) eswt_control_pane_g4_copy3_ParamLimits

0xc9b8,	// (0x0004931a) eswt_control_pane_g4_copy3

0x25f4,	// (0x0003ef56) common_borders_pane_cp5

0xca39,	// (0x0004939b) separator_vertical_pane_g1

0xca42,	// (0x000493a4) separator_vertical_pane_g2

0xca4b,	// (0x000493ad) separator_vertical_pane_g3

0x0002,

0xfbe4,	// (0x0004c546) separator_vertical_pane_g

0xc991,	// (0x000492f3) eswt_control_pane_g1_copy4_ParamLimits

0xc991,	// (0x000492f3) eswt_control_pane_g1_copy4

0xc99e,	// (0x00049300) eswt_control_pane_g2_copy4_ParamLimits

0xc99e,	// (0x00049300) eswt_control_pane_g2_copy4

0xc9ab,	// (0x0004930d) eswt_control_pane_g3_copy4_ParamLimits

0xc9ab,	// (0x0004930d) eswt_control_pane_g3_copy4

0xc9b8,	// (0x0004931a) eswt_control_pane_g4_copy4_ParamLimits

0xc9b8,	// (0x0004931a) eswt_control_pane_g4_copy4

0xca54,	// (0x000493b6) eswt_ctrl_combo_button_pane

0xca5c,	// (0x000493be) eswt_ctrl_input_pane

0xca64,	// (0x000493c6) popup_choice_list_window_cp70

0xca6c,	// (0x000493ce) eswt_ctrl_input_pane_t1

0x25f4,	// (0x0003ef56) input_focus_pane_cp70

0xbfe7,	// (0x00048949) bg_button_pane_cp70_ParamLimits

0xbfe7,	// (0x00048949) bg_button_pane_cp70

0xca7a,	// (0x000493dc) eswt_ctrl_combo_button_pane_g1

0xca82,	// (0x000493e4) wait_bar_pane_cp70

0x9a65,	// (0x000463c7) bg_popup_window_pane_cp70_ParamLimits

0x9a65,	// (0x000463c7) bg_popup_window_pane_cp70

0xca8a,	// (0x000493ec) popup_eswt_tasktip_window_t1

0xcaa0,	// (0x00049402) wait_bar_pane_cp71_ParamLimits

0xcaa0,	// (0x00049402) wait_bar_pane_cp71

0xcaac,	// (0x0004940e) grid_eswt_app_pane

0x8988,	// (0x000452ea) scroll_pane_cp70

0xcab5,	// (0x00049417) cell_eswt_app_pane_ParamLimits

0xcab5,	// (0x00049417) cell_eswt_app_pane

0xcae5,	// (0x00049447) cell_eswt_app_pane_g1_ParamLimits

0xcae5,	// (0x00049447) cell_eswt_app_pane_g1

0xcb14,	// (0x00049476) cell_eswt_app_pane_g2_ParamLimits

0xcb14,	// (0x00049476) cell_eswt_app_pane_g2

0x0001,

0xfbeb,	// (0x0004c54d) cell_eswt_app_pane_g_ParamLimits

0xfbeb,	// (0x0004c54d) cell_eswt_app_pane_g

0xcb3d,	// (0x0004949f) cell_eswt_app_pane_t1_ParamLimits

0xcb3d,	// (0x0004949f) cell_eswt_app_pane_t1

0xcb6f,	// (0x000494d1) grid_highlight_pane_cp70_ParamLimits

0xcb6f,	// (0x000494d1) grid_highlight_pane_cp70

0x907b,	// (0x000459dd) set_content_pane_g1

0x944e,	// (0x00045db0) status_small_volume_pane

0x6dc8,	// (0x0004372a) status_small_volume_pane_g1

0x6dd0,	// (0x00043732) volume_small2_pane

0x6dd9,	// (0x0004373b) volume_small2_pane_g1

0x6de2,	// (0x00043744) volume_small2_pane_g2

0x6deb,	// (0x0004374d) volume_small2_pane_g3

0x6df4,	// (0x00043756) volume_small2_pane_g4

0x6dfd,	// (0x0004375f) volume_small2_pane_g5

0x6e06,	// (0x00043768) volume_small2_pane_g6

0x6e0f,	// (0x00043771) volume_small2_pane_g7

0x6e18,	// (0x0004377a) volume_small2_pane_g8

0x6e21,	// (0x00043783) volume_small2_pane_g9

0x6e2a,	// (0x0004378c) volume_small2_pane_g10

0x0009,

0xfbf0,	// (0x0004c552) volume_small2_pane_g

0xc3e8,	// (0x00048d4a) fep_vkb_top_text_pane_g1_ParamLimits

0xc403,	// (0x00048d65) fep_vkb_top_text_pane_t1_ParamLimits

0xc69f,	// (0x00049001) popup_preview_fixed_window_g3_ParamLimits

0xc69f,	// (0x00049001) popup_preview_fixed_window_g3

0x63f7,	// (0x00042d59) popup_toolbar_trans_pane

0xadc9,	// (0x0004772b) aid_height_set_list_ParamLimits

0xadda,	// (0x0004773c) aid_size_parent_ParamLimits

0x94c7,	// (0x00045e29) list_highlight_pane_cp2_ParamLimits

0x907b,	// (0x000459dd) set_content_pane_g1_ParamLimits

0x4e21,	// (0x00041783) list_single_image_pane_ParamLimits

0x4e21,	// (0x00041783) list_single_image_pane

0xcb7b,	// (0x000494dd) aid_size_cell_image_ParamLimits

0xcb7b,	// (0x000494dd) aid_size_cell_image

0xcb88,	// (0x000494ea) grid_single_image_pane_ParamLimits

0xcb88,	// (0x000494ea) grid_single_image_pane

0xb012,	// (0x00047974) list_single_image_pane_g1_ParamLimits

0xb012,	// (0x00047974) list_single_image_pane_g1

0xcb94,	// (0x000494f6) list_single_image_pane_g2_ParamLimits

0xcb94,	// (0x000494f6) list_single_image_pane_g2

0x0001,

0xfc05,	// (0x0004c567) list_single_image_pane_g_ParamLimits

0xfc05,	// (0x0004c567) list_single_image_pane_g

0xcba8,	// (0x0004950a) list_single_image_pane_t1_ParamLimits

0xcba8,	// (0x0004950a) list_single_image_pane_t1

0xcbbe,	// (0x00049520) cell_image_list_pane_ParamLimits

0xcbbe,	// (0x00049520) cell_image_list_pane

0xcbd2,	// (0x00049534) cell_image_list_pane_g1

0xcbdb,	// (0x0004953d) cell_image_list_pane_g2

0x0001,

0xfc0a,	// (0x0004c56c) cell_image_list_pane_g

0xcbe4,	// (0x00049546) aid_size_cell_tb_trans_pane

0x84ed,	// (0x00044e4f) bg_tb_trans_pane

0xcbf6,	// (0x00049558) grid_tb_trans_pane

0x99f1,	// (0x00046353) bg_tb_trans_pane_g1

0x99f9,	// (0x0004635b) bg_tb_trans_pane_g2

0x9a01,	// (0x00046363) bg_tb_trans_pane_g3

0x9a09,	// (0x0004636b) bg_tb_trans_pane_g4

0x9a11,	// (0x00046373) bg_tb_trans_pane_g5

0x9a29,	// (0x0004638b) bg_tb_trans_pane_g6

0x9a31,	// (0x00046393) bg_tb_trans_pane_g7

0x9a19,	// (0x0004637b) bg_tb_trans_pane_g8

0x9a21,	// (0x00046383) bg_tb_trans_pane_g9

0x0008,

0xfc0f,	// (0x0004c571) bg_tb_trans_pane_g

0xcc0a,	// (0x0004956c) cell_toolbar_trans_pane_ParamLimits

0xcc0a,	// (0x0004956c) cell_toolbar_trans_pane

0xc022,	// (0x00048984) cell_toolbar_trans_pane_g1

0xbbf7,	// (0x00048559) list_form2_midp_pane_t1

0xbc05,	// (0x00048567) list_form2_midp_pane_t2

0x0001,

0xfab8,	// (0x0004c41a) list_form2_midp_pane_t

0xbc13,	// (0x00048575) scroll_pane_cp51_ParamLimits

0xbdcf,	// (0x00048731) form2_midp_wait_pane_g1

0xbdd8,	// (0x0004873a) form2_midp_wait_pane_g2

0xbde1,	// (0x00048743) form2_midp_wait_pane_g3

0x0002,

0xfacd,	// (0x0004c42f) form2_midp_wait_pane_g

0x7c54,	// (0x000445b6) list_highlight_pane_cp21_ParamLimits

0xbe2d,	// (0x0004878f) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbe3c,	// (0x0004879e) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6850,	// (0x000431b2) list_single_2graphic_im_pane_ParamLimits

0x6850,	// (0x000431b2) list_single_2graphic_im_pane

0xcc30,	// (0x00049592) list_single_2graphic_im_pane_g1_ParamLimits

0xcc30,	// (0x00049592) list_single_2graphic_im_pane_g1

0xcc41,	// (0x000495a3) list_single_2graphic_im_pane_g2_ParamLimits

0xcc41,	// (0x000495a3) list_single_2graphic_im_pane_g2

0xcc4d,	// (0x000495af) list_single_2graphic_im_pane_g3_ParamLimits

0xcc4d,	// (0x000495af) list_single_2graphic_im_pane_g3

0x0003,

0xfc22,	// (0x0004c584) list_single_2graphic_im_pane_g_ParamLimits

0xfc22,	// (0x0004c584) list_single_2graphic_im_pane_g

0xcc6d,	// (0x000495cf) list_single_2graphic_im_pane_t1_ParamLimits

0xcc6d,	// (0x000495cf) list_single_2graphic_im_pane_t1

0xc6ab,	// (0x0004900d) list_single_graphic_2heading_pane_fp_ParamLimits

0xc6ab,	// (0x0004900d) list_single_graphic_2heading_pane_fp

0x514b,	// (0x00041aad) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x514b,	// (0x00041aad) list_single_graphic_2heading_pane_fp_g1

0xc6c0,	// (0x00049022) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc6c0,	// (0x00049022) list_single_graphic_2heading_pane_fp_g2

0x8488,	// (0x00044dea) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x8488,	// (0x00044dea) list_single_graphic_2heading_pane_fp_g3

0x84fb,	// (0x00044e5d) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x84fb,	// (0x00044e5d) list_single_graphic_2heading_pane_fp_g4

0xc6cc,	// (0x0004902e) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc6cc,	// (0x0004902e) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb50,	// (0x0004c4b2) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb50,	// (0x0004c4b2) list_single_graphic_2heading_pane_fp_g

0x5294,	// (0x00041bf6) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5294,	// (0x00041bf6) list_single_graphic_2heading_pane_fp_t1

0x5183,	// (0x00041ae5) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5183,	// (0x00041ae5) list_single_graphic_2heading_pane_fp_t2

0x52aa,	// (0x00041c0c) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x52aa,	// (0x00041c0c) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc2b,	// (0x0004c58d) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc2b,	// (0x0004c58d) list_single_graphic_2heading_pane_fp_t

0xc0ae,	// (0x00048a10) fep_hwr_write_pane_g5_ParamLimits

0xc0ae,	// (0x00048a10) fep_hwr_write_pane_g5

0xc0ba,	// (0x00048a1c) fep_hwr_write_pane_g6_ParamLimits

0xc0ba,	// (0x00048a1c) fep_hwr_write_pane_g6

0xc958,	// (0x000492ba) eswt_shell_pane_ParamLimits

0x9a65,	// (0x000463c7) bg_popup_window_pane_cp18_ParamLimits

0xc989,	// (0x000492eb) heading_pane_cp70

0xca8a,	// (0x000493ec) popup_eswt_tasktip_window_t1_ParamLimits

0x9558,	// (0x00045eba) aid_touch_tab_arrow_left

0x9567,	// (0x00045ec9) aid_touch_tab_arrow_right

0x7b9c,	// (0x000444fe) title_pane_g3_ParamLimits

0x7b9c,	// (0x000444fe) title_pane_g3

0x84ac,	// (0x00044e0e) set_value_pane_g1

0x63f7,	// (0x00042d59) popup_toolbar_trans_pane_ParamLimits

0xcbe4,	// (0x00049546) aid_size_cell_tb_trans_pane_ParamLimits

0x84ed,	// (0x00044e4f) bg_tb_trans_pane_ParamLimits

0xcbf6,	// (0x00049558) grid_tb_trans_pane_ParamLimits

0x7edd,	// (0x0004483f) cont_note_pane_ParamLimits

0x7edd,	// (0x0004483f) cont_note_pane

0x8252,	// (0x00044bb4) cont_snote2_single_text_pane_ParamLimits

0x8252,	// (0x00044bb4) cont_snote2_single_text_pane

0x8252,	// (0x00044bb4) cont_snote2_single_graphic_pane_ParamLimits

0x8252,	// (0x00044bb4) cont_snote2_single_graphic_pane

0xa080,	// (0x000469e2) cont_note_wait_pane_ParamLimits

0xa080,	// (0x000469e2) cont_note_wait_pane

0xa080,	// (0x000469e2) cont_note_image_pane_ParamLimits

0xa080,	// (0x000469e2) cont_note_image_pane

0xcc9e,	// (0x00049600) popup_note2_window_g1_ParamLimits

0xcc9e,	// (0x00049600) popup_note2_window_g1

0xcccf,	// (0x00049631) popup_note2_window_t1_ParamLimits

0xcccf,	// (0x00049631) popup_note2_window_t1

0xcd14,	// (0x00049676) popup_note2_window_t2_ParamLimits

0xcd14,	// (0x00049676) popup_note2_window_t2

0xcd59,	// (0x000496bb) popup_note2_window_t3_ParamLimits

0xcd59,	// (0x000496bb) popup_note2_window_t3

0xcd9e,	// (0x00049700) popup_note2_window_t4_ParamLimits

0xcd9e,	// (0x00049700) popup_note2_window_t4

0x7f61,	// (0x000448c3) popup_note2_window_t5_ParamLimits

0x7f61,	// (0x000448c3) popup_note2_window_t5

0x0004,

0xfc37,	// (0x0004c599) popup_note2_window_t_ParamLimits

0xfc37,	// (0x0004c599) popup_note2_window_t

0xcdcd,	// (0x0004972f) popup_note2_image_window_g1_ParamLimits

0xcdcd,	// (0x0004972f) popup_note2_image_window_g1

0xcdd9,	// (0x0004973b) popup_note2_image_window_g2_ParamLimits

0xcdd9,	// (0x0004973b) popup_note2_image_window_g2

0x0001,

0xfc42,	// (0x0004c5a4) popup_note2_image_window_g_ParamLimits

0xfc42,	// (0x0004c5a4) popup_note2_image_window_g

0xcdeb,	// (0x0004974d) popup_note2_image_window_t1_ParamLimits

0xcdeb,	// (0x0004974d) popup_note2_image_window_t1

0xce03,	// (0x00049765) popup_note2_image_window_t2_ParamLimits

0xce03,	// (0x00049765) popup_note2_image_window_t2

0xce1b,	// (0x0004977d) popup_note2_image_window_t3_ParamLimits

0xce1b,	// (0x0004977d) popup_note2_image_window_t3

0x0002,

0xfc47,	// (0x0004c5a9) popup_note2_image_window_t_ParamLimits

0xfc47,	// (0x0004c5a9) popup_note2_image_window_t

0xa08e,	// (0x000469f0) popup_note2_wait_window_g1_ParamLimits

0xa08e,	// (0x000469f0) popup_note2_wait_window_g1

0xce37,	// (0x00049799) popup_note2_wait_window_g2_ParamLimits

0xce37,	// (0x00049799) popup_note2_wait_window_g2

0xa0a6,	// (0x00046a08) popup_note2_wait_window_g3_ParamLimits

0xa0a6,	// (0x00046a08) popup_note2_wait_window_g3

0x0002,

0xfc4e,	// (0x0004c5b0) popup_note2_wait_window_g_ParamLimits

0xfc4e,	// (0x0004c5b0) popup_note2_wait_window_g

0xce43,	// (0x000497a5) popup_note2_wait_window_t1_ParamLimits

0xce43,	// (0x000497a5) popup_note2_wait_window_t1

0xce61,	// (0x000497c3) popup_note2_wait_window_t2_ParamLimits

0xce61,	// (0x000497c3) popup_note2_wait_window_t2

0xce7f,	// (0x000497e1) popup_note2_wait_window_t3_ParamLimits

0xce7f,	// (0x000497e1) popup_note2_wait_window_t3

0xce91,	// (0x000497f3) popup_note2_wait_window_t4_ParamLimits

0xce91,	// (0x000497f3) popup_note2_wait_window_t4

0x0003,

0xfc55,	// (0x0004c5b7) popup_note2_wait_window_t_ParamLimits

0xfc55,	// (0x0004c5b7) popup_note2_wait_window_t

0xcea3,	// (0x00049805) wait_bar2_pane_ParamLimits

0xcea3,	// (0x00049805) wait_bar2_pane

0xcebb,	// (0x0004981d) popup_snote2_single_text_window_g1_ParamLimits

0xcebb,	// (0x0004981d) popup_snote2_single_text_window_g1

0xcee3,	// (0x00049845) popup_snote2_single_text_window_t1_ParamLimits

0xcee3,	// (0x00049845) popup_snote2_single_text_window_t1

0xcf2f,	// (0x00049891) popup_snote2_single_text_window_t2_ParamLimits

0xcf2f,	// (0x00049891) popup_snote2_single_text_window_t2

0xcf7b,	// (0x000498dd) popup_snote2_single_text_window_t3_ParamLimits

0xcf7b,	// (0x000498dd) popup_snote2_single_text_window_t3

0xcfbc,	// (0x0004991e) popup_snote2_single_text_window_t4_ParamLimits

0xcfbc,	// (0x0004991e) popup_snote2_single_text_window_t4

0xcff2,	// (0x00049954) popup_snote2_single_text_window_t5_ParamLimits

0xcff2,	// (0x00049954) popup_snote2_single_text_window_t5

0x0004,

0xfc5e,	// (0x0004c5c0) popup_snote2_single_text_window_t_ParamLimits

0xfc5e,	// (0x0004c5c0) popup_snote2_single_text_window_t

0xd01d,	// (0x0004997f) popup_snote2_single_graphic_window_g1_ParamLimits

0xd01d,	// (0x0004997f) popup_snote2_single_graphic_window_g1

0xd045,	// (0x000499a7) popup_snote2_single_graphic_window_g2_ParamLimits

0xd045,	// (0x000499a7) popup_snote2_single_graphic_window_g2

0x0001,

0xfc69,	// (0x0004c5cb) popup_snote2_single_graphic_window_g_ParamLimits

0xfc69,	// (0x0004c5cb) popup_snote2_single_graphic_window_g

0xd06d,	// (0x000499cf) popup_snote2_single_graphic_window_t1_ParamLimits

0xd06d,	// (0x000499cf) popup_snote2_single_graphic_window_t1

0xd0b9,	// (0x00049a1b) popup_snote2_single_graphic_window_t2_ParamLimits

0xd0b9,	// (0x00049a1b) popup_snote2_single_graphic_window_t2

0xcf7b,	// (0x000498dd) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf7b,	// (0x000498dd) popup_snote2_single_graphic_window_t3

0xcfbc,	// (0x0004991e) popup_snote2_single_graphic_window_t4_ParamLimits

0xcfbc,	// (0x0004991e) popup_snote2_single_graphic_window_t4

0xcff2,	// (0x00049954) popup_snote2_single_graphic_window_t5_ParamLimits

0xcff2,	// (0x00049954) popup_snote2_single_graphic_window_t5

0x0004,

0xfc6e,	// (0x0004c5d0) popup_snote2_single_graphic_window_t_ParamLimits

0xfc6e,	// (0x0004c5d0) popup_snote2_single_graphic_window_t

0xbad4,	// (0x00048436) clock_nsta_pane_cp2_t1

0xbad4,	// (0x00048436) clock_nsta_pane_cp2_t2

0x0001,

0xfa8e,	// (0x0004c3f0) clock_nsta_pane_cp2_t

0x4a78,	// (0x000413da) form_field_data_wide_pane_g1_ParamLimits

0x8488,	// (0x00044dea) form_field_data_wide_pane_g2_ParamLimits

0x8488,	// (0x00044dea) form_field_data_wide_pane_g2

0x84fb,	// (0x00044e5d) form_field_data_wide_pane_g3_ParamLimits

0x84fb,	// (0x00044e5d) form_field_data_wide_pane_g3

0x0002,

0xf65b,	// (0x0004bfbd) form_field_data_wide_pane_g_ParamLimits

0xf65b,	// (0x0004bfbd) form_field_data_wide_pane_g

0xb9b0,	// (0x00048312) grid_touch_3_pane_ParamLimits

0xb9b0,	// (0x00048312) grid_touch_3_pane

0xd105,	// (0x00049a67) cell_touch_3_pane_ParamLimits

0xd105,	// (0x00049a67) cell_touch_3_pane

0xc022,	// (0x00048984) cell_touch_3_pane_g1

0xc022,	// (0x00048984) cell_touch_3_pane_g2

0x0001,

0xfb13,	// (0x0004c475) cell_touch_3_pane_g

0x7fb9,	// (0x0004491b) cont_query_data_pane

0x7fc1,	// (0x00044923) cont_query_data_pane_cp1

0xd133,	// (0x00049a95) button_value_adjust_pane_cp7

0xd13b,	// (0x00049a9d) query_popup_pane_cp3

0x8c7f,	// (0x000455e1) bg_popup_sub_pane_cp22_ParamLimits

0x5b21,	// (0x00042483) navi_navi_volume_pane_cp2

0x5b3c,	// (0x0004249e) popup_side_volume_key_window_g2

0x5b4b,	// (0x000424ad) popup_side_volume_key_window_g3

0x0002,

0xf6f1,	// (0x0004c053) popup_side_volume_key_window_g

0x5b68,	// (0x000424ca) popup_side_volume_key_window_t2

0x0001,

0xf6f8,	// (0x0004c05a) popup_side_volume_key_window_t

0x8f45,	// (0x000458a7) popup_side_volume_key_window_ParamLimits

0x46a8,	// (0x0004100a) list_double_graphic_pane_g4_ParamLimits

0x46a8,	// (0x0004100a) list_double_graphic_pane_g4

0x688d,	// (0x000431ef) list_single_2heading_msg_pane_ParamLimits

0x688d,	// (0x000431ef) list_single_2heading_msg_pane

0x6e33,	// (0x00043795) list_single_2heading_msg_pane_g1_ParamLimits

0x6e33,	// (0x00043795) list_single_2heading_msg_pane_g1

0x6e3f,	// (0x000437a1) list_single_2heading_msg_pane_g2_ParamLimits

0x6e3f,	// (0x000437a1) list_single_2heading_msg_pane_g2

0x6e4b,	// (0x000437ad) list_single_2heading_msg_pane_g3_ParamLimits

0x6e4b,	// (0x000437ad) list_single_2heading_msg_pane_g3

0x6e57,	// (0x000437b9) list_single_2heading_msg_pane_g4_ParamLimits

0x6e57,	// (0x000437b9) list_single_2heading_msg_pane_g4

0x0003,

0xfc79,	// (0x0004c5db) list_single_2heading_msg_pane_g_ParamLimits

0xfc79,	// (0x0004c5db) list_single_2heading_msg_pane_g

0x52ca,	// (0x00041c2c) list_single_2heading_msg_pane_t1_ParamLimits

0x52ca,	// (0x00041c2c) list_single_2heading_msg_pane_t1

0x52f2,	// (0x00041c54) list_single_2heading_msg_pane_t2_ParamLimits

0x52f2,	// (0x00041c54) list_single_2heading_msg_pane_t2

0x5326,	// (0x00041c88) list_single_2heading_msg_pane_t3_ParamLimits

0x5326,	// (0x00041c88) list_single_2heading_msg_pane_t3

0x535f,	// (0x00041cc1) list_single_2heading_msg_pane_t4_ParamLimits

0x535f,	// (0x00041cc1) list_single_2heading_msg_pane_t4

0x0003,

0xfc82,	// (0x0004c5e4) list_single_2heading_msg_pane_t_ParamLimits

0xfc82,	// (0x0004c5e4) list_single_2heading_msg_pane_t

0x7ba8,	// (0x0004450a) title_pane_g4_ParamLimits

0x7ba8,	// (0x0004450a) title_pane_g4

0x5930,	// (0x00042292) title_pane_stacon_g3_ParamLimits

0x5930,	// (0x00042292) title_pane_stacon_g3

0xcc61,	// (0x000495c3) list_single_2graphic_im_pane_g4_ParamLimits

0xcc61,	// (0x000495c3) list_single_2graphic_im_pane_g4

0xaadf,	// (0x00047441) popup_side_volume_key_window_cp

0xb2fb,	// (0x00047c5d) main_idle_act2_pane_t1

0x64e9,	// (0x00042e4b) toolbar_button_pane_g10

0x844a,	// (0x00044dac) popup_toolbar_window_cp1

0xbac5,	// (0x00048427) clock_nsta_pane_cp_t1

0xbac5,	// (0x00048427) clock_nsta_pane_cp_t2

0x0001,

0xfa89,	// (0x0004c3eb) clock_nsta_pane_cp_t

0x5b21,	// (0x00042483) navi_navi_volume_pane_cp2_ParamLimits

0x5b30,	// (0x00042492) popup_side_volume_key_window_g1_ParamLimits

0x5b3c,	// (0x0004249e) popup_side_volume_key_window_g2_ParamLimits

0x5b4b,	// (0x000424ad) popup_side_volume_key_window_g3_ParamLimits

0xf6f1,	// (0x0004c053) popup_side_volume_key_window_g_ParamLimits

0x6a54,	// (0x000433b6) fep_hwr_aid_pane

0x25c4,	// (0x0003ef26) bg_fep_hwr_top_pane_g4_ParamLimits

0xc07e,	// (0x000489e0) fep_hwr_top_pane_g1_ParamLimits

0xc090,	// (0x000489f2) fep_hwr_top_pane_g2_ParamLimits

0x6b0d,	// (0x0004346f) fep_hwr_top_pane_g3_ParamLimits

0xfade,	// (0x0004c440) fep_hwr_top_pane_g_ParamLimits

0x6b22,	// (0x00043484) fep_hwr_top_text_pane_ParamLimits

0xa8a2,	// (0x00047204) aid_touch_tab_arrow_arrow_2

0xa8ab,	// (0x0004720d) aid_touch_tab_arrow_left_2

0x6a68,	// (0x000433ca) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6a9f,	// (0x00043401) fep_hwr_prediction_pane

0xc1f0,	// (0x00048b52) fep_vkb_prediction_pane

0xc2f4,	// (0x00048c56) fep_vkb_side_pane_g3_ParamLimits

0xc2f4,	// (0x00048c56) fep_vkb_side_pane_g3

0xc2a0,	// (0x00048c02) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc720,	// (0x00049082) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc72d,	// (0x0004908f) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb88,	// (0x0004c4ea) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd160,	// (0x00049ac2) fep_hwr_prediction_pane_g1

0x6e6f,	// (0x000437d1) fep_hwr_prediction_pane_g2

0x6e77,	// (0x000437d9) fep_hwr_prediction_pane_g3

0x6e7f,	// (0x000437e1) fep_hwr_prediction_pane_g4

0x0003,

0xfc8b,	// (0x0004c5ed) fep_hwr_prediction_pane_g

0xd160,	// (0x00049ac2) fep_vkb_prediction_pane_g1

0xd16a,	// (0x00049acc) fep_vkb_prediction_pane_g2

0xd172,	// (0x00049ad4) fep_vkb_prediction_pane_g3

0xd17a,	// (0x00049adc) fep_vkb_prediction_pane_g4

0x0003,

0xfc94,	// (0x0004c5f6) fep_vkb_prediction_pane_g

0x67dd,	// (0x0004313f) slider_set_pane_g3

0x67f1,	// (0x00043153) slider_set_pane_g4

0x6809,	// (0x0004316b) slider_set_pane_g5

0x67dd,	// (0x0004313f) slider_set_pane_g6

0x681f,	// (0x00043181) slider_set_pane_g7

0xaf3f,	// (0x000478a1) slider_form_pane_g3

0xaf48,	// (0x000478aa) slider_form_pane_g4

0xaf50,	// (0x000478b2) slider_form_pane_g5

0xaf3f,	// (0x000478a1) slider_form_pane_g6

0xaf58,	// (0x000478ba) slider_form_pane_g7

0xb5a6,	// (0x00047f08) slider_set_pane_vc_g3

0xb5af,	// (0x00047f11) slider_set_pane_vc_g4

0xb5b8,	// (0x00047f1a) slider_set_pane_vc_g5

0xb5a6,	// (0x00047f08) slider_set_pane_vc_g6

0xb5c1,	// (0x00047f23) slider_set_pane_vc_g7

0xb783,	// (0x000480e5) slider_form_pane_vc_g1

0xb78c,	// (0x000480ee) slider_form_pane_vc_g2

0xb795,	// (0x000480f7) slider_form_pane_vc_g3

0xb783,	// (0x000480e5) slider_form_pane_vc_g4

0xb79e,	// (0x00048100) slider_form_pane_vc_g5

0x0004,

0xfa5b,	// (0x0004c3bd) slider_form_pane_vc_g

0x25f4,	// (0x0003ef56) main_idle_act3_pane

0xd182,	// (0x00049ae4) ai3_links_pane

0xd18b,	// (0x00049aed) popup_ai3_data_window_ParamLimits

0xd18b,	// (0x00049aed) popup_ai3_data_window

0x25f4,	// (0x0003ef56) grid_ai3_links_pane

0xd1a5,	// (0x00049b07) cell_ai3_links_pane_ParamLimits

0xd1a5,	// (0x00049b07) cell_ai3_links_pane

0xd1bd,	// (0x00049b1f) bg_popup_sub_pane_cp11

0xd1ca,	// (0x00049b2c) cell_ai3_links_pane_g1

0x25f4,	// (0x0003ef56) bg_popup_sub_pane_cp12

0xd1ef,	// (0x00049b51) heading_ai3_data_pane

0xd1f7,	// (0x00049b59) list_ai3_gene_pane

0xd203,	// (0x00049b65) popup_ai3_data_window_g1

0xd20b,	// (0x00049b6d) heading_ai3_data_pane_g1

0xd213,	// (0x00049b75) heading_ai3_data_pane_t1

0xd221,	// (0x00049b83) list_double_ai3_gene_pane_ParamLimits

0xd221,	// (0x00049b83) list_double_ai3_gene_pane

0xd22e,	// (0x00049b90) list_single_ai3_gene_pane_ParamLimits

0xd22e,	// (0x00049b90) list_single_ai3_gene_pane

0xbfe7,	// (0x00048949) list_highlight_pane_cp7_ParamLimits

0xbfe7,	// (0x00048949) list_highlight_pane_cp7

0xd23b,	// (0x00049b9d) list_single_a13_gene_pane_t1_ParamLimits

0xd23b,	// (0x00049b9d) list_single_a13_gene_pane_t1

0xd252,	// (0x00049bb4) list_single_ai3_gene_pane_g1

0xd25b,	// (0x00049bbd) list_single_ai3_gene_pane_g2

0x0001,

0xfc9d,	// (0x0004c5ff) list_single_ai3_gene_pane_g

0xd263,	// (0x00049bc5) list_double_ai3_gene_pane_g1_ParamLimits

0xd263,	// (0x00049bc5) list_double_ai3_gene_pane_g1

0xd26f,	// (0x00049bd1) list_double_ai3_gene_pane_t1_ParamLimits

0xd26f,	// (0x00049bd1) list_double_ai3_gene_pane_t1

0xd28b,	// (0x00049bed) list_double_ai3_gene_pane_t2_ParamLimits

0xd28b,	// (0x00049bed) list_double_ai3_gene_pane_t2

0xd2a1,	// (0x00049c03) list_double_ai3_gene_pane_t3_ParamLimits

0xd2a1,	// (0x00049c03) list_double_ai3_gene_pane_t3

0x0002,

0xfca2,	// (0x0004c604) list_double_ai3_gene_pane_t_ParamLimits

0xfca2,	// (0x0004c604) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x52c0,	// (0x00041c22) aid_size_min_col_2

0xd14c,	// (0x00049aae) aid_size_min_msg_ParamLimits

0xd14c,	// (0x00049aae) aid_size_min_msg

0xc3f4,	// (0x00048d56) fep_vkb_top_text_pane_g2_ParamLimits

0xc3f4,	// (0x00048d56) fep_vkb_top_text_pane_g2

0x0001,

0xfb0e,	// (0x0004c470) fep_vkb_top_text_pane_g_ParamLimits

0xfb0e,	// (0x0004c470) fep_vkb_top_text_pane_g

0x25f4,	// (0x0003ef56) main_hc_apps_shell_pane

0xd2be,	// (0x00049c20) grid_hc_apps_pane_ParamLimits

0xd2be,	// (0x00049c20) grid_hc_apps_pane

0xd2d0,	// (0x00049c32) list_hc_apps_pane

0xd2d8,	// (0x00049c3a) scroll_pane_cp37_ParamLimits

0xd2d8,	// (0x00049c3a) scroll_pane_cp37

0xd2e4,	// (0x00049c46) cell_hc_apps_pane_ParamLimits

0xd2e4,	// (0x00049c46) cell_hc_apps_pane

0xd392,	// (0x00049cf4) cell_hc_apps_pane_g1_ParamLimits

0xd392,	// (0x00049cf4) cell_hc_apps_pane_g1

0xd3c2,	// (0x00049d24) cell_hc_apps_pane_g2_ParamLimits

0xd3c2,	// (0x00049d24) cell_hc_apps_pane_g2

0xd3de,	// (0x00049d40) cell_hc_apps_pane_g3_ParamLimits

0xd3de,	// (0x00049d40) cell_hc_apps_pane_g3

0x0002,

0xfca9,	// (0x0004c60b) cell_hc_apps_pane_g_ParamLimits

0xfca9,	// (0x0004c60b) cell_hc_apps_pane_g

0xd400,	// (0x00049d62) cell_hc_apps_pane_t1_ParamLimits

0xd400,	// (0x00049d62) cell_hc_apps_pane_t1

0x7edd,	// (0x0004483f) grid_highlight_pane_cp10_ParamLimits

0x7edd,	// (0x0004483f) grid_highlight_pane_cp10

0xd440,	// (0x00049da2) list_single_hc_apps_pane_ParamLimits

0xd440,	// (0x00049da2) list_single_hc_apps_pane

0xd49c,	// (0x00049dfe) list_single_hc_apps_pane_g1

0x6e87,	// (0x000437e9) list_single_hc_apps_pane_g2

0x0001,

0xfcb0,	// (0x0004c612) list_single_hc_apps_pane_g

0x6ea0,	// (0x00043802) list_single_hc_apps_pane_g2_copy1

0x5384,	// (0x00041ce6) list_single_hc_apps_pane_t1

0x7c54,	// (0x000445b6) bg_set_opt_pane_cp_ParamLimits

0x57c3,	// (0x00042125) setting_slider_pane_t1_ParamLimits

0x57dc,	// (0x0004213e) setting_slider_pane_t2_ParamLimits

0x57f6,	// (0x00042158) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0004be9b) setting_slider_pane_t_ParamLimits

0x580e,	// (0x00042170) slider_set_pane_ParamLimits

0x5de6,	// (0x00042748) control_pane_g5_ParamLimits

0x5de6,	// (0x00042748) control_pane_g5

0xad8e,	// (0x000476f0) slider_set_pane_g1_ParamLimits

0x67d1,	// (0x00043133) slider_set_pane_g2_ParamLimits

0x67dd,	// (0x0004313f) slider_set_pane_g3_ParamLimits

0x67f1,	// (0x00043153) slider_set_pane_g4_ParamLimits

0x6809,	// (0x0004316b) slider_set_pane_g5_ParamLimits

0x67dd,	// (0x0004313f) slider_set_pane_g6_ParamLimits

0x681f,	// (0x00043181) slider_set_pane_g7_ParamLimits

0xf93f,	// (0x0004c2a1) slider_set_pane_g_ParamLimits

0x9026,	// (0x00045988) navi_icon_text_pane_ParamLimits

0x9519,	// (0x00045e7b) aid_fill_nsta_2_ParamLimits

0x9558,	// (0x00045eba) aid_touch_tab_arrow_left_ParamLimits

0x9567,	// (0x00045ec9) aid_touch_tab_arrow_right_ParamLimits

0x95d4,	// (0x00045f36) clock_nsta_pane_ParamLimits

0xa884,	// (0x000471e6) navi_icon_pane_g1_ParamLimits

0xa890,	// (0x000471f2) navi_text_pane_t1_ParamLimits

0xbbd1,	// (0x00048533) navi_icon_text_pane_g1_ParamLimits

0xbbdd,	// (0x0004853f) navi_icon_text_pane_t1_ParamLimits

0xd49c,	// (0x00049dfe) list_single_hc_apps_pane_g1_ParamLimits

0x6e87,	// (0x000437e9) list_single_hc_apps_pane_g2_ParamLimits

0xfcb0,	// (0x0004c612) list_single_hc_apps_pane_g_ParamLimits

0x6ea0,	// (0x00043802) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5384,	// (0x00041ce6) list_single_hc_apps_pane_t1_ParamLimits

0x56cd,	// (0x0004202f) popup_toolbar2_fixed_window_ParamLimits

0x56cd,	// (0x0004202f) popup_toolbar2_fixed_window

0x63ed,	// (0x00042d4f) popup_toolbar2_float_window

0x25f4,	// (0x0003ef56) bg_popup_sub_pane_cp27

0xd4b5,	// (0x00049e17) grid_toolbar2_float_pane

0x25f4,	// (0x0003ef56) bg_popup_sub_pane_cp26

0xd4b5,	// (0x00049e17) grid_toolbar2_fixed_pane

0xd4bd,	// (0x00049e1f) cell_toolbar2_fixed_pane_ParamLimits

0xd4bd,	// (0x00049e1f) cell_toolbar2_fixed_pane

0xd4cd,	// (0x00049e2f) cell_toolbar2_fixed_pane_g1

0xd4d6,	// (0x00049e38) toolbar2_fixed_button_pane

0x99f1,	// (0x00046353) toolbar2_fixed_button_pane_g1

0x99f9,	// (0x0004635b) toolbar2_fixed_button_pane_g2

0x9a01,	// (0x00046363) toolbar2_fixed_button_pane_g3

0x9a09,	// (0x0004636b) toolbar2_fixed_button_pane_g4

0x9a11,	// (0x00046373) toolbar2_fixed_button_pane_g5

0x9a19,	// (0x0004637b) toolbar2_fixed_button_pane_g6

0x9a21,	// (0x00046383) toolbar2_fixed_button_pane_g7

0x9a29,	// (0x0004638b) toolbar2_fixed_button_pane_g8

0x9a31,	// (0x00046393) toolbar2_fixed_button_pane_g9

0x0008,

0xf841,	// (0x0004c1a3) toolbar2_fixed_button_pane_g

0xd4de,	// (0x00049e40) cell_toolbar2_float_pane_ParamLimits

0xd4de,	// (0x00049e40) cell_toolbar2_float_pane

0xd4ef,	// (0x00049e51) cell_toolbar2_float_pane_g1

0xd4d6,	// (0x00049e38) toolbar2_fixed_button_pane_cp

0xc150,	// (0x00048ab2) fep_vkb_accented_list_pane_ParamLimits

0xc150,	// (0x00048ab2) fep_vkb_accented_list_pane

0x6c70,	// (0x000435d2) bg_popup_fep_shadow_pane_g9

0x91a3,	// (0x00045b05) bg_popup_fep_shadow_pane_cp3

0x8648,	// (0x00044faa) list_accented_list_pane

0xd4f8,	// (0x00049e5a) list_single_accented_list_pane_ParamLimits

0xd4f8,	// (0x00049e5a) list_single_accented_list_pane

0x91a3,	// (0x00045b05) list_highlight_pane_cp10

0xd509,	// (0x00049e6b) list_single_accented_list_pane_t1

0x633d,	// (0x00042c9f) popup_slider_window_ParamLimits

0x633d,	// (0x00042c9f) popup_slider_window

0xd143,	// (0x00049aa5) aid_indentation_list_msg

0xd5cd,	// (0x00049f2f) bg_popup_window_pane_cp19

0xd635,	// (0x00049f97) popup_slider_window_g1

0xd651,	// (0x00049fb3) popup_slider_window_g2

0xd66d,	// (0x00049fcf) popup_slider_window_g3

0x0005,

0xfcb5,	// (0x0004c617) popup_slider_window_g

0xd6d3,	// (0x0004a035) popup_slider_window_t1

0xd747,	// (0x0004a0a9) small_volume_slider_vertical_pane

0xc022,	// (0x00048984) small_volume_slider_vertical_pane_g1

0xc022,	// (0x00048984) small_volume_slider_vertical_pane_g2

0xd763,	// (0x0004a0c5) small_volume_slider_vertical_pane_g3

0x0002,

0xfcc7,	// (0x0004c629) small_volume_slider_vertical_pane_g

0x548f,	// (0x00041df1) area_side_right_pane_ParamLimits

0x548f,	// (0x00041df1) area_side_right_pane

0x6ebc,	// (0x0004381e) aid_size_side_button_ParamLimits

0x6ebc,	// (0x0004381e) aid_size_side_button

0x6ed0,	// (0x00043832) grid_sctrl_middle_pane_ParamLimits

0x6ed0,	// (0x00043832) grid_sctrl_middle_pane

0x6eef,	// (0x00043851) sctrl_sk_bottom_pane

0x6f00,	// (0x00043862) sctrl_sk_top_pane

0x6f12,	// (0x00043874) aid_touch_sctrl_top

0x7edd,	// (0x0004483f) bg_sctrl_sk_pane_ParamLimits

0x7edd,	// (0x0004483f) bg_sctrl_sk_pane

0x6f1f,	// (0x00043881) sctrl_sk_top_pane_g1

0x6f2c,	// (0x0004388e) sctrl_sk_top_pane_t1

0x6f12,	// (0x00043874) aid_touch_sctrl_bottom

0x7edd,	// (0x0004483f) bg_sctrl_sk_pane_cp_ParamLimits

0x7edd,	// (0x0004483f) bg_sctrl_sk_pane_cp

0x6f47,	// (0x000438a9) sctrl_sk_bottom_pane_g1

0x6f2c,	// (0x0004388e) sctrl_sk_bottom_pane_t1

0x6f50,	// (0x000438b2) cell_sctrl_middle_pane_ParamLimits

0x6f50,	// (0x000438b2) cell_sctrl_middle_pane

0x6f6b,	// (0x000438cd) aid_touch_sctrl_middle_ParamLimits

0x6f6b,	// (0x000438cd) aid_touch_sctrl_middle

0x84ed,	// (0x00044e4f) bg_sctrl_middle_pane_ParamLimits

0x84ed,	// (0x00044e4f) bg_sctrl_middle_pane

0xc2a0,	// (0x00048c02) cell_sctrl_middle_pane_g1_ParamLimits

0xc2a0,	// (0x00048c02) cell_sctrl_middle_pane_g1

0x6f7d,	// (0x000438df) cell_sctrl_middle_pane_g2_ParamLimits

0x6f7d,	// (0x000438df) cell_sctrl_middle_pane_g2

0x0001,

0xfcd3,	// (0x0004c635) cell_sctrl_middle_pane_g_ParamLimits

0xfcd3,	// (0x0004c635) cell_sctrl_middle_pane_g

0x99f1,	// (0x00046353) bg_sctrl_middle_pane_g1

0x99f9,	// (0x0004635b) bg_sctrl_middle_pane_g2

0x9a01,	// (0x00046363) bg_sctrl_middle_pane_g3

0x9a09,	// (0x0004636b) bg_sctrl_middle_pane_g4

0x9a11,	// (0x00046373) bg_sctrl_middle_pane_g5

0x9a19,	// (0x0004637b) bg_sctrl_middle_pane_g6

0x9a21,	// (0x00046383) bg_sctrl_middle_pane_g7

0x9a29,	// (0x0004638b) bg_sctrl_middle_pane_g8

0x0007,

0xfcd8,	// (0x0004c63a) bg_sctrl_middle_pane_g

0x9a31,	// (0x00046393) bg_sctrl_middle_pane_g8_copy1

0x99f1,	// (0x00046353) bg_sctrl_sk_pane_g1

0x99f9,	// (0x0004635b) bg_sctrl_sk_pane_g2

0x9a01,	// (0x00046363) bg_sctrl_sk_pane_g3

0x0008,

0xf841,	// (0x0004c1a3) bg_sctrl_sk_pane_g

0x8410,	// (0x00044d72) aid_size_touch_scroll_bar

0x9a09,	// (0x0004636b) bg_sctrl_sk_pane_g4

0x9a11,	// (0x00046373) bg_sctrl_sk_pane_g5

0x9a19,	// (0x0004637b) bg_sctrl_sk_pane_g6

0x9a21,	// (0x00046383) bg_sctrl_sk_pane_g7

0x9a29,	// (0x0004638b) bg_sctrl_sk_pane_g8

0x9a31,	// (0x00046393) bg_sctrl_sk_pane_g9

0x5fa4,	// (0x00042906) popup_fep_china_hwr2_fs_candidate_window

0x5fae,	// (0x00042910) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x5fae,	// (0x00042910) popup_fep_china_hwr2_fs_control_window

0xc2a0,	// (0x00048c02) sctrl_sk_top_pane_g2

0x0001,

0xfcce,	// (0x0004c630) sctrl_sk_top_pane_g

0xd76c,	// (0x0004a0ce) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd76c,	// (0x0004a0ce) aid_fep_china_hwr2_fs_cell

0xd77e,	// (0x0004a0e0) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd77e,	// (0x0004a0e0) bg_popup_fep_shadow_pane_cp4

0xd795,	// (0x0004a0f7) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd795,	// (0x0004a0f7) bg_popup_fep_shadow_pane_cp5

0xd7a7,	// (0x0004a109) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd7a7,	// (0x0004a109) popup_fep_china_hwr2_fs_control_bar_grid

0xd7b7,	// (0x0004a119) popup_fep_china_hwr2_fs_control_funtion_grid

0xd7bf,	// (0x0004a121) aid_fep_china_hwr2_fs_candi_cell

0x25f4,	// (0x0003ef56) bg_popup_fep_shadow_pane_cp6

0xd7c9,	// (0x0004a12b) popup_fep_china_hwr2_fs_candidate_grid

0xd7d3,	// (0x0004a135) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7d3,	// (0x0004a135) cell_fep_china_hwr2_fs_funtion_grid

0xc022,	// (0x00048984) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7eb,	// (0x0004a14d) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7eb,	// (0x0004a14d) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7f9,	// (0x0004a15b) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7f9,	// (0x0004a15b) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfce9,	// (0x0004c64b) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfce9,	// (0x0004c64b) cell_fep_china_hwr2_fs_funtion_grid_g

0xd80f,	// (0x0004a171) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd80f,	// (0x0004a171) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd824,	// (0x0004a186) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd824,	// (0x0004a186) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcee,	// (0x0004c650) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcee,	// (0x0004c650) cell_fep_china_hwr2_fs_funtion_grid_t

0xd840,	// (0x0004a1a2) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd848,	// (0x0004a1aa) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd850,	// (0x0004a1b2) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcf3,	// (0x0004c655) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd858,	// (0x0004a1ba) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd858,	// (0x0004a1ba) cell_fep_china_hwr2_fs_candidate_grid

0xd871,	// (0x0004a1d3) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd879,	// (0x0004a1db) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc022,	// (0x00048984) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc022,	// (0x00048984) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb13,	// (0x0004c475) cell_fep_china_hwr2_fs_candidate_grid_g

0xd881,	// (0x0004a1e3) cell_fep_china_hwr2_fs_candidate_grid_t1

0x95e7,	// (0x00045f49) clock_nsta_pane_cp_24_ParamLimits

0x95e7,	// (0x00045f49) clock_nsta_pane_cp_24

0x9665,	// (0x00045fc7) indicator_nsta_pane_cp_24_ParamLimits

0x9665,	// (0x00045fc7) indicator_nsta_pane_cp_24

0xa700,	// (0x00047062) heading_pane_g1

0x0001,

0xf8a6,	// (0x0004c208) heading_pane_g

0xb144,	// (0x00047aa6) grid_sct_catagory_button_pane

0xb174,	// (0x00047ad6) scroll_pane_cp5_ParamLimits

0xbc1f,	// (0x00048581) button_value_adjust_pane_cp5_ParamLimits

0xbc1f,	// (0x00048581) button_value_adjust_pane_cp5

0xbcfe,	// (0x00048660) form2_midp_time_pane_ParamLimits

0xd88f,	// (0x0004a1f1) cell_sct_catagory_button_pane_ParamLimits

0xd88f,	// (0x0004a1f1) cell_sct_catagory_button_pane

0xbfe7,	// (0x00048949) bg_button_pane_cp01_ParamLimits

0xbfe7,	// (0x00048949) bg_button_pane_cp01

0xc022,	// (0x00048984) cell_sct_catagory_button_pane_g1

0x637c,	// (0x00042cde) popup_tb_extension_window

0xd8a1,	// (0x0004a203) aid_size_cell_ext_ParamLimits

0xd8a1,	// (0x0004a203) aid_size_cell_ext

0x7edd,	// (0x0004483f) bg_tb_trans_pane_cp1_ParamLimits

0x7edd,	// (0x0004483f) bg_tb_trans_pane_cp1

0xd8c1,	// (0x0004a223) grid_tb_ext_pane_ParamLimits

0xd8c1,	// (0x0004a223) grid_tb_ext_pane

0xd8ef,	// (0x0004a251) cell_tb_ext_pane_ParamLimits

0xd8ef,	// (0x0004a251) cell_tb_ext_pane

0xd906,	// (0x0004a268) cell_tb_ext_pane_g1_ParamLimits

0xd906,	// (0x0004a268) cell_tb_ext_pane_g1

0xd923,	// (0x0004a285) cell_tb_ext_pane_t1

0x7edd,	// (0x0004483f) list_highlight_pane_cp11_ParamLimits

0x7edd,	// (0x0004483f) list_highlight_pane_cp11

0x56ec,	// (0x0004204e) popup_uni_indicator_window_ParamLimits

0x56ec,	// (0x0004204e) popup_uni_indicator_window

0x84ed,	// (0x00044e4f) bg_popup_sub_pane_cp14

0xd93e,	// (0x0004a2a0) list_uniindi_pane

0xd94a,	// (0x0004a2ac) uniindi_top_pane

0x7edd,	// (0x0004483f) bg_uniindi_top_pane

0xd969,	// (0x0004a2cb) uniindi_top_pane_g1

0xd97f,	// (0x0004a2e1) uniindi_top_pane_g2

0x0003,

0xfcfa,	// (0x0004c65c) uniindi_top_pane_g

0xd9a9,	// (0x0004a30b) uniindi_top_pane_t1

0xd9d3,	// (0x0004a335) list_single_uniindi_pane_ParamLimits

0xd9d3,	// (0x0004a335) list_single_uniindi_pane

0xc022,	// (0x00048984) bg_uniindi_top_pane_g1

0xd9e6,	// (0x0004a348) list_single_uniindi_pane_g1

0xd9f9,	// (0x0004a35b) list_single_uniindi_pane_t1

0x25f4,	// (0x0003ef56) control_bg_pane

0xda1e,	// (0x0004a380) bg_sctrl_sk_pane_cp1

0xda27,	// (0x0004a389) bg_sctrl_sk_pane_cp2

0xda30,	// (0x0004a392) control_bg_pane_g1

0xda39,	// (0x0004a39b) control_bg_pane_g2

0x0001,

0xfd03,	// (0x0004c665) control_bg_pane_g

0xba69,	// (0x000483cb) cell_indicator_nsta_pane_g1_ParamLimits

0xba77,	// (0x000483d9) cell_indicator_nsta_pane_g2_ParamLimits

0xfa77,	// (0x0004c3d9) cell_indicator_nsta_pane_g_ParamLimits

0x5121,	// (0x00041a83) form2_midp_time_pane_t1_ParamLimits

0x8252,	// (0x00044bb4) main_idle_act4_pane_ParamLimits

0x8252,	// (0x00044bb4) main_idle_act4_pane

0x637c,	// (0x00042cde) popup_tb_extension_window_ParamLimits

0xd8df,	// (0x0004a241) tb_ext_find_pane_ParamLimits

0xd8df,	// (0x0004a241) tb_ext_find_pane

0xda42,	// (0x0004a3a4) ai_gene_pane_1_cp1

0x92ea,	// (0x00045c4c) ai_gene_pane_2_cp1

0xda4a,	// (0x0004a3ac) list_single_idle_plugin_calendar_pane

0xda53,	// (0x0004a3b5) list_single_idle_plugin_notification_pane

0xda5c,	// (0x0004a3be) list_single_idle_plugin_player_pane

0xda65,	// (0x0004a3c7) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda65,	// (0x0004a3c7) list_single_idle_plugin_shortcut_pane

0xda87,	// (0x0004a3e9) main_idle_act4_pane_t1

0xda99,	// (0x0004a3fb) main_idle_act4_pane_t2

0x0001,

0xfd08,	// (0x0004c66a) main_idle_act4_pane_t

0xdaab,	// (0x0004a40d) middle_sk_idle_act4_pane_ParamLimits

0xdaab,	// (0x0004a40d) middle_sk_idle_act4_pane

0xdac1,	// (0x0004a423) popup_clock_digital_analogue_window_cp2

0xdadb,	// (0x0004a43d) shortcut_wheel_idle_act4_pane_ParamLimits

0xdadb,	// (0x0004a43d) shortcut_wheel_idle_act4_pane

0xc022,	// (0x00048984) shortcut_wheel_idle_act4_pane_g1

0xc022,	// (0x00048984) shortcut_wheel_idle_act4_pane_g2

0xc022,	// (0x00048984) shortcut_wheel_idle_act4_pane_g3

0xc022,	// (0x00048984) shortcut_wheel_idle_act4_pane_g4

0xc022,	// (0x00048984) shortcut_wheel_idle_act4_pane_g5

0xdaef,	// (0x0004a451) shortcut_wheel_idle_act4_pane_g6

0xdaf7,	// (0x0004a459) shortcut_wheel_idle_act4_pane_g7

0xdaff,	// (0x0004a461) shortcut_wheel_idle_act4_pane_g8

0xdb07,	// (0x0004a469) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd0d,	// (0x0004c66f) shortcut_wheel_idle_act4_pane_g

0xc2a0,	// (0x00048c02) middle_sk_idle_act4_pane_g1_ParamLimits

0xc2a0,	// (0x00048c02) middle_sk_idle_act4_pane_g1

0xdb6b,	// (0x0004a4cd) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb6b,	// (0x0004a4cd) middle_sk_idle_act4_pane_g2

0x0001,

0xfd30,	// (0x0004c692) middle_sk_idle_act4_pane_g_ParamLimits

0xfd30,	// (0x0004c692) middle_sk_idle_act4_pane_g

0xdb77,	// (0x0004a4d9) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb77,	// (0x0004a4d9) middle_sk_idle_act4_pane_t1

0xdb94,	// (0x0004a4f6) grid_ai_shortcut_pane_ParamLimits

0xdb94,	// (0x0004a4f6) grid_ai_shortcut_pane

0xdbad,	// (0x0004a50f) list_highlight_pane_cp16_ParamLimits

0xdbad,	// (0x0004a50f) list_highlight_pane_cp16

0xdbba,	// (0x0004a51c) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdbba,	// (0x0004a51c) list_single_idle_plugin_shortcut_pane_g1

0xdbc6,	// (0x0004a528) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbc6,	// (0x0004a528) list_single_idle_plugin_shortcut_pane_g2

0xdbde,	// (0x0004a540) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbde,	// (0x0004a540) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd35,	// (0x0004c697) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd35,	// (0x0004c697) list_single_idle_plugin_shortcut_pane_g

0xdbf1,	// (0x0004a553) cell_ai_shortcut_pane_ParamLimits

0xdbf1,	// (0x0004a553) cell_ai_shortcut_pane

0xdc15,	// (0x0004a577) cell_ai_shortcut_pane_g1_ParamLimits

0xdc15,	// (0x0004a577) cell_ai_shortcut_pane_g1

0xda42,	// (0x0004a3a4) ai_gene_pane_1_cp2

0xdc37,	// (0x0004a599) ai_gene_pane_2_cp2

0xdc3f,	// (0x0004a5a1) list_highlight_pane_cp15

0xdc48,	// (0x0004a5aa) list_single_idle_plugin_calendar_pane_g1

0xdc3f,	// (0x0004a5a1) list_highlight_pane_cp17

0xdc50,	// (0x0004a5b2) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc58,	// (0x0004a5ba) list_single_idle_plugin_player_pane_g1

0xb39d,	// (0x00047cff) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd3c,	// (0x0004c69e) list_single_idle_plugin_player_pane_g

0xdc60,	// (0x0004a5c2) list_single_idle_plugin_player_pane_t1

0xdc6e,	// (0x0004a5d0) list_single_idle_plugin_player_pane_t2

0xdc7c,	// (0x0004a5de) list_single_idle_plugin_player_pane_t3

0xdc8a,	// (0x0004a5ec) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd41,	// (0x0004c6a3) list_single_idle_plugin_player_pane_t

0xdc98,	// (0x0004a5fa) wait_bar_pane_cp15

0xdca0,	// (0x0004a602) grid_ai_notification_pane

0xb39d,	// (0x00047cff) list_single_idle_plugin_notification_pane_g1

0xdca9,	// (0x0004a60b) cell_ai_notification_pane_ParamLimits

0xdca9,	// (0x0004a60b) cell_ai_notification_pane

0xdcb6,	// (0x0004a618) cell_ai_notification_pane_g1

0xdcbe,	// (0x0004a620) cell_ai_notification_pane_t1

0xdccc,	// (0x0004a62e) tb_ext_find_button_pane

0xdcd4,	// (0x0004a636) tb_ext_find_pane_g1

0xdcdc,	// (0x0004a63e) tb_ext_find_pane_t1

0x8b76,	// (0x000454d8) tb_ext_find_button_pane_g1

0xdcea,	// (0x0004a64c) tb_ext_find_button_pane_g2

0x0001,

0xfd4a,	// (0x0004c6ac) tb_ext_find_button_pane_g

0xda87,	// (0x0004a3e9) main_idle_act4_pane_t1_ParamLimits

0xda99,	// (0x0004a3fb) main_idle_act4_pane_t2_ParamLimits

0xfd08,	// (0x0004c66a) main_idle_act4_pane_t_ParamLimits

0xdac1,	// (0x0004a423) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdacf,	// (0x0004a431) sat_plugin_idle_act4_pane_ParamLimits

0xdacf,	// (0x0004a431) sat_plugin_idle_act4_pane

0xdcf3,	// (0x0004a655) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdcf3,	// (0x0004a655) sat_plugin_idle_act4_pane_t1

0xdd06,	// (0x0004a668) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd06,	// (0x0004a668) sat_plugin_idle_act4_pane_t2

0xdd19,	// (0x0004a67b) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd19,	// (0x0004a67b) sat_plugin_idle_act4_pane_t3

0xdd2c,	// (0x0004a68e) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd2c,	// (0x0004a68e) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd4f,	// (0x0004c6b1) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd4f,	// (0x0004c6b1) sat_plugin_idle_act4_pane_t

0x5627,	// (0x00041f89) popup_battery_window_ParamLimits

0x5627,	// (0x00041f89) popup_battery_window

0x7edd,	// (0x0004483f) bg_popup_sub_pane_cp25_ParamLimits

0x7edd,	// (0x0004483f) bg_popup_sub_pane_cp25

0xdd3f,	// (0x0004a6a1) popup_battery_window_g1_ParamLimits

0xdd3f,	// (0x0004a6a1) popup_battery_window_g1

0xdd4b,	// (0x0004a6ad) popup_battery_window_t1_ParamLimits

0xdd4b,	// (0x0004a6ad) popup_battery_window_t1

0xdd5d,	// (0x0004a6bf) popup_battery_window_t2_ParamLimits

0xdd5d,	// (0x0004a6bf) popup_battery_window_t2

0x0001,

0xfd58,	// (0x0004c6ba) popup_battery_window_t_ParamLimits

0xfd58,	// (0x0004c6ba) popup_battery_window_t

0x91b7,	// (0x00045b19) midp_canvas_pane_ParamLimits

0x922e,	// (0x00045b90) midp_keypad_pane_ParamLimits

0x922e,	// (0x00045b90) midp_keypad_pane

0x94c7,	// (0x00045e29) main_midp_pane_ParamLimits

0xbae3,	// (0x00048445) signal_pane_g2_cp_ParamLimits

0xdd7a,	// (0x0004a6dc) aid_size_cell_midp_keypad_ParamLimits

0xdd7a,	// (0x0004a6dc) aid_size_cell_midp_keypad

0xdd94,	// (0x0004a6f6) midp_keyp_game_grid_pane_ParamLimits

0xdd94,	// (0x0004a6f6) midp_keyp_game_grid_pane

0xddb4,	// (0x0004a716) midp_keyp_rocker_pane_ParamLimits

0xddb4,	// (0x0004a716) midp_keyp_rocker_pane

0xdded,	// (0x0004a74f) midp_keyp_sk_left_pane_ParamLimits

0xdded,	// (0x0004a74f) midp_keyp_sk_left_pane

0xde47,	// (0x0004a7a9) midp_keyp_sk_right_pane_ParamLimits

0xde47,	// (0x0004a7a9) midp_keyp_sk_right_pane

0x25f4,	// (0x0003ef56) bg_button_pane_cp03

0xdea1,	// (0x0004a803) midp_keyp_sk_left_pane_g1

0x25f4,	// (0x0003ef56) bg_button_pane_cp04

0xdea1,	// (0x0004a803) midp_keyp_sk_right_pane_g1

0xc022,	// (0x00048984) midp_keyp_rocker_pane_g1

0xdeaa,	// (0x0004a80c) keyp_game_cell_pane_ParamLimits

0xdeaa,	// (0x0004a80c) keyp_game_cell_pane

0x25f4,	// (0x0003ef56) bg_button_pane_cp02

0xdebd,	// (0x0004a81f) keyp_game_cell_pane_g1

0x566b,	// (0x00041fcd) popup_fep_vkb2_window_ParamLimits

0x566b,	// (0x00041fcd) popup_fep_vkb2_window

0x6f9b,	// (0x000438fd) aid_size_cell_vkb2_ParamLimits

0x6f9b,	// (0x000438fd) aid_size_cell_vkb2

0x6fe7,	// (0x00043949) popup_fep_vkb2_window_g1_ParamLimits

0x6fe7,	// (0x00043949) popup_fep_vkb2_window_g1

0x702f,	// (0x00043991) vkb2_area_bottom_pane_ParamLimits

0x702f,	// (0x00043991) vkb2_area_bottom_pane

0x707b,	// (0x000439dd) vkb2_area_keypad_pane_ParamLimits

0x707b,	// (0x000439dd) vkb2_area_keypad_pane

0x70bd,	// (0x00043a1f) vkb2_area_top_pane_ParamLimits

0x70bd,	// (0x00043a1f) vkb2_area_top_pane

0x713c,	// (0x00043a9e) vkb2_top_entry_pane_ParamLimits

0x713c,	// (0x00043a9e) vkb2_top_entry_pane

0x7166,	// (0x00043ac8) vkb2_top_grid_left_pane_ParamLimits

0x7166,	// (0x00043ac8) vkb2_top_grid_left_pane

0x7185,	// (0x00043ae7) vkb2_top_grid_right_pane_ParamLimits

0x7185,	// (0x00043ae7) vkb2_top_grid_right_pane

0x71a4,	// (0x00043b06) vkb2_cell_keypad_pane_ParamLimits

0x71a4,	// (0x00043b06) vkb2_cell_keypad_pane

0x7275,	// (0x00043bd7) vkb2_area_bottom_grid_pane_ParamLimits

0x7275,	// (0x00043bd7) vkb2_area_bottom_grid_pane

0x729b,	// (0x00043bfd) vkb2_area_bottom_pane_g1_ParamLimits

0x729b,	// (0x00043bfd) vkb2_area_bottom_pane_g1

0x72bf,	// (0x00043c21) vkb2_area_bottom_pane_g2_ParamLimits

0x72bf,	// (0x00043c21) vkb2_area_bottom_pane_g2

0x72ed,	// (0x00043c4f) vkb2_area_bottom_pane_g3_ParamLimits

0x72ed,	// (0x00043c4f) vkb2_area_bottom_pane_g3

0x0002,

0xfd5d,	// (0x0004c6bf) vkb2_area_bottom_pane_g_ParamLimits

0xfd5d,	// (0x0004c6bf) vkb2_area_bottom_pane_g

0x734e,	// (0x00043cb0) vkb2_top_cell_left_pane_ParamLimits

0x734e,	// (0x00043cb0) vkb2_top_cell_left_pane

0xdece,	// (0x0004a830) vkb2_top_entry_pane_g1_ParamLimits

0xdece,	// (0x0004a830) vkb2_top_entry_pane_g1

0xdedc,	// (0x0004a83e) vkb2_top_entry_pane_t1_ParamLimits

0xdedc,	// (0x0004a83e) vkb2_top_entry_pane_t1

0xdf0e,	// (0x0004a870) vkb2_top_entry_pane_t2_ParamLimits

0xdf0e,	// (0x0004a870) vkb2_top_entry_pane_t2

0xdf40,	// (0x0004a8a2) vkb2_top_entry_pane_t3_ParamLimits

0xdf40,	// (0x0004a8a2) vkb2_top_entry_pane_t3

0x0002,

0xfd64,	// (0x0004c6c6) vkb2_top_entry_pane_t_ParamLimits

0xfd64,	// (0x0004c6c6) vkb2_top_entry_pane_t

0x739b,	// (0x00043cfd) vkb2_top_grid_right_pane_g1_ParamLimits

0x739b,	// (0x00043cfd) vkb2_top_grid_right_pane_g1

0x73b1,	// (0x00043d13) vkb2_top_grid_right_pane_g2_ParamLimits

0x73b1,	// (0x00043d13) vkb2_top_grid_right_pane_g2

0x73c9,	// (0x00043d2b) vkb2_top_grid_right_pane_g3_ParamLimits

0x73c9,	// (0x00043d2b) vkb2_top_grid_right_pane_g3

0x73e1,	// (0x00043d43) vkb2_top_grid_right_pane_g4_ParamLimits

0x73e1,	// (0x00043d43) vkb2_top_grid_right_pane_g4

0x0003,

0xfd6b,	// (0x0004c6cd) vkb2_top_grid_right_pane_g_ParamLimits

0xfd6b,	// (0x0004c6cd) vkb2_top_grid_right_pane_g

0x73f7,	// (0x00043d59) vkb2_top_cell_left_pane_g1

0x740e,	// (0x00043d70) vkb2_cell_keypad_pane_g1_ParamLimits

0x740e,	// (0x00043d70) vkb2_cell_keypad_pane_g1

0xdf64,	// (0x0004a8c6) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf64,	// (0x0004a8c6) vkb2_cell_keypad_pane_t1

0x741c,	// (0x00043d7e) vkb2_cell_bottom_grid_pane_ParamLimits

0x741c,	// (0x00043d7e) vkb2_cell_bottom_grid_pane

0x7455,	// (0x00043db7) vkb2_cell_bottom_grid_pane_g1

0xdb0f,	// (0x0004a471) aid_call2_pane_cp02

0xdb17,	// (0x0004a479) aid_call_pane_cp02

0xdb1f,	// (0x0004a481) clock_digital_number_pane_cp10

0xdb27,	// (0x0004a489) clock_digital_number_pane_cp11

0xdb2f,	// (0x0004a491) clock_digital_number_pane_cp12

0xdb37,	// (0x0004a499) clock_digital_number_pane_cp13

0xdb3f,	// (0x0004a4a1) clock_digital_separator_pane_cp10

0x8b76,	// (0x000454d8) popup_clock_digital_analogue_window_cp2_g1

0x8b76,	// (0x000454d8) popup_clock_digital_analogue_window_cp2_g2

0xdb47,	// (0x0004a4a9) popup_clock_digital_analogue_window_cp2_g3

0x8b76,	// (0x000454d8) popup_clock_digital_analogue_window_cp2_g4

0xdb47,	// (0x0004a4a9) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd20,	// (0x0004c682) popup_clock_digital_analogue_window_cp2_g

0xdb4f,	// (0x0004a4b1) popup_clock_digital_analogue_window_cp2_t1

0xdb5d,	// (0x0004a4bf) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd2b,	// (0x0004c68d) popup_clock_digital_analogue_window_cp2_t

0xc022,	// (0x00048984) clock_digital_number_pane_cp10_g1

0xc022,	// (0x00048984) clock_digital_number_pane_cp10_g2

0x0001,

0xfb13,	// (0x0004c475) clock_digital_number_pane_cp10_g

0xc022,	// (0x00048984) clock_digital_separator_pane_cp10_g1

0xc022,	// (0x00048984) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb13,	// (0x0004c475) clock_digital_separator_pane_cp10_g

0xd98b,	// (0x0004a2ed) uniindi_top_pane_g3

0xd99c,	// (0x0004a2fe) uniindi_top_pane_g4

0x722f,	// (0x00043b91) vkb2_row_keypad_pane_ParamLimits

0x722f,	// (0x00043b91) vkb2_row_keypad_pane

0x7475,	// (0x00043dd7) vkb2_cell_t_keypad_pane_ParamLimits

0x7475,	// (0x00043dd7) vkb2_cell_t_keypad_pane

0x7485,	// (0x00043de7) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7485,	// (0x00043de7) vkb2_cell_t_keypad_pane_cp08

0x7498,	// (0x00043dfa) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7498,	// (0x00043dfa) vkb2_cell_t_keypad_pane_cp09

0x74ac,	// (0x00043e0e) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x74ac,	// (0x00043e0e) vkb2_cell_t_keypad_pane_cp01

0x74bd,	// (0x00043e1f) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x74bd,	// (0x00043e1f) vkb2_cell_t_keypad_pane_cp02

0x74ce,	// (0x00043e30) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x74ce,	// (0x00043e30) vkb2_cell_t_keypad_pane_cp03

0x74df,	// (0x00043e41) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x74df,	// (0x00043e41) vkb2_cell_t_keypad_pane_cp04

0x74f0,	// (0x00043e52) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x74f0,	// (0x00043e52) vkb2_cell_t_keypad_pane_cp05

0x7501,	// (0x00043e63) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7501,	// (0x00043e63) vkb2_cell_t_keypad_pane_cp06

0x7512,	// (0x00043e74) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7512,	// (0x00043e74) vkb2_cell_t_keypad_pane_cp07

0x7523,	// (0x00043e85) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7523,	// (0x00043e85) vkb2_cell_t_keypad_pane_cp10

0xc2a0,	// (0x00048c02) vkb2_cell_t_keypad_pane_g1

0xdf7b,	// (0x0004a8dd) vkb2_cell_t_keypad_pane_t1

0x25f4,	// (0x0003ef56) popup_grid_graphic2_window

0xdf8d,	// (0x0004a8ef) aid_size_cell_graphic2_ParamLimits

0xdf8d,	// (0x0004a8ef) aid_size_cell_graphic2

0xdfc5,	// (0x0004a927) bg_popup_window_pane_cp21_ParamLimits

0xdfc5,	// (0x0004a927) bg_popup_window_pane_cp21

0xdfd3,	// (0x0004a935) graphic2_pages_pane_ParamLimits

0xdfd3,	// (0x0004a935) graphic2_pages_pane

0xe019,	// (0x0004a97b) grid_graphic2_control_pane_ParamLimits

0xe019,	// (0x0004a97b) grid_graphic2_control_pane

0xe057,	// (0x0004a9b9) grid_graphic2_pane_ParamLimits

0xe057,	// (0x0004a9b9) grid_graphic2_pane

0xe0cb,	// (0x0004aa2d) cell_graphic2_pane

0x25f4,	// (0x0003ef56) main_comp_mode_pane

0xd1f7,	// (0x00049b59) list_ai3_gene_pane_ParamLimits

0xd5cd,	// (0x00049f2f) bg_popup_window_pane_cp19_ParamLimits

0xd5d9,	// (0x00049f3b) bg_touch_area_indi_pane_ParamLimits

0xd5d9,	// (0x00049f3b) bg_touch_area_indi_pane

0xd5ef,	// (0x00049f51) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5ef,	// (0x00049f51) bg_touch_area_indi_pane_cp01

0xd605,	// (0x00049f67) bg_touch_area_indi_pane_cp02_ParamLimits

0xd605,	// (0x00049f67) bg_touch_area_indi_pane_cp02

0xd61b,	// (0x00049f7d) bg_touch_area_indi_pane_cp03_ParamLimits

0xd61b,	// (0x00049f7d) bg_touch_area_indi_pane_cp03

0xd635,	// (0x00049f97) popup_slider_window_g1_ParamLimits

0xd651,	// (0x00049fb3) popup_slider_window_g2_ParamLimits

0xd66d,	// (0x00049fcf) popup_slider_window_g3_ParamLimits

0xfcb5,	// (0x0004c617) popup_slider_window_g_ParamLimits

0xd6d3,	// (0x0004a035) popup_slider_window_t1_ParamLimits

0xd747,	// (0x0004a0a9) small_volume_slider_vertical_pane_ParamLimits

0xe0cb,	// (0x0004aa2d) cell_graphic2_pane_ParamLimits

0xe11a,	// (0x0004aa7c) bg_button_pane_cp10_ParamLimits

0xe11a,	// (0x0004aa7c) bg_button_pane_cp10

0xe12d,	// (0x0004aa8f) bg_button_pane_cp11_ParamLimits

0xe12d,	// (0x0004aa8f) bg_button_pane_cp11

0xe140,	// (0x0004aaa2) graphic2_pages_pane_g1_ParamLimits

0xe140,	// (0x0004aaa2) graphic2_pages_pane_g1

0xe15b,	// (0x0004aabd) graphic2_pages_pane_g2_ParamLimits

0xe15b,	// (0x0004aabd) graphic2_pages_pane_g2

0x0001,

0xfd79,	// (0x0004c6db) graphic2_pages_pane_g_ParamLimits

0xfd79,	// (0x0004c6db) graphic2_pages_pane_g

0xe173,	// (0x0004aad5) graphic2_pages_pane_t1_ParamLimits

0xe173,	// (0x0004aad5) graphic2_pages_pane_t1

0xe18b,	// (0x0004aaed) cell_graphic2_control_pane_ParamLimits

0xe18b,	// (0x0004aaed) cell_graphic2_control_pane

0xe1a9,	// (0x0004ab0b) cell_graphic2_pane_g1_ParamLimits

0xe1a9,	// (0x0004ab0b) cell_graphic2_pane_g1

0xe1b6,	// (0x0004ab18) cell_graphic2_pane_g2_ParamLimits

0xe1b6,	// (0x0004ab18) cell_graphic2_pane_g2

0xe1c3,	// (0x0004ab25) cell_graphic2_pane_g3_ParamLimits

0xe1c3,	// (0x0004ab25) cell_graphic2_pane_g3

0xe1d0,	// (0x0004ab32) cell_graphic2_pane_g4_ParamLimits

0xe1d0,	// (0x0004ab32) cell_graphic2_pane_g4

0xe1dd,	// (0x0004ab3f) cell_graphic2_pane_g5_ParamLimits

0xe1dd,	// (0x0004ab3f) cell_graphic2_pane_g5

0x0004,

0xfd7e,	// (0x0004c6e0) cell_graphic2_pane_g_ParamLimits

0xfd7e,	// (0x0004c6e0) cell_graphic2_pane_g

0xe1f6,	// (0x0004ab58) cell_graphic2_pane_t1_ParamLimits

0xe1f6,	// (0x0004ab58) cell_graphic2_pane_t1

0x9a65,	// (0x000463c7) grid_highlight_pane_cp11_ParamLimits

0x9a65,	// (0x000463c7) grid_highlight_pane_cp11

0x7edd,	// (0x0004483f) bg_button_pane_cp05

0xe22c,	// (0x0004ab8e) cell_graphic2_control_pane_g1

0xc022,	// (0x00048984) bg_touch_area_indi_pane_g1

0xe254,	// (0x0004abb6) aid_cmod_rocker_key_size

0xe25e,	// (0x0004abc0) aid_cmode_itu_key_size

0xe268,	// (0x0004abca) main_cmode_video_pane

0xe272,	// (0x0004abd4) main_comp_mode_itu_pane

0xe27e,	// (0x0004abe0) main_comp_mode_rocker_pane

0xe28a,	// (0x0004abec) cell_cmode_rocker_pane_ParamLimits

0xe28a,	// (0x0004abec) cell_cmode_rocker_pane

0xe29c,	// (0x0004abfe) cell_cmode_itu_pane_ParamLimits

0xe29c,	// (0x0004abfe) cell_cmode_itu_pane

0x84ed,	// (0x00044e4f) bg_button_pane_cp06_ParamLimits

0x84ed,	// (0x00044e4f) bg_button_pane_cp06

0xc2a0,	// (0x00048c02) cell_cmode_rocker_pane_g1_ParamLimits

0xc2a0,	// (0x00048c02) cell_cmode_rocker_pane_g1

0xd7eb,	// (0x0004a14d) cell_cmode_rocker_pane_g2_ParamLimits

0xd7eb,	// (0x0004a14d) cell_cmode_rocker_pane_g2

0x0001,

0xfd8e,	// (0x0004c6f0) cell_cmode_rocker_pane_g_ParamLimits

0xfd8e,	// (0x0004c6f0) cell_cmode_rocker_pane_g

0x25f4,	// (0x0003ef56) bg_button_pane_cp07

0xe2b1,	// (0x0004ac13) cell_cmode_itu_pane_g1

0xe2ba,	// (0x0004ac1c) cell_cmode_itu_pane_t1

0xe2c8,	// (0x0004ac2a) cell_cmode_itu_pane_t2

0x0001,

0xfd93,	// (0x0004c6f5) cell_cmode_itu_pane_t

0xda0e,	// (0x0004a370) aid_touch_ctrl_left

0xda16,	// (0x0004a378) aid_touch_ctrl_right

0x25f4,	// (0x0003ef56) compa_mode_pane

0xe2d6,	// (0x0004ac38) aid_cmod_rocker_key_size_cp

0xe2e0,	// (0x0004ac42) aid_cmode_itu_key_size_cp

0xe2ea,	// (0x0004ac4c) compa_mode_pane_g1

0xe2f2,	// (0x0004ac54) compa_mode_pane_g2

0xe2fa,	// (0x0004ac5c) compa_mode_pane_g3

0x0002,

0xfd98,	// (0x0004c6fa) compa_mode_pane_g

0xe302,	// (0x0004ac64) main_comp_mode_itu_pane_cp

0xe30a,	// (0x0004ac6c) main_comp_mode_rocker_pane_cp

0xe312,	// (0x0004ac74) cell_cmode_itu_pane_cp_ParamLimits

0xe312,	// (0x0004ac74) cell_cmode_itu_pane_cp

0xe327,	// (0x0004ac89) cell_cmode_rocker_pane_cp_ParamLimits

0xe327,	// (0x0004ac89) cell_cmode_rocker_pane_cp

0x84ed,	// (0x00044e4f) bg_button_pane_cp06_cp_ParamLimits

0x84ed,	// (0x00044e4f) bg_button_pane_cp06_cp

0xc2a0,	// (0x00048c02) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc2a0,	// (0x00048c02) cell_cmode_rocker_pane_g1_cp

0xc022,	// (0x00048984) cell_cmode_rocker_pane_g2_cp

0x25f4,	// (0x0003ef56) bg_button_pane_cp07_cp

0xaf3f,	// (0x000478a1) cell_cmode_itu_pane_g1_cp

0xe339,	// (0x0004ac9b) cell_cmode_itu_pane_t1_cp

0xe339,	// (0x0004ac9b) cell_cmode_itu_pane_t2_cp

0xaf2c,	// (0x0004788e) settings_code_pane_cp2

0x7c54,	// (0x000445b6) bg_popup_window_pane_cp3_ParamLimits

0x80dd,	// (0x00044a3f) heading_pane_cp3_ParamLimits

0x80ec,	// (0x00044a4e) listscroll_popup_graphic_pane_ParamLimits

0x6a54,	// (0x000433b6) fep_hwr_aid_pane_ParamLimits

0x6f12,	// (0x00043874) aid_touch_sctrl_top_ParamLimits

0x6f1f,	// (0x00043881) sctrl_sk_top_pane_g1_ParamLimits

0xc2a0,	// (0x00048c02) sctrl_sk_top_pane_g2_ParamLimits

0xfcce,	// (0x0004c630) sctrl_sk_top_pane_g_ParamLimits

0x6f2c,	// (0x0004388e) sctrl_sk_top_pane_t1_ParamLimits

0x6f12,	// (0x00043874) aid_touch_sctrl_bottom_ParamLimits

0x6f2c,	// (0x0004388e) sctrl_sk_bottom_pane_t1_ParamLimits

0xd957,	// (0x0004a2b9) aid_area_touch_clock

0x7103,	// (0x00043a65) aid_vkb2_area_top_pane_cell_ParamLimits

0x7103,	// (0x00043a65) aid_vkb2_area_top_pane_cell

0x7251,	// (0x00043bb3) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x7251,	// (0x00043bb3) aid_vkb2_area_bottom_pane_cell

0xdec6,	// (0x0004a828) popup_char_count_window

0xe347,	// (0x0004aca9) popup_char_count_window_g1

0xe350,	// (0x0004acb2) popup_char_count_window_g2

0xe359,	// (0x0004acbb) popup_char_count_window_g3

0x0002,

0xfd9f,	// (0x0004c701) popup_char_count_window_g

0xe362,	// (0x0004acc4) popup_char_count_window_t1

0x6fc5,	// (0x00043927) popup_fep_char_preview_window_ParamLimits

0x6fc5,	// (0x00043927) popup_fep_char_preview_window

0x7121,	// (0x00043a83) vkb2_top_candi_pane_ParamLimits

0x7121,	// (0x00043a83) vkb2_top_candi_pane

0xe370,	// (0x0004acd2) cell_vkb2_top_candi_pane_ParamLimits

0xe370,	// (0x0004acd2) cell_vkb2_top_candi_pane

0xa080,	// (0x000469e2) bg_popup_fep_char_preview_window_ParamLimits

0xa080,	// (0x000469e2) bg_popup_fep_char_preview_window

0x7538,	// (0x00043e9a) popup_fep_char_preview_window_t1_ParamLimits

0x7538,	// (0x00043e9a) popup_fep_char_preview_window_t1

0xe3ba,	// (0x0004ad1c) bg_popup_fep_char_preview_window_g1

0xe3c2,	// (0x0004ad24) bg_popup_fep_char_preview_window_g2

0xe3ca,	// (0x0004ad2c) bg_popup_fep_char_preview_window_g3

0xe3d2,	// (0x0004ad34) bg_popup_fep_char_preview_window_g4

0xe3da,	// (0x0004ad3c) bg_popup_fep_char_preview_window_g5

0xe3e2,	// (0x0004ad44) bg_popup_fep_char_preview_window_g6

0xe3ea,	// (0x0004ad4c) bg_popup_fep_char_preview_window_g7

0xe3f2,	// (0x0004ad54) bg_popup_fep_char_preview_window_g8

0xe3fa,	// (0x0004ad5c) bg_popup_fep_char_preview_window_g9

0x0009,

0xfda6,	// (0x0004c708) bg_popup_fep_char_preview_window_g

0xc2a0,	// (0x00048c02) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc2a0,	// (0x00048c02) cell_vkb2_top_candi_pane_g1

0xc5b7,	// (0x00048f19) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc5b7,	// (0x00048f19) cell_vkb2_top_candi_pane_g2

0xc5d8,	// (0x00048f3a) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc5d8,	// (0x00048f3a) cell_vkb2_top_candi_pane_g3

0x757a,	// (0x00043edc) cell_vkb2_top_candi_pane_g4_ParamLimits

0x757a,	// (0x00043edc) cell_vkb2_top_candi_pane_g4

0xe402,	// (0x0004ad64) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe402,	// (0x0004ad64) cell_vkb2_top_candi_pane_g5

0xd7eb,	// (0x0004a14d) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd7eb,	// (0x0004a14d) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdbb,	// (0x0004c71d) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdbb,	// (0x0004c71d) cell_vkb2_top_candi_pane_g

0x759b,	// (0x00043efd) cell_vkb2_top_candi_pane_t1

0x67bd,	// (0x0004311f) aid_size_touch_slider_mark_ParamLimits

0x67bd,	// (0x0004311f) aid_size_touch_slider_mark

0xe009,	// (0x0004a96b) grid_graphic2_catg_pane_ParamLimits

0xe009,	// (0x0004a96b) grid_graphic2_catg_pane

0xe0a7,	// (0x0004aa09) popup_grid_graphic2_window_t1_ParamLimits

0xe0a7,	// (0x0004aa09) popup_grid_graphic2_window_t1

0xe0b9,	// (0x0004aa1b) popup_grid_graphic2_window_t2_ParamLimits

0xe0b9,	// (0x0004aa1b) popup_grid_graphic2_window_t2

0x0001,

0xfd74,	// (0x0004c6d6) popup_grid_graphic2_window_t_ParamLimits

0xfd74,	// (0x0004c6d6) popup_grid_graphic2_window_t

0x7edd,	// (0x0004483f) bg_button_pane_cp05_ParamLimits

0xe22c,	// (0x0004ab8e) cell_graphic2_control_pane_g1_ParamLimits

0xe423,	// (0x0004ad85) cell_graphic2_catg_pane_ParamLimits

0xe423,	// (0x0004ad85) cell_graphic2_catg_pane

0x25f4,	// (0x0003ef56) bg_button_pane_cp12

0xe435,	// (0x0004ad97) cell_graphic2_catg_pane_g1

0xd923,	// (0x0004a285) cell_tb_ext_pane_t1_ParamLimits

0x736e,	// (0x00043cd0) vkb2_top_cell_right_narrow_pane_ParamLimits

0x736e,	// (0x00043cd0) vkb2_top_cell_right_narrow_pane

0x7386,	// (0x00043ce8) vkb2_top_cell_right_wide_pane_ParamLimits

0x7386,	// (0x00043ce8) vkb2_top_cell_right_wide_pane

0x6a46,	// (0x000433a8) bg_vkb2_func_pane_ParamLimits

0x6a46,	// (0x000433a8) bg_vkb2_func_pane

0x73f7,	// (0x00043d59) vkb2_top_cell_left_pane_g1_ParamLimits

0x6a46,	// (0x000433a8) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6a46,	// (0x000433a8) bg_vkb2_fuc_pane_cp03

0x7455,	// (0x00043db7) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x99f9,	// (0x0004635b) bg_vkb2_func_pane_g1

0x9a01,	// (0x00046363) bg_vkb2_func_pane_g2

0x9a11,	// (0x00046373) bg_vkb2_func_pane_g3

0x9a09,	// (0x0004636b) bg_vkb2_func_pane_g4

0x9a19,	// (0x0004637b) bg_vkb2_func_pane_g5

0x9a21,	// (0x00046383) bg_vkb2_func_pane_g6

0x9a29,	// (0x0004638b) bg_vkb2_func_pane_g7

0x9a31,	// (0x00046393) bg_vkb2_func_pane_g8

0x99f1,	// (0x00046353) bg_vkb2_func_pane_g9

0x0008,

0xfdc8,	// (0x0004c72a) bg_vkb2_func_pane_g

0x6a46,	// (0x000433a8) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6a46,	// (0x000433a8) bg_vkb2_fuc_pane_cp01

0x73f7,	// (0x00043d59) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x73f7,	// (0x00043d59) vkb2_top_cell_right_wide_pane_g1

0x6a46,	// (0x000433a8) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6a46,	// (0x000433a8) bg_vkb2_fuc_pane_cp02

0x75ba,	// (0x00043f1c) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x75ba,	// (0x00043f1c) vkb2_top_cell_right_narrow_pane_g1

0xd547,	// (0x00049ea9) aid_touch_area_decrease_ParamLimits

0xd547,	// (0x00049ea9) aid_touch_area_decrease

0xd56b,	// (0x00049ecd) aid_touch_area_increase_ParamLimits

0xd56b,	// (0x00049ecd) aid_touch_area_increase

0xd583,	// (0x00049ee5) aid_touch_area_mute_ParamLimits

0xd583,	// (0x00049ee5) aid_touch_area_mute

0xd59f,	// (0x00049f01) aid_touch_area_slider_ParamLimits

0xd59f,	// (0x00049f01) aid_touch_area_slider

0xd689,	// (0x00049feb) popup_slider_window_g4_ParamLimits

0xd689,	// (0x00049feb) popup_slider_window_g4

0xd6a1,	// (0x0004a003) popup_slider_window_g5_ParamLimits

0xd6a1,	// (0x0004a003) popup_slider_window_g5

0xd6c3,	// (0x0004a025) popup_slider_window_g6_ParamLimits

0xd6c3,	// (0x0004a025) popup_slider_window_g6

0xd701,	// (0x0004a063) popup_slider_window_t2_ParamLimits

0xd701,	// (0x0004a063) popup_slider_window_t2

0x0001,

0xfcc2,	// (0x0004c624) popup_slider_window_t_ParamLimits

0xfcc2,	// (0x0004c624) popup_slider_window_t

0xd719,	// (0x0004a07b) slider_pane_ParamLimits

0xd719,	// (0x0004a07b) slider_pane

0xe43e,	// (0x0004ada0) slider_pane_g1_ParamLimits

0xe43e,	// (0x0004ada0) slider_pane_g1

0xe452,	// (0x0004adb4) slider_pane_g2_ParamLimits

0xe452,	// (0x0004adb4) slider_pane_g2

0xe468,	// (0x0004adca) slider_pane_g3_ParamLimits

0xe468,	// (0x0004adca) slider_pane_g3

0x0003,

0xfddb,	// (0x0004c73d) slider_pane_g_ParamLimits

0xfddb,	// (0x0004c73d) slider_pane_g

0x63d8,	// (0x00042d3a) popup_tb_float_extension_window_ParamLimits

0x63d8,	// (0x00042d3a) popup_tb_float_extension_window

0xe494,	// (0x0004adf6) aid_size_cell_tb_float_ext

0x25f4,	// (0x0003ef56) bg_popup_sub_window_cp28

0xe4a0,	// (0x0004ae02) grid_tb_float_ext_pane

0xe4aa,	// (0x0004ae0c) cell_tb_float_ext_pane_ParamLimits

0xe4aa,	// (0x0004ae0c) cell_tb_float_ext_pane

0xe4c4,	// (0x0004ae26) cell_tb_float_ext_pane_g1

0xe4cd,	// (0x0004ae2f) grid_highlight_pane_cp12

0x6b87,	// (0x000434e9) cell_last_hwr_side_pane_ParamLimits

0x6b87,	// (0x000434e9) cell_last_hwr_side_pane

0xc022,	// (0x00048984) cell_last_hwr_side_pane_g1

0xe4d6,	// (0x0004ae38) cell_last_hwr_side_pane_g2

0x0001,

0xfde4,	// (0x0004c746) cell_last_hwr_side_pane_g

0x731d,	// (0x00043c7f) vkb2_area_bottom_space_btn_pane_ParamLimits

0x731d,	// (0x00043c7f) vkb2_area_bottom_space_btn_pane

0xc2a0,	// (0x00048c02) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf7b,	// (0x0004a8dd) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x759b,	// (0x00043efd) cell_vkb2_top_candi_pane_t1_ParamLimits

0x75da,	// (0x00043f3c) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x75da,	// (0x00043f3c) vkb2_area_bottom_space_btn_pane_g1

0x7614,	// (0x00043f76) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7614,	// (0x00043f76) vkb2_area_bottom_space_btn_pane_g2

0x764a,	// (0x00043fac) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x764a,	// (0x00043fac) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfde9,	// (0x0004c74b) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfde9,	// (0x0004c74b) vkb2_area_bottom_space_btn_pane_g

0x6afb,	// (0x0004345d) cel_fep_hwr_func_pane_ParamLimits

0x6afb,	// (0x0004345d) cel_fep_hwr_func_pane

0x6b37,	// (0x00043499) cell_hwr_side_button_pane_ParamLimits

0x6b37,	// (0x00043499) cell_hwr_side_button_pane

0xd957,	// (0x0004a2b9) aid_area_touch_clock_ParamLimits

0x7edd,	// (0x0004483f) bg_uniindi_top_pane_ParamLimits

0xd969,	// (0x0004a2cb) uniindi_top_pane_g1_ParamLimits

0xd97f,	// (0x0004a2e1) uniindi_top_pane_g2_ParamLimits

0xd98b,	// (0x0004a2ed) uniindi_top_pane_g3_ParamLimits

0xd99c,	// (0x0004a2fe) uniindi_top_pane_g4_ParamLimits

0xfcfa,	// (0x0004c65c) uniindi_top_pane_g_ParamLimits

0xd9a9,	// (0x0004a30b) uniindi_top_pane_t1_ParamLimits

0x7edd,	// (0x0004483f) bg_vkb2_func_pane_cp01_ParamLimits

0x7edd,	// (0x0004483f) bg_vkb2_func_pane_cp01

0xe4df,	// (0x0004ae41) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4df,	// (0x0004ae41) cel_fep_hwr_func_pane_g1

0x7edd,	// (0x0004483f) bg_vkb2_func_pane_cp02_ParamLimits

0x7edd,	// (0x0004483f) bg_vkb2_func_pane_cp02

0xe4df,	// (0x0004ae41) cell_hwr_side_button_pane_g1_ParamLimits

0xe4df,	// (0x0004ae41) cell_hwr_side_button_pane_g1

0x9872,	// (0x000461d4) status_pane_g4_ParamLimits

0x9872,	// (0x000461d4) status_pane_g4

0x988c,	// (0x000461ee) status_pane_t1

0xbd67,	// (0x000486c9) form2_midp_gauge_slider_cont_pane

0xbd6f,	// (0x000486d1) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbd81,	// (0x000486e3) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbd93,	// (0x000486f5) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfac6,	// (0x0004c428) form2_midp_gauge_slider_pane_t_ParamLimits

0xbda5,	// (0x00048707) form2_midp_slider_pane_ParamLimits

0x6f8d,	// (0x000438ef) aid_size_cell_func_vkb2_ParamLimits

0x6f8d,	// (0x000438ef) aid_size_cell_func_vkb2

0xe480,	// (0x0004ade2) slider_pane_g4_ParamLimits

0xe480,	// (0x0004ade2) slider_pane_g4

0x7694,	// (0x00043ff6) form2_midp_gauge_slider_pane_t2_cp01

0x76a2,	// (0x00044004) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x76a2,	// (0x00044004) form2_midp_gauge_slider_pane_t3_cp01

0x76bf,	// (0x00044021) form2_midp_slider_pane_cp01

0x25f4,	// (0x0003ef56) navi_smil_pane

0xe518,	// (0x0004ae7a) navi_smil_pane_g1

0xe520,	// (0x0004ae82) navi_smil_pane_t1

0xe4ed,	// (0x0004ae4f) form2_midp_slider_pane_g1

0xe4f6,	// (0x0004ae58) form2_midp_slider_pane_g2

0xe4fe,	// (0x0004ae60) form2_midp_slider_pane_g3

0xe4ed,	// (0x0004ae4f) form2_midp_slider_pane_g4

0xe506,	// (0x0004ae68) form2_midp_slider_pane_g5

0x0004,

0xfdf2,	// (0x0004c754) form2_midp_slider_pane_g

0x7684,	// (0x00043fe6) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7684,	// (0x00043fe6) vkb2_area_bottom_space_btn_pane_g4

0x96a1,	// (0x00046003) lc0_navi_pane_ParamLimits

0x96a1,	// (0x00046003) lc0_navi_pane

0x9717,	// (0x00046079) lc0_stat_indi_pane_ParamLimits

0x9717,	// (0x00046079) lc0_stat_indi_pane

0x972e,	// (0x00046090) ls0_title_pane_ParamLimits

0x972e,	// (0x00046090) ls0_title_pane

0x84ed,	// (0x00044e4f) bg_popup_sub_pane_cp14_ParamLimits

0xd93e,	// (0x0004a2a0) list_uniindi_pane_ParamLimits

0xd94a,	// (0x0004a2ac) uniindi_top_pane_ParamLimits

0xd9e6,	// (0x0004a348) list_single_uniindi_pane_g1_ParamLimits

0xd9f9,	// (0x0004a35b) list_single_uniindi_pane_t1_ParamLimits

0x76c8,	// (0x0004402a) lc0_stat_clock_pane_ParamLimits

0x76c8,	// (0x0004402a) lc0_stat_clock_pane

0xe52e,	// (0x0004ae90) lc0_stat_indi_pane_g1_ParamLimits

0xe52e,	// (0x0004ae90) lc0_stat_indi_pane_g1

0xe53b,	// (0x0004ae9d) lc0_stat_indi_pane_g2_ParamLimits

0xe53b,	// (0x0004ae9d) lc0_stat_indi_pane_g2

0x0001,

0xfdfd,	// (0x0004c75f) lc0_stat_indi_pane_g_ParamLimits

0xfdfd,	// (0x0004c75f) lc0_stat_indi_pane_g

0x76d5,	// (0x00044037) lc0_uni_indicator_pane_ParamLimits

0x76d5,	// (0x00044037) lc0_uni_indicator_pane

0xe548,	// (0x0004aeaa) ls0_title_pane_g1_ParamLimits

0xe548,	// (0x0004aeaa) ls0_title_pane_g1

0xe55c,	// (0x0004aebe) ls0_title_pane_t1_ParamLimits

0xe55c,	// (0x0004aebe) ls0_title_pane_t1

0x76e2,	// (0x00044044) lc0_uni_indicator_pane_g1_ParamLimits

0x76e2,	// (0x00044044) lc0_uni_indicator_pane_g1

0xe592,	// (0x0004aef4) lc0_stat_clock_pane_t1

0x25f4,	// (0x0003ef56) main_ai5_pane

0xe5a0,	// (0x0004af02) ai5_sk_pane_ParamLimits

0xe5a0,	// (0x0004af02) ai5_sk_pane

0xe5ad,	// (0x0004af0f) cell_ai5_widget_pane_ParamLimits

0xe5ad,	// (0x0004af0f) cell_ai5_widget_pane

0xe676,	// (0x0004afd8) aid_size_cell_widget_grid

0xe684,	// (0x0004afe6) bg_ai5_widget_pane_ParamLimits

0xe684,	// (0x0004afe6) bg_ai5_widget_pane

0xe700,	// (0x0004b062) cell_ai5_widget_pane_g2

0xe714,	// (0x0004b076) cell_ai5_widget_pane_g3

0xe72e,	// (0x0004b090) cell_ai5_widget_pane_g4

0xe73e,	// (0x0004b0a0) cell_ai5_widget_pane_g5

0xe74e,	// (0x0004b0b0) cell_ai5_widget_pane_g6

0xe75a,	// (0x0004b0bc) cell_ai5_widget_pane_g7

0xe7c6,	// (0x0004b128) cell_ai5_widget_pane_t1_ParamLimits

0xe7c6,	// (0x0004b128) cell_ai5_widget_pane_t1

0xe7e3,	// (0x0004b145) cell_ai5_widget_pane_t2_ParamLimits

0xe7e3,	// (0x0004b145) cell_ai5_widget_pane_t2

0xe7fb,	// (0x0004b15d) cell_ai5_widget_pane_t3_ParamLimits

0xe7fb,	// (0x0004b15d) cell_ai5_widget_pane_t3

0xe813,	// (0x0004b175) cell_ai5_widget_pane_t4_ParamLimits

0xe813,	// (0x0004b175) cell_ai5_widget_pane_t4

0xe839,	// (0x0004b19b) cell_ai5_widget_pane_t5_ParamLimits

0xe839,	// (0x0004b19b) cell_ai5_widget_pane_t5

0xe858,	// (0x0004b1ba) cell_ai5_widget_pane_t6_ParamLimits

0xe858,	// (0x0004b1ba) cell_ai5_widget_pane_t6

0xe86a,	// (0x0004b1cc) cell_ai5_widget_pane_t7_ParamLimits

0xe86a,	// (0x0004b1cc) cell_ai5_widget_pane_t7

0xe889,	// (0x0004b1eb) cell_ai5_widget_pane_t8_ParamLimits

0xe889,	// (0x0004b1eb) cell_ai5_widget_pane_t8

0x000b,

0xfe1d,	// (0x0004c77f) cell_ai5_widget_pane_t_ParamLimits

0xfe1d,	// (0x0004c77f) cell_ai5_widget_pane_t

0xe90d,	// (0x0004b26f) grid_ai5_widget_pane

0x84ed,	// (0x00044e4f) highlight_cell_ai5_widget_pane_ParamLimits

0x84ed,	// (0x00044e4f) highlight_cell_ai5_widget_pane

0xe91b,	// (0x0004b27d) ai5_sk_left_pane

0xe925,	// (0x0004b287) ai5_sk_middle_pane

0xe92f,	// (0x0004b291) ai5_sk_right_pane

0xe939,	// (0x0004b29b) bg_ai5_widget_pane_g1_ParamLimits

0xe939,	// (0x0004b29b) bg_ai5_widget_pane_g1

0xe945,	// (0x0004b2a7) bg_ai5_widget_pane_g2_ParamLimits

0xe945,	// (0x0004b2a7) bg_ai5_widget_pane_g2

0xe951,	// (0x0004b2b3) bg_ai5_widget_pane_g3_ParamLimits

0xe951,	// (0x0004b2b3) bg_ai5_widget_pane_g3

0xe95d,	// (0x0004b2bf) bg_ai5_widget_pane_g4_ParamLimits

0xe95d,	// (0x0004b2bf) bg_ai5_widget_pane_g4

0xe969,	// (0x0004b2cb) bg_ai5_widget_pane_g5_ParamLimits

0xe969,	// (0x0004b2cb) bg_ai5_widget_pane_g5

0xe975,	// (0x0004b2d7) bg_ai5_widget_pane_g6_ParamLimits

0xe975,	// (0x0004b2d7) bg_ai5_widget_pane_g6

0xe981,	// (0x0004b2e3) bg_ai5_widget_pane_g7_ParamLimits

0xe981,	// (0x0004b2e3) bg_ai5_widget_pane_g7

0xe98d,	// (0x0004b2ef) bg_ai5_widget_pane_g8_ParamLimits

0xe98d,	// (0x0004b2ef) bg_ai5_widget_pane_g8

0xe999,	// (0x0004b2fb) bg_ai5_widget_pane_g9_ParamLimits

0xe999,	// (0x0004b2fb) bg_ai5_widget_pane_g9

0x0008,

0xfe36,	// (0x0004c798) bg_ai5_widget_pane_g_ParamLimits

0xfe36,	// (0x0004c798) bg_ai5_widget_pane_g

0xe9cb,	// (0x0004b32d) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9cb,	// (0x0004b32d) cell_shortcut_ai5_widget_pane

0x91a3,	// (0x00045b05) bg_cell_shortcut_ai5_widget_pane

0xe9dc,	// (0x0004b33e) cell_grid_ai5_widget_pane_g1

0x91a3,	// (0x00045b05) highlight_cell_shortcut_ai5_widget_pane

0x9a01,	// (0x00046363) ai5_sk_left_pane_g1

0xe9e5,	// (0x0004b347) ai5_sk_left_pane_g2

0xe9ed,	// (0x0004b34f) ai5_sk_left_pane_g3

0xe9f5,	// (0x0004b357) ai5_sk_left_pane_g4

0x0003,

0xfe49,	// (0x0004c7ab) ai5_sk_left_pane_g

0xe9fd,	// (0x0004b35f) ai5_sk_left_pane_t1

0x99f9,	// (0x0004635b) ai5_sk_right_pane_g1

0xea0b,	// (0x0004b36d) ai5_sk_right_pane_g2

0xea13,	// (0x0004b375) ai5_sk_right_pane_g3

0xea1b,	// (0x0004b37d) ai5_sk_right_pane_g4

0x0003,

0xfe52,	// (0x0004c7b4) ai5_sk_right_pane_g

0xea23,	// (0x0004b385) ai5_sk_right_pane_t1

0x99f9,	// (0x0004635b) ai5_sk_middle_pane_g1

0x9a01,	// (0x00046363) ai5_sk_middle_pane_g2

0x9a19,	// (0x0004637b) ai5_sk_middle_pane_g3

0xea13,	// (0x0004b375) ai5_sk_middle_pane_g4

0xe9ed,	// (0x0004b34f) ai5_sk_middle_pane_g5

0xea31,	// (0x0004b393) ai5_sk_middle_pane_g6

0xea39,	// (0x0004b39b) ai5_sk_middle_pane_g7

0x0006,

0xfe5b,	// (0x0004c7bd) ai5_sk_middle_pane_g

0x9527,	// (0x00045e89) aid_touch_area_size_lc0_ParamLimits

0x9527,	// (0x00045e89) aid_touch_area_size_lc0

0x6c86,	// (0x000435e8) cell_hwr_candidate_pane_t1_ParamLimits

0x9543,	// (0x00045ea5) aid_touch_navi_pane

0x981c,	// (0x0004617e) status_dt_navi_pane_ParamLimits

0x981c,	// (0x0004617e) status_dt_navi_pane

0x9829,	// (0x0004618b) status_dt_sta_pane_ParamLimits

0x9829,	// (0x0004618b) status_dt_sta_pane

0xea41,	// (0x0004b3a3) dt_sta_controll_pane

0xea4e,	// (0x0004b3b0) dt_sta_indi_pane

0xea5f,	// (0x0004b3c1) dt_sta_title_pane

0x7edd,	// (0x0004483f) bg_dt_sta_indi_pane_ParamLimits

0x7edd,	// (0x0004483f) bg_dt_sta_indi_pane

0xea72,	// (0x0004b3d4) dt_sta_battery_pane

0xea7a,	// (0x0004b3dc) dt_sta_indi_pane_g1

0xea83,	// (0x0004b3e5) dt_sta_indi_pane_g2

0xea8c,	// (0x0004b3ee) dt_sta_indi_pane_g3

0x0002,

0xfe6a,	// (0x0004c7cc) dt_sta_indi_pane_g

0xea95,	// (0x0004b3f7) dt_sta_signal_pane

0x84ed,	// (0x00044e4f) bg_dt_sta_title_pane_ParamLimits

0x84ed,	// (0x00044e4f) bg_dt_sta_title_pane

0xea9e,	// (0x0004b400) dt_sta_title_pane_g1

0xeaa6,	// (0x0004b408) dt_sta_title_pane_t1_ParamLimits

0xeaa6,	// (0x0004b408) dt_sta_title_pane_t1

0x25f4,	// (0x0003ef56) bg_dt_sta_control_pane

0xeabb,	// (0x0004b41d) dt_sta_controll_pane_g1

0xeac4,	// (0x0004b426) bg_dt_sta_title_pane_g1

0xeacd,	// (0x0004b42f) bg_dt_sta_title_pane_g2

0xead6,	// (0x0004b438) bg_dt_sta_title_pane_g3

0x0002,

0xfe71,	// (0x0004c7d3) bg_dt_sta_title_pane_g

0xc022,	// (0x00048984) bg_dt_sta_indi_pane_g1

0xeadf,	// (0x0004b441) dt_sta_signal_pane_g1

0xeae7,	// (0x0004b449) dt_sta_signal_pane_g2

0x0001,

0xfe78,	// (0x0004c7da) dt_sta_signal_pane_g

0xeaef,	// (0x0004b451) dt_sta_battery_pane_g1

0xeaf8,	// (0x0004b45a) dt_sta_battery_pane_t1

0xc022,	// (0x00048984) bg_dt_sta_control_pane_g1

0x8ca1,	// (0x00045603) fep_china_uni_eep_pane

0x8ca9,	// (0x0004560b) fep_china_uni_entry_pane_ParamLimits

0x8cb9,	// (0x0004561b) popup_fep_china_uni_window_g1_ParamLimits

0x8cc9,	// (0x0004562b) popup_fep_china_uni_window_g2_ParamLimits

0x8cc9,	// (0x0004562b) popup_fep_china_uni_window_g2

0x0001,

0xf6fd,	// (0x0004c05f) popup_fep_china_uni_window_g_ParamLimits

0xf6fd,	// (0x0004c05f) popup_fep_china_uni_window_g

0xeb07,	// (0x0004b469) fep_china_uni_eep_pane_g1

0xeb0f,	// (0x0004b471) fep_china_uni_eep_pane_t1

0xe50f,	// (0x0004ae71) aid_touch_area_size_smil_player

0x9699,	// (0x00045ffb) lc0_clock_pane

0x9880,	// (0x000461e2) status_pane_g5_ParamLimits

0x9880,	// (0x000461e2) status_pane_g5

0x609d,	// (0x000429ff) popup_keymap_window

0x983e,	// (0x000461a0) status_icon_pane

0xe714,	// (0x0004b076) cell_ai5_widget_pane_g3_ParamLimits

0xe72e,	// (0x0004b090) cell_ai5_widget_pane_g4_ParamLimits

0xe73e,	// (0x0004b0a0) cell_ai5_widget_pane_g5_ParamLimits

0xe766,	// (0x0004b0c8) cell_ai5_widget_pane_g8_ParamLimits

0xe766,	// (0x0004b0c8) cell_ai5_widget_pane_g8

0xe77a,	// (0x0004b0dc) cell_ai5_widget_pane_g9_ParamLimits

0xe77a,	// (0x0004b0dc) cell_ai5_widget_pane_g9

0xe78e,	// (0x0004b0f0) cell_ai5_widget_pane_g10_ParamLimits

0xe78e,	// (0x0004b0f0) cell_ai5_widget_pane_g10

0xeb1e,	// (0x0004b480) status_icon_pane_g1

0x25f4,	// (0x0003ef56) bg_popup_sub_pane_cp13

0xeb26,	// (0x0004b488) popup_keymap_window_t1

0x9478,	// (0x00045dda) control_pane_g6_ParamLimits

0x9478,	// (0x00045dda) control_pane_g6

0x9485,	// (0x00045de7) control_pane_g7_ParamLimits

0x9485,	// (0x00045de7) control_pane_g7

0x9492,	// (0x00045df4) control_pane_g8_ParamLimits

0x9492,	// (0x00045df4) control_pane_g8

0xea41,	// (0x0004b3a3) dt_sta_controll_pane_ParamLimits

0xea4e,	// (0x0004b3b0) dt_sta_indi_pane_ParamLimits

0xea5f,	// (0x0004b3c1) dt_sta_title_pane_ParamLimits

0x8419,	// (0x00044d7b) aid_size_touch_scroll_bar_cale

0x563b,	// (0x00041f9d) popup_discreet_window_ParamLimits

0x563b,	// (0x00041f9d) popup_discreet_window

0x56c3,	// (0x00042025) popup_sk_window

0xa080,	// (0x000469e2) bg_popup_sub_pane_cp28_ParamLimits

0xa080,	// (0x000469e2) bg_popup_sub_pane_cp28

0xeb34,	// (0x0004b496) popup_discreet_window_g1_ParamLimits

0xeb34,	// (0x0004b496) popup_discreet_window_g1

0xeb54,	// (0x0004b4b6) popup_discreet_window_t1_ParamLimits

0xeb54,	// (0x0004b4b6) popup_discreet_window_t1

0xeb72,	// (0x0004b4d4) popup_discreet_window_t2_ParamLimits

0xeb72,	// (0x0004b4d4) popup_discreet_window_t2

0x0002,

0xfe7d,	// (0x0004c7df) popup_discreet_window_t_ParamLimits

0xfe7d,	// (0x0004c7df) popup_discreet_window_t

0x76f6,	// (0x00044058) popup_sk_window_g1

0x7700,	// (0x00044062) popup_sk_window_g2

0x0001,

0xfe84,	// (0x0004c7e6) popup_sk_window_g

0x7708,	// (0x0004406a) popup_sk_window_t1

0x7716,	// (0x00044078) popup_sk_window_t1_copy1

0xe700,	// (0x0004b062) cell_ai5_widget_pane_g2_ParamLimits

0xe89b,	// (0x0004b1fd) cell_ai5_widget_pane_t9_ParamLimits

0xe89b,	// (0x0004b1fd) cell_ai5_widget_pane_t9

0x25f4,	// (0x0003ef56) main_fep_fshwr2_pane

0x7724,	// (0x00044086) aid_fshwr2_btn_pane

0x7734,	// (0x00044096) aid_fshwr2_syb_pane

0x7748,	// (0x000440aa) aid_fshwr2_txt_pane

0x7758,	// (0x000440ba) fshwr2_func_candi_pane

0x777c,	// (0x000440de) fshwr2_hwr_syb_pane

0x7796,	// (0x000440f8) fshwr2_icf_pane

0x25f4,	// (0x0003ef56) fshwr2_icf_bg_pane

0x77c4,	// (0x00044126) fshwr2_icf_pane_t1_ParamLimits

0x77c4,	// (0x00044126) fshwr2_icf_pane_t1

0x8b76,	// (0x000454d8) fshwr2_func_candi_pane_g1

0xebc4,	// (0x0004b526) fshwr2_func_candi_row_pane_ParamLimits

0xebc4,	// (0x0004b526) fshwr2_func_candi_row_pane

0x77dc,	// (0x0004413e) cell_fshwr2_syb_pane_ParamLimits

0x77dc,	// (0x0004413e) cell_fshwr2_syb_pane

0xe4df,	// (0x0004ae41) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe4df,	// (0x0004ae41) fshwr2_hwr_syb_pane_g1

0x25f4,	// (0x0003ef56) bg_popup_call_pane_cp01

0x77ff,	// (0x00044161) fshwr2_func_candi_cell_pane_ParamLimits

0x77ff,	// (0x00044161) fshwr2_func_candi_cell_pane

0xa6f4,	// (0x00047056) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa6f4,	// (0x00047056) fshwr2_func_candi_cell_bg_pane

0x784a,	// (0x000441ac) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x784a,	// (0x000441ac) fshwr2_func_candi_cell_pane_g1

0x7875,	// (0x000441d7) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7875,	// (0x000441d7) fshwr2_func_candi_cell_pane_t1

0x25f4,	// (0x0003ef56) bg_button_pane_cp08

0x94c7,	// (0x00045e29) cell_fshwr2_syb_bg_pane

0x7888,	// (0x000441ea) cell_fshwr2_syb_bg_pane_g1

0x789c,	// (0x000441fe) cell_fshwr2_syb_bg_pane_t1

0x84ed,	// (0x00044e4f) main_tmo_pane

0xab8f,	// (0x000474f1) uni_indicator_pane_g1_ParamLimits

0xaba5,	// (0x00047507) uni_indicator_pane_g2_ParamLimits

0xabbb,	// (0x0004751d) uni_indicator_pane_g3_ParamLimits

0xabce,	// (0x00047530) uni_indicator_pane_g4_ParamLimits

0xabce,	// (0x00047530) uni_indicator_pane_g4

0xabe2,	// (0x00047544) uni_indicator_pane_g5_ParamLimits

0xabe2,	// (0x00047544) uni_indicator_pane_g5

0xabe2,	// (0x00047544) uni_indicator_pane_g6_ParamLimits

0xabe2,	// (0x00047544) uni_indicator_pane_g6

0xf8fc,	// (0x0004c25e) uni_indicator_pane_g_ParamLimits

0xd523,	// (0x00049e85) popup_tmo_note_window_ParamLimits

0xd523,	// (0x00049e85) popup_tmo_note_window

0x84ed,	// (0x00044e4f) fshwr2_bg_pane

0x7866,	// (0x000441c8) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7866,	// (0x000441c8) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe89,	// (0x0004c7eb) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe89,	// (0x0004c7eb) fshwr2_func_candi_cell_pane_g

0xc022,	// (0x00048984) bg_popup_window_pane_cp01

0x78b2,	// (0x00044214) bg_popup_window_pane_g1_cp01

0xebeb,	// (0x0004b54d) bg_popup_window_pane_cp22_ParamLimits

0xebeb,	// (0x0004b54d) bg_popup_window_pane_cp22

0xebf9,	// (0x0004b55b) listscroll_tmo_link_pane_ParamLimits

0xebf9,	// (0x0004b55b) listscroll_tmo_link_pane

0xec39,	// (0x0004b59b) popup_tmo_note_window_g1_ParamLimits

0xec39,	// (0x0004b59b) popup_tmo_note_window_g1

0xec46,	// (0x0004b5a8) tmo_note_info_pane_ParamLimits

0xec46,	// (0x0004b5a8) tmo_note_info_pane

0xec60,	// (0x0004b5c2) list_tmo_note_info_pane_g1_ParamLimits

0xec60,	// (0x0004b5c2) list_tmo_note_info_pane_g1

0xec77,	// (0x0004b5d9) list_tmo_note_info_pane_g2_ParamLimits

0xec77,	// (0x0004b5d9) list_tmo_note_info_pane_g2

0x0001,

0xfe8e,	// (0x0004c7f0) list_tmo_note_info_pane_g_ParamLimits

0xfe8e,	// (0x0004c7f0) list_tmo_note_info_pane_g

0xec93,	// (0x0004b5f5) list_tmo_note_info_text_pane_ParamLimits

0xec93,	// (0x0004b5f5) list_tmo_note_info_text_pane

0xed14,	// (0x0004b676) list_tmo_link_pane

0xed21,	// (0x0004b683) scroll_pane_cp20

0xed2e,	// (0x0004b690) list_single_tmo_link_pane_ParamLimits

0xed2e,	// (0x0004b690) list_single_tmo_link_pane

0xed3e,	// (0x0004b6a0) list_single_tmo_link_pane_t1

0xed4c,	// (0x0004b6ae) list_tmo_note_info_text_pane_t1_ParamLimits

0xed4c,	// (0x0004b6ae) list_tmo_note_info_text_pane_t1

0x859d,	// (0x00044eff) aid_size_touch_scroll_bar_cp01_ParamLimits

0x859d,	// (0x00044eff) aid_size_touch_scroll_bar_cp01

0x4adb,	// (0x0004143d) aid_size_touch_slider_marker

0x56ab,	// (0x0004200d) popup_settings_window_ParamLimits

0x56ab,	// (0x0004200d) popup_settings_window

0x4c72,	// (0x000415d4) popup_candi_list_indi_window

0x9543,	// (0x00045ea5) aid_touch_navi_pane_ParamLimits

0x6ee6,	// (0x00043848) rs_clock_indi_pane

0x6eef,	// (0x00043851) sctrl_sk_bottom_pane_ParamLimits

0x6f00,	// (0x00043862) sctrl_sk_top_pane_ParamLimits

0x6fdf,	// (0x00043941) popup_fep_tooltip_window

0xe676,	// (0x0004afd8) aid_size_cell_widget_grid_ParamLimits

0xe6eb,	// (0x0004b04d) cell_ai5_widget_pane_g1_ParamLimits

0xe6eb,	// (0x0004b04d) cell_ai5_widget_pane_g1

0xe74e,	// (0x0004b0b0) cell_ai5_widget_pane_g6_ParamLimits

0xe75a,	// (0x0004b0bc) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe02,	// (0x0004c764) cell_ai5_widget_pane_g_ParamLimits

0xfe02,	// (0x0004c764) cell_ai5_widget_pane_g

0xe8ca,	// (0x0004b22c) cell_ai5_widget_pane_t10_ParamLimits

0xe8ca,	// (0x0004b22c) cell_ai5_widget_pane_t10

0xe90d,	// (0x0004b26f) grid_ai5_widget_pane_ParamLimits

0xe9a5,	// (0x0004b307) cell_contacts_ai5_widget_pane_ParamLimits

0xe9a5,	// (0x0004b307) cell_contacts_ai5_widget_pane

0xeb87,	// (0x0004b4e9) popup_discreet_window_t3_ParamLimits

0xeb87,	// (0x0004b4e9) popup_discreet_window_t3

0x77ae,	// (0x00044110) popup_fshwr2_char_preview_window_ParamLimits

0x77ae,	// (0x00044110) popup_fshwr2_char_preview_window

0xecb1,	// (0x0004b613) tmo_note_info_pane_t1

0xecc6,	// (0x0004b628) tmo_note_info_pane_t2

0xecdb,	// (0x0004b63d) tmo_note_info_pane_t3

0xecf0,	// (0x0004b652) tmo_note_info_pane_t4

0xed02,	// (0x0004b664) tmo_note_info_pane_t5

0x0004,

0xfe93,	// (0x0004c7f5) tmo_note_info_pane_t

0xed14,	// (0x0004b676) list_tmo_link_pane_ParamLimits

0xed21,	// (0x0004b683) scroll_pane_cp20_ParamLimits

0x25f4,	// (0x0003ef56) bg_popup_fep_char_preview_window_cp01

0xed65,	// (0x0004b6c7) popup_fshwr2_char_preview_window_t1

0xed73,	// (0x0004b6d5) popup_candi_list_indi_window_g1

0xed7c,	// (0x0004b6de) bg_cell_contacts_ai5_widget_pane

0xed88,	// (0x0004b6ea) cell_contacts_ai5_widget_pane_g1

0xc702,	// (0x00049064) cell_contacts_ai5_widget_pane_g2

0xed9d,	// (0x0004b6ff) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe9e,	// (0x0004c800) cell_contacts_ai5_widget_pane_g

0xeda9,	// (0x0004b70b) cell_contacts_ai5_widget_pane_t1

0x84ed,	// (0x00044e4f) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee20,	// (0x0004b782) settings_container_pane

0x91a3,	// (0x00045b05) listscroll_set_pane_copy1

0xb70c,	// (0x0004806e) scroll_pane_cp121_copy1

0x9e1d,	// (0x0004677f) set_content_pane_copy1

0xee2c,	// (0x0004b78e) aid_height_set_list_copy1_ParamLimits

0xee2c,	// (0x0004b78e) aid_height_set_list_copy1

0xadda,	// (0x0004773c) aid_size_parent_copy1_ParamLimits

0xadda,	// (0x0004773c) aid_size_parent_copy1

0xee38,	// (0x0004b79a) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee38,	// (0x0004b79a) button_value_adjust_pane_cp6_copy1

0x94c7,	// (0x00045e29) list_highlight_pane_cp2_copy1_ParamLimits

0x94c7,	// (0x00045e29) list_highlight_pane_cp2_copy1

0xee4c,	// (0x0004b7ae) list_set_pane_copy1_ParamLimits

0xee4c,	// (0x0004b7ae) list_set_pane_copy1

0xedbb,	// (0x0004b71d) main_pane_set_t1_copy1_ParamLimits

0xedbb,	// (0x0004b71d) main_pane_set_t1_copy1

0xedf5,	// (0x0004b757) main_pane_set_t2_copy1_ParamLimits

0xedf5,	// (0x0004b757) main_pane_set_t2_copy1

0xeef9,	// (0x0004b85b) main_pane_set_t3_copy1

0xef07,	// (0x0004b869) main_pane_set_t4_copy1

0xee14,	// (0x0004b776) set_content_pane_g1_copy1_ParamLimits

0xee14,	// (0x0004b776) set_content_pane_g1_copy1

0xef15,	// (0x0004b877) setting_code_pane_copy1

0xef1d,	// (0x0004b87f) setting_slider_graphic_pane_copy1

0xef1d,	// (0x0004b87f) setting_slider_pane_copy1

0xef25,	// (0x0004b887) setting_text_pane_copy1

0xef25,	// (0x0004b887) setting_volume_pane_copy1

0xef15,	// (0x0004b877) settings_code_pane_cp2_copy1

0xef2d,	// (0x0004b88f) settings_code_pane_cp_copy1_ParamLimits

0xef2d,	// (0x0004b88f) settings_code_pane_cp_copy1

0x78bb,	// (0x0004421d) volume_set_pane_copy1

0xef41,	// (0x0004b8a3) volume_set_pane_g10_copy1

0xef49,	// (0x0004b8ab) volume_set_pane_g1_copy1

0xef51,	// (0x0004b8b3) volume_set_pane_g2_copy1

0xef59,	// (0x0004b8bb) volume_set_pane_g3_copy1

0xef61,	// (0x0004b8c3) volume_set_pane_g4_copy1

0xef69,	// (0x0004b8cb) volume_set_pane_g5_copy1

0xef71,	// (0x0004b8d3) volume_set_pane_g6_copy1

0xef79,	// (0x0004b8db) volume_set_pane_g7_copy1

0xef81,	// (0x0004b8e3) volume_set_pane_g8_copy1

0xef89,	// (0x0004b8eb) volume_set_pane_g9_copy1

0x7c54,	// (0x000445b6) bg_set_opt_pane_cp_copy1_ParamLimits

0x7c54,	// (0x000445b6) bg_set_opt_pane_cp_copy1

0x78c3,	// (0x00044225) setting_slider_pane_t1_copy1_ParamLimits

0x78c3,	// (0x00044225) setting_slider_pane_t1_copy1

0x78e2,	// (0x00044244) setting_slider_pane_t2_copy1_ParamLimits

0x78e2,	// (0x00044244) setting_slider_pane_t2_copy1

0x78fc,	// (0x0004425e) setting_slider_pane_t3_copy1_ParamLimits

0x78fc,	// (0x0004425e) setting_slider_pane_t3_copy1

0x7914,	// (0x00044276) slider_set_pane_copy1_ParamLimits

0x7914,	// (0x00044276) slider_set_pane_copy1

0x8539,	// (0x00044e9b) set_opt_bg_pane_g1_copy2

0x8541,	// (0x00044ea3) set_opt_bg_pane_g2_copy2

0xef91,	// (0x0004b8f3) set_opt_bg_pane_g3_copy2

0x8551,	// (0x00044eb3) set_opt_bg_pane_g4_copy2

0x8559,	// (0x00044ebb) set_opt_bg_pane_g5_copy2

0x8561,	// (0x00044ec3) set_opt_bg_pane_g6_copy2

0xef9b,	// (0x0004b8fd) set_opt_bg_pane_g7_copy2

0xefa3,	// (0x0004b905) set_opt_bg_pane_g8_copy2

0xefad,	// (0x0004b90f) set_opt_bg_pane_g9_copy2

0x792a,	// (0x0004428c) aid_size_touch_slider_mark_copy1_ParamLimits

0x792a,	// (0x0004428c) aid_size_touch_slider_mark_copy1

0xefb7,	// (0x0004b919) slider_set_pane_g1_copy1

0x793e,	// (0x000442a0) slider_set_pane_g2_copy1

0x67dd,	// (0x0004313f) slider_set_pane_g3_copy1_ParamLimits

0x67dd,	// (0x0004313f) slider_set_pane_g3_copy1

0x67f1,	// (0x00043153) slider_set_pane_g4_copy1_ParamLimits

0x67f1,	// (0x00043153) slider_set_pane_g4_copy1

0x6809,	// (0x0004316b) slider_set_pane_g5_copy1_ParamLimits

0x6809,	// (0x0004316b) slider_set_pane_g5_copy1

0x67dd,	// (0x0004313f) slider_set_pane_g6_copy1_ParamLimits

0x67dd,	// (0x0004313f) slider_set_pane_g6_copy1

0x7946,	// (0x000442a8) slider_set_pane_g7_copy1_ParamLimits

0x7946,	// (0x000442a8) slider_set_pane_g7_copy1

0x7b74,	// (0x000444d6) bg_set_opt_pane_cp2_copy1

0xefc0,	// (0x0004b922) setting_slider_graphic_pane_g1_copy1

0xefc9,	// (0x0004b92b) setting_slider_graphic_pane_t1_copy1

0xefd9,	// (0x0004b93b) setting_slider_graphic_pane_t2_copy1

0xefe9,	// (0x0004b94b) slider_set_pane_cp_copy1

0xeff9,	// (0x0004b95b) input_focus_pane_cp1_copy1

0xf002,	// (0x0004b964) list_set_text_pane_copy1

0xf00a,	// (0x0004b96c) setting_text_pane_g1_copy1

0x53b2,	// (0x00041d14) set_text_pane_t1_copy1

0xeff9,	// (0x0004b95b) input_focus_pane_cp2_copy1

0xf00a,	// (0x0004b96c) setting_code_pane_g1_copy1

0xf013,	// (0x0004b975) setting_code_pane_t1_copy1

0xb534,	// (0x00047e96) list_set_graphic_pane_copy1

0x7b74,	// (0x000444d6) bg_set_opt_pane_cp4_copy1

0x8eac,	// (0x0004580e) list_set_graphic_pane_g1_copy1_ParamLimits

0x8eac,	// (0x0004580e) list_set_graphic_pane_g1_copy1

0xf021,	// (0x0004b983) list_set_graphic_pane_g2_copy1

0x8ec4,	// (0x00045826) list_set_graphic_pane_t1_copy1_ParamLimits

0x8ec4,	// (0x00045826) list_set_graphic_pane_t1_copy1

0xc022,	// (0x00048984) rs_clock_indi_pane_g1

0xf029,	// (0x0004b98b) rs_clock_indi_pane_t1

0xf037,	// (0x0004b999) rs_indi_pane

0xf03f,	// (0x0004b9a1) rs_indi_pane_g1

0xf048,	// (0x0004b9aa) rs_indi_pane_g2

0xf051,	// (0x0004b9b3) rs_indi_pane_g3

0x0002,

0xfea5,	// (0x0004c807) rs_indi_pane_g

0x91a3,	// (0x00045b05) bg_popup_preview_window_pane_cp03

0xf05a,	// (0x0004b9bc) popup_fep_tooltip_window_t1

0xccc2,	// (0x00049624) popup_note2_window_g2_ParamLimits

0xccc2,	// (0x00049624) popup_note2_window_g2

0x0001,

0xfc32,	// (0x0004c594) popup_note2_window_g_ParamLimits

0xfc32,	// (0x0004c594) popup_note2_window_g

0xd1bd,	// (0x00049b1f) bg_popup_sub_pane_cp11_ParamLimits

0xd1ca,	// (0x00049b2c) cell_ai3_links_pane_g1_ParamLimits

0xd1e1,	// (0x00049b43) cell_ai3_links_pane_t1

0x53b2,	// (0x00041d14) set_text_pane_t1_copy1_ParamLimits

0x90b7,	// (0x00045a19) cell_graphic_popup_pane_cp2_ParamLimits

0x90b7,	// (0x00045a19) cell_graphic_popup_pane_cp2

0xf068,	// (0x0004b9ca) cell_graphic_popup_pane_g1_cp2

0x822c,	// (0x00044b8e) cell_graphic_popup_pane_g2_cp2

0xf070,	// (0x0004b9d2) cell_graphic_popup_pane_g3_cp2

0xf078,	// (0x0004b9da) cell_graphic_popup_pane_t2_cp2

0x823d,	// (0x00044b9f) grid_highlight_pane_cp3_cp2

0x8891,	// (0x000451f3) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x84ed,	// (0x00044e4f) main_tmo_pane_ParamLimits

0xd517,	// (0x00049e79) popup_tmo_big_image_note_window

0xe6da,	// (0x0004b03c) cell_ai5_widget_list_pane

0xe6e2,	// (0x0004b044) cell_ai5_widget_lrg_icon_pane

0xecb1,	// (0x0004b613) tmo_note_info_pane_t1_ParamLimits

0xecc6,	// (0x0004b628) tmo_note_info_pane_t2_ParamLimits

0xecdb,	// (0x0004b63d) tmo_note_info_pane_t3_ParamLimits

0xecf0,	// (0x0004b652) tmo_note_info_pane_t4_ParamLimits

0xed02,	// (0x0004b664) tmo_note_info_pane_t5_ParamLimits

0xfe93,	// (0x0004c7f5) tmo_note_info_pane_t_ParamLimits

0xee20,	// (0x0004b782) settings_container_pane_ParamLimits

0xeff1,	// (0x0004b953) indicator_popup_pane_cp5

0xeff1,	// (0x0004b953) indicator_popup_pane_cp6

0xb534,	// (0x00047e96) list_set_graphic_pane_copy1_ParamLimits

0x25f4,	// (0x0003ef56) bg_popup_window_pane_cp23

0xf086,	// (0x0004b9e8) popup_tmo_big_image_note_window_g1

0xf090,	// (0x0004b9f2) popup_tmo_big_image_note_window_t1

0xf0a0,	// (0x0004ba02) popup_tmo_big_image_note_window_t2

0xf0b0,	// (0x0004ba12) popup_tmo_big_image_note_window_t3

0x0002,

0xfeac,	// (0x0004c80e) popup_tmo_big_image_note_window_t

0xc022,	// (0x00048984) cell_ai5_widget_lrg_icon_pane_g1

0xf0c0,	// (0x0004ba22) cell_ai5_widget_lrg_icon_pane_t1

0xf0ce,	// (0x0004ba30) cell_ai5_widget_list_row_pane_ParamLimits

0xf0ce,	// (0x0004ba30) cell_ai5_widget_list_row_pane

0xf0e5,	// (0x0004ba47) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf0e5,	// (0x0004ba47) cell_ai5_widget_list_row_pane_g1

0xf0f2,	// (0x0004ba54) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf0f2,	// (0x0004ba54) cell_ai5_widget_list_row_pane_t1

0xf123,	// (0x0004ba85) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf123,	// (0x0004ba85) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeb3,	// (0x0004c815) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeb3,	// (0x0004c815) cell_ai5_widget_list_row_pane_t

0x25f4,	// (0x0003ef56) main_fep_vtchi_ss_pane

0xf173,	// (0x0004bad5) popup_fep_char_pre_window

0xf17b,	// (0x0004badd) popup_fep_ituss_window

0xf1a7,	// (0x0004bb09) popup_fep_vkbss_window

0x94c7,	// (0x00045e29) grid_vkbss_keypad_pane_ParamLimits

0x94c7,	// (0x00045e29) grid_vkbss_keypad_pane

0xf1e7,	// (0x0004bb49) ituss_keypad_pane

0x7966,	// (0x000442c8) aid_vkbss_key_offset_ParamLimits

0x7966,	// (0x000442c8) aid_vkbss_key_offset

0x7972,	// (0x000442d4) cell_vkbss_key_pane_ParamLimits

0x7972,	// (0x000442d4) cell_vkbss_key_pane

0xf1f3,	// (0x0004bb55) bg_cell_vkbss_key_g1_ParamLimits

0xf1f3,	// (0x0004bb55) bg_cell_vkbss_key_g1

0xf1ff,	// (0x0004bb61) cell_vkbss_key_3p_pane_ParamLimits

0xf1ff,	// (0x0004bb61) cell_vkbss_key_3p_pane

0xf235,	// (0x0004bb97) cell_vkbss_key_g1_ParamLimits

0xf235,	// (0x0004bb97) cell_vkbss_key_g1

0xf26b,	// (0x0004bbcd) cell_vkbss_key_t1_ParamLimits

0xf26b,	// (0x0004bbcd) cell_vkbss_key_t1

0x79d0,	// (0x00044332) cell_ituss_key_pane_ParamLimits

0x79d0,	// (0x00044332) cell_ituss_key_pane

0xf2c7,	// (0x0004bc29) bg_cell_ituss_key_g1_ParamLimits

0xf2c7,	// (0x0004bc29) bg_cell_ituss_key_g1

0xf2d3,	// (0x0004bc35) cell_ituss_key_pane_g1_ParamLimits

0xf2d3,	// (0x0004bc35) cell_ituss_key_pane_g1

0x79e1,	// (0x00044343) cell_ituss_key_pane_g2_ParamLimits

0x79e1,	// (0x00044343) cell_ituss_key_pane_g2

0x0005,

0xfeba,	// (0x0004c81c) cell_ituss_key_pane_g_ParamLimits

0xfeba,	// (0x0004c81c) cell_ituss_key_pane_g

0x7a65,	// (0x000443c7) cell_ituss_key_t1_ParamLimits

0x7a65,	// (0x000443c7) cell_ituss_key_t1

0x7a9f,	// (0x00044401) cell_ituss_key_t2_ParamLimits

0x7a9f,	// (0x00044401) cell_ituss_key_t2

0x7ad1,	// (0x00044433) cell_ituss_key_t3_ParamLimits

0x7ad1,	// (0x00044433) cell_ituss_key_t3

0x7b02,	// (0x00044464) cell_ituss_key_t4_ParamLimits

0x7b02,	// (0x00044464) cell_ituss_key_t4

0x0004,

0xfec7,	// (0x0004c829) cell_ituss_key_t_ParamLimits

0xfec7,	// (0x0004c829) cell_ituss_key_t

0xf2f9,	// (0x0004bc5b) cell_vkbss_key_3p_pane_g1

0xf301,	// (0x0004bc63) cell_vkbss_key_3p_pane_g2

0xf309,	// (0x0004bc6b) cell_vkbss_key_3p_pane_g3

0x0002,

0xfed2,	// (0x0004c834) cell_vkbss_key_3p_pane_g

0x91a3,	// (0x00045b05) bg_popup_fep_char_preview_window_cp02

0xf311,	// (0x0004bc73) popup_fep_char_pre_window_t1

0xe663,	// (0x0004afc5) main_ai5_sk_pane

0xed7c,	// (0x0004b6de) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed88,	// (0x0004b6ea) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc702,	// (0x00049064) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed9d,	// (0x0004b6ff) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe9e,	// (0x0004c800) cell_contacts_ai5_widget_pane_g_ParamLimits

0xeda9,	// (0x0004b70b) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x84ed,	// (0x00044e4f) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf31f,	// (0x0004bc81) main_ai5_sk_pane_g1

0x9eb9,	// (0x0004681b) popup_query_code_window_g1

0xf191,	// (0x0004baf3) popup_fep_vkb_icf_pane

0xf1be,	// (0x0004bb20) popup_fep_vtchi_icf_pane

0xf328,	// (0x0004bc8a) bg_icf_pane

0xf328,	// (0x0004bc8a) list_vkb_icf_pane

0xf334,	// (0x0004bc96) bg_icf_pane_cp01

0xf347,	// (0x0004bca9) vtchi_icf_list_pane

0xf3a7,	// (0x0004bd09) list_vkb_icf_pane_t1_ParamLimits

0xf3a7,	// (0x0004bd09) list_vkb_icf_pane_t1

0xf3c5,	// (0x0004bd27) vtchi_icf_list_pane_t1_ParamLimits

0xf3c5,	// (0x0004bd27) vtchi_icf_list_pane_t1

0xf17b,	// (0x0004badd) popup_fep_ituss_window_ParamLimits

0xf1be,	// (0x0004bb20) popup_fep_vtchi_icf_pane_ParamLimits

0xf1e7,	// (0x0004bb49) ituss_keypad_pane_ParamLimits

0x795c,	// (0x000442be) ituss_sks_pane

0xf328,	// (0x0004bc8a) bg_icf_pane_ParamLimits

0xf14b,	// (0x0004baad) icf_edit_indi_pane_ParamLimits

0xf14b,	// (0x0004baad) icf_edit_indi_pane

0xf328,	// (0x0004bc8a) list_vkb_icf_pane_ParamLimits

0xf334,	// (0x0004bc96) bg_icf_pane_cp01_ParamLimits

0xf166,	// (0x0004bac8) icf_edit_indi_pane_cp01_ParamLimits

0xf166,	// (0x0004bac8) icf_edit_indi_pane_cp01

0xf347,	// (0x0004bca9) vtchi_query_pane

0xe4df,	// (0x0004ae41) icf_edit_indi_pane_g1_ParamLimits

0xe4df,	// (0x0004ae41) icf_edit_indi_pane_g1

0xf43a,	// (0x0004bd9c) icf_edit_indi_pane_g2_ParamLimits

0xf43a,	// (0x0004bd9c) icf_edit_indi_pane_g2

0x0001,

0xfefd,	// (0x0004c85f) icf_edit_indi_pane_g_ParamLimits

0xfefd,	// (0x0004c85f) icf_edit_indi_pane_g

0xf44e,	// (0x0004bdb0) icf_edit_indi_pane_t1

0xf3e3,	// (0x0004bd45) bg_input_focus_pane_cp042

0x8410,	// (0x00044d72) vtchi_button_pane

0xf3ec,	// (0x0004bd4e) vtchi_query_pane_t1

0xf3fa,	// (0x0004bd5c) vtchi_query_pane_t2

0xf408,	// (0x0004bd6a) vtchi_query_pane_t3

0x0002,

0xfeec,	// (0x0004c84e) vtchi_query_pane_t

0x25f4,	// (0x0003ef56) bg_button_pane_cp13

0xf416,	// (0x0004bd78) vtchi_button_pane_g1

0x7b45,	// (0x000444a7) ituss_sks_pane_g1

0x7b50,	// (0x000444b2) ituss_sks_pane_g2

0x0001,

0xfef3,	// (0x0004c855) ituss_sks_pane_g

0xf41e,	// (0x0004bd80) ituss_sks_pane_t1

0xf42c,	// (0x0004bd8e) ituss_sks_pane_t2

0x0001,

0xfef8,	// (0x0004c85a) ituss_sks_pane_t

0xbaa4,	// (0x00048406) indicator_nsta_pane_cp_g1

0xbaad,	// (0x0004840f) indicator_nsta_pane_cp_g2

0xbab5,	// (0x00048417) indicator_nsta_pane_cp_g3

0xbabd,	// (0x0004841f) indicator_nsta_pane_cp_g4

0xbaad,	// (0x0004840f) indicator_nsta_pane_cp_g5

0xbab5,	// (0x00048417) indicator_nsta_pane_cp_g6

0x0005,

0xfa7c,	// (0x0004c3de) indicator_nsta_pane_cp_g

0xe21a,	// (0x0004ab7c) cell_graphic2_pane_t2_ParamLimits

0xe21a,	// (0x0004ab7c) cell_graphic2_pane_t2

0x0001,

0xfd89,	// (0x0004c6eb) cell_graphic2_pane_t_ParamLimits

0xfd89,	// (0x0004c6eb) cell_graphic2_pane_t

0xe246,	// (0x0004aba8) cell_graphic2_control_pane_t1

0x8c50,	// (0x000455b2) signal_pane_g3_ParamLimits

0x8c50,	// (0x000455b2) signal_pane_g3

0x8c62,	// (0x000455c4) signal_pane_g4_ParamLimits

0x8c62,	// (0x000455c4) signal_pane_g4

0xf135,	// (0x0004ba97) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf135,	// (0x0004ba97) cell_ai5_widget_list_row_pane_t3

0xf2e7,	// (0x0004bc49) cell_ituss_key_pane_t1_ParamLimits

0xf2e7,	// (0x0004bc49) cell_ituss_key_pane_t1

0x9af6,	// (0x00046458) form_field_data_wide_pane_vc_t2_ParamLimits

0x9af6,	// (0x00046458) form_field_data_wide_pane_vc_t2

0x9b0a,	// (0x0004646c) form_field_data_wide_pane_vc_t3_ParamLimits

0x9b0a,	// (0x0004646c) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e4,	// (0x0004c146) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e4,	// (0x0004c146) form_field_data_wide_pane_vc_t

0xb74e,	// (0x000480b0) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb74e,	// (0x000480b0) form_field_slider_wide_pane_vc_t3

0xb82c,	// (0x0004818e) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb82c,	// (0x0004818e) form_field_popup_wide_pane_vc_t2

0xb843,	// (0x000481a5) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb843,	// (0x000481a5) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa6b,	// (0x0004c3cd) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa6b,	// (0x0004c3cd) form_field_popup_wide_pane_vc_t

0x7724,	// (0x00044086) aid_fshwr2_btn_pane_ParamLimits

0x7734,	// (0x00044096) aid_fshwr2_syb_pane_ParamLimits

0x7748,	// (0x000440aa) aid_fshwr2_txt_pane_ParamLimits

0x84ed,	// (0x00044e4f) fshwr2_bg_pane_ParamLimits

0x7758,	// (0x000440ba) fshwr2_func_candi_pane_ParamLimits

0x777c,	// (0x000440de) fshwr2_hwr_syb_pane_ParamLimits

0x7796,	// (0x000440f8) fshwr2_icf_pane_ParamLimits

0x69e9,	// (0x0004334b) list_double_graphic_pane_vc_g4_ParamLimits

0x69e9,	// (0x0004334b) list_double_graphic_pane_vc_g4

0x7a01,	// (0x00044363) cell_ituss_key_pane_g3_ParamLimits

0x7a01,	// (0x00044363) cell_ituss_key_pane_g3

0x7b33,	// (0x00044495) cell_ituss_key_t5_ParamLimits

0x7b33,	// (0x00044495) cell_ituss_key_t5

0xf1a7,	// (0x0004bb09) popup_fep_vkbss_window_ParamLimits

0xe66d,	// (0x0004afcf) aid_cell_ai5_quarter

0xf44e,	// (0x0004bdb0) icf_edit_indi_pane_t1_ParamLimits

0x7f85,	// (0x000448e7) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x7f85,	// (0x000448e7) aid_tch_indicator_popup_pane_cp2

0x7f98,	// (0x000448fa) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x7f98,	// (0x000448fa) aid_tch_query_popup_data_pane_cp2

0x9e61,	// (0x000467c3) aid_tch_query_popup_pane_ParamLimits

0x9e61,	// (0x000467c3) aid_tch_query_popup_pane

0x9e61,	// (0x000467c3) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9e61,	// (0x000467c3) aid_tch_query_popup_data_pane_cp1

0x94c7,	// (0x00045e29) cell_fshwr2_syb_bg_pane_ParamLimits

0x7888,	// (0x000441ea) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x789c,	// (0x000441fe) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf191,	// (0x0004baf3) popup_fep_vkb_icf_pane_ParamLimits

0x7572,	// (0x00043ed4) bg_popup_fep_char_preview_window_g10

0xe7a2,	// (0x0004b104) cell_ai5_widget_pane_g11_ParamLimits

0xe7a2,	// (0x0004b104) cell_ai5_widget_pane_g11

0xe7ae,	// (0x0004b110) cell_ai5_widget_pane_g12_ParamLimits

0xe7ae,	// (0x0004b110) cell_ai5_widget_pane_g12

0xe7ba,	// (0x0004b11c) cell_ai5_widget_pane_g13_ParamLimits

0xe7ba,	// (0x0004b11c) cell_ai5_widget_pane_g13

0xe8e9,	// (0x0004b24b) cell_ai5_widget_pane_t11_ParamLimits

0xe8e9,	// (0x0004b24b) cell_ai5_widget_pane_t11

0xe8fb,	// (0x0004b25d) cell_ai5_widget_pane_t12_ParamLimits

0xe8fb,	// (0x0004b25d) cell_ai5_widget_pane_t12

0x7a0d,	// (0x0004436f) cell_ituss_key_pane_g4_ParamLimits

0x7a0d,	// (0x0004436f) cell_ituss_key_pane_g4

0x7a29,	// (0x0004438b) cell_ituss_key_pane_g5_ParamLimits

0x7a29,	// (0x0004438b) cell_ituss_key_pane_g5

0x7a45,	// (0x000443a7) cell_ituss_key_pane_g6_ParamLimits

0x7a45,	// (0x000443a7) cell_ituss_key_pane_g6

0x99f1,	// (0x00046353) bg_icf_pane_g1

0xf34f,	// (0x0004bcb1) bg_icf_pane_g2

0xf35b,	// (0x0004bcbd) bg_icf_pane_g3

0xf365,	// (0x0004bcc7) bg_icf_pane_g4

0xf371,	// (0x0004bcd3) bg_icf_pane_g5

0xf37b,	// (0x0004bcdd) bg_icf_pane_g6

0xf387,	// (0x0004bce9) bg_icf_pane_g7

0xf391,	// (0x0004bcf3) bg_icf_pane_g8

0xf39d,	// (0x0004bcff) bg_icf_pane_g9

0x0008,

0xfed9,	// (0x0004c83b) bg_icf_pane_g

0xf1d4,	// (0x0004bb36) popup_hyb_candi_window_ParamLimits

0xf1d4,	// (0x0004bb36) popup_hyb_candi_window

0x9a65,	// (0x000463c7) bg_popup_sub_pane_cp01_ParamLimits

0x9a65,	// (0x000463c7) bg_popup_sub_pane_cp01

0xf467,	// (0x0004bdc9) entry_hyb_candi_pane_ParamLimits

0xf467,	// (0x0004bdc9) entry_hyb_candi_pane

0xf476,	// (0x0004bdd8) grid_hyb_candi_pane_ParamLimits

0xf476,	// (0x0004bdd8) grid_hyb_candi_pane

0xf48b,	// (0x0004bded) grid_hyb_phrase_pane_ParamLimits

0xf48b,	// (0x0004bded) grid_hyb_phrase_pane

0xf49a,	// (0x0004bdfc) cell_hyb_candi_pane_ParamLimits

0xf49a,	// (0x0004bdfc) cell_hyb_candi_pane

0xf4bd,	// (0x0004be1f) cell_hyb_candi_scroll_pane

0x8b76,	// (0x000454d8) cell_hyb_candi_pane_g1

0xf4c6,	// (0x0004be28) cell_hyb_candi_pane_t1

0xf4d4,	// (0x0004be36) cell_hyb_phrase_pane

0x8b76,	// (0x000454d8) cell_hyb_phrase_pane_g1

0xf4dd,	// (0x0004be3f) cell_hyb_phrase_pane_t1

0xf4eb,	// (0x0004be4d) entry_hyb_candi_pane_t1

0x91a3,	// (0x00045b05) input_focus_pane_cp06

0xf4f9,	// (0x0004be5b) cell_hyb_candi_scroll_pane_g1

0xf501,	// (0x0004be63) cell_hyb_candi_scroll_pane_g1_aid

0xf509,	// (0x0004be6b) cell_hyb_candi_scroll_pane_g2

0xf511,	// (0x0004be73) cell_hyb_candi_scroll_pane_g2_aid

0xf519,	// (0x0004be7b) cell_hyb_candi_scroll_pane_g3

0xf521,	// (0x0004be83) cell_hyb_candi_scroll_pane_g4
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

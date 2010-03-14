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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0001e3e0 };

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
0x856e,	// (0x0002694e) Screen

0x857a,	// (0x0002695a) application_window_ParamLimits

0x857a,	// (0x0002695a) application_window

0x418e,	// (0x0002256e) screen_g1

0x85d6,	// (0x000269b6) area_bottom_pane_ParamLimits

0x85d6,	// (0x000269b6) area_bottom_pane

0x8696,	// (0x00026a76) area_top_pane_ParamLimits

0x8696,	// (0x00026a76) area_top_pane

0x8734,	// (0x00026b14) main_pane_ParamLimits

0x8734,	// (0x00026b14) main_pane

0x4198,	// (0x00022578) misc_graphics

0x9aa0,	// (0x00027e80) battery_pane_ParamLimits

0x9aa0,	// (0x00027e80) battery_pane

0x5eea,	// (0x000242ca) bg_status_flat_pane_g8

0x5ef2,	// (0x000242d2) bg_status_flat_pane_g9

0x561f,	// (0x000239ff) context_pane_ParamLimits

0x561f,	// (0x000239ff) context_pane

0x9bd4,	// (0x00027fb4) navi_pane_ParamLimits

0x9bd4,	// (0x00027fb4) navi_pane

0x9c41,	// (0x00028021) signal_pane_ParamLimits

0x9c41,	// (0x00028021) signal_pane

0x0008,

0xf880,	// (0x0002dc60) bg_status_flat_pane_g

0x9ca6,	// (0x00028086) status_pane_g1_ParamLimits

0x9ca6,	// (0x00028086) status_pane_g1

0x60e6,	// (0x000244c6) status_pane_g2_ParamLimits

0x60e6,	// (0x000244c6) status_pane_g2

0x5684,	// (0x00023a64) status_pane_g3_ParamLimits

0x5684,	// (0x00023a64) status_pane_g3

0x0004,

0xf7b3,	// (0x0002db93) status_pane_g_ParamLimits

0xf7b3,	// (0x0002db93) status_pane_g

0x9cba,	// (0x0002809a) title_pane_ParamLimits

0x9cba,	// (0x0002809a) title_pane

0x9cf7,	// (0x000280d7) uni_indicator_pane_ParamLimits

0x9cf7,	// (0x000280d7) uni_indicator_pane

0x544a,	// (0x0002382a) bg_list_pane_ParamLimits

0x544a,	// (0x0002382a) bg_list_pane

0xe781,	// (0x0002cb61) find_pane

0x95b8,	// (0x00027998) listscroll_app_pane_ParamLimits

0x95b8,	// (0x00027998) listscroll_app_pane

0x546a,	// (0x0002384a) listscroll_form_pane

0xe789,	// (0x0002cb69) listscroll_gen_pane_ParamLimits

0xe789,	// (0x0002cb69) listscroll_gen_pane

0x546a,	// (0x0002384a) listscroll_set_pane

0x8d5c,	// (0x0002713c) main_idle_act_pane

0x521e,	// (0x000235fe) main_idle_trad_pane

0x521e,	// (0x000235fe) main_list_empty_pane

0x4940,	// (0x00022d20) main_midp_pane

0x5484,	// (0x00023864) main_pane_g1_ParamLimits

0x5484,	// (0x00023864) main_pane_g1

0x95c4,	// (0x000279a4) popup_ai_message_window_ParamLimits

0x95c4,	// (0x000279a4) popup_ai_message_window

0x9642,	// (0x00027a22) popup_fep_china_uni_window_ParamLimits

0x9642,	// (0x00027a22) popup_fep_china_uni_window

0x54b6,	// (0x00023896) popup_fep_japan_candidate_window_ParamLimits

0x54b6,	// (0x00023896) popup_fep_japan_candidate_window

0x54d4,	// (0x000238b4) popup_fep_japan_predictive_window_ParamLimits

0x54d4,	// (0x000238b4) popup_fep_japan_predictive_window

0x969c,	// (0x00027a7c) popup_find_window

0x96a9,	// (0x00027a89) popup_grid_graphic_window_ParamLimits

0x96a9,	// (0x00027a89) popup_grid_graphic_window

0x5504,	// (0x000238e4) popup_large_graphic_colour_window

0x96cf,	// (0x00027aaf) popup_menu_window_ParamLimits

0x96cf,	// (0x00027aaf) popup_menu_window

0x9889,	// (0x00027c69) popup_note_image_window

0x9875,	// (0x00027c55) popup_note_wait_window_ParamLimits

0x9875,	// (0x00027c55) popup_note_wait_window

0x9875,	// (0x00027c55) popup_note_window_ParamLimits

0x9875,	// (0x00027c55) popup_note_window

0x98df,	// (0x00027cbf) popup_query_code_window_ParamLimits

0x98df,	// (0x00027cbf) popup_query_code_window

0x5538,	// (0x00023918) popup_query_data_code_window_ParamLimits

0x5538,	// (0x00023918) popup_query_data_code_window

0x98f3,	// (0x00027cd3) popup_query_data_window_ParamLimits

0x98f3,	// (0x00027cd3) popup_query_data_window

0x990b,	// (0x00027ceb) popup_query_sat_info_window_ParamLimits

0x990b,	// (0x00027ceb) popup_query_sat_info_window

0x9944,	// (0x00027d24) popup_snote_single_graphic_window_ParamLimits

0x9944,	// (0x00027d24) popup_snote_single_graphic_window

0x9944,	// (0x00027d24) popup_snote_single_text_window_ParamLimits

0x9944,	// (0x00027d24) popup_snote_single_text_window

0x554f,	// (0x0002392f) popup_sub_window_general

0x5595,	// (0x00023975) popup_window_general_ParamLimits

0x5595,	// (0x00023975) popup_window_general

0x55aa,	// (0x0002398a) power_save_pane

0x9443,	// (0x00027823) control_pane_g1_ParamLimits

0x9443,	// (0x00027823) control_pane_g1

0x946a,	// (0x0002784a) control_pane_g2_ParamLimits

0x946a,	// (0x0002784a) control_pane_g2

0x5424,	// (0x00023804) control_pane_g3_ParamLimits

0x5424,	// (0x00023804) control_pane_g3

0x0007,

0xf79b,	// (0x0002db7b) control_pane_g_ParamLimits

0xf79b,	// (0x0002db7b) control_pane_g

0x94d5,	// (0x000278b5) control_pane_t1_ParamLimits

0x94d5,	// (0x000278b5) control_pane_t1

0x9521,	// (0x00027901) control_pane_t2_ParamLimits

0x9521,	// (0x00027901) control_pane_t2

0x0002,

0xf7ac,	// (0x0002db8c) control_pane_t_ParamLimits

0xf7ac,	// (0x0002db8c) control_pane_t

0x5345,	// (0x00023725) navi_navi_volume_pane_cp1

0x534e,	// (0x0002372e) status_small_icon_pane

0x5356,	// (0x00023736) status_small_pane_g1_ParamLimits

0x5356,	// (0x00023736) status_small_pane_g1

0x538a,	// (0x0002376a) status_small_pane_g2_ParamLimits

0x538a,	// (0x0002376a) status_small_pane_g2

0x5396,	// (0x00023776) status_small_pane_g3_ParamLimits

0x5396,	// (0x00023776) status_small_pane_g3

0x53a2,	// (0x00023782) status_small_pane_g4_ParamLimits

0x53a2,	// (0x00023782) status_small_pane_g4

0x53ae,	// (0x0002378e) status_small_pane_g5_ParamLimits

0x53ae,	// (0x0002378e) status_small_pane_g5

0x53bd,	// (0x0002379d) status_small_pane_g6_ParamLimits

0x53bd,	// (0x0002379d) status_small_pane_g6

0x0007,

0xf78a,	// (0x0002db6a) status_small_pane_g_ParamLimits

0xf78a,	// (0x0002db6a) status_small_pane_g

0x53ed,	// (0x000237cd) status_small_pane_t1

0x5410,	// (0x000237f0) status_small_wait_pane_ParamLimits

0x5410,	// (0x000237f0) status_small_wait_pane

0x907d,	// (0x0002745d) aid_levels_signal_ParamLimits

0x907d,	// (0x0002745d) aid_levels_signal

0x908f,	// (0x0002746f) signal_pane_g1_ParamLimits

0x908f,	// (0x0002746f) signal_pane_g1

0x90a4,	// (0x00027484) signal_pane_g2_ParamLimits

0x90a4,	// (0x00027484) signal_pane_g2

0x0003,

0xf71b,	// (0x0002dafb) signal_pane_g_ParamLimits

0xf71b,	// (0x0002dafb) signal_pane_g

0x4d62,	// (0x00023142) context_pane_g1

0x8965,	// (0x00026d45) title_pane_g1

0x898f,	// (0x00026d6f) title_pane_t1

0x41ae,	// (0x0002258e) title_pane_t2

0x41d4,	// (0x000225b4) title_pane_t3

0x0002,

0xf56f,	// (0x0002d94f) title_pane_t

0x9d0f,	// (0x000280ef) aid_levels_battery_ParamLimits

0x9d0f,	// (0x000280ef) aid_levels_battery

0x9d23,	// (0x00028103) battery_pane_g1_ParamLimits

0x9d23,	// (0x00028103) battery_pane_g1

0x9d39,	// (0x00028119) battery_pane_g2_ParamLimits

0x9d39,	// (0x00028119) battery_pane_g2

0x0001,

0xf7be,	// (0x0002db9e) battery_pane_g_ParamLimits

0xf7be,	// (0x0002db9e) battery_pane_g

0xa21f,	// (0x000285ff) uni_indicator_pane_g1

0xa234,	// (0x00028614) uni_indicator_pane_g2

0x675f,	// (0x00024b3f) uni_indicator_pane_g3

0x0005,

0xf928,	// (0x0002dd08) uni_indicator_pane_g

0x508e,	// (0x0002346e) navi_icon_pane_ParamLimits

0x508e,	// (0x0002346e) navi_icon_pane

0x4fd5,	// (0x000233b5) navi_midp_pane

0x50aa,	// (0x0002348a) navi_navi_pane

0x50b4,	// (0x00023494) navi_text_pane_ParamLimits

0x50b4,	// (0x00023494) navi_text_pane

0x418e,	// (0x0002256e) status_small_wait_pane_g1

0x44af,	// (0x0002288f) status_small_wait_pane_g2

0x0001,

0xf923,	// (0x0002dd03) status_small_wait_pane_g

0x64a9,	// (0x00024889) navi_navi_icon_text_pane

0x64c3,	// (0x000248a3) navi_navi_pane_g1_ParamLimits

0x64c3,	// (0x000248a3) navi_navi_pane_g1

0x64b1,	// (0x00024891) navi_navi_pane_g2_ParamLimits

0x64b1,	// (0x00024891) navi_navi_pane_g2

0x0001,

0xf8f1,	// (0x0002dcd1) navi_navi_pane_g_ParamLimits

0xf8f1,	// (0x0002dcd1) navi_navi_pane_g

0x64d5,	// (0x000248b5) navi_navi_tabs_pane

0x64de,	// (0x000248be) navi_navi_text_pane

0x64a9,	// (0x00024889) navi_navi_volume_pane

0x6485,	// (0x00024865) navi_text_pane_t1

0x6479,	// (0x00024859) navi_icon_pane_g1

0x63d8,	// (0x000247b8) navi_navi_text_pane_t1

0xa1e7,	// (0x000285c7) navi_navi_volume_pane_g1

0xa1ef,	// (0x000285cf) volume_small_pane

0xa159,	// (0x00028539) navi_navi_icon_text_pane_g1

0xa161,	// (0x00028541) navi_navi_icon_text_pane_t1

0x50aa,	// (0x0002348a) navi_tabs_2_long_pane

0x50aa,	// (0x0002348a) navi_tabs_2_pane

0x50aa,	// (0x0002348a) navi_tabs_3_long_pane

0x50aa,	// (0x0002348a) navi_tabs_3_pane

0x50aa,	// (0x0002348a) navi_tabs_4_pane

0xa139,	// (0x00028519) tabs_2_active_pane_ParamLimits

0xa139,	// (0x00028519) tabs_2_active_pane

0xa149,	// (0x00028529) tabs_2_passive_pane_ParamLimits

0xa149,	// (0x00028529) tabs_2_passive_pane

0xa107,	// (0x000284e7) tabs_3_active_pane_ParamLimits

0xa107,	// (0x000284e7) tabs_3_active_pane

0xa117,	// (0x000284f7) tabs_3_passive_pane_ParamLimits

0xa117,	// (0x000284f7) tabs_3_passive_pane

0xa128,	// (0x00028508) tabs_3_passive_pane_cp_ParamLimits

0xa128,	// (0x00028508) tabs_3_passive_pane_cp

0xa0c3,	// (0x000284a3) tabs_4_active_pane_ParamLimits

0xa0c3,	// (0x000284a3) tabs_4_active_pane

0xa0d4,	// (0x000284b4) tabs_4_passive_pane_ParamLimits

0xa0d4,	// (0x000284b4) tabs_4_passive_pane

0xa0e5,	// (0x000284c5) tabs_4_passive_pane_cp_ParamLimits

0xa0e5,	// (0x000284c5) tabs_4_passive_pane_cp

0xa0f6,	// (0x000284d6) tabs_4_passive_pane_cp2_ParamLimits

0xa0f6,	// (0x000284d6) tabs_4_passive_pane_cp2

0xa09f,	// (0x0002847f) tabs_2_long_active_pane_ParamLimits

0xa09f,	// (0x0002847f) tabs_2_long_active_pane

0xa0b1,	// (0x00028491) tabs_2_long_passive_pane_ParamLimits

0xa0b1,	// (0x00028491) tabs_2_long_passive_pane

0xa05a,	// (0x0002843a) tabs_3_long_active_pane_ParamLimits

0xa05a,	// (0x0002843a) tabs_3_long_active_pane

0xa073,	// (0x00028453) tabs_3_long_passive_pane_ParamLimits

0xa073,	// (0x00028453) tabs_3_long_passive_pane

0xa086,	// (0x00028466) tabs_3_long_passive_pane_cp_ParamLimits

0xa086,	// (0x00028466) tabs_3_long_passive_pane_cp

0xa000,	// (0x000283e0) volume_small_pane_g1

0xa009,	// (0x000283e9) volume_small_pane_g2

0xa012,	// (0x000283f2) volume_small_pane_g3

0xa01b,	// (0x000283fb) volume_small_pane_g4

0xa024,	// (0x00028404) volume_small_pane_g5

0xa02d,	// (0x0002840d) volume_small_pane_g6

0xa036,	// (0x00028416) volume_small_pane_g7

0xa03f,	// (0x0002841f) volume_small_pane_g8

0xa048,	// (0x00028428) volume_small_pane_g9

0xa051,	// (0x00028431) volume_small_pane_g10

0x0009,

0xf8bd,	// (0x0002dc9d) volume_small_pane_g

0x41f4,	// (0x000225d4) bg_active_tab_pane_cp2_ParamLimits

0x41f4,	// (0x000225d4) bg_active_tab_pane_cp2

0x89f7,	// (0x00026dd7) tabs_3_active_pane_g1

0x89ff,	// (0x00026ddf) tabs_3_active_pane_t1

0x41f4,	// (0x000225d4) bg_passive_tab_pane_cp2_ParamLimits

0x41f4,	// (0x000225d4) bg_passive_tab_pane_cp2

0x89f7,	// (0x00026dd7) tabs_3_passive_pane_g1

0x89ff,	// (0x00026ddf) tabs_3_passive_pane_t1

0x41f4,	// (0x000225d4) bg_active_tab_pane_cp3_ParamLimits

0x41f4,	// (0x000225d4) bg_active_tab_pane_cp3

0x8a11,	// (0x00026df1) tabs_4_active_pane_g1

0x8a19,	// (0x00026df9) tabs_4_active_pane_t1

0x41f4,	// (0x000225d4) bg_passive_tab_pane_cp3_ParamLimits

0x41f4,	// (0x000225d4) bg_passive_tab_pane_cp3

0x8a11,	// (0x00026df1) tabs_4_1_passive_pane_g1

0x8a19,	// (0x00026df9) tabs_4_1_passive_pane_t1

0x4940,	// (0x00022d20) list_highlight_pane_cp2

0xa374,	// (0x00028754) list_set_pane_ParamLimits

0xa374,	// (0x00028754) list_set_pane

0xa416,	// (0x000287f6) main_pane_set_t1_ParamLimits

0xa416,	// (0x000287f6) main_pane_set_t1

0xa436,	// (0x00028816) main_pane_set_t2_ParamLimits

0xa436,	// (0x00028816) main_pane_set_t2

0xa44a,	// (0x0002882a) main_pane_set_t3_ParamLimits

0xa44a,	// (0x0002882a) main_pane_set_t3

0xa45c,	// (0x0002883c) main_pane_set_t4_ParamLimits

0xa45c,	// (0x0002883c) main_pane_set_t4

0x0003,

0xf98d,	// (0x0002dd6d) main_pane_set_t_ParamLimits

0xf98d,	// (0x0002dd6d) main_pane_set_t

0xa46e,	// (0x0002884e) setting_code_pane

0xa478,	// (0x00028858) setting_slider_graphic_pane

0xa478,	// (0x00028858) setting_slider_pane

0xa478,	// (0x00028858) setting_text_pane

0xa478,	// (0x00028858) setting_volume_pane

0x8a2b,	// (0x00026e0b) volume_set_pane

0x41f4,	// (0x000225d4) bg_set_opt_pane_cp

0x8a33,	// (0x00026e13) setting_slider_pane_t1

0x8a4c,	// (0x00026e2c) setting_slider_pane_t2

0x8a65,	// (0x00026e45) setting_slider_pane_t3

0x0002,

0xf576,	// (0x0002d956) setting_slider_pane_t

0x8a7c,	// (0x00026e5c) slider_set_pane

0x4198,	// (0x00022578) bg_set_opt_pane_cp2

0x4202,	// (0x000225e2) setting_slider_graphic_pane_g1

0x8a92,	// (0x00026e72) setting_slider_graphic_pane_t1

0x8aa1,	// (0x00026e81) setting_slider_graphic_pane_t2

0x0001,

0xf57d,	// (0x0002d95d) setting_slider_graphic_pane_t

0x8ab0,	// (0x00026e90) slider_set_pane_cp

0x4198,	// (0x00022578) input_focus_pane_cp1

0x693c,	// (0x00024d1c) list_set_text_pane

0x418e,	// (0x0002256e) setting_text_pane_g1

0x4198,	// (0x00022578) input_focus_pane_cp2

0x418e,	// (0x0002256e) setting_code_pane_g1

0x420b,	// (0x000225eb) setting_code_pane_t1

0xe034,	// (0x0002c414) set_text_pane_t1_ParamLimits

0xe034,	// (0x0002c414) set_text_pane_t1

0x4850,	// (0x00022c30) set_opt_bg_pane_g1

0x4858,	// (0x00022c38) set_opt_bg_pane_g2

0x691c,	// (0x00024cfc) set_opt_bg_pane_g3

0x4868,	// (0x00022c48) set_opt_bg_pane_g4

0x4870,	// (0x00022c50) set_opt_bg_pane_g5

0x4878,	// (0x00022c58) set_opt_bg_pane_g6

0x6924,	// (0x00024d04) set_opt_bg_pane_g7

0x692c,	// (0x00024d0c) set_opt_bg_pane_g8

0x6934,	// (0x00024d14) set_opt_bg_pane_g9

0x0008,

0xf97a,	// (0x0002dd5a) set_opt_bg_pane_g

0x690f,	// (0x00024cef) slider_set_pane_g1

0xa2e9,	// (0x000286c9) slider_set_pane_g2

0x0006,

0xf96b,	// (0x0002dd4b) slider_set_pane_g

0xa260,	// (0x00028640) volume_set_pane_g1

0xa268,	// (0x00028648) volume_set_pane_g2

0xa270,	// (0x00028650) volume_set_pane_g3

0xa278,	// (0x00028658) volume_set_pane_g4

0xa280,	// (0x00028660) volume_set_pane_g5

0xa288,	// (0x00028668) volume_set_pane_g6

0xa290,	// (0x00028670) volume_set_pane_g7

0xa298,	// (0x00028678) volume_set_pane_g8

0xa2a0,	// (0x00028680) volume_set_pane_g9

0xa2a8,	// (0x00028688) volume_set_pane_g10

0x0009,

0xf943,	// (0x0002dd23) volume_set_pane_g

0x8ab8,	// (0x00026e98) indicator_pane_ParamLimits

0x8ab8,	// (0x00026e98) indicator_pane

0x8ac4,	// (0x00026ea4) main_idle_pane_g2_ParamLimits

0x8ac4,	// (0x00026ea4) main_idle_pane_g2

0x8aec,	// (0x00026ecc) main_pane_idle_g1_ParamLimits

0x8aec,	// (0x00026ecc) main_pane_idle_g1

0x4219,	// (0x000225f9) popup_clock_digital_analogue_window_ParamLimits

0x4219,	// (0x000225f9) popup_clock_digital_analogue_window

0x8af9,	// (0x00026ed9) soft_indicator_pane_ParamLimits

0x8af9,	// (0x00026ed9) soft_indicator_pane

0x8b05,	// (0x00026ee5) wallpaper_pane_ParamLimits

0x8b05,	// (0x00026ee5) wallpaper_pane

0x418e,	// (0x0002256e) wallpaper_pane_g1

0x8b11,	// (0x00026ef1) indicator_pane_g1_ParamLimits

0x8b11,	// (0x00026ef1) indicator_pane_g1

0x6ab2,	// (0x00024e92) navi_navi_icon_text_pane_srt_g1

0x4247,	// (0x00022627) soft_indicator_pane_t1

0x4261,	// (0x00022641) aid_ps_area_pane

0x8b1d,	// (0x00026efd) aid_ps_clock_pane

0x4272,	// (0x00022652) aid_ps_indicator_pane

0x427e,	// (0x0002265e) indicator_ps_pane_ParamLimits

0x427e,	// (0x0002265e) indicator_ps_pane

0x428d,	// (0x0002266d) power_save_pane_g1_ParamLimits

0x428d,	// (0x0002266d) power_save_pane_g1

0x4299,	// (0x00022679) power_save_pane_g2_ParamLimits

0x4299,	// (0x00022679) power_save_pane_g2

0x858a,	// (0x0002696a) aid_navinavi_width_pane

0x4261,	// (0x00022641) aid_ps_area_pane_ParamLimits

0x0001,

0xf582,	// (0x0002d962) power_save_pane_g_ParamLimits

0xf582,	// (0x0002d962) power_save_pane_g

0x42a7,	// (0x00022687) power_save_pane_t1_ParamLimits

0x42a7,	// (0x00022687) power_save_pane_t1

0x8b1d,	// (0x00026efd) aid_ps_clock_pane_ParamLimits

0x4272,	// (0x00022652) aid_ps_indicator_pane_ParamLimits

0x42b9,	// (0x00022699) power_save_pane_t4_ParamLimits

0x42b9,	// (0x00022699) power_save_pane_t4

0x0001,

0xf587,	// (0x0002d967) power_save_pane_t_ParamLimits

0xf587,	// (0x0002d967) power_save_pane_t

0x42e3,	// (0x000226c3) power_save_t3_ParamLimits

0x42e3,	// (0x000226c3) power_save_t3

0x42ce,	// (0x000226ae) power_save_t2_ParamLimits

0x42ce,	// (0x000226ae) power_save_t2

0x42f8,	// (0x000226d8) indicator_ps_pane_g1

0x8b2b,	// (0x00026f0b) ai_gene_pane_ParamLimits

0x8b2b,	// (0x00026f0b) ai_gene_pane

0x8b37,	// (0x00026f17) ai_links_pane_ParamLimits

0x8b37,	// (0x00026f17) ai_links_pane

0x8b43,	// (0x00026f23) indicator_pane_cp1_ParamLimits

0x8b43,	// (0x00026f23) indicator_pane_cp1

0x8b4f,	// (0x00026f2f) main_pane_idle_g1_cp_ParamLimits

0x8b4f,	// (0x00026f2f) main_pane_idle_g1_cp

0x4301,	// (0x000226e1) popup_ai_links_title_window

0x8b5b,	// (0x00026f3b) soft_indicator_pane_cp1_ParamLimits

0x8b5b,	// (0x00026f3b) soft_indicator_pane_cp1

0x674d,	// (0x00024b2d) ai_links_pane_g1

0x6756,	// (0x00024b36) grid_ai_links_pane

0xa214,	// (0x000285f4) ai_gene_pane_1

0x673b,	// (0x00024b1b) ai_gene_pane_2

0x6744,	// (0x00024b24) list_highlight_pane_cp4

0xa1f8,	// (0x000285d8) cell_ai_link_pane_ParamLimits

0xa1f8,	// (0x000285d8) cell_ai_link_pane

0x6733,	// (0x00024b13) cell_ai_link_pane_g1

0x44af,	// (0x0002288f) cell_ai_link_pane_g2

0x0001,

0xf91e,	// (0x0002dcfe) cell_ai_link_pane_g

0x4198,	// (0x00022578) grid_highlight_cp2

0x4198,	// (0x00022578) bg_popup_sub_pane_cp1

0x4318,	// (0x000226f8) popup_ai_links_title_window_t1

0x6681,	// (0x00024a61) ai_gene_pane_1_g1_ParamLimits

0x6681,	// (0x00024a61) ai_gene_pane_1_g1

0x668d,	// (0x00024a6d) ai_gene_pane_1_g2_ParamLimits

0x668d,	// (0x00024a6d) ai_gene_pane_1_g2

0x0001,

0xf914,	// (0x0002dcf4) ai_gene_pane_1_g_ParamLimits

0xf914,	// (0x0002dcf4) ai_gene_pane_1_g

0x669a,	// (0x00024a7a) ai_gene_pane_1_t1_ParamLimits

0x669a,	// (0x00024a7a) ai_gene_pane_1_t1

0x66ce,	// (0x00024aae) grid_ai_soft_ind_pane

0x666c,	// (0x00024a4c) ai_gene_pane_2_t1_ParamLimits

0x666c,	// (0x00024a4c) ai_gene_pane_2_t1

0x8b67,	// (0x00026f47) main_pane_empty_t1_ParamLimits

0x8b67,	// (0x00026f47) main_pane_empty_t1

0x8b7f,	// (0x00026f5f) main_pane_empty_t2_ParamLimits

0x8b7f,	// (0x00026f5f) main_pane_empty_t2

0x8b94,	// (0x00026f74) main_pane_empty_t3_ParamLimits

0x8b94,	// (0x00026f74) main_pane_empty_t3

0x8ba6,	// (0x00026f86) main_pane_empty_t4_ParamLimits

0x8ba6,	// (0x00026f86) main_pane_empty_t4

0x8bb8,	// (0x00026f98) main_pane_empty_t5_ParamLimits

0x8bb8,	// (0x00026f98) main_pane_empty_t5

0x0004,

0xf58c,	// (0x0002d96c) main_pane_empty_t_ParamLimits

0xf58c,	// (0x0002d96c) main_pane_empty_t

0x48a1,	// (0x00022c81) bg_popup_window_pane_ParamLimits

0x48a1,	// (0x00022c81) bg_popup_window_pane

0x63e6,	// (0x000247c6) find_popup_pane_cp2_ParamLimits

0x63e6,	// (0x000247c6) find_popup_pane_cp2

0x63f2,	// (0x000247d2) heading_pane_ParamLimits

0x63f2,	// (0x000247d2) heading_pane

0x4198,	// (0x00022578) bg_popup_sub_pane

0xa17b,	// (0x0002855b) bg_popup_window_pane_g1_ParamLimits

0xa17b,	// (0x0002855b) bg_popup_window_pane_g1

0xa187,	// (0x00028567) bg_popup_window_pane_g2_ParamLimits

0xa187,	// (0x00028567) bg_popup_window_pane_g2

0xa193,	// (0x00028573) bg_popup_window_pane_g3_ParamLimits

0xa193,	// (0x00028573) bg_popup_window_pane_g3

0xa19f,	// (0x0002857f) bg_popup_window_pane_g4_ParamLimits

0xa19f,	// (0x0002857f) bg_popup_window_pane_g4

0xa1ab,	// (0x0002858b) bg_popup_window_pane_g5_ParamLimits

0xa1ab,	// (0x0002858b) bg_popup_window_pane_g5

0xa1b7,	// (0x00028597) bg_popup_window_pane_g6_ParamLimits

0xa1b7,	// (0x00028597) bg_popup_window_pane_g6

0xa1c3,	// (0x000285a3) bg_popup_window_pane_g7_ParamLimits

0xa1c3,	// (0x000285a3) bg_popup_window_pane_g7

0xa1cf,	// (0x000285af) bg_popup_window_pane_g8_ParamLimits

0xa1cf,	// (0x000285af) bg_popup_window_pane_g8

0xa1db,	// (0x000285bb) bg_popup_window_pane_g9_ParamLimits

0xa1db,	// (0x000285bb) bg_popup_window_pane_g9

0x63cc,	// (0x000247ac) bg_popup_window_pane_g10_ParamLimits

0x63cc,	// (0x000247ac) bg_popup_window_pane_g10

0x0009,

0xf8dc,	// (0x0002dcbc) bg_popup_window_pane_g_ParamLimits

0xf8dc,	// (0x0002dcbc) bg_popup_window_pane_g

0x6383,	// (0x00024763) bg_popup_heading_pane_ParamLimits

0x6383,	// (0x00024763) bg_popup_heading_pane

0xa590,	// (0x00028970) tabs_4_passive_pane_cp_srt_ParamLimits

0xa590,	// (0x00028970) tabs_4_passive_pane_cp_srt

0xa5a2,	// (0x00028982) tabs_4_passive_pane_srt_ParamLimits

0x6397,	// (0x00024777) heading_pane_g2

0xa5a2,	// (0x00028982) tabs_4_passive_pane_srt

0x4940,	// (0x00022d20) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4940,	// (0x00022d20) bg_passive_tab_pane_cp3_srt

0x639f,	// (0x0002477f) heading_pane_t1_ParamLimits

0x639f,	// (0x0002477f) heading_pane_t1

0x63b6,	// (0x00024796) heading_pane_t2_ParamLimits

0x63b6,	// (0x00024796) heading_pane_t2

0x0001,

0xf8d7,	// (0x0002dcb7) heading_pane_t_ParamLimits

0xf8d7,	// (0x0002dcb7) heading_pane_t

0x5eb2,	// (0x00024292) bg_popup_heading_pane_g1

0x5f43,	// (0x00024323) bg_popup_heading_pane_g2

0x5f4d,	// (0x0002432d) bg_popup_heading_pane_g3

0x5f57,	// (0x00024337) bg_popup_heading_pane_g4

0x5f61,	// (0x00024341) bg_popup_heading_pane_g5

0x5f6b,	// (0x0002434b) bg_popup_heading_pane_g6

0x5f73,	// (0x00024353) bg_popup_heading_pane_g7

0x5f7b,	// (0x0002435b) bg_popup_heading_pane_g8

0x5f85,	// (0x00024365) bg_popup_heading_pane_g9

0x0008,

0xf893,	// (0x0002dc73) bg_popup_heading_pane_g

0x5778,	// (0x00023b58) bg_popup_sub_pane_g1

0x5780,	// (0x00023b60) bg_popup_sub_pane_g2

0x5788,	// (0x00023b68) bg_popup_sub_pane_g3

0x5790,	// (0x00023b70) bg_popup_sub_pane_g4

0x5798,	// (0x00023b78) bg_popup_sub_pane_g5

0x57a0,	// (0x00023b80) bg_popup_sub_pane_g6

0x57a8,	// (0x00023b88) bg_popup_sub_pane_g7

0x57b0,	// (0x00023b90) bg_popup_sub_pane_g8

0x57b8,	// (0x00023b98) bg_popup_sub_pane_g9

0x0008,

0xf86d,	// (0x0002dc4d) bg_popup_sub_pane_g

0x41e6,	// (0x000225c6) bg_popup_window_pane_cp5_ParamLimits

0x41e6,	// (0x000225c6) bg_popup_window_pane_cp5

0x4335,	// (0x00022715) popup_note_window_g1_ParamLimits

0x4335,	// (0x00022715) popup_note_window_g1

0x4341,	// (0x00022721) popup_note_window_t1_ParamLimits

0x4341,	// (0x00022721) popup_note_window_t1

0x4353,	// (0x00022733) popup_note_window_t2_ParamLimits

0x4353,	// (0x00022733) popup_note_window_t2

0x4365,	// (0x00022745) popup_note_window_t3_ParamLimits

0x4365,	// (0x00022745) popup_note_window_t3

0x4377,	// (0x00022757) popup_note_window_t4_ParamLimits

0x4377,	// (0x00022757) popup_note_window_t4

0x439f,	// (0x0002277f) popup_note_window_t5_ParamLimits

0x439f,	// (0x0002277f) popup_note_window_t5

0x0004,

0xf597,	// (0x0002d977) popup_note_window_t_ParamLimits

0xf597,	// (0x0002d977) popup_note_window_t

0x43c3,	// (0x000227a3) bg_popup_window_pane_cp6_ParamLimits

0x43c3,	// (0x000227a3) bg_popup_window_pane_cp6

0x5e26,	// (0x00024206) popup_note_image_window_g1_ParamLimits

0x5e26,	// (0x00024206) popup_note_image_window_g1

0x5e32,	// (0x00024212) popup_note_image_window_g2_ParamLimits

0x5e32,	// (0x00024212) popup_note_image_window_g2

0x0001,

0xf861,	// (0x0002dc41) popup_note_image_window_g_ParamLimits

0xf861,	// (0x0002dc41) popup_note_image_window_g

0x5e4b,	// (0x0002422b) popup_note_image_window_t1_ParamLimits

0x5e4b,	// (0x0002422b) popup_note_image_window_t1

0x5e64,	// (0x00024244) popup_note_image_window_t2_ParamLimits

0x5e64,	// (0x00024244) popup_note_image_window_t2

0x5e7d,	// (0x0002425d) popup_note_image_window_t3_ParamLimits

0x5e7d,	// (0x0002425d) popup_note_image_window_t3

0x0002,

0xf866,	// (0x0002dc46) popup_note_image_window_t_ParamLimits

0xf866,	// (0x0002dc46) popup_note_image_window_t

0x5d03,	// (0x000240e3) bg_popup_window_pane_cp7_ParamLimits

0x5d03,	// (0x000240e3) bg_popup_window_pane_cp7

0x5d33,	// (0x00024113) popup_note_wait_window_g1_ParamLimits

0x5d33,	// (0x00024113) popup_note_wait_window_g1

0x5d3f,	// (0x0002411f) popup_note_wait_window_g2_ParamLimits

0x5d3f,	// (0x0002411f) popup_note_wait_window_g2

0x0002,

0xf84f,	// (0x0002dc2f) popup_note_wait_window_g_ParamLimits

0xf84f,	// (0x0002dc2f) popup_note_wait_window_g

0x5d57,	// (0x00024137) popup_note_wait_window_t1_ParamLimits

0x5d57,	// (0x00024137) popup_note_wait_window_t1

0x5d7e,	// (0x0002415e) popup_note_wait_window_t2_ParamLimits

0x5d7e,	// (0x0002415e) popup_note_wait_window_t2

0x5d9b,	// (0x0002417b) popup_note_wait_window_t3_ParamLimits

0x5d9b,	// (0x0002417b) popup_note_wait_window_t3

0x5dae,	// (0x0002418e) popup_note_wait_window_t4_ParamLimits

0x5dae,	// (0x0002418e) popup_note_wait_window_t4

0x0004,

0xf856,	// (0x0002dc36) popup_note_wait_window_t_ParamLimits

0xf856,	// (0x0002dc36) popup_note_wait_window_t

0x5dd3,	// (0x000241b3) wait_bar_pane_ParamLimits

0x5dd3,	// (0x000241b3) wait_bar_pane

0x4198,	// (0x00022578) wait_anim_pane

0x4198,	// (0x00022578) wait_border_pane

0x418e,	// (0x0002256e) wait_anim_pane_g1

0x418e,	// (0x0002256e) wait_anim_pane_g2

0x0001,

0xf716,	// (0x0002daf6) wait_anim_pane_g

0x5ca7,	// (0x00024087) wait_border_pane_g1

0x5cb2,	// (0x00024092) wait_border_pane_g2

0x5cbb,	// (0x0002409b) wait_border_pane_g3

0x0002,

0xf848,	// (0x0002dc28) wait_border_pane_g

0x5b17,	// (0x00023ef7) bg_popup_window_pane_cp16_ParamLimits

0x5b17,	// (0x00023ef7) bg_popup_window_pane_cp16

0x5c17,	// (0x00023ff7) indicator_popup_pane_cp4_ParamLimits

0x5c17,	// (0x00023ff7) indicator_popup_pane_cp4

0x5c2b,	// (0x0002400b) popup_query_data_window_t1_ParamLimits

0x5c2b,	// (0x0002400b) popup_query_data_window_t1

0x5c3d,	// (0x0002401d) popup_query_data_window_t2_ParamLimits

0x5c3d,	// (0x0002401d) popup_query_data_window_t2

0x5c56,	// (0x00024036) popup_query_data_window_t3_ParamLimits

0x5c56,	// (0x00024036) popup_query_data_window_t3

0x0002,

0xf841,	// (0x0002dc21) popup_query_data_window_t_ParamLimits

0xf841,	// (0x0002dc21) popup_query_data_window_t

0x5c70,	// (0x00024050) query_popup_data_pane_ParamLimits

0x5c70,	// (0x00024050) query_popup_data_pane

0x5c84,	// (0x00024064) query_popup_data_pane_cp1_ParamLimits

0x5c84,	// (0x00024064) query_popup_data_pane_cp1

0x5b17,	// (0x00023ef7) bg_popup_window_pane_cp10_ParamLimits

0x5b17,	// (0x00023ef7) bg_popup_window_pane_cp10

0x5b49,	// (0x00023f29) indicator_popup_pane_ParamLimits

0x5b49,	// (0x00023f29) indicator_popup_pane

0x5b6b,	// (0x00023f4b) popup_query_code_window_t1_ParamLimits

0x5b6b,	// (0x00023f4b) popup_query_code_window_t1

0x5b85,	// (0x00023f65) popup_query_code_window_t2_ParamLimits

0x5b85,	// (0x00023f65) popup_query_code_window_t2

0x5bce,	// (0x00023fae) popup_query_code_window_t3_ParamLimits

0x5bce,	// (0x00023fae) popup_query_code_window_t3

0x0002,

0xf83a,	// (0x0002dc1a) popup_query_code_window_t_ParamLimits

0xf83a,	// (0x0002dc1a) popup_query_code_window_t

0x5bfd,	// (0x00023fdd) query_popup_pane_ParamLimits

0x5bfd,	// (0x00023fdd) query_popup_pane

0x43c3,	// (0x000227a3) bg_popup_window_pane_cp15_ParamLimits

0x43c3,	// (0x000227a3) bg_popup_window_pane_cp15

0x43e1,	// (0x000227c1) indicator_popup_pane_cp1_ParamLimits

0x43e1,	// (0x000227c1) indicator_popup_pane_cp1

0x43f4,	// (0x000227d4) indicator_popup_pane_cp2_ParamLimits

0x43f4,	// (0x000227d4) indicator_popup_pane_cp2

0x4407,	// (0x000227e7) popup_query_data_code_window_g1_ParamLimits

0x4407,	// (0x000227e7) popup_query_data_code_window_g1

0x441a,	// (0x000227fa) popup_query_data_code_window_t1_ParamLimits

0x441a,	// (0x000227fa) popup_query_data_code_window_t1

0x442c,	// (0x0002280c) popup_query_data_code_window_t2_ParamLimits

0x442c,	// (0x0002280c) popup_query_data_code_window_t2

0x443e,	// (0x0002281e) popup_query_data_code_window_t3_ParamLimits

0x443e,	// (0x0002281e) popup_query_data_code_window_t3

0x4454,	// (0x00022834) popup_query_data_code_window_t4_ParamLimits

0x4454,	// (0x00022834) popup_query_data_code_window_t4

0x0003,

0xf5a2,	// (0x0002d982) popup_query_data_code_window_t_ParamLimits

0xf5a2,	// (0x0002d982) popup_query_data_code_window_t

0x9da4,	// (0x00028184) list_single_midp_graphic_pane_g3

0x446c,	// (0x0002284c) query_popup_data_pane_cp2_ParamLimits

0x447f,	// (0x0002285f) query_popup_pane_cp2_ParamLimits

0x447f,	// (0x0002285f) query_popup_pane_cp2

0x4198,	// (0x00022578) bg_popup_window_pane_cp11

0x5b0f,	// (0x00023eef) heading_pane_cp5

0x450d,	// (0x000228ed) listscroll_popup_info_pane

0x4198,	// (0x00022578) input_focus_pane_cp3

0x4492,	// (0x00022872) query_popup_pane_t1

0x44a0,	// (0x00022880) list_popup_info_pane_ParamLimits

0x44a0,	// (0x00022880) list_popup_info_pane

0x44af,	// (0x0002288f) listscroll_popup_info_pane_g1

0x44b7,	// (0x00022897) scroll_pane_cp7

0x44c1,	// (0x000228a1) popup_info_list_pane_t1_ParamLimits

0x44c1,	// (0x000228a1) popup_info_list_pane_t1

0x44db,	// (0x000228bb) popup_info_list_pane_t2_ParamLimits

0x44db,	// (0x000228bb) popup_info_list_pane_t2

0x0001,

0xf5ab,	// (0x0002d98b) popup_info_list_pane_t_ParamLimits

0xf5ab,	// (0x0002d98b) popup_info_list_pane_t

0x4198,	// (0x00022578) bg_popup_window_pane_cp12

0x6acc,	// (0x00024eac) find_popup_pane

0x41f4,	// (0x000225d4) bg_popup_window_pane_cp3

0x44f5,	// (0x000228d5) heading_pane_cp3

0x4501,	// (0x000228e1) listscroll_popup_graphic_pane

0x4198,	// (0x00022578) bg_popup_window_pane_cp4

0x8c1c,	// (0x00026ffc) heading_pane_cp4

0x450d,	// (0x000228ed) listscroll_popup_colour_pane

0x8c26,	// (0x00027006) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x8c26,	// (0x00027006) cell_large_graphic_colour_none_popup_pane

0x8c3a,	// (0x0002701a) grid_large_graphic_colour_popup_pane_ParamLimits

0x8c3a,	// (0x0002701a) grid_large_graphic_colour_popup_pane

0x8c5e,	// (0x0002703e) listscroll_popup_colour_pane_g1_ParamLimits

0x8c5e,	// (0x0002703e) listscroll_popup_colour_pane_g1

0x8c75,	// (0x00027055) listscroll_popup_colour_pane_g2_ParamLimits

0x8c75,	// (0x00027055) listscroll_popup_colour_pane_g2

0x8c8c,	// (0x0002706c) listscroll_popup_colour_pane_g3_ParamLimits

0x8c8c,	// (0x0002706c) listscroll_popup_colour_pane_g3

0x8c9c,	// (0x0002707c) listscroll_popup_colour_pane_g4_ParamLimits

0x8c9c,	// (0x0002707c) listscroll_popup_colour_pane_g4

0x0003,

0xf5b0,	// (0x0002d990) listscroll_popup_colour_pane_g_ParamLimits

0xf5b0,	// (0x0002d990) listscroll_popup_colour_pane_g

0x4515,	// (0x000228f5) scroll_pane_cp6_ParamLimits

0x4515,	// (0x000228f5) scroll_pane_cp6

0x8cab,	// (0x0002708b) cell_large_graphic_colour_popup_pane_ParamLimits

0x8cab,	// (0x0002708b) cell_large_graphic_colour_popup_pane

0x4527,	// (0x00022907) cell_large_graphic_colour_none_popup_pane_t1

0x4198,	// (0x00022578) grid_highlight_pane_cp5

0x4536,	// (0x00022916) cell_large_graphic_colour_popup_pane_g1

0x453e,	// (0x0002291e) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5b9,	// (0x0002d999) cell_large_graphic_colour_popup_pane_g

0x4546,	// (0x00022926) cell_large_graphic_colour_popup_pane_g2_copy1

0x454f,	// (0x0002292f) grid_highlight_pane_cp4

0x4557,	// (0x00022937) bg_popup_window_pane_cp8_ParamLimits

0x4557,	// (0x00022937) bg_popup_window_pane_cp8

0x4572,	// (0x00022952) popup_snote_single_text_window_g1_ParamLimits

0x4572,	// (0x00022952) popup_snote_single_text_window_g1

0x4584,	// (0x00022964) popup_snote_single_text_window_t1_ParamLimits

0x4584,	// (0x00022964) popup_snote_single_text_window_t1

0x4597,	// (0x00022977) popup_snote_single_text_window_t2_ParamLimits

0x4597,	// (0x00022977) popup_snote_single_text_window_t2

0x45aa,	// (0x0002298a) popup_snote_single_text_window_t3_ParamLimits

0x45aa,	// (0x0002298a) popup_snote_single_text_window_t3

0x45e3,	// (0x000229c3) popup_snote_single_text_window_t4_ParamLimits

0x45e3,	// (0x000229c3) popup_snote_single_text_window_t4

0x4617,	// (0x000229f7) popup_snote_single_text_window_t5_ParamLimits

0x4617,	// (0x000229f7) popup_snote_single_text_window_t5

0x0004,

0xf5be,	// (0x0002d99e) popup_snote_single_text_window_t_ParamLimits

0xf5be,	// (0x0002d99e) popup_snote_single_text_window_t

0x4646,	// (0x00022a26) bg_popup_window_pane_cp9_ParamLimits

0x4646,	// (0x00022a26) bg_popup_window_pane_cp9

0x4572,	// (0x00022952) popup_snote_single_graphic_window_g1_ParamLimits

0x4572,	// (0x00022952) popup_snote_single_graphic_window_g1

0x4654,	// (0x00022a34) popup_snote_single_graphic_window_g2_ParamLimits

0x4654,	// (0x00022a34) popup_snote_single_graphic_window_g2

0x0001,

0xf5c9,	// (0x0002d9a9) popup_snote_single_graphic_window_g_ParamLimits

0xf5c9,	// (0x0002d9a9) popup_snote_single_graphic_window_g

0x4660,	// (0x00022a40) popup_snote_single_graphic_window_t1_ParamLimits

0x4660,	// (0x00022a40) popup_snote_single_graphic_window_t1

0x4673,	// (0x00022a53) popup_snote_single_graphic_window_t2_ParamLimits

0x4673,	// (0x00022a53) popup_snote_single_graphic_window_t2

0x4686,	// (0x00022a66) popup_snote_single_graphic_window_t3_ParamLimits

0x4686,	// (0x00022a66) popup_snote_single_graphic_window_t3

0x46bf,	// (0x00022a9f) popup_snote_single_graphic_window_t4_ParamLimits

0x46bf,	// (0x00022a9f) popup_snote_single_graphic_window_t4

0x46f3,	// (0x00022ad3) popup_snote_single_graphic_window_t5_ParamLimits

0x46f3,	// (0x00022ad3) popup_snote_single_graphic_window_t5

0x0004,

0xf5ce,	// (0x0002d9ae) popup_snote_single_graphic_window_t_ParamLimits

0xf5ce,	// (0x0002d9ae) popup_snote_single_graphic_window_t

0x6a50,	// (0x00024e30) grid_graphic_popup_pane_ParamLimits

0x6a50,	// (0x00024e30) grid_graphic_popup_pane

0x6a7c,	// (0x00024e5c) listscroll_popup_graphic_pane_g1_ParamLimits

0x6a7c,	// (0x00024e5c) listscroll_popup_graphic_pane_g1

0xa558,	// (0x00028938) listscroll_popup_graphic_pane_g2_ParamLimits

0xa558,	// (0x00028938) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b7,	// (0x0002dd97) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b7,	// (0x0002dd97) listscroll_popup_graphic_pane_g

0x69be,	// (0x00024d9e) scroll_pane_cp5

0xa519,	// (0x000288f9) cell_graphic_popup_pane_ParamLimits

0xa519,	// (0x000288f9) cell_graphic_popup_pane

0x6a1b,	// (0x00024dfb) cell_graphic_popup_pane_g1

0x6a23,	// (0x00024e03) cell_graphic_popup_pane_g2

0x4546,	// (0x00022926) cell_graphic_popup_pane_g3

0x0002,

0xf9b0,	// (0x0002dd90) cell_graphic_popup_pane_g

0x6a2c,	// (0x00024e0c) cell_graphic_popup_pane_t2

0x454f,	// (0x0002292f) grid_highlight_pane_cp3

0x4734,	// (0x00022b14) list_gen_pane_ParamLimits

0x4734,	// (0x00022b14) list_gen_pane

0x475c,	// (0x00022b3c) scroll_pane

0xa4cc,	// (0x000288ac) bg_list_pane_g1_ParamLimits

0xa4cc,	// (0x000288ac) bg_list_pane_g1

0x69ca,	// (0x00024daa) bg_list_pane_g2_ParamLimits

0x69ca,	// (0x00024daa) bg_list_pane_g2

0x69dd,	// (0x00024dbd) bg_list_pane_g3_ParamLimits

0x69dd,	// (0x00024dbd) bg_list_pane_g3

0x69ef,	// (0x00024dcf) bg_list_pane_g4_ParamLimits

0x69ef,	// (0x00024dcf) bg_list_pane_g4

0xa4e7,	// (0x000288c7) bg_list_pane_g5_ParamLimits

0xa4e7,	// (0x000288c7) bg_list_pane_g5

0x0004,

0xf9a5,	// (0x0002dd85) bg_list_pane_g_ParamLimits

0xf9a5,	// (0x0002dd85) bg_list_pane_g

0xe887,	// (0x0002cc67) list_double2_graphic_large_graphic_pane_ParamLimits

0xe887,	// (0x0002cc67) list_double2_graphic_large_graphic_pane

0xe887,	// (0x0002cc67) list_double2_graphic_pane_ParamLimits

0xe887,	// (0x0002cc67) list_double2_graphic_pane

0xe887,	// (0x0002cc67) list_double2_large_graphic_pane_ParamLimits

0xe887,	// (0x0002cc67) list_double2_large_graphic_pane

0xe887,	// (0x0002cc67) list_double2_pane_ParamLimits

0xe887,	// (0x0002cc67) list_double2_pane

0xe887,	// (0x0002cc67) list_double_graphic_heading_pane_ParamLimits

0xe887,	// (0x0002cc67) list_double_graphic_heading_pane

0xe887,	// (0x0002cc67) list_double_graphic_pane_ParamLimits

0xe887,	// (0x0002cc67) list_double_graphic_pane

0xe887,	// (0x0002cc67) list_double_heading_pane_ParamLimits

0xe887,	// (0x0002cc67) list_double_heading_pane

0xe887,	// (0x0002cc67) list_double_large_graphic_pane_ParamLimits

0xe887,	// (0x0002cc67) list_double_large_graphic_pane

0xe887,	// (0x0002cc67) list_double_number_pane_ParamLimits

0xe887,	// (0x0002cc67) list_double_number_pane

0xe887,	// (0x0002cc67) list_double_pane_ParamLimits

0xe887,	// (0x0002cc67) list_double_pane

0xe887,	// (0x0002cc67) list_double_time_pane_ParamLimits

0xe887,	// (0x0002cc67) list_double_time_pane

0xe887,	// (0x0002cc67) list_setting_number_pane_ParamLimits

0xe887,	// (0x0002cc67) list_setting_number_pane

0xe887,	// (0x0002cc67) list_setting_pane_ParamLimits

0xe887,	// (0x0002cc67) list_setting_pane

0xe8cf,	// (0x0002ccaf) list_single_2graphic_pane_ParamLimits

0xe8cf,	// (0x0002ccaf) list_single_2graphic_pane

0xe8cf,	// (0x0002ccaf) list_single_graphic_heading_pane_ParamLimits

0xe8cf,	// (0x0002ccaf) list_single_graphic_heading_pane

0xe8cf,	// (0x0002ccaf) list_single_graphic_pane_ParamLimits

0xe8cf,	// (0x0002ccaf) list_single_graphic_pane

0xe8cf,	// (0x0002ccaf) list_single_heading_pane_ParamLimits

0xe8cf,	// (0x0002ccaf) list_single_heading_pane

0xe93d,	// (0x0002cd1d) list_single_large_graphic_pane_ParamLimits

0xe93d,	// (0x0002cd1d) list_single_large_graphic_pane

0xe8cf,	// (0x0002ccaf) list_single_number_heading_pane_ParamLimits

0xe8cf,	// (0x0002ccaf) list_single_number_heading_pane

0xe8cf,	// (0x0002ccaf) list_single_number_pane_ParamLimits

0xe8cf,	// (0x0002ccaf) list_single_number_pane

0xe8cf,	// (0x0002ccaf) list_single_pane_ParamLimits

0xe8cf,	// (0x0002ccaf) list_single_pane

0x4198,	// (0x00022578) list_highlight_pane_cp1

0xe05a,	// (0x0002c43a) list_single_pane_g1_ParamLimits

0xe05a,	// (0x0002c43a) list_single_pane_g1

0xe066,	// (0x0002c446) list_single_pane_g2_ParamLimits

0xe066,	// (0x0002c446) list_single_pane_g2

0x0001,

0xf5e0,	// (0x0002d9c0) list_single_pane_g_ParamLimits

0xf5e0,	// (0x0002d9c0) list_single_pane_g

0xe871,	// (0x0002cc51) list_single_pane_t1_ParamLimits

0xe871,	// (0x0002cc51) list_single_pane_t1

0xe05a,	// (0x0002c43a) list_single_number_pane_g1_ParamLimits

0xe05a,	// (0x0002c43a) list_single_number_pane_g1

0xe066,	// (0x0002c446) list_single_number_pane_g2_ParamLimits

0xe066,	// (0x0002c446) list_single_number_pane_g2

0x0001,

0xf5e0,	// (0x0002d9c0) list_single_number_pane_g_ParamLimits

0xf5e0,	// (0x0002d9c0) list_single_number_pane_g

0xe7a5,	// (0x0002cb85) list_single_number_pane_t1_ParamLimits

0xe7a5,	// (0x0002cb85) list_single_number_pane_t1

0xe831,	// (0x0002cc11) list_single_number_pane_t2_ParamLimits

0xe831,	// (0x0002cc11) list_single_number_pane_t2

0x0001,

0xf966,	// (0x0002dd46) list_single_number_pane_t_ParamLimits

0xf966,	// (0x0002dd46) list_single_number_pane_t

0xe04e,	// (0x0002c42e) list_single_graphic_pane_g1_ParamLimits

0xe04e,	// (0x0002c42e) list_single_graphic_pane_g1

0xe05a,	// (0x0002c43a) list_single_graphic_pane_g2_ParamLimits

0xe05a,	// (0x0002c43a) list_single_graphic_pane_g2

0xe066,	// (0x0002c446) list_single_graphic_pane_g3_ParamLimits

0xe066,	// (0x0002c446) list_single_graphic_pane_g3

0x0002,

0xf5d9,	// (0x0002d9b9) list_single_graphic_pane_g_ParamLimits

0xf5d9,	// (0x0002d9b9) list_single_graphic_pane_g

0xe072,	// (0x0002c452) list_single_graphic_pane_t1_ParamLimits

0xe072,	// (0x0002c452) list_single_graphic_pane_t1

0xe05a,	// (0x0002c43a) list_single_heading_pane_g1_ParamLimits

0xe05a,	// (0x0002c43a) list_single_heading_pane_g1

0xe066,	// (0x0002c446) list_single_heading_pane_g2_ParamLimits

0xe066,	// (0x0002c446) list_single_heading_pane_g2

0x0001,

0xf5e0,	// (0x0002d9c0) list_single_heading_pane_g_ParamLimits

0xf5e0,	// (0x0002d9c0) list_single_heading_pane_g

0xe088,	// (0x0002c468) list_single_heading_pane_t1_ParamLimits

0xe088,	// (0x0002c468) list_single_heading_pane_t1

0xe09e,	// (0x0002c47e) list_single_heading_pane_t2_ParamLimits

0xe09e,	// (0x0002c47e) list_single_heading_pane_t2

0x0001,

0xf5e5,	// (0x0002d9c5) list_single_heading_pane_t_ParamLimits

0xf5e5,	// (0x0002d9c5) list_single_heading_pane_t

0xe05a,	// (0x0002c43a) list_single_number_heading_pane_g1_ParamLimits

0xe05a,	// (0x0002c43a) list_single_number_heading_pane_g1

0xe066,	// (0x0002c446) list_single_number_heading_pane_g2_ParamLimits

0xe066,	// (0x0002c446) list_single_number_heading_pane_g2

0x0001,

0xf5e0,	// (0x0002d9c0) list_single_number_heading_pane_g_ParamLimits

0xf5e0,	// (0x0002d9c0) list_single_number_heading_pane_g

0xe088,	// (0x0002c468) list_single_number_heading_pane_t1_ParamLimits

0xe088,	// (0x0002c468) list_single_number_heading_pane_t1

0xe0b0,	// (0x0002c490) list_single_number_heading_pane_t2_ParamLimits

0xe0b0,	// (0x0002c490) list_single_number_heading_pane_t2

0xe0c2,	// (0x0002c4a2) list_single_number_heading_pane_t3_ParamLimits

0xe0c2,	// (0x0002c4a2) list_single_number_heading_pane_t3

0x0002,

0xf5ea,	// (0x0002d9ca) list_single_number_heading_pane_t_ParamLimits

0xf5ea,	// (0x0002d9ca) list_single_number_heading_pane_t

0xe0d4,	// (0x0002c4b4) list_single_graphic_heading_pane_g1_ParamLimits

0xe0d4,	// (0x0002c4b4) list_single_graphic_heading_pane_g1

0xe0e0,	// (0x0002c4c0) list_single_graphic_heading_pane_g4_ParamLimits

0xe0e0,	// (0x0002c4c0) list_single_graphic_heading_pane_g4

0xe066,	// (0x0002c446) list_single_graphic_heading_pane_g5_ParamLimits

0xe066,	// (0x0002c446) list_single_graphic_heading_pane_g5

0x0002,

0xf5f1,	// (0x0002d9d1) list_single_graphic_heading_pane_g_ParamLimits

0xf5f1,	// (0x0002d9d1) list_single_graphic_heading_pane_g

0xe088,	// (0x0002c468) list_single_graphic_heading_pane_t1_ParamLimits

0xe088,	// (0x0002c468) list_single_graphic_heading_pane_t1

0xe0f1,	// (0x0002c4d1) list_single_graphic_heading_pane_t2_ParamLimits

0xe0f1,	// (0x0002c4d1) list_single_graphic_heading_pane_t2

0x0001,

0xf5f8,	// (0x0002d9d8) list_single_graphic_heading_pane_t_ParamLimits

0xf5f8,	// (0x0002d9d8) list_single_graphic_heading_pane_t

0xe103,	// (0x0002c4e3) list_single_large_graphic_pane_g1_ParamLimits

0xe103,	// (0x0002c4e3) list_single_large_graphic_pane_g1

0xe10f,	// (0x0002c4ef) list_single_large_graphic_pane_g2_ParamLimits

0xe10f,	// (0x0002c4ef) list_single_large_graphic_pane_g2

0xe11b,	// (0x0002c4fb) list_single_large_graphic_pane_g3_ParamLimits

0xe11b,	// (0x0002c4fb) list_single_large_graphic_pane_g3

0x0002,

0xf5fd,	// (0x0002d9dd) list_single_large_graphic_pane_g_ParamLimits

0xf5fd,	// (0x0002d9dd) list_single_large_graphic_pane_g

0x5cb2,	// (0x00024092) wait_border_pane_g2_copy1

0xe127,	// (0x0002c507) list_single_large_graphic_pane_g4_cp2

0xe12f,	// (0x0002c50f) list_single_large_graphic_pane_t1_ParamLimits

0xe12f,	// (0x0002c50f) list_single_large_graphic_pane_t1

0xe145,	// (0x0002c525) list_double_pane_g1_ParamLimits

0xe145,	// (0x0002c525) list_double_pane_g1

0xe151,	// (0x0002c531) list_double_pane_g2_ParamLimits

0xe151,	// (0x0002c531) list_double_pane_g2

0x0001,

0xf604,	// (0x0002d9e4) list_double_pane_g_ParamLimits

0xf604,	// (0x0002d9e4) list_double_pane_g

0xe15d,	// (0x0002c53d) list_double_pane_t1_ParamLimits

0xe15d,	// (0x0002c53d) list_double_pane_t1

0xe173,	// (0x0002c553) list_double_pane_t2_ParamLimits

0xe173,	// (0x0002c553) list_double_pane_t2

0x0001,

0xf609,	// (0x0002d9e9) list_double_pane_t_ParamLimits

0xf609,	// (0x0002d9e9) list_double_pane_t

0xe185,	// (0x0002c565) list_double2_pane_g1_ParamLimits

0xe185,	// (0x0002c565) list_double2_pane_g1

0xe151,	// (0x0002c531) list_double2_pane_g2_ParamLimits

0xe151,	// (0x0002c531) list_double2_pane_g2

0x0001,

0xf60e,	// (0x0002d9ee) list_double2_pane_g_ParamLimits

0xf60e,	// (0x0002d9ee) list_double2_pane_g

0xe15d,	// (0x0002c53d) list_double2_pane_t1_ParamLimits

0xe15d,	// (0x0002c53d) list_double2_pane_t1

0xe196,	// (0x0002c576) list_double2_pane_t2_ParamLimits

0xe196,	// (0x0002c576) list_double2_pane_t2

0x0001,

0xf613,	// (0x0002d9f3) list_double2_pane_t_ParamLimits

0xf613,	// (0x0002d9f3) list_double2_pane_t

0xe145,	// (0x0002c525) list_double_number_pane_g1_ParamLimits

0xe145,	// (0x0002c525) list_double_number_pane_g1

0xe151,	// (0x0002c531) list_double_number_pane_g2_ParamLimits

0xe151,	// (0x0002c531) list_double_number_pane_g2

0x0001,

0xf604,	// (0x0002d9e4) list_double_number_pane_g_ParamLimits

0xf604,	// (0x0002d9e4) list_double_number_pane_g

0xe1a8,	// (0x0002c588) list_double_number_pane_t1_ParamLimits

0xe1a8,	// (0x0002c588) list_double_number_pane_t1

0xe1ba,	// (0x0002c59a) list_double_number_pane_t2_ParamLimits

0xe1ba,	// (0x0002c59a) list_double_number_pane_t2

0xe1d0,	// (0x0002c5b0) list_double_number_pane_t3_ParamLimits

0xe1d0,	// (0x0002c5b0) list_double_number_pane_t3

0x0002,

0xf618,	// (0x0002d9f8) list_double_number_pane_t_ParamLimits

0xf618,	// (0x0002d9f8) list_double_number_pane_t

0xe1e2,	// (0x0002c5c2) list_double_graphic_pane_g1_ParamLimits

0xe1e2,	// (0x0002c5c2) list_double_graphic_pane_g1

0xe1ee,	// (0x0002c5ce) list_double_graphic_pane_g2_ParamLimits

0xe1ee,	// (0x0002c5ce) list_double_graphic_pane_g2

0xe1fd,	// (0x0002c5dd) list_double_graphic_pane_g3_ParamLimits

0xe1fd,	// (0x0002c5dd) list_double_graphic_pane_g3

0x0003,

0xf61f,	// (0x0002d9ff) list_double_graphic_pane_g_ParamLimits

0xf61f,	// (0x0002d9ff) list_double_graphic_pane_g

0xe215,	// (0x0002c5f5) list_double_graphic_pane_t1_ParamLimits

0xe215,	// (0x0002c5f5) list_double_graphic_pane_t1

0xe22b,	// (0x0002c60b) list_double_graphic_pane_t2_ParamLimits

0xe22b,	// (0x0002c60b) list_double_graphic_pane_t2

0x0001,

0xf628,	// (0x0002da08) list_double_graphic_pane_t_ParamLimits

0xf628,	// (0x0002da08) list_double_graphic_pane_t

0xe1e2,	// (0x0002c5c2) list_double2_graphic_pane_g1_ParamLimits

0xe1e2,	// (0x0002c5c2) list_double2_graphic_pane_g1

0xe23d,	// (0x0002c61d) list_double2_graphic_pane_g2_ParamLimits

0xe23d,	// (0x0002c61d) list_double2_graphic_pane_g2

0xe249,	// (0x0002c629) list_double2_graphic_pane_g3_ParamLimits

0xe249,	// (0x0002c629) list_double2_graphic_pane_g3

0x0002,

0xf62d,	// (0x0002da0d) list_double2_graphic_pane_g_ParamLimits

0xf62d,	// (0x0002da0d) list_double2_graphic_pane_g

0xe1ba,	// (0x0002c59a) list_double2_graphic_pane_t1_ParamLimits

0xe1ba,	// (0x0002c59a) list_double2_graphic_pane_t1

0xe255,	// (0x0002c635) list_double2_graphic_pane_t2_ParamLimits

0xe255,	// (0x0002c635) list_double2_graphic_pane_t2

0x0001,

0xf634,	// (0x0002da14) list_double2_graphic_pane_t_ParamLimits

0xf634,	// (0x0002da14) list_double2_graphic_pane_t

0xe267,	// (0x0002c647) list_double_large_graphic_pane_g1_ParamLimits

0xe267,	// (0x0002c647) list_double_large_graphic_pane_g1

0xe185,	// (0x0002c565) list_double_large_graphic_pane_g2_ParamLimits

0xe185,	// (0x0002c565) list_double_large_graphic_pane_g2

0xe151,	// (0x0002c531) list_double_large_graphic_pane_g3_ParamLimits

0xe151,	// (0x0002c531) list_double_large_graphic_pane_g3

0xe292,	// (0x0002c672) list_double_large_graphic_pane_g4_ParamLimits

0xe292,	// (0x0002c672) list_double_large_graphic_pane_g4

0x0004,

0xf639,	// (0x0002da19) list_double_large_graphic_pane_g_ParamLimits

0xf639,	// (0x0002da19) list_double_large_graphic_pane_g

0xe2ba,	// (0x0002c69a) list_double_large_graphic_pane_t1_ParamLimits

0xe2ba,	// (0x0002c69a) list_double_large_graphic_pane_t1

0xe2d3,	// (0x0002c6b3) list_double_large_graphic_pane_t2_ParamLimits

0xe2d3,	// (0x0002c6b3) list_double_large_graphic_pane_t2

0x0001,

0xf644,	// (0x0002da24) list_double_large_graphic_pane_t_ParamLimits

0xf644,	// (0x0002da24) list_double_large_graphic_pane_t

0xe2e5,	// (0x0002c6c5) list_double2_large_graphic_pane_g1_ParamLimits

0xe2e5,	// (0x0002c6c5) list_double2_large_graphic_pane_g1

0xe185,	// (0x0002c565) list_double2_large_graphic_pane_g2_ParamLimits

0xe185,	// (0x0002c565) list_double2_large_graphic_pane_g2

0xe151,	// (0x0002c531) list_double2_large_graphic_pane_g3_ParamLimits

0xe151,	// (0x0002c531) list_double2_large_graphic_pane_g3

0x0002,

0xf649,	// (0x0002da29) list_double2_large_graphic_pane_g_ParamLimits

0xf649,	// (0x0002da29) list_double2_large_graphic_pane_g

0xe2f1,	// (0x0002c6d1) list_double2_large_graphic_pane_t1_ParamLimits

0xe2f1,	// (0x0002c6d1) list_double2_large_graphic_pane_t1

0xe307,	// (0x0002c6e7) list_double2_large_graphic_pane_t2_ParamLimits

0xe307,	// (0x0002c6e7) list_double2_large_graphic_pane_t2

0x0001,

0xf650,	// (0x0002da30) list_double2_large_graphic_pane_t_ParamLimits

0xf650,	// (0x0002da30) list_double2_large_graphic_pane_t

0xe319,	// (0x0002c6f9) list_double_heading_pane_g1_ParamLimits

0xe319,	// (0x0002c6f9) list_double_heading_pane_g1

0xe32a,	// (0x0002c70a) list_double_heading_pane_g2_ParamLimits

0xe32a,	// (0x0002c70a) list_double_heading_pane_g2

0x0001,

0xf655,	// (0x0002da35) list_double_heading_pane_g_ParamLimits

0xf655,	// (0x0002da35) list_double_heading_pane_g

0xe336,	// (0x0002c716) list_double_heading_pane_t1_ParamLimits

0xe336,	// (0x0002c716) list_double_heading_pane_t1

0xe196,	// (0x0002c576) list_double_heading_pane_t2_ParamLimits

0xe196,	// (0x0002c576) list_double_heading_pane_t2

0x0001,

0xf65a,	// (0x0002da3a) list_double_heading_pane_t_ParamLimits

0xf65a,	// (0x0002da3a) list_double_heading_pane_t

0xe1e2,	// (0x0002c5c2) list_double_graphic_heading_pane_g1_ParamLimits

0xe1e2,	// (0x0002c5c2) list_double_graphic_heading_pane_g1

0xe319,	// (0x0002c6f9) list_double_graphic_heading_pane_g2_ParamLimits

0xe319,	// (0x0002c6f9) list_double_graphic_heading_pane_g2

0xe32a,	// (0x0002c70a) list_double_graphic_heading_pane_g3_ParamLimits

0xe32a,	// (0x0002c70a) list_double_graphic_heading_pane_g3

0x0002,

0xf65f,	// (0x0002da3f) list_double_graphic_heading_pane_g_ParamLimits

0xf65f,	// (0x0002da3f) list_double_graphic_heading_pane_g

0xe34c,	// (0x0002c72c) list_double_graphic_heading_pane_t1_ParamLimits

0xe34c,	// (0x0002c72c) list_double_graphic_heading_pane_t1

0xe255,	// (0x0002c635) list_double_graphic_heading_pane_t2_ParamLimits

0xe255,	// (0x0002c635) list_double_graphic_heading_pane_t2

0x0001,

0xf666,	// (0x0002da46) list_double_graphic_heading_pane_t_ParamLimits

0xf666,	// (0x0002da46) list_double_graphic_heading_pane_t

0xe185,	// (0x0002c565) list_double_time_pane_g1_ParamLimits

0xe185,	// (0x0002c565) list_double_time_pane_g1

0xe151,	// (0x0002c531) list_double_time_pane_g2_ParamLimits

0xe151,	// (0x0002c531) list_double_time_pane_g2

0x0001,

0xf60e,	// (0x0002d9ee) list_double_time_pane_g_ParamLimits

0xf60e,	// (0x0002d9ee) list_double_time_pane_g

0xe2f1,	// (0x0002c6d1) list_double_time_pane_t1_ParamLimits

0xe2f1,	// (0x0002c6d1) list_double_time_pane_t1

0xe362,	// (0x0002c742) list_double_time_pane_t2_ParamLimits

0xe362,	// (0x0002c742) list_double_time_pane_t2

0xe374,	// (0x0002c754) list_double_time_pane_t3_ParamLimits

0xe374,	// (0x0002c754) list_double_time_pane_t3

0xe386,	// (0x0002c766) list_double_time_pane_t4_ParamLimits

0xe386,	// (0x0002c766) list_double_time_pane_t4

0x0003,

0xf66b,	// (0x0002da4b) list_double_time_pane_t_ParamLimits

0xf66b,	// (0x0002da4b) list_double_time_pane_t

0xe398,	// (0x0002c778) list_setting_pane_g1_ParamLimits

0xe398,	// (0x0002c778) list_setting_pane_g1

0xe3a4,	// (0x0002c784) list_setting_pane_g2_ParamLimits

0xe3a4,	// (0x0002c784) list_setting_pane_g2

0x0001,

0xf674,	// (0x0002da54) list_setting_pane_g_ParamLimits

0xf674,	// (0x0002da54) list_setting_pane_g

0xe3b0,	// (0x0002c790) list_setting_pane_t1_ParamLimits

0xe3b0,	// (0x0002c790) list_setting_pane_t1

0xe3c7,	// (0x0002c7a7) list_setting_pane_t2_ParamLimits

0xe3c7,	// (0x0002c7a7) list_setting_pane_t2

0x0002,

0xf679,	// (0x0002da59) list_setting_pane_t_ParamLimits

0xf679,	// (0x0002da59) list_setting_pane_t

0xe404,	// (0x0002c7e4) set_value_pane_cp_ParamLimits

0xe404,	// (0x0002c7e4) set_value_pane_cp

0xe410,	// (0x0002c7f0) list_setting_number_pane_g1_ParamLimits

0xe410,	// (0x0002c7f0) list_setting_number_pane_g1

0xe41c,	// (0x0002c7fc) list_setting_number_pane_g2_ParamLimits

0xe41c,	// (0x0002c7fc) list_setting_number_pane_g2

0x0001,

0xf680,	// (0x0002da60) list_setting_number_pane_g_ParamLimits

0xf680,	// (0x0002da60) list_setting_number_pane_g

0xe428,	// (0x0002c808) list_setting_number_pane_t1_ParamLimits

0xe428,	// (0x0002c808) list_setting_number_pane_t1

0xe43c,	// (0x0002c81c) list_setting_number_pane_t2_ParamLimits

0xe43c,	// (0x0002c81c) list_setting_number_pane_t2

0xe453,	// (0x0002c833) list_setting_number_pane_t3_ParamLimits

0xe453,	// (0x0002c833) list_setting_number_pane_t3

0x0003,

0xf685,	// (0x0002da65) list_setting_number_pane_t_ParamLimits

0xf685,	// (0x0002da65) list_setting_number_pane_t

0xe404,	// (0x0002c7e4) set_value_pane_ParamLimits

0xe404,	// (0x0002c7e4) set_value_pane

0x4790,	// (0x00022b70) bg_set_opt_pane_ParamLimits

0x4790,	// (0x00022b70) bg_set_opt_pane

0xe496,	// (0x0002c876) set_value_pane_t1

0x47b1,	// (0x00022b91) slider_set_pane_cp3

0x47ba,	// (0x00022b9a) volume_small_pane_cp

0x47c3,	// (0x00022ba3) list_form_gen_pane

0x47cc,	// (0x00022bac) scroll_pane_cp8

0xe4ac,	// (0x0002c88c) form_field_data_pane_ParamLimits

0xe4ac,	// (0x0002c88c) form_field_data_pane

0xe4cc,	// (0x0002c8ac) form_field_data_wide_pane_ParamLimits

0xe4cc,	// (0x0002c8ac) form_field_data_wide_pane

0xe4ed,	// (0x0002c8cd) form_field_popup_pane_ParamLimits

0xe4ed,	// (0x0002c8cd) form_field_popup_pane

0xe50b,	// (0x0002c8eb) form_field_popup_wide_pane_ParamLimits

0xe50b,	// (0x0002c8eb) form_field_popup_wide_pane

0xe526,	// (0x0002c906) form_field_slider_pane_ParamLimits

0xe526,	// (0x0002c906) form_field_slider_pane

0xe539,	// (0x0002c919) form_field_slider_wide_pane_ParamLimits

0xe539,	// (0x0002c919) form_field_slider_wide_pane

0x47dd,	// (0x00022bbd) data_form_pane

0xe556,	// (0x0002c936) form_field_data_pane_t1

0x47e9,	// (0x00022bc9) input_focus_pane

0x47f7,	// (0x00022bd7) data_form_wide_pane

0xe57c,	// (0x0002c95c) form_field_data_wide_pane_t1

0x4564,	// (0x00022944) input_focus_pane_cp6

0xe59e,	// (0x0002c97e) form_field_popup_pane_t1

0x47e9,	// (0x00022bc9) input_focus_pane_cp7

0x4823,	// (0x00022c03) list_form_pane

0xe5c0,	// (0x0002c9a0) form_field_popup_wide_pane_t1

0x47e9,	// (0x00022bc9) input_focus_pane_cp8

0x482f,	// (0x00022c0f) list_form_wide_pane

0xe5dd,	// (0x0002c9bd) form_field_slider_pane_t1_ParamLimits

0xe5dd,	// (0x0002c9bd) form_field_slider_pane_t1

0xe5f1,	// (0x0002c9d1) form_field_slider_pane_t2_ParamLimits

0xe5f1,	// (0x0002c9d1) form_field_slider_pane_t2

0x0001,

0xf695,	// (0x0002da75) form_field_slider_pane_t_ParamLimits

0xf695,	// (0x0002da75) form_field_slider_pane_t

0x41e6,	// (0x000225c6) input_focus_pane_cp9_ParamLimits

0x41e6,	// (0x000225c6) input_focus_pane_cp9

0xe603,	// (0x0002c9e3) slider_cont_pane_ParamLimits

0xe603,	// (0x0002c9e3) slider_cont_pane

0x483e,	// (0x00022c1e) form_field_slider_wide_pane_t1_ParamLimits

0x483e,	// (0x00022c1e) form_field_slider_wide_pane_t1

0xe617,	// (0x0002c9f7) form_field_slider_wide_pane_t2_ParamLimits

0xe617,	// (0x0002c9f7) form_field_slider_wide_pane_t2

0x0001,

0xf69a,	// (0x0002da7a) form_field_slider_wide_pane_t_ParamLimits

0xf69a,	// (0x0002da7a) form_field_slider_wide_pane_t

0x41e6,	// (0x000225c6) input_focus_pane_cp10_ParamLimits

0x41e6,	// (0x000225c6) input_focus_pane_cp10

0xe629,	// (0x0002ca09) slider_cont_pane_cp1_ParamLimits

0xe629,	// (0x0002ca09) slider_cont_pane_cp1

0xe63d,	// (0x0002ca1d) slider_form_pane_cp

0x4850,	// (0x00022c30) input_focus_pane_g1

0x4858,	// (0x00022c38) input_focus_pane_g2

0x4860,	// (0x00022c40) input_focus_pane_g3

0x4868,	// (0x00022c48) input_focus_pane_g4

0x4870,	// (0x00022c50) input_focus_pane_g5

0x4878,	// (0x00022c58) input_focus_pane_g6

0x4880,	// (0x00022c60) input_focus_pane_g7

0x4888,	// (0x00022c68) input_focus_pane_g8

0x4890,	// (0x00022c70) input_focus_pane_g9

0x418e,	// (0x0002256e) input_focus_pane_g10

0x0009,

0xf69f,	// (0x0002da7f) input_focus_pane_g

0x5cbb,	// (0x0002409b) wait_border_pane_g3_copy1

0xe645,	// (0x0002ca25) data_form_pane_t1

0x418e,	// (0x0002256e) wait_anim_pane_g1_copy1

0xe843,	// (0x0002cc23) data_form_wide_pane_t1

0xe660,	// (0x0002ca40) list_form_graphic_pane_cp_ParamLimits

0xe660,	// (0x0002ca40) list_form_graphic_pane_cp

0x6944,	// (0x00024d24) slider_form_pane_g1

0x694d,	// (0x00024d2d) slider_form_pane_g2

0x0006,

0xf996,	// (0x0002dd76) slider_form_pane_g

0xe677,	// (0x0002ca57) list_form_graphic_pane_ParamLimits

0xe677,	// (0x0002ca57) list_form_graphic_pane

0xe691,	// (0x0002ca71) list_form_graphic_pane_g1

0xe699,	// (0x0002ca79) list_form_graphic_pane_t1_ParamLimits

0xe699,	// (0x0002ca79) list_form_graphic_pane_t1

0x41f4,	// (0x000225d4) list_highlight_pane_cp5_ParamLimits

0x41f4,	// (0x000225d4) list_highlight_pane_cp5

0xe6ae,	// (0x0002ca8e) find_pane_g1

0x4898,	// (0x00022c78) input_find_pane

0xe6b7,	// (0x0002ca97) input_find_pane_g1_ParamLimits

0xe6b7,	// (0x0002ca97) input_find_pane_g1

0xe6c3,	// (0x0002caa3) input_find_pane_t1_ParamLimits

0xe6c3,	// (0x0002caa3) input_find_pane_t1

0xe6d8,	// (0x0002cab8) input_find_pane_t2_ParamLimits

0xe6d8,	// (0x0002cab8) input_find_pane_t2

0x0001,

0xf6b4,	// (0x0002da94) input_find_pane_t_ParamLimits

0xf6b4,	// (0x0002da94) input_find_pane_t

0x48a1,	// (0x00022c81) input_focus_pane_cp5_ParamLimits

0x48a1,	// (0x00022c81) input_focus_pane_cp5

0x8ce0,	// (0x000270c0) bg_popup_window_pane_cp2_ParamLimits

0x8ce0,	// (0x000270c0) bg_popup_window_pane_cp2

0x8ced,	// (0x000270cd) listscroll_menu_pane_ParamLimits

0x8ced,	// (0x000270cd) listscroll_menu_pane

0x8cf9,	// (0x000270d9) popup_submenu_window_ParamLimits

0x8cf9,	// (0x000270d9) popup_submenu_window

0x48af,	// (0x00022c8f) find_popup_pane_g1

0x48b7,	// (0x00022c97) input_popup_find_pane_cp

0x48a1,	// (0x00022c81) input_focus_pane_cp4_ParamLimits

0x48a1,	// (0x00022c81) input_focus_pane_cp4

0x48c1,	// (0x00022ca1) input_popup_find_pane_t1_ParamLimits

0x48c1,	// (0x00022ca1) input_popup_find_pane_t1

0x4198,	// (0x00022578) bg_popup_sub_pane_cp

0x48ef,	// (0x00022ccf) listscroll_popup_sub_pane

0x48f7,	// (0x00022cd7) list_submenu_pane_ParamLimits

0x48f7,	// (0x00022cd7) list_submenu_pane

0x4908,	// (0x00022ce8) scroll_pane_cp4

0x4910,	// (0x00022cf0) list_single_popup_submenu_pane_ParamLimits

0x4910,	// (0x00022cf0) list_single_popup_submenu_pane

0x4923,	// (0x00022d03) list_single_popup_submenu_pane_g1

0x492b,	// (0x00022d0b) list_single_popup_submenu_pane_t1_ParamLimits

0x492b,	// (0x00022d0b) list_single_popup_submenu_pane_t1

0x41f4,	// (0x000225d4) bg_active_tab_pane_cp1_ParamLimits

0x41f4,	// (0x000225d4) bg_active_tab_pane_cp1

0x8d2f,	// (0x0002710f) tabs_2_active_pane_g1

0x8d37,	// (0x00027117) tabs_2_active_pane_t1

0x41f4,	// (0x000225d4) bg_passive_tab_pane_cp1_ParamLimits

0x41f4,	// (0x000225d4) bg_passive_tab_pane_cp1

0x8d2f,	// (0x0002710f) tabs_2_passive_pane_g1

0x8d37,	// (0x00027117) tabs_2_passive_pane_t1

0x552a,	// (0x0002390a) bg_active_tab_pane_cp4

0x8d49,	// (0x00027129) tabs_2_long_active_pane_t1

0x8d5c,	// (0x0002713c) bg_passive_tab_pane_cp4

0x9dac,	// (0x0002818c) list_single_midp_graphic_pane_g4_ParamLimits

0x552a,	// (0x0002390a) bg_active_tab_pane_cp5

0x8d68,	// (0x00027148) tabs_3_long_active_pane_t1

0x8d5c,	// (0x0002713c) bg_passive_tab_pane_cp5

0x9dac,	// (0x0002818c) list_single_midp_graphic_pane_g4

0x41f4,	// (0x000225d4) bg_popup_window_pane_cp13_ParamLimits

0x41f4,	// (0x000225d4) bg_popup_window_pane_cp13

0x4955,	// (0x00022d35) listscroll_popup_fast_pane_ParamLimits

0x4955,	// (0x00022d35) listscroll_popup_fast_pane

0x4964,	// (0x00022d44) grid_popup_fast_pane_ParamLimits

0x4964,	// (0x00022d44) grid_popup_fast_pane

0x4976,	// (0x00022d56) scroll_pane_cp9_ParamLimits

0x4976,	// (0x00022d56) scroll_pane_cp9

0xb053,	// (0x00029433) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xb053,	// (0x00029433) list_single_graphic_hl_pane_t1_cp2

0x499a,	// (0x00022d7a) input_focus_pane_cp20_ParamLimits

0x499a,	// (0x00022d7a) input_focus_pane_cp20

0x49a8,	// (0x00022d88) query_popup_data_pane_t1_ParamLimits

0x49a8,	// (0x00022d88) query_popup_data_pane_t1

0x49bb,	// (0x00022d9b) query_popup_data_pane_t2_ParamLimits

0x49bb,	// (0x00022d9b) query_popup_data_pane_t2

0x4a01,	// (0x00022de1) query_popup_data_pane_t3_ParamLimits

0x4a01,	// (0x00022de1) query_popup_data_pane_t3

0x4a42,	// (0x00022e22) query_popup_data_pane_t4_ParamLimits

0x4a42,	// (0x00022e22) query_popup_data_pane_t4

0x4a7e,	// (0x00022e5e) query_popup_data_pane_t5_ParamLimits

0x4a7e,	// (0x00022e5e) query_popup_data_pane_t5

0x0004,

0xf6b9,	// (0x0002da99) query_popup_data_pane_t_ParamLimits

0xf6b9,	// (0x0002da99) query_popup_data_pane_t

0x4850,	// (0x00022c30) bg_set_opt_pane_g1

0x4858,	// (0x00022c38) bg_set_opt_pane_g2

0x4860,	// (0x00022c40) bg_set_opt_pane_g3

0x4868,	// (0x00022c48) bg_set_opt_pane_g4

0x4870,	// (0x00022c50) bg_set_opt_pane_g5

0x4878,	// (0x00022c58) bg_set_opt_pane_g6

0x4880,	// (0x00022c60) bg_set_opt_pane_g7

0x4888,	// (0x00022c68) bg_set_opt_pane_g8

0x4890,	// (0x00022c70) bg_set_opt_pane_g9

0x0008,

0xf6c4,	// (0x0002daa4) bg_set_opt_pane_g

0x9188,	// (0x00027568) control_top_pane_stacon_ParamLimits

0x9188,	// (0x00027568) control_top_pane_stacon

0x91db,	// (0x000275bb) signal_pane_stacon_ParamLimits

0x91db,	// (0x000275bb) signal_pane_stacon

0x4ed0,	// (0x000232b0) stacon_top_pane_g1_ParamLimits

0x4ed0,	// (0x000232b0) stacon_top_pane_g1

0x9200,	// (0x000275e0) title_pane_stacon_ParamLimits

0x9200,	// (0x000275e0) title_pane_stacon

0x922a,	// (0x0002760a) uni_indicator_pane_stacon_ParamLimits

0x922a,	// (0x0002760a) uni_indicator_pane_stacon

0x923f,	// (0x0002761f) battery_pane_stacon_ParamLimits

0x923f,	// (0x0002761f) battery_pane_stacon

0x9283,	// (0x00027663) control_bottom_pane_stacon_ParamLimits

0x9283,	// (0x00027663) control_bottom_pane_stacon

0x92a6,	// (0x00027686) navi_pane_stacon_ParamLimits

0x92a6,	// (0x00027686) navi_pane_stacon

0x4ef2,	// (0x000232d2) stacon_bottom_pane_g1_ParamLimits

0x4ef2,	// (0x000232d2) stacon_bottom_pane_g1

0x8d7a,	// (0x0002715a) aid_levels_signal_lsc_ParamLimits

0x8d7a,	// (0x0002715a) aid_levels_signal_lsc

0x8d91,	// (0x00027171) signal_pane_stacon_g1_ParamLimits

0x8d91,	// (0x00027171) signal_pane_stacon_g1

0x8da5,	// (0x00027185) signal_pane_stacon_g2_ParamLimits

0x8da5,	// (0x00027185) signal_pane_stacon_g2

0x0001,

0xf6d7,	// (0x0002dab7) signal_pane_stacon_g_ParamLimits

0xf6d7,	// (0x0002dab7) signal_pane_stacon_g

0x8dda,	// (0x000271ba) title_pane_stacon_t1_ParamLimits

0x8dda,	// (0x000271ba) title_pane_stacon_t1

0x4ad6,	// (0x00022eb6) uni_indicator_pane_stacon_g1

0x4ae0,	// (0x00022ec0) uni_indicator_pane_stacon_g2

0x4ac2,	// (0x00022ea2) uni_indicator_pane_stacon_g3

0x4acc,	// (0x00022eac) uni_indicator_pane_stacon_g4

0x0003,

0xf6e3,	// (0x0002dac3) uni_indicator_pane_stacon_g

0x8dff,	// (0x000271df) control_top_pane_stacon_g1

0x8e07,	// (0x000271e7) control_top_pane_stacon_t1_ParamLimits

0x8e07,	// (0x000271e7) control_top_pane_stacon_t1

0x8e3e,	// (0x0002721e) aid_levels_battery_lsc_ParamLimits

0x8e3e,	// (0x0002721e) aid_levels_battery_lsc

0x8e56,	// (0x00027236) battery_pane_stacon_g1_ParamLimits

0x8e56,	// (0x00027236) battery_pane_stacon_g1

0x8e69,	// (0x00027249) battery_pane_stacon_g2_ParamLimits

0x8e69,	// (0x00027249) battery_pane_stacon_g2

0x0001,

0xf6ec,	// (0x0002dacc) battery_pane_stacon_g_ParamLimits

0xf6ec,	// (0x0002dacc) battery_pane_stacon_g

0x8ea7,	// (0x00027287) navi_icon_pane_stacon

0x8ebb,	// (0x0002729b) navi_navi_pane_stacon

0x8ea7,	// (0x00027287) navi_text_pane_stacon

0x8dff,	// (0x000271df) control_bottom_pane_stacon_g1

0x8ecf,	// (0x000272af) control_bottom_pane_stacon_t1_ParamLimits

0x8ecf,	// (0x000272af) control_bottom_pane_stacon_t1

0x8f06,	// (0x000272e6) grid_app_pane_ParamLimits

0x8f06,	// (0x000272e6) grid_app_pane

0x8f28,	// (0x00027308) scroll_pane_cp15_ParamLimits

0x8f28,	// (0x00027308) scroll_pane_cp15

0x8f3d,	// (0x0002731d) cell_app_pane_ParamLimits

0x8f3d,	// (0x0002731d) cell_app_pane

0x8f67,	// (0x00027347) cell_app_pane_g1_ParamLimits

0x8f67,	// (0x00027347) cell_app_pane_g1

0x4b04,	// (0x00022ee4) cell_app_pane_g2_ParamLimits

0x4b04,	// (0x00022ee4) cell_app_pane_g2

0x0001,

0xf6f1,	// (0x0002dad1) cell_app_pane_g_ParamLimits

0xf6f1,	// (0x0002dad1) cell_app_pane_g

0x8f87,	// (0x00027367) cell_app_pane_t1_ParamLimits

0x8f87,	// (0x00027367) cell_app_pane_t1

0x4b10,	// (0x00022ef0) grid_highlight_pane_ParamLimits

0x4b10,	// (0x00022ef0) grid_highlight_pane

0x4850,	// (0x00022c30) cell_highlight_pane_g1

0x4858,	// (0x00022c38) cell_highlight_pane_g2

0x4860,	// (0x00022c40) cell_highlight_pane_g3

0x4868,	// (0x00022c48) cell_highlight_pane_g4

0x4870,	// (0x00022c50) cell_highlight_pane_g5

0x4878,	// (0x00022c58) cell_highlight_pane_g6

0x4880,	// (0x00022c60) cell_highlight_pane_g7

0x4888,	// (0x00022c68) cell_highlight_pane_g8

0x4890,	// (0x00022c70) cell_highlight_pane_g9

0x418e,	// (0x0002256e) cell_highlight_pane_g10

0x0009,

0xf69f,	// (0x0002da7f) cell_highlight_pane_g

0x4b21,	// (0x00022f01) bg_scroll_pane

0x8fb1,	// (0x00027391) scroll_handle_pane

0x4b68,	// (0x00022f48) scroll_bg_pane_g1

0x4b7d,	// (0x00022f5d) scroll_bg_pane_g2

0x4b95,	// (0x00022f75) scroll_bg_pane_g3

0x0002,

0xf6f6,	// (0x0002dad6) scroll_bg_pane_g

0x4baa,	// (0x00022f8a) scroll_handle_focus_pane_ParamLimits

0x4baa,	// (0x00022f8a) scroll_handle_focus_pane

0x4b68,	// (0x00022f48) scroll_handle_pane_g1

0x4bb7,	// (0x00022f97) scroll_handle_pane_g2

0x4b95,	// (0x00022f75) scroll_handle_pane_g3

0x0002,

0xf6fd,	// (0x0002dadd) scroll_handle_pane_g

0x48a1,	// (0x00022c81) bg_popup_sub_pane_cp21_ParamLimits

0x48a1,	// (0x00022c81) bg_popup_sub_pane_cp21

0x4bcb,	// (0x00022fab) popup_fep_japan_predictive_window_t1_ParamLimits

0x4bcb,	// (0x00022fab) popup_fep_japan_predictive_window_t1

0x4be2,	// (0x00022fc2) popup_fep_japan_predictive_window_t2_ParamLimits

0x4be2,	// (0x00022fc2) popup_fep_japan_predictive_window_t2

0x4c15,	// (0x00022ff5) popup_fep_japan_predictive_window_t3_ParamLimits

0x4c15,	// (0x00022ff5) popup_fep_japan_predictive_window_t3

0x0002,

0xf704,	// (0x0002dae4) popup_fep_japan_predictive_window_t_ParamLimits

0xf704,	// (0x0002dae4) popup_fep_japan_predictive_window_t

0x4198,	// (0x00022578) bg_popup_sub_pane_cp23

0x4c4c,	// (0x0002302c) listscroll_japin_cand_pane

0x4c54,	// (0x00023034) popup_fep_japan_candidate_window_t1

0x4c62,	// (0x00023042) candidate_pane_ParamLimits

0x4c62,	// (0x00023042) candidate_pane

0x4c74,	// (0x00023054) scroll_pane_cp30

0x4c7c,	// (0x0002305c) list_single_popup_jap_candidate_pane_ParamLimits

0x4c7c,	// (0x0002305c) list_single_popup_jap_candidate_pane

0x4198,	// (0x00022578) list_highlight_pane_cp30

0x4c90,	// (0x00023070) list_single_popup_jap_candidate_pane_t1

0x4c9f,	// (0x0002307f) level_1_signal

0x4cac,	// (0x0002308c) level_2_signal

0x4cb9,	// (0x00023099) level_3_signal

0x4cc6,	// (0x000230a6) level_4_signal

0x4cd3,	// (0x000230b3) level_5_signal

0x4ce0,	// (0x000230c0) level_6_signal

0x4ced,	// (0x000230cd) level_7_signal

0x4c9f,	// (0x0002307f) level_1_battery

0x4cac,	// (0x0002308c) level_2_battery

0x4cb9,	// (0x00023099) level_3_battery

0x4cc6,	// (0x000230a6) level_4_battery

0x4cd3,	// (0x000230b3) level_5_battery

0x4ce0,	// (0x000230c0) level_6_battery

0x4ced,	// (0x000230cd) level_7_battery

0x4d12,	// (0x000230f2) list_menu_pane_ParamLimits

0x4d12,	// (0x000230f2) list_menu_pane

0x4d28,	// (0x00023108) scroll_pane_cp25_ParamLimits

0x4d28,	// (0x00023108) scroll_pane_cp25

0x4d41,	// (0x00023121) list_double2_graphic_pane_cp2_ParamLimits

0x4d41,	// (0x00023121) list_double2_graphic_pane_cp2

0x4d41,	// (0x00023121) list_double2_large_graphic_pane_cp2_ParamLimits

0x4d41,	// (0x00023121) list_double2_large_graphic_pane_cp2

0x4d41,	// (0x00023121) list_double2_pane_cp2_ParamLimits

0x4d41,	// (0x00023121) list_double2_pane_cp2

0x4d41,	// (0x00023121) list_double_graphic_pane_cp2_ParamLimits

0x4d41,	// (0x00023121) list_double_graphic_pane_cp2

0x4d41,	// (0x00023121) list_double_large_graphic_pane_cp2_ParamLimits

0x4d41,	// (0x00023121) list_double_large_graphic_pane_cp2

0x4d41,	// (0x00023121) list_double_number_pane_cp2_ParamLimits

0x4d41,	// (0x00023121) list_double_number_pane_cp2

0x4d41,	// (0x00023121) list_double_pane_cp2_ParamLimits

0x4d41,	// (0x00023121) list_double_pane_cp2

0x900b,	// (0x000273eb) list_single_2graphic_pane_cp2_ParamLimits

0x900b,	// (0x000273eb) list_single_2graphic_pane_cp2

0x900b,	// (0x000273eb) list_single_graphic_heading_pane_cp2_ParamLimits

0x900b,	// (0x000273eb) list_single_graphic_heading_pane_cp2

0x900b,	// (0x000273eb) list_single_graphic_pane_cp2_ParamLimits

0x900b,	// (0x000273eb) list_single_graphic_pane_cp2

0x900b,	// (0x000273eb) list_single_heading_pane_cp2_ParamLimits

0x900b,	// (0x000273eb) list_single_heading_pane_cp2

0x4d51,	// (0x00023131) list_single_large_graphic_pane_cp2_ParamLimits

0x4d51,	// (0x00023131) list_single_large_graphic_pane_cp2

0x900b,	// (0x000273eb) list_single_number_heading_pane_cp2_ParamLimits

0x900b,	// (0x000273eb) list_single_number_heading_pane_cp2

0x900b,	// (0x000273eb) list_single_number_pane_cp2_ParamLimits

0x900b,	// (0x000273eb) list_single_number_pane_cp2

0x900b,	// (0x000273eb) list_single_pane_cp2_ParamLimits

0x900b,	// (0x000273eb) list_single_pane_cp2

0x4d6b,	// (0x0002314b) bg_popup_sub_pane_cp22

0x90ee,	// (0x000274ce) popup_side_volume_key_window_g1

0x9118,	// (0x000274f8) popup_side_volume_key_window_t1

0x9134,	// (0x00027514) volume_small_pane_cp1

0x41e6,	// (0x000225c6) bg_popup_sub_pane_cp24_ParamLimits

0x41e6,	// (0x000225c6) bg_popup_sub_pane_cp24

0x4d81,	// (0x00023161) fep_china_uni_candidate_pane_ParamLimits

0x4d81,	// (0x00023161) fep_china_uni_candidate_pane

0x4d95,	// (0x00023175) fep_china_uni_entry_pane

0x4da5,	// (0x00023185) popup_fep_china_uni_window_g1

0x4dc1,	// (0x000231a1) fep_china_uni_entry_pane_g1

0x4dc9,	// (0x000231a9) fep_china_uni_entry_pane_g2

0x0001,

0xf735,	// (0x0002db15) fep_china_uni_entry_pane_g

0x4dd1,	// (0x000231b1) fep_entry_item_pane

0x4ddb,	// (0x000231bb) fep_candidate_item_pane

0x4de3,	// (0x000231c3) fep_china_uni_candidate_pane_g1

0x4deb,	// (0x000231cb) fep_china_uni_candidate_pane_g2

0x4df3,	// (0x000231d3) fep_china_uni_candidate_pane_g3

0x4dfb,	// (0x000231db) fep_china_uni_candidate_pane_g4

0x0003,

0xf73a,	// (0x0002db1a) fep_china_uni_candidate_pane_g

0x418e,	// (0x0002256e) fep_entry_item_pane_g1

0x4e03,	// (0x000231e3) fep_entry_item_pane_t1_ParamLimits

0x4e03,	// (0x000231e3) fep_entry_item_pane_t1

0x4e19,	// (0x000231f9) fep_candidate_item_pane_t1_ParamLimits

0x4e19,	// (0x000231f9) fep_candidate_item_pane_t1

0x4e2e,	// (0x0002320e) fep_candidate_item_pane_t2_ParamLimits

0x4e2e,	// (0x0002320e) fep_candidate_item_pane_t2

0x0001,

0xf743,	// (0x0002db23) fep_candidate_item_pane_t_ParamLimits

0xf743,	// (0x0002db23) fep_candidate_item_pane_t

0x41f4,	// (0x000225d4) list_highlight_pane_cp31_ParamLimits

0x41f4,	// (0x000225d4) list_highlight_pane_cp31

0x4e40,	// (0x00023220) level_1_signal_lsc

0x4e49,	// (0x00023229) level_2_signal_lsc

0x4e52,	// (0x00023232) level_3_signal_lsc

0x4e5b,	// (0x0002323b) level_4_signal_lsc

0x4e64,	// (0x00023244) level_5_signal_lsc

0x4e6d,	// (0x0002324d) level_6_signal_lsc

0x4e76,	// (0x00023256) level_7_signal_lsc

0x4e76,	// (0x00023256) level_1_battery_lsc

0x4e7f,	// (0x0002325f) level_2_battery_lsc

0x4e88,	// (0x00023268) level_3_battery_lsc

0x4e91,	// (0x00023271) level_4_battery_lsc

0x4e9a,	// (0x0002327a) level_5_battery_lsc

0x4ea3,	// (0x00023283) level_6_battery_lsc

0x4e40,	// (0x00023220) level_7_battery_lsc

0x4eac,	// (0x0002328c) scroll_handle_focus_pane_g1

0x4eb5,	// (0x00023295) scroll_handle_focus_pane_g2

0x4ebe,	// (0x0002329e) scroll_handle_focus_pane_g3

0x0002,

0xf748,	// (0x0002db28) scroll_handle_focus_pane_g

0xe6ed,	// (0x0002cacd) list_single_2graphic_pane_g1_ParamLimits

0xe6ed,	// (0x0002cacd) list_single_2graphic_pane_g1

0xe0e0,	// (0x0002c4c0) list_single_2graphic_pane_g2_ParamLimits

0xe0e0,	// (0x0002c4c0) list_single_2graphic_pane_g2

0xe066,	// (0x0002c446) list_single_2graphic_pane_g3_ParamLimits

0xe066,	// (0x0002c446) list_single_2graphic_pane_g3

0xe6f9,	// (0x0002cad9) list_single_2graphic_pane_g4_ParamLimits

0xe6f9,	// (0x0002cad9) list_single_2graphic_pane_g4

0x0003,

0xf74f,	// (0x0002db2f) list_single_2graphic_pane_g_ParamLimits

0xf74f,	// (0x0002db2f) list_single_2graphic_pane_g

0xe705,	// (0x0002cae5) list_single_2graphic_pane_t1_ParamLimits

0xe705,	// (0x0002cae5) list_single_2graphic_pane_t1

0xe733,	// (0x0002cb13) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xe733,	// (0x0002cb13) list_double2_graphic_large_graphic_pane_g1

0xe185,	// (0x0002c565) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xe185,	// (0x0002c565) list_double2_graphic_large_graphic_pane_g2

0xe151,	// (0x0002c531) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xe151,	// (0x0002c531) list_double2_graphic_large_graphic_pane_g3

0xe745,	// (0x0002cb25) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xe745,	// (0x0002cb25) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf758,	// (0x0002db38) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf758,	// (0x0002db38) list_double2_graphic_large_graphic_pane_g

0xe751,	// (0x0002cb31) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xe751,	// (0x0002cb31) list_double2_graphic_large_graphic_pane_t1

0xe767,	// (0x0002cb47) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xe767,	// (0x0002cb47) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf761,	// (0x0002db41) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf761,	// (0x0002db41) list_double2_graphic_large_graphic_pane_t

0x4f9f,	// (0x0002337f) popup_fast_swap_window_ParamLimits

0x4f9f,	// (0x0002337f) popup_fast_swap_window

0x4fbb,	// (0x0002339b) popup_side_volume_key_window

0x4fd5,	// (0x000233b5) stacon_top_pane

0x4fdf,	// (0x000233bf) status_pane_ParamLimits

0x4fdf,	// (0x000233bf) status_pane

0x4fd5,	// (0x000233b5) status_small_pane

0x4198,	// (0x00022578) control_pane

0x4198,	// (0x00022578) stacon_bottom_pane

0x47cc,	// (0x00022bac) scroll_pane_cp121

0x47c3,	// (0x00022ba3) set_content_pane

0x913c,	// (0x0002751c) bg_active_tab_pane_g1_cp1

0x4ec7,	// (0x000232a7) bg_active_tab_pane_g2_cp1

0x9145,	// (0x00027525) bg_active_tab_pane_g3_cp1

0x913c,	// (0x0002751c) bg_passive_tab_pane_g1_cp1

0x4ec7,	// (0x000232a7) bg_passive_tab_pane_g2_cp1

0x9145,	// (0x00027525) bg_passive_tab_pane_g3_cp1

0x914e,	// (0x0002752e) bg_active_tab_pane_g1_cp2

0x4ec7,	// (0x000232a7) bg_active_tab_pane_g2_cp2

0x9157,	// (0x00027537) bg_active_tab_pane_g3_cp2

0x914e,	// (0x0002752e) bg_passive_tab_pane_g1_cp2

0x4ec7,	// (0x000232a7) bg_passive_tab_pane_g2_cp2

0x9157,	// (0x00027537) bg_passive_tab_pane_g3_cp2

0x9160,	// (0x00027540) bg_active_tab_pane_g1_cp3

0x4ec7,	// (0x000232a7) bg_active_tab_pane_g2_cp3

0x9169,	// (0x00027549) bg_active_tab_pane_g3_cp3

0x9160,	// (0x00027540) bg_passive_tab_pane_g1_cp3

0x4ec7,	// (0x000232a7) bg_passive_tab_pane_g2_cp3

0x9169,	// (0x00027549) bg_passive_tab_pane_g3_cp3

0x9172,	// (0x00027552) bg_active_tab_pane_g1_cp4

0x4ec7,	// (0x000232a7) bg_active_tab_pane_g2_cp4

0x917d,	// (0x0002755d) bg_active_tab_pane_g3_cp4

0x9172,	// (0x00027552) bg_passive_tab_pane_g1_cp4

0x4ec7,	// (0x000232a7) bg_passive_tab_pane_g2_cp4

0x917d,	// (0x0002755d) bg_passive_tab_pane_g3_cp4

0x4f17,	// (0x000232f7) bg_active_tab_pane_g1_cp5

0x4ec7,	// (0x000232a7) bg_active_tab_pane_g2_cp5

0x4f0e,	// (0x000232ee) bg_active_tab_pane_g3_cp5

0x4f17,	// (0x000232f7) bg_passive_tab_pane_g1_cp5

0x4ec7,	// (0x000232a7) bg_passive_tab_pane_g2_cp5

0x4f0e,	// (0x000232ee) bg_passive_tab_pane_g3_cp5

0x92c9,	// (0x000276a9) list_set_graphic_pane_ParamLimits

0x92c9,	// (0x000276a9) list_set_graphic_pane

0x4198,	// (0x00022578) bg_set_opt_pane_cp4

0x4f20,	// (0x00023300) list_set_graphic_pane_g1_ParamLimits

0x4f20,	// (0x00023300) list_set_graphic_pane_g1

0x4f2c,	// (0x0002330c) list_set_graphic_pane_g2_ParamLimits

0x4f2c,	// (0x0002330c) list_set_graphic_pane_g2

0x0001,

0xf766,	// (0x0002db46) list_set_graphic_pane_g_ParamLimits

0xf766,	// (0x0002db46) list_set_graphic_pane_g

0x0009,

0xfad9,	// (0x0002deb9) volume_small_pane_cp_g

0x4f50,	// (0x00023330) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x4f50,	// (0x00023330) list_double2_large_graphic_pane_g1_cp2

0x4f5e,	// (0x0002333e) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x4f5e,	// (0x0002333e) list_double2_large_graphic_pane_g2_cp2

0x4f6f,	// (0x0002334f) list_double2_large_graphic_pane_g3_cp2

0x4f77,	// (0x00023357) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4f77,	// (0x00023357) list_double2_large_graphic_pane_t1_cp2

0x4f8d,	// (0x0002336d) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4f8d,	// (0x0002336d) list_double2_large_graphic_pane_t2_cp2

0x66de,	// (0x00024abe) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x66de,	// (0x00024abe) list_double_large_graphic_pane_g1_cp2

0x66f1,	// (0x00024ad1) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x66f1,	// (0x00024ad1) list_double_large_graphic_pane_g2_cp2

0x50fd,	// (0x000234dd) list_double_large_graphic_pane_g3_cp2

0x6702,	// (0x00024ae2) list_double_large_graphic_pane_g4_cp

0x670a,	// (0x00024aea) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x670a,	// (0x00024aea) list_double_large_graphic_pane_t1_cp2

0x6721,	// (0x00024b01) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x6721,	// (0x00024b01) list_double_large_graphic_pane_t2_cp2

0x4fed,	// (0x000233cd) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4fed,	// (0x000233cd) list_double2_graphic_pane_g1_cp2

0x4ffb,	// (0x000233db) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4ffb,	// (0x000233db) list_double2_graphic_pane_g2_cp2

0x500c,	// (0x000233ec) list_double2_graphic_pane_g3_cp2

0x5016,	// (0x000233f6) list_double2_graphic_pane_t1_cp2_ParamLimits

0x5016,	// (0x000233f6) list_double2_graphic_pane_t1_cp2

0x502c,	// (0x0002340c) list_double2_graphic_pane_t2_cp2_ParamLimits

0x502c,	// (0x0002340c) list_double2_graphic_pane_t2_cp2

0x503e,	// (0x0002341e) list_single_number_heading_pane_g1_cp2_ParamLimits

0x503e,	// (0x0002341e) list_single_number_heading_pane_g1_cp2

0x504a,	// (0x0002342a) list_single_number_heading_pane_g2_cp2

0x5052,	// (0x00023432) list_single_number_heading_pane_t1_cp2_ParamLimits

0x5052,	// (0x00023432) list_single_number_heading_pane_t1_cp2

0x5068,	// (0x00023448) list_single_number_heading_pane_t2_cp2_ParamLimits

0x5068,	// (0x00023448) list_single_number_heading_pane_t2_cp2

0x507c,	// (0x0002345c) list_single_number_heading_pane_t3_cp2_ParamLimits

0x507c,	// (0x0002345c) list_single_number_heading_pane_t3_cp2

0x503e,	// (0x0002341e) list_single_heading_pane_g1_cp2_ParamLimits

0x503e,	// (0x0002341e) list_single_heading_pane_g1_cp2

0x504a,	// (0x0002342a) list_single_heading_pane_g2_cp2

0x5052,	// (0x00023432) list_single_heading_pane_t1_cp2_ParamLimits

0x5052,	// (0x00023432) list_single_heading_pane_t1_cp2

0x64e6,	// (0x000248c6) list_single_heading_pane_t2_cp2_ParamLimits

0x64e6,	// (0x000248c6) list_single_heading_pane_t2_cp2

0x60da,	// (0x000244ba) list_double_graphic_pane_g1_cp2_ParamLimits

0x60da,	// (0x000244ba) list_double_graphic_pane_g1_cp2

0x643a,	// (0x0002481a) list_double_graphic_pane_g2_cp2_ParamLimits

0x643a,	// (0x0002481a) list_double_graphic_pane_g2_cp2

0x6449,	// (0x00024829) list_double_graphic_pane_g3_cp2

0x6451,	// (0x00024831) list_double_graphic_pane_t1_cp2_ParamLimits

0x6451,	// (0x00024831) list_double_graphic_pane_t1_cp2

0x6467,	// (0x00024847) list_double_graphic_pane_t2_cp2_ParamLimits

0x6467,	// (0x00024847) list_double_graphic_pane_t2_cp2

0x50f1,	// (0x000234d1) list_double_number_pane_g1_cp2_ParamLimits

0x50f1,	// (0x000234d1) list_double_number_pane_g1_cp2

0x50fd,	// (0x000234dd) list_double_number_pane_g2_cp2

0x63fe,	// (0x000247de) list_double_number_pane_t1_cp2_ParamLimits

0x63fe,	// (0x000247de) list_double_number_pane_t1_cp2

0x6412,	// (0x000247f2) list_double_number_pane_t2_cp2_ParamLimits

0x6412,	// (0x000247f2) list_double_number_pane_t2_cp2

0x6428,	// (0x00024808) list_double_number_pane_t3_cp2_ParamLimits

0x6428,	// (0x00024808) list_double_number_pane_t3_cp2

0x6375,	// (0x00024755) list_single_graphic_pane_g1_cp2_ParamLimits

0x6375,	// (0x00024755) list_single_graphic_pane_g1_cp2

0x5155,	// (0x00023535) list_single_graphic_pane_g2_cp2_ParamLimits

0x5155,	// (0x00023535) list_single_graphic_pane_g2_cp2

0x5161,	// (0x00023541) list_single_graphic_pane_g3_cp2

0x634b,	// (0x0002472b) list_single_graphic_pane_t1_cp2_ParamLimits

0x634b,	// (0x0002472b) list_single_graphic_pane_t1_cp2

0x5155,	// (0x00023535) list_single_number_pane_g1_cp2_ParamLimits

0x5155,	// (0x00023535) list_single_number_pane_g1_cp2

0x5161,	// (0x00023541) list_single_number_pane_g2_cp2

0x634b,	// (0x0002472b) list_single_number_pane_t1_cp2_ParamLimits

0x634b,	// (0x0002472b) list_single_number_pane_t1_cp2

0x6361,	// (0x00024741) list_single_number_pane_t2_cp2_ParamLimits

0x6361,	// (0x00024741) list_single_number_pane_t2_cp2

0x4f5e,	// (0x0002333e) list_double2_pane_g1_cp2_ParamLimits

0x4f5e,	// (0x0002333e) list_double2_pane_g1_cp2

0x4f6f,	// (0x0002334f) list_double2_pane_g2_cp2

0x50c9,	// (0x000234a9) list_double2_pane_t1_cp2_ParamLimits

0x50c9,	// (0x000234a9) list_double2_pane_t1_cp2

0x50df,	// (0x000234bf) list_double2_pane_t2_cp2_ParamLimits

0x50df,	// (0x000234bf) list_double2_pane_t2_cp2

0x50f1,	// (0x000234d1) list_double_pane_g1_cp2_ParamLimits

0x50f1,	// (0x000234d1) list_double_pane_g1_cp2

0x50fd,	// (0x000234dd) list_double_pane_g2_cp2

0x5105,	// (0x000234e5) list_double_pane_t1_cp2_ParamLimits

0x5105,	// (0x000234e5) list_double_pane_t1_cp2

0x511b,	// (0x000234fb) list_double_pane_t2_cp2_ParamLimits

0x511b,	// (0x000234fb) list_double_pane_t2_cp2

0x5145,	// (0x00023525) list_single_pane_cp2_g3

0x5155,	// (0x00023535) list_single_pane_g1_cp2_ParamLimits

0x5155,	// (0x00023535) list_single_pane_g1_cp2

0x5161,	// (0x00023541) list_single_pane_g2_cp2

0x5169,	// (0x00023549) list_single_pane_t1_cp2_ParamLimits

0x5169,	// (0x00023549) list_single_pane_t1_cp2

0x5181,	// (0x00023561) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x5181,	// (0x00023561) list_single_large_graphic_pane_g1_cp2

0x518f,	// (0x0002356f) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x518f,	// (0x0002356f) list_single_large_graphic_pane_g2_cp2

0x519b,	// (0x0002357b) list_single_large_graphic_pane_g3_cp2

0x51a3,	// (0x00023583) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x51a3,	// (0x00023583) list_single_large_graphic_pane_g4_cp1

0x51bd,	// (0x0002359d) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x51bd,	// (0x0002359d) list_single_large_graphic_pane_t1_cp2

0x6315,	// (0x000246f5) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x6315,	// (0x000246f5) list_single_graphic_heading_pane_g1_cp2

0x62e2,	// (0x000246c2) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x62e2,	// (0x000246c2) list_single_graphic_heading_pane_g4_cp2

0x5161,	// (0x00023541) list_single_graphic_heading_pane_g5_cp2

0x6321,	// (0x00024701) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x6321,	// (0x00024701) list_single_graphic_heading_pane_t1_cp2

0x6337,	// (0x00024717) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x6337,	// (0x00024717) list_single_graphic_heading_pane_t2_cp2

0x62d6,	// (0x000246b6) list_single_2graphic_pane_g1_cp2_ParamLimits

0x62d6,	// (0x000246b6) list_single_2graphic_pane_g1_cp2

0x62e2,	// (0x000246c2) list_single_2graphic_pane_g2_cp2_ParamLimits

0x62e2,	// (0x000246c2) list_single_2graphic_pane_g2_cp2

0x5161,	// (0x00023541) list_single_2graphic_pane_g3_cp2

0x62f3,	// (0x000246d3) list_single_2graphic_pane_g4_cp2_ParamLimits

0x62f3,	// (0x000246d3) list_single_2graphic_pane_g4_cp2

0x62ff,	// (0x000246df) list_single_2graphic_pane_t1_cp2_ParamLimits

0x62ff,	// (0x000246df) list_single_2graphic_pane_t1_cp2

0x418e,	// (0x0002256e) list_highlight_pane_g10_cp1

0x5eb2,	// (0x00024292) list_highlight_pane_g1_cp1

0x5eba,	// (0x0002429a) list_highlight_pane_g2_cp1

0x5ec2,	// (0x000242a2) list_highlight_pane_g3_cp1

0x5eca,	// (0x000242aa) list_highlight_pane_g4_cp1

0x5ed2,	// (0x000242b2) list_highlight_pane_g5_cp1

0x5eda,	// (0x000242ba) list_highlight_pane_g6_cp1

0x5ee2,	// (0x000242c2) list_highlight_pane_g7_cp1

0x5eea,	// (0x000242ca) list_highlight_pane_g8_cp1

0x5ef2,	// (0x000242d2) list_highlight_pane_g9_cp1

0x9fc6,	// (0x000283a6) form_field_slider_pane_t3

0x9fd4,	// (0x000283b4) form_field_slider_pane_t4

0x5de6,	// (0x000241c6) slider_form_pane_ParamLimits

0x5de6,	// (0x000241c6) slider_form_pane

0x4198,	// (0x00022578) control_abbreviations

0x4198,	// (0x00022578) control_conventions

0x4198,	// (0x00022578) control_definitions

0x4198,	// (0x00022578) format_table_attribute

0x6532,	// (0x00024912) bg_popup_preview_window_pane_g9

0x4198,	// (0x00022578) format_table_data2

0x4198,	// (0x00022578) format_table_data3

0x4198,	// (0x00022578) format_table_data_example

0x0008,

0x4198,	// (0x00022578) intro_purpose

0xf8f6,	// (0x0002dcd6) bg_popup_preview_window_pane_g

0x4198,	// (0x00022578) texts_category

0x4198,	// (0x00022578) texts_graphics

0x51d3,	// (0x000235b3) text_digital

0x51e2,	// (0x000235c2) text_primary

0x51f1,	// (0x000235d1) text_primary_small

0x5200,	// (0x000235e0) text_secondary

0x520f,	// (0x000235ef) text_title

0x6a0a,	// (0x00024dea) bg_passive_tab_pane_g1_cp3_srt

0x4ec7,	// (0x000232a7) bg_passive_tab_pane_g2_cp3_srt

0x6a01,	// (0x00024de1) bg_passive_tab_pane_g3_cp3_srt

0x41f4,	// (0x000225d4) bg_active_tab_pane_cp3_srt_ParamLimits

0x41f4,	// (0x000225d4) bg_active_tab_pane_cp3_srt

0x6a13,	// (0x00024df3) tabs_4_active_pane_srt_g1

0xa507,	// (0x000288e7) tabs_4_active_pane_srt_t1_ParamLimits

0xa507,	// (0x000288e7) tabs_4_active_pane_srt_t1

0x6a0a,	// (0x00024dea) bg_active_tab_pane_g1_cp3_copy1

0x4ec7,	// (0x000232a7) bg_active_tab_pane_g2_cp3_copy1

0x6a01,	// (0x00024de1) bg_active_tab_pane_g3_cp3_copy1

0x41f4,	// (0x000225d4) tabs_2_long_active_pane_srt_ParamLimits

0x41f4,	// (0x000225d4) tabs_2_long_active_pane_srt

0x41f4,	// (0x000225d4) tabs_2_long_passive_pane_srt_ParamLimits

0x41f4,	// (0x000225d4) tabs_2_long_passive_pane_srt

0x8d5c,	// (0x0002713c) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8d5c,	// (0x0002713c) bg_passive_tab_pane_cp4_srt

0x6906,	// (0x00024ce6) bg_passive_tab_pane_g1_cp4_srt

0x4ec7,	// (0x000232a7) bg_passive_tab_pane_g2_cp4_srt

0x68fd,	// (0x00024cdd) bg_passive_tab_pane_g3_cp4_srt

0x552a,	// (0x0002390a) bg_active_tab_pane_cp4_srt_ParamLimits

0x552a,	// (0x0002390a) bg_active_tab_pane_cp4_srt

0xa2c2,	// (0x000286a2) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa2c2,	// (0x000286a2) tabs_2_long_active_pane_srt_t1

0x6906,	// (0x00024ce6) bg_active_tab_pane_g1_cp4_srt

0x4ec7,	// (0x000232a7) bg_active_tab_pane_g2_cp4_srt

0x68fd,	// (0x00024cdd) bg_active_tab_pane_g3_cp4_srt

0x41e6,	// (0x000225c6) tabs_3_long_active_pane_srt_ParamLimits

0x41e6,	// (0x000225c6) tabs_3_long_active_pane_srt

0x41e6,	// (0x000225c6) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x41e6,	// (0x000225c6) tabs_3_long_passive_pane_cp_srt

0x41e6,	// (0x000225c6) tabs_3_long_passive_pane_srt_ParamLimits

0x41e6,	// (0x000225c6) tabs_3_long_passive_pane_srt

0x8d5c,	// (0x0002713c) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8d5c,	// (0x0002713c) bg_passive_tab_pane_cp5_srt

0x4f17,	// (0x000232f7) bg_passive_tab_pane_g1_cp5_srt

0x4ec7,	// (0x000232a7) bg_passive_tab_pane_g2_cp5_srt

0x4f0e,	// (0x000232ee) bg_passive_tab_pane_g3_cp5_srt

0x552a,	// (0x0002390a) bg_active_tab_pane_cp5_srt_ParamLimits

0x552a,	// (0x0002390a) bg_active_tab_pane_cp5_srt

0xa2b0,	// (0x00028690) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa2b0,	// (0x00028690) tabs_3_long_active_pane_srt_t1

0x4f17,	// (0x000232f7) bg_active_tab_pane_g1_cp5_srt

0x4ec7,	// (0x000232a7) bg_active_tab_pane_g2_cp5_srt

0x4f0e,	// (0x000232ee) bg_active_tab_pane_g3_cp5_srt

0x68ef,	// (0x00024ccf) navi_text_pane_srt_t1

0x68e7,	// (0x00024cc7) navi_icon_pane_srt_g1

0x531f,	// (0x000236ff) midp_editing_number_pane_srt

0x521e,	// (0x000235fe) midp_ticker_pane_srt

0x5327,	// (0x00023707) midp_ticker_pane_srt_g1

0x532f,	// (0x0002370f) midp_ticker_pane_srt_g2

0x0001,

0xf785,	// (0x0002db65) midp_ticker_pane_srt_g

0x5337,	// (0x00023717) midp_ticker_pane_srt_t1

0x68d8,	// (0x00024cb8) midp_editing_number_pane_t1_copy1

0x8d5c,	// (0x0002713c) listscroll_midp_pane

0x8d5c,	// (0x0002713c) midp_form_pane

0x5226,	// (0x00023606) midp_info_popup_window_ParamLimits

0x5226,	// (0x00023606) midp_info_popup_window

0x48a1,	// (0x00022c81) bg_popup_sub_pane_cp50_ParamLimits

0x48a1,	// (0x00022c81) bg_popup_sub_pane_cp50

0x5b03,	// (0x00023ee3) listscroll_midp_info_pane_ParamLimits

0x5b03,	// (0x00023ee3) listscroll_midp_info_pane

0x5aeb,	// (0x00023ecb) listscroll_form_midp_pane_ParamLimits

0x5aeb,	// (0x00023ecb) listscroll_form_midp_pane

0x5af7,	// (0x00023ed7) scroll_bar_cp050

0x9fae,	// (0x0002838e) list_midp_pane

0x72cf,	// (0x000256af) signal_pane_g2_cp

0x5a1d,	// (0x00023dfd) listscroll_midp_info_pane_t1_ParamLimits

0x5a1d,	// (0x00023dfd) listscroll_midp_info_pane_t1

0x5a35,	// (0x00023e15) listscroll_midp_info_pane_t2_ParamLimits

0x5a35,	// (0x00023e15) listscroll_midp_info_pane_t2

0x5a73,	// (0x00023e53) listscroll_midp_info_pane_t3_ParamLimits

0x5a73,	// (0x00023e53) listscroll_midp_info_pane_t3

0x5aad,	// (0x00023e8d) listscroll_midp_info_pane_t4_ParamLimits

0x5aad,	// (0x00023e8d) listscroll_midp_info_pane_t4

0x0003,

0xf831,	// (0x0002dc11) listscroll_midp_info_pane_t_ParamLimits

0xf831,	// (0x0002dc11) listscroll_midp_info_pane_t

0x4908,	// (0x00022ce8) scroll_pane_cp21

0x59c1,	// (0x00023da1) form_midp_field_choice_group_pane

0x59ca,	// (0x00023daa) form_midp_field_text_pane

0x5a03,	// (0x00023de3) form_midp_field_time_pane

0x5a0b,	// (0x00023deb) form_midp_gauge_slider_pane

0x5a14,	// (0x00023df4) form_midp_gauge_wait_pane

0x4198,	// (0x00022578) form_midp_image_pane

0xe7f4,	// (0x0002cbd4) list_single_midp_pane_ParamLimits

0xe7f4,	// (0x0002cbd4) list_single_midp_pane

0x9f6f,	// (0x0002834f) form_midp_field_text_pane_t1

0x5868,	// (0x00023c48) input_focus_pane_cp050

0x59b0,	// (0x00023d90) list_midp_form_text_pane

0x597f,	// (0x00023d5f) form_midp_field_choice_group_pane_t1

0x598d,	// (0x00023d6d) input_focus_pane_cp051

0x59a1,	// (0x00023d81) list_midp_choice_pane

0x4198,	// (0x00022578) status_idle_pane

0x5963,	// (0x00023d43) form_midp_field_time_pane_t1

0x418e,	// (0x0002256e) wait_anim_pane_g2_copy1

0x5971,	// (0x00023d51) form_midp_field_time_pane_t2

0x0001,

0x5291,	// (0x00023671) aid_navinavi_width_2_pane

0xf82c,	// (0x0002dc0c) form_midp_field_time_pane_t

0x4198,	// (0x00022578) input_focus_pane_cp052

0x4198,	// (0x00022578) bg_input_focus_pane_cp040

0x593f,	// (0x00023d1f) form_midp_gauge_slider_pane_t1

0x594d,	// (0x00023d2d) form_midp_gauge_slider_pane_t2

0x9f53,	// (0x00028333) form_midp_gauge_slider_pane_t3

0x9f61,	// (0x00028341) form_midp_gauge_slider_pane_t4

0x0003,

0xf823,	// (0x0002dc03) form_midp_gauge_slider_pane_t

0x595b,	// (0x00023d3b) form_midp_slider_pane

0x41f4,	// (0x000225d4) bg_input_focus_pane_cp041_ParamLimits

0x41f4,	// (0x000225d4) bg_input_focus_pane_cp041

0x590c,	// (0x00023cec) form_midp_gauge_wait_pane_t1_ParamLimits

0x590c,	// (0x00023cec) form_midp_gauge_wait_pane_t1

0x591e,	// (0x00023cfe) form_midp_gauge_wait_pane_t2_ParamLimits

0x591e,	// (0x00023cfe) form_midp_gauge_wait_pane_t2

0x0001,

0xf81e,	// (0x0002dbfe) form_midp_gauge_wait_pane_t_ParamLimits

0xf81e,	// (0x0002dbfe) form_midp_gauge_wait_pane_t

0x5930,	// (0x00023d10) form_midp_wait_pane_ParamLimits

0x5930,	// (0x00023d10) form_midp_wait_pane

0x58d6,	// (0x00023cb6) form_midp_image_pane_g1

0x58df,	// (0x00023cbf) form_midp_image_pane_t1

0x58ee,	// (0x00023cce) form_midp_image_pane_t2

0x58fd,	// (0x00023cdd) form_midp_image_pane_t3

0x0002,

0xf817,	// (0x0002dbf7) form_midp_image_pane_t

0x58cd,	// (0x00023cad) list_single_midp_pane_g1

0xe7e5,	// (0x0002cbc5) list_single_midp_pane_t1

0x9f23,	// (0x00028303) list_midp_form_item_pane_ParamLimits

0x9f23,	// (0x00028303) list_midp_form_item_pane

0x5239,	// (0x00023619) list_midp_form_item_pane_t1

0x5248,	// (0x00023628) midp_ticker_pane_g1

0x5254,	// (0x00023634) midp_ticker_pane_g2

0x0001,

0xf76b,	// (0x0002db4b) midp_ticker_pane_g

0x5260,	// (0x00023640) midp_ticker_pane_t1

0x6988,	// (0x00024d68) midp_editing_number_pane_t1

0x6966,	// (0x00024d46) midp_editing_number_pane

0x6975,	// (0x00024d55) midp_ticker_pane

0x68c8,	// (0x00024ca8) ai_message_heading_pane

0x4198,	// (0x00022578) bg_popup_window_pane_cp14

0x68d0,	// (0x00024cb0) listscroll_ai_message_pane

0x6852,	// (0x00024c32) ai_message_heading_pane_g1_ParamLimits

0x6852,	// (0x00024c32) ai_message_heading_pane_g1

0x685e,	// (0x00024c3e) ai_message_heading_pane_g2_ParamLimits

0x685e,	// (0x00024c3e) ai_message_heading_pane_g2

0x686a,	// (0x00024c4a) ai_message_heading_pane_g3_ParamLimits

0x686a,	// (0x00024c4a) ai_message_heading_pane_g3

0x6876,	// (0x00024c56) ai_message_heading_pane_g4_ParamLimits

0x6876,	// (0x00024c56) ai_message_heading_pane_g4

0x0003,

0xf958,	// (0x0002dd38) ai_message_heading_pane_g_ParamLimits

0xf958,	// (0x0002dd38) ai_message_heading_pane_g

0x6882,	// (0x00024c62) ai_message_heading_pane_t1_ParamLimits

0x6882,	// (0x00024c62) ai_message_heading_pane_t1

0x689c,	// (0x00024c7c) ai_message_heading_pane_t2_ParamLimits

0x689c,	// (0x00024c7c) ai_message_heading_pane_t2

0x0001,

0xf961,	// (0x0002dd41) ai_message_heading_pane_t_ParamLimits

0xf961,	// (0x0002dd41) ai_message_heading_pane_t

0x68ae,	// (0x00024c8e) bg_popup_heading_pane_cp1_ParamLimits

0x68ae,	// (0x00024c8e) bg_popup_heading_pane_cp1

0x6840,	// (0x00024c20) list_ai_message_pane_ParamLimits

0x6840,	// (0x00024c20) list_ai_message_pane

0x4908,	// (0x00022ce8) scroll_pane_cp10

0x67dc,	// (0x00024bbc) list_ai_message_pane_g1

0x67e4,	// (0x00024bc4) list_ai_message_pane_g2

0x0001,

0xf935,	// (0x0002dd15) list_ai_message_pane_g

0x67ec,	// (0x00024bcc) list_ai_message_pane_t1_ParamLimits

0x67ec,	// (0x00024bcc) list_ai_message_pane_t1

0x6801,	// (0x00024be1) list_ai_message_pane_t2_ParamLimits

0x6801,	// (0x00024be1) list_ai_message_pane_t2

0x6816,	// (0x00024bf6) list_ai_message_pane_t3_ParamLimits

0x6816,	// (0x00024bf6) list_ai_message_pane_t3

0x682b,	// (0x00024c0b) list_ai_message_pane_t4_ParamLimits

0x682b,	// (0x00024c0b) list_ai_message_pane_t4

0x0003,

0xf93a,	// (0x0002dd1a) list_ai_message_pane_t_ParamLimits

0xf93a,	// (0x0002dd1a) list_ai_message_pane_t

0xa24a,	// (0x0002862a) cell_ai_soft_ind_pane_ParamLimits

0xa24a,	// (0x0002862a) cell_ai_soft_ind_pane

0x5272,	// (0x00023652) cell_ai_soft_ind_pane_g1_ParamLimits

0x5272,	// (0x00023652) cell_ai_soft_ind_pane_g1

0x4198,	// (0x00022578) grid_highlight_cp1

0x527f,	// (0x0002365f) text_secondary_cp56_ParamLimits

0x527f,	// (0x0002365f) text_secondary_cp56

0x67b1,	// (0x00024b91) example_general_pane_ParamLimits

0x67b1,	// (0x00024b91) example_general_pane

0x67bd,	// (0x00024b9d) example_parent_pane_g1_ParamLimits

0x67bd,	// (0x00024b9d) example_parent_pane_g1

0x67c9,	// (0x00024ba9) example_parent_pane_t1_ParamLimits

0x67c9,	// (0x00024ba9) example_parent_pane_t1

0x9897,	// (0x00027c77) popup_preview_text_window_ParamLimits

0x9897,	// (0x00027c77) popup_preview_text_window

0x514d,	// (0x0002352d) list_single_pane_cp2_g4

0x43c3,	// (0x000227a3) bg_popup_preview_window_pane_ParamLimits

0x43c3,	// (0x000227a3) bg_popup_preview_window_pane

0x653a,	// (0x0002491a) popup_preview_text_window_t1_ParamLimits

0x653a,	// (0x0002491a) popup_preview_text_window_t1

0x6558,	// (0x00024938) popup_preview_text_window_t2_ParamLimits

0x6558,	// (0x00024938) popup_preview_text_window_t2

0x65a1,	// (0x00024981) popup_preview_text_window_t3_ParamLimits

0x65a1,	// (0x00024981) popup_preview_text_window_t3

0x65e6,	// (0x000249c6) popup_preview_text_window_t4_ParamLimits

0x65e6,	// (0x000249c6) popup_preview_text_window_t4

0x0004,

0xf909,	// (0x0002dce9) popup_preview_text_window_t_ParamLimits

0xf909,	// (0x0002dce9) popup_preview_text_window_t

0x6664,	// (0x00024a44) scroll_pane_cp11

0x5778,	// (0x00023b58) bg_popup_preview_window_pane_g1

0x64fa,	// (0x000248da) bg_popup_preview_window_pane_g2

0x6502,	// (0x000248e2) bg_popup_preview_window_pane_g3

0x650a,	// (0x000248ea) bg_popup_preview_window_pane_g4

0x6512,	// (0x000248f2) bg_popup_preview_window_pane_g5

0x651a,	// (0x000248fa) bg_popup_preview_window_pane_g6

0x6522,	// (0x00024902) bg_popup_preview_window_pane_g7

0x652a,	// (0x0002490a) bg_popup_preview_window_pane_g8

0x8596,	// (0x00026976) aid_popup_width_pane

0x9875,	// (0x00027c55) popup_midp_note_alarm_window_ParamLimits

0x9875,	// (0x00027c55) popup_midp_note_alarm_window

0x47dd,	// (0x00022bbd) data_form_pane_ParamLimits

0xe54c,	// (0x0002c92c) form_field_data_pane_g1

0xe556,	// (0x0002c936) form_field_data_pane_t1_ParamLimits

0x47e9,	// (0x00022bc9) input_focus_pane_ParamLimits

0x47f7,	// (0x00022bd7) data_form_wide_pane_ParamLimits

0xe570,	// (0x0002c950) form_field_data_wide_pane_g1

0xe57c,	// (0x0002c95c) form_field_data_wide_pane_t1_ParamLimits

0x4564,	// (0x00022944) input_focus_pane_cp6_ParamLimits

0x8d21,	// (0x00027101) input_popup_find_pane_g1_ParamLimits

0x8d21,	// (0x00027101) input_popup_find_pane_g1

0x8e7a,	// (0x0002725a) aid_navi_side_left_pane

0x8e8f,	// (0x0002726f) aid_navi_side_right_pane

0x5f8f,	// (0x0002436f) bg_popup_window_pane_cp30_ParamLimits

0x5f8f,	// (0x0002436f) bg_popup_window_pane_cp30

0x6009,	// (0x000243e9) popup_midp_note_alarm_window_g1_ParamLimits

0x6009,	// (0x000243e9) popup_midp_note_alarm_window_g1

0x6039,	// (0x00024419) popup_midp_note_alarm_window_t1_ParamLimits

0x6039,	// (0x00024419) popup_midp_note_alarm_window_t1

0x6104,	// (0x000244e4) popup_midp_note_alarm_window_t2_ParamLimits

0x6104,	// (0x000244e4) popup_midp_note_alarm_window_t2

0x61b2,	// (0x00024592) popup_midp_note_alarm_window_t3_ParamLimits

0x61b2,	// (0x00024592) popup_midp_note_alarm_window_t3

0x61da,	// (0x000245ba) popup_midp_note_alarm_window_t4_ParamLimits

0x61da,	// (0x000245ba) popup_midp_note_alarm_window_t4

0x61fa,	// (0x000245da) popup_midp_note_alarm_window_t5_ParamLimits

0x61fa,	// (0x000245da) popup_midp_note_alarm_window_t5

0x000a,

0xf8a6,	// (0x0002dc86) popup_midp_note_alarm_window_t_ParamLimits

0xf8a6,	// (0x0002dc86) popup_midp_note_alarm_window_t

0x62a6,	// (0x00024686) wait_bar_pane_cp1_ParamLimits

0x62a6,	// (0x00024686) wait_bar_pane_cp1

0x4198,	// (0x00022578) wait_anim_pane_copy1

0x4198,	// (0x00022578) wait_border_pane_copy1

0x5ca7,	// (0x00024087) wait_border_pane_g1_copy1

0xe596,	// (0x0002c976) form_field_popup_pane_g1

0xe59e,	// (0x0002c97e) form_field_popup_pane_t1_ParamLimits

0x47e9,	// (0x00022bc9) input_focus_pane_cp7_ParamLimits

0x4823,	// (0x00022c03) list_form_pane_ParamLimits

0xe5b8,	// (0x0002c998) form_field_popup_wide_pane_g1

0xe5c0,	// (0x0002c9a0) form_field_popup_wide_pane_t1_ParamLimits

0x47e9,	// (0x00022bc9) input_focus_pane_cp8_ParamLimits

0x482f,	// (0x00022c0f) list_form_wide_pane_ParamLimits

0x6a3a,	// (0x00024e1a) aid_size_cell_graphic_pane

0xe645,	// (0x0002ca25) data_form_pane_t1_ParamLimits

0xe843,	// (0x0002cc23) data_form_wide_pane_t1_ParamLimits

0x9ae1,	// (0x00027ec1) bg_status_flat_pane

0x898f,	// (0x00026d6f) title_pane_t1_ParamLimits

0x41ae,	// (0x0002258e) title_pane_t2_ParamLimits

0x41d4,	// (0x000225b4) title_pane_t3_ParamLimits

0xf56f,	// (0x0002d94f) title_pane_t_ParamLimits

0x4c9f,	// (0x0002307f) level_1_signal_ParamLimits

0x4cac,	// (0x0002308c) level_2_signal_ParamLimits

0x4cb9,	// (0x00023099) level_3_signal_ParamLimits

0x4cc6,	// (0x000230a6) level_4_signal_ParamLimits

0x4cd3,	// (0x000230b3) level_5_signal_ParamLimits

0x4ce0,	// (0x000230c0) level_6_signal_ParamLimits

0x4ced,	// (0x000230cd) level_7_signal_ParamLimits

0x4c9f,	// (0x0002307f) level_1_battery_ParamLimits

0x4cac,	// (0x0002308c) level_2_battery_ParamLimits

0x4cb9,	// (0x00023099) level_3_battery_ParamLimits

0x4cc6,	// (0x000230a6) level_4_battery_ParamLimits

0x4cd3,	// (0x000230b3) level_5_battery_ParamLimits

0x4ce0,	// (0x000230c0) level_6_battery_ParamLimits

0x4ced,	// (0x000230cd) level_7_battery_ParamLimits

0x5eb2,	// (0x00024292) bg_status_flat_pane_g1

0x5eba,	// (0x0002429a) bg_status_flat_pane_g2

0x5ec2,	// (0x000242a2) bg_status_flat_pane_g3

0x5eca,	// (0x000242aa) bg_status_flat_pane_g4

0x5ed2,	// (0x000242b2) bg_status_flat_pane_g5

0x5eda,	// (0x000242ba) bg_status_flat_pane_g6

0x5ee2,	// (0x000242c2) bg_status_flat_pane_g7

0x89ff,	// (0x00026ddf) tabs_3_active_pane_t1_ParamLimits

0x89ff,	// (0x00026ddf) tabs_3_passive_pane_t1_ParamLimits

0x8a19,	// (0x00026df9) tabs_4_active_pane_t1_ParamLimits

0x8a19,	// (0x00026df9) tabs_4_1_passive_pane_t1_ParamLimits

0x8d37,	// (0x00027117) tabs_2_active_pane_t1_ParamLimits

0x8d37,	// (0x00027117) tabs_2_passive_pane_t1_ParamLimits

0x552a,	// (0x0002390a) bg_active_tab_pane_cp4_ParamLimits

0x8d49,	// (0x00027129) tabs_2_long_active_pane_t1_ParamLimits

0x8d5c,	// (0x0002713c) bg_passive_tab_pane_cp4_ParamLimits

0x9dde,	// (0x000281be) list_single_midp_graphic_pane_t1_ParamLimits

0x552a,	// (0x0002390a) bg_active_tab_pane_cp5_ParamLimits

0x8d68,	// (0x00027148) tabs_3_long_active_pane_t1_ParamLimits

0x8d5c,	// (0x0002713c) bg_passive_tab_pane_cp5_ParamLimits

0x9dde,	// (0x000281be) list_single_midp_graphic_pane_t1

0x9ae1,	// (0x00027ec1) bg_status_flat_pane_ParamLimits

0x564b,	// (0x00023a2b) indicator_pane_cp2_ParamLimits

0x564b,	// (0x00023a2b) indicator_pane_cp2

0x9c25,	// (0x00028005) navi_pane_srt_ParamLimits

0x9c25,	// (0x00028005) navi_pane_srt

0x5673,	// (0x00023a53) popup_clock_digital_analogue_window_cp1

0x4238,	// (0x00022618) indicator_pane_t1

0x521e,	// (0x000235fe) copy_highlight_pane

0x521e,	// (0x000235fe) cursor_graphics_pane

0x521e,	// (0x000235fe) graphic_within_text_pane

0x521e,	// (0x000235fe) link_highlight_pane

0x6627,	// (0x00024a07) popup_preview_text_window_t5_ParamLimits

0x6627,	// (0x00024a07) popup_preview_text_window_t5

0x5299,	// (0x00023679) cursor_digital_pane

0x5299,	// (0x00023679) cursor_primary_pane

0x52aa,	// (0x0002368a) cursor_primary_small_pane

0x52b2,	// (0x00023692) cursor_secondary_pane

0x52ba,	// (0x0002369a) cursor_title_pane

0x5299,	// (0x00023679) link_highlight_digital_pane

0x52a1,	// (0x00023681) link_highlight_primary_pane

0x52aa,	// (0x0002368a) link_highlight_primary_small_pane

0x52b2,	// (0x00023692) link_highlight_secondary_pane

0x52ba,	// (0x0002369a) link_highlight_title_pane

0x5299,	// (0x00023679) copy_highlight_digital_pane

0x5299,	// (0x00023679) copy_highlight_primary_pane

0x52aa,	// (0x0002368a) copy_highlight_primary_small_pane

0x52b2,	// (0x00023692) copy_highlight_secondary_pane

0x52ba,	// (0x0002369a) copy_highlight_title_pane

0x52b2,	// (0x00023692) graphic_text_digital_pane

0x5f32,	// (0x00024312) graphic_text_primary_pane

0x5f3b,	// (0x0002431b) graphic_text_primary_small_pane

0x52aa,	// (0x0002368a) graphic_text_secondary_pane

0x5299,	// (0x00023679) graphic_text_title_pane

0x9390,	// (0x00027770) cursor_primary_pane_g1

0x5f24,	// (0x00024304) cursor_text_primary_t1

0x9ff6,	// (0x000283d6) cursor_primary_small_pane_g1

0x5f16,	// (0x000242f6) cursor_text_primary_small_t1

0x9fec,	// (0x000283cc) cursor_primary_small_pane_g1_copy1

0x5f08,	// (0x000242e8) cursor_text_primary_small_t1_copy1

0x5efa,	// (0x000242da) cursor_text_title_t1

0x9fe2,	// (0x000283c2) cursor_title_pane_g1

0x9390,	// (0x00027770) cursor_digital_pane_g1

0x52c2,	// (0x000236a2) cursor_text_digital_t1

0x5e9b,	// (0x0002427b) link_highlight_primary_pane_g1

0x5ea3,	// (0x00024283) link_highlight_primary_pane_t1

0x52d0,	// (0x000236b0) link_highlight_primary_small_pane_g1

0x52d8,	// (0x000236b8) link_highlight_primary_small_pane_t1

0x52d0,	// (0x000236b0) link_highlight_secondary_pane_g1

0x52e7,	// (0x000236c7) link_highlight_secondary_pane_t1

0x5e0f,	// (0x000241ef) link_highlight_title_pane_g1

0x5e17,	// (0x000241f7) link_highlight_title_pane_t1

0x5df8,	// (0x000241d8) link_highlight_digital_pane_g1

0x5e00,	// (0x000241e0) link_highlight_digital_pane_t1

0x5cec,	// (0x000240cc) copy_highlight_primary_pane_g1

0x5cf4,	// (0x000240d4) copy_highlight_primary_pane_t1

0x5cc6,	// (0x000240a6) copy_highlight_primary_small_pane_g1

0x5cdd,	// (0x000240bd) copy_highlight_primary_small_pane_t1

0x52f6,	// (0x000236d6) copy_highlight_secondary_pane_g1

0x52fe,	// (0x000236de) copy_highlight_secondary_pane_t1

0x5cc6,	// (0x000240a6) copy_highlight_title_pane_g1

0x5cce,	// (0x000240ae) copy_highlight_title_pane_t1

0x5cec,	// (0x000240cc) copy_highlight_digital_pane_g1

0x6bc4,	// (0x00024fa4) copy_highlight_digital_pane_t1

0x6b18,	// (0x00024ef8) graphic_text_primary_pane_g1

0x6ba8,	// (0x00024f88) graphic_text_primary_pane_t1

0x6bb6,	// (0x00024f96) graphic_text_primary_pane_t2

0x0001,

0xf9d5,	// (0x0002ddb5) graphic_text_primary_pane_t

0x6b84,	// (0x00024f64) graphic_text_primary_small_pane_g1

0x6b8c,	// (0x00024f6c) graphic_text_primary_small_pane_t1

0x6b9a,	// (0x00024f7a) graphic_text_primary_small_pane_t2

0x0001,

0xf9d0,	// (0x0002ddb0) graphic_text_primary_small_pane_t

0x6b60,	// (0x00024f40) graphic_text_secondary_pane_g1

0x6b68,	// (0x00024f48) graphic_text_secondary_pane_t1

0x6b76,	// (0x00024f56) graphic_text_secondary_pane_t2

0x0001,

0xf9cb,	// (0x0002ddab) graphic_text_secondary_pane_t

0x6b3c,	// (0x00024f1c) graphic_text_title_pane_g1

0x6b44,	// (0x00024f24) graphic_text_title_pane_t1

0x6b52,	// (0x00024f32) graphic_text_title_pane_t2

0x0001,

0xf9c6,	// (0x0002dda6) graphic_text_title_pane_t

0x6b18,	// (0x00024ef8) graphic_text_digital_pane_g1

0x6b20,	// (0x00024f00) graphic_text_digital_pane_t1

0x6b2e,	// (0x00024f0e) graphic_text_digital_pane_t2

0x0001,

0xf9c1,	// (0x0002dda1) graphic_text_digital_pane_t

0x41f4,	// (0x000225d4) navi_icon_pane_srt_ParamLimits

0x41f4,	// (0x000225d4) navi_icon_pane_srt

0x4198,	// (0x00022578) navi_midp_pane_srt

0x4198,	// (0x00022578) navi_navi_pane_srt

0x41f4,	// (0x000225d4) navi_text_pane_srt_ParamLimits

0x41f4,	// (0x000225d4) navi_text_pane_srt

0x6ae3,	// (0x00024ec3) navi_navi_icon_text_pane_srt

0x6afd,	// (0x00024edd) navi_navi_pane_srt_g1_ParamLimits

0x6afd,	// (0x00024edd) navi_navi_pane_srt_g1

0x6aeb,	// (0x00024ecb) navi_navi_pane_srt_g2_ParamLimits

0x6aeb,	// (0x00024ecb) navi_navi_pane_srt_g2

0x0001,

0xf9bc,	// (0x0002dd9c) navi_navi_pane_srt_g_ParamLimits

0xf9bc,	// (0x0002dd9c) navi_navi_pane_srt_g

0x6b0f,	// (0x00024eef) navi_navi_tabs_pane_srt

0x6ae3,	// (0x00024ec3) navi_navi_text_pane_srt

0x6ae3,	// (0x00024ec3) navi_navi_volume_pane_srt

0x6ad4,	// (0x00024eb4) navi_navi_text_pane_srt_t1

0xa62b,	// (0x00028a0b) navi_navi_volume_pane_srt_g1

0xa633,	// (0x00028a13) volume_small_pane_srt_ParamLimits

0xa633,	// (0x00028a13) volume_small_pane_srt

0x939a,	// (0x0002777a) volume_small_pane_srt_g1_ParamLimits

0x939a,	// (0x0002777a) volume_small_pane_srt_g1

0x93aa,	// (0x0002778a) volume_small_pane_srt_g2_ParamLimits

0x93aa,	// (0x0002778a) volume_small_pane_srt_g2

0x93bb,	// (0x0002779b) volume_small_pane_srt_g3_ParamLimits

0x93bb,	// (0x0002779b) volume_small_pane_srt_g3

0x93cc,	// (0x000277ac) volume_small_pane_srt_g4_ParamLimits

0x93cc,	// (0x000277ac) volume_small_pane_srt_g4

0x93dd,	// (0x000277bd) volume_small_pane_srt_g5_ParamLimits

0x93dd,	// (0x000277bd) volume_small_pane_srt_g5

0x93ee,	// (0x000277ce) volume_small_pane_srt_g6_ParamLimits

0x93ee,	// (0x000277ce) volume_small_pane_srt_g6

0x93ff,	// (0x000277df) volume_small_pane_srt_g7_ParamLimits

0x93ff,	// (0x000277df) volume_small_pane_srt_g7

0x9410,	// (0x000277f0) volume_small_pane_srt_g8_ParamLimits

0x9410,	// (0x000277f0) volume_small_pane_srt_g8

0x9421,	// (0x00027801) volume_small_pane_srt_g9_ParamLimits

0x9421,	// (0x00027801) volume_small_pane_srt_g9

0x9432,	// (0x00027812) volume_small_pane_srt_g10_ParamLimits

0x9432,	// (0x00027812) volume_small_pane_srt_g10

0x0009,

0xf770,	// (0x0002db50) volume_small_pane_srt_g_ParamLimits

0xf770,	// (0x0002db50) volume_small_pane_srt_g

0x446c,	// (0x0002284c) query_popup_data_pane_cp2

0x6aba,	// (0x00024e9a) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6aba,	// (0x00024e9a) navi_navi_icon_text_pane_srt_t1

0x5f32,	// (0x00024312) navi_tabs_2_long_pane_srt

0x5f32,	// (0x00024312) navi_tabs_2_pane_srt

0x5f32,	// (0x00024312) navi_tabs_3_long_pane_srt

0x5f32,	// (0x00024312) navi_tabs_3_pane_srt

0x5f32,	// (0x00024312) navi_tabs_4_pane_srt

0xa60b,	// (0x000289eb) tabs_2_active_pane_srt_ParamLimits

0xa60b,	// (0x000289eb) tabs_2_active_pane_srt

0xa61b,	// (0x000289fb) tabs_2_passive_pane_srt_ParamLimits

0xa61b,	// (0x000289fb) tabs_2_passive_pane_srt

0x4940,	// (0x00022d20) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4940,	// (0x00022d20) bg_passive_tab_pane_cp1_srt

0x6aa1,	// (0x00024e81) bg_passive_tab_pane_g1_cp1_srt

0x4ec7,	// (0x000232a7) bg_passive_tab_pane_g2_cp1_srt

0x6a98,	// (0x00024e78) bg_passive_tab_pane_g3_cp1_srt

0x41f4,	// (0x000225d4) bg_active_tab_pane_cp1_srt_ParamLimits

0x41f4,	// (0x000225d4) bg_active_tab_pane_cp1_srt

0x6aaa,	// (0x00024e8a) tabs_2_active_pane_srt_g1

0xa5f9,	// (0x000289d9) tabs_2_active_pane_srt_t1_ParamLimits

0xa5f9,	// (0x000289d9) tabs_2_active_pane_srt_t1

0x6aa1,	// (0x00024e81) bg_active_tab_pane_g1_cp1_srt

0x4ec7,	// (0x000232a7) bg_active_tab_pane_g2_cp1_srt

0x6a98,	// (0x00024e78) bg_active_tab_pane_g3_cp1_srt

0xa5c6,	// (0x000289a6) tabs_3_active_pane_srt_ParamLimits

0xa5c6,	// (0x000289a6) tabs_3_active_pane_srt

0xa5d7,	// (0x000289b7) tabs_3_passive_pane_cp_srt_ParamLimits

0xa5d7,	// (0x000289b7) tabs_3_passive_pane_cp_srt

0xa5e8,	// (0x000289c8) tabs_3_passive_pane_srt_ParamLimits

0xa5e8,	// (0x000289c8) tabs_3_passive_pane_srt

0x4940,	// (0x00022d20) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4940,	// (0x00022d20) bg_passive_tab_pane_cp2_srt

0x5316,	// (0x000236f6) bg_passive_tab_pane_g1_cp2_srt

0x4ec7,	// (0x000232a7) bg_passive_tab_pane_g2_cp2_srt

0x530d,	// (0x000236ed) bg_passive_tab_pane_g3_cp2_srt

0x41f4,	// (0x000225d4) bg_active_tab_pane_cp2_srt_ParamLimits

0x41f4,	// (0x000225d4) bg_active_tab_pane_cp2_srt

0x6a90,	// (0x00024e70) tabs_3_active_pane_srt_g1

0xa5b4,	// (0x00028994) tabs_3_active_pane_srt_t1_ParamLimits

0xa5b4,	// (0x00028994) tabs_3_active_pane_srt_t1

0x5316,	// (0x000236f6) bg_active_tab_pane_g1_cp2_srt

0x4ec7,	// (0x000232a7) bg_active_tab_pane_g2_cp2_srt

0x530d,	// (0x000236ed) bg_active_tab_pane_g3_cp2_srt

0xa56c,	// (0x0002894c) tabs_4_active_pane_srt_ParamLimits

0xa56c,	// (0x0002894c) tabs_4_active_pane_srt

0xa57e,	// (0x0002895e) tabs_4_passive_pane_cp2_srt_ParamLimits

0xa57e,	// (0x0002895e) tabs_4_passive_pane_cp2_srt

0x543a,	// (0x0002381a) aid_size_cell_toolbar

0x8d5c,	// (0x0002713c) main_idle_act_pane_ParamLimits

0x5504,	// (0x000238e4) popup_large_graphic_colour_window_ParamLimits

0x99e9,	// (0x00027dc9) popup_toolbar_window_ParamLimits

0x99e9,	// (0x00027dc9) popup_toolbar_window

0x6997,	// (0x00024d77) list_single_graphic_2heading_pane_ParamLimits

0x6997,	// (0x00024d77) list_single_graphic_2heading_pane

0x4aea,	// (0x00022eca) aid_size_cell_apps_grid_lsc_pane

0x4afc,	// (0x00022edc) aid_size_cell_apps_grid_prt_pane

0x4940,	// (0x00022d20) bg_wml_button_pane_cp1_ParamLimits

0x4940,	// (0x00022d20) bg_wml_button_pane_cp1

0x9f6f,	// (0x0002834f) form_midp_field_text_pane_t1_ParamLimits

0x5868,	// (0x00023c48) input_focus_pane_cp050_ParamLimits

0x59b0,	// (0x00023d90) list_midp_form_text_pane_ParamLimits

0x598d,	// (0x00023d6d) input_focus_pane_cp051_ParamLimits

0x59a1,	// (0x00023d81) list_midp_choice_pane_ParamLimits

0x9ebd,	// (0x0002829d) list_single_2graphic_pane_cp3_ParamLimits

0x9ebd,	// (0x0002829d) list_single_2graphic_pane_cp3

0x9ee9,	// (0x000282c9) list_single_midp_graphic_pane_ParamLimits

0x9ee9,	// (0x000282c9) list_single_midp_graphic_pane

0x8504,	// (0x000268e4) list_single_graphic_2heading_pane_g1_ParamLimits

0x8504,	// (0x000268e4) list_single_graphic_2heading_pane_g1

0x8510,	// (0x000268f0) list_single_graphic_2heading_pane_g4_ParamLimits

0x8510,	// (0x000268f0) list_single_graphic_2heading_pane_g4

0x851c,	// (0x000268fc) list_single_graphic_2heading_pane_g5_ParamLimits

0x851c,	// (0x000268fc) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c3,	// (0x0002dba3) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c3,	// (0x0002dba3) list_single_graphic_2heading_pane_g

0x8528,	// (0x00026908) list_single_graphic_2heading_pane_t1_ParamLimits

0x8528,	// (0x00026908) list_single_graphic_2heading_pane_t1

0x853c,	// (0x0002691c) list_single_graphic_2heading_pane_t2_ParamLimits

0x853c,	// (0x0002691c) list_single_graphic_2heading_pane_t2

0x8556,	// (0x00026936) list_single_graphic_2heading_pane_t3_ParamLimits

0x8556,	// (0x00026936) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ca,	// (0x0002dbaa) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ca,	// (0x0002dbaa) list_single_graphic_2heading_pane_t

0x56b6,	// (0x00023a96) bg_popup_sub_pane_cp2

0x56e0,	// (0x00023ac0) grid_toobar_pane

0x9d4f,	// (0x0002812f) cell_toolbar_pane_ParamLimits

0x9d4f,	// (0x0002812f) cell_toolbar_pane

0x571c,	// (0x00023afc) cell_toolbar_pane_g1_ParamLimits

0x571c,	// (0x00023afc) cell_toolbar_pane_g1

0x5730,	// (0x00023b10) cell_toolbar_pane_g2_ParamLimits

0x5730,	// (0x00023b10) cell_toolbar_pane_g2

0x0001,

0xf7d8,	// (0x0002dbb8) cell_toolbar_pane_g_ParamLimits

0xf7d8,	// (0x0002dbb8) cell_toolbar_pane_g

0x5752,	// (0x00023b32) grid_highlight_pane_cp2_ParamLimits

0x5752,	// (0x00023b32) grid_highlight_pane_cp2

0x576c,	// (0x00023b4c) toolbar_button_pane

0x5778,	// (0x00023b58) toolbar_button_pane_g1

0x5788,	// (0x00023b68) toolbar_button_pane_g2

0x5780,	// (0x00023b60) toolbar_button_pane_g3

0x5798,	// (0x00023b78) toolbar_button_pane_g4

0x5790,	// (0x00023b70) toolbar_button_pane_g5

0x57a0,	// (0x00023b80) toolbar_button_pane_g6

0x57a8,	// (0x00023b88) toolbar_button_pane_g7

0x57b8,	// (0x00023b98) toolbar_button_pane_g8

0x57b0,	// (0x00023b90) toolbar_button_pane_g9

0x0009,

0xf7dd,	// (0x0002dbbd) toolbar_button_pane_g

0x9d87,	// (0x00028167) list_single_2graphic_pane_g1_cp3_ParamLimits

0x9d87,	// (0x00028167) list_single_2graphic_pane_g1_cp3

0x9d93,	// (0x00028173) list_single_2graphic_pane_g2_cp3_ParamLimits

0x9d93,	// (0x00028173) list_single_2graphic_pane_g2_cp3

0x9da4,	// (0x00028184) list_single_2graphic_pane_g3_cp3

0x9dac,	// (0x0002818c) list_single_2graphic_pane_g4_cp3_ParamLimits

0x9dac,	// (0x0002818c) list_single_2graphic_pane_g4_cp3

0x9db8,	// (0x00028198) list_single_2graphic_pane_t1_cp3_ParamLimits

0x9db8,	// (0x00028198) list_single_2graphic_pane_t1_cp3

0x9dd2,	// (0x000281b2) list_single_midp_graphic_pane_g2_ParamLimits

0x9dd2,	// (0x000281b2) list_single_midp_graphic_pane_g2

0x5442,	// (0x00023822) aid_zoom_text_primary

0xe779,	// (0x0002cb59) aid_zoom_text_secondary

0x53ca,	// (0x000237aa) status_small_pane_g7_ParamLimits

0x53ca,	// (0x000237aa) status_small_pane_g7

0x53ed,	// (0x000237cd) status_small_pane_t1_ParamLimits

0x8972,	// (0x00026d52) title_pane_g2

0x0003,

0xf566,	// (0x0002d946) title_pane_g

0x8bcc,	// (0x00026fac) aid_size_cell_colour_1_pane_ParamLimits

0x8bcc,	// (0x00026fac) aid_size_cell_colour_1_pane

0x8be0,	// (0x00026fc0) aid_size_cell_colour_2_pane_ParamLimits

0x8be0,	// (0x00026fc0) aid_size_cell_colour_2_pane

0x8bf4,	// (0x00026fd4) aid_size_cell_colour_3_pane_ParamLimits

0x8bf4,	// (0x00026fd4) aid_size_cell_colour_3_pane

0x8c08,	// (0x00026fe8) aid_size_cell_colour_4_pane_ParamLimits

0x8c08,	// (0x00026fe8) aid_size_cell_colour_4_pane

0x8db6,	// (0x00027196) title_pane_stacon_g1_ParamLimits

0x8db6,	// (0x00027196) title_pane_stacon_g1

0x5d4b,	// (0x0002412b) popup_note_wait_window_g3_ParamLimits

0x5d4b,	// (0x0002412b) popup_note_wait_window_g3

0x5dc1,	// (0x000241a1) popup_note_wait_window_t5_ParamLimits

0x5dc1,	// (0x000241a1) popup_note_wait_window_t5

0x4198,	// (0x00022578) main_feb_china_hwr_fs_writing_pane

0x9612,	// (0x000279f2) popup_feb_china_hwr_fs_window_ParamLimits

0x9612,	// (0x000279f2) popup_feb_china_hwr_fs_window

0x9df4,	// (0x000281d4) aid_size_cell_hwr_fs_ParamLimits

0x9df4,	// (0x000281d4) aid_size_cell_hwr_fs

0x5868,	// (0x00023c48) bg_popup_sub_pane_cp3_ParamLimits

0x5868,	// (0x00023c48) bg_popup_sub_pane_cp3

0x9e09,	// (0x000281e9) grid_hwr_fs_pane_ParamLimits

0x9e09,	// (0x000281e9) grid_hwr_fs_pane

0x9e21,	// (0x00028201) linegrid_hwr_fs_pane_ParamLimits

0x9e21,	// (0x00028201) linegrid_hwr_fs_pane

0x9e31,	// (0x00028211) cell_hwr_fs_pane_ParamLimits

0x9e31,	// (0x00028211) cell_hwr_fs_pane

0x5874,	// (0x00023c54) linegrid_hwr_fs_pane_g1_ParamLimits

0x5874,	// (0x00023c54) linegrid_hwr_fs_pane_g1

0x9e53,	// (0x00028233) linegrid_hwr_fs_pane_g2_ParamLimits

0x9e53,	// (0x00028233) linegrid_hwr_fs_pane_g2

0x5880,	// (0x00023c60) linegrid_hwr_fs_pane_g3_ParamLimits

0x5880,	// (0x00023c60) linegrid_hwr_fs_pane_g3

0x9e65,	// (0x00028245) linegrid_hwr_fs_pane_g4_ParamLimits

0x9e65,	// (0x00028245) linegrid_hwr_fs_pane_g4

0x9e7f,	// (0x0002825f) linegrid_hwr_fs_pane_g5_ParamLimits

0x9e7f,	// (0x0002825f) linegrid_hwr_fs_pane_g5

0x0004,

0xf803,	// (0x0002dbe3) linegrid_hwr_fs_pane_g_ParamLimits

0xf803,	// (0x0002dbe3) linegrid_hwr_fs_pane_g

0x588c,	// (0x00023c6c) cell_hwr_fs_pane_g1_ParamLimits

0x588c,	// (0x00023c6c) cell_hwr_fs_pane_g1

0x5684,	// (0x00023a64) cell_hwr_fs_pane_g2_ParamLimits

0x5684,	// (0x00023a64) cell_hwr_fs_pane_g2

0x9e95,	// (0x00028275) cell_hwr_fs_pane_g3_ParamLimits

0x9e95,	// (0x00028275) cell_hwr_fs_pane_g3

0x9ea2,	// (0x00028282) cell_hwr_fs_pane_g4_ParamLimits

0x9ea2,	// (0x00028282) cell_hwr_fs_pane_g4

0x0003,

0xf80e,	// (0x0002dbee) cell_hwr_fs_pane_g_ParamLimits

0xf80e,	// (0x0002dbee) cell_hwr_fs_pane_g

0x9eaf,	// (0x0002828f) cell_hwr_fs_pane_t1

0x4198,	// (0x00022578) grid_highlight_pane_cp6

0x4198,	// (0x00022578) main_idle_act2_pane

0x48ef,	// (0x00022ccf) aid_inside_area_popup_secondary

0xa16f,	// (0x0002854f) aid_inside_area_window_primary_ParamLimits

0xa16f,	// (0x0002854f) aid_inside_area_window_primary

0x6bd3,	// (0x00024fb3) ai2_news_ticker_pane

0x6bdb,	// (0x00024fbb) aid_size_cell_ai1_link_ParamLimits

0x6bdb,	// (0x00024fbb) aid_size_cell_ai1_link

0x6bf5,	// (0x00024fd5) popup_ai2_data_window_ParamLimits

0x6bf5,	// (0x00024fd5) popup_ai2_data_window

0x6c09,	// (0x00024fe9) popup_ai2_link_window_ParamLimits

0x6c09,	// (0x00024fe9) popup_ai2_link_window

0x5868,	// (0x00023c48) bg_popup_sub_pane_cp4_ParamLimits

0x5868,	// (0x00023c48) bg_popup_sub_pane_cp4

0x6c1d,	// (0x00024ffd) grid_ai2_link_pane_ParamLimits

0x6c1d,	// (0x00024ffd) grid_ai2_link_pane

0x6c34,	// (0x00025014) popup_ai2_link_window_g1_ParamLimits

0x6c34,	// (0x00025014) popup_ai2_link_window_g1

0x6c40,	// (0x00025020) popup_ai2_link_window_g2_ParamLimits

0x6c40,	// (0x00025020) popup_ai2_link_window_g2

0x0001,

0xf9da,	// (0x0002ddba) popup_ai2_link_window_g_ParamLimits

0xf9da,	// (0x0002ddba) popup_ai2_link_window_g

0x6c4f,	// (0x0002502f) ai2_mp_button_pane

0x6c57,	// (0x00025037) ai2_mp_volume_pane

0x598d,	// (0x00023d6d) bg_popup_sub_pane_cp5_ParamLimits

0x598d,	// (0x00023d6d) bg_popup_sub_pane_cp5

0x6c5f,	// (0x0002503f) heading_ai2_gene_pane_ParamLimits

0x6c5f,	// (0x0002503f) heading_ai2_gene_pane

0x6c6b,	// (0x0002504b) list_ai2_gene_pane_ParamLimits

0x6c6b,	// (0x0002504b) list_ai2_gene_pane

0x6cb3,	// (0x00025093) cell_ai2_link_pane_ParamLimits

0x6cb3,	// (0x00025093) cell_ai2_link_pane

0x6cc9,	// (0x000250a9) cell_ai2_link_pane_g1

0x4198,	// (0x00022578) grid_highlight_pane_cp7

0xa648,	// (0x00028a28) ai2_mp_volume_pane_g1

0x6da2,	// (0x00025182) ai2_mp_volume_pane_g2

0x6d0f,	// (0x000250ef) list_ai2_gene_pane_t1

0x6d9a,	// (0x0002517a) ai2_mp_volume_pane_g3

0x0002,

0xf9f3,	// (0x0002ddd3) ai2_mp_volume_pane_g

0xa650,	// (0x00028a30) volume_small_pane_cp3

0x6daa,	// (0x0002518a) aid_size_cell_ai2_button

0x6db2,	// (0x00025192) grid_ai2_button_pane

0x6dbb,	// (0x0002519b) cell_ai2_button_pane_ParamLimits

0x6dbb,	// (0x0002519b) cell_ai2_button_pane

0x418e,	// (0x0002256e) cell_ai2_button_pane_g1

0x4198,	// (0x00022578) grid_highlight_pane_cp8

0x6d5a,	// (0x0002513a) ai2_gene_pane_t1_ParamLimits

0x6d5a,	// (0x0002513a) ai2_gene_pane_t1

0x95ae,	// (0x0002798e) aid_height_parent_landscape

0xa34d,	// (0x0002872d) aid_height_set_list

0x60f2,	// (0x000244d2) aid_size_parent

0x6a3a,	// (0x00024e1a) aid_size_cell_graphic_pane_ParamLimits

0x6c7b,	// (0x0002505b) popup_ai2_data_window_g1_ParamLimits

0x6c7b,	// (0x0002505b) popup_ai2_data_window_g1

0x6c87,	// (0x00025067) ai2_news_ticker_pane_g1

0x6c8f,	// (0x0002506f) ai2_news_ticker_pane_g2

0x0001,

0xf9df,	// (0x0002ddbf) ai2_news_ticker_pane_g

0x6c97,	// (0x00025077) ai2_news_ticker_pane_t1

0x6ca5,	// (0x00025085) ai2_news_ticker_pane_t2

0x0001,

0xf9e4,	// (0x0002ddc4) ai2_news_ticker_pane_t

0x6cd2,	// (0x000250b2) heading_ai2_gene_pane_g1

0x6cda,	// (0x000250ba) heading_ai2_gene_pane_t1_ParamLimits

0x6cda,	// (0x000250ba) heading_ai2_gene_pane_t1

0x6cef,	// (0x000250cf) list_highlight_pane_cp6

0x6cf7,	// (0x000250d7) ai2_gene_pane_ParamLimits

0x6cf7,	// (0x000250d7) ai2_gene_pane

0x6d1d,	// (0x000250fd) list_ai2_gene_pane_t2

0x0001,

0xf9e9,	// (0x0002ddc9) list_ai2_gene_pane_t

0x6d2b,	// (0x0002510b) list_highlight_pane_cp8_ParamLimits

0x6d2b,	// (0x0002510b) list_highlight_pane_cp8

0x6d3c,	// (0x0002511c) ai2_gene_pane_g1_ParamLimits

0x6d3c,	// (0x0002511c) ai2_gene_pane_g1

0x6d4e,	// (0x0002512e) ai2_gene_pane_g2_ParamLimits

0x6d4e,	// (0x0002512e) ai2_gene_pane_g2

0x0001,

0xf9ee,	// (0x0002ddce) ai2_gene_pane_g_ParamLimits

0xf9ee,	// (0x0002ddce) ai2_gene_pane_g

0x477f,	// (0x00022b5f) scroll_pane_cp12

0x956d,	// (0x0002794d) control_pane_t3_ParamLimits

0x956d,	// (0x0002794d) control_pane_t3

0x53de,	// (0x000237be) status_small_pane_g8_ParamLimits

0x53de,	// (0x000237be) status_small_pane_g8

0x969c,	// (0x00027a7c) popup_find_window_ParamLimits

0x9889,	// (0x00027c69) popup_note_image_window_ParamLimits

0xe0d4,	// (0x0002c4b4) list_double2_graphic_pane_vc_g1_ParamLimits

0xe0d4,	// (0x0002c4b4) list_double2_graphic_pane_vc_g1

0xe05a,	// (0x0002c43a) list_double2_graphic_pane_vc_g2_ParamLimits

0xe05a,	// (0x0002c43a) list_double2_graphic_pane_vc_g2

0xe066,	// (0x0002c446) list_double2_graphic_pane_vc_g3_ParamLimits

0xe066,	// (0x0002c446) list_double2_graphic_pane_vc_g3

0x0002,

0xf7d1,	// (0x0002dbb1) list_double2_graphic_pane_vc_g_ParamLimits

0xf7d1,	// (0x0002dbb1) list_double2_graphic_pane_vc_g

0xe7a5,	// (0x0002cb85) list_double2_graphic_pane_vc_t1_ParamLimits

0xe7a5,	// (0x0002cb85) list_double2_graphic_pane_vc_t1

0xe05a,	// (0x0002c43a) list_single_heading_pane_vc_g1_ParamLimits

0xe05a,	// (0x0002c43a) list_single_heading_pane_vc_g1

0xe066,	// (0x0002c446) list_single_heading_pane_vc_g2_ParamLimits

0xe066,	// (0x0002c446) list_single_heading_pane_vc_g2

0x0001,

0xf5e0,	// (0x0002d9c0) list_single_heading_pane_vc_g_ParamLimits

0xf5e0,	// (0x0002d9c0) list_single_heading_pane_vc_g

0xe7bb,	// (0x0002cb9b) list_single_heading_pane_vc_t1_ParamLimits

0xe7bb,	// (0x0002cb9b) list_single_heading_pane_vc_t1

0xe7d1,	// (0x0002cbb1) list_single_heading_pane_vc_t2_ParamLimits

0xe7d1,	// (0x0002cbb1) list_single_heading_pane_vc_t2

0x0001,

0xf7f2,	// (0x0002dbd2) list_single_heading_pane_vc_t_ParamLimits

0xf7f2,	// (0x0002dbd2) list_single_heading_pane_vc_t

0x57c0,	// (0x00023ba0) list_setting_number_pane_vc_g1_ParamLimits

0x57c0,	// (0x00023ba0) list_setting_number_pane_vc_g1

0x57cc,	// (0x00023bac) list_setting_number_pane_vc_g2_ParamLimits

0x57cc,	// (0x00023bac) list_setting_number_pane_vc_g2

0x0001,

0xf7f7,	// (0x0002dbd7) list_setting_number_pane_vc_g_ParamLimits

0xf7f7,	// (0x0002dbd7) list_setting_number_pane_vc_g

0x57d8,	// (0x00023bb8) list_setting_number_pane_vc_t1_ParamLimits

0x57d8,	// (0x00023bb8) list_setting_number_pane_vc_t1

0x57ec,	// (0x00023bcc) list_setting_number_pane_vc_t2_ParamLimits

0x57ec,	// (0x00023bcc) list_setting_number_pane_vc_t2

0x5806,	// (0x00023be6) list_setting_number_pane_vc_t3_ParamLimits

0x5806,	// (0x00023be6) list_setting_number_pane_vc_t3

0x0002,

0xf7fc,	// (0x0002dbdc) list_setting_number_pane_vc_t_ParamLimits

0xf7fc,	// (0x0002dbdc) list_setting_number_pane_vc_t

0x582c,	// (0x00023c0c) set_value_pane_vc_ParamLimits

0x582c,	// (0x00023c0c) set_value_pane_vc

0x6997,	// (0x00024d77) list_double2_graphic_pane_vc_ParamLimits

0x6997,	// (0x00024d77) list_double2_graphic_pane_vc

0x69ab,	// (0x00024d8b) list_double2_large_graphic_pane_vc_ParamLimits

0x69ab,	// (0x00024d8b) list_double2_large_graphic_pane_vc

0x6997,	// (0x00024d77) list_double2_pane_vc_ParamLimits

0x6997,	// (0x00024d77) list_double2_pane_vc

0x6997,	// (0x00024d77) list_double_graphic_heading_pane_vc_ParamLimits

0x6997,	// (0x00024d77) list_double_graphic_heading_pane_vc

0x6997,	// (0x00024d77) list_double_graphic_pane_vc_ParamLimits

0x6997,	// (0x00024d77) list_double_graphic_pane_vc

0x6997,	// (0x00024d77) list_double_heading_pane_vc_ParamLimits

0x6997,	// (0x00024d77) list_double_heading_pane_vc

0x69ab,	// (0x00024d8b) list_double_large_graphic_pane_vc_ParamLimits

0x69ab,	// (0x00024d8b) list_double_large_graphic_pane_vc

0x6997,	// (0x00024d77) list_double_number_pane_vc_ParamLimits

0x6997,	// (0x00024d77) list_double_number_pane_vc

0x6997,	// (0x00024d77) list_double_pane_vc_ParamLimits

0x6997,	// (0x00024d77) list_double_pane_vc

0x6997,	// (0x00024d77) list_double_time_pane_vc_ParamLimits

0x6997,	// (0x00024d77) list_double_time_pane_vc

0x6997,	// (0x00024d77) list_setting_number_pane_vc_ParamLimits

0x6997,	// (0x00024d77) list_setting_number_pane_vc

0x6997,	// (0x00024d77) list_setting_pane_vc_ParamLimits

0x6997,	// (0x00024d77) list_setting_pane_vc

0x6997,	// (0x00024d77) list_single_graphic_heading_pane_vc_ParamLimits

0x6997,	// (0x00024d77) list_single_graphic_heading_pane_vc

0x6997,	// (0x00024d77) list_single_heading_pane_vc_ParamLimits

0x6997,	// (0x00024d77) list_single_heading_pane_vc

0xe8a9,	// (0x0002cc89) list_single_number_heading_pane_vc_ParamLimits

0xe8a9,	// (0x0002cc89) list_single_number_heading_pane_vc

0xe0d4,	// (0x0002c4b4) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xe0d4,	// (0x0002c4b4) list_double_graphic_heading_pane_vc_g1

0xe05a,	// (0x0002c43a) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xe05a,	// (0x0002c43a) list_double_graphic_heading_pane_vc_g2

0xe066,	// (0x0002c446) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xe066,	// (0x0002c446) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7d1,	// (0x0002dbb1) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7d1,	// (0x0002dbb1) list_double_graphic_heading_pane_vc_g

0xe966,	// (0x0002cd46) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xe966,	// (0x0002cd46) list_double_graphic_heading_pane_vc_t1

0xe7bb,	// (0x0002cb9b) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xe7bb,	// (0x0002cb9b) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fa,	// (0x0002ddda) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fa,	// (0x0002ddda) list_double_graphic_heading_pane_vc_t

0x57c0,	// (0x00023ba0) list_setting_pane_vc_g1_ParamLimits

0x57c0,	// (0x00023ba0) list_setting_pane_vc_g1

0x57cc,	// (0x00023bac) list_setting_pane_vc_g2_ParamLimits

0x57cc,	// (0x00023bac) list_setting_pane_vc_g2

0x0001,

0xf7f7,	// (0x0002dbd7) list_setting_pane_vc_g_ParamLimits

0xf7f7,	// (0x0002dbd7) list_setting_pane_vc_g

0x6fb1,	// (0x00025391) list_setting_pane_vc_t1_ParamLimits

0x6fb1,	// (0x00025391) list_setting_pane_vc_t1

0x6fcb,	// (0x000253ab) list_setting_pane_vc_t2_ParamLimits

0x6fcb,	// (0x000253ab) list_setting_pane_vc_t2

0x0001,

0xfa3d,	// (0x0002de1d) list_setting_pane_vc_t_ParamLimits

0xfa3d,	// (0x0002de1d) list_setting_pane_vc_t

0x582c,	// (0x00023c0c) set_value_pane_cp_vc_ParamLimits

0x582c,	// (0x00023c0c) set_value_pane_cp_vc

0xe05a,	// (0x0002c43a) list_single_number_heading_pane_vc_g1_ParamLimits

0xe05a,	// (0x0002c43a) list_single_number_heading_pane_vc_g1

0xe066,	// (0x0002c446) list_single_number_heading_pane_vc_g2_ParamLimits

0xe066,	// (0x0002c446) list_single_number_heading_pane_vc_g2

0x0001,

0xf5e0,	// (0x0002d9c0) list_single_number_heading_pane_vc_g_ParamLimits

0xf5e0,	// (0x0002d9c0) list_single_number_heading_pane_vc_g

0xe7bb,	// (0x0002cb9b) list_single_number_heading_pane_vc_t1_ParamLimits

0xe7bb,	// (0x0002cb9b) list_single_number_heading_pane_vc_t1

0xe97a,	// (0x0002cd5a) list_single_number_heading_pane_vc_t2_ParamLimits

0xe97a,	// (0x0002cd5a) list_single_number_heading_pane_vc_t2

0xe0c2,	// (0x0002c4a2) list_single_number_heading_pane_vc_t3_ParamLimits

0xe0c2,	// (0x0002c4a2) list_single_number_heading_pane_vc_t3

0x0002,

0xfa42,	// (0x0002de22) list_single_number_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x0002de22) list_single_number_heading_pane_vc_t

0xe0d4,	// (0x0002c4b4) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xe0d4,	// (0x0002c4b4) list_single_graphic_heading_pane_vc_g1

0xe05a,	// (0x0002c43a) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xe05a,	// (0x0002c43a) list_single_graphic_heading_pane_vc_g4

0xe066,	// (0x0002c446) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xe066,	// (0x0002c446) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7d1,	// (0x0002dbb1) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7d1,	// (0x0002dbb1) list_single_graphic_heading_pane_vc_g

0xe7bb,	// (0x0002cb9b) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xe7bb,	// (0x0002cb9b) list_single_graphic_heading_pane_vc_t1

0xe98e,	// (0x0002cd6e) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xe98e,	// (0x0002cd6e) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa49,	// (0x0002de29) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa49,	// (0x0002de29) list_single_graphic_heading_pane_vc_t

0xe05a,	// (0x0002c43a) list_double2_pane_vc_g1_ParamLimits

0xe05a,	// (0x0002c43a) list_double2_pane_vc_g1

0xe066,	// (0x0002c446) list_double2_pane_vc_g2_ParamLimits

0xe066,	// (0x0002c446) list_double2_pane_vc_g2

0x0001,

0xf5e0,	// (0x0002d9c0) list_double2_pane_vc_g_ParamLimits

0xf5e0,	// (0x0002d9c0) list_double2_pane_vc_g

0xe871,	// (0x0002cc51) list_double2_pane_vc_t1_ParamLimits

0xe871,	// (0x0002cc51) list_double2_pane_vc_t1

0xe9a2,	// (0x0002cd82) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xe9a2,	// (0x0002cd82) list_double2_large_graphic_pane_vc_g1

0xe9ae,	// (0x0002cd8e) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xe9ae,	// (0x0002cd8e) list_double2_large_graphic_pane_vc_g2

0xe9ba,	// (0x0002cd9a) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xe9ba,	// (0x0002cd9a) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa4e,	// (0x0002de2e) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa4e,	// (0x0002de2e) list_double2_large_graphic_pane_vc_g

0xe9c6,	// (0x0002cda6) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xe9c6,	// (0x0002cda6) list_double2_large_graphic_pane_vc_t1

0xe9dc,	// (0x0002cdbc) list_double_time_pane_vc_g1_ParamLimits

0xe9dc,	// (0x0002cdbc) list_double_time_pane_vc_g1

0xe9e8,	// (0x0002cdc8) list_double_time_pane_vc_g2_ParamLimits

0xe9e8,	// (0x0002cdc8) list_double_time_pane_vc_g2

0x0001,

0xfa55,	// (0x0002de35) list_double_time_pane_vc_g_ParamLimits

0xfa55,	// (0x0002de35) list_double_time_pane_vc_g

0xe9f4,	// (0x0002cdd4) list_double_time_pane_vc_t1_ParamLimits

0xe9f4,	// (0x0002cdd4) list_double_time_pane_vc_t1

0xea0d,	// (0x0002cded) list_double_time_pane_vc_t2_ParamLimits

0xea0d,	// (0x0002cded) list_double_time_pane_vc_t2

0xea4d,	// (0x0002ce2d) list_double_time_pane_vc_t3_ParamLimits

0xea4d,	// (0x0002ce2d) list_double_time_pane_vc_t3

0xea65,	// (0x0002ce45) list_double_time_pane_vc_t4_ParamLimits

0xea65,	// (0x0002ce45) list_double_time_pane_vc_t4

0x0003,

0xfa5a,	// (0x0002de3a) list_double_time_pane_vc_t_ParamLimits

0xfa5a,	// (0x0002de3a) list_double_time_pane_vc_t

0xe05a,	// (0x0002c43a) list_double_pane_vc_g1_ParamLimits

0xe05a,	// (0x0002c43a) list_double_pane_vc_g1

0xe066,	// (0x0002c446) list_double_pane_vc_g2_ParamLimits

0xe066,	// (0x0002c446) list_double_pane_vc_g2

0x0001,

0xf5e0,	// (0x0002d9c0) list_double_pane_vc_g_ParamLimits

0xf5e0,	// (0x0002d9c0) list_double_pane_vc_g

0xea79,	// (0x0002ce59) list_double_pane_vc_t1_ParamLimits

0xea79,	// (0x0002ce59) list_double_pane_vc_t1

0xea8b,	// (0x0002ce6b) list_double_pane_vc_t2_ParamLimits

0xea8b,	// (0x0002ce6b) list_double_pane_vc_t2

0x0001,

0xfa63,	// (0x0002de43) list_double_pane_vc_t_ParamLimits

0xfa63,	// (0x0002de43) list_double_pane_vc_t

0xe05a,	// (0x0002c43a) list_double_number_pane_vc_g1_ParamLimits

0xe05a,	// (0x0002c43a) list_double_number_pane_vc_g1

0xe066,	// (0x0002c446) list_double_number_pane_vc_g2_ParamLimits

0xe066,	// (0x0002c446) list_double_number_pane_vc_g2

0x0001,

0xf5e0,	// (0x0002d9c0) list_double_number_pane_vc_g_ParamLimits

0xf5e0,	// (0x0002d9c0) list_double_number_pane_vc_g

0xeaa3,	// (0x0002ce83) list_double_number_pane_vc_t1_ParamLimits

0xeaa3,	// (0x0002ce83) list_double_number_pane_vc_t1

0xeab7,	// (0x0002ce97) list_double_number_pane_vc_t2_ParamLimits

0xeab7,	// (0x0002ce97) list_double_number_pane_vc_t2

0xea8b,	// (0x0002ce6b) list_double_number_pane_vc_t3_ParamLimits

0xea8b,	// (0x0002ce6b) list_double_number_pane_vc_t3

0x0002,

0xfa68,	// (0x0002de48) list_double_number_pane_vc_t_ParamLimits

0xfa68,	// (0x0002de48) list_double_number_pane_vc_t

0xeac9,	// (0x0002cea9) list_double_large_graphic_pane_vc_g1_ParamLimits

0xeac9,	// (0x0002cea9) list_double_large_graphic_pane_vc_g1

0xead5,	// (0x0002ceb5) list_double_large_graphic_pane_vc_g2_ParamLimits

0xead5,	// (0x0002ceb5) list_double_large_graphic_pane_vc_g2

0xe9ba,	// (0x0002cd9a) list_double_large_graphic_pane_vc_g3_ParamLimits

0xe9ba,	// (0x0002cd9a) list_double_large_graphic_pane_vc_g3

0xeae4,	// (0x0002cec4) list_double_large_graphic_pane_vc_g4_ParamLimits

0xeae4,	// (0x0002cec4) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6f,	// (0x0002de4f) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6f,	// (0x0002de4f) list_double_large_graphic_pane_vc_g

0xeaf0,	// (0x0002ced0) list_double_large_graphic_pane_vc_t1_ParamLimits

0xeaf0,	// (0x0002ced0) list_double_large_graphic_pane_vc_t1

0xeb02,	// (0x0002cee2) list_double_large_graphic_pane_vc_t2_ParamLimits

0xeb02,	// (0x0002cee2) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa78,	// (0x0002de58) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa78,	// (0x0002de58) list_double_large_graphic_pane_vc_t

0xe05a,	// (0x0002c43a) list_double_heading_pane_vc_g1_ParamLimits

0xe05a,	// (0x0002c43a) list_double_heading_pane_vc_g1

0xe066,	// (0x0002c446) list_double_heading_pane_vc_g2_ParamLimits

0xe066,	// (0x0002c446) list_double_heading_pane_vc_g2

0x0001,

0xf5e0,	// (0x0002d9c0) list_double_heading_pane_vc_g_ParamLimits

0xf5e0,	// (0x0002d9c0) list_double_heading_pane_vc_g

0xeb1b,	// (0x0002cefb) list_double_heading_pane_vc_t1_ParamLimits

0xeb1b,	// (0x0002cefb) list_double_heading_pane_vc_t1

0xe7bb,	// (0x0002cb9b) list_double_heading_pane_vc_t2_ParamLimits

0xe7bb,	// (0x0002cb9b) list_double_heading_pane_vc_t2

0x0001,

0xfa7d,	// (0x0002de5d) list_double_heading_pane_vc_t_ParamLimits

0xfa7d,	// (0x0002de5d) list_double_heading_pane_vc_t

0xeb2f,	// (0x0002cf0f) list_double_graphic_pane_vc_g1_ParamLimits

0xeb2f,	// (0x0002cf0f) list_double_graphic_pane_vc_g1

0xeb3f,	// (0x0002cf1f) list_double_graphic_pane_vc_g2_ParamLimits

0xeb3f,	// (0x0002cf1f) list_double_graphic_pane_vc_g2

0xeb4e,	// (0x0002cf2e) list_double_graphic_pane_vc_g3_ParamLimits

0xeb4e,	// (0x0002cf2e) list_double_graphic_pane_vc_g3

0x0002,

0xfa82,	// (0x0002de62) list_double_graphic_pane_vc_g_ParamLimits

0xfa82,	// (0x0002de62) list_double_graphic_pane_vc_g

0xeb5a,	// (0x0002cf3a) list_double_graphic_pane_vc_t1_ParamLimits

0xeb5a,	// (0x0002cf3a) list_double_graphic_pane_vc_t1

0xea8b,	// (0x0002ce6b) list_double_graphic_pane_vc_t2_ParamLimits

0xea8b,	// (0x0002ce6b) list_double_graphic_pane_vc_t2

0x0001,

0xfa89,	// (0x0002de69) list_double_graphic_pane_vc_t_ParamLimits

0xfa89,	// (0x0002de69) list_double_graphic_pane_vc_t

0x85a2,	// (0x00026982) aid_size_cell_fastswap

0x85aa,	// (0x0002698a) aid_size_cell_touch_ParamLimits

0x85aa,	// (0x0002698a) aid_size_cell_touch

0x880f,	// (0x00026bef) popup_fast_swap_wide_window_ParamLimits

0x880f,	// (0x00026bef) popup_fast_swap_wide_window

0x8905,	// (0x00026ce5) touch_pane_ParamLimits

0x8905,	// (0x00026ce5) touch_pane

0x47d5,	// (0x00022bb5) button_value_adjust_pane_cp2

0xe4a4,	// (0x0002c884) button_value_adjust_pane_cp4

0xe4c4,	// (0x0002c8a4) form_field_data_pane_cp2

0xe4e3,	// (0x0002c8c3) form_field_data_wide_pane_cp2

0x4b21,	// (0x00022f01) bg_scroll_pane_ParamLimits

0x8fb1,	// (0x00027391) scroll_handle_pane_ParamLimits

0x8fc5,	// (0x000273a5) scroll_sc2_down_pane_ParamLimits

0x8fc5,	// (0x000273a5) scroll_sc2_down_pane

0x4b52,	// (0x00022f32) scroll_sc2_up_pane_ParamLimits

0x4b52,	// (0x00022f32) scroll_sc2_up_pane

0xa7e2,	// (0x00028bc2) grid_wheel_folder_pane_g1_ParamLimits

0xa7e2,	// (0x00028bc2) grid_wheel_folder_pane_g1

0x9261,	// (0x00027641) clock_nsta_pane_cp2_ParamLimits

0x9261,	// (0x00027641) clock_nsta_pane_cp2

0x8d5c,	// (0x0002713c) listscroll_midp_pane_ParamLimits

0x92e7,	// (0x000276c7) midp_canvas_pane

0x5432,	// (0x00023812) nsta_clock_indic_pane

0x546a,	// (0x0002384a) listscroll_form_pane_vc

0x5472,	// (0x00023852) listscroll_set_pane_vc_ParamLimits

0x5472,	// (0x00023852) listscroll_set_pane_vc

0x9afd,	// (0x00027edd) clock_nsta_pane

0x9b0a,	// (0x00027eea) indicator_nsta_pane

0x56b6,	// (0x00023a96) bg_popup_sub_pane_cp2_ParamLimits

0x56ca,	// (0x00023aaa) find_pane_cp2_ParamLimits

0x56ca,	// (0x00023aaa) find_pane_cp2

0x56e0,	// (0x00023ac0) grid_toobar_pane_ParamLimits

0x583c,	// (0x00023c1c) list_form_gen_pane_vc_ParamLimits

0x583c,	// (0x00023c1c) list_form_gen_pane_vc

0x5852,	// (0x00023c32) scroll_pane_cp8_vc_ParamLimits

0x5852,	// (0x00023c32) scroll_pane_cp8_vc

0x58a2,	// (0x00023c82) data_form_wide_pane_vc_ParamLimits

0x58a2,	// (0x00023c82) data_form_wide_pane_vc

0x58ae,	// (0x00023c8e) form_field_data_wide_pane_vc_g1

0x58b6,	// (0x00023c96) form_field_data_wide_pane_vc_t1_ParamLimits

0x58b6,	// (0x00023c96) form_field_data_wide_pane_vc_t1

0x47e9,	// (0x00022bc9) input_focus_pane_cp6_vc_ParamLimits

0x47e9,	// (0x00022bc9) input_focus_pane_cp6_vc

0x9fae,	// (0x0002838e) list_midp_pane_ParamLimits

0x9fba,	// (0x0002839a) scroll_pane_cp16_ParamLimits

0x9fba,	// (0x0002839a) scroll_pane_cp16

0x5b25,	// (0x00023f05) button_value_adjust_pane_ParamLimits

0x5b25,	// (0x00023f05) button_value_adjust_pane

0xa35e,	// (0x0002873e) button_value_adjust_pane_cp6_ParamLimits

0xa35e,	// (0x0002873e) button_value_adjust_pane_cp6

0xa480,	// (0x00028860) settings_code_pane_cp_ParamLimits

0xa480,	// (0x00028860) settings_code_pane_cp

0x418e,	// (0x0002256e) cell_touch_pane_g1

0x418e,	// (0x0002256e) cell_touch_pane_g2

0x0001,

0xf716,	// (0x0002daf6) cell_touch_pane_g

0xa659,	// (0x00028a39) cell_touch_pane_cp_ParamLimits

0xa659,	// (0x00028a39) cell_touch_pane_cp

0xa669,	// (0x00028a49) cell_touch_pane_ParamLimits

0xa669,	// (0x00028a49) cell_touch_pane

0x418e,	// (0x0002256e) scroll_sc2_down_pane_g1

0x418e,	// (0x0002256e) scroll_sc2_up_pane_g1

0x4198,	// (0x00022578) bg_set_opt_pane_cp4_vc

0x6dcd,	// (0x000251ad) list_set_graphic_pane_vc_g1_ParamLimits

0x6dcd,	// (0x000251ad) list_set_graphic_pane_vc_g1

0x6dd9,	// (0x000251b9) list_set_graphic_pane_vc_g2_ParamLimits

0x6dd9,	// (0x000251b9) list_set_graphic_pane_vc_g2

0x0001,

0xf9ff,	// (0x0002dddf) list_set_graphic_pane_vc_g_ParamLimits

0xf9ff,	// (0x0002dddf) list_set_graphic_pane_vc_g

0x6de5,	// (0x000251c5) text_primary_small_cp13_vc_ParamLimits

0x6de5,	// (0x000251c5) text_primary_small_cp13_vc

0x6dfd,	// (0x000251dd) list_set_graphic_pane_vc_ParamLimits

0x6dfd,	// (0x000251dd) list_set_graphic_pane_vc

0x4198,	// (0x00022578) input_focus_pane_cp2_vc

0x418e,	// (0x0002256e) setting_code_pane_vc_g1

0x6e11,	// (0x000251f1) setting_code_pane_vc_t1

0x6e1f,	// (0x000251ff) set_text_pane_vc_t1_ParamLimits

0x6e1f,	// (0x000251ff) set_text_pane_vc_t1

0x4198,	// (0x00022578) input_focus_pane_cp1_vc

0x6e3e,	// (0x0002521e) list_set_text_pane_vc

0x418e,	// (0x0002256e) setting_text_pane_vc_g1

0x4198,	// (0x00022578) bg_set_opt_pane_cp2_vc

0x6e48,	// (0x00025228) setting_slider_graphic_pane_vc_g1

0x6e50,	// (0x00025230) setting_slider_graphic_pane_vc_t1

0x6e5e,	// (0x0002523e) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa04,	// (0x0002dde4) setting_slider_graphic_pane_vc_t

0x6e6c,	// (0x0002524c) slider_set_pane_cp_vc

0x6e74,	// (0x00025254) slider_set_pane_vc_g1

0x6e7d,	// (0x0002525d) slider_set_pane_vc_g2

0x0006,

0xfa09,	// (0x0002dde9) slider_set_pane_vc_g

0x4850,	// (0x00022c30) set_opt_bg_pane_g1_copy1

0x4858,	// (0x00022c38) set_opt_bg_pane_g2_copy1

0x6ea9,	// (0x00025289) set_opt_bg_pane_g3_copy1

0x4868,	// (0x00022c48) set_opt_bg_pane_g4_copy1

0x4870,	// (0x00022c50) set_opt_bg_pane_g5_copy1

0x4878,	// (0x00022c58) set_opt_bg_pane_g6_copy1

0x6eb1,	// (0x00025291) set_opt_bg_pane_g7_copy1

0x6ebb,	// (0x0002529b) set_opt_bg_pane_g8_copy1

0x6ec3,	// (0x000252a3) set_opt_bg_pane_g9_copy1

0x4198,	// (0x00022578) bg_set_opt_pane_cp_vc

0x6ecb,	// (0x000252ab) setting_slider_pane_vc_t1

0x6e50,	// (0x00025230) setting_slider_pane_vc_t2

0x6e5e,	// (0x0002523e) setting_slider_pane_vc_t3

0x0002,

0xfa18,	// (0x0002ddf8) setting_slider_pane_vc_t

0x6e6c,	// (0x0002524c) slider_set_pane_vc

0xa000,	// (0x000283e0) volume_set_pane_vc_g1

0xa67b,	// (0x00028a5b) volume_set_pane_vc_g2

0xa684,	// (0x00028a64) volume_set_pane_vc_g3

0xa68d,	// (0x00028a6d) volume_set_pane_vc_g4

0xa696,	// (0x00028a76) volume_set_pane_vc_g5

0xa69f,	// (0x00028a7f) volume_set_pane_vc_g6

0xa6a8,	// (0x00028a88) volume_set_pane_vc_g7

0xa6b1,	// (0x00028a91) volume_set_pane_vc_g8

0xa6ba,	// (0x00028a9a) volume_set_pane_vc_g9

0xa6c3,	// (0x00028aa3) volume_set_pane_vc_g10

0x0009,

0xfa1f,	// (0x0002ddff) volume_set_pane_vc_g

0x6eda,	// (0x000252ba) volume_set_pane_vc

0x6ee2,	// (0x000252c2) button_value_adjust_pane_cp1_vc

0x6eec,	// (0x000252cc) list_highlight_pane_cp2_vc

0x6ef5,	// (0x000252d5) list_set_pane_vc_ParamLimits

0x6ef5,	// (0x000252d5) list_set_pane_vc

0x6f47,	// (0x00025327) main_pane_set_vc_t1_ParamLimits

0x6f47,	// (0x00025327) main_pane_set_vc_t1

0x6f5c,	// (0x0002533c) main_pane_set_vc_t2_ParamLimits

0x6f5c,	// (0x0002533c) main_pane_set_vc_t2

0x6f6e,	// (0x0002534e) main_pane_set_vc_t3_ParamLimits

0x6f6e,	// (0x0002534e) main_pane_set_vc_t3

0x6f80,	// (0x00025360) main_pane_set_vc_t4_ParamLimits

0x6f80,	// (0x00025360) main_pane_set_vc_t4

0x0003,

0xfa34,	// (0x0002de14) main_pane_set_vc_t_ParamLimits

0xfa34,	// (0x0002de14) main_pane_set_vc_t

0x6f92,	// (0x00025372) setting_code_pane_vc_ParamLimits

0x6f92,	// (0x00025372) setting_code_pane_vc

0x6fa1,	// (0x00025381) setting_slider_graphic_pane_vc

0x6fa1,	// (0x00025381) setting_slider_pane_vc

0x6fa1,	// (0x00025381) setting_text_pane_vc

0x6fa1,	// (0x00025381) setting_volume_pane_vc

0x6fa9,	// (0x00025389) scroll_pane_cp121_vc

0x47c3,	// (0x00022ba3) set_content_pane_vc

0x6fe1,	// (0x000253c1) button_value_adjust_pane_g1

0x6fea,	// (0x000253ca) button_value_adjust_pane_g2

0x0001,

0xfa8e,	// (0x0002de6e) button_value_adjust_pane_g

0x6ff3,	// (0x000253d3) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6ff3,	// (0x000253d3) form_field_slider_wide_pane_vc_t1

0x7007,	// (0x000253e7) form_field_slider_wide_pane_vc_t2_ParamLimits

0x7007,	// (0x000253e7) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa93,	// (0x0002de73) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa93,	// (0x0002de73) form_field_slider_wide_pane_vc_t

0x41e6,	// (0x000225c6) input_focus_pane_cp10_vc_ParamLimits

0x41e6,	// (0x000225c6) input_focus_pane_cp10_vc

0x7019,	// (0x000253f9) slider_cont_pane_cp1_vc_ParamLimits

0x7019,	// (0x000253f9) slider_cont_pane_cp1_vc

0x6e74,	// (0x00025254) slider_form_pane_g1_cp2

0x6e7d,	// (0x0002525d) slider_form_pane_g2_cp2

0x7032,	// (0x00025412) form_field_slider_pane_vc_t3

0x7040,	// (0x00025420) form_field_slider_pane_vc_t4

0x704e,	// (0x0002542e) slider_form_pane_vc_ParamLimits

0x704e,	// (0x0002542e) slider_form_pane_vc

0x705b,	// (0x0002543b) form_field_slider_pane_vc_t1_ParamLimits

0x705b,	// (0x0002543b) form_field_slider_pane_vc_t1

0x7007,	// (0x000253e7) form_field_slider_pane_vc_t2_ParamLimits

0x7007,	// (0x000253e7) form_field_slider_pane_vc_t2

0x0001,

0xfaa3,	// (0x0002de83) form_field_slider_pane_vc_t_ParamLimits

0xfaa3,	// (0x0002de83) form_field_slider_pane_vc_t

0x41e6,	// (0x000225c6) input_focus_pane_cp9_vc_ParamLimits

0x41e6,	// (0x000225c6) input_focus_pane_cp9_vc

0x7077,	// (0x00025457) slider_cont_pane_vc_ParamLimits

0x7077,	// (0x00025457) slider_cont_pane_vc

0x7089,	// (0x00025469) list_form_graphic_pane_cp_vc_ParamLimits

0x7089,	// (0x00025469) list_form_graphic_pane_cp_vc

0x58ae,	// (0x00023c8e) form_field_popup_wide_pane_vc_g1

0x709e,	// (0x0002547e) form_field_popup_wide_pane_vc_t1_ParamLimits

0x709e,	// (0x0002547e) form_field_popup_wide_pane_vc_t1

0x47e9,	// (0x00022bc9) input_focus_pane_cp8_vc_ParamLimits

0x47e9,	// (0x00022bc9) input_focus_pane_cp8_vc

0x70b5,	// (0x00025495) list_form_wide_pane_vc_ParamLimits

0x70b5,	// (0x00025495) list_form_wide_pane_vc

0x70c1,	// (0x000254a1) list_form_graphic_pane_vc_g1

0x70c9,	// (0x000254a9) list_form_graphic_pane_vc_t1_ParamLimits

0x70c9,	// (0x000254a9) list_form_graphic_pane_vc_t1

0x41f4,	// (0x000225d4) list_highlight_pane_cp5_vc_ParamLimits

0x41f4,	// (0x000225d4) list_highlight_pane_cp5_vc

0x70e5,	// (0x000254c5) list_form_graphic_pane_vc_ParamLimits

0x70e5,	// (0x000254c5) list_form_graphic_pane_vc

0x58ae,	// (0x00023c8e) form_field_popup_pane_vc_g1

0x70fb,	// (0x000254db) form_field_popup_pane_vc_t1_ParamLimits

0x70fb,	// (0x000254db) form_field_popup_pane_vc_t1

0x47e9,	// (0x00022bc9) input_focus_pane_cp7_vc_ParamLimits

0x47e9,	// (0x00022bc9) input_focus_pane_cp7_vc

0x7112,	// (0x000254f2) list_form_pane_vc_ParamLimits

0x7112,	// (0x000254f2) list_form_pane_vc

0x711e,	// (0x000254fe) data_form_pane_vc_t1_ParamLimits

0x711e,	// (0x000254fe) data_form_pane_vc_t1

0x4850,	// (0x00022c30) input_focus_pane_vc_g1

0x4858,	// (0x00022c38) input_focus_pane_vc_g2

0x4860,	// (0x00022c40) input_focus_pane_vc_g3

0x4868,	// (0x00022c48) input_focus_pane_vc_g4

0x4870,	// (0x00022c50) input_focus_pane_vc_g5

0x4878,	// (0x00022c58) input_focus_pane_vc_g6

0x4880,	// (0x00022c60) input_focus_pane_vc_g7

0x4888,	// (0x00022c68) input_focus_pane_vc_g8

0x4890,	// (0x00022c70) input_focus_pane_vc_g9

0x418e,	// (0x0002256e) input_focus_pane_vc_g10

0x0009,

0xf69f,	// (0x0002da7f) input_focus_pane_vc_g

0x58a2,	// (0x00023c82) data_form_pane_vc_ParamLimits

0x58a2,	// (0x00023c82) data_form_pane_vc

0x58ae,	// (0x00023c8e) form_field_data_pane_vc_g1

0x7139,	// (0x00025519) form_field_data_pane_vc_t1_ParamLimits

0x7139,	// (0x00025519) form_field_data_pane_vc_t1

0x47e9,	// (0x00022bc9) input_focus_pane_vc_ParamLimits

0x47e9,	// (0x00022bc9) input_focus_pane_vc

0x7153,	// (0x00025533) button_value_adjust_pane_cp3_vc

0x715b,	// (0x0002553b) button_value_adjust_pane_cp5_vc

0x7163,	// (0x00025543) form_field_data_pane_vc_ParamLimits

0x7163,	// (0x00025543) form_field_data_pane_vc

0x717a,	// (0x0002555a) form_field_data_pane_vc_cp2

0x7182,	// (0x00025562) form_field_data_wide_pane_vc_ParamLimits

0x7182,	// (0x00025562) form_field_data_wide_pane_vc

0x7198,	// (0x00025578) form_field_data_wide_pane_vc_cp2

0x71a0,	// (0x00025580) form_field_popup_pane_vc_ParamLimits

0x71a0,	// (0x00025580) form_field_popup_pane_vc

0x71b7,	// (0x00025597) form_field_popup_wide_pane_vc_ParamLimits

0x71b7,	// (0x00025597) form_field_popup_wide_pane_vc

0x71cd,	// (0x000255ad) form_field_slider_pane_vc_ParamLimits

0x71cd,	// (0x000255ad) form_field_slider_pane_vc

0x71e0,	// (0x000255c0) form_field_slider_wide_pane_vc_ParamLimits

0x71e0,	// (0x000255c0) form_field_slider_wide_pane_vc

0xa6cc,	// (0x00028aac) grid_touch_1_pane_ParamLimits

0xa6cc,	// (0x00028aac) grid_touch_1_pane

0xa6d8,	// (0x00028ab8) grid_touch_2_pane_ParamLimits

0xa6d8,	// (0x00028ab8) grid_touch_2_pane

0x5424,	// (0x00023804) touch_pane_g1_ParamLimits

0x5424,	// (0x00023804) touch_pane_g1

0x7201,	// (0x000255e1) cell_app_pane_cp_wide_ParamLimits

0x7201,	// (0x000255e1) cell_app_pane_cp_wide

0x7212,	// (0x000255f2) grid_popup_fast_wide_pane_ParamLimits

0x7212,	// (0x000255f2) grid_popup_fast_wide_pane

0x7226,	// (0x00025606) scroll_pane_cp19_ParamLimits

0x7226,	// (0x00025606) scroll_pane_cp19

0x4198,	// (0x00022578) bg_popup_window_pane_cp20

0x723a,	// (0x0002561a) listscroll_popup_fast_wide_pane

0x41f4,	// (0x000225d4) grid_indicator_nsta_pane

0x7242,	// (0x00025622) clock_nsta_pane_g1

0x724b,	// (0x0002562b) clock_nsta_pane_t1

0xa6f0,	// (0x00028ad0) cell_indicator_nsta_pane_ParamLimits

0xa6f0,	// (0x00028ad0) cell_indicator_nsta_pane

0x71f3,	// (0x000255d3) cell_indicator_nsta_pane_g1

0xa728,	// (0x00028b08) cell_indicator_nsta_pane_g2

0x0001,

0xfaad,	// (0x0002de8d) cell_indicator_nsta_pane_g

0x7267,	// (0x00025647) clock_nsta_pane_cp

0x726f,	// (0x0002564f) indicator_nsta_pane_cp

0x7278,	// (0x00025658) nsta_clock_indic_pane_g1

0x4230,	// (0x00022610) grid_indicator_pane

0x4c44,	// (0x00023024) scroll_pane_cp29

0x91b0,	// (0x00027590) indicator_nsta_pane_cp2_ParamLimits

0x91b0,	// (0x00027590) indicator_nsta_pane_cp2

0x41f4,	// (0x000225d4) main_apps_wheel_pane

0x59ca,	// (0x00023daa) form_midp_field_text_pane_ParamLimits

0x5af7,	// (0x00023ed7) scroll_bar_cp050_ParamLimits

0x72e1,	// (0x000256c1) cell_indicator_pane_ParamLimits

0x72e1,	// (0x000256c1) cell_indicator_pane

0x72fe,	// (0x000256de) cell_indicator_pane_g1

0xa73e,	// (0x00028b1e) grid_wheel_folder_pane_ParamLimits

0xa73e,	// (0x00028b1e) grid_wheel_folder_pane

0xa754,	// (0x00028b34) list_wheel_apps_pane_ParamLimits

0xa754,	// (0x00028b34) list_wheel_apps_pane

0xa765,	// (0x00028b45) main_apps_wheel_pane_g1_ParamLimits

0xa765,	// (0x00028b45) main_apps_wheel_pane_g1

0xa779,	// (0x00028b59) main_apps_wheel_pane_g2_ParamLimits

0xa779,	// (0x00028b59) main_apps_wheel_pane_g2

0x0001,

0xfac9,	// (0x0002dea9) main_apps_wheel_pane_g_ParamLimits

0xfac9,	// (0x0002dea9) main_apps_wheel_pane_g

0xa791,	// (0x00028b71) main_apps_wheel_pane_t1_ParamLimits

0xa791,	// (0x00028b71) main_apps_wheel_pane_t1

0xa7b4,	// (0x00028b94) list_wheel_apps_pane_g1

0xa7bc,	// (0x00028b9c) list_wheel_apps_pane_g2

0xa7c4,	// (0x00028ba4) list_wheel_apps_pane_g3

0xa7ce,	// (0x00028bae) list_wheel_apps_pane_g4

0xa7d8,	// (0x00028bb8) list_wheel_apps_pane_g5

0x0004,

0xface,	// (0x0002deae) list_wheel_apps_pane_g

0x509c,	// (0x0002347c) navi_icon_text_pane

0x9a41,	// (0x00027e21) aid_fill_nsta

0x7308,	// (0x000256e8) navi_icon_text_pane_g1

0x7314,	// (0x000256f4) navi_icon_text_pane_t1

0x4f38,	// (0x00023318) list_set_graphic_pane_t1_ParamLimits

0x4f38,	// (0x00023318) list_set_graphic_pane_t1

0x6229,	// (0x00024609) popup_midp_note_alarm_window_t6_ParamLimits

0x6229,	// (0x00024609) popup_midp_note_alarm_window_t6

0x623b,	// (0x0002461b) popup_midp_note_alarm_window_t7_ParamLimits

0x623b,	// (0x0002461b) popup_midp_note_alarm_window_t7

0x624d,	// (0x0002462d) popup_midp_note_alarm_window_t8_ParamLimits

0x624d,	// (0x0002462d) popup_midp_note_alarm_window_t8

0x625f,	// (0x0002463f) popup_midp_note_alarm_window_t9_ParamLimits

0x625f,	// (0x0002463f) popup_midp_note_alarm_window_t9

0x6271,	// (0x00024651) popup_midp_note_alarm_window_t10_ParamLimits

0x6271,	// (0x00024651) popup_midp_note_alarm_window_t10

0x6283,	// (0x00024663) popup_midp_note_alarm_window_t11_ParamLimits

0x6283,	// (0x00024663) popup_midp_note_alarm_window_t11

0x6295,	// (0x00024675) scroll_pane_cp17_ParamLimits

0x6295,	// (0x00024675) scroll_pane_cp17

0xa000,	// (0x000283e0) volume_small_pane_cp_g1

0xa7fb,	// (0x00028bdb) volume_small_pane_cp_g2

0xa804,	// (0x00028be4) volume_small_pane_cp_g3

0xa80d,	// (0x00028bed) volume_small_pane_cp_g4

0xa816,	// (0x00028bf6) volume_small_pane_cp_g5

0xa81f,	// (0x00028bff) volume_small_pane_cp_g6

0xa828,	// (0x00028c08) volume_small_pane_cp_g7

0xa831,	// (0x00028c11) volume_small_pane_cp_g8

0xa83a,	// (0x00028c1a) volume_small_pane_cp_g9

0xa843,	// (0x00028c23) volume_small_pane_cp_g10

0x5248,	// (0x00023628) midp_ticker_pane_g1_ParamLimits

0x5254,	// (0x00023634) midp_ticker_pane_g2_ParamLimits

0xf76b,	// (0x0002db4b) midp_ticker_pane_g_ParamLimits

0x5260,	// (0x00023640) midp_ticker_pane_t1_ParamLimits

0x9a57,	// (0x00027e37) aid_fill_nsta_2

0x5ae3,	// (0x00023ec3) list_form2_midp_pane

0x6966,	// (0x00024d46) midp_editing_number_pane_ParamLimits

0x6975,	// (0x00024d55) midp_ticker_pane_ParamLimits

0x7326,	// (0x00025706) form2_midp_field_pane

0x732e,	// (0x0002570e) scroll_pane_cp51

0x734e,	// (0x0002572e) form2_midp_button_pane_ParamLimits

0x734e,	// (0x0002572e) form2_midp_button_pane

0x7360,	// (0x00025740) form2_midp_content_pane_ParamLimits

0x7360,	// (0x00025740) form2_midp_content_pane

0x737a,	// (0x0002575a) form2_midp_field_choice_group_pane

0x7382,	// (0x00025762) form2_midp_field_pane_g1

0x738a,	// (0x0002576a) form2_midp_field_pane_g2

0x7392,	// (0x00025772) form2_midp_field_pane_g3

0x739a,	// (0x0002577a) form2_midp_field_pane_g4

0x0003,

0xfaf3,	// (0x0002ded3) form2_midp_field_pane_g

0x73a2,	// (0x00025782) form2_midp_gauge_slider_pane

0x73aa,	// (0x0002578a) form2_midp_gauge_wait_pane

0x73b2,	// (0x00025792) form2_midp_image_pane_ParamLimits

0x73b2,	// (0x00025792) form2_midp_image_pane

0x73cd,	// (0x000257ad) form2_midp_label_pane_ParamLimits

0x73cd,	// (0x000257ad) form2_midp_label_pane

0xa868,	// (0x00028c48) form2_midp_label_pane_cp_ParamLimits

0xa868,	// (0x00028c48) form2_midp_label_pane_cp

0x73e6,	// (0x000257c6) form2_midp_string_pane_ParamLimits

0x73e6,	// (0x000257c6) form2_midp_string_pane

0xeb6c,	// (0x0002cf4c) form2_midp_text_pane_ParamLimits

0xeb6c,	// (0x0002cf4c) form2_midp_text_pane

0x73f8,	// (0x000257d8) form2_midp_time_pane

0x7408,	// (0x000257e8) input_focus_pane_cp51_ParamLimits

0x7408,	// (0x000257e8) input_focus_pane_cp51

0x7420,	// (0x00025800) form2_midp_label_pane_t1_ParamLimits

0x7420,	// (0x00025800) form2_midp_label_pane_t1

0xeb85,	// (0x0002cf65) form2_mdip_text_pane_t1_ParamLimits

0xeb85,	// (0x0002cf65) form2_mdip_text_pane_t1

0xeba2,	// (0x0002cf82) form2_midp_time_pane_t1

0x7468,	// (0x00025848) form2_midp_gauge_slider_pane_t1

0xa889,	// (0x00028c69) form2_midp_gauge_slider_pane_t2

0xa89b,	// (0x00028c7b) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafc,	// (0x0002dedc) form2_midp_gauge_slider_pane_t

0x747a,	// (0x0002585a) form2_midp_slider_pane

0x7486,	// (0x00025866) form2_midp_gauge_wait_pane_t1

0x7494,	// (0x00025874) form2_midp_wait_pane_ParamLimits

0x7494,	// (0x00025874) form2_midp_wait_pane

0xa8ad,	// (0x00028c8d) list_single_2graphic_pane_cp4_ParamLimits

0xa8ad,	// (0x00028c8d) list_single_2graphic_pane_cp4

0x9ee9,	// (0x000282c9) list_single_midp_graphic_pane_cp_ParamLimits

0x9ee9,	// (0x000282c9) list_single_midp_graphic_pane_cp

0x4198,	// (0x00022578) list_highlight_pane_cp20

0x74bf,	// (0x0002589f) list_single_2graphic_pane_g1_cp4

0x6cd2,	// (0x000250b2) list_single_2graphic_pane_g2_cp4

0x74c7,	// (0x000258a7) list_single_2graphic_pane_t1_cp4

0x41f4,	// (0x000225d4) list_highlight_pane_cp21

0x74d6,	// (0x000258b6) list_single_midp_graphic_pane_g4_cp

0x74e5,	// (0x000258c5) list_single_midp_graphic_pane_t1_cp

0xa8dc,	// (0x00028cbc) form2_mdip_string_pane_t1_ParamLimits

0xa8dc,	// (0x00028cbc) form2_mdip_string_pane_t1

0x4198,	// (0x00022578) bg_wml_button_pane_cp2

0x418e,	// (0x0002256e) form2_midp_image_pane_g1

0xe2a5,	// (0x0002c685) list_double_large_graphic_pane_g5_ParamLimits

0xe2a5,	// (0x0002c685) list_double_large_graphic_pane_g5

0x8d5c,	// (0x0002713c) midp_form_pane_ParamLimits

0x41f4,	// (0x000225d4) main_apps_wheel_pane_ParamLimits

0x98af,	// (0x00027c8f) popup_preview_window_ParamLimits

0x98af,	// (0x00027c8f) popup_preview_window

0x5557,	// (0x00023937) popup_touch_info_window_ParamLimits

0x5557,	// (0x00023937) popup_touch_info_window

0x5575,	// (0x00023955) popup_touch_menu_window_ParamLimits

0x5575,	// (0x00023955) popup_touch_menu_window

0x4184,	// (0x00022564) bg_popup_sub_pane_cp6

0x74fa,	// (0x000258da) list_touch_menu_pane

0x7502,	// (0x000258e2) list_single_touch_menu_pane_ParamLimits

0x7502,	// (0x000258e2) list_single_touch_menu_pane

0x7516,	// (0x000258f6) list_single_touch_menu_pane_t1

0x41f4,	// (0x000225d4) bg_popup_sub_pane_cp7_ParamLimits

0x41f4,	// (0x000225d4) bg_popup_sub_pane_cp7

0x7524,	// (0x00025904) heading_sub_pane

0x752c,	// (0x0002590c) list_touch_info_pane_ParamLimits

0x752c,	// (0x0002590c) list_touch_info_pane

0x753b,	// (0x0002591b) list_single_touch_info_pane_ParamLimits

0x753b,	// (0x0002591b) list_single_touch_info_pane

0x754d,	// (0x0002592d) list_single_touch_info_pane_t1

0x755b,	// (0x0002593b) list_single_touch_info_pane_t2

0x0001,

0xfb0a,	// (0x0002deea) list_single_touch_info_pane_t

0x521e,	// (0x000235fe) bg_popup_heading_pane_cp

0x7569,	// (0x00025949) heading_sub_pane_t1

0x5868,	// (0x00023c48) bg_popup_preview_window_pane_cp_ParamLimits

0x5868,	// (0x00023c48) bg_popup_preview_window_pane_cp

0x7524,	// (0x00025904) heading_preview_pane

0x752c,	// (0x0002590c) list_preview_pane_ParamLimits

0x752c,	// (0x0002590c) list_preview_pane

0x7577,	// (0x00025957) popup_preview_window_g1

0x753b,	// (0x0002591b) list_single_preview_pane_ParamLimits

0x753b,	// (0x0002591b) list_single_preview_pane

0x757f,	// (0x0002595f) list_single_preview_pane_g1

0x7587,	// (0x00025967) list_single_preview_pane_t1

0x754d,	// (0x0002592d) list_single_preview_pane_t2

0x0001,

0xfb0f,	// (0x0002deef) list_single_preview_pane_t

0x7595,	// (0x00025975) bg_popup_heading_pane_cp2_ParamLimits

0x7595,	// (0x00025975) bg_popup_heading_pane_cp2

0x75ab,	// (0x0002598b) heading_preview_pane_g1

0x75b3,	// (0x00025993) heading_preview_pane_t1_ParamLimits

0x75b3,	// (0x00025993) heading_preview_pane_t1

0x4247,	// (0x00022627) soft_indicator_pane_t1_ParamLimits

0x475c,	// (0x00022b3c) scroll_pane_ParamLimits

0x4b49,	// (0x00022f29) scroll_sc2_left_pane

0x4b40,	// (0x00022f20) scroll_sc2_right_pane

0x4b68,	// (0x00022f48) scroll_bg_pane_g1_ParamLimits

0x4b7d,	// (0x00022f5d) scroll_bg_pane_g2_ParamLimits

0x4b95,	// (0x00022f75) scroll_bg_pane_g3_ParamLimits

0xf6f6,	// (0x0002dad6) scroll_bg_pane_g_ParamLimits

0x4b68,	// (0x00022f48) scroll_handle_pane_g1_ParamLimits

0x4bb7,	// (0x00022f97) scroll_handle_pane_g2_ParamLimits

0x4b95,	// (0x00022f75) scroll_handle_pane_g3_ParamLimits

0xf6fd,	// (0x0002dadd) scroll_handle_pane_g_ParamLimits

0x5492,	// (0x00023872) popup_choice_list_window_ParamLimits

0x5492,	// (0x00023872) popup_choice_list_window

0x56c2,	// (0x00023aa2) choice_list_pane

0x5744,	// (0x00023b24) cell_toolbar_pane_t1

0x576c,	// (0x00023b4c) toolbar_button_pane_ParamLimits

0x66b9,	// (0x00024a99) ai_gene_pane_1_t2_ParamLimits

0x66b9,	// (0x00024a99) ai_gene_pane_1_t2

0x0001,

0xf919,	// (0x0002dcf9) ai_gene_pane_1_t_ParamLimits

0xf919,	// (0x0002dcf9) ai_gene_pane_1_t

0x75d0,	// (0x000259b0) scroll_sc2_left_pane_g1

0x75d0,	// (0x000259b0) scroll_sc2_right_pane_g1

0x4940,	// (0x00022d20) bg_popup_sub_pane_cp10

0x75da,	// (0x000259ba) list_choice_list_pane

0x75f1,	// (0x000259d1) list_single_choice_list_pane_ParamLimits

0x75f1,	// (0x000259d1) list_single_choice_list_pane

0x4923,	// (0x00022d03) list_single_choice_list_pane_g1

0x492b,	// (0x00022d0b) list_single_choice_list_pane_t1_ParamLimits

0x492b,	// (0x00022d0b) list_single_choice_list_pane_t1

0x7604,	// (0x000259e4) choice_list_pane_g1

0x760c,	// (0x000259ec) choice_list_pane_t1

0x4184,	// (0x00022564) input_focus_pane_cp11

0x4ab5,	// (0x00022e95) title_pane_stacon_g2_ParamLimits

0x4ab5,	// (0x00022e95) title_pane_stacon_g2

0x0002,

0xf6dc,	// (0x0002dabc) title_pane_stacon_g_ParamLimits

0xf6dc,	// (0x0002dabc) title_pane_stacon_g

0x521e,	// (0x000235fe) cursor_press_pane

0x9654,	// (0x00027a34) popup_fep_hwr_window_ParamLimits

0x9654,	// (0x00027a34) popup_fep_hwr_window

0x54e6,	// (0x000238c6) popup_fep_vkb_window_ParamLimits

0x54e6,	// (0x000238c6) popup_fep_vkb_window

0x761a,	// (0x000259fa) cursor_press_pane_g1

0x0002,

0xfb38,	// (0x0002df18) fep_vkb_side_pane_g_ParamLimits

0xaa4f,	// (0x00028e2f) fep_hwr_candidate_pane_ParamLimits

0xaa4f,	// (0x00028e2f) fep_hwr_candidate_pane

0xaa79,	// (0x00028e59) fep_hwr_side_pane_ParamLimits

0xaa79,	// (0x00028e59) fep_hwr_side_pane

0xaa99,	// (0x00028e79) fep_hwr_top_pane_ParamLimits

0xaa99,	// (0x00028e79) fep_hwr_top_pane

0xaab1,	// (0x00028e91) fep_hwr_write_pane_ParamLimits

0xaab1,	// (0x00028e91) fep_hwr_write_pane

0xfb38,	// (0x0002df18) fep_vkb_side_pane_g

0x7634,	// (0x00025a14) fep_hwr_top_pane_g1

0x7622,	// (0x00025a02) fep_hwr_top_pane_g2

0xaaeb,	// (0x00028ecb) fep_hwr_top_pane_g3

0x0002,

0xfb14,	// (0x0002def4) fep_hwr_top_pane_g

0xab00,	// (0x00028ee0) fep_hwr_top_text_pane

0x4d0a,	// (0x000230ea) fep_hwr_top_text_pane_g1

0x766a,	// (0x00025a4a) fep_hwr_top_text_pane_t1

0xabf6,	// (0x00028fd6) fep_hwr_candidate_pane_g1

0x7877,	// (0x00025c57) fep_vkb_keypad_pane_g3_ParamLimits

0x7877,	// (0x00025c57) fep_vkb_keypad_pane_g3

0x789f,	// (0x00025c7f) fep_vkb_keypad_pane_g4_ParamLimits

0x789f,	// (0x00025c7f) fep_vkb_keypad_pane_g4

0x790e,	// (0x00025cee) fep_vkb_bottom_pane_g2_ParamLimits

0x790e,	// (0x00025cee) fep_vkb_bottom_pane_g2

0x0001,

0xfb3f,	// (0x0002df1f) fep_vkb_bottom_pane_g_ParamLimits

0xfb3f,	// (0x0002df1f) fep_vkb_bottom_pane_g

0x75d0,	// (0x000259b0) cell_vkb_side_pane_g2

0x0001,

0xfb49,	// (0x0002df29) cell_vkb_side_pane_g

0x7952,	// (0x00025d32) cell_vkb_side_pane_t1

0x7960,	// (0x00025d40) cell_vkb_side_pane_t1_copy1

0x75d0,	// (0x000259b0) bg_fep_vkb_candidate_pane_g2

0x7a3c,	// (0x00025e1c) cell_vkb_candidate_pane_ParamLimits

0x7678,	// (0x00025a58) aid_size_cell_vkb_ParamLimits

0x7678,	// (0x00025a58) aid_size_cell_vkb

0x7a3c,	// (0x00025e1c) cell_vkb_candidate_pane

0xad07,	// (0x000290e7) bg_popup_fep_shadow_pane_g1

0x76f4,	// (0x00025ad4) fep_vkb_bottom_pane_ParamLimits

0x76f4,	// (0x00025ad4) fep_vkb_bottom_pane

0x7731,	// (0x00025b11) fep_vkb_candidate_pane_ParamLimits

0x7731,	// (0x00025b11) fep_vkb_candidate_pane

0x774d,	// (0x00025b2d) fep_vkb_keypad_pane_ParamLimits

0x774d,	// (0x00025b2d) fep_vkb_keypad_pane

0x7793,	// (0x00025b73) fep_vkb_side_pane_ParamLimits

0x7793,	// (0x00025b73) fep_vkb_side_pane

0x77cf,	// (0x00025baf) fep_vkb_top_pane_ParamLimits

0x77cf,	// (0x00025baf) fep_vkb_top_pane

0x780b,	// (0x00025beb) fep_vkb_top_pane_g1_ParamLimits

0x780b,	// (0x00025beb) fep_vkb_top_pane_g1

0x781a,	// (0x00025bfa) fep_vkb_top_pane_g2_ParamLimits

0x781a,	// (0x00025bfa) fep_vkb_top_pane_g2

0x7829,	// (0x00025c09) fep_vkb_top_pane_g3_ParamLimits

0x7829,	// (0x00025c09) fep_vkb_top_pane_g3

0x0003,

0xfb2f,	// (0x0002df0f) fep_vkb_top_pane_g_ParamLimits

0xfb2f,	// (0x0002df0f) fep_vkb_top_pane_g

0x7847,	// (0x00025c27) fep_vkb_top_text_pane_ParamLimits

0x7847,	// (0x00025c27) fep_vkb_top_text_pane

0xac2f,	// (0x0002900f) fep_vkb_side_pane_g1_ParamLimits

0xac2f,	// (0x0002900f) fep_vkb_side_pane_g1

0x7866,	// (0x00025c46) grid_vkb_side_pane_ParamLimits

0x7866,	// (0x00025c46) grid_vkb_side_pane

0xad0f,	// (0x000290ef) bg_popup_fep_shadow_pane_g2

0xad18,	// (0x000290f8) bg_popup_fep_shadow_pane_g3

0xad20,	// (0x00029100) bg_popup_fep_shadow_pane_g4

0xad29,	// (0x00029109) bg_popup_fep_shadow_pane_g5

0xad33,	// (0x00029113) bg_popup_fep_shadow_pane_g6

0xad3b,	// (0x0002911b) bg_popup_fep_shadow_pane_g7

0x4868,	// (0x00022c48) bg_popup_fep_shadow_pane_g8

0x78bd,	// (0x00025c9d) grid_vkb_keypad_number_pane_ParamLimits

0x78bd,	// (0x00025c9d) grid_vkb_keypad_number_pane

0x78cd,	// (0x00025cad) grid_vkb_keypad_pane_ParamLimits

0x78cd,	// (0x00025cad) grid_vkb_keypad_pane

0x78f3,	// (0x00025cd3) fep_vkb_bottom_pane_g1_ParamLimits

0x78f3,	// (0x00025cd3) fep_vkb_bottom_pane_g1

0x791c,	// (0x00025cfc) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x791c,	// (0x00025cfc) grid_vkb_keypad_bottom_left_pane

0x7931,	// (0x00025d11) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7931,	// (0x00025d11) grid_vkb_keypad_bottom_right_pane

0x7946,	// (0x00025d26) fep_vkb_top_text_pane_g1

0xac79,	// (0x00029059) fep_vkb_top_text_pane_t1

0xac8e,	// (0x0002906e) cell_vkb_side_pane_ParamLimits

0xac8e,	// (0x0002906e) cell_vkb_side_pane

0x75d0,	// (0x000259b0) cell_vkb_side_pane_g1

0x796e,	// (0x00025d4e) cell_vkb_keypad_pane_ParamLimits

0x796e,	// (0x00025d4e) cell_vkb_keypad_pane

0x79e9,	// (0x00025dc9) cell_vkb_keypad_pane_g1

0x0008,

0xfb5c,	// (0x0002df3c) bg_popup_fep_shadow_pane_g

0xad4d,	// (0x0002912d) cell_hwr_side_pane_g1

0xad4d,	// (0x0002912d) cell_hwr_side_pane_g2

0x79f3,	// (0x00025dd3) cell_vkb_keypad_pane_t1

0xacb1,	// (0x00029091) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xacb1,	// (0x00029091) cell_vkb_keypad_bottom_left_pane

0xacce,	// (0x000290ae) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xacce,	// (0x000290ae) cell_vkb_keypad_bottom_right_pane

0x75d0,	// (0x000259b0) cell_vkb_keypad_bottom_left_pane_g1

0x75d0,	// (0x000259b0) cell_vkb_keypad_bottom_right_pane_g1

0x7a01,	// (0x00025de1) cell_vkb_keypad_number_pane_ParamLimits

0x7a01,	// (0x00025de1) cell_vkb_keypad_number_pane

0x7a20,	// (0x00025e00) cell_vkb_keypad_number_pane_g1

0x7a2a,	// (0x00025e0a) cell_vkb_keypad_number_pane_g2

0x7a33,	// (0x00025e13) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4e,	// (0x0002df2e) cell_vkb_keypad_number_pane_g

0x79f3,	// (0x00025dd3) cell_vkb_keypad_number_pane_t1

0x7a59,	// (0x00025e39) fep_vkb_candidate_pane_g1

0x0001,

0xfb6f,	// (0x0002df4f) cell_hwr_side_pane_g

0x7a72,	// (0x00025e52) cell_hwr_side_pane_t1

0xad57,	// (0x00029137) cell_hwr_side_pane_t1_copy1

0xad65,	// (0x00029145) cell_hwr_candidate_pane_g1

0xad94,	// (0x00029174) cell_hwr_candidate_pane_t1

0x75d0,	// (0x000259b0) cell_vkb_candidate_pane_g2

0x7ab6,	// (0x00025e96) cell_vkb_candidate_pane_t1

0xaa16,	// (0x00028df6) bg_popup_fep_shadow_pane_ParamLimits

0xaa16,	// (0x00028df6) bg_popup_fep_shadow_pane

0xaacb,	// (0x00028eab) bg_fep_hwr_top_pane_g4

0x7646,	// (0x00025a26) bg_hwr_side_pane_g1_ParamLimits

0x7646,	// (0x00025a26) bg_hwr_side_pane_g1

0xab3c,	// (0x00028f1c) cell_hwr_side_pane_ParamLimits

0xab3c,	// (0x00028f1c) cell_hwr_side_pane

0xab77,	// (0x00028f57) fep_hwr_write_pane_g1_ParamLimits

0xab77,	// (0x00028f57) fep_hwr_write_pane_g1

0xab84,	// (0x00028f64) fep_hwr_write_pane_g2_ParamLimits

0xab84,	// (0x00028f64) fep_hwr_write_pane_g2

0xab91,	// (0x00028f71) fep_hwr_write_pane_g3_ParamLimits

0xab91,	// (0x00028f71) fep_hwr_write_pane_g3

0xab9f,	// (0x00028f7f) fep_hwr_write_pane_g4_ParamLimits

0xab9f,	// (0x00028f7f) fep_hwr_write_pane_g4

0x0005,

0xfb1b,	// (0x0002defb) fep_hwr_write_pane_g_ParamLimits

0xfb1b,	// (0x0002defb) fep_hwr_write_pane_g

0xaacb,	// (0x00028eab) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xaacb,	// (0x00028eab) bg_fep_hwr_candidate_pane_g2

0xabb4,	// (0x00028f94) cell_hwr_candidate_pane_ParamLimits

0xabb4,	// (0x00028f94) cell_hwr_candidate_pane

0xabf6,	// (0x00028fd6) fep_hwr_candidate_pane_g1_ParamLimits

0x76a6,	// (0x00025a86) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x76a6,	// (0x00025a86) bg_popup_fep_shadow_pane_cp2

0x7839,	// (0x00025c19) fep_vkb_top_pane_g4_ParamLimits

0x7839,	// (0x00025c19) fep_vkb_top_pane_g4

0x7858,	// (0x00025c38) fep_vkb_side_pane_g2_ParamLimits

0x7858,	// (0x00025c38) fep_vkb_side_pane_g2

0xe3d9,	// (0x0002c7b9) list_setting_pane_t4_ParamLimits

0xe3d9,	// (0x0002c7b9) list_setting_pane_t4

0xe46b,	// (0x0002c84b) list_setting_number_pane_t5_ParamLimits

0xe46b,	// (0x0002c84b) list_setting_number_pane_t5

0x8ff9,	// (0x000273d9) list_double_heading_pane_cp2_ParamLimits

0x8ff9,	// (0x000273d9) list_double_heading_pane_cp2

0x4803,	// (0x00022be3) list_double_heading_pane_g1_cp2_ParamLimits

0x4803,	// (0x00022be3) list_double_heading_pane_g1_cp2

0x480f,	// (0x00022bef) list_double_heading_pane_g2_cp2_ParamLimits

0x480f,	// (0x00022bef) list_double_heading_pane_g2_cp2

0x7ac4,	// (0x00025ea4) list_double_heading_pane_t1_cp2_ParamLimits

0x7ac4,	// (0x00025ea4) list_double_heading_pane_t1_cp2

0x7ada,	// (0x00025eba) list_double_heading_pane_t2_cp2_ParamLimits

0x7ada,	// (0x00025eba) list_double_heading_pane_t2_cp2

0x417c,	// (0x0002255c) aid_value_unit2

0x885b,	// (0x00026c3b) popup_preview_fixed_window

0x4327,	// (0x00022707) bg_popup_preview_window_pane_cp02

0x7aec,	// (0x00025ecc) list_preview_fixed_pane

0x7b32,	// (0x00025f12) list_empty_pane_fp_ParamLimits

0x7b32,	// (0x00025f12) list_empty_pane_fp

0x7b32,	// (0x00025f12) list_single_cale_day_pane_fp_ParamLimits

0x7b32,	// (0x00025f12) list_single_cale_day_pane_fp

0x7b32,	// (0x00025f12) list_single_graphic_heading_pane_fp_ParamLimits

0x7b32,	// (0x00025f12) list_single_graphic_heading_pane_fp

0x7b32,	// (0x00025f12) list_single_graphic_pane_fp_ParamLimits

0x7b32,	// (0x00025f12) list_single_graphic_pane_fp

0x7b32,	// (0x00025f12) list_single_heading_pane_fp_ParamLimits

0x7b32,	// (0x00025f12) list_single_heading_pane_fp

0x7b32,	// (0x00025f12) list_single_pane_fp_ParamLimits

0x7b32,	// (0x00025f12) list_single_pane_fp

0x7b49,	// (0x00025f29) list_single_pane_fp_g1_ParamLimits

0x7b49,	// (0x00025f29) list_single_pane_fp_g1

0xe23d,	// (0x0002c61d) list_single_pane_fp_g2_ParamLimits

0xe23d,	// (0x0002c61d) list_single_pane_fp_g2

0xebb5,	// (0x0002cf95) list_single_pane_fp_g3_ParamLimits

0xebb5,	// (0x0002cf95) list_single_pane_fp_g3

0x7b55,	// (0x00025f35) list_single_pane_fp_g4_ParamLimits

0x7b55,	// (0x00025f35) list_single_pane_fp_g4

0x0003,

0xfb82,	// (0x0002df62) list_single_pane_fp_g_ParamLimits

0xfb82,	// (0x0002df62) list_single_pane_fp_g

0xebc9,	// (0x0002cfa9) list_single_pane_fp_t1_ParamLimits

0xebc9,	// (0x0002cfa9) list_single_pane_fp_t1

0xebe0,	// (0x0002cfc0) list_single_graphic_pane_fp_g1_ParamLimits

0xebe0,	// (0x0002cfc0) list_single_graphic_pane_fp_g1

0x7b49,	// (0x00025f29) list_single_graphic_pane_fp_g2_ParamLimits

0x7b49,	// (0x00025f29) list_single_graphic_pane_fp_g2

0xe23d,	// (0x0002c61d) list_single_graphic_pane_fp_g3_ParamLimits

0xe23d,	// (0x0002c61d) list_single_graphic_pane_fp_g3

0xebb5,	// (0x0002cf95) list_single_graphic_pane_fp_g4_ParamLimits

0xebb5,	// (0x0002cf95) list_single_graphic_pane_fp_g4

0x7b55,	// (0x00025f35) list_single_graphic_pane_fp_g5_ParamLimits

0x7b55,	// (0x00025f35) list_single_graphic_pane_fp_g5

0x0004,

0xfb8b,	// (0x0002df6b) list_single_graphic_pane_fp_g_ParamLimits

0xfb8b,	// (0x0002df6b) list_single_graphic_pane_fp_g

0xebec,	// (0x0002cfcc) list_single_graphic_pane_fp_t1_ParamLimits

0xebec,	// (0x0002cfcc) list_single_graphic_pane_fp_t1

0xebe0,	// (0x0002cfc0) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xebe0,	// (0x0002cfc0) list_single_graphic_heading_pane_fp_g1

0x7b49,	// (0x00025f29) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7b49,	// (0x00025f29) list_single_graphic_heading_pane_fp_g2

0xe23d,	// (0x0002c61d) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xe23d,	// (0x0002c61d) list_single_graphic_heading_pane_fp_g3

0xebb5,	// (0x0002cf95) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xebb5,	// (0x0002cf95) list_single_graphic_heading_pane_fp_g4

0x7b55,	// (0x00025f35) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7b55,	// (0x00025f35) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8b,	// (0x0002df6b) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8b,	// (0x0002df6b) list_single_graphic_heading_pane_fp_g

0xec02,	// (0x0002cfe2) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xec02,	// (0x0002cfe2) list_single_graphic_heading_pane_fp_t1

0xec18,	// (0x0002cff8) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xec18,	// (0x0002cff8) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb96,	// (0x0002df76) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb96,	// (0x0002df76) list_single_graphic_heading_pane_fp_t

0xec2a,	// (0x0002d00a) list_single_cale_day_pane_fp_g1_ParamLimits

0xec2a,	// (0x0002d00a) list_single_cale_day_pane_fp_g1

0x7b61,	// (0x00025f41) list_single_cale_day_pane_fp_g2_ParamLimits

0x7b61,	// (0x00025f41) list_single_cale_day_pane_fp_g2

0xec62,	// (0x0002d042) list_single_cale_day_pane_fp_g3_ParamLimits

0xec62,	// (0x0002d042) list_single_cale_day_pane_fp_g3

0xec8a,	// (0x0002d06a) list_single_cale_day_pane_fp_g4_ParamLimits

0xec8a,	// (0x0002d06a) list_single_cale_day_pane_fp_g4

0xecae,	// (0x0002d08e) list_single_cale_day_pane_fp_g5_ParamLimits

0xecae,	// (0x0002d08e) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9b,	// (0x0002df7b) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9b,	// (0x0002df7b) list_single_cale_day_pane_fp_g

0xecd2,	// (0x0002d0b2) list_single_cale_day_pane_fp_t1_ParamLimits

0xecd2,	// (0x0002d0b2) list_single_cale_day_pane_fp_t1

0xecf8,	// (0x0002d0d8) list_single_cale_day_pane_fp_t2_ParamLimits

0xecf8,	// (0x0002d0d8) list_single_cale_day_pane_fp_t2

0xed11,	// (0x0002d0f1) list_single_cale_day_pane_fp_t3_ParamLimits

0xed11,	// (0x0002d0f1) list_single_cale_day_pane_fp_t3

0x0002,

0xfba6,	// (0x0002df86) list_single_cale_day_pane_fp_t_ParamLimits

0xfba6,	// (0x0002df86) list_single_cale_day_pane_fp_t

0x7b49,	// (0x00025f29) list_empty_pane_fp_g1_ParamLimits

0x7b49,	// (0x00025f29) list_empty_pane_fp_g1

0xed2a,	// (0x0002d10a) list_empty_pane_fp_t1

0xed38,	// (0x0002d118) list_empty_pane_fp_t2

0x0001,

0xfbad,	// (0x0002df8d) list_empty_pane_fp_t

0x7b49,	// (0x00025f29) list_single_heading_pane_fp_g1_ParamLimits

0x7b49,	// (0x00025f29) list_single_heading_pane_fp_g1

0xe23d,	// (0x0002c61d) list_single_heading_pane_fp_g2_ParamLimits

0xe23d,	// (0x0002c61d) list_single_heading_pane_fp_g2

0xebb5,	// (0x0002cf95) list_single_heading_pane_fp_g3_ParamLimits

0xebb5,	// (0x0002cf95) list_single_heading_pane_fp_g3

0x0002,

0xfbb2,	// (0x0002df92) list_single_heading_pane_fp_g_ParamLimits

0xfbb2,	// (0x0002df92) list_single_heading_pane_fp_g

0xed46,	// (0x0002d126) list_single_heading_pane_fp_t1_ParamLimits

0xed46,	// (0x0002d126) list_single_heading_pane_fp_t1

0xed58,	// (0x0002d138) list_single_heading_pane_fp_t2_ParamLimits

0xed58,	// (0x0002d138) list_single_heading_pane_fp_t2

0x0001,

0xfbb9,	// (0x0002df99) list_single_heading_pane_fp_t_ParamLimits

0xfbb9,	// (0x0002df99) list_single_heading_pane_fp_t

0x494c,	// (0x00022d2c) aid_size_cell_fast

0x430a,	// (0x000226ea) soft_indicator_pane_cp1_t1

0x4989,	// (0x00022d69) cell_app_pane_cp2_ParamLimits

0x4989,	// (0x00022d69) cell_app_pane_cp2

0xaa38,	// (0x00028e18) fep_hwr_candidate_drop_down_list_pane

0xac10,	// (0x00028ff0) fep_hwr_candidate_pane_g3_ParamLimits

0xac10,	// (0x00028ff0) fep_hwr_candidate_pane_g3

0x3db0,	// (0x00022190) fep_hwr_candidate_pane_g4_ParamLimits

0x3db0,	// (0x00022190) fep_hwr_candidate_pane_g4

0x0002,

0xfb28,	// (0x0002df08) fep_hwr_candidate_pane_g_ParamLimits

0xfb28,	// (0x0002df08) fep_hwr_candidate_pane_g

0x7720,	// (0x00025b00) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7720,	// (0x00025b00) fep_vkb_candidate_drop_down_list_pane

0x7a61,	// (0x00025e41) fep_vkb_candidate_pane_g3

0x7a69,	// (0x00025e49) fep_vkb_candidate_pane_g4

0x0002,

0xfb55,	// (0x0002df35) fep_vkb_candidate_pane_g

0xad65,	// (0x00029145) cell_hwr_candidate_pane_g1_ParamLimits

0xad73,	// (0x00029153) cell_hwr_candidate_pane_g3_ParamLimits

0xad73,	// (0x00029153) cell_hwr_candidate_pane_g3

0xc0f7,	// (0x0002a4d7) cell_hwr_candidate_pane_g4_ParamLimits

0xc0f7,	// (0x0002a4d7) cell_hwr_candidate_pane_g4

0x0002,

0xfb74,	// (0x0002df54) cell_hwr_candidate_pane_g_ParamLimits

0xfb74,	// (0x0002df54) cell_hwr_candidate_pane_g

0x7a80,	// (0x00025e60) cell_vkb_candidate_pane_g3_ParamLimits

0x7a80,	// (0x00025e60) cell_vkb_candidate_pane_g3

0x7a9b,	// (0x00025e7b) cell_vkb_candidate_pane_g4_ParamLimits

0x7a9b,	// (0x00025e7b) cell_vkb_candidate_pane_g4

0xadb2,	// (0x00029192) cell_app_pane_cp2_g1_ParamLimits

0xadb2,	// (0x00029192) cell_app_pane_cp2_g1

0xadd0,	// (0x000291b0) cell_app_pane_cp2_g2_ParamLimits

0xadd0,	// (0x000291b0) cell_app_pane_cp2_g2

0x0001,

0xfbbe,	// (0x0002df9e) cell_app_pane_cp2_g_ParamLimits

0xfbbe,	// (0x0002df9e) cell_app_pane_cp2_g

0xaddc,	// (0x000291bc) cell_app_pane_cp2_t1_ParamLimits

0xaddc,	// (0x000291bc) cell_app_pane_cp2_t1

0x47e9,	// (0x00022bc9) grid_highlight_pane_cp1_ParamLimits

0x47e9,	// (0x00022bc9) grid_highlight_pane_cp1

0xadee,	// (0x000291ce) cell_hwr_candidate_pane_cp1_ParamLimits

0xadee,	// (0x000291ce) cell_hwr_candidate_pane_cp1

0xad65,	// (0x00029145) fep_hwr_candidate_drop_down_list_pane_g1

0xae0d,	// (0x000291ed) fep_hwr_candidate_drop_down_list_pane_g2

0xae1a,	// (0x000291fa) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc3,	// (0x0002dfa3) fep_hwr_candidate_drop_down_list_pane_g

0xae27,	// (0x00029207) fep_hwr_candidate_drop_down_list_scroll_pane

0xae30,	// (0x00029210) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xae30,	// (0x00029210) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xae3d,	// (0x0002921d) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xae3d,	// (0x0002921d) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xae4a,	// (0x0002922a) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xae4a,	// (0x0002922a) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xae57,	// (0x00029237) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xae57,	// (0x00029237) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xae72,	// (0x00029252) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xae72,	// (0x00029252) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xae8d,	// (0x0002926d) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xae8d,	// (0x0002926d) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xaea8,	// (0x00029288) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xaea8,	// (0x00029288) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xaec3,	// (0x000292a3) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xaec3,	// (0x000292a3) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbca,	// (0x0002dfaa) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbca,	// (0x0002dfaa) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xaede,	// (0x000292be) cell_vkb_candidate_pane_cp1_ParamLimits

0xaede,	// (0x000292be) cell_vkb_candidate_pane_cp1

0x7839,	// (0x00025c19) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7839,	// (0x00025c19) fep_vkb_candidate_drop_down_list_pane_g1

0xaefe,	// (0x000292de) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xaefe,	// (0x000292de) fep_vkb_candidate_drop_down_list_pane_g2

0xaf0b,	// (0x000292eb) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xaf0b,	// (0x000292eb) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbdb,	// (0x0002dfbb) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbdb,	// (0x0002dfbb) fep_vkb_candidate_drop_down_list_pane_g

0xaf18,	// (0x000292f8) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xaf18,	// (0x000292f8) fep_vkb_candidate_drop_down_list_scroll_pane

0xaf25,	// (0x00029305) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xaf25,	// (0x00029305) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xaf32,	// (0x00029312) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xaf32,	// (0x00029312) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xaf3e,	// (0x0002931e) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xaf3e,	// (0x0002931e) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xaf4a,	// (0x0002932a) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xaf4a,	// (0x0002932a) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xaf6b,	// (0x0002934b) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xaf6b,	// (0x0002934b) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xaf8c,	// (0x0002936c) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xaf8c,	// (0x0002936c) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xafad,	// (0x0002938d) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xafad,	// (0x0002938d) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xafce,	// (0x000293ae) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xafce,	// (0x000293ae) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe2,	// (0x0002dfc2) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe2,	// (0x0002dfc2) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x8965,	// (0x00026d45) title_pane_g1_ParamLimits

0x8972,	// (0x00026d52) title_pane_g2_ParamLimits

0xf566,	// (0x0002d946) title_pane_g_ParamLimits

0x4d02,	// (0x000230e2) aid_call2_pane

0x4cfa,	// (0x000230da) aid_call_pane

0x4d0a,	// (0x000230ea) popup_clock_analogue_window_g1

0x4d0a,	// (0x000230ea) popup_clock_analogue_window_g2

0x8fda,	// (0x000273ba) popup_clock_analogue_window_g3

0x8fe3,	// (0x000273c3) popup_clock_analogue_window_g4

0x418e,	// (0x0002256e) popup_clock_analogue_window_g5

0x0004,

0xf70b,	// (0x0002daeb) popup_clock_analogue_window_g

0x8feb,	// (0x000273cb) popup_clock_analogue_window_t1

0x9022,	// (0x00027402) clock_digital_number_pane_ParamLimits

0x9022,	// (0x00027402) clock_digital_number_pane

0x902e,	// (0x0002740e) clock_digital_number_pane_cp02_ParamLimits

0x902e,	// (0x0002740e) clock_digital_number_pane_cp02

0x903a,	// (0x0002741a) clock_digital_number_pane_cp03_ParamLimits

0x903a,	// (0x0002741a) clock_digital_number_pane_cp03

0x9046,	// (0x00027426) clock_digital_number_pane_cp04_ParamLimits

0x9046,	// (0x00027426) clock_digital_number_pane_cp04

0x9052,	// (0x00027432) clock_digital_separator_pane_ParamLimits

0x9052,	// (0x00027432) clock_digital_separator_pane

0x905e,	// (0x0002743e) popup_clock_digital_window_t1_ParamLimits

0x905e,	// (0x0002743e) popup_clock_digital_window_t1

0x418e,	// (0x0002256e) clock_digital_number_pane_g1

0x418e,	// (0x0002256e) clock_digital_number_pane_g2

0x0001,

0xf716,	// (0x0002daf6) clock_digital_number_pane_g

0x418e,	// (0x0002256e) clock_digital_separator_pane_g1

0x418e,	// (0x0002256e) clock_digital_separator_pane_g2

0x0001,

0xf716,	// (0x0002daf6) clock_digital_separator_pane_g

0x9a41,	// (0x00027e21) aid_fill_nsta_ParamLimits

0x9b0a,	// (0x00027eea) indicator_nsta_pane_ParamLimits

0x566b,	// (0x00023a4b) popup_clock_analogue_window

0x566b,	// (0x00023a4b) popup_clock_digital_window

0x41f4,	// (0x000225d4) grid_indicator_nsta_pane_ParamLimits

0x7259,	// (0x00025639) clock_nsta_pane_t2

0x0001,

0xfaa8,	// (0x0002de88) clock_nsta_pane_t

0x8f9e,	// (0x0002737e) aid_size_max_handle

0x8fa8,	// (0x00027388) aid_size_min_handle

0x521e,	// (0x000235fe) editor_scroll_pane

0xafe9,	// (0x000293c9) ex_editor_pane

0x4908,	// (0x00022ce8) scroll_pane_cp13

0x4788,	// (0x00022b68) scroll_pane_cp14

0x4d39,	// (0x00023119) scroll_pane_cp36

0x900b,	// (0x000273eb) list_single_graphic_hl_pane_cp2_ParamLimits

0x900b,	// (0x000273eb) list_single_graphic_hl_pane_cp2

0xa4a9,	// (0x00028889) list_single_graphic_hl_pane_ParamLimits

0xa4a9,	// (0x00028889) list_single_graphic_hl_pane

0xed6e,	// (0x0002d14e) aid_size_min_hl_cp1

0xaff1,	// (0x000293d1) list_highlight_pane_cp34_ParamLimits

0xaff1,	// (0x000293d1) list_highlight_pane_cp34

0xb002,	// (0x000293e2) list_single_graphic_hl_pane_g1_ParamLimits

0xb002,	// (0x000293e2) list_single_graphic_hl_pane_g1

0xed77,	// (0x0002d157) list_single_graphic_hl_pane_g2_ParamLimits

0xed77,	// (0x0002d157) list_single_graphic_hl_pane_g2

0xed77,	// (0x0002d157) list_single_graphic_hl_pane_g3_ParamLimits

0xed77,	// (0x0002d157) list_single_graphic_hl_pane_g3

0xed83,	// (0x0002d163) list_single_graphic_hl_pane_g4_ParamLimits

0xed83,	// (0x0002d163) list_single_graphic_hl_pane_g4

0xed8f,	// (0x0002d16f) list_single_graphic_hl_pane_g5_ParamLimits

0xed8f,	// (0x0002d16f) list_single_graphic_hl_pane_g5

0x0004,

0xfbf3,	// (0x0002dfd3) list_single_graphic_hl_pane_g_ParamLimits

0xfbf3,	// (0x0002dfd3) list_single_graphic_hl_pane_g

0xeda3,	// (0x0002d183) list_single_graphic_hl_pane_t1_ParamLimits

0xeda3,	// (0x0002d183) list_single_graphic_hl_pane_t1

0xb00f,	// (0x000293ef) aid_size_min_hl_cp2

0xb018,	// (0x000293f8) list_highlight_pane_cp34_cp2_ParamLimits

0xb018,	// (0x000293f8) list_highlight_pane_cp34_cp2

0xb002,	// (0x000293e2) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xb002,	// (0x000293e2) list_single_graphic_hl_pane_g1_cp2

0xb025,	// (0x00029405) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xb025,	// (0x00029405) list_single_graphic_hl_pane_g2_cp2

0xb031,	// (0x00029411) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xb031,	// (0x00029411) list_single_graphic_hl_pane_g3_cp2

0x5155,	// (0x00023535) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x5155,	// (0x00023535) list_single_graphic_hl_pane_g4_cp2

0xb03f,	// (0x0002941f) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xb03f,	// (0x0002941f) list_single_graphic_hl_pane_g5_cp2

0x948d,	// (0x0002786d) control_pane_g4_ParamLimits

0x948d,	// (0x0002786d) control_pane_g4

0x4940,	// (0x00022d20) bg_popup_sub_pane_cp10_ParamLimits

0x75da,	// (0x000259ba) list_choice_list_pane_ParamLimits

0x75e9,	// (0x000259c9) scroll_pane_cp23

0x4327,	// (0x00022707) bg_popup_preview_window_pane_cp02_ParamLimits

0x7aec,	// (0x00025ecc) list_preview_fixed_pane_ParamLimits

0x7b02,	// (0x00025ee2) list_preview_fixed_pane_cp_ParamLimits

0x7b02,	// (0x00025ee2) list_preview_fixed_pane_cp

0x7b0e,	// (0x00025eee) popup_preview_fixed_window_g1_ParamLimits

0x7b0e,	// (0x00025eee) popup_preview_fixed_window_g1

0x7b1a,	// (0x00025efa) popup_preview_fixed_window_g2_ParamLimits

0x7b1a,	// (0x00025efa) popup_preview_fixed_window_g2

0x0002,

0xfb7b,	// (0x0002df5b) popup_preview_fixed_window_g_ParamLimits

0xfb7b,	// (0x0002df5b) popup_preview_fixed_window_g

0x8e7a,	// (0x0002725a) aid_navi_side_left_pane_ParamLimits

0x8e8f,	// (0x0002726f) aid_navi_side_right_pane_ParamLimits

0x8ea7,	// (0x00027287) navi_icon_pane_stacon_ParamLimits

0x8ebb,	// (0x0002729b) navi_navi_pane_stacon_ParamLimits

0x8ea7,	// (0x00027287) navi_text_pane_stacon_ParamLimits

0x4184,	// (0x00022564) main_text_info_pane

0xb069,	// (0x00029449) listscroll_text_info_pane

0xb071,	// (0x00029451) list_text_info_pane_ParamLimits

0xb071,	// (0x00029451) list_text_info_pane

0xb080,	// (0x00029460) scroll_pane_cp24_ParamLimits

0xb080,	// (0x00029460) scroll_pane_cp24

0xb09e,	// (0x0002947e) list_text_info_pane_t1_ParamLimits

0xb09e,	// (0x0002947e) list_text_info_pane_t1

0x95d2,	// (0x000279b2) popup_fast_swap2_window_ParamLimits

0x95d2,	// (0x000279b2) popup_fast_swap2_window

0xb0d7,	// (0x000294b7) aid_size_cell_fast2

0x4184,	// (0x00022564) bg_popup_window_pane_cp17

0x5b0f,	// (0x00023eef) heading_pane_cp2

0x450d,	// (0x000228ed) listscroll_fast2_pane

0xb0e1,	// (0x000294c1) grid_fast2_pane

0xb0eb,	// (0x000294cb) listscroll_fast2_pane_g1

0xb0f3,	// (0x000294d3) listscroll_fast2_pane_g2

0x0001,

0xfbfe,	// (0x0002dfde) listscroll_fast2_pane_g

0x4908,	// (0x00022ce8) scroll_pane_cp26

0xb0fd,	// (0x000294dd) cell_fast2_pane_ParamLimits

0xb0fd,	// (0x000294dd) cell_fast2_pane

0xb112,	// (0x000294f2) cell_fast2_pane_g1

0xb11b,	// (0x000294fb) cell_fast2_pane_g2

0xb124,	// (0x00029504) cell_fast2_pane_g3

0x0002,

0xfc03,	// (0x0002dfe3) cell_fast2_pane_g

0x454f,	// (0x0002292f) grid_highlight_pane_cp9

0x4564,	// (0x00022944) main_eswt_pane_ParamLimits

0x4564,	// (0x00022944) main_eswt_pane

0xb095,	// (0x00029475) list_single_text_info_pane

0xb12c,	// (0x0002950c) eswt_ctrl_button_pane

0xb12c,	// (0x0002950c) eswt_ctrl_canvas_pane

0xb134,	// (0x00029514) eswt_ctrl_combo_pane

0xb12c,	// (0x0002950c) eswt_ctrl_default_pane

0xb12c,	// (0x0002950c) eswt_ctrl_label_pane

0xb13c,	// (0x0002951c) eswt_ctrl_wait_pane

0xb144,	// (0x00029524) eswt_shell_pane

0x4184,	// (0x00022564) listscroll_eswt_app_pane

0xb164,	// (0x00029544) popup_eswt_tasktip_window_ParamLimits

0xb164,	// (0x00029544) popup_eswt_tasktip_window

0x5868,	// (0x00023c48) bg_popup_window_pane_cp18

0xb175,	// (0x00029555) eswt_control_pane_g1_ParamLimits

0xb175,	// (0x00029555) eswt_control_pane_g1

0xb182,	// (0x00029562) eswt_control_pane_g2_ParamLimits

0xb182,	// (0x00029562) eswt_control_pane_g2

0xb18f,	// (0x0002956f) eswt_control_pane_g3_ParamLimits

0xb18f,	// (0x0002956f) eswt_control_pane_g3

0xb19c,	// (0x0002957c) eswt_control_pane_g4_ParamLimits

0xb19c,	// (0x0002957c) eswt_control_pane_g4

0x0003,

0xfc0a,	// (0x0002dfea) eswt_control_pane_g_ParamLimits

0xfc0a,	// (0x0002dfea) eswt_control_pane_g

0x47e9,	// (0x00022bc9) bg_button_pane_ParamLimits

0x47e9,	// (0x00022bc9) bg_button_pane

0x4564,	// (0x00022944) common_borders_pane_copy2_ParamLimits

0x4564,	// (0x00022944) common_borders_pane_copy2

0xb1a9,	// (0x00029589) control_button_pane_g1_ParamLimits

0xb1a9,	// (0x00029589) control_button_pane_g1

0xb1b5,	// (0x00029595) control_button_pane_g2_ParamLimits

0xb1b5,	// (0x00029595) control_button_pane_g2

0xb1c1,	// (0x000295a1) control_button_pane_g3_ParamLimits

0xb1c1,	// (0x000295a1) control_button_pane_g3

0x0002,

0xfc13,	// (0x0002dff3) control_button_pane_g_ParamLimits

0xfc13,	// (0x0002dff3) control_button_pane_g

0xb1d5,	// (0x000295b5) control_button_pane_t1

0xb1e3,	// (0x000295c3) control_button_pane_t2

0x0001,

0xfc1a,	// (0x0002dffa) control_button_pane_t

0x5778,	// (0x00023b58) bg_button_pane_g1

0x5780,	// (0x00023b60) bg_button_pane_g2

0x5788,	// (0x00023b68) bg_button_pane_g3

0x5790,	// (0x00023b70) bg_button_pane_g4

0x5798,	// (0x00023b78) bg_button_pane_g5

0x57a0,	// (0x00023b80) bg_button_pane_g6

0x57a8,	// (0x00023b88) bg_button_pane_g7

0x57b0,	// (0x00023b90) bg_button_pane_g8

0x57b8,	// (0x00023b98) bg_button_pane_g9

0x0008,

0xf86d,	// (0x0002dc4d) bg_button_pane_g

0x7595,	// (0x00025975) common_borders_pane_ParamLimits

0x7595,	// (0x00025975) common_borders_pane

0xb175,	// (0x00029555) eswt_control_pane_g1_copy1_ParamLimits

0xb175,	// (0x00029555) eswt_control_pane_g1_copy1

0xb182,	// (0x00029562) eswt_control_pane_g2_copy1_ParamLimits

0xb182,	// (0x00029562) eswt_control_pane_g2_copy1

0xb18f,	// (0x0002956f) eswt_control_pane_g3_copy1_ParamLimits

0xb18f,	// (0x0002956f) eswt_control_pane_g3_copy1

0xb19c,	// (0x0002957c) eswt_control_pane_g4_copy1_ParamLimits

0xb19c,	// (0x0002957c) eswt_control_pane_g4_copy1

0x75d0,	// (0x000259b0) bg_eswt_ctrl_canvas_pane_g1

0x7595,	// (0x00025975) common_borders_pane_cp2_ParamLimits

0x7595,	// (0x00025975) common_borders_pane_cp2

0x7595,	// (0x00025975) common_borders_pane_cp3_ParamLimits

0x7595,	// (0x00025975) common_borders_pane_cp3

0xb1f1,	// (0x000295d1) separator_horizontal_pane

0xb1f9,	// (0x000295d9) separator_vertical_pane

0xb175,	// (0x00029555) eswt_control_pane_g1_copy2_ParamLimits

0xb175,	// (0x00029555) eswt_control_pane_g1_copy2

0xb182,	// (0x00029562) eswt_control_pane_g2_copy2_ParamLimits

0xb182,	// (0x00029562) eswt_control_pane_g2_copy2

0xb18f,	// (0x0002956f) eswt_control_pane_g3_copy2_ParamLimits

0xb18f,	// (0x0002956f) eswt_control_pane_g3_copy2

0xb19c,	// (0x0002957c) eswt_control_pane_g4_copy2_ParamLimits

0xb19c,	// (0x0002957c) eswt_control_pane_g4_copy2

0x4184,	// (0x00022564) common_borders_pane_cp4

0xb202,	// (0x000295e2) separator_horizontal_pane_g1

0xb20b,	// (0x000295eb) separator_horizontal_pane_g2

0xb214,	// (0x000295f4) separator_horizontal_pane_g3

0x0002,

0xfc1f,	// (0x0002dfff) separator_horizontal_pane_g

0xb175,	// (0x00029555) eswt_control_pane_g1_copy3_ParamLimits

0xb175,	// (0x00029555) eswt_control_pane_g1_copy3

0xb182,	// (0x00029562) eswt_control_pane_g2_copy3_ParamLimits

0xb182,	// (0x00029562) eswt_control_pane_g2_copy3

0xb18f,	// (0x0002956f) eswt_control_pane_g3_copy3_ParamLimits

0xb18f,	// (0x0002956f) eswt_control_pane_g3_copy3

0xb19c,	// (0x0002957c) eswt_control_pane_g4_copy3_ParamLimits

0xb19c,	// (0x0002957c) eswt_control_pane_g4_copy3

0x4184,	// (0x00022564) common_borders_pane_cp5

0xb21d,	// (0x000295fd) separator_vertical_pane_g1

0xb226,	// (0x00029606) separator_vertical_pane_g2

0xb22f,	// (0x0002960f) separator_vertical_pane_g3

0x0002,

0xfc26,	// (0x0002e006) separator_vertical_pane_g

0xb175,	// (0x00029555) eswt_control_pane_g1_copy4_ParamLimits

0xb175,	// (0x00029555) eswt_control_pane_g1_copy4

0xb182,	// (0x00029562) eswt_control_pane_g2_copy4_ParamLimits

0xb182,	// (0x00029562) eswt_control_pane_g2_copy4

0xb18f,	// (0x0002956f) eswt_control_pane_g3_copy4_ParamLimits

0xb18f,	// (0x0002956f) eswt_control_pane_g3_copy4

0xb19c,	// (0x0002957c) eswt_control_pane_g4_copy4_ParamLimits

0xb19c,	// (0x0002957c) eswt_control_pane_g4_copy4

0xb238,	// (0x00029618) eswt_ctrl_combo_button_pane

0xb240,	// (0x00029620) eswt_ctrl_input_pane

0xb248,	// (0x00029628) popup_choice_list_window_cp70

0xb250,	// (0x00029630) eswt_ctrl_input_pane_t1

0x4184,	// (0x00022564) input_focus_pane_cp70

0x7595,	// (0x00025975) bg_button_pane_cp70_ParamLimits

0x7595,	// (0x00025975) bg_button_pane_cp70

0xb25e,	// (0x0002963e) eswt_ctrl_combo_button_pane_g1

0xb266,	// (0x00029646) wait_bar_pane_cp70

0x5868,	// (0x00023c48) bg_popup_window_pane_cp70_ParamLimits

0x5868,	// (0x00023c48) bg_popup_window_pane_cp70

0xb26e,	// (0x0002964e) popup_eswt_tasktip_window_t1

0xb284,	// (0x00029664) wait_bar_pane_cp71_ParamLimits

0xb284,	// (0x00029664) wait_bar_pane_cp71

0xb290,	// (0x00029670) grid_eswt_app_pane

0x4b49,	// (0x00022f29) scroll_pane_cp70

0xb299,	// (0x00029679) cell_eswt_app_pane_ParamLimits

0xb299,	// (0x00029679) cell_eswt_app_pane

0xb2cd,	// (0x000296ad) cell_eswt_app_pane_g1_ParamLimits

0xb2cd,	// (0x000296ad) cell_eswt_app_pane_g1

0xb2fc,	// (0x000296dc) cell_eswt_app_pane_g2_ParamLimits

0xb2fc,	// (0x000296dc) cell_eswt_app_pane_g2

0x0001,

0xfc2d,	// (0x0002e00d) cell_eswt_app_pane_g_ParamLimits

0xfc2d,	// (0x0002e00d) cell_eswt_app_pane_g

0xb325,	// (0x00029705) cell_eswt_app_pane_t1_ParamLimits

0xb325,	// (0x00029705) cell_eswt_app_pane_t1

0xb357,	// (0x00029737) grid_highlight_pane_cp70_ParamLimits

0xb357,	// (0x00029737) grid_highlight_pane_cp70

0x50f1,	// (0x000234d1) set_content_pane_g1

0x5407,	// (0x000237e7) status_small_volume_pane

0xb363,	// (0x00029743) status_small_volume_pane_g1

0xb36b,	// (0x0002974b) volume_small2_pane

0xb374,	// (0x00029754) volume_small2_pane_g1

0xb37d,	// (0x0002975d) volume_small2_pane_g2

0xb386,	// (0x00029766) volume_small2_pane_g3

0xb38f,	// (0x0002976f) volume_small2_pane_g4

0xb398,	// (0x00029778) volume_small2_pane_g5

0xb3a1,	// (0x00029781) volume_small2_pane_g6

0xb3aa,	// (0x0002978a) volume_small2_pane_g7

0xb3b3,	// (0x00029793) volume_small2_pane_g8

0xb3bc,	// (0x0002979c) volume_small2_pane_g9

0xb3c5,	// (0x000297a5) volume_small2_pane_g10

0x0009,

0xfc32,	// (0x0002e012) volume_small2_pane_g

0x7946,	// (0x00025d26) fep_vkb_top_text_pane_g1_ParamLimits

0xac79,	// (0x00029059) fep_vkb_top_text_pane_t1_ParamLimits

0x7b26,	// (0x00025f06) popup_preview_fixed_window_g3_ParamLimits

0x7b26,	// (0x00025f06) popup_preview_fixed_window_g3

0x99d4,	// (0x00027db4) popup_toolbar_trans_pane

0xa34d,	// (0x0002872d) aid_height_set_list_ParamLimits

0x60f2,	// (0x000244d2) aid_size_parent_ParamLimits

0x4940,	// (0x00022d20) list_highlight_pane_cp2_ParamLimits

0x50f1,	// (0x000234d1) set_content_pane_g1_ParamLimits

0xe91d,	// (0x0002ccfd) list_single_image_pane_ParamLimits

0xe91d,	// (0x0002ccfd) list_single_image_pane

0xb3ce,	// (0x000297ae) aid_size_cell_image_ParamLimits

0xb3ce,	// (0x000297ae) aid_size_cell_image

0xb3db,	// (0x000297bb) grid_single_image_pane_ParamLimits

0xb3db,	// (0x000297bb) grid_single_image_pane

0x4803,	// (0x00022be3) list_single_image_pane_g1_ParamLimits

0x4803,	// (0x00022be3) list_single_image_pane_g1

0x480f,	// (0x00022bef) list_single_image_pane_g2_ParamLimits

0x480f,	// (0x00022bef) list_single_image_pane_g2

0x0001,

0xfc47,	// (0x0002e027) list_single_image_pane_g_ParamLimits

0xfc47,	// (0x0002e027) list_single_image_pane_g

0xb3e7,	// (0x000297c7) list_single_image_pane_t1_ParamLimits

0xb3e7,	// (0x000297c7) list_single_image_pane_t1

0xb3fd,	// (0x000297dd) cell_image_list_pane_ParamLimits

0xb3fd,	// (0x000297dd) cell_image_list_pane

0xb411,	// (0x000297f1) cell_image_list_pane_g1

0xb41a,	// (0x000297fa) cell_image_list_pane_g2

0x0001,

0xfc4c,	// (0x0002e02c) cell_image_list_pane_g

0xb423,	// (0x00029803) aid_size_cell_tb_trans_pane

0x47e9,	// (0x00022bc9) bg_tb_trans_pane

0xb435,	// (0x00029815) grid_tb_trans_pane

0x5778,	// (0x00023b58) bg_tb_trans_pane_g1

0x5780,	// (0x00023b60) bg_tb_trans_pane_g2

0x5788,	// (0x00023b68) bg_tb_trans_pane_g3

0x5790,	// (0x00023b70) bg_tb_trans_pane_g4

0x5798,	// (0x00023b78) bg_tb_trans_pane_g5

0x57b0,	// (0x00023b90) bg_tb_trans_pane_g6

0x57b8,	// (0x00023b98) bg_tb_trans_pane_g7

0x57a0,	// (0x00023b80) bg_tb_trans_pane_g8

0x57a8,	// (0x00023b88) bg_tb_trans_pane_g9

0x0008,

0xfc51,	// (0x0002e031) bg_tb_trans_pane_g

0xb449,	// (0x00029829) cell_toolbar_trans_pane_ParamLimits

0xb449,	// (0x00029829) cell_toolbar_trans_pane

0x75d0,	// (0x000259b0) cell_toolbar_trans_pane_g1

0xa84c,	// (0x00028c2c) list_form2_midp_pane_t1

0xa85a,	// (0x00028c3a) list_form2_midp_pane_t2

0x0001,

0xfaee,	// (0x0002dece) list_form2_midp_pane_t

0x732e,	// (0x0002570e) scroll_pane_cp51_ParamLimits

0x74a4,	// (0x00025884) form2_midp_wait_pane_g1

0x74ad,	// (0x0002588d) form2_midp_wait_pane_g2

0x74b6,	// (0x00025896) form2_midp_wait_pane_g3

0x0002,

0xfb03,	// (0x0002dee3) form2_midp_wait_pane_g

0x41f4,	// (0x000225d4) list_highlight_pane_cp21_ParamLimits

0x74d6,	// (0x000258b6) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x74e5,	// (0x000258c5) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xe8a9,	// (0x0002cc89) list_single_2graphic_im_pane_ParamLimits

0xe8a9,	// (0x0002cc89) list_single_2graphic_im_pane

0xb46f,	// (0x0002984f) list_single_2graphic_im_pane_g1_ParamLimits

0xb46f,	// (0x0002984f) list_single_2graphic_im_pane_g1

0xb480,	// (0x00029860) list_single_2graphic_im_pane_g2_ParamLimits

0xb480,	// (0x00029860) list_single_2graphic_im_pane_g2

0xb48c,	// (0x0002986c) list_single_2graphic_im_pane_g3_ParamLimits

0xb48c,	// (0x0002986c) list_single_2graphic_im_pane_g3

0x0003,

0xfc64,	// (0x0002e044) list_single_2graphic_im_pane_g_ParamLimits

0xfc64,	// (0x0002e044) list_single_2graphic_im_pane_g

0xb4ac,	// (0x0002988c) list_single_2graphic_im_pane_t1_ParamLimits

0xb4ac,	// (0x0002988c) list_single_2graphic_im_pane_t1

0x7b32,	// (0x00025f12) list_single_graphic_2heading_pane_fp_ParamLimits

0x7b32,	// (0x00025f12) list_single_graphic_2heading_pane_fp

0xebe0,	// (0x0002cfc0) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xebe0,	// (0x0002cfc0) list_single_graphic_2heading_pane_fp_g1

0x7b49,	// (0x00025f29) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7b49,	// (0x00025f29) list_single_graphic_2heading_pane_fp_g2

0xe23d,	// (0x0002c61d) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xe23d,	// (0x0002c61d) list_single_graphic_2heading_pane_fp_g3

0xebb5,	// (0x0002cf95) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xebb5,	// (0x0002cf95) list_single_graphic_2heading_pane_fp_g4

0x7b55,	// (0x00025f35) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7b55,	// (0x00025f35) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8b,	// (0x0002df6b) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8b,	// (0x0002df6b) list_single_graphic_2heading_pane_fp_g

0xedb9,	// (0x0002d199) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xedb9,	// (0x0002d199) list_single_graphic_2heading_pane_fp_t1

0xec18,	// (0x0002cff8) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xec18,	// (0x0002cff8) list_single_graphic_2heading_pane_fp_t2

0xedcf,	// (0x0002d1af) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xedcf,	// (0x0002d1af) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6d,	// (0x0002e04d) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6d,	// (0x0002e04d) list_single_graphic_2heading_pane_fp_t

0x7652,	// (0x00025a32) fep_hwr_write_pane_g5_ParamLimits

0x7652,	// (0x00025a32) fep_hwr_write_pane_g5

0x765e,	// (0x00025a3e) fep_hwr_write_pane_g6_ParamLimits

0x765e,	// (0x00025a3e) fep_hwr_write_pane_g6

0xb144,	// (0x00029524) eswt_shell_pane_ParamLimits

0x5868,	// (0x00023c48) bg_popup_window_pane_cp18_ParamLimits

0x68c8,	// (0x00024ca8) heading_pane_cp70

0xb26e,	// (0x0002964e) popup_eswt_tasktip_window_t1_ParamLimits

0x9a81,	// (0x00027e61) aid_touch_tab_arrow_left

0x9a90,	// (0x00027e70) aid_touch_tab_arrow_right

0x8983,	// (0x00026d63) title_pane_g3_ParamLimits

0x8983,	// (0x00026d63) title_pane_g3

0x47a8,	// (0x00022b88) set_value_pane_g1

0x99d4,	// (0x00027db4) popup_toolbar_trans_pane_ParamLimits

0xb423,	// (0x00029803) aid_size_cell_tb_trans_pane_ParamLimits

0x47e9,	// (0x00022bc9) bg_tb_trans_pane_ParamLimits

0xb435,	// (0x00029815) grid_tb_trans_pane_ParamLimits

0x4327,	// (0x00022707) cont_note_pane_ParamLimits

0x4327,	// (0x00022707) cont_note_pane

0x4564,	// (0x00022944) cont_snote2_single_text_pane_ParamLimits

0x4564,	// (0x00022944) cont_snote2_single_text_pane

0x4564,	// (0x00022944) cont_snote2_single_graphic_pane_ParamLimits

0x4564,	// (0x00022944) cont_snote2_single_graphic_pane

0x5d25,	// (0x00024105) cont_note_wait_pane_ParamLimits

0x5d25,	// (0x00024105) cont_note_wait_pane

0x5d25,	// (0x00024105) cont_note_image_pane_ParamLimits

0x5d25,	// (0x00024105) cont_note_image_pane

0xb4dd,	// (0x000298bd) popup_note2_window_g1_ParamLimits

0xb4dd,	// (0x000298bd) popup_note2_window_g1

0xb50e,	// (0x000298ee) popup_note2_window_t1_ParamLimits

0xb50e,	// (0x000298ee) popup_note2_window_t1

0xb553,	// (0x00029933) popup_note2_window_t2_ParamLimits

0xb553,	// (0x00029933) popup_note2_window_t2

0xb598,	// (0x00029978) popup_note2_window_t3_ParamLimits

0xb598,	// (0x00029978) popup_note2_window_t3

0xb5dd,	// (0x000299bd) popup_note2_window_t4_ParamLimits

0xb5dd,	// (0x000299bd) popup_note2_window_t4

0x439f,	// (0x0002277f) popup_note2_window_t5_ParamLimits

0x439f,	// (0x0002277f) popup_note2_window_t5

0x0004,

0xfc79,	// (0x0002e059) popup_note2_window_t_ParamLimits

0xfc79,	// (0x0002e059) popup_note2_window_t

0xb60c,	// (0x000299ec) popup_note2_image_window_g1_ParamLimits

0xb60c,	// (0x000299ec) popup_note2_image_window_g1

0xb618,	// (0x000299f8) popup_note2_image_window_g2_ParamLimits

0xb618,	// (0x000299f8) popup_note2_image_window_g2

0x0001,

0xfc84,	// (0x0002e064) popup_note2_image_window_g_ParamLimits

0xfc84,	// (0x0002e064) popup_note2_image_window_g

0xb62a,	// (0x00029a0a) popup_note2_image_window_t1_ParamLimits

0xb62a,	// (0x00029a0a) popup_note2_image_window_t1

0xb642,	// (0x00029a22) popup_note2_image_window_t2_ParamLimits

0xb642,	// (0x00029a22) popup_note2_image_window_t2

0xb65a,	// (0x00029a3a) popup_note2_image_window_t3_ParamLimits

0xb65a,	// (0x00029a3a) popup_note2_image_window_t3

0x0002,

0xfc89,	// (0x0002e069) popup_note2_image_window_t_ParamLimits

0xfc89,	// (0x0002e069) popup_note2_image_window_t

0x5d33,	// (0x00024113) popup_note2_wait_window_g1_ParamLimits

0x5d33,	// (0x00024113) popup_note2_wait_window_g1

0x5d3f,	// (0x0002411f) popup_note2_wait_window_g2_ParamLimits

0x5d3f,	// (0x0002411f) popup_note2_wait_window_g2

0x5d4b,	// (0x0002412b) popup_note2_wait_window_g3_ParamLimits

0x5d4b,	// (0x0002412b) popup_note2_wait_window_g3

0x0002,

0xf84f,	// (0x0002dc2f) popup_note2_wait_window_g_ParamLimits

0xf84f,	// (0x0002dc2f) popup_note2_wait_window_g

0xb676,	// (0x00029a56) popup_note2_wait_window_t1_ParamLimits

0xb676,	// (0x00029a56) popup_note2_wait_window_t1

0xb694,	// (0x00029a74) popup_note2_wait_window_t2_ParamLimits

0xb694,	// (0x00029a74) popup_note2_wait_window_t2

0xb6b2,	// (0x00029a92) popup_note2_wait_window_t3_ParamLimits

0xb6b2,	// (0x00029a92) popup_note2_wait_window_t3

0xb6c4,	// (0x00029aa4) popup_note2_wait_window_t4_ParamLimits

0xb6c4,	// (0x00029aa4) popup_note2_wait_window_t4

0x0003,

0xfc90,	// (0x0002e070) popup_note2_wait_window_t_ParamLimits

0xfc90,	// (0x0002e070) popup_note2_wait_window_t

0xb6d6,	// (0x00029ab6) wait_bar2_pane_ParamLimits

0xb6d6,	// (0x00029ab6) wait_bar2_pane

0xb6ee,	// (0x00029ace) popup_snote2_single_text_window_g1_ParamLimits

0xb6ee,	// (0x00029ace) popup_snote2_single_text_window_g1

0xb716,	// (0x00029af6) popup_snote2_single_text_window_t1_ParamLimits

0xb716,	// (0x00029af6) popup_snote2_single_text_window_t1

0xb762,	// (0x00029b42) popup_snote2_single_text_window_t2_ParamLimits

0xb762,	// (0x00029b42) popup_snote2_single_text_window_t2

0xb7ae,	// (0x00029b8e) popup_snote2_single_text_window_t3_ParamLimits

0xb7ae,	// (0x00029b8e) popup_snote2_single_text_window_t3

0xb7ef,	// (0x00029bcf) popup_snote2_single_text_window_t4_ParamLimits

0xb7ef,	// (0x00029bcf) popup_snote2_single_text_window_t4

0xc118,	// (0x0002a4f8) popup_snote2_single_text_window_t5_ParamLimits

0xc118,	// (0x0002a4f8) popup_snote2_single_text_window_t5

0x0004,

0xfc99,	// (0x0002e079) popup_snote2_single_text_window_t_ParamLimits

0xfc99,	// (0x0002e079) popup_snote2_single_text_window_t

0xc143,	// (0x0002a523) popup_snote2_single_graphic_window_g1_ParamLimits

0xc143,	// (0x0002a523) popup_snote2_single_graphic_window_g1

0xc16b,	// (0x0002a54b) popup_snote2_single_graphic_window_g2_ParamLimits

0xc16b,	// (0x0002a54b) popup_snote2_single_graphic_window_g2

0x0001,

0xfca4,	// (0x0002e084) popup_snote2_single_graphic_window_g_ParamLimits

0xfca4,	// (0x0002e084) popup_snote2_single_graphic_window_g

0xc193,	// (0x0002a573) popup_snote2_single_graphic_window_t1_ParamLimits

0xc193,	// (0x0002a573) popup_snote2_single_graphic_window_t1

0xc1df,	// (0x0002a5bf) popup_snote2_single_graphic_window_t2_ParamLimits

0xc1df,	// (0x0002a5bf) popup_snote2_single_graphic_window_t2

0xb7ae,	// (0x00029b8e) popup_snote2_single_graphic_window_t3_ParamLimits

0xb7ae,	// (0x00029b8e) popup_snote2_single_graphic_window_t3

0xb7ef,	// (0x00029bcf) popup_snote2_single_graphic_window_t4_ParamLimits

0xb7ef,	// (0x00029bcf) popup_snote2_single_graphic_window_t4

0xc118,	// (0x0002a4f8) popup_snote2_single_graphic_window_t5_ParamLimits

0xc118,	// (0x0002a4f8) popup_snote2_single_graphic_window_t5

0x0004,

0xfca9,	// (0x0002e089) popup_snote2_single_graphic_window_t_ParamLimits

0xfca9,	// (0x0002e089) popup_snote2_single_graphic_window_t

0x72c0,	// (0x000256a0) clock_nsta_pane_cp2_t1

0x72c0,	// (0x000256a0) clock_nsta_pane_cp2_t2

0x0001,

0xfac4,	// (0x0002dea4) clock_nsta_pane_cp2_t

0xe570,	// (0x0002c950) form_field_data_wide_pane_g1_ParamLimits

0x4803,	// (0x00022be3) form_field_data_wide_pane_g2_ParamLimits

0x4803,	// (0x00022be3) form_field_data_wide_pane_g2

0x480f,	// (0x00022bef) form_field_data_wide_pane_g3_ParamLimits

0x480f,	// (0x00022bef) form_field_data_wide_pane_g3

0x0002,

0xf68e,	// (0x0002da6e) form_field_data_wide_pane_g_ParamLimits

0xf68e,	// (0x0002da6e) form_field_data_wide_pane_g

0xa6e4,	// (0x00028ac4) grid_touch_3_pane_ParamLimits

0xa6e4,	// (0x00028ac4) grid_touch_3_pane

0xc22b,	// (0x0002a60b) cell_touch_3_pane_ParamLimits

0xc22b,	// (0x0002a60b) cell_touch_3_pane

0x75d0,	// (0x000259b0) cell_touch_3_pane_g1

0x75d0,	// (0x000259b0) cell_touch_3_pane_g2

0x0001,

0xfb49,	// (0x0002df29) cell_touch_3_pane_g

0x43d1,	// (0x000227b1) cont_query_data_pane

0x43d9,	// (0x000227b9) cont_query_data_pane_cp1

0xc25a,	// (0x0002a63a) button_value_adjust_pane_cp7

0xc262,	// (0x0002a642) query_popup_pane_cp3

0x4d6b,	// (0x0002314b) bg_popup_sub_pane_cp22_ParamLimits

0x90df,	// (0x000274bf) navi_navi_volume_pane_cp2

0x90fa,	// (0x000274da) popup_side_volume_key_window_g2

0x9109,	// (0x000274e9) popup_side_volume_key_window_g3

0x0002,

0xf724,	// (0x0002db04) popup_side_volume_key_window_g

0x9126,	// (0x00027506) popup_side_volume_key_window_t2

0x0001,

0xf72b,	// (0x0002db0b) popup_side_volume_key_window_t

0x4fbb,	// (0x0002339b) popup_side_volume_key_window_ParamLimits

0xe209,	// (0x0002c5e9) list_double_graphic_pane_g4_ParamLimits

0xe209,	// (0x0002c5e9) list_double_graphic_pane_g4

0xe8f6,	// (0x0002ccd6) list_single_2heading_msg_pane_ParamLimits

0xe8f6,	// (0x0002ccd6) list_single_2heading_msg_pane

0xedef,	// (0x0002d1cf) list_single_2heading_msg_pane_g1_ParamLimits

0xedef,	// (0x0002d1cf) list_single_2heading_msg_pane_g1

0xe05a,	// (0x0002c43a) list_single_2heading_msg_pane_g2_ParamLimits

0xe05a,	// (0x0002c43a) list_single_2heading_msg_pane_g2

0xe9dc,	// (0x0002cdbc) list_single_2heading_msg_pane_g3_ParamLimits

0xe9dc,	// (0x0002cdbc) list_single_2heading_msg_pane_g3

0xedfb,	// (0x0002d1db) list_single_2heading_msg_pane_g4_ParamLimits

0xedfb,	// (0x0002d1db) list_single_2heading_msg_pane_g4

0x0003,

0xfcb4,	// (0x0002e094) list_single_2heading_msg_pane_g_ParamLimits

0xfcb4,	// (0x0002e094) list_single_2heading_msg_pane_g

0xee13,	// (0x0002d1f3) list_single_2heading_msg_pane_t1_ParamLimits

0xee13,	// (0x0002d1f3) list_single_2heading_msg_pane_t1

0xee3b,	// (0x0002d21b) list_single_2heading_msg_pane_t2_ParamLimits

0xee3b,	// (0x0002d21b) list_single_2heading_msg_pane_t2

0xee6f,	// (0x0002d24f) list_single_2heading_msg_pane_t3_ParamLimits

0xee6f,	// (0x0002d24f) list_single_2heading_msg_pane_t3

0xeea8,	// (0x0002d288) list_single_2heading_msg_pane_t4_ParamLimits

0xeea8,	// (0x0002d288) list_single_2heading_msg_pane_t4

0x0003,

0xfcbd,	// (0x0002e09d) list_single_2heading_msg_pane_t_ParamLimits

0xfcbd,	// (0x0002e09d) list_single_2heading_msg_pane_t

0x41a2,	// (0x00022582) title_pane_g4_ParamLimits

0x41a2,	// (0x00022582) title_pane_g4

0x8dca,	// (0x000271aa) title_pane_stacon_g3_ParamLimits

0x8dca,	// (0x000271aa) title_pane_stacon_g3

0xb4a0,	// (0x00029880) list_single_2graphic_im_pane_g4_ParamLimits

0xb4a0,	// (0x00029880) list_single_2graphic_im_pane_g4

0x66d6,	// (0x00024ab6) popup_side_volume_key_window_cp

0x6be7,	// (0x00024fc7) main_idle_act2_pane_t1

0x9d7f,	// (0x0002815f) toolbar_button_pane_g10

0x8cca,	// (0x000270aa) popup_toolbar_window_cp1

0x72b1,	// (0x00025691) clock_nsta_pane_cp_t1

0x72b1,	// (0x00025691) clock_nsta_pane_cp_t2

0x0001,

0xfabf,	// (0x0002de9f) clock_nsta_pane_cp_t

0x90df,	// (0x000274bf) navi_navi_volume_pane_cp2_ParamLimits

0x90ee,	// (0x000274ce) popup_side_volume_key_window_g1_ParamLimits

0x90fa,	// (0x000274da) popup_side_volume_key_window_g2_ParamLimits

0x9109,	// (0x000274e9) popup_side_volume_key_window_g3_ParamLimits

0xf724,	// (0x0002db04) popup_side_volume_key_window_g_ParamLimits

0xaa24,	// (0x00028e04) fep_hwr_aid_pane

0xaacb,	// (0x00028eab) bg_fep_hwr_top_pane_g4_ParamLimits

0x7634,	// (0x00025a14) fep_hwr_top_pane_g1_ParamLimits

0x7622,	// (0x00025a02) fep_hwr_top_pane_g2_ParamLimits

0xaaeb,	// (0x00028ecb) fep_hwr_top_pane_g3_ParamLimits

0xfb14,	// (0x0002def4) fep_hwr_top_pane_g_ParamLimits

0xab00,	// (0x00028ee0) fep_hwr_top_text_pane_ParamLimits

0x64a0,	// (0x00024880) aid_touch_tab_arrow_arrow_2

0x6497,	// (0x00024877) aid_touch_tab_arrow_left_2

0xaa38,	// (0x00028e18) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xaa6f,	// (0x00028e4f) fep_hwr_prediction_pane

0x7789,	// (0x00025b69) fep_vkb_prediction_pane

0xac56,	// (0x00029036) fep_vkb_side_pane_g3_ParamLimits

0xac56,	// (0x00029036) fep_vkb_side_pane_g3

0xad65,	// (0x00029145) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xae0d,	// (0x000291ed) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xae1a,	// (0x000291fa) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc3,	// (0x0002dfa3) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xb825,	// (0x00029c05) fep_hwr_prediction_pane_g1

0xb82f,	// (0x00029c0f) fep_hwr_prediction_pane_g2

0xb837,	// (0x00029c17) fep_hwr_prediction_pane_g3

0xb83f,	// (0x00029c1f) fep_hwr_prediction_pane_g4

0x0003,

0xfcc6,	// (0x0002e0a6) fep_hwr_prediction_pane_g

0xc287,	// (0x0002a667) fep_vkb_prediction_pane_g1

0xc291,	// (0x0002a671) fep_vkb_prediction_pane_g2

0xc299,	// (0x0002a679) fep_vkb_prediction_pane_g3

0xc2a1,	// (0x0002a681) fep_vkb_prediction_pane_g4

0x0003,

0xfccf,	// (0x0002e0af) fep_vkb_prediction_pane_g

0xa2f5,	// (0x000286d5) slider_set_pane_g3

0xa309,	// (0x000286e9) slider_set_pane_g4

0xa321,	// (0x00028701) slider_set_pane_g5

0xa2f5,	// (0x000286d5) slider_set_pane_g6

0xa337,	// (0x00028717) slider_set_pane_g7

0x694d,	// (0x00024d2d) slider_form_pane_g3

0x6956,	// (0x00024d36) slider_form_pane_g4

0x695e,	// (0x00024d3e) slider_form_pane_g5

0x694d,	// (0x00024d2d) slider_form_pane_g6

0xa4a0,	// (0x00028880) slider_form_pane_g7

0x6e85,	// (0x00025265) slider_set_pane_vc_g3

0x6e8e,	// (0x0002526e) slider_set_pane_vc_g4

0x6e97,	// (0x00025277) slider_set_pane_vc_g5

0x6e85,	// (0x00025265) slider_set_pane_vc_g6

0x6ea0,	// (0x00025280) slider_set_pane_vc_g7

0x6e85,	// (0x00025265) slider_form_pane_vc_g1

0x6e8e,	// (0x0002526e) slider_form_pane_vc_g2

0x6e97,	// (0x00025277) slider_form_pane_vc_g3

0x6e85,	// (0x00025265) slider_form_pane_vc_g4

0x7029,	// (0x00025409) slider_form_pane_vc_g5

0x0004,

0xfa98,	// (0x0002de78) slider_form_pane_vc_g

0x4184,	// (0x00022564) main_idle_act3_pane

0xc2a9,	// (0x0002a689) ai3_links_pane

0xc2b2,	// (0x0002a692) popup_ai3_data_window_ParamLimits

0xc2b2,	// (0x0002a692) popup_ai3_data_window

0x4184,	// (0x00022564) grid_ai3_links_pane

0xc2ca,	// (0x0002a6aa) cell_ai3_links_pane_ParamLimits

0xc2ca,	// (0x0002a6aa) cell_ai3_links_pane

0xc2e2,	// (0x0002a6c2) bg_popup_sub_pane_cp11

0xc2ef,	// (0x0002a6cf) cell_ai3_links_pane_g1

0x4184,	// (0x00022564) bg_popup_sub_pane_cp12

0xc314,	// (0x0002a6f4) heading_ai3_data_pane

0xc31c,	// (0x0002a6fc) list_ai3_gene_pane

0xc328,	// (0x0002a708) popup_ai3_data_window_g1

0xc330,	// (0x0002a710) heading_ai3_data_pane_g1

0xc338,	// (0x0002a718) heading_ai3_data_pane_t1

0xc346,	// (0x0002a726) list_double_ai3_gene_pane_ParamLimits

0xc346,	// (0x0002a726) list_double_ai3_gene_pane

0xc353,	// (0x0002a733) list_single_ai3_gene_pane_ParamLimits

0xc353,	// (0x0002a733) list_single_ai3_gene_pane

0x7595,	// (0x00025975) list_highlight_pane_cp7_ParamLimits

0x7595,	// (0x00025975) list_highlight_pane_cp7

0xc360,	// (0x0002a740) list_single_a13_gene_pane_t1_ParamLimits

0xc360,	// (0x0002a740) list_single_a13_gene_pane_t1

0xc377,	// (0x0002a757) list_single_ai3_gene_pane_g1

0xc380,	// (0x0002a760) list_single_ai3_gene_pane_g2

0x0001,

0xfcd8,	// (0x0002e0b8) list_single_ai3_gene_pane_g

0xc388,	// (0x0002a768) list_double_ai3_gene_pane_g1_ParamLimits

0xc388,	// (0x0002a768) list_double_ai3_gene_pane_g1

0xc394,	// (0x0002a774) list_double_ai3_gene_pane_t1_ParamLimits

0xc394,	// (0x0002a774) list_double_ai3_gene_pane_t1

0xc3b0,	// (0x0002a790) list_double_ai3_gene_pane_t2_ParamLimits

0xc3b0,	// (0x0002a790) list_double_ai3_gene_pane_t2

0xc3c5,	// (0x0002a7a5) list_double_ai3_gene_pane_t3_ParamLimits

0xc3c5,	// (0x0002a7a5) list_double_ai3_gene_pane_t3

0x0002,

0xfcdd,	// (0x0002e0bd) list_double_ai3_gene_pane_t_ParamLimits

0xfcdd,	// (0x0002e0bd) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xede5,	// (0x0002d1c5) aid_size_min_col_2

0xc273,	// (0x0002a653) aid_size_min_msg_ParamLimits

0xc273,	// (0x0002a653) aid_size_min_msg

0xac6a,	// (0x0002904a) fep_vkb_top_text_pane_g2_ParamLimits

0xac6a,	// (0x0002904a) fep_vkb_top_text_pane_g2

0x0001,

0xfb44,	// (0x0002df24) fep_vkb_top_text_pane_g_ParamLimits

0xfb44,	// (0x0002df24) fep_vkb_top_text_pane_g

0x4184,	// (0x00022564) main_hc_apps_shell_pane

0xc3e2,	// (0x0002a7c2) grid_hc_apps_pane_ParamLimits

0xc3e2,	// (0x0002a7c2) grid_hc_apps_pane

0xc3f1,	// (0x0002a7d1) list_hc_apps_pane

0xc3f9,	// (0x0002a7d9) scroll_pane_cp37_ParamLimits

0xc3f9,	// (0x0002a7d9) scroll_pane_cp37

0xc405,	// (0x0002a7e5) cell_hc_apps_pane_ParamLimits

0xc405,	// (0x0002a7e5) cell_hc_apps_pane

0xc4b5,	// (0x0002a895) cell_hc_apps_pane_g1_ParamLimits

0xc4b5,	// (0x0002a895) cell_hc_apps_pane_g1

0xc4e6,	// (0x0002a8c6) cell_hc_apps_pane_g2_ParamLimits

0xc4e6,	// (0x0002a8c6) cell_hc_apps_pane_g2

0xc502,	// (0x0002a8e2) cell_hc_apps_pane_g3_ParamLimits

0xc502,	// (0x0002a8e2) cell_hc_apps_pane_g3

0x0002,

0xfce4,	// (0x0002e0c4) cell_hc_apps_pane_g_ParamLimits

0xfce4,	// (0x0002e0c4) cell_hc_apps_pane_g

0xc524,	// (0x0002a904) cell_hc_apps_pane_t1_ParamLimits

0xc524,	// (0x0002a904) cell_hc_apps_pane_t1

0x4327,	// (0x00022707) grid_highlight_pane_cp10_ParamLimits

0x4327,	// (0x00022707) grid_highlight_pane_cp10

0xc564,	// (0x0002a944) list_single_hc_apps_pane_ParamLimits

0xc564,	// (0x0002a944) list_single_hc_apps_pane

0xc5d7,	// (0x0002a9b7) list_single_hc_apps_pane_g1

0xeecd,	// (0x0002d2ad) list_single_hc_apps_pane_g2

0x0001,

0xfceb,	// (0x0002e0cb) list_single_hc_apps_pane_g

0xeee6,	// (0x0002d2c6) list_single_hc_apps_pane_g2_copy1

0xef02,	// (0x0002d2e2) list_single_hc_apps_pane_t1

0x41f4,	// (0x000225d4) bg_set_opt_pane_cp_ParamLimits

0x8a33,	// (0x00026e13) setting_slider_pane_t1_ParamLimits

0x8a4c,	// (0x00026e2c) setting_slider_pane_t2_ParamLimits

0x8a65,	// (0x00026e45) setting_slider_pane_t3_ParamLimits

0xf576,	// (0x0002d956) setting_slider_pane_t_ParamLimits

0x8a7c,	// (0x00026e5c) slider_set_pane_ParamLimits

0x94a1,	// (0x00027881) control_pane_g5_ParamLimits

0x94a1,	// (0x00027881) control_pane_g5

0x690f,	// (0x00024cef) slider_set_pane_g1_ParamLimits

0xa2e9,	// (0x000286c9) slider_set_pane_g2_ParamLimits

0xa2f5,	// (0x000286d5) slider_set_pane_g3_ParamLimits

0xa309,	// (0x000286e9) slider_set_pane_g4_ParamLimits

0xa321,	// (0x00028701) slider_set_pane_g5_ParamLimits

0xa2f5,	// (0x000286d5) slider_set_pane_g6_ParamLimits

0xa337,	// (0x00028717) slider_set_pane_g7_ParamLimits

0xf96b,	// (0x0002dd4b) slider_set_pane_g_ParamLimits

0x509c,	// (0x0002347c) navi_icon_text_pane_ParamLimits

0x9a57,	// (0x00027e37) aid_fill_nsta_2_ParamLimits

0x9a81,	// (0x00027e61) aid_touch_tab_arrow_left_ParamLimits

0x9a90,	// (0x00027e70) aid_touch_tab_arrow_right_ParamLimits

0x9afd,	// (0x00027edd) clock_nsta_pane_ParamLimits

0x6479,	// (0x00024859) navi_icon_pane_g1_ParamLimits

0x6485,	// (0x00024865) navi_text_pane_t1_ParamLimits

0x7308,	// (0x000256e8) navi_icon_text_pane_g1_ParamLimits

0x7314,	// (0x000256f4) navi_icon_text_pane_t1_ParamLimits

0xc5d7,	// (0x0002a9b7) list_single_hc_apps_pane_g1_ParamLimits

0xeecd,	// (0x0002d2ad) list_single_hc_apps_pane_g2_ParamLimits

0xfceb,	// (0x0002e0cb) list_single_hc_apps_pane_g_ParamLimits

0xeee6,	// (0x0002d2c6) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xef02,	// (0x0002d2e2) list_single_hc_apps_pane_t1_ParamLimits

0x8887,	// (0x00026c67) popup_toolbar2_fixed_window_ParamLimits

0x8887,	// (0x00026c67) popup_toolbar2_fixed_window

0x99ca,	// (0x00027daa) popup_toolbar2_float_window

0x4184,	// (0x00022564) bg_popup_sub_pane_cp27

0xc5f0,	// (0x0002a9d0) grid_toolbar2_float_pane

0x4184,	// (0x00022564) bg_popup_sub_pane_cp26

0xc5f0,	// (0x0002a9d0) grid_toolbar2_fixed_pane

0xc5f8,	// (0x0002a9d8) cell_toolbar2_fixed_pane_ParamLimits

0xc5f8,	// (0x0002a9d8) cell_toolbar2_fixed_pane

0xc609,	// (0x0002a9e9) cell_toolbar2_fixed_pane_g1

0xc612,	// (0x0002a9f2) toolbar2_fixed_button_pane

0x5778,	// (0x00023b58) toolbar2_fixed_button_pane_g1

0x5780,	// (0x00023b60) toolbar2_fixed_button_pane_g2

0x5788,	// (0x00023b68) toolbar2_fixed_button_pane_g3

0x5790,	// (0x00023b70) toolbar2_fixed_button_pane_g4

0x5798,	// (0x00023b78) toolbar2_fixed_button_pane_g5

0x57a0,	// (0x00023b80) toolbar2_fixed_button_pane_g6

0x57a8,	// (0x00023b88) toolbar2_fixed_button_pane_g7

0x57b0,	// (0x00023b90) toolbar2_fixed_button_pane_g8

0x57b8,	// (0x00023b98) toolbar2_fixed_button_pane_g9

0x0008,

0xf86d,	// (0x0002dc4d) toolbar2_fixed_button_pane_g

0xc61a,	// (0x0002a9fa) cell_toolbar2_float_pane_ParamLimits

0xc61a,	// (0x0002a9fa) cell_toolbar2_float_pane

0xc62b,	// (0x0002aa0b) cell_toolbar2_float_pane_g1

0xc612,	// (0x0002a9f2) toolbar2_fixed_button_pane_cp

0xac1d,	// (0x00028ffd) fep_vkb_accented_list_pane_ParamLimits

0xac1d,	// (0x00028ffd) fep_vkb_accented_list_pane

0xad45,	// (0x00029125) bg_popup_fep_shadow_pane_g9

0x521e,	// (0x000235fe) bg_popup_fep_shadow_pane_cp3

0x48ef,	// (0x00022ccf) list_accented_list_pane

0xc634,	// (0x0002aa14) list_single_accented_list_pane_ParamLimits

0xc634,	// (0x0002aa14) list_single_accented_list_pane

0x521e,	// (0x000235fe) list_highlight_pane_cp10

0xc645,	// (0x0002aa25) list_single_accented_list_pane_t1

0x9922,	// (0x00027d02) popup_slider_window_ParamLimits

0x9922,	// (0x00027d02) popup_slider_window

0xc26a,	// (0x0002a64a) aid_indentation_list_msg

0xc6ff,	// (0x0002aadf) bg_popup_window_pane_cp19

0xc769,	// (0x0002ab49) popup_slider_window_g1

0xc785,	// (0x0002ab65) popup_slider_window_g2

0xc7a1,	// (0x0002ab81) popup_slider_window_g3

0x0005,

0xfcf0,	// (0x0002e0d0) popup_slider_window_g

0xc7fd,	// (0x0002abdd) popup_slider_window_t1

0xc871,	// (0x0002ac51) small_volume_slider_vertical_pane

0x75d0,	// (0x000259b0) small_volume_slider_vertical_pane_g1

0x75d0,	// (0x000259b0) small_volume_slider_vertical_pane_g2

0xc88d,	// (0x0002ac6d) small_volume_slider_vertical_pane_g3

0x0002,

0xfd02,	// (0x0002e0e2) small_volume_slider_vertical_pane_g

0x864d,	// (0x00026a2d) area_side_right_pane_ParamLimits

0x864d,	// (0x00026a2d) area_side_right_pane

0xb847,	// (0x00029c27) aid_size_side_button_ParamLimits

0xb847,	// (0x00029c27) aid_size_side_button

0xb85b,	// (0x00029c3b) grid_sctrl_middle_pane_ParamLimits

0xb85b,	// (0x00029c3b) grid_sctrl_middle_pane

0xb87b,	// (0x00029c5b) sctrl_sk_bottom_pane

0xb88c,	// (0x00029c6c) sctrl_sk_top_pane

0xb89e,	// (0x00029c7e) aid_touch_sctrl_top

0xb8ab,	// (0x00029c8b) bg_sctrl_sk_pane_ParamLimits

0xb8ab,	// (0x00029c8b) bg_sctrl_sk_pane

0xb8b9,	// (0x00029c99) sctrl_sk_top_pane_g1

0xb8c6,	// (0x00029ca6) sctrl_sk_top_pane_t1

0xb89e,	// (0x00029c7e) aid_touch_sctrl_bottom

0xb8ab,	// (0x00029c8b) bg_sctrl_sk_pane_cp_ParamLimits

0xb8ab,	// (0x00029c8b) bg_sctrl_sk_pane_cp

0xb8e1,	// (0x00029cc1) sctrl_sk_bottom_pane_g1

0xb8c6,	// (0x00029ca6) sctrl_sk_bottom_pane_t1

0xb8ea,	// (0x00029cca) cell_sctrl_middle_pane_ParamLimits

0xb8ea,	// (0x00029cca) cell_sctrl_middle_pane

0xb905,	// (0x00029ce5) aid_touch_sctrl_middle_ParamLimits

0xb905,	// (0x00029ce5) aid_touch_sctrl_middle

0xb917,	// (0x00029cf7) bg_sctrl_middle_pane_ParamLimits

0xb917,	// (0x00029cf7) bg_sctrl_middle_pane

0xad65,	// (0x00029145) cell_sctrl_middle_pane_g1_ParamLimits

0xad65,	// (0x00029145) cell_sctrl_middle_pane_g1

0xb925,	// (0x00029d05) cell_sctrl_middle_pane_g2_ParamLimits

0xb925,	// (0x00029d05) cell_sctrl_middle_pane_g2

0x0001,

0xfd0e,	// (0x0002e0ee) cell_sctrl_middle_pane_g_ParamLimits

0xfd0e,	// (0x0002e0ee) cell_sctrl_middle_pane_g

0x5778,	// (0x00023b58) bg_sctrl_middle_pane_g1

0x5788,	// (0x00023b68) bg_sctrl_middle_pane_g2

0x5780,	// (0x00023b60) bg_sctrl_middle_pane_g3

0x5798,	// (0x00023b78) bg_sctrl_middle_pane_g4

0x5790,	// (0x00023b70) bg_sctrl_middle_pane_g5

0x57a0,	// (0x00023b80) bg_sctrl_middle_pane_g6

0x57a8,	// (0x00023b88) bg_sctrl_middle_pane_g7

0x57b8,	// (0x00023b98) bg_sctrl_middle_pane_g8

0x0007,

0xfd13,	// (0x0002e0f3) bg_sctrl_middle_pane_g

0x57b0,	// (0x00023b90) bg_sctrl_middle_pane_g8_copy1

0x5778,	// (0x00023b58) bg_sctrl_sk_pane_g1

0x5780,	// (0x00023b60) bg_sctrl_sk_pane_g2

0x5788,	// (0x00023b68) bg_sctrl_sk_pane_g3

0x0008,

0xf86d,	// (0x0002dc4d) bg_sctrl_sk_pane_g

0x4722,	// (0x00022b02) aid_size_touch_scroll_bar

0x5790,	// (0x00023b70) bg_sctrl_sk_pane_g4

0x5798,	// (0x00023b78) bg_sctrl_sk_pane_g5

0x57a0,	// (0x00023b80) bg_sctrl_sk_pane_g6

0x57a8,	// (0x00023b88) bg_sctrl_sk_pane_g7

0x57b0,	// (0x00023b90) bg_sctrl_sk_pane_g8

0x57b8,	// (0x00023b98) bg_sctrl_sk_pane_g9

0x54ac,	// (0x0002388c) popup_fep_china_hwr2_fs_candidate_window

0x9630,	// (0x00027a10) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9630,	// (0x00027a10) popup_fep_china_hwr2_fs_control_window

0xad65,	// (0x00029145) sctrl_sk_top_pane_g2

0x0001,

0xfd09,	// (0x0002e0e9) sctrl_sk_top_pane_g

0xc896,	// (0x0002ac76) aid_fep_china_hwr2_fs_cell_ParamLimits

0xc896,	// (0x0002ac76) aid_fep_china_hwr2_fs_cell

0xc8a8,	// (0x0002ac88) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xc8a8,	// (0x0002ac88) bg_popup_fep_shadow_pane_cp4

0xc8bf,	// (0x0002ac9f) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xc8bf,	// (0x0002ac9f) bg_popup_fep_shadow_pane_cp5

0xc8d1,	// (0x0002acb1) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xc8d1,	// (0x0002acb1) popup_fep_china_hwr2_fs_control_bar_grid

0xc8e1,	// (0x0002acc1) popup_fep_china_hwr2_fs_control_funtion_grid

0xc8e9,	// (0x0002acc9) aid_fep_china_hwr2_fs_candi_cell

0x4184,	// (0x00022564) bg_popup_fep_shadow_pane_cp6

0xc8f3,	// (0x0002acd3) popup_fep_china_hwr2_fs_candidate_grid

0xc8fd,	// (0x0002acdd) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xc8fd,	// (0x0002acdd) cell_fep_china_hwr2_fs_funtion_grid

0x75d0,	// (0x000259b0) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xc915,	// (0x0002acf5) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xc915,	// (0x0002acf5) cell_fep_china_hwr2_fs_funtion_grid_g1

0xc923,	// (0x0002ad03) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xc923,	// (0x0002ad03) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd24,	// (0x0002e104) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd24,	// (0x0002e104) cell_fep_china_hwr2_fs_funtion_grid_g

0xc939,	// (0x0002ad19) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xc939,	// (0x0002ad19) cell_fep_china_hwr2_fs_funtion_grid_t1

0xc94e,	// (0x0002ad2e) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xc94e,	// (0x0002ad2e) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd29,	// (0x0002e109) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd29,	// (0x0002e109) cell_fep_china_hwr2_fs_funtion_grid_t

0xc96a,	// (0x0002ad4a) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xc972,	// (0x0002ad52) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xc97a,	// (0x0002ad5a) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2e,	// (0x0002e10e) popup_fep_china_hwr2_fs_control_bar_grid_g

0xc982,	// (0x0002ad62) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xc982,	// (0x0002ad62) cell_fep_china_hwr2_fs_candidate_grid

0xc99b,	// (0x0002ad7b) popup_fep_china_hwr2_fs_candidate_grid_g20

0xc9a3,	// (0x0002ad83) popup_fep_china_hwr2_fs_candidate_grid_g21

0x75d0,	// (0x000259b0) cell_fep_china_hwr2_fs_candidate_grid_g1

0x75d0,	// (0x000259b0) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb49,	// (0x0002df29) cell_fep_china_hwr2_fs_candidate_grid_g

0xc9ab,	// (0x0002ad8b) cell_fep_china_hwr2_fs_candidate_grid_t1

0x55c7,	// (0x000239a7) clock_nsta_pane_cp_24_ParamLimits

0x55c7,	// (0x000239a7) clock_nsta_pane_cp_24

0x562f,	// (0x00023a0f) indicator_nsta_pane_cp_24_ParamLimits

0x562f,	// (0x00023a0f) indicator_nsta_pane_cp_24

0x638f,	// (0x0002476f) heading_pane_g1

0x0001,

0xf8d2,	// (0x0002dcb2) heading_pane_g

0x6a72,	// (0x00024e52) grid_sct_catagory_button_pane

0x69be,	// (0x00024d9e) scroll_pane_cp5_ParamLimits

0x733a,	// (0x0002571a) button_value_adjust_pane_cp5_ParamLimits

0x733a,	// (0x0002571a) button_value_adjust_pane_cp5

0x73f8,	// (0x000257d8) form2_midp_time_pane_ParamLimits

0xc9b9,	// (0x0002ad99) cell_sct_catagory_button_pane_ParamLimits

0xc9b9,	// (0x0002ad99) cell_sct_catagory_button_pane

0x7595,	// (0x00025975) bg_button_pane_cp01_ParamLimits

0x7595,	// (0x00025975) bg_button_pane_cp01

0x75d0,	// (0x000259b0) cell_sct_catagory_button_pane_g1

0x9959,	// (0x00027d39) popup_tb_extension_window

0xc9cb,	// (0x0002adab) aid_size_cell_ext_ParamLimits

0xc9cb,	// (0x0002adab) aid_size_cell_ext

0x4327,	// (0x00022707) bg_tb_trans_pane_cp1_ParamLimits

0x4327,	// (0x00022707) bg_tb_trans_pane_cp1

0xc9eb,	// (0x0002adcb) grid_tb_ext_pane_ParamLimits

0xc9eb,	// (0x0002adcb) grid_tb_ext_pane

0xca1b,	// (0x0002adfb) cell_tb_ext_pane_ParamLimits

0xca1b,	// (0x0002adfb) cell_tb_ext_pane

0xca32,	// (0x0002ae12) cell_tb_ext_pane_g1_ParamLimits

0xca32,	// (0x0002ae12) cell_tb_ext_pane_g1

0xca4f,	// (0x0002ae2f) cell_tb_ext_pane_t1

0x4327,	// (0x00022707) list_highlight_pane_cp11_ParamLimits

0x4327,	// (0x00022707) list_highlight_pane_cp11

0x88a6,	// (0x00026c86) popup_uni_indicator_window_ParamLimits

0x88a6,	// (0x00026c86) popup_uni_indicator_window

0x47e9,	// (0x00022bc9) bg_popup_sub_pane_cp14

0xca6a,	// (0x0002ae4a) list_uniindi_pane

0xca76,	// (0x0002ae56) uniindi_top_pane

0x4327,	// (0x00022707) bg_uniindi_top_pane

0xca95,	// (0x0002ae75) uniindi_top_pane_g1

0xcaab,	// (0x0002ae8b) uniindi_top_pane_g2

0x0003,

0xfd35,	// (0x0002e115) uniindi_top_pane_g

0xcad5,	// (0x0002aeb5) uniindi_top_pane_t1

0xcaff,	// (0x0002aedf) list_single_uniindi_pane_ParamLimits

0xcaff,	// (0x0002aedf) list_single_uniindi_pane

0x75d0,	// (0x000259b0) bg_uniindi_top_pane_g1

0xcb11,	// (0x0002aef1) list_single_uniindi_pane_g1

0xcb24,	// (0x0002af04) list_single_uniindi_pane_t1

0x872a,	// (0x00026b0a) control_bg_pane

0xcb49,	// (0x0002af29) bg_sctrl_sk_pane_cp1

0xcb52,	// (0x0002af32) bg_sctrl_sk_pane_cp2

0xcb5b,	// (0x0002af3b) control_bg_pane_g1

0xcb64,	// (0x0002af44) control_bg_pane_g2

0x0001,

0xfd3e,	// (0x0002e11e) control_bg_pane_g

0x71f3,	// (0x000255d3) cell_indicator_nsta_pane_g1_ParamLimits

0xa728,	// (0x00028b08) cell_indicator_nsta_pane_g2_ParamLimits

0xfaad,	// (0x0002de8d) cell_indicator_nsta_pane_g_ParamLimits

0xeba2,	// (0x0002cf82) form2_midp_time_pane_t1_ParamLimits

0x4564,	// (0x00022944) main_idle_act4_pane_ParamLimits

0x4564,	// (0x00022944) main_idle_act4_pane

0x9959,	// (0x00027d39) popup_tb_extension_window_ParamLimits

0xca0b,	// (0x0002adeb) tb_ext_find_pane_ParamLimits

0xca0b,	// (0x0002adeb) tb_ext_find_pane

0xcb6d,	// (0x0002af4d) ai_gene_pane_1_cp1

0x52b2,	// (0x00023692) ai_gene_pane_2_cp1

0xcb75,	// (0x0002af55) list_single_idle_plugin_calendar_pane

0xcb7e,	// (0x0002af5e) list_single_idle_plugin_notification_pane

0xcb87,	// (0x0002af67) list_single_idle_plugin_player_pane

0xcb90,	// (0x0002af70) list_single_idle_plugin_shortcut_pane_ParamLimits

0xcb90,	// (0x0002af70) list_single_idle_plugin_shortcut_pane

0xcbb2,	// (0x0002af92) main_idle_act4_pane_t1

0xcbc4,	// (0x0002afa4) main_idle_act4_pane_t2

0x0001,

0xfd43,	// (0x0002e123) main_idle_act4_pane_t

0xcbd6,	// (0x0002afb6) middle_sk_idle_act4_pane_ParamLimits

0xcbd6,	// (0x0002afb6) middle_sk_idle_act4_pane

0xcbec,	// (0x0002afcc) popup_clock_digital_analogue_window_cp2

0xcc06,	// (0x0002afe6) shortcut_wheel_idle_act4_pane_ParamLimits

0xcc06,	// (0x0002afe6) shortcut_wheel_idle_act4_pane

0x75d0,	// (0x000259b0) shortcut_wheel_idle_act4_pane_g1

0x75d0,	// (0x000259b0) shortcut_wheel_idle_act4_pane_g2

0x75d0,	// (0x000259b0) shortcut_wheel_idle_act4_pane_g3

0x75d0,	// (0x000259b0) shortcut_wheel_idle_act4_pane_g4

0x75d0,	// (0x000259b0) shortcut_wheel_idle_act4_pane_g5

0xcc1a,	// (0x0002affa) shortcut_wheel_idle_act4_pane_g6

0xcc22,	// (0x0002b002) shortcut_wheel_idle_act4_pane_g7

0xcc2a,	// (0x0002b00a) shortcut_wheel_idle_act4_pane_g8

0xcc32,	// (0x0002b012) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd48,	// (0x0002e128) shortcut_wheel_idle_act4_pane_g

0x7839,	// (0x00025c19) middle_sk_idle_act4_pane_g1_ParamLimits

0x7839,	// (0x00025c19) middle_sk_idle_act4_pane_g1

0xcc96,	// (0x0002b076) middle_sk_idle_act4_pane_g2_ParamLimits

0xcc96,	// (0x0002b076) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6b,	// (0x0002e14b) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6b,	// (0x0002e14b) middle_sk_idle_act4_pane_g

0xcca2,	// (0x0002b082) middle_sk_idle_act4_pane_t1_ParamLimits

0xcca2,	// (0x0002b082) middle_sk_idle_act4_pane_t1

0xccbf,	// (0x0002b09f) grid_ai_shortcut_pane_ParamLimits

0xccbf,	// (0x0002b09f) grid_ai_shortcut_pane

0xccd8,	// (0x0002b0b8) list_highlight_pane_cp16_ParamLimits

0xccd8,	// (0x0002b0b8) list_highlight_pane_cp16

0xcce5,	// (0x0002b0c5) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xcce5,	// (0x0002b0c5) list_single_idle_plugin_shortcut_pane_g1

0xccf1,	// (0x0002b0d1) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xccf1,	// (0x0002b0d1) list_single_idle_plugin_shortcut_pane_g2

0xcd09,	// (0x0002b0e9) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xcd09,	// (0x0002b0e9) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd70,	// (0x0002e150) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd70,	// (0x0002e150) list_single_idle_plugin_shortcut_pane_g

0xcd1c,	// (0x0002b0fc) cell_ai_shortcut_pane_ParamLimits

0xcd1c,	// (0x0002b0fc) cell_ai_shortcut_pane

0xcd3d,	// (0x0002b11d) cell_ai_shortcut_pane_g1_ParamLimits

0xcd3d,	// (0x0002b11d) cell_ai_shortcut_pane_g1

0xcb6d,	// (0x0002af4d) ai_gene_pane_1_cp2

0xcd5f,	// (0x0002b13f) ai_gene_pane_2_cp2

0xcd67,	// (0x0002b147) list_highlight_pane_cp15

0xcd70,	// (0x0002b150) list_single_idle_plugin_calendar_pane_g1

0xcd67,	// (0x0002b147) list_highlight_pane_cp17

0xcd78,	// (0x0002b158) list_single_idle_plugin_calendar_pane_g1_copy1

0xcd80,	// (0x0002b160) list_single_idle_plugin_player_pane_g1

0x6c87,	// (0x00025067) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd77,	// (0x0002e157) list_single_idle_plugin_player_pane_g

0xcd88,	// (0x0002b168) list_single_idle_plugin_player_pane_t1

0xcd96,	// (0x0002b176) list_single_idle_plugin_player_pane_t2

0xcda4,	// (0x0002b184) list_single_idle_plugin_player_pane_t3

0xcdb2,	// (0x0002b192) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7c,	// (0x0002e15c) list_single_idle_plugin_player_pane_t

0xcdc0,	// (0x0002b1a0) wait_bar_pane_cp15

0xcdc8,	// (0x0002b1a8) grid_ai_notification_pane

0x6c87,	// (0x00025067) list_single_idle_plugin_notification_pane_g1

0xcdd1,	// (0x0002b1b1) cell_ai_notification_pane_ParamLimits

0xcdd1,	// (0x0002b1b1) cell_ai_notification_pane

0xcdde,	// (0x0002b1be) cell_ai_notification_pane_g1

0xcde6,	// (0x0002b1c6) cell_ai_notification_pane_t1

0xcdf4,	// (0x0002b1d4) tb_ext_find_button_pane

0xcdfc,	// (0x0002b1dc) tb_ext_find_pane_g1

0xce04,	// (0x0002b1e4) tb_ext_find_pane_t1

0x4d0a,	// (0x000230ea) tb_ext_find_button_pane_g1

0xce12,	// (0x0002b1f2) tb_ext_find_button_pane_g2

0x0001,

0xfd85,	// (0x0002e165) tb_ext_find_button_pane_g

0xcbb2,	// (0x0002af92) main_idle_act4_pane_t1_ParamLimits

0xcbc4,	// (0x0002afa4) main_idle_act4_pane_t2_ParamLimits

0xfd43,	// (0x0002e123) main_idle_act4_pane_t_ParamLimits

0xcbec,	// (0x0002afcc) popup_clock_digital_analogue_window_cp2_ParamLimits

0xcbfa,	// (0x0002afda) sat_plugin_idle_act4_pane_ParamLimits

0xcbfa,	// (0x0002afda) sat_plugin_idle_act4_pane

0xce1b,	// (0x0002b1fb) sat_plugin_idle_act4_pane_t1_ParamLimits

0xce1b,	// (0x0002b1fb) sat_plugin_idle_act4_pane_t1

0xce2e,	// (0x0002b20e) sat_plugin_idle_act4_pane_t2_ParamLimits

0xce2e,	// (0x0002b20e) sat_plugin_idle_act4_pane_t2

0xce41,	// (0x0002b221) sat_plugin_idle_act4_pane_t3_ParamLimits

0xce41,	// (0x0002b221) sat_plugin_idle_act4_pane_t3

0xce54,	// (0x0002b234) sat_plugin_idle_act4_pane_t4_ParamLimits

0xce54,	// (0x0002b234) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8a,	// (0x0002e16a) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8a,	// (0x0002e16a) sat_plugin_idle_act4_pane_t

0x87ef,	// (0x00026bcf) popup_battery_window_ParamLimits

0x87ef,	// (0x00026bcf) popup_battery_window

0x4327,	// (0x00022707) bg_popup_sub_pane_cp25_ParamLimits

0x4327,	// (0x00022707) bg_popup_sub_pane_cp25

0xce67,	// (0x0002b247) popup_battery_window_g1_ParamLimits

0xce67,	// (0x0002b247) popup_battery_window_g1

0xce73,	// (0x0002b253) popup_battery_window_t1_ParamLimits

0xce73,	// (0x0002b253) popup_battery_window_t1

0xce85,	// (0x0002b265) popup_battery_window_t2_ParamLimits

0xce85,	// (0x0002b265) popup_battery_window_t2

0x0001,

0xfd93,	// (0x0002e173) popup_battery_window_t_ParamLimits

0xfd93,	// (0x0002e173) popup_battery_window_t

0x92e7,	// (0x000276c7) midp_canvas_pane_ParamLimits

0x934b,	// (0x0002772b) midp_keypad_pane_ParamLimits

0x934b,	// (0x0002772b) midp_keypad_pane

0x4940,	// (0x00022d20) main_midp_pane_ParamLimits

0x72cf,	// (0x000256af) signal_pane_g2_cp_ParamLimits

0xcea2,	// (0x0002b282) aid_size_cell_midp_keypad_ParamLimits

0xcea2,	// (0x0002b282) aid_size_cell_midp_keypad

0xcebc,	// (0x0002b29c) midp_keyp_game_grid_pane_ParamLimits

0xcebc,	// (0x0002b29c) midp_keyp_game_grid_pane

0xcedc,	// (0x0002b2bc) midp_keyp_rocker_pane_ParamLimits

0xcedc,	// (0x0002b2bc) midp_keyp_rocker_pane

0xcf07,	// (0x0002b2e7) midp_keyp_sk_left_pane_ParamLimits

0xcf07,	// (0x0002b2e7) midp_keyp_sk_left_pane

0xcf61,	// (0x0002b341) midp_keyp_sk_right_pane_ParamLimits

0xcf61,	// (0x0002b341) midp_keyp_sk_right_pane

0x4184,	// (0x00022564) bg_button_pane_cp03

0xcfbb,	// (0x0002b39b) midp_keyp_sk_left_pane_g1

0x4184,	// (0x00022564) bg_button_pane_cp04

0xcfbb,	// (0x0002b39b) midp_keyp_sk_right_pane_g1

0x75d0,	// (0x000259b0) midp_keyp_rocker_pane_g1

0xcfc4,	// (0x0002b3a4) keyp_game_cell_pane_ParamLimits

0xcfc4,	// (0x0002b3a4) keyp_game_cell_pane

0x4184,	// (0x00022564) bg_button_pane_cp02

0xcfd7,	// (0x0002b3b7) keyp_game_cell_pane_g1

0x8825,	// (0x00026c05) popup_fep_vkb2_window_ParamLimits

0x8825,	// (0x00026c05) popup_fep_vkb2_window

0xb943,	// (0x00029d23) aid_size_cell_vkb2_ParamLimits

0xb943,	// (0x00029d23) aid_size_cell_vkb2

0xb997,	// (0x00029d77) popup_fep_vkb2_window_g1_ParamLimits

0xb997,	// (0x00029d77) popup_fep_vkb2_window_g1

0xb9d7,	// (0x00029db7) vkb2_area_bottom_pane_ParamLimits

0xb9d7,	// (0x00029db7) vkb2_area_bottom_pane

0xba23,	// (0x00029e03) vkb2_area_keypad_pane_ParamLimits

0xba23,	// (0x00029e03) vkb2_area_keypad_pane

0xba65,	// (0x00029e45) vkb2_area_top_pane_ParamLimits

0xba65,	// (0x00029e45) vkb2_area_top_pane

0xbadf,	// (0x00029ebf) vkb2_top_entry_pane_ParamLimits

0xbadf,	// (0x00029ebf) vkb2_top_entry_pane

0xbb09,	// (0x00029ee9) vkb2_top_grid_left_pane_ParamLimits

0xbb09,	// (0x00029ee9) vkb2_top_grid_left_pane

0xbb27,	// (0x00029f07) vkb2_top_grid_right_pane_ParamLimits

0xbb27,	// (0x00029f07) vkb2_top_grid_right_pane

0xbb45,	// (0x00029f25) vkb2_cell_keypad_pane_ParamLimits

0xbb45,	// (0x00029f25) vkb2_cell_keypad_pane

0xbc16,	// (0x00029ff6) vkb2_area_bottom_grid_pane_ParamLimits

0xbc16,	// (0x00029ff6) vkb2_area_bottom_grid_pane

0xbc3c,	// (0x0002a01c) vkb2_area_bottom_pane_g1_ParamLimits

0xbc3c,	// (0x0002a01c) vkb2_area_bottom_pane_g1

0xbc60,	// (0x0002a040) vkb2_area_bottom_pane_g2_ParamLimits

0xbc60,	// (0x0002a040) vkb2_area_bottom_pane_g2

0xbc8e,	// (0x0002a06e) vkb2_area_bottom_pane_g3_ParamLimits

0xbc8e,	// (0x0002a06e) vkb2_area_bottom_pane_g3

0x0002,

0xfd98,	// (0x0002e178) vkb2_area_bottom_pane_g_ParamLimits

0xfd98,	// (0x0002e178) vkb2_area_bottom_pane_g

0xbcef,	// (0x0002a0cf) vkb2_top_cell_left_pane_ParamLimits

0xbcef,	// (0x0002a0cf) vkb2_top_cell_left_pane

0xef4e,	// (0x0002d32e) vkb2_top_entry_pane_g1_ParamLimits

0xef4e,	// (0x0002d32e) vkb2_top_entry_pane_g1

0xef5c,	// (0x0002d33c) vkb2_top_entry_pane_t1_ParamLimits

0xef5c,	// (0x0002d33c) vkb2_top_entry_pane_t1

0xcfe8,	// (0x0002b3c8) vkb2_top_entry_pane_t2_ParamLimits

0xcfe8,	// (0x0002b3c8) vkb2_top_entry_pane_t2

0xd01a,	// (0x0002b3fa) vkb2_top_entry_pane_t3_ParamLimits

0xd01a,	// (0x0002b3fa) vkb2_top_entry_pane_t3

0x0002,

0xfd9f,	// (0x0002e17f) vkb2_top_entry_pane_t_ParamLimits

0xfd9f,	// (0x0002e17f) vkb2_top_entry_pane_t

0xbd3c,	// (0x0002a11c) vkb2_top_grid_right_pane_g1_ParamLimits

0xbd3c,	// (0x0002a11c) vkb2_top_grid_right_pane_g1

0xbd52,	// (0x0002a132) vkb2_top_grid_right_pane_g2_ParamLimits

0xbd52,	// (0x0002a132) vkb2_top_grid_right_pane_g2

0xbd6a,	// (0x0002a14a) vkb2_top_grid_right_pane_g3_ParamLimits

0xbd6a,	// (0x0002a14a) vkb2_top_grid_right_pane_g3

0xbd82,	// (0x0002a162) vkb2_top_grid_right_pane_g4_ParamLimits

0xbd82,	// (0x0002a162) vkb2_top_grid_right_pane_g4

0x0003,

0xfda6,	// (0x0002e186) vkb2_top_grid_right_pane_g_ParamLimits

0xfda6,	// (0x0002e186) vkb2_top_grid_right_pane_g

0xbd98,	// (0x0002a178) vkb2_top_cell_left_pane_g1

0xbdaf,	// (0x0002a18f) vkb2_cell_keypad_pane_g1_ParamLimits

0xbdaf,	// (0x0002a18f) vkb2_cell_keypad_pane_g1

0xd03e,	// (0x0002b41e) vkb2_cell_keypad_pane_t1_ParamLimits

0xd03e,	// (0x0002b41e) vkb2_cell_keypad_pane_t1

0xbdbd,	// (0x0002a19d) vkb2_cell_bottom_grid_pane_ParamLimits

0xbdbd,	// (0x0002a19d) vkb2_cell_bottom_grid_pane

0xbdf6,	// (0x0002a1d6) vkb2_cell_bottom_grid_pane_g1

0xcc3a,	// (0x0002b01a) aid_call2_pane_cp02

0xcc42,	// (0x0002b022) aid_call_pane_cp02

0xcc4a,	// (0x0002b02a) clock_digital_number_pane_cp10

0xcc52,	// (0x0002b032) clock_digital_number_pane_cp11

0xcc5a,	// (0x0002b03a) clock_digital_number_pane_cp12

0xcc62,	// (0x0002b042) clock_digital_number_pane_cp13

0xcc6a,	// (0x0002b04a) clock_digital_separator_pane_cp10

0x4d0a,	// (0x000230ea) popup_clock_digital_analogue_window_cp2_g1

0x4d0a,	// (0x000230ea) popup_clock_digital_analogue_window_cp2_g2

0xcc72,	// (0x0002b052) popup_clock_digital_analogue_window_cp2_g3

0x4d0a,	// (0x000230ea) popup_clock_digital_analogue_window_cp2_g4

0xcc72,	// (0x0002b052) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5b,	// (0x0002e13b) popup_clock_digital_analogue_window_cp2_g

0xcc7a,	// (0x0002b05a) popup_clock_digital_analogue_window_cp2_t1

0xcc88,	// (0x0002b068) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd66,	// (0x0002e146) popup_clock_digital_analogue_window_cp2_t

0x75d0,	// (0x000259b0) clock_digital_number_pane_cp10_g1

0x75d0,	// (0x000259b0) clock_digital_number_pane_cp10_g2

0x0001,

0xfb49,	// (0x0002df29) clock_digital_number_pane_cp10_g

0x75d0,	// (0x000259b0) clock_digital_separator_pane_cp10_g1

0x75d0,	// (0x000259b0) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb49,	// (0x0002df29) clock_digital_separator_pane_cp10_g

0xcab7,	// (0x0002ae97) uniindi_top_pane_g3

0xcac8,	// (0x0002aea8) uniindi_top_pane_g4

0xbbd0,	// (0x00029fb0) vkb2_row_keypad_pane_ParamLimits

0xbbd0,	// (0x00029fb0) vkb2_row_keypad_pane

0xbe16,	// (0x0002a1f6) vkb2_cell_t_keypad_pane_ParamLimits

0xbe16,	// (0x0002a1f6) vkb2_cell_t_keypad_pane

0xbe26,	// (0x0002a206) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xbe26,	// (0x0002a206) vkb2_cell_t_keypad_pane_cp08

0xbe39,	// (0x0002a219) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xbe39,	// (0x0002a219) vkb2_cell_t_keypad_pane_cp09

0xbe4d,	// (0x0002a22d) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xbe4d,	// (0x0002a22d) vkb2_cell_t_keypad_pane_cp01

0xbe5e,	// (0x0002a23e) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xbe5e,	// (0x0002a23e) vkb2_cell_t_keypad_pane_cp02

0xbe6f,	// (0x0002a24f) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xbe6f,	// (0x0002a24f) vkb2_cell_t_keypad_pane_cp03

0xbe80,	// (0x0002a260) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xbe80,	// (0x0002a260) vkb2_cell_t_keypad_pane_cp04

0xbe91,	// (0x0002a271) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xbe91,	// (0x0002a271) vkb2_cell_t_keypad_pane_cp05

0xbea2,	// (0x0002a282) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xbea2,	// (0x0002a282) vkb2_cell_t_keypad_pane_cp06

0xbeb3,	// (0x0002a293) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xbeb3,	// (0x0002a293) vkb2_cell_t_keypad_pane_cp07

0xbec4,	// (0x0002a2a4) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xbec4,	// (0x0002a2a4) vkb2_cell_t_keypad_pane_cp10

0xad65,	// (0x00029145) vkb2_cell_t_keypad_pane_g1

0xd055,	// (0x0002b435) vkb2_cell_t_keypad_pane_t1

0x872a,	// (0x00026b0a) popup_grid_graphic2_window

0xef8e,	// (0x0002d36e) aid_size_cell_graphic2_ParamLimits

0xef8e,	// (0x0002d36e) aid_size_cell_graphic2

0xefc6,	// (0x0002d3a6) bg_popup_window_pane_cp21_ParamLimits

0xefc6,	// (0x0002d3a6) bg_popup_window_pane_cp21

0xefd4,	// (0x0002d3b4) graphic2_pages_pane_ParamLimits

0xefd4,	// (0x0002d3b4) graphic2_pages_pane

0xf01a,	// (0x0002d3fa) grid_graphic2_control_pane_ParamLimits

0xf01a,	// (0x0002d3fa) grid_graphic2_control_pane

0xf058,	// (0x0002d438) grid_graphic2_pane_ParamLimits

0xf058,	// (0x0002d438) grid_graphic2_pane

0xf0cc,	// (0x0002d4ac) cell_graphic2_pane

0x4184,	// (0x00022564) main_comp_mode_pane

0xc31c,	// (0x0002a6fc) list_ai3_gene_pane_ParamLimits

0xc6ff,	// (0x0002aadf) bg_popup_window_pane_cp19_ParamLimits

0xc70b,	// (0x0002aaeb) bg_touch_area_indi_pane_ParamLimits

0xc70b,	// (0x0002aaeb) bg_touch_area_indi_pane

0xc721,	// (0x0002ab01) bg_touch_area_indi_pane_cp01_ParamLimits

0xc721,	// (0x0002ab01) bg_touch_area_indi_pane_cp01

0xc737,	// (0x0002ab17) bg_touch_area_indi_pane_cp02_ParamLimits

0xc737,	// (0x0002ab17) bg_touch_area_indi_pane_cp02

0xc74f,	// (0x0002ab2f) bg_touch_area_indi_pane_cp03_ParamLimits

0xc74f,	// (0x0002ab2f) bg_touch_area_indi_pane_cp03

0xc769,	// (0x0002ab49) popup_slider_window_g1_ParamLimits

0xc785,	// (0x0002ab65) popup_slider_window_g2_ParamLimits

0xc7a1,	// (0x0002ab81) popup_slider_window_g3_ParamLimits

0xfcf0,	// (0x0002e0d0) popup_slider_window_g_ParamLimits

0xc7fd,	// (0x0002abdd) popup_slider_window_t1_ParamLimits

0xc871,	// (0x0002ac51) small_volume_slider_vertical_pane_ParamLimits

0xf0cc,	// (0x0002d4ac) cell_graphic2_pane_ParamLimits

0xf11a,	// (0x0002d4fa) bg_button_pane_cp10_ParamLimits

0xf11a,	// (0x0002d4fa) bg_button_pane_cp10

0xf12d,	// (0x0002d50d) bg_button_pane_cp11_ParamLimits

0xf12d,	// (0x0002d50d) bg_button_pane_cp11

0xf140,	// (0x0002d520) graphic2_pages_pane_g1_ParamLimits

0xf140,	// (0x0002d520) graphic2_pages_pane_g1

0xf15b,	// (0x0002d53b) graphic2_pages_pane_g2_ParamLimits

0xf15b,	// (0x0002d53b) graphic2_pages_pane_g2

0x0001,

0xfdb4,	// (0x0002e194) graphic2_pages_pane_g_ParamLimits

0xfdb4,	// (0x0002e194) graphic2_pages_pane_g

0xf173,	// (0x0002d553) graphic2_pages_pane_t1_ParamLimits

0xf173,	// (0x0002d553) graphic2_pages_pane_t1

0xf189,	// (0x0002d569) cell_graphic2_control_pane_ParamLimits

0xf189,	// (0x0002d569) cell_graphic2_control_pane

0xf1aa,	// (0x0002d58a) cell_graphic2_pane_g1_ParamLimits

0xf1aa,	// (0x0002d58a) cell_graphic2_pane_g1

0xf1b7,	// (0x0002d597) cell_graphic2_pane_g2_ParamLimits

0xf1b7,	// (0x0002d597) cell_graphic2_pane_g2

0xf1c4,	// (0x0002d5a4) cell_graphic2_pane_g3_ParamLimits

0xf1c4,	// (0x0002d5a4) cell_graphic2_pane_g3

0xf1d1,	// (0x0002d5b1) cell_graphic2_pane_g4_ParamLimits

0xf1d1,	// (0x0002d5b1) cell_graphic2_pane_g4

0xf1de,	// (0x0002d5be) cell_graphic2_pane_g5_ParamLimits

0xf1de,	// (0x0002d5be) cell_graphic2_pane_g5

0x0004,

0xfdb9,	// (0x0002e199) cell_graphic2_pane_g_ParamLimits

0xfdb9,	// (0x0002e199) cell_graphic2_pane_g

0xf1f9,	// (0x0002d5d9) cell_graphic2_pane_t1_ParamLimits

0xf1f9,	// (0x0002d5d9) cell_graphic2_pane_t1

0x5868,	// (0x00023c48) grid_highlight_pane_cp11_ParamLimits

0x5868,	// (0x00023c48) grid_highlight_pane_cp11

0x4327,	// (0x00022707) bg_button_pane_cp05

0xf222,	// (0x0002d602) cell_graphic2_control_pane_g1

0x75d0,	// (0x000259b0) bg_touch_area_indi_pane_g1

0xd067,	// (0x0002b447) aid_cmod_rocker_key_size

0xd071,	// (0x0002b451) aid_cmode_itu_key_size

0xd07b,	// (0x0002b45b) main_cmode_video_pane

0xd085,	// (0x0002b465) main_comp_mode_itu_pane

0xd091,	// (0x0002b471) main_comp_mode_rocker_pane

0xd09d,	// (0x0002b47d) cell_cmode_rocker_pane_ParamLimits

0xd09d,	// (0x0002b47d) cell_cmode_rocker_pane

0xd0af,	// (0x0002b48f) cell_cmode_itu_pane_ParamLimits

0xd0af,	// (0x0002b48f) cell_cmode_itu_pane

0x47e9,	// (0x00022bc9) bg_button_pane_cp06_ParamLimits

0x47e9,	// (0x00022bc9) bg_button_pane_cp06

0x7839,	// (0x00025c19) cell_cmode_rocker_pane_g1_ParamLimits

0x7839,	// (0x00025c19) cell_cmode_rocker_pane_g1

0xc915,	// (0x0002acf5) cell_cmode_rocker_pane_g2_ParamLimits

0xc915,	// (0x0002acf5) cell_cmode_rocker_pane_g2

0x0001,

0xfdc9,	// (0x0002e1a9) cell_cmode_rocker_pane_g_ParamLimits

0xfdc9,	// (0x0002e1a9) cell_cmode_rocker_pane_g

0x4184,	// (0x00022564) bg_button_pane_cp07

0xd0c4,	// (0x0002b4a4) cell_cmode_itu_pane_g1

0xd0cd,	// (0x0002b4ad) cell_cmode_itu_pane_t1

0xd0db,	// (0x0002b4bb) cell_cmode_itu_pane_t2

0x0001,

0xfdce,	// (0x0002e1ae) cell_cmode_itu_pane_t

0xcb39,	// (0x0002af19) aid_touch_ctrl_left

0xcb41,	// (0x0002af21) aid_touch_ctrl_right

0x4184,	// (0x00022564) compa_mode_pane

0xf24a,	// (0x0002d62a) aid_cmod_rocker_key_size_cp

0xf254,	// (0x0002d634) aid_cmode_itu_key_size_cp

0xd0e9,	// (0x0002b4c9) compa_mode_pane_g1

0xd0f1,	// (0x0002b4d1) compa_mode_pane_g2

0xd0f9,	// (0x0002b4d9) compa_mode_pane_g3

0x0002,

0xfdd3,	// (0x0002e1b3) compa_mode_pane_g

0xf25e,	// (0x0002d63e) main_comp_mode_itu_pane_cp

0xf266,	// (0x0002d646) main_comp_mode_rocker_pane_cp

0xf26e,	// (0x0002d64e) cell_cmode_itu_pane_cp_ParamLimits

0xf26e,	// (0x0002d64e) cell_cmode_itu_pane_cp

0xf283,	// (0x0002d663) cell_cmode_rocker_pane_cp_ParamLimits

0xf283,	// (0x0002d663) cell_cmode_rocker_pane_cp

0x47e9,	// (0x00022bc9) bg_button_pane_cp06_cp_ParamLimits

0x47e9,	// (0x00022bc9) bg_button_pane_cp06_cp

0x7839,	// (0x00025c19) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7839,	// (0x00025c19) cell_cmode_rocker_pane_g1_cp

0x75d0,	// (0x000259b0) cell_cmode_rocker_pane_g2_cp

0x4184,	// (0x00022564) bg_button_pane_cp07_cp

0xf295,	// (0x0002d675) cell_cmode_itu_pane_g1_cp

0xf29e,	// (0x0002d67e) cell_cmode_itu_pane_t1_cp

0xf29e,	// (0x0002d67e) cell_cmode_itu_pane_t2_cp

0xa496,	// (0x00028876) settings_code_pane_cp2

0x41f4,	// (0x000225d4) bg_popup_window_pane_cp3_ParamLimits

0x44f5,	// (0x000228d5) heading_pane_cp3_ParamLimits

0x4501,	// (0x000228e1) listscroll_popup_graphic_pane_ParamLimits

0xaa24,	// (0x00028e04) fep_hwr_aid_pane_ParamLimits

0xb89e,	// (0x00029c7e) aid_touch_sctrl_top_ParamLimits

0xb8b9,	// (0x00029c99) sctrl_sk_top_pane_g1_ParamLimits

0xad65,	// (0x00029145) sctrl_sk_top_pane_g2_ParamLimits

0xfd09,	// (0x0002e0e9) sctrl_sk_top_pane_g_ParamLimits

0xb8c6,	// (0x00029ca6) sctrl_sk_top_pane_t1_ParamLimits

0xb89e,	// (0x00029c7e) aid_touch_sctrl_bottom_ParamLimits

0xb8c6,	// (0x00029ca6) sctrl_sk_bottom_pane_t1_ParamLimits

0xca83,	// (0x0002ae63) aid_area_touch_clock

0xbaa7,	// (0x00029e87) aid_vkb2_area_top_pane_cell_ParamLimits

0xbaa7,	// (0x00029e87) aid_vkb2_area_top_pane_cell

0xbbf2,	// (0x00029fd2) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xbbf2,	// (0x00029fd2) aid_vkb2_area_bottom_pane_cell

0xcfe0,	// (0x0002b3c0) popup_char_count_window

0xd101,	// (0x0002b4e1) popup_char_count_window_g1

0xd10a,	// (0x0002b4ea) popup_char_count_window_g2

0xd113,	// (0x0002b4f3) popup_char_count_window_g3

0x0002,

0xfdda,	// (0x0002e1ba) popup_char_count_window_g

0xd11c,	// (0x0002b4fc) popup_char_count_window_t1

0xb975,	// (0x00029d55) popup_fep_char_preview_window_ParamLimits

0xb975,	// (0x00029d55) popup_fep_char_preview_window

0xbac5,	// (0x00029ea5) vkb2_top_candi_pane_ParamLimits

0xbac5,	// (0x00029ea5) vkb2_top_candi_pane

0xf2ac,	// (0x0002d68c) cell_vkb2_top_candi_pane_ParamLimits

0xf2ac,	// (0x0002d68c) cell_vkb2_top_candi_pane

0xbed9,	// (0x0002a2b9) bg_popup_fep_char_preview_window_ParamLimits

0xbed9,	// (0x0002a2b9) bg_popup_fep_char_preview_window

0xbee7,	// (0x0002a2c7) popup_fep_char_preview_window_t1_ParamLimits

0xbee7,	// (0x0002a2c7) popup_fep_char_preview_window_t1

0xd12a,	// (0x0002b50a) bg_popup_fep_char_preview_window_g1

0xd132,	// (0x0002b512) bg_popup_fep_char_preview_window_g2

0xd13a,	// (0x0002b51a) bg_popup_fep_char_preview_window_g3

0xd142,	// (0x0002b522) bg_popup_fep_char_preview_window_g4

0xd14a,	// (0x0002b52a) bg_popup_fep_char_preview_window_g5

0xbf21,	// (0x0002a301) bg_popup_fep_char_preview_window_g6

0xd152,	// (0x0002b532) bg_popup_fep_char_preview_window_g7

0xd15a,	// (0x0002b53a) bg_popup_fep_char_preview_window_g8

0xd162,	// (0x0002b542) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde1,	// (0x0002e1c1) bg_popup_fep_char_preview_window_g

0xad65,	// (0x00029145) cell_vkb2_top_candi_pane_g1_ParamLimits

0xad65,	// (0x00029145) cell_vkb2_top_candi_pane_g1

0xad73,	// (0x00029153) cell_vkb2_top_candi_pane_g2_ParamLimits

0xad73,	// (0x00029153) cell_vkb2_top_candi_pane_g2

0xc0f7,	// (0x0002a4d7) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc0f7,	// (0x0002a4d7) cell_vkb2_top_candi_pane_g3

0xbf29,	// (0x0002a309) cell_vkb2_top_candi_pane_g4_ParamLimits

0xbf29,	// (0x0002a309) cell_vkb2_top_candi_pane_g4

0xaf6b,	// (0x0002934b) cell_vkb2_top_candi_pane_g5_ParamLimits

0xaf6b,	// (0x0002934b) cell_vkb2_top_candi_pane_g5

0xbf4a,	// (0x0002a32a) cell_vkb2_top_candi_pane_g6_ParamLimits

0xbf4a,	// (0x0002a32a) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf4,	// (0x0002e1d4) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf4,	// (0x0002e1d4) cell_vkb2_top_candi_pane_g

0xbf58,	// (0x0002a338) cell_vkb2_top_candi_pane_t1

0xa2d5,	// (0x000286b5) aid_size_touch_slider_mark_ParamLimits

0xa2d5,	// (0x000286b5) aid_size_touch_slider_mark

0xf00a,	// (0x0002d3ea) grid_graphic2_catg_pane_ParamLimits

0xf00a,	// (0x0002d3ea) grid_graphic2_catg_pane

0xf0a8,	// (0x0002d488) popup_grid_graphic2_window_t1_ParamLimits

0xf0a8,	// (0x0002d488) popup_grid_graphic2_window_t1

0xf0ba,	// (0x0002d49a) popup_grid_graphic2_window_t2_ParamLimits

0xf0ba,	// (0x0002d49a) popup_grid_graphic2_window_t2

0x0001,

0xfdaf,	// (0x0002e18f) popup_grid_graphic2_window_t_ParamLimits

0xfdaf,	// (0x0002e18f) popup_grid_graphic2_window_t

0x4327,	// (0x00022707) bg_button_pane_cp05_ParamLimits

0xf222,	// (0x0002d602) cell_graphic2_control_pane_g1_ParamLimits

0xf2f9,	// (0x0002d6d9) cell_graphic2_catg_pane_ParamLimits

0xf2f9,	// (0x0002d6d9) cell_graphic2_catg_pane

0x4184,	// (0x00022564) bg_button_pane_cp12

0xf30b,	// (0x0002d6eb) cell_graphic2_catg_pane_g1

0xca4f,	// (0x0002ae2f) cell_tb_ext_pane_t1_ParamLimits

0xbd0f,	// (0x0002a0ef) vkb2_top_cell_right_narrow_pane_ParamLimits

0xbd0f,	// (0x0002a0ef) vkb2_top_cell_right_narrow_pane

0xbd27,	// (0x0002a107) vkb2_top_cell_right_wide_pane_ParamLimits

0xbd27,	// (0x0002a107) vkb2_top_cell_right_wide_pane

0xaa16,	// (0x00028df6) bg_vkb2_func_pane_ParamLimits

0xaa16,	// (0x00028df6) bg_vkb2_func_pane

0xbd98,	// (0x0002a178) vkb2_top_cell_left_pane_g1_ParamLimits

0xaa16,	// (0x00028df6) bg_vkb2_fuc_pane_cp03_ParamLimits

0xaa16,	// (0x00028df6) bg_vkb2_fuc_pane_cp03

0xbdf6,	// (0x0002a1d6) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x5788,	// (0x00023b68) bg_vkb2_func_pane_g1

0x5780,	// (0x00023b60) bg_vkb2_func_pane_g2

0x5790,	// (0x00023b70) bg_vkb2_func_pane_g3

0x5798,	// (0x00023b78) bg_vkb2_func_pane_g4

0x57a0,	// (0x00023b80) bg_vkb2_func_pane_g5

0x57a8,	// (0x00023b88) bg_vkb2_func_pane_g6

0x57b8,	// (0x00023b98) bg_vkb2_func_pane_g7

0x57b0,	// (0x00023b90) bg_vkb2_func_pane_g8

0x5778,	// (0x00023b58) bg_vkb2_func_pane_g9

0x0008,

0xfe01,	// (0x0002e1e1) bg_vkb2_func_pane_g

0xaa16,	// (0x00028df6) bg_vkb2_fuc_pane_cp01_ParamLimits

0xaa16,	// (0x00028df6) bg_vkb2_fuc_pane_cp01

0xbd98,	// (0x0002a178) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xbd98,	// (0x0002a178) vkb2_top_cell_right_wide_pane_g1

0xaa16,	// (0x00028df6) bg_vkb2_fuc_pane_cp02_ParamLimits

0xaa16,	// (0x00028df6) bg_vkb2_fuc_pane_cp02

0xbdf6,	// (0x0002a1d6) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xbdf6,	// (0x0002a1d6) vkb2_top_cell_right_narrow_pane_g1

0xc67d,	// (0x0002aa5d) aid_touch_area_decrease_ParamLimits

0xc67d,	// (0x0002aa5d) aid_touch_area_decrease

0xc6a1,	// (0x0002aa81) aid_touch_area_increase_ParamLimits

0xc6a1,	// (0x0002aa81) aid_touch_area_increase

0xc6ad,	// (0x0002aa8d) aid_touch_area_mute_ParamLimits

0xc6ad,	// (0x0002aa8d) aid_touch_area_mute

0xc6d1,	// (0x0002aab1) aid_touch_area_slider_ParamLimits

0xc6d1,	// (0x0002aab1) aid_touch_area_slider

0xc7bd,	// (0x0002ab9d) popup_slider_window_g4_ParamLimits

0xc7bd,	// (0x0002ab9d) popup_slider_window_g4

0xc7c9,	// (0x0002aba9) popup_slider_window_g5_ParamLimits

0xc7c9,	// (0x0002aba9) popup_slider_window_g5

0xc7eb,	// (0x0002abcb) popup_slider_window_g6_ParamLimits

0xc7eb,	// (0x0002abcb) popup_slider_window_g6

0xc82b,	// (0x0002ac0b) popup_slider_window_t2_ParamLimits

0xc82b,	// (0x0002ac0b) popup_slider_window_t2

0x0001,

0xfcfd,	// (0x0002e0dd) popup_slider_window_t_ParamLimits

0xfcfd,	// (0x0002e0dd) popup_slider_window_t

0xc843,	// (0x0002ac23) slider_pane_ParamLimits

0xc843,	// (0x0002ac23) slider_pane

0xd16a,	// (0x0002b54a) slider_pane_g1_ParamLimits

0xd16a,	// (0x0002b54a) slider_pane_g1

0xd17e,	// (0x0002b55e) slider_pane_g2_ParamLimits

0xd17e,	// (0x0002b55e) slider_pane_g2

0xd194,	// (0x0002b574) slider_pane_g3_ParamLimits

0xd194,	// (0x0002b574) slider_pane_g3

0x0003,

0xfe14,	// (0x0002e1f4) slider_pane_g_ParamLimits

0xfe14,	// (0x0002e1f4) slider_pane_g

0x99b5,	// (0x00027d95) popup_tb_float_extension_window_ParamLimits

0x99b5,	// (0x00027d95) popup_tb_float_extension_window

0xd1c0,	// (0x0002b5a0) aid_size_cell_tb_float_ext

0x4184,	// (0x00022564) bg_popup_sub_window_cp28

0xd1cc,	// (0x0002b5ac) grid_tb_float_ext_pane

0xd1d6,	// (0x0002b5b6) cell_tb_float_ext_pane_ParamLimits

0xd1d6,	// (0x0002b5b6) cell_tb_float_ext_pane

0xd1f0,	// (0x0002b5d0) cell_tb_float_ext_pane_g1

0xd1f9,	// (0x0002b5d9) grid_highlight_pane_cp12

0xab65,	// (0x00028f45) cell_last_hwr_side_pane_ParamLimits

0xab65,	// (0x00028f45) cell_last_hwr_side_pane

0x75d0,	// (0x000259b0) cell_last_hwr_side_pane_g1

0xd202,	// (0x0002b5e2) cell_last_hwr_side_pane_g2

0x0001,

0xfe1d,	// (0x0002e1fd) cell_last_hwr_side_pane_g

0xbcbe,	// (0x0002a09e) vkb2_area_bottom_space_btn_pane_ParamLimits

0xbcbe,	// (0x0002a09e) vkb2_area_bottom_space_btn_pane

0xad65,	// (0x00029145) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xd055,	// (0x0002b435) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xbf58,	// (0x0002a338) cell_vkb2_top_candi_pane_t1_ParamLimits

0xbf77,	// (0x0002a357) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xbf77,	// (0x0002a357) vkb2_area_bottom_space_btn_pane_g1

0xbfb1,	// (0x0002a391) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xbfb1,	// (0x0002a391) vkb2_area_bottom_space_btn_pane_g2

0xbfe7,	// (0x0002a3c7) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xbfe7,	// (0x0002a3c7) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe22,	// (0x0002e202) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe22,	// (0x0002e202) vkb2_area_bottom_space_btn_pane_g

0xaad9,	// (0x00028eb9) cel_fep_hwr_func_pane_ParamLimits

0xaad9,	// (0x00028eb9) cel_fep_hwr_func_pane

0xab15,	// (0x00028ef5) cell_hwr_side_button_pane_ParamLimits

0xab15,	// (0x00028ef5) cell_hwr_side_button_pane

0xca83,	// (0x0002ae63) aid_area_touch_clock_ParamLimits

0x4327,	// (0x00022707) bg_uniindi_top_pane_ParamLimits

0xca95,	// (0x0002ae75) uniindi_top_pane_g1_ParamLimits

0xcaab,	// (0x0002ae8b) uniindi_top_pane_g2_ParamLimits

0xcab7,	// (0x0002ae97) uniindi_top_pane_g3_ParamLimits

0xcac8,	// (0x0002aea8) uniindi_top_pane_g4_ParamLimits

0xfd35,	// (0x0002e115) uniindi_top_pane_g_ParamLimits

0xcad5,	// (0x0002aeb5) uniindi_top_pane_t1_ParamLimits

0x4327,	// (0x00022707) bg_vkb2_func_pane_cp01_ParamLimits

0x4327,	// (0x00022707) bg_vkb2_func_pane_cp01

0xd20b,	// (0x0002b5eb) cel_fep_hwr_func_pane_g1_ParamLimits

0xd20b,	// (0x0002b5eb) cel_fep_hwr_func_pane_g1

0x4327,	// (0x00022707) bg_vkb2_func_pane_cp02_ParamLimits

0x4327,	// (0x00022707) bg_vkb2_func_pane_cp02

0xd20b,	// (0x0002b5eb) cell_hwr_side_button_pane_g1_ParamLimits

0xd20b,	// (0x0002b5eb) cell_hwr_side_button_pane_g1

0x5690,	// (0x00023a70) status_pane_g4_ParamLimits

0x5690,	// (0x00023a70) status_pane_g4

0x56a8,	// (0x00023a88) status_pane_t1

0x7460,	// (0x00025840) form2_midp_gauge_slider_cont_pane

0x7468,	// (0x00025848) form2_midp_gauge_slider_pane_t1_ParamLimits

0xa889,	// (0x00028c69) form2_midp_gauge_slider_pane_t2_ParamLimits

0xa89b,	// (0x00028c7b) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafc,	// (0x0002dedc) form2_midp_gauge_slider_pane_t_ParamLimits

0x747a,	// (0x0002585a) form2_midp_slider_pane_ParamLimits

0xb935,	// (0x00029d15) aid_size_cell_func_vkb2_ParamLimits

0xb935,	// (0x00029d15) aid_size_cell_func_vkb2

0xd1ac,	// (0x0002b58c) slider_pane_g4_ParamLimits

0xd1ac,	// (0x0002b58c) slider_pane_g4

0xc031,	// (0x0002a411) form2_midp_gauge_slider_pane_t2_cp01

0xc03f,	// (0x0002a41f) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc03f,	// (0x0002a41f) form2_midp_gauge_slider_pane_t3_cp01

0xc05c,	// (0x0002a43c) form2_midp_slider_pane_cp01

0x4184,	// (0x00022564) navi_smil_pane

0xd23b,	// (0x0002b61b) navi_smil_pane_g1

0xd243,	// (0x0002b623) navi_smil_pane_t1

0xd219,	// (0x0002b5f9) form2_midp_slider_pane_g1

0xd222,	// (0x0002b602) form2_midp_slider_pane_g2

0xd22a,	// (0x0002b60a) form2_midp_slider_pane_g3

0xd219,	// (0x0002b5f9) form2_midp_slider_pane_g4

0xf314,	// (0x0002d6f4) form2_midp_slider_pane_g5

0x0004,

0xfe2b,	// (0x0002e20b) form2_midp_slider_pane_g

0xc021,	// (0x0002a401) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xc021,	// (0x0002a401) vkb2_area_bottom_space_btn_pane_g4

0x9b20,	// (0x00027f00) lc0_navi_pane_ParamLimits

0x9b20,	// (0x00027f00) lc0_navi_pane

0x9b96,	// (0x00027f76) lc0_stat_indi_pane_ParamLimits

0x9b96,	// (0x00027f76) lc0_stat_indi_pane

0x9bad,	// (0x00027f8d) ls0_title_pane_ParamLimits

0x9bad,	// (0x00027f8d) ls0_title_pane

0x47e9,	// (0x00022bc9) bg_popup_sub_pane_cp14_ParamLimits

0xca6a,	// (0x0002ae4a) list_uniindi_pane_ParamLimits

0xca76,	// (0x0002ae56) uniindi_top_pane_ParamLimits

0xcb11,	// (0x0002aef1) list_single_uniindi_pane_g1_ParamLimits

0xcb24,	// (0x0002af04) list_single_uniindi_pane_t1_ParamLimits

0xc065,	// (0x0002a445) lc0_stat_clock_pane_ParamLimits

0xc065,	// (0x0002a445) lc0_stat_clock_pane

0xf31d,	// (0x0002d6fd) lc0_stat_indi_pane_g1_ParamLimits

0xf31d,	// (0x0002d6fd) lc0_stat_indi_pane_g1

0xf32a,	// (0x0002d70a) lc0_stat_indi_pane_g2_ParamLimits

0xf32a,	// (0x0002d70a) lc0_stat_indi_pane_g2

0x0001,

0xfe36,	// (0x0002e216) lc0_stat_indi_pane_g_ParamLimits

0xfe36,	// (0x0002e216) lc0_stat_indi_pane_g

0xc072,	// (0x0002a452) lc0_uni_indicator_pane_ParamLimits

0xc072,	// (0x0002a452) lc0_uni_indicator_pane

0xd251,	// (0x0002b631) ls0_title_pane_g1_ParamLimits

0xd251,	// (0x0002b631) ls0_title_pane_g1

0xf337,	// (0x0002d717) ls0_title_pane_t1_ParamLimits

0xf337,	// (0x0002d717) ls0_title_pane_t1

0xc07f,	// (0x0002a45f) lc0_uni_indicator_pane_g1_ParamLimits

0xc07f,	// (0x0002a45f) lc0_uni_indicator_pane_g1

0xd265,	// (0x0002b645) lc0_stat_clock_pane_t1

0x4184,	// (0x00022564) main_ai5_pane

0xd273,	// (0x0002b653) ai5_sk_pane_ParamLimits

0xd273,	// (0x0002b653) ai5_sk_pane

0xf36d,	// (0x0002d74d) cell_ai5_widget_pane_ParamLimits

0xf36d,	// (0x0002d74d) cell_ai5_widget_pane

0xd280,	// (0x0002b660) aid_size_cell_widget_grid

0xd294,	// (0x0002b674) bg_ai5_widget_pane_ParamLimits

0xd294,	// (0x0002b674) bg_ai5_widget_pane

0xd2de,	// (0x0002b6be) cell_ai5_widget_pane_g2

0xd2ee,	// (0x0002b6ce) cell_ai5_widget_pane_g3

0xd30d,	// (0x0002b6ed) cell_ai5_widget_pane_g4

0xd319,	// (0x0002b6f9) cell_ai5_widget_pane_g5

0xd325,	// (0x0002b705) cell_ai5_widget_pane_g6

0xd331,	// (0x0002b711) cell_ai5_widget_pane_g7

0xd379,	// (0x0002b759) cell_ai5_widget_pane_t1_ParamLimits

0xd379,	// (0x0002b759) cell_ai5_widget_pane_t1

0xd396,	// (0x0002b776) cell_ai5_widget_pane_t2_ParamLimits

0xd396,	// (0x0002b776) cell_ai5_widget_pane_t2

0xd3ae,	// (0x0002b78e) cell_ai5_widget_pane_t3_ParamLimits

0xd3ae,	// (0x0002b78e) cell_ai5_widget_pane_t3

0xd3c6,	// (0x0002b7a6) cell_ai5_widget_pane_t4_ParamLimits

0xd3c6,	// (0x0002b7a6) cell_ai5_widget_pane_t4

0xd3e0,	// (0x0002b7c0) cell_ai5_widget_pane_t5_ParamLimits

0xd3e0,	// (0x0002b7c0) cell_ai5_widget_pane_t5

0xd3ff,	// (0x0002b7df) cell_ai5_widget_pane_t6_ParamLimits

0xd3ff,	// (0x0002b7df) cell_ai5_widget_pane_t6

0xd411,	// (0x0002b7f1) cell_ai5_widget_pane_t7_ParamLimits

0xd411,	// (0x0002b7f1) cell_ai5_widget_pane_t7

0xd42a,	// (0x0002b80a) cell_ai5_widget_pane_t8_ParamLimits

0xd42a,	// (0x0002b80a) cell_ai5_widget_pane_t8

0x0009,

0xfe50,	// (0x0002e230) cell_ai5_widget_pane_t_ParamLimits

0xfe50,	// (0x0002e230) cell_ai5_widget_pane_t

0xd476,	// (0x0002b856) grid_ai5_widget_pane

0x47e9,	// (0x00022bc9) highlight_cell_ai5_widget_pane_ParamLimits

0x47e9,	// (0x00022bc9) highlight_cell_ai5_widget_pane

0xf43d,	// (0x0002d81d) ai5_sk_left_pane

0xf447,	// (0x0002d827) ai5_sk_middle_pane

0xf451,	// (0x0002d831) ai5_sk_right_pane

0xd48a,	// (0x0002b86a) bg_ai5_widget_pane_g1_ParamLimits

0xd48a,	// (0x0002b86a) bg_ai5_widget_pane_g1

0xd496,	// (0x0002b876) bg_ai5_widget_pane_g2_ParamLimits

0xd496,	// (0x0002b876) bg_ai5_widget_pane_g2

0xd4a2,	// (0x0002b882) bg_ai5_widget_pane_g3_ParamLimits

0xd4a2,	// (0x0002b882) bg_ai5_widget_pane_g3

0xd4ae,	// (0x0002b88e) bg_ai5_widget_pane_g4_ParamLimits

0xd4ae,	// (0x0002b88e) bg_ai5_widget_pane_g4

0xd4ba,	// (0x0002b89a) bg_ai5_widget_pane_g5_ParamLimits

0xd4ba,	// (0x0002b89a) bg_ai5_widget_pane_g5

0xd4c6,	// (0x0002b8a6) bg_ai5_widget_pane_g6_ParamLimits

0xd4c6,	// (0x0002b8a6) bg_ai5_widget_pane_g6

0xd4d2,	// (0x0002b8b2) bg_ai5_widget_pane_g7_ParamLimits

0xd4d2,	// (0x0002b8b2) bg_ai5_widget_pane_g7

0xd4de,	// (0x0002b8be) bg_ai5_widget_pane_g8_ParamLimits

0xd4de,	// (0x0002b8be) bg_ai5_widget_pane_g8

0xd4ea,	// (0x0002b8ca) bg_ai5_widget_pane_g9_ParamLimits

0xd4ea,	// (0x0002b8ca) bg_ai5_widget_pane_g9

0x0008,

0xfe65,	// (0x0002e245) bg_ai5_widget_pane_g_ParamLimits

0xfe65,	// (0x0002e245) bg_ai5_widget_pane_g

0xd51d,	// (0x0002b8fd) cell_shortcut_ai5_widget_pane_ParamLimits

0xd51d,	// (0x0002b8fd) cell_shortcut_ai5_widget_pane

0x4230,	// (0x00022610) bg_cell_shortcut_ai5_widget_pane

0xd52e,	// (0x0002b90e) cell_grid_ai5_widget_pane_g1

0xd537,	// (0x0002b917) highlight_cell_shortcut_ai5_widget_pane

0x5788,	// (0x00023b68) ai5_sk_left_pane_g1

0xd53f,	// (0x0002b91f) ai5_sk_left_pane_g2

0xd547,	// (0x0002b927) ai5_sk_left_pane_g3

0xd54f,	// (0x0002b92f) ai5_sk_left_pane_g4

0x0003,

0xfe78,	// (0x0002e258) ai5_sk_left_pane_g

0xd557,	// (0x0002b937) ai5_sk_left_pane_t1

0x5780,	// (0x00023b60) ai5_sk_right_pane_g1

0xd565,	// (0x0002b945) ai5_sk_right_pane_g2

0xd56d,	// (0x0002b94d) ai5_sk_right_pane_g3

0xd575,	// (0x0002b955) ai5_sk_right_pane_g4

0x0003,

0xfe81,	// (0x0002e261) ai5_sk_right_pane_g

0xd57d,	// (0x0002b95d) ai5_sk_right_pane_t1

0x5780,	// (0x00023b60) ai5_sk_middle_pane_g1

0x5788,	// (0x00023b68) ai5_sk_middle_pane_g2

0x57a0,	// (0x00023b80) ai5_sk_middle_pane_g3

0xd56d,	// (0x0002b94d) ai5_sk_middle_pane_g4

0xd547,	// (0x0002b927) ai5_sk_middle_pane_g5

0xd58b,	// (0x0002b96b) ai5_sk_middle_pane_g6

0xf45b,	// (0x0002d83b) ai5_sk_middle_pane_g7

0x0006,

0xfe8a,	// (0x0002e26a) ai5_sk_middle_pane_g

0x9a65,	// (0x00027e45) aid_touch_area_size_lc0_ParamLimits

0x9a65,	// (0x00027e45) aid_touch_area_size_lc0

0xad94,	// (0x00029174) cell_hwr_candidate_pane_t1_ParamLimits

0x55b2,	// (0x00023992) aid_touch_navi_pane

0x9c84,	// (0x00028064) status_dt_navi_pane_ParamLimits

0x9c84,	// (0x00028064) status_dt_navi_pane

0x9c91,	// (0x00028071) status_dt_sta_pane_ParamLimits

0x9c91,	// (0x00028071) status_dt_sta_pane

0xf463,	// (0x0002d843) dt_sta_controll_pane

0xf470,	// (0x0002d850) dt_sta_indi_pane

0xf47d,	// (0x0002d85d) dt_sta_title_pane

0x4327,	// (0x00022707) bg_dt_sta_indi_pane_ParamLimits

0x4327,	// (0x00022707) bg_dt_sta_indi_pane

0xd593,	// (0x0002b973) dt_sta_battery_pane

0xd59b,	// (0x0002b97b) dt_sta_indi_pane_g1

0xd5a4,	// (0x0002b984) dt_sta_indi_pane_g2

0xd5ad,	// (0x0002b98d) dt_sta_indi_pane_g3

0x0002,

0xfe99,	// (0x0002e279) dt_sta_indi_pane_g

0xd5b6,	// (0x0002b996) dt_sta_signal_pane

0x47e9,	// (0x00022bc9) bg_dt_sta_title_pane_ParamLimits

0x47e9,	// (0x00022bc9) bg_dt_sta_title_pane

0x6449,	// (0x00024829) dt_sta_title_pane_g1

0xd5bf,	// (0x0002b99f) dt_sta_title_pane_t1_ParamLimits

0xd5bf,	// (0x0002b99f) dt_sta_title_pane_t1

0x4184,	// (0x00022564) bg_dt_sta_control_pane

0xd5d4,	// (0x0002b9b4) dt_sta_controll_pane_g1

0xd5dd,	// (0x0002b9bd) bg_dt_sta_title_pane_g1

0xd5e6,	// (0x0002b9c6) bg_dt_sta_title_pane_g2

0xd5ef,	// (0x0002b9cf) bg_dt_sta_title_pane_g3

0x0002,

0xfea0,	// (0x0002e280) bg_dt_sta_title_pane_g

0x75d0,	// (0x000259b0) bg_dt_sta_indi_pane_g1

0xd5f8,	// (0x0002b9d8) dt_sta_signal_pane_g1

0xd600,	// (0x0002b9e0) dt_sta_signal_pane_g2

0x0001,

0xfea7,	// (0x0002e287) dt_sta_signal_pane_g

0xd608,	// (0x0002b9e8) dt_sta_battery_pane_g1

0xd611,	// (0x0002b9f1) dt_sta_battery_pane_t1

0x75d0,	// (0x000259b0) bg_dt_sta_control_pane_g1

0x4d8d,	// (0x0002316d) fep_china_uni_eep_pane

0x4d95,	// (0x00023175) fep_china_uni_entry_pane_ParamLimits

0x4da5,	// (0x00023185) popup_fep_china_uni_window_g1_ParamLimits

0x4db5,	// (0x00023195) popup_fep_china_uni_window_g2_ParamLimits

0x4db5,	// (0x00023195) popup_fep_china_uni_window_g2

0x0001,

0xf730,	// (0x0002db10) popup_fep_china_uni_window_g_ParamLimits

0xf730,	// (0x0002db10) popup_fep_china_uni_window_g

0xd620,	// (0x0002ba00) fep_china_uni_eep_pane_g1

0xd628,	// (0x0002ba08) fep_china_uni_eep_pane_t1

0xd232,	// (0x0002b612) aid_touch_area_size_smil_player

0x5663,	// (0x00023a43) lc0_clock_pane

0x569c,	// (0x00023a7c) status_pane_g5_ParamLimits

0x569c,	// (0x00023a7c) status_pane_g5

0x96c7,	// (0x00027aa7) popup_keymap_window

0x567c,	// (0x00023a5c) status_icon_pane

0xd2ee,	// (0x0002b6ce) cell_ai5_widget_pane_g3_ParamLimits

0xd30d,	// (0x0002b6ed) cell_ai5_widget_pane_g4_ParamLimits

0xd319,	// (0x0002b6f9) cell_ai5_widget_pane_g5_ParamLimits

0xd33d,	// (0x0002b71d) cell_ai5_widget_pane_g8_ParamLimits

0xd33d,	// (0x0002b71d) cell_ai5_widget_pane_g8

0xd351,	// (0x0002b731) cell_ai5_widget_pane_g9_ParamLimits

0xd351,	// (0x0002b731) cell_ai5_widget_pane_g9

0xd365,	// (0x0002b745) cell_ai5_widget_pane_g10_ParamLimits

0xd365,	// (0x0002b745) cell_ai5_widget_pane_g10

0xd637,	// (0x0002ba17) status_icon_pane_g1

0x4184,	// (0x00022564) bg_popup_sub_pane_cp13

0xd63f,	// (0x0002ba1f) popup_keymap_window_t1

0x94ae,	// (0x0002788e) control_pane_g6_ParamLimits

0x94ae,	// (0x0002788e) control_pane_g6

0x94bb,	// (0x0002789b) control_pane_g7_ParamLimits

0x94bb,	// (0x0002789b) control_pane_g7

0x94c8,	// (0x000278a8) control_pane_g8_ParamLimits

0x94c8,	// (0x000278a8) control_pane_g8

0xf463,	// (0x0002d843) dt_sta_controll_pane_ParamLimits

0xf470,	// (0x0002d850) dt_sta_indi_pane_ParamLimits

0xf47d,	// (0x0002d85d) dt_sta_title_pane_ParamLimits

0x472b,	// (0x00022b0b) aid_size_touch_scroll_bar_cale

0x8803,	// (0x00026be3) popup_discreet_window_ParamLimits

0x8803,	// (0x00026be3) popup_discreet_window

0x887d,	// (0x00026c5d) popup_sk_window

0x5d25,	// (0x00024105) bg_popup_sub_pane_cp28_ParamLimits

0x5d25,	// (0x00024105) bg_popup_sub_pane_cp28

0xd64d,	// (0x0002ba2d) popup_discreet_window_g1_ParamLimits

0xd64d,	// (0x0002ba2d) popup_discreet_window_g1

0xd66d,	// (0x0002ba4d) popup_discreet_window_t1_ParamLimits

0xd66d,	// (0x0002ba4d) popup_discreet_window_t1

0xd68b,	// (0x0002ba6b) popup_discreet_window_t2_ParamLimits

0xd68b,	// (0x0002ba6b) popup_discreet_window_t2

0x0002,

0xfeac,	// (0x0002e28c) popup_discreet_window_t_ParamLimits

0xfeac,	// (0x0002e28c) popup_discreet_window_t

0xc095,	// (0x0002a475) popup_sk_window_g1

0xc09f,	// (0x0002a47f) popup_sk_window_g2

0x0001,

0xfeb3,	// (0x0002e293) popup_sk_window_g

0xc0a9,	// (0x0002a489) popup_sk_window_t1

0xc0b7,	// (0x0002a497) popup_sk_window_t1_copy1

0xd2de,	// (0x0002b6be) cell_ai5_widget_pane_g2_ParamLimits

0xd43c,	// (0x0002b81c) cell_ai5_widget_pane_t9_ParamLimits

0xd43c,	// (0x0002b81c) cell_ai5_widget_pane_t9

0x4184,	// (0x00022564) main_fep_fshwr2_pane

0xf48e,	// (0x0002d86e) aid_fshwr2_btn_pane

0xf496,	// (0x0002d876) aid_fshwr2_syb_pane

0xf49e,	// (0x0002d87e) aid_fshwr2_txt_pane

0xf4a6,	// (0x0002d886) fshwr2_func_candi_pane

0xf4b2,	// (0x0002d892) fshwr2_hwr_syb_pane

0xf4be,	// (0x0002d89e) fshwr2_icf_pane

0x4184,	// (0x00022564) fshwr2_icf_bg_pane

0xf4c8,	// (0x0002d8a8) fshwr2_icf_pane_t1_ParamLimits

0xf4c8,	// (0x0002d8a8) fshwr2_icf_pane_t1

0x75d0,	// (0x000259b0) fshwr2_func_candi_pane_g1

0xd6f1,	// (0x0002bad1) fshwr2_func_candi_row_pane_ParamLimits

0xd6f1,	// (0x0002bad1) fshwr2_func_candi_row_pane

0xf4df,	// (0x0002d8bf) cell_fshwr2_syb_pane_ParamLimits

0xf4df,	// (0x0002d8bf) cell_fshwr2_syb_pane

0x7839,	// (0x00025c19) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7839,	// (0x00025c19) fshwr2_hwr_syb_pane_g1

0x4184,	// (0x00022564) bg_popup_call_pane_cp01

0xd702,	// (0x0002bae2) fshwr2_func_candi_cell_pane_ParamLimits

0xd702,	// (0x0002bae2) fshwr2_func_candi_cell_pane

0xd733,	// (0x0002bb13) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xd733,	// (0x0002bb13) fshwr2_func_candi_cell_bg_pane

0xd74d,	// (0x0002bb2d) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xd74d,	// (0x0002bb2d) fshwr2_func_candi_cell_pane_g1

0xd76d,	// (0x0002bb4d) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xd76d,	// (0x0002bb4d) fshwr2_func_candi_cell_pane_t1

0x4184,	// (0x00022564) bg_button_pane_cp08

0x521e,	// (0x000235fe) cell_fshwr2_syb_bg_pane

0xf4fb,	// (0x0002d8db) cell_fshwr2_syb_bg_pane_g1

0xd780,	// (0x0002bb60) cell_fshwr2_syb_bg_pane_t1

0x47e9,	// (0x00022bc9) main_tmo_pane

0xa21f,	// (0x000285ff) uni_indicator_pane_g1_ParamLimits

0xa234,	// (0x00028614) uni_indicator_pane_g2_ParamLimits

0x675f,	// (0x00024b3f) uni_indicator_pane_g3_ParamLimits

0x6775,	// (0x00024b55) uni_indicator_pane_g4_ParamLimits

0x6775,	// (0x00024b55) uni_indicator_pane_g4

0x6789,	// (0x00024b69) uni_indicator_pane_g5_ParamLimits

0x6789,	// (0x00024b69) uni_indicator_pane_g5

0x679d,	// (0x00024b7d) uni_indicator_pane_g6_ParamLimits

0x679d,	// (0x00024b7d) uni_indicator_pane_g6

0xf928,	// (0x0002dd08) uni_indicator_pane_g_ParamLimits

0xc65f,	// (0x0002aa3f) popup_tmo_note_window_ParamLimits

0xc65f,	// (0x0002aa3f) popup_tmo_note_window

0x4184,	// (0x00022564) fshwr2_bg_pane

0xd75e,	// (0x0002bb3e) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xd75e,	// (0x0002bb3e) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb8,	// (0x0002e298) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb8,	// (0x0002e298) fshwr2_func_candi_cell_pane_g

0x75d0,	// (0x000259b0) bg_popup_window_pane_cp01

0xd78f,	// (0x0002bb6f) bg_popup_window_pane_g1_cp01

0xd798,	// (0x0002bb78) bg_popup_window_pane_cp22_ParamLimits

0xd798,	// (0x0002bb78) bg_popup_window_pane_cp22

0xd7a6,	// (0x0002bb86) listscroll_tmo_link_pane_ParamLimits

0xd7a6,	// (0x0002bb86) listscroll_tmo_link_pane

0xd7e6,	// (0x0002bbc6) popup_tmo_note_window_g1_ParamLimits

0xd7e6,	// (0x0002bbc6) popup_tmo_note_window_g1

0xd7f3,	// (0x0002bbd3) tmo_note_info_pane_ParamLimits

0xd7f3,	// (0x0002bbd3) tmo_note_info_pane

0xf503,	// (0x0002d8e3) list_tmo_note_info_pane_g1_ParamLimits

0xf503,	// (0x0002d8e3) list_tmo_note_info_pane_g1

0xd80d,	// (0x0002bbed) list_tmo_note_info_pane_g2_ParamLimits

0xd80d,	// (0x0002bbed) list_tmo_note_info_pane_g2

0x0001,

0xfebd,	// (0x0002e29d) list_tmo_note_info_pane_g_ParamLimits

0xfebd,	// (0x0002e29d) list_tmo_note_info_pane_g

0xd829,	// (0x0002bc09) list_tmo_note_info_text_pane_ParamLimits

0xd829,	// (0x0002bc09) list_tmo_note_info_text_pane

0xd86b,	// (0x0002bc4b) list_tmo_link_pane

0xd878,	// (0x0002bc58) scroll_pane_cp20

0xd885,	// (0x0002bc65) list_single_tmo_link_pane_ParamLimits

0xd885,	// (0x0002bc65) list_single_tmo_link_pane

0xd895,	// (0x0002bc75) list_single_tmo_link_pane_t1

0xd8a3,	// (0x0002bc83) list_tmo_note_info_text_pane_t1_ParamLimits

0xd8a3,	// (0x0002bc83) list_tmo_note_info_text_pane_t1

0x8cd4,	// (0x000270b4) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8cd4,	// (0x000270b4) aid_size_touch_scroll_bar_cp01

0xe5d5,	// (0x0002c9b5) aid_size_touch_slider_marker

0x8865,	// (0x00026c45) popup_settings_window_ParamLimits

0x8865,	// (0x00026c45) popup_settings_window

0xe79d,	// (0x0002cb7d) popup_candi_list_indi_window

0x55b2,	// (0x00023992) aid_touch_navi_pane_ParamLimits

0xb872,	// (0x00029c52) rs_clock_indi_pane

0xb87b,	// (0x00029c5b) sctrl_sk_bottom_pane_ParamLimits

0xb88c,	// (0x00029c6c) sctrl_sk_top_pane_ParamLimits

0xb98f,	// (0x00029d6f) popup_fep_tooltip_window

0xd280,	// (0x0002b660) aid_size_cell_widget_grid_ParamLimits

0xd2d2,	// (0x0002b6b2) cell_ai5_widget_pane_g1_ParamLimits

0xd2d2,	// (0x0002b6b2) cell_ai5_widget_pane_g1

0xd325,	// (0x0002b705) cell_ai5_widget_pane_g6_ParamLimits

0xd331,	// (0x0002b711) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3b,	// (0x0002e21b) cell_ai5_widget_pane_g_ParamLimits

0xfe3b,	// (0x0002e21b) cell_ai5_widget_pane_g

0xd460,	// (0x0002b840) cell_ai5_widget_pane_t10_ParamLimits

0xd460,	// (0x0002b840) cell_ai5_widget_pane_t10

0xd476,	// (0x0002b856) grid_ai5_widget_pane_ParamLimits

0xd4f6,	// (0x0002b8d6) cell_contacts_ai5_widget_pane_ParamLimits

0xd4f6,	// (0x0002b8d6) cell_contacts_ai5_widget_pane

0xd6a0,	// (0x0002ba80) popup_discreet_window_t3_ParamLimits

0xd6a0,	// (0x0002ba80) popup_discreet_window_t3

0xd6dd,	// (0x0002babd) popup_fshwr2_char_preview_window_ParamLimits

0xd6dd,	// (0x0002babd) popup_fshwr2_char_preview_window

0xf51a,	// (0x0002d8fa) tmo_note_info_pane_t1

0xf52f,	// (0x0002d90f) tmo_note_info_pane_t2

0xf548,	// (0x0002d928) tmo_note_info_pane_t3

0xd847,	// (0x0002bc27) tmo_note_info_pane_t4

0xd859,	// (0x0002bc39) tmo_note_info_pane_t5

0x0004,

0xfec2,	// (0x0002e2a2) tmo_note_info_pane_t

0xd86b,	// (0x0002bc4b) list_tmo_link_pane_ParamLimits

0xd878,	// (0x0002bc58) scroll_pane_cp20_ParamLimits

0x4184,	// (0x00022564) bg_popup_fep_char_preview_window_cp01

0xd8bc,	// (0x0002bc9c) popup_fshwr2_char_preview_window_t1

0xd8ca,	// (0x0002bcaa) popup_candi_list_indi_window_g1

0xd8d3,	// (0x0002bcb3) bg_cell_contacts_ai5_widget_pane

0xd8df,	// (0x0002bcbf) cell_contacts_ai5_widget_pane_g1

0xd8f2,	// (0x0002bcd2) cell_contacts_ai5_widget_pane_g2

0xd8fe,	// (0x0002bcde) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfecd,	// (0x0002e2ad) cell_contacts_ai5_widget_pane_g

0xd910,	// (0x0002bcf0) cell_contacts_ai5_widget_pane_t1

0x47e9,	// (0x00022bc9) highlight_cell_shortcut_ai5_widget_pane_cp01

0xd98a,	// (0x0002bd6a) settings_container_pane

0x521e,	// (0x000235fe) listscroll_set_pane_copy1

0x6fa9,	// (0x00025389) scroll_pane_cp121_copy1

0xd996,	// (0x0002bd76) set_content_pane_copy1

0xd99e,	// (0x0002bd7e) aid_height_set_list_copy1_ParamLimits

0xd99e,	// (0x0002bd7e) aid_height_set_list_copy1

0x60f2,	// (0x000244d2) aid_size_parent_copy1_ParamLimits

0x60f2,	// (0x000244d2) aid_size_parent_copy1

0xd9aa,	// (0x0002bd8a) button_value_adjust_pane_cp6_copy1_ParamLimits

0xd9aa,	// (0x0002bd8a) button_value_adjust_pane_cp6_copy1

0x4940,	// (0x00022d20) list_highlight_pane_cp2_copy1_ParamLimits

0x4940,	// (0x00022d20) list_highlight_pane_cp2_copy1

0xd9be,	// (0x0002bd9e) list_set_pane_copy1_ParamLimits

0xd9be,	// (0x0002bd9e) list_set_pane_copy1

0xd925,	// (0x0002bd05) main_pane_set_t1_copy1_ParamLimits

0xd925,	// (0x0002bd05) main_pane_set_t1_copy1

0xd95f,	// (0x0002bd3f) main_pane_set_t2_copy1_ParamLimits

0xd95f,	// (0x0002bd3f) main_pane_set_t2_copy1

0xda6b,	// (0x0002be4b) main_pane_set_t3_copy1

0xda79,	// (0x0002be59) main_pane_set_t4_copy1

0xd97e,	// (0x0002bd5e) set_content_pane_g1_copy1_ParamLimits

0xd97e,	// (0x0002bd5e) set_content_pane_g1_copy1

0xda87,	// (0x0002be67) setting_code_pane_copy1

0xda91,	// (0x0002be71) setting_slider_graphic_pane_copy1

0xda91,	// (0x0002be71) setting_slider_pane_copy1

0xda91,	// (0x0002be71) setting_text_pane_copy1

0xda9b,	// (0x0002be7b) setting_volume_pane_copy1

0xdaa4,	// (0x0002be84) settings_code_pane_cp2_copy1

0xdaac,	// (0x0002be8c) settings_code_pane_cp_copy1_ParamLimits

0xdaac,	// (0x0002be8c) settings_code_pane_cp_copy1

0xdac0,	// (0x0002bea0) volume_set_pane_copy1

0xdac8,	// (0x0002bea8) volume_set_pane_g10_copy1

0xdad0,	// (0x0002beb0) volume_set_pane_g1_copy1

0xdad8,	// (0x0002beb8) volume_set_pane_g2_copy1

0xdae0,	// (0x0002bec0) volume_set_pane_g3_copy1

0xdae8,	// (0x0002bec8) volume_set_pane_g4_copy1

0xdaf0,	// (0x0002bed0) volume_set_pane_g5_copy1

0xdaf8,	// (0x0002bed8) volume_set_pane_g6_copy1

0xdb00,	// (0x0002bee0) volume_set_pane_g7_copy1

0xdb08,	// (0x0002bee8) volume_set_pane_g8_copy1

0xdb10,	// (0x0002bef0) volume_set_pane_g9_copy1

0x41f4,	// (0x000225d4) bg_set_opt_pane_cp_copy1_ParamLimits

0x41f4,	// (0x000225d4) bg_set_opt_pane_cp_copy1

0xdb18,	// (0x0002bef8) setting_slider_pane_t1_copy1_ParamLimits

0xdb18,	// (0x0002bef8) setting_slider_pane_t1_copy1

0xdb36,	// (0x0002bf16) setting_slider_pane_t2_copy1_ParamLimits

0xdb36,	// (0x0002bf16) setting_slider_pane_t2_copy1

0xdb50,	// (0x0002bf30) setting_slider_pane_t3_copy1_ParamLimits

0xdb50,	// (0x0002bf30) setting_slider_pane_t3_copy1

0xdb68,	// (0x0002bf48) slider_set_pane_copy1_ParamLimits

0xdb68,	// (0x0002bf48) slider_set_pane_copy1

0x4850,	// (0x00022c30) set_opt_bg_pane_g1_copy2

0x4858,	// (0x00022c38) set_opt_bg_pane_g2_copy2

0xdb7e,	// (0x0002bf5e) set_opt_bg_pane_g3_copy2

0x4868,	// (0x00022c48) set_opt_bg_pane_g4_copy2

0x4870,	// (0x00022c50) set_opt_bg_pane_g5_copy2

0x4878,	// (0x00022c58) set_opt_bg_pane_g6_copy2

0xdb88,	// (0x0002bf68) set_opt_bg_pane_g7_copy2

0xdb90,	// (0x0002bf70) set_opt_bg_pane_g8_copy2

0xdb9a,	// (0x0002bf7a) set_opt_bg_pane_g9_copy2

0xc0c5,	// (0x0002a4a5) aid_size_touch_slider_mark_copy1_ParamLimits

0xc0c5,	// (0x0002a4a5) aid_size_touch_slider_mark_copy1

0xdba4,	// (0x0002bf84) slider_set_pane_g1_copy1

0xc0d9,	// (0x0002a4b9) slider_set_pane_g2_copy1

0xa2f5,	// (0x000286d5) slider_set_pane_g3_copy1_ParamLimits

0xa2f5,	// (0x000286d5) slider_set_pane_g3_copy1

0xa309,	// (0x000286e9) slider_set_pane_g4_copy1_ParamLimits

0xa309,	// (0x000286e9) slider_set_pane_g4_copy1

0xa321,	// (0x00028701) slider_set_pane_g5_copy1_ParamLimits

0xa321,	// (0x00028701) slider_set_pane_g5_copy1

0xa2f5,	// (0x000286d5) slider_set_pane_g6_copy1_ParamLimits

0xa2f5,	// (0x000286d5) slider_set_pane_g6_copy1

0xc0e1,	// (0x0002a4c1) slider_set_pane_g7_copy1_ParamLimits

0xc0e1,	// (0x0002a4c1) slider_set_pane_g7_copy1

0x4198,	// (0x00022578) bg_set_opt_pane_cp2_copy1

0xdbad,	// (0x0002bf8d) setting_slider_graphic_pane_g1_copy1

0xdbb6,	// (0x0002bf96) setting_slider_graphic_pane_t1_copy1

0xdbc6,	// (0x0002bfa6) setting_slider_graphic_pane_t2_copy1

0xdbd6,	// (0x0002bfb6) slider_set_pane_cp_copy1

0xdbe6,	// (0x0002bfc6) input_focus_pane_cp1_copy1

0xdbef,	// (0x0002bfcf) list_set_text_pane_copy1

0xdbf7,	// (0x0002bfd7) setting_text_pane_g1_copy1

0xef30,	// (0x0002d310) set_text_pane_t1_copy1

0xdbe6,	// (0x0002bfc6) input_focus_pane_cp2_copy1

0xdbf7,	// (0x0002bfd7) setting_code_pane_g1_copy1

0xdc00,	// (0x0002bfe0) setting_code_pane_t1_copy1

0xdc0e,	// (0x0002bfee) list_set_graphic_pane_copy1

0x4198,	// (0x00022578) bg_set_opt_pane_cp4_copy1

0x4f20,	// (0x00023300) list_set_graphic_pane_g1_copy1_ParamLimits

0x4f20,	// (0x00023300) list_set_graphic_pane_g1_copy1

0xdc22,	// (0x0002c002) list_set_graphic_pane_g2_copy1

0x4f38,	// (0x00023318) list_set_graphic_pane_t1_copy1_ParamLimits

0x4f38,	// (0x00023318) list_set_graphic_pane_t1_copy1

0x75d0,	// (0x000259b0) rs_clock_indi_pane_g1

0xdc2a,	// (0x0002c00a) rs_clock_indi_pane_t1

0xdc38,	// (0x0002c018) rs_indi_pane

0xdc40,	// (0x0002c020) rs_indi_pane_g1

0xdc49,	// (0x0002c029) rs_indi_pane_g2

0xdc52,	// (0x0002c032) rs_indi_pane_g3

0x0002,

0xfed4,	// (0x0002e2b4) rs_indi_pane_g

0x521e,	// (0x000235fe) bg_popup_preview_window_pane_cp03

0xdc5b,	// (0x0002c03b) popup_fep_tooltip_window_t1

0xb501,	// (0x000298e1) popup_note2_window_g2_ParamLimits

0xb501,	// (0x000298e1) popup_note2_window_g2

0x0001,

0xfc74,	// (0x0002e054) popup_note2_window_g_ParamLimits

0xfc74,	// (0x0002e054) popup_note2_window_g

0xc2e2,	// (0x0002a6c2) bg_popup_sub_pane_cp11_ParamLimits

0xc2ef,	// (0x0002a6cf) cell_ai3_links_pane_g1_ParamLimits

0xc306,	// (0x0002a6e6) cell_ai3_links_pane_t1

0xef30,	// (0x0002d310) set_text_pane_t1_copy1_ParamLimits

0x512d,	// (0x0002350d) cell_graphic_popup_pane_cp2_ParamLimits

0x512d,	// (0x0002350d) cell_graphic_popup_pane_cp2

0xdc69,	// (0x0002c049) cell_graphic_popup_pane_g1_cp2

0x453e,	// (0x0002291e) cell_graphic_popup_pane_g2_cp2

0xdc71,	// (0x0002c051) cell_graphic_popup_pane_g3_cp2

0xdc79,	// (0x0002c059) cell_graphic_popup_pane_t2_cp2

0x454f,	// (0x0002292f) grid_highlight_pane_cp3_cp2

0x4aea,	// (0x00022eca) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x47e9,	// (0x00022bc9) main_tmo_pane_ParamLimits

0xc653,	// (0x0002aa33) popup_tmo_big_image_note_window

0xd2c2,	// (0x0002b6a2) cell_ai5_widget_list_pane

0xd2ca,	// (0x0002b6aa) cell_ai5_widget_lrg_icon_pane

0xf51a,	// (0x0002d8fa) tmo_note_info_pane_t1_ParamLimits

0xf52f,	// (0x0002d90f) tmo_note_info_pane_t2_ParamLimits

0xf548,	// (0x0002d928) tmo_note_info_pane_t3_ParamLimits

0xd847,	// (0x0002bc27) tmo_note_info_pane_t4_ParamLimits

0xd859,	// (0x0002bc39) tmo_note_info_pane_t5_ParamLimits

0xfec2,	// (0x0002e2a2) tmo_note_info_pane_t_ParamLimits

0xd98a,	// (0x0002bd6a) settings_container_pane_ParamLimits

0xdbde,	// (0x0002bfbe) indicator_popup_pane_cp5

0xdbde,	// (0x0002bfbe) indicator_popup_pane_cp6

0xdc0e,	// (0x0002bfee) list_set_graphic_pane_copy1_ParamLimits

0x4184,	// (0x00022564) bg_popup_window_pane_cp23

0xdc87,	// (0x0002c067) popup_tmo_big_image_note_window_g1

0xdc92,	// (0x0002c072) popup_tmo_big_image_note_window_t1

0xdca2,	// (0x0002c082) popup_tmo_big_image_note_window_t2

0xdcb2,	// (0x0002c092) popup_tmo_big_image_note_window_t3

0x0002,

0xfedb,	// (0x0002e2bb) popup_tmo_big_image_note_window_t

0xdcc2,	// (0x0002c0a2) cell_ai5_widget_lrg_icon_pane_g1

0xdcca,	// (0x0002c0aa) cell_ai5_widget_lrg_icon_pane_t1

0xdcd8,	// (0x0002c0b8) cell_ai5_widget_list_row_pane_ParamLimits

0xdcd8,	// (0x0002c0b8) cell_ai5_widget_list_row_pane

0xdcf1,	// (0x0002c0d1) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xdcf1,	// (0x0002c0d1) cell_ai5_widget_list_row_pane_g1

0xdcfe,	// (0x0002c0de) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xdcfe,	// (0x0002c0de) cell_ai5_widget_list_row_pane_t1

0xdd16,	// (0x0002c0f6) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xdd16,	// (0x0002c0f6) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfee2,	// (0x0002e2c2) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee2,	// (0x0002e2c2) cell_ai5_widget_list_row_pane_t

0x872a,	// (0x00026b0a) main_fep_vtchi_ss_pane

0xdd28,	// (0x0002c108) popup_fep_char_pre_window

0xdd30,	// (0x0002c110) popup_fep_ituss_window

0xdd4a,	// (0x0002c12a) popup_fep_vkbss_window

0xdd68,	// (0x0002c148) grid_vkbss_keypad_pane_ParamLimits

0xdd68,	// (0x0002c148) grid_vkbss_keypad_pane

0xdd78,	// (0x0002c158) ituss_keypad_pane

0xdd8e,	// (0x0002c16e) aid_vkbss_key_offset_ParamLimits

0xdd8e,	// (0x0002c16e) aid_vkbss_key_offset

0xdd9a,	// (0x0002c17a) cell_vkbss_key_pane_ParamLimits

0xdd9a,	// (0x0002c17a) cell_vkbss_key_pane

0x60e6,	// (0x000244c6) bg_cell_vkbss_key_g1_ParamLimits

0x60e6,	// (0x000244c6) bg_cell_vkbss_key_g1

0xddb0,	// (0x0002c190) cell_vkbss_key_3p_pane_ParamLimits

0xddb0,	// (0x0002c190) cell_vkbss_key_3p_pane

0xddca,	// (0x0002c1aa) cell_vkbss_key_g1_ParamLimits

0xddca,	// (0x0002c1aa) cell_vkbss_key_g1

0xdde4,	// (0x0002c1c4) cell_vkbss_key_t1_ParamLimits

0xdde4,	// (0x0002c1c4) cell_vkbss_key_t1

0xde0f,	// (0x0002c1ef) cell_ituss_key_pane_ParamLimits

0xde0f,	// (0x0002c1ef) cell_ituss_key_pane

0xde1f,	// (0x0002c1ff) bg_cell_ituss_key_g1_ParamLimits

0xde1f,	// (0x0002c1ff) bg_cell_ituss_key_g1

0xde2b,	// (0x0002c20b) cell_ituss_key_pane_g1_ParamLimits

0xde2b,	// (0x0002c20b) cell_ituss_key_pane_g1

0xde37,	// (0x0002c217) cell_ituss_key_pane_g2_ParamLimits

0xde37,	// (0x0002c217) cell_ituss_key_pane_g2

0x0001,

0xfee7,	// (0x0002e2c7) cell_ituss_key_pane_g_ParamLimits

0xfee7,	// (0x0002e2c7) cell_ituss_key_pane_g

0xde50,	// (0x0002c230) cell_ituss_key_t1_ParamLimits

0xde50,	// (0x0002c230) cell_ituss_key_t1

0xde7e,	// (0x0002c25e) cell_ituss_key_t2_ParamLimits

0xde7e,	// (0x0002c25e) cell_ituss_key_t2

0xdeaf,	// (0x0002c28f) cell_ituss_key_t3_ParamLimits

0xdeaf,	// (0x0002c28f) cell_ituss_key_t3

0xdee0,	// (0x0002c2c0) cell_ituss_key_t4_ParamLimits

0xdee0,	// (0x0002c2c0) cell_ituss_key_t4

0x0003,

0xfeec,	// (0x0002e2cc) cell_ituss_key_t_ParamLimits

0xfeec,	// (0x0002e2cc) cell_ituss_key_t

0xdf11,	// (0x0002c2f1) cell_vkbss_key_3p_pane_g1

0xdf19,	// (0x0002c2f9) cell_vkbss_key_3p_pane_g2

0xdf21,	// (0x0002c301) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef5,	// (0x0002e2d5) cell_vkbss_key_3p_pane_g

0x4184,	// (0x00022564) bg_popup_fep_char_preview_window_cp02

0xdf29,	// (0x0002c309) popup_fep_char_pre_window_t1

0xf433,	// (0x0002d813) main_ai5_sk_pane

0xd8d3,	// (0x0002bcb3) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xd8df,	// (0x0002bcbf) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xd8f2,	// (0x0002bcd2) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xd8fe,	// (0x0002bcde) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfecd,	// (0x0002e2ad) cell_contacts_ai5_widget_pane_g_ParamLimits

0xd910,	// (0x0002bcf0) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x47e9,	// (0x00022bc9) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf55d,	// (0x0002d93d) main_ai5_sk_pane_g1

0x5b63,	// (0x00023f43) popup_query_code_window_g1

0xdd3f,	// (0x0002c11f) popup_fep_vkb_icf_pane

0xdd53,	// (0x0002c133) popup_fep_vtchi_icf_pane

0x47e9,	// (0x00022bc9) bg_icf_pane

0xdf47,	// (0x0002c327) list_vkb_icf_pane

0x47e9,	// (0x00022bc9) bg_icf_pane_cp01

0xdf5f,	// (0x0002c33f) vtchi_icf_list_pane

0xdf6f,	// (0x0002c34f) list_vkb_icf_pane_t1_ParamLimits

0xdf6f,	// (0x0002c34f) list_vkb_icf_pane_t1

0xdf89,	// (0x0002c369) vtchi_icf_list_pane_t1_ParamLimits

0xdf89,	// (0x0002c369) vtchi_icf_list_pane_t1

0xdd30,	// (0x0002c110) popup_fep_ituss_window_ParamLimits

0xdd53,	// (0x0002c133) popup_fep_vtchi_icf_pane_ParamLimits

0xdd78,	// (0x0002c158) ituss_keypad_pane_ParamLimits

0xdd84,	// (0x0002c164) ituss_sks_pane

0x47e9,	// (0x00022bc9) bg_icf_pane_ParamLimits

0xdf38,	// (0x0002c318) icf_edit_indi_pane_ParamLimits

0xdf38,	// (0x0002c318) icf_edit_indi_pane

0xdf47,	// (0x0002c327) list_vkb_icf_pane_ParamLimits

0x47e9,	// (0x00022bc9) bg_icf_pane_cp01_ParamLimits

0xdf53,	// (0x0002c333) icf_edit_indi_pane_cp01_ParamLimits

0xdf53,	// (0x0002c333) icf_edit_indi_pane_cp01

0xdf67,	// (0x0002c347) vtchi_query_pane

0x7839,	// (0x00025c19) icf_edit_indi_pane_g1_ParamLimits

0x7839,	// (0x00025c19) icf_edit_indi_pane_g1

0xdfb0,	// (0x0002c390) icf_edit_indi_pane_g2_ParamLimits

0xdfb0,	// (0x0002c390) icf_edit_indi_pane_g2

0x0001,

0xfefc,	// (0x0002e2dc) icf_edit_indi_pane_g_ParamLimits

0xfefc,	// (0x0002e2dc) icf_edit_indi_pane_g

0xdfbc,	// (0x0002c39c) icf_edit_indi_pane_t1

0xdfca,	// (0x0002c3aa) bg_input_focus_pane_cp042

0x4722,	// (0x00022b02) vtchi_button_pane

0xdfd3,	// (0x0002c3b3) vtchi_query_pane_t1

0xdfe1,	// (0x0002c3c1) vtchi_query_pane_t2

0xdfef,	// (0x0002c3cf) vtchi_query_pane_t3

0x0002,

0xff01,	// (0x0002e2e1) vtchi_query_pane_t

0x4184,	// (0x00022564) bg_button_pane_cp13

0xdffd,	// (0x0002c3dd) vtchi_button_pane_g1

0xe005,	// (0x0002c3e5) ituss_sks_pane_g1

0xe010,	// (0x0002c3f0) ituss_sks_pane_g2

0x0001,

0xff08,	// (0x0002e2e8) ituss_sks_pane_g

0xe018,	// (0x0002c3f8) ituss_sks_pane_t1

0xe026,	// (0x0002c406) ituss_sks_pane_t2

0x0001,

0xff0d,	// (0x0002e2ed) ituss_sks_pane_t

0x7280,	// (0x00025660) indicator_nsta_pane_cp_g1

0x7289,	// (0x00025669) indicator_nsta_pane_cp_g2

0x7291,	// (0x00025671) indicator_nsta_pane_cp_g3

0x7299,	// (0x00025679) indicator_nsta_pane_cp_g4

0x72a1,	// (0x00025681) indicator_nsta_pane_cp_g5

0x72a9,	// (0x00025689) indicator_nsta_pane_cp_g6

0x0005,

0xfab2,	// (0x0002de92) indicator_nsta_pane_cp_g

0xf20f,	// (0x0002d5ef) cell_graphic2_pane_t2_ParamLimits

0xf20f,	// (0x0002d5ef) cell_graphic2_pane_t2

0x0001,

0xfdc4,	// (0x0002e1a4) cell_graphic2_pane_t_ParamLimits

0xfdc4,	// (0x0002e1a4) cell_graphic2_pane_t

0xf23c,	// (0x0002d61c) cell_graphic2_control_pane_t1

0x90b9,	// (0x00027499) signal_pane_g3_ParamLimits

0x90b9,	// (0x00027499) signal_pane_g3

0x90cb,	// (0x000274ab) signal_pane_g4_ParamLimits

0x90cb,	// (0x000274ab) signal_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Small

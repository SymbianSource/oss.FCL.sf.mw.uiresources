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

#include "aknlayoutscalable_elaf_pnp4_av_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0004222b };

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
0x64ba,	// (0x000486e5) Screen

0x64c6,	// (0x000486f1) application_window_ParamLimits

0x64c6,	// (0x000486f1) application_window

0x08be,	// (0x00042ae9) screen_g1

0x6522,	// (0x0004874d) area_bottom_pane_ParamLimits

0x6522,	// (0x0004874d) area_bottom_pane

0x65e2,	// (0x0004880d) area_top_pane_ParamLimits

0x65e2,	// (0x0004880d) area_top_pane

0x6676,	// (0x000488a1) main_pane_ParamLimits

0x6676,	// (0x000488a1) main_pane

0x08c8,	// (0x00042af3) misc_graphics

0x98bd,	// (0x0004bae8) battery_pane_ParamLimits

0x98bd,	// (0x0004bae8) battery_pane

0xa577,	// (0x0004c7a2) bg_status_flat_pane_g8

0xa57f,	// (0x0004c7aa) bg_status_flat_pane_g9

0x9985,	// (0x0004bbb0) context_pane_ParamLimits

0x9985,	// (0x0004bbb0) context_pane

0x9a9b,	// (0x0004bcc6) navi_pane_ParamLimits

0x9a9b,	// (0x0004bcc6) navi_pane

0x9b1f,	// (0x0004bd4a) signal_pane_ParamLimits

0x9b1f,	// (0x0004bd4a) signal_pane

0x0008,

0xf87e,	// (0x00051aa9) bg_status_flat_pane_g

0x9b8c,	// (0x0004bdb7) status_pane_g1_ParamLimits

0x9b8c,	// (0x0004bdb7) status_pane_g1

0x9ba0,	// (0x0004bdcb) status_pane_g2_ParamLimits

0x9ba0,	// (0x0004bdcb) status_pane_g2

0x9bac,	// (0x0004bdd7) status_pane_g3_ParamLimits

0x9bac,	// (0x0004bdd7) status_pane_g3

0x0004,

0xf7a5,	// (0x000519d0) status_pane_g_ParamLimits

0xf7a5,	// (0x000519d0) status_pane_g

0x9be0,	// (0x0004be0b) title_pane_ParamLimits

0x9be0,	// (0x0004be0b) title_pane

0x9c1d,	// (0x0004be48) uni_indicator_pane_ParamLimits

0x9c1d,	// (0x0004be48) uni_indicator_pane

0x97e1,	// (0x0004ba0c) bg_list_pane_ParamLimits

0x97e1,	// (0x0004ba0c) bg_list_pane

0x79e2,	// (0x00049c0d) find_pane

0x9801,	// (0x0004ba2c) listscroll_app_pane_ParamLimits

0x9801,	// (0x0004ba2c) listscroll_app_pane

0x980d,	// (0x0004ba38) listscroll_form_pane

0x79ea,	// (0x00049c15) listscroll_gen_pane_ParamLimits

0x79ea,	// (0x00049c15) listscroll_gen_pane

0x79fe,	// (0x00049c29) listscroll_set_pane

0x6ff3,	// (0x0004921e) main_idle_act_pane

0x7767,	// (0x00049992) main_idle_trad_pane

0x7767,	// (0x00049992) main_list_empty_pane

0x9827,	// (0x0004ba52) main_midp_pane

0x9833,	// (0x0004ba5e) main_pane_g1_ParamLimits

0x9833,	// (0x0004ba5e) main_pane_g1

0x7a06,	// (0x00049c31) popup_ai_message_window_ParamLimits

0x7a06,	// (0x00049c31) popup_ai_message_window

0x7aaa,	// (0x00049cd5) popup_fep_china_uni_window_ParamLimits

0x7aaa,	// (0x00049cd5) popup_fep_china_uni_window

0x7b04,	// (0x00049d2f) popup_fep_japan_candidate_window_ParamLimits

0x7b04,	// (0x00049d2f) popup_fep_japan_candidate_window

0x7b22,	// (0x00049d4d) popup_fep_japan_predictive_window_ParamLimits

0x7b22,	// (0x00049d4d) popup_fep_japan_predictive_window

0x7b52,	// (0x00049d7d) popup_find_window

0x7b5f,	// (0x00049d8a) popup_grid_graphic_window_ParamLimits

0x7b5f,	// (0x00049d8a) popup_grid_graphic_window

0x7b89,	// (0x00049db4) popup_large_graphic_colour_window

0x7baf,	// (0x00049dda) popup_menu_window_ParamLimits

0x7baf,	// (0x00049dda) popup_menu_window

0x7d6b,	// (0x00049f96) popup_note_image_window

0x7d57,	// (0x00049f82) popup_note_wait_window_ParamLimits

0x7d57,	// (0x00049f82) popup_note_wait_window

0x7d57,	// (0x00049f82) popup_note_window_ParamLimits

0x7d57,	// (0x00049f82) popup_note_window

0x7dc1,	// (0x00049fec) popup_query_code_window_ParamLimits

0x7dc1,	// (0x00049fec) popup_query_code_window

0x7dd5,	// (0x0004a000) popup_query_data_code_window_ParamLimits

0x7dd5,	// (0x0004a000) popup_query_data_code_window

0x7df2,	// (0x0004a01d) popup_query_data_window_ParamLimits

0x7df2,	// (0x0004a01d) popup_query_data_window

0x7e0e,	// (0x0004a039) popup_query_sat_info_window_ParamLimits

0x7e0e,	// (0x0004a039) popup_query_sat_info_window

0x7e47,	// (0x0004a072) popup_snote_single_graphic_window_ParamLimits

0x7e47,	// (0x0004a072) popup_snote_single_graphic_window

0x7e47,	// (0x0004a072) popup_snote_single_text_window_ParamLimits

0x7e47,	// (0x0004a072) popup_snote_single_text_window

0x7e5c,	// (0x0004a087) popup_sub_window_general

0x7f8c,	// (0x0004a1b7) popup_window_general_ParamLimits

0x7f8c,	// (0x0004a1b7) popup_window_general

0x9841,	// (0x0004ba6c) power_save_pane

0x787e,	// (0x00049aa9) control_pane_g1_ParamLimits

0x787e,	// (0x00049aa9) control_pane_g1

0x78a5,	// (0x00049ad0) control_pane_g2_ParamLimits

0x78a5,	// (0x00049ad0) control_pane_g2

0x97a4,	// (0x0004b9cf) control_pane_g3_ParamLimits

0x97a4,	// (0x0004b9cf) control_pane_g3

0x0007,

0xf78d,	// (0x000519b8) control_pane_g_ParamLimits

0xf78d,	// (0x000519b8) control_pane_g

0x78ef,	// (0x00049b1a) control_pane_t1_ParamLimits

0x78ef,	// (0x00049b1a) control_pane_t1

0x793b,	// (0x00049b66) control_pane_t2_ParamLimits

0x793b,	// (0x00049b66) control_pane_t2

0x0002,

0xf79e,	// (0x000519c9) control_pane_t_ParamLimits

0xf79e,	// (0x000519c9) control_pane_t

0x96c9,	// (0x0004b8f4) navi_navi_volume_pane_cp1

0x96d1,	// (0x0004b8fc) status_small_icon_pane

0x96d9,	// (0x0004b904) status_small_pane_g1_ParamLimits

0x96d9,	// (0x0004b904) status_small_pane_g1

0x970d,	// (0x0004b938) status_small_pane_g2_ParamLimits

0x970d,	// (0x0004b938) status_small_pane_g2

0x9719,	// (0x0004b944) status_small_pane_g3_ParamLimits

0x9719,	// (0x0004b944) status_small_pane_g3

0x9725,	// (0x0004b950) status_small_pane_g4_ParamLimits

0x9725,	// (0x0004b950) status_small_pane_g4

0x9731,	// (0x0004b95c) status_small_pane_g5_ParamLimits

0x9731,	// (0x0004b95c) status_small_pane_g5

0x973f,	// (0x0004b96a) status_small_pane_g6_ParamLimits

0x973f,	// (0x0004b96a) status_small_pane_g6

0x0007,

0xf77c,	// (0x000519a7) status_small_pane_g_ParamLimits

0xf77c,	// (0x000519a7) status_small_pane_g

0x976e,	// (0x0004b999) status_small_pane_t1

0x9790,	// (0x0004b9bb) status_small_wait_pane_ParamLimits

0x9790,	// (0x0004b9bb) status_small_wait_pane

0x73c8,	// (0x000495f3) aid_levels_signal_ParamLimits

0x73c8,	// (0x000495f3) aid_levels_signal

0x73da,	// (0x00049605) signal_pane_g1_ParamLimits

0x73da,	// (0x00049605) signal_pane_g1

0x73ef,	// (0x0004961a) signal_pane_g2_ParamLimits

0x73ef,	// (0x0004961a) signal_pane_g2

0x0003,

0xf70d,	// (0x00051938) signal_pane_g_ParamLimits

0xf70d,	// (0x00051938) signal_pane_g

0x1164,	// (0x0004338f) context_pane_g1

0x68b7,	// (0x00048ae2) title_pane_g1

0x68e1,	// (0x00048b0c) title_pane_t1

0x08de,	// (0x00042b09) title_pane_t2

0x0904,	// (0x00042b2f) title_pane_t3

0x0002,

0xf557,	// (0x00051782) title_pane_t

0x9c35,	// (0x0004be60) aid_levels_battery_ParamLimits

0x9c35,	// (0x0004be60) aid_levels_battery

0x9c49,	// (0x0004be74) battery_pane_g1_ParamLimits

0x9c49,	// (0x0004be74) battery_pane_g1

0x9c5f,	// (0x0004be8a) battery_pane_g2_ParamLimits

0x9c5f,	// (0x0004be8a) battery_pane_g2

0x0001,

0xf7b0,	// (0x000519db) battery_pane_g_ParamLimits

0xf7b0,	// (0x000519db) battery_pane_g

0xae9b,	// (0x0004d0c6) uni_indicator_pane_g1

0xaeb1,	// (0x0004d0dc) uni_indicator_pane_g2

0xaec7,	// (0x0004d0f2) uni_indicator_pane_g3

0x0005,

0xf926,	// (0x00051b51) uni_indicator_pane_g

0x4b51,	// (0x00046d7c) navi_icon_pane_ParamLimits

0x4b51,	// (0x00046d7c) navi_icon_pane

0x4aa6,	// (0x00046cd1) navi_midp_pane

0x4b6d,	// (0x00046d98) navi_navi_pane

0x4b77,	// (0x00046da2) navi_text_pane_ParamLimits

0x4b77,	// (0x00046da2) navi_text_pane

0x08be,	// (0x00042ae9) status_small_wait_pane_g1

0x0b55,	// (0x00042d80) status_small_wait_pane_g2

0x0001,

0xf921,	// (0x00051b4c) status_small_wait_pane_g

0xabc2,	// (0x0004cded) navi_navi_icon_text_pane

0xabca,	// (0x0004cdf5) navi_navi_pane_g1_ParamLimits

0xabca,	// (0x0004cdf5) navi_navi_pane_g1

0xabdc,	// (0x0004ce07) navi_navi_pane_g2_ParamLimits

0xabdc,	// (0x0004ce07) navi_navi_pane_g2

0x0001,

0xf8ef,	// (0x00051b1a) navi_navi_pane_g_ParamLimits

0xf8ef,	// (0x00051b1a) navi_navi_pane_g

0xabee,	// (0x0004ce19) navi_navi_tabs_pane

0xabf7,	// (0x0004ce22) navi_navi_text_pane

0xabc2,	// (0x0004cded) navi_navi_volume_pane

0xab9e,	// (0x0004cdc9) navi_text_pane_t1

0xab92,	// (0x0004cdbd) navi_icon_pane_g1

0xaae5,	// (0x0004cd10) navi_navi_text_pane_t1

0x8242,	// (0x0004a46d) navi_navi_volume_pane_g1

0x824a,	// (0x0004a475) volume_small_pane

0xaa4b,	// (0x0004cc76) navi_navi_icon_text_pane_g1

0xaa53,	// (0x0004cc7e) navi_navi_icon_text_pane_t1

0x4b6d,	// (0x00046d98) navi_tabs_2_long_pane

0x4b6d,	// (0x00046d98) navi_tabs_2_pane

0x4b6d,	// (0x00046d98) navi_tabs_3_long_pane

0x4b6d,	// (0x00046d98) navi_tabs_3_pane

0x4b6d,	// (0x00046d98) navi_tabs_4_pane

0x8222,	// (0x0004a44d) tabs_2_active_pane_ParamLimits

0x8222,	// (0x0004a44d) tabs_2_active_pane

0x8232,	// (0x0004a45d) tabs_2_passive_pane_ParamLimits

0x8232,	// (0x0004a45d) tabs_2_passive_pane

0x81f0,	// (0x0004a41b) tabs_3_active_pane_ParamLimits

0x81f0,	// (0x0004a41b) tabs_3_active_pane

0x8200,	// (0x0004a42b) tabs_3_passive_pane_ParamLimits

0x8200,	// (0x0004a42b) tabs_3_passive_pane

0x8211,	// (0x0004a43c) tabs_3_passive_pane_cp_ParamLimits

0x8211,	// (0x0004a43c) tabs_3_passive_pane_cp

0x81ac,	// (0x0004a3d7) tabs_4_active_pane_ParamLimits

0x81ac,	// (0x0004a3d7) tabs_4_active_pane

0x81bd,	// (0x0004a3e8) tabs_4_passive_pane_ParamLimits

0x81bd,	// (0x0004a3e8) tabs_4_passive_pane

0x81ce,	// (0x0004a3f9) tabs_4_passive_pane_cp_ParamLimits

0x81ce,	// (0x0004a3f9) tabs_4_passive_pane_cp

0x81df,	// (0x0004a40a) tabs_4_passive_pane_cp2_ParamLimits

0x81df,	// (0x0004a40a) tabs_4_passive_pane_cp2

0x8188,	// (0x0004a3b3) tabs_2_long_active_pane_ParamLimits

0x8188,	// (0x0004a3b3) tabs_2_long_active_pane

0x819a,	// (0x0004a3c5) tabs_2_long_passive_pane_ParamLimits

0x819a,	// (0x0004a3c5) tabs_2_long_passive_pane

0x8143,	// (0x0004a36e) tabs_3_long_active_pane_ParamLimits

0x8143,	// (0x0004a36e) tabs_3_long_active_pane

0x815c,	// (0x0004a387) tabs_3_long_passive_pane_ParamLimits

0x815c,	// (0x0004a387) tabs_3_long_passive_pane

0x816f,	// (0x0004a39a) tabs_3_long_passive_pane_cp_ParamLimits

0x816f,	// (0x0004a39a) tabs_3_long_passive_pane_cp

0x80e9,	// (0x0004a314) volume_small_pane_g1

0x80f2,	// (0x0004a31d) volume_small_pane_g2

0x80fb,	// (0x0004a326) volume_small_pane_g3

0x8104,	// (0x0004a32f) volume_small_pane_g4

0x810d,	// (0x0004a338) volume_small_pane_g5

0x8116,	// (0x0004a341) volume_small_pane_g6

0x811f,	// (0x0004a34a) volume_small_pane_g7

0x8128,	// (0x0004a353) volume_small_pane_g8

0x8131,	// (0x0004a35c) volume_small_pane_g9

0x813a,	// (0x0004a365) volume_small_pane_g10

0x0009,

0xf8bb,	// (0x00051ae6) volume_small_pane_g

0x0924,	// (0x00042b4f) bg_active_tab_pane_cp2_ParamLimits

0x0924,	// (0x00042b4f) bg_active_tab_pane_cp2

0x6949,	// (0x00048b74) tabs_3_active_pane_g1

0x6951,	// (0x00048b7c) tabs_3_active_pane_t1

0x0924,	// (0x00042b4f) bg_passive_tab_pane_cp2_ParamLimits

0x0924,	// (0x00042b4f) bg_passive_tab_pane_cp2

0x6949,	// (0x00048b74) tabs_3_passive_pane_g1

0x6951,	// (0x00048b7c) tabs_3_passive_pane_t1

0x0924,	// (0x00042b4f) bg_active_tab_pane_cp3_ParamLimits

0x0924,	// (0x00042b4f) bg_active_tab_pane_cp3

0x6963,	// (0x00048b8e) tabs_4_active_pane_g1

0x696b,	// (0x00048b96) tabs_4_active_pane_t1

0x0924,	// (0x00042b4f) bg_passive_tab_pane_cp3_ParamLimits

0x0924,	// (0x00042b4f) bg_passive_tab_pane_cp3

0x6963,	// (0x00048b8e) tabs_4_1_passive_pane_g1

0x696b,	// (0x00048b96) tabs_4_1_passive_pane_t1

0x9827,	// (0x0004ba52) list_highlight_pane_cp2

0xb110,	// (0x0004d33b) list_set_pane_ParamLimits

0xb110,	// (0x0004d33b) list_set_pane

0xb1b6,	// (0x0004d3e1) main_pane_set_t1_ParamLimits

0xb1b6,	// (0x0004d3e1) main_pane_set_t1

0xb1d6,	// (0x0004d401) main_pane_set_t2_ParamLimits

0xb1d6,	// (0x0004d401) main_pane_set_t2

0xb1ea,	// (0x0004d415) main_pane_set_t3_ParamLimits

0xb1ea,	// (0x0004d415) main_pane_set_t3

0xb1fc,	// (0x0004d427) main_pane_set_t4_ParamLimits

0xb1fc,	// (0x0004d427) main_pane_set_t4

0x0003,

0xf98b,	// (0x00051bb6) main_pane_set_t_ParamLimits

0xf98b,	// (0x00051bb6) main_pane_set_t

0xb20e,	// (0x0004d439) setting_code_pane

0xb21a,	// (0x0004d445) setting_slider_graphic_pane

0xb21a,	// (0x0004d445) setting_slider_pane

0xb21a,	// (0x0004d445) setting_text_pane

0xb21a,	// (0x0004d445) setting_volume_pane

0x697d,	// (0x00048ba8) volume_set_pane

0x0924,	// (0x00042b4f) bg_set_opt_pane_cp

0x6985,	// (0x00048bb0) setting_slider_pane_t1

0x699e,	// (0x00048bc9) setting_slider_pane_t2

0x69b8,	// (0x00048be3) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00051789) setting_slider_pane_t

0x69d0,	// (0x00048bfb) slider_set_pane

0x08c8,	// (0x00042af3) bg_set_opt_pane_cp2

0x0932,	// (0x00042b5d) setting_slider_graphic_pane_g1

0x69e6,	// (0x00048c11) setting_slider_graphic_pane_t1

0x69f6,	// (0x00048c21) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00051790) setting_slider_graphic_pane_t

0x6a06,	// (0x00048c31) slider_set_pane_cp

0x08c8,	// (0x00042af3) input_focus_pane_cp1

0xb0cf,	// (0x0004d2fa) list_set_text_pane

0x08be,	// (0x00042ae9) setting_text_pane_g1

0x08c8,	// (0x00042af3) input_focus_pane_cp2

0x08be,	// (0x00042ae9) setting_code_pane_g1

0x093b,	// (0x00042b66) setting_code_pane_t1

0x55f9,	// (0x00047824) set_text_pane_t1_ParamLimits

0x55f9,	// (0x00047824) set_text_pane_t1

0x0d31,	// (0x00042f5c) set_opt_bg_pane_g1

0x0d39,	// (0x00042f64) set_opt_bg_pane_g2

0xb0a9,	// (0x0004d2d4) set_opt_bg_pane_g3

0x0d49,	// (0x00042f74) set_opt_bg_pane_g4

0x0d51,	// (0x00042f7c) set_opt_bg_pane_g5

0x0d59,	// (0x00042f84) set_opt_bg_pane_g6

0xb0b3,	// (0x0004d2de) set_opt_bg_pane_g7

0xb0bb,	// (0x0004d2e6) set_opt_bg_pane_g8

0xb0c5,	// (0x0004d2f0) set_opt_bg_pane_g9

0x0008,

0xf978,	// (0x00051ba3) set_opt_bg_pane_g

0xb09c,	// (0x0004d2c7) slider_set_pane_g1

0x82b7,	// (0x0004a4e2) slider_set_pane_g2

0x0006,

0xf969,	// (0x00051b94) slider_set_pane_g

0x8253,	// (0x0004a47e) volume_set_pane_g1

0x825b,	// (0x0004a486) volume_set_pane_g2

0x8263,	// (0x0004a48e) volume_set_pane_g3

0x826b,	// (0x0004a496) volume_set_pane_g4

0x8273,	// (0x0004a49e) volume_set_pane_g5

0x827b,	// (0x0004a4a6) volume_set_pane_g6

0x8283,	// (0x0004a4ae) volume_set_pane_g7

0x828b,	// (0x0004a4b6) volume_set_pane_g8

0x8293,	// (0x0004a4be) volume_set_pane_g9

0x829b,	// (0x0004a4c6) volume_set_pane_g10

0x0009,

0xf941,	// (0x00051b6c) volume_set_pane_g

0x6a0e,	// (0x00048c39) indicator_pane_ParamLimits

0x6a0e,	// (0x00048c39) indicator_pane

0x6a1a,	// (0x00048c45) main_idle_pane_g2_ParamLimits

0x6a1a,	// (0x00048c45) main_idle_pane_g2

0x6a42,	// (0x00048c6d) main_pane_idle_g1_ParamLimits

0x6a42,	// (0x00048c6d) main_pane_idle_g1

0x0949,	// (0x00042b74) popup_clock_digital_analogue_window_ParamLimits

0x0949,	// (0x00042b74) popup_clock_digital_analogue_window

0x6a4f,	// (0x00048c7a) soft_indicator_pane_ParamLimits

0x6a4f,	// (0x00048c7a) soft_indicator_pane

0x6a5b,	// (0x00048c86) wallpaper_pane_ParamLimits

0x6a5b,	// (0x00048c86) wallpaper_pane

0x08be,	// (0x00042ae9) wallpaper_pane_g1

0x6a67,	// (0x00048c92) indicator_pane_g1_ParamLimits

0x6a67,	// (0x00048c92) indicator_pane_g1

0xb49c,	// (0x0004d6c7) navi_navi_icon_text_pane_srt_g1

0x0977,	// (0x00042ba2) soft_indicator_pane_t1

0x0991,	// (0x00042bbc) aid_ps_area_pane

0x6a73,	// (0x00048c9e) aid_ps_clock_pane

0x09a2,	// (0x00042bcd) aid_ps_indicator_pane

0x09ae,	// (0x00042bd9) indicator_ps_pane_ParamLimits

0x09ae,	// (0x00042bd9) indicator_ps_pane

0x09bd,	// (0x00042be8) power_save_pane_g1_ParamLimits

0x09bd,	// (0x00042be8) power_save_pane_g1

0x09c9,	// (0x00042bf4) power_save_pane_g2_ParamLimits

0x09c9,	// (0x00042bf4) power_save_pane_g2

0x64d6,	// (0x00048701) aid_navinavi_width_pane

0x0991,	// (0x00042bbc) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00051795) power_save_pane_g_ParamLimits

0xf56a,	// (0x00051795) power_save_pane_g

0x09d7,	// (0x00042c02) power_save_pane_t1_ParamLimits

0x09d7,	// (0x00042c02) power_save_pane_t1

0x6a73,	// (0x00048c9e) aid_ps_clock_pane_ParamLimits

0x09a2,	// (0x00042bcd) aid_ps_indicator_pane_ParamLimits

0x09e9,	// (0x00042c14) power_save_pane_t4_ParamLimits

0x09e9,	// (0x00042c14) power_save_pane_t4

0x0001,

0xf56f,	// (0x0005179a) power_save_pane_t_ParamLimits

0xf56f,	// (0x0005179a) power_save_pane_t

0x0a13,	// (0x00042c3e) power_save_t3_ParamLimits

0x0a13,	// (0x00042c3e) power_save_t3

0x09fe,	// (0x00042c29) power_save_t2_ParamLimits

0x09fe,	// (0x00042c29) power_save_t2

0x0a28,	// (0x00042c53) indicator_ps_pane_g1

0x6a81,	// (0x00048cac) ai_gene_pane_ParamLimits

0x6a81,	// (0x00048cac) ai_gene_pane

0x6a8d,	// (0x00048cb8) ai_links_pane_ParamLimits

0x6a8d,	// (0x00048cb8) ai_links_pane

0x6a99,	// (0x00048cc4) indicator_pane_cp1_ParamLimits

0x6a99,	// (0x00048cc4) indicator_pane_cp1

0x6aa5,	// (0x00048cd0) main_pane_idle_g1_cp_ParamLimits

0x6aa5,	// (0x00048cd0) main_pane_idle_g1_cp

0x6ab1,	// (0x00048cdc) popup_ai_links_title_window

0x6aba,	// (0x00048ce5) soft_indicator_pane_cp1_ParamLimits

0x6aba,	// (0x00048ce5) soft_indicator_pane_cp1

0xae89,	// (0x0004d0b4) ai_links_pane_g1

0xae92,	// (0x0004d0bd) grid_ai_links_pane

0xae6c,	// (0x0004d097) ai_gene_pane_1

0xae77,	// (0x0004d0a2) ai_gene_pane_2

0xae80,	// (0x0004d0ab) list_highlight_pane_cp4

0xae50,	// (0x0004d07b) cell_ai_link_pane_ParamLimits

0xae50,	// (0x0004d07b) cell_ai_link_pane

0xae48,	// (0x0004d073) cell_ai_link_pane_g1

0x0b55,	// (0x00042d80) cell_ai_link_pane_g2

0x0001,

0xf91c,	// (0x00051b47) cell_ai_link_pane_g

0x08c8,	// (0x00042af3) grid_highlight_cp2

0x08c8,	// (0x00042af3) bg_popup_sub_pane_cp1

0x0a3f,	// (0x00042c6a) popup_ai_links_title_window_t1

0xad98,	// (0x0004cfc3) ai_gene_pane_1_g1_ParamLimits

0xad98,	// (0x0004cfc3) ai_gene_pane_1_g1

0xada4,	// (0x0004cfcf) ai_gene_pane_1_g2_ParamLimits

0xada4,	// (0x0004cfcf) ai_gene_pane_1_g2

0x0001,

0xf912,	// (0x00051b3d) ai_gene_pane_1_g_ParamLimits

0xf912,	// (0x00051b3d) ai_gene_pane_1_g

0xadb1,	// (0x0004cfdc) ai_gene_pane_1_t1_ParamLimits

0xadb1,	// (0x0004cfdc) ai_gene_pane_1_t1

0xade5,	// (0x0004d010) grid_ai_soft_ind_pane

0xad83,	// (0x0004cfae) ai_gene_pane_2_t1_ParamLimits

0xad83,	// (0x0004cfae) ai_gene_pane_2_t1

0x6ac6,	// (0x00048cf1) main_pane_empty_t1_ParamLimits

0x6ac6,	// (0x00048cf1) main_pane_empty_t1

0x6ade,	// (0x00048d09) main_pane_empty_t2_ParamLimits

0x6ade,	// (0x00048d09) main_pane_empty_t2

0x6af3,	// (0x00048d1e) main_pane_empty_t3_ParamLimits

0x6af3,	// (0x00048d1e) main_pane_empty_t3

0x6b05,	// (0x00048d30) main_pane_empty_t4_ParamLimits

0x6b05,	// (0x00048d30) main_pane_empty_t4

0x6b17,	// (0x00048d42) main_pane_empty_t5_ParamLimits

0x6b17,	// (0x00048d42) main_pane_empty_t5

0x0004,

0xf574,	// (0x0005179f) main_pane_empty_t_ParamLimits

0xf574,	// (0x0005179f) main_pane_empty_t

0x0d82,	// (0x00042fad) bg_popup_window_pane_ParamLimits

0x0d82,	// (0x00042fad) bg_popup_window_pane

0xaaf3,	// (0x0004cd1e) find_popup_pane_cp2_ParamLimits

0xaaf3,	// (0x0004cd1e) find_popup_pane_cp2

0xaaff,	// (0x0004cd2a) heading_pane_ParamLimits

0xaaff,	// (0x0004cd2a) heading_pane

0x08c8,	// (0x00042af3) bg_popup_sub_pane

0xaa6d,	// (0x0004cc98) bg_popup_window_pane_g1_ParamLimits

0xaa6d,	// (0x0004cc98) bg_popup_window_pane_g1

0xaa79,	// (0x0004cca4) bg_popup_window_pane_g2_ParamLimits

0xaa79,	// (0x0004cca4) bg_popup_window_pane_g2

0xaa85,	// (0x0004ccb0) bg_popup_window_pane_g3_ParamLimits

0xaa85,	// (0x0004ccb0) bg_popup_window_pane_g3

0xaa91,	// (0x0004ccbc) bg_popup_window_pane_g4_ParamLimits

0xaa91,	// (0x0004ccbc) bg_popup_window_pane_g4

0xaa9d,	// (0x0004ccc8) bg_popup_window_pane_g5_ParamLimits

0xaa9d,	// (0x0004ccc8) bg_popup_window_pane_g5

0xaaa9,	// (0x0004ccd4) bg_popup_window_pane_g6_ParamLimits

0xaaa9,	// (0x0004ccd4) bg_popup_window_pane_g6

0xaab5,	// (0x0004cce0) bg_popup_window_pane_g7_ParamLimits

0xaab5,	// (0x0004cce0) bg_popup_window_pane_g7

0xaac1,	// (0x0004ccec) bg_popup_window_pane_g8_ParamLimits

0xaac1,	// (0x0004ccec) bg_popup_window_pane_g8

0xaacd,	// (0x0004ccf8) bg_popup_window_pane_g9_ParamLimits

0xaacd,	// (0x0004ccf8) bg_popup_window_pane_g9

0xaad9,	// (0x0004cd04) bg_popup_window_pane_g10_ParamLimits

0xaad9,	// (0x0004cd04) bg_popup_window_pane_g10

0x0009,

0xf8da,	// (0x00051b05) bg_popup_window_pane_g_ParamLimits

0xf8da,	// (0x00051b05) bg_popup_window_pane_g

0xaa02,	// (0x0004cc2d) bg_popup_heading_pane_ParamLimits

0xaa02,	// (0x0004cc2d) bg_popup_heading_pane

0x83db,	// (0x0004a606) tabs_4_passive_pane_cp_srt_ParamLimits

0x83db,	// (0x0004a606) tabs_4_passive_pane_cp_srt

0x83ed,	// (0x0004a618) tabs_4_passive_pane_srt_ParamLimits

0xaa16,	// (0x0004cc41) heading_pane_g2

0x83ed,	// (0x0004a618) tabs_4_passive_pane_srt

0x9827,	// (0x0004ba52) bg_passive_tab_pane_cp3_srt_ParamLimits

0x9827,	// (0x0004ba52) bg_passive_tab_pane_cp3_srt

0xaa1e,	// (0x0004cc49) heading_pane_t1_ParamLimits

0xaa1e,	// (0x0004cc49) heading_pane_t1

0xaa35,	// (0x0004cc60) heading_pane_t2_ParamLimits

0xaa35,	// (0x0004cc60) heading_pane_t2

0x0001,

0xf8d5,	// (0x00051b00) heading_pane_t_ParamLimits

0xf8d5,	// (0x00051b00) heading_pane_t

0xa53f,	// (0x0004c76a) bg_popup_heading_pane_g1

0xa5ee,	// (0x0004c819) bg_popup_heading_pane_g2

0xa5f8,	// (0x0004c823) bg_popup_heading_pane_g3

0xa602,	// (0x0004c82d) bg_popup_heading_pane_g4

0xa60c,	// (0x0004c837) bg_popup_heading_pane_g5

0xa616,	// (0x0004c841) bg_popup_heading_pane_g6

0xa61e,	// (0x0004c849) bg_popup_heading_pane_g7

0xa626,	// (0x0004c851) bg_popup_heading_pane_g8

0xa630,	// (0x0004c85b) bg_popup_heading_pane_g9

0x0008,

0xf891,	// (0x00051abc) bg_popup_heading_pane_g

0x9d34,	// (0x0004bf5f) bg_popup_sub_pane_g1

0x9d3c,	// (0x0004bf67) bg_popup_sub_pane_g2

0x9d44,	// (0x0004bf6f) bg_popup_sub_pane_g3

0x9d4c,	// (0x0004bf77) bg_popup_sub_pane_g4

0x9d54,	// (0x0004bf7f) bg_popup_sub_pane_g5

0x9d5c,	// (0x0004bf87) bg_popup_sub_pane_g6

0x9d64,	// (0x0004bf8f) bg_popup_sub_pane_g7

0x9d6c,	// (0x0004bf97) bg_popup_sub_pane_g8

0x9d74,	// (0x0004bf9f) bg_popup_sub_pane_g9

0x0008,

0xf86b,	// (0x00051a96) bg_popup_sub_pane_g

0x0916,	// (0x00042b41) bg_popup_window_pane_cp5_ParamLimits

0x0916,	// (0x00042b41) bg_popup_window_pane_cp5

0x0a5c,	// (0x00042c87) popup_note_window_g1_ParamLimits

0x0a5c,	// (0x00042c87) popup_note_window_g1

0x0a68,	// (0x00042c93) popup_note_window_t1_ParamLimits

0x0a68,	// (0x00042c93) popup_note_window_t1

0x0a7e,	// (0x00042ca9) popup_note_window_t2_ParamLimits

0x0a7e,	// (0x00042ca9) popup_note_window_t2

0x0a94,	// (0x00042cbf) popup_note_window_t3_ParamLimits

0x0a94,	// (0x00042cbf) popup_note_window_t3

0x0aaa,	// (0x00042cd5) popup_note_window_t4_ParamLimits

0x0aaa,	// (0x00042cd5) popup_note_window_t4

0x0ad2,	// (0x00042cfd) popup_note_window_t5_ParamLimits

0x0ad2,	// (0x00042cfd) popup_note_window_t5

0x0004,

0xf57f,	// (0x000517aa) popup_note_window_t_ParamLimits

0xf57f,	// (0x000517aa) popup_note_window_t

0x0af6,	// (0x00042d21) bg_popup_window_pane_cp6_ParamLimits

0x0af6,	// (0x00042d21) bg_popup_window_pane_cp6

0xa4bb,	// (0x0004c6e6) popup_note_image_window_g1_ParamLimits

0xa4bb,	// (0x0004c6e6) popup_note_image_window_g1

0xa4c7,	// (0x0004c6f2) popup_note_image_window_g2_ParamLimits

0xa4c7,	// (0x0004c6f2) popup_note_image_window_g2

0x0001,

0xf85f,	// (0x00051a8a) popup_note_image_window_g_ParamLimits

0xf85f,	// (0x00051a8a) popup_note_image_window_g

0xa4e0,	// (0x0004c70b) popup_note_image_window_t1_ParamLimits

0xa4e0,	// (0x0004c70b) popup_note_image_window_t1

0xa4f9,	// (0x0004c724) popup_note_image_window_t2_ParamLimits

0xa4f9,	// (0x0004c724) popup_note_image_window_t2

0xa512,	// (0x0004c73d) popup_note_image_window_t3_ParamLimits

0xa512,	// (0x0004c73d) popup_note_image_window_t3

0x0002,

0xf864,	// (0x00051a8f) popup_note_image_window_t_ParamLimits

0xf864,	// (0x00051a8f) popup_note_image_window_t

0xa384,	// (0x0004c5af) bg_popup_window_pane_cp7_ParamLimits

0xa384,	// (0x0004c5af) bg_popup_window_pane_cp7

0xa3b4,	// (0x0004c5df) popup_note_wait_window_g1_ParamLimits

0xa3b4,	// (0x0004c5df) popup_note_wait_window_g1

0xa3c0,	// (0x0004c5eb) popup_note_wait_window_g2_ParamLimits

0xa3c0,	// (0x0004c5eb) popup_note_wait_window_g2

0x0002,

0xf84d,	// (0x00051a78) popup_note_wait_window_g_ParamLimits

0xf84d,	// (0x00051a78) popup_note_wait_window_g

0xa3d8,	// (0x0004c603) popup_note_wait_window_t1_ParamLimits

0xa3d8,	// (0x0004c603) popup_note_wait_window_t1

0xa3ff,	// (0x0004c62a) popup_note_wait_window_t2_ParamLimits

0xa3ff,	// (0x0004c62a) popup_note_wait_window_t2

0xa41c,	// (0x0004c647) popup_note_wait_window_t3_ParamLimits

0xa41c,	// (0x0004c647) popup_note_wait_window_t3

0xa42f,	// (0x0004c65a) popup_note_wait_window_t4_ParamLimits

0xa42f,	// (0x0004c65a) popup_note_wait_window_t4

0x0004,

0xf854,	// (0x00051a7f) popup_note_wait_window_t_ParamLimits

0xf854,	// (0x00051a7f) popup_note_wait_window_t

0xa454,	// (0x0004c67f) wait_bar_pane_ParamLimits

0xa454,	// (0x0004c67f) wait_bar_pane

0x08c8,	// (0x00042af3) wait_anim_pane

0x08c8,	// (0x00042af3) wait_border_pane

0x08be,	// (0x00042ae9) wait_anim_pane_g1

0x08be,	// (0x00042ae9) wait_anim_pane_g2

0x0001,

0xf708,	// (0x00051933) wait_anim_pane_g

0xa330,	// (0x0004c55b) wait_border_pane_g1

0xa33b,	// (0x0004c566) wait_border_pane_g2

0xa344,	// (0x0004c56f) wait_border_pane_g3

0x0002,

0xf846,	// (0x00051a71) wait_border_pane_g

0xa19b,	// (0x0004c3c6) bg_popup_window_pane_cp16_ParamLimits

0xa19b,	// (0x0004c3c6) bg_popup_window_pane_cp16

0xa29b,	// (0x0004c4c6) indicator_popup_pane_cp4_ParamLimits

0xa29b,	// (0x0004c4c6) indicator_popup_pane_cp4

0xa2af,	// (0x0004c4da) popup_query_data_window_t1_ParamLimits

0xa2af,	// (0x0004c4da) popup_query_data_window_t1

0xa2c1,	// (0x0004c4ec) popup_query_data_window_t2_ParamLimits

0xa2c1,	// (0x0004c4ec) popup_query_data_window_t2

0xa2da,	// (0x0004c505) popup_query_data_window_t3_ParamLimits

0xa2da,	// (0x0004c505) popup_query_data_window_t3

0x0002,

0xf83f,	// (0x00051a6a) popup_query_data_window_t_ParamLimits

0xf83f,	// (0x00051a6a) popup_query_data_window_t

0xa2f4,	// (0x0004c51f) query_popup_data_pane_ParamLimits

0xa2f4,	// (0x0004c51f) query_popup_data_pane

0xa308,	// (0x0004c533) query_popup_data_pane_cp1_ParamLimits

0xa308,	// (0x0004c533) query_popup_data_pane_cp1

0xa19b,	// (0x0004c3c6) bg_popup_window_pane_cp10_ParamLimits

0xa19b,	// (0x0004c3c6) bg_popup_window_pane_cp10

0xa1cd,	// (0x0004c3f8) indicator_popup_pane_ParamLimits

0xa1cd,	// (0x0004c3f8) indicator_popup_pane

0xa1ef,	// (0x0004c41a) popup_query_code_window_t1_ParamLimits

0xa1ef,	// (0x0004c41a) popup_query_code_window_t1

0xa209,	// (0x0004c434) popup_query_code_window_t2_ParamLimits

0xa209,	// (0x0004c434) popup_query_code_window_t2

0xa252,	// (0x0004c47d) popup_query_code_window_t3_ParamLimits

0xa252,	// (0x0004c47d) popup_query_code_window_t3

0x0002,

0xf838,	// (0x00051a63) popup_query_code_window_t_ParamLimits

0xf838,	// (0x00051a63) popup_query_code_window_t

0xa281,	// (0x0004c4ac) query_popup_pane_ParamLimits

0xa281,	// (0x0004c4ac) query_popup_pane

0x0af6,	// (0x00042d21) bg_popup_window_pane_cp15_ParamLimits

0x0af6,	// (0x00042d21) bg_popup_window_pane_cp15

0x6b2b,	// (0x00048d56) indicator_popup_pane_cp1_ParamLimits

0x6b2b,	// (0x00048d56) indicator_popup_pane_cp1

0x6b3e,	// (0x00048d69) indicator_popup_pane_cp2_ParamLimits

0x6b3e,	// (0x00048d69) indicator_popup_pane_cp2

0x6b51,	// (0x00048d7c) popup_query_data_code_window_g1_ParamLimits

0x6b51,	// (0x00048d7c) popup_query_data_code_window_g1

0x0b14,	// (0x00042d3f) popup_query_data_code_window_t1_ParamLimits

0x0b14,	// (0x00042d3f) popup_query_data_code_window_t1

0x0b26,	// (0x00042d51) popup_query_data_code_window_t2_ParamLimits

0x0b26,	// (0x00042d51) popup_query_data_code_window_t2

0x6b64,	// (0x00048d8f) popup_query_data_code_window_t3_ParamLimits

0x6b64,	// (0x00048d8f) popup_query_data_code_window_t3

0x6b7a,	// (0x00048da5) popup_query_data_code_window_t4_ParamLimits

0x6b7a,	// (0x00048da5) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x000517b5) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x000517b5) popup_query_data_code_window_t

0x4b0f,	// (0x00046d3a) list_single_midp_graphic_pane_g3

0x6b92,	// (0x00048dbd) query_popup_data_pane_cp2_ParamLimits

0x6ba5,	// (0x00048dd0) query_popup_pane_cp2_ParamLimits

0x6ba5,	// (0x00048dd0) query_popup_pane_cp2

0x08c8,	// (0x00042af3) bg_popup_window_pane_cp11

0xa193,	// (0x0004c3be) heading_pane_cp5

0x0b82,	// (0x00042dad) listscroll_popup_info_pane

0x08c8,	// (0x00042af3) input_focus_pane_cp3

0x0b38,	// (0x00042d63) query_popup_pane_t1

0x0b46,	// (0x00042d71) list_popup_info_pane_ParamLimits

0x0b46,	// (0x00042d71) list_popup_info_pane

0x0b55,	// (0x00042d80) listscroll_popup_info_pane_g1

0x0b5d,	// (0x00042d88) scroll_pane_cp7

0x6bb8,	// (0x00048de3) popup_info_list_pane_t1_ParamLimits

0x6bb8,	// (0x00048de3) popup_info_list_pane_t1

0x6bd2,	// (0x00048dfd) popup_info_list_pane_t2_ParamLimits

0x6bd2,	// (0x00048dfd) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x000517be) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x000517be) popup_info_list_pane_t

0x08c8,	// (0x00042af3) bg_popup_window_pane_cp12

0xb4b6,	// (0x0004d6e1) find_popup_pane

0x0924,	// (0x00042b4f) bg_popup_window_pane_cp3

0x0b67,	// (0x00042d92) heading_pane_cp3

0x0b73,	// (0x00042d9e) listscroll_popup_graphic_pane

0x08c8,	// (0x00042af3) bg_popup_window_pane_cp4

0x6c3c,	// (0x00048e67) heading_pane_cp4

0x0b82,	// (0x00042dad) listscroll_popup_colour_pane

0x6c46,	// (0x00048e71) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x6c46,	// (0x00048e71) cell_large_graphic_colour_none_popup_pane

0x6c5a,	// (0x00048e85) grid_large_graphic_colour_popup_pane_ParamLimits

0x6c5a,	// (0x00048e85) grid_large_graphic_colour_popup_pane

0x6c82,	// (0x00048ead) listscroll_popup_colour_pane_g1_ParamLimits

0x6c82,	// (0x00048ead) listscroll_popup_colour_pane_g1

0x6c99,	// (0x00048ec4) listscroll_popup_colour_pane_g2_ParamLimits

0x6c99,	// (0x00048ec4) listscroll_popup_colour_pane_g2

0x6cb0,	// (0x00048edb) listscroll_popup_colour_pane_g3_ParamLimits

0x6cb0,	// (0x00048edb) listscroll_popup_colour_pane_g3

0x6cc0,	// (0x00048eeb) listscroll_popup_colour_pane_g4_ParamLimits

0x6cc0,	// (0x00048eeb) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x000517c3) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x000517c3) listscroll_popup_colour_pane_g

0x0b8a,	// (0x00042db5) scroll_pane_cp6_ParamLimits

0x0b8a,	// (0x00042db5) scroll_pane_cp6

0x6cd0,	// (0x00048efb) cell_large_graphic_colour_popup_pane_ParamLimits

0x6cd0,	// (0x00048efb) cell_large_graphic_colour_popup_pane

0x6cef,	// (0x00048f1a) cell_large_graphic_colour_none_popup_pane_t1

0x08c8,	// (0x00042af3) grid_highlight_pane_cp5

0x0b9c,	// (0x00042dc7) cell_large_graphic_colour_popup_pane_g1

0x0ba4,	// (0x00042dcf) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x000517cc) cell_large_graphic_colour_popup_pane_g

0x0bac,	// (0x00042dd7) cell_large_graphic_colour_popup_pane_g2_copy1

0x0bb5,	// (0x00042de0) grid_highlight_pane_cp4

0x0bbd,	// (0x00042de8) bg_popup_window_pane_cp8_ParamLimits

0x0bbd,	// (0x00042de8) bg_popup_window_pane_cp8

0x6cfe,	// (0x00048f29) popup_snote_single_text_window_g1_ParamLimits

0x6cfe,	// (0x00048f29) popup_snote_single_text_window_g1

0x6d10,	// (0x00048f3b) popup_snote_single_text_window_t1_ParamLimits

0x6d10,	// (0x00048f3b) popup_snote_single_text_window_t1

0x6d23,	// (0x00048f4e) popup_snote_single_text_window_t2_ParamLimits

0x6d23,	// (0x00048f4e) popup_snote_single_text_window_t2

0x6d36,	// (0x00048f61) popup_snote_single_text_window_t3_ParamLimits

0x6d36,	// (0x00048f61) popup_snote_single_text_window_t3

0x6d6f,	// (0x00048f9a) popup_snote_single_text_window_t4_ParamLimits

0x6d6f,	// (0x00048f9a) popup_snote_single_text_window_t4

0x6da3,	// (0x00048fce) popup_snote_single_text_window_t5_ParamLimits

0x6da3,	// (0x00048fce) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x000517d1) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x000517d1) popup_snote_single_text_window_t

0x0bd8,	// (0x00042e03) bg_popup_window_pane_cp9_ParamLimits

0x0bd8,	// (0x00042e03) bg_popup_window_pane_cp9

0x6cfe,	// (0x00048f29) popup_snote_single_graphic_window_g1_ParamLimits

0x6cfe,	// (0x00048f29) popup_snote_single_graphic_window_g1

0x0be6,	// (0x00042e11) popup_snote_single_graphic_window_g2_ParamLimits

0x0be6,	// (0x00042e11) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x000517dc) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x000517dc) popup_snote_single_graphic_window_g

0x0bf2,	// (0x00042e1d) popup_snote_single_graphic_window_t1_ParamLimits

0x0bf2,	// (0x00042e1d) popup_snote_single_graphic_window_t1

0x0c05,	// (0x00042e30) popup_snote_single_graphic_window_t2_ParamLimits

0x0c05,	// (0x00042e30) popup_snote_single_graphic_window_t2

0x6dd2,	// (0x00048ffd) popup_snote_single_graphic_window_t3_ParamLimits

0x6dd2,	// (0x00048ffd) popup_snote_single_graphic_window_t3

0x6e0b,	// (0x00049036) popup_snote_single_graphic_window_t4_ParamLimits

0x6e0b,	// (0x00049036) popup_snote_single_graphic_window_t4

0x6e3f,	// (0x0004906a) popup_snote_single_graphic_window_t5_ParamLimits

0x6e3f,	// (0x0004906a) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x000517e1) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x000517e1) popup_snote_single_graphic_window_t

0xb3fa,	// (0x0004d625) grid_graphic_popup_pane_ParamLimits

0xb3fa,	// (0x0004d625) grid_graphic_popup_pane

0xb422,	// (0x0004d64d) listscroll_popup_graphic_pane_g1_ParamLimits

0xb422,	// (0x0004d64d) listscroll_popup_graphic_pane_g1

0xb436,	// (0x0004d661) listscroll_popup_graphic_pane_g2_ParamLimits

0xb436,	// (0x0004d661) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b5,	// (0x00051be0) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b5,	// (0x00051be0) listscroll_popup_graphic_pane_g

0xb44a,	// (0x0004d675) scroll_pane_cp5

0xb397,	// (0x0004d5c2) cell_graphic_popup_pane_ParamLimits

0xb397,	// (0x0004d5c2) cell_graphic_popup_pane

0xb378,	// (0x0004d5a3) cell_graphic_popup_pane_g1

0xb380,	// (0x0004d5ab) cell_graphic_popup_pane_g2

0x0bac,	// (0x00042dd7) cell_graphic_popup_pane_g3

0x0002,

0xf9ae,	// (0x00051bd9) cell_graphic_popup_pane_g

0xb389,	// (0x0004d5b4) cell_graphic_popup_pane_t2

0x0bb5,	// (0x00042de0) grid_highlight_pane_cp3

0x0c2a,	// (0x00042e55) list_gen_pane_ParamLimits

0x0c2a,	// (0x00042e55) list_gen_pane

0x0c52,	// (0x00042e7d) scroll_pane

0xb2d0,	// (0x0004d4fb) bg_list_pane_g1_ParamLimits

0xb2d0,	// (0x0004d4fb) bg_list_pane_g1

0xb2ed,	// (0x0004d518) bg_list_pane_g2_ParamLimits

0xb2ed,	// (0x0004d518) bg_list_pane_g2

0xb302,	// (0x0004d52d) bg_list_pane_g3_ParamLimits

0xb302,	// (0x0004d52d) bg_list_pane_g3

0xb316,	// (0x0004d541) bg_list_pane_g4_ParamLimits

0xb316,	// (0x0004d541) bg_list_pane_g4

0xb32a,	// (0x0004d555) bg_list_pane_g5_ParamLimits

0xb32a,	// (0x0004d555) bg_list_pane_g5

0x0004,

0xf9a3,	// (0x00051bce) bg_list_pane_g_ParamLimits

0xf9a3,	// (0x00051bce) bg_list_pane_g

0x5efb,	// (0x00048126) list_double2_graphic_large_graphic_pane_ParamLimits

0x5efb,	// (0x00048126) list_double2_graphic_large_graphic_pane

0x5efb,	// (0x00048126) list_double2_graphic_pane_ParamLimits

0x5efb,	// (0x00048126) list_double2_graphic_pane

0x5efb,	// (0x00048126) list_double2_large_graphic_pane_ParamLimits

0x5efb,	// (0x00048126) list_double2_large_graphic_pane

0x5efb,	// (0x00048126) list_double2_pane_ParamLimits

0x5efb,	// (0x00048126) list_double2_pane

0x5efb,	// (0x00048126) list_double_graphic_heading_pane_ParamLimits

0x5efb,	// (0x00048126) list_double_graphic_heading_pane

0x5efb,	// (0x00048126) list_double_graphic_pane_ParamLimits

0x5efb,	// (0x00048126) list_double_graphic_pane

0x5efb,	// (0x00048126) list_double_heading_pane_ParamLimits

0x5efb,	// (0x00048126) list_double_heading_pane

0x5efb,	// (0x00048126) list_double_large_graphic_pane_ParamLimits

0x5efb,	// (0x00048126) list_double_large_graphic_pane

0x5efb,	// (0x00048126) list_double_number_pane_ParamLimits

0x5efb,	// (0x00048126) list_double_number_pane

0x5efb,	// (0x00048126) list_double_pane_ParamLimits

0x5efb,	// (0x00048126) list_double_pane

0x5efb,	// (0x00048126) list_double_time_pane_ParamLimits

0x5efb,	// (0x00048126) list_double_time_pane

0x5efb,	// (0x00048126) list_setting_number_pane_ParamLimits

0x5efb,	// (0x00048126) list_setting_number_pane

0x5efb,	// (0x00048126) list_setting_pane_ParamLimits

0x5efb,	// (0x00048126) list_setting_pane

0x833a,	// (0x0004a565) list_single_2graphic_pane_ParamLimits

0x833a,	// (0x0004a565) list_single_2graphic_pane

0x833a,	// (0x0004a565) list_single_graphic_heading_pane_ParamLimits

0x833a,	// (0x0004a565) list_single_graphic_heading_pane

0x833a,	// (0x0004a565) list_single_graphic_pane_ParamLimits

0x833a,	// (0x0004a565) list_single_graphic_pane

0x833a,	// (0x0004a565) list_single_heading_pane_ParamLimits

0x833a,	// (0x0004a565) list_single_heading_pane

0x8395,	// (0x0004a5c0) list_single_large_graphic_pane_ParamLimits

0x8395,	// (0x0004a5c0) list_single_large_graphic_pane

0x833a,	// (0x0004a565) list_single_number_heading_pane_ParamLimits

0x833a,	// (0x0004a565) list_single_number_heading_pane

0x833a,	// (0x0004a565) list_single_number_pane_ParamLimits

0x833a,	// (0x0004a565) list_single_number_pane

0x833a,	// (0x0004a565) list_single_pane_ParamLimits

0x833a,	// (0x0004a565) list_single_pane

0x08c8,	// (0x00042af3) list_highlight_pane_cp1

0x6e78,	// (0x000490a3) list_single_pane_g1_ParamLimits

0x6e78,	// (0x000490a3) list_single_pane_g1

0x6e84,	// (0x000490af) list_single_pane_g2_ParamLimits

0x6e84,	// (0x000490af) list_single_pane_g2

0x0001,

0xf5d2,	// (0x000517fd) list_single_pane_g_ParamLimits

0xf5d2,	// (0x000517fd) list_single_pane_g

0x5ee5,	// (0x00048110) list_single_pane_t1_ParamLimits

0x5ee5,	// (0x00048110) list_single_pane_t1

0x6e78,	// (0x000490a3) list_single_number_pane_g1_ParamLimits

0x6e78,	// (0x000490a3) list_single_number_pane_g1

0x6e84,	// (0x000490af) list_single_number_pane_g2_ParamLimits

0x6e84,	// (0x000490af) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x000517fd) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x000517fd) list_single_number_pane_g

0x5e8d,	// (0x000480b8) list_single_number_pane_t1_ParamLimits

0x5e8d,	// (0x000480b8) list_single_number_pane_t1

0x5ea3,	// (0x000480ce) list_single_number_pane_t2_ParamLimits

0x5ea3,	// (0x000480ce) list_single_number_pane_t2

0x0001,

0xf964,	// (0x00051b8f) list_single_number_pane_t_ParamLimits

0xf964,	// (0x00051b8f) list_single_number_pane_t

0x5612,	// (0x0004783d) list_single_graphic_pane_g1_ParamLimits

0x5612,	// (0x0004783d) list_single_graphic_pane_g1

0x6e78,	// (0x000490a3) list_single_graphic_pane_g2_ParamLimits

0x6e78,	// (0x000490a3) list_single_graphic_pane_g2

0x6e84,	// (0x000490af) list_single_graphic_pane_g3_ParamLimits

0x6e84,	// (0x000490af) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x000517ec) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x000517ec) list_single_graphic_pane_g

0x561e,	// (0x00047849) list_single_graphic_pane_t1_ParamLimits

0x561e,	// (0x00047849) list_single_graphic_pane_t1

0x5634,	// (0x0004785f) list_single_heading_pane_g1_ParamLimits

0x5634,	// (0x0004785f) list_single_heading_pane_g1

0x6e84,	// (0x000490af) list_single_heading_pane_g2_ParamLimits

0x6e84,	// (0x000490af) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x000517f3) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x000517f3) list_single_heading_pane_g

0x5647,	// (0x00047872) list_single_heading_pane_t1_ParamLimits

0x5647,	// (0x00047872) list_single_heading_pane_t1

0x6e90,	// (0x000490bb) list_single_heading_pane_t2_ParamLimits

0x6e90,	// (0x000490bb) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x000517f8) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x000517f8) list_single_heading_pane_t

0x6e78,	// (0x000490a3) list_single_number_heading_pane_g1_ParamLimits

0x6e78,	// (0x000490a3) list_single_number_heading_pane_g1

0x6e84,	// (0x000490af) list_single_number_heading_pane_g2_ParamLimits

0x6e84,	// (0x000490af) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x000517fd) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x000517fd) list_single_number_heading_pane_g

0x565d,	// (0x00047888) list_single_number_heading_pane_t1_ParamLimits

0x565d,	// (0x00047888) list_single_number_heading_pane_t1

0x5673,	// (0x0004789e) list_single_number_heading_pane_t2_ParamLimits

0x5673,	// (0x0004789e) list_single_number_heading_pane_t2

0x5685,	// (0x000478b0) list_single_number_heading_pane_t3_ParamLimits

0x5685,	// (0x000478b0) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x00051802) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x00051802) list_single_number_heading_pane_t

0x5697,	// (0x000478c2) list_single_graphic_heading_pane_g1_ParamLimits

0x5697,	// (0x000478c2) list_single_graphic_heading_pane_g1

0x6ea2,	// (0x000490cd) list_single_graphic_heading_pane_g4_ParamLimits

0x6ea2,	// (0x000490cd) list_single_graphic_heading_pane_g4

0x6e84,	// (0x000490af) list_single_graphic_heading_pane_g5_ParamLimits

0x6e84,	// (0x000490af) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x00051809) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x00051809) list_single_graphic_heading_pane_g

0x565d,	// (0x00047888) list_single_graphic_heading_pane_t1_ParamLimits

0x565d,	// (0x00047888) list_single_graphic_heading_pane_t1

0x56ad,	// (0x000478d8) list_single_graphic_heading_pane_t2_ParamLimits

0x56ad,	// (0x000478d8) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x00051810) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x00051810) list_single_graphic_heading_pane_t

0x6eb3,	// (0x000490de) list_single_large_graphic_pane_g1_ParamLimits

0x6eb3,	// (0x000490de) list_single_large_graphic_pane_g1

0x6ebf,	// (0x000490ea) list_single_large_graphic_pane_g2_ParamLimits

0x6ebf,	// (0x000490ea) list_single_large_graphic_pane_g2

0x6ecb,	// (0x000490f6) list_single_large_graphic_pane_g3_ParamLimits

0x6ecb,	// (0x000490f6) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x00051815) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x00051815) list_single_large_graphic_pane_g

0xa33b,	// (0x0004c566) wait_border_pane_g2_copy1

0x6ed7,	// (0x00049102) list_single_large_graphic_pane_g4_cp2

0x56c5,	// (0x000478f0) list_single_large_graphic_pane_t1_ParamLimits

0x56c5,	// (0x000478f0) list_single_large_graphic_pane_t1

0x6edf,	// (0x0004910a) list_double_pane_g1_ParamLimits

0x6edf,	// (0x0004910a) list_double_pane_g1

0x6eeb,	// (0x00049116) list_double_pane_g2_ParamLimits

0x6eeb,	// (0x00049116) list_double_pane_g2

0x0001,

0xf5f1,	// (0x0005181c) list_double_pane_g_ParamLimits

0xf5f1,	// (0x0005181c) list_double_pane_g

0x56db,	// (0x00047906) list_double_pane_t1_ParamLimits

0x56db,	// (0x00047906) list_double_pane_t1

0x56f1,	// (0x0004791c) list_double_pane_t2_ParamLimits

0x56f1,	// (0x0004791c) list_double_pane_t2

0x0001,

0xf5f6,	// (0x00051821) list_double_pane_t_ParamLimits

0xf5f6,	// (0x00051821) list_double_pane_t

0x5703,	// (0x0004792e) list_double2_pane_g1_ParamLimits

0x5703,	// (0x0004792e) list_double2_pane_g1

0x5714,	// (0x0004793f) list_double2_pane_g2_ParamLimits

0x5714,	// (0x0004793f) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x00051826) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x00051826) list_double2_pane_g

0x5720,	// (0x0004794b) list_double2_pane_t1_ParamLimits

0x5720,	// (0x0004794b) list_double2_pane_t1

0x5736,	// (0x00047961) list_double2_pane_t2_ParamLimits

0x5736,	// (0x00047961) list_double2_pane_t2

0x0001,

0xf600,	// (0x0005182b) list_double2_pane_t_ParamLimits

0xf600,	// (0x0005182b) list_double2_pane_t

0x6edf,	// (0x0004910a) list_double_number_pane_g1_ParamLimits

0x6edf,	// (0x0004910a) list_double_number_pane_g1

0x6eeb,	// (0x00049116) list_double_number_pane_g2_ParamLimits

0x6eeb,	// (0x00049116) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x0005181c) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x0005181c) list_double_number_pane_g

0x5748,	// (0x00047973) list_double_number_pane_t1_ParamLimits

0x5748,	// (0x00047973) list_double_number_pane_t1

0x575a,	// (0x00047985) list_double_number_pane_t2_ParamLimits

0x575a,	// (0x00047985) list_double_number_pane_t2

0x5770,	// (0x0004799b) list_double_number_pane_t3_ParamLimits

0x5770,	// (0x0004799b) list_double_number_pane_t3

0x0002,

0xf605,	// (0x00051830) list_double_number_pane_t_ParamLimits

0xf605,	// (0x00051830) list_double_number_pane_t

0x5782,	// (0x000479ad) list_double_graphic_pane_g1_ParamLimits

0x5782,	// (0x000479ad) list_double_graphic_pane_g1

0x6ef7,	// (0x00049122) list_double_graphic_pane_g2_ParamLimits

0x6ef7,	// (0x00049122) list_double_graphic_pane_g2

0x6f06,	// (0x00049131) list_double_graphic_pane_g3_ParamLimits

0x6f06,	// (0x00049131) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x00051837) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x00051837) list_double_graphic_pane_g

0x579a,	// (0x000479c5) list_double_graphic_pane_t1_ParamLimits

0x579a,	// (0x000479c5) list_double_graphic_pane_t1

0x57b0,	// (0x000479db) list_double_graphic_pane_t2_ParamLimits

0x57b0,	// (0x000479db) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x00051840) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x00051840) list_double_graphic_pane_t

0x57c2,	// (0x000479ed) list_double2_graphic_pane_g1_ParamLimits

0x57c2,	// (0x000479ed) list_double2_graphic_pane_g1

0xbe91,	// (0x0004e0bc) list_double2_graphic_pane_g2_ParamLimits

0xbe91,	// (0x0004e0bc) list_double2_graphic_pane_g2

0x6f12,	// (0x0004913d) list_double2_graphic_pane_g3_ParamLimits

0x6f12,	// (0x0004913d) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x00051845) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x00051845) list_double2_graphic_pane_g

0x57ce,	// (0x000479f9) list_double2_graphic_pane_t1_ParamLimits

0x57ce,	// (0x000479f9) list_double2_graphic_pane_t1

0x57e4,	// (0x00047a0f) list_double2_graphic_pane_t2_ParamLimits

0x57e4,	// (0x00047a0f) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x0005184c) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x0005184c) list_double2_graphic_pane_t

0x57f6,	// (0x00047a21) list_double_large_graphic_pane_g1_ParamLimits

0x57f6,	// (0x00047a21) list_double_large_graphic_pane_g1

0x5815,	// (0x00047a40) list_double_large_graphic_pane_g2_ParamLimits

0x5815,	// (0x00047a40) list_double_large_graphic_pane_g2

0x6eeb,	// (0x00049116) list_double_large_graphic_pane_g3_ParamLimits

0x6eeb,	// (0x00049116) list_double_large_graphic_pane_g3

0x582b,	// (0x00047a56) list_double_large_graphic_pane_g4_ParamLimits

0x582b,	// (0x00047a56) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x00051851) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x00051851) list_double_large_graphic_pane_g

0x583d,	// (0x00047a68) list_double_large_graphic_pane_t1_ParamLimits

0x583d,	// (0x00047a68) list_double_large_graphic_pane_t1

0x5856,	// (0x00047a81) list_double_large_graphic_pane_t2_ParamLimits

0x5856,	// (0x00047a81) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x0005185c) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x0005185c) list_double_large_graphic_pane_t

0x5868,	// (0x00047a93) list_double2_large_graphic_pane_g1_ParamLimits

0x5868,	// (0x00047a93) list_double2_large_graphic_pane_g1

0x5874,	// (0x00047a9f) list_double2_large_graphic_pane_g2_ParamLimits

0x5874,	// (0x00047a9f) list_double2_large_graphic_pane_g2

0x6f12,	// (0x0004913d) list_double2_large_graphic_pane_g3_ParamLimits

0x6f12,	// (0x0004913d) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x00051861) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x00051861) list_double2_large_graphic_pane_g

0x5885,	// (0x00047ab0) list_double2_large_graphic_pane_t1_ParamLimits

0x5885,	// (0x00047ab0) list_double2_large_graphic_pane_t1

0x589b,	// (0x00047ac6) list_double2_large_graphic_pane_t2_ParamLimits

0x589b,	// (0x00047ac6) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x00051868) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x00051868) list_double2_large_graphic_pane_t

0x6f33,	// (0x0004915e) list_double_heading_pane_g1_ParamLimits

0x6f33,	// (0x0004915e) list_double_heading_pane_g1

0x6f44,	// (0x0004916f) list_double_heading_pane_g2_ParamLimits

0x6f44,	// (0x0004916f) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x0005186d) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x0005186d) list_double_heading_pane_g

0x58ad,	// (0x00047ad8) list_double_heading_pane_t1_ParamLimits

0x58ad,	// (0x00047ad8) list_double_heading_pane_t1

0x5736,	// (0x00047961) list_double_heading_pane_t2_ParamLimits

0x5736,	// (0x00047961) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x00051872) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x00051872) list_double_heading_pane_t

0x58c3,	// (0x00047aee) list_double_graphic_heading_pane_g1_ParamLimits

0x58c3,	// (0x00047aee) list_double_graphic_heading_pane_g1

0x6f33,	// (0x0004915e) list_double_graphic_heading_pane_g2_ParamLimits

0x6f33,	// (0x0004915e) list_double_graphic_heading_pane_g2

0x6f44,	// (0x0004916f) list_double_graphic_heading_pane_g3_ParamLimits

0x6f44,	// (0x0004916f) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x00051877) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x00051877) list_double_graphic_heading_pane_g

0x58cf,	// (0x00047afa) list_double_graphic_heading_pane_t1_ParamLimits

0x58cf,	// (0x00047afa) list_double_graphic_heading_pane_t1

0x57e4,	// (0x00047a0f) list_double_graphic_heading_pane_t2_ParamLimits

0x57e4,	// (0x00047a0f) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x0005187e) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x0005187e) list_double_graphic_heading_pane_t

0x58e5,	// (0x00047b10) list_double_time_pane_g1_ParamLimits

0x58e5,	// (0x00047b10) list_double_time_pane_g1

0x58f6,	// (0x00047b21) list_double_time_pane_g2_ParamLimits

0x58f6,	// (0x00047b21) list_double_time_pane_g2

0x0001,

0xf658,	// (0x00051883) list_double_time_pane_g_ParamLimits

0xf658,	// (0x00051883) list_double_time_pane_g

0x5902,	// (0x00047b2d) list_double_time_pane_t1_ParamLimits

0x5902,	// (0x00047b2d) list_double_time_pane_t1

0x5918,	// (0x00047b43) list_double_time_pane_t2_ParamLimits

0x5918,	// (0x00047b43) list_double_time_pane_t2

0x592a,	// (0x00047b55) list_double_time_pane_t3_ParamLimits

0x592a,	// (0x00047b55) list_double_time_pane_t3

0x593c,	// (0x00047b67) list_double_time_pane_t4_ParamLimits

0x593c,	// (0x00047b67) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x00051888) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x00051888) list_double_time_pane_t

0x594e,	// (0x00047b79) list_setting_pane_g1_ParamLimits

0x594e,	// (0x00047b79) list_setting_pane_g1

0x5714,	// (0x0004793f) list_setting_pane_g2_ParamLimits

0x5714,	// (0x0004793f) list_setting_pane_g2

0x0001,

0xf666,	// (0x00051891) list_setting_pane_g_ParamLimits

0xf666,	// (0x00051891) list_setting_pane_g

0x595a,	// (0x00047b85) list_setting_pane_t1_ParamLimits

0x595a,	// (0x00047b85) list_setting_pane_t1

0x5974,	// (0x00047b9f) list_setting_pane_t2_ParamLimits

0x5974,	// (0x00047b9f) list_setting_pane_t2

0x0002,

0xf66b,	// (0x00051896) list_setting_pane_t_ParamLimits

0xf66b,	// (0x00051896) list_setting_pane_t

0x59b1,	// (0x00047bdc) set_value_pane_cp_ParamLimits

0x59b1,	// (0x00047bdc) set_value_pane_cp

0x59bd,	// (0x00047be8) list_setting_number_pane_g1_ParamLimits

0x59bd,	// (0x00047be8) list_setting_number_pane_g1

0x59c9,	// (0x00047bf4) list_setting_number_pane_g2_ParamLimits

0x59c9,	// (0x00047bf4) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x0005189d) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x0005189d) list_setting_number_pane_g

0x59d5,	// (0x00047c00) list_setting_number_pane_t1_ParamLimits

0x59d5,	// (0x00047c00) list_setting_number_pane_t1

0x59ee,	// (0x00047c19) list_setting_number_pane_t2_ParamLimits

0x59ee,	// (0x00047c19) list_setting_number_pane_t2

0x5a08,	// (0x00047c33) list_setting_number_pane_t3_ParamLimits

0x5a08,	// (0x00047c33) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x000518a2) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x000518a2) list_setting_number_pane_t

0x59b1,	// (0x00047bdc) set_value_pane_ParamLimits

0x59b1,	// (0x00047bdc) set_value_pane

0x0c86,	// (0x00042eb1) bg_set_opt_pane_ParamLimits

0x0c86,	// (0x00042eb1) bg_set_opt_pane

0x5a4b,	// (0x00047c76) set_value_pane_t1

0x0ca7,	// (0x00042ed2) slider_set_pane_cp3

0x6f50,	// (0x0004917b) volume_small_pane_cp

0x0cb0,	// (0x00042edb) list_form_gen_pane

0x0cb9,	// (0x00042ee4) scroll_pane_cp8

0x5a61,	// (0x00047c8c) form_field_data_pane_ParamLimits

0x5a61,	// (0x00047c8c) form_field_data_pane

0x5a83,	// (0x00047cae) form_field_data_wide_pane_ParamLimits

0x5a83,	// (0x00047cae) form_field_data_wide_pane

0x5aa6,	// (0x00047cd1) form_field_popup_pane_ParamLimits

0x5aa6,	// (0x00047cd1) form_field_popup_pane

0x5ac6,	// (0x00047cf1) form_field_popup_wide_pane_ParamLimits

0x5ac6,	// (0x00047cf1) form_field_popup_wide_pane

0x5ae3,	// (0x00047d0e) form_field_slider_pane_ParamLimits

0x5ae3,	// (0x00047d0e) form_field_slider_pane

0x5af6,	// (0x00047d21) form_field_slider_wide_pane_ParamLimits

0x5af6,	// (0x00047d21) form_field_slider_wide_pane

0x0cca,	// (0x00042ef5) data_form_pane

0x5b13,	// (0x00047d3e) form_field_data_pane_t1

0x0cd6,	// (0x00042f01) input_focus_pane

0x5b2b,	// (0x00047d56) data_form_wide_pane

0x5b48,	// (0x00047d73) form_field_data_wide_pane_t1

0x0bca,	// (0x00042df5) input_focus_pane_cp6

0x5b6a,	// (0x00047d95) form_field_popup_pane_t1

0x0cd6,	// (0x00042f01) input_focus_pane_cp7

0x0d04,	// (0x00042f2f) list_form_pane

0x5b8a,	// (0x00047db5) form_field_popup_wide_pane_t1

0x0cd6,	// (0x00042f01) input_focus_pane_cp8

0x0d10,	// (0x00042f3b) list_form_wide_pane

0x5ba7,	// (0x00047dd2) form_field_slider_pane_t1_ParamLimits

0x5ba7,	// (0x00047dd2) form_field_slider_pane_t1

0x5bbd,	// (0x00047de8) form_field_slider_pane_t2_ParamLimits

0x5bbd,	// (0x00047de8) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x000518b2) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x000518b2) form_field_slider_pane_t

0x0916,	// (0x00042b41) input_focus_pane_cp9_ParamLimits

0x0916,	// (0x00042b41) input_focus_pane_cp9

0x5bd2,	// (0x00047dfd) slider_cont_pane_ParamLimits

0x5bd2,	// (0x00047dfd) slider_cont_pane

0x0d1f,	// (0x00042f4a) form_field_slider_wide_pane_t1_ParamLimits

0x0d1f,	// (0x00042f4a) form_field_slider_wide_pane_t1

0x5be6,	// (0x00047e11) form_field_slider_wide_pane_t2_ParamLimits

0x5be6,	// (0x00047e11) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x000518b7) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x000518b7) form_field_slider_wide_pane_t

0x0916,	// (0x00042b41) input_focus_pane_cp10_ParamLimits

0x0916,	// (0x00042b41) input_focus_pane_cp10

0x5bf8,	// (0x00047e23) slider_cont_pane_cp1_ParamLimits

0x5bf8,	// (0x00047e23) slider_cont_pane_cp1

0x5c0c,	// (0x00047e37) slider_form_pane_cp

0x0d31,	// (0x00042f5c) input_focus_pane_g1

0x0d39,	// (0x00042f64) input_focus_pane_g2

0x0d41,	// (0x00042f6c) input_focus_pane_g3

0x0d49,	// (0x00042f74) input_focus_pane_g4

0x0d51,	// (0x00042f7c) input_focus_pane_g5

0x0d59,	// (0x00042f84) input_focus_pane_g6

0x0d61,	// (0x00042f8c) input_focus_pane_g7

0x0d69,	// (0x00042f94) input_focus_pane_g8

0x0d71,	// (0x00042f9c) input_focus_pane_g9

0x08be,	// (0x00042ae9) input_focus_pane_g10

0x0009,

0xf691,	// (0x000518bc) input_focus_pane_g

0xa344,	// (0x0004c56f) wait_border_pane_g3_copy1

0x5c14,	// (0x00047e3f) data_form_pane_t1

0x08be,	// (0x00042ae9) wait_anim_pane_g1_copy1

0x5eb5,	// (0x000480e0) data_form_wide_pane_t1

0x5c2f,	// (0x00047e5a) list_form_graphic_pane_cp_ParamLimits

0x5c2f,	// (0x00047e5a) list_form_graphic_pane_cp

0xb244,	// (0x0004d46f) slider_form_pane_g1

0xb24d,	// (0x0004d478) slider_form_pane_g2

0x0006,

0xf994,	// (0x00051bbf) slider_form_pane_g

0x5c2f,	// (0x00047e5a) list_form_graphic_pane_ParamLimits

0x5c2f,	// (0x00047e5a) list_form_graphic_pane

0x5c48,	// (0x00047e73) list_form_graphic_pane_g1

0x5c50,	// (0x00047e7b) list_form_graphic_pane_t1_ParamLimits

0x5c50,	// (0x00047e7b) list_form_graphic_pane_t1

0x0924,	// (0x00042b4f) list_highlight_pane_cp5_ParamLimits

0x0924,	// (0x00042b4f) list_highlight_pane_cp5

0x5c65,	// (0x00047e90) find_pane_g1

0x0d79,	// (0x00042fa4) input_find_pane

0x5c6e,	// (0x00047e99) input_find_pane_g1_ParamLimits

0x5c6e,	// (0x00047e99) input_find_pane_g1

0x5c7a,	// (0x00047ea5) input_find_pane_t1_ParamLimits

0x5c7a,	// (0x00047ea5) input_find_pane_t1

0x5c8f,	// (0x00047eba) input_find_pane_t2_ParamLimits

0x5c8f,	// (0x00047eba) input_find_pane_t2

0x0001,

0xf6a6,	// (0x000518d1) input_find_pane_t_ParamLimits

0xf6a6,	// (0x000518d1) input_find_pane_t

0x0d82,	// (0x00042fad) input_focus_pane_cp5_ParamLimits

0x0d82,	// (0x00042fad) input_focus_pane_cp5

0x0d90,	// (0x00042fbb) bg_popup_window_pane_cp2_ParamLimits

0x0d90,	// (0x00042fbb) bg_popup_window_pane_cp2

0x0d9d,	// (0x00042fc8) listscroll_menu_pane_ParamLimits

0x0d9d,	// (0x00042fc8) listscroll_menu_pane

0x6f65,	// (0x00049190) popup_submenu_window_ParamLimits

0x6f65,	// (0x00049190) popup_submenu_window

0x0da9,	// (0x00042fd4) find_popup_pane_g1

0x6f8d,	// (0x000491b8) input_popup_find_pane_cp

0x0d82,	// (0x00042fad) input_focus_pane_cp4_ParamLimits

0x0d82,	// (0x00042fad) input_focus_pane_cp4

0x0db1,	// (0x00042fdc) input_popup_find_pane_t1_ParamLimits

0x0db1,	// (0x00042fdc) input_popup_find_pane_t1

0x08c8,	// (0x00042af3) bg_popup_sub_pane_cp

0x0ddf,	// (0x0004300a) listscroll_popup_sub_pane

0x0de7,	// (0x00043012) list_submenu_pane_ParamLimits

0x0de7,	// (0x00043012) list_submenu_pane

0x0df8,	// (0x00043023) scroll_pane_cp4

0x6fa5,	// (0x000491d0) list_single_popup_submenu_pane_ParamLimits

0x6fa5,	// (0x000491d0) list_single_popup_submenu_pane

0x2321,	// (0x0004454c) list_single_popup_submenu_pane_g1

0x6fb9,	// (0x000491e4) list_single_popup_submenu_pane_t1_ParamLimits

0x6fb9,	// (0x000491e4) list_single_popup_submenu_pane_t1

0x0924,	// (0x00042b4f) bg_active_tab_pane_cp1_ParamLimits

0x0924,	// (0x00042b4f) bg_active_tab_pane_cp1

0x0e00,	// (0x0004302b) tabs_2_active_pane_g1

0x6fce,	// (0x000491f9) tabs_2_active_pane_t1

0x0924,	// (0x00042b4f) bg_passive_tab_pane_cp1_ParamLimits

0x0924,	// (0x00042b4f) bg_passive_tab_pane_cp1

0x0e00,	// (0x0004302b) tabs_2_passive_pane_g1

0x6fce,	// (0x000491f9) tabs_2_passive_pane_t1

0x20e0,	// (0x0004430b) bg_active_tab_pane_cp4

0x6fe0,	// (0x0004920b) tabs_2_long_active_pane_t1

0x6ff3,	// (0x0004921e) bg_passive_tab_pane_cp4

0x7ff6,	// (0x0004a221) list_single_midp_graphic_pane_g4_ParamLimits

0x20e0,	// (0x0004430b) bg_active_tab_pane_cp5

0x6fff,	// (0x0004922a) tabs_3_long_active_pane_t1

0x6ff3,	// (0x0004921e) bg_passive_tab_pane_cp5

0x7ff6,	// (0x0004a221) list_single_midp_graphic_pane_g4

0x0924,	// (0x00042b4f) bg_popup_window_pane_cp13_ParamLimits

0x0924,	// (0x00042b4f) bg_popup_window_pane_cp13

0x0e08,	// (0x00043033) listscroll_popup_fast_pane_ParamLimits

0x0e08,	// (0x00043033) listscroll_popup_fast_pane

0x0e14,	// (0x0004303f) grid_popup_fast_pane_ParamLimits

0x0e14,	// (0x0004303f) grid_popup_fast_pane

0x0e26,	// (0x00043051) scroll_pane_cp9_ParamLimits

0x0e26,	// (0x00043051) scroll_pane_cp9

0xcb4a,	// (0x0004ed75) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcb4a,	// (0x0004ed75) list_single_graphic_hl_pane_t1_cp2

0x0e39,	// (0x00043064) input_focus_pane_cp20_ParamLimits

0x0e39,	// (0x00043064) input_focus_pane_cp20

0x0e47,	// (0x00043072) query_popup_data_pane_t1_ParamLimits

0x0e47,	// (0x00043072) query_popup_data_pane_t1

0x0e5a,	// (0x00043085) query_popup_data_pane_t2_ParamLimits

0x0e5a,	// (0x00043085) query_popup_data_pane_t2

0x0ea0,	// (0x000430cb) query_popup_data_pane_t3_ParamLimits

0x0ea0,	// (0x000430cb) query_popup_data_pane_t3

0x0ee1,	// (0x0004310c) query_popup_data_pane_t4_ParamLimits

0x0ee1,	// (0x0004310c) query_popup_data_pane_t4

0x0f1d,	// (0x00043148) query_popup_data_pane_t5_ParamLimits

0x0f1d,	// (0x00043148) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x000518d6) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x000518d6) query_popup_data_pane_t

0x0d31,	// (0x00042f5c) bg_set_opt_pane_g1

0x0d39,	// (0x00042f64) bg_set_opt_pane_g2

0x0d41,	// (0x00042f6c) bg_set_opt_pane_g3

0x0d49,	// (0x00042f74) bg_set_opt_pane_g4

0x0d51,	// (0x00042f7c) bg_set_opt_pane_g5

0x0d59,	// (0x00042f84) bg_set_opt_pane_g6

0x0d61,	// (0x00042f8c) bg_set_opt_pane_g7

0x0d69,	// (0x00042f94) bg_set_opt_pane_g8

0x0d71,	// (0x00042f9c) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x000518e1) bg_set_opt_pane_g

0x7504,	// (0x0004972f) control_top_pane_stacon_ParamLimits

0x7504,	// (0x0004972f) control_top_pane_stacon

0x7557,	// (0x00049782) signal_pane_stacon_ParamLimits

0x7557,	// (0x00049782) signal_pane_stacon

0x4930,	// (0x00046b5b) stacon_top_pane_g1_ParamLimits

0x4930,	// (0x00046b5b) stacon_top_pane_g1

0x757c,	// (0x000497a7) title_pane_stacon_ParamLimits

0x757c,	// (0x000497a7) title_pane_stacon

0x75a6,	// (0x000497d1) uni_indicator_pane_stacon_ParamLimits

0x75a6,	// (0x000497d1) uni_indicator_pane_stacon

0x75bb,	// (0x000497e6) battery_pane_stacon_ParamLimits

0x75bb,	// (0x000497e6) battery_pane_stacon

0x75ff,	// (0x0004982a) control_bottom_pane_stacon_ParamLimits

0x75ff,	// (0x0004982a) control_bottom_pane_stacon

0x7622,	// (0x0004984d) navi_pane_stacon_ParamLimits

0x7622,	// (0x0004984d) navi_pane_stacon

0x4a1b,	// (0x00046c46) stacon_bottom_pane_g1_ParamLimits

0x4a1b,	// (0x00046c46) stacon_bottom_pane_g1

0x702b,	// (0x00049256) aid_levels_signal_lsc_ParamLimits

0x702b,	// (0x00049256) aid_levels_signal_lsc

0x7041,	// (0x0004926c) signal_pane_stacon_g1_ParamLimits

0x7041,	// (0x0004926c) signal_pane_stacon_g1

0x7055,	// (0x00049280) signal_pane_stacon_g2_ParamLimits

0x7055,	// (0x00049280) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x000518f4) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x000518f4) signal_pane_stacon_g

0x708a,	// (0x000492b5) title_pane_stacon_t1_ParamLimits

0x708a,	// (0x000492b5) title_pane_stacon_t1

0x0f75,	// (0x000431a0) uni_indicator_pane_stacon_g1

0x0f7f,	// (0x000431aa) uni_indicator_pane_stacon_g2

0x0f61,	// (0x0004318c) uni_indicator_pane_stacon_g3

0x0f6b,	// (0x00043196) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x00051900) uni_indicator_pane_stacon_g

0x70af,	// (0x000492da) control_top_pane_stacon_g1

0x70b7,	// (0x000492e2) control_top_pane_stacon_t1_ParamLimits

0x70b7,	// (0x000492e2) control_top_pane_stacon_t1

0x70ee,	// (0x00049319) aid_levels_battery_lsc_ParamLimits

0x70ee,	// (0x00049319) aid_levels_battery_lsc

0x7105,	// (0x00049330) battery_pane_stacon_g1_ParamLimits

0x7105,	// (0x00049330) battery_pane_stacon_g1

0x7118,	// (0x00049343) battery_pane_stacon_g2_ParamLimits

0x7118,	// (0x00049343) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x00051909) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x00051909) battery_pane_stacon_g

0x7156,	// (0x00049381) navi_icon_pane_stacon

0x716a,	// (0x00049395) navi_navi_pane_stacon

0x7156,	// (0x00049381) navi_text_pane_stacon

0x70af,	// (0x000492da) control_bottom_pane_stacon_g1

0x717e,	// (0x000493a9) control_bottom_pane_stacon_t1_ParamLimits

0x717e,	// (0x000493a9) control_bottom_pane_stacon_t1

0x71b5,	// (0x000493e0) grid_app_pane_ParamLimits

0x71b5,	// (0x000493e0) grid_app_pane

0x71d9,	// (0x00049404) scroll_pane_cp15_ParamLimits

0x71d9,	// (0x00049404) scroll_pane_cp15

0x71ec,	// (0x00049417) cell_app_pane_ParamLimits

0x71ec,	// (0x00049417) cell_app_pane

0x7214,	// (0x0004943f) cell_app_pane_g1_ParamLimits

0x7214,	// (0x0004943f) cell_app_pane_g1

0x0fa3,	// (0x000431ce) cell_app_pane_g2_ParamLimits

0x0fa3,	// (0x000431ce) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x0005190e) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x0005190e) cell_app_pane_g

0x7238,	// (0x00049463) cell_app_pane_t1_ParamLimits

0x7238,	// (0x00049463) cell_app_pane_t1

0x0faf,	// (0x000431da) grid_highlight_pane_ParamLimits

0x0faf,	// (0x000431da) grid_highlight_pane

0x0d31,	// (0x00042f5c) cell_highlight_pane_g1

0x0d39,	// (0x00042f64) cell_highlight_pane_g2

0x0d41,	// (0x00042f6c) cell_highlight_pane_g3

0x0d49,	// (0x00042f74) cell_highlight_pane_g4

0x0d51,	// (0x00042f7c) cell_highlight_pane_g5

0x0d59,	// (0x00042f84) cell_highlight_pane_g6

0x0d61,	// (0x00042f8c) cell_highlight_pane_g7

0x0d69,	// (0x00042f94) cell_highlight_pane_g8

0x0d71,	// (0x00042f9c) cell_highlight_pane_g9

0x08be,	// (0x00042ae9) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x000518bc) cell_highlight_pane_g

0x0fc0,	// (0x000431eb) bg_scroll_pane

0x7262,	// (0x0004948d) scroll_handle_pane

0x1007,	// (0x00043232) scroll_bg_pane_g1

0x101c,	// (0x00043247) scroll_bg_pane_g2

0x1034,	// (0x0004325f) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x00051913) scroll_bg_pane_g

0x728b,	// (0x000494b6) scroll_handle_focus_pane_ParamLimits

0x728b,	// (0x000494b6) scroll_handle_focus_pane

0x1007,	// (0x00043232) scroll_handle_pane_g1

0x1049,	// (0x00043274) scroll_handle_pane_g2

0x1034,	// (0x0004325f) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x0005191a) scroll_handle_pane_g

0x0d82,	// (0x00042fad) bg_popup_sub_pane_cp21_ParamLimits

0x0d82,	// (0x00042fad) bg_popup_sub_pane_cp21

0x7298,	// (0x000494c3) popup_fep_japan_predictive_window_t1_ParamLimits

0x7298,	// (0x000494c3) popup_fep_japan_predictive_window_t1

0x72b2,	// (0x000494dd) popup_fep_japan_predictive_window_t2_ParamLimits

0x72b2,	// (0x000494dd) popup_fep_japan_predictive_window_t2

0x72e5,	// (0x00049510) popup_fep_japan_predictive_window_t3_ParamLimits

0x72e5,	// (0x00049510) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x00051921) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x00051921) popup_fep_japan_predictive_window_t

0x08c8,	// (0x00042af3) bg_popup_sub_pane_cp23

0x3488,	// (0x000456b3) listscroll_japin_cand_pane

0x105d,	// (0x00043288) popup_fep_japan_candidate_window_t1

0x106b,	// (0x00043296) candidate_pane_ParamLimits

0x106b,	// (0x00043296) candidate_pane

0x731c,	// (0x00049547) scroll_pane_cp30

0x107d,	// (0x000432a8) list_single_popup_jap_candidate_pane_ParamLimits

0x107d,	// (0x000432a8) list_single_popup_jap_candidate_pane

0x08c8,	// (0x00042af3) list_highlight_pane_cp30

0x1092,	// (0x000432bd) list_single_popup_jap_candidate_pane_t1

0x10a1,	// (0x000432cc) level_1_signal

0x10ae,	// (0x000432d9) level_2_signal

0x10bb,	// (0x000432e6) level_3_signal

0x10c8,	// (0x000432f3) level_4_signal

0x10d5,	// (0x00043300) level_5_signal

0x10e2,	// (0x0004330d) level_6_signal

0x10ef,	// (0x0004331a) level_7_signal

0x10a1,	// (0x000432cc) level_1_battery

0x10ae,	// (0x000432d9) level_2_battery

0x10bb,	// (0x000432e6) level_3_battery

0x10c8,	// (0x000432f3) level_4_battery

0x10d5,	// (0x00043300) level_5_battery

0x10e2,	// (0x0004330d) level_6_battery

0x10ef,	// (0x0004331a) level_7_battery

0x1114,	// (0x0004333f) list_menu_pane_ParamLimits

0x1114,	// (0x0004333f) list_menu_pane

0x112a,	// (0x00043355) scroll_pane_cp25_ParamLimits

0x112a,	// (0x00043355) scroll_pane_cp25

0x1143,	// (0x0004336e) list_double2_graphic_pane_cp2_ParamLimits

0x1143,	// (0x0004336e) list_double2_graphic_pane_cp2

0x1143,	// (0x0004336e) list_double2_large_graphic_pane_cp2_ParamLimits

0x1143,	// (0x0004336e) list_double2_large_graphic_pane_cp2

0x1143,	// (0x0004336e) list_double2_pane_cp2_ParamLimits

0x1143,	// (0x0004336e) list_double2_pane_cp2

0x1143,	// (0x0004336e) list_double_graphic_pane_cp2_ParamLimits

0x1143,	// (0x0004336e) list_double_graphic_pane_cp2

0x1143,	// (0x0004336e) list_double_large_graphic_pane_cp2_ParamLimits

0x1143,	// (0x0004336e) list_double_large_graphic_pane_cp2

0x1143,	// (0x0004336e) list_double_number_pane_cp2_ParamLimits

0x1143,	// (0x0004336e) list_double_number_pane_cp2

0x1143,	// (0x0004336e) list_double_pane_cp2_ParamLimits

0x1143,	// (0x0004336e) list_double_pane_cp2

0x7357,	// (0x00049582) list_single_2graphic_pane_cp2_ParamLimits

0x7357,	// (0x00049582) list_single_2graphic_pane_cp2

0x7357,	// (0x00049582) list_single_graphic_heading_pane_cp2_ParamLimits

0x7357,	// (0x00049582) list_single_graphic_heading_pane_cp2

0x7357,	// (0x00049582) list_single_graphic_pane_cp2_ParamLimits

0x7357,	// (0x00049582) list_single_graphic_pane_cp2

0x7357,	// (0x00049582) list_single_heading_pane_cp2_ParamLimits

0x7357,	// (0x00049582) list_single_heading_pane_cp2

0x1153,	// (0x0004337e) list_single_large_graphic_pane_cp2_ParamLimits

0x1153,	// (0x0004337e) list_single_large_graphic_pane_cp2

0x7357,	// (0x00049582) list_single_number_heading_pane_cp2_ParamLimits

0x7357,	// (0x00049582) list_single_number_heading_pane_cp2

0x7357,	// (0x00049582) list_single_number_pane_cp2_ParamLimits

0x7357,	// (0x00049582) list_single_number_pane_cp2

0x7357,	// (0x00049582) list_single_pane_cp2_ParamLimits

0x7357,	// (0x00049582) list_single_pane_cp2

0x116d,	// (0x00043398) bg_popup_sub_pane_cp22

0x742f,	// (0x0004965a) popup_side_volume_key_window_g1

0x7453,	// (0x0004967e) popup_side_volume_key_window_t1

0x746f,	// (0x0004969a) volume_small_pane_cp1

0x0916,	// (0x00042b41) bg_popup_sub_pane_cp24_ParamLimits

0x0916,	// (0x00042b41) bg_popup_sub_pane_cp24

0x1183,	// (0x000433ae) fep_china_uni_candidate_pane_ParamLimits

0x1183,	// (0x000433ae) fep_china_uni_candidate_pane

0x1197,	// (0x000433c2) fep_china_uni_entry_pane

0x11a7,	// (0x000433d2) popup_fep_china_uni_window_g1

0x7477,	// (0x000496a2) fep_china_uni_entry_pane_g1

0x747f,	// (0x000496aa) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x00051952) fep_china_uni_entry_pane_g

0x11c3,	// (0x000433ee) fep_entry_item_pane

0x11cd,	// (0x000433f8) fep_candidate_item_pane

0x7487,	// (0x000496b2) fep_china_uni_candidate_pane_g1

0x11d5,	// (0x00043400) fep_china_uni_candidate_pane_g2

0x11dd,	// (0x00043408) fep_china_uni_candidate_pane_g3

0x748f,	// (0x000496ba) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x00051957) fep_china_uni_candidate_pane_g

0x08be,	// (0x00042ae9) fep_entry_item_pane_g1

0x11e5,	// (0x00043410) fep_entry_item_pane_t1_ParamLimits

0x11e5,	// (0x00043410) fep_entry_item_pane_t1

0x11fb,	// (0x00043426) fep_candidate_item_pane_t1_ParamLimits

0x11fb,	// (0x00043426) fep_candidate_item_pane_t1

0x1210,	// (0x0004343b) fep_candidate_item_pane_t2_ParamLimits

0x1210,	// (0x0004343b) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x00051960) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x00051960) fep_candidate_item_pane_t

0x0924,	// (0x00042b4f) list_highlight_pane_cp31_ParamLimits

0x0924,	// (0x00042b4f) list_highlight_pane_cp31

0x1222,	// (0x0004344d) level_1_signal_lsc

0x122b,	// (0x00043456) level_2_signal_lsc

0x1234,	// (0x0004345f) level_3_signal_lsc

0x123d,	// (0x00043468) level_4_signal_lsc

0x1246,	// (0x00043471) level_5_signal_lsc

0x124f,	// (0x0004347a) level_6_signal_lsc

0x1258,	// (0x00043483) level_7_signal_lsc

0x1258,	// (0x00043483) level_1_battery_lsc

0x1261,	// (0x0004348c) level_2_battery_lsc

0x126a,	// (0x00043495) level_3_battery_lsc

0x1273,	// (0x0004349e) level_4_battery_lsc

0x127c,	// (0x000434a7) level_5_battery_lsc

0x1285,	// (0x000434b0) level_6_battery_lsc

0x1222,	// (0x0004344d) level_7_battery_lsc

0x128e,	// (0x000434b9) scroll_handle_focus_pane_g1

0x1297,	// (0x000434c2) scroll_handle_focus_pane_g2

0x12a0,	// (0x000434cb) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x00051965) scroll_handle_focus_pane_g

0x5ca4,	// (0x00047ecf) list_single_2graphic_pane_g1_ParamLimits

0x5ca4,	// (0x00047ecf) list_single_2graphic_pane_g1

0x6ea2,	// (0x000490cd) list_single_2graphic_pane_g2_ParamLimits

0x6ea2,	// (0x000490cd) list_single_2graphic_pane_g2

0x6e84,	// (0x000490af) list_single_2graphic_pane_g3_ParamLimits

0x6e84,	// (0x000490af) list_single_2graphic_pane_g3

0x7497,	// (0x000496c2) list_single_2graphic_pane_g4_ParamLimits

0x7497,	// (0x000496c2) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x0005196c) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x0005196c) list_single_2graphic_pane_g

0x5cb0,	// (0x00047edb) list_single_2graphic_pane_t1_ParamLimits

0x5cb0,	// (0x00047edb) list_single_2graphic_pane_t1

0x5cde,	// (0x00047f09) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5cde,	// (0x00047f09) list_double2_graphic_large_graphic_pane_g1

0x5874,	// (0x00047a9f) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x5874,	// (0x00047a9f) list_double2_graphic_large_graphic_pane_g2

0x6f12,	// (0x0004913d) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x6f12,	// (0x0004913d) list_double2_graphic_large_graphic_pane_g3

0x74a3,	// (0x000496ce) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x74a3,	// (0x000496ce) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x00051975) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x00051975) list_double2_graphic_large_graphic_pane_g

0x5cee,	// (0x00047f19) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5cee,	// (0x00047f19) list_double2_graphic_large_graphic_pane_t1

0x5d04,	// (0x00047f2f) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5d04,	// (0x00047f2f) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x0005197e) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x0005197e) list_double2_graphic_large_graphic_pane_t

0x7683,	// (0x000498ae) popup_fast_swap_window_ParamLimits

0x7683,	// (0x000498ae) popup_fast_swap_window

0x769f,	// (0x000498ca) popup_side_volume_key_window

0x4aa6,	// (0x00046cd1) stacon_top_pane

0x4ab0,	// (0x00046cdb) status_pane_ParamLimits

0x4ab0,	// (0x00046cdb) status_pane

0x76b9,	// (0x000498e4) status_small_pane

0x08c8,	// (0x00042af3) control_pane

0x08c8,	// (0x00042af3) stacon_bottom_pane

0x0cb9,	// (0x00042ee4) scroll_pane_cp121

0x0cb0,	// (0x00042edb) set_content_pane

0x74af,	// (0x000496da) bg_active_tab_pane_g1_cp1

0x74b8,	// (0x000496e3) bg_active_tab_pane_g2_cp1

0x74c1,	// (0x000496ec) bg_active_tab_pane_g3_cp1

0x74af,	// (0x000496da) bg_passive_tab_pane_g1_cp1

0x74b8,	// (0x000496e3) bg_passive_tab_pane_g2_cp1

0x74c1,	// (0x000496ec) bg_passive_tab_pane_g3_cp1

0x74ca,	// (0x000496f5) bg_active_tab_pane_g1_cp2

0x74b8,	// (0x000496e3) bg_active_tab_pane_g2_cp2

0x74d3,	// (0x000496fe) bg_active_tab_pane_g3_cp2

0x74ca,	// (0x000496f5) bg_passive_tab_pane_g1_cp2

0x74b8,	// (0x000496e3) bg_passive_tab_pane_g2_cp2

0x74d3,	// (0x000496fe) bg_passive_tab_pane_g3_cp2

0x74dc,	// (0x00049707) bg_active_tab_pane_g1_cp3

0x74b8,	// (0x000496e3) bg_active_tab_pane_g2_cp3

0x74e5,	// (0x00049710) bg_active_tab_pane_g3_cp3

0x74dc,	// (0x00049707) bg_passive_tab_pane_g1_cp3

0x74b8,	// (0x000496e3) bg_passive_tab_pane_g2_cp3

0x74e5,	// (0x00049710) bg_passive_tab_pane_g3_cp3

0x74ee,	// (0x00049719) bg_active_tab_pane_g1_cp4

0x74b8,	// (0x000496e3) bg_active_tab_pane_g2_cp4

0x74f9,	// (0x00049724) bg_active_tab_pane_g3_cp4

0x74ee,	// (0x00049719) bg_passive_tab_pane_g1_cp4

0x74b8,	// (0x000496e3) bg_passive_tab_pane_g2_cp4

0x74f9,	// (0x00049724) bg_passive_tab_pane_g3_cp4

0x7645,	// (0x00049870) bg_active_tab_pane_g1_cp5

0x74b8,	// (0x000496e3) bg_active_tab_pane_g2_cp5

0x764e,	// (0x00049879) bg_active_tab_pane_g3_cp5

0x7645,	// (0x00049870) bg_passive_tab_pane_g1_cp5

0x74b8,	// (0x000496e3) bg_passive_tab_pane_g2_cp5

0x764e,	// (0x00049879) bg_passive_tab_pane_g3_cp5

0x7657,	// (0x00049882) list_set_graphic_pane_ParamLimits

0x7657,	// (0x00049882) list_set_graphic_pane

0x08c8,	// (0x00042af3) bg_set_opt_pane_cp4

0x4a37,	// (0x00046c62) list_set_graphic_pane_g1_ParamLimits

0x4a37,	// (0x00046c62) list_set_graphic_pane_g1

0x4a43,	// (0x00046c6e) list_set_graphic_pane_g2_ParamLimits

0x4a43,	// (0x00046c6e) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x00051983) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x00051983) list_set_graphic_pane_g

0x0009,

0xfae2,	// (0x00051d0d) volume_small_pane_cp_g

0x7677,	// (0x000498a2) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x7677,	// (0x000498a2) list_double2_large_graphic_pane_g1_cp2

0x4a65,	// (0x00046c90) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x4a65,	// (0x00046c90) list_double2_large_graphic_pane_g2_cp2

0x4a76,	// (0x00046ca1) list_double2_large_graphic_pane_g3_cp2

0x4a7e,	// (0x00046ca9) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4a7e,	// (0x00046ca9) list_double2_large_graphic_pane_t1_cp2

0x4a94,	// (0x00046cbf) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4a94,	// (0x00046cbf) list_double2_large_graphic_pane_t2_cp2

0xadf5,	// (0x0004d020) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xadf5,	// (0x0004d020) list_double_large_graphic_pane_g1_cp2

0xae06,	// (0x0004d031) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xae06,	// (0x0004d031) list_double_large_graphic_pane_g2_cp2

0x4bc0,	// (0x00046deb) list_double_large_graphic_pane_g3_cp2

0xae17,	// (0x0004d042) list_double_large_graphic_pane_g4_cp

0xae1f,	// (0x0004d04a) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xae1f,	// (0x0004d04a) list_double_large_graphic_pane_t1_cp2

0xae36,	// (0x0004d061) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xae36,	// (0x0004d061) list_double_large_graphic_pane_t2_cp2

0x4abe,	// (0x00046ce9) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4abe,	// (0x00046ce9) list_double2_graphic_pane_g1_cp2

0x4acc,	// (0x00046cf7) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4acc,	// (0x00046cf7) list_double2_graphic_pane_g2_cp2

0x4add,	// (0x00046d08) list_double2_graphic_pane_g3_cp2

0x4ae7,	// (0x00046d12) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4ae7,	// (0x00046d12) list_double2_graphic_pane_t1_cp2

0x4afd,	// (0x00046d28) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4afd,	// (0x00046d28) list_double2_graphic_pane_t2_cp2

0x12a9,	// (0x000434d4) list_single_number_heading_pane_g1_cp2_ParamLimits

0x12a9,	// (0x000434d4) list_single_number_heading_pane_g1_cp2

0x4b0f,	// (0x00046d3a) list_single_number_heading_pane_g2_cp2

0x4b17,	// (0x00046d42) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4b17,	// (0x00046d42) list_single_number_heading_pane_t1_cp2

0x4b2d,	// (0x00046d58) list_single_number_heading_pane_t2_cp2_ParamLimits

0x4b2d,	// (0x00046d58) list_single_number_heading_pane_t2_cp2

0x4b3f,	// (0x00046d6a) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4b3f,	// (0x00046d6a) list_single_number_heading_pane_t3_cp2

0x12a9,	// (0x000434d4) list_single_heading_pane_g1_cp2_ParamLimits

0x12a9,	// (0x000434d4) list_single_heading_pane_g1_cp2

0x4b0f,	// (0x00046d3a) list_single_heading_pane_g2_cp2

0x4b17,	// (0x00046d42) list_single_heading_pane_t1_cp2_ParamLimits

0x4b17,	// (0x00046d42) list_single_heading_pane_t1_cp2

0xabff,	// (0x0004ce2a) list_single_heading_pane_t2_cp2_ParamLimits

0xabff,	// (0x0004ce2a) list_single_heading_pane_t2_cp2

0xab47,	// (0x0004cd72) list_double_graphic_pane_g1_cp2_ParamLimits

0xab47,	// (0x0004cd72) list_double_graphic_pane_g1_cp2

0xab53,	// (0x0004cd7e) list_double_graphic_pane_g2_cp2_ParamLimits

0xab53,	// (0x0004cd7e) list_double_graphic_pane_g2_cp2

0xab62,	// (0x0004cd8d) list_double_graphic_pane_g3_cp2

0xab6a,	// (0x0004cd95) list_double_graphic_pane_t1_cp2_ParamLimits

0xab6a,	// (0x0004cd95) list_double_graphic_pane_t1_cp2

0xab80,	// (0x0004cdab) list_double_graphic_pane_t2_cp2_ParamLimits

0xab80,	// (0x0004cdab) list_double_graphic_pane_t2_cp2

0x4bb4,	// (0x00046ddf) list_double_number_pane_g1_cp2_ParamLimits

0x4bb4,	// (0x00046ddf) list_double_number_pane_g1_cp2

0x4bc0,	// (0x00046deb) list_double_number_pane_g2_cp2

0xab0b,	// (0x0004cd36) list_double_number_pane_t1_cp2_ParamLimits

0xab0b,	// (0x0004cd36) list_double_number_pane_t1_cp2

0xab1f,	// (0x0004cd4a) list_double_number_pane_t2_cp2_ParamLimits

0xab1f,	// (0x0004cd4a) list_double_number_pane_t2_cp2

0xab35,	// (0x0004cd60) list_double_number_pane_t3_cp2_ParamLimits

0xab35,	// (0x0004cd60) list_double_number_pane_t3_cp2

0xa9f4,	// (0x0004cc1f) list_single_graphic_pane_g1_cp2_ParamLimits

0xa9f4,	// (0x0004cc1f) list_single_graphic_pane_g1_cp2

0x4c10,	// (0x00046e3b) list_single_graphic_pane_g2_cp2_ParamLimits

0x4c10,	// (0x00046e3b) list_single_graphic_pane_g2_cp2

0x4c1c,	// (0x00046e47) list_single_graphic_pane_g3_cp2

0xa9ca,	// (0x0004cbf5) list_single_graphic_pane_t1_cp2_ParamLimits

0xa9ca,	// (0x0004cbf5) list_single_graphic_pane_t1_cp2

0x4c10,	// (0x00046e3b) list_single_number_pane_g1_cp2_ParamLimits

0x4c10,	// (0x00046e3b) list_single_number_pane_g1_cp2

0x4c1c,	// (0x00046e47) list_single_number_pane_g2_cp2

0xa9ca,	// (0x0004cbf5) list_single_number_pane_t1_cp2_ParamLimits

0xa9ca,	// (0x0004cbf5) list_single_number_pane_t1_cp2

0xa9e0,	// (0x0004cc0b) list_single_number_pane_t2_cp2_ParamLimits

0xa9e0,	// (0x0004cc0b) list_single_number_pane_t2_cp2

0x4a65,	// (0x00046c90) list_double2_pane_g1_cp2_ParamLimits

0x4a65,	// (0x00046c90) list_double2_pane_g1_cp2

0x4a76,	// (0x00046ca1) list_double2_pane_g2_cp2

0x4b8c,	// (0x00046db7) list_double2_pane_t1_cp2_ParamLimits

0x4b8c,	// (0x00046db7) list_double2_pane_t1_cp2

0x4ba2,	// (0x00046dcd) list_double2_pane_t2_cp2_ParamLimits

0x4ba2,	// (0x00046dcd) list_double2_pane_t2_cp2

0x4bb4,	// (0x00046ddf) list_double_pane_g1_cp2_ParamLimits

0x4bb4,	// (0x00046ddf) list_double_pane_g1_cp2

0x4bc0,	// (0x00046deb) list_double_pane_g2_cp2

0x4bc8,	// (0x00046df3) list_double_pane_t1_cp2_ParamLimits

0x4bc8,	// (0x00046df3) list_double_pane_t1_cp2

0x4bde,	// (0x00046e09) list_double_pane_t2_cp2_ParamLimits

0x4bde,	// (0x00046e09) list_double_pane_t2_cp2

0x76c4,	// (0x000498ef) list_single_pane_cp2_g3

0x4c10,	// (0x00046e3b) list_single_pane_g1_cp2_ParamLimits

0x4c10,	// (0x00046e3b) list_single_pane_g1_cp2

0x4c1c,	// (0x00046e47) list_single_pane_g2_cp2

0x4c24,	// (0x00046e4f) list_single_pane_t1_cp2_ParamLimits

0x4c24,	// (0x00046e4f) list_single_pane_t1_cp2

0x76cc,	// (0x000498f7) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x76cc,	// (0x000498f7) list_single_large_graphic_pane_g1_cp2

0x76d8,	// (0x00049903) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x76d8,	// (0x00049903) list_single_large_graphic_pane_g2_cp2

0x76e4,	// (0x0004990f) list_single_large_graphic_pane_g3_cp2

0x76ec,	// (0x00049917) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x76ec,	// (0x00049917) list_single_large_graphic_pane_g4_cp1

0x7706,	// (0x00049931) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x7706,	// (0x00049931) list_single_large_graphic_pane_t1_cp2

0xa996,	// (0x0004cbc1) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa996,	// (0x0004cbc1) list_single_graphic_heading_pane_g1_cp2

0xa963,	// (0x0004cb8e) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa963,	// (0x0004cb8e) list_single_graphic_heading_pane_g4_cp2

0x4c1c,	// (0x00046e47) list_single_graphic_heading_pane_g5_cp2

0xa9a2,	// (0x0004cbcd) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa9a2,	// (0x0004cbcd) list_single_graphic_heading_pane_t1_cp2

0xa9b8,	// (0x0004cbe3) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa9b8,	// (0x0004cbe3) list_single_graphic_heading_pane_t2_cp2

0xa957,	// (0x0004cb82) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa957,	// (0x0004cb82) list_single_2graphic_pane_g1_cp2

0xa963,	// (0x0004cb8e) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa963,	// (0x0004cb8e) list_single_2graphic_pane_g2_cp2

0x4c1c,	// (0x00046e47) list_single_2graphic_pane_g3_cp2

0xa974,	// (0x0004cb9f) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa974,	// (0x0004cb9f) list_single_2graphic_pane_g4_cp2

0xa980,	// (0x0004cbab) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa980,	// (0x0004cbab) list_single_2graphic_pane_t1_cp2

0x08be,	// (0x00042ae9) list_highlight_pane_g10_cp1

0xa53f,	// (0x0004c76a) list_highlight_pane_g1_cp1

0xa547,	// (0x0004c772) list_highlight_pane_g2_cp1

0xa54f,	// (0x0004c77a) list_highlight_pane_g3_cp1

0xa557,	// (0x0004c782) list_highlight_pane_g4_cp1

0xa55f,	// (0x0004c78a) list_highlight_pane_g5_cp1

0xa567,	// (0x0004c792) list_highlight_pane_g6_cp1

0xa56f,	// (0x0004c79a) list_highlight_pane_g7_cp1

0xa577,	// (0x0004c7a2) list_highlight_pane_g8_cp1

0xa57f,	// (0x0004c7aa) list_highlight_pane_g9_cp1

0xa467,	// (0x0004c692) form_field_slider_pane_t3

0xa475,	// (0x0004c6a0) form_field_slider_pane_t4

0xa483,	// (0x0004c6ae) slider_form_pane_ParamLimits

0xa483,	// (0x0004c6ae) slider_form_pane

0x08c8,	// (0x00042af3) control_abbreviations

0x08c8,	// (0x00042af3) control_conventions

0x08c8,	// (0x00042af3) control_definitions

0x08c8,	// (0x00042af3) format_table_attribute

0xac49,	// (0x0004ce74) bg_popup_preview_window_pane_g9

0x08c8,	// (0x00042af3) format_table_data2

0x08c8,	// (0x00042af3) format_table_data3

0x08c8,	// (0x00042af3) format_table_data_example

0x0008,

0x08c8,	// (0x00042af3) intro_purpose

0xf8f4,	// (0x00051b1f) bg_popup_preview_window_pane_g

0x08c8,	// (0x00042af3) texts_category

0x08c8,	// (0x00042af3) texts_graphics

0x771c,	// (0x00049947) text_digital

0x772b,	// (0x00049956) text_primary

0x773a,	// (0x00049965) text_primary_small

0x7749,	// (0x00049974) text_secondary

0x7758,	// (0x00049983) text_title

0xb34c,	// (0x0004d577) bg_passive_tab_pane_g1_cp3_srt

0x74b8,	// (0x000496e3) bg_passive_tab_pane_g2_cp3_srt

0xb355,	// (0x0004d580) bg_passive_tab_pane_g3_cp3_srt

0x0924,	// (0x00042b4f) bg_active_tab_pane_cp3_srt_ParamLimits

0x0924,	// (0x00042b4f) bg_active_tab_pane_cp3_srt

0xb35e,	// (0x0004d589) tabs_4_active_pane_srt_g1

0xb366,	// (0x0004d591) tabs_4_active_pane_srt_t1_ParamLimits

0xb366,	// (0x0004d591) tabs_4_active_pane_srt_t1

0xb34c,	// (0x0004d577) bg_active_tab_pane_g1_cp3_copy1

0x74b8,	// (0x000496e3) bg_active_tab_pane_g2_cp3_copy1

0xb355,	// (0x0004d580) bg_active_tab_pane_g3_cp3_copy1

0x0924,	// (0x00042b4f) tabs_2_long_active_pane_srt_ParamLimits

0x0924,	// (0x00042b4f) tabs_2_long_active_pane_srt

0x0924,	// (0x00042b4f) tabs_2_long_passive_pane_srt_ParamLimits

0x0924,	// (0x00042b4f) tabs_2_long_passive_pane_srt

0x6ff3,	// (0x0004921e) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6ff3,	// (0x0004921e) bg_passive_tab_pane_cp4_srt

0xb077,	// (0x0004d2a2) bg_passive_tab_pane_g1_cp4_srt

0x74b8,	// (0x000496e3) bg_passive_tab_pane_g2_cp4_srt

0xb080,	// (0x0004d2ab) bg_passive_tab_pane_g3_cp4_srt

0x20e0,	// (0x0004430b) bg_active_tab_pane_cp4_srt_ParamLimits

0x20e0,	// (0x0004430b) bg_active_tab_pane_cp4_srt

0xb089,	// (0x0004d2b4) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb089,	// (0x0004d2b4) tabs_2_long_active_pane_srt_t1

0xb077,	// (0x0004d2a2) bg_active_tab_pane_g1_cp4_srt

0x74b8,	// (0x000496e3) bg_active_tab_pane_g2_cp4_srt

0xb080,	// (0x0004d2ab) bg_active_tab_pane_g3_cp4_srt

0x0916,	// (0x00042b41) tabs_3_long_active_pane_srt_ParamLimits

0x0916,	// (0x00042b41) tabs_3_long_active_pane_srt

0x0916,	// (0x00042b41) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x0916,	// (0x00042b41) tabs_3_long_passive_pane_cp_srt

0x0916,	// (0x00042b41) tabs_3_long_passive_pane_srt_ParamLimits

0x0916,	// (0x00042b41) tabs_3_long_passive_pane_srt

0x6ff3,	// (0x0004921e) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6ff3,	// (0x0004921e) bg_passive_tab_pane_cp5_srt

0x7645,	// (0x00049870) bg_passive_tab_pane_g1_cp5_srt

0x74b8,	// (0x000496e3) bg_passive_tab_pane_g2_cp5_srt

0x764e,	// (0x00049879) bg_passive_tab_pane_g3_cp5_srt

0x20e0,	// (0x0004430b) bg_active_tab_pane_cp5_srt_ParamLimits

0x20e0,	// (0x0004430b) bg_active_tab_pane_cp5_srt

0xb065,	// (0x0004d290) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb065,	// (0x0004d290) tabs_3_long_active_pane_srt_t1

0x7645,	// (0x00049870) bg_active_tab_pane_g1_cp5_srt

0x74b8,	// (0x000496e3) bg_active_tab_pane_g2_cp5_srt

0x764e,	// (0x00049879) bg_active_tab_pane_g3_cp5_srt

0xb057,	// (0x0004d282) navi_text_pane_srt_t1

0xb04f,	// (0x0004d27a) navi_icon_pane_srt_g1

0x96a3,	// (0x0004b8ce) midp_editing_number_pane_srt

0x7767,	// (0x00049992) midp_ticker_pane_srt

0x96ab,	// (0x0004b8d6) midp_ticker_pane_srt_g1

0x96b3,	// (0x0004b8de) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x000519a2) midp_ticker_pane_srt_g

0x96bb,	// (0x0004b8e6) midp_ticker_pane_srt_t1

0xb040,	// (0x0004d26b) midp_editing_number_pane_t1_copy1

0x6ff3,	// (0x0004921e) listscroll_midp_pane

0x6ff3,	// (0x0004921e) midp_form_pane

0x955b,	// (0x0004b786) midp_info_popup_window_ParamLimits

0x955b,	// (0x0004b786) midp_info_popup_window

0x0d82,	// (0x00042fad) bg_popup_sub_pane_cp50_ParamLimits

0x0d82,	// (0x00042fad) bg_popup_sub_pane_cp50

0xa187,	// (0x0004c3b2) listscroll_midp_info_pane_ParamLimits

0xa187,	// (0x0004c3b2) listscroll_midp_info_pane

0xa16f,	// (0x0004c39a) listscroll_form_midp_pane_ParamLimits

0xa16f,	// (0x0004c39a) listscroll_form_midp_pane

0xa17b,	// (0x0004c3a6) scroll_bar_cp050

0xa14f,	// (0x0004c37a) list_midp_pane

0xbd93,	// (0x0004dfbe) signal_pane_g2_cp

0xa089,	// (0x0004c2b4) listscroll_midp_info_pane_t1_ParamLimits

0xa089,	// (0x0004c2b4) listscroll_midp_info_pane_t1

0xa0a1,	// (0x0004c2cc) listscroll_midp_info_pane_t2_ParamLimits

0xa0a1,	// (0x0004c2cc) listscroll_midp_info_pane_t2

0xa0df,	// (0x0004c30a) listscroll_midp_info_pane_t3_ParamLimits

0xa0df,	// (0x0004c30a) listscroll_midp_info_pane_t3

0xa119,	// (0x0004c344) listscroll_midp_info_pane_t4_ParamLimits

0xa119,	// (0x0004c344) listscroll_midp_info_pane_t4

0x0003,

0xf82f,	// (0x00051a5a) listscroll_midp_info_pane_t_ParamLimits

0xf82f,	// (0x00051a5a) listscroll_midp_info_pane_t

0x0df8,	// (0x00043023) scroll_pane_cp21

0xa029,	// (0x0004c254) form_midp_field_choice_group_pane

0xa032,	// (0x0004c25d) form_midp_field_text_pane

0xa06f,	// (0x0004c29a) form_midp_field_time_pane

0xa077,	// (0x0004c2a2) form_midp_gauge_slider_pane

0xa080,	// (0x0004c2ab) form_midp_gauge_wait_pane

0x08c8,	// (0x00042af3) form_midp_image_pane

0x5e5f,	// (0x0004808a) list_single_midp_pane_ParamLimits

0x5e5f,	// (0x0004808a) list_single_midp_pane

0x9fde,	// (0x0004c209) form_midp_field_text_pane_t1

0x9da8,	// (0x0004bfd3) input_focus_pane_cp050

0xa018,	// (0x0004c243) list_midp_form_text_pane

0x9fad,	// (0x0004c1d8) form_midp_field_choice_group_pane_t1

0x9fbb,	// (0x0004c1e6) input_focus_pane_cp051

0x9fcf,	// (0x0004c1fa) list_midp_choice_pane

0x08c8,	// (0x00042af3) status_idle_pane

0x9f91,	// (0x0004c1bc) form_midp_field_time_pane_t1

0x08be,	// (0x00042ae9) wait_anim_pane_g2_copy1

0x9f9f,	// (0x0004c1ca) form_midp_field_time_pane_t2

0x0001,

0x960b,	// (0x0004b836) aid_navinavi_width_2_pane

0xf82a,	// (0x00051a55) form_midp_field_time_pane_t

0x08c8,	// (0x00042af3) input_focus_pane_cp052

0x08c8,	// (0x00042af3) bg_input_focus_pane_cp040

0x9f51,	// (0x0004c17c) form_midp_gauge_slider_pane_t1

0x9f5f,	// (0x0004c18a) form_midp_gauge_slider_pane_t2

0x9f6d,	// (0x0004c198) form_midp_gauge_slider_pane_t3

0x9f7b,	// (0x0004c1a6) form_midp_gauge_slider_pane_t4

0x0003,

0xf821,	// (0x00051a4c) form_midp_gauge_slider_pane_t

0x9f89,	// (0x0004c1b4) form_midp_slider_pane

0x0924,	// (0x00042b4f) bg_input_focus_pane_cp041_ParamLimits

0x0924,	// (0x00042b4f) bg_input_focus_pane_cp041

0x9f1e,	// (0x0004c149) form_midp_gauge_wait_pane_t1_ParamLimits

0x9f1e,	// (0x0004c149) form_midp_gauge_wait_pane_t1

0x9f30,	// (0x0004c15b) form_midp_gauge_wait_pane_t2_ParamLimits

0x9f30,	// (0x0004c15b) form_midp_gauge_wait_pane_t2

0x0001,

0xf81c,	// (0x00051a47) form_midp_gauge_wait_pane_t_ParamLimits

0xf81c,	// (0x00051a47) form_midp_gauge_wait_pane_t

0x9f42,	// (0x0004c16d) form_midp_wait_pane_ParamLimits

0x9f42,	// (0x0004c16d) form_midp_wait_pane

0x9ee8,	// (0x0004c113) form_midp_image_pane_g1

0x9ef1,	// (0x0004c11c) form_midp_image_pane_t1

0x9f00,	// (0x0004c12b) form_midp_image_pane_t2

0x9f0f,	// (0x0004c13a) form_midp_image_pane_t3

0x0002,

0xf815,	// (0x00051a40) form_midp_image_pane_t

0x9edf,	// (0x0004c10a) list_single_midp_pane_g1

0x5e50,	// (0x0004807b) list_single_midp_pane_t1

0x9eb6,	// (0x0004c0e1) list_midp_form_item_pane_ParamLimits

0x9eb6,	// (0x0004c0e1) list_midp_form_item_pane

0x95b3,	// (0x0004b7de) list_midp_form_item_pane_t1

0x95c2,	// (0x0004b7ed) midp_ticker_pane_g1

0x95ce,	// (0x0004b7f9) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x00051988) midp_ticker_pane_g

0x95da,	// (0x0004b805) midp_ticker_pane_t1

0xb291,	// (0x0004d4bc) midp_editing_number_pane_t1

0xb26f,	// (0x0004d49a) midp_editing_number_pane

0xb27e,	// (0x0004d4a9) midp_ticker_pane

0xb030,	// (0x0004d25b) ai_message_heading_pane

0x08c8,	// (0x00042af3) bg_popup_window_pane_cp14

0xb038,	// (0x0004d263) listscroll_ai_message_pane

0xafba,	// (0x0004d1e5) ai_message_heading_pane_g1_ParamLimits

0xafba,	// (0x0004d1e5) ai_message_heading_pane_g1

0xafc6,	// (0x0004d1f1) ai_message_heading_pane_g2_ParamLimits

0xafc6,	// (0x0004d1f1) ai_message_heading_pane_g2

0xafd2,	// (0x0004d1fd) ai_message_heading_pane_g3_ParamLimits

0xafd2,	// (0x0004d1fd) ai_message_heading_pane_g3

0xafde,	// (0x0004d209) ai_message_heading_pane_g4_ParamLimits

0xafde,	// (0x0004d209) ai_message_heading_pane_g4

0x0003,

0xf956,	// (0x00051b81) ai_message_heading_pane_g_ParamLimits

0xf956,	// (0x00051b81) ai_message_heading_pane_g

0xafea,	// (0x0004d215) ai_message_heading_pane_t1_ParamLimits

0xafea,	// (0x0004d215) ai_message_heading_pane_t1

0xb004,	// (0x0004d22f) ai_message_heading_pane_t2_ParamLimits

0xb004,	// (0x0004d22f) ai_message_heading_pane_t2

0x0001,

0xf95f,	// (0x00051b8a) ai_message_heading_pane_t_ParamLimits

0xf95f,	// (0x00051b8a) ai_message_heading_pane_t

0xb016,	// (0x0004d241) bg_popup_heading_pane_cp1_ParamLimits

0xb016,	// (0x0004d241) bg_popup_heading_pane_cp1

0xafa8,	// (0x0004d1d3) list_ai_message_pane_ParamLimits

0xafa8,	// (0x0004d1d3) list_ai_message_pane

0x0df8,	// (0x00043023) scroll_pane_cp10

0xaf44,	// (0x0004d16f) list_ai_message_pane_g1

0xaf4c,	// (0x0004d177) list_ai_message_pane_g2

0x0001,

0xf933,	// (0x00051b5e) list_ai_message_pane_g

0xaf54,	// (0x0004d17f) list_ai_message_pane_t1_ParamLimits

0xaf54,	// (0x0004d17f) list_ai_message_pane_t1

0xaf69,	// (0x0004d194) list_ai_message_pane_t2_ParamLimits

0xaf69,	// (0x0004d194) list_ai_message_pane_t2

0xaf7e,	// (0x0004d1a9) list_ai_message_pane_t3_ParamLimits

0xaf7e,	// (0x0004d1a9) list_ai_message_pane_t3

0xaf93,	// (0x0004d1be) list_ai_message_pane_t4_ParamLimits

0xaf93,	// (0x0004d1be) list_ai_message_pane_t4

0x0003,

0xf938,	// (0x00051b63) list_ai_message_pane_t_ParamLimits

0xf938,	// (0x00051b63) list_ai_message_pane_t

0xaf2f,	// (0x0004d15a) cell_ai_soft_ind_pane_ParamLimits

0xaf2f,	// (0x0004d15a) cell_ai_soft_ind_pane

0x95ec,	// (0x0004b817) cell_ai_soft_ind_pane_g1_ParamLimits

0x95ec,	// (0x0004b817) cell_ai_soft_ind_pane_g1

0x08c8,	// (0x00042af3) grid_highlight_cp1

0x95f9,	// (0x0004b824) text_secondary_cp56_ParamLimits

0x95f9,	// (0x0004b824) text_secondary_cp56

0xaf04,	// (0x0004d12f) example_general_pane_ParamLimits

0xaf04,	// (0x0004d12f) example_general_pane

0xaf10,	// (0x0004d13b) example_parent_pane_g1_ParamLimits

0xaf10,	// (0x0004d13b) example_parent_pane_g1

0xaf1c,	// (0x0004d147) example_parent_pane_t1_ParamLimits

0xaf1c,	// (0x0004d147) example_parent_pane_t1

0x7d79,	// (0x00049fa4) popup_preview_text_window_ParamLimits

0x7d79,	// (0x00049fa4) popup_preview_text_window

0x4c08,	// (0x00046e33) list_single_pane_cp2_g4

0x0af6,	// (0x00042d21) bg_popup_preview_window_pane_ParamLimits

0x0af6,	// (0x00042d21) bg_popup_preview_window_pane

0xac51,	// (0x0004ce7c) popup_preview_text_window_t1_ParamLimits

0xac51,	// (0x0004ce7c) popup_preview_text_window_t1

0xac6f,	// (0x0004ce9a) popup_preview_text_window_t2_ParamLimits

0xac6f,	// (0x0004ce9a) popup_preview_text_window_t2

0xacb8,	// (0x0004cee3) popup_preview_text_window_t3_ParamLimits

0xacb8,	// (0x0004cee3) popup_preview_text_window_t3

0xacfd,	// (0x0004cf28) popup_preview_text_window_t4_ParamLimits

0xacfd,	// (0x0004cf28) popup_preview_text_window_t4

0x0004,

0xf907,	// (0x00051b32) popup_preview_text_window_t_ParamLimits

0xf907,	// (0x00051b32) popup_preview_text_window_t

0xad7b,	// (0x0004cfa6) scroll_pane_cp11

0x9d34,	// (0x0004bf5f) bg_popup_preview_window_pane_g1

0xac11,	// (0x0004ce3c) bg_popup_preview_window_pane_g2

0xac19,	// (0x0004ce44) bg_popup_preview_window_pane_g3

0xac21,	// (0x0004ce4c) bg_popup_preview_window_pane_g4

0xac29,	// (0x0004ce54) bg_popup_preview_window_pane_g5

0xac31,	// (0x0004ce5c) bg_popup_preview_window_pane_g6

0xac39,	// (0x0004ce64) bg_popup_preview_window_pane_g7

0xac41,	// (0x0004ce6c) bg_popup_preview_window_pane_g8

0x64e2,	// (0x0004870d) aid_popup_width_pane

0x7d57,	// (0x00049f82) popup_midp_note_alarm_window_ParamLimits

0x7d57,	// (0x00049f82) popup_midp_note_alarm_window

0x0cca,	// (0x00042ef5) data_form_pane_ParamLimits

0x5b09,	// (0x00047d34) form_field_data_pane_g1

0x5b13,	// (0x00047d3e) form_field_data_pane_t1_ParamLimits

0x0cd6,	// (0x00042f01) input_focus_pane_ParamLimits

0x5b2b,	// (0x00047d56) data_form_wide_pane_ParamLimits

0x5b3c,	// (0x00047d67) form_field_data_wide_pane_g1

0x5b48,	// (0x00047d73) form_field_data_wide_pane_t1_ParamLimits

0x0bca,	// (0x00042df5) input_focus_pane_cp6_ParamLimits

0x6f97,	// (0x000491c2) input_popup_find_pane_g1_ParamLimits

0x6f97,	// (0x000491c2) input_popup_find_pane_g1

0x7129,	// (0x00049354) aid_navi_side_left_pane

0x713e,	// (0x00049369) aid_navi_side_right_pane

0xa63a,	// (0x0004c865) bg_popup_window_pane_cp30_ParamLimits

0xa63a,	// (0x0004c865) bg_popup_window_pane_cp30

0xa6b4,	// (0x0004c8df) popup_midp_note_alarm_window_g1_ParamLimits

0xa6b4,	// (0x0004c8df) popup_midp_note_alarm_window_g1

0xa6e4,	// (0x0004c90f) popup_midp_note_alarm_window_t1_ParamLimits

0xa6e4,	// (0x0004c90f) popup_midp_note_alarm_window_t1

0xa785,	// (0x0004c9b0) popup_midp_note_alarm_window_t2_ParamLimits

0xa785,	// (0x0004c9b0) popup_midp_note_alarm_window_t2

0xa833,	// (0x0004ca5e) popup_midp_note_alarm_window_t3_ParamLimits

0xa833,	// (0x0004ca5e) popup_midp_note_alarm_window_t3

0xa85b,	// (0x0004ca86) popup_midp_note_alarm_window_t4_ParamLimits

0xa85b,	// (0x0004ca86) popup_midp_note_alarm_window_t4

0xa87b,	// (0x0004caa6) popup_midp_note_alarm_window_t5_ParamLimits

0xa87b,	// (0x0004caa6) popup_midp_note_alarm_window_t5

0x000a,

0xf8a4,	// (0x00051acf) popup_midp_note_alarm_window_t_ParamLimits

0xf8a4,	// (0x00051acf) popup_midp_note_alarm_window_t

0xa927,	// (0x0004cb52) wait_bar_pane_cp1_ParamLimits

0xa927,	// (0x0004cb52) wait_bar_pane_cp1

0x08c8,	// (0x00042af3) wait_anim_pane_copy1

0x08c8,	// (0x00042af3) wait_border_pane_copy1

0xa330,	// (0x0004c55b) wait_border_pane_g1_copy1

0x5b62,	// (0x00047d8d) form_field_popup_pane_g1

0x5b6a,	// (0x00047d95) form_field_popup_pane_t1_ParamLimits

0x0cd6,	// (0x00042f01) input_focus_pane_cp7_ParamLimits

0x0d04,	// (0x00042f2f) list_form_pane_ParamLimits

0x5b82,	// (0x00047dad) form_field_popup_wide_pane_g1

0x5b8a,	// (0x00047db5) form_field_popup_wide_pane_t1_ParamLimits

0x0cd6,	// (0x00042f01) input_focus_pane_cp8_ParamLimits

0x0d10,	// (0x00042f3b) list_form_wide_pane_ParamLimits

0xb3e4,	// (0x0004d60f) aid_size_cell_graphic_pane

0x5c14,	// (0x00047e3f) data_form_pane_t1_ParamLimits

0x5eb5,	// (0x000480e0) data_form_wide_pane_t1_ParamLimits

0x98fe,	// (0x0004bb29) bg_status_flat_pane

0x68e1,	// (0x00048b0c) title_pane_t1_ParamLimits

0x08de,	// (0x00042b09) title_pane_t2_ParamLimits

0x0904,	// (0x00042b2f) title_pane_t3_ParamLimits

0xf557,	// (0x00051782) title_pane_t_ParamLimits

0x10a1,	// (0x000432cc) level_1_signal_ParamLimits

0x10ae,	// (0x000432d9) level_2_signal_ParamLimits

0x10bb,	// (0x000432e6) level_3_signal_ParamLimits

0x10c8,	// (0x000432f3) level_4_signal_ParamLimits

0x10d5,	// (0x00043300) level_5_signal_ParamLimits

0x10e2,	// (0x0004330d) level_6_signal_ParamLimits

0x10ef,	// (0x0004331a) level_7_signal_ParamLimits

0x10a1,	// (0x000432cc) level_1_battery_ParamLimits

0x10ae,	// (0x000432d9) level_2_battery_ParamLimits

0x10bb,	// (0x000432e6) level_3_battery_ParamLimits

0x10c8,	// (0x000432f3) level_4_battery_ParamLimits

0x10d5,	// (0x00043300) level_5_battery_ParamLimits

0x10e2,	// (0x0004330d) level_6_battery_ParamLimits

0x10ef,	// (0x0004331a) level_7_battery_ParamLimits

0xa53f,	// (0x0004c76a) bg_status_flat_pane_g1

0xa547,	// (0x0004c772) bg_status_flat_pane_g2

0xa54f,	// (0x0004c77a) bg_status_flat_pane_g3

0xa557,	// (0x0004c782) bg_status_flat_pane_g4

0xa55f,	// (0x0004c78a) bg_status_flat_pane_g5

0xa567,	// (0x0004c792) bg_status_flat_pane_g6

0xa56f,	// (0x0004c79a) bg_status_flat_pane_g7

0x6951,	// (0x00048b7c) tabs_3_active_pane_t1_ParamLimits

0x6951,	// (0x00048b7c) tabs_3_passive_pane_t1_ParamLimits

0x696b,	// (0x00048b96) tabs_4_active_pane_t1_ParamLimits

0x696b,	// (0x00048b96) tabs_4_1_passive_pane_t1_ParamLimits

0x6fce,	// (0x000491f9) tabs_2_active_pane_t1_ParamLimits

0x6fce,	// (0x000491f9) tabs_2_passive_pane_t1_ParamLimits

0x20e0,	// (0x0004430b) bg_active_tab_pane_cp4_ParamLimits

0x6fe0,	// (0x0004920b) tabs_2_long_active_pane_t1_ParamLimits

0x6ff3,	// (0x0004921e) bg_passive_tab_pane_cp4_ParamLimits

0x801e,	// (0x0004a249) list_single_midp_graphic_pane_t1_ParamLimits

0x20e0,	// (0x0004430b) bg_active_tab_pane_cp5_ParamLimits

0x6fff,	// (0x0004922a) tabs_3_long_active_pane_t1_ParamLimits

0x6ff3,	// (0x0004921e) bg_passive_tab_pane_cp5_ParamLimits

0x801e,	// (0x0004a249) list_single_midp_graphic_pane_t1

0x98fe,	// (0x0004bb29) bg_status_flat_pane_ParamLimits

0x99c7,	// (0x0004bbf2) indicator_pane_cp2_ParamLimits

0x99c7,	// (0x0004bbf2) indicator_pane_cp2

0x9af2,	// (0x0004bd1d) navi_pane_srt_ParamLimits

0x9af2,	// (0x0004bd1d) navi_pane_srt

0x9b16,	// (0x0004bd41) popup_clock_digital_analogue_window_cp1

0x0968,	// (0x00042b93) indicator_pane_t1

0x7767,	// (0x00049992) copy_highlight_pane

0x7767,	// (0x00049992) cursor_graphics_pane

0x7767,	// (0x00049992) graphic_within_text_pane

0x7767,	// (0x00049992) link_highlight_pane

0xad3e,	// (0x0004cf69) popup_preview_text_window_t5_ParamLimits

0xad3e,	// (0x0004cf69) popup_preview_text_window_t5

0x9613,	// (0x0004b83e) cursor_digital_pane

0x9613,	// (0x0004b83e) cursor_primary_pane

0x9624,	// (0x0004b84f) cursor_primary_small_pane

0x962c,	// (0x0004b857) cursor_secondary_pane

0x9634,	// (0x0004b85f) cursor_title_pane

0x9613,	// (0x0004b83e) link_highlight_digital_pane

0x961b,	// (0x0004b846) link_highlight_primary_pane

0x9624,	// (0x0004b84f) link_highlight_primary_small_pane

0x962c,	// (0x0004b857) link_highlight_secondary_pane

0x9634,	// (0x0004b85f) link_highlight_title_pane

0x9613,	// (0x0004b83e) copy_highlight_digital_pane

0x9613,	// (0x0004b83e) copy_highlight_primary_pane

0x9624,	// (0x0004b84f) copy_highlight_primary_small_pane

0x962c,	// (0x0004b857) copy_highlight_secondary_pane

0x9634,	// (0x0004b85f) copy_highlight_title_pane

0x962c,	// (0x0004b857) graphic_text_digital_pane

0xa5dd,	// (0x0004c808) graphic_text_primary_pane

0xa5e6,	// (0x0004c811) graphic_text_primary_small_pane

0x9624,	// (0x0004b84f) graphic_text_secondary_pane

0x9613,	// (0x0004b83e) graphic_text_title_pane

0x963c,	// (0x0004b867) cursor_primary_pane_g1

0xa5cf,	// (0x0004c7fa) cursor_text_primary_t1

0xa5b7,	// (0x0004c7e2) cursor_primary_small_pane_g1

0xa5c1,	// (0x0004c7ec) cursor_text_primary_small_t1

0xa59f,	// (0x0004c7ca) cursor_primary_small_pane_g1_copy1

0xa5a9,	// (0x0004c7d4) cursor_text_primary_small_t1_copy1

0xa587,	// (0x0004c7b2) cursor_text_title_t1

0xa595,	// (0x0004c7c0) cursor_title_pane_g1

0x963c,	// (0x0004b867) cursor_digital_pane_g1

0x9646,	// (0x0004b871) cursor_text_digital_t1

0x9654,	// (0x0004b87f) link_highlight_primary_pane_g1

0xa530,	// (0x0004c75b) link_highlight_primary_pane_t1

0x9654,	// (0x0004b87f) link_highlight_primary_small_pane_g1

0x965c,	// (0x0004b887) link_highlight_primary_small_pane_t1

0x9654,	// (0x0004b87f) link_highlight_secondary_pane_g1

0x966b,	// (0x0004b896) link_highlight_secondary_pane_t1

0xa495,	// (0x0004c6c0) link_highlight_title_pane_g1

0xa4ac,	// (0x0004c6d7) link_highlight_title_pane_t1

0xa495,	// (0x0004c6c0) link_highlight_digital_pane_g1

0xa49d,	// (0x0004c6c8) link_highlight_digital_pane_t1

0xa34f,	// (0x0004c57a) copy_highlight_primary_pane_g1

0xa375,	// (0x0004c5a0) copy_highlight_primary_pane_t1

0xa34f,	// (0x0004c57a) copy_highlight_primary_small_pane_g1

0xa366,	// (0x0004c591) copy_highlight_primary_small_pane_t1

0x967a,	// (0x0004b8a5) copy_highlight_secondary_pane_g1

0x9682,	// (0x0004b8ad) copy_highlight_secondary_pane_t1

0xa34f,	// (0x0004c57a) copy_highlight_title_pane_g1

0xa357,	// (0x0004c582) copy_highlight_title_pane_t1

0xa34f,	// (0x0004c57a) copy_highlight_digital_pane_g1

0xb5ae,	// (0x0004d7d9) copy_highlight_digital_pane_t1

0xb502,	// (0x0004d72d) graphic_text_primary_pane_g1

0xb592,	// (0x0004d7bd) graphic_text_primary_pane_t1

0xb5a0,	// (0x0004d7cb) graphic_text_primary_pane_t2

0x0001,

0xf9d3,	// (0x00051bfe) graphic_text_primary_pane_t

0xb56e,	// (0x0004d799) graphic_text_primary_small_pane_g1

0xb576,	// (0x0004d7a1) graphic_text_primary_small_pane_t1

0xb584,	// (0x0004d7af) graphic_text_primary_small_pane_t2

0x0001,

0xf9ce,	// (0x00051bf9) graphic_text_primary_small_pane_t

0xb54a,	// (0x0004d775) graphic_text_secondary_pane_g1

0xb552,	// (0x0004d77d) graphic_text_secondary_pane_t1

0xb560,	// (0x0004d78b) graphic_text_secondary_pane_t2

0x0001,

0xf9c9,	// (0x00051bf4) graphic_text_secondary_pane_t

0xb526,	// (0x0004d751) graphic_text_title_pane_g1

0xb52e,	// (0x0004d759) graphic_text_title_pane_t1

0xb53c,	// (0x0004d767) graphic_text_title_pane_t2

0x0001,

0xf9c4,	// (0x00051bef) graphic_text_title_pane_t

0xb502,	// (0x0004d72d) graphic_text_digital_pane_g1

0xb50a,	// (0x0004d735) graphic_text_digital_pane_t1

0xb518,	// (0x0004d743) graphic_text_digital_pane_t2

0x0001,

0xf9bf,	// (0x00051bea) graphic_text_digital_pane_t

0x0924,	// (0x00042b4f) navi_icon_pane_srt_ParamLimits

0x0924,	// (0x00042b4f) navi_icon_pane_srt

0x08c8,	// (0x00042af3) navi_midp_pane_srt

0x08c8,	// (0x00042af3) navi_navi_pane_srt

0x0924,	// (0x00042b4f) navi_text_pane_srt_ParamLimits

0x0924,	// (0x00042b4f) navi_text_pane_srt

0xb4cd,	// (0x0004d6f8) navi_navi_icon_text_pane_srt

0xb4d5,	// (0x0004d700) navi_navi_pane_srt_g1_ParamLimits

0xb4d5,	// (0x0004d700) navi_navi_pane_srt_g1

0xb4e7,	// (0x0004d712) navi_navi_pane_srt_g2_ParamLimits

0xb4e7,	// (0x0004d712) navi_navi_pane_srt_g2

0x0001,

0xf9ba,	// (0x00051be5) navi_navi_pane_srt_g_ParamLimits

0xf9ba,	// (0x00051be5) navi_navi_pane_srt_g

0xb4f9,	// (0x0004d724) navi_navi_tabs_pane_srt

0xb4cd,	// (0x0004d6f8) navi_navi_text_pane_srt

0xb4cd,	// (0x0004d6f8) navi_navi_volume_pane_srt

0xb4be,	// (0x0004d6e9) navi_navi_text_pane_srt_t1

0x8452,	// (0x0004a67d) navi_navi_volume_pane_srt_g1

0x845a,	// (0x0004a685) volume_small_pane_srt_ParamLimits

0x845a,	// (0x0004a685) volume_small_pane_srt

0x77d5,	// (0x00049a00) volume_small_pane_srt_g1_ParamLimits

0x77d5,	// (0x00049a00) volume_small_pane_srt_g1

0x77e5,	// (0x00049a10) volume_small_pane_srt_g2_ParamLimits

0x77e5,	// (0x00049a10) volume_small_pane_srt_g2

0x77f6,	// (0x00049a21) volume_small_pane_srt_g3_ParamLimits

0x77f6,	// (0x00049a21) volume_small_pane_srt_g3

0x7807,	// (0x00049a32) volume_small_pane_srt_g4_ParamLimits

0x7807,	// (0x00049a32) volume_small_pane_srt_g4

0x7818,	// (0x00049a43) volume_small_pane_srt_g5_ParamLimits

0x7818,	// (0x00049a43) volume_small_pane_srt_g5

0x7829,	// (0x00049a54) volume_small_pane_srt_g6_ParamLimits

0x7829,	// (0x00049a54) volume_small_pane_srt_g6

0x783a,	// (0x00049a65) volume_small_pane_srt_g7_ParamLimits

0x783a,	// (0x00049a65) volume_small_pane_srt_g7

0x784b,	// (0x00049a76) volume_small_pane_srt_g8_ParamLimits

0x784b,	// (0x00049a76) volume_small_pane_srt_g8

0x785c,	// (0x00049a87) volume_small_pane_srt_g9_ParamLimits

0x785c,	// (0x00049a87) volume_small_pane_srt_g9

0x786d,	// (0x00049a98) volume_small_pane_srt_g10_ParamLimits

0x786d,	// (0x00049a98) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x0005198d) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x0005198d) volume_small_pane_srt_g

0x6b92,	// (0x00048dbd) query_popup_data_pane_cp2

0xb4a4,	// (0x0004d6cf) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb4a4,	// (0x0004d6cf) navi_navi_icon_text_pane_srt_t1

0xa5dd,	// (0x0004c808) navi_tabs_2_long_pane_srt

0xa5dd,	// (0x0004c808) navi_tabs_2_pane_srt

0xa5dd,	// (0x0004c808) navi_tabs_3_long_pane_srt

0xa5dd,	// (0x0004c808) navi_tabs_3_pane_srt

0xa5dd,	// (0x0004c808) navi_tabs_4_pane_srt

0x8432,	// (0x0004a65d) tabs_2_active_pane_srt_ParamLimits

0x8432,	// (0x0004a65d) tabs_2_active_pane_srt

0x8442,	// (0x0004a66d) tabs_2_passive_pane_srt_ParamLimits

0x8442,	// (0x0004a66d) tabs_2_passive_pane_srt

0x9827,	// (0x0004ba52) bg_passive_tab_pane_cp1_srt_ParamLimits

0x9827,	// (0x0004ba52) bg_passive_tab_pane_cp1_srt

0xb470,	// (0x0004d69b) bg_passive_tab_pane_g1_cp1_srt

0x74b8,	// (0x000496e3) bg_passive_tab_pane_g2_cp1_srt

0xb479,	// (0x0004d6a4) bg_passive_tab_pane_g3_cp1_srt

0x0924,	// (0x00042b4f) bg_active_tab_pane_cp1_srt_ParamLimits

0x0924,	// (0x00042b4f) bg_active_tab_pane_cp1_srt

0xb482,	// (0x0004d6ad) tabs_2_active_pane_srt_g1

0xb48a,	// (0x0004d6b5) tabs_2_active_pane_srt_t1_ParamLimits

0xb48a,	// (0x0004d6b5) tabs_2_active_pane_srt_t1

0xb470,	// (0x0004d69b) bg_active_tab_pane_g1_cp1_srt

0x74b8,	// (0x000496e3) bg_active_tab_pane_g2_cp1_srt

0xb479,	// (0x0004d6a4) bg_active_tab_pane_g3_cp1_srt

0x83ff,	// (0x0004a62a) tabs_3_active_pane_srt_ParamLimits

0x83ff,	// (0x0004a62a) tabs_3_active_pane_srt

0x8410,	// (0x0004a63b) tabs_3_passive_pane_cp_srt_ParamLimits

0x8410,	// (0x0004a63b) tabs_3_passive_pane_cp_srt

0x8421,	// (0x0004a64c) tabs_3_passive_pane_srt_ParamLimits

0x8421,	// (0x0004a64c) tabs_3_passive_pane_srt

0x9827,	// (0x0004ba52) bg_passive_tab_pane_cp2_srt_ParamLimits

0x9827,	// (0x0004ba52) bg_passive_tab_pane_cp2_srt

0x9691,	// (0x0004b8bc) bg_passive_tab_pane_g1_cp2_srt

0x74b8,	// (0x000496e3) bg_passive_tab_pane_g2_cp2_srt

0x969a,	// (0x0004b8c5) bg_passive_tab_pane_g3_cp2_srt

0x0924,	// (0x00042b4f) bg_active_tab_pane_cp2_srt_ParamLimits

0x0924,	// (0x00042b4f) bg_active_tab_pane_cp2_srt

0xb456,	// (0x0004d681) tabs_3_active_pane_srt_g1

0xb45e,	// (0x0004d689) tabs_3_active_pane_srt_t1_ParamLimits

0xb45e,	// (0x0004d689) tabs_3_active_pane_srt_t1

0x9691,	// (0x0004b8bc) bg_active_tab_pane_g1_cp2_srt

0x74b8,	// (0x000496e3) bg_active_tab_pane_g2_cp2_srt

0x969a,	// (0x0004b8c5) bg_active_tab_pane_g3_cp2_srt

0x83b7,	// (0x0004a5e2) tabs_4_active_pane_srt_ParamLimits

0x83b7,	// (0x0004a5e2) tabs_4_active_pane_srt

0x83c9,	// (0x0004a5f4) tabs_4_passive_pane_cp2_srt_ParamLimits

0x83c9,	// (0x0004a5f4) tabs_4_passive_pane_cp2_srt

0x79d2,	// (0x00049bfd) aid_size_cell_toolbar

0x6ff3,	// (0x0004921e) main_idle_act_pane_ParamLimits

0x7b89,	// (0x00049db4) popup_large_graphic_colour_window_ParamLimits

0x7ef4,	// (0x0004a11f) popup_toolbar_window_ParamLimits

0x7ef4,	// (0x0004a11f) popup_toolbar_window

0xb2a0,	// (0x0004d4cb) list_single_graphic_2heading_pane_ParamLimits

0xb2a0,	// (0x0004d4cb) list_single_graphic_2heading_pane

0x0f89,	// (0x000431b4) aid_size_cell_apps_grid_lsc_pane

0x0f9b,	// (0x000431c6) aid_size_cell_apps_grid_prt_pane

0x9827,	// (0x0004ba52) bg_wml_button_pane_cp1_ParamLimits

0x9827,	// (0x0004ba52) bg_wml_button_pane_cp1

0x9fde,	// (0x0004c209) form_midp_field_text_pane_t1_ParamLimits

0x9da8,	// (0x0004bfd3) input_focus_pane_cp050_ParamLimits

0xa018,	// (0x0004c243) list_midp_form_text_pane_ParamLimits

0x9fbb,	// (0x0004c1e6) input_focus_pane_cp051_ParamLimits

0x9fcf,	// (0x0004c1fa) list_midp_choice_pane_ParamLimits

0x9e5e,	// (0x0004c089) list_single_2graphic_pane_cp3_ParamLimits

0x9e5e,	// (0x0004c089) list_single_2graphic_pane_cp3

0x9e83,	// (0x0004c0ae) list_single_midp_graphic_pane_ParamLimits

0x9e83,	// (0x0004c0ae) list_single_midp_graphic_pane

0x5d26,	// (0x00047f51) list_single_graphic_2heading_pane_g1_ParamLimits

0x5d26,	// (0x00047f51) list_single_graphic_2heading_pane_g1

0x5d32,	// (0x00047f5d) list_single_graphic_2heading_pane_g4_ParamLimits

0x5d32,	// (0x00047f5d) list_single_graphic_2heading_pane_g4

0x5d3e,	// (0x00047f69) list_single_graphic_2heading_pane_g5_ParamLimits

0x5d3e,	// (0x00047f69) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x000519e0) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x000519e0) list_single_graphic_2heading_pane_g

0x5d4a,	// (0x00047f75) list_single_graphic_2heading_pane_t1_ParamLimits

0x5d4a,	// (0x00047f75) list_single_graphic_2heading_pane_t1

0x5d5e,	// (0x00047f89) list_single_graphic_2heading_pane_t2_ParamLimits

0x5d5e,	// (0x00047f89) list_single_graphic_2heading_pane_t2

0x5d78,	// (0x00047fa3) list_single_graphic_2heading_pane_t3_ParamLimits

0x5d78,	// (0x00047fa3) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x000519e7) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x000519e7) list_single_graphic_2heading_pane_t

0x9c72,	// (0x0004be9d) bg_popup_sub_pane_cp2

0x9c9c,	// (0x0004bec7) grid_toobar_pane

0x7fa1,	// (0x0004a1cc) cell_toolbar_pane_ParamLimits

0x7fa1,	// (0x0004a1cc) cell_toolbar_pane

0x9cd8,	// (0x0004bf03) cell_toolbar_pane_g1_ParamLimits

0x9cd8,	// (0x0004bf03) cell_toolbar_pane_g1

0x9cec,	// (0x0004bf17) cell_toolbar_pane_g2_ParamLimits

0x9cec,	// (0x0004bf17) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x000519f5) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x000519f5) cell_toolbar_pane_g

0x9d0e,	// (0x0004bf39) grid_highlight_pane_cp2_ParamLimits

0x9d0e,	// (0x0004bf39) grid_highlight_pane_cp2

0x9d28,	// (0x0004bf53) toolbar_button_pane

0x9d34,	// (0x0004bf5f) toolbar_button_pane_g1

0x9d3c,	// (0x0004bf67) toolbar_button_pane_g2

0x9d44,	// (0x0004bf6f) toolbar_button_pane_g3

0x9d4c,	// (0x0004bf77) toolbar_button_pane_g4

0x9d54,	// (0x0004bf7f) toolbar_button_pane_g5

0x9d5c,	// (0x0004bf87) toolbar_button_pane_g6

0x9d64,	// (0x0004bf8f) toolbar_button_pane_g7

0x9d6c,	// (0x0004bf97) toolbar_button_pane_g8

0x9d74,	// (0x0004bf9f) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x000519fa) toolbar_button_pane_g

0x7fd9,	// (0x0004a204) list_single_2graphic_pane_g1_cp3_ParamLimits

0x7fd9,	// (0x0004a204) list_single_2graphic_pane_g1_cp3

0x7fe5,	// (0x0004a210) list_single_2graphic_pane_g2_cp3_ParamLimits

0x7fe5,	// (0x0004a210) list_single_2graphic_pane_g2_cp3

0x4b0f,	// (0x00046d3a) list_single_2graphic_pane_g3_cp3

0x7ff6,	// (0x0004a221) list_single_2graphic_pane_g4_cp3_ParamLimits

0x7ff6,	// (0x0004a221) list_single_2graphic_pane_g4_cp3

0x8002,	// (0x0004a22d) list_single_2graphic_pane_t1_cp3_ParamLimits

0x8002,	// (0x0004a22d) list_single_2graphic_pane_t1_cp3

0x12a9,	// (0x000434d4) list_single_midp_graphic_pane_g2_ParamLimits

0x12a9,	// (0x000434d4) list_single_midp_graphic_pane_g2

0x5d16,	// (0x00047f41) aid_zoom_text_primary

0x79da,	// (0x00049c05) aid_zoom_text_secondary

0x974b,	// (0x0004b976) status_small_pane_g7_ParamLimits

0x974b,	// (0x0004b976) status_small_pane_g7

0x976e,	// (0x0004b999) status_small_pane_t1_ParamLimits

0x68c4,	// (0x00048aef) title_pane_g2

0x0003,

0xf54e,	// (0x00051779) title_pane_g

0x6bec,	// (0x00048e17) aid_size_cell_colour_1_pane_ParamLimits

0x6bec,	// (0x00048e17) aid_size_cell_colour_1_pane

0x6c00,	// (0x00048e2b) aid_size_cell_colour_2_pane_ParamLimits

0x6c00,	// (0x00048e2b) aid_size_cell_colour_2_pane

0x6c14,	// (0x00048e3f) aid_size_cell_colour_3_pane_ParamLimits

0x6c14,	// (0x00048e3f) aid_size_cell_colour_3_pane

0x6c28,	// (0x00048e53) aid_size_cell_colour_4_pane_ParamLimits

0x6c28,	// (0x00048e53) aid_size_cell_colour_4_pane

0x7066,	// (0x00049291) title_pane_stacon_g1_ParamLimits

0x7066,	// (0x00049291) title_pane_stacon_g1

0xa3cc,	// (0x0004c5f7) popup_note_wait_window_g3_ParamLimits

0xa3cc,	// (0x0004c5f7) popup_note_wait_window_g3

0xa442,	// (0x0004c66d) popup_note_wait_window_t5_ParamLimits

0xa442,	// (0x0004c66d) popup_note_wait_window_t5

0x08c8,	// (0x00042af3) main_feb_china_hwr_fs_writing_pane

0x7a70,	// (0x00049c9b) popup_feb_china_hwr_fs_window_ParamLimits

0x7a70,	// (0x00049c9b) popup_feb_china_hwr_fs_window

0x804c,	// (0x0004a277) aid_size_cell_hwr_fs_ParamLimits

0x804c,	// (0x0004a277) aid_size_cell_hwr_fs

0x9da8,	// (0x0004bfd3) bg_popup_sub_pane_cp3_ParamLimits

0x9da8,	// (0x0004bfd3) bg_popup_sub_pane_cp3

0x8061,	// (0x0004a28c) grid_hwr_fs_pane_ParamLimits

0x8061,	// (0x0004a28c) grid_hwr_fs_pane

0x8079,	// (0x0004a2a4) linegrid_hwr_fs_pane_ParamLimits

0x8079,	// (0x0004a2a4) linegrid_hwr_fs_pane

0x8089,	// (0x0004a2b4) cell_hwr_fs_pane_ParamLimits

0x8089,	// (0x0004a2b4) cell_hwr_fs_pane

0x9db4,	// (0x0004bfdf) linegrid_hwr_fs_pane_g1_ParamLimits

0x9db4,	// (0x0004bfdf) linegrid_hwr_fs_pane_g1

0x9dc0,	// (0x0004bfeb) linegrid_hwr_fs_pane_g2_ParamLimits

0x9dc0,	// (0x0004bfeb) linegrid_hwr_fs_pane_g2

0x9dd2,	// (0x0004bffd) linegrid_hwr_fs_pane_g3_ParamLimits

0x9dd2,	// (0x0004bffd) linegrid_hwr_fs_pane_g3

0x80ab,	// (0x0004a2d6) linegrid_hwr_fs_pane_g4_ParamLimits

0x80ab,	// (0x0004a2d6) linegrid_hwr_fs_pane_g4

0x80c5,	// (0x0004a2f0) linegrid_hwr_fs_pane_g5_ParamLimits

0x80c5,	// (0x0004a2f0) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fa,	// (0x00051a25) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fa,	// (0x00051a25) linegrid_hwr_fs_pane_g

0x9dde,	// (0x0004c009) cell_hwr_fs_pane_g1_ParamLimits

0x9dde,	// (0x0004c009) cell_hwr_fs_pane_g1

0x9bac,	// (0x0004bdd7) cell_hwr_fs_pane_g2_ParamLimits

0x9bac,	// (0x0004bdd7) cell_hwr_fs_pane_g2

0x9df4,	// (0x0004c01f) cell_hwr_fs_pane_g3_ParamLimits

0x9df4,	// (0x0004c01f) cell_hwr_fs_pane_g3

0x9e01,	// (0x0004c02c) cell_hwr_fs_pane_g4_ParamLimits

0x9e01,	// (0x0004c02c) cell_hwr_fs_pane_g4

0x0003,

0xf805,	// (0x00051a30) cell_hwr_fs_pane_g_ParamLimits

0xf805,	// (0x00051a30) cell_hwr_fs_pane_g

0x80db,	// (0x0004a306) cell_hwr_fs_pane_t1

0x08c8,	// (0x00042af3) grid_highlight_pane_cp6

0x08c8,	// (0x00042af3) main_idle_act2_pane

0x0ddf,	// (0x0004300a) aid_inside_area_popup_secondary

0xaa61,	// (0x0004cc8c) aid_inside_area_window_primary_ParamLimits

0xaa61,	// (0x0004cc8c) aid_inside_area_window_primary

0xb5bd,	// (0x0004d7e8) ai2_news_ticker_pane

0xb5c5,	// (0x0004d7f0) aid_size_cell_ai1_link_ParamLimits

0xb5c5,	// (0x0004d7f0) aid_size_cell_ai1_link

0xb5df,	// (0x0004d80a) popup_ai2_data_window_ParamLimits

0xb5df,	// (0x0004d80a) popup_ai2_data_window

0xb5f5,	// (0x0004d820) popup_ai2_link_window_ParamLimits

0xb5f5,	// (0x0004d820) popup_ai2_link_window

0x9da8,	// (0x0004bfd3) bg_popup_sub_pane_cp4_ParamLimits

0x9da8,	// (0x0004bfd3) bg_popup_sub_pane_cp4

0xb609,	// (0x0004d834) grid_ai2_link_pane_ParamLimits

0xb609,	// (0x0004d834) grid_ai2_link_pane

0xb620,	// (0x0004d84b) popup_ai2_link_window_g1_ParamLimits

0xb620,	// (0x0004d84b) popup_ai2_link_window_g1

0xb62c,	// (0x0004d857) popup_ai2_link_window_g2_ParamLimits

0xb62c,	// (0x0004d857) popup_ai2_link_window_g2

0x0001,

0xf9d8,	// (0x00051c03) popup_ai2_link_window_g_ParamLimits

0xf9d8,	// (0x00051c03) popup_ai2_link_window_g

0xb63b,	// (0x0004d866) ai2_mp_button_pane

0xb643,	// (0x0004d86e) ai2_mp_volume_pane

0x9fbb,	// (0x0004c1e6) bg_popup_sub_pane_cp5_ParamLimits

0x9fbb,	// (0x0004c1e6) bg_popup_sub_pane_cp5

0xb64b,	// (0x0004d876) heading_ai2_gene_pane_ParamLimits

0xb64b,	// (0x0004d876) heading_ai2_gene_pane

0xb657,	// (0x0004d882) list_ai2_gene_pane_ParamLimits

0xb657,	// (0x0004d882) list_ai2_gene_pane

0xb69f,	// (0x0004d8ca) cell_ai2_link_pane_ParamLimits

0xb69f,	// (0x0004d8ca) cell_ai2_link_pane

0xb6b5,	// (0x0004d8e0) cell_ai2_link_pane_g1

0x08c8,	// (0x00042af3) grid_highlight_pane_cp7

0x846f,	// (0x0004a69a) ai2_mp_volume_pane_g1

0xb785,	// (0x0004d9b0) ai2_mp_volume_pane_g2

0xb6fa,	// (0x0004d925) list_ai2_gene_pane_t1

0xb78d,	// (0x0004d9b8) ai2_mp_volume_pane_g3

0x0002,

0xf9f1,	// (0x00051c1c) ai2_mp_volume_pane_g

0x8477,	// (0x0004a6a2) volume_small_pane_cp3

0xb795,	// (0x0004d9c0) aid_size_cell_ai2_button

0xb79d,	// (0x0004d9c8) grid_ai2_button_pane

0xb7a6,	// (0x0004d9d1) cell_ai2_button_pane_ParamLimits

0xb7a6,	// (0x0004d9d1) cell_ai2_button_pane

0x08be,	// (0x00042ae9) cell_ai2_button_pane_g1

0x08c8,	// (0x00042af3) grid_highlight_pane_cp8

0xb745,	// (0x0004d970) ai2_gene_pane_t1_ParamLimits

0xb745,	// (0x0004d970) ai2_gene_pane_t1

0x79c8,	// (0x00049bf3) aid_height_parent_landscape

0xb0d7,	// (0x0004d302) aid_height_set_list

0xb0e8,	// (0x0004d313) aid_size_parent

0xb3e4,	// (0x0004d60f) aid_size_cell_graphic_pane_ParamLimits

0xb667,	// (0x0004d892) popup_ai2_data_window_g1_ParamLimits

0xb667,	// (0x0004d892) popup_ai2_data_window_g1

0xb673,	// (0x0004d89e) ai2_news_ticker_pane_g1

0xb67b,	// (0x0004d8a6) ai2_news_ticker_pane_g2

0x0001,

0xf9dd,	// (0x00051c08) ai2_news_ticker_pane_g

0xb683,	// (0x0004d8ae) ai2_news_ticker_pane_t1

0xb691,	// (0x0004d8bc) ai2_news_ticker_pane_t2

0x0001,

0xf9e2,	// (0x00051c0d) ai2_news_ticker_pane_t

0xb6be,	// (0x0004d8e9) heading_ai2_gene_pane_g1

0xb6c6,	// (0x0004d8f1) heading_ai2_gene_pane_t1_ParamLimits

0xb6c6,	// (0x0004d8f1) heading_ai2_gene_pane_t1

0xb6db,	// (0x0004d906) list_highlight_pane_cp6

0xb6e3,	// (0x0004d90e) ai2_gene_pane_ParamLimits

0xb6e3,	// (0x0004d90e) ai2_gene_pane

0xb708,	// (0x0004d933) list_ai2_gene_pane_t2

0x0001,

0xf9e7,	// (0x00051c12) list_ai2_gene_pane_t

0xb716,	// (0x0004d941) list_highlight_pane_cp8_ParamLimits

0xb716,	// (0x0004d941) list_highlight_pane_cp8

0xb727,	// (0x0004d952) ai2_gene_pane_g1_ParamLimits

0xb727,	// (0x0004d952) ai2_gene_pane_g1

0xb739,	// (0x0004d964) ai2_gene_pane_g2_ParamLimits

0xb739,	// (0x0004d964) ai2_gene_pane_g2

0x0001,

0xf9ec,	// (0x00051c17) ai2_gene_pane_g_ParamLimits

0xf9ec,	// (0x00051c17) ai2_gene_pane_g

0x0c75,	// (0x00042ea0) scroll_pane_cp12

0x7987,	// (0x00049bb2) control_pane_t3_ParamLimits

0x7987,	// (0x00049bb2) control_pane_t3

0x975f,	// (0x0004b98a) status_small_pane_g8_ParamLimits

0x975f,	// (0x0004b98a) status_small_pane_g8

0x7b52,	// (0x00049d7d) popup_find_window_ParamLimits

0x7d6b,	// (0x00049f96) popup_note_image_window_ParamLimits

0x5d90,	// (0x00047fbb) list_double2_graphic_pane_vc_g1_ParamLimits

0x5d90,	// (0x00047fbb) list_double2_graphic_pane_vc_g1

0x6ebf,	// (0x000490ea) list_double2_graphic_pane_vc_g2_ParamLimits

0x6ebf,	// (0x000490ea) list_double2_graphic_pane_vc_g2

0x6ecb,	// (0x000490f6) list_double2_graphic_pane_vc_g3_ParamLimits

0x6ecb,	// (0x000490f6) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x000519ee) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x000519ee) list_double2_graphic_pane_vc_g

0x5d9c,	// (0x00047fc7) list_double2_graphic_pane_vc_t1_ParamLimits

0x5d9c,	// (0x00047fc7) list_double2_graphic_pane_vc_t1

0x6ebf,	// (0x000490ea) list_single_heading_pane_vc_g1_ParamLimits

0x6ebf,	// (0x000490ea) list_single_heading_pane_vc_g1

0x6ecb,	// (0x000490f6) list_single_heading_pane_vc_g2_ParamLimits

0x6ecb,	// (0x000490f6) list_single_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x00051a0f) list_single_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x00051a0f) list_single_heading_pane_vc_g

0x5db2,	// (0x00047fdd) list_single_heading_pane_vc_t1_ParamLimits

0x5db2,	// (0x00047fdd) list_single_heading_pane_vc_t1

0x5dca,	// (0x00047ff5) list_single_heading_pane_vc_t2_ParamLimits

0x5dca,	// (0x00047ff5) list_single_heading_pane_vc_t2

0x0001,

0xf7e9,	// (0x00051a14) list_single_heading_pane_vc_t_ParamLimits

0xf7e9,	// (0x00051a14) list_single_heading_pane_vc_t

0x8034,	// (0x0004a25f) list_setting_number_pane_vc_g1_ParamLimits

0x8034,	// (0x0004a25f) list_setting_number_pane_vc_g1

0x8040,	// (0x0004a26b) list_setting_number_pane_vc_g2_ParamLimits

0x8040,	// (0x0004a26b) list_setting_number_pane_vc_g2

0x0001,

0xf7ee,	// (0x00051a19) list_setting_number_pane_vc_g_ParamLimits

0xf7ee,	// (0x00051a19) list_setting_number_pane_vc_g

0x5de6,	// (0x00048011) list_setting_number_pane_vc_t1_ParamLimits

0x5de6,	// (0x00048011) list_setting_number_pane_vc_t1

0x5dfa,	// (0x00048025) list_setting_number_pane_vc_t2_ParamLimits

0x5dfa,	// (0x00048025) list_setting_number_pane_vc_t2

0x5e16,	// (0x00048041) list_setting_number_pane_vc_t3_ParamLimits

0x5e16,	// (0x00048041) list_setting_number_pane_vc_t3

0x0002,

0xf7f3,	// (0x00051a1e) list_setting_number_pane_vc_t_ParamLimits

0xf7f3,	// (0x00051a1e) list_setting_number_pane_vc_t

0x5e40,	// (0x0004806b) set_value_pane_vc_ParamLimits

0x5e40,	// (0x0004806b) set_value_pane_vc

0xb2a0,	// (0x0004d4cb) list_double2_graphic_pane_vc_ParamLimits

0xb2a0,	// (0x0004d4cb) list_double2_graphic_pane_vc

0xb2a0,	// (0x0004d4cb) list_double2_large_graphic_pane_vc_ParamLimits

0xb2a0,	// (0x0004d4cb) list_double2_large_graphic_pane_vc

0xb2a0,	// (0x0004d4cb) list_double2_pane_vc_ParamLimits

0xb2a0,	// (0x0004d4cb) list_double2_pane_vc

0xb2a0,	// (0x0004d4cb) list_double_graphic_heading_pane_vc_ParamLimits

0xb2a0,	// (0x0004d4cb) list_double_graphic_heading_pane_vc

0xb2a0,	// (0x0004d4cb) list_double_graphic_pane_vc_ParamLimits

0xb2a0,	// (0x0004d4cb) list_double_graphic_pane_vc

0xb2a0,	// (0x0004d4cb) list_double_heading_pane_vc_ParamLimits

0xb2a0,	// (0x0004d4cb) list_double_heading_pane_vc

0xb2b2,	// (0x0004d4dd) list_double_large_graphic_pane_vc_ParamLimits

0xb2b2,	// (0x0004d4dd) list_double_large_graphic_pane_vc

0xb2a0,	// (0x0004d4cb) list_double_number_pane_vc_ParamLimits

0xb2a0,	// (0x0004d4cb) list_double_number_pane_vc

0xb2a0,	// (0x0004d4cb) list_double_pane_vc_ParamLimits

0xb2a0,	// (0x0004d4cb) list_double_pane_vc

0xb2a0,	// (0x0004d4cb) list_double_time_pane_vc_ParamLimits

0xb2a0,	// (0x0004d4cb) list_double_time_pane_vc

0xb2a0,	// (0x0004d4cb) list_setting_number_pane_vc_ParamLimits

0xb2a0,	// (0x0004d4cb) list_setting_number_pane_vc

0xb2a0,	// (0x0004d4cb) list_setting_pane_vc_ParamLimits

0xb2a0,	// (0x0004d4cb) list_setting_pane_vc

0xb2a0,	// (0x0004d4cb) list_single_graphic_heading_pane_vc_ParamLimits

0xb2a0,	// (0x0004d4cb) list_single_graphic_heading_pane_vc

0xb2a0,	// (0x0004d4cb) list_single_heading_pane_vc_ParamLimits

0xb2a0,	// (0x0004d4cb) list_single_heading_pane_vc

0x831b,	// (0x0004a546) list_single_number_heading_pane_vc_ParamLimits

0x831b,	// (0x0004a546) list_single_number_heading_pane_vc

0x5d90,	// (0x00047fbb) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5d90,	// (0x00047fbb) list_double_graphic_heading_pane_vc_g1

0x6ebf,	// (0x000490ea) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x6ebf,	// (0x000490ea) list_double_graphic_heading_pane_vc_g2

0x6ecb,	// (0x000490f6) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x6ecb,	// (0x000490f6) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c3,	// (0x000519ee) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x000519ee) list_double_graphic_heading_pane_vc_g

0x5f34,	// (0x0004815f) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5f34,	// (0x0004815f) list_double_graphic_heading_pane_vc_t1

0x5f50,	// (0x0004817b) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5f50,	// (0x0004817b) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f8,	// (0x00051c23) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f8,	// (0x00051c23) list_double_graphic_heading_pane_vc_t

0x8034,	// (0x0004a25f) list_setting_pane_vc_g1_ParamLimits

0x8034,	// (0x0004a25f) list_setting_pane_vc_g1

0x8040,	// (0x0004a26b) list_setting_pane_vc_g2_ParamLimits

0x8040,	// (0x0004a26b) list_setting_pane_vc_g2

0x0001,

0xf7ee,	// (0x00051a19) list_setting_pane_vc_g_ParamLimits

0xf7ee,	// (0x00051a19) list_setting_pane_vc_g

0x5f6e,	// (0x00048199) list_setting_pane_vc_t1_ParamLimits

0x5f6e,	// (0x00048199) list_setting_pane_vc_t1

0x5f8a,	// (0x000481b5) list_setting_pane_vc_t2_ParamLimits

0x5f8a,	// (0x000481b5) list_setting_pane_vc_t2

0x0001,

0xfa3b,	// (0x00051c66) list_setting_pane_vc_t_ParamLimits

0xfa3b,	// (0x00051c66) list_setting_pane_vc_t

0x5e40,	// (0x0004806b) set_value_pane_cp_vc_ParamLimits

0x5e40,	// (0x0004806b) set_value_pane_cp_vc

0x6ebf,	// (0x000490ea) list_single_number_heading_pane_vc_g1_ParamLimits

0x6ebf,	// (0x000490ea) list_single_number_heading_pane_vc_g1

0x6ecb,	// (0x000490f6) list_single_number_heading_pane_vc_g2_ParamLimits

0x6ecb,	// (0x000490f6) list_single_number_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x00051a0f) list_single_number_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x00051a0f) list_single_number_heading_pane_vc_g

0x5db2,	// (0x00047fdd) list_single_number_heading_pane_vc_t1_ParamLimits

0x5db2,	// (0x00047fdd) list_single_number_heading_pane_vc_t1

0x5fa4,	// (0x000481cf) list_single_number_heading_pane_vc_t2_ParamLimits

0x5fa4,	// (0x000481cf) list_single_number_heading_pane_vc_t2

0x5fb8,	// (0x000481e3) list_single_number_heading_pane_vc_t3_ParamLimits

0x5fb8,	// (0x000481e3) list_single_number_heading_pane_vc_t3

0x0002,

0xfa40,	// (0x00051c6b) list_single_number_heading_pane_vc_t_ParamLimits

0xfa40,	// (0x00051c6b) list_single_number_heading_pane_vc_t

0x5d90,	// (0x00047fbb) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5d90,	// (0x00047fbb) list_single_graphic_heading_pane_vc_g1

0x6ebf,	// (0x000490ea) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x6ebf,	// (0x000490ea) list_single_graphic_heading_pane_vc_g4

0x6ecb,	// (0x000490f6) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x6ecb,	// (0x000490f6) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x000519ee) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x000519ee) list_single_graphic_heading_pane_vc_g

0x5db2,	// (0x00047fdd) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5db2,	// (0x00047fdd) list_single_graphic_heading_pane_vc_t1

0x5fca,	// (0x000481f5) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5fca,	// (0x000481f5) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa47,	// (0x00051c72) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa47,	// (0x00051c72) list_single_graphic_heading_pane_vc_t

0x6ebf,	// (0x000490ea) list_double2_pane_vc_g1_ParamLimits

0x6ebf,	// (0x000490ea) list_double2_pane_vc_g1

0x6ecb,	// (0x000490f6) list_double2_pane_vc_g2_ParamLimits

0x6ecb,	// (0x000490f6) list_double2_pane_vc_g2

0x0001,

0xf7e4,	// (0x00051a0f) list_double2_pane_vc_g_ParamLimits

0xf7e4,	// (0x00051a0f) list_double2_pane_vc_g

0x5fde,	// (0x00048209) list_double2_pane_vc_t1_ParamLimits

0x5fde,	// (0x00048209) list_double2_pane_vc_t1

0x84d1,	// (0x0004a6fc) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x84d1,	// (0x0004a6fc) list_double2_large_graphic_pane_vc_g1

0x6ebf,	// (0x000490ea) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x6ebf,	// (0x000490ea) list_double2_large_graphic_pane_vc_g2

0x6ecb,	// (0x000490f6) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x6ecb,	// (0x000490f6) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa4c,	// (0x00051c77) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa4c,	// (0x00051c77) list_double2_large_graphic_pane_vc_g

0x5ff4,	// (0x0004821f) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5ff4,	// (0x0004821f) list_double2_large_graphic_pane_vc_t1

0x84dd,	// (0x0004a708) list_double_time_pane_vc_g1_ParamLimits

0x84dd,	// (0x0004a708) list_double_time_pane_vc_g1

0x84e9,	// (0x0004a714) list_double_time_pane_vc_g2_ParamLimits

0x84e9,	// (0x0004a714) list_double_time_pane_vc_g2

0x0001,

0xfa53,	// (0x00051c7e) list_double_time_pane_vc_g_ParamLimits

0xfa53,	// (0x00051c7e) list_double_time_pane_vc_g

0x600a,	// (0x00048235) list_double_time_pane_vc_t1_ParamLimits

0x600a,	// (0x00048235) list_double_time_pane_vc_t1

0x602e,	// (0x00048259) list_double_time_pane_vc_t2_ParamLimits

0x602e,	// (0x00048259) list_double_time_pane_vc_t2

0x607d,	// (0x000482a8) list_double_time_pane_vc_t3_ParamLimits

0x607d,	// (0x000482a8) list_double_time_pane_vc_t3

0x608f,	// (0x000482ba) list_double_time_pane_vc_t4_ParamLimits

0x608f,	// (0x000482ba) list_double_time_pane_vc_t4

0x0003,

0xfa58,	// (0x00051c83) list_double_time_pane_vc_t_ParamLimits

0xfa58,	// (0x00051c83) list_double_time_pane_vc_t

0x6ebf,	// (0x000490ea) list_double_pane_vc_g1_ParamLimits

0x6ebf,	// (0x000490ea) list_double_pane_vc_g1

0x6ecb,	// (0x000490f6) list_double_pane_vc_g2_ParamLimits

0x6ecb,	// (0x000490f6) list_double_pane_vc_g2

0x0001,

0xf7e4,	// (0x00051a0f) list_double_pane_vc_g_ParamLimits

0xf7e4,	// (0x00051a0f) list_double_pane_vc_g

0x60a3,	// (0x000482ce) list_double_pane_vc_t1_ParamLimits

0x60a3,	// (0x000482ce) list_double_pane_vc_t1

0x60b7,	// (0x000482e2) list_double_pane_vc_t2_ParamLimits

0x60b7,	// (0x000482e2) list_double_pane_vc_t2

0x0001,

0xfa61,	// (0x00051c8c) list_double_pane_vc_t_ParamLimits

0xfa61,	// (0x00051c8c) list_double_pane_vc_t

0x6ebf,	// (0x000490ea) list_double_number_pane_vc_g1_ParamLimits

0x6ebf,	// (0x000490ea) list_double_number_pane_vc_g1

0x6ecb,	// (0x000490f6) list_double_number_pane_vc_g2_ParamLimits

0x6ecb,	// (0x000490f6) list_double_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x00051a0f) list_double_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x00051a0f) list_double_number_pane_vc_g

0x60cf,	// (0x000482fa) list_double_number_pane_vc_t1_ParamLimits

0x60cf,	// (0x000482fa) list_double_number_pane_vc_t1

0x60e1,	// (0x0004830c) list_double_number_pane_vc_t2_ParamLimits

0x60e1,	// (0x0004830c) list_double_number_pane_vc_t2

0x60f5,	// (0x00048320) list_double_number_pane_vc_t3_ParamLimits

0x60f5,	// (0x00048320) list_double_number_pane_vc_t3

0x0002,

0xfa66,	// (0x00051c91) list_double_number_pane_vc_t_ParamLimits

0xfa66,	// (0x00051c91) list_double_number_pane_vc_t

0x84f5,	// (0x0004a720) list_double_large_graphic_pane_vc_g1_ParamLimits

0x84f5,	// (0x0004a720) list_double_large_graphic_pane_vc_g1

0x8517,	// (0x0004a742) list_double_large_graphic_pane_vc_g2_ParamLimits

0x8517,	// (0x0004a742) list_double_large_graphic_pane_vc_g2

0x852b,	// (0x0004a756) list_double_large_graphic_pane_vc_g3_ParamLimits

0x852b,	// (0x0004a756) list_double_large_graphic_pane_vc_g3

0x610d,	// (0x00048338) list_double_large_graphic_pane_vc_g4_ParamLimits

0x610d,	// (0x00048338) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6d,	// (0x00051c98) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6d,	// (0x00051c98) list_double_large_graphic_pane_vc_g

0x6119,	// (0x00048344) list_double_large_graphic_pane_vc_t1_ParamLimits

0x6119,	// (0x00048344) list_double_large_graphic_pane_vc_t1

0x6135,	// (0x00048360) list_double_large_graphic_pane_vc_t2_ParamLimits

0x6135,	// (0x00048360) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa76,	// (0x00051ca1) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa76,	// (0x00051ca1) list_double_large_graphic_pane_vc_t

0x6ebf,	// (0x000490ea) list_double_heading_pane_vc_g1_ParamLimits

0x6ebf,	// (0x000490ea) list_double_heading_pane_vc_g1

0x6ecb,	// (0x000490f6) list_double_heading_pane_vc_g2_ParamLimits

0x6ecb,	// (0x000490f6) list_double_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x00051a0f) list_double_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x00051a0f) list_double_heading_pane_vc_g

0x6157,	// (0x00048382) list_double_heading_pane_vc_t1_ParamLimits

0x6157,	// (0x00048382) list_double_heading_pane_vc_t1

0x5db2,	// (0x00047fdd) list_double_heading_pane_vc_t2_ParamLimits

0x5db2,	// (0x00047fdd) list_double_heading_pane_vc_t2

0x0001,

0xfa7b,	// (0x00051ca6) list_double_heading_pane_vc_t_ParamLimits

0xfa7b,	// (0x00051ca6) list_double_heading_pane_vc_t

0x616b,	// (0x00048396) list_double_graphic_pane_vc_g1_ParamLimits

0x616b,	// (0x00048396) list_double_graphic_pane_vc_g1

0x853a,	// (0x0004a765) list_double_graphic_pane_vc_g2_ParamLimits

0x853a,	// (0x0004a765) list_double_graphic_pane_vc_g2

0x6ebf,	// (0x000490ea) list_double_graphic_pane_vc_g3_ParamLimits

0x6ebf,	// (0x000490ea) list_double_graphic_pane_vc_g3

0x0003,

0xfa80,	// (0x00051cab) list_double_graphic_pane_vc_g_ParamLimits

0xfa80,	// (0x00051cab) list_double_graphic_pane_vc_g

0x6177,	// (0x000483a2) list_double_graphic_pane_vc_t1_ParamLimits

0x6177,	// (0x000483a2) list_double_graphic_pane_vc_t1

0x619b,	// (0x000483c6) list_double_graphic_pane_vc_t2_ParamLimits

0x619b,	// (0x000483c6) list_double_graphic_pane_vc_t2

0x0001,

0xfa89,	// (0x00051cb4) list_double_graphic_pane_vc_t_ParamLimits

0xfa89,	// (0x00051cb4) list_double_graphic_pane_vc_t

0x64ee,	// (0x00048719) aid_size_cell_fastswap

0x64f6,	// (0x00048721) aid_size_cell_touch_ParamLimits

0x64f6,	// (0x00048721) aid_size_cell_touch

0x6751,	// (0x0004897c) popup_fast_swap_wide_window_ParamLimits

0x6751,	// (0x0004897c) popup_fast_swap_wide_window

0x6857,	// (0x00048a82) touch_pane_ParamLimits

0x6857,	// (0x00048a82) touch_pane

0x0cc2,	// (0x00042eed) button_value_adjust_pane_cp2

0x5a59,	// (0x00047c84) button_value_adjust_pane_cp4

0x5a7b,	// (0x00047ca6) form_field_data_pane_cp2

0x5a9c,	// (0x00047cc7) form_field_data_wide_pane_cp2

0x0fc0,	// (0x000431eb) bg_scroll_pane_ParamLimits

0x7262,	// (0x0004948d) scroll_handle_pane_ParamLimits

0x7276,	// (0x000494a1) scroll_sc2_down_pane_ParamLimits

0x7276,	// (0x000494a1) scroll_sc2_down_pane

0x0ff1,	// (0x0004321c) scroll_sc2_up_pane_ParamLimits

0x0ff1,	// (0x0004321c) scroll_sc2_up_pane

0xbe6c,	// (0x0004e097) grid_wheel_folder_pane_g1_ParamLimits

0xbe6c,	// (0x0004e097) grid_wheel_folder_pane_g1

0x75dd,	// (0x00049808) clock_nsta_pane_cp2_ParamLimits

0x75dd,	// (0x00049808) clock_nsta_pane_cp2

0x6ff3,	// (0x0004921e) listscroll_midp_pane_ParamLimits

0x776f,	// (0x0004999a) midp_canvas_pane

0x97d9,	// (0x0004ba04) nsta_clock_indic_pane

0x980d,	// (0x0004ba38) listscroll_form_pane_vc

0x9815,	// (0x0004ba40) listscroll_set_pane_vc_ParamLimits

0x9815,	// (0x0004ba40) listscroll_set_pane_vc

0x991a,	// (0x0004bb45) clock_nsta_pane

0x9995,	// (0x0004bbc0) indicator_nsta_pane

0x9c72,	// (0x0004be9d) bg_popup_sub_pane_cp2_ParamLimits

0x9c86,	// (0x0004beb1) find_pane_cp2_ParamLimits

0x9c86,	// (0x0004beb1) find_pane_cp2

0x9c9c,	// (0x0004bec7) grid_toobar_pane_ParamLimits

0x9d7c,	// (0x0004bfa7) list_form_gen_pane_vc_ParamLimits

0x9d7c,	// (0x0004bfa7) list_form_gen_pane_vc

0x9d92,	// (0x0004bfbd) scroll_pane_cp8_vc_ParamLimits

0x9d92,	// (0x0004bfbd) scroll_pane_cp8_vc

0x9e0e,	// (0x0004c039) data_form_wide_pane_vc_ParamLimits

0x9e0e,	// (0x0004c039) data_form_wide_pane_vc

0x9e1a,	// (0x0004c045) form_field_data_wide_pane_vc_g1

0x9e22,	// (0x0004c04d) form_field_data_wide_pane_vc_t1_ParamLimits

0x9e22,	// (0x0004c04d) form_field_data_wide_pane_vc_t1

0x0cd6,	// (0x00042f01) input_focus_pane_cp6_vc_ParamLimits

0x0cd6,	// (0x00042f01) input_focus_pane_cp6_vc

0xa14f,	// (0x0004c37a) list_midp_pane_ParamLimits

0xa15b,	// (0x0004c386) scroll_pane_cp16_ParamLimits

0xa15b,	// (0x0004c386) scroll_pane_cp16

0xa1a9,	// (0x0004c3d4) button_value_adjust_pane_ParamLimits

0xa1a9,	// (0x0004c3d4) button_value_adjust_pane

0xb0fa,	// (0x0004d325) button_value_adjust_pane_cp6_ParamLimits

0xb0fa,	// (0x0004d325) button_value_adjust_pane_cp6

0xb224,	// (0x0004d44f) settings_code_pane_cp_ParamLimits

0xb224,	// (0x0004d44f) settings_code_pane_cp

0x08be,	// (0x00042ae9) cell_touch_pane_g1

0x08be,	// (0x00042ae9) cell_touch_pane_g2

0x0001,

0xf708,	// (0x00051933) cell_touch_pane_g

0xb7b8,	// (0x0004d9e3) cell_touch_pane_cp_ParamLimits

0xb7b8,	// (0x0004d9e3) cell_touch_pane_cp

0xb7c8,	// (0x0004d9f3) cell_touch_pane_ParamLimits

0xb7c8,	// (0x0004d9f3) cell_touch_pane

0x08be,	// (0x00042ae9) scroll_sc2_down_pane_g1

0x08be,	// (0x00042ae9) scroll_sc2_up_pane_g1

0x08c8,	// (0x00042af3) bg_set_opt_pane_cp4_vc

0xb7da,	// (0x0004da05) list_set_graphic_pane_vc_g1_ParamLimits

0xb7da,	// (0x0004da05) list_set_graphic_pane_vc_g1

0xb7e6,	// (0x0004da11) list_set_graphic_pane_vc_g2_ParamLimits

0xb7e6,	// (0x0004da11) list_set_graphic_pane_vc_g2

0x0001,

0xf9fd,	// (0x00051c28) list_set_graphic_pane_vc_g_ParamLimits

0xf9fd,	// (0x00051c28) list_set_graphic_pane_vc_g

0xb7f2,	// (0x0004da1d) text_primary_small_cp13_vc_ParamLimits

0xb7f2,	// (0x0004da1d) text_primary_small_cp13_vc

0xb80a,	// (0x0004da35) list_set_graphic_pane_vc_ParamLimits

0xb80a,	// (0x0004da35) list_set_graphic_pane_vc

0x08c8,	// (0x00042af3) input_focus_pane_cp2_vc

0x08be,	// (0x00042ae9) setting_code_pane_vc_g1

0x093b,	// (0x00042b66) setting_code_pane_vc_t1

0xb81d,	// (0x0004da48) set_text_pane_vc_t1_ParamLimits

0xb81d,	// (0x0004da48) set_text_pane_vc_t1

0x08c8,	// (0x00042af3) input_focus_pane_cp1_vc

0xb839,	// (0x0004da64) list_set_text_pane_vc

0x08be,	// (0x00042ae9) setting_text_pane_vc_g1

0x08c8,	// (0x00042af3) bg_set_opt_pane_cp2_vc

0x0932,	// (0x00042b5d) setting_slider_graphic_pane_vc_g1

0xb843,	// (0x0004da6e) setting_slider_graphic_pane_vc_t1

0xb853,	// (0x0004da7e) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa02,	// (0x00051c2d) setting_slider_graphic_pane_vc_t

0xb863,	// (0x0004da8e) slider_set_pane_cp_vc

0xb86b,	// (0x0004da96) slider_set_pane_vc_g1

0xb874,	// (0x0004da9f) slider_set_pane_vc_g2

0x0006,

0xfa07,	// (0x00051c32) slider_set_pane_vc_g

0x0d31,	// (0x00042f5c) set_opt_bg_pane_g1_copy1

0x0d39,	// (0x00042f64) set_opt_bg_pane_g2_copy1

0xb8a0,	// (0x0004dacb) set_opt_bg_pane_g3_copy1

0x0d49,	// (0x00042f74) set_opt_bg_pane_g4_copy1

0x0d51,	// (0x00042f7c) set_opt_bg_pane_g5_copy1

0x0d59,	// (0x00042f84) set_opt_bg_pane_g6_copy1

0xb8a8,	// (0x0004dad3) set_opt_bg_pane_g7_copy1

0xb8b0,	// (0x0004dadb) set_opt_bg_pane_g8_copy1

0xb8b8,	// (0x0004dae3) set_opt_bg_pane_g9_copy1

0x08c8,	// (0x00042af3) bg_set_opt_pane_cp_vc

0xb8c0,	// (0x0004daeb) setting_slider_pane_vc_t1

0xb8cf,	// (0x0004dafa) setting_slider_pane_vc_t2

0xb8df,	// (0x0004db0a) setting_slider_pane_vc_t3

0x0002,

0xfa16,	// (0x00051c41) setting_slider_pane_vc_t

0xb8ef,	// (0x0004db1a) slider_set_pane_vc

0x80e9,	// (0x0004a314) volume_set_pane_vc_g1

0x8480,	// (0x0004a6ab) volume_set_pane_vc_g2

0x8489,	// (0x0004a6b4) volume_set_pane_vc_g3

0x8492,	// (0x0004a6bd) volume_set_pane_vc_g4

0x849b,	// (0x0004a6c6) volume_set_pane_vc_g5

0x84a4,	// (0x0004a6cf) volume_set_pane_vc_g6

0x84ad,	// (0x0004a6d8) volume_set_pane_vc_g7

0x84b6,	// (0x0004a6e1) volume_set_pane_vc_g8

0x84bf,	// (0x0004a6ea) volume_set_pane_vc_g9

0x84c8,	// (0x0004a6f3) volume_set_pane_vc_g10

0x0009,

0xfa1d,	// (0x00051c48) volume_set_pane_vc_g

0xb8f7,	// (0x0004db22) volume_set_pane_vc

0xb8ff,	// (0x0004db2a) button_value_adjust_pane_cp1_vc

0xb909,	// (0x0004db34) list_highlight_pane_cp2_vc

0xb912,	// (0x0004db3d) list_set_pane_vc_ParamLimits

0xb912,	// (0x0004db3d) list_set_pane_vc

0xb970,	// (0x0004db9b) main_pane_set_vc_t1_ParamLimits

0xb970,	// (0x0004db9b) main_pane_set_vc_t1

0xb985,	// (0x0004dbb0) main_pane_set_vc_t2_ParamLimits

0xb985,	// (0x0004dbb0) main_pane_set_vc_t2

0xb997,	// (0x0004dbc2) main_pane_set_vc_t3_ParamLimits

0xb997,	// (0x0004dbc2) main_pane_set_vc_t3

0xb9a9,	// (0x0004dbd4) main_pane_set_vc_t4_ParamLimits

0xb9a9,	// (0x0004dbd4) main_pane_set_vc_t4

0x0003,

0xfa32,	// (0x00051c5d) main_pane_set_vc_t_ParamLimits

0xfa32,	// (0x00051c5d) main_pane_set_vc_t

0xb9bb,	// (0x0004dbe6) setting_code_pane_vc_ParamLimits

0xb9bb,	// (0x0004dbe6) setting_code_pane_vc

0xb9ca,	// (0x0004dbf5) setting_slider_graphic_pane_vc

0xb9ca,	// (0x0004dbf5) setting_slider_pane_vc

0xb9ca,	// (0x0004dbf5) setting_text_pane_vc

0xb9ca,	// (0x0004dbf5) setting_volume_pane_vc

0xb9d2,	// (0x0004dbfd) scroll_pane_cp121_vc

0x0cb0,	// (0x00042edb) set_content_pane_vc

0xb9da,	// (0x0004dc05) button_value_adjust_pane_g1

0xb9e3,	// (0x0004dc0e) button_value_adjust_pane_g2

0x0001,

0xfa8e,	// (0x00051cb9) button_value_adjust_pane_g

0xb9ec,	// (0x0004dc17) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb9ec,	// (0x0004dc17) form_field_slider_wide_pane_vc_t1

0xba00,	// (0x0004dc2b) form_field_slider_wide_pane_vc_t2_ParamLimits

0xba00,	// (0x0004dc2b) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa93,	// (0x00051cbe) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa93,	// (0x00051cbe) form_field_slider_wide_pane_vc_t

0x0916,	// (0x00042b41) input_focus_pane_cp10_vc_ParamLimits

0x0916,	// (0x00042b41) input_focus_pane_cp10_vc

0xba2e,	// (0x0004dc59) slider_cont_pane_cp1_vc_ParamLimits

0xba2e,	// (0x0004dc59) slider_cont_pane_cp1_vc

0xba40,	// (0x0004dc6b) slider_form_pane_g1_cp2

0xb874,	// (0x0004da9f) slider_form_pane_g2_cp2

0xba6d,	// (0x0004dc98) form_field_slider_pane_vc_t3

0xba7b,	// (0x0004dca6) form_field_slider_pane_vc_t4

0xba89,	// (0x0004dcb4) slider_form_pane_vc_ParamLimits

0xba89,	// (0x0004dcb4) slider_form_pane_vc

0xba96,	// (0x0004dcc1) form_field_slider_pane_vc_t1_ParamLimits

0xba96,	// (0x0004dcc1) form_field_slider_pane_vc_t1

0xba00,	// (0x0004dc2b) form_field_slider_pane_vc_t2_ParamLimits

0xba00,	// (0x0004dc2b) form_field_slider_pane_vc_t2

0x0001,

0xfaa5,	// (0x00051cd0) form_field_slider_pane_vc_t_ParamLimits

0xfaa5,	// (0x00051cd0) form_field_slider_pane_vc_t

0x0916,	// (0x00042b41) input_focus_pane_cp9_vc_ParamLimits

0x0916,	// (0x00042b41) input_focus_pane_cp9_vc

0xbab2,	// (0x0004dcdd) slider_cont_pane_vc_ParamLimits

0xbab2,	// (0x0004dcdd) slider_cont_pane_vc

0xbac6,	// (0x0004dcf1) list_form_graphic_pane_cp_vc_ParamLimits

0xbac6,	// (0x0004dcf1) list_form_graphic_pane_cp_vc

0x9e1a,	// (0x0004c045) form_field_popup_wide_pane_vc_g1

0xbadb,	// (0x0004dd06) form_field_popup_wide_pane_vc_t1_ParamLimits

0xbadb,	// (0x0004dd06) form_field_popup_wide_pane_vc_t1

0x0cd6,	// (0x00042f01) input_focus_pane_cp8_vc_ParamLimits

0x0cd6,	// (0x00042f01) input_focus_pane_cp8_vc

0xbb20,	// (0x0004dd4b) list_form_wide_pane_vc_ParamLimits

0xbb20,	// (0x0004dd4b) list_form_wide_pane_vc

0xbb2c,	// (0x0004dd57) list_form_graphic_pane_vc_g1

0xbb34,	// (0x0004dd5f) list_form_graphic_pane_vc_t1_ParamLimits

0xbb34,	// (0x0004dd5f) list_form_graphic_pane_vc_t1

0x0924,	// (0x00042b4f) list_highlight_pane_cp5_vc_ParamLimits

0x0924,	// (0x00042b4f) list_highlight_pane_cp5_vc

0xbb50,	// (0x0004dd7b) list_form_graphic_pane_vc_ParamLimits

0xbb50,	// (0x0004dd7b) list_form_graphic_pane_vc

0x9e1a,	// (0x0004c045) form_field_popup_pane_vc_g1

0xbb66,	// (0x0004dd91) form_field_popup_pane_vc_t1_ParamLimits

0xbb66,	// (0x0004dd91) form_field_popup_pane_vc_t1

0x0cd6,	// (0x00042f01) input_focus_pane_cp7_vc_ParamLimits

0x0cd6,	// (0x00042f01) input_focus_pane_cp7_vc

0xbb7d,	// (0x0004dda8) list_form_pane_vc_ParamLimits

0xbb7d,	// (0x0004dda8) list_form_pane_vc

0xbb89,	// (0x0004ddb4) data_form_pane_vc_t1_ParamLimits

0xbb89,	// (0x0004ddb4) data_form_pane_vc_t1

0x0d31,	// (0x00042f5c) input_focus_pane_vc_g1

0x0d39,	// (0x00042f64) input_focus_pane_vc_g2

0x0d41,	// (0x00042f6c) input_focus_pane_vc_g3

0x0d49,	// (0x00042f74) input_focus_pane_vc_g4

0x0d51,	// (0x00042f7c) input_focus_pane_vc_g5

0x0d59,	// (0x00042f84) input_focus_pane_vc_g6

0x0d61,	// (0x00042f8c) input_focus_pane_vc_g7

0x0d69,	// (0x00042f94) input_focus_pane_vc_g8

0x0d71,	// (0x00042f9c) input_focus_pane_vc_g9

0x08be,	// (0x00042ae9) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x000518bc) input_focus_pane_vc_g

0x9e0e,	// (0x0004c039) data_form_pane_vc_ParamLimits

0x9e0e,	// (0x0004c039) data_form_pane_vc

0x9e1a,	// (0x0004c045) form_field_data_pane_vc_g1

0xbba4,	// (0x0004ddcf) form_field_data_pane_vc_t1_ParamLimits

0xbba4,	// (0x0004ddcf) form_field_data_pane_vc_t1

0x0cd6,	// (0x00042f01) input_focus_pane_vc_ParamLimits

0x0cd6,	// (0x00042f01) input_focus_pane_vc

0xbbbe,	// (0x0004dde9) button_value_adjust_pane_cp3_vc

0xbbc6,	// (0x0004ddf1) button_value_adjust_pane_cp5_vc

0xbbce,	// (0x0004ddf9) form_field_data_pane_vc_ParamLimits

0xbbce,	// (0x0004ddf9) form_field_data_pane_vc

0xbbe5,	// (0x0004de10) form_field_data_pane_vc_cp2

0xbbed,	// (0x0004de18) form_field_data_wide_pane_vc_ParamLimits

0xbbed,	// (0x0004de18) form_field_data_wide_pane_vc

0xbc03,	// (0x0004de2e) form_field_data_wide_pane_vc_cp2

0xbc0b,	// (0x0004de36) form_field_popup_pane_vc_ParamLimits

0xbc0b,	// (0x0004de36) form_field_popup_pane_vc

0xbc22,	// (0x0004de4d) form_field_popup_wide_pane_vc_ParamLimits

0xbc22,	// (0x0004de4d) form_field_popup_wide_pane_vc

0xbc38,	// (0x0004de63) form_field_slider_pane_vc_ParamLimits

0xbc38,	// (0x0004de63) form_field_slider_pane_vc

0xbc4b,	// (0x0004de76) form_field_slider_wide_pane_vc_ParamLimits

0xbc4b,	// (0x0004de76) form_field_slider_wide_pane_vc

0xbc5e,	// (0x0004de89) grid_touch_1_pane_ParamLimits

0xbc5e,	// (0x0004de89) grid_touch_1_pane

0xbc6a,	// (0x0004de95) grid_touch_2_pane_ParamLimits

0xbc6a,	// (0x0004de95) grid_touch_2_pane

0x97a4,	// (0x0004b9cf) touch_pane_g1_ParamLimits

0x97a4,	// (0x0004b9cf) touch_pane_g1

0xbc82,	// (0x0004dead) cell_app_pane_cp_wide_ParamLimits

0xbc82,	// (0x0004dead) cell_app_pane_cp_wide

0xbc93,	// (0x0004debe) grid_popup_fast_wide_pane_ParamLimits

0xbc93,	// (0x0004debe) grid_popup_fast_wide_pane

0xbca7,	// (0x0004ded2) scroll_pane_cp19_ParamLimits

0xbca7,	// (0x0004ded2) scroll_pane_cp19

0x08c8,	// (0x00042af3) bg_popup_window_pane_cp20

0xbcbb,	// (0x0004dee6) listscroll_popup_fast_wide_pane

0x0924,	// (0x00042b4f) grid_indicator_nsta_pane

0xbcc3,	// (0x0004deee) clock_nsta_pane_g1

0xbccc,	// (0x0004def7) clock_nsta_pane_t1

0xbce8,	// (0x0004df13) cell_indicator_nsta_pane_ParamLimits

0xbce8,	// (0x0004df13) cell_indicator_nsta_pane

0xbd19,	// (0x0004df44) cell_indicator_nsta_pane_g1

0xbd27,	// (0x0004df52) cell_indicator_nsta_pane_g2

0x0001,

0xfab6,	// (0x00051ce1) cell_indicator_nsta_pane_g

0xbd34,	// (0x0004df5f) clock_nsta_pane_cp

0xbd3c,	// (0x0004df67) indicator_nsta_pane_cp

0xbd44,	// (0x0004df6f) nsta_clock_indic_pane_g1

0x0960,	// (0x00042b8b) grid_indicator_pane

0x7314,	// (0x0004953f) scroll_pane_cp29

0x752c,	// (0x00049757) indicator_nsta_pane_cp2_ParamLimits

0x752c,	// (0x00049757) indicator_nsta_pane_cp2

0x0924,	// (0x00042b4f) main_apps_wheel_pane

0xa032,	// (0x0004c25d) form_midp_field_text_pane_ParamLimits

0xa17b,	// (0x0004c3a6) scroll_bar_cp050_ParamLimits

0xbda5,	// (0x0004dfd0) cell_indicator_pane_ParamLimits

0xbda5,	// (0x0004dfd0) cell_indicator_pane

0xbdbe,	// (0x0004dfe9) cell_indicator_pane_g1

0xbdc8,	// (0x0004dff3) grid_wheel_folder_pane_ParamLimits

0xbdc8,	// (0x0004dff3) grid_wheel_folder_pane

0xbdde,	// (0x0004e009) list_wheel_apps_pane_ParamLimits

0xbdde,	// (0x0004e009) list_wheel_apps_pane

0xbdef,	// (0x0004e01a) main_apps_wheel_pane_g1_ParamLimits

0xbdef,	// (0x0004e01a) main_apps_wheel_pane_g1

0xbe03,	// (0x0004e02e) main_apps_wheel_pane_g2_ParamLimits

0xbe03,	// (0x0004e02e) main_apps_wheel_pane_g2

0x0001,

0xfad2,	// (0x00051cfd) main_apps_wheel_pane_g_ParamLimits

0xfad2,	// (0x00051cfd) main_apps_wheel_pane_g

0xbe1b,	// (0x0004e046) main_apps_wheel_pane_t1_ParamLimits

0xbe1b,	// (0x0004e046) main_apps_wheel_pane_t1

0xbe3e,	// (0x0004e069) list_wheel_apps_pane_g1

0xbe46,	// (0x0004e071) list_wheel_apps_pane_g2

0xbe4e,	// (0x0004e079) list_wheel_apps_pane_g3

0xbe58,	// (0x0004e083) list_wheel_apps_pane_g4

0xbe62,	// (0x0004e08d) list_wheel_apps_pane_g5

0x0004,

0xfad7,	// (0x00051d02) list_wheel_apps_pane_g

0x4b5f,	// (0x00046d8a) navi_icon_text_pane

0x9849,	// (0x0004ba74) aid_fill_nsta

0xbe85,	// (0x0004e0b0) navi_icon_text_pane_g1

0xbe9d,	// (0x0004e0c8) navi_icon_text_pane_t1

0x4a4f,	// (0x00046c7a) list_set_graphic_pane_t1_ParamLimits

0x4a4f,	// (0x00046c7a) list_set_graphic_pane_t1

0xa8aa,	// (0x0004cad5) popup_midp_note_alarm_window_t6_ParamLimits

0xa8aa,	// (0x0004cad5) popup_midp_note_alarm_window_t6

0xa8bc,	// (0x0004cae7) popup_midp_note_alarm_window_t7_ParamLimits

0xa8bc,	// (0x0004cae7) popup_midp_note_alarm_window_t7

0xa8ce,	// (0x0004caf9) popup_midp_note_alarm_window_t8_ParamLimits

0xa8ce,	// (0x0004caf9) popup_midp_note_alarm_window_t8

0xa8e0,	// (0x0004cb0b) popup_midp_note_alarm_window_t9_ParamLimits

0xa8e0,	// (0x0004cb0b) popup_midp_note_alarm_window_t9

0xa8f2,	// (0x0004cb1d) popup_midp_note_alarm_window_t10_ParamLimits

0xa8f2,	// (0x0004cb1d) popup_midp_note_alarm_window_t10

0xa904,	// (0x0004cb2f) popup_midp_note_alarm_window_t11_ParamLimits

0xa904,	// (0x0004cb2f) popup_midp_note_alarm_window_t11

0xa916,	// (0x0004cb41) scroll_pane_cp17_ParamLimits

0xa916,	// (0x0004cb41) scroll_pane_cp17

0x80e9,	// (0x0004a314) volume_small_pane_cp_g1

0x8557,	// (0x0004a782) volume_small_pane_cp_g2

0x8560,	// (0x0004a78b) volume_small_pane_cp_g3

0x8569,	// (0x0004a794) volume_small_pane_cp_g4

0x8572,	// (0x0004a79d) volume_small_pane_cp_g5

0x849b,	// (0x0004a6c6) volume_small_pane_cp_g6

0x857b,	// (0x0004a7a6) volume_small_pane_cp_g7

0x8584,	// (0x0004a7af) volume_small_pane_cp_g8

0x858d,	// (0x0004a7b8) volume_small_pane_cp_g9

0x8596,	// (0x0004a7c1) volume_small_pane_cp_g10

0x95c2,	// (0x0004b7ed) midp_ticker_pane_g1_ParamLimits

0x95ce,	// (0x0004b7f9) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x00051988) midp_ticker_pane_g_ParamLimits

0x95da,	// (0x0004b805) midp_ticker_pane_t1_ParamLimits

0x985f,	// (0x0004ba8a) aid_fill_nsta_2

0xa167,	// (0x0004c392) list_form2_midp_pane

0xb26f,	// (0x0004d49a) midp_editing_number_pane_ParamLimits

0xb27e,	// (0x0004d4a9) midp_ticker_pane_ParamLimits

0xbeaf,	// (0x0004e0da) form2_midp_field_pane

0xbed3,	// (0x0004e0fe) scroll_pane_cp51

0xbef3,	// (0x0004e11e) form2_midp_button_pane_ParamLimits

0xbef3,	// (0x0004e11e) form2_midp_button_pane

0xbf05,	// (0x0004e130) form2_midp_content_pane_ParamLimits

0xbf05,	// (0x0004e130) form2_midp_content_pane

0xbf1f,	// (0x0004e14a) form2_midp_field_choice_group_pane

0xbf27,	// (0x0004e152) form2_midp_field_pane_g1

0xbf2f,	// (0x0004e15a) form2_midp_field_pane_g2

0xbf37,	// (0x0004e162) form2_midp_field_pane_g3

0xbf3f,	// (0x0004e16a) form2_midp_field_pane_g4

0x0003,

0xfafc,	// (0x00051d27) form2_midp_field_pane_g

0xbf47,	// (0x0004e172) form2_midp_gauge_slider_pane

0xbf4f,	// (0x0004e17a) form2_midp_gauge_wait_pane

0xbf57,	// (0x0004e182) form2_midp_image_pane_ParamLimits

0xbf57,	// (0x0004e182) form2_midp_image_pane

0xbf72,	// (0x0004e19d) form2_midp_label_pane_ParamLimits

0xbf72,	// (0x0004e19d) form2_midp_label_pane

0xbf8b,	// (0x0004e1b6) form2_midp_label_pane_cp_ParamLimits

0xbf8b,	// (0x0004e1b6) form2_midp_label_pane_cp

0xbfac,	// (0x0004e1d7) form2_midp_string_pane_ParamLimits

0xbfac,	// (0x0004e1d7) form2_midp_string_pane

0x61c5,	// (0x000483f0) form2_midp_text_pane_ParamLimits

0x61c5,	// (0x000483f0) form2_midp_text_pane

0xbfbe,	// (0x0004e1e9) form2_midp_time_pane

0xbfce,	// (0x0004e1f9) input_focus_pane_cp51_ParamLimits

0xbfce,	// (0x0004e1f9) input_focus_pane_cp51

0xbfe6,	// (0x0004e211) form2_midp_label_pane_t1_ParamLimits

0xbfe6,	// (0x0004e211) form2_midp_label_pane_t1

0x61e2,	// (0x0004840d) form2_mdip_text_pane_t1_ParamLimits

0x61e2,	// (0x0004840d) form2_mdip_text_pane_t1

0x6200,	// (0x0004842b) form2_midp_time_pane_t1

0xc02f,	// (0x0004e25a) form2_midp_gauge_slider_pane_t1

0xc041,	// (0x0004e26c) form2_midp_gauge_slider_pane_t2

0xc053,	// (0x0004e27e) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb05,	// (0x00051d30) form2_midp_gauge_slider_pane_t

0xc065,	// (0x0004e290) form2_midp_slider_pane

0xc071,	// (0x0004e29c) form2_midp_gauge_wait_pane_t1

0xc07f,	// (0x0004e2aa) form2_midp_wait_pane_ParamLimits

0xc07f,	// (0x0004e2aa) form2_midp_wait_pane

0xc0aa,	// (0x0004e2d5) list_single_2graphic_pane_cp4_ParamLimits

0xc0aa,	// (0x0004e2d5) list_single_2graphic_pane_cp4

0x9e83,	// (0x0004c0ae) list_single_midp_graphic_pane_cp_ParamLimits

0x9e83,	// (0x0004c0ae) list_single_midp_graphic_pane_cp

0x08c8,	// (0x00042af3) list_highlight_pane_cp20

0xc0d2,	// (0x0004e2fd) list_single_2graphic_pane_g1_cp4

0xb6be,	// (0x0004d8e9) list_single_2graphic_pane_g2_cp4

0xc0da,	// (0x0004e305) list_single_2graphic_pane_t1_cp4

0x0924,	// (0x00042b4f) list_highlight_pane_cp21

0xc0e9,	// (0x0004e314) list_single_midp_graphic_pane_g4_cp

0xc0f8,	// (0x0004e323) list_single_midp_graphic_pane_t1_cp

0xc10d,	// (0x0004e338) form2_mdip_string_pane_t1_ParamLimits

0xc10d,	// (0x0004e338) form2_mdip_string_pane_t1

0x08c8,	// (0x00042af3) bg_wml_button_pane_cp2

0x08be,	// (0x00042ae9) form2_midp_image_pane_g1

0x6f1e,	// (0x00049149) list_double_large_graphic_pane_g5_ParamLimits

0x6f1e,	// (0x00049149) list_double_large_graphic_pane_g5

0x6ff3,	// (0x0004921e) midp_form_pane_ParamLimits

0x0924,	// (0x00042b4f) main_apps_wheel_pane_ParamLimits

0x7d91,	// (0x00049fbc) popup_preview_window_ParamLimits

0x7d91,	// (0x00049fbc) popup_preview_window

0x7f4c,	// (0x0004a177) popup_touch_info_window_ParamLimits

0x7f4c,	// (0x0004a177) popup_touch_info_window

0x7f6a,	// (0x0004a195) popup_touch_menu_window_ParamLimits

0x7f6a,	// (0x0004a195) popup_touch_menu_window

0x08b4,	// (0x00042adf) bg_popup_sub_pane_cp6

0xc21a,	// (0x0004e445) list_touch_menu_pane

0xc222,	// (0x0004e44d) list_single_touch_menu_pane_ParamLimits

0xc222,	// (0x0004e44d) list_single_touch_menu_pane

0xc238,	// (0x0004e463) list_single_touch_menu_pane_t1

0x0924,	// (0x00042b4f) bg_popup_sub_pane_cp7_ParamLimits

0x0924,	// (0x00042b4f) bg_popup_sub_pane_cp7

0xc246,	// (0x0004e471) heading_sub_pane

0xc24e,	// (0x0004e479) list_touch_info_pane_ParamLimits

0xc24e,	// (0x0004e479) list_touch_info_pane

0xc25d,	// (0x0004e488) list_single_touch_info_pane_ParamLimits

0xc25d,	// (0x0004e488) list_single_touch_info_pane

0xc26f,	// (0x0004e49a) list_single_touch_info_pane_t1

0xc27d,	// (0x0004e4a8) list_single_touch_info_pane_t2

0x0001,

0xfb13,	// (0x00051d3e) list_single_touch_info_pane_t

0x7767,	// (0x00049992) bg_popup_heading_pane_cp

0xc28b,	// (0x0004e4b6) heading_sub_pane_t1

0x9da8,	// (0x0004bfd3) bg_popup_preview_window_pane_cp_ParamLimits

0x9da8,	// (0x0004bfd3) bg_popup_preview_window_pane_cp

0xc246,	// (0x0004e471) heading_preview_pane

0xc24e,	// (0x0004e479) list_preview_pane_ParamLimits

0xc24e,	// (0x0004e479) list_preview_pane

0xc299,	// (0x0004e4c4) popup_preview_window_g1

0xc25d,	// (0x0004e488) list_single_preview_pane_ParamLimits

0xc25d,	// (0x0004e488) list_single_preview_pane

0xc2a1,	// (0x0004e4cc) list_single_preview_pane_g1

0xc2a9,	// (0x0004e4d4) list_single_preview_pane_t1

0xc26f,	// (0x0004e49a) list_single_preview_pane_t2

0x0001,

0xfb18,	// (0x00051d43) list_single_preview_pane_t

0xc2b7,	// (0x0004e4e2) bg_popup_heading_pane_cp2_ParamLimits

0xc2b7,	// (0x0004e4e2) bg_popup_heading_pane_cp2

0xc2cd,	// (0x0004e4f8) heading_preview_pane_g1

0xc2d5,	// (0x0004e500) heading_preview_pane_t1_ParamLimits

0xc2d5,	// (0x0004e500) heading_preview_pane_t1

0x0977,	// (0x00042ba2) soft_indicator_pane_t1_ParamLimits

0x0c52,	// (0x00042e7d) scroll_pane_ParamLimits

0x0fe8,	// (0x00043213) scroll_sc2_left_pane

0x0fdf,	// (0x0004320a) scroll_sc2_right_pane

0x1007,	// (0x00043232) scroll_bg_pane_g1_ParamLimits

0x101c,	// (0x00043247) scroll_bg_pane_g2_ParamLimits

0x1034,	// (0x0004325f) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x00051913) scroll_bg_pane_g_ParamLimits

0x1007,	// (0x00043232) scroll_handle_pane_g1_ParamLimits

0x1049,	// (0x00043274) scroll_handle_pane_g2_ParamLimits

0x1034,	// (0x0004325f) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x0005191a) scroll_handle_pane_g_ParamLimits

0x7a14,	// (0x00049c3f) popup_choice_list_window_ParamLimits

0x7a14,	// (0x00049c3f) popup_choice_list_window

0x9c7e,	// (0x0004bea9) choice_list_pane

0x9d00,	// (0x0004bf2b) cell_toolbar_pane_t1

0x9d28,	// (0x0004bf53) toolbar_button_pane_ParamLimits

0xadd0,	// (0x0004cffb) ai_gene_pane_1_t2_ParamLimits

0xadd0,	// (0x0004cffb) ai_gene_pane_1_t2

0x0001,

0xf917,	// (0x00051b42) ai_gene_pane_1_t_ParamLimits

0xf917,	// (0x00051b42) ai_gene_pane_1_t

0xc2f2,	// (0x0004e51d) scroll_sc2_left_pane_g1

0xc2f2,	// (0x0004e51d) scroll_sc2_right_pane_g1

0x9827,	// (0x0004ba52) bg_popup_sub_pane_cp10

0xc2fc,	// (0x0004e527) list_choice_list_pane

0xc315,	// (0x0004e540) list_single_choice_list_pane_ParamLimits

0xc315,	// (0x0004e540) list_single_choice_list_pane

0xc328,	// (0x0004e553) list_single_choice_list_pane_g1

0x6fb9,	// (0x000491e4) list_single_choice_list_pane_t1_ParamLimits

0x6fb9,	// (0x000491e4) list_single_choice_list_pane_t1

0xc330,	// (0x0004e55b) choice_list_pane_g1

0xc338,	// (0x0004e563) choice_list_pane_t1

0x08b4,	// (0x00042adf) input_focus_pane_cp11

0x0f54,	// (0x0004317f) title_pane_stacon_g2_ParamLimits

0x0f54,	// (0x0004317f) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x000518f9) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x000518f9) title_pane_stacon_g

0x7767,	// (0x00049992) cursor_press_pane

0x7abc,	// (0x00049ce7) popup_fep_hwr_window_ParamLimits

0x7abc,	// (0x00049ce7) popup_fep_hwr_window

0x7b34,	// (0x00049d5f) popup_fep_vkb_window_ParamLimits

0x7b34,	// (0x00049d5f) popup_fep_vkb_window

0xc346,	// (0x0004e571) cursor_press_pane_g1

0x0002,

0xfb41,	// (0x00051d6c) fep_vkb_side_pane_g_ParamLimits

0x85d8,	// (0x0004a803) fep_hwr_candidate_pane_ParamLimits

0x85d8,	// (0x0004a803) fep_hwr_candidate_pane

0x8602,	// (0x0004a82d) fep_hwr_side_pane_ParamLimits

0x8602,	// (0x0004a82d) fep_hwr_side_pane

0x8622,	// (0x0004a84d) fep_hwr_top_pane_ParamLimits

0x8622,	// (0x0004a84d) fep_hwr_top_pane

0x863a,	// (0x0004a865) fep_hwr_write_pane_ParamLimits

0x863a,	// (0x0004a865) fep_hwr_write_pane

0xfb41,	// (0x00051d6c) fep_vkb_side_pane_g

0xc34e,	// (0x0004e579) fep_hwr_top_pane_g1

0xc360,	// (0x0004e58b) fep_hwr_top_pane_g2

0x8666,	// (0x0004a891) fep_hwr_top_pane_g3

0x0002,

0xfb1d,	// (0x00051d48) fep_hwr_top_pane_g

0x867b,	// (0x0004a8a6) fep_hwr_top_text_pane

0x110c,	// (0x00043337) fep_hwr_top_text_pane_g1

0xc396,	// (0x0004e5c1) fep_hwr_top_text_pane_t1

0x8771,	// (0x0004a99c) fep_hwr_candidate_pane_g1

0xc5db,	// (0x0004e806) fep_vkb_keypad_pane_g3_ParamLimits

0xc5db,	// (0x0004e806) fep_vkb_keypad_pane_g3

0xc603,	// (0x0004e82e) fep_vkb_keypad_pane_g4_ParamLimits

0xc603,	// (0x0004e82e) fep_vkb_keypad_pane_g4

0xc672,	// (0x0004e89d) fep_vkb_bottom_pane_g2_ParamLimits

0xc672,	// (0x0004e89d) fep_vkb_bottom_pane_g2

0x0001,

0xfb48,	// (0x00051d73) fep_vkb_bottom_pane_g_ParamLimits

0xfb48,	// (0x00051d73) fep_vkb_bottom_pane_g

0xc2f2,	// (0x0004e51d) cell_vkb_side_pane_g2

0x0001,

0xfb52,	// (0x00051d7d) cell_vkb_side_pane_g

0xc6fd,	// (0x0004e928) cell_vkb_side_pane_t1

0xc70b,	// (0x0004e936) cell_vkb_side_pane_t1_copy1

0xc2f2,	// (0x0004e51d) bg_fep_vkb_candidate_pane_g2

0xc837,	// (0x0004ea62) cell_vkb_candidate_pane_ParamLimits

0xc3a4,	// (0x0004e5cf) aid_size_cell_vkb_ParamLimits

0xc3a4,	// (0x0004e5cf) aid_size_cell_vkb

0xc837,	// (0x0004ea62) cell_vkb_candidate_pane

0x878b,	// (0x0004a9b6) bg_popup_fep_shadow_pane_g1

0xc432,	// (0x0004e65d) fep_vkb_bottom_pane_ParamLimits

0xc432,	// (0x0004e65d) fep_vkb_bottom_pane

0xc468,	// (0x0004e693) fep_vkb_candidate_pane_ParamLimits

0xc468,	// (0x0004e693) fep_vkb_candidate_pane

0xc484,	// (0x0004e6af) fep_vkb_keypad_pane_ParamLimits

0xc484,	// (0x0004e6af) fep_vkb_keypad_pane

0xc4c3,	// (0x0004e6ee) fep_vkb_side_pane_ParamLimits

0xc4c3,	// (0x0004e6ee) fep_vkb_side_pane

0xc4ff,	// (0x0004e72a) fep_vkb_top_pane_ParamLimits

0xc4ff,	// (0x0004e72a) fep_vkb_top_pane

0xc534,	// (0x0004e75f) fep_vkb_top_pane_g1_ParamLimits

0xc534,	// (0x0004e75f) fep_vkb_top_pane_g1

0xc543,	// (0x0004e76e) fep_vkb_top_pane_g2_ParamLimits

0xc543,	// (0x0004e76e) fep_vkb_top_pane_g2

0xc552,	// (0x0004e77d) fep_vkb_top_pane_g3_ParamLimits

0xc552,	// (0x0004e77d) fep_vkb_top_pane_g3

0x0003,

0xfb38,	// (0x00051d63) fep_vkb_top_pane_g_ParamLimits

0xfb38,	// (0x00051d63) fep_vkb_top_pane_g

0xc570,	// (0x0004e79b) fep_vkb_top_text_pane_ParamLimits

0xc570,	// (0x0004e79b) fep_vkb_top_text_pane

0xc581,	// (0x0004e7ac) fep_vkb_side_pane_g1_ParamLimits

0xc581,	// (0x0004e7ac) fep_vkb_side_pane_g1

0xc5ca,	// (0x0004e7f5) grid_vkb_side_pane_ParamLimits

0xc5ca,	// (0x0004e7f5) grid_vkb_side_pane

0x8793,	// (0x0004a9be) bg_popup_fep_shadow_pane_g2

0x879c,	// (0x0004a9c7) bg_popup_fep_shadow_pane_g3

0x87a4,	// (0x0004a9cf) bg_popup_fep_shadow_pane_g4

0x87ad,	// (0x0004a9d8) bg_popup_fep_shadow_pane_g5

0x87b7,	// (0x0004a9e2) bg_popup_fep_shadow_pane_g6

0x87bf,	// (0x0004a9ea) bg_popup_fep_shadow_pane_g7

0x0d51,	// (0x00042f7c) bg_popup_fep_shadow_pane_g8

0xc621,	// (0x0004e84c) grid_vkb_keypad_number_pane_ParamLimits

0xc621,	// (0x0004e84c) grid_vkb_keypad_number_pane

0xc631,	// (0x0004e85c) grid_vkb_keypad_pane_ParamLimits

0xc631,	// (0x0004e85c) grid_vkb_keypad_pane

0xc657,	// (0x0004e882) fep_vkb_bottom_pane_g1_ParamLimits

0xc657,	// (0x0004e882) fep_vkb_bottom_pane_g1

0xc680,	// (0x0004e8ab) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc680,	// (0x0004e8ab) grid_vkb_keypad_bottom_left_pane

0xc695,	// (0x0004e8c0) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc695,	// (0x0004e8c0) grid_vkb_keypad_bottom_right_pane

0xc6aa,	// (0x0004e8d5) fep_vkb_top_text_pane_g1

0xc6c5,	// (0x0004e8f0) fep_vkb_top_text_pane_t1

0xc6da,	// (0x0004e905) cell_vkb_side_pane_ParamLimits

0xc6da,	// (0x0004e905) cell_vkb_side_pane

0xc2f2,	// (0x0004e51d) cell_vkb_side_pane_g1

0xc719,	// (0x0004e944) cell_vkb_keypad_pane_ParamLimits

0xc719,	// (0x0004e944) cell_vkb_keypad_pane

0xc78e,	// (0x0004e9b9) cell_vkb_keypad_pane_g1

0x0008,

0xfb65,	// (0x00051d90) bg_popup_fep_shadow_pane_g

0xc2f2,	// (0x0004e51d) cell_hwr_side_pane_g1

0xc2f2,	// (0x0004e51d) cell_hwr_side_pane_g2

0xc798,	// (0x0004e9c3) cell_vkb_keypad_pane_t1

0xc7a6,	// (0x0004e9d1) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc7a6,	// (0x0004e9d1) cell_vkb_keypad_bottom_left_pane

0xc7c3,	// (0x0004e9ee) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc7c3,	// (0x0004e9ee) cell_vkb_keypad_bottom_right_pane

0xc2f2,	// (0x0004e51d) cell_vkb_keypad_bottom_left_pane_g1

0xc2f2,	// (0x0004e51d) cell_vkb_keypad_bottom_right_pane_g1

0xc7fc,	// (0x0004ea27) cell_vkb_keypad_number_pane_ParamLimits

0xc7fc,	// (0x0004ea27) cell_vkb_keypad_number_pane

0xc81b,	// (0x0004ea46) cell_vkb_keypad_number_pane_g1

0xc825,	// (0x0004ea50) cell_vkb_keypad_number_pane_g2

0xc82e,	// (0x0004ea59) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb57,	// (0x00051d82) cell_vkb_keypad_number_pane_g

0xc798,	// (0x0004e9c3) cell_vkb_keypad_number_pane_t1

0xc852,	// (0x0004ea7d) fep_vkb_candidate_pane_g1

0x0001,

0xfb52,	// (0x00051d7d) cell_hwr_side_pane_g

0xc86b,	// (0x0004ea96) cell_hwr_side_pane_t1

0x87d1,	// (0x0004a9fc) cell_hwr_side_pane_t1_copy1

0xc562,	// (0x0004e78d) cell_hwr_candidate_pane_g1

0x87df,	// (0x0004aa0a) cell_hwr_candidate_pane_t1

0xc2f2,	// (0x0004e51d) cell_vkb_candidate_pane_g2

0xc8f1,	// (0x0004eb1c) cell_vkb_candidate_pane_t1

0x859f,	// (0x0004a7ca) bg_popup_fep_shadow_pane_ParamLimits

0x859f,	// (0x0004a7ca) bg_popup_fep_shadow_pane

0x26f5,	// (0x00044920) bg_fep_hwr_top_pane_g4

0xc372,	// (0x0004e59d) bg_hwr_side_pane_g1_ParamLimits

0xc372,	// (0x0004e59d) bg_hwr_side_pane_g1

0x86b7,	// (0x0004a8e2) cell_hwr_side_pane_ParamLimits

0x86b7,	// (0x0004a8e2) cell_hwr_side_pane

0x86f2,	// (0x0004a91d) fep_hwr_write_pane_g1_ParamLimits

0x86f2,	// (0x0004a91d) fep_hwr_write_pane_g1

0x86ff,	// (0x0004a92a) fep_hwr_write_pane_g2_ParamLimits

0x86ff,	// (0x0004a92a) fep_hwr_write_pane_g2

0x870c,	// (0x0004a937) fep_hwr_write_pane_g3_ParamLimits

0x870c,	// (0x0004a937) fep_hwr_write_pane_g3

0x871a,	// (0x0004a945) fep_hwr_write_pane_g4_ParamLimits

0x871a,	// (0x0004a945) fep_hwr_write_pane_g4

0x0005,

0xfb24,	// (0x00051d4f) fep_hwr_write_pane_g_ParamLimits

0xfb24,	// (0x00051d4f) fep_hwr_write_pane_g

0x26f5,	// (0x00044920) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x26f5,	// (0x00044920) bg_fep_hwr_candidate_pane_g2

0x872f,	// (0x0004a95a) cell_hwr_candidate_pane_ParamLimits

0x872f,	// (0x0004a95a) cell_hwr_candidate_pane

0x8771,	// (0x0004a99c) fep_hwr_candidate_pane_g1_ParamLimits

0xc3d2,	// (0x0004e5fd) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc3d2,	// (0x0004e5fd) bg_popup_fep_shadow_pane_cp2

0xc562,	// (0x0004e78d) fep_vkb_top_pane_g4_ParamLimits

0xc562,	// (0x0004e78d) fep_vkb_top_pane_g4

0xc5a8,	// (0x0004e7d3) fep_vkb_side_pane_g2_ParamLimits

0xc5a8,	// (0x0004e7d3) fep_vkb_side_pane_g2

0x5986,	// (0x00047bb1) list_setting_pane_t4_ParamLimits

0x5986,	// (0x00047bb1) list_setting_pane_t4

0x5a20,	// (0x00047c4b) list_setting_number_pane_t5_ParamLimits

0x5a20,	// (0x00047c4b) list_setting_number_pane_t5

0x7343,	// (0x0004956e) list_double_heading_pane_cp2_ParamLimits

0x7343,	// (0x0004956e) list_double_heading_pane_cp2

0xbe91,	// (0x0004e0bc) list_double_heading_pane_g1_cp2_ParamLimits

0xbe91,	// (0x0004e0bc) list_double_heading_pane_g1_cp2

0xc8ff,	// (0x0004eb2a) list_double_heading_pane_g2_cp2_ParamLimits

0xc8ff,	// (0x0004eb2a) list_double_heading_pane_g2_cp2

0xc913,	// (0x0004eb3e) list_double_heading_pane_t1_cp2_ParamLimits

0xc913,	// (0x0004eb3e) list_double_heading_pane_t1_cp2

0xc929,	// (0x0004eb54) list_double_heading_pane_t2_cp2_ParamLimits

0xc929,	// (0x0004eb54) list_double_heading_pane_t2_cp2

0x08ac,	// (0x00042ad7) aid_value_unit2

0x679d,	// (0x000489c8) popup_preview_fixed_window

0x0a4e,	// (0x00042c79) bg_popup_preview_window_pane_cp02

0xc93b,	// (0x0004eb66) list_preview_fixed_pane

0xc981,	// (0x0004ebac) list_empty_pane_fp_ParamLimits

0xc981,	// (0x0004ebac) list_empty_pane_fp

0xc981,	// (0x0004ebac) list_single_cale_day_pane_fp_ParamLimits

0xc981,	// (0x0004ebac) list_single_cale_day_pane_fp

0xc981,	// (0x0004ebac) list_single_graphic_heading_pane_fp_ParamLimits

0xc981,	// (0x0004ebac) list_single_graphic_heading_pane_fp

0xc981,	// (0x0004ebac) list_single_graphic_pane_fp_ParamLimits

0xc981,	// (0x0004ebac) list_single_graphic_pane_fp

0xc981,	// (0x0004ebac) list_single_heading_pane_fp_ParamLimits

0xc981,	// (0x0004ebac) list_single_heading_pane_fp

0xc981,	// (0x0004ebac) list_single_pane_fp_ParamLimits

0xc981,	// (0x0004ebac) list_single_pane_fp

0xc997,	// (0x0004ebc2) list_single_pane_fp_g1_ParamLimits

0xc997,	// (0x0004ebc2) list_single_pane_fp_g1

0xc9a3,	// (0x0004ebce) list_single_pane_fp_g2_ParamLimits

0xc9a3,	// (0x0004ebce) list_single_pane_fp_g2

0xc9af,	// (0x0004ebda) list_single_pane_fp_g3_ParamLimits

0xc9af,	// (0x0004ebda) list_single_pane_fp_g3

0xc9c3,	// (0x0004ebee) list_single_pane_fp_g4_ParamLimits

0xc9c3,	// (0x0004ebee) list_single_pane_fp_g4

0x0003,

0xfb86,	// (0x00051db1) list_single_pane_fp_g_ParamLimits

0xfb86,	// (0x00051db1) list_single_pane_fp_g

0x6213,	// (0x0004843e) list_single_pane_fp_t1_ParamLimits

0x6213,	// (0x0004843e) list_single_pane_fp_t1

0x622a,	// (0x00048455) list_single_graphic_pane_fp_g1_ParamLimits

0x622a,	// (0x00048455) list_single_graphic_pane_fp_g1

0xc997,	// (0x0004ebc2) list_single_graphic_pane_fp_g2_ParamLimits

0xc997,	// (0x0004ebc2) list_single_graphic_pane_fp_g2

0xc9a3,	// (0x0004ebce) list_single_graphic_pane_fp_g3_ParamLimits

0xc9a3,	// (0x0004ebce) list_single_graphic_pane_fp_g3

0xc9af,	// (0x0004ebda) list_single_graphic_pane_fp_g4_ParamLimits

0xc9af,	// (0x0004ebda) list_single_graphic_pane_fp_g4

0xc9c3,	// (0x0004ebee) list_single_graphic_pane_fp_g5_ParamLimits

0xc9c3,	// (0x0004ebee) list_single_graphic_pane_fp_g5

0x0004,

0xfb8f,	// (0x00051dba) list_single_graphic_pane_fp_g_ParamLimits

0xfb8f,	// (0x00051dba) list_single_graphic_pane_fp_g

0x6236,	// (0x00048461) list_single_graphic_pane_fp_t1_ParamLimits

0x6236,	// (0x00048461) list_single_graphic_pane_fp_t1

0x622a,	// (0x00048455) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x622a,	// (0x00048455) list_single_graphic_heading_pane_fp_g1

0xc997,	// (0x0004ebc2) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc997,	// (0x0004ebc2) list_single_graphic_heading_pane_fp_g2

0xc9a3,	// (0x0004ebce) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xc9a3,	// (0x0004ebce) list_single_graphic_heading_pane_fp_g3

0xc9af,	// (0x0004ebda) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc9af,	// (0x0004ebda) list_single_graphic_heading_pane_fp_g4

0xc9c3,	// (0x0004ebee) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc9c3,	// (0x0004ebee) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8f,	// (0x00051dba) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8f,	// (0x00051dba) list_single_graphic_heading_pane_fp_g

0x624c,	// (0x00048477) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x624c,	// (0x00048477) list_single_graphic_heading_pane_fp_t1

0x6262,	// (0x0004848d) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6262,	// (0x0004848d) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb9a,	// (0x00051dc5) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb9a,	// (0x00051dc5) list_single_graphic_heading_pane_fp_t

0x6274,	// (0x0004849f) list_single_cale_day_pane_fp_g1_ParamLimits

0x6274,	// (0x0004849f) list_single_cale_day_pane_fp_g1

0xc9cf,	// (0x0004ebfa) list_single_cale_day_pane_fp_g2_ParamLimits

0xc9cf,	// (0x0004ebfa) list_single_cale_day_pane_fp_g2

0x87fd,	// (0x0004aa28) list_single_cale_day_pane_fp_g3_ParamLimits

0x87fd,	// (0x0004aa28) list_single_cale_day_pane_fp_g3

0x8825,	// (0x0004aa50) list_single_cale_day_pane_fp_g4_ParamLimits

0x8825,	// (0x0004aa50) list_single_cale_day_pane_fp_g4

0x8849,	// (0x0004aa74) list_single_cale_day_pane_fp_g5_ParamLimits

0x8849,	// (0x0004aa74) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9f,	// (0x00051dca) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9f,	// (0x00051dca) list_single_cale_day_pane_fp_g

0x62ac,	// (0x000484d7) list_single_cale_day_pane_fp_t1_ParamLimits

0x62ac,	// (0x000484d7) list_single_cale_day_pane_fp_t1

0x62d2,	// (0x000484fd) list_single_cale_day_pane_fp_t2_ParamLimits

0x62d2,	// (0x000484fd) list_single_cale_day_pane_fp_t2

0x62eb,	// (0x00048516) list_single_cale_day_pane_fp_t3_ParamLimits

0x62eb,	// (0x00048516) list_single_cale_day_pane_fp_t3

0x0002,

0xfbaa,	// (0x00051dd5) list_single_cale_day_pane_fp_t_ParamLimits

0xfbaa,	// (0x00051dd5) list_single_cale_day_pane_fp_t

0xc997,	// (0x0004ebc2) list_empty_pane_fp_g1_ParamLimits

0xc997,	// (0x0004ebc2) list_empty_pane_fp_g1

0x6304,	// (0x0004852f) list_empty_pane_fp_t1

0x6312,	// (0x0004853d) list_empty_pane_fp_t2

0x0001,

0xfbb1,	// (0x00051ddc) list_empty_pane_fp_t

0xc997,	// (0x0004ebc2) list_single_heading_pane_fp_g1_ParamLimits

0xc997,	// (0x0004ebc2) list_single_heading_pane_fp_g1

0xc9a3,	// (0x0004ebce) list_single_heading_pane_fp_g2_ParamLimits

0xc9a3,	// (0x0004ebce) list_single_heading_pane_fp_g2

0xc9af,	// (0x0004ebda) list_single_heading_pane_fp_g3_ParamLimits

0xc9af,	// (0x0004ebda) list_single_heading_pane_fp_g3

0x0002,

0xfbb6,	// (0x00051de1) list_single_heading_pane_fp_g_ParamLimits

0xfbb6,	// (0x00051de1) list_single_heading_pane_fp_g

0x6320,	// (0x0004854b) list_single_heading_pane_fp_t1_ParamLimits

0x6320,	// (0x0004854b) list_single_heading_pane_fp_t1

0x6332,	// (0x0004855d) list_single_heading_pane_fp_t2_ParamLimits

0x6332,	// (0x0004855d) list_single_heading_pane_fp_t2

0x0001,

0xfbbd,	// (0x00051de8) list_single_heading_pane_fp_t_ParamLimits

0xfbbd,	// (0x00051de8) list_single_heading_pane_fp_t

0x7011,	// (0x0004923c) aid_size_cell_fast

0x0a31,	// (0x00042c5c) soft_indicator_pane_cp1_t1

0x701a,	// (0x00049245) cell_app_pane_cp2_ParamLimits

0x701a,	// (0x00049245) cell_app_pane_cp2

0x85c1,	// (0x0004a7ec) fep_hwr_candidate_drop_down_list_pane

0x2703,	// (0x0004492e) fep_hwr_candidate_pane_g3_ParamLimits

0x2703,	// (0x0004492e) fep_hwr_candidate_pane_g3

0x2710,	// (0x0004493b) fep_hwr_candidate_pane_g4_ParamLimits

0x2710,	// (0x0004493b) fep_hwr_candidate_pane_g4

0x0002,

0xfb31,	// (0x00051d5c) fep_hwr_candidate_pane_g_ParamLimits

0xfb31,	// (0x00051d5c) fep_hwr_candidate_pane_g

0xc457,	// (0x0004e682) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc457,	// (0x0004e682) fep_vkb_candidate_drop_down_list_pane

0xc85a,	// (0x0004ea85) fep_vkb_candidate_pane_g3

0xc862,	// (0x0004ea8d) fep_vkb_candidate_pane_g4

0x0002,

0xfb5e,	// (0x00051d89) fep_vkb_candidate_pane_g

0xc562,	// (0x0004e78d) cell_hwr_candidate_pane_g1_ParamLimits

0xc879,	// (0x0004eaa4) cell_hwr_candidate_pane_g3_ParamLimits

0xc879,	// (0x0004eaa4) cell_hwr_candidate_pane_g3

0xc89a,	// (0x0004eac5) cell_hwr_candidate_pane_g4_ParamLimits

0xc89a,	// (0x0004eac5) cell_hwr_candidate_pane_g4

0x0002,

0xfb78,	// (0x00051da3) cell_hwr_candidate_pane_g_ParamLimits

0xfb78,	// (0x00051da3) cell_hwr_candidate_pane_g

0xc8bb,	// (0x0004eae6) cell_vkb_candidate_pane_g3_ParamLimits

0xc8bb,	// (0x0004eae6) cell_vkb_candidate_pane_g3

0xc8d6,	// (0x0004eb01) cell_vkb_candidate_pane_g4_ParamLimits

0xc8d6,	// (0x0004eb01) cell_vkb_candidate_pane_g4

0xc9db,	// (0x0004ec06) cell_app_pane_cp2_g1_ParamLimits

0xc9db,	// (0x0004ec06) cell_app_pane_cp2_g1

0xc9f9,	// (0x0004ec24) cell_app_pane_cp2_g2_ParamLimits

0xc9f9,	// (0x0004ec24) cell_app_pane_cp2_g2

0x0001,

0xfbc2,	// (0x00051ded) cell_app_pane_cp2_g_ParamLimits

0xfbc2,	// (0x00051ded) cell_app_pane_cp2_g

0xca05,	// (0x0004ec30) cell_app_pane_cp2_t1_ParamLimits

0xca05,	// (0x0004ec30) cell_app_pane_cp2_t1

0x0cd6,	// (0x00042f01) grid_highlight_pane_cp1_ParamLimits

0x0cd6,	// (0x00042f01) grid_highlight_pane_cp1

0x886d,	// (0x0004aa98) cell_hwr_candidate_pane_cp1_ParamLimits

0x886d,	// (0x0004aa98) cell_hwr_candidate_pane_cp1

0xc562,	// (0x0004e78d) fep_hwr_candidate_drop_down_list_pane_g1

0xca17,	// (0x0004ec42) fep_hwr_candidate_drop_down_list_pane_g2

0xca24,	// (0x0004ec4f) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc7,	// (0x00051df2) fep_hwr_candidate_drop_down_list_pane_g

0x888c,	// (0x0004aab7) fep_hwr_candidate_drop_down_list_scroll_pane

0x8895,	// (0x0004aac0) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8895,	// (0x0004aac0) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x88a2,	// (0x0004aacd) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x88a2,	// (0x0004aacd) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x88af,	// (0x0004aada) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x88af,	// (0x0004aada) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc8bb,	// (0x0004eae6) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc8bb,	// (0x0004eae6) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc8d6,	// (0x0004eb01) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc8d6,	// (0x0004eb01) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x88bc,	// (0x0004aae7) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x88bc,	// (0x0004aae7) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x88d7,	// (0x0004ab02) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x88d7,	// (0x0004ab02) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x88f2,	// (0x0004ab1d) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x88f2,	// (0x0004ab1d) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbce,	// (0x00051df9) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbce,	// (0x00051df9) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xca31,	// (0x0004ec5c) cell_vkb_candidate_pane_cp1_ParamLimits

0xca31,	// (0x0004ec5c) cell_vkb_candidate_pane_cp1

0xc562,	// (0x0004e78d) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc562,	// (0x0004e78d) fep_vkb_candidate_drop_down_list_pane_g1

0xca17,	// (0x0004ec42) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xca17,	// (0x0004ec42) fep_vkb_candidate_drop_down_list_pane_g2

0xca24,	// (0x0004ec4f) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xca24,	// (0x0004ec4f) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc7,	// (0x00051df2) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc7,	// (0x00051df2) fep_vkb_candidate_drop_down_list_pane_g

0xca51,	// (0x0004ec7c) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xca51,	// (0x0004ec7c) fep_vkb_candidate_drop_down_list_scroll_pane

0xca5e,	// (0x0004ec89) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xca5e,	// (0x0004ec89) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xca6b,	// (0x0004ec96) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xca6b,	// (0x0004ec96) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xca77,	// (0x0004eca2) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xca77,	// (0x0004eca2) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc879,	// (0x0004eaa4) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc879,	// (0x0004eaa4) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc89a,	// (0x0004eac5) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc89a,	// (0x0004eac5) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xca83,	// (0x0004ecae) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xca83,	// (0x0004ecae) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xcaa4,	// (0x0004eccf) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xcaa4,	// (0x0004eccf) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xcac5,	// (0x0004ecf0) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xcac5,	// (0x0004ecf0) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbdf,	// (0x00051e0a) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbdf,	// (0x00051e0a) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x68b7,	// (0x00048ae2) title_pane_g1_ParamLimits

0x68c4,	// (0x00048aef) title_pane_g2_ParamLimits

0xf54e,	// (0x00051779) title_pane_g_ParamLimits

0x1104,	// (0x0004332f) aid_call2_pane

0x10fc,	// (0x00043327) aid_call_pane

0x110c,	// (0x00043337) popup_clock_analogue_window_g1

0x110c,	// (0x00043337) popup_clock_analogue_window_g2

0x7324,	// (0x0004954f) popup_clock_analogue_window_g3

0x732d,	// (0x00049558) popup_clock_analogue_window_g4

0x08be,	// (0x00042ae9) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x00051928) popup_clock_analogue_window_g

0x7335,	// (0x00049560) popup_clock_analogue_window_t1

0x736d,	// (0x00049598) clock_digital_number_pane_ParamLimits

0x736d,	// (0x00049598) clock_digital_number_pane

0x7379,	// (0x000495a4) clock_digital_number_pane_cp02_ParamLimits

0x7379,	// (0x000495a4) clock_digital_number_pane_cp02

0x7385,	// (0x000495b0) clock_digital_number_pane_cp03_ParamLimits

0x7385,	// (0x000495b0) clock_digital_number_pane_cp03

0x7391,	// (0x000495bc) clock_digital_number_pane_cp04_ParamLimits

0x7391,	// (0x000495bc) clock_digital_number_pane_cp04

0x739d,	// (0x000495c8) clock_digital_separator_pane_ParamLimits

0x739d,	// (0x000495c8) clock_digital_separator_pane

0x73a9,	// (0x000495d4) popup_clock_digital_window_t1_ParamLimits

0x73a9,	// (0x000495d4) popup_clock_digital_window_t1

0x08be,	// (0x00042ae9) clock_digital_number_pane_g1

0x08be,	// (0x00042ae9) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x00051933) clock_digital_number_pane_g

0x08be,	// (0x00042ae9) clock_digital_separator_pane_g1

0x08be,	// (0x00042ae9) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x00051933) clock_digital_separator_pane_g

0x9849,	// (0x0004ba74) aid_fill_nsta_ParamLimits

0x9995,	// (0x0004bbc0) indicator_nsta_pane_ParamLimits

0x9b0e,	// (0x0004bd39) popup_clock_analogue_window

0x9b0e,	// (0x0004bd39) popup_clock_digital_window

0x0924,	// (0x00042b4f) grid_indicator_nsta_pane_ParamLimits

0xbcda,	// (0x0004df05) clock_nsta_pane_t2

0x0001,

0xfab1,	// (0x00051cdc) clock_nsta_pane_t

0x724f,	// (0x0004947a) aid_size_max_handle

0x7259,	// (0x00049484) aid_size_min_handle

0x7767,	// (0x00049992) editor_scroll_pane

0xcae0,	// (0x0004ed0b) ex_editor_pane

0x0df8,	// (0x00043023) scroll_pane_cp13

0x0c7e,	// (0x00042ea9) scroll_pane_cp14

0x113b,	// (0x00043366) scroll_pane_cp36

0x7357,	// (0x00049582) list_single_graphic_hl_pane_cp2_ParamLimits

0x7357,	// (0x00049582) list_single_graphic_hl_pane_cp2

0x5f16,	// (0x00048141) list_single_graphic_hl_pane_ParamLimits

0x5f16,	// (0x00048141) list_single_graphic_hl_pane

0x6348,	// (0x00048573) aid_size_min_hl_cp1

0xcae8,	// (0x0004ed13) list_highlight_pane_cp34_ParamLimits

0xcae8,	// (0x0004ed13) list_highlight_pane_cp34

0xcaf9,	// (0x0004ed24) list_single_graphic_hl_pane_g1_ParamLimits

0xcaf9,	// (0x0004ed24) list_single_graphic_hl_pane_g1

0x6351,	// (0x0004857c) list_single_graphic_hl_pane_g2_ParamLimits

0x6351,	// (0x0004857c) list_single_graphic_hl_pane_g2

0x6351,	// (0x0004857c) list_single_graphic_hl_pane_g3_ParamLimits

0x6351,	// (0x0004857c) list_single_graphic_hl_pane_g3

0x76d8,	// (0x00049903) list_single_graphic_hl_pane_g4_ParamLimits

0x76d8,	// (0x00049903) list_single_graphic_hl_pane_g4

0x635d,	// (0x00048588) list_single_graphic_hl_pane_g5_ParamLimits

0x635d,	// (0x00048588) list_single_graphic_hl_pane_g5

0x0004,

0xfbf0,	// (0x00051e1b) list_single_graphic_hl_pane_g_ParamLimits

0xfbf0,	// (0x00051e1b) list_single_graphic_hl_pane_g

0x6371,	// (0x0004859c) list_single_graphic_hl_pane_t1_ParamLimits

0x6371,	// (0x0004859c) list_single_graphic_hl_pane_t1

0xcb06,	// (0x0004ed31) aid_size_min_hl_cp2

0xcb0f,	// (0x0004ed3a) list_highlight_pane_cp34_cp2_ParamLimits

0xcb0f,	// (0x0004ed3a) list_highlight_pane_cp34_cp2

0xcaf9,	// (0x0004ed24) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xcaf9,	// (0x0004ed24) list_single_graphic_hl_pane_g1_cp2

0xcb1c,	// (0x0004ed47) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xcb1c,	// (0x0004ed47) list_single_graphic_hl_pane_g2_cp2

0xcb28,	// (0x0004ed53) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcb28,	// (0x0004ed53) list_single_graphic_hl_pane_g3_cp2

0x4c10,	// (0x00046e3b) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x4c10,	// (0x00046e3b) list_single_graphic_hl_pane_g4_cp2

0xcb36,	// (0x0004ed61) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xcb36,	// (0x0004ed61) list_single_graphic_hl_pane_g5_cp2

0x78cc,	// (0x00049af7) control_pane_g4_ParamLimits

0x78cc,	// (0x00049af7) control_pane_g4

0x9827,	// (0x0004ba52) bg_popup_sub_pane_cp10_ParamLimits

0xc2fc,	// (0x0004e527) list_choice_list_pane_ParamLimits

0xc30b,	// (0x0004e536) scroll_pane_cp23

0x0a4e,	// (0x00042c79) bg_popup_preview_window_pane_cp02_ParamLimits

0xc93b,	// (0x0004eb66) list_preview_fixed_pane_ParamLimits

0xc951,	// (0x0004eb7c) list_preview_fixed_pane_cp_ParamLimits

0xc951,	// (0x0004eb7c) list_preview_fixed_pane_cp

0xc95d,	// (0x0004eb88) popup_preview_fixed_window_g1_ParamLimits

0xc95d,	// (0x0004eb88) popup_preview_fixed_window_g1

0xc969,	// (0x0004eb94) popup_preview_fixed_window_g2_ParamLimits

0xc969,	// (0x0004eb94) popup_preview_fixed_window_g2

0x0002,

0xfb7f,	// (0x00051daa) popup_preview_fixed_window_g_ParamLimits

0xfb7f,	// (0x00051daa) popup_preview_fixed_window_g

0x7129,	// (0x00049354) aid_navi_side_left_pane_ParamLimits

0x713e,	// (0x00049369) aid_navi_side_right_pane_ParamLimits

0x7156,	// (0x00049381) navi_icon_pane_stacon_ParamLimits

0x716a,	// (0x00049395) navi_navi_pane_stacon_ParamLimits

0x7156,	// (0x00049381) navi_text_pane_stacon_ParamLimits

0x08b4,	// (0x00042adf) main_text_info_pane

0xcb60,	// (0x0004ed8b) listscroll_text_info_pane

0xcb68,	// (0x0004ed93) list_text_info_pane_ParamLimits

0xcb68,	// (0x0004ed93) list_text_info_pane

0xcb77,	// (0x0004eda2) scroll_pane_cp24_ParamLimits

0xcb77,	// (0x0004eda2) scroll_pane_cp24

0xcb95,	// (0x0004edc0) list_text_info_pane_t1_ParamLimits

0xcb95,	// (0x0004edc0) list_text_info_pane_t1

0x7a30,	// (0x00049c5b) popup_fast_swap2_window_ParamLimits

0x7a30,	// (0x00049c5b) popup_fast_swap2_window

0xcbc9,	// (0x0004edf4) aid_size_cell_fast2

0x08b4,	// (0x00042adf) bg_popup_window_pane_cp17

0xa193,	// (0x0004c3be) heading_pane_cp2

0x0b82,	// (0x00042dad) listscroll_fast2_pane

0xcbd3,	// (0x0004edfe) grid_fast2_pane

0xcbdd,	// (0x0004ee08) listscroll_fast2_pane_g1

0xcbe5,	// (0x0004ee10) listscroll_fast2_pane_g2

0x0001,

0xfbfb,	// (0x00051e26) listscroll_fast2_pane_g

0x0df8,	// (0x00043023) scroll_pane_cp26

0xcbef,	// (0x0004ee1a) cell_fast2_pane_ParamLimits

0xcbef,	// (0x0004ee1a) cell_fast2_pane

0xcc04,	// (0x0004ee2f) cell_fast2_pane_g1

0xcc0d,	// (0x0004ee38) cell_fast2_pane_g2

0xcc16,	// (0x0004ee41) cell_fast2_pane_g3

0x0002,

0xfc00,	// (0x00051e2b) cell_fast2_pane_g

0x0bb5,	// (0x00042de0) grid_highlight_pane_cp9

0x0bca,	// (0x00042df5) main_eswt_pane_ParamLimits

0x0bca,	// (0x00042df5) main_eswt_pane

0xcb8c,	// (0x0004edb7) list_single_text_info_pane

0xcc1e,	// (0x0004ee49) eswt_ctrl_button_pane

0xcc1e,	// (0x0004ee49) eswt_ctrl_canvas_pane

0xcc26,	// (0x0004ee51) eswt_ctrl_combo_pane

0xcc1e,	// (0x0004ee49) eswt_ctrl_default_pane

0xcc1e,	// (0x0004ee49) eswt_ctrl_label_pane

0xcc2e,	// (0x0004ee59) eswt_ctrl_wait_pane

0xcc36,	// (0x0004ee61) eswt_shell_pane

0x08b4,	// (0x00042adf) listscroll_eswt_app_pane

0xcc56,	// (0x0004ee81) popup_eswt_tasktip_window_ParamLimits

0xcc56,	// (0x0004ee81) popup_eswt_tasktip_window

0x9da8,	// (0x0004bfd3) bg_popup_window_pane_cp18

0xcc67,	// (0x0004ee92) eswt_control_pane_g1_ParamLimits

0xcc67,	// (0x0004ee92) eswt_control_pane_g1

0xcc74,	// (0x0004ee9f) eswt_control_pane_g2_ParamLimits

0xcc74,	// (0x0004ee9f) eswt_control_pane_g2

0xcc81,	// (0x0004eeac) eswt_control_pane_g3_ParamLimits

0xcc81,	// (0x0004eeac) eswt_control_pane_g3

0xcc8e,	// (0x0004eeb9) eswt_control_pane_g4_ParamLimits

0xcc8e,	// (0x0004eeb9) eswt_control_pane_g4

0x0003,

0xfc07,	// (0x00051e32) eswt_control_pane_g_ParamLimits

0xfc07,	// (0x00051e32) eswt_control_pane_g

0x0cd6,	// (0x00042f01) bg_button_pane_ParamLimits

0x0cd6,	// (0x00042f01) bg_button_pane

0x0bca,	// (0x00042df5) common_borders_pane_copy2_ParamLimits

0x0bca,	// (0x00042df5) common_borders_pane_copy2

0xcc9b,	// (0x0004eec6) control_button_pane_g1_ParamLimits

0xcc9b,	// (0x0004eec6) control_button_pane_g1

0xcca7,	// (0x0004eed2) control_button_pane_g2_ParamLimits

0xcca7,	// (0x0004eed2) control_button_pane_g2

0xccb3,	// (0x0004eede) control_button_pane_g3_ParamLimits

0xccb3,	// (0x0004eede) control_button_pane_g3

0x0002,

0xfc10,	// (0x00051e3b) control_button_pane_g_ParamLimits

0xfc10,	// (0x00051e3b) control_button_pane_g

0xccc7,	// (0x0004eef2) control_button_pane_t1

0xccd5,	// (0x0004ef00) control_button_pane_t2

0x0001,

0xfc17,	// (0x00051e42) control_button_pane_t

0x9d34,	// (0x0004bf5f) bg_button_pane_g1

0x9d3c,	// (0x0004bf67) bg_button_pane_g2

0x9d44,	// (0x0004bf6f) bg_button_pane_g3

0x9d4c,	// (0x0004bf77) bg_button_pane_g4

0x9d54,	// (0x0004bf7f) bg_button_pane_g5

0x9d5c,	// (0x0004bf87) bg_button_pane_g6

0x9d64,	// (0x0004bf8f) bg_button_pane_g7

0x9d6c,	// (0x0004bf97) bg_button_pane_g8

0x9d74,	// (0x0004bf9f) bg_button_pane_g9

0x0008,

0xf86b,	// (0x00051a96) bg_button_pane_g

0xc2b7,	// (0x0004e4e2) common_borders_pane_ParamLimits

0xc2b7,	// (0x0004e4e2) common_borders_pane

0xcc67,	// (0x0004ee92) eswt_control_pane_g1_copy1_ParamLimits

0xcc67,	// (0x0004ee92) eswt_control_pane_g1_copy1

0xcc74,	// (0x0004ee9f) eswt_control_pane_g2_copy1_ParamLimits

0xcc74,	// (0x0004ee9f) eswt_control_pane_g2_copy1

0xcc81,	// (0x0004eeac) eswt_control_pane_g3_copy1_ParamLimits

0xcc81,	// (0x0004eeac) eswt_control_pane_g3_copy1

0xcc8e,	// (0x0004eeb9) eswt_control_pane_g4_copy1_ParamLimits

0xcc8e,	// (0x0004eeb9) eswt_control_pane_g4_copy1

0xc2f2,	// (0x0004e51d) bg_eswt_ctrl_canvas_pane_g1

0xc2b7,	// (0x0004e4e2) common_borders_pane_cp2_ParamLimits

0xc2b7,	// (0x0004e4e2) common_borders_pane_cp2

0xc2b7,	// (0x0004e4e2) common_borders_pane_cp3_ParamLimits

0xc2b7,	// (0x0004e4e2) common_borders_pane_cp3

0xcce3,	// (0x0004ef0e) separator_horizontal_pane

0xcceb,	// (0x0004ef16) separator_vertical_pane

0xcc67,	// (0x0004ee92) eswt_control_pane_g1_copy2_ParamLimits

0xcc67,	// (0x0004ee92) eswt_control_pane_g1_copy2

0xcc74,	// (0x0004ee9f) eswt_control_pane_g2_copy2_ParamLimits

0xcc74,	// (0x0004ee9f) eswt_control_pane_g2_copy2

0xcc81,	// (0x0004eeac) eswt_control_pane_g3_copy2_ParamLimits

0xcc81,	// (0x0004eeac) eswt_control_pane_g3_copy2

0xcc8e,	// (0x0004eeb9) eswt_control_pane_g4_copy2_ParamLimits

0xcc8e,	// (0x0004eeb9) eswt_control_pane_g4_copy2

0x08b4,	// (0x00042adf) common_borders_pane_cp4

0xccf4,	// (0x0004ef1f) separator_horizontal_pane_g1

0xccfd,	// (0x0004ef28) separator_horizontal_pane_g2

0xcd06,	// (0x0004ef31) separator_horizontal_pane_g3

0x0002,

0xfc1c,	// (0x00051e47) separator_horizontal_pane_g

0xcc67,	// (0x0004ee92) eswt_control_pane_g1_copy3_ParamLimits

0xcc67,	// (0x0004ee92) eswt_control_pane_g1_copy3

0xcc74,	// (0x0004ee9f) eswt_control_pane_g2_copy3_ParamLimits

0xcc74,	// (0x0004ee9f) eswt_control_pane_g2_copy3

0xcc81,	// (0x0004eeac) eswt_control_pane_g3_copy3_ParamLimits

0xcc81,	// (0x0004eeac) eswt_control_pane_g3_copy3

0xcc8e,	// (0x0004eeb9) eswt_control_pane_g4_copy3_ParamLimits

0xcc8e,	// (0x0004eeb9) eswt_control_pane_g4_copy3

0x08b4,	// (0x00042adf) common_borders_pane_cp5

0xcd0f,	// (0x0004ef3a) separator_vertical_pane_g1

0xcd18,	// (0x0004ef43) separator_vertical_pane_g2

0xcd21,	// (0x0004ef4c) separator_vertical_pane_g3

0x0002,

0xfc23,	// (0x00051e4e) separator_vertical_pane_g

0xcc67,	// (0x0004ee92) eswt_control_pane_g1_copy4_ParamLimits

0xcc67,	// (0x0004ee92) eswt_control_pane_g1_copy4

0xcc74,	// (0x0004ee9f) eswt_control_pane_g2_copy4_ParamLimits

0xcc74,	// (0x0004ee9f) eswt_control_pane_g2_copy4

0xcc81,	// (0x0004eeac) eswt_control_pane_g3_copy4_ParamLimits

0xcc81,	// (0x0004eeac) eswt_control_pane_g3_copy4

0xcc8e,	// (0x0004eeb9) eswt_control_pane_g4_copy4_ParamLimits

0xcc8e,	// (0x0004eeb9) eswt_control_pane_g4_copy4

0xcd2a,	// (0x0004ef55) eswt_ctrl_combo_button_pane

0xcd32,	// (0x0004ef5d) eswt_ctrl_input_pane

0xcd3a,	// (0x0004ef65) popup_choice_list_window_cp70

0xcd42,	// (0x0004ef6d) eswt_ctrl_input_pane_t1

0x08b4,	// (0x00042adf) input_focus_pane_cp70

0xc2b7,	// (0x0004e4e2) bg_button_pane_cp70_ParamLimits

0xc2b7,	// (0x0004e4e2) bg_button_pane_cp70

0xcd50,	// (0x0004ef7b) eswt_ctrl_combo_button_pane_g1

0xcd58,	// (0x0004ef83) wait_bar_pane_cp70

0x9da8,	// (0x0004bfd3) bg_popup_window_pane_cp70_ParamLimits

0x9da8,	// (0x0004bfd3) bg_popup_window_pane_cp70

0xcd60,	// (0x0004ef8b) popup_eswt_tasktip_window_t1

0xcd76,	// (0x0004efa1) wait_bar_pane_cp71_ParamLimits

0xcd76,	// (0x0004efa1) wait_bar_pane_cp71

0xcd82,	// (0x0004efad) grid_eswt_app_pane

0x0fdf,	// (0x0004320a) scroll_pane_cp70

0xcd8b,	// (0x0004efb6) cell_eswt_app_pane_ParamLimits

0xcd8b,	// (0x0004efb6) cell_eswt_app_pane

0xcdbb,	// (0x0004efe6) cell_eswt_app_pane_g1_ParamLimits

0xcdbb,	// (0x0004efe6) cell_eswt_app_pane_g1

0xcdea,	// (0x0004f015) cell_eswt_app_pane_g2_ParamLimits

0xcdea,	// (0x0004f015) cell_eswt_app_pane_g2

0x0001,

0xfc2a,	// (0x00051e55) cell_eswt_app_pane_g_ParamLimits

0xfc2a,	// (0x00051e55) cell_eswt_app_pane_g

0xce0e,	// (0x0004f039) cell_eswt_app_pane_t1_ParamLimits

0xce0e,	// (0x0004f039) cell_eswt_app_pane_t1

0xce40,	// (0x0004f06b) grid_highlight_pane_cp70_ParamLimits

0xce40,	// (0x0004f06b) grid_highlight_pane_cp70

0x4bb4,	// (0x00046ddf) set_content_pane_g1

0x9788,	// (0x0004b9b3) status_small_volume_pane

0x890d,	// (0x0004ab38) status_small_volume_pane_g1

0x8915,	// (0x0004ab40) volume_small2_pane

0x891e,	// (0x0004ab49) volume_small2_pane_g1

0x8927,	// (0x0004ab52) volume_small2_pane_g2

0x8930,	// (0x0004ab5b) volume_small2_pane_g3

0x8939,	// (0x0004ab64) volume_small2_pane_g4

0x8942,	// (0x0004ab6d) volume_small2_pane_g5

0x894b,	// (0x0004ab76) volume_small2_pane_g6

0x8954,	// (0x0004ab7f) volume_small2_pane_g7

0x895d,	// (0x0004ab88) volume_small2_pane_g8

0x8966,	// (0x0004ab91) volume_small2_pane_g9

0x896f,	// (0x0004ab9a) volume_small2_pane_g10

0x0009,

0xfc2f,	// (0x00051e5a) volume_small2_pane_g

0xc6aa,	// (0x0004e8d5) fep_vkb_top_text_pane_g1_ParamLimits

0xc6c5,	// (0x0004e8f0) fep_vkb_top_text_pane_t1_ParamLimits

0xc975,	// (0x0004eba0) popup_preview_fixed_window_g3_ParamLimits

0xc975,	// (0x0004eba0) popup_preview_fixed_window_g3

0x7edf,	// (0x0004a10a) popup_toolbar_trans_pane

0xb0d7,	// (0x0004d302) aid_height_set_list_ParamLimits

0xb0e8,	// (0x0004d313) aid_size_parent_ParamLimits

0x9827,	// (0x0004ba52) list_highlight_pane_cp2_ParamLimits

0x4bb4,	// (0x00046ddf) set_content_pane_g1_ParamLimits

0x837a,	// (0x0004a5a5) list_single_image_pane_ParamLimits

0x837a,	// (0x0004a5a5) list_single_image_pane

0xce4c,	// (0x0004f077) aid_size_cell_image_ParamLimits

0xce4c,	// (0x0004f077) aid_size_cell_image

0xce59,	// (0x0004f084) grid_single_image_pane_ParamLimits

0xce59,	// (0x0004f084) grid_single_image_pane

0xc9a3,	// (0x0004ebce) list_single_image_pane_g1_ParamLimits

0xc9a3,	// (0x0004ebce) list_single_image_pane_g1

0xc9af,	// (0x0004ebda) list_single_image_pane_g2_ParamLimits

0xc9af,	// (0x0004ebda) list_single_image_pane_g2

0x0001,

0xfc44,	// (0x00051e6f) list_single_image_pane_g_ParamLimits

0xfc44,	// (0x00051e6f) list_single_image_pane_g

0xce67,	// (0x0004f092) list_single_image_pane_t1_ParamLimits

0xce67,	// (0x0004f092) list_single_image_pane_t1

0xce7d,	// (0x0004f0a8) cell_image_list_pane_ParamLimits

0xce7d,	// (0x0004f0a8) cell_image_list_pane

0xce91,	// (0x0004f0bc) cell_image_list_pane_g1

0xce9a,	// (0x0004f0c5) cell_image_list_pane_g2

0x0001,

0xfc49,	// (0x00051e74) cell_image_list_pane_g

0xcea3,	// (0x0004f0ce) aid_size_cell_tb_trans_pane

0x0cd6,	// (0x00042f01) bg_tb_trans_pane

0xceb5,	// (0x0004f0e0) grid_tb_trans_pane

0x9d34,	// (0x0004bf5f) bg_tb_trans_pane_g1

0x9d3c,	// (0x0004bf67) bg_tb_trans_pane_g2

0x9d44,	// (0x0004bf6f) bg_tb_trans_pane_g3

0x9d4c,	// (0x0004bf77) bg_tb_trans_pane_g4

0x9d54,	// (0x0004bf7f) bg_tb_trans_pane_g5

0x9d6c,	// (0x0004bf97) bg_tb_trans_pane_g6

0x9d74,	// (0x0004bf9f) bg_tb_trans_pane_g7

0x9d5c,	// (0x0004bf87) bg_tb_trans_pane_g8

0x9d64,	// (0x0004bf8f) bg_tb_trans_pane_g9

0x0008,

0xfc4e,	// (0x00051e79) bg_tb_trans_pane_g

0xcec9,	// (0x0004f0f4) cell_toolbar_trans_pane_ParamLimits

0xcec9,	// (0x0004f0f4) cell_toolbar_trans_pane

0xc2f2,	// (0x0004e51d) cell_toolbar_trans_pane_g1

0xbeb7,	// (0x0004e0e2) list_form2_midp_pane_t1

0xbec5,	// (0x0004e0f0) list_form2_midp_pane_t2

0x0001,

0xfaf7,	// (0x00051d22) list_form2_midp_pane_t

0xbed3,	// (0x0004e0fe) scroll_pane_cp51_ParamLimits

0xc08f,	// (0x0004e2ba) form2_midp_wait_pane_g1

0xc098,	// (0x0004e2c3) form2_midp_wait_pane_g2

0xc0a1,	// (0x0004e2cc) form2_midp_wait_pane_g3

0x0002,

0xfb0c,	// (0x00051d37) form2_midp_wait_pane_g

0x0924,	// (0x00042b4f) list_highlight_pane_cp21_ParamLimits

0xc0e9,	// (0x0004e314) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc0f8,	// (0x0004e323) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x831b,	// (0x0004a546) list_single_2graphic_im_pane_ParamLimits

0x831b,	// (0x0004a546) list_single_2graphic_im_pane

0xceef,	// (0x0004f11a) list_single_2graphic_im_pane_g1_ParamLimits

0xceef,	// (0x0004f11a) list_single_2graphic_im_pane_g1

0xcf00,	// (0x0004f12b) list_single_2graphic_im_pane_g2_ParamLimits

0xcf00,	// (0x0004f12b) list_single_2graphic_im_pane_g2

0xcf0c,	// (0x0004f137) list_single_2graphic_im_pane_g3_ParamLimits

0xcf0c,	// (0x0004f137) list_single_2graphic_im_pane_g3

0x0003,

0xfc61,	// (0x00051e8c) list_single_2graphic_im_pane_g_ParamLimits

0xfc61,	// (0x00051e8c) list_single_2graphic_im_pane_g

0xcf2c,	// (0x0004f157) list_single_2graphic_im_pane_t1_ParamLimits

0xcf2c,	// (0x0004f157) list_single_2graphic_im_pane_t1

0xc981,	// (0x0004ebac) list_single_graphic_2heading_pane_fp_ParamLimits

0xc981,	// (0x0004ebac) list_single_graphic_2heading_pane_fp

0x622a,	// (0x00048455) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x622a,	// (0x00048455) list_single_graphic_2heading_pane_fp_g1

0xc997,	// (0x0004ebc2) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc997,	// (0x0004ebc2) list_single_graphic_2heading_pane_fp_g2

0xc9a3,	// (0x0004ebce) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xc9a3,	// (0x0004ebce) list_single_graphic_2heading_pane_fp_g3

0xc9af,	// (0x0004ebda) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc9af,	// (0x0004ebda) list_single_graphic_2heading_pane_fp_g4

0xc9c3,	// (0x0004ebee) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc9c3,	// (0x0004ebee) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8f,	// (0x00051dba) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8f,	// (0x00051dba) list_single_graphic_2heading_pane_fp_g

0x6387,	// (0x000485b2) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x6387,	// (0x000485b2) list_single_graphic_2heading_pane_fp_t1

0x6262,	// (0x0004848d) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6262,	// (0x0004848d) list_single_graphic_2heading_pane_fp_t2

0x639d,	// (0x000485c8) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x639d,	// (0x000485c8) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6a,	// (0x00051e95) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6a,	// (0x00051e95) list_single_graphic_2heading_pane_fp_t

0xc37e,	// (0x0004e5a9) fep_hwr_write_pane_g5_ParamLimits

0xc37e,	// (0x0004e5a9) fep_hwr_write_pane_g5

0xc38a,	// (0x0004e5b5) fep_hwr_write_pane_g6_ParamLimits

0xc38a,	// (0x0004e5b5) fep_hwr_write_pane_g6

0xcc36,	// (0x0004ee61) eswt_shell_pane_ParamLimits

0x9da8,	// (0x0004bfd3) bg_popup_window_pane_cp18_ParamLimits

0xb030,	// (0x0004d25b) heading_pane_cp70

0xcd60,	// (0x0004ef8b) popup_eswt_tasktip_window_t1_ParamLimits

0x989e,	// (0x0004bac9) aid_touch_tab_arrow_left

0x98ad,	// (0x0004bad8) aid_touch_tab_arrow_right

0x68d5,	// (0x00048b00) title_pane_g3_ParamLimits

0x68d5,	// (0x00048b00) title_pane_g3

0x0c9e,	// (0x00042ec9) set_value_pane_g1

0x7edf,	// (0x0004a10a) popup_toolbar_trans_pane_ParamLimits

0xcea3,	// (0x0004f0ce) aid_size_cell_tb_trans_pane_ParamLimits

0x0cd6,	// (0x00042f01) bg_tb_trans_pane_ParamLimits

0xceb5,	// (0x0004f0e0) grid_tb_trans_pane_ParamLimits

0x0a4e,	// (0x00042c79) cont_note_pane_ParamLimits

0x0a4e,	// (0x00042c79) cont_note_pane

0x0bca,	// (0x00042df5) cont_snote2_single_text_pane_ParamLimits

0x0bca,	// (0x00042df5) cont_snote2_single_text_pane

0x0bca,	// (0x00042df5) cont_snote2_single_graphic_pane_ParamLimits

0x0bca,	// (0x00042df5) cont_snote2_single_graphic_pane

0xa3a6,	// (0x0004c5d1) cont_note_wait_pane_ParamLimits

0xa3a6,	// (0x0004c5d1) cont_note_wait_pane

0xa3a6,	// (0x0004c5d1) cont_note_image_pane_ParamLimits

0xa3a6,	// (0x0004c5d1) cont_note_image_pane

0xcf5d,	// (0x0004f188) popup_note2_window_g1_ParamLimits

0xcf5d,	// (0x0004f188) popup_note2_window_g1

0xcf8e,	// (0x0004f1b9) popup_note2_window_t1_ParamLimits

0xcf8e,	// (0x0004f1b9) popup_note2_window_t1

0xcfd3,	// (0x0004f1fe) popup_note2_window_t2_ParamLimits

0xcfd3,	// (0x0004f1fe) popup_note2_window_t2

0xd018,	// (0x0004f243) popup_note2_window_t3_ParamLimits

0xd018,	// (0x0004f243) popup_note2_window_t3

0xd05d,	// (0x0004f288) popup_note2_window_t4_ParamLimits

0xd05d,	// (0x0004f288) popup_note2_window_t4

0x0ad2,	// (0x00042cfd) popup_note2_window_t5_ParamLimits

0x0ad2,	// (0x00042cfd) popup_note2_window_t5

0x0004,

0xfc76,	// (0x00051ea1) popup_note2_window_t_ParamLimits

0xfc76,	// (0x00051ea1) popup_note2_window_t

0xd08c,	// (0x0004f2b7) popup_note2_image_window_g1_ParamLimits

0xd08c,	// (0x0004f2b7) popup_note2_image_window_g1

0xd098,	// (0x0004f2c3) popup_note2_image_window_g2_ParamLimits

0xd098,	// (0x0004f2c3) popup_note2_image_window_g2

0x0001,

0xfc81,	// (0x00051eac) popup_note2_image_window_g_ParamLimits

0xfc81,	// (0x00051eac) popup_note2_image_window_g

0xd0aa,	// (0x0004f2d5) popup_note2_image_window_t1_ParamLimits

0xd0aa,	// (0x0004f2d5) popup_note2_image_window_t1

0xd0c2,	// (0x0004f2ed) popup_note2_image_window_t2_ParamLimits

0xd0c2,	// (0x0004f2ed) popup_note2_image_window_t2

0xd0da,	// (0x0004f305) popup_note2_image_window_t3_ParamLimits

0xd0da,	// (0x0004f305) popup_note2_image_window_t3

0x0002,

0xfc86,	// (0x00051eb1) popup_note2_image_window_t_ParamLimits

0xfc86,	// (0x00051eb1) popup_note2_image_window_t

0xa3b4,	// (0x0004c5df) popup_note2_wait_window_g1_ParamLimits

0xa3b4,	// (0x0004c5df) popup_note2_wait_window_g1

0xa3c0,	// (0x0004c5eb) popup_note2_wait_window_g2_ParamLimits

0xa3c0,	// (0x0004c5eb) popup_note2_wait_window_g2

0xa3cc,	// (0x0004c5f7) popup_note2_wait_window_g3_ParamLimits

0xa3cc,	// (0x0004c5f7) popup_note2_wait_window_g3

0x0002,

0xf84d,	// (0x00051a78) popup_note2_wait_window_g_ParamLimits

0xf84d,	// (0x00051a78) popup_note2_wait_window_g

0xd0f6,	// (0x0004f321) popup_note2_wait_window_t1_ParamLimits

0xd0f6,	// (0x0004f321) popup_note2_wait_window_t1

0xd114,	// (0x0004f33f) popup_note2_wait_window_t2_ParamLimits

0xd114,	// (0x0004f33f) popup_note2_wait_window_t2

0xd132,	// (0x0004f35d) popup_note2_wait_window_t3_ParamLimits

0xd132,	// (0x0004f35d) popup_note2_wait_window_t3

0xd144,	// (0x0004f36f) popup_note2_wait_window_t4_ParamLimits

0xd144,	// (0x0004f36f) popup_note2_wait_window_t4

0x0003,

0xfc8d,	// (0x00051eb8) popup_note2_wait_window_t_ParamLimits

0xfc8d,	// (0x00051eb8) popup_note2_wait_window_t

0xd156,	// (0x0004f381) wait_bar2_pane_ParamLimits

0xd156,	// (0x0004f381) wait_bar2_pane

0xd16e,	// (0x0004f399) popup_snote2_single_text_window_g1_ParamLimits

0xd16e,	// (0x0004f399) popup_snote2_single_text_window_g1

0xd196,	// (0x0004f3c1) popup_snote2_single_text_window_t1_ParamLimits

0xd196,	// (0x0004f3c1) popup_snote2_single_text_window_t1

0xd1e2,	// (0x0004f40d) popup_snote2_single_text_window_t2_ParamLimits

0xd1e2,	// (0x0004f40d) popup_snote2_single_text_window_t2

0xd22e,	// (0x0004f459) popup_snote2_single_text_window_t3_ParamLimits

0xd22e,	// (0x0004f459) popup_snote2_single_text_window_t3

0xd26f,	// (0x0004f49a) popup_snote2_single_text_window_t4_ParamLimits

0xd26f,	// (0x0004f49a) popup_snote2_single_text_window_t4

0xd2a5,	// (0x0004f4d0) popup_snote2_single_text_window_t5_ParamLimits

0xd2a5,	// (0x0004f4d0) popup_snote2_single_text_window_t5

0x0004,

0xfc96,	// (0x00051ec1) popup_snote2_single_text_window_t_ParamLimits

0xfc96,	// (0x00051ec1) popup_snote2_single_text_window_t

0xd2d0,	// (0x0004f4fb) popup_snote2_single_graphic_window_g1_ParamLimits

0xd2d0,	// (0x0004f4fb) popup_snote2_single_graphic_window_g1

0xd2f8,	// (0x0004f523) popup_snote2_single_graphic_window_g2_ParamLimits

0xd2f8,	// (0x0004f523) popup_snote2_single_graphic_window_g2

0x0001,

0xfca1,	// (0x00051ecc) popup_snote2_single_graphic_window_g_ParamLimits

0xfca1,	// (0x00051ecc) popup_snote2_single_graphic_window_g

0xd320,	// (0x0004f54b) popup_snote2_single_graphic_window_t1_ParamLimits

0xd320,	// (0x0004f54b) popup_snote2_single_graphic_window_t1

0xd36c,	// (0x0004f597) popup_snote2_single_graphic_window_t2_ParamLimits

0xd36c,	// (0x0004f597) popup_snote2_single_graphic_window_t2

0xd22e,	// (0x0004f459) popup_snote2_single_graphic_window_t3_ParamLimits

0xd22e,	// (0x0004f459) popup_snote2_single_graphic_window_t3

0xd26f,	// (0x0004f49a) popup_snote2_single_graphic_window_t4_ParamLimits

0xd26f,	// (0x0004f49a) popup_snote2_single_graphic_window_t4

0xd2a5,	// (0x0004f4d0) popup_snote2_single_graphic_window_t5_ParamLimits

0xd2a5,	// (0x0004f4d0) popup_snote2_single_graphic_window_t5

0x0004,

0xfca6,	// (0x00051ed1) popup_snote2_single_graphic_window_t_ParamLimits

0xfca6,	// (0x00051ed1) popup_snote2_single_graphic_window_t

0xbd84,	// (0x0004dfaf) clock_nsta_pane_cp2_t1

0xbd84,	// (0x0004dfaf) clock_nsta_pane_cp2_t2

0x0001,

0xfacd,	// (0x00051cf8) clock_nsta_pane_cp2_t

0x5b3c,	// (0x00047d67) form_field_data_wide_pane_g1_ParamLimits

0x0ce4,	// (0x00042f0f) form_field_data_wide_pane_g2_ParamLimits

0x0ce4,	// (0x00042f0f) form_field_data_wide_pane_g2

0x0cf0,	// (0x00042f1b) form_field_data_wide_pane_g3_ParamLimits

0x0cf0,	// (0x00042f1b) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x000518ab) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x000518ab) form_field_data_wide_pane_g

0xbc76,	// (0x0004dea1) grid_touch_3_pane_ParamLimits

0xbc76,	// (0x0004dea1) grid_touch_3_pane

0xd3b8,	// (0x0004f5e3) cell_touch_3_pane_ParamLimits

0xd3b8,	// (0x0004f5e3) cell_touch_3_pane

0xc2f2,	// (0x0004e51d) cell_touch_3_pane_g1

0xc2f2,	// (0x0004e51d) cell_touch_3_pane_g2

0x0001,

0xfb52,	// (0x00051d7d) cell_touch_3_pane_g

0x0b04,	// (0x00042d2f) cont_query_data_pane

0x0b0c,	// (0x00042d37) cont_query_data_pane_cp1

0xd3e6,	// (0x0004f611) button_value_adjust_pane_cp7

0xd3ee,	// (0x0004f619) query_popup_pane_cp3

0x116d,	// (0x00043398) bg_popup_sub_pane_cp22_ParamLimits

0x7423,	// (0x0004964e) navi_navi_volume_pane_cp2

0x743b,	// (0x00049666) popup_side_volume_key_window_g2

0x7447,	// (0x00049672) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x00051941) popup_side_volume_key_window_g

0x7461,	// (0x0004968c) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x00051948) popup_side_volume_key_window_t

0x769f,	// (0x000498ca) popup_side_volume_key_window_ParamLimits

0x578e,	// (0x000479b9) list_double_graphic_pane_g4_ParamLimits

0x578e,	// (0x000479b9) list_double_graphic_pane_g4

0x835a,	// (0x0004a585) list_single_2heading_msg_pane_ParamLimits

0x835a,	// (0x0004a585) list_single_2heading_msg_pane

0x8978,	// (0x0004aba3) list_single_2heading_msg_pane_g1_ParamLimits

0x8978,	// (0x0004aba3) list_single_2heading_msg_pane_g1

0x6e78,	// (0x000490a3) list_single_2heading_msg_pane_g2_ParamLimits

0x6e78,	// (0x000490a3) list_single_2heading_msg_pane_g2

0x8984,	// (0x0004abaf) list_single_2heading_msg_pane_g3_ParamLimits

0x8984,	// (0x0004abaf) list_single_2heading_msg_pane_g3

0x8990,	// (0x0004abbb) list_single_2heading_msg_pane_g4_ParamLimits

0x8990,	// (0x0004abbb) list_single_2heading_msg_pane_g4

0x0003,

0xfcb1,	// (0x00051edc) list_single_2heading_msg_pane_g_ParamLimits

0xfcb1,	// (0x00051edc) list_single_2heading_msg_pane_g

0x63bd,	// (0x000485e8) list_single_2heading_msg_pane_t1_ParamLimits

0x63bd,	// (0x000485e8) list_single_2heading_msg_pane_t1

0x63e5,	// (0x00048610) list_single_2heading_msg_pane_t2_ParamLimits

0x63e5,	// (0x00048610) list_single_2heading_msg_pane_t2

0x6414,	// (0x0004863f) list_single_2heading_msg_pane_t3_ParamLimits

0x6414,	// (0x0004863f) list_single_2heading_msg_pane_t3

0x644d,	// (0x00048678) list_single_2heading_msg_pane_t4_ParamLimits

0x644d,	// (0x00048678) list_single_2heading_msg_pane_t4

0x0003,

0xfcba,	// (0x00051ee5) list_single_2heading_msg_pane_t_ParamLimits

0xfcba,	// (0x00051ee5) list_single_2heading_msg_pane_t

0x08d2,	// (0x00042afd) title_pane_g4_ParamLimits

0x08d2,	// (0x00042afd) title_pane_g4

0x707a,	// (0x000492a5) title_pane_stacon_g3_ParamLimits

0x707a,	// (0x000492a5) title_pane_stacon_g3

0xcf20,	// (0x0004f14b) list_single_2graphic_im_pane_g4_ParamLimits

0xcf20,	// (0x0004f14b) list_single_2graphic_im_pane_g4

0xaded,	// (0x0004d018) popup_side_volume_key_window_cp

0xb5d1,	// (0x0004d7fc) main_idle_act2_pane_t1

0x7fd1,	// (0x0004a1fc) toolbar_button_pane_g10

0x6e6e,	// (0x00049099) popup_toolbar_window_cp1

0xbd75,	// (0x0004dfa0) clock_nsta_pane_cp_t1

0xbd75,	// (0x0004dfa0) clock_nsta_pane_cp_t2

0x0001,

0xfac8,	// (0x00051cf3) clock_nsta_pane_cp_t

0x7423,	// (0x0004964e) navi_navi_volume_pane_cp2_ParamLimits

0x742f,	// (0x0004965a) popup_side_volume_key_window_g1_ParamLimits

0x743b,	// (0x00049666) popup_side_volume_key_window_g2_ParamLimits

0x7447,	// (0x00049672) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x00051941) popup_side_volume_key_window_g_ParamLimits

0x85ad,	// (0x0004a7d8) fep_hwr_aid_pane

0x26f5,	// (0x00044920) bg_fep_hwr_top_pane_g4_ParamLimits

0xc34e,	// (0x0004e579) fep_hwr_top_pane_g1_ParamLimits

0xc360,	// (0x0004e58b) fep_hwr_top_pane_g2_ParamLimits

0x8666,	// (0x0004a891) fep_hwr_top_pane_g3_ParamLimits

0xfb1d,	// (0x00051d48) fep_hwr_top_pane_g_ParamLimits

0x867b,	// (0x0004a8a6) fep_hwr_top_text_pane_ParamLimits

0xabb0,	// (0x0004cddb) aid_touch_tab_arrow_arrow_2

0xabb9,	// (0x0004cde4) aid_touch_tab_arrow_left_2

0x85c1,	// (0x0004a7ec) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x85f8,	// (0x0004a823) fep_hwr_prediction_pane

0xc4b9,	// (0x0004e6e4) fep_vkb_prediction_pane

0xc5b6,	// (0x0004e7e1) fep_vkb_side_pane_g3_ParamLimits

0xc5b6,	// (0x0004e7e1) fep_vkb_side_pane_g3

0xc562,	// (0x0004e78d) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xca17,	// (0x0004ec42) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xca24,	// (0x0004ec4f) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc7,	// (0x00051df2) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd413,	// (0x0004f63e) fep_hwr_prediction_pane_g1

0x89a8,	// (0x0004abd3) fep_hwr_prediction_pane_g2

0x89b0,	// (0x0004abdb) fep_hwr_prediction_pane_g3

0x89b8,	// (0x0004abe3) fep_hwr_prediction_pane_g4

0x0003,

0xfcc3,	// (0x00051eee) fep_hwr_prediction_pane_g

0xd413,	// (0x0004f63e) fep_vkb_prediction_pane_g1

0xd41d,	// (0x0004f648) fep_vkb_prediction_pane_g2

0xd425,	// (0x0004f650) fep_vkb_prediction_pane_g3

0xd42d,	// (0x0004f658) fep_vkb_prediction_pane_g4

0x0003,

0xfccc,	// (0x00051ef7) fep_vkb_prediction_pane_g

0x82c3,	// (0x0004a4ee) slider_set_pane_g3

0x82d7,	// (0x0004a502) slider_set_pane_g4

0x82ef,	// (0x0004a51a) slider_set_pane_g5

0x82c3,	// (0x0004a4ee) slider_set_pane_g6

0x8305,	// (0x0004a530) slider_set_pane_g7

0xb24d,	// (0x0004d478) slider_form_pane_g3

0xb256,	// (0x0004d481) slider_form_pane_g4

0xb25e,	// (0x0004d489) slider_form_pane_g5

0xb24d,	// (0x0004d478) slider_form_pane_g6

0xb266,	// (0x0004d491) slider_form_pane_g7

0xb87c,	// (0x0004daa7) slider_set_pane_vc_g3

0xb885,	// (0x0004dab0) slider_set_pane_vc_g4

0xb88e,	// (0x0004dab9) slider_set_pane_vc_g5

0xb87c,	// (0x0004daa7) slider_set_pane_vc_g6

0xb897,	// (0x0004dac2) slider_set_pane_vc_g7

0xba49,	// (0x0004dc74) slider_form_pane_vc_g1

0xba52,	// (0x0004dc7d) slider_form_pane_vc_g2

0xba5b,	// (0x0004dc86) slider_form_pane_vc_g3

0xba49,	// (0x0004dc74) slider_form_pane_vc_g4

0xba64,	// (0x0004dc8f) slider_form_pane_vc_g5

0x0004,

0xfa9a,	// (0x00051cc5) slider_form_pane_vc_g

0x08b4,	// (0x00042adf) main_idle_act3_pane

0xd435,	// (0x0004f660) ai3_links_pane

0xd43e,	// (0x0004f669) popup_ai3_data_window_ParamLimits

0xd43e,	// (0x0004f669) popup_ai3_data_window

0x08b4,	// (0x00042adf) grid_ai3_links_pane

0xd456,	// (0x0004f681) cell_ai3_links_pane_ParamLimits

0xd456,	// (0x0004f681) cell_ai3_links_pane

0xd46e,	// (0x0004f699) bg_popup_sub_pane_cp11

0xd47b,	// (0x0004f6a6) cell_ai3_links_pane_g1

0x08b4,	// (0x00042adf) bg_popup_sub_pane_cp12

0xd4a0,	// (0x0004f6cb) heading_ai3_data_pane

0xd4a8,	// (0x0004f6d3) list_ai3_gene_pane

0xd4b4,	// (0x0004f6df) popup_ai3_data_window_g1

0xd4bc,	// (0x0004f6e7) heading_ai3_data_pane_g1

0xd4c4,	// (0x0004f6ef) heading_ai3_data_pane_t1

0xd4d2,	// (0x0004f6fd) list_double_ai3_gene_pane_ParamLimits

0xd4d2,	// (0x0004f6fd) list_double_ai3_gene_pane

0xd4df,	// (0x0004f70a) list_single_ai3_gene_pane_ParamLimits

0xd4df,	// (0x0004f70a) list_single_ai3_gene_pane

0xc2b7,	// (0x0004e4e2) list_highlight_pane_cp7_ParamLimits

0xc2b7,	// (0x0004e4e2) list_highlight_pane_cp7

0xd4ec,	// (0x0004f717) list_single_a13_gene_pane_t1_ParamLimits

0xd4ec,	// (0x0004f717) list_single_a13_gene_pane_t1

0xd503,	// (0x0004f72e) list_single_ai3_gene_pane_g1

0xd50c,	// (0x0004f737) list_single_ai3_gene_pane_g2

0x0001,

0xfcd5,	// (0x00051f00) list_single_ai3_gene_pane_g

0xd514,	// (0x0004f73f) list_double_ai3_gene_pane_g1_ParamLimits

0xd514,	// (0x0004f73f) list_double_ai3_gene_pane_g1

0xd520,	// (0x0004f74b) list_double_ai3_gene_pane_t1_ParamLimits

0xd520,	// (0x0004f74b) list_double_ai3_gene_pane_t1

0xd53c,	// (0x0004f767) list_double_ai3_gene_pane_t2_ParamLimits

0xd53c,	// (0x0004f767) list_double_ai3_gene_pane_t2

0xd551,	// (0x0004f77c) list_double_ai3_gene_pane_t3_ParamLimits

0xd551,	// (0x0004f77c) list_double_ai3_gene_pane_t3

0x0002,

0xfcda,	// (0x00051f05) list_double_ai3_gene_pane_t_ParamLimits

0xfcda,	// (0x00051f05) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x63b3,	// (0x000485de) aid_size_min_col_2

0xd3ff,	// (0x0004f62a) aid_size_min_msg_ParamLimits

0xd3ff,	// (0x0004f62a) aid_size_min_msg

0xc6b6,	// (0x0004e8e1) fep_vkb_top_text_pane_g2_ParamLimits

0xc6b6,	// (0x0004e8e1) fep_vkb_top_text_pane_g2

0x0001,

0xfb4d,	// (0x00051d78) fep_vkb_top_text_pane_g_ParamLimits

0xfb4d,	// (0x00051d78) fep_vkb_top_text_pane_g

0x08b4,	// (0x00042adf) main_hc_apps_shell_pane

0xd56e,	// (0x0004f799) grid_hc_apps_pane_ParamLimits

0xd56e,	// (0x0004f799) grid_hc_apps_pane

0xd57d,	// (0x0004f7a8) list_hc_apps_pane

0xd585,	// (0x0004f7b0) scroll_pane_cp37_ParamLimits

0xd585,	// (0x0004f7b0) scroll_pane_cp37

0xd591,	// (0x0004f7bc) cell_hc_apps_pane_ParamLimits

0xd591,	// (0x0004f7bc) cell_hc_apps_pane

0xd63f,	// (0x0004f86a) cell_hc_apps_pane_g1_ParamLimits

0xd63f,	// (0x0004f86a) cell_hc_apps_pane_g1

0xd670,	// (0x0004f89b) cell_hc_apps_pane_g2_ParamLimits

0xd670,	// (0x0004f89b) cell_hc_apps_pane_g2

0xd68c,	// (0x0004f8b7) cell_hc_apps_pane_g3_ParamLimits

0xd68c,	// (0x0004f8b7) cell_hc_apps_pane_g3

0x0002,

0xfce1,	// (0x00051f0c) cell_hc_apps_pane_g_ParamLimits

0xfce1,	// (0x00051f0c) cell_hc_apps_pane_g

0xd6ae,	// (0x0004f8d9) cell_hc_apps_pane_t1_ParamLimits

0xd6ae,	// (0x0004f8d9) cell_hc_apps_pane_t1

0x0a4e,	// (0x00042c79) grid_highlight_pane_cp10_ParamLimits

0x0a4e,	// (0x00042c79) grid_highlight_pane_cp10

0xd6ee,	// (0x0004f919) list_single_hc_apps_pane_ParamLimits

0xd6ee,	// (0x0004f919) list_single_hc_apps_pane

0xd751,	// (0x0004f97c) list_single_hc_apps_pane_g1

0x89c0,	// (0x0004abeb) list_single_hc_apps_pane_g2

0x0001,

0xfce8,	// (0x00051f13) list_single_hc_apps_pane_g

0x89d9,	// (0x0004ac04) list_single_hc_apps_pane_g2_copy1

0x6472,	// (0x0004869d) list_single_hc_apps_pane_t1

0x0924,	// (0x00042b4f) bg_set_opt_pane_cp_ParamLimits

0x6985,	// (0x00048bb0) setting_slider_pane_t1_ParamLimits

0x699e,	// (0x00048bc9) setting_slider_pane_t2_ParamLimits

0x69b8,	// (0x00048be3) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00051789) setting_slider_pane_t_ParamLimits

0x69d0,	// (0x00048bfb) slider_set_pane_ParamLimits

0x78e0,	// (0x00049b0b) control_pane_g5_ParamLimits

0x78e0,	// (0x00049b0b) control_pane_g5

0xb09c,	// (0x0004d2c7) slider_set_pane_g1_ParamLimits

0x82b7,	// (0x0004a4e2) slider_set_pane_g2_ParamLimits

0x82c3,	// (0x0004a4ee) slider_set_pane_g3_ParamLimits

0x82d7,	// (0x0004a502) slider_set_pane_g4_ParamLimits

0x82ef,	// (0x0004a51a) slider_set_pane_g5_ParamLimits

0x82c3,	// (0x0004a4ee) slider_set_pane_g6_ParamLimits

0x8305,	// (0x0004a530) slider_set_pane_g7_ParamLimits

0xf969,	// (0x00051b94) slider_set_pane_g_ParamLimits

0x4b5f,	// (0x00046d8a) navi_icon_text_pane_ParamLimits

0x985f,	// (0x0004ba8a) aid_fill_nsta_2_ParamLimits

0x989e,	// (0x0004bac9) aid_touch_tab_arrow_left_ParamLimits

0x98ad,	// (0x0004bad8) aid_touch_tab_arrow_right_ParamLimits

0x991a,	// (0x0004bb45) clock_nsta_pane_ParamLimits

0xab92,	// (0x0004cdbd) navi_icon_pane_g1_ParamLimits

0xab9e,	// (0x0004cdc9) navi_text_pane_t1_ParamLimits

0xbe85,	// (0x0004e0b0) navi_icon_text_pane_g1_ParamLimits

0xbe9d,	// (0x0004e0c8) navi_icon_text_pane_t1_ParamLimits

0xd751,	// (0x0004f97c) list_single_hc_apps_pane_g1_ParamLimits

0x89c0,	// (0x0004abeb) list_single_hc_apps_pane_g2_ParamLimits

0xfce8,	// (0x00051f13) list_single_hc_apps_pane_g_ParamLimits

0x89d9,	// (0x0004ac04) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x6472,	// (0x0004869d) list_single_hc_apps_pane_t1_ParamLimits

0x67c9,	// (0x000489f4) popup_toolbar2_fixed_window_ParamLimits

0x67c9,	// (0x000489f4) popup_toolbar2_fixed_window

0x7ed5,	// (0x0004a100) popup_toolbar2_float_window

0x08b4,	// (0x00042adf) bg_popup_sub_pane_cp27

0xd76a,	// (0x0004f995) grid_toolbar2_float_pane

0x08b4,	// (0x00042adf) bg_popup_sub_pane_cp26

0xd76a,	// (0x0004f995) grid_toolbar2_fixed_pane

0xd772,	// (0x0004f99d) cell_toolbar2_fixed_pane_ParamLimits

0xd772,	// (0x0004f99d) cell_toolbar2_fixed_pane

0xd782,	// (0x0004f9ad) cell_toolbar2_fixed_pane_g1

0x9cb4,	// (0x0004bedf) toolbar2_fixed_button_pane

0x9d34,	// (0x0004bf5f) toolbar2_fixed_button_pane_g1

0x9d3c,	// (0x0004bf67) toolbar2_fixed_button_pane_g2

0x9d44,	// (0x0004bf6f) toolbar2_fixed_button_pane_g3

0x9d4c,	// (0x0004bf77) toolbar2_fixed_button_pane_g4

0x9d54,	// (0x0004bf7f) toolbar2_fixed_button_pane_g5

0x9d5c,	// (0x0004bf87) toolbar2_fixed_button_pane_g6

0x9d64,	// (0x0004bf8f) toolbar2_fixed_button_pane_g7

0x9d6c,	// (0x0004bf97) toolbar2_fixed_button_pane_g8

0x9d74,	// (0x0004bf9f) toolbar2_fixed_button_pane_g9

0x0008,

0xf86b,	// (0x00051a96) toolbar2_fixed_button_pane_g

0xd78b,	// (0x0004f9b6) cell_toolbar2_float_pane_ParamLimits

0xd78b,	// (0x0004f9b6) cell_toolbar2_float_pane

0xd79c,	// (0x0004f9c7) cell_toolbar2_float_pane_g1

0x9cb4,	// (0x0004bedf) toolbar2_fixed_button_pane_cp

0xc420,	// (0x0004e64b) fep_vkb_accented_list_pane_ParamLimits

0xc420,	// (0x0004e64b) fep_vkb_accented_list_pane

0x87c9,	// (0x0004a9f4) bg_popup_fep_shadow_pane_g9

0x7767,	// (0x00049992) bg_popup_fep_shadow_pane_cp3

0x0ddf,	// (0x0004300a) list_accented_list_pane

0xd7a5,	// (0x0004f9d0) list_single_accented_list_pane_ParamLimits

0xd7a5,	// (0x0004f9d0) list_single_accented_list_pane

0x7767,	// (0x00049992) list_highlight_pane_cp10

0xd7b6,	// (0x0004f9e1) list_single_accented_list_pane_t1

0x7e25,	// (0x0004a050) popup_slider_window_ParamLimits

0x7e25,	// (0x0004a050) popup_slider_window

0xd3f6,	// (0x0004f621) aid_indentation_list_msg

0xd86c,	// (0x0004fa97) bg_popup_window_pane_cp19

0xd8d6,	// (0x0004fb01) popup_slider_window_g1

0xd8f2,	// (0x0004fb1d) popup_slider_window_g2

0xd90e,	// (0x0004fb39) popup_slider_window_g3

0x0005,

0xfced,	// (0x00051f18) popup_slider_window_g

0xd96a,	// (0x0004fb95) popup_slider_window_t1

0xd9de,	// (0x0004fc09) small_volume_slider_vertical_pane

0xc2f2,	// (0x0004e51d) small_volume_slider_vertical_pane_g1

0xc2f2,	// (0x0004e51d) small_volume_slider_vertical_pane_g2

0xd9fa,	// (0x0004fc25) small_volume_slider_vertical_pane_g3

0x0002,

0xfcff,	// (0x00051f2a) small_volume_slider_vertical_pane_g

0x6599,	// (0x000487c4) area_side_right_pane_ParamLimits

0x6599,	// (0x000487c4) area_side_right_pane

0x89f5,	// (0x0004ac20) aid_size_side_button_ParamLimits

0x89f5,	// (0x0004ac20) aid_size_side_button

0x8a09,	// (0x0004ac34) grid_sctrl_middle_pane_ParamLimits

0x8a09,	// (0x0004ac34) grid_sctrl_middle_pane

0x8a28,	// (0x0004ac53) sctrl_sk_bottom_pane

0x8a39,	// (0x0004ac64) sctrl_sk_top_pane

0x8a4b,	// (0x0004ac76) aid_touch_sctrl_top

0x0a4e,	// (0x00042c79) bg_sctrl_sk_pane_ParamLimits

0x0a4e,	// (0x00042c79) bg_sctrl_sk_pane

0x8a58,	// (0x0004ac83) sctrl_sk_top_pane_g1

0x8a65,	// (0x0004ac90) sctrl_sk_top_pane_t1

0x8a4b,	// (0x0004ac76) aid_touch_sctrl_bottom

0x0a4e,	// (0x00042c79) bg_sctrl_sk_pane_cp_ParamLimits

0x0a4e,	// (0x00042c79) bg_sctrl_sk_pane_cp

0x8a80,	// (0x0004acab) sctrl_sk_bottom_pane_g1

0x8a65,	// (0x0004ac90) sctrl_sk_bottom_pane_t1

0x8a89,	// (0x0004acb4) cell_sctrl_middle_pane_ParamLimits

0x8a89,	// (0x0004acb4) cell_sctrl_middle_pane

0x8aa4,	// (0x0004accf) aid_touch_sctrl_middle_ParamLimits

0x8aa4,	// (0x0004accf) aid_touch_sctrl_middle

0x0cd6,	// (0x00042f01) bg_sctrl_middle_pane_ParamLimits

0x0cd6,	// (0x00042f01) bg_sctrl_middle_pane

0xc562,	// (0x0004e78d) cell_sctrl_middle_pane_g1_ParamLimits

0xc562,	// (0x0004e78d) cell_sctrl_middle_pane_g1

0x8ab6,	// (0x0004ace1) cell_sctrl_middle_pane_g2_ParamLimits

0x8ab6,	// (0x0004ace1) cell_sctrl_middle_pane_g2

0x0001,

0xfd0b,	// (0x00051f36) cell_sctrl_middle_pane_g_ParamLimits

0xfd0b,	// (0x00051f36) cell_sctrl_middle_pane_g

0x9d34,	// (0x0004bf5f) bg_sctrl_middle_pane_g1

0x9d3c,	// (0x0004bf67) bg_sctrl_middle_pane_g2

0x9d44,	// (0x0004bf6f) bg_sctrl_middle_pane_g3

0x9d4c,	// (0x0004bf77) bg_sctrl_middle_pane_g4

0x9d54,	// (0x0004bf7f) bg_sctrl_middle_pane_g5

0x9d5c,	// (0x0004bf87) bg_sctrl_middle_pane_g6

0x9d64,	// (0x0004bf8f) bg_sctrl_middle_pane_g7

0x9d6c,	// (0x0004bf97) bg_sctrl_middle_pane_g8

0x0007,

0xfd10,	// (0x00051f3b) bg_sctrl_middle_pane_g

0x9d74,	// (0x0004bf9f) bg_sctrl_middle_pane_g8_copy1

0x9d34,	// (0x0004bf5f) bg_sctrl_sk_pane_g1

0x9d3c,	// (0x0004bf67) bg_sctrl_sk_pane_g2

0x9d44,	// (0x0004bf6f) bg_sctrl_sk_pane_g3

0x0008,

0xf86b,	// (0x00051a96) bg_sctrl_sk_pane_g

0x0c18,	// (0x00042e43) aid_size_touch_scroll_bar

0x9d4c,	// (0x0004bf77) bg_sctrl_sk_pane_g4

0x9d54,	// (0x0004bf7f) bg_sctrl_sk_pane_g5

0x9d5c,	// (0x0004bf87) bg_sctrl_sk_pane_g6

0x9d64,	// (0x0004bf8f) bg_sctrl_sk_pane_g7

0x9d6c,	// (0x0004bf97) bg_sctrl_sk_pane_g8

0x9d74,	// (0x0004bf9f) bg_sctrl_sk_pane_g9

0x7a8e,	// (0x00049cb9) popup_fep_china_hwr2_fs_candidate_window

0x7a98,	// (0x00049cc3) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x7a98,	// (0x00049cc3) popup_fep_china_hwr2_fs_control_window

0xc562,	// (0x0004e78d) sctrl_sk_top_pane_g2

0x0001,

0xfd06,	// (0x00051f31) sctrl_sk_top_pane_g

0xda03,	// (0x0004fc2e) aid_fep_china_hwr2_fs_cell_ParamLimits

0xda03,	// (0x0004fc2e) aid_fep_china_hwr2_fs_cell

0xda15,	// (0x0004fc40) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xda15,	// (0x0004fc40) bg_popup_fep_shadow_pane_cp4

0xda2c,	// (0x0004fc57) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xda2c,	// (0x0004fc57) bg_popup_fep_shadow_pane_cp5

0xda3e,	// (0x0004fc69) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xda3e,	// (0x0004fc69) popup_fep_china_hwr2_fs_control_bar_grid

0xda4e,	// (0x0004fc79) popup_fep_china_hwr2_fs_control_funtion_grid

0xda56,	// (0x0004fc81) aid_fep_china_hwr2_fs_candi_cell

0x08b4,	// (0x00042adf) bg_popup_fep_shadow_pane_cp6

0xda60,	// (0x0004fc8b) popup_fep_china_hwr2_fs_candidate_grid

0xda6a,	// (0x0004fc95) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda6a,	// (0x0004fc95) cell_fep_china_hwr2_fs_funtion_grid

0xc2f2,	// (0x0004e51d) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda82,	// (0x0004fcad) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda82,	// (0x0004fcad) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda90,	// (0x0004fcbb) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda90,	// (0x0004fcbb) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd21,	// (0x00051f4c) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd21,	// (0x00051f4c) cell_fep_china_hwr2_fs_funtion_grid_g

0xdaa6,	// (0x0004fcd1) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdaa6,	// (0x0004fcd1) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdabb,	// (0x0004fce6) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdabb,	// (0x0004fce6) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd26,	// (0x00051f51) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd26,	// (0x00051f51) cell_fep_china_hwr2_fs_funtion_grid_t

0xdad7,	// (0x0004fd02) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xdadf,	// (0x0004fd0a) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xdae7,	// (0x0004fd12) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2b,	// (0x00051f56) popup_fep_china_hwr2_fs_control_bar_grid_g

0xdaef,	// (0x0004fd1a) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xdaef,	// (0x0004fd1a) cell_fep_china_hwr2_fs_candidate_grid

0xdb08,	// (0x0004fd33) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdb10,	// (0x0004fd3b) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc2f2,	// (0x0004e51d) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc2f2,	// (0x0004e51d) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb52,	// (0x00051d7d) cell_fep_china_hwr2_fs_candidate_grid_g

0xdb18,	// (0x0004fd43) cell_fep_china_hwr2_fs_candidate_grid_t1

0x992d,	// (0x0004bb58) clock_nsta_pane_cp_24_ParamLimits

0x992d,	// (0x0004bb58) clock_nsta_pane_cp_24

0x99ab,	// (0x0004bbd6) indicator_nsta_pane_cp_24_ParamLimits

0x99ab,	// (0x0004bbd6) indicator_nsta_pane_cp_24

0xaa0e,	// (0x0004cc39) heading_pane_g1

0x0001,

0xf8d0,	// (0x00051afb) heading_pane_g

0xb41a,	// (0x0004d645) grid_sct_catagory_button_pane

0xb44a,	// (0x0004d675) scroll_pane_cp5_ParamLimits

0xbedf,	// (0x0004e10a) button_value_adjust_pane_cp5_ParamLimits

0xbedf,	// (0x0004e10a) button_value_adjust_pane_cp5

0xbfbe,	// (0x0004e1e9) form2_midp_time_pane_ParamLimits

0xdb26,	// (0x0004fd51) cell_sct_catagory_button_pane_ParamLimits

0xdb26,	// (0x0004fd51) cell_sct_catagory_button_pane

0xc2b7,	// (0x0004e4e2) bg_button_pane_cp01_ParamLimits

0xc2b7,	// (0x0004e4e2) bg_button_pane_cp01

0xc2f2,	// (0x0004e51d) cell_sct_catagory_button_pane_g1

0x7e64,	// (0x0004a08f) popup_tb_extension_window

0xdb38,	// (0x0004fd63) aid_size_cell_ext_ParamLimits

0xdb38,	// (0x0004fd63) aid_size_cell_ext

0x0a4e,	// (0x00042c79) bg_tb_trans_pane_cp1_ParamLimits

0x0a4e,	// (0x00042c79) bg_tb_trans_pane_cp1

0xdb58,	// (0x0004fd83) grid_tb_ext_pane_ParamLimits

0xdb58,	// (0x0004fd83) grid_tb_ext_pane

0xdb88,	// (0x0004fdb3) cell_tb_ext_pane_ParamLimits

0xdb88,	// (0x0004fdb3) cell_tb_ext_pane

0xdb9f,	// (0x0004fdca) cell_tb_ext_pane_g1_ParamLimits

0xdb9f,	// (0x0004fdca) cell_tb_ext_pane_g1

0xdbbc,	// (0x0004fde7) cell_tb_ext_pane_t1

0x0a4e,	// (0x00042c79) list_highlight_pane_cp11_ParamLimits

0x0a4e,	// (0x00042c79) list_highlight_pane_cp11

0x67e8,	// (0x00048a13) popup_uni_indicator_window_ParamLimits

0x67e8,	// (0x00048a13) popup_uni_indicator_window

0x0cd6,	// (0x00042f01) bg_popup_sub_pane_cp14

0xdbd7,	// (0x0004fe02) list_uniindi_pane

0xdbe3,	// (0x0004fe0e) uniindi_top_pane

0x0a4e,	// (0x00042c79) bg_uniindi_top_pane

0xdc02,	// (0x0004fe2d) uniindi_top_pane_g1

0xdc18,	// (0x0004fe43) uniindi_top_pane_g2

0x0003,

0xfd32,	// (0x00051f5d) uniindi_top_pane_g

0xdc42,	// (0x0004fe6d) uniindi_top_pane_t1

0xdc6c,	// (0x0004fe97) list_single_uniindi_pane_ParamLimits

0xdc6c,	// (0x0004fe97) list_single_uniindi_pane

0xc2f2,	// (0x0004e51d) bg_uniindi_top_pane_g1

0xdc7e,	// (0x0004fea9) list_single_uniindi_pane_g1

0xdc91,	// (0x0004febc) list_single_uniindi_pane_t1

0x08b4,	// (0x00042adf) control_bg_pane

0xdcb6,	// (0x0004fee1) bg_sctrl_sk_pane_cp1

0xdcbf,	// (0x0004feea) bg_sctrl_sk_pane_cp2

0xdcc8,	// (0x0004fef3) control_bg_pane_g1

0xdcd1,	// (0x0004fefc) control_bg_pane_g2

0x0001,

0xfd3b,	// (0x00051f66) control_bg_pane_g

0xbd19,	// (0x0004df44) cell_indicator_nsta_pane_g1_ParamLimits

0xbd27,	// (0x0004df52) cell_indicator_nsta_pane_g2_ParamLimits

0xfab6,	// (0x00051ce1) cell_indicator_nsta_pane_g_ParamLimits

0x6200,	// (0x0004842b) form2_midp_time_pane_t1_ParamLimits

0x0bca,	// (0x00042df5) main_idle_act4_pane_ParamLimits

0x0bca,	// (0x00042df5) main_idle_act4_pane

0x7e64,	// (0x0004a08f) popup_tb_extension_window_ParamLimits

0xdb78,	// (0x0004fda3) tb_ext_find_pane_ParamLimits

0xdb78,	// (0x0004fda3) tb_ext_find_pane

0xdcda,	// (0x0004ff05) ai_gene_pane_1_cp1

0x962c,	// (0x0004b857) ai_gene_pane_2_cp1

0xdce2,	// (0x0004ff0d) list_single_idle_plugin_calendar_pane

0xdceb,	// (0x0004ff16) list_single_idle_plugin_notification_pane

0xdcf4,	// (0x0004ff1f) list_single_idle_plugin_player_pane

0xdcfd,	// (0x0004ff28) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdcfd,	// (0x0004ff28) list_single_idle_plugin_shortcut_pane

0xdd1f,	// (0x0004ff4a) main_idle_act4_pane_t1

0xdd31,	// (0x0004ff5c) main_idle_act4_pane_t2

0x0001,

0xfd40,	// (0x00051f6b) main_idle_act4_pane_t

0xdd43,	// (0x0004ff6e) middle_sk_idle_act4_pane_ParamLimits

0xdd43,	// (0x0004ff6e) middle_sk_idle_act4_pane

0xdd59,	// (0x0004ff84) popup_clock_digital_analogue_window_cp2

0xdd73,	// (0x0004ff9e) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd73,	// (0x0004ff9e) shortcut_wheel_idle_act4_pane

0xc2f2,	// (0x0004e51d) shortcut_wheel_idle_act4_pane_g1

0xc2f2,	// (0x0004e51d) shortcut_wheel_idle_act4_pane_g2

0xc2f2,	// (0x0004e51d) shortcut_wheel_idle_act4_pane_g3

0xc2f2,	// (0x0004e51d) shortcut_wheel_idle_act4_pane_g4

0xc2f2,	// (0x0004e51d) shortcut_wheel_idle_act4_pane_g5

0xdd87,	// (0x0004ffb2) shortcut_wheel_idle_act4_pane_g6

0xdd8f,	// (0x0004ffba) shortcut_wheel_idle_act4_pane_g7

0xdd97,	// (0x0004ffc2) shortcut_wheel_idle_act4_pane_g8

0xdd9f,	// (0x0004ffca) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd45,	// (0x00051f70) shortcut_wheel_idle_act4_pane_g

0xc562,	// (0x0004e78d) middle_sk_idle_act4_pane_g1_ParamLimits

0xc562,	// (0x0004e78d) middle_sk_idle_act4_pane_g1

0xde03,	// (0x0005002e) middle_sk_idle_act4_pane_g2_ParamLimits

0xde03,	// (0x0005002e) middle_sk_idle_act4_pane_g2

0x0001,

0xfd68,	// (0x00051f93) middle_sk_idle_act4_pane_g_ParamLimits

0xfd68,	// (0x00051f93) middle_sk_idle_act4_pane_g

0xde0f,	// (0x0005003a) middle_sk_idle_act4_pane_t1_ParamLimits

0xde0f,	// (0x0005003a) middle_sk_idle_act4_pane_t1

0xde2c,	// (0x00050057) grid_ai_shortcut_pane_ParamLimits

0xde2c,	// (0x00050057) grid_ai_shortcut_pane

0xde45,	// (0x00050070) list_highlight_pane_cp16_ParamLimits

0xde45,	// (0x00050070) list_highlight_pane_cp16

0xde52,	// (0x0005007d) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde52,	// (0x0005007d) list_single_idle_plugin_shortcut_pane_g1

0xde5e,	// (0x00050089) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde5e,	// (0x00050089) list_single_idle_plugin_shortcut_pane_g2

0xde76,	// (0x000500a1) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde76,	// (0x000500a1) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6d,	// (0x00051f98) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6d,	// (0x00051f98) list_single_idle_plugin_shortcut_pane_g

0xde89,	// (0x000500b4) cell_ai_shortcut_pane_ParamLimits

0xde89,	// (0x000500b4) cell_ai_shortcut_pane

0xdead,	// (0x000500d8) cell_ai_shortcut_pane_g1_ParamLimits

0xdead,	// (0x000500d8) cell_ai_shortcut_pane_g1

0xdcda,	// (0x0004ff05) ai_gene_pane_1_cp2

0xdecf,	// (0x000500fa) ai_gene_pane_2_cp2

0xded7,	// (0x00050102) list_highlight_pane_cp15

0xdee0,	// (0x0005010b) list_single_idle_plugin_calendar_pane_g1

0xded7,	// (0x00050102) list_highlight_pane_cp17

0xdee8,	// (0x00050113) list_single_idle_plugin_calendar_pane_g1_copy1

0xdef0,	// (0x0005011b) list_single_idle_plugin_player_pane_g1

0xb673,	// (0x0004d89e) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd74,	// (0x00051f9f) list_single_idle_plugin_player_pane_g

0xdef8,	// (0x00050123) list_single_idle_plugin_player_pane_t1

0xdf06,	// (0x00050131) list_single_idle_plugin_player_pane_t2

0xdf14,	// (0x0005013f) list_single_idle_plugin_player_pane_t3

0xdf22,	// (0x0005014d) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd79,	// (0x00051fa4) list_single_idle_plugin_player_pane_t

0xdf30,	// (0x0005015b) wait_bar_pane_cp15

0xdf38,	// (0x00050163) grid_ai_notification_pane

0xb673,	// (0x0004d89e) list_single_idle_plugin_notification_pane_g1

0xdf41,	// (0x0005016c) cell_ai_notification_pane_ParamLimits

0xdf41,	// (0x0005016c) cell_ai_notification_pane

0xdf4e,	// (0x00050179) cell_ai_notification_pane_g1

0xdf56,	// (0x00050181) cell_ai_notification_pane_t1

0xdf64,	// (0x0005018f) tb_ext_find_button_pane

0xdf6c,	// (0x00050197) tb_ext_find_pane_g1

0xdf74,	// (0x0005019f) tb_ext_find_pane_t1

0x110c,	// (0x00043337) tb_ext_find_button_pane_g1

0xdf82,	// (0x000501ad) tb_ext_find_button_pane_g2

0x0001,

0xfd82,	// (0x00051fad) tb_ext_find_button_pane_g

0xdd1f,	// (0x0004ff4a) main_idle_act4_pane_t1_ParamLimits

0xdd31,	// (0x0004ff5c) main_idle_act4_pane_t2_ParamLimits

0xfd40,	// (0x00051f6b) main_idle_act4_pane_t_ParamLimits

0xdd59,	// (0x0004ff84) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd67,	// (0x0004ff92) sat_plugin_idle_act4_pane_ParamLimits

0xdd67,	// (0x0004ff92) sat_plugin_idle_act4_pane

0xdf8b,	// (0x000501b6) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf8b,	// (0x000501b6) sat_plugin_idle_act4_pane_t1

0xdf9e,	// (0x000501c9) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf9e,	// (0x000501c9) sat_plugin_idle_act4_pane_t2

0xdfb1,	// (0x000501dc) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdfb1,	// (0x000501dc) sat_plugin_idle_act4_pane_t3

0xdfc4,	// (0x000501ef) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdfc4,	// (0x000501ef) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd87,	// (0x00051fb2) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd87,	// (0x00051fb2) sat_plugin_idle_act4_pane_t

0x6731,	// (0x0004895c) popup_battery_window_ParamLimits

0x6731,	// (0x0004895c) popup_battery_window

0x0a4e,	// (0x00042c79) bg_popup_sub_pane_cp25_ParamLimits

0x0a4e,	// (0x00042c79) bg_popup_sub_pane_cp25

0xdfd7,	// (0x00050202) popup_battery_window_g1_ParamLimits

0xdfd7,	// (0x00050202) popup_battery_window_g1

0xdfe3,	// (0x0005020e) popup_battery_window_t1_ParamLimits

0xdfe3,	// (0x0005020e) popup_battery_window_t1

0xdff5,	// (0x00050220) popup_battery_window_t2_ParamLimits

0xdff5,	// (0x00050220) popup_battery_window_t2

0x0001,

0xfd90,	// (0x00051fbb) popup_battery_window_t_ParamLimits

0xfd90,	// (0x00051fbb) popup_battery_window_t

0x776f,	// (0x0004999a) midp_canvas_pane_ParamLimits

0x956e,	// (0x0004b799) midp_keypad_pane_ParamLimits

0x956e,	// (0x0004b799) midp_keypad_pane

0x9827,	// (0x0004ba52) main_midp_pane_ParamLimits

0xbd93,	// (0x0004dfbe) signal_pane_g2_cp_ParamLimits

0xe012,	// (0x0005023d) aid_size_cell_midp_keypad_ParamLimits

0xe012,	// (0x0005023d) aid_size_cell_midp_keypad

0xe02c,	// (0x00050257) midp_keyp_game_grid_pane_ParamLimits

0xe02c,	// (0x00050257) midp_keyp_game_grid_pane

0xe04c,	// (0x00050277) midp_keyp_rocker_pane_ParamLimits

0xe04c,	// (0x00050277) midp_keyp_rocker_pane

0xe085,	// (0x000502b0) midp_keyp_sk_left_pane_ParamLimits

0xe085,	// (0x000502b0) midp_keyp_sk_left_pane

0xe0df,	// (0x0005030a) midp_keyp_sk_right_pane_ParamLimits

0xe0df,	// (0x0005030a) midp_keyp_sk_right_pane

0x08b4,	// (0x00042adf) bg_button_pane_cp03

0xe139,	// (0x00050364) midp_keyp_sk_left_pane_g1

0x08b4,	// (0x00042adf) bg_button_pane_cp04

0xe139,	// (0x00050364) midp_keyp_sk_right_pane_g1

0xc2f2,	// (0x0004e51d) midp_keyp_rocker_pane_g1

0xe142,	// (0x0005036d) keyp_game_cell_pane_ParamLimits

0xe142,	// (0x0005036d) keyp_game_cell_pane

0x08b4,	// (0x00042adf) bg_button_pane_cp02

0xe155,	// (0x00050380) keyp_game_cell_pane_g1

0x6767,	// (0x00048992) popup_fep_vkb2_window_ParamLimits

0x6767,	// (0x00048992) popup_fep_vkb2_window

0x8ad4,	// (0x0004acff) aid_size_cell_vkb2_ParamLimits

0x8ad4,	// (0x0004acff) aid_size_cell_vkb2

0x8b28,	// (0x0004ad53) popup_fep_vkb2_window_g1_ParamLimits

0x8b28,	// (0x0004ad53) popup_fep_vkb2_window_g1

0x8b70,	// (0x0004ad9b) vkb2_area_bottom_pane_ParamLimits

0x8b70,	// (0x0004ad9b) vkb2_area_bottom_pane

0x8bbc,	// (0x0004ade7) vkb2_area_keypad_pane_ParamLimits

0x8bbc,	// (0x0004ade7) vkb2_area_keypad_pane

0x8bfe,	// (0x0004ae29) vkb2_area_top_pane_ParamLimits

0x8bfe,	// (0x0004ae29) vkb2_area_top_pane

0x8c78,	// (0x0004aea3) vkb2_top_entry_pane_ParamLimits

0x8c78,	// (0x0004aea3) vkb2_top_entry_pane

0x8ca2,	// (0x0004aecd) vkb2_top_grid_left_pane_ParamLimits

0x8ca2,	// (0x0004aecd) vkb2_top_grid_left_pane

0x8cc0,	// (0x0004aeeb) vkb2_top_grid_right_pane_ParamLimits

0x8cc0,	// (0x0004aeeb) vkb2_top_grid_right_pane

0x8cde,	// (0x0004af09) vkb2_cell_keypad_pane_ParamLimits

0x8cde,	// (0x0004af09) vkb2_cell_keypad_pane

0x8daf,	// (0x0004afda) vkb2_area_bottom_grid_pane_ParamLimits

0x8daf,	// (0x0004afda) vkb2_area_bottom_grid_pane

0x8dd5,	// (0x0004b000) vkb2_area_bottom_pane_g1_ParamLimits

0x8dd5,	// (0x0004b000) vkb2_area_bottom_pane_g1

0x8df9,	// (0x0004b024) vkb2_area_bottom_pane_g2_ParamLimits

0x8df9,	// (0x0004b024) vkb2_area_bottom_pane_g2

0x8e27,	// (0x0004b052) vkb2_area_bottom_pane_g3_ParamLimits

0x8e27,	// (0x0004b052) vkb2_area_bottom_pane_g3

0x0002,

0xfd95,	// (0x00051fc0) vkb2_area_bottom_pane_g_ParamLimits

0xfd95,	// (0x00051fc0) vkb2_area_bottom_pane_g

0x8e88,	// (0x0004b0b3) vkb2_top_cell_left_pane_ParamLimits

0x8e88,	// (0x0004b0b3) vkb2_top_cell_left_pane

0xe166,	// (0x00050391) vkb2_top_entry_pane_g1_ParamLimits

0xe166,	// (0x00050391) vkb2_top_entry_pane_g1

0xe174,	// (0x0005039f) vkb2_top_entry_pane_t1_ParamLimits

0xe174,	// (0x0005039f) vkb2_top_entry_pane_t1

0xe1a6,	// (0x000503d1) vkb2_top_entry_pane_t2_ParamLimits

0xe1a6,	// (0x000503d1) vkb2_top_entry_pane_t2

0xe1d8,	// (0x00050403) vkb2_top_entry_pane_t3_ParamLimits

0xe1d8,	// (0x00050403) vkb2_top_entry_pane_t3

0x0002,

0xfd9c,	// (0x00051fc7) vkb2_top_entry_pane_t_ParamLimits

0xfd9c,	// (0x00051fc7) vkb2_top_entry_pane_t

0x8ed5,	// (0x0004b100) vkb2_top_grid_right_pane_g1_ParamLimits

0x8ed5,	// (0x0004b100) vkb2_top_grid_right_pane_g1

0x8eeb,	// (0x0004b116) vkb2_top_grid_right_pane_g2_ParamLimits

0x8eeb,	// (0x0004b116) vkb2_top_grid_right_pane_g2

0x8f03,	// (0x0004b12e) vkb2_top_grid_right_pane_g3_ParamLimits

0x8f03,	// (0x0004b12e) vkb2_top_grid_right_pane_g3

0x8f1b,	// (0x0004b146) vkb2_top_grid_right_pane_g4_ParamLimits

0x8f1b,	// (0x0004b146) vkb2_top_grid_right_pane_g4

0x0003,

0xfda3,	// (0x00051fce) vkb2_top_grid_right_pane_g_ParamLimits

0xfda3,	// (0x00051fce) vkb2_top_grid_right_pane_g

0x8f31,	// (0x0004b15c) vkb2_top_cell_left_pane_g1

0x8f48,	// (0x0004b173) vkb2_cell_keypad_pane_g1_ParamLimits

0x8f48,	// (0x0004b173) vkb2_cell_keypad_pane_g1

0xe1fc,	// (0x00050427) vkb2_cell_keypad_pane_t1_ParamLimits

0xe1fc,	// (0x00050427) vkb2_cell_keypad_pane_t1

0x8f56,	// (0x0004b181) vkb2_cell_bottom_grid_pane_ParamLimits

0x8f56,	// (0x0004b181) vkb2_cell_bottom_grid_pane

0x8f8f,	// (0x0004b1ba) vkb2_cell_bottom_grid_pane_g1

0xdda7,	// (0x0004ffd2) aid_call2_pane_cp02

0xddaf,	// (0x0004ffda) aid_call_pane_cp02

0xddb7,	// (0x0004ffe2) clock_digital_number_pane_cp10

0xddbf,	// (0x0004ffea) clock_digital_number_pane_cp11

0xddc7,	// (0x0004fff2) clock_digital_number_pane_cp12

0xddcf,	// (0x0004fffa) clock_digital_number_pane_cp13

0xddd7,	// (0x00050002) clock_digital_separator_pane_cp10

0x110c,	// (0x00043337) popup_clock_digital_analogue_window_cp2_g1

0x110c,	// (0x00043337) popup_clock_digital_analogue_window_cp2_g2

0xdddf,	// (0x0005000a) popup_clock_digital_analogue_window_cp2_g3

0x110c,	// (0x00043337) popup_clock_digital_analogue_window_cp2_g4

0xdddf,	// (0x0005000a) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd58,	// (0x00051f83) popup_clock_digital_analogue_window_cp2_g

0xdde7,	// (0x00050012) popup_clock_digital_analogue_window_cp2_t1

0xddf5,	// (0x00050020) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd63,	// (0x00051f8e) popup_clock_digital_analogue_window_cp2_t

0xc2f2,	// (0x0004e51d) clock_digital_number_pane_cp10_g1

0xc2f2,	// (0x0004e51d) clock_digital_number_pane_cp10_g2

0x0001,

0xfb52,	// (0x00051d7d) clock_digital_number_pane_cp10_g

0xc2f2,	// (0x0004e51d) clock_digital_separator_pane_cp10_g1

0xc2f2,	// (0x0004e51d) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb52,	// (0x00051d7d) clock_digital_separator_pane_cp10_g

0xdc24,	// (0x0004fe4f) uniindi_top_pane_g3

0xdc35,	// (0x0004fe60) uniindi_top_pane_g4

0x8d69,	// (0x0004af94) vkb2_row_keypad_pane_ParamLimits

0x8d69,	// (0x0004af94) vkb2_row_keypad_pane

0x8fab,	// (0x0004b1d6) vkb2_cell_t_keypad_pane_ParamLimits

0x8fab,	// (0x0004b1d6) vkb2_cell_t_keypad_pane

0x8fbb,	// (0x0004b1e6) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x8fbb,	// (0x0004b1e6) vkb2_cell_t_keypad_pane_cp08

0x8fce,	// (0x0004b1f9) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x8fce,	// (0x0004b1f9) vkb2_cell_t_keypad_pane_cp09

0x8fe2,	// (0x0004b20d) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x8fe2,	// (0x0004b20d) vkb2_cell_t_keypad_pane_cp01

0x8ff3,	// (0x0004b21e) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x8ff3,	// (0x0004b21e) vkb2_cell_t_keypad_pane_cp02

0x9004,	// (0x0004b22f) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x9004,	// (0x0004b22f) vkb2_cell_t_keypad_pane_cp03

0x9015,	// (0x0004b240) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x9015,	// (0x0004b240) vkb2_cell_t_keypad_pane_cp04

0x9026,	// (0x0004b251) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x9026,	// (0x0004b251) vkb2_cell_t_keypad_pane_cp05

0x9037,	// (0x0004b262) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x9037,	// (0x0004b262) vkb2_cell_t_keypad_pane_cp06

0x9048,	// (0x0004b273) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x9048,	// (0x0004b273) vkb2_cell_t_keypad_pane_cp07

0x9059,	// (0x0004b284) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x9059,	// (0x0004b284) vkb2_cell_t_keypad_pane_cp10

0xc562,	// (0x0004e78d) vkb2_cell_t_keypad_pane_g1

0xe213,	// (0x0005043e) vkb2_cell_t_keypad_pane_t1

0x08b4,	// (0x00042adf) popup_grid_graphic2_window

0xe225,	// (0x00050450) aid_size_cell_graphic2_ParamLimits

0xe225,	// (0x00050450) aid_size_cell_graphic2

0xe25d,	// (0x00050488) bg_popup_window_pane_cp21_ParamLimits

0xe25d,	// (0x00050488) bg_popup_window_pane_cp21

0xe26b,	// (0x00050496) graphic2_pages_pane_ParamLimits

0xe26b,	// (0x00050496) graphic2_pages_pane

0xe2b1,	// (0x000504dc) grid_graphic2_control_pane_ParamLimits

0xe2b1,	// (0x000504dc) grid_graphic2_control_pane

0xe2ef,	// (0x0005051a) grid_graphic2_pane_ParamLimits

0xe2ef,	// (0x0005051a) grid_graphic2_pane

0xe363,	// (0x0005058e) cell_graphic2_pane

0x08b4,	// (0x00042adf) main_comp_mode_pane

0xd4a8,	// (0x0004f6d3) list_ai3_gene_pane_ParamLimits

0xd86c,	// (0x0004fa97) bg_popup_window_pane_cp19_ParamLimits

0xd878,	// (0x0004faa3) bg_touch_area_indi_pane_ParamLimits

0xd878,	// (0x0004faa3) bg_touch_area_indi_pane

0xd88e,	// (0x0004fab9) bg_touch_area_indi_pane_cp01_ParamLimits

0xd88e,	// (0x0004fab9) bg_touch_area_indi_pane_cp01

0xd8a4,	// (0x0004facf) bg_touch_area_indi_pane_cp02_ParamLimits

0xd8a4,	// (0x0004facf) bg_touch_area_indi_pane_cp02

0xd8bc,	// (0x0004fae7) bg_touch_area_indi_pane_cp03_ParamLimits

0xd8bc,	// (0x0004fae7) bg_touch_area_indi_pane_cp03

0xd8d6,	// (0x0004fb01) popup_slider_window_g1_ParamLimits

0xd8f2,	// (0x0004fb1d) popup_slider_window_g2_ParamLimits

0xd90e,	// (0x0004fb39) popup_slider_window_g3_ParamLimits

0xfced,	// (0x00051f18) popup_slider_window_g_ParamLimits

0xd96a,	// (0x0004fb95) popup_slider_window_t1_ParamLimits

0xd9de,	// (0x0004fc09) small_volume_slider_vertical_pane_ParamLimits

0xe363,	// (0x0005058e) cell_graphic2_pane_ParamLimits

0xe3b1,	// (0x000505dc) bg_button_pane_cp10_ParamLimits

0xe3b1,	// (0x000505dc) bg_button_pane_cp10

0xe3c4,	// (0x000505ef) bg_button_pane_cp11_ParamLimits

0xe3c4,	// (0x000505ef) bg_button_pane_cp11

0xe3d7,	// (0x00050602) graphic2_pages_pane_g1_ParamLimits

0xe3d7,	// (0x00050602) graphic2_pages_pane_g1

0xe3f2,	// (0x0005061d) graphic2_pages_pane_g2_ParamLimits

0xe3f2,	// (0x0005061d) graphic2_pages_pane_g2

0x0001,

0xfdb1,	// (0x00051fdc) graphic2_pages_pane_g_ParamLimits

0xfdb1,	// (0x00051fdc) graphic2_pages_pane_g

0xe40a,	// (0x00050635) graphic2_pages_pane_t1_ParamLimits

0xe40a,	// (0x00050635) graphic2_pages_pane_t1

0xe422,	// (0x0005064d) cell_graphic2_control_pane_ParamLimits

0xe422,	// (0x0005064d) cell_graphic2_control_pane

0xe443,	// (0x0005066e) cell_graphic2_pane_g1_ParamLimits

0xe443,	// (0x0005066e) cell_graphic2_pane_g1

0xe450,	// (0x0005067b) cell_graphic2_pane_g2_ParamLimits

0xe450,	// (0x0005067b) cell_graphic2_pane_g2

0xe45d,	// (0x00050688) cell_graphic2_pane_g3_ParamLimits

0xe45d,	// (0x00050688) cell_graphic2_pane_g3

0xe46a,	// (0x00050695) cell_graphic2_pane_g4_ParamLimits

0xe46a,	// (0x00050695) cell_graphic2_pane_g4

0xe477,	// (0x000506a2) cell_graphic2_pane_g5_ParamLimits

0xe477,	// (0x000506a2) cell_graphic2_pane_g5

0x0004,

0xfdb6,	// (0x00051fe1) cell_graphic2_pane_g_ParamLimits

0xfdb6,	// (0x00051fe1) cell_graphic2_pane_g

0xe492,	// (0x000506bd) cell_graphic2_pane_t1_ParamLimits

0xe492,	// (0x000506bd) cell_graphic2_pane_t1

0x9da8,	// (0x0004bfd3) grid_highlight_pane_cp11_ParamLimits

0x9da8,	// (0x0004bfd3) grid_highlight_pane_cp11

0x0a4e,	// (0x00042c79) bg_button_pane_cp05

0xe4bb,	// (0x000506e6) cell_graphic2_control_pane_g1

0xc2f2,	// (0x0004e51d) bg_touch_area_indi_pane_g1

0xe4e3,	// (0x0005070e) aid_cmod_rocker_key_size

0xe4ed,	// (0x00050718) aid_cmode_itu_key_size

0xe4f7,	// (0x00050722) main_cmode_video_pane

0xe501,	// (0x0005072c) main_comp_mode_itu_pane

0xe50d,	// (0x00050738) main_comp_mode_rocker_pane

0xe519,	// (0x00050744) cell_cmode_rocker_pane_ParamLimits

0xe519,	// (0x00050744) cell_cmode_rocker_pane

0xe52b,	// (0x00050756) cell_cmode_itu_pane_ParamLimits

0xe52b,	// (0x00050756) cell_cmode_itu_pane

0x0cd6,	// (0x00042f01) bg_button_pane_cp06_ParamLimits

0x0cd6,	// (0x00042f01) bg_button_pane_cp06

0xc562,	// (0x0004e78d) cell_cmode_rocker_pane_g1_ParamLimits

0xc562,	// (0x0004e78d) cell_cmode_rocker_pane_g1

0xda82,	// (0x0004fcad) cell_cmode_rocker_pane_g2_ParamLimits

0xda82,	// (0x0004fcad) cell_cmode_rocker_pane_g2

0x0001,

0xfdc6,	// (0x00051ff1) cell_cmode_rocker_pane_g_ParamLimits

0xfdc6,	// (0x00051ff1) cell_cmode_rocker_pane_g

0x08b4,	// (0x00042adf) bg_button_pane_cp07

0xe540,	// (0x0005076b) cell_cmode_itu_pane_g1

0xe549,	// (0x00050774) cell_cmode_itu_pane_t1

0xe557,	// (0x00050782) cell_cmode_itu_pane_t2

0x0001,

0xfdcb,	// (0x00051ff6) cell_cmode_itu_pane_t

0xdca6,	// (0x0004fed1) aid_touch_ctrl_left

0xdcae,	// (0x0004fed9) aid_touch_ctrl_right

0x08b4,	// (0x00042adf) compa_mode_pane

0xe565,	// (0x00050790) aid_cmod_rocker_key_size_cp

0xe56f,	// (0x0005079a) aid_cmode_itu_key_size_cp

0xe579,	// (0x000507a4) compa_mode_pane_g1

0xe581,	// (0x000507ac) compa_mode_pane_g2

0xe589,	// (0x000507b4) compa_mode_pane_g3

0x0002,

0xfdd0,	// (0x00051ffb) compa_mode_pane_g

0xe591,	// (0x000507bc) main_comp_mode_itu_pane_cp

0xe599,	// (0x000507c4) main_comp_mode_rocker_pane_cp

0xe5a1,	// (0x000507cc) cell_cmode_itu_pane_cp_ParamLimits

0xe5a1,	// (0x000507cc) cell_cmode_itu_pane_cp

0xe5b6,	// (0x000507e1) cell_cmode_rocker_pane_cp_ParamLimits

0xe5b6,	// (0x000507e1) cell_cmode_rocker_pane_cp

0x0cd6,	// (0x00042f01) bg_button_pane_cp06_cp_ParamLimits

0x0cd6,	// (0x00042f01) bg_button_pane_cp06_cp

0xc562,	// (0x0004e78d) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc562,	// (0x0004e78d) cell_cmode_rocker_pane_g1_cp

0xc2f2,	// (0x0004e51d) cell_cmode_rocker_pane_g2_cp

0x08b4,	// (0x00042adf) bg_button_pane_cp07_cp

0xe5c8,	// (0x000507f3) cell_cmode_itu_pane_g1_cp

0xe5d1,	// (0x000507fc) cell_cmode_itu_pane_t1_cp

0xe5d1,	// (0x000507fc) cell_cmode_itu_pane_t2_cp

0xb23a,	// (0x0004d465) settings_code_pane_cp2

0x0924,	// (0x00042b4f) bg_popup_window_pane_cp3_ParamLimits

0x0b67,	// (0x00042d92) heading_pane_cp3_ParamLimits

0x0b73,	// (0x00042d9e) listscroll_popup_graphic_pane_ParamLimits

0x85ad,	// (0x0004a7d8) fep_hwr_aid_pane_ParamLimits

0x8a4b,	// (0x0004ac76) aid_touch_sctrl_top_ParamLimits

0x8a58,	// (0x0004ac83) sctrl_sk_top_pane_g1_ParamLimits

0xc562,	// (0x0004e78d) sctrl_sk_top_pane_g2_ParamLimits

0xfd06,	// (0x00051f31) sctrl_sk_top_pane_g_ParamLimits

0x8a65,	// (0x0004ac90) sctrl_sk_top_pane_t1_ParamLimits

0x8a4b,	// (0x0004ac76) aid_touch_sctrl_bottom_ParamLimits

0x8a65,	// (0x0004ac90) sctrl_sk_bottom_pane_t1_ParamLimits

0xdbf0,	// (0x0004fe1b) aid_area_touch_clock

0x8c40,	// (0x0004ae6b) aid_vkb2_area_top_pane_cell_ParamLimits

0x8c40,	// (0x0004ae6b) aid_vkb2_area_top_pane_cell

0x8d8b,	// (0x0004afb6) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8d8b,	// (0x0004afb6) aid_vkb2_area_bottom_pane_cell

0xe15e,	// (0x00050389) popup_char_count_window

0xe5df,	// (0x0005080a) popup_char_count_window_g1

0xe5e8,	// (0x00050813) popup_char_count_window_g2

0xe5f1,	// (0x0005081c) popup_char_count_window_g3

0x0002,

0xfdd7,	// (0x00052002) popup_char_count_window_g

0xe5fa,	// (0x00050825) popup_char_count_window_t1

0x8b06,	// (0x0004ad31) popup_fep_char_preview_window_ParamLimits

0x8b06,	// (0x0004ad31) popup_fep_char_preview_window

0x8c5e,	// (0x0004ae89) vkb2_top_candi_pane_ParamLimits

0x8c5e,	// (0x0004ae89) vkb2_top_candi_pane

0xe608,	// (0x00050833) cell_vkb2_top_candi_pane_ParamLimits

0xe608,	// (0x00050833) cell_vkb2_top_candi_pane

0xa3a6,	// (0x0004c5d1) bg_popup_fep_char_preview_window_ParamLimits

0xa3a6,	// (0x0004c5d1) bg_popup_fep_char_preview_window

0x906e,	// (0x0004b299) popup_fep_char_preview_window_t1_ParamLimits

0x906e,	// (0x0004b299) popup_fep_char_preview_window_t1

0xe655,	// (0x00050880) bg_popup_fep_char_preview_window_g1

0xe65d,	// (0x00050888) bg_popup_fep_char_preview_window_g2

0xe665,	// (0x00050890) bg_popup_fep_char_preview_window_g3

0xe66d,	// (0x00050898) bg_popup_fep_char_preview_window_g4

0xe675,	// (0x000508a0) bg_popup_fep_char_preview_window_g5

0x90a8,	// (0x0004b2d3) bg_popup_fep_char_preview_window_g6

0xe67d,	// (0x000508a8) bg_popup_fep_char_preview_window_g7

0xe685,	// (0x000508b0) bg_popup_fep_char_preview_window_g8

0xe68d,	// (0x000508b8) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdde,	// (0x00052009) bg_popup_fep_char_preview_window_g

0xc562,	// (0x0004e78d) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc562,	// (0x0004e78d) cell_vkb2_top_candi_pane_g1

0xc879,	// (0x0004eaa4) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc879,	// (0x0004eaa4) cell_vkb2_top_candi_pane_g2

0xc89a,	// (0x0004eac5) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc89a,	// (0x0004eac5) cell_vkb2_top_candi_pane_g3

0x90b0,	// (0x0004b2db) cell_vkb2_top_candi_pane_g4_ParamLimits

0x90b0,	// (0x0004b2db) cell_vkb2_top_candi_pane_g4

0xe695,	// (0x000508c0) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe695,	// (0x000508c0) cell_vkb2_top_candi_pane_g5

0xda82,	// (0x0004fcad) cell_vkb2_top_candi_pane_g6_ParamLimits

0xda82,	// (0x0004fcad) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf1,	// (0x0005201c) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf1,	// (0x0005201c) cell_vkb2_top_candi_pane_g

0x90d1,	// (0x0004b2fc) cell_vkb2_top_candi_pane_t1

0x82a3,	// (0x0004a4ce) aid_size_touch_slider_mark_ParamLimits

0x82a3,	// (0x0004a4ce) aid_size_touch_slider_mark

0xe2a1,	// (0x000504cc) grid_graphic2_catg_pane_ParamLimits

0xe2a1,	// (0x000504cc) grid_graphic2_catg_pane

0xe33f,	// (0x0005056a) popup_grid_graphic2_window_t1_ParamLimits

0xe33f,	// (0x0005056a) popup_grid_graphic2_window_t1

0xe351,	// (0x0005057c) popup_grid_graphic2_window_t2_ParamLimits

0xe351,	// (0x0005057c) popup_grid_graphic2_window_t2

0x0001,

0xfdac,	// (0x00051fd7) popup_grid_graphic2_window_t_ParamLimits

0xfdac,	// (0x00051fd7) popup_grid_graphic2_window_t

0x0a4e,	// (0x00042c79) bg_button_pane_cp05_ParamLimits

0xe4bb,	// (0x000506e6) cell_graphic2_control_pane_g1_ParamLimits

0xe6b6,	// (0x000508e1) cell_graphic2_catg_pane_ParamLimits

0xe6b6,	// (0x000508e1) cell_graphic2_catg_pane

0x08b4,	// (0x00042adf) bg_button_pane_cp12

0xe6c8,	// (0x000508f3) cell_graphic2_catg_pane_g1

0xdbbc,	// (0x0004fde7) cell_tb_ext_pane_t1_ParamLimits

0x8ea8,	// (0x0004b0d3) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8ea8,	// (0x0004b0d3) vkb2_top_cell_right_narrow_pane

0x8ec0,	// (0x0004b0eb) vkb2_top_cell_right_wide_pane_ParamLimits

0x8ec0,	// (0x0004b0eb) vkb2_top_cell_right_wide_pane

0x859f,	// (0x0004a7ca) bg_vkb2_func_pane_ParamLimits

0x859f,	// (0x0004a7ca) bg_vkb2_func_pane

0x8f31,	// (0x0004b15c) vkb2_top_cell_left_pane_g1_ParamLimits

0x859f,	// (0x0004a7ca) bg_vkb2_fuc_pane_cp03_ParamLimits

0x859f,	// (0x0004a7ca) bg_vkb2_fuc_pane_cp03

0x8f8f,	// (0x0004b1ba) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9d3c,	// (0x0004bf67) bg_vkb2_func_pane_g1

0x9d44,	// (0x0004bf6f) bg_vkb2_func_pane_g2

0x9d54,	// (0x0004bf7f) bg_vkb2_func_pane_g3

0x9d4c,	// (0x0004bf77) bg_vkb2_func_pane_g4

0x9d5c,	// (0x0004bf87) bg_vkb2_func_pane_g5

0x9d64,	// (0x0004bf8f) bg_vkb2_func_pane_g6

0x9d6c,	// (0x0004bf97) bg_vkb2_func_pane_g7

0x9d74,	// (0x0004bf9f) bg_vkb2_func_pane_g8

0x9d34,	// (0x0004bf5f) bg_vkb2_func_pane_g9

0x0008,

0xfdfe,	// (0x00052029) bg_vkb2_func_pane_g

0x859f,	// (0x0004a7ca) bg_vkb2_fuc_pane_cp01_ParamLimits

0x859f,	// (0x0004a7ca) bg_vkb2_fuc_pane_cp01

0x8f31,	// (0x0004b15c) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x8f31,	// (0x0004b15c) vkb2_top_cell_right_wide_pane_g1

0x859f,	// (0x0004a7ca) bg_vkb2_fuc_pane_cp02_ParamLimits

0x859f,	// (0x0004a7ca) bg_vkb2_fuc_pane_cp02

0x8f8f,	// (0x0004b1ba) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x8f8f,	// (0x0004b1ba) vkb2_top_cell_right_narrow_pane_g1

0xd7ee,	// (0x0004fa19) aid_touch_area_decrease_ParamLimits

0xd7ee,	// (0x0004fa19) aid_touch_area_decrease

0xd80e,	// (0x0004fa39) aid_touch_area_increase_ParamLimits

0xd80e,	// (0x0004fa39) aid_touch_area_increase

0xd81a,	// (0x0004fa45) aid_touch_area_mute_ParamLimits

0xd81a,	// (0x0004fa45) aid_touch_area_mute

0xd83e,	// (0x0004fa69) aid_touch_area_slider_ParamLimits

0xd83e,	// (0x0004fa69) aid_touch_area_slider

0xd92a,	// (0x0004fb55) popup_slider_window_g4_ParamLimits

0xd92a,	// (0x0004fb55) popup_slider_window_g4

0xd936,	// (0x0004fb61) popup_slider_window_g5_ParamLimits

0xd936,	// (0x0004fb61) popup_slider_window_g5

0xd958,	// (0x0004fb83) popup_slider_window_g6_ParamLimits

0xd958,	// (0x0004fb83) popup_slider_window_g6

0xd998,	// (0x0004fbc3) popup_slider_window_t2_ParamLimits

0xd998,	// (0x0004fbc3) popup_slider_window_t2

0x0001,

0xfcfa,	// (0x00051f25) popup_slider_window_t_ParamLimits

0xfcfa,	// (0x00051f25) popup_slider_window_t

0xd9b0,	// (0x0004fbdb) slider_pane_ParamLimits

0xd9b0,	// (0x0004fbdb) slider_pane

0xe6d1,	// (0x000508fc) slider_pane_g1_ParamLimits

0xe6d1,	// (0x000508fc) slider_pane_g1

0xe6e5,	// (0x00050910) slider_pane_g2_ParamLimits

0xe6e5,	// (0x00050910) slider_pane_g2

0xe6fb,	// (0x00050926) slider_pane_g3_ParamLimits

0xe6fb,	// (0x00050926) slider_pane_g3

0x0003,

0xfe11,	// (0x0005203c) slider_pane_g_ParamLimits

0xfe11,	// (0x0005203c) slider_pane_g

0x7ec0,	// (0x0004a0eb) popup_tb_float_extension_window_ParamLimits

0x7ec0,	// (0x0004a0eb) popup_tb_float_extension_window

0xe727,	// (0x00050952) aid_size_cell_tb_float_ext

0x08b4,	// (0x00042adf) bg_popup_sub_window_cp28

0xe733,	// (0x0005095e) grid_tb_float_ext_pane

0xe73d,	// (0x00050968) cell_tb_float_ext_pane_ParamLimits

0xe73d,	// (0x00050968) cell_tb_float_ext_pane

0xe757,	// (0x00050982) cell_tb_float_ext_pane_g1

0xe760,	// (0x0005098b) grid_highlight_pane_cp12

0x86e0,	// (0x0004a90b) cell_last_hwr_side_pane_ParamLimits

0x86e0,	// (0x0004a90b) cell_last_hwr_side_pane

0xc2f2,	// (0x0004e51d) cell_last_hwr_side_pane_g1

0xe769,	// (0x00050994) cell_last_hwr_side_pane_g2

0x0001,

0xfe1a,	// (0x00052045) cell_last_hwr_side_pane_g

0x8e57,	// (0x0004b082) vkb2_area_bottom_space_btn_pane_ParamLimits

0x8e57,	// (0x0004b082) vkb2_area_bottom_space_btn_pane

0xc562,	// (0x0004e78d) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe213,	// (0x0005043e) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x90d1,	// (0x0004b2fc) cell_vkb2_top_candi_pane_t1_ParamLimits

0x90f0,	// (0x0004b31b) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x90f0,	// (0x0004b31b) vkb2_area_bottom_space_btn_pane_g1

0x912a,	// (0x0004b355) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x912a,	// (0x0004b355) vkb2_area_bottom_space_btn_pane_g2

0x9160,	// (0x0004b38b) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x9160,	// (0x0004b38b) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1f,	// (0x0005204a) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1f,	// (0x0005204a) vkb2_area_bottom_space_btn_pane_g

0x8654,	// (0x0004a87f) cel_fep_hwr_func_pane_ParamLimits

0x8654,	// (0x0004a87f) cel_fep_hwr_func_pane

0x8690,	// (0x0004a8bb) cell_hwr_side_button_pane_ParamLimits

0x8690,	// (0x0004a8bb) cell_hwr_side_button_pane

0xdbf0,	// (0x0004fe1b) aid_area_touch_clock_ParamLimits

0x0a4e,	// (0x00042c79) bg_uniindi_top_pane_ParamLimits

0xdc02,	// (0x0004fe2d) uniindi_top_pane_g1_ParamLimits

0xdc18,	// (0x0004fe43) uniindi_top_pane_g2_ParamLimits

0xdc24,	// (0x0004fe4f) uniindi_top_pane_g3_ParamLimits

0xdc35,	// (0x0004fe60) uniindi_top_pane_g4_ParamLimits

0xfd32,	// (0x00051f5d) uniindi_top_pane_g_ParamLimits

0xdc42,	// (0x0004fe6d) uniindi_top_pane_t1_ParamLimits

0x0a4e,	// (0x00042c79) bg_vkb2_func_pane_cp01_ParamLimits

0x0a4e,	// (0x00042c79) bg_vkb2_func_pane_cp01

0xe772,	// (0x0005099d) cel_fep_hwr_func_pane_g1_ParamLimits

0xe772,	// (0x0005099d) cel_fep_hwr_func_pane_g1

0x0a4e,	// (0x00042c79) bg_vkb2_func_pane_cp02_ParamLimits

0x0a4e,	// (0x00042c79) bg_vkb2_func_pane_cp02

0xe772,	// (0x0005099d) cell_hwr_side_button_pane_g1_ParamLimits

0xe772,	// (0x0005099d) cell_hwr_side_button_pane_g1

0x9bb8,	// (0x0004bde3) status_pane_g4_ParamLimits

0x9bb8,	// (0x0004bde3) status_pane_g4

0x9bd2,	// (0x0004bdfd) status_pane_t1

0xc027,	// (0x0004e252) form2_midp_gauge_slider_cont_pane

0xc02f,	// (0x0004e25a) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc041,	// (0x0004e26c) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc053,	// (0x0004e27e) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb05,	// (0x00051d30) form2_midp_gauge_slider_pane_t_ParamLimits

0xc065,	// (0x0004e290) form2_midp_slider_pane_ParamLimits

0x8ac6,	// (0x0004acf1) aid_size_cell_func_vkb2_ParamLimits

0x8ac6,	// (0x0004acf1) aid_size_cell_func_vkb2

0xe713,	// (0x0005093e) slider_pane_g4_ParamLimits

0xe713,	// (0x0005093e) slider_pane_g4

0x91aa,	// (0x0004b3d5) form2_midp_gauge_slider_pane_t2_cp01

0x91b8,	// (0x0004b3e3) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x91b8,	// (0x0004b3e3) form2_midp_gauge_slider_pane_t3_cp01

0x91d5,	// (0x0004b400) form2_midp_slider_pane_cp01

0x08b4,	// (0x00042adf) navi_smil_pane

0xe7ab,	// (0x000509d6) navi_smil_pane_g1

0xe7b3,	// (0x000509de) navi_smil_pane_t1

0xe780,	// (0x000509ab) form2_midp_slider_pane_g1

0xe789,	// (0x000509b4) form2_midp_slider_pane_g2

0xe791,	// (0x000509bc) form2_midp_slider_pane_g3

0xe780,	// (0x000509ab) form2_midp_slider_pane_g4

0xe799,	// (0x000509c4) form2_midp_slider_pane_g5

0x0004,

0xfe28,	// (0x00052053) form2_midp_slider_pane_g

0x919a,	// (0x0004b3c5) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x919a,	// (0x0004b3c5) vkb2_area_bottom_space_btn_pane_g4

0x99e7,	// (0x0004bc12) lc0_navi_pane_ParamLimits

0x99e7,	// (0x0004bc12) lc0_navi_pane

0x9a5d,	// (0x0004bc88) lc0_stat_indi_pane_ParamLimits

0x9a5d,	// (0x0004bc88) lc0_stat_indi_pane

0x9a74,	// (0x0004bc9f) ls0_title_pane_ParamLimits

0x9a74,	// (0x0004bc9f) ls0_title_pane

0x0cd6,	// (0x00042f01) bg_popup_sub_pane_cp14_ParamLimits

0xdbd7,	// (0x0004fe02) list_uniindi_pane_ParamLimits

0xdbe3,	// (0x0004fe0e) uniindi_top_pane_ParamLimits

0xdc7e,	// (0x0004fea9) list_single_uniindi_pane_g1_ParamLimits

0xdc91,	// (0x0004febc) list_single_uniindi_pane_t1_ParamLimits

0x91de,	// (0x0004b409) lc0_stat_clock_pane_ParamLimits

0x91de,	// (0x0004b409) lc0_stat_clock_pane

0xe7ce,	// (0x000509f9) lc0_stat_indi_pane_g1_ParamLimits

0xe7ce,	// (0x000509f9) lc0_stat_indi_pane_g1

0xe7c1,	// (0x000509ec) lc0_stat_indi_pane_g2_ParamLimits

0xe7c1,	// (0x000509ec) lc0_stat_indi_pane_g2

0x0001,

0xfe33,	// (0x0005205e) lc0_stat_indi_pane_g_ParamLimits

0xfe33,	// (0x0005205e) lc0_stat_indi_pane_g

0x91eb,	// (0x0004b416) lc0_uni_indicator_pane_ParamLimits

0x91eb,	// (0x0004b416) lc0_uni_indicator_pane

0xe7db,	// (0x00050a06) ls0_title_pane_g1_ParamLimits

0xe7db,	// (0x00050a06) ls0_title_pane_g1

0xe7ef,	// (0x00050a1a) ls0_title_pane_t1_ParamLimits

0xe7ef,	// (0x00050a1a) ls0_title_pane_t1

0x91f8,	// (0x0004b423) lc0_uni_indicator_pane_g1_ParamLimits

0x91f8,	// (0x0004b423) lc0_uni_indicator_pane_g1

0xe825,	// (0x00050a50) lc0_stat_clock_pane_t1

0x08b4,	// (0x00042adf) main_ai5_pane

0xe833,	// (0x00050a5e) ai5_sk_pane_ParamLimits

0xe833,	// (0x00050a5e) ai5_sk_pane

0xe840,	// (0x00050a6b) cell_ai5_widget_pane_ParamLimits

0xe840,	// (0x00050a6b) cell_ai5_widget_pane

0xe8fc,	// (0x00050b27) aid_size_cell_widget_grid

0xe90a,	// (0x00050b35) bg_ai5_widget_pane_ParamLimits

0xe90a,	// (0x00050b35) bg_ai5_widget_pane

0xe97e,	// (0x00050ba9) cell_ai5_widget_pane_g2

0xe98e,	// (0x00050bb9) cell_ai5_widget_pane_g3

0xe9a5,	// (0x00050bd0) cell_ai5_widget_pane_g4

0xe9b1,	// (0x00050bdc) cell_ai5_widget_pane_g5

0xe9bd,	// (0x00050be8) cell_ai5_widget_pane_g6

0xe9c9,	// (0x00050bf4) cell_ai5_widget_pane_g7

0xea11,	// (0x00050c3c) cell_ai5_widget_pane_t1_ParamLimits

0xea11,	// (0x00050c3c) cell_ai5_widget_pane_t1

0xea2e,	// (0x00050c59) cell_ai5_widget_pane_t2_ParamLimits

0xea2e,	// (0x00050c59) cell_ai5_widget_pane_t2

0xea46,	// (0x00050c71) cell_ai5_widget_pane_t3_ParamLimits

0xea46,	// (0x00050c71) cell_ai5_widget_pane_t3

0xea5e,	// (0x00050c89) cell_ai5_widget_pane_t4_ParamLimits

0xea5e,	// (0x00050c89) cell_ai5_widget_pane_t4

0xea7b,	// (0x00050ca6) cell_ai5_widget_pane_t5_ParamLimits

0xea7b,	// (0x00050ca6) cell_ai5_widget_pane_t5

0xea9a,	// (0x00050cc5) cell_ai5_widget_pane_t6_ParamLimits

0xea9a,	// (0x00050cc5) cell_ai5_widget_pane_t6

0xeaac,	// (0x00050cd7) cell_ai5_widget_pane_t7_ParamLimits

0xeaac,	// (0x00050cd7) cell_ai5_widget_pane_t7

0xeac5,	// (0x00050cf0) cell_ai5_widget_pane_t8_ParamLimits

0xeac5,	// (0x00050cf0) cell_ai5_widget_pane_t8

0x0009,

0xfe4d,	// (0x00052078) cell_ai5_widget_pane_t_ParamLimits

0xfe4d,	// (0x00052078) cell_ai5_widget_pane_t

0xeb19,	// (0x00050d44) grid_ai5_widget_pane

0x0cd6,	// (0x00042f01) highlight_cell_ai5_widget_pane_ParamLimits

0x0cd6,	// (0x00042f01) highlight_cell_ai5_widget_pane

0xeb27,	// (0x00050d52) ai5_sk_left_pane

0xeb31,	// (0x00050d5c) ai5_sk_middle_pane

0xeb3b,	// (0x00050d66) ai5_sk_right_pane

0xeb45,	// (0x00050d70) bg_ai5_widget_pane_g1_ParamLimits

0xeb45,	// (0x00050d70) bg_ai5_widget_pane_g1

0xeb51,	// (0x00050d7c) bg_ai5_widget_pane_g2_ParamLimits

0xeb51,	// (0x00050d7c) bg_ai5_widget_pane_g2

0xeb5d,	// (0x00050d88) bg_ai5_widget_pane_g3_ParamLimits

0xeb5d,	// (0x00050d88) bg_ai5_widget_pane_g3

0xeb69,	// (0x00050d94) bg_ai5_widget_pane_g4_ParamLimits

0xeb69,	// (0x00050d94) bg_ai5_widget_pane_g4

0xeb75,	// (0x00050da0) bg_ai5_widget_pane_g5_ParamLimits

0xeb75,	// (0x00050da0) bg_ai5_widget_pane_g5

0xeb81,	// (0x00050dac) bg_ai5_widget_pane_g6_ParamLimits

0xeb81,	// (0x00050dac) bg_ai5_widget_pane_g6

0xeb8d,	// (0x00050db8) bg_ai5_widget_pane_g7_ParamLimits

0xeb8d,	// (0x00050db8) bg_ai5_widget_pane_g7

0xeb99,	// (0x00050dc4) bg_ai5_widget_pane_g8_ParamLimits

0xeb99,	// (0x00050dc4) bg_ai5_widget_pane_g8

0xeba5,	// (0x00050dd0) bg_ai5_widget_pane_g9_ParamLimits

0xeba5,	// (0x00050dd0) bg_ai5_widget_pane_g9

0x0008,

0xfe62,	// (0x0005208d) bg_ai5_widget_pane_g_ParamLimits

0xfe62,	// (0x0005208d) bg_ai5_widget_pane_g

0xebd7,	// (0x00050e02) cell_shortcut_ai5_widget_pane_ParamLimits

0xebd7,	// (0x00050e02) cell_shortcut_ai5_widget_pane

0x7767,	// (0x00049992) bg_cell_shortcut_ai5_widget_pane

0xebe8,	// (0x00050e13) cell_grid_ai5_widget_pane_g1

0x7767,	// (0x00049992) highlight_cell_shortcut_ai5_widget_pane

0x9d44,	// (0x0004bf6f) ai5_sk_left_pane_g1

0xebf1,	// (0x00050e1c) ai5_sk_left_pane_g2

0xebf9,	// (0x00050e24) ai5_sk_left_pane_g3

0xec01,	// (0x00050e2c) ai5_sk_left_pane_g4

0x0003,

0xfe75,	// (0x000520a0) ai5_sk_left_pane_g

0xec09,	// (0x00050e34) ai5_sk_left_pane_t1

0x9d3c,	// (0x0004bf67) ai5_sk_right_pane_g1

0xec17,	// (0x00050e42) ai5_sk_right_pane_g2

0xec1f,	// (0x00050e4a) ai5_sk_right_pane_g3

0xec27,	// (0x00050e52) ai5_sk_right_pane_g4

0x0003,

0xfe7e,	// (0x000520a9) ai5_sk_right_pane_g

0xec2f,	// (0x00050e5a) ai5_sk_right_pane_t1

0x9d3c,	// (0x0004bf67) ai5_sk_middle_pane_g1

0x9d44,	// (0x0004bf6f) ai5_sk_middle_pane_g2

0x9d5c,	// (0x0004bf87) ai5_sk_middle_pane_g3

0xec1f,	// (0x00050e4a) ai5_sk_middle_pane_g4

0xebf9,	// (0x00050e24) ai5_sk_middle_pane_g5

0xec3d,	// (0x00050e68) ai5_sk_middle_pane_g6

0xec45,	// (0x00050e70) ai5_sk_middle_pane_g7

0x0006,

0xfe87,	// (0x000520b2) ai5_sk_middle_pane_g

0x986d,	// (0x0004ba98) aid_touch_area_size_lc0_ParamLimits

0x986d,	// (0x0004ba98) aid_touch_area_size_lc0

0x87df,	// (0x0004aa0a) cell_hwr_candidate_pane_t1_ParamLimits

0x9889,	// (0x0004bab4) aid_touch_navi_pane

0x9b62,	// (0x0004bd8d) status_dt_navi_pane_ParamLimits

0x9b62,	// (0x0004bd8d) status_dt_navi_pane

0x9b6f,	// (0x0004bd9a) status_dt_sta_pane_ParamLimits

0x9b6f,	// (0x0004bd9a) status_dt_sta_pane

0xec4d,	// (0x00050e78) dt_sta_controll_pane

0xec5a,	// (0x00050e85) dt_sta_indi_pane

0xec6b,	// (0x00050e96) dt_sta_title_pane

0x0a4e,	// (0x00042c79) bg_dt_sta_indi_pane_ParamLimits

0x0a4e,	// (0x00042c79) bg_dt_sta_indi_pane

0xec7e,	// (0x00050ea9) dt_sta_battery_pane

0xec86,	// (0x00050eb1) dt_sta_indi_pane_g1

0xec8f,	// (0x00050eba) dt_sta_indi_pane_g2

0xec98,	// (0x00050ec3) dt_sta_indi_pane_g3

0x0002,

0xfe96,	// (0x000520c1) dt_sta_indi_pane_g

0xeca1,	// (0x00050ecc) dt_sta_signal_pane

0x0cd6,	// (0x00042f01) bg_dt_sta_title_pane_ParamLimits

0x0cd6,	// (0x00042f01) bg_dt_sta_title_pane

0xab62,	// (0x0004cd8d) dt_sta_title_pane_g1

0xecaa,	// (0x00050ed5) dt_sta_title_pane_t1_ParamLimits

0xecaa,	// (0x00050ed5) dt_sta_title_pane_t1

0x08b4,	// (0x00042adf) bg_dt_sta_control_pane

0xecbf,	// (0x00050eea) dt_sta_controll_pane_g1

0xecc8,	// (0x00050ef3) bg_dt_sta_title_pane_g1

0xecd1,	// (0x00050efc) bg_dt_sta_title_pane_g2

0xecda,	// (0x00050f05) bg_dt_sta_title_pane_g3

0x0002,

0xfe9d,	// (0x000520c8) bg_dt_sta_title_pane_g

0xc2f2,	// (0x0004e51d) bg_dt_sta_indi_pane_g1

0xece3,	// (0x00050f0e) dt_sta_signal_pane_g1

0xeceb,	// (0x00050f16) dt_sta_signal_pane_g2

0x0001,

0xfea4,	// (0x000520cf) dt_sta_signal_pane_g

0xecf3,	// (0x00050f1e) dt_sta_battery_pane_g1

0xecfc,	// (0x00050f27) dt_sta_battery_pane_t1

0xc2f2,	// (0x0004e51d) bg_dt_sta_control_pane_g1

0x118f,	// (0x000433ba) fep_china_uni_eep_pane

0x1197,	// (0x000433c2) fep_china_uni_entry_pane_ParamLimits

0x11a7,	// (0x000433d2) popup_fep_china_uni_window_g1_ParamLimits

0x11b7,	// (0x000433e2) popup_fep_china_uni_window_g2_ParamLimits

0x11b7,	// (0x000433e2) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x0005194d) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x0005194d) popup_fep_china_uni_window_g

0xed0b,	// (0x00050f36) fep_china_uni_eep_pane_g1

0xed13,	// (0x00050f3e) fep_china_uni_eep_pane_t1

0xe7a2,	// (0x000509cd) aid_touch_area_size_smil_player

0x99df,	// (0x0004bc0a) lc0_clock_pane

0x9bc6,	// (0x0004bdf1) status_pane_g5_ParamLimits

0x9bc6,	// (0x0004bdf1) status_pane_g5

0x7b81,	// (0x00049dac) popup_keymap_window

0x9b84,	// (0x0004bdaf) status_icon_pane

0xe98e,	// (0x00050bb9) cell_ai5_widget_pane_g3_ParamLimits

0xe9a5,	// (0x00050bd0) cell_ai5_widget_pane_g4_ParamLimits

0xe9b1,	// (0x00050bdc) cell_ai5_widget_pane_g5_ParamLimits

0xe9d5,	// (0x00050c00) cell_ai5_widget_pane_g8_ParamLimits

0xe9d5,	// (0x00050c00) cell_ai5_widget_pane_g8

0xe9e9,	// (0x00050c14) cell_ai5_widget_pane_g9_ParamLimits

0xe9e9,	// (0x00050c14) cell_ai5_widget_pane_g9

0xe9fd,	// (0x00050c28) cell_ai5_widget_pane_g10_ParamLimits

0xe9fd,	// (0x00050c28) cell_ai5_widget_pane_g10

0xed22,	// (0x00050f4d) status_icon_pane_g1

0x08b4,	// (0x00042adf) bg_popup_sub_pane_cp13

0xed2a,	// (0x00050f55) popup_keymap_window_t1

0x97b2,	// (0x0004b9dd) control_pane_g6_ParamLimits

0x97b2,	// (0x0004b9dd) control_pane_g6

0x97bf,	// (0x0004b9ea) control_pane_g7_ParamLimits

0x97bf,	// (0x0004b9ea) control_pane_g7

0x97cc,	// (0x0004b9f7) control_pane_g8_ParamLimits

0x97cc,	// (0x0004b9f7) control_pane_g8

0xec4d,	// (0x00050e78) dt_sta_controll_pane_ParamLimits

0xec5a,	// (0x00050e85) dt_sta_indi_pane_ParamLimits

0xec6b,	// (0x00050e96) dt_sta_title_pane_ParamLimits

0x0c21,	// (0x00042e4c) aid_size_touch_scroll_bar_cale

0x6745,	// (0x00048970) popup_discreet_window_ParamLimits

0x6745,	// (0x00048970) popup_discreet_window

0x67bf,	// (0x000489ea) popup_sk_window

0xa3a6,	// (0x0004c5d1) bg_popup_sub_pane_cp28_ParamLimits

0xa3a6,	// (0x0004c5d1) bg_popup_sub_pane_cp28

0xed38,	// (0x00050f63) popup_discreet_window_g1_ParamLimits

0xed38,	// (0x00050f63) popup_discreet_window_g1

0xed58,	// (0x00050f83) popup_discreet_window_t1_ParamLimits

0xed58,	// (0x00050f83) popup_discreet_window_t1

0xed76,	// (0x00050fa1) popup_discreet_window_t2_ParamLimits

0xed76,	// (0x00050fa1) popup_discreet_window_t2

0x0002,

0xfea9,	// (0x000520d4) popup_discreet_window_t_ParamLimits

0xfea9,	// (0x000520d4) popup_discreet_window_t

0x920c,	// (0x0004b437) popup_sk_window_g1

0x9216,	// (0x0004b441) popup_sk_window_g2

0x0001,

0xfeb0,	// (0x000520db) popup_sk_window_g

0x9220,	// (0x0004b44b) popup_sk_window_t1

0x922e,	// (0x0004b459) popup_sk_window_t1_copy1

0xe97e,	// (0x00050ba9) cell_ai5_widget_pane_g2_ParamLimits

0xead7,	// (0x00050d02) cell_ai5_widget_pane_t9_ParamLimits

0xead7,	// (0x00050d02) cell_ai5_widget_pane_t9

0x08b4,	// (0x00042adf) main_fep_fshwr2_pane

0x923c,	// (0x0004b467) aid_fshwr2_btn_pane

0x9248,	// (0x0004b473) aid_fshwr2_syb_pane

0x9254,	// (0x0004b47f) aid_fshwr2_txt_pane

0x9260,	// (0x0004b48b) fshwr2_func_candi_pane

0x9275,	// (0x0004b4a0) fshwr2_hwr_syb_pane

0x9285,	// (0x0004b4b0) fshwr2_icf_pane

0x08b4,	// (0x00042adf) fshwr2_icf_bg_pane

0x92ae,	// (0x0004b4d9) fshwr2_icf_pane_t1_ParamLimits

0x92ae,	// (0x0004b4d9) fshwr2_icf_pane_t1

0x110c,	// (0x00043337) fshwr2_func_candi_pane_g1

0xedc8,	// (0x00050ff3) fshwr2_func_candi_row_pane_ParamLimits

0xedc8,	// (0x00050ff3) fshwr2_func_candi_row_pane

0x92c6,	// (0x0004b4f1) cell_fshwr2_syb_pane_ParamLimits

0x92c6,	// (0x0004b4f1) cell_fshwr2_syb_pane

0xc562,	// (0x0004e78d) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc562,	// (0x0004e78d) fshwr2_hwr_syb_pane_g1

0x08b4,	// (0x00042adf) bg_popup_call_pane_cp01

0x92dc,	// (0x0004b507) fshwr2_func_candi_cell_pane_ParamLimits

0x92dc,	// (0x0004b507) fshwr2_func_candi_cell_pane

0xaa02,	// (0x0004cc2d) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xaa02,	// (0x0004cc2d) fshwr2_func_candi_cell_bg_pane

0x9325,	// (0x0004b550) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9325,	// (0x0004b550) fshwr2_func_candi_cell_pane_g1

0x934d,	// (0x0004b578) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x934d,	// (0x0004b578) fshwr2_func_candi_cell_pane_t1

0x08b4,	// (0x00042adf) bg_button_pane_cp08

0xedd8,	// (0x00051003) cell_fshwr2_syb_bg_pane

0x9360,	// (0x0004b58b) cell_fshwr2_syb_bg_pane_g1

0x9368,	// (0x0004b593) cell_fshwr2_syb_bg_pane_t1

0x0cd6,	// (0x00042f01) main_tmo_pane

0xae9b,	// (0x0004d0c6) uni_indicator_pane_g1_ParamLimits

0xaeb1,	// (0x0004d0dc) uni_indicator_pane_g2_ParamLimits

0xaec7,	// (0x0004d0f2) uni_indicator_pane_g3_ParamLimits

0xaedc,	// (0x0004d107) uni_indicator_pane_g4_ParamLimits

0xaedc,	// (0x0004d107) uni_indicator_pane_g4

0xaef0,	// (0x0004d11b) uni_indicator_pane_g5_ParamLimits

0xaef0,	// (0x0004d11b) uni_indicator_pane_g5

0xaef0,	// (0x0004d11b) uni_indicator_pane_g6_ParamLimits

0xaef0,	// (0x0004d11b) uni_indicator_pane_g6

0xf926,	// (0x00051b51) uni_indicator_pane_g_ParamLimits

0xd7d0,	// (0x0004f9fb) popup_tmo_note_window_ParamLimits

0xd7d0,	// (0x0004f9fb) popup_tmo_note_window

0x0cd6,	// (0x00042f01) fshwr2_bg_pane

0x933e,	// (0x0004b569) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x933e,	// (0x0004b569) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb5,	// (0x000520e0) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb5,	// (0x000520e0) fshwr2_func_candi_cell_pane_g

0xc2f2,	// (0x0004e51d) bg_popup_window_pane_cp01

0x9377,	// (0x0004b5a2) bg_popup_window_pane_g1_cp01

0xede0,	// (0x0005100b) bg_popup_window_pane_cp22_ParamLimits

0xede0,	// (0x0005100b) bg_popup_window_pane_cp22

0xedee,	// (0x00051019) listscroll_tmo_link_pane_ParamLimits

0xedee,	// (0x00051019) listscroll_tmo_link_pane

0xee2e,	// (0x00051059) popup_tmo_note_window_g1_ParamLimits

0xee2e,	// (0x00051059) popup_tmo_note_window_g1

0xee3b,	// (0x00051066) tmo_note_info_pane_ParamLimits

0xee3b,	// (0x00051066) tmo_note_info_pane

0xee55,	// (0x00051080) list_tmo_note_info_pane_g1_ParamLimits

0xee55,	// (0x00051080) list_tmo_note_info_pane_g1

0xee6c,	// (0x00051097) list_tmo_note_info_pane_g2_ParamLimits

0xee6c,	// (0x00051097) list_tmo_note_info_pane_g2

0x0001,

0xfeba,	// (0x000520e5) list_tmo_note_info_pane_g_ParamLimits

0xfeba,	// (0x000520e5) list_tmo_note_info_pane_g

0xee88,	// (0x000510b3) list_tmo_note_info_text_pane_ParamLimits

0xee88,	// (0x000510b3) list_tmo_note_info_text_pane

0xef09,	// (0x00051134) list_tmo_link_pane

0xef16,	// (0x00051141) scroll_pane_cp20

0xef23,	// (0x0005114e) list_single_tmo_link_pane_ParamLimits

0xef23,	// (0x0005114e) list_single_tmo_link_pane

0xef33,	// (0x0005115e) list_single_tmo_link_pane_t1

0xef41,	// (0x0005116c) list_tmo_note_info_text_pane_t1_ParamLimits

0xef41,	// (0x0005116c) list_tmo_note_info_text_pane_t1

0x6f59,	// (0x00049184) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6f59,	// (0x00049184) aid_size_touch_scroll_bar_cp01

0x5b9f,	// (0x00047dca) aid_size_touch_slider_marker

0x67a7,	// (0x000489d2) popup_settings_window_ParamLimits

0x67a7,	// (0x000489d2) popup_settings_window

0x5d1e,	// (0x00047f49) popup_candi_list_indi_window

0x9889,	// (0x0004bab4) aid_touch_navi_pane_ParamLimits

0x8a1f,	// (0x0004ac4a) rs_clock_indi_pane

0x8a28,	// (0x0004ac53) sctrl_sk_bottom_pane_ParamLimits

0x8a39,	// (0x0004ac64) sctrl_sk_top_pane_ParamLimits

0x8b20,	// (0x0004ad4b) popup_fep_tooltip_window

0xe8fc,	// (0x00050b27) aid_size_cell_widget_grid_ParamLimits

0xe969,	// (0x00050b94) cell_ai5_widget_pane_g1_ParamLimits

0xe969,	// (0x00050b94) cell_ai5_widget_pane_g1

0xe9bd,	// (0x00050be8) cell_ai5_widget_pane_g6_ParamLimits

0xe9c9,	// (0x00050bf4) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe38,	// (0x00052063) cell_ai5_widget_pane_g_ParamLimits

0xfe38,	// (0x00052063) cell_ai5_widget_pane_g

0xeafb,	// (0x00050d26) cell_ai5_widget_pane_t10_ParamLimits

0xeafb,	// (0x00050d26) cell_ai5_widget_pane_t10

0xeb19,	// (0x00050d44) grid_ai5_widget_pane_ParamLimits

0xebb1,	// (0x00050ddc) cell_contacts_ai5_widget_pane_ParamLimits

0xebb1,	// (0x00050ddc) cell_contacts_ai5_widget_pane

0xed8b,	// (0x00050fb6) popup_discreet_window_t3_ParamLimits

0xed8b,	// (0x00050fb6) popup_discreet_window_t3

0x929a,	// (0x0004b4c5) popup_fshwr2_char_preview_window_ParamLimits

0x929a,	// (0x0004b4c5) popup_fshwr2_char_preview_window

0xeea6,	// (0x000510d1) tmo_note_info_pane_t1

0xeebb,	// (0x000510e6) tmo_note_info_pane_t2

0xeed0,	// (0x000510fb) tmo_note_info_pane_t3

0xeee5,	// (0x00051110) tmo_note_info_pane_t4

0xeef7,	// (0x00051122) tmo_note_info_pane_t5

0x0004,

0xfebf,	// (0x000520ea) tmo_note_info_pane_t

0xef09,	// (0x00051134) list_tmo_link_pane_ParamLimits

0xef16,	// (0x00051141) scroll_pane_cp20_ParamLimits

0x08b4,	// (0x00042adf) bg_popup_fep_char_preview_window_cp01

0xef5a,	// (0x00051185) popup_fshwr2_char_preview_window_t1

0xef68,	// (0x00051193) popup_candi_list_indi_window_g1

0xef71,	// (0x0005119c) bg_cell_contacts_ai5_widget_pane

0xef7d,	// (0x000511a8) cell_contacts_ai5_widget_pane_g1

0xc9f9,	// (0x0004ec24) cell_contacts_ai5_widget_pane_g2

0xef92,	// (0x000511bd) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeca,	// (0x000520f5) cell_contacts_ai5_widget_pane_g

0xef9e,	// (0x000511c9) cell_contacts_ai5_widget_pane_t1

0x0cd6,	// (0x00042f01) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf015,	// (0x00051240) settings_container_pane

0x7767,	// (0x00049992) listscroll_set_pane_copy1

0xb9d2,	// (0x0004dbfd) scroll_pane_cp121_copy1

0xf021,	// (0x0005124c) set_content_pane_copy1

0xf029,	// (0x00051254) aid_height_set_list_copy1_ParamLimits

0xf029,	// (0x00051254) aid_height_set_list_copy1

0xb0e8,	// (0x0004d313) aid_size_parent_copy1_ParamLimits

0xb0e8,	// (0x0004d313) aid_size_parent_copy1

0xf035,	// (0x00051260) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf035,	// (0x00051260) button_value_adjust_pane_cp6_copy1

0x9827,	// (0x0004ba52) list_highlight_pane_cp2_copy1_ParamLimits

0x9827,	// (0x0004ba52) list_highlight_pane_cp2_copy1

0xf049,	// (0x00051274) list_set_pane_copy1_ParamLimits

0xf049,	// (0x00051274) list_set_pane_copy1

0xefb0,	// (0x000511db) main_pane_set_t1_copy1_ParamLimits

0xefb0,	// (0x000511db) main_pane_set_t1_copy1

0xefea,	// (0x00051215) main_pane_set_t2_copy1_ParamLimits

0xefea,	// (0x00051215) main_pane_set_t2_copy1

0xf0f6,	// (0x00051321) main_pane_set_t3_copy1

0xf104,	// (0x0005132f) main_pane_set_t4_copy1

0xf009,	// (0x00051234) set_content_pane_g1_copy1_ParamLimits

0xf009,	// (0x00051234) set_content_pane_g1_copy1

0xf112,	// (0x0005133d) setting_code_pane_copy1

0xf11a,	// (0x00051345) setting_slider_graphic_pane_copy1

0xf11a,	// (0x00051345) setting_slider_pane_copy1

0xf11a,	// (0x00051345) setting_text_pane_copy1

0xf11a,	// (0x00051345) setting_volume_pane_copy1

0xf112,	// (0x0005133d) settings_code_pane_cp2_copy1

0xf122,	// (0x0005134d) settings_code_pane_cp_copy1_ParamLimits

0xf122,	// (0x0005134d) settings_code_pane_cp_copy1

0x9380,	// (0x0004b5ab) volume_set_pane_copy1

0xf136,	// (0x00051361) volume_set_pane_g10_copy1

0xf13e,	// (0x00051369) volume_set_pane_g1_copy1

0xf146,	// (0x00051371) volume_set_pane_g2_copy1

0xf14e,	// (0x00051379) volume_set_pane_g3_copy1

0xf156,	// (0x00051381) volume_set_pane_g4_copy1

0xf15e,	// (0x00051389) volume_set_pane_g5_copy1

0xf166,	// (0x00051391) volume_set_pane_g6_copy1

0xf16e,	// (0x00051399) volume_set_pane_g7_copy1

0xf176,	// (0x000513a1) volume_set_pane_g8_copy1

0xf17e,	// (0x000513a9) volume_set_pane_g9_copy1

0x0924,	// (0x00042b4f) bg_set_opt_pane_cp_copy1_ParamLimits

0x0924,	// (0x00042b4f) bg_set_opt_pane_cp_copy1

0x9388,	// (0x0004b5b3) setting_slider_pane_t1_copy1_ParamLimits

0x9388,	// (0x0004b5b3) setting_slider_pane_t1_copy1

0x93a6,	// (0x0004b5d1) setting_slider_pane_t2_copy1_ParamLimits

0x93a6,	// (0x0004b5d1) setting_slider_pane_t2_copy1

0x93c0,	// (0x0004b5eb) setting_slider_pane_t3_copy1_ParamLimits

0x93c0,	// (0x0004b5eb) setting_slider_pane_t3_copy1

0x93d8,	// (0x0004b603) slider_set_pane_copy1_ParamLimits

0x93d8,	// (0x0004b603) slider_set_pane_copy1

0x0d31,	// (0x00042f5c) set_opt_bg_pane_g1_copy2

0x0d39,	// (0x00042f64) set_opt_bg_pane_g2_copy2

0xf186,	// (0x000513b1) set_opt_bg_pane_g3_copy2

0x0d49,	// (0x00042f74) set_opt_bg_pane_g4_copy2

0x0d51,	// (0x00042f7c) set_opt_bg_pane_g5_copy2

0x0d59,	// (0x00042f84) set_opt_bg_pane_g6_copy2

0xf190,	// (0x000513bb) set_opt_bg_pane_g7_copy2

0xf198,	// (0x000513c3) set_opt_bg_pane_g8_copy2

0xf1a2,	// (0x000513cd) set_opt_bg_pane_g9_copy2

0x93ee,	// (0x0004b619) aid_size_touch_slider_mark_copy1_ParamLimits

0x93ee,	// (0x0004b619) aid_size_touch_slider_mark_copy1

0xf1ac,	// (0x000513d7) slider_set_pane_g1_copy1

0x9402,	// (0x0004b62d) slider_set_pane_g2_copy1

0x82c3,	// (0x0004a4ee) slider_set_pane_g3_copy1_ParamLimits

0x82c3,	// (0x0004a4ee) slider_set_pane_g3_copy1

0x82d7,	// (0x0004a502) slider_set_pane_g4_copy1_ParamLimits

0x82d7,	// (0x0004a502) slider_set_pane_g4_copy1

0x82ef,	// (0x0004a51a) slider_set_pane_g5_copy1_ParamLimits

0x82ef,	// (0x0004a51a) slider_set_pane_g5_copy1

0x82c3,	// (0x0004a4ee) slider_set_pane_g6_copy1_ParamLimits

0x82c3,	// (0x0004a4ee) slider_set_pane_g6_copy1

0x940a,	// (0x0004b635) slider_set_pane_g7_copy1_ParamLimits

0x940a,	// (0x0004b635) slider_set_pane_g7_copy1

0x08c8,	// (0x00042af3) bg_set_opt_pane_cp2_copy1

0xf1b5,	// (0x000513e0) setting_slider_graphic_pane_g1_copy1

0xf1be,	// (0x000513e9) setting_slider_graphic_pane_t1_copy1

0xf1ce,	// (0x000513f9) setting_slider_graphic_pane_t2_copy1

0xf1de,	// (0x00051409) slider_set_pane_cp_copy1

0xf1ee,	// (0x00051419) input_focus_pane_cp1_copy1

0xf1f7,	// (0x00051422) list_set_text_pane_copy1

0xf1ff,	// (0x0005142a) setting_text_pane_g1_copy1

0x64a0,	// (0x000486cb) set_text_pane_t1_copy1

0xf1ee,	// (0x00051419) input_focus_pane_cp2_copy1

0xf1ff,	// (0x0005142a) setting_code_pane_g1_copy1

0xf208,	// (0x00051433) setting_code_pane_t1_copy1

0xb80a,	// (0x0004da35) list_set_graphic_pane_copy1

0x08c8,	// (0x00042af3) bg_set_opt_pane_cp4_copy1

0x4a37,	// (0x00046c62) list_set_graphic_pane_g1_copy1_ParamLimits

0x4a37,	// (0x00046c62) list_set_graphic_pane_g1_copy1

0xf216,	// (0x00051441) list_set_graphic_pane_g2_copy1

0x4a4f,	// (0x00046c7a) list_set_graphic_pane_t1_copy1_ParamLimits

0x4a4f,	// (0x00046c7a) list_set_graphic_pane_t1_copy1

0xc2f2,	// (0x0004e51d) rs_clock_indi_pane_g1

0xf21e,	// (0x00051449) rs_clock_indi_pane_t1

0xf22c,	// (0x00051457) rs_indi_pane

0xf234,	// (0x0005145f) rs_indi_pane_g1

0xf23d,	// (0x00051468) rs_indi_pane_g2

0xef68,	// (0x00051193) rs_indi_pane_g3

0x0002,

0xfed1,	// (0x000520fc) rs_indi_pane_g

0x7767,	// (0x00049992) bg_popup_preview_window_pane_cp03

0xf246,	// (0x00051471) popup_fep_tooltip_window_t1

0xcf81,	// (0x0004f1ac) popup_note2_window_g2_ParamLimits

0xcf81,	// (0x0004f1ac) popup_note2_window_g2

0x0001,

0xfc71,	// (0x00051e9c) popup_note2_window_g_ParamLimits

0xfc71,	// (0x00051e9c) popup_note2_window_g

0xd46e,	// (0x0004f699) bg_popup_sub_pane_cp11_ParamLimits

0xd47b,	// (0x0004f6a6) cell_ai3_links_pane_g1_ParamLimits

0xd492,	// (0x0004f6bd) cell_ai3_links_pane_t1

0x64a0,	// (0x000486cb) set_text_pane_t1_copy1_ParamLimits

0x4bf0,	// (0x00046e1b) cell_graphic_popup_pane_cp2_ParamLimits

0x4bf0,	// (0x00046e1b) cell_graphic_popup_pane_cp2

0xf254,	// (0x0005147f) cell_graphic_popup_pane_g1_cp2

0x0ba4,	// (0x00042dcf) cell_graphic_popup_pane_g2_cp2

0xf25c,	// (0x00051487) cell_graphic_popup_pane_g3_cp2

0xf264,	// (0x0005148f) cell_graphic_popup_pane_t2_cp2

0x0bb5,	// (0x00042de0) grid_highlight_pane_cp3_cp2

0x0f89,	// (0x000431b4) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x0cd6,	// (0x00042f01) main_tmo_pane_ParamLimits

0xd7c4,	// (0x0004f9ef) popup_tmo_big_image_note_window

0xe958,	// (0x00050b83) cell_ai5_widget_list_pane

0xe960,	// (0x00050b8b) cell_ai5_widget_lrg_icon_pane

0xeea6,	// (0x000510d1) tmo_note_info_pane_t1_ParamLimits

0xeebb,	// (0x000510e6) tmo_note_info_pane_t2_ParamLimits

0xeed0,	// (0x000510fb) tmo_note_info_pane_t3_ParamLimits

0xeee5,	// (0x00051110) tmo_note_info_pane_t4_ParamLimits

0xeef7,	// (0x00051122) tmo_note_info_pane_t5_ParamLimits

0xfebf,	// (0x000520ea) tmo_note_info_pane_t_ParamLimits

0xf015,	// (0x00051240) settings_container_pane_ParamLimits

0xf1e6,	// (0x00051411) indicator_popup_pane_cp5

0xf1e6,	// (0x00051411) indicator_popup_pane_cp6

0xb80a,	// (0x0004da35) list_set_graphic_pane_copy1_ParamLimits

0x08b4,	// (0x00042adf) bg_popup_window_pane_cp23

0xf272,	// (0x0005149d) popup_tmo_big_image_note_window_g1

0xf27b,	// (0x000514a6) popup_tmo_big_image_note_window_t1

0xf28b,	// (0x000514b6) popup_tmo_big_image_note_window_t2

0xf29b,	// (0x000514c6) popup_tmo_big_image_note_window_t3

0x0002,

0xfed8,	// (0x00052103) popup_tmo_big_image_note_window_t

0xc2f2,	// (0x0004e51d) cell_ai5_widget_lrg_icon_pane_g1

0xf2ab,	// (0x000514d6) cell_ai5_widget_lrg_icon_pane_t1

0xf2b9,	// (0x000514e4) cell_ai5_widget_list_row_pane_ParamLimits

0xf2b9,	// (0x000514e4) cell_ai5_widget_list_row_pane

0xf2d0,	// (0x000514fb) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2d0,	// (0x000514fb) cell_ai5_widget_list_row_pane_g1

0xf2dd,	// (0x00051508) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2dd,	// (0x00051508) cell_ai5_widget_list_row_pane_t1

0xf308,	// (0x00051533) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf308,	// (0x00051533) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfedf,	// (0x0005210a) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfedf,	// (0x0005210a) cell_ai5_widget_list_row_pane_t

0x08b4,	// (0x00042adf) main_fep_vtchi_ss_pane

0xf34c,	// (0x00051577) popup_fep_char_pre_window

0xf354,	// (0x0005157f) popup_fep_ituss_window

0xf375,	// (0x000515a0) popup_fep_vkbss_window

0xf394,	// (0x000515bf) grid_vkbss_keypad_pane_ParamLimits

0xf394,	// (0x000515bf) grid_vkbss_keypad_pane

0xf3a4,	// (0x000515cf) ituss_keypad_pane

0x942c,	// (0x0004b657) aid_vkbss_key_offset_ParamLimits

0x942c,	// (0x0004b657) aid_vkbss_key_offset

0x9438,	// (0x0004b663) cell_vkbss_key_pane_ParamLimits

0x9438,	// (0x0004b663) cell_vkbss_key_pane

0x9ba0,	// (0x0004bdcb) bg_cell_vkbss_key_g1_ParamLimits

0x9ba0,	// (0x0004bdcb) bg_cell_vkbss_key_g1

0xf3b3,	// (0x000515de) cell_vkbss_key_3p_pane_ParamLimits

0xf3b3,	// (0x000515de) cell_vkbss_key_3p_pane

0xf3cd,	// (0x000515f8) cell_vkbss_key_g1_ParamLimits

0xf3cd,	// (0x000515f8) cell_vkbss_key_g1

0xf3e7,	// (0x00051612) cell_vkbss_key_t1_ParamLimits

0xf3e7,	// (0x00051612) cell_vkbss_key_t1

0x944e,	// (0x0004b679) cell_ituss_key_pane_ParamLimits

0x944e,	// (0x0004b679) cell_ituss_key_pane

0xf412,	// (0x0005163d) bg_cell_ituss_key_g1_ParamLimits

0xf412,	// (0x0005163d) bg_cell_ituss_key_g1

0xf41e,	// (0x00051649) cell_ituss_key_pane_g1_ParamLimits

0xf41e,	// (0x00051649) cell_ituss_key_pane_g1

0x945f,	// (0x0004b68a) cell_ituss_key_pane_g2_ParamLimits

0x945f,	// (0x0004b68a) cell_ituss_key_pane_g2

0x0002,

0xfee6,	// (0x00052111) cell_ituss_key_pane_g_ParamLimits

0xfee6,	// (0x00052111) cell_ituss_key_pane_g

0x948b,	// (0x0004b6b6) cell_ituss_key_t1_ParamLimits

0x948b,	// (0x0004b6b6) cell_ituss_key_t1

0x94c5,	// (0x0004b6f0) cell_ituss_key_t2_ParamLimits

0x94c5,	// (0x0004b6f0) cell_ituss_key_t2

0x94f6,	// (0x0004b721) cell_ituss_key_t3_ParamLimits

0x94f6,	// (0x0004b721) cell_ituss_key_t3

0x94c5,	// (0x0004b6f0) cell_ituss_key_t4_ParamLimits

0x94c5,	// (0x0004b6f0) cell_ituss_key_t4

0x0004,

0xfeed,	// (0x00052118) cell_ituss_key_t_ParamLimits

0xfeed,	// (0x00052118) cell_ituss_key_t

0xf44a,	// (0x00051675) cell_vkbss_key_3p_pane_g1

0xf452,	// (0x0005167d) cell_vkbss_key_3p_pane_g2

0xf45a,	// (0x00051685) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef8,	// (0x00052123) cell_vkbss_key_3p_pane_g

0x08b4,	// (0x00042adf) bg_popup_fep_char_preview_window_cp02

0x9539,	// (0x0004b764) popup_fep_char_pre_window_t1

0xe8f2,	// (0x00050b1d) main_ai5_sk_pane

0xef71,	// (0x0005119c) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef7d,	// (0x000511a8) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc9f9,	// (0x0004ec24) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef92,	// (0x000511bd) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeca,	// (0x000520f5) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef9e,	// (0x000511c9) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x0cd6,	// (0x00042f01) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf462,	// (0x0005168d) main_ai5_sk_pane_g1

0xa1e7,	// (0x0004c412) popup_query_code_window_g1

0xf36a,	// (0x00051595) popup_fep_vkb_icf_pane

0xf37e,	// (0x000515a9) popup_fep_vtchi_icf_pane

0xf46b,	// (0x00051696) bg_icf_pane

0xf477,	// (0x000516a2) list_vkb_icf_pane

0xf486,	// (0x000516b1) bg_icf_pane_cp01

0xf499,	// (0x000516c4) vtchi_icf_list_pane

0xf4a9,	// (0x000516d4) list_vkb_icf_pane_t1_ParamLimits

0xf4a9,	// (0x000516d4) list_vkb_icf_pane_t1

0xf4bf,	// (0x000516ea) vtchi_icf_list_pane_t1_ParamLimits

0xf4bf,	// (0x000516ea) vtchi_icf_list_pane_t1

0xf354,	// (0x0005157f) popup_fep_ituss_window_ParamLimits

0xf37e,	// (0x000515a9) popup_fep_vtchi_icf_pane_ParamLimits

0xf3a4,	// (0x000515cf) ituss_keypad_pane_ParamLimits

0x9420,	// (0x0004b64b) ituss_sks_pane

0xf46b,	// (0x00051696) bg_icf_pane_ParamLimits

0xf330,	// (0x0005155b) icf_edit_indi_pane_ParamLimits

0xf330,	// (0x0005155b) icf_edit_indi_pane

0xf477,	// (0x000516a2) list_vkb_icf_pane_ParamLimits

0xf486,	// (0x000516b1) bg_icf_pane_cp01_ParamLimits

0xf33f,	// (0x0005156a) icf_edit_indi_pane_cp01_ParamLimits

0xf33f,	// (0x0005156a) icf_edit_indi_pane_cp01

0xf4a1,	// (0x000516cc) vtchi_query_pane

0xc562,	// (0x0004e78d) icf_edit_indi_pane_g1_ParamLimits

0xc562,	// (0x0004e78d) icf_edit_indi_pane_g1

0xf531,	// (0x0005175c) icf_edit_indi_pane_g2_ParamLimits

0xf531,	// (0x0005175c) icf_edit_indi_pane_g2

0x0001,

0xff10,	// (0x0005213b) icf_edit_indi_pane_g_ParamLimits

0xff10,	// (0x0005213b) icf_edit_indi_pane_g

0xf540,	// (0x0005176b) icf_edit_indi_pane_t1

0xf4da,	// (0x00051705) bg_input_focus_pane_cp042

0x0c18,	// (0x00042e43) vtchi_button_pane

0xf4e3,	// (0x0005170e) vtchi_query_pane_t1

0xf4f1,	// (0x0005171c) vtchi_query_pane_t2

0xf4ff,	// (0x0005172a) vtchi_query_pane_t3

0x0002,

0xfeff,	// (0x0005212a) vtchi_query_pane_t

0x08b4,	// (0x00042adf) bg_button_pane_cp13

0xf50d,	// (0x00051738) vtchi_button_pane_g1

0x9548,	// (0x0004b773) ituss_sks_pane_g1

0x9553,	// (0x0004b77e) ituss_sks_pane_g2

0x0001,

0xff06,	// (0x00052131) ituss_sks_pane_g

0xf515,	// (0x00051740) ituss_sks_pane_t1

0xf523,	// (0x0005174e) ituss_sks_pane_t2

0x0001,

0xff0b,	// (0x00052136) ituss_sks_pane_t

0xbd4c,	// (0x0004df77) indicator_nsta_pane_cp_g1

0xbd55,	// (0x0004df80) indicator_nsta_pane_cp_g2

0xbd5d,	// (0x0004df88) indicator_nsta_pane_cp_g3

0xbd65,	// (0x0004df90) indicator_nsta_pane_cp_g4

0xbd6d,	// (0x0004df98) indicator_nsta_pane_cp_g5

0xbd6d,	// (0x0004df98) indicator_nsta_pane_cp_g6

0x0005,

0xfabb,	// (0x00051ce6) indicator_nsta_pane_cp_g

0xe4a8,	// (0x000506d3) cell_graphic2_pane_t2_ParamLimits

0xe4a8,	// (0x000506d3) cell_graphic2_pane_t2

0x0001,

0xfdc1,	// (0x00051fec) cell_graphic2_pane_t_ParamLimits

0xfdc1,	// (0x00051fec) cell_graphic2_pane_t

0xe4d5,	// (0x00050700) cell_graphic2_control_pane_t1

0x7401,	// (0x0004962c) signal_pane_g3_ParamLimits

0x7401,	// (0x0004962c) signal_pane_g3

0x7413,	// (0x0004963e) signal_pane_g4_ParamLimits

0x7413,	// (0x0004963e) signal_pane_g4

0xf31a,	// (0x00051545) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf31a,	// (0x00051545) cell_ai5_widget_list_row_pane_t3

0xf438,	// (0x00051663) cell_ituss_key_pane_t1_ParamLimits

0xf438,	// (0x00051663) cell_ituss_key_pane_t1

0x9e36,	// (0x0004c061) form_field_data_wide_pane_vc_t2_ParamLimits

0x9e36,	// (0x0004c061) form_field_data_wide_pane_vc_t2

0x9e4a,	// (0x0004c075) form_field_data_wide_pane_vc_t3_ParamLimits

0x9e4a,	// (0x0004c075) form_field_data_wide_pane_vc_t3

0x0002,

0xf80e,	// (0x00051a39) form_field_data_wide_pane_vc_t_ParamLimits

0xf80e,	// (0x00051a39) form_field_data_wide_pane_vc_t

0xba14,	// (0x0004dc3f) form_field_slider_wide_pane_vc_t3_ParamLimits

0xba14,	// (0x0004dc3f) form_field_slider_wide_pane_vc_t3

0xbaf2,	// (0x0004dd1d) form_field_popup_wide_pane_vc_t2_ParamLimits

0xbaf2,	// (0x0004dd1d) form_field_popup_wide_pane_vc_t2

0xbb09,	// (0x0004dd34) form_field_popup_wide_pane_vc_t3_ParamLimits

0xbb09,	// (0x0004dd34) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaaa,	// (0x00051cd5) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaaa,	// (0x00051cd5) form_field_popup_wide_pane_vc_t

0x923c,	// (0x0004b467) aid_fshwr2_btn_pane_ParamLimits

0x9248,	// (0x0004b473) aid_fshwr2_syb_pane_ParamLimits

0x9254,	// (0x0004b47f) aid_fshwr2_txt_pane_ParamLimits

0x0cd6,	// (0x00042f01) fshwr2_bg_pane_ParamLimits

0x9260,	// (0x0004b48b) fshwr2_func_candi_pane_ParamLimits

0x9275,	// (0x0004b4a0) fshwr2_hwr_syb_pane_ParamLimits

0x9285,	// (0x0004b4b0) fshwr2_icf_pane_ParamLimits

0x854b,	// (0x0004a776) list_double_graphic_pane_vc_g4_ParamLimits

0x854b,	// (0x0004a776) list_double_graphic_pane_vc_g4

0x947f,	// (0x0004b6aa) cell_ituss_key_pane_g3_ParamLimits

0x947f,	// (0x0004b6aa) cell_ituss_key_pane_g3

0x9527,	// (0x0004b752) cell_ituss_key_t5_ParamLimits

0x9527,	// (0x0004b752) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Large

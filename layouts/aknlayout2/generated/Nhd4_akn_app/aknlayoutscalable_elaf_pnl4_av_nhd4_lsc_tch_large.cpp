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

#include "aknlayoutscalable_elaf_pnl4_av_nhd4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00049746 };

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
0x9403,	// (0x00052b49) Screen

0x9417,	// (0x00052b5d) application_window_ParamLimits

0x9417,	// (0x00052b5d) application_window

0x9431,	// (0x00052b77) screen_g1

0x9463,	// (0x00052ba9) area_bottom_pane_ParamLimits

0x9463,	// (0x00052ba9) area_bottom_pane

0xed3c,	// (0x00058482) area_top_pane_ParamLimits

0xed3c,	// (0x00058482) area_top_pane

0xedd0,	// (0x00058516) main_pane_ParamLimits

0xedd0,	// (0x00058516) main_pane

0x9521,	// (0x00052c67) misc_graphics

0xb43a,	// (0x00054b80) battery_pane_ParamLimits

0xb43a,	// (0x00054b80) battery_pane

0x3248,	// (0x0004c98e) bg_status_flat_pane_g8

0x3250,	// (0x0004c996) bg_status_flat_pane_g9

0x2642,	// (0x0004bd88) context_pane_ParamLimits

0x2642,	// (0x0004bd88) context_pane

0xc174,	// (0x000558ba) navi_pane_ParamLimits

0xc174,	// (0x000558ba) navi_pane

0xc1f2,	// (0x00055938) signal_pane_ParamLimits

0xc1f2,	// (0x00055938) signal_pane

0x0008,

0xf863,	// (0x00058fa9) bg_status_flat_pane_g

0xc282,	// (0x000559c8) status_pane_g1_ParamLimits

0xc282,	// (0x000559c8) status_pane_g1

0xc298,	// (0x000559de) status_pane_g2_ParamLimits

0xc298,	// (0x000559de) status_pane_g2

0x2869,	// (0x0004bfaf) status_pane_g3_ParamLimits

0x2869,	// (0x0004bfaf) status_pane_g3

0x0004,

0xf796,	// (0x00058edc) status_pane_g_ParamLimits

0xf796,	// (0x00058edc) status_pane_g

0xc2a4,	// (0x000559ea) title_pane_ParamLimits

0xc2a4,	// (0x000559ea) title_pane

0xc307,	// (0x00055a4d) uni_indicator_pane_ParamLimits

0xc307,	// (0x00055a4d) uni_indicator_pane

0x24aa,	// (0x0004bbf0) bg_list_pane_ParamLimits

0x24aa,	// (0x0004bbf0) bg_list_pane

0xac02,	// (0x00054348) find_pane

0x2a65,	// (0x0004c1ab) listscroll_app_pane_ParamLimits

0x2a65,	// (0x0004c1ab) listscroll_app_pane

0x24d6,	// (0x0004bc1c) listscroll_form_pane

0xac0a,	// (0x00054350) listscroll_gen_pane_ParamLimits

0xac0a,	// (0x00054350) listscroll_gen_pane

0x0805,	// (0x00049f4b) listscroll_set_pane

0x3dac,	// (0x0004d4f2) main_idle_act_pane

0xe405,	// (0x00057b4b) main_idle_trad_pane

0xe405,	// (0x00057b4b) main_list_empty_pane

0x24ca,	// (0x0004bc10) main_midp_pane

0x24f0,	// (0x0004bc36) main_pane_g1_ParamLimits

0x24f0,	// (0x0004bc36) main_pane_g1

0xac1e,	// (0x00054364) popup_ai_message_window_ParamLimits

0xac1e,	// (0x00054364) popup_ai_message_window

0xaccf,	// (0x00054415) popup_fep_china_uni_window_ParamLimits

0xaccf,	// (0x00054415) popup_fep_china_uni_window

0xad29,	// (0x0005446f) popup_fep_japan_candidate_window_ParamLimits

0xad29,	// (0x0005446f) popup_fep_japan_candidate_window

0xad47,	// (0x0005448d) popup_fep_japan_predictive_window_ParamLimits

0xad47,	// (0x0005448d) popup_fep_japan_predictive_window

0xad59,	// (0x0005449f) popup_find_window

0xad76,	// (0x000544bc) popup_grid_graphic_window_ParamLimits

0xad76,	// (0x000544bc) popup_grid_graphic_window

0xae14,	// (0x0005455a) popup_large_graphic_colour_window

0xae3a,	// (0x00054580) popup_menu_window_ParamLimits

0xae3a,	// (0x00054580) popup_menu_window

0xb00c,	// (0x00054752) popup_note_image_window

0xafd2,	// (0x00054718) popup_note_wait_window_ParamLimits

0xafd2,	// (0x00054718) popup_note_wait_window

0xb024,	// (0x0005476a) popup_note_window_ParamLimits

0xb024,	// (0x0005476a) popup_note_window

0xb0d3,	// (0x00054819) popup_query_code_window_ParamLimits

0xb0d3,	// (0x00054819) popup_query_code_window

0xb10d,	// (0x00054853) popup_query_data_code_window_ParamLimits

0xb10d,	// (0x00054853) popup_query_data_code_window

0xb12a,	// (0x00054870) popup_query_data_window_ParamLimits

0xb12a,	// (0x00054870) popup_query_data_window

0xb1ac,	// (0x000548f2) popup_query_sat_info_window_ParamLimits

0xb1ac,	// (0x000548f2) popup_query_sat_info_window

0xb243,	// (0x00054989) popup_snote_single_graphic_window_ParamLimits

0xb243,	// (0x00054989) popup_snote_single_graphic_window

0xb243,	// (0x00054989) popup_snote_single_text_window_ParamLimits

0xb243,	// (0x00054989) popup_snote_single_text_window

0x0c63,	// (0x0004a3a9) popup_sub_window_general

0xb3a0,	// (0x00054ae6) popup_window_general_ParamLimits

0xb3a0,	// (0x00054ae6) popup_window_general

0x24fe,	// (0x0004bc44) power_save_pane

0xaa60,	// (0x000541a6) control_pane_g1_ParamLimits

0xaa60,	// (0x000541a6) control_pane_g1

0xaa89,	// (0x000541cf) control_pane_g2_ParamLimits

0xaa89,	// (0x000541cf) control_pane_g2

0x246d,	// (0x0004bbb3) control_pane_g3_ParamLimits

0x246d,	// (0x0004bbb3) control_pane_g3

0x0007,

0xf77e,	// (0x00058ec4) control_pane_g_ParamLimits

0xf77e,	// (0x00058ec4) control_pane_g

0xaaf1,	// (0x00054237) control_pane_t1_ParamLimits

0xaaf1,	// (0x00054237) control_pane_t1

0xab57,	// (0x0005429d) control_pane_t2_ParamLimits

0xab57,	// (0x0005429d) control_pane_t2

0x0002,

0xf78f,	// (0x00058ed5) control_pane_t_ParamLimits

0xf78f,	// (0x00058ed5) control_pane_t

0xa9b9,	// (0x000540ff) navi_navi_volume_pane_cp1

0xa9c1,	// (0x00054107) status_small_icon_pane

0x23a2,	// (0x0004bae8) status_small_pane_g1_ParamLimits

0x23a2,	// (0x0004bae8) status_small_pane_g1

0xa9c9,	// (0x0005410f) status_small_pane_g2_ParamLimits

0xa9c9,	// (0x0005410f) status_small_pane_g2

0xa9d5,	// (0x0005411b) status_small_pane_g3_ParamLimits

0xa9d5,	// (0x0005411b) status_small_pane_g3

0xa9e1,	// (0x00054127) status_small_pane_g4_ParamLimits

0xa9e1,	// (0x00054127) status_small_pane_g4

0xa9ed,	// (0x00054133) status_small_pane_g5_ParamLimits

0xa9ed,	// (0x00054133) status_small_pane_g5

0xa9fb,	// (0x00054141) status_small_pane_g6_ParamLimits

0xa9fb,	// (0x00054141) status_small_pane_g6

0x0007,

0xf76d,	// (0x00058eb3) status_small_pane_g_ParamLimits

0xf76d,	// (0x00058eb3) status_small_pane_g

0xaa2a,	// (0x00054170) status_small_pane_t1

0xaa4c,	// (0x00054192) status_small_wait_pane_ParamLimits

0xaa4c,	// (0x00054192) status_small_wait_pane

0xa70f,	// (0x00053e55) aid_levels_signal_ParamLimits

0xa70f,	// (0x00053e55) aid_levels_signal

0xa727,	// (0x00053e6d) signal_pane_g1_ParamLimits

0xa727,	// (0x00053e6d) signal_pane_g1

0xa742,	// (0x00053e88) signal_pane_g2_ParamLimits

0xa742,	// (0x00053e88) signal_pane_g2

0x0003,

0xf6fe,	// (0x00058e44) signal_pane_g_ParamLimits

0xf6fe,	// (0x00058e44) signal_pane_g

0xbf17,	// (0x0005565d) context_pane_g1

0x966b,	// (0x00052db1) title_pane_g1

0x96ae,	// (0x00052df4) title_pane_t1

0x973a,	// (0x00052e80) title_pane_t2

0x9760,	// (0x00052ea6) title_pane_t3

0x0002,

0xf557,	// (0x00058c9d) title_pane_t

0xc32f,	// (0x00055a75) aid_levels_battery_ParamLimits

0xc32f,	// (0x00055a75) aid_levels_battery

0xc34b,	// (0x00055a91) battery_pane_g1_ParamLimits

0xc34b,	// (0x00055a91) battery_pane_g1

0xc368,	// (0x00055aae) battery_pane_g2_ParamLimits

0xc368,	// (0x00055aae) battery_pane_g2

0x0001,

0xf7a1,	// (0x00058ee7) battery_pane_g_ParamLimits

0xf7a1,	// (0x00058ee7) battery_pane_g

0xc92e,	// (0x00056074) uni_indicator_pane_g1

0xc944,	// (0x0005608a) uni_indicator_pane_g2

0xc95a,	// (0x000560a0) uni_indicator_pane_g3

0x0005,

0xf90b,	// (0x00059051) uni_indicator_pane_g

0xe2a5,	// (0x000579eb) navi_icon_pane_ParamLimits

0xe2a5,	// (0x000579eb) navi_icon_pane

0xe1fa,	// (0x00057940) navi_midp_pane

0xe2c1,	// (0x00057a07) navi_navi_pane

0xe2cb,	// (0x00057a11) navi_text_pane_ParamLimits

0xe2cb,	// (0x00057a11) navi_text_pane

0x9431,	// (0x00052b77) status_small_wait_pane_g1

0x9ce0,	// (0x00053426) status_small_wait_pane_g2

0x0001,

0xf906,	// (0x0005904c) status_small_wait_pane_g

0xc887,	// (0x00055fcd) navi_navi_icon_text_pane

0x389b,	// (0x0004cfe1) navi_navi_pane_g1_ParamLimits

0x389b,	// (0x0004cfe1) navi_navi_pane_g1

0x38ad,	// (0x0004cff3) navi_navi_pane_g2_ParamLimits

0x38ad,	// (0x0004cff3) navi_navi_pane_g2

0x0001,

0xf8d4,	// (0x0005901a) navi_navi_pane_g_ParamLimits

0xf8d4,	// (0x0005901a) navi_navi_pane_g

0x38bf,	// (0x0004d005) navi_navi_tabs_pane

0x38c8,	// (0x0004d00e) navi_navi_text_pane

0xc887,	// (0x00055fcd) navi_navi_volume_pane

0x386f,	// (0x0004cfb5) navi_text_pane_t1

0x3863,	// (0x0004cfa9) navi_icon_pane_g1

0x37b6,	// (0x0004cefc) navi_navi_text_pane_t1

0xb541,	// (0x00054c87) navi_navi_volume_pane_g1

0x1051,	// (0x0004a797) volume_small_pane

0x371c,	// (0x0004ce62) navi_navi_icon_text_pane_g1

0xc7df,	// (0x00055f25) navi_navi_icon_text_pane_t1

0xe2c1,	// (0x00057a07) navi_tabs_2_long_pane

0xe2c1,	// (0x00057a07) navi_tabs_2_pane

0xe2c1,	// (0x00057a07) navi_tabs_3_long_pane

0xe2c1,	// (0x00057a07) navi_tabs_3_pane

0xe2c1,	// (0x00057a07) navi_tabs_4_pane

0x1029,	// (0x0004a76f) tabs_2_active_pane_ParamLimits

0x1029,	// (0x0004a76f) tabs_2_active_pane

0x1039,	// (0x0004a77f) tabs_2_passive_pane_ParamLimits

0x1039,	// (0x0004a77f) tabs_2_passive_pane

0x0ff7,	// (0x0004a73d) tabs_3_active_pane_ParamLimits

0x0ff7,	// (0x0004a73d) tabs_3_active_pane

0x1007,	// (0x0004a74d) tabs_3_passive_pane_ParamLimits

0x1007,	// (0x0004a74d) tabs_3_passive_pane

0x1018,	// (0x0004a75e) tabs_3_passive_pane_cp_ParamLimits

0x1018,	// (0x0004a75e) tabs_3_passive_pane_cp

0x0fb3,	// (0x0004a6f9) tabs_4_active_pane_ParamLimits

0x0fb3,	// (0x0004a6f9) tabs_4_active_pane

0x0fc4,	// (0x0004a70a) tabs_4_passive_pane_ParamLimits

0x0fc4,	// (0x0004a70a) tabs_4_passive_pane

0x0fd5,	// (0x0004a71b) tabs_4_passive_pane_cp_ParamLimits

0x0fd5,	// (0x0004a71b) tabs_4_passive_pane_cp

0x0fe6,	// (0x0004a72c) tabs_4_passive_pane_cp2_ParamLimits

0x0fe6,	// (0x0004a72c) tabs_4_passive_pane_cp2

0x0f8f,	// (0x0004a6d5) tabs_2_long_active_pane_ParamLimits

0x0f8f,	// (0x0004a6d5) tabs_2_long_active_pane

0x0fa1,	// (0x0004a6e7) tabs_2_long_passive_pane_ParamLimits

0x0fa1,	// (0x0004a6e7) tabs_2_long_passive_pane

0x0f4a,	// (0x0004a690) tabs_3_long_active_pane_ParamLimits

0x0f4a,	// (0x0004a690) tabs_3_long_active_pane

0x0f63,	// (0x0004a6a9) tabs_3_long_passive_pane_ParamLimits

0x0f63,	// (0x0004a6a9) tabs_3_long_passive_pane

0x0f76,	// (0x0004a6bc) tabs_3_long_passive_pane_cp_ParamLimits

0x0f76,	// (0x0004a6bc) tabs_3_long_passive_pane_cp

0x0ef0,	// (0x0004a636) volume_small_pane_g1

0x0ef9,	// (0x0004a63f) volume_small_pane_g2

0x0f02,	// (0x0004a648) volume_small_pane_g3

0x0f0b,	// (0x0004a651) volume_small_pane_g4

0x0f14,	// (0x0004a65a) volume_small_pane_g5

0x0f1d,	// (0x0004a663) volume_small_pane_g6

0x0f26,	// (0x0004a66c) volume_small_pane_g7

0x0f2f,	// (0x0004a675) volume_small_pane_g8

0x0f38,	// (0x0004a67e) volume_small_pane_g9

0x0f41,	// (0x0004a687) volume_small_pane_g10

0x0009,

0xf8a0,	// (0x00058fe6) volume_small_pane_g

0x9772,	// (0x00052eb8) bg_active_tab_pane_cp2_ParamLimits

0x9772,	// (0x00052eb8) bg_active_tab_pane_cp2

0x9780,	// (0x00052ec6) tabs_3_active_pane_g1

0x9788,	// (0x00052ece) tabs_3_active_pane_t1

0x9772,	// (0x00052eb8) bg_passive_tab_pane_cp2_ParamLimits

0x9772,	// (0x00052eb8) bg_passive_tab_pane_cp2

0x9780,	// (0x00052ec6) tabs_3_passive_pane_g1

0x9788,	// (0x00052ece) tabs_3_passive_pane_t1

0x9772,	// (0x00052eb8) bg_active_tab_pane_cp3_ParamLimits

0x9772,	// (0x00052eb8) bg_active_tab_pane_cp3

0x979a,	// (0x00052ee0) tabs_4_active_pane_g1

0x97a2,	// (0x00052ee8) tabs_4_active_pane_t1

0x9772,	// (0x00052eb8) bg_passive_tab_pane_cp3_ParamLimits

0x9772,	// (0x00052eb8) bg_passive_tab_pane_cp3

0x979a,	// (0x00052ee0) tabs_4_1_passive_pane_g1

0x97a2,	// (0x00052ee8) tabs_4_1_passive_pane_t1

0x24ca,	// (0x0004bc10) list_highlight_pane_cp2

0xca60,	// (0x000561a6) list_set_pane_ParamLimits

0xca60,	// (0x000561a6) list_set_pane

0xcafa,	// (0x00056240) main_pane_set_t1_ParamLimits

0xcafa,	// (0x00056240) main_pane_set_t1

0xcb1a,	// (0x00056260) main_pane_set_t2_ParamLimits

0xcb1a,	// (0x00056260) main_pane_set_t2

0xcb2e,	// (0x00056274) main_pane_set_t3_ParamLimits

0xcb2e,	// (0x00056274) main_pane_set_t3

0xcb40,	// (0x00056286) main_pane_set_t4_ParamLimits

0xcb40,	// (0x00056286) main_pane_set_t4

0x0003,

0xf970,	// (0x000590b6) main_pane_set_t_ParamLimits

0xf970,	// (0x000590b6) main_pane_set_t

0xcb52,	// (0x00056298) setting_code_pane

0xcb5c,	// (0x000562a2) setting_slider_graphic_pane

0xcb5c,	// (0x000562a2) setting_slider_pane

0xcb5c,	// (0x000562a2) setting_text_pane

0xcb5c,	// (0x000562a2) setting_volume_pane

0x97b4,	// (0x00052efa) volume_set_pane

0x97bc,	// (0x00052f02) bg_set_opt_pane_cp

0x97ca,	// (0x00052f10) setting_slider_pane_t1

0x97e3,	// (0x00052f29) setting_slider_pane_t2

0x97fd,	// (0x00052f43) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00058ca4) setting_slider_pane_t

0x9815,	// (0x00052f5b) slider_set_pane

0x9521,	// (0x00052c67) bg_set_opt_pane_cp2

0x982b,	// (0x00052f71) setting_slider_graphic_pane_g1

0x9834,	// (0x00052f7a) setting_slider_graphic_pane_t1

0x9844,	// (0x00052f8a) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00058cab) setting_slider_graphic_pane_t

0x9854,	// (0x00052f9a) slider_set_pane_cp

0x9521,	// (0x00052c67) input_focus_pane_cp1

0x3d93,	// (0x0004d4d9) list_set_text_pane

0x9431,	// (0x00052b77) setting_text_pane_g1

0x9521,	// (0x00052c67) input_focus_pane_cp2

0x9431,	// (0x00052b77) setting_code_pane_g1

0x985c,	// (0x00052fa2) setting_code_pane_t1

0xe067,	// (0x000577ad) set_text_pane_t1_ParamLimits

0xe067,	// (0x000577ad) set_text_pane_t1

0xa15e,	// (0x000538a4) set_opt_bg_pane_g1

0xa166,	// (0x000538ac) set_opt_bg_pane_g2

0xca15,	// (0x0005615b) set_opt_bg_pane_g3

0xa176,	// (0x000538bc) set_opt_bg_pane_g4

0xa17e,	// (0x000538c4) set_opt_bg_pane_g5

0xa186,	// (0x000538cc) set_opt_bg_pane_g6

0xca1f,	// (0x00056165) set_opt_bg_pane_g7

0xca27,	// (0x0005616d) set_opt_bg_pane_g8

0xca31,	// (0x00056177) set_opt_bg_pane_g9

0x0008,

0xf95d,	// (0x000590a3) set_opt_bg_pane_g

0xca08,	// (0x0005614e) slider_set_pane_g1

0x10be,	// (0x0004a804) slider_set_pane_g2

0x0006,

0xf94e,	// (0x00059094) slider_set_pane_g

0xb549,	// (0x00054c8f) volume_set_pane_g1

0xb551,	// (0x00054c97) volume_set_pane_g2

0xb559,	// (0x00054c9f) volume_set_pane_g3

0xb561,	// (0x00054ca7) volume_set_pane_g4

0xb569,	// (0x00054caf) volume_set_pane_g5

0xb571,	// (0x00054cb7) volume_set_pane_g6

0xb579,	// (0x00054cbf) volume_set_pane_g7

0xb581,	// (0x00054cc7) volume_set_pane_g8

0xb589,	// (0x00054ccf) volume_set_pane_g9

0xb591,	// (0x00054cd7) volume_set_pane_g10

0x0009,

0xf926,	// (0x0005906c) volume_set_pane_g

0x986a,	// (0x00052fb0) indicator_pane_ParamLimits

0x986a,	// (0x00052fb0) indicator_pane

0x9892,	// (0x00052fd8) main_idle_pane_g2_ParamLimits

0x9892,	// (0x00052fd8) main_idle_pane_g2

0x98ca,	// (0x00053010) main_pane_idle_g1_ParamLimits

0x98ca,	// (0x00053010) main_pane_idle_g1

0x98f1,	// (0x00053037) popup_clock_digital_analogue_window_ParamLimits

0x98f1,	// (0x00053037) popup_clock_digital_analogue_window

0x9908,	// (0x0005304e) soft_indicator_pane_ParamLimits

0x9908,	// (0x0005304e) soft_indicator_pane

0x992c,	// (0x00053072) wallpaper_pane_ParamLimits

0x992c,	// (0x00053072) wallpaper_pane

0x9431,	// (0x00052b77) wallpaper_pane_g1

0x9946,	// (0x0005308c) indicator_pane_g1_ParamLimits

0x9946,	// (0x0005308c) indicator_pane_g1

0x415c,	// (0x0004d8a2) navi_navi_icon_text_pane_srt_g1

0x996b,	// (0x000530b1) soft_indicator_pane_t1

0x9985,	// (0x000530cb) aid_ps_area_pane

0x9996,	// (0x000530dc) aid_ps_clock_pane

0x99a4,	// (0x000530ea) aid_ps_indicator_pane

0x99b0,	// (0x000530f6) indicator_ps_pane_ParamLimits

0x99b0,	// (0x000530f6) indicator_ps_pane

0x99bf,	// (0x00053105) power_save_pane_g1_ParamLimits

0x99bf,	// (0x00053105) power_save_pane_g1

0x99cb,	// (0x00053111) power_save_pane_g2_ParamLimits

0x99cb,	// (0x00053111) power_save_pane_g2

0xed1c,	// (0x00058462) aid_navinavi_width_pane

0x9985,	// (0x000530cb) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00058cb0) power_save_pane_g_ParamLimits

0xf56a,	// (0x00058cb0) power_save_pane_g

0x99d9,	// (0x0005311f) power_save_pane_t1_ParamLimits

0x99d9,	// (0x0005311f) power_save_pane_t1

0x9996,	// (0x000530dc) aid_ps_clock_pane_ParamLimits

0x99a4,	// (0x000530ea) aid_ps_indicator_pane_ParamLimits

0x99eb,	// (0x00053131) power_save_pane_t4_ParamLimits

0x99eb,	// (0x00053131) power_save_pane_t4

0x0001,

0xf56f,	// (0x00058cb5) power_save_pane_t_ParamLimits

0xf56f,	// (0x00058cb5) power_save_pane_t

0x9a15,	// (0x0005315b) power_save_t3_ParamLimits

0x9a15,	// (0x0005315b) power_save_t3

0x9a00,	// (0x00053146) power_save_t2_ParamLimits

0x9a00,	// (0x00053146) power_save_t2

0x9a2a,	// (0x00053170) indicator_ps_pane_g1

0x9a33,	// (0x00053179) ai_gene_pane_ParamLimits

0x9a33,	// (0x00053179) ai_gene_pane

0x9a4a,	// (0x00053190) ai_links_pane_ParamLimits

0x9a4a,	// (0x00053190) ai_links_pane

0x9a62,	// (0x000531a8) indicator_pane_cp1_ParamLimits

0x9a62,	// (0x000531a8) indicator_pane_cp1

0x9a71,	// (0x000531b7) main_pane_idle_g1_cp_ParamLimits

0x9a71,	// (0x000531b7) main_pane_idle_g1_cp

0x9a89,	// (0x000531cf) popup_ai_links_title_window

0x9a92,	// (0x000531d8) soft_indicator_pane_cp1_ParamLimits

0x9a92,	// (0x000531d8) soft_indicator_pane_cp1

0x3b5a,	// (0x0004d2a0) ai_links_pane_g1

0x3b63,	// (0x0004d2a9) grid_ai_links_pane

0xc925,	// (0x0005606b) ai_gene_pane_1

0x3b48,	// (0x0004d28e) ai_gene_pane_2

0x3b51,	// (0x0004d297) list_highlight_pane_cp4

0xc901,	// (0x00056047) cell_ai_link_pane_ParamLimits

0xc901,	// (0x00056047) cell_ai_link_pane

0x3b19,	// (0x0004d25f) cell_ai_link_pane_g1

0x9ce0,	// (0x00053426) cell_ai_link_pane_g2

0x0001,

0xf901,	// (0x00059047) cell_ai_link_pane_g

0x9521,	// (0x00052c67) grid_highlight_cp2

0x9521,	// (0x00052c67) bg_popup_sub_pane_cp1

0x9ab4,	// (0x000531fa) popup_ai_links_title_window_t1

0x3a69,	// (0x0004d1af) ai_gene_pane_1_g1_ParamLimits

0x3a69,	// (0x0004d1af) ai_gene_pane_1_g1

0x3a75,	// (0x0004d1bb) ai_gene_pane_1_g2_ParamLimits

0x3a75,	// (0x0004d1bb) ai_gene_pane_1_g2

0x0001,

0xf8f7,	// (0x0005903d) ai_gene_pane_1_g_ParamLimits

0xf8f7,	// (0x0005903d) ai_gene_pane_1_g

0x3a82,	// (0x0004d1c8) ai_gene_pane_1_t1_ParamLimits

0x3a82,	// (0x0004d1c8) ai_gene_pane_1_t1

0x3ab6,	// (0x0004d1fc) grid_ai_soft_ind_pane

0x3a54,	// (0x0004d19a) ai_gene_pane_2_t1_ParamLimits

0x3a54,	// (0x0004d19a) ai_gene_pane_2_t1

0x9ac3,	// (0x00053209) main_pane_empty_t1_ParamLimits

0x9ac3,	// (0x00053209) main_pane_empty_t1

0x9adb,	// (0x00053221) main_pane_empty_t2_ParamLimits

0x9adb,	// (0x00053221) main_pane_empty_t2

0x9af0,	// (0x00053236) main_pane_empty_t3_ParamLimits

0x9af0,	// (0x00053236) main_pane_empty_t3

0x9b02,	// (0x00053248) main_pane_empty_t4_ParamLimits

0x9b02,	// (0x00053248) main_pane_empty_t4

0x9b14,	// (0x0005325a) main_pane_empty_t5_ParamLimits

0x9b14,	// (0x0005325a) main_pane_empty_t5

0x0004,

0xf574,	// (0x00058cba) main_pane_empty_t_ParamLimits

0xf574,	// (0x00058cba) main_pane_empty_t

0xa1af,	// (0x000538f5) bg_popup_window_pane_ParamLimits

0xa1af,	// (0x000538f5) bg_popup_window_pane

0xc87b,	// (0x00055fc1) find_popup_pane_cp2_ParamLimits

0xc87b,	// (0x00055fc1) find_popup_pane_cp2

0x37d0,	// (0x0004cf16) heading_pane_ParamLimits

0x37d0,	// (0x0004cf16) heading_pane

0x9521,	// (0x00052c67) bg_popup_sub_pane

0xc7fc,	// (0x00055f42) bg_popup_window_pane_g1_ParamLimits

0xc7fc,	// (0x00055f42) bg_popup_window_pane_g1

0xc80b,	// (0x00055f51) bg_popup_window_pane_g2_ParamLimits

0xc80b,	// (0x00055f51) bg_popup_window_pane_g2

0xc817,	// (0x00055f5d) bg_popup_window_pane_g3_ParamLimits

0xc817,	// (0x00055f5d) bg_popup_window_pane_g3

0xc823,	// (0x00055f69) bg_popup_window_pane_g4_ParamLimits

0xc823,	// (0x00055f69) bg_popup_window_pane_g4

0xc832,	// (0x00055f78) bg_popup_window_pane_g5_ParamLimits

0xc832,	// (0x00055f78) bg_popup_window_pane_g5

0xc842,	// (0x00055f88) bg_popup_window_pane_g6_ParamLimits

0xc842,	// (0x00055f88) bg_popup_window_pane_g6

0xc84e,	// (0x00055f94) bg_popup_window_pane_g7_ParamLimits

0xc84e,	// (0x00055f94) bg_popup_window_pane_g7

0xc85d,	// (0x00055fa3) bg_popup_window_pane_g8_ParamLimits

0xc85d,	// (0x00055fa3) bg_popup_window_pane_g8

0xc86c,	// (0x00055fb2) bg_popup_window_pane_g9_ParamLimits

0xc86c,	// (0x00055fb2) bg_popup_window_pane_g9

0x37aa,	// (0x0004cef0) bg_popup_window_pane_g10_ParamLimits

0x37aa,	// (0x0004cef0) bg_popup_window_pane_g10

0x0009,

0xf8bf,	// (0x00059005) bg_popup_window_pane_g_ParamLimits

0xf8bf,	// (0x00059005) bg_popup_window_pane_g

0x36d3,	// (0x0004ce19) bg_popup_heading_pane_ParamLimits

0x36d3,	// (0x0004ce19) bg_popup_heading_pane

0x11e2,	// (0x0004a928) tabs_4_passive_pane_cp_srt_ParamLimits

0x11e2,	// (0x0004a928) tabs_4_passive_pane_cp_srt

0x11f4,	// (0x0004a93a) tabs_4_passive_pane_srt_ParamLimits

0x36e7,	// (0x0004ce2d) heading_pane_g2

0x11f4,	// (0x0004a93a) tabs_4_passive_pane_srt

0x2a65,	// (0x0004c1ab) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2a65,	// (0x0004c1ab) bg_passive_tab_pane_cp3_srt

0x36ef,	// (0x0004ce35) heading_pane_t1_ParamLimits

0x36ef,	// (0x0004ce35) heading_pane_t1

0x3706,	// (0x0004ce4c) heading_pane_t2_ParamLimits

0x3706,	// (0x0004ce4c) heading_pane_t2

0x0001,

0xf8ba,	// (0x00059000) heading_pane_t_ParamLimits

0xf8ba,	// (0x00059000) heading_pane_t

0x3210,	// (0x0004c956) bg_popup_heading_pane_g1

0x32bf,	// (0x0004ca05) bg_popup_heading_pane_g2

0x32c9,	// (0x0004ca0f) bg_popup_heading_pane_g3

0x32d3,	// (0x0004ca19) bg_popup_heading_pane_g4

0x32dd,	// (0x0004ca23) bg_popup_heading_pane_g5

0x32e7,	// (0x0004ca2d) bg_popup_heading_pane_g6

0x32ef,	// (0x0004ca35) bg_popup_heading_pane_g7

0x32f7,	// (0x0004ca3d) bg_popup_heading_pane_g8

0x3301,	// (0x0004ca47) bg_popup_heading_pane_g9

0x0008,

0xf876,	// (0x00058fbc) bg_popup_heading_pane_g

0x29f1,	// (0x0004c137) bg_popup_sub_pane_g1

0x29f9,	// (0x0004c13f) bg_popup_sub_pane_g2

0x2a01,	// (0x0004c147) bg_popup_sub_pane_g3

0x2a09,	// (0x0004c14f) bg_popup_sub_pane_g4

0x2a11,	// (0x0004c157) bg_popup_sub_pane_g5

0x2a19,	// (0x0004c15f) bg_popup_sub_pane_g6

0x2a21,	// (0x0004c167) bg_popup_sub_pane_g7

0x2a29,	// (0x0004c16f) bg_popup_sub_pane_g8

0x2a31,	// (0x0004c177) bg_popup_sub_pane_g9

0x0008,

0xf850,	// (0x00058f96) bg_popup_sub_pane_g

0x9772,	// (0x00052eb8) bg_popup_window_pane_cp5_ParamLimits

0x9772,	// (0x00052eb8) bg_popup_window_pane_cp5

0x9b34,	// (0x0005327a) popup_note_window_g1_ParamLimits

0x9b34,	// (0x0005327a) popup_note_window_g1

0x9b40,	// (0x00053286) popup_note_window_t1_ParamLimits

0x9b40,	// (0x00053286) popup_note_window_t1

0x9b56,	// (0x0005329c) popup_note_window_t2_ParamLimits

0x9b56,	// (0x0005329c) popup_note_window_t2

0x9b6c,	// (0x000532b2) popup_note_window_t3_ParamLimits

0x9b6c,	// (0x000532b2) popup_note_window_t3

0x9b82,	// (0x000532c8) popup_note_window_t4_ParamLimits

0x9b82,	// (0x000532c8) popup_note_window_t4

0x9baa,	// (0x000532f0) popup_note_window_t5_ParamLimits

0x9baa,	// (0x000532f0) popup_note_window_t5

0x0004,

0xf57f,	// (0x00058cc5) popup_note_window_t_ParamLimits

0xf57f,	// (0x00058cc5) popup_note_window_t

0x9bf4,	// (0x0005333a) bg_popup_window_pane_cp6_ParamLimits

0x9bf4,	// (0x0005333a) bg_popup_window_pane_cp6

0x318c,	// (0x0004c8d2) popup_note_image_window_g1_ParamLimits

0x318c,	// (0x0004c8d2) popup_note_image_window_g1

0xc6a1,	// (0x00055de7) popup_note_image_window_g2_ParamLimits

0xc6a1,	// (0x00055de7) popup_note_image_window_g2

0x0001,

0xf844,	// (0x00058f8a) popup_note_image_window_g_ParamLimits

0xf844,	// (0x00058f8a) popup_note_image_window_g

0x31b1,	// (0x0004c8f7) popup_note_image_window_t1_ParamLimits

0x31b1,	// (0x0004c8f7) popup_note_image_window_t1

0x31ca,	// (0x0004c910) popup_note_image_window_t2_ParamLimits

0x31ca,	// (0x0004c910) popup_note_image_window_t2

0x31e3,	// (0x0004c929) popup_note_image_window_t3_ParamLimits

0x31e3,	// (0x0004c929) popup_note_image_window_t3

0x0002,

0xf849,	// (0x00058f8f) popup_note_image_window_t_ParamLimits

0xf849,	// (0x00058f8f) popup_note_image_window_t

0x3055,	// (0x0004c79b) bg_popup_window_pane_cp7_ParamLimits

0x3055,	// (0x0004c79b) bg_popup_window_pane_cp7

0x3085,	// (0x0004c7cb) popup_note_wait_window_g1_ParamLimits

0x3085,	// (0x0004c7cb) popup_note_wait_window_g1

0x3091,	// (0x0004c7d7) popup_note_wait_window_g2_ParamLimits

0x3091,	// (0x0004c7d7) popup_note_wait_window_g2

0x0002,

0xf832,	// (0x00058f78) popup_note_wait_window_g_ParamLimits

0xf832,	// (0x00058f78) popup_note_wait_window_g

0x30a9,	// (0x0004c7ef) popup_note_wait_window_t1_ParamLimits

0x30a9,	// (0x0004c7ef) popup_note_wait_window_t1

0xc642,	// (0x00055d88) popup_note_wait_window_t2_ParamLimits

0xc642,	// (0x00055d88) popup_note_wait_window_t2

0xc65f,	// (0x00055da5) popup_note_wait_window_t3_ParamLimits

0xc65f,	// (0x00055da5) popup_note_wait_window_t3

0xc672,	// (0x00055db8) popup_note_wait_window_t4_ParamLimits

0xc672,	// (0x00055db8) popup_note_wait_window_t4

0x0004,

0xf839,	// (0x00058f7f) popup_note_wait_window_t_ParamLimits

0xf839,	// (0x00058f7f) popup_note_wait_window_t

0x3125,	// (0x0004c86b) wait_bar_pane_ParamLimits

0x3125,	// (0x0004c86b) wait_bar_pane

0x9521,	// (0x00052c67) wait_anim_pane

0x9521,	// (0x00052c67) wait_border_pane

0x9431,	// (0x00052b77) wait_anim_pane_g1

0x9431,	// (0x00052b77) wait_anim_pane_g2

0x0001,

0xf6f9,	// (0x00058e3f) wait_anim_pane_g

0x3001,	// (0x0004c747) wait_border_pane_g1

0x300c,	// (0x0004c752) wait_border_pane_g2

0x3015,	// (0x0004c75b) wait_border_pane_g3

0x0002,

0xf82b,	// (0x00058f71) wait_border_pane_g

0x2e6c,	// (0x0004c5b2) bg_popup_window_pane_cp16_ParamLimits

0x2e6c,	// (0x0004c5b2) bg_popup_window_pane_cp16

0xc5f2,	// (0x00055d38) indicator_popup_pane_cp4_ParamLimits

0xc5f2,	// (0x00055d38) indicator_popup_pane_cp4

0x2f80,	// (0x0004c6c6) popup_query_data_window_t1_ParamLimits

0x2f80,	// (0x0004c6c6) popup_query_data_window_t1

0x2f92,	// (0x0004c6d8) popup_query_data_window_t2_ParamLimits

0x2f92,	// (0x0004c6d8) popup_query_data_window_t2

0x2fab,	// (0x0004c6f1) popup_query_data_window_t3_ParamLimits

0x2fab,	// (0x0004c6f1) popup_query_data_window_t3

0x0002,

0xf824,	// (0x00058f6a) popup_query_data_window_t_ParamLimits

0xf824,	// (0x00058f6a) popup_query_data_window_t

0xc606,	// (0x00055d4c) query_popup_data_pane_ParamLimits

0xc606,	// (0x00055d4c) query_popup_data_pane

0xc61a,	// (0x00055d60) query_popup_data_pane_cp1_ParamLimits

0xc61a,	// (0x00055d60) query_popup_data_pane_cp1

0x2e6c,	// (0x0004c5b2) bg_popup_window_pane_cp10_ParamLimits

0x2e6c,	// (0x0004c5b2) bg_popup_window_pane_cp10

0xc56d,	// (0x00055cb3) indicator_popup_pane_ParamLimits

0xc56d,	// (0x00055cb3) indicator_popup_pane

0xc58f,	// (0x00055cd5) popup_query_code_window_t1_ParamLimits

0xc58f,	// (0x00055cd5) popup_query_code_window_t1

0xc5a9,	// (0x00055cef) popup_query_code_window_t2_ParamLimits

0xc5a9,	// (0x00055cef) popup_query_code_window_t2

0x2f23,	// (0x0004c669) popup_query_code_window_t3_ParamLimits

0x2f23,	// (0x0004c669) popup_query_code_window_t3

0x0002,

0xf81d,	// (0x00058f63) popup_query_code_window_t_ParamLimits

0xf81d,	// (0x00058f63) popup_query_code_window_t

0x2f52,	// (0x0004c698) query_popup_pane_ParamLimits

0x2f52,	// (0x0004c698) query_popup_pane

0x9bf4,	// (0x0005333a) bg_popup_window_pane_cp15_ParamLimits

0x9bf4,	// (0x0005333a) bg_popup_window_pane_cp15

0x9c12,	// (0x00053358) indicator_popup_pane_cp1_ParamLimits

0x9c12,	// (0x00053358) indicator_popup_pane_cp1

0x9c25,	// (0x0005336b) indicator_popup_pane_cp2_ParamLimits

0x9c25,	// (0x0005336b) indicator_popup_pane_cp2

0x9c38,	// (0x0005337e) popup_query_data_code_window_g1_ParamLimits

0x9c38,	// (0x0005337e) popup_query_data_code_window_g1

0x9c4b,	// (0x00053391) popup_query_data_code_window_t1_ParamLimits

0x9c4b,	// (0x00053391) popup_query_data_code_window_t1

0x9c5d,	// (0x000533a3) popup_query_data_code_window_t2_ParamLimits

0x9c5d,	// (0x000533a3) popup_query_data_code_window_t2

0x9c6f,	// (0x000533b5) popup_query_data_code_window_t3_ParamLimits

0x9c6f,	// (0x000533b5) popup_query_data_code_window_t3

0x9c85,	// (0x000533cb) popup_query_data_code_window_t4_ParamLimits

0x9c85,	// (0x000533cb) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00058cd0) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00058cd0) popup_query_data_code_window_t

0xe263,	// (0x000579a9) list_single_midp_graphic_pane_g3

0x9c9d,	// (0x000533e3) query_popup_data_pane_cp2_ParamLimits

0x9cb0,	// (0x000533f6) query_popup_pane_cp2_ParamLimits

0x9cb0,	// (0x000533f6) query_popup_pane_cp2

0x9521,	// (0x00052c67) bg_popup_window_pane_cp11

0x2e58,	// (0x0004c59e) heading_pane_cp5

0x9d99,	// (0x000534df) listscroll_popup_info_pane

0x9521,	// (0x00052c67) input_focus_pane_cp3

0x9cc3,	// (0x00053409) query_popup_pane_t1

0x9cd1,	// (0x00053417) list_popup_info_pane_ParamLimits

0x9cd1,	// (0x00053417) list_popup_info_pane

0x9ce0,	// (0x00053426) listscroll_popup_info_pane_g1

0x9ce8,	// (0x0005342e) scroll_pane_cp7

0x9cf2,	// (0x00053438) popup_info_list_pane_t1_ParamLimits

0x9cf2,	// (0x00053438) popup_info_list_pane_t1

0x9d0c,	// (0x00053452) popup_info_list_pane_t2_ParamLimits

0x9d0c,	// (0x00053452) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00058cd9) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00058cd9) popup_info_list_pane_t

0x9521,	// (0x00052c67) bg_popup_window_pane_cp12

0xcd19,	// (0x0005645f) find_popup_pane

0x97bc,	// (0x00052f02) bg_popup_window_pane_cp3

0x9d26,	// (0x0005346c) heading_pane_cp3

0x9d32,	// (0x00053478) listscroll_popup_graphic_pane

0x9521,	// (0x00052c67) bg_popup_window_pane_cp4

0x9d91,	// (0x000534d7) heading_pane_cp4

0x9d99,	// (0x000534df) listscroll_popup_colour_pane

0x9da1,	// (0x000534e7) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9da1,	// (0x000534e7) cell_large_graphic_colour_none_popup_pane

0x9db5,	// (0x000534fb) grid_large_graphic_colour_popup_pane_ParamLimits

0x9db5,	// (0x000534fb) grid_large_graphic_colour_popup_pane

0x9dd9,	// (0x0005351f) listscroll_popup_colour_pane_g1_ParamLimits

0x9dd9,	// (0x0005351f) listscroll_popup_colour_pane_g1

0x9df0,	// (0x00053536) listscroll_popup_colour_pane_g2_ParamLimits

0x9df0,	// (0x00053536) listscroll_popup_colour_pane_g2

0x9e07,	// (0x0005354d) listscroll_popup_colour_pane_g3_ParamLimits

0x9e07,	// (0x0005354d) listscroll_popup_colour_pane_g3

0x9e17,	// (0x0005355d) listscroll_popup_colour_pane_g4_ParamLimits

0x9e17,	// (0x0005355d) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00058cde) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00058cde) listscroll_popup_colour_pane_g

0x9e27,	// (0x0005356d) scroll_pane_cp6_ParamLimits

0x9e27,	// (0x0005356d) scroll_pane_cp6

0x9e39,	// (0x0005357f) cell_large_graphic_colour_popup_pane_ParamLimits

0x9e39,	// (0x0005357f) cell_large_graphic_colour_popup_pane

0x9e58,	// (0x0005359e) cell_large_graphic_colour_none_popup_pane_t1

0x9521,	// (0x00052c67) grid_highlight_pane_cp5

0x9e67,	// (0x000535ad) cell_large_graphic_colour_popup_pane_g1

0x9e6f,	// (0x000535b5) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00058ce7) cell_large_graphic_colour_popup_pane_g

0x9e77,	// (0x000535bd) cell_large_graphic_colour_popup_pane_g2_copy1

0x9e80,	// (0x000535c6) grid_highlight_pane_cp4

0x9e88,	// (0x000535ce) bg_popup_window_pane_cp8_ParamLimits

0x9e88,	// (0x000535ce) bg_popup_window_pane_cp8

0x9ea3,	// (0x000535e9) popup_snote_single_text_window_g1_ParamLimits

0x9ea3,	// (0x000535e9) popup_snote_single_text_window_g1

0x9eb5,	// (0x000535fb) popup_snote_single_text_window_t1_ParamLimits

0x9eb5,	// (0x000535fb) popup_snote_single_text_window_t1

0x9ec8,	// (0x0005360e) popup_snote_single_text_window_t2_ParamLimits

0x9ec8,	// (0x0005360e) popup_snote_single_text_window_t2

0x9edb,	// (0x00053621) popup_snote_single_text_window_t3_ParamLimits

0x9edb,	// (0x00053621) popup_snote_single_text_window_t3

0x9f14,	// (0x0005365a) popup_snote_single_text_window_t4_ParamLimits

0x9f14,	// (0x0005365a) popup_snote_single_text_window_t4

0x9f48,	// (0x0005368e) popup_snote_single_text_window_t5_ParamLimits

0x9f48,	// (0x0005368e) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00058cec) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00058cec) popup_snote_single_text_window_t

0x9f77,	// (0x000536bd) bg_popup_window_pane_cp9_ParamLimits

0x9f77,	// (0x000536bd) bg_popup_window_pane_cp9

0x9ea3,	// (0x000535e9) popup_snote_single_graphic_window_g1_ParamLimits

0x9ea3,	// (0x000535e9) popup_snote_single_graphic_window_g1

0x9f85,	// (0x000536cb) popup_snote_single_graphic_window_g2_ParamLimits

0x9f85,	// (0x000536cb) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00058cf7) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00058cf7) popup_snote_single_graphic_window_g

0x9f91,	// (0x000536d7) popup_snote_single_graphic_window_t1_ParamLimits

0x9f91,	// (0x000536d7) popup_snote_single_graphic_window_t1

0x9fa4,	// (0x000536ea) popup_snote_single_graphic_window_t2_ParamLimits

0x9fa4,	// (0x000536ea) popup_snote_single_graphic_window_t2

0x9edb,	// (0x00053621) popup_snote_single_graphic_window_t3_ParamLimits

0x9edb,	// (0x00053621) popup_snote_single_graphic_window_t3

0x9f14,	// (0x0005365a) popup_snote_single_graphic_window_t4_ParamLimits

0x9f14,	// (0x0005365a) popup_snote_single_graphic_window_t4

0x9fb7,	// (0x000536fd) popup_snote_single_graphic_window_t5_ParamLimits

0x9fb7,	// (0x000536fd) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00058cfc) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00058cfc) popup_snote_single_graphic_window_t

0x40b8,	// (0x0004d7fe) grid_graphic_popup_pane_ParamLimits

0x40b8,	// (0x0004d7fe) grid_graphic_popup_pane

0x40e2,	// (0x0004d828) listscroll_popup_graphic_pane_g1_ParamLimits

0x40e2,	// (0x0004d828) listscroll_popup_graphic_pane_g1

0xccb7,	// (0x000563fd) listscroll_popup_graphic_pane_g2_ParamLimits

0xccb7,	// (0x000563fd) listscroll_popup_graphic_pane_g2

0x0001,

0xf99a,	// (0x000590e0) listscroll_popup_graphic_pane_g_ParamLimits

0xf99a,	// (0x000590e0) listscroll_popup_graphic_pane_g

0x410a,	// (0x0004d850) scroll_pane_cp5

0xcc5c,	// (0x000563a2) cell_graphic_popup_pane_ParamLimits

0xcc5c,	// (0x000563a2) cell_graphic_popup_pane

0x4038,	// (0x0004d77e) cell_graphic_popup_pane_g1

0x4040,	// (0x0004d786) cell_graphic_popup_pane_g2

0x9e77,	// (0x000535bd) cell_graphic_popup_pane_g3

0x0002,

0xf993,	// (0x000590d9) cell_graphic_popup_pane_g

0x4049,	// (0x0004d78f) cell_graphic_popup_pane_t2

0x9e80,	// (0x000535c6) grid_highlight_pane_cp3

0x9ff8,	// (0x0005373e) list_gen_pane_ParamLimits

0x9ff8,	// (0x0005373e) list_gen_pane

0xa02a,	// (0x00053770) scroll_pane

0xcbc6,	// (0x0005630c) bg_list_pane_g1_ParamLimits

0xcbc6,	// (0x0005630c) bg_list_pane_g1

0xcbe1,	// (0x00056327) bg_list_pane_g2_ParamLimits

0xcbe1,	// (0x00056327) bg_list_pane_g2

0xcbf4,	// (0x0005633a) bg_list_pane_g3_ParamLimits

0xcbf4,	// (0x0005633a) bg_list_pane_g3

0xcc06,	// (0x0005634c) bg_list_pane_g4_ParamLimits

0xcc06,	// (0x0005634c) bg_list_pane_g4

0xcc18,	// (0x0005635e) bg_list_pane_g5_ParamLimits

0xcc18,	// (0x0005635e) bg_list_pane_g5

0x0004,

0xf988,	// (0x000590ce) bg_list_pane_g_ParamLimits

0xf988,	// (0x000590ce) bg_list_pane_g

0xb605,	// (0x00054d4b) list_double2_graphic_large_graphic_pane_ParamLimits

0xb605,	// (0x00054d4b) list_double2_graphic_large_graphic_pane

0xb605,	// (0x00054d4b) list_double2_graphic_pane_ParamLimits

0xb605,	// (0x00054d4b) list_double2_graphic_pane

0xb605,	// (0x00054d4b) list_double2_large_graphic_pane_ParamLimits

0xb605,	// (0x00054d4b) list_double2_large_graphic_pane

0xb605,	// (0x00054d4b) list_double2_pane_ParamLimits

0xb605,	// (0x00054d4b) list_double2_pane

0xb605,	// (0x00054d4b) list_double_graphic_heading_pane_ParamLimits

0xb605,	// (0x00054d4b) list_double_graphic_heading_pane

0xb605,	// (0x00054d4b) list_double_graphic_pane_ParamLimits

0xb605,	// (0x00054d4b) list_double_graphic_pane

0xb605,	// (0x00054d4b) list_double_heading_pane_ParamLimits

0xb605,	// (0x00054d4b) list_double_heading_pane

0xb605,	// (0x00054d4b) list_double_large_graphic_pane_ParamLimits

0xb605,	// (0x00054d4b) list_double_large_graphic_pane

0xb605,	// (0x00054d4b) list_double_number_pane_ParamLimits

0xb605,	// (0x00054d4b) list_double_number_pane

0xb605,	// (0x00054d4b) list_double_pane_ParamLimits

0xb605,	// (0x00054d4b) list_double_pane

0xb605,	// (0x00054d4b) list_double_time_pane_ParamLimits

0xb605,	// (0x00054d4b) list_double_time_pane

0xb605,	// (0x00054d4b) list_setting_number_pane_ParamLimits

0xb605,	// (0x00054d4b) list_setting_number_pane

0xb605,	// (0x00054d4b) list_setting_pane_ParamLimits

0xb605,	// (0x00054d4b) list_setting_pane

0xcb8f,	// (0x000562d5) list_single_2graphic_pane_ParamLimits

0xcb8f,	// (0x000562d5) list_single_2graphic_pane

0xcb8f,	// (0x000562d5) list_single_graphic_heading_pane_ParamLimits

0xcb8f,	// (0x000562d5) list_single_graphic_heading_pane

0xcb8f,	// (0x000562d5) list_single_graphic_pane_ParamLimits

0xcb8f,	// (0x000562d5) list_single_graphic_pane

0xcb8f,	// (0x000562d5) list_single_heading_pane_ParamLimits

0xcb8f,	// (0x000562d5) list_single_heading_pane

0xcb8f,	// (0x000562d5) list_single_large_graphic_pane_ParamLimits

0xcb8f,	// (0x000562d5) list_single_large_graphic_pane

0xcb8f,	// (0x000562d5) list_single_number_heading_pane_ParamLimits

0xcb8f,	// (0x000562d5) list_single_number_heading_pane

0xcb8f,	// (0x000562d5) list_single_number_pane_ParamLimits

0xcb8f,	// (0x000562d5) list_single_number_pane

0xcb8f,	// (0x000562d5) list_single_pane_ParamLimits

0xcb8f,	// (0x000562d5) list_single_pane

0x9521,	// (0x00052c67) list_highlight_pane_cp1

0xf36c,	// (0x00058ab2) list_single_pane_g1_ParamLimits

0xf36c,	// (0x00058ab2) list_single_pane_g1

0xf378,	// (0x00058abe) list_single_pane_g2_ParamLimits

0xf378,	// (0x00058abe) list_single_pane_g2

0x0001,

0xf5d2,	// (0x00058d18) list_single_pane_g_ParamLimits

0xf5d2,	// (0x00058d18) list_single_pane_g

0x9260,	// (0x000529a6) list_single_pane_t1_ParamLimits

0x9260,	// (0x000529a6) list_single_pane_t1

0xf36c,	// (0x00058ab2) list_single_number_pane_g1_ParamLimits

0xf36c,	// (0x00058ab2) list_single_number_pane_g1

0xf378,	// (0x00058abe) list_single_number_pane_g2_ParamLimits

0xf378,	// (0x00058abe) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x00058d18) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x00058d18) list_single_number_pane_g

0xe08c,	// (0x000577d2) list_single_number_pane_t1_ParamLimits

0xe08c,	// (0x000577d2) list_single_number_pane_t1

0x9220,	// (0x00052966) list_single_number_pane_t2_ParamLimits

0x9220,	// (0x00052966) list_single_number_pane_t2

0x0001,

0xf949,	// (0x0005908f) list_single_number_pane_t_ParamLimits

0xf949,	// (0x0005908f) list_single_number_pane_t

0xe080,	// (0x000577c6) list_single_graphic_pane_g1_ParamLimits

0xe080,	// (0x000577c6) list_single_graphic_pane_g1

0xf36c,	// (0x00058ab2) list_single_graphic_pane_g2_ParamLimits

0xf36c,	// (0x00058ab2) list_single_graphic_pane_g2

0xf378,	// (0x00058abe) list_single_graphic_pane_g3_ParamLimits

0xf378,	// (0x00058abe) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00058d07) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00058d07) list_single_graphic_pane_g

0xe08c,	// (0x000577d2) list_single_graphic_pane_t1_ParamLimits

0xe08c,	// (0x000577d2) list_single_graphic_pane_t1

0x8c2e,	// (0x00052374) list_single_heading_pane_g1_ParamLimits

0x8c2e,	// (0x00052374) list_single_heading_pane_g1

0xf378,	// (0x00058abe) list_single_heading_pane_g2_ParamLimits

0xf378,	// (0x00058abe) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00058d0e) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00058d0e) list_single_heading_pane_g

0x8c41,	// (0x00052387) list_single_heading_pane_t1_ParamLimits

0x8c41,	// (0x00052387) list_single_heading_pane_t1

0xa05e,	// (0x000537a4) list_single_heading_pane_t2_ParamLimits

0xa05e,	// (0x000537a4) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00058d13) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00058d13) list_single_heading_pane_t

0xf36c,	// (0x00058ab2) list_single_number_heading_pane_g1_ParamLimits

0xf36c,	// (0x00058ab2) list_single_number_heading_pane_g1

0xf378,	// (0x00058abe) list_single_number_heading_pane_g2_ParamLimits

0xf378,	// (0x00058abe) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x00058d18) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x00058d18) list_single_number_heading_pane_g

0x8c57,	// (0x0005239d) list_single_number_heading_pane_t1_ParamLimits

0x8c57,	// (0x0005239d) list_single_number_heading_pane_t1

0x8c6d,	// (0x000523b3) list_single_number_heading_pane_t2_ParamLimits

0x8c6d,	// (0x000523b3) list_single_number_heading_pane_t2

0x8c7f,	// (0x000523c5) list_single_number_heading_pane_t3_ParamLimits

0x8c7f,	// (0x000523c5) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x00058d1d) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x00058d1d) list_single_number_heading_pane_t

0x8c91,	// (0x000523d7) list_single_graphic_heading_pane_g1_ParamLimits

0x8c91,	// (0x000523d7) list_single_graphic_heading_pane_g1

0xa070,	// (0x000537b6) list_single_graphic_heading_pane_g4_ParamLimits

0xa070,	// (0x000537b6) list_single_graphic_heading_pane_g4

0xf378,	// (0x00058abe) list_single_graphic_heading_pane_g5_ParamLimits

0xf378,	// (0x00058abe) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x00058d24) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x00058d24) list_single_graphic_heading_pane_g

0x8c57,	// (0x0005239d) list_single_graphic_heading_pane_t1_ParamLimits

0x8c57,	// (0x0005239d) list_single_graphic_heading_pane_t1

0x8ca7,	// (0x000523ed) list_single_graphic_heading_pane_t2_ParamLimits

0x8ca7,	// (0x000523ed) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x00058d2b) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x00058d2b) list_single_graphic_heading_pane_t

0x12d8,	// (0x0004aa1e) list_single_large_graphic_pane_g1_ParamLimits

0x12d8,	// (0x0004aa1e) list_single_large_graphic_pane_g1

0xf36c,	// (0x00058ab2) list_single_large_graphic_pane_g2_ParamLimits

0xf36c,	// (0x00058ab2) list_single_large_graphic_pane_g2

0xf378,	// (0x00058abe) list_single_large_graphic_pane_g3_ParamLimits

0xf378,	// (0x00058abe) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x00058d30) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x00058d30) list_single_large_graphic_pane_g

0x300c,	// (0x0004c752) wait_border_pane_g2_copy1

0xa081,	// (0x000537c7) list_single_large_graphic_pane_g4_cp2

0xe08c,	// (0x000577d2) list_single_large_graphic_pane_t1_ParamLimits

0xe08c,	// (0x000577d2) list_single_large_graphic_pane_t1

0x4ccb,	// (0x0004e411) list_double_pane_g1_ParamLimits

0x4ccb,	// (0x0004e411) list_double_pane_g1

0xf384,	// (0x00058aca) list_double_pane_g2_ParamLimits

0xf384,	// (0x00058aca) list_double_pane_g2

0x0001,

0xf5f1,	// (0x00058d37) list_double_pane_g_ParamLimits

0xf5f1,	// (0x00058d37) list_double_pane_g

0x8cbf,	// (0x00052405) list_double_pane_t1_ParamLimits

0x8cbf,	// (0x00052405) list_double_pane_t1

0x8cd5,	// (0x0005241b) list_double_pane_t2_ParamLimits

0x8cd5,	// (0x0005241b) list_double_pane_t2

0x0001,

0xf5f6,	// (0x00058d3c) list_double_pane_t_ParamLimits

0xf5f6,	// (0x00058d3c) list_double_pane_t

0x8ce7,	// (0x0005242d) list_double2_pane_g1_ParamLimits

0x8ce7,	// (0x0005242d) list_double2_pane_g1

0x8cf8,	// (0x0005243e) list_double2_pane_g2_ParamLimits

0x8cf8,	// (0x0005243e) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x00058d41) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x00058d41) list_double2_pane_g

0x8d04,	// (0x0005244a) list_double2_pane_t1_ParamLimits

0x8d04,	// (0x0005244a) list_double2_pane_t1

0x8d1a,	// (0x00052460) list_double2_pane_t2_ParamLimits

0x8d1a,	// (0x00052460) list_double2_pane_t2

0x0001,

0xf600,	// (0x00058d46) list_double2_pane_t_ParamLimits

0xf600,	// (0x00058d46) list_double2_pane_t

0x4ccb,	// (0x0004e411) list_double_number_pane_g1_ParamLimits

0x4ccb,	// (0x0004e411) list_double_number_pane_g1

0xf384,	// (0x00058aca) list_double_number_pane_g2_ParamLimits

0xf384,	// (0x00058aca) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x00058d37) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x00058d37) list_double_number_pane_g

0x8d2c,	// (0x00052472) list_double_number_pane_t1_ParamLimits

0x8d2c,	// (0x00052472) list_double_number_pane_t1

0x8d3e,	// (0x00052484) list_double_number_pane_t2_ParamLimits

0x8d3e,	// (0x00052484) list_double_number_pane_t2

0x8d54,	// (0x0005249a) list_double_number_pane_t3_ParamLimits

0x8d54,	// (0x0005249a) list_double_number_pane_t3

0x0002,

0xf605,	// (0x00058d4b) list_double_number_pane_t_ParamLimits

0xf605,	// (0x00058d4b) list_double_number_pane_t

0x8d66,	// (0x000524ac) list_double_graphic_pane_g1_ParamLimits

0x8d66,	// (0x000524ac) list_double_graphic_pane_g1

0x8d72,	// (0x000524b8) list_double_graphic_pane_g2_ParamLimits

0x8d72,	// (0x000524b8) list_double_graphic_pane_g2

0x8d81,	// (0x000524c7) list_double_graphic_pane_g3_ParamLimits

0x8d81,	// (0x000524c7) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x00058d52) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x00058d52) list_double_graphic_pane_g

0x8cbf,	// (0x00052405) list_double_graphic_pane_t1_ParamLimits

0x8cbf,	// (0x00052405) list_double_graphic_pane_t1

0x8cd5,	// (0x0005241b) list_double_graphic_pane_t2_ParamLimits

0x8cd5,	// (0x0005241b) list_double_graphic_pane_t2

0x0001,

0xf5f6,	// (0x00058d3c) list_double_graphic_pane_t_ParamLimits

0xf5f6,	// (0x00058d3c) list_double_graphic_pane_t

0x8d99,	// (0x000524df) list_double2_graphic_pane_g1_ParamLimits

0x8d99,	// (0x000524df) list_double2_graphic_pane_g1

0xa089,	// (0x000537cf) list_double2_graphic_pane_g2_ParamLimits

0xa089,	// (0x000537cf) list_double2_graphic_pane_g2

0xa095,	// (0x000537db) list_double2_graphic_pane_g3_ParamLimits

0xa095,	// (0x000537db) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x00058d5b) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x00058d5b) list_double2_graphic_pane_g

0x8da5,	// (0x000524eb) list_double2_graphic_pane_t1_ParamLimits

0x8da5,	// (0x000524eb) list_double2_graphic_pane_t1

0x8dbb,	// (0x00052501) list_double2_graphic_pane_t2_ParamLimits

0x8dbb,	// (0x00052501) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x00058d62) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x00058d62) list_double2_graphic_pane_t

0x8dcd,	// (0x00052513) list_double_large_graphic_pane_g1_ParamLimits

0x8dcd,	// (0x00052513) list_double_large_graphic_pane_g1

0x8dec,	// (0x00052532) list_double_large_graphic_pane_g2_ParamLimits

0x8dec,	// (0x00052532) list_double_large_graphic_pane_g2

0xf384,	// (0x00058aca) list_double_large_graphic_pane_g3_ParamLimits

0xf384,	// (0x00058aca) list_double_large_graphic_pane_g3

0x8e02,	// (0x00052548) list_double_large_graphic_pane_g4_ParamLimits

0x8e02,	// (0x00052548) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x00058d67) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x00058d67) list_double_large_graphic_pane_g

0x8e15,	// (0x0005255b) list_double_large_graphic_pane_t1_ParamLimits

0x8e15,	// (0x0005255b) list_double_large_graphic_pane_t1

0x8e2e,	// (0x00052574) list_double_large_graphic_pane_t2_ParamLimits

0x8e2e,	// (0x00052574) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x00058d72) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x00058d72) list_double_large_graphic_pane_t

0xa0a1,	// (0x000537e7) list_double2_large_graphic_pane_g1_ParamLimits

0xa0a1,	// (0x000537e7) list_double2_large_graphic_pane_g1

0x8e40,	// (0x00052586) list_double2_large_graphic_pane_g2_ParamLimits

0x8e40,	// (0x00052586) list_double2_large_graphic_pane_g2

0xa095,	// (0x000537db) list_double2_large_graphic_pane_g3_ParamLimits

0xa095,	// (0x000537db) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x00058d77) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x00058d77) list_double2_large_graphic_pane_g

0x8da5,	// (0x000524eb) list_double2_large_graphic_pane_t1_ParamLimits

0x8da5,	// (0x000524eb) list_double2_large_graphic_pane_t1

0x8dbb,	// (0x00052501) list_double2_large_graphic_pane_t2_ParamLimits

0x8dbb,	// (0x00052501) list_double2_large_graphic_pane_t2

0x0001,

0xf61c,	// (0x00058d62) list_double2_large_graphic_pane_t_ParamLimits

0xf61c,	// (0x00058d62) list_double2_large_graphic_pane_t

0x8e51,	// (0x00052597) list_double_heading_pane_g1_ParamLimits

0x8e51,	// (0x00052597) list_double_heading_pane_g1

0xa0ad,	// (0x000537f3) list_double_heading_pane_g2_ParamLimits

0xa0ad,	// (0x000537f3) list_double_heading_pane_g2

0x0001,

0xf638,	// (0x00058d7e) list_double_heading_pane_g_ParamLimits

0xf638,	// (0x00058d7e) list_double_heading_pane_g

0x8e62,	// (0x000525a8) list_double_heading_pane_t1_ParamLimits

0x8e62,	// (0x000525a8) list_double_heading_pane_t1

0x8dbb,	// (0x00052501) list_double_heading_pane_t2_ParamLimits

0x8dbb,	// (0x00052501) list_double_heading_pane_t2

0x0001,

0xf63d,	// (0x00058d83) list_double_heading_pane_t_ParamLimits

0xf63d,	// (0x00058d83) list_double_heading_pane_t

0x8e78,	// (0x000525be) list_double_graphic_heading_pane_g1_ParamLimits

0x8e78,	// (0x000525be) list_double_graphic_heading_pane_g1

0x8e51,	// (0x00052597) list_double_graphic_heading_pane_g2_ParamLimits

0x8e51,	// (0x00052597) list_double_graphic_heading_pane_g2

0xa0ad,	// (0x000537f3) list_double_graphic_heading_pane_g3_ParamLimits

0xa0ad,	// (0x000537f3) list_double_graphic_heading_pane_g3

0x0002,

0xf642,	// (0x00058d88) list_double_graphic_heading_pane_g_ParamLimits

0xf642,	// (0x00058d88) list_double_graphic_heading_pane_g

0x8e62,	// (0x000525a8) list_double_graphic_heading_pane_t1_ParamLimits

0x8e62,	// (0x000525a8) list_double_graphic_heading_pane_t1

0x8dbb,	// (0x00052501) list_double_graphic_heading_pane_t2_ParamLimits

0x8dbb,	// (0x00052501) list_double_graphic_heading_pane_t2

0x0001,

0xf63d,	// (0x00058d83) list_double_graphic_heading_pane_t_ParamLimits

0xf63d,	// (0x00058d83) list_double_graphic_heading_pane_t

0x8e84,	// (0x000525ca) list_double_time_pane_g1_ParamLimits

0x8e84,	// (0x000525ca) list_double_time_pane_g1

0xe0a2,	// (0x000577e8) list_double_time_pane_g2_ParamLimits

0xe0a2,	// (0x000577e8) list_double_time_pane_g2

0x0001,

0xf649,	// (0x00058d8f) list_double_time_pane_g_ParamLimits

0xf649,	// (0x00058d8f) list_double_time_pane_g

0x8e95,	// (0x000525db) list_double_time_pane_t1_ParamLimits

0x8e95,	// (0x000525db) list_double_time_pane_t1

0x8eab,	// (0x000525f1) list_double_time_pane_t2_ParamLimits

0x8eab,	// (0x000525f1) list_double_time_pane_t2

0x8ebd,	// (0x00052603) list_double_time_pane_t3_ParamLimits

0x8ebd,	// (0x00052603) list_double_time_pane_t3

0x8ecf,	// (0x00052615) list_double_time_pane_t4_ParamLimits

0x8ecf,	// (0x00052615) list_double_time_pane_t4

0x0003,

0xf64e,	// (0x00058d94) list_double_time_pane_t_ParamLimits

0xf64e,	// (0x00058d94) list_double_time_pane_t

0x8ee1,	// (0x00052627) list_setting_pane_g1_ParamLimits

0x8ee1,	// (0x00052627) list_setting_pane_g1

0x8eed,	// (0x00052633) list_setting_pane_g2_ParamLimits

0x8eed,	// (0x00052633) list_setting_pane_g2

0x0001,

0xf657,	// (0x00058d9d) list_setting_pane_g_ParamLimits

0xf657,	// (0x00058d9d) list_setting_pane_g

0x8ef9,	// (0x0005263f) list_setting_pane_t1_ParamLimits

0x8ef9,	// (0x0005263f) list_setting_pane_t1

0x8f13,	// (0x00052659) list_setting_pane_t2_ParamLimits

0x8f13,	// (0x00052659) list_setting_pane_t2

0x0002,

0xf65c,	// (0x00058da2) list_setting_pane_t_ParamLimits

0xf65c,	// (0x00058da2) list_setting_pane_t

0x8f52,	// (0x00052698) set_value_pane_cp_ParamLimits

0x8f52,	// (0x00052698) set_value_pane_cp

0x8f5e,	// (0x000526a4) list_setting_number_pane_g1_ParamLimits

0x8f5e,	// (0x000526a4) list_setting_number_pane_g1

0x8f6a,	// (0x000526b0) list_setting_number_pane_g2_ParamLimits

0x8f6a,	// (0x000526b0) list_setting_number_pane_g2

0x0001,

0xf663,	// (0x00058da9) list_setting_number_pane_g_ParamLimits

0xf663,	// (0x00058da9) list_setting_number_pane_g

0x8f76,	// (0x000526bc) list_setting_number_pane_t1_ParamLimits

0x8f76,	// (0x000526bc) list_setting_number_pane_t1

0x8f8f,	// (0x000526d5) list_setting_number_pane_t2_ParamLimits

0x8f8f,	// (0x000526d5) list_setting_number_pane_t2

0x8fa9,	// (0x000526ef) list_setting_number_pane_t3_ParamLimits

0x8fa9,	// (0x000526ef) list_setting_number_pane_t3

0x0003,

0xf668,	// (0x00058dae) list_setting_number_pane_t_ParamLimits

0xf668,	// (0x00058dae) list_setting_number_pane_t

0x8f52,	// (0x00052698) set_value_pane_ParamLimits

0x8f52,	// (0x00052698) set_value_pane

0xa0b9,	// (0x000537ff) bg_set_opt_pane_ParamLimits

0xa0b9,	// (0x000537ff) bg_set_opt_pane

0xe0ae,	// (0x000577f4) set_value_pane_t1

0xa0da,	// (0x00053820) slider_set_pane_cp3

0xa0e3,	// (0x00053829) volume_small_pane_cp

0xa0ec,	// (0x00053832) list_form_gen_pane

0xa0f5,	// (0x0005383b) scroll_pane_cp8

0x8fec,	// (0x00052732) form_field_data_pane_ParamLimits

0x8fec,	// (0x00052732) form_field_data_pane

0x9003,	// (0x00052749) form_field_data_wide_pane_ParamLimits

0x9003,	// (0x00052749) form_field_data_wide_pane

0x9023,	// (0x00052769) form_field_popup_pane_ParamLimits

0x9023,	// (0x00052769) form_field_popup_pane

0x903b,	// (0x00052781) form_field_popup_wide_pane_ParamLimits

0x903b,	// (0x00052781) form_field_popup_wide_pane

0xe0cc,	// (0x00057812) form_field_slider_pane_ParamLimits

0xe0cc,	// (0x00057812) form_field_slider_pane

0x9052,	// (0x00052798) form_field_slider_wide_pane_ParamLimits

0x9052,	// (0x00052798) form_field_slider_wide_pane

0xa106,	// (0x0005384c) data_form_pane

0x906f,	// (0x000527b5) form_field_data_pane_t1

0xa112,	// (0x00053858) input_focus_pane

0xe0df,	// (0x00057825) data_form_wide_pane

0xe0fc,	// (0x00057842) form_field_data_wide_pane_t1

0x9e95,	// (0x000535db) input_focus_pane_cp6

0x9089,	// (0x000527cf) form_field_popup_pane_t1

0xa112,	// (0x00053858) input_focus_pane_cp7

0xa134,	// (0x0005387a) list_form_pane

0xe126,	// (0x0005786c) form_field_popup_wide_pane_t1

0xa112,	// (0x00053858) input_focus_pane_cp8

0xa140,	// (0x00053886) list_form_wide_pane

0x90ab,	// (0x000527f1) form_field_slider_pane_t1_ParamLimits

0x90ab,	// (0x000527f1) form_field_slider_pane_t1

0x90c3,	// (0x00052809) form_field_slider_pane_t2_ParamLimits

0x90c3,	// (0x00052809) form_field_slider_pane_t2

0x0001,

0xf678,	// (0x00058dbe) form_field_slider_pane_t_ParamLimits

0xf678,	// (0x00058dbe) form_field_slider_pane_t

0x9772,	// (0x00052eb8) input_focus_pane_cp9_ParamLimits

0x9772,	// (0x00052eb8) input_focus_pane_cp9

0x90d8,	// (0x0005281e) slider_cont_pane_ParamLimits

0x90d8,	// (0x0005281e) slider_cont_pane

0xa14c,	// (0x00053892) form_field_slider_wide_pane_t1_ParamLimits

0xa14c,	// (0x00053892) form_field_slider_wide_pane_t1

0xe13b,	// (0x00057881) form_field_slider_wide_pane_t2_ParamLimits

0xe13b,	// (0x00057881) form_field_slider_wide_pane_t2

0x0001,

0xf67d,	// (0x00058dc3) form_field_slider_wide_pane_t_ParamLimits

0xf67d,	// (0x00058dc3) form_field_slider_wide_pane_t

0x9772,	// (0x00052eb8) input_focus_pane_cp10_ParamLimits

0x9772,	// (0x00052eb8) input_focus_pane_cp10

0x90ec,	// (0x00052832) slider_cont_pane_cp1_ParamLimits

0x90ec,	// (0x00052832) slider_cont_pane_cp1

0x9100,	// (0x00052846) slider_form_pane_cp

0xa15e,	// (0x000538a4) input_focus_pane_g1

0xa166,	// (0x000538ac) input_focus_pane_g2

0xa16e,	// (0x000538b4) input_focus_pane_g3

0xa176,	// (0x000538bc) input_focus_pane_g4

0xa17e,	// (0x000538c4) input_focus_pane_g5

0xa186,	// (0x000538cc) input_focus_pane_g6

0xa18e,	// (0x000538d4) input_focus_pane_g7

0xa196,	// (0x000538dc) input_focus_pane_g8

0xa19e,	// (0x000538e4) input_focus_pane_g9

0x9431,	// (0x00052b77) input_focus_pane_g10

0x0009,

0xf682,	// (0x00058dc8) input_focus_pane_g

0x3015,	// (0x0004c75b) wait_border_pane_g3_copy1

0x9108,	// (0x0005284e) data_form_pane_t1

0x9431,	// (0x00052b77) wait_anim_pane_g1_copy1

0x9232,	// (0x00052978) data_form_wide_pane_t1

0x9122,	// (0x00052868) list_form_graphic_pane_cp_ParamLimits

0x9122,	// (0x00052868) list_form_graphic_pane_cp

0x3f04,	// (0x0004d64a) slider_form_pane_g1

0x3f0d,	// (0x0004d653) slider_form_pane_g2

0x0006,

0xf979,	// (0x000590bf) slider_form_pane_g

0x9122,	// (0x00052868) list_form_graphic_pane_ParamLimits

0x9122,	// (0x00052868) list_form_graphic_pane

0x9134,	// (0x0005287a) list_form_graphic_pane_g1

0x913c,	// (0x00052882) list_form_graphic_pane_t1_ParamLimits

0x913c,	// (0x00052882) list_form_graphic_pane_t1

0x97bc,	// (0x00052f02) list_highlight_pane_cp5_ParamLimits

0x97bc,	// (0x00052f02) list_highlight_pane_cp5

0x9151,	// (0x00052897) find_pane_g1

0xa1a6,	// (0x000538ec) input_find_pane

0x915a,	// (0x000528a0) input_find_pane_g1_ParamLimits

0x915a,	// (0x000528a0) input_find_pane_g1

0x9166,	// (0x000528ac) input_find_pane_t1_ParamLimits

0x9166,	// (0x000528ac) input_find_pane_t1

0x917b,	// (0x000528c1) input_find_pane_t2_ParamLimits

0x917b,	// (0x000528c1) input_find_pane_t2

0x0001,

0xf697,	// (0x00058ddd) input_find_pane_t_ParamLimits

0xf697,	// (0x00058ddd) input_find_pane_t

0xa1af,	// (0x000538f5) input_focus_pane_cp5_ParamLimits

0xa1af,	// (0x000538f5) input_focus_pane_cp5

0xa1c9,	// (0x0005390f) bg_popup_window_pane_cp2_ParamLimits

0xa1c9,	// (0x0005390f) bg_popup_window_pane_cp2

0xa1d6,	// (0x0005391c) listscroll_menu_pane_ParamLimits

0xa1d6,	// (0x0005391c) listscroll_menu_pane

0xa1e2,	// (0x00053928) popup_submenu_window_ParamLimits

0xa1e2,	// (0x00053928) popup_submenu_window

0xa20a,	// (0x00053950) find_popup_pane_g1

0xa212,	// (0x00053958) input_popup_find_pane_cp

0xa1af,	// (0x000538f5) input_focus_pane_cp4_ParamLimits

0xa1af,	// (0x000538f5) input_focus_pane_cp4

0xa22a,	// (0x00053970) input_popup_find_pane_t1_ParamLimits

0xa22a,	// (0x00053970) input_popup_find_pane_t1

0x9521,	// (0x00052c67) bg_popup_sub_pane_cp

0xa258,	// (0x0005399e) listscroll_popup_sub_pane

0xa260,	// (0x000539a6) list_submenu_pane_ParamLimits

0xa260,	// (0x000539a6) list_submenu_pane

0xa271,	// (0x000539b7) scroll_pane_cp4

0xa279,	// (0x000539bf) list_single_popup_submenu_pane_ParamLimits

0xa279,	// (0x000539bf) list_single_popup_submenu_pane

0xa28d,	// (0x000539d3) list_single_popup_submenu_pane_g1

0xa295,	// (0x000539db) list_single_popup_submenu_pane_t1_ParamLimits

0xa295,	// (0x000539db) list_single_popup_submenu_pane_t1

0x9772,	// (0x00052eb8) bg_active_tab_pane_cp1_ParamLimits

0x9772,	// (0x00052eb8) bg_active_tab_pane_cp1

0xa2aa,	// (0x000539f0) tabs_2_active_pane_g1

0xa2b2,	// (0x000539f8) tabs_2_active_pane_t1

0x9772,	// (0x00052eb8) bg_passive_tab_pane_cp1_ParamLimits

0x9772,	// (0x00052eb8) bg_passive_tab_pane_cp1

0xa2aa,	// (0x000539f0) tabs_2_passive_pane_g1

0xa2b2,	// (0x000539f8) tabs_2_passive_pane_t1

0x97bc,	// (0x00052f02) bg_active_tab_pane_cp4

0xa2c4,	// (0x00053a0a) tabs_2_long_active_pane_t1

0x24ca,	// (0x0004bc10) bg_passive_tab_pane_cp4

0x0dfd,	// (0x0004a543) list_single_midp_graphic_pane_g4_ParamLimits

0x97bc,	// (0x00052f02) bg_active_tab_pane_cp5

0xa2d7,	// (0x00053a1d) tabs_3_long_active_pane_t1

0x24ca,	// (0x0004bc10) bg_passive_tab_pane_cp5

0x0dfd,	// (0x0004a543) list_single_midp_graphic_pane_g4

0x97bc,	// (0x00052f02) bg_popup_window_pane_cp13_ParamLimits

0x97bc,	// (0x00052f02) bg_popup_window_pane_cp13

0xa2f2,	// (0x00053a38) listscroll_popup_fast_pane_ParamLimits

0xa2f2,	// (0x00053a38) listscroll_popup_fast_pane

0xa2fe,	// (0x00053a44) grid_popup_fast_pane_ParamLimits

0xa2fe,	// (0x00053a44) grid_popup_fast_pane

0xa310,	// (0x00053a56) scroll_pane_cp9_ParamLimits

0xa310,	// (0x00053a56) scroll_pane_cp9

0x57f4,	// (0x0004ef3a) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x57f4,	// (0x0004ef3a) list_single_graphic_hl_pane_t1_cp2

0xa334,	// (0x00053a7a) input_focus_pane_cp20_ParamLimits

0xa334,	// (0x00053a7a) input_focus_pane_cp20

0xa342,	// (0x00053a88) query_popup_data_pane_t1_ParamLimits

0xa342,	// (0x00053a88) query_popup_data_pane_t1

0xa355,	// (0x00053a9b) query_popup_data_pane_t2_ParamLimits

0xa355,	// (0x00053a9b) query_popup_data_pane_t2

0xa39b,	// (0x00053ae1) query_popup_data_pane_t3_ParamLimits

0xa39b,	// (0x00053ae1) query_popup_data_pane_t3

0xa3dc,	// (0x00053b22) query_popup_data_pane_t4_ParamLimits

0xa3dc,	// (0x00053b22) query_popup_data_pane_t4

0xa418,	// (0x00053b5e) query_popup_data_pane_t5_ParamLimits

0xa418,	// (0x00053b5e) query_popup_data_pane_t5

0x0004,

0xf69c,	// (0x00058de2) query_popup_data_pane_t_ParamLimits

0xf69c,	// (0x00058de2) query_popup_data_pane_t

0xa15e,	// (0x000538a4) bg_set_opt_pane_g1

0xa166,	// (0x000538ac) bg_set_opt_pane_g2

0xa16e,	// (0x000538b4) bg_set_opt_pane_g3

0xa176,	// (0x000538bc) bg_set_opt_pane_g4

0xa17e,	// (0x000538c4) bg_set_opt_pane_g5

0xa186,	// (0x000538cc) bg_set_opt_pane_g6

0xa18e,	// (0x000538d4) bg_set_opt_pane_g7

0xa196,	// (0x000538dc) bg_set_opt_pane_g8

0xa19e,	// (0x000538e4) bg_set_opt_pane_g9

0x0008,

0xf6a7,	// (0x00058ded) bg_set_opt_pane_g

0x0235,	// (0x0004997b) control_top_pane_stacon_ParamLimits

0x0235,	// (0x0004997b) control_top_pane_stacon

0x0288,	// (0x000499ce) signal_pane_stacon_ParamLimits

0x0288,	// (0x000499ce) signal_pane_stacon

0xe14d,	// (0x00057893) stacon_top_pane_g1_ParamLimits

0xe14d,	// (0x00057893) stacon_top_pane_g1

0x02ad,	// (0x000499f3) title_pane_stacon_ParamLimits

0x02ad,	// (0x000499f3) title_pane_stacon

0x02d7,	// (0x00049a1d) uni_indicator_pane_stacon_ParamLimits

0x02d7,	// (0x00049a1d) uni_indicator_pane_stacon

0x02ec,	// (0x00049a32) battery_pane_stacon_ParamLimits

0x02ec,	// (0x00049a32) battery_pane_stacon

0x0330,	// (0x00049a76) control_bottom_pane_stacon_ParamLimits

0x0330,	// (0x00049a76) control_bottom_pane_stacon

0x0353,	// (0x00049a99) navi_pane_stacon_ParamLimits

0x0353,	// (0x00049a99) navi_pane_stacon

0xe16f,	// (0x000578b5) stacon_bottom_pane_g1_ParamLimits

0xe16f,	// (0x000578b5) stacon_bottom_pane_g1

0xf3a5,	// (0x00058aeb) aid_levels_signal_lsc_ParamLimits

0xf3a5,	// (0x00058aeb) aid_levels_signal_lsc

0xf3bb,	// (0x00058b01) signal_pane_stacon_g1_ParamLimits

0xf3bb,	// (0x00058b01) signal_pane_stacon_g1

0xf3cf,	// (0x00058b15) signal_pane_stacon_g2_ParamLimits

0xf3cf,	// (0x00058b15) signal_pane_stacon_g2

0x0001,

0xf6ba,	// (0x00058e00) signal_pane_stacon_g_ParamLimits

0xf6ba,	// (0x00058e00) signal_pane_stacon_g

0xf404,	// (0x00058b4a) title_pane_stacon_t1_ParamLimits

0xf404,	// (0x00058b4a) title_pane_stacon_t1

0xa45c,	// (0x00053ba2) uni_indicator_pane_stacon_g1

0xa466,	// (0x00053bac) uni_indicator_pane_stacon_g2

0xa470,	// (0x00053bb6) uni_indicator_pane_stacon_g3

0xa47a,	// (0x00053bc0) uni_indicator_pane_stacon_g4

0x0003,

0xf6c6,	// (0x00058e0c) uni_indicator_pane_stacon_g

0xf429,	// (0x00058b6f) control_top_pane_stacon_g1

0xf431,	// (0x00058b77) control_top_pane_stacon_t1_ParamLimits

0xf431,	// (0x00058b77) control_top_pane_stacon_t1

0xf468,	// (0x00058bae) aid_levels_battery_lsc_ParamLimits

0xf468,	// (0x00058bae) aid_levels_battery_lsc

0xf47f,	// (0x00058bc5) battery_pane_stacon_g1_ParamLimits

0xf47f,	// (0x00058bc5) battery_pane_stacon_g1

0xf492,	// (0x00058bd8) battery_pane_stacon_g2_ParamLimits

0xf492,	// (0x00058bd8) battery_pane_stacon_g2

0x0001,

0xf6cf,	// (0x00058e15) battery_pane_stacon_g_ParamLimits

0xf6cf,	// (0x00058e15) battery_pane_stacon_g

0xf4d0,	// (0x00058c16) navi_icon_pane_stacon

0xf4e4,	// (0x00058c2a) navi_navi_pane_stacon

0xf4d0,	// (0x00058c16) navi_text_pane_stacon

0xf429,	// (0x00058b6f) control_bottom_pane_stacon_g1

0xf4f8,	// (0x00058c3e) control_bottom_pane_stacon_t1_ParamLimits

0xf4f8,	// (0x00058c3e) control_bottom_pane_stacon_t1

0xa49e,	// (0x00053be4) grid_app_pane_ParamLimits

0xa49e,	// (0x00053be4) grid_app_pane

0xa4d6,	// (0x00053c1c) scroll_pane_cp15_ParamLimits

0xa4d6,	// (0x00053c1c) scroll_pane_cp15

0xa4eb,	// (0x00053c31) cell_app_pane_ParamLimits

0xa4eb,	// (0x00053c31) cell_app_pane

0xa530,	// (0x00053c76) cell_app_pane_g1_ParamLimits

0xa530,	// (0x00053c76) cell_app_pane_g1

0xa554,	// (0x00053c9a) cell_app_pane_g2_ParamLimits

0xa554,	// (0x00053c9a) cell_app_pane_g2

0x0001,

0xf6d4,	// (0x00058e1a) cell_app_pane_g_ParamLimits

0xf6d4,	// (0x00058e1a) cell_app_pane_g

0xa560,	// (0x00053ca6) cell_app_pane_t1_ParamLimits

0xa560,	// (0x00053ca6) cell_app_pane_t1

0xa577,	// (0x00053cbd) grid_highlight_pane_ParamLimits

0xa577,	// (0x00053cbd) grid_highlight_pane

0xa15e,	// (0x000538a4) cell_highlight_pane_g1

0xa166,	// (0x000538ac) cell_highlight_pane_g2

0xa16e,	// (0x000538b4) cell_highlight_pane_g3

0xa176,	// (0x000538bc) cell_highlight_pane_g4

0xa17e,	// (0x000538c4) cell_highlight_pane_g5

0xa186,	// (0x000538cc) cell_highlight_pane_g6

0xa18e,	// (0x000538d4) cell_highlight_pane_g7

0xa196,	// (0x000538dc) cell_highlight_pane_g8

0xa19e,	// (0x000538e4) cell_highlight_pane_g9

0x9431,	// (0x00052b77) cell_highlight_pane_g10

0x0009,

0xf682,	// (0x00058dc8) cell_highlight_pane_g

0xa591,	// (0x00053cd7) bg_scroll_pane

0xa5b0,	// (0x00053cf6) scroll_handle_pane

0xa5ec,	// (0x00053d32) scroll_bg_pane_g1

0xa601,	// (0x00053d47) scroll_bg_pane_g2

0xa619,	// (0x00053d5f) scroll_bg_pane_g3

0x0002,

0xf6d9,	// (0x00058e1f) scroll_bg_pane_g

0xa62e,	// (0x00053d74) scroll_handle_focus_pane_ParamLimits

0xa62e,	// (0x00053d74) scroll_handle_focus_pane

0xa5ec,	// (0x00053d32) scroll_handle_pane_g1

0xa63b,	// (0x00053d81) scroll_handle_pane_g2

0xa619,	// (0x00053d5f) scroll_handle_pane_g3

0x0002,

0xf6e0,	// (0x00058e26) scroll_handle_pane_g

0xa1af,	// (0x000538f5) bg_popup_sub_pane_cp21_ParamLimits

0xa1af,	// (0x000538f5) bg_popup_sub_pane_cp21

0xa64f,	// (0x00053d95) popup_fep_japan_predictive_window_t1_ParamLimits

0xa64f,	// (0x00053d95) popup_fep_japan_predictive_window_t1

0xa666,	// (0x00053dac) popup_fep_japan_predictive_window_t2_ParamLimits

0xa666,	// (0x00053dac) popup_fep_japan_predictive_window_t2

0xa699,	// (0x00053ddf) popup_fep_japan_predictive_window_t3_ParamLimits

0xa699,	// (0x00053ddf) popup_fep_japan_predictive_window_t3

0x0002,

0xf6e7,	// (0x00058e2d) popup_fep_japan_predictive_window_t_ParamLimits

0xf6e7,	// (0x00058e2d) popup_fep_japan_predictive_window_t

0x9521,	// (0x00052c67) bg_popup_sub_pane_cp23

0xa6d0,	// (0x00053e16) listscroll_japin_cand_pane

0xa6d8,	// (0x00053e1e) popup_fep_japan_candidate_window_t1

0xbe1e,	// (0x00055564) candidate_pane_ParamLimits

0xbe1e,	// (0x00055564) candidate_pane

0xa6e6,	// (0x00053e2c) scroll_pane_cp30

0xbe30,	// (0x00055576) list_single_popup_jap_candidate_pane_ParamLimits

0xbe30,	// (0x00055576) list_single_popup_jap_candidate_pane

0x9521,	// (0x00052c67) list_highlight_pane_cp30

0xbe45,	// (0x0005558b) list_single_popup_jap_candidate_pane_t1

0xbe54,	// (0x0005559a) level_1_signal

0xbe61,	// (0x000555a7) level_2_signal

0xbe6e,	// (0x000555b4) level_3_signal

0xbe7b,	// (0x000555c1) level_4_signal

0xbe88,	// (0x000555ce) level_5_signal

0xbe95,	// (0x000555db) level_6_signal

0xbea2,	// (0x000555e8) level_7_signal

0xbe54,	// (0x0005559a) level_1_battery

0xbe61,	// (0x000555a7) level_2_battery

0xbe6e,	// (0x000555b4) level_3_battery

0xbe7b,	// (0x000555c1) level_4_battery

0xbe88,	// (0x000555ce) level_5_battery

0xbe95,	// (0x000555db) level_6_battery

0xbea2,	// (0x000555e8) level_7_battery

0xbec7,	// (0x0005560d) list_menu_pane_ParamLimits

0xbec7,	// (0x0005560d) list_menu_pane

0xbedd,	// (0x00055623) scroll_pane_cp25_ParamLimits

0xbedd,	// (0x00055623) scroll_pane_cp25

0xa6ee,	// (0x00053e34) list_double2_graphic_pane_cp2_ParamLimits

0xa6ee,	// (0x00053e34) list_double2_graphic_pane_cp2

0xa6ee,	// (0x00053e34) list_double2_large_graphic_pane_cp2_ParamLimits

0xa6ee,	// (0x00053e34) list_double2_large_graphic_pane_cp2

0xa6ee,	// (0x00053e34) list_double2_pane_cp2_ParamLimits

0xa6ee,	// (0x00053e34) list_double2_pane_cp2

0xa6ee,	// (0x00053e34) list_double_graphic_pane_cp2_ParamLimits

0xa6ee,	// (0x00053e34) list_double_graphic_pane_cp2

0xa6ee,	// (0x00053e34) list_double_large_graphic_pane_cp2_ParamLimits

0xa6ee,	// (0x00053e34) list_double_large_graphic_pane_cp2

0xa6ee,	// (0x00053e34) list_double_number_pane_cp2_ParamLimits

0xa6ee,	// (0x00053e34) list_double_number_pane_cp2

0xa6ee,	// (0x00053e34) list_double_pane_cp2_ParamLimits

0xa6ee,	// (0x00053e34) list_double_pane_cp2

0xa6fd,	// (0x00053e43) list_single_2graphic_pane_cp2_ParamLimits

0xa6fd,	// (0x00053e43) list_single_2graphic_pane_cp2

0xa6fd,	// (0x00053e43) list_single_graphic_heading_pane_cp2_ParamLimits

0xa6fd,	// (0x00053e43) list_single_graphic_heading_pane_cp2

0xa6fd,	// (0x00053e43) list_single_graphic_pane_cp2_ParamLimits

0xa6fd,	// (0x00053e43) list_single_graphic_pane_cp2

0xa6fd,	// (0x00053e43) list_single_heading_pane_cp2_ParamLimits

0xa6fd,	// (0x00053e43) list_single_heading_pane_cp2

0xbf06,	// (0x0005564c) list_single_large_graphic_pane_cp2_ParamLimits

0xbf06,	// (0x0005564c) list_single_large_graphic_pane_cp2

0xa6fd,	// (0x00053e43) list_single_number_heading_pane_cp2_ParamLimits

0xa6fd,	// (0x00053e43) list_single_number_heading_pane_cp2

0xa6fd,	// (0x00053e43) list_single_number_pane_cp2_ParamLimits

0xa6fd,	// (0x00053e43) list_single_number_pane_cp2

0xa6fd,	// (0x00053e43) list_single_pane_cp2_ParamLimits

0xa6fd,	// (0x00053e43) list_single_pane_cp2

0xbf20,	// (0x00055666) bg_popup_sub_pane_cp22

0x016c,	// (0x000498b2) popup_side_volume_key_window_g1

0x0190,	// (0x000498d6) popup_side_volume_key_window_t1

0xa7c5,	// (0x00053f0b) volume_small_pane_cp1

0x9772,	// (0x00052eb8) bg_popup_sub_pane_cp24_ParamLimits

0x9772,	// (0x00052eb8) bg_popup_sub_pane_cp24

0xbf36,	// (0x0005567c) fep_china_uni_candidate_pane_ParamLimits

0xbf36,	// (0x0005567c) fep_china_uni_candidate_pane

0xbf4a,	// (0x00055690) fep_china_uni_entry_pane

0xbf5a,	// (0x000556a0) popup_fep_china_uni_window_g1

0xa7cd,	// (0x00053f13) fep_china_uni_entry_pane_g1

0xa7d5,	// (0x00053f1b) fep_china_uni_entry_pane_g2

0x0001,

0xf718,	// (0x00058e5e) fep_china_uni_entry_pane_g

0xbf76,	// (0x000556bc) fep_entry_item_pane

0xbf80,	// (0x000556c6) fep_candidate_item_pane

0xa7dd,	// (0x00053f23) fep_china_uni_candidate_pane_g1

0xbf88,	// (0x000556ce) fep_china_uni_candidate_pane_g2

0xbf90,	// (0x000556d6) fep_china_uni_candidate_pane_g3

0xa7e5,	// (0x00053f2b) fep_china_uni_candidate_pane_g4

0x0003,

0xf71d,	// (0x00058e63) fep_china_uni_candidate_pane_g

0x9431,	// (0x00052b77) fep_entry_item_pane_g1

0xbf98,	// (0x000556de) fep_entry_item_pane_t1_ParamLimits

0xbf98,	// (0x000556de) fep_entry_item_pane_t1

0xbfae,	// (0x000556f4) fep_candidate_item_pane_t1_ParamLimits

0xbfae,	// (0x000556f4) fep_candidate_item_pane_t1

0xbfc3,	// (0x00055709) fep_candidate_item_pane_t2_ParamLimits

0xbfc3,	// (0x00055709) fep_candidate_item_pane_t2

0x0001,

0xf726,	// (0x00058e6c) fep_candidate_item_pane_t_ParamLimits

0xf726,	// (0x00058e6c) fep_candidate_item_pane_t

0x97bc,	// (0x00052f02) list_highlight_pane_cp31_ParamLimits

0x97bc,	// (0x00052f02) list_highlight_pane_cp31

0xbfd5,	// (0x0005571b) level_1_signal_lsc

0xbfde,	// (0x00055724) level_2_signal_lsc

0xbfe7,	// (0x0005572d) level_3_signal_lsc

0xbff0,	// (0x00055736) level_4_signal_lsc

0xbff9,	// (0x0005573f) level_5_signal_lsc

0xc002,	// (0x00055748) level_6_signal_lsc

0xc00b,	// (0x00055751) level_7_signal_lsc

0xc00b,	// (0x00055751) level_1_battery_lsc

0xc014,	// (0x0005575a) level_2_battery_lsc

0xc01d,	// (0x00055763) level_3_battery_lsc

0xc026,	// (0x0005576c) level_4_battery_lsc

0xc02f,	// (0x00055775) level_5_battery_lsc

0xc038,	// (0x0005577e) level_6_battery_lsc

0xbfd5,	// (0x0005571b) level_7_battery_lsc

0xc041,	// (0x00055787) scroll_handle_focus_pane_g1

0xc04a,	// (0x00055790) scroll_handle_focus_pane_g2

0xc053,	// (0x00055799) scroll_handle_focus_pane_g3

0x0002,

0xf72b,	// (0x00058e71) scroll_handle_focus_pane_g

0x9190,	// (0x000528d6) list_single_2graphic_pane_g1_ParamLimits

0x9190,	// (0x000528d6) list_single_2graphic_pane_g1

0xa070,	// (0x000537b6) list_single_2graphic_pane_g2_ParamLimits

0xa070,	// (0x000537b6) list_single_2graphic_pane_g2

0xf378,	// (0x00058abe) list_single_2graphic_pane_g3_ParamLimits

0xf378,	// (0x00058abe) list_single_2graphic_pane_g3

0x919c,	// (0x000528e2) list_single_2graphic_pane_g4_ParamLimits

0x919c,	// (0x000528e2) list_single_2graphic_pane_g4

0x0003,

0xf732,	// (0x00058e78) list_single_2graphic_pane_g_ParamLimits

0xf732,	// (0x00058e78) list_single_2graphic_pane_g

0x91a8,	// (0x000528ee) list_single_2graphic_pane_t1_ParamLimits

0x91a8,	// (0x000528ee) list_single_2graphic_pane_t1

0xa7ed,	// (0x00053f33) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa7ed,	// (0x00053f33) list_double2_graphic_large_graphic_pane_g1

0x8e40,	// (0x00052586) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x8e40,	// (0x00052586) list_double2_graphic_large_graphic_pane_g2

0xa095,	// (0x000537db) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xa095,	// (0x000537db) list_double2_graphic_large_graphic_pane_g3

0x91d6,	// (0x0005291c) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x91d6,	// (0x0005291c) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf73b,	// (0x00058e81) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf73b,	// (0x00058e81) list_double2_graphic_large_graphic_pane_g

0x91e2,	// (0x00052928) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x91e2,	// (0x00052928) list_double2_graphic_large_graphic_pane_t1

0x91f8,	// (0x0005293e) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x91f8,	// (0x0005293e) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf744,	// (0x00058e8a) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf744,	// (0x00058e8a) list_double2_graphic_large_graphic_pane_t

0xa872,	// (0x00053fb8) popup_fast_swap_window_ParamLimits

0xa872,	// (0x00053fb8) popup_fast_swap_window

0xa88e,	// (0x00053fd4) popup_side_volume_key_window

0xe1fa,	// (0x00057940) stacon_top_pane

0xe204,	// (0x0005794a) status_pane_ParamLimits

0xe204,	// (0x0005794a) status_pane

0xa8a8,	// (0x00053fee) status_small_pane

0x9521,	// (0x00052c67) control_pane

0x9521,	// (0x00052c67) stacon_bottom_pane

0xa0f5,	// (0x0005383b) scroll_pane_cp121

0xa0ec,	// (0x00053832) set_content_pane

0xa7ff,	// (0x00053f45) bg_active_tab_pane_g1_cp1

0xa808,	// (0x00053f4e) bg_active_tab_pane_g2_cp1

0xa811,	// (0x00053f57) bg_active_tab_pane_g3_cp1

0xa7ff,	// (0x00053f45) bg_passive_tab_pane_g1_cp1

0xa808,	// (0x00053f4e) bg_passive_tab_pane_g2_cp1

0xa811,	// (0x00053f57) bg_passive_tab_pane_g3_cp1

0xa81a,	// (0x00053f60) bg_active_tab_pane_g1_cp2

0xa808,	// (0x00053f4e) bg_active_tab_pane_g2_cp2

0xa823,	// (0x00053f69) bg_active_tab_pane_g3_cp2

0xa81a,	// (0x00053f60) bg_passive_tab_pane_g1_cp2

0xa808,	// (0x00053f4e) bg_passive_tab_pane_g2_cp2

0xa823,	// (0x00053f69) bg_passive_tab_pane_g3_cp2

0xa82c,	// (0x00053f72) bg_active_tab_pane_g1_cp3

0xa808,	// (0x00053f4e) bg_active_tab_pane_g2_cp3

0xa835,	// (0x00053f7b) bg_active_tab_pane_g3_cp3

0xa82c,	// (0x00053f72) bg_passive_tab_pane_g1_cp3

0xa808,	// (0x00053f4e) bg_passive_tab_pane_g2_cp3

0xa835,	// (0x00053f7b) bg_passive_tab_pane_g3_cp3

0xa83e,	// (0x00053f84) bg_active_tab_pane_g1_cp4

0xa808,	// (0x00053f4e) bg_active_tab_pane_g2_cp4

0xa849,	// (0x00053f8f) bg_active_tab_pane_g3_cp4

0xa83e,	// (0x00053f84) bg_passive_tab_pane_g1_cp4

0xa808,	// (0x00053f4e) bg_passive_tab_pane_g2_cp4

0xa849,	// (0x00053f8f) bg_passive_tab_pane_g3_cp4

0xa854,	// (0x00053f9a) bg_active_tab_pane_g1_cp5

0xa808,	// (0x00053f4e) bg_active_tab_pane_g2_cp5

0xa85d,	// (0x00053fa3) bg_active_tab_pane_g3_cp5

0xa854,	// (0x00053f9a) bg_passive_tab_pane_g1_cp5

0xa808,	// (0x00053f4e) bg_passive_tab_pane_g2_cp5

0xa85d,	// (0x00053fa3) bg_passive_tab_pane_g3_cp5

0x44ca,	// (0x0004dc10) list_set_graphic_pane_ParamLimits

0x44ca,	// (0x0004dc10) list_set_graphic_pane

0x9521,	// (0x00052c67) bg_set_opt_pane_cp4

0xe18b,	// (0x000578d1) list_set_graphic_pane_g1_ParamLimits

0xe18b,	// (0x000578d1) list_set_graphic_pane_g1

0xe197,	// (0x000578dd) list_set_graphic_pane_g2_ParamLimits

0xe197,	// (0x000578dd) list_set_graphic_pane_g2

0x0001,

0xf749,	// (0x00058e8f) list_set_graphic_pane_g_ParamLimits

0xf749,	// (0x00058e8f) list_set_graphic_pane_g

0x0009,

0xface,	// (0x00059214) volume_small_pane_cp_g

0xa866,	// (0x00053fac) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa866,	// (0x00053fac) list_double2_large_graphic_pane_g1_cp2

0xe1b9,	// (0x000578ff) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xe1b9,	// (0x000578ff) list_double2_large_graphic_pane_g2_cp2

0xe1ca,	// (0x00057910) list_double2_large_graphic_pane_g3_cp2

0xe1d2,	// (0x00057918) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xe1d2,	// (0x00057918) list_double2_large_graphic_pane_t1_cp2

0xe1e8,	// (0x0005792e) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xe1e8,	// (0x0005792e) list_double2_large_graphic_pane_t2_cp2

0xc8f0,	// (0x00056036) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xc8f0,	// (0x00056036) list_double_large_graphic_pane_g1_cp2

0x3ad7,	// (0x0004d21d) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x3ad7,	// (0x0004d21d) list_double_large_graphic_pane_g2_cp2

0xe314,	// (0x00057a5a) list_double_large_graphic_pane_g3_cp2

0x3ae8,	// (0x0004d22e) list_double_large_graphic_pane_g4_cp

0x3af0,	// (0x0004d236) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3af0,	// (0x0004d236) list_double_large_graphic_pane_t1_cp2

0x3b07,	// (0x0004d24d) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3b07,	// (0x0004d24d) list_double_large_graphic_pane_t2_cp2

0xe212,	// (0x00057958) list_double2_graphic_pane_g1_cp2_ParamLimits

0xe212,	// (0x00057958) list_double2_graphic_pane_g1_cp2

0xe220,	// (0x00057966) list_double2_graphic_pane_g2_cp2_ParamLimits

0xe220,	// (0x00057966) list_double2_graphic_pane_g2_cp2

0xe231,	// (0x00057977) list_double2_graphic_pane_g3_cp2

0xe23b,	// (0x00057981) list_double2_graphic_pane_t1_cp2_ParamLimits

0xe23b,	// (0x00057981) list_double2_graphic_pane_t1_cp2

0xe251,	// (0x00057997) list_double2_graphic_pane_t2_cp2_ParamLimits

0xe251,	// (0x00057997) list_double2_graphic_pane_t2_cp2

0xc05c,	// (0x000557a2) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc05c,	// (0x000557a2) list_single_number_heading_pane_g1_cp2

0xe263,	// (0x000579a9) list_single_number_heading_pane_g2_cp2

0xe26b,	// (0x000579b1) list_single_number_heading_pane_t1_cp2_ParamLimits

0xe26b,	// (0x000579b1) list_single_number_heading_pane_t1_cp2

0xe281,	// (0x000579c7) list_single_number_heading_pane_t2_cp2_ParamLimits

0xe281,	// (0x000579c7) list_single_number_heading_pane_t2_cp2

0xe293,	// (0x000579d9) list_single_number_heading_pane_t3_cp2_ParamLimits

0xe293,	// (0x000579d9) list_single_number_heading_pane_t3_cp2

0xc05c,	// (0x000557a2) list_single_heading_pane_g1_cp2_ParamLimits

0xc05c,	// (0x000557a2) list_single_heading_pane_g1_cp2

0xe263,	// (0x000579a9) list_single_heading_pane_g2_cp2

0xe26b,	// (0x000579b1) list_single_heading_pane_t1_cp2_ParamLimits

0xe26b,	// (0x000579b1) list_single_heading_pane_t1_cp2

0x38d0,	// (0x0004d016) list_single_heading_pane_t2_cp2_ParamLimits

0x38d0,	// (0x0004d016) list_single_heading_pane_t2_cp2

0x3818,	// (0x0004cf5e) list_double_graphic_pane_g1_cp2_ParamLimits

0x3818,	// (0x0004cf5e) list_double_graphic_pane_g1_cp2

0x3824,	// (0x0004cf6a) list_double_graphic_pane_g2_cp2_ParamLimits

0x3824,	// (0x0004cf6a) list_double_graphic_pane_g2_cp2

0x3833,	// (0x0004cf79) list_double_graphic_pane_g3_cp2

0x383b,	// (0x0004cf81) list_double_graphic_pane_t1_cp2_ParamLimits

0x383b,	// (0x0004cf81) list_double_graphic_pane_t1_cp2

0x3851,	// (0x0004cf97) list_double_graphic_pane_t2_cp2_ParamLimits

0x3851,	// (0x0004cf97) list_double_graphic_pane_t2_cp2

0xe308,	// (0x00057a4e) list_double_number_pane_g1_cp2_ParamLimits

0xe308,	// (0x00057a4e) list_double_number_pane_g1_cp2

0xe314,	// (0x00057a5a) list_double_number_pane_g2_cp2

0x37dc,	// (0x0004cf22) list_double_number_pane_t1_cp2_ParamLimits

0x37dc,	// (0x0004cf22) list_double_number_pane_t1_cp2

0x37f0,	// (0x0004cf36) list_double_number_pane_t2_cp2_ParamLimits

0x37f0,	// (0x0004cf36) list_double_number_pane_t2_cp2

0x3806,	// (0x0004cf4c) list_double_number_pane_t3_cp2_ParamLimits

0x3806,	// (0x0004cf4c) list_double_number_pane_t3_cp2

0x36c5,	// (0x0004ce0b) list_single_graphic_pane_g1_cp2_ParamLimits

0x36c5,	// (0x0004ce0b) list_single_graphic_pane_g1_cp2

0xe364,	// (0x00057aaa) list_single_graphic_pane_g2_cp2_ParamLimits

0xe364,	// (0x00057aaa) list_single_graphic_pane_g2_cp2

0xe370,	// (0x00057ab6) list_single_graphic_pane_g3_cp2

0x369b,	// (0x0004cde1) list_single_graphic_pane_t1_cp2_ParamLimits

0x369b,	// (0x0004cde1) list_single_graphic_pane_t1_cp2

0xe364,	// (0x00057aaa) list_single_number_pane_g1_cp2_ParamLimits

0xe364,	// (0x00057aaa) list_single_number_pane_g1_cp2

0xe370,	// (0x00057ab6) list_single_number_pane_g2_cp2

0x369b,	// (0x0004cde1) list_single_number_pane_t1_cp2_ParamLimits

0x369b,	// (0x0004cde1) list_single_number_pane_t1_cp2

0x36b1,	// (0x0004cdf7) list_single_number_pane_t2_cp2_ParamLimits

0x36b1,	// (0x0004cdf7) list_single_number_pane_t2_cp2

0xe1b9,	// (0x000578ff) list_double2_pane_g1_cp2_ParamLimits

0xe1b9,	// (0x000578ff) list_double2_pane_g1_cp2

0xe1ca,	// (0x00057910) list_double2_pane_g2_cp2

0xe2e0,	// (0x00057a26) list_double2_pane_t1_cp2_ParamLimits

0xe2e0,	// (0x00057a26) list_double2_pane_t1_cp2

0xe2f6,	// (0x00057a3c) list_double2_pane_t2_cp2_ParamLimits

0xe2f6,	// (0x00057a3c) list_double2_pane_t2_cp2

0xe308,	// (0x00057a4e) list_double_pane_g1_cp2_ParamLimits

0xe308,	// (0x00057a4e) list_double_pane_g1_cp2

0xe314,	// (0x00057a5a) list_double_pane_g2_cp2

0xe31c,	// (0x00057a62) list_double_pane_t1_cp2_ParamLimits

0xe31c,	// (0x00057a62) list_double_pane_t1_cp2

0xe332,	// (0x00057a78) list_double_pane_t2_cp2_ParamLimits

0xe332,	// (0x00057a78) list_double_pane_t2_cp2

0xa8b3,	// (0x00053ff9) list_single_pane_cp2_g3

0xe364,	// (0x00057aaa) list_single_pane_g1_cp2_ParamLimits

0xe364,	// (0x00057aaa) list_single_pane_g1_cp2

0xe370,	// (0x00057ab6) list_single_pane_g2_cp2

0xe378,	// (0x00057abe) list_single_pane_t1_cp2_ParamLimits

0xe378,	// (0x00057abe) list_single_pane_t1_cp2

0xa8bb,	// (0x00054001) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa8bb,	// (0x00054001) list_single_large_graphic_pane_g1_cp2

0xe390,	// (0x00057ad6) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xe390,	// (0x00057ad6) list_single_large_graphic_pane_g2_cp2

0xe39c,	// (0x00057ae2) list_single_large_graphic_pane_g3_cp2

0xa8c7,	// (0x0005400d) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xa8c7,	// (0x0005400d) list_single_large_graphic_pane_g4_cp1

0xe3a4,	// (0x00057aea) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xe3a4,	// (0x00057aea) list_single_large_graphic_pane_t1_cp2

0x3667,	// (0x0004cdad) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x3667,	// (0x0004cdad) list_single_graphic_heading_pane_g1_cp2

0x3634,	// (0x0004cd7a) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x3634,	// (0x0004cd7a) list_single_graphic_heading_pane_g4_cp2

0xe370,	// (0x00057ab6) list_single_graphic_heading_pane_g5_cp2

0x3673,	// (0x0004cdb9) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x3673,	// (0x0004cdb9) list_single_graphic_heading_pane_t1_cp2

0x3689,	// (0x0004cdcf) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x3689,	// (0x0004cdcf) list_single_graphic_heading_pane_t2_cp2

0x3628,	// (0x0004cd6e) list_single_2graphic_pane_g1_cp2_ParamLimits

0x3628,	// (0x0004cd6e) list_single_2graphic_pane_g1_cp2

0x3634,	// (0x0004cd7a) list_single_2graphic_pane_g2_cp2_ParamLimits

0x3634,	// (0x0004cd7a) list_single_2graphic_pane_g2_cp2

0xe370,	// (0x00057ab6) list_single_2graphic_pane_g3_cp2

0x3645,	// (0x0004cd8b) list_single_2graphic_pane_g4_cp2_ParamLimits

0x3645,	// (0x0004cd8b) list_single_2graphic_pane_g4_cp2

0x3651,	// (0x0004cd97) list_single_2graphic_pane_t1_cp2_ParamLimits

0x3651,	// (0x0004cd97) list_single_2graphic_pane_t1_cp2

0x9431,	// (0x00052b77) list_highlight_pane_g10_cp1

0x3210,	// (0x0004c956) list_highlight_pane_g1_cp1

0x3218,	// (0x0004c95e) list_highlight_pane_g2_cp1

0x3220,	// (0x0004c966) list_highlight_pane_g3_cp1

0x3228,	// (0x0004c96e) list_highlight_pane_g4_cp1

0x3230,	// (0x0004c976) list_highlight_pane_g5_cp1

0x3238,	// (0x0004c97e) list_highlight_pane_g6_cp1

0x3240,	// (0x0004c986) list_highlight_pane_g7_cp1

0x3248,	// (0x0004c98e) list_highlight_pane_g8_cp1

0x3250,	// (0x0004c996) list_highlight_pane_g9_cp1

0xc685,	// (0x00055dcb) form_field_slider_pane_t3

0xc693,	// (0x00055dd9) form_field_slider_pane_t4

0x3154,	// (0x0004c89a) slider_form_pane_ParamLimits

0x3154,	// (0x0004c89a) slider_form_pane

0x9521,	// (0x00052c67) control_abbreviations

0x9521,	// (0x00052c67) control_conventions

0x9521,	// (0x00052c67) control_definitions

0x9521,	// (0x00052c67) format_table_attribute

0xc8c7,	// (0x0005600d) bg_popup_preview_window_pane_g9

0x9521,	// (0x00052c67) format_table_data2

0x9521,	// (0x00052c67) format_table_data3

0x9521,	// (0x00052c67) format_table_data_example

0x0008,

0x9521,	// (0x00052c67) intro_purpose

0xf8d9,	// (0x0005901f) bg_popup_preview_window_pane_g

0x9521,	// (0x00052c67) texts_category

0x9521,	// (0x00052c67) texts_graphics

0xe3ba,	// (0x00057b00) text_digital

0xe3c9,	// (0x00057b0f) text_primary

0xe3d8,	// (0x00057b1e) text_primary_small

0xe3e7,	// (0x00057b2d) text_secondary

0xe3f6,	// (0x00057b3c) text_title

0xcc2c,	// (0x00056372) bg_passive_tab_pane_g1_cp3_srt

0xa808,	// (0x00053f4e) bg_passive_tab_pane_g2_cp3_srt

0xcc35,	// (0x0005637b) bg_passive_tab_pane_g3_cp3_srt

0x9772,	// (0x00052eb8) bg_active_tab_pane_cp3_srt_ParamLimits

0x9772,	// (0x00052eb8) bg_active_tab_pane_cp3_srt

0xcc3e,	// (0x00056384) tabs_4_active_pane_srt_g1

0xcc46,	// (0x0005638c) tabs_4_active_pane_srt_t1_ParamLimits

0xcc46,	// (0x0005638c) tabs_4_active_pane_srt_t1

0xcc2c,	// (0x00056372) bg_active_tab_pane_g1_cp3_copy1

0xa808,	// (0x00053f4e) bg_active_tab_pane_g2_cp3_copy1

0xcc35,	// (0x0005637b) bg_active_tab_pane_g3_cp3_copy1

0x97bc,	// (0x00052f02) tabs_2_long_active_pane_srt_ParamLimits

0x97bc,	// (0x00052f02) tabs_2_long_active_pane_srt

0x97bc,	// (0x00052f02) tabs_2_long_passive_pane_srt_ParamLimits

0x97bc,	// (0x00052f02) tabs_2_long_passive_pane_srt

0x24ca,	// (0x0004bc10) bg_passive_tab_pane_cp4_srt_ParamLimits

0x24ca,	// (0x0004bc10) bg_passive_tab_pane_cp4_srt

0xc9df,	// (0x00056125) bg_passive_tab_pane_g1_cp4_srt

0xa808,	// (0x00053f4e) bg_passive_tab_pane_g2_cp4_srt

0xc9e8,	// (0x0005612e) bg_passive_tab_pane_g3_cp4_srt

0x97bc,	// (0x00052f02) bg_active_tab_pane_cp4_srt_ParamLimits

0x97bc,	// (0x00052f02) bg_active_tab_pane_cp4_srt

0xc9f1,	// (0x00056137) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc9f1,	// (0x00056137) tabs_2_long_active_pane_srt_t1

0xc9df,	// (0x00056125) bg_active_tab_pane_g1_cp4_srt

0xa808,	// (0x00053f4e) bg_active_tab_pane_g2_cp4_srt

0xc9e8,	// (0x0005612e) bg_active_tab_pane_g3_cp4_srt

0x9772,	// (0x00052eb8) tabs_3_long_active_pane_srt_ParamLimits

0x9772,	// (0x00052eb8) tabs_3_long_active_pane_srt

0x9772,	// (0x00052eb8) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x9772,	// (0x00052eb8) tabs_3_long_passive_pane_cp_srt

0x9772,	// (0x00052eb8) tabs_3_long_passive_pane_srt_ParamLimits

0x9772,	// (0x00052eb8) tabs_3_long_passive_pane_srt

0x24ca,	// (0x0004bc10) bg_passive_tab_pane_cp5_srt_ParamLimits

0x24ca,	// (0x0004bc10) bg_passive_tab_pane_cp5_srt

0xa854,	// (0x00053f9a) bg_passive_tab_pane_g1_cp5_srt

0xa808,	// (0x00053f4e) bg_passive_tab_pane_g2_cp5_srt

0xa85d,	// (0x00053fa3) bg_passive_tab_pane_g3_cp5_srt

0x97bc,	// (0x00052f02) bg_active_tab_pane_cp5_srt_ParamLimits

0x97bc,	// (0x00052f02) bg_active_tab_pane_cp5_srt

0xc9c9,	// (0x0005610f) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc9c9,	// (0x0005610f) tabs_3_long_active_pane_srt_t1

0xa854,	// (0x00053f9a) bg_active_tab_pane_g1_cp5_srt

0xa808,	// (0x00053f4e) bg_active_tab_pane_g2_cp5_srt

0xa85d,	// (0x00053fa3) bg_active_tab_pane_g3_cp5_srt

0x3d1b,	// (0x0004d461) navi_text_pane_srt_t1

0x3d13,	// (0x0004d459) navi_icon_pane_srt_g1

0x236c,	// (0x0004bab2) midp_editing_number_pane_srt

0xe405,	// (0x00057b4b) midp_ticker_pane_srt

0x2374,	// (0x0004baba) midp_ticker_pane_srt_g1

0x237c,	// (0x0004bac2) midp_ticker_pane_srt_g2

0x0001,

0xf768,	// (0x00058eae) midp_ticker_pane_srt_g

0x2384,	// (0x0004baca) midp_ticker_pane_srt_t1

0x3d04,	// (0x0004d44a) midp_editing_number_pane_t1_copy1

0xa8e1,	// (0x00054027) listscroll_midp_pane

0xa8e1,	// (0x00054027) midp_form_pane

0xa94c,	// (0x00054092) midp_info_popup_window_ParamLimits

0xa94c,	// (0x00054092) midp_info_popup_window

0xa1af,	// (0x000538f5) bg_popup_sub_pane_cp50_ParamLimits

0xa1af,	// (0x000538f5) bg_popup_sub_pane_cp50

0x2e4c,	// (0x0004c592) listscroll_midp_info_pane_ParamLimits

0x2e4c,	// (0x0004c592) listscroll_midp_info_pane

0x2e2c,	// (0x0004c572) listscroll_form_midp_pane_ParamLimits

0x2e2c,	// (0x0004c572) listscroll_form_midp_pane

0x2e38,	// (0x0004c57e) scroll_bar_cp050

0x2e2c,	// (0x0004c572) list_midp_pane

0xcde8,	// (0x0005652e) signal_pane_g2_cp

0x2d46,	// (0x0004c48c) listscroll_midp_info_pane_t1_ParamLimits

0x2d46,	// (0x0004c48c) listscroll_midp_info_pane_t1

0xc4bf,	// (0x00055c05) listscroll_midp_info_pane_t2_ParamLimits

0xc4bf,	// (0x00055c05) listscroll_midp_info_pane_t2

0xc4fd,	// (0x00055c43) listscroll_midp_info_pane_t3_ParamLimits

0xc4fd,	// (0x00055c43) listscroll_midp_info_pane_t3

0xc537,	// (0x00055c7d) listscroll_midp_info_pane_t4_ParamLimits

0xc537,	// (0x00055c7d) listscroll_midp_info_pane_t4

0x0003,

0xf814,	// (0x00058f5a) listscroll_midp_info_pane_t_ParamLimits

0xf814,	// (0x00058f5a) listscroll_midp_info_pane_t

0xa271,	// (0x000539b7) scroll_pane_cp21

0x2ce6,	// (0x0004c42c) form_midp_field_choice_group_pane

0xc482,	// (0x00055bc8) form_midp_field_text_pane

0x2d2c,	// (0x0004c472) form_midp_field_time_pane

0x2d34,	// (0x0004c47a) form_midp_gauge_slider_pane

0x2d3d,	// (0x0004c483) form_midp_gauge_wait_pane

0x9521,	// (0x00052c67) form_midp_image_pane

0x920a,	// (0x00052950) list_single_midp_pane_ParamLimits

0x920a,	// (0x00052950) list_single_midp_pane

0xc460,	// (0x00055ba6) form_midp_field_text_pane_t1

0x2a65,	// (0x0004c1ab) input_focus_pane_cp050

0x2cd5,	// (0x0004c41b) list_midp_form_text_pane

0x2c6a,	// (0x0004c3b0) form_midp_field_choice_group_pane_t1

0x2c78,	// (0x0004c3be) input_focus_pane_cp051

0x2c8c,	// (0x0004c3d2) list_midp_choice_pane

0x9521,	// (0x00052c67) status_idle_pane

0x2c4e,	// (0x0004c394) form_midp_field_time_pane_t1

0x9431,	// (0x00052b77) wait_anim_pane_g2_copy1

0x2c5c,	// (0x0004c3a2) form_midp_field_time_pane_t2

0x0001,

0x0543,	// (0x00049c89) aid_navinavi_width_2_pane

0xf80f,	// (0x00058f55) form_midp_field_time_pane_t

0x9521,	// (0x00052c67) input_focus_pane_cp052

0x9521,	// (0x00052c67) bg_input_focus_pane_cp040

0x2c0e,	// (0x0004c354) form_midp_gauge_slider_pane_t1

0x2c1c,	// (0x0004c362) form_midp_gauge_slider_pane_t2

0xc444,	// (0x00055b8a) form_midp_gauge_slider_pane_t3

0xc452,	// (0x00055b98) form_midp_gauge_slider_pane_t4

0x0003,

0xf806,	// (0x00058f4c) form_midp_gauge_slider_pane_t

0x2c46,	// (0x0004c38c) form_midp_slider_pane

0x97bc,	// (0x00052f02) bg_input_focus_pane_cp041_ParamLimits

0x97bc,	// (0x00052f02) bg_input_focus_pane_cp041

0x2bdb,	// (0x0004c321) form_midp_gauge_wait_pane_t1_ParamLimits

0x2bdb,	// (0x0004c321) form_midp_gauge_wait_pane_t1

0x2bed,	// (0x0004c333) form_midp_gauge_wait_pane_t2_ParamLimits

0x2bed,	// (0x0004c333) form_midp_gauge_wait_pane_t2

0x0001,

0xf801,	// (0x00058f47) form_midp_gauge_wait_pane_t_ParamLimits

0xf801,	// (0x00058f47) form_midp_gauge_wait_pane_t

0x2bff,	// (0x0004c345) form_midp_wait_pane_ParamLimits

0x2bff,	// (0x0004c345) form_midp_wait_pane

0xc40e,	// (0x00055b54) form_midp_image_pane_g1

0xc417,	// (0x00055b5d) form_midp_image_pane_t1

0xc426,	// (0x00055b6c) form_midp_image_pane_t2

0xc435,	// (0x00055b7b) form_midp_image_pane_t3

0x0002,

0xf7fa,	// (0x00058f40) form_midp_image_pane_t

0x2b9c,	// (0x0004c2e2) list_single_midp_pane_g1

0xef01,	// (0x00058647) list_single_midp_pane_t1

0xc3f9,	// (0x00055b3f) list_midp_form_item_pane_ParamLimits

0xc3f9,	// (0x00055b3f) list_midp_form_item_pane

0x04eb,	// (0x00049c31) list_midp_form_item_pane_t1

0x04fa,	// (0x00049c40) midp_ticker_pane_g1

0x0506,	// (0x00049c4c) midp_ticker_pane_g2

0x0001,

0xf74e,	// (0x00058e94) midp_ticker_pane_g

0x0512,	// (0x00049c58) midp_ticker_pane_t1

0x3f51,	// (0x0004d697) midp_editing_number_pane_t1

0x3f2f,	// (0x0004d675) midp_editing_number_pane

0x3f3e,	// (0x0004d684) midp_ticker_pane

0x3cf4,	// (0x0004d43a) ai_message_heading_pane

0x9521,	// (0x00052c67) bg_popup_window_pane_cp14

0x3cfc,	// (0x0004d442) listscroll_ai_message_pane

0x3c7e,	// (0x0004d3c4) ai_message_heading_pane_g1_ParamLimits

0x3c7e,	// (0x0004d3c4) ai_message_heading_pane_g1

0xc991,	// (0x000560d7) ai_message_heading_pane_g2_ParamLimits

0xc991,	// (0x000560d7) ai_message_heading_pane_g2

0x3c96,	// (0x0004d3dc) ai_message_heading_pane_g3_ParamLimits

0x3c96,	// (0x0004d3dc) ai_message_heading_pane_g3

0x3ca2,	// (0x0004d3e8) ai_message_heading_pane_g4_ParamLimits

0x3ca2,	// (0x0004d3e8) ai_message_heading_pane_g4

0x0003,

0xf93b,	// (0x00059081) ai_message_heading_pane_g_ParamLimits

0xf93b,	// (0x00059081) ai_message_heading_pane_g

0xc99d,	// (0x000560e3) ai_message_heading_pane_t1_ParamLimits

0xc99d,	// (0x000560e3) ai_message_heading_pane_t1

0xc9b7,	// (0x000560fd) ai_message_heading_pane_t2_ParamLimits

0xc9b7,	// (0x000560fd) ai_message_heading_pane_t2

0x0001,

0xf944,	// (0x0005908a) ai_message_heading_pane_t_ParamLimits

0xf944,	// (0x0005908a) ai_message_heading_pane_t

0x3cda,	// (0x0004d420) bg_popup_heading_pane_cp1_ParamLimits

0x3cda,	// (0x0004d420) bg_popup_heading_pane_cp1

0x3c6c,	// (0x0004d3b2) list_ai_message_pane_ParamLimits

0x3c6c,	// (0x0004d3b2) list_ai_message_pane

0xa271,	// (0x000539b7) scroll_pane_cp10

0x3c08,	// (0x0004d34e) list_ai_message_pane_g1

0x3c10,	// (0x0004d356) list_ai_message_pane_g2

0x0001,

0xf918,	// (0x0005905e) list_ai_message_pane_g

0x3c18,	// (0x0004d35e) list_ai_message_pane_t1_ParamLimits

0x3c18,	// (0x0004d35e) list_ai_message_pane_t1

0x3c2d,	// (0x0004d373) list_ai_message_pane_t2_ParamLimits

0x3c2d,	// (0x0004d373) list_ai_message_pane_t2

0x3c42,	// (0x0004d388) list_ai_message_pane_t3_ParamLimits

0x3c42,	// (0x0004d388) list_ai_message_pane_t3

0x3c57,	// (0x0004d39d) list_ai_message_pane_t4_ParamLimits

0x3c57,	// (0x0004d39d) list_ai_message_pane_t4

0x0003,

0xf91d,	// (0x00059063) list_ai_message_pane_t_ParamLimits

0xf91d,	// (0x00059063) list_ai_message_pane_t

0xc96d,	// (0x000560b3) cell_ai_soft_ind_pane_ParamLimits

0xc96d,	// (0x000560b3) cell_ai_soft_ind_pane

0x0524,	// (0x00049c6a) cell_ai_soft_ind_pane_g1_ParamLimits

0x0524,	// (0x00049c6a) cell_ai_soft_ind_pane_g1

0x9521,	// (0x00052c67) grid_highlight_cp1

0x0531,	// (0x00049c77) text_secondary_cp56_ParamLimits

0x0531,	// (0x00049c77) text_secondary_cp56

0x3bc8,	// (0x0004d30e) example_general_pane_ParamLimits

0x3bc8,	// (0x0004d30e) example_general_pane

0x3bd4,	// (0x0004d31a) example_parent_pane_g1_ParamLimits

0x3bd4,	// (0x0004d31a) example_parent_pane_g1

0x3be0,	// (0x0004d326) example_parent_pane_t1_ParamLimits

0x3be0,	// (0x0004d326) example_parent_pane_t1

0xb056,	// (0x0005479c) popup_preview_text_window_ParamLimits

0xb056,	// (0x0005479c) popup_preview_text_window

0xe35c,	// (0x00057aa2) list_single_pane_cp2_g4

0x9bf4,	// (0x0005333a) bg_popup_preview_window_pane_ParamLimits

0x9bf4,	// (0x0005333a) bg_popup_preview_window_pane

0xc8cf,	// (0x00056015) popup_preview_text_window_t1_ParamLimits

0xc8cf,	// (0x00056015) popup_preview_text_window_t1

0x3940,	// (0x0004d086) popup_preview_text_window_t2_ParamLimits

0x3940,	// (0x0004d086) popup_preview_text_window_t2

0x3989,	// (0x0004d0cf) popup_preview_text_window_t3_ParamLimits

0x3989,	// (0x0004d0cf) popup_preview_text_window_t3

0x39ce,	// (0x0004d114) popup_preview_text_window_t4_ParamLimits

0x39ce,	// (0x0004d114) popup_preview_text_window_t4

0x0004,

0xf8ec,	// (0x00059032) popup_preview_text_window_t_ParamLimits

0xf8ec,	// (0x00059032) popup_preview_text_window_t

0x3a4c,	// (0x0004d192) scroll_pane_cp11

0x29f1,	// (0x0004c137) bg_popup_preview_window_pane_g1

0xc88f,	// (0x00055fd5) bg_popup_preview_window_pane_g2

0xc897,	// (0x00055fdd) bg_popup_preview_window_pane_g3

0xc89f,	// (0x00055fe5) bg_popup_preview_window_pane_g4

0xc8a7,	// (0x00055fed) bg_popup_preview_window_pane_g5

0xc8af,	// (0x00055ff5) bg_popup_preview_window_pane_g6

0xc8b7,	// (0x00055ffd) bg_popup_preview_window_pane_g7

0xc8bf,	// (0x00056005) bg_popup_preview_window_pane_g8

0xed28,	// (0x0005846e) aid_popup_width_pane

0xafd2,	// (0x00054718) popup_midp_note_alarm_window_ParamLimits

0xafd2,	// (0x00054718) popup_midp_note_alarm_window

0xa106,	// (0x0005384c) data_form_pane_ParamLimits

0x9065,	// (0x000527ab) form_field_data_pane_g1

0x906f,	// (0x000527b5) form_field_data_pane_t1_ParamLimits

0xa112,	// (0x00053858) input_focus_pane_ParamLimits

0xe0df,	// (0x00057825) data_form_wide_pane_ParamLimits

0xe0f0,	// (0x00057836) form_field_data_wide_pane_g1

0xe0fc,	// (0x00057842) form_field_data_wide_pane_t1_ParamLimits

0x9e95,	// (0x000535db) input_focus_pane_cp6_ParamLimits

0xa21c,	// (0x00053962) input_popup_find_pane_g1_ParamLimits

0xa21c,	// (0x00053962) input_popup_find_pane_g1

0xf4a3,	// (0x00058be9) aid_navi_side_left_pane

0xf4b8,	// (0x00058bfe) aid_navi_side_right_pane

0x330b,	// (0x0004ca51) bg_popup_window_pane_cp30_ParamLimits

0x330b,	// (0x0004ca51) bg_popup_window_pane_cp30

0x3385,	// (0x0004cacb) popup_midp_note_alarm_window_g1_ParamLimits

0x3385,	// (0x0004cacb) popup_midp_note_alarm_window_g1

0x33b5,	// (0x0004cafb) popup_midp_note_alarm_window_t1_ParamLimits

0x33b5,	// (0x0004cafb) popup_midp_note_alarm_window_t1

0xc6d8,	// (0x00055e1e) popup_midp_note_alarm_window_t2_ParamLimits

0xc6d8,	// (0x00055e1e) popup_midp_note_alarm_window_t2

0xc786,	// (0x00055ecc) popup_midp_note_alarm_window_t3_ParamLimits

0xc786,	// (0x00055ecc) popup_midp_note_alarm_window_t3

0xc7ae,	// (0x00055ef4) popup_midp_note_alarm_window_t4_ParamLimits

0xc7ae,	// (0x00055ef4) popup_midp_note_alarm_window_t4

0x354c,	// (0x0004cc92) popup_midp_note_alarm_window_t5_ParamLimits

0x354c,	// (0x0004cc92) popup_midp_note_alarm_window_t5

0x000a,

0xf889,	// (0x00058fcf) popup_midp_note_alarm_window_t_ParamLimits

0xf889,	// (0x00058fcf) popup_midp_note_alarm_window_t

0x35f8,	// (0x0004cd3e) wait_bar_pane_cp1_ParamLimits

0x35f8,	// (0x0004cd3e) wait_bar_pane_cp1

0x9521,	// (0x00052c67) wait_anim_pane_copy1

0x9521,	// (0x00052c67) wait_border_pane_copy1

0x3001,	// (0x0004c747) wait_border_pane_g1_copy1

0xe116,	// (0x0005785c) form_field_popup_pane_g1

0x9089,	// (0x000527cf) form_field_popup_pane_t1_ParamLimits

0xa112,	// (0x00053858) input_focus_pane_cp7_ParamLimits

0xa134,	// (0x0005387a) list_form_pane_ParamLimits

0xe11e,	// (0x00057864) form_field_popup_wide_pane_g1

0xe126,	// (0x0005786c) form_field_popup_wide_pane_t1_ParamLimits

0xa112,	// (0x00053858) input_focus_pane_cp8_ParamLimits

0xa140,	// (0x00053886) list_form_wide_pane_ParamLimits

0xcc9f,	// (0x000563e5) aid_size_cell_graphic_pane

0x9108,	// (0x0005284e) data_form_pane_t1_ParamLimits

0x9232,	// (0x00052978) data_form_wide_pane_t1_ParamLimits

0xc068,	// (0x000557ae) bg_status_flat_pane

0x96ae,	// (0x00052df4) title_pane_t1_ParamLimits

0x973a,	// (0x00052e80) title_pane_t2_ParamLimits

0x9760,	// (0x00052ea6) title_pane_t3_ParamLimits

0xf557,	// (0x00058c9d) title_pane_t_ParamLimits

0xbe54,	// (0x0005559a) level_1_signal_ParamLimits

0xbe61,	// (0x000555a7) level_2_signal_ParamLimits

0xbe6e,	// (0x000555b4) level_3_signal_ParamLimits

0xbe7b,	// (0x000555c1) level_4_signal_ParamLimits

0xbe88,	// (0x000555ce) level_5_signal_ParamLimits

0xbe95,	// (0x000555db) level_6_signal_ParamLimits

0xbea2,	// (0x000555e8) level_7_signal_ParamLimits

0xbe54,	// (0x0005559a) level_1_battery_ParamLimits

0xbe61,	// (0x000555a7) level_2_battery_ParamLimits

0xbe6e,	// (0x000555b4) level_3_battery_ParamLimits

0xbe7b,	// (0x000555c1) level_4_battery_ParamLimits

0xbe88,	// (0x000555ce) level_5_battery_ParamLimits

0xbe95,	// (0x000555db) level_6_battery_ParamLimits

0xbea2,	// (0x000555e8) level_7_battery_ParamLimits

0x3210,	// (0x0004c956) bg_status_flat_pane_g1

0x3218,	// (0x0004c95e) bg_status_flat_pane_g2

0x3220,	// (0x0004c966) bg_status_flat_pane_g3

0x3228,	// (0x0004c96e) bg_status_flat_pane_g4

0x3230,	// (0x0004c976) bg_status_flat_pane_g5

0x3238,	// (0x0004c97e) bg_status_flat_pane_g6

0x3240,	// (0x0004c986) bg_status_flat_pane_g7

0x9788,	// (0x00052ece) tabs_3_active_pane_t1_ParamLimits

0x9788,	// (0x00052ece) tabs_3_passive_pane_t1_ParamLimits

0x97a2,	// (0x00052ee8) tabs_4_active_pane_t1_ParamLimits

0x97a2,	// (0x00052ee8) tabs_4_1_passive_pane_t1_ParamLimits

0xa2b2,	// (0x000539f8) tabs_2_active_pane_t1_ParamLimits

0xa2b2,	// (0x000539f8) tabs_2_passive_pane_t1_ParamLimits

0x97bc,	// (0x00052f02) bg_active_tab_pane_cp4_ParamLimits

0xa2c4,	// (0x00053a0a) tabs_2_long_active_pane_t1_ParamLimits

0x24ca,	// (0x0004bc10) bg_passive_tab_pane_cp4_ParamLimits

0x0e25,	// (0x0004a56b) list_single_midp_graphic_pane_t1_ParamLimits

0x97bc,	// (0x00052f02) bg_active_tab_pane_cp5_ParamLimits

0xa2d7,	// (0x00053a1d) tabs_3_long_active_pane_t1_ParamLimits

0x24ca,	// (0x0004bc10) bg_passive_tab_pane_cp5_ParamLimits

0x0e25,	// (0x0004a56b) list_single_midp_graphic_pane_t1

0xc068,	// (0x000557ae) bg_status_flat_pane_ParamLimits

0x2684,	// (0x0004bdca) indicator_pane_cp2_ParamLimits

0x2684,	// (0x0004bdca) indicator_pane_cp2

0xc1e6,	// (0x0005592c) navi_pane_srt_ParamLimits

0xc1e6,	// (0x0005592c) navi_pane_srt

0x27d3,	// (0x0004bf19) popup_clock_digital_analogue_window_cp1

0x995c,	// (0x000530a2) indicator_pane_t1

0xe405,	// (0x00057b4b) copy_highlight_pane

0xe405,	// (0x00057b4b) cursor_graphics_pane

0xe405,	// (0x00057b4b) graphic_within_text_pane

0xe405,	// (0x00057b4b) link_highlight_pane

0x3a0f,	// (0x0004d155) popup_preview_text_window_t5_ParamLimits

0x3a0f,	// (0x0004d155) popup_preview_text_window_t5

0x054b,	// (0x00049c91) cursor_digital_pane

0x054b,	// (0x00049c91) cursor_primary_pane

0x055c,	// (0x00049ca2) cursor_primary_small_pane

0x0564,	// (0x00049caa) cursor_secondary_pane

0x056c,	// (0x00049cb2) cursor_title_pane

0x054b,	// (0x00049c91) link_highlight_digital_pane

0x0553,	// (0x00049c99) link_highlight_primary_pane

0x055c,	// (0x00049ca2) link_highlight_primary_small_pane

0x0564,	// (0x00049caa) link_highlight_secondary_pane

0x056c,	// (0x00049cb2) link_highlight_title_pane

0x054b,	// (0x00049c91) copy_highlight_digital_pane

0x054b,	// (0x00049c91) copy_highlight_primary_pane

0x055c,	// (0x00049ca2) copy_highlight_primary_small_pane

0x0564,	// (0x00049caa) copy_highlight_secondary_pane

0x056c,	// (0x00049cb2) copy_highlight_title_pane

0x0564,	// (0x00049caa) graphic_text_digital_pane

0x32ae,	// (0x0004c9f4) graphic_text_primary_pane

0x32b7,	// (0x0004c9fd) graphic_text_primary_small_pane

0x055c,	// (0x00049ca2) graphic_text_secondary_pane

0x054b,	// (0x00049c91) graphic_text_title_pane

0xa99d,	// (0x000540e3) cursor_primary_pane_g1

0x32a0,	// (0x0004c9e6) cursor_text_primary_t1

0xc6ce,	// (0x00055e14) cursor_primary_small_pane_g1

0x3292,	// (0x0004c9d8) cursor_text_primary_small_t1

0xc6c4,	// (0x00055e0a) cursor_primary_small_pane_g1_copy1

0x327a,	// (0x0004c9c0) cursor_text_primary_small_t1_copy1

0x3258,	// (0x0004c99e) cursor_text_title_t1

0xc6ba,	// (0x00055e00) cursor_title_pane_g1

0xa99d,	// (0x000540e3) cursor_digital_pane_g1

0x057e,	// (0x00049cc4) cursor_text_digital_t1

0x058c,	// (0x00049cd2) link_highlight_primary_pane_g1

0x3201,	// (0x0004c947) link_highlight_primary_pane_t1

0x058c,	// (0x00049cd2) link_highlight_primary_small_pane_g1

0x0594,	// (0x00049cda) link_highlight_primary_small_pane_t1

0x058c,	// (0x00049cd2) link_highlight_secondary_pane_g1

0x05a3,	// (0x00049ce9) link_highlight_secondary_pane_t1

0x3166,	// (0x0004c8ac) link_highlight_title_pane_g1

0x317d,	// (0x0004c8c3) link_highlight_title_pane_t1

0x3166,	// (0x0004c8ac) link_highlight_digital_pane_g1

0x316e,	// (0x0004c8b4) link_highlight_digital_pane_t1

0x3020,	// (0x0004c766) copy_highlight_primary_pane_g1

0x3046,	// (0x0004c78c) copy_highlight_primary_pane_t1

0x3020,	// (0x0004c766) copy_highlight_primary_small_pane_g1

0x3037,	// (0x0004c77d) copy_highlight_primary_small_pane_t1

0x05b2,	// (0x00049cf8) copy_highlight_secondary_pane_g1

0x05ba,	// (0x00049d00) copy_highlight_secondary_pane_t1

0x3020,	// (0x0004c766) copy_highlight_title_pane_g1

0x3028,	// (0x0004c76e) copy_highlight_title_pane_t1

0x3020,	// (0x0004c766) copy_highlight_digital_pane_g1

0x426e,	// (0x0004d9b4) copy_highlight_digital_pane_t1

0x41c2,	// (0x0004d908) graphic_text_primary_pane_g1

0x4252,	// (0x0004d998) graphic_text_primary_pane_t1

0x4260,	// (0x0004d9a6) graphic_text_primary_pane_t2

0x0001,

0xf9b8,	// (0x000590fe) graphic_text_primary_pane_t

0x422e,	// (0x0004d974) graphic_text_primary_small_pane_g1

0x4236,	// (0x0004d97c) graphic_text_primary_small_pane_t1

0x4244,	// (0x0004d98a) graphic_text_primary_small_pane_t2

0x0001,

0xf9b3,	// (0x000590f9) graphic_text_primary_small_pane_t

0x420a,	// (0x0004d950) graphic_text_secondary_pane_g1

0x4212,	// (0x0004d958) graphic_text_secondary_pane_t1

0x4220,	// (0x0004d966) graphic_text_secondary_pane_t2

0x0001,

0xf9ae,	// (0x000590f4) graphic_text_secondary_pane_t

0x41e6,	// (0x0004d92c) graphic_text_title_pane_g1

0x41ee,	// (0x0004d934) graphic_text_title_pane_t1

0x41fc,	// (0x0004d942) graphic_text_title_pane_t2

0x0001,

0xf9a9,	// (0x000590ef) graphic_text_title_pane_t

0x41c2,	// (0x0004d908) graphic_text_digital_pane_g1

0x41ca,	// (0x0004d910) graphic_text_digital_pane_t1

0x41d8,	// (0x0004d91e) graphic_text_digital_pane_t2

0x0001,

0xf9a4,	// (0x000590ea) graphic_text_digital_pane_t

0x97bc,	// (0x00052f02) navi_icon_pane_srt_ParamLimits

0x97bc,	// (0x00052f02) navi_icon_pane_srt

0x9521,	// (0x00052c67) navi_midp_pane_srt

0x9521,	// (0x00052c67) navi_navi_pane_srt

0x97bc,	// (0x00052f02) navi_text_pane_srt_ParamLimits

0x97bc,	// (0x00052f02) navi_text_pane_srt

0x418d,	// (0x0004d8d3) navi_navi_icon_text_pane_srt

0x4195,	// (0x0004d8db) navi_navi_pane_srt_g1_ParamLimits

0x4195,	// (0x0004d8db) navi_navi_pane_srt_g1

0x41a7,	// (0x0004d8ed) navi_navi_pane_srt_g2_ParamLimits

0x41a7,	// (0x0004d8ed) navi_navi_pane_srt_g2

0x0001,

0xf99f,	// (0x000590e5) navi_navi_pane_srt_g_ParamLimits

0xf99f,	// (0x000590e5) navi_navi_pane_srt_g

0x41b9,	// (0x0004d8ff) navi_navi_tabs_pane_srt

0x418d,	// (0x0004d8d3) navi_navi_text_pane_srt

0x418d,	// (0x0004d8d3) navi_navi_volume_pane_srt

0x417e,	// (0x0004d8c4) navi_navi_text_pane_srt_t1

0x1259,	// (0x0004a99f) navi_navi_volume_pane_srt_g1

0x1261,	// (0x0004a9a7) volume_small_pane_srt_ParamLimits

0x1261,	// (0x0004a9a7) volume_small_pane_srt

0x05c9,	// (0x00049d0f) volume_small_pane_srt_g1_ParamLimits

0x05c9,	// (0x00049d0f) volume_small_pane_srt_g1

0x05d9,	// (0x00049d1f) volume_small_pane_srt_g2_ParamLimits

0x05d9,	// (0x00049d1f) volume_small_pane_srt_g2

0x05ea,	// (0x00049d30) volume_small_pane_srt_g3_ParamLimits

0x05ea,	// (0x00049d30) volume_small_pane_srt_g3

0x05fb,	// (0x00049d41) volume_small_pane_srt_g4_ParamLimits

0x05fb,	// (0x00049d41) volume_small_pane_srt_g4

0x060c,	// (0x00049d52) volume_small_pane_srt_g5_ParamLimits

0x060c,	// (0x00049d52) volume_small_pane_srt_g5

0x061d,	// (0x00049d63) volume_small_pane_srt_g6_ParamLimits

0x061d,	// (0x00049d63) volume_small_pane_srt_g6

0x062e,	// (0x00049d74) volume_small_pane_srt_g7_ParamLimits

0x062e,	// (0x00049d74) volume_small_pane_srt_g7

0x063f,	// (0x00049d85) volume_small_pane_srt_g8_ParamLimits

0x063f,	// (0x00049d85) volume_small_pane_srt_g8

0x0650,	// (0x00049d96) volume_small_pane_srt_g9_ParamLimits

0x0650,	// (0x00049d96) volume_small_pane_srt_g9

0x0661,	// (0x00049da7) volume_small_pane_srt_g10_ParamLimits

0x0661,	// (0x00049da7) volume_small_pane_srt_g10

0x0009,

0xf753,	// (0x00058e99) volume_small_pane_srt_g_ParamLimits

0xf753,	// (0x00058e99) volume_small_pane_srt_g

0x9c9d,	// (0x000533e3) query_popup_data_pane_cp2

0x4164,	// (0x0004d8aa) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x4164,	// (0x0004d8aa) navi_navi_icon_text_pane_srt_t1

0x32ae,	// (0x0004c9f4) navi_tabs_2_long_pane_srt

0x32ae,	// (0x0004c9f4) navi_tabs_2_pane_srt

0x32ae,	// (0x0004c9f4) navi_tabs_3_long_pane_srt

0x32ae,	// (0x0004c9f4) navi_tabs_3_pane_srt

0x32ae,	// (0x0004c9f4) navi_tabs_4_pane_srt

0xb65d,	// (0x00054da3) tabs_2_active_pane_srt_ParamLimits

0xb65d,	// (0x00054da3) tabs_2_active_pane_srt

0xb66d,	// (0x00054db3) tabs_2_passive_pane_srt_ParamLimits

0xb66d,	// (0x00054db3) tabs_2_passive_pane_srt

0x2a65,	// (0x0004c1ab) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2a65,	// (0x0004c1ab) bg_passive_tab_pane_cp1_srt

0xcce9,	// (0x0005642f) bg_passive_tab_pane_g1_cp1_srt

0xa808,	// (0x00053f4e) bg_passive_tab_pane_g2_cp1_srt

0xccf2,	// (0x00056438) bg_passive_tab_pane_g3_cp1_srt

0x9772,	// (0x00052eb8) bg_active_tab_pane_cp1_srt_ParamLimits

0x9772,	// (0x00052eb8) bg_active_tab_pane_cp1_srt

0xccfb,	// (0x00056441) tabs_2_active_pane_srt_g1

0xcd03,	// (0x00056449) tabs_2_active_pane_srt_t1_ParamLimits

0xcd03,	// (0x00056449) tabs_2_active_pane_srt_t1

0xcce9,	// (0x0005642f) bg_active_tab_pane_g1_cp1_srt

0xa808,	// (0x00053f4e) bg_active_tab_pane_g2_cp1_srt

0xccf2,	// (0x00056438) bg_active_tab_pane_g3_cp1_srt

0xb62a,	// (0x00054d70) tabs_3_active_pane_srt_ParamLimits

0xb62a,	// (0x00054d70) tabs_3_active_pane_srt

0xb63b,	// (0x00054d81) tabs_3_passive_pane_cp_srt_ParamLimits

0xb63b,	// (0x00054d81) tabs_3_passive_pane_cp_srt

0xb64c,	// (0x00054d92) tabs_3_passive_pane_srt_ParamLimits

0xb64c,	// (0x00054d92) tabs_3_passive_pane_srt

0x2a65,	// (0x0004c1ab) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2a65,	// (0x0004c1ab) bg_passive_tab_pane_cp2_srt

0xa9a7,	// (0x000540ed) bg_passive_tab_pane_g1_cp2_srt

0xa808,	// (0x00053f4e) bg_passive_tab_pane_g2_cp2_srt

0xa9b0,	// (0x000540f6) bg_passive_tab_pane_g3_cp2_srt

0x9772,	// (0x00052eb8) bg_active_tab_pane_cp2_srt_ParamLimits

0x9772,	// (0x00052eb8) bg_active_tab_pane_cp2_srt

0xcccb,	// (0x00056411) tabs_3_active_pane_srt_g1

0xccd3,	// (0x00056419) tabs_3_active_pane_srt_t1_ParamLimits

0xccd3,	// (0x00056419) tabs_3_active_pane_srt_t1

0xa9a7,	// (0x000540ed) bg_active_tab_pane_g1_cp2_srt

0xa808,	// (0x00053f4e) bg_active_tab_pane_g2_cp2_srt

0xa9b0,	// (0x000540f6) bg_active_tab_pane_g3_cp2_srt

0x11be,	// (0x0004a904) tabs_4_active_pane_srt_ParamLimits

0x11be,	// (0x0004a904) tabs_4_active_pane_srt

0x11d0,	// (0x0004a916) tabs_4_passive_pane_cp2_srt_ParamLimits

0x11d0,	// (0x0004a916) tabs_4_passive_pane_cp2_srt

0x07d9,	// (0x00049f1f) aid_size_cell_toolbar

0x3dac,	// (0x0004d4f2) main_idle_act_pane_ParamLimits

0xae14,	// (0x0005455a) popup_large_graphic_colour_window_ParamLimits

0xb308,	// (0x00054a4e) popup_toolbar_window_ParamLimits

0xb308,	// (0x00054a4e) popup_toolbar_window

0x3f60,	// (0x0004d6a6) list_single_graphic_2heading_pane_ParamLimits

0x3f60,	// (0x0004d6a6) list_single_graphic_2heading_pane

0xa484,	// (0x00053bca) aid_size_cell_apps_grid_lsc_pane

0xa496,	// (0x00053bdc) aid_size_cell_apps_grid_prt_pane

0x24ca,	// (0x0004bc10) bg_wml_button_pane_cp1_ParamLimits

0x24ca,	// (0x0004bc10) bg_wml_button_pane_cp1

0xc460,	// (0x00055ba6) form_midp_field_text_pane_t1_ParamLimits

0x2a65,	// (0x0004c1ab) input_focus_pane_cp050_ParamLimits

0x2cd5,	// (0x0004c41b) list_midp_form_text_pane_ParamLimits

0x2c78,	// (0x0004c3be) input_focus_pane_cp051_ParamLimits

0x2c8c,	// (0x0004c3d2) list_midp_choice_pane_ParamLimits

0xc3c5,	// (0x00055b0b) list_single_2graphic_pane_cp3_ParamLimits

0xc3c5,	// (0x00055b0b) list_single_2graphic_pane_cp3

0xc3d9,	// (0x00055b1f) list_single_midp_graphic_pane_ParamLimits

0xc3d9,	// (0x00055b1f) list_single_midp_graphic_pane

0xe41d,	// (0x00057b63) list_single_graphic_2heading_pane_g1_ParamLimits

0xe41d,	// (0x00057b63) list_single_graphic_2heading_pane_g1

0xe429,	// (0x00057b6f) list_single_graphic_2heading_pane_g4_ParamLimits

0xe429,	// (0x00057b6f) list_single_graphic_2heading_pane_g4

0xe435,	// (0x00057b7b) list_single_graphic_2heading_pane_g5_ParamLimits

0xe435,	// (0x00057b7b) list_single_graphic_2heading_pane_g5

0x0002,

0xf7a6,	// (0x00058eec) list_single_graphic_2heading_pane_g_ParamLimits

0xf7a6,	// (0x00058eec) list_single_graphic_2heading_pane_g

0xe441,	// (0x00057b87) list_single_graphic_2heading_pane_t1_ParamLimits

0xe441,	// (0x00057b87) list_single_graphic_2heading_pane_t1

0xe455,	// (0x00057b9b) list_single_graphic_2heading_pane_t2_ParamLimits

0xe455,	// (0x00057b9b) list_single_graphic_2heading_pane_t2

0xe46f,	// (0x00057bb5) list_single_graphic_2heading_pane_t3_ParamLimits

0xe46f,	// (0x00057bb5) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ad,	// (0x00058ef3) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ad,	// (0x00058ef3) list_single_graphic_2heading_pane_t

0x292f,	// (0x0004c075) bg_popup_sub_pane_cp2

0x2959,	// (0x0004c09f) grid_toobar_pane

0x0da8,	// (0x0004a4ee) cell_toolbar_pane_ParamLimits

0x0da8,	// (0x0004a4ee) cell_toolbar_pane

0x2995,	// (0x0004c0db) cell_toolbar_pane_g1_ParamLimits

0x2995,	// (0x0004c0db) cell_toolbar_pane_g1

0xc385,	// (0x00055acb) cell_toolbar_pane_g2_ParamLimits

0xc385,	// (0x00055acb) cell_toolbar_pane_g2

0x0001,

0xf7b4,	// (0x00058efa) cell_toolbar_pane_g_ParamLimits

0xf7b4,	// (0x00058efa) cell_toolbar_pane_g

0x29cb,	// (0x0004c111) grid_highlight_pane_cp2_ParamLimits

0x29cb,	// (0x0004c111) grid_highlight_pane_cp2

0x29e5,	// (0x0004c12b) toolbar_button_pane

0x29f1,	// (0x0004c137) toolbar_button_pane_g1

0x29f9,	// (0x0004c13f) toolbar_button_pane_g2

0x2a01,	// (0x0004c147) toolbar_button_pane_g3

0x2a09,	// (0x0004c14f) toolbar_button_pane_g4

0x2a11,	// (0x0004c157) toolbar_button_pane_g5

0x2a19,	// (0x0004c15f) toolbar_button_pane_g6

0x2a21,	// (0x0004c167) toolbar_button_pane_g7

0x2a29,	// (0x0004c16f) toolbar_button_pane_g8

0x2a31,	// (0x0004c177) toolbar_button_pane_g9

0x0009,

0xf7b9,	// (0x00058eff) toolbar_button_pane_g

0x0de0,	// (0x0004a526) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0de0,	// (0x0004a526) list_single_2graphic_pane_g1_cp3

0xb499,	// (0x00054bdf) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb499,	// (0x00054bdf) list_single_2graphic_pane_g2_cp3

0xe263,	// (0x000579a9) list_single_2graphic_pane_g3_cp3

0x0dfd,	// (0x0004a543) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0dfd,	// (0x0004a543) list_single_2graphic_pane_g4_cp3

0xb4aa,	// (0x00054bf0) list_single_2graphic_pane_t1_cp3_ParamLimits

0xb4aa,	// (0x00054bf0) list_single_2graphic_pane_t1_cp3

0xc05c,	// (0x000557a2) list_single_midp_graphic_pane_g2_ParamLimits

0xc05c,	// (0x000557a2) list_single_midp_graphic_pane_g2

0xe40d,	// (0x00057b53) aid_zoom_text_primary

0x07e1,	// (0x00049f27) aid_zoom_text_secondary

0xaa07,	// (0x0005414d) status_small_pane_g7_ParamLimits

0xaa07,	// (0x0005414d) status_small_pane_g7

0xaa2a,	// (0x00054170) status_small_pane_t1_ParamLimits

0x967e,	// (0x00052dc4) title_pane_g2

0x0003,

0xf54e,	// (0x00058c94) title_pane_g

0x9d41,	// (0x00053487) aid_size_cell_colour_1_pane_ParamLimits

0x9d41,	// (0x00053487) aid_size_cell_colour_1_pane

0x9d55,	// (0x0005349b) aid_size_cell_colour_2_pane_ParamLimits

0x9d55,	// (0x0005349b) aid_size_cell_colour_2_pane

0x9d69,	// (0x000534af) aid_size_cell_colour_3_pane_ParamLimits

0x9d69,	// (0x000534af) aid_size_cell_colour_3_pane

0x9d7d,	// (0x000534c3) aid_size_cell_colour_4_pane_ParamLimits

0x9d7d,	// (0x000534c3) aid_size_cell_colour_4_pane

0xf3e0,	// (0x00058b26) title_pane_stacon_g1_ParamLimits

0xf3e0,	// (0x00058b26) title_pane_stacon_g1

0x309d,	// (0x0004c7e3) popup_note_wait_window_g3_ParamLimits

0x309d,	// (0x0004c7e3) popup_note_wait_window_g3

0x3113,	// (0x0004c859) popup_note_wait_window_t5_ParamLimits

0x3113,	// (0x0004c859) popup_note_wait_window_t5

0x9521,	// (0x00052c67) main_feb_china_hwr_fs_writing_pane

0xac96,	// (0x000543dc) popup_feb_china_hwr_fs_window_ParamLimits

0xac96,	// (0x000543dc) popup_feb_china_hwr_fs_window

0xb4c6,	// (0x00054c0c) aid_size_cell_hwr_fs_ParamLimits

0xb4c6,	// (0x00054c0c) aid_size_cell_hwr_fs

0x2a65,	// (0x0004c1ab) bg_popup_sub_pane_cp3_ParamLimits

0x2a65,	// (0x0004c1ab) bg_popup_sub_pane_cp3

0xb4db,	// (0x00054c21) grid_hwr_fs_pane_ParamLimits

0xb4db,	// (0x00054c21) grid_hwr_fs_pane

0x0e80,	// (0x0004a5c6) linegrid_hwr_fs_pane_ParamLimits

0x0e80,	// (0x0004a5c6) linegrid_hwr_fs_pane

0xb4f3,	// (0x00054c39) cell_hwr_fs_pane_ParamLimits

0xb4f3,	// (0x00054c39) cell_hwr_fs_pane

0x2a71,	// (0x0004c1b7) linegrid_hwr_fs_pane_g1_ParamLimits

0x2a71,	// (0x0004c1b7) linegrid_hwr_fs_pane_g1

0xc399,	// (0x00055adf) linegrid_hwr_fs_pane_g2_ParamLimits

0xc399,	// (0x00055adf) linegrid_hwr_fs_pane_g2

0x2a8f,	// (0x0004c1d5) linegrid_hwr_fs_pane_g3_ParamLimits

0x2a8f,	// (0x0004c1d5) linegrid_hwr_fs_pane_g3

0xb519,	// (0x00054c5f) linegrid_hwr_fs_pane_g4_ParamLimits

0xb519,	// (0x00054c5f) linegrid_hwr_fs_pane_g4

0x0ecc,	// (0x0004a612) linegrid_hwr_fs_pane_g5_ParamLimits

0x0ecc,	// (0x0004a612) linegrid_hwr_fs_pane_g5

0x0004,

0xf7df,	// (0x00058f25) linegrid_hwr_fs_pane_g_ParamLimits

0xf7df,	// (0x00058f25) linegrid_hwr_fs_pane_g

0x2a9b,	// (0x0004c1e1) cell_hwr_fs_pane_g1_ParamLimits

0x2a9b,	// (0x0004c1e1) cell_hwr_fs_pane_g1

0x2869,	// (0x0004bfaf) cell_hwr_fs_pane_g2_ParamLimits

0x2869,	// (0x0004bfaf) cell_hwr_fs_pane_g2

0xc3ab,	// (0x00055af1) cell_hwr_fs_pane_g3_ParamLimits

0xc3ab,	// (0x00055af1) cell_hwr_fs_pane_g3

0xc3b8,	// (0x00055afe) cell_hwr_fs_pane_g4_ParamLimits

0xc3b8,	// (0x00055afe) cell_hwr_fs_pane_g4

0x0003,

0xf7ea,	// (0x00058f30) cell_hwr_fs_pane_g_ParamLimits

0xf7ea,	// (0x00058f30) cell_hwr_fs_pane_g

0xb533,	// (0x00054c79) cell_hwr_fs_pane_t1

0x9521,	// (0x00052c67) grid_highlight_pane_cp6

0x9521,	// (0x00052c67) main_idle_act2_pane

0xa258,	// (0x0005399e) aid_inside_area_popup_secondary

0xc7ed,	// (0x00055f33) aid_inside_area_window_primary_ParamLimits

0xc7ed,	// (0x00055f33) aid_inside_area_window_primary

0xcd21,	// (0x00056467) ai2_news_ticker_pane

0x4285,	// (0x0004d9cb) aid_size_cell_ai1_link_ParamLimits

0x4285,	// (0x0004d9cb) aid_size_cell_ai1_link

0xcd29,	// (0x0005646f) popup_ai2_data_window_ParamLimits

0xcd29,	// (0x0005646f) popup_ai2_data_window

0x42b5,	// (0x0004d9fb) popup_ai2_link_window_ParamLimits

0x42b5,	// (0x0004d9fb) popup_ai2_link_window

0x2a65,	// (0x0004c1ab) bg_popup_sub_pane_cp4_ParamLimits

0x2a65,	// (0x0004c1ab) bg_popup_sub_pane_cp4

0x42c9,	// (0x0004da0f) grid_ai2_link_pane_ParamLimits

0x42c9,	// (0x0004da0f) grid_ai2_link_pane

0x42e0,	// (0x0004da26) popup_ai2_link_window_g1_ParamLimits

0x42e0,	// (0x0004da26) popup_ai2_link_window_g1

0x42ec,	// (0x0004da32) popup_ai2_link_window_g2_ParamLimits

0x42ec,	// (0x0004da32) popup_ai2_link_window_g2

0x0001,

0xf9bd,	// (0x00059103) popup_ai2_link_window_g_ParamLimits

0xf9bd,	// (0x00059103) popup_ai2_link_window_g

0x42fb,	// (0x0004da41) ai2_mp_button_pane

0x4303,	// (0x0004da49) ai2_mp_volume_pane

0x2c78,	// (0x0004c3be) bg_popup_sub_pane_cp5_ParamLimits

0x2c78,	// (0x0004c3be) bg_popup_sub_pane_cp5

0x430b,	// (0x0004da51) heading_ai2_gene_pane_ParamLimits

0x430b,	// (0x0004da51) heading_ai2_gene_pane

0x4317,	// (0x0004da5d) list_ai2_gene_pane_ParamLimits

0x4317,	// (0x0004da5d) list_ai2_gene_pane

0x435f,	// (0x0004daa5) cell_ai2_link_pane_ParamLimits

0x435f,	// (0x0004daa5) cell_ai2_link_pane

0x4375,	// (0x0004dabb) cell_ai2_link_pane_g1

0x9521,	// (0x00052c67) grid_highlight_pane_cp7

0x1276,	// (0x0004a9bc) ai2_mp_volume_pane_g1

0x4445,	// (0x0004db8b) ai2_mp_volume_pane_g2

0x43ba,	// (0x0004db00) list_ai2_gene_pane_t1

0x444d,	// (0x0004db93) ai2_mp_volume_pane_g3

0x0002,

0xf9d6,	// (0x0005911c) ai2_mp_volume_pane_g

0xb67d,	// (0x00054dc3) volume_small_pane_cp3

0x4455,	// (0x0004db9b) aid_size_cell_ai2_button

0x445d,	// (0x0004dba3) grid_ai2_button_pane

0x4466,	// (0x0004dbac) cell_ai2_button_pane_ParamLimits

0x4466,	// (0x0004dbac) cell_ai2_button_pane

0x9431,	// (0x00052b77) cell_ai2_button_pane_g1

0x9521,	// (0x00052c67) grid_highlight_pane_cp8

0x4405,	// (0x0004db4b) ai2_gene_pane_t1_ParamLimits

0x4405,	// (0x0004db4b) ai2_gene_pane_t1

0xabf8,	// (0x0005433e) aid_height_parent_landscape

0xca3b,	// (0x00056181) aid_height_set_list

0x3dac,	// (0x0004d4f2) aid_size_parent

0xcc9f,	// (0x000563e5) aid_size_cell_graphic_pane_ParamLimits

0x4327,	// (0x0004da6d) popup_ai2_data_window_g1_ParamLimits

0x4327,	// (0x0004da6d) popup_ai2_data_window_g1

0x4333,	// (0x0004da79) ai2_news_ticker_pane_g1

0x433b,	// (0x0004da81) ai2_news_ticker_pane_g2

0x0001,

0xf9c2,	// (0x00059108) ai2_news_ticker_pane_g

0x4343,	// (0x0004da89) ai2_news_ticker_pane_t1

0x4351,	// (0x0004da97) ai2_news_ticker_pane_t2

0x0001,

0xf9c7,	// (0x0005910d) ai2_news_ticker_pane_t

0x437e,	// (0x0004dac4) heading_ai2_gene_pane_g1

0x4386,	// (0x0004dacc) heading_ai2_gene_pane_t1_ParamLimits

0x4386,	// (0x0004dacc) heading_ai2_gene_pane_t1

0x439b,	// (0x0004dae1) list_highlight_pane_cp6

0x43a3,	// (0x0004dae9) ai2_gene_pane_ParamLimits

0x43a3,	// (0x0004dae9) ai2_gene_pane

0x43c8,	// (0x0004db0e) list_ai2_gene_pane_t2

0x0001,

0xf9cc,	// (0x00059112) list_ai2_gene_pane_t

0x43d6,	// (0x0004db1c) list_highlight_pane_cp8_ParamLimits

0x43d6,	// (0x0004db1c) list_highlight_pane_cp8

0x43e7,	// (0x0004db2d) ai2_gene_pane_g1_ParamLimits

0x43e7,	// (0x0004db2d) ai2_gene_pane_g1

0x43f9,	// (0x0004db3f) ai2_gene_pane_g2_ParamLimits

0x43f9,	// (0x0004db3f) ai2_gene_pane_g2

0x0001,

0xf9d1,	// (0x00059117) ai2_gene_pane_g_ParamLimits

0xf9d1,	// (0x00059117) ai2_gene_pane_g

0xa04d,	// (0x00053793) scroll_pane_cp12

0xabb5,	// (0x000542fb) control_pane_t3_ParamLimits

0xabb5,	// (0x000542fb) control_pane_t3

0xaa1b,	// (0x00054161) status_small_pane_g8_ParamLimits

0xaa1b,	// (0x00054161) status_small_pane_g8

0xad59,	// (0x0005449f) popup_find_window_ParamLimits

0xb00c,	// (0x00054752) popup_note_image_window_ParamLimits

0xe080,	// (0x000577c6) list_double2_graphic_pane_vc_g1_ParamLimits

0xe080,	// (0x000577c6) list_double2_graphic_pane_vc_g1

0xf36c,	// (0x00058ab2) list_double2_graphic_pane_vc_g2_ParamLimits

0xf36c,	// (0x00058ab2) list_double2_graphic_pane_vc_g2

0xf378,	// (0x00058abe) list_double2_graphic_pane_vc_g3_ParamLimits

0xf378,	// (0x00058abe) list_double2_graphic_pane_vc_g3

0x0002,

0xf5c1,	// (0x00058d07) list_double2_graphic_pane_vc_g_ParamLimits

0xf5c1,	// (0x00058d07) list_double2_graphic_pane_vc_g

0xe08c,	// (0x000577d2) list_double2_graphic_pane_vc_t1_ParamLimits

0xe08c,	// (0x000577d2) list_double2_graphic_pane_vc_t1

0xf36c,	// (0x00058ab2) list_single_heading_pane_vc_g1_ParamLimits

0xf36c,	// (0x00058ab2) list_single_heading_pane_vc_g1

0xf378,	// (0x00058abe) list_single_heading_pane_vc_g2_ParamLimits

0xf378,	// (0x00058abe) list_single_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x00058d18) list_single_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x00058d18) list_single_heading_pane_vc_g

0xe487,	// (0x00057bcd) list_single_heading_pane_vc_t1_ParamLimits

0xe487,	// (0x00057bcd) list_single_heading_pane_vc_t1

0xe49d,	// (0x00057be3) list_single_heading_pane_vc_t2_ParamLimits

0xe49d,	// (0x00057be3) list_single_heading_pane_vc_t2

0x0001,

0xf7ce,	// (0x00058f14) list_single_heading_pane_vc_t_ParamLimits

0xf7ce,	// (0x00058f14) list_single_heading_pane_vc_t

0x0e3b,	// (0x0004a581) list_setting_number_pane_vc_g1_ParamLimits

0x0e3b,	// (0x0004a581) list_setting_number_pane_vc_g1

0x0e47,	// (0x0004a58d) list_setting_number_pane_vc_g2_ParamLimits

0x0e47,	// (0x0004a58d) list_setting_number_pane_vc_g2

0x0001,

0xf7d3,	// (0x00058f19) list_setting_number_pane_vc_g_ParamLimits

0xf7d3,	// (0x00058f19) list_setting_number_pane_vc_g

0xe4af,	// (0x00057bf5) list_setting_number_pane_vc_t1_ParamLimits

0xe4af,	// (0x00057bf5) list_setting_number_pane_vc_t1

0xeeab,	// (0x000585f1) list_setting_number_pane_vc_t2_ParamLimits

0xeeab,	// (0x000585f1) list_setting_number_pane_vc_t2

0xeec7,	// (0x0005860d) list_setting_number_pane_vc_t3_ParamLimits

0xeec7,	// (0x0005860d) list_setting_number_pane_vc_t3

0x0002,

0xf7d8,	// (0x00058f1e) list_setting_number_pane_vc_t_ParamLimits

0xf7d8,	// (0x00058f1e) list_setting_number_pane_vc_t

0xeef1,	// (0x00058637) set_value_pane_vc_ParamLimits

0xeef1,	// (0x00058637) set_value_pane_vc

0x3f60,	// (0x0004d6a6) list_double2_graphic_pane_vc_ParamLimits

0x3f60,	// (0x0004d6a6) list_double2_graphic_pane_vc

0x3f60,	// (0x0004d6a6) list_double2_large_graphic_pane_vc_ParamLimits

0x3f60,	// (0x0004d6a6) list_double2_large_graphic_pane_vc

0x3f60,	// (0x0004d6a6) list_double2_pane_vc_ParamLimits

0x3f60,	// (0x0004d6a6) list_double2_pane_vc

0x3f60,	// (0x0004d6a6) list_double_graphic_heading_pane_vc_ParamLimits

0x3f60,	// (0x0004d6a6) list_double_graphic_heading_pane_vc

0x3f60,	// (0x0004d6a6) list_double_graphic_pane_vc_ParamLimits

0x3f60,	// (0x0004d6a6) list_double_graphic_pane_vc

0x3f60,	// (0x0004d6a6) list_double_heading_pane_vc_ParamLimits

0x3f60,	// (0x0004d6a6) list_double_heading_pane_vc

0x3f72,	// (0x0004d6b8) list_double_large_graphic_pane_vc_ParamLimits

0x3f72,	// (0x0004d6b8) list_double_large_graphic_pane_vc

0x3f60,	// (0x0004d6a6) list_double_number_pane_vc_ParamLimits

0x3f60,	// (0x0004d6a6) list_double_number_pane_vc

0x3f60,	// (0x0004d6a6) list_double_pane_vc_ParamLimits

0x3f60,	// (0x0004d6a6) list_double_pane_vc

0x3f60,	// (0x0004d6a6) list_double_time_pane_vc_ParamLimits

0x3f60,	// (0x0004d6a6) list_double_time_pane_vc

0x3f60,	// (0x0004d6a6) list_setting_number_pane_vc_ParamLimits

0x3f60,	// (0x0004d6a6) list_setting_number_pane_vc

0x3f60,	// (0x0004d6a6) list_setting_pane_vc_ParamLimits

0x3f60,	// (0x0004d6a6) list_setting_pane_vc

0x3f60,	// (0x0004d6a6) list_single_graphic_heading_pane_vc_ParamLimits

0x3f60,	// (0x0004d6a6) list_single_graphic_heading_pane_vc

0x3f60,	// (0x0004d6a6) list_single_heading_pane_vc_ParamLimits

0x3f60,	// (0x0004d6a6) list_single_heading_pane_vc

0x3f60,	// (0x0004d6a6) list_single_number_heading_pane_vc_ParamLimits

0x3f60,	// (0x0004d6a6) list_single_number_heading_pane_vc

0xef10,	// (0x00058656) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xef10,	// (0x00058656) list_double_graphic_heading_pane_vc_g1

0xf36c,	// (0x00058ab2) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xf36c,	// (0x00058ab2) list_double_graphic_heading_pane_vc_g2

0xf378,	// (0x00058abe) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xf378,	// (0x00058abe) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9dd,	// (0x00059123) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9dd,	// (0x00059123) list_double_graphic_heading_pane_vc_g

0xef1c,	// (0x00058662) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xef1c,	// (0x00058662) list_double_graphic_heading_pane_vc_t1

0xef30,	// (0x00058676) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xef30,	// (0x00058676) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9e4,	// (0x0005912a) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9e4,	// (0x0005912a) list_double_graphic_heading_pane_vc_t

0x0e3b,	// (0x0004a581) list_setting_pane_vc_g1_ParamLimits

0x0e3b,	// (0x0004a581) list_setting_pane_vc_g1

0x0e47,	// (0x0004a58d) list_setting_pane_vc_g2_ParamLimits

0x0e47,	// (0x0004a58d) list_setting_pane_vc_g2

0x0001,

0xf7d3,	// (0x00058f19) list_setting_pane_vc_g_ParamLimits

0xf7d3,	// (0x00058f19) list_setting_pane_vc_g

0xef48,	// (0x0005868e) list_setting_pane_vc_t1_ParamLimits

0xef48,	// (0x0005868e) list_setting_pane_vc_t1

0xef64,	// (0x000586aa) list_setting_pane_vc_t2_ParamLimits

0xef64,	// (0x000586aa) list_setting_pane_vc_t2

0x0001,

0xfa27,	// (0x0005916d) list_setting_pane_vc_t_ParamLimits

0xfa27,	// (0x0005916d) list_setting_pane_vc_t

0xeef1,	// (0x00058637) set_value_pane_cp_vc_ParamLimits

0xeef1,	// (0x00058637) set_value_pane_cp_vc

0xf36c,	// (0x00058ab2) list_single_number_heading_pane_vc_g1_ParamLimits

0xf36c,	// (0x00058ab2) list_single_number_heading_pane_vc_g1

0xf378,	// (0x00058abe) list_single_number_heading_pane_vc_g2_ParamLimits

0xf378,	// (0x00058abe) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x00058d18) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x00058d18) list_single_number_heading_pane_vc_g

0xef7e,	// (0x000586c4) list_single_number_heading_pane_vc_t1_ParamLimits

0xef7e,	// (0x000586c4) list_single_number_heading_pane_vc_t1

0xef94,	// (0x000586da) list_single_number_heading_pane_vc_t2_ParamLimits

0xef94,	// (0x000586da) list_single_number_heading_pane_vc_t2

0xefa6,	// (0x000586ec) list_single_number_heading_pane_vc_t3_ParamLimits

0xefa6,	// (0x000586ec) list_single_number_heading_pane_vc_t3

0x0002,

0xfa2c,	// (0x00059172) list_single_number_heading_pane_vc_t_ParamLimits

0xfa2c,	// (0x00059172) list_single_number_heading_pane_vc_t

0xefb8,	// (0x000586fe) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xefb8,	// (0x000586fe) list_single_graphic_heading_pane_vc_g1

0xf36c,	// (0x00058ab2) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xf36c,	// (0x00058ab2) list_single_graphic_heading_pane_vc_g4

0xf378,	// (0x00058abe) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xf378,	// (0x00058abe) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa33,	// (0x00059179) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa33,	// (0x00059179) list_single_graphic_heading_pane_vc_g

0xe487,	// (0x00057bcd) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xe487,	// (0x00057bcd) list_single_graphic_heading_pane_vc_t1

0xefc4,	// (0x0005870a) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xefc4,	// (0x0005870a) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3a,	// (0x00059180) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3a,	// (0x00059180) list_single_graphic_heading_pane_vc_t

0xf36c,	// (0x00058ab2) list_double2_pane_vc_g1_ParamLimits

0xf36c,	// (0x00058ab2) list_double2_pane_vc_g1

0xf378,	// (0x00058abe) list_double2_pane_vc_g2_ParamLimits

0xf378,	// (0x00058abe) list_double2_pane_vc_g2

0x0001,

0xf5d2,	// (0x00058d18) list_double2_pane_vc_g_ParamLimits

0xf5d2,	// (0x00058d18) list_double2_pane_vc_g

0xefd6,	// (0x0005871c) list_double2_pane_vc_t1_ParamLimits

0xefd6,	// (0x0005871c) list_double2_pane_vc_t1

0x12d8,	// (0x0004aa1e) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x12d8,	// (0x0004aa1e) list_double2_large_graphic_pane_vc_g1

0xf36c,	// (0x00058ab2) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xf36c,	// (0x00058ab2) list_double2_large_graphic_pane_vc_g2

0xf378,	// (0x00058abe) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xf378,	// (0x00058abe) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5ea,	// (0x00058d30) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5ea,	// (0x00058d30) list_double2_large_graphic_pane_vc_g

0xe08c,	// (0x000577d2) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xe08c,	// (0x000577d2) list_double2_large_graphic_pane_vc_t1

0x12e4,	// (0x0004aa2a) list_double_time_pane_vc_g1_ParamLimits

0x12e4,	// (0x0004aa2a) list_double_time_pane_vc_g1

0x12f0,	// (0x0004aa36) list_double_time_pane_vc_g2_ParamLimits

0x12f0,	// (0x0004aa36) list_double_time_pane_vc_g2

0x0001,

0xfa3f,	// (0x00059185) list_double_time_pane_vc_g_ParamLimits

0xfa3f,	// (0x00059185) list_double_time_pane_vc_g

0xefee,	// (0x00058734) list_double_time_pane_vc_t1_ParamLimits

0xefee,	// (0x00058734) list_double_time_pane_vc_t1

0xf012,	// (0x00058758) list_double_time_pane_vc_t2_ParamLimits

0xf012,	// (0x00058758) list_double_time_pane_vc_t2

0xf061,	// (0x000587a7) list_double_time_pane_vc_t3_ParamLimits

0xf061,	// (0x000587a7) list_double_time_pane_vc_t3

0xf073,	// (0x000587b9) list_double_time_pane_vc_t4_ParamLimits

0xf073,	// (0x000587b9) list_double_time_pane_vc_t4

0x0003,

0xfa44,	// (0x0005918a) list_double_time_pane_vc_t_ParamLimits

0xfa44,	// (0x0005918a) list_double_time_pane_vc_t

0xf36c,	// (0x00058ab2) list_double_pane_vc_g1_ParamLimits

0xf36c,	// (0x00058ab2) list_double_pane_vc_g1

0xf378,	// (0x00058abe) list_double_pane_vc_g2_ParamLimits

0xf378,	// (0x00058abe) list_double_pane_vc_g2

0x0001,

0xf5d2,	// (0x00058d18) list_double_pane_vc_g_ParamLimits

0xf5d2,	// (0x00058d18) list_double_pane_vc_g

0xf087,	// (0x000587cd) list_double_pane_vc_t1_ParamLimits

0xf087,	// (0x000587cd) list_double_pane_vc_t1

0xf09b,	// (0x000587e1) list_double_pane_vc_t2_ParamLimits

0xf09b,	// (0x000587e1) list_double_pane_vc_t2

0x0001,

0xfa4d,	// (0x00059193) list_double_pane_vc_t_ParamLimits

0xfa4d,	// (0x00059193) list_double_pane_vc_t

0xf36c,	// (0x00058ab2) list_double_number_pane_vc_g1_ParamLimits

0xf36c,	// (0x00058ab2) list_double_number_pane_vc_g1

0xf378,	// (0x00058abe) list_double_number_pane_vc_g2_ParamLimits

0xf378,	// (0x00058abe) list_double_number_pane_vc_g2

0x0001,

0xf5d2,	// (0x00058d18) list_double_number_pane_vc_g_ParamLimits

0xf5d2,	// (0x00058d18) list_double_number_pane_vc_g

0xf0b3,	// (0x000587f9) list_double_number_pane_vc_t1_ParamLimits

0xf0b3,	// (0x000587f9) list_double_number_pane_vc_t1

0xf087,	// (0x000587cd) list_double_number_pane_vc_t2_ParamLimits

0xf087,	// (0x000587cd) list_double_number_pane_vc_t2

0xf0c5,	// (0x0005880b) list_double_number_pane_vc_t3_ParamLimits

0xf0c5,	// (0x0005880b) list_double_number_pane_vc_t3

0x0002,

0xfa52,	// (0x00059198) list_double_number_pane_vc_t_ParamLimits

0xfa52,	// (0x00059198) list_double_number_pane_vc_t

0x12fc,	// (0x0004aa42) list_double_large_graphic_pane_vc_g1_ParamLimits

0x12fc,	// (0x0004aa42) list_double_large_graphic_pane_vc_g1

0x131e,	// (0x0004aa64) list_double_large_graphic_pane_vc_g2_ParamLimits

0x131e,	// (0x0004aa64) list_double_large_graphic_pane_vc_g2

0x1332,	// (0x0004aa78) list_double_large_graphic_pane_vc_g3_ParamLimits

0x1332,	// (0x0004aa78) list_double_large_graphic_pane_vc_g3

0xf0dd,	// (0x00058823) list_double_large_graphic_pane_vc_g4_ParamLimits

0xf0dd,	// (0x00058823) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa59,	// (0x0005919f) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa59,	// (0x0005919f) list_double_large_graphic_pane_vc_g

0xf0e9,	// (0x0005882f) list_double_large_graphic_pane_vc_t1_ParamLimits

0xf0e9,	// (0x0005882f) list_double_large_graphic_pane_vc_t1

0xf105,	// (0x0005884b) list_double_large_graphic_pane_vc_t2_ParamLimits

0xf105,	// (0x0005884b) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa62,	// (0x000591a8) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa62,	// (0x000591a8) list_double_large_graphic_pane_vc_t

0xf36c,	// (0x00058ab2) list_double_heading_pane_vc_g1_ParamLimits

0xf36c,	// (0x00058ab2) list_double_heading_pane_vc_g1

0xf378,	// (0x00058abe) list_double_heading_pane_vc_g2_ParamLimits

0xf378,	// (0x00058abe) list_double_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x00058d18) list_double_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x00058d18) list_double_heading_pane_vc_g

0xf127,	// (0x0005886d) list_double_heading_pane_vc_t1_ParamLimits

0xf127,	// (0x0005886d) list_double_heading_pane_vc_t1

0xf13b,	// (0x00058881) list_double_heading_pane_vc_t2_ParamLimits

0xf13b,	// (0x00058881) list_double_heading_pane_vc_t2

0x0001,

0xfa67,	// (0x000591ad) list_double_heading_pane_vc_t_ParamLimits

0xfa67,	// (0x000591ad) list_double_heading_pane_vc_t

0xf153,	// (0x00058899) list_double_graphic_pane_vc_g1_ParamLimits

0xf153,	// (0x00058899) list_double_graphic_pane_vc_g1

0x1341,	// (0x0004aa87) list_double_graphic_pane_vc_g2_ParamLimits

0x1341,	// (0x0004aa87) list_double_graphic_pane_vc_g2

0xf36c,	// (0x00058ab2) list_double_graphic_pane_vc_g3_ParamLimits

0xf36c,	// (0x00058ab2) list_double_graphic_pane_vc_g3

0x0003,

0xfa6c,	// (0x000591b2) list_double_graphic_pane_vc_g_ParamLimits

0xfa6c,	// (0x000591b2) list_double_graphic_pane_vc_g

0xf166,	// (0x000588ac) list_double_graphic_pane_vc_t1_ParamLimits

0xf166,	// (0x000588ac) list_double_graphic_pane_vc_t1

0xf185,	// (0x000588cb) list_double_graphic_pane_vc_t2_ParamLimits

0xf185,	// (0x000588cb) list_double_graphic_pane_vc_t2

0x0001,

0xfa75,	// (0x000591bb) list_double_graphic_pane_vc_t_ParamLimits

0xfa75,	// (0x000591bb) list_double_graphic_pane_vc_t

0xed34,	// (0x0005847a) aid_size_cell_fastswap

0x943b,	// (0x00052b81) aid_size_cell_touch_ParamLimits

0x943b,	// (0x00052b81) aid_size_cell_touch

0xee8b,	// (0x000585d1) popup_fast_swap_wide_window_ParamLimits

0xee8b,	// (0x000585d1) popup_fast_swap_wide_window

0x9615,	// (0x00052d5b) touch_pane_ParamLimits

0x9615,	// (0x00052d5b) touch_pane

0xa0fe,	// (0x00053844) button_value_adjust_pane_cp2

0xe0bc,	// (0x00057802) button_value_adjust_pane_cp4

0xe0c4,	// (0x0005780a) form_field_data_pane_cp2

0x9019,	// (0x0005275f) form_field_data_wide_pane_cp2

0xa591,	// (0x00053cd7) bg_scroll_pane_ParamLimits

0xa5b0,	// (0x00053cf6) scroll_handle_pane_ParamLimits

0xf539,	// (0x00058c7f) scroll_sc2_down_pane_ParamLimits

0xf539,	// (0x00058c7f) scroll_sc2_down_pane

0xa5d6,	// (0x00053d1c) scroll_sc2_up_pane_ParamLimits

0xa5d6,	// (0x00053d1c) scroll_sc2_up_pane

0xce70,	// (0x000565b6) grid_wheel_folder_pane_g1_ParamLimits

0xce70,	// (0x000565b6) grid_wheel_folder_pane_g1

0x030e,	// (0x00049a54) clock_nsta_pane_cp2_ParamLimits

0x030e,	// (0x00049a54) clock_nsta_pane_cp2

0xa8e1,	// (0x00054027) listscroll_midp_pane_ParamLimits

0xa8ed,	// (0x00054033) midp_canvas_pane

0x24a2,	// (0x0004bbe8) nsta_clock_indic_pane

0x24d6,	// (0x0004bc1c) listscroll_form_pane_vc

0x24de,	// (0x0004bc24) listscroll_set_pane_vc_ParamLimits

0x24de,	// (0x0004bc24) listscroll_set_pane_vc

0xc090,	// (0x000557d6) clock_nsta_pane

0xc0ba,	// (0x00055800) indicator_nsta_pane

0x292f,	// (0x0004c075) bg_popup_sub_pane_cp2_ParamLimits

0x2943,	// (0x0004c089) find_pane_cp2_ParamLimits

0x2943,	// (0x0004c089) find_pane_cp2

0x2959,	// (0x0004c09f) grid_toobar_pane_ParamLimits

0x2a39,	// (0x0004c17f) list_form_gen_pane_vc_ParamLimits

0x2a39,	// (0x0004c17f) list_form_gen_pane_vc

0x2a4f,	// (0x0004c195) scroll_pane_cp8_vc_ParamLimits

0x2a4f,	// (0x0004c195) scroll_pane_cp8_vc

0x2acb,	// (0x0004c211) data_form_wide_pane_vc_ParamLimits

0x2acb,	// (0x0004c211) data_form_wide_pane_vc

0x2ad7,	// (0x0004c21d) form_field_data_wide_pane_vc_g1

0x2adf,	// (0x0004c225) form_field_data_wide_pane_vc_t1_ParamLimits

0x2adf,	// (0x0004c225) form_field_data_wide_pane_vc_t1

0xa112,	// (0x00053858) input_focus_pane_cp6_vc_ParamLimits

0xa112,	// (0x00053858) input_focus_pane_cp6_vc

0x2e2c,	// (0x0004c572) list_midp_pane_ParamLimits

0x410a,	// (0x0004d850) scroll_pane_cp16_ParamLimits

0x410a,	// (0x0004d850) scroll_pane_cp16

0x2e7a,	// (0x0004c5c0) button_value_adjust_pane_ParamLimits

0x2e7a,	// (0x0004c5c0) button_value_adjust_pane

0xca4c,	// (0x00056192) button_value_adjust_pane_cp6_ParamLimits

0xca4c,	// (0x00056192) button_value_adjust_pane_cp6

0xcb66,	// (0x000562ac) settings_code_pane_cp_ParamLimits

0xcb66,	// (0x000562ac) settings_code_pane_cp

0x9431,	// (0x00052b77) cell_touch_pane_g1

0x9431,	// (0x00052b77) cell_touch_pane_g2

0x0001,

0xf6f9,	// (0x00058e3f) cell_touch_pane_g

0xcd3f,	// (0x00056485) cell_touch_pane_cp_ParamLimits

0xcd3f,	// (0x00056485) cell_touch_pane_cp

0xcd5b,	// (0x000564a1) cell_touch_pane_ParamLimits

0xcd5b,	// (0x000564a1) cell_touch_pane

0x9431,	// (0x00052b77) scroll_sc2_down_pane_g1

0x9431,	// (0x00052b77) scroll_sc2_up_pane_g1

0x9521,	// (0x00052c67) bg_set_opt_pane_cp4_vc

0x449a,	// (0x0004dbe0) list_set_graphic_pane_vc_g1_ParamLimits

0x449a,	// (0x0004dbe0) list_set_graphic_pane_vc_g1

0x44a6,	// (0x0004dbec) list_set_graphic_pane_vc_g2_ParamLimits

0x44a6,	// (0x0004dbec) list_set_graphic_pane_vc_g2

0x0001,

0xf9e9,	// (0x0005912f) list_set_graphic_pane_vc_g_ParamLimits

0xf9e9,	// (0x0005912f) list_set_graphic_pane_vc_g

0x44b2,	// (0x0004dbf8) text_primary_small_cp13_vc_ParamLimits

0x44b2,	// (0x0004dbf8) text_primary_small_cp13_vc

0x44ca,	// (0x0004dc10) list_set_graphic_pane_vc_ParamLimits

0x44ca,	// (0x0004dc10) list_set_graphic_pane_vc

0x9521,	// (0x00052c67) input_focus_pane_cp2_vc

0x9431,	// (0x00052b77) setting_code_pane_vc_g1

0x985c,	// (0x00052fa2) setting_code_pane_vc_t1

0x44dd,	// (0x0004dc23) set_text_pane_vc_t1_ParamLimits

0x44dd,	// (0x0004dc23) set_text_pane_vc_t1

0x9521,	// (0x00052c67) input_focus_pane_cp1_vc

0x44f9,	// (0x0004dc3f) list_set_text_pane_vc

0x9431,	// (0x00052b77) setting_text_pane_vc_g1

0x9521,	// (0x00052c67) bg_set_opt_pane_cp2_vc

0x982b,	// (0x00052f71) setting_slider_graphic_pane_vc_g1

0x4503,	// (0x0004dc49) setting_slider_graphic_pane_vc_t1

0x4513,	// (0x0004dc59) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ee,	// (0x00059134) setting_slider_graphic_pane_vc_t

0x4523,	// (0x0004dc69) slider_set_pane_cp_vc

0x452b,	// (0x0004dc71) slider_set_pane_vc_g1

0x4534,	// (0x0004dc7a) slider_set_pane_vc_g2

0x0006,

0xf9f3,	// (0x00059139) slider_set_pane_vc_g

0xa15e,	// (0x000538a4) set_opt_bg_pane_g1_copy1

0xa166,	// (0x000538ac) set_opt_bg_pane_g2_copy1

0x4560,	// (0x0004dca6) set_opt_bg_pane_g3_copy1

0xa176,	// (0x000538bc) set_opt_bg_pane_g4_copy1

0xa17e,	// (0x000538c4) set_opt_bg_pane_g5_copy1

0xa186,	// (0x000538cc) set_opt_bg_pane_g6_copy1

0x4568,	// (0x0004dcae) set_opt_bg_pane_g7_copy1

0x4570,	// (0x0004dcb6) set_opt_bg_pane_g8_copy1

0x4578,	// (0x0004dcbe) set_opt_bg_pane_g9_copy1

0x9521,	// (0x00052c67) bg_set_opt_pane_cp_vc

0x4580,	// (0x0004dcc6) setting_slider_pane_vc_t1

0x458f,	// (0x0004dcd5) setting_slider_pane_vc_t2

0x459f,	// (0x0004dce5) setting_slider_pane_vc_t3

0x0002,

0xfa02,	// (0x00059148) setting_slider_pane_vc_t

0x45af,	// (0x0004dcf5) slider_set_pane_vc

0x0ef0,	// (0x0004a636) volume_set_pane_vc_g1

0x1287,	// (0x0004a9cd) volume_set_pane_vc_g2

0x1290,	// (0x0004a9d6) volume_set_pane_vc_g3

0x1299,	// (0x0004a9df) volume_set_pane_vc_g4

0x12a2,	// (0x0004a9e8) volume_set_pane_vc_g5

0x12ab,	// (0x0004a9f1) volume_set_pane_vc_g6

0x12b4,	// (0x0004a9fa) volume_set_pane_vc_g7

0x12bd,	// (0x0004aa03) volume_set_pane_vc_g8

0x12c6,	// (0x0004aa0c) volume_set_pane_vc_g9

0x12cf,	// (0x0004aa15) volume_set_pane_vc_g10

0x0009,

0xfa09,	// (0x0005914f) volume_set_pane_vc_g

0x45b7,	// (0x0004dcfd) volume_set_pane_vc

0x45bf,	// (0x0004dd05) button_value_adjust_pane_cp1_vc

0x45c9,	// (0x0004dd0f) list_highlight_pane_cp2_vc

0x45d2,	// (0x0004dd18) list_set_pane_vc_ParamLimits

0x45d2,	// (0x0004dd18) list_set_pane_vc

0x4630,	// (0x0004dd76) main_pane_set_vc_t1_ParamLimits

0x4630,	// (0x0004dd76) main_pane_set_vc_t1

0x4645,	// (0x0004dd8b) main_pane_set_vc_t2_ParamLimits

0x4645,	// (0x0004dd8b) main_pane_set_vc_t2

0x4657,	// (0x0004dd9d) main_pane_set_vc_t3_ParamLimits

0x4657,	// (0x0004dd9d) main_pane_set_vc_t3

0x4669,	// (0x0004ddaf) main_pane_set_vc_t4_ParamLimits

0x4669,	// (0x0004ddaf) main_pane_set_vc_t4

0x0003,

0xfa1e,	// (0x00059164) main_pane_set_vc_t_ParamLimits

0xfa1e,	// (0x00059164) main_pane_set_vc_t

0x467b,	// (0x0004ddc1) setting_code_pane_vc_ParamLimits

0x467b,	// (0x0004ddc1) setting_code_pane_vc

0x468a,	// (0x0004ddd0) setting_slider_graphic_pane_vc

0x468a,	// (0x0004ddd0) setting_slider_pane_vc

0x468a,	// (0x0004ddd0) setting_text_pane_vc

0x468a,	// (0x0004ddd0) setting_volume_pane_vc

0x4692,	// (0x0004ddd8) scroll_pane_cp121_vc

0xa0ec,	// (0x00053832) set_content_pane_vc

0x469a,	// (0x0004dde0) button_value_adjust_pane_g1

0x46a3,	// (0x0004dde9) button_value_adjust_pane_g2

0x0001,

0xfa7a,	// (0x000591c0) button_value_adjust_pane_g

0x46ac,	// (0x0004ddf2) form_field_slider_wide_pane_vc_t1_ParamLimits

0x46ac,	// (0x0004ddf2) form_field_slider_wide_pane_vc_t1

0x46c0,	// (0x0004de06) form_field_slider_wide_pane_vc_t2_ParamLimits

0x46c0,	// (0x0004de06) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7f,	// (0x000591c5) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7f,	// (0x000591c5) form_field_slider_wide_pane_vc_t

0x9772,	// (0x00052eb8) input_focus_pane_cp10_vc_ParamLimits

0x9772,	// (0x00052eb8) input_focus_pane_cp10_vc

0x46ee,	// (0x0004de34) slider_cont_pane_cp1_vc_ParamLimits

0x46ee,	// (0x0004de34) slider_cont_pane_cp1_vc

0x4700,	// (0x0004de46) slider_form_pane_g1_cp2

0x4534,	// (0x0004dc7a) slider_form_pane_g2_cp2

0x472d,	// (0x0004de73) form_field_slider_pane_vc_t3

0x473b,	// (0x0004de81) form_field_slider_pane_vc_t4

0x4749,	// (0x0004de8f) slider_form_pane_vc_ParamLimits

0x4749,	// (0x0004de8f) slider_form_pane_vc

0x4756,	// (0x0004de9c) form_field_slider_pane_vc_t1_ParamLimits

0x4756,	// (0x0004de9c) form_field_slider_pane_vc_t1

0x46c0,	// (0x0004de06) form_field_slider_pane_vc_t2_ParamLimits

0x46c0,	// (0x0004de06) form_field_slider_pane_vc_t2

0x0001,

0xfa91,	// (0x000591d7) form_field_slider_pane_vc_t_ParamLimits

0xfa91,	// (0x000591d7) form_field_slider_pane_vc_t

0x9772,	// (0x00052eb8) input_focus_pane_cp9_vc_ParamLimits

0x9772,	// (0x00052eb8) input_focus_pane_cp9_vc

0x4772,	// (0x0004deb8) slider_cont_pane_vc_ParamLimits

0x4772,	// (0x0004deb8) slider_cont_pane_vc

0x4786,	// (0x0004decc) list_form_graphic_pane_cp_vc_ParamLimits

0x4786,	// (0x0004decc) list_form_graphic_pane_cp_vc

0x2ad7,	// (0x0004c21d) form_field_popup_wide_pane_vc_g1

0x479b,	// (0x0004dee1) form_field_popup_wide_pane_vc_t1_ParamLimits

0x479b,	// (0x0004dee1) form_field_popup_wide_pane_vc_t1

0xa112,	// (0x00053858) input_focus_pane_cp8_vc_ParamLimits

0xa112,	// (0x00053858) input_focus_pane_cp8_vc

0x47e0,	// (0x0004df26) list_form_wide_pane_vc_ParamLimits

0x47e0,	// (0x0004df26) list_form_wide_pane_vc

0x47ec,	// (0x0004df32) list_form_graphic_pane_vc_g1

0x47f4,	// (0x0004df3a) list_form_graphic_pane_vc_t1_ParamLimits

0x47f4,	// (0x0004df3a) list_form_graphic_pane_vc_t1

0x97bc,	// (0x00052f02) list_highlight_pane_cp5_vc_ParamLimits

0x97bc,	// (0x00052f02) list_highlight_pane_cp5_vc

0x4810,	// (0x0004df56) list_form_graphic_pane_vc_ParamLimits

0x4810,	// (0x0004df56) list_form_graphic_pane_vc

0x2ad7,	// (0x0004c21d) form_field_popup_pane_vc_g1

0x4826,	// (0x0004df6c) form_field_popup_pane_vc_t1_ParamLimits

0x4826,	// (0x0004df6c) form_field_popup_pane_vc_t1

0xa112,	// (0x00053858) input_focus_pane_cp7_vc_ParamLimits

0xa112,	// (0x00053858) input_focus_pane_cp7_vc

0x483d,	// (0x0004df83) list_form_pane_vc_ParamLimits

0x483d,	// (0x0004df83) list_form_pane_vc

0x4849,	// (0x0004df8f) data_form_pane_vc_t1_ParamLimits

0x4849,	// (0x0004df8f) data_form_pane_vc_t1

0xa15e,	// (0x000538a4) input_focus_pane_vc_g1

0xa166,	// (0x000538ac) input_focus_pane_vc_g2

0xa16e,	// (0x000538b4) input_focus_pane_vc_g3

0xa176,	// (0x000538bc) input_focus_pane_vc_g4

0xa17e,	// (0x000538c4) input_focus_pane_vc_g5

0xa186,	// (0x000538cc) input_focus_pane_vc_g6

0xa18e,	// (0x000538d4) input_focus_pane_vc_g7

0xa196,	// (0x000538dc) input_focus_pane_vc_g8

0xa19e,	// (0x000538e4) input_focus_pane_vc_g9

0x9431,	// (0x00052b77) input_focus_pane_vc_g10

0x0009,

0xf682,	// (0x00058dc8) input_focus_pane_vc_g

0x2acb,	// (0x0004c211) data_form_pane_vc_ParamLimits

0x2acb,	// (0x0004c211) data_form_pane_vc

0x2ad7,	// (0x0004c21d) form_field_data_pane_vc_g1

0x4864,	// (0x0004dfaa) form_field_data_pane_vc_t1_ParamLimits

0x4864,	// (0x0004dfaa) form_field_data_pane_vc_t1

0xa112,	// (0x00053858) input_focus_pane_vc_ParamLimits

0xa112,	// (0x00053858) input_focus_pane_vc

0x487e,	// (0x0004dfc4) button_value_adjust_pane_cp3_vc

0x4886,	// (0x0004dfcc) button_value_adjust_pane_cp5_vc

0x488e,	// (0x0004dfd4) form_field_data_pane_vc_ParamLimits

0x488e,	// (0x0004dfd4) form_field_data_pane_vc

0x48a5,	// (0x0004dfeb) form_field_data_pane_vc_cp2

0x48ad,	// (0x0004dff3) form_field_data_wide_pane_vc_ParamLimits

0x48ad,	// (0x0004dff3) form_field_data_wide_pane_vc

0x48c3,	// (0x0004e009) form_field_data_wide_pane_vc_cp2

0x48cb,	// (0x0004e011) form_field_popup_pane_vc_ParamLimits

0x48cb,	// (0x0004e011) form_field_popup_pane_vc

0x48e2,	// (0x0004e028) form_field_popup_wide_pane_vc_ParamLimits

0x48e2,	// (0x0004e028) form_field_popup_wide_pane_vc

0x48f8,	// (0x0004e03e) form_field_slider_pane_vc_ParamLimits

0x48f8,	// (0x0004e03e) form_field_slider_pane_vc

0x490b,	// (0x0004e051) form_field_slider_wide_pane_vc_ParamLimits

0x490b,	// (0x0004e051) form_field_slider_wide_pane_vc

0xcd78,	// (0x000564be) grid_touch_1_pane_ParamLimits

0xcd78,	// (0x000564be) grid_touch_1_pane

0xcd8c,	// (0x000564d2) grid_touch_2_pane_ParamLimits

0xcd8c,	// (0x000564d2) grid_touch_2_pane

0x49d9,	// (0x0004e11f) touch_pane_g1_ParamLimits

0x49d9,	// (0x0004e11f) touch_pane_g1

0x4942,	// (0x0004e088) cell_app_pane_cp_wide_ParamLimits

0x4942,	// (0x0004e088) cell_app_pane_cp_wide

0x4953,	// (0x0004e099) grid_popup_fast_wide_pane_ParamLimits

0x4953,	// (0x0004e099) grid_popup_fast_wide_pane

0x4967,	// (0x0004e0ad) scroll_pane_cp19_ParamLimits

0x4967,	// (0x0004e0ad) scroll_pane_cp19

0x9521,	// (0x00052c67) bg_popup_window_pane_cp20

0x497b,	// (0x0004e0c1) listscroll_popup_fast_wide_pane

0xcdb6,	// (0x000564fc) grid_indicator_nsta_pane

0x4983,	// (0x0004e0c9) clock_nsta_pane_g1

0x498c,	// (0x0004e0d2) clock_nsta_pane_t1

0xcdc4,	// (0x0005650a) cell_indicator_nsta_pane_ParamLimits

0xcdc4,	// (0x0005650a) cell_indicator_nsta_pane

0x49d9,	// (0x0004e11f) cell_indicator_nsta_pane_g1

0xcddb,	// (0x00056521) cell_indicator_nsta_pane_g2

0x0001,

0xfaa2,	// (0x000591e8) cell_indicator_nsta_pane_g

0x49f4,	// (0x0004e13a) clock_nsta_pane_cp

0x49fd,	// (0x0004e143) indicator_nsta_pane_cp

0x4a05,	// (0x0004e14b) nsta_clock_indic_pane_g1

0x993e,	// (0x00053084) grid_indicator_pane

0xa6c8,	// (0x00053e0e) scroll_pane_cp29

0x025d,	// (0x000499a3) indicator_nsta_pane_cp2_ParamLimits

0x025d,	// (0x000499a3) indicator_nsta_pane_cp2

0x97bc,	// (0x00052f02) main_apps_wheel_pane

0xc482,	// (0x00055bc8) form_midp_field_text_pane_ParamLimits

0x2e38,	// (0x0004c57e) scroll_bar_cp050_ParamLimits

0x4a55,	// (0x0004e19b) cell_indicator_pane_ParamLimits

0x4a55,	// (0x0004e19b) cell_indicator_pane

0x4a6e,	// (0x0004e1b4) cell_indicator_pane_g1

0xcdfa,	// (0x00056540) grid_wheel_folder_pane_ParamLimits

0xcdfa,	// (0x00056540) grid_wheel_folder_pane

0xce08,	// (0x0005654e) list_wheel_apps_pane_ParamLimits

0xce08,	// (0x0005654e) list_wheel_apps_pane

0xce16,	// (0x0005655c) main_apps_wheel_pane_g1_ParamLimits

0xce16,	// (0x0005655c) main_apps_wheel_pane_g1

0xce22,	// (0x00056568) main_apps_wheel_pane_g2_ParamLimits

0xce22,	// (0x00056568) main_apps_wheel_pane_g2

0x0001,

0xfabe,	// (0x00059204) main_apps_wheel_pane_g_ParamLimits

0xfabe,	// (0x00059204) main_apps_wheel_pane_g

0xce30,	// (0x00056576) main_apps_wheel_pane_t1_ParamLimits

0xce30,	// (0x00056576) main_apps_wheel_pane_t1

0xce44,	// (0x0005658a) list_wheel_apps_pane_g1

0xce4c,	// (0x00056592) list_wheel_apps_pane_g2

0xce54,	// (0x0005659a) list_wheel_apps_pane_g3

0xce5c,	// (0x000565a2) list_wheel_apps_pane_g4

0xce66,	// (0x000565ac) list_wheel_apps_pane_g5

0x0004,

0xfac3,	// (0x00059209) list_wheel_apps_pane_g

0xe2b3,	// (0x000579f9) navi_icon_text_pane

0xb3b5,	// (0x00054afb) aid_fill_nsta

0x4b35,	// (0x0004e27b) navi_icon_text_pane_g1

0x4b41,	// (0x0004e287) navi_icon_text_pane_t1

0xe1a3,	// (0x000578e9) list_set_graphic_pane_t1_ParamLimits

0xe1a3,	// (0x000578e9) list_set_graphic_pane_t1

0x357b,	// (0x0004ccc1) popup_midp_note_alarm_window_t6_ParamLimits

0x357b,	// (0x0004ccc1) popup_midp_note_alarm_window_t6

0x358d,	// (0x0004ccd3) popup_midp_note_alarm_window_t7_ParamLimits

0x358d,	// (0x0004ccd3) popup_midp_note_alarm_window_t7

0x359f,	// (0x0004cce5) popup_midp_note_alarm_window_t8_ParamLimits

0x359f,	// (0x0004cce5) popup_midp_note_alarm_window_t8

0x35b1,	// (0x0004ccf7) popup_midp_note_alarm_window_t9_ParamLimits

0x35b1,	// (0x0004ccf7) popup_midp_note_alarm_window_t9

0x35c3,	// (0x0004cd09) popup_midp_note_alarm_window_t10_ParamLimits

0x35c3,	// (0x0004cd09) popup_midp_note_alarm_window_t10

0x35d5,	// (0x0004cd1b) popup_midp_note_alarm_window_t11_ParamLimits

0x35d5,	// (0x0004cd1b) popup_midp_note_alarm_window_t11

0xc7ce,	// (0x00055f14) scroll_pane_cp17_ParamLimits

0xc7ce,	// (0x00055f14) scroll_pane_cp17

0x0ef0,	// (0x0004a636) volume_small_pane_cp_g1

0x135e,	// (0x0004aaa4) volume_small_pane_cp_g2

0x1367,	// (0x0004aaad) volume_small_pane_cp_g3

0x1370,	// (0x0004aab6) volume_small_pane_cp_g4

0x1379,	// (0x0004aabf) volume_small_pane_cp_g5

0x12a2,	// (0x0004a9e8) volume_small_pane_cp_g6

0x1382,	// (0x0004aac8) volume_small_pane_cp_g7

0x138b,	// (0x0004aad1) volume_small_pane_cp_g8

0x1394,	// (0x0004aada) volume_small_pane_cp_g9

0x139d,	// (0x0004aae3) volume_small_pane_cp_g10

0x04fa,	// (0x00049c40) midp_ticker_pane_g1_ParamLimits

0x0506,	// (0x00049c4c) midp_ticker_pane_g2_ParamLimits

0xf74e,	// (0x00058e94) midp_ticker_pane_g_ParamLimits

0x0512,	// (0x00049c58) midp_ticker_pane_t1_ParamLimits

0xb3d9,	// (0x00054b1f) aid_fill_nsta_2

0x2e24,	// (0x0004c56a) list_form2_midp_pane

0x3f2f,	// (0x0004d675) midp_editing_number_pane_ParamLimits

0x3f3e,	// (0x0004d684) midp_ticker_pane_ParamLimits

0x4b53,	// (0x0004e299) form2_midp_field_pane

0x4b77,	// (0x0004e2bd) scroll_pane_cp51

0x4b97,	// (0x0004e2dd) form2_midp_button_pane_ParamLimits

0x4b97,	// (0x0004e2dd) form2_midp_button_pane

0x4ba9,	// (0x0004e2ef) form2_midp_content_pane_ParamLimits

0x4ba9,	// (0x0004e2ef) form2_midp_content_pane

0x4bc3,	// (0x0004e309) form2_midp_field_choice_group_pane

0x4bcb,	// (0x0004e311) form2_midp_field_pane_g1

0x4bd3,	// (0x0004e319) form2_midp_field_pane_g2

0x4bdb,	// (0x0004e321) form2_midp_field_pane_g3

0x4be3,	// (0x0004e329) form2_midp_field_pane_g4

0x0003,

0xfae8,	// (0x0005922e) form2_midp_field_pane_g

0x4beb,	// (0x0004e331) form2_midp_gauge_slider_pane

0x4bf3,	// (0x0004e339) form2_midp_gauge_wait_pane

0x4bfb,	// (0x0004e341) form2_midp_image_pane_ParamLimits

0x4bfb,	// (0x0004e341) form2_midp_image_pane

0xce99,	// (0x000565df) form2_midp_label_pane_ParamLimits

0xce99,	// (0x000565df) form2_midp_label_pane

0xceb2,	// (0x000565f8) form2_midp_label_pane_cp_ParamLimits

0xceb2,	// (0x000565f8) form2_midp_label_pane_cp

0x4c50,	// (0x0004e396) form2_midp_string_pane_ParamLimits

0x4c50,	// (0x0004e396) form2_midp_string_pane

0x9276,	// (0x000529bc) form2_midp_text_pane_ParamLimits

0x9276,	// (0x000529bc) form2_midp_text_pane

0x4c62,	// (0x0004e3a8) form2_midp_time_pane

0x4c72,	// (0x0004e3b8) input_focus_pane_cp51_ParamLimits

0x4c72,	// (0x0004e3b8) input_focus_pane_cp51

0xced1,	// (0x00056617) form2_midp_label_pane_t1_ParamLimits

0xced1,	// (0x00056617) form2_midp_label_pane_t1

0x928f,	// (0x000529d5) form2_mdip_text_pane_t1_ParamLimits

0x928f,	// (0x000529d5) form2_mdip_text_pane_t1

0xf1af,	// (0x000588f5) form2_midp_time_pane_t1

0x4cdf,	// (0x0004e425) form2_midp_gauge_slider_pane_t1

0xcf11,	// (0x00056657) form2_midp_gauge_slider_pane_t2

0xcf23,	// (0x00056669) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf1,	// (0x00059237) form2_midp_gauge_slider_pane_t

0x4d15,	// (0x0004e45b) form2_midp_slider_pane

0x4d21,	// (0x0004e467) form2_midp_gauge_wait_pane_t1

0x4d2f,	// (0x0004e475) form2_midp_wait_pane_ParamLimits

0x4d2f,	// (0x0004e475) form2_midp_wait_pane

0xcf35,	// (0x0005667b) list_single_2graphic_pane_cp4_ParamLimits

0xcf35,	// (0x0005667b) list_single_2graphic_pane_cp4

0xc3d9,	// (0x00055b1f) list_single_midp_graphic_pane_cp_ParamLimits

0xc3d9,	// (0x00055b1f) list_single_midp_graphic_pane_cp

0x9521,	// (0x00052c67) list_highlight_pane_cp20

0x4d82,	// (0x0004e4c8) list_single_2graphic_pane_g1_cp4

0x437e,	// (0x0004dac4) list_single_2graphic_pane_g2_cp4

0x4d8a,	// (0x0004e4d0) list_single_2graphic_pane_t1_cp4

0x97bc,	// (0x00052f02) list_highlight_pane_cp21

0x4d99,	// (0x0004e4df) list_single_midp_graphic_pane_g4_cp

0x4da8,	// (0x0004e4ee) list_single_midp_graphic_pane_t1_cp

0xcf4a,	// (0x00056690) form2_mdip_string_pane_t1_ParamLimits

0xcf4a,	// (0x00056690) form2_mdip_string_pane_t1

0x9521,	// (0x00052c67) bg_wml_button_pane_cp2

0x9431,	// (0x00052b77) form2_midp_image_pane_g1

0xf390,	// (0x00058ad6) list_double_large_graphic_pane_g5_ParamLimits

0xf390,	// (0x00058ad6) list_double_large_graphic_pane_g5

0xa8e1,	// (0x00054027) midp_form_pane_ParamLimits

0x97bc,	// (0x00052f02) main_apps_wheel_pane_ParamLimits

0xb093,	// (0x000547d9) popup_preview_window_ParamLimits

0xb093,	// (0x000547d9) popup_preview_window

0xb360,	// (0x00054aa6) popup_touch_info_window_ParamLimits

0xb360,	// (0x00054aa6) popup_touch_info_window

0xb37e,	// (0x00054ac4) popup_touch_menu_window_ParamLimits

0xb37e,	// (0x00054ac4) popup_touch_menu_window

0x9427,	// (0x00052b6d) bg_popup_sub_pane_cp6

0x4ec4,	// (0x0004e60a) list_touch_menu_pane

0xcfc0,	// (0x00056706) list_single_touch_menu_pane_ParamLimits

0xcfc0,	// (0x00056706) list_single_touch_menu_pane

0xcfd4,	// (0x0005671a) list_single_touch_menu_pane_t1

0x97bc,	// (0x00052f02) bg_popup_sub_pane_cp7_ParamLimits

0x97bc,	// (0x00052f02) bg_popup_sub_pane_cp7

0x4ef0,	// (0x0004e636) heading_sub_pane

0x4ef8,	// (0x0004e63e) list_touch_info_pane_ParamLimits

0x4ef8,	// (0x0004e63e) list_touch_info_pane

0x4f07,	// (0x0004e64d) list_single_touch_info_pane_ParamLimits

0x4f07,	// (0x0004e64d) list_single_touch_info_pane

0x4f19,	// (0x0004e65f) list_single_touch_info_pane_t1

0x4f27,	// (0x0004e66d) list_single_touch_info_pane_t2

0x0001,

0xfaff,	// (0x00059245) list_single_touch_info_pane_t

0xe405,	// (0x00057b4b) bg_popup_heading_pane_cp

0x4f35,	// (0x0004e67b) heading_sub_pane_t1

0x2a65,	// (0x0004c1ab) bg_popup_preview_window_pane_cp_ParamLimits

0x2a65,	// (0x0004c1ab) bg_popup_preview_window_pane_cp

0x4ef0,	// (0x0004e636) heading_preview_pane

0x4ef8,	// (0x0004e63e) list_preview_pane_ParamLimits

0x4ef8,	// (0x0004e63e) list_preview_pane

0x4f43,	// (0x0004e689) popup_preview_window_g1

0x4f07,	// (0x0004e64d) list_single_preview_pane_ParamLimits

0x4f07,	// (0x0004e64d) list_single_preview_pane

0x4f4b,	// (0x0004e691) list_single_preview_pane_g1

0x4f53,	// (0x0004e699) list_single_preview_pane_t1

0x4f19,	// (0x0004e65f) list_single_preview_pane_t2

0x0001,

0xfb04,	// (0x0005924a) list_single_preview_pane_t

0x4f61,	// (0x0004e6a7) bg_popup_heading_pane_cp2_ParamLimits

0x4f61,	// (0x0004e6a7) bg_popup_heading_pane_cp2

0x4f77,	// (0x0004e6bd) heading_preview_pane_g1

0x4f7f,	// (0x0004e6c5) heading_preview_pane_t1_ParamLimits

0x4f7f,	// (0x0004e6c5) heading_preview_pane_t1

0x996b,	// (0x000530b1) soft_indicator_pane_t1_ParamLimits

0xa02a,	// (0x00053770) scroll_pane_ParamLimits

0xa5c4,	// (0x00053d0a) scroll_sc2_left_pane

0xa5cd,	// (0x00053d13) scroll_sc2_right_pane

0xa5ec,	// (0x00053d32) scroll_bg_pane_g1_ParamLimits

0xa601,	// (0x00053d47) scroll_bg_pane_g2_ParamLimits

0xa619,	// (0x00053d5f) scroll_bg_pane_g3_ParamLimits

0xf6d9,	// (0x00058e1f) scroll_bg_pane_g_ParamLimits

0xa5ec,	// (0x00053d32) scroll_handle_pane_g1_ParamLimits

0xa63b,	// (0x00053d81) scroll_handle_pane_g2_ParamLimits

0xa619,	// (0x00053d5f) scroll_handle_pane_g3_ParamLimits

0xf6e0,	// (0x00058e26) scroll_handle_pane_g_ParamLimits

0xac3a,	// (0x00054380) popup_choice_list_window_ParamLimits

0xac3a,	// (0x00054380) popup_choice_list_window

0x293b,	// (0x0004c081) choice_list_pane

0x29bd,	// (0x0004c103) cell_toolbar_pane_t1

0x29e5,	// (0x0004c12b) toolbar_button_pane_ParamLimits

0x3aa1,	// (0x0004d1e7) ai_gene_pane_1_t2_ParamLimits

0x3aa1,	// (0x0004d1e7) ai_gene_pane_1_t2

0x0001,

0xf8fc,	// (0x00059042) ai_gene_pane_1_t_ParamLimits

0xf8fc,	// (0x00059042) ai_gene_pane_1_t

0x4f9c,	// (0x0004e6e2) scroll_sc2_left_pane_g1

0x4f9c,	// (0x0004e6e2) scroll_sc2_right_pane_g1

0x24ca,	// (0x0004bc10) bg_popup_sub_pane_cp10

0x4fa6,	// (0x0004e6ec) list_choice_list_pane

0xcfe2,	// (0x00056728) list_single_choice_list_pane_ParamLimits

0xcfe2,	// (0x00056728) list_single_choice_list_pane

0xcff6,	// (0x0005673c) list_single_choice_list_pane_g1

0xa295,	// (0x000539db) list_single_choice_list_pane_t1_ParamLimits

0xa295,	// (0x000539db) list_single_choice_list_pane_t1

0x4fda,	// (0x0004e720) choice_list_pane_g1

0xcffe,	// (0x00056744) choice_list_pane_t1

0x9427,	// (0x00052b6d) input_focus_pane_cp11

0xa44f,	// (0x00053b95) title_pane_stacon_g2_ParamLimits

0xa44f,	// (0x00053b95) title_pane_stacon_g2

0x0002,

0xf6bf,	// (0x00058e05) title_pane_stacon_g_ParamLimits

0xf6bf,	// (0x00058e05) title_pane_stacon_g

0xe405,	// (0x00057b4b) cursor_press_pane

0xace1,	// (0x00054427) popup_fep_hwr_window_ParamLimits

0xace1,	// (0x00054427) popup_fep_hwr_window

0x093b,	// (0x0004a081) popup_fep_vkb_window_ParamLimits

0x093b,	// (0x0004a081) popup_fep_vkb_window

0xd00c,	// (0x00056752) cursor_press_pane_g1

0x0002,

0xfb2d,	// (0x00059273) fep_vkb_side_pane_g_ParamLimits

0x13df,	// (0x0004ab25) fep_hwr_candidate_pane_ParamLimits

0x13df,	// (0x0004ab25) fep_hwr_candidate_pane

0x1409,	// (0x0004ab4f) fep_hwr_side_pane_ParamLimits

0x1409,	// (0x0004ab4f) fep_hwr_side_pane

0x1429,	// (0x0004ab6f) fep_hwr_top_pane_ParamLimits

0x1429,	// (0x0004ab6f) fep_hwr_top_pane

0x1441,	// (0x0004ab87) fep_hwr_write_pane_ParamLimits

0x1441,	// (0x0004ab87) fep_hwr_write_pane

0xfb2d,	// (0x00059273) fep_vkb_side_pane_g

0x4ff8,	// (0x0004e73e) fep_hwr_top_pane_g1

0x500a,	// (0x0004e750) fep_hwr_top_pane_g2

0x146d,	// (0x0004abb3) fep_hwr_top_pane_g3

0x0002,

0xfb09,	// (0x0005924f) fep_hwr_top_pane_g

0x1482,	// (0x0004abc8) fep_hwr_top_text_pane

0xbebf,	// (0x00055605) fep_hwr_top_text_pane_g1

0x5040,	// (0x0004e786) fep_hwr_top_text_pane_t1

0x1578,	// (0x0004acbe) fep_hwr_candidate_pane_g1

0x5285,	// (0x0004e9cb) fep_vkb_keypad_pane_g3_ParamLimits

0x5285,	// (0x0004e9cb) fep_vkb_keypad_pane_g3

0x52ad,	// (0x0004e9f3) fep_vkb_keypad_pane_g4_ParamLimits

0x52ad,	// (0x0004e9f3) fep_vkb_keypad_pane_g4

0x531c,	// (0x0004ea62) fep_vkb_bottom_pane_g2_ParamLimits

0x531c,	// (0x0004ea62) fep_vkb_bottom_pane_g2

0x0001,

0xfb34,	// (0x0005927a) fep_vkb_bottom_pane_g_ParamLimits

0xfb34,	// (0x0005927a) fep_vkb_bottom_pane_g

0x4f9c,	// (0x0004e6e2) cell_vkb_side_pane_g2

0x0001,

0xfb3e,	// (0x00059284) cell_vkb_side_pane_g

0x53a7,	// (0x0004eaed) cell_vkb_side_pane_t1

0x53b5,	// (0x0004eafb) cell_vkb_side_pane_t1_copy1

0x4f9c,	// (0x0004e6e2) bg_fep_vkb_candidate_pane_g2

0x54e1,	// (0x0004ec27) cell_vkb_candidate_pane_ParamLimits

0x504e,	// (0x0004e794) aid_size_cell_vkb_ParamLimits

0x504e,	// (0x0004e794) aid_size_cell_vkb

0x54e1,	// (0x0004ec27) cell_vkb_candidate_pane

0x1592,	// (0x0004acd8) bg_popup_fep_shadow_pane_g1

0xd04e,	// (0x00056794) fep_vkb_bottom_pane_ParamLimits

0xd04e,	// (0x00056794) fep_vkb_bottom_pane

0x5112,	// (0x0004e858) fep_vkb_candidate_pane_ParamLimits

0x5112,	// (0x0004e858) fep_vkb_candidate_pane

0xd073,	// (0x000567b9) fep_vkb_keypad_pane_ParamLimits

0xd073,	// (0x000567b9) fep_vkb_keypad_pane

0xd0a8,	// (0x000567ee) fep_vkb_side_pane_ParamLimits

0xd0a8,	// (0x000567ee) fep_vkb_side_pane

0xd0e4,	// (0x0005682a) fep_vkb_top_pane_ParamLimits

0xd0e4,	// (0x0005682a) fep_vkb_top_pane

0x51de,	// (0x0004e924) fep_vkb_top_pane_g1_ParamLimits

0x51de,	// (0x0004e924) fep_vkb_top_pane_g1

0x51ed,	// (0x0004e933) fep_vkb_top_pane_g2_ParamLimits

0x51ed,	// (0x0004e933) fep_vkb_top_pane_g2

0x51fc,	// (0x0004e942) fep_vkb_top_pane_g3_ParamLimits

0x51fc,	// (0x0004e942) fep_vkb_top_pane_g3

0x0003,

0xfb24,	// (0x0005926a) fep_vkb_top_pane_g_ParamLimits

0xfb24,	// (0x0005926a) fep_vkb_top_pane_g

0x521a,	// (0x0004e960) fep_vkb_top_text_pane_ParamLimits

0x521a,	// (0x0004e960) fep_vkb_top_text_pane

0xd119,	// (0x0005685f) fep_vkb_side_pane_g1_ParamLimits

0xd119,	// (0x0005685f) fep_vkb_side_pane_g1

0x5274,	// (0x0004e9ba) grid_vkb_side_pane_ParamLimits

0x5274,	// (0x0004e9ba) grid_vkb_side_pane

0x159a,	// (0x0004ace0) bg_popup_fep_shadow_pane_g2

0x15a3,	// (0x0004ace9) bg_popup_fep_shadow_pane_g3

0x15ab,	// (0x0004acf1) bg_popup_fep_shadow_pane_g4

0x15b4,	// (0x0004acfa) bg_popup_fep_shadow_pane_g5

0x15be,	// (0x0004ad04) bg_popup_fep_shadow_pane_g6

0x15c6,	// (0x0004ad0c) bg_popup_fep_shadow_pane_g7

0xa17e,	// (0x000538c4) bg_popup_fep_shadow_pane_g8

0x52cb,	// (0x0004ea11) grid_vkb_keypad_number_pane_ParamLimits

0x52cb,	// (0x0004ea11) grid_vkb_keypad_number_pane

0x52db,	// (0x0004ea21) grid_vkb_keypad_pane_ParamLimits

0x52db,	// (0x0004ea21) grid_vkb_keypad_pane

0x5301,	// (0x0004ea47) fep_vkb_bottom_pane_g1_ParamLimits

0x5301,	// (0x0004ea47) fep_vkb_bottom_pane_g1

0x532a,	// (0x0004ea70) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x532a,	// (0x0004ea70) grid_vkb_keypad_bottom_left_pane

0x533f,	// (0x0004ea85) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x533f,	// (0x0004ea85) grid_vkb_keypad_bottom_right_pane

0x5354,	// (0x0004ea9a) fep_vkb_top_text_pane_g1

0xd160,	// (0x000568a6) fep_vkb_top_text_pane_t1

0xd172,	// (0x000568b8) cell_vkb_side_pane_ParamLimits

0xd172,	// (0x000568b8) cell_vkb_side_pane

0x4f9c,	// (0x0004e6e2) cell_vkb_side_pane_g1

0x53c3,	// (0x0004eb09) cell_vkb_keypad_pane_ParamLimits

0x53c3,	// (0x0004eb09) cell_vkb_keypad_pane

0x5438,	// (0x0004eb7e) cell_vkb_keypad_pane_g1

0x0008,

0xfb51,	// (0x00059297) bg_popup_fep_shadow_pane_g

0x4f9c,	// (0x0004e6e2) cell_hwr_side_pane_g1

0x4f9c,	// (0x0004e6e2) cell_hwr_side_pane_g2

0x5442,	// (0x0004eb88) cell_vkb_keypad_pane_t1

0xd188,	// (0x000568ce) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd188,	// (0x000568ce) cell_vkb_keypad_bottom_left_pane

0xd19d,	// (0x000568e3) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd19d,	// (0x000568e3) cell_vkb_keypad_bottom_right_pane

0x4f9c,	// (0x0004e6e2) cell_vkb_keypad_bottom_left_pane_g1

0x4f9c,	// (0x0004e6e2) cell_vkb_keypad_bottom_right_pane_g1

0x54a6,	// (0x0004ebec) cell_vkb_keypad_number_pane_ParamLimits

0x54a6,	// (0x0004ebec) cell_vkb_keypad_number_pane

0x54c5,	// (0x0004ec0b) cell_vkb_keypad_number_pane_g1

0x54cf,	// (0x0004ec15) cell_vkb_keypad_number_pane_g2

0x54d8,	// (0x0004ec1e) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb43,	// (0x00059289) cell_vkb_keypad_number_pane_g

0x5442,	// (0x0004eb88) cell_vkb_keypad_number_pane_t1

0x54fc,	// (0x0004ec42) fep_vkb_candidate_pane_g1

0x0001,

0xfb3e,	// (0x00059284) cell_hwr_side_pane_g

0x5515,	// (0x0004ec5b) cell_hwr_side_pane_t1

0x15d8,	// (0x0004ad1e) cell_hwr_side_pane_t1_copy1

0x520c,	// (0x0004e952) cell_hwr_candidate_pane_g1

0x15e6,	// (0x0004ad2c) cell_hwr_candidate_pane_t1

0x4f9c,	// (0x0004e6e2) cell_vkb_candidate_pane_g2

0x559b,	// (0x0004ece1) cell_vkb_candidate_pane_t1

0x13a6,	// (0x0004aaec) bg_popup_fep_shadow_pane_ParamLimits

0x13a6,	// (0x0004aaec) bg_popup_fep_shadow_pane

0xd014,	// (0x0005675a) bg_fep_hwr_top_pane_g4

0x501c,	// (0x0004e762) bg_hwr_side_pane_g1_ParamLimits

0x501c,	// (0x0004e762) bg_hwr_side_pane_g1

0xb69e,	// (0x00054de4) cell_hwr_side_pane_ParamLimits

0xb69e,	// (0x00054de4) cell_hwr_side_pane

0x14f9,	// (0x0004ac3f) fep_hwr_write_pane_g1_ParamLimits

0x14f9,	// (0x0004ac3f) fep_hwr_write_pane_g1

0x1506,	// (0x0004ac4c) fep_hwr_write_pane_g2_ParamLimits

0x1506,	// (0x0004ac4c) fep_hwr_write_pane_g2

0x1513,	// (0x0004ac59) fep_hwr_write_pane_g3_ParamLimits

0x1513,	// (0x0004ac59) fep_hwr_write_pane_g3

0xb6be,	// (0x00054e04) fep_hwr_write_pane_g4_ParamLimits

0xb6be,	// (0x00054e04) fep_hwr_write_pane_g4

0x0005,

0xfb10,	// (0x00059256) fep_hwr_write_pane_g_ParamLimits

0xfb10,	// (0x00059256) fep_hwr_write_pane_g

0xd014,	// (0x0005675a) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xd014,	// (0x0005675a) bg_fep_hwr_candidate_pane_g2

0x1536,	// (0x0004ac7c) cell_hwr_candidate_pane_ParamLimits

0x1536,	// (0x0004ac7c) cell_hwr_candidate_pane

0x1578,	// (0x0004acbe) fep_hwr_candidate_pane_g1_ParamLimits

0x507c,	// (0x0004e7c2) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x507c,	// (0x0004e7c2) bg_popup_fep_shadow_pane_cp2

0x520c,	// (0x0004e952) fep_vkb_top_pane_g4_ParamLimits

0x520c,	// (0x0004e952) fep_vkb_top_pane_g4

0x5252,	// (0x0004e998) fep_vkb_side_pane_g2_ParamLimits

0x5252,	// (0x0004e998) fep_vkb_side_pane_g2

0x8f27,	// (0x0005266d) list_setting_pane_t4_ParamLimits

0x8f27,	// (0x0005266d) list_setting_pane_t4

0x8fc1,	// (0x00052707) list_setting_number_pane_t5_ParamLimits

0x8fc1,	// (0x00052707) list_setting_number_pane_t5

0xbef6,	// (0x0005563c) list_double_heading_pane_cp2_ParamLimits

0xbef6,	// (0x0005563c) list_double_heading_pane_cp2

0x4ccb,	// (0x0004e411) list_double_heading_pane_g1_cp2_ParamLimits

0x4ccb,	// (0x0004e411) list_double_heading_pane_g1_cp2

0x55a9,	// (0x0004ecef) list_double_heading_pane_g2_cp2_ParamLimits

0x55a9,	// (0x0004ecef) list_double_heading_pane_g2_cp2

0x55bd,	// (0x0004ed03) list_double_heading_pane_t1_cp2_ParamLimits

0x55bd,	// (0x0004ed03) list_double_heading_pane_t1_cp2

0x55d3,	// (0x0004ed19) list_double_heading_pane_t2_cp2_ParamLimits

0x55d3,	// (0x0004ed19) list_double_heading_pane_t2_cp2

0x940f,	// (0x00052b55) aid_value_unit2

0xeea1,	// (0x000585e7) popup_preview_fixed_window

0x9b26,	// (0x0005326c) bg_popup_preview_window_pane_cp02

0x55e5,	// (0x0004ed2b) list_preview_fixed_pane

0x562b,	// (0x0004ed71) list_empty_pane_fp_ParamLimits

0x562b,	// (0x0004ed71) list_empty_pane_fp

0x562b,	// (0x0004ed71) list_single_cale_day_pane_fp_ParamLimits

0x562b,	// (0x0004ed71) list_single_cale_day_pane_fp

0x562b,	// (0x0004ed71) list_single_graphic_heading_pane_fp_ParamLimits

0x562b,	// (0x0004ed71) list_single_graphic_heading_pane_fp

0x562b,	// (0x0004ed71) list_single_graphic_pane_fp_ParamLimits

0x562b,	// (0x0004ed71) list_single_graphic_pane_fp

0x562b,	// (0x0004ed71) list_single_heading_pane_fp_ParamLimits

0x562b,	// (0x0004ed71) list_single_heading_pane_fp

0x562b,	// (0x0004ed71) list_single_pane_fp_ParamLimits

0x562b,	// (0x0004ed71) list_single_pane_fp

0x5641,	// (0x0004ed87) list_single_pane_fp_g1_ParamLimits

0x5641,	// (0x0004ed87) list_single_pane_fp_g1

0x564d,	// (0x0004ed93) list_single_pane_fp_g2_ParamLimits

0x564d,	// (0x0004ed93) list_single_pane_fp_g2

0x5659,	// (0x0004ed9f) list_single_pane_fp_g3_ParamLimits

0x5659,	// (0x0004ed9f) list_single_pane_fp_g3

0x566d,	// (0x0004edb3) list_single_pane_fp_g4_ParamLimits

0x566d,	// (0x0004edb3) list_single_pane_fp_g4

0x0003,

0xfb72,	// (0x000592b8) list_single_pane_fp_g_ParamLimits

0xfb72,	// (0x000592b8) list_single_pane_fp_g

0xf1c2,	// (0x00058908) list_single_pane_fp_t1_ParamLimits

0xf1c2,	// (0x00058908) list_single_pane_fp_t1

0xf1d9,	// (0x0005891f) list_single_graphic_pane_fp_g1_ParamLimits

0xf1d9,	// (0x0005891f) list_single_graphic_pane_fp_g1

0x5641,	// (0x0004ed87) list_single_graphic_pane_fp_g2_ParamLimits

0x5641,	// (0x0004ed87) list_single_graphic_pane_fp_g2

0x564d,	// (0x0004ed93) list_single_graphic_pane_fp_g3_ParamLimits

0x564d,	// (0x0004ed93) list_single_graphic_pane_fp_g3

0x5659,	// (0x0004ed9f) list_single_graphic_pane_fp_g4_ParamLimits

0x5659,	// (0x0004ed9f) list_single_graphic_pane_fp_g4

0x566d,	// (0x0004edb3) list_single_graphic_pane_fp_g5_ParamLimits

0x566d,	// (0x0004edb3) list_single_graphic_pane_fp_g5

0x0004,

0xfb7b,	// (0x000592c1) list_single_graphic_pane_fp_g_ParamLimits

0xfb7b,	// (0x000592c1) list_single_graphic_pane_fp_g

0xf1e5,	// (0x0005892b) list_single_graphic_pane_fp_t1_ParamLimits

0xf1e5,	// (0x0005892b) list_single_graphic_pane_fp_t1

0xf1d9,	// (0x0005891f) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xf1d9,	// (0x0005891f) list_single_graphic_heading_pane_fp_g1

0x5641,	// (0x0004ed87) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x5641,	// (0x0004ed87) list_single_graphic_heading_pane_fp_g2

0x564d,	// (0x0004ed93) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x564d,	// (0x0004ed93) list_single_graphic_heading_pane_fp_g3

0x5659,	// (0x0004ed9f) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x5659,	// (0x0004ed9f) list_single_graphic_heading_pane_fp_g4

0x566d,	// (0x0004edb3) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x566d,	// (0x0004edb3) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7b,	// (0x000592c1) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7b,	// (0x000592c1) list_single_graphic_heading_pane_fp_g

0xf1fb,	// (0x00058941) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xf1fb,	// (0x00058941) list_single_graphic_heading_pane_fp_t1

0xf211,	// (0x00058957) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xf211,	// (0x00058957) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb86,	// (0x000592cc) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb86,	// (0x000592cc) list_single_graphic_heading_pane_fp_t

0xf223,	// (0x00058969) list_single_cale_day_pane_fp_g1_ParamLimits

0xf223,	// (0x00058969) list_single_cale_day_pane_fp_g1

0x5679,	// (0x0004edbf) list_single_cale_day_pane_fp_g2_ParamLimits

0x5679,	// (0x0004edbf) list_single_cale_day_pane_fp_g2

0x1604,	// (0x0004ad4a) list_single_cale_day_pane_fp_g3_ParamLimits

0x1604,	// (0x0004ad4a) list_single_cale_day_pane_fp_g3

0x162c,	// (0x0004ad72) list_single_cale_day_pane_fp_g4_ParamLimits

0x162c,	// (0x0004ad72) list_single_cale_day_pane_fp_g4

0x1650,	// (0x0004ad96) list_single_cale_day_pane_fp_g5_ParamLimits

0x1650,	// (0x0004ad96) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8b,	// (0x000592d1) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8b,	// (0x000592d1) list_single_cale_day_pane_fp_g

0xf25b,	// (0x000589a1) list_single_cale_day_pane_fp_t1_ParamLimits

0xf25b,	// (0x000589a1) list_single_cale_day_pane_fp_t1

0xf281,	// (0x000589c7) list_single_cale_day_pane_fp_t2_ParamLimits

0xf281,	// (0x000589c7) list_single_cale_day_pane_fp_t2

0xf29a,	// (0x000589e0) list_single_cale_day_pane_fp_t3_ParamLimits

0xf29a,	// (0x000589e0) list_single_cale_day_pane_fp_t3

0x0002,

0xfb96,	// (0x000592dc) list_single_cale_day_pane_fp_t_ParamLimits

0xfb96,	// (0x000592dc) list_single_cale_day_pane_fp_t

0x5641,	// (0x0004ed87) list_empty_pane_fp_g1_ParamLimits

0x5641,	// (0x0004ed87) list_empty_pane_fp_g1

0xf2b3,	// (0x000589f9) list_empty_pane_fp_t1

0xf2c1,	// (0x00058a07) list_empty_pane_fp_t2

0x0001,

0xfb9d,	// (0x000592e3) list_empty_pane_fp_t

0x5641,	// (0x0004ed87) list_single_heading_pane_fp_g1_ParamLimits

0x5641,	// (0x0004ed87) list_single_heading_pane_fp_g1

0x564d,	// (0x0004ed93) list_single_heading_pane_fp_g2_ParamLimits

0x564d,	// (0x0004ed93) list_single_heading_pane_fp_g2

0x5659,	// (0x0004ed9f) list_single_heading_pane_fp_g3_ParamLimits

0x5659,	// (0x0004ed9f) list_single_heading_pane_fp_g3

0x0002,

0xfba2,	// (0x000592e8) list_single_heading_pane_fp_g_ParamLimits

0xfba2,	// (0x000592e8) list_single_heading_pane_fp_g

0xf2cf,	// (0x00058a15) list_single_heading_pane_fp_t1_ParamLimits

0xf2cf,	// (0x00058a15) list_single_heading_pane_fp_t1

0xf2e1,	// (0x00058a27) list_single_heading_pane_fp_t2_ParamLimits

0xf2e1,	// (0x00058a27) list_single_heading_pane_fp_t2

0x0001,

0xfba9,	// (0x000592ef) list_single_heading_pane_fp_t_ParamLimits

0xfba9,	// (0x000592ef) list_single_heading_pane_fp_t

0xa2e9,	// (0x00053a2f) aid_size_cell_fast

0x9aa6,	// (0x000531ec) soft_indicator_pane_cp1_t1

0xa323,	// (0x00053a69) cell_app_pane_cp2_ParamLimits

0xa323,	// (0x00053a69) cell_app_pane_cp2

0x13c8,	// (0x0004ab0e) fep_hwr_candidate_drop_down_list_pane

0xd022,	// (0x00056768) fep_hwr_candidate_pane_g3_ParamLimits

0xd022,	// (0x00056768) fep_hwr_candidate_pane_g3

0xd02f,	// (0x00056775) fep_hwr_candidate_pane_g4_ParamLimits

0xd02f,	// (0x00056775) fep_hwr_candidate_pane_g4

0x0002,

0xfb1d,	// (0x00059263) fep_hwr_candidate_pane_g_ParamLimits

0xfb1d,	// (0x00059263) fep_hwr_candidate_pane_g

0x5101,	// (0x0004e847) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x5101,	// (0x0004e847) fep_vkb_candidate_drop_down_list_pane

0x5504,	// (0x0004ec4a) fep_vkb_candidate_pane_g3

0x550c,	// (0x0004ec52) fep_vkb_candidate_pane_g4

0x0002,

0xfb4a,	// (0x00059290) fep_vkb_candidate_pane_g

0x520c,	// (0x0004e952) cell_hwr_candidate_pane_g1_ParamLimits

0x5523,	// (0x0004ec69) cell_hwr_candidate_pane_g3_ParamLimits

0x5523,	// (0x0004ec69) cell_hwr_candidate_pane_g3

0x5544,	// (0x0004ec8a) cell_hwr_candidate_pane_g4_ParamLimits

0x5544,	// (0x0004ec8a) cell_hwr_candidate_pane_g4

0x0002,

0xfb64,	// (0x000592aa) cell_hwr_candidate_pane_g_ParamLimits

0xfb64,	// (0x000592aa) cell_hwr_candidate_pane_g

0x5565,	// (0x0004ecab) cell_vkb_candidate_pane_g3_ParamLimits

0x5565,	// (0x0004ecab) cell_vkb_candidate_pane_g3

0x5580,	// (0x0004ecc6) cell_vkb_candidate_pane_g4_ParamLimits

0x5580,	// (0x0004ecc6) cell_vkb_candidate_pane_g4

0xd1b8,	// (0x000568fe) cell_app_pane_cp2_g1_ParamLimits

0xd1b8,	// (0x000568fe) cell_app_pane_cp2_g1

0x56a3,	// (0x0004ede9) cell_app_pane_cp2_g2_ParamLimits

0x56a3,	// (0x0004ede9) cell_app_pane_cp2_g2

0x0001,

0xfbae,	// (0x000592f4) cell_app_pane_cp2_g_ParamLimits

0xfbae,	// (0x000592f4) cell_app_pane_cp2_g

0x56af,	// (0x0004edf5) cell_app_pane_cp2_t1_ParamLimits

0x56af,	// (0x0004edf5) cell_app_pane_cp2_t1

0xa112,	// (0x00053858) grid_highlight_pane_cp1_ParamLimits

0xa112,	// (0x00053858) grid_highlight_pane_cp1

0x1674,	// (0x0004adba) cell_hwr_candidate_pane_cp1_ParamLimits

0x1674,	// (0x0004adba) cell_hwr_candidate_pane_cp1

0x520c,	// (0x0004e952) fep_hwr_candidate_drop_down_list_pane_g1

0x56c1,	// (0x0004ee07) fep_hwr_candidate_drop_down_list_pane_g2

0x56ce,	// (0x0004ee14) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb3,	// (0x000592f9) fep_hwr_candidate_drop_down_list_pane_g

0x1693,	// (0x0004add9) fep_hwr_candidate_drop_down_list_scroll_pane

0x169c,	// (0x0004ade2) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x169c,	// (0x0004ade2) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x16a9,	// (0x0004adef) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x16a9,	// (0x0004adef) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x16b6,	// (0x0004adfc) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x16b6,	// (0x0004adfc) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x5565,	// (0x0004ecab) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5565,	// (0x0004ecab) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x5580,	// (0x0004ecc6) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5580,	// (0x0004ecc6) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x16c3,	// (0x0004ae09) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x16c3,	// (0x0004ae09) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x16de,	// (0x0004ae24) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x16de,	// (0x0004ae24) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x16f9,	// (0x0004ae3f) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x16f9,	// (0x0004ae3f) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbba,	// (0x00059300) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbba,	// (0x00059300) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x56db,	// (0x0004ee21) cell_vkb_candidate_pane_cp1_ParamLimits

0x56db,	// (0x0004ee21) cell_vkb_candidate_pane_cp1

0x520c,	// (0x0004e952) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x520c,	// (0x0004e952) fep_vkb_candidate_drop_down_list_pane_g1

0x56c1,	// (0x0004ee07) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x56c1,	// (0x0004ee07) fep_vkb_candidate_drop_down_list_pane_g2

0x56ce,	// (0x0004ee14) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x56ce,	// (0x0004ee14) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb3,	// (0x000592f9) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb3,	// (0x000592f9) fep_vkb_candidate_drop_down_list_pane_g

0x56fb,	// (0x0004ee41) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x56fb,	// (0x0004ee41) fep_vkb_candidate_drop_down_list_scroll_pane

0x5708,	// (0x0004ee4e) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5708,	// (0x0004ee4e) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x5715,	// (0x0004ee5b) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5715,	// (0x0004ee5b) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5721,	// (0x0004ee67) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5721,	// (0x0004ee67) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x5523,	// (0x0004ec69) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5523,	// (0x0004ec69) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x5544,	// (0x0004ec8a) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5544,	// (0x0004ec8a) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x572d,	// (0x0004ee73) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x572d,	// (0x0004ee73) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x574e,	// (0x0004ee94) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x574e,	// (0x0004ee94) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x576f,	// (0x0004eeb5) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x576f,	// (0x0004eeb5) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcb,	// (0x00059311) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcb,	// (0x00059311) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x966b,	// (0x00052db1) title_pane_g1_ParamLimits

0x967e,	// (0x00052dc4) title_pane_g2_ParamLimits

0xf54e,	// (0x00058c94) title_pane_g_ParamLimits

0xbeaf,	// (0x000555f5) aid_call2_pane

0xbeb7,	// (0x000555fd) aid_call_pane

0xbebf,	// (0x00055605) popup_clock_analogue_window_g1

0xbebf,	// (0x00055605) popup_clock_analogue_window_g2

0x0061,	// (0x000497a7) popup_clock_analogue_window_g3

0x006a,	// (0x000497b0) popup_clock_analogue_window_g4

0x9431,	// (0x00052b77) popup_clock_analogue_window_g5

0x0004,

0xf6ee,	// (0x00058e34) popup_clock_analogue_window_g

0x0072,	// (0x000497b8) popup_clock_analogue_window_t1

0x00aa,	// (0x000497f0) clock_digital_number_pane_ParamLimits

0x00aa,	// (0x000497f0) clock_digital_number_pane

0x00b6,	// (0x000497fc) clock_digital_number_pane_cp02_ParamLimits

0x00b6,	// (0x000497fc) clock_digital_number_pane_cp02

0x00c2,	// (0x00049808) clock_digital_number_pane_cp03_ParamLimits

0x00c2,	// (0x00049808) clock_digital_number_pane_cp03

0x00ce,	// (0x00049814) clock_digital_number_pane_cp04_ParamLimits

0x00ce,	// (0x00049814) clock_digital_number_pane_cp04

0x00da,	// (0x00049820) clock_digital_separator_pane_ParamLimits

0x00da,	// (0x00049820) clock_digital_separator_pane

0x00e6,	// (0x0004982c) popup_clock_digital_window_t1_ParamLimits

0x00e6,	// (0x0004982c) popup_clock_digital_window_t1

0x9431,	// (0x00052b77) clock_digital_number_pane_g1

0x9431,	// (0x00052b77) clock_digital_number_pane_g2

0x0001,

0xf6f9,	// (0x00058e3f) clock_digital_number_pane_g

0x9431,	// (0x00052b77) clock_digital_separator_pane_g1

0x9431,	// (0x00052b77) clock_digital_separator_pane_g2

0x0001,

0xf6f9,	// (0x00058e3f) clock_digital_separator_pane_g

0xb3b5,	// (0x00054afb) aid_fill_nsta_ParamLimits

0xc0ba,	// (0x00055800) indicator_nsta_pane_ParamLimits

0x27cb,	// (0x0004bf11) popup_clock_analogue_window

0x27cb,	// (0x0004bf11) popup_clock_digital_window

0xcdb6,	// (0x000564fc) grid_indicator_nsta_pane_ParamLimits

0x499a,	// (0x0004e0e0) clock_nsta_pane_t2

0x0001,

0xfa9d,	// (0x000591e3) clock_nsta_pane_t

0xf52f,	// (0x00058c75) aid_size_max_handle

0xa588,	// (0x00053cce) aid_size_min_handle

0xe405,	// (0x00057b4b) editor_scroll_pane

0x578a,	// (0x0004eed0) ex_editor_pane

0xa271,	// (0x000539b7) scroll_pane_cp13

0xa056,	// (0x0005379c) scroll_pane_cp14

0xbeee,	// (0x00055634) scroll_pane_cp36

0xa6fd,	// (0x00053e43) list_single_graphic_hl_pane_cp2_ParamLimits

0xa6fd,	// (0x00053e43) list_single_graphic_hl_pane_cp2

0xcba2,	// (0x000562e8) list_single_graphic_hl_pane_ParamLimits

0xcba2,	// (0x000562e8) list_single_graphic_hl_pane

0x92a9,	// (0x000529ef) aid_size_min_hl_cp1

0x5792,	// (0x0004eed8) list_highlight_pane_cp34_ParamLimits

0x5792,	// (0x0004eed8) list_highlight_pane_cp34

0x57a3,	// (0x0004eee9) list_single_graphic_hl_pane_g1_ParamLimits

0x57a3,	// (0x0004eee9) list_single_graphic_hl_pane_g1

0x92b2,	// (0x000529f8) list_single_graphic_hl_pane_g2_ParamLimits

0x92b2,	// (0x000529f8) list_single_graphic_hl_pane_g2

0x92b2,	// (0x000529f8) list_single_graphic_hl_pane_g3_ParamLimits

0x92b2,	// (0x000529f8) list_single_graphic_hl_pane_g3

0xe364,	// (0x00057aaa) list_single_graphic_hl_pane_g4_ParamLimits

0xe364,	// (0x00057aaa) list_single_graphic_hl_pane_g4

0x57e0,	// (0x0004ef26) list_single_graphic_hl_pane_g5_ParamLimits

0x57e0,	// (0x0004ef26) list_single_graphic_hl_pane_g5

0x0004,

0xfbdc,	// (0x00059322) list_single_graphic_hl_pane_g_ParamLimits

0xfbdc,	// (0x00059322) list_single_graphic_hl_pane_g

0x92be,	// (0x00052a04) list_single_graphic_hl_pane_t1_ParamLimits

0x92be,	// (0x00052a04) list_single_graphic_hl_pane_t1

0x57b0,	// (0x0004eef6) aid_size_min_hl_cp2

0x57b9,	// (0x0004eeff) list_highlight_pane_cp34_cp2_ParamLimits

0x57b9,	// (0x0004eeff) list_highlight_pane_cp34_cp2

0x57a3,	// (0x0004eee9) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x57a3,	// (0x0004eee9) list_single_graphic_hl_pane_g1_cp2

0x57c6,	// (0x0004ef0c) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x57c6,	// (0x0004ef0c) list_single_graphic_hl_pane_g2_cp2

0xd1d6,	// (0x0005691c) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xd1d6,	// (0x0005691c) list_single_graphic_hl_pane_g3_cp2

0xe364,	// (0x00057aaa) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xe364,	// (0x00057aaa) list_single_graphic_hl_pane_g4_cp2

0x57e0,	// (0x0004ef26) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x57e0,	// (0x0004ef26) list_single_graphic_hl_pane_g5_cp2

0xaab2,	// (0x000541f8) control_pane_g4_ParamLimits

0xaab2,	// (0x000541f8) control_pane_g4

0x24ca,	// (0x0004bc10) bg_popup_sub_pane_cp10_ParamLimits

0x4fa6,	// (0x0004e6ec) list_choice_list_pane_ParamLimits

0x4fb5,	// (0x0004e6fb) scroll_pane_cp23

0x9b26,	// (0x0005326c) bg_popup_preview_window_pane_cp02_ParamLimits

0x55e5,	// (0x0004ed2b) list_preview_fixed_pane_ParamLimits

0x55fb,	// (0x0004ed41) list_preview_fixed_pane_cp_ParamLimits

0x55fb,	// (0x0004ed41) list_preview_fixed_pane_cp

0x5607,	// (0x0004ed4d) popup_preview_fixed_window_g1_ParamLimits

0x5607,	// (0x0004ed4d) popup_preview_fixed_window_g1

0x5613,	// (0x0004ed59) popup_preview_fixed_window_g2_ParamLimits

0x5613,	// (0x0004ed59) popup_preview_fixed_window_g2

0x0002,

0xfb6b,	// (0x000592b1) popup_preview_fixed_window_g_ParamLimits

0xfb6b,	// (0x000592b1) popup_preview_fixed_window_g

0xf4a3,	// (0x00058be9) aid_navi_side_left_pane_ParamLimits

0xf4b8,	// (0x00058bfe) aid_navi_side_right_pane_ParamLimits

0xf4d0,	// (0x00058c16) navi_icon_pane_stacon_ParamLimits

0xf4e4,	// (0x00058c2a) navi_navi_pane_stacon_ParamLimits

0xf4d0,	// (0x00058c16) navi_text_pane_stacon_ParamLimits

0x9427,	// (0x00052b6d) main_text_info_pane

0x580a,	// (0x0004ef50) listscroll_text_info_pane

0x5812,	// (0x0004ef58) list_text_info_pane_ParamLimits

0x5812,	// (0x0004ef58) list_text_info_pane

0x5821,	// (0x0004ef67) scroll_pane_cp24_ParamLimits

0x5821,	// (0x0004ef67) scroll_pane_cp24

0xd1e4,	// (0x0005692a) list_text_info_pane_t1_ParamLimits

0xd1e4,	// (0x0005692a) list_text_info_pane_t1

0xac56,	// (0x0005439c) popup_fast_swap2_window_ParamLimits

0xac56,	// (0x0005439c) popup_fast_swap2_window

0x5873,	// (0x0004efb9) aid_size_cell_fast2

0x9427,	// (0x00052b6d) bg_popup_window_pane_cp17

0x2e58,	// (0x0004c59e) heading_pane_cp2

0x9d99,	// (0x000534df) listscroll_fast2_pane

0x587d,	// (0x0004efc3) grid_fast2_pane

0x5887,	// (0x0004efcd) listscroll_fast2_pane_g1

0x588f,	// (0x0004efd5) listscroll_fast2_pane_g2

0x0001,

0xfbe7,	// (0x0005932d) listscroll_fast2_pane_g

0xa271,	// (0x000539b7) scroll_pane_cp26

0x5899,	// (0x0004efdf) cell_fast2_pane_ParamLimits

0x5899,	// (0x0004efdf) cell_fast2_pane

0x58ae,	// (0x0004eff4) cell_fast2_pane_g1

0x58b7,	// (0x0004effd) cell_fast2_pane_g2

0x58c0,	// (0x0004f006) cell_fast2_pane_g3

0x0002,

0xfbec,	// (0x00059332) cell_fast2_pane_g

0x9e80,	// (0x000535c6) grid_highlight_pane_cp9

0x9e95,	// (0x000535db) main_eswt_pane_ParamLimits

0x9e95,	// (0x000535db) main_eswt_pane

0x5836,	// (0x0004ef7c) list_single_text_info_pane

0x58c8,	// (0x0004f00e) eswt_ctrl_button_pane

0x58c8,	// (0x0004f00e) eswt_ctrl_canvas_pane

0xd200,	// (0x00056946) eswt_ctrl_combo_pane

0x58c8,	// (0x0004f00e) eswt_ctrl_default_pane

0x58c8,	// (0x0004f00e) eswt_ctrl_label_pane

0x58d8,	// (0x0004f01e) eswt_ctrl_wait_pane

0xd208,	// (0x0005694e) eswt_shell_pane

0x9427,	// (0x00052b6d) listscroll_eswt_app_pane

0x5900,	// (0x0004f046) popup_eswt_tasktip_window_ParamLimits

0x5900,	// (0x0004f046) popup_eswt_tasktip_window

0x2a65,	// (0x0004c1ab) bg_popup_window_pane_cp18

0x5911,	// (0x0004f057) eswt_control_pane_g1_ParamLimits

0x5911,	// (0x0004f057) eswt_control_pane_g1

0x591e,	// (0x0004f064) eswt_control_pane_g2_ParamLimits

0x591e,	// (0x0004f064) eswt_control_pane_g2

0x592b,	// (0x0004f071) eswt_control_pane_g3_ParamLimits

0x592b,	// (0x0004f071) eswt_control_pane_g3

0x5938,	// (0x0004f07e) eswt_control_pane_g4_ParamLimits

0x5938,	// (0x0004f07e) eswt_control_pane_g4

0x0003,

0xfbf3,	// (0x00059339) eswt_control_pane_g_ParamLimits

0xfbf3,	// (0x00059339) eswt_control_pane_g

0xa112,	// (0x00053858) bg_button_pane_ParamLimits

0xa112,	// (0x00053858) bg_button_pane

0x9e95,	// (0x000535db) common_borders_pane_copy2_ParamLimits

0x9e95,	// (0x000535db) common_borders_pane_copy2

0x5945,	// (0x0004f08b) control_button_pane_g1_ParamLimits

0x5945,	// (0x0004f08b) control_button_pane_g1

0x5951,	// (0x0004f097) control_button_pane_g2_ParamLimits

0x5951,	// (0x0004f097) control_button_pane_g2

0x595d,	// (0x0004f0a3) control_button_pane_g3_ParamLimits

0x595d,	// (0x0004f0a3) control_button_pane_g3

0x0002,

0xfbfc,	// (0x00059342) control_button_pane_g_ParamLimits

0xfbfc,	// (0x00059342) control_button_pane_g

0x5971,	// (0x0004f0b7) control_button_pane_t1

0x597f,	// (0x0004f0c5) control_button_pane_t2

0x0001,

0xfc03,	// (0x00059349) control_button_pane_t

0x29f1,	// (0x0004c137) bg_button_pane_g1

0x29f9,	// (0x0004c13f) bg_button_pane_g2

0x2a01,	// (0x0004c147) bg_button_pane_g3

0x2a09,	// (0x0004c14f) bg_button_pane_g4

0x2a11,	// (0x0004c157) bg_button_pane_g5

0x2a19,	// (0x0004c15f) bg_button_pane_g6

0x2a21,	// (0x0004c167) bg_button_pane_g7

0x2a29,	// (0x0004c16f) bg_button_pane_g8

0x2a31,	// (0x0004c177) bg_button_pane_g9

0x0008,

0xf850,	// (0x00058f96) bg_button_pane_g

0x4f61,	// (0x0004e6a7) common_borders_pane_ParamLimits

0x4f61,	// (0x0004e6a7) common_borders_pane

0x5911,	// (0x0004f057) eswt_control_pane_g1_copy1_ParamLimits

0x5911,	// (0x0004f057) eswt_control_pane_g1_copy1

0x591e,	// (0x0004f064) eswt_control_pane_g2_copy1_ParamLimits

0x591e,	// (0x0004f064) eswt_control_pane_g2_copy1

0x592b,	// (0x0004f071) eswt_control_pane_g3_copy1_ParamLimits

0x592b,	// (0x0004f071) eswt_control_pane_g3_copy1

0x5938,	// (0x0004f07e) eswt_control_pane_g4_copy1_ParamLimits

0x5938,	// (0x0004f07e) eswt_control_pane_g4_copy1

0x4f9c,	// (0x0004e6e2) bg_eswt_ctrl_canvas_pane_g1

0x4f61,	// (0x0004e6a7) common_borders_pane_cp2_ParamLimits

0x4f61,	// (0x0004e6a7) common_borders_pane_cp2

0x4f61,	// (0x0004e6a7) common_borders_pane_cp3_ParamLimits

0x4f61,	// (0x0004e6a7) common_borders_pane_cp3

0x598d,	// (0x0004f0d3) separator_horizontal_pane

0x5995,	// (0x0004f0db) separator_vertical_pane

0x5911,	// (0x0004f057) eswt_control_pane_g1_copy2_ParamLimits

0x5911,	// (0x0004f057) eswt_control_pane_g1_copy2

0x591e,	// (0x0004f064) eswt_control_pane_g2_copy2_ParamLimits

0x591e,	// (0x0004f064) eswt_control_pane_g2_copy2

0x592b,	// (0x0004f071) eswt_control_pane_g3_copy2_ParamLimits

0x592b,	// (0x0004f071) eswt_control_pane_g3_copy2

0x5938,	// (0x0004f07e) eswt_control_pane_g4_copy2_ParamLimits

0x5938,	// (0x0004f07e) eswt_control_pane_g4_copy2

0x9427,	// (0x00052b6d) common_borders_pane_cp4

0x599e,	// (0x0004f0e4) separator_horizontal_pane_g1

0x59a7,	// (0x0004f0ed) separator_horizontal_pane_g2

0x59b0,	// (0x0004f0f6) separator_horizontal_pane_g3

0x0002,

0xfc08,	// (0x0005934e) separator_horizontal_pane_g

0x5911,	// (0x0004f057) eswt_control_pane_g1_copy3_ParamLimits

0x5911,	// (0x0004f057) eswt_control_pane_g1_copy3

0x591e,	// (0x0004f064) eswt_control_pane_g2_copy3_ParamLimits

0x591e,	// (0x0004f064) eswt_control_pane_g2_copy3

0x592b,	// (0x0004f071) eswt_control_pane_g3_copy3_ParamLimits

0x592b,	// (0x0004f071) eswt_control_pane_g3_copy3

0x5938,	// (0x0004f07e) eswt_control_pane_g4_copy3_ParamLimits

0x5938,	// (0x0004f07e) eswt_control_pane_g4_copy3

0x9427,	// (0x00052b6d) common_borders_pane_cp5

0x59b9,	// (0x0004f0ff) separator_vertical_pane_g1

0x59c2,	// (0x0004f108) separator_vertical_pane_g2

0x59cb,	// (0x0004f111) separator_vertical_pane_g3

0x0002,

0xfc0f,	// (0x00059355) separator_vertical_pane_g

0x5911,	// (0x0004f057) eswt_control_pane_g1_copy4_ParamLimits

0x5911,	// (0x0004f057) eswt_control_pane_g1_copy4

0x591e,	// (0x0004f064) eswt_control_pane_g2_copy4_ParamLimits

0x591e,	// (0x0004f064) eswt_control_pane_g2_copy4

0x592b,	// (0x0004f071) eswt_control_pane_g3_copy4_ParamLimits

0x592b,	// (0x0004f071) eswt_control_pane_g3_copy4

0x5938,	// (0x0004f07e) eswt_control_pane_g4_copy4_ParamLimits

0x5938,	// (0x0004f07e) eswt_control_pane_g4_copy4

0xd228,	// (0x0005696e) eswt_ctrl_combo_button_pane

0xd230,	// (0x00056976) eswt_ctrl_input_pane

0xd238,	// (0x0005697e) popup_choice_list_window_cp70

0xd240,	// (0x00056986) eswt_ctrl_input_pane_t1

0x9427,	// (0x00052b6d) input_focus_pane_cp70

0x4f61,	// (0x0004e6a7) bg_button_pane_cp70_ParamLimits

0x4f61,	// (0x0004e6a7) bg_button_pane_cp70

0xd24e,	// (0x00056994) eswt_ctrl_combo_button_pane_g1

0x5a02,	// (0x0004f148) wait_bar_pane_cp70

0x2a65,	// (0x0004c1ab) bg_popup_window_pane_cp70_ParamLimits

0x2a65,	// (0x0004c1ab) bg_popup_window_pane_cp70

0x5a0a,	// (0x0004f150) popup_eswt_tasktip_window_t1

0x5a20,	// (0x0004f166) wait_bar_pane_cp71_ParamLimits

0x5a20,	// (0x0004f166) wait_bar_pane_cp71

0x5a2c,	// (0x0004f172) grid_eswt_app_pane

0xa5cd,	// (0x00053d13) scroll_pane_cp70

0xd256,	// (0x0005699c) cell_eswt_app_pane_ParamLimits

0xd256,	// (0x0005699c) cell_eswt_app_pane

0xd280,	// (0x000569c6) cell_eswt_app_pane_g1_ParamLimits

0xd280,	// (0x000569c6) cell_eswt_app_pane_g1

0xd2af,	// (0x000569f5) cell_eswt_app_pane_g2_ParamLimits

0xd2af,	// (0x000569f5) cell_eswt_app_pane_g2

0x0001,

0xfc16,	// (0x0005935c) cell_eswt_app_pane_g_ParamLimits

0xfc16,	// (0x0005935c) cell_eswt_app_pane_g

0xd2d3,	// (0x00056a19) cell_eswt_app_pane_t1_ParamLimits

0xd2d3,	// (0x00056a19) cell_eswt_app_pane_t1

0x5aea,	// (0x0004f230) grid_highlight_pane_cp70_ParamLimits

0x5aea,	// (0x0004f230) grid_highlight_pane_cp70

0xe308,	// (0x00057a4e) set_content_pane_g1

0xaa44,	// (0x0005418a) status_small_volume_pane

0xb6d3,	// (0x00054e19) status_small_volume_pane_g1

0xb6db,	// (0x00054e21) volume_small2_pane

0xb6e4,	// (0x00054e2a) volume_small2_pane_g1

0xb6ed,	// (0x00054e33) volume_small2_pane_g2

0xb6f6,	// (0x00054e3c) volume_small2_pane_g3

0xb6ff,	// (0x00054e45) volume_small2_pane_g4

0xb708,	// (0x00054e4e) volume_small2_pane_g5

0xb711,	// (0x00054e57) volume_small2_pane_g6

0xb71a,	// (0x00054e60) volume_small2_pane_g7

0xb723,	// (0x00054e69) volume_small2_pane_g8

0xb72c,	// (0x00054e72) volume_small2_pane_g9

0xb735,	// (0x00054e7b) volume_small2_pane_g10

0x0009,

0xfc1b,	// (0x00059361) volume_small2_pane_g

0x5354,	// (0x0004ea9a) fep_vkb_top_text_pane_g1_ParamLimits

0xd160,	// (0x000568a6) fep_vkb_top_text_pane_t1_ParamLimits

0x561f,	// (0x0004ed65) popup_preview_fixed_window_g3_ParamLimits

0x561f,	// (0x0004ed65) popup_preview_fixed_window_g3

0xb2f3,	// (0x00054a39) popup_toolbar_trans_pane

0xca3b,	// (0x00056181) aid_height_set_list_ParamLimits

0x3dac,	// (0x0004d4f2) aid_size_parent_ParamLimits

0x24ca,	// (0x0004bc10) list_highlight_pane_cp2_ParamLimits

0xe308,	// (0x00057a4e) set_content_pane_g1_ParamLimits

0xcbb4,	// (0x000562fa) list_single_image_pane_ParamLimits

0xcbb4,	// (0x000562fa) list_single_image_pane

0xd305,	// (0x00056a4b) aid_size_cell_image_ParamLimits

0xd305,	// (0x00056a4b) aid_size_cell_image

0xd312,	// (0x00056a58) grid_single_image_pane_ParamLimits

0xd312,	// (0x00056a58) grid_single_image_pane

0x564d,	// (0x0004ed93) list_single_image_pane_g1_ParamLimits

0x564d,	// (0x0004ed93) list_single_image_pane_g1

0x5659,	// (0x0004ed9f) list_single_image_pane_g2_ParamLimits

0x5659,	// (0x0004ed9f) list_single_image_pane_g2

0x0001,

0xfc30,	// (0x00059376) list_single_image_pane_g_ParamLimits

0xfc30,	// (0x00059376) list_single_image_pane_g

0x5b11,	// (0x0004f257) list_single_image_pane_t1_ParamLimits

0x5b11,	// (0x0004f257) list_single_image_pane_t1

0xd31e,	// (0x00056a64) cell_image_list_pane_ParamLimits

0xd31e,	// (0x00056a64) cell_image_list_pane

0xd332,	// (0x00056a78) cell_image_list_pane_g1

0xd33b,	// (0x00056a81) cell_image_list_pane_g2

0x0001,

0xfc35,	// (0x0005937b) cell_image_list_pane_g

0xd344,	// (0x00056a8a) aid_size_cell_tb_trans_pane

0xa112,	// (0x00053858) bg_tb_trans_pane

0xd356,	// (0x00056a9c) grid_tb_trans_pane

0x29f1,	// (0x0004c137) bg_tb_trans_pane_g1

0x29f9,	// (0x0004c13f) bg_tb_trans_pane_g2

0x2a01,	// (0x0004c147) bg_tb_trans_pane_g3

0x2a09,	// (0x0004c14f) bg_tb_trans_pane_g4

0x2a11,	// (0x0004c157) bg_tb_trans_pane_g5

0x2a29,	// (0x0004c16f) bg_tb_trans_pane_g6

0x2a31,	// (0x0004c177) bg_tb_trans_pane_g7

0x2a19,	// (0x0004c15f) bg_tb_trans_pane_g8

0x2a21,	// (0x0004c167) bg_tb_trans_pane_g9

0x0008,

0xfc3a,	// (0x00059380) bg_tb_trans_pane_g

0xd36a,	// (0x00056ab0) cell_toolbar_trans_pane_ParamLimits

0xd36a,	// (0x00056ab0) cell_toolbar_trans_pane

0x4f9c,	// (0x0004e6e2) cell_toolbar_trans_pane_g1

0xce7d,	// (0x000565c3) list_form2_midp_pane_t1

0xce8b,	// (0x000565d1) list_form2_midp_pane_t2

0x0001,

0xfae3,	// (0x00059229) list_form2_midp_pane_t

0x4b77,	// (0x0004e2bd) scroll_pane_cp51_ParamLimits

0x4d3f,	// (0x0004e485) form2_midp_wait_pane_g1

0x4d48,	// (0x0004e48e) form2_midp_wait_pane_g2

0x4d51,	// (0x0004e497) form2_midp_wait_pane_g3

0x0002,

0xfaf8,	// (0x0005923e) form2_midp_wait_pane_g

0x97bc,	// (0x00052f02) list_highlight_pane_cp21_ParamLimits

0x4d99,	// (0x0004e4df) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x4da8,	// (0x0004e4ee) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x3f60,	// (0x0004d6a6) list_single_2graphic_im_pane_ParamLimits

0x3f60,	// (0x0004d6a6) list_single_2graphic_im_pane

0xd390,	// (0x00056ad6) list_single_2graphic_im_pane_g1_ParamLimits

0xd390,	// (0x00056ad6) list_single_2graphic_im_pane_g1

0xd3a1,	// (0x00056ae7) list_single_2graphic_im_pane_g2_ParamLimits

0xd3a1,	// (0x00056ae7) list_single_2graphic_im_pane_g2

0xd3ad,	// (0x00056af3) list_single_2graphic_im_pane_g3_ParamLimits

0xd3ad,	// (0x00056af3) list_single_2graphic_im_pane_g3

0x0003,

0xfc4d,	// (0x00059393) list_single_2graphic_im_pane_g_ParamLimits

0xfc4d,	// (0x00059393) list_single_2graphic_im_pane_g

0xd3c1,	// (0x00056b07) list_single_2graphic_im_pane_t1_ParamLimits

0xd3c1,	// (0x00056b07) list_single_2graphic_im_pane_t1

0x562b,	// (0x0004ed71) list_single_graphic_2heading_pane_fp_ParamLimits

0x562b,	// (0x0004ed71) list_single_graphic_2heading_pane_fp

0xf1d9,	// (0x0005891f) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xf1d9,	// (0x0005891f) list_single_graphic_2heading_pane_fp_g1

0x5641,	// (0x0004ed87) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x5641,	// (0x0004ed87) list_single_graphic_2heading_pane_fp_g2

0x564d,	// (0x0004ed93) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x564d,	// (0x0004ed93) list_single_graphic_2heading_pane_fp_g3

0x5659,	// (0x0004ed9f) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x5659,	// (0x0004ed9f) list_single_graphic_2heading_pane_fp_g4

0x566d,	// (0x0004edb3) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x566d,	// (0x0004edb3) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7b,	// (0x000592c1) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7b,	// (0x000592c1) list_single_graphic_2heading_pane_fp_g

0xf2f7,	// (0x00058a3d) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xf2f7,	// (0x00058a3d) list_single_graphic_2heading_pane_fp_t1

0xf211,	// (0x00058957) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xf211,	// (0x00058957) list_single_graphic_2heading_pane_fp_t2

0xf30d,	// (0x00058a53) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xf30d,	// (0x00058a53) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc56,	// (0x0005939c) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc56,	// (0x0005939c) list_single_graphic_2heading_pane_fp_t

0x5028,	// (0x0004e76e) fep_hwr_write_pane_g5_ParamLimits

0x5028,	// (0x0004e76e) fep_hwr_write_pane_g5

0x5034,	// (0x0004e77a) fep_hwr_write_pane_g6_ParamLimits

0x5034,	// (0x0004e77a) fep_hwr_write_pane_g6

0xd208,	// (0x0005694e) eswt_shell_pane_ParamLimits

0x2a65,	// (0x0004c1ab) bg_popup_window_pane_cp18_ParamLimits

0x3cf4,	// (0x0004d43a) heading_pane_cp70

0x5a0a,	// (0x0004f150) popup_eswt_tasktip_window_t1_ParamLimits

0xb410,	// (0x00054b56) aid_touch_tab_arrow_left

0xb426,	// (0x00054b6c) aid_touch_tab_arrow_right

0x9696,	// (0x00052ddc) title_pane_g3_ParamLimits

0x9696,	// (0x00052ddc) title_pane_g3

0xa0d1,	// (0x00053817) set_value_pane_g1

0xb2f3,	// (0x00054a39) popup_toolbar_trans_pane_ParamLimits

0xd344,	// (0x00056a8a) aid_size_cell_tb_trans_pane_ParamLimits

0xa112,	// (0x00053858) bg_tb_trans_pane_ParamLimits

0xd356,	// (0x00056a9c) grid_tb_trans_pane_ParamLimits

0x9b26,	// (0x0005326c) cont_note_pane_ParamLimits

0x9b26,	// (0x0005326c) cont_note_pane

0x9e95,	// (0x000535db) cont_snote2_single_text_pane_ParamLimits

0x9e95,	// (0x000535db) cont_snote2_single_text_pane

0x9e95,	// (0x000535db) cont_snote2_single_graphic_pane_ParamLimits

0x9e95,	// (0x000535db) cont_snote2_single_graphic_pane

0x3077,	// (0x0004c7bd) cont_note_wait_pane_ParamLimits

0x3077,	// (0x0004c7bd) cont_note_wait_pane

0x3077,	// (0x0004c7bd) cont_note_image_pane_ParamLimits

0x3077,	// (0x0004c7bd) cont_note_image_pane

0x5c07,	// (0x0004f34d) popup_note2_window_g1_ParamLimits

0x5c07,	// (0x0004f34d) popup_note2_window_g1

0xd3ff,	// (0x00056b45) popup_note2_window_t1_ParamLimits

0xd3ff,	// (0x00056b45) popup_note2_window_t1

0xd444,	// (0x00056b8a) popup_note2_window_t2_ParamLimits

0xd444,	// (0x00056b8a) popup_note2_window_t2

0xd489,	// (0x00056bcf) popup_note2_window_t3_ParamLimits

0xd489,	// (0x00056bcf) popup_note2_window_t3

0x5d07,	// (0x0004f44d) popup_note2_window_t4_ParamLimits

0x5d07,	// (0x0004f44d) popup_note2_window_t4

0x9baa,	// (0x000532f0) popup_note2_window_t5_ParamLimits

0x9baa,	// (0x000532f0) popup_note2_window_t5

0x0004,

0xfc62,	// (0x000593a8) popup_note2_window_t_ParamLimits

0xfc62,	// (0x000593a8) popup_note2_window_t

0x5d36,	// (0x0004f47c) popup_note2_image_window_g1_ParamLimits

0x5d36,	// (0x0004f47c) popup_note2_image_window_g1

0xd4ce,	// (0x00056c14) popup_note2_image_window_g2_ParamLimits

0xd4ce,	// (0x00056c14) popup_note2_image_window_g2

0x0001,

0xfc6d,	// (0x000593b3) popup_note2_image_window_g_ParamLimits

0xfc6d,	// (0x000593b3) popup_note2_image_window_g

0x5d54,	// (0x0004f49a) popup_note2_image_window_t1_ParamLimits

0x5d54,	// (0x0004f49a) popup_note2_image_window_t1

0x5d6c,	// (0x0004f4b2) popup_note2_image_window_t2_ParamLimits

0x5d6c,	// (0x0004f4b2) popup_note2_image_window_t2

0x5d84,	// (0x0004f4ca) popup_note2_image_window_t3_ParamLimits

0x5d84,	// (0x0004f4ca) popup_note2_image_window_t3

0x0002,

0xfc72,	// (0x000593b8) popup_note2_image_window_t_ParamLimits

0xfc72,	// (0x000593b8) popup_note2_image_window_t

0x3085,	// (0x0004c7cb) popup_note2_wait_window_g1_ParamLimits

0x3085,	// (0x0004c7cb) popup_note2_wait_window_g1

0x3091,	// (0x0004c7d7) popup_note2_wait_window_g2_ParamLimits

0x3091,	// (0x0004c7d7) popup_note2_wait_window_g2

0x309d,	// (0x0004c7e3) popup_note2_wait_window_g3_ParamLimits

0x309d,	// (0x0004c7e3) popup_note2_wait_window_g3

0x0002,

0xf832,	// (0x00058f78) popup_note2_wait_window_g_ParamLimits

0xf832,	// (0x00058f78) popup_note2_wait_window_g

0x5da0,	// (0x0004f4e6) popup_note2_wait_window_t1_ParamLimits

0x5da0,	// (0x0004f4e6) popup_note2_wait_window_t1

0x5dbe,	// (0x0004f504) popup_note2_wait_window_t2_ParamLimits

0x5dbe,	// (0x0004f504) popup_note2_wait_window_t2

0x5ddc,	// (0x0004f522) popup_note2_wait_window_t3_ParamLimits

0x5ddc,	// (0x0004f522) popup_note2_wait_window_t3

0x5dee,	// (0x0004f534) popup_note2_wait_window_t4_ParamLimits

0x5dee,	// (0x0004f534) popup_note2_wait_window_t4

0x0003,

0xfc79,	// (0x000593bf) popup_note2_wait_window_t_ParamLimits

0xfc79,	// (0x000593bf) popup_note2_wait_window_t

0x5e00,	// (0x0004f546) wait_bar2_pane_ParamLimits

0x5e00,	// (0x0004f546) wait_bar2_pane

0x5e18,	// (0x0004f55e) popup_snote2_single_text_window_g1_ParamLimits

0x5e18,	// (0x0004f55e) popup_snote2_single_text_window_g1

0x5e40,	// (0x0004f586) popup_snote2_single_text_window_t1_ParamLimits

0x5e40,	// (0x0004f586) popup_snote2_single_text_window_t1

0x5e8c,	// (0x0004f5d2) popup_snote2_single_text_window_t2_ParamLimits

0x5e8c,	// (0x0004f5d2) popup_snote2_single_text_window_t2

0x5ed8,	// (0x0004f61e) popup_snote2_single_text_window_t3_ParamLimits

0x5ed8,	// (0x0004f61e) popup_snote2_single_text_window_t3

0x5f19,	// (0x0004f65f) popup_snote2_single_text_window_t4_ParamLimits

0x5f19,	// (0x0004f65f) popup_snote2_single_text_window_t4

0x5f4f,	// (0x0004f695) popup_snote2_single_text_window_t5_ParamLimits

0x5f4f,	// (0x0004f695) popup_snote2_single_text_window_t5

0x0004,

0xfc82,	// (0x000593c8) popup_snote2_single_text_window_t_ParamLimits

0xfc82,	// (0x000593c8) popup_snote2_single_text_window_t

0xd4e0,	// (0x00056c26) popup_snote2_single_graphic_window_g1_ParamLimits

0xd4e0,	// (0x00056c26) popup_snote2_single_graphic_window_g1

0x5fa2,	// (0x0004f6e8) popup_snote2_single_graphic_window_g2_ParamLimits

0x5fa2,	// (0x0004f6e8) popup_snote2_single_graphic_window_g2

0x0001,

0xfc8d,	// (0x000593d3) popup_snote2_single_graphic_window_g_ParamLimits

0xfc8d,	// (0x000593d3) popup_snote2_single_graphic_window_g

0x5fca,	// (0x0004f710) popup_snote2_single_graphic_window_t1_ParamLimits

0x5fca,	// (0x0004f710) popup_snote2_single_graphic_window_t1

0x6016,	// (0x0004f75c) popup_snote2_single_graphic_window_t2_ParamLimits

0x6016,	// (0x0004f75c) popup_snote2_single_graphic_window_t2

0x5ed8,	// (0x0004f61e) popup_snote2_single_graphic_window_t3_ParamLimits

0x5ed8,	// (0x0004f61e) popup_snote2_single_graphic_window_t3

0x5f19,	// (0x0004f65f) popup_snote2_single_graphic_window_t4_ParamLimits

0x5f19,	// (0x0004f65f) popup_snote2_single_graphic_window_t4

0x5f4f,	// (0x0004f695) popup_snote2_single_graphic_window_t5_ParamLimits

0x5f4f,	// (0x0004f695) popup_snote2_single_graphic_window_t5

0x0004,

0xfc92,	// (0x000593d8) popup_snote2_single_graphic_window_t_ParamLimits

0xfc92,	// (0x000593d8) popup_snote2_single_graphic_window_t

0x4a34,	// (0x0004e17a) clock_nsta_pane_cp2_t1

0x4a34,	// (0x0004e17a) clock_nsta_pane_cp2_t2

0x0001,

0xfab9,	// (0x000591ff) clock_nsta_pane_cp2_t

0xe0f0,	// (0x00057836) form_field_data_wide_pane_g1_ParamLimits

0xa089,	// (0x000537cf) form_field_data_wide_pane_g2_ParamLimits

0xa089,	// (0x000537cf) form_field_data_wide_pane_g2

0xa120,	// (0x00053866) form_field_data_wide_pane_g3_ParamLimits

0xa120,	// (0x00053866) form_field_data_wide_pane_g3

0x0002,

0xf671,	// (0x00058db7) form_field_data_wide_pane_g_ParamLimits

0xf671,	// (0x00058db7) form_field_data_wide_pane_g

0xcda0,	// (0x000564e6) grid_touch_3_pane_ParamLimits

0xcda0,	// (0x000564e6) grid_touch_3_pane

0xd508,	// (0x00056c4e) cell_touch_3_pane_ParamLimits

0xd508,	// (0x00056c4e) cell_touch_3_pane

0x4f9c,	// (0x0004e6e2) cell_touch_3_pane_g1

0x4f9c,	// (0x0004e6e2) cell_touch_3_pane_g2

0x0001,

0xfb3e,	// (0x00059284) cell_touch_3_pane_g

0x9c02,	// (0x00053348) cont_query_data_pane

0x9c0a,	// (0x00053350) cont_query_data_pane_cp1

0x6090,	// (0x0004f7d6) button_value_adjust_pane_cp7

0x6098,	// (0x0004f7de) query_popup_pane_cp3

0xbf20,	// (0x00055666) bg_popup_sub_pane_cp22_ParamLimits

0xa78a,	// (0x00053ed0) navi_navi_volume_pane_cp2

0xa799,	// (0x00053edf) popup_side_volume_key_window_g2

0xa7a8,	// (0x00053eee) popup_side_volume_key_window_g3

0x0002,

0xf707,	// (0x00058e4d) popup_side_volume_key_window_g

0xa7b7,	// (0x00053efd) popup_side_volume_key_window_t2

0x0001,

0xf70e,	// (0x00058e54) popup_side_volume_key_window_t

0xa88e,	// (0x00053fd4) popup_side_volume_key_window_ParamLimits

0x8d8d,	// (0x000524d3) list_double_graphic_pane_g4_ParamLimits

0x8d8d,	// (0x000524d3) list_double_graphic_pane_g4

0xb617,	// (0x00054d5d) list_single_2heading_msg_pane_ParamLimits

0xb617,	// (0x00054d5d) list_single_2heading_msg_pane

0xb73e,	// (0x00054e84) list_single_2heading_msg_pane_g1_ParamLimits

0xb73e,	// (0x00054e84) list_single_2heading_msg_pane_g1

0xb74a,	// (0x00054e90) list_single_2heading_msg_pane_g2_ParamLimits

0xb74a,	// (0x00054e90) list_single_2heading_msg_pane_g2

0xb75d,	// (0x00054ea3) list_single_2heading_msg_pane_g3_ParamLimits

0xb75d,	// (0x00054ea3) list_single_2heading_msg_pane_g3

0xb769,	// (0x00054eaf) list_single_2heading_msg_pane_g4_ParamLimits

0xb769,	// (0x00054eaf) list_single_2heading_msg_pane_g4

0x0003,

0xfc9d,	// (0x000593e3) list_single_2heading_msg_pane_g_ParamLimits

0xfc9d,	// (0x000593e3) list_single_2heading_msg_pane_g

0x92d4,	// (0x00052a1a) list_single_2heading_msg_pane_t1_ParamLimits

0x92d4,	// (0x00052a1a) list_single_2heading_msg_pane_t1

0x92fc,	// (0x00052a42) list_single_2heading_msg_pane_t2_ParamLimits

0x92fc,	// (0x00052a42) list_single_2heading_msg_pane_t2

0x9367,	// (0x00052aad) list_single_2heading_msg_pane_t3_ParamLimits

0x9367,	// (0x00052aad) list_single_2heading_msg_pane_t3

0xf32d,	// (0x00058a73) list_single_2heading_msg_pane_t4_ParamLimits

0xf32d,	// (0x00058a73) list_single_2heading_msg_pane_t4

0x0003,

0xfca6,	// (0x000593ec) list_single_2heading_msg_pane_t_ParamLimits

0xfca6,	// (0x000593ec) list_single_2heading_msg_pane_t

0x96a2,	// (0x00052de8) title_pane_g4_ParamLimits

0x96a2,	// (0x00052de8) title_pane_g4

0xf3f4,	// (0x00058b3a) title_pane_stacon_g3_ParamLimits

0xf3f4,	// (0x00058b3a) title_pane_stacon_g3

0x5bca,	// (0x0004f310) list_single_2graphic_im_pane_g4_ParamLimits

0x5bca,	// (0x0004f310) list_single_2graphic_im_pane_g4

0xc8e8,	// (0x0005602e) popup_side_volume_key_window_cp

0x4291,	// (0x0004d9d7) main_idle_act2_pane_t1

0x0dd8,	// (0x0004a51e) toolbar_button_pane_g10

0xa020,	// (0x00053766) popup_toolbar_window_cp1

0x4a25,	// (0x0004e16b) clock_nsta_pane_cp_t1

0x4a25,	// (0x0004e16b) clock_nsta_pane_cp_t2

0x0001,

0xfab4,	// (0x000591fa) clock_nsta_pane_cp_t

0xa78a,	// (0x00053ed0) navi_navi_volume_pane_cp2_ParamLimits

0x016c,	// (0x000498b2) popup_side_volume_key_window_g1_ParamLimits

0xa799,	// (0x00053edf) popup_side_volume_key_window_g2_ParamLimits

0xa7a8,	// (0x00053eee) popup_side_volume_key_window_g3_ParamLimits

0xf707,	// (0x00058e4d) popup_side_volume_key_window_g_ParamLimits

0x13b4,	// (0x0004aafa) fep_hwr_aid_pane

0xd014,	// (0x0005675a) bg_fep_hwr_top_pane_g4_ParamLimits

0x4ff8,	// (0x0004e73e) fep_hwr_top_pane_g1_ParamLimits

0x500a,	// (0x0004e750) fep_hwr_top_pane_g2_ParamLimits

0x146d,	// (0x0004abb3) fep_hwr_top_pane_g3_ParamLimits

0xfb09,	// (0x0005924f) fep_hwr_top_pane_g_ParamLimits

0x1482,	// (0x0004abc8) fep_hwr_top_text_pane_ParamLimits

0x3881,	// (0x0004cfc7) aid_touch_tab_arrow_arrow_2

0x388a,	// (0x0004cfd0) aid_touch_tab_arrow_left_2

0x13c8,	// (0x0004ab0e) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x13ff,	// (0x0004ab45) fep_hwr_prediction_pane

0x5163,	// (0x0004e8a9) fep_vkb_prediction_pane

0xd140,	// (0x00056886) fep_vkb_side_pane_g3_ParamLimits

0xd140,	// (0x00056886) fep_vkb_side_pane_g3

0x520c,	// (0x0004e952) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x56c1,	// (0x0004ee07) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x56ce,	// (0x0004ee14) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb3,	// (0x000592f9) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x60bd,	// (0x0004f803) fep_hwr_prediction_pane_g1

0x17af,	// (0x0004aef5) fep_hwr_prediction_pane_g2

0x17b7,	// (0x0004aefd) fep_hwr_prediction_pane_g3

0x17bf,	// (0x0004af05) fep_hwr_prediction_pane_g4

0x0003,

0xfcaf,	// (0x000593f5) fep_hwr_prediction_pane_g

0x60bd,	// (0x0004f803) fep_vkb_prediction_pane_g1

0x60c7,	// (0x0004f80d) fep_vkb_prediction_pane_g2

0x60cf,	// (0x0004f815) fep_vkb_prediction_pane_g3

0x60d7,	// (0x0004f81d) fep_vkb_prediction_pane_g4

0x0003,

0xfcb8,	// (0x000593fe) fep_vkb_prediction_pane_g

0xb5ad,	// (0x00054cf3) slider_set_pane_g3

0xb5c1,	// (0x00054d07) slider_set_pane_g4

0xb5d9,	// (0x00054d1f) slider_set_pane_g5

0xb5ad,	// (0x00054cf3) slider_set_pane_g6

0xb5ef,	// (0x00054d35) slider_set_pane_g7

0x3f0d,	// (0x0004d653) slider_form_pane_g3

0x3f16,	// (0x0004d65c) slider_form_pane_g4

0x3f1e,	// (0x0004d664) slider_form_pane_g5

0x3f0d,	// (0x0004d653) slider_form_pane_g6

0xcb86,	// (0x000562cc) slider_form_pane_g7

0x453c,	// (0x0004dc82) slider_set_pane_vc_g3

0x4545,	// (0x0004dc8b) slider_set_pane_vc_g4

0x454e,	// (0x0004dc94) slider_set_pane_vc_g5

0x453c,	// (0x0004dc82) slider_set_pane_vc_g6

0x4557,	// (0x0004dc9d) slider_set_pane_vc_g7

0x4709,	// (0x0004de4f) slider_form_pane_vc_g1

0x4712,	// (0x0004de58) slider_form_pane_vc_g2

0x471b,	// (0x0004de61) slider_form_pane_vc_g3

0x4709,	// (0x0004de4f) slider_form_pane_vc_g4

0x4724,	// (0x0004de6a) slider_form_pane_vc_g5

0x0004,

0xfa86,	// (0x000591cc) slider_form_pane_vc_g

0x9427,	// (0x00052b6d) main_idle_act3_pane

0x60df,	// (0x0004f825) ai3_links_pane

0xd551,	// (0x00056c97) popup_ai3_data_window_ParamLimits

0xd551,	// (0x00056c97) popup_ai3_data_window

0x9427,	// (0x00052b6d) grid_ai3_links_pane

0xd569,	// (0x00056caf) cell_ai3_links_pane_ParamLimits

0xd569,	// (0x00056caf) cell_ai3_links_pane

0x6118,	// (0x0004f85e) bg_popup_sub_pane_cp11

0x6125,	// (0x0004f86b) cell_ai3_links_pane_g1

0x9427,	// (0x00052b6d) bg_popup_sub_pane_cp12

0x614a,	// (0x0004f890) heading_ai3_data_pane

0x6152,	// (0x0004f898) list_ai3_gene_pane

0x615e,	// (0x0004f8a4) popup_ai3_data_window_g1

0x6166,	// (0x0004f8ac) heading_ai3_data_pane_g1

0x616e,	// (0x0004f8b4) heading_ai3_data_pane_t1

0xd583,	// (0x00056cc9) list_double_ai3_gene_pane_ParamLimits

0xd583,	// (0x00056cc9) list_double_ai3_gene_pane

0x6189,	// (0x0004f8cf) list_single_ai3_gene_pane_ParamLimits

0x6189,	// (0x0004f8cf) list_single_ai3_gene_pane

0x4f61,	// (0x0004e6a7) list_highlight_pane_cp7_ParamLimits

0x4f61,	// (0x0004e6a7) list_highlight_pane_cp7

0x6196,	// (0x0004f8dc) list_single_a13_gene_pane_t1_ParamLimits

0x6196,	// (0x0004f8dc) list_single_a13_gene_pane_t1

0x61ad,	// (0x0004f8f3) list_single_ai3_gene_pane_g1

0x61b6,	// (0x0004f8fc) list_single_ai3_gene_pane_g2

0x0001,

0xfcc1,	// (0x00059407) list_single_ai3_gene_pane_g

0x61be,	// (0x0004f904) list_double_ai3_gene_pane_g1_ParamLimits

0x61be,	// (0x0004f904) list_double_ai3_gene_pane_g1

0xd590,	// (0x00056cd6) list_double_ai3_gene_pane_t1_ParamLimits

0xd590,	// (0x00056cd6) list_double_ai3_gene_pane_t1

0x61e6,	// (0x0004f92c) list_double_ai3_gene_pane_t2_ParamLimits

0x61e6,	// (0x0004f92c) list_double_ai3_gene_pane_t2

0x61fb,	// (0x0004f941) list_double_ai3_gene_pane_t3_ParamLimits

0x61fb,	// (0x0004f941) list_double_ai3_gene_pane_t3

0x0002,

0xfcc6,	// (0x0005940c) list_double_ai3_gene_pane_t_ParamLimits

0xfcc6,	// (0x0005940c) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf323,	// (0x00058a69) aid_size_min_col_2

0xd53b,	// (0x00056c81) aid_size_min_msg_ParamLimits

0xd53b,	// (0x00056c81) aid_size_min_msg

0xd154,	// (0x0005689a) fep_vkb_top_text_pane_g2_ParamLimits

0xd154,	// (0x0005689a) fep_vkb_top_text_pane_g2

0x0001,

0xfb39,	// (0x0005927f) fep_vkb_top_text_pane_g_ParamLimits

0xfb39,	// (0x0005927f) fep_vkb_top_text_pane_g

0x9427,	// (0x00052b6d) main_hc_apps_shell_pane

0x6218,	// (0x0004f95e) grid_hc_apps_pane_ParamLimits

0x6218,	// (0x0004f95e) grid_hc_apps_pane

0x6227,	// (0x0004f96d) list_hc_apps_pane

0x622f,	// (0x0004f975) scroll_pane_cp37_ParamLimits

0x622f,	// (0x0004f975) scroll_pane_cp37

0xd5ac,	// (0x00056cf2) cell_hc_apps_pane_ParamLimits

0xd5ac,	// (0x00056cf2) cell_hc_apps_pane

0xd66a,	// (0x00056db0) cell_hc_apps_pane_g1_ParamLimits

0xd66a,	// (0x00056db0) cell_hc_apps_pane_g1

0x631a,	// (0x0004fa60) cell_hc_apps_pane_g2_ParamLimits

0x631a,	// (0x0004fa60) cell_hc_apps_pane_g2

0x6336,	// (0x0004fa7c) cell_hc_apps_pane_g3_ParamLimits

0x6336,	// (0x0004fa7c) cell_hc_apps_pane_g3

0x0002,

0xfccd,	// (0x00059413) cell_hc_apps_pane_g_ParamLimits

0xfccd,	// (0x00059413) cell_hc_apps_pane_g

0xd697,	// (0x00056ddd) cell_hc_apps_pane_t1_ParamLimits

0xd697,	// (0x00056ddd) cell_hc_apps_pane_t1

0x9b26,	// (0x0005326c) grid_highlight_pane_cp10_ParamLimits

0x9b26,	// (0x0005326c) grid_highlight_pane_cp10

0xd6d5,	// (0x00056e1b) list_single_hc_apps_pane_ParamLimits

0xd6d5,	// (0x00056e1b) list_single_hc_apps_pane

0xd705,	// (0x00056e4b) list_single_hc_apps_pane_g1

0xb781,	// (0x00054ec7) list_single_hc_apps_pane_g2

0x0001,

0xfcd4,	// (0x0005941a) list_single_hc_apps_pane_g

0xb79a,	// (0x00054ee0) list_single_hc_apps_pane_g2_copy1

0x93d5,	// (0x00052b1b) list_single_hc_apps_pane_t1

0x97bc,	// (0x00052f02) bg_set_opt_pane_cp_ParamLimits

0x97ca,	// (0x00052f10) setting_slider_pane_t1_ParamLimits

0x97e3,	// (0x00052f29) setting_slider_pane_t2_ParamLimits

0x97fd,	// (0x00052f43) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00058ca4) setting_slider_pane_t_ParamLimits

0x9815,	// (0x00052f5b) slider_set_pane_ParamLimits

0x06dd,	// (0x00049e23) control_pane_g5_ParamLimits

0x06dd,	// (0x00049e23) control_pane_g5

0xca08,	// (0x0005614e) slider_set_pane_g1_ParamLimits

0x10be,	// (0x0004a804) slider_set_pane_g2_ParamLimits

0xb5ad,	// (0x00054cf3) slider_set_pane_g3_ParamLimits

0xb5c1,	// (0x00054d07) slider_set_pane_g4_ParamLimits

0xb5d9,	// (0x00054d1f) slider_set_pane_g5_ParamLimits

0xb5ad,	// (0x00054cf3) slider_set_pane_g6_ParamLimits

0xb5ef,	// (0x00054d35) slider_set_pane_g7_ParamLimits

0xf94e,	// (0x00059094) slider_set_pane_g_ParamLimits

0xe2b3,	// (0x000579f9) navi_icon_text_pane_ParamLimits

0xb3d9,	// (0x00054b1f) aid_fill_nsta_2_ParamLimits

0xb410,	// (0x00054b56) aid_touch_tab_arrow_left_ParamLimits

0xb426,	// (0x00054b6c) aid_touch_tab_arrow_right_ParamLimits

0xc090,	// (0x000557d6) clock_nsta_pane_ParamLimits

0x3863,	// (0x0004cfa9) navi_icon_pane_g1_ParamLimits

0x386f,	// (0x0004cfb5) navi_text_pane_t1_ParamLimits

0x4b35,	// (0x0004e27b) navi_icon_text_pane_g1_ParamLimits

0x4b41,	// (0x0004e287) navi_icon_text_pane_t1_ParamLimits

0xd705,	// (0x00056e4b) list_single_hc_apps_pane_g1_ParamLimits

0xb781,	// (0x00054ec7) list_single_hc_apps_pane_g2_ParamLimits

0xfcd4,	// (0x0005941a) list_single_hc_apps_pane_g_ParamLimits

0xb79a,	// (0x00054ee0) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x93d5,	// (0x00052b1b) list_single_hc_apps_pane_t1_ParamLimits

0x959b,	// (0x00052ce1) popup_toolbar2_fixed_window_ParamLimits

0x959b,	// (0x00052ce1) popup_toolbar2_fixed_window

0xb2e9,	// (0x00054a2f) popup_toolbar2_float_window

0x9427,	// (0x00052b6d) bg_popup_sub_pane_cp27

0x6414,	// (0x0004fb5a) grid_toolbar2_float_pane

0x9427,	// (0x00052b6d) bg_popup_sub_pane_cp26

0x6414,	// (0x0004fb5a) grid_toolbar2_fixed_pane

0xd71e,	// (0x00056e64) cell_toolbar2_fixed_pane_ParamLimits

0xd71e,	// (0x00056e64) cell_toolbar2_fixed_pane

0xd738,	// (0x00056e7e) cell_toolbar2_fixed_pane_g1

0x2971,	// (0x0004c0b7) toolbar2_fixed_button_pane

0x29f1,	// (0x0004c137) toolbar2_fixed_button_pane_g1

0x29f9,	// (0x0004c13f) toolbar2_fixed_button_pane_g2

0x2a01,	// (0x0004c147) toolbar2_fixed_button_pane_g3

0x2a09,	// (0x0004c14f) toolbar2_fixed_button_pane_g4

0x2a11,	// (0x0004c157) toolbar2_fixed_button_pane_g5

0x2a19,	// (0x0004c15f) toolbar2_fixed_button_pane_g6

0x2a21,	// (0x0004c167) toolbar2_fixed_button_pane_g7

0x2a29,	// (0x0004c16f) toolbar2_fixed_button_pane_g8

0x2a31,	// (0x0004c177) toolbar2_fixed_button_pane_g9

0x0008,

0xf850,	// (0x00058f96) toolbar2_fixed_button_pane_g

0x6435,	// (0x0004fb7b) cell_toolbar2_float_pane_ParamLimits

0x6435,	// (0x0004fb7b) cell_toolbar2_float_pane

0x6446,	// (0x0004fb8c) cell_toolbar2_float_pane_g1

0x2971,	// (0x0004c0b7) toolbar2_fixed_button_pane_cp

0xd03c,	// (0x00056782) fep_vkb_accented_list_pane_ParamLimits

0xd03c,	// (0x00056782) fep_vkb_accented_list_pane

0x15d0,	// (0x0004ad16) bg_popup_fep_shadow_pane_g9

0xe405,	// (0x00057b4b) bg_popup_fep_shadow_pane_cp3

0xa258,	// (0x0005399e) list_accented_list_pane

0x644f,	// (0x0004fb95) list_single_accented_list_pane_ParamLimits

0x644f,	// (0x0004fb95) list_single_accented_list_pane

0xe405,	// (0x00057b4b) list_highlight_pane_cp10

0x6460,	// (0x0004fba6) list_single_accented_list_pane_t1

0xb213,	// (0x00054959) popup_slider_window_ParamLimits

0xb213,	// (0x00054959) popup_slider_window

0x60a0,	// (0x0004f7e6) aid_indentation_list_msg

0xd829,	// (0x00056f6f) bg_popup_window_pane_cp19

0x6586,	// (0x0004fccc) popup_slider_window_g1

0x65a2,	// (0x0004fce8) popup_slider_window_g2

0x65be,	// (0x0004fd04) popup_slider_window_g3

0x0005,

0xfcd9,	// (0x0005941f) popup_slider_window_g

0x6624,	// (0x0004fd6a) popup_slider_window_t1

0x6698,	// (0x0004fdde) small_volume_slider_vertical_pane

0x4f9c,	// (0x0004e6e2) small_volume_slider_vertical_pane_g1

0x4f9c,	// (0x0004e6e2) small_volume_slider_vertical_pane_g2

0x66b4,	// (0x0004fdfa) small_volume_slider_vertical_pane_g3

0x0002,

0xfceb,	// (0x00059431) small_volume_slider_vertical_pane_g

0x94df,	// (0x00052c25) area_side_right_pane_ParamLimits

0x94df,	// (0x00052c25) area_side_right_pane

0xb7b6,	// (0x00054efc) aid_size_side_button_ParamLimits

0xb7b6,	// (0x00054efc) aid_size_side_button

0xb7cf,	// (0x00054f15) grid_sctrl_middle_pane_ParamLimits

0xb7cf,	// (0x00054f15) grid_sctrl_middle_pane

0x182f,	// (0x0004af75) sctrl_sk_bottom_pane

0x1840,	// (0x0004af86) sctrl_sk_top_pane

0x1852,	// (0x0004af98) aid_touch_sctrl_top

0x9b26,	// (0x0005326c) bg_sctrl_sk_pane_ParamLimits

0x9b26,	// (0x0005326c) bg_sctrl_sk_pane

0x185f,	// (0x0004afa5) sctrl_sk_top_pane_g1

0x186c,	// (0x0004afb2) sctrl_sk_top_pane_t1

0x1852,	// (0x0004af98) aid_touch_sctrl_bottom

0x9b26,	// (0x0005326c) bg_sctrl_sk_pane_cp_ParamLimits

0x9b26,	// (0x0005326c) bg_sctrl_sk_pane_cp

0x1887,	// (0x0004afcd) sctrl_sk_bottom_pane_g1

0x186c,	// (0x0004afb2) sctrl_sk_bottom_pane_t1

0xb7e9,	// (0x00054f2f) cell_sctrl_middle_pane_ParamLimits

0xb7e9,	// (0x00054f2f) cell_sctrl_middle_pane

0xb7fa,	// (0x00054f40) aid_touch_sctrl_middle_ParamLimits

0xb7fa,	// (0x00054f40) aid_touch_sctrl_middle

0xb807,	// (0x00054f4d) bg_sctrl_middle_pane_ParamLimits

0xb807,	// (0x00054f4d) bg_sctrl_middle_pane

0x673c,	// (0x0004fe82) cell_sctrl_middle_pane_g1_ParamLimits

0x673c,	// (0x0004fe82) cell_sctrl_middle_pane_g1

0xb815,	// (0x00054f5b) cell_sctrl_middle_pane_g2_ParamLimits

0xb815,	// (0x00054f5b) cell_sctrl_middle_pane_g2

0x0001,

0xfcf7,	// (0x0005943d) cell_sctrl_middle_pane_g_ParamLimits

0xfcf7,	// (0x0005943d) cell_sctrl_middle_pane_g

0x29f1,	// (0x0004c137) bg_sctrl_middle_pane_g1

0x29f9,	// (0x0004c13f) bg_sctrl_middle_pane_g2

0x2a01,	// (0x0004c147) bg_sctrl_middle_pane_g3

0x2a09,	// (0x0004c14f) bg_sctrl_middle_pane_g4

0x2a11,	// (0x0004c157) bg_sctrl_middle_pane_g5

0x2a19,	// (0x0004c15f) bg_sctrl_middle_pane_g6

0x2a21,	// (0x0004c167) bg_sctrl_middle_pane_g7

0x2a29,	// (0x0004c16f) bg_sctrl_middle_pane_g8

0x0007,

0xfcfc,	// (0x00059442) bg_sctrl_middle_pane_g

0x2a31,	// (0x0004c177) bg_sctrl_middle_pane_g8_copy1

0x29f1,	// (0x0004c137) bg_sctrl_sk_pane_g1

0x29f9,	// (0x0004c13f) bg_sctrl_sk_pane_g2

0x2a01,	// (0x0004c147) bg_sctrl_sk_pane_g3

0x0008,

0xf850,	// (0x00058f96) bg_sctrl_sk_pane_g

0x9fe6,	// (0x0005372c) aid_size_touch_scroll_bar

0x2a09,	// (0x0004c14f) bg_sctrl_sk_pane_g4

0x2a11,	// (0x0004c157) bg_sctrl_sk_pane_g5

0x2a19,	// (0x0004c15f) bg_sctrl_sk_pane_g6

0x2a21,	// (0x0004c167) bg_sctrl_sk_pane_g7

0x2a29,	// (0x0004c16f) bg_sctrl_sk_pane_g8

0x2a31,	// (0x0004c177) bg_sctrl_sk_pane_g9

0x0895,	// (0x00049fdb) popup_fep_china_hwr2_fs_candidate_window

0xacb3,	// (0x000543f9) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xacb3,	// (0x000543f9) popup_fep_china_hwr2_fs_control_window

0x520c,	// (0x0004e952) sctrl_sk_top_pane_g2

0x0001,

0xfcf2,	// (0x00059438) sctrl_sk_top_pane_g

0xd8e1,	// (0x00057027) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd8e1,	// (0x00057027) aid_fep_china_hwr2_fs_cell

0xd8f5,	// (0x0005703b) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd8f5,	// (0x0005703b) bg_popup_fep_shadow_pane_cp4

0xd90c,	// (0x00057052) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd90c,	// (0x00057052) bg_popup_fep_shadow_pane_cp5

0xd91e,	// (0x00057064) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd91e,	// (0x00057064) popup_fep_china_hwr2_fs_control_bar_grid

0xd932,	// (0x00057078) popup_fep_china_hwr2_fs_control_funtion_grid

0x6710,	// (0x0004fe56) aid_fep_china_hwr2_fs_candi_cell

0x9427,	// (0x00052b6d) bg_popup_fep_shadow_pane_cp6

0x671a,	// (0x0004fe60) popup_fep_china_hwr2_fs_candidate_grid

0xd93a,	// (0x00057080) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd93a,	// (0x00057080) cell_fep_china_hwr2_fs_funtion_grid

0x4f9c,	// (0x0004e6e2) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x673c,	// (0x0004fe82) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x673c,	// (0x0004fe82) cell_fep_china_hwr2_fs_funtion_grid_g1

0x674a,	// (0x0004fe90) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x674a,	// (0x0004fe90) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd0d,	// (0x00059453) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd0d,	// (0x00059453) cell_fep_china_hwr2_fs_funtion_grid_g

0xd952,	// (0x00057098) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd952,	// (0x00057098) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd967,	// (0x000570ad) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd967,	// (0x000570ad) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd12,	// (0x00059458) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd12,	// (0x00059458) cell_fep_china_hwr2_fs_funtion_grid_t

0x6791,	// (0x0004fed7) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6799,	// (0x0004fedf) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x67a1,	// (0x0004fee7) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd17,	// (0x0005945d) popup_fep_china_hwr2_fs_control_bar_grid_g

0x67a9,	// (0x0004feef) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x67a9,	// (0x0004feef) cell_fep_china_hwr2_fs_candidate_grid

0x67c2,	// (0x0004ff08) popup_fep_china_hwr2_fs_candidate_grid_g20

0x67ca,	// (0x0004ff10) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4f9c,	// (0x0004e6e2) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4f9c,	// (0x0004e6e2) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3e,	// (0x00059284) cell_fep_china_hwr2_fs_candidate_grid_g

0x67d2,	// (0x0004ff18) cell_fep_china_hwr2_fs_candidate_grid_t1

0x25ea,	// (0x0004bd30) clock_nsta_pane_cp_24_ParamLimits

0x25ea,	// (0x0004bd30) clock_nsta_pane_cp_24

0x2668,	// (0x0004bdae) indicator_nsta_pane_cp_24_ParamLimits

0x2668,	// (0x0004bdae) indicator_nsta_pane_cp_24

0x36df,	// (0x0004ce25) heading_pane_g1

0x0001,

0xf8b5,	// (0x00058ffb) heading_pane_g

0x40da,	// (0x0004d820) grid_sct_catagory_button_pane

0x410a,	// (0x0004d850) scroll_pane_cp5_ParamLimits

0x4b83,	// (0x0004e2c9) button_value_adjust_pane_cp5_ParamLimits

0x4b83,	// (0x0004e2c9) button_value_adjust_pane_cp5

0x4c62,	// (0x0004e3a8) form2_midp_time_pane_ParamLimits

0x67e0,	// (0x0004ff26) cell_sct_catagory_button_pane_ParamLimits

0x67e0,	// (0x0004ff26) cell_sct_catagory_button_pane

0x4f61,	// (0x0004e6a7) bg_button_pane_cp01_ParamLimits

0x4f61,	// (0x0004e6a7) bg_button_pane_cp01

0x4f9c,	// (0x0004e6e2) cell_sct_catagory_button_pane_g1

0xb28c,	// (0x000549d2) popup_tb_extension_window

0xd983,	// (0x000570c9) aid_size_cell_ext_ParamLimits

0xd983,	// (0x000570c9) aid_size_cell_ext

0x9e95,	// (0x000535db) bg_tb_trans_pane_cp1_ParamLimits

0x9e95,	// (0x000535db) bg_tb_trans_pane_cp1

0xd9a9,	// (0x000570ef) grid_tb_ext_pane_ParamLimits

0xd9a9,	// (0x000570ef) grid_tb_ext_pane

0xd9e8,	// (0x0005712e) cell_tb_ext_pane_ParamLimits

0xd9e8,	// (0x0005712e) cell_tb_ext_pane

0xda10,	// (0x00057156) cell_tb_ext_pane_g1_ParamLimits

0xda10,	// (0x00057156) cell_tb_ext_pane_g1

0x6876,	// (0x0004ffbc) cell_tb_ext_pane_t1

0x9b26,	// (0x0005326c) list_highlight_pane_cp11_ParamLimits

0x9b26,	// (0x0005326c) list_highlight_pane_cp11

0x95b0,	// (0x00052cf6) popup_uni_indicator_window_ParamLimits

0x95b0,	// (0x00052cf6) popup_uni_indicator_window

0xa112,	// (0x00053858) bg_popup_sub_pane_cp14

0xda2d,	// (0x00057173) list_uniindi_pane

0xda39,	// (0x0005717f) uniindi_top_pane

0x9b26,	// (0x0005326c) bg_uniindi_top_pane

0xda58,	// (0x0005719e) uniindi_top_pane_g1

0xda6e,	// (0x000571b4) uniindi_top_pane_g2

0x0003,

0xfd1e,	// (0x00059464) uniindi_top_pane_g

0xda8b,	// (0x000571d1) uniindi_top_pane_t1

0x6927,	// (0x0005006d) list_single_uniindi_pane_ParamLimits

0x6927,	// (0x0005006d) list_single_uniindi_pane

0x4f9c,	// (0x0004e6e2) bg_uniindi_top_pane_g1

0x6939,	// (0x0005007f) list_single_uniindi_pane_g1

0x694c,	// (0x00050092) list_single_uniindi_pane_t1

0x9427,	// (0x00052b6d) control_bg_pane

0x6971,	// (0x000500b7) bg_sctrl_sk_pane_cp1

0x697a,	// (0x000500c0) bg_sctrl_sk_pane_cp2

0x6983,	// (0x000500c9) control_bg_pane_g1

0x698c,	// (0x000500d2) control_bg_pane_g2

0x0001,

0xfd27,	// (0x0005946d) control_bg_pane_g

0x49d9,	// (0x0004e11f) cell_indicator_nsta_pane_g1_ParamLimits

0xcddb,	// (0x00056521) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa2,	// (0x000591e8) cell_indicator_nsta_pane_g_ParamLimits

0xf1af,	// (0x000588f5) form2_midp_time_pane_t1_ParamLimits

0x13a6,	// (0x0004aaec) main_idle_act4_pane_ParamLimits

0x13a6,	// (0x0004aaec) main_idle_act4_pane

0xb28c,	// (0x000549d2) popup_tb_extension_window_ParamLimits

0xd9ce,	// (0x00057114) tb_ext_find_pane_ParamLimits

0xd9ce,	// (0x00057114) tb_ext_find_pane

0x6995,	// (0x000500db) ai_gene_pane_1_cp1

0x0564,	// (0x00049caa) ai_gene_pane_2_cp1

0xdab5,	// (0x000571fb) list_single_idle_plugin_calendar_pane

0x69a6,	// (0x000500ec) list_single_idle_plugin_notification_pane

0x69af,	// (0x000500f5) list_single_idle_plugin_player_pane

0xdabe,	// (0x00057204) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdabe,	// (0x00057204) list_single_idle_plugin_shortcut_pane

0xdae6,	// (0x0005722c) main_idle_act4_pane_t1

0xdafd,	// (0x00057243) main_idle_act4_pane_t2

0x0001,

0xfd2c,	// (0x00059472) main_idle_act4_pane_t

0xdb14,	// (0x0005725a) middle_sk_idle_act4_pane_ParamLimits

0xdb14,	// (0x0005725a) middle_sk_idle_act4_pane

0xdb30,	// (0x00057276) popup_clock_digital_analogue_window_cp2

0xdb5c,	// (0x000572a2) shortcut_wheel_idle_act4_pane_ParamLimits

0xdb5c,	// (0x000572a2) shortcut_wheel_idle_act4_pane

0x4f9c,	// (0x0004e6e2) shortcut_wheel_idle_act4_pane_g1

0x4f9c,	// (0x0004e6e2) shortcut_wheel_idle_act4_pane_g2

0x4f9c,	// (0x0004e6e2) shortcut_wheel_idle_act4_pane_g3

0x4f9c,	// (0x0004e6e2) shortcut_wheel_idle_act4_pane_g4

0x4f9c,	// (0x0004e6e2) shortcut_wheel_idle_act4_pane_g5

0x6a42,	// (0x00050188) shortcut_wheel_idle_act4_pane_g6

0x6a4a,	// (0x00050190) shortcut_wheel_idle_act4_pane_g7

0x6a52,	// (0x00050198) shortcut_wheel_idle_act4_pane_g8

0x6a5a,	// (0x000501a0) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd31,	// (0x00059477) shortcut_wheel_idle_act4_pane_g

0xd014,	// (0x0005675a) middle_sk_idle_act4_pane_g1_ParamLimits

0xd014,	// (0x0005675a) middle_sk_idle_act4_pane_g1

0xdbd9,	// (0x0005731f) middle_sk_idle_act4_pane_g2_ParamLimits

0xdbd9,	// (0x0005731f) middle_sk_idle_act4_pane_g2

0x0001,

0xfd54,	// (0x0005949a) middle_sk_idle_act4_pane_g_ParamLimits

0xfd54,	// (0x0005949a) middle_sk_idle_act4_pane_g

0xdbf1,	// (0x00057337) middle_sk_idle_act4_pane_t1_ParamLimits

0xdbf1,	// (0x00057337) middle_sk_idle_act4_pane_t1

0xdc20,	// (0x00057366) grid_ai_shortcut_pane_ParamLimits

0xdc20,	// (0x00057366) grid_ai_shortcut_pane

0xdc3d,	// (0x00057383) list_highlight_pane_cp16_ParamLimits

0xdc3d,	// (0x00057383) list_highlight_pane_cp16

0xdc4a,	// (0x00057390) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdc4a,	// (0x00057390) list_single_idle_plugin_shortcut_pane_g1

0xdc56,	// (0x0005739c) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdc56,	// (0x0005739c) list_single_idle_plugin_shortcut_pane_g2

0xdc72,	// (0x000573b8) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdc72,	// (0x000573b8) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd59,	// (0x0005949f) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd59,	// (0x0005949f) list_single_idle_plugin_shortcut_pane_g

0xdc87,	// (0x000573cd) cell_ai_shortcut_pane_ParamLimits

0xdc87,	// (0x000573cd) cell_ai_shortcut_pane

0xdc9d,	// (0x000573e3) cell_ai_shortcut_pane_g1_ParamLimits

0xdc9d,	// (0x000573e3) cell_ai_shortcut_pane_g1

0x6995,	// (0x000500db) ai_gene_pane_1_cp2

0x6b8a,	// (0x000502d0) ai_gene_pane_2_cp2

0x6b92,	// (0x000502d8) list_highlight_pane_cp15

0xdcbf,	// (0x00057405) list_single_idle_plugin_calendar_pane_g1

0x6b92,	// (0x000502d8) list_highlight_pane_cp17

0x6ba3,	// (0x000502e9) list_single_idle_plugin_calendar_pane_g1_copy1

0x6bab,	// (0x000502f1) list_single_idle_plugin_player_pane_g1

0x4333,	// (0x0004da79) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd60,	// (0x000594a6) list_single_idle_plugin_player_pane_g

0x6bb3,	// (0x000502f9) list_single_idle_plugin_player_pane_t1

0x6bc1,	// (0x00050307) list_single_idle_plugin_player_pane_t2

0x6bcf,	// (0x00050315) list_single_idle_plugin_player_pane_t3

0x6bdd,	// (0x00050323) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd65,	// (0x000594ab) list_single_idle_plugin_player_pane_t

0x6beb,	// (0x00050331) wait_bar_pane_cp15

0x6bf3,	// (0x00050339) grid_ai_notification_pane

0x4333,	// (0x0004da79) list_single_idle_plugin_notification_pane_g1

0xdcc7,	// (0x0005740d) cell_ai_notification_pane_ParamLimits

0xdcc7,	// (0x0005740d) cell_ai_notification_pane

0x6c09,	// (0x0005034f) cell_ai_notification_pane_g1

0x6c11,	// (0x00050357) cell_ai_notification_pane_t1

0xdcd4,	// (0x0005741a) tb_ext_find_button_pane

0xdcdc,	// (0x00057422) tb_ext_find_pane_g1

0xdce4,	// (0x0005742a) tb_ext_find_pane_t1

0xbebf,	// (0x00055605) tb_ext_find_button_pane_g1

0xdcf2,	// (0x00057438) tb_ext_find_button_pane_g2

0x0001,

0xfd6e,	// (0x000594b4) tb_ext_find_button_pane_g

0xdae6,	// (0x0005722c) main_idle_act4_pane_t1_ParamLimits

0xdafd,	// (0x00057243) main_idle_act4_pane_t2_ParamLimits

0xfd2c,	// (0x00059472) main_idle_act4_pane_t_ParamLimits

0xdb30,	// (0x00057276) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdb48,	// (0x0005728e) sat_plugin_idle_act4_pane_ParamLimits

0xdb48,	// (0x0005728e) sat_plugin_idle_act4_pane

0xdcfb,	// (0x00057441) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdcfb,	// (0x00057441) sat_plugin_idle_act4_pane_t1

0xdd13,	// (0x00057459) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd13,	// (0x00057459) sat_plugin_idle_act4_pane_t2

0xdd2b,	// (0x00057471) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd2b,	// (0x00057471) sat_plugin_idle_act4_pane_t3

0xdd43,	// (0x00057489) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd43,	// (0x00057489) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd73,	// (0x000594b9) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd73,	// (0x000594b9) sat_plugin_idle_act4_pane_t

0x952b,	// (0x00052c71) popup_battery_window_ParamLimits

0x952b,	// (0x00052c71) popup_battery_window

0x9b26,	// (0x0005326c) bg_popup_sub_pane_cp25_ParamLimits

0x9b26,	// (0x0005326c) bg_popup_sub_pane_cp25

0x6c92,	// (0x000503d8) popup_battery_window_g1_ParamLimits

0x6c92,	// (0x000503d8) popup_battery_window_g1

0x6c9e,	// (0x000503e4) popup_battery_window_t1_ParamLimits

0x6c9e,	// (0x000503e4) popup_battery_window_t1

0x6cb0,	// (0x000503f6) popup_battery_window_t2_ParamLimits

0x6cb0,	// (0x000503f6) popup_battery_window_t2

0x0001,

0xfd7c,	// (0x000594c2) popup_battery_window_t_ParamLimits

0xfd7c,	// (0x000594c2) popup_battery_window_t

0xa8ed,	// (0x00054033) midp_canvas_pane_ParamLimits

0xa95f,	// (0x000540a5) midp_keypad_pane_ParamLimits

0xa95f,	// (0x000540a5) midp_keypad_pane

0x24ca,	// (0x0004bc10) main_midp_pane_ParamLimits

0xcde8,	// (0x0005652e) signal_pane_g2_cp_ParamLimits

0xdd5b,	// (0x000574a1) aid_size_cell_midp_keypad_ParamLimits

0xdd5b,	// (0x000574a1) aid_size_cell_midp_keypad

0xdd79,	// (0x000574bf) midp_keyp_game_grid_pane_ParamLimits

0xdd79,	// (0x000574bf) midp_keyp_game_grid_pane

0xdda0,	// (0x000574e6) midp_keyp_rocker_pane_ParamLimits

0xdda0,	// (0x000574e6) midp_keyp_rocker_pane

0xddf1,	// (0x00057537) midp_keyp_sk_left_pane_ParamLimits

0xddf1,	// (0x00057537) midp_keyp_sk_left_pane

0xde45,	// (0x0005758b) midp_keyp_sk_right_pane_ParamLimits

0xde45,	// (0x0005758b) midp_keyp_sk_right_pane

0x9427,	// (0x00052b6d) bg_button_pane_cp03

0xde99,	// (0x000575df) midp_keyp_sk_left_pane_g1

0x9427,	// (0x00052b6d) bg_button_pane_cp04

0xde99,	// (0x000575df) midp_keyp_sk_right_pane_g1

0x4f9c,	// (0x0004e6e2) midp_keyp_rocker_pane_g1

0xdea2,	// (0x000575e8) keyp_game_cell_pane_ParamLimits

0xdea2,	// (0x000575e8) keyp_game_cell_pane

0x9427,	// (0x00052b6d) bg_button_pane_cp02

0xdec6,	// (0x0005760c) keyp_game_cell_pane_g1

0x954b,	// (0x00052c91) popup_fep_vkb2_window_ParamLimits

0x954b,	// (0x00052c91) popup_fep_vkb2_window

0xb821,	// (0x00054f67) aid_size_cell_vkb2_ParamLimits

0xb821,	// (0x00054f67) aid_size_cell_vkb2

0xb85f,	// (0x00054fa5) popup_fep_vkb2_window_g1_ParamLimits

0xb85f,	// (0x00054fa5) popup_fep_vkb2_window_g1

0xb8af,	// (0x00054ff5) vkb2_area_bottom_pane_ParamLimits

0xb8af,	// (0x00054ff5) vkb2_area_bottom_pane

0xb903,	// (0x00055049) vkb2_area_keypad_pane_ParamLimits

0xb903,	// (0x00055049) vkb2_area_keypad_pane

0xb94b,	// (0x00055091) vkb2_area_top_pane_ParamLimits

0xb94b,	// (0x00055091) vkb2_area_top_pane

0xb9d1,	// (0x00055117) vkb2_top_entry_pane_ParamLimits

0xb9d1,	// (0x00055117) vkb2_top_entry_pane

0xb9fe,	// (0x00055144) vkb2_top_grid_left_pane_ParamLimits

0xb9fe,	// (0x00055144) vkb2_top_grid_left_pane

0xba1e,	// (0x00055164) vkb2_top_grid_right_pane_ParamLimits

0xba1e,	// (0x00055164) vkb2_top_grid_right_pane

0x1ae5,	// (0x0004b22b) vkb2_cell_keypad_pane_ParamLimits

0x1ae5,	// (0x0004b22b) vkb2_cell_keypad_pane

0xba64,	// (0x000551aa) vkb2_area_bottom_grid_pane_ParamLimits

0xba64,	// (0x000551aa) vkb2_area_bottom_grid_pane

0xba8e,	// (0x000551d4) vkb2_area_bottom_pane_g1_ParamLimits

0xba8e,	// (0x000551d4) vkb2_area_bottom_pane_g1

0xbab4,	// (0x000551fa) vkb2_area_bottom_pane_g2_ParamLimits

0xbab4,	// (0x000551fa) vkb2_area_bottom_pane_g2

0xbae5,	// (0x0005522b) vkb2_area_bottom_pane_g3_ParamLimits

0xbae5,	// (0x0005522b) vkb2_area_bottom_pane_g3

0x0002,

0xfd81,	// (0x000594c7) vkb2_area_bottom_pane_g_ParamLimits

0xfd81,	// (0x000594c7) vkb2_area_bottom_pane_g

0x1c8f,	// (0x0004b3d5) vkb2_top_cell_left_pane_ParamLimits

0x1c8f,	// (0x0004b3d5) vkb2_top_cell_left_pane

0xdecf,	// (0x00057615) vkb2_top_entry_pane_g1_ParamLimits

0xdecf,	// (0x00057615) vkb2_top_entry_pane_g1

0xdedd,	// (0x00057623) vkb2_top_entry_pane_t1_ParamLimits

0xdedd,	// (0x00057623) vkb2_top_entry_pane_t1

0x6e61,	// (0x000505a7) vkb2_top_entry_pane_t2_ParamLimits

0x6e61,	// (0x000505a7) vkb2_top_entry_pane_t2

0x6e93,	// (0x000505d9) vkb2_top_entry_pane_t3_ParamLimits

0x6e93,	// (0x000505d9) vkb2_top_entry_pane_t3

0x0002,

0xfd88,	// (0x000594ce) vkb2_top_entry_pane_t_ParamLimits

0xfd88,	// (0x000594ce) vkb2_top_entry_pane_t

0xbb4f,	// (0x00055295) vkb2_top_grid_right_pane_g1_ParamLimits

0xbb4f,	// (0x00055295) vkb2_top_grid_right_pane_g1

0x1cf2,	// (0x0004b438) vkb2_top_grid_right_pane_g2_ParamLimits

0x1cf2,	// (0x0004b438) vkb2_top_grid_right_pane_g2

0x1d0a,	// (0x0004b450) vkb2_top_grid_right_pane_g3_ParamLimits

0x1d0a,	// (0x0004b450) vkb2_top_grid_right_pane_g3

0xbb65,	// (0x000552ab) vkb2_top_grid_right_pane_g4_ParamLimits

0xbb65,	// (0x000552ab) vkb2_top_grid_right_pane_g4

0x0003,

0xfd8f,	// (0x000594d5) vkb2_top_grid_right_pane_g_ParamLimits

0xfd8f,	// (0x000594d5) vkb2_top_grid_right_pane_g

0x1d38,	// (0x0004b47e) vkb2_top_cell_left_pane_g1

0x1d4f,	// (0x0004b495) vkb2_cell_keypad_pane_g1_ParamLimits

0x1d4f,	// (0x0004b495) vkb2_cell_keypad_pane_g1

0x6eb7,	// (0x000505fd) vkb2_cell_keypad_pane_t1_ParamLimits

0x6eb7,	// (0x000505fd) vkb2_cell_keypad_pane_t1

0x1d5d,	// (0x0004b4a3) vkb2_cell_bottom_grid_pane_ParamLimits

0x1d5d,	// (0x0004b4a3) vkb2_cell_bottom_grid_pane

0x1d96,	// (0x0004b4dc) vkb2_cell_bottom_grid_pane_g1

0xdb7d,	// (0x000572c3) aid_call2_pane_cp02

0xdb85,	// (0x000572cb) aid_call_pane_cp02

0xdb8d,	// (0x000572d3) clock_digital_number_pane_cp10

0xdb95,	// (0x000572db) clock_digital_number_pane_cp11

0xdb9d,	// (0x000572e3) clock_digital_number_pane_cp12

0xdba5,	// (0x000572eb) clock_digital_number_pane_cp13

0xdbad,	// (0x000572f3) clock_digital_separator_pane_cp10

0xbebf,	// (0x00055605) popup_clock_digital_analogue_window_cp2_g1

0xbebf,	// (0x00055605) popup_clock_digital_analogue_window_cp2_g2

0xdbb5,	// (0x000572fb) popup_clock_digital_analogue_window_cp2_g3

0xbebf,	// (0x00055605) popup_clock_digital_analogue_window_cp2_g4

0xdbb5,	// (0x000572fb) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd44,	// (0x0005948a) popup_clock_digital_analogue_window_cp2_g

0xdbbd,	// (0x00057303) popup_clock_digital_analogue_window_cp2_t1

0xdbcb,	// (0x00057311) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd4f,	// (0x00059495) popup_clock_digital_analogue_window_cp2_t

0x4f9c,	// (0x0004e6e2) clock_digital_number_pane_cp10_g1

0x4f9c,	// (0x0004e6e2) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3e,	// (0x00059284) clock_digital_number_pane_cp10_g

0x4f9c,	// (0x0004e6e2) clock_digital_separator_pane_cp10_g1

0x4f9c,	// (0x0004e6e2) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3e,	// (0x00059284) clock_digital_separator_pane_cp10_g

0xda7a,	// (0x000571c0) uniindi_top_pane_g3

0x68f0,	// (0x00050036) uniindi_top_pane_g4

0x1b70,	// (0x0004b2b6) vkb2_row_keypad_pane_ParamLimits

0x1b70,	// (0x0004b2b6) vkb2_row_keypad_pane

0x1db2,	// (0x0004b4f8) vkb2_cell_t_keypad_pane_ParamLimits

0x1db2,	// (0x0004b4f8) vkb2_cell_t_keypad_pane

0x1dc2,	// (0x0004b508) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1dc2,	// (0x0004b508) vkb2_cell_t_keypad_pane_cp08

0x1dd5,	// (0x0004b51b) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1dd5,	// (0x0004b51b) vkb2_cell_t_keypad_pane_cp09

0x1de9,	// (0x0004b52f) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1de9,	// (0x0004b52f) vkb2_cell_t_keypad_pane_cp01

0x1dfa,	// (0x0004b540) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1dfa,	// (0x0004b540) vkb2_cell_t_keypad_pane_cp02

0x1e0b,	// (0x0004b551) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1e0b,	// (0x0004b551) vkb2_cell_t_keypad_pane_cp03

0x1e1c,	// (0x0004b562) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1e1c,	// (0x0004b562) vkb2_cell_t_keypad_pane_cp04

0x1e2d,	// (0x0004b573) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1e2d,	// (0x0004b573) vkb2_cell_t_keypad_pane_cp05

0x1e3e,	// (0x0004b584) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1e3e,	// (0x0004b584) vkb2_cell_t_keypad_pane_cp06

0x1e4f,	// (0x0004b595) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1e4f,	// (0x0004b595) vkb2_cell_t_keypad_pane_cp07

0x1e60,	// (0x0004b5a6) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1e60,	// (0x0004b5a6) vkb2_cell_t_keypad_pane_cp10

0x520c,	// (0x0004e952) vkb2_cell_t_keypad_pane_g1

0x6ece,	// (0x00050614) vkb2_cell_t_keypad_pane_t1

0x9427,	// (0x00052b6d) popup_grid_graphic2_window

0xdf16,	// (0x0005765c) aid_size_cell_graphic2_ParamLimits

0xdf16,	// (0x0005765c) aid_size_cell_graphic2

0xdf54,	// (0x0005769a) bg_popup_window_pane_cp21_ParamLimits

0xdf54,	// (0x0005769a) bg_popup_window_pane_cp21

0xdf62,	// (0x000576a8) graphic2_pages_pane_ParamLimits

0xdf62,	// (0x000576a8) graphic2_pages_pane

0xdfb8,	// (0x000576fe) grid_graphic2_control_pane_ParamLimits

0xdfb8,	// (0x000576fe) grid_graphic2_control_pane

0xe000,	// (0x00057746) grid_graphic2_pane_ParamLimits

0xe000,	// (0x00057746) grid_graphic2_pane

0xe4f0,	// (0x00057c36) cell_graphic2_pane

0x9427,	// (0x00052b6d) main_comp_mode_pane

0x6152,	// (0x0004f898) list_ai3_gene_pane_ParamLimits

0xd829,	// (0x00056f6f) bg_popup_window_pane_cp19_ParamLimits

0x652a,	// (0x0004fc70) bg_touch_area_indi_pane_ParamLimits

0x652a,	// (0x0004fc70) bg_touch_area_indi_pane

0x6540,	// (0x0004fc86) bg_touch_area_indi_pane_cp01_ParamLimits

0x6540,	// (0x0004fc86) bg_touch_area_indi_pane_cp01

0x6556,	// (0x0004fc9c) bg_touch_area_indi_pane_cp02_ParamLimits

0x6556,	// (0x0004fc9c) bg_touch_area_indi_pane_cp02

0x656c,	// (0x0004fcb2) bg_touch_area_indi_pane_cp03_ParamLimits

0x656c,	// (0x0004fcb2) bg_touch_area_indi_pane_cp03

0x6586,	// (0x0004fccc) popup_slider_window_g1_ParamLimits

0x65a2,	// (0x0004fce8) popup_slider_window_g2_ParamLimits

0x65be,	// (0x0004fd04) popup_slider_window_g3_ParamLimits

0xfcd9,	// (0x0005941f) popup_slider_window_g_ParamLimits

0x6624,	// (0x0004fd6a) popup_slider_window_t1_ParamLimits

0x6698,	// (0x0004fdde) small_volume_slider_vertical_pane_ParamLimits

0xe4f0,	// (0x00057c36) cell_graphic2_pane_ParamLimits

0xe54b,	// (0x00057c91) bg_button_pane_cp10_ParamLimits

0xe54b,	// (0x00057c91) bg_button_pane_cp10

0xe55e,	// (0x00057ca4) bg_button_pane_cp11_ParamLimits

0xe55e,	// (0x00057ca4) bg_button_pane_cp11

0xe571,	// (0x00057cb7) graphic2_pages_pane_g1_ParamLimits

0xe571,	// (0x00057cb7) graphic2_pages_pane_g1

0xe58c,	// (0x00057cd2) graphic2_pages_pane_g2_ParamLimits

0xe58c,	// (0x00057cd2) graphic2_pages_pane_g2

0x0001,

0xfd9d,	// (0x000594e3) graphic2_pages_pane_g_ParamLimits

0xfd9d,	// (0x000594e3) graphic2_pages_pane_g

0xe5a4,	// (0x00057cea) graphic2_pages_pane_t1_ParamLimits

0xe5a4,	// (0x00057cea) graphic2_pages_pane_t1

0xe5bc,	// (0x00057d02) cell_graphic2_control_pane_ParamLimits

0xe5bc,	// (0x00057d02) cell_graphic2_control_pane

0xe5ee,	// (0x00057d34) cell_graphic2_pane_g1_ParamLimits

0xe5ee,	// (0x00057d34) cell_graphic2_pane_g1

0xd022,	// (0x00056768) cell_graphic2_pane_g2_ParamLimits

0xd022,	// (0x00056768) cell_graphic2_pane_g2

0xe05a,	// (0x000577a0) cell_graphic2_pane_g3_ParamLimits

0xe05a,	// (0x000577a0) cell_graphic2_pane_g3

0xd02f,	// (0x00056775) cell_graphic2_pane_g4_ParamLimits

0xd02f,	// (0x00056775) cell_graphic2_pane_g4

0xe5fb,	// (0x00057d41) cell_graphic2_pane_g5_ParamLimits

0xe5fb,	// (0x00057d41) cell_graphic2_pane_g5

0x0004,

0xfda2,	// (0x000594e8) cell_graphic2_pane_g_ParamLimits

0xfda2,	// (0x000594e8) cell_graphic2_pane_g

0xe61b,	// (0x00057d61) cell_graphic2_pane_t1_ParamLimits

0xe61b,	// (0x00057d61) cell_graphic2_pane_t1

0x36d3,	// (0x0004ce19) grid_highlight_pane_cp11_ParamLimits

0x36d3,	// (0x0004ce19) grid_highlight_pane_cp11

0x9b26,	// (0x0005326c) bg_button_pane_cp05

0xe667,	// (0x00057dad) cell_graphic2_control_pane_g1

0x4f9c,	// (0x0004e6e2) bg_touch_area_indi_pane_g1

0x71aa,	// (0x000508f0) aid_cmod_rocker_key_size

0x71b4,	// (0x000508fa) aid_cmode_itu_key_size

0x71be,	// (0x00050904) main_cmode_video_pane

0x71c8,	// (0x0005090e) main_comp_mode_itu_pane

0x71d4,	// (0x0005091a) main_comp_mode_rocker_pane

0x71e0,	// (0x00050926) cell_cmode_rocker_pane_ParamLimits

0x71e0,	// (0x00050926) cell_cmode_rocker_pane

0x71f2,	// (0x00050938) cell_cmode_itu_pane_ParamLimits

0x71f2,	// (0x00050938) cell_cmode_itu_pane

0xa112,	// (0x00053858) bg_button_pane_cp06_ParamLimits

0xa112,	// (0x00053858) bg_button_pane_cp06

0x520c,	// (0x0004e952) cell_cmode_rocker_pane_g1_ParamLimits

0x520c,	// (0x0004e952) cell_cmode_rocker_pane_g1

0x673c,	// (0x0004fe82) cell_cmode_rocker_pane_g2_ParamLimits

0x673c,	// (0x0004fe82) cell_cmode_rocker_pane_g2

0x0001,

0xfdb2,	// (0x000594f8) cell_cmode_rocker_pane_g_ParamLimits

0xfdb2,	// (0x000594f8) cell_cmode_rocker_pane_g

0x9427,	// (0x00052b6d) bg_button_pane_cp07

0x7207,	// (0x0005094d) cell_cmode_itu_pane_g1

0x7210,	// (0x00050956) cell_cmode_itu_pane_t1

0x721e,	// (0x00050964) cell_cmode_itu_pane_t2

0x0001,

0xfdb7,	// (0x000594fd) cell_cmode_itu_pane_t

0x6961,	// (0x000500a7) aid_touch_ctrl_left

0x6969,	// (0x000500af) aid_touch_ctrl_right

0x9427,	// (0x00052b6d) compa_mode_pane

0xe68d,	// (0x00057dd3) aid_cmod_rocker_key_size_cp

0xe697,	// (0x00057ddd) aid_cmode_itu_key_size_cp

0x7240,	// (0x00050986) compa_mode_pane_g1

0x7248,	// (0x0005098e) compa_mode_pane_g2

0x7250,	// (0x00050996) compa_mode_pane_g3

0x0002,

0xfdbc,	// (0x00059502) compa_mode_pane_g

0xe6a1,	// (0x00057de7) main_comp_mode_itu_pane_cp

0xe6a9,	// (0x00057def) main_comp_mode_rocker_pane_cp

0xe6b1,	// (0x00057df7) cell_cmode_itu_pane_cp_ParamLimits

0xe6b1,	// (0x00057df7) cell_cmode_itu_pane_cp

0xe6c6,	// (0x00057e0c) cell_cmode_rocker_pane_cp_ParamLimits

0xe6c6,	// (0x00057e0c) cell_cmode_rocker_pane_cp

0xa112,	// (0x00053858) bg_button_pane_cp06_cp_ParamLimits

0xa112,	// (0x00053858) bg_button_pane_cp06_cp

0x520c,	// (0x0004e952) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x520c,	// (0x0004e952) cell_cmode_rocker_pane_g1_cp

0x4f9c,	// (0x0004e6e2) cell_cmode_rocker_pane_g2_cp

0x9427,	// (0x00052b6d) bg_button_pane_cp07_cp

0xe6d8,	// (0x00057e1e) cell_cmode_itu_pane_g1_cp

0xe6e1,	// (0x00057e27) cell_cmode_itu_pane_t1_cp

0xe6e1,	// (0x00057e27) cell_cmode_itu_pane_t2_cp

0xcb7c,	// (0x000562c2) settings_code_pane_cp2

0x97bc,	// (0x00052f02) bg_popup_window_pane_cp3_ParamLimits

0x9d26,	// (0x0005346c) heading_pane_cp3_ParamLimits

0x9d32,	// (0x00053478) listscroll_popup_graphic_pane_ParamLimits

0x13b4,	// (0x0004aafa) fep_hwr_aid_pane_ParamLimits

0x1852,	// (0x0004af98) aid_touch_sctrl_top_ParamLimits

0x185f,	// (0x0004afa5) sctrl_sk_top_pane_g1_ParamLimits

0x520c,	// (0x0004e952) sctrl_sk_top_pane_g2_ParamLimits

0xfcf2,	// (0x00059438) sctrl_sk_top_pane_g_ParamLimits

0x186c,	// (0x0004afb2) sctrl_sk_top_pane_t1_ParamLimits

0x1852,	// (0x0004af98) aid_touch_sctrl_bottom_ParamLimits

0x186c,	// (0x0004afb2) sctrl_sk_bottom_pane_t1_ParamLimits

0xda46,	// (0x0005718c) aid_area_touch_clock

0xb993,	// (0x000550d9) aid_vkb2_area_top_pane_cell_ParamLimits

0xb993,	// (0x000550d9) aid_vkb2_area_top_pane_cell

0xba3e,	// (0x00055184) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xba3e,	// (0x00055184) aid_vkb2_area_bottom_pane_cell

0x6e19,	// (0x0005055f) popup_char_count_window

0x72a6,	// (0x000509ec) popup_char_count_window_g1

0x72af,	// (0x000509f5) popup_char_count_window_g2

0x72b8,	// (0x000509fe) popup_char_count_window_g3

0x0002,

0xfdc3,	// (0x00059509) popup_char_count_window_g

0x72c1,	// (0x00050a07) popup_char_count_window_t1

0x190d,	// (0x0004b053) popup_fep_char_preview_window_ParamLimits

0x190d,	// (0x0004b053) popup_fep_char_preview_window

0xb9b3,	// (0x000550f9) vkb2_top_candi_pane_ParamLimits

0xb9b3,	// (0x000550f9) vkb2_top_candi_pane

0xe6ef,	// (0x00057e35) cell_vkb2_top_candi_pane_ParamLimits

0xe6ef,	// (0x00057e35) cell_vkb2_top_candi_pane

0x3077,	// (0x0004c7bd) bg_popup_fep_char_preview_window_ParamLimits

0x3077,	// (0x0004c7bd) bg_popup_fep_char_preview_window

0x1e75,	// (0x0004b5bb) popup_fep_char_preview_window_t1_ParamLimits

0x1e75,	// (0x0004b5bb) popup_fep_char_preview_window_t1

0x731c,	// (0x00050a62) bg_popup_fep_char_preview_window_g1

0x7324,	// (0x00050a6a) bg_popup_fep_char_preview_window_g2

0x732c,	// (0x00050a72) bg_popup_fep_char_preview_window_g3

0x7334,	// (0x00050a7a) bg_popup_fep_char_preview_window_g4

0x733c,	// (0x00050a82) bg_popup_fep_char_preview_window_g5

0x1eaf,	// (0x0004b5f5) bg_popup_fep_char_preview_window_g6

0x7344,	// (0x00050a8a) bg_popup_fep_char_preview_window_g7

0x734c,	// (0x00050a92) bg_popup_fep_char_preview_window_g8

0x7354,	// (0x00050a9a) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdca,	// (0x00059510) bg_popup_fep_char_preview_window_g

0x520c,	// (0x0004e952) cell_vkb2_top_candi_pane_g1_ParamLimits

0x520c,	// (0x0004e952) cell_vkb2_top_candi_pane_g1

0x5523,	// (0x0004ec69) cell_vkb2_top_candi_pane_g2_ParamLimits

0x5523,	// (0x0004ec69) cell_vkb2_top_candi_pane_g2

0x5544,	// (0x0004ec8a) cell_vkb2_top_candi_pane_g3_ParamLimits

0x5544,	// (0x0004ec8a) cell_vkb2_top_candi_pane_g3

0x1eb7,	// (0x0004b5fd) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1eb7,	// (0x0004b5fd) cell_vkb2_top_candi_pane_g4

0x735c,	// (0x00050aa2) cell_vkb2_top_candi_pane_g5_ParamLimits

0x735c,	// (0x00050aa2) cell_vkb2_top_candi_pane_g5

0x673c,	// (0x0004fe82) cell_vkb2_top_candi_pane_g6_ParamLimits

0x673c,	// (0x0004fe82) cell_vkb2_top_candi_pane_g6

0x0005,

0xfddd,	// (0x00059523) cell_vkb2_top_candi_pane_g_ParamLimits

0xfddd,	// (0x00059523) cell_vkb2_top_candi_pane_g

0x1ed8,	// (0x0004b61e) cell_vkb2_top_candi_pane_t1

0xb599,	// (0x00054cdf) aid_size_touch_slider_mark_ParamLimits

0xb599,	// (0x00054cdf) aid_size_touch_slider_mark

0xdf9e,	// (0x000576e4) grid_graphic2_catg_pane_ParamLimits

0xdf9e,	// (0x000576e4) grid_graphic2_catg_pane

0xe4c3,	// (0x00057c09) popup_grid_graphic2_window_t1_ParamLimits

0xe4c3,	// (0x00057c09) popup_grid_graphic2_window_t1

0xe4d9,	// (0x00057c1f) popup_grid_graphic2_window_t2_ParamLimits

0xe4d9,	// (0x00057c1f) popup_grid_graphic2_window_t2

0x0001,

0xfd98,	// (0x000594de) popup_grid_graphic2_window_t_ParamLimits

0xfd98,	// (0x000594de) popup_grid_graphic2_window_t

0x9b26,	// (0x0005326c) bg_button_pane_cp05_ParamLimits

0xe667,	// (0x00057dad) cell_graphic2_control_pane_g1_ParamLimits

0xe755,	// (0x00057e9b) cell_graphic2_catg_pane_ParamLimits

0xe755,	// (0x00057e9b) cell_graphic2_catg_pane

0x9427,	// (0x00052b6d) bg_button_pane_cp12

0xe767,	// (0x00057ead) cell_graphic2_catg_pane_g1

0x6876,	// (0x0004ffbc) cell_tb_ext_pane_t1_ParamLimits

0x1caf,	// (0x0004b3f5) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1caf,	// (0x0004b3f5) vkb2_top_cell_right_narrow_pane

0x1cc7,	// (0x0004b40d) vkb2_top_cell_right_wide_pane_ParamLimits

0x1cc7,	// (0x0004b40d) vkb2_top_cell_right_wide_pane

0x13a6,	// (0x0004aaec) bg_vkb2_func_pane_ParamLimits

0x13a6,	// (0x0004aaec) bg_vkb2_func_pane

0x1d38,	// (0x0004b47e) vkb2_top_cell_left_pane_g1_ParamLimits

0x13a6,	// (0x0004aaec) bg_vkb2_fuc_pane_cp03_ParamLimits

0x13a6,	// (0x0004aaec) bg_vkb2_fuc_pane_cp03

0x1d96,	// (0x0004b4dc) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x29f9,	// (0x0004c13f) bg_vkb2_func_pane_g1

0x2a01,	// (0x0004c147) bg_vkb2_func_pane_g2

0x2a11,	// (0x0004c157) bg_vkb2_func_pane_g3

0x2a09,	// (0x0004c14f) bg_vkb2_func_pane_g4

0x2a19,	// (0x0004c15f) bg_vkb2_func_pane_g5

0x2a21,	// (0x0004c167) bg_vkb2_func_pane_g6

0x2a29,	// (0x0004c16f) bg_vkb2_func_pane_g7

0x2a31,	// (0x0004c177) bg_vkb2_func_pane_g8

0x29f1,	// (0x0004c137) bg_vkb2_func_pane_g9

0x0008,

0xfdea,	// (0x00059530) bg_vkb2_func_pane_g

0x13a6,	// (0x0004aaec) bg_vkb2_fuc_pane_cp01_ParamLimits

0x13a6,	// (0x0004aaec) bg_vkb2_fuc_pane_cp01

0x1d38,	// (0x0004b47e) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1d38,	// (0x0004b47e) vkb2_top_cell_right_wide_pane_g1

0x13a6,	// (0x0004aaec) bg_vkb2_fuc_pane_cp02_ParamLimits

0x13a6,	// (0x0004aaec) bg_vkb2_fuc_pane_cp02

0x1d96,	// (0x0004b4dc) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1d96,	// (0x0004b4dc) vkb2_top_cell_right_narrow_pane_g1

0xd76b,	// (0x00056eb1) aid_touch_area_decrease_ParamLimits

0xd76b,	// (0x00056eb1) aid_touch_area_decrease

0xd7a5,	// (0x00056eeb) aid_touch_area_increase_ParamLimits

0xd7a5,	// (0x00056eeb) aid_touch_area_increase

0xd7cd,	// (0x00056f13) aid_touch_area_mute_ParamLimits

0xd7cd,	// (0x00056f13) aid_touch_area_mute

0xd7f5,	// (0x00056f3b) aid_touch_area_slider_ParamLimits

0xd7f5,	// (0x00056f3b) aid_touch_area_slider

0xd835,	// (0x00056f7b) popup_slider_window_g4_ParamLimits

0xd835,	// (0x00056f7b) popup_slider_window_g4

0xd85d,	// (0x00056fa3) popup_slider_window_g5_ParamLimits

0xd85d,	// (0x00056fa3) popup_slider_window_g5

0xd891,	// (0x00056fd7) popup_slider_window_g6_ParamLimits

0xd891,	// (0x00056fd7) popup_slider_window_g6

0x6652,	// (0x0004fd98) popup_slider_window_t2_ParamLimits

0x6652,	// (0x0004fd98) popup_slider_window_t2

0x0001,

0xfce6,	// (0x0005942c) popup_slider_window_t_ParamLimits

0xfce6,	// (0x0005942c) popup_slider_window_t

0xd8ad,	// (0x00056ff3) slider_pane_ParamLimits

0xd8ad,	// (0x00056ff3) slider_pane

0x7398,	// (0x00050ade) slider_pane_g1_ParamLimits

0x7398,	// (0x00050ade) slider_pane_g1

0x73ac,	// (0x00050af2) slider_pane_g2_ParamLimits

0x73ac,	// (0x00050af2) slider_pane_g2

0x73c2,	// (0x00050b08) slider_pane_g3_ParamLimits

0x73c2,	// (0x00050b08) slider_pane_g3

0x0003,

0xfdfd,	// (0x00059543) slider_pane_g_ParamLimits

0xfdfd,	// (0x00059543) slider_pane_g

0xb2d4,	// (0x00054a1a) popup_tb_float_extension_window_ParamLimits

0xb2d4,	// (0x00054a1a) popup_tb_float_extension_window

0x73ee,	// (0x00050b34) aid_size_cell_tb_float_ext

0x9427,	// (0x00052b6d) bg_popup_sub_window_cp28

0xe770,	// (0x00057eb6) grid_tb_float_ext_pane

0xe77a,	// (0x00057ec0) cell_tb_float_ext_pane_ParamLimits

0xe77a,	// (0x00057ec0) cell_tb_float_ext_pane

0xe794,	// (0x00057eda) cell_tb_float_ext_pane_g1

0xe79d,	// (0x00057ee3) grid_highlight_pane_cp12

0xb6b1,	// (0x00054df7) cell_last_hwr_side_pane_ParamLimits

0xb6b1,	// (0x00054df7) cell_last_hwr_side_pane

0x4f9c,	// (0x0004e6e2) cell_last_hwr_side_pane_g1

0x7430,	// (0x00050b76) cell_last_hwr_side_pane_g2

0x0001,

0xfe06,	// (0x0005954c) cell_last_hwr_side_pane_g

0xbb1a,	// (0x00055260) vkb2_area_bottom_space_btn_pane_ParamLimits

0xbb1a,	// (0x00055260) vkb2_area_bottom_space_btn_pane

0x520c,	// (0x0004e952) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6ece,	// (0x00050614) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x1ed8,	// (0x0004b61e) cell_vkb2_top_candi_pane_t1_ParamLimits

0x1ef7,	// (0x0004b63d) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x1ef7,	// (0x0004b63d) vkb2_area_bottom_space_btn_pane_g1

0x1f31,	// (0x0004b677) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x1f31,	// (0x0004b677) vkb2_area_bottom_space_btn_pane_g2

0x1f67,	// (0x0004b6ad) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1f67,	// (0x0004b6ad) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe0b,	// (0x00059551) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe0b,	// (0x00059551) vkb2_area_bottom_space_btn_pane_g

0x145b,	// (0x0004aba1) cel_fep_hwr_func_pane_ParamLimits

0x145b,	// (0x0004aba1) cel_fep_hwr_func_pane

0xb686,	// (0x00054dcc) cell_hwr_side_button_pane_ParamLimits

0xb686,	// (0x00054dcc) cell_hwr_side_button_pane

0xda46,	// (0x0005718c) aid_area_touch_clock_ParamLimits

0x9b26,	// (0x0005326c) bg_uniindi_top_pane_ParamLimits

0xda58,	// (0x0005719e) uniindi_top_pane_g1_ParamLimits

0xda6e,	// (0x000571b4) uniindi_top_pane_g2_ParamLimits

0xda7a,	// (0x000571c0) uniindi_top_pane_g3_ParamLimits

0x68f0,	// (0x00050036) uniindi_top_pane_g4_ParamLimits

0xfd1e,	// (0x00059464) uniindi_top_pane_g_ParamLimits

0xda8b,	// (0x000571d1) uniindi_top_pane_t1_ParamLimits

0x9b26,	// (0x0005326c) bg_vkb2_func_pane_cp01_ParamLimits

0x9b26,	// (0x0005326c) bg_vkb2_func_pane_cp01

0x7439,	// (0x00050b7f) cel_fep_hwr_func_pane_g1_ParamLimits

0x7439,	// (0x00050b7f) cel_fep_hwr_func_pane_g1

0x9b26,	// (0x0005326c) bg_vkb2_func_pane_cp02_ParamLimits

0x9b26,	// (0x0005326c) bg_vkb2_func_pane_cp02

0x7439,	// (0x00050b7f) cell_hwr_side_button_pane_g1_ParamLimits

0x7439,	// (0x00050b7f) cell_hwr_side_button_pane_g1

0x2875,	// (0x0004bfbb) status_pane_g4_ParamLimits

0x2875,	// (0x0004bfbb) status_pane_g4

0x288f,	// (0x0004bfd5) status_pane_t1

0x4cd7,	// (0x0004e41d) form2_midp_gauge_slider_cont_pane

0x4cdf,	// (0x0004e425) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcf11,	// (0x00056657) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcf23,	// (0x00056669) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf1,	// (0x00059237) form2_midp_gauge_slider_pane_t_ParamLimits

0x4d15,	// (0x0004e45b) form2_midp_slider_pane_ParamLimits

0x18cd,	// (0x0004b013) aid_size_cell_func_vkb2_ParamLimits

0x18cd,	// (0x0004b013) aid_size_cell_func_vkb2

0x73da,	// (0x00050b20) slider_pane_g4_ParamLimits

0x73da,	// (0x00050b20) slider_pane_g4

0xbb7b,	// (0x000552c1) form2_midp_gauge_slider_pane_t2_cp01

0xbb89,	// (0x000552cf) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xbb89,	// (0x000552cf) form2_midp_gauge_slider_pane_t3_cp01

0x1fdc,	// (0x0004b722) form2_midp_slider_pane_cp01

0x9427,	// (0x00052b6d) navi_smil_pane

0x7472,	// (0x00050bb8) navi_smil_pane_g1

0x747a,	// (0x00050bc0) navi_smil_pane_t1

0x7447,	// (0x00050b8d) form2_midp_slider_pane_g1

0x7450,	// (0x00050b96) form2_midp_slider_pane_g2

0x7458,	// (0x00050b9e) form2_midp_slider_pane_g3

0x7447,	// (0x00050b8d) form2_midp_slider_pane_g4

0xe7a6,	// (0x00057eec) form2_midp_slider_pane_g5

0x0004,

0xfe14,	// (0x0005955a) form2_midp_slider_pane_g

0x1fa1,	// (0x0004b6e7) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x1fa1,	// (0x0004b6e7) vkb2_area_bottom_space_btn_pane_g4

0xc0db,	// (0x00055821) lc0_navi_pane_ParamLimits

0xc0db,	// (0x00055821) lc0_navi_pane

0xc145,	// (0x0005588b) lc0_stat_indi_pane_ParamLimits

0xc145,	// (0x0005588b) lc0_stat_indi_pane

0xc15a,	// (0x000558a0) ls0_title_pane_ParamLimits

0xc15a,	// (0x000558a0) ls0_title_pane

0xa112,	// (0x00053858) bg_popup_sub_pane_cp14_ParamLimits

0xda2d,	// (0x00057173) list_uniindi_pane_ParamLimits

0xda39,	// (0x0005717f) uniindi_top_pane_ParamLimits

0x6939,	// (0x0005007f) list_single_uniindi_pane_g1_ParamLimits

0x694c,	// (0x00050092) list_single_uniindi_pane_t1_ParamLimits

0xbba6,	// (0x000552ec) lc0_stat_clock_pane_ParamLimits

0xbba6,	// (0x000552ec) lc0_stat_clock_pane

0xe7b1,	// (0x00057ef7) lc0_stat_indi_pane_g1_ParamLimits

0xe7b1,	// (0x00057ef7) lc0_stat_indi_pane_g1

0xe7be,	// (0x00057f04) lc0_stat_indi_pane_g2_ParamLimits

0xe7be,	// (0x00057f04) lc0_stat_indi_pane_g2

0x0001,

0xfe1f,	// (0x00059565) lc0_stat_indi_pane_g_ParamLimits

0xfe1f,	// (0x00059565) lc0_stat_indi_pane_g

0xbbb6,	// (0x000552fc) lc0_uni_indicator_pane_ParamLimits

0xbbb6,	// (0x000552fc) lc0_uni_indicator_pane

0xe7cb,	// (0x00057f11) ls0_title_pane_g1_ParamLimits

0xe7cb,	// (0x00057f11) ls0_title_pane_g1

0xe7df,	// (0x00057f25) ls0_title_pane_t1_ParamLimits

0xe7df,	// (0x00057f25) ls0_title_pane_t1

0xbbc6,	// (0x0005530c) lc0_uni_indicator_pane_g1_ParamLimits

0xbbc6,	// (0x0005530c) lc0_uni_indicator_pane_g1

0x74ec,	// (0x00050c32) lc0_stat_clock_pane_t1

0x9427,	// (0x00052b6d) main_ai5_pane

0x74fa,	// (0x00050c40) ai5_sk_pane_ParamLimits

0x74fa,	// (0x00050c40) ai5_sk_pane

0xe80d,	// (0x00057f53) cell_ai5_widget_pane_ParamLimits

0xe80d,	// (0x00057f53) cell_ai5_widget_pane

0x75c2,	// (0x00050d08) aid_size_cell_widget_grid

0x75d0,	// (0x00050d16) bg_ai5_widget_pane_ParamLimits

0x75d0,	// (0x00050d16) bg_ai5_widget_pane

0x7648,	// (0x00050d8e) cell_ai5_widget_pane_g2

0x765c,	// (0x00050da2) cell_ai5_widget_pane_g3

0x7676,	// (0x00050dbc) cell_ai5_widget_pane_g4

0x7686,	// (0x00050dcc) cell_ai5_widget_pane_g5

0x7696,	// (0x00050ddc) cell_ai5_widget_pane_g6

0x76a2,	// (0x00050de8) cell_ai5_widget_pane_g7

0x76ea,	// (0x00050e30) cell_ai5_widget_pane_t1_ParamLimits

0x76ea,	// (0x00050e30) cell_ai5_widget_pane_t1

0x7707,	// (0x00050e4d) cell_ai5_widget_pane_t2_ParamLimits

0x7707,	// (0x00050e4d) cell_ai5_widget_pane_t2

0x771f,	// (0x00050e65) cell_ai5_widget_pane_t3_ParamLimits

0x771f,	// (0x00050e65) cell_ai5_widget_pane_t3

0x7737,	// (0x00050e7d) cell_ai5_widget_pane_t4_ParamLimits

0x7737,	// (0x00050e7d) cell_ai5_widget_pane_t4

0x775d,	// (0x00050ea3) cell_ai5_widget_pane_t5_ParamLimits

0x775d,	// (0x00050ea3) cell_ai5_widget_pane_t5

0x777d,	// (0x00050ec3) cell_ai5_widget_pane_t6_ParamLimits

0x777d,	// (0x00050ec3) cell_ai5_widget_pane_t6

0x778f,	// (0x00050ed5) cell_ai5_widget_pane_t7_ParamLimits

0x778f,	// (0x00050ed5) cell_ai5_widget_pane_t7

0x77a8,	// (0x00050eee) cell_ai5_widget_pane_t8_ParamLimits

0x77a8,	// (0x00050eee) cell_ai5_widget_pane_t8

0x0009,

0xfe39,	// (0x0005957f) cell_ai5_widget_pane_t_ParamLimits

0xfe39,	// (0x0005957f) cell_ai5_widget_pane_t

0x7807,	// (0x00050f4d) grid_ai5_widget_pane

0xa112,	// (0x00053858) highlight_cell_ai5_widget_pane_ParamLimits

0xa112,	// (0x00053858) highlight_cell_ai5_widget_pane

0xe873,	// (0x00057fb9) ai5_sk_left_pane

0xe87d,	// (0x00057fc3) ai5_sk_middle_pane

0xe887,	// (0x00057fcd) ai5_sk_right_pane

0x7833,	// (0x00050f79) bg_ai5_widget_pane_g1_ParamLimits

0x7833,	// (0x00050f79) bg_ai5_widget_pane_g1

0x783f,	// (0x00050f85) bg_ai5_widget_pane_g2_ParamLimits

0x783f,	// (0x00050f85) bg_ai5_widget_pane_g2

0x784b,	// (0x00050f91) bg_ai5_widget_pane_g3_ParamLimits

0x784b,	// (0x00050f91) bg_ai5_widget_pane_g3

0x7857,	// (0x00050f9d) bg_ai5_widget_pane_g4_ParamLimits

0x7857,	// (0x00050f9d) bg_ai5_widget_pane_g4

0x7863,	// (0x00050fa9) bg_ai5_widget_pane_g5_ParamLimits

0x7863,	// (0x00050fa9) bg_ai5_widget_pane_g5

0x786f,	// (0x00050fb5) bg_ai5_widget_pane_g6_ParamLimits

0x786f,	// (0x00050fb5) bg_ai5_widget_pane_g6

0x787b,	// (0x00050fc1) bg_ai5_widget_pane_g7_ParamLimits

0x787b,	// (0x00050fc1) bg_ai5_widget_pane_g7

0x7887,	// (0x00050fcd) bg_ai5_widget_pane_g8_ParamLimits

0x7887,	// (0x00050fcd) bg_ai5_widget_pane_g8

0x7893,	// (0x00050fd9) bg_ai5_widget_pane_g9_ParamLimits

0x7893,	// (0x00050fd9) bg_ai5_widget_pane_g9

0x0008,

0xfe4e,	// (0x00059594) bg_ai5_widget_pane_g_ParamLimits

0xfe4e,	// (0x00059594) bg_ai5_widget_pane_g

0x78c5,	// (0x0005100b) cell_shortcut_ai5_widget_pane_ParamLimits

0x78c5,	// (0x0005100b) cell_shortcut_ai5_widget_pane

0xe405,	// (0x00057b4b) bg_cell_shortcut_ai5_widget_pane

0x78d6,	// (0x0005101c) cell_grid_ai5_widget_pane_g1

0xe405,	// (0x00057b4b) highlight_cell_shortcut_ai5_widget_pane

0x2a01,	// (0x0004c147) ai5_sk_left_pane_g1

0x78df,	// (0x00051025) ai5_sk_left_pane_g2

0x78e7,	// (0x0005102d) ai5_sk_left_pane_g3

0x78ef,	// (0x00051035) ai5_sk_left_pane_g4

0x0003,

0xfe61,	// (0x000595a7) ai5_sk_left_pane_g

0x78f7,	// (0x0005103d) ai5_sk_left_pane_t1

0x29f9,	// (0x0004c13f) ai5_sk_right_pane_g1

0x7905,	// (0x0005104b) ai5_sk_right_pane_g2

0x790d,	// (0x00051053) ai5_sk_right_pane_g3

0x7915,	// (0x0005105b) ai5_sk_right_pane_g4

0x0003,

0xfe6a,	// (0x000595b0) ai5_sk_right_pane_g

0x791d,	// (0x00051063) ai5_sk_right_pane_t1

0x29f9,	// (0x0004c13f) ai5_sk_middle_pane_g1

0x2a01,	// (0x0004c147) ai5_sk_middle_pane_g2

0x2a19,	// (0x0004c15f) ai5_sk_middle_pane_g3

0x790d,	// (0x00051053) ai5_sk_middle_pane_g4

0x78e7,	// (0x0005102d) ai5_sk_middle_pane_g5

0x792b,	// (0x00051071) ai5_sk_middle_pane_g6

0xe891,	// (0x00057fd7) ai5_sk_middle_pane_g7

0x0006,

0xfe73,	// (0x000595b9) ai5_sk_middle_pane_g

0xb3f8,	// (0x00054b3e) aid_touch_area_size_lc0_ParamLimits

0xb3f8,	// (0x00054b3e) aid_touch_area_size_lc0

0x15e6,	// (0x0004ad2c) cell_hwr_candidate_pane_t1_ParamLimits

0x2546,	// (0x0004bc8c) aid_touch_navi_pane

0xc253,	// (0x00055999) status_dt_navi_pane_ParamLimits

0xc253,	// (0x00055999) status_dt_navi_pane

0xc26b,	// (0x000559b1) status_dt_sta_pane_ParamLimits

0xc26b,	// (0x000559b1) status_dt_sta_pane

0xe899,	// (0x00057fdf) dt_sta_controll_pane

0xe8a6,	// (0x00057fec) dt_sta_indi_pane

0xe8b3,	// (0x00057ff9) dt_sta_title_pane

0x9b26,	// (0x0005326c) bg_dt_sta_indi_pane_ParamLimits

0x9b26,	// (0x0005326c) bg_dt_sta_indi_pane

0xe8c5,	// (0x0005800b) dt_sta_battery_pane

0xe8cd,	// (0x00058013) dt_sta_indi_pane_g1

0x797d,	// (0x000510c3) dt_sta_indi_pane_g2

0x7986,	// (0x000510cc) dt_sta_indi_pane_g3

0x0002,

0xfe82,	// (0x000595c8) dt_sta_indi_pane_g

0x798f,	// (0x000510d5) dt_sta_signal_pane

0xa112,	// (0x00053858) bg_dt_sta_title_pane_ParamLimits

0xa112,	// (0x00053858) bg_dt_sta_title_pane

0x3833,	// (0x0004cf79) dt_sta_title_pane_g1

0xe8d6,	// (0x0005801c) dt_sta_title_pane_t1_ParamLimits

0xe8d6,	// (0x0005801c) dt_sta_title_pane_t1

0x9427,	// (0x00052b6d) bg_dt_sta_control_pane

0xe8eb,	// (0x00058031) dt_sta_controll_pane_g1

0xe8f4,	// (0x0005803a) bg_dt_sta_title_pane_g1

0xe8fd,	// (0x00058043) bg_dt_sta_title_pane_g2

0xe906,	// (0x0005804c) bg_dt_sta_title_pane_g3

0x0002,

0xfe89,	// (0x000595cf) bg_dt_sta_title_pane_g

0x4f9c,	// (0x0004e6e2) bg_dt_sta_indi_pane_g1

0x79d1,	// (0x00051117) dt_sta_signal_pane_g1

0x79d9,	// (0x0005111f) dt_sta_signal_pane_g2

0x0001,

0xfe90,	// (0x000595d6) dt_sta_signal_pane_g

0x79e1,	// (0x00051127) dt_sta_battery_pane_g1

0x79ea,	// (0x00051130) dt_sta_battery_pane_t1

0x4f9c,	// (0x0004e6e2) bg_dt_sta_control_pane_g1

0xbf42,	// (0x00055688) fep_china_uni_eep_pane

0xbf4a,	// (0x00055690) fep_china_uni_entry_pane_ParamLimits

0xbf5a,	// (0x000556a0) popup_fep_china_uni_window_g1_ParamLimits

0xbf6a,	// (0x000556b0) popup_fep_china_uni_window_g2_ParamLimits

0xbf6a,	// (0x000556b0) popup_fep_china_uni_window_g2

0x0001,

0xf713,	// (0x00058e59) popup_fep_china_uni_window_g_ParamLimits

0xf713,	// (0x00058e59) popup_fep_china_uni_window_g

0x79f9,	// (0x0005113f) fep_china_uni_eep_pane_g1

0x7a01,	// (0x00051147) fep_china_uni_eep_pane_t1

0x7469,	// (0x00050baf) aid_touch_area_size_smil_player

0x269c,	// (0x0004bde2) lc0_clock_pane

0x2883,	// (0x0004bfc9) status_pane_g5_ParamLimits

0x2883,	// (0x0004bfc9) status_pane_g5

0xae0a,	// (0x00054550) popup_keymap_window

0x2841,	// (0x0004bf87) status_icon_pane

0x765c,	// (0x00050da2) cell_ai5_widget_pane_g3_ParamLimits

0x7676,	// (0x00050dbc) cell_ai5_widget_pane_g4_ParamLimits

0x7686,	// (0x00050dcc) cell_ai5_widget_pane_g5_ParamLimits

0x76ae,	// (0x00050df4) cell_ai5_widget_pane_g8_ParamLimits

0x76ae,	// (0x00050df4) cell_ai5_widget_pane_g8

0x76c2,	// (0x00050e08) cell_ai5_widget_pane_g9_ParamLimits

0x76c2,	// (0x00050e08) cell_ai5_widget_pane_g9

0x76d6,	// (0x00050e1c) cell_ai5_widget_pane_g10_ParamLimits

0x76d6,	// (0x00050e1c) cell_ai5_widget_pane_g10

0x7a10,	// (0x00051156) status_icon_pane_g1

0x9427,	// (0x00052b6d) bg_popup_sub_pane_cp13

0x7a18,	// (0x0005115e) popup_keymap_window_t1

0xaaca,	// (0x00054210) control_pane_g6_ParamLimits

0xaaca,	// (0x00054210) control_pane_g6

0xaad7,	// (0x0005421d) control_pane_g7_ParamLimits

0xaad7,	// (0x0005421d) control_pane_g7

0xaae4,	// (0x0005422a) control_pane_g8_ParamLimits

0xaae4,	// (0x0005422a) control_pane_g8

0xe899,	// (0x00057fdf) dt_sta_controll_pane_ParamLimits

0xe8a6,	// (0x00057fec) dt_sta_indi_pane_ParamLimits

0xe8b3,	// (0x00057ff9) dt_sta_title_pane_ParamLimits

0x9fef,	// (0x00053735) aid_size_touch_scroll_bar_cale

0x953f,	// (0x00052c85) popup_discreet_window_ParamLimits

0x953f,	// (0x00052c85) popup_discreet_window

0x9591,	// (0x00052cd7) popup_sk_window

0x3077,	// (0x0004c7bd) bg_popup_sub_pane_cp28_ParamLimits

0x3077,	// (0x0004c7bd) bg_popup_sub_pane_cp28

0x7a26,	// (0x0005116c) popup_discreet_window_g1_ParamLimits

0x7a26,	// (0x0005116c) popup_discreet_window_g1

0xe90f,	// (0x00058055) popup_discreet_window_t1_ParamLimits

0xe90f,	// (0x00058055) popup_discreet_window_t1

0x7a64,	// (0x000511aa) popup_discreet_window_t2_ParamLimits

0x7a64,	// (0x000511aa) popup_discreet_window_t2

0x0002,

0xfe95,	// (0x000595db) popup_discreet_window_t_ParamLimits

0xfe95,	// (0x000595db) popup_discreet_window_t

0x2013,	// (0x0004b759) popup_sk_window_g1

0x201d,	// (0x0004b763) popup_sk_window_g2

0x0001,

0xfe9c,	// (0x000595e2) popup_sk_window_g

0xbbf1,	// (0x00055337) popup_sk_window_t1

0xbbff,	// (0x00055345) popup_sk_window_t1_copy1

0x7648,	// (0x00050d8e) cell_ai5_widget_pane_g2_ParamLimits

0x77ba,	// (0x00050f00) cell_ai5_widget_pane_t9_ParamLimits

0x77ba,	// (0x00050f00) cell_ai5_widget_pane_t9

0x9427,	// (0x00052b6d) main_fep_fshwr2_pane

0xbc0d,	// (0x00055353) aid_fshwr2_btn_pane

0xbc1f,	// (0x00055365) aid_fshwr2_syb_pane

0xbc31,	// (0x00055377) aid_fshwr2_txt_pane

0xbc40,	// (0x00055386) fshwr2_func_candi_pane

0xbc5f,	// (0x000553a5) fshwr2_hwr_syb_pane

0xbc7a,	// (0x000553c0) fshwr2_icf_pane

0x9427,	// (0x00052b6d) fshwr2_icf_bg_pane

0x20c2,	// (0x0004b808) fshwr2_icf_pane_t1_ParamLimits

0x20c2,	// (0x0004b808) fshwr2_icf_pane_t1

0xbebf,	// (0x00055605) fshwr2_func_candi_pane_g1

0xe92d,	// (0x00058073) fshwr2_func_candi_row_pane_ParamLimits

0xe92d,	// (0x00058073) fshwr2_func_candi_row_pane

0xbca6,	// (0x000553ec) cell_fshwr2_syb_pane_ParamLimits

0xbca6,	// (0x000553ec) cell_fshwr2_syb_pane

0x520c,	// (0x0004e952) fshwr2_hwr_syb_pane_g1_ParamLimits

0x520c,	// (0x0004e952) fshwr2_hwr_syb_pane_g1

0x9427,	// (0x00052b6d) bg_popup_call_pane_cp01

0xbcbc,	// (0x00055402) fshwr2_func_candi_cell_pane_ParamLimits

0xbcbc,	// (0x00055402) fshwr2_func_candi_cell_pane

0x2e60,	// (0x0004c5a6) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x2e60,	// (0x0004c5a6) fshwr2_func_candi_cell_bg_pane

0xbd07,	// (0x0005544d) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xbd07,	// (0x0005544d) fshwr2_func_candi_cell_pane_g1

0xbd3e,	// (0x00055484) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xbd3e,	// (0x00055484) fshwr2_func_candi_cell_pane_t1

0x9427,	// (0x00052b6d) bg_button_pane_cp08

0x7ac6,	// (0x0005120c) cell_fshwr2_syb_bg_pane

0xbd59,	// (0x0005549f) cell_fshwr2_syb_bg_pane_g1

0xbd61,	// (0x000554a7) cell_fshwr2_syb_bg_pane_t1

0xa112,	// (0x00053858) main_tmo_pane

0xc92e,	// (0x00056074) uni_indicator_pane_g1_ParamLimits

0xc944,	// (0x0005608a) uni_indicator_pane_g2_ParamLimits

0xc95a,	// (0x000560a0) uni_indicator_pane_g3_ParamLimits

0x3ba0,	// (0x0004d2e6) uni_indicator_pane_g4_ParamLimits

0x3ba0,	// (0x0004d2e6) uni_indicator_pane_g4

0x3bb4,	// (0x0004d2fa) uni_indicator_pane_g5_ParamLimits

0x3bb4,	// (0x0004d2fa) uni_indicator_pane_g5

0x3bb4,	// (0x0004d2fa) uni_indicator_pane_g6_ParamLimits

0x3bb4,	// (0x0004d2fa) uni_indicator_pane_g6

0xf90b,	// (0x00059051) uni_indicator_pane_g_ParamLimits

0xd74d,	// (0x00056e93) popup_tmo_note_window_ParamLimits

0xd74d,	// (0x00056e93) popup_tmo_note_window

0xa112,	// (0x00053858) fshwr2_bg_pane

0xbd2f,	// (0x00055475) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xbd2f,	// (0x00055475) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea1,	// (0x000595e7) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea1,	// (0x000595e7) fshwr2_func_candi_cell_pane_g

0x4f9c,	// (0x0004e6e2) bg_popup_window_pane_cp01

0x218e,	// (0x0004b8d4) bg_popup_window_pane_g1_cp01

0x7ace,	// (0x00051214) bg_popup_window_pane_cp22_ParamLimits

0x7ace,	// (0x00051214) bg_popup_window_pane_cp22

0xe950,	// (0x00058096) listscroll_tmo_link_pane_ParamLimits

0xe950,	// (0x00058096) listscroll_tmo_link_pane

0x7b1c,	// (0x00051262) popup_tmo_note_window_g1_ParamLimits

0x7b1c,	// (0x00051262) popup_tmo_note_window_g1

0xe990,	// (0x000580d6) tmo_note_info_pane_ParamLimits

0xe990,	// (0x000580d6) tmo_note_info_pane

0xe9aa,	// (0x000580f0) list_tmo_note_info_pane_g1_ParamLimits

0xe9aa,	// (0x000580f0) list_tmo_note_info_pane_g1

0x7b5a,	// (0x000512a0) list_tmo_note_info_pane_g2_ParamLimits

0x7b5a,	// (0x000512a0) list_tmo_note_info_pane_g2

0x0001,

0xfea6,	// (0x000595ec) list_tmo_note_info_pane_g_ParamLimits

0xfea6,	// (0x000595ec) list_tmo_note_info_pane_g

0x7b76,	// (0x000512bc) list_tmo_note_info_text_pane_ParamLimits

0x7b76,	// (0x000512bc) list_tmo_note_info_text_pane

0x7bf7,	// (0x0005133d) list_tmo_link_pane

0x7c04,	// (0x0005134a) scroll_pane_cp20

0x7c11,	// (0x00051357) list_single_tmo_link_pane_ParamLimits

0x7c11,	// (0x00051357) list_single_tmo_link_pane

0x7c21,	// (0x00051367) list_single_tmo_link_pane_t1

0x7c2f,	// (0x00051375) list_tmo_note_info_text_pane_t1_ParamLimits

0x7c2f,	// (0x00051375) list_tmo_note_info_text_pane_t1

0xa1bd,	// (0x00053903) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa1bd,	// (0x00053903) aid_size_touch_scroll_bar_cp01

0x90a3,	// (0x000527e9) aid_size_touch_slider_marker

0x9581,	// (0x00052cc7) popup_settings_window_ParamLimits

0x9581,	// (0x00052cc7) popup_settings_window

0xe415,	// (0x00057b5b) popup_candi_list_indi_window

0x2546,	// (0x0004bc8c) aid_touch_navi_pane_ParamLimits

0x1826,	// (0x0004af6c) rs_clock_indi_pane

0x182f,	// (0x0004af75) sctrl_sk_bottom_pane_ParamLimits

0x1840,	// (0x0004af86) sctrl_sk_top_pane_ParamLimits

0xb857,	// (0x00054f9d) popup_fep_tooltip_window

0x75c2,	// (0x00050d08) aid_size_cell_widget_grid_ParamLimits

0x7633,	// (0x00050d79) cell_ai5_widget_pane_g1_ParamLimits

0x7633,	// (0x00050d79) cell_ai5_widget_pane_g1

0x7696,	// (0x00050ddc) cell_ai5_widget_pane_g6_ParamLimits

0x76a2,	// (0x00050de8) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe24,	// (0x0005956a) cell_ai5_widget_pane_g_ParamLimits

0xfe24,	// (0x0005956a) cell_ai5_widget_pane_g

0x77e9,	// (0x00050f2f) cell_ai5_widget_pane_t10_ParamLimits

0x77e9,	// (0x00050f2f) cell_ai5_widget_pane_t10

0x7807,	// (0x00050f4d) grid_ai5_widget_pane_ParamLimits

0x789f,	// (0x00050fe5) cell_contacts_ai5_widget_pane_ParamLimits

0x789f,	// (0x00050fe5) cell_contacts_ai5_widget_pane

0x7a79,	// (0x000511bf) popup_discreet_window_t3_ParamLimits

0x7a79,	// (0x000511bf) popup_discreet_window_t3

0xbc92,	// (0x000553d8) popup_fshwr2_char_preview_window_ParamLimits

0xbc92,	// (0x000553d8) popup_fshwr2_char_preview_window

0xe9c1,	// (0x00058107) tmo_note_info_pane_t1

0xe9d6,	// (0x0005811c) tmo_note_info_pane_t2

0xe9ed,	// (0x00058133) tmo_note_info_pane_t3

0x7bd3,	// (0x00051319) tmo_note_info_pane_t4

0x7be5,	// (0x0005132b) tmo_note_info_pane_t5

0x0004,

0xfeab,	// (0x000595f1) tmo_note_info_pane_t

0x7bf7,	// (0x0005133d) list_tmo_link_pane_ParamLimits

0x7c04,	// (0x0005134a) scroll_pane_cp20_ParamLimits

0x9427,	// (0x00052b6d) bg_popup_fep_char_preview_window_cp01

0xea02,	// (0x00058148) popup_fshwr2_char_preview_window_t1

0x7c56,	// (0x0005139c) popup_candi_list_indi_window_g1

0x7c5f,	// (0x000513a5) bg_cell_contacts_ai5_widget_pane

0x7c6b,	// (0x000513b1) cell_contacts_ai5_widget_pane_g1

0x56a3,	// (0x0004ede9) cell_contacts_ai5_widget_pane_g2

0x7c80,	// (0x000513c6) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb6,	// (0x000595fc) cell_contacts_ai5_widget_pane_g

0x7c8c,	// (0x000513d2) cell_contacts_ai5_widget_pane_t1

0xa112,	// (0x00053858) highlight_cell_shortcut_ai5_widget_pane_cp01

0x7d03,	// (0x00051449) settings_container_pane

0xe405,	// (0x00057b4b) listscroll_set_pane_copy1

0x4692,	// (0x0004ddd8) scroll_pane_cp121_copy1

0x2e24,	// (0x0004c56a) set_content_pane_copy1

0xea75,	// (0x000581bb) aid_height_set_list_copy1_ParamLimits

0xea75,	// (0x000581bb) aid_height_set_list_copy1

0x3dac,	// (0x0004d4f2) aid_size_parent_copy1_ParamLimits

0x3dac,	// (0x0004d4f2) aid_size_parent_copy1

0xea81,	// (0x000581c7) button_value_adjust_pane_cp6_copy1_ParamLimits

0xea81,	// (0x000581c7) button_value_adjust_pane_cp6_copy1

0x24ca,	// (0x0004bc10) list_highlight_pane_cp2_copy1_ParamLimits

0x24ca,	// (0x0004bc10) list_highlight_pane_cp2_copy1

0xea95,	// (0x000581db) list_set_pane_copy1_ParamLimits

0xea95,	// (0x000581db) list_set_pane_copy1

0xea10,	// (0x00058156) main_pane_set_t1_copy1_ParamLimits

0xea10,	// (0x00058156) main_pane_set_t1_copy1

0xea4a,	// (0x00058190) main_pane_set_t2_copy1_ParamLimits

0xea4a,	// (0x00058190) main_pane_set_t2_copy1

0xeb42,	// (0x00058288) main_pane_set_t3_copy1

0xeb50,	// (0x00058296) main_pane_set_t4_copy1

0xea69,	// (0x000581af) set_content_pane_g1_copy1_ParamLimits

0xea69,	// (0x000581af) set_content_pane_g1_copy1

0xeb5e,	// (0x000582a4) setting_code_pane_copy1

0x7e00,	// (0x00051546) setting_slider_graphic_pane_copy1

0x7e00,	// (0x00051546) setting_slider_pane_copy1

0x7e00,	// (0x00051546) setting_text_pane_copy1

0x7e00,	// (0x00051546) setting_volume_pane_copy1

0xeb5e,	// (0x000582a4) settings_code_pane_cp2_copy1

0xeb66,	// (0x000582ac) settings_code_pane_cp_copy1_ParamLimits

0xeb66,	// (0x000582ac) settings_code_pane_cp_copy1

0xbd70,	// (0x000554b6) volume_set_pane_copy1

0xeb7a,	// (0x000582c0) volume_set_pane_g10_copy1

0xeb82,	// (0x000582c8) volume_set_pane_g1_copy1

0xeb8a,	// (0x000582d0) volume_set_pane_g2_copy1

0xeb92,	// (0x000582d8) volume_set_pane_g3_copy1

0xeb9a,	// (0x000582e0) volume_set_pane_g4_copy1

0xeba2,	// (0x000582e8) volume_set_pane_g5_copy1

0xebaa,	// (0x000582f0) volume_set_pane_g6_copy1

0xebb2,	// (0x000582f8) volume_set_pane_g7_copy1

0xebba,	// (0x00058300) volume_set_pane_g8_copy1

0xebc2,	// (0x00058308) volume_set_pane_g9_copy1

0x97bc,	// (0x00052f02) bg_set_opt_pane_cp_copy1_ParamLimits

0x97bc,	// (0x00052f02) bg_set_opt_pane_cp_copy1

0xbd78,	// (0x000554be) setting_slider_pane_t1_copy1_ParamLimits

0xbd78,	// (0x000554be) setting_slider_pane_t1_copy1

0xbd96,	// (0x000554dc) setting_slider_pane_t2_copy1_ParamLimits

0xbd96,	// (0x000554dc) setting_slider_pane_t2_copy1

0xbdb0,	// (0x000554f6) setting_slider_pane_t3_copy1_ParamLimits

0xbdb0,	// (0x000554f6) setting_slider_pane_t3_copy1

0xbdc8,	// (0x0005550e) slider_set_pane_copy1_ParamLimits

0xbdc8,	// (0x0005550e) slider_set_pane_copy1

0xa15e,	// (0x000538a4) set_opt_bg_pane_g1_copy2

0xa166,	// (0x000538ac) set_opt_bg_pane_g2_copy2

0x7e6c,	// (0x000515b2) set_opt_bg_pane_g3_copy2

0xa176,	// (0x000538bc) set_opt_bg_pane_g4_copy2

0xa17e,	// (0x000538c4) set_opt_bg_pane_g5_copy2

0xa186,	// (0x000538cc) set_opt_bg_pane_g6_copy2

0xebca,	// (0x00058310) set_opt_bg_pane_g7_copy2

0x7e7e,	// (0x000515c4) set_opt_bg_pane_g8_copy2

0x7e88,	// (0x000515ce) set_opt_bg_pane_g9_copy2

0xbdde,	// (0x00055524) aid_size_touch_slider_mark_copy1_ParamLimits

0xbdde,	// (0x00055524) aid_size_touch_slider_mark_copy1

0xebd2,	// (0x00058318) slider_set_pane_g1_copy1

0x2219,	// (0x0004b95f) slider_set_pane_g2_copy1

0xb5ad,	// (0x00054cf3) slider_set_pane_g3_copy1_ParamLimits

0xb5ad,	// (0x00054cf3) slider_set_pane_g3_copy1

0xb5c1,	// (0x00054d07) slider_set_pane_g4_copy1_ParamLimits

0xb5c1,	// (0x00054d07) slider_set_pane_g4_copy1

0xb5d9,	// (0x00054d1f) slider_set_pane_g5_copy1_ParamLimits

0xb5d9,	// (0x00054d1f) slider_set_pane_g5_copy1

0xb5ad,	// (0x00054cf3) slider_set_pane_g6_copy1_ParamLimits

0xb5ad,	// (0x00054cf3) slider_set_pane_g6_copy1

0xbdf2,	// (0x00055538) slider_set_pane_g7_copy1_ParamLimits

0xbdf2,	// (0x00055538) slider_set_pane_g7_copy1

0x9521,	// (0x00052c67) bg_set_opt_pane_cp2_copy1

0xebdb,	// (0x00058321) setting_slider_graphic_pane_g1_copy1

0xebe4,	// (0x0005832a) setting_slider_graphic_pane_t1_copy1

0xebf4,	// (0x0005833a) setting_slider_graphic_pane_t2_copy1

0xec04,	// (0x0005834a) slider_set_pane_cp_copy1

0x7ed4,	// (0x0005161a) input_focus_pane_cp1_copy1

0x7edd,	// (0x00051623) list_set_text_pane_copy1

0x7ee5,	// (0x0005162b) setting_text_pane_g1_copy1

0xf352,	// (0x00058a98) set_text_pane_t1_copy1

0x7ed4,	// (0x0005161a) input_focus_pane_cp2_copy1

0x7ee5,	// (0x0005162b) setting_code_pane_g1_copy1

0x7eee,	// (0x00051634) setting_code_pane_t1_copy1

0x7efc,	// (0x00051642) list_set_graphic_pane_copy1

0x9521,	// (0x00052c67) bg_set_opt_pane_cp4_copy1

0xe18b,	// (0x000578d1) list_set_graphic_pane_g1_copy1_ParamLimits

0xe18b,	// (0x000578d1) list_set_graphic_pane_g1_copy1

0x7f10,	// (0x00051656) list_set_graphic_pane_g2_copy1

0xe1a3,	// (0x000578e9) list_set_graphic_pane_t1_copy1_ParamLimits

0xe1a3,	// (0x000578e9) list_set_graphic_pane_t1_copy1

0x4f9c,	// (0x0004e6e2) rs_clock_indi_pane_g1

0x7f18,	// (0x0005165e) rs_clock_indi_pane_t1

0x7f26,	// (0x0005166c) rs_indi_pane

0x7f2e,	// (0x00051674) rs_indi_pane_g1

0x7f37,	// (0x0005167d) rs_indi_pane_g2

0x7c56,	// (0x0005139c) rs_indi_pane_g3

0x0002,

0xfebd,	// (0x00059603) rs_indi_pane_g

0xe405,	// (0x00057b4b) bg_popup_preview_window_pane_cp03

0x7f40,	// (0x00051686) popup_fep_tooltip_window_t1

0xd3f2,	// (0x00056b38) popup_note2_window_g2_ParamLimits

0xd3f2,	// (0x00056b38) popup_note2_window_g2

0x0001,

0xfc5d,	// (0x000593a3) popup_note2_window_g_ParamLimits

0xfc5d,	// (0x000593a3) popup_note2_window_g

0x6118,	// (0x0004f85e) bg_popup_sub_pane_cp11_ParamLimits

0x6125,	// (0x0004f86b) cell_ai3_links_pane_g1_ParamLimits

0x613c,	// (0x0004f882) cell_ai3_links_pane_t1

0xf352,	// (0x00058a98) set_text_pane_t1_copy1_ParamLimits

0xe344,	// (0x00057a8a) cell_graphic_popup_pane_cp2_ParamLimits

0xe344,	// (0x00057a8a) cell_graphic_popup_pane_cp2

0xec14,	// (0x0005835a) cell_graphic_popup_pane_g1_cp2

0x9e6f,	// (0x000535b5) cell_graphic_popup_pane_g2_cp2

0x7f56,	// (0x0005169c) cell_graphic_popup_pane_g3_cp2

0xec1c,	// (0x00058362) cell_graphic_popup_pane_t2_cp2

0x9e80,	// (0x000535c6) grid_highlight_pane_cp3_cp2

0xa484,	// (0x00053bca) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xa112,	// (0x00053858) main_tmo_pane_ParamLimits

0xd741,	// (0x00056e87) popup_tmo_big_image_note_window

0x7622,	// (0x00050d68) cell_ai5_widget_list_pane

0x762a,	// (0x00050d70) cell_ai5_widget_lrg_icon_pane

0xe9c1,	// (0x00058107) tmo_note_info_pane_t1_ParamLimits

0xe9d6,	// (0x0005811c) tmo_note_info_pane_t2_ParamLimits

0xe9ed,	// (0x00058133) tmo_note_info_pane_t3_ParamLimits

0x7bd3,	// (0x00051319) tmo_note_info_pane_t4_ParamLimits

0x7be5,	// (0x0005132b) tmo_note_info_pane_t5_ParamLimits

0xfeab,	// (0x000595f1) tmo_note_info_pane_t_ParamLimits

0x7d03,	// (0x00051449) settings_container_pane_ParamLimits

0xec0c,	// (0x00058352) indicator_popup_pane_cp5

0xec0c,	// (0x00058352) indicator_popup_pane_cp6

0x7efc,	// (0x00051642) list_set_graphic_pane_copy1_ParamLimits

0x9427,	// (0x00052b6d) bg_popup_window_pane_cp23

0x7f6c,	// (0x000516b2) popup_tmo_big_image_note_window_g1

0x7f75,	// (0x000516bb) popup_tmo_big_image_note_window_t1

0x7f85,	// (0x000516cb) popup_tmo_big_image_note_window_t2

0x7f95,	// (0x000516db) popup_tmo_big_image_note_window_t3

0x0002,

0xfec4,	// (0x0005960a) popup_tmo_big_image_note_window_t

0x4f9c,	// (0x0004e6e2) cell_ai5_widget_lrg_icon_pane_g1

0x7fa5,	// (0x000516eb) cell_ai5_widget_lrg_icon_pane_t1

0x7fb3,	// (0x000516f9) cell_ai5_widget_list_row_pane_ParamLimits

0x7fb3,	// (0x000516f9) cell_ai5_widget_list_row_pane

0x7fca,	// (0x00051710) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x7fca,	// (0x00051710) cell_ai5_widget_list_row_pane_g1

0xec2a,	// (0x00058370) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xec2a,	// (0x00058370) cell_ai5_widget_list_row_pane_t1

0x8002,	// (0x00051748) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x8002,	// (0x00051748) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfecb,	// (0x00059611) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfecb,	// (0x00059611) cell_ai5_widget_list_row_pane_t

0x9427,	// (0x00052b6d) main_fep_vtchi_ss_pane

0x804a,	// (0x00051790) popup_fep_char_pre_window

0x8052,	// (0x00051798) popup_fep_ituss_window

0xec6e,	// (0x000583b4) popup_fep_vkbss_window

0xec7b,	// (0x000583c1) grid_vkbss_keypad_pane_ParamLimits

0xec7b,	// (0x000583c1) grid_vkbss_keypad_pane

0x80ad,	// (0x000517f3) ituss_keypad_pane

0x2243,	// (0x0004b989) aid_vkbss_key_offset_ParamLimits

0x2243,	// (0x0004b989) aid_vkbss_key_offset

0xbe08,	// (0x0005554e) cell_vkbss_key_pane_ParamLimits

0xbe08,	// (0x0005554e) cell_vkbss_key_pane

0x285d,	// (0x0004bfa3) bg_cell_vkbss_key_g1_ParamLimits

0x285d,	// (0x0004bfa3) bg_cell_vkbss_key_g1

0xec8b,	// (0x000583d1) cell_vkbss_key_3p_pane_ParamLimits

0xec8b,	// (0x000583d1) cell_vkbss_key_3p_pane

0xeca5,	// (0x000583eb) cell_vkbss_key_g1_ParamLimits

0xeca5,	// (0x000583eb) cell_vkbss_key_g1

0xecbf,	// (0x00058405) cell_vkbss_key_t1_ParamLimits

0xecbf,	// (0x00058405) cell_vkbss_key_t1

0x2265,	// (0x0004b9ab) cell_ituss_key_pane_ParamLimits

0x2265,	// (0x0004b9ab) cell_ituss_key_pane

0x810f,	// (0x00051855) bg_cell_ituss_key_g1_ParamLimits

0x810f,	// (0x00051855) bg_cell_ituss_key_g1

0x811b,	// (0x00051861) cell_ituss_key_pane_g1_ParamLimits

0x811b,	// (0x00051861) cell_ituss_key_pane_g1

0x2276,	// (0x0004b9bc) cell_ituss_key_pane_g2_ParamLimits

0x2276,	// (0x0004b9bc) cell_ituss_key_pane_g2

0x0002,

0xfed2,	// (0x00059618) cell_ituss_key_pane_g_ParamLimits

0xfed2,	// (0x00059618) cell_ituss_key_pane_g

0x22a2,	// (0x0004b9e8) cell_ituss_key_t1_ParamLimits

0x22a2,	// (0x0004b9e8) cell_ituss_key_t1

0x22dc,	// (0x0004ba22) cell_ituss_key_t2_ParamLimits

0x22dc,	// (0x0004ba22) cell_ituss_key_t2

0x230d,	// (0x0004ba53) cell_ituss_key_t3_ParamLimits

0x230d,	// (0x0004ba53) cell_ituss_key_t3

0x22dc,	// (0x0004ba22) cell_ituss_key_t4_ParamLimits

0x22dc,	// (0x0004ba22) cell_ituss_key_t4

0x0004,

0xfed9,	// (0x0005961f) cell_ituss_key_t_ParamLimits

0xfed9,	// (0x0005961f) cell_ituss_key_t

0x8141,	// (0x00051887) cell_vkbss_key_3p_pane_g1

0x8149,	// (0x0005188f) cell_vkbss_key_3p_pane_g2

0x8151,	// (0x00051897) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee4,	// (0x0005962a) cell_vkbss_key_3p_pane_g

0xe405,	// (0x00057b4b) bg_popup_fep_char_preview_window_cp02

0x8159,	// (0x0005189f) popup_fep_char_pre_window_t1

0xe869,	// (0x00057faf) main_ai5_sk_pane

0x7c5f,	// (0x000513a5) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x7c6b,	// (0x000513b1) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x56a3,	// (0x0004ede9) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x7c80,	// (0x000513c6) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb6,	// (0x000595fc) cell_contacts_ai5_widget_pane_g_ParamLimits

0x7c8c,	// (0x000513d2) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xa112,	// (0x00053858) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xecea,	// (0x00058430) main_ai5_sk_pane_g1

0xc587,	// (0x00055ccd) popup_query_code_window_g1

0x8068,	// (0x000517ae) popup_fep_vkb_icf_pane

0x8087,	// (0x000517cd) popup_fep_vtchi_icf_pane

0x8170,	// (0x000518b6) bg_icf_pane

0x817c,	// (0x000518c2) list_vkb_icf_pane

0x818b,	// (0x000518d1) bg_icf_pane_cp01

0x819e,	// (0x000518e4) vtchi_icf_list_pane

0x81ae,	// (0x000518f4) list_vkb_icf_pane_t1_ParamLimits

0x81ae,	// (0x000518f4) list_vkb_icf_pane_t1

0x81c5,	// (0x0005190b) vtchi_icf_list_pane_t1_ParamLimits

0x81c5,	// (0x0005190b) vtchi_icf_list_pane_t1

0x8052,	// (0x00051798) popup_fep_ituss_window_ParamLimits

0x8087,	// (0x000517cd) popup_fep_vtchi_icf_pane_ParamLimits

0x80ad,	// (0x000517f3) ituss_keypad_pane_ParamLimits

0x2237,	// (0x0004b97d) ituss_sks_pane

0x8170,	// (0x000518b6) bg_icf_pane_ParamLimits

0xec5b,	// (0x000583a1) icf_edit_indi_pane_ParamLimits

0xec5b,	// (0x000583a1) icf_edit_indi_pane

0x817c,	// (0x000518c2) list_vkb_icf_pane_ParamLimits

0x818b,	// (0x000518d1) bg_icf_pane_cp01_ParamLimits

0x803d,	// (0x00051783) icf_edit_indi_pane_cp01_ParamLimits

0x803d,	// (0x00051783) icf_edit_indi_pane_cp01

0x81a6,	// (0x000518ec) vtchi_query_pane

0x7439,	// (0x00050b7f) icf_edit_indi_pane_g1_ParamLimits

0x7439,	// (0x00050b7f) icf_edit_indi_pane_g1

0xecf3,	// (0x00058439) icf_edit_indi_pane_g2_ParamLimits

0xecf3,	// (0x00058439) icf_edit_indi_pane_g2

0x0001,

0xfefc,	// (0x00059642) icf_edit_indi_pane_g_ParamLimits

0xfefc,	// (0x00059642) icf_edit_indi_pane_g

0xed05,	// (0x0005844b) icf_edit_indi_pane_t1

0x81e3,	// (0x00051929) bg_input_focus_pane_cp042

0x9fe6,	// (0x0005372c) vtchi_button_pane

0x81ec,	// (0x00051932) vtchi_query_pane_t1

0x81fa,	// (0x00051940) vtchi_query_pane_t2

0x8208,	// (0x0005194e) vtchi_query_pane_t3

0x0002,

0xfeeb,	// (0x00059631) vtchi_query_pane_t

0x9427,	// (0x00052b6d) bg_button_pane_cp13

0x8216,	// (0x0005195c) vtchi_button_pane_g1

0x2350,	// (0x0004ba96) ituss_sks_pane_g1

0x235b,	// (0x0004baa1) ituss_sks_pane_g2

0x0001,

0xfef2,	// (0x00059638) ituss_sks_pane_g

0x821e,	// (0x00051964) ituss_sks_pane_t1

0x822c,	// (0x00051972) ituss_sks_pane_t2

0x0001,

0xfef7,	// (0x0005963d) ituss_sks_pane_t

0x4a0d,	// (0x0004e153) indicator_nsta_pane_cp_g1

0x4a15,	// (0x0004e15b) indicator_nsta_pane_cp_g2

0x4a1d,	// (0x0004e163) indicator_nsta_pane_cp_g3

0x4a0d,	// (0x0004e153) indicator_nsta_pane_cp_g4

0x4a15,	// (0x0004e15b) indicator_nsta_pane_cp_g5

0x4a1d,	// (0x0004e163) indicator_nsta_pane_cp_g6

0x0005,

0xfaa7,	// (0x000591ed) indicator_nsta_pane_cp_g

0xe646,	// (0x00057d8c) cell_graphic2_pane_t2_ParamLimits

0xe646,	// (0x00057d8c) cell_graphic2_pane_t2

0x0001,

0xfdad,	// (0x000594f3) cell_graphic2_pane_t_ParamLimits

0xfdad,	// (0x000594f3) cell_graphic2_pane_t

0xe67f,	// (0x00057dc5) cell_graphic2_control_pane_t1

0xa75e,	// (0x00053ea4) signal_pane_g3_ParamLimits

0xa75e,	// (0x00053ea4) signal_pane_g3

0xa772,	// (0x00053eb8) signal_pane_g4_ParamLimits

0xa772,	// (0x00053eb8) signal_pane_g4

0x8014,	// (0x0005175a) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x8014,	// (0x0005175a) cell_ai5_widget_list_row_pane_t3

0x812f,	// (0x00051875) cell_ituss_key_pane_t1_ParamLimits

0x812f,	// (0x00051875) cell_ituss_key_pane_t1

0x2af3,	// (0x0004c239) form_field_data_wide_pane_vc_t2_ParamLimits

0x2af3,	// (0x0004c239) form_field_data_wide_pane_vc_t2

0x2b07,	// (0x0004c24d) form_field_data_wide_pane_vc_t3_ParamLimits

0x2b07,	// (0x0004c24d) form_field_data_wide_pane_vc_t3

0x0002,

0xf7f3,	// (0x00058f39) form_field_data_wide_pane_vc_t_ParamLimits

0xf7f3,	// (0x00058f39) form_field_data_wide_pane_vc_t

0x46d4,	// (0x0004de1a) form_field_slider_wide_pane_vc_t3_ParamLimits

0x46d4,	// (0x0004de1a) form_field_slider_wide_pane_vc_t3

0x47b2,	// (0x0004def8) form_field_popup_wide_pane_vc_t2_ParamLimits

0x47b2,	// (0x0004def8) form_field_popup_wide_pane_vc_t2

0x47c9,	// (0x0004df0f) form_field_popup_wide_pane_vc_t3_ParamLimits

0x47c9,	// (0x0004df0f) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa96,	// (0x000591dc) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa96,	// (0x000591dc) form_field_popup_wide_pane_vc_t

0xbc0d,	// (0x00055353) aid_fshwr2_btn_pane_ParamLimits

0xbc1f,	// (0x00055365) aid_fshwr2_syb_pane_ParamLimits

0xbc31,	// (0x00055377) aid_fshwr2_txt_pane_ParamLimits

0xa112,	// (0x00053858) fshwr2_bg_pane_ParamLimits

0xbc40,	// (0x00055386) fshwr2_func_candi_pane_ParamLimits

0xbc5f,	// (0x000553a5) fshwr2_hwr_syb_pane_ParamLimits

0xbc7a,	// (0x000553c0) fshwr2_icf_pane_ParamLimits

0x1352,	// (0x0004aa98) list_double_graphic_pane_vc_g4_ParamLimits

0x1352,	// (0x0004aa98) list_double_graphic_pane_vc_g4

0x2296,	// (0x0004b9dc) cell_ituss_key_pane_g3_ParamLimits

0x2296,	// (0x0004b9dc) cell_ituss_key_pane_g3

0x233e,	// (0x0004ba84) cell_ituss_key_t5_ParamLimits

0x233e,	// (0x0004ba84) cell_ituss_key_t5

0xec6e,	// (0x000583b4) popup_fep_vkbss_window_ParamLimits

0x75b9,	// (0x00050cff) aid_cell_ai5_quarter

0xed05,	// (0x0005844b) icf_edit_indi_pane_t1_ParamLimits

0x9bce,	// (0x00053314) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x9bce,	// (0x00053314) aid_tch_indicator_popup_pane_cp2

0x9be1,	// (0x00053327) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x9be1,	// (0x00053327) aid_tch_query_popup_data_pane_cp2

0x2e60,	// (0x0004c5a6) aid_tch_query_popup_pane_ParamLimits

0x2e60,	// (0x0004c5a6) aid_tch_query_popup_pane

0x2e60,	// (0x0004c5a6) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x2e60,	// (0x0004c5a6) aid_tch_query_popup_data_pane_cp1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Large

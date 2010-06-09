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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00041e6c };

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
0x6333,	// (0x0004819f) Screen

0x633f,	// (0x000481ab) application_window_ParamLimits

0x633f,	// (0x000481ab) application_window

0x09a5,	// (0x00042811) screen_g1

0x639b,	// (0x00048207) area_bottom_pane_ParamLimits

0x639b,	// (0x00048207) area_bottom_pane

0x645b,	// (0x000482c7) area_top_pane_ParamLimits

0x645b,	// (0x000482c7) area_top_pane

0x64ef,	// (0x0004835b) main_pane_ParamLimits

0x64ef,	// (0x0004835b) main_pane

0x09af,	// (0x0004281b) misc_graphics

0x98d1,	// (0x0004b73d) battery_pane_ParamLimits

0x98d1,	// (0x0004b73d) battery_pane

0xa593,	// (0x0004c3ff) bg_status_flat_pane_g8

0xa59b,	// (0x0004c407) bg_status_flat_pane_g9

0x9999,	// (0x0004b805) context_pane_ParamLimits

0x9999,	// (0x0004b805) context_pane

0x9aaf,	// (0x0004b91b) navi_pane_ParamLimits

0x9aaf,	// (0x0004b91b) navi_pane

0x9b33,	// (0x0004b99f) signal_pane_ParamLimits

0x9b33,	// (0x0004b99f) signal_pane

0x0008,

0xf874,	// (0x000516e0) bg_status_flat_pane_g

0x9ba0,	// (0x0004ba0c) status_pane_g1_ParamLimits

0x9ba0,	// (0x0004ba0c) status_pane_g1

0x9bb4,	// (0x0004ba20) status_pane_g2_ParamLimits

0x9bb4,	// (0x0004ba20) status_pane_g2

0x9bc0,	// (0x0004ba2c) status_pane_g3_ParamLimits

0x9bc0,	// (0x0004ba2c) status_pane_g3

0x0004,

0xf79b,	// (0x00051607) status_pane_g_ParamLimits

0xf79b,	// (0x00051607) status_pane_g

0x9bf4,	// (0x0004ba60) title_pane_ParamLimits

0x9bf4,	// (0x0004ba60) title_pane

0x9c31,	// (0x0004ba9d) uni_indicator_pane_ParamLimits

0x9c31,	// (0x0004ba9d) uni_indicator_pane

0x97f0,	// (0x0004b65c) bg_list_pane_ParamLimits

0x97f0,	// (0x0004b65c) bg_list_pane

0x78ac,	// (0x00049718) find_pane

0x9810,	// (0x0004b67c) listscroll_app_pane_ParamLimits

0x9810,	// (0x0004b67c) listscroll_app_pane

0x9821,	// (0x0004b68d) listscroll_form_pane

0x78b4,	// (0x00049720) listscroll_gen_pane_ParamLimits

0x78b4,	// (0x00049720) listscroll_gen_pane

0x78c8,	// (0x00049734) listscroll_set_pane

0x6e6c,	// (0x00048cd8) main_idle_act_pane

0x94f0,	// (0x0004b35c) main_idle_trad_pane

0x94f0,	// (0x0004b35c) main_list_empty_pane

0x983b,	// (0x0004b6a7) main_midp_pane

0x9847,	// (0x0004b6b3) main_pane_g1_ParamLimits

0x9847,	// (0x0004b6b3) main_pane_g1

0x78d0,	// (0x0004973c) popup_ai_message_window_ParamLimits

0x78d0,	// (0x0004973c) popup_ai_message_window

0x7974,	// (0x000497e0) popup_fep_china_uni_window_ParamLimits

0x7974,	// (0x000497e0) popup_fep_china_uni_window

0x79ce,	// (0x0004983a) popup_fep_japan_candidate_window_ParamLimits

0x79ce,	// (0x0004983a) popup_fep_japan_candidate_window

0x79ec,	// (0x00049858) popup_fep_japan_predictive_window_ParamLimits

0x79ec,	// (0x00049858) popup_fep_japan_predictive_window

0x7a1c,	// (0x00049888) popup_find_window

0x7a29,	// (0x00049895) popup_grid_graphic_window_ParamLimits

0x7a29,	// (0x00049895) popup_grid_graphic_window

0x7a53,	// (0x000498bf) popup_large_graphic_colour_window

0x7a79,	// (0x000498e5) popup_menu_window_ParamLimits

0x7a79,	// (0x000498e5) popup_menu_window

0x7c35,	// (0x00049aa1) popup_note_image_window

0x7c21,	// (0x00049a8d) popup_note_wait_window_ParamLimits

0x7c21,	// (0x00049a8d) popup_note_wait_window

0x7c21,	// (0x00049a8d) popup_note_window_ParamLimits

0x7c21,	// (0x00049a8d) popup_note_window

0x7c8b,	// (0x00049af7) popup_query_code_window_ParamLimits

0x7c8b,	// (0x00049af7) popup_query_code_window

0x7c9f,	// (0x00049b0b) popup_query_data_code_window_ParamLimits

0x7c9f,	// (0x00049b0b) popup_query_data_code_window

0x7cbc,	// (0x00049b28) popup_query_data_window_ParamLimits

0x7cbc,	// (0x00049b28) popup_query_data_window

0x7cd8,	// (0x00049b44) popup_query_sat_info_window_ParamLimits

0x7cd8,	// (0x00049b44) popup_query_sat_info_window

0x7d11,	// (0x00049b7d) popup_snote_single_graphic_window_ParamLimits

0x7d11,	// (0x00049b7d) popup_snote_single_graphic_window

0x7d11,	// (0x00049b7d) popup_snote_single_text_window_ParamLimits

0x7d11,	// (0x00049b7d) popup_snote_single_text_window

0x7d26,	// (0x00049b92) popup_sub_window_general

0x7e56,	// (0x00049cc2) popup_window_general_ParamLimits

0x7e56,	// (0x00049cc2) popup_window_general

0x9855,	// (0x0004b6c1) power_save_pane

0x773e,	// (0x000495aa) control_pane_g1_ParamLimits

0x773e,	// (0x000495aa) control_pane_g1

0x7765,	// (0x000495d1) control_pane_g2_ParamLimits

0x7765,	// (0x000495d1) control_pane_g2

0x97b3,	// (0x0004b61f) control_pane_g3_ParamLimits

0x97b3,	// (0x0004b61f) control_pane_g3

0x0007,

0xf783,	// (0x000515ef) control_pane_g_ParamLimits

0xf783,	// (0x000515ef) control_pane_g

0x77af,	// (0x0004961b) control_pane_t1_ParamLimits

0x77af,	// (0x0004961b) control_pane_t1

0x7803,	// (0x0004966f) control_pane_t2_ParamLimits

0x7803,	// (0x0004966f) control_pane_t2

0x0002,

0xf794,	// (0x00051600) control_pane_t_ParamLimits

0xf794,	// (0x00051600) control_pane_t

0x96d8,	// (0x0004b544) navi_navi_volume_pane_cp1

0x96e0,	// (0x0004b54c) status_small_icon_pane

0x96e8,	// (0x0004b554) status_small_pane_g1_ParamLimits

0x96e8,	// (0x0004b554) status_small_pane_g1

0x971c,	// (0x0004b588) status_small_pane_g2_ParamLimits

0x971c,	// (0x0004b588) status_small_pane_g2

0x9728,	// (0x0004b594) status_small_pane_g3_ParamLimits

0x9728,	// (0x0004b594) status_small_pane_g3

0x9734,	// (0x0004b5a0) status_small_pane_g4_ParamLimits

0x9734,	// (0x0004b5a0) status_small_pane_g4

0x9740,	// (0x0004b5ac) status_small_pane_g5_ParamLimits

0x9740,	// (0x0004b5ac) status_small_pane_g5

0x974e,	// (0x0004b5ba) status_small_pane_g6_ParamLimits

0x974e,	// (0x0004b5ba) status_small_pane_g6

0x0007,

0xf772,	// (0x000515de) status_small_pane_g_ParamLimits

0xf772,	// (0x000515de) status_small_pane_g

0x977d,	// (0x0004b5e9) status_small_pane_t1

0x979f,	// (0x0004b60b) status_small_wait_pane_ParamLimits

0x979f,	// (0x0004b60b) status_small_wait_pane

0x7241,	// (0x000490ad) aid_levels_signal_ParamLimits

0x7241,	// (0x000490ad) aid_levels_signal

0x7253,	// (0x000490bf) signal_pane_g1_ParamLimits

0x7253,	// (0x000490bf) signal_pane_g1

0x7268,	// (0x000490d4) signal_pane_g2_ParamLimits

0x7268,	// (0x000490d4) signal_pane_g2

0x0003,

0xf703,	// (0x0005156f) signal_pane_g_ParamLimits

0xf703,	// (0x0005156f) signal_pane_g

0x1248,	// (0x000430b4) context_pane_g1

0x6730,	// (0x0004859c) title_pane_g1

0x675a,	// (0x000485c6) title_pane_t1

0x09c5,	// (0x00042831) title_pane_t2

0x09eb,	// (0x00042857) title_pane_t3

0x0002,

0xf557,	// (0x000513c3) title_pane_t

0x9c49,	// (0x0004bab5) aid_levels_battery_ParamLimits

0x9c49,	// (0x0004bab5) aid_levels_battery

0x9c5d,	// (0x0004bac9) battery_pane_g1_ParamLimits

0x9c5d,	// (0x0004bac9) battery_pane_g1

0x9c73,	// (0x0004badf) battery_pane_g2_ParamLimits

0x9c73,	// (0x0004badf) battery_pane_g2

0x0001,

0xf7a6,	// (0x00051612) battery_pane_g_ParamLimits

0xf7a6,	// (0x00051612) battery_pane_g

0xaeb7,	// (0x0004cd23) uni_indicator_pane_g1

0xaeca,	// (0x0004cd36) uni_indicator_pane_g2

0xaedc,	// (0x0004cd48) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x00051788) uni_indicator_pane_g

0x75c2,	// (0x0004942e) navi_icon_pane_ParamLimits

0x75c2,	// (0x0004942e) navi_icon_pane

0x4b0e,	// (0x0004697a) navi_midp_pane

0x75de,	// (0x0004944a) navi_navi_pane

0x75e8,	// (0x00049454) navi_text_pane_ParamLimits

0x75e8,	// (0x00049454) navi_text_pane

0x09a5,	// (0x00042811) status_small_wait_pane_g1

0x0c3c,	// (0x00042aa8) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x00051783) status_small_wait_pane_g

0xabde,	// (0x0004ca4a) navi_navi_icon_text_pane

0xabe6,	// (0x0004ca52) navi_navi_pane_g1_ParamLimits

0xabe6,	// (0x0004ca52) navi_navi_pane_g1

0xabf8,	// (0x0004ca64) navi_navi_pane_g2_ParamLimits

0xabf8,	// (0x0004ca64) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x00051751) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x00051751) navi_navi_pane_g

0xac0a,	// (0x0004ca76) navi_navi_tabs_pane

0xac13,	// (0x0004ca7f) navi_navi_text_pane

0xabde,	// (0x0004ca4a) navi_navi_volume_pane

0xabba,	// (0x0004ca26) navi_text_pane_t1

0xabae,	// (0x0004ca1a) navi_icon_pane_g1

0xab01,	// (0x0004c96d) navi_navi_text_pane_t1

0x810c,	// (0x00049f78) navi_navi_volume_pane_g1

0x8114,	// (0x00049f80) volume_small_pane

0xaa67,	// (0x0004c8d3) navi_navi_icon_text_pane_g1

0xaa6f,	// (0x0004c8db) navi_navi_icon_text_pane_t1

0x75de,	// (0x0004944a) navi_tabs_2_long_pane

0x75de,	// (0x0004944a) navi_tabs_2_pane

0x75de,	// (0x0004944a) navi_tabs_3_long_pane

0x75de,	// (0x0004944a) navi_tabs_3_pane

0x75de,	// (0x0004944a) navi_tabs_4_pane

0x80ec,	// (0x00049f58) tabs_2_active_pane_ParamLimits

0x80ec,	// (0x00049f58) tabs_2_active_pane

0x80fc,	// (0x00049f68) tabs_2_passive_pane_ParamLimits

0x80fc,	// (0x00049f68) tabs_2_passive_pane

0x80ba,	// (0x00049f26) tabs_3_active_pane_ParamLimits

0x80ba,	// (0x00049f26) tabs_3_active_pane

0x80ca,	// (0x00049f36) tabs_3_passive_pane_ParamLimits

0x80ca,	// (0x00049f36) tabs_3_passive_pane

0x80db,	// (0x00049f47) tabs_3_passive_pane_cp_ParamLimits

0x80db,	// (0x00049f47) tabs_3_passive_pane_cp

0x8076,	// (0x00049ee2) tabs_4_active_pane_ParamLimits

0x8076,	// (0x00049ee2) tabs_4_active_pane

0x8087,	// (0x00049ef3) tabs_4_passive_pane_ParamLimits

0x8087,	// (0x00049ef3) tabs_4_passive_pane

0x8098,	// (0x00049f04) tabs_4_passive_pane_cp_ParamLimits

0x8098,	// (0x00049f04) tabs_4_passive_pane_cp

0x80a9,	// (0x00049f15) tabs_4_passive_pane_cp2_ParamLimits

0x80a9,	// (0x00049f15) tabs_4_passive_pane_cp2

0x8052,	// (0x00049ebe) tabs_2_long_active_pane_ParamLimits

0x8052,	// (0x00049ebe) tabs_2_long_active_pane

0x8064,	// (0x00049ed0) tabs_2_long_passive_pane_ParamLimits

0x8064,	// (0x00049ed0) tabs_2_long_passive_pane

0x800d,	// (0x00049e79) tabs_3_long_active_pane_ParamLimits

0x800d,	// (0x00049e79) tabs_3_long_active_pane

0x8026,	// (0x00049e92) tabs_3_long_passive_pane_ParamLimits

0x8026,	// (0x00049e92) tabs_3_long_passive_pane

0x8039,	// (0x00049ea5) tabs_3_long_passive_pane_cp_ParamLimits

0x8039,	// (0x00049ea5) tabs_3_long_passive_pane_cp

0x7fb3,	// (0x00049e1f) volume_small_pane_g1

0x7fbc,	// (0x00049e28) volume_small_pane_g2

0x7fc5,	// (0x00049e31) volume_small_pane_g3

0x7fce,	// (0x00049e3a) volume_small_pane_g4

0x7fd7,	// (0x00049e43) volume_small_pane_g5

0x7fe0,	// (0x00049e4c) volume_small_pane_g6

0x7fe9,	// (0x00049e55) volume_small_pane_g7

0x7ff2,	// (0x00049e5e) volume_small_pane_g8

0x7ffb,	// (0x00049e67) volume_small_pane_g9

0x8004,	// (0x00049e70) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x0005171d) volume_small_pane_g

0x0a0b,	// (0x00042877) bg_active_tab_pane_cp2_ParamLimits

0x0a0b,	// (0x00042877) bg_active_tab_pane_cp2

0x67c2,	// (0x0004862e) tabs_3_active_pane_g1

0x67ca,	// (0x00048636) tabs_3_active_pane_t1

0x0a0b,	// (0x00042877) bg_passive_tab_pane_cp2_ParamLimits

0x0a0b,	// (0x00042877) bg_passive_tab_pane_cp2

0x67c2,	// (0x0004862e) tabs_3_passive_pane_g1

0x67ca,	// (0x00048636) tabs_3_passive_pane_t1

0x0a0b,	// (0x00042877) bg_active_tab_pane_cp3_ParamLimits

0x0a0b,	// (0x00042877) bg_active_tab_pane_cp3

0x67dc,	// (0x00048648) tabs_4_active_pane_g1

0x67e4,	// (0x00048650) tabs_4_active_pane_t1

0x0a0b,	// (0x00042877) bg_passive_tab_pane_cp3_ParamLimits

0x0a0b,	// (0x00042877) bg_passive_tab_pane_cp3

0x67dc,	// (0x00048648) tabs_4_1_passive_pane_g1

0x67e4,	// (0x00048650) tabs_4_1_passive_pane_t1

0x983b,	// (0x0004b6a7) list_highlight_pane_cp2

0xb11f,	// (0x0004cf8b) list_set_pane_ParamLimits

0xb11f,	// (0x0004cf8b) list_set_pane

0xb1c1,	// (0x0004d02d) main_pane_set_t1_ParamLimits

0xb1c1,	// (0x0004d02d) main_pane_set_t1

0xb1e1,	// (0x0004d04d) main_pane_set_t2_ParamLimits

0xb1e1,	// (0x0004d04d) main_pane_set_t2

0xb1f5,	// (0x0004d061) main_pane_set_t3_ParamLimits

0xb1f5,	// (0x0004d061) main_pane_set_t3

0xb207,	// (0x0004d073) main_pane_set_t4_ParamLimits

0xb207,	// (0x0004d073) main_pane_set_t4

0x0003,

0xf981,	// (0x000517ed) main_pane_set_t_ParamLimits

0xf981,	// (0x000517ed) main_pane_set_t

0xb219,	// (0x0004d085) setting_code_pane

0xb225,	// (0x0004d091) setting_slider_graphic_pane

0xb225,	// (0x0004d091) setting_slider_pane

0xb225,	// (0x0004d091) setting_text_pane

0xb225,	// (0x0004d091) setting_volume_pane

0x67f6,	// (0x00048662) volume_set_pane

0x0a0b,	// (0x00042877) bg_set_opt_pane_cp

0x67fe,	// (0x0004866a) setting_slider_pane_t1

0x6817,	// (0x00048683) setting_slider_pane_t2

0x6831,	// (0x0004869d) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x000513ca) setting_slider_pane_t

0x6849,	// (0x000486b5) slider_set_pane

0x09af,	// (0x0004281b) bg_set_opt_pane_cp2

0x0a19,	// (0x00042885) setting_slider_graphic_pane_g1

0x685f,	// (0x000486cb) setting_slider_graphic_pane_t1

0x686f,	// (0x000486db) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x000513d1) setting_slider_graphic_pane_t

0x687f,	// (0x000486eb) slider_set_pane_cp

0x09af,	// (0x0004281b) input_focus_pane_cp1

0xb0de,	// (0x0004cf4a) list_set_text_pane

0x09a5,	// (0x00042811) setting_text_pane_g1

0x09af,	// (0x0004281b) input_focus_pane_cp2

0x09a5,	// (0x00042811) setting_code_pane_g1

0x0a22,	// (0x0004288e) setting_code_pane_t1

0x54e0,	// (0x0004734c) set_text_pane_t1_ParamLimits

0x54e0,	// (0x0004734c) set_text_pane_t1

0x0e15,	// (0x00042c81) set_opt_bg_pane_g1

0x0e1d,	// (0x00042c89) set_opt_bg_pane_g2

0xb0b8,	// (0x0004cf24) set_opt_bg_pane_g3

0x0e2d,	// (0x00042c99) set_opt_bg_pane_g4

0x0e35,	// (0x00042ca1) set_opt_bg_pane_g5

0x0e3d,	// (0x00042ca9) set_opt_bg_pane_g6

0xb0c2,	// (0x0004cf2e) set_opt_bg_pane_g7

0xb0ca,	// (0x0004cf36) set_opt_bg_pane_g8

0xb0d4,	// (0x0004cf40) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x000517da) set_opt_bg_pane_g

0xb0ab,	// (0x0004cf17) slider_set_pane_g1

0x8181,	// (0x00049fed) slider_set_pane_g2

0x0006,

0xf95f,	// (0x000517cb) slider_set_pane_g

0x811d,	// (0x00049f89) volume_set_pane_g1

0x8125,	// (0x00049f91) volume_set_pane_g2

0x812d,	// (0x00049f99) volume_set_pane_g3

0x8135,	// (0x00049fa1) volume_set_pane_g4

0x813d,	// (0x00049fa9) volume_set_pane_g5

0x8145,	// (0x00049fb1) volume_set_pane_g6

0x814d,	// (0x00049fb9) volume_set_pane_g7

0x8155,	// (0x00049fc1) volume_set_pane_g8

0x815d,	// (0x00049fc9) volume_set_pane_g9

0x8165,	// (0x00049fd1) volume_set_pane_g10

0x0009,

0xf937,	// (0x000517a3) volume_set_pane_g

0x6887,	// (0x000486f3) indicator_pane_ParamLimits

0x6887,	// (0x000486f3) indicator_pane

0x6893,	// (0x000486ff) main_idle_pane_g2_ParamLimits

0x6893,	// (0x000486ff) main_idle_pane_g2

0x68bb,	// (0x00048727) main_pane_idle_g1_ParamLimits

0x68bb,	// (0x00048727) main_pane_idle_g1

0x0a30,	// (0x0004289c) popup_clock_digital_analogue_window_ParamLimits

0x0a30,	// (0x0004289c) popup_clock_digital_analogue_window

0x68c8,	// (0x00048734) soft_indicator_pane_ParamLimits

0x68c8,	// (0x00048734) soft_indicator_pane

0x68d4,	// (0x00048740) wallpaper_pane_ParamLimits

0x68d4,	// (0x00048740) wallpaper_pane

0x09a5,	// (0x00042811) wallpaper_pane_g1

0x68e0,	// (0x0004874c) indicator_pane_g1_ParamLimits

0x68e0,	// (0x0004874c) indicator_pane_g1

0xb4a7,	// (0x0004d313) navi_navi_icon_text_pane_srt_g1

0x0a5e,	// (0x000428ca) soft_indicator_pane_t1

0x0a78,	// (0x000428e4) aid_ps_area_pane

0x68ec,	// (0x00048758) aid_ps_clock_pane

0x0a89,	// (0x000428f5) aid_ps_indicator_pane

0x0a95,	// (0x00042901) indicator_ps_pane_ParamLimits

0x0a95,	// (0x00042901) indicator_ps_pane

0x0aa4,	// (0x00042910) power_save_pane_g1_ParamLimits

0x0aa4,	// (0x00042910) power_save_pane_g1

0x0ab0,	// (0x0004291c) power_save_pane_g2_ParamLimits

0x0ab0,	// (0x0004291c) power_save_pane_g2

0x634f,	// (0x000481bb) aid_navinavi_width_pane

0x0a78,	// (0x000428e4) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x000513d6) power_save_pane_g_ParamLimits

0xf56a,	// (0x000513d6) power_save_pane_g

0x0abe,	// (0x0004292a) power_save_pane_t1_ParamLimits

0x0abe,	// (0x0004292a) power_save_pane_t1

0x68ec,	// (0x00048758) aid_ps_clock_pane_ParamLimits

0x0a89,	// (0x000428f5) aid_ps_indicator_pane_ParamLimits

0x0ad0,	// (0x0004293c) power_save_pane_t4_ParamLimits

0x0ad0,	// (0x0004293c) power_save_pane_t4

0x0001,

0xf56f,	// (0x000513db) power_save_pane_t_ParamLimits

0xf56f,	// (0x000513db) power_save_pane_t

0x0afa,	// (0x00042966) power_save_t3_ParamLimits

0x0afa,	// (0x00042966) power_save_t3

0x0ae5,	// (0x00042951) power_save_t2_ParamLimits

0x0ae5,	// (0x00042951) power_save_t2

0x0b0f,	// (0x0004297b) indicator_ps_pane_g1

0x68fa,	// (0x00048766) ai_gene_pane_ParamLimits

0x68fa,	// (0x00048766) ai_gene_pane

0x6906,	// (0x00048772) ai_links_pane_ParamLimits

0x6906,	// (0x00048772) ai_links_pane

0x6912,	// (0x0004877e) indicator_pane_cp1_ParamLimits

0x6912,	// (0x0004877e) indicator_pane_cp1

0x691e,	// (0x0004878a) main_pane_idle_g1_cp_ParamLimits

0x691e,	// (0x0004878a) main_pane_idle_g1_cp

0x692a,	// (0x00048796) popup_ai_links_title_window

0x6933,	// (0x0004879f) soft_indicator_pane_cp1_ParamLimits

0x6933,	// (0x0004879f) soft_indicator_pane_cp1

0xaea5,	// (0x0004cd11) ai_links_pane_g1

0xaeae,	// (0x0004cd1a) grid_ai_links_pane

0xae88,	// (0x0004ccf4) ai_gene_pane_1

0xae93,	// (0x0004ccff) ai_gene_pane_2

0xae9c,	// (0x0004cd08) list_highlight_pane_cp4

0xae6c,	// (0x0004ccd8) cell_ai_link_pane_ParamLimits

0xae6c,	// (0x0004ccd8) cell_ai_link_pane

0xae64,	// (0x0004ccd0) cell_ai_link_pane_g1

0x0c3c,	// (0x00042aa8) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x0005177e) cell_ai_link_pane_g

0x09af,	// (0x0004281b) grid_highlight_cp2

0x09af,	// (0x0004281b) bg_popup_sub_pane_cp1

0x0b26,	// (0x00042992) popup_ai_links_title_window_t1

0xadb4,	// (0x0004cc20) ai_gene_pane_1_g1_ParamLimits

0xadb4,	// (0x0004cc20) ai_gene_pane_1_g1

0xadc0,	// (0x0004cc2c) ai_gene_pane_1_g2_ParamLimits

0xadc0,	// (0x0004cc2c) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x00051774) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x00051774) ai_gene_pane_1_g

0xadcd,	// (0x0004cc39) ai_gene_pane_1_t1_ParamLimits

0xadcd,	// (0x0004cc39) ai_gene_pane_1_t1

0xae01,	// (0x0004cc6d) grid_ai_soft_ind_pane

0xad9f,	// (0x0004cc0b) ai_gene_pane_2_t1_ParamLimits

0xad9f,	// (0x0004cc0b) ai_gene_pane_2_t1

0x693f,	// (0x000487ab) main_pane_empty_t1_ParamLimits

0x693f,	// (0x000487ab) main_pane_empty_t1

0x6957,	// (0x000487c3) main_pane_empty_t2_ParamLimits

0x6957,	// (0x000487c3) main_pane_empty_t2

0x696c,	// (0x000487d8) main_pane_empty_t3_ParamLimits

0x696c,	// (0x000487d8) main_pane_empty_t3

0x697e,	// (0x000487ea) main_pane_empty_t4_ParamLimits

0x697e,	// (0x000487ea) main_pane_empty_t4

0x6990,	// (0x000487fc) main_pane_empty_t5_ParamLimits

0x6990,	// (0x000487fc) main_pane_empty_t5

0x0004,

0xf574,	// (0x000513e0) main_pane_empty_t_ParamLimits

0xf574,	// (0x000513e0) main_pane_empty_t

0x0e66,	// (0x00042cd2) bg_popup_window_pane_ParamLimits

0x0e66,	// (0x00042cd2) bg_popup_window_pane

0xab0f,	// (0x0004c97b) find_popup_pane_cp2_ParamLimits

0xab0f,	// (0x0004c97b) find_popup_pane_cp2

0xab1b,	// (0x0004c987) heading_pane_ParamLimits

0xab1b,	// (0x0004c987) heading_pane

0x09af,	// (0x0004281b) bg_popup_sub_pane

0xaa89,	// (0x0004c8f5) bg_popup_window_pane_g1_ParamLimits

0xaa89,	// (0x0004c8f5) bg_popup_window_pane_g1

0xaa95,	// (0x0004c901) bg_popup_window_pane_g2_ParamLimits

0xaa95,	// (0x0004c901) bg_popup_window_pane_g2

0xaaa1,	// (0x0004c90d) bg_popup_window_pane_g3_ParamLimits

0xaaa1,	// (0x0004c90d) bg_popup_window_pane_g3

0xaaad,	// (0x0004c919) bg_popup_window_pane_g4_ParamLimits

0xaaad,	// (0x0004c919) bg_popup_window_pane_g4

0xaab9,	// (0x0004c925) bg_popup_window_pane_g5_ParamLimits

0xaab9,	// (0x0004c925) bg_popup_window_pane_g5

0xaac5,	// (0x0004c931) bg_popup_window_pane_g6_ParamLimits

0xaac5,	// (0x0004c931) bg_popup_window_pane_g6

0xaad1,	// (0x0004c93d) bg_popup_window_pane_g7_ParamLimits

0xaad1,	// (0x0004c93d) bg_popup_window_pane_g7

0xaadd,	// (0x0004c949) bg_popup_window_pane_g8_ParamLimits

0xaadd,	// (0x0004c949) bg_popup_window_pane_g8

0xaae9,	// (0x0004c955) bg_popup_window_pane_g9_ParamLimits

0xaae9,	// (0x0004c955) bg_popup_window_pane_g9

0xaaf5,	// (0x0004c961) bg_popup_window_pane_g10_ParamLimits

0xaaf5,	// (0x0004c961) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x0005173c) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x0005173c) bg_popup_window_pane_g

0xaa1e,	// (0x0004c88a) bg_popup_heading_pane_ParamLimits

0xaa1e,	// (0x0004c88a) bg_popup_heading_pane

0x82a5,	// (0x0004a111) tabs_4_passive_pane_cp_srt_ParamLimits

0x82a5,	// (0x0004a111) tabs_4_passive_pane_cp_srt

0x82b7,	// (0x0004a123) tabs_4_passive_pane_srt_ParamLimits

0xaa32,	// (0x0004c89e) heading_pane_g2

0x82b7,	// (0x0004a123) tabs_4_passive_pane_srt

0x983b,	// (0x0004b6a7) bg_passive_tab_pane_cp3_srt_ParamLimits

0x983b,	// (0x0004b6a7) bg_passive_tab_pane_cp3_srt

0xaa3a,	// (0x0004c8a6) heading_pane_t1_ParamLimits

0xaa3a,	// (0x0004c8a6) heading_pane_t1

0xaa51,	// (0x0004c8bd) heading_pane_t2_ParamLimits

0xaa51,	// (0x0004c8bd) heading_pane_t2

0x0001,

0xf8cb,	// (0x00051737) heading_pane_t_ParamLimits

0xf8cb,	// (0x00051737) heading_pane_t

0xa55b,	// (0x0004c3c7) bg_popup_heading_pane_g1

0xa60a,	// (0x0004c476) bg_popup_heading_pane_g2

0xa614,	// (0x0004c480) bg_popup_heading_pane_g3

0xa61e,	// (0x0004c48a) bg_popup_heading_pane_g4

0xa628,	// (0x0004c494) bg_popup_heading_pane_g5

0xa632,	// (0x0004c49e) bg_popup_heading_pane_g6

0xa63a,	// (0x0004c4a6) bg_popup_heading_pane_g7

0xa642,	// (0x0004c4ae) bg_popup_heading_pane_g8

0xa64c,	// (0x0004c4b8) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x000516f3) bg_popup_heading_pane_g

0x9d48,	// (0x0004bbb4) bg_popup_sub_pane_g1

0x9d50,	// (0x0004bbbc) bg_popup_sub_pane_g2

0x9d58,	// (0x0004bbc4) bg_popup_sub_pane_g3

0x9d60,	// (0x0004bbcc) bg_popup_sub_pane_g4

0x9d68,	// (0x0004bbd4) bg_popup_sub_pane_g5

0x9d70,	// (0x0004bbdc) bg_popup_sub_pane_g6

0x9d78,	// (0x0004bbe4) bg_popup_sub_pane_g7

0x9d80,	// (0x0004bbec) bg_popup_sub_pane_g8

0x9d88,	// (0x0004bbf4) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x000516cd) bg_popup_sub_pane_g

0x09fd,	// (0x00042869) bg_popup_window_pane_cp5_ParamLimits

0x09fd,	// (0x00042869) bg_popup_window_pane_cp5

0x0b43,	// (0x000429af) popup_note_window_g1_ParamLimits

0x0b43,	// (0x000429af) popup_note_window_g1

0x0b4f,	// (0x000429bb) popup_note_window_t1_ParamLimits

0x0b4f,	// (0x000429bb) popup_note_window_t1

0x0b65,	// (0x000429d1) popup_note_window_t2_ParamLimits

0x0b65,	// (0x000429d1) popup_note_window_t2

0x0b7b,	// (0x000429e7) popup_note_window_t3_ParamLimits

0x0b7b,	// (0x000429e7) popup_note_window_t3

0x0b91,	// (0x000429fd) popup_note_window_t4_ParamLimits

0x0b91,	// (0x000429fd) popup_note_window_t4

0x0bb9,	// (0x00042a25) popup_note_window_t5_ParamLimits

0x0bb9,	// (0x00042a25) popup_note_window_t5

0x0004,

0xf57f,	// (0x000513eb) popup_note_window_t_ParamLimits

0xf57f,	// (0x000513eb) popup_note_window_t

0x0bdd,	// (0x00042a49) bg_popup_window_pane_cp6_ParamLimits

0x0bdd,	// (0x00042a49) bg_popup_window_pane_cp6

0xa4d7,	// (0x0004c343) popup_note_image_window_g1_ParamLimits

0xa4d7,	// (0x0004c343) popup_note_image_window_g1

0xa4e3,	// (0x0004c34f) popup_note_image_window_g2_ParamLimits

0xa4e3,	// (0x0004c34f) popup_note_image_window_g2

0x0001,

0xf855,	// (0x000516c1) popup_note_image_window_g_ParamLimits

0xf855,	// (0x000516c1) popup_note_image_window_g

0xa4fc,	// (0x0004c368) popup_note_image_window_t1_ParamLimits

0xa4fc,	// (0x0004c368) popup_note_image_window_t1

0xa515,	// (0x0004c381) popup_note_image_window_t2_ParamLimits

0xa515,	// (0x0004c381) popup_note_image_window_t2

0xa52e,	// (0x0004c39a) popup_note_image_window_t3_ParamLimits

0xa52e,	// (0x0004c39a) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x000516c6) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x000516c6) popup_note_image_window_t

0xa3a0,	// (0x0004c20c) bg_popup_window_pane_cp7_ParamLimits

0xa3a0,	// (0x0004c20c) bg_popup_window_pane_cp7

0xa3d0,	// (0x0004c23c) popup_note_wait_window_g1_ParamLimits

0xa3d0,	// (0x0004c23c) popup_note_wait_window_g1

0xa3dc,	// (0x0004c248) popup_note_wait_window_g2_ParamLimits

0xa3dc,	// (0x0004c248) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x000516af) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x000516af) popup_note_wait_window_g

0xa3f4,	// (0x0004c260) popup_note_wait_window_t1_ParamLimits

0xa3f4,	// (0x0004c260) popup_note_wait_window_t1

0xa41b,	// (0x0004c287) popup_note_wait_window_t2_ParamLimits

0xa41b,	// (0x0004c287) popup_note_wait_window_t2

0xa438,	// (0x0004c2a4) popup_note_wait_window_t3_ParamLimits

0xa438,	// (0x0004c2a4) popup_note_wait_window_t3

0xa44b,	// (0x0004c2b7) popup_note_wait_window_t4_ParamLimits

0xa44b,	// (0x0004c2b7) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x000516b6) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x000516b6) popup_note_wait_window_t

0xa470,	// (0x0004c2dc) wait_bar_pane_ParamLimits

0xa470,	// (0x0004c2dc) wait_bar_pane

0x09af,	// (0x0004281b) wait_anim_pane

0x09af,	// (0x0004281b) wait_border_pane

0x09a5,	// (0x00042811) wait_anim_pane_g1

0x09a5,	// (0x00042811) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x0005156a) wait_anim_pane_g

0xa34c,	// (0x0004c1b8) wait_border_pane_g1

0xa357,	// (0x0004c1c3) wait_border_pane_g2

0xa360,	// (0x0004c1cc) wait_border_pane_g3

0x0002,

0xf83c,	// (0x000516a8) wait_border_pane_g

0xa1b7,	// (0x0004c023) bg_popup_window_pane_cp16_ParamLimits

0xa1b7,	// (0x0004c023) bg_popup_window_pane_cp16

0xa2b7,	// (0x0004c123) indicator_popup_pane_cp4_ParamLimits

0xa2b7,	// (0x0004c123) indicator_popup_pane_cp4

0xa2cb,	// (0x0004c137) popup_query_data_window_t1_ParamLimits

0xa2cb,	// (0x0004c137) popup_query_data_window_t1

0xa2dd,	// (0x0004c149) popup_query_data_window_t2_ParamLimits

0xa2dd,	// (0x0004c149) popup_query_data_window_t2

0xa2f6,	// (0x0004c162) popup_query_data_window_t3_ParamLimits

0xa2f6,	// (0x0004c162) popup_query_data_window_t3

0x0002,

0xf835,	// (0x000516a1) popup_query_data_window_t_ParamLimits

0xf835,	// (0x000516a1) popup_query_data_window_t

0xa310,	// (0x0004c17c) query_popup_data_pane_ParamLimits

0xa310,	// (0x0004c17c) query_popup_data_pane

0xa324,	// (0x0004c190) query_popup_data_pane_cp1_ParamLimits

0xa324,	// (0x0004c190) query_popup_data_pane_cp1

0xa1b7,	// (0x0004c023) bg_popup_window_pane_cp10_ParamLimits

0xa1b7,	// (0x0004c023) bg_popup_window_pane_cp10

0xa1e9,	// (0x0004c055) indicator_popup_pane_ParamLimits

0xa1e9,	// (0x0004c055) indicator_popup_pane

0xa20b,	// (0x0004c077) popup_query_code_window_t1_ParamLimits

0xa20b,	// (0x0004c077) popup_query_code_window_t1

0xa225,	// (0x0004c091) popup_query_code_window_t2_ParamLimits

0xa225,	// (0x0004c091) popup_query_code_window_t2

0xa26e,	// (0x0004c0da) popup_query_code_window_t3_ParamLimits

0xa26e,	// (0x0004c0da) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x0005169a) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x0005169a) popup_query_code_window_t

0xa29d,	// (0x0004c109) query_popup_pane_ParamLimits

0xa29d,	// (0x0004c109) query_popup_pane

0x0bdd,	// (0x00042a49) bg_popup_window_pane_cp15_ParamLimits

0x0bdd,	// (0x00042a49) bg_popup_window_pane_cp15

0x69a4,	// (0x00048810) indicator_popup_pane_cp1_ParamLimits

0x69a4,	// (0x00048810) indicator_popup_pane_cp1

0x69b7,	// (0x00048823) indicator_popup_pane_cp2_ParamLimits

0x69b7,	// (0x00048823) indicator_popup_pane_cp2

0x69ca,	// (0x00048836) popup_query_data_code_window_g1_ParamLimits

0x69ca,	// (0x00048836) popup_query_data_code_window_g1

0x0bfb,	// (0x00042a67) popup_query_data_code_window_t1_ParamLimits

0x0bfb,	// (0x00042a67) popup_query_data_code_window_t1

0x0c0d,	// (0x00042a79) popup_query_data_code_window_t2_ParamLimits

0x0c0d,	// (0x00042a79) popup_query_data_code_window_t2

0x69dd,	// (0x00048849) popup_query_data_code_window_t3_ParamLimits

0x69dd,	// (0x00048849) popup_query_data_code_window_t3

0x69f3,	// (0x0004885f) popup_query_data_code_window_t4_ParamLimits

0x69f3,	// (0x0004885f) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x000513f6) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x000513f6) popup_query_data_code_window_t

0x7580,	// (0x000493ec) list_single_midp_graphic_pane_g3

0x6a0b,	// (0x00048877) query_popup_data_pane_cp2_ParamLimits

0x6a1e,	// (0x0004888a) query_popup_pane_cp2_ParamLimits

0x6a1e,	// (0x0004888a) query_popup_pane_cp2

0x09af,	// (0x0004281b) bg_popup_window_pane_cp11

0xa1af,	// (0x0004c01b) heading_pane_cp5

0x0c69,	// (0x00042ad5) listscroll_popup_info_pane

0x09af,	// (0x0004281b) input_focus_pane_cp3

0x0c1f,	// (0x00042a8b) query_popup_pane_t1

0x0c2d,	// (0x00042a99) list_popup_info_pane_ParamLimits

0x0c2d,	// (0x00042a99) list_popup_info_pane

0x0c3c,	// (0x00042aa8) listscroll_popup_info_pane_g1

0x0c44,	// (0x00042ab0) scroll_pane_cp7

0x6a31,	// (0x0004889d) popup_info_list_pane_t1_ParamLimits

0x6a31,	// (0x0004889d) popup_info_list_pane_t1

0x6a4b,	// (0x000488b7) popup_info_list_pane_t2_ParamLimits

0x6a4b,	// (0x000488b7) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x000513ff) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x000513ff) popup_info_list_pane_t

0x09af,	// (0x0004281b) bg_popup_window_pane_cp12

0xb4c1,	// (0x0004d32d) find_popup_pane

0x0a0b,	// (0x00042877) bg_popup_window_pane_cp3

0x0c4e,	// (0x00042aba) heading_pane_cp3

0x0c5a,	// (0x00042ac6) listscroll_popup_graphic_pane

0x09af,	// (0x0004281b) bg_popup_window_pane_cp4

0x6ab5,	// (0x00048921) heading_pane_cp4

0x0c69,	// (0x00042ad5) listscroll_popup_colour_pane

0x6abf,	// (0x0004892b) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x6abf,	// (0x0004892b) cell_large_graphic_colour_none_popup_pane

0x6ad3,	// (0x0004893f) grid_large_graphic_colour_popup_pane_ParamLimits

0x6ad3,	// (0x0004893f) grid_large_graphic_colour_popup_pane

0x6afb,	// (0x00048967) listscroll_popup_colour_pane_g1_ParamLimits

0x6afb,	// (0x00048967) listscroll_popup_colour_pane_g1

0x6b12,	// (0x0004897e) listscroll_popup_colour_pane_g2_ParamLimits

0x6b12,	// (0x0004897e) listscroll_popup_colour_pane_g2

0x6b29,	// (0x00048995) listscroll_popup_colour_pane_g3_ParamLimits

0x6b29,	// (0x00048995) listscroll_popup_colour_pane_g3

0x6b39,	// (0x000489a5) listscroll_popup_colour_pane_g4_ParamLimits

0x6b39,	// (0x000489a5) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00051404) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00051404) listscroll_popup_colour_pane_g

0x0c71,	// (0x00042add) scroll_pane_cp6_ParamLimits

0x0c71,	// (0x00042add) scroll_pane_cp6

0x6b49,	// (0x000489b5) cell_large_graphic_colour_popup_pane_ParamLimits

0x6b49,	// (0x000489b5) cell_large_graphic_colour_popup_pane

0x6b68,	// (0x000489d4) cell_large_graphic_colour_none_popup_pane_t1

0x09af,	// (0x0004281b) grid_highlight_pane_cp5

0x0c83,	// (0x00042aef) cell_large_graphic_colour_popup_pane_g1

0x0c8b,	// (0x00042af7) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0005140d) cell_large_graphic_colour_popup_pane_g

0x0c93,	// (0x00042aff) cell_large_graphic_colour_popup_pane_g2_copy1

0x0c9c,	// (0x00042b08) grid_highlight_pane_cp4

0x0ca4,	// (0x00042b10) bg_popup_window_pane_cp8_ParamLimits

0x0ca4,	// (0x00042b10) bg_popup_window_pane_cp8

0x6b77,	// (0x000489e3) popup_snote_single_text_window_g1_ParamLimits

0x6b77,	// (0x000489e3) popup_snote_single_text_window_g1

0x6b89,	// (0x000489f5) popup_snote_single_text_window_t1_ParamLimits

0x6b89,	// (0x000489f5) popup_snote_single_text_window_t1

0x6b9c,	// (0x00048a08) popup_snote_single_text_window_t2_ParamLimits

0x6b9c,	// (0x00048a08) popup_snote_single_text_window_t2

0x6baf,	// (0x00048a1b) popup_snote_single_text_window_t3_ParamLimits

0x6baf,	// (0x00048a1b) popup_snote_single_text_window_t3

0x6be8,	// (0x00048a54) popup_snote_single_text_window_t4_ParamLimits

0x6be8,	// (0x00048a54) popup_snote_single_text_window_t4

0x6c1c,	// (0x00048a88) popup_snote_single_text_window_t5_ParamLimits

0x6c1c,	// (0x00048a88) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00051412) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00051412) popup_snote_single_text_window_t

0x0cbf,	// (0x00042b2b) bg_popup_window_pane_cp9_ParamLimits

0x0cbf,	// (0x00042b2b) bg_popup_window_pane_cp9

0x6b77,	// (0x000489e3) popup_snote_single_graphic_window_g1_ParamLimits

0x6b77,	// (0x000489e3) popup_snote_single_graphic_window_g1

0x0ccd,	// (0x00042b39) popup_snote_single_graphic_window_g2_ParamLimits

0x0ccd,	// (0x00042b39) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0005141d) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0005141d) popup_snote_single_graphic_window_g

0x0cd9,	// (0x00042b45) popup_snote_single_graphic_window_t1_ParamLimits

0x0cd9,	// (0x00042b45) popup_snote_single_graphic_window_t1

0x0cec,	// (0x00042b58) popup_snote_single_graphic_window_t2_ParamLimits

0x0cec,	// (0x00042b58) popup_snote_single_graphic_window_t2

0x6c4b,	// (0x00048ab7) popup_snote_single_graphic_window_t3_ParamLimits

0x6c4b,	// (0x00048ab7) popup_snote_single_graphic_window_t3

0x6c84,	// (0x00048af0) popup_snote_single_graphic_window_t4_ParamLimits

0x6c84,	// (0x00048af0) popup_snote_single_graphic_window_t4

0x6cb8,	// (0x00048b24) popup_snote_single_graphic_window_t5_ParamLimits

0x6cb8,	// (0x00048b24) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00051422) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00051422) popup_snote_single_graphic_window_t

0xb403,	// (0x0004d26f) grid_graphic_popup_pane_ParamLimits

0xb403,	// (0x0004d26f) grid_graphic_popup_pane

0xb42d,	// (0x0004d299) listscroll_popup_graphic_pane_g1_ParamLimits

0xb42d,	// (0x0004d299) listscroll_popup_graphic_pane_g1

0xb441,	// (0x0004d2ad) listscroll_popup_graphic_pane_g2_ParamLimits

0xb441,	// (0x0004d2ad) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x00051817) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x00051817) listscroll_popup_graphic_pane_g

0xb455,	// (0x0004d2c1) scroll_pane_cp5

0xb3a2,	// (0x0004d20e) cell_graphic_popup_pane_ParamLimits

0xb3a2,	// (0x0004d20e) cell_graphic_popup_pane

0xb383,	// (0x0004d1ef) cell_graphic_popup_pane_g1

0xb38b,	// (0x0004d1f7) cell_graphic_popup_pane_g2

0x0c93,	// (0x00042aff) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x00051810) cell_graphic_popup_pane_g

0xb394,	// (0x0004d200) cell_graphic_popup_pane_t2

0x0c9c,	// (0x00042b08) grid_highlight_pane_cp3

0x0d11,	// (0x00042b7d) list_gen_pane_ParamLimits

0x0d11,	// (0x00042b7d) list_gen_pane

0x0d39,	// (0x00042ba5) scroll_pane

0xb2db,	// (0x0004d147) bg_list_pane_g1_ParamLimits

0xb2db,	// (0x0004d147) bg_list_pane_g1

0xb2f8,	// (0x0004d164) bg_list_pane_g2_ParamLimits

0xb2f8,	// (0x0004d164) bg_list_pane_g2

0xb30d,	// (0x0004d179) bg_list_pane_g3_ParamLimits

0xb30d,	// (0x0004d179) bg_list_pane_g3

0xb321,	// (0x0004d18d) bg_list_pane_g4_ParamLimits

0xb321,	// (0x0004d18d) bg_list_pane_g4

0xb335,	// (0x0004d1a1) bg_list_pane_g5_ParamLimits

0xb335,	// (0x0004d1a1) bg_list_pane_g5

0x0004,

0xf999,	// (0x00051805) bg_list_pane_g_ParamLimits

0xf999,	// (0x00051805) bg_list_pane_g

0x5d66,	// (0x00047bd2) list_double2_graphic_large_graphic_pane_ParamLimits

0x5d66,	// (0x00047bd2) list_double2_graphic_large_graphic_pane

0x5d66,	// (0x00047bd2) list_double2_graphic_pane_ParamLimits

0x5d66,	// (0x00047bd2) list_double2_graphic_pane

0x5d66,	// (0x00047bd2) list_double2_large_graphic_pane_ParamLimits

0x5d66,	// (0x00047bd2) list_double2_large_graphic_pane

0x5d66,	// (0x00047bd2) list_double2_pane_ParamLimits

0x5d66,	// (0x00047bd2) list_double2_pane

0x5d66,	// (0x00047bd2) list_double_graphic_heading_pane_ParamLimits

0x5d66,	// (0x00047bd2) list_double_graphic_heading_pane

0x5d66,	// (0x00047bd2) list_double_graphic_pane_ParamLimits

0x5d66,	// (0x00047bd2) list_double_graphic_pane

0x5d66,	// (0x00047bd2) list_double_heading_pane_ParamLimits

0x5d66,	// (0x00047bd2) list_double_heading_pane

0x5d66,	// (0x00047bd2) list_double_large_graphic_pane_ParamLimits

0x5d66,	// (0x00047bd2) list_double_large_graphic_pane

0x5d66,	// (0x00047bd2) list_double_number_pane_ParamLimits

0x5d66,	// (0x00047bd2) list_double_number_pane

0x5d66,	// (0x00047bd2) list_double_pane_ParamLimits

0x5d66,	// (0x00047bd2) list_double_pane

0x5d66,	// (0x00047bd2) list_double_time_pane_ParamLimits

0x5d66,	// (0x00047bd2) list_double_time_pane

0x5d66,	// (0x00047bd2) list_setting_number_pane_ParamLimits

0x5d66,	// (0x00047bd2) list_setting_number_pane

0x5d66,	// (0x00047bd2) list_setting_pane_ParamLimits

0x5d66,	// (0x00047bd2) list_setting_pane

0x8204,	// (0x0004a070) list_single_2graphic_pane_ParamLimits

0x8204,	// (0x0004a070) list_single_2graphic_pane

0x8204,	// (0x0004a070) list_single_graphic_heading_pane_ParamLimits

0x8204,	// (0x0004a070) list_single_graphic_heading_pane

0x8204,	// (0x0004a070) list_single_graphic_pane_ParamLimits

0x8204,	// (0x0004a070) list_single_graphic_pane

0x8204,	// (0x0004a070) list_single_heading_pane_ParamLimits

0x8204,	// (0x0004a070) list_single_heading_pane

0x825f,	// (0x0004a0cb) list_single_large_graphic_pane_ParamLimits

0x825f,	// (0x0004a0cb) list_single_large_graphic_pane

0x8204,	// (0x0004a070) list_single_number_heading_pane_ParamLimits

0x8204,	// (0x0004a070) list_single_number_heading_pane

0x8204,	// (0x0004a070) list_single_number_pane_ParamLimits

0x8204,	// (0x0004a070) list_single_number_pane

0x8204,	// (0x0004a070) list_single_pane_ParamLimits

0x8204,	// (0x0004a070) list_single_pane

0x09af,	// (0x0004281b) list_highlight_pane_cp1

0x6cf1,	// (0x00048b5d) list_single_pane_g1_ParamLimits

0x6cf1,	// (0x00048b5d) list_single_pane_g1

0x6cfd,	// (0x00048b69) list_single_pane_g2_ParamLimits

0x6cfd,	// (0x00048b69) list_single_pane_g2

0x0001,

0xf5d2,	// (0x0005143e) list_single_pane_g_ParamLimits

0xf5d2,	// (0x0005143e) list_single_pane_g

0x5d50,	// (0x00047bbc) list_single_pane_t1_ParamLimits

0x5d50,	// (0x00047bbc) list_single_pane_t1

0x6cf1,	// (0x00048b5d) list_single_number_pane_g1_ParamLimits

0x6cf1,	// (0x00048b5d) list_single_number_pane_g1

0x6cfd,	// (0x00048b69) list_single_number_pane_g2_ParamLimits

0x6cfd,	// (0x00048b69) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x0005143e) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x0005143e) list_single_number_pane_g

0x5505,	// (0x00047371) list_single_number_pane_t1_ParamLimits

0x5505,	// (0x00047371) list_single_number_pane_t1

0x5d0e,	// (0x00047b7a) list_single_number_pane_t2_ParamLimits

0x5d0e,	// (0x00047b7a) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x000517c6) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x000517c6) list_single_number_pane_t

0x54f9,	// (0x00047365) list_single_graphic_pane_g1_ParamLimits

0x54f9,	// (0x00047365) list_single_graphic_pane_g1

0x6cf1,	// (0x00048b5d) list_single_graphic_pane_g2_ParamLimits

0x6cf1,	// (0x00048b5d) list_single_graphic_pane_g2

0x6cfd,	// (0x00048b69) list_single_graphic_pane_g3_ParamLimits

0x6cfd,	// (0x00048b69) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0005142d) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0005142d) list_single_graphic_pane_g

0x5505,	// (0x00047371) list_single_graphic_pane_t1_ParamLimits

0x5505,	// (0x00047371) list_single_graphic_pane_t1

0x551b,	// (0x00047387) list_single_heading_pane_g1_ParamLimits

0x551b,	// (0x00047387) list_single_heading_pane_g1

0x6cfd,	// (0x00048b69) list_single_heading_pane_g2_ParamLimits

0x6cfd,	// (0x00048b69) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00051434) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00051434) list_single_heading_pane_g

0x552e,	// (0x0004739a) list_single_heading_pane_t1_ParamLimits

0x552e,	// (0x0004739a) list_single_heading_pane_t1

0x6d09,	// (0x00048b75) list_single_heading_pane_t2_ParamLimits

0x6d09,	// (0x00048b75) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00051439) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00051439) list_single_heading_pane_t

0x6cf1,	// (0x00048b5d) list_single_number_heading_pane_g1_ParamLimits

0x6cf1,	// (0x00048b5d) list_single_number_heading_pane_g1

0x6cfd,	// (0x00048b69) list_single_number_heading_pane_g2_ParamLimits

0x6cfd,	// (0x00048b69) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x0005143e) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x0005143e) list_single_number_heading_pane_g

0x5544,	// (0x000473b0) list_single_number_heading_pane_t1_ParamLimits

0x5544,	// (0x000473b0) list_single_number_heading_pane_t1

0x555a,	// (0x000473c6) list_single_number_heading_pane_t2_ParamLimits

0x555a,	// (0x000473c6) list_single_number_heading_pane_t2

0x556c,	// (0x000473d8) list_single_number_heading_pane_t3_ParamLimits

0x556c,	// (0x000473d8) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x00051443) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x00051443) list_single_number_heading_pane_t

0x557e,	// (0x000473ea) list_single_graphic_heading_pane_g1_ParamLimits

0x557e,	// (0x000473ea) list_single_graphic_heading_pane_g1

0x6d1b,	// (0x00048b87) list_single_graphic_heading_pane_g4_ParamLimits

0x6d1b,	// (0x00048b87) list_single_graphic_heading_pane_g4

0x6cfd,	// (0x00048b69) list_single_graphic_heading_pane_g5_ParamLimits

0x6cfd,	// (0x00048b69) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x0005144a) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x0005144a) list_single_graphic_heading_pane_g

0x5544,	// (0x000473b0) list_single_graphic_heading_pane_t1_ParamLimits

0x5544,	// (0x000473b0) list_single_graphic_heading_pane_t1

0x5594,	// (0x00047400) list_single_graphic_heading_pane_t2_ParamLimits

0x5594,	// (0x00047400) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x00051451) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x00051451) list_single_graphic_heading_pane_t

0x6d2c,	// (0x00048b98) list_single_large_graphic_pane_g1_ParamLimits

0x6d2c,	// (0x00048b98) list_single_large_graphic_pane_g1

0x6d38,	// (0x00048ba4) list_single_large_graphic_pane_g2_ParamLimits

0x6d38,	// (0x00048ba4) list_single_large_graphic_pane_g2

0x6d44,	// (0x00048bb0) list_single_large_graphic_pane_g3_ParamLimits

0x6d44,	// (0x00048bb0) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x00051456) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x00051456) list_single_large_graphic_pane_g

0xa357,	// (0x0004c1c3) wait_border_pane_g2_copy1

0x6d50,	// (0x00048bbc) list_single_large_graphic_pane_g4_cp2

0x55ac,	// (0x00047418) list_single_large_graphic_pane_t1_ParamLimits

0x55ac,	// (0x00047418) list_single_large_graphic_pane_t1

0x6d58,	// (0x00048bc4) list_double_pane_g1_ParamLimits

0x6d58,	// (0x00048bc4) list_double_pane_g1

0x6d64,	// (0x00048bd0) list_double_pane_g2_ParamLimits

0x6d64,	// (0x00048bd0) list_double_pane_g2

0x0001,

0xf5f1,	// (0x0005145d) list_double_pane_g_ParamLimits

0xf5f1,	// (0x0005145d) list_double_pane_g

0x55c2,	// (0x0004742e) list_double_pane_t1_ParamLimits

0x55c2,	// (0x0004742e) list_double_pane_t1

0x55d8,	// (0x00047444) list_double_pane_t2_ParamLimits

0x55d8,	// (0x00047444) list_double_pane_t2

0x0001,

0xf5f6,	// (0x00051462) list_double_pane_t_ParamLimits

0xf5f6,	// (0x00051462) list_double_pane_t

0x55ea,	// (0x00047456) list_double2_pane_g1_ParamLimits

0x55ea,	// (0x00047456) list_double2_pane_g1

0x55fb,	// (0x00047467) list_double2_pane_g2_ParamLimits

0x55fb,	// (0x00047467) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x00051467) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x00051467) list_double2_pane_g

0x5607,	// (0x00047473) list_double2_pane_t1_ParamLimits

0x5607,	// (0x00047473) list_double2_pane_t1

0x561d,	// (0x00047489) list_double2_pane_t2_ParamLimits

0x561d,	// (0x00047489) list_double2_pane_t2

0x0001,

0xf600,	// (0x0005146c) list_double2_pane_t_ParamLimits

0xf600,	// (0x0005146c) list_double2_pane_t

0x6d58,	// (0x00048bc4) list_double_number_pane_g1_ParamLimits

0x6d58,	// (0x00048bc4) list_double_number_pane_g1

0x6d64,	// (0x00048bd0) list_double_number_pane_g2_ParamLimits

0x6d64,	// (0x00048bd0) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x0005145d) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x0005145d) list_double_number_pane_g

0x562f,	// (0x0004749b) list_double_number_pane_t1_ParamLimits

0x562f,	// (0x0004749b) list_double_number_pane_t1

0x5641,	// (0x000474ad) list_double_number_pane_t2_ParamLimits

0x5641,	// (0x000474ad) list_double_number_pane_t2

0x5657,	// (0x000474c3) list_double_number_pane_t3_ParamLimits

0x5657,	// (0x000474c3) list_double_number_pane_t3

0x0002,

0xf605,	// (0x00051471) list_double_number_pane_t_ParamLimits

0xf605,	// (0x00051471) list_double_number_pane_t

0x5669,	// (0x000474d5) list_double_graphic_pane_g1_ParamLimits

0x5669,	// (0x000474d5) list_double_graphic_pane_g1

0x6d70,	// (0x00048bdc) list_double_graphic_pane_g2_ParamLimits

0x6d70,	// (0x00048bdc) list_double_graphic_pane_g2

0x6d7f,	// (0x00048beb) list_double_graphic_pane_g3_ParamLimits

0x6d7f,	// (0x00048beb) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x00051478) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x00051478) list_double_graphic_pane_g

0x5641,	// (0x000474ad) list_double_graphic_pane_t1_ParamLimits

0x5641,	// (0x000474ad) list_double_graphic_pane_t1

0x5657,	// (0x000474c3) list_double_graphic_pane_t2_ParamLimits

0x5657,	// (0x000474c3) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x00051481) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x00051481) list_double_graphic_pane_t

0x5681,	// (0x000474ed) list_double2_graphic_pane_g1_ParamLimits

0x5681,	// (0x000474ed) list_double2_graphic_pane_g1

0xbcb2,	// (0x0004db1e) list_double2_graphic_pane_g2_ParamLimits

0xbcb2,	// (0x0004db1e) list_double2_graphic_pane_g2

0x6d8b,	// (0x00048bf7) list_double2_graphic_pane_g3_ParamLimits

0x6d8b,	// (0x00048bf7) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x00051486) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x00051486) list_double2_graphic_pane_g

0x568d,	// (0x000474f9) list_double2_graphic_pane_t1_ParamLimits

0x568d,	// (0x000474f9) list_double2_graphic_pane_t1

0x56a3,	// (0x0004750f) list_double2_graphic_pane_t2_ParamLimits

0x56a3,	// (0x0004750f) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x0005148d) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x0005148d) list_double2_graphic_pane_t

0x56b5,	// (0x00047521) list_double_large_graphic_pane_g1_ParamLimits

0x56b5,	// (0x00047521) list_double_large_graphic_pane_g1

0x56d4,	// (0x00047540) list_double_large_graphic_pane_g2_ParamLimits

0x56d4,	// (0x00047540) list_double_large_graphic_pane_g2

0x6d64,	// (0x00048bd0) list_double_large_graphic_pane_g3_ParamLimits

0x6d64,	// (0x00048bd0) list_double_large_graphic_pane_g3

0x56ea,	// (0x00047556) list_double_large_graphic_pane_g4_ParamLimits

0x56ea,	// (0x00047556) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x00051492) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x00051492) list_double_large_graphic_pane_g

0x56fc,	// (0x00047568) list_double_large_graphic_pane_t1_ParamLimits

0x56fc,	// (0x00047568) list_double_large_graphic_pane_t1

0x5715,	// (0x00047581) list_double_large_graphic_pane_t2_ParamLimits

0x5715,	// (0x00047581) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x0005149d) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x0005149d) list_double_large_graphic_pane_t

0x5727,	// (0x00047593) list_double2_large_graphic_pane_g1_ParamLimits

0x5727,	// (0x00047593) list_double2_large_graphic_pane_g1

0x5733,	// (0x0004759f) list_double2_large_graphic_pane_g2_ParamLimits

0x5733,	// (0x0004759f) list_double2_large_graphic_pane_g2

0x6d8b,	// (0x00048bf7) list_double2_large_graphic_pane_g3_ParamLimits

0x6d8b,	// (0x00048bf7) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x000514a2) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x000514a2) list_double2_large_graphic_pane_g

0x568d,	// (0x000474f9) list_double2_large_graphic_pane_t1_ParamLimits

0x568d,	// (0x000474f9) list_double2_large_graphic_pane_t1

0x56a3,	// (0x0004750f) list_double2_large_graphic_pane_t2_ParamLimits

0x56a3,	// (0x0004750f) list_double2_large_graphic_pane_t2

0x0001,

0xf621,	// (0x0005148d) list_double2_large_graphic_pane_t_ParamLimits

0xf621,	// (0x0005148d) list_double2_large_graphic_pane_t

0x6dac,	// (0x00048c18) list_double_heading_pane_g1_ParamLimits

0x6dac,	// (0x00048c18) list_double_heading_pane_g1

0x6dbd,	// (0x00048c29) list_double_heading_pane_g2_ParamLimits

0x6dbd,	// (0x00048c29) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x000514a9) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x000514a9) list_double_heading_pane_g

0x5744,	// (0x000475b0) list_double_heading_pane_t1_ParamLimits

0x5744,	// (0x000475b0) list_double_heading_pane_t1

0x56a3,	// (0x0004750f) list_double_heading_pane_t2_ParamLimits

0x56a3,	// (0x0004750f) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x000514ae) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x000514ae) list_double_heading_pane_t

0x575a,	// (0x000475c6) list_double_graphic_heading_pane_g1_ParamLimits

0x575a,	// (0x000475c6) list_double_graphic_heading_pane_g1

0x6dac,	// (0x00048c18) list_double_graphic_heading_pane_g2_ParamLimits

0x6dac,	// (0x00048c18) list_double_graphic_heading_pane_g2

0x6dbd,	// (0x00048c29) list_double_graphic_heading_pane_g3_ParamLimits

0x6dbd,	// (0x00048c29) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x000514b3) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x000514b3) list_double_graphic_heading_pane_g

0x5744,	// (0x000475b0) list_double_graphic_heading_pane_t1_ParamLimits

0x5744,	// (0x000475b0) list_double_graphic_heading_pane_t1

0x56a3,	// (0x0004750f) list_double_graphic_heading_pane_t2_ParamLimits

0x56a3,	// (0x0004750f) list_double_graphic_heading_pane_t2

0x0001,

0xf642,	// (0x000514ae) list_double_graphic_heading_pane_t_ParamLimits

0xf642,	// (0x000514ae) list_double_graphic_heading_pane_t

0x5766,	// (0x000475d2) list_double_time_pane_g1_ParamLimits

0x5766,	// (0x000475d2) list_double_time_pane_g1

0x5777,	// (0x000475e3) list_double_time_pane_g2_ParamLimits

0x5777,	// (0x000475e3) list_double_time_pane_g2

0x0001,

0xf64e,	// (0x000514ba) list_double_time_pane_g_ParamLimits

0xf64e,	// (0x000514ba) list_double_time_pane_g

0x5783,	// (0x000475ef) list_double_time_pane_t1_ParamLimits

0x5783,	// (0x000475ef) list_double_time_pane_t1

0x5799,	// (0x00047605) list_double_time_pane_t2_ParamLimits

0x5799,	// (0x00047605) list_double_time_pane_t2

0x57ab,	// (0x00047617) list_double_time_pane_t3_ParamLimits

0x57ab,	// (0x00047617) list_double_time_pane_t3

0x57bd,	// (0x00047629) list_double_time_pane_t4_ParamLimits

0x57bd,	// (0x00047629) list_double_time_pane_t4

0x0003,

0xf653,	// (0x000514bf) list_double_time_pane_t_ParamLimits

0xf653,	// (0x000514bf) list_double_time_pane_t

0x57cf,	// (0x0004763b) list_setting_pane_g1_ParamLimits

0x57cf,	// (0x0004763b) list_setting_pane_g1

0x55fb,	// (0x00047467) list_setting_pane_g2_ParamLimits

0x55fb,	// (0x00047467) list_setting_pane_g2

0x0001,

0xf65c,	// (0x000514c8) list_setting_pane_g_ParamLimits

0xf65c,	// (0x000514c8) list_setting_pane_g

0x57db,	// (0x00047647) list_setting_pane_t1_ParamLimits

0x57db,	// (0x00047647) list_setting_pane_t1

0x57f5,	// (0x00047661) list_setting_pane_t2_ParamLimits

0x57f5,	// (0x00047661) list_setting_pane_t2

0x0002,

0xf661,	// (0x000514cd) list_setting_pane_t_ParamLimits

0xf661,	// (0x000514cd) list_setting_pane_t

0x5832,	// (0x0004769e) set_value_pane_cp_ParamLimits

0x5832,	// (0x0004769e) set_value_pane_cp

0x583e,	// (0x000476aa) list_setting_number_pane_g1_ParamLimits

0x583e,	// (0x000476aa) list_setting_number_pane_g1

0x584a,	// (0x000476b6) list_setting_number_pane_g2_ParamLimits

0x584a,	// (0x000476b6) list_setting_number_pane_g2

0x0001,

0xf668,	// (0x000514d4) list_setting_number_pane_g_ParamLimits

0xf668,	// (0x000514d4) list_setting_number_pane_g

0x5856,	// (0x000476c2) list_setting_number_pane_t1_ParamLimits

0x5856,	// (0x000476c2) list_setting_number_pane_t1

0x586f,	// (0x000476db) list_setting_number_pane_t2_ParamLimits

0x586f,	// (0x000476db) list_setting_number_pane_t2

0x5889,	// (0x000476f5) list_setting_number_pane_t3_ParamLimits

0x5889,	// (0x000476f5) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x000514d9) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x000514d9) list_setting_number_pane_t

0x5832,	// (0x0004769e) set_value_pane_ParamLimits

0x5832,	// (0x0004769e) set_value_pane

0x0d6d,	// (0x00042bd9) bg_set_opt_pane_ParamLimits

0x0d6d,	// (0x00042bd9) bg_set_opt_pane

0x58cc,	// (0x00047738) set_value_pane_t1

0x0d8e,	// (0x00042bfa) slider_set_pane_cp3

0x6dc9,	// (0x00048c35) volume_small_pane_cp

0x0d97,	// (0x00042c03) list_form_gen_pane

0x0da0,	// (0x00042c0c) scroll_pane_cp8

0x58e2,	// (0x0004774e) form_field_data_pane_ParamLimits

0x58e2,	// (0x0004774e) form_field_data_pane

0x5904,	// (0x00047770) form_field_data_wide_pane_ParamLimits

0x5904,	// (0x00047770) form_field_data_wide_pane

0x5927,	// (0x00047793) form_field_popup_pane_ParamLimits

0x5927,	// (0x00047793) form_field_popup_pane

0x5947,	// (0x000477b3) form_field_popup_wide_pane_ParamLimits

0x5947,	// (0x000477b3) form_field_popup_wide_pane

0x5964,	// (0x000477d0) form_field_slider_pane_ParamLimits

0x5964,	// (0x000477d0) form_field_slider_pane

0x5977,	// (0x000477e3) form_field_slider_wide_pane_ParamLimits

0x5977,	// (0x000477e3) form_field_slider_wide_pane

0x0db1,	// (0x00042c1d) data_form_pane

0x5994,	// (0x00047800) form_field_data_pane_t1

0x0dbd,	// (0x00042c29) input_focus_pane

0x59ac,	// (0x00047818) data_form_wide_pane

0x59c9,	// (0x00047835) form_field_data_wide_pane_t1

0x0cb1,	// (0x00042b1d) input_focus_pane_cp6

0x59eb,	// (0x00047857) form_field_popup_pane_t1

0x0dbd,	// (0x00042c29) input_focus_pane_cp7

0x0deb,	// (0x00042c57) list_form_pane

0x5a0b,	// (0x00047877) form_field_popup_wide_pane_t1

0x0dbd,	// (0x00042c29) input_focus_pane_cp8

0x0df7,	// (0x00042c63) list_form_wide_pane

0x5a28,	// (0x00047894) form_field_slider_pane_t1_ParamLimits

0x5a28,	// (0x00047894) form_field_slider_pane_t1

0x5a3e,	// (0x000478aa) form_field_slider_pane_t2_ParamLimits

0x5a3e,	// (0x000478aa) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x000514e9) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x000514e9) form_field_slider_pane_t

0x09fd,	// (0x00042869) input_focus_pane_cp9_ParamLimits

0x09fd,	// (0x00042869) input_focus_pane_cp9

0x5a53,	// (0x000478bf) slider_cont_pane_ParamLimits

0x5a53,	// (0x000478bf) slider_cont_pane

0x0e03,	// (0x00042c6f) form_field_slider_wide_pane_t1_ParamLimits

0x0e03,	// (0x00042c6f) form_field_slider_wide_pane_t1

0x5a67,	// (0x000478d3) form_field_slider_wide_pane_t2_ParamLimits

0x5a67,	// (0x000478d3) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x000514ee) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x000514ee) form_field_slider_wide_pane_t

0x09fd,	// (0x00042869) input_focus_pane_cp10_ParamLimits

0x09fd,	// (0x00042869) input_focus_pane_cp10

0x5a79,	// (0x000478e5) slider_cont_pane_cp1_ParamLimits

0x5a79,	// (0x000478e5) slider_cont_pane_cp1

0x5a8d,	// (0x000478f9) slider_form_pane_cp

0x0e15,	// (0x00042c81) input_focus_pane_g1

0x0e1d,	// (0x00042c89) input_focus_pane_g2

0x0e25,	// (0x00042c91) input_focus_pane_g3

0x0e2d,	// (0x00042c99) input_focus_pane_g4

0x0e35,	// (0x00042ca1) input_focus_pane_g5

0x0e3d,	// (0x00042ca9) input_focus_pane_g6

0x0e45,	// (0x00042cb1) input_focus_pane_g7

0x0e4d,	// (0x00042cb9) input_focus_pane_g8

0x0e55,	// (0x00042cc1) input_focus_pane_g9

0x09a5,	// (0x00042811) input_focus_pane_g10

0x0009,

0xf687,	// (0x000514f3) input_focus_pane_g

0xa360,	// (0x0004c1cc) wait_border_pane_g3_copy1

0x5a95,	// (0x00047901) data_form_pane_t1

0x09a5,	// (0x00042811) wait_anim_pane_g1_copy1

0x5d20,	// (0x00047b8c) data_form_wide_pane_t1

0x5ab0,	// (0x0004791c) list_form_graphic_pane_cp_ParamLimits

0x5ab0,	// (0x0004791c) list_form_graphic_pane_cp

0xb24f,	// (0x0004d0bb) slider_form_pane_g1

0xb258,	// (0x0004d0c4) slider_form_pane_g2

0x0006,

0xf98a,	// (0x000517f6) slider_form_pane_g

0x5ab0,	// (0x0004791c) list_form_graphic_pane_ParamLimits

0x5ab0,	// (0x0004791c) list_form_graphic_pane

0x5ac9,	// (0x00047935) list_form_graphic_pane_g1

0x5ad1,	// (0x0004793d) list_form_graphic_pane_t1_ParamLimits

0x5ad1,	// (0x0004793d) list_form_graphic_pane_t1

0x0a0b,	// (0x00042877) list_highlight_pane_cp5_ParamLimits

0x0a0b,	// (0x00042877) list_highlight_pane_cp5

0x5ae6,	// (0x00047952) find_pane_g1

0x0e5d,	// (0x00042cc9) input_find_pane

0x5aef,	// (0x0004795b) input_find_pane_g1_ParamLimits

0x5aef,	// (0x0004795b) input_find_pane_g1

0x5afb,	// (0x00047967) input_find_pane_t1_ParamLimits

0x5afb,	// (0x00047967) input_find_pane_t1

0x5b10,	// (0x0004797c) input_find_pane_t2_ParamLimits

0x5b10,	// (0x0004797c) input_find_pane_t2

0x0001,

0xf69c,	// (0x00051508) input_find_pane_t_ParamLimits

0xf69c,	// (0x00051508) input_find_pane_t

0x0e66,	// (0x00042cd2) input_focus_pane_cp5_ParamLimits

0x0e66,	// (0x00042cd2) input_focus_pane_cp5

0x0e74,	// (0x00042ce0) bg_popup_window_pane_cp2_ParamLimits

0x0e74,	// (0x00042ce0) bg_popup_window_pane_cp2

0x0e81,	// (0x00042ced) listscroll_menu_pane_ParamLimits

0x0e81,	// (0x00042ced) listscroll_menu_pane

0x6dde,	// (0x00048c4a) popup_submenu_window_ParamLimits

0x6dde,	// (0x00048c4a) popup_submenu_window

0x0e8d,	// (0x00042cf9) find_popup_pane_g1

0x6e06,	// (0x00048c72) input_popup_find_pane_cp

0x0e66,	// (0x00042cd2) input_focus_pane_cp4_ParamLimits

0x0e66,	// (0x00042cd2) input_focus_pane_cp4

0x0e95,	// (0x00042d01) input_popup_find_pane_t1_ParamLimits

0x0e95,	// (0x00042d01) input_popup_find_pane_t1

0x09af,	// (0x0004281b) bg_popup_sub_pane_cp

0x0ec3,	// (0x00042d2f) listscroll_popup_sub_pane

0x0ecb,	// (0x00042d37) list_submenu_pane_ParamLimits

0x0ecb,	// (0x00042d37) list_submenu_pane

0x0edc,	// (0x00042d48) scroll_pane_cp4

0x6e1e,	// (0x00048c8a) list_single_popup_submenu_pane_ParamLimits

0x6e1e,	// (0x00048c8a) list_single_popup_submenu_pane

0x2325,	// (0x00044191) list_single_popup_submenu_pane_g1

0x6e32,	// (0x00048c9e) list_single_popup_submenu_pane_t1_ParamLimits

0x6e32,	// (0x00048c9e) list_single_popup_submenu_pane_t1

0x0a0b,	// (0x00042877) bg_active_tab_pane_cp1_ParamLimits

0x0a0b,	// (0x00042877) bg_active_tab_pane_cp1

0x0ee4,	// (0x00042d50) tabs_2_active_pane_g1

0x6e47,	// (0x00048cb3) tabs_2_active_pane_t1

0x0a0b,	// (0x00042877) bg_passive_tab_pane_cp1_ParamLimits

0x0a0b,	// (0x00042877) bg_passive_tab_pane_cp1

0x0ee4,	// (0x00042d50) tabs_2_passive_pane_g1

0x6e47,	// (0x00048cb3) tabs_2_passive_pane_t1

0x20e5,	// (0x00043f51) bg_active_tab_pane_cp4

0x6e59,	// (0x00048cc5) tabs_2_long_active_pane_t1

0x6e6c,	// (0x00048cd8) bg_passive_tab_pane_cp4

0x7ec0,	// (0x00049d2c) list_single_midp_graphic_pane_g4_ParamLimits

0x20e5,	// (0x00043f51) bg_active_tab_pane_cp5

0x6e78,	// (0x00048ce4) tabs_3_long_active_pane_t1

0x6e6c,	// (0x00048cd8) bg_passive_tab_pane_cp5

0x7ec0,	// (0x00049d2c) list_single_midp_graphic_pane_g4

0x0a0b,	// (0x00042877) bg_popup_window_pane_cp13_ParamLimits

0x0a0b,	// (0x00042877) bg_popup_window_pane_cp13

0x0eec,	// (0x00042d58) listscroll_popup_fast_pane_ParamLimits

0x0eec,	// (0x00042d58) listscroll_popup_fast_pane

0x0ef8,	// (0x00042d64) grid_popup_fast_pane_ParamLimits

0x0ef8,	// (0x00042d64) grid_popup_fast_pane

0x0f0a,	// (0x00042d76) scroll_pane_cp9_ParamLimits

0x0f0a,	// (0x00042d76) scroll_pane_cp9

0xcb3e,	// (0x0004e9aa) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcb3e,	// (0x0004e9aa) list_single_graphic_hl_pane_t1_cp2

0x0f1d,	// (0x00042d89) input_focus_pane_cp20_ParamLimits

0x0f1d,	// (0x00042d89) input_focus_pane_cp20

0x0f2b,	// (0x00042d97) query_popup_data_pane_t1_ParamLimits

0x0f2b,	// (0x00042d97) query_popup_data_pane_t1

0x0f3e,	// (0x00042daa) query_popup_data_pane_t2_ParamLimits

0x0f3e,	// (0x00042daa) query_popup_data_pane_t2

0x0f84,	// (0x00042df0) query_popup_data_pane_t3_ParamLimits

0x0f84,	// (0x00042df0) query_popup_data_pane_t3

0x0fc5,	// (0x00042e31) query_popup_data_pane_t4_ParamLimits

0x0fc5,	// (0x00042e31) query_popup_data_pane_t4

0x1001,	// (0x00042e6d) query_popup_data_pane_t5_ParamLimits

0x1001,	// (0x00042e6d) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x0005150d) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x0005150d) query_popup_data_pane_t

0x0e15,	// (0x00042c81) bg_set_opt_pane_g1

0x0e1d,	// (0x00042c89) bg_set_opt_pane_g2

0x0e25,	// (0x00042c91) bg_set_opt_pane_g3

0x0e2d,	// (0x00042c99) bg_set_opt_pane_g4

0x0e35,	// (0x00042ca1) bg_set_opt_pane_g5

0x0e3d,	// (0x00042ca9) bg_set_opt_pane_g6

0x0e45,	// (0x00042cb1) bg_set_opt_pane_g7

0x0e4d,	// (0x00042cb9) bg_set_opt_pane_g8

0x0e55,	// (0x00042cc1) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x00051518) bg_set_opt_pane_g

0x7371,	// (0x000491dd) control_top_pane_stacon_ParamLimits

0x7371,	// (0x000491dd) control_top_pane_stacon

0x73c4,	// (0x00049230) signal_pane_stacon_ParamLimits

0x73c4,	// (0x00049230) signal_pane_stacon

0x4998,	// (0x00046804) stacon_top_pane_g1_ParamLimits

0x4998,	// (0x00046804) stacon_top_pane_g1

0x73e9,	// (0x00049255) title_pane_stacon_ParamLimits

0x73e9,	// (0x00049255) title_pane_stacon

0x7413,	// (0x0004927f) uni_indicator_pane_stacon_ParamLimits

0x7413,	// (0x0004927f) uni_indicator_pane_stacon

0x7428,	// (0x00049294) battery_pane_stacon_ParamLimits

0x7428,	// (0x00049294) battery_pane_stacon

0x746c,	// (0x000492d8) control_bottom_pane_stacon_ParamLimits

0x746c,	// (0x000492d8) control_bottom_pane_stacon

0x748f,	// (0x000492fb) navi_pane_stacon_ParamLimits

0x748f,	// (0x000492fb) navi_pane_stacon

0x4a83,	// (0x000468ef) stacon_bottom_pane_g1_ParamLimits

0x4a83,	// (0x000468ef) stacon_bottom_pane_g1

0x6ea4,	// (0x00048d10) aid_levels_signal_lsc_ParamLimits

0x6ea4,	// (0x00048d10) aid_levels_signal_lsc

0x6eba,	// (0x00048d26) signal_pane_stacon_g1_ParamLimits

0x6eba,	// (0x00048d26) signal_pane_stacon_g1

0x6ece,	// (0x00048d3a) signal_pane_stacon_g2_ParamLimits

0x6ece,	// (0x00048d3a) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x0005152b) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0005152b) signal_pane_stacon_g

0x6f03,	// (0x00048d6f) title_pane_stacon_t1_ParamLimits

0x6f03,	// (0x00048d6f) title_pane_stacon_t1

0x1059,	// (0x00042ec5) uni_indicator_pane_stacon_g1

0x1063,	// (0x00042ecf) uni_indicator_pane_stacon_g2

0x1045,	// (0x00042eb1) uni_indicator_pane_stacon_g3

0x104f,	// (0x00042ebb) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x00051537) uni_indicator_pane_stacon_g

0x6f28,	// (0x00048d94) control_top_pane_stacon_g1

0x6f30,	// (0x00048d9c) control_top_pane_stacon_t1_ParamLimits

0x6f30,	// (0x00048d9c) control_top_pane_stacon_t1

0x6f67,	// (0x00048dd3) aid_levels_battery_lsc_ParamLimits

0x6f67,	// (0x00048dd3) aid_levels_battery_lsc

0x6f7e,	// (0x00048dea) battery_pane_stacon_g1_ParamLimits

0x6f7e,	// (0x00048dea) battery_pane_stacon_g1

0x6f91,	// (0x00048dfd) battery_pane_stacon_g2_ParamLimits

0x6f91,	// (0x00048dfd) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x00051540) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x00051540) battery_pane_stacon_g

0x6fcf,	// (0x00048e3b) navi_icon_pane_stacon

0x6fe3,	// (0x00048e4f) navi_navi_pane_stacon

0x6fcf,	// (0x00048e3b) navi_text_pane_stacon

0x6f28,	// (0x00048d94) control_bottom_pane_stacon_g1

0x6ff7,	// (0x00048e63) control_bottom_pane_stacon_t1_ParamLimits

0x6ff7,	// (0x00048e63) control_bottom_pane_stacon_t1

0x702e,	// (0x00048e9a) grid_app_pane_ParamLimits

0x702e,	// (0x00048e9a) grid_app_pane

0x7052,	// (0x00048ebe) scroll_pane_cp15_ParamLimits

0x7052,	// (0x00048ebe) scroll_pane_cp15

0x7065,	// (0x00048ed1) cell_app_pane_ParamLimits

0x7065,	// (0x00048ed1) cell_app_pane

0x708d,	// (0x00048ef9) cell_app_pane_g1_ParamLimits

0x708d,	// (0x00048ef9) cell_app_pane_g1

0x1087,	// (0x00042ef3) cell_app_pane_g2_ParamLimits

0x1087,	// (0x00042ef3) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x00051545) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x00051545) cell_app_pane_g

0x70b1,	// (0x00048f1d) cell_app_pane_t1_ParamLimits

0x70b1,	// (0x00048f1d) cell_app_pane_t1

0x1093,	// (0x00042eff) grid_highlight_pane_ParamLimits

0x1093,	// (0x00042eff) grid_highlight_pane

0x0e15,	// (0x00042c81) cell_highlight_pane_g1

0x0e1d,	// (0x00042c89) cell_highlight_pane_g2

0x0e25,	// (0x00042c91) cell_highlight_pane_g3

0x0e2d,	// (0x00042c99) cell_highlight_pane_g4

0x0e35,	// (0x00042ca1) cell_highlight_pane_g5

0x0e3d,	// (0x00042ca9) cell_highlight_pane_g6

0x0e45,	// (0x00042cb1) cell_highlight_pane_g7

0x0e4d,	// (0x00042cb9) cell_highlight_pane_g8

0x0e55,	// (0x00042cc1) cell_highlight_pane_g9

0x09a5,	// (0x00042811) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x000514f3) cell_highlight_pane_g

0x10a4,	// (0x00042f10) bg_scroll_pane

0x70db,	// (0x00048f47) scroll_handle_pane

0x10eb,	// (0x00042f57) scroll_bg_pane_g1

0x1100,	// (0x00042f6c) scroll_bg_pane_g2

0x1118,	// (0x00042f84) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x0005154a) scroll_bg_pane_g

0x7104,	// (0x00048f70) scroll_handle_focus_pane_ParamLimits

0x7104,	// (0x00048f70) scroll_handle_focus_pane

0x10eb,	// (0x00042f57) scroll_handle_pane_g1

0x112d,	// (0x00042f99) scroll_handle_pane_g2

0x1118,	// (0x00042f84) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x00051551) scroll_handle_pane_g

0x0e66,	// (0x00042cd2) bg_popup_sub_pane_cp21_ParamLimits

0x0e66,	// (0x00042cd2) bg_popup_sub_pane_cp21

0x7111,	// (0x00048f7d) popup_fep_japan_predictive_window_t1_ParamLimits

0x7111,	// (0x00048f7d) popup_fep_japan_predictive_window_t1

0x712b,	// (0x00048f97) popup_fep_japan_predictive_window_t2_ParamLimits

0x712b,	// (0x00048f97) popup_fep_japan_predictive_window_t2

0x715e,	// (0x00048fca) popup_fep_japan_predictive_window_t3_ParamLimits

0x715e,	// (0x00048fca) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x00051558) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x00051558) popup_fep_japan_predictive_window_t

0x09af,	// (0x0004281b) bg_popup_sub_pane_cp23

0x3462,	// (0x000452ce) listscroll_japin_cand_pane

0x1141,	// (0x00042fad) popup_fep_japan_candidate_window_t1

0x114f,	// (0x00042fbb) candidate_pane_ParamLimits

0x114f,	// (0x00042fbb) candidate_pane

0x7195,	// (0x00049001) scroll_pane_cp30

0x1161,	// (0x00042fcd) list_single_popup_jap_candidate_pane_ParamLimits

0x1161,	// (0x00042fcd) list_single_popup_jap_candidate_pane

0x09af,	// (0x0004281b) list_highlight_pane_cp30

0x1176,	// (0x00042fe2) list_single_popup_jap_candidate_pane_t1

0x1185,	// (0x00042ff1) level_1_signal

0x1192,	// (0x00042ffe) level_2_signal

0x119f,	// (0x0004300b) level_3_signal

0x11ac,	// (0x00043018) level_4_signal

0x11b9,	// (0x00043025) level_5_signal

0x11c6,	// (0x00043032) level_6_signal

0x11d3,	// (0x0004303f) level_7_signal

0x1185,	// (0x00042ff1) level_1_battery

0x1192,	// (0x00042ffe) level_2_battery

0x119f,	// (0x0004300b) level_3_battery

0x11ac,	// (0x00043018) level_4_battery

0x11b9,	// (0x00043025) level_5_battery

0x11c6,	// (0x00043032) level_6_battery

0x11d3,	// (0x0004303f) level_7_battery

0x11f8,	// (0x00043064) list_menu_pane_ParamLimits

0x11f8,	// (0x00043064) list_menu_pane

0x120e,	// (0x0004307a) scroll_pane_cp25_ParamLimits

0x120e,	// (0x0004307a) scroll_pane_cp25

0x1227,	// (0x00043093) list_double2_graphic_pane_cp2_ParamLimits

0x1227,	// (0x00043093) list_double2_graphic_pane_cp2

0x1227,	// (0x00043093) list_double2_large_graphic_pane_cp2_ParamLimits

0x1227,	// (0x00043093) list_double2_large_graphic_pane_cp2

0x1227,	// (0x00043093) list_double2_pane_cp2_ParamLimits

0x1227,	// (0x00043093) list_double2_pane_cp2

0x1227,	// (0x00043093) list_double_graphic_pane_cp2_ParamLimits

0x1227,	// (0x00043093) list_double_graphic_pane_cp2

0x1227,	// (0x00043093) list_double_large_graphic_pane_cp2_ParamLimits

0x1227,	// (0x00043093) list_double_large_graphic_pane_cp2

0x1227,	// (0x00043093) list_double_number_pane_cp2_ParamLimits

0x1227,	// (0x00043093) list_double_number_pane_cp2

0x1227,	// (0x00043093) list_double_pane_cp2_ParamLimits

0x1227,	// (0x00043093) list_double_pane_cp2

0x71d0,	// (0x0004903c) list_single_2graphic_pane_cp2_ParamLimits

0x71d0,	// (0x0004903c) list_single_2graphic_pane_cp2

0x71d0,	// (0x0004903c) list_single_graphic_heading_pane_cp2_ParamLimits

0x71d0,	// (0x0004903c) list_single_graphic_heading_pane_cp2

0x71d0,	// (0x0004903c) list_single_graphic_pane_cp2_ParamLimits

0x71d0,	// (0x0004903c) list_single_graphic_pane_cp2

0x71d0,	// (0x0004903c) list_single_heading_pane_cp2_ParamLimits

0x71d0,	// (0x0004903c) list_single_heading_pane_cp2

0x1237,	// (0x000430a3) list_single_large_graphic_pane_cp2_ParamLimits

0x1237,	// (0x000430a3) list_single_large_graphic_pane_cp2

0x71d0,	// (0x0004903c) list_single_number_heading_pane_cp2_ParamLimits

0x71d0,	// (0x0004903c) list_single_number_heading_pane_cp2

0x71d0,	// (0x0004903c) list_single_number_pane_cp2_ParamLimits

0x71d0,	// (0x0004903c) list_single_number_pane_cp2

0x71d0,	// (0x0004903c) list_single_pane_cp2_ParamLimits

0x71d0,	// (0x0004903c) list_single_pane_cp2

0x1251,	// (0x000430bd) bg_popup_sub_pane_cp22

0x72a8,	// (0x00049114) popup_side_volume_key_window_g1

0x72cc,	// (0x00049138) popup_side_volume_key_window_t1

0x72e8,	// (0x00049154) volume_small_pane_cp1

0x09fd,	// (0x00042869) bg_popup_sub_pane_cp24_ParamLimits

0x09fd,	// (0x00042869) bg_popup_sub_pane_cp24

0x1267,	// (0x000430d3) fep_china_uni_candidate_pane_ParamLimits

0x1267,	// (0x000430d3) fep_china_uni_candidate_pane

0x127b,	// (0x000430e7) fep_china_uni_entry_pane

0x128b,	// (0x000430f7) popup_fep_china_uni_window_g1

0x72f0,	// (0x0004915c) fep_china_uni_entry_pane_g1

0x72f8,	// (0x00049164) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x00051589) fep_china_uni_entry_pane_g

0x483a,	// (0x000466a6) fep_entry_item_pane

0x4844,	// (0x000466b0) fep_candidate_item_pane

0x7300,	// (0x0004916c) fep_china_uni_candidate_pane_g1

0x484c,	// (0x000466b8) fep_china_uni_candidate_pane_g2

0x4854,	// (0x000466c0) fep_china_uni_candidate_pane_g3

0x7308,	// (0x00049174) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x0005158e) fep_china_uni_candidate_pane_g

0x09a5,	// (0x00042811) fep_entry_item_pane_g1

0x485c,	// (0x000466c8) fep_entry_item_pane_t1_ParamLimits

0x485c,	// (0x000466c8) fep_entry_item_pane_t1

0x4872,	// (0x000466de) fep_candidate_item_pane_t1_ParamLimits

0x4872,	// (0x000466de) fep_candidate_item_pane_t1

0x4887,	// (0x000466f3) fep_candidate_item_pane_t2_ParamLimits

0x4887,	// (0x000466f3) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x00051597) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x00051597) fep_candidate_item_pane_t

0x0a0b,	// (0x00042877) list_highlight_pane_cp31_ParamLimits

0x0a0b,	// (0x00042877) list_highlight_pane_cp31

0x4899,	// (0x00046705) level_1_signal_lsc

0x48a2,	// (0x0004670e) level_2_signal_lsc

0x48ab,	// (0x00046717) level_3_signal_lsc

0x48b4,	// (0x00046720) level_4_signal_lsc

0x48bd,	// (0x00046729) level_5_signal_lsc

0x48c6,	// (0x00046732) level_6_signal_lsc

0x48cf,	// (0x0004673b) level_7_signal_lsc

0x48cf,	// (0x0004673b) level_1_battery_lsc

0x48d8,	// (0x00046744) level_2_battery_lsc

0x48e1,	// (0x0004674d) level_3_battery_lsc

0x48ea,	// (0x00046756) level_4_battery_lsc

0x48f3,	// (0x0004675f) level_5_battery_lsc

0x48fc,	// (0x00046768) level_6_battery_lsc

0x4899,	// (0x00046705) level_7_battery_lsc

0x4905,	// (0x00046771) scroll_handle_focus_pane_g1

0x490e,	// (0x0004677a) scroll_handle_focus_pane_g2

0x4917,	// (0x00046783) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x0005159c) scroll_handle_focus_pane_g

0x5b25,	// (0x00047991) list_single_2graphic_pane_g1_ParamLimits

0x5b25,	// (0x00047991) list_single_2graphic_pane_g1

0x6d1b,	// (0x00048b87) list_single_2graphic_pane_g2_ParamLimits

0x6d1b,	// (0x00048b87) list_single_2graphic_pane_g2

0x6cfd,	// (0x00048b69) list_single_2graphic_pane_g3_ParamLimits

0x6cfd,	// (0x00048b69) list_single_2graphic_pane_g3

0x5b31,	// (0x0004799d) list_single_2graphic_pane_g4_ParamLimits

0x5b31,	// (0x0004799d) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x000515a3) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x000515a3) list_single_2graphic_pane_g

0x5b3d,	// (0x000479a9) list_single_2graphic_pane_t1_ParamLimits

0x5b3d,	// (0x000479a9) list_single_2graphic_pane_t1

0x5b6b,	// (0x000479d7) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5b6b,	// (0x000479d7) list_double2_graphic_large_graphic_pane_g1

0x5733,	// (0x0004759f) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x5733,	// (0x0004759f) list_double2_graphic_large_graphic_pane_g2

0x6d8b,	// (0x00048bf7) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x6d8b,	// (0x00048bf7) list_double2_graphic_large_graphic_pane_g3

0x7310,	// (0x0004917c) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x7310,	// (0x0004917c) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x000515ac) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x000515ac) list_double2_graphic_large_graphic_pane_g

0x5b7b,	// (0x000479e7) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5b7b,	// (0x000479e7) list_double2_graphic_large_graphic_pane_t1

0x5b91,	// (0x000479fd) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5b91,	// (0x000479fd) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x000515b5) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x000515b5) list_double2_graphic_large_graphic_pane_t

0x74ee,	// (0x0004935a) popup_fast_swap_window_ParamLimits

0x74ee,	// (0x0004935a) popup_fast_swap_window

0x750a,	// (0x00049376) popup_side_volume_key_window

0x4b0e,	// (0x0004697a) stacon_top_pane

0x4b18,	// (0x00046984) status_pane_ParamLimits

0x4b18,	// (0x00046984) status_pane

0x7524,	// (0x00049390) status_small_pane

0x09af,	// (0x0004281b) control_pane

0x09af,	// (0x0004281b) stacon_bottom_pane

0x0da0,	// (0x00042c0c) scroll_pane_cp121

0x0d97,	// (0x00042c03) set_content_pane

0x731c,	// (0x00049188) bg_active_tab_pane_g1_cp1

0x7325,	// (0x00049191) bg_active_tab_pane_g2_cp1

0x732e,	// (0x0004919a) bg_active_tab_pane_g3_cp1

0x731c,	// (0x00049188) bg_passive_tab_pane_g1_cp1

0x7325,	// (0x00049191) bg_passive_tab_pane_g2_cp1

0x732e,	// (0x0004919a) bg_passive_tab_pane_g3_cp1

0x7337,	// (0x000491a3) bg_active_tab_pane_g1_cp2

0x7325,	// (0x00049191) bg_active_tab_pane_g2_cp2

0x7340,	// (0x000491ac) bg_active_tab_pane_g3_cp2

0x7337,	// (0x000491a3) bg_passive_tab_pane_g1_cp2

0x7325,	// (0x00049191) bg_passive_tab_pane_g2_cp2

0x7340,	// (0x000491ac) bg_passive_tab_pane_g3_cp2

0x7349,	// (0x000491b5) bg_active_tab_pane_g1_cp3

0x7325,	// (0x00049191) bg_active_tab_pane_g2_cp3

0x7352,	// (0x000491be) bg_active_tab_pane_g3_cp3

0x7349,	// (0x000491b5) bg_passive_tab_pane_g1_cp3

0x7325,	// (0x00049191) bg_passive_tab_pane_g2_cp3

0x7352,	// (0x000491be) bg_passive_tab_pane_g3_cp3

0x735b,	// (0x000491c7) bg_active_tab_pane_g1_cp4

0x7325,	// (0x00049191) bg_active_tab_pane_g2_cp4

0x7366,	// (0x000491d2) bg_active_tab_pane_g3_cp4

0x735b,	// (0x000491c7) bg_passive_tab_pane_g1_cp4

0x7325,	// (0x00049191) bg_passive_tab_pane_g2_cp4

0x7366,	// (0x000491d2) bg_passive_tab_pane_g3_cp4

0x74b2,	// (0x0004931e) bg_active_tab_pane_g1_cp5

0x7325,	// (0x00049191) bg_active_tab_pane_g2_cp5

0x74bb,	// (0x00049327) bg_active_tab_pane_g3_cp5

0x74b2,	// (0x0004931e) bg_passive_tab_pane_g1_cp5

0x7325,	// (0x00049191) bg_passive_tab_pane_g2_cp5

0x74bb,	// (0x00049327) bg_passive_tab_pane_g3_cp5

0x74c4,	// (0x00049330) list_set_graphic_pane_ParamLimits

0x74c4,	// (0x00049330) list_set_graphic_pane

0x09af,	// (0x0004281b) bg_set_opt_pane_cp4

0x4a9f,	// (0x0004690b) list_set_graphic_pane_g1_ParamLimits

0x4a9f,	// (0x0004690b) list_set_graphic_pane_g1

0x4aab,	// (0x00046917) list_set_graphic_pane_g2_ParamLimits

0x4aab,	// (0x00046917) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x000515ba) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x000515ba) list_set_graphic_pane_g

0x0009,

0xfae6,	// (0x00051952) volume_small_pane_cp_g

0x74e2,	// (0x0004934e) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x74e2,	// (0x0004934e) list_double2_large_graphic_pane_g1_cp2

0x4acd,	// (0x00046939) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x4acd,	// (0x00046939) list_double2_large_graphic_pane_g2_cp2

0x4ade,	// (0x0004694a) list_double2_large_graphic_pane_g3_cp2

0x4ae6,	// (0x00046952) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4ae6,	// (0x00046952) list_double2_large_graphic_pane_t1_cp2

0x4afc,	// (0x00046968) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4afc,	// (0x00046968) list_double2_large_graphic_pane_t2_cp2

0xae11,	// (0x0004cc7d) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xae11,	// (0x0004cc7d) list_double_large_graphic_pane_g1_cp2

0xae22,	// (0x0004cc8e) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xae22,	// (0x0004cc8e) list_double_large_graphic_pane_g2_cp2

0x7631,	// (0x0004949d) list_double_large_graphic_pane_g3_cp2

0xae33,	// (0x0004cc9f) list_double_large_graphic_pane_g4_cp

0xae3b,	// (0x0004cca7) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xae3b,	// (0x0004cca7) list_double_large_graphic_pane_t1_cp2

0xae52,	// (0x0004ccbe) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xae52,	// (0x0004ccbe) list_double_large_graphic_pane_t2_cp2

0x752f,	// (0x0004939b) list_double2_graphic_pane_g1_cp2_ParamLimits

0x752f,	// (0x0004939b) list_double2_graphic_pane_g1_cp2

0x753d,	// (0x000493a9) list_double2_graphic_pane_g2_cp2_ParamLimits

0x753d,	// (0x000493a9) list_double2_graphic_pane_g2_cp2

0x754e,	// (0x000493ba) list_double2_graphic_pane_g3_cp2

0x7558,	// (0x000493c4) list_double2_graphic_pane_t1_cp2_ParamLimits

0x7558,	// (0x000493c4) list_double2_graphic_pane_t1_cp2

0x756e,	// (0x000493da) list_double2_graphic_pane_t2_cp2_ParamLimits

0x756e,	// (0x000493da) list_double2_graphic_pane_t2_cp2

0x12a7,	// (0x00043113) list_single_number_heading_pane_g1_cp2_ParamLimits

0x12a7,	// (0x00043113) list_single_number_heading_pane_g1_cp2

0x7580,	// (0x000493ec) list_single_number_heading_pane_g2_cp2

0x7588,	// (0x000493f4) list_single_number_heading_pane_t1_cp2_ParamLimits

0x7588,	// (0x000493f4) list_single_number_heading_pane_t1_cp2

0x759e,	// (0x0004940a) list_single_number_heading_pane_t2_cp2_ParamLimits

0x759e,	// (0x0004940a) list_single_number_heading_pane_t2_cp2

0x75b0,	// (0x0004941c) list_single_number_heading_pane_t3_cp2_ParamLimits

0x75b0,	// (0x0004941c) list_single_number_heading_pane_t3_cp2

0x12a7,	// (0x00043113) list_single_heading_pane_g1_cp2_ParamLimits

0x12a7,	// (0x00043113) list_single_heading_pane_g1_cp2

0x7580,	// (0x000493ec) list_single_heading_pane_g2_cp2

0x7588,	// (0x000493f4) list_single_heading_pane_t1_cp2_ParamLimits

0x7588,	// (0x000493f4) list_single_heading_pane_t1_cp2

0xac1b,	// (0x0004ca87) list_single_heading_pane_t2_cp2_ParamLimits

0xac1b,	// (0x0004ca87) list_single_heading_pane_t2_cp2

0xab63,	// (0x0004c9cf) list_double_graphic_pane_g1_cp2_ParamLimits

0xab63,	// (0x0004c9cf) list_double_graphic_pane_g1_cp2

0xab6f,	// (0x0004c9db) list_double_graphic_pane_g2_cp2_ParamLimits

0xab6f,	// (0x0004c9db) list_double_graphic_pane_g2_cp2

0xab7e,	// (0x0004c9ea) list_double_graphic_pane_g3_cp2

0xab86,	// (0x0004c9f2) list_double_graphic_pane_t1_cp2_ParamLimits

0xab86,	// (0x0004c9f2) list_double_graphic_pane_t1_cp2

0xab9c,	// (0x0004ca08) list_double_graphic_pane_t2_cp2_ParamLimits

0xab9c,	// (0x0004ca08) list_double_graphic_pane_t2_cp2

0x7625,	// (0x00049491) list_double_number_pane_g1_cp2_ParamLimits

0x7625,	// (0x00049491) list_double_number_pane_g1_cp2

0x7631,	// (0x0004949d) list_double_number_pane_g2_cp2

0xab27,	// (0x0004c993) list_double_number_pane_t1_cp2_ParamLimits

0xab27,	// (0x0004c993) list_double_number_pane_t1_cp2

0xab3b,	// (0x0004c9a7) list_double_number_pane_t2_cp2_ParamLimits

0xab3b,	// (0x0004c9a7) list_double_number_pane_t2_cp2

0xab51,	// (0x0004c9bd) list_double_number_pane_t3_cp2_ParamLimits

0xab51,	// (0x0004c9bd) list_double_number_pane_t3_cp2

0xaa10,	// (0x0004c87c) list_single_graphic_pane_g1_cp2_ParamLimits

0xaa10,	// (0x0004c87c) list_single_graphic_pane_g1_cp2

0x7689,	// (0x000494f5) list_single_graphic_pane_g2_cp2_ParamLimits

0x7689,	// (0x000494f5) list_single_graphic_pane_g2_cp2

0x9435,	// (0x0004b2a1) list_single_graphic_pane_g3_cp2

0xa9e6,	// (0x0004c852) list_single_graphic_pane_t1_cp2_ParamLimits

0xa9e6,	// (0x0004c852) list_single_graphic_pane_t1_cp2

0x7689,	// (0x000494f5) list_single_number_pane_g1_cp2_ParamLimits

0x7689,	// (0x000494f5) list_single_number_pane_g1_cp2

0x9435,	// (0x0004b2a1) list_single_number_pane_g2_cp2

0xa9e6,	// (0x0004c852) list_single_number_pane_t1_cp2_ParamLimits

0xa9e6,	// (0x0004c852) list_single_number_pane_t1_cp2

0xa9fc,	// (0x0004c868) list_single_number_pane_t2_cp2_ParamLimits

0xa9fc,	// (0x0004c868) list_single_number_pane_t2_cp2

0x4acd,	// (0x00046939) list_double2_pane_g1_cp2_ParamLimits

0x4acd,	// (0x00046939) list_double2_pane_g1_cp2

0x4ade,	// (0x0004694a) list_double2_pane_g2_cp2

0x75fd,	// (0x00049469) list_double2_pane_t1_cp2_ParamLimits

0x75fd,	// (0x00049469) list_double2_pane_t1_cp2

0x7613,	// (0x0004947f) list_double2_pane_t2_cp2_ParamLimits

0x7613,	// (0x0004947f) list_double2_pane_t2_cp2

0x7625,	// (0x00049491) list_double_pane_g1_cp2_ParamLimits

0x7625,	// (0x00049491) list_double_pane_g1_cp2

0x7631,	// (0x0004949d) list_double_pane_g2_cp2

0x7639,	// (0x000494a5) list_double_pane_t1_cp2_ParamLimits

0x7639,	// (0x000494a5) list_double_pane_t1_cp2

0x764f,	// (0x000494bb) list_double_pane_t2_cp2_ParamLimits

0x764f,	// (0x000494bb) list_double_pane_t2_cp2

0x7679,	// (0x000494e5) list_single_pane_cp2_g3

0x7689,	// (0x000494f5) list_single_pane_g1_cp2_ParamLimits

0x7689,	// (0x000494f5) list_single_pane_g1_cp2

0x9435,	// (0x0004b2a1) list_single_pane_g2_cp2

0x943d,	// (0x0004b2a9) list_single_pane_t1_cp2_ParamLimits

0x943d,	// (0x0004b2a9) list_single_pane_t1_cp2

0x9455,	// (0x0004b2c1) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9455,	// (0x0004b2c1) list_single_large_graphic_pane_g1_cp2

0x9461,	// (0x0004b2cd) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x9461,	// (0x0004b2cd) list_single_large_graphic_pane_g2_cp2

0x946d,	// (0x0004b2d9) list_single_large_graphic_pane_g3_cp2

0x9475,	// (0x0004b2e1) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x9475,	// (0x0004b2e1) list_single_large_graphic_pane_g4_cp1

0x948f,	// (0x0004b2fb) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x948f,	// (0x0004b2fb) list_single_large_graphic_pane_t1_cp2

0xa9b2,	// (0x0004c81e) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa9b2,	// (0x0004c81e) list_single_graphic_heading_pane_g1_cp2

0xa97f,	// (0x0004c7eb) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa97f,	// (0x0004c7eb) list_single_graphic_heading_pane_g4_cp2

0x9435,	// (0x0004b2a1) list_single_graphic_heading_pane_g5_cp2

0xa9be,	// (0x0004c82a) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa9be,	// (0x0004c82a) list_single_graphic_heading_pane_t1_cp2

0xa9d4,	// (0x0004c840) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa9d4,	// (0x0004c840) list_single_graphic_heading_pane_t2_cp2

0xa973,	// (0x0004c7df) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa973,	// (0x0004c7df) list_single_2graphic_pane_g1_cp2

0xa97f,	// (0x0004c7eb) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa97f,	// (0x0004c7eb) list_single_2graphic_pane_g2_cp2

0x9435,	// (0x0004b2a1) list_single_2graphic_pane_g3_cp2

0xa990,	// (0x0004c7fc) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa990,	// (0x0004c7fc) list_single_2graphic_pane_g4_cp2

0xa99c,	// (0x0004c808) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa99c,	// (0x0004c808) list_single_2graphic_pane_t1_cp2

0x09a5,	// (0x00042811) list_highlight_pane_g10_cp1

0xa55b,	// (0x0004c3c7) list_highlight_pane_g1_cp1

0xa563,	// (0x0004c3cf) list_highlight_pane_g2_cp1

0xa56b,	// (0x0004c3d7) list_highlight_pane_g3_cp1

0xa573,	// (0x0004c3df) list_highlight_pane_g4_cp1

0xa57b,	// (0x0004c3e7) list_highlight_pane_g5_cp1

0xa583,	// (0x0004c3ef) list_highlight_pane_g6_cp1

0xa58b,	// (0x0004c3f7) list_highlight_pane_g7_cp1

0xa593,	// (0x0004c3ff) list_highlight_pane_g8_cp1

0xa59b,	// (0x0004c407) list_highlight_pane_g9_cp1

0xa483,	// (0x0004c2ef) form_field_slider_pane_t3

0xa491,	// (0x0004c2fd) form_field_slider_pane_t4

0xa49f,	// (0x0004c30b) slider_form_pane_ParamLimits

0xa49f,	// (0x0004c30b) slider_form_pane

0x09af,	// (0x0004281b) control_abbreviations

0x09af,	// (0x0004281b) control_conventions

0x09af,	// (0x0004281b) control_definitions

0x09af,	// (0x0004281b) format_table_attribute

0xac65,	// (0x0004cad1) bg_popup_preview_window_pane_g9

0x09af,	// (0x0004281b) format_table_data2

0x09af,	// (0x0004281b) format_table_data3

0x09af,	// (0x0004281b) format_table_data_example

0x0008,

0x09af,	// (0x0004281b) intro_purpose

0xf8ea,	// (0x00051756) bg_popup_preview_window_pane_g

0x09af,	// (0x0004281b) texts_category

0x09af,	// (0x0004281b) texts_graphics

0x94a5,	// (0x0004b311) text_digital

0x94b4,	// (0x0004b320) text_primary

0x94c3,	// (0x0004b32f) text_primary_small

0x94d2,	// (0x0004b33e) text_secondary

0x94e1,	// (0x0004b34d) text_title

0xb357,	// (0x0004d1c3) bg_passive_tab_pane_g1_cp3_srt

0x7325,	// (0x00049191) bg_passive_tab_pane_g2_cp3_srt

0xb360,	// (0x0004d1cc) bg_passive_tab_pane_g3_cp3_srt

0x0a0b,	// (0x00042877) bg_active_tab_pane_cp3_srt_ParamLimits

0x0a0b,	// (0x00042877) bg_active_tab_pane_cp3_srt

0xb369,	// (0x0004d1d5) tabs_4_active_pane_srt_g1

0xb371,	// (0x0004d1dd) tabs_4_active_pane_srt_t1_ParamLimits

0xb371,	// (0x0004d1dd) tabs_4_active_pane_srt_t1

0xb357,	// (0x0004d1c3) bg_active_tab_pane_g1_cp3_copy1

0x7325,	// (0x00049191) bg_active_tab_pane_g2_cp3_copy1

0xb360,	// (0x0004d1cc) bg_active_tab_pane_g3_cp3_copy1

0x0a0b,	// (0x00042877) tabs_2_long_active_pane_srt_ParamLimits

0x0a0b,	// (0x00042877) tabs_2_long_active_pane_srt

0x0a0b,	// (0x00042877) tabs_2_long_passive_pane_srt_ParamLimits

0x0a0b,	// (0x00042877) tabs_2_long_passive_pane_srt

0x6e6c,	// (0x00048cd8) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6e6c,	// (0x00048cd8) bg_passive_tab_pane_cp4_srt

0xb086,	// (0x0004cef2) bg_passive_tab_pane_g1_cp4_srt

0x7325,	// (0x00049191) bg_passive_tab_pane_g2_cp4_srt

0xb08f,	// (0x0004cefb) bg_passive_tab_pane_g3_cp4_srt

0x20e5,	// (0x00043f51) bg_active_tab_pane_cp4_srt_ParamLimits

0x20e5,	// (0x00043f51) bg_active_tab_pane_cp4_srt

0xb098,	// (0x0004cf04) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb098,	// (0x0004cf04) tabs_2_long_active_pane_srt_t1

0xb086,	// (0x0004cef2) bg_active_tab_pane_g1_cp4_srt

0x7325,	// (0x00049191) bg_active_tab_pane_g2_cp4_srt

0xb08f,	// (0x0004cefb) bg_active_tab_pane_g3_cp4_srt

0x09fd,	// (0x00042869) tabs_3_long_active_pane_srt_ParamLimits

0x09fd,	// (0x00042869) tabs_3_long_active_pane_srt

0x09fd,	// (0x00042869) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x09fd,	// (0x00042869) tabs_3_long_passive_pane_cp_srt

0x09fd,	// (0x00042869) tabs_3_long_passive_pane_srt_ParamLimits

0x09fd,	// (0x00042869) tabs_3_long_passive_pane_srt

0x6e6c,	// (0x00048cd8) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6e6c,	// (0x00048cd8) bg_passive_tab_pane_cp5_srt

0x74b2,	// (0x0004931e) bg_passive_tab_pane_g1_cp5_srt

0x7325,	// (0x00049191) bg_passive_tab_pane_g2_cp5_srt

0x74bb,	// (0x00049327) bg_passive_tab_pane_g3_cp5_srt

0x20e5,	// (0x00043f51) bg_active_tab_pane_cp5_srt_ParamLimits

0x20e5,	// (0x00043f51) bg_active_tab_pane_cp5_srt

0xb074,	// (0x0004cee0) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb074,	// (0x0004cee0) tabs_3_long_active_pane_srt_t1

0x74b2,	// (0x0004931e) bg_active_tab_pane_g1_cp5_srt

0x7325,	// (0x00049191) bg_active_tab_pane_g2_cp5_srt

0x74bb,	// (0x00049327) bg_active_tab_pane_g3_cp5_srt

0xb066,	// (0x0004ced2) navi_text_pane_srt_t1

0xb05e,	// (0x0004ceca) navi_icon_pane_srt_g1

0x96b2,	// (0x0004b51e) midp_editing_number_pane_srt

0x94f0,	// (0x0004b35c) midp_ticker_pane_srt

0x96ba,	// (0x0004b526) midp_ticker_pane_srt_g1

0x96c2,	// (0x0004b52e) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x000515d9) midp_ticker_pane_srt_g

0x96ca,	// (0x0004b536) midp_ticker_pane_srt_t1

0xb04f,	// (0x0004cebb) midp_editing_number_pane_t1_copy1

0x94f8,	// (0x0004b364) listscroll_midp_pane

0x94f8,	// (0x0004b364) midp_form_pane

0x956a,	// (0x0004b3d6) midp_info_popup_window_ParamLimits

0x956a,	// (0x0004b3d6) midp_info_popup_window

0x0e66,	// (0x00042cd2) bg_popup_sub_pane_cp50_ParamLimits

0x0e66,	// (0x00042cd2) bg_popup_sub_pane_cp50

0xa1a3,	// (0x0004c00f) listscroll_midp_info_pane_ParamLimits

0xa1a3,	// (0x0004c00f) listscroll_midp_info_pane

0xa183,	// (0x0004bfef) listscroll_form_midp_pane_ParamLimits

0xa183,	// (0x0004bfef) listscroll_form_midp_pane

0xa18f,	// (0x0004bffb) scroll_bar_cp050

0xa163,	// (0x0004bfcf) list_midp_pane

0xbd99,	// (0x0004dc05) signal_pane_g2_cp

0xa09d,	// (0x0004bf09) listscroll_midp_info_pane_t1_ParamLimits

0xa09d,	// (0x0004bf09) listscroll_midp_info_pane_t1

0xa0b5,	// (0x0004bf21) listscroll_midp_info_pane_t2_ParamLimits

0xa0b5,	// (0x0004bf21) listscroll_midp_info_pane_t2

0xa0f3,	// (0x0004bf5f) listscroll_midp_info_pane_t3_ParamLimits

0xa0f3,	// (0x0004bf5f) listscroll_midp_info_pane_t3

0xa12d,	// (0x0004bf99) listscroll_midp_info_pane_t4_ParamLimits

0xa12d,	// (0x0004bf99) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x00051691) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x00051691) listscroll_midp_info_pane_t

0x0edc,	// (0x00042d48) scroll_pane_cp21

0xa03d,	// (0x0004bea9) form_midp_field_choice_group_pane

0xa046,	// (0x0004beb2) form_midp_field_text_pane

0xa083,	// (0x0004beef) form_midp_field_time_pane

0xa08b,	// (0x0004bef7) form_midp_gauge_slider_pane

0xa094,	// (0x0004bf00) form_midp_gauge_wait_pane

0x09af,	// (0x0004281b) form_midp_image_pane

0x5ce0,	// (0x00047b4c) list_single_midp_pane_ParamLimits

0x5ce0,	// (0x00047b4c) list_single_midp_pane

0x9ff2,	// (0x0004be5e) form_midp_field_text_pane_t1

0x9dbc,	// (0x0004bc28) input_focus_pane_cp050

0xa02c,	// (0x0004be98) list_midp_form_text_pane

0x9fc1,	// (0x0004be2d) form_midp_field_choice_group_pane_t1

0x9fcf,	// (0x0004be3b) input_focus_pane_cp051

0x9fe3,	// (0x0004be4f) list_midp_choice_pane

0x09af,	// (0x0004281b) status_idle_pane

0x9fa5,	// (0x0004be11) form_midp_field_time_pane_t1

0x09a5,	// (0x00042811) wait_anim_pane_g2_copy1

0x9fb3,	// (0x0004be1f) form_midp_field_time_pane_t2

0x0001,

0x961a,	// (0x0004b486) aid_navinavi_width_2_pane

0xf820,	// (0x0005168c) form_midp_field_time_pane_t

0x09af,	// (0x0004281b) input_focus_pane_cp052

0x09af,	// (0x0004281b) bg_input_focus_pane_cp040

0x9f65,	// (0x0004bdd1) form_midp_gauge_slider_pane_t1

0x9f73,	// (0x0004bddf) form_midp_gauge_slider_pane_t2

0x9f81,	// (0x0004bded) form_midp_gauge_slider_pane_t3

0x9f8f,	// (0x0004bdfb) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x00051683) form_midp_gauge_slider_pane_t

0x9f9d,	// (0x0004be09) form_midp_slider_pane

0x0a0b,	// (0x00042877) bg_input_focus_pane_cp041_ParamLimits

0x0a0b,	// (0x00042877) bg_input_focus_pane_cp041

0x9f32,	// (0x0004bd9e) form_midp_gauge_wait_pane_t1_ParamLimits

0x9f32,	// (0x0004bd9e) form_midp_gauge_wait_pane_t1

0x9f44,	// (0x0004bdb0) form_midp_gauge_wait_pane_t2_ParamLimits

0x9f44,	// (0x0004bdb0) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x0005167e) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x0005167e) form_midp_gauge_wait_pane_t

0x9f56,	// (0x0004bdc2) form_midp_wait_pane_ParamLimits

0x9f56,	// (0x0004bdc2) form_midp_wait_pane

0x9efc,	// (0x0004bd68) form_midp_image_pane_g1

0x9f05,	// (0x0004bd71) form_midp_image_pane_t1

0x9f14,	// (0x0004bd80) form_midp_image_pane_t2

0x9f23,	// (0x0004bd8f) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x00051677) form_midp_image_pane_t

0x9ef3,	// (0x0004bd5f) list_single_midp_pane_g1

0x5cd1,	// (0x00047b3d) list_single_midp_pane_t1

0x9eca,	// (0x0004bd36) list_midp_form_item_pane_ParamLimits

0x9eca,	// (0x0004bd36) list_midp_form_item_pane

0x95c2,	// (0x0004b42e) list_midp_form_item_pane_t1

0x95d1,	// (0x0004b43d) midp_ticker_pane_g1

0x95dd,	// (0x0004b449) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x000515bf) midp_ticker_pane_g

0x95e9,	// (0x0004b455) midp_ticker_pane_t1

0xb29c,	// (0x0004d108) midp_editing_number_pane_t1

0xb27a,	// (0x0004d0e6) midp_editing_number_pane

0xb289,	// (0x0004d0f5) midp_ticker_pane

0xb03f,	// (0x0004ceab) ai_message_heading_pane

0x09af,	// (0x0004281b) bg_popup_window_pane_cp14

0xb047,	// (0x0004ceb3) listscroll_ai_message_pane

0xafc9,	// (0x0004ce35) ai_message_heading_pane_g1_ParamLimits

0xafc9,	// (0x0004ce35) ai_message_heading_pane_g1

0xafd5,	// (0x0004ce41) ai_message_heading_pane_g2_ParamLimits

0xafd5,	// (0x0004ce41) ai_message_heading_pane_g2

0xafe1,	// (0x0004ce4d) ai_message_heading_pane_g3_ParamLimits

0xafe1,	// (0x0004ce4d) ai_message_heading_pane_g3

0xafed,	// (0x0004ce59) ai_message_heading_pane_g4_ParamLimits

0xafed,	// (0x0004ce59) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x000517b8) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x000517b8) ai_message_heading_pane_g

0xaff9,	// (0x0004ce65) ai_message_heading_pane_t1_ParamLimits

0xaff9,	// (0x0004ce65) ai_message_heading_pane_t1

0xb013,	// (0x0004ce7f) ai_message_heading_pane_t2_ParamLimits

0xb013,	// (0x0004ce7f) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x000517c1) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x000517c1) ai_message_heading_pane_t

0xb025,	// (0x0004ce91) bg_popup_heading_pane_cp1_ParamLimits

0xb025,	// (0x0004ce91) bg_popup_heading_pane_cp1

0xafb7,	// (0x0004ce23) list_ai_message_pane_ParamLimits

0xafb7,	// (0x0004ce23) list_ai_message_pane

0x0edc,	// (0x00042d48) scroll_pane_cp10

0xaf53,	// (0x0004cdbf) list_ai_message_pane_g1

0xaf5b,	// (0x0004cdc7) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x00051795) list_ai_message_pane_g

0xaf63,	// (0x0004cdcf) list_ai_message_pane_t1_ParamLimits

0xaf63,	// (0x0004cdcf) list_ai_message_pane_t1

0xaf78,	// (0x0004cde4) list_ai_message_pane_t2_ParamLimits

0xaf78,	// (0x0004cde4) list_ai_message_pane_t2

0xaf8d,	// (0x0004cdf9) list_ai_message_pane_t3_ParamLimits

0xaf8d,	// (0x0004cdf9) list_ai_message_pane_t3

0xafa2,	// (0x0004ce0e) list_ai_message_pane_t4_ParamLimits

0xafa2,	// (0x0004ce0e) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x0005179a) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x0005179a) list_ai_message_pane_t

0xaf3e,	// (0x0004cdaa) cell_ai_soft_ind_pane_ParamLimits

0xaf3e,	// (0x0004cdaa) cell_ai_soft_ind_pane

0x95fb,	// (0x0004b467) cell_ai_soft_ind_pane_g1_ParamLimits

0x95fb,	// (0x0004b467) cell_ai_soft_ind_pane_g1

0x09af,	// (0x0004281b) grid_highlight_cp1

0x9608,	// (0x0004b474) text_secondary_cp56_ParamLimits

0x9608,	// (0x0004b474) text_secondary_cp56

0xaf13,	// (0x0004cd7f) example_general_pane_ParamLimits

0xaf13,	// (0x0004cd7f) example_general_pane

0xaf1f,	// (0x0004cd8b) example_parent_pane_g1_ParamLimits

0xaf1f,	// (0x0004cd8b) example_parent_pane_g1

0xaf2b,	// (0x0004cd97) example_parent_pane_t1_ParamLimits

0xaf2b,	// (0x0004cd97) example_parent_pane_t1

0x7c43,	// (0x00049aaf) popup_preview_text_window_ParamLimits

0x7c43,	// (0x00049aaf) popup_preview_text_window

0x7681,	// (0x000494ed) list_single_pane_cp2_g4

0x0bdd,	// (0x00042a49) bg_popup_preview_window_pane_ParamLimits

0x0bdd,	// (0x00042a49) bg_popup_preview_window_pane

0xac6d,	// (0x0004cad9) popup_preview_text_window_t1_ParamLimits

0xac6d,	// (0x0004cad9) popup_preview_text_window_t1

0xac8b,	// (0x0004caf7) popup_preview_text_window_t2_ParamLimits

0xac8b,	// (0x0004caf7) popup_preview_text_window_t2

0xacd4,	// (0x0004cb40) popup_preview_text_window_t3_ParamLimits

0xacd4,	// (0x0004cb40) popup_preview_text_window_t3

0xad19,	// (0x0004cb85) popup_preview_text_window_t4_ParamLimits

0xad19,	// (0x0004cb85) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x00051769) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x00051769) popup_preview_text_window_t

0xad97,	// (0x0004cc03) scroll_pane_cp11

0x9d48,	// (0x0004bbb4) bg_popup_preview_window_pane_g1

0xac2d,	// (0x0004ca99) bg_popup_preview_window_pane_g2

0xac35,	// (0x0004caa1) bg_popup_preview_window_pane_g3

0xac3d,	// (0x0004caa9) bg_popup_preview_window_pane_g4

0xac45,	// (0x0004cab1) bg_popup_preview_window_pane_g5

0xac4d,	// (0x0004cab9) bg_popup_preview_window_pane_g6

0xac55,	// (0x0004cac1) bg_popup_preview_window_pane_g7

0xac5d,	// (0x0004cac9) bg_popup_preview_window_pane_g8

0x635b,	// (0x000481c7) aid_popup_width_pane

0x7c21,	// (0x00049a8d) popup_midp_note_alarm_window_ParamLimits

0x7c21,	// (0x00049a8d) popup_midp_note_alarm_window

0x0db1,	// (0x00042c1d) data_form_pane_ParamLimits

0x598a,	// (0x000477f6) form_field_data_pane_g1

0x5994,	// (0x00047800) form_field_data_pane_t1_ParamLimits

0x0dbd,	// (0x00042c29) input_focus_pane_ParamLimits

0x59ac,	// (0x00047818) data_form_wide_pane_ParamLimits

0x59bd,	// (0x00047829) form_field_data_wide_pane_g1

0x59c9,	// (0x00047835) form_field_data_wide_pane_t1_ParamLimits

0x0cb1,	// (0x00042b1d) input_focus_pane_cp6_ParamLimits

0x6e10,	// (0x00048c7c) input_popup_find_pane_g1_ParamLimits

0x6e10,	// (0x00048c7c) input_popup_find_pane_g1

0x6fa2,	// (0x00048e0e) aid_navi_side_left_pane

0x6fb7,	// (0x00048e23) aid_navi_side_right_pane

0xa656,	// (0x0004c4c2) bg_popup_window_pane_cp30_ParamLimits

0xa656,	// (0x0004c4c2) bg_popup_window_pane_cp30

0xa6d0,	// (0x0004c53c) popup_midp_note_alarm_window_g1_ParamLimits

0xa6d0,	// (0x0004c53c) popup_midp_note_alarm_window_g1

0xa700,	// (0x0004c56c) popup_midp_note_alarm_window_t1_ParamLimits

0xa700,	// (0x0004c56c) popup_midp_note_alarm_window_t1

0xa7a1,	// (0x0004c60d) popup_midp_note_alarm_window_t2_ParamLimits

0xa7a1,	// (0x0004c60d) popup_midp_note_alarm_window_t2

0xa84f,	// (0x0004c6bb) popup_midp_note_alarm_window_t3_ParamLimits

0xa84f,	// (0x0004c6bb) popup_midp_note_alarm_window_t3

0xa877,	// (0x0004c6e3) popup_midp_note_alarm_window_t4_ParamLimits

0xa877,	// (0x0004c6e3) popup_midp_note_alarm_window_t4

0xa897,	// (0x0004c703) popup_midp_note_alarm_window_t5_ParamLimits

0xa897,	// (0x0004c703) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x00051706) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x00051706) popup_midp_note_alarm_window_t

0xa943,	// (0x0004c7af) wait_bar_pane_cp1_ParamLimits

0xa943,	// (0x0004c7af) wait_bar_pane_cp1

0x09af,	// (0x0004281b) wait_anim_pane_copy1

0x09af,	// (0x0004281b) wait_border_pane_copy1

0xa34c,	// (0x0004c1b8) wait_border_pane_g1_copy1

0x59e3,	// (0x0004784f) form_field_popup_pane_g1

0x59eb,	// (0x00047857) form_field_popup_pane_t1_ParamLimits

0x0dbd,	// (0x00042c29) input_focus_pane_cp7_ParamLimits

0x0deb,	// (0x00042c57) list_form_pane_ParamLimits

0x5a03,	// (0x0004786f) form_field_popup_wide_pane_g1

0x5a0b,	// (0x00047877) form_field_popup_wide_pane_t1_ParamLimits

0x0dbd,	// (0x00042c29) input_focus_pane_cp8_ParamLimits

0x0df7,	// (0x00042c63) list_form_wide_pane_ParamLimits

0xb3eb,	// (0x0004d257) aid_size_cell_graphic_pane

0x5a95,	// (0x00047901) data_form_pane_t1_ParamLimits

0x5d20,	// (0x00047b8c) data_form_wide_pane_t1_ParamLimits

0x9912,	// (0x0004b77e) bg_status_flat_pane

0x675a,	// (0x000485c6) title_pane_t1_ParamLimits

0x09c5,	// (0x00042831) title_pane_t2_ParamLimits

0x09eb,	// (0x00042857) title_pane_t3_ParamLimits

0xf557,	// (0x000513c3) title_pane_t_ParamLimits

0x1185,	// (0x00042ff1) level_1_signal_ParamLimits

0x1192,	// (0x00042ffe) level_2_signal_ParamLimits

0x119f,	// (0x0004300b) level_3_signal_ParamLimits

0x11ac,	// (0x00043018) level_4_signal_ParamLimits

0x11b9,	// (0x00043025) level_5_signal_ParamLimits

0x11c6,	// (0x00043032) level_6_signal_ParamLimits

0x11d3,	// (0x0004303f) level_7_signal_ParamLimits

0x1185,	// (0x00042ff1) level_1_battery_ParamLimits

0x1192,	// (0x00042ffe) level_2_battery_ParamLimits

0x119f,	// (0x0004300b) level_3_battery_ParamLimits

0x11ac,	// (0x00043018) level_4_battery_ParamLimits

0x11b9,	// (0x00043025) level_5_battery_ParamLimits

0x11c6,	// (0x00043032) level_6_battery_ParamLimits

0x11d3,	// (0x0004303f) level_7_battery_ParamLimits

0xa55b,	// (0x0004c3c7) bg_status_flat_pane_g1

0xa563,	// (0x0004c3cf) bg_status_flat_pane_g2

0xa56b,	// (0x0004c3d7) bg_status_flat_pane_g3

0xa573,	// (0x0004c3df) bg_status_flat_pane_g4

0xa57b,	// (0x0004c3e7) bg_status_flat_pane_g5

0xa583,	// (0x0004c3ef) bg_status_flat_pane_g6

0xa58b,	// (0x0004c3f7) bg_status_flat_pane_g7

0x67ca,	// (0x00048636) tabs_3_active_pane_t1_ParamLimits

0x67ca,	// (0x00048636) tabs_3_passive_pane_t1_ParamLimits

0x67e4,	// (0x00048650) tabs_4_active_pane_t1_ParamLimits

0x67e4,	// (0x00048650) tabs_4_1_passive_pane_t1_ParamLimits

0x6e47,	// (0x00048cb3) tabs_2_active_pane_t1_ParamLimits

0x6e47,	// (0x00048cb3) tabs_2_passive_pane_t1_ParamLimits

0x20e5,	// (0x00043f51) bg_active_tab_pane_cp4_ParamLimits

0x6e59,	// (0x00048cc5) tabs_2_long_active_pane_t1_ParamLimits

0x6e6c,	// (0x00048cd8) bg_passive_tab_pane_cp4_ParamLimits

0x7ee8,	// (0x00049d54) list_single_midp_graphic_pane_t1_ParamLimits

0x20e5,	// (0x00043f51) bg_active_tab_pane_cp5_ParamLimits

0x6e78,	// (0x00048ce4) tabs_3_long_active_pane_t1_ParamLimits

0x6e6c,	// (0x00048cd8) bg_passive_tab_pane_cp5_ParamLimits

0x7ee8,	// (0x00049d54) list_single_midp_graphic_pane_t1

0x9912,	// (0x0004b77e) bg_status_flat_pane_ParamLimits

0x99db,	// (0x0004b847) indicator_pane_cp2_ParamLimits

0x99db,	// (0x0004b847) indicator_pane_cp2

0x9b06,	// (0x0004b972) navi_pane_srt_ParamLimits

0x9b06,	// (0x0004b972) navi_pane_srt

0x9b2a,	// (0x0004b996) popup_clock_digital_analogue_window_cp1

0x0a4f,	// (0x000428bb) indicator_pane_t1

0x94f0,	// (0x0004b35c) copy_highlight_pane

0x94f0,	// (0x0004b35c) cursor_graphics_pane

0x94f0,	// (0x0004b35c) graphic_within_text_pane

0x94f0,	// (0x0004b35c) link_highlight_pane

0xad5a,	// (0x0004cbc6) popup_preview_text_window_t5_ParamLimits

0xad5a,	// (0x0004cbc6) popup_preview_text_window_t5

0x9622,	// (0x0004b48e) cursor_digital_pane

0x9622,	// (0x0004b48e) cursor_primary_pane

0x9633,	// (0x0004b49f) cursor_primary_small_pane

0x963b,	// (0x0004b4a7) cursor_secondary_pane

0x9643,	// (0x0004b4af) cursor_title_pane

0x9622,	// (0x0004b48e) link_highlight_digital_pane

0x962a,	// (0x0004b496) link_highlight_primary_pane

0x9633,	// (0x0004b49f) link_highlight_primary_small_pane

0x963b,	// (0x0004b4a7) link_highlight_secondary_pane

0x9643,	// (0x0004b4af) link_highlight_title_pane

0x9622,	// (0x0004b48e) copy_highlight_digital_pane

0x9622,	// (0x0004b48e) copy_highlight_primary_pane

0x9633,	// (0x0004b49f) copy_highlight_primary_small_pane

0x963b,	// (0x0004b4a7) copy_highlight_secondary_pane

0x9643,	// (0x0004b4af) copy_highlight_title_pane

0x963b,	// (0x0004b4a7) graphic_text_digital_pane

0xa5f9,	// (0x0004c465) graphic_text_primary_pane

0xa602,	// (0x0004c46e) graphic_text_primary_small_pane

0x9633,	// (0x0004b49f) graphic_text_secondary_pane

0x9622,	// (0x0004b48e) graphic_text_title_pane

0x964b,	// (0x0004b4b7) cursor_primary_pane_g1

0xa5eb,	// (0x0004c457) cursor_text_primary_t1

0xa5d3,	// (0x0004c43f) cursor_primary_small_pane_g1

0xa5dd,	// (0x0004c449) cursor_text_primary_small_t1

0xa5bb,	// (0x0004c427) cursor_primary_small_pane_g1_copy1

0xa5c5,	// (0x0004c431) cursor_text_primary_small_t1_copy1

0xa5a3,	// (0x0004c40f) cursor_text_title_t1

0xa5b1,	// (0x0004c41d) cursor_title_pane_g1

0x964b,	// (0x0004b4b7) cursor_digital_pane_g1

0x9655,	// (0x0004b4c1) cursor_text_digital_t1

0x9663,	// (0x0004b4cf) link_highlight_primary_pane_g1

0xa54c,	// (0x0004c3b8) link_highlight_primary_pane_t1

0x9663,	// (0x0004b4cf) link_highlight_primary_small_pane_g1

0x966b,	// (0x0004b4d7) link_highlight_primary_small_pane_t1

0x9663,	// (0x0004b4cf) link_highlight_secondary_pane_g1

0x967a,	// (0x0004b4e6) link_highlight_secondary_pane_t1

0xa4b1,	// (0x0004c31d) link_highlight_title_pane_g1

0xa4c8,	// (0x0004c334) link_highlight_title_pane_t1

0xa4b1,	// (0x0004c31d) link_highlight_digital_pane_g1

0xa4b9,	// (0x0004c325) link_highlight_digital_pane_t1

0xa36b,	// (0x0004c1d7) copy_highlight_primary_pane_g1

0xa391,	// (0x0004c1fd) copy_highlight_primary_pane_t1

0xa36b,	// (0x0004c1d7) copy_highlight_primary_small_pane_g1

0xa382,	// (0x0004c1ee) copy_highlight_primary_small_pane_t1

0x9689,	// (0x0004b4f5) copy_highlight_secondary_pane_g1

0x9691,	// (0x0004b4fd) copy_highlight_secondary_pane_t1

0xa36b,	// (0x0004c1d7) copy_highlight_title_pane_g1

0xa373,	// (0x0004c1df) copy_highlight_title_pane_t1

0xa36b,	// (0x0004c1d7) copy_highlight_digital_pane_g1

0xb5b9,	// (0x0004d425) copy_highlight_digital_pane_t1

0xb50d,	// (0x0004d379) graphic_text_primary_pane_g1

0xb59d,	// (0x0004d409) graphic_text_primary_pane_t1

0xb5ab,	// (0x0004d417) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x00051835) graphic_text_primary_pane_t

0xb579,	// (0x0004d3e5) graphic_text_primary_small_pane_g1

0xb581,	// (0x0004d3ed) graphic_text_primary_small_pane_t1

0xb58f,	// (0x0004d3fb) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x00051830) graphic_text_primary_small_pane_t

0xb555,	// (0x0004d3c1) graphic_text_secondary_pane_g1

0xb55d,	// (0x0004d3c9) graphic_text_secondary_pane_t1

0xb56b,	// (0x0004d3d7) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x0005182b) graphic_text_secondary_pane_t

0xb531,	// (0x0004d39d) graphic_text_title_pane_g1

0xb539,	// (0x0004d3a5) graphic_text_title_pane_t1

0xb547,	// (0x0004d3b3) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x00051826) graphic_text_title_pane_t

0xb50d,	// (0x0004d379) graphic_text_digital_pane_g1

0xb515,	// (0x0004d381) graphic_text_digital_pane_t1

0xb523,	// (0x0004d38f) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x00051821) graphic_text_digital_pane_t

0x0a0b,	// (0x00042877) navi_icon_pane_srt_ParamLimits

0x0a0b,	// (0x00042877) navi_icon_pane_srt

0x09af,	// (0x0004281b) navi_midp_pane_srt

0x09af,	// (0x0004281b) navi_navi_pane_srt

0x0a0b,	// (0x00042877) navi_text_pane_srt_ParamLimits

0x0a0b,	// (0x00042877) navi_text_pane_srt

0xb4d8,	// (0x0004d344) navi_navi_icon_text_pane_srt

0xb4e0,	// (0x0004d34c) navi_navi_pane_srt_g1_ParamLimits

0xb4e0,	// (0x0004d34c) navi_navi_pane_srt_g1

0xb4f2,	// (0x0004d35e) navi_navi_pane_srt_g2_ParamLimits

0xb4f2,	// (0x0004d35e) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x0005181c) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x0005181c) navi_navi_pane_srt_g

0xb504,	// (0x0004d370) navi_navi_tabs_pane_srt

0xb4d8,	// (0x0004d344) navi_navi_text_pane_srt

0xb4d8,	// (0x0004d344) navi_navi_volume_pane_srt

0xb4c9,	// (0x0004d335) navi_navi_text_pane_srt_t1

0x831c,	// (0x0004a188) navi_navi_volume_pane_srt_g1

0x8324,	// (0x0004a190) volume_small_pane_srt_ParamLimits

0x8324,	// (0x0004a190) volume_small_pane_srt

0x7695,	// (0x00049501) volume_small_pane_srt_g1_ParamLimits

0x7695,	// (0x00049501) volume_small_pane_srt_g1

0x76a5,	// (0x00049511) volume_small_pane_srt_g2_ParamLimits

0x76a5,	// (0x00049511) volume_small_pane_srt_g2

0x76b6,	// (0x00049522) volume_small_pane_srt_g3_ParamLimits

0x76b6,	// (0x00049522) volume_small_pane_srt_g3

0x76c7,	// (0x00049533) volume_small_pane_srt_g4_ParamLimits

0x76c7,	// (0x00049533) volume_small_pane_srt_g4

0x76d8,	// (0x00049544) volume_small_pane_srt_g5_ParamLimits

0x76d8,	// (0x00049544) volume_small_pane_srt_g5

0x76e9,	// (0x00049555) volume_small_pane_srt_g6_ParamLimits

0x76e9,	// (0x00049555) volume_small_pane_srt_g6

0x76fa,	// (0x00049566) volume_small_pane_srt_g7_ParamLimits

0x76fa,	// (0x00049566) volume_small_pane_srt_g7

0x770b,	// (0x00049577) volume_small_pane_srt_g8_ParamLimits

0x770b,	// (0x00049577) volume_small_pane_srt_g8

0x771c,	// (0x00049588) volume_small_pane_srt_g9_ParamLimits

0x771c,	// (0x00049588) volume_small_pane_srt_g9

0x772d,	// (0x00049599) volume_small_pane_srt_g10_ParamLimits

0x772d,	// (0x00049599) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x000515c4) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x000515c4) volume_small_pane_srt_g

0x6a0b,	// (0x00048877) query_popup_data_pane_cp2

0xb4af,	// (0x0004d31b) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb4af,	// (0x0004d31b) navi_navi_icon_text_pane_srt_t1

0xa5f9,	// (0x0004c465) navi_tabs_2_long_pane_srt

0xa5f9,	// (0x0004c465) navi_tabs_2_pane_srt

0xa5f9,	// (0x0004c465) navi_tabs_3_long_pane_srt

0xa5f9,	// (0x0004c465) navi_tabs_3_pane_srt

0xa5f9,	// (0x0004c465) navi_tabs_4_pane_srt

0x82fc,	// (0x0004a168) tabs_2_active_pane_srt_ParamLimits

0x82fc,	// (0x0004a168) tabs_2_active_pane_srt

0x830c,	// (0x0004a178) tabs_2_passive_pane_srt_ParamLimits

0x830c,	// (0x0004a178) tabs_2_passive_pane_srt

0x983b,	// (0x0004b6a7) bg_passive_tab_pane_cp1_srt_ParamLimits

0x983b,	// (0x0004b6a7) bg_passive_tab_pane_cp1_srt

0xb47b,	// (0x0004d2e7) bg_passive_tab_pane_g1_cp1_srt

0x7325,	// (0x00049191) bg_passive_tab_pane_g2_cp1_srt

0xb484,	// (0x0004d2f0) bg_passive_tab_pane_g3_cp1_srt

0x0a0b,	// (0x00042877) bg_active_tab_pane_cp1_srt_ParamLimits

0x0a0b,	// (0x00042877) bg_active_tab_pane_cp1_srt

0xb48d,	// (0x0004d2f9) tabs_2_active_pane_srt_g1

0xb495,	// (0x0004d301) tabs_2_active_pane_srt_t1_ParamLimits

0xb495,	// (0x0004d301) tabs_2_active_pane_srt_t1

0xb47b,	// (0x0004d2e7) bg_active_tab_pane_g1_cp1_srt

0x7325,	// (0x00049191) bg_active_tab_pane_g2_cp1_srt

0xb484,	// (0x0004d2f0) bg_active_tab_pane_g3_cp1_srt

0x82c9,	// (0x0004a135) tabs_3_active_pane_srt_ParamLimits

0x82c9,	// (0x0004a135) tabs_3_active_pane_srt

0x82da,	// (0x0004a146) tabs_3_passive_pane_cp_srt_ParamLimits

0x82da,	// (0x0004a146) tabs_3_passive_pane_cp_srt

0x82eb,	// (0x0004a157) tabs_3_passive_pane_srt_ParamLimits

0x82eb,	// (0x0004a157) tabs_3_passive_pane_srt

0x983b,	// (0x0004b6a7) bg_passive_tab_pane_cp2_srt_ParamLimits

0x983b,	// (0x0004b6a7) bg_passive_tab_pane_cp2_srt

0x96a0,	// (0x0004b50c) bg_passive_tab_pane_g1_cp2_srt

0x7325,	// (0x00049191) bg_passive_tab_pane_g2_cp2_srt

0x96a9,	// (0x0004b515) bg_passive_tab_pane_g3_cp2_srt

0x0a0b,	// (0x00042877) bg_active_tab_pane_cp2_srt_ParamLimits

0x0a0b,	// (0x00042877) bg_active_tab_pane_cp2_srt

0xb461,	// (0x0004d2cd) tabs_3_active_pane_srt_g1

0xb469,	// (0x0004d2d5) tabs_3_active_pane_srt_t1_ParamLimits

0xb469,	// (0x0004d2d5) tabs_3_active_pane_srt_t1

0x96a0,	// (0x0004b50c) bg_active_tab_pane_g1_cp2_srt

0x7325,	// (0x00049191) bg_active_tab_pane_g2_cp2_srt

0x96a9,	// (0x0004b515) bg_active_tab_pane_g3_cp2_srt

0x8281,	// (0x0004a0ed) tabs_4_active_pane_srt_ParamLimits

0x8281,	// (0x0004a0ed) tabs_4_active_pane_srt

0x8293,	// (0x0004a0ff) tabs_4_passive_pane_cp2_srt_ParamLimits

0x8293,	// (0x0004a0ff) tabs_4_passive_pane_cp2_srt

0x789c,	// (0x00049708) aid_size_cell_toolbar

0x6e6c,	// (0x00048cd8) main_idle_act_pane_ParamLimits

0x7a53,	// (0x000498bf) popup_large_graphic_colour_window_ParamLimits

0x7dbe,	// (0x00049c2a) popup_toolbar_window_ParamLimits

0x7dbe,	// (0x00049c2a) popup_toolbar_window

0xb2ab,	// (0x0004d117) list_single_graphic_2heading_pane_ParamLimits

0xb2ab,	// (0x0004d117) list_single_graphic_2heading_pane

0x106d,	// (0x00042ed9) aid_size_cell_apps_grid_lsc_pane

0x107f,	// (0x00042eeb) aid_size_cell_apps_grid_prt_pane

0x983b,	// (0x0004b6a7) bg_wml_button_pane_cp1_ParamLimits

0x983b,	// (0x0004b6a7) bg_wml_button_pane_cp1

0x9ff2,	// (0x0004be5e) form_midp_field_text_pane_t1_ParamLimits

0x9dbc,	// (0x0004bc28) input_focus_pane_cp050_ParamLimits

0xa02c,	// (0x0004be98) list_midp_form_text_pane_ParamLimits

0x9fcf,	// (0x0004be3b) input_focus_pane_cp051_ParamLimits

0x9fe3,	// (0x0004be4f) list_midp_choice_pane_ParamLimits

0x9e72,	// (0x0004bcde) list_single_2graphic_pane_cp3_ParamLimits

0x9e72,	// (0x0004bcde) list_single_2graphic_pane_cp3

0x9e97,	// (0x0004bd03) list_single_midp_graphic_pane_ParamLimits

0x9e97,	// (0x0004bd03) list_single_midp_graphic_pane

0x5bb3,	// (0x00047a1f) list_single_graphic_2heading_pane_g1_ParamLimits

0x5bb3,	// (0x00047a1f) list_single_graphic_2heading_pane_g1

0x5bbf,	// (0x00047a2b) list_single_graphic_2heading_pane_g4_ParamLimits

0x5bbf,	// (0x00047a2b) list_single_graphic_2heading_pane_g4

0x5bcb,	// (0x00047a37) list_single_graphic_2heading_pane_g5_ParamLimits

0x5bcb,	// (0x00047a37) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x00051617) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x00051617) list_single_graphic_2heading_pane_g

0x5bd7,	// (0x00047a43) list_single_graphic_2heading_pane_t1_ParamLimits

0x5bd7,	// (0x00047a43) list_single_graphic_2heading_pane_t1

0x5beb,	// (0x00047a57) list_single_graphic_2heading_pane_t2_ParamLimits

0x5beb,	// (0x00047a57) list_single_graphic_2heading_pane_t2

0x5c05,	// (0x00047a71) list_single_graphic_2heading_pane_t3_ParamLimits

0x5c05,	// (0x00047a71) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x0005161e) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x0005161e) list_single_graphic_2heading_pane_t

0x9c86,	// (0x0004baf2) bg_popup_sub_pane_cp2

0x9cb0,	// (0x0004bb1c) grid_toobar_pane

0x7e6b,	// (0x00049cd7) cell_toolbar_pane_ParamLimits

0x7e6b,	// (0x00049cd7) cell_toolbar_pane

0x9cec,	// (0x0004bb58) cell_toolbar_pane_g1_ParamLimits

0x9cec,	// (0x0004bb58) cell_toolbar_pane_g1

0x9d00,	// (0x0004bb6c) cell_toolbar_pane_g2_ParamLimits

0x9d00,	// (0x0004bb6c) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x0005162c) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x0005162c) cell_toolbar_pane_g

0x9d22,	// (0x0004bb8e) grid_highlight_pane_cp2_ParamLimits

0x9d22,	// (0x0004bb8e) grid_highlight_pane_cp2

0x9d3c,	// (0x0004bba8) toolbar_button_pane

0x9d48,	// (0x0004bbb4) toolbar_button_pane_g1

0x9d50,	// (0x0004bbbc) toolbar_button_pane_g2

0x9d58,	// (0x0004bbc4) toolbar_button_pane_g3

0x9d60,	// (0x0004bbcc) toolbar_button_pane_g4

0x9d68,	// (0x0004bbd4) toolbar_button_pane_g5

0x9d70,	// (0x0004bbdc) toolbar_button_pane_g6

0x9d78,	// (0x0004bbe4) toolbar_button_pane_g7

0x9d80,	// (0x0004bbec) toolbar_button_pane_g8

0x9d88,	// (0x0004bbf4) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x00051631) toolbar_button_pane_g

0x7ea3,	// (0x00049d0f) list_single_2graphic_pane_g1_cp3_ParamLimits

0x7ea3,	// (0x00049d0f) list_single_2graphic_pane_g1_cp3

0x7eaf,	// (0x00049d1b) list_single_2graphic_pane_g2_cp3_ParamLimits

0x7eaf,	// (0x00049d1b) list_single_2graphic_pane_g2_cp3

0x7580,	// (0x000493ec) list_single_2graphic_pane_g3_cp3

0x7ec0,	// (0x00049d2c) list_single_2graphic_pane_g4_cp3_ParamLimits

0x7ec0,	// (0x00049d2c) list_single_2graphic_pane_g4_cp3

0x7ecc,	// (0x00049d38) list_single_2graphic_pane_t1_cp3_ParamLimits

0x7ecc,	// (0x00049d38) list_single_2graphic_pane_t1_cp3

0x12a7,	// (0x00043113) list_single_midp_graphic_pane_g2_ParamLimits

0x12a7,	// (0x00043113) list_single_midp_graphic_pane_g2

0x5ba3,	// (0x00047a0f) aid_zoom_text_primary

0x78a4,	// (0x00049710) aid_zoom_text_secondary

0x975a,	// (0x0004b5c6) status_small_pane_g7_ParamLimits

0x975a,	// (0x0004b5c6) status_small_pane_g7

0x977d,	// (0x0004b5e9) status_small_pane_t1_ParamLimits

0x673d,	// (0x000485a9) title_pane_g2

0x0003,

0xf54e,	// (0x000513ba) title_pane_g

0x6a65,	// (0x000488d1) aid_size_cell_colour_1_pane_ParamLimits

0x6a65,	// (0x000488d1) aid_size_cell_colour_1_pane

0x6a79,	// (0x000488e5) aid_size_cell_colour_2_pane_ParamLimits

0x6a79,	// (0x000488e5) aid_size_cell_colour_2_pane

0x6a8d,	// (0x000488f9) aid_size_cell_colour_3_pane_ParamLimits

0x6a8d,	// (0x000488f9) aid_size_cell_colour_3_pane

0x6aa1,	// (0x0004890d) aid_size_cell_colour_4_pane_ParamLimits

0x6aa1,	// (0x0004890d) aid_size_cell_colour_4_pane

0x6edf,	// (0x00048d4b) title_pane_stacon_g1_ParamLimits

0x6edf,	// (0x00048d4b) title_pane_stacon_g1

0xa3e8,	// (0x0004c254) popup_note_wait_window_g3_ParamLimits

0xa3e8,	// (0x0004c254) popup_note_wait_window_g3

0xa45e,	// (0x0004c2ca) popup_note_wait_window_t5_ParamLimits

0xa45e,	// (0x0004c2ca) popup_note_wait_window_t5

0x09af,	// (0x0004281b) main_feb_china_hwr_fs_writing_pane

0x793a,	// (0x000497a6) popup_feb_china_hwr_fs_window_ParamLimits

0x793a,	// (0x000497a6) popup_feb_china_hwr_fs_window

0x7f16,	// (0x00049d82) aid_size_cell_hwr_fs_ParamLimits

0x7f16,	// (0x00049d82) aid_size_cell_hwr_fs

0x9dbc,	// (0x0004bc28) bg_popup_sub_pane_cp3_ParamLimits

0x9dbc,	// (0x0004bc28) bg_popup_sub_pane_cp3

0x7f2b,	// (0x00049d97) grid_hwr_fs_pane_ParamLimits

0x7f2b,	// (0x00049d97) grid_hwr_fs_pane

0x7f43,	// (0x00049daf) linegrid_hwr_fs_pane_ParamLimits

0x7f43,	// (0x00049daf) linegrid_hwr_fs_pane

0x7f53,	// (0x00049dbf) cell_hwr_fs_pane_ParamLimits

0x7f53,	// (0x00049dbf) cell_hwr_fs_pane

0x9dc8,	// (0x0004bc34) linegrid_hwr_fs_pane_g1_ParamLimits

0x9dc8,	// (0x0004bc34) linegrid_hwr_fs_pane_g1

0x9dd4,	// (0x0004bc40) linegrid_hwr_fs_pane_g2_ParamLimits

0x9dd4,	// (0x0004bc40) linegrid_hwr_fs_pane_g2

0x9de6,	// (0x0004bc52) linegrid_hwr_fs_pane_g3_ParamLimits

0x9de6,	// (0x0004bc52) linegrid_hwr_fs_pane_g3

0x7f75,	// (0x00049de1) linegrid_hwr_fs_pane_g4_ParamLimits

0x7f75,	// (0x00049de1) linegrid_hwr_fs_pane_g4

0x7f8f,	// (0x00049dfb) linegrid_hwr_fs_pane_g5_ParamLimits

0x7f8f,	// (0x00049dfb) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x0005165c) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x0005165c) linegrid_hwr_fs_pane_g

0x9df2,	// (0x0004bc5e) cell_hwr_fs_pane_g1_ParamLimits

0x9df2,	// (0x0004bc5e) cell_hwr_fs_pane_g1

0x9bc0,	// (0x0004ba2c) cell_hwr_fs_pane_g2_ParamLimits

0x9bc0,	// (0x0004ba2c) cell_hwr_fs_pane_g2

0x9e08,	// (0x0004bc74) cell_hwr_fs_pane_g3_ParamLimits

0x9e08,	// (0x0004bc74) cell_hwr_fs_pane_g3

0x9e15,	// (0x0004bc81) cell_hwr_fs_pane_g4_ParamLimits

0x9e15,	// (0x0004bc81) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x00051667) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x00051667) cell_hwr_fs_pane_g

0x7fa5,	// (0x00049e11) cell_hwr_fs_pane_t1

0x09af,	// (0x0004281b) grid_highlight_pane_cp6

0x09af,	// (0x0004281b) main_idle_act2_pane

0x0ec3,	// (0x00042d2f) aid_inside_area_popup_secondary

0xaa7d,	// (0x0004c8e9) aid_inside_area_window_primary_ParamLimits

0xaa7d,	// (0x0004c8e9) aid_inside_area_window_primary

0xb5c8,	// (0x0004d434) ai2_news_ticker_pane

0xb5d0,	// (0x0004d43c) aid_size_cell_ai1_link_ParamLimits

0xb5d0,	// (0x0004d43c) aid_size_cell_ai1_link

0xb5ea,	// (0x0004d456) popup_ai2_data_window_ParamLimits

0xb5ea,	// (0x0004d456) popup_ai2_data_window

0xb600,	// (0x0004d46c) popup_ai2_link_window_ParamLimits

0xb600,	// (0x0004d46c) popup_ai2_link_window

0x9dbc,	// (0x0004bc28) bg_popup_sub_pane_cp4_ParamLimits

0x9dbc,	// (0x0004bc28) bg_popup_sub_pane_cp4

0xb614,	// (0x0004d480) grid_ai2_link_pane_ParamLimits

0xb614,	// (0x0004d480) grid_ai2_link_pane

0xb62b,	// (0x0004d497) popup_ai2_link_window_g1_ParamLimits

0xb62b,	// (0x0004d497) popup_ai2_link_window_g1

0xb637,	// (0x0004d4a3) popup_ai2_link_window_g2_ParamLimits

0xb637,	// (0x0004d4a3) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x0005183a) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x0005183a) popup_ai2_link_window_g

0xb646,	// (0x0004d4b2) ai2_mp_button_pane

0xb64e,	// (0x0004d4ba) ai2_mp_volume_pane

0x9fcf,	// (0x0004be3b) bg_popup_sub_pane_cp5_ParamLimits

0x9fcf,	// (0x0004be3b) bg_popup_sub_pane_cp5

0xb656,	// (0x0004d4c2) heading_ai2_gene_pane_ParamLimits

0xb656,	// (0x0004d4c2) heading_ai2_gene_pane

0xb662,	// (0x0004d4ce) list_ai2_gene_pane_ParamLimits

0xb662,	// (0x0004d4ce) list_ai2_gene_pane

0xb6aa,	// (0x0004d516) cell_ai2_link_pane_ParamLimits

0xb6aa,	// (0x0004d516) cell_ai2_link_pane

0xb6c0,	// (0x0004d52c) cell_ai2_link_pane_g1

0x09af,	// (0x0004281b) grid_highlight_pane_cp7

0x8339,	// (0x0004a1a5) ai2_mp_volume_pane_g1

0xb790,	// (0x0004d5fc) ai2_mp_volume_pane_g2

0xb705,	// (0x0004d571) list_ai2_gene_pane_t1

0xb798,	// (0x0004d604) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x00051853) ai2_mp_volume_pane_g

0x8341,	// (0x0004a1ad) volume_small_pane_cp3

0xb7a0,	// (0x0004d60c) aid_size_cell_ai2_button

0xb7a8,	// (0x0004d614) grid_ai2_button_pane

0xb7b1,	// (0x0004d61d) cell_ai2_button_pane_ParamLimits

0xb7b1,	// (0x0004d61d) cell_ai2_button_pane

0x09a5,	// (0x00042811) cell_ai2_button_pane_g1

0x09af,	// (0x0004281b) grid_highlight_pane_cp8

0xb750,	// (0x0004d5bc) ai2_gene_pane_t1_ParamLimits

0xb750,	// (0x0004d5bc) ai2_gene_pane_t1

0x7892,	// (0x000496fe) aid_height_parent_landscape

0xb0e6,	// (0x0004cf52) aid_height_set_list

0xb0f7,	// (0x0004cf63) aid_size_parent

0xb3eb,	// (0x0004d257) aid_size_cell_graphic_pane_ParamLimits

0xb672,	// (0x0004d4de) popup_ai2_data_window_g1_ParamLimits

0xb672,	// (0x0004d4de) popup_ai2_data_window_g1

0xb67e,	// (0x0004d4ea) ai2_news_ticker_pane_g1

0xb686,	// (0x0004d4f2) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x0005183f) ai2_news_ticker_pane_g

0xb68e,	// (0x0004d4fa) ai2_news_ticker_pane_t1

0xb69c,	// (0x0004d508) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x00051844) ai2_news_ticker_pane_t

0xb6c9,	// (0x0004d535) heading_ai2_gene_pane_g1

0xb6d1,	// (0x0004d53d) heading_ai2_gene_pane_t1_ParamLimits

0xb6d1,	// (0x0004d53d) heading_ai2_gene_pane_t1

0xb6e6,	// (0x0004d552) list_highlight_pane_cp6

0xb6ee,	// (0x0004d55a) ai2_gene_pane_ParamLimits

0xb6ee,	// (0x0004d55a) ai2_gene_pane

0xb713,	// (0x0004d57f) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x00051849) list_ai2_gene_pane_t

0xb721,	// (0x0004d58d) list_highlight_pane_cp8_ParamLimits

0xb721,	// (0x0004d58d) list_highlight_pane_cp8

0xb732,	// (0x0004d59e) ai2_gene_pane_g1_ParamLimits

0xb732,	// (0x0004d59e) ai2_gene_pane_g1

0xb744,	// (0x0004d5b0) ai2_gene_pane_g2_ParamLimits

0xb744,	// (0x0004d5b0) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x0005184e) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x0005184e) ai2_gene_pane_g

0x0d5c,	// (0x00042bc8) scroll_pane_cp12

0x784f,	// (0x000496bb) control_pane_t3_ParamLimits

0x784f,	// (0x000496bb) control_pane_t3

0x976e,	// (0x0004b5da) status_small_pane_g8_ParamLimits

0x976e,	// (0x0004b5da) status_small_pane_g8

0x7a1c,	// (0x00049888) popup_find_window_ParamLimits

0x7c35,	// (0x00049aa1) popup_note_image_window_ParamLimits

0x5c1d,	// (0x00047a89) list_double2_graphic_pane_vc_g1_ParamLimits

0x5c1d,	// (0x00047a89) list_double2_graphic_pane_vc_g1

0x6d38,	// (0x00048ba4) list_double2_graphic_pane_vc_g2_ParamLimits

0x6d38,	// (0x00048ba4) list_double2_graphic_pane_vc_g2

0x6d44,	// (0x00048bb0) list_double2_graphic_pane_vc_g3_ParamLimits

0x6d44,	// (0x00048bb0) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x00051625) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x00051625) list_double2_graphic_pane_vc_g

0x5c29,	// (0x00047a95) list_double2_graphic_pane_vc_t1_ParamLimits

0x5c29,	// (0x00047a95) list_double2_graphic_pane_vc_t1

0x6d38,	// (0x00048ba4) list_single_heading_pane_vc_g1_ParamLimits

0x6d38,	// (0x00048ba4) list_single_heading_pane_vc_g1

0x6d44,	// (0x00048bb0) list_single_heading_pane_vc_g2_ParamLimits

0x6d44,	// (0x00048bb0) list_single_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x00051646) list_single_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x00051646) list_single_heading_pane_vc_g

0x5c3f,	// (0x00047aab) list_single_heading_pane_vc_t1_ParamLimits

0x5c3f,	// (0x00047aab) list_single_heading_pane_vc_t1

0x5c55,	// (0x00047ac1) list_single_heading_pane_vc_t2_ParamLimits

0x5c55,	// (0x00047ac1) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x0005164b) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x0005164b) list_single_heading_pane_vc_t

0x7efe,	// (0x00049d6a) list_setting_number_pane_vc_g1_ParamLimits

0x7efe,	// (0x00049d6a) list_setting_number_pane_vc_g1

0x7f0a,	// (0x00049d76) list_setting_number_pane_vc_g2_ParamLimits

0x7f0a,	// (0x00049d76) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x00051650) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x00051650) list_setting_number_pane_vc_g

0x5c67,	// (0x00047ad3) list_setting_number_pane_vc_t1_ParamLimits

0x5c67,	// (0x00047ad3) list_setting_number_pane_vc_t1

0x5c7b,	// (0x00047ae7) list_setting_number_pane_vc_t2_ParamLimits

0x5c7b,	// (0x00047ae7) list_setting_number_pane_vc_t2

0x5c97,	// (0x00047b03) list_setting_number_pane_vc_t3_ParamLimits

0x5c97,	// (0x00047b03) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x00051655) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x00051655) list_setting_number_pane_vc_t

0x5cc1,	// (0x00047b2d) set_value_pane_vc_ParamLimits

0x5cc1,	// (0x00047b2d) set_value_pane_vc

0xb2ab,	// (0x0004d117) list_double2_graphic_pane_vc_ParamLimits

0xb2ab,	// (0x0004d117) list_double2_graphic_pane_vc

0xb2ab,	// (0x0004d117) list_double2_large_graphic_pane_vc_ParamLimits

0xb2ab,	// (0x0004d117) list_double2_large_graphic_pane_vc

0xb2ab,	// (0x0004d117) list_double2_pane_vc_ParamLimits

0xb2ab,	// (0x0004d117) list_double2_pane_vc

0xb2ab,	// (0x0004d117) list_double_graphic_heading_pane_vc_ParamLimits

0xb2ab,	// (0x0004d117) list_double_graphic_heading_pane_vc

0xb2ab,	// (0x0004d117) list_double_graphic_pane_vc_ParamLimits

0xb2ab,	// (0x0004d117) list_double_graphic_pane_vc

0xb2ab,	// (0x0004d117) list_double_heading_pane_vc_ParamLimits

0xb2ab,	// (0x0004d117) list_double_heading_pane_vc

0xb2bd,	// (0x0004d129) list_double_large_graphic_pane_vc_ParamLimits

0xb2bd,	// (0x0004d129) list_double_large_graphic_pane_vc

0xb2ab,	// (0x0004d117) list_double_number_pane_vc_ParamLimits

0xb2ab,	// (0x0004d117) list_double_number_pane_vc

0xb2ab,	// (0x0004d117) list_double_pane_vc_ParamLimits

0xb2ab,	// (0x0004d117) list_double_pane_vc

0xb2ab,	// (0x0004d117) list_double_time_pane_vc_ParamLimits

0xb2ab,	// (0x0004d117) list_double_time_pane_vc

0xb2ab,	// (0x0004d117) list_setting_number_pane_vc_ParamLimits

0xb2ab,	// (0x0004d117) list_setting_number_pane_vc

0xb2ab,	// (0x0004d117) list_setting_pane_vc_ParamLimits

0xb2ab,	// (0x0004d117) list_setting_pane_vc

0xb2ab,	// (0x0004d117) list_single_graphic_heading_pane_vc_ParamLimits

0xb2ab,	// (0x0004d117) list_single_graphic_heading_pane_vc

0xb2ab,	// (0x0004d117) list_single_heading_pane_vc_ParamLimits

0xb2ab,	// (0x0004d117) list_single_heading_pane_vc

0x81e5,	// (0x0004a051) list_single_number_heading_pane_vc_ParamLimits

0x81e5,	// (0x0004a051) list_single_number_heading_pane_vc

0x5d9f,	// (0x00047c0b) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5d9f,	// (0x00047c0b) list_double_graphic_heading_pane_vc_g1

0x6d38,	// (0x00048ba4) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x6d38,	// (0x00048ba4) list_double_graphic_heading_pane_vc_g2

0x6d44,	// (0x00048bb0) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x6d44,	// (0x00048bb0) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ee,	// (0x0005185a) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x0005185a) list_double_graphic_heading_pane_vc_g

0x5dab,	// (0x00047c17) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5dab,	// (0x00047c17) list_double_graphic_heading_pane_vc_t1

0x5dbf,	// (0x00047c2b) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5dbf,	// (0x00047c2b) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f5,	// (0x00051861) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f5,	// (0x00051861) list_double_graphic_heading_pane_vc_t

0x7efe,	// (0x00049d6a) list_setting_pane_vc_g1_ParamLimits

0x7efe,	// (0x00049d6a) list_setting_pane_vc_g1

0x7f0a,	// (0x00049d76) list_setting_pane_vc_g2_ParamLimits

0x7f0a,	// (0x00049d76) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x00051650) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x00051650) list_setting_pane_vc_g

0x5dd7,	// (0x00047c43) list_setting_pane_vc_t1_ParamLimits

0x5dd7,	// (0x00047c43) list_setting_pane_vc_t1

0x5df3,	// (0x00047c5f) list_setting_pane_vc_t2_ParamLimits

0x5df3,	// (0x00047c5f) list_setting_pane_vc_t2

0x0001,

0xfa38,	// (0x000518a4) list_setting_pane_vc_t_ParamLimits

0xfa38,	// (0x000518a4) list_setting_pane_vc_t

0x5cc1,	// (0x00047b2d) set_value_pane_cp_vc_ParamLimits

0x5cc1,	// (0x00047b2d) set_value_pane_cp_vc

0x6d38,	// (0x00048ba4) list_single_number_heading_pane_vc_g1_ParamLimits

0x6d38,	// (0x00048ba4) list_single_number_heading_pane_vc_g1

0x6d44,	// (0x00048bb0) list_single_number_heading_pane_vc_g2_ParamLimits

0x6d44,	// (0x00048bb0) list_single_number_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x00051646) list_single_number_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x00051646) list_single_number_heading_pane_vc_g

0x5e0d,	// (0x00047c79) list_single_number_heading_pane_vc_t1_ParamLimits

0x5e0d,	// (0x00047c79) list_single_number_heading_pane_vc_t1

0x5e23,	// (0x00047c8f) list_single_number_heading_pane_vc_t2_ParamLimits

0x5e23,	// (0x00047c8f) list_single_number_heading_pane_vc_t2

0x5e35,	// (0x00047ca1) list_single_number_heading_pane_vc_t3_ParamLimits

0x5e35,	// (0x00047ca1) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3d,	// (0x000518a9) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3d,	// (0x000518a9) list_single_number_heading_pane_vc_t

0x5e47,	// (0x00047cb3) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5e47,	// (0x00047cb3) list_single_graphic_heading_pane_vc_g1

0x6d38,	// (0x00048ba4) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x6d38,	// (0x00048ba4) list_single_graphic_heading_pane_vc_g4

0x6d44,	// (0x00048bb0) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x6d44,	// (0x00048bb0) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa44,	// (0x000518b0) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa44,	// (0x000518b0) list_single_graphic_heading_pane_vc_g

0x5c3f,	// (0x00047aab) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5c3f,	// (0x00047aab) list_single_graphic_heading_pane_vc_t1

0x5e53,	// (0x00047cbf) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5e53,	// (0x00047cbf) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa4b,	// (0x000518b7) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa4b,	// (0x000518b7) list_single_graphic_heading_pane_vc_t

0x6d38,	// (0x00048ba4) list_double2_pane_vc_g1_ParamLimits

0x6d38,	// (0x00048ba4) list_double2_pane_vc_g1

0x6d44,	// (0x00048bb0) list_double2_pane_vc_g2_ParamLimits

0x6d44,	// (0x00048bb0) list_double2_pane_vc_g2

0x0001,

0xf7da,	// (0x00051646) list_double2_pane_vc_g_ParamLimits

0xf7da,	// (0x00051646) list_double2_pane_vc_g

0x5e65,	// (0x00047cd1) list_double2_pane_vc_t1_ParamLimits

0x5e65,	// (0x00047cd1) list_double2_pane_vc_t1

0x839b,	// (0x0004a207) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x839b,	// (0x0004a207) list_double2_large_graphic_pane_vc_g1

0x6d38,	// (0x00048ba4) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x6d38,	// (0x00048ba4) list_double2_large_graphic_pane_vc_g2

0x6d44,	// (0x00048bb0) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x6d44,	// (0x00048bb0) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa50,	// (0x000518bc) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa50,	// (0x000518bc) list_double2_large_graphic_pane_vc_g

0x5c29,	// (0x00047a95) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5c29,	// (0x00047a95) list_double2_large_graphic_pane_vc_t1

0x83a7,	// (0x0004a213) list_double_time_pane_vc_g1_ParamLimits

0x83a7,	// (0x0004a213) list_double_time_pane_vc_g1

0x83b3,	// (0x0004a21f) list_double_time_pane_vc_g2_ParamLimits

0x83b3,	// (0x0004a21f) list_double_time_pane_vc_g2

0x0001,

0xfa57,	// (0x000518c3) list_double_time_pane_vc_g_ParamLimits

0xfa57,	// (0x000518c3) list_double_time_pane_vc_g

0x5e7d,	// (0x00047ce9) list_double_time_pane_vc_t1_ParamLimits

0x5e7d,	// (0x00047ce9) list_double_time_pane_vc_t1

0x5ea1,	// (0x00047d0d) list_double_time_pane_vc_t2_ParamLimits

0x5ea1,	// (0x00047d0d) list_double_time_pane_vc_t2

0x5ef0,	// (0x00047d5c) list_double_time_pane_vc_t3_ParamLimits

0x5ef0,	// (0x00047d5c) list_double_time_pane_vc_t3

0x5f02,	// (0x00047d6e) list_double_time_pane_vc_t4_ParamLimits

0x5f02,	// (0x00047d6e) list_double_time_pane_vc_t4

0x0003,

0xfa5c,	// (0x000518c8) list_double_time_pane_vc_t_ParamLimits

0xfa5c,	// (0x000518c8) list_double_time_pane_vc_t

0x6d38,	// (0x00048ba4) list_double_pane_vc_g1_ParamLimits

0x6d38,	// (0x00048ba4) list_double_pane_vc_g1

0x6d44,	// (0x00048bb0) list_double_pane_vc_g2_ParamLimits

0x6d44,	// (0x00048bb0) list_double_pane_vc_g2

0x0001,

0xf7da,	// (0x00051646) list_double_pane_vc_g_ParamLimits

0xf7da,	// (0x00051646) list_double_pane_vc_g

0x5f16,	// (0x00047d82) list_double_pane_vc_t1_ParamLimits

0x5f16,	// (0x00047d82) list_double_pane_vc_t1

0x5f2a,	// (0x00047d96) list_double_pane_vc_t2_ParamLimits

0x5f2a,	// (0x00047d96) list_double_pane_vc_t2

0x0001,

0xfa65,	// (0x000518d1) list_double_pane_vc_t_ParamLimits

0xfa65,	// (0x000518d1) list_double_pane_vc_t

0x6d38,	// (0x00048ba4) list_double_number_pane_vc_g1_ParamLimits

0x6d38,	// (0x00048ba4) list_double_number_pane_vc_g1

0x6d44,	// (0x00048bb0) list_double_number_pane_vc_g2_ParamLimits

0x6d44,	// (0x00048bb0) list_double_number_pane_vc_g2

0x0001,

0xf7da,	// (0x00051646) list_double_number_pane_vc_g_ParamLimits

0xf7da,	// (0x00051646) list_double_number_pane_vc_g

0x5f42,	// (0x00047dae) list_double_number_pane_vc_t1_ParamLimits

0x5f42,	// (0x00047dae) list_double_number_pane_vc_t1

0x5f16,	// (0x00047d82) list_double_number_pane_vc_t2_ParamLimits

0x5f16,	// (0x00047d82) list_double_number_pane_vc_t2

0x5f54,	// (0x00047dc0) list_double_number_pane_vc_t3_ParamLimits

0x5f54,	// (0x00047dc0) list_double_number_pane_vc_t3

0x0002,

0xfa6a,	// (0x000518d6) list_double_number_pane_vc_t_ParamLimits

0xfa6a,	// (0x000518d6) list_double_number_pane_vc_t

0x83bf,	// (0x0004a22b) list_double_large_graphic_pane_vc_g1_ParamLimits

0x83bf,	// (0x0004a22b) list_double_large_graphic_pane_vc_g1

0x83e1,	// (0x0004a24d) list_double_large_graphic_pane_vc_g2_ParamLimits

0x83e1,	// (0x0004a24d) list_double_large_graphic_pane_vc_g2

0x83f5,	// (0x0004a261) list_double_large_graphic_pane_vc_g3_ParamLimits

0x83f5,	// (0x0004a261) list_double_large_graphic_pane_vc_g3

0x5f6c,	// (0x00047dd8) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5f6c,	// (0x00047dd8) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa71,	// (0x000518dd) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa71,	// (0x000518dd) list_double_large_graphic_pane_vc_g

0x5f78,	// (0x00047de4) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5f78,	// (0x00047de4) list_double_large_graphic_pane_vc_t1

0x5f94,	// (0x00047e00) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5f94,	// (0x00047e00) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa7a,	// (0x000518e6) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa7a,	// (0x000518e6) list_double_large_graphic_pane_vc_t

0x6d38,	// (0x00048ba4) list_double_heading_pane_vc_g1_ParamLimits

0x6d38,	// (0x00048ba4) list_double_heading_pane_vc_g1

0x6d44,	// (0x00048bb0) list_double_heading_pane_vc_g2_ParamLimits

0x6d44,	// (0x00048bb0) list_double_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x00051646) list_double_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x00051646) list_double_heading_pane_vc_g

0x5fb6,	// (0x00047e22) list_double_heading_pane_vc_t1_ParamLimits

0x5fb6,	// (0x00047e22) list_double_heading_pane_vc_t1

0x5fca,	// (0x00047e36) list_double_heading_pane_vc_t2_ParamLimits

0x5fca,	// (0x00047e36) list_double_heading_pane_vc_t2

0x0001,

0xfa7f,	// (0x000518eb) list_double_heading_pane_vc_t_ParamLimits

0xfa7f,	// (0x000518eb) list_double_heading_pane_vc_t

0x5fe2,	// (0x00047e4e) list_double_graphic_pane_vc_g1_ParamLimits

0x5fe2,	// (0x00047e4e) list_double_graphic_pane_vc_g1

0x8404,	// (0x0004a270) list_double_graphic_pane_vc_g2_ParamLimits

0x8404,	// (0x0004a270) list_double_graphic_pane_vc_g2

0x6d38,	// (0x00048ba4) list_double_graphic_pane_vc_g3_ParamLimits

0x6d38,	// (0x00048ba4) list_double_graphic_pane_vc_g3

0x0003,

0xfa84,	// (0x000518f0) list_double_graphic_pane_vc_g_ParamLimits

0xfa84,	// (0x000518f0) list_double_graphic_pane_vc_g

0x5ff5,	// (0x00047e61) list_double_graphic_pane_vc_t1_ParamLimits

0x5ff5,	// (0x00047e61) list_double_graphic_pane_vc_t1

0x6014,	// (0x00047e80) list_double_graphic_pane_vc_t2_ParamLimits

0x6014,	// (0x00047e80) list_double_graphic_pane_vc_t2

0x0001,

0xfa8d,	// (0x000518f9) list_double_graphic_pane_vc_t_ParamLimits

0xfa8d,	// (0x000518f9) list_double_graphic_pane_vc_t

0x6367,	// (0x000481d3) aid_size_cell_fastswap

0x636f,	// (0x000481db) aid_size_cell_touch_ParamLimits

0x636f,	// (0x000481db) aid_size_cell_touch

0x65ca,	// (0x00048436) popup_fast_swap_wide_window_ParamLimits

0x65ca,	// (0x00048436) popup_fast_swap_wide_window

0x66d0,	// (0x0004853c) touch_pane_ParamLimits

0x66d0,	// (0x0004853c) touch_pane

0x0da9,	// (0x00042c15) button_value_adjust_pane_cp2

0x58da,	// (0x00047746) button_value_adjust_pane_cp4

0x58fc,	// (0x00047768) form_field_data_pane_cp2

0x591d,	// (0x00047789) form_field_data_wide_pane_cp2

0x10a4,	// (0x00042f10) bg_scroll_pane_ParamLimits

0x70db,	// (0x00048f47) scroll_handle_pane_ParamLimits

0x70ef,	// (0x00048f5b) scroll_sc2_down_pane_ParamLimits

0x70ef,	// (0x00048f5b) scroll_sc2_down_pane

0x10d5,	// (0x00042f41) scroll_sc2_up_pane_ParamLimits

0x10d5,	// (0x00042f41) scroll_sc2_up_pane

0xbe72,	// (0x0004dcde) grid_wheel_folder_pane_g1_ParamLimits

0xbe72,	// (0x0004dcde) grid_wheel_folder_pane_g1

0x744a,	// (0x000492b6) clock_nsta_pane_cp2_ParamLimits

0x744a,	// (0x000492b6) clock_nsta_pane_cp2

0x94f8,	// (0x0004b364) listscroll_midp_pane_ParamLimits

0x9504,	// (0x0004b370) midp_canvas_pane

0x97e8,	// (0x0004b654) nsta_clock_indic_pane

0x9821,	// (0x0004b68d) listscroll_form_pane_vc

0x9829,	// (0x0004b695) listscroll_set_pane_vc_ParamLimits

0x9829,	// (0x0004b695) listscroll_set_pane_vc

0x992e,	// (0x0004b79a) clock_nsta_pane

0x99a9,	// (0x0004b815) indicator_nsta_pane

0x9c86,	// (0x0004baf2) bg_popup_sub_pane_cp2_ParamLimits

0x9c9a,	// (0x0004bb06) find_pane_cp2_ParamLimits

0x9c9a,	// (0x0004bb06) find_pane_cp2

0x9cb0,	// (0x0004bb1c) grid_toobar_pane_ParamLimits

0x9d90,	// (0x0004bbfc) list_form_gen_pane_vc_ParamLimits

0x9d90,	// (0x0004bbfc) list_form_gen_pane_vc

0x9da6,	// (0x0004bc12) scroll_pane_cp8_vc_ParamLimits

0x9da6,	// (0x0004bc12) scroll_pane_cp8_vc

0x9e22,	// (0x0004bc8e) data_form_wide_pane_vc_ParamLimits

0x9e22,	// (0x0004bc8e) data_form_wide_pane_vc

0x9e2e,	// (0x0004bc9a) form_field_data_wide_pane_vc_g1

0x9e36,	// (0x0004bca2) form_field_data_wide_pane_vc_t1_ParamLimits

0x9e36,	// (0x0004bca2) form_field_data_wide_pane_vc_t1

0x0dbd,	// (0x00042c29) input_focus_pane_cp6_vc_ParamLimits

0x0dbd,	// (0x00042c29) input_focus_pane_cp6_vc

0xa163,	// (0x0004bfcf) list_midp_pane_ParamLimits

0xa16f,	// (0x0004bfdb) scroll_pane_cp16_ParamLimits

0xa16f,	// (0x0004bfdb) scroll_pane_cp16

0xa1c5,	// (0x0004c031) button_value_adjust_pane_ParamLimits

0xa1c5,	// (0x0004c031) button_value_adjust_pane

0xb109,	// (0x0004cf75) button_value_adjust_pane_cp6_ParamLimits

0xb109,	// (0x0004cf75) button_value_adjust_pane_cp6

0xb22f,	// (0x0004d09b) settings_code_pane_cp_ParamLimits

0xb22f,	// (0x0004d09b) settings_code_pane_cp

0x09a5,	// (0x00042811) cell_touch_pane_g1

0x09a5,	// (0x00042811) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x0005156a) cell_touch_pane_g

0xb7c3,	// (0x0004d62f) cell_touch_pane_cp_ParamLimits

0xb7c3,	// (0x0004d62f) cell_touch_pane_cp

0xb7d3,	// (0x0004d63f) cell_touch_pane_ParamLimits

0xb7d3,	// (0x0004d63f) cell_touch_pane

0x09a5,	// (0x00042811) scroll_sc2_down_pane_g1

0x09a5,	// (0x00042811) scroll_sc2_up_pane_g1

0x09af,	// (0x0004281b) bg_set_opt_pane_cp4_vc

0xb7e5,	// (0x0004d651) list_set_graphic_pane_vc_g1_ParamLimits

0xb7e5,	// (0x0004d651) list_set_graphic_pane_vc_g1

0xb7f1,	// (0x0004d65d) list_set_graphic_pane_vc_g2_ParamLimits

0xb7f1,	// (0x0004d65d) list_set_graphic_pane_vc_g2

0x0001,

0xf9fa,	// (0x00051866) list_set_graphic_pane_vc_g_ParamLimits

0xf9fa,	// (0x00051866) list_set_graphic_pane_vc_g

0xb7fd,	// (0x0004d669) text_primary_small_cp13_vc_ParamLimits

0xb7fd,	// (0x0004d669) text_primary_small_cp13_vc

0xb815,	// (0x0004d681) list_set_graphic_pane_vc_ParamLimits

0xb815,	// (0x0004d681) list_set_graphic_pane_vc

0x09af,	// (0x0004281b) input_focus_pane_cp2_vc

0x09a5,	// (0x00042811) setting_code_pane_vc_g1

0x0a22,	// (0x0004288e) setting_code_pane_vc_t1

0xb828,	// (0x0004d694) set_text_pane_vc_t1_ParamLimits

0xb828,	// (0x0004d694) set_text_pane_vc_t1

0x09af,	// (0x0004281b) input_focus_pane_cp1_vc

0xb844,	// (0x0004d6b0) list_set_text_pane_vc

0x09a5,	// (0x00042811) setting_text_pane_vc_g1

0x09af,	// (0x0004281b) bg_set_opt_pane_cp2_vc

0x0a19,	// (0x00042885) setting_slider_graphic_pane_vc_g1

0xb84e,	// (0x0004d6ba) setting_slider_graphic_pane_vc_t1

0xb85e,	// (0x0004d6ca) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ff,	// (0x0005186b) setting_slider_graphic_pane_vc_t

0xb86e,	// (0x0004d6da) slider_set_pane_cp_vc

0xb876,	// (0x0004d6e2) slider_set_pane_vc_g1

0xb87f,	// (0x0004d6eb) slider_set_pane_vc_g2

0x0006,

0xfa04,	// (0x00051870) slider_set_pane_vc_g

0x0e15,	// (0x00042c81) set_opt_bg_pane_g1_copy1

0x0e1d,	// (0x00042c89) set_opt_bg_pane_g2_copy1

0xb8ab,	// (0x0004d717) set_opt_bg_pane_g3_copy1

0x0e2d,	// (0x00042c99) set_opt_bg_pane_g4_copy1

0x0e35,	// (0x00042ca1) set_opt_bg_pane_g5_copy1

0x0e3d,	// (0x00042ca9) set_opt_bg_pane_g6_copy1

0xb8b3,	// (0x0004d71f) set_opt_bg_pane_g7_copy1

0xb8bb,	// (0x0004d727) set_opt_bg_pane_g8_copy1

0xb8c3,	// (0x0004d72f) set_opt_bg_pane_g9_copy1

0x09af,	// (0x0004281b) bg_set_opt_pane_cp_vc

0xb8cb,	// (0x0004d737) setting_slider_pane_vc_t1

0xb8da,	// (0x0004d746) setting_slider_pane_vc_t2

0xb8ea,	// (0x0004d756) setting_slider_pane_vc_t3

0x0002,

0xfa13,	// (0x0005187f) setting_slider_pane_vc_t

0xb8fa,	// (0x0004d766) slider_set_pane_vc

0x7fb3,	// (0x00049e1f) volume_set_pane_vc_g1

0x834a,	// (0x0004a1b6) volume_set_pane_vc_g2

0x8353,	// (0x0004a1bf) volume_set_pane_vc_g3

0x835c,	// (0x0004a1c8) volume_set_pane_vc_g4

0x8365,	// (0x0004a1d1) volume_set_pane_vc_g5

0x836e,	// (0x0004a1da) volume_set_pane_vc_g6

0x8377,	// (0x0004a1e3) volume_set_pane_vc_g7

0x8380,	// (0x0004a1ec) volume_set_pane_vc_g8

0x8389,	// (0x0004a1f5) volume_set_pane_vc_g9

0x8392,	// (0x0004a1fe) volume_set_pane_vc_g10

0x0009,

0xfa1a,	// (0x00051886) volume_set_pane_vc_g

0xb902,	// (0x0004d76e) volume_set_pane_vc

0xb90a,	// (0x0004d776) button_value_adjust_pane_cp1_vc

0xb914,	// (0x0004d780) list_highlight_pane_cp2_vc

0xb91d,	// (0x0004d789) list_set_pane_vc_ParamLimits

0xb91d,	// (0x0004d789) list_set_pane_vc

0xb97b,	// (0x0004d7e7) main_pane_set_vc_t1_ParamLimits

0xb97b,	// (0x0004d7e7) main_pane_set_vc_t1

0xb990,	// (0x0004d7fc) main_pane_set_vc_t2_ParamLimits

0xb990,	// (0x0004d7fc) main_pane_set_vc_t2

0xb9a2,	// (0x0004d80e) main_pane_set_vc_t3_ParamLimits

0xb9a2,	// (0x0004d80e) main_pane_set_vc_t3

0xb9b4,	// (0x0004d820) main_pane_set_vc_t4_ParamLimits

0xb9b4,	// (0x0004d820) main_pane_set_vc_t4

0x0003,

0xfa2f,	// (0x0005189b) main_pane_set_vc_t_ParamLimits

0xfa2f,	// (0x0005189b) main_pane_set_vc_t

0xb9c6,	// (0x0004d832) setting_code_pane_vc_ParamLimits

0xb9c6,	// (0x0004d832) setting_code_pane_vc

0xb9d5,	// (0x0004d841) setting_slider_graphic_pane_vc

0xb9d5,	// (0x0004d841) setting_slider_pane_vc

0xb9d5,	// (0x0004d841) setting_text_pane_vc

0xb9d5,	// (0x0004d841) setting_volume_pane_vc

0xb9dd,	// (0x0004d849) scroll_pane_cp121_vc

0x0d97,	// (0x00042c03) set_content_pane_vc

0xb9e5,	// (0x0004d851) button_value_adjust_pane_g1

0xb9ee,	// (0x0004d85a) button_value_adjust_pane_g2

0x0001,

0xfa92,	// (0x000518fe) button_value_adjust_pane_g

0xb9f7,	// (0x0004d863) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb9f7,	// (0x0004d863) form_field_slider_wide_pane_vc_t1

0xba0b,	// (0x0004d877) form_field_slider_wide_pane_vc_t2_ParamLimits

0xba0b,	// (0x0004d877) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa97,	// (0x00051903) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa97,	// (0x00051903) form_field_slider_wide_pane_vc_t

0x09fd,	// (0x00042869) input_focus_pane_cp10_vc_ParamLimits

0x09fd,	// (0x00042869) input_focus_pane_cp10_vc

0xba39,	// (0x0004d8a5) slider_cont_pane_cp1_vc_ParamLimits

0xba39,	// (0x0004d8a5) slider_cont_pane_cp1_vc

0xba4b,	// (0x0004d8b7) slider_form_pane_g1_cp2

0xb87f,	// (0x0004d6eb) slider_form_pane_g2_cp2

0xba78,	// (0x0004d8e4) form_field_slider_pane_vc_t3

0xba86,	// (0x0004d8f2) form_field_slider_pane_vc_t4

0xba94,	// (0x0004d900) slider_form_pane_vc_ParamLimits

0xba94,	// (0x0004d900) slider_form_pane_vc

0xbaa1,	// (0x0004d90d) form_field_slider_pane_vc_t1_ParamLimits

0xbaa1,	// (0x0004d90d) form_field_slider_pane_vc_t1

0xba0b,	// (0x0004d877) form_field_slider_pane_vc_t2_ParamLimits

0xba0b,	// (0x0004d877) form_field_slider_pane_vc_t2

0x0001,

0xfaa9,	// (0x00051915) form_field_slider_pane_vc_t_ParamLimits

0xfaa9,	// (0x00051915) form_field_slider_pane_vc_t

0x09fd,	// (0x00042869) input_focus_pane_cp9_vc_ParamLimits

0x09fd,	// (0x00042869) input_focus_pane_cp9_vc

0xbabd,	// (0x0004d929) slider_cont_pane_vc_ParamLimits

0xbabd,	// (0x0004d929) slider_cont_pane_vc

0xbad1,	// (0x0004d93d) list_form_graphic_pane_cp_vc_ParamLimits

0xbad1,	// (0x0004d93d) list_form_graphic_pane_cp_vc

0x9e2e,	// (0x0004bc9a) form_field_popup_wide_pane_vc_g1

0xbae6,	// (0x0004d952) form_field_popup_wide_pane_vc_t1_ParamLimits

0xbae6,	// (0x0004d952) form_field_popup_wide_pane_vc_t1

0x0dbd,	// (0x00042c29) input_focus_pane_cp8_vc_ParamLimits

0x0dbd,	// (0x00042c29) input_focus_pane_cp8_vc

0xbb2b,	// (0x0004d997) list_form_wide_pane_vc_ParamLimits

0xbb2b,	// (0x0004d997) list_form_wide_pane_vc

0xbb37,	// (0x0004d9a3) list_form_graphic_pane_vc_g1

0xbb3f,	// (0x0004d9ab) list_form_graphic_pane_vc_t1_ParamLimits

0xbb3f,	// (0x0004d9ab) list_form_graphic_pane_vc_t1

0x0a0b,	// (0x00042877) list_highlight_pane_cp5_vc_ParamLimits

0x0a0b,	// (0x00042877) list_highlight_pane_cp5_vc

0xbb5b,	// (0x0004d9c7) list_form_graphic_pane_vc_ParamLimits

0xbb5b,	// (0x0004d9c7) list_form_graphic_pane_vc

0x9e2e,	// (0x0004bc9a) form_field_popup_pane_vc_g1

0xbb71,	// (0x0004d9dd) form_field_popup_pane_vc_t1_ParamLimits

0xbb71,	// (0x0004d9dd) form_field_popup_pane_vc_t1

0x0dbd,	// (0x00042c29) input_focus_pane_cp7_vc_ParamLimits

0x0dbd,	// (0x00042c29) input_focus_pane_cp7_vc

0xbb88,	// (0x0004d9f4) list_form_pane_vc_ParamLimits

0xbb88,	// (0x0004d9f4) list_form_pane_vc

0xbb94,	// (0x0004da00) data_form_pane_vc_t1_ParamLimits

0xbb94,	// (0x0004da00) data_form_pane_vc_t1

0x0e15,	// (0x00042c81) input_focus_pane_vc_g1

0x0e1d,	// (0x00042c89) input_focus_pane_vc_g2

0x0e25,	// (0x00042c91) input_focus_pane_vc_g3

0x0e2d,	// (0x00042c99) input_focus_pane_vc_g4

0x0e35,	// (0x00042ca1) input_focus_pane_vc_g5

0x0e3d,	// (0x00042ca9) input_focus_pane_vc_g6

0x0e45,	// (0x00042cb1) input_focus_pane_vc_g7

0x0e4d,	// (0x00042cb9) input_focus_pane_vc_g8

0x0e55,	// (0x00042cc1) input_focus_pane_vc_g9

0x09a5,	// (0x00042811) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x000514f3) input_focus_pane_vc_g

0x9e22,	// (0x0004bc8e) data_form_pane_vc_ParamLimits

0x9e22,	// (0x0004bc8e) data_form_pane_vc

0x9e2e,	// (0x0004bc9a) form_field_data_pane_vc_g1

0xbbaf,	// (0x0004da1b) form_field_data_pane_vc_t1_ParamLimits

0xbbaf,	// (0x0004da1b) form_field_data_pane_vc_t1

0x0dbd,	// (0x00042c29) input_focus_pane_vc_ParamLimits

0x0dbd,	// (0x00042c29) input_focus_pane_vc

0xbbc9,	// (0x0004da35) button_value_adjust_pane_cp3_vc

0xbbd1,	// (0x0004da3d) button_value_adjust_pane_cp5_vc

0xbbd9,	// (0x0004da45) form_field_data_pane_vc_ParamLimits

0xbbd9,	// (0x0004da45) form_field_data_pane_vc

0xbbf0,	// (0x0004da5c) form_field_data_pane_vc_cp2

0xbbf8,	// (0x0004da64) form_field_data_wide_pane_vc_ParamLimits

0xbbf8,	// (0x0004da64) form_field_data_wide_pane_vc

0xbc0e,	// (0x0004da7a) form_field_data_wide_pane_vc_cp2

0xbc16,	// (0x0004da82) form_field_popup_pane_vc_ParamLimits

0xbc16,	// (0x0004da82) form_field_popup_pane_vc

0xbc2d,	// (0x0004da99) form_field_popup_wide_pane_vc_ParamLimits

0xbc2d,	// (0x0004da99) form_field_popup_wide_pane_vc

0xbc43,	// (0x0004daaf) form_field_slider_pane_vc_ParamLimits

0xbc43,	// (0x0004daaf) form_field_slider_pane_vc

0xbc56,	// (0x0004dac2) form_field_slider_wide_pane_vc_ParamLimits

0xbc56,	// (0x0004dac2) form_field_slider_wide_pane_vc

0xbc69,	// (0x0004dad5) grid_touch_1_pane_ParamLimits

0xbc69,	// (0x0004dad5) grid_touch_1_pane

0xbc75,	// (0x0004dae1) grid_touch_2_pane_ParamLimits

0xbc75,	// (0x0004dae1) grid_touch_2_pane

0x97b3,	// (0x0004b61f) touch_pane_g1_ParamLimits

0x97b3,	// (0x0004b61f) touch_pane_g1

0xbc8d,	// (0x0004daf9) cell_app_pane_cp_wide_ParamLimits

0xbc8d,	// (0x0004daf9) cell_app_pane_cp_wide

0xbc9e,	// (0x0004db0a) grid_popup_fast_wide_pane_ParamLimits

0xbc9e,	// (0x0004db0a) grid_popup_fast_wide_pane

0xbcbe,	// (0x0004db2a) scroll_pane_cp19_ParamLimits

0xbcbe,	// (0x0004db2a) scroll_pane_cp19

0x09af,	// (0x0004281b) bg_popup_window_pane_cp20

0xbcd2,	// (0x0004db3e) listscroll_popup_fast_wide_pane

0x0a0b,	// (0x00042877) grid_indicator_nsta_pane

0xbcda,	// (0x0004db46) clock_nsta_pane_g1

0xbce3,	// (0x0004db4f) clock_nsta_pane_t1

0xbcff,	// (0x0004db6b) cell_indicator_nsta_pane_ParamLimits

0xbcff,	// (0x0004db6b) cell_indicator_nsta_pane

0xbd30,	// (0x0004db9c) cell_indicator_nsta_pane_g1

0xbd3e,	// (0x0004dbaa) cell_indicator_nsta_pane_g2

0x0001,

0xfaba,	// (0x00051926) cell_indicator_nsta_pane_g

0xbd4b,	// (0x0004dbb7) clock_nsta_pane_cp

0xbd53,	// (0x0004dbbf) indicator_nsta_pane_cp

0xbd5b,	// (0x0004dbc7) nsta_clock_indic_pane_g1

0x0a47,	// (0x000428b3) grid_indicator_pane

0x718d,	// (0x00048ff9) scroll_pane_cp29

0x7399,	// (0x00049205) indicator_nsta_pane_cp2_ParamLimits

0x7399,	// (0x00049205) indicator_nsta_pane_cp2

0x0a0b,	// (0x00042877) main_apps_wheel_pane

0xa046,	// (0x0004beb2) form_midp_field_text_pane_ParamLimits

0xa18f,	// (0x0004bffb) scroll_bar_cp050_ParamLimits

0xbdab,	// (0x0004dc17) cell_indicator_pane_ParamLimits

0xbdab,	// (0x0004dc17) cell_indicator_pane

0xbdc4,	// (0x0004dc30) cell_indicator_pane_g1

0xbdce,	// (0x0004dc3a) grid_wheel_folder_pane_ParamLimits

0xbdce,	// (0x0004dc3a) grid_wheel_folder_pane

0xbde4,	// (0x0004dc50) list_wheel_apps_pane_ParamLimits

0xbde4,	// (0x0004dc50) list_wheel_apps_pane

0xbdf5,	// (0x0004dc61) main_apps_wheel_pane_g1_ParamLimits

0xbdf5,	// (0x0004dc61) main_apps_wheel_pane_g1

0xbe09,	// (0x0004dc75) main_apps_wheel_pane_g2_ParamLimits

0xbe09,	// (0x0004dc75) main_apps_wheel_pane_g2

0x0001,

0xfad6,	// (0x00051942) main_apps_wheel_pane_g_ParamLimits

0xfad6,	// (0x00051942) main_apps_wheel_pane_g

0xbe21,	// (0x0004dc8d) main_apps_wheel_pane_t1_ParamLimits

0xbe21,	// (0x0004dc8d) main_apps_wheel_pane_t1

0xbe44,	// (0x0004dcb0) list_wheel_apps_pane_g1

0xbe4c,	// (0x0004dcb8) list_wheel_apps_pane_g2

0xbe54,	// (0x0004dcc0) list_wheel_apps_pane_g3

0xbe5e,	// (0x0004dcca) list_wheel_apps_pane_g4

0xbe68,	// (0x0004dcd4) list_wheel_apps_pane_g5

0x0004,

0xfadb,	// (0x00051947) list_wheel_apps_pane_g

0x75d0,	// (0x0004943c) navi_icon_text_pane

0x985d,	// (0x0004b6c9) aid_fill_nsta

0xbe8b,	// (0x0004dcf7) navi_icon_text_pane_g1

0xbe97,	// (0x0004dd03) navi_icon_text_pane_t1

0x4ab7,	// (0x00046923) list_set_graphic_pane_t1_ParamLimits

0x4ab7,	// (0x00046923) list_set_graphic_pane_t1

0xa8c6,	// (0x0004c732) popup_midp_note_alarm_window_t6_ParamLimits

0xa8c6,	// (0x0004c732) popup_midp_note_alarm_window_t6

0xa8d8,	// (0x0004c744) popup_midp_note_alarm_window_t7_ParamLimits

0xa8d8,	// (0x0004c744) popup_midp_note_alarm_window_t7

0xa8ea,	// (0x0004c756) popup_midp_note_alarm_window_t8_ParamLimits

0xa8ea,	// (0x0004c756) popup_midp_note_alarm_window_t8

0xa8fc,	// (0x0004c768) popup_midp_note_alarm_window_t9_ParamLimits

0xa8fc,	// (0x0004c768) popup_midp_note_alarm_window_t9

0xa90e,	// (0x0004c77a) popup_midp_note_alarm_window_t10_ParamLimits

0xa90e,	// (0x0004c77a) popup_midp_note_alarm_window_t10

0xa920,	// (0x0004c78c) popup_midp_note_alarm_window_t11_ParamLimits

0xa920,	// (0x0004c78c) popup_midp_note_alarm_window_t11

0xa932,	// (0x0004c79e) scroll_pane_cp17_ParamLimits

0xa932,	// (0x0004c79e) scroll_pane_cp17

0x7fb3,	// (0x00049e1f) volume_small_pane_cp_g1

0x8421,	// (0x0004a28d) volume_small_pane_cp_g2

0x842a,	// (0x0004a296) volume_small_pane_cp_g3

0x8433,	// (0x0004a29f) volume_small_pane_cp_g4

0x843c,	// (0x0004a2a8) volume_small_pane_cp_g5

0x8365,	// (0x0004a1d1) volume_small_pane_cp_g6

0x8445,	// (0x0004a2b1) volume_small_pane_cp_g7

0x844e,	// (0x0004a2ba) volume_small_pane_cp_g8

0x8457,	// (0x0004a2c3) volume_small_pane_cp_g9

0x8460,	// (0x0004a2cc) volume_small_pane_cp_g10

0x95d1,	// (0x0004b43d) midp_ticker_pane_g1_ParamLimits

0x95dd,	// (0x0004b449) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x000515bf) midp_ticker_pane_g_ParamLimits

0x95e9,	// (0x0004b455) midp_ticker_pane_t1_ParamLimits

0x9873,	// (0x0004b6df) aid_fill_nsta_2

0xa17b,	// (0x0004bfe7) list_form2_midp_pane

0xb27a,	// (0x0004d0e6) midp_editing_number_pane_ParamLimits

0xb289,	// (0x0004d0f5) midp_ticker_pane_ParamLimits

0xbea9,	// (0x0004dd15) form2_midp_field_pane

0xbecd,	// (0x0004dd39) scroll_pane_cp51

0xbeed,	// (0x0004dd59) form2_midp_button_pane_ParamLimits

0xbeed,	// (0x0004dd59) form2_midp_button_pane

0xbeff,	// (0x0004dd6b) form2_midp_content_pane_ParamLimits

0xbeff,	// (0x0004dd6b) form2_midp_content_pane

0xbf19,	// (0x0004dd85) form2_midp_field_choice_group_pane

0xbf21,	// (0x0004dd8d) form2_midp_field_pane_g1

0xbf29,	// (0x0004dd95) form2_midp_field_pane_g2

0xbf31,	// (0x0004dd9d) form2_midp_field_pane_g3

0xbf39,	// (0x0004dda5) form2_midp_field_pane_g4

0x0003,

0xfb00,	// (0x0005196c) form2_midp_field_pane_g

0xbf41,	// (0x0004ddad) form2_midp_gauge_slider_pane

0xbf49,	// (0x0004ddb5) form2_midp_gauge_wait_pane

0xbf51,	// (0x0004ddbd) form2_midp_image_pane_ParamLimits

0xbf51,	// (0x0004ddbd) form2_midp_image_pane

0xbf6c,	// (0x0004ddd8) form2_midp_label_pane_ParamLimits

0xbf6c,	// (0x0004ddd8) form2_midp_label_pane

0xbf85,	// (0x0004ddf1) form2_midp_label_pane_cp_ParamLimits

0xbf85,	// (0x0004ddf1) form2_midp_label_pane_cp

0xbfa6,	// (0x0004de12) form2_midp_string_pane_ParamLimits

0xbfa6,	// (0x0004de12) form2_midp_string_pane

0x603e,	// (0x00047eaa) form2_midp_text_pane_ParamLimits

0x603e,	// (0x00047eaa) form2_midp_text_pane

0xbfb8,	// (0x0004de24) form2_midp_time_pane

0xbfc8,	// (0x0004de34) input_focus_pane_cp51_ParamLimits

0xbfc8,	// (0x0004de34) input_focus_pane_cp51

0xbfe0,	// (0x0004de4c) form2_midp_label_pane_t1_ParamLimits

0xbfe0,	// (0x0004de4c) form2_midp_label_pane_t1

0x605b,	// (0x00047ec7) form2_mdip_text_pane_t1_ParamLimits

0x605b,	// (0x00047ec7) form2_mdip_text_pane_t1

0x6079,	// (0x00047ee5) form2_midp_time_pane_t1

0xc029,	// (0x0004de95) form2_midp_gauge_slider_pane_t1

0xc03b,	// (0x0004dea7) form2_midp_gauge_slider_pane_t2

0xc04d,	// (0x0004deb9) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb09,	// (0x00051975) form2_midp_gauge_slider_pane_t

0xc05f,	// (0x0004decb) form2_midp_slider_pane

0xc06b,	// (0x0004ded7) form2_midp_gauge_wait_pane_t1

0xc079,	// (0x0004dee5) form2_midp_wait_pane_ParamLimits

0xc079,	// (0x0004dee5) form2_midp_wait_pane

0xc0a4,	// (0x0004df10) list_single_2graphic_pane_cp4_ParamLimits

0xc0a4,	// (0x0004df10) list_single_2graphic_pane_cp4

0x9e97,	// (0x0004bd03) list_single_midp_graphic_pane_cp_ParamLimits

0x9e97,	// (0x0004bd03) list_single_midp_graphic_pane_cp

0x09af,	// (0x0004281b) list_highlight_pane_cp20

0xc0cc,	// (0x0004df38) list_single_2graphic_pane_g1_cp4

0xb6c9,	// (0x0004d535) list_single_2graphic_pane_g2_cp4

0xc0d4,	// (0x0004df40) list_single_2graphic_pane_t1_cp4

0x0a0b,	// (0x00042877) list_highlight_pane_cp21

0xc0e3,	// (0x0004df4f) list_single_midp_graphic_pane_g4_cp

0xc0f2,	// (0x0004df5e) list_single_midp_graphic_pane_t1_cp

0xc107,	// (0x0004df73) form2_mdip_string_pane_t1_ParamLimits

0xc107,	// (0x0004df73) form2_mdip_string_pane_t1

0x09af,	// (0x0004281b) bg_wml_button_pane_cp2

0x09a5,	// (0x00042811) form2_midp_image_pane_g1

0x6d97,	// (0x00048c03) list_double_large_graphic_pane_g5_ParamLimits

0x6d97,	// (0x00048c03) list_double_large_graphic_pane_g5

0x94f8,	// (0x0004b364) midp_form_pane_ParamLimits

0x0a0b,	// (0x00042877) main_apps_wheel_pane_ParamLimits

0x7c5b,	// (0x00049ac7) popup_preview_window_ParamLimits

0x7c5b,	// (0x00049ac7) popup_preview_window

0x7e16,	// (0x00049c82) popup_touch_info_window_ParamLimits

0x7e16,	// (0x00049c82) popup_touch_info_window

0x7e34,	// (0x00049ca0) popup_touch_menu_window_ParamLimits

0x7e34,	// (0x00049ca0) popup_touch_menu_window

0x099b,	// (0x00042807) bg_popup_sub_pane_cp6

0xc20e,	// (0x0004e07a) list_touch_menu_pane

0xc216,	// (0x0004e082) list_single_touch_menu_pane_ParamLimits

0xc216,	// (0x0004e082) list_single_touch_menu_pane

0xc22c,	// (0x0004e098) list_single_touch_menu_pane_t1

0x0a0b,	// (0x00042877) bg_popup_sub_pane_cp7_ParamLimits

0x0a0b,	// (0x00042877) bg_popup_sub_pane_cp7

0xc23a,	// (0x0004e0a6) heading_sub_pane

0xc242,	// (0x0004e0ae) list_touch_info_pane_ParamLimits

0xc242,	// (0x0004e0ae) list_touch_info_pane

0xc251,	// (0x0004e0bd) list_single_touch_info_pane_ParamLimits

0xc251,	// (0x0004e0bd) list_single_touch_info_pane

0xc263,	// (0x0004e0cf) list_single_touch_info_pane_t1

0xc271,	// (0x0004e0dd) list_single_touch_info_pane_t2

0x0001,

0xfb17,	// (0x00051983) list_single_touch_info_pane_t

0x94f0,	// (0x0004b35c) bg_popup_heading_pane_cp

0xc27f,	// (0x0004e0eb) heading_sub_pane_t1

0x9dbc,	// (0x0004bc28) bg_popup_preview_window_pane_cp_ParamLimits

0x9dbc,	// (0x0004bc28) bg_popup_preview_window_pane_cp

0xc23a,	// (0x0004e0a6) heading_preview_pane

0xc242,	// (0x0004e0ae) list_preview_pane_ParamLimits

0xc242,	// (0x0004e0ae) list_preview_pane

0xc28d,	// (0x0004e0f9) popup_preview_window_g1

0xc251,	// (0x0004e0bd) list_single_preview_pane_ParamLimits

0xc251,	// (0x0004e0bd) list_single_preview_pane

0xc295,	// (0x0004e101) list_single_preview_pane_g1

0xc29d,	// (0x0004e109) list_single_preview_pane_t1

0xc263,	// (0x0004e0cf) list_single_preview_pane_t2

0x0001,

0xfb1c,	// (0x00051988) list_single_preview_pane_t

0xc2ab,	// (0x0004e117) bg_popup_heading_pane_cp2_ParamLimits

0xc2ab,	// (0x0004e117) bg_popup_heading_pane_cp2

0xc2c1,	// (0x0004e12d) heading_preview_pane_g1

0xc2c9,	// (0x0004e135) heading_preview_pane_t1_ParamLimits

0xc2c9,	// (0x0004e135) heading_preview_pane_t1

0x0a5e,	// (0x000428ca) soft_indicator_pane_t1_ParamLimits

0x0d39,	// (0x00042ba5) scroll_pane_ParamLimits

0x10cc,	// (0x00042f38) scroll_sc2_left_pane

0x10c3,	// (0x00042f2f) scroll_sc2_right_pane

0x10eb,	// (0x00042f57) scroll_bg_pane_g1_ParamLimits

0x1100,	// (0x00042f6c) scroll_bg_pane_g2_ParamLimits

0x1118,	// (0x00042f84) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x0005154a) scroll_bg_pane_g_ParamLimits

0x10eb,	// (0x00042f57) scroll_handle_pane_g1_ParamLimits

0x112d,	// (0x00042f99) scroll_handle_pane_g2_ParamLimits

0x1118,	// (0x00042f84) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x00051551) scroll_handle_pane_g_ParamLimits

0x78de,	// (0x0004974a) popup_choice_list_window_ParamLimits

0x78de,	// (0x0004974a) popup_choice_list_window

0x9c92,	// (0x0004bafe) choice_list_pane

0x9d14,	// (0x0004bb80) cell_toolbar_pane_t1

0x9d3c,	// (0x0004bba8) toolbar_button_pane_ParamLimits

0xadec,	// (0x0004cc58) ai_gene_pane_1_t2_ParamLimits

0xadec,	// (0x0004cc58) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x00051779) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x00051779) ai_gene_pane_1_t

0xc2e6,	// (0x0004e152) scroll_sc2_left_pane_g1

0xc2e6,	// (0x0004e152) scroll_sc2_right_pane_g1

0x983b,	// (0x0004b6a7) bg_popup_sub_pane_cp10

0xc2f0,	// (0x0004e15c) list_choice_list_pane

0xc309,	// (0x0004e175) list_single_choice_list_pane_ParamLimits

0xc309,	// (0x0004e175) list_single_choice_list_pane

0xc31c,	// (0x0004e188) list_single_choice_list_pane_g1

0x6e32,	// (0x00048c9e) list_single_choice_list_pane_t1_ParamLimits

0x6e32,	// (0x00048c9e) list_single_choice_list_pane_t1

0xc324,	// (0x0004e190) choice_list_pane_g1

0xc32c,	// (0x0004e198) choice_list_pane_t1

0x099b,	// (0x00042807) input_focus_pane_cp11

0x1038,	// (0x00042ea4) title_pane_stacon_g2_ParamLimits

0x1038,	// (0x00042ea4) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x00051530) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x00051530) title_pane_stacon_g

0x94f0,	// (0x0004b35c) cursor_press_pane

0x7986,	// (0x000497f2) popup_fep_hwr_window_ParamLimits

0x7986,	// (0x000497f2) popup_fep_hwr_window

0x79fe,	// (0x0004986a) popup_fep_vkb_window_ParamLimits

0x79fe,	// (0x0004986a) popup_fep_vkb_window

0xc33a,	// (0x0004e1a6) cursor_press_pane_g1

0x0002,

0xfb45,	// (0x000519b1) fep_vkb_side_pane_g_ParamLimits

0x84a2,	// (0x0004a30e) fep_hwr_candidate_pane_ParamLimits

0x84a2,	// (0x0004a30e) fep_hwr_candidate_pane

0x84cc,	// (0x0004a338) fep_hwr_side_pane_ParamLimits

0x84cc,	// (0x0004a338) fep_hwr_side_pane

0x84ec,	// (0x0004a358) fep_hwr_top_pane_ParamLimits

0x84ec,	// (0x0004a358) fep_hwr_top_pane

0x8504,	// (0x0004a370) fep_hwr_write_pane_ParamLimits

0x8504,	// (0x0004a370) fep_hwr_write_pane

0xfb45,	// (0x000519b1) fep_vkb_side_pane_g

0xc342,	// (0x0004e1ae) fep_hwr_top_pane_g1

0xc354,	// (0x0004e1c0) fep_hwr_top_pane_g2

0x8530,	// (0x0004a39c) fep_hwr_top_pane_g3

0x0002,

0xfb21,	// (0x0005198d) fep_hwr_top_pane_g

0x8545,	// (0x0004a3b1) fep_hwr_top_text_pane

0x11f0,	// (0x0004305c) fep_hwr_top_text_pane_g1

0xc38a,	// (0x0004e1f6) fep_hwr_top_text_pane_t1

0x863b,	// (0x0004a4a7) fep_hwr_candidate_pane_g1

0xc5cf,	// (0x0004e43b) fep_vkb_keypad_pane_g3_ParamLimits

0xc5cf,	// (0x0004e43b) fep_vkb_keypad_pane_g3

0xc5f7,	// (0x0004e463) fep_vkb_keypad_pane_g4_ParamLimits

0xc5f7,	// (0x0004e463) fep_vkb_keypad_pane_g4

0xc666,	// (0x0004e4d2) fep_vkb_bottom_pane_g2_ParamLimits

0xc666,	// (0x0004e4d2) fep_vkb_bottom_pane_g2

0x0001,

0xfb4c,	// (0x000519b8) fep_vkb_bottom_pane_g_ParamLimits

0xfb4c,	// (0x000519b8) fep_vkb_bottom_pane_g

0xc2e6,	// (0x0004e152) cell_vkb_side_pane_g2

0x0001,

0xfb56,	// (0x000519c2) cell_vkb_side_pane_g

0xc6f1,	// (0x0004e55d) cell_vkb_side_pane_t1

0xc6ff,	// (0x0004e56b) cell_vkb_side_pane_t1_copy1

0xc2e6,	// (0x0004e152) bg_fep_vkb_candidate_pane_g2

0xc82b,	// (0x0004e697) cell_vkb_candidate_pane_ParamLimits

0xc398,	// (0x0004e204) aid_size_cell_vkb_ParamLimits

0xc398,	// (0x0004e204) aid_size_cell_vkb

0xc82b,	// (0x0004e697) cell_vkb_candidate_pane

0x8655,	// (0x0004a4c1) bg_popup_fep_shadow_pane_g1

0xc426,	// (0x0004e292) fep_vkb_bottom_pane_ParamLimits

0xc426,	// (0x0004e292) fep_vkb_bottom_pane

0xc45c,	// (0x0004e2c8) fep_vkb_candidate_pane_ParamLimits

0xc45c,	// (0x0004e2c8) fep_vkb_candidate_pane

0xc478,	// (0x0004e2e4) fep_vkb_keypad_pane_ParamLimits

0xc478,	// (0x0004e2e4) fep_vkb_keypad_pane

0xc4b7,	// (0x0004e323) fep_vkb_side_pane_ParamLimits

0xc4b7,	// (0x0004e323) fep_vkb_side_pane

0xc4f3,	// (0x0004e35f) fep_vkb_top_pane_ParamLimits

0xc4f3,	// (0x0004e35f) fep_vkb_top_pane

0xc528,	// (0x0004e394) fep_vkb_top_pane_g1_ParamLimits

0xc528,	// (0x0004e394) fep_vkb_top_pane_g1

0xc537,	// (0x0004e3a3) fep_vkb_top_pane_g2_ParamLimits

0xc537,	// (0x0004e3a3) fep_vkb_top_pane_g2

0xc546,	// (0x0004e3b2) fep_vkb_top_pane_g3_ParamLimits

0xc546,	// (0x0004e3b2) fep_vkb_top_pane_g3

0x0003,

0xfb3c,	// (0x000519a8) fep_vkb_top_pane_g_ParamLimits

0xfb3c,	// (0x000519a8) fep_vkb_top_pane_g

0xc564,	// (0x0004e3d0) fep_vkb_top_text_pane_ParamLimits

0xc564,	// (0x0004e3d0) fep_vkb_top_text_pane

0xc575,	// (0x0004e3e1) fep_vkb_side_pane_g1_ParamLimits

0xc575,	// (0x0004e3e1) fep_vkb_side_pane_g1

0xc5be,	// (0x0004e42a) grid_vkb_side_pane_ParamLimits

0xc5be,	// (0x0004e42a) grid_vkb_side_pane

0x865d,	// (0x0004a4c9) bg_popup_fep_shadow_pane_g2

0x8666,	// (0x0004a4d2) bg_popup_fep_shadow_pane_g3

0x866e,	// (0x0004a4da) bg_popup_fep_shadow_pane_g4

0x8677,	// (0x0004a4e3) bg_popup_fep_shadow_pane_g5

0x8681,	// (0x0004a4ed) bg_popup_fep_shadow_pane_g6

0x8689,	// (0x0004a4f5) bg_popup_fep_shadow_pane_g7

0x0e35,	// (0x00042ca1) bg_popup_fep_shadow_pane_g8

0xc615,	// (0x0004e481) grid_vkb_keypad_number_pane_ParamLimits

0xc615,	// (0x0004e481) grid_vkb_keypad_number_pane

0xc625,	// (0x0004e491) grid_vkb_keypad_pane_ParamLimits

0xc625,	// (0x0004e491) grid_vkb_keypad_pane

0xc64b,	// (0x0004e4b7) fep_vkb_bottom_pane_g1_ParamLimits

0xc64b,	// (0x0004e4b7) fep_vkb_bottom_pane_g1

0xc674,	// (0x0004e4e0) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc674,	// (0x0004e4e0) grid_vkb_keypad_bottom_left_pane

0xc689,	// (0x0004e4f5) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc689,	// (0x0004e4f5) grid_vkb_keypad_bottom_right_pane

0xc69e,	// (0x0004e50a) fep_vkb_top_text_pane_g1

0xc6b9,	// (0x0004e525) fep_vkb_top_text_pane_t1

0xc6ce,	// (0x0004e53a) cell_vkb_side_pane_ParamLimits

0xc6ce,	// (0x0004e53a) cell_vkb_side_pane

0xc2e6,	// (0x0004e152) cell_vkb_side_pane_g1

0xc70d,	// (0x0004e579) cell_vkb_keypad_pane_ParamLimits

0xc70d,	// (0x0004e579) cell_vkb_keypad_pane

0xc782,	// (0x0004e5ee) cell_vkb_keypad_pane_g1

0x0008,

0xfb69,	// (0x000519d5) bg_popup_fep_shadow_pane_g

0xc2e6,	// (0x0004e152) cell_hwr_side_pane_g1

0xc2e6,	// (0x0004e152) cell_hwr_side_pane_g2

0xc78c,	// (0x0004e5f8) cell_vkb_keypad_pane_t1

0xc79a,	// (0x0004e606) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc79a,	// (0x0004e606) cell_vkb_keypad_bottom_left_pane

0xc7b7,	// (0x0004e623) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc7b7,	// (0x0004e623) cell_vkb_keypad_bottom_right_pane

0xc2e6,	// (0x0004e152) cell_vkb_keypad_bottom_left_pane_g1

0xc2e6,	// (0x0004e152) cell_vkb_keypad_bottom_right_pane_g1

0xc7f0,	// (0x0004e65c) cell_vkb_keypad_number_pane_ParamLimits

0xc7f0,	// (0x0004e65c) cell_vkb_keypad_number_pane

0xc80f,	// (0x0004e67b) cell_vkb_keypad_number_pane_g1

0xc819,	// (0x0004e685) cell_vkb_keypad_number_pane_g2

0xc822,	// (0x0004e68e) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb5b,	// (0x000519c7) cell_vkb_keypad_number_pane_g

0xc78c,	// (0x0004e5f8) cell_vkb_keypad_number_pane_t1

0xc846,	// (0x0004e6b2) fep_vkb_candidate_pane_g1

0x0001,

0xfb56,	// (0x000519c2) cell_hwr_side_pane_g

0xc85f,	// (0x0004e6cb) cell_hwr_side_pane_t1

0x869b,	// (0x0004a507) cell_hwr_side_pane_t1_copy1

0xc556,	// (0x0004e3c2) cell_hwr_candidate_pane_g1

0x86a9,	// (0x0004a515) cell_hwr_candidate_pane_t1

0xc2e6,	// (0x0004e152) cell_vkb_candidate_pane_g2

0xc8e5,	// (0x0004e751) cell_vkb_candidate_pane_t1

0x8469,	// (0x0004a2d5) bg_popup_fep_shadow_pane_ParamLimits

0x8469,	// (0x0004a2d5) bg_popup_fep_shadow_pane

0x27d5,	// (0x00044641) bg_fep_hwr_top_pane_g4

0xc366,	// (0x0004e1d2) bg_hwr_side_pane_g1_ParamLimits

0xc366,	// (0x0004e1d2) bg_hwr_side_pane_g1

0x8581,	// (0x0004a3ed) cell_hwr_side_pane_ParamLimits

0x8581,	// (0x0004a3ed) cell_hwr_side_pane

0x85bc,	// (0x0004a428) fep_hwr_write_pane_g1_ParamLimits

0x85bc,	// (0x0004a428) fep_hwr_write_pane_g1

0x85c9,	// (0x0004a435) fep_hwr_write_pane_g2_ParamLimits

0x85c9,	// (0x0004a435) fep_hwr_write_pane_g2

0x85d6,	// (0x0004a442) fep_hwr_write_pane_g3_ParamLimits

0x85d6,	// (0x0004a442) fep_hwr_write_pane_g3

0x85e4,	// (0x0004a450) fep_hwr_write_pane_g4_ParamLimits

0x85e4,	// (0x0004a450) fep_hwr_write_pane_g4

0x0005,

0xfb28,	// (0x00051994) fep_hwr_write_pane_g_ParamLimits

0xfb28,	// (0x00051994) fep_hwr_write_pane_g

0x27d5,	// (0x00044641) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x27d5,	// (0x00044641) bg_fep_hwr_candidate_pane_g2

0x85f9,	// (0x0004a465) cell_hwr_candidate_pane_ParamLimits

0x85f9,	// (0x0004a465) cell_hwr_candidate_pane

0x863b,	// (0x0004a4a7) fep_hwr_candidate_pane_g1_ParamLimits

0xc3c6,	// (0x0004e232) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc3c6,	// (0x0004e232) bg_popup_fep_shadow_pane_cp2

0xc556,	// (0x0004e3c2) fep_vkb_top_pane_g4_ParamLimits

0xc556,	// (0x0004e3c2) fep_vkb_top_pane_g4

0xc59c,	// (0x0004e408) fep_vkb_side_pane_g2_ParamLimits

0xc59c,	// (0x0004e408) fep_vkb_side_pane_g2

0x5807,	// (0x00047673) list_setting_pane_t4_ParamLimits

0x5807,	// (0x00047673) list_setting_pane_t4

0x58a1,	// (0x0004770d) list_setting_number_pane_t5_ParamLimits

0x58a1,	// (0x0004770d) list_setting_number_pane_t5

0x71bc,	// (0x00049028) list_double_heading_pane_cp2_ParamLimits

0x71bc,	// (0x00049028) list_double_heading_pane_cp2

0xbcb2,	// (0x0004db1e) list_double_heading_pane_g1_cp2_ParamLimits

0xbcb2,	// (0x0004db1e) list_double_heading_pane_g1_cp2

0xc8f3,	// (0x0004e75f) list_double_heading_pane_g2_cp2_ParamLimits

0xc8f3,	// (0x0004e75f) list_double_heading_pane_g2_cp2

0xc907,	// (0x0004e773) list_double_heading_pane_t1_cp2_ParamLimits

0xc907,	// (0x0004e773) list_double_heading_pane_t1_cp2

0xc91d,	// (0x0004e789) list_double_heading_pane_t2_cp2_ParamLimits

0xc91d,	// (0x0004e789) list_double_heading_pane_t2_cp2

0x0993,	// (0x000427ff) aid_value_unit2

0x6616,	// (0x00048482) popup_preview_fixed_window

0x0b35,	// (0x000429a1) bg_popup_preview_window_pane_cp02

0xc92f,	// (0x0004e79b) list_preview_fixed_pane

0xc975,	// (0x0004e7e1) list_empty_pane_fp_ParamLimits

0xc975,	// (0x0004e7e1) list_empty_pane_fp

0xc975,	// (0x0004e7e1) list_single_cale_day_pane_fp_ParamLimits

0xc975,	// (0x0004e7e1) list_single_cale_day_pane_fp

0xc975,	// (0x0004e7e1) list_single_graphic_heading_pane_fp_ParamLimits

0xc975,	// (0x0004e7e1) list_single_graphic_heading_pane_fp

0xc975,	// (0x0004e7e1) list_single_graphic_pane_fp_ParamLimits

0xc975,	// (0x0004e7e1) list_single_graphic_pane_fp

0xc975,	// (0x0004e7e1) list_single_heading_pane_fp_ParamLimits

0xc975,	// (0x0004e7e1) list_single_heading_pane_fp

0xc975,	// (0x0004e7e1) list_single_pane_fp_ParamLimits

0xc975,	// (0x0004e7e1) list_single_pane_fp

0xc98b,	// (0x0004e7f7) list_single_pane_fp_g1_ParamLimits

0xc98b,	// (0x0004e7f7) list_single_pane_fp_g1

0xc997,	// (0x0004e803) list_single_pane_fp_g2_ParamLimits

0xc997,	// (0x0004e803) list_single_pane_fp_g2

0xc9a3,	// (0x0004e80f) list_single_pane_fp_g3_ParamLimits

0xc9a3,	// (0x0004e80f) list_single_pane_fp_g3

0xc9b7,	// (0x0004e823) list_single_pane_fp_g4_ParamLimits

0xc9b7,	// (0x0004e823) list_single_pane_fp_g4

0x0003,

0xfb8a,	// (0x000519f6) list_single_pane_fp_g_ParamLimits

0xfb8a,	// (0x000519f6) list_single_pane_fp_g

0x608c,	// (0x00047ef8) list_single_pane_fp_t1_ParamLimits

0x608c,	// (0x00047ef8) list_single_pane_fp_t1

0x60a3,	// (0x00047f0f) list_single_graphic_pane_fp_g1_ParamLimits

0x60a3,	// (0x00047f0f) list_single_graphic_pane_fp_g1

0xc98b,	// (0x0004e7f7) list_single_graphic_pane_fp_g2_ParamLimits

0xc98b,	// (0x0004e7f7) list_single_graphic_pane_fp_g2

0xc997,	// (0x0004e803) list_single_graphic_pane_fp_g3_ParamLimits

0xc997,	// (0x0004e803) list_single_graphic_pane_fp_g3

0xc9a3,	// (0x0004e80f) list_single_graphic_pane_fp_g4_ParamLimits

0xc9a3,	// (0x0004e80f) list_single_graphic_pane_fp_g4

0xc9b7,	// (0x0004e823) list_single_graphic_pane_fp_g5_ParamLimits

0xc9b7,	// (0x0004e823) list_single_graphic_pane_fp_g5

0x0004,

0xfb93,	// (0x000519ff) list_single_graphic_pane_fp_g_ParamLimits

0xfb93,	// (0x000519ff) list_single_graphic_pane_fp_g

0x60af,	// (0x00047f1b) list_single_graphic_pane_fp_t1_ParamLimits

0x60af,	// (0x00047f1b) list_single_graphic_pane_fp_t1

0x60a3,	// (0x00047f0f) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x60a3,	// (0x00047f0f) list_single_graphic_heading_pane_fp_g1

0xc98b,	// (0x0004e7f7) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc98b,	// (0x0004e7f7) list_single_graphic_heading_pane_fp_g2

0xc997,	// (0x0004e803) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xc997,	// (0x0004e803) list_single_graphic_heading_pane_fp_g3

0xc9a3,	// (0x0004e80f) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc9a3,	// (0x0004e80f) list_single_graphic_heading_pane_fp_g4

0xc9b7,	// (0x0004e823) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc9b7,	// (0x0004e823) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb93,	// (0x000519ff) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb93,	// (0x000519ff) list_single_graphic_heading_pane_fp_g

0x60c5,	// (0x00047f31) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x60c5,	// (0x00047f31) list_single_graphic_heading_pane_fp_t1

0x60db,	// (0x00047f47) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x60db,	// (0x00047f47) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb9e,	// (0x00051a0a) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb9e,	// (0x00051a0a) list_single_graphic_heading_pane_fp_t

0x60ed,	// (0x00047f59) list_single_cale_day_pane_fp_g1_ParamLimits

0x60ed,	// (0x00047f59) list_single_cale_day_pane_fp_g1

0xc9c3,	// (0x0004e82f) list_single_cale_day_pane_fp_g2_ParamLimits

0xc9c3,	// (0x0004e82f) list_single_cale_day_pane_fp_g2

0x86c7,	// (0x0004a533) list_single_cale_day_pane_fp_g3_ParamLimits

0x86c7,	// (0x0004a533) list_single_cale_day_pane_fp_g3

0x86ef,	// (0x0004a55b) list_single_cale_day_pane_fp_g4_ParamLimits

0x86ef,	// (0x0004a55b) list_single_cale_day_pane_fp_g4

0x8713,	// (0x0004a57f) list_single_cale_day_pane_fp_g5_ParamLimits

0x8713,	// (0x0004a57f) list_single_cale_day_pane_fp_g5

0x0004,

0xfba3,	// (0x00051a0f) list_single_cale_day_pane_fp_g_ParamLimits

0xfba3,	// (0x00051a0f) list_single_cale_day_pane_fp_g

0x6125,	// (0x00047f91) list_single_cale_day_pane_fp_t1_ParamLimits

0x6125,	// (0x00047f91) list_single_cale_day_pane_fp_t1

0x614b,	// (0x00047fb7) list_single_cale_day_pane_fp_t2_ParamLimits

0x614b,	// (0x00047fb7) list_single_cale_day_pane_fp_t2

0x6164,	// (0x00047fd0) list_single_cale_day_pane_fp_t3_ParamLimits

0x6164,	// (0x00047fd0) list_single_cale_day_pane_fp_t3

0x0002,

0xfbae,	// (0x00051a1a) list_single_cale_day_pane_fp_t_ParamLimits

0xfbae,	// (0x00051a1a) list_single_cale_day_pane_fp_t

0xc98b,	// (0x0004e7f7) list_empty_pane_fp_g1_ParamLimits

0xc98b,	// (0x0004e7f7) list_empty_pane_fp_g1

0x617d,	// (0x00047fe9) list_empty_pane_fp_t1

0x618b,	// (0x00047ff7) list_empty_pane_fp_t2

0x0001,

0xfbb5,	// (0x00051a21) list_empty_pane_fp_t

0xc98b,	// (0x0004e7f7) list_single_heading_pane_fp_g1_ParamLimits

0xc98b,	// (0x0004e7f7) list_single_heading_pane_fp_g1

0xc997,	// (0x0004e803) list_single_heading_pane_fp_g2_ParamLimits

0xc997,	// (0x0004e803) list_single_heading_pane_fp_g2

0xc9a3,	// (0x0004e80f) list_single_heading_pane_fp_g3_ParamLimits

0xc9a3,	// (0x0004e80f) list_single_heading_pane_fp_g3

0x0002,

0xfbba,	// (0x00051a26) list_single_heading_pane_fp_g_ParamLimits

0xfbba,	// (0x00051a26) list_single_heading_pane_fp_g

0x6199,	// (0x00048005) list_single_heading_pane_fp_t1_ParamLimits

0x6199,	// (0x00048005) list_single_heading_pane_fp_t1

0x61ab,	// (0x00048017) list_single_heading_pane_fp_t2_ParamLimits

0x61ab,	// (0x00048017) list_single_heading_pane_fp_t2

0x0001,

0xfbc1,	// (0x00051a2d) list_single_heading_pane_fp_t_ParamLimits

0xfbc1,	// (0x00051a2d) list_single_heading_pane_fp_t

0x6e8a,	// (0x00048cf6) aid_size_cell_fast

0x0b18,	// (0x00042984) soft_indicator_pane_cp1_t1

0x6e93,	// (0x00048cff) cell_app_pane_cp2_ParamLimits

0x6e93,	// (0x00048cff) cell_app_pane_cp2

0x848b,	// (0x0004a2f7) fep_hwr_candidate_drop_down_list_pane

0x27e3,	// (0x0004464f) fep_hwr_candidate_pane_g3_ParamLimits

0x27e3,	// (0x0004464f) fep_hwr_candidate_pane_g3

0x27f0,	// (0x0004465c) fep_hwr_candidate_pane_g4_ParamLimits

0x27f0,	// (0x0004465c) fep_hwr_candidate_pane_g4

0x0002,

0xfb35,	// (0x000519a1) fep_hwr_candidate_pane_g_ParamLimits

0xfb35,	// (0x000519a1) fep_hwr_candidate_pane_g

0xc44b,	// (0x0004e2b7) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc44b,	// (0x0004e2b7) fep_vkb_candidate_drop_down_list_pane

0xc84e,	// (0x0004e6ba) fep_vkb_candidate_pane_g3

0xc856,	// (0x0004e6c2) fep_vkb_candidate_pane_g4

0x0002,

0xfb62,	// (0x000519ce) fep_vkb_candidate_pane_g

0xc556,	// (0x0004e3c2) cell_hwr_candidate_pane_g1_ParamLimits

0xc86d,	// (0x0004e6d9) cell_hwr_candidate_pane_g3_ParamLimits

0xc86d,	// (0x0004e6d9) cell_hwr_candidate_pane_g3

0xc88e,	// (0x0004e6fa) cell_hwr_candidate_pane_g4_ParamLimits

0xc88e,	// (0x0004e6fa) cell_hwr_candidate_pane_g4

0x0002,

0xfb7c,	// (0x000519e8) cell_hwr_candidate_pane_g_ParamLimits

0xfb7c,	// (0x000519e8) cell_hwr_candidate_pane_g

0xc8af,	// (0x0004e71b) cell_vkb_candidate_pane_g3_ParamLimits

0xc8af,	// (0x0004e71b) cell_vkb_candidate_pane_g3

0xc8ca,	// (0x0004e736) cell_vkb_candidate_pane_g4_ParamLimits

0xc8ca,	// (0x0004e736) cell_vkb_candidate_pane_g4

0xc9cf,	// (0x0004e83b) cell_app_pane_cp2_g1_ParamLimits

0xc9cf,	// (0x0004e83b) cell_app_pane_cp2_g1

0xc9ed,	// (0x0004e859) cell_app_pane_cp2_g2_ParamLimits

0xc9ed,	// (0x0004e859) cell_app_pane_cp2_g2

0x0001,

0xfbc6,	// (0x00051a32) cell_app_pane_cp2_g_ParamLimits

0xfbc6,	// (0x00051a32) cell_app_pane_cp2_g

0xc9f9,	// (0x0004e865) cell_app_pane_cp2_t1_ParamLimits

0xc9f9,	// (0x0004e865) cell_app_pane_cp2_t1

0x0dbd,	// (0x00042c29) grid_highlight_pane_cp1_ParamLimits

0x0dbd,	// (0x00042c29) grid_highlight_pane_cp1

0x8737,	// (0x0004a5a3) cell_hwr_candidate_pane_cp1_ParamLimits

0x8737,	// (0x0004a5a3) cell_hwr_candidate_pane_cp1

0xc556,	// (0x0004e3c2) fep_hwr_candidate_drop_down_list_pane_g1

0xca0b,	// (0x0004e877) fep_hwr_candidate_drop_down_list_pane_g2

0xca18,	// (0x0004e884) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbcb,	// (0x00051a37) fep_hwr_candidate_drop_down_list_pane_g

0x8756,	// (0x0004a5c2) fep_hwr_candidate_drop_down_list_scroll_pane

0x875f,	// (0x0004a5cb) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x875f,	// (0x0004a5cb) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x876c,	// (0x0004a5d8) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x876c,	// (0x0004a5d8) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x8779,	// (0x0004a5e5) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x8779,	// (0x0004a5e5) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc8af,	// (0x0004e71b) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc8af,	// (0x0004e71b) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc8ca,	// (0x0004e736) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc8ca,	// (0x0004e736) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x8786,	// (0x0004a5f2) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x8786,	// (0x0004a5f2) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x87a1,	// (0x0004a60d) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x87a1,	// (0x0004a60d) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x87bc,	// (0x0004a628) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x87bc,	// (0x0004a628) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd2,	// (0x00051a3e) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd2,	// (0x00051a3e) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xca25,	// (0x0004e891) cell_vkb_candidate_pane_cp1_ParamLimits

0xca25,	// (0x0004e891) cell_vkb_candidate_pane_cp1

0xc556,	// (0x0004e3c2) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc556,	// (0x0004e3c2) fep_vkb_candidate_drop_down_list_pane_g1

0xca0b,	// (0x0004e877) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xca0b,	// (0x0004e877) fep_vkb_candidate_drop_down_list_pane_g2

0xca18,	// (0x0004e884) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xca18,	// (0x0004e884) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbcb,	// (0x00051a37) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbcb,	// (0x00051a37) fep_vkb_candidate_drop_down_list_pane_g

0xca45,	// (0x0004e8b1) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xca45,	// (0x0004e8b1) fep_vkb_candidate_drop_down_list_scroll_pane

0xca52,	// (0x0004e8be) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xca52,	// (0x0004e8be) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xca5f,	// (0x0004e8cb) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xca5f,	// (0x0004e8cb) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xca6b,	// (0x0004e8d7) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xca6b,	// (0x0004e8d7) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc86d,	// (0x0004e6d9) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc86d,	// (0x0004e6d9) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc88e,	// (0x0004e6fa) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc88e,	// (0x0004e6fa) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xca77,	// (0x0004e8e3) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xca77,	// (0x0004e8e3) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xca98,	// (0x0004e904) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xca98,	// (0x0004e904) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xcab9,	// (0x0004e925) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xcab9,	// (0x0004e925) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe3,	// (0x00051a4f) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe3,	// (0x00051a4f) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x6730,	// (0x0004859c) title_pane_g1_ParamLimits

0x673d,	// (0x000485a9) title_pane_g2_ParamLimits

0xf54e,	// (0x000513ba) title_pane_g_ParamLimits

0x11e8,	// (0x00043054) aid_call2_pane

0x11e0,	// (0x0004304c) aid_call_pane

0x11f0,	// (0x0004305c) popup_clock_analogue_window_g1

0x11f0,	// (0x0004305c) popup_clock_analogue_window_g2

0x719d,	// (0x00049009) popup_clock_analogue_window_g3

0x71a6,	// (0x00049012) popup_clock_analogue_window_g4

0x09a5,	// (0x00042811) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x0005155f) popup_clock_analogue_window_g

0x71ae,	// (0x0004901a) popup_clock_analogue_window_t1

0x71e6,	// (0x00049052) clock_digital_number_pane_ParamLimits

0x71e6,	// (0x00049052) clock_digital_number_pane

0x71f2,	// (0x0004905e) clock_digital_number_pane_cp02_ParamLimits

0x71f2,	// (0x0004905e) clock_digital_number_pane_cp02

0x71fe,	// (0x0004906a) clock_digital_number_pane_cp03_ParamLimits

0x71fe,	// (0x0004906a) clock_digital_number_pane_cp03

0x720a,	// (0x00049076) clock_digital_number_pane_cp04_ParamLimits

0x720a,	// (0x00049076) clock_digital_number_pane_cp04

0x7216,	// (0x00049082) clock_digital_separator_pane_ParamLimits

0x7216,	// (0x00049082) clock_digital_separator_pane

0x7222,	// (0x0004908e) popup_clock_digital_window_t1_ParamLimits

0x7222,	// (0x0004908e) popup_clock_digital_window_t1

0x09a5,	// (0x00042811) clock_digital_number_pane_g1

0x09a5,	// (0x00042811) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x0005156a) clock_digital_number_pane_g

0x09a5,	// (0x00042811) clock_digital_separator_pane_g1

0x09a5,	// (0x00042811) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x0005156a) clock_digital_separator_pane_g

0x985d,	// (0x0004b6c9) aid_fill_nsta_ParamLimits

0x99a9,	// (0x0004b815) indicator_nsta_pane_ParamLimits

0x9b22,	// (0x0004b98e) popup_clock_analogue_window

0x9b22,	// (0x0004b98e) popup_clock_digital_window

0x0a0b,	// (0x00042877) grid_indicator_nsta_pane_ParamLimits

0xbcf1,	// (0x0004db5d) clock_nsta_pane_t2

0x0001,

0xfab5,	// (0x00051921) clock_nsta_pane_t

0x70c8,	// (0x00048f34) aid_size_max_handle

0x70d2,	// (0x00048f3e) aid_size_min_handle

0x94f0,	// (0x0004b35c) editor_scroll_pane

0xcad4,	// (0x0004e940) ex_editor_pane

0x0edc,	// (0x00042d48) scroll_pane_cp13

0x0d65,	// (0x00042bd1) scroll_pane_cp14

0x121f,	// (0x0004308b) scroll_pane_cp36

0x71d0,	// (0x0004903c) list_single_graphic_hl_pane_cp2_ParamLimits

0x71d0,	// (0x0004903c) list_single_graphic_hl_pane_cp2

0x5d81,	// (0x00047bed) list_single_graphic_hl_pane_ParamLimits

0x5d81,	// (0x00047bed) list_single_graphic_hl_pane

0x61c1,	// (0x0004802d) aid_size_min_hl_cp1

0xcadc,	// (0x0004e948) list_highlight_pane_cp34_ParamLimits

0xcadc,	// (0x0004e948) list_highlight_pane_cp34

0xcaed,	// (0x0004e959) list_single_graphic_hl_pane_g1_ParamLimits

0xcaed,	// (0x0004e959) list_single_graphic_hl_pane_g1

0x61ca,	// (0x00048036) list_single_graphic_hl_pane_g2_ParamLimits

0x61ca,	// (0x00048036) list_single_graphic_hl_pane_g2

0x61ca,	// (0x00048036) list_single_graphic_hl_pane_g3_ParamLimits

0x61ca,	// (0x00048036) list_single_graphic_hl_pane_g3

0x9461,	// (0x0004b2cd) list_single_graphic_hl_pane_g4_ParamLimits

0x9461,	// (0x0004b2cd) list_single_graphic_hl_pane_g4

0x61d6,	// (0x00048042) list_single_graphic_hl_pane_g5_ParamLimits

0x61d6,	// (0x00048042) list_single_graphic_hl_pane_g5

0x0004,

0xfbf4,	// (0x00051a60) list_single_graphic_hl_pane_g_ParamLimits

0xfbf4,	// (0x00051a60) list_single_graphic_hl_pane_g

0x61ea,	// (0x00048056) list_single_graphic_hl_pane_t1_ParamLimits

0x61ea,	// (0x00048056) list_single_graphic_hl_pane_t1

0xcafa,	// (0x0004e966) aid_size_min_hl_cp2

0xcb03,	// (0x0004e96f) list_highlight_pane_cp34_cp2_ParamLimits

0xcb03,	// (0x0004e96f) list_highlight_pane_cp34_cp2

0xcaed,	// (0x0004e959) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xcaed,	// (0x0004e959) list_single_graphic_hl_pane_g1_cp2

0xcb10,	// (0x0004e97c) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xcb10,	// (0x0004e97c) list_single_graphic_hl_pane_g2_cp2

0xcb1c,	// (0x0004e988) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcb1c,	// (0x0004e988) list_single_graphic_hl_pane_g3_cp2

0x7689,	// (0x000494f5) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7689,	// (0x000494f5) list_single_graphic_hl_pane_g4_cp2

0xcb2a,	// (0x0004e996) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xcb2a,	// (0x0004e996) list_single_graphic_hl_pane_g5_cp2

0x778c,	// (0x000495f8) control_pane_g4_ParamLimits

0x778c,	// (0x000495f8) control_pane_g4

0x983b,	// (0x0004b6a7) bg_popup_sub_pane_cp10_ParamLimits

0xc2f0,	// (0x0004e15c) list_choice_list_pane_ParamLimits

0xc2ff,	// (0x0004e16b) scroll_pane_cp23

0x0b35,	// (0x000429a1) bg_popup_preview_window_pane_cp02_ParamLimits

0xc92f,	// (0x0004e79b) list_preview_fixed_pane_ParamLimits

0xc945,	// (0x0004e7b1) list_preview_fixed_pane_cp_ParamLimits

0xc945,	// (0x0004e7b1) list_preview_fixed_pane_cp

0xc951,	// (0x0004e7bd) popup_preview_fixed_window_g1_ParamLimits

0xc951,	// (0x0004e7bd) popup_preview_fixed_window_g1

0xc95d,	// (0x0004e7c9) popup_preview_fixed_window_g2_ParamLimits

0xc95d,	// (0x0004e7c9) popup_preview_fixed_window_g2

0x0002,

0xfb83,	// (0x000519ef) popup_preview_fixed_window_g_ParamLimits

0xfb83,	// (0x000519ef) popup_preview_fixed_window_g

0x6fa2,	// (0x00048e0e) aid_navi_side_left_pane_ParamLimits

0x6fb7,	// (0x00048e23) aid_navi_side_right_pane_ParamLimits

0x6fcf,	// (0x00048e3b) navi_icon_pane_stacon_ParamLimits

0x6fe3,	// (0x00048e4f) navi_navi_pane_stacon_ParamLimits

0x6fcf,	// (0x00048e3b) navi_text_pane_stacon_ParamLimits

0x099b,	// (0x00042807) main_text_info_pane

0xcb54,	// (0x0004e9c0) listscroll_text_info_pane

0xcb5c,	// (0x0004e9c8) list_text_info_pane_ParamLimits

0xcb5c,	// (0x0004e9c8) list_text_info_pane

0xcb6b,	// (0x0004e9d7) scroll_pane_cp24_ParamLimits

0xcb6b,	// (0x0004e9d7) scroll_pane_cp24

0xcb89,	// (0x0004e9f5) list_text_info_pane_t1_ParamLimits

0xcb89,	// (0x0004e9f5) list_text_info_pane_t1

0x78fa,	// (0x00049766) popup_fast_swap2_window_ParamLimits

0x78fa,	// (0x00049766) popup_fast_swap2_window

0xcbbd,	// (0x0004ea29) aid_size_cell_fast2

0x099b,	// (0x00042807) bg_popup_window_pane_cp17

0xa1af,	// (0x0004c01b) heading_pane_cp2

0x0c69,	// (0x00042ad5) listscroll_fast2_pane

0xcbc7,	// (0x0004ea33) grid_fast2_pane

0xcbd1,	// (0x0004ea3d) listscroll_fast2_pane_g1

0xcbd9,	// (0x0004ea45) listscroll_fast2_pane_g2

0x0001,

0xfbff,	// (0x00051a6b) listscroll_fast2_pane_g

0x0edc,	// (0x00042d48) scroll_pane_cp26

0xcbe3,	// (0x0004ea4f) cell_fast2_pane_ParamLimits

0xcbe3,	// (0x0004ea4f) cell_fast2_pane

0xcbf8,	// (0x0004ea64) cell_fast2_pane_g1

0xcc01,	// (0x0004ea6d) cell_fast2_pane_g2

0xcc0a,	// (0x0004ea76) cell_fast2_pane_g3

0x0002,

0xfc04,	// (0x00051a70) cell_fast2_pane_g

0x0c9c,	// (0x00042b08) grid_highlight_pane_cp9

0x0cb1,	// (0x00042b1d) main_eswt_pane_ParamLimits

0x0cb1,	// (0x00042b1d) main_eswt_pane

0xcb80,	// (0x0004e9ec) list_single_text_info_pane

0xcc12,	// (0x0004ea7e) eswt_ctrl_button_pane

0xcc12,	// (0x0004ea7e) eswt_ctrl_canvas_pane

0xcc1a,	// (0x0004ea86) eswt_ctrl_combo_pane

0xcc12,	// (0x0004ea7e) eswt_ctrl_default_pane

0xcc12,	// (0x0004ea7e) eswt_ctrl_label_pane

0xcc22,	// (0x0004ea8e) eswt_ctrl_wait_pane

0xcc2a,	// (0x0004ea96) eswt_shell_pane

0x099b,	// (0x00042807) listscroll_eswt_app_pane

0xcc4a,	// (0x0004eab6) popup_eswt_tasktip_window_ParamLimits

0xcc4a,	// (0x0004eab6) popup_eswt_tasktip_window

0x9dbc,	// (0x0004bc28) bg_popup_window_pane_cp18

0xcc5b,	// (0x0004eac7) eswt_control_pane_g1_ParamLimits

0xcc5b,	// (0x0004eac7) eswt_control_pane_g1

0xcc68,	// (0x0004ead4) eswt_control_pane_g2_ParamLimits

0xcc68,	// (0x0004ead4) eswt_control_pane_g2

0xcc75,	// (0x0004eae1) eswt_control_pane_g3_ParamLimits

0xcc75,	// (0x0004eae1) eswt_control_pane_g3

0xcc82,	// (0x0004eaee) eswt_control_pane_g4_ParamLimits

0xcc82,	// (0x0004eaee) eswt_control_pane_g4

0x0003,

0xfc0b,	// (0x00051a77) eswt_control_pane_g_ParamLimits

0xfc0b,	// (0x00051a77) eswt_control_pane_g

0x0dbd,	// (0x00042c29) bg_button_pane_ParamLimits

0x0dbd,	// (0x00042c29) bg_button_pane

0x0cb1,	// (0x00042b1d) common_borders_pane_copy2_ParamLimits

0x0cb1,	// (0x00042b1d) common_borders_pane_copy2

0xcc8f,	// (0x0004eafb) control_button_pane_g1_ParamLimits

0xcc8f,	// (0x0004eafb) control_button_pane_g1

0xcc9b,	// (0x0004eb07) control_button_pane_g2_ParamLimits

0xcc9b,	// (0x0004eb07) control_button_pane_g2

0xcca7,	// (0x0004eb13) control_button_pane_g3_ParamLimits

0xcca7,	// (0x0004eb13) control_button_pane_g3

0x0002,

0xfc14,	// (0x00051a80) control_button_pane_g_ParamLimits

0xfc14,	// (0x00051a80) control_button_pane_g

0xccbb,	// (0x0004eb27) control_button_pane_t1

0xccc9,	// (0x0004eb35) control_button_pane_t2

0x0001,

0xfc1b,	// (0x00051a87) control_button_pane_t

0x9d48,	// (0x0004bbb4) bg_button_pane_g1

0x9d50,	// (0x0004bbbc) bg_button_pane_g2

0x9d58,	// (0x0004bbc4) bg_button_pane_g3

0x9d60,	// (0x0004bbcc) bg_button_pane_g4

0x9d68,	// (0x0004bbd4) bg_button_pane_g5

0x9d70,	// (0x0004bbdc) bg_button_pane_g6

0x9d78,	// (0x0004bbe4) bg_button_pane_g7

0x9d80,	// (0x0004bbec) bg_button_pane_g8

0x9d88,	// (0x0004bbf4) bg_button_pane_g9

0x0008,

0xf861,	// (0x000516cd) bg_button_pane_g

0xc2ab,	// (0x0004e117) common_borders_pane_ParamLimits

0xc2ab,	// (0x0004e117) common_borders_pane

0xcc5b,	// (0x0004eac7) eswt_control_pane_g1_copy1_ParamLimits

0xcc5b,	// (0x0004eac7) eswt_control_pane_g1_copy1

0xcc68,	// (0x0004ead4) eswt_control_pane_g2_copy1_ParamLimits

0xcc68,	// (0x0004ead4) eswt_control_pane_g2_copy1

0xcc75,	// (0x0004eae1) eswt_control_pane_g3_copy1_ParamLimits

0xcc75,	// (0x0004eae1) eswt_control_pane_g3_copy1

0xcc82,	// (0x0004eaee) eswt_control_pane_g4_copy1_ParamLimits

0xcc82,	// (0x0004eaee) eswt_control_pane_g4_copy1

0xc2e6,	// (0x0004e152) bg_eswt_ctrl_canvas_pane_g1

0xc2ab,	// (0x0004e117) common_borders_pane_cp2_ParamLimits

0xc2ab,	// (0x0004e117) common_borders_pane_cp2

0xc2ab,	// (0x0004e117) common_borders_pane_cp3_ParamLimits

0xc2ab,	// (0x0004e117) common_borders_pane_cp3

0xccd7,	// (0x0004eb43) separator_horizontal_pane

0xccdf,	// (0x0004eb4b) separator_vertical_pane

0xcc5b,	// (0x0004eac7) eswt_control_pane_g1_copy2_ParamLimits

0xcc5b,	// (0x0004eac7) eswt_control_pane_g1_copy2

0xcc68,	// (0x0004ead4) eswt_control_pane_g2_copy2_ParamLimits

0xcc68,	// (0x0004ead4) eswt_control_pane_g2_copy2

0xcc75,	// (0x0004eae1) eswt_control_pane_g3_copy2_ParamLimits

0xcc75,	// (0x0004eae1) eswt_control_pane_g3_copy2

0xcc82,	// (0x0004eaee) eswt_control_pane_g4_copy2_ParamLimits

0xcc82,	// (0x0004eaee) eswt_control_pane_g4_copy2

0x099b,	// (0x00042807) common_borders_pane_cp4

0xcce8,	// (0x0004eb54) separator_horizontal_pane_g1

0xccf1,	// (0x0004eb5d) separator_horizontal_pane_g2

0xccfa,	// (0x0004eb66) separator_horizontal_pane_g3

0x0002,

0xfc20,	// (0x00051a8c) separator_horizontal_pane_g

0xcc5b,	// (0x0004eac7) eswt_control_pane_g1_copy3_ParamLimits

0xcc5b,	// (0x0004eac7) eswt_control_pane_g1_copy3

0xcc68,	// (0x0004ead4) eswt_control_pane_g2_copy3_ParamLimits

0xcc68,	// (0x0004ead4) eswt_control_pane_g2_copy3

0xcc75,	// (0x0004eae1) eswt_control_pane_g3_copy3_ParamLimits

0xcc75,	// (0x0004eae1) eswt_control_pane_g3_copy3

0xcc82,	// (0x0004eaee) eswt_control_pane_g4_copy3_ParamLimits

0xcc82,	// (0x0004eaee) eswt_control_pane_g4_copy3

0x099b,	// (0x00042807) common_borders_pane_cp5

0xcd03,	// (0x0004eb6f) separator_vertical_pane_g1

0xcd0c,	// (0x0004eb78) separator_vertical_pane_g2

0xcd15,	// (0x0004eb81) separator_vertical_pane_g3

0x0002,

0xfc27,	// (0x00051a93) separator_vertical_pane_g

0xcc5b,	// (0x0004eac7) eswt_control_pane_g1_copy4_ParamLimits

0xcc5b,	// (0x0004eac7) eswt_control_pane_g1_copy4

0xcc68,	// (0x0004ead4) eswt_control_pane_g2_copy4_ParamLimits

0xcc68,	// (0x0004ead4) eswt_control_pane_g2_copy4

0xcc75,	// (0x0004eae1) eswt_control_pane_g3_copy4_ParamLimits

0xcc75,	// (0x0004eae1) eswt_control_pane_g3_copy4

0xcc82,	// (0x0004eaee) eswt_control_pane_g4_copy4_ParamLimits

0xcc82,	// (0x0004eaee) eswt_control_pane_g4_copy4

0xcd1e,	// (0x0004eb8a) eswt_ctrl_combo_button_pane

0xcd26,	// (0x0004eb92) eswt_ctrl_input_pane

0xcd2e,	// (0x0004eb9a) popup_choice_list_window_cp70

0xcd36,	// (0x0004eba2) eswt_ctrl_input_pane_t1

0x099b,	// (0x00042807) input_focus_pane_cp70

0xc2ab,	// (0x0004e117) bg_button_pane_cp70_ParamLimits

0xc2ab,	// (0x0004e117) bg_button_pane_cp70

0xcd44,	// (0x0004ebb0) eswt_ctrl_combo_button_pane_g1

0xcd4c,	// (0x0004ebb8) wait_bar_pane_cp70

0x9dbc,	// (0x0004bc28) bg_popup_window_pane_cp70_ParamLimits

0x9dbc,	// (0x0004bc28) bg_popup_window_pane_cp70

0xcd54,	// (0x0004ebc0) popup_eswt_tasktip_window_t1

0xcd6a,	// (0x0004ebd6) wait_bar_pane_cp71_ParamLimits

0xcd6a,	// (0x0004ebd6) wait_bar_pane_cp71

0xcd76,	// (0x0004ebe2) grid_eswt_app_pane

0x10c3,	// (0x00042f2f) scroll_pane_cp70

0xcd7f,	// (0x0004ebeb) cell_eswt_app_pane_ParamLimits

0xcd7f,	// (0x0004ebeb) cell_eswt_app_pane

0xcdaf,	// (0x0004ec1b) cell_eswt_app_pane_g1_ParamLimits

0xcdaf,	// (0x0004ec1b) cell_eswt_app_pane_g1

0xcdde,	// (0x0004ec4a) cell_eswt_app_pane_g2_ParamLimits

0xcdde,	// (0x0004ec4a) cell_eswt_app_pane_g2

0x0001,

0xfc2e,	// (0x00051a9a) cell_eswt_app_pane_g_ParamLimits

0xfc2e,	// (0x00051a9a) cell_eswt_app_pane_g

0xce02,	// (0x0004ec6e) cell_eswt_app_pane_t1_ParamLimits

0xce02,	// (0x0004ec6e) cell_eswt_app_pane_t1

0xce34,	// (0x0004eca0) grid_highlight_pane_cp70_ParamLimits

0xce34,	// (0x0004eca0) grid_highlight_pane_cp70

0x7625,	// (0x00049491) set_content_pane_g1

0x9797,	// (0x0004b603) status_small_volume_pane

0x87d7,	// (0x0004a643) status_small_volume_pane_g1

0x87df,	// (0x0004a64b) volume_small2_pane

0x87e8,	// (0x0004a654) volume_small2_pane_g1

0x87f1,	// (0x0004a65d) volume_small2_pane_g2

0x87fa,	// (0x0004a666) volume_small2_pane_g3

0x8803,	// (0x0004a66f) volume_small2_pane_g4

0x880c,	// (0x0004a678) volume_small2_pane_g5

0x8815,	// (0x0004a681) volume_small2_pane_g6

0x881e,	// (0x0004a68a) volume_small2_pane_g7

0x8827,	// (0x0004a693) volume_small2_pane_g8

0x8830,	// (0x0004a69c) volume_small2_pane_g9

0x8839,	// (0x0004a6a5) volume_small2_pane_g10

0x0009,

0xfc33,	// (0x00051a9f) volume_small2_pane_g

0xc69e,	// (0x0004e50a) fep_vkb_top_text_pane_g1_ParamLimits

0xc6b9,	// (0x0004e525) fep_vkb_top_text_pane_t1_ParamLimits

0xc969,	// (0x0004e7d5) popup_preview_fixed_window_g3_ParamLimits

0xc969,	// (0x0004e7d5) popup_preview_fixed_window_g3

0x7da9,	// (0x00049c15) popup_toolbar_trans_pane

0xb0e6,	// (0x0004cf52) aid_height_set_list_ParamLimits

0xb0f7,	// (0x0004cf63) aid_size_parent_ParamLimits

0x983b,	// (0x0004b6a7) list_highlight_pane_cp2_ParamLimits

0x7625,	// (0x00049491) set_content_pane_g1_ParamLimits

0x8244,	// (0x0004a0b0) list_single_image_pane_ParamLimits

0x8244,	// (0x0004a0b0) list_single_image_pane

0xce40,	// (0x0004ecac) aid_size_cell_image_ParamLimits

0xce40,	// (0x0004ecac) aid_size_cell_image

0xce4d,	// (0x0004ecb9) grid_single_image_pane_ParamLimits

0xce4d,	// (0x0004ecb9) grid_single_image_pane

0xc997,	// (0x0004e803) list_single_image_pane_g1_ParamLimits

0xc997,	// (0x0004e803) list_single_image_pane_g1

0xc9a3,	// (0x0004e80f) list_single_image_pane_g2_ParamLimits

0xc9a3,	// (0x0004e80f) list_single_image_pane_g2

0x0001,

0xfc48,	// (0x00051ab4) list_single_image_pane_g_ParamLimits

0xfc48,	// (0x00051ab4) list_single_image_pane_g

0xce5b,	// (0x0004ecc7) list_single_image_pane_t1_ParamLimits

0xce5b,	// (0x0004ecc7) list_single_image_pane_t1

0xce71,	// (0x0004ecdd) cell_image_list_pane_ParamLimits

0xce71,	// (0x0004ecdd) cell_image_list_pane

0xce85,	// (0x0004ecf1) cell_image_list_pane_g1

0xce8e,	// (0x0004ecfa) cell_image_list_pane_g2

0x0001,

0xfc4d,	// (0x00051ab9) cell_image_list_pane_g

0xce97,	// (0x0004ed03) aid_size_cell_tb_trans_pane

0x0dbd,	// (0x00042c29) bg_tb_trans_pane

0xcea9,	// (0x0004ed15) grid_tb_trans_pane

0x9d48,	// (0x0004bbb4) bg_tb_trans_pane_g1

0x9d50,	// (0x0004bbbc) bg_tb_trans_pane_g2

0x9d58,	// (0x0004bbc4) bg_tb_trans_pane_g3

0x9d60,	// (0x0004bbcc) bg_tb_trans_pane_g4

0x9d68,	// (0x0004bbd4) bg_tb_trans_pane_g5

0x9d80,	// (0x0004bbec) bg_tb_trans_pane_g6

0x9d88,	// (0x0004bbf4) bg_tb_trans_pane_g7

0x9d70,	// (0x0004bbdc) bg_tb_trans_pane_g8

0x9d78,	// (0x0004bbe4) bg_tb_trans_pane_g9

0x0008,

0xfc52,	// (0x00051abe) bg_tb_trans_pane_g

0xcebd,	// (0x0004ed29) cell_toolbar_trans_pane_ParamLimits

0xcebd,	// (0x0004ed29) cell_toolbar_trans_pane

0xc2e6,	// (0x0004e152) cell_toolbar_trans_pane_g1

0xbeb1,	// (0x0004dd1d) list_form2_midp_pane_t1

0xbebf,	// (0x0004dd2b) list_form2_midp_pane_t2

0x0001,

0xfafb,	// (0x00051967) list_form2_midp_pane_t

0xbecd,	// (0x0004dd39) scroll_pane_cp51_ParamLimits

0xc089,	// (0x0004def5) form2_midp_wait_pane_g1

0xc092,	// (0x0004defe) form2_midp_wait_pane_g2

0xc09b,	// (0x0004df07) form2_midp_wait_pane_g3

0x0002,

0xfb10,	// (0x0005197c) form2_midp_wait_pane_g

0x0a0b,	// (0x00042877) list_highlight_pane_cp21_ParamLimits

0xc0e3,	// (0x0004df4f) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc0f2,	// (0x0004df5e) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x81e5,	// (0x0004a051) list_single_2graphic_im_pane_ParamLimits

0x81e5,	// (0x0004a051) list_single_2graphic_im_pane

0xcee3,	// (0x0004ed4f) list_single_2graphic_im_pane_g1_ParamLimits

0xcee3,	// (0x0004ed4f) list_single_2graphic_im_pane_g1

0xcef4,	// (0x0004ed60) list_single_2graphic_im_pane_g2_ParamLimits

0xcef4,	// (0x0004ed60) list_single_2graphic_im_pane_g2

0xcf00,	// (0x0004ed6c) list_single_2graphic_im_pane_g3_ParamLimits

0xcf00,	// (0x0004ed6c) list_single_2graphic_im_pane_g3

0x0003,

0xfc65,	// (0x00051ad1) list_single_2graphic_im_pane_g_ParamLimits

0xfc65,	// (0x00051ad1) list_single_2graphic_im_pane_g

0xcf20,	// (0x0004ed8c) list_single_2graphic_im_pane_t1_ParamLimits

0xcf20,	// (0x0004ed8c) list_single_2graphic_im_pane_t1

0xc975,	// (0x0004e7e1) list_single_graphic_2heading_pane_fp_ParamLimits

0xc975,	// (0x0004e7e1) list_single_graphic_2heading_pane_fp

0x60a3,	// (0x00047f0f) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x60a3,	// (0x00047f0f) list_single_graphic_2heading_pane_fp_g1

0xc98b,	// (0x0004e7f7) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc98b,	// (0x0004e7f7) list_single_graphic_2heading_pane_fp_g2

0xc997,	// (0x0004e803) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xc997,	// (0x0004e803) list_single_graphic_2heading_pane_fp_g3

0xc9a3,	// (0x0004e80f) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc9a3,	// (0x0004e80f) list_single_graphic_2heading_pane_fp_g4

0xc9b7,	// (0x0004e823) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc9b7,	// (0x0004e823) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb93,	// (0x000519ff) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb93,	// (0x000519ff) list_single_graphic_2heading_pane_fp_g

0x6200,	// (0x0004806c) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x6200,	// (0x0004806c) list_single_graphic_2heading_pane_fp_t1

0x60db,	// (0x00047f47) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x60db,	// (0x00047f47) list_single_graphic_2heading_pane_fp_t2

0x6216,	// (0x00048082) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x6216,	// (0x00048082) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6e,	// (0x00051ada) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6e,	// (0x00051ada) list_single_graphic_2heading_pane_fp_t

0xc372,	// (0x0004e1de) fep_hwr_write_pane_g5_ParamLimits

0xc372,	// (0x0004e1de) fep_hwr_write_pane_g5

0xc37e,	// (0x0004e1ea) fep_hwr_write_pane_g6_ParamLimits

0xc37e,	// (0x0004e1ea) fep_hwr_write_pane_g6

0xcc2a,	// (0x0004ea96) eswt_shell_pane_ParamLimits

0x9dbc,	// (0x0004bc28) bg_popup_window_pane_cp18_ParamLimits

0xb03f,	// (0x0004ceab) heading_pane_cp70

0xcd54,	// (0x0004ebc0) popup_eswt_tasktip_window_t1_ParamLimits

0x98b2,	// (0x0004b71e) aid_touch_tab_arrow_left

0x98c1,	// (0x0004b72d) aid_touch_tab_arrow_right

0x674e,	// (0x000485ba) title_pane_g3_ParamLimits

0x674e,	// (0x000485ba) title_pane_g3

0x0d85,	// (0x00042bf1) set_value_pane_g1

0x7da9,	// (0x00049c15) popup_toolbar_trans_pane_ParamLimits

0xce97,	// (0x0004ed03) aid_size_cell_tb_trans_pane_ParamLimits

0x0dbd,	// (0x00042c29) bg_tb_trans_pane_ParamLimits

0xcea9,	// (0x0004ed15) grid_tb_trans_pane_ParamLimits

0x0b35,	// (0x000429a1) cont_note_pane_ParamLimits

0x0b35,	// (0x000429a1) cont_note_pane

0x0cb1,	// (0x00042b1d) cont_snote2_single_text_pane_ParamLimits

0x0cb1,	// (0x00042b1d) cont_snote2_single_text_pane

0x0cb1,	// (0x00042b1d) cont_snote2_single_graphic_pane_ParamLimits

0x0cb1,	// (0x00042b1d) cont_snote2_single_graphic_pane

0xa3c2,	// (0x0004c22e) cont_note_wait_pane_ParamLimits

0xa3c2,	// (0x0004c22e) cont_note_wait_pane

0xa3c2,	// (0x0004c22e) cont_note_image_pane_ParamLimits

0xa3c2,	// (0x0004c22e) cont_note_image_pane

0xcf51,	// (0x0004edbd) popup_note2_window_g1_ParamLimits

0xcf51,	// (0x0004edbd) popup_note2_window_g1

0xcf82,	// (0x0004edee) popup_note2_window_t1_ParamLimits

0xcf82,	// (0x0004edee) popup_note2_window_t1

0xcfc7,	// (0x0004ee33) popup_note2_window_t2_ParamLimits

0xcfc7,	// (0x0004ee33) popup_note2_window_t2

0xd00c,	// (0x0004ee78) popup_note2_window_t3_ParamLimits

0xd00c,	// (0x0004ee78) popup_note2_window_t3

0xd051,	// (0x0004eebd) popup_note2_window_t4_ParamLimits

0xd051,	// (0x0004eebd) popup_note2_window_t4

0x0bb9,	// (0x00042a25) popup_note2_window_t5_ParamLimits

0x0bb9,	// (0x00042a25) popup_note2_window_t5

0x0004,

0xfc7a,	// (0x00051ae6) popup_note2_window_t_ParamLimits

0xfc7a,	// (0x00051ae6) popup_note2_window_t

0xd080,	// (0x0004eeec) popup_note2_image_window_g1_ParamLimits

0xd080,	// (0x0004eeec) popup_note2_image_window_g1

0xd08c,	// (0x0004eef8) popup_note2_image_window_g2_ParamLimits

0xd08c,	// (0x0004eef8) popup_note2_image_window_g2

0x0001,

0xfc85,	// (0x00051af1) popup_note2_image_window_g_ParamLimits

0xfc85,	// (0x00051af1) popup_note2_image_window_g

0xd09e,	// (0x0004ef0a) popup_note2_image_window_t1_ParamLimits

0xd09e,	// (0x0004ef0a) popup_note2_image_window_t1

0xd0b6,	// (0x0004ef22) popup_note2_image_window_t2_ParamLimits

0xd0b6,	// (0x0004ef22) popup_note2_image_window_t2

0xd0ce,	// (0x0004ef3a) popup_note2_image_window_t3_ParamLimits

0xd0ce,	// (0x0004ef3a) popup_note2_image_window_t3

0x0002,

0xfc8a,	// (0x00051af6) popup_note2_image_window_t_ParamLimits

0xfc8a,	// (0x00051af6) popup_note2_image_window_t

0xa3d0,	// (0x0004c23c) popup_note2_wait_window_g1_ParamLimits

0xa3d0,	// (0x0004c23c) popup_note2_wait_window_g1

0xa3dc,	// (0x0004c248) popup_note2_wait_window_g2_ParamLimits

0xa3dc,	// (0x0004c248) popup_note2_wait_window_g2

0xa3e8,	// (0x0004c254) popup_note2_wait_window_g3_ParamLimits

0xa3e8,	// (0x0004c254) popup_note2_wait_window_g3

0x0002,

0xf843,	// (0x000516af) popup_note2_wait_window_g_ParamLimits

0xf843,	// (0x000516af) popup_note2_wait_window_g

0xd0ea,	// (0x0004ef56) popup_note2_wait_window_t1_ParamLimits

0xd0ea,	// (0x0004ef56) popup_note2_wait_window_t1

0xd108,	// (0x0004ef74) popup_note2_wait_window_t2_ParamLimits

0xd108,	// (0x0004ef74) popup_note2_wait_window_t2

0xd126,	// (0x0004ef92) popup_note2_wait_window_t3_ParamLimits

0xd126,	// (0x0004ef92) popup_note2_wait_window_t3

0xd138,	// (0x0004efa4) popup_note2_wait_window_t4_ParamLimits

0xd138,	// (0x0004efa4) popup_note2_wait_window_t4

0x0003,

0xfc91,	// (0x00051afd) popup_note2_wait_window_t_ParamLimits

0xfc91,	// (0x00051afd) popup_note2_wait_window_t

0xd14a,	// (0x0004efb6) wait_bar2_pane_ParamLimits

0xd14a,	// (0x0004efb6) wait_bar2_pane

0xd162,	// (0x0004efce) popup_snote2_single_text_window_g1_ParamLimits

0xd162,	// (0x0004efce) popup_snote2_single_text_window_g1

0xd18a,	// (0x0004eff6) popup_snote2_single_text_window_t1_ParamLimits

0xd18a,	// (0x0004eff6) popup_snote2_single_text_window_t1

0xd1d6,	// (0x0004f042) popup_snote2_single_text_window_t2_ParamLimits

0xd1d6,	// (0x0004f042) popup_snote2_single_text_window_t2

0xd222,	// (0x0004f08e) popup_snote2_single_text_window_t3_ParamLimits

0xd222,	// (0x0004f08e) popup_snote2_single_text_window_t3

0xd263,	// (0x0004f0cf) popup_snote2_single_text_window_t4_ParamLimits

0xd263,	// (0x0004f0cf) popup_snote2_single_text_window_t4

0xd299,	// (0x0004f105) popup_snote2_single_text_window_t5_ParamLimits

0xd299,	// (0x0004f105) popup_snote2_single_text_window_t5

0x0004,

0xfc9a,	// (0x00051b06) popup_snote2_single_text_window_t_ParamLimits

0xfc9a,	// (0x00051b06) popup_snote2_single_text_window_t

0xd2c4,	// (0x0004f130) popup_snote2_single_graphic_window_g1_ParamLimits

0xd2c4,	// (0x0004f130) popup_snote2_single_graphic_window_g1

0xd2ec,	// (0x0004f158) popup_snote2_single_graphic_window_g2_ParamLimits

0xd2ec,	// (0x0004f158) popup_snote2_single_graphic_window_g2

0x0001,

0xfca5,	// (0x00051b11) popup_snote2_single_graphic_window_g_ParamLimits

0xfca5,	// (0x00051b11) popup_snote2_single_graphic_window_g

0xd314,	// (0x0004f180) popup_snote2_single_graphic_window_t1_ParamLimits

0xd314,	// (0x0004f180) popup_snote2_single_graphic_window_t1

0xd360,	// (0x0004f1cc) popup_snote2_single_graphic_window_t2_ParamLimits

0xd360,	// (0x0004f1cc) popup_snote2_single_graphic_window_t2

0xd222,	// (0x0004f08e) popup_snote2_single_graphic_window_t3_ParamLimits

0xd222,	// (0x0004f08e) popup_snote2_single_graphic_window_t3

0xd263,	// (0x0004f0cf) popup_snote2_single_graphic_window_t4_ParamLimits

0xd263,	// (0x0004f0cf) popup_snote2_single_graphic_window_t4

0xd299,	// (0x0004f105) popup_snote2_single_graphic_window_t5_ParamLimits

0xd299,	// (0x0004f105) popup_snote2_single_graphic_window_t5

0x0004,

0xfcaa,	// (0x00051b16) popup_snote2_single_graphic_window_t_ParamLimits

0xfcaa,	// (0x00051b16) popup_snote2_single_graphic_window_t

0xbd8a,	// (0x0004dbf6) clock_nsta_pane_cp2_t1

0xbd8a,	// (0x0004dbf6) clock_nsta_pane_cp2_t2

0x0001,

0xfad1,	// (0x0005193d) clock_nsta_pane_cp2_t

0x59bd,	// (0x00047829) form_field_data_wide_pane_g1_ParamLimits

0x0dcb,	// (0x00042c37) form_field_data_wide_pane_g2_ParamLimits

0x0dcb,	// (0x00042c37) form_field_data_wide_pane_g2

0x0dd7,	// (0x00042c43) form_field_data_wide_pane_g3_ParamLimits

0x0dd7,	// (0x00042c43) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x000514e2) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x000514e2) form_field_data_wide_pane_g

0xbc81,	// (0x0004daed) grid_touch_3_pane_ParamLimits

0xbc81,	// (0x0004daed) grid_touch_3_pane

0xd3ac,	// (0x0004f218) cell_touch_3_pane_ParamLimits

0xd3ac,	// (0x0004f218) cell_touch_3_pane

0xc2e6,	// (0x0004e152) cell_touch_3_pane_g1

0xc2e6,	// (0x0004e152) cell_touch_3_pane_g2

0x0001,

0xfb56,	// (0x000519c2) cell_touch_3_pane_g

0x0beb,	// (0x00042a57) cont_query_data_pane

0x0bf3,	// (0x00042a5f) cont_query_data_pane_cp1

0xd3da,	// (0x0004f246) button_value_adjust_pane_cp7

0xd3e2,	// (0x0004f24e) query_popup_pane_cp3

0x1251,	// (0x000430bd) bg_popup_sub_pane_cp22_ParamLimits

0x729c,	// (0x00049108) navi_navi_volume_pane_cp2

0x72b4,	// (0x00049120) popup_side_volume_key_window_g2

0x72c0,	// (0x0004912c) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x00051578) popup_side_volume_key_window_g

0x72da,	// (0x00049146) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x0005157f) popup_side_volume_key_window_t

0x750a,	// (0x00049376) popup_side_volume_key_window_ParamLimits

0x5675,	// (0x000474e1) list_double_graphic_pane_g4_ParamLimits

0x5675,	// (0x000474e1) list_double_graphic_pane_g4

0x8224,	// (0x0004a090) list_single_2heading_msg_pane_ParamLimits

0x8224,	// (0x0004a090) list_single_2heading_msg_pane

0x8842,	// (0x0004a6ae) list_single_2heading_msg_pane_g1_ParamLimits

0x8842,	// (0x0004a6ae) list_single_2heading_msg_pane_g1

0x6cf1,	// (0x00048b5d) list_single_2heading_msg_pane_g2_ParamLimits

0x6cf1,	// (0x00048b5d) list_single_2heading_msg_pane_g2

0x884e,	// (0x0004a6ba) list_single_2heading_msg_pane_g3_ParamLimits

0x884e,	// (0x0004a6ba) list_single_2heading_msg_pane_g3

0x885a,	// (0x0004a6c6) list_single_2heading_msg_pane_g4_ParamLimits

0x885a,	// (0x0004a6c6) list_single_2heading_msg_pane_g4

0x0003,

0xfcb5,	// (0x00051b21) list_single_2heading_msg_pane_g_ParamLimits

0xfcb5,	// (0x00051b21) list_single_2heading_msg_pane_g

0x6236,	// (0x000480a2) list_single_2heading_msg_pane_t1_ParamLimits

0x6236,	// (0x000480a2) list_single_2heading_msg_pane_t1

0x625e,	// (0x000480ca) list_single_2heading_msg_pane_t2_ParamLimits

0x625e,	// (0x000480ca) list_single_2heading_msg_pane_t2

0x628d,	// (0x000480f9) list_single_2heading_msg_pane_t3_ParamLimits

0x628d,	// (0x000480f9) list_single_2heading_msg_pane_t3

0x62c6,	// (0x00048132) list_single_2heading_msg_pane_t4_ParamLimits

0x62c6,	// (0x00048132) list_single_2heading_msg_pane_t4

0x0003,

0xfcbe,	// (0x00051b2a) list_single_2heading_msg_pane_t_ParamLimits

0xfcbe,	// (0x00051b2a) list_single_2heading_msg_pane_t

0x09b9,	// (0x00042825) title_pane_g4_ParamLimits

0x09b9,	// (0x00042825) title_pane_g4

0x6ef3,	// (0x00048d5f) title_pane_stacon_g3_ParamLimits

0x6ef3,	// (0x00048d5f) title_pane_stacon_g3

0xcf14,	// (0x0004ed80) list_single_2graphic_im_pane_g4_ParamLimits

0xcf14,	// (0x0004ed80) list_single_2graphic_im_pane_g4

0xae09,	// (0x0004cc75) popup_side_volume_key_window_cp

0xb5dc,	// (0x0004d448) main_idle_act2_pane_t1

0x7e9b,	// (0x00049d07) toolbar_button_pane_g10

0x6ce7,	// (0x00048b53) popup_toolbar_window_cp1

0xbd7b,	// (0x0004dbe7) clock_nsta_pane_cp_t1

0xbd7b,	// (0x0004dbe7) clock_nsta_pane_cp_t2

0x0001,

0xfacc,	// (0x00051938) clock_nsta_pane_cp_t

0x729c,	// (0x00049108) navi_navi_volume_pane_cp2_ParamLimits

0x72a8,	// (0x00049114) popup_side_volume_key_window_g1_ParamLimits

0x72b4,	// (0x00049120) popup_side_volume_key_window_g2_ParamLimits

0x72c0,	// (0x0004912c) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x00051578) popup_side_volume_key_window_g_ParamLimits

0x8477,	// (0x0004a2e3) fep_hwr_aid_pane

0x27d5,	// (0x00044641) bg_fep_hwr_top_pane_g4_ParamLimits

0xc342,	// (0x0004e1ae) fep_hwr_top_pane_g1_ParamLimits

0xc354,	// (0x0004e1c0) fep_hwr_top_pane_g2_ParamLimits

0x8530,	// (0x0004a39c) fep_hwr_top_pane_g3_ParamLimits

0xfb21,	// (0x0005198d) fep_hwr_top_pane_g_ParamLimits

0x8545,	// (0x0004a3b1) fep_hwr_top_text_pane_ParamLimits

0xabcc,	// (0x0004ca38) aid_touch_tab_arrow_arrow_2

0xabd5,	// (0x0004ca41) aid_touch_tab_arrow_left_2

0x848b,	// (0x0004a2f7) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x84c2,	// (0x0004a32e) fep_hwr_prediction_pane

0xc4ad,	// (0x0004e319) fep_vkb_prediction_pane

0xc5aa,	// (0x0004e416) fep_vkb_side_pane_g3_ParamLimits

0xc5aa,	// (0x0004e416) fep_vkb_side_pane_g3

0xc556,	// (0x0004e3c2) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xca0b,	// (0x0004e877) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xca18,	// (0x0004e884) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbcb,	// (0x00051a37) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd407,	// (0x0004f273) fep_hwr_prediction_pane_g1

0x8872,	// (0x0004a6de) fep_hwr_prediction_pane_g2

0x887a,	// (0x0004a6e6) fep_hwr_prediction_pane_g3

0x8882,	// (0x0004a6ee) fep_hwr_prediction_pane_g4

0x0003,

0xfcc7,	// (0x00051b33) fep_hwr_prediction_pane_g

0xd407,	// (0x0004f273) fep_vkb_prediction_pane_g1

0xd411,	// (0x0004f27d) fep_vkb_prediction_pane_g2

0xd419,	// (0x0004f285) fep_vkb_prediction_pane_g3

0xd421,	// (0x0004f28d) fep_vkb_prediction_pane_g4

0x0003,

0xfcd0,	// (0x00051b3c) fep_vkb_prediction_pane_g

0x818d,	// (0x00049ff9) slider_set_pane_g3

0x81a1,	// (0x0004a00d) slider_set_pane_g4

0x81b9,	// (0x0004a025) slider_set_pane_g5

0x818d,	// (0x00049ff9) slider_set_pane_g6

0x81cf,	// (0x0004a03b) slider_set_pane_g7

0xb258,	// (0x0004d0c4) slider_form_pane_g3

0xb261,	// (0x0004d0cd) slider_form_pane_g4

0xb269,	// (0x0004d0d5) slider_form_pane_g5

0xb258,	// (0x0004d0c4) slider_form_pane_g6

0xb271,	// (0x0004d0dd) slider_form_pane_g7

0xb887,	// (0x0004d6f3) slider_set_pane_vc_g3

0xb890,	// (0x0004d6fc) slider_set_pane_vc_g4

0xb899,	// (0x0004d705) slider_set_pane_vc_g5

0xb887,	// (0x0004d6f3) slider_set_pane_vc_g6

0xb8a2,	// (0x0004d70e) slider_set_pane_vc_g7

0xba54,	// (0x0004d8c0) slider_form_pane_vc_g1

0xba5d,	// (0x0004d8c9) slider_form_pane_vc_g2

0xba66,	// (0x0004d8d2) slider_form_pane_vc_g3

0xba54,	// (0x0004d8c0) slider_form_pane_vc_g4

0xba6f,	// (0x0004d8db) slider_form_pane_vc_g5

0x0004,

0xfa9e,	// (0x0005190a) slider_form_pane_vc_g

0x099b,	// (0x00042807) main_idle_act3_pane

0xd429,	// (0x0004f295) ai3_links_pane

0xd432,	// (0x0004f29e) popup_ai3_data_window_ParamLimits

0xd432,	// (0x0004f29e) popup_ai3_data_window

0x099b,	// (0x00042807) grid_ai3_links_pane

0xd44a,	// (0x0004f2b6) cell_ai3_links_pane_ParamLimits

0xd44a,	// (0x0004f2b6) cell_ai3_links_pane

0xd462,	// (0x0004f2ce) bg_popup_sub_pane_cp11

0xd46f,	// (0x0004f2db) cell_ai3_links_pane_g1

0x099b,	// (0x00042807) bg_popup_sub_pane_cp12

0xd494,	// (0x0004f300) heading_ai3_data_pane

0xd49c,	// (0x0004f308) list_ai3_gene_pane

0xd4a8,	// (0x0004f314) popup_ai3_data_window_g1

0xd4b0,	// (0x0004f31c) heading_ai3_data_pane_g1

0xd4b8,	// (0x0004f324) heading_ai3_data_pane_t1

0xd4c6,	// (0x0004f332) list_double_ai3_gene_pane_ParamLimits

0xd4c6,	// (0x0004f332) list_double_ai3_gene_pane

0xd4d3,	// (0x0004f33f) list_single_ai3_gene_pane_ParamLimits

0xd4d3,	// (0x0004f33f) list_single_ai3_gene_pane

0xc2ab,	// (0x0004e117) list_highlight_pane_cp7_ParamLimits

0xc2ab,	// (0x0004e117) list_highlight_pane_cp7

0xd4e0,	// (0x0004f34c) list_single_a13_gene_pane_t1_ParamLimits

0xd4e0,	// (0x0004f34c) list_single_a13_gene_pane_t1

0xd4f7,	// (0x0004f363) list_single_ai3_gene_pane_g1

0xd500,	// (0x0004f36c) list_single_ai3_gene_pane_g2

0x0001,

0xfcd9,	// (0x00051b45) list_single_ai3_gene_pane_g

0xd508,	// (0x0004f374) list_double_ai3_gene_pane_g1_ParamLimits

0xd508,	// (0x0004f374) list_double_ai3_gene_pane_g1

0xd514,	// (0x0004f380) list_double_ai3_gene_pane_t1_ParamLimits

0xd514,	// (0x0004f380) list_double_ai3_gene_pane_t1

0xd530,	// (0x0004f39c) list_double_ai3_gene_pane_t2_ParamLimits

0xd530,	// (0x0004f39c) list_double_ai3_gene_pane_t2

0xd545,	// (0x0004f3b1) list_double_ai3_gene_pane_t3_ParamLimits

0xd545,	// (0x0004f3b1) list_double_ai3_gene_pane_t3

0x0002,

0xfcde,	// (0x00051b4a) list_double_ai3_gene_pane_t_ParamLimits

0xfcde,	// (0x00051b4a) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x622c,	// (0x00048098) aid_size_min_col_2

0xd3f3,	// (0x0004f25f) aid_size_min_msg_ParamLimits

0xd3f3,	// (0x0004f25f) aid_size_min_msg

0xc6aa,	// (0x0004e516) fep_vkb_top_text_pane_g2_ParamLimits

0xc6aa,	// (0x0004e516) fep_vkb_top_text_pane_g2

0x0001,

0xfb51,	// (0x000519bd) fep_vkb_top_text_pane_g_ParamLimits

0xfb51,	// (0x000519bd) fep_vkb_top_text_pane_g

0x099b,	// (0x00042807) main_hc_apps_shell_pane

0xd562,	// (0x0004f3ce) grid_hc_apps_pane_ParamLimits

0xd562,	// (0x0004f3ce) grid_hc_apps_pane

0xd571,	// (0x0004f3dd) list_hc_apps_pane

0xd579,	// (0x0004f3e5) scroll_pane_cp37_ParamLimits

0xd579,	// (0x0004f3e5) scroll_pane_cp37

0xd585,	// (0x0004f3f1) cell_hc_apps_pane_ParamLimits

0xd585,	// (0x0004f3f1) cell_hc_apps_pane

0xd633,	// (0x0004f49f) cell_hc_apps_pane_g1_ParamLimits

0xd633,	// (0x0004f49f) cell_hc_apps_pane_g1

0xd664,	// (0x0004f4d0) cell_hc_apps_pane_g2_ParamLimits

0xd664,	// (0x0004f4d0) cell_hc_apps_pane_g2

0xd680,	// (0x0004f4ec) cell_hc_apps_pane_g3_ParamLimits

0xd680,	// (0x0004f4ec) cell_hc_apps_pane_g3

0x0002,

0xfce5,	// (0x00051b51) cell_hc_apps_pane_g_ParamLimits

0xfce5,	// (0x00051b51) cell_hc_apps_pane_g

0xd6a2,	// (0x0004f50e) cell_hc_apps_pane_t1_ParamLimits

0xd6a2,	// (0x0004f50e) cell_hc_apps_pane_t1

0x0b35,	// (0x000429a1) grid_highlight_pane_cp10_ParamLimits

0x0b35,	// (0x000429a1) grid_highlight_pane_cp10

0xd6e2,	// (0x0004f54e) list_single_hc_apps_pane_ParamLimits

0xd6e2,	// (0x0004f54e) list_single_hc_apps_pane

0xd745,	// (0x0004f5b1) list_single_hc_apps_pane_g1

0x888a,	// (0x0004a6f6) list_single_hc_apps_pane_g2

0x0001,

0xfcec,	// (0x00051b58) list_single_hc_apps_pane_g

0x88a3,	// (0x0004a70f) list_single_hc_apps_pane_g2_copy1

0x62eb,	// (0x00048157) list_single_hc_apps_pane_t1

0x0a0b,	// (0x00042877) bg_set_opt_pane_cp_ParamLimits

0x67fe,	// (0x0004866a) setting_slider_pane_t1_ParamLimits

0x6817,	// (0x00048683) setting_slider_pane_t2_ParamLimits

0x6831,	// (0x0004869d) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x000513ca) setting_slider_pane_t_ParamLimits

0x6849,	// (0x000486b5) slider_set_pane_ParamLimits

0x77a0,	// (0x0004960c) control_pane_g5_ParamLimits

0x77a0,	// (0x0004960c) control_pane_g5

0xb0ab,	// (0x0004cf17) slider_set_pane_g1_ParamLimits

0x8181,	// (0x00049fed) slider_set_pane_g2_ParamLimits

0x818d,	// (0x00049ff9) slider_set_pane_g3_ParamLimits

0x81a1,	// (0x0004a00d) slider_set_pane_g4_ParamLimits

0x81b9,	// (0x0004a025) slider_set_pane_g5_ParamLimits

0x818d,	// (0x00049ff9) slider_set_pane_g6_ParamLimits

0x81cf,	// (0x0004a03b) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x000517cb) slider_set_pane_g_ParamLimits

0x75d0,	// (0x0004943c) navi_icon_text_pane_ParamLimits

0x9873,	// (0x0004b6df) aid_fill_nsta_2_ParamLimits

0x98b2,	// (0x0004b71e) aid_touch_tab_arrow_left_ParamLimits

0x98c1,	// (0x0004b72d) aid_touch_tab_arrow_right_ParamLimits

0x992e,	// (0x0004b79a) clock_nsta_pane_ParamLimits

0xabae,	// (0x0004ca1a) navi_icon_pane_g1_ParamLimits

0xabba,	// (0x0004ca26) navi_text_pane_t1_ParamLimits

0xbe8b,	// (0x0004dcf7) navi_icon_text_pane_g1_ParamLimits

0xbe97,	// (0x0004dd03) navi_icon_text_pane_t1_ParamLimits

0xd745,	// (0x0004f5b1) list_single_hc_apps_pane_g1_ParamLimits

0x888a,	// (0x0004a6f6) list_single_hc_apps_pane_g2_ParamLimits

0xfcec,	// (0x00051b58) list_single_hc_apps_pane_g_ParamLimits

0x88a3,	// (0x0004a70f) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x62eb,	// (0x00048157) list_single_hc_apps_pane_t1_ParamLimits

0x6642,	// (0x000484ae) popup_toolbar2_fixed_window_ParamLimits

0x6642,	// (0x000484ae) popup_toolbar2_fixed_window

0x7d9f,	// (0x00049c0b) popup_toolbar2_float_window

0x099b,	// (0x00042807) bg_popup_sub_pane_cp27

0xd75e,	// (0x0004f5ca) grid_toolbar2_float_pane

0x099b,	// (0x00042807) bg_popup_sub_pane_cp26

0xd75e,	// (0x0004f5ca) grid_toolbar2_fixed_pane

0xd766,	// (0x0004f5d2) cell_toolbar2_fixed_pane_ParamLimits

0xd766,	// (0x0004f5d2) cell_toolbar2_fixed_pane

0xd776,	// (0x0004f5e2) cell_toolbar2_fixed_pane_g1

0x9cc8,	// (0x0004bb34) toolbar2_fixed_button_pane

0x9d48,	// (0x0004bbb4) toolbar2_fixed_button_pane_g1

0x9d50,	// (0x0004bbbc) toolbar2_fixed_button_pane_g2

0x9d58,	// (0x0004bbc4) toolbar2_fixed_button_pane_g3

0x9d60,	// (0x0004bbcc) toolbar2_fixed_button_pane_g4

0x9d68,	// (0x0004bbd4) toolbar2_fixed_button_pane_g5

0x9d70,	// (0x0004bbdc) toolbar2_fixed_button_pane_g6

0x9d78,	// (0x0004bbe4) toolbar2_fixed_button_pane_g7

0x9d80,	// (0x0004bbec) toolbar2_fixed_button_pane_g8

0x9d88,	// (0x0004bbf4) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x000516cd) toolbar2_fixed_button_pane_g

0xd77f,	// (0x0004f5eb) cell_toolbar2_float_pane_ParamLimits

0xd77f,	// (0x0004f5eb) cell_toolbar2_float_pane

0xd790,	// (0x0004f5fc) cell_toolbar2_float_pane_g1

0x9cc8,	// (0x0004bb34) toolbar2_fixed_button_pane_cp

0xc414,	// (0x0004e280) fep_vkb_accented_list_pane_ParamLimits

0xc414,	// (0x0004e280) fep_vkb_accented_list_pane

0x8693,	// (0x0004a4ff) bg_popup_fep_shadow_pane_g9

0x94f0,	// (0x0004b35c) bg_popup_fep_shadow_pane_cp3

0x0ec3,	// (0x00042d2f) list_accented_list_pane

0xd799,	// (0x0004f605) list_single_accented_list_pane_ParamLimits

0xd799,	// (0x0004f605) list_single_accented_list_pane

0x94f0,	// (0x0004b35c) list_highlight_pane_cp10

0xd7aa,	// (0x0004f616) list_single_accented_list_pane_t1

0x7cef,	// (0x00049b5b) popup_slider_window_ParamLimits

0x7cef,	// (0x00049b5b) popup_slider_window

0xd3ea,	// (0x0004f256) aid_indentation_list_msg

0xd860,	// (0x0004f6cc) bg_popup_window_pane_cp19

0xd8ca,	// (0x0004f736) popup_slider_window_g1

0xd8e6,	// (0x0004f752) popup_slider_window_g2

0xd902,	// (0x0004f76e) popup_slider_window_g3

0x0005,

0xfcf1,	// (0x00051b5d) popup_slider_window_g

0xd95e,	// (0x0004f7ca) popup_slider_window_t1

0xd9d2,	// (0x0004f83e) small_volume_slider_vertical_pane

0xc2e6,	// (0x0004e152) small_volume_slider_vertical_pane_g1

0xc2e6,	// (0x0004e152) small_volume_slider_vertical_pane_g2

0xd9ee,	// (0x0004f85a) small_volume_slider_vertical_pane_g3

0x0002,

0xfd03,	// (0x00051b6f) small_volume_slider_vertical_pane_g

0x6412,	// (0x0004827e) area_side_right_pane_ParamLimits

0x6412,	// (0x0004827e) area_side_right_pane

0x88bf,	// (0x0004a72b) aid_size_side_button_ParamLimits

0x88bf,	// (0x0004a72b) aid_size_side_button

0x88d3,	// (0x0004a73f) grid_sctrl_middle_pane_ParamLimits

0x88d3,	// (0x0004a73f) grid_sctrl_middle_pane

0x88f2,	// (0x0004a75e) sctrl_sk_bottom_pane

0x8903,	// (0x0004a76f) sctrl_sk_top_pane

0x8915,	// (0x0004a781) aid_touch_sctrl_top

0x0b35,	// (0x000429a1) bg_sctrl_sk_pane_ParamLimits

0x0b35,	// (0x000429a1) bg_sctrl_sk_pane

0x8922,	// (0x0004a78e) sctrl_sk_top_pane_g1

0x892f,	// (0x0004a79b) sctrl_sk_top_pane_t1

0x8915,	// (0x0004a781) aid_touch_sctrl_bottom

0x0b35,	// (0x000429a1) bg_sctrl_sk_pane_cp_ParamLimits

0x0b35,	// (0x000429a1) bg_sctrl_sk_pane_cp

0x894a,	// (0x0004a7b6) sctrl_sk_bottom_pane_g1

0x892f,	// (0x0004a79b) sctrl_sk_bottom_pane_t1

0x8953,	// (0x0004a7bf) cell_sctrl_middle_pane_ParamLimits

0x8953,	// (0x0004a7bf) cell_sctrl_middle_pane

0x896e,	// (0x0004a7da) aid_touch_sctrl_middle_ParamLimits

0x896e,	// (0x0004a7da) aid_touch_sctrl_middle

0x0dbd,	// (0x00042c29) bg_sctrl_middle_pane_ParamLimits

0x0dbd,	// (0x00042c29) bg_sctrl_middle_pane

0xc556,	// (0x0004e3c2) cell_sctrl_middle_pane_g1_ParamLimits

0xc556,	// (0x0004e3c2) cell_sctrl_middle_pane_g1

0x8980,	// (0x0004a7ec) cell_sctrl_middle_pane_g2_ParamLimits

0x8980,	// (0x0004a7ec) cell_sctrl_middle_pane_g2

0x0001,

0xfd0f,	// (0x00051b7b) cell_sctrl_middle_pane_g_ParamLimits

0xfd0f,	// (0x00051b7b) cell_sctrl_middle_pane_g

0x9d48,	// (0x0004bbb4) bg_sctrl_middle_pane_g1

0x9d50,	// (0x0004bbbc) bg_sctrl_middle_pane_g2

0x9d58,	// (0x0004bbc4) bg_sctrl_middle_pane_g3

0x9d60,	// (0x0004bbcc) bg_sctrl_middle_pane_g4

0x9d68,	// (0x0004bbd4) bg_sctrl_middle_pane_g5

0x9d70,	// (0x0004bbdc) bg_sctrl_middle_pane_g6

0x9d78,	// (0x0004bbe4) bg_sctrl_middle_pane_g7

0x9d80,	// (0x0004bbec) bg_sctrl_middle_pane_g8

0x0007,

0xfd14,	// (0x00051b80) bg_sctrl_middle_pane_g

0x9d88,	// (0x0004bbf4) bg_sctrl_middle_pane_g8_copy1

0x9d48,	// (0x0004bbb4) bg_sctrl_sk_pane_g1

0x9d50,	// (0x0004bbbc) bg_sctrl_sk_pane_g2

0x9d58,	// (0x0004bbc4) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x000516cd) bg_sctrl_sk_pane_g

0x0cff,	// (0x00042b6b) aid_size_touch_scroll_bar

0x9d60,	// (0x0004bbcc) bg_sctrl_sk_pane_g4

0x9d68,	// (0x0004bbd4) bg_sctrl_sk_pane_g5

0x9d70,	// (0x0004bbdc) bg_sctrl_sk_pane_g6

0x9d78,	// (0x0004bbe4) bg_sctrl_sk_pane_g7

0x9d80,	// (0x0004bbec) bg_sctrl_sk_pane_g8

0x9d88,	// (0x0004bbf4) bg_sctrl_sk_pane_g9

0x7958,	// (0x000497c4) popup_fep_china_hwr2_fs_candidate_window

0x7962,	// (0x000497ce) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x7962,	// (0x000497ce) popup_fep_china_hwr2_fs_control_window

0xc556,	// (0x0004e3c2) sctrl_sk_top_pane_g2

0x0001,

0xfd0a,	// (0x00051b76) sctrl_sk_top_pane_g

0xd9f7,	// (0x0004f863) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd9f7,	// (0x0004f863) aid_fep_china_hwr2_fs_cell

0xda09,	// (0x0004f875) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xda09,	// (0x0004f875) bg_popup_fep_shadow_pane_cp4

0xda20,	// (0x0004f88c) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xda20,	// (0x0004f88c) bg_popup_fep_shadow_pane_cp5

0xda32,	// (0x0004f89e) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xda32,	// (0x0004f89e) popup_fep_china_hwr2_fs_control_bar_grid

0xda42,	// (0x0004f8ae) popup_fep_china_hwr2_fs_control_funtion_grid

0xda4a,	// (0x0004f8b6) aid_fep_china_hwr2_fs_candi_cell

0x099b,	// (0x00042807) bg_popup_fep_shadow_pane_cp6

0xda54,	// (0x0004f8c0) popup_fep_china_hwr2_fs_candidate_grid

0xda5e,	// (0x0004f8ca) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda5e,	// (0x0004f8ca) cell_fep_china_hwr2_fs_funtion_grid

0xc2e6,	// (0x0004e152) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda76,	// (0x0004f8e2) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda76,	// (0x0004f8e2) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda84,	// (0x0004f8f0) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda84,	// (0x0004f8f0) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd25,	// (0x00051b91) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd25,	// (0x00051b91) cell_fep_china_hwr2_fs_funtion_grid_g

0xda9a,	// (0x0004f906) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda9a,	// (0x0004f906) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdaaf,	// (0x0004f91b) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdaaf,	// (0x0004f91b) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2a,	// (0x00051b96) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2a,	// (0x00051b96) cell_fep_china_hwr2_fs_funtion_grid_t

0xdacb,	// (0x0004f937) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xdad3,	// (0x0004f93f) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xdadb,	// (0x0004f947) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2f,	// (0x00051b9b) popup_fep_china_hwr2_fs_control_bar_grid_g

0xdae3,	// (0x0004f94f) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xdae3,	// (0x0004f94f) cell_fep_china_hwr2_fs_candidate_grid

0xdafc,	// (0x0004f968) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdb04,	// (0x0004f970) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc2e6,	// (0x0004e152) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc2e6,	// (0x0004e152) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb56,	// (0x000519c2) cell_fep_china_hwr2_fs_candidate_grid_g

0xdb0c,	// (0x0004f978) cell_fep_china_hwr2_fs_candidate_grid_t1

0x9941,	// (0x0004b7ad) clock_nsta_pane_cp_24_ParamLimits

0x9941,	// (0x0004b7ad) clock_nsta_pane_cp_24

0x99bf,	// (0x0004b82b) indicator_nsta_pane_cp_24_ParamLimits

0x99bf,	// (0x0004b82b) indicator_nsta_pane_cp_24

0xaa2a,	// (0x0004c896) heading_pane_g1

0x0001,

0xf8c6,	// (0x00051732) heading_pane_g

0xb425,	// (0x0004d291) grid_sct_catagory_button_pane

0xb455,	// (0x0004d2c1) scroll_pane_cp5_ParamLimits

0xbed9,	// (0x0004dd45) button_value_adjust_pane_cp5_ParamLimits

0xbed9,	// (0x0004dd45) button_value_adjust_pane_cp5

0xbfb8,	// (0x0004de24) form2_midp_time_pane_ParamLimits

0xdb1a,	// (0x0004f986) cell_sct_catagory_button_pane_ParamLimits

0xdb1a,	// (0x0004f986) cell_sct_catagory_button_pane

0xc2ab,	// (0x0004e117) bg_button_pane_cp01_ParamLimits

0xc2ab,	// (0x0004e117) bg_button_pane_cp01

0xc2e6,	// (0x0004e152) cell_sct_catagory_button_pane_g1

0x7d2e,	// (0x00049b9a) popup_tb_extension_window

0xdb2c,	// (0x0004f998) aid_size_cell_ext_ParamLimits

0xdb2c,	// (0x0004f998) aid_size_cell_ext

0x0b35,	// (0x000429a1) bg_tb_trans_pane_cp1_ParamLimits

0x0b35,	// (0x000429a1) bg_tb_trans_pane_cp1

0xdb4c,	// (0x0004f9b8) grid_tb_ext_pane_ParamLimits

0xdb4c,	// (0x0004f9b8) grid_tb_ext_pane

0xdb7c,	// (0x0004f9e8) cell_tb_ext_pane_ParamLimits

0xdb7c,	// (0x0004f9e8) cell_tb_ext_pane

0xdb93,	// (0x0004f9ff) cell_tb_ext_pane_g1_ParamLimits

0xdb93,	// (0x0004f9ff) cell_tb_ext_pane_g1

0xdbb0,	// (0x0004fa1c) cell_tb_ext_pane_t1

0x0b35,	// (0x000429a1) list_highlight_pane_cp11_ParamLimits

0x0b35,	// (0x000429a1) list_highlight_pane_cp11

0x6661,	// (0x000484cd) popup_uni_indicator_window_ParamLimits

0x6661,	// (0x000484cd) popup_uni_indicator_window

0x0dbd,	// (0x00042c29) bg_popup_sub_pane_cp14

0xdbcc,	// (0x0004fa38) list_uniindi_pane

0xdbd8,	// (0x0004fa44) uniindi_top_pane

0x0b35,	// (0x000429a1) bg_uniindi_top_pane

0xdbf7,	// (0x0004fa63) uniindi_top_pane_g1

0xdc0d,	// (0x0004fa79) uniindi_top_pane_g2

0x0003,

0xfd36,	// (0x00051ba2) uniindi_top_pane_g

0xdc37,	// (0x0004faa3) uniindi_top_pane_t1

0xdc61,	// (0x0004facd) list_single_uniindi_pane_ParamLimits

0xdc61,	// (0x0004facd) list_single_uniindi_pane

0xc2e6,	// (0x0004e152) bg_uniindi_top_pane_g1

0xdc73,	// (0x0004fadf) list_single_uniindi_pane_g1

0xdc86,	// (0x0004faf2) list_single_uniindi_pane_t1

0x099b,	// (0x00042807) control_bg_pane

0xdcab,	// (0x0004fb17) bg_sctrl_sk_pane_cp1

0xdcb4,	// (0x0004fb20) bg_sctrl_sk_pane_cp2

0xdcbd,	// (0x0004fb29) control_bg_pane_g1

0xdcc6,	// (0x0004fb32) control_bg_pane_g2

0x0001,

0xfd3f,	// (0x00051bab) control_bg_pane_g

0xbd30,	// (0x0004db9c) cell_indicator_nsta_pane_g1_ParamLimits

0xbd3e,	// (0x0004dbaa) cell_indicator_nsta_pane_g2_ParamLimits

0xfaba,	// (0x00051926) cell_indicator_nsta_pane_g_ParamLimits

0x6079,	// (0x00047ee5) form2_midp_time_pane_t1_ParamLimits

0x0cb1,	// (0x00042b1d) main_idle_act4_pane_ParamLimits

0x0cb1,	// (0x00042b1d) main_idle_act4_pane

0x7d2e,	// (0x00049b9a) popup_tb_extension_window_ParamLimits

0xdb6c,	// (0x0004f9d8) tb_ext_find_pane_ParamLimits

0xdb6c,	// (0x0004f9d8) tb_ext_find_pane

0xdccf,	// (0x0004fb3b) ai_gene_pane_1_cp1

0x963b,	// (0x0004b4a7) ai_gene_pane_2_cp1

0xdcd7,	// (0x0004fb43) list_single_idle_plugin_calendar_pane

0xdce0,	// (0x0004fb4c) list_single_idle_plugin_notification_pane

0xdce9,	// (0x0004fb55) list_single_idle_plugin_player_pane

0xdcf2,	// (0x0004fb5e) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdcf2,	// (0x0004fb5e) list_single_idle_plugin_shortcut_pane

0xdd14,	// (0x0004fb80) main_idle_act4_pane_t1

0xdd26,	// (0x0004fb92) main_idle_act4_pane_t2

0x0001,

0xfd44,	// (0x00051bb0) main_idle_act4_pane_t

0xdd38,	// (0x0004fba4) middle_sk_idle_act4_pane_ParamLimits

0xdd38,	// (0x0004fba4) middle_sk_idle_act4_pane

0xdd4e,	// (0x0004fbba) popup_clock_digital_analogue_window_cp2

0xdd68,	// (0x0004fbd4) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd68,	// (0x0004fbd4) shortcut_wheel_idle_act4_pane

0xc2e6,	// (0x0004e152) shortcut_wheel_idle_act4_pane_g1

0xc2e6,	// (0x0004e152) shortcut_wheel_idle_act4_pane_g2

0xc2e6,	// (0x0004e152) shortcut_wheel_idle_act4_pane_g3

0xc2e6,	// (0x0004e152) shortcut_wheel_idle_act4_pane_g4

0xc2e6,	// (0x0004e152) shortcut_wheel_idle_act4_pane_g5

0xdd7c,	// (0x0004fbe8) shortcut_wheel_idle_act4_pane_g6

0xdd84,	// (0x0004fbf0) shortcut_wheel_idle_act4_pane_g7

0xdd8c,	// (0x0004fbf8) shortcut_wheel_idle_act4_pane_g8

0xdd94,	// (0x0004fc00) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd49,	// (0x00051bb5) shortcut_wheel_idle_act4_pane_g

0xc556,	// (0x0004e3c2) middle_sk_idle_act4_pane_g1_ParamLimits

0xc556,	// (0x0004e3c2) middle_sk_idle_act4_pane_g1

0xddf8,	// (0x0004fc64) middle_sk_idle_act4_pane_g2_ParamLimits

0xddf8,	// (0x0004fc64) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6c,	// (0x00051bd8) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6c,	// (0x00051bd8) middle_sk_idle_act4_pane_g

0xde04,	// (0x0004fc70) middle_sk_idle_act4_pane_t1_ParamLimits

0xde04,	// (0x0004fc70) middle_sk_idle_act4_pane_t1

0xde21,	// (0x0004fc8d) grid_ai_shortcut_pane_ParamLimits

0xde21,	// (0x0004fc8d) grid_ai_shortcut_pane

0xde3a,	// (0x0004fca6) list_highlight_pane_cp16_ParamLimits

0xde3a,	// (0x0004fca6) list_highlight_pane_cp16

0xde47,	// (0x0004fcb3) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde47,	// (0x0004fcb3) list_single_idle_plugin_shortcut_pane_g1

0xde53,	// (0x0004fcbf) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde53,	// (0x0004fcbf) list_single_idle_plugin_shortcut_pane_g2

0xde6b,	// (0x0004fcd7) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde6b,	// (0x0004fcd7) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd71,	// (0x00051bdd) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd71,	// (0x00051bdd) list_single_idle_plugin_shortcut_pane_g

0xde7e,	// (0x0004fcea) cell_ai_shortcut_pane_ParamLimits

0xde7e,	// (0x0004fcea) cell_ai_shortcut_pane

0xdea2,	// (0x0004fd0e) cell_ai_shortcut_pane_g1_ParamLimits

0xdea2,	// (0x0004fd0e) cell_ai_shortcut_pane_g1

0xdccf,	// (0x0004fb3b) ai_gene_pane_1_cp2

0xdec4,	// (0x0004fd30) ai_gene_pane_2_cp2

0xdecc,	// (0x0004fd38) list_highlight_pane_cp15

0xded5,	// (0x0004fd41) list_single_idle_plugin_calendar_pane_g1

0xdecc,	// (0x0004fd38) list_highlight_pane_cp17

0xdedd,	// (0x0004fd49) list_single_idle_plugin_calendar_pane_g1_copy1

0xdee5,	// (0x0004fd51) list_single_idle_plugin_player_pane_g1

0xb67e,	// (0x0004d4ea) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd78,	// (0x00051be4) list_single_idle_plugin_player_pane_g

0xdeed,	// (0x0004fd59) list_single_idle_plugin_player_pane_t1

0xdefb,	// (0x0004fd67) list_single_idle_plugin_player_pane_t2

0xdf09,	// (0x0004fd75) list_single_idle_plugin_player_pane_t3

0xdf17,	// (0x0004fd83) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7d,	// (0x00051be9) list_single_idle_plugin_player_pane_t

0xdf25,	// (0x0004fd91) wait_bar_pane_cp15

0xdf2d,	// (0x0004fd99) grid_ai_notification_pane

0xb67e,	// (0x0004d4ea) list_single_idle_plugin_notification_pane_g1

0xdf36,	// (0x0004fda2) cell_ai_notification_pane_ParamLimits

0xdf36,	// (0x0004fda2) cell_ai_notification_pane

0xdf43,	// (0x0004fdaf) cell_ai_notification_pane_g1

0xdf4b,	// (0x0004fdb7) cell_ai_notification_pane_t1

0xdf59,	// (0x0004fdc5) tb_ext_find_button_pane

0xdf61,	// (0x0004fdcd) tb_ext_find_pane_g1

0xdf69,	// (0x0004fdd5) tb_ext_find_pane_t1

0x11f0,	// (0x0004305c) tb_ext_find_button_pane_g1

0xdf77,	// (0x0004fde3) tb_ext_find_button_pane_g2

0x0001,

0xfd86,	// (0x00051bf2) tb_ext_find_button_pane_g

0xdd14,	// (0x0004fb80) main_idle_act4_pane_t1_ParamLimits

0xdd26,	// (0x0004fb92) main_idle_act4_pane_t2_ParamLimits

0xfd44,	// (0x00051bb0) main_idle_act4_pane_t_ParamLimits

0xdd4e,	// (0x0004fbba) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd5c,	// (0x0004fbc8) sat_plugin_idle_act4_pane_ParamLimits

0xdd5c,	// (0x0004fbc8) sat_plugin_idle_act4_pane

0xdf80,	// (0x0004fdec) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf80,	// (0x0004fdec) sat_plugin_idle_act4_pane_t1

0xdf93,	// (0x0004fdff) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf93,	// (0x0004fdff) sat_plugin_idle_act4_pane_t2

0xdfa6,	// (0x0004fe12) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdfa6,	// (0x0004fe12) sat_plugin_idle_act4_pane_t3

0xdfb9,	// (0x0004fe25) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdfb9,	// (0x0004fe25) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8b,	// (0x00051bf7) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8b,	// (0x00051bf7) sat_plugin_idle_act4_pane_t

0x65aa,	// (0x00048416) popup_battery_window_ParamLimits

0x65aa,	// (0x00048416) popup_battery_window

0x0b35,	// (0x000429a1) bg_popup_sub_pane_cp25_ParamLimits

0x0b35,	// (0x000429a1) bg_popup_sub_pane_cp25

0xdfcc,	// (0x0004fe38) popup_battery_window_g1_ParamLimits

0xdfcc,	// (0x0004fe38) popup_battery_window_g1

0xdfd8,	// (0x0004fe44) popup_battery_window_t1_ParamLimits

0xdfd8,	// (0x0004fe44) popup_battery_window_t1

0xdfea,	// (0x0004fe56) popup_battery_window_t2_ParamLimits

0xdfea,	// (0x0004fe56) popup_battery_window_t2

0x0001,

0xfd94,	// (0x00051c00) popup_battery_window_t_ParamLimits

0xfd94,	// (0x00051c00) popup_battery_window_t

0x9504,	// (0x0004b370) midp_canvas_pane_ParamLimits

0x957d,	// (0x0004b3e9) midp_keypad_pane_ParamLimits

0x957d,	// (0x0004b3e9) midp_keypad_pane

0x983b,	// (0x0004b6a7) main_midp_pane_ParamLimits

0xbd99,	// (0x0004dc05) signal_pane_g2_cp_ParamLimits

0xe007,	// (0x0004fe73) aid_size_cell_midp_keypad_ParamLimits

0xe007,	// (0x0004fe73) aid_size_cell_midp_keypad

0xe021,	// (0x0004fe8d) midp_keyp_game_grid_pane_ParamLimits

0xe021,	// (0x0004fe8d) midp_keyp_game_grid_pane

0xe041,	// (0x0004fead) midp_keyp_rocker_pane_ParamLimits

0xe041,	// (0x0004fead) midp_keyp_rocker_pane

0xe07a,	// (0x0004fee6) midp_keyp_sk_left_pane_ParamLimits

0xe07a,	// (0x0004fee6) midp_keyp_sk_left_pane

0xe0d4,	// (0x0004ff40) midp_keyp_sk_right_pane_ParamLimits

0xe0d4,	// (0x0004ff40) midp_keyp_sk_right_pane

0x099b,	// (0x00042807) bg_button_pane_cp03

0xe12e,	// (0x0004ff9a) midp_keyp_sk_left_pane_g1

0x099b,	// (0x00042807) bg_button_pane_cp04

0xe12e,	// (0x0004ff9a) midp_keyp_sk_right_pane_g1

0xc2e6,	// (0x0004e152) midp_keyp_rocker_pane_g1

0xe137,	// (0x0004ffa3) keyp_game_cell_pane_ParamLimits

0xe137,	// (0x0004ffa3) keyp_game_cell_pane

0x099b,	// (0x00042807) bg_button_pane_cp02

0xe14a,	// (0x0004ffb6) keyp_game_cell_pane_g1

0x65e0,	// (0x0004844c) popup_fep_vkb2_window_ParamLimits

0x65e0,	// (0x0004844c) popup_fep_vkb2_window

0x899e,	// (0x0004a80a) aid_size_cell_vkb2_ParamLimits

0x899e,	// (0x0004a80a) aid_size_cell_vkb2

0x89f2,	// (0x0004a85e) popup_fep_vkb2_window_g1_ParamLimits

0x89f2,	// (0x0004a85e) popup_fep_vkb2_window_g1

0x8a3a,	// (0x0004a8a6) vkb2_area_bottom_pane_ParamLimits

0x8a3a,	// (0x0004a8a6) vkb2_area_bottom_pane

0x8a86,	// (0x0004a8f2) vkb2_area_keypad_pane_ParamLimits

0x8a86,	// (0x0004a8f2) vkb2_area_keypad_pane

0x8ac8,	// (0x0004a934) vkb2_area_top_pane_ParamLimits

0x8ac8,	// (0x0004a934) vkb2_area_top_pane

0x8b42,	// (0x0004a9ae) vkb2_top_entry_pane_ParamLimits

0x8b42,	// (0x0004a9ae) vkb2_top_entry_pane

0x8b6c,	// (0x0004a9d8) vkb2_top_grid_left_pane_ParamLimits

0x8b6c,	// (0x0004a9d8) vkb2_top_grid_left_pane

0x8b8a,	// (0x0004a9f6) vkb2_top_grid_right_pane_ParamLimits

0x8b8a,	// (0x0004a9f6) vkb2_top_grid_right_pane

0x8ba8,	// (0x0004aa14) vkb2_cell_keypad_pane_ParamLimits

0x8ba8,	// (0x0004aa14) vkb2_cell_keypad_pane

0x8c79,	// (0x0004aae5) vkb2_area_bottom_grid_pane_ParamLimits

0x8c79,	// (0x0004aae5) vkb2_area_bottom_grid_pane

0x8c9f,	// (0x0004ab0b) vkb2_area_bottom_pane_g1_ParamLimits

0x8c9f,	// (0x0004ab0b) vkb2_area_bottom_pane_g1

0x8cc3,	// (0x0004ab2f) vkb2_area_bottom_pane_g2_ParamLimits

0x8cc3,	// (0x0004ab2f) vkb2_area_bottom_pane_g2

0x8cf1,	// (0x0004ab5d) vkb2_area_bottom_pane_g3_ParamLimits

0x8cf1,	// (0x0004ab5d) vkb2_area_bottom_pane_g3

0x0002,

0xfd99,	// (0x00051c05) vkb2_area_bottom_pane_g_ParamLimits

0xfd99,	// (0x00051c05) vkb2_area_bottom_pane_g

0x8d52,	// (0x0004abbe) vkb2_top_cell_left_pane_ParamLimits

0x8d52,	// (0x0004abbe) vkb2_top_cell_left_pane

0xe15b,	// (0x0004ffc7) vkb2_top_entry_pane_g1_ParamLimits

0xe15b,	// (0x0004ffc7) vkb2_top_entry_pane_g1

0xe169,	// (0x0004ffd5) vkb2_top_entry_pane_t1_ParamLimits

0xe169,	// (0x0004ffd5) vkb2_top_entry_pane_t1

0xe19b,	// (0x00050007) vkb2_top_entry_pane_t2_ParamLimits

0xe19b,	// (0x00050007) vkb2_top_entry_pane_t2

0xe1cd,	// (0x00050039) vkb2_top_entry_pane_t3_ParamLimits

0xe1cd,	// (0x00050039) vkb2_top_entry_pane_t3

0x0002,

0xfda0,	// (0x00051c0c) vkb2_top_entry_pane_t_ParamLimits

0xfda0,	// (0x00051c0c) vkb2_top_entry_pane_t

0x8d9f,	// (0x0004ac0b) vkb2_top_grid_right_pane_g1_ParamLimits

0x8d9f,	// (0x0004ac0b) vkb2_top_grid_right_pane_g1

0x8db5,	// (0x0004ac21) vkb2_top_grid_right_pane_g2_ParamLimits

0x8db5,	// (0x0004ac21) vkb2_top_grid_right_pane_g2

0x8dcd,	// (0x0004ac39) vkb2_top_grid_right_pane_g3_ParamLimits

0x8dcd,	// (0x0004ac39) vkb2_top_grid_right_pane_g3

0x8de5,	// (0x0004ac51) vkb2_top_grid_right_pane_g4_ParamLimits

0x8de5,	// (0x0004ac51) vkb2_top_grid_right_pane_g4

0x0003,

0xfda7,	// (0x00051c13) vkb2_top_grid_right_pane_g_ParamLimits

0xfda7,	// (0x00051c13) vkb2_top_grid_right_pane_g

0x8dfb,	// (0x0004ac67) vkb2_top_cell_left_pane_g1

0x8e12,	// (0x0004ac7e) vkb2_cell_keypad_pane_g1_ParamLimits

0x8e12,	// (0x0004ac7e) vkb2_cell_keypad_pane_g1

0xe1f1,	// (0x0005005d) vkb2_cell_keypad_pane_t1_ParamLimits

0xe1f1,	// (0x0005005d) vkb2_cell_keypad_pane_t1

0x8e20,	// (0x0004ac8c) vkb2_cell_bottom_grid_pane_ParamLimits

0x8e20,	// (0x0004ac8c) vkb2_cell_bottom_grid_pane

0x8e59,	// (0x0004acc5) vkb2_cell_bottom_grid_pane_g1

0xdd9c,	// (0x0004fc08) aid_call2_pane_cp02

0xdda4,	// (0x0004fc10) aid_call_pane_cp02

0xddac,	// (0x0004fc18) clock_digital_number_pane_cp10

0xddb4,	// (0x0004fc20) clock_digital_number_pane_cp11

0xddbc,	// (0x0004fc28) clock_digital_number_pane_cp12

0xddc4,	// (0x0004fc30) clock_digital_number_pane_cp13

0xddcc,	// (0x0004fc38) clock_digital_separator_pane_cp10

0x11f0,	// (0x0004305c) popup_clock_digital_analogue_window_cp2_g1

0x11f0,	// (0x0004305c) popup_clock_digital_analogue_window_cp2_g2

0xddd4,	// (0x0004fc40) popup_clock_digital_analogue_window_cp2_g3

0x11f0,	// (0x0004305c) popup_clock_digital_analogue_window_cp2_g4

0xddd4,	// (0x0004fc40) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5c,	// (0x00051bc8) popup_clock_digital_analogue_window_cp2_g

0xdddc,	// (0x0004fc48) popup_clock_digital_analogue_window_cp2_t1

0xddea,	// (0x0004fc56) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd67,	// (0x00051bd3) popup_clock_digital_analogue_window_cp2_t

0xc2e6,	// (0x0004e152) clock_digital_number_pane_cp10_g1

0xc2e6,	// (0x0004e152) clock_digital_number_pane_cp10_g2

0x0001,

0xfb56,	// (0x000519c2) clock_digital_number_pane_cp10_g

0xc2e6,	// (0x0004e152) clock_digital_separator_pane_cp10_g1

0xc2e6,	// (0x0004e152) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb56,	// (0x000519c2) clock_digital_separator_pane_cp10_g

0xdc19,	// (0x0004fa85) uniindi_top_pane_g3

0xdc2a,	// (0x0004fa96) uniindi_top_pane_g4

0x8c33,	// (0x0004aa9f) vkb2_row_keypad_pane_ParamLimits

0x8c33,	// (0x0004aa9f) vkb2_row_keypad_pane

0x8e75,	// (0x0004ace1) vkb2_cell_t_keypad_pane_ParamLimits

0x8e75,	// (0x0004ace1) vkb2_cell_t_keypad_pane

0x8e85,	// (0x0004acf1) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x8e85,	// (0x0004acf1) vkb2_cell_t_keypad_pane_cp08

0x8e98,	// (0x0004ad04) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x8e98,	// (0x0004ad04) vkb2_cell_t_keypad_pane_cp09

0x8eac,	// (0x0004ad18) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x8eac,	// (0x0004ad18) vkb2_cell_t_keypad_pane_cp01

0x8ebd,	// (0x0004ad29) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x8ebd,	// (0x0004ad29) vkb2_cell_t_keypad_pane_cp02

0x8ece,	// (0x0004ad3a) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x8ece,	// (0x0004ad3a) vkb2_cell_t_keypad_pane_cp03

0x8edf,	// (0x0004ad4b) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x8edf,	// (0x0004ad4b) vkb2_cell_t_keypad_pane_cp04

0x8ef0,	// (0x0004ad5c) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x8ef0,	// (0x0004ad5c) vkb2_cell_t_keypad_pane_cp05

0x8f01,	// (0x0004ad6d) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x8f01,	// (0x0004ad6d) vkb2_cell_t_keypad_pane_cp06

0x8f12,	// (0x0004ad7e) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x8f12,	// (0x0004ad7e) vkb2_cell_t_keypad_pane_cp07

0x8f23,	// (0x0004ad8f) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x8f23,	// (0x0004ad8f) vkb2_cell_t_keypad_pane_cp10

0xc556,	// (0x0004e3c2) vkb2_cell_t_keypad_pane_g1

0xe208,	// (0x00050074) vkb2_cell_t_keypad_pane_t1

0x099b,	// (0x00042807) popup_grid_graphic2_window

0xe21a,	// (0x00050086) aid_size_cell_graphic2_ParamLimits

0xe21a,	// (0x00050086) aid_size_cell_graphic2

0xe252,	// (0x000500be) bg_popup_window_pane_cp21_ParamLimits

0xe252,	// (0x000500be) bg_popup_window_pane_cp21

0xe260,	// (0x000500cc) graphic2_pages_pane_ParamLimits

0xe260,	// (0x000500cc) graphic2_pages_pane

0xe2a6,	// (0x00050112) grid_graphic2_control_pane_ParamLimits

0xe2a6,	// (0x00050112) grid_graphic2_control_pane

0xe2e4,	// (0x00050150) grid_graphic2_pane_ParamLimits

0xe2e4,	// (0x00050150) grid_graphic2_pane

0xe358,	// (0x000501c4) cell_graphic2_pane

0x099b,	// (0x00042807) main_comp_mode_pane

0xd49c,	// (0x0004f308) list_ai3_gene_pane_ParamLimits

0xd860,	// (0x0004f6cc) bg_popup_window_pane_cp19_ParamLimits

0xd86c,	// (0x0004f6d8) bg_touch_area_indi_pane_ParamLimits

0xd86c,	// (0x0004f6d8) bg_touch_area_indi_pane

0xd882,	// (0x0004f6ee) bg_touch_area_indi_pane_cp01_ParamLimits

0xd882,	// (0x0004f6ee) bg_touch_area_indi_pane_cp01

0xd898,	// (0x0004f704) bg_touch_area_indi_pane_cp02_ParamLimits

0xd898,	// (0x0004f704) bg_touch_area_indi_pane_cp02

0xd8b0,	// (0x0004f71c) bg_touch_area_indi_pane_cp03_ParamLimits

0xd8b0,	// (0x0004f71c) bg_touch_area_indi_pane_cp03

0xd8ca,	// (0x0004f736) popup_slider_window_g1_ParamLimits

0xd8e6,	// (0x0004f752) popup_slider_window_g2_ParamLimits

0xd902,	// (0x0004f76e) popup_slider_window_g3_ParamLimits

0xfcf1,	// (0x00051b5d) popup_slider_window_g_ParamLimits

0xd95e,	// (0x0004f7ca) popup_slider_window_t1_ParamLimits

0xd9d2,	// (0x0004f83e) small_volume_slider_vertical_pane_ParamLimits

0xe358,	// (0x000501c4) cell_graphic2_pane_ParamLimits

0xe3a7,	// (0x00050213) bg_button_pane_cp10_ParamLimits

0xe3a7,	// (0x00050213) bg_button_pane_cp10

0xe3ba,	// (0x00050226) bg_button_pane_cp11_ParamLimits

0xe3ba,	// (0x00050226) bg_button_pane_cp11

0xe3cd,	// (0x00050239) graphic2_pages_pane_g1_ParamLimits

0xe3cd,	// (0x00050239) graphic2_pages_pane_g1

0xe3e8,	// (0x00050254) graphic2_pages_pane_g2_ParamLimits

0xe3e8,	// (0x00050254) graphic2_pages_pane_g2

0x0001,

0xfdb5,	// (0x00051c21) graphic2_pages_pane_g_ParamLimits

0xfdb5,	// (0x00051c21) graphic2_pages_pane_g

0xe400,	// (0x0005026c) graphic2_pages_pane_t1_ParamLimits

0xe400,	// (0x0005026c) graphic2_pages_pane_t1

0xe418,	// (0x00050284) cell_graphic2_control_pane_ParamLimits

0xe418,	// (0x00050284) cell_graphic2_control_pane

0xe436,	// (0x000502a2) cell_graphic2_pane_g1_ParamLimits

0xe436,	// (0x000502a2) cell_graphic2_pane_g1

0xe443,	// (0x000502af) cell_graphic2_pane_g2_ParamLimits

0xe443,	// (0x000502af) cell_graphic2_pane_g2

0xe450,	// (0x000502bc) cell_graphic2_pane_g3_ParamLimits

0xe450,	// (0x000502bc) cell_graphic2_pane_g3

0xe45d,	// (0x000502c9) cell_graphic2_pane_g4_ParamLimits

0xe45d,	// (0x000502c9) cell_graphic2_pane_g4

0xe46a,	// (0x000502d6) cell_graphic2_pane_g5_ParamLimits

0xe46a,	// (0x000502d6) cell_graphic2_pane_g5

0x0004,

0xfdba,	// (0x00051c26) cell_graphic2_pane_g_ParamLimits

0xfdba,	// (0x00051c26) cell_graphic2_pane_g

0xe485,	// (0x000502f1) cell_graphic2_pane_t1_ParamLimits

0xe485,	// (0x000502f1) cell_graphic2_pane_t1

0x9dbc,	// (0x0004bc28) grid_highlight_pane_cp11_ParamLimits

0x9dbc,	// (0x0004bc28) grid_highlight_pane_cp11

0x0b35,	// (0x000429a1) bg_button_pane_cp05

0xe4bc,	// (0x00050328) cell_graphic2_control_pane_g1

0xc2e6,	// (0x0004e152) bg_touch_area_indi_pane_g1

0xe4e4,	// (0x00050350) aid_cmod_rocker_key_size

0xe4ee,	// (0x0005035a) aid_cmode_itu_key_size

0xe4f8,	// (0x00050364) main_cmode_video_pane

0xe502,	// (0x0005036e) main_comp_mode_itu_pane

0xe52f,	// (0x0005039b) main_comp_mode_rocker_pane

0xe53b,	// (0x000503a7) cell_cmode_rocker_pane_ParamLimits

0xe53b,	// (0x000503a7) cell_cmode_rocker_pane

0xe54d,	// (0x000503b9) cell_cmode_itu_pane_ParamLimits

0xe54d,	// (0x000503b9) cell_cmode_itu_pane

0x0dbd,	// (0x00042c29) bg_button_pane_cp06_ParamLimits

0x0dbd,	// (0x00042c29) bg_button_pane_cp06

0xc556,	// (0x0004e3c2) cell_cmode_rocker_pane_g1_ParamLimits

0xc556,	// (0x0004e3c2) cell_cmode_rocker_pane_g1

0xda76,	// (0x0004f8e2) cell_cmode_rocker_pane_g2_ParamLimits

0xda76,	// (0x0004f8e2) cell_cmode_rocker_pane_g2

0x0001,

0xfdca,	// (0x00051c36) cell_cmode_rocker_pane_g_ParamLimits

0xfdca,	// (0x00051c36) cell_cmode_rocker_pane_g

0x099b,	// (0x00042807) bg_button_pane_cp07

0xe562,	// (0x000503ce) cell_cmode_itu_pane_g1

0xe56b,	// (0x000503d7) cell_cmode_itu_pane_t1

0xe579,	// (0x000503e5) cell_cmode_itu_pane_t2

0x0001,

0xfdcf,	// (0x00051c3b) cell_cmode_itu_pane_t

0xdc9b,	// (0x0004fb07) aid_touch_ctrl_left

0xdca3,	// (0x0004fb0f) aid_touch_ctrl_right

0x099b,	// (0x00042807) compa_mode_pane

0xe587,	// (0x000503f3) aid_cmod_rocker_key_size_cp

0xe591,	// (0x000503fd) aid_cmode_itu_key_size_cp

0xe59b,	// (0x00050407) compa_mode_pane_g1

0xe5a3,	// (0x0005040f) compa_mode_pane_g2

0xe5ab,	// (0x00050417) compa_mode_pane_g3

0x0002,

0xfdd4,	// (0x00051c40) compa_mode_pane_g

0xe5b3,	// (0x0005041f) main_comp_mode_itu_pane_cp

0xe5bb,	// (0x00050427) main_comp_mode_rocker_pane_cp

0xe5c3,	// (0x0005042f) cell_cmode_itu_pane_cp_ParamLimits

0xe5c3,	// (0x0005042f) cell_cmode_itu_pane_cp

0xe5d8,	// (0x00050444) cell_cmode_rocker_pane_cp_ParamLimits

0xe5d8,	// (0x00050444) cell_cmode_rocker_pane_cp

0x0dbd,	// (0x00042c29) bg_button_pane_cp06_cp_ParamLimits

0x0dbd,	// (0x00042c29) bg_button_pane_cp06_cp

0xc556,	// (0x0004e3c2) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc556,	// (0x0004e3c2) cell_cmode_rocker_pane_g1_cp

0xc2e6,	// (0x0004e152) cell_cmode_rocker_pane_g2_cp

0x099b,	// (0x00042807) bg_button_pane_cp07_cp

0xe5ea,	// (0x00050456) cell_cmode_itu_pane_g1_cp

0xe5f3,	// (0x0005045f) cell_cmode_itu_pane_t1_cp

0xe5f3,	// (0x0005045f) cell_cmode_itu_pane_t2_cp

0xb245,	// (0x0004d0b1) settings_code_pane_cp2

0x0a0b,	// (0x00042877) bg_popup_window_pane_cp3_ParamLimits

0x0c4e,	// (0x00042aba) heading_pane_cp3_ParamLimits

0x0c5a,	// (0x00042ac6) listscroll_popup_graphic_pane_ParamLimits

0x8477,	// (0x0004a2e3) fep_hwr_aid_pane_ParamLimits

0x8915,	// (0x0004a781) aid_touch_sctrl_top_ParamLimits

0x8922,	// (0x0004a78e) sctrl_sk_top_pane_g1_ParamLimits

0xc556,	// (0x0004e3c2) sctrl_sk_top_pane_g2_ParamLimits

0xfd0a,	// (0x00051b76) sctrl_sk_top_pane_g_ParamLimits

0x892f,	// (0x0004a79b) sctrl_sk_top_pane_t1_ParamLimits

0x8915,	// (0x0004a781) aid_touch_sctrl_bottom_ParamLimits

0x892f,	// (0x0004a79b) sctrl_sk_bottom_pane_t1_ParamLimits

0xdbe5,	// (0x0004fa51) aid_area_touch_clock

0x8b0a,	// (0x0004a976) aid_vkb2_area_top_pane_cell_ParamLimits

0x8b0a,	// (0x0004a976) aid_vkb2_area_top_pane_cell

0x8c55,	// (0x0004aac1) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8c55,	// (0x0004aac1) aid_vkb2_area_bottom_pane_cell

0xe153,	// (0x0004ffbf) popup_char_count_window

0xe601,	// (0x0005046d) popup_char_count_window_g1

0xe60a,	// (0x00050476) popup_char_count_window_g2

0xe613,	// (0x0005047f) popup_char_count_window_g3

0x0002,

0xfddb,	// (0x00051c47) popup_char_count_window_g

0xe61c,	// (0x00050488) popup_char_count_window_t1

0x89d0,	// (0x0004a83c) popup_fep_char_preview_window_ParamLimits

0x89d0,	// (0x0004a83c) popup_fep_char_preview_window

0x8b28,	// (0x0004a994) vkb2_top_candi_pane_ParamLimits

0x8b28,	// (0x0004a994) vkb2_top_candi_pane

0xe62a,	// (0x00050496) cell_vkb2_top_candi_pane_ParamLimits

0xe62a,	// (0x00050496) cell_vkb2_top_candi_pane

0xa3c2,	// (0x0004c22e) bg_popup_fep_char_preview_window_ParamLimits

0xa3c2,	// (0x0004c22e) bg_popup_fep_char_preview_window

0x8f38,	// (0x0004ada4) popup_fep_char_preview_window_t1_ParamLimits

0x8f38,	// (0x0004ada4) popup_fep_char_preview_window_t1

0xe677,	// (0x000504e3) bg_popup_fep_char_preview_window_g1

0xe67f,	// (0x000504eb) bg_popup_fep_char_preview_window_g2

0xe687,	// (0x000504f3) bg_popup_fep_char_preview_window_g3

0xe68f,	// (0x000504fb) bg_popup_fep_char_preview_window_g4

0xe697,	// (0x00050503) bg_popup_fep_char_preview_window_g5

0x8f72,	// (0x0004adde) bg_popup_fep_char_preview_window_g6

0xe69f,	// (0x0005050b) bg_popup_fep_char_preview_window_g7

0xe6a7,	// (0x00050513) bg_popup_fep_char_preview_window_g8

0xe6af,	// (0x0005051b) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde2,	// (0x00051c4e) bg_popup_fep_char_preview_window_g

0xc556,	// (0x0004e3c2) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc556,	// (0x0004e3c2) cell_vkb2_top_candi_pane_g1

0xc86d,	// (0x0004e6d9) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc86d,	// (0x0004e6d9) cell_vkb2_top_candi_pane_g2

0xc88e,	// (0x0004e6fa) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc88e,	// (0x0004e6fa) cell_vkb2_top_candi_pane_g3

0x8f7a,	// (0x0004ade6) cell_vkb2_top_candi_pane_g4_ParamLimits

0x8f7a,	// (0x0004ade6) cell_vkb2_top_candi_pane_g4

0xe50e,	// (0x0005037a) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe50e,	// (0x0005037a) cell_vkb2_top_candi_pane_g5

0xda76,	// (0x0004f8e2) cell_vkb2_top_candi_pane_g6_ParamLimits

0xda76,	// (0x0004f8e2) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf5,	// (0x00051c61) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf5,	// (0x00051c61) cell_vkb2_top_candi_pane_g

0x8f9b,	// (0x0004ae07) cell_vkb2_top_candi_pane_t1

0x816d,	// (0x00049fd9) aid_size_touch_slider_mark_ParamLimits

0x816d,	// (0x00049fd9) aid_size_touch_slider_mark

0xe296,	// (0x00050102) grid_graphic2_catg_pane_ParamLimits

0xe296,	// (0x00050102) grid_graphic2_catg_pane

0xe334,	// (0x000501a0) popup_grid_graphic2_window_t1_ParamLimits

0xe334,	// (0x000501a0) popup_grid_graphic2_window_t1

0xe346,	// (0x000501b2) popup_grid_graphic2_window_t2_ParamLimits

0xe346,	// (0x000501b2) popup_grid_graphic2_window_t2

0x0001,

0xfdb0,	// (0x00051c1c) popup_grid_graphic2_window_t_ParamLimits

0xfdb0,	// (0x00051c1c) popup_grid_graphic2_window_t

0x0b35,	// (0x000429a1) bg_button_pane_cp05_ParamLimits

0xe4bc,	// (0x00050328) cell_graphic2_control_pane_g1_ParamLimits

0xe6b7,	// (0x00050523) cell_graphic2_catg_pane_ParamLimits

0xe6b7,	// (0x00050523) cell_graphic2_catg_pane

0x099b,	// (0x00042807) bg_button_pane_cp12

0xe6c9,	// (0x00050535) cell_graphic2_catg_pane_g1

0xdbb0,	// (0x0004fa1c) cell_tb_ext_pane_t1_ParamLimits

0x8d72,	// (0x0004abde) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8d72,	// (0x0004abde) vkb2_top_cell_right_narrow_pane

0x8d8a,	// (0x0004abf6) vkb2_top_cell_right_wide_pane_ParamLimits

0x8d8a,	// (0x0004abf6) vkb2_top_cell_right_wide_pane

0x8469,	// (0x0004a2d5) bg_vkb2_func_pane_ParamLimits

0x8469,	// (0x0004a2d5) bg_vkb2_func_pane

0x8dfb,	// (0x0004ac67) vkb2_top_cell_left_pane_g1_ParamLimits

0x8469,	// (0x0004a2d5) bg_vkb2_fuc_pane_cp03_ParamLimits

0x8469,	// (0x0004a2d5) bg_vkb2_fuc_pane_cp03

0x8e59,	// (0x0004acc5) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9d50,	// (0x0004bbbc) bg_vkb2_func_pane_g1

0x9d58,	// (0x0004bbc4) bg_vkb2_func_pane_g2

0x9d68,	// (0x0004bbd4) bg_vkb2_func_pane_g3

0x9d60,	// (0x0004bbcc) bg_vkb2_func_pane_g4

0x9d70,	// (0x0004bbdc) bg_vkb2_func_pane_g5

0x9d78,	// (0x0004bbe4) bg_vkb2_func_pane_g6

0x9d80,	// (0x0004bbec) bg_vkb2_func_pane_g7

0x9d88,	// (0x0004bbf4) bg_vkb2_func_pane_g8

0x9d48,	// (0x0004bbb4) bg_vkb2_func_pane_g9

0x0008,

0xfe02,	// (0x00051c6e) bg_vkb2_func_pane_g

0x8469,	// (0x0004a2d5) bg_vkb2_fuc_pane_cp01_ParamLimits

0x8469,	// (0x0004a2d5) bg_vkb2_fuc_pane_cp01

0x8dfb,	// (0x0004ac67) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x8dfb,	// (0x0004ac67) vkb2_top_cell_right_wide_pane_g1

0x8469,	// (0x0004a2d5) bg_vkb2_fuc_pane_cp02_ParamLimits

0x8469,	// (0x0004a2d5) bg_vkb2_fuc_pane_cp02

0x8e59,	// (0x0004acc5) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x8e59,	// (0x0004acc5) vkb2_top_cell_right_narrow_pane_g1

0xd7e2,	// (0x0004f64e) aid_touch_area_decrease_ParamLimits

0xd7e2,	// (0x0004f64e) aid_touch_area_decrease

0xd802,	// (0x0004f66e) aid_touch_area_increase_ParamLimits

0xd802,	// (0x0004f66e) aid_touch_area_increase

0xd80e,	// (0x0004f67a) aid_touch_area_mute_ParamLimits

0xd80e,	// (0x0004f67a) aid_touch_area_mute

0xd832,	// (0x0004f69e) aid_touch_area_slider_ParamLimits

0xd832,	// (0x0004f69e) aid_touch_area_slider

0xd91e,	// (0x0004f78a) popup_slider_window_g4_ParamLimits

0xd91e,	// (0x0004f78a) popup_slider_window_g4

0xd92a,	// (0x0004f796) popup_slider_window_g5_ParamLimits

0xd92a,	// (0x0004f796) popup_slider_window_g5

0xd94c,	// (0x0004f7b8) popup_slider_window_g6_ParamLimits

0xd94c,	// (0x0004f7b8) popup_slider_window_g6

0xd98c,	// (0x0004f7f8) popup_slider_window_t2_ParamLimits

0xd98c,	// (0x0004f7f8) popup_slider_window_t2

0x0001,

0xfcfe,	// (0x00051b6a) popup_slider_window_t_ParamLimits

0xfcfe,	// (0x00051b6a) popup_slider_window_t

0xd9a4,	// (0x0004f810) slider_pane_ParamLimits

0xd9a4,	// (0x0004f810) slider_pane

0xe6d2,	// (0x0005053e) slider_pane_g1_ParamLimits

0xe6d2,	// (0x0005053e) slider_pane_g1

0xe6e6,	// (0x00050552) slider_pane_g2_ParamLimits

0xe6e6,	// (0x00050552) slider_pane_g2

0xe6fc,	// (0x00050568) slider_pane_g3_ParamLimits

0xe6fc,	// (0x00050568) slider_pane_g3

0x0003,

0xfe15,	// (0x00051c81) slider_pane_g_ParamLimits

0xfe15,	// (0x00051c81) slider_pane_g

0x7d8a,	// (0x00049bf6) popup_tb_float_extension_window_ParamLimits

0x7d8a,	// (0x00049bf6) popup_tb_float_extension_window

0xe728,	// (0x00050594) aid_size_cell_tb_float_ext

0x099b,	// (0x00042807) bg_popup_sub_window_cp28

0xe734,	// (0x000505a0) grid_tb_float_ext_pane

0xe73e,	// (0x000505aa) cell_tb_float_ext_pane_ParamLimits

0xe73e,	// (0x000505aa) cell_tb_float_ext_pane

0xe758,	// (0x000505c4) cell_tb_float_ext_pane_g1

0xe761,	// (0x000505cd) grid_highlight_pane_cp12

0x85aa,	// (0x0004a416) cell_last_hwr_side_pane_ParamLimits

0x85aa,	// (0x0004a416) cell_last_hwr_side_pane

0xc2e6,	// (0x0004e152) cell_last_hwr_side_pane_g1

0xe76a,	// (0x000505d6) cell_last_hwr_side_pane_g2

0x0001,

0xfe1e,	// (0x00051c8a) cell_last_hwr_side_pane_g

0x8d21,	// (0x0004ab8d) vkb2_area_bottom_space_btn_pane_ParamLimits

0x8d21,	// (0x0004ab8d) vkb2_area_bottom_space_btn_pane

0xc556,	// (0x0004e3c2) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe208,	// (0x00050074) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x8f9b,	// (0x0004ae07) cell_vkb2_top_candi_pane_t1_ParamLimits

0x8fba,	// (0x0004ae26) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x8fba,	// (0x0004ae26) vkb2_area_bottom_space_btn_pane_g1

0x8ff4,	// (0x0004ae60) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x8ff4,	// (0x0004ae60) vkb2_area_bottom_space_btn_pane_g2

0x902a,	// (0x0004ae96) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x902a,	// (0x0004ae96) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe23,	// (0x00051c8f) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe23,	// (0x00051c8f) vkb2_area_bottom_space_btn_pane_g

0x851e,	// (0x0004a38a) cel_fep_hwr_func_pane_ParamLimits

0x851e,	// (0x0004a38a) cel_fep_hwr_func_pane

0x855a,	// (0x0004a3c6) cell_hwr_side_button_pane_ParamLimits

0x855a,	// (0x0004a3c6) cell_hwr_side_button_pane

0xdbe5,	// (0x0004fa51) aid_area_touch_clock_ParamLimits

0x0b35,	// (0x000429a1) bg_uniindi_top_pane_ParamLimits

0xdbf7,	// (0x0004fa63) uniindi_top_pane_g1_ParamLimits

0xdc0d,	// (0x0004fa79) uniindi_top_pane_g2_ParamLimits

0xdc19,	// (0x0004fa85) uniindi_top_pane_g3_ParamLimits

0xdc2a,	// (0x0004fa96) uniindi_top_pane_g4_ParamLimits

0xfd36,	// (0x00051ba2) uniindi_top_pane_g_ParamLimits

0xdc37,	// (0x0004faa3) uniindi_top_pane_t1_ParamLimits

0x0b35,	// (0x000429a1) bg_vkb2_func_pane_cp01_ParamLimits

0x0b35,	// (0x000429a1) bg_vkb2_func_pane_cp01

0xe773,	// (0x000505df) cel_fep_hwr_func_pane_g1_ParamLimits

0xe773,	// (0x000505df) cel_fep_hwr_func_pane_g1

0x0b35,	// (0x000429a1) bg_vkb2_func_pane_cp02_ParamLimits

0x0b35,	// (0x000429a1) bg_vkb2_func_pane_cp02

0xe773,	// (0x000505df) cell_hwr_side_button_pane_g1_ParamLimits

0xe773,	// (0x000505df) cell_hwr_side_button_pane_g1

0x9bcc,	// (0x0004ba38) status_pane_g4_ParamLimits

0x9bcc,	// (0x0004ba38) status_pane_g4

0x9be6,	// (0x0004ba52) status_pane_t1

0xc021,	// (0x0004de8d) form2_midp_gauge_slider_cont_pane

0xc029,	// (0x0004de95) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc03b,	// (0x0004dea7) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc04d,	// (0x0004deb9) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb09,	// (0x00051975) form2_midp_gauge_slider_pane_t_ParamLimits

0xc05f,	// (0x0004decb) form2_midp_slider_pane_ParamLimits

0x8990,	// (0x0004a7fc) aid_size_cell_func_vkb2_ParamLimits

0x8990,	// (0x0004a7fc) aid_size_cell_func_vkb2

0xe714,	// (0x00050580) slider_pane_g4_ParamLimits

0xe714,	// (0x00050580) slider_pane_g4

0x9074,	// (0x0004aee0) form2_midp_gauge_slider_pane_t2_cp01

0x9082,	// (0x0004aeee) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x9082,	// (0x0004aeee) form2_midp_gauge_slider_pane_t3_cp01

0x909f,	// (0x0004af0b) form2_midp_slider_pane_cp01

0x099b,	// (0x00042807) navi_smil_pane

0xe7ac,	// (0x00050618) navi_smil_pane_g1

0xe7b4,	// (0x00050620) navi_smil_pane_t1

0xe781,	// (0x000505ed) form2_midp_slider_pane_g1

0xe78a,	// (0x000505f6) form2_midp_slider_pane_g2

0xe792,	// (0x000505fe) form2_midp_slider_pane_g3

0xe781,	// (0x000505ed) form2_midp_slider_pane_g4

0xe79a,	// (0x00050606) form2_midp_slider_pane_g5

0x0004,

0xfe2c,	// (0x00051c98) form2_midp_slider_pane_g

0x9064,	// (0x0004aed0) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x9064,	// (0x0004aed0) vkb2_area_bottom_space_btn_pane_g4

0x99fb,	// (0x0004b867) lc0_navi_pane_ParamLimits

0x99fb,	// (0x0004b867) lc0_navi_pane

0x9a71,	// (0x0004b8dd) lc0_stat_indi_pane_ParamLimits

0x9a71,	// (0x0004b8dd) lc0_stat_indi_pane

0x9a88,	// (0x0004b8f4) ls0_title_pane_ParamLimits

0x9a88,	// (0x0004b8f4) ls0_title_pane

0x0dbd,	// (0x00042c29) bg_popup_sub_pane_cp14_ParamLimits

0xdbcc,	// (0x0004fa38) list_uniindi_pane_ParamLimits

0xdbd8,	// (0x0004fa44) uniindi_top_pane_ParamLimits

0xdc73,	// (0x0004fadf) list_single_uniindi_pane_g1_ParamLimits

0xdc86,	// (0x0004faf2) list_single_uniindi_pane_t1_ParamLimits

0x90a8,	// (0x0004af14) lc0_stat_clock_pane_ParamLimits

0x90a8,	// (0x0004af14) lc0_stat_clock_pane

0xe7c2,	// (0x0005062e) lc0_stat_indi_pane_g1_ParamLimits

0xe7c2,	// (0x0005062e) lc0_stat_indi_pane_g1

0xe7cf,	// (0x0005063b) lc0_stat_indi_pane_g2_ParamLimits

0xe7cf,	// (0x0005063b) lc0_stat_indi_pane_g2

0x0001,

0xfe37,	// (0x00051ca3) lc0_stat_indi_pane_g_ParamLimits

0xfe37,	// (0x00051ca3) lc0_stat_indi_pane_g

0x90b5,	// (0x0004af21) lc0_uni_indicator_pane_ParamLimits

0x90b5,	// (0x0004af21) lc0_uni_indicator_pane

0xe7dc,	// (0x00050648) ls0_title_pane_g1_ParamLimits

0xe7dc,	// (0x00050648) ls0_title_pane_g1

0xe7f0,	// (0x0005065c) ls0_title_pane_t1_ParamLimits

0xe7f0,	// (0x0005065c) ls0_title_pane_t1

0x90c2,	// (0x0004af2e) lc0_uni_indicator_pane_g1_ParamLimits

0x90c2,	// (0x0004af2e) lc0_uni_indicator_pane_g1

0xe826,	// (0x00050692) lc0_stat_clock_pane_t1

0x099b,	// (0x00042807) main_ai5_pane

0xe834,	// (0x000506a0) ai5_sk_pane_ParamLimits

0xe834,	// (0x000506a0) ai5_sk_pane

0xe841,	// (0x000506ad) cell_ai5_widget_pane_ParamLimits

0xe841,	// (0x000506ad) cell_ai5_widget_pane

0xe8f3,	// (0x0005075f) aid_size_cell_widget_grid

0xe901,	// (0x0005076d) bg_ai5_widget_pane_ParamLimits

0xe901,	// (0x0005076d) bg_ai5_widget_pane

0xe975,	// (0x000507e1) cell_ai5_widget_pane_g2

0xe985,	// (0x000507f1) cell_ai5_widget_pane_g3

0xe99c,	// (0x00050808) cell_ai5_widget_pane_g4

0xe9a8,	// (0x00050814) cell_ai5_widget_pane_g5

0xe9b4,	// (0x00050820) cell_ai5_widget_pane_g6

0xe9c0,	// (0x0005082c) cell_ai5_widget_pane_g7

0xea08,	// (0x00050874) cell_ai5_widget_pane_t1_ParamLimits

0xea08,	// (0x00050874) cell_ai5_widget_pane_t1

0xea25,	// (0x00050891) cell_ai5_widget_pane_t2_ParamLimits

0xea25,	// (0x00050891) cell_ai5_widget_pane_t2

0xea3d,	// (0x000508a9) cell_ai5_widget_pane_t3_ParamLimits

0xea3d,	// (0x000508a9) cell_ai5_widget_pane_t3

0xea55,	// (0x000508c1) cell_ai5_widget_pane_t4_ParamLimits

0xea55,	// (0x000508c1) cell_ai5_widget_pane_t4

0xea72,	// (0x000508de) cell_ai5_widget_pane_t5_ParamLimits

0xea72,	// (0x000508de) cell_ai5_widget_pane_t5

0xea91,	// (0x000508fd) cell_ai5_widget_pane_t6_ParamLimits

0xea91,	// (0x000508fd) cell_ai5_widget_pane_t6

0xeaa3,	// (0x0005090f) cell_ai5_widget_pane_t7_ParamLimits

0xeaa3,	// (0x0005090f) cell_ai5_widget_pane_t7

0xeabc,	// (0x00050928) cell_ai5_widget_pane_t8_ParamLimits

0xeabc,	// (0x00050928) cell_ai5_widget_pane_t8

0x0009,

0xfe51,	// (0x00051cbd) cell_ai5_widget_pane_t_ParamLimits

0xfe51,	// (0x00051cbd) cell_ai5_widget_pane_t

0xeb10,	// (0x0005097c) grid_ai5_widget_pane

0x0dbd,	// (0x00042c29) highlight_cell_ai5_widget_pane_ParamLimits

0x0dbd,	// (0x00042c29) highlight_cell_ai5_widget_pane

0xeb1e,	// (0x0005098a) ai5_sk_left_pane

0xeb28,	// (0x00050994) ai5_sk_middle_pane

0xeb32,	// (0x0005099e) ai5_sk_right_pane

0xeb3c,	// (0x000509a8) bg_ai5_widget_pane_g1_ParamLimits

0xeb3c,	// (0x000509a8) bg_ai5_widget_pane_g1

0xeb48,	// (0x000509b4) bg_ai5_widget_pane_g2_ParamLimits

0xeb48,	// (0x000509b4) bg_ai5_widget_pane_g2

0xeb54,	// (0x000509c0) bg_ai5_widget_pane_g3_ParamLimits

0xeb54,	// (0x000509c0) bg_ai5_widget_pane_g3

0xeb60,	// (0x000509cc) bg_ai5_widget_pane_g4_ParamLimits

0xeb60,	// (0x000509cc) bg_ai5_widget_pane_g4

0xeb6c,	// (0x000509d8) bg_ai5_widget_pane_g5_ParamLimits

0xeb6c,	// (0x000509d8) bg_ai5_widget_pane_g5

0xeb78,	// (0x000509e4) bg_ai5_widget_pane_g6_ParamLimits

0xeb78,	// (0x000509e4) bg_ai5_widget_pane_g6

0xeb84,	// (0x000509f0) bg_ai5_widget_pane_g7_ParamLimits

0xeb84,	// (0x000509f0) bg_ai5_widget_pane_g7

0xeb90,	// (0x000509fc) bg_ai5_widget_pane_g8_ParamLimits

0xeb90,	// (0x000509fc) bg_ai5_widget_pane_g8

0xeb9c,	// (0x00050a08) bg_ai5_widget_pane_g9_ParamLimits

0xeb9c,	// (0x00050a08) bg_ai5_widget_pane_g9

0x0008,

0xfe66,	// (0x00051cd2) bg_ai5_widget_pane_g_ParamLimits

0xfe66,	// (0x00051cd2) bg_ai5_widget_pane_g

0xebce,	// (0x00050a3a) cell_shortcut_ai5_widget_pane_ParamLimits

0xebce,	// (0x00050a3a) cell_shortcut_ai5_widget_pane

0x94f0,	// (0x0004b35c) bg_cell_shortcut_ai5_widget_pane

0xebdf,	// (0x00050a4b) cell_grid_ai5_widget_pane_g1

0x94f0,	// (0x0004b35c) highlight_cell_shortcut_ai5_widget_pane

0x9d58,	// (0x0004bbc4) ai5_sk_left_pane_g1

0xebe8,	// (0x00050a54) ai5_sk_left_pane_g2

0xebf0,	// (0x00050a5c) ai5_sk_left_pane_g3

0xebf8,	// (0x00050a64) ai5_sk_left_pane_g4

0x0003,

0xfe79,	// (0x00051ce5) ai5_sk_left_pane_g

0xec00,	// (0x00050a6c) ai5_sk_left_pane_t1

0x9d50,	// (0x0004bbbc) ai5_sk_right_pane_g1

0xec0e,	// (0x00050a7a) ai5_sk_right_pane_g2

0xec16,	// (0x00050a82) ai5_sk_right_pane_g3

0xec1e,	// (0x00050a8a) ai5_sk_right_pane_g4

0x0003,

0xfe82,	// (0x00051cee) ai5_sk_right_pane_g

0xec26,	// (0x00050a92) ai5_sk_right_pane_t1

0x9d50,	// (0x0004bbbc) ai5_sk_middle_pane_g1

0x9d58,	// (0x0004bbc4) ai5_sk_middle_pane_g2

0x9d70,	// (0x0004bbdc) ai5_sk_middle_pane_g3

0xec16,	// (0x00050a82) ai5_sk_middle_pane_g4

0xebf0,	// (0x00050a5c) ai5_sk_middle_pane_g5

0xec34,	// (0x00050aa0) ai5_sk_middle_pane_g6

0xec3c,	// (0x00050aa8) ai5_sk_middle_pane_g7

0x0006,

0xfe8b,	// (0x00051cf7) ai5_sk_middle_pane_g

0x9881,	// (0x0004b6ed) aid_touch_area_size_lc0_ParamLimits

0x9881,	// (0x0004b6ed) aid_touch_area_size_lc0

0x86a9,	// (0x0004a515) cell_hwr_candidate_pane_t1_ParamLimits

0x989d,	// (0x0004b709) aid_touch_navi_pane

0x9b76,	// (0x0004b9e2) status_dt_navi_pane_ParamLimits

0x9b76,	// (0x0004b9e2) status_dt_navi_pane

0x9b83,	// (0x0004b9ef) status_dt_sta_pane_ParamLimits

0x9b83,	// (0x0004b9ef) status_dt_sta_pane

0xec44,	// (0x00050ab0) dt_sta_controll_pane

0xec51,	// (0x00050abd) dt_sta_indi_pane

0xec62,	// (0x00050ace) dt_sta_title_pane

0x0b35,	// (0x000429a1) bg_dt_sta_indi_pane_ParamLimits

0x0b35,	// (0x000429a1) bg_dt_sta_indi_pane

0xec75,	// (0x00050ae1) dt_sta_battery_pane

0xec7d,	// (0x00050ae9) dt_sta_indi_pane_g1

0xec86,	// (0x00050af2) dt_sta_indi_pane_g2

0xec8f,	// (0x00050afb) dt_sta_indi_pane_g3

0x0002,

0xfe9a,	// (0x00051d06) dt_sta_indi_pane_g

0xec98,	// (0x00050b04) dt_sta_signal_pane

0x0dbd,	// (0x00042c29) bg_dt_sta_title_pane_ParamLimits

0x0dbd,	// (0x00042c29) bg_dt_sta_title_pane

0xab7e,	// (0x0004c9ea) dt_sta_title_pane_g1

0xeca1,	// (0x00050b0d) dt_sta_title_pane_t1_ParamLimits

0xeca1,	// (0x00050b0d) dt_sta_title_pane_t1

0x099b,	// (0x00042807) bg_dt_sta_control_pane

0xecb6,	// (0x00050b22) dt_sta_controll_pane_g1

0xecbf,	// (0x00050b2b) bg_dt_sta_title_pane_g1

0xecc8,	// (0x00050b34) bg_dt_sta_title_pane_g2

0xecd1,	// (0x00050b3d) bg_dt_sta_title_pane_g3

0x0002,

0xfea1,	// (0x00051d0d) bg_dt_sta_title_pane_g

0xc2e6,	// (0x0004e152) bg_dt_sta_indi_pane_g1

0xecda,	// (0x00050b46) dt_sta_signal_pane_g1

0xece2,	// (0x00050b4e) dt_sta_signal_pane_g2

0x0001,

0xfea8,	// (0x00051d14) dt_sta_signal_pane_g

0xecea,	// (0x00050b56) dt_sta_battery_pane_g1

0xecf3,	// (0x00050b5f) dt_sta_battery_pane_t1

0xc2e6,	// (0x0004e152) bg_dt_sta_control_pane_g1

0x1273,	// (0x000430df) fep_china_uni_eep_pane

0x127b,	// (0x000430e7) fep_china_uni_entry_pane_ParamLimits

0x128b,	// (0x000430f7) popup_fep_china_uni_window_g1_ParamLimits

0x129b,	// (0x00043107) popup_fep_china_uni_window_g2_ParamLimits

0x129b,	// (0x00043107) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x00051584) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x00051584) popup_fep_china_uni_window_g

0xed02,	// (0x00050b6e) fep_china_uni_eep_pane_g1

0xed0a,	// (0x00050b76) fep_china_uni_eep_pane_t1

0xe7a3,	// (0x0005060f) aid_touch_area_size_smil_player

0x99f3,	// (0x0004b85f) lc0_clock_pane

0x9bda,	// (0x0004ba46) status_pane_g5_ParamLimits

0x9bda,	// (0x0004ba46) status_pane_g5

0x7a4b,	// (0x000498b7) popup_keymap_window

0x9b98,	// (0x0004ba04) status_icon_pane

0xe985,	// (0x000507f1) cell_ai5_widget_pane_g3_ParamLimits

0xe99c,	// (0x00050808) cell_ai5_widget_pane_g4_ParamLimits

0xe9a8,	// (0x00050814) cell_ai5_widget_pane_g5_ParamLimits

0xe9cc,	// (0x00050838) cell_ai5_widget_pane_g8_ParamLimits

0xe9cc,	// (0x00050838) cell_ai5_widget_pane_g8

0xe9e0,	// (0x0005084c) cell_ai5_widget_pane_g9_ParamLimits

0xe9e0,	// (0x0005084c) cell_ai5_widget_pane_g9

0xe9f4,	// (0x00050860) cell_ai5_widget_pane_g10_ParamLimits

0xe9f4,	// (0x00050860) cell_ai5_widget_pane_g10

0xed19,	// (0x00050b85) status_icon_pane_g1

0x099b,	// (0x00042807) bg_popup_sub_pane_cp13

0xed21,	// (0x00050b8d) popup_keymap_window_t1

0x97c1,	// (0x0004b62d) control_pane_g6_ParamLimits

0x97c1,	// (0x0004b62d) control_pane_g6

0x97ce,	// (0x0004b63a) control_pane_g7_ParamLimits

0x97ce,	// (0x0004b63a) control_pane_g7

0x97db,	// (0x0004b647) control_pane_g8_ParamLimits

0x97db,	// (0x0004b647) control_pane_g8

0xec44,	// (0x00050ab0) dt_sta_controll_pane_ParamLimits

0xec51,	// (0x00050abd) dt_sta_indi_pane_ParamLimits

0xec62,	// (0x00050ace) dt_sta_title_pane_ParamLimits

0x0d08,	// (0x00042b74) aid_size_touch_scroll_bar_cale

0x65be,	// (0x0004842a) popup_discreet_window_ParamLimits

0x65be,	// (0x0004842a) popup_discreet_window

0x6638,	// (0x000484a4) popup_sk_window

0xa3c2,	// (0x0004c22e) bg_popup_sub_pane_cp28_ParamLimits

0xa3c2,	// (0x0004c22e) bg_popup_sub_pane_cp28

0xed2f,	// (0x00050b9b) popup_discreet_window_g1_ParamLimits

0xed2f,	// (0x00050b9b) popup_discreet_window_g1

0xed4f,	// (0x00050bbb) popup_discreet_window_t1_ParamLimits

0xed4f,	// (0x00050bbb) popup_discreet_window_t1

0xed6d,	// (0x00050bd9) popup_discreet_window_t2_ParamLimits

0xed6d,	// (0x00050bd9) popup_discreet_window_t2

0x0002,

0xfead,	// (0x00051d19) popup_discreet_window_t_ParamLimits

0xfead,	// (0x00051d19) popup_discreet_window_t

0x90d6,	// (0x0004af42) popup_sk_window_g1

0x90e0,	// (0x0004af4c) popup_sk_window_g2

0x0001,

0xfeb4,	// (0x00051d20) popup_sk_window_g

0x90e8,	// (0x0004af54) popup_sk_window_t1

0x90f6,	// (0x0004af62) popup_sk_window_t1_copy1

0xe975,	// (0x000507e1) cell_ai5_widget_pane_g2_ParamLimits

0xeace,	// (0x0005093a) cell_ai5_widget_pane_t9_ParamLimits

0xeace,	// (0x0005093a) cell_ai5_widget_pane_t9

0x099b,	// (0x00042807) main_fep_fshwr2_pane

0x9104,	// (0x0004af70) aid_fshwr2_btn_pane

0x9110,	// (0x0004af7c) aid_fshwr2_syb_pane

0x9121,	// (0x0004af8d) aid_fshwr2_txt_pane

0x912d,	// (0x0004af99) fshwr2_func_candi_pane

0x9145,	// (0x0004afb1) fshwr2_hwr_syb_pane

0x915c,	// (0x0004afc8) fshwr2_icf_pane

0x099b,	// (0x00042807) fshwr2_icf_bg_pane

0x9185,	// (0x0004aff1) fshwr2_icf_pane_t1_ParamLimits

0x9185,	// (0x0004aff1) fshwr2_icf_pane_t1

0x11f0,	// (0x0004305c) fshwr2_func_candi_pane_g1

0xedbf,	// (0x00050c2b) fshwr2_func_candi_row_pane_ParamLimits

0xedbf,	// (0x00050c2b) fshwr2_func_candi_row_pane

0x919e,	// (0x0004b00a) cell_fshwr2_syb_pane_ParamLimits

0x919e,	// (0x0004b00a) cell_fshwr2_syb_pane

0xc556,	// (0x0004e3c2) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc556,	// (0x0004e3c2) fshwr2_hwr_syb_pane_g1

0x099b,	// (0x00042807) bg_popup_call_pane_cp01

0x91b4,	// (0x0004b020) fshwr2_func_candi_cell_pane_ParamLimits

0x91b4,	// (0x0004b020) fshwr2_func_candi_cell_pane

0xaa1e,	// (0x0004c88a) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xaa1e,	// (0x0004c88a) fshwr2_func_candi_cell_bg_pane

0x91ff,	// (0x0004b06b) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x91ff,	// (0x0004b06b) fshwr2_func_candi_cell_pane_g1

0x9227,	// (0x0004b093) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9227,	// (0x0004b093) fshwr2_func_candi_cell_pane_t1

0x099b,	// (0x00042807) bg_button_pane_cp08

0xedcf,	// (0x00050c3b) cell_fshwr2_syb_bg_pane

0x923a,	// (0x0004b0a6) cell_fshwr2_syb_bg_pane_g1

0x9242,	// (0x0004b0ae) cell_fshwr2_syb_bg_pane_t1

0x0dbd,	// (0x00042c29) main_tmo_pane

0xaeb7,	// (0x0004cd23) uni_indicator_pane_g1_ParamLimits

0xaeca,	// (0x0004cd36) uni_indicator_pane_g2_ParamLimits

0xaedc,	// (0x0004cd48) uni_indicator_pane_g3_ParamLimits

0xaeeb,	// (0x0004cd57) uni_indicator_pane_g4_ParamLimits

0xaeeb,	// (0x0004cd57) uni_indicator_pane_g4

0xaeff,	// (0x0004cd6b) uni_indicator_pane_g5_ParamLimits

0xaeff,	// (0x0004cd6b) uni_indicator_pane_g5

0xaeff,	// (0x0004cd6b) uni_indicator_pane_g6_ParamLimits

0xaeff,	// (0x0004cd6b) uni_indicator_pane_g6

0xf91c,	// (0x00051788) uni_indicator_pane_g_ParamLimits

0xd7c4,	// (0x0004f630) popup_tmo_note_window_ParamLimits

0xd7c4,	// (0x0004f630) popup_tmo_note_window

0x0dbd,	// (0x00042c29) fshwr2_bg_pane

0x9218,	// (0x0004b084) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9218,	// (0x0004b084) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb9,	// (0x00051d25) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb9,	// (0x00051d25) fshwr2_func_candi_cell_pane_g

0xc2e6,	// (0x0004e152) bg_popup_window_pane_cp01

0x9251,	// (0x0004b0bd) bg_popup_window_pane_g1_cp01

0xedd7,	// (0x00050c43) bg_popup_window_pane_cp22_ParamLimits

0xedd7,	// (0x00050c43) bg_popup_window_pane_cp22

0xede5,	// (0x00050c51) listscroll_tmo_link_pane_ParamLimits

0xede5,	// (0x00050c51) listscroll_tmo_link_pane

0xee25,	// (0x00050c91) popup_tmo_note_window_g1_ParamLimits

0xee25,	// (0x00050c91) popup_tmo_note_window_g1

0xee32,	// (0x00050c9e) tmo_note_info_pane_ParamLimits

0xee32,	// (0x00050c9e) tmo_note_info_pane

0xee4c,	// (0x00050cb8) list_tmo_note_info_pane_g1_ParamLimits

0xee4c,	// (0x00050cb8) list_tmo_note_info_pane_g1

0xee63,	// (0x00050ccf) list_tmo_note_info_pane_g2_ParamLimits

0xee63,	// (0x00050ccf) list_tmo_note_info_pane_g2

0x0001,

0xfebe,	// (0x00051d2a) list_tmo_note_info_pane_g_ParamLimits

0xfebe,	// (0x00051d2a) list_tmo_note_info_pane_g

0xee7f,	// (0x00050ceb) list_tmo_note_info_text_pane_ParamLimits

0xee7f,	// (0x00050ceb) list_tmo_note_info_text_pane

0xef00,	// (0x00050d6c) list_tmo_link_pane

0xef0d,	// (0x00050d79) scroll_pane_cp20

0xef1a,	// (0x00050d86) list_single_tmo_link_pane_ParamLimits

0xef1a,	// (0x00050d86) list_single_tmo_link_pane

0xef2a,	// (0x00050d96) list_single_tmo_link_pane_t1

0xef38,	// (0x00050da4) list_tmo_note_info_text_pane_t1_ParamLimits

0xef38,	// (0x00050da4) list_tmo_note_info_text_pane_t1

0x6dd2,	// (0x00048c3e) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6dd2,	// (0x00048c3e) aid_size_touch_scroll_bar_cp01

0x5a20,	// (0x0004788c) aid_size_touch_slider_marker

0x6620,	// (0x0004848c) popup_settings_window_ParamLimits

0x6620,	// (0x0004848c) popup_settings_window

0x5bab,	// (0x00047a17) popup_candi_list_indi_window

0x989d,	// (0x0004b709) aid_touch_navi_pane_ParamLimits

0x88e9,	// (0x0004a755) rs_clock_indi_pane

0x88f2,	// (0x0004a75e) sctrl_sk_bottom_pane_ParamLimits

0x8903,	// (0x0004a76f) sctrl_sk_top_pane_ParamLimits

0x89ea,	// (0x0004a856) popup_fep_tooltip_window

0xe8f3,	// (0x0005075f) aid_size_cell_widget_grid_ParamLimits

0xe960,	// (0x000507cc) cell_ai5_widget_pane_g1_ParamLimits

0xe960,	// (0x000507cc) cell_ai5_widget_pane_g1

0xe9b4,	// (0x00050820) cell_ai5_widget_pane_g6_ParamLimits

0xe9c0,	// (0x0005082c) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3c,	// (0x00051ca8) cell_ai5_widget_pane_g_ParamLimits

0xfe3c,	// (0x00051ca8) cell_ai5_widget_pane_g

0xeaf2,	// (0x0005095e) cell_ai5_widget_pane_t10_ParamLimits

0xeaf2,	// (0x0005095e) cell_ai5_widget_pane_t10

0xeb10,	// (0x0005097c) grid_ai5_widget_pane_ParamLimits

0xeba8,	// (0x00050a14) cell_contacts_ai5_widget_pane_ParamLimits

0xeba8,	// (0x00050a14) cell_contacts_ai5_widget_pane

0xed82,	// (0x00050bee) popup_discreet_window_t3_ParamLimits

0xed82,	// (0x00050bee) popup_discreet_window_t3

0x9171,	// (0x0004afdd) popup_fshwr2_char_preview_window_ParamLimits

0x9171,	// (0x0004afdd) popup_fshwr2_char_preview_window

0xee9d,	// (0x00050d09) tmo_note_info_pane_t1

0xeeb2,	// (0x00050d1e) tmo_note_info_pane_t2

0xeec7,	// (0x00050d33) tmo_note_info_pane_t3

0xeedc,	// (0x00050d48) tmo_note_info_pane_t4

0xeeee,	// (0x00050d5a) tmo_note_info_pane_t5

0x0004,

0xfec3,	// (0x00051d2f) tmo_note_info_pane_t

0xef00,	// (0x00050d6c) list_tmo_link_pane_ParamLimits

0xef0d,	// (0x00050d79) scroll_pane_cp20_ParamLimits

0x099b,	// (0x00042807) bg_popup_fep_char_preview_window_cp01

0xef51,	// (0x00050dbd) popup_fshwr2_char_preview_window_t1

0xef5f,	// (0x00050dcb) popup_candi_list_indi_window_g1

0xef68,	// (0x00050dd4) bg_cell_contacts_ai5_widget_pane

0xef74,	// (0x00050de0) cell_contacts_ai5_widget_pane_g1

0xc9ed,	// (0x0004e859) cell_contacts_ai5_widget_pane_g2

0xef89,	// (0x00050df5) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfece,	// (0x00051d3a) cell_contacts_ai5_widget_pane_g

0xef95,	// (0x00050e01) cell_contacts_ai5_widget_pane_t1

0x0dbd,	// (0x00042c29) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf00c,	// (0x00050e78) settings_container_pane

0x94f0,	// (0x0004b35c) listscroll_set_pane_copy1

0xb9dd,	// (0x0004d849) scroll_pane_cp121_copy1

0xa17b,	// (0x0004bfe7) set_content_pane_copy1

0xf018,	// (0x00050e84) aid_height_set_list_copy1_ParamLimits

0xf018,	// (0x00050e84) aid_height_set_list_copy1

0xb0f7,	// (0x0004cf63) aid_size_parent_copy1_ParamLimits

0xb0f7,	// (0x0004cf63) aid_size_parent_copy1

0xf024,	// (0x00050e90) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf024,	// (0x00050e90) button_value_adjust_pane_cp6_copy1

0x983b,	// (0x0004b6a7) list_highlight_pane_cp2_copy1_ParamLimits

0x983b,	// (0x0004b6a7) list_highlight_pane_cp2_copy1

0xf038,	// (0x00050ea4) list_set_pane_copy1_ParamLimits

0xf038,	// (0x00050ea4) list_set_pane_copy1

0xefa7,	// (0x00050e13) main_pane_set_t1_copy1_ParamLimits

0xefa7,	// (0x00050e13) main_pane_set_t1_copy1

0xefe1,	// (0x00050e4d) main_pane_set_t2_copy1_ParamLimits

0xefe1,	// (0x00050e4d) main_pane_set_t2_copy1

0xf0e5,	// (0x00050f51) main_pane_set_t3_copy1

0xf0f3,	// (0x00050f5f) main_pane_set_t4_copy1

0xf000,	// (0x00050e6c) set_content_pane_g1_copy1_ParamLimits

0xf000,	// (0x00050e6c) set_content_pane_g1_copy1

0xf101,	// (0x00050f6d) setting_code_pane_copy1

0xf109,	// (0x00050f75) setting_slider_graphic_pane_copy1

0xf109,	// (0x00050f75) setting_slider_pane_copy1

0xf109,	// (0x00050f75) setting_text_pane_copy1

0xf109,	// (0x00050f75) setting_volume_pane_copy1

0xf101,	// (0x00050f6d) settings_code_pane_cp2_copy1

0xf111,	// (0x00050f7d) settings_code_pane_cp_copy1_ParamLimits

0xf111,	// (0x00050f7d) settings_code_pane_cp_copy1

0x925a,	// (0x0004b0c6) volume_set_pane_copy1

0xf125,	// (0x00050f91) volume_set_pane_g10_copy1

0xf12d,	// (0x00050f99) volume_set_pane_g1_copy1

0xf135,	// (0x00050fa1) volume_set_pane_g2_copy1

0xf13d,	// (0x00050fa9) volume_set_pane_g3_copy1

0xf145,	// (0x00050fb1) volume_set_pane_g4_copy1

0xf14d,	// (0x00050fb9) volume_set_pane_g5_copy1

0xf155,	// (0x00050fc1) volume_set_pane_g6_copy1

0xf15d,	// (0x00050fc9) volume_set_pane_g7_copy1

0xf165,	// (0x00050fd1) volume_set_pane_g8_copy1

0xf16d,	// (0x00050fd9) volume_set_pane_g9_copy1

0x0a0b,	// (0x00042877) bg_set_opt_pane_cp_copy1_ParamLimits

0x0a0b,	// (0x00042877) bg_set_opt_pane_cp_copy1

0x9262,	// (0x0004b0ce) setting_slider_pane_t1_copy1_ParamLimits

0x9262,	// (0x0004b0ce) setting_slider_pane_t1_copy1

0x9280,	// (0x0004b0ec) setting_slider_pane_t2_copy1_ParamLimits

0x9280,	// (0x0004b0ec) setting_slider_pane_t2_copy1

0x929a,	// (0x0004b106) setting_slider_pane_t3_copy1_ParamLimits

0x929a,	// (0x0004b106) setting_slider_pane_t3_copy1

0x92b2,	// (0x0004b11e) slider_set_pane_copy1_ParamLimits

0x92b2,	// (0x0004b11e) slider_set_pane_copy1

0x0e15,	// (0x00042c81) set_opt_bg_pane_g1_copy2

0x0e1d,	// (0x00042c89) set_opt_bg_pane_g2_copy2

0xf175,	// (0x00050fe1) set_opt_bg_pane_g3_copy2

0x0e2d,	// (0x00042c99) set_opt_bg_pane_g4_copy2

0x0e35,	// (0x00042ca1) set_opt_bg_pane_g5_copy2

0x0e3d,	// (0x00042ca9) set_opt_bg_pane_g6_copy2

0xf17f,	// (0x00050feb) set_opt_bg_pane_g7_copy2

0xf187,	// (0x00050ff3) set_opt_bg_pane_g8_copy2

0xf191,	// (0x00050ffd) set_opt_bg_pane_g9_copy2

0x92c8,	// (0x0004b134) aid_size_touch_slider_mark_copy1_ParamLimits

0x92c8,	// (0x0004b134) aid_size_touch_slider_mark_copy1

0xf19b,	// (0x00051007) slider_set_pane_g1_copy1

0x92dc,	// (0x0004b148) slider_set_pane_g2_copy1

0x818d,	// (0x00049ff9) slider_set_pane_g3_copy1_ParamLimits

0x818d,	// (0x00049ff9) slider_set_pane_g3_copy1

0x81a1,	// (0x0004a00d) slider_set_pane_g4_copy1_ParamLimits

0x81a1,	// (0x0004a00d) slider_set_pane_g4_copy1

0x81b9,	// (0x0004a025) slider_set_pane_g5_copy1_ParamLimits

0x81b9,	// (0x0004a025) slider_set_pane_g5_copy1

0x818d,	// (0x00049ff9) slider_set_pane_g6_copy1_ParamLimits

0x818d,	// (0x00049ff9) slider_set_pane_g6_copy1

0x92e4,	// (0x0004b150) slider_set_pane_g7_copy1_ParamLimits

0x92e4,	// (0x0004b150) slider_set_pane_g7_copy1

0x09af,	// (0x0004281b) bg_set_opt_pane_cp2_copy1

0xf1a4,	// (0x00051010) setting_slider_graphic_pane_g1_copy1

0xf1ad,	// (0x00051019) setting_slider_graphic_pane_t1_copy1

0xf1bd,	// (0x00051029) setting_slider_graphic_pane_t2_copy1

0xf1cd,	// (0x00051039) slider_set_pane_cp_copy1

0xf1dd,	// (0x00051049) input_focus_pane_cp1_copy1

0xf1e6,	// (0x00051052) list_set_text_pane_copy1

0xf1ee,	// (0x0005105a) setting_text_pane_g1_copy1

0x6319,	// (0x00048185) set_text_pane_t1_copy1

0xf1dd,	// (0x00051049) input_focus_pane_cp2_copy1

0xf1ee,	// (0x0005105a) setting_code_pane_g1_copy1

0xf1f7,	// (0x00051063) setting_code_pane_t1_copy1

0xf205,	// (0x00051071) list_set_graphic_pane_copy1

0x09af,	// (0x0004281b) bg_set_opt_pane_cp4_copy1

0x4a9f,	// (0x0004690b) list_set_graphic_pane_g1_copy1_ParamLimits

0x4a9f,	// (0x0004690b) list_set_graphic_pane_g1_copy1

0xf219,	// (0x00051085) list_set_graphic_pane_g2_copy1

0x4ab7,	// (0x00046923) list_set_graphic_pane_t1_copy1_ParamLimits

0x4ab7,	// (0x00046923) list_set_graphic_pane_t1_copy1

0xc2e6,	// (0x0004e152) rs_clock_indi_pane_g1

0xf221,	// (0x0005108d) rs_clock_indi_pane_t1

0xf22f,	// (0x0005109b) rs_indi_pane

0xf237,	// (0x000510a3) rs_indi_pane_g1

0xf240,	// (0x000510ac) rs_indi_pane_g2

0xef5f,	// (0x00050dcb) rs_indi_pane_g3

0x0002,

0xfed5,	// (0x00051d41) rs_indi_pane_g

0x94f0,	// (0x0004b35c) bg_popup_preview_window_pane_cp03

0xf249,	// (0x000510b5) popup_fep_tooltip_window_t1

0xcf75,	// (0x0004ede1) popup_note2_window_g2_ParamLimits

0xcf75,	// (0x0004ede1) popup_note2_window_g2

0x0001,

0xfc75,	// (0x00051ae1) popup_note2_window_g_ParamLimits

0xfc75,	// (0x00051ae1) popup_note2_window_g

0xd462,	// (0x0004f2ce) bg_popup_sub_pane_cp11_ParamLimits

0xd46f,	// (0x0004f2db) cell_ai3_links_pane_g1_ParamLimits

0xd486,	// (0x0004f2f2) cell_ai3_links_pane_t1

0x6319,	// (0x00048185) set_text_pane_t1_copy1_ParamLimits

0x7661,	// (0x000494cd) cell_graphic_popup_pane_cp2_ParamLimits

0x7661,	// (0x000494cd) cell_graphic_popup_pane_cp2

0xf257,	// (0x000510c3) cell_graphic_popup_pane_g1_cp2

0x0c8b,	// (0x00042af7) cell_graphic_popup_pane_g2_cp2

0xf25f,	// (0x000510cb) cell_graphic_popup_pane_g3_cp2

0xf267,	// (0x000510d3) cell_graphic_popup_pane_t2_cp2

0x0c9c,	// (0x00042b08) grid_highlight_pane_cp3_cp2

0x106d,	// (0x00042ed9) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x0dbd,	// (0x00042c29) main_tmo_pane_ParamLimits

0xd7b8,	// (0x0004f624) popup_tmo_big_image_note_window

0xe94f,	// (0x000507bb) cell_ai5_widget_list_pane

0xe957,	// (0x000507c3) cell_ai5_widget_lrg_icon_pane

0xee9d,	// (0x00050d09) tmo_note_info_pane_t1_ParamLimits

0xeeb2,	// (0x00050d1e) tmo_note_info_pane_t2_ParamLimits

0xeec7,	// (0x00050d33) tmo_note_info_pane_t3_ParamLimits

0xeedc,	// (0x00050d48) tmo_note_info_pane_t4_ParamLimits

0xeeee,	// (0x00050d5a) tmo_note_info_pane_t5_ParamLimits

0xfec3,	// (0x00051d2f) tmo_note_info_pane_t_ParamLimits

0xf00c,	// (0x00050e78) settings_container_pane_ParamLimits

0xf1d5,	// (0x00051041) indicator_popup_pane_cp5

0xf1d5,	// (0x00051041) indicator_popup_pane_cp6

0xf205,	// (0x00051071) list_set_graphic_pane_copy1_ParamLimits

0x099b,	// (0x00042807) bg_popup_window_pane_cp23

0xf275,	// (0x000510e1) popup_tmo_big_image_note_window_g1

0xf27e,	// (0x000510ea) popup_tmo_big_image_note_window_t1

0xf28e,	// (0x000510fa) popup_tmo_big_image_note_window_t2

0xf29e,	// (0x0005110a) popup_tmo_big_image_note_window_t3

0x0002,

0xfedc,	// (0x00051d48) popup_tmo_big_image_note_window_t

0xc2e6,	// (0x0004e152) cell_ai5_widget_lrg_icon_pane_g1

0xf2ae,	// (0x0005111a) cell_ai5_widget_lrg_icon_pane_t1

0xf2bc,	// (0x00051128) cell_ai5_widget_list_row_pane_ParamLimits

0xf2bc,	// (0x00051128) cell_ai5_widget_list_row_pane

0xf2d3,	// (0x0005113f) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2d3,	// (0x0005113f) cell_ai5_widget_list_row_pane_g1

0xf2e0,	// (0x0005114c) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2e0,	// (0x0005114c) cell_ai5_widget_list_row_pane_t1

0xf30b,	// (0x00051177) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf30b,	// (0x00051177) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee3,	// (0x00051d4f) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee3,	// (0x00051d4f) cell_ai5_widget_list_row_pane_t

0x099b,	// (0x00042807) main_fep_vtchi_ss_pane

0xf34f,	// (0x000511bb) popup_fep_char_pre_window

0xf357,	// (0x000511c3) popup_fep_ituss_window

0xf378,	// (0x000511e4) popup_fep_vkbss_window

0xf3a2,	// (0x0005120e) grid_vkbss_keypad_pane_ParamLimits

0xf3a2,	// (0x0005120e) grid_vkbss_keypad_pane

0xf3b2,	// (0x0005121e) ituss_keypad_pane

0x9306,	// (0x0004b172) aid_vkbss_key_offset_ParamLimits

0x9306,	// (0x0004b172) aid_vkbss_key_offset

0x9312,	// (0x0004b17e) cell_vkbss_key_pane_ParamLimits

0x9312,	// (0x0004b17e) cell_vkbss_key_pane

0x9bb4,	// (0x0004ba20) bg_cell_vkbss_key_g1_ParamLimits

0x9bb4,	// (0x0004ba20) bg_cell_vkbss_key_g1

0xf3c1,	// (0x0005122d) cell_vkbss_key_3p_pane_ParamLimits

0xf3c1,	// (0x0005122d) cell_vkbss_key_3p_pane

0xf3d5,	// (0x00051241) cell_vkbss_key_g1_ParamLimits

0xf3d5,	// (0x00051241) cell_vkbss_key_g1

0xf3e9,	// (0x00051255) cell_vkbss_key_t1_ParamLimits

0xf3e9,	// (0x00051255) cell_vkbss_key_t1

0x9328,	// (0x0004b194) cell_ituss_key_pane_ParamLimits

0x9328,	// (0x0004b194) cell_ituss_key_pane

0xf414,	// (0x00051280) bg_cell_ituss_key_g1_ParamLimits

0xf414,	// (0x00051280) bg_cell_ituss_key_g1

0xf420,	// (0x0005128c) cell_ituss_key_pane_g1_ParamLimits

0xf420,	// (0x0005128c) cell_ituss_key_pane_g1

0x9339,	// (0x0004b1a5) cell_ituss_key_pane_g2_ParamLimits

0x9339,	// (0x0004b1a5) cell_ituss_key_pane_g2

0x0002,

0xfeea,	// (0x00051d56) cell_ituss_key_pane_g_ParamLimits

0xfeea,	// (0x00051d56) cell_ituss_key_pane_g

0x9365,	// (0x0004b1d1) cell_ituss_key_t1_ParamLimits

0x9365,	// (0x0004b1d1) cell_ituss_key_t1

0x939f,	// (0x0004b20b) cell_ituss_key_t2_ParamLimits

0x939f,	// (0x0004b20b) cell_ituss_key_t2

0x93d0,	// (0x0004b23c) cell_ituss_key_t3_ParamLimits

0x93d0,	// (0x0004b23c) cell_ituss_key_t3

0x939f,	// (0x0004b20b) cell_ituss_key_t4_ParamLimits

0x939f,	// (0x0004b20b) cell_ituss_key_t4

0x0004,

0xfef1,	// (0x00051d5d) cell_ituss_key_t_ParamLimits

0xfef1,	// (0x00051d5d) cell_ituss_key_t

0xf446,	// (0x000512b2) cell_vkbss_key_3p_pane_g1

0xf44e,	// (0x000512ba) cell_vkbss_key_3p_pane_g2

0xf456,	// (0x000512c2) cell_vkbss_key_3p_pane_g3

0x0002,

0xfefc,	// (0x00051d68) cell_vkbss_key_3p_pane_g

0x099b,	// (0x00042807) bg_popup_fep_char_preview_window_cp02

0x9413,	// (0x0004b27f) popup_fep_char_pre_window_t1

0xe8e9,	// (0x00050755) main_ai5_sk_pane

0xef68,	// (0x00050dd4) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef74,	// (0x00050de0) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc9ed,	// (0x0004e859) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef89,	// (0x00050df5) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfece,	// (0x00051d3a) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef95,	// (0x00050e01) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x0dbd,	// (0x00042c29) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf45e,	// (0x000512ca) main_ai5_sk_pane_g1

0xa203,	// (0x0004c06f) popup_query_code_window_g1

0xf36d,	// (0x000511d9) popup_fep_vkb_icf_pane

0xf38c,	// (0x000511f8) popup_fep_vtchi_icf_pane

0xf467,	// (0x000512d3) bg_icf_pane

0xf473,	// (0x000512df) list_vkb_icf_pane

0xf482,	// (0x000512ee) bg_icf_pane_cp01

0xf495,	// (0x00051301) vtchi_icf_list_pane

0xf4a5,	// (0x00051311) list_vkb_icf_pane_t1_ParamLimits

0xf4a5,	// (0x00051311) list_vkb_icf_pane_t1

0xf4bc,	// (0x00051328) vtchi_icf_list_pane_t1_ParamLimits

0xf4bc,	// (0x00051328) vtchi_icf_list_pane_t1

0xf357,	// (0x000511c3) popup_fep_ituss_window_ParamLimits

0xf38c,	// (0x000511f8) popup_fep_vtchi_icf_pane_ParamLimits

0xf3b2,	// (0x0005121e) ituss_keypad_pane_ParamLimits

0x92fa,	// (0x0004b166) ituss_sks_pane

0xf467,	// (0x000512d3) bg_icf_pane_ParamLimits

0xf333,	// (0x0005119f) icf_edit_indi_pane_ParamLimits

0xf333,	// (0x0005119f) icf_edit_indi_pane

0xf473,	// (0x000512df) list_vkb_icf_pane_ParamLimits

0xf482,	// (0x000512ee) bg_icf_pane_cp01_ParamLimits

0xf342,	// (0x000511ae) icf_edit_indi_pane_cp01_ParamLimits

0xf342,	// (0x000511ae) icf_edit_indi_pane_cp01

0xf49d,	// (0x00051309) vtchi_query_pane

0xc556,	// (0x0004e3c2) icf_edit_indi_pane_g1_ParamLimits

0xc556,	// (0x0004e3c2) icf_edit_indi_pane_g1

0xf531,	// (0x0005139d) icf_edit_indi_pane_g2_ParamLimits

0xf531,	// (0x0005139d) icf_edit_indi_pane_g2

0x0001,

0xff14,	// (0x00051d80) icf_edit_indi_pane_g_ParamLimits

0xff14,	// (0x00051d80) icf_edit_indi_pane_g

0xf540,	// (0x000513ac) icf_edit_indi_pane_t1

0xf4da,	// (0x00051346) bg_input_focus_pane_cp042

0x0cff,	// (0x00042b6b) vtchi_button_pane

0xf4e3,	// (0x0005134f) vtchi_query_pane_t1

0xf4f1,	// (0x0005135d) vtchi_query_pane_t2

0xf4ff,	// (0x0005136b) vtchi_query_pane_t3

0x0002,

0xff03,	// (0x00051d6f) vtchi_query_pane_t

0x099b,	// (0x00042807) bg_button_pane_cp13

0xf50d,	// (0x00051379) vtchi_button_pane_g1

0x9422,	// (0x0004b28e) ituss_sks_pane_g1

0x942d,	// (0x0004b299) ituss_sks_pane_g2

0x0001,

0xff0a,	// (0x00051d76) ituss_sks_pane_g

0xf515,	// (0x00051381) ituss_sks_pane_t1

0xf523,	// (0x0005138f) ituss_sks_pane_t2

0x0001,

0xff0f,	// (0x00051d7b) ituss_sks_pane_t

0xbd63,	// (0x0004dbcf) indicator_nsta_pane_cp_g1

0xbd6b,	// (0x0004dbd7) indicator_nsta_pane_cp_g2

0xbd73,	// (0x0004dbdf) indicator_nsta_pane_cp_g3

0xbd63,	// (0x0004dbcf) indicator_nsta_pane_cp_g4

0xbd6b,	// (0x0004dbd7) indicator_nsta_pane_cp_g5

0xbd73,	// (0x0004dbdf) indicator_nsta_pane_cp_g6

0x0005,

0xfabf,	// (0x0005192b) indicator_nsta_pane_cp_g

0xe4a9,	// (0x00050315) cell_graphic2_pane_t2_ParamLimits

0xe4a9,	// (0x00050315) cell_graphic2_pane_t2

0x0001,

0xfdc5,	// (0x00051c31) cell_graphic2_pane_t_ParamLimits

0xfdc5,	// (0x00051c31) cell_graphic2_pane_t

0xe4d6,	// (0x00050342) cell_graphic2_control_pane_t1

0x727a,	// (0x000490e6) signal_pane_g3_ParamLimits

0x727a,	// (0x000490e6) signal_pane_g3

0x728c,	// (0x000490f8) signal_pane_g4_ParamLimits

0x728c,	// (0x000490f8) signal_pane_g4

0xf31d,	// (0x00051189) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf31d,	// (0x00051189) cell_ai5_widget_list_row_pane_t3

0xf434,	// (0x000512a0) cell_ituss_key_pane_t1_ParamLimits

0xf434,	// (0x000512a0) cell_ituss_key_pane_t1

0x9e4a,	// (0x0004bcb6) form_field_data_wide_pane_vc_t2_ParamLimits

0x9e4a,	// (0x0004bcb6) form_field_data_wide_pane_vc_t2

0x9e5e,	// (0x0004bcca) form_field_data_wide_pane_vc_t3_ParamLimits

0x9e5e,	// (0x0004bcca) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x00051670) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x00051670) form_field_data_wide_pane_vc_t

0xba1f,	// (0x0004d88b) form_field_slider_wide_pane_vc_t3_ParamLimits

0xba1f,	// (0x0004d88b) form_field_slider_wide_pane_vc_t3

0xbafd,	// (0x0004d969) form_field_popup_wide_pane_vc_t2_ParamLimits

0xbafd,	// (0x0004d969) form_field_popup_wide_pane_vc_t2

0xbb14,	// (0x0004d980) form_field_popup_wide_pane_vc_t3_ParamLimits

0xbb14,	// (0x0004d980) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaae,	// (0x0005191a) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaae,	// (0x0005191a) form_field_popup_wide_pane_vc_t

0x9104,	// (0x0004af70) aid_fshwr2_btn_pane_ParamLimits

0x9110,	// (0x0004af7c) aid_fshwr2_syb_pane_ParamLimits

0x9121,	// (0x0004af8d) aid_fshwr2_txt_pane_ParamLimits

0x0dbd,	// (0x00042c29) fshwr2_bg_pane_ParamLimits

0x912d,	// (0x0004af99) fshwr2_func_candi_pane_ParamLimits

0x9145,	// (0x0004afb1) fshwr2_hwr_syb_pane_ParamLimits

0x915c,	// (0x0004afc8) fshwr2_icf_pane_ParamLimits

0x8415,	// (0x0004a281) list_double_graphic_pane_vc_g4_ParamLimits

0x8415,	// (0x0004a281) list_double_graphic_pane_vc_g4

0x9359,	// (0x0004b1c5) cell_ituss_key_pane_g3_ParamLimits

0x9359,	// (0x0004b1c5) cell_ituss_key_pane_g3

0x9401,	// (0x0004b26d) cell_ituss_key_t5_ParamLimits

0x9401,	// (0x0004b26d) cell_ituss_key_t5

0xf378,	// (0x000511e4) popup_fep_vkbss_window_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Large

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

#include "aknlayoutscalable_abrw_php_av_qhd_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0000aab8 };

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
0x67e6,	// (0x0001129e) Screen

0x67fa,	// (0x000112b2) application_window_ParamLimits

0x67fa,	// (0x000112b2) application_window

0x6814,	// (0x000112cc) screen_g1

0x4c28,	// (0x0000f6e0) area_bottom_pane_ParamLimits

0x4c28,	// (0x0000f6e0) area_bottom_pane

0x4ce8,	// (0x0000f7a0) area_top_pane_ParamLimits

0x4ce8,	// (0x0000f7a0) area_top_pane

0x4d86,	// (0x0000f83e) main_pane_ParamLimits

0x4d86,	// (0x0000f83e) main_pane

0x681e,	// (0x000112d6) misc_graphics

0x8eef,	// (0x000139a7) battery_pane_ParamLimits

0x8eef,	// (0x000139a7) battery_pane

0x9ca4,	// (0x0001475c) bg_status_flat_pane_g8

0x9cac,	// (0x00014764) bg_status_flat_pane_g9

0x8fb1,	// (0x00013a69) context_pane_ParamLimits

0x8fb1,	// (0x00013a69) context_pane

0x90c7,	// (0x00013b7f) navi_pane_ParamLimits

0x90c7,	// (0x00013b7f) navi_pane

0x9144,	// (0x00013bfc) signal_pane_ParamLimits

0x9144,	// (0x00013bfc) signal_pane

0x0008,

0xf885,	// (0x0001a33d) bg_status_flat_pane_g

0x91b1,	// (0x00013c69) status_pane_g1_ParamLimits

0x91b1,	// (0x00013c69) status_pane_g1

0x91c5,	// (0x00013c7d) status_pane_g2_ParamLimits

0x91c5,	// (0x00013c7d) status_pane_g2

0x91d1,	// (0x00013c89) status_pane_g3_ParamLimits

0x91d1,	// (0x00013c89) status_pane_g3

0x0004,

0xf7b3,	// (0x0001a26b) status_pane_g_ParamLimits

0xf7b3,	// (0x0001a26b) status_pane_g

0x9205,	// (0x00013cbd) title_pane_ParamLimits

0x9205,	// (0x00013cbd) title_pane

0x9242,	// (0x00013cfa) uni_indicator_pane_ParamLimits

0x9242,	// (0x00013cfa) uni_indicator_pane

0x885c,	// (0x00013314) bg_list_pane_ParamLimits

0x885c,	// (0x00013314) bg_list_pane

0x887c,	// (0x00013334) find_pane

0x8884,	// (0x0001333c) listscroll_app_pane_ParamLimits

0x8884,	// (0x0001333c) listscroll_app_pane

0x8890,	// (0x00013348) listscroll_form_pane

0x8898,	// (0x00013350) listscroll_gen_pane_ParamLimits

0x8898,	// (0x00013350) listscroll_gen_pane

0x8890,	// (0x00013348) listscroll_set_pane

0x7a50,	// (0x00012508) main_idle_act_pane

0x8534,	// (0x00012fec) main_idle_trad_pane

0x8534,	// (0x00012fec) main_list_empty_pane

0x88be,	// (0x00013376) main_midp_pane

0x88ca,	// (0x00013382) main_pane_g1_ParamLimits

0x88ca,	// (0x00013382) main_pane_g1

0x88d8,	// (0x00013390) popup_ai_message_window_ParamLimits

0x88d8,	// (0x00013390) popup_ai_message_window

0x8982,	// (0x0001343a) popup_fep_china_uni_window_ParamLimits

0x8982,	// (0x0001343a) popup_fep_china_uni_window

0x89de,	// (0x00013496) popup_fep_japan_candidate_window_ParamLimits

0x89de,	// (0x00013496) popup_fep_japan_candidate_window

0x89fe,	// (0x000134b6) popup_fep_japan_predictive_window_ParamLimits

0x89fe,	// (0x000134b6) popup_fep_japan_predictive_window

0x8a2e,	// (0x000134e6) popup_find_window

0x8a3b,	// (0x000134f3) popup_grid_graphic_window_ParamLimits

0x8a3b,	// (0x000134f3) popup_grid_graphic_window

0x8a63,	// (0x0001351b) popup_large_graphic_colour_window

0x8a89,	// (0x00013541) popup_menu_window_ParamLimits

0x8a89,	// (0x00013541) popup_menu_window

0x8c41,	// (0x000136f9) popup_note_image_window

0x8c2d,	// (0x000136e5) popup_note_wait_window_ParamLimits

0x8c2d,	// (0x000136e5) popup_note_wait_window

0x8c2d,	// (0x000136e5) popup_note_window_ParamLimits

0x8c2d,	// (0x000136e5) popup_note_window

0x8c97,	// (0x0001374f) popup_query_code_window_ParamLimits

0x8c97,	// (0x0001374f) popup_query_code_window

0x8cab,	// (0x00013763) popup_query_data_code_window_ParamLimits

0x8cab,	// (0x00013763) popup_query_data_code_window

0x8cc8,	// (0x00013780) popup_query_data_window_ParamLimits

0x8cc8,	// (0x00013780) popup_query_data_window

0x8ce4,	// (0x0001379c) popup_query_sat_info_window_ParamLimits

0x8ce4,	// (0x0001379c) popup_query_sat_info_window

0x8d1d,	// (0x000137d5) popup_snote_single_graphic_window_ParamLimits

0x8d1d,	// (0x000137d5) popup_snote_single_graphic_window

0x8d1d,	// (0x000137d5) popup_snote_single_text_window_ParamLimits

0x8d1d,	// (0x000137d5) popup_snote_single_text_window

0x8d32,	// (0x000137ea) popup_sub_window_general

0x8e62,	// (0x0001391a) popup_window_general_ParamLimits

0x8e62,	// (0x0001391a) popup_window_general

0x8e77,	// (0x0001392f) power_save_pane

0x54e5,	// (0x0000ff9d) control_pane_g1_ParamLimits

0x54e5,	// (0x0000ff9d) control_pane_g1

0x550c,	// (0x0000ffc4) control_pane_g2_ParamLimits

0x550c,	// (0x0000ffc4) control_pane_g2

0x87fd,	// (0x000132b5) control_pane_g3_ParamLimits

0x87fd,	// (0x000132b5) control_pane_g3

0x0007,

0xf79b,	// (0x0001a253) control_pane_g_ParamLimits

0xf79b,	// (0x0001a253) control_pane_g

0x5552,	// (0x0001000a) control_pane_t1_ParamLimits

0x5552,	// (0x0001000a) control_pane_t1

0x559e,	// (0x00010056) control_pane_t2_ParamLimits

0x559e,	// (0x00010056) control_pane_t2

0x0002,

0xf7ac,	// (0x0001a264) control_pane_t_ParamLimits

0xf7ac,	// (0x0001a264) control_pane_t

0x871e,	// (0x000131d6) navi_navi_volume_pane_cp1

0x8727,	// (0x000131df) status_small_icon_pane

0x872f,	// (0x000131e7) status_small_pane_g1_ParamLimits

0x872f,	// (0x000131e7) status_small_pane_g1

0x8763,	// (0x0001321b) status_small_pane_g2_ParamLimits

0x8763,	// (0x0001321b) status_small_pane_g2

0x876f,	// (0x00013227) status_small_pane_g3_ParamLimits

0x876f,	// (0x00013227) status_small_pane_g3

0x877b,	// (0x00013233) status_small_pane_g4_ParamLimits

0x877b,	// (0x00013233) status_small_pane_g4

0x8787,	// (0x0001323f) status_small_pane_g5_ParamLimits

0x8787,	// (0x0001323f) status_small_pane_g5

0x8796,	// (0x0001324e) status_small_pane_g6_ParamLimits

0x8796,	// (0x0001324e) status_small_pane_g6

0x0007,

0xf78a,	// (0x0001a242) status_small_pane_g_ParamLimits

0xf78a,	// (0x0001a242) status_small_pane_g

0x87c6,	// (0x0001327e) status_small_pane_t1

0x87e9,	// (0x000132a1) status_small_wait_pane_ParamLimits

0x87e9,	// (0x000132a1) status_small_wait_pane

0x7f48,	// (0x00012a00) aid_levels_signal_ParamLimits

0x7f48,	// (0x00012a00) aid_levels_signal

0x7f5a,	// (0x00012a12) signal_pane_g1_ParamLimits

0x7f5a,	// (0x00012a12) signal_pane_g1

0x7f6f,	// (0x00012a27) signal_pane_g2_ParamLimits

0x7f6f,	// (0x00012a27) signal_pane_g2

0x0001,

0xf71f,	// (0x0001a1d7) signal_pane_g_ParamLimits

0xf71f,	// (0x0001a1d7) signal_pane_g

0x7f84,	// (0x00012a3c) context_pane_g1

0x6828,	// (0x000112e0) title_pane_g1

0x685e,	// (0x00011316) title_pane_t1

0x68c6,	// (0x0001137e) title_pane_t2

0x68ec,	// (0x000113a4) title_pane_t3

0x0002,

0xf573,	// (0x0001a02b) title_pane_t

0x925a,	// (0x00013d12) aid_levels_battery_ParamLimits

0x925a,	// (0x00013d12) aid_levels_battery

0x926e,	// (0x00013d26) battery_pane_g1_ParamLimits

0x926e,	// (0x00013d26) battery_pane_g1

0x9284,	// (0x00013d3c) battery_pane_g2_ParamLimits

0x9284,	// (0x00013d3c) battery_pane_g2

0x0001,

0xf7be,	// (0x0001a276) battery_pane_g_ParamLimits

0xf7be,	// (0x0001a276) battery_pane_g

0xa5e0,	// (0x00015098) uni_indicator_pane_g1

0xa5f5,	// (0x000150ad) uni_indicator_pane_g2

0xa60b,	// (0x000150c3) uni_indicator_pane_g3

0x0005,

0xf92d,	// (0x0001a3e5) uni_indicator_pane_g

0x83a6,	// (0x00012e5e) navi_icon_pane_ParamLimits

0x83a6,	// (0x00012e5e) navi_icon_pane

0x82ef,	// (0x00012da7) navi_midp_pane

0x83c2,	// (0x00012e7a) navi_navi_pane

0x83cc,	// (0x00012e84) navi_text_pane_ParamLimits

0x83cc,	// (0x00012e84) navi_text_pane

0x6814,	// (0x000112cc) status_small_wait_pane_g1

0x6d35,	// (0x000117ed) status_small_wait_pane_g2

0x0001,

0xf928,	// (0x0001a3e0) status_small_wait_pane_g

0xa305,	// (0x00014dbd) navi_navi_icon_text_pane

0xa30d,	// (0x00014dc5) navi_navi_pane_g1_ParamLimits

0xa30d,	// (0x00014dc5) navi_navi_pane_g1

0xa31f,	// (0x00014dd7) navi_navi_pane_g2_ParamLimits

0xa31f,	// (0x00014dd7) navi_navi_pane_g2

0x0001,

0xf8f6,	// (0x0001a3ae) navi_navi_pane_g_ParamLimits

0xf8f6,	// (0x0001a3ae) navi_navi_pane_g

0xa331,	// (0x00014de9) navi_navi_tabs_pane

0xa33a,	// (0x00014df2) navi_navi_text_pane

0xa305,	// (0x00014dbd) navi_navi_volume_pane

0xa2de,	// (0x00014d96) navi_text_pane_t1

0xa2cf,	// (0x00014d87) navi_icon_pane_g1

0xa222,	// (0x00014cda) navi_navi_text_pane_t1

0x592e,	// (0x000103e6) navi_navi_volume_pane_g1

0x5936,	// (0x000103ee) volume_small_pane

0xa188,	// (0x00014c40) navi_navi_icon_text_pane_g1

0xa190,	// (0x00014c48) navi_navi_icon_text_pane_t1

0x83c2,	// (0x00012e7a) navi_tabs_2_long_pane

0x83c2,	// (0x00012e7a) navi_tabs_2_pane

0x83c2,	// (0x00012e7a) navi_tabs_3_long_pane

0x83c2,	// (0x00012e7a) navi_tabs_3_pane

0x83c2,	// (0x00012e7a) navi_tabs_4_pane

0x590e,	// (0x000103c6) tabs_2_active_pane_ParamLimits

0x590e,	// (0x000103c6) tabs_2_active_pane

0x591e,	// (0x000103d6) tabs_2_passive_pane_ParamLimits

0x591e,	// (0x000103d6) tabs_2_passive_pane

0x58dc,	// (0x00010394) tabs_3_active_pane_ParamLimits

0x58dc,	// (0x00010394) tabs_3_active_pane

0x58ec,	// (0x000103a4) tabs_3_passive_pane_ParamLimits

0x58ec,	// (0x000103a4) tabs_3_passive_pane

0x58fd,	// (0x000103b5) tabs_3_passive_pane_cp_ParamLimits

0x58fd,	// (0x000103b5) tabs_3_passive_pane_cp

0x5898,	// (0x00010350) tabs_4_active_pane_ParamLimits

0x5898,	// (0x00010350) tabs_4_active_pane

0x58a9,	// (0x00010361) tabs_4_passive_pane_ParamLimits

0x58a9,	// (0x00010361) tabs_4_passive_pane

0x58ba,	// (0x00010372) tabs_4_passive_pane_cp_ParamLimits

0x58ba,	// (0x00010372) tabs_4_passive_pane_cp

0x58cb,	// (0x00010383) tabs_4_passive_pane_cp2_ParamLimits

0x58cb,	// (0x00010383) tabs_4_passive_pane_cp2

0x5874,	// (0x0001032c) tabs_2_long_active_pane_ParamLimits

0x5874,	// (0x0001032c) tabs_2_long_active_pane

0x5886,	// (0x0001033e) tabs_2_long_passive_pane_ParamLimits

0x5886,	// (0x0001033e) tabs_2_long_passive_pane

0x5835,	// (0x000102ed) tabs_3_long_active_pane_ParamLimits

0x5835,	// (0x000102ed) tabs_3_long_active_pane

0x5848,	// (0x00010300) tabs_3_long_passive_pane_ParamLimits

0x5848,	// (0x00010300) tabs_3_long_passive_pane

0x5861,	// (0x00010319) tabs_3_long_passive_pane_cp_ParamLimits

0x5861,	// (0x00010319) tabs_3_long_passive_pane_cp

0x57db,	// (0x00010293) volume_small_pane_g1

0x57e4,	// (0x0001029c) volume_small_pane_g2

0x57ed,	// (0x000102a5) volume_small_pane_g3

0x57f6,	// (0x000102ae) volume_small_pane_g4

0x57ff,	// (0x000102b7) volume_small_pane_g5

0x5808,	// (0x000102c0) volume_small_pane_g6

0x5811,	// (0x000102c9) volume_small_pane_g7

0x581a,	// (0x000102d2) volume_small_pane_g8

0x5823,	// (0x000102db) volume_small_pane_g9

0x582c,	// (0x000102e4) volume_small_pane_g10

0x0009,

0xf8c2,	// (0x0001a37a) volume_small_pane_g

0x68fe,	// (0x000113b6) bg_active_tab_pane_cp2_ParamLimits

0x68fe,	// (0x000113b6) bg_active_tab_pane_cp2

0x690c,	// (0x000113c4) tabs_3_active_pane_g1

0x6914,	// (0x000113cc) tabs_3_active_pane_t1

0x68fe,	// (0x000113b6) bg_passive_tab_pane_cp2_ParamLimits

0x68fe,	// (0x000113b6) bg_passive_tab_pane_cp2

0x690c,	// (0x000113c4) tabs_3_passive_pane_g1

0x6914,	// (0x000113cc) tabs_3_passive_pane_t1

0x68fe,	// (0x000113b6) bg_active_tab_pane_cp3_ParamLimits

0x68fe,	// (0x000113b6) bg_active_tab_pane_cp3

0x6926,	// (0x000113de) tabs_4_active_pane_g1

0x692e,	// (0x000113e6) tabs_4_active_pane_t1

0x68fe,	// (0x000113b6) bg_passive_tab_pane_cp3_ParamLimits

0x68fe,	// (0x000113b6) bg_passive_tab_pane_cp3

0x6926,	// (0x000113de) tabs_4_1_passive_pane_g1

0x692e,	// (0x000113e6) tabs_4_1_passive_pane_t1

0x88be,	// (0x00013376) list_highlight_pane_cp2

0xa891,	// (0x00015349) list_set_pane_ParamLimits

0xa891,	// (0x00015349) list_set_pane

0xa937,	// (0x000153ef) main_pane_set_t1_ParamLimits

0xa937,	// (0x000153ef) main_pane_set_t1

0xa957,	// (0x0001540f) main_pane_set_t2_ParamLimits

0xa957,	// (0x0001540f) main_pane_set_t2

0xa96b,	// (0x00015423) main_pane_set_t3_ParamLimits

0xa96b,	// (0x00015423) main_pane_set_t3

0xa97d,	// (0x00015435) main_pane_set_t4_ParamLimits

0xa97d,	// (0x00015435) main_pane_set_t4

0x0003,

0xf992,	// (0x0001a44a) main_pane_set_t_ParamLimits

0xf992,	// (0x0001a44a) main_pane_set_t

0xa98f,	// (0x00015447) setting_code_pane

0xa99b,	// (0x00015453) setting_slider_graphic_pane

0xa99b,	// (0x00015453) setting_slider_pane

0xa99b,	// (0x00015453) setting_text_pane

0xa99b,	// (0x00015453) setting_volume_pane

0x4fcb,	// (0x0000fa83) volume_set_pane

0x68fe,	// (0x000113b6) bg_set_opt_pane_cp

0x4fd3,	// (0x0000fa8b) setting_slider_pane_t1

0x4fec,	// (0x0000faa4) setting_slider_pane_t2

0x5006,	// (0x0000fabe) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x0001a032) setting_slider_pane_t

0x501e,	// (0x0000fad6) slider_set_pane

0x681e,	// (0x000112d6) bg_set_opt_pane_cp2

0x6940,	// (0x000113f8) setting_slider_graphic_pane_g1

0x5034,	// (0x0000faec) setting_slider_graphic_pane_t1

0x5044,	// (0x0000fafc) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x0001a039) setting_slider_graphic_pane_t

0x5054,	// (0x0000fb0c) slider_set_pane_cp

0x681e,	// (0x000112d6) input_focus_pane_cp1

0xa850,	// (0x00015308) list_set_text_pane

0x6814,	// (0x000112cc) setting_text_pane_g1

0x681e,	// (0x000112d6) input_focus_pane_cp2

0x6814,	// (0x000112cc) setting_code_pane_g1

0x6949,	// (0x00011401) setting_code_pane_t1

0x6957,	// (0x0001140f) set_text_pane_t1_ParamLimits

0x6957,	// (0x0001140f) set_text_pane_t1

0x781d,	// (0x000122d5) set_opt_bg_pane_g1

0x7825,	// (0x000122dd) set_opt_bg_pane_g2

0xa82a,	// (0x000152e2) set_opt_bg_pane_g3

0x7835,	// (0x000122ed) set_opt_bg_pane_g4

0x783d,	// (0x000122f5) set_opt_bg_pane_g5

0x7845,	// (0x000122fd) set_opt_bg_pane_g6

0xa834,	// (0x000152ec) set_opt_bg_pane_g7

0xa83c,	// (0x000152f4) set_opt_bg_pane_g8

0xa846,	// (0x000152fe) set_opt_bg_pane_g9

0x0008,

0xf97f,	// (0x0001a437) set_opt_bg_pane_g

0xa81d,	// (0x000152d5) slider_set_pane_g1

0x59a3,	// (0x0001045b) slider_set_pane_g2

0x0006,

0xf970,	// (0x0001a428) slider_set_pane_g

0x593f,	// (0x000103f7) volume_set_pane_g1

0x5947,	// (0x000103ff) volume_set_pane_g2

0x594f,	// (0x00010407) volume_set_pane_g3

0x5957,	// (0x0001040f) volume_set_pane_g4

0x595f,	// (0x00010417) volume_set_pane_g5

0x5967,	// (0x0001041f) volume_set_pane_g6

0x596f,	// (0x00010427) volume_set_pane_g7

0x5977,	// (0x0001042f) volume_set_pane_g8

0x597f,	// (0x00010437) volume_set_pane_g9

0x5987,	// (0x0001043f) volume_set_pane_g10

0x0009,

0xf948,	// (0x0001a400) volume_set_pane_g

0x6971,	// (0x00011429) indicator_pane_ParamLimits

0x6971,	// (0x00011429) indicator_pane

0x697d,	// (0x00011435) main_idle_pane_g2_ParamLimits

0x697d,	// (0x00011435) main_idle_pane_g2

0x69a5,	// (0x0001145d) main_pane_idle_g1_ParamLimits

0x69a5,	// (0x0001145d) main_pane_idle_g1

0x69b2,	// (0x0001146a) popup_clock_digital_analogue_window_ParamLimits

0x69b2,	// (0x0001146a) popup_clock_digital_analogue_window

0x69c9,	// (0x00011481) soft_indicator_pane_ParamLimits

0x69c9,	// (0x00011481) soft_indicator_pane

0x69d5,	// (0x0001148d) wallpaper_pane_ParamLimits

0x69d5,	// (0x0001148d) wallpaper_pane

0x6814,	// (0x000112cc) wallpaper_pane_g1

0x69e9,	// (0x000114a1) indicator_pane_g1_ParamLimits

0x69e9,	// (0x000114a1) indicator_pane_g1

0xacf7,	// (0x000157af) navi_navi_icon_text_pane_srt_g1

0x6a04,	// (0x000114bc) soft_indicator_pane_t1

0x6a1e,	// (0x000114d6) aid_ps_area_pane

0x6a2f,	// (0x000114e7) aid_ps_clock_pane

0x6a3d,	// (0x000114f5) aid_ps_indicator_pane

0x6a49,	// (0x00011501) indicator_ps_pane_ParamLimits

0x6a49,	// (0x00011501) indicator_ps_pane

0x6a58,	// (0x00011510) power_save_pane_g1_ParamLimits

0x6a58,	// (0x00011510) power_save_pane_g1

0x6a64,	// (0x0001151c) power_save_pane_g2_ParamLimits

0x6a64,	// (0x0001151c) power_save_pane_g2

0x4bdc,	// (0x0000f694) aid_navinavi_width_pane

0x6a1e,	// (0x000114d6) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x0001a03e) power_save_pane_g_ParamLimits

0xf586,	// (0x0001a03e) power_save_pane_g

0x6a72,	// (0x0001152a) power_save_pane_t1_ParamLimits

0x6a72,	// (0x0001152a) power_save_pane_t1

0x6a2f,	// (0x000114e7) aid_ps_clock_pane_ParamLimits

0x6a3d,	// (0x000114f5) aid_ps_indicator_pane_ParamLimits

0x6a84,	// (0x0001153c) power_save_pane_t4_ParamLimits

0x6a84,	// (0x0001153c) power_save_pane_t4

0x0001,

0xf58b,	// (0x0001a043) power_save_pane_t_ParamLimits

0xf58b,	// (0x0001a043) power_save_pane_t

0x6aae,	// (0x00011566) power_save_t3_ParamLimits

0x6aae,	// (0x00011566) power_save_t3

0x6a99,	// (0x00011551) power_save_t2_ParamLimits

0x6a99,	// (0x00011551) power_save_t2

0x6ac3,	// (0x0001157b) indicator_ps_pane_g1

0x6acc,	// (0x00011584) ai_gene_pane_ParamLimits

0x6acc,	// (0x00011584) ai_gene_pane

0x6ad8,	// (0x00011590) ai_links_pane_ParamLimits

0x6ad8,	// (0x00011590) ai_links_pane

0x6ae4,	// (0x0001159c) indicator_pane_cp1_ParamLimits

0x6ae4,	// (0x0001159c) indicator_pane_cp1

0x6af0,	// (0x000115a8) main_pane_idle_g1_cp_ParamLimits

0x6af0,	// (0x000115a8) main_pane_idle_g1_cp

0x6afc,	// (0x000115b4) popup_ai_links_title_window

0x6b05,	// (0x000115bd) soft_indicator_pane_cp1_ParamLimits

0x6b05,	// (0x000115bd) soft_indicator_pane_cp1

0xa5ce,	// (0x00015086) ai_links_pane_g1

0xa5d7,	// (0x0001508f) grid_ai_links_pane

0xa5b1,	// (0x00015069) ai_gene_pane_1

0xa5bc,	// (0x00015074) ai_gene_pane_2

0xa5c5,	// (0x0001507d) list_highlight_pane_cp4

0xa595,	// (0x0001504d) cell_ai_link_pane_ParamLimits

0xa595,	// (0x0001504d) cell_ai_link_pane

0xa58d,	// (0x00015045) cell_ai_link_pane_g1

0x6d35,	// (0x000117ed) cell_ai_link_pane_g2

0x0001,

0xf923,	// (0x0001a3db) cell_ai_link_pane_g

0x681e,	// (0x000112d6) grid_highlight_cp2

0x681e,	// (0x000112d6) bg_popup_sub_pane_cp1

0x6b1f,	// (0x000115d7) popup_ai_links_title_window_t1

0xa4db,	// (0x00014f93) ai_gene_pane_1_g1_ParamLimits

0xa4db,	// (0x00014f93) ai_gene_pane_1_g1

0xa4e7,	// (0x00014f9f) ai_gene_pane_1_g2_ParamLimits

0xa4e7,	// (0x00014f9f) ai_gene_pane_1_g2

0x0001,

0xf919,	// (0x0001a3d1) ai_gene_pane_1_g_ParamLimits

0xf919,	// (0x0001a3d1) ai_gene_pane_1_g

0xa4f4,	// (0x00014fac) ai_gene_pane_1_t1_ParamLimits

0xa4f4,	// (0x00014fac) ai_gene_pane_1_t1

0xa528,	// (0x00014fe0) grid_ai_soft_ind_pane

0xa4c6,	// (0x00014f7e) ai_gene_pane_2_t1_ParamLimits

0xa4c6,	// (0x00014f7e) ai_gene_pane_2_t1

0x6b2e,	// (0x000115e6) main_pane_empty_t1_ParamLimits

0x6b2e,	// (0x000115e6) main_pane_empty_t1

0x6b46,	// (0x000115fe) main_pane_empty_t2_ParamLimits

0x6b46,	// (0x000115fe) main_pane_empty_t2

0x6b5b,	// (0x00011613) main_pane_empty_t3_ParamLimits

0x6b5b,	// (0x00011613) main_pane_empty_t3

0x6b6d,	// (0x00011625) main_pane_empty_t4_ParamLimits

0x6b6d,	// (0x00011625) main_pane_empty_t4

0x6b7f,	// (0x00011637) main_pane_empty_t5_ParamLimits

0x6b7f,	// (0x00011637) main_pane_empty_t5

0x0004,

0xf590,	// (0x0001a048) main_pane_empty_t_ParamLimits

0xf590,	// (0x0001a048) main_pane_empty_t

0x791a,	// (0x000123d2) bg_popup_window_pane_ParamLimits

0x791a,	// (0x000123d2) bg_popup_window_pane

0xa230,	// (0x00014ce8) find_popup_pane_cp2_ParamLimits

0xa230,	// (0x00014ce8) find_popup_pane_cp2

0xa23c,	// (0x00014cf4) heading_pane_ParamLimits

0xa23c,	// (0x00014cf4) heading_pane

0x681e,	// (0x000112d6) bg_popup_sub_pane

0xa1aa,	// (0x00014c62) bg_popup_window_pane_g1_ParamLimits

0xa1aa,	// (0x00014c62) bg_popup_window_pane_g1

0xa1b6,	// (0x00014c6e) bg_popup_window_pane_g2_ParamLimits

0xa1b6,	// (0x00014c6e) bg_popup_window_pane_g2

0xa1c2,	// (0x00014c7a) bg_popup_window_pane_g3_ParamLimits

0xa1c2,	// (0x00014c7a) bg_popup_window_pane_g3

0xa1ce,	// (0x00014c86) bg_popup_window_pane_g4_ParamLimits

0xa1ce,	// (0x00014c86) bg_popup_window_pane_g4

0xa1da,	// (0x00014c92) bg_popup_window_pane_g5_ParamLimits

0xa1da,	// (0x00014c92) bg_popup_window_pane_g5

0xa1e6,	// (0x00014c9e) bg_popup_window_pane_g6_ParamLimits

0xa1e6,	// (0x00014c9e) bg_popup_window_pane_g6

0xa1f2,	// (0x00014caa) bg_popup_window_pane_g7_ParamLimits

0xa1f2,	// (0x00014caa) bg_popup_window_pane_g7

0xa1fe,	// (0x00014cb6) bg_popup_window_pane_g8_ParamLimits

0xa1fe,	// (0x00014cb6) bg_popup_window_pane_g8

0xa20a,	// (0x00014cc2) bg_popup_window_pane_g9_ParamLimits

0xa20a,	// (0x00014cc2) bg_popup_window_pane_g9

0xa216,	// (0x00014cce) bg_popup_window_pane_g10_ParamLimits

0xa216,	// (0x00014cce) bg_popup_window_pane_g10

0x0009,

0xf8e1,	// (0x0001a399) bg_popup_window_pane_g_ParamLimits

0xf8e1,	// (0x0001a399) bg_popup_window_pane_g

0xa13f,	// (0x00014bf7) bg_popup_heading_pane_ParamLimits

0xa13f,	// (0x00014bf7) bg_popup_heading_pane

0x5a2b,	// (0x000104e3) tabs_4_passive_pane_cp_srt_ParamLimits

0x5a2b,	// (0x000104e3) tabs_4_passive_pane_cp_srt

0x5a3d,	// (0x000104f5) tabs_4_passive_pane_srt_ParamLimits

0xa153,	// (0x00014c0b) heading_pane_g2

0x5a3d,	// (0x000104f5) tabs_4_passive_pane_srt

0x88be,	// (0x00013376) bg_passive_tab_pane_cp3_srt_ParamLimits

0x88be,	// (0x00013376) bg_passive_tab_pane_cp3_srt

0xa15b,	// (0x00014c13) heading_pane_t1_ParamLimits

0xa15b,	// (0x00014c13) heading_pane_t1

0xa172,	// (0x00014c2a) heading_pane_t2_ParamLimits

0xa172,	// (0x00014c2a) heading_pane_t2

0x0001,

0xf8dc,	// (0x0001a394) heading_pane_t_ParamLimits

0xf8dc,	// (0x0001a394) heading_pane_t

0x9c6c,	// (0x00014724) bg_popup_heading_pane_g1

0x9d1b,	// (0x000147d3) bg_popup_heading_pane_g2

0x9d25,	// (0x000147dd) bg_popup_heading_pane_g3

0x9d2f,	// (0x000147e7) bg_popup_heading_pane_g4

0x9d39,	// (0x000147f1) bg_popup_heading_pane_g5

0x9d43,	// (0x000147fb) bg_popup_heading_pane_g6

0x9d4b,	// (0x00014803) bg_popup_heading_pane_g7

0x9d53,	// (0x0001480b) bg_popup_heading_pane_g8

0x9d5d,	// (0x00014815) bg_popup_heading_pane_g9

0x0008,

0xf898,	// (0x0001a350) bg_popup_heading_pane_g

0x9396,	// (0x00013e4e) bg_popup_sub_pane_g1

0x93a6,	// (0x00013e5e) bg_popup_sub_pane_g2

0x939e,	// (0x00013e56) bg_popup_sub_pane_g3

0x93b6,	// (0x00013e6e) bg_popup_sub_pane_g4

0x93ae,	// (0x00013e66) bg_popup_sub_pane_g5

0x93be,	// (0x00013e76) bg_popup_sub_pane_g6

0x93c6,	// (0x00013e7e) bg_popup_sub_pane_g7

0x93d6,	// (0x00013e8e) bg_popup_sub_pane_g8

0x93ce,	// (0x00013e86) bg_popup_sub_pane_g9

0x0008,

0xf872,	// (0x0001a32a) bg_popup_sub_pane_g

0x6b93,	// (0x0001164b) bg_popup_window_pane_cp5_ParamLimits

0x6b93,	// (0x0001164b) bg_popup_window_pane_cp5

0x6baf,	// (0x00011667) popup_note_window_g1_ParamLimits

0x6baf,	// (0x00011667) popup_note_window_g1

0x6bbb,	// (0x00011673) popup_note_window_t1_ParamLimits

0x6bbb,	// (0x00011673) popup_note_window_t1

0x6bd1,	// (0x00011689) popup_note_window_t2_ParamLimits

0x6bd1,	// (0x00011689) popup_note_window_t2

0x6be7,	// (0x0001169f) popup_note_window_t3_ParamLimits

0x6be7,	// (0x0001169f) popup_note_window_t3

0x6bfd,	// (0x000116b5) popup_note_window_t4_ParamLimits

0x6bfd,	// (0x000116b5) popup_note_window_t4

0x6c25,	// (0x000116dd) popup_note_window_t5_ParamLimits

0x6c25,	// (0x000116dd) popup_note_window_t5

0x0004,

0xf59b,	// (0x0001a053) popup_note_window_t_ParamLimits

0xf59b,	// (0x0001a053) popup_note_window_t

0x6c49,	// (0x00011701) bg_popup_window_pane_cp6_ParamLimits

0x6c49,	// (0x00011701) bg_popup_window_pane_cp6

0x9be8,	// (0x000146a0) popup_note_image_window_g1_ParamLimits

0x9be8,	// (0x000146a0) popup_note_image_window_g1

0x9bf4,	// (0x000146ac) popup_note_image_window_g2_ParamLimits

0x9bf4,	// (0x000146ac) popup_note_image_window_g2

0x0001,

0xf866,	// (0x0001a31e) popup_note_image_window_g_ParamLimits

0xf866,	// (0x0001a31e) popup_note_image_window_g

0x9c0d,	// (0x000146c5) popup_note_image_window_t1_ParamLimits

0x9c0d,	// (0x000146c5) popup_note_image_window_t1

0x9c26,	// (0x000146de) popup_note_image_window_t2_ParamLimits

0x9c26,	// (0x000146de) popup_note_image_window_t2

0x9c3f,	// (0x000146f7) popup_note_image_window_t3_ParamLimits

0x9c3f,	// (0x000146f7) popup_note_image_window_t3

0x0002,

0xf86b,	// (0x0001a323) popup_note_image_window_t_ParamLimits

0xf86b,	// (0x0001a323) popup_note_image_window_t

0x9aa9,	// (0x00014561) bg_popup_window_pane_cp7_ParamLimits

0x9aa9,	// (0x00014561) bg_popup_window_pane_cp7

0x9ad9,	// (0x00014591) popup_note_wait_window_g1_ParamLimits

0x9ad9,	// (0x00014591) popup_note_wait_window_g1

0x9ae5,	// (0x0001459d) popup_note_wait_window_g2_ParamLimits

0x9ae5,	// (0x0001459d) popup_note_wait_window_g2

0x0002,

0xf854,	// (0x0001a30c) popup_note_wait_window_g_ParamLimits

0xf854,	// (0x0001a30c) popup_note_wait_window_g

0x9afd,	// (0x000145b5) popup_note_wait_window_t1_ParamLimits

0x9afd,	// (0x000145b5) popup_note_wait_window_t1

0x9b24,	// (0x000145dc) popup_note_wait_window_t2_ParamLimits

0x9b24,	// (0x000145dc) popup_note_wait_window_t2

0x9b41,	// (0x000145f9) popup_note_wait_window_t3_ParamLimits

0x9b41,	// (0x000145f9) popup_note_wait_window_t3

0x9b54,	// (0x0001460c) popup_note_wait_window_t4_ParamLimits

0x9b54,	// (0x0001460c) popup_note_wait_window_t4

0x0004,

0xf85b,	// (0x0001a313) popup_note_wait_window_t_ParamLimits

0xf85b,	// (0x0001a313) popup_note_wait_window_t

0x9b79,	// (0x00014631) wait_bar_pane_ParamLimits

0x9b79,	// (0x00014631) wait_bar_pane

0x681e,	// (0x000112d6) wait_anim_pane

0x681e,	// (0x000112d6) wait_border_pane

0x6814,	// (0x000112cc) wait_anim_pane_g1

0x6814,	// (0x000112cc) wait_anim_pane_g2

0x0001,

0xf71a,	// (0x0001a1d2) wait_anim_pane_g

0x9a4d,	// (0x00014505) wait_border_pane_g1

0x9a58,	// (0x00014510) wait_border_pane_g2

0x9a61,	// (0x00014519) wait_border_pane_g3

0x0002,

0xf84d,	// (0x0001a305) wait_border_pane_g

0x98b8,	// (0x00014370) bg_popup_window_pane_cp16_ParamLimits

0x98b8,	// (0x00014370) bg_popup_window_pane_cp16

0x99b8,	// (0x00014470) indicator_popup_pane_cp4_ParamLimits

0x99b8,	// (0x00014470) indicator_popup_pane_cp4

0x99cc,	// (0x00014484) popup_query_data_window_t1_ParamLimits

0x99cc,	// (0x00014484) popup_query_data_window_t1

0x99de,	// (0x00014496) popup_query_data_window_t2_ParamLimits

0x99de,	// (0x00014496) popup_query_data_window_t2

0x99f7,	// (0x000144af) popup_query_data_window_t3_ParamLimits

0x99f7,	// (0x000144af) popup_query_data_window_t3

0x0002,

0xf846,	// (0x0001a2fe) popup_query_data_window_t_ParamLimits

0xf846,	// (0x0001a2fe) popup_query_data_window_t

0x9a11,	// (0x000144c9) query_popup_data_pane_ParamLimits

0x9a11,	// (0x000144c9) query_popup_data_pane

0x9a25,	// (0x000144dd) query_popup_data_pane_cp1_ParamLimits

0x9a25,	// (0x000144dd) query_popup_data_pane_cp1

0x98b8,	// (0x00014370) bg_popup_window_pane_cp10_ParamLimits

0x98b8,	// (0x00014370) bg_popup_window_pane_cp10

0x98ea,	// (0x000143a2) indicator_popup_pane_ParamLimits

0x98ea,	// (0x000143a2) indicator_popup_pane

0x990c,	// (0x000143c4) popup_query_code_window_t1_ParamLimits

0x990c,	// (0x000143c4) popup_query_code_window_t1

0x9926,	// (0x000143de) popup_query_code_window_t2_ParamLimits

0x9926,	// (0x000143de) popup_query_code_window_t2

0x996f,	// (0x00014427) popup_query_code_window_t3_ParamLimits

0x996f,	// (0x00014427) popup_query_code_window_t3

0x0002,

0xf83f,	// (0x0001a2f7) popup_query_code_window_t_ParamLimits

0xf83f,	// (0x0001a2f7) popup_query_code_window_t

0x999e,	// (0x00014456) query_popup_pane_ParamLimits

0x999e,	// (0x00014456) query_popup_pane

0x6c49,	// (0x00011701) bg_popup_window_pane_cp15_ParamLimits

0x6c49,	// (0x00011701) bg_popup_window_pane_cp15

0x6c67,	// (0x0001171f) indicator_popup_pane_cp1_ParamLimits

0x6c67,	// (0x0001171f) indicator_popup_pane_cp1

0x6c7a,	// (0x00011732) indicator_popup_pane_cp2_ParamLimits

0x6c7a,	// (0x00011732) indicator_popup_pane_cp2

0x6c8d,	// (0x00011745) popup_query_data_code_window_g1_ParamLimits

0x6c8d,	// (0x00011745) popup_query_data_code_window_g1

0x6ca0,	// (0x00011758) popup_query_data_code_window_t1_ParamLimits

0x6ca0,	// (0x00011758) popup_query_data_code_window_t1

0x6cb2,	// (0x0001176a) popup_query_data_code_window_t2_ParamLimits

0x6cb2,	// (0x0001176a) popup_query_data_code_window_t2

0x6cc4,	// (0x0001177c) popup_query_data_code_window_t3_ParamLimits

0x6cc4,	// (0x0001177c) popup_query_data_code_window_t3

0x6cda,	// (0x00011792) popup_query_data_code_window_t4_ParamLimits

0x6cda,	// (0x00011792) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x0001a05e) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x0001a05e) popup_query_data_code_window_t

0x56ec,	// (0x000101a4) list_single_midp_graphic_pane_g3

0x6cf2,	// (0x000117aa) query_popup_data_pane_cp2_ParamLimits

0x6d05,	// (0x000117bd) query_popup_pane_cp2_ParamLimits

0x6d05,	// (0x000117bd) query_popup_pane_cp2

0x681e,	// (0x000112d6) bg_popup_window_pane_cp11

0x98b0,	// (0x00014368) heading_pane_cp5

0x6ded,	// (0x000118a5) listscroll_popup_info_pane

0x681e,	// (0x000112d6) input_focus_pane_cp3

0x6d18,	// (0x000117d0) query_popup_pane_t1

0x6d26,	// (0x000117de) list_popup_info_pane_ParamLimits

0x6d26,	// (0x000117de) list_popup_info_pane

0x6d35,	// (0x000117ed) listscroll_popup_info_pane_g1

0x6d3d,	// (0x000117f5) scroll_pane_cp7

0x6d47,	// (0x000117ff) popup_info_list_pane_t1_ParamLimits

0x6d47,	// (0x000117ff) popup_info_list_pane_t1

0x6d61,	// (0x00011819) popup_info_list_pane_t2_ParamLimits

0x6d61,	// (0x00011819) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x0001a067) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x0001a067) popup_info_list_pane_t

0x681e,	// (0x000112d6) bg_popup_window_pane_cp12

0xad11,	// (0x000157c9) find_popup_pane

0x68fe,	// (0x000113b6) bg_popup_window_pane_cp3

0x6d7b,	// (0x00011833) heading_pane_cp3

0x6d87,	// (0x0001183f) listscroll_popup_graphic_pane

0x681e,	// (0x000112d6) bg_popup_window_pane_cp4

0x6de3,	// (0x0001189b) heading_pane_cp4

0x6ded,	// (0x000118a5) listscroll_popup_colour_pane

0x6df5,	// (0x000118ad) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x6df5,	// (0x000118ad) cell_large_graphic_colour_none_popup_pane

0x6e09,	// (0x000118c1) grid_large_graphic_colour_popup_pane_ParamLimits

0x6e09,	// (0x000118c1) grid_large_graphic_colour_popup_pane

0x6e35,	// (0x000118ed) listscroll_popup_colour_pane_g1_ParamLimits

0x6e35,	// (0x000118ed) listscroll_popup_colour_pane_g1

0x6e4c,	// (0x00011904) listscroll_popup_colour_pane_g2_ParamLimits

0x6e4c,	// (0x00011904) listscroll_popup_colour_pane_g2

0x6e63,	// (0x0001191b) listscroll_popup_colour_pane_g3_ParamLimits

0x6e63,	// (0x0001191b) listscroll_popup_colour_pane_g3

0x6e73,	// (0x0001192b) listscroll_popup_colour_pane_g4_ParamLimits

0x6e73,	// (0x0001192b) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x0001a06c) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x0001a06c) listscroll_popup_colour_pane_g

0x6e87,	// (0x0001193f) scroll_pane_cp6_ParamLimits

0x6e87,	// (0x0001193f) scroll_pane_cp6

0x6e99,	// (0x00011951) cell_large_graphic_colour_popup_pane_ParamLimits

0x6e99,	// (0x00011951) cell_large_graphic_colour_popup_pane

0x6eb8,	// (0x00011970) cell_large_graphic_colour_none_popup_pane_t1

0x681e,	// (0x000112d6) grid_highlight_pane_cp5

0x6ec7,	// (0x0001197f) cell_large_graphic_colour_popup_pane_g1

0x6ecf,	// (0x00011987) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x0001a075) cell_large_graphic_colour_popup_pane_g

0x6ed7,	// (0x0001198f) cell_large_graphic_colour_popup_pane_g2_copy1

0x6ee0,	// (0x00011998) grid_highlight_pane_cp4

0x6ee8,	// (0x000119a0) bg_popup_window_pane_cp8_ParamLimits

0x6ee8,	// (0x000119a0) bg_popup_window_pane_cp8

0x6f03,	// (0x000119bb) popup_snote_single_text_window_g1_ParamLimits

0x6f03,	// (0x000119bb) popup_snote_single_text_window_g1

0x6f15,	// (0x000119cd) popup_snote_single_text_window_t1_ParamLimits

0x6f15,	// (0x000119cd) popup_snote_single_text_window_t1

0x6f28,	// (0x000119e0) popup_snote_single_text_window_t2_ParamLimits

0x6f28,	// (0x000119e0) popup_snote_single_text_window_t2

0x6f3b,	// (0x000119f3) popup_snote_single_text_window_t3_ParamLimits

0x6f3b,	// (0x000119f3) popup_snote_single_text_window_t3

0x6f74,	// (0x00011a2c) popup_snote_single_text_window_t4_ParamLimits

0x6f74,	// (0x00011a2c) popup_snote_single_text_window_t4

0x6fa8,	// (0x00011a60) popup_snote_single_text_window_t5_ParamLimits

0x6fa8,	// (0x00011a60) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x0001a07a) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x0001a07a) popup_snote_single_text_window_t

0x6fd7,	// (0x00011a8f) bg_popup_window_pane_cp9_ParamLimits

0x6fd7,	// (0x00011a8f) bg_popup_window_pane_cp9

0x6f03,	// (0x000119bb) popup_snote_single_graphic_window_g1_ParamLimits

0x6f03,	// (0x000119bb) popup_snote_single_graphic_window_g1

0x6fe5,	// (0x00011a9d) popup_snote_single_graphic_window_g2_ParamLimits

0x6fe5,	// (0x00011a9d) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x0001a085) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x0001a085) popup_snote_single_graphic_window_g

0x6ff1,	// (0x00011aa9) popup_snote_single_graphic_window_t1_ParamLimits

0x6ff1,	// (0x00011aa9) popup_snote_single_graphic_window_t1

0x7004,	// (0x00011abc) popup_snote_single_graphic_window_t2_ParamLimits

0x7004,	// (0x00011abc) popup_snote_single_graphic_window_t2

0x7017,	// (0x00011acf) popup_snote_single_graphic_window_t3_ParamLimits

0x7017,	// (0x00011acf) popup_snote_single_graphic_window_t3

0x7050,	// (0x00011b08) popup_snote_single_graphic_window_t4_ParamLimits

0x7050,	// (0x00011b08) popup_snote_single_graphic_window_t4

0x7084,	// (0x00011b3c) popup_snote_single_graphic_window_t5_ParamLimits

0x7084,	// (0x00011b3c) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x0001a08a) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x0001a08a) popup_snote_single_graphic_window_t

0xac55,	// (0x0001570d) grid_graphic_popup_pane_ParamLimits

0xac55,	// (0x0001570d) grid_graphic_popup_pane

0xac7d,	// (0x00015735) listscroll_popup_graphic_pane_g1_ParamLimits

0xac7d,	// (0x00015735) listscroll_popup_graphic_pane_g1

0xac91,	// (0x00015749) listscroll_popup_graphic_pane_g2_ParamLimits

0xac91,	// (0x00015749) listscroll_popup_graphic_pane_g2

0x0001,

0xf9bc,	// (0x0001a474) listscroll_popup_graphic_pane_g_ParamLimits

0xf9bc,	// (0x0001a474) listscroll_popup_graphic_pane_g

0xaca5,	// (0x0001575d) scroll_pane_cp5

0xabfe,	// (0x000156b6) cell_graphic_popup_pane_ParamLimits

0xabfe,	// (0x000156b6) cell_graphic_popup_pane

0xabdf,	// (0x00015697) cell_graphic_popup_pane_g1

0xabe7,	// (0x0001569f) cell_graphic_popup_pane_g2

0x6ed7,	// (0x0001198f) cell_graphic_popup_pane_g3

0x0002,

0xf9b5,	// (0x0001a46d) cell_graphic_popup_pane_g

0xabf0,	// (0x000156a8) cell_graphic_popup_pane_t2

0x6ee0,	// (0x00011998) grid_highlight_pane_cp3

0x70c5,	// (0x00011b7d) list_gen_pane_ParamLimits

0x70c5,	// (0x00011b7d) list_gen_pane

0x70f7,	// (0x00011baf) scroll_pane

0xab41,	// (0x000155f9) bg_list_pane_g1_ParamLimits

0xab41,	// (0x000155f9) bg_list_pane_g1

0xab5c,	// (0x00015614) bg_list_pane_g2_ParamLimits

0xab5c,	// (0x00015614) bg_list_pane_g2

0xab6f,	// (0x00015627) bg_list_pane_g3_ParamLimits

0xab6f,	// (0x00015627) bg_list_pane_g3

0xab81,	// (0x00015639) bg_list_pane_g4_ParamLimits

0xab81,	// (0x00015639) bg_list_pane_g4

0xab93,	// (0x0001564b) bg_list_pane_g5_ParamLimits

0xab93,	// (0x0001564b) bg_list_pane_g5

0x0004,

0xf9aa,	// (0x0001a462) bg_list_pane_g_ParamLimits

0xf9aa,	// (0x0001a462) bg_list_pane_g

0xaa54,	// (0x0001550c) list_double2_graphic_large_graphic_pane_ParamLimits

0xaa54,	// (0x0001550c) list_double2_graphic_large_graphic_pane

0xaa54,	// (0x0001550c) list_double2_graphic_pane_ParamLimits

0xaa54,	// (0x0001550c) list_double2_graphic_pane

0xaa54,	// (0x0001550c) list_double2_large_graphic_pane_ParamLimits

0xaa54,	// (0x0001550c) list_double2_large_graphic_pane

0xaa54,	// (0x0001550c) list_double2_pane_ParamLimits

0xaa54,	// (0x0001550c) list_double2_pane

0xaa54,	// (0x0001550c) list_double_graphic_heading_pane_ParamLimits

0xaa54,	// (0x0001550c) list_double_graphic_heading_pane

0xaa54,	// (0x0001550c) list_double_graphic_pane_ParamLimits

0xaa54,	// (0x0001550c) list_double_graphic_pane

0xaa54,	// (0x0001550c) list_double_heading_pane_ParamLimits

0xaa54,	// (0x0001550c) list_double_heading_pane

0xaa54,	// (0x0001550c) list_double_large_graphic_pane_ParamLimits

0xaa54,	// (0x0001550c) list_double_large_graphic_pane

0xaa54,	// (0x0001550c) list_double_number_pane_ParamLimits

0xaa54,	// (0x0001550c) list_double_number_pane

0xaa54,	// (0x0001550c) list_double_pane_ParamLimits

0xaa54,	// (0x0001550c) list_double_pane

0xaa54,	// (0x0001550c) list_double_time_pane_ParamLimits

0xaa54,	// (0x0001550c) list_double_time_pane

0xaa54,	// (0x0001550c) list_setting_number_pane_ParamLimits

0xaa54,	// (0x0001550c) list_setting_number_pane

0xaa54,	// (0x0001550c) list_setting_pane_ParamLimits

0xaa54,	// (0x0001550c) list_setting_pane

0xaab0,	// (0x00015568) list_single_2graphic_pane_ParamLimits

0xaab0,	// (0x00015568) list_single_2graphic_pane

0xaab0,	// (0x00015568) list_single_graphic_heading_pane_ParamLimits

0xaab0,	// (0x00015568) list_single_graphic_heading_pane

0xaab0,	// (0x00015568) list_single_graphic_pane_ParamLimits

0xaab0,	// (0x00015568) list_single_graphic_pane

0xaab0,	// (0x00015568) list_single_heading_pane_ParamLimits

0xaab0,	// (0x00015568) list_single_heading_pane

0xab22,	// (0x000155da) list_single_large_graphic_pane_ParamLimits

0xab22,	// (0x000155da) list_single_large_graphic_pane

0xaab0,	// (0x00015568) list_single_number_heading_pane_ParamLimits

0xaab0,	// (0x00015568) list_single_number_heading_pane

0xaab0,	// (0x00015568) list_single_number_pane_ParamLimits

0xaab0,	// (0x00015568) list_single_number_pane

0xaab0,	// (0x00015568) list_single_pane_ParamLimits

0xaab0,	// (0x00015568) list_single_pane

0x681e,	// (0x000112d6) list_highlight_pane_cp1

0x7137,	// (0x00011bef) list_single_pane_g1_ParamLimits

0x7137,	// (0x00011bef) list_single_pane_g1

0x7143,	// (0x00011bfb) list_single_pane_g2_ParamLimits

0x7143,	// (0x00011bfb) list_single_pane_g2

0x0001,

0xf5e4,	// (0x0001a09c) list_single_pane_g_ParamLimits

0xf5e4,	// (0x0001a09c) list_single_pane_g

0xaa0d,	// (0x000154c5) list_single_pane_t1_ParamLimits

0xaa0d,	// (0x000154c5) list_single_pane_t1

0x7137,	// (0x00011bef) list_single_number_pane_g1_ParamLimits

0x7137,	// (0x00011bef) list_single_number_pane_g1

0x7143,	// (0x00011bfb) list_single_number_pane_g2_ParamLimits

0x7143,	// (0x00011bfb) list_single_number_pane_g2

0x0001,

0xf5e4,	// (0x0001a09c) list_single_number_pane_g_ParamLimits

0xf5e4,	// (0x0001a09c) list_single_number_pane_g

0xa799,	// (0x00015251) list_single_number_pane_t1_ParamLimits

0xa799,	// (0x00015251) list_single_number_pane_t1

0xa7af,	// (0x00015267) list_single_number_pane_t2_ParamLimits

0xa7af,	// (0x00015267) list_single_number_pane_t2

0x0001,

0xf96b,	// (0x0001a423) list_single_number_pane_t_ParamLimits

0xf96b,	// (0x0001a423) list_single_number_pane_t

0x712b,	// (0x00011be3) list_single_graphic_pane_g1_ParamLimits

0x712b,	// (0x00011be3) list_single_graphic_pane_g1

0x7137,	// (0x00011bef) list_single_graphic_pane_g2_ParamLimits

0x7137,	// (0x00011bef) list_single_graphic_pane_g2

0x7143,	// (0x00011bfb) list_single_graphic_pane_g3_ParamLimits

0x7143,	// (0x00011bfb) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x0001a095) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x0001a095) list_single_graphic_pane_g

0x714f,	// (0x00011c07) list_single_graphic_pane_t1_ParamLimits

0x714f,	// (0x00011c07) list_single_graphic_pane_t1

0x7137,	// (0x00011bef) list_single_heading_pane_g1_ParamLimits

0x7137,	// (0x00011bef) list_single_heading_pane_g1

0x7143,	// (0x00011bfb) list_single_heading_pane_g2_ParamLimits

0x7143,	// (0x00011bfb) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x0001a09c) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x0001a09c) list_single_heading_pane_g

0x7165,	// (0x00011c1d) list_single_heading_pane_t1_ParamLimits

0x7165,	// (0x00011c1d) list_single_heading_pane_t1

0x717b,	// (0x00011c33) list_single_heading_pane_t2_ParamLimits

0x717b,	// (0x00011c33) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x0001a0a1) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x0001a0a1) list_single_heading_pane_t

0x7137,	// (0x00011bef) list_single_number_heading_pane_g1_ParamLimits

0x7137,	// (0x00011bef) list_single_number_heading_pane_g1

0x7143,	// (0x00011bfb) list_single_number_heading_pane_g2_ParamLimits

0x7143,	// (0x00011bfb) list_single_number_heading_pane_g2

0x0001,

0xf5e4,	// (0x0001a09c) list_single_number_heading_pane_g_ParamLimits

0xf5e4,	// (0x0001a09c) list_single_number_heading_pane_g

0x7165,	// (0x00011c1d) list_single_number_heading_pane_t1_ParamLimits

0x7165,	// (0x00011c1d) list_single_number_heading_pane_t1

0x718d,	// (0x00011c45) list_single_number_heading_pane_t2_ParamLimits

0x718d,	// (0x00011c45) list_single_number_heading_pane_t2

0x719f,	// (0x00011c57) list_single_number_heading_pane_t3_ParamLimits

0x719f,	// (0x00011c57) list_single_number_heading_pane_t3

0x0002,

0xf5ee,	// (0x0001a0a6) list_single_number_heading_pane_t_ParamLimits

0xf5ee,	// (0x0001a0a6) list_single_number_heading_pane_t

0x71b1,	// (0x00011c69) list_single_graphic_heading_pane_g1_ParamLimits

0x71b1,	// (0x00011c69) list_single_graphic_heading_pane_g1

0x71bd,	// (0x00011c75) list_single_graphic_heading_pane_g4_ParamLimits

0x71bd,	// (0x00011c75) list_single_graphic_heading_pane_g4

0x7143,	// (0x00011bfb) list_single_graphic_heading_pane_g5_ParamLimits

0x7143,	// (0x00011bfb) list_single_graphic_heading_pane_g5

0x0002,

0xf5f5,	// (0x0001a0ad) list_single_graphic_heading_pane_g_ParamLimits

0xf5f5,	// (0x0001a0ad) list_single_graphic_heading_pane_g

0x7165,	// (0x00011c1d) list_single_graphic_heading_pane_t1_ParamLimits

0x7165,	// (0x00011c1d) list_single_graphic_heading_pane_t1

0x71ce,	// (0x00011c86) list_single_graphic_heading_pane_t2_ParamLimits

0x71ce,	// (0x00011c86) list_single_graphic_heading_pane_t2

0x0001,

0xf5fc,	// (0x0001a0b4) list_single_graphic_heading_pane_t_ParamLimits

0xf5fc,	// (0x0001a0b4) list_single_graphic_heading_pane_t

0x71e0,	// (0x00011c98) list_single_large_graphic_pane_g1_ParamLimits

0x71e0,	// (0x00011c98) list_single_large_graphic_pane_g1

0x71ec,	// (0x00011ca4) list_single_large_graphic_pane_g2_ParamLimits

0x71ec,	// (0x00011ca4) list_single_large_graphic_pane_g2

0x71f8,	// (0x00011cb0) list_single_large_graphic_pane_g3_ParamLimits

0x71f8,	// (0x00011cb0) list_single_large_graphic_pane_g3

0x0002,

0xf601,	// (0x0001a0b9) list_single_large_graphic_pane_g_ParamLimits

0xf601,	// (0x0001a0b9) list_single_large_graphic_pane_g

0x9a58,	// (0x00014510) wait_border_pane_g2_copy1

0x7204,	// (0x00011cbc) list_single_large_graphic_pane_g4_cp2

0x720c,	// (0x00011cc4) list_single_large_graphic_pane_t1_ParamLimits

0x720c,	// (0x00011cc4) list_single_large_graphic_pane_t1

0x7222,	// (0x00011cda) list_double_pane_g1_ParamLimits

0x7222,	// (0x00011cda) list_double_pane_g1

0x722e,	// (0x00011ce6) list_double_pane_g2_ParamLimits

0x722e,	// (0x00011ce6) list_double_pane_g2

0x0001,

0xf608,	// (0x0001a0c0) list_double_pane_g_ParamLimits

0xf608,	// (0x0001a0c0) list_double_pane_g

0x723a,	// (0x00011cf2) list_double_pane_t1_ParamLimits

0x723a,	// (0x00011cf2) list_double_pane_t1

0x7250,	// (0x00011d08) list_double_pane_t2_ParamLimits

0x7250,	// (0x00011d08) list_double_pane_t2

0x0001,

0xf60d,	// (0x0001a0c5) list_double_pane_t_ParamLimits

0xf60d,	// (0x0001a0c5) list_double_pane_t

0x7262,	// (0x00011d1a) list_double2_pane_g1_ParamLimits

0x7262,	// (0x00011d1a) list_double2_pane_g1

0x7273,	// (0x00011d2b) list_double2_pane_g2_ParamLimits

0x7273,	// (0x00011d2b) list_double2_pane_g2

0x0001,

0xf612,	// (0x0001a0ca) list_double2_pane_g_ParamLimits

0xf612,	// (0x0001a0ca) list_double2_pane_g

0x727f,	// (0x00011d37) list_double2_pane_t1_ParamLimits

0x727f,	// (0x00011d37) list_double2_pane_t1

0x7295,	// (0x00011d4d) list_double2_pane_t2_ParamLimits

0x7295,	// (0x00011d4d) list_double2_pane_t2

0x0001,

0xf617,	// (0x0001a0cf) list_double2_pane_t_ParamLimits

0xf617,	// (0x0001a0cf) list_double2_pane_t

0x7222,	// (0x00011cda) list_double_number_pane_g1_ParamLimits

0x7222,	// (0x00011cda) list_double_number_pane_g1

0x722e,	// (0x00011ce6) list_double_number_pane_g2_ParamLimits

0x722e,	// (0x00011ce6) list_double_number_pane_g2

0x0001,

0xf608,	// (0x0001a0c0) list_double_number_pane_g_ParamLimits

0xf608,	// (0x0001a0c0) list_double_number_pane_g

0x72a7,	// (0x00011d5f) list_double_number_pane_t1_ParamLimits

0x72a7,	// (0x00011d5f) list_double_number_pane_t1

0x72b9,	// (0x00011d71) list_double_number_pane_t2_ParamLimits

0x72b9,	// (0x00011d71) list_double_number_pane_t2

0x72cf,	// (0x00011d87) list_double_number_pane_t3_ParamLimits

0x72cf,	// (0x00011d87) list_double_number_pane_t3

0x0002,

0xf61c,	// (0x0001a0d4) list_double_number_pane_t_ParamLimits

0xf61c,	// (0x0001a0d4) list_double_number_pane_t

0x72e1,	// (0x00011d99) list_double_graphic_pane_g1_ParamLimits

0x72e1,	// (0x00011d99) list_double_graphic_pane_g1

0x72ed,	// (0x00011da5) list_double_graphic_pane_g2_ParamLimits

0x72ed,	// (0x00011da5) list_double_graphic_pane_g2

0x72fc,	// (0x00011db4) list_double_graphic_pane_g3_ParamLimits

0x72fc,	// (0x00011db4) list_double_graphic_pane_g3

0x0003,

0xf623,	// (0x0001a0db) list_double_graphic_pane_g_ParamLimits

0xf623,	// (0x0001a0db) list_double_graphic_pane_g

0x7314,	// (0x00011dcc) list_double_graphic_pane_t1_ParamLimits

0x7314,	// (0x00011dcc) list_double_graphic_pane_t1

0x732a,	// (0x00011de2) list_double_graphic_pane_t2_ParamLimits

0x732a,	// (0x00011de2) list_double_graphic_pane_t2

0x0001,

0xf62c,	// (0x0001a0e4) list_double_graphic_pane_t_ParamLimits

0xf62c,	// (0x0001a0e4) list_double_graphic_pane_t

0x733c,	// (0x00011df4) list_double2_graphic_pane_g1_ParamLimits

0x733c,	// (0x00011df4) list_double2_graphic_pane_g1

0x7348,	// (0x00011e00) list_double2_graphic_pane_g2_ParamLimits

0x7348,	// (0x00011e00) list_double2_graphic_pane_g2

0x7273,	// (0x00011d2b) list_double2_graphic_pane_g3_ParamLimits

0x7273,	// (0x00011d2b) list_double2_graphic_pane_g3

0x0002,

0xf631,	// (0x0001a0e9) list_double2_graphic_pane_g_ParamLimits

0xf631,	// (0x0001a0e9) list_double2_graphic_pane_g

0x7354,	// (0x00011e0c) list_double2_graphic_pane_t1_ParamLimits

0x7354,	// (0x00011e0c) list_double2_graphic_pane_t1

0x736a,	// (0x00011e22) list_double2_graphic_pane_t2_ParamLimits

0x736a,	// (0x00011e22) list_double2_graphic_pane_t2

0x0001,

0xf638,	// (0x0001a0f0) list_double2_graphic_pane_t_ParamLimits

0xf638,	// (0x0001a0f0) list_double2_graphic_pane_t

0x737c,	// (0x00011e34) list_double_large_graphic_pane_g1_ParamLimits

0x737c,	// (0x00011e34) list_double_large_graphic_pane_g1

0x73a5,	// (0x00011e5d) list_double_large_graphic_pane_g2_ParamLimits

0x73a5,	// (0x00011e5d) list_double_large_graphic_pane_g2

0x722e,	// (0x00011ce6) list_double_large_graphic_pane_g3_ParamLimits

0x722e,	// (0x00011ce6) list_double_large_graphic_pane_g3

0x73b6,	// (0x00011e6e) list_double_large_graphic_pane_g4_ParamLimits

0x73b6,	// (0x00011e6e) list_double_large_graphic_pane_g4

0x0004,

0xf63d,	// (0x0001a0f5) list_double_large_graphic_pane_g_ParamLimits

0xf63d,	// (0x0001a0f5) list_double_large_graphic_pane_g

0x73dc,	// (0x00011e94) list_double_large_graphic_pane_t1_ParamLimits

0x73dc,	// (0x00011e94) list_double_large_graphic_pane_t1

0x73f5,	// (0x00011ead) list_double_large_graphic_pane_t2_ParamLimits

0x73f5,	// (0x00011ead) list_double_large_graphic_pane_t2

0x0001,

0xf648,	// (0x0001a100) list_double_large_graphic_pane_t_ParamLimits

0xf648,	// (0x0001a100) list_double_large_graphic_pane_t

0x7407,	// (0x00011ebf) list_double2_large_graphic_pane_g1_ParamLimits

0x7407,	// (0x00011ebf) list_double2_large_graphic_pane_g1

0x7262,	// (0x00011d1a) list_double2_large_graphic_pane_g2_ParamLimits

0x7262,	// (0x00011d1a) list_double2_large_graphic_pane_g2

0x7273,	// (0x00011d2b) list_double2_large_graphic_pane_g3_ParamLimits

0x7273,	// (0x00011d2b) list_double2_large_graphic_pane_g3

0x0002,

0xf64d,	// (0x0001a105) list_double2_large_graphic_pane_g_ParamLimits

0xf64d,	// (0x0001a105) list_double2_large_graphic_pane_g

0x7413,	// (0x00011ecb) list_double2_large_graphic_pane_t1_ParamLimits

0x7413,	// (0x00011ecb) list_double2_large_graphic_pane_t1

0x7429,	// (0x00011ee1) list_double2_large_graphic_pane_t2_ParamLimits

0x7429,	// (0x00011ee1) list_double2_large_graphic_pane_t2

0x0001,

0xf654,	// (0x0001a10c) list_double2_large_graphic_pane_t_ParamLimits

0xf654,	// (0x0001a10c) list_double2_large_graphic_pane_t

0x743b,	// (0x00011ef3) list_double_heading_pane_g1_ParamLimits

0x743b,	// (0x00011ef3) list_double_heading_pane_g1

0x744c,	// (0x00011f04) list_double_heading_pane_g2_ParamLimits

0x744c,	// (0x00011f04) list_double_heading_pane_g2

0x0001,

0xf659,	// (0x0001a111) list_double_heading_pane_g_ParamLimits

0xf659,	// (0x0001a111) list_double_heading_pane_g

0x7458,	// (0x00011f10) list_double_heading_pane_t1_ParamLimits

0x7458,	// (0x00011f10) list_double_heading_pane_t1

0x7295,	// (0x00011d4d) list_double_heading_pane_t2_ParamLimits

0x7295,	// (0x00011d4d) list_double_heading_pane_t2

0x0001,

0xf65e,	// (0x0001a116) list_double_heading_pane_t_ParamLimits

0xf65e,	// (0x0001a116) list_double_heading_pane_t

0x746e,	// (0x00011f26) list_double_graphic_heading_pane_g1_ParamLimits

0x746e,	// (0x00011f26) list_double_graphic_heading_pane_g1

0x743b,	// (0x00011ef3) list_double_graphic_heading_pane_g2_ParamLimits

0x743b,	// (0x00011ef3) list_double_graphic_heading_pane_g2

0x744c,	// (0x00011f04) list_double_graphic_heading_pane_g3_ParamLimits

0x744c,	// (0x00011f04) list_double_graphic_heading_pane_g3

0x0002,

0xf663,	// (0x0001a11b) list_double_graphic_heading_pane_g_ParamLimits

0xf663,	// (0x0001a11b) list_double_graphic_heading_pane_g

0x747a,	// (0x00011f32) list_double_graphic_heading_pane_t1_ParamLimits

0x747a,	// (0x00011f32) list_double_graphic_heading_pane_t1

0x736a,	// (0x00011e22) list_double_graphic_heading_pane_t2_ParamLimits

0x736a,	// (0x00011e22) list_double_graphic_heading_pane_t2

0x0001,

0xf66a,	// (0x0001a122) list_double_graphic_heading_pane_t_ParamLimits

0xf66a,	// (0x0001a122) list_double_graphic_heading_pane_t

0x73a5,	// (0x00011e5d) list_double_time_pane_g1_ParamLimits

0x73a5,	// (0x00011e5d) list_double_time_pane_g1

0x722e,	// (0x00011ce6) list_double_time_pane_g2_ParamLimits

0x722e,	// (0x00011ce6) list_double_time_pane_g2

0x0001,

0xf66f,	// (0x0001a127) list_double_time_pane_g_ParamLimits

0xf66f,	// (0x0001a127) list_double_time_pane_g

0x7490,	// (0x00011f48) list_double_time_pane_t1_ParamLimits

0x7490,	// (0x00011f48) list_double_time_pane_t1

0x74a6,	// (0x00011f5e) list_double_time_pane_t2_ParamLimits

0x74a6,	// (0x00011f5e) list_double_time_pane_t2

0x74b8,	// (0x00011f70) list_double_time_pane_t3_ParamLimits

0x74b8,	// (0x00011f70) list_double_time_pane_t3

0x74ca,	// (0x00011f82) list_double_time_pane_t4_ParamLimits

0x74ca,	// (0x00011f82) list_double_time_pane_t4

0x0003,

0xf674,	// (0x0001a12c) list_double_time_pane_t_ParamLimits

0xf674,	// (0x0001a12c) list_double_time_pane_t

0x7348,	// (0x00011e00) list_setting_pane_g1_ParamLimits

0x7348,	// (0x00011e00) list_setting_pane_g1

0x7273,	// (0x00011d2b) list_setting_pane_g2_ParamLimits

0x7273,	// (0x00011d2b) list_setting_pane_g2

0x0001,

0xf67d,	// (0x0001a135) list_setting_pane_g_ParamLimits

0xf67d,	// (0x0001a135) list_setting_pane_g

0x74dc,	// (0x00011f94) list_setting_pane_t1_ParamLimits

0x74dc,	// (0x00011f94) list_setting_pane_t1

0x74f3,	// (0x00011fab) list_setting_pane_t2_ParamLimits

0x74f3,	// (0x00011fab) list_setting_pane_t2

0x0002,

0xf682,	// (0x0001a13a) list_setting_pane_t_ParamLimits

0xf682,	// (0x0001a13a) list_setting_pane_t

0x7532,	// (0x00011fea) set_value_pane_cp_ParamLimits

0x7532,	// (0x00011fea) set_value_pane_cp

0x7348,	// (0x00011e00) list_setting_number_pane_g1_ParamLimits

0x7348,	// (0x00011e00) list_setting_number_pane_g1

0x7273,	// (0x00011d2b) list_setting_number_pane_g2_ParamLimits

0x7273,	// (0x00011d2b) list_setting_number_pane_g2

0x0001,

0xf67d,	// (0x0001a135) list_setting_number_pane_g_ParamLimits

0xf67d,	// (0x0001a135) list_setting_number_pane_g

0x753e,	// (0x00011ff6) list_setting_number_pane_t1_ParamLimits

0x753e,	// (0x00011ff6) list_setting_number_pane_t1

0x7552,	// (0x0001200a) list_setting_number_pane_t2_ParamLimits

0x7552,	// (0x0001200a) list_setting_number_pane_t2

0x7569,	// (0x00012021) list_setting_number_pane_t3_ParamLimits

0x7569,	// (0x00012021) list_setting_number_pane_t3

0x0003,

0xf689,	// (0x0001a141) list_setting_number_pane_t_ParamLimits

0xf689,	// (0x0001a141) list_setting_number_pane_t

0x7532,	// (0x00011fea) set_value_pane_ParamLimits

0x7532,	// (0x00011fea) set_value_pane

0x75ac,	// (0x00012064) bg_set_opt_pane_ParamLimits

0x75ac,	// (0x00012064) bg_set_opt_pane

0x75cd,	// (0x00012085) set_value_pane_t1

0x75db,	// (0x00012093) slider_set_pane_cp3

0x75e4,	// (0x0001209c) volume_small_pane_cp

0x75ed,	// (0x000120a5) list_form_gen_pane

0x75f6,	// (0x000120ae) scroll_pane_cp8

0x760f,	// (0x000120c7) form_field_data_pane_ParamLimits

0x760f,	// (0x000120c7) form_field_data_pane

0x7631,	// (0x000120e9) form_field_data_wide_pane_ParamLimits

0x7631,	// (0x000120e9) form_field_data_wide_pane

0x7654,	// (0x0001210c) form_field_popup_pane_ParamLimits

0x7654,	// (0x0001210c) form_field_popup_pane

0x7674,	// (0x0001212c) form_field_popup_wide_pane_ParamLimits

0x7674,	// (0x0001212c) form_field_popup_wide_pane

0x7691,	// (0x00012149) form_field_slider_pane_ParamLimits

0x7691,	// (0x00012149) form_field_slider_pane

0x76a4,	// (0x0001215c) form_field_slider_wide_pane_ParamLimits

0x76a4,	// (0x0001215c) form_field_slider_wide_pane

0x76b7,	// (0x0001216f) data_form_pane

0x76cd,	// (0x00012185) form_field_data_pane_t1

0x76e5,	// (0x0001219d) input_focus_pane

0x76f3,	// (0x000121ab) data_form_wide_pane

0x772b,	// (0x000121e3) form_field_data_wide_pane_t1

0x6ef5,	// (0x000119ad) input_focus_pane_cp6

0x774d,	// (0x00012205) form_field_popup_pane_t1

0x76e5,	// (0x0001219d) input_focus_pane_cp7

0x7765,	// (0x0001221d) list_form_pane

0x7779,	// (0x00012231) form_field_popup_wide_pane_t1

0x76e5,	// (0x0001219d) input_focus_pane_cp8

0x778e,	// (0x00012246) list_form_wide_pane

0x77a5,	// (0x0001225d) form_field_slider_pane_t1_ParamLimits

0x77a5,	// (0x0001225d) form_field_slider_pane_t1

0x77b7,	// (0x0001226f) form_field_slider_pane_t2_ParamLimits

0x77b7,	// (0x0001226f) form_field_slider_pane_t2

0x0001,

0xf699,	// (0x0001a151) form_field_slider_pane_t_ParamLimits

0xf699,	// (0x0001a151) form_field_slider_pane_t

0x6b93,	// (0x0001164b) input_focus_pane_cp9_ParamLimits

0x6b93,	// (0x0001164b) input_focus_pane_cp9

0x77c9,	// (0x00012281) slider_cont_pane_ParamLimits

0x77c9,	// (0x00012281) slider_cont_pane

0x77dd,	// (0x00012295) form_field_slider_wide_pane_t1_ParamLimits

0x77dd,	// (0x00012295) form_field_slider_wide_pane_t1

0x77ef,	// (0x000122a7) form_field_slider_wide_pane_t2_ParamLimits

0x77ef,	// (0x000122a7) form_field_slider_wide_pane_t2

0x0001,

0xf69e,	// (0x0001a156) form_field_slider_wide_pane_t_ParamLimits

0xf69e,	// (0x0001a156) form_field_slider_wide_pane_t

0x6b93,	// (0x0001164b) input_focus_pane_cp10_ParamLimits

0x6b93,	// (0x0001164b) input_focus_pane_cp10

0x7801,	// (0x000122b9) slider_cont_pane_cp1_ParamLimits

0x7801,	// (0x000122b9) slider_cont_pane_cp1

0x7815,	// (0x000122cd) slider_form_pane_cp

0x781d,	// (0x000122d5) input_focus_pane_g1

0x7825,	// (0x000122dd) input_focus_pane_g2

0x782d,	// (0x000122e5) input_focus_pane_g3

0x7835,	// (0x000122ed) input_focus_pane_g4

0x783d,	// (0x000122f5) input_focus_pane_g5

0x7845,	// (0x000122fd) input_focus_pane_g6

0x784d,	// (0x00012305) input_focus_pane_g7

0x7855,	// (0x0001230d) input_focus_pane_g8

0x785d,	// (0x00012315) input_focus_pane_g9

0x6814,	// (0x000112cc) input_focus_pane_g10

0x0009,

0xf6a3,	// (0x0001a15b) input_focus_pane_g

0x9a61,	// (0x00014519) wait_border_pane_g3_copy1

0x7865,	// (0x0001231d) data_form_pane_t1

0x6814,	// (0x000112cc) wait_anim_pane_g1_copy1

0xa9f0,	// (0x000154a8) data_form_wide_pane_t1

0x7880,	// (0x00012338) list_form_graphic_pane_cp_ParamLimits

0x7880,	// (0x00012338) list_form_graphic_pane_cp

0xa9c5,	// (0x0001547d) slider_form_pane_g1

0xa9ce,	// (0x00015486) slider_form_pane_g2

0x0006,

0xf99b,	// (0x0001a453) slider_form_pane_g

0x7899,	// (0x00012351) list_form_graphic_pane_ParamLimits

0x7899,	// (0x00012351) list_form_graphic_pane

0x78b5,	// (0x0001236d) list_form_graphic_pane_g1

0x78bd,	// (0x00012375) list_form_graphic_pane_t1_ParamLimits

0x78bd,	// (0x00012375) list_form_graphic_pane_t1

0x68fe,	// (0x000113b6) list_highlight_pane_cp5_ParamLimits

0x68fe,	// (0x000113b6) list_highlight_pane_cp5

0x78d2,	// (0x0001238a) find_pane_g1

0x78db,	// (0x00012393) input_find_pane

0x78e4,	// (0x0001239c) input_find_pane_g1_ParamLimits

0x78e4,	// (0x0001239c) input_find_pane_g1

0x78f0,	// (0x000123a8) input_find_pane_t1_ParamLimits

0x78f0,	// (0x000123a8) input_find_pane_t1

0x7905,	// (0x000123bd) input_find_pane_t2_ParamLimits

0x7905,	// (0x000123bd) input_find_pane_t2

0x0001,

0xf6b8,	// (0x0001a170) input_find_pane_t_ParamLimits

0xf6b8,	// (0x0001a170) input_find_pane_t

0x791a,	// (0x000123d2) input_focus_pane_cp5_ParamLimits

0x791a,	// (0x000123d2) input_focus_pane_cp5

0x7934,	// (0x000123ec) bg_popup_window_pane_cp2_ParamLimits

0x7934,	// (0x000123ec) bg_popup_window_pane_cp2

0x7941,	// (0x000123f9) listscroll_menu_pane_ParamLimits

0x7941,	// (0x000123f9) listscroll_menu_pane

0x794d,	// (0x00012405) popup_submenu_window_ParamLimits

0x794d,	// (0x00012405) popup_submenu_window

0x7977,	// (0x0001242f) find_popup_pane_g1

0x797f,	// (0x00012437) input_popup_find_pane_cp

0x791a,	// (0x000123d2) input_focus_pane_cp4_ParamLimits

0x791a,	// (0x000123d2) input_focus_pane_cp4

0x7995,	// (0x0001244d) input_popup_find_pane_t1_ParamLimits

0x7995,	// (0x0001244d) input_popup_find_pane_t1

0x681e,	// (0x000112d6) bg_popup_sub_pane_cp

0x79c3,	// (0x0001247b) listscroll_popup_sub_pane

0x79cb,	// (0x00012483) list_submenu_pane_ParamLimits

0x79cb,	// (0x00012483) list_submenu_pane

0x79dc,	// (0x00012494) scroll_pane_cp4

0x79e4,	// (0x0001249c) list_single_popup_submenu_pane_ParamLimits

0x79e4,	// (0x0001249c) list_single_popup_submenu_pane

0x79f8,	// (0x000124b0) list_single_popup_submenu_pane_g1

0x7a00,	// (0x000124b8) list_single_popup_submenu_pane_t1_ParamLimits

0x7a00,	// (0x000124b8) list_single_popup_submenu_pane_t1

0x68fe,	// (0x000113b6) bg_active_tab_pane_cp1_ParamLimits

0x68fe,	// (0x000113b6) bg_active_tab_pane_cp1

0x7a15,	// (0x000124cd) tabs_2_active_pane_g1

0x7a1d,	// (0x000124d5) tabs_2_active_pane_t1

0x68fe,	// (0x000113b6) bg_passive_tab_pane_cp1_ParamLimits

0x68fe,	// (0x000113b6) bg_passive_tab_pane_cp1

0x7a15,	// (0x000124cd) tabs_2_passive_pane_g1

0x7a1d,	// (0x000124d5) tabs_2_passive_pane_t1

0x7a2f,	// (0x000124e7) bg_active_tab_pane_cp4

0x7a3d,	// (0x000124f5) tabs_2_long_active_pane_t1

0x7a50,	// (0x00012508) bg_passive_tab_pane_cp4

0x56f4,	// (0x000101ac) list_single_midp_graphic_pane_g4_ParamLimits

0x7a2f,	// (0x000124e7) bg_active_tab_pane_cp5

0x7a5c,	// (0x00012514) tabs_3_long_active_pane_t1

0x7a50,	// (0x00012508) bg_passive_tab_pane_cp5

0x56f4,	// (0x000101ac) list_single_midp_graphic_pane_g4

0x68fe,	// (0x000113b6) bg_popup_window_pane_cp13_ParamLimits

0x68fe,	// (0x000113b6) bg_popup_window_pane_cp13

0x7a77,	// (0x0001252f) listscroll_popup_fast_pane_ParamLimits

0x7a77,	// (0x0001252f) listscroll_popup_fast_pane

0x7a86,	// (0x0001253e) grid_popup_fast_pane_ParamLimits

0x7a86,	// (0x0001253e) grid_popup_fast_pane

0x7a98,	// (0x00012550) scroll_pane_cp9_ParamLimits

0x7a98,	// (0x00012550) scroll_pane_cp9

0xc79b,	// (0x00017253) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc79b,	// (0x00017253) list_single_graphic_hl_pane_t1_cp2

0x7abc,	// (0x00012574) input_focus_pane_cp20_ParamLimits

0x7abc,	// (0x00012574) input_focus_pane_cp20

0x7aca,	// (0x00012582) query_popup_data_pane_t1_ParamLimits

0x7aca,	// (0x00012582) query_popup_data_pane_t1

0x7add,	// (0x00012595) query_popup_data_pane_t2_ParamLimits

0x7add,	// (0x00012595) query_popup_data_pane_t2

0x7b23,	// (0x000125db) query_popup_data_pane_t3_ParamLimits

0x7b23,	// (0x000125db) query_popup_data_pane_t3

0x7b64,	// (0x0001261c) query_popup_data_pane_t4_ParamLimits

0x7b64,	// (0x0001261c) query_popup_data_pane_t4

0x7ba0,	// (0x00012658) query_popup_data_pane_t5_ParamLimits

0x7ba0,	// (0x00012658) query_popup_data_pane_t5

0x0004,

0xf6bd,	// (0x0001a175) query_popup_data_pane_t_ParamLimits

0xf6bd,	// (0x0001a175) query_popup_data_pane_t

0x781d,	// (0x000122d5) bg_set_opt_pane_g1

0x7825,	// (0x000122dd) bg_set_opt_pane_g2

0x782d,	// (0x000122e5) bg_set_opt_pane_g3

0x7835,	// (0x000122ed) bg_set_opt_pane_g4

0x783d,	// (0x000122f5) bg_set_opt_pane_g5

0x7845,	// (0x000122fd) bg_set_opt_pane_g6

0x784d,	// (0x00012305) bg_set_opt_pane_g7

0x7855,	// (0x0001230d) bg_set_opt_pane_g8

0x785d,	// (0x00012315) bg_set_opt_pane_g9

0x0008,

0xf6c8,	// (0x0001a180) bg_set_opt_pane_g

0x52fb,	// (0x0000fdb3) control_top_pane_stacon_ParamLimits

0x52fb,	// (0x0000fdb3) control_top_pane_stacon

0x534e,	// (0x0000fe06) signal_pane_stacon_ParamLimits

0x534e,	// (0x0000fe06) signal_pane_stacon

0x81cd,	// (0x00012c85) stacon_top_pane_g1_ParamLimits

0x81cd,	// (0x00012c85) stacon_top_pane_g1

0x5373,	// (0x0000fe2b) title_pane_stacon_ParamLimits

0x5373,	// (0x0000fe2b) title_pane_stacon

0x539d,	// (0x0000fe55) uni_indicator_pane_stacon_ParamLimits

0x539d,	// (0x0000fe55) uni_indicator_pane_stacon

0x53b2,	// (0x0000fe6a) battery_pane_stacon_ParamLimits

0x53b2,	// (0x0000fe6a) battery_pane_stacon

0x53f6,	// (0x0000feae) control_bottom_pane_stacon_ParamLimits

0x53f6,	// (0x0000feae) control_bottom_pane_stacon

0x5419,	// (0x0000fed1) navi_pane_stacon_ParamLimits

0x5419,	// (0x0000fed1) navi_pane_stacon

0x81ef,	// (0x00012ca7) stacon_bottom_pane_g1_ParamLimits

0x81ef,	// (0x00012ca7) stacon_bottom_pane_g1

0x505c,	// (0x0000fb14) aid_levels_signal_lsc_ParamLimits

0x505c,	// (0x0000fb14) aid_levels_signal_lsc

0x5073,	// (0x0000fb2b) signal_pane_stacon_g1_ParamLimits

0x5073,	// (0x0000fb2b) signal_pane_stacon_g1

0x5087,	// (0x0000fb3f) signal_pane_stacon_g2_ParamLimits

0x5087,	// (0x0000fb3f) signal_pane_stacon_g2

0x0001,

0xf6db,	// (0x0001a193) signal_pane_stacon_g_ParamLimits

0xf6db,	// (0x0001a193) signal_pane_stacon_g

0x50bc,	// (0x0000fb74) title_pane_stacon_t1_ParamLimits

0x50bc,	// (0x0000fb74) title_pane_stacon_t1

0x7be4,	// (0x0001269c) uni_indicator_pane_stacon_g1

0x7bee,	// (0x000126a6) uni_indicator_pane_stacon_g2

0x7bf8,	// (0x000126b0) uni_indicator_pane_stacon_g3

0x7c02,	// (0x000126ba) uni_indicator_pane_stacon_g4

0x0003,

0xf6e7,	// (0x0001a19f) uni_indicator_pane_stacon_g

0x50e1,	// (0x0000fb99) control_top_pane_stacon_g1

0x50e9,	// (0x0000fba1) control_top_pane_stacon_t1_ParamLimits

0x50e9,	// (0x0000fba1) control_top_pane_stacon_t1

0x5120,	// (0x0000fbd8) aid_levels_battery_lsc_ParamLimits

0x5120,	// (0x0000fbd8) aid_levels_battery_lsc

0x5138,	// (0x0000fbf0) battery_pane_stacon_g1_ParamLimits

0x5138,	// (0x0000fbf0) battery_pane_stacon_g1

0x514b,	// (0x0000fc03) battery_pane_stacon_g2_ParamLimits

0x514b,	// (0x0000fc03) battery_pane_stacon_g2

0x0001,

0xf6f0,	// (0x0001a1a8) battery_pane_stacon_g_ParamLimits

0xf6f0,	// (0x0001a1a8) battery_pane_stacon_g

0x5189,	// (0x0000fc41) navi_icon_pane_stacon

0x519d,	// (0x0000fc55) navi_navi_pane_stacon

0x5189,	// (0x0000fc41) navi_text_pane_stacon

0x50e1,	// (0x0000fb99) control_bottom_pane_stacon_g1

0x51b1,	// (0x0000fc69) control_bottom_pane_stacon_t1_ParamLimits

0x51b1,	// (0x0000fc69) control_bottom_pane_stacon_t1

0x7c26,	// (0x000126de) grid_app_pane_ParamLimits

0x7c26,	// (0x000126de) grid_app_pane

0x7c4a,	// (0x00012702) scroll_pane_cp15_ParamLimits

0x7c4a,	// (0x00012702) scroll_pane_cp15

0x7c5f,	// (0x00012717) cell_app_pane_ParamLimits

0x7c5f,	// (0x00012717) cell_app_pane

0x7c83,	// (0x0001273b) cell_app_pane_g1_ParamLimits

0x7c83,	// (0x0001273b) cell_app_pane_g1

0x7ca7,	// (0x0001275f) cell_app_pane_g2_ParamLimits

0x7ca7,	// (0x0001275f) cell_app_pane_g2

0x0001,

0xf6f5,	// (0x0001a1ad) cell_app_pane_g_ParamLimits

0xf6f5,	// (0x0001a1ad) cell_app_pane_g

0x7cb3,	// (0x0001276b) cell_app_pane_t1_ParamLimits

0x7cb3,	// (0x0001276b) cell_app_pane_t1

0x7cca,	// (0x00012782) grid_highlight_pane_ParamLimits

0x7cca,	// (0x00012782) grid_highlight_pane

0x781d,	// (0x000122d5) cell_highlight_pane_g1

0x7825,	// (0x000122dd) cell_highlight_pane_g2

0x782d,	// (0x000122e5) cell_highlight_pane_g3

0x7835,	// (0x000122ed) cell_highlight_pane_g4

0x783d,	// (0x000122f5) cell_highlight_pane_g5

0x7845,	// (0x000122fd) cell_highlight_pane_g6

0x784d,	// (0x00012305) cell_highlight_pane_g7

0x7855,	// (0x0001230d) cell_highlight_pane_g8

0x785d,	// (0x00012315) cell_highlight_pane_g9

0x6814,	// (0x000112cc) cell_highlight_pane_g10

0x0009,

0xf6a3,	// (0x0001a15b) cell_highlight_pane_g

0x7cdb,	// (0x00012793) bg_scroll_pane

0x51fb,	// (0x0000fcb3) scroll_handle_pane

0x7d22,	// (0x000127da) scroll_bg_pane_g1

0x7d37,	// (0x000127ef) scroll_bg_pane_g2

0x7d4f,	// (0x00012807) scroll_bg_pane_g3

0x0002,

0xf6fa,	// (0x0001a1b2) scroll_bg_pane_g

0x7d64,	// (0x0001281c) scroll_handle_focus_pane_ParamLimits

0x7d64,	// (0x0001281c) scroll_handle_focus_pane

0x7d22,	// (0x000127da) scroll_handle_pane_g1

0x7d71,	// (0x00012829) scroll_handle_pane_g2

0x7d4f,	// (0x00012807) scroll_handle_pane_g3

0x0002,

0xf701,	// (0x0001a1b9) scroll_handle_pane_g

0x791a,	// (0x000123d2) bg_popup_sub_pane_cp21_ParamLimits

0x791a,	// (0x000123d2) bg_popup_sub_pane_cp21

0x7d85,	// (0x0001283d) popup_fep_japan_predictive_window_t1_ParamLimits

0x7d85,	// (0x0001283d) popup_fep_japan_predictive_window_t1

0x7d9f,	// (0x00012857) popup_fep_japan_predictive_window_t2_ParamLimits

0x7d9f,	// (0x00012857) popup_fep_japan_predictive_window_t2

0x7dd2,	// (0x0001288a) popup_fep_japan_predictive_window_t3_ParamLimits

0x7dd2,	// (0x0001288a) popup_fep_japan_predictive_window_t3

0x0002,

0xf708,	// (0x0001a1c0) popup_fep_japan_predictive_window_t_ParamLimits

0xf708,	// (0x0001a1c0) popup_fep_japan_predictive_window_t

0x681e,	// (0x000112d6) bg_popup_sub_pane_cp23

0x7e09,	// (0x000128c1) listscroll_japin_cand_pane

0x7e11,	// (0x000128c9) popup_fep_japan_candidate_window_t1

0x7e1f,	// (0x000128d7) candidate_pane_ParamLimits

0x7e1f,	// (0x000128d7) candidate_pane

0x7e31,	// (0x000128e9) scroll_pane_cp30

0x7e39,	// (0x000128f1) list_single_popup_jap_candidate_pane_ParamLimits

0x7e39,	// (0x000128f1) list_single_popup_jap_candidate_pane

0x681e,	// (0x000112d6) list_highlight_pane_cp30

0x7e4e,	// (0x00012906) list_single_popup_jap_candidate_pane_t1

0x7e5d,	// (0x00012915) level_1_signal

0x7e6a,	// (0x00012922) level_2_signal

0x7e77,	// (0x0001292f) level_3_signal

0x7e84,	// (0x0001293c) level_4_signal

0x7e91,	// (0x00012949) level_5_signal

0x7e9e,	// (0x00012956) level_6_signal

0x7eab,	// (0x00012963) level_7_signal

0x7e5d,	// (0x00012915) level_1_battery

0x7e6a,	// (0x00012922) level_2_battery

0x7e77,	// (0x0001292f) level_3_battery

0x7e84,	// (0x0001293c) level_4_battery

0x7e91,	// (0x00012949) level_5_battery

0x7e9e,	// (0x00012956) level_6_battery

0x7eab,	// (0x00012963) level_7_battery

0x7ed0,	// (0x00012988) list_menu_pane_ParamLimits

0x7ed0,	// (0x00012988) list_menu_pane

0x7ee1,	// (0x00012999) scroll_pane_cp25_ParamLimits

0x7ee1,	// (0x00012999) scroll_pane_cp25

0x7efa,	// (0x000129b2) list_double2_graphic_pane_cp2_ParamLimits

0x7efa,	// (0x000129b2) list_double2_graphic_pane_cp2

0x7efa,	// (0x000129b2) list_double2_large_graphic_pane_cp2_ParamLimits

0x7efa,	// (0x000129b2) list_double2_large_graphic_pane_cp2

0x7efa,	// (0x000129b2) list_double2_pane_cp2_ParamLimits

0x7efa,	// (0x000129b2) list_double2_pane_cp2

0x7efa,	// (0x000129b2) list_double_graphic_pane_cp2_ParamLimits

0x7efa,	// (0x000129b2) list_double_graphic_pane_cp2

0x7efa,	// (0x000129b2) list_double_large_graphic_pane_cp2_ParamLimits

0x7efa,	// (0x000129b2) list_double_large_graphic_pane_cp2

0x7efa,	// (0x000129b2) list_double_number_pane_cp2_ParamLimits

0x7efa,	// (0x000129b2) list_double_number_pane_cp2

0x7efa,	// (0x000129b2) list_double_pane_cp2_ParamLimits

0x7efa,	// (0x000129b2) list_double_pane_cp2

0x7f1e,	// (0x000129d6) list_single_2graphic_pane_cp2_ParamLimits

0x7f1e,	// (0x000129d6) list_single_2graphic_pane_cp2

0x7f1e,	// (0x000129d6) list_single_graphic_heading_pane_cp2_ParamLimits

0x7f1e,	// (0x000129d6) list_single_graphic_heading_pane_cp2

0x7f1e,	// (0x000129d6) list_single_graphic_pane_cp2_ParamLimits

0x7f1e,	// (0x000129d6) list_single_graphic_pane_cp2

0x7f1e,	// (0x000129d6) list_single_heading_pane_cp2_ParamLimits

0x7f1e,	// (0x000129d6) list_single_heading_pane_cp2

0x7f37,	// (0x000129ef) list_single_large_graphic_pane_cp2_ParamLimits

0x7f37,	// (0x000129ef) list_single_large_graphic_pane_cp2

0x7f1e,	// (0x000129d6) list_single_number_heading_pane_cp2_ParamLimits

0x7f1e,	// (0x000129d6) list_single_number_heading_pane_cp2

0x7f1e,	// (0x000129d6) list_single_number_pane_cp2_ParamLimits

0x7f1e,	// (0x000129d6) list_single_number_pane_cp2

0x7f1e,	// (0x000129d6) list_single_pane_cp2_ParamLimits

0x7f1e,	// (0x000129d6) list_single_pane_cp2

0x7f8d,	// (0x00012a45) bg_popup_sub_pane_cp22

0x52ad,	// (0x0000fd65) popup_side_volume_key_window_g1

0x52d7,	// (0x0000fd8f) popup_side_volume_key_window_t1

0x52f3,	// (0x0000fdab) volume_small_pane_cp1

0x6b93,	// (0x0001164b) bg_popup_sub_pane_cp24_ParamLimits

0x6b93,	// (0x0001164b) bg_popup_sub_pane_cp24

0x7fa3,	// (0x00012a5b) fep_china_uni_candidate_pane_ParamLimits

0x7fa3,	// (0x00012a5b) fep_china_uni_candidate_pane

0x7fb7,	// (0x00012a6f) fep_china_uni_entry_pane

0x7fc7,	// (0x00012a7f) popup_fep_china_uni_window_g1

0x7fe3,	// (0x00012a9b) fep_china_uni_entry_pane_g1

0x7feb,	// (0x00012aa3) fep_china_uni_entry_pane_g2

0x0001,

0xf735,	// (0x0001a1ed) fep_china_uni_entry_pane_g

0x7ff3,	// (0x00012aab) fep_entry_item_pane

0x7ffd,	// (0x00012ab5) fep_candidate_item_pane

0x8005,	// (0x00012abd) fep_china_uni_candidate_pane_g1

0x800d,	// (0x00012ac5) fep_china_uni_candidate_pane_g2

0x8015,	// (0x00012acd) fep_china_uni_candidate_pane_g3

0x801d,	// (0x00012ad5) fep_china_uni_candidate_pane_g4

0x0003,

0xf73a,	// (0x0001a1f2) fep_china_uni_candidate_pane_g

0x6814,	// (0x000112cc) fep_entry_item_pane_g1

0x8025,	// (0x00012add) fep_entry_item_pane_t1_ParamLimits

0x8025,	// (0x00012add) fep_entry_item_pane_t1

0x803b,	// (0x00012af3) fep_candidate_item_pane_t1_ParamLimits

0x803b,	// (0x00012af3) fep_candidate_item_pane_t1

0x8050,	// (0x00012b08) fep_candidate_item_pane_t2_ParamLimits

0x8050,	// (0x00012b08) fep_candidate_item_pane_t2

0x0001,

0xf743,	// (0x0001a1fb) fep_candidate_item_pane_t_ParamLimits

0xf743,	// (0x0001a1fb) fep_candidate_item_pane_t

0x68fe,	// (0x000113b6) list_highlight_pane_cp31_ParamLimits

0x68fe,	// (0x000113b6) list_highlight_pane_cp31

0x8062,	// (0x00012b1a) level_1_signal_lsc

0x806b,	// (0x00012b23) level_2_signal_lsc

0x8074,	// (0x00012b2c) level_3_signal_lsc

0x807d,	// (0x00012b35) level_4_signal_lsc

0x8086,	// (0x00012b3e) level_5_signal_lsc

0x808f,	// (0x00012b47) level_6_signal_lsc

0x8098,	// (0x00012b50) level_7_signal_lsc

0x8098,	// (0x00012b50) level_1_battery_lsc

0x80a1,	// (0x00012b59) level_2_battery_lsc

0x80aa,	// (0x00012b62) level_3_battery_lsc

0x80b3,	// (0x00012b6b) level_4_battery_lsc

0x80bc,	// (0x00012b74) level_5_battery_lsc

0x80c5,	// (0x00012b7d) level_6_battery_lsc

0x8062,	// (0x00012b1a) level_7_battery_lsc

0x80ce,	// (0x00012b86) scroll_handle_focus_pane_g1

0x80d7,	// (0x00012b8f) scroll_handle_focus_pane_g2

0x80e0,	// (0x00012b98) scroll_handle_focus_pane_g3

0x0002,

0xf748,	// (0x0001a200) scroll_handle_focus_pane_g

0x80e9,	// (0x00012ba1) list_single_2graphic_pane_g1_ParamLimits

0x80e9,	// (0x00012ba1) list_single_2graphic_pane_g1

0x71bd,	// (0x00011c75) list_single_2graphic_pane_g2_ParamLimits

0x71bd,	// (0x00011c75) list_single_2graphic_pane_g2

0x7143,	// (0x00011bfb) list_single_2graphic_pane_g3_ParamLimits

0x7143,	// (0x00011bfb) list_single_2graphic_pane_g3

0x80f5,	// (0x00012bad) list_single_2graphic_pane_g4_ParamLimits

0x80f5,	// (0x00012bad) list_single_2graphic_pane_g4

0x0003,

0xf74f,	// (0x0001a207) list_single_2graphic_pane_g_ParamLimits

0xf74f,	// (0x0001a207) list_single_2graphic_pane_g

0x8106,	// (0x00012bbe) list_single_2graphic_pane_t1_ParamLimits

0x8106,	// (0x00012bbe) list_single_2graphic_pane_t1

0x8134,	// (0x00012bec) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x8134,	// (0x00012bec) list_double2_graphic_large_graphic_pane_g1

0x7262,	// (0x00011d1a) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x7262,	// (0x00011d1a) list_double2_graphic_large_graphic_pane_g2

0x7273,	// (0x00011d2b) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x7273,	// (0x00011d2b) list_double2_graphic_large_graphic_pane_g3

0x8144,	// (0x00012bfc) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x8144,	// (0x00012bfc) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf758,	// (0x0001a210) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf758,	// (0x0001a210) list_double2_graphic_large_graphic_pane_g

0x8150,	// (0x00012c08) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x8150,	// (0x00012c08) list_double2_graphic_large_graphic_pane_t1

0x8166,	// (0x00012c1e) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x8166,	// (0x00012c1e) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf761,	// (0x0001a219) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf761,	// (0x0001a219) list_double2_graphic_large_graphic_pane_t

0x82b7,	// (0x00012d6f) popup_fast_swap_window_ParamLimits

0x82b7,	// (0x00012d6f) popup_fast_swap_window

0x82d3,	// (0x00012d8b) popup_side_volume_key_window

0x82ef,	// (0x00012da7) stacon_top_pane

0x82f9,	// (0x00012db1) status_pane_ParamLimits

0x82f9,	// (0x00012db1) status_pane

0x82ef,	// (0x00012da7) status_small_pane

0x681e,	// (0x000112d6) control_pane

0x681e,	// (0x000112d6) stacon_bottom_pane

0x75f6,	// (0x000120ae) scroll_pane_cp121

0x75ed,	// (0x000120a5) set_content_pane

0x8178,	// (0x00012c30) bg_active_tab_pane_g1_cp1

0x8181,	// (0x00012c39) bg_active_tab_pane_g2_cp1

0x818a,	// (0x00012c42) bg_active_tab_pane_g3_cp1

0x8178,	// (0x00012c30) bg_passive_tab_pane_g1_cp1

0x8181,	// (0x00012c39) bg_passive_tab_pane_g2_cp1

0x818a,	// (0x00012c42) bg_passive_tab_pane_g3_cp1

0x8193,	// (0x00012c4b) bg_active_tab_pane_g1_cp2

0x8181,	// (0x00012c39) bg_active_tab_pane_g2_cp2

0x819c,	// (0x00012c54) bg_active_tab_pane_g3_cp2

0x8193,	// (0x00012c4b) bg_passive_tab_pane_g1_cp2

0x8181,	// (0x00012c39) bg_passive_tab_pane_g2_cp2

0x819c,	// (0x00012c54) bg_passive_tab_pane_g3_cp2

0x81a5,	// (0x00012c5d) bg_active_tab_pane_g1_cp3

0x8181,	// (0x00012c39) bg_active_tab_pane_g2_cp3

0x81ae,	// (0x00012c66) bg_active_tab_pane_g3_cp3

0x81a5,	// (0x00012c5d) bg_passive_tab_pane_g1_cp3

0x8181,	// (0x00012c39) bg_passive_tab_pane_g2_cp3

0x81ae,	// (0x00012c66) bg_passive_tab_pane_g3_cp3

0x81b7,	// (0x00012c6f) bg_active_tab_pane_g1_cp4

0x8181,	// (0x00012c39) bg_active_tab_pane_g2_cp4

0x81c2,	// (0x00012c7a) bg_active_tab_pane_g3_cp4

0x81b7,	// (0x00012c6f) bg_passive_tab_pane_g1_cp4

0x8181,	// (0x00012c39) bg_passive_tab_pane_g2_cp4

0x81c2,	// (0x00012c7a) bg_passive_tab_pane_g3_cp4

0x820b,	// (0x00012cc3) bg_active_tab_pane_g1_cp5

0x8181,	// (0x00012c39) bg_active_tab_pane_g2_cp5

0x8214,	// (0x00012ccc) bg_active_tab_pane_g3_cp5

0x820b,	// (0x00012cc3) bg_passive_tab_pane_g1_cp5

0x8181,	// (0x00012c39) bg_passive_tab_pane_g2_cp5

0x8214,	// (0x00012ccc) bg_passive_tab_pane_g3_cp5

0x821d,	// (0x00012cd5) list_set_graphic_pane_ParamLimits

0x821d,	// (0x00012cd5) list_set_graphic_pane

0x681e,	// (0x000112d6) bg_set_opt_pane_cp4

0x823a,	// (0x00012cf2) list_set_graphic_pane_g1_ParamLimits

0x823a,	// (0x00012cf2) list_set_graphic_pane_g1

0x8246,	// (0x00012cfe) list_set_graphic_pane_g2_ParamLimits

0x8246,	// (0x00012cfe) list_set_graphic_pane_g2

0x0001,

0xf766,	// (0x0001a21e) list_set_graphic_pane_g_ParamLimits

0xf766,	// (0x0001a21e) list_set_graphic_pane_g

0x0009,

0xfad0,	// (0x0001a588) volume_small_pane_cp_g

0x826a,	// (0x00012d22) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x826a,	// (0x00012d22) list_double2_large_graphic_pane_g1_cp2

0x8276,	// (0x00012d2e) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8276,	// (0x00012d2e) list_double2_large_graphic_pane_g2_cp2

0x8287,	// (0x00012d3f) list_double2_large_graphic_pane_g3_cp2

0x828f,	// (0x00012d47) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x828f,	// (0x00012d47) list_double2_large_graphic_pane_t1_cp2

0x82a5,	// (0x00012d5d) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x82a5,	// (0x00012d5d) list_double2_large_graphic_pane_t2_cp2

0xa53a,	// (0x00014ff2) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa53a,	// (0x00014ff2) list_double_large_graphic_pane_g1_cp2

0xa54b,	// (0x00015003) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa54b,	// (0x00015003) list_double_large_graphic_pane_g2_cp2

0x8415,	// (0x00012ecd) list_double_large_graphic_pane_g3_cp2

0xa55c,	// (0x00015014) list_double_large_graphic_pane_g4_cp

0xa564,	// (0x0001501c) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa564,	// (0x0001501c) list_double_large_graphic_pane_t1_cp2

0xa57b,	// (0x00015033) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa57b,	// (0x00015033) list_double_large_graphic_pane_t2_cp2

0x8307,	// (0x00012dbf) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8307,	// (0x00012dbf) list_double2_graphic_pane_g1_cp2

0x8315,	// (0x00012dcd) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8315,	// (0x00012dcd) list_double2_graphic_pane_g2_cp2

0x8326,	// (0x00012dde) list_double2_graphic_pane_g3_cp2

0x8330,	// (0x00012de8) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8330,	// (0x00012de8) list_double2_graphic_pane_t1_cp2

0x8346,	// (0x00012dfe) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8346,	// (0x00012dfe) list_double2_graphic_pane_t2_cp2

0x8358,	// (0x00012e10) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8358,	// (0x00012e10) list_single_number_heading_pane_g1_cp2

0x8364,	// (0x00012e1c) list_single_number_heading_pane_g2_cp2

0x836c,	// (0x00012e24) list_single_number_heading_pane_t1_cp2_ParamLimits

0x836c,	// (0x00012e24) list_single_number_heading_pane_t1_cp2

0x8382,	// (0x00012e3a) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8382,	// (0x00012e3a) list_single_number_heading_pane_t2_cp2

0x8394,	// (0x00012e4c) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8394,	// (0x00012e4c) list_single_number_heading_pane_t3_cp2

0x8358,	// (0x00012e10) list_single_heading_pane_g1_cp2_ParamLimits

0x8358,	// (0x00012e10) list_single_heading_pane_g1_cp2

0x8364,	// (0x00012e1c) list_single_heading_pane_g2_cp2

0x836c,	// (0x00012e24) list_single_heading_pane_t1_cp2_ParamLimits

0x836c,	// (0x00012e24) list_single_heading_pane_t1_cp2

0xa342,	// (0x00014dfa) list_single_heading_pane_t2_cp2_ParamLimits

0xa342,	// (0x00014dfa) list_single_heading_pane_t2_cp2

0xa284,	// (0x00014d3c) list_double_graphic_pane_g1_cp2_ParamLimits

0xa284,	// (0x00014d3c) list_double_graphic_pane_g1_cp2

0xa290,	// (0x00014d48) list_double_graphic_pane_g2_cp2_ParamLimits

0xa290,	// (0x00014d48) list_double_graphic_pane_g2_cp2

0xa29f,	// (0x00014d57) list_double_graphic_pane_g3_cp2

0xa2a7,	// (0x00014d5f) list_double_graphic_pane_t1_cp2_ParamLimits

0xa2a7,	// (0x00014d5f) list_double_graphic_pane_t1_cp2

0xa2bd,	// (0x00014d75) list_double_graphic_pane_t2_cp2_ParamLimits

0xa2bd,	// (0x00014d75) list_double_graphic_pane_t2_cp2

0x8409,	// (0x00012ec1) list_double_number_pane_g1_cp2_ParamLimits

0x8409,	// (0x00012ec1) list_double_number_pane_g1_cp2

0x8415,	// (0x00012ecd) list_double_number_pane_g2_cp2

0xa248,	// (0x00014d00) list_double_number_pane_t1_cp2_ParamLimits

0xa248,	// (0x00014d00) list_double_number_pane_t1_cp2

0xa25c,	// (0x00014d14) list_double_number_pane_t2_cp2_ParamLimits

0xa25c,	// (0x00014d14) list_double_number_pane_t2_cp2

0xa272,	// (0x00014d2a) list_double_number_pane_t3_cp2_ParamLimits

0xa272,	// (0x00014d2a) list_double_number_pane_t3_cp2

0xa131,	// (0x00014be9) list_single_graphic_pane_g1_cp2_ParamLimits

0xa131,	// (0x00014be9) list_single_graphic_pane_g1_cp2

0x846d,	// (0x00012f25) list_single_graphic_pane_g2_cp2_ParamLimits

0x846d,	// (0x00012f25) list_single_graphic_pane_g2_cp2

0x8479,	// (0x00012f31) list_single_graphic_pane_g3_cp2

0xa107,	// (0x00014bbf) list_single_graphic_pane_t1_cp2_ParamLimits

0xa107,	// (0x00014bbf) list_single_graphic_pane_t1_cp2

0x846d,	// (0x00012f25) list_single_number_pane_g1_cp2_ParamLimits

0x846d,	// (0x00012f25) list_single_number_pane_g1_cp2

0x8479,	// (0x00012f31) list_single_number_pane_g2_cp2

0xa107,	// (0x00014bbf) list_single_number_pane_t1_cp2_ParamLimits

0xa107,	// (0x00014bbf) list_single_number_pane_t1_cp2

0xa11d,	// (0x00014bd5) list_single_number_pane_t2_cp2_ParamLimits

0xa11d,	// (0x00014bd5) list_single_number_pane_t2_cp2

0x8276,	// (0x00012d2e) list_double2_pane_g1_cp2_ParamLimits

0x8276,	// (0x00012d2e) list_double2_pane_g1_cp2

0x8287,	// (0x00012d3f) list_double2_pane_g2_cp2

0x83e1,	// (0x00012e99) list_double2_pane_t1_cp2_ParamLimits

0x83e1,	// (0x00012e99) list_double2_pane_t1_cp2

0x83f7,	// (0x00012eaf) list_double2_pane_t2_cp2_ParamLimits

0x83f7,	// (0x00012eaf) list_double2_pane_t2_cp2

0x8409,	// (0x00012ec1) list_double_pane_g1_cp2_ParamLimits

0x8409,	// (0x00012ec1) list_double_pane_g1_cp2

0x8415,	// (0x00012ecd) list_double_pane_g2_cp2

0x841d,	// (0x00012ed5) list_double_pane_t1_cp2_ParamLimits

0x841d,	// (0x00012ed5) list_double_pane_t1_cp2

0x8433,	// (0x00012eeb) list_double_pane_t2_cp2_ParamLimits

0x8433,	// (0x00012eeb) list_double_pane_t2_cp2

0x845d,	// (0x00012f15) list_single_pane_cp2_g3

0x846d,	// (0x00012f25) list_single_pane_g1_cp2_ParamLimits

0x846d,	// (0x00012f25) list_single_pane_g1_cp2

0x8479,	// (0x00012f31) list_single_pane_g2_cp2

0x8481,	// (0x00012f39) list_single_pane_t1_cp2_ParamLimits

0x8481,	// (0x00012f39) list_single_pane_t1_cp2

0x8499,	// (0x00012f51) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8499,	// (0x00012f51) list_single_large_graphic_pane_g1_cp2

0x84a5,	// (0x00012f5d) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x84a5,	// (0x00012f5d) list_single_large_graphic_pane_g2_cp2

0x84b1,	// (0x00012f69) list_single_large_graphic_pane_g3_cp2

0x84b9,	// (0x00012f71) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x84b9,	// (0x00012f71) list_single_large_graphic_pane_g4_cp1

0x84d3,	// (0x00012f8b) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x84d3,	// (0x00012f8b) list_single_large_graphic_pane_t1_cp2

0xa0d3,	// (0x00014b8b) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa0d3,	// (0x00014b8b) list_single_graphic_heading_pane_g1_cp2

0xa0a0,	// (0x00014b58) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa0a0,	// (0x00014b58) list_single_graphic_heading_pane_g4_cp2

0x8479,	// (0x00012f31) list_single_graphic_heading_pane_g5_cp2

0xa0df,	// (0x00014b97) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa0df,	// (0x00014b97) list_single_graphic_heading_pane_t1_cp2

0xa0f5,	// (0x00014bad) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa0f5,	// (0x00014bad) list_single_graphic_heading_pane_t2_cp2

0xa094,	// (0x00014b4c) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa094,	// (0x00014b4c) list_single_2graphic_pane_g1_cp2

0xa0a0,	// (0x00014b58) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa0a0,	// (0x00014b58) list_single_2graphic_pane_g2_cp2

0x8479,	// (0x00012f31) list_single_2graphic_pane_g3_cp2

0xa0b1,	// (0x00014b69) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa0b1,	// (0x00014b69) list_single_2graphic_pane_g4_cp2

0xa0bd,	// (0x00014b75) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa0bd,	// (0x00014b75) list_single_2graphic_pane_t1_cp2

0x6814,	// (0x000112cc) list_highlight_pane_g10_cp1

0x9c6c,	// (0x00014724) list_highlight_pane_g1_cp1

0x9c74,	// (0x0001472c) list_highlight_pane_g2_cp1

0x9c7c,	// (0x00014734) list_highlight_pane_g3_cp1

0x9c84,	// (0x0001473c) list_highlight_pane_g4_cp1

0x9c8c,	// (0x00014744) list_highlight_pane_g5_cp1

0x9c94,	// (0x0001474c) list_highlight_pane_g6_cp1

0x9c9c,	// (0x00014754) list_highlight_pane_g7_cp1

0x9ca4,	// (0x0001475c) list_highlight_pane_g8_cp1

0x9cac,	// (0x00014764) list_highlight_pane_g9_cp1

0x9b8c,	// (0x00014644) form_field_slider_pane_t3

0x9b9a,	// (0x00014652) form_field_slider_pane_t4

0x9ba8,	// (0x00014660) slider_form_pane_ParamLimits

0x9ba8,	// (0x00014660) slider_form_pane

0x681e,	// (0x000112d6) control_abbreviations

0x681e,	// (0x000112d6) control_conventions

0x681e,	// (0x000112d6) control_definitions

0x681e,	// (0x000112d6) format_table_attribute

0xa38c,	// (0x00014e44) bg_popup_preview_window_pane_g9

0x681e,	// (0x000112d6) format_table_data2

0x681e,	// (0x000112d6) format_table_data3

0x681e,	// (0x000112d6) format_table_data_example

0x0008,

0x681e,	// (0x000112d6) intro_purpose

0xf8fb,	// (0x0001a3b3) bg_popup_preview_window_pane_g

0x681e,	// (0x000112d6) texts_category

0x681e,	// (0x000112d6) texts_graphics

0x84e9,	// (0x00012fa1) text_digital

0x84f8,	// (0x00012fb0) text_primary

0x8507,	// (0x00012fbf) text_primary_small

0x8516,	// (0x00012fce) text_secondary

0x8525,	// (0x00012fdd) text_title

0xabb3,	// (0x0001566b) bg_passive_tab_pane_g1_cp3_srt

0x8181,	// (0x00012c39) bg_passive_tab_pane_g2_cp3_srt

0xabbc,	// (0x00015674) bg_passive_tab_pane_g3_cp3_srt

0x68fe,	// (0x000113b6) bg_active_tab_pane_cp3_srt_ParamLimits

0x68fe,	// (0x000113b6) bg_active_tab_pane_cp3_srt

0xabc5,	// (0x0001567d) tabs_4_active_pane_srt_g1

0xabcd,	// (0x00015685) tabs_4_active_pane_srt_t1_ParamLimits

0xabcd,	// (0x00015685) tabs_4_active_pane_srt_t1

0xabb3,	// (0x0001566b) bg_active_tab_pane_g1_cp3_copy1

0x8181,	// (0x00012c39) bg_active_tab_pane_g2_cp3_copy1

0xabbc,	// (0x00015674) bg_active_tab_pane_g3_cp3_copy1

0x68fe,	// (0x000113b6) tabs_2_long_active_pane_srt_ParamLimits

0x68fe,	// (0x000113b6) tabs_2_long_active_pane_srt

0x68fe,	// (0x000113b6) tabs_2_long_passive_pane_srt_ParamLimits

0x68fe,	// (0x000113b6) tabs_2_long_passive_pane_srt

0x7a50,	// (0x00012508) bg_passive_tab_pane_cp4_srt_ParamLimits

0x7a50,	// (0x00012508) bg_passive_tab_pane_cp4_srt

0xa7f8,	// (0x000152b0) bg_passive_tab_pane_g1_cp4_srt

0x8181,	// (0x00012c39) bg_passive_tab_pane_g2_cp4_srt

0xa801,	// (0x000152b9) bg_passive_tab_pane_g3_cp4_srt

0x7a2f,	// (0x000124e7) bg_active_tab_pane_cp4_srt_ParamLimits

0x7a2f,	// (0x000124e7) bg_active_tab_pane_cp4_srt

0xa80a,	// (0x000152c2) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa80a,	// (0x000152c2) tabs_2_long_active_pane_srt_t1

0xa7f8,	// (0x000152b0) bg_active_tab_pane_g1_cp4_srt

0x8181,	// (0x00012c39) bg_active_tab_pane_g2_cp4_srt

0xa801,	// (0x000152b9) bg_active_tab_pane_g3_cp4_srt

0x6b93,	// (0x0001164b) tabs_3_long_active_pane_srt_ParamLimits

0x6b93,	// (0x0001164b) tabs_3_long_active_pane_srt

0x6b93,	// (0x0001164b) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x6b93,	// (0x0001164b) tabs_3_long_passive_pane_cp_srt

0x6b93,	// (0x0001164b) tabs_3_long_passive_pane_srt_ParamLimits

0x6b93,	// (0x0001164b) tabs_3_long_passive_pane_srt

0x7a50,	// (0x00012508) bg_passive_tab_pane_cp5_srt_ParamLimits

0x7a50,	// (0x00012508) bg_passive_tab_pane_cp5_srt

0x820b,	// (0x00012cc3) bg_passive_tab_pane_g1_cp5_srt

0x8181,	// (0x00012c39) bg_passive_tab_pane_g2_cp5_srt

0x8214,	// (0x00012ccc) bg_passive_tab_pane_g3_cp5_srt

0x7a2f,	// (0x000124e7) bg_active_tab_pane_cp5_srt_ParamLimits

0x7a2f,	// (0x000124e7) bg_active_tab_pane_cp5_srt

0xa7e6,	// (0x0001529e) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa7e6,	// (0x0001529e) tabs_3_long_active_pane_srt_t1

0x820b,	// (0x00012cc3) bg_active_tab_pane_g1_cp5_srt

0x8181,	// (0x00012c39) bg_active_tab_pane_g2_cp5_srt

0x8214,	// (0x00012ccc) bg_active_tab_pane_g3_cp5_srt

0xa7d8,	// (0x00015290) navi_text_pane_srt_t1

0xa7d0,	// (0x00015288) navi_icon_pane_srt_g1

0x86f8,	// (0x000131b0) midp_editing_number_pane_srt

0x8534,	// (0x00012fec) midp_ticker_pane_srt

0x8700,	// (0x000131b8) midp_ticker_pane_srt_g1

0x8708,	// (0x000131c0) midp_ticker_pane_srt_g2

0x0001,

0xf785,	// (0x0001a23d) midp_ticker_pane_srt_g

0x8710,	// (0x000131c8) midp_ticker_pane_srt_t1

0xa7c1,	// (0x00015279) midp_editing_number_pane_t1_copy1

0x853c,	// (0x00012ff4) listscroll_midp_pane

0x853c,	// (0x00012ff4) midp_form_pane

0x85aa,	// (0x00013062) midp_info_popup_window_ParamLimits

0x85aa,	// (0x00013062) midp_info_popup_window

0x791a,	// (0x000123d2) bg_popup_sub_pane_cp50_ParamLimits

0x791a,	// (0x000123d2) bg_popup_sub_pane_cp50

0x98a4,	// (0x0001435c) listscroll_midp_info_pane_ParamLimits

0x98a4,	// (0x0001435c) listscroll_midp_info_pane

0x988c,	// (0x00014344) listscroll_form_midp_pane_ParamLimits

0x988c,	// (0x00014344) listscroll_form_midp_pane

0x9898,	// (0x00014350) scroll_bar_cp050

0x986c,	// (0x00014324) list_midp_pane

0xb7d4,	// (0x0001628c) signal_pane_g2_cp

0x97a6,	// (0x0001425e) listscroll_midp_info_pane_t1_ParamLimits

0x97a6,	// (0x0001425e) listscroll_midp_info_pane_t1

0x97be,	// (0x00014276) listscroll_midp_info_pane_t2_ParamLimits

0x97be,	// (0x00014276) listscroll_midp_info_pane_t2

0x97fc,	// (0x000142b4) listscroll_midp_info_pane_t3_ParamLimits

0x97fc,	// (0x000142b4) listscroll_midp_info_pane_t3

0x9836,	// (0x000142ee) listscroll_midp_info_pane_t4_ParamLimits

0x9836,	// (0x000142ee) listscroll_midp_info_pane_t4

0x0003,

0xf836,	// (0x0001a2ee) listscroll_midp_info_pane_t_ParamLimits

0xf836,	// (0x0001a2ee) listscroll_midp_info_pane_t

0x79dc,	// (0x00012494) scroll_pane_cp21

0x9744,	// (0x000141fc) form_midp_field_choice_group_pane

0x974d,	// (0x00014205) form_midp_field_text_pane

0x978c,	// (0x00014244) form_midp_field_time_pane

0x9794,	// (0x0001424c) form_midp_gauge_slider_pane

0x979d,	// (0x00014255) form_midp_gauge_wait_pane

0x681e,	// (0x000112d6) form_midp_image_pane

0x9715,	// (0x000141cd) list_single_midp_pane_ParamLimits

0x9715,	// (0x000141cd) list_single_midp_pane

0x96cd,	// (0x00014185) form_midp_field_text_pane_t1

0x94b0,	// (0x00013f68) input_focus_pane_cp050

0x9704,	// (0x000141bc) list_midp_form_text_pane

0x969c,	// (0x00014154) form_midp_field_choice_group_pane_t1

0x96aa,	// (0x00014162) input_focus_pane_cp051

0x96be,	// (0x00014176) list_midp_choice_pane

0x681e,	// (0x000112d6) status_idle_pane

0x9680,	// (0x00014138) form_midp_field_time_pane_t1

0x6814,	// (0x000112cc) wait_anim_pane_g2_copy1

0x968e,	// (0x00014146) form_midp_field_time_pane_t2

0x0001,

0x8658,	// (0x00013110) aid_navinavi_width_2_pane

0xf831,	// (0x0001a2e9) form_midp_field_time_pane_t

0x681e,	// (0x000112d6) input_focus_pane_cp052

0x681e,	// (0x000112d6) bg_input_focus_pane_cp040

0x9640,	// (0x000140f8) form_midp_gauge_slider_pane_t1

0x964e,	// (0x00014106) form_midp_gauge_slider_pane_t2

0x965c,	// (0x00014114) form_midp_gauge_slider_pane_t3

0x966a,	// (0x00014122) form_midp_gauge_slider_pane_t4

0x0003,

0xf828,	// (0x0001a2e0) form_midp_gauge_slider_pane_t

0x9678,	// (0x00014130) form_midp_slider_pane

0x68fe,	// (0x000113b6) bg_input_focus_pane_cp041_ParamLimits

0x68fe,	// (0x000113b6) bg_input_focus_pane_cp041

0x960d,	// (0x000140c5) form_midp_gauge_wait_pane_t1_ParamLimits

0x960d,	// (0x000140c5) form_midp_gauge_wait_pane_t1

0x961f,	// (0x000140d7) form_midp_gauge_wait_pane_t2_ParamLimits

0x961f,	// (0x000140d7) form_midp_gauge_wait_pane_t2

0x0001,

0xf823,	// (0x0001a2db) form_midp_gauge_wait_pane_t_ParamLimits

0xf823,	// (0x0001a2db) form_midp_gauge_wait_pane_t

0x9631,	// (0x000140e9) form_midp_wait_pane_ParamLimits

0x9631,	// (0x000140e9) form_midp_wait_pane

0x95d7,	// (0x0001408f) form_midp_image_pane_g1

0x95e0,	// (0x00014098) form_midp_image_pane_t1

0x95ef,	// (0x000140a7) form_midp_image_pane_t2

0x95fe,	// (0x000140b6) form_midp_image_pane_t3

0x0002,

0xf81c,	// (0x0001a2d4) form_midp_image_pane_t

0x95bf,	// (0x00014077) list_single_midp_pane_g1

0x95c8,	// (0x00014080) list_single_midp_pane_t1

0x9597,	// (0x0001404f) list_midp_form_item_pane_ParamLimits

0x9597,	// (0x0001404f) list_midp_form_item_pane

0x8600,	// (0x000130b8) list_midp_form_item_pane_t1

0x860f,	// (0x000130c7) midp_ticker_pane_g1

0x861b,	// (0x000130d3) midp_ticker_pane_g2

0x0001,

0xf76b,	// (0x0001a223) midp_ticker_pane_g

0x8627,	// (0x000130df) midp_ticker_pane_t1

0xaa45,	// (0x000154fd) midp_editing_number_pane_t1

0xaa23,	// (0x000154db) midp_editing_number_pane

0xaa32,	// (0x000154ea) midp_ticker_pane

0xa789,	// (0x00015241) ai_message_heading_pane

0x681e,	// (0x000112d6) bg_popup_window_pane_cp14

0xa791,	// (0x00015249) listscroll_ai_message_pane

0xa713,	// (0x000151cb) ai_message_heading_pane_g1_ParamLimits

0xa713,	// (0x000151cb) ai_message_heading_pane_g1

0xa71f,	// (0x000151d7) ai_message_heading_pane_g2_ParamLimits

0xa71f,	// (0x000151d7) ai_message_heading_pane_g2

0xa72b,	// (0x000151e3) ai_message_heading_pane_g3_ParamLimits

0xa72b,	// (0x000151e3) ai_message_heading_pane_g3

0xa737,	// (0x000151ef) ai_message_heading_pane_g4_ParamLimits

0xa737,	// (0x000151ef) ai_message_heading_pane_g4

0x0003,

0xf95d,	// (0x0001a415) ai_message_heading_pane_g_ParamLimits

0xf95d,	// (0x0001a415) ai_message_heading_pane_g

0xa743,	// (0x000151fb) ai_message_heading_pane_t1_ParamLimits

0xa743,	// (0x000151fb) ai_message_heading_pane_t1

0xa75d,	// (0x00015215) ai_message_heading_pane_t2_ParamLimits

0xa75d,	// (0x00015215) ai_message_heading_pane_t2

0x0001,

0xf966,	// (0x0001a41e) ai_message_heading_pane_t_ParamLimits

0xf966,	// (0x0001a41e) ai_message_heading_pane_t

0xa76f,	// (0x00015227) bg_popup_heading_pane_cp1_ParamLimits

0xa76f,	// (0x00015227) bg_popup_heading_pane_cp1

0xa701,	// (0x000151b9) list_ai_message_pane_ParamLimits

0xa701,	// (0x000151b9) list_ai_message_pane

0x79dc,	// (0x00012494) scroll_pane_cp10

0xa69d,	// (0x00015155) list_ai_message_pane_g1

0xa6a5,	// (0x0001515d) list_ai_message_pane_g2

0x0001,

0xf93a,	// (0x0001a3f2) list_ai_message_pane_g

0xa6ad,	// (0x00015165) list_ai_message_pane_t1_ParamLimits

0xa6ad,	// (0x00015165) list_ai_message_pane_t1

0xa6c2,	// (0x0001517a) list_ai_message_pane_t2_ParamLimits

0xa6c2,	// (0x0001517a) list_ai_message_pane_t2

0xa6d7,	// (0x0001518f) list_ai_message_pane_t3_ParamLimits

0xa6d7,	// (0x0001518f) list_ai_message_pane_t3

0xa6ec,	// (0x000151a4) list_ai_message_pane_t4_ParamLimits

0xa6ec,	// (0x000151a4) list_ai_message_pane_t4

0x0003,

0xf93f,	// (0x0001a3f7) list_ai_message_pane_t_ParamLimits

0xf93f,	// (0x0001a3f7) list_ai_message_pane_t

0xa688,	// (0x00015140) cell_ai_soft_ind_pane_ParamLimits

0xa688,	// (0x00015140) cell_ai_soft_ind_pane

0x8639,	// (0x000130f1) cell_ai_soft_ind_pane_g1_ParamLimits

0x8639,	// (0x000130f1) cell_ai_soft_ind_pane_g1

0x681e,	// (0x000112d6) grid_highlight_cp1

0x8646,	// (0x000130fe) text_secondary_cp56_ParamLimits

0x8646,	// (0x000130fe) text_secondary_cp56

0xa65d,	// (0x00015115) example_general_pane_ParamLimits

0xa65d,	// (0x00015115) example_general_pane

0xa669,	// (0x00015121) example_parent_pane_g1_ParamLimits

0xa669,	// (0x00015121) example_parent_pane_g1

0xa675,	// (0x0001512d) example_parent_pane_t1_ParamLimits

0xa675,	// (0x0001512d) example_parent_pane_t1

0x8c4f,	// (0x00013707) popup_preview_text_window_ParamLimits

0x8c4f,	// (0x00013707) popup_preview_text_window

0x8465,	// (0x00012f1d) list_single_pane_cp2_g4

0x6c49,	// (0x00011701) bg_popup_preview_window_pane_ParamLimits

0x6c49,	// (0x00011701) bg_popup_preview_window_pane

0xa394,	// (0x00014e4c) popup_preview_text_window_t1_ParamLimits

0xa394,	// (0x00014e4c) popup_preview_text_window_t1

0xa3b2,	// (0x00014e6a) popup_preview_text_window_t2_ParamLimits

0xa3b2,	// (0x00014e6a) popup_preview_text_window_t2

0xa3fb,	// (0x00014eb3) popup_preview_text_window_t3_ParamLimits

0xa3fb,	// (0x00014eb3) popup_preview_text_window_t3

0xa440,	// (0x00014ef8) popup_preview_text_window_t4_ParamLimits

0xa440,	// (0x00014ef8) popup_preview_text_window_t4

0x0004,

0xf90e,	// (0x0001a3c6) popup_preview_text_window_t_ParamLimits

0xf90e,	// (0x0001a3c6) popup_preview_text_window_t

0xa4be,	// (0x00014f76) scroll_pane_cp11

0x9396,	// (0x00013e4e) bg_popup_preview_window_pane_g1

0xa354,	// (0x00014e0c) bg_popup_preview_window_pane_g2

0xa35c,	// (0x00014e14) bg_popup_preview_window_pane_g3

0xa364,	// (0x00014e1c) bg_popup_preview_window_pane_g4

0xa36c,	// (0x00014e24) bg_popup_preview_window_pane_g5

0xa374,	// (0x00014e2c) bg_popup_preview_window_pane_g6

0xa37c,	// (0x00014e34) bg_popup_preview_window_pane_g7

0xa384,	// (0x00014e3c) bg_popup_preview_window_pane_g8

0x4be8,	// (0x0000f6a0) aid_popup_width_pane

0x8c2d,	// (0x000136e5) popup_midp_note_alarm_window_ParamLimits

0x8c2d,	// (0x000136e5) popup_midp_note_alarm_window

0x76b7,	// (0x0001216f) data_form_pane_ParamLimits

0x76c3,	// (0x0001217b) form_field_data_pane_g1

0x76cd,	// (0x00012185) form_field_data_pane_t1_ParamLimits

0x76e5,	// (0x0001219d) input_focus_pane_ParamLimits

0x76f3,	// (0x000121ab) data_form_wide_pane_ParamLimits

0x76ff,	// (0x000121b7) form_field_data_wide_pane_g1

0x772b,	// (0x000121e3) form_field_data_wide_pane_t1_ParamLimits

0x6ef5,	// (0x000119ad) input_focus_pane_cp6_ParamLimits

0x7989,	// (0x00012441) input_popup_find_pane_g1_ParamLimits

0x7989,	// (0x00012441) input_popup_find_pane_g1

0x515c,	// (0x0000fc14) aid_navi_side_left_pane

0x5171,	// (0x0000fc29) aid_navi_side_right_pane

0x9d67,	// (0x0001481f) bg_popup_window_pane_cp30_ParamLimits

0x9d67,	// (0x0001481f) bg_popup_window_pane_cp30

0x9de1,	// (0x00014899) popup_midp_note_alarm_window_g1_ParamLimits

0x9de1,	// (0x00014899) popup_midp_note_alarm_window_g1

0x9e11,	// (0x000148c9) popup_midp_note_alarm_window_t1_ParamLimits

0x9e11,	// (0x000148c9) popup_midp_note_alarm_window_t1

0x9eb2,	// (0x0001496a) popup_midp_note_alarm_window_t2_ParamLimits

0x9eb2,	// (0x0001496a) popup_midp_note_alarm_window_t2

0x9f60,	// (0x00014a18) popup_midp_note_alarm_window_t3_ParamLimits

0x9f60,	// (0x00014a18) popup_midp_note_alarm_window_t3

0x9f92,	// (0x00014a4a) popup_midp_note_alarm_window_t4_ParamLimits

0x9f92,	// (0x00014a4a) popup_midp_note_alarm_window_t4

0x9fb8,	// (0x00014a70) popup_midp_note_alarm_window_t5_ParamLimits

0x9fb8,	// (0x00014a70) popup_midp_note_alarm_window_t5

0x000a,

0xf8ab,	// (0x0001a363) popup_midp_note_alarm_window_t_ParamLimits

0xf8ab,	// (0x0001a363) popup_midp_note_alarm_window_t

0xa064,	// (0x00014b1c) wait_bar_pane_cp1_ParamLimits

0xa064,	// (0x00014b1c) wait_bar_pane_cp1

0x681e,	// (0x000112d6) wait_anim_pane_copy1

0x681e,	// (0x000112d6) wait_border_pane_copy1

0x9a4d,	// (0x00014505) wait_border_pane_g1_copy1

0x7745,	// (0x000121fd) form_field_popup_pane_g1

0x774d,	// (0x00012205) form_field_popup_pane_t1_ParamLimits

0x76e5,	// (0x0001219d) input_focus_pane_cp7_ParamLimits

0x7765,	// (0x0001221d) list_form_pane_ParamLimits

0x7771,	// (0x00012229) form_field_popup_wide_pane_g1

0x7779,	// (0x00012231) form_field_popup_wide_pane_t1_ParamLimits

0x76e5,	// (0x0001219d) input_focus_pane_cp8_ParamLimits

0x778e,	// (0x00012246) list_form_wide_pane_ParamLimits

0xac3f,	// (0x000156f7) aid_size_cell_graphic_pane

0x7865,	// (0x0001231d) data_form_pane_t1_ParamLimits

0xa9f0,	// (0x000154a8) data_form_wide_pane_t1_ParamLimits

0x8f30,	// (0x000139e8) bg_status_flat_pane

0x685e,	// (0x00011316) title_pane_t1_ParamLimits

0x68c6,	// (0x0001137e) title_pane_t2_ParamLimits

0x68ec,	// (0x000113a4) title_pane_t3_ParamLimits

0xf573,	// (0x0001a02b) title_pane_t_ParamLimits

0x7e5d,	// (0x00012915) level_1_signal_ParamLimits

0x7e6a,	// (0x00012922) level_2_signal_ParamLimits

0x7e77,	// (0x0001292f) level_3_signal_ParamLimits

0x7e84,	// (0x0001293c) level_4_signal_ParamLimits

0x7e91,	// (0x00012949) level_5_signal_ParamLimits

0x7e9e,	// (0x00012956) level_6_signal_ParamLimits

0x7eab,	// (0x00012963) level_7_signal_ParamLimits

0x7e5d,	// (0x00012915) level_1_battery_ParamLimits

0x7e6a,	// (0x00012922) level_2_battery_ParamLimits

0x7e77,	// (0x0001292f) level_3_battery_ParamLimits

0x7e84,	// (0x0001293c) level_4_battery_ParamLimits

0x7e91,	// (0x00012949) level_5_battery_ParamLimits

0x7e9e,	// (0x00012956) level_6_battery_ParamLimits

0x7eab,	// (0x00012963) level_7_battery_ParamLimits

0x9c6c,	// (0x00014724) bg_status_flat_pane_g1

0x9c74,	// (0x0001472c) bg_status_flat_pane_g2

0x9c7c,	// (0x00014734) bg_status_flat_pane_g3

0x9c84,	// (0x0001473c) bg_status_flat_pane_g4

0x9c8c,	// (0x00014744) bg_status_flat_pane_g5

0x9c94,	// (0x0001474c) bg_status_flat_pane_g6

0x9c9c,	// (0x00014754) bg_status_flat_pane_g7

0x6914,	// (0x000113cc) tabs_3_active_pane_t1_ParamLimits

0x6914,	// (0x000113cc) tabs_3_passive_pane_t1_ParamLimits

0x692e,	// (0x000113e6) tabs_4_active_pane_t1_ParamLimits

0x692e,	// (0x000113e6) tabs_4_1_passive_pane_t1_ParamLimits

0x7a1d,	// (0x000124d5) tabs_2_active_pane_t1_ParamLimits

0x7a1d,	// (0x000124d5) tabs_2_passive_pane_t1_ParamLimits

0x7a2f,	// (0x000124e7) bg_active_tab_pane_cp4_ParamLimits

0x7a3d,	// (0x000124f5) tabs_2_long_active_pane_t1_ParamLimits

0x7a50,	// (0x00012508) bg_passive_tab_pane_cp4_ParamLimits

0x5728,	// (0x000101e0) list_single_midp_graphic_pane_t1_ParamLimits

0x7a2f,	// (0x000124e7) bg_active_tab_pane_cp5_ParamLimits

0x7a5c,	// (0x00012514) tabs_3_long_active_pane_t1_ParamLimits

0x7a50,	// (0x00012508) bg_passive_tab_pane_cp5_ParamLimits

0x5728,	// (0x000101e0) list_single_midp_graphic_pane_t1

0x8f30,	// (0x000139e8) bg_status_flat_pane_ParamLimits

0x8ff3,	// (0x00013aab) indicator_pane_cp2_ParamLimits

0x8ff3,	// (0x00013aab) indicator_pane_cp2

0x9117,	// (0x00013bcf) navi_pane_srt_ParamLimits

0x9117,	// (0x00013bcf) navi_pane_srt

0x913b,	// (0x00013bf3) popup_clock_digital_analogue_window_cp1

0x69f5,	// (0x000114ad) indicator_pane_t1

0x8534,	// (0x00012fec) copy_highlight_pane

0x8534,	// (0x00012fec) cursor_graphics_pane

0x8534,	// (0x00012fec) graphic_within_text_pane

0x8534,	// (0x00012fec) link_highlight_pane

0xa481,	// (0x00014f39) popup_preview_text_window_t5_ParamLimits

0xa481,	// (0x00014f39) popup_preview_text_window_t5

0x8660,	// (0x00013118) cursor_digital_pane

0x8660,	// (0x00013118) cursor_primary_pane

0x8671,	// (0x00013129) cursor_primary_small_pane

0x8679,	// (0x00013131) cursor_secondary_pane

0x8681,	// (0x00013139) cursor_title_pane

0x8660,	// (0x00013118) link_highlight_digital_pane

0x8668,	// (0x00013120) link_highlight_primary_pane

0x8671,	// (0x00013129) link_highlight_primary_small_pane

0x8679,	// (0x00013131) link_highlight_secondary_pane

0x8681,	// (0x00013139) link_highlight_title_pane

0x8660,	// (0x00013118) copy_highlight_digital_pane

0x8660,	// (0x00013118) copy_highlight_primary_pane

0x8671,	// (0x00013129) copy_highlight_primary_small_pane

0x8679,	// (0x00013131) copy_highlight_secondary_pane

0x8681,	// (0x00013139) copy_highlight_title_pane

0x8679,	// (0x00013131) graphic_text_digital_pane

0x9d0a,	// (0x000147c2) graphic_text_primary_pane

0x9d13,	// (0x000147cb) graphic_text_primary_small_pane

0x8671,	// (0x00013129) graphic_text_secondary_pane

0x8660,	// (0x00013118) graphic_text_title_pane

0x8689,	// (0x00013141) cursor_primary_pane_g1

0x9cfc,	// (0x000147b4) cursor_text_primary_t1

0x9ce4,	// (0x0001479c) cursor_primary_small_pane_g1

0x9cee,	// (0x000147a6) cursor_text_primary_small_t1

0x9ccc,	// (0x00014784) cursor_primary_small_pane_g1_copy1

0x9cd6,	// (0x0001478e) cursor_text_primary_small_t1_copy1

0x9cb4,	// (0x0001476c) cursor_text_title_t1

0x9cc2,	// (0x0001477a) cursor_title_pane_g1

0x8689,	// (0x00013141) cursor_digital_pane_g1

0x8693,	// (0x0001314b) cursor_text_digital_t1

0x86b8,	// (0x00013170) link_highlight_primary_pane_g1

0x9c5d,	// (0x00014715) link_highlight_primary_pane_t1

0x86a1,	// (0x00013159) link_highlight_primary_small_pane_g1

0x86a9,	// (0x00013161) link_highlight_primary_small_pane_t1

0x86b8,	// (0x00013170) link_highlight_secondary_pane_g1

0x86c0,	// (0x00013178) link_highlight_secondary_pane_t1

0x9bd1,	// (0x00014689) link_highlight_title_pane_g1

0x9bd9,	// (0x00014691) link_highlight_title_pane_t1

0x9bba,	// (0x00014672) link_highlight_digital_pane_g1

0x9bc2,	// (0x0001467a) link_highlight_digital_pane_t1

0x9a92,	// (0x0001454a) copy_highlight_primary_pane_g1

0x9a9a,	// (0x00014552) copy_highlight_primary_pane_t1

0x9a6c,	// (0x00014524) copy_highlight_primary_small_pane_g1

0x9a83,	// (0x0001453b) copy_highlight_primary_small_pane_t1

0x86cf,	// (0x00013187) copy_highlight_secondary_pane_g1

0x86d7,	// (0x0001318f) copy_highlight_secondary_pane_t1

0x9a6c,	// (0x00014524) copy_highlight_title_pane_g1

0x9a74,	// (0x0001452c) copy_highlight_title_pane_t1

0x9a92,	// (0x0001454a) copy_highlight_digital_pane_g1

0xae09,	// (0x000158c1) copy_highlight_digital_pane_t1

0xad5d,	// (0x00015815) graphic_text_primary_pane_g1

0xaded,	// (0x000158a5) graphic_text_primary_pane_t1

0xadfb,	// (0x000158b3) graphic_text_primary_pane_t2

0x0001,

0xf9da,	// (0x0001a492) graphic_text_primary_pane_t

0xadc9,	// (0x00015881) graphic_text_primary_small_pane_g1

0xadd1,	// (0x00015889) graphic_text_primary_small_pane_t1

0xaddf,	// (0x00015897) graphic_text_primary_small_pane_t2

0x0001,

0xf9d5,	// (0x0001a48d) graphic_text_primary_small_pane_t

0xada5,	// (0x0001585d) graphic_text_secondary_pane_g1

0xadad,	// (0x00015865) graphic_text_secondary_pane_t1

0xadbb,	// (0x00015873) graphic_text_secondary_pane_t2

0x0001,

0xf9d0,	// (0x0001a488) graphic_text_secondary_pane_t

0xad81,	// (0x00015839) graphic_text_title_pane_g1

0xad89,	// (0x00015841) graphic_text_title_pane_t1

0xad97,	// (0x0001584f) graphic_text_title_pane_t2

0x0001,

0xf9cb,	// (0x0001a483) graphic_text_title_pane_t

0xad5d,	// (0x00015815) graphic_text_digital_pane_g1

0xad65,	// (0x0001581d) graphic_text_digital_pane_t1

0xad73,	// (0x0001582b) graphic_text_digital_pane_t2

0x0001,

0xf9c6,	// (0x0001a47e) graphic_text_digital_pane_t

0x68fe,	// (0x000113b6) navi_icon_pane_srt_ParamLimits

0x68fe,	// (0x000113b6) navi_icon_pane_srt

0x681e,	// (0x000112d6) navi_midp_pane_srt

0x681e,	// (0x000112d6) navi_navi_pane_srt

0x68fe,	// (0x000113b6) navi_text_pane_srt_ParamLimits

0x68fe,	// (0x000113b6) navi_text_pane_srt

0xad28,	// (0x000157e0) navi_navi_icon_text_pane_srt

0xad30,	// (0x000157e8) navi_navi_pane_srt_g1_ParamLimits

0xad30,	// (0x000157e8) navi_navi_pane_srt_g1

0xad42,	// (0x000157fa) navi_navi_pane_srt_g2_ParamLimits

0xad42,	// (0x000157fa) navi_navi_pane_srt_g2

0x0001,

0xf9c1,	// (0x0001a479) navi_navi_pane_srt_g_ParamLimits

0xf9c1,	// (0x0001a479) navi_navi_pane_srt_g

0xad54,	// (0x0001580c) navi_navi_tabs_pane_srt

0xad28,	// (0x000157e0) navi_navi_text_pane_srt

0xad28,	// (0x000157e0) navi_navi_volume_pane_srt

0xad19,	// (0x000157d1) navi_navi_text_pane_srt_t1

0x5aa2,	// (0x0001055a) navi_navi_volume_pane_srt_g1

0x5aaa,	// (0x00010562) volume_small_pane_srt_ParamLimits

0x5aaa,	// (0x00010562) volume_small_pane_srt

0x543c,	// (0x0000fef4) volume_small_pane_srt_g1_ParamLimits

0x543c,	// (0x0000fef4) volume_small_pane_srt_g1

0x544c,	// (0x0000ff04) volume_small_pane_srt_g2_ParamLimits

0x544c,	// (0x0000ff04) volume_small_pane_srt_g2

0x545d,	// (0x0000ff15) volume_small_pane_srt_g3_ParamLimits

0x545d,	// (0x0000ff15) volume_small_pane_srt_g3

0x546e,	// (0x0000ff26) volume_small_pane_srt_g4_ParamLimits

0x546e,	// (0x0000ff26) volume_small_pane_srt_g4

0x547f,	// (0x0000ff37) volume_small_pane_srt_g5_ParamLimits

0x547f,	// (0x0000ff37) volume_small_pane_srt_g5

0x5490,	// (0x0000ff48) volume_small_pane_srt_g6_ParamLimits

0x5490,	// (0x0000ff48) volume_small_pane_srt_g6

0x54a1,	// (0x0000ff59) volume_small_pane_srt_g7_ParamLimits

0x54a1,	// (0x0000ff59) volume_small_pane_srt_g7

0x54b2,	// (0x0000ff6a) volume_small_pane_srt_g8_ParamLimits

0x54b2,	// (0x0000ff6a) volume_small_pane_srt_g8

0x54c3,	// (0x0000ff7b) volume_small_pane_srt_g9_ParamLimits

0x54c3,	// (0x0000ff7b) volume_small_pane_srt_g9

0x54d4,	// (0x0000ff8c) volume_small_pane_srt_g10_ParamLimits

0x54d4,	// (0x0000ff8c) volume_small_pane_srt_g10

0x0009,

0xf770,	// (0x0001a228) volume_small_pane_srt_g_ParamLimits

0xf770,	// (0x0001a228) volume_small_pane_srt_g

0x6cf2,	// (0x000117aa) query_popup_data_pane_cp2

0xacff,	// (0x000157b7) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xacff,	// (0x000157b7) navi_navi_icon_text_pane_srt_t1

0x9d0a,	// (0x000147c2) navi_tabs_2_long_pane_srt

0x9d0a,	// (0x000147c2) navi_tabs_2_pane_srt

0x9d0a,	// (0x000147c2) navi_tabs_3_long_pane_srt

0x9d0a,	// (0x000147c2) navi_tabs_3_pane_srt

0x9d0a,	// (0x000147c2) navi_tabs_4_pane_srt

0x5a82,	// (0x0001053a) tabs_2_active_pane_srt_ParamLimits

0x5a82,	// (0x0001053a) tabs_2_active_pane_srt

0x5a92,	// (0x0001054a) tabs_2_passive_pane_srt_ParamLimits

0x5a92,	// (0x0001054a) tabs_2_passive_pane_srt

0x88be,	// (0x00013376) bg_passive_tab_pane_cp1_srt_ParamLimits

0x88be,	// (0x00013376) bg_passive_tab_pane_cp1_srt

0xaccb,	// (0x00015783) bg_passive_tab_pane_g1_cp1_srt

0x8181,	// (0x00012c39) bg_passive_tab_pane_g2_cp1_srt

0xacd4,	// (0x0001578c) bg_passive_tab_pane_g3_cp1_srt

0x68fe,	// (0x000113b6) bg_active_tab_pane_cp1_srt_ParamLimits

0x68fe,	// (0x000113b6) bg_active_tab_pane_cp1_srt

0xacdd,	// (0x00015795) tabs_2_active_pane_srt_g1

0xace5,	// (0x0001579d) tabs_2_active_pane_srt_t1_ParamLimits

0xace5,	// (0x0001579d) tabs_2_active_pane_srt_t1

0xaccb,	// (0x00015783) bg_active_tab_pane_g1_cp1_srt

0x8181,	// (0x00012c39) bg_active_tab_pane_g2_cp1_srt

0xacd4,	// (0x0001578c) bg_active_tab_pane_g3_cp1_srt

0x5a4f,	// (0x00010507) tabs_3_active_pane_srt_ParamLimits

0x5a4f,	// (0x00010507) tabs_3_active_pane_srt

0x5a60,	// (0x00010518) tabs_3_passive_pane_cp_srt_ParamLimits

0x5a60,	// (0x00010518) tabs_3_passive_pane_cp_srt

0x5a71,	// (0x00010529) tabs_3_passive_pane_srt_ParamLimits

0x5a71,	// (0x00010529) tabs_3_passive_pane_srt

0x88be,	// (0x00013376) bg_passive_tab_pane_cp2_srt_ParamLimits

0x88be,	// (0x00013376) bg_passive_tab_pane_cp2_srt

0x86e6,	// (0x0001319e) bg_passive_tab_pane_g1_cp2_srt

0x8181,	// (0x00012c39) bg_passive_tab_pane_g2_cp2_srt

0x86ef,	// (0x000131a7) bg_passive_tab_pane_g3_cp2_srt

0x68fe,	// (0x000113b6) bg_active_tab_pane_cp2_srt_ParamLimits

0x68fe,	// (0x000113b6) bg_active_tab_pane_cp2_srt

0xacb1,	// (0x00015769) tabs_3_active_pane_srt_g1

0xacb9,	// (0x00015771) tabs_3_active_pane_srt_t1_ParamLimits

0xacb9,	// (0x00015771) tabs_3_active_pane_srt_t1

0x86e6,	// (0x0001319e) bg_active_tab_pane_g1_cp2_srt

0x8181,	// (0x00012c39) bg_active_tab_pane_g2_cp2_srt

0x86ef,	// (0x000131a7) bg_active_tab_pane_g3_cp2_srt

0x5a07,	// (0x000104bf) tabs_4_active_pane_srt_ParamLimits

0x5a07,	// (0x000104bf) tabs_4_active_pane_srt

0x5a19,	// (0x000104d1) tabs_4_passive_pane_cp2_srt_ParamLimits

0x5a19,	// (0x000104d1) tabs_4_passive_pane_cp2_srt

0x8844,	// (0x000132fc) aid_size_cell_toolbar

0x7a50,	// (0x00012508) main_idle_act_pane_ParamLimits

0x8a63,	// (0x0001351b) popup_large_graphic_colour_window_ParamLimits

0x8dca,	// (0x00013882) popup_toolbar_window_ParamLimits

0x8dca,	// (0x00013882) popup_toolbar_window

0xaa6f,	// (0x00015527) list_single_graphic_2heading_pane_ParamLimits

0xaa6f,	// (0x00015527) list_single_graphic_2heading_pane

0x7c0c,	// (0x000126c4) aid_size_cell_apps_grid_lsc_pane

0x7c1e,	// (0x000126d6) aid_size_cell_apps_grid_prt_pane

0x88be,	// (0x00013376) bg_wml_button_pane_cp1_ParamLimits

0x88be,	// (0x00013376) bg_wml_button_pane_cp1

0x96cd,	// (0x00014185) form_midp_field_text_pane_t1_ParamLimits

0x94b0,	// (0x00013f68) input_focus_pane_cp050_ParamLimits

0x9704,	// (0x000141bc) list_midp_form_text_pane_ParamLimits

0x96aa,	// (0x00014162) input_focus_pane_cp051_ParamLimits

0x96be,	// (0x00014176) list_midp_choice_pane_ParamLimits

0x9541,	// (0x00013ff9) list_single_2graphic_pane_cp3_ParamLimits

0x9541,	// (0x00013ff9) list_single_2graphic_pane_cp3

0x9565,	// (0x0001401d) list_single_midp_graphic_pane_ParamLimits

0x9565,	// (0x0001401d) list_single_midp_graphic_pane

0x562b,	// (0x000100e3) list_single_graphic_2heading_pane_g1_ParamLimits

0x562b,	// (0x000100e3) list_single_graphic_2heading_pane_g1

0x5637,	// (0x000100ef) list_single_graphic_2heading_pane_g4_ParamLimits

0x5637,	// (0x000100ef) list_single_graphic_2heading_pane_g4

0x5643,	// (0x000100fb) list_single_graphic_2heading_pane_g5_ParamLimits

0x5643,	// (0x000100fb) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c3,	// (0x0001a27b) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c3,	// (0x0001a27b) list_single_graphic_2heading_pane_g

0x564f,	// (0x00010107) list_single_graphic_2heading_pane_t1_ParamLimits

0x564f,	// (0x00010107) list_single_graphic_2heading_pane_t1

0x5663,	// (0x0001011b) list_single_graphic_2heading_pane_t2_ParamLimits

0x5663,	// (0x0001011b) list_single_graphic_2heading_pane_t2

0x567f,	// (0x00010137) list_single_graphic_2heading_pane_t3_ParamLimits

0x567f,	// (0x00010137) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ca,	// (0x0001a282) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ca,	// (0x0001a282) list_single_graphic_2heading_pane_t

0x929a,	// (0x00013d52) bg_popup_sub_pane_cp2

0x92c4,	// (0x00013d7c) grid_toobar_pane

0x5697,	// (0x0001014f) cell_toolbar_pane_ParamLimits

0x5697,	// (0x0001014f) cell_toolbar_pane

0x933a,	// (0x00013df2) cell_toolbar_pane_g1_ParamLimits

0x933a,	// (0x00013df2) cell_toolbar_pane_g1

0x934e,	// (0x00013e06) cell_toolbar_pane_g2_ParamLimits

0x934e,	// (0x00013e06) cell_toolbar_pane_g2

0x0001,

0xf7d8,	// (0x0001a290) cell_toolbar_pane_g_ParamLimits

0xf7d8,	// (0x0001a290) cell_toolbar_pane_g

0x9370,	// (0x00013e28) grid_highlight_pane_cp2_ParamLimits

0x9370,	// (0x00013e28) grid_highlight_pane_cp2

0x938a,	// (0x00013e42) toolbar_button_pane

0x9396,	// (0x00013e4e) toolbar_button_pane_g1

0x939e,	// (0x00013e56) toolbar_button_pane_g2

0x93a6,	// (0x00013e5e) toolbar_button_pane_g3

0x93ae,	// (0x00013e66) toolbar_button_pane_g4

0x93b6,	// (0x00013e6e) toolbar_button_pane_g5

0x93be,	// (0x00013e76) toolbar_button_pane_g6

0x93c6,	// (0x00013e7e) toolbar_button_pane_g7

0x93ce,	// (0x00013e86) toolbar_button_pane_g8

0x93d6,	// (0x00013e8e) toolbar_button_pane_g9

0x0009,

0xf7dd,	// (0x0001a295) toolbar_button_pane_g

0x56cf,	// (0x00010187) list_single_2graphic_pane_g1_cp3_ParamLimits

0x56cf,	// (0x00010187) list_single_2graphic_pane_g1_cp3

0x56db,	// (0x00010193) list_single_2graphic_pane_g2_cp3_ParamLimits

0x56db,	// (0x00010193) list_single_2graphic_pane_g2_cp3

0x56ec,	// (0x000101a4) list_single_2graphic_pane_g3_cp3

0x56f4,	// (0x000101ac) list_single_2graphic_pane_g4_cp3_ParamLimits

0x56f4,	// (0x000101ac) list_single_2graphic_pane_g4_cp3

0x5700,	// (0x000101b8) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5700,	// (0x000101b8) list_single_2graphic_pane_t1_cp3

0x571c,	// (0x000101d4) list_single_midp_graphic_pane_g2_ParamLimits

0x571c,	// (0x000101d4) list_single_midp_graphic_pane_g2

0x884c,	// (0x00013304) aid_zoom_text_primary

0x8854,	// (0x0001330c) aid_zoom_text_secondary

0x87a3,	// (0x0001325b) status_small_pane_g7_ParamLimits

0x87a3,	// (0x0001325b) status_small_pane_g7

0x87c6,	// (0x0001327e) status_small_pane_t1_ParamLimits

0x6835,	// (0x000112ed) title_pane_g2

0x0003,

0xf56a,	// (0x0001a022) title_pane_g

0x6d93,	// (0x0001184b) aid_size_cell_colour_1_pane_ParamLimits

0x6d93,	// (0x0001184b) aid_size_cell_colour_1_pane

0x6da7,	// (0x0001185f) aid_size_cell_colour_2_pane_ParamLimits

0x6da7,	// (0x0001185f) aid_size_cell_colour_2_pane

0x6dbb,	// (0x00011873) aid_size_cell_colour_3_pane_ParamLimits

0x6dbb,	// (0x00011873) aid_size_cell_colour_3_pane

0x6dcf,	// (0x00011887) aid_size_cell_colour_4_pane_ParamLimits

0x6dcf,	// (0x00011887) aid_size_cell_colour_4_pane

0x5098,	// (0x0000fb50) title_pane_stacon_g1_ParamLimits

0x5098,	// (0x0000fb50) title_pane_stacon_g1

0x9af1,	// (0x000145a9) popup_note_wait_window_g3_ParamLimits

0x9af1,	// (0x000145a9) popup_note_wait_window_g3

0x9b67,	// (0x0001461f) popup_note_wait_window_t5_ParamLimits

0x9b67,	// (0x0001461f) popup_note_wait_window_t5

0x681e,	// (0x000112d6) main_feb_china_hwr_fs_writing_pane

0x8948,	// (0x00013400) popup_feb_china_hwr_fs_window_ParamLimits

0x8948,	// (0x00013400) popup_feb_china_hwr_fs_window

0x573e,	// (0x000101f6) aid_size_cell_hwr_fs_ParamLimits

0x573e,	// (0x000101f6) aid_size_cell_hwr_fs

0x94b0,	// (0x00013f68) bg_popup_sub_pane_cp3_ParamLimits

0x94b0,	// (0x00013f68) bg_popup_sub_pane_cp3

0x5753,	// (0x0001020b) grid_hwr_fs_pane_ParamLimits

0x5753,	// (0x0001020b) grid_hwr_fs_pane

0x576b,	// (0x00010223) linegrid_hwr_fs_pane_ParamLimits

0x576b,	// (0x00010223) linegrid_hwr_fs_pane

0x577b,	// (0x00010233) cell_hwr_fs_pane_ParamLimits

0x577b,	// (0x00010233) cell_hwr_fs_pane

0x94bc,	// (0x00013f74) linegrid_hwr_fs_pane_g1_ParamLimits

0x94bc,	// (0x00013f74) linegrid_hwr_fs_pane_g1

0x94c8,	// (0x00013f80) linegrid_hwr_fs_pane_g2_ParamLimits

0x94c8,	// (0x00013f80) linegrid_hwr_fs_pane_g2

0x94da,	// (0x00013f92) linegrid_hwr_fs_pane_g3_ParamLimits

0x94da,	// (0x00013f92) linegrid_hwr_fs_pane_g3

0x579d,	// (0x00010255) linegrid_hwr_fs_pane_g4_ParamLimits

0x579d,	// (0x00010255) linegrid_hwr_fs_pane_g4

0x57b7,	// (0x0001026f) linegrid_hwr_fs_pane_g5_ParamLimits

0x57b7,	// (0x0001026f) linegrid_hwr_fs_pane_g5

0x0004,

0xf808,	// (0x0001a2c0) linegrid_hwr_fs_pane_g_ParamLimits

0xf808,	// (0x0001a2c0) linegrid_hwr_fs_pane_g

0x94e6,	// (0x00013f9e) cell_hwr_fs_pane_g1_ParamLimits

0x94e6,	// (0x00013f9e) cell_hwr_fs_pane_g1

0x91d1,	// (0x00013c89) cell_hwr_fs_pane_g2_ParamLimits

0x91d1,	// (0x00013c89) cell_hwr_fs_pane_g2

0x94fc,	// (0x00013fb4) cell_hwr_fs_pane_g3_ParamLimits

0x94fc,	// (0x00013fb4) cell_hwr_fs_pane_g3

0x9509,	// (0x00013fc1) cell_hwr_fs_pane_g4_ParamLimits

0x9509,	// (0x00013fc1) cell_hwr_fs_pane_g4

0x0003,

0xf813,	// (0x0001a2cb) cell_hwr_fs_pane_g_ParamLimits

0xf813,	// (0x0001a2cb) cell_hwr_fs_pane_g

0x57cd,	// (0x00010285) cell_hwr_fs_pane_t1

0x681e,	// (0x000112d6) grid_highlight_pane_cp6

0x681e,	// (0x000112d6) main_idle_act2_pane

0x79c3,	// (0x0001247b) aid_inside_area_popup_secondary

0xa19e,	// (0x00014c56) aid_inside_area_window_primary_ParamLimits

0xa19e,	// (0x00014c56) aid_inside_area_window_primary

0xae18,	// (0x000158d0) ai2_news_ticker_pane

0xae20,	// (0x000158d8) aid_size_cell_ai1_link_ParamLimits

0xae20,	// (0x000158d8) aid_size_cell_ai1_link

0xae3a,	// (0x000158f2) popup_ai2_data_window_ParamLimits

0xae3a,	// (0x000158f2) popup_ai2_data_window

0xae50,	// (0x00015908) popup_ai2_link_window_ParamLimits

0xae50,	// (0x00015908) popup_ai2_link_window

0x94b0,	// (0x00013f68) bg_popup_sub_pane_cp4_ParamLimits

0x94b0,	// (0x00013f68) bg_popup_sub_pane_cp4

0xae64,	// (0x0001591c) grid_ai2_link_pane_ParamLimits

0xae64,	// (0x0001591c) grid_ai2_link_pane

0xae7b,	// (0x00015933) popup_ai2_link_window_g1_ParamLimits

0xae7b,	// (0x00015933) popup_ai2_link_window_g1

0xae87,	// (0x0001593f) popup_ai2_link_window_g2_ParamLimits

0xae87,	// (0x0001593f) popup_ai2_link_window_g2

0x0001,

0xf9df,	// (0x0001a497) popup_ai2_link_window_g_ParamLimits

0xf9df,	// (0x0001a497) popup_ai2_link_window_g

0xae96,	// (0x0001594e) ai2_mp_button_pane

0xae9e,	// (0x00015956) ai2_mp_volume_pane

0x96aa,	// (0x00014162) bg_popup_sub_pane_cp5_ParamLimits

0x96aa,	// (0x00014162) bg_popup_sub_pane_cp5

0xaea6,	// (0x0001595e) heading_ai2_gene_pane_ParamLimits

0xaea6,	// (0x0001595e) heading_ai2_gene_pane

0xaeb2,	// (0x0001596a) list_ai2_gene_pane_ParamLimits

0xaeb2,	// (0x0001596a) list_ai2_gene_pane

0xaefa,	// (0x000159b2) cell_ai2_link_pane_ParamLimits

0xaefa,	// (0x000159b2) cell_ai2_link_pane

0xaf10,	// (0x000159c8) cell_ai2_link_pane_g1

0x681e,	// (0x000112d6) grid_highlight_pane_cp7

0x5abf,	// (0x00010577) ai2_mp_volume_pane_g1

0xafe0,	// (0x00015a98) ai2_mp_volume_pane_g2

0xaf55,	// (0x00015a0d) list_ai2_gene_pane_t1

0xafe8,	// (0x00015aa0) ai2_mp_volume_pane_g3

0x0002,

0xf9f8,	// (0x0001a4b0) ai2_mp_volume_pane_g

0x5ac7,	// (0x0001057f) volume_small_pane_cp3

0xaff0,	// (0x00015aa8) aid_size_cell_ai2_button

0xaff8,	// (0x00015ab0) grid_ai2_button_pane

0xb001,	// (0x00015ab9) cell_ai2_button_pane_ParamLimits

0xb001,	// (0x00015ab9) cell_ai2_button_pane

0x6814,	// (0x000112cc) cell_ai2_button_pane_g1

0x681e,	// (0x000112d6) grid_highlight_pane_cp8

0xafa0,	// (0x00015a58) ai2_gene_pane_t1_ParamLimits

0xafa0,	// (0x00015a58) ai2_gene_pane_t1

0x883a,	// (0x000132f2) aid_height_parent_landscape

0xa858,	// (0x00015310) aid_height_set_list

0xa869,	// (0x00015321) aid_size_parent

0xac3f,	// (0x000156f7) aid_size_cell_graphic_pane_ParamLimits

0xaec2,	// (0x0001597a) popup_ai2_data_window_g1_ParamLimits

0xaec2,	// (0x0001597a) popup_ai2_data_window_g1

0xaece,	// (0x00015986) ai2_news_ticker_pane_g1

0xaed6,	// (0x0001598e) ai2_news_ticker_pane_g2

0x0001,

0xf9e4,	// (0x0001a49c) ai2_news_ticker_pane_g

0xaede,	// (0x00015996) ai2_news_ticker_pane_t1

0xaeec,	// (0x000159a4) ai2_news_ticker_pane_t2

0x0001,

0xf9e9,	// (0x0001a4a1) ai2_news_ticker_pane_t

0xaf19,	// (0x000159d1) heading_ai2_gene_pane_g1

0xaf21,	// (0x000159d9) heading_ai2_gene_pane_t1_ParamLimits

0xaf21,	// (0x000159d9) heading_ai2_gene_pane_t1

0xaf36,	// (0x000159ee) list_highlight_pane_cp6

0xaf3e,	// (0x000159f6) ai2_gene_pane_ParamLimits

0xaf3e,	// (0x000159f6) ai2_gene_pane

0xaf63,	// (0x00015a1b) list_ai2_gene_pane_t2

0x0001,

0xf9ee,	// (0x0001a4a6) list_ai2_gene_pane_t

0xaf71,	// (0x00015a29) list_highlight_pane_cp8_ParamLimits

0xaf71,	// (0x00015a29) list_highlight_pane_cp8

0xaf82,	// (0x00015a3a) ai2_gene_pane_g1_ParamLimits

0xaf82,	// (0x00015a3a) ai2_gene_pane_g1

0xaf94,	// (0x00015a4c) ai2_gene_pane_g2_ParamLimits

0xaf94,	// (0x00015a4c) ai2_gene_pane_g2

0x0001,

0xf9f3,	// (0x0001a4ab) ai2_gene_pane_g_ParamLimits

0xf9f3,	// (0x0001a4ab) ai2_gene_pane_g

0x711a,	// (0x00011bd2) scroll_pane_cp12

0x55ea,	// (0x000100a2) control_pane_t3_ParamLimits

0x55ea,	// (0x000100a2) control_pane_t3

0x87b7,	// (0x0001326f) status_small_pane_g8_ParamLimits

0x87b7,	// (0x0001326f) status_small_pane_g8

0x8a2e,	// (0x000134e6) popup_find_window_ParamLimits

0x8c41,	// (0x000136f9) popup_note_image_window_ParamLimits

0x9300,	// (0x00013db8) list_double2_graphic_pane_vc_g1_ParamLimits

0x9300,	// (0x00013db8) list_double2_graphic_pane_vc_g1

0x930c,	// (0x00013dc4) list_double2_graphic_pane_vc_g2_ParamLimits

0x930c,	// (0x00013dc4) list_double2_graphic_pane_vc_g2

0x9318,	// (0x00013dd0) list_double2_graphic_pane_vc_g3_ParamLimits

0x9318,	// (0x00013dd0) list_double2_graphic_pane_vc_g3

0x0002,

0xf7d1,	// (0x0001a289) list_double2_graphic_pane_vc_g_ParamLimits

0xf7d1,	// (0x0001a289) list_double2_graphic_pane_vc_g

0x9324,	// (0x00013ddc) list_double2_graphic_pane_vc_t1_ParamLimits

0x9324,	// (0x00013ddc) list_double2_graphic_pane_vc_t1

0x930c,	// (0x00013dc4) list_single_heading_pane_vc_g1_ParamLimits

0x930c,	// (0x00013dc4) list_single_heading_pane_vc_g1

0x9318,	// (0x00013dd0) list_single_heading_pane_vc_g2_ParamLimits

0x9318,	// (0x00013dd0) list_single_heading_pane_vc_g2

0x0001,

0xf7f2,	// (0x0001a2aa) list_single_heading_pane_vc_g_ParamLimits

0xf7f2,	// (0x0001a2aa) list_single_heading_pane_vc_g

0x93de,	// (0x00013e96) list_single_heading_pane_vc_t1_ParamLimits

0x93de,	// (0x00013e96) list_single_heading_pane_vc_t1

0x93f4,	// (0x00013eac) list_single_heading_pane_vc_t2_ParamLimits

0x93f4,	// (0x00013eac) list_single_heading_pane_vc_t2

0x0001,

0xf7f7,	// (0x0001a2af) list_single_heading_pane_vc_t_ParamLimits

0xf7f7,	// (0x0001a2af) list_single_heading_pane_vc_t

0x9408,	// (0x00013ec0) list_setting_number_pane_vc_g1_ParamLimits

0x9408,	// (0x00013ec0) list_setting_number_pane_vc_g1

0x9414,	// (0x00013ecc) list_setting_number_pane_vc_g2_ParamLimits

0x9414,	// (0x00013ecc) list_setting_number_pane_vc_g2

0x0001,

0xf7fc,	// (0x0001a2b4) list_setting_number_pane_vc_g_ParamLimits

0xf7fc,	// (0x0001a2b4) list_setting_number_pane_vc_g

0x9420,	// (0x00013ed8) list_setting_number_pane_vc_t1_ParamLimits

0x9420,	// (0x00013ed8) list_setting_number_pane_vc_t1

0x9434,	// (0x00013eec) list_setting_number_pane_vc_t2_ParamLimits

0x9434,	// (0x00013eec) list_setting_number_pane_vc_t2

0x9450,	// (0x00013f08) list_setting_number_pane_vc_t3_ParamLimits

0x9450,	// (0x00013f08) list_setting_number_pane_vc_t3

0x0002,

0xf801,	// (0x0001a2b9) list_setting_number_pane_vc_t_ParamLimits

0xf801,	// (0x0001a2b9) list_setting_number_pane_vc_t

0x9476,	// (0x00013f2e) set_value_pane_vc_ParamLimits

0x9476,	// (0x00013f2e) set_value_pane_vc

0xaa6f,	// (0x00015527) list_double2_graphic_pane_vc_ParamLimits

0xaa6f,	// (0x00015527) list_double2_graphic_pane_vc

0xaa81,	// (0x00015539) list_double2_large_graphic_pane_vc_ParamLimits

0xaa81,	// (0x00015539) list_double2_large_graphic_pane_vc

0xaa6f,	// (0x00015527) list_double2_pane_vc_ParamLimits

0xaa6f,	// (0x00015527) list_double2_pane_vc

0xaa6f,	// (0x00015527) list_double_graphic_heading_pane_vc_ParamLimits

0xaa6f,	// (0x00015527) list_double_graphic_heading_pane_vc

0xaa6f,	// (0x00015527) list_double_graphic_pane_vc_ParamLimits

0xaa6f,	// (0x00015527) list_double_graphic_pane_vc

0xaa6f,	// (0x00015527) list_double_heading_pane_vc_ParamLimits

0xaa6f,	// (0x00015527) list_double_heading_pane_vc

0xaa81,	// (0x00015539) list_double_large_graphic_pane_vc_ParamLimits

0xaa81,	// (0x00015539) list_double_large_graphic_pane_vc

0xaa6f,	// (0x00015527) list_double_number_pane_vc_ParamLimits

0xaa6f,	// (0x00015527) list_double_number_pane_vc

0xaa6f,	// (0x00015527) list_double_pane_vc_ParamLimits

0xaa6f,	// (0x00015527) list_double_pane_vc

0xaa6f,	// (0x00015527) list_double_time_pane_vc_ParamLimits

0xaa6f,	// (0x00015527) list_double_time_pane_vc

0xaa6f,	// (0x00015527) list_setting_number_pane_vc_ParamLimits

0xaa6f,	// (0x00015527) list_setting_number_pane_vc

0xaa6f,	// (0x00015527) list_setting_pane_vc_ParamLimits

0xaa6f,	// (0x00015527) list_setting_pane_vc

0xaa6f,	// (0x00015527) list_single_graphic_heading_pane_vc_ParamLimits

0xaa6f,	// (0x00015527) list_single_graphic_heading_pane_vc

0xaa6f,	// (0x00015527) list_single_heading_pane_vc_ParamLimits

0xaa6f,	// (0x00015527) list_single_heading_pane_vc

0xaa92,	// (0x0001554a) list_single_number_heading_pane_vc_ParamLimits

0xaa92,	// (0x0001554a) list_single_number_heading_pane_vc

0xb035,	// (0x00015aed) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xb035,	// (0x00015aed) list_double_graphic_heading_pane_vc_g1

0x930c,	// (0x00013dc4) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x930c,	// (0x00013dc4) list_double_graphic_heading_pane_vc_g2

0x9318,	// (0x00013dd0) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x9318,	// (0x00013dd0) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ff,	// (0x0001a4b7) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ff,	// (0x0001a4b7) list_double_graphic_heading_pane_vc_g

0xb041,	// (0x00015af9) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xb041,	// (0x00015af9) list_double_graphic_heading_pane_vc_t1

0x93de,	// (0x00013e96) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x93de,	// (0x00013e96) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa06,	// (0x0001a4be) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa06,	// (0x0001a4be) list_double_graphic_heading_pane_vc_t

0x9408,	// (0x00013ec0) list_setting_pane_vc_g1_ParamLimits

0x9408,	// (0x00013ec0) list_setting_pane_vc_g1

0x9414,	// (0x00013ecc) list_setting_pane_vc_g2_ParamLimits

0x9414,	// (0x00013ecc) list_setting_pane_vc_g2

0x0001,

0xf7fc,	// (0x0001a2b4) list_setting_pane_vc_g_ParamLimits

0xf7fc,	// (0x0001a2b4) list_setting_pane_vc_g

0xb259,	// (0x00015d11) list_setting_pane_vc_t1_ParamLimits

0xb259,	// (0x00015d11) list_setting_pane_vc_t1

0xb26d,	// (0x00015d25) list_setting_pane_vc_t2_ParamLimits

0xb26d,	// (0x00015d25) list_setting_pane_vc_t2

0x0001,

0xfa34,	// (0x0001a4ec) list_setting_pane_vc_t_ParamLimits

0xfa34,	// (0x0001a4ec) list_setting_pane_vc_t

0x9476,	// (0x00013f2e) set_value_pane_cp_vc_ParamLimits

0x9476,	// (0x00013f2e) set_value_pane_cp_vc

0x930c,	// (0x00013dc4) list_single_number_heading_pane_vc_g1_ParamLimits

0x930c,	// (0x00013dc4) list_single_number_heading_pane_vc_g1

0x9318,	// (0x00013dd0) list_single_number_heading_pane_vc_g2_ParamLimits

0x9318,	// (0x00013dd0) list_single_number_heading_pane_vc_g2

0x0001,

0xf7f2,	// (0x0001a2aa) list_single_number_heading_pane_vc_g_ParamLimits

0xf7f2,	// (0x0001a2aa) list_single_number_heading_pane_vc_g

0x93de,	// (0x00013e96) list_single_number_heading_pane_vc_t1_ParamLimits

0x93de,	// (0x00013e96) list_single_number_heading_pane_vc_t1

0xb28f,	// (0x00015d47) list_single_number_heading_pane_vc_t2_ParamLimits

0xb28f,	// (0x00015d47) list_single_number_heading_pane_vc_t2

0xb2a3,	// (0x00015d5b) list_single_number_heading_pane_vc_t3_ParamLimits

0xb2a3,	// (0x00015d5b) list_single_number_heading_pane_vc_t3

0x0002,

0xfa39,	// (0x0001a4f1) list_single_number_heading_pane_vc_t_ParamLimits

0xfa39,	// (0x0001a4f1) list_single_number_heading_pane_vc_t

0x9300,	// (0x00013db8) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x9300,	// (0x00013db8) list_single_graphic_heading_pane_vc_g1

0x930c,	// (0x00013dc4) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x930c,	// (0x00013dc4) list_single_graphic_heading_pane_vc_g4

0x9318,	// (0x00013dd0) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x9318,	// (0x00013dd0) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7d1,	// (0x0001a289) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7d1,	// (0x0001a289) list_single_graphic_heading_pane_vc_g

0x93de,	// (0x00013e96) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x93de,	// (0x00013e96) list_single_graphic_heading_pane_vc_t1

0xb2b5,	// (0x00015d6d) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xb2b5,	// (0x00015d6d) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa40,	// (0x0001a4f8) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa40,	// (0x0001a4f8) list_single_graphic_heading_pane_vc_t

0x930c,	// (0x00013dc4) list_double2_pane_vc_g1_ParamLimits

0x930c,	// (0x00013dc4) list_double2_pane_vc_g1

0x9318,	// (0x00013dd0) list_double2_pane_vc_g2_ParamLimits

0x9318,	// (0x00013dd0) list_double2_pane_vc_g2

0x0001,

0xf7f2,	// (0x0001a2aa) list_double2_pane_vc_g_ParamLimits

0xf7f2,	// (0x0001a2aa) list_double2_pane_vc_g

0xb2c9,	// (0x00015d81) list_double2_pane_vc_t1_ParamLimits

0xb2c9,	// (0x00015d81) list_double2_pane_vc_t1

0xb2df,	// (0x00015d97) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xb2df,	// (0x00015d97) list_double2_large_graphic_pane_vc_g1

0xb2eb,	// (0x00015da3) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xb2eb,	// (0x00015da3) list_double2_large_graphic_pane_vc_g2

0xb2f7,	// (0x00015daf) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xb2f7,	// (0x00015daf) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa45,	// (0x0001a4fd) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa45,	// (0x0001a4fd) list_double2_large_graphic_pane_vc_g

0xb303,	// (0x00015dbb) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xb303,	// (0x00015dbb) list_double2_large_graphic_pane_vc_t1

0xb319,	// (0x00015dd1) list_double_time_pane_vc_g1_ParamLimits

0xb319,	// (0x00015dd1) list_double_time_pane_vc_g1

0xb325,	// (0x00015ddd) list_double_time_pane_vc_g2_ParamLimits

0xb325,	// (0x00015ddd) list_double_time_pane_vc_g2

0x0001,

0xfa4c,	// (0x0001a504) list_double_time_pane_vc_g_ParamLimits

0xfa4c,	// (0x0001a504) list_double_time_pane_vc_g

0xb331,	// (0x00015de9) list_double_time_pane_vc_t1_ParamLimits

0xb331,	// (0x00015de9) list_double_time_pane_vc_t1

0xb34a,	// (0x00015e02) list_double_time_pane_vc_t2_ParamLimits

0xb34a,	// (0x00015e02) list_double_time_pane_vc_t2

0xb365,	// (0x00015e1d) list_double_time_pane_vc_t3_ParamLimits

0xb365,	// (0x00015e1d) list_double_time_pane_vc_t3

0xb37d,	// (0x00015e35) list_double_time_pane_vc_t4_ParamLimits

0xb37d,	// (0x00015e35) list_double_time_pane_vc_t4

0x0003,

0xfa51,	// (0x0001a509) list_double_time_pane_vc_t_ParamLimits

0xfa51,	// (0x0001a509) list_double_time_pane_vc_t

0x930c,	// (0x00013dc4) list_double_pane_vc_g1_ParamLimits

0x930c,	// (0x00013dc4) list_double_pane_vc_g1

0x9318,	// (0x00013dd0) list_double_pane_vc_g2_ParamLimits

0x9318,	// (0x00013dd0) list_double_pane_vc_g2

0x0001,

0xf7f2,	// (0x0001a2aa) list_double_pane_vc_g_ParamLimits

0xf7f2,	// (0x0001a2aa) list_double_pane_vc_g

0xb391,	// (0x00015e49) list_double_pane_vc_t1_ParamLimits

0xb391,	// (0x00015e49) list_double_pane_vc_t1

0xb3a3,	// (0x00015e5b) list_double_pane_vc_t2_ParamLimits

0xb3a3,	// (0x00015e5b) list_double_pane_vc_t2

0x0001,

0xfa5a,	// (0x0001a512) list_double_pane_vc_t_ParamLimits

0xfa5a,	// (0x0001a512) list_double_pane_vc_t

0x930c,	// (0x00013dc4) list_double_number_pane_vc_g1_ParamLimits

0x930c,	// (0x00013dc4) list_double_number_pane_vc_g1

0x9318,	// (0x00013dd0) list_double_number_pane_vc_g2_ParamLimits

0x9318,	// (0x00013dd0) list_double_number_pane_vc_g2

0x0001,

0xf7f2,	// (0x0001a2aa) list_double_number_pane_vc_g_ParamLimits

0xf7f2,	// (0x0001a2aa) list_double_number_pane_vc_g

0xb3bb,	// (0x00015e73) list_double_number_pane_vc_t1_ParamLimits

0xb3bb,	// (0x00015e73) list_double_number_pane_vc_t1

0xb3cf,	// (0x00015e87) list_double_number_pane_vc_t2_ParamLimits

0xb3cf,	// (0x00015e87) list_double_number_pane_vc_t2

0xb3a3,	// (0x00015e5b) list_double_number_pane_vc_t3_ParamLimits

0xb3a3,	// (0x00015e5b) list_double_number_pane_vc_t3

0x0002,

0xfa5f,	// (0x0001a517) list_double_number_pane_vc_t_ParamLimits

0xfa5f,	// (0x0001a517) list_double_number_pane_vc_t

0xb3e1,	// (0x00015e99) list_double_large_graphic_pane_vc_g1_ParamLimits

0xb3e1,	// (0x00015e99) list_double_large_graphic_pane_vc_g1

0xb3ed,	// (0x00015ea5) list_double_large_graphic_pane_vc_g2_ParamLimits

0xb3ed,	// (0x00015ea5) list_double_large_graphic_pane_vc_g2

0xb2f7,	// (0x00015daf) list_double_large_graphic_pane_vc_g3_ParamLimits

0xb2f7,	// (0x00015daf) list_double_large_graphic_pane_vc_g3

0xb3fc,	// (0x00015eb4) list_double_large_graphic_pane_vc_g4_ParamLimits

0xb3fc,	// (0x00015eb4) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa66,	// (0x0001a51e) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa66,	// (0x0001a51e) list_double_large_graphic_pane_vc_g

0xb408,	// (0x00015ec0) list_double_large_graphic_pane_vc_t1_ParamLimits

0xb408,	// (0x00015ec0) list_double_large_graphic_pane_vc_t1

0xb41a,	// (0x00015ed2) list_double_large_graphic_pane_vc_t2_ParamLimits

0xb41a,	// (0x00015ed2) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6f,	// (0x0001a527) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6f,	// (0x0001a527) list_double_large_graphic_pane_vc_t

0x930c,	// (0x00013dc4) list_double_heading_pane_vc_g1_ParamLimits

0x930c,	// (0x00013dc4) list_double_heading_pane_vc_g1

0x9318,	// (0x00013dd0) list_double_heading_pane_vc_g2_ParamLimits

0x9318,	// (0x00013dd0) list_double_heading_pane_vc_g2

0x0001,

0xf7f2,	// (0x0001a2aa) list_double_heading_pane_vc_g_ParamLimits

0xf7f2,	// (0x0001a2aa) list_double_heading_pane_vc_g

0xb433,	// (0x00015eeb) list_double_heading_pane_vc_t1_ParamLimits

0xb433,	// (0x00015eeb) list_double_heading_pane_vc_t1

0x93de,	// (0x00013e96) list_double_heading_pane_vc_t2_ParamLimits

0x93de,	// (0x00013e96) list_double_heading_pane_vc_t2

0x0001,

0xfa74,	// (0x0001a52c) list_double_heading_pane_vc_t_ParamLimits

0xfa74,	// (0x0001a52c) list_double_heading_pane_vc_t

0x9300,	// (0x00013db8) list_double_graphic_pane_vc_g1_ParamLimits

0x9300,	// (0x00013db8) list_double_graphic_pane_vc_g1

0xb447,	// (0x00015eff) list_double_graphic_pane_vc_g2_ParamLimits

0xb447,	// (0x00015eff) list_double_graphic_pane_vc_g2

0xb456,	// (0x00015f0e) list_double_graphic_pane_vc_g3_ParamLimits

0xb456,	// (0x00015f0e) list_double_graphic_pane_vc_g3

0x0002,

0xfa79,	// (0x0001a531) list_double_graphic_pane_vc_g_ParamLimits

0xfa79,	// (0x0001a531) list_double_graphic_pane_vc_g

0xb462,	// (0x00015f1a) list_double_graphic_pane_vc_t1_ParamLimits

0xb462,	// (0x00015f1a) list_double_graphic_pane_vc_t1

0xb3a3,	// (0x00015e5b) list_double_graphic_pane_vc_t2_ParamLimits

0xb3a3,	// (0x00015e5b) list_double_graphic_pane_vc_t2

0x0001,

0xfa80,	// (0x0001a538) list_double_graphic_pane_vc_t_ParamLimits

0xfa80,	// (0x0001a538) list_double_graphic_pane_vc_t

0x4bf4,	// (0x0000f6ac) aid_size_cell_fastswap

0x4bfc,	// (0x0000f6b4) aid_size_cell_touch_ParamLimits

0x4bfc,	// (0x0000f6b4) aid_size_cell_touch

0x4e61,	// (0x0000f919) popup_fast_swap_wide_window_ParamLimits

0x4e61,	// (0x0000f919) popup_fast_swap_wide_window

0x4f6b,	// (0x0000fa23) touch_pane_ParamLimits

0x4f6b,	// (0x0000fa23) touch_pane

0x75ff,	// (0x000120b7) button_value_adjust_pane_cp2

0x7607,	// (0x000120bf) button_value_adjust_pane_cp4

0x7629,	// (0x000120e1) form_field_data_pane_cp2

0x764a,	// (0x00012102) form_field_data_wide_pane_cp2

0x7cdb,	// (0x00012793) bg_scroll_pane_ParamLimits

0x51fb,	// (0x0000fcb3) scroll_handle_pane_ParamLimits

0x520f,	// (0x0000fcc7) scroll_sc2_down_pane_ParamLimits

0x520f,	// (0x0000fcc7) scroll_sc2_down_pane

0x7d0c,	// (0x000127c4) scroll_sc2_up_pane_ParamLimits

0x7d0c,	// (0x000127c4) scroll_sc2_up_pane

0xb8a7,	// (0x0001635f) grid_wheel_folder_pane_g1_ParamLimits

0xb8a7,	// (0x0001635f) grid_wheel_folder_pane_g1

0x53d4,	// (0x0000fe8c) clock_nsta_pane_cp2_ParamLimits

0x53d4,	// (0x0000fe8c) clock_nsta_pane_cp2

0x853c,	// (0x00012ff4) listscroll_midp_pane_ParamLimits

0x8548,	// (0x00013000) midp_canvas_pane

0x8832,	// (0x000132ea) nsta_clock_indic_pane

0x8890,	// (0x00013348) listscroll_form_pane_vc

0x88ac,	// (0x00013364) listscroll_set_pane_vc_ParamLimits

0x88ac,	// (0x00013364) listscroll_set_pane_vc

0x8f4c,	// (0x00013a04) clock_nsta_pane

0x8fc1,	// (0x00013a79) indicator_nsta_pane

0x929a,	// (0x00013d52) bg_popup_sub_pane_cp2_ParamLimits

0x92ae,	// (0x00013d66) find_pane_cp2_ParamLimits

0x92ae,	// (0x00013d66) find_pane_cp2

0x92c4,	// (0x00013d7c) grid_toobar_pane_ParamLimits

0x9484,	// (0x00013f3c) list_form_gen_pane_vc_ParamLimits

0x9484,	// (0x00013f3c) list_form_gen_pane_vc

0x949a,	// (0x00013f52) scroll_pane_cp8_vc_ParamLimits

0x949a,	// (0x00013f52) scroll_pane_cp8_vc

0x9516,	// (0x00013fce) data_form_wide_pane_vc_ParamLimits

0x9516,	// (0x00013fce) data_form_wide_pane_vc

0x9522,	// (0x00013fda) form_field_data_wide_pane_vc_g1

0x952a,	// (0x00013fe2) form_field_data_wide_pane_vc_t1_ParamLimits

0x952a,	// (0x00013fe2) form_field_data_wide_pane_vc_t1

0x76e5,	// (0x0001219d) input_focus_pane_cp6_vc_ParamLimits

0x76e5,	// (0x0001219d) input_focus_pane_cp6_vc

0x986c,	// (0x00014324) list_midp_pane_ParamLimits

0x9878,	// (0x00014330) scroll_pane_cp16_ParamLimits

0x9878,	// (0x00014330) scroll_pane_cp16

0x98c6,	// (0x0001437e) button_value_adjust_pane_ParamLimits

0x98c6,	// (0x0001437e) button_value_adjust_pane

0xa87b,	// (0x00015333) button_value_adjust_pane_cp6_ParamLimits

0xa87b,	// (0x00015333) button_value_adjust_pane_cp6

0xa9a5,	// (0x0001545d) settings_code_pane_cp_ParamLimits

0xa9a5,	// (0x0001545d) settings_code_pane_cp

0x6814,	// (0x000112cc) cell_touch_pane_g1

0x6814,	// (0x000112cc) cell_touch_pane_g2

0x0001,

0xf71a,	// (0x0001a1d2) cell_touch_pane_g

0xb013,	// (0x00015acb) cell_touch_pane_cp_ParamLimits

0xb013,	// (0x00015acb) cell_touch_pane_cp

0xb023,	// (0x00015adb) cell_touch_pane_ParamLimits

0xb023,	// (0x00015adb) cell_touch_pane

0x6814,	// (0x000112cc) scroll_sc2_down_pane_g1

0x6814,	// (0x000112cc) scroll_sc2_up_pane_g1

0x681e,	// (0x000112d6) bg_set_opt_pane_cp4_vc

0xb055,	// (0x00015b0d) list_set_graphic_pane_vc_g1_ParamLimits

0xb055,	// (0x00015b0d) list_set_graphic_pane_vc_g1

0xb061,	// (0x00015b19) list_set_graphic_pane_vc_g2_ParamLimits

0xb061,	// (0x00015b19) list_set_graphic_pane_vc_g2

0x0001,

0xfa0b,	// (0x0001a4c3) list_set_graphic_pane_vc_g_ParamLimits

0xfa0b,	// (0x0001a4c3) list_set_graphic_pane_vc_g

0xb06d,	// (0x00015b25) text_primary_small_cp13_vc_ParamLimits

0xb06d,	// (0x00015b25) text_primary_small_cp13_vc

0xb085,	// (0x00015b3d) list_set_graphic_pane_vc_ParamLimits

0xb085,	// (0x00015b3d) list_set_graphic_pane_vc

0x681e,	// (0x000112d6) input_focus_pane_cp2_vc

0x6814,	// (0x000112cc) setting_code_pane_vc_g1

0xb099,	// (0x00015b51) setting_code_pane_vc_t1

0xb0a7,	// (0x00015b5f) set_text_pane_vc_t1_ParamLimits

0xb0a7,	// (0x00015b5f) set_text_pane_vc_t1

0x681e,	// (0x000112d6) input_focus_pane_cp1_vc

0xb0c2,	// (0x00015b7a) list_set_text_pane_vc

0x6814,	// (0x000112cc) setting_text_pane_vc_g1

0x681e,	// (0x000112d6) bg_set_opt_pane_cp2_vc

0xb0cc,	// (0x00015b84) setting_slider_graphic_pane_vc_g1

0xb0d4,	// (0x00015b8c) setting_slider_graphic_pane_vc_t1

0xb0e2,	// (0x00015b9a) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa10,	// (0x0001a4c8) setting_slider_graphic_pane_vc_t

0xb0f0,	// (0x00015ba8) slider_set_pane_cp_vc

0xb0f8,	// (0x00015bb0) slider_set_pane_vc_g1

0xb101,	// (0x00015bb9) slider_set_pane_vc_g2

0x0006,

0xfa15,	// (0x0001a4cd) slider_set_pane_vc_g

0x781d,	// (0x000122d5) set_opt_bg_pane_g1_copy1

0x7825,	// (0x000122dd) set_opt_bg_pane_g2_copy1

0xb12d,	// (0x00015be5) set_opt_bg_pane_g3_copy1

0x7835,	// (0x000122ed) set_opt_bg_pane_g4_copy1

0x783d,	// (0x000122f5) set_opt_bg_pane_g5_copy1

0x7845,	// (0x000122fd) set_opt_bg_pane_g6_copy1

0xb137,	// (0x00015bef) set_opt_bg_pane_g7_copy1

0xb13f,	// (0x00015bf7) set_opt_bg_pane_g8_copy1

0xb149,	// (0x00015c01) set_opt_bg_pane_g9_copy1

0x681e,	// (0x000112d6) bg_set_opt_pane_cp_vc

0xb153,	// (0x00015c0b) setting_slider_pane_vc_t1

0xb0d4,	// (0x00015b8c) setting_slider_pane_vc_t2

0xb0e2,	// (0x00015b9a) setting_slider_pane_vc_t3

0x0002,

0xfa24,	// (0x0001a4dc) setting_slider_pane_vc_t

0xb0f0,	// (0x00015ba8) slider_set_pane_vc

0x57db,	// (0x00010293) volume_set_pane_vc_g1

0x57e4,	// (0x0001029c) volume_set_pane_vc_g2

0x57ed,	// (0x000102a5) volume_set_pane_vc_g3

0x57f6,	// (0x000102ae) volume_set_pane_vc_g4

0x57ff,	// (0x000102b7) volume_set_pane_vc_g5

0x5808,	// (0x000102c0) volume_set_pane_vc_g6

0x5811,	// (0x000102c9) volume_set_pane_vc_g7

0x581a,	// (0x000102d2) volume_set_pane_vc_g8

0x5823,	// (0x000102db) volume_set_pane_vc_g9

0x582c,	// (0x000102e4) volume_set_pane_vc_g10

0x0009,

0xf8c2,	// (0x0001a37a) volume_set_pane_vc_g

0xb162,	// (0x00015c1a) volume_set_pane_vc

0xb16a,	// (0x00015c22) button_value_adjust_pane_cp1_vc

0xb174,	// (0x00015c2c) list_highlight_pane_cp2_vc

0xb17d,	// (0x00015c35) list_set_pane_vc_ParamLimits

0xb17d,	// (0x00015c35) list_set_pane_vc

0xb1e7,	// (0x00015c9f) main_pane_set_vc_t1_ParamLimits

0xb1e7,	// (0x00015c9f) main_pane_set_vc_t1

0xb1fc,	// (0x00015cb4) main_pane_set_vc_t2_ParamLimits

0xb1fc,	// (0x00015cb4) main_pane_set_vc_t2

0xb20e,	// (0x00015cc6) main_pane_set_vc_t3_ParamLimits

0xb20e,	// (0x00015cc6) main_pane_set_vc_t3

0xb222,	// (0x00015cda) main_pane_set_vc_t4_ParamLimits

0xb222,	// (0x00015cda) main_pane_set_vc_t4

0x0003,

0xfa2b,	// (0x0001a4e3) main_pane_set_vc_t_ParamLimits

0xfa2b,	// (0x0001a4e3) main_pane_set_vc_t

0xb236,	// (0x00015cee) setting_code_pane_vc_ParamLimits

0xb236,	// (0x00015cee) setting_code_pane_vc

0xb247,	// (0x00015cff) setting_slider_graphic_pane_vc

0xb247,	// (0x00015cff) setting_slider_pane_vc

0xb247,	// (0x00015cff) setting_text_pane_vc

0xb247,	// (0x00015cff) setting_volume_pane_vc

0xb251,	// (0x00015d09) scroll_pane_cp121_vc

0x75ed,	// (0x000120a5) set_content_pane_vc

0xb474,	// (0x00015f2c) button_value_adjust_pane_g1

0xb47d,	// (0x00015f35) button_value_adjust_pane_g2

0x0001,

0xfa85,	// (0x0001a53d) button_value_adjust_pane_g

0xb486,	// (0x00015f3e) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb486,	// (0x00015f3e) form_field_slider_wide_pane_vc_t1

0xb49a,	// (0x00015f52) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb49a,	// (0x00015f52) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa8a,	// (0x0001a542) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8a,	// (0x0001a542) form_field_slider_wide_pane_vc_t

0x6b93,	// (0x0001164b) input_focus_pane_cp10_vc_ParamLimits

0x6b93,	// (0x0001164b) input_focus_pane_cp10_vc

0xb4ac,	// (0x00015f64) slider_cont_pane_cp1_vc_ParamLimits

0xb4ac,	// (0x00015f64) slider_cont_pane_cp1_vc

0xb0f8,	// (0x00015bb0) slider_form_pane_g1_cp2

0xb101,	// (0x00015bb9) slider_form_pane_g2_cp2

0xb4c5,	// (0x00015f7d) form_field_slider_pane_vc_t3

0xb4d3,	// (0x00015f8b) form_field_slider_pane_vc_t4

0xb4e1,	// (0x00015f99) slider_form_pane_vc_ParamLimits

0xb4e1,	// (0x00015f99) slider_form_pane_vc

0xb4ee,	// (0x00015fa6) form_field_slider_pane_vc_t1_ParamLimits

0xb4ee,	// (0x00015fa6) form_field_slider_pane_vc_t1

0xb49a,	// (0x00015f52) form_field_slider_pane_vc_t2_ParamLimits

0xb49a,	// (0x00015f52) form_field_slider_pane_vc_t2

0x0001,

0xfa9a,	// (0x0001a552) form_field_slider_pane_vc_t_ParamLimits

0xfa9a,	// (0x0001a552) form_field_slider_pane_vc_t

0x6b93,	// (0x0001164b) input_focus_pane_cp9_vc_ParamLimits

0x6b93,	// (0x0001164b) input_focus_pane_cp9_vc

0xb50a,	// (0x00015fc2) slider_cont_pane_vc_ParamLimits

0xb50a,	// (0x00015fc2) slider_cont_pane_vc

0xb51c,	// (0x00015fd4) list_form_graphic_pane_cp_vc_ParamLimits

0xb51c,	// (0x00015fd4) list_form_graphic_pane_cp_vc

0x9522,	// (0x00013fda) form_field_popup_wide_pane_vc_g1

0xb531,	// (0x00015fe9) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb531,	// (0x00015fe9) form_field_popup_wide_pane_vc_t1

0x76e5,	// (0x0001219d) input_focus_pane_cp8_vc_ParamLimits

0x76e5,	// (0x0001219d) input_focus_pane_cp8_vc

0xb548,	// (0x00016000) list_form_wide_pane_vc_ParamLimits

0xb548,	// (0x00016000) list_form_wide_pane_vc

0xb554,	// (0x0001600c) list_form_graphic_pane_vc_g1

0xb55c,	// (0x00016014) list_form_graphic_pane_vc_t1_ParamLimits

0xb55c,	// (0x00016014) list_form_graphic_pane_vc_t1

0x68fe,	// (0x000113b6) list_highlight_pane_cp5_vc_ParamLimits

0x68fe,	// (0x000113b6) list_highlight_pane_cp5_vc

0xb578,	// (0x00016030) list_form_graphic_pane_vc_ParamLimits

0xb578,	// (0x00016030) list_form_graphic_pane_vc

0x9522,	// (0x00013fda) form_field_popup_pane_vc_g1

0xb58e,	// (0x00016046) form_field_popup_pane_vc_t1_ParamLimits

0xb58e,	// (0x00016046) form_field_popup_pane_vc_t1

0x76e5,	// (0x0001219d) input_focus_pane_cp7_vc_ParamLimits

0x76e5,	// (0x0001219d) input_focus_pane_cp7_vc

0xb5a5,	// (0x0001605d) list_form_pane_vc_ParamLimits

0xb5a5,	// (0x0001605d) list_form_pane_vc

0xb5b1,	// (0x00016069) data_form_pane_vc_t1_ParamLimits

0xb5b1,	// (0x00016069) data_form_pane_vc_t1

0x781d,	// (0x000122d5) input_focus_pane_vc_g1

0x7825,	// (0x000122dd) input_focus_pane_vc_g2

0x782d,	// (0x000122e5) input_focus_pane_vc_g3

0x7835,	// (0x000122ed) input_focus_pane_vc_g4

0x783d,	// (0x000122f5) input_focus_pane_vc_g5

0x7845,	// (0x000122fd) input_focus_pane_vc_g6

0x784d,	// (0x00012305) input_focus_pane_vc_g7

0x7855,	// (0x0001230d) input_focus_pane_vc_g8

0x785d,	// (0x00012315) input_focus_pane_vc_g9

0x6814,	// (0x000112cc) input_focus_pane_vc_g10

0x0009,

0xf6a3,	// (0x0001a15b) input_focus_pane_vc_g

0x9516,	// (0x00013fce) data_form_pane_vc_ParamLimits

0x9516,	// (0x00013fce) data_form_pane_vc

0x9522,	// (0x00013fda) form_field_data_pane_vc_g1

0xb5cc,	// (0x00016084) form_field_data_pane_vc_t1_ParamLimits

0xb5cc,	// (0x00016084) form_field_data_pane_vc_t1

0x76e5,	// (0x0001219d) input_focus_pane_vc_ParamLimits

0x76e5,	// (0x0001219d) input_focus_pane_vc

0xb5e6,	// (0x0001609e) button_value_adjust_pane_cp3_vc

0xb5ee,	// (0x000160a6) button_value_adjust_pane_cp5_vc

0xb5f6,	// (0x000160ae) form_field_data_pane_vc_ParamLimits

0xb5f6,	// (0x000160ae) form_field_data_pane_vc

0xb60d,	// (0x000160c5) form_field_data_pane_vc_cp2

0xb615,	// (0x000160cd) form_field_data_wide_pane_vc_ParamLimits

0xb615,	// (0x000160cd) form_field_data_wide_pane_vc

0xb62b,	// (0x000160e3) form_field_data_wide_pane_vc_cp2

0xb633,	// (0x000160eb) form_field_popup_pane_vc_ParamLimits

0xb633,	// (0x000160eb) form_field_popup_pane_vc

0xb64a,	// (0x00016102) form_field_popup_wide_pane_vc_ParamLimits

0xb64a,	// (0x00016102) form_field_popup_wide_pane_vc

0xb660,	// (0x00016118) form_field_slider_pane_vc_ParamLimits

0xb660,	// (0x00016118) form_field_slider_pane_vc

0xb673,	// (0x0001612b) form_field_slider_wide_pane_vc_ParamLimits

0xb673,	// (0x0001612b) form_field_slider_wide_pane_vc

0xb686,	// (0x0001613e) grid_touch_1_pane_ParamLimits

0xb686,	// (0x0001613e) grid_touch_1_pane

0xb692,	// (0x0001614a) grid_touch_2_pane_ParamLimits

0xb692,	// (0x0001614a) grid_touch_2_pane

0x87fd,	// (0x000132b5) touch_pane_g1_ParamLimits

0x87fd,	// (0x000132b5) touch_pane_g1

0xb6aa,	// (0x00016162) cell_app_pane_cp_wide_ParamLimits

0xb6aa,	// (0x00016162) cell_app_pane_cp_wide

0xb6bb,	// (0x00016173) grid_popup_fast_wide_pane_ParamLimits

0xb6bb,	// (0x00016173) grid_popup_fast_wide_pane

0xb6cf,	// (0x00016187) scroll_pane_cp19_ParamLimits

0xb6cf,	// (0x00016187) scroll_pane_cp19

0x681e,	// (0x000112d6) bg_popup_window_pane_cp20

0xb6e3,	// (0x0001619b) listscroll_popup_fast_wide_pane

0x68fe,	// (0x000113b6) grid_indicator_nsta_pane

0xb6eb,	// (0x000161a3) clock_nsta_pane_g1

0xb6f4,	// (0x000161ac) clock_nsta_pane_t1

0xb710,	// (0x000161c8) cell_indicator_nsta_pane_ParamLimits

0xb710,	// (0x000161c8) cell_indicator_nsta_pane

0xb748,	// (0x00016200) cell_indicator_nsta_pane_g1

0xb756,	// (0x0001620e) cell_indicator_nsta_pane_g2

0x0001,

0xfaa4,	// (0x0001a55c) cell_indicator_nsta_pane_g

0xb76c,	// (0x00016224) clock_nsta_pane_cp

0xb774,	// (0x0001622c) indicator_nsta_pane_cp

0xb77d,	// (0x00016235) nsta_clock_indic_pane_g1

0x69e1,	// (0x00011499) grid_indicator_pane

0x7e01,	// (0x000128b9) scroll_pane_cp29

0x5323,	// (0x0000fddb) indicator_nsta_pane_cp2_ParamLimits

0x5323,	// (0x0000fddb) indicator_nsta_pane_cp2

0x68fe,	// (0x000113b6) main_apps_wheel_pane

0x974d,	// (0x00014205) form_midp_field_text_pane_ParamLimits

0x9898,	// (0x00014350) scroll_bar_cp050_ParamLimits

0xb7e6,	// (0x0001629e) cell_indicator_pane_ParamLimits

0xb7e6,	// (0x0001629e) cell_indicator_pane

0xb7fd,	// (0x000162b5) cell_indicator_pane_g1

0xb807,	// (0x000162bf) grid_wheel_folder_pane_ParamLimits

0xb807,	// (0x000162bf) grid_wheel_folder_pane

0xb81b,	// (0x000162d3) list_wheel_apps_pane_ParamLimits

0xb81b,	// (0x000162d3) list_wheel_apps_pane

0xb82c,	// (0x000162e4) main_apps_wheel_pane_g1_ParamLimits

0xb82c,	// (0x000162e4) main_apps_wheel_pane_g1

0xb840,	// (0x000162f8) main_apps_wheel_pane_g2_ParamLimits

0xb840,	// (0x000162f8) main_apps_wheel_pane_g2

0x0001,

0xfac0,	// (0x0001a578) main_apps_wheel_pane_g_ParamLimits

0xfac0,	// (0x0001a578) main_apps_wheel_pane_g

0xb858,	// (0x00016310) main_apps_wheel_pane_t1_ParamLimits

0xb858,	// (0x00016310) main_apps_wheel_pane_t1

0xb87b,	// (0x00016333) list_wheel_apps_pane_g1

0xb883,	// (0x0001633b) list_wheel_apps_pane_g2

0xb88b,	// (0x00016343) list_wheel_apps_pane_g3

0xb893,	// (0x0001634b) list_wheel_apps_pane_g4

0xb89d,	// (0x00016355) list_wheel_apps_pane_g5

0x0004,

0xfac5,	// (0x0001a57d) list_wheel_apps_pane_g

0x83b4,	// (0x00012e6c) navi_icon_text_pane

0x8e7f,	// (0x00013937) aid_fill_nsta

0xb8c0,	// (0x00016378) navi_icon_text_pane_g1

0xb8cf,	// (0x00016387) navi_icon_text_pane_t1

0x8252,	// (0x00012d0a) list_set_graphic_pane_t1_ParamLimits

0x8252,	// (0x00012d0a) list_set_graphic_pane_t1

0x9fe7,	// (0x00014a9f) popup_midp_note_alarm_window_t6_ParamLimits

0x9fe7,	// (0x00014a9f) popup_midp_note_alarm_window_t6

0x9ff9,	// (0x00014ab1) popup_midp_note_alarm_window_t7_ParamLimits

0x9ff9,	// (0x00014ab1) popup_midp_note_alarm_window_t7

0xa00b,	// (0x00014ac3) popup_midp_note_alarm_window_t8_ParamLimits

0xa00b,	// (0x00014ac3) popup_midp_note_alarm_window_t8

0xa01d,	// (0x00014ad5) popup_midp_note_alarm_window_t9_ParamLimits

0xa01d,	// (0x00014ad5) popup_midp_note_alarm_window_t9

0xa02f,	// (0x00014ae7) popup_midp_note_alarm_window_t10_ParamLimits

0xa02f,	// (0x00014ae7) popup_midp_note_alarm_window_t10

0xa041,	// (0x00014af9) popup_midp_note_alarm_window_t11_ParamLimits

0xa041,	// (0x00014af9) popup_midp_note_alarm_window_t11

0xa053,	// (0x00014b0b) scroll_pane_cp17_ParamLimits

0xa053,	// (0x00014b0b) scroll_pane_cp17

0x57db,	// (0x00010293) volume_small_pane_cp_g1

0x5ad0,	// (0x00010588) volume_small_pane_cp_g2

0x5ad9,	// (0x00010591) volume_small_pane_cp_g3

0x5ae2,	// (0x0001059a) volume_small_pane_cp_g4

0x5aeb,	// (0x000105a3) volume_small_pane_cp_g5

0x5af4,	// (0x000105ac) volume_small_pane_cp_g6

0x5afd,	// (0x000105b5) volume_small_pane_cp_g7

0x5b06,	// (0x000105be) volume_small_pane_cp_g8

0x5b0f,	// (0x000105c7) volume_small_pane_cp_g9

0x5b18,	// (0x000105d0) volume_small_pane_cp_g10

0x860f,	// (0x000130c7) midp_ticker_pane_g1_ParamLimits

0x861b,	// (0x000130d3) midp_ticker_pane_g2_ParamLimits

0xf76b,	// (0x0001a223) midp_ticker_pane_g_ParamLimits

0x8627,	// (0x000130df) midp_ticker_pane_t1_ParamLimits

0x8e95,	// (0x0001394d) aid_fill_nsta_2

0x9884,	// (0x0001433c) list_form2_midp_pane

0xaa23,	// (0x000154db) midp_editing_number_pane_ParamLimits

0xaa32,	// (0x000154ea) midp_ticker_pane_ParamLimits

0xb8e4,	// (0x0001639c) form2_midp_field_pane

0xb908,	// (0x000163c0) scroll_pane_cp51

0xb928,	// (0x000163e0) form2_midp_button_pane_ParamLimits

0xb928,	// (0x000163e0) form2_midp_button_pane

0xb93a,	// (0x000163f2) form2_midp_content_pane_ParamLimits

0xb93a,	// (0x000163f2) form2_midp_content_pane

0xb954,	// (0x0001640c) form2_midp_field_choice_group_pane

0xb95c,	// (0x00016414) form2_midp_field_pane_g1

0xb964,	// (0x0001641c) form2_midp_field_pane_g2

0xb96c,	// (0x00016424) form2_midp_field_pane_g3

0xb974,	// (0x0001642c) form2_midp_field_pane_g4

0x0003,

0xfaea,	// (0x0001a5a2) form2_midp_field_pane_g

0xb97c,	// (0x00016434) form2_midp_gauge_slider_pane

0xb984,	// (0x0001643c) form2_midp_gauge_wait_pane

0xb98c,	// (0x00016444) form2_midp_image_pane_ParamLimits

0xb98c,	// (0x00016444) form2_midp_image_pane

0xb9a7,	// (0x0001645f) form2_midp_label_pane_ParamLimits

0xb9a7,	// (0x0001645f) form2_midp_label_pane

0xb9c0,	// (0x00016478) form2_midp_label_pane_cp_ParamLimits

0xb9c0,	// (0x00016478) form2_midp_label_pane_cp

0xb9e1,	// (0x00016499) form2_midp_string_pane_ParamLimits

0xb9e1,	// (0x00016499) form2_midp_string_pane

0xb9f3,	// (0x000164ab) form2_midp_text_pane_ParamLimits

0xb9f3,	// (0x000164ab) form2_midp_text_pane

0xba10,	// (0x000164c8) form2_midp_time_pane

0xba20,	// (0x000164d8) input_focus_pane_cp51_ParamLimits

0xba20,	// (0x000164d8) input_focus_pane_cp51

0xba38,	// (0x000164f0) form2_midp_label_pane_t1_ParamLimits

0xba38,	// (0x000164f0) form2_midp_label_pane_t1

0xba79,	// (0x00016531) form2_mdip_text_pane_t1_ParamLimits

0xba79,	// (0x00016531) form2_mdip_text_pane_t1

0xba98,	// (0x00016550) form2_midp_time_pane_t1

0xbab3,	// (0x0001656b) form2_midp_gauge_slider_pane_t1

0xbac5,	// (0x0001657d) form2_midp_gauge_slider_pane_t2

0xbad7,	// (0x0001658f) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf3,	// (0x0001a5ab) form2_midp_gauge_slider_pane_t

0xbae9,	// (0x000165a1) form2_midp_slider_pane

0xbaf5,	// (0x000165ad) form2_midp_gauge_wait_pane_t1

0xbb03,	// (0x000165bb) form2_midp_wait_pane_ParamLimits

0xbb03,	// (0x000165bb) form2_midp_wait_pane

0x9541,	// (0x00013ff9) list_single_2graphic_pane_cp4_ParamLimits

0x9541,	// (0x00013ff9) list_single_2graphic_pane_cp4

0xbb2e,	// (0x000165e6) list_single_midp_graphic_pane_cp_ParamLimits

0xbb2e,	// (0x000165e6) list_single_midp_graphic_pane_cp

0x681e,	// (0x000112d6) list_highlight_pane_cp20

0xbb5d,	// (0x00016615) list_single_2graphic_pane_g1_cp4

0xbb65,	// (0x0001661d) list_single_2graphic_pane_g2_cp4

0xbb6d,	// (0x00016625) list_single_2graphic_pane_t1_cp4

0x68fe,	// (0x000113b6) list_highlight_pane_cp21

0xbb7c,	// (0x00016634) list_single_midp_graphic_pane_g4_cp

0xbb8b,	// (0x00016643) list_single_midp_graphic_pane_t1_cp

0xbba0,	// (0x00016658) form2_mdip_string_pane_t1_ParamLimits

0xbba0,	// (0x00016658) form2_mdip_string_pane_t1

0x681e,	// (0x000112d6) bg_wml_button_pane_cp2

0x6814,	// (0x000112cc) form2_midp_image_pane_g1

0x73c7,	// (0x00011e7f) list_double_large_graphic_pane_g5_ParamLimits

0x73c7,	// (0x00011e7f) list_double_large_graphic_pane_g5

0x853c,	// (0x00012ff4) midp_form_pane_ParamLimits

0x68fe,	// (0x000113b6) main_apps_wheel_pane_ParamLimits

0x8c67,	// (0x0001371f) popup_preview_window_ParamLimits

0x8c67,	// (0x0001371f) popup_preview_window

0x8e22,	// (0x000138da) popup_touch_info_window_ParamLimits

0x8e22,	// (0x000138da) popup_touch_info_window

0x8e40,	// (0x000138f8) popup_touch_menu_window_ParamLimits

0x8e40,	// (0x000138f8) popup_touch_menu_window

0x680a,	// (0x000112c2) bg_popup_sub_pane_cp6

0xbc99,	// (0x00016751) list_touch_menu_pane

0xbca1,	// (0x00016759) list_single_touch_menu_pane_ParamLimits

0xbca1,	// (0x00016759) list_single_touch_menu_pane

0xbcb8,	// (0x00016770) list_single_touch_menu_pane_t1

0x68fe,	// (0x000113b6) bg_popup_sub_pane_cp7_ParamLimits

0x68fe,	// (0x000113b6) bg_popup_sub_pane_cp7

0xbcc6,	// (0x0001677e) heading_sub_pane

0xbcce,	// (0x00016786) list_touch_info_pane_ParamLimits

0xbcce,	// (0x00016786) list_touch_info_pane

0xbcdd,	// (0x00016795) list_single_touch_info_pane_ParamLimits

0xbcdd,	// (0x00016795) list_single_touch_info_pane

0xbcef,	// (0x000167a7) list_single_touch_info_pane_t1

0xbcfd,	// (0x000167b5) list_single_touch_info_pane_t2

0x0001,

0xfb01,	// (0x0001a5b9) list_single_touch_info_pane_t

0x8534,	// (0x00012fec) bg_popup_heading_pane_cp

0xbd0b,	// (0x000167c3) heading_sub_pane_t1

0x94b0,	// (0x00013f68) bg_popup_preview_window_pane_cp_ParamLimits

0x94b0,	// (0x00013f68) bg_popup_preview_window_pane_cp

0xbcc6,	// (0x0001677e) heading_preview_pane

0xbcce,	// (0x00016786) list_preview_pane_ParamLimits

0xbcce,	// (0x00016786) list_preview_pane

0xbd19,	// (0x000167d1) popup_preview_window_g1

0xbcdd,	// (0x00016795) list_single_preview_pane_ParamLimits

0xbcdd,	// (0x00016795) list_single_preview_pane

0xbd21,	// (0x000167d9) list_single_preview_pane_g1

0xbd29,	// (0x000167e1) list_single_preview_pane_t1

0xbcef,	// (0x000167a7) list_single_preview_pane_t2

0x0001,

0xfb06,	// (0x0001a5be) list_single_preview_pane_t

0xbd37,	// (0x000167ef) bg_popup_heading_pane_cp2_ParamLimits

0xbd37,	// (0x000167ef) bg_popup_heading_pane_cp2

0xbd4d,	// (0x00016805) heading_preview_pane_g1

0xbd55,	// (0x0001680d) heading_preview_pane_t1_ParamLimits

0xbd55,	// (0x0001680d) heading_preview_pane_t1

0x6a04,	// (0x000114bc) soft_indicator_pane_t1_ParamLimits

0x70f7,	// (0x00011baf) scroll_pane_ParamLimits

0x7cfa,	// (0x000127b2) scroll_sc2_left_pane

0x7d03,	// (0x000127bb) scroll_sc2_right_pane

0x7d22,	// (0x000127da) scroll_bg_pane_g1_ParamLimits

0x7d37,	// (0x000127ef) scroll_bg_pane_g2_ParamLimits

0x7d4f,	// (0x00012807) scroll_bg_pane_g3_ParamLimits

0xf6fa,	// (0x0001a1b2) scroll_bg_pane_g_ParamLimits

0x7d22,	// (0x000127da) scroll_handle_pane_g1_ParamLimits

0x7d71,	// (0x00012829) scroll_handle_pane_g2_ParamLimits

0x7d4f,	// (0x00012807) scroll_handle_pane_g3_ParamLimits

0xf701,	// (0x0001a1b9) scroll_handle_pane_g_ParamLimits

0x88ee,	// (0x000133a6) popup_choice_list_window_ParamLimits

0x88ee,	// (0x000133a6) popup_choice_list_window

0x92a6,	// (0x00013d5e) choice_list_pane

0x9362,	// (0x00013e1a) cell_toolbar_pane_t1

0x938a,	// (0x00013e42) toolbar_button_pane_ParamLimits

0xa513,	// (0x00014fcb) ai_gene_pane_1_t2_ParamLimits

0xa513,	// (0x00014fcb) ai_gene_pane_1_t2

0x0001,

0xf91e,	// (0x0001a3d6) ai_gene_pane_1_t_ParamLimits

0xf91e,	// (0x0001a3d6) ai_gene_pane_1_t

0xbd72,	// (0x0001682a) scroll_sc2_left_pane_g1

0xbd72,	// (0x0001682a) scroll_sc2_right_pane_g1

0x88be,	// (0x00013376) bg_popup_sub_pane_cp10

0xbd7c,	// (0x00016834) list_choice_list_pane

0xbd93,	// (0x0001684b) list_single_choice_list_pane_ParamLimits

0xbd93,	// (0x0001684b) list_single_choice_list_pane

0xbda7,	// (0x0001685f) list_single_choice_list_pane_g1

0xbdaf,	// (0x00016867) list_single_choice_list_pane_t1_ParamLimits

0xbdaf,	// (0x00016867) list_single_choice_list_pane_t1

0xbdc4,	// (0x0001687c) choice_list_pane_g1

0xbdcc,	// (0x00016884) choice_list_pane_t1

0x680a,	// (0x000112c2) input_focus_pane_cp11

0x7bd7,	// (0x0001268f) title_pane_stacon_g2_ParamLimits

0x7bd7,	// (0x0001268f) title_pane_stacon_g2

0x0002,

0xf6e0,	// (0x0001a198) title_pane_stacon_g_ParamLimits

0xf6e0,	// (0x0001a198) title_pane_stacon_g

0x8534,	// (0x00012fec) cursor_press_pane

0x8996,	// (0x0001344e) popup_fep_hwr_window_ParamLimits

0x8996,	// (0x0001344e) popup_fep_hwr_window

0x8a10,	// (0x000134c8) popup_fep_vkb_window_ParamLimits

0x8a10,	// (0x000134c8) popup_fep_vkb_window

0xbdda,	// (0x00016892) cursor_press_pane_g1

0x0002,

0xfb2f,	// (0x0001a5e7) fep_vkb_side_pane_g_ParamLimits

0x5b5a,	// (0x00010612) fep_hwr_candidate_pane_ParamLimits

0x5b5a,	// (0x00010612) fep_hwr_candidate_pane

0x5b84,	// (0x0001063c) fep_hwr_side_pane_ParamLimits

0x5b84,	// (0x0001063c) fep_hwr_side_pane

0x5ba4,	// (0x0001065c) fep_hwr_top_pane_ParamLimits

0x5ba4,	// (0x0001065c) fep_hwr_top_pane

0x5bbc,	// (0x00010674) fep_hwr_write_pane_ParamLimits

0x5bbc,	// (0x00010674) fep_hwr_write_pane

0xfb2f,	// (0x0001a5e7) fep_vkb_side_pane_g

0xbdf4,	// (0x000168ac) fep_hwr_top_pane_g1

0xbde2,	// (0x0001689a) fep_hwr_top_pane_g2

0x5bf6,	// (0x000106ae) fep_hwr_top_pane_g3

0x0002,

0xfb0b,	// (0x0001a5c3) fep_hwr_top_pane_g

0x5c0b,	// (0x000106c3) fep_hwr_top_text_pane

0x7ec8,	// (0x00012980) fep_hwr_top_text_pane_g1

0xbe2a,	// (0x000168e2) fep_hwr_top_text_pane_t1

0x5d01,	// (0x000107b9) fep_hwr_candidate_pane_g1

0xc07d,	// (0x00016b35) fep_vkb_keypad_pane_g3_ParamLimits

0xc07d,	// (0x00016b35) fep_vkb_keypad_pane_g3

0xc0a5,	// (0x00016b5d) fep_vkb_keypad_pane_g4_ParamLimits

0xc0a5,	// (0x00016b5d) fep_vkb_keypad_pane_g4

0xc114,	// (0x00016bcc) fep_vkb_bottom_pane_g2_ParamLimits

0xc114,	// (0x00016bcc) fep_vkb_bottom_pane_g2

0x0001,

0xfb36,	// (0x0001a5ee) fep_vkb_bottom_pane_g_ParamLimits

0xfb36,	// (0x0001a5ee) fep_vkb_bottom_pane_g

0xbd72,	// (0x0001682a) cell_vkb_side_pane_g2

0x0001,

0xfb40,	// (0x0001a5f8) cell_vkb_side_pane_g

0xc19f,	// (0x00016c57) cell_vkb_side_pane_t1

0xc1ad,	// (0x00016c65) cell_vkb_side_pane_t1_copy1

0xbd72,	// (0x0001682a) bg_fep_vkb_candidate_pane_g2

0xc2d9,	// (0x00016d91) cell_vkb_candidate_pane_ParamLimits

0xbe38,	// (0x000168f0) aid_size_cell_vkb_ParamLimits

0xbe38,	// (0x000168f0) aid_size_cell_vkb

0xc2d9,	// (0x00016d91) cell_vkb_candidate_pane

0x5d28,	// (0x000107e0) bg_popup_fep_shadow_pane_g1

0xbec6,	// (0x0001697e) fep_vkb_bottom_pane_ParamLimits

0xbec6,	// (0x0001697e) fep_vkb_bottom_pane

0xbefc,	// (0x000169b4) fep_vkb_candidate_pane_ParamLimits

0xbefc,	// (0x000169b4) fep_vkb_candidate_pane

0xbf18,	// (0x000169d0) fep_vkb_keypad_pane_ParamLimits

0xbf18,	// (0x000169d0) fep_vkb_keypad_pane

0xbf5e,	// (0x00016a16) fep_vkb_side_pane_ParamLimits

0xbf5e,	// (0x00016a16) fep_vkb_side_pane

0xbf9a,	// (0x00016a52) fep_vkb_top_pane_ParamLimits

0xbf9a,	// (0x00016a52) fep_vkb_top_pane

0xbfd6,	// (0x00016a8e) fep_vkb_top_pane_g1_ParamLimits

0xbfd6,	// (0x00016a8e) fep_vkb_top_pane_g1

0xbfe5,	// (0x00016a9d) fep_vkb_top_pane_g2_ParamLimits

0xbfe5,	// (0x00016a9d) fep_vkb_top_pane_g2

0xbff4,	// (0x00016aac) fep_vkb_top_pane_g3_ParamLimits

0xbff4,	// (0x00016aac) fep_vkb_top_pane_g3

0x0003,

0xfb26,	// (0x0001a5de) fep_vkb_top_pane_g_ParamLimits

0xfb26,	// (0x0001a5de) fep_vkb_top_pane_g

0xc012,	// (0x00016aca) fep_vkb_top_text_pane_ParamLimits

0xc012,	// (0x00016aca) fep_vkb_top_text_pane

0xc023,	// (0x00016adb) fep_vkb_side_pane_g1_ParamLimits

0xc023,	// (0x00016adb) fep_vkb_side_pane_g1

0xc06c,	// (0x00016b24) grid_vkb_side_pane_ParamLimits

0xc06c,	// (0x00016b24) grid_vkb_side_pane

0x5d30,	// (0x000107e8) bg_popup_fep_shadow_pane_g2

0x5d39,	// (0x000107f1) bg_popup_fep_shadow_pane_g3

0x5d41,	// (0x000107f9) bg_popup_fep_shadow_pane_g4

0x5d4a,	// (0x00010802) bg_popup_fep_shadow_pane_g5

0x5d54,	// (0x0001080c) bg_popup_fep_shadow_pane_g6

0x5d5c,	// (0x00010814) bg_popup_fep_shadow_pane_g7

0x7835,	// (0x000122ed) bg_popup_fep_shadow_pane_g8

0xc0c3,	// (0x00016b7b) grid_vkb_keypad_number_pane_ParamLimits

0xc0c3,	// (0x00016b7b) grid_vkb_keypad_number_pane

0xc0d3,	// (0x00016b8b) grid_vkb_keypad_pane_ParamLimits

0xc0d3,	// (0x00016b8b) grid_vkb_keypad_pane

0xc0f9,	// (0x00016bb1) fep_vkb_bottom_pane_g1_ParamLimits

0xc0f9,	// (0x00016bb1) fep_vkb_bottom_pane_g1

0xc122,	// (0x00016bda) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc122,	// (0x00016bda) grid_vkb_keypad_bottom_left_pane

0xc137,	// (0x00016bef) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc137,	// (0x00016bef) grid_vkb_keypad_bottom_right_pane

0xc14c,	// (0x00016c04) fep_vkb_top_text_pane_g1

0xc167,	// (0x00016c1f) fep_vkb_top_text_pane_t1

0xc17c,	// (0x00016c34) cell_vkb_side_pane_ParamLimits

0xc17c,	// (0x00016c34) cell_vkb_side_pane

0xbd72,	// (0x0001682a) cell_vkb_side_pane_g1

0xc1bb,	// (0x00016c73) cell_vkb_keypad_pane_ParamLimits

0xc1bb,	// (0x00016c73) cell_vkb_keypad_pane

0xc230,	// (0x00016ce8) cell_vkb_keypad_pane_g1

0x0008,

0xfb53,	// (0x0001a60b) bg_popup_fep_shadow_pane_g

0x5d6e,	// (0x00010826) cell_hwr_side_pane_g1

0x5d6e,	// (0x00010826) cell_hwr_side_pane_g2

0xc23a,	// (0x00016cf2) cell_vkb_keypad_pane_t1

0xc248,	// (0x00016d00) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc248,	// (0x00016d00) cell_vkb_keypad_bottom_left_pane

0xc265,	// (0x00016d1d) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc265,	// (0x00016d1d) cell_vkb_keypad_bottom_right_pane

0xbd72,	// (0x0001682a) cell_vkb_keypad_bottom_left_pane_g1

0xbd72,	// (0x0001682a) cell_vkb_keypad_bottom_right_pane_g1

0xc29e,	// (0x00016d56) cell_vkb_keypad_number_pane_ParamLimits

0xc29e,	// (0x00016d56) cell_vkb_keypad_number_pane

0xc2bd,	// (0x00016d75) cell_vkb_keypad_number_pane_g1

0xc2c7,	// (0x00016d7f) cell_vkb_keypad_number_pane_g2

0xc2d0,	// (0x00016d88) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb45,	// (0x0001a5fd) cell_vkb_keypad_number_pane_g

0xc23a,	// (0x00016cf2) cell_vkb_keypad_number_pane_t1

0xc2f4,	// (0x00016dac) fep_vkb_candidate_pane_g1

0x0001,

0xfb66,	// (0x0001a61e) cell_hwr_side_pane_g

0xc30d,	// (0x00016dc5) cell_hwr_side_pane_t1

0x5d78,	// (0x00010830) cell_hwr_side_pane_t1_copy1

0x5d86,	// (0x0001083e) cell_hwr_candidate_pane_g1

0x5db5,	// (0x0001086d) cell_hwr_candidate_pane_t1

0xbd72,	// (0x0001682a) cell_vkb_candidate_pane_g2

0xc351,	// (0x00016e09) cell_vkb_candidate_pane_t1

0x5b21,	// (0x000105d9) bg_popup_fep_shadow_pane_ParamLimits

0x5b21,	// (0x000105d9) bg_popup_fep_shadow_pane

0x5bd6,	// (0x0001068e) bg_fep_hwr_top_pane_g4

0xbe06,	// (0x000168be) bg_hwr_side_pane_g1_ParamLimits

0xbe06,	// (0x000168be) bg_hwr_side_pane_g1

0x5c47,	// (0x000106ff) cell_hwr_side_pane_ParamLimits

0x5c47,	// (0x000106ff) cell_hwr_side_pane

0x5c82,	// (0x0001073a) fep_hwr_write_pane_g1_ParamLimits

0x5c82,	// (0x0001073a) fep_hwr_write_pane_g1

0x5c8f,	// (0x00010747) fep_hwr_write_pane_g2_ParamLimits

0x5c8f,	// (0x00010747) fep_hwr_write_pane_g2

0x5c9c,	// (0x00010754) fep_hwr_write_pane_g3_ParamLimits

0x5c9c,	// (0x00010754) fep_hwr_write_pane_g3

0x5caa,	// (0x00010762) fep_hwr_write_pane_g4_ParamLimits

0x5caa,	// (0x00010762) fep_hwr_write_pane_g4

0x0005,

0xfb12,	// (0x0001a5ca) fep_hwr_write_pane_g_ParamLimits

0xfb12,	// (0x0001a5ca) fep_hwr_write_pane_g

0x5bd6,	// (0x0001068e) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x5bd6,	// (0x0001068e) bg_fep_hwr_candidate_pane_g2

0x5cbf,	// (0x00010777) cell_hwr_candidate_pane_ParamLimits

0x5cbf,	// (0x00010777) cell_hwr_candidate_pane

0x5d01,	// (0x000107b9) fep_hwr_candidate_pane_g1_ParamLimits

0xbe66,	// (0x0001691e) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbe66,	// (0x0001691e) bg_popup_fep_shadow_pane_cp2

0xc004,	// (0x00016abc) fep_vkb_top_pane_g4_ParamLimits

0xc004,	// (0x00016abc) fep_vkb_top_pane_g4

0xc04a,	// (0x00016b02) fep_vkb_side_pane_g2_ParamLimits

0xc04a,	// (0x00016b02) fep_vkb_side_pane_g2

0x7507,	// (0x00011fbf) list_setting_pane_t4_ParamLimits

0x7507,	// (0x00011fbf) list_setting_pane_t4

0x7581,	// (0x00012039) list_setting_number_pane_t5_ParamLimits

0x7581,	// (0x00012039) list_setting_number_pane_t5

0x7f0a,	// (0x000129c2) list_double_heading_pane_cp2_ParamLimits

0x7f0a,	// (0x000129c2) list_double_heading_pane_cp2

0x770b,	// (0x000121c3) list_double_heading_pane_g1_cp2_ParamLimits

0x770b,	// (0x000121c3) list_double_heading_pane_g1_cp2

0x7717,	// (0x000121cf) list_double_heading_pane_g2_cp2_ParamLimits

0x7717,	// (0x000121cf) list_double_heading_pane_g2_cp2

0xc35f,	// (0x00016e17) list_double_heading_pane_t1_cp2_ParamLimits

0xc35f,	// (0x00016e17) list_double_heading_pane_t1_cp2

0xc375,	// (0x00016e2d) list_double_heading_pane_t2_cp2_ParamLimits

0xc375,	// (0x00016e2d) list_double_heading_pane_t2_cp2

0x67f2,	// (0x000112aa) aid_value_unit2

0x4ebb,	// (0x0000f973) popup_preview_fixed_window

0x6ba1,	// (0x00011659) bg_popup_preview_window_pane_cp02

0xc387,	// (0x00016e3f) list_preview_fixed_pane

0xc3cd,	// (0x00016e85) list_empty_pane_fp_ParamLimits

0xc3cd,	// (0x00016e85) list_empty_pane_fp

0xc3cd,	// (0x00016e85) list_single_cale_day_pane_fp_ParamLimits

0xc3cd,	// (0x00016e85) list_single_cale_day_pane_fp

0xc3cd,	// (0x00016e85) list_single_graphic_heading_pane_fp_ParamLimits

0xc3cd,	// (0x00016e85) list_single_graphic_heading_pane_fp

0xc3cd,	// (0x00016e85) list_single_graphic_pane_fp_ParamLimits

0xc3cd,	// (0x00016e85) list_single_graphic_pane_fp

0xc3cd,	// (0x00016e85) list_single_heading_pane_fp_ParamLimits

0xc3cd,	// (0x00016e85) list_single_heading_pane_fp

0xc3cd,	// (0x00016e85) list_single_pane_fp_ParamLimits

0xc3cd,	// (0x00016e85) list_single_pane_fp

0xc3e2,	// (0x00016e9a) list_single_pane_fp_g1_ParamLimits

0xc3e2,	// (0x00016e9a) list_single_pane_fp_g1

0x7348,	// (0x00011e00) list_single_pane_fp_g2_ParamLimits

0x7348,	// (0x00011e00) list_single_pane_fp_g2

0xc3ee,	// (0x00016ea6) list_single_pane_fp_g3_ParamLimits

0xc3ee,	// (0x00016ea6) list_single_pane_fp_g3

0xc402,	// (0x00016eba) list_single_pane_fp_g4_ParamLimits

0xc402,	// (0x00016eba) list_single_pane_fp_g4

0x0003,

0xfb79,	// (0x0001a631) list_single_pane_fp_g_ParamLimits

0xfb79,	// (0x0001a631) list_single_pane_fp_g

0xc40e,	// (0x00016ec6) list_single_pane_fp_t1_ParamLimits

0xc40e,	// (0x00016ec6) list_single_pane_fp_t1

0xc425,	// (0x00016edd) list_single_graphic_pane_fp_g1_ParamLimits

0xc425,	// (0x00016edd) list_single_graphic_pane_fp_g1

0xc3e2,	// (0x00016e9a) list_single_graphic_pane_fp_g2_ParamLimits

0xc3e2,	// (0x00016e9a) list_single_graphic_pane_fp_g2

0x7348,	// (0x00011e00) list_single_graphic_pane_fp_g3_ParamLimits

0x7348,	// (0x00011e00) list_single_graphic_pane_fp_g3

0xc3ee,	// (0x00016ea6) list_single_graphic_pane_fp_g4_ParamLimits

0xc3ee,	// (0x00016ea6) list_single_graphic_pane_fp_g4

0xc402,	// (0x00016eba) list_single_graphic_pane_fp_g5_ParamLimits

0xc402,	// (0x00016eba) list_single_graphic_pane_fp_g5

0x0004,

0xfb82,	// (0x0001a63a) list_single_graphic_pane_fp_g_ParamLimits

0xfb82,	// (0x0001a63a) list_single_graphic_pane_fp_g

0xc431,	// (0x00016ee9) list_single_graphic_pane_fp_t1_ParamLimits

0xc431,	// (0x00016ee9) list_single_graphic_pane_fp_t1

0xc425,	// (0x00016edd) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc425,	// (0x00016edd) list_single_graphic_heading_pane_fp_g1

0xc3e2,	// (0x00016e9a) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc3e2,	// (0x00016e9a) list_single_graphic_heading_pane_fp_g2

0x7348,	// (0x00011e00) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x7348,	// (0x00011e00) list_single_graphic_heading_pane_fp_g3

0xc3ee,	// (0x00016ea6) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc3ee,	// (0x00016ea6) list_single_graphic_heading_pane_fp_g4

0xc402,	// (0x00016eba) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc402,	// (0x00016eba) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb82,	// (0x0001a63a) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb82,	// (0x0001a63a) list_single_graphic_heading_pane_fp_g

0xc447,	// (0x00016eff) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc447,	// (0x00016eff) list_single_graphic_heading_pane_fp_t1

0xc45d,	// (0x00016f15) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc45d,	// (0x00016f15) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8d,	// (0x0001a645) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8d,	// (0x0001a645) list_single_graphic_heading_pane_fp_t

0xc46f,	// (0x00016f27) list_single_cale_day_pane_fp_g1_ParamLimits

0xc46f,	// (0x00016f27) list_single_cale_day_pane_fp_g1

0xc4a7,	// (0x00016f5f) list_single_cale_day_pane_fp_g2_ParamLimits

0xc4a7,	// (0x00016f5f) list_single_cale_day_pane_fp_g2

0xc4b3,	// (0x00016f6b) list_single_cale_day_pane_fp_g3_ParamLimits

0xc4b3,	// (0x00016f6b) list_single_cale_day_pane_fp_g3

0xc4db,	// (0x00016f93) list_single_cale_day_pane_fp_g4_ParamLimits

0xc4db,	// (0x00016f93) list_single_cale_day_pane_fp_g4

0xc4ff,	// (0x00016fb7) list_single_cale_day_pane_fp_g5_ParamLimits

0xc4ff,	// (0x00016fb7) list_single_cale_day_pane_fp_g5

0x0004,

0xfb92,	// (0x0001a64a) list_single_cale_day_pane_fp_g_ParamLimits

0xfb92,	// (0x0001a64a) list_single_cale_day_pane_fp_g

0xc523,	// (0x00016fdb) list_single_cale_day_pane_fp_t1_ParamLimits

0xc523,	// (0x00016fdb) list_single_cale_day_pane_fp_t1

0xc549,	// (0x00017001) list_single_cale_day_pane_fp_t2_ParamLimits

0xc549,	// (0x00017001) list_single_cale_day_pane_fp_t2

0xc562,	// (0x0001701a) list_single_cale_day_pane_fp_t3_ParamLimits

0xc562,	// (0x0001701a) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9d,	// (0x0001a655) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9d,	// (0x0001a655) list_single_cale_day_pane_fp_t

0xc3e2,	// (0x00016e9a) list_empty_pane_fp_g1_ParamLimits

0xc3e2,	// (0x00016e9a) list_empty_pane_fp_g1

0xc57b,	// (0x00017033) list_empty_pane_fp_t1

0xc589,	// (0x00017041) list_empty_pane_fp_t2

0x0001,

0xfba4,	// (0x0001a65c) list_empty_pane_fp_t

0xc3e2,	// (0x00016e9a) list_single_heading_pane_fp_g1_ParamLimits

0xc3e2,	// (0x00016e9a) list_single_heading_pane_fp_g1

0x7348,	// (0x00011e00) list_single_heading_pane_fp_g2_ParamLimits

0x7348,	// (0x00011e00) list_single_heading_pane_fp_g2

0xc3ee,	// (0x00016ea6) list_single_heading_pane_fp_g3_ParamLimits

0xc3ee,	// (0x00016ea6) list_single_heading_pane_fp_g3

0x0002,

0xfba9,	// (0x0001a661) list_single_heading_pane_fp_g_ParamLimits

0xfba9,	// (0x0001a661) list_single_heading_pane_fp_g

0xc597,	// (0x0001704f) list_single_heading_pane_fp_t1_ParamLimits

0xc597,	// (0x0001704f) list_single_heading_pane_fp_t1

0xc5a9,	// (0x00017061) list_single_heading_pane_fp_t2_ParamLimits

0xc5a9,	// (0x00017061) list_single_heading_pane_fp_t2

0x0001,

0xfbb0,	// (0x0001a668) list_single_heading_pane_fp_t_ParamLimits

0xfbb0,	// (0x0001a668) list_single_heading_pane_fp_t

0x7a6e,	// (0x00012526) aid_size_cell_fast

0x6b11,	// (0x000115c9) soft_indicator_pane_cp1_t1

0x7aab,	// (0x00012563) cell_app_pane_cp2_ParamLimits

0x7aab,	// (0x00012563) cell_app_pane_cp2

0x5b43,	// (0x000105fb) fep_hwr_candidate_drop_down_list_pane

0x5d1b,	// (0x000107d3) fep_hwr_candidate_pane_g3_ParamLimits

0x5d1b,	// (0x000107d3) fep_hwr_candidate_pane_g3

0x4037,	// (0x0000eaef) fep_hwr_candidate_pane_g4_ParamLimits

0x4037,	// (0x0000eaef) fep_hwr_candidate_pane_g4

0x0002,

0xfb1f,	// (0x0001a5d7) fep_hwr_candidate_pane_g_ParamLimits

0xfb1f,	// (0x0001a5d7) fep_hwr_candidate_pane_g

0xbeeb,	// (0x000169a3) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbeeb,	// (0x000169a3) fep_vkb_candidate_drop_down_list_pane

0xc2fc,	// (0x00016db4) fep_vkb_candidate_pane_g3

0xc304,	// (0x00016dbc) fep_vkb_candidate_pane_g4

0x0002,

0xfb4c,	// (0x0001a604) fep_vkb_candidate_pane_g

0x5d86,	// (0x0001083e) cell_hwr_candidate_pane_g1_ParamLimits

0x5d94,	// (0x0001084c) cell_hwr_candidate_pane_g3_ParamLimits

0x5d94,	// (0x0001084c) cell_hwr_candidate_pane_g3

0xe17e,	// (0x00018c36) cell_hwr_candidate_pane_g4_ParamLimits

0xe17e,	// (0x00018c36) cell_hwr_candidate_pane_g4

0x0002,

0xfb6b,	// (0x0001a623) cell_hwr_candidate_pane_g_ParamLimits

0xfb6b,	// (0x0001a623) cell_hwr_candidate_pane_g

0xc31b,	// (0x00016dd3) cell_vkb_candidate_pane_g3_ParamLimits

0xc31b,	// (0x00016dd3) cell_vkb_candidate_pane_g3

0xc336,	// (0x00016dee) cell_vkb_candidate_pane_g4_ParamLimits

0xc336,	// (0x00016dee) cell_vkb_candidate_pane_g4

0xc5bf,	// (0x00017077) cell_app_pane_cp2_g1_ParamLimits

0xc5bf,	// (0x00017077) cell_app_pane_cp2_g1

0xc5dd,	// (0x00017095) cell_app_pane_cp2_g2_ParamLimits

0xc5dd,	// (0x00017095) cell_app_pane_cp2_g2

0x0001,

0xfbb5,	// (0x0001a66d) cell_app_pane_cp2_g_ParamLimits

0xfbb5,	// (0x0001a66d) cell_app_pane_cp2_g

0xc5e9,	// (0x000170a1) cell_app_pane_cp2_t1_ParamLimits

0xc5e9,	// (0x000170a1) cell_app_pane_cp2_t1

0x76e5,	// (0x0001219d) grid_highlight_pane_cp1_ParamLimits

0x76e5,	// (0x0001219d) grid_highlight_pane_cp1

0x5dd3,	// (0x0001088b) cell_hwr_candidate_pane_cp1_ParamLimits

0x5dd3,	// (0x0001088b) cell_hwr_candidate_pane_cp1

0x5d86,	// (0x0001083e) fep_hwr_candidate_drop_down_list_pane_g1

0x5df2,	// (0x000108aa) fep_hwr_candidate_drop_down_list_pane_g2

0x5dff,	// (0x000108b7) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbba,	// (0x0001a672) fep_hwr_candidate_drop_down_list_pane_g

0x5e0c,	// (0x000108c4) fep_hwr_candidate_drop_down_list_scroll_pane

0x5e15,	// (0x000108cd) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5e15,	// (0x000108cd) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x5e22,	// (0x000108da) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5e22,	// (0x000108da) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x5e2f,	// (0x000108e7) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5e2f,	// (0x000108e7) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x5e3c,	// (0x000108f4) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5e3c,	// (0x000108f4) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x5e57,	// (0x0001090f) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5e57,	// (0x0001090f) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x5e72,	// (0x0001092a) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5e72,	// (0x0001092a) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x5e8d,	// (0x00010945) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5e8d,	// (0x00010945) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x5ea8,	// (0x00010960) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5ea8,	// (0x00010960) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc1,	// (0x0001a679) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc1,	// (0x0001a679) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc5fb,	// (0x000170b3) cell_vkb_candidate_pane_cp1_ParamLimits

0xc5fb,	// (0x000170b3) cell_vkb_candidate_pane_cp1

0xc004,	// (0x00016abc) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc004,	// (0x00016abc) fep_vkb_candidate_drop_down_list_pane_g1

0xc61b,	// (0x000170d3) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc61b,	// (0x000170d3) fep_vkb_candidate_drop_down_list_pane_g2

0xc628,	// (0x000170e0) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc628,	// (0x000170e0) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd2,	// (0x0001a68a) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd2,	// (0x0001a68a) fep_vkb_candidate_drop_down_list_pane_g

0xc635,	// (0x000170ed) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc635,	// (0x000170ed) fep_vkb_candidate_drop_down_list_scroll_pane

0xc642,	// (0x000170fa) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc642,	// (0x000170fa) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc64f,	// (0x00017107) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc64f,	// (0x00017107) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc65b,	// (0x00017113) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc65b,	// (0x00017113) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc667,	// (0x0001711f) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc667,	// (0x0001711f) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc688,	// (0x00017140) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc688,	// (0x00017140) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc6a9,	// (0x00017161) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc6a9,	// (0x00017161) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc6ca,	// (0x00017182) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc6ca,	// (0x00017182) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc6eb,	// (0x000171a3) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc6eb,	// (0x000171a3) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd9,	// (0x0001a691) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd9,	// (0x0001a691) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x6828,	// (0x000112e0) title_pane_g1_ParamLimits

0x6835,	// (0x000112ed) title_pane_g2_ParamLimits

0xf56a,	// (0x0001a022) title_pane_g_ParamLimits

0x7eb8,	// (0x00012970) aid_call2_pane

0x7ec0,	// (0x00012978) aid_call_pane

0x7ec8,	// (0x00012980) popup_clock_analogue_window_g1

0x7ec8,	// (0x00012980) popup_clock_analogue_window_g2

0x5224,	// (0x0000fcdc) popup_clock_analogue_window_g3

0x522d,	// (0x0000fce5) popup_clock_analogue_window_g4

0x6814,	// (0x000112cc) popup_clock_analogue_window_g5

0x0004,

0xf70f,	// (0x0001a1c7) popup_clock_analogue_window_g

0x5235,	// (0x0000fced) popup_clock_analogue_window_t1

0x5243,	// (0x0000fcfb) clock_digital_number_pane_ParamLimits

0x5243,	// (0x0000fcfb) clock_digital_number_pane

0x524f,	// (0x0000fd07) clock_digital_number_pane_cp02_ParamLimits

0x524f,	// (0x0000fd07) clock_digital_number_pane_cp02

0x525b,	// (0x0000fd13) clock_digital_number_pane_cp03_ParamLimits

0x525b,	// (0x0000fd13) clock_digital_number_pane_cp03

0x5267,	// (0x0000fd1f) clock_digital_number_pane_cp04_ParamLimits

0x5267,	// (0x0000fd1f) clock_digital_number_pane_cp04

0x5273,	// (0x0000fd2b) clock_digital_separator_pane_ParamLimits

0x5273,	// (0x0000fd2b) clock_digital_separator_pane

0x527f,	// (0x0000fd37) popup_clock_digital_window_t1_ParamLimits

0x527f,	// (0x0000fd37) popup_clock_digital_window_t1

0x6814,	// (0x000112cc) clock_digital_number_pane_g1

0x6814,	// (0x000112cc) clock_digital_number_pane_g2

0x0001,

0xf71a,	// (0x0001a1d2) clock_digital_number_pane_g

0x6814,	// (0x000112cc) clock_digital_separator_pane_g1

0x6814,	// (0x000112cc) clock_digital_separator_pane_g2

0x0001,

0xf71a,	// (0x0001a1d2) clock_digital_separator_pane_g

0x8e7f,	// (0x00013937) aid_fill_nsta_ParamLimits

0x8fc1,	// (0x00013a79) indicator_nsta_pane_ParamLimits

0x9133,	// (0x00013beb) popup_clock_analogue_window

0x9133,	// (0x00013beb) popup_clock_digital_window

0x68fe,	// (0x000113b6) grid_indicator_nsta_pane_ParamLimits

0xb702,	// (0x000161ba) clock_nsta_pane_t2

0x0001,

0xfa9f,	// (0x0001a557) clock_nsta_pane_t

0x51e8,	// (0x0000fca0) aid_size_max_handle

0x51f2,	// (0x0000fcaa) aid_size_min_handle

0x8534,	// (0x00012fec) editor_scroll_pane

0xc706,	// (0x000171be) ex_editor_pane

0x79dc,	// (0x00012494) scroll_pane_cp13

0x7123,	// (0x00011bdb) scroll_pane_cp14

0x7ef2,	// (0x000129aa) scroll_pane_cp36

0x7f1e,	// (0x000129d6) list_single_graphic_hl_pane_cp2_ParamLimits

0x7f1e,	// (0x000129d6) list_single_graphic_hl_pane_cp2

0xaaee,	// (0x000155a6) list_single_graphic_hl_pane_ParamLimits

0xaaee,	// (0x000155a6) list_single_graphic_hl_pane

0xc70e,	// (0x000171c6) aid_size_min_hl_cp1

0xc717,	// (0x000171cf) list_highlight_pane_cp34_ParamLimits

0xc717,	// (0x000171cf) list_highlight_pane_cp34

0xc728,	// (0x000171e0) list_single_graphic_hl_pane_g1_ParamLimits

0xc728,	// (0x000171e0) list_single_graphic_hl_pane_g1

0xc735,	// (0x000171ed) list_single_graphic_hl_pane_g2_ParamLimits

0xc735,	// (0x000171ed) list_single_graphic_hl_pane_g2

0xc735,	// (0x000171ed) list_single_graphic_hl_pane_g3_ParamLimits

0xc735,	// (0x000171ed) list_single_graphic_hl_pane_g3

0x930c,	// (0x00013dc4) list_single_graphic_hl_pane_g4_ParamLimits

0x930c,	// (0x00013dc4) list_single_graphic_hl_pane_g4

0xc741,	// (0x000171f9) list_single_graphic_hl_pane_g5_ParamLimits

0xc741,	// (0x000171f9) list_single_graphic_hl_pane_g5

0x0004,

0xfbea,	// (0x0001a6a2) list_single_graphic_hl_pane_g_ParamLimits

0xfbea,	// (0x0001a6a2) list_single_graphic_hl_pane_g

0xc755,	// (0x0001720d) list_single_graphic_hl_pane_t1_ParamLimits

0xc755,	// (0x0001720d) list_single_graphic_hl_pane_t1

0xc76b,	// (0x00017223) aid_size_min_hl_cp2

0xc774,	// (0x0001722c) list_highlight_pane_cp34_cp2_ParamLimits

0xc774,	// (0x0001722c) list_highlight_pane_cp34_cp2

0xc728,	// (0x000171e0) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc728,	// (0x000171e0) list_single_graphic_hl_pane_g1_cp2

0xc781,	// (0x00017239) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc781,	// (0x00017239) list_single_graphic_hl_pane_g2_cp2

0xc78d,	// (0x00017245) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc78d,	// (0x00017245) list_single_graphic_hl_pane_g3_cp2

0x930c,	// (0x00013dc4) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x930c,	// (0x00013dc4) list_single_graphic_hl_pane_g4_cp2

0xc741,	// (0x000171f9) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc741,	// (0x000171f9) list_single_graphic_hl_pane_g5_cp2

0x552f,	// (0x0000ffe7) control_pane_g4_ParamLimits

0x552f,	// (0x0000ffe7) control_pane_g4

0x88be,	// (0x00013376) bg_popup_sub_pane_cp10_ParamLimits

0xbd7c,	// (0x00016834) list_choice_list_pane_ParamLimits

0xbd8b,	// (0x00016843) scroll_pane_cp23

0x6ba1,	// (0x00011659) bg_popup_preview_window_pane_cp02_ParamLimits

0xc387,	// (0x00016e3f) list_preview_fixed_pane_ParamLimits

0xc39d,	// (0x00016e55) list_preview_fixed_pane_cp_ParamLimits

0xc39d,	// (0x00016e55) list_preview_fixed_pane_cp

0xc3a9,	// (0x00016e61) popup_preview_fixed_window_g1_ParamLimits

0xc3a9,	// (0x00016e61) popup_preview_fixed_window_g1

0xc3b5,	// (0x00016e6d) popup_preview_fixed_window_g2_ParamLimits

0xc3b5,	// (0x00016e6d) popup_preview_fixed_window_g2

0x0002,

0xfb72,	// (0x0001a62a) popup_preview_fixed_window_g_ParamLimits

0xfb72,	// (0x0001a62a) popup_preview_fixed_window_g

0x515c,	// (0x0000fc14) aid_navi_side_left_pane_ParamLimits

0x5171,	// (0x0000fc29) aid_navi_side_right_pane_ParamLimits

0x5189,	// (0x0000fc41) navi_icon_pane_stacon_ParamLimits

0x519d,	// (0x0000fc55) navi_navi_pane_stacon_ParamLimits

0x5189,	// (0x0000fc41) navi_text_pane_stacon_ParamLimits

0x680a,	// (0x000112c2) main_text_info_pane

0xc7b1,	// (0x00017269) listscroll_text_info_pane

0xc7b9,	// (0x00017271) list_text_info_pane_ParamLimits

0xc7b9,	// (0x00017271) list_text_info_pane

0xc7c8,	// (0x00017280) scroll_pane_cp24_ParamLimits

0xc7c8,	// (0x00017280) scroll_pane_cp24

0xc7e6,	// (0x0001729e) list_text_info_pane_t1_ParamLimits

0xc7e6,	// (0x0001729e) list_text_info_pane_t1

0x8908,	// (0x000133c0) popup_fast_swap2_window_ParamLimits

0x8908,	// (0x000133c0) popup_fast_swap2_window

0xc817,	// (0x000172cf) aid_size_cell_fast2

0x680a,	// (0x000112c2) bg_popup_window_pane_cp17

0x98b0,	// (0x00014368) heading_pane_cp2

0x6ded,	// (0x000118a5) listscroll_fast2_pane

0xc821,	// (0x000172d9) grid_fast2_pane

0xc82b,	// (0x000172e3) listscroll_fast2_pane_g1

0xc833,	// (0x000172eb) listscroll_fast2_pane_g2

0x0001,

0xfbf5,	// (0x0001a6ad) listscroll_fast2_pane_g

0x79dc,	// (0x00012494) scroll_pane_cp26

0xc83d,	// (0x000172f5) cell_fast2_pane_ParamLimits

0xc83d,	// (0x000172f5) cell_fast2_pane

0xc852,	// (0x0001730a) cell_fast2_pane_g1

0xc85b,	// (0x00017313) cell_fast2_pane_g2

0xc864,	// (0x0001731c) cell_fast2_pane_g3

0x0002,

0xfbfa,	// (0x0001a6b2) cell_fast2_pane_g

0x6ee0,	// (0x00011998) grid_highlight_pane_cp9

0x6ef5,	// (0x000119ad) main_eswt_pane_ParamLimits

0x6ef5,	// (0x000119ad) main_eswt_pane

0xc7dd,	// (0x00017295) list_single_text_info_pane

0xc86c,	// (0x00017324) eswt_ctrl_button_pane

0xc86c,	// (0x00017324) eswt_ctrl_canvas_pane

0xc874,	// (0x0001732c) eswt_ctrl_combo_pane

0xc86c,	// (0x00017324) eswt_ctrl_default_pane

0xc86c,	// (0x00017324) eswt_ctrl_label_pane

0xc87c,	// (0x00017334) eswt_ctrl_wait_pane

0xc884,	// (0x0001733c) eswt_shell_pane

0x680a,	// (0x000112c2) listscroll_eswt_app_pane

0xc8a4,	// (0x0001735c) popup_eswt_tasktip_window_ParamLimits

0xc8a4,	// (0x0001735c) popup_eswt_tasktip_window

0x94b0,	// (0x00013f68) bg_popup_window_pane_cp18

0xc8b5,	// (0x0001736d) eswt_control_pane_g1_ParamLimits

0xc8b5,	// (0x0001736d) eswt_control_pane_g1

0xc8c2,	// (0x0001737a) eswt_control_pane_g2_ParamLimits

0xc8c2,	// (0x0001737a) eswt_control_pane_g2

0xc8cf,	// (0x00017387) eswt_control_pane_g3_ParamLimits

0xc8cf,	// (0x00017387) eswt_control_pane_g3

0xc8dc,	// (0x00017394) eswt_control_pane_g4_ParamLimits

0xc8dc,	// (0x00017394) eswt_control_pane_g4

0x0003,

0xfc01,	// (0x0001a6b9) eswt_control_pane_g_ParamLimits

0xfc01,	// (0x0001a6b9) eswt_control_pane_g

0x76e5,	// (0x0001219d) bg_button_pane_ParamLimits

0x76e5,	// (0x0001219d) bg_button_pane

0x6ef5,	// (0x000119ad) common_borders_pane_copy2_ParamLimits

0x6ef5,	// (0x000119ad) common_borders_pane_copy2

0xc8e9,	// (0x000173a1) control_button_pane_g1_ParamLimits

0xc8e9,	// (0x000173a1) control_button_pane_g1

0xc8f5,	// (0x000173ad) control_button_pane_g2_ParamLimits

0xc8f5,	// (0x000173ad) control_button_pane_g2

0xc901,	// (0x000173b9) control_button_pane_g3_ParamLimits

0xc901,	// (0x000173b9) control_button_pane_g3

0x0002,

0xfc0a,	// (0x0001a6c2) control_button_pane_g_ParamLimits

0xfc0a,	// (0x0001a6c2) control_button_pane_g

0xc915,	// (0x000173cd) control_button_pane_t1

0xc923,	// (0x000173db) control_button_pane_t2

0x0001,

0xfc11,	// (0x0001a6c9) control_button_pane_t

0x9396,	// (0x00013e4e) bg_button_pane_g1

0x93a6,	// (0x00013e5e) bg_button_pane_g2

0x939e,	// (0x00013e56) bg_button_pane_g3

0x93b6,	// (0x00013e6e) bg_button_pane_g4

0x93ae,	// (0x00013e66) bg_button_pane_g5

0x93be,	// (0x00013e76) bg_button_pane_g6

0x93c6,	// (0x00013e7e) bg_button_pane_g7

0x93d6,	// (0x00013e8e) bg_button_pane_g8

0x93ce,	// (0x00013e86) bg_button_pane_g9

0x0008,

0xf872,	// (0x0001a32a) bg_button_pane_g

0xbd37,	// (0x000167ef) common_borders_pane_ParamLimits

0xbd37,	// (0x000167ef) common_borders_pane

0xc8b5,	// (0x0001736d) eswt_control_pane_g1_copy1_ParamLimits

0xc8b5,	// (0x0001736d) eswt_control_pane_g1_copy1

0xc8c2,	// (0x0001737a) eswt_control_pane_g2_copy1_ParamLimits

0xc8c2,	// (0x0001737a) eswt_control_pane_g2_copy1

0xc8cf,	// (0x00017387) eswt_control_pane_g3_copy1_ParamLimits

0xc8cf,	// (0x00017387) eswt_control_pane_g3_copy1

0xc8dc,	// (0x00017394) eswt_control_pane_g4_copy1_ParamLimits

0xc8dc,	// (0x00017394) eswt_control_pane_g4_copy1

0xbd72,	// (0x0001682a) bg_eswt_ctrl_canvas_pane_g1

0xbd37,	// (0x000167ef) common_borders_pane_cp2_ParamLimits

0xbd37,	// (0x000167ef) common_borders_pane_cp2

0xbd37,	// (0x000167ef) common_borders_pane_cp3_ParamLimits

0xbd37,	// (0x000167ef) common_borders_pane_cp3

0xc931,	// (0x000173e9) separator_horizontal_pane

0xc939,	// (0x000173f1) separator_vertical_pane

0xc8b5,	// (0x0001736d) eswt_control_pane_g1_copy2_ParamLimits

0xc8b5,	// (0x0001736d) eswt_control_pane_g1_copy2

0xc8c2,	// (0x0001737a) eswt_control_pane_g2_copy2_ParamLimits

0xc8c2,	// (0x0001737a) eswt_control_pane_g2_copy2

0xc8cf,	// (0x00017387) eswt_control_pane_g3_copy2_ParamLimits

0xc8cf,	// (0x00017387) eswt_control_pane_g3_copy2

0xc8dc,	// (0x00017394) eswt_control_pane_g4_copy2_ParamLimits

0xc8dc,	// (0x00017394) eswt_control_pane_g4_copy2

0x680a,	// (0x000112c2) common_borders_pane_cp4

0xc942,	// (0x000173fa) separator_horizontal_pane_g1

0xc94b,	// (0x00017403) separator_horizontal_pane_g2

0xc954,	// (0x0001740c) separator_horizontal_pane_g3

0x0002,

0xfc16,	// (0x0001a6ce) separator_horizontal_pane_g

0xc8b5,	// (0x0001736d) eswt_control_pane_g1_copy3_ParamLimits

0xc8b5,	// (0x0001736d) eswt_control_pane_g1_copy3

0xc8c2,	// (0x0001737a) eswt_control_pane_g2_copy3_ParamLimits

0xc8c2,	// (0x0001737a) eswt_control_pane_g2_copy3

0xc8cf,	// (0x00017387) eswt_control_pane_g3_copy3_ParamLimits

0xc8cf,	// (0x00017387) eswt_control_pane_g3_copy3

0xc8dc,	// (0x00017394) eswt_control_pane_g4_copy3_ParamLimits

0xc8dc,	// (0x00017394) eswt_control_pane_g4_copy3

0x680a,	// (0x000112c2) common_borders_pane_cp5

0xc95d,	// (0x00017415) separator_vertical_pane_g1

0xc966,	// (0x0001741e) separator_vertical_pane_g2

0xc96f,	// (0x00017427) separator_vertical_pane_g3

0x0002,

0xfc1d,	// (0x0001a6d5) separator_vertical_pane_g

0xc8b5,	// (0x0001736d) eswt_control_pane_g1_copy4_ParamLimits

0xc8b5,	// (0x0001736d) eswt_control_pane_g1_copy4

0xc8c2,	// (0x0001737a) eswt_control_pane_g2_copy4_ParamLimits

0xc8c2,	// (0x0001737a) eswt_control_pane_g2_copy4

0xc8cf,	// (0x00017387) eswt_control_pane_g3_copy4_ParamLimits

0xc8cf,	// (0x00017387) eswt_control_pane_g3_copy4

0xc8dc,	// (0x00017394) eswt_control_pane_g4_copy4_ParamLimits

0xc8dc,	// (0x00017394) eswt_control_pane_g4_copy4

0xc978,	// (0x00017430) eswt_ctrl_combo_button_pane

0xc980,	// (0x00017438) eswt_ctrl_input_pane

0xc988,	// (0x00017440) popup_choice_list_window_cp70

0xc990,	// (0x00017448) eswt_ctrl_input_pane_t1

0x680a,	// (0x000112c2) input_focus_pane_cp70

0xbd37,	// (0x000167ef) bg_button_pane_cp70_ParamLimits

0xbd37,	// (0x000167ef) bg_button_pane_cp70

0xc99e,	// (0x00017456) eswt_ctrl_combo_button_pane_g1

0xc9a6,	// (0x0001745e) wait_bar_pane_cp70

0x94b0,	// (0x00013f68) bg_popup_window_pane_cp70_ParamLimits

0x94b0,	// (0x00013f68) bg_popup_window_pane_cp70

0xc9ae,	// (0x00017466) popup_eswt_tasktip_window_t1

0xc9c4,	// (0x0001747c) wait_bar_pane_cp71_ParamLimits

0xc9c4,	// (0x0001747c) wait_bar_pane_cp71

0xc9d0,	// (0x00017488) grid_eswt_app_pane

0x7cfa,	// (0x000127b2) scroll_pane_cp70

0xc9d9,	// (0x00017491) cell_eswt_app_pane_ParamLimits

0xc9d9,	// (0x00017491) cell_eswt_app_pane

0xca09,	// (0x000174c1) cell_eswt_app_pane_g1_ParamLimits

0xca09,	// (0x000174c1) cell_eswt_app_pane_g1

0xca38,	// (0x000174f0) cell_eswt_app_pane_g2_ParamLimits

0xca38,	// (0x000174f0) cell_eswt_app_pane_g2

0x0001,

0xfc24,	// (0x0001a6dc) cell_eswt_app_pane_g_ParamLimits

0xfc24,	// (0x0001a6dc) cell_eswt_app_pane_g

0xca61,	// (0x00017519) cell_eswt_app_pane_t1_ParamLimits

0xca61,	// (0x00017519) cell_eswt_app_pane_t1

0xca93,	// (0x0001754b) grid_highlight_pane_cp70_ParamLimits

0xca93,	// (0x0001754b) grid_highlight_pane_cp70

0x8409,	// (0x00012ec1) set_content_pane_g1

0x87e0,	// (0x00013298) status_small_volume_pane

0x5ec3,	// (0x0001097b) status_small_volume_pane_g1

0x5ecb,	// (0x00010983) volume_small2_pane

0x5ed4,	// (0x0001098c) volume_small2_pane_g1

0x5edd,	// (0x00010995) volume_small2_pane_g2

0x5ee6,	// (0x0001099e) volume_small2_pane_g3

0x5eef,	// (0x000109a7) volume_small2_pane_g4

0x5ef8,	// (0x000109b0) volume_small2_pane_g5

0x5f01,	// (0x000109b9) volume_small2_pane_g6

0x5f0a,	// (0x000109c2) volume_small2_pane_g7

0x5f13,	// (0x000109cb) volume_small2_pane_g8

0x5f1c,	// (0x000109d4) volume_small2_pane_g9

0x5f25,	// (0x000109dd) volume_small2_pane_g10

0x0009,

0xfc29,	// (0x0001a6e1) volume_small2_pane_g

0xc14c,	// (0x00016c04) fep_vkb_top_text_pane_g1_ParamLimits

0xc167,	// (0x00016c1f) fep_vkb_top_text_pane_t1_ParamLimits

0xc3c1,	// (0x00016e79) popup_preview_fixed_window_g3_ParamLimits

0xc3c1,	// (0x00016e79) popup_preview_fixed_window_g3

0x8db5,	// (0x0001386d) popup_toolbar_trans_pane

0xa858,	// (0x00015310) aid_height_set_list_ParamLimits

0xa869,	// (0x00015321) aid_size_parent_ParamLimits

0x88be,	// (0x00013376) list_highlight_pane_cp2_ParamLimits

0x8409,	// (0x00012ec1) set_content_pane_g1_ParamLimits

0xab0a,	// (0x000155c2) list_single_image_pane_ParamLimits

0xab0a,	// (0x000155c2) list_single_image_pane

0xca9f,	// (0x00017557) aid_size_cell_image_ParamLimits

0xca9f,	// (0x00017557) aid_size_cell_image

0xcaac,	// (0x00017564) grid_single_image_pane_ParamLimits

0xcaac,	// (0x00017564) grid_single_image_pane

0x7348,	// (0x00011e00) list_single_image_pane_g1_ParamLimits

0x7348,	// (0x00011e00) list_single_image_pane_g1

0xc3ee,	// (0x00016ea6) list_single_image_pane_g2_ParamLimits

0xc3ee,	// (0x00016ea6) list_single_image_pane_g2

0x0001,

0xfc3e,	// (0x0001a6f6) list_single_image_pane_g_ParamLimits

0xfc3e,	// (0x0001a6f6) list_single_image_pane_g

0x727f,	// (0x00011d37) list_single_image_pane_t1_ParamLimits

0x727f,	// (0x00011d37) list_single_image_pane_t1

0xcaba,	// (0x00017572) cell_image_list_pane_ParamLimits

0xcaba,	// (0x00017572) cell_image_list_pane

0xcacd,	// (0x00017585) cell_image_list_pane_g1

0xcad6,	// (0x0001758e) cell_image_list_pane_g2

0x0001,

0xfc43,	// (0x0001a6fb) cell_image_list_pane_g

0xcadf,	// (0x00017597) aid_size_cell_tb_trans_pane

0x76e5,	// (0x0001219d) bg_tb_trans_pane

0xcaf1,	// (0x000175a9) grid_tb_trans_pane

0x9396,	// (0x00013e4e) bg_tb_trans_pane_g1

0x93a6,	// (0x00013e5e) bg_tb_trans_pane_g2

0x939e,	// (0x00013e56) bg_tb_trans_pane_g3

0x93b6,	// (0x00013e6e) bg_tb_trans_pane_g4

0x93ae,	// (0x00013e66) bg_tb_trans_pane_g5

0x93d6,	// (0x00013e8e) bg_tb_trans_pane_g6

0x93ce,	// (0x00013e86) bg_tb_trans_pane_g7

0x93be,	// (0x00013e76) bg_tb_trans_pane_g8

0x93c6,	// (0x00013e7e) bg_tb_trans_pane_g9

0x0008,

0xfc48,	// (0x0001a700) bg_tb_trans_pane_g

0xcb05,	// (0x000175bd) cell_toolbar_trans_pane_ParamLimits

0xcb05,	// (0x000175bd) cell_toolbar_trans_pane

0xbd72,	// (0x0001682a) cell_toolbar_trans_pane_g1

0xb8ec,	// (0x000163a4) list_form2_midp_pane_t1

0xb8fa,	// (0x000163b2) list_form2_midp_pane_t2

0x0001,

0xfae5,	// (0x0001a59d) list_form2_midp_pane_t

0xb908,	// (0x000163c0) scroll_pane_cp51_ParamLimits

0xbb13,	// (0x000165cb) form2_midp_wait_pane_g1

0xbb1c,	// (0x000165d4) form2_midp_wait_pane_g2

0xbb25,	// (0x000165dd) form2_midp_wait_pane_g3

0x0002,

0xfafa,	// (0x0001a5b2) form2_midp_wait_pane_g

0x68fe,	// (0x000113b6) list_highlight_pane_cp21_ParamLimits

0xbb7c,	// (0x00016634) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbb8b,	// (0x00016643) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xaa92,	// (0x0001554a) list_single_2graphic_im_pane_ParamLimits

0xaa92,	// (0x0001554a) list_single_2graphic_im_pane

0xcb2b,	// (0x000175e3) list_single_2graphic_im_pane_g1_ParamLimits

0xcb2b,	// (0x000175e3) list_single_2graphic_im_pane_g1

0xcb3c,	// (0x000175f4) list_single_2graphic_im_pane_g2_ParamLimits

0xcb3c,	// (0x000175f4) list_single_2graphic_im_pane_g2

0xcb48,	// (0x00017600) list_single_2graphic_im_pane_g3_ParamLimits

0xcb48,	// (0x00017600) list_single_2graphic_im_pane_g3

0x0003,

0xfc5b,	// (0x0001a713) list_single_2graphic_im_pane_g_ParamLimits

0xfc5b,	// (0x0001a713) list_single_2graphic_im_pane_g

0xcb68,	// (0x00017620) list_single_2graphic_im_pane_t1_ParamLimits

0xcb68,	// (0x00017620) list_single_2graphic_im_pane_t1

0xc3cd,	// (0x00016e85) list_single_graphic_2heading_pane_fp_ParamLimits

0xc3cd,	// (0x00016e85) list_single_graphic_2heading_pane_fp

0xc425,	// (0x00016edd) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc425,	// (0x00016edd) list_single_graphic_2heading_pane_fp_g1

0xc3e2,	// (0x00016e9a) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc3e2,	// (0x00016e9a) list_single_graphic_2heading_pane_fp_g2

0x7348,	// (0x00011e00) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x7348,	// (0x00011e00) list_single_graphic_2heading_pane_fp_g3

0xc3ee,	// (0x00016ea6) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc3ee,	// (0x00016ea6) list_single_graphic_2heading_pane_fp_g4

0xc402,	// (0x00016eba) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc402,	// (0x00016eba) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb82,	// (0x0001a63a) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb82,	// (0x0001a63a) list_single_graphic_2heading_pane_fp_g

0xcb99,	// (0x00017651) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xcb99,	// (0x00017651) list_single_graphic_2heading_pane_fp_t1

0xc45d,	// (0x00016f15) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc45d,	// (0x00016f15) list_single_graphic_2heading_pane_fp_t2

0xcbaf,	// (0x00017667) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xcbaf,	// (0x00017667) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc64,	// (0x0001a71c) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc64,	// (0x0001a71c) list_single_graphic_2heading_pane_fp_t

0xbe12,	// (0x000168ca) fep_hwr_write_pane_g5_ParamLimits

0xbe12,	// (0x000168ca) fep_hwr_write_pane_g5

0xbe1e,	// (0x000168d6) fep_hwr_write_pane_g6_ParamLimits

0xbe1e,	// (0x000168d6) fep_hwr_write_pane_g6

0xc884,	// (0x0001733c) eswt_shell_pane_ParamLimits

0x94b0,	// (0x00013f68) bg_popup_window_pane_cp18_ParamLimits

0xa789,	// (0x00015241) heading_pane_cp70

0xc9ae,	// (0x00017466) popup_eswt_tasktip_window_t1_ParamLimits

0x8ed4,	// (0x0001398c) aid_touch_tab_arrow_left

0x8ee0,	// (0x00013998) aid_touch_tab_arrow_right

0x6846,	// (0x000112fe) title_pane_g3_ParamLimits

0x6846,	// (0x000112fe) title_pane_g3

0x75c4,	// (0x0001207c) set_value_pane_g1

0x8db5,	// (0x0001386d) popup_toolbar_trans_pane_ParamLimits

0xcadf,	// (0x00017597) aid_size_cell_tb_trans_pane_ParamLimits

0x76e5,	// (0x0001219d) bg_tb_trans_pane_ParamLimits

0xcaf1,	// (0x000175a9) grid_tb_trans_pane_ParamLimits

0x6ba1,	// (0x00011659) cont_note_pane_ParamLimits

0x6ba1,	// (0x00011659) cont_note_pane

0x6ef5,	// (0x000119ad) cont_snote2_single_text_pane_ParamLimits

0x6ef5,	// (0x000119ad) cont_snote2_single_text_pane

0x6ef5,	// (0x000119ad) cont_snote2_single_graphic_pane_ParamLimits

0x6ef5,	// (0x000119ad) cont_snote2_single_graphic_pane

0x9acb,	// (0x00014583) cont_note_wait_pane_ParamLimits

0x9acb,	// (0x00014583) cont_note_wait_pane

0x9acb,	// (0x00014583) cont_note_image_pane_ParamLimits

0x9acb,	// (0x00014583) cont_note_image_pane

0xcbc5,	// (0x0001767d) popup_note2_window_g1_ParamLimits

0xcbc5,	// (0x0001767d) popup_note2_window_g1

0xcbf6,	// (0x000176ae) popup_note2_window_t1_ParamLimits

0xcbf6,	// (0x000176ae) popup_note2_window_t1

0xcc3b,	// (0x000176f3) popup_note2_window_t2_ParamLimits

0xcc3b,	// (0x000176f3) popup_note2_window_t2

0xcc80,	// (0x00017738) popup_note2_window_t3_ParamLimits

0xcc80,	// (0x00017738) popup_note2_window_t3

0xccc5,	// (0x0001777d) popup_note2_window_t4_ParamLimits

0xccc5,	// (0x0001777d) popup_note2_window_t4

0x6c25,	// (0x000116dd) popup_note2_window_t5_ParamLimits

0x6c25,	// (0x000116dd) popup_note2_window_t5

0x0004,

0xfc70,	// (0x0001a728) popup_note2_window_t_ParamLimits

0xfc70,	// (0x0001a728) popup_note2_window_t

0xccf4,	// (0x000177ac) popup_note2_image_window_g1_ParamLimits

0xccf4,	// (0x000177ac) popup_note2_image_window_g1

0xcd00,	// (0x000177b8) popup_note2_image_window_g2_ParamLimits

0xcd00,	// (0x000177b8) popup_note2_image_window_g2

0x0001,

0xfc7b,	// (0x0001a733) popup_note2_image_window_g_ParamLimits

0xfc7b,	// (0x0001a733) popup_note2_image_window_g

0xcd12,	// (0x000177ca) popup_note2_image_window_t1_ParamLimits

0xcd12,	// (0x000177ca) popup_note2_image_window_t1

0xcd2a,	// (0x000177e2) popup_note2_image_window_t2_ParamLimits

0xcd2a,	// (0x000177e2) popup_note2_image_window_t2

0xcd42,	// (0x000177fa) popup_note2_image_window_t3_ParamLimits

0xcd42,	// (0x000177fa) popup_note2_image_window_t3

0x0002,

0xfc80,	// (0x0001a738) popup_note2_image_window_t_ParamLimits

0xfc80,	// (0x0001a738) popup_note2_image_window_t

0x9ad9,	// (0x00014591) popup_note2_wait_window_g1_ParamLimits

0x9ad9,	// (0x00014591) popup_note2_wait_window_g1

0xcd5e,	// (0x00017816) popup_note2_wait_window_g2_ParamLimits

0xcd5e,	// (0x00017816) popup_note2_wait_window_g2

0x9af1,	// (0x000145a9) popup_note2_wait_window_g3_ParamLimits

0x9af1,	// (0x000145a9) popup_note2_wait_window_g3

0x0002,

0xfc87,	// (0x0001a73f) popup_note2_wait_window_g_ParamLimits

0xfc87,	// (0x0001a73f) popup_note2_wait_window_g

0xcd6a,	// (0x00017822) popup_note2_wait_window_t1_ParamLimits

0xcd6a,	// (0x00017822) popup_note2_wait_window_t1

0xcd88,	// (0x00017840) popup_note2_wait_window_t2_ParamLimits

0xcd88,	// (0x00017840) popup_note2_wait_window_t2

0xcda6,	// (0x0001785e) popup_note2_wait_window_t3_ParamLimits

0xcda6,	// (0x0001785e) popup_note2_wait_window_t3

0xcdb8,	// (0x00017870) popup_note2_wait_window_t4_ParamLimits

0xcdb8,	// (0x00017870) popup_note2_wait_window_t4

0x0003,

0xfc8e,	// (0x0001a746) popup_note2_wait_window_t_ParamLimits

0xfc8e,	// (0x0001a746) popup_note2_wait_window_t

0xcdca,	// (0x00017882) wait_bar2_pane_ParamLimits

0xcdca,	// (0x00017882) wait_bar2_pane

0xcde2,	// (0x0001789a) popup_snote2_single_text_window_g1_ParamLimits

0xcde2,	// (0x0001789a) popup_snote2_single_text_window_g1

0xce0a,	// (0x000178c2) popup_snote2_single_text_window_t1_ParamLimits

0xce0a,	// (0x000178c2) popup_snote2_single_text_window_t1

0xce56,	// (0x0001790e) popup_snote2_single_text_window_t2_ParamLimits

0xce56,	// (0x0001790e) popup_snote2_single_text_window_t2

0xcea2,	// (0x0001795a) popup_snote2_single_text_window_t3_ParamLimits

0xcea2,	// (0x0001795a) popup_snote2_single_text_window_t3

0xcee3,	// (0x0001799b) popup_snote2_single_text_window_t4_ParamLimits

0xcee3,	// (0x0001799b) popup_snote2_single_text_window_t4

0xcf19,	// (0x000179d1) popup_snote2_single_text_window_t5_ParamLimits

0xcf19,	// (0x000179d1) popup_snote2_single_text_window_t5

0x0004,

0xfc97,	// (0x0001a74f) popup_snote2_single_text_window_t_ParamLimits

0xfc97,	// (0x0001a74f) popup_snote2_single_text_window_t

0xcf44,	// (0x000179fc) popup_snote2_single_graphic_window_g1_ParamLimits

0xcf44,	// (0x000179fc) popup_snote2_single_graphic_window_g1

0xcf6c,	// (0x00017a24) popup_snote2_single_graphic_window_g2_ParamLimits

0xcf6c,	// (0x00017a24) popup_snote2_single_graphic_window_g2

0x0001,

0xfca2,	// (0x0001a75a) popup_snote2_single_graphic_window_g_ParamLimits

0xfca2,	// (0x0001a75a) popup_snote2_single_graphic_window_g

0xcf94,	// (0x00017a4c) popup_snote2_single_graphic_window_t1_ParamLimits

0xcf94,	// (0x00017a4c) popup_snote2_single_graphic_window_t1

0xcfe0,	// (0x00017a98) popup_snote2_single_graphic_window_t2_ParamLimits

0xcfe0,	// (0x00017a98) popup_snote2_single_graphic_window_t2

0xcea2,	// (0x0001795a) popup_snote2_single_graphic_window_t3_ParamLimits

0xcea2,	// (0x0001795a) popup_snote2_single_graphic_window_t3

0xcee3,	// (0x0001799b) popup_snote2_single_graphic_window_t4_ParamLimits

0xcee3,	// (0x0001799b) popup_snote2_single_graphic_window_t4

0xcf19,	// (0x000179d1) popup_snote2_single_graphic_window_t5_ParamLimits

0xcf19,	// (0x000179d1) popup_snote2_single_graphic_window_t5

0x0004,

0xfca7,	// (0x0001a75f) popup_snote2_single_graphic_window_t_ParamLimits

0xfca7,	// (0x0001a75f) popup_snote2_single_graphic_window_t

0xb7c5,	// (0x0001627d) clock_nsta_pane_cp2_t1

0xb7c5,	// (0x0001627d) clock_nsta_pane_cp2_t2

0x0001,

0xfabb,	// (0x0001a573) clock_nsta_pane_cp2_t

0x76ff,	// (0x000121b7) form_field_data_wide_pane_g1_ParamLimits

0x770b,	// (0x000121c3) form_field_data_wide_pane_g2_ParamLimits

0x770b,	// (0x000121c3) form_field_data_wide_pane_g2

0x7717,	// (0x000121cf) form_field_data_wide_pane_g3_ParamLimits

0x7717,	// (0x000121cf) form_field_data_wide_pane_g3

0x0002,

0xf692,	// (0x0001a14a) form_field_data_wide_pane_g_ParamLimits

0xf692,	// (0x0001a14a) form_field_data_wide_pane_g

0xb69e,	// (0x00016156) grid_touch_3_pane_ParamLimits

0xb69e,	// (0x00016156) grid_touch_3_pane

0xd02c,	// (0x00017ae4) cell_touch_3_pane_ParamLimits

0xd02c,	// (0x00017ae4) cell_touch_3_pane

0xbd72,	// (0x0001682a) cell_touch_3_pane_g1

0xbd72,	// (0x0001682a) cell_touch_3_pane_g2

0x0001,

0xfb40,	// (0x0001a5f8) cell_touch_3_pane_g

0x6c57,	// (0x0001170f) cont_query_data_pane

0x6c5f,	// (0x00011717) cont_query_data_pane_cp1

0xd05a,	// (0x00017b12) button_value_adjust_pane_cp7

0xd062,	// (0x00017b1a) query_popup_pane_cp3

0x7f8d,	// (0x00012a45) bg_popup_sub_pane_cp22_ParamLimits

0x529e,	// (0x0000fd56) navi_navi_volume_pane_cp2

0x52b9,	// (0x0000fd71) popup_side_volume_key_window_g2

0x52c8,	// (0x0000fd80) popup_side_volume_key_window_g3

0x0002,

0xf724,	// (0x0001a1dc) popup_side_volume_key_window_g

0x52e5,	// (0x0000fd9d) popup_side_volume_key_window_t2

0x0001,

0xf72b,	// (0x0001a1e3) popup_side_volume_key_window_t

0x82d3,	// (0x00012d8b) popup_side_volume_key_window_ParamLimits

0x7308,	// (0x00011dc0) list_double_graphic_pane_g4_ParamLimits

0x7308,	// (0x00011dc0) list_double_graphic_pane_g4

0xaacf,	// (0x00015587) list_single_2heading_msg_pane_ParamLimits

0xaacf,	// (0x00015587) list_single_2heading_msg_pane

0xd091,	// (0x00017b49) list_single_2heading_msg_pane_g1_ParamLimits

0xd091,	// (0x00017b49) list_single_2heading_msg_pane_g1

0x846d,	// (0x00012f25) list_single_2heading_msg_pane_g2_ParamLimits

0x846d,	// (0x00012f25) list_single_2heading_msg_pane_g2

0xd09d,	// (0x00017b55) list_single_2heading_msg_pane_g3_ParamLimits

0xd09d,	// (0x00017b55) list_single_2heading_msg_pane_g3

0xd0a9,	// (0x00017b61) list_single_2heading_msg_pane_g4_ParamLimits

0xd0a9,	// (0x00017b61) list_single_2heading_msg_pane_g4

0x0003,

0xfcb2,	// (0x0001a76a) list_single_2heading_msg_pane_g_ParamLimits

0xfcb2,	// (0x0001a76a) list_single_2heading_msg_pane_g

0xd0c1,	// (0x00017b79) list_single_2heading_msg_pane_t1_ParamLimits

0xd0c1,	// (0x00017b79) list_single_2heading_msg_pane_t1

0xd0e9,	// (0x00017ba1) list_single_2heading_msg_pane_t2_ParamLimits

0xd0e9,	// (0x00017ba1) list_single_2heading_msg_pane_t2

0xd118,	// (0x00017bd0) list_single_2heading_msg_pane_t3_ParamLimits

0xd118,	// (0x00017bd0) list_single_2heading_msg_pane_t3

0xd151,	// (0x00017c09) list_single_2heading_msg_pane_t4_ParamLimits

0xd151,	// (0x00017c09) list_single_2heading_msg_pane_t4

0x0003,

0xfcbb,	// (0x0001a773) list_single_2heading_msg_pane_t_ParamLimits

0xfcbb,	// (0x0001a773) list_single_2heading_msg_pane_t

0x6852,	// (0x0001130a) title_pane_g4_ParamLimits

0x6852,	// (0x0001130a) title_pane_g4

0x50ac,	// (0x0000fb64) title_pane_stacon_g3_ParamLimits

0x50ac,	// (0x0000fb64) title_pane_stacon_g3

0xcb5c,	// (0x00017614) list_single_2graphic_im_pane_g4_ParamLimits

0xcb5c,	// (0x00017614) list_single_2graphic_im_pane_g4

0xa530,	// (0x00014fe8) popup_side_volume_key_window_cp

0xae2c,	// (0x000158e4) main_idle_act2_pane_t1

0x56c7,	// (0x0001017f) toolbar_button_pane_g10

0x70ed,	// (0x00011ba5) popup_toolbar_window_cp1

0xb7b6,	// (0x0001626e) clock_nsta_pane_cp_t1

0xb7b6,	// (0x0001626e) clock_nsta_pane_cp_t2

0x0001,

0xfab6,	// (0x0001a56e) clock_nsta_pane_cp_t

0x529e,	// (0x0000fd56) navi_navi_volume_pane_cp2_ParamLimits

0x52ad,	// (0x0000fd65) popup_side_volume_key_window_g1_ParamLimits

0x52b9,	// (0x0000fd71) popup_side_volume_key_window_g2_ParamLimits

0x52c8,	// (0x0000fd80) popup_side_volume_key_window_g3_ParamLimits

0xf724,	// (0x0001a1dc) popup_side_volume_key_window_g_ParamLimits

0x5b2f,	// (0x000105e7) fep_hwr_aid_pane

0x5bd6,	// (0x0001068e) bg_fep_hwr_top_pane_g4_ParamLimits

0xbdf4,	// (0x000168ac) fep_hwr_top_pane_g1_ParamLimits

0xbde2,	// (0x0001689a) fep_hwr_top_pane_g2_ParamLimits

0x5bf6,	// (0x000106ae) fep_hwr_top_pane_g3_ParamLimits

0xfb0b,	// (0x0001a5c3) fep_hwr_top_pane_g_ParamLimits

0x5c0b,	// (0x000106c3) fep_hwr_top_text_pane_ParamLimits

0xa2f3,	// (0x00014dab) aid_touch_tab_arrow_arrow_2

0xa2fc,	// (0x00014db4) aid_touch_tab_arrow_left_2

0x5b43,	// (0x000105fb) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x5b7a,	// (0x00010632) fep_hwr_prediction_pane

0xbf54,	// (0x00016a0c) fep_vkb_prediction_pane

0xc058,	// (0x00016b10) fep_vkb_side_pane_g3_ParamLimits

0xc058,	// (0x00016b10) fep_vkb_side_pane_g3

0x5d86,	// (0x0001083e) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5df2,	// (0x000108aa) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x5dff,	// (0x000108b7) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbba,	// (0x0001a672) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x5f2e,	// (0x000109e6) fep_hwr_prediction_pane_g1

0x5f38,	// (0x000109f0) fep_hwr_prediction_pane_g2

0x5f40,	// (0x000109f8) fep_hwr_prediction_pane_g3

0x5f48,	// (0x00010a00) fep_hwr_prediction_pane_g4

0x0003,

0xfcc4,	// (0x0001a77c) fep_hwr_prediction_pane_g

0xd176,	// (0x00017c2e) fep_vkb_prediction_pane_g1

0xd180,	// (0x00017c38) fep_vkb_prediction_pane_g2

0xd188,	// (0x00017c40) fep_vkb_prediction_pane_g3

0xd190,	// (0x00017c48) fep_vkb_prediction_pane_g4

0x0003,

0xfccd,	// (0x0001a785) fep_vkb_prediction_pane_g

0x59af,	// (0x00010467) slider_set_pane_g3

0x59c3,	// (0x0001047b) slider_set_pane_g4

0x59db,	// (0x00010493) slider_set_pane_g5

0x59af,	// (0x00010467) slider_set_pane_g6

0x59f1,	// (0x000104a9) slider_set_pane_g7

0xa9ce,	// (0x00015486) slider_form_pane_g3

0xa9d7,	// (0x0001548f) slider_form_pane_g4

0xa9df,	// (0x00015497) slider_form_pane_g5

0xa9ce,	// (0x00015486) slider_form_pane_g6

0xa9e7,	// (0x0001549f) slider_form_pane_g7

0xb109,	// (0x00015bc1) slider_set_pane_vc_g3

0xb112,	// (0x00015bca) slider_set_pane_vc_g4

0xb11b,	// (0x00015bd3) slider_set_pane_vc_g5

0xb109,	// (0x00015bc1) slider_set_pane_vc_g6

0xb124,	// (0x00015bdc) slider_set_pane_vc_g7

0xb109,	// (0x00015bc1) slider_form_pane_vc_g1

0xb112,	// (0x00015bca) slider_form_pane_vc_g2

0xb11b,	// (0x00015bd3) slider_form_pane_vc_g3

0xb109,	// (0x00015bc1) slider_form_pane_vc_g4

0xb4bc,	// (0x00015f74) slider_form_pane_vc_g5

0x0004,

0xfa8f,	// (0x0001a547) slider_form_pane_vc_g

0x680a,	// (0x000112c2) main_idle_act3_pane

0xd198,	// (0x00017c50) ai3_links_pane

0xd1a1,	// (0x00017c59) popup_ai3_data_window_ParamLimits

0xd1a1,	// (0x00017c59) popup_ai3_data_window

0x680a,	// (0x000112c2) grid_ai3_links_pane

0xd1bb,	// (0x00017c73) cell_ai3_links_pane_ParamLimits

0xd1bb,	// (0x00017c73) cell_ai3_links_pane

0xd1d3,	// (0x00017c8b) bg_popup_sub_pane_cp11

0xd1e0,	// (0x00017c98) cell_ai3_links_pane_g1

0x680a,	// (0x000112c2) bg_popup_sub_pane_cp12

0xd205,	// (0x00017cbd) heading_ai3_data_pane

0xd20d,	// (0x00017cc5) list_ai3_gene_pane

0xd219,	// (0x00017cd1) popup_ai3_data_window_g1

0xd221,	// (0x00017cd9) heading_ai3_data_pane_g1

0xd229,	// (0x00017ce1) heading_ai3_data_pane_t1

0xd237,	// (0x00017cef) list_double_ai3_gene_pane_ParamLimits

0xd237,	// (0x00017cef) list_double_ai3_gene_pane

0xd244,	// (0x00017cfc) list_single_ai3_gene_pane_ParamLimits

0xd244,	// (0x00017cfc) list_single_ai3_gene_pane

0xbd37,	// (0x000167ef) list_highlight_pane_cp7_ParamLimits

0xbd37,	// (0x000167ef) list_highlight_pane_cp7

0xd251,	// (0x00017d09) list_single_a13_gene_pane_t1_ParamLimits

0xd251,	// (0x00017d09) list_single_a13_gene_pane_t1

0xd268,	// (0x00017d20) list_single_ai3_gene_pane_g1

0xd271,	// (0x00017d29) list_single_ai3_gene_pane_g2

0x0001,

0xfcd6,	// (0x0001a78e) list_single_ai3_gene_pane_g

0xd279,	// (0x00017d31) list_double_ai3_gene_pane_g1_ParamLimits

0xd279,	// (0x00017d31) list_double_ai3_gene_pane_g1

0xd285,	// (0x00017d3d) list_double_ai3_gene_pane_t1_ParamLimits

0xd285,	// (0x00017d3d) list_double_ai3_gene_pane_t1

0xd2a1,	// (0x00017d59) list_double_ai3_gene_pane_t2_ParamLimits

0xd2a1,	// (0x00017d59) list_double_ai3_gene_pane_t2

0xd2b7,	// (0x00017d6f) list_double_ai3_gene_pane_t3_ParamLimits

0xd2b7,	// (0x00017d6f) list_double_ai3_gene_pane_t3

0x0002,

0xfcdb,	// (0x0001a793) list_double_ai3_gene_pane_t_ParamLimits

0xfcdb,	// (0x0001a793) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xd073,	// (0x00017b2b) aid_size_min_col_2

0xd07d,	// (0x00017b35) aid_size_min_msg_ParamLimits

0xd07d,	// (0x00017b35) aid_size_min_msg

0xc158,	// (0x00016c10) fep_vkb_top_text_pane_g2_ParamLimits

0xc158,	// (0x00016c10) fep_vkb_top_text_pane_g2

0x0001,

0xfb3b,	// (0x0001a5f3) fep_vkb_top_text_pane_g_ParamLimits

0xfb3b,	// (0x0001a5f3) fep_vkb_top_text_pane_g

0x680a,	// (0x000112c2) main_hc_apps_shell_pane

0xd2d4,	// (0x00017d8c) grid_hc_apps_pane_ParamLimits

0xd2d4,	// (0x00017d8c) grid_hc_apps_pane

0xd2e3,	// (0x00017d9b) list_hc_apps_pane

0xd2eb,	// (0x00017da3) scroll_pane_cp37_ParamLimits

0xd2eb,	// (0x00017da3) scroll_pane_cp37

0xd2f7,	// (0x00017daf) cell_hc_apps_pane_ParamLimits

0xd2f7,	// (0x00017daf) cell_hc_apps_pane

0xd3a5,	// (0x00017e5d) cell_hc_apps_pane_g1_ParamLimits

0xd3a5,	// (0x00017e5d) cell_hc_apps_pane_g1

0xd3d6,	// (0x00017e8e) cell_hc_apps_pane_g2_ParamLimits

0xd3d6,	// (0x00017e8e) cell_hc_apps_pane_g2

0xd3f2,	// (0x00017eaa) cell_hc_apps_pane_g3_ParamLimits

0xd3f2,	// (0x00017eaa) cell_hc_apps_pane_g3

0x0002,

0xfce2,	// (0x0001a79a) cell_hc_apps_pane_g_ParamLimits

0xfce2,	// (0x0001a79a) cell_hc_apps_pane_g

0xd414,	// (0x00017ecc) cell_hc_apps_pane_t1_ParamLimits

0xd414,	// (0x00017ecc) cell_hc_apps_pane_t1

0x6ba1,	// (0x00011659) grid_highlight_pane_cp10_ParamLimits

0x6ba1,	// (0x00011659) grid_highlight_pane_cp10

0xd454,	// (0x00017f0c) list_single_hc_apps_pane_ParamLimits

0xd454,	// (0x00017f0c) list_single_hc_apps_pane

0xd4b0,	// (0x00017f68) list_single_hc_apps_pane_g1

0xd4c9,	// (0x00017f81) list_single_hc_apps_pane_g2

0x0001,

0xfce9,	// (0x0001a7a1) list_single_hc_apps_pane_g

0xd4e2,	// (0x00017f9a) list_single_hc_apps_pane_g2_copy1

0xd4fe,	// (0x00017fb6) list_single_hc_apps_pane_t1

0x68fe,	// (0x000113b6) bg_set_opt_pane_cp_ParamLimits

0x4fd3,	// (0x0000fa8b) setting_slider_pane_t1_ParamLimits

0x4fec,	// (0x0000faa4) setting_slider_pane_t2_ParamLimits

0x5006,	// (0x0000fabe) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x0001a032) setting_slider_pane_t_ParamLimits

0x501e,	// (0x0000fad6) slider_set_pane_ParamLimits

0x5543,	// (0x0000fffb) control_pane_g5_ParamLimits

0x5543,	// (0x0000fffb) control_pane_g5

0xa81d,	// (0x000152d5) slider_set_pane_g1_ParamLimits

0x59a3,	// (0x0001045b) slider_set_pane_g2_ParamLimits

0x59af,	// (0x00010467) slider_set_pane_g3_ParamLimits

0x59c3,	// (0x0001047b) slider_set_pane_g4_ParamLimits

0x59db,	// (0x00010493) slider_set_pane_g5_ParamLimits

0x59af,	// (0x00010467) slider_set_pane_g6_ParamLimits

0x59f1,	// (0x000104a9) slider_set_pane_g7_ParamLimits

0xf970,	// (0x0001a428) slider_set_pane_g_ParamLimits

0x83b4,	// (0x00012e6c) navi_icon_text_pane_ParamLimits

0x8e95,	// (0x0001394d) aid_fill_nsta_2_ParamLimits

0x8ed4,	// (0x0001398c) aid_touch_tab_arrow_left_ParamLimits

0x8ee0,	// (0x00013998) aid_touch_tab_arrow_right_ParamLimits

0x8f4c,	// (0x00013a04) clock_nsta_pane_ParamLimits

0xa2cf,	// (0x00014d87) navi_icon_pane_g1_ParamLimits

0xa2de,	// (0x00014d96) navi_text_pane_t1_ParamLimits

0xb8c0,	// (0x00016378) navi_icon_text_pane_g1_ParamLimits

0xb8cf,	// (0x00016387) navi_icon_text_pane_t1_ParamLimits

0xd4b0,	// (0x00017f68) list_single_hc_apps_pane_g1_ParamLimits

0xd4c9,	// (0x00017f81) list_single_hc_apps_pane_g2_ParamLimits

0xfce9,	// (0x0001a7a1) list_single_hc_apps_pane_g_ParamLimits

0xd4e2,	// (0x00017f9a) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd4fe,	// (0x00017fb6) list_single_hc_apps_pane_t1_ParamLimits

0x4ee7,	// (0x0000f99f) popup_toolbar2_fixed_window_ParamLimits

0x4ee7,	// (0x0000f99f) popup_toolbar2_fixed_window

0x8dab,	// (0x00013863) popup_toolbar2_float_window

0x680a,	// (0x000112c2) bg_popup_sub_pane_cp27

0xd52c,	// (0x00017fe4) grid_toolbar2_float_pane

0x680a,	// (0x000112c2) bg_popup_sub_pane_cp26

0xd52c,	// (0x00017fe4) grid_toolbar2_fixed_pane

0xd534,	// (0x00017fec) cell_toolbar2_fixed_pane_ParamLimits

0xd534,	// (0x00017fec) cell_toolbar2_fixed_pane

0xd544,	// (0x00017ffc) cell_toolbar2_fixed_pane_g1

0xd54d,	// (0x00018005) toolbar2_fixed_button_pane

0x9396,	// (0x00013e4e) toolbar2_fixed_button_pane_g1

0x93a6,	// (0x00013e5e) toolbar2_fixed_button_pane_g2

0x939e,	// (0x00013e56) toolbar2_fixed_button_pane_g3

0x93b6,	// (0x00013e6e) toolbar2_fixed_button_pane_g4

0x93ae,	// (0x00013e66) toolbar2_fixed_button_pane_g5

0x93be,	// (0x00013e76) toolbar2_fixed_button_pane_g6

0x93c6,	// (0x00013e7e) toolbar2_fixed_button_pane_g7

0x93d6,	// (0x00013e8e) toolbar2_fixed_button_pane_g8

0x93ce,	// (0x00013e86) toolbar2_fixed_button_pane_g9

0x0008,

0xf872,	// (0x0001a32a) toolbar2_fixed_button_pane_g

0xd555,	// (0x0001800d) cell_toolbar2_float_pane_ParamLimits

0xd555,	// (0x0001800d) cell_toolbar2_float_pane

0xd566,	// (0x0001801e) cell_toolbar2_float_pane_g1

0xd54d,	// (0x00018005) toolbar2_fixed_button_pane_cp

0xbeb4,	// (0x0001696c) fep_vkb_accented_list_pane_ParamLimits

0xbeb4,	// (0x0001696c) fep_vkb_accented_list_pane

0x5d66,	// (0x0001081e) bg_popup_fep_shadow_pane_g9

0x8534,	// (0x00012fec) bg_popup_fep_shadow_pane_cp3

0x79c3,	// (0x0001247b) list_accented_list_pane

0xd56f,	// (0x00018027) list_single_accented_list_pane_ParamLimits

0xd56f,	// (0x00018027) list_single_accented_list_pane

0x8534,	// (0x00012fec) list_highlight_pane_cp10

0xd580,	// (0x00018038) list_single_accented_list_pane_t1

0x8cfb,	// (0x000137b3) popup_slider_window_ParamLimits

0x8cfb,	// (0x000137b3) popup_slider_window

0xd06a,	// (0x00017b22) aid_indentation_list_msg

0xd63a,	// (0x000180f2) bg_popup_window_pane_cp19

0xd6a4,	// (0x0001815c) popup_slider_window_g1

0xd6c0,	// (0x00018178) popup_slider_window_g2

0xd6dc,	// (0x00018194) popup_slider_window_g3

0x0005,

0xfcee,	// (0x0001a7a6) popup_slider_window_g

0xd738,	// (0x000181f0) popup_slider_window_t1

0xd7ac,	// (0x00018264) small_volume_slider_vertical_pane

0xbd72,	// (0x0001682a) small_volume_slider_vertical_pane_g1

0xbd72,	// (0x0001682a) small_volume_slider_vertical_pane_g2

0xd7c8,	// (0x00018280) small_volume_slider_vertical_pane_g3

0x0002,

0xfd00,	// (0x0001a7b8) small_volume_slider_vertical_pane_g

0x4c9f,	// (0x0000f757) area_side_right_pane_ParamLimits

0x4c9f,	// (0x0000f757) area_side_right_pane

0x5f50,	// (0x00010a08) aid_size_side_button_ParamLimits

0x5f50,	// (0x00010a08) aid_size_side_button

0x5f64,	// (0x00010a1c) grid_sctrl_middle_pane_ParamLimits

0x5f64,	// (0x00010a1c) grid_sctrl_middle_pane

0x5f84,	// (0x00010a3c) sctrl_sk_bottom_pane

0x5f95,	// (0x00010a4d) sctrl_sk_top_pane

0x5fa7,	// (0x00010a5f) aid_touch_sctrl_top

0x5fb4,	// (0x00010a6c) bg_sctrl_sk_pane_ParamLimits

0x5fb4,	// (0x00010a6c) bg_sctrl_sk_pane

0x5fc2,	// (0x00010a7a) sctrl_sk_top_pane_g1

0x5fcf,	// (0x00010a87) sctrl_sk_top_pane_t1

0x5fa7,	// (0x00010a5f) aid_touch_sctrl_bottom

0x5fb4,	// (0x00010a6c) bg_sctrl_sk_pane_cp_ParamLimits

0x5fb4,	// (0x00010a6c) bg_sctrl_sk_pane_cp

0x5fea,	// (0x00010aa2) sctrl_sk_bottom_pane_g1

0x5fcf,	// (0x00010a87) sctrl_sk_bottom_pane_t1

0x5ff3,	// (0x00010aab) cell_sctrl_middle_pane_ParamLimits

0x5ff3,	// (0x00010aab) cell_sctrl_middle_pane

0x600e,	// (0x00010ac6) aid_touch_sctrl_middle_ParamLimits

0x600e,	// (0x00010ac6) aid_touch_sctrl_middle

0x6020,	// (0x00010ad8) bg_sctrl_middle_pane_ParamLimits

0x6020,	// (0x00010ad8) bg_sctrl_middle_pane

0x5d86,	// (0x0001083e) cell_sctrl_middle_pane_g1_ParamLimits

0x5d86,	// (0x0001083e) cell_sctrl_middle_pane_g1

0x602e,	// (0x00010ae6) cell_sctrl_middle_pane_g2_ParamLimits

0x602e,	// (0x00010ae6) cell_sctrl_middle_pane_g2

0x0001,

0xfd0c,	// (0x0001a7c4) cell_sctrl_middle_pane_g_ParamLimits

0xfd0c,	// (0x0001a7c4) cell_sctrl_middle_pane_g

0x9396,	// (0x00013e4e) bg_sctrl_middle_pane_g1

0x939e,	// (0x00013e56) bg_sctrl_middle_pane_g2

0x93a6,	// (0x00013e5e) bg_sctrl_middle_pane_g3

0x93ae,	// (0x00013e66) bg_sctrl_middle_pane_g4

0x93b6,	// (0x00013e6e) bg_sctrl_middle_pane_g5

0x93be,	// (0x00013e76) bg_sctrl_middle_pane_g6

0x93c6,	// (0x00013e7e) bg_sctrl_middle_pane_g7

0x93ce,	// (0x00013e86) bg_sctrl_middle_pane_g8

0x0007,

0xfd11,	// (0x0001a7c9) bg_sctrl_middle_pane_g

0x93d6,	// (0x00013e8e) bg_sctrl_middle_pane_g8_copy1

0x9396,	// (0x00013e4e) bg_sctrl_sk_pane_g1

0x93a6,	// (0x00013e5e) bg_sctrl_sk_pane_g2

0x939e,	// (0x00013e56) bg_sctrl_sk_pane_g3

0x0008,

0xf872,	// (0x0001a32a) bg_sctrl_sk_pane_g

0x70b3,	// (0x00011b6b) aid_size_touch_scroll_bar

0x93b6,	// (0x00013e6e) bg_sctrl_sk_pane_g4

0x93ae,	// (0x00013e66) bg_sctrl_sk_pane_g5

0x93be,	// (0x00013e76) bg_sctrl_sk_pane_g6

0x93c6,	// (0x00013e7e) bg_sctrl_sk_pane_g7

0x93d6,	// (0x00013e8e) bg_sctrl_sk_pane_g8

0x93ce,	// (0x00013e86) bg_sctrl_sk_pane_g9

0x8966,	// (0x0001341e) popup_fep_china_hwr2_fs_candidate_window

0x8970,	// (0x00013428) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x8970,	// (0x00013428) popup_fep_china_hwr2_fs_control_window

0x5d86,	// (0x0001083e) sctrl_sk_top_pane_g2

0x0001,

0xfd07,	// (0x0001a7bf) sctrl_sk_top_pane_g

0xd7d1,	// (0x00018289) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd7d1,	// (0x00018289) aid_fep_china_hwr2_fs_cell

0xd7e3,	// (0x0001829b) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd7e3,	// (0x0001829b) bg_popup_fep_shadow_pane_cp4

0xd7fa,	// (0x000182b2) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd7fa,	// (0x000182b2) bg_popup_fep_shadow_pane_cp5

0xd80c,	// (0x000182c4) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd80c,	// (0x000182c4) popup_fep_china_hwr2_fs_control_bar_grid

0xd81c,	// (0x000182d4) popup_fep_china_hwr2_fs_control_funtion_grid

0xd824,	// (0x000182dc) aid_fep_china_hwr2_fs_candi_cell

0x680a,	// (0x000112c2) bg_popup_fep_shadow_pane_cp6

0xd82e,	// (0x000182e6) popup_fep_china_hwr2_fs_candidate_grid

0xd838,	// (0x000182f0) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd838,	// (0x000182f0) cell_fep_china_hwr2_fs_funtion_grid

0xbd72,	// (0x0001682a) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd850,	// (0x00018308) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd850,	// (0x00018308) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd85e,	// (0x00018316) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd85e,	// (0x00018316) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd22,	// (0x0001a7da) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd22,	// (0x0001a7da) cell_fep_china_hwr2_fs_funtion_grid_g

0xd874,	// (0x0001832c) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd874,	// (0x0001832c) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd889,	// (0x00018341) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd889,	// (0x00018341) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd27,	// (0x0001a7df) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd27,	// (0x0001a7df) cell_fep_china_hwr2_fs_funtion_grid_t

0xd8a5,	// (0x0001835d) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd8ad,	// (0x00018365) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd8b5,	// (0x0001836d) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2c,	// (0x0001a7e4) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd8bd,	// (0x00018375) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd8bd,	// (0x00018375) cell_fep_china_hwr2_fs_candidate_grid

0xd8d6,	// (0x0001838e) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd8de,	// (0x00018396) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbd72,	// (0x0001682a) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbd72,	// (0x0001682a) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb40,	// (0x0001a5f8) cell_fep_china_hwr2_fs_candidate_grid_g

0xd8e6,	// (0x0001839e) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8f59,	// (0x00013a11) clock_nsta_pane_cp_24_ParamLimits

0x8f59,	// (0x00013a11) clock_nsta_pane_cp_24

0x8fd7,	// (0x00013a8f) indicator_nsta_pane_cp_24_ParamLimits

0x8fd7,	// (0x00013a8f) indicator_nsta_pane_cp_24

0xa14b,	// (0x00014c03) heading_pane_g1

0x0001,

0xf8d7,	// (0x0001a38f) heading_pane_g

0xac75,	// (0x0001572d) grid_sct_catagory_button_pane

0xaca5,	// (0x0001575d) scroll_pane_cp5_ParamLimits

0xb914,	// (0x000163cc) button_value_adjust_pane_cp5_ParamLimits

0xb914,	// (0x000163cc) button_value_adjust_pane_cp5

0xba10,	// (0x000164c8) form2_midp_time_pane_ParamLimits

0xd8f4,	// (0x000183ac) cell_sct_catagory_button_pane_ParamLimits

0xd8f4,	// (0x000183ac) cell_sct_catagory_button_pane

0xbd37,	// (0x000167ef) bg_button_pane_cp01_ParamLimits

0xbd37,	// (0x000167ef) bg_button_pane_cp01

0xbd72,	// (0x0001682a) cell_sct_catagory_button_pane_g1

0x8d3a,	// (0x000137f2) popup_tb_extension_window

0xd906,	// (0x000183be) aid_size_cell_ext_ParamLimits

0xd906,	// (0x000183be) aid_size_cell_ext

0x6ba1,	// (0x00011659) bg_tb_trans_pane_cp1_ParamLimits

0x6ba1,	// (0x00011659) bg_tb_trans_pane_cp1

0xd926,	// (0x000183de) grid_tb_ext_pane_ParamLimits

0xd926,	// (0x000183de) grid_tb_ext_pane

0xd954,	// (0x0001840c) cell_tb_ext_pane_ParamLimits

0xd954,	// (0x0001840c) cell_tb_ext_pane

0xd96b,	// (0x00018423) cell_tb_ext_pane_g1_ParamLimits

0xd96b,	// (0x00018423) cell_tb_ext_pane_g1

0xd988,	// (0x00018440) cell_tb_ext_pane_t1

0x6ba1,	// (0x00011659) list_highlight_pane_cp11_ParamLimits

0x6ba1,	// (0x00011659) list_highlight_pane_cp11

0x4f06,	// (0x0000f9be) popup_uni_indicator_window_ParamLimits

0x4f06,	// (0x0000f9be) popup_uni_indicator_window

0x76e5,	// (0x0001219d) bg_popup_sub_pane_cp14

0xd9a3,	// (0x0001845b) list_uniindi_pane

0xd9af,	// (0x00018467) uniindi_top_pane

0x6ba1,	// (0x00011659) bg_uniindi_top_pane

0xd9ce,	// (0x00018486) uniindi_top_pane_g1

0xd9e4,	// (0x0001849c) uniindi_top_pane_g2

0x0003,

0xfd33,	// (0x0001a7eb) uniindi_top_pane_g

0xda0e,	// (0x000184c6) uniindi_top_pane_t1

0xda38,	// (0x000184f0) list_single_uniindi_pane_ParamLimits

0xda38,	// (0x000184f0) list_single_uniindi_pane

0xbd72,	// (0x0001682a) bg_uniindi_top_pane_g1

0xda4b,	// (0x00018503) list_single_uniindi_pane_g1

0xda5e,	// (0x00018516) list_single_uniindi_pane_t1

0x4d7c,	// (0x0000f834) control_bg_pane

0xda83,	// (0x0001853b) bg_sctrl_sk_pane_cp1

0xda8c,	// (0x00018544) bg_sctrl_sk_pane_cp2

0xda95,	// (0x0001854d) control_bg_pane_g1

0xda9e,	// (0x00018556) control_bg_pane_g2

0x0001,

0xfd3c,	// (0x0001a7f4) control_bg_pane_g

0xb748,	// (0x00016200) cell_indicator_nsta_pane_g1_ParamLimits

0xb756,	// (0x0001620e) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa4,	// (0x0001a55c) cell_indicator_nsta_pane_g_ParamLimits

0xba98,	// (0x00016550) form2_midp_time_pane_t1_ParamLimits

0x6ef5,	// (0x000119ad) main_idle_act4_pane_ParamLimits

0x6ef5,	// (0x000119ad) main_idle_act4_pane

0x8d3a,	// (0x000137f2) popup_tb_extension_window_ParamLimits

0xd944,	// (0x000183fc) tb_ext_find_pane_ParamLimits

0xd944,	// (0x000183fc) tb_ext_find_pane

0xdaa7,	// (0x0001855f) ai_gene_pane_1_cp1

0x8679,	// (0x00013131) ai_gene_pane_2_cp1

0xdaaf,	// (0x00018567) list_single_idle_plugin_calendar_pane

0xdab8,	// (0x00018570) list_single_idle_plugin_notification_pane

0xdac1,	// (0x00018579) list_single_idle_plugin_player_pane

0xdaca,	// (0x00018582) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdaca,	// (0x00018582) list_single_idle_plugin_shortcut_pane

0xdaec,	// (0x000185a4) main_idle_act4_pane_t1

0xdafe,	// (0x000185b6) main_idle_act4_pane_t2

0x0001,

0xfd41,	// (0x0001a7f9) main_idle_act4_pane_t

0xdb10,	// (0x000185c8) middle_sk_idle_act4_pane_ParamLimits

0xdb10,	// (0x000185c8) middle_sk_idle_act4_pane

0xdb26,	// (0x000185de) popup_clock_digital_analogue_window_cp2

0xdb40,	// (0x000185f8) shortcut_wheel_idle_act4_pane_ParamLimits

0xdb40,	// (0x000185f8) shortcut_wheel_idle_act4_pane

0xbd72,	// (0x0001682a) shortcut_wheel_idle_act4_pane_g1

0xbd72,	// (0x0001682a) shortcut_wheel_idle_act4_pane_g2

0xbd72,	// (0x0001682a) shortcut_wheel_idle_act4_pane_g3

0xbd72,	// (0x0001682a) shortcut_wheel_idle_act4_pane_g4

0xbd72,	// (0x0001682a) shortcut_wheel_idle_act4_pane_g5

0xdb54,	// (0x0001860c) shortcut_wheel_idle_act4_pane_g6

0xdb5c,	// (0x00018614) shortcut_wheel_idle_act4_pane_g7

0xdb64,	// (0x0001861c) shortcut_wheel_idle_act4_pane_g8

0xdb6c,	// (0x00018624) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd46,	// (0x0001a7fe) shortcut_wheel_idle_act4_pane_g

0xc004,	// (0x00016abc) middle_sk_idle_act4_pane_g1_ParamLimits

0xc004,	// (0x00016abc) middle_sk_idle_act4_pane_g1

0xdbd0,	// (0x00018688) middle_sk_idle_act4_pane_g2_ParamLimits

0xdbd0,	// (0x00018688) middle_sk_idle_act4_pane_g2

0x0001,

0xfd69,	// (0x0001a821) middle_sk_idle_act4_pane_g_ParamLimits

0xfd69,	// (0x0001a821) middle_sk_idle_act4_pane_g

0xdbdc,	// (0x00018694) middle_sk_idle_act4_pane_t1_ParamLimits

0xdbdc,	// (0x00018694) middle_sk_idle_act4_pane_t1

0xdbf9,	// (0x000186b1) grid_ai_shortcut_pane_ParamLimits

0xdbf9,	// (0x000186b1) grid_ai_shortcut_pane

0xdc12,	// (0x000186ca) list_highlight_pane_cp16_ParamLimits

0xdc12,	// (0x000186ca) list_highlight_pane_cp16

0xdc1f,	// (0x000186d7) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdc1f,	// (0x000186d7) list_single_idle_plugin_shortcut_pane_g1

0xdc2b,	// (0x000186e3) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdc2b,	// (0x000186e3) list_single_idle_plugin_shortcut_pane_g2

0xdc43,	// (0x000186fb) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdc43,	// (0x000186fb) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6e,	// (0x0001a826) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6e,	// (0x0001a826) list_single_idle_plugin_shortcut_pane_g

0xdc56,	// (0x0001870e) cell_ai_shortcut_pane_ParamLimits

0xdc56,	// (0x0001870e) cell_ai_shortcut_pane

0xdc7a,	// (0x00018732) cell_ai_shortcut_pane_g1_ParamLimits

0xdc7a,	// (0x00018732) cell_ai_shortcut_pane_g1

0xdaa7,	// (0x0001855f) ai_gene_pane_1_cp2

0xdc9c,	// (0x00018754) ai_gene_pane_2_cp2

0xdca4,	// (0x0001875c) list_highlight_pane_cp15

0xdcad,	// (0x00018765) list_single_idle_plugin_calendar_pane_g1

0xdca4,	// (0x0001875c) list_highlight_pane_cp17

0xdcb5,	// (0x0001876d) list_single_idle_plugin_calendar_pane_g1_copy1

0xdcbd,	// (0x00018775) list_single_idle_plugin_player_pane_g1

0xaece,	// (0x00015986) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd75,	// (0x0001a82d) list_single_idle_plugin_player_pane_g

0xdcc5,	// (0x0001877d) list_single_idle_plugin_player_pane_t1

0xdcd3,	// (0x0001878b) list_single_idle_plugin_player_pane_t2

0xdce1,	// (0x00018799) list_single_idle_plugin_player_pane_t3

0xdcef,	// (0x000187a7) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7a,	// (0x0001a832) list_single_idle_plugin_player_pane_t

0xdcfd,	// (0x000187b5) wait_bar_pane_cp15

0xdd05,	// (0x000187bd) grid_ai_notification_pane

0xaece,	// (0x00015986) list_single_idle_plugin_notification_pane_g1

0xdd0e,	// (0x000187c6) cell_ai_notification_pane_ParamLimits

0xdd0e,	// (0x000187c6) cell_ai_notification_pane

0xdd1b,	// (0x000187d3) cell_ai_notification_pane_g1

0xdd23,	// (0x000187db) cell_ai_notification_pane_t1

0xdd31,	// (0x000187e9) tb_ext_find_button_pane

0xdd39,	// (0x000187f1) tb_ext_find_pane_g1

0xdd41,	// (0x000187f9) tb_ext_find_pane_t1

0x7ec8,	// (0x00012980) tb_ext_find_button_pane_g1

0xdd4f,	// (0x00018807) tb_ext_find_button_pane_g2

0x0001,

0xfd83,	// (0x0001a83b) tb_ext_find_button_pane_g

0xdaec,	// (0x000185a4) main_idle_act4_pane_t1_ParamLimits

0xdafe,	// (0x000185b6) main_idle_act4_pane_t2_ParamLimits

0xfd41,	// (0x0001a7f9) main_idle_act4_pane_t_ParamLimits

0xdb26,	// (0x000185de) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdb34,	// (0x000185ec) sat_plugin_idle_act4_pane_ParamLimits

0xdb34,	// (0x000185ec) sat_plugin_idle_act4_pane

0xdd58,	// (0x00018810) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdd58,	// (0x00018810) sat_plugin_idle_act4_pane_t1

0xdd6b,	// (0x00018823) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd6b,	// (0x00018823) sat_plugin_idle_act4_pane_t2

0xdd7e,	// (0x00018836) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd7e,	// (0x00018836) sat_plugin_idle_act4_pane_t3

0xdd91,	// (0x00018849) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd91,	// (0x00018849) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd88,	// (0x0001a840) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd88,	// (0x0001a840) sat_plugin_idle_act4_pane_t

0x4e41,	// (0x0000f8f9) popup_battery_window_ParamLimits

0x4e41,	// (0x0000f8f9) popup_battery_window

0x6ba1,	// (0x00011659) bg_popup_sub_pane_cp25_ParamLimits

0x6ba1,	// (0x00011659) bg_popup_sub_pane_cp25

0xdda4,	// (0x0001885c) popup_battery_window_g1_ParamLimits

0xdda4,	// (0x0001885c) popup_battery_window_g1

0xddb0,	// (0x00018868) popup_battery_window_t1_ParamLimits

0xddb0,	// (0x00018868) popup_battery_window_t1

0xddc2,	// (0x0001887a) popup_battery_window_t2_ParamLimits

0xddc2,	// (0x0001887a) popup_battery_window_t2

0x0001,

0xfd91,	// (0x0001a849) popup_battery_window_t_ParamLimits

0xfd91,	// (0x0001a849) popup_battery_window_t

0x8548,	// (0x00013000) midp_canvas_pane_ParamLimits

0x85bd,	// (0x00013075) midp_keypad_pane_ParamLimits

0x85bd,	// (0x00013075) midp_keypad_pane

0x88be,	// (0x00013376) main_midp_pane_ParamLimits

0xb7d4,	// (0x0001628c) signal_pane_g2_cp_ParamLimits

0xdddf,	// (0x00018897) aid_size_cell_midp_keypad_ParamLimits

0xdddf,	// (0x00018897) aid_size_cell_midp_keypad

0xddf9,	// (0x000188b1) midp_keyp_game_grid_pane_ParamLimits

0xddf9,	// (0x000188b1) midp_keyp_game_grid_pane

0xde19,	// (0x000188d1) midp_keyp_rocker_pane_ParamLimits

0xde19,	// (0x000188d1) midp_keyp_rocker_pane

0xde52,	// (0x0001890a) midp_keyp_sk_left_pane_ParamLimits

0xde52,	// (0x0001890a) midp_keyp_sk_left_pane

0xdeac,	// (0x00018964) midp_keyp_sk_right_pane_ParamLimits

0xdeac,	// (0x00018964) midp_keyp_sk_right_pane

0x680a,	// (0x000112c2) bg_button_pane_cp03

0xdf06,	// (0x000189be) midp_keyp_sk_left_pane_g1

0x680a,	// (0x000112c2) bg_button_pane_cp04

0xdf06,	// (0x000189be) midp_keyp_sk_right_pane_g1

0xbd72,	// (0x0001682a) midp_keyp_rocker_pane_g1

0xdf0f,	// (0x000189c7) keyp_game_cell_pane_ParamLimits

0xdf0f,	// (0x000189c7) keyp_game_cell_pane

0x680a,	// (0x000112c2) bg_button_pane_cp02

0xdf22,	// (0x000189da) keyp_game_cell_pane_g1

0x4e85,	// (0x0000f93d) popup_fep_vkb2_window_ParamLimits

0x4e85,	// (0x0000f93d) popup_fep_vkb2_window

0x604c,	// (0x00010b04) aid_size_cell_vkb2_ParamLimits

0x604c,	// (0x00010b04) aid_size_cell_vkb2

0x60a0,	// (0x00010b58) popup_fep_vkb2_window_g1_ParamLimits

0x60a0,	// (0x00010b58) popup_fep_vkb2_window_g1

0x60e8,	// (0x00010ba0) vkb2_area_bottom_pane_ParamLimits

0x60e8,	// (0x00010ba0) vkb2_area_bottom_pane

0x6134,	// (0x00010bec) vkb2_area_keypad_pane_ParamLimits

0x6134,	// (0x00010bec) vkb2_area_keypad_pane

0x6176,	// (0x00010c2e) vkb2_area_top_pane_ParamLimits

0x6176,	// (0x00010c2e) vkb2_area_top_pane

0x61f0,	// (0x00010ca8) vkb2_top_entry_pane_ParamLimits

0x61f0,	// (0x00010ca8) vkb2_top_entry_pane

0x621a,	// (0x00010cd2) vkb2_top_grid_left_pane_ParamLimits

0x621a,	// (0x00010cd2) vkb2_top_grid_left_pane

0x6238,	// (0x00010cf0) vkb2_top_grid_right_pane_ParamLimits

0x6238,	// (0x00010cf0) vkb2_top_grid_right_pane

0x6256,	// (0x00010d0e) vkb2_cell_keypad_pane_ParamLimits

0x6256,	// (0x00010d0e) vkb2_cell_keypad_pane

0x6327,	// (0x00010ddf) vkb2_area_bottom_grid_pane_ParamLimits

0x6327,	// (0x00010ddf) vkb2_area_bottom_grid_pane

0x634d,	// (0x00010e05) vkb2_area_bottom_pane_g1_ParamLimits

0x634d,	// (0x00010e05) vkb2_area_bottom_pane_g1

0x6371,	// (0x00010e29) vkb2_area_bottom_pane_g2_ParamLimits

0x6371,	// (0x00010e29) vkb2_area_bottom_pane_g2

0x639f,	// (0x00010e57) vkb2_area_bottom_pane_g3_ParamLimits

0x639f,	// (0x00010e57) vkb2_area_bottom_pane_g3

0x0002,

0xfd96,	// (0x0001a84e) vkb2_area_bottom_pane_g_ParamLimits

0xfd96,	// (0x0001a84e) vkb2_area_bottom_pane_g

0x6400,	// (0x00010eb8) vkb2_top_cell_left_pane_ParamLimits

0x6400,	// (0x00010eb8) vkb2_top_cell_left_pane

0xdf33,	// (0x000189eb) vkb2_top_entry_pane_g1_ParamLimits

0xdf33,	// (0x000189eb) vkb2_top_entry_pane_g1

0xdf41,	// (0x000189f9) vkb2_top_entry_pane_t1_ParamLimits

0xdf41,	// (0x000189f9) vkb2_top_entry_pane_t1

0xdf73,	// (0x00018a2b) vkb2_top_entry_pane_t2_ParamLimits

0xdf73,	// (0x00018a2b) vkb2_top_entry_pane_t2

0xdfa5,	// (0x00018a5d) vkb2_top_entry_pane_t3_ParamLimits

0xdfa5,	// (0x00018a5d) vkb2_top_entry_pane_t3

0x0002,

0xfd9d,	// (0x0001a855) vkb2_top_entry_pane_t_ParamLimits

0xfd9d,	// (0x0001a855) vkb2_top_entry_pane_t

0x644d,	// (0x00010f05) vkb2_top_grid_right_pane_g1_ParamLimits

0x644d,	// (0x00010f05) vkb2_top_grid_right_pane_g1

0x6463,	// (0x00010f1b) vkb2_top_grid_right_pane_g2_ParamLimits

0x6463,	// (0x00010f1b) vkb2_top_grid_right_pane_g2

0x647b,	// (0x00010f33) vkb2_top_grid_right_pane_g3_ParamLimits

0x647b,	// (0x00010f33) vkb2_top_grid_right_pane_g3

0x6493,	// (0x00010f4b) vkb2_top_grid_right_pane_g4_ParamLimits

0x6493,	// (0x00010f4b) vkb2_top_grid_right_pane_g4

0x0003,

0xfda4,	// (0x0001a85c) vkb2_top_grid_right_pane_g_ParamLimits

0xfda4,	// (0x0001a85c) vkb2_top_grid_right_pane_g

0x64a9,	// (0x00010f61) vkb2_top_cell_left_pane_g1

0x64c0,	// (0x00010f78) vkb2_cell_keypad_pane_g1_ParamLimits

0x64c0,	// (0x00010f78) vkb2_cell_keypad_pane_g1

0xdfc9,	// (0x00018a81) vkb2_cell_keypad_pane_t1_ParamLimits

0xdfc9,	// (0x00018a81) vkb2_cell_keypad_pane_t1

0x64ce,	// (0x00010f86) vkb2_cell_bottom_grid_pane_ParamLimits

0x64ce,	// (0x00010f86) vkb2_cell_bottom_grid_pane

0x6507,	// (0x00010fbf) vkb2_cell_bottom_grid_pane_g1

0xdb74,	// (0x0001862c) aid_call2_pane_cp02

0xdb7c,	// (0x00018634) aid_call_pane_cp02

0xdb84,	// (0x0001863c) clock_digital_number_pane_cp10

0xdb8c,	// (0x00018644) clock_digital_number_pane_cp11

0xdb94,	// (0x0001864c) clock_digital_number_pane_cp12

0xdb9c,	// (0x00018654) clock_digital_number_pane_cp13

0xdba4,	// (0x0001865c) clock_digital_separator_pane_cp10

0x7ec8,	// (0x00012980) popup_clock_digital_analogue_window_cp2_g1

0x7ec8,	// (0x00012980) popup_clock_digital_analogue_window_cp2_g2

0xdbac,	// (0x00018664) popup_clock_digital_analogue_window_cp2_g3

0x7ec8,	// (0x00012980) popup_clock_digital_analogue_window_cp2_g4

0xdbac,	// (0x00018664) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd59,	// (0x0001a811) popup_clock_digital_analogue_window_cp2_g

0xdbb4,	// (0x0001866c) popup_clock_digital_analogue_window_cp2_t1

0xdbc2,	// (0x0001867a) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd64,	// (0x0001a81c) popup_clock_digital_analogue_window_cp2_t

0xbd72,	// (0x0001682a) clock_digital_number_pane_cp10_g1

0xbd72,	// (0x0001682a) clock_digital_number_pane_cp10_g2

0x0001,

0xfb40,	// (0x0001a5f8) clock_digital_number_pane_cp10_g

0xbd72,	// (0x0001682a) clock_digital_separator_pane_cp10_g1

0xbd72,	// (0x0001682a) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb40,	// (0x0001a5f8) clock_digital_separator_pane_cp10_g

0xd9f0,	// (0x000184a8) uniindi_top_pane_g3

0xda01,	// (0x000184b9) uniindi_top_pane_g4

0x62e1,	// (0x00010d99) vkb2_row_keypad_pane_ParamLimits

0x62e1,	// (0x00010d99) vkb2_row_keypad_pane

0x6523,	// (0x00010fdb) vkb2_cell_t_keypad_pane_ParamLimits

0x6523,	// (0x00010fdb) vkb2_cell_t_keypad_pane

0x6533,	// (0x00010feb) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6533,	// (0x00010feb) vkb2_cell_t_keypad_pane_cp08

0x6546,	// (0x00010ffe) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6546,	// (0x00010ffe) vkb2_cell_t_keypad_pane_cp09

0x655a,	// (0x00011012) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x655a,	// (0x00011012) vkb2_cell_t_keypad_pane_cp01

0x656b,	// (0x00011023) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x656b,	// (0x00011023) vkb2_cell_t_keypad_pane_cp02

0x657c,	// (0x00011034) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x657c,	// (0x00011034) vkb2_cell_t_keypad_pane_cp03

0x658d,	// (0x00011045) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x658d,	// (0x00011045) vkb2_cell_t_keypad_pane_cp04

0x659e,	// (0x00011056) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x659e,	// (0x00011056) vkb2_cell_t_keypad_pane_cp05

0x65af,	// (0x00011067) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x65af,	// (0x00011067) vkb2_cell_t_keypad_pane_cp06

0x65c0,	// (0x00011078) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x65c0,	// (0x00011078) vkb2_cell_t_keypad_pane_cp07

0x65d1,	// (0x00011089) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x65d1,	// (0x00011089) vkb2_cell_t_keypad_pane_cp10

0x5d86,	// (0x0001083e) vkb2_cell_t_keypad_pane_g1

0xdfe0,	// (0x00018a98) vkb2_cell_t_keypad_pane_t1

0x4d7c,	// (0x0000f834) popup_grid_graphic2_window

0xdff2,	// (0x00018aaa) aid_size_cell_graphic2_ParamLimits

0xdff2,	// (0x00018aaa) aid_size_cell_graphic2

0xe02a,	// (0x00018ae2) bg_popup_window_pane_cp21_ParamLimits

0xe02a,	// (0x00018ae2) bg_popup_window_pane_cp21

0xe038,	// (0x00018af0) graphic2_pages_pane_ParamLimits

0xe038,	// (0x00018af0) graphic2_pages_pane

0xe07e,	// (0x00018b36) grid_graphic2_control_pane_ParamLimits

0xe07e,	// (0x00018b36) grid_graphic2_control_pane

0xe0bc,	// (0x00018b74) grid_graphic2_pane_ParamLimits

0xe0bc,	// (0x00018b74) grid_graphic2_pane

0xe130,	// (0x00018be8) cell_graphic2_pane

0x680a,	// (0x000112c2) main_comp_mode_pane

0xd20d,	// (0x00017cc5) list_ai3_gene_pane_ParamLimits

0xd63a,	// (0x000180f2) bg_popup_window_pane_cp19_ParamLimits

0xd646,	// (0x000180fe) bg_touch_area_indi_pane_ParamLimits

0xd646,	// (0x000180fe) bg_touch_area_indi_pane

0xd65c,	// (0x00018114) bg_touch_area_indi_pane_cp01_ParamLimits

0xd65c,	// (0x00018114) bg_touch_area_indi_pane_cp01

0xd672,	// (0x0001812a) bg_touch_area_indi_pane_cp02_ParamLimits

0xd672,	// (0x0001812a) bg_touch_area_indi_pane_cp02

0xd68a,	// (0x00018142) bg_touch_area_indi_pane_cp03_ParamLimits

0xd68a,	// (0x00018142) bg_touch_area_indi_pane_cp03

0xd6a4,	// (0x0001815c) popup_slider_window_g1_ParamLimits

0xd6c0,	// (0x00018178) popup_slider_window_g2_ParamLimits

0xd6dc,	// (0x00018194) popup_slider_window_g3_ParamLimits

0xfcee,	// (0x0001a7a6) popup_slider_window_g_ParamLimits

0xd738,	// (0x000181f0) popup_slider_window_t1_ParamLimits

0xd7ac,	// (0x00018264) small_volume_slider_vertical_pane_ParamLimits

0xe130,	// (0x00018be8) cell_graphic2_pane_ParamLimits

0xe19f,	// (0x00018c57) bg_button_pane_cp10_ParamLimits

0xe19f,	// (0x00018c57) bg_button_pane_cp10

0xe1b2,	// (0x00018c6a) bg_button_pane_cp11_ParamLimits

0xe1b2,	// (0x00018c6a) bg_button_pane_cp11

0xe1c5,	// (0x00018c7d) graphic2_pages_pane_g1_ParamLimits

0xe1c5,	// (0x00018c7d) graphic2_pages_pane_g1

0xe1e0,	// (0x00018c98) graphic2_pages_pane_g2_ParamLimits

0xe1e0,	// (0x00018c98) graphic2_pages_pane_g2

0x0001,

0xfdb2,	// (0x0001a86a) graphic2_pages_pane_g_ParamLimits

0xfdb2,	// (0x0001a86a) graphic2_pages_pane_g

0xe1f8,	// (0x00018cb0) graphic2_pages_pane_t1_ParamLimits

0xe1f8,	// (0x00018cb0) graphic2_pages_pane_t1

0xe210,	// (0x00018cc8) cell_graphic2_control_pane_ParamLimits

0xe210,	// (0x00018cc8) cell_graphic2_control_pane

0xe231,	// (0x00018ce9) cell_graphic2_pane_g1_ParamLimits

0xe231,	// (0x00018ce9) cell_graphic2_pane_g1

0xe23e,	// (0x00018cf6) cell_graphic2_pane_g2_ParamLimits

0xe23e,	// (0x00018cf6) cell_graphic2_pane_g2

0xe24b,	// (0x00018d03) cell_graphic2_pane_g3_ParamLimits

0xe24b,	// (0x00018d03) cell_graphic2_pane_g3

0xe258,	// (0x00018d10) cell_graphic2_pane_g4_ParamLimits

0xe258,	// (0x00018d10) cell_graphic2_pane_g4

0xe265,	// (0x00018d1d) cell_graphic2_pane_g5_ParamLimits

0xe265,	// (0x00018d1d) cell_graphic2_pane_g5

0x0004,

0xfdb7,	// (0x0001a86f) cell_graphic2_pane_g_ParamLimits

0xfdb7,	// (0x0001a86f) cell_graphic2_pane_g

0xe280,	// (0x00018d38) cell_graphic2_pane_t1_ParamLimits

0xe280,	// (0x00018d38) cell_graphic2_pane_t1

0x94b0,	// (0x00013f68) grid_highlight_pane_cp11_ParamLimits

0x94b0,	// (0x00013f68) grid_highlight_pane_cp11

0x6ba1,	// (0x00011659) bg_button_pane_cp05

0xe2a9,	// (0x00018d61) cell_graphic2_control_pane_g1

0xbd72,	// (0x0001682a) bg_touch_area_indi_pane_g1

0xe2d1,	// (0x00018d89) aid_cmod_rocker_key_size

0xe2db,	// (0x00018d93) aid_cmode_itu_key_size

0xe2e5,	// (0x00018d9d) main_cmode_video_pane

0xe2ef,	// (0x00018da7) main_comp_mode_itu_pane

0xe2fb,	// (0x00018db3) main_comp_mode_rocker_pane

0xe307,	// (0x00018dbf) cell_cmode_rocker_pane_ParamLimits

0xe307,	// (0x00018dbf) cell_cmode_rocker_pane

0xe319,	// (0x00018dd1) cell_cmode_itu_pane_ParamLimits

0xe319,	// (0x00018dd1) cell_cmode_itu_pane

0x76e5,	// (0x0001219d) bg_button_pane_cp06_ParamLimits

0x76e5,	// (0x0001219d) bg_button_pane_cp06

0xc004,	// (0x00016abc) cell_cmode_rocker_pane_g1_ParamLimits

0xc004,	// (0x00016abc) cell_cmode_rocker_pane_g1

0xd850,	// (0x00018308) cell_cmode_rocker_pane_g2_ParamLimits

0xd850,	// (0x00018308) cell_cmode_rocker_pane_g2

0x0001,

0xfdc7,	// (0x0001a87f) cell_cmode_rocker_pane_g_ParamLimits

0xfdc7,	// (0x0001a87f) cell_cmode_rocker_pane_g

0x680a,	// (0x000112c2) bg_button_pane_cp07

0xe32e,	// (0x00018de6) cell_cmode_itu_pane_g1

0xe337,	// (0x00018def) cell_cmode_itu_pane_t1

0xe345,	// (0x00018dfd) cell_cmode_itu_pane_t2

0x0001,

0xfdcc,	// (0x0001a884) cell_cmode_itu_pane_t

0xda73,	// (0x0001852b) aid_touch_ctrl_left

0xda7b,	// (0x00018533) aid_touch_ctrl_right

0x680a,	// (0x000112c2) compa_mode_pane

0xe353,	// (0x00018e0b) aid_cmod_rocker_key_size_cp

0xe35d,	// (0x00018e15) aid_cmode_itu_key_size_cp

0xe367,	// (0x00018e1f) compa_mode_pane_g1

0xe36f,	// (0x00018e27) compa_mode_pane_g2

0xe377,	// (0x00018e2f) compa_mode_pane_g3

0x0002,

0xfdd1,	// (0x0001a889) compa_mode_pane_g

0xe37f,	// (0x00018e37) main_comp_mode_itu_pane_cp

0xe387,	// (0x00018e3f) main_comp_mode_rocker_pane_cp

0xe38f,	// (0x00018e47) cell_cmode_itu_pane_cp_ParamLimits

0xe38f,	// (0x00018e47) cell_cmode_itu_pane_cp

0xe3a4,	// (0x00018e5c) cell_cmode_rocker_pane_cp_ParamLimits

0xe3a4,	// (0x00018e5c) cell_cmode_rocker_pane_cp

0x76e5,	// (0x0001219d) bg_button_pane_cp06_cp_ParamLimits

0x76e5,	// (0x0001219d) bg_button_pane_cp06_cp

0xc004,	// (0x00016abc) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc004,	// (0x00016abc) cell_cmode_rocker_pane_g1_cp

0xbd72,	// (0x0001682a) cell_cmode_rocker_pane_g2_cp

0x680a,	// (0x000112c2) bg_button_pane_cp07_cp

0xa9ce,	// (0x00015486) cell_cmode_itu_pane_g1_cp

0xe3b6,	// (0x00018e6e) cell_cmode_itu_pane_t1_cp

0xe3b6,	// (0x00018e6e) cell_cmode_itu_pane_t2_cp

0xa9bb,	// (0x00015473) settings_code_pane_cp2

0x68fe,	// (0x000113b6) bg_popup_window_pane_cp3_ParamLimits

0x6d7b,	// (0x00011833) heading_pane_cp3_ParamLimits

0x6d87,	// (0x0001183f) listscroll_popup_graphic_pane_ParamLimits

0x5b2f,	// (0x000105e7) fep_hwr_aid_pane_ParamLimits

0x5fa7,	// (0x00010a5f) aid_touch_sctrl_top_ParamLimits

0x5fc2,	// (0x00010a7a) sctrl_sk_top_pane_g1_ParamLimits

0x5d86,	// (0x0001083e) sctrl_sk_top_pane_g2_ParamLimits

0xfd07,	// (0x0001a7bf) sctrl_sk_top_pane_g_ParamLimits

0x5fcf,	// (0x00010a87) sctrl_sk_top_pane_t1_ParamLimits

0x5fa7,	// (0x00010a5f) aid_touch_sctrl_bottom_ParamLimits

0x5fcf,	// (0x00010a87) sctrl_sk_bottom_pane_t1_ParamLimits

0xd9bc,	// (0x00018474) aid_area_touch_clock

0x61b8,	// (0x00010c70) aid_vkb2_area_top_pane_cell_ParamLimits

0x61b8,	// (0x00010c70) aid_vkb2_area_top_pane_cell

0x6303,	// (0x00010dbb) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6303,	// (0x00010dbb) aid_vkb2_area_bottom_pane_cell

0xdf2b,	// (0x000189e3) popup_char_count_window

0xe3c4,	// (0x00018e7c) popup_char_count_window_g1

0xe3cd,	// (0x00018e85) popup_char_count_window_g2

0xe3d6,	// (0x00018e8e) popup_char_count_window_g3

0x0002,

0xfdd8,	// (0x0001a890) popup_char_count_window_g

0xe3df,	// (0x00018e97) popup_char_count_window_t1

0x607e,	// (0x00010b36) popup_fep_char_preview_window_ParamLimits

0x607e,	// (0x00010b36) popup_fep_char_preview_window

0x61d6,	// (0x00010c8e) vkb2_top_candi_pane_ParamLimits

0x61d6,	// (0x00010c8e) vkb2_top_candi_pane

0xe3ed,	// (0x00018ea5) cell_vkb2_top_candi_pane_ParamLimits

0xe3ed,	// (0x00018ea5) cell_vkb2_top_candi_pane

0x65e6,	// (0x0001109e) bg_popup_fep_char_preview_window_ParamLimits

0x65e6,	// (0x0001109e) bg_popup_fep_char_preview_window

0x65f4,	// (0x000110ac) popup_fep_char_preview_window_t1_ParamLimits

0x65f4,	// (0x000110ac) popup_fep_char_preview_window_t1

0xe43a,	// (0x00018ef2) bg_popup_fep_char_preview_window_g1

0xe442,	// (0x00018efa) bg_popup_fep_char_preview_window_g2

0xe44a,	// (0x00018f02) bg_popup_fep_char_preview_window_g3

0xe452,	// (0x00018f0a) bg_popup_fep_char_preview_window_g4

0xe45a,	// (0x00018f12) bg_popup_fep_char_preview_window_g5

0x662e,	// (0x000110e6) bg_popup_fep_char_preview_window_g6

0xe462,	// (0x00018f1a) bg_popup_fep_char_preview_window_g7

0xe46a,	// (0x00018f22) bg_popup_fep_char_preview_window_g8

0xe472,	// (0x00018f2a) bg_popup_fep_char_preview_window_g9

0x0008,

0xfddf,	// (0x0001a897) bg_popup_fep_char_preview_window_g

0x5d86,	// (0x0001083e) cell_vkb2_top_candi_pane_g1_ParamLimits

0x5d86,	// (0x0001083e) cell_vkb2_top_candi_pane_g1

0x5d94,	// (0x0001084c) cell_vkb2_top_candi_pane_g2_ParamLimits

0x5d94,	// (0x0001084c) cell_vkb2_top_candi_pane_g2

0xe17e,	// (0x00018c36) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe17e,	// (0x00018c36) cell_vkb2_top_candi_pane_g3

0x6636,	// (0x000110ee) cell_vkb2_top_candi_pane_g4_ParamLimits

0x6636,	// (0x000110ee) cell_vkb2_top_candi_pane_g4

0xc688,	// (0x00017140) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc688,	// (0x00017140) cell_vkb2_top_candi_pane_g5

0x6657,	// (0x0001110f) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6657,	// (0x0001110f) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf2,	// (0x0001a8aa) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf2,	// (0x0001a8aa) cell_vkb2_top_candi_pane_g

0x6665,	// (0x0001111d) cell_vkb2_top_candi_pane_t1

0x598f,	// (0x00010447) aid_size_touch_slider_mark_ParamLimits

0x598f,	// (0x00010447) aid_size_touch_slider_mark

0xe06e,	// (0x00018b26) grid_graphic2_catg_pane_ParamLimits

0xe06e,	// (0x00018b26) grid_graphic2_catg_pane

0xe10c,	// (0x00018bc4) popup_grid_graphic2_window_t1_ParamLimits

0xe10c,	// (0x00018bc4) popup_grid_graphic2_window_t1

0xe11e,	// (0x00018bd6) popup_grid_graphic2_window_t2_ParamLimits

0xe11e,	// (0x00018bd6) popup_grid_graphic2_window_t2

0x0001,

0xfdad,	// (0x0001a865) popup_grid_graphic2_window_t_ParamLimits

0xfdad,	// (0x0001a865) popup_grid_graphic2_window_t

0x6ba1,	// (0x00011659) bg_button_pane_cp05_ParamLimits

0xe2a9,	// (0x00018d61) cell_graphic2_control_pane_g1_ParamLimits

0xe47a,	// (0x00018f32) cell_graphic2_catg_pane_ParamLimits

0xe47a,	// (0x00018f32) cell_graphic2_catg_pane

0x680a,	// (0x000112c2) bg_button_pane_cp12

0xe48c,	// (0x00018f44) cell_graphic2_catg_pane_g1

0xd988,	// (0x00018440) cell_tb_ext_pane_t1_ParamLimits

0x6420,	// (0x00010ed8) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6420,	// (0x00010ed8) vkb2_top_cell_right_narrow_pane

0x6438,	// (0x00010ef0) vkb2_top_cell_right_wide_pane_ParamLimits

0x6438,	// (0x00010ef0) vkb2_top_cell_right_wide_pane

0x5b21,	// (0x000105d9) bg_vkb2_func_pane_ParamLimits

0x5b21,	// (0x000105d9) bg_vkb2_func_pane

0x64a9,	// (0x00010f61) vkb2_top_cell_left_pane_g1_ParamLimits

0x5b21,	// (0x000105d9) bg_vkb2_fuc_pane_cp03_ParamLimits

0x5b21,	// (0x000105d9) bg_vkb2_fuc_pane_cp03

0x6507,	// (0x00010fbf) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x939e,	// (0x00013e56) bg_vkb2_func_pane_g1

0x93a6,	// (0x00013e5e) bg_vkb2_func_pane_g2

0x93b6,	// (0x00013e6e) bg_vkb2_func_pane_g3

0x93ae,	// (0x00013e66) bg_vkb2_func_pane_g4

0x93be,	// (0x00013e76) bg_vkb2_func_pane_g5

0x93c6,	// (0x00013e7e) bg_vkb2_func_pane_g6

0x93ce,	// (0x00013e86) bg_vkb2_func_pane_g7

0x93d6,	// (0x00013e8e) bg_vkb2_func_pane_g8

0x9396,	// (0x00013e4e) bg_vkb2_func_pane_g9

0x0008,

0xfdff,	// (0x0001a8b7) bg_vkb2_func_pane_g

0x5b21,	// (0x000105d9) bg_vkb2_fuc_pane_cp01_ParamLimits

0x5b21,	// (0x000105d9) bg_vkb2_fuc_pane_cp01

0x64a9,	// (0x00010f61) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x64a9,	// (0x00010f61) vkb2_top_cell_right_wide_pane_g1

0x5b21,	// (0x000105d9) bg_vkb2_fuc_pane_cp02_ParamLimits

0x5b21,	// (0x000105d9) bg_vkb2_fuc_pane_cp02

0x6507,	// (0x00010fbf) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6507,	// (0x00010fbf) vkb2_top_cell_right_narrow_pane_g1

0xd5be,	// (0x00018076) aid_touch_area_decrease_ParamLimits

0xd5be,	// (0x00018076) aid_touch_area_decrease

0xd5dc,	// (0x00018094) aid_touch_area_increase_ParamLimits

0xd5dc,	// (0x00018094) aid_touch_area_increase

0xd5e8,	// (0x000180a0) aid_touch_area_mute_ParamLimits

0xd5e8,	// (0x000180a0) aid_touch_area_mute

0xd60c,	// (0x000180c4) aid_touch_area_slider_ParamLimits

0xd60c,	// (0x000180c4) aid_touch_area_slider

0xd6f8,	// (0x000181b0) popup_slider_window_g4_ParamLimits

0xd6f8,	// (0x000181b0) popup_slider_window_g4

0xd704,	// (0x000181bc) popup_slider_window_g5_ParamLimits

0xd704,	// (0x000181bc) popup_slider_window_g5

0xd726,	// (0x000181de) popup_slider_window_g6_ParamLimits

0xd726,	// (0x000181de) popup_slider_window_g6

0xd766,	// (0x0001821e) popup_slider_window_t2_ParamLimits

0xd766,	// (0x0001821e) popup_slider_window_t2

0x0001,

0xfcfb,	// (0x0001a7b3) popup_slider_window_t_ParamLimits

0xfcfb,	// (0x0001a7b3) popup_slider_window_t

0xd77e,	// (0x00018236) slider_pane_ParamLimits

0xd77e,	// (0x00018236) slider_pane

0xe495,	// (0x00018f4d) slider_pane_g1_ParamLimits

0xe495,	// (0x00018f4d) slider_pane_g1

0xe4a9,	// (0x00018f61) slider_pane_g2_ParamLimits

0xe4a9,	// (0x00018f61) slider_pane_g2

0xe4bf,	// (0x00018f77) slider_pane_g3_ParamLimits

0xe4bf,	// (0x00018f77) slider_pane_g3

0x0003,

0xfe12,	// (0x0001a8ca) slider_pane_g_ParamLimits

0xfe12,	// (0x0001a8ca) slider_pane_g

0x8d96,	// (0x0001384e) popup_tb_float_extension_window_ParamLimits

0x8d96,	// (0x0001384e) popup_tb_float_extension_window

0xe4eb,	// (0x00018fa3) aid_size_cell_tb_float_ext

0x680a,	// (0x000112c2) bg_popup_sub_window_cp28

0xe4f7,	// (0x00018faf) grid_tb_float_ext_pane

0xe501,	// (0x00018fb9) cell_tb_float_ext_pane_ParamLimits

0xe501,	// (0x00018fb9) cell_tb_float_ext_pane

0xe51b,	// (0x00018fd3) cell_tb_float_ext_pane_g1

0xe524,	// (0x00018fdc) grid_highlight_pane_cp12

0x5c70,	// (0x00010728) cell_last_hwr_side_pane_ParamLimits

0x5c70,	// (0x00010728) cell_last_hwr_side_pane

0xbd72,	// (0x0001682a) cell_last_hwr_side_pane_g1

0xe52d,	// (0x00018fe5) cell_last_hwr_side_pane_g2

0x0001,

0xfe1b,	// (0x0001a8d3) cell_last_hwr_side_pane_g

0x63cf,	// (0x00010e87) vkb2_area_bottom_space_btn_pane_ParamLimits

0x63cf,	// (0x00010e87) vkb2_area_bottom_space_btn_pane

0x5d86,	// (0x0001083e) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdfe0,	// (0x00018a98) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6665,	// (0x0001111d) cell_vkb2_top_candi_pane_t1_ParamLimits

0x6684,	// (0x0001113c) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x6684,	// (0x0001113c) vkb2_area_bottom_space_btn_pane_g1

0x66be,	// (0x00011176) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x66be,	// (0x00011176) vkb2_area_bottom_space_btn_pane_g2

0x66f4,	// (0x000111ac) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x66f4,	// (0x000111ac) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe20,	// (0x0001a8d8) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe20,	// (0x0001a8d8) vkb2_area_bottom_space_btn_pane_g

0x5be4,	// (0x0001069c) cel_fep_hwr_func_pane_ParamLimits

0x5be4,	// (0x0001069c) cel_fep_hwr_func_pane

0x5c20,	// (0x000106d8) cell_hwr_side_button_pane_ParamLimits

0x5c20,	// (0x000106d8) cell_hwr_side_button_pane

0xd9bc,	// (0x00018474) aid_area_touch_clock_ParamLimits

0x6ba1,	// (0x00011659) bg_uniindi_top_pane_ParamLimits

0xd9ce,	// (0x00018486) uniindi_top_pane_g1_ParamLimits

0xd9e4,	// (0x0001849c) uniindi_top_pane_g2_ParamLimits

0xd9f0,	// (0x000184a8) uniindi_top_pane_g3_ParamLimits

0xda01,	// (0x000184b9) uniindi_top_pane_g4_ParamLimits

0xfd33,	// (0x0001a7eb) uniindi_top_pane_g_ParamLimits

0xda0e,	// (0x000184c6) uniindi_top_pane_t1_ParamLimits

0x6ba1,	// (0x00011659) bg_vkb2_func_pane_cp01_ParamLimits

0x6ba1,	// (0x00011659) bg_vkb2_func_pane_cp01

0xe536,	// (0x00018fee) cel_fep_hwr_func_pane_g1_ParamLimits

0xe536,	// (0x00018fee) cel_fep_hwr_func_pane_g1

0x6ba1,	// (0x00011659) bg_vkb2_func_pane_cp02_ParamLimits

0x6ba1,	// (0x00011659) bg_vkb2_func_pane_cp02

0xe536,	// (0x00018fee) cell_hwr_side_button_pane_g1_ParamLimits

0xe536,	// (0x00018fee) cell_hwr_side_button_pane_g1

0x91dd,	// (0x00013c95) status_pane_g4_ParamLimits

0x91dd,	// (0x00013c95) status_pane_g4

0x91f7,	// (0x00013caf) status_pane_t1

0xbaab,	// (0x00016563) form2_midp_gauge_slider_cont_pane

0xbab3,	// (0x0001656b) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbac5,	// (0x0001657d) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbad7,	// (0x0001658f) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf3,	// (0x0001a5ab) form2_midp_gauge_slider_pane_t_ParamLimits

0xbae9,	// (0x000165a1) form2_midp_slider_pane_ParamLimits

0x603e,	// (0x00010af6) aid_size_cell_func_vkb2_ParamLimits

0x603e,	// (0x00010af6) aid_size_cell_func_vkb2

0xe4d7,	// (0x00018f8f) slider_pane_g4_ParamLimits

0xe4d7,	// (0x00018f8f) slider_pane_g4

0x673e,	// (0x000111f6) form2_midp_gauge_slider_pane_t2_cp01

0x674c,	// (0x00011204) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x674c,	// (0x00011204) form2_midp_gauge_slider_pane_t3_cp01

0x6769,	// (0x00011221) form2_midp_slider_pane_cp01

0x680a,	// (0x000112c2) navi_smil_pane

0xe56f,	// (0x00019027) navi_smil_pane_g1

0xe577,	// (0x0001902f) navi_smil_pane_t1

0xe544,	// (0x00018ffc) form2_midp_slider_pane_g1

0xe54d,	// (0x00019005) form2_midp_slider_pane_g2

0xe555,	// (0x0001900d) form2_midp_slider_pane_g3

0xe544,	// (0x00018ffc) form2_midp_slider_pane_g4

0xe55d,	// (0x00019015) form2_midp_slider_pane_g5

0x0004,

0xfe29,	// (0x0001a8e1) form2_midp_slider_pane_g

0x672e,	// (0x000111e6) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x672e,	// (0x000111e6) vkb2_area_bottom_space_btn_pane_g4

0x9013,	// (0x00013acb) lc0_navi_pane_ParamLimits

0x9013,	// (0x00013acb) lc0_navi_pane

0x9089,	// (0x00013b41) lc0_stat_indi_pane_ParamLimits

0x9089,	// (0x00013b41) lc0_stat_indi_pane

0x90a0,	// (0x00013b58) ls0_title_pane_ParamLimits

0x90a0,	// (0x00013b58) ls0_title_pane

0x76e5,	// (0x0001219d) bg_popup_sub_pane_cp14_ParamLimits

0xd9a3,	// (0x0001845b) list_uniindi_pane_ParamLimits

0xd9af,	// (0x00018467) uniindi_top_pane_ParamLimits

0xda4b,	// (0x00018503) list_single_uniindi_pane_g1_ParamLimits

0xda5e,	// (0x00018516) list_single_uniindi_pane_t1_ParamLimits

0x6772,	// (0x0001122a) lc0_stat_clock_pane_ParamLimits

0x6772,	// (0x0001122a) lc0_stat_clock_pane

0xe585,	// (0x0001903d) lc0_stat_indi_pane_g1_ParamLimits

0xe585,	// (0x0001903d) lc0_stat_indi_pane_g1

0xe592,	// (0x0001904a) lc0_stat_indi_pane_g2_ParamLimits

0xe592,	// (0x0001904a) lc0_stat_indi_pane_g2

0x0001,

0xfe34,	// (0x0001a8ec) lc0_stat_indi_pane_g_ParamLimits

0xfe34,	// (0x0001a8ec) lc0_stat_indi_pane_g

0x677f,	// (0x00011237) lc0_uni_indicator_pane_ParamLimits

0x677f,	// (0x00011237) lc0_uni_indicator_pane

0xe59f,	// (0x00019057) ls0_title_pane_g1_ParamLimits

0xe59f,	// (0x00019057) ls0_title_pane_g1

0xe5b3,	// (0x0001906b) ls0_title_pane_t1_ParamLimits

0xe5b3,	// (0x0001906b) ls0_title_pane_t1

0x678c,	// (0x00011244) lc0_uni_indicator_pane_g1_ParamLimits

0x678c,	// (0x00011244) lc0_uni_indicator_pane_g1

0xe5e9,	// (0x000190a1) lc0_stat_clock_pane_t1

0x680a,	// (0x000112c2) main_ai5_pane

0xe5f7,	// (0x000190af) ai5_sk_pane_ParamLimits

0xe5f7,	// (0x000190af) ai5_sk_pane

0xe604,	// (0x000190bc) cell_ai5_widget_pane_ParamLimits

0xe604,	// (0x000190bc) cell_ai5_widget_pane

0xe686,	// (0x0001913e) aid_size_cell_widget_grid

0xe69a,	// (0x00019152) bg_ai5_widget_pane_ParamLimits

0xe69a,	// (0x00019152) bg_ai5_widget_pane

0xe6c2,	// (0x0001917a) cell_ai5_widget_pane_g2

0xe6d2,	// (0x0001918a) cell_ai5_widget_pane_g3

0xe6f1,	// (0x000191a9) cell_ai5_widget_pane_g4

0xe6fd,	// (0x000191b5) cell_ai5_widget_pane_g5

0xe709,	// (0x000191c1) cell_ai5_widget_pane_g6

0xe715,	// (0x000191cd) cell_ai5_widget_pane_g7

0xe75d,	// (0x00019215) cell_ai5_widget_pane_t1_ParamLimits

0xe75d,	// (0x00019215) cell_ai5_widget_pane_t1

0xe77a,	// (0x00019232) cell_ai5_widget_pane_t2_ParamLimits

0xe77a,	// (0x00019232) cell_ai5_widget_pane_t2

0xe792,	// (0x0001924a) cell_ai5_widget_pane_t3_ParamLimits

0xe792,	// (0x0001924a) cell_ai5_widget_pane_t3

0xe7aa,	// (0x00019262) cell_ai5_widget_pane_t4_ParamLimits

0xe7aa,	// (0x00019262) cell_ai5_widget_pane_t4

0xe7c4,	// (0x0001927c) cell_ai5_widget_pane_t5_ParamLimits

0xe7c4,	// (0x0001927c) cell_ai5_widget_pane_t5

0xe7e3,	// (0x0001929b) cell_ai5_widget_pane_t6_ParamLimits

0xe7e3,	// (0x0001929b) cell_ai5_widget_pane_t6

0xe7f5,	// (0x000192ad) cell_ai5_widget_pane_t7_ParamLimits

0xe7f5,	// (0x000192ad) cell_ai5_widget_pane_t7

0xe80e,	// (0x000192c6) cell_ai5_widget_pane_t8_ParamLimits

0xe80e,	// (0x000192c6) cell_ai5_widget_pane_t8

0x0009,

0xfe4e,	// (0x0001a906) cell_ai5_widget_pane_t_ParamLimits

0xfe4e,	// (0x0001a906) cell_ai5_widget_pane_t

0xe85a,	// (0x00019312) grid_ai5_widget_pane

0x76e5,	// (0x0001219d) highlight_cell_ai5_widget_pane_ParamLimits

0x76e5,	// (0x0001219d) highlight_cell_ai5_widget_pane

0xe872,	// (0x0001932a) ai5_sk_left_pane

0xe87c,	// (0x00019334) ai5_sk_middle_pane

0xe886,	// (0x0001933e) ai5_sk_right_pane

0xe890,	// (0x00019348) bg_ai5_widget_pane_g1_ParamLimits

0xe890,	// (0x00019348) bg_ai5_widget_pane_g1

0xe89c,	// (0x00019354) bg_ai5_widget_pane_g2_ParamLimits

0xe89c,	// (0x00019354) bg_ai5_widget_pane_g2

0xe8a8,	// (0x00019360) bg_ai5_widget_pane_g3_ParamLimits

0xe8a8,	// (0x00019360) bg_ai5_widget_pane_g3

0xe8b4,	// (0x0001936c) bg_ai5_widget_pane_g4_ParamLimits

0xe8b4,	// (0x0001936c) bg_ai5_widget_pane_g4

0xe8c0,	// (0x00019378) bg_ai5_widget_pane_g5_ParamLimits

0xe8c0,	// (0x00019378) bg_ai5_widget_pane_g5

0xe8cc,	// (0x00019384) bg_ai5_widget_pane_g6_ParamLimits

0xe8cc,	// (0x00019384) bg_ai5_widget_pane_g6

0xe8d8,	// (0x00019390) bg_ai5_widget_pane_g7_ParamLimits

0xe8d8,	// (0x00019390) bg_ai5_widget_pane_g7

0xe8e4,	// (0x0001939c) bg_ai5_widget_pane_g8_ParamLimits

0xe8e4,	// (0x0001939c) bg_ai5_widget_pane_g8

0xe8f0,	// (0x000193a8) bg_ai5_widget_pane_g9_ParamLimits

0xe8f0,	// (0x000193a8) bg_ai5_widget_pane_g9

0x0008,

0xfe63,	// (0x0001a91b) bg_ai5_widget_pane_g_ParamLimits

0xfe63,	// (0x0001a91b) bg_ai5_widget_pane_g

0xe923,	// (0x000193db) cell_shortcut_ai5_widget_pane_ParamLimits

0xe923,	// (0x000193db) cell_shortcut_ai5_widget_pane

0x69e1,	// (0x00011499) bg_cell_shortcut_ai5_widget_pane

0xe934,	// (0x000193ec) cell_grid_ai5_widget_pane_g1

0xe93d,	// (0x000193f5) highlight_cell_shortcut_ai5_widget_pane

0x939e,	// (0x00013e56) ai5_sk_left_pane_g1

0xe945,	// (0x000193fd) ai5_sk_left_pane_g2

0xe94d,	// (0x00019405) ai5_sk_left_pane_g3

0xe955,	// (0x0001940d) ai5_sk_left_pane_g4

0x0003,

0xfe76,	// (0x0001a92e) ai5_sk_left_pane_g

0xe95d,	// (0x00019415) ai5_sk_left_pane_t1

0x93a6,	// (0x00013e5e) ai5_sk_right_pane_g1

0xe96b,	// (0x00019423) ai5_sk_right_pane_g2

0xe973,	// (0x0001942b) ai5_sk_right_pane_g3

0xe97b,	// (0x00019433) ai5_sk_right_pane_g4

0x0003,

0xfe7f,	// (0x0001a937) ai5_sk_right_pane_g

0xe983,	// (0x0001943b) ai5_sk_right_pane_t1

0x93a6,	// (0x00013e5e) ai5_sk_middle_pane_g1

0x939e,	// (0x00013e56) ai5_sk_middle_pane_g2

0x93be,	// (0x00013e76) ai5_sk_middle_pane_g3

0xe973,	// (0x0001942b) ai5_sk_middle_pane_g4

0xe94d,	// (0x00019405) ai5_sk_middle_pane_g5

0xe991,	// (0x00019449) ai5_sk_middle_pane_g6

0xe999,	// (0x00019451) ai5_sk_middle_pane_g7

0x0006,

0xfe88,	// (0x0001a940) ai5_sk_middle_pane_g

0x8ea3,	// (0x0001395b) aid_touch_area_size_lc0_ParamLimits

0x8ea3,	// (0x0001395b) aid_touch_area_size_lc0

0x5db5,	// (0x0001086d) cell_hwr_candidate_pane_t1_ParamLimits

0x8ebf,	// (0x00013977) aid_touch_navi_pane

0x9187,	// (0x00013c3f) status_dt_navi_pane_ParamLimits

0x9187,	// (0x00013c3f) status_dt_navi_pane

0x9194,	// (0x00013c4c) status_dt_sta_pane_ParamLimits

0x9194,	// (0x00013c4c) status_dt_sta_pane

0xe9a1,	// (0x00019459) dt_sta_controll_pane

0xe9ae,	// (0x00019466) dt_sta_indi_pane

0xe9bf,	// (0x00019477) dt_sta_title_pane

0x6ba1,	// (0x00011659) bg_dt_sta_indi_pane_ParamLimits

0x6ba1,	// (0x00011659) bg_dt_sta_indi_pane

0xe9d2,	// (0x0001948a) dt_sta_battery_pane

0xe9da,	// (0x00019492) dt_sta_indi_pane_g1

0xe9e3,	// (0x0001949b) dt_sta_indi_pane_g2

0xe9ec,	// (0x000194a4) dt_sta_indi_pane_g3

0x0002,

0xfe97,	// (0x0001a94f) dt_sta_indi_pane_g

0xe9f5,	// (0x000194ad) dt_sta_signal_pane

0x76e5,	// (0x0001219d) bg_dt_sta_title_pane_ParamLimits

0x76e5,	// (0x0001219d) bg_dt_sta_title_pane

0xe9fe,	// (0x000194b6) dt_sta_title_pane_g1

0xea06,	// (0x000194be) dt_sta_title_pane_t1_ParamLimits

0xea06,	// (0x000194be) dt_sta_title_pane_t1

0x680a,	// (0x000112c2) bg_dt_sta_control_pane

0xea1b,	// (0x000194d3) dt_sta_controll_pane_g1

0xea24,	// (0x000194dc) bg_dt_sta_title_pane_g1

0xea2d,	// (0x000194e5) bg_dt_sta_title_pane_g2

0xea36,	// (0x000194ee) bg_dt_sta_title_pane_g3

0x0002,

0xfe9e,	// (0x0001a956) bg_dt_sta_title_pane_g

0xbd72,	// (0x0001682a) bg_dt_sta_indi_pane_g1

0xea3f,	// (0x000194f7) dt_sta_signal_pane_g1

0xea47,	// (0x000194ff) dt_sta_signal_pane_g2

0x0001,

0xfea5,	// (0x0001a95d) dt_sta_signal_pane_g

0xea4f,	// (0x00019507) dt_sta_battery_pane_g1

0xea58,	// (0x00019510) dt_sta_battery_pane_t1

0xbd72,	// (0x0001682a) bg_dt_sta_control_pane_g1

0x7faf,	// (0x00012a67) fep_china_uni_eep_pane

0x7fb7,	// (0x00012a6f) fep_china_uni_entry_pane_ParamLimits

0x7fc7,	// (0x00012a7f) popup_fep_china_uni_window_g1_ParamLimits

0x7fd7,	// (0x00012a8f) popup_fep_china_uni_window_g2_ParamLimits

0x7fd7,	// (0x00012a8f) popup_fep_china_uni_window_g2

0x0001,

0xf730,	// (0x0001a1e8) popup_fep_china_uni_window_g_ParamLimits

0xf730,	// (0x0001a1e8) popup_fep_china_uni_window_g

0xea67,	// (0x0001951f) fep_china_uni_eep_pane_g1

0xea6f,	// (0x00019527) fep_china_uni_eep_pane_t1

0xe566,	// (0x0001901e) aid_touch_area_size_smil_player

0x900b,	// (0x00013ac3) lc0_clock_pane

0x91eb,	// (0x00013ca3) status_pane_g5_ParamLimits

0x91eb,	// (0x00013ca3) status_pane_g5

0x8a5b,	// (0x00013513) popup_keymap_window

0x91a9,	// (0x00013c61) status_icon_pane

0xe6d2,	// (0x0001918a) cell_ai5_widget_pane_g3_ParamLimits

0xe6f1,	// (0x000191a9) cell_ai5_widget_pane_g4_ParamLimits

0xe6fd,	// (0x000191b5) cell_ai5_widget_pane_g5_ParamLimits

0xe721,	// (0x000191d9) cell_ai5_widget_pane_g8_ParamLimits

0xe721,	// (0x000191d9) cell_ai5_widget_pane_g8

0xe735,	// (0x000191ed) cell_ai5_widget_pane_g9_ParamLimits

0xe735,	// (0x000191ed) cell_ai5_widget_pane_g9

0xe749,	// (0x00019201) cell_ai5_widget_pane_g10_ParamLimits

0xe749,	// (0x00019201) cell_ai5_widget_pane_g10

0xea7e,	// (0x00019536) status_icon_pane_g1

0x680a,	// (0x000112c2) bg_popup_sub_pane_cp13

0xea86,	// (0x0001953e) popup_keymap_window_t1

0x880b,	// (0x000132c3) control_pane_g6_ParamLimits

0x880b,	// (0x000132c3) control_pane_g6

0x8818,	// (0x000132d0) control_pane_g7_ParamLimits

0x8818,	// (0x000132d0) control_pane_g7

0x8825,	// (0x000132dd) control_pane_g8_ParamLimits

0x8825,	// (0x000132dd) control_pane_g8

0xe9a1,	// (0x00019459) dt_sta_controll_pane_ParamLimits

0xe9ae,	// (0x00019466) dt_sta_indi_pane_ParamLimits

0xe9bf,	// (0x00019477) dt_sta_title_pane_ParamLimits

0x70bc,	// (0x00011b74) aid_size_touch_scroll_bar_cale

0x4e55,	// (0x0000f90d) popup_discreet_window_ParamLimits

0x4e55,	// (0x0000f90d) popup_discreet_window

0x4edd,	// (0x0000f995) popup_sk_window

0x9acb,	// (0x00014583) bg_popup_sub_pane_cp28_ParamLimits

0x9acb,	// (0x00014583) bg_popup_sub_pane_cp28

0xea94,	// (0x0001954c) popup_discreet_window_g1_ParamLimits

0xea94,	// (0x0001954c) popup_discreet_window_g1

0xeab4,	// (0x0001956c) popup_discreet_window_t1_ParamLimits

0xeab4,	// (0x0001956c) popup_discreet_window_t1

0xead2,	// (0x0001958a) popup_discreet_window_t2_ParamLimits

0xead2,	// (0x0001958a) popup_discreet_window_t2

0x0002,

0xfeaa,	// (0x0001a962) popup_discreet_window_t_ParamLimits

0xfeaa,	// (0x0001a962) popup_discreet_window_t

0x67a0,	// (0x00011258) popup_sk_window_g1

0x67aa,	// (0x00011262) popup_sk_window_g2

0x0001,

0xfeb1,	// (0x0001a969) popup_sk_window_g

0xeb24,	// (0x000195dc) popup_sk_window_t1

0xeb32,	// (0x000195ea) popup_sk_window_t1_copy1

0xe6c2,	// (0x0001917a) cell_ai5_widget_pane_g2_ParamLimits

0xe820,	// (0x000192d8) cell_ai5_widget_pane_t9_ParamLimits

0xe820,	// (0x000192d8) cell_ai5_widget_pane_t9

0x680a,	// (0x000112c2) main_fep_fshwr2_pane

0xeb40,	// (0x000195f8) aid_fshwr2_btn_pane

0xeb48,	// (0x00019600) aid_fshwr2_syb_pane

0xeb50,	// (0x00019608) aid_fshwr2_txt_pane

0xeb58,	// (0x00019610) fshwr2_func_candi_pane

0xeb64,	// (0x0001961c) fshwr2_hwr_syb_pane

0xeb70,	// (0x00019628) fshwr2_icf_pane

0x680a,	// (0x000112c2) fshwr2_icf_bg_pane

0xeb8e,	// (0x00019646) fshwr2_icf_pane_t1_ParamLimits

0xeb8e,	// (0x00019646) fshwr2_icf_pane_t1

0xbd72,	// (0x0001682a) fshwr2_func_candi_pane_g1

0xeba5,	// (0x0001965d) fshwr2_func_candi_row_pane_ParamLimits

0xeba5,	// (0x0001965d) fshwr2_func_candi_row_pane

0xebb6,	// (0x0001966e) cell_fshwr2_syb_pane_ParamLimits

0xebb6,	// (0x0001966e) cell_fshwr2_syb_pane

0xc004,	// (0x00016abc) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc004,	// (0x00016abc) fshwr2_hwr_syb_pane_g1

0x680a,	// (0x000112c2) bg_popup_call_pane_cp01

0xebd0,	// (0x00019688) fshwr2_func_candi_cell_pane_ParamLimits

0xebd0,	// (0x00019688) fshwr2_func_candi_cell_pane

0xec01,	// (0x000196b9) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xec01,	// (0x000196b9) fshwr2_func_candi_cell_bg_pane

0xec1b,	// (0x000196d3) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xec1b,	// (0x000196d3) fshwr2_func_candi_cell_pane_g1

0xec43,	// (0x000196fb) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xec43,	// (0x000196fb) fshwr2_func_candi_cell_pane_t1

0x680a,	// (0x000112c2) bg_button_pane_cp08

0x8534,	// (0x00012fec) cell_fshwr2_syb_bg_pane

0xec56,	// (0x0001970e) cell_fshwr2_syb_bg_pane_g1

0xec5e,	// (0x00019716) cell_fshwr2_syb_bg_pane_t1

0x76e5,	// (0x0001219d) main_tmo_pane

0xa5e0,	// (0x00015098) uni_indicator_pane_g1_ParamLimits

0xa5f5,	// (0x000150ad) uni_indicator_pane_g2_ParamLimits

0xa60b,	// (0x000150c3) uni_indicator_pane_g3_ParamLimits

0xa621,	// (0x000150d9) uni_indicator_pane_g4_ParamLimits

0xa621,	// (0x000150d9) uni_indicator_pane_g4

0xa635,	// (0x000150ed) uni_indicator_pane_g5_ParamLimits

0xa635,	// (0x000150ed) uni_indicator_pane_g5

0xa649,	// (0x00015101) uni_indicator_pane_g6_ParamLimits

0xa649,	// (0x00015101) uni_indicator_pane_g6

0xf92d,	// (0x0001a3e5) uni_indicator_pane_g_ParamLimits

0xd59a,	// (0x00018052) popup_tmo_note_window_ParamLimits

0xd59a,	// (0x00018052) popup_tmo_note_window

0x680a,	// (0x000112c2) fshwr2_bg_pane

0xec34,	// (0x000196ec) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xec34,	// (0x000196ec) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb6,	// (0x0001a96e) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb6,	// (0x0001a96e) fshwr2_func_candi_cell_pane_g

0xbd72,	// (0x0001682a) bg_popup_window_pane_cp01

0xec6d,	// (0x00019725) bg_popup_window_pane_g1_cp01

0xec76,	// (0x0001972e) bg_popup_window_pane_cp22_ParamLimits

0xec76,	// (0x0001972e) bg_popup_window_pane_cp22

0xec84,	// (0x0001973c) listscroll_tmo_link_pane_ParamLimits

0xec84,	// (0x0001973c) listscroll_tmo_link_pane

0xecc4,	// (0x0001977c) popup_tmo_note_window_g1_ParamLimits

0xecc4,	// (0x0001977c) popup_tmo_note_window_g1

0xecd1,	// (0x00019789) tmo_note_info_pane_ParamLimits

0xecd1,	// (0x00019789) tmo_note_info_pane

0xeceb,	// (0x000197a3) list_tmo_note_info_pane_g1_ParamLimits

0xeceb,	// (0x000197a3) list_tmo_note_info_pane_g1

0xed02,	// (0x000197ba) list_tmo_note_info_pane_g2_ParamLimits

0xed02,	// (0x000197ba) list_tmo_note_info_pane_g2

0x0001,

0xfebb,	// (0x0001a973) list_tmo_note_info_pane_g_ParamLimits

0xfebb,	// (0x0001a973) list_tmo_note_info_pane_g

0xed1e,	// (0x000197d6) list_tmo_note_info_text_pane_ParamLimits

0xed1e,	// (0x000197d6) list_tmo_note_info_text_pane

0xed9f,	// (0x00019857) list_tmo_link_pane

0xedac,	// (0x00019864) scroll_pane_cp20

0xedb9,	// (0x00019871) list_single_tmo_link_pane_ParamLimits

0xedb9,	// (0x00019871) list_single_tmo_link_pane

0xedc9,	// (0x00019881) list_single_tmo_link_pane_t1

0xedd7,	// (0x0001988f) list_tmo_note_info_text_pane_t1_ParamLimits

0xedd7,	// (0x0001988f) list_tmo_note_info_text_pane_t1

0x7928,	// (0x000123e0) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7928,	// (0x000123e0) aid_size_touch_scroll_bar_cp01

0x779d,	// (0x00012255) aid_size_touch_slider_marker

0x4ec5,	// (0x0000f97d) popup_settings_window_ParamLimits

0x4ec5,	// (0x0000f97d) popup_settings_window

0x88e6,	// (0x0001339e) popup_candi_list_indi_window

0x8ebf,	// (0x00013977) aid_touch_navi_pane_ParamLimits

0x5f7b,	// (0x00010a33) rs_clock_indi_pane

0x5f84,	// (0x00010a3c) sctrl_sk_bottom_pane_ParamLimits

0x5f95,	// (0x00010a4d) sctrl_sk_top_pane_ParamLimits

0x6098,	// (0x00010b50) popup_fep_tooltip_window

0xe686,	// (0x0001913e) aid_size_cell_widget_grid_ParamLimits

0xe6b6,	// (0x0001916e) cell_ai5_widget_pane_g1_ParamLimits

0xe6b6,	// (0x0001916e) cell_ai5_widget_pane_g1

0xe709,	// (0x000191c1) cell_ai5_widget_pane_g6_ParamLimits

0xe715,	// (0x000191cd) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe39,	// (0x0001a8f1) cell_ai5_widget_pane_g_ParamLimits

0xfe39,	// (0x0001a8f1) cell_ai5_widget_pane_g

0xe844,	// (0x000192fc) cell_ai5_widget_pane_t10_ParamLimits

0xe844,	// (0x000192fc) cell_ai5_widget_pane_t10

0xe85a,	// (0x00019312) grid_ai5_widget_pane_ParamLimits

0xe8fc,	// (0x000193b4) cell_contacts_ai5_widget_pane_ParamLimits

0xe8fc,	// (0x000193b4) cell_contacts_ai5_widget_pane

0xeae7,	// (0x0001959f) popup_discreet_window_t3_ParamLimits

0xeae7,	// (0x0001959f) popup_discreet_window_t3

0xeb7a,	// (0x00019632) popup_fshwr2_char_preview_window_ParamLimits

0xeb7a,	// (0x00019632) popup_fshwr2_char_preview_window

0xed3c,	// (0x000197f4) tmo_note_info_pane_t1

0xed51,	// (0x00019809) tmo_note_info_pane_t2

0xed66,	// (0x0001981e) tmo_note_info_pane_t3

0xed7b,	// (0x00019833) tmo_note_info_pane_t4

0xed8d,	// (0x00019845) tmo_note_info_pane_t5

0x0004,

0xfec0,	// (0x0001a978) tmo_note_info_pane_t

0xed9f,	// (0x00019857) list_tmo_link_pane_ParamLimits

0xedac,	// (0x00019864) scroll_pane_cp20_ParamLimits

0x680a,	// (0x000112c2) bg_popup_fep_char_preview_window_cp01

0xedf0,	// (0x000198a8) popup_fshwr2_char_preview_window_t1

0xedfe,	// (0x000198b6) popup_candi_list_indi_window_g1

0xee07,	// (0x000198bf) bg_cell_contacts_ai5_widget_pane

0xee13,	// (0x000198cb) cell_contacts_ai5_widget_pane_g1

0xee27,	// (0x000198df) cell_contacts_ai5_widget_pane_g2

0xee36,	// (0x000198ee) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfecb,	// (0x0001a983) cell_contacts_ai5_widget_pane_g

0xee49,	// (0x00019901) cell_contacts_ai5_widget_pane_t1

0x76e5,	// (0x0001219d) highlight_cell_shortcut_ai5_widget_pane_cp01

0xeec3,	// (0x0001997b) settings_container_pane

0x8534,	// (0x00012fec) listscroll_set_pane_copy1

0xb251,	// (0x00015d09) scroll_pane_cp121_copy1

0xeecf,	// (0x00019987) set_content_pane_copy1

0xeed7,	// (0x0001998f) aid_height_set_list_copy1_ParamLimits

0xeed7,	// (0x0001998f) aid_height_set_list_copy1

0xa869,	// (0x00015321) aid_size_parent_copy1_ParamLimits

0xa869,	// (0x00015321) aid_size_parent_copy1

0xeee3,	// (0x0001999b) button_value_adjust_pane_cp6_copy1_ParamLimits

0xeee3,	// (0x0001999b) button_value_adjust_pane_cp6_copy1

0x88be,	// (0x00013376) list_highlight_pane_cp2_copy1_ParamLimits

0x88be,	// (0x00013376) list_highlight_pane_cp2_copy1

0xeef7,	// (0x000199af) list_set_pane_copy1_ParamLimits

0xeef7,	// (0x000199af) list_set_pane_copy1

0xee5e,	// (0x00019916) main_pane_set_t1_copy1_ParamLimits

0xee5e,	// (0x00019916) main_pane_set_t1_copy1

0xee98,	// (0x00019950) main_pane_set_t2_copy1_ParamLimits

0xee98,	// (0x00019950) main_pane_set_t2_copy1

0xefa4,	// (0x00019a5c) main_pane_set_t3_copy1

0xefb2,	// (0x00019a6a) main_pane_set_t4_copy1

0xeeb7,	// (0x0001996f) set_content_pane_g1_copy1_ParamLimits

0xeeb7,	// (0x0001996f) set_content_pane_g1_copy1

0xefc0,	// (0x00019a78) setting_code_pane_copy1

0xefca,	// (0x00019a82) setting_slider_graphic_pane_copy1

0xefca,	// (0x00019a82) setting_slider_pane_copy1

0xefca,	// (0x00019a82) setting_text_pane_copy1

0xefd4,	// (0x00019a8c) setting_volume_pane_copy1

0xefdd,	// (0x00019a95) settings_code_pane_cp2_copy1

0xefe5,	// (0x00019a9d) settings_code_pane_cp_copy1_ParamLimits

0xefe5,	// (0x00019a9d) settings_code_pane_cp_copy1

0xeff9,	// (0x00019ab1) volume_set_pane_copy1

0xf001,	// (0x00019ab9) volume_set_pane_g10_copy1

0xf009,	// (0x00019ac1) volume_set_pane_g1_copy1

0xf011,	// (0x00019ac9) volume_set_pane_g2_copy1

0xf019,	// (0x00019ad1) volume_set_pane_g3_copy1

0xf021,	// (0x00019ad9) volume_set_pane_g4_copy1

0xf029,	// (0x00019ae1) volume_set_pane_g5_copy1

0xf031,	// (0x00019ae9) volume_set_pane_g6_copy1

0xf039,	// (0x00019af1) volume_set_pane_g7_copy1

0xf041,	// (0x00019af9) volume_set_pane_g8_copy1

0xf049,	// (0x00019b01) volume_set_pane_g9_copy1

0x68fe,	// (0x000113b6) bg_set_opt_pane_cp_copy1_ParamLimits

0x68fe,	// (0x000113b6) bg_set_opt_pane_cp_copy1

0xf051,	// (0x00019b09) setting_slider_pane_t1_copy1_ParamLimits

0xf051,	// (0x00019b09) setting_slider_pane_t1_copy1

0xf06f,	// (0x00019b27) setting_slider_pane_t2_copy1_ParamLimits

0xf06f,	// (0x00019b27) setting_slider_pane_t2_copy1

0xf089,	// (0x00019b41) setting_slider_pane_t3_copy1_ParamLimits

0xf089,	// (0x00019b41) setting_slider_pane_t3_copy1

0xf0a1,	// (0x00019b59) slider_set_pane_copy1_ParamLimits

0xf0a1,	// (0x00019b59) slider_set_pane_copy1

0x781d,	// (0x000122d5) set_opt_bg_pane_g1_copy2

0x7825,	// (0x000122dd) set_opt_bg_pane_g2_copy2

0xf0b7,	// (0x00019b6f) set_opt_bg_pane_g3_copy2

0x7835,	// (0x000122ed) set_opt_bg_pane_g4_copy2

0x783d,	// (0x000122f5) set_opt_bg_pane_g5_copy2

0x7845,	// (0x000122fd) set_opt_bg_pane_g6_copy2

0xf0c1,	// (0x00019b79) set_opt_bg_pane_g7_copy2

0xf0c9,	// (0x00019b81) set_opt_bg_pane_g8_copy2

0xf0d3,	// (0x00019b8b) set_opt_bg_pane_g9_copy2

0x67b4,	// (0x0001126c) aid_size_touch_slider_mark_copy1_ParamLimits

0x67b4,	// (0x0001126c) aid_size_touch_slider_mark_copy1

0xf0dd,	// (0x00019b95) slider_set_pane_g1_copy1

0x67c8,	// (0x00011280) slider_set_pane_g2_copy1

0x59af,	// (0x00010467) slider_set_pane_g3_copy1_ParamLimits

0x59af,	// (0x00010467) slider_set_pane_g3_copy1

0x59c3,	// (0x0001047b) slider_set_pane_g4_copy1_ParamLimits

0x59c3,	// (0x0001047b) slider_set_pane_g4_copy1

0x59db,	// (0x00010493) slider_set_pane_g5_copy1_ParamLimits

0x59db,	// (0x00010493) slider_set_pane_g5_copy1

0x59af,	// (0x00010467) slider_set_pane_g6_copy1_ParamLimits

0x59af,	// (0x00010467) slider_set_pane_g6_copy1

0x67d0,	// (0x00011288) slider_set_pane_g7_copy1_ParamLimits

0x67d0,	// (0x00011288) slider_set_pane_g7_copy1

0x681e,	// (0x000112d6) bg_set_opt_pane_cp2_copy1

0xf0e6,	// (0x00019b9e) setting_slider_graphic_pane_g1_copy1

0xf0ef,	// (0x00019ba7) setting_slider_graphic_pane_t1_copy1

0xf0ff,	// (0x00019bb7) setting_slider_graphic_pane_t2_copy1

0xf10f,	// (0x00019bc7) slider_set_pane_cp_copy1

0xf11f,	// (0x00019bd7) input_focus_pane_cp1_copy1

0xf128,	// (0x00019be0) list_set_text_pane_copy1

0xf130,	// (0x00019be8) setting_text_pane_g1_copy1

0x6957,	// (0x0001140f) set_text_pane_t1_copy1

0xf11f,	// (0x00019bd7) input_focus_pane_cp2_copy1

0xf130,	// (0x00019be8) setting_code_pane_g1_copy1

0xf139,	// (0x00019bf1) setting_code_pane_t1_copy1

0xf147,	// (0x00019bff) list_set_graphic_pane_copy1

0x681e,	// (0x000112d6) bg_set_opt_pane_cp4_copy1

0x823a,	// (0x00012cf2) list_set_graphic_pane_g1_copy1_ParamLimits

0x823a,	// (0x00012cf2) list_set_graphic_pane_g1_copy1

0xf159,	// (0x00019c11) list_set_graphic_pane_g2_copy1

0x8252,	// (0x00012d0a) list_set_graphic_pane_t1_copy1_ParamLimits

0x8252,	// (0x00012d0a) list_set_graphic_pane_t1_copy1

0xbd72,	// (0x0001682a) rs_clock_indi_pane_g1

0xf161,	// (0x00019c19) rs_clock_indi_pane_t1

0xe9d2,	// (0x0001948a) rs_indi_pane

0xf16f,	// (0x00019c27) rs_indi_pane_g1

0xf178,	// (0x00019c30) rs_indi_pane_g2

0xf181,	// (0x00019c39) rs_indi_pane_g3

0x0002,

0xfed2,	// (0x0001a98a) rs_indi_pane_g

0x8534,	// (0x00012fec) bg_popup_preview_window_pane_cp03

0xf18a,	// (0x00019c42) popup_fep_tooltip_window_t1

0xcbe9,	// (0x000176a1) popup_note2_window_g2_ParamLimits

0xcbe9,	// (0x000176a1) popup_note2_window_g2

0x0001,

0xfc6b,	// (0x0001a723) popup_note2_window_g_ParamLimits

0xfc6b,	// (0x0001a723) popup_note2_window_g

0xd1d3,	// (0x00017c8b) bg_popup_sub_pane_cp11_ParamLimits

0xd1e0,	// (0x00017c98) cell_ai3_links_pane_g1_ParamLimits

0xd1f7,	// (0x00017caf) cell_ai3_links_pane_t1

0x6957,	// (0x0001140f) set_text_pane_t1_copy1_ParamLimits

0x8445,	// (0x00012efd) cell_graphic_popup_pane_cp2_ParamLimits

0x8445,	// (0x00012efd) cell_graphic_popup_pane_cp2

0xf198,	// (0x00019c50) cell_graphic_popup_pane_g1_cp2

0x6ecf,	// (0x00011987) cell_graphic_popup_pane_g2_cp2

0xf1a0,	// (0x00019c58) cell_graphic_popup_pane_g3_cp2

0xf1a8,	// (0x00019c60) cell_graphic_popup_pane_t2_cp2

0x6ee0,	// (0x00011998) grid_highlight_pane_cp3_cp2

0x7c0c,	// (0x000126c4) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x76e5,	// (0x0001219d) main_tmo_pane_ParamLimits

0xd58e,	// (0x00018046) popup_tmo_big_image_note_window

0xe6a6,	// (0x0001915e) cell_ai5_widget_list_pane

0xe6ae,	// (0x00019166) cell_ai5_widget_lrg_icon_pane

0xed3c,	// (0x000197f4) tmo_note_info_pane_t1_ParamLimits

0xed51,	// (0x00019809) tmo_note_info_pane_t2_ParamLimits

0xed66,	// (0x0001981e) tmo_note_info_pane_t3_ParamLimits

0xed7b,	// (0x00019833) tmo_note_info_pane_t4_ParamLimits

0xed8d,	// (0x00019845) tmo_note_info_pane_t5_ParamLimits

0xfec0,	// (0x0001a978) tmo_note_info_pane_t_ParamLimits

0xeec3,	// (0x0001997b) settings_container_pane_ParamLimits

0xf117,	// (0x00019bcf) indicator_popup_pane_cp5

0xf117,	// (0x00019bcf) indicator_popup_pane_cp6

0xf147,	// (0x00019bff) list_set_graphic_pane_copy1_ParamLimits

0x680a,	// (0x000112c2) bg_popup_window_pane_cp23

0xf1b6,	// (0x00019c6e) popup_tmo_big_image_note_window_g1

0xf1c0,	// (0x00019c78) popup_tmo_big_image_note_window_t1

0xf1d0,	// (0x00019c88) popup_tmo_big_image_note_window_t2

0xf1e0,	// (0x00019c98) popup_tmo_big_image_note_window_t3

0x0002,

0xfed9,	// (0x0001a991) popup_tmo_big_image_note_window_t

0xf1f0,	// (0x00019ca8) cell_ai5_widget_lrg_icon_pane_g1

0xf1f8,	// (0x00019cb0) cell_ai5_widget_lrg_icon_pane_t1

0xf206,	// (0x00019cbe) cell_ai5_widget_list_row_pane_ParamLimits

0xf206,	// (0x00019cbe) cell_ai5_widget_list_row_pane

0xf21f,	// (0x00019cd7) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf21f,	// (0x00019cd7) cell_ai5_widget_list_row_pane_g1

0xf22c,	// (0x00019ce4) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf22c,	// (0x00019ce4) cell_ai5_widget_list_row_pane_t1

0xf244,	// (0x00019cfc) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf244,	// (0x00019cfc) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfee0,	// (0x0001a998) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee0,	// (0x0001a998) cell_ai5_widget_list_row_pane_t

0x4d7c,	// (0x0000f834) main_fep_vtchi_ss_pane

0xf256,	// (0x00019d0e) popup_fep_char_pre_window

0xf25e,	// (0x00019d16) popup_fep_ituss_window

0xf27f,	// (0x00019d37) popup_fep_vkbss_window

0xf29e,	// (0x00019d56) grid_vkbss_keypad_pane_ParamLimits

0xf29e,	// (0x00019d56) grid_vkbss_keypad_pane

0xf2ae,	// (0x00019d66) ituss_keypad_pane

0xf2c7,	// (0x00019d7f) aid_vkbss_key_offset_ParamLimits

0xf2c7,	// (0x00019d7f) aid_vkbss_key_offset

0xf2d3,	// (0x00019d8b) cell_vkbss_key_pane_ParamLimits

0xf2d3,	// (0x00019d8b) cell_vkbss_key_pane

0xf2e9,	// (0x00019da1) bg_cell_vkbss_key_g1_ParamLimits

0xf2e9,	// (0x00019da1) bg_cell_vkbss_key_g1

0xf2f5,	// (0x00019dad) cell_vkbss_key_3p_pane_ParamLimits

0xf2f5,	// (0x00019dad) cell_vkbss_key_3p_pane

0xf30f,	// (0x00019dc7) cell_vkbss_key_g1_ParamLimits

0xf30f,	// (0x00019dc7) cell_vkbss_key_g1

0xf329,	// (0x00019de1) cell_vkbss_key_t1_ParamLimits

0xf329,	// (0x00019de1) cell_vkbss_key_t1

0xf354,	// (0x00019e0c) cell_ituss_key_pane_ParamLimits

0xf354,	// (0x00019e0c) cell_ituss_key_pane

0xf364,	// (0x00019e1c) bg_cell_ituss_key_g1_ParamLimits

0xf364,	// (0x00019e1c) bg_cell_ituss_key_g1

0xf370,	// (0x00019e28) cell_ituss_key_pane_g1_ParamLimits

0xf370,	// (0x00019e28) cell_ituss_key_pane_g1

0xf37c,	// (0x00019e34) cell_ituss_key_pane_g2_ParamLimits

0xf37c,	// (0x00019e34) cell_ituss_key_pane_g2

0x0001,

0xfee5,	// (0x0001a99d) cell_ituss_key_pane_g_ParamLimits

0xfee5,	// (0x0001a99d) cell_ituss_key_pane_g

0xf395,	// (0x00019e4d) cell_ituss_key_t1_ParamLimits

0xf395,	// (0x00019e4d) cell_ituss_key_t1

0xf3c3,	// (0x00019e7b) cell_ituss_key_t2_ParamLimits

0xf3c3,	// (0x00019e7b) cell_ituss_key_t2

0xf3f4,	// (0x00019eac) cell_ituss_key_t3_ParamLimits

0xf3f4,	// (0x00019eac) cell_ituss_key_t3

0xf425,	// (0x00019edd) cell_ituss_key_t4_ParamLimits

0xf425,	// (0x00019edd) cell_ituss_key_t4

0x0003,

0xfeea,	// (0x0001a9a2) cell_ituss_key_t_ParamLimits

0xfeea,	// (0x0001a9a2) cell_ituss_key_t

0xf456,	// (0x00019f0e) cell_vkbss_key_3p_pane_g1

0xf45e,	// (0x00019f16) cell_vkbss_key_3p_pane_g2

0xf466,	// (0x00019f1e) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef3,	// (0x0001a9ab) cell_vkbss_key_3p_pane_g

0x680a,	// (0x000112c2) bg_popup_fep_char_preview_window_cp02

0xf46e,	// (0x00019f26) popup_fep_char_pre_window_t1

0xe67c,	// (0x00019134) main_ai5_sk_pane

0xee07,	// (0x000198bf) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xee13,	// (0x000198cb) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xee27,	// (0x000198df) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xee36,	// (0x000198ee) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfecb,	// (0x0001a983) cell_contacts_ai5_widget_pane_g_ParamLimits

0xee49,	// (0x00019901) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x76e5,	// (0x0001219d) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf47d,	// (0x00019f35) main_ai5_sk_pane_g1

0x9904,	// (0x000143bc) popup_query_code_window_g1

0xf274,	// (0x00019d2c) popup_fep_vkb_icf_pane

0xf288,	// (0x00019d40) popup_fep_vtchi_icf_pane

0x76e5,	// (0x0001219d) bg_icf_pane

0xf495,	// (0x00019f4d) list_vkb_icf_pane

0x76e5,	// (0x0001219d) bg_icf_pane_cp01

0xf4ad,	// (0x00019f65) vtchi_icf_list_pane

0xf4bd,	// (0x00019f75) list_vkb_icf_pane_t1_ParamLimits

0xf4bd,	// (0x00019f75) list_vkb_icf_pane_t1

0xf4d4,	// (0x00019f8c) vtchi_icf_list_pane_t1_ParamLimits

0xf4d4,	// (0x00019f8c) vtchi_icf_list_pane_t1

0xf25e,	// (0x00019d16) popup_fep_ituss_window_ParamLimits

0xf288,	// (0x00019d40) popup_fep_vtchi_icf_pane_ParamLimits

0xf2ae,	// (0x00019d66) ituss_keypad_pane_ParamLimits

0xf2be,	// (0x00019d76) ituss_sks_pane

0x76e5,	// (0x0001219d) bg_icf_pane_ParamLimits

0xf486,	// (0x00019f3e) icf_edit_indi_pane_ParamLimits

0xf486,	// (0x00019f3e) icf_edit_indi_pane

0xf495,	// (0x00019f4d) list_vkb_icf_pane_ParamLimits

0x76e5,	// (0x0001219d) bg_icf_pane_cp01_ParamLimits

0xf4a1,	// (0x00019f59) icf_edit_indi_pane_cp01_ParamLimits

0xf4a1,	// (0x00019f59) icf_edit_indi_pane_cp01

0xf4b5,	// (0x00019f6d) vtchi_query_pane

0xc004,	// (0x00016abc) icf_edit_indi_pane_g1_ParamLimits

0xc004,	// (0x00016abc) icf_edit_indi_pane_g1

0xf4f0,	// (0x00019fa8) icf_edit_indi_pane_g2_ParamLimits

0xf4f0,	// (0x00019fa8) icf_edit_indi_pane_g2

0x0001,

0xfefa,	// (0x0001a9b2) icf_edit_indi_pane_g_ParamLimits

0xfefa,	// (0x0001a9b2) icf_edit_indi_pane_g

0xf4fc,	// (0x00019fb4) icf_edit_indi_pane_t1

0xf50a,	// (0x00019fc2) bg_input_focus_pane_cp042

0x70b3,	// (0x00011b6b) vtchi_button_pane

0xf513,	// (0x00019fcb) vtchi_query_pane_t1

0xf521,	// (0x00019fd9) vtchi_query_pane_t2

0xf52f,	// (0x00019fe7) vtchi_query_pane_t3

0x0002,

0xfeff,	// (0x0001a9b7) vtchi_query_pane_t

0x680a,	// (0x000112c2) bg_button_pane_cp13

0xf53d,	// (0x00019ff5) vtchi_button_pane_g1

0xda95,	// (0x0001854d) ituss_sks_pane_g1

0xf545,	// (0x00019ffd) ituss_sks_pane_g2

0x0001,

0xff06,	// (0x0001a9be) ituss_sks_pane_g

0xf54e,	// (0x0001a006) ituss_sks_pane_t1

0xf55c,	// (0x0001a014) ituss_sks_pane_t2

0x0001,

0xff0b,	// (0x0001a9c3) ituss_sks_pane_t

0xb785,	// (0x0001623d) indicator_nsta_pane_cp_g1

0xb78e,	// (0x00016246) indicator_nsta_pane_cp_g2

0xb796,	// (0x0001624e) indicator_nsta_pane_cp_g3

0xb79e,	// (0x00016256) indicator_nsta_pane_cp_g4

0xb7a6,	// (0x0001625e) indicator_nsta_pane_cp_g5

0xb7ae,	// (0x00016266) indicator_nsta_pane_cp_g6

0x0005,

0xfaa9,	// (0x0001a561) indicator_nsta_pane_cp_g

0xe296,	// (0x00018d4e) cell_graphic2_pane_t2_ParamLimits

0xe296,	// (0x00018d4e) cell_graphic2_pane_t2

0x0001,

0xfdc2,	// (0x0001a87a) cell_graphic2_pane_t_ParamLimits

0xfdc2,	// (0x0001a87a) cell_graphic2_pane_t

0xe2c3,	// (0x00018d7b) cell_graphic2_control_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Normal

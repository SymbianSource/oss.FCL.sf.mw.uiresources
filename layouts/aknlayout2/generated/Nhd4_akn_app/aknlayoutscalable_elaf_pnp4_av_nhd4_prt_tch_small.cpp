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

#include "aknlayoutscalable_elaf_pnp4_av_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0000e796 };

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
0x239f,	// (0x00010b35) Screen

0x23b3,	// (0x00010b49) application_window_ParamLimits

0x23b3,	// (0x00010b49) application_window

0x23cd,	// (0x00010b63) screen_g1

0xd37e,	// (0x0001bb14) area_bottom_pane_ParamLimits

0xd37e,	// (0x0001bb14) area_bottom_pane

0xd43e,	// (0x0001bbd4) area_top_pane_ParamLimits

0xd43e,	// (0x0001bbd4) area_top_pane

0xd4d2,	// (0x0001bc68) main_pane_ParamLimits

0xd4d2,	// (0x0001bc68) main_pane

0x23d7,	// (0x00010b6d) misc_graphics

0x4a81,	// (0x00013217) battery_pane_ParamLimits

0x4a81,	// (0x00013217) battery_pane

0x5815,	// (0x00013fab) bg_status_flat_pane_g8

0x581d,	// (0x00013fb3) bg_status_flat_pane_g9

0x4b43,	// (0x000132d9) context_pane_ParamLimits

0x4b43,	// (0x000132d9) context_pane

0x4c59,	// (0x000133ef) navi_pane_ParamLimits

0x4c59,	// (0x000133ef) navi_pane

0x4cd6,	// (0x0001346c) signal_pane_ParamLimits

0x4cd6,	// (0x0001346c) signal_pane

0x0008,

0xf8a1,	// (0x0001e037) bg_status_flat_pane_g

0x4d43,	// (0x000134d9) status_pane_g1_ParamLimits

0x4d43,	// (0x000134d9) status_pane_g1

0x4d57,	// (0x000134ed) status_pane_g2_ParamLimits

0x4d57,	// (0x000134ed) status_pane_g2

0x4d63,	// (0x000134f9) status_pane_g3_ParamLimits

0x4d63,	// (0x000134f9) status_pane_g3

0x0004,

0xf7db,	// (0x0001df71) status_pane_g_ParamLimits

0xf7db,	// (0x0001df71) status_pane_g

0x4d95,	// (0x0001352b) title_pane_ParamLimits

0x4d95,	// (0x0001352b) title_pane

0x4dd2,	// (0x00013568) uni_indicator_pane_ParamLimits

0x4dd2,	// (0x00013568) uni_indicator_pane

0x43fa,	// (0x00012b90) bg_list_pane_ParamLimits

0x43fa,	// (0x00012b90) bg_list_pane

0xcb09,	// (0x0001b29f) find_pane

0x4422,	// (0x00012bb8) listscroll_app_pane_ParamLimits

0x4422,	// (0x00012bb8) listscroll_app_pane

0x442e,	// (0x00012bc4) listscroll_form_pane

0xcb11,	// (0x0001b2a7) listscroll_gen_pane_ParamLimits

0xcb11,	// (0x0001b2a7) listscroll_gen_pane

0x442e,	// (0x00012bc4) listscroll_set_pane

0x35f6,	// (0x00011d8c) main_idle_act_pane

0x40d6,	// (0x0001286c) main_idle_trad_pane

0x40d6,	// (0x0001286c) main_list_empty_pane

0x445c,	// (0x00012bf2) main_midp_pane

0x4468,	// (0x00012bfe) main_pane_g1_ParamLimits

0x4468,	// (0x00012bfe) main_pane_g1

0x4476,	// (0x00012c0c) popup_ai_message_window_ParamLimits

0x4476,	// (0x00012c0c) popup_ai_message_window

0x4520,	// (0x00012cb6) popup_fep_china_uni_window_ParamLimits

0x4520,	// (0x00012cb6) popup_fep_china_uni_window

0x457a,	// (0x00012d10) popup_fep_japan_candidate_window_ParamLimits

0x457a,	// (0x00012d10) popup_fep_japan_candidate_window

0x4598,	// (0x00012d2e) popup_fep_japan_predictive_window_ParamLimits

0x4598,	// (0x00012d2e) popup_fep_japan_predictive_window

0x45c8,	// (0x00012d5e) popup_find_window

0x45d5,	// (0x00012d6b) popup_grid_graphic_window_ParamLimits

0x45d5,	// (0x00012d6b) popup_grid_graphic_window

0x45fb,	// (0x00012d91) popup_large_graphic_colour_window

0x4621,	// (0x00012db7) popup_menu_window_ParamLimits

0x4621,	// (0x00012db7) popup_menu_window

0x47db,	// (0x00012f71) popup_note_image_window

0x47c7,	// (0x00012f5d) popup_note_wait_window_ParamLimits

0x47c7,	// (0x00012f5d) popup_note_wait_window

0x47c7,	// (0x00012f5d) popup_note_window_ParamLimits

0x47c7,	// (0x00012f5d) popup_note_window

0x4831,	// (0x00012fc7) popup_query_code_window_ParamLimits

0x4831,	// (0x00012fc7) popup_query_code_window

0x4845,	// (0x00012fdb) popup_query_data_code_window_ParamLimits

0x4845,	// (0x00012fdb) popup_query_data_code_window

0x485c,	// (0x00012ff2) popup_query_data_window_ParamLimits

0x485c,	// (0x00012ff2) popup_query_data_window

0x4874,	// (0x0001300a) popup_query_sat_info_window_ParamLimits

0x4874,	// (0x0001300a) popup_query_sat_info_window

0x48ad,	// (0x00013043) popup_snote_single_graphic_window_ParamLimits

0x48ad,	// (0x00013043) popup_snote_single_graphic_window

0x48ad,	// (0x00013043) popup_snote_single_text_window_ParamLimits

0x48ad,	// (0x00013043) popup_snote_single_text_window

0x48c2,	// (0x00013058) popup_sub_window_general

0x49f0,	// (0x00013186) popup_window_general_ParamLimits

0x49f0,	// (0x00013186) popup_window_general

0x4a05,	// (0x0001319b) power_save_pane

0xdc19,	// (0x0001c3af) control_pane_g1_ParamLimits

0xdc19,	// (0x0001c3af) control_pane_g1

0xdc42,	// (0x0001c3d8) control_pane_g2_ParamLimits

0xdc42,	// (0x0001c3d8) control_pane_g2

0x439b,	// (0x00012b31) control_pane_g3_ParamLimits

0x439b,	// (0x00012b31) control_pane_g3

0x0007,

0xf7c3,	// (0x0001df59) control_pane_g_ParamLimits

0xf7c3,	// (0x0001df59) control_pane_g

0xdc87,	// (0x0001c41d) control_pane_t1_ParamLimits

0xdc87,	// (0x0001c41d) control_pane_t1

0xdcd9,	// (0x0001c46f) control_pane_t2_ParamLimits

0xdcd9,	// (0x0001c46f) control_pane_t2

0x0002,

0xf7d4,	// (0x0001df6a) control_pane_t_ParamLimits

0xf7d4,	// (0x0001df6a) control_pane_t

0x42bc,	// (0x00012a52) navi_navi_volume_pane_cp1

0x42c5,	// (0x00012a5b) status_small_icon_pane

0x42cd,	// (0x00012a63) status_small_pane_g1_ParamLimits

0x42cd,	// (0x00012a63) status_small_pane_g1

0x4301,	// (0x00012a97) status_small_pane_g2_ParamLimits

0x4301,	// (0x00012a97) status_small_pane_g2

0x430d,	// (0x00012aa3) status_small_pane_g3_ParamLimits

0x430d,	// (0x00012aa3) status_small_pane_g3

0x4319,	// (0x00012aaf) status_small_pane_g4_ParamLimits

0x4319,	// (0x00012aaf) status_small_pane_g4

0x4325,	// (0x00012abb) status_small_pane_g5_ParamLimits

0x4325,	// (0x00012abb) status_small_pane_g5

0x4334,	// (0x00012aca) status_small_pane_g6_ParamLimits

0x4334,	// (0x00012aca) status_small_pane_g6

0x0007,

0xf7b2,	// (0x0001df48) status_small_pane_g_ParamLimits

0xf7b2,	// (0x0001df48) status_small_pane_g

0x4364,	// (0x00012afa) status_small_pane_t1

0x4387,	// (0x00012b1d) status_small_wait_pane_ParamLimits

0x4387,	// (0x00012b1d) status_small_wait_pane

0x3ae5,	// (0x0001227b) aid_levels_signal_ParamLimits

0x3ae5,	// (0x0001227b) aid_levels_signal

0x3af7,	// (0x0001228d) signal_pane_g1_ParamLimits

0x3af7,	// (0x0001228d) signal_pane_g1

0x3b0c,	// (0x000122a2) signal_pane_g2_ParamLimits

0x3b0c,	// (0x000122a2) signal_pane_g2

0x0001,

0xf747,	// (0x0001dedd) signal_pane_g_ParamLimits

0xf747,	// (0x0001dedd) signal_pane_g

0x3b21,	// (0x000122b7) context_pane_g1

0x23e1,	// (0x00010b77) title_pane_g1

0x2417,	// (0x00010bad) title_pane_t1

0x247f,	// (0x00010c15) title_pane_t2

0x24a5,	// (0x00010c3b) title_pane_t3

0x0002,

0xf59b,	// (0x0001dd31) title_pane_t

0x4dea,	// (0x00013580) aid_levels_battery_ParamLimits

0x4dea,	// (0x00013580) aid_levels_battery

0x4dfe,	// (0x00013594) battery_pane_g1_ParamLimits

0x4dfe,	// (0x00013594) battery_pane_g1

0x4e14,	// (0x000135aa) battery_pane_g2_ParamLimits

0x4e14,	// (0x000135aa) battery_pane_g2

0x0001,

0xf7e6,	// (0x0001df7c) battery_pane_g_ParamLimits

0xf7e6,	// (0x0001df7c) battery_pane_g

0x6145,	// (0x000148db) uni_indicator_pane_g1

0x615a,	// (0x000148f0) uni_indicator_pane_g2

0x6170,	// (0x00014906) uni_indicator_pane_g3

0x0005,

0xf949,	// (0x0001e0df) uni_indicator_pane_g

0x3f46,	// (0x000126dc) navi_icon_pane_ParamLimits

0x3f46,	// (0x000126dc) navi_icon_pane

0x3e8d,	// (0x00012623) navi_midp_pane

0x3f62,	// (0x000126f8) navi_navi_pane

0x3f6c,	// (0x00012702) navi_text_pane_ParamLimits

0x3f6c,	// (0x00012702) navi_text_pane

0x23cd,	// (0x00010b63) status_small_wait_pane_g1

0x28e2,	// (0x00011078) status_small_wait_pane_g2

0x0001,

0xf944,	// (0x0001e0da) status_small_wait_pane_g

0x5e68,	// (0x000145fe) navi_navi_icon_text_pane

0x5e82,	// (0x00014618) navi_navi_pane_g1_ParamLimits

0x5e82,	// (0x00014618) navi_navi_pane_g1

0x5e70,	// (0x00014606) navi_navi_pane_g2_ParamLimits

0x5e70,	// (0x00014606) navi_navi_pane_g2

0x0001,

0xf912,	// (0x0001e0a8) navi_navi_pane_g_ParamLimits

0xf912,	// (0x0001e0a8) navi_navi_pane_g

0x5e94,	// (0x0001462a) navi_navi_tabs_pane

0x5e9d,	// (0x00014633) navi_navi_text_pane

0x5e68,	// (0x000145fe) navi_navi_volume_pane

0x5e41,	// (0x000145d7) navi_text_pane_t1

0x5e32,	// (0x000145c8) navi_icon_pane_g1

0x5d85,	// (0x0001451b) navi_navi_text_pane_t1

0xdff3,	// (0x0001c789) navi_navi_volume_pane_g1

0xdffb,	// (0x0001c791) volume_small_pane

0x5ceb,	// (0x00014481) navi_navi_icon_text_pane_g1

0x5cf3,	// (0x00014489) navi_navi_icon_text_pane_t1

0x3f62,	// (0x000126f8) navi_tabs_2_long_pane

0x3f62,	// (0x000126f8) navi_tabs_2_pane

0x3f62,	// (0x000126f8) navi_tabs_3_long_pane

0x3f62,	// (0x000126f8) navi_tabs_3_pane

0x3f62,	// (0x000126f8) navi_tabs_4_pane

0xdfd3,	// (0x0001c769) tabs_2_active_pane_ParamLimits

0xdfd3,	// (0x0001c769) tabs_2_active_pane

0xdfe3,	// (0x0001c779) tabs_2_passive_pane_ParamLimits

0xdfe3,	// (0x0001c779) tabs_2_passive_pane

0xdfa1,	// (0x0001c737) tabs_3_active_pane_ParamLimits

0xdfa1,	// (0x0001c737) tabs_3_active_pane

0xdfb1,	// (0x0001c747) tabs_3_passive_pane_ParamLimits

0xdfb1,	// (0x0001c747) tabs_3_passive_pane

0xdfc2,	// (0x0001c758) tabs_3_passive_pane_cp_ParamLimits

0xdfc2,	// (0x0001c758) tabs_3_passive_pane_cp

0xdf5d,	// (0x0001c6f3) tabs_4_active_pane_ParamLimits

0xdf5d,	// (0x0001c6f3) tabs_4_active_pane

0xdf6e,	// (0x0001c704) tabs_4_passive_pane_ParamLimits

0xdf6e,	// (0x0001c704) tabs_4_passive_pane

0xdf7f,	// (0x0001c715) tabs_4_passive_pane_cp_ParamLimits

0xdf7f,	// (0x0001c715) tabs_4_passive_pane_cp

0xdf90,	// (0x0001c726) tabs_4_passive_pane_cp2_ParamLimits

0xdf90,	// (0x0001c726) tabs_4_passive_pane_cp2

0xdf39,	// (0x0001c6cf) tabs_2_long_active_pane_ParamLimits

0xdf39,	// (0x0001c6cf) tabs_2_long_active_pane

0xdf4b,	// (0x0001c6e1) tabs_2_long_passive_pane_ParamLimits

0xdf4b,	// (0x0001c6e1) tabs_2_long_passive_pane

0xdef4,	// (0x0001c68a) tabs_3_long_active_pane_ParamLimits

0xdef4,	// (0x0001c68a) tabs_3_long_active_pane

0xdf0d,	// (0x0001c6a3) tabs_3_long_passive_pane_ParamLimits

0xdf0d,	// (0x0001c6a3) tabs_3_long_passive_pane

0xdf20,	// (0x0001c6b6) tabs_3_long_passive_pane_cp_ParamLimits

0xdf20,	// (0x0001c6b6) tabs_3_long_passive_pane_cp

0xde9a,	// (0x0001c630) volume_small_pane_g1

0xdea3,	// (0x0001c639) volume_small_pane_g2

0xdeac,	// (0x0001c642) volume_small_pane_g3

0xdeb5,	// (0x0001c64b) volume_small_pane_g4

0xdebe,	// (0x0001c654) volume_small_pane_g5

0xdec7,	// (0x0001c65d) volume_small_pane_g6

0xded0,	// (0x0001c666) volume_small_pane_g7

0xded9,	// (0x0001c66f) volume_small_pane_g8

0xdee2,	// (0x0001c678) volume_small_pane_g9

0xdeeb,	// (0x0001c681) volume_small_pane_g10

0x0009,

0xf8de,	// (0x0001e074) volume_small_pane_g

0x24b7,	// (0x00010c4d) bg_active_tab_pane_cp2_ParamLimits

0x24b7,	// (0x00010c4d) bg_active_tab_pane_cp2

0x24c5,	// (0x00010c5b) tabs_3_active_pane_g1

0x24cd,	// (0x00010c63) tabs_3_active_pane_t1

0x24b7,	// (0x00010c4d) bg_passive_tab_pane_cp2_ParamLimits

0x24b7,	// (0x00010c4d) bg_passive_tab_pane_cp2

0x24c5,	// (0x00010c5b) tabs_3_passive_pane_g1

0x24cd,	// (0x00010c63) tabs_3_passive_pane_t1

0x24b7,	// (0x00010c4d) bg_active_tab_pane_cp3_ParamLimits

0x24b7,	// (0x00010c4d) bg_active_tab_pane_cp3

0x24df,	// (0x00010c75) tabs_4_active_pane_g1

0x24e7,	// (0x00010c7d) tabs_4_active_pane_t1

0x24b7,	// (0x00010c4d) bg_passive_tab_pane_cp3_ParamLimits

0x24b7,	// (0x00010c4d) bg_passive_tab_pane_cp3

0x24df,	// (0x00010c75) tabs_4_1_passive_pane_g1

0x24e7,	// (0x00010c7d) tabs_4_1_passive_pane_t1

0x445c,	// (0x00012bf2) list_highlight_pane_cp2

0x63f1,	// (0x00014b87) list_set_pane_ParamLimits

0x63f1,	// (0x00014b87) list_set_pane

0x6493,	// (0x00014c29) main_pane_set_t1_ParamLimits

0x6493,	// (0x00014c29) main_pane_set_t1

0x64b3,	// (0x00014c49) main_pane_set_t2_ParamLimits

0x64b3,	// (0x00014c49) main_pane_set_t2

0x64c7,	// (0x00014c5d) main_pane_set_t3_ParamLimits

0x64c7,	// (0x00014c5d) main_pane_set_t3

0x64d9,	// (0x00014c6f) main_pane_set_t4_ParamLimits

0x64d9,	// (0x00014c6f) main_pane_set_t4

0x0003,

0xf9ae,	// (0x0001e144) main_pane_set_t_ParamLimits

0xf9ae,	// (0x0001e144) main_pane_set_t

0x64eb,	// (0x00014c81) setting_code_pane

0x64f5,	// (0x00014c8b) setting_slider_graphic_pane

0x64f5,	// (0x00014c8b) setting_slider_pane

0x64f5,	// (0x00014c8b) setting_text_pane

0x64f5,	// (0x00014c8b) setting_volume_pane

0xd703,	// (0x0001be99) volume_set_pane

0x24b7,	// (0x00010c4d) bg_set_opt_pane_cp

0xd70b,	// (0x0001bea1) setting_slider_pane_t1

0xd724,	// (0x0001beba) setting_slider_pane_t2

0xd73d,	// (0x0001bed3) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x0001dd38) setting_slider_pane_t

0xd754,	// (0x0001beea) slider_set_pane

0x23d7,	// (0x00010b6d) bg_set_opt_pane_cp2

0x24f9,	// (0x00010c8f) setting_slider_graphic_pane_g1

0xd76a,	// (0x0001bf00) setting_slider_graphic_pane_t1

0xd779,	// (0x0001bf0f) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0001dd3f) setting_slider_graphic_pane_t

0xd788,	// (0x0001bf1e) slider_set_pane_cp

0x23d7,	// (0x00010b6d) input_focus_pane_cp1

0x63b0,	// (0x00014b46) list_set_text_pane

0x23cd,	// (0x00010b63) setting_text_pane_g1

0x23d7,	// (0x00010b6d) input_focus_pane_cp2

0x23cd,	// (0x00010b63) setting_code_pane_g1

0x2502,	// (0x00010c98) setting_code_pane_t1

0xc3bc,	// (0x0001ab52) set_text_pane_t1_ParamLimits

0xc3bc,	// (0x0001ab52) set_text_pane_t1

0x33cc,	// (0x00011b62) set_opt_bg_pane_g1

0x33d4,	// (0x00011b6a) set_opt_bg_pane_g2

0x6390,	// (0x00014b26) set_opt_bg_pane_g3

0x33e4,	// (0x00011b7a) set_opt_bg_pane_g4

0x33ec,	// (0x00011b82) set_opt_bg_pane_g5

0x33f4,	// (0x00011b8a) set_opt_bg_pane_g6

0x6398,	// (0x00014b2e) set_opt_bg_pane_g7

0x63a0,	// (0x00014b36) set_opt_bg_pane_g8

0x63a8,	// (0x00014b3e) set_opt_bg_pane_g9

0x0008,

0xf99b,	// (0x0001e131) set_opt_bg_pane_g

0x6383,	// (0x00014b19) slider_set_pane_g1

0xe068,	// (0x0001c7fe) slider_set_pane_g2

0x0006,

0xf98c,	// (0x0001e122) slider_set_pane_g

0xe004,	// (0x0001c79a) volume_set_pane_g1

0xe00c,	// (0x0001c7a2) volume_set_pane_g2

0xe014,	// (0x0001c7aa) volume_set_pane_g3

0xe01c,	// (0x0001c7b2) volume_set_pane_g4

0xe024,	// (0x0001c7ba) volume_set_pane_g5

0xe02c,	// (0x0001c7c2) volume_set_pane_g6

0xe034,	// (0x0001c7ca) volume_set_pane_g7

0xe03c,	// (0x0001c7d2) volume_set_pane_g8

0xe044,	// (0x0001c7da) volume_set_pane_g9

0xe04c,	// (0x0001c7e2) volume_set_pane_g10

0x0009,

0xf964,	// (0x0001e0fa) volume_set_pane_g

0x252a,	// (0x00010cc0) indicator_pane_ParamLimits

0x252a,	// (0x00010cc0) indicator_pane

0x2536,	// (0x00010ccc) main_idle_pane_g2_ParamLimits

0x2536,	// (0x00010ccc) main_idle_pane_g2

0x255e,	// (0x00010cf4) main_pane_idle_g1_ParamLimits

0x255e,	// (0x00010cf4) main_pane_idle_g1

0x256b,	// (0x00010d01) popup_clock_digital_analogue_window_ParamLimits

0x256b,	// (0x00010d01) popup_clock_digital_analogue_window

0x2582,	// (0x00010d18) soft_indicator_pane_ParamLimits

0x2582,	// (0x00010d18) soft_indicator_pane

0x258e,	// (0x00010d24) wallpaper_pane_ParamLimits

0x258e,	// (0x00010d24) wallpaper_pane

0x23cd,	// (0x00010b63) wallpaper_pane_g1

0x25a2,	// (0x00010d38) indicator_pane_g1_ParamLimits

0x25a2,	// (0x00010d38) indicator_pane_g1

0x686f,	// (0x00015005) navi_navi_icon_text_pane_srt_g1

0x25bd,	// (0x00010d53) soft_indicator_pane_t1

0x25d7,	// (0x00010d6d) aid_ps_area_pane

0x25e8,	// (0x00010d7e) aid_ps_clock_pane

0x25f6,	// (0x00010d8c) aid_ps_indicator_pane

0x2602,	// (0x00010d98) indicator_ps_pane_ParamLimits

0x2602,	// (0x00010d98) indicator_ps_pane

0x2611,	// (0x00010da7) power_save_pane_g1_ParamLimits

0x2611,	// (0x00010da7) power_save_pane_g1

0x261d,	// (0x00010db3) power_save_pane_g2_ParamLimits

0x261d,	// (0x00010db3) power_save_pane_g2

0xd332,	// (0x0001bac8) aid_navinavi_width_pane

0x25d7,	// (0x00010d6d) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0001dd44) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0001dd44) power_save_pane_g

0x262b,	// (0x00010dc1) power_save_pane_t1_ParamLimits

0x262b,	// (0x00010dc1) power_save_pane_t1

0x25e8,	// (0x00010d7e) aid_ps_clock_pane_ParamLimits

0x25f6,	// (0x00010d8c) aid_ps_indicator_pane_ParamLimits

0x263d,	// (0x00010dd3) power_save_pane_t4_ParamLimits

0x263d,	// (0x00010dd3) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0001dd49) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0001dd49) power_save_pane_t

0x2667,	// (0x00010dfd) power_save_t3_ParamLimits

0x2667,	// (0x00010dfd) power_save_t3

0x2652,	// (0x00010de8) power_save_t2_ParamLimits

0x2652,	// (0x00010de8) power_save_t2

0x267c,	// (0x00010e12) indicator_ps_pane_g1

0x2685,	// (0x00010e1b) ai_gene_pane_ParamLimits

0x2685,	// (0x00010e1b) ai_gene_pane

0x2691,	// (0x00010e27) ai_links_pane_ParamLimits

0x2691,	// (0x00010e27) ai_links_pane

0x269d,	// (0x00010e33) indicator_pane_cp1_ParamLimits

0x269d,	// (0x00010e33) indicator_pane_cp1

0x26a9,	// (0x00010e3f) main_pane_idle_g1_cp_ParamLimits

0x26a9,	// (0x00010e3f) main_pane_idle_g1_cp

0x26b5,	// (0x00010e4b) popup_ai_links_title_window

0x26be,	// (0x00010e54) soft_indicator_pane_cp1_ParamLimits

0x26be,	// (0x00010e54) soft_indicator_pane_cp1

0x6133,	// (0x000148c9) ai_links_pane_g1

0x613c,	// (0x000148d2) grid_ai_links_pane

0x6116,	// (0x000148ac) ai_gene_pane_1

0x6121,	// (0x000148b7) ai_gene_pane_2

0x612a,	// (0x000148c0) list_highlight_pane_cp4

0x60fa,	// (0x00014890) cell_ai_link_pane_ParamLimits

0x60fa,	// (0x00014890) cell_ai_link_pane

0x60f2,	// (0x00014888) cell_ai_link_pane_g1

0x28e2,	// (0x00011078) cell_ai_link_pane_g2

0x0001,

0xf93f,	// (0x0001e0d5) cell_ai_link_pane_g

0x23d7,	// (0x00010b6d) grid_highlight_cp2

0x23d7,	// (0x00010b6d) bg_popup_sub_pane_cp1

0x26d8,	// (0x00010e6e) popup_ai_links_title_window_t1

0x6040,	// (0x000147d6) ai_gene_pane_1_g1_ParamLimits

0x6040,	// (0x000147d6) ai_gene_pane_1_g1

0x604c,	// (0x000147e2) ai_gene_pane_1_g2_ParamLimits

0x604c,	// (0x000147e2) ai_gene_pane_1_g2

0x0001,

0xf935,	// (0x0001e0cb) ai_gene_pane_1_g_ParamLimits

0xf935,	// (0x0001e0cb) ai_gene_pane_1_g

0x6059,	// (0x000147ef) ai_gene_pane_1_t1_ParamLimits

0x6059,	// (0x000147ef) ai_gene_pane_1_t1

0x608d,	// (0x00014823) grid_ai_soft_ind_pane

0x602b,	// (0x000147c1) ai_gene_pane_2_t1_ParamLimits

0x602b,	// (0x000147c1) ai_gene_pane_2_t1

0x26e7,	// (0x00010e7d) main_pane_empty_t1_ParamLimits

0x26e7,	// (0x00010e7d) main_pane_empty_t1

0x26ff,	// (0x00010e95) main_pane_empty_t2_ParamLimits

0x26ff,	// (0x00010e95) main_pane_empty_t2

0x2714,	// (0x00010eaa) main_pane_empty_t3_ParamLimits

0x2714,	// (0x00010eaa) main_pane_empty_t3

0x2726,	// (0x00010ebc) main_pane_empty_t4_ParamLimits

0x2726,	// (0x00010ebc) main_pane_empty_t4

0x2738,	// (0x00010ece) main_pane_empty_t5_ParamLimits

0x2738,	// (0x00010ece) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0001dd4e) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0001dd4e) main_pane_empty_t

0x34c5,	// (0x00011c5b) bg_popup_window_pane_ParamLimits

0x34c5,	// (0x00011c5b) bg_popup_window_pane

0x5d93,	// (0x00014529) find_popup_pane_cp2_ParamLimits

0x5d93,	// (0x00014529) find_popup_pane_cp2

0x5d9f,	// (0x00014535) heading_pane_ParamLimits

0x5d9f,	// (0x00014535) heading_pane

0x23d7,	// (0x00010b6d) bg_popup_sub_pane

0x5d0d,	// (0x000144a3) bg_popup_window_pane_g1_ParamLimits

0x5d0d,	// (0x000144a3) bg_popup_window_pane_g1

0x5d19,	// (0x000144af) bg_popup_window_pane_g2_ParamLimits

0x5d19,	// (0x000144af) bg_popup_window_pane_g2

0x5d25,	// (0x000144bb) bg_popup_window_pane_g3_ParamLimits

0x5d25,	// (0x000144bb) bg_popup_window_pane_g3

0x5d31,	// (0x000144c7) bg_popup_window_pane_g4_ParamLimits

0x5d31,	// (0x000144c7) bg_popup_window_pane_g4

0x5d3d,	// (0x000144d3) bg_popup_window_pane_g5_ParamLimits

0x5d3d,	// (0x000144d3) bg_popup_window_pane_g5

0x5d49,	// (0x000144df) bg_popup_window_pane_g6_ParamLimits

0x5d49,	// (0x000144df) bg_popup_window_pane_g6

0x5d55,	// (0x000144eb) bg_popup_window_pane_g7_ParamLimits

0x5d55,	// (0x000144eb) bg_popup_window_pane_g7

0x5d61,	// (0x000144f7) bg_popup_window_pane_g8_ParamLimits

0x5d61,	// (0x000144f7) bg_popup_window_pane_g8

0x5d6d,	// (0x00014503) bg_popup_window_pane_g9_ParamLimits

0x5d6d,	// (0x00014503) bg_popup_window_pane_g9

0x5d79,	// (0x0001450f) bg_popup_window_pane_g10_ParamLimits

0x5d79,	// (0x0001450f) bg_popup_window_pane_g10

0x0009,

0xf8fd,	// (0x0001e093) bg_popup_window_pane_g_ParamLimits

0xf8fd,	// (0x0001e093) bg_popup_window_pane_g

0x5ca2,	// (0x00014438) bg_popup_heading_pane_ParamLimits

0x5ca2,	// (0x00014438) bg_popup_heading_pane

0xe0f0,	// (0x0001c886) tabs_4_passive_pane_cp_srt_ParamLimits

0xe0f0,	// (0x0001c886) tabs_4_passive_pane_cp_srt

0xe102,	// (0x0001c898) tabs_4_passive_pane_srt_ParamLimits

0x5cb6,	// (0x0001444c) heading_pane_g2

0xe102,	// (0x0001c898) tabs_4_passive_pane_srt

0x445c,	// (0x00012bf2) bg_passive_tab_pane_cp3_srt_ParamLimits

0x445c,	// (0x00012bf2) bg_passive_tab_pane_cp3_srt

0x5cbe,	// (0x00014454) heading_pane_t1_ParamLimits

0x5cbe,	// (0x00014454) heading_pane_t1

0x5cd5,	// (0x0001446b) heading_pane_t2_ParamLimits

0x5cd5,	// (0x0001446b) heading_pane_t2

0x0001,

0xf8f8,	// (0x0001e08e) heading_pane_t_ParamLimits

0xf8f8,	// (0x0001e08e) heading_pane_t

0x57dd,	// (0x00013f73) bg_popup_heading_pane_g1

0x588c,	// (0x00014022) bg_popup_heading_pane_g2

0x5896,	// (0x0001402c) bg_popup_heading_pane_g3

0x58a0,	// (0x00014036) bg_popup_heading_pane_g4

0x58aa,	// (0x00014040) bg_popup_heading_pane_g5

0x58b4,	// (0x0001404a) bg_popup_heading_pane_g6

0x58bc,	// (0x00014052) bg_popup_heading_pane_g7

0x58c4,	// (0x0001405a) bg_popup_heading_pane_g8

0x58ce,	// (0x00014064) bg_popup_heading_pane_g9

0x0008,

0xf8b4,	// (0x0001e04a) bg_popup_heading_pane_g

0x4f0e,	// (0x000136a4) bg_popup_sub_pane_g1

0x4f1e,	// (0x000136b4) bg_popup_sub_pane_g2

0x4f16,	// (0x000136ac) bg_popup_sub_pane_g3

0x4f2e,	// (0x000136c4) bg_popup_sub_pane_g4

0x4f26,	// (0x000136bc) bg_popup_sub_pane_g5

0x4f36,	// (0x000136cc) bg_popup_sub_pane_g6

0x4f3e,	// (0x000136d4) bg_popup_sub_pane_g7

0x4f4e,	// (0x000136e4) bg_popup_sub_pane_g8

0x4f46,	// (0x000136dc) bg_popup_sub_pane_g9

0x0008,

0xf88e,	// (0x0001e024) bg_popup_sub_pane_g

0x274c,	// (0x00010ee2) bg_popup_window_pane_cp5_ParamLimits

0x274c,	// (0x00010ee2) bg_popup_window_pane_cp5

0x2768,	// (0x00010efe) popup_note_window_g1_ParamLimits

0x2768,	// (0x00010efe) popup_note_window_g1

0x2774,	// (0x00010f0a) popup_note_window_t1_ParamLimits

0x2774,	// (0x00010f0a) popup_note_window_t1

0x2786,	// (0x00010f1c) popup_note_window_t2_ParamLimits

0x2786,	// (0x00010f1c) popup_note_window_t2

0x2798,	// (0x00010f2e) popup_note_window_t3_ParamLimits

0x2798,	// (0x00010f2e) popup_note_window_t3

0x27aa,	// (0x00010f40) popup_note_window_t4_ParamLimits

0x27aa,	// (0x00010f40) popup_note_window_t4

0x27d2,	// (0x00010f68) popup_note_window_t5_ParamLimits

0x27d2,	// (0x00010f68) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0001dd59) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0001dd59) popup_note_window_t

0x27f6,	// (0x00010f8c) bg_popup_window_pane_cp6_ParamLimits

0x27f6,	// (0x00010f8c) bg_popup_window_pane_cp6

0x5751,	// (0x00013ee7) popup_note_image_window_g1_ParamLimits

0x5751,	// (0x00013ee7) popup_note_image_window_g1

0x575d,	// (0x00013ef3) popup_note_image_window_g2_ParamLimits

0x575d,	// (0x00013ef3) popup_note_image_window_g2

0x0001,

0xf882,	// (0x0001e018) popup_note_image_window_g_ParamLimits

0xf882,	// (0x0001e018) popup_note_image_window_g

0x5776,	// (0x00013f0c) popup_note_image_window_t1_ParamLimits

0x5776,	// (0x00013f0c) popup_note_image_window_t1

0x578f,	// (0x00013f25) popup_note_image_window_t2_ParamLimits

0x578f,	// (0x00013f25) popup_note_image_window_t2

0x57a8,	// (0x00013f3e) popup_note_image_window_t3_ParamLimits

0x57a8,	// (0x00013f3e) popup_note_image_window_t3

0x0002,

0xf887,	// (0x0001e01d) popup_note_image_window_t_ParamLimits

0xf887,	// (0x0001e01d) popup_note_image_window_t

0x5612,	// (0x00013da8) bg_popup_window_pane_cp7_ParamLimits

0x5612,	// (0x00013da8) bg_popup_window_pane_cp7

0x5642,	// (0x00013dd8) popup_note_wait_window_g1_ParamLimits

0x5642,	// (0x00013dd8) popup_note_wait_window_g1

0x564e,	// (0x00013de4) popup_note_wait_window_g2_ParamLimits

0x564e,	// (0x00013de4) popup_note_wait_window_g2

0x0002,

0xf870,	// (0x0001e006) popup_note_wait_window_g_ParamLimits

0xf870,	// (0x0001e006) popup_note_wait_window_g

0x5666,	// (0x00013dfc) popup_note_wait_window_t1_ParamLimits

0x5666,	// (0x00013dfc) popup_note_wait_window_t1

0x568d,	// (0x00013e23) popup_note_wait_window_t2_ParamLimits

0x568d,	// (0x00013e23) popup_note_wait_window_t2

0x56aa,	// (0x00013e40) popup_note_wait_window_t3_ParamLimits

0x56aa,	// (0x00013e40) popup_note_wait_window_t3

0x56bd,	// (0x00013e53) popup_note_wait_window_t4_ParamLimits

0x56bd,	// (0x00013e53) popup_note_wait_window_t4

0x0004,

0xf877,	// (0x0001e00d) popup_note_wait_window_t_ParamLimits

0xf877,	// (0x0001e00d) popup_note_wait_window_t

0x56e2,	// (0x00013e78) wait_bar_pane_ParamLimits

0x56e2,	// (0x00013e78) wait_bar_pane

0x23d7,	// (0x00010b6d) wait_anim_pane

0x23d7,	// (0x00010b6d) wait_border_pane

0x23cd,	// (0x00010b63) wait_anim_pane_g1

0x23cd,	// (0x00010b63) wait_anim_pane_g2

0x0001,

0xf742,	// (0x0001ded8) wait_anim_pane_g

0x55b6,	// (0x00013d4c) wait_border_pane_g1

0x55c1,	// (0x00013d57) wait_border_pane_g2

0x55ca,	// (0x00013d60) wait_border_pane_g3

0x0002,

0xf869,	// (0x0001dfff) wait_border_pane_g

0x5518,	// (0x00013cae) bg_popup_window_pane_cp16_ParamLimits

0x5518,	// (0x00013cae) bg_popup_window_pane_cp16

0x5526,	// (0x00013cbc) indicator_popup_pane_cp4_ParamLimits

0x5526,	// (0x00013cbc) indicator_popup_pane_cp4

0x553a,	// (0x00013cd0) popup_query_data_window_t1_ParamLimits

0x553a,	// (0x00013cd0) popup_query_data_window_t1

0x554c,	// (0x00013ce2) popup_query_data_window_t2_ParamLimits

0x554c,	// (0x00013ce2) popup_query_data_window_t2

0x5565,	// (0x00013cfb) popup_query_data_window_t3_ParamLimits

0x5565,	// (0x00013cfb) popup_query_data_window_t3

0x0002,

0xf862,	// (0x0001dff8) popup_query_data_window_t_ParamLimits

0xf862,	// (0x0001dff8) popup_query_data_window_t

0x557f,	// (0x00013d15) query_popup_data_pane_ParamLimits

0x557f,	// (0x00013d15) query_popup_data_pane

0x5593,	// (0x00013d29) query_popup_data_pane_cp1_ParamLimits

0x5593,	// (0x00013d29) query_popup_data_pane_cp1

0x27f6,	// (0x00010f8c) bg_popup_window_pane_cp10_ParamLimits

0x27f6,	// (0x00010f8c) bg_popup_window_pane_cp10

0x547b,	// (0x00013c11) indicator_popup_pane_ParamLimits

0x547b,	// (0x00013c11) indicator_popup_pane

0x284d,	// (0x00010fe3) popup_query_code_window_t1_ParamLimits

0x284d,	// (0x00010fe3) popup_query_code_window_t1

0x5493,	// (0x00013c29) popup_query_code_window_t2_ParamLimits

0x5493,	// (0x00013c29) popup_query_code_window_t2

0x54d1,	// (0x00013c67) popup_query_code_window_t3_ParamLimits

0x54d1,	// (0x00013c67) popup_query_code_window_t3

0x0002,

0xf85b,	// (0x0001dff1) popup_query_code_window_t_ParamLimits

0xf85b,	// (0x0001dff1) popup_query_code_window_t

0x5500,	// (0x00013c96) query_popup_pane_ParamLimits

0x5500,	// (0x00013c96) query_popup_pane

0x27f6,	// (0x00010f8c) bg_popup_window_pane_cp15_ParamLimits

0x27f6,	// (0x00010f8c) bg_popup_window_pane_cp15

0x2814,	// (0x00010faa) indicator_popup_pane_cp1_ParamLimits

0x2814,	// (0x00010faa) indicator_popup_pane_cp1

0x2827,	// (0x00010fbd) indicator_popup_pane_cp2_ParamLimits

0x2827,	// (0x00010fbd) indicator_popup_pane_cp2

0x283a,	// (0x00010fd0) popup_query_data_code_window_g1_ParamLimits

0x283a,	// (0x00010fd0) popup_query_data_code_window_g1

0x284d,	// (0x00010fe3) popup_query_data_code_window_t1_ParamLimits

0x284d,	// (0x00010fe3) popup_query_data_code_window_t1

0x285f,	// (0x00010ff5) popup_query_data_code_window_t2_ParamLimits

0x285f,	// (0x00010ff5) popup_query_data_code_window_t2

0x2871,	// (0x00011007) popup_query_data_code_window_t3_ParamLimits

0x2871,	// (0x00011007) popup_query_data_code_window_t3

0x2887,	// (0x0001101d) popup_query_data_code_window_t4_ParamLimits

0x2887,	// (0x0001101d) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0001dd64) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0001dd64) popup_query_data_code_window_t

0x3f02,	// (0x00012698) list_single_midp_graphic_pane_g3

0x289f,	// (0x00011035) query_popup_data_pane_cp2_ParamLimits

0x28b2,	// (0x00011048) query_popup_pane_cp2_ParamLimits

0x28b2,	// (0x00011048) query_popup_pane_cp2

0x23d7,	// (0x00010b6d) bg_popup_window_pane_cp11

0x544f,	// (0x00013be5) heading_pane_cp5

0x299a,	// (0x00011130) listscroll_popup_info_pane

0x23d7,	// (0x00010b6d) input_focus_pane_cp3

0x28c5,	// (0x0001105b) query_popup_pane_t1

0x28d3,	// (0x00011069) list_popup_info_pane_ParamLimits

0x28d3,	// (0x00011069) list_popup_info_pane

0x28e2,	// (0x00011078) listscroll_popup_info_pane_g1

0x28ea,	// (0x00011080) scroll_pane_cp7

0x28f4,	// (0x0001108a) popup_info_list_pane_t1_ParamLimits

0x28f4,	// (0x0001108a) popup_info_list_pane_t1

0x290e,	// (0x000110a4) popup_info_list_pane_t2_ParamLimits

0x290e,	// (0x000110a4) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0001dd6d) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0001dd6d) popup_info_list_pane_t

0x23d7,	// (0x00010b6d) bg_popup_window_pane_cp12

0x6889,	// (0x0001501f) find_popup_pane

0x24b7,	// (0x00010c4d) bg_popup_window_pane_cp3

0x2928,	// (0x000110be) heading_pane_cp3

0x2934,	// (0x000110ca) listscroll_popup_graphic_pane

0x23d7,	// (0x00010b6d) bg_popup_window_pane_cp4

0x2990,	// (0x00011126) heading_pane_cp4

0x299a,	// (0x00011130) listscroll_popup_colour_pane

0x29a2,	// (0x00011138) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x29a2,	// (0x00011138) cell_large_graphic_colour_none_popup_pane

0x29b6,	// (0x0001114c) grid_large_graphic_colour_popup_pane_ParamLimits

0x29b6,	// (0x0001114c) grid_large_graphic_colour_popup_pane

0x29da,	// (0x00011170) listscroll_popup_colour_pane_g1_ParamLimits

0x29da,	// (0x00011170) listscroll_popup_colour_pane_g1

0x29f1,	// (0x00011187) listscroll_popup_colour_pane_g2_ParamLimits

0x29f1,	// (0x00011187) listscroll_popup_colour_pane_g2

0x2a08,	// (0x0001119e) listscroll_popup_colour_pane_g3_ParamLimits

0x2a08,	// (0x0001119e) listscroll_popup_colour_pane_g3

0x2a18,	// (0x000111ae) listscroll_popup_colour_pane_g4_ParamLimits

0x2a18,	// (0x000111ae) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0001dd72) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0001dd72) listscroll_popup_colour_pane_g

0x2a27,	// (0x000111bd) scroll_pane_cp6_ParamLimits

0x2a27,	// (0x000111bd) scroll_pane_cp6

0x2a39,	// (0x000111cf) cell_large_graphic_colour_popup_pane_ParamLimits

0x2a39,	// (0x000111cf) cell_large_graphic_colour_popup_pane

0x2a58,	// (0x000111ee) cell_large_graphic_colour_none_popup_pane_t1

0x23d7,	// (0x00010b6d) grid_highlight_pane_cp5

0x2a67,	// (0x000111fd) cell_large_graphic_colour_popup_pane_g1

0x2a6f,	// (0x00011205) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0001dd7b) cell_large_graphic_colour_popup_pane_g

0x2a77,	// (0x0001120d) cell_large_graphic_colour_popup_pane_g2_copy1

0x2a80,	// (0x00011216) grid_highlight_pane_cp4

0x2a88,	// (0x0001121e) bg_popup_window_pane_cp8_ParamLimits

0x2a88,	// (0x0001121e) bg_popup_window_pane_cp8

0x2aa3,	// (0x00011239) popup_snote_single_text_window_g1_ParamLimits

0x2aa3,	// (0x00011239) popup_snote_single_text_window_g1

0x2ab5,	// (0x0001124b) popup_snote_single_text_window_t1_ParamLimits

0x2ab5,	// (0x0001124b) popup_snote_single_text_window_t1

0x2ac8,	// (0x0001125e) popup_snote_single_text_window_t2_ParamLimits

0x2ac8,	// (0x0001125e) popup_snote_single_text_window_t2

0x2adb,	// (0x00011271) popup_snote_single_text_window_t3_ParamLimits

0x2adb,	// (0x00011271) popup_snote_single_text_window_t3

0x2b14,	// (0x000112aa) popup_snote_single_text_window_t4_ParamLimits

0x2b14,	// (0x000112aa) popup_snote_single_text_window_t4

0x2b48,	// (0x000112de) popup_snote_single_text_window_t5_ParamLimits

0x2b48,	// (0x000112de) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x0001dd80) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x0001dd80) popup_snote_single_text_window_t

0x2b77,	// (0x0001130d) bg_popup_window_pane_cp9_ParamLimits

0x2b77,	// (0x0001130d) bg_popup_window_pane_cp9

0x2aa3,	// (0x00011239) popup_snote_single_graphic_window_g1_ParamLimits

0x2aa3,	// (0x00011239) popup_snote_single_graphic_window_g1

0x2b85,	// (0x0001131b) popup_snote_single_graphic_window_g2_ParamLimits

0x2b85,	// (0x0001131b) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0001dd8b) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0001dd8b) popup_snote_single_graphic_window_g

0x2b91,	// (0x00011327) popup_snote_single_graphic_window_t1_ParamLimits

0x2b91,	// (0x00011327) popup_snote_single_graphic_window_t1

0x2ba4,	// (0x0001133a) popup_snote_single_graphic_window_t2_ParamLimits

0x2ba4,	// (0x0001133a) popup_snote_single_graphic_window_t2

0x2bb7,	// (0x0001134d) popup_snote_single_graphic_window_t3_ParamLimits

0x2bb7,	// (0x0001134d) popup_snote_single_graphic_window_t3

0x2bf0,	// (0x00011386) popup_snote_single_graphic_window_t4_ParamLimits

0x2bf0,	// (0x00011386) popup_snote_single_graphic_window_t4

0x2c24,	// (0x000113ba) popup_snote_single_graphic_window_t5_ParamLimits

0x2c24,	// (0x000113ba) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x0001dd90) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x0001dd90) popup_snote_single_graphic_window_t

0x67c9,	// (0x00014f5f) grid_graphic_popup_pane_ParamLimits

0x67c9,	// (0x00014f5f) grid_graphic_popup_pane

0x67f5,	// (0x00014f8b) listscroll_popup_graphic_pane_g1_ParamLimits

0x67f5,	// (0x00014f8b) listscroll_popup_graphic_pane_g1

0x6809,	// (0x00014f9f) listscroll_popup_graphic_pane_g2_ParamLimits

0x6809,	// (0x00014f9f) listscroll_popup_graphic_pane_g2

0x0001,

0xf9d8,	// (0x0001e16e) listscroll_popup_graphic_pane_g_ParamLimits

0xf9d8,	// (0x0001e16e) listscroll_popup_graphic_pane_g

0x681d,	// (0x00014fb3) scroll_pane_cp5

0x6774,	// (0x00014f0a) cell_graphic_popup_pane_ParamLimits

0x6774,	// (0x00014f0a) cell_graphic_popup_pane

0x6755,	// (0x00014eeb) cell_graphic_popup_pane_g1

0x675d,	// (0x00014ef3) cell_graphic_popup_pane_g2

0x2a77,	// (0x0001120d) cell_graphic_popup_pane_g3

0x0002,

0xf9d1,	// (0x0001e167) cell_graphic_popup_pane_g

0x6766,	// (0x00014efc) cell_graphic_popup_pane_t2

0x2a80,	// (0x00011216) grid_highlight_pane_cp3

0x2c65,	// (0x000113fb) list_gen_pane_ParamLimits

0x2c65,	// (0x000113fb) list_gen_pane

0x2c97,	// (0x0001142d) scroll_pane

0x66b7,	// (0x00014e4d) bg_list_pane_g1_ParamLimits

0x66b7,	// (0x00014e4d) bg_list_pane_g1

0x66d2,	// (0x00014e68) bg_list_pane_g2_ParamLimits

0x66d2,	// (0x00014e68) bg_list_pane_g2

0x66e5,	// (0x00014e7b) bg_list_pane_g3_ParamLimits

0x66e5,	// (0x00014e7b) bg_list_pane_g3

0x66f7,	// (0x00014e8d) bg_list_pane_g4_ParamLimits

0x66f7,	// (0x00014e8d) bg_list_pane_g4

0x6709,	// (0x00014e9f) bg_list_pane_g5_ParamLimits

0x6709,	// (0x00014e9f) bg_list_pane_g5

0x0004,

0xf9c6,	// (0x0001e15c) bg_list_pane_g_ParamLimits

0xf9c6,	// (0x0001e15c) bg_list_pane_g

0xcc57,	// (0x0001b3ed) list_double2_graphic_large_graphic_pane_ParamLimits

0xcc57,	// (0x0001b3ed) list_double2_graphic_large_graphic_pane

0xcc57,	// (0x0001b3ed) list_double2_graphic_pane_ParamLimits

0xcc57,	// (0x0001b3ed) list_double2_graphic_pane

0xcc57,	// (0x0001b3ed) list_double2_large_graphic_pane_ParamLimits

0xcc57,	// (0x0001b3ed) list_double2_large_graphic_pane

0xcc57,	// (0x0001b3ed) list_double2_pane_ParamLimits

0xcc57,	// (0x0001b3ed) list_double2_pane

0xcc57,	// (0x0001b3ed) list_double_graphic_heading_pane_ParamLimits

0xcc57,	// (0x0001b3ed) list_double_graphic_heading_pane

0xcc57,	// (0x0001b3ed) list_double_graphic_pane_ParamLimits

0xcc57,	// (0x0001b3ed) list_double_graphic_pane

0xcc57,	// (0x0001b3ed) list_double_heading_pane_ParamLimits

0xcc57,	// (0x0001b3ed) list_double_heading_pane

0xcc57,	// (0x0001b3ed) list_double_large_graphic_pane_ParamLimits

0xcc57,	// (0x0001b3ed) list_double_large_graphic_pane

0xcc57,	// (0x0001b3ed) list_double_number_pane_ParamLimits

0xcc57,	// (0x0001b3ed) list_double_number_pane

0xcc57,	// (0x0001b3ed) list_double_pane_ParamLimits

0xcc57,	// (0x0001b3ed) list_double_pane

0xcc57,	// (0x0001b3ed) list_double_time_pane_ParamLimits

0xcc57,	// (0x0001b3ed) list_double_time_pane

0xcc57,	// (0x0001b3ed) list_setting_number_pane_ParamLimits

0xcc57,	// (0x0001b3ed) list_setting_number_pane

0xcc57,	// (0x0001b3ed) list_setting_pane_ParamLimits

0xcc57,	// (0x0001b3ed) list_setting_pane

0xccb3,	// (0x0001b449) list_single_2graphic_pane_ParamLimits

0xccb3,	// (0x0001b449) list_single_2graphic_pane

0xccb3,	// (0x0001b449) list_single_graphic_heading_pane_ParamLimits

0xccb3,	// (0x0001b449) list_single_graphic_heading_pane

0xccb3,	// (0x0001b449) list_single_graphic_pane_ParamLimits

0xccb3,	// (0x0001b449) list_single_graphic_pane

0xccb3,	// (0x0001b449) list_single_heading_pane_ParamLimits

0xccb3,	// (0x0001b449) list_single_heading_pane

0xcd21,	// (0x0001b4b7) list_single_large_graphic_pane_ParamLimits

0xcd21,	// (0x0001b4b7) list_single_large_graphic_pane

0xccb3,	// (0x0001b449) list_single_number_heading_pane_ParamLimits

0xccb3,	// (0x0001b449) list_single_number_heading_pane

0xccb3,	// (0x0001b449) list_single_number_pane_ParamLimits

0xccb3,	// (0x0001b449) list_single_number_pane

0xccb3,	// (0x0001b449) list_single_pane_ParamLimits

0xccb3,	// (0x0001b449) list_single_pane

0x23d7,	// (0x00010b6d) list_highlight_pane_cp1

0xc3e2,	// (0x0001ab78) list_single_pane_g1_ParamLimits

0xc3e2,	// (0x0001ab78) list_single_pane_g1

0xc3ee,	// (0x0001ab84) list_single_pane_g2_ParamLimits

0xc3ee,	// (0x0001ab84) list_single_pane_g2

0x0001,

0xf60c,	// (0x0001dda2) list_single_pane_g_ParamLimits

0xf60c,	// (0x0001dda2) list_single_pane_g

0xcc41,	// (0x0001b3d7) list_single_pane_t1_ParamLimits

0xcc41,	// (0x0001b3d7) list_single_pane_t1

0xc3e2,	// (0x0001ab78) list_single_number_pane_g1_ParamLimits

0xc3e2,	// (0x0001ab78) list_single_number_pane_g1

0xc3ee,	// (0x0001ab84) list_single_number_pane_g2_ParamLimits

0xc3ee,	// (0x0001ab84) list_single_number_pane_g2

0x0001,

0xf60c,	// (0x0001dda2) list_single_number_pane_g_ParamLimits

0xf60c,	// (0x0001dda2) list_single_number_pane_g

0xcb75,	// (0x0001b30b) list_single_number_pane_t1_ParamLimits

0xcb75,	// (0x0001b30b) list_single_number_pane_t1

0xcc01,	// (0x0001b397) list_single_number_pane_t2_ParamLimits

0xcc01,	// (0x0001b397) list_single_number_pane_t2

0x0001,

0xf987,	// (0x0001e11d) list_single_number_pane_t_ParamLimits

0xf987,	// (0x0001e11d) list_single_number_pane_t

0xc3d6,	// (0x0001ab6c) list_single_graphic_pane_g1_ParamLimits

0xc3d6,	// (0x0001ab6c) list_single_graphic_pane_g1

0xc3e2,	// (0x0001ab78) list_single_graphic_pane_g2_ParamLimits

0xc3e2,	// (0x0001ab78) list_single_graphic_pane_g2

0xc3ee,	// (0x0001ab84) list_single_graphic_pane_g3_ParamLimits

0xc3ee,	// (0x0001ab84) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0001dd9b) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0001dd9b) list_single_graphic_pane_g

0xc3fa,	// (0x0001ab90) list_single_graphic_pane_t1_ParamLimits

0xc3fa,	// (0x0001ab90) list_single_graphic_pane_t1

0xc3e2,	// (0x0001ab78) list_single_heading_pane_g1_ParamLimits

0xc3e2,	// (0x0001ab78) list_single_heading_pane_g1

0xc3ee,	// (0x0001ab84) list_single_heading_pane_g2_ParamLimits

0xc3ee,	// (0x0001ab84) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0001dda2) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0001dda2) list_single_heading_pane_g

0xc410,	// (0x0001aba6) list_single_heading_pane_t1_ParamLimits

0xc410,	// (0x0001aba6) list_single_heading_pane_t1

0xc426,	// (0x0001abbc) list_single_heading_pane_t2_ParamLimits

0xc426,	// (0x0001abbc) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0001dda7) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0001dda7) list_single_heading_pane_t

0xc3e2,	// (0x0001ab78) list_single_number_heading_pane_g1_ParamLimits

0xc3e2,	// (0x0001ab78) list_single_number_heading_pane_g1

0xc3ee,	// (0x0001ab84) list_single_number_heading_pane_g2_ParamLimits

0xc3ee,	// (0x0001ab84) list_single_number_heading_pane_g2

0x0001,

0xf60c,	// (0x0001dda2) list_single_number_heading_pane_g_ParamLimits

0xf60c,	// (0x0001dda2) list_single_number_heading_pane_g

0xc410,	// (0x0001aba6) list_single_number_heading_pane_t1_ParamLimits

0xc410,	// (0x0001aba6) list_single_number_heading_pane_t1

0xc438,	// (0x0001abce) list_single_number_heading_pane_t2_ParamLimits

0xc438,	// (0x0001abce) list_single_number_heading_pane_t2

0xc44a,	// (0x0001abe0) list_single_number_heading_pane_t3_ParamLimits

0xc44a,	// (0x0001abe0) list_single_number_heading_pane_t3

0x0002,

0xf616,	// (0x0001ddac) list_single_number_heading_pane_t_ParamLimits

0xf616,	// (0x0001ddac) list_single_number_heading_pane_t

0xc45c,	// (0x0001abf2) list_single_graphic_heading_pane_g1_ParamLimits

0xc45c,	// (0x0001abf2) list_single_graphic_heading_pane_g1

0xc468,	// (0x0001abfe) list_single_graphic_heading_pane_g4_ParamLimits

0xc468,	// (0x0001abfe) list_single_graphic_heading_pane_g4

0xc3ee,	// (0x0001ab84) list_single_graphic_heading_pane_g5_ParamLimits

0xc3ee,	// (0x0001ab84) list_single_graphic_heading_pane_g5

0x0002,

0xf61d,	// (0x0001ddb3) list_single_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x0001ddb3) list_single_graphic_heading_pane_g

0xc410,	// (0x0001aba6) list_single_graphic_heading_pane_t1_ParamLimits

0xc410,	// (0x0001aba6) list_single_graphic_heading_pane_t1

0xc479,	// (0x0001ac0f) list_single_graphic_heading_pane_t2_ParamLimits

0xc479,	// (0x0001ac0f) list_single_graphic_heading_pane_t2

0x0001,

0xf624,	// (0x0001ddba) list_single_graphic_heading_pane_t_ParamLimits

0xf624,	// (0x0001ddba) list_single_graphic_heading_pane_t

0xc48b,	// (0x0001ac21) list_single_large_graphic_pane_g1_ParamLimits

0xc48b,	// (0x0001ac21) list_single_large_graphic_pane_g1

0xc497,	// (0x0001ac2d) list_single_large_graphic_pane_g2_ParamLimits

0xc497,	// (0x0001ac2d) list_single_large_graphic_pane_g2

0xc4a3,	// (0x0001ac39) list_single_large_graphic_pane_g3_ParamLimits

0xc4a3,	// (0x0001ac39) list_single_large_graphic_pane_g3

0x0002,

0xf629,	// (0x0001ddbf) list_single_large_graphic_pane_g_ParamLimits

0xf629,	// (0x0001ddbf) list_single_large_graphic_pane_g

0x55c1,	// (0x00013d57) wait_border_pane_g2_copy1

0xc4af,	// (0x0001ac45) list_single_large_graphic_pane_g4_cp2

0xc4b7,	// (0x0001ac4d) list_single_large_graphic_pane_t1_ParamLimits

0xc4b7,	// (0x0001ac4d) list_single_large_graphic_pane_t1

0xc4cd,	// (0x0001ac63) list_double_pane_g1_ParamLimits

0xc4cd,	// (0x0001ac63) list_double_pane_g1

0xc4d9,	// (0x0001ac6f) list_double_pane_g2_ParamLimits

0xc4d9,	// (0x0001ac6f) list_double_pane_g2

0x0001,

0xf630,	// (0x0001ddc6) list_double_pane_g_ParamLimits

0xf630,	// (0x0001ddc6) list_double_pane_g

0xc4e5,	// (0x0001ac7b) list_double_pane_t1_ParamLimits

0xc4e5,	// (0x0001ac7b) list_double_pane_t1

0xc4fb,	// (0x0001ac91) list_double_pane_t2_ParamLimits

0xc4fb,	// (0x0001ac91) list_double_pane_t2

0x0001,

0xf635,	// (0x0001ddcb) list_double_pane_t_ParamLimits

0xf635,	// (0x0001ddcb) list_double_pane_t

0xc50d,	// (0x0001aca3) list_double2_pane_g1_ParamLimits

0xc50d,	// (0x0001aca3) list_double2_pane_g1

0xc4d9,	// (0x0001ac6f) list_double2_pane_g2_ParamLimits

0xc4d9,	// (0x0001ac6f) list_double2_pane_g2

0x0001,

0xf63a,	// (0x0001ddd0) list_double2_pane_g_ParamLimits

0xf63a,	// (0x0001ddd0) list_double2_pane_g

0xc4e5,	// (0x0001ac7b) list_double2_pane_t1_ParamLimits

0xc4e5,	// (0x0001ac7b) list_double2_pane_t1

0xc51e,	// (0x0001acb4) list_double2_pane_t2_ParamLimits

0xc51e,	// (0x0001acb4) list_double2_pane_t2

0x0001,

0xf63f,	// (0x0001ddd5) list_double2_pane_t_ParamLimits

0xf63f,	// (0x0001ddd5) list_double2_pane_t

0xc4cd,	// (0x0001ac63) list_double_number_pane_g1_ParamLimits

0xc4cd,	// (0x0001ac63) list_double_number_pane_g1

0xc4d9,	// (0x0001ac6f) list_double_number_pane_g2_ParamLimits

0xc4d9,	// (0x0001ac6f) list_double_number_pane_g2

0x0001,

0xf630,	// (0x0001ddc6) list_double_number_pane_g_ParamLimits

0xf630,	// (0x0001ddc6) list_double_number_pane_g

0xc530,	// (0x0001acc6) list_double_number_pane_t1_ParamLimits

0xc530,	// (0x0001acc6) list_double_number_pane_t1

0xc542,	// (0x0001acd8) list_double_number_pane_t2_ParamLimits

0xc542,	// (0x0001acd8) list_double_number_pane_t2

0xc558,	// (0x0001acee) list_double_number_pane_t3_ParamLimits

0xc558,	// (0x0001acee) list_double_number_pane_t3

0x0002,

0xf644,	// (0x0001ddda) list_double_number_pane_t_ParamLimits

0xf644,	// (0x0001ddda) list_double_number_pane_t

0xc56a,	// (0x0001ad00) list_double_graphic_pane_g1_ParamLimits

0xc56a,	// (0x0001ad00) list_double_graphic_pane_g1

0xc576,	// (0x0001ad0c) list_double_graphic_pane_g2_ParamLimits

0xc576,	// (0x0001ad0c) list_double_graphic_pane_g2

0xc585,	// (0x0001ad1b) list_double_graphic_pane_g3_ParamLimits

0xc585,	// (0x0001ad1b) list_double_graphic_pane_g3

0x0003,

0xf64b,	// (0x0001dde1) list_double_graphic_pane_g_ParamLimits

0xf64b,	// (0x0001dde1) list_double_graphic_pane_g

0xc59d,	// (0x0001ad33) list_double_graphic_pane_t1_ParamLimits

0xc59d,	// (0x0001ad33) list_double_graphic_pane_t1

0xc5b3,	// (0x0001ad49) list_double_graphic_pane_t2_ParamLimits

0xc5b3,	// (0x0001ad49) list_double_graphic_pane_t2

0x0001,

0xf654,	// (0x0001ddea) list_double_graphic_pane_t_ParamLimits

0xf654,	// (0x0001ddea) list_double_graphic_pane_t

0xc56a,	// (0x0001ad00) list_double2_graphic_pane_g1_ParamLimits

0xc56a,	// (0x0001ad00) list_double2_graphic_pane_g1

0xc5c5,	// (0x0001ad5b) list_double2_graphic_pane_g2_ParamLimits

0xc5c5,	// (0x0001ad5b) list_double2_graphic_pane_g2

0xc5d1,	// (0x0001ad67) list_double2_graphic_pane_g3_ParamLimits

0xc5d1,	// (0x0001ad67) list_double2_graphic_pane_g3

0x0002,

0xf659,	// (0x0001ddef) list_double2_graphic_pane_g_ParamLimits

0xf659,	// (0x0001ddef) list_double2_graphic_pane_g

0xc542,	// (0x0001acd8) list_double2_graphic_pane_t1_ParamLimits

0xc542,	// (0x0001acd8) list_double2_graphic_pane_t1

0xc5dd,	// (0x0001ad73) list_double2_graphic_pane_t2_ParamLimits

0xc5dd,	// (0x0001ad73) list_double2_graphic_pane_t2

0x0001,

0xf660,	// (0x0001ddf6) list_double2_graphic_pane_t_ParamLimits

0xf660,	// (0x0001ddf6) list_double2_graphic_pane_t

0xc5ef,	// (0x0001ad85) list_double_large_graphic_pane_g1_ParamLimits

0xc5ef,	// (0x0001ad85) list_double_large_graphic_pane_g1

0xc50d,	// (0x0001aca3) list_double_large_graphic_pane_g2_ParamLimits

0xc50d,	// (0x0001aca3) list_double_large_graphic_pane_g2

0xc4d9,	// (0x0001ac6f) list_double_large_graphic_pane_g3_ParamLimits

0xc4d9,	// (0x0001ac6f) list_double_large_graphic_pane_g3

0xc61a,	// (0x0001adb0) list_double_large_graphic_pane_g4_ParamLimits

0xc61a,	// (0x0001adb0) list_double_large_graphic_pane_g4

0x0004,

0xf665,	// (0x0001ddfb) list_double_large_graphic_pane_g_ParamLimits

0xf665,	// (0x0001ddfb) list_double_large_graphic_pane_g

0xc642,	// (0x0001add8) list_double_large_graphic_pane_t1_ParamLimits

0xc642,	// (0x0001add8) list_double_large_graphic_pane_t1

0xc65b,	// (0x0001adf1) list_double_large_graphic_pane_t2_ParamLimits

0xc65b,	// (0x0001adf1) list_double_large_graphic_pane_t2

0x0001,

0xf670,	// (0x0001de06) list_double_large_graphic_pane_t_ParamLimits

0xf670,	// (0x0001de06) list_double_large_graphic_pane_t

0xc66d,	// (0x0001ae03) list_double2_large_graphic_pane_g1_ParamLimits

0xc66d,	// (0x0001ae03) list_double2_large_graphic_pane_g1

0xc50d,	// (0x0001aca3) list_double2_large_graphic_pane_g2_ParamLimits

0xc50d,	// (0x0001aca3) list_double2_large_graphic_pane_g2

0xc4d9,	// (0x0001ac6f) list_double2_large_graphic_pane_g3_ParamLimits

0xc4d9,	// (0x0001ac6f) list_double2_large_graphic_pane_g3

0x0002,

0xf675,	// (0x0001de0b) list_double2_large_graphic_pane_g_ParamLimits

0xf675,	// (0x0001de0b) list_double2_large_graphic_pane_g

0xc679,	// (0x0001ae0f) list_double2_large_graphic_pane_t1_ParamLimits

0xc679,	// (0x0001ae0f) list_double2_large_graphic_pane_t1

0xc68f,	// (0x0001ae25) list_double2_large_graphic_pane_t2_ParamLimits

0xc68f,	// (0x0001ae25) list_double2_large_graphic_pane_t2

0x0001,

0xf67c,	// (0x0001de12) list_double2_large_graphic_pane_t_ParamLimits

0xf67c,	// (0x0001de12) list_double2_large_graphic_pane_t

0xc6a1,	// (0x0001ae37) list_double_heading_pane_g1_ParamLimits

0xc6a1,	// (0x0001ae37) list_double_heading_pane_g1

0xc6b2,	// (0x0001ae48) list_double_heading_pane_g2_ParamLimits

0xc6b2,	// (0x0001ae48) list_double_heading_pane_g2

0x0001,

0xf681,	// (0x0001de17) list_double_heading_pane_g_ParamLimits

0xf681,	// (0x0001de17) list_double_heading_pane_g

0xc6be,	// (0x0001ae54) list_double_heading_pane_t1_ParamLimits

0xc6be,	// (0x0001ae54) list_double_heading_pane_t1

0xc51e,	// (0x0001acb4) list_double_heading_pane_t2_ParamLimits

0xc51e,	// (0x0001acb4) list_double_heading_pane_t2

0x0001,

0xf686,	// (0x0001de1c) list_double_heading_pane_t_ParamLimits

0xf686,	// (0x0001de1c) list_double_heading_pane_t

0xc56a,	// (0x0001ad00) list_double_graphic_heading_pane_g1_ParamLimits

0xc56a,	// (0x0001ad00) list_double_graphic_heading_pane_g1

0xc6a1,	// (0x0001ae37) list_double_graphic_heading_pane_g2_ParamLimits

0xc6a1,	// (0x0001ae37) list_double_graphic_heading_pane_g2

0xc6b2,	// (0x0001ae48) list_double_graphic_heading_pane_g3_ParamLimits

0xc6b2,	// (0x0001ae48) list_double_graphic_heading_pane_g3

0x0002,

0xf68b,	// (0x0001de21) list_double_graphic_heading_pane_g_ParamLimits

0xf68b,	// (0x0001de21) list_double_graphic_heading_pane_g

0xc6d4,	// (0x0001ae6a) list_double_graphic_heading_pane_t1_ParamLimits

0xc6d4,	// (0x0001ae6a) list_double_graphic_heading_pane_t1

0xc5dd,	// (0x0001ad73) list_double_graphic_heading_pane_t2_ParamLimits

0xc5dd,	// (0x0001ad73) list_double_graphic_heading_pane_t2

0x0001,

0xf692,	// (0x0001de28) list_double_graphic_heading_pane_t_ParamLimits

0xf692,	// (0x0001de28) list_double_graphic_heading_pane_t

0xc50d,	// (0x0001aca3) list_double_time_pane_g1_ParamLimits

0xc50d,	// (0x0001aca3) list_double_time_pane_g1

0xc4d9,	// (0x0001ac6f) list_double_time_pane_g2_ParamLimits

0xc4d9,	// (0x0001ac6f) list_double_time_pane_g2

0x0001,

0xf63a,	// (0x0001ddd0) list_double_time_pane_g_ParamLimits

0xf63a,	// (0x0001ddd0) list_double_time_pane_g

0xc679,	// (0x0001ae0f) list_double_time_pane_t1_ParamLimits

0xc679,	// (0x0001ae0f) list_double_time_pane_t1

0xc6ea,	// (0x0001ae80) list_double_time_pane_t2_ParamLimits

0xc6ea,	// (0x0001ae80) list_double_time_pane_t2

0xc6fc,	// (0x0001ae92) list_double_time_pane_t3_ParamLimits

0xc6fc,	// (0x0001ae92) list_double_time_pane_t3

0xc70e,	// (0x0001aea4) list_double_time_pane_t4_ParamLimits

0xc70e,	// (0x0001aea4) list_double_time_pane_t4

0x0003,

0xf697,	// (0x0001de2d) list_double_time_pane_t_ParamLimits

0xf697,	// (0x0001de2d) list_double_time_pane_t

0xc720,	// (0x0001aeb6) list_setting_pane_g1_ParamLimits

0xc720,	// (0x0001aeb6) list_setting_pane_g1

0xc72c,	// (0x0001aec2) list_setting_pane_g2_ParamLimits

0xc72c,	// (0x0001aec2) list_setting_pane_g2

0x0001,

0xf6a0,	// (0x0001de36) list_setting_pane_g_ParamLimits

0xf6a0,	// (0x0001de36) list_setting_pane_g

0xc738,	// (0x0001aece) list_setting_pane_t1_ParamLimits

0xc738,	// (0x0001aece) list_setting_pane_t1

0xc74f,	// (0x0001aee5) list_setting_pane_t2_ParamLimits

0xc74f,	// (0x0001aee5) list_setting_pane_t2

0x0002,

0xf6a5,	// (0x0001de3b) list_setting_pane_t_ParamLimits

0xf6a5,	// (0x0001de3b) list_setting_pane_t

0xc78c,	// (0x0001af22) set_value_pane_cp_ParamLimits

0xc78c,	// (0x0001af22) set_value_pane_cp

0xc798,	// (0x0001af2e) list_setting_number_pane_g1_ParamLimits

0xc798,	// (0x0001af2e) list_setting_number_pane_g1

0xc7a4,	// (0x0001af3a) list_setting_number_pane_g2_ParamLimits

0xc7a4,	// (0x0001af3a) list_setting_number_pane_g2

0x0001,

0xf6ac,	// (0x0001de42) list_setting_number_pane_g_ParamLimits

0xf6ac,	// (0x0001de42) list_setting_number_pane_g

0xc7b0,	// (0x0001af46) list_setting_number_pane_t1_ParamLimits

0xc7b0,	// (0x0001af46) list_setting_number_pane_t1

0xc7c4,	// (0x0001af5a) list_setting_number_pane_t2_ParamLimits

0xc7c4,	// (0x0001af5a) list_setting_number_pane_t2

0xc7db,	// (0x0001af71) list_setting_number_pane_t3_ParamLimits

0xc7db,	// (0x0001af71) list_setting_number_pane_t3

0x0003,

0xf6b1,	// (0x0001de47) list_setting_number_pane_t_ParamLimits

0xf6b1,	// (0x0001de47) list_setting_number_pane_t

0xc78c,	// (0x0001af22) set_value_pane_ParamLimits

0xc78c,	// (0x0001af22) set_value_pane

0x3165,	// (0x000118fb) bg_set_opt_pane_ParamLimits

0x3165,	// (0x000118fb) bg_set_opt_pane

0xc81e,	// (0x0001afb4) set_value_pane_t1

0x3194,	// (0x0001192a) slider_set_pane_cp3

0x319d,	// (0x00011933) volume_small_pane_cp

0x31a6,	// (0x0001193c) list_form_gen_pane

0x31af,	// (0x00011945) scroll_pane_cp8

0xc834,	// (0x0001afca) form_field_data_pane_ParamLimits

0xc834,	// (0x0001afca) form_field_data_pane

0xc854,	// (0x0001afea) form_field_data_wide_pane_ParamLimits

0xc854,	// (0x0001afea) form_field_data_wide_pane

0xc875,	// (0x0001b00b) form_field_popup_pane_ParamLimits

0xc875,	// (0x0001b00b) form_field_popup_pane

0xc893,	// (0x0001b029) form_field_popup_wide_pane_ParamLimits

0xc893,	// (0x0001b029) form_field_popup_wide_pane

0xc8ae,	// (0x0001b044) form_field_slider_pane_ParamLimits

0xc8ae,	// (0x0001b044) form_field_slider_pane

0xc8c1,	// (0x0001b057) form_field_slider_wide_pane_ParamLimits

0xc8c1,	// (0x0001b057) form_field_slider_wide_pane

0x3260,	// (0x000119f6) data_form_pane

0xc8de,	// (0x0001b074) form_field_data_pane_t1

0x3290,	// (0x00011a26) input_focus_pane

0x329e,	// (0x00011a34) data_form_wide_pane

0xc904,	// (0x0001b09a) form_field_data_wide_pane_t1

0x2a95,	// (0x0001122b) input_focus_pane_cp6

0xc926,	// (0x0001b0bc) form_field_popup_pane_t1

0x3290,	// (0x00011a26) input_focus_pane_cp7

0x3312,	// (0x00011aa8) list_form_pane

0xc948,	// (0x0001b0de) form_field_popup_wide_pane_t1

0x3290,	// (0x00011a26) input_focus_pane_cp8

0x333b,	// (0x00011ad1) list_form_wide_pane

0xc965,	// (0x0001b0fb) form_field_slider_pane_t1_ParamLimits

0xc965,	// (0x0001b0fb) form_field_slider_pane_t1

0xc979,	// (0x0001b10f) form_field_slider_pane_t2_ParamLimits

0xc979,	// (0x0001b10f) form_field_slider_pane_t2

0x0001,

0xf6c1,	// (0x0001de57) form_field_slider_pane_t_ParamLimits

0xf6c1,	// (0x0001de57) form_field_slider_pane_t

0x274c,	// (0x00010ee2) input_focus_pane_cp9_ParamLimits

0x274c,	// (0x00010ee2) input_focus_pane_cp9

0xc98b,	// (0x0001b121) slider_cont_pane_ParamLimits

0xc98b,	// (0x0001b121) slider_cont_pane

0x338c,	// (0x00011b22) form_field_slider_wide_pane_t1_ParamLimits

0x338c,	// (0x00011b22) form_field_slider_wide_pane_t1

0xc99f,	// (0x0001b135) form_field_slider_wide_pane_t2_ParamLimits

0xc99f,	// (0x0001b135) form_field_slider_wide_pane_t2

0x0001,

0xf6c6,	// (0x0001de5c) form_field_slider_wide_pane_t_ParamLimits

0xf6c6,	// (0x0001de5c) form_field_slider_wide_pane_t

0x274c,	// (0x00010ee2) input_focus_pane_cp10_ParamLimits

0x274c,	// (0x00010ee2) input_focus_pane_cp10

0xc9b1,	// (0x0001b147) slider_cont_pane_cp1_ParamLimits

0xc9b1,	// (0x0001b147) slider_cont_pane_cp1

0xc9c5,	// (0x0001b15b) slider_form_pane_cp

0x33cc,	// (0x00011b62) input_focus_pane_g1

0x33d4,	// (0x00011b6a) input_focus_pane_g2

0x33dc,	// (0x00011b72) input_focus_pane_g3

0x33e4,	// (0x00011b7a) input_focus_pane_g4

0x33ec,	// (0x00011b82) input_focus_pane_g5

0x33f4,	// (0x00011b8a) input_focus_pane_g6

0x33fc,	// (0x00011b92) input_focus_pane_g7

0x3404,	// (0x00011b9a) input_focus_pane_g8

0x340c,	// (0x00011ba2) input_focus_pane_g9

0x23cd,	// (0x00010b63) input_focus_pane_g10

0x0009,

0xf6cb,	// (0x0001de61) input_focus_pane_g

0x55ca,	// (0x00013d60) wait_border_pane_g3_copy1

0xc9cd,	// (0x0001b163) data_form_pane_t1

0x23cd,	// (0x00010b63) wait_anim_pane_g1_copy1

0xcc13,	// (0x0001b3a9) data_form_wide_pane_t1

0xc9e8,	// (0x0001b17e) list_form_graphic_pane_cp_ParamLimits

0xc9e8,	// (0x0001b17e) list_form_graphic_pane_cp

0x651d,	// (0x00014cb3) slider_form_pane_g1

0x6526,	// (0x00014cbc) slider_form_pane_g2

0x0006,

0xf9b7,	// (0x0001e14d) slider_form_pane_g

0xc9ff,	// (0x0001b195) list_form_graphic_pane_ParamLimits

0xc9ff,	// (0x0001b195) list_form_graphic_pane

0xca19,	// (0x0001b1af) list_form_graphic_pane_g1

0xca21,	// (0x0001b1b7) list_form_graphic_pane_t1_ParamLimits

0xca21,	// (0x0001b1b7) list_form_graphic_pane_t1

0x24b7,	// (0x00010c4d) list_highlight_pane_cp5_ParamLimits

0x24b7,	// (0x00010c4d) list_highlight_pane_cp5

0xca36,	// (0x0001b1cc) find_pane_g1

0x3486,	// (0x00011c1c) input_find_pane

0xca3f,	// (0x0001b1d5) input_find_pane_g1_ParamLimits

0xca3f,	// (0x0001b1d5) input_find_pane_g1

0xca4b,	// (0x0001b1e1) input_find_pane_t1_ParamLimits

0xca4b,	// (0x0001b1e1) input_find_pane_t1

0xca60,	// (0x0001b1f6) input_find_pane_t2_ParamLimits

0xca60,	// (0x0001b1f6) input_find_pane_t2

0x0001,

0xf6e0,	// (0x0001de76) input_find_pane_t_ParamLimits

0xf6e0,	// (0x0001de76) input_find_pane_t

0x34c5,	// (0x00011c5b) input_focus_pane_cp5_ParamLimits

0x34c5,	// (0x00011c5b) input_focus_pane_cp5

0x34df,	// (0x00011c75) bg_popup_window_pane_cp2_ParamLimits

0x34df,	// (0x00011c75) bg_popup_window_pane_cp2

0x34ec,	// (0x00011c82) listscroll_menu_pane_ParamLimits

0x34ec,	// (0x00011c82) listscroll_menu_pane

0x34f8,	// (0x00011c8e) popup_submenu_window_ParamLimits

0x34f8,	// (0x00011c8e) popup_submenu_window

0x351c,	// (0x00011cb2) find_popup_pane_g1

0x3524,	// (0x00011cba) input_popup_find_pane_cp

0x34c5,	// (0x00011c5b) input_focus_pane_cp4_ParamLimits

0x34c5,	// (0x00011c5b) input_focus_pane_cp4

0x353c,	// (0x00011cd2) input_popup_find_pane_t1_ParamLimits

0x353c,	// (0x00011cd2) input_popup_find_pane_t1

0x23d7,	// (0x00010b6d) bg_popup_sub_pane_cp

0x356a,	// (0x00011d00) listscroll_popup_sub_pane

0x3572,	// (0x00011d08) list_submenu_pane_ParamLimits

0x3572,	// (0x00011d08) list_submenu_pane

0x3583,	// (0x00011d19) scroll_pane_cp4

0x358b,	// (0x00011d21) list_single_popup_submenu_pane_ParamLimits

0x358b,	// (0x00011d21) list_single_popup_submenu_pane

0x359e,	// (0x00011d34) list_single_popup_submenu_pane_g1

0x35a6,	// (0x00011d3c) list_single_popup_submenu_pane_t1_ParamLimits

0x35a6,	// (0x00011d3c) list_single_popup_submenu_pane_t1

0x24b7,	// (0x00010c4d) bg_active_tab_pane_cp1_ParamLimits

0x24b7,	// (0x00010c4d) bg_active_tab_pane_cp1

0x35bb,	// (0x00011d51) tabs_2_active_pane_g1

0x35c3,	// (0x00011d59) tabs_2_active_pane_t1

0x24b7,	// (0x00010c4d) bg_passive_tab_pane_cp1_ParamLimits

0x24b7,	// (0x00010c4d) bg_passive_tab_pane_cp1

0x35bb,	// (0x00011d51) tabs_2_passive_pane_g1

0x35c3,	// (0x00011d59) tabs_2_passive_pane_t1

0x35d5,	// (0x00011d6b) bg_active_tab_pane_cp4

0x35e3,	// (0x00011d79) tabs_2_long_active_pane_t1

0x35f6,	// (0x00011d8c) bg_passive_tab_pane_cp4

0xddc1,	// (0x0001c557) list_single_midp_graphic_pane_g4_ParamLimits

0x35d5,	// (0x00011d6b) bg_active_tab_pane_cp5

0x3602,	// (0x00011d98) tabs_3_long_active_pane_t1

0x35f6,	// (0x00011d8c) bg_passive_tab_pane_cp5

0xddc1,	// (0x0001c557) list_single_midp_graphic_pane_g4

0x24b7,	// (0x00010c4d) bg_popup_window_pane_cp13_ParamLimits

0x24b7,	// (0x00010c4d) bg_popup_window_pane_cp13

0x361d,	// (0x00011db3) listscroll_popup_fast_pane_ParamLimits

0x361d,	// (0x00011db3) listscroll_popup_fast_pane

0x362c,	// (0x00011dc2) grid_popup_fast_pane_ParamLimits

0x362c,	// (0x00011dc2) grid_popup_fast_pane

0x363e,	// (0x00011dd4) scroll_pane_cp9_ParamLimits

0x363e,	// (0x00011dd4) scroll_pane_cp9

0x82cd,	// (0x00016a63) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x82cd,	// (0x00016a63) list_single_graphic_hl_pane_t1_cp2

0x3662,	// (0x00011df8) input_focus_pane_cp20_ParamLimits

0x3662,	// (0x00011df8) input_focus_pane_cp20

0x3670,	// (0x00011e06) query_popup_data_pane_t1_ParamLimits

0x3670,	// (0x00011e06) query_popup_data_pane_t1

0x3683,	// (0x00011e19) query_popup_data_pane_t2_ParamLimits

0x3683,	// (0x00011e19) query_popup_data_pane_t2

0x36c9,	// (0x00011e5f) query_popup_data_pane_t3_ParamLimits

0x36c9,	// (0x00011e5f) query_popup_data_pane_t3

0x370a,	// (0x00011ea0) query_popup_data_pane_t4_ParamLimits

0x370a,	// (0x00011ea0) query_popup_data_pane_t4

0x3746,	// (0x00011edc) query_popup_data_pane_t5_ParamLimits

0x3746,	// (0x00011edc) query_popup_data_pane_t5

0x0004,

0xf6e5,	// (0x0001de7b) query_popup_data_pane_t_ParamLimits

0xf6e5,	// (0x0001de7b) query_popup_data_pane_t

0x33cc,	// (0x00011b62) bg_set_opt_pane_g1

0x33d4,	// (0x00011b6a) bg_set_opt_pane_g2

0x33dc,	// (0x00011b72) bg_set_opt_pane_g3

0x33e4,	// (0x00011b7a) bg_set_opt_pane_g4

0x33ec,	// (0x00011b82) bg_set_opt_pane_g5

0x33f4,	// (0x00011b8a) bg_set_opt_pane_g6

0x33fc,	// (0x00011b92) bg_set_opt_pane_g7

0x3404,	// (0x00011b9a) bg_set_opt_pane_g8

0x340c,	// (0x00011ba2) bg_set_opt_pane_g9

0x0008,

0xf6f0,	// (0x0001de86) bg_set_opt_pane_g

0xda2f,	// (0x0001c1c5) control_top_pane_stacon_ParamLimits

0xda2f,	// (0x0001c1c5) control_top_pane_stacon

0xda82,	// (0x0001c218) signal_pane_stacon_ParamLimits

0xda82,	// (0x0001c218) signal_pane_stacon

0x3d6a,	// (0x00012500) stacon_top_pane_g1_ParamLimits

0x3d6a,	// (0x00012500) stacon_top_pane_g1

0xdaa7,	// (0x0001c23d) title_pane_stacon_ParamLimits

0xdaa7,	// (0x0001c23d) title_pane_stacon

0xdad1,	// (0x0001c267) uni_indicator_pane_stacon_ParamLimits

0xdad1,	// (0x0001c267) uni_indicator_pane_stacon

0xdae6,	// (0x0001c27c) battery_pane_stacon_ParamLimits

0xdae6,	// (0x0001c27c) battery_pane_stacon

0xdb2a,	// (0x0001c2c0) control_bottom_pane_stacon_ParamLimits

0xdb2a,	// (0x0001c2c0) control_bottom_pane_stacon

0xdb4d,	// (0x0001c2e3) navi_pane_stacon_ParamLimits

0xdb4d,	// (0x0001c2e3) navi_pane_stacon

0x3d8c,	// (0x00012522) stacon_bottom_pane_g1_ParamLimits

0x3d8c,	// (0x00012522) stacon_bottom_pane_g1

0xd790,	// (0x0001bf26) aid_levels_signal_lsc_ParamLimits

0xd790,	// (0x0001bf26) aid_levels_signal_lsc

0xd7a7,	// (0x0001bf3d) signal_pane_stacon_g1_ParamLimits

0xd7a7,	// (0x0001bf3d) signal_pane_stacon_g1

0xd7bb,	// (0x0001bf51) signal_pane_stacon_g2_ParamLimits

0xd7bb,	// (0x0001bf51) signal_pane_stacon_g2

0x0001,

0xf703,	// (0x0001de99) signal_pane_stacon_g_ParamLimits

0xf703,	// (0x0001de99) signal_pane_stacon_g

0xd7f0,	// (0x0001bf86) title_pane_stacon_t1_ParamLimits

0xd7f0,	// (0x0001bf86) title_pane_stacon_t1

0x379e,	// (0x00011f34) uni_indicator_pane_stacon_g1

0x37a8,	// (0x00011f3e) uni_indicator_pane_stacon_g2

0x378a,	// (0x00011f20) uni_indicator_pane_stacon_g3

0x3794,	// (0x00011f2a) uni_indicator_pane_stacon_g4

0x0003,

0xf70f,	// (0x0001dea5) uni_indicator_pane_stacon_g

0xd815,	// (0x0001bfab) control_top_pane_stacon_g1

0xd81d,	// (0x0001bfb3) control_top_pane_stacon_t1_ParamLimits

0xd81d,	// (0x0001bfb3) control_top_pane_stacon_t1

0xd854,	// (0x0001bfea) aid_levels_battery_lsc_ParamLimits

0xd854,	// (0x0001bfea) aid_levels_battery_lsc

0xd86c,	// (0x0001c002) battery_pane_stacon_g1_ParamLimits

0xd86c,	// (0x0001c002) battery_pane_stacon_g1

0xd87f,	// (0x0001c015) battery_pane_stacon_g2_ParamLimits

0xd87f,	// (0x0001c015) battery_pane_stacon_g2

0x0001,

0xf718,	// (0x0001deae) battery_pane_stacon_g_ParamLimits

0xf718,	// (0x0001deae) battery_pane_stacon_g

0xd8bd,	// (0x0001c053) navi_icon_pane_stacon

0xd8d1,	// (0x0001c067) navi_navi_pane_stacon

0xd8bd,	// (0x0001c053) navi_text_pane_stacon

0xd815,	// (0x0001bfab) control_bottom_pane_stacon_g1

0xd8e5,	// (0x0001c07b) control_bottom_pane_stacon_t1_ParamLimits

0xd8e5,	// (0x0001c07b) control_bottom_pane_stacon_t1

0x37cc,	// (0x00011f62) grid_app_pane_ParamLimits

0x37cc,	// (0x00011f62) grid_app_pane

0x37ee,	// (0x00011f84) scroll_pane_cp15_ParamLimits

0x37ee,	// (0x00011f84) scroll_pane_cp15

0x3803,	// (0x00011f99) cell_app_pane_ParamLimits

0x3803,	// (0x00011f99) cell_app_pane

0x382d,	// (0x00011fc3) cell_app_pane_g1_ParamLimits

0x382d,	// (0x00011fc3) cell_app_pane_g1

0x3851,	// (0x00011fe7) cell_app_pane_g2_ParamLimits

0x3851,	// (0x00011fe7) cell_app_pane_g2

0x0001,

0xf71d,	// (0x0001deb3) cell_app_pane_g_ParamLimits

0xf71d,	// (0x0001deb3) cell_app_pane_g

0x385d,	// (0x00011ff3) cell_app_pane_t1_ParamLimits

0x385d,	// (0x00011ff3) cell_app_pane_t1

0x386f,	// (0x00012005) grid_highlight_pane_ParamLimits

0x386f,	// (0x00012005) grid_highlight_pane

0x33cc,	// (0x00011b62) cell_highlight_pane_g1

0x33d4,	// (0x00011b6a) cell_highlight_pane_g2

0x33dc,	// (0x00011b72) cell_highlight_pane_g3

0x33e4,	// (0x00011b7a) cell_highlight_pane_g4

0x33ec,	// (0x00011b82) cell_highlight_pane_g5

0x33f4,	// (0x00011b8a) cell_highlight_pane_g6

0x33fc,	// (0x00011b92) cell_highlight_pane_g7

0x3404,	// (0x00011b9a) cell_highlight_pane_g8

0x340c,	// (0x00011ba2) cell_highlight_pane_g9

0x23cd,	// (0x00010b63) cell_highlight_pane_g10

0x0009,

0xf6cb,	// (0x0001de61) cell_highlight_pane_g

0x3880,	// (0x00012016) bg_scroll_pane

0xd92f,	// (0x0001c0c5) scroll_handle_pane

0x38c7,	// (0x0001205d) scroll_bg_pane_g1

0x38dc,	// (0x00012072) scroll_bg_pane_g2

0x38f4,	// (0x0001208a) scroll_bg_pane_g3

0x0002,

0xf722,	// (0x0001deb8) scroll_bg_pane_g

0x3909,	// (0x0001209f) scroll_handle_focus_pane_ParamLimits

0x3909,	// (0x0001209f) scroll_handle_focus_pane

0x38c7,	// (0x0001205d) scroll_handle_pane_g1

0x3916,	// (0x000120ac) scroll_handle_pane_g2

0x38f4,	// (0x0001208a) scroll_handle_pane_g3

0x0002,

0xf729,	// (0x0001debf) scroll_handle_pane_g

0x34c5,	// (0x00011c5b) bg_popup_sub_pane_cp21_ParamLimits

0x34c5,	// (0x00011c5b) bg_popup_sub_pane_cp21

0x392a,	// (0x000120c0) popup_fep_japan_predictive_window_t1_ParamLimits

0x392a,	// (0x000120c0) popup_fep_japan_predictive_window_t1

0x3941,	// (0x000120d7) popup_fep_japan_predictive_window_t2_ParamLimits

0x3941,	// (0x000120d7) popup_fep_japan_predictive_window_t2

0x3974,	// (0x0001210a) popup_fep_japan_predictive_window_t3_ParamLimits

0x3974,	// (0x0001210a) popup_fep_japan_predictive_window_t3

0x0002,

0xf730,	// (0x0001dec6) popup_fep_japan_predictive_window_t_ParamLimits

0xf730,	// (0x0001dec6) popup_fep_japan_predictive_window_t

0x23d7,	// (0x00010b6d) bg_popup_sub_pane_cp23

0x39ab,	// (0x00012141) listscroll_japin_cand_pane

0x39b3,	// (0x00012149) popup_fep_japan_candidate_window_t1

0x39c1,	// (0x00012157) candidate_pane_ParamLimits

0x39c1,	// (0x00012157) candidate_pane

0x39d3,	// (0x00012169) scroll_pane_cp30

0x39db,	// (0x00012171) list_single_popup_jap_candidate_pane_ParamLimits

0x39db,	// (0x00012171) list_single_popup_jap_candidate_pane

0x23d7,	// (0x00010b6d) list_highlight_pane_cp30

0x39ef,	// (0x00012185) list_single_popup_jap_candidate_pane_t1

0x39fe,	// (0x00012194) level_1_signal

0x3a0b,	// (0x000121a1) level_2_signal

0x3a18,	// (0x000121ae) level_3_signal

0x3a25,	// (0x000121bb) level_4_signal

0x3a32,	// (0x000121c8) level_5_signal

0x3a3f,	// (0x000121d5) level_6_signal

0x3a4c,	// (0x000121e2) level_7_signal

0x39fe,	// (0x00012194) level_1_battery

0x3a0b,	// (0x000121a1) level_2_battery

0x3a18,	// (0x000121ae) level_3_battery

0x3a25,	// (0x000121bb) level_4_battery

0x3a32,	// (0x000121c8) level_5_battery

0x3a3f,	// (0x000121d5) level_6_battery

0x3a4c,	// (0x000121e2) level_7_battery

0x3a71,	// (0x00012207) list_menu_pane_ParamLimits

0x3a71,	// (0x00012207) list_menu_pane

0x3a82,	// (0x00012218) scroll_pane_cp25_ParamLimits

0x3a82,	// (0x00012218) scroll_pane_cp25

0x3a9b,	// (0x00012231) list_double2_graphic_pane_cp2_ParamLimits

0x3a9b,	// (0x00012231) list_double2_graphic_pane_cp2

0x3a9b,	// (0x00012231) list_double2_large_graphic_pane_cp2_ParamLimits

0x3a9b,	// (0x00012231) list_double2_large_graphic_pane_cp2

0x3a9b,	// (0x00012231) list_double2_pane_cp2_ParamLimits

0x3a9b,	// (0x00012231) list_double2_pane_cp2

0x3a9b,	// (0x00012231) list_double_graphic_pane_cp2_ParamLimits

0x3a9b,	// (0x00012231) list_double_graphic_pane_cp2

0x3a9b,	// (0x00012231) list_double_large_graphic_pane_cp2_ParamLimits

0x3a9b,	// (0x00012231) list_double_large_graphic_pane_cp2

0x3a9b,	// (0x00012231) list_double_number_pane_cp2_ParamLimits

0x3a9b,	// (0x00012231) list_double_number_pane_cp2

0x3a9b,	// (0x00012231) list_double_pane_cp2_ParamLimits

0x3a9b,	// (0x00012231) list_double_pane_cp2

0x3abd,	// (0x00012253) list_single_2graphic_pane_cp2_ParamLimits

0x3abd,	// (0x00012253) list_single_2graphic_pane_cp2

0x3abd,	// (0x00012253) list_single_graphic_heading_pane_cp2_ParamLimits

0x3abd,	// (0x00012253) list_single_graphic_heading_pane_cp2

0x3abd,	// (0x00012253) list_single_graphic_pane_cp2_ParamLimits

0x3abd,	// (0x00012253) list_single_graphic_pane_cp2

0x3abd,	// (0x00012253) list_single_heading_pane_cp2_ParamLimits

0x3abd,	// (0x00012253) list_single_heading_pane_cp2

0x3ad4,	// (0x0001226a) list_single_large_graphic_pane_cp2_ParamLimits

0x3ad4,	// (0x0001226a) list_single_large_graphic_pane_cp2

0x3abd,	// (0x00012253) list_single_number_heading_pane_cp2_ParamLimits

0x3abd,	// (0x00012253) list_single_number_heading_pane_cp2

0x3abd,	// (0x00012253) list_single_number_pane_cp2_ParamLimits

0x3abd,	// (0x00012253) list_single_number_pane_cp2

0x3abd,	// (0x00012253) list_single_pane_cp2_ParamLimits

0x3abd,	// (0x00012253) list_single_pane_cp2

0x3b2a,	// (0x000122c0) bg_popup_sub_pane_cp22

0xd9e1,	// (0x0001c177) popup_side_volume_key_window_g1

0xda0b,	// (0x0001c1a1) popup_side_volume_key_window_t1

0xda27,	// (0x0001c1bd) volume_small_pane_cp1

0x274c,	// (0x00010ee2) bg_popup_sub_pane_cp24_ParamLimits

0x274c,	// (0x00010ee2) bg_popup_sub_pane_cp24

0x3b40,	// (0x000122d6) fep_china_uni_candidate_pane_ParamLimits

0x3b40,	// (0x000122d6) fep_china_uni_candidate_pane

0x3b54,	// (0x000122ea) fep_china_uni_entry_pane

0x3b64,	// (0x000122fa) popup_fep_china_uni_window_g1

0x3b80,	// (0x00012316) fep_china_uni_entry_pane_g1

0x3b88,	// (0x0001231e) fep_china_uni_entry_pane_g2

0x0001,

0xf75d,	// (0x0001def3) fep_china_uni_entry_pane_g

0x3b90,	// (0x00012326) fep_entry_item_pane

0x3b9a,	// (0x00012330) fep_candidate_item_pane

0x3ba2,	// (0x00012338) fep_china_uni_candidate_pane_g1

0x3baa,	// (0x00012340) fep_china_uni_candidate_pane_g2

0x3bb2,	// (0x00012348) fep_china_uni_candidate_pane_g3

0x3bba,	// (0x00012350) fep_china_uni_candidate_pane_g4

0x0003,

0xf762,	// (0x0001def8) fep_china_uni_candidate_pane_g

0x23cd,	// (0x00010b63) fep_entry_item_pane_g1

0x3bc2,	// (0x00012358) fep_entry_item_pane_t1_ParamLimits

0x3bc2,	// (0x00012358) fep_entry_item_pane_t1

0x3bd8,	// (0x0001236e) fep_candidate_item_pane_t1_ParamLimits

0x3bd8,	// (0x0001236e) fep_candidate_item_pane_t1

0x3bed,	// (0x00012383) fep_candidate_item_pane_t2_ParamLimits

0x3bed,	// (0x00012383) fep_candidate_item_pane_t2

0x0001,

0xf76b,	// (0x0001df01) fep_candidate_item_pane_t_ParamLimits

0xf76b,	// (0x0001df01) fep_candidate_item_pane_t

0x24b7,	// (0x00010c4d) list_highlight_pane_cp31_ParamLimits

0x24b7,	// (0x00010c4d) list_highlight_pane_cp31

0x3bff,	// (0x00012395) level_1_signal_lsc

0x3c08,	// (0x0001239e) level_2_signal_lsc

0x3c11,	// (0x000123a7) level_3_signal_lsc

0x3c1a,	// (0x000123b0) level_4_signal_lsc

0x3c23,	// (0x000123b9) level_5_signal_lsc

0x3c2c,	// (0x000123c2) level_6_signal_lsc

0x3c35,	// (0x000123cb) level_7_signal_lsc

0x3c35,	// (0x000123cb) level_1_battery_lsc

0x3c3e,	// (0x000123d4) level_2_battery_lsc

0x3c47,	// (0x000123dd) level_3_battery_lsc

0x3c50,	// (0x000123e6) level_4_battery_lsc

0x3c59,	// (0x000123ef) level_5_battery_lsc

0x3c62,	// (0x000123f8) level_6_battery_lsc

0x3bff,	// (0x00012395) level_7_battery_lsc

0x3c6b,	// (0x00012401) scroll_handle_focus_pane_g1

0x3c74,	// (0x0001240a) scroll_handle_focus_pane_g2

0x3c7d,	// (0x00012413) scroll_handle_focus_pane_g3

0x0002,

0xf770,	// (0x0001df06) scroll_handle_focus_pane_g

0xca75,	// (0x0001b20b) list_single_2graphic_pane_g1_ParamLimits

0xca75,	// (0x0001b20b) list_single_2graphic_pane_g1

0xc468,	// (0x0001abfe) list_single_2graphic_pane_g2_ParamLimits

0xc468,	// (0x0001abfe) list_single_2graphic_pane_g2

0xc3ee,	// (0x0001ab84) list_single_2graphic_pane_g3_ParamLimits

0xc3ee,	// (0x0001ab84) list_single_2graphic_pane_g3

0xca81,	// (0x0001b217) list_single_2graphic_pane_g4_ParamLimits

0xca81,	// (0x0001b217) list_single_2graphic_pane_g4

0x0003,

0xf777,	// (0x0001df0d) list_single_2graphic_pane_g_ParamLimits

0xf777,	// (0x0001df0d) list_single_2graphic_pane_g

0xca8d,	// (0x0001b223) list_single_2graphic_pane_t1_ParamLimits

0xca8d,	// (0x0001b223) list_single_2graphic_pane_t1

0xcabb,	// (0x0001b251) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xcabb,	// (0x0001b251) list_double2_graphic_large_graphic_pane_g1

0xc50d,	// (0x0001aca3) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xc50d,	// (0x0001aca3) list_double2_graphic_large_graphic_pane_g2

0xc4d9,	// (0x0001ac6f) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xc4d9,	// (0x0001ac6f) list_double2_graphic_large_graphic_pane_g3

0xcacd,	// (0x0001b263) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xcacd,	// (0x0001b263) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf780,	// (0x0001df16) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf780,	// (0x0001df16) list_double2_graphic_large_graphic_pane_g

0xcad9,	// (0x0001b26f) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xcad9,	// (0x0001b26f) list_double2_graphic_large_graphic_pane_t1

0xcaef,	// (0x0001b285) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xcaef,	// (0x0001b285) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf789,	// (0x0001df1f) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf789,	// (0x0001df1f) list_double2_graphic_large_graphic_pane_t

0x3e57,	// (0x000125ed) popup_fast_swap_window_ParamLimits

0x3e57,	// (0x000125ed) popup_fast_swap_window

0x3e73,	// (0x00012609) popup_side_volume_key_window

0x3e8d,	// (0x00012623) stacon_top_pane

0x3e97,	// (0x0001262d) status_pane_ParamLimits

0x3e97,	// (0x0001262d) status_pane

0x3e8d,	// (0x00012623) status_small_pane

0x23d7,	// (0x00010b6d) control_pane

0x23d7,	// (0x00010b6d) stacon_bottom_pane

0x31af,	// (0x00011945) scroll_pane_cp121

0x31a6,	// (0x0001193c) set_content_pane

0x3d27,	// (0x000124bd) bg_active_tab_pane_g1_cp1

0x3d1e,	// (0x000124b4) bg_active_tab_pane_g2_cp1

0x3d15,	// (0x000124ab) bg_active_tab_pane_g3_cp1

0x3d27,	// (0x000124bd) bg_passive_tab_pane_g1_cp1

0x3d1e,	// (0x000124b4) bg_passive_tab_pane_g2_cp1

0x3d15,	// (0x000124ab) bg_passive_tab_pane_g3_cp1

0x3d39,	// (0x000124cf) bg_active_tab_pane_g1_cp2

0x3d1e,	// (0x000124b4) bg_active_tab_pane_g2_cp2

0x3d30,	// (0x000124c6) bg_active_tab_pane_g3_cp2

0x3d39,	// (0x000124cf) bg_passive_tab_pane_g1_cp2

0x3d1e,	// (0x000124b4) bg_passive_tab_pane_g2_cp2

0x3d30,	// (0x000124c6) bg_passive_tab_pane_g3_cp2

0x3d4b,	// (0x000124e1) bg_active_tab_pane_g1_cp3

0x3d1e,	// (0x000124b4) bg_active_tab_pane_g2_cp3

0x3d42,	// (0x000124d8) bg_active_tab_pane_g3_cp3

0x3d4b,	// (0x000124e1) bg_passive_tab_pane_g1_cp3

0x3d1e,	// (0x000124b4) bg_passive_tab_pane_g2_cp3

0x3d42,	// (0x000124d8) bg_passive_tab_pane_g3_cp3

0x3d5f,	// (0x000124f5) bg_active_tab_pane_g1_cp4

0x3d1e,	// (0x000124b4) bg_active_tab_pane_g2_cp4

0x3d54,	// (0x000124ea) bg_active_tab_pane_g3_cp4

0x3d5f,	// (0x000124f5) bg_passive_tab_pane_g1_cp4

0x3d1e,	// (0x000124b4) bg_passive_tab_pane_g2_cp4

0x3d54,	// (0x000124ea) bg_passive_tab_pane_g3_cp4

0x3db1,	// (0x00012547) bg_active_tab_pane_g1_cp5

0x3d1e,	// (0x000124b4) bg_active_tab_pane_g2_cp5

0x3da8,	// (0x0001253e) bg_active_tab_pane_g3_cp5

0x3db1,	// (0x00012547) bg_passive_tab_pane_g1_cp5

0x3d1e,	// (0x000124b4) bg_passive_tab_pane_g2_cp5

0x3da8,	// (0x0001253e) bg_passive_tab_pane_g3_cp5

0x3dba,	// (0x00012550) list_set_graphic_pane_ParamLimits

0x3dba,	// (0x00012550) list_set_graphic_pane

0x23d7,	// (0x00010b6d) bg_set_opt_pane_cp4

0x3dd8,	// (0x0001256e) list_set_graphic_pane_g1_ParamLimits

0x3dd8,	// (0x0001256e) list_set_graphic_pane_g1

0x3de4,	// (0x0001257a) list_set_graphic_pane_g2_ParamLimits

0x3de4,	// (0x0001257a) list_set_graphic_pane_g2

0x0001,

0xf78e,	// (0x0001df24) list_set_graphic_pane_g_ParamLimits

0xf78e,	// (0x0001df24) list_set_graphic_pane_g

0x0009,

0xfaed,	// (0x0001e283) volume_small_pane_cp_g

0x3e08,	// (0x0001259e) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x3e08,	// (0x0001259e) list_double2_large_graphic_pane_g1_cp2

0x3e16,	// (0x000125ac) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x3e16,	// (0x000125ac) list_double2_large_graphic_pane_g2_cp2

0x3e27,	// (0x000125bd) list_double2_large_graphic_pane_g3_cp2

0x3e2f,	// (0x000125c5) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x3e2f,	// (0x000125c5) list_double2_large_graphic_pane_t1_cp2

0x3e45,	// (0x000125db) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x3e45,	// (0x000125db) list_double2_large_graphic_pane_t2_cp2

0x609d,	// (0x00014833) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x609d,	// (0x00014833) list_double_large_graphic_pane_g1_cp2

0x60b0,	// (0x00014846) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x60b0,	// (0x00014846) list_double_large_graphic_pane_g2_cp2

0x3fb5,	// (0x0001274b) list_double_large_graphic_pane_g3_cp2

0x60c1,	// (0x00014857) list_double_large_graphic_pane_g4_cp

0x60c9,	// (0x0001485f) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x60c9,	// (0x0001485f) list_double_large_graphic_pane_t1_cp2

0x60e0,	// (0x00014876) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x60e0,	// (0x00014876) list_double_large_graphic_pane_t2_cp2

0x3ea5,	// (0x0001263b) list_double2_graphic_pane_g1_cp2_ParamLimits

0x3ea5,	// (0x0001263b) list_double2_graphic_pane_g1_cp2

0x3eb3,	// (0x00012649) list_double2_graphic_pane_g2_cp2_ParamLimits

0x3eb3,	// (0x00012649) list_double2_graphic_pane_g2_cp2

0x3ec4,	// (0x0001265a) list_double2_graphic_pane_g3_cp2

0x3ece,	// (0x00012664) list_double2_graphic_pane_t1_cp2_ParamLimits

0x3ece,	// (0x00012664) list_double2_graphic_pane_t1_cp2

0x3ee4,	// (0x0001267a) list_double2_graphic_pane_t2_cp2_ParamLimits

0x3ee4,	// (0x0001267a) list_double2_graphic_pane_t2_cp2

0x3ef6,	// (0x0001268c) list_single_number_heading_pane_g1_cp2_ParamLimits

0x3ef6,	// (0x0001268c) list_single_number_heading_pane_g1_cp2

0x3f02,	// (0x00012698) list_single_number_heading_pane_g2_cp2

0x3f0a,	// (0x000126a0) list_single_number_heading_pane_t1_cp2_ParamLimits

0x3f0a,	// (0x000126a0) list_single_number_heading_pane_t1_cp2

0x3f20,	// (0x000126b6) list_single_number_heading_pane_t2_cp2_ParamLimits

0x3f20,	// (0x000126b6) list_single_number_heading_pane_t2_cp2

0x3f34,	// (0x000126ca) list_single_number_heading_pane_t3_cp2_ParamLimits

0x3f34,	// (0x000126ca) list_single_number_heading_pane_t3_cp2

0x3ef6,	// (0x0001268c) list_single_heading_pane_g1_cp2_ParamLimits

0x3ef6,	// (0x0001268c) list_single_heading_pane_g1_cp2

0x3f02,	// (0x00012698) list_single_heading_pane_g2_cp2

0x3f0a,	// (0x000126a0) list_single_heading_pane_t1_cp2_ParamLimits

0x3f0a,	// (0x000126a0) list_single_heading_pane_t1_cp2

0x5ea5,	// (0x0001463b) list_single_heading_pane_t2_cp2_ParamLimits

0x5ea5,	// (0x0001463b) list_single_heading_pane_t2_cp2

0x5de7,	// (0x0001457d) list_double_graphic_pane_g1_cp2_ParamLimits

0x5de7,	// (0x0001457d) list_double_graphic_pane_g1_cp2

0x5df3,	// (0x00014589) list_double_graphic_pane_g2_cp2_ParamLimits

0x5df3,	// (0x00014589) list_double_graphic_pane_g2_cp2

0x5e02,	// (0x00014598) list_double_graphic_pane_g3_cp2

0x5e0a,	// (0x000145a0) list_double_graphic_pane_t1_cp2_ParamLimits

0x5e0a,	// (0x000145a0) list_double_graphic_pane_t1_cp2

0x5e20,	// (0x000145b6) list_double_graphic_pane_t2_cp2_ParamLimits

0x5e20,	// (0x000145b6) list_double_graphic_pane_t2_cp2

0x3fa9,	// (0x0001273f) list_double_number_pane_g1_cp2_ParamLimits

0x3fa9,	// (0x0001273f) list_double_number_pane_g1_cp2

0x3fb5,	// (0x0001274b) list_double_number_pane_g2_cp2

0x5dab,	// (0x00014541) list_double_number_pane_t1_cp2_ParamLimits

0x5dab,	// (0x00014541) list_double_number_pane_t1_cp2

0x5dbf,	// (0x00014555) list_double_number_pane_t2_cp2_ParamLimits

0x5dbf,	// (0x00014555) list_double_number_pane_t2_cp2

0x5dd5,	// (0x0001456b) list_double_number_pane_t3_cp2_ParamLimits

0x5dd5,	// (0x0001456b) list_double_number_pane_t3_cp2

0x5c94,	// (0x0001442a) list_single_graphic_pane_g1_cp2_ParamLimits

0x5c94,	// (0x0001442a) list_single_graphic_pane_g1_cp2

0x400d,	// (0x000127a3) list_single_graphic_pane_g2_cp2_ParamLimits

0x400d,	// (0x000127a3) list_single_graphic_pane_g2_cp2

0x4019,	// (0x000127af) list_single_graphic_pane_g3_cp2

0x5c6a,	// (0x00014400) list_single_graphic_pane_t1_cp2_ParamLimits

0x5c6a,	// (0x00014400) list_single_graphic_pane_t1_cp2

0x400d,	// (0x000127a3) list_single_number_pane_g1_cp2_ParamLimits

0x400d,	// (0x000127a3) list_single_number_pane_g1_cp2

0x4019,	// (0x000127af) list_single_number_pane_g2_cp2

0x5c6a,	// (0x00014400) list_single_number_pane_t1_cp2_ParamLimits

0x5c6a,	// (0x00014400) list_single_number_pane_t1_cp2

0x5c80,	// (0x00014416) list_single_number_pane_t2_cp2_ParamLimits

0x5c80,	// (0x00014416) list_single_number_pane_t2_cp2

0x3e16,	// (0x000125ac) list_double2_pane_g1_cp2_ParamLimits

0x3e16,	// (0x000125ac) list_double2_pane_g1_cp2

0x3e27,	// (0x000125bd) list_double2_pane_g2_cp2

0x3f81,	// (0x00012717) list_double2_pane_t1_cp2_ParamLimits

0x3f81,	// (0x00012717) list_double2_pane_t1_cp2

0x3f97,	// (0x0001272d) list_double2_pane_t2_cp2_ParamLimits

0x3f97,	// (0x0001272d) list_double2_pane_t2_cp2

0x3fa9,	// (0x0001273f) list_double_pane_g1_cp2_ParamLimits

0x3fa9,	// (0x0001273f) list_double_pane_g1_cp2

0x3fb5,	// (0x0001274b) list_double_pane_g2_cp2

0x3fbd,	// (0x00012753) list_double_pane_t1_cp2_ParamLimits

0x3fbd,	// (0x00012753) list_double_pane_t1_cp2

0x3fd3,	// (0x00012769) list_double_pane_t2_cp2_ParamLimits

0x3fd3,	// (0x00012769) list_double_pane_t2_cp2

0x3ffd,	// (0x00012793) list_single_pane_cp2_g3

0x400d,	// (0x000127a3) list_single_pane_g1_cp2_ParamLimits

0x400d,	// (0x000127a3) list_single_pane_g1_cp2

0x4019,	// (0x000127af) list_single_pane_g2_cp2

0x4021,	// (0x000127b7) list_single_pane_t1_cp2_ParamLimits

0x4021,	// (0x000127b7) list_single_pane_t1_cp2

0x4039,	// (0x000127cf) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x4039,	// (0x000127cf) list_single_large_graphic_pane_g1_cp2

0x4047,	// (0x000127dd) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4047,	// (0x000127dd) list_single_large_graphic_pane_g2_cp2

0x4053,	// (0x000127e9) list_single_large_graphic_pane_g3_cp2

0x405b,	// (0x000127f1) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x405b,	// (0x000127f1) list_single_large_graphic_pane_g4_cp1

0x4075,	// (0x0001280b) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4075,	// (0x0001280b) list_single_large_graphic_pane_t1_cp2

0x5c34,	// (0x000143ca) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5c34,	// (0x000143ca) list_single_graphic_heading_pane_g1_cp2

0x5c01,	// (0x00014397) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5c01,	// (0x00014397) list_single_graphic_heading_pane_g4_cp2

0x4019,	// (0x000127af) list_single_graphic_heading_pane_g5_cp2

0x5c40,	// (0x000143d6) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5c40,	// (0x000143d6) list_single_graphic_heading_pane_t1_cp2

0x5c56,	// (0x000143ec) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5c56,	// (0x000143ec) list_single_graphic_heading_pane_t2_cp2

0x5bf5,	// (0x0001438b) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5bf5,	// (0x0001438b) list_single_2graphic_pane_g1_cp2

0x5c01,	// (0x00014397) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5c01,	// (0x00014397) list_single_2graphic_pane_g2_cp2

0x4019,	// (0x000127af) list_single_2graphic_pane_g3_cp2

0x5c12,	// (0x000143a8) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5c12,	// (0x000143a8) list_single_2graphic_pane_g4_cp2

0x5c1e,	// (0x000143b4) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5c1e,	// (0x000143b4) list_single_2graphic_pane_t1_cp2

0x23cd,	// (0x00010b63) list_highlight_pane_g10_cp1

0x57dd,	// (0x00013f73) list_highlight_pane_g1_cp1

0x57e5,	// (0x00013f7b) list_highlight_pane_g2_cp1

0x57ed,	// (0x00013f83) list_highlight_pane_g3_cp1

0x57f5,	// (0x00013f8b) list_highlight_pane_g4_cp1

0x57fd,	// (0x00013f93) list_highlight_pane_g5_cp1

0x5805,	// (0x00013f9b) list_highlight_pane_g6_cp1

0x580d,	// (0x00013fa3) list_highlight_pane_g7_cp1

0x5815,	// (0x00013fab) list_highlight_pane_g8_cp1

0x581d,	// (0x00013fb3) list_highlight_pane_g9_cp1

0x56f5,	// (0x00013e8b) form_field_slider_pane_t3

0x5703,	// (0x00013e99) form_field_slider_pane_t4

0x5711,	// (0x00013ea7) slider_form_pane_ParamLimits

0x5711,	// (0x00013ea7) slider_form_pane

0x23d7,	// (0x00010b6d) control_abbreviations

0x23d7,	// (0x00010b6d) control_conventions

0x23d7,	// (0x00010b6d) control_definitions

0x23d7,	// (0x00010b6d) format_table_attribute

0x5ef1,	// (0x00014687) bg_popup_preview_window_pane_g9

0x23d7,	// (0x00010b6d) format_table_data2

0x23d7,	// (0x00010b6d) format_table_data3

0x23d7,	// (0x00010b6d) format_table_data_example

0x0008,

0x23d7,	// (0x00010b6d) intro_purpose

0xf917,	// (0x0001e0ad) bg_popup_preview_window_pane_g

0x23d7,	// (0x00010b6d) texts_category

0x23d7,	// (0x00010b6d) texts_graphics

0x408b,	// (0x00012821) text_digital

0x409a,	// (0x00012830) text_primary

0x40a9,	// (0x0001283f) text_primary_small

0x40b8,	// (0x0001284e) text_secondary

0x40c7,	// (0x0001285d) text_title

0x6732,	// (0x00014ec8) bg_passive_tab_pane_g1_cp3_srt

0x3d1e,	// (0x000124b4) bg_passive_tab_pane_g2_cp3_srt

0x6729,	// (0x00014ebf) bg_passive_tab_pane_g3_cp3_srt

0x24b7,	// (0x00010c4d) bg_active_tab_pane_cp3_srt_ParamLimits

0x24b7,	// (0x00010c4d) bg_active_tab_pane_cp3_srt

0x673b,	// (0x00014ed1) tabs_4_active_pane_srt_g1

0x6743,	// (0x00014ed9) tabs_4_active_pane_srt_t1_ParamLimits

0x6743,	// (0x00014ed9) tabs_4_active_pane_srt_t1

0x6732,	// (0x00014ec8) bg_active_tab_pane_g1_cp3_copy1

0x3d1e,	// (0x000124b4) bg_active_tab_pane_g2_cp3_copy1

0x6729,	// (0x00014ebf) bg_active_tab_pane_g3_cp3_copy1

0x24b7,	// (0x00010c4d) tabs_2_long_active_pane_srt_ParamLimits

0x24b7,	// (0x00010c4d) tabs_2_long_active_pane_srt

0x24b7,	// (0x00010c4d) tabs_2_long_passive_pane_srt_ParamLimits

0x24b7,	// (0x00010c4d) tabs_2_long_passive_pane_srt

0x35f6,	// (0x00011d8c) bg_passive_tab_pane_cp4_srt_ParamLimits

0x35f6,	// (0x00011d8c) bg_passive_tab_pane_cp4_srt

0x6367,	// (0x00014afd) bg_passive_tab_pane_g1_cp4_srt

0x3d1e,	// (0x000124b4) bg_passive_tab_pane_g2_cp4_srt

0x635e,	// (0x00014af4) bg_passive_tab_pane_g3_cp4_srt

0x35d5,	// (0x00011d6b) bg_active_tab_pane_cp4_srt_ParamLimits

0x35d5,	// (0x00011d6b) bg_active_tab_pane_cp4_srt

0x6370,	// (0x00014b06) tabs_2_long_active_pane_srt_t1_ParamLimits

0x6370,	// (0x00014b06) tabs_2_long_active_pane_srt_t1

0x6367,	// (0x00014afd) bg_active_tab_pane_g1_cp4_srt

0x3d1e,	// (0x000124b4) bg_active_tab_pane_g2_cp4_srt

0x635e,	// (0x00014af4) bg_active_tab_pane_g3_cp4_srt

0x274c,	// (0x00010ee2) tabs_3_long_active_pane_srt_ParamLimits

0x274c,	// (0x00010ee2) tabs_3_long_active_pane_srt

0x274c,	// (0x00010ee2) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x274c,	// (0x00010ee2) tabs_3_long_passive_pane_cp_srt

0x274c,	// (0x00010ee2) tabs_3_long_passive_pane_srt_ParamLimits

0x274c,	// (0x00010ee2) tabs_3_long_passive_pane_srt

0x35f6,	// (0x00011d8c) bg_passive_tab_pane_cp5_srt_ParamLimits

0x35f6,	// (0x00011d8c) bg_passive_tab_pane_cp5_srt

0x3db1,	// (0x00012547) bg_passive_tab_pane_g1_cp5_srt

0x3d1e,	// (0x000124b4) bg_passive_tab_pane_g2_cp5_srt

0x3da8,	// (0x0001253e) bg_passive_tab_pane_g3_cp5_srt

0x35d5,	// (0x00011d6b) bg_active_tab_pane_cp5_srt_ParamLimits

0x35d5,	// (0x00011d6b) bg_active_tab_pane_cp5_srt

0x634c,	// (0x00014ae2) tabs_3_long_active_pane_srt_t1_ParamLimits

0x634c,	// (0x00014ae2) tabs_3_long_active_pane_srt_t1

0x3db1,	// (0x00012547) bg_active_tab_pane_g1_cp5_srt

0x3d1e,	// (0x000124b4) bg_active_tab_pane_g2_cp5_srt

0x3da8,	// (0x0001253e) bg_active_tab_pane_g3_cp5_srt

0x633e,	// (0x00014ad4) navi_text_pane_srt_t1

0x6336,	// (0x00014acc) navi_icon_pane_srt_g1

0x4296,	// (0x00012a2c) midp_editing_number_pane_srt

0x40d6,	// (0x0001286c) midp_ticker_pane_srt

0x429e,	// (0x00012a34) midp_ticker_pane_srt_g1

0x42a6,	// (0x00012a3c) midp_ticker_pane_srt_g2

0x0001,

0xf7ad,	// (0x0001df43) midp_ticker_pane_srt_g

0x42ae,	// (0x00012a44) midp_ticker_pane_srt_t1

0x6327,	// (0x00014abd) midp_editing_number_pane_t1_copy1

0x40de,	// (0x00012874) listscroll_midp_pane

0x40de,	// (0x00012874) midp_form_pane

0x414e,	// (0x000128e4) midp_info_popup_window_ParamLimits

0x414e,	// (0x000128e4) midp_info_popup_window

0x34c5,	// (0x00011c5b) bg_popup_sub_pane_cp50_ParamLimits

0x34c5,	// (0x00011c5b) bg_popup_sub_pane_cp50

0x5443,	// (0x00013bd9) listscroll_midp_info_pane_ParamLimits

0x5443,	// (0x00013bd9) listscroll_midp_info_pane

0x542b,	// (0x00013bc1) listscroll_form_midp_pane_ParamLimits

0x542b,	// (0x00013bc1) listscroll_form_midp_pane

0x5437,	// (0x00013bcd) scroll_bar_cp050

0x540b,	// (0x00013ba1) list_midp_pane

0x72da,	// (0x00015a70) signal_pane_g2_cp

0x5345,	// (0x00013adb) listscroll_midp_info_pane_t1_ParamLimits

0x5345,	// (0x00013adb) listscroll_midp_info_pane_t1

0x535d,	// (0x00013af3) listscroll_midp_info_pane_t2_ParamLimits

0x535d,	// (0x00013af3) listscroll_midp_info_pane_t2

0x539b,	// (0x00013b31) listscroll_midp_info_pane_t3_ParamLimits

0x539b,	// (0x00013b31) listscroll_midp_info_pane_t3

0x53d5,	// (0x00013b6b) listscroll_midp_info_pane_t4_ParamLimits

0x53d5,	// (0x00013b6b) listscroll_midp_info_pane_t4

0x0003,

0xf852,	// (0x0001dfe8) listscroll_midp_info_pane_t_ParamLimits

0xf852,	// (0x0001dfe8) listscroll_midp_info_pane_t

0x3583,	// (0x00011d19) scroll_pane_cp21

0x52e9,	// (0x00013a7f) form_midp_field_choice_group_pane

0x52f2,	// (0x00013a88) form_midp_field_text_pane

0x532b,	// (0x00013ac1) form_midp_field_time_pane

0x5333,	// (0x00013ac9) form_midp_gauge_slider_pane

0x533c,	// (0x00013ad2) form_midp_gauge_wait_pane

0x23d7,	// (0x00010b6d) form_midp_image_pane

0xcbc4,	// (0x0001b35a) list_single_midp_pane_ParamLimits

0xcbc4,	// (0x0001b35a) list_single_midp_pane

0x525d,	// (0x000139f3) form_midp_field_text_pane_t1

0x5028,	// (0x000137be) input_focus_pane_cp050

0x529c,	// (0x00013a32) list_midp_form_text_pane

0x522c,	// (0x000139c2) form_midp_field_choice_group_pane_t1

0x523a,	// (0x000139d0) input_focus_pane_cp051

0x524e,	// (0x000139e4) list_midp_choice_pane

0x23d7,	// (0x00010b6d) status_idle_pane

0x5210,	// (0x000139a6) form_midp_field_time_pane_t1

0x23cd,	// (0x00010b63) wait_anim_pane_g2_copy1

0x521e,	// (0x000139b4) form_midp_field_time_pane_t2

0x0001,

0x41fe,	// (0x00012994) aid_navinavi_width_2_pane

0xf84d,	// (0x0001dfe3) form_midp_field_time_pane_t

0x23d7,	// (0x00010b6d) input_focus_pane_cp052

0x23d7,	// (0x00010b6d) bg_input_focus_pane_cp040

0x51d0,	// (0x00013966) form_midp_gauge_slider_pane_t1

0x51de,	// (0x00013974) form_midp_gauge_slider_pane_t2

0x51ec,	// (0x00013982) form_midp_gauge_slider_pane_t3

0x51fa,	// (0x00013990) form_midp_gauge_slider_pane_t4

0x0003,

0xf844,	// (0x0001dfda) form_midp_gauge_slider_pane_t

0x5208,	// (0x0001399e) form_midp_slider_pane

0x24b7,	// (0x00010c4d) bg_input_focus_pane_cp041_ParamLimits

0x24b7,	// (0x00010c4d) bg_input_focus_pane_cp041

0x519d,	// (0x00013933) form_midp_gauge_wait_pane_t1_ParamLimits

0x519d,	// (0x00013933) form_midp_gauge_wait_pane_t1

0x51af,	// (0x00013945) form_midp_gauge_wait_pane_t2_ParamLimits

0x51af,	// (0x00013945) form_midp_gauge_wait_pane_t2

0x0001,

0xf83f,	// (0x0001dfd5) form_midp_gauge_wait_pane_t_ParamLimits

0xf83f,	// (0x0001dfd5) form_midp_gauge_wait_pane_t

0x51c1,	// (0x00013957) form_midp_wait_pane_ParamLimits

0x51c1,	// (0x00013957) form_midp_wait_pane

0x5167,	// (0x000138fd) form_midp_image_pane_g1

0x5170,	// (0x00013906) form_midp_image_pane_t1

0x517f,	// (0x00013915) form_midp_image_pane_t2

0x518e,	// (0x00013924) form_midp_image_pane_t3

0x0002,

0xf838,	// (0x0001dfce) form_midp_image_pane_t

0x514f,	// (0x000138e5) list_single_midp_pane_g1

0xcbb5,	// (0x0001b34b) list_single_midp_pane_t1

0x511f,	// (0x000138b5) list_midp_form_item_pane_ParamLimits

0x511f,	// (0x000138b5) list_midp_form_item_pane

0x41a6,	// (0x0001293c) list_midp_form_item_pane_t1

0x41b5,	// (0x0001294b) midp_ticker_pane_g1

0x41c1,	// (0x00012957) midp_ticker_pane_g2

0x0001,

0xf793,	// (0x0001df29) midp_ticker_pane_g

0x41cd,	// (0x00012963) midp_ticker_pane_t1

0x659d,	// (0x00014d33) midp_editing_number_pane_t1

0x657b,	// (0x00014d11) midp_editing_number_pane

0x658a,	// (0x00014d20) midp_ticker_pane

0x62ef,	// (0x00014a85) ai_message_heading_pane

0x23d7,	// (0x00010b6d) bg_popup_window_pane_cp14

0x62f7,	// (0x00014a8d) listscroll_ai_message_pane

0x6279,	// (0x00014a0f) ai_message_heading_pane_g1_ParamLimits

0x6279,	// (0x00014a0f) ai_message_heading_pane_g1

0x6285,	// (0x00014a1b) ai_message_heading_pane_g2_ParamLimits

0x6285,	// (0x00014a1b) ai_message_heading_pane_g2

0x6291,	// (0x00014a27) ai_message_heading_pane_g3_ParamLimits

0x6291,	// (0x00014a27) ai_message_heading_pane_g3

0x629d,	// (0x00014a33) ai_message_heading_pane_g4_ParamLimits

0x629d,	// (0x00014a33) ai_message_heading_pane_g4

0x0003,

0xf979,	// (0x0001e10f) ai_message_heading_pane_g_ParamLimits

0xf979,	// (0x0001e10f) ai_message_heading_pane_g

0x62a9,	// (0x00014a3f) ai_message_heading_pane_t1_ParamLimits

0x62a9,	// (0x00014a3f) ai_message_heading_pane_t1

0x62c3,	// (0x00014a59) ai_message_heading_pane_t2_ParamLimits

0x62c3,	// (0x00014a59) ai_message_heading_pane_t2

0x0001,

0xf982,	// (0x0001e118) ai_message_heading_pane_t_ParamLimits

0xf982,	// (0x0001e118) ai_message_heading_pane_t

0x62d5,	// (0x00014a6b) bg_popup_heading_pane_cp1_ParamLimits

0x62d5,	// (0x00014a6b) bg_popup_heading_pane_cp1

0x6267,	// (0x000149fd) list_ai_message_pane_ParamLimits

0x6267,	// (0x000149fd) list_ai_message_pane

0x3583,	// (0x00011d19) scroll_pane_cp10

0x6203,	// (0x00014999) list_ai_message_pane_g1

0x620b,	// (0x000149a1) list_ai_message_pane_g2

0x0001,

0xf956,	// (0x0001e0ec) list_ai_message_pane_g

0x6213,	// (0x000149a9) list_ai_message_pane_t1_ParamLimits

0x6213,	// (0x000149a9) list_ai_message_pane_t1

0x6228,	// (0x000149be) list_ai_message_pane_t2_ParamLimits

0x6228,	// (0x000149be) list_ai_message_pane_t2

0x623d,	// (0x000149d3) list_ai_message_pane_t3_ParamLimits

0x623d,	// (0x000149d3) list_ai_message_pane_t3

0x6252,	// (0x000149e8) list_ai_message_pane_t4_ParamLimits

0x6252,	// (0x000149e8) list_ai_message_pane_t4

0x0003,

0xf95b,	// (0x0001e0f1) list_ai_message_pane_t_ParamLimits

0xf95b,	// (0x0001e0f1) list_ai_message_pane_t

0x61ed,	// (0x00014983) cell_ai_soft_ind_pane_ParamLimits

0x61ed,	// (0x00014983) cell_ai_soft_ind_pane

0x41df,	// (0x00012975) cell_ai_soft_ind_pane_g1_ParamLimits

0x41df,	// (0x00012975) cell_ai_soft_ind_pane_g1

0x23d7,	// (0x00010b6d) grid_highlight_cp1

0x41ec,	// (0x00012982) text_secondary_cp56_ParamLimits

0x41ec,	// (0x00012982) text_secondary_cp56

0x61c2,	// (0x00014958) example_general_pane_ParamLimits

0x61c2,	// (0x00014958) example_general_pane

0x61ce,	// (0x00014964) example_parent_pane_g1_ParamLimits

0x61ce,	// (0x00014964) example_parent_pane_g1

0x61da,	// (0x00014970) example_parent_pane_t1_ParamLimits

0x61da,	// (0x00014970) example_parent_pane_t1

0x47e9,	// (0x00012f7f) popup_preview_text_window_ParamLimits

0x47e9,	// (0x00012f7f) popup_preview_text_window

0x4005,	// (0x0001279b) list_single_pane_cp2_g4

0x27f6,	// (0x00010f8c) bg_popup_preview_window_pane_ParamLimits

0x27f6,	// (0x00010f8c) bg_popup_preview_window_pane

0x5ef9,	// (0x0001468f) popup_preview_text_window_t1_ParamLimits

0x5ef9,	// (0x0001468f) popup_preview_text_window_t1

0x5f17,	// (0x000146ad) popup_preview_text_window_t2_ParamLimits

0x5f17,	// (0x000146ad) popup_preview_text_window_t2

0x5f60,	// (0x000146f6) popup_preview_text_window_t3_ParamLimits

0x5f60,	// (0x000146f6) popup_preview_text_window_t3

0x5fa5,	// (0x0001473b) popup_preview_text_window_t4_ParamLimits

0x5fa5,	// (0x0001473b) popup_preview_text_window_t4

0x0004,

0xf92a,	// (0x0001e0c0) popup_preview_text_window_t_ParamLimits

0xf92a,	// (0x0001e0c0) popup_preview_text_window_t

0x6023,	// (0x000147b9) scroll_pane_cp11

0x4f0e,	// (0x000136a4) bg_popup_preview_window_pane_g1

0x5eb9,	// (0x0001464f) bg_popup_preview_window_pane_g2

0x5ec1,	// (0x00014657) bg_popup_preview_window_pane_g3

0x5ec9,	// (0x0001465f) bg_popup_preview_window_pane_g4

0x5ed1,	// (0x00014667) bg_popup_preview_window_pane_g5

0x5ed9,	// (0x0001466f) bg_popup_preview_window_pane_g6

0x5ee1,	// (0x00014677) bg_popup_preview_window_pane_g7

0x5ee9,	// (0x0001467f) bg_popup_preview_window_pane_g8

0xd33e,	// (0x0001bad4) aid_popup_width_pane

0x47c7,	// (0x00012f5d) popup_midp_note_alarm_window_ParamLimits

0x47c7,	// (0x00012f5d) popup_midp_note_alarm_window

0x3260,	// (0x000119f6) data_form_pane_ParamLimits

0xc8d4,	// (0x0001b06a) form_field_data_pane_g1

0xc8de,	// (0x0001b074) form_field_data_pane_t1_ParamLimits

0x3290,	// (0x00011a26) input_focus_pane_ParamLimits

0x329e,	// (0x00011a34) data_form_wide_pane_ParamLimits

0xc8f8,	// (0x0001b08e) form_field_data_wide_pane_g1

0xc904,	// (0x0001b09a) form_field_data_wide_pane_t1_ParamLimits

0x2a95,	// (0x0001122b) input_focus_pane_cp6_ParamLimits

0x352e,	// (0x00011cc4) input_popup_find_pane_g1_ParamLimits

0x352e,	// (0x00011cc4) input_popup_find_pane_g1

0xd890,	// (0x0001c026) aid_navi_side_left_pane

0xd8a5,	// (0x0001c03b) aid_navi_side_right_pane

0x58d8,	// (0x0001406e) bg_popup_window_pane_cp30_ParamLimits

0x58d8,	// (0x0001406e) bg_popup_window_pane_cp30

0x5952,	// (0x000140e8) popup_midp_note_alarm_window_g1_ParamLimits

0x5952,	// (0x000140e8) popup_midp_note_alarm_window_g1

0x5982,	// (0x00014118) popup_midp_note_alarm_window_t1_ParamLimits

0x5982,	// (0x00014118) popup_midp_note_alarm_window_t1

0x5a23,	// (0x000141b9) popup_midp_note_alarm_window_t2_ParamLimits

0x5a23,	// (0x000141b9) popup_midp_note_alarm_window_t2

0x5ad1,	// (0x00014267) popup_midp_note_alarm_window_t3_ParamLimits

0x5ad1,	// (0x00014267) popup_midp_note_alarm_window_t3

0x5af9,	// (0x0001428f) popup_midp_note_alarm_window_t4_ParamLimits

0x5af9,	// (0x0001428f) popup_midp_note_alarm_window_t4

0x5b19,	// (0x000142af) popup_midp_note_alarm_window_t5_ParamLimits

0x5b19,	// (0x000142af) popup_midp_note_alarm_window_t5

0x000a,

0xf8c7,	// (0x0001e05d) popup_midp_note_alarm_window_t_ParamLimits

0xf8c7,	// (0x0001e05d) popup_midp_note_alarm_window_t

0x5bc5,	// (0x0001435b) wait_bar_pane_cp1_ParamLimits

0x5bc5,	// (0x0001435b) wait_bar_pane_cp1

0x23d7,	// (0x00010b6d) wait_anim_pane_copy1

0x23d7,	// (0x00010b6d) wait_border_pane_copy1

0x55b6,	// (0x00013d4c) wait_border_pane_g1_copy1

0xc91e,	// (0x0001b0b4) form_field_popup_pane_g1

0xc926,	// (0x0001b0bc) form_field_popup_pane_t1_ParamLimits

0x3290,	// (0x00011a26) input_focus_pane_cp7_ParamLimits

0x3312,	// (0x00011aa8) list_form_pane_ParamLimits

0xc940,	// (0x0001b0d6) form_field_popup_wide_pane_g1

0xc948,	// (0x0001b0de) form_field_popup_wide_pane_t1_ParamLimits

0x3290,	// (0x00011a26) input_focus_pane_cp8_ParamLimits

0x333b,	// (0x00011ad1) list_form_wide_pane_ParamLimits

0x67b3,	// (0x00014f49) aid_size_cell_graphic_pane

0xc9cd,	// (0x0001b163) data_form_pane_t1_ParamLimits

0xcc13,	// (0x0001b3a9) data_form_wide_pane_t1_ParamLimits

0x4ac2,	// (0x00013258) bg_status_flat_pane

0x2417,	// (0x00010bad) title_pane_t1_ParamLimits

0x247f,	// (0x00010c15) title_pane_t2_ParamLimits

0x24a5,	// (0x00010c3b) title_pane_t3_ParamLimits

0xf59b,	// (0x0001dd31) title_pane_t_ParamLimits

0x39fe,	// (0x00012194) level_1_signal_ParamLimits

0x3a0b,	// (0x000121a1) level_2_signal_ParamLimits

0x3a18,	// (0x000121ae) level_3_signal_ParamLimits

0x3a25,	// (0x000121bb) level_4_signal_ParamLimits

0x3a32,	// (0x000121c8) level_5_signal_ParamLimits

0x3a3f,	// (0x000121d5) level_6_signal_ParamLimits

0x3a4c,	// (0x000121e2) level_7_signal_ParamLimits

0x39fe,	// (0x00012194) level_1_battery_ParamLimits

0x3a0b,	// (0x000121a1) level_2_battery_ParamLimits

0x3a18,	// (0x000121ae) level_3_battery_ParamLimits

0x3a25,	// (0x000121bb) level_4_battery_ParamLimits

0x3a32,	// (0x000121c8) level_5_battery_ParamLimits

0x3a3f,	// (0x000121d5) level_6_battery_ParamLimits

0x3a4c,	// (0x000121e2) level_7_battery_ParamLimits

0x57dd,	// (0x00013f73) bg_status_flat_pane_g1

0x57e5,	// (0x00013f7b) bg_status_flat_pane_g2

0x57ed,	// (0x00013f83) bg_status_flat_pane_g3

0x57f5,	// (0x00013f8b) bg_status_flat_pane_g4

0x57fd,	// (0x00013f93) bg_status_flat_pane_g5

0x5805,	// (0x00013f9b) bg_status_flat_pane_g6

0x580d,	// (0x00013fa3) bg_status_flat_pane_g7

0x24cd,	// (0x00010c63) tabs_3_active_pane_t1_ParamLimits

0x24cd,	// (0x00010c63) tabs_3_passive_pane_t1_ParamLimits

0x24e7,	// (0x00010c7d) tabs_4_active_pane_t1_ParamLimits

0x24e7,	// (0x00010c7d) tabs_4_1_passive_pane_t1_ParamLimits

0x35c3,	// (0x00011d59) tabs_2_active_pane_t1_ParamLimits

0x35c3,	// (0x00011d59) tabs_2_passive_pane_t1_ParamLimits

0x35d5,	// (0x00011d6b) bg_active_tab_pane_cp4_ParamLimits

0x35e3,	// (0x00011d79) tabs_2_long_active_pane_t1_ParamLimits

0x35f6,	// (0x00011d8c) bg_passive_tab_pane_cp4_ParamLimits

0xdde7,	// (0x0001c57d) list_single_midp_graphic_pane_t1_ParamLimits

0x35d5,	// (0x00011d6b) bg_active_tab_pane_cp5_ParamLimits

0x3602,	// (0x00011d98) tabs_3_long_active_pane_t1_ParamLimits

0x35f6,	// (0x00011d8c) bg_passive_tab_pane_cp5_ParamLimits

0xdde7,	// (0x0001c57d) list_single_midp_graphic_pane_t1

0x4ac2,	// (0x00013258) bg_status_flat_pane_ParamLimits

0x4b85,	// (0x0001331b) indicator_pane_cp2_ParamLimits

0x4b85,	// (0x0001331b) indicator_pane_cp2

0x4ca9,	// (0x0001343f) navi_pane_srt_ParamLimits

0x4ca9,	// (0x0001343f) navi_pane_srt

0x4ccd,	// (0x00013463) popup_clock_digital_analogue_window_cp1

0x25ae,	// (0x00010d44) indicator_pane_t1

0x40d6,	// (0x0001286c) copy_highlight_pane

0x40d6,	// (0x0001286c) cursor_graphics_pane

0x40d6,	// (0x0001286c) graphic_within_text_pane

0x40d6,	// (0x0001286c) link_highlight_pane

0x5fe6,	// (0x0001477c) popup_preview_text_window_t5_ParamLimits

0x5fe6,	// (0x0001477c) popup_preview_text_window_t5

0x4206,	// (0x0001299c) cursor_digital_pane

0x4206,	// (0x0001299c) cursor_primary_pane

0x4217,	// (0x000129ad) cursor_primary_small_pane

0x421f,	// (0x000129b5) cursor_secondary_pane

0x4227,	// (0x000129bd) cursor_title_pane

0x4206,	// (0x0001299c) link_highlight_digital_pane

0x420e,	// (0x000129a4) link_highlight_primary_pane

0x4217,	// (0x000129ad) link_highlight_primary_small_pane

0x421f,	// (0x000129b5) link_highlight_secondary_pane

0x4227,	// (0x000129bd) link_highlight_title_pane

0x4206,	// (0x0001299c) copy_highlight_digital_pane

0x4206,	// (0x0001299c) copy_highlight_primary_pane

0x4217,	// (0x000129ad) copy_highlight_primary_small_pane

0x421f,	// (0x000129b5) copy_highlight_secondary_pane

0x4227,	// (0x000129bd) copy_highlight_title_pane

0x421f,	// (0x000129b5) graphic_text_digital_pane

0x587b,	// (0x00014011) graphic_text_primary_pane

0x5884,	// (0x0001401a) graphic_text_primary_small_pane

0x4217,	// (0x000129ad) graphic_text_secondary_pane

0x4206,	// (0x0001299c) graphic_text_title_pane

0x422f,	// (0x000129c5) cursor_primary_pane_g1

0x586d,	// (0x00014003) cursor_text_primary_t1

0x5855,	// (0x00013feb) cursor_primary_small_pane_g1

0x585f,	// (0x00013ff5) cursor_text_primary_small_t1

0x583d,	// (0x00013fd3) cursor_primary_small_pane_g1_copy1

0x5847,	// (0x00013fdd) cursor_text_primary_small_t1_copy1

0x5825,	// (0x00013fbb) cursor_text_title_t1

0x5833,	// (0x00013fc9) cursor_title_pane_g1

0x422f,	// (0x000129c5) cursor_digital_pane_g1

0x4239,	// (0x000129cf) cursor_text_digital_t1

0x57c6,	// (0x00013f5c) link_highlight_primary_pane_g1

0x57ce,	// (0x00013f64) link_highlight_primary_pane_t1

0x4247,	// (0x000129dd) link_highlight_primary_small_pane_g1

0x424f,	// (0x000129e5) link_highlight_primary_small_pane_t1

0x4247,	// (0x000129dd) link_highlight_secondary_pane_g1

0x425e,	// (0x000129f4) link_highlight_secondary_pane_t1

0x573a,	// (0x00013ed0) link_highlight_title_pane_g1

0x5742,	// (0x00013ed8) link_highlight_title_pane_t1

0x5723,	// (0x00013eb9) link_highlight_digital_pane_g1

0x572b,	// (0x00013ec1) link_highlight_digital_pane_t1

0x55fb,	// (0x00013d91) copy_highlight_primary_pane_g1

0x5603,	// (0x00013d99) copy_highlight_primary_pane_t1

0x55d5,	// (0x00013d6b) copy_highlight_primary_small_pane_g1

0x55ec,	// (0x00013d82) copy_highlight_primary_small_pane_t1

0x426d,	// (0x00012a03) copy_highlight_secondary_pane_g1

0x4275,	// (0x00012a0b) copy_highlight_secondary_pane_t1

0x55d5,	// (0x00013d6b) copy_highlight_title_pane_g1

0x55dd,	// (0x00013d73) copy_highlight_title_pane_t1

0x55fb,	// (0x00013d91) copy_highlight_digital_pane_g1

0x6981,	// (0x00015117) copy_highlight_digital_pane_t1

0x68d5,	// (0x0001506b) graphic_text_primary_pane_g1

0x6965,	// (0x000150fb) graphic_text_primary_pane_t1

0x6973,	// (0x00015109) graphic_text_primary_pane_t2

0x0001,

0xf9f6,	// (0x0001e18c) graphic_text_primary_pane_t

0x6941,	// (0x000150d7) graphic_text_primary_small_pane_g1

0x6949,	// (0x000150df) graphic_text_primary_small_pane_t1

0x6957,	// (0x000150ed) graphic_text_primary_small_pane_t2

0x0001,

0xf9f1,	// (0x0001e187) graphic_text_primary_small_pane_t

0x691d,	// (0x000150b3) graphic_text_secondary_pane_g1

0x6925,	// (0x000150bb) graphic_text_secondary_pane_t1

0x6933,	// (0x000150c9) graphic_text_secondary_pane_t2

0x0001,

0xf9ec,	// (0x0001e182) graphic_text_secondary_pane_t

0x68f9,	// (0x0001508f) graphic_text_title_pane_g1

0x6901,	// (0x00015097) graphic_text_title_pane_t1

0x690f,	// (0x000150a5) graphic_text_title_pane_t2

0x0001,

0xf9e7,	// (0x0001e17d) graphic_text_title_pane_t

0x68d5,	// (0x0001506b) graphic_text_digital_pane_g1

0x68dd,	// (0x00015073) graphic_text_digital_pane_t1

0x68eb,	// (0x00015081) graphic_text_digital_pane_t2

0x0001,

0xf9e2,	// (0x0001e178) graphic_text_digital_pane_t

0x24b7,	// (0x00010c4d) navi_icon_pane_srt_ParamLimits

0x24b7,	// (0x00010c4d) navi_icon_pane_srt

0x23d7,	// (0x00010b6d) navi_midp_pane_srt

0x23d7,	// (0x00010b6d) navi_navi_pane_srt

0x24b7,	// (0x00010c4d) navi_text_pane_srt_ParamLimits

0x24b7,	// (0x00010c4d) navi_text_pane_srt

0x68a0,	// (0x00015036) navi_navi_icon_text_pane_srt

0x68ba,	// (0x00015050) navi_navi_pane_srt_g1_ParamLimits

0x68ba,	// (0x00015050) navi_navi_pane_srt_g1

0x68a8,	// (0x0001503e) navi_navi_pane_srt_g2_ParamLimits

0x68a8,	// (0x0001503e) navi_navi_pane_srt_g2

0x0001,

0xf9dd,	// (0x0001e173) navi_navi_pane_srt_g_ParamLimits

0xf9dd,	// (0x0001e173) navi_navi_pane_srt_g

0x68cc,	// (0x00015062) navi_navi_tabs_pane_srt

0x68a0,	// (0x00015036) navi_navi_text_pane_srt

0x68a0,	// (0x00015036) navi_navi_volume_pane_srt

0x6891,	// (0x00015027) navi_navi_text_pane_srt_t1

0xe167,	// (0x0001c8fd) navi_navi_volume_pane_srt_g1

0xe16f,	// (0x0001c905) volume_small_pane_srt_ParamLimits

0xe16f,	// (0x0001c905) volume_small_pane_srt

0xdb70,	// (0x0001c306) volume_small_pane_srt_g1_ParamLimits

0xdb70,	// (0x0001c306) volume_small_pane_srt_g1

0xdb80,	// (0x0001c316) volume_small_pane_srt_g2_ParamLimits

0xdb80,	// (0x0001c316) volume_small_pane_srt_g2

0xdb91,	// (0x0001c327) volume_small_pane_srt_g3_ParamLimits

0xdb91,	// (0x0001c327) volume_small_pane_srt_g3

0xdba2,	// (0x0001c338) volume_small_pane_srt_g4_ParamLimits

0xdba2,	// (0x0001c338) volume_small_pane_srt_g4

0xdbb3,	// (0x0001c349) volume_small_pane_srt_g5_ParamLimits

0xdbb3,	// (0x0001c349) volume_small_pane_srt_g5

0xdbc4,	// (0x0001c35a) volume_small_pane_srt_g6_ParamLimits

0xdbc4,	// (0x0001c35a) volume_small_pane_srt_g6

0xdbd5,	// (0x0001c36b) volume_small_pane_srt_g7_ParamLimits

0xdbd5,	// (0x0001c36b) volume_small_pane_srt_g7

0xdbe6,	// (0x0001c37c) volume_small_pane_srt_g8_ParamLimits

0xdbe6,	// (0x0001c37c) volume_small_pane_srt_g8

0xdbf7,	// (0x0001c38d) volume_small_pane_srt_g9_ParamLimits

0xdbf7,	// (0x0001c38d) volume_small_pane_srt_g9

0xdc08,	// (0x0001c39e) volume_small_pane_srt_g10_ParamLimits

0xdc08,	// (0x0001c39e) volume_small_pane_srt_g10

0x0009,

0xf798,	// (0x0001df2e) volume_small_pane_srt_g_ParamLimits

0xf798,	// (0x0001df2e) volume_small_pane_srt_g

0x289f,	// (0x00011035) query_popup_data_pane_cp2

0x6877,	// (0x0001500d) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6877,	// (0x0001500d) navi_navi_icon_text_pane_srt_t1

0x587b,	// (0x00014011) navi_tabs_2_long_pane_srt

0x587b,	// (0x00014011) navi_tabs_2_pane_srt

0x587b,	// (0x00014011) navi_tabs_3_long_pane_srt

0x587b,	// (0x00014011) navi_tabs_3_pane_srt

0x587b,	// (0x00014011) navi_tabs_4_pane_srt

0xe147,	// (0x0001c8dd) tabs_2_active_pane_srt_ParamLimits

0xe147,	// (0x0001c8dd) tabs_2_active_pane_srt

0xe157,	// (0x0001c8ed) tabs_2_passive_pane_srt_ParamLimits

0xe157,	// (0x0001c8ed) tabs_2_passive_pane_srt

0x445c,	// (0x00012bf2) bg_passive_tab_pane_cp1_srt_ParamLimits

0x445c,	// (0x00012bf2) bg_passive_tab_pane_cp1_srt

0x684c,	// (0x00014fe2) bg_passive_tab_pane_g1_cp1_srt

0x3d1e,	// (0x000124b4) bg_passive_tab_pane_g2_cp1_srt

0x6843,	// (0x00014fd9) bg_passive_tab_pane_g3_cp1_srt

0x24b7,	// (0x00010c4d) bg_active_tab_pane_cp1_srt_ParamLimits

0x24b7,	// (0x00010c4d) bg_active_tab_pane_cp1_srt

0x6855,	// (0x00014feb) tabs_2_active_pane_srt_g1

0x685d,	// (0x00014ff3) tabs_2_active_pane_srt_t1_ParamLimits

0x685d,	// (0x00014ff3) tabs_2_active_pane_srt_t1

0x684c,	// (0x00014fe2) bg_active_tab_pane_g1_cp1_srt

0x3d1e,	// (0x000124b4) bg_active_tab_pane_g2_cp1_srt

0x6843,	// (0x00014fd9) bg_active_tab_pane_g3_cp1_srt

0xe114,	// (0x0001c8aa) tabs_3_active_pane_srt_ParamLimits

0xe114,	// (0x0001c8aa) tabs_3_active_pane_srt

0xe125,	// (0x0001c8bb) tabs_3_passive_pane_cp_srt_ParamLimits

0xe125,	// (0x0001c8bb) tabs_3_passive_pane_cp_srt

0xe136,	// (0x0001c8cc) tabs_3_passive_pane_srt_ParamLimits

0xe136,	// (0x0001c8cc) tabs_3_passive_pane_srt

0x445c,	// (0x00012bf2) bg_passive_tab_pane_cp2_srt_ParamLimits

0x445c,	// (0x00012bf2) bg_passive_tab_pane_cp2_srt

0x428d,	// (0x00012a23) bg_passive_tab_pane_g1_cp2_srt

0x3d1e,	// (0x000124b4) bg_passive_tab_pane_g2_cp2_srt

0x4284,	// (0x00012a1a) bg_passive_tab_pane_g3_cp2_srt

0x24b7,	// (0x00010c4d) bg_active_tab_pane_cp2_srt_ParamLimits

0x24b7,	// (0x00010c4d) bg_active_tab_pane_cp2_srt

0x6829,	// (0x00014fbf) tabs_3_active_pane_srt_g1

0x6831,	// (0x00014fc7) tabs_3_active_pane_srt_t1_ParamLimits

0x6831,	// (0x00014fc7) tabs_3_active_pane_srt_t1

0x428d,	// (0x00012a23) bg_active_tab_pane_g1_cp2_srt

0x3d1e,	// (0x000124b4) bg_active_tab_pane_g2_cp2_srt

0x4284,	// (0x00012a1a) bg_active_tab_pane_g3_cp2_srt

0xe0cc,	// (0x0001c862) tabs_4_active_pane_srt_ParamLimits

0xe0cc,	// (0x0001c862) tabs_4_active_pane_srt

0xe0de,	// (0x0001c874) tabs_4_passive_pane_cp2_srt_ParamLimits

0xe0de,	// (0x0001c874) tabs_4_passive_pane_cp2_srt

0x43e2,	// (0x00012b78) aid_size_cell_toolbar

0x35f6,	// (0x00011d8c) main_idle_act_pane_ParamLimits

0x45fb,	// (0x00012d91) popup_large_graphic_colour_window_ParamLimits

0x495a,	// (0x000130f0) popup_toolbar_window_ParamLimits

0x495a,	// (0x000130f0) popup_toolbar_window

0xcc79,	// (0x0001b40f) list_single_graphic_2heading_pane_ParamLimits

0xcc79,	// (0x0001b40f) list_single_graphic_2heading_pane

0x37b2,	// (0x00011f48) aid_size_cell_apps_grid_lsc_pane

0x37c4,	// (0x00011f5a) aid_size_cell_apps_grid_prt_pane

0x445c,	// (0x00012bf2) bg_wml_button_pane_cp1_ParamLimits

0x445c,	// (0x00012bf2) bg_wml_button_pane_cp1

0x525d,	// (0x000139f3) form_midp_field_text_pane_t1_ParamLimits

0x5028,	// (0x000137be) input_focus_pane_cp050_ParamLimits

0x529c,	// (0x00013a32) list_midp_form_text_pane_ParamLimits

0x523a,	// (0x000139d0) input_focus_pane_cp051_ParamLimits

0x524e,	// (0x000139e4) list_midp_choice_pane_ParamLimits

0x50b9,	// (0x0001384f) list_single_2graphic_pane_cp3_ParamLimits

0x50b9,	// (0x0001384f) list_single_2graphic_pane_cp3

0x50e5,	// (0x0001387b) list_single_midp_graphic_pane_ParamLimits

0x50e5,	// (0x0001387b) list_single_midp_graphic_pane

0xc45c,	// (0x0001abf2) list_single_graphic_2heading_pane_g1_ParamLimits

0xc45c,	// (0x0001abf2) list_single_graphic_2heading_pane_g1

0xc3e2,	// (0x0001ab78) list_single_graphic_2heading_pane_g4_ParamLimits

0xc3e2,	// (0x0001ab78) list_single_graphic_2heading_pane_g4

0xc3ee,	// (0x0001ab84) list_single_graphic_2heading_pane_g5_ParamLimits

0xc3ee,	// (0x0001ab84) list_single_graphic_2heading_pane_g5

0x0002,

0xf7eb,	// (0x0001df81) list_single_graphic_2heading_pane_g_ParamLimits

0xf7eb,	// (0x0001df81) list_single_graphic_2heading_pane_g

0xcb2d,	// (0x0001b2c3) list_single_graphic_2heading_pane_t1_ParamLimits

0xcb2d,	// (0x0001b2c3) list_single_graphic_2heading_pane_t1

0xcb41,	// (0x0001b2d7) list_single_graphic_2heading_pane_t2_ParamLimits

0xcb41,	// (0x0001b2d7) list_single_graphic_2heading_pane_t2

0xcb5d,	// (0x0001b2f3) list_single_graphic_2heading_pane_t3_ParamLimits

0xcb5d,	// (0x0001b2f3) list_single_graphic_2heading_pane_t3

0x0002,

0xf7f2,	// (0x0001df88) list_single_graphic_2heading_pane_t_ParamLimits

0xf7f2,	// (0x0001df88) list_single_graphic_2heading_pane_t

0x4e2a,	// (0x000135c0) bg_popup_sub_pane_cp2

0x4e54,	// (0x000135ea) grid_toobar_pane

0xdd6c,	// (0x0001c502) cell_toolbar_pane_ParamLimits

0xdd6c,	// (0x0001c502) cell_toolbar_pane

0x4eb2,	// (0x00013648) cell_toolbar_pane_g1_ParamLimits

0x4eb2,	// (0x00013648) cell_toolbar_pane_g1

0x4ec6,	// (0x0001365c) cell_toolbar_pane_g2_ParamLimits

0x4ec6,	// (0x0001365c) cell_toolbar_pane_g2

0x0001,

0xf7f9,	// (0x0001df8f) cell_toolbar_pane_g_ParamLimits

0xf7f9,	// (0x0001df8f) cell_toolbar_pane_g

0x4ee8,	// (0x0001367e) grid_highlight_pane_cp2_ParamLimits

0x4ee8,	// (0x0001367e) grid_highlight_pane_cp2

0x4f02,	// (0x00013698) toolbar_button_pane

0x4f0e,	// (0x000136a4) toolbar_button_pane_g1

0x4f1e,	// (0x000136b4) toolbar_button_pane_g2

0x4f16,	// (0x000136ac) toolbar_button_pane_g3

0x4f2e,	// (0x000136c4) toolbar_button_pane_g4

0x4f26,	// (0x000136bc) toolbar_button_pane_g5

0x4f36,	// (0x000136cc) toolbar_button_pane_g6

0x4f3e,	// (0x000136d4) toolbar_button_pane_g7

0x4f4e,	// (0x000136e4) toolbar_button_pane_g8

0x4f46,	// (0x000136dc) toolbar_button_pane_g9

0x0009,

0xf7fe,	// (0x0001df94) toolbar_button_pane_g

0xdda4,	// (0x0001c53a) list_single_2graphic_pane_g1_cp3_ParamLimits

0xdda4,	// (0x0001c53a) list_single_2graphic_pane_g1_cp3

0xddb0,	// (0x0001c546) list_single_2graphic_pane_g2_cp3_ParamLimits

0xddb0,	// (0x0001c546) list_single_2graphic_pane_g2_cp3

0x3f02,	// (0x00012698) list_single_2graphic_pane_g3_cp3

0xddc1,	// (0x0001c557) list_single_2graphic_pane_g4_cp3_ParamLimits

0xddc1,	// (0x0001c557) list_single_2graphic_pane_g4_cp3

0xddcd,	// (0x0001c563) list_single_2graphic_pane_t1_cp3_ParamLimits

0xddcd,	// (0x0001c563) list_single_2graphic_pane_t1_cp3

0x3ef6,	// (0x0001268c) list_single_midp_graphic_pane_g2_ParamLimits

0x3ef6,	// (0x0001268c) list_single_midp_graphic_pane_g2

0x43f2,	// (0x00012b88) aid_zoom_text_primary

0xcb01,	// (0x0001b297) aid_zoom_text_secondary

0x4341,	// (0x00012ad7) status_small_pane_g7_ParamLimits

0x4341,	// (0x00012ad7) status_small_pane_g7

0x4364,	// (0x00012afa) status_small_pane_t1_ParamLimits

0x23ee,	// (0x00010b84) title_pane_g2

0x0003,

0xf592,	// (0x0001dd28) title_pane_g

0x2940,	// (0x000110d6) aid_size_cell_colour_1_pane_ParamLimits

0x2940,	// (0x000110d6) aid_size_cell_colour_1_pane

0x2954,	// (0x000110ea) aid_size_cell_colour_2_pane_ParamLimits

0x2954,	// (0x000110ea) aid_size_cell_colour_2_pane

0x2968,	// (0x000110fe) aid_size_cell_colour_3_pane_ParamLimits

0x2968,	// (0x000110fe) aid_size_cell_colour_3_pane

0x297c,	// (0x00011112) aid_size_cell_colour_4_pane_ParamLimits

0x297c,	// (0x00011112) aid_size_cell_colour_4_pane

0xd7cc,	// (0x0001bf62) title_pane_stacon_g1_ParamLimits

0xd7cc,	// (0x0001bf62) title_pane_stacon_g1

0x565a,	// (0x00013df0) popup_note_wait_window_g3_ParamLimits

0x565a,	// (0x00013df0) popup_note_wait_window_g3

0x56d0,	// (0x00013e66) popup_note_wait_window_t5_ParamLimits

0x56d0,	// (0x00013e66) popup_note_wait_window_t5

0x23d7,	// (0x00010b6d) main_feb_china_hwr_fs_writing_pane

0x44e6,	// (0x00012c7c) popup_feb_china_hwr_fs_window_ParamLimits

0x44e6,	// (0x00012c7c) popup_feb_china_hwr_fs_window

0xddfd,	// (0x0001c593) aid_size_cell_hwr_fs_ParamLimits

0xddfd,	// (0x0001c593) aid_size_cell_hwr_fs

0x5028,	// (0x000137be) bg_popup_sub_pane_cp3_ParamLimits

0x5028,	// (0x000137be) bg_popup_sub_pane_cp3

0xde12,	// (0x0001c5a8) grid_hwr_fs_pane_ParamLimits

0xde12,	// (0x0001c5a8) grid_hwr_fs_pane

0xde2a,	// (0x0001c5c0) linegrid_hwr_fs_pane_ParamLimits

0xde2a,	// (0x0001c5c0) linegrid_hwr_fs_pane

0xde3a,	// (0x0001c5d0) cell_hwr_fs_pane_ParamLimits

0xde3a,	// (0x0001c5d0) cell_hwr_fs_pane

0x5034,	// (0x000137ca) linegrid_hwr_fs_pane_g1_ParamLimits

0x5034,	// (0x000137ca) linegrid_hwr_fs_pane_g1

0x5040,	// (0x000137d6) linegrid_hwr_fs_pane_g2_ParamLimits

0x5040,	// (0x000137d6) linegrid_hwr_fs_pane_g2

0x5052,	// (0x000137e8) linegrid_hwr_fs_pane_g3_ParamLimits

0x5052,	// (0x000137e8) linegrid_hwr_fs_pane_g3

0xde5c,	// (0x0001c5f2) linegrid_hwr_fs_pane_g4_ParamLimits

0xde5c,	// (0x0001c5f2) linegrid_hwr_fs_pane_g4

0xde76,	// (0x0001c60c) linegrid_hwr_fs_pane_g5_ParamLimits

0xde76,	// (0x0001c60c) linegrid_hwr_fs_pane_g5

0x0004,

0xf824,	// (0x0001dfba) linegrid_hwr_fs_pane_g_ParamLimits

0xf824,	// (0x0001dfba) linegrid_hwr_fs_pane_g

0x505e,	// (0x000137f4) cell_hwr_fs_pane_g1_ParamLimits

0x505e,	// (0x000137f4) cell_hwr_fs_pane_g1

0x4d63,	// (0x000134f9) cell_hwr_fs_pane_g2_ParamLimits

0x4d63,	// (0x000134f9) cell_hwr_fs_pane_g2

0x5074,	// (0x0001380a) cell_hwr_fs_pane_g3_ParamLimits

0x5074,	// (0x0001380a) cell_hwr_fs_pane_g3

0x5081,	// (0x00013817) cell_hwr_fs_pane_g4_ParamLimits

0x5081,	// (0x00013817) cell_hwr_fs_pane_g4

0x0003,

0xf82f,	// (0x0001dfc5) cell_hwr_fs_pane_g_ParamLimits

0xf82f,	// (0x0001dfc5) cell_hwr_fs_pane_g

0xde8c,	// (0x0001c622) cell_hwr_fs_pane_t1

0x23d7,	// (0x00010b6d) grid_highlight_pane_cp6

0x23d7,	// (0x00010b6d) main_idle_act2_pane

0x356a,	// (0x00011d00) aid_inside_area_popup_secondary

0x5d01,	// (0x00014497) aid_inside_area_window_primary_ParamLimits

0x5d01,	// (0x00014497) aid_inside_area_window_primary

0x6990,	// (0x00015126) ai2_news_ticker_pane

0x6998,	// (0x0001512e) aid_size_cell_ai1_link_ParamLimits

0x6998,	// (0x0001512e) aid_size_cell_ai1_link

0x69b2,	// (0x00015148) popup_ai2_data_window_ParamLimits

0x69b2,	// (0x00015148) popup_ai2_data_window

0x69c6,	// (0x0001515c) popup_ai2_link_window_ParamLimits

0x69c6,	// (0x0001515c) popup_ai2_link_window

0x5028,	// (0x000137be) bg_popup_sub_pane_cp4_ParamLimits

0x5028,	// (0x000137be) bg_popup_sub_pane_cp4

0x69da,	// (0x00015170) grid_ai2_link_pane_ParamLimits

0x69da,	// (0x00015170) grid_ai2_link_pane

0x69f1,	// (0x00015187) popup_ai2_link_window_g1_ParamLimits

0x69f1,	// (0x00015187) popup_ai2_link_window_g1

0x69fd,	// (0x00015193) popup_ai2_link_window_g2_ParamLimits

0x69fd,	// (0x00015193) popup_ai2_link_window_g2

0x0001,

0xf9fb,	// (0x0001e191) popup_ai2_link_window_g_ParamLimits

0xf9fb,	// (0x0001e191) popup_ai2_link_window_g

0x6a0c,	// (0x000151a2) ai2_mp_button_pane

0x6a14,	// (0x000151aa) ai2_mp_volume_pane

0x523a,	// (0x000139d0) bg_popup_sub_pane_cp5_ParamLimits

0x523a,	// (0x000139d0) bg_popup_sub_pane_cp5

0x6a1c,	// (0x000151b2) heading_ai2_gene_pane_ParamLimits

0x6a1c,	// (0x000151b2) heading_ai2_gene_pane

0x6a28,	// (0x000151be) list_ai2_gene_pane_ParamLimits

0x6a28,	// (0x000151be) list_ai2_gene_pane

0x6a70,	// (0x00015206) cell_ai2_link_pane_ParamLimits

0x6a70,	// (0x00015206) cell_ai2_link_pane

0x6a86,	// (0x0001521c) cell_ai2_link_pane_g1

0x23d7,	// (0x00010b6d) grid_highlight_pane_cp7

0xe184,	// (0x0001c91a) ai2_mp_volume_pane_g1

0x6b5f,	// (0x000152f5) ai2_mp_volume_pane_g2

0x6acc,	// (0x00015262) list_ai2_gene_pane_t1

0x6b57,	// (0x000152ed) ai2_mp_volume_pane_g3

0x0002,

0xfa14,	// (0x0001e1aa) ai2_mp_volume_pane_g

0xe18c,	// (0x0001c922) volume_small_pane_cp3

0x6b67,	// (0x000152fd) aid_size_cell_ai2_button

0x6b6f,	// (0x00015305) grid_ai2_button_pane

0x6b78,	// (0x0001530e) cell_ai2_button_pane_ParamLimits

0x6b78,	// (0x0001530e) cell_ai2_button_pane

0x23cd,	// (0x00010b63) cell_ai2_button_pane_g1

0x23d7,	// (0x00010b6d) grid_highlight_pane_cp8

0x6b17,	// (0x000152ad) ai2_gene_pane_t1_ParamLimits

0x6b17,	// (0x000152ad) ai2_gene_pane_t1

0x43d8,	// (0x00012b6e) aid_height_parent_landscape

0x63b8,	// (0x00014b4e) aid_height_set_list

0x63c9,	// (0x00014b5f) aid_size_parent

0x67b3,	// (0x00014f49) aid_size_cell_graphic_pane_ParamLimits

0x6a38,	// (0x000151ce) popup_ai2_data_window_g1_ParamLimits

0x6a38,	// (0x000151ce) popup_ai2_data_window_g1

0x6a44,	// (0x000151da) ai2_news_ticker_pane_g1

0x6a4c,	// (0x000151e2) ai2_news_ticker_pane_g2

0x0001,

0xfa00,	// (0x0001e196) ai2_news_ticker_pane_g

0x6a54,	// (0x000151ea) ai2_news_ticker_pane_t1

0x6a62,	// (0x000151f8) ai2_news_ticker_pane_t2

0x0001,

0xfa05,	// (0x0001e19b) ai2_news_ticker_pane_t

0x6a8f,	// (0x00015225) heading_ai2_gene_pane_g1

0x6a97,	// (0x0001522d) heading_ai2_gene_pane_t1_ParamLimits

0x6a97,	// (0x0001522d) heading_ai2_gene_pane_t1

0x6aac,	// (0x00015242) list_highlight_pane_cp6

0x6ab4,	// (0x0001524a) ai2_gene_pane_ParamLimits

0x6ab4,	// (0x0001524a) ai2_gene_pane

0x6ada,	// (0x00015270) list_ai2_gene_pane_t2

0x0001,

0xfa0a,	// (0x0001e1a0) list_ai2_gene_pane_t

0x6ae8,	// (0x0001527e) list_highlight_pane_cp8_ParamLimits

0x6ae8,	// (0x0001527e) list_highlight_pane_cp8

0x6af9,	// (0x0001528f) ai2_gene_pane_g1_ParamLimits

0x6af9,	// (0x0001528f) ai2_gene_pane_g1

0x6b0b,	// (0x000152a1) ai2_gene_pane_g2_ParamLimits

0x6b0b,	// (0x000152a1) ai2_gene_pane_g2

0x0001,

0xfa0f,	// (0x0001e1a5) ai2_gene_pane_g_ParamLimits

0xfa0f,	// (0x0001e1a5) ai2_gene_pane_g

0x2cba,	// (0x00011450) scroll_pane_cp12

0xdd2b,	// (0x0001c4c1) control_pane_t3_ParamLimits

0xdd2b,	// (0x0001c4c1) control_pane_t3

0x4355,	// (0x00012aeb) status_small_pane_g8_ParamLimits

0x4355,	// (0x00012aeb) status_small_pane_g8

0x45c8,	// (0x00012d5e) popup_find_window_ParamLimits

0x47db,	// (0x00012f71) popup_note_image_window_ParamLimits

0xc45c,	// (0x0001abf2) list_double2_graphic_pane_vc_g1_ParamLimits

0xc45c,	// (0x0001abf2) list_double2_graphic_pane_vc_g1

0xc3e2,	// (0x0001ab78) list_double2_graphic_pane_vc_g2_ParamLimits

0xc3e2,	// (0x0001ab78) list_double2_graphic_pane_vc_g2

0xc3ee,	// (0x0001ab84) list_double2_graphic_pane_vc_g3_ParamLimits

0xc3ee,	// (0x0001ab84) list_double2_graphic_pane_vc_g3

0x0002,

0xf7eb,	// (0x0001df81) list_double2_graphic_pane_vc_g_ParamLimits

0xf7eb,	// (0x0001df81) list_double2_graphic_pane_vc_g

0xcb75,	// (0x0001b30b) list_double2_graphic_pane_vc_t1_ParamLimits

0xcb75,	// (0x0001b30b) list_double2_graphic_pane_vc_t1

0xc3e2,	// (0x0001ab78) list_single_heading_pane_vc_g1_ParamLimits

0xc3e2,	// (0x0001ab78) list_single_heading_pane_vc_g1

0xc3ee,	// (0x0001ab84) list_single_heading_pane_vc_g2_ParamLimits

0xc3ee,	// (0x0001ab84) list_single_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x0001dda2) list_single_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x0001dda2) list_single_heading_pane_vc_g

0xcb8b,	// (0x0001b321) list_single_heading_pane_vc_t1_ParamLimits

0xcb8b,	// (0x0001b321) list_single_heading_pane_vc_t1

0xcba1,	// (0x0001b337) list_single_heading_pane_vc_t2_ParamLimits

0xcba1,	// (0x0001b337) list_single_heading_pane_vc_t2

0x0001,

0xf813,	// (0x0001dfa9) list_single_heading_pane_vc_t_ParamLimits

0xf813,	// (0x0001dfa9) list_single_heading_pane_vc_t

0x4f80,	// (0x00013716) list_setting_number_pane_vc_g1_ParamLimits

0x4f80,	// (0x00013716) list_setting_number_pane_vc_g1

0x4f8c,	// (0x00013722) list_setting_number_pane_vc_g2_ParamLimits

0x4f8c,	// (0x00013722) list_setting_number_pane_vc_g2

0x0001,

0xf818,	// (0x0001dfae) list_setting_number_pane_vc_g_ParamLimits

0xf818,	// (0x0001dfae) list_setting_number_pane_vc_g

0x4f98,	// (0x0001372e) list_setting_number_pane_vc_t1_ParamLimits

0x4f98,	// (0x0001372e) list_setting_number_pane_vc_t1

0x4fac,	// (0x00013742) list_setting_number_pane_vc_t2_ParamLimits

0x4fac,	// (0x00013742) list_setting_number_pane_vc_t2

0x4fc8,	// (0x0001375e) list_setting_number_pane_vc_t3_ParamLimits

0x4fc8,	// (0x0001375e) list_setting_number_pane_vc_t3

0x0002,

0xf81d,	// (0x0001dfb3) list_setting_number_pane_vc_t_ParamLimits

0xf81d,	// (0x0001dfb3) list_setting_number_pane_vc_t

0x4ff0,	// (0x00013786) set_value_pane_vc_ParamLimits

0x4ff0,	// (0x00013786) set_value_pane_vc

0xcc79,	// (0x0001b40f) list_double2_graphic_pane_vc_ParamLimits

0xcc79,	// (0x0001b40f) list_double2_graphic_pane_vc

0x65cb,	// (0x00014d61) list_double2_large_graphic_pane_vc_ParamLimits

0x65cb,	// (0x00014d61) list_double2_large_graphic_pane_vc

0xcc79,	// (0x0001b40f) list_double2_pane_vc_ParamLimits

0xcc79,	// (0x0001b40f) list_double2_pane_vc

0xcc79,	// (0x0001b40f) list_double_graphic_heading_pane_vc_ParamLimits

0xcc79,	// (0x0001b40f) list_double_graphic_heading_pane_vc

0xcc79,	// (0x0001b40f) list_double_graphic_pane_vc_ParamLimits

0xcc79,	// (0x0001b40f) list_double_graphic_pane_vc

0xcc79,	// (0x0001b40f) list_double_heading_pane_vc_ParamLimits

0xcc79,	// (0x0001b40f) list_double_heading_pane_vc

0x65cb,	// (0x00014d61) list_double_large_graphic_pane_vc_ParamLimits

0x65cb,	// (0x00014d61) list_double_large_graphic_pane_vc

0xcc79,	// (0x0001b40f) list_double_number_pane_vc_ParamLimits

0xcc79,	// (0x0001b40f) list_double_number_pane_vc

0xcc79,	// (0x0001b40f) list_double_pane_vc_ParamLimits

0xcc79,	// (0x0001b40f) list_double_pane_vc

0xcc79,	// (0x0001b40f) list_double_time_pane_vc_ParamLimits

0xcc79,	// (0x0001b40f) list_double_time_pane_vc

0xcc79,	// (0x0001b40f) list_setting_number_pane_vc_ParamLimits

0xcc79,	// (0x0001b40f) list_setting_number_pane_vc

0xcc79,	// (0x0001b40f) list_setting_pane_vc_ParamLimits

0xcc79,	// (0x0001b40f) list_setting_pane_vc

0xcc79,	// (0x0001b40f) list_single_graphic_heading_pane_vc_ParamLimits

0xcc79,	// (0x0001b40f) list_single_graphic_heading_pane_vc

0xcc79,	// (0x0001b40f) list_single_heading_pane_vc_ParamLimits

0xcc79,	// (0x0001b40f) list_single_heading_pane_vc

0xcc8d,	// (0x0001b423) list_single_number_heading_pane_vc_ParamLimits

0xcc8d,	// (0x0001b423) list_single_number_heading_pane_vc

0xc45c,	// (0x0001abf2) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xc45c,	// (0x0001abf2) list_double_graphic_heading_pane_vc_g1

0xc3e2,	// (0x0001ab78) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xc3e2,	// (0x0001ab78) list_double_graphic_heading_pane_vc_g2

0xc3ee,	// (0x0001ab84) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xc3ee,	// (0x0001ab84) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7eb,	// (0x0001df81) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7eb,	// (0x0001df81) list_double_graphic_heading_pane_vc_g

0xcd4a,	// (0x0001b4e0) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xcd4a,	// (0x0001b4e0) list_double_graphic_heading_pane_vc_t1

0xcb8b,	// (0x0001b321) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xcb8b,	// (0x0001b321) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa1b,	// (0x0001e1b1) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa1b,	// (0x0001e1b1) list_double_graphic_heading_pane_vc_t

0x4f80,	// (0x00013716) list_setting_pane_vc_g1_ParamLimits

0x4f80,	// (0x00013716) list_setting_pane_vc_g1

0x4f8c,	// (0x00013722) list_setting_pane_vc_g2_ParamLimits

0x4f8c,	// (0x00013722) list_setting_pane_vc_g2

0x0001,

0xf818,	// (0x0001dfae) list_setting_pane_vc_g_ParamLimits

0xf818,	// (0x0001dfae) list_setting_pane_vc_g

0x6da4,	// (0x0001553a) list_setting_pane_vc_t1_ParamLimits

0x6da4,	// (0x0001553a) list_setting_pane_vc_t1

0x6db8,	// (0x0001554e) list_setting_pane_vc_t2_ParamLimits

0x6db8,	// (0x0001554e) list_setting_pane_vc_t2

0x0001,

0xfa5e,	// (0x0001e1f4) list_setting_pane_vc_t_ParamLimits

0xfa5e,	// (0x0001e1f4) list_setting_pane_vc_t

0x4ff0,	// (0x00013786) set_value_pane_cp_vc_ParamLimits

0x4ff0,	// (0x00013786) set_value_pane_cp_vc

0xc3e2,	// (0x0001ab78) list_single_number_heading_pane_vc_g1_ParamLimits

0xc3e2,	// (0x0001ab78) list_single_number_heading_pane_vc_g1

0xc3ee,	// (0x0001ab84) list_single_number_heading_pane_vc_g2_ParamLimits

0xc3ee,	// (0x0001ab84) list_single_number_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x0001dda2) list_single_number_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x0001dda2) list_single_number_heading_pane_vc_g

0xcb8b,	// (0x0001b321) list_single_number_heading_pane_vc_t1_ParamLimits

0xcb8b,	// (0x0001b321) list_single_number_heading_pane_vc_t1

0xcd5e,	// (0x0001b4f4) list_single_number_heading_pane_vc_t2_ParamLimits

0xcd5e,	// (0x0001b4f4) list_single_number_heading_pane_vc_t2

0xc44a,	// (0x0001abe0) list_single_number_heading_pane_vc_t3_ParamLimits

0xc44a,	// (0x0001abe0) list_single_number_heading_pane_vc_t3

0x0002,

0xfa63,	// (0x0001e1f9) list_single_number_heading_pane_vc_t_ParamLimits

0xfa63,	// (0x0001e1f9) list_single_number_heading_pane_vc_t

0xc45c,	// (0x0001abf2) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xc45c,	// (0x0001abf2) list_single_graphic_heading_pane_vc_g1

0xc3e2,	// (0x0001ab78) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xc3e2,	// (0x0001ab78) list_single_graphic_heading_pane_vc_g4

0xc3ee,	// (0x0001ab84) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xc3ee,	// (0x0001ab84) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7eb,	// (0x0001df81) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7eb,	// (0x0001df81) list_single_graphic_heading_pane_vc_g

0xcb8b,	// (0x0001b321) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xcb8b,	// (0x0001b321) list_single_graphic_heading_pane_vc_t1

0xcd72,	// (0x0001b508) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xcd72,	// (0x0001b508) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa6a,	// (0x0001e200) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa6a,	// (0x0001e200) list_single_graphic_heading_pane_vc_t

0xc3e2,	// (0x0001ab78) list_double2_pane_vc_g1_ParamLimits

0xc3e2,	// (0x0001ab78) list_double2_pane_vc_g1

0xc3ee,	// (0x0001ab84) list_double2_pane_vc_g2_ParamLimits

0xc3ee,	// (0x0001ab84) list_double2_pane_vc_g2

0x0001,

0xf60c,	// (0x0001dda2) list_double2_pane_vc_g_ParamLimits

0xf60c,	// (0x0001dda2) list_double2_pane_vc_g

0xcc41,	// (0x0001b3d7) list_double2_pane_vc_t1_ParamLimits

0xcc41,	// (0x0001b3d7) list_double2_pane_vc_t1

0xcd86,	// (0x0001b51c) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xcd86,	// (0x0001b51c) list_double2_large_graphic_pane_vc_g1

0xcd92,	// (0x0001b528) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xcd92,	// (0x0001b528) list_double2_large_graphic_pane_vc_g2

0xcd9e,	// (0x0001b534) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xcd9e,	// (0x0001b534) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa6f,	// (0x0001e205) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa6f,	// (0x0001e205) list_double2_large_graphic_pane_vc_g

0xcdaa,	// (0x0001b540) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xcdaa,	// (0x0001b540) list_double2_large_graphic_pane_vc_t1

0xcdc0,	// (0x0001b556) list_double_time_pane_vc_g1_ParamLimits

0xcdc0,	// (0x0001b556) list_double_time_pane_vc_g1

0xcdcc,	// (0x0001b562) list_double_time_pane_vc_g2_ParamLimits

0xcdcc,	// (0x0001b562) list_double_time_pane_vc_g2

0x0001,

0xfa76,	// (0x0001e20c) list_double_time_pane_vc_g_ParamLimits

0xfa76,	// (0x0001e20c) list_double_time_pane_vc_g

0xcdd8,	// (0x0001b56e) list_double_time_pane_vc_t1_ParamLimits

0xcdd8,	// (0x0001b56e) list_double_time_pane_vc_t1

0xcdf1,	// (0x0001b587) list_double_time_pane_vc_t2_ParamLimits

0xcdf1,	// (0x0001b587) list_double_time_pane_vc_t2

0xce31,	// (0x0001b5c7) list_double_time_pane_vc_t3_ParamLimits

0xce31,	// (0x0001b5c7) list_double_time_pane_vc_t3

0xce49,	// (0x0001b5df) list_double_time_pane_vc_t4_ParamLimits

0xce49,	// (0x0001b5df) list_double_time_pane_vc_t4

0x0003,

0xfa7b,	// (0x0001e211) list_double_time_pane_vc_t_ParamLimits

0xfa7b,	// (0x0001e211) list_double_time_pane_vc_t

0xc3e2,	// (0x0001ab78) list_double_pane_vc_g1_ParamLimits

0xc3e2,	// (0x0001ab78) list_double_pane_vc_g1

0xc3ee,	// (0x0001ab84) list_double_pane_vc_g2_ParamLimits

0xc3ee,	// (0x0001ab84) list_double_pane_vc_g2

0x0001,

0xf60c,	// (0x0001dda2) list_double_pane_vc_g_ParamLimits

0xf60c,	// (0x0001dda2) list_double_pane_vc_g

0xce5d,	// (0x0001b5f3) list_double_pane_vc_t1_ParamLimits

0xce5d,	// (0x0001b5f3) list_double_pane_vc_t1

0xce6f,	// (0x0001b605) list_double_pane_vc_t2_ParamLimits

0xce6f,	// (0x0001b605) list_double_pane_vc_t2

0x0001,

0xfa84,	// (0x0001e21a) list_double_pane_vc_t_ParamLimits

0xfa84,	// (0x0001e21a) list_double_pane_vc_t

0xc3e2,	// (0x0001ab78) list_double_number_pane_vc_g1_ParamLimits

0xc3e2,	// (0x0001ab78) list_double_number_pane_vc_g1

0xc3ee,	// (0x0001ab84) list_double_number_pane_vc_g2_ParamLimits

0xc3ee,	// (0x0001ab84) list_double_number_pane_vc_g2

0x0001,

0xf60c,	// (0x0001dda2) list_double_number_pane_vc_g_ParamLimits

0xf60c,	// (0x0001dda2) list_double_number_pane_vc_g

0xce87,	// (0x0001b61d) list_double_number_pane_vc_t1_ParamLimits

0xce87,	// (0x0001b61d) list_double_number_pane_vc_t1

0xce9b,	// (0x0001b631) list_double_number_pane_vc_t2_ParamLimits

0xce9b,	// (0x0001b631) list_double_number_pane_vc_t2

0xce6f,	// (0x0001b605) list_double_number_pane_vc_t3_ParamLimits

0xce6f,	// (0x0001b605) list_double_number_pane_vc_t3

0x0002,

0xfa89,	// (0x0001e21f) list_double_number_pane_vc_t_ParamLimits

0xfa89,	// (0x0001e21f) list_double_number_pane_vc_t

0xcead,	// (0x0001b643) list_double_large_graphic_pane_vc_g1_ParamLimits

0xcead,	// (0x0001b643) list_double_large_graphic_pane_vc_g1

0xceb9,	// (0x0001b64f) list_double_large_graphic_pane_vc_g2_ParamLimits

0xceb9,	// (0x0001b64f) list_double_large_graphic_pane_vc_g2

0xcd9e,	// (0x0001b534) list_double_large_graphic_pane_vc_g3_ParamLimits

0xcd9e,	// (0x0001b534) list_double_large_graphic_pane_vc_g3

0xcec8,	// (0x0001b65e) list_double_large_graphic_pane_vc_g4_ParamLimits

0xcec8,	// (0x0001b65e) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa90,	// (0x0001e226) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa90,	// (0x0001e226) list_double_large_graphic_pane_vc_g

0xced4,	// (0x0001b66a) list_double_large_graphic_pane_vc_t1_ParamLimits

0xced4,	// (0x0001b66a) list_double_large_graphic_pane_vc_t1

0xcee6,	// (0x0001b67c) list_double_large_graphic_pane_vc_t2_ParamLimits

0xcee6,	// (0x0001b67c) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa99,	// (0x0001e22f) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa99,	// (0x0001e22f) list_double_large_graphic_pane_vc_t

0xc3e2,	// (0x0001ab78) list_double_heading_pane_vc_g1_ParamLimits

0xc3e2,	// (0x0001ab78) list_double_heading_pane_vc_g1

0xc3ee,	// (0x0001ab84) list_double_heading_pane_vc_g2_ParamLimits

0xc3ee,	// (0x0001ab84) list_double_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x0001dda2) list_double_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x0001dda2) list_double_heading_pane_vc_g

0xceff,	// (0x0001b695) list_double_heading_pane_vc_t1_ParamLimits

0xceff,	// (0x0001b695) list_double_heading_pane_vc_t1

0xcb8b,	// (0x0001b321) list_double_heading_pane_vc_t2_ParamLimits

0xcb8b,	// (0x0001b321) list_double_heading_pane_vc_t2

0x0001,

0xfa9e,	// (0x0001e234) list_double_heading_pane_vc_t_ParamLimits

0xfa9e,	// (0x0001e234) list_double_heading_pane_vc_t

0xcf13,	// (0x0001b6a9) list_double_graphic_pane_vc_g1_ParamLimits

0xcf13,	// (0x0001b6a9) list_double_graphic_pane_vc_g1

0xcf23,	// (0x0001b6b9) list_double_graphic_pane_vc_g2_ParamLimits

0xcf23,	// (0x0001b6b9) list_double_graphic_pane_vc_g2

0xcf32,	// (0x0001b6c8) list_double_graphic_pane_vc_g3_ParamLimits

0xcf32,	// (0x0001b6c8) list_double_graphic_pane_vc_g3

0x0002,

0xfaa3,	// (0x0001e239) list_double_graphic_pane_vc_g_ParamLimits

0xfaa3,	// (0x0001e239) list_double_graphic_pane_vc_g

0xcf3e,	// (0x0001b6d4) list_double_graphic_pane_vc_t1_ParamLimits

0xcf3e,	// (0x0001b6d4) list_double_graphic_pane_vc_t1

0xce6f,	// (0x0001b605) list_double_graphic_pane_vc_t2_ParamLimits

0xce6f,	// (0x0001b605) list_double_graphic_pane_vc_t2

0x0001,

0xfaaa,	// (0x0001e240) list_double_graphic_pane_vc_t_ParamLimits

0xfaaa,	// (0x0001e240) list_double_graphic_pane_vc_t

0xd34a,	// (0x0001bae0) aid_size_cell_fastswap

0xd352,	// (0x0001bae8) aid_size_cell_touch_ParamLimits

0xd352,	// (0x0001bae8) aid_size_cell_touch

0xd5ad,	// (0x0001bd43) popup_fast_swap_wide_window_ParamLimits

0xd5ad,	// (0x0001bd43) popup_fast_swap_wide_window

0xd6a3,	// (0x0001be39) touch_pane_ParamLimits

0xd6a3,	// (0x0001be39) touch_pane

0x31b8,	// (0x0001194e) button_value_adjust_pane_cp2

0xc82c,	// (0x0001afc2) button_value_adjust_pane_cp4

0xc84c,	// (0x0001afe2) form_field_data_pane_cp2

0xc86b,	// (0x0001b001) form_field_data_wide_pane_cp2

0x3880,	// (0x00012016) bg_scroll_pane_ParamLimits

0xd92f,	// (0x0001c0c5) scroll_handle_pane_ParamLimits

0xd943,	// (0x0001c0d9) scroll_sc2_down_pane_ParamLimits

0xd943,	// (0x0001c0d9) scroll_sc2_down_pane

0x38b1,	// (0x00012047) scroll_sc2_up_pane_ParamLimits

0x38b1,	// (0x00012047) scroll_sc2_up_pane

0x73b5,	// (0x00015b4b) grid_wheel_folder_pane_g1_ParamLimits

0x73b5,	// (0x00015b4b) grid_wheel_folder_pane_g1

0xdb08,	// (0x0001c29e) clock_nsta_pane_cp2_ParamLimits

0xdb08,	// (0x0001c29e) clock_nsta_pane_cp2

0x40de,	// (0x00012874) listscroll_midp_pane_ParamLimits

0x40ea,	// (0x00012880) midp_canvas_pane

0x43d0,	// (0x00012b66) nsta_clock_indic_pane

0x442e,	// (0x00012bc4) listscroll_form_pane_vc

0x444a,	// (0x00012be0) listscroll_set_pane_vc_ParamLimits

0x444a,	// (0x00012be0) listscroll_set_pane_vc

0x4ade,	// (0x00013274) clock_nsta_pane

0x4b53,	// (0x000132e9) indicator_nsta_pane

0x4e2a,	// (0x000135c0) bg_popup_sub_pane_cp2_ParamLimits

0x4e3e,	// (0x000135d4) find_pane_cp2_ParamLimits

0x4e3e,	// (0x000135d4) find_pane_cp2

0x4e54,	// (0x000135ea) grid_toobar_pane_ParamLimits

0x4ffc,	// (0x00013792) list_form_gen_pane_vc_ParamLimits

0x4ffc,	// (0x00013792) list_form_gen_pane_vc

0x5012,	// (0x000137a8) scroll_pane_cp8_vc_ParamLimits

0x5012,	// (0x000137a8) scroll_pane_cp8_vc

0x508e,	// (0x00013824) data_form_wide_pane_vc_ParamLimits

0x508e,	// (0x00013824) data_form_wide_pane_vc

0x509a,	// (0x00013830) form_field_data_wide_pane_vc_g1

0x50a2,	// (0x00013838) form_field_data_wide_pane_vc_t1_ParamLimits

0x50a2,	// (0x00013838) form_field_data_wide_pane_vc_t1

0x3290,	// (0x00011a26) input_focus_pane_cp6_vc_ParamLimits

0x3290,	// (0x00011a26) input_focus_pane_cp6_vc

0x540b,	// (0x00013ba1) list_midp_pane_ParamLimits

0x5417,	// (0x00013bad) scroll_pane_cp16_ParamLimits

0x5417,	// (0x00013bad) scroll_pane_cp16

0x5457,	// (0x00013bed) button_value_adjust_pane_ParamLimits

0x5457,	// (0x00013bed) button_value_adjust_pane

0x63db,	// (0x00014b71) button_value_adjust_pane_cp6_ParamLimits

0x63db,	// (0x00014b71) button_value_adjust_pane_cp6

0x64fd,	// (0x00014c93) settings_code_pane_cp_ParamLimits

0x64fd,	// (0x00014c93) settings_code_pane_cp

0x23cd,	// (0x00010b63) cell_touch_pane_g1

0x23cd,	// (0x00010b63) cell_touch_pane_g2

0x0001,

0xf742,	// (0x0001ded8) cell_touch_pane_g

0x6b8a,	// (0x00015320) cell_touch_pane_cp_ParamLimits

0x6b8a,	// (0x00015320) cell_touch_pane_cp

0x6b9a,	// (0x00015330) cell_touch_pane_ParamLimits

0x6b9a,	// (0x00015330) cell_touch_pane

0x23cd,	// (0x00010b63) scroll_sc2_down_pane_g1

0x23cd,	// (0x00010b63) scroll_sc2_up_pane_g1

0x23d7,	// (0x00010b6d) bg_set_opt_pane_cp4_vc

0x6bc0,	// (0x00015356) list_set_graphic_pane_vc_g1_ParamLimits

0x6bc0,	// (0x00015356) list_set_graphic_pane_vc_g1

0x6bcc,	// (0x00015362) list_set_graphic_pane_vc_g2_ParamLimits

0x6bcc,	// (0x00015362) list_set_graphic_pane_vc_g2

0x0001,

0xfa20,	// (0x0001e1b6) list_set_graphic_pane_vc_g_ParamLimits

0xfa20,	// (0x0001e1b6) list_set_graphic_pane_vc_g

0x6bd8,	// (0x0001536e) text_primary_small_cp13_vc_ParamLimits

0x6bd8,	// (0x0001536e) text_primary_small_cp13_vc

0x6bf0,	// (0x00015386) list_set_graphic_pane_vc_ParamLimits

0x6bf0,	// (0x00015386) list_set_graphic_pane_vc

0x23d7,	// (0x00010b6d) input_focus_pane_cp2_vc

0x23cd,	// (0x00010b63) setting_code_pane_vc_g1

0x6c04,	// (0x0001539a) setting_code_pane_vc_t1

0x6c12,	// (0x000153a8) set_text_pane_vc_t1_ParamLimits

0x6c12,	// (0x000153a8) set_text_pane_vc_t1

0x23d7,	// (0x00010b6d) input_focus_pane_cp1_vc

0x6c31,	// (0x000153c7) list_set_text_pane_vc

0x23cd,	// (0x00010b63) setting_text_pane_vc_g1

0x23d7,	// (0x00010b6d) bg_set_opt_pane_cp2_vc

0x6c3b,	// (0x000153d1) setting_slider_graphic_pane_vc_g1

0x6c43,	// (0x000153d9) setting_slider_graphic_pane_vc_t1

0x6c51,	// (0x000153e7) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa25,	// (0x0001e1bb) setting_slider_graphic_pane_vc_t

0x6c5f,	// (0x000153f5) slider_set_pane_cp_vc

0x6c67,	// (0x000153fd) slider_set_pane_vc_g1

0x6c70,	// (0x00015406) slider_set_pane_vc_g2

0x0006,

0xfa2a,	// (0x0001e1c0) slider_set_pane_vc_g

0x33cc,	// (0x00011b62) set_opt_bg_pane_g1_copy1

0x33d4,	// (0x00011b6a) set_opt_bg_pane_g2_copy1

0x6c9c,	// (0x00015432) set_opt_bg_pane_g3_copy1

0x33e4,	// (0x00011b7a) set_opt_bg_pane_g4_copy1

0x33ec,	// (0x00011b82) set_opt_bg_pane_g5_copy1

0x33f4,	// (0x00011b8a) set_opt_bg_pane_g6_copy1

0x6ca4,	// (0x0001543a) set_opt_bg_pane_g7_copy1

0x6cae,	// (0x00015444) set_opt_bg_pane_g8_copy1

0x6cb6,	// (0x0001544c) set_opt_bg_pane_g9_copy1

0x23d7,	// (0x00010b6d) bg_set_opt_pane_cp_vc

0x6cbe,	// (0x00015454) setting_slider_pane_vc_t1

0x6c43,	// (0x000153d9) setting_slider_pane_vc_t2

0x6c51,	// (0x000153e7) setting_slider_pane_vc_t3

0x0002,

0xfa39,	// (0x0001e1cf) setting_slider_pane_vc_t

0x6c5f,	// (0x000153f5) slider_set_pane_vc

0xde9a,	// (0x0001c630) volume_set_pane_vc_g1

0xe195,	// (0x0001c92b) volume_set_pane_vc_g2

0xe19e,	// (0x0001c934) volume_set_pane_vc_g3

0xe1a7,	// (0x0001c93d) volume_set_pane_vc_g4

0xe1b0,	// (0x0001c946) volume_set_pane_vc_g5

0xe1b9,	// (0x0001c94f) volume_set_pane_vc_g6

0xe1c2,	// (0x0001c958) volume_set_pane_vc_g7

0xe1cb,	// (0x0001c961) volume_set_pane_vc_g8

0xe1d4,	// (0x0001c96a) volume_set_pane_vc_g9

0xe1dd,	// (0x0001c973) volume_set_pane_vc_g10

0x0009,

0xfa40,	// (0x0001e1d6) volume_set_pane_vc_g

0x6ccd,	// (0x00015463) volume_set_pane_vc

0x6cd5,	// (0x0001546b) button_value_adjust_pane_cp1_vc

0x6cdf,	// (0x00015475) list_highlight_pane_cp2_vc

0x6ce8,	// (0x0001547e) list_set_pane_vc_ParamLimits

0x6ce8,	// (0x0001547e) list_set_pane_vc

0x6d3a,	// (0x000154d0) main_pane_set_vc_t1_ParamLimits

0x6d3a,	// (0x000154d0) main_pane_set_vc_t1

0x6d4f,	// (0x000154e5) main_pane_set_vc_t2_ParamLimits

0x6d4f,	// (0x000154e5) main_pane_set_vc_t2

0x6d61,	// (0x000154f7) main_pane_set_vc_t3_ParamLimits

0x6d61,	// (0x000154f7) main_pane_set_vc_t3

0x6d73,	// (0x00015509) main_pane_set_vc_t4_ParamLimits

0x6d73,	// (0x00015509) main_pane_set_vc_t4

0x0003,

0xfa55,	// (0x0001e1eb) main_pane_set_vc_t_ParamLimits

0xfa55,	// (0x0001e1eb) main_pane_set_vc_t

0x6d85,	// (0x0001551b) setting_code_pane_vc_ParamLimits

0x6d85,	// (0x0001551b) setting_code_pane_vc

0x6d94,	// (0x0001552a) setting_slider_graphic_pane_vc

0x6d94,	// (0x0001552a) setting_slider_pane_vc

0x6d94,	// (0x0001552a) setting_text_pane_vc

0x6d94,	// (0x0001552a) setting_volume_pane_vc

0x6d9c,	// (0x00015532) scroll_pane_cp121_vc

0x31a6,	// (0x0001193c) set_content_pane_vc

0x6fac,	// (0x00015742) button_value_adjust_pane_g1

0x6fb5,	// (0x0001574b) button_value_adjust_pane_g2

0x0001,

0xfaaf,	// (0x0001e245) button_value_adjust_pane_g

0x6fbe,	// (0x00015754) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6fbe,	// (0x00015754) form_field_slider_wide_pane_vc_t1

0x6fd2,	// (0x00015768) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6fd2,	// (0x00015768) form_field_slider_wide_pane_vc_t2

0x0001,

0xfab4,	// (0x0001e24a) form_field_slider_wide_pane_vc_t_ParamLimits

0xfab4,	// (0x0001e24a) form_field_slider_wide_pane_vc_t

0x274c,	// (0x00010ee2) input_focus_pane_cp10_vc_ParamLimits

0x274c,	// (0x00010ee2) input_focus_pane_cp10_vc

0x6fe4,	// (0x0001577a) slider_cont_pane_cp1_vc_ParamLimits

0x6fe4,	// (0x0001577a) slider_cont_pane_cp1_vc

0x6c67,	// (0x000153fd) slider_form_pane_g1_cp2

0x6c70,	// (0x00015406) slider_form_pane_g2_cp2

0x6ffd,	// (0x00015793) form_field_slider_pane_vc_t3

0x700b,	// (0x000157a1) form_field_slider_pane_vc_t4

0x7019,	// (0x000157af) slider_form_pane_vc_ParamLimits

0x7019,	// (0x000157af) slider_form_pane_vc

0x7026,	// (0x000157bc) form_field_slider_pane_vc_t1_ParamLimits

0x7026,	// (0x000157bc) form_field_slider_pane_vc_t1

0x6fd2,	// (0x00015768) form_field_slider_pane_vc_t2_ParamLimits

0x6fd2,	// (0x00015768) form_field_slider_pane_vc_t2

0x0001,

0xfac4,	// (0x0001e25a) form_field_slider_pane_vc_t_ParamLimits

0xfac4,	// (0x0001e25a) form_field_slider_pane_vc_t

0x274c,	// (0x00010ee2) input_focus_pane_cp9_vc_ParamLimits

0x274c,	// (0x00010ee2) input_focus_pane_cp9_vc

0x7042,	// (0x000157d8) slider_cont_pane_vc_ParamLimits

0x7042,	// (0x000157d8) slider_cont_pane_vc

0x7054,	// (0x000157ea) list_form_graphic_pane_cp_vc_ParamLimits

0x7054,	// (0x000157ea) list_form_graphic_pane_cp_vc

0x509a,	// (0x00013830) form_field_popup_wide_pane_vc_g1

0x7069,	// (0x000157ff) form_field_popup_wide_pane_vc_t1_ParamLimits

0x7069,	// (0x000157ff) form_field_popup_wide_pane_vc_t1

0x3290,	// (0x00011a26) input_focus_pane_cp8_vc_ParamLimits

0x3290,	// (0x00011a26) input_focus_pane_cp8_vc

0x7080,	// (0x00015816) list_form_wide_pane_vc_ParamLimits

0x7080,	// (0x00015816) list_form_wide_pane_vc

0x708c,	// (0x00015822) list_form_graphic_pane_vc_g1

0x7094,	// (0x0001582a) list_form_graphic_pane_vc_t1_ParamLimits

0x7094,	// (0x0001582a) list_form_graphic_pane_vc_t1

0x24b7,	// (0x00010c4d) list_highlight_pane_cp5_vc_ParamLimits

0x24b7,	// (0x00010c4d) list_highlight_pane_cp5_vc

0x70b0,	// (0x00015846) list_form_graphic_pane_vc_ParamLimits

0x70b0,	// (0x00015846) list_form_graphic_pane_vc

0x509a,	// (0x00013830) form_field_popup_pane_vc_g1

0x70c6,	// (0x0001585c) form_field_popup_pane_vc_t1_ParamLimits

0x70c6,	// (0x0001585c) form_field_popup_pane_vc_t1

0x3290,	// (0x00011a26) input_focus_pane_cp7_vc_ParamLimits

0x3290,	// (0x00011a26) input_focus_pane_cp7_vc

0x70dd,	// (0x00015873) list_form_pane_vc_ParamLimits

0x70dd,	// (0x00015873) list_form_pane_vc

0x70e9,	// (0x0001587f) data_form_pane_vc_t1_ParamLimits

0x70e9,	// (0x0001587f) data_form_pane_vc_t1

0x33cc,	// (0x00011b62) input_focus_pane_vc_g1

0x33d4,	// (0x00011b6a) input_focus_pane_vc_g2

0x33dc,	// (0x00011b72) input_focus_pane_vc_g3

0x33e4,	// (0x00011b7a) input_focus_pane_vc_g4

0x33ec,	// (0x00011b82) input_focus_pane_vc_g5

0x33f4,	// (0x00011b8a) input_focus_pane_vc_g6

0x33fc,	// (0x00011b92) input_focus_pane_vc_g7

0x3404,	// (0x00011b9a) input_focus_pane_vc_g8

0x340c,	// (0x00011ba2) input_focus_pane_vc_g9

0x23cd,	// (0x00010b63) input_focus_pane_vc_g10

0x0009,

0xf6cb,	// (0x0001de61) input_focus_pane_vc_g

0x508e,	// (0x00013824) data_form_pane_vc_ParamLimits

0x508e,	// (0x00013824) data_form_pane_vc

0x509a,	// (0x00013830) form_field_data_pane_vc_g1

0x7104,	// (0x0001589a) form_field_data_pane_vc_t1_ParamLimits

0x7104,	// (0x0001589a) form_field_data_pane_vc_t1

0x3290,	// (0x00011a26) input_focus_pane_vc_ParamLimits

0x3290,	// (0x00011a26) input_focus_pane_vc

0x711e,	// (0x000158b4) button_value_adjust_pane_cp3_vc

0x7126,	// (0x000158bc) button_value_adjust_pane_cp5_vc

0x712e,	// (0x000158c4) form_field_data_pane_vc_ParamLimits

0x712e,	// (0x000158c4) form_field_data_pane_vc

0x7145,	// (0x000158db) form_field_data_pane_vc_cp2

0x714d,	// (0x000158e3) form_field_data_wide_pane_vc_ParamLimits

0x714d,	// (0x000158e3) form_field_data_wide_pane_vc

0x7163,	// (0x000158f9) form_field_data_wide_pane_vc_cp2

0x716b,	// (0x00015901) form_field_popup_pane_vc_ParamLimits

0x716b,	// (0x00015901) form_field_popup_pane_vc

0x7182,	// (0x00015918) form_field_popup_wide_pane_vc_ParamLimits

0x7182,	// (0x00015918) form_field_popup_wide_pane_vc

0x7198,	// (0x0001592e) form_field_slider_pane_vc_ParamLimits

0x7198,	// (0x0001592e) form_field_slider_pane_vc

0x71ab,	// (0x00015941) form_field_slider_wide_pane_vc_ParamLimits

0x71ab,	// (0x00015941) form_field_slider_wide_pane_vc

0x71be,	// (0x00015954) grid_touch_1_pane_ParamLimits

0x71be,	// (0x00015954) grid_touch_1_pane

0x71ca,	// (0x00015960) grid_touch_2_pane_ParamLimits

0x71ca,	// (0x00015960) grid_touch_2_pane

0x439b,	// (0x00012b31) touch_pane_g1_ParamLimits

0x439b,	// (0x00012b31) touch_pane_g1

0x71e2,	// (0x00015978) cell_app_pane_cp_wide_ParamLimits

0x71e2,	// (0x00015978) cell_app_pane_cp_wide

0x71f3,	// (0x00015989) grid_popup_fast_wide_pane_ParamLimits

0x71f3,	// (0x00015989) grid_popup_fast_wide_pane

0x7207,	// (0x0001599d) scroll_pane_cp19_ParamLimits

0x7207,	// (0x0001599d) scroll_pane_cp19

0x23d7,	// (0x00010b6d) bg_popup_window_pane_cp20

0x721b,	// (0x000159b1) listscroll_popup_fast_wide_pane

0x24b7,	// (0x00010c4d) grid_indicator_nsta_pane

0x7223,	// (0x000159b9) clock_nsta_pane_g1

0x722c,	// (0x000159c2) clock_nsta_pane_t1

0x7248,	// (0x000159de) cell_indicator_nsta_pane_ParamLimits

0x7248,	// (0x000159de) cell_indicator_nsta_pane

0x7280,	// (0x00015a16) cell_indicator_nsta_pane_g1

0x728e,	// (0x00015a24) cell_indicator_nsta_pane_g2

0x0001,

0xface,	// (0x0001e264) cell_indicator_nsta_pane_g

0x72a4,	// (0x00015a3a) clock_nsta_pane_cp

0x72ac,	// (0x00015a42) indicator_nsta_pane_cp

0x72b4,	// (0x00015a4a) nsta_clock_indic_pane_g1

0x259a,	// (0x00010d30) grid_indicator_pane

0x39a3,	// (0x00012139) scroll_pane_cp29

0xda57,	// (0x0001c1ed) indicator_nsta_pane_cp2_ParamLimits

0xda57,	// (0x0001c1ed) indicator_nsta_pane_cp2

0x24b7,	// (0x00010c4d) main_apps_wheel_pane

0x52f2,	// (0x00013a88) form_midp_field_text_pane_ParamLimits

0x5437,	// (0x00013bcd) scroll_bar_cp050_ParamLimits

0x72ec,	// (0x00015a82) cell_indicator_pane_ParamLimits

0x72ec,	// (0x00015a82) cell_indicator_pane

0x7309,	// (0x00015a9f) cell_indicator_pane_g1

0x7313,	// (0x00015aa9) grid_wheel_folder_pane_ParamLimits

0x7313,	// (0x00015aa9) grid_wheel_folder_pane

0x7329,	// (0x00015abf) list_wheel_apps_pane_ParamLimits

0x7329,	// (0x00015abf) list_wheel_apps_pane

0x733a,	// (0x00015ad0) main_apps_wheel_pane_g1_ParamLimits

0x733a,	// (0x00015ad0) main_apps_wheel_pane_g1

0x734e,	// (0x00015ae4) main_apps_wheel_pane_g2_ParamLimits

0x734e,	// (0x00015ae4) main_apps_wheel_pane_g2

0x0001,

0xfadd,	// (0x0001e273) main_apps_wheel_pane_g_ParamLimits

0xfadd,	// (0x0001e273) main_apps_wheel_pane_g

0x7366,	// (0x00015afc) main_apps_wheel_pane_t1_ParamLimits

0x7366,	// (0x00015afc) main_apps_wheel_pane_t1

0x7389,	// (0x00015b1f) list_wheel_apps_pane_g1

0x7391,	// (0x00015b27) list_wheel_apps_pane_g2

0x7399,	// (0x00015b2f) list_wheel_apps_pane_g3

0x73a1,	// (0x00015b37) list_wheel_apps_pane_g4

0x73ab,	// (0x00015b41) list_wheel_apps_pane_g5

0x0004,

0xfae2,	// (0x0001e278) list_wheel_apps_pane_g

0x3f54,	// (0x000126ea) navi_icon_text_pane

0x4a0d,	// (0x000131a3) aid_fill_nsta

0x73ce,	// (0x00015b64) navi_icon_text_pane_g1

0x73dd,	// (0x00015b73) navi_icon_text_pane_t1

0x3df0,	// (0x00012586) list_set_graphic_pane_t1_ParamLimits

0x3df0,	// (0x00012586) list_set_graphic_pane_t1

0x5b48,	// (0x000142de) popup_midp_note_alarm_window_t6_ParamLimits

0x5b48,	// (0x000142de) popup_midp_note_alarm_window_t6

0x5b5a,	// (0x000142f0) popup_midp_note_alarm_window_t7_ParamLimits

0x5b5a,	// (0x000142f0) popup_midp_note_alarm_window_t7

0x5b6c,	// (0x00014302) popup_midp_note_alarm_window_t8_ParamLimits

0x5b6c,	// (0x00014302) popup_midp_note_alarm_window_t8

0x5b7e,	// (0x00014314) popup_midp_note_alarm_window_t9_ParamLimits

0x5b7e,	// (0x00014314) popup_midp_note_alarm_window_t9

0x5b90,	// (0x00014326) popup_midp_note_alarm_window_t10_ParamLimits

0x5b90,	// (0x00014326) popup_midp_note_alarm_window_t10

0x5ba2,	// (0x00014338) popup_midp_note_alarm_window_t11_ParamLimits

0x5ba2,	// (0x00014338) popup_midp_note_alarm_window_t11

0x5bb4,	// (0x0001434a) scroll_pane_cp17_ParamLimits

0x5bb4,	// (0x0001434a) scroll_pane_cp17

0xde9a,	// (0x0001c630) volume_small_pane_cp_g1

0xe1e6,	// (0x0001c97c) volume_small_pane_cp_g2

0xe1ef,	// (0x0001c985) volume_small_pane_cp_g3

0xe1f8,	// (0x0001c98e) volume_small_pane_cp_g4

0xe201,	// (0x0001c997) volume_small_pane_cp_g5

0xe20a,	// (0x0001c9a0) volume_small_pane_cp_g6

0xe213,	// (0x0001c9a9) volume_small_pane_cp_g7

0xe21c,	// (0x0001c9b2) volume_small_pane_cp_g8

0xe225,	// (0x0001c9bb) volume_small_pane_cp_g9

0xe22e,	// (0x0001c9c4) volume_small_pane_cp_g10

0x41b5,	// (0x0001294b) midp_ticker_pane_g1_ParamLimits

0x41c1,	// (0x00012957) midp_ticker_pane_g2_ParamLimits

0xf793,	// (0x0001df29) midp_ticker_pane_g_ParamLimits

0x41cd,	// (0x00012963) midp_ticker_pane_t1_ParamLimits

0x4a23,	// (0x000131b9) aid_fill_nsta_2

0x5423,	// (0x00013bb9) list_form2_midp_pane

0x657b,	// (0x00014d11) midp_editing_number_pane_ParamLimits

0x658a,	// (0x00014d20) midp_ticker_pane_ParamLimits

0x73f2,	// (0x00015b88) form2_midp_field_pane

0x7416,	// (0x00015bac) scroll_pane_cp51

0x7436,	// (0x00015bcc) form2_midp_button_pane_ParamLimits

0x7436,	// (0x00015bcc) form2_midp_button_pane

0x7448,	// (0x00015bde) form2_midp_content_pane_ParamLimits

0x7448,	// (0x00015bde) form2_midp_content_pane

0x7462,	// (0x00015bf8) form2_midp_field_choice_group_pane

0x746a,	// (0x00015c00) form2_midp_field_pane_g1

0x7472,	// (0x00015c08) form2_midp_field_pane_g2

0x747a,	// (0x00015c10) form2_midp_field_pane_g3

0x7482,	// (0x00015c18) form2_midp_field_pane_g4

0x0003,

0xfb07,	// (0x0001e29d) form2_midp_field_pane_g

0x748a,	// (0x00015c20) form2_midp_gauge_slider_pane

0x7492,	// (0x00015c28) form2_midp_gauge_wait_pane

0x749a,	// (0x00015c30) form2_midp_image_pane_ParamLimits

0x749a,	// (0x00015c30) form2_midp_image_pane

0x74b5,	// (0x00015c4b) form2_midp_label_pane_ParamLimits

0x74b5,	// (0x00015c4b) form2_midp_label_pane

0x74ce,	// (0x00015c64) form2_midp_label_pane_cp_ParamLimits

0x74ce,	// (0x00015c64) form2_midp_label_pane_cp

0x74ef,	// (0x00015c85) form2_midp_string_pane_ParamLimits

0x74ef,	// (0x00015c85) form2_midp_string_pane

0xcf50,	// (0x0001b6e6) form2_midp_text_pane_ParamLimits

0xcf50,	// (0x0001b6e6) form2_midp_text_pane

0x751a,	// (0x00015cb0) form2_midp_time_pane

0x752a,	// (0x00015cc0) input_focus_pane_cp51_ParamLimits

0x752a,	// (0x00015cc0) input_focus_pane_cp51

0x7542,	// (0x00015cd8) form2_midp_label_pane_t1_ParamLimits

0x7542,	// (0x00015cd8) form2_midp_label_pane_t1

0xcf69,	// (0x0001b6ff) form2_mdip_text_pane_t1_ParamLimits

0xcf69,	// (0x0001b6ff) form2_mdip_text_pane_t1

0xcf86,	// (0x0001b71c) form2_midp_time_pane_t1

0x75b9,	// (0x00015d4f) form2_midp_gauge_slider_pane_t1

0x75cb,	// (0x00015d61) form2_midp_gauge_slider_pane_t2

0x75dd,	// (0x00015d73) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb10,	// (0x0001e2a6) form2_midp_gauge_slider_pane_t

0x75ef,	// (0x00015d85) form2_midp_slider_pane

0x75fb,	// (0x00015d91) form2_midp_gauge_wait_pane_t1

0x7609,	// (0x00015d9f) form2_midp_wait_pane_ParamLimits

0x7609,	// (0x00015d9f) form2_midp_wait_pane

0x7634,	// (0x00015dca) list_single_2graphic_pane_cp4_ParamLimits

0x7634,	// (0x00015dca) list_single_2graphic_pane_cp4

0x50e5,	// (0x0001387b) list_single_midp_graphic_pane_cp_ParamLimits

0x50e5,	// (0x0001387b) list_single_midp_graphic_pane_cp

0x23d7,	// (0x00010b6d) list_highlight_pane_cp20

0x7663,	// (0x00015df9) list_single_2graphic_pane_g1_cp4

0x6a8f,	// (0x00015225) list_single_2graphic_pane_g2_cp4

0x766b,	// (0x00015e01) list_single_2graphic_pane_t1_cp4

0x24b7,	// (0x00010c4d) list_highlight_pane_cp21

0x767a,	// (0x00015e10) list_single_midp_graphic_pane_g4_cp

0x7689,	// (0x00015e1f) list_single_midp_graphic_pane_t1_cp

0x769e,	// (0x00015e34) form2_mdip_string_pane_t1_ParamLimits

0x769e,	// (0x00015e34) form2_mdip_string_pane_t1

0x23d7,	// (0x00010b6d) bg_wml_button_pane_cp2

0x23cd,	// (0x00010b63) form2_midp_image_pane_g1

0xc62d,	// (0x0001adc3) list_double_large_graphic_pane_g5_ParamLimits

0xc62d,	// (0x0001adc3) list_double_large_graphic_pane_g5

0x40de,	// (0x00012874) midp_form_pane_ParamLimits

0x24b7,	// (0x00010c4d) main_apps_wheel_pane_ParamLimits

0x4801,	// (0x00012f97) popup_preview_window_ParamLimits

0x4801,	// (0x00012f97) popup_preview_window

0x49b2,	// (0x00013148) popup_touch_info_window_ParamLimits

0x49b2,	// (0x00013148) popup_touch_info_window

0x49d0,	// (0x00013166) popup_touch_menu_window_ParamLimits

0x49d0,	// (0x00013166) popup_touch_menu_window

0x23c3,	// (0x00010b59) bg_popup_sub_pane_cp6

0x77d8,	// (0x00015f6e) list_touch_menu_pane

0x77e0,	// (0x00015f76) list_single_touch_menu_pane_ParamLimits

0x77e0,	// (0x00015f76) list_single_touch_menu_pane

0x77f5,	// (0x00015f8b) list_single_touch_menu_pane_t1

0x24b7,	// (0x00010c4d) bg_popup_sub_pane_cp7_ParamLimits

0x24b7,	// (0x00010c4d) bg_popup_sub_pane_cp7

0x7803,	// (0x00015f99) heading_sub_pane

0x780b,	// (0x00015fa1) list_touch_info_pane_ParamLimits

0x780b,	// (0x00015fa1) list_touch_info_pane

0x781a,	// (0x00015fb0) list_single_touch_info_pane_ParamLimits

0x781a,	// (0x00015fb0) list_single_touch_info_pane

0x782c,	// (0x00015fc2) list_single_touch_info_pane_t1

0x783a,	// (0x00015fd0) list_single_touch_info_pane_t2

0x0001,

0xfb1e,	// (0x0001e2b4) list_single_touch_info_pane_t

0x40d6,	// (0x0001286c) bg_popup_heading_pane_cp

0x7848,	// (0x00015fde) heading_sub_pane_t1

0x5028,	// (0x000137be) bg_popup_preview_window_pane_cp_ParamLimits

0x5028,	// (0x000137be) bg_popup_preview_window_pane_cp

0x7803,	// (0x00015f99) heading_preview_pane

0x780b,	// (0x00015fa1) list_preview_pane_ParamLimits

0x780b,	// (0x00015fa1) list_preview_pane

0x7856,	// (0x00015fec) popup_preview_window_g1

0x781a,	// (0x00015fb0) list_single_preview_pane_ParamLimits

0x781a,	// (0x00015fb0) list_single_preview_pane

0x785e,	// (0x00015ff4) list_single_preview_pane_g1

0x7866,	// (0x00015ffc) list_single_preview_pane_t1

0x782c,	// (0x00015fc2) list_single_preview_pane_t2

0x0001,

0xfb23,	// (0x0001e2b9) list_single_preview_pane_t

0x7874,	// (0x0001600a) bg_popup_heading_pane_cp2_ParamLimits

0x7874,	// (0x0001600a) bg_popup_heading_pane_cp2

0x788a,	// (0x00016020) heading_preview_pane_g1

0x7892,	// (0x00016028) heading_preview_pane_t1_ParamLimits

0x7892,	// (0x00016028) heading_preview_pane_t1

0x25bd,	// (0x00010d53) soft_indicator_pane_t1_ParamLimits

0x2c97,	// (0x0001142d) scroll_pane_ParamLimits

0x38a8,	// (0x0001203e) scroll_sc2_left_pane

0x389f,	// (0x00012035) scroll_sc2_right_pane

0x38c7,	// (0x0001205d) scroll_bg_pane_g1_ParamLimits

0x38dc,	// (0x00012072) scroll_bg_pane_g2_ParamLimits

0x38f4,	// (0x0001208a) scroll_bg_pane_g3_ParamLimits

0xf722,	// (0x0001deb8) scroll_bg_pane_g_ParamLimits

0x38c7,	// (0x0001205d) scroll_handle_pane_g1_ParamLimits

0x3916,	// (0x000120ac) scroll_handle_pane_g2_ParamLimits

0x38f4,	// (0x0001208a) scroll_handle_pane_g3_ParamLimits

0xf729,	// (0x0001debf) scroll_handle_pane_g_ParamLimits

0x448c,	// (0x00012c22) popup_choice_list_window_ParamLimits

0x448c,	// (0x00012c22) popup_choice_list_window

0x4e36,	// (0x000135cc) choice_list_pane

0x4eda,	// (0x00013670) cell_toolbar_pane_t1

0x4f02,	// (0x00013698) toolbar_button_pane_ParamLimits

0x6078,	// (0x0001480e) ai_gene_pane_1_t2_ParamLimits

0x6078,	// (0x0001480e) ai_gene_pane_1_t2

0x0001,

0xf93a,	// (0x0001e0d0) ai_gene_pane_1_t_ParamLimits

0xf93a,	// (0x0001e0d0) ai_gene_pane_1_t

0x78af,	// (0x00016045) scroll_sc2_left_pane_g1

0x78af,	// (0x00016045) scroll_sc2_right_pane_g1

0x445c,	// (0x00012bf2) bg_popup_sub_pane_cp10

0x78b9,	// (0x0001604f) list_choice_list_pane

0x78d0,	// (0x00016066) list_single_choice_list_pane_ParamLimits

0x78d0,	// (0x00016066) list_single_choice_list_pane

0x78e4,	// (0x0001607a) list_single_choice_list_pane_g1

0x78ec,	// (0x00016082) list_single_choice_list_pane_t1_ParamLimits

0x78ec,	// (0x00016082) list_single_choice_list_pane_t1

0x7901,	// (0x00016097) choice_list_pane_g1

0x7909,	// (0x0001609f) choice_list_pane_t1

0x23c3,	// (0x00010b59) input_focus_pane_cp11

0x377d,	// (0x00011f13) title_pane_stacon_g2_ParamLimits

0x377d,	// (0x00011f13) title_pane_stacon_g2

0x0002,

0xf708,	// (0x0001de9e) title_pane_stacon_g_ParamLimits

0xf708,	// (0x0001de9e) title_pane_stacon_g

0x40d6,	// (0x0001286c) cursor_press_pane

0x4532,	// (0x00012cc8) popup_fep_hwr_window_ParamLimits

0x4532,	// (0x00012cc8) popup_fep_hwr_window

0x45aa,	// (0x00012d40) popup_fep_vkb_window_ParamLimits

0x45aa,	// (0x00012d40) popup_fep_vkb_window

0x7917,	// (0x000160ad) cursor_press_pane_g1

0x0002,

0xfb4c,	// (0x0001e2e2) fep_vkb_side_pane_g_ParamLimits

0xe262,	// (0x0001c9f8) fep_hwr_candidate_pane_ParamLimits

0xe262,	// (0x0001c9f8) fep_hwr_candidate_pane

0xe28c,	// (0x0001ca22) fep_hwr_side_pane_ParamLimits

0xe28c,	// (0x0001ca22) fep_hwr_side_pane

0xe2ac,	// (0x0001ca42) fep_hwr_top_pane_ParamLimits

0xe2ac,	// (0x0001ca42) fep_hwr_top_pane

0xe2c4,	// (0x0001ca5a) fep_hwr_write_pane_ParamLimits

0xe2c4,	// (0x0001ca5a) fep_hwr_write_pane

0xfb4c,	// (0x0001e2e2) fep_vkb_side_pane_g

0x7931,	// (0x000160c7) fep_hwr_top_pane_g1

0x791f,	// (0x000160b5) fep_hwr_top_pane_g2

0xe2f0,	// (0x0001ca86) fep_hwr_top_pane_g3

0x0002,

0xfb28,	// (0x0001e2be) fep_hwr_top_pane_g

0xe305,	// (0x0001ca9b) fep_hwr_top_text_pane

0x3a69,	// (0x000121ff) fep_hwr_top_text_pane_g1

0x7967,	// (0x000160fd) fep_hwr_top_text_pane_t1

0xe3fb,	// (0x0001cb91) fep_hwr_candidate_pane_g1

0x7bcf,	// (0x00016365) fep_vkb_keypad_pane_g3_ParamLimits

0x7bcf,	// (0x00016365) fep_vkb_keypad_pane_g3

0x7bf7,	// (0x0001638d) fep_vkb_keypad_pane_g4_ParamLimits

0x7bf7,	// (0x0001638d) fep_vkb_keypad_pane_g4

0x7c66,	// (0x000163fc) fep_vkb_bottom_pane_g2_ParamLimits

0x7c66,	// (0x000163fc) fep_vkb_bottom_pane_g2

0x0001,

0xfb53,	// (0x0001e2e9) fep_vkb_bottom_pane_g_ParamLimits

0xfb53,	// (0x0001e2e9) fep_vkb_bottom_pane_g

0x78af,	// (0x00016045) cell_vkb_side_pane_g2

0x0001,

0xfb5d,	// (0x0001e2f3) cell_vkb_side_pane_g

0x7cf1,	// (0x00016487) cell_vkb_side_pane_t1

0x7cff,	// (0x00016495) cell_vkb_side_pane_t1_copy1

0x78af,	// (0x00016045) bg_fep_vkb_candidate_pane_g2

0x7e31,	// (0x000165c7) cell_vkb_candidate_pane_ParamLimits

0x7983,	// (0x00016119) aid_size_cell_vkb_ParamLimits

0x7983,	// (0x00016119) aid_size_cell_vkb

0x7e31,	// (0x000165c7) cell_vkb_candidate_pane

0xe415,	// (0x0001cbab) bg_popup_fep_shadow_pane_g1

0x7a11,	// (0x000161a7) fep_vkb_bottom_pane_ParamLimits

0x7a11,	// (0x000161a7) fep_vkb_bottom_pane

0x7a4e,	// (0x000161e4) fep_vkb_candidate_pane_ParamLimits

0x7a4e,	// (0x000161e4) fep_vkb_candidate_pane

0x7a6a,	// (0x00016200) fep_vkb_keypad_pane_ParamLimits

0x7a6a,	// (0x00016200) fep_vkb_keypad_pane

0x7ab0,	// (0x00016246) fep_vkb_side_pane_ParamLimits

0x7ab0,	// (0x00016246) fep_vkb_side_pane

0x7aec,	// (0x00016282) fep_vkb_top_pane_ParamLimits

0x7aec,	// (0x00016282) fep_vkb_top_pane

0x7b28,	// (0x000162be) fep_vkb_top_pane_g1_ParamLimits

0x7b28,	// (0x000162be) fep_vkb_top_pane_g1

0x7b37,	// (0x000162cd) fep_vkb_top_pane_g2_ParamLimits

0x7b37,	// (0x000162cd) fep_vkb_top_pane_g2

0x7b46,	// (0x000162dc) fep_vkb_top_pane_g3_ParamLimits

0x7b46,	// (0x000162dc) fep_vkb_top_pane_g3

0x0003,

0xfb43,	// (0x0001e2d9) fep_vkb_top_pane_g_ParamLimits

0xfb43,	// (0x0001e2d9) fep_vkb_top_pane_g

0x7b64,	// (0x000162fa) fep_vkb_top_text_pane_ParamLimits

0x7b64,	// (0x000162fa) fep_vkb_top_text_pane

0x7b75,	// (0x0001630b) fep_vkb_side_pane_g1_ParamLimits

0x7b75,	// (0x0001630b) fep_vkb_side_pane_g1

0x7bbe,	// (0x00016354) grid_vkb_side_pane_ParamLimits

0x7bbe,	// (0x00016354) grid_vkb_side_pane

0xe41d,	// (0x0001cbb3) bg_popup_fep_shadow_pane_g2

0xe426,	// (0x0001cbbc) bg_popup_fep_shadow_pane_g3

0xe42e,	// (0x0001cbc4) bg_popup_fep_shadow_pane_g4

0xe437,	// (0x0001cbcd) bg_popup_fep_shadow_pane_g5

0xe441,	// (0x0001cbd7) bg_popup_fep_shadow_pane_g6

0xe449,	// (0x0001cbdf) bg_popup_fep_shadow_pane_g7

0x33ec,	// (0x00011b82) bg_popup_fep_shadow_pane_g8

0x7c15,	// (0x000163ab) grid_vkb_keypad_number_pane_ParamLimits

0x7c15,	// (0x000163ab) grid_vkb_keypad_number_pane

0x7c25,	// (0x000163bb) grid_vkb_keypad_pane_ParamLimits

0x7c25,	// (0x000163bb) grid_vkb_keypad_pane

0x7c4b,	// (0x000163e1) fep_vkb_bottom_pane_g1_ParamLimits

0x7c4b,	// (0x000163e1) fep_vkb_bottom_pane_g1

0x7c74,	// (0x0001640a) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7c74,	// (0x0001640a) grid_vkb_keypad_bottom_left_pane

0x7c89,	// (0x0001641f) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7c89,	// (0x0001641f) grid_vkb_keypad_bottom_right_pane

0x7c9e,	// (0x00016434) fep_vkb_top_text_pane_g1

0x7cb9,	// (0x0001644f) fep_vkb_top_text_pane_t1

0x7cce,	// (0x00016464) cell_vkb_side_pane_ParamLimits

0x7cce,	// (0x00016464) cell_vkb_side_pane

0x78af,	// (0x00016045) cell_vkb_side_pane_g1

0x7d0d,	// (0x000164a3) cell_vkb_keypad_pane_ParamLimits

0x7d0d,	// (0x000164a3) cell_vkb_keypad_pane

0x7d88,	// (0x0001651e) cell_vkb_keypad_pane_g1

0x0008,

0xfb70,	// (0x0001e306) bg_popup_fep_shadow_pane_g

0x78af,	// (0x00016045) cell_hwr_side_pane_g1

0x78af,	// (0x00016045) cell_hwr_side_pane_g2

0x7d92,	// (0x00016528) cell_vkb_keypad_pane_t1

0x7da0,	// (0x00016536) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x7da0,	// (0x00016536) cell_vkb_keypad_bottom_left_pane

0x7dbd,	// (0x00016553) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x7dbd,	// (0x00016553) cell_vkb_keypad_bottom_right_pane

0x78af,	// (0x00016045) cell_vkb_keypad_bottom_left_pane_g1

0x78af,	// (0x00016045) cell_vkb_keypad_bottom_right_pane_g1

0x7df6,	// (0x0001658c) cell_vkb_keypad_number_pane_ParamLimits

0x7df6,	// (0x0001658c) cell_vkb_keypad_number_pane

0x7e15,	// (0x000165ab) cell_vkb_keypad_number_pane_g1

0x7e1f,	// (0x000165b5) cell_vkb_keypad_number_pane_g2

0x7e28,	// (0x000165be) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb62,	// (0x0001e2f8) cell_vkb_keypad_number_pane_g

0x7d92,	// (0x00016528) cell_vkb_keypad_number_pane_t1

0x7e4e,	// (0x000165e4) fep_vkb_candidate_pane_g1

0x0001,

0xfb5d,	// (0x0001e2f3) cell_hwr_side_pane_g

0x7e67,	// (0x000165fd) cell_hwr_side_pane_t1

0xe45b,	// (0x0001cbf1) cell_hwr_side_pane_t1_copy1

0x7b56,	// (0x000162ec) cell_hwr_candidate_pane_g1

0xe469,	// (0x0001cbff) cell_hwr_candidate_pane_t1

0x78af,	// (0x00016045) cell_vkb_candidate_pane_g2

0x7eab,	// (0x00016641) cell_vkb_candidate_pane_t1

0x7975,	// (0x0001610b) bg_popup_fep_shadow_pane_ParamLimits

0x7975,	// (0x0001610b) bg_popup_fep_shadow_pane

0xad53,	// (0x000194e9) bg_fep_hwr_top_pane_g4

0x7943,	// (0x000160d9) bg_hwr_side_pane_g1_ParamLimits

0x7943,	// (0x000160d9) bg_hwr_side_pane_g1

0xe341,	// (0x0001cad7) cell_hwr_side_pane_ParamLimits

0xe341,	// (0x0001cad7) cell_hwr_side_pane

0xe37c,	// (0x0001cb12) fep_hwr_write_pane_g1_ParamLimits

0xe37c,	// (0x0001cb12) fep_hwr_write_pane_g1

0xe389,	// (0x0001cb1f) fep_hwr_write_pane_g2_ParamLimits

0xe389,	// (0x0001cb1f) fep_hwr_write_pane_g2

0xe396,	// (0x0001cb2c) fep_hwr_write_pane_g3_ParamLimits

0xe396,	// (0x0001cb2c) fep_hwr_write_pane_g3

0xe3a4,	// (0x0001cb3a) fep_hwr_write_pane_g4_ParamLimits

0xe3a4,	// (0x0001cb3a) fep_hwr_write_pane_g4

0x0005,

0xfb2f,	// (0x0001e2c5) fep_hwr_write_pane_g_ParamLimits

0xfb2f,	// (0x0001e2c5) fep_hwr_write_pane_g

0xad53,	// (0x000194e9) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xad53,	// (0x000194e9) bg_fep_hwr_candidate_pane_g2

0xe3b9,	// (0x0001cb4f) cell_hwr_candidate_pane_ParamLimits

0xe3b9,	// (0x0001cb4f) cell_hwr_candidate_pane

0xe3fb,	// (0x0001cb91) fep_hwr_candidate_pane_g1_ParamLimits

0x79b1,	// (0x00016147) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x79b1,	// (0x00016147) bg_popup_fep_shadow_pane_cp2

0x7b56,	// (0x000162ec) fep_vkb_top_pane_g4_ParamLimits

0x7b56,	// (0x000162ec) fep_vkb_top_pane_g4

0x7b9c,	// (0x00016332) fep_vkb_side_pane_g2_ParamLimits

0x7b9c,	// (0x00016332) fep_vkb_side_pane_g2

0xc761,	// (0x0001aef7) list_setting_pane_t4_ParamLimits

0xc761,	// (0x0001aef7) list_setting_pane_t4

0xc7f3,	// (0x0001af89) list_setting_number_pane_t5_ParamLimits

0xc7f3,	// (0x0001af89) list_setting_number_pane_t5

0x3aab,	// (0x00012241) list_double_heading_pane_cp2_ParamLimits

0x3aab,	// (0x00012241) list_double_heading_pane_cp2

0x32b6,	// (0x00011a4c) list_double_heading_pane_g1_cp2_ParamLimits

0x32b6,	// (0x00011a4c) list_double_heading_pane_g1_cp2

0x32c2,	// (0x00011a58) list_double_heading_pane_g2_cp2_ParamLimits

0x32c2,	// (0x00011a58) list_double_heading_pane_g2_cp2

0x7eb9,	// (0x0001664f) list_double_heading_pane_t1_cp2_ParamLimits

0x7eb9,	// (0x0001664f) list_double_heading_pane_t1_cp2

0x7ecf,	// (0x00016665) list_double_heading_pane_t2_cp2_ParamLimits

0x7ecf,	// (0x00016665) list_double_heading_pane_t2_cp2

0x23ab,	// (0x00010b41) aid_value_unit2

0xd5f9,	// (0x0001bd8f) popup_preview_fixed_window

0x275a,	// (0x00010ef0) bg_popup_preview_window_pane_cp02

0x7ee1,	// (0x00016677) list_preview_fixed_pane

0x7f27,	// (0x000166bd) list_empty_pane_fp_ParamLimits

0x7f27,	// (0x000166bd) list_empty_pane_fp

0x7f27,	// (0x000166bd) list_single_cale_day_pane_fp_ParamLimits

0x7f27,	// (0x000166bd) list_single_cale_day_pane_fp

0x7f27,	// (0x000166bd) list_single_graphic_heading_pane_fp_ParamLimits

0x7f27,	// (0x000166bd) list_single_graphic_heading_pane_fp

0x7f27,	// (0x000166bd) list_single_graphic_pane_fp_ParamLimits

0x7f27,	// (0x000166bd) list_single_graphic_pane_fp

0x7f27,	// (0x000166bd) list_single_heading_pane_fp_ParamLimits

0x7f27,	// (0x000166bd) list_single_heading_pane_fp

0x7f27,	// (0x000166bd) list_single_pane_fp_ParamLimits

0x7f27,	// (0x000166bd) list_single_pane_fp

0x7f3e,	// (0x000166d4) list_single_pane_fp_g1_ParamLimits

0x7f3e,	// (0x000166d4) list_single_pane_fp_g1

0xc5c5,	// (0x0001ad5b) list_single_pane_fp_g2_ParamLimits

0xc5c5,	// (0x0001ad5b) list_single_pane_fp_g2

0xcf99,	// (0x0001b72f) list_single_pane_fp_g3_ParamLimits

0xcf99,	// (0x0001b72f) list_single_pane_fp_g3

0x7f4a,	// (0x000166e0) list_single_pane_fp_g4_ParamLimits

0x7f4a,	// (0x000166e0) list_single_pane_fp_g4

0x0003,

0xfb91,	// (0x0001e327) list_single_pane_fp_g_ParamLimits

0xfb91,	// (0x0001e327) list_single_pane_fp_g

0xcfad,	// (0x0001b743) list_single_pane_fp_t1_ParamLimits

0xcfad,	// (0x0001b743) list_single_pane_fp_t1

0xcfc4,	// (0x0001b75a) list_single_graphic_pane_fp_g1_ParamLimits

0xcfc4,	// (0x0001b75a) list_single_graphic_pane_fp_g1

0x7f3e,	// (0x000166d4) list_single_graphic_pane_fp_g2_ParamLimits

0x7f3e,	// (0x000166d4) list_single_graphic_pane_fp_g2

0xc5c5,	// (0x0001ad5b) list_single_graphic_pane_fp_g3_ParamLimits

0xc5c5,	// (0x0001ad5b) list_single_graphic_pane_fp_g3

0xcf99,	// (0x0001b72f) list_single_graphic_pane_fp_g4_ParamLimits

0xcf99,	// (0x0001b72f) list_single_graphic_pane_fp_g4

0x7f4a,	// (0x000166e0) list_single_graphic_pane_fp_g5_ParamLimits

0x7f4a,	// (0x000166e0) list_single_graphic_pane_fp_g5

0x0004,

0xfb9a,	// (0x0001e330) list_single_graphic_pane_fp_g_ParamLimits

0xfb9a,	// (0x0001e330) list_single_graphic_pane_fp_g

0xcfd0,	// (0x0001b766) list_single_graphic_pane_fp_t1_ParamLimits

0xcfd0,	// (0x0001b766) list_single_graphic_pane_fp_t1

0xcfc4,	// (0x0001b75a) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xcfc4,	// (0x0001b75a) list_single_graphic_heading_pane_fp_g1

0x7f3e,	// (0x000166d4) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7f3e,	// (0x000166d4) list_single_graphic_heading_pane_fp_g2

0xc5c5,	// (0x0001ad5b) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xc5c5,	// (0x0001ad5b) list_single_graphic_heading_pane_fp_g3

0xcf99,	// (0x0001b72f) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xcf99,	// (0x0001b72f) list_single_graphic_heading_pane_fp_g4

0x7f4a,	// (0x000166e0) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7f4a,	// (0x000166e0) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb9a,	// (0x0001e330) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb9a,	// (0x0001e330) list_single_graphic_heading_pane_fp_g

0xcfe6,	// (0x0001b77c) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xcfe6,	// (0x0001b77c) list_single_graphic_heading_pane_fp_t1

0xcffc,	// (0x0001b792) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xcffc,	// (0x0001b792) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfba5,	// (0x0001e33b) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfba5,	// (0x0001e33b) list_single_graphic_heading_pane_fp_t

0xd00e,	// (0x0001b7a4) list_single_cale_day_pane_fp_g1_ParamLimits

0xd00e,	// (0x0001b7a4) list_single_cale_day_pane_fp_g1

0x7fef,	// (0x00016785) list_single_cale_day_pane_fp_g2_ParamLimits

0x7fef,	// (0x00016785) list_single_cale_day_pane_fp_g2

0xd046,	// (0x0001b7dc) list_single_cale_day_pane_fp_g3_ParamLimits

0xd046,	// (0x0001b7dc) list_single_cale_day_pane_fp_g3

0xd06e,	// (0x0001b804) list_single_cale_day_pane_fp_g4_ParamLimits

0xd06e,	// (0x0001b804) list_single_cale_day_pane_fp_g4

0xd092,	// (0x0001b828) list_single_cale_day_pane_fp_g5_ParamLimits

0xd092,	// (0x0001b828) list_single_cale_day_pane_fp_g5

0x0004,

0xfbaa,	// (0x0001e340) list_single_cale_day_pane_fp_g_ParamLimits

0xfbaa,	// (0x0001e340) list_single_cale_day_pane_fp_g

0xd0b6,	// (0x0001b84c) list_single_cale_day_pane_fp_t1_ParamLimits

0xd0b6,	// (0x0001b84c) list_single_cale_day_pane_fp_t1

0xd0dc,	// (0x0001b872) list_single_cale_day_pane_fp_t2_ParamLimits

0xd0dc,	// (0x0001b872) list_single_cale_day_pane_fp_t2

0xd0f5,	// (0x0001b88b) list_single_cale_day_pane_fp_t3_ParamLimits

0xd0f5,	// (0x0001b88b) list_single_cale_day_pane_fp_t3

0x0002,

0xfbb5,	// (0x0001e34b) list_single_cale_day_pane_fp_t_ParamLimits

0xfbb5,	// (0x0001e34b) list_single_cale_day_pane_fp_t

0x7f3e,	// (0x000166d4) list_empty_pane_fp_g1_ParamLimits

0x7f3e,	// (0x000166d4) list_empty_pane_fp_g1

0xd10e,	// (0x0001b8a4) list_empty_pane_fp_t1

0xd11c,	// (0x0001b8b2) list_empty_pane_fp_t2

0x0001,

0xfbbc,	// (0x0001e352) list_empty_pane_fp_t

0x7f3e,	// (0x000166d4) list_single_heading_pane_fp_g1_ParamLimits

0x7f3e,	// (0x000166d4) list_single_heading_pane_fp_g1

0xc5c5,	// (0x0001ad5b) list_single_heading_pane_fp_g2_ParamLimits

0xc5c5,	// (0x0001ad5b) list_single_heading_pane_fp_g2

0xcf99,	// (0x0001b72f) list_single_heading_pane_fp_g3_ParamLimits

0xcf99,	// (0x0001b72f) list_single_heading_pane_fp_g3

0x0002,

0xfbc1,	// (0x0001e357) list_single_heading_pane_fp_g_ParamLimits

0xfbc1,	// (0x0001e357) list_single_heading_pane_fp_g

0xd12a,	// (0x0001b8c0) list_single_heading_pane_fp_t1_ParamLimits

0xd12a,	// (0x0001b8c0) list_single_heading_pane_fp_t1

0xd13c,	// (0x0001b8d2) list_single_heading_pane_fp_t2_ParamLimits

0xd13c,	// (0x0001b8d2) list_single_heading_pane_fp_t2

0x0001,

0xfbc8,	// (0x0001e35e) list_single_heading_pane_fp_t_ParamLimits

0xfbc8,	// (0x0001e35e) list_single_heading_pane_fp_t

0x3614,	// (0x00011daa) aid_size_cell_fast

0x26ca,	// (0x00010e60) soft_indicator_pane_cp1_t1

0x3651,	// (0x00011de7) cell_app_pane_cp2_ParamLimits

0x3651,	// (0x00011de7) cell_app_pane_cp2

0xe24b,	// (0x0001c9e1) fep_hwr_candidate_drop_down_list_pane

0xade8,	// (0x0001957e) fep_hwr_candidate_pane_g3_ParamLimits

0xade8,	// (0x0001957e) fep_hwr_candidate_pane_g3

0xadf5,	// (0x0001958b) fep_hwr_candidate_pane_g4_ParamLimits

0xadf5,	// (0x0001958b) fep_hwr_candidate_pane_g4

0x0002,

0xfb3c,	// (0x0001e2d2) fep_hwr_candidate_pane_g_ParamLimits

0xfb3c,	// (0x0001e2d2) fep_hwr_candidate_pane_g

0x7a3d,	// (0x000161d3) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7a3d,	// (0x000161d3) fep_vkb_candidate_drop_down_list_pane

0x7e56,	// (0x000165ec) fep_vkb_candidate_pane_g3

0x7e5e,	// (0x000165f4) fep_vkb_candidate_pane_g4

0x0002,

0xfb69,	// (0x0001e2ff) fep_vkb_candidate_pane_g

0x7b56,	// (0x000162ec) cell_hwr_candidate_pane_g1_ParamLimits

0x815d,	// (0x000168f3) cell_hwr_candidate_pane_g3_ParamLimits

0x815d,	// (0x000168f3) cell_hwr_candidate_pane_g3

0x817e,	// (0x00016914) cell_hwr_candidate_pane_g4_ParamLimits

0x817e,	// (0x00016914) cell_hwr_candidate_pane_g4

0x0002,

0xfb83,	// (0x0001e319) cell_hwr_candidate_pane_g_ParamLimits

0xfb83,	// (0x0001e319) cell_hwr_candidate_pane_g

0x7e75,	// (0x0001660b) cell_vkb_candidate_pane_g3_ParamLimits

0x7e75,	// (0x0001660b) cell_vkb_candidate_pane_g3

0x7e90,	// (0x00016626) cell_vkb_candidate_pane_g4_ParamLimits

0x7e90,	// (0x00016626) cell_vkb_candidate_pane_g4

0x8107,	// (0x0001689d) cell_app_pane_cp2_g1_ParamLimits

0x8107,	// (0x0001689d) cell_app_pane_cp2_g1

0x8125,	// (0x000168bb) cell_app_pane_cp2_g2_ParamLimits

0x8125,	// (0x000168bb) cell_app_pane_cp2_g2

0x0001,

0xfbcd,	// (0x0001e363) cell_app_pane_cp2_g_ParamLimits

0xfbcd,	// (0x0001e363) cell_app_pane_cp2_g

0x8131,	// (0x000168c7) cell_app_pane_cp2_t1_ParamLimits

0x8131,	// (0x000168c7) cell_app_pane_cp2_t1

0x3290,	// (0x00011a26) grid_highlight_pane_cp1_ParamLimits

0x3290,	// (0x00011a26) grid_highlight_pane_cp1

0xe487,	// (0x0001cc1d) cell_hwr_candidate_pane_cp1_ParamLimits

0xe487,	// (0x0001cc1d) cell_hwr_candidate_pane_cp1

0x7b56,	// (0x000162ec) fep_hwr_candidate_drop_down_list_pane_g1

0x8143,	// (0x000168d9) fep_hwr_candidate_drop_down_list_pane_g2

0x8150,	// (0x000168e6) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbd2,	// (0x0001e368) fep_hwr_candidate_drop_down_list_pane_g

0xe4a6,	// (0x0001cc3c) fep_hwr_candidate_drop_down_list_scroll_pane

0xe4af,	// (0x0001cc45) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xe4af,	// (0x0001cc45) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xe4bc,	// (0x0001cc52) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xe4bc,	// (0x0001cc52) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xe4c9,	// (0x0001cc5f) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xe4c9,	// (0x0001cc5f) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7e75,	// (0x0001660b) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7e75,	// (0x0001660b) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7e90,	// (0x00016626) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7e90,	// (0x00016626) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xe4d6,	// (0x0001cc6c) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xe4d6,	// (0x0001cc6c) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xe4f1,	// (0x0001cc87) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xe4f1,	// (0x0001cc87) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x8233,	// (0x000169c9) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8233,	// (0x000169c9) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd9,	// (0x0001e36f) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd9,	// (0x0001e36f) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x819f,	// (0x00016935) cell_vkb_candidate_pane_cp1_ParamLimits

0x819f,	// (0x00016935) cell_vkb_candidate_pane_cp1

0x7b56,	// (0x000162ec) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7b56,	// (0x000162ec) fep_vkb_candidate_drop_down_list_pane_g1

0x8143,	// (0x000168d9) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x8143,	// (0x000168d9) fep_vkb_candidate_drop_down_list_pane_g2

0x8150,	// (0x000168e6) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x8150,	// (0x000168e6) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd2,	// (0x0001e368) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd2,	// (0x0001e368) fep_vkb_candidate_drop_down_list_pane_g

0x81bf,	// (0x00016955) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x81bf,	// (0x00016955) fep_vkb_candidate_drop_down_list_scroll_pane

0x81cc,	// (0x00016962) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x81cc,	// (0x00016962) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x81d9,	// (0x0001696f) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x81d9,	// (0x0001696f) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x81e5,	// (0x0001697b) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x81e5,	// (0x0001697b) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x815d,	// (0x000168f3) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x815d,	// (0x000168f3) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x817e,	// (0x00016914) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x817e,	// (0x00016914) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x81f1,	// (0x00016987) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x81f1,	// (0x00016987) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x8212,	// (0x000169a8) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8212,	// (0x000169a8) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x8233,	// (0x000169c9) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8233,	// (0x000169c9) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbea,	// (0x0001e380) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbea,	// (0x0001e380) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x23e1,	// (0x00010b77) title_pane_g1_ParamLimits

0x23ee,	// (0x00010b84) title_pane_g2_ParamLimits

0xf592,	// (0x0001dd28) title_pane_g_ParamLimits

0x3a61,	// (0x000121f7) aid_call2_pane

0x3a59,	// (0x000121ef) aid_call_pane

0x3a69,	// (0x000121ff) popup_clock_analogue_window_g1

0x3a69,	// (0x000121ff) popup_clock_analogue_window_g2

0xd958,	// (0x0001c0ee) popup_clock_analogue_window_g3

0xd961,	// (0x0001c0f7) popup_clock_analogue_window_g4

0x23cd,	// (0x00010b63) popup_clock_analogue_window_g5

0x0004,

0xf737,	// (0x0001decd) popup_clock_analogue_window_g

0xd969,	// (0x0001c0ff) popup_clock_analogue_window_t1

0xd977,	// (0x0001c10d) clock_digital_number_pane_ParamLimits

0xd977,	// (0x0001c10d) clock_digital_number_pane

0xd983,	// (0x0001c119) clock_digital_number_pane_cp02_ParamLimits

0xd983,	// (0x0001c119) clock_digital_number_pane_cp02

0xd98f,	// (0x0001c125) clock_digital_number_pane_cp03_ParamLimits

0xd98f,	// (0x0001c125) clock_digital_number_pane_cp03

0xd99b,	// (0x0001c131) clock_digital_number_pane_cp04_ParamLimits

0xd99b,	// (0x0001c131) clock_digital_number_pane_cp04

0xd9a7,	// (0x0001c13d) clock_digital_separator_pane_ParamLimits

0xd9a7,	// (0x0001c13d) clock_digital_separator_pane

0xd9b3,	// (0x0001c149) popup_clock_digital_window_t1_ParamLimits

0xd9b3,	// (0x0001c149) popup_clock_digital_window_t1

0x23cd,	// (0x00010b63) clock_digital_number_pane_g1

0x23cd,	// (0x00010b63) clock_digital_number_pane_g2

0x0001,

0xf742,	// (0x0001ded8) clock_digital_number_pane_g

0x23cd,	// (0x00010b63) clock_digital_separator_pane_g1

0x23cd,	// (0x00010b63) clock_digital_separator_pane_g2

0x0001,

0xf742,	// (0x0001ded8) clock_digital_separator_pane_g

0x4a0d,	// (0x000131a3) aid_fill_nsta_ParamLimits

0x4b53,	// (0x000132e9) indicator_nsta_pane_ParamLimits

0x4cc5,	// (0x0001345b) popup_clock_analogue_window

0x4cc5,	// (0x0001345b) popup_clock_digital_window

0x24b7,	// (0x00010c4d) grid_indicator_nsta_pane_ParamLimits

0x723a,	// (0x000159d0) clock_nsta_pane_t2

0x0001,

0xfac9,	// (0x0001e25f) clock_nsta_pane_t

0xd91c,	// (0x0001c0b2) aid_size_max_handle

0xd926,	// (0x0001c0bc) aid_size_min_handle

0x40d6,	// (0x0001286c) editor_scroll_pane

0x824e,	// (0x000169e4) ex_editor_pane

0x3583,	// (0x00011d19) scroll_pane_cp13

0x2cc3,	// (0x00011459) scroll_pane_cp14

0x3a93,	// (0x00012229) scroll_pane_cp36

0x3abd,	// (0x00012253) list_single_graphic_hl_pane_cp2_ParamLimits

0x3abd,	// (0x00012253) list_single_graphic_hl_pane_cp2

0x664f,	// (0x00014de5) list_single_graphic_hl_pane_ParamLimits

0x664f,	// (0x00014de5) list_single_graphic_hl_pane

0xd152,	// (0x0001b8e8) aid_size_min_hl_cp1

0x825f,	// (0x000169f5) list_highlight_pane_cp34_ParamLimits

0x825f,	// (0x000169f5) list_highlight_pane_cp34

0x8270,	// (0x00016a06) list_single_graphic_hl_pane_g1_ParamLimits

0x8270,	// (0x00016a06) list_single_graphic_hl_pane_g1

0xd15b,	// (0x0001b8f1) list_single_graphic_hl_pane_g2_ParamLimits

0xd15b,	// (0x0001b8f1) list_single_graphic_hl_pane_g2

0xd15b,	// (0x0001b8f1) list_single_graphic_hl_pane_g3_ParamLimits

0xd15b,	// (0x0001b8f1) list_single_graphic_hl_pane_g3

0xd167,	// (0x0001b8fd) list_single_graphic_hl_pane_g4_ParamLimits

0xd167,	// (0x0001b8fd) list_single_graphic_hl_pane_g4

0xd173,	// (0x0001b909) list_single_graphic_hl_pane_g5_ParamLimits

0xd173,	// (0x0001b909) list_single_graphic_hl_pane_g5

0x0004,

0xfbfb,	// (0x0001e391) list_single_graphic_hl_pane_g_ParamLimits

0xfbfb,	// (0x0001e391) list_single_graphic_hl_pane_g

0xd187,	// (0x0001b91d) list_single_graphic_hl_pane_t1_ParamLimits

0xd187,	// (0x0001b91d) list_single_graphic_hl_pane_t1

0x829d,	// (0x00016a33) aid_size_min_hl_cp2

0x82a6,	// (0x00016a3c) list_highlight_pane_cp34_cp2_ParamLimits

0x82a6,	// (0x00016a3c) list_highlight_pane_cp34_cp2

0x8270,	// (0x00016a06) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x8270,	// (0x00016a06) list_single_graphic_hl_pane_g1_cp2

0x82b3,	// (0x00016a49) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x82b3,	// (0x00016a49) list_single_graphic_hl_pane_g2_cp2

0x82bf,	// (0x00016a55) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x82bf,	// (0x00016a55) list_single_graphic_hl_pane_g3_cp2

0x400d,	// (0x000127a3) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x400d,	// (0x000127a3) list_single_graphic_hl_pane_g4_cp2

0x8289,	// (0x00016a1f) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x8289,	// (0x00016a1f) list_single_graphic_hl_pane_g5_cp2

0xdc65,	// (0x0001c3fb) control_pane_g4_ParamLimits

0xdc65,	// (0x0001c3fb) control_pane_g4

0x445c,	// (0x00012bf2) bg_popup_sub_pane_cp10_ParamLimits

0x78b9,	// (0x0001604f) list_choice_list_pane_ParamLimits

0x78c8,	// (0x0001605e) scroll_pane_cp23

0x275a,	// (0x00010ef0) bg_popup_preview_window_pane_cp02_ParamLimits

0x7ee1,	// (0x00016677) list_preview_fixed_pane_ParamLimits

0x7ef7,	// (0x0001668d) list_preview_fixed_pane_cp_ParamLimits

0x7ef7,	// (0x0001668d) list_preview_fixed_pane_cp

0x7f03,	// (0x00016699) popup_preview_fixed_window_g1_ParamLimits

0x7f03,	// (0x00016699) popup_preview_fixed_window_g1

0x7f0f,	// (0x000166a5) popup_preview_fixed_window_g2_ParamLimits

0x7f0f,	// (0x000166a5) popup_preview_fixed_window_g2

0x0002,

0xfb8a,	// (0x0001e320) popup_preview_fixed_window_g_ParamLimits

0xfb8a,	// (0x0001e320) popup_preview_fixed_window_g

0xd890,	// (0x0001c026) aid_navi_side_left_pane_ParamLimits

0xd8a5,	// (0x0001c03b) aid_navi_side_right_pane_ParamLimits

0xd8bd,	// (0x0001c053) navi_icon_pane_stacon_ParamLimits

0xd8d1,	// (0x0001c067) navi_navi_pane_stacon_ParamLimits

0xd8bd,	// (0x0001c053) navi_text_pane_stacon_ParamLimits

0x23c3,	// (0x00010b59) main_text_info_pane

0x82e3,	// (0x00016a79) listscroll_text_info_pane

0x82eb,	// (0x00016a81) list_text_info_pane_ParamLimits

0x82eb,	// (0x00016a81) list_text_info_pane

0x82fa,	// (0x00016a90) scroll_pane_cp24_ParamLimits

0x82fa,	// (0x00016a90) scroll_pane_cp24

0x8318,	// (0x00016aae) list_text_info_pane_t1_ParamLimits

0x8318,	// (0x00016aae) list_text_info_pane_t1

0x44a6,	// (0x00012c3c) popup_fast_swap2_window_ParamLimits

0x44a6,	// (0x00012c3c) popup_fast_swap2_window

0x8351,	// (0x00016ae7) aid_size_cell_fast2

0x23c3,	// (0x00010b59) bg_popup_window_pane_cp17

0x544f,	// (0x00013be5) heading_pane_cp2

0x299a,	// (0x00011130) listscroll_fast2_pane

0x835b,	// (0x00016af1) grid_fast2_pane

0x8365,	// (0x00016afb) listscroll_fast2_pane_g1

0x836d,	// (0x00016b03) listscroll_fast2_pane_g2

0x0001,

0xfc06,	// (0x0001e39c) listscroll_fast2_pane_g

0x3583,	// (0x00011d19) scroll_pane_cp26

0x8377,	// (0x00016b0d) cell_fast2_pane_ParamLimits

0x8377,	// (0x00016b0d) cell_fast2_pane

0x838c,	// (0x00016b22) cell_fast2_pane_g1

0x8395,	// (0x00016b2b) cell_fast2_pane_g2

0x839e,	// (0x00016b34) cell_fast2_pane_g3

0x0002,

0xfc0b,	// (0x0001e3a1) cell_fast2_pane_g

0x2a80,	// (0x00011216) grid_highlight_pane_cp9

0x2a95,	// (0x0001122b) main_eswt_pane_ParamLimits

0x2a95,	// (0x0001122b) main_eswt_pane

0x830f,	// (0x00016aa5) list_single_text_info_pane

0x83a6,	// (0x00016b3c) eswt_ctrl_button_pane

0x83a6,	// (0x00016b3c) eswt_ctrl_canvas_pane

0x83ae,	// (0x00016b44) eswt_ctrl_combo_pane

0x83a6,	// (0x00016b3c) eswt_ctrl_default_pane

0x83a6,	// (0x00016b3c) eswt_ctrl_label_pane

0x83b6,	// (0x00016b4c) eswt_ctrl_wait_pane

0x83be,	// (0x00016b54) eswt_shell_pane

0x23c3,	// (0x00010b59) listscroll_eswt_app_pane

0x83de,	// (0x00016b74) popup_eswt_tasktip_window_ParamLimits

0x83de,	// (0x00016b74) popup_eswt_tasktip_window

0x5028,	// (0x000137be) bg_popup_window_pane_cp18

0x83ef,	// (0x00016b85) eswt_control_pane_g1_ParamLimits

0x83ef,	// (0x00016b85) eswt_control_pane_g1

0x83fc,	// (0x00016b92) eswt_control_pane_g2_ParamLimits

0x83fc,	// (0x00016b92) eswt_control_pane_g2

0x8409,	// (0x00016b9f) eswt_control_pane_g3_ParamLimits

0x8409,	// (0x00016b9f) eswt_control_pane_g3

0x8416,	// (0x00016bac) eswt_control_pane_g4_ParamLimits

0x8416,	// (0x00016bac) eswt_control_pane_g4

0x0003,

0xfc12,	// (0x0001e3a8) eswt_control_pane_g_ParamLimits

0xfc12,	// (0x0001e3a8) eswt_control_pane_g

0x3290,	// (0x00011a26) bg_button_pane_ParamLimits

0x3290,	// (0x00011a26) bg_button_pane

0x2a95,	// (0x0001122b) common_borders_pane_copy2_ParamLimits

0x2a95,	// (0x0001122b) common_borders_pane_copy2

0x8423,	// (0x00016bb9) control_button_pane_g1_ParamLimits

0x8423,	// (0x00016bb9) control_button_pane_g1

0x842f,	// (0x00016bc5) control_button_pane_g2_ParamLimits

0x842f,	// (0x00016bc5) control_button_pane_g2

0x843b,	// (0x00016bd1) control_button_pane_g3_ParamLimits

0x843b,	// (0x00016bd1) control_button_pane_g3

0x0002,

0xfc1b,	// (0x0001e3b1) control_button_pane_g_ParamLimits

0xfc1b,	// (0x0001e3b1) control_button_pane_g

0x844f,	// (0x00016be5) control_button_pane_t1

0x845d,	// (0x00016bf3) control_button_pane_t2

0x0001,

0xfc22,	// (0x0001e3b8) control_button_pane_t

0x4f0e,	// (0x000136a4) bg_button_pane_g1

0x4f1e,	// (0x000136b4) bg_button_pane_g2

0x4f16,	// (0x000136ac) bg_button_pane_g3

0x4f2e,	// (0x000136c4) bg_button_pane_g4

0x4f26,	// (0x000136bc) bg_button_pane_g5

0x4f36,	// (0x000136cc) bg_button_pane_g6

0x4f3e,	// (0x000136d4) bg_button_pane_g7

0x4f4e,	// (0x000136e4) bg_button_pane_g8

0x4f46,	// (0x000136dc) bg_button_pane_g9

0x0008,

0xf88e,	// (0x0001e024) bg_button_pane_g

0x7874,	// (0x0001600a) common_borders_pane_ParamLimits

0x7874,	// (0x0001600a) common_borders_pane

0x83ef,	// (0x00016b85) eswt_control_pane_g1_copy1_ParamLimits

0x83ef,	// (0x00016b85) eswt_control_pane_g1_copy1

0x83fc,	// (0x00016b92) eswt_control_pane_g2_copy1_ParamLimits

0x83fc,	// (0x00016b92) eswt_control_pane_g2_copy1

0x8409,	// (0x00016b9f) eswt_control_pane_g3_copy1_ParamLimits

0x8409,	// (0x00016b9f) eswt_control_pane_g3_copy1

0x8416,	// (0x00016bac) eswt_control_pane_g4_copy1_ParamLimits

0x8416,	// (0x00016bac) eswt_control_pane_g4_copy1

0x78af,	// (0x00016045) bg_eswt_ctrl_canvas_pane_g1

0x7874,	// (0x0001600a) common_borders_pane_cp2_ParamLimits

0x7874,	// (0x0001600a) common_borders_pane_cp2

0x7874,	// (0x0001600a) common_borders_pane_cp3_ParamLimits

0x7874,	// (0x0001600a) common_borders_pane_cp3

0x846b,	// (0x00016c01) separator_horizontal_pane

0x8473,	// (0x00016c09) separator_vertical_pane

0x83ef,	// (0x00016b85) eswt_control_pane_g1_copy2_ParamLimits

0x83ef,	// (0x00016b85) eswt_control_pane_g1_copy2

0x83fc,	// (0x00016b92) eswt_control_pane_g2_copy2_ParamLimits

0x83fc,	// (0x00016b92) eswt_control_pane_g2_copy2

0x8409,	// (0x00016b9f) eswt_control_pane_g3_copy2_ParamLimits

0x8409,	// (0x00016b9f) eswt_control_pane_g3_copy2

0x8416,	// (0x00016bac) eswt_control_pane_g4_copy2_ParamLimits

0x8416,	// (0x00016bac) eswt_control_pane_g4_copy2

0x23c3,	// (0x00010b59) common_borders_pane_cp4

0x847c,	// (0x00016c12) separator_horizontal_pane_g1

0x8485,	// (0x00016c1b) separator_horizontal_pane_g2

0x848e,	// (0x00016c24) separator_horizontal_pane_g3

0x0002,

0xfc27,	// (0x0001e3bd) separator_horizontal_pane_g

0x83ef,	// (0x00016b85) eswt_control_pane_g1_copy3_ParamLimits

0x83ef,	// (0x00016b85) eswt_control_pane_g1_copy3

0x83fc,	// (0x00016b92) eswt_control_pane_g2_copy3_ParamLimits

0x83fc,	// (0x00016b92) eswt_control_pane_g2_copy3

0x8409,	// (0x00016b9f) eswt_control_pane_g3_copy3_ParamLimits

0x8409,	// (0x00016b9f) eswt_control_pane_g3_copy3

0x8416,	// (0x00016bac) eswt_control_pane_g4_copy3_ParamLimits

0x8416,	// (0x00016bac) eswt_control_pane_g4_copy3

0x23c3,	// (0x00010b59) common_borders_pane_cp5

0x8497,	// (0x00016c2d) separator_vertical_pane_g1

0x84a0,	// (0x00016c36) separator_vertical_pane_g2

0x84a9,	// (0x00016c3f) separator_vertical_pane_g3

0x0002,

0xfc2e,	// (0x0001e3c4) separator_vertical_pane_g

0x83ef,	// (0x00016b85) eswt_control_pane_g1_copy4_ParamLimits

0x83ef,	// (0x00016b85) eswt_control_pane_g1_copy4

0x83fc,	// (0x00016b92) eswt_control_pane_g2_copy4_ParamLimits

0x83fc,	// (0x00016b92) eswt_control_pane_g2_copy4

0x8409,	// (0x00016b9f) eswt_control_pane_g3_copy4_ParamLimits

0x8409,	// (0x00016b9f) eswt_control_pane_g3_copy4

0x8416,	// (0x00016bac) eswt_control_pane_g4_copy4_ParamLimits

0x8416,	// (0x00016bac) eswt_control_pane_g4_copy4

0x84b2,	// (0x00016c48) eswt_ctrl_combo_button_pane

0x84ba,	// (0x00016c50) eswt_ctrl_input_pane

0x84c2,	// (0x00016c58) popup_choice_list_window_cp70

0x84ca,	// (0x00016c60) eswt_ctrl_input_pane_t1

0x23c3,	// (0x00010b59) input_focus_pane_cp70

0x7874,	// (0x0001600a) bg_button_pane_cp70_ParamLimits

0x7874,	// (0x0001600a) bg_button_pane_cp70

0x84d8,	// (0x00016c6e) eswt_ctrl_combo_button_pane_g1

0x84e0,	// (0x00016c76) wait_bar_pane_cp70

0x5028,	// (0x000137be) bg_popup_window_pane_cp70_ParamLimits

0x5028,	// (0x000137be) bg_popup_window_pane_cp70

0x84e8,	// (0x00016c7e) popup_eswt_tasktip_window_t1

0x84fe,	// (0x00016c94) wait_bar_pane_cp71_ParamLimits

0x84fe,	// (0x00016c94) wait_bar_pane_cp71

0x850a,	// (0x00016ca0) grid_eswt_app_pane

0x389f,	// (0x00012035) scroll_pane_cp70

0x8513,	// (0x00016ca9) cell_eswt_app_pane_ParamLimits

0x8513,	// (0x00016ca9) cell_eswt_app_pane

0x8547,	// (0x00016cdd) cell_eswt_app_pane_g1_ParamLimits

0x8547,	// (0x00016cdd) cell_eswt_app_pane_g1

0x8576,	// (0x00016d0c) cell_eswt_app_pane_g2_ParamLimits

0x8576,	// (0x00016d0c) cell_eswt_app_pane_g2

0x0001,

0xfc35,	// (0x0001e3cb) cell_eswt_app_pane_g_ParamLimits

0xfc35,	// (0x0001e3cb) cell_eswt_app_pane_g

0x859f,	// (0x00016d35) cell_eswt_app_pane_t1_ParamLimits

0x859f,	// (0x00016d35) cell_eswt_app_pane_t1

0x85d1,	// (0x00016d67) grid_highlight_pane_cp70_ParamLimits

0x85d1,	// (0x00016d67) grid_highlight_pane_cp70

0x3fa9,	// (0x0001273f) set_content_pane_g1

0x437e,	// (0x00012b14) status_small_volume_pane

0xe50c,	// (0x0001cca2) status_small_volume_pane_g1

0xe514,	// (0x0001ccaa) volume_small2_pane

0xe51d,	// (0x0001ccb3) volume_small2_pane_g1

0xe526,	// (0x0001ccbc) volume_small2_pane_g2

0xe52f,	// (0x0001ccc5) volume_small2_pane_g3

0xe538,	// (0x0001ccce) volume_small2_pane_g4

0xe541,	// (0x0001ccd7) volume_small2_pane_g5

0xe54a,	// (0x0001cce0) volume_small2_pane_g6

0xe553,	// (0x0001cce9) volume_small2_pane_g7

0xe55c,	// (0x0001ccf2) volume_small2_pane_g8

0xe565,	// (0x0001ccfb) volume_small2_pane_g9

0xe56e,	// (0x0001cd04) volume_small2_pane_g10

0x0009,

0xfc3a,	// (0x0001e3d0) volume_small2_pane_g

0x7c9e,	// (0x00016434) fep_vkb_top_text_pane_g1_ParamLimits

0x7cb9,	// (0x0001644f) fep_vkb_top_text_pane_t1_ParamLimits

0x7f1b,	// (0x000166b1) popup_preview_fixed_window_g3_ParamLimits

0x7f1b,	// (0x000166b1) popup_preview_fixed_window_g3

0x4945,	// (0x000130db) popup_toolbar_trans_pane

0x63b8,	// (0x00014b4e) aid_height_set_list_ParamLimits

0x63c9,	// (0x00014b5f) aid_size_parent_ParamLimits

0x445c,	// (0x00012bf2) list_highlight_pane_cp2_ParamLimits

0x3fa9,	// (0x0001273f) set_content_pane_g1_ParamLimits

0xcd01,	// (0x0001b497) list_single_image_pane_ParamLimits

0xcd01,	// (0x0001b497) list_single_image_pane

0x85dd,	// (0x00016d73) aid_size_cell_image_ParamLimits

0x85dd,	// (0x00016d73) aid_size_cell_image

0x85ea,	// (0x00016d80) grid_single_image_pane_ParamLimits

0x85ea,	// (0x00016d80) grid_single_image_pane

0x32b6,	// (0x00011a4c) list_single_image_pane_g1_ParamLimits

0x32b6,	// (0x00011a4c) list_single_image_pane_g1

0x32c2,	// (0x00011a58) list_single_image_pane_g2_ParamLimits

0x32c2,	// (0x00011a58) list_single_image_pane_g2

0x0001,

0xfc4f,	// (0x0001e3e5) list_single_image_pane_g_ParamLimits

0xfc4f,	// (0x0001e3e5) list_single_image_pane_g

0x85f6,	// (0x00016d8c) list_single_image_pane_t1_ParamLimits

0x85f6,	// (0x00016d8c) list_single_image_pane_t1

0x860c,	// (0x00016da2) cell_image_list_pane_ParamLimits

0x860c,	// (0x00016da2) cell_image_list_pane

0x8620,	// (0x00016db6) cell_image_list_pane_g1

0x8629,	// (0x00016dbf) cell_image_list_pane_g2

0x0001,

0xfc54,	// (0x0001e3ea) cell_image_list_pane_g

0x8632,	// (0x00016dc8) aid_size_cell_tb_trans_pane

0x3290,	// (0x00011a26) bg_tb_trans_pane

0x8644,	// (0x00016dda) grid_tb_trans_pane

0x4f0e,	// (0x000136a4) bg_tb_trans_pane_g1

0x4f1e,	// (0x000136b4) bg_tb_trans_pane_g2

0x4f16,	// (0x000136ac) bg_tb_trans_pane_g3

0x4f2e,	// (0x000136c4) bg_tb_trans_pane_g4

0x4f26,	// (0x000136bc) bg_tb_trans_pane_g5

0x4f4e,	// (0x000136e4) bg_tb_trans_pane_g6

0x4f46,	// (0x000136dc) bg_tb_trans_pane_g7

0x4f36,	// (0x000136cc) bg_tb_trans_pane_g8

0x4f3e,	// (0x000136d4) bg_tb_trans_pane_g9

0x0008,

0xfc59,	// (0x0001e3ef) bg_tb_trans_pane_g

0x8658,	// (0x00016dee) cell_toolbar_trans_pane_ParamLimits

0x8658,	// (0x00016dee) cell_toolbar_trans_pane

0x78af,	// (0x00016045) cell_toolbar_trans_pane_g1

0x73fa,	// (0x00015b90) list_form2_midp_pane_t1

0x7408,	// (0x00015b9e) list_form2_midp_pane_t2

0x0001,

0xfb02,	// (0x0001e298) list_form2_midp_pane_t

0x7416,	// (0x00015bac) scroll_pane_cp51_ParamLimits

0x7619,	// (0x00015daf) form2_midp_wait_pane_g1

0x7622,	// (0x00015db8) form2_midp_wait_pane_g2

0x762b,	// (0x00015dc1) form2_midp_wait_pane_g3

0x0002,

0xfb17,	// (0x0001e2ad) form2_midp_wait_pane_g

0x24b7,	// (0x00010c4d) list_highlight_pane_cp21_ParamLimits

0x767a,	// (0x00015e10) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7689,	// (0x00015e1f) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xcc8d,	// (0x0001b423) list_single_2graphic_im_pane_ParamLimits

0xcc8d,	// (0x0001b423) list_single_2graphic_im_pane

0x867e,	// (0x00016e14) list_single_2graphic_im_pane_g1_ParamLimits

0x867e,	// (0x00016e14) list_single_2graphic_im_pane_g1

0x868f,	// (0x00016e25) list_single_2graphic_im_pane_g2_ParamLimits

0x868f,	// (0x00016e25) list_single_2graphic_im_pane_g2

0x869b,	// (0x00016e31) list_single_2graphic_im_pane_g3_ParamLimits

0x869b,	// (0x00016e31) list_single_2graphic_im_pane_g3

0x0003,

0xfc6c,	// (0x0001e402) list_single_2graphic_im_pane_g_ParamLimits

0xfc6c,	// (0x0001e402) list_single_2graphic_im_pane_g

0x86bb,	// (0x00016e51) list_single_2graphic_im_pane_t1_ParamLimits

0x86bb,	// (0x00016e51) list_single_2graphic_im_pane_t1

0x7f27,	// (0x000166bd) list_single_graphic_2heading_pane_fp_ParamLimits

0x7f27,	// (0x000166bd) list_single_graphic_2heading_pane_fp

0xcfc4,	// (0x0001b75a) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xcfc4,	// (0x0001b75a) list_single_graphic_2heading_pane_fp_g1

0x7f3e,	// (0x000166d4) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7f3e,	// (0x000166d4) list_single_graphic_2heading_pane_fp_g2

0xc5c5,	// (0x0001ad5b) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xc5c5,	// (0x0001ad5b) list_single_graphic_2heading_pane_fp_g3

0xcf99,	// (0x0001b72f) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xcf99,	// (0x0001b72f) list_single_graphic_2heading_pane_fp_g4

0x7f4a,	// (0x000166e0) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7f4a,	// (0x000166e0) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb9a,	// (0x0001e330) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb9a,	// (0x0001e330) list_single_graphic_2heading_pane_fp_g

0xd19d,	// (0x0001b933) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xd19d,	// (0x0001b933) list_single_graphic_2heading_pane_fp_t1

0xcffc,	// (0x0001b792) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xcffc,	// (0x0001b792) list_single_graphic_2heading_pane_fp_t2

0xd1b3,	// (0x0001b949) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xd1b3,	// (0x0001b949) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc75,	// (0x0001e40b) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc75,	// (0x0001e40b) list_single_graphic_2heading_pane_fp_t

0x794f,	// (0x000160e5) fep_hwr_write_pane_g5_ParamLimits

0x794f,	// (0x000160e5) fep_hwr_write_pane_g5

0x795b,	// (0x000160f1) fep_hwr_write_pane_g6_ParamLimits

0x795b,	// (0x000160f1) fep_hwr_write_pane_g6

0x83be,	// (0x00016b54) eswt_shell_pane_ParamLimits

0x5028,	// (0x000137be) bg_popup_window_pane_cp18_ParamLimits

0x62ef,	// (0x00014a85) heading_pane_cp70

0x84e8,	// (0x00016c7e) popup_eswt_tasktip_window_t1_ParamLimits

0x4a62,	// (0x000131f8) aid_touch_tab_arrow_left

0x4a71,	// (0x00013207) aid_touch_tab_arrow_right

0x23ff,	// (0x00010b95) title_pane_g3_ParamLimits

0x23ff,	// (0x00010b95) title_pane_g3

0x317d,	// (0x00011913) set_value_pane_g1

0x4945,	// (0x000130db) popup_toolbar_trans_pane_ParamLimits

0x8632,	// (0x00016dc8) aid_size_cell_tb_trans_pane_ParamLimits

0x3290,	// (0x00011a26) bg_tb_trans_pane_ParamLimits

0x8644,	// (0x00016dda) grid_tb_trans_pane_ParamLimits

0x275a,	// (0x00010ef0) cont_note_pane_ParamLimits

0x275a,	// (0x00010ef0) cont_note_pane

0x2a95,	// (0x0001122b) cont_snote2_single_text_pane_ParamLimits

0x2a95,	// (0x0001122b) cont_snote2_single_text_pane

0x2a95,	// (0x0001122b) cont_snote2_single_graphic_pane_ParamLimits

0x2a95,	// (0x0001122b) cont_snote2_single_graphic_pane

0x5634,	// (0x00013dca) cont_note_wait_pane_ParamLimits

0x5634,	// (0x00013dca) cont_note_wait_pane

0x5634,	// (0x00013dca) cont_note_image_pane_ParamLimits

0x5634,	// (0x00013dca) cont_note_image_pane

0x8718,	// (0x00016eae) popup_note2_window_g1_ParamLimits

0x8718,	// (0x00016eae) popup_note2_window_g1

0x8749,	// (0x00016edf) popup_note2_window_t1_ParamLimits

0x8749,	// (0x00016edf) popup_note2_window_t1

0x878e,	// (0x00016f24) popup_note2_window_t2_ParamLimits

0x878e,	// (0x00016f24) popup_note2_window_t2

0x87d3,	// (0x00016f69) popup_note2_window_t3_ParamLimits

0x87d3,	// (0x00016f69) popup_note2_window_t3

0x8818,	// (0x00016fae) popup_note2_window_t4_ParamLimits

0x8818,	// (0x00016fae) popup_note2_window_t4

0x27d2,	// (0x00010f68) popup_note2_window_t5_ParamLimits

0x27d2,	// (0x00010f68) popup_note2_window_t5

0x0004,

0xfc81,	// (0x0001e417) popup_note2_window_t_ParamLimits

0xfc81,	// (0x0001e417) popup_note2_window_t

0x8847,	// (0x00016fdd) popup_note2_image_window_g1_ParamLimits

0x8847,	// (0x00016fdd) popup_note2_image_window_g1

0x8853,	// (0x00016fe9) popup_note2_image_window_g2_ParamLimits

0x8853,	// (0x00016fe9) popup_note2_image_window_g2

0x0001,

0xfc8c,	// (0x0001e422) popup_note2_image_window_g_ParamLimits

0xfc8c,	// (0x0001e422) popup_note2_image_window_g

0x8865,	// (0x00016ffb) popup_note2_image_window_t1_ParamLimits

0x8865,	// (0x00016ffb) popup_note2_image_window_t1

0x887d,	// (0x00017013) popup_note2_image_window_t2_ParamLimits

0x887d,	// (0x00017013) popup_note2_image_window_t2

0x8895,	// (0x0001702b) popup_note2_image_window_t3_ParamLimits

0x8895,	// (0x0001702b) popup_note2_image_window_t3

0x0002,

0xfc91,	// (0x0001e427) popup_note2_image_window_t_ParamLimits

0xfc91,	// (0x0001e427) popup_note2_image_window_t

0x5642,	// (0x00013dd8) popup_note2_wait_window_g1_ParamLimits

0x5642,	// (0x00013dd8) popup_note2_wait_window_g1

0x564e,	// (0x00013de4) popup_note2_wait_window_g2_ParamLimits

0x564e,	// (0x00013de4) popup_note2_wait_window_g2

0x565a,	// (0x00013df0) popup_note2_wait_window_g3_ParamLimits

0x565a,	// (0x00013df0) popup_note2_wait_window_g3

0x0002,

0xf870,	// (0x0001e006) popup_note2_wait_window_g_ParamLimits

0xf870,	// (0x0001e006) popup_note2_wait_window_g

0x88b1,	// (0x00017047) popup_note2_wait_window_t1_ParamLimits

0x88b1,	// (0x00017047) popup_note2_wait_window_t1

0x88cf,	// (0x00017065) popup_note2_wait_window_t2_ParamLimits

0x88cf,	// (0x00017065) popup_note2_wait_window_t2

0x88ed,	// (0x00017083) popup_note2_wait_window_t3_ParamLimits

0x88ed,	// (0x00017083) popup_note2_wait_window_t3

0x88ff,	// (0x00017095) popup_note2_wait_window_t4_ParamLimits

0x88ff,	// (0x00017095) popup_note2_wait_window_t4

0x0003,

0xfc98,	// (0x0001e42e) popup_note2_wait_window_t_ParamLimits

0xfc98,	// (0x0001e42e) popup_note2_wait_window_t

0x8911,	// (0x000170a7) wait_bar2_pane_ParamLimits

0x8911,	// (0x000170a7) wait_bar2_pane

0x8929,	// (0x000170bf) popup_snote2_single_text_window_g1_ParamLimits

0x8929,	// (0x000170bf) popup_snote2_single_text_window_g1

0x8951,	// (0x000170e7) popup_snote2_single_text_window_t1_ParamLimits

0x8951,	// (0x000170e7) popup_snote2_single_text_window_t1

0x899d,	// (0x00017133) popup_snote2_single_text_window_t2_ParamLimits

0x899d,	// (0x00017133) popup_snote2_single_text_window_t2

0x89e9,	// (0x0001717f) popup_snote2_single_text_window_t3_ParamLimits

0x89e9,	// (0x0001717f) popup_snote2_single_text_window_t3

0x8a2a,	// (0x000171c0) popup_snote2_single_text_window_t4_ParamLimits

0x8a2a,	// (0x000171c0) popup_snote2_single_text_window_t4

0x8a60,	// (0x000171f6) popup_snote2_single_text_window_t5_ParamLimits

0x8a60,	// (0x000171f6) popup_snote2_single_text_window_t5

0x0004,

0xfca1,	// (0x0001e437) popup_snote2_single_text_window_t_ParamLimits

0xfca1,	// (0x0001e437) popup_snote2_single_text_window_t

0x8a8b,	// (0x00017221) popup_snote2_single_graphic_window_g1_ParamLimits

0x8a8b,	// (0x00017221) popup_snote2_single_graphic_window_g1

0x8ab3,	// (0x00017249) popup_snote2_single_graphic_window_g2_ParamLimits

0x8ab3,	// (0x00017249) popup_snote2_single_graphic_window_g2

0x0001,

0xfcac,	// (0x0001e442) popup_snote2_single_graphic_window_g_ParamLimits

0xfcac,	// (0x0001e442) popup_snote2_single_graphic_window_g

0x8adb,	// (0x00017271) popup_snote2_single_graphic_window_t1_ParamLimits

0x8adb,	// (0x00017271) popup_snote2_single_graphic_window_t1

0x8b27,	// (0x000172bd) popup_snote2_single_graphic_window_t2_ParamLimits

0x8b27,	// (0x000172bd) popup_snote2_single_graphic_window_t2

0x89e9,	// (0x0001717f) popup_snote2_single_graphic_window_t3_ParamLimits

0x89e9,	// (0x0001717f) popup_snote2_single_graphic_window_t3

0x8a2a,	// (0x000171c0) popup_snote2_single_graphic_window_t4_ParamLimits

0x8a2a,	// (0x000171c0) popup_snote2_single_graphic_window_t4

0x8a60,	// (0x000171f6) popup_snote2_single_graphic_window_t5_ParamLimits

0x8a60,	// (0x000171f6) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb1,	// (0x0001e447) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb1,	// (0x0001e447) popup_snote2_single_graphic_window_t

0x72cb,	// (0x00015a61) clock_nsta_pane_cp2_t1

0x72cb,	// (0x00015a61) clock_nsta_pane_cp2_t2

0x0001,

0xfad8,	// (0x0001e26e) clock_nsta_pane_cp2_t

0xc8f8,	// (0x0001b08e) form_field_data_wide_pane_g1_ParamLimits

0x32b6,	// (0x00011a4c) form_field_data_wide_pane_g2_ParamLimits

0x32b6,	// (0x00011a4c) form_field_data_wide_pane_g2

0x32c2,	// (0x00011a58) form_field_data_wide_pane_g3_ParamLimits

0x32c2,	// (0x00011a58) form_field_data_wide_pane_g3

0x0002,

0xf6ba,	// (0x0001de50) form_field_data_wide_pane_g_ParamLimits

0xf6ba,	// (0x0001de50) form_field_data_wide_pane_g

0x71d6,	// (0x0001596c) grid_touch_3_pane_ParamLimits

0x71d6,	// (0x0001596c) grid_touch_3_pane

0x8b73,	// (0x00017309) cell_touch_3_pane_ParamLimits

0x8b73,	// (0x00017309) cell_touch_3_pane

0x78af,	// (0x00016045) cell_touch_3_pane_g1

0x78af,	// (0x00016045) cell_touch_3_pane_g2

0x0001,

0xfb5d,	// (0x0001e2f3) cell_touch_3_pane_g

0x2804,	// (0x00010f9a) cont_query_data_pane

0x280c,	// (0x00010fa2) cont_query_data_pane_cp1

0x8ba2,	// (0x00017338) button_value_adjust_pane_cp7

0x8baa,	// (0x00017340) query_popup_pane_cp3

0x3b2a,	// (0x000122c0) bg_popup_sub_pane_cp22_ParamLimits

0xd9d2,	// (0x0001c168) navi_navi_volume_pane_cp2

0xd9ed,	// (0x0001c183) popup_side_volume_key_window_g2

0xd9fc,	// (0x0001c192) popup_side_volume_key_window_g3

0x0002,

0xf74c,	// (0x0001dee2) popup_side_volume_key_window_g

0xda19,	// (0x0001c1af) popup_side_volume_key_window_t2

0x0001,

0xf753,	// (0x0001dee9) popup_side_volume_key_window_t

0x3e73,	// (0x00012609) popup_side_volume_key_window_ParamLimits

0xc591,	// (0x0001ad27) list_double_graphic_pane_g4_ParamLimits

0xc591,	// (0x0001ad27) list_double_graphic_pane_g4

0xccda,	// (0x0001b470) list_single_2heading_msg_pane_ParamLimits

0xccda,	// (0x0001b470) list_single_2heading_msg_pane

0xd1d3,	// (0x0001b969) list_single_2heading_msg_pane_g1_ParamLimits

0xd1d3,	// (0x0001b969) list_single_2heading_msg_pane_g1

0xc3e2,	// (0x0001ab78) list_single_2heading_msg_pane_g2_ParamLimits

0xc3e2,	// (0x0001ab78) list_single_2heading_msg_pane_g2

0xcdc0,	// (0x0001b556) list_single_2heading_msg_pane_g3_ParamLimits

0xcdc0,	// (0x0001b556) list_single_2heading_msg_pane_g3

0xd1df,	// (0x0001b975) list_single_2heading_msg_pane_g4_ParamLimits

0xd1df,	// (0x0001b975) list_single_2heading_msg_pane_g4

0x0003,

0xfcbc,	// (0x0001e452) list_single_2heading_msg_pane_g_ParamLimits

0xfcbc,	// (0x0001e452) list_single_2heading_msg_pane_g

0xd1f7,	// (0x0001b98d) list_single_2heading_msg_pane_t1_ParamLimits

0xd1f7,	// (0x0001b98d) list_single_2heading_msg_pane_t1

0xd21f,	// (0x0001b9b5) list_single_2heading_msg_pane_t2_ParamLimits

0xd21f,	// (0x0001b9b5) list_single_2heading_msg_pane_t2

0xd253,	// (0x0001b9e9) list_single_2heading_msg_pane_t3_ParamLimits

0xd253,	// (0x0001b9e9) list_single_2heading_msg_pane_t3

0xd28c,	// (0x0001ba22) list_single_2heading_msg_pane_t4_ParamLimits

0xd28c,	// (0x0001ba22) list_single_2heading_msg_pane_t4

0x0003,

0xfcc5,	// (0x0001e45b) list_single_2heading_msg_pane_t_ParamLimits

0xfcc5,	// (0x0001e45b) list_single_2heading_msg_pane_t

0x240b,	// (0x00010ba1) title_pane_g4_ParamLimits

0x240b,	// (0x00010ba1) title_pane_g4

0xd7e0,	// (0x0001bf76) title_pane_stacon_g3_ParamLimits

0xd7e0,	// (0x0001bf76) title_pane_stacon_g3

0x86af,	// (0x00016e45) list_single_2graphic_im_pane_g4_ParamLimits

0x86af,	// (0x00016e45) list_single_2graphic_im_pane_g4

0x6095,	// (0x0001482b) popup_side_volume_key_window_cp

0x69a4,	// (0x0001513a) main_idle_act2_pane_t1

0xdd9c,	// (0x0001c532) toolbar_button_pane_g10

0x2c8d,	// (0x00011423) popup_toolbar_window_cp1

0x72bc,	// (0x00015a52) clock_nsta_pane_cp_t1

0x72bc,	// (0x00015a52) clock_nsta_pane_cp_t2

0x0001,

0xfad3,	// (0x0001e269) clock_nsta_pane_cp_t

0xd9d2,	// (0x0001c168) navi_navi_volume_pane_cp2_ParamLimits

0xd9e1,	// (0x0001c177) popup_side_volume_key_window_g1_ParamLimits

0xd9ed,	// (0x0001c183) popup_side_volume_key_window_g2_ParamLimits

0xd9fc,	// (0x0001c192) popup_side_volume_key_window_g3_ParamLimits

0xf74c,	// (0x0001dee2) popup_side_volume_key_window_g_ParamLimits

0xe237,	// (0x0001c9cd) fep_hwr_aid_pane

0xad53,	// (0x000194e9) bg_fep_hwr_top_pane_g4_ParamLimits

0x7931,	// (0x000160c7) fep_hwr_top_pane_g1_ParamLimits

0x791f,	// (0x000160b5) fep_hwr_top_pane_g2_ParamLimits

0xe2f0,	// (0x0001ca86) fep_hwr_top_pane_g3_ParamLimits

0xfb28,	// (0x0001e2be) fep_hwr_top_pane_g_ParamLimits

0xe305,	// (0x0001ca9b) fep_hwr_top_text_pane_ParamLimits

0x5e5f,	// (0x000145f5) aid_touch_tab_arrow_arrow_2

0x5e56,	// (0x000145ec) aid_touch_tab_arrow_left_2

0xe24b,	// (0x0001c9e1) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xe282,	// (0x0001ca18) fep_hwr_prediction_pane

0x7aa6,	// (0x0001623c) fep_vkb_prediction_pane

0x7baa,	// (0x00016340) fep_vkb_side_pane_g3_ParamLimits

0x7baa,	// (0x00016340) fep_vkb_side_pane_g3

0x7b56,	// (0x000162ec) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x8143,	// (0x000168d9) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x8150,	// (0x000168e6) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbd2,	// (0x0001e368) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x8cc3,	// (0x00017459) fep_hwr_prediction_pane_g1

0xe577,	// (0x0001cd0d) fep_hwr_prediction_pane_g2

0xe57f,	// (0x0001cd15) fep_hwr_prediction_pane_g3

0xe587,	// (0x0001cd1d) fep_hwr_prediction_pane_g4

0x0003,

0xfcce,	// (0x0001e464) fep_hwr_prediction_pane_g

0x8cc3,	// (0x00017459) fep_vkb_prediction_pane_g1

0x8ccd,	// (0x00017463) fep_vkb_prediction_pane_g2

0x8cd5,	// (0x0001746b) fep_vkb_prediction_pane_g3

0x8cdd,	// (0x00017473) fep_vkb_prediction_pane_g4

0x0003,

0xfcd7,	// (0x0001e46d) fep_vkb_prediction_pane_g

0xe074,	// (0x0001c80a) slider_set_pane_g3

0xe088,	// (0x0001c81e) slider_set_pane_g4

0xe0a0,	// (0x0001c836) slider_set_pane_g5

0xe074,	// (0x0001c80a) slider_set_pane_g6

0xe0b6,	// (0x0001c84c) slider_set_pane_g7

0x6526,	// (0x00014cbc) slider_form_pane_g3

0x652f,	// (0x00014cc5) slider_form_pane_g4

0x6537,	// (0x00014ccd) slider_form_pane_g5

0x6526,	// (0x00014cbc) slider_form_pane_g6

0x653f,	// (0x00014cd5) slider_form_pane_g7

0x6c78,	// (0x0001540e) slider_set_pane_vc_g3

0x6c81,	// (0x00015417) slider_set_pane_vc_g4

0x6c8a,	// (0x00015420) slider_set_pane_vc_g5

0x6c78,	// (0x0001540e) slider_set_pane_vc_g6

0x6c93,	// (0x00015429) slider_set_pane_vc_g7

0x6c78,	// (0x0001540e) slider_form_pane_vc_g1

0x6c81,	// (0x00015417) slider_form_pane_vc_g2

0x6c8a,	// (0x00015420) slider_form_pane_vc_g3

0x6c78,	// (0x0001540e) slider_form_pane_vc_g4

0x6ff4,	// (0x0001578a) slider_form_pane_vc_g5

0x0004,

0xfab9,	// (0x0001e24f) slider_form_pane_vc_g

0x23c3,	// (0x00010b59) main_idle_act3_pane

0x8ce5,	// (0x0001747b) ai3_links_pane

0x8cee,	// (0x00017484) popup_ai3_data_window_ParamLimits

0x8cee,	// (0x00017484) popup_ai3_data_window

0x23c3,	// (0x00010b59) grid_ai3_links_pane

0x8d06,	// (0x0001749c) cell_ai3_links_pane_ParamLimits

0x8d06,	// (0x0001749c) cell_ai3_links_pane

0x8d1e,	// (0x000174b4) bg_popup_sub_pane_cp11

0x8d2b,	// (0x000174c1) cell_ai3_links_pane_g1

0x23c3,	// (0x00010b59) bg_popup_sub_pane_cp12

0x8d50,	// (0x000174e6) heading_ai3_data_pane

0x8d58,	// (0x000174ee) list_ai3_gene_pane

0x8d64,	// (0x000174fa) popup_ai3_data_window_g1

0x8d6c,	// (0x00017502) heading_ai3_data_pane_g1

0x8d74,	// (0x0001750a) heading_ai3_data_pane_t1

0x8d82,	// (0x00017518) list_double_ai3_gene_pane_ParamLimits

0x8d82,	// (0x00017518) list_double_ai3_gene_pane

0x8d8f,	// (0x00017525) list_single_ai3_gene_pane_ParamLimits

0x8d8f,	// (0x00017525) list_single_ai3_gene_pane

0x7874,	// (0x0001600a) list_highlight_pane_cp7_ParamLimits

0x7874,	// (0x0001600a) list_highlight_pane_cp7

0x8d9c,	// (0x00017532) list_single_a13_gene_pane_t1_ParamLimits

0x8d9c,	// (0x00017532) list_single_a13_gene_pane_t1

0x8db3,	// (0x00017549) list_single_ai3_gene_pane_g1

0x8dbc,	// (0x00017552) list_single_ai3_gene_pane_g2

0x0001,

0xfce0,	// (0x0001e476) list_single_ai3_gene_pane_g

0x8dc4,	// (0x0001755a) list_double_ai3_gene_pane_g1_ParamLimits

0x8dc4,	// (0x0001755a) list_double_ai3_gene_pane_g1

0x8dd0,	// (0x00017566) list_double_ai3_gene_pane_t1_ParamLimits

0x8dd0,	// (0x00017566) list_double_ai3_gene_pane_t1

0x8dec,	// (0x00017582) list_double_ai3_gene_pane_t2_ParamLimits

0x8dec,	// (0x00017582) list_double_ai3_gene_pane_t2

0x8e01,	// (0x00017597) list_double_ai3_gene_pane_t3_ParamLimits

0x8e01,	// (0x00017597) list_double_ai3_gene_pane_t3

0x0002,

0xfce5,	// (0x0001e47b) list_double_ai3_gene_pane_t_ParamLimits

0xfce5,	// (0x0001e47b) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xd1c9,	// (0x0001b95f) aid_size_min_col_2

0x8bc5,	// (0x0001735b) aid_size_min_msg_ParamLimits

0x8bc5,	// (0x0001735b) aid_size_min_msg

0x7caa,	// (0x00016440) fep_vkb_top_text_pane_g2_ParamLimits

0x7caa,	// (0x00016440) fep_vkb_top_text_pane_g2

0x0001,

0xfb58,	// (0x0001e2ee) fep_vkb_top_text_pane_g_ParamLimits

0xfb58,	// (0x0001e2ee) fep_vkb_top_text_pane_g

0x23c3,	// (0x00010b59) main_hc_apps_shell_pane

0x8e1e,	// (0x000175b4) grid_hc_apps_pane_ParamLimits

0x8e1e,	// (0x000175b4) grid_hc_apps_pane

0x8e2d,	// (0x000175c3) list_hc_apps_pane

0x8e35,	// (0x000175cb) scroll_pane_cp37_ParamLimits

0x8e35,	// (0x000175cb) scroll_pane_cp37

0x8e41,	// (0x000175d7) cell_hc_apps_pane_ParamLimits

0x8e41,	// (0x000175d7) cell_hc_apps_pane

0x8ef1,	// (0x00017687) cell_hc_apps_pane_g1_ParamLimits

0x8ef1,	// (0x00017687) cell_hc_apps_pane_g1

0x8f22,	// (0x000176b8) cell_hc_apps_pane_g2_ParamLimits

0x8f22,	// (0x000176b8) cell_hc_apps_pane_g2

0x8f3e,	// (0x000176d4) cell_hc_apps_pane_g3_ParamLimits

0x8f3e,	// (0x000176d4) cell_hc_apps_pane_g3

0x0002,

0xfcec,	// (0x0001e482) cell_hc_apps_pane_g_ParamLimits

0xfcec,	// (0x0001e482) cell_hc_apps_pane_g

0x8f60,	// (0x000176f6) cell_hc_apps_pane_t1_ParamLimits

0x8f60,	// (0x000176f6) cell_hc_apps_pane_t1

0x275a,	// (0x00010ef0) grid_highlight_pane_cp10_ParamLimits

0x275a,	// (0x00010ef0) grid_highlight_pane_cp10

0x8fa0,	// (0x00017736) list_single_hc_apps_pane_ParamLimits

0x8fa0,	// (0x00017736) list_single_hc_apps_pane

0x9013,	// (0x000177a9) list_single_hc_apps_pane_g1

0xd2b1,	// (0x0001ba47) list_single_hc_apps_pane_g2

0x0001,

0xfcf3,	// (0x0001e489) list_single_hc_apps_pane_g

0xd2ca,	// (0x0001ba60) list_single_hc_apps_pane_g2_copy1

0xd2e6,	// (0x0001ba7c) list_single_hc_apps_pane_t1

0x24b7,	// (0x00010c4d) bg_set_opt_pane_cp_ParamLimits

0xd70b,	// (0x0001bea1) setting_slider_pane_t1_ParamLimits

0xd724,	// (0x0001beba) setting_slider_pane_t2_ParamLimits

0xd73d,	// (0x0001bed3) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x0001dd38) setting_slider_pane_t_ParamLimits

0xd754,	// (0x0001beea) slider_set_pane_ParamLimits

0xdc7a,	// (0x0001c410) control_pane_g5_ParamLimits

0xdc7a,	// (0x0001c410) control_pane_g5

0x6383,	// (0x00014b19) slider_set_pane_g1_ParamLimits

0xe068,	// (0x0001c7fe) slider_set_pane_g2_ParamLimits

0xe074,	// (0x0001c80a) slider_set_pane_g3_ParamLimits

0xe088,	// (0x0001c81e) slider_set_pane_g4_ParamLimits

0xe0a0,	// (0x0001c836) slider_set_pane_g5_ParamLimits

0xe074,	// (0x0001c80a) slider_set_pane_g6_ParamLimits

0xe0b6,	// (0x0001c84c) slider_set_pane_g7_ParamLimits

0xf98c,	// (0x0001e122) slider_set_pane_g_ParamLimits

0x3f54,	// (0x000126ea) navi_icon_text_pane_ParamLimits

0x4a23,	// (0x000131b9) aid_fill_nsta_2_ParamLimits

0x4a62,	// (0x000131f8) aid_touch_tab_arrow_left_ParamLimits

0x4a71,	// (0x00013207) aid_touch_tab_arrow_right_ParamLimits

0x4ade,	// (0x00013274) clock_nsta_pane_ParamLimits

0x5e32,	// (0x000145c8) navi_icon_pane_g1_ParamLimits

0x5e41,	// (0x000145d7) navi_text_pane_t1_ParamLimits

0x73ce,	// (0x00015b64) navi_icon_text_pane_g1_ParamLimits

0x73dd,	// (0x00015b73) navi_icon_text_pane_t1_ParamLimits

0x9013,	// (0x000177a9) list_single_hc_apps_pane_g1_ParamLimits

0xd2b1,	// (0x0001ba47) list_single_hc_apps_pane_g2_ParamLimits

0xfcf3,	// (0x0001e489) list_single_hc_apps_pane_g_ParamLimits

0xd2ca,	// (0x0001ba60) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd2e6,	// (0x0001ba7c) list_single_hc_apps_pane_t1_ParamLimits

0xd625,	// (0x0001bdbb) popup_toolbar2_fixed_window_ParamLimits

0xd625,	// (0x0001bdbb) popup_toolbar2_fixed_window

0x493b,	// (0x000130d1) popup_toolbar2_float_window

0x23c3,	// (0x00010b59) bg_popup_sub_pane_cp27

0x908f,	// (0x00017825) grid_toolbar2_float_pane

0x23c3,	// (0x00010b59) bg_popup_sub_pane_cp26

0x908f,	// (0x00017825) grid_toolbar2_fixed_pane

0x9097,	// (0x0001782d) cell_toolbar2_fixed_pane_ParamLimits

0x9097,	// (0x0001782d) cell_toolbar2_fixed_pane

0x90a8,	// (0x0001783e) cell_toolbar2_fixed_pane_g1

0x90b1,	// (0x00017847) toolbar2_fixed_button_pane

0x4f0e,	// (0x000136a4) toolbar2_fixed_button_pane_g1

0x4f1e,	// (0x000136b4) toolbar2_fixed_button_pane_g2

0x4f16,	// (0x000136ac) toolbar2_fixed_button_pane_g3

0x4f2e,	// (0x000136c4) toolbar2_fixed_button_pane_g4

0x4f26,	// (0x000136bc) toolbar2_fixed_button_pane_g5

0x4f36,	// (0x000136cc) toolbar2_fixed_button_pane_g6

0x4f3e,	// (0x000136d4) toolbar2_fixed_button_pane_g7

0x4f4e,	// (0x000136e4) toolbar2_fixed_button_pane_g8

0x4f46,	// (0x000136dc) toolbar2_fixed_button_pane_g9

0x0008,

0xf88e,	// (0x0001e024) toolbar2_fixed_button_pane_g

0x90b9,	// (0x0001784f) cell_toolbar2_float_pane_ParamLimits

0x90b9,	// (0x0001784f) cell_toolbar2_float_pane

0x90ca,	// (0x00017860) cell_toolbar2_float_pane_g1

0x90b1,	// (0x00017847) toolbar2_fixed_button_pane_cp

0x79ff,	// (0x00016195) fep_vkb_accented_list_pane_ParamLimits

0x79ff,	// (0x00016195) fep_vkb_accented_list_pane

0xe453,	// (0x0001cbe9) bg_popup_fep_shadow_pane_g9

0x40d6,	// (0x0001286c) bg_popup_fep_shadow_pane_cp3

0x356a,	// (0x00011d00) list_accented_list_pane

0x90d3,	// (0x00017869) list_single_accented_list_pane_ParamLimits

0x90d3,	// (0x00017869) list_single_accented_list_pane

0x40d6,	// (0x0001286c) list_highlight_pane_cp10

0x90e4,	// (0x0001787a) list_single_accented_list_pane_t1

0x488b,	// (0x00013021) popup_slider_window_ParamLimits

0x488b,	// (0x00013021) popup_slider_window

0x8bb2,	// (0x00017348) aid_indentation_list_msg

0x919e,	// (0x00017934) bg_popup_window_pane_cp19

0x9208,	// (0x0001799e) popup_slider_window_g1

0x9224,	// (0x000179ba) popup_slider_window_g2

0x9240,	// (0x000179d6) popup_slider_window_g3

0x0005,

0xfcf8,	// (0x0001e48e) popup_slider_window_g

0x929c,	// (0x00017a32) popup_slider_window_t1

0x9310,	// (0x00017aa6) small_volume_slider_vertical_pane

0x78af,	// (0x00016045) small_volume_slider_vertical_pane_g1

0x78af,	// (0x00016045) small_volume_slider_vertical_pane_g2

0x932c,	// (0x00017ac2) small_volume_slider_vertical_pane_g3

0x0002,

0xfd0a,	// (0x0001e4a0) small_volume_slider_vertical_pane_g

0xd3f5,	// (0x0001bb8b) area_side_right_pane_ParamLimits

0xd3f5,	// (0x0001bb8b) area_side_right_pane

0xe58f,	// (0x0001cd25) aid_size_side_button_ParamLimits

0xe58f,	// (0x0001cd25) aid_size_side_button

0xe5a3,	// (0x0001cd39) grid_sctrl_middle_pane_ParamLimits

0xe5a3,	// (0x0001cd39) grid_sctrl_middle_pane

0xe5c3,	// (0x0001cd59) sctrl_sk_bottom_pane

0xe5d4,	// (0x0001cd6a) sctrl_sk_top_pane

0xe5e6,	// (0x0001cd7c) aid_touch_sctrl_top

0x275a,	// (0x00010ef0) bg_sctrl_sk_pane_ParamLimits

0x275a,	// (0x00010ef0) bg_sctrl_sk_pane

0xe5f3,	// (0x0001cd89) sctrl_sk_top_pane_g1

0xe600,	// (0x0001cd96) sctrl_sk_top_pane_t1

0xe5e6,	// (0x0001cd7c) aid_touch_sctrl_bottom

0x275a,	// (0x00010ef0) bg_sctrl_sk_pane_cp_ParamLimits

0x275a,	// (0x00010ef0) bg_sctrl_sk_pane_cp

0xe61b,	// (0x0001cdb1) sctrl_sk_bottom_pane_g1

0xe600,	// (0x0001cd96) sctrl_sk_bottom_pane_t1

0xe624,	// (0x0001cdba) cell_sctrl_middle_pane_ParamLimits

0xe624,	// (0x0001cdba) cell_sctrl_middle_pane

0xe63f,	// (0x0001cdd5) aid_touch_sctrl_middle_ParamLimits

0xe63f,	// (0x0001cdd5) aid_touch_sctrl_middle

0x3290,	// (0x00011a26) bg_sctrl_middle_pane_ParamLimits

0x3290,	// (0x00011a26) bg_sctrl_middle_pane

0x7b56,	// (0x000162ec) cell_sctrl_middle_pane_g1_ParamLimits

0x7b56,	// (0x000162ec) cell_sctrl_middle_pane_g1

0xe651,	// (0x0001cde7) cell_sctrl_middle_pane_g2_ParamLimits

0xe651,	// (0x0001cde7) cell_sctrl_middle_pane_g2

0x0001,

0xfd16,	// (0x0001e4ac) cell_sctrl_middle_pane_g_ParamLimits

0xfd16,	// (0x0001e4ac) cell_sctrl_middle_pane_g

0x4f0e,	// (0x000136a4) bg_sctrl_middle_pane_g1

0x4f1e,	// (0x000136b4) bg_sctrl_middle_pane_g2

0x4f16,	// (0x000136ac) bg_sctrl_middle_pane_g3

0x4f2e,	// (0x000136c4) bg_sctrl_middle_pane_g4

0x4f26,	// (0x000136bc) bg_sctrl_middle_pane_g5

0x4f36,	// (0x000136cc) bg_sctrl_middle_pane_g6

0x4f3e,	// (0x000136d4) bg_sctrl_middle_pane_g7

0x4f4e,	// (0x000136e4) bg_sctrl_middle_pane_g8

0x0007,

0xfd1b,	// (0x0001e4b1) bg_sctrl_middle_pane_g

0x4f46,	// (0x000136dc) bg_sctrl_middle_pane_g8_copy1

0x4f0e,	// (0x000136a4) bg_sctrl_sk_pane_g1

0x4f1e,	// (0x000136b4) bg_sctrl_sk_pane_g2

0x4f16,	// (0x000136ac) bg_sctrl_sk_pane_g3

0x0008,

0xf88e,	// (0x0001e024) bg_sctrl_sk_pane_g

0x2c53,	// (0x000113e9) aid_size_touch_scroll_bar

0x4f2e,	// (0x000136c4) bg_sctrl_sk_pane_g4

0x4f26,	// (0x000136bc) bg_sctrl_sk_pane_g5

0x4f36,	// (0x000136cc) bg_sctrl_sk_pane_g6

0x4f3e,	// (0x000136d4) bg_sctrl_sk_pane_g7

0x4f4e,	// (0x000136e4) bg_sctrl_sk_pane_g8

0x4f46,	// (0x000136dc) bg_sctrl_sk_pane_g9

0x4504,	// (0x00012c9a) popup_fep_china_hwr2_fs_candidate_window

0x450e,	// (0x00012ca4) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x450e,	// (0x00012ca4) popup_fep_china_hwr2_fs_control_window

0x7b56,	// (0x000162ec) sctrl_sk_top_pane_g2

0x0001,

0xfd11,	// (0x0001e4a7) sctrl_sk_top_pane_g

0x9335,	// (0x00017acb) aid_fep_china_hwr2_fs_cell_ParamLimits

0x9335,	// (0x00017acb) aid_fep_china_hwr2_fs_cell

0x9347,	// (0x00017add) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x9347,	// (0x00017add) bg_popup_fep_shadow_pane_cp4

0x935e,	// (0x00017af4) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x935e,	// (0x00017af4) bg_popup_fep_shadow_pane_cp5

0x9370,	// (0x00017b06) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x9370,	// (0x00017b06) popup_fep_china_hwr2_fs_control_bar_grid

0x9380,	// (0x00017b16) popup_fep_china_hwr2_fs_control_funtion_grid

0x9388,	// (0x00017b1e) aid_fep_china_hwr2_fs_candi_cell

0x23c3,	// (0x00010b59) bg_popup_fep_shadow_pane_cp6

0x9392,	// (0x00017b28) popup_fep_china_hwr2_fs_candidate_grid

0x939c,	// (0x00017b32) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x939c,	// (0x00017b32) cell_fep_china_hwr2_fs_funtion_grid

0x78af,	// (0x00016045) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x93b4,	// (0x00017b4a) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x93b4,	// (0x00017b4a) cell_fep_china_hwr2_fs_funtion_grid_g1

0x93c2,	// (0x00017b58) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x93c2,	// (0x00017b58) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2c,	// (0x0001e4c2) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2c,	// (0x0001e4c2) cell_fep_china_hwr2_fs_funtion_grid_g

0x93d8,	// (0x00017b6e) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x93d8,	// (0x00017b6e) cell_fep_china_hwr2_fs_funtion_grid_t1

0x93ed,	// (0x00017b83) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x93ed,	// (0x00017b83) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd31,	// (0x0001e4c7) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd31,	// (0x0001e4c7) cell_fep_china_hwr2_fs_funtion_grid_t

0x9409,	// (0x00017b9f) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x9411,	// (0x00017ba7) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x9419,	// (0x00017baf) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd36,	// (0x0001e4cc) popup_fep_china_hwr2_fs_control_bar_grid_g

0x9421,	// (0x00017bb7) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x9421,	// (0x00017bb7) cell_fep_china_hwr2_fs_candidate_grid

0x943a,	// (0x00017bd0) popup_fep_china_hwr2_fs_candidate_grid_g20

0x9442,	// (0x00017bd8) popup_fep_china_hwr2_fs_candidate_grid_g21

0x78af,	// (0x00016045) cell_fep_china_hwr2_fs_candidate_grid_g1

0x78af,	// (0x00016045) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb5d,	// (0x0001e2f3) cell_fep_china_hwr2_fs_candidate_grid_g

0x944a,	// (0x00017be0) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4aeb,	// (0x00013281) clock_nsta_pane_cp_24_ParamLimits

0x4aeb,	// (0x00013281) clock_nsta_pane_cp_24

0x4b69,	// (0x000132ff) indicator_nsta_pane_cp_24_ParamLimits

0x4b69,	// (0x000132ff) indicator_nsta_pane_cp_24

0x5cae,	// (0x00014444) heading_pane_g1

0x0001,

0xf8f3,	// (0x0001e089) heading_pane_g

0x67eb,	// (0x00014f81) grid_sct_catagory_button_pane

0x681d,	// (0x00014fb3) scroll_pane_cp5_ParamLimits

0x7422,	// (0x00015bb8) button_value_adjust_pane_cp5_ParamLimits

0x7422,	// (0x00015bb8) button_value_adjust_pane_cp5

0x751a,	// (0x00015cb0) form2_midp_time_pane_ParamLimits

0x9458,	// (0x00017bee) cell_sct_catagory_button_pane_ParamLimits

0x9458,	// (0x00017bee) cell_sct_catagory_button_pane

0x7874,	// (0x0001600a) bg_button_pane_cp01_ParamLimits

0x7874,	// (0x0001600a) bg_button_pane_cp01

0x78af,	// (0x00016045) cell_sct_catagory_button_pane_g1

0x48ca,	// (0x00013060) popup_tb_extension_window

0x946a,	// (0x00017c00) aid_size_cell_ext_ParamLimits

0x946a,	// (0x00017c00) aid_size_cell_ext

0x275a,	// (0x00010ef0) bg_tb_trans_pane_cp1_ParamLimits

0x275a,	// (0x00010ef0) bg_tb_trans_pane_cp1

0x948a,	// (0x00017c20) grid_tb_ext_pane_ParamLimits

0x948a,	// (0x00017c20) grid_tb_ext_pane

0x94bc,	// (0x00017c52) cell_tb_ext_pane_ParamLimits

0x94bc,	// (0x00017c52) cell_tb_ext_pane

0x94d3,	// (0x00017c69) cell_tb_ext_pane_g1_ParamLimits

0x94d3,	// (0x00017c69) cell_tb_ext_pane_g1

0x94f0,	// (0x00017c86) cell_tb_ext_pane_t1

0x275a,	// (0x00010ef0) list_highlight_pane_cp11_ParamLimits

0x275a,	// (0x00010ef0) list_highlight_pane_cp11

0xd644,	// (0x0001bdda) popup_uni_indicator_window_ParamLimits

0xd644,	// (0x0001bdda) popup_uni_indicator_window

0x3290,	// (0x00011a26) bg_popup_sub_pane_cp14

0x950b,	// (0x00017ca1) list_uniindi_pane

0x9517,	// (0x00017cad) uniindi_top_pane

0x275a,	// (0x00010ef0) bg_uniindi_top_pane

0x9536,	// (0x00017ccc) uniindi_top_pane_g1

0x954c,	// (0x00017ce2) uniindi_top_pane_g2

0x0003,

0xfd3d,	// (0x0001e4d3) uniindi_top_pane_g

0x9576,	// (0x00017d0c) uniindi_top_pane_t1

0x95a0,	// (0x00017d36) list_single_uniindi_pane_ParamLimits

0x95a0,	// (0x00017d36) list_single_uniindi_pane

0x78af,	// (0x00016045) bg_uniindi_top_pane_g1

0x95b2,	// (0x00017d48) list_single_uniindi_pane_g1

0x95c5,	// (0x00017d5b) list_single_uniindi_pane_t1

0x23c3,	// (0x00010b59) control_bg_pane

0x95ea,	// (0x00017d80) bg_sctrl_sk_pane_cp1

0x95f3,	// (0x00017d89) bg_sctrl_sk_pane_cp2

0x95fc,	// (0x00017d92) control_bg_pane_g1

0x9605,	// (0x00017d9b) control_bg_pane_g2

0x0001,

0xfd46,	// (0x0001e4dc) control_bg_pane_g

0x7280,	// (0x00015a16) cell_indicator_nsta_pane_g1_ParamLimits

0x728e,	// (0x00015a24) cell_indicator_nsta_pane_g2_ParamLimits

0xface,	// (0x0001e264) cell_indicator_nsta_pane_g_ParamLimits

0xcf86,	// (0x0001b71c) form2_midp_time_pane_t1_ParamLimits

0x2a95,	// (0x0001122b) main_idle_act4_pane_ParamLimits

0x2a95,	// (0x0001122b) main_idle_act4_pane

0x48ca,	// (0x00013060) popup_tb_extension_window_ParamLimits

0x94ac,	// (0x00017c42) tb_ext_find_pane_ParamLimits

0x94ac,	// (0x00017c42) tb_ext_find_pane

0x960e,	// (0x00017da4) ai_gene_pane_1_cp1

0x421f,	// (0x000129b5) ai_gene_pane_2_cp1

0x9616,	// (0x00017dac) list_single_idle_plugin_calendar_pane

0x961f,	// (0x00017db5) list_single_idle_plugin_notification_pane

0x9628,	// (0x00017dbe) list_single_idle_plugin_player_pane

0x9631,	// (0x00017dc7) list_single_idle_plugin_shortcut_pane_ParamLimits

0x9631,	// (0x00017dc7) list_single_idle_plugin_shortcut_pane

0x9653,	// (0x00017de9) main_idle_act4_pane_t1

0x9665,	// (0x00017dfb) main_idle_act4_pane_t2

0x0001,

0xfd4b,	// (0x0001e4e1) main_idle_act4_pane_t

0x9677,	// (0x00017e0d) middle_sk_idle_act4_pane_ParamLimits

0x9677,	// (0x00017e0d) middle_sk_idle_act4_pane

0x968d,	// (0x00017e23) popup_clock_digital_analogue_window_cp2

0x96a7,	// (0x00017e3d) shortcut_wheel_idle_act4_pane_ParamLimits

0x96a7,	// (0x00017e3d) shortcut_wheel_idle_act4_pane

0x78af,	// (0x00016045) shortcut_wheel_idle_act4_pane_g1

0x78af,	// (0x00016045) shortcut_wheel_idle_act4_pane_g2

0x78af,	// (0x00016045) shortcut_wheel_idle_act4_pane_g3

0x78af,	// (0x00016045) shortcut_wheel_idle_act4_pane_g4

0x78af,	// (0x00016045) shortcut_wheel_idle_act4_pane_g5

0x96bb,	// (0x00017e51) shortcut_wheel_idle_act4_pane_g6

0x96c3,	// (0x00017e59) shortcut_wheel_idle_act4_pane_g7

0x96cb,	// (0x00017e61) shortcut_wheel_idle_act4_pane_g8

0x96d3,	// (0x00017e69) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd50,	// (0x0001e4e6) shortcut_wheel_idle_act4_pane_g

0x7b56,	// (0x000162ec) middle_sk_idle_act4_pane_g1_ParamLimits

0x7b56,	// (0x000162ec) middle_sk_idle_act4_pane_g1

0x9737,	// (0x00017ecd) middle_sk_idle_act4_pane_g2_ParamLimits

0x9737,	// (0x00017ecd) middle_sk_idle_act4_pane_g2

0x0001,

0xfd73,	// (0x0001e509) middle_sk_idle_act4_pane_g_ParamLimits

0xfd73,	// (0x0001e509) middle_sk_idle_act4_pane_g

0x9743,	// (0x00017ed9) middle_sk_idle_act4_pane_t1_ParamLimits

0x9743,	// (0x00017ed9) middle_sk_idle_act4_pane_t1

0x9760,	// (0x00017ef6) grid_ai_shortcut_pane_ParamLimits

0x9760,	// (0x00017ef6) grid_ai_shortcut_pane

0x9779,	// (0x00017f0f) list_highlight_pane_cp16_ParamLimits

0x9779,	// (0x00017f0f) list_highlight_pane_cp16

0x9786,	// (0x00017f1c) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x9786,	// (0x00017f1c) list_single_idle_plugin_shortcut_pane_g1

0x9792,	// (0x00017f28) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x9792,	// (0x00017f28) list_single_idle_plugin_shortcut_pane_g2

0x97aa,	// (0x00017f40) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x97aa,	// (0x00017f40) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd78,	// (0x0001e50e) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd78,	// (0x0001e50e) list_single_idle_plugin_shortcut_pane_g

0x97bd,	// (0x00017f53) cell_ai_shortcut_pane_ParamLimits

0x97bd,	// (0x00017f53) cell_ai_shortcut_pane

0x97de,	// (0x00017f74) cell_ai_shortcut_pane_g1_ParamLimits

0x97de,	// (0x00017f74) cell_ai_shortcut_pane_g1

0x960e,	// (0x00017da4) ai_gene_pane_1_cp2

0x9800,	// (0x00017f96) ai_gene_pane_2_cp2

0x9808,	// (0x00017f9e) list_highlight_pane_cp15

0x9811,	// (0x00017fa7) list_single_idle_plugin_calendar_pane_g1

0x9808,	// (0x00017f9e) list_highlight_pane_cp17

0x9819,	// (0x00017faf) list_single_idle_plugin_calendar_pane_g1_copy1

0x9821,	// (0x00017fb7) list_single_idle_plugin_player_pane_g1

0x6a44,	// (0x000151da) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7f,	// (0x0001e515) list_single_idle_plugin_player_pane_g

0x9829,	// (0x00017fbf) list_single_idle_plugin_player_pane_t1

0x9837,	// (0x00017fcd) list_single_idle_plugin_player_pane_t2

0x9845,	// (0x00017fdb) list_single_idle_plugin_player_pane_t3

0x9853,	// (0x00017fe9) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd84,	// (0x0001e51a) list_single_idle_plugin_player_pane_t

0x9861,	// (0x00017ff7) wait_bar_pane_cp15

0x9869,	// (0x00017fff) grid_ai_notification_pane

0x6a44,	// (0x000151da) list_single_idle_plugin_notification_pane_g1

0x9872,	// (0x00018008) cell_ai_notification_pane_ParamLimits

0x9872,	// (0x00018008) cell_ai_notification_pane

0x987f,	// (0x00018015) cell_ai_notification_pane_g1

0x9887,	// (0x0001801d) cell_ai_notification_pane_t1

0x9895,	// (0x0001802b) tb_ext_find_button_pane

0x989d,	// (0x00018033) tb_ext_find_pane_g1

0x98a5,	// (0x0001803b) tb_ext_find_pane_t1

0x3a69,	// (0x000121ff) tb_ext_find_button_pane_g1

0x98b3,	// (0x00018049) tb_ext_find_button_pane_g2

0x0001,

0xfd8d,	// (0x0001e523) tb_ext_find_button_pane_g

0x9653,	// (0x00017de9) main_idle_act4_pane_t1_ParamLimits

0x9665,	// (0x00017dfb) main_idle_act4_pane_t2_ParamLimits

0xfd4b,	// (0x0001e4e1) main_idle_act4_pane_t_ParamLimits

0x968d,	// (0x00017e23) popup_clock_digital_analogue_window_cp2_ParamLimits

0x969b,	// (0x00017e31) sat_plugin_idle_act4_pane_ParamLimits

0x969b,	// (0x00017e31) sat_plugin_idle_act4_pane

0x98bc,	// (0x00018052) sat_plugin_idle_act4_pane_t1_ParamLimits

0x98bc,	// (0x00018052) sat_plugin_idle_act4_pane_t1

0x98cf,	// (0x00018065) sat_plugin_idle_act4_pane_t2_ParamLimits

0x98cf,	// (0x00018065) sat_plugin_idle_act4_pane_t2

0x98e2,	// (0x00018078) sat_plugin_idle_act4_pane_t3_ParamLimits

0x98e2,	// (0x00018078) sat_plugin_idle_act4_pane_t3

0x98f5,	// (0x0001808b) sat_plugin_idle_act4_pane_t4_ParamLimits

0x98f5,	// (0x0001808b) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd92,	// (0x0001e528) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd92,	// (0x0001e528) sat_plugin_idle_act4_pane_t

0xd58d,	// (0x0001bd23) popup_battery_window_ParamLimits

0xd58d,	// (0x0001bd23) popup_battery_window

0x275a,	// (0x00010ef0) bg_popup_sub_pane_cp25_ParamLimits

0x275a,	// (0x00010ef0) bg_popup_sub_pane_cp25

0x9908,	// (0x0001809e) popup_battery_window_g1_ParamLimits

0x9908,	// (0x0001809e) popup_battery_window_g1

0x9914,	// (0x000180aa) popup_battery_window_t1_ParamLimits

0x9914,	// (0x000180aa) popup_battery_window_t1

0x9926,	// (0x000180bc) popup_battery_window_t2_ParamLimits

0x9926,	// (0x000180bc) popup_battery_window_t2

0x0001,

0xfd9b,	// (0x0001e531) popup_battery_window_t_ParamLimits

0xfd9b,	// (0x0001e531) popup_battery_window_t

0x40ea,	// (0x00012880) midp_canvas_pane_ParamLimits

0x4161,	// (0x000128f7) midp_keypad_pane_ParamLimits

0x4161,	// (0x000128f7) midp_keypad_pane

0x445c,	// (0x00012bf2) main_midp_pane_ParamLimits

0x72da,	// (0x00015a70) signal_pane_g2_cp_ParamLimits

0x9943,	// (0x000180d9) aid_size_cell_midp_keypad_ParamLimits

0x9943,	// (0x000180d9) aid_size_cell_midp_keypad

0x995d,	// (0x000180f3) midp_keyp_game_grid_pane_ParamLimits

0x995d,	// (0x000180f3) midp_keyp_game_grid_pane

0x997d,	// (0x00018113) midp_keyp_rocker_pane_ParamLimits

0x997d,	// (0x00018113) midp_keyp_rocker_pane

0x99b6,	// (0x0001814c) midp_keyp_sk_left_pane_ParamLimits

0x99b6,	// (0x0001814c) midp_keyp_sk_left_pane

0x9a10,	// (0x000181a6) midp_keyp_sk_right_pane_ParamLimits

0x9a10,	// (0x000181a6) midp_keyp_sk_right_pane

0x23c3,	// (0x00010b59) bg_button_pane_cp03

0x9a6a,	// (0x00018200) midp_keyp_sk_left_pane_g1

0x23c3,	// (0x00010b59) bg_button_pane_cp04

0x9a6a,	// (0x00018200) midp_keyp_sk_right_pane_g1

0x78af,	// (0x00016045) midp_keyp_rocker_pane_g1

0x9a73,	// (0x00018209) keyp_game_cell_pane_ParamLimits

0x9a73,	// (0x00018209) keyp_game_cell_pane

0x23c3,	// (0x00010b59) bg_button_pane_cp02

0x9a86,	// (0x0001821c) keyp_game_cell_pane_g1

0xd5c3,	// (0x0001bd59) popup_fep_vkb2_window_ParamLimits

0xd5c3,	// (0x0001bd59) popup_fep_vkb2_window

0xe673,	// (0x0001ce09) aid_size_cell_vkb2_ParamLimits

0xe673,	// (0x0001ce09) aid_size_cell_vkb2

0xe6c7,	// (0x0001ce5d) popup_fep_vkb2_window_g1_ParamLimits

0xe6c7,	// (0x0001ce5d) popup_fep_vkb2_window_g1

0xe707,	// (0x0001ce9d) vkb2_area_bottom_pane_ParamLimits

0xe707,	// (0x0001ce9d) vkb2_area_bottom_pane

0xe753,	// (0x0001cee9) vkb2_area_keypad_pane_ParamLimits

0xe753,	// (0x0001cee9) vkb2_area_keypad_pane

0xe795,	// (0x0001cf2b) vkb2_area_top_pane_ParamLimits

0xe795,	// (0x0001cf2b) vkb2_area_top_pane

0xe80f,	// (0x0001cfa5) vkb2_top_entry_pane_ParamLimits

0xe80f,	// (0x0001cfa5) vkb2_top_entry_pane

0xe839,	// (0x0001cfcf) vkb2_top_grid_left_pane_ParamLimits

0xe839,	// (0x0001cfcf) vkb2_top_grid_left_pane

0xe857,	// (0x0001cfed) vkb2_top_grid_right_pane_ParamLimits

0xe857,	// (0x0001cfed) vkb2_top_grid_right_pane

0xe875,	// (0x0001d00b) vkb2_cell_keypad_pane_ParamLimits

0xe875,	// (0x0001d00b) vkb2_cell_keypad_pane

0xe946,	// (0x0001d0dc) vkb2_area_bottom_grid_pane_ParamLimits

0xe946,	// (0x0001d0dc) vkb2_area_bottom_grid_pane

0xe96c,	// (0x0001d102) vkb2_area_bottom_pane_g1_ParamLimits

0xe96c,	// (0x0001d102) vkb2_area_bottom_pane_g1

0xe990,	// (0x0001d126) vkb2_area_bottom_pane_g2_ParamLimits

0xe990,	// (0x0001d126) vkb2_area_bottom_pane_g2

0xe9be,	// (0x0001d154) vkb2_area_bottom_pane_g3_ParamLimits

0xe9be,	// (0x0001d154) vkb2_area_bottom_pane_g3

0x0002,

0xfda0,	// (0x0001e536) vkb2_area_bottom_pane_g_ParamLimits

0xfda0,	// (0x0001e536) vkb2_area_bottom_pane_g

0xea1f,	// (0x0001d1b5) vkb2_top_cell_left_pane_ParamLimits

0xea1f,	// (0x0001d1b5) vkb2_top_cell_left_pane

0xea3f,	// (0x0001d1d5) vkb2_top_entry_pane_g1_ParamLimits

0xea3f,	// (0x0001d1d5) vkb2_top_entry_pane_g1

0xea4d,	// (0x0001d1e3) vkb2_top_entry_pane_t1_ParamLimits

0xea4d,	// (0x0001d1e3) vkb2_top_entry_pane_t1

0xad69,	// (0x000194ff) vkb2_top_entry_pane_t2_ParamLimits

0xad69,	// (0x000194ff) vkb2_top_entry_pane_t2

0xad9b,	// (0x00019531) vkb2_top_entry_pane_t3_ParamLimits

0xad9b,	// (0x00019531) vkb2_top_entry_pane_t3

0x0002,

0xfda7,	// (0x0001e53d) vkb2_top_entry_pane_t_ParamLimits

0xfda7,	// (0x0001e53d) vkb2_top_entry_pane_t

0xeaac,	// (0x0001d242) vkb2_top_grid_right_pane_g1_ParamLimits

0xeaac,	// (0x0001d242) vkb2_top_grid_right_pane_g1

0xeac2,	// (0x0001d258) vkb2_top_grid_right_pane_g2_ParamLimits

0xeac2,	// (0x0001d258) vkb2_top_grid_right_pane_g2

0xeada,	// (0x0001d270) vkb2_top_grid_right_pane_g3_ParamLimits

0xeada,	// (0x0001d270) vkb2_top_grid_right_pane_g3

0xeaf2,	// (0x0001d288) vkb2_top_grid_right_pane_g4_ParamLimits

0xeaf2,	// (0x0001d288) vkb2_top_grid_right_pane_g4

0x0003,

0xfdae,	// (0x0001e544) vkb2_top_grid_right_pane_g_ParamLimits

0xfdae,	// (0x0001e544) vkb2_top_grid_right_pane_g

0xeb08,	// (0x0001d29e) vkb2_top_cell_left_pane_g1

0xeb1f,	// (0x0001d2b5) vkb2_cell_keypad_pane_g1_ParamLimits

0xeb1f,	// (0x0001d2b5) vkb2_cell_keypad_pane_g1

0xadbf,	// (0x00019555) vkb2_cell_keypad_pane_t1_ParamLimits

0xadbf,	// (0x00019555) vkb2_cell_keypad_pane_t1

0xeb2d,	// (0x0001d2c3) vkb2_cell_bottom_grid_pane_ParamLimits

0xeb2d,	// (0x0001d2c3) vkb2_cell_bottom_grid_pane

0xeb66,	// (0x0001d2fc) vkb2_cell_bottom_grid_pane_g1

0x96db,	// (0x00017e71) aid_call2_pane_cp02

0x96e3,	// (0x00017e79) aid_call_pane_cp02

0x96eb,	// (0x00017e81) clock_digital_number_pane_cp10

0x96f3,	// (0x00017e89) clock_digital_number_pane_cp11

0x96fb,	// (0x00017e91) clock_digital_number_pane_cp12

0x9703,	// (0x00017e99) clock_digital_number_pane_cp13

0x970b,	// (0x00017ea1) clock_digital_separator_pane_cp10

0x3a69,	// (0x000121ff) popup_clock_digital_analogue_window_cp2_g1

0x3a69,	// (0x000121ff) popup_clock_digital_analogue_window_cp2_g2

0x9713,	// (0x00017ea9) popup_clock_digital_analogue_window_cp2_g3

0x3a69,	// (0x000121ff) popup_clock_digital_analogue_window_cp2_g4

0x9713,	// (0x00017ea9) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd63,	// (0x0001e4f9) popup_clock_digital_analogue_window_cp2_g

0x971b,	// (0x00017eb1) popup_clock_digital_analogue_window_cp2_t1

0x9729,	// (0x00017ebf) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd6e,	// (0x0001e504) popup_clock_digital_analogue_window_cp2_t

0x78af,	// (0x00016045) clock_digital_number_pane_cp10_g1

0x78af,	// (0x00016045) clock_digital_number_pane_cp10_g2

0x0001,

0xfb5d,	// (0x0001e2f3) clock_digital_number_pane_cp10_g

0x78af,	// (0x00016045) clock_digital_separator_pane_cp10_g1

0x78af,	// (0x00016045) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb5d,	// (0x0001e2f3) clock_digital_separator_pane_cp10_g

0x9558,	// (0x00017cee) uniindi_top_pane_g3

0x9569,	// (0x00017cff) uniindi_top_pane_g4

0xe900,	// (0x0001d096) vkb2_row_keypad_pane_ParamLimits

0xe900,	// (0x0001d096) vkb2_row_keypad_pane

0xeb86,	// (0x0001d31c) vkb2_cell_t_keypad_pane_ParamLimits

0xeb86,	// (0x0001d31c) vkb2_cell_t_keypad_pane

0xeb96,	// (0x0001d32c) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xeb96,	// (0x0001d32c) vkb2_cell_t_keypad_pane_cp08

0xeba9,	// (0x0001d33f) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xeba9,	// (0x0001d33f) vkb2_cell_t_keypad_pane_cp09

0xebbd,	// (0x0001d353) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xebbd,	// (0x0001d353) vkb2_cell_t_keypad_pane_cp01

0xebce,	// (0x0001d364) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xebce,	// (0x0001d364) vkb2_cell_t_keypad_pane_cp02

0xebdf,	// (0x0001d375) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xebdf,	// (0x0001d375) vkb2_cell_t_keypad_pane_cp03

0xebf0,	// (0x0001d386) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xebf0,	// (0x0001d386) vkb2_cell_t_keypad_pane_cp04

0xec01,	// (0x0001d397) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xec01,	// (0x0001d397) vkb2_cell_t_keypad_pane_cp05

0xec12,	// (0x0001d3a8) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xec12,	// (0x0001d3a8) vkb2_cell_t_keypad_pane_cp06

0xec23,	// (0x0001d3b9) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xec23,	// (0x0001d3b9) vkb2_cell_t_keypad_pane_cp07

0xec34,	// (0x0001d3ca) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xec34,	// (0x0001d3ca) vkb2_cell_t_keypad_pane_cp10

0x7b56,	// (0x000162ec) vkb2_cell_t_keypad_pane_g1

0xadd6,	// (0x0001956c) vkb2_cell_t_keypad_pane_t1

0x23c3,	// (0x00010b59) popup_grid_graphic2_window

0xec49,	// (0x0001d3df) aid_size_cell_graphic2_ParamLimits

0xec49,	// (0x0001d3df) aid_size_cell_graphic2

0x7975,	// (0x0001610b) bg_popup_window_pane_cp21_ParamLimits

0x7975,	// (0x0001610b) bg_popup_window_pane_cp21

0xec75,	// (0x0001d40b) graphic2_pages_pane_ParamLimits

0xec75,	// (0x0001d40b) graphic2_pages_pane

0xecbb,	// (0x0001d451) grid_graphic2_control_pane_ParamLimits

0xecbb,	// (0x0001d451) grid_graphic2_control_pane

0xece9,	// (0x0001d47f) grid_graphic2_pane_ParamLimits

0xece9,	// (0x0001d47f) grid_graphic2_pane

0xed49,	// (0x0001d4df) cell_graphic2_pane

0x23c3,	// (0x00010b59) main_comp_mode_pane

0x8d58,	// (0x000174ee) list_ai3_gene_pane_ParamLimits

0x919e,	// (0x00017934) bg_popup_window_pane_cp19_ParamLimits

0x91aa,	// (0x00017940) bg_touch_area_indi_pane_ParamLimits

0x91aa,	// (0x00017940) bg_touch_area_indi_pane

0x91c0,	// (0x00017956) bg_touch_area_indi_pane_cp01_ParamLimits

0x91c0,	// (0x00017956) bg_touch_area_indi_pane_cp01

0x91d6,	// (0x0001796c) bg_touch_area_indi_pane_cp02_ParamLimits

0x91d6,	// (0x0001796c) bg_touch_area_indi_pane_cp02

0x91ee,	// (0x00017984) bg_touch_area_indi_pane_cp03_ParamLimits

0x91ee,	// (0x00017984) bg_touch_area_indi_pane_cp03

0x9208,	// (0x0001799e) popup_slider_window_g1_ParamLimits

0x9224,	// (0x000179ba) popup_slider_window_g2_ParamLimits

0x9240,	// (0x000179d6) popup_slider_window_g3_ParamLimits

0xfcf8,	// (0x0001e48e) popup_slider_window_g_ParamLimits

0x929c,	// (0x00017a32) popup_slider_window_t1_ParamLimits

0x9310,	// (0x00017aa6) small_volume_slider_vertical_pane_ParamLimits

0xed49,	// (0x0001d4df) cell_graphic2_pane_ParamLimits

0xed98,	// (0x0001d52e) bg_button_pane_cp10_ParamLimits

0xed98,	// (0x0001d52e) bg_button_pane_cp10

0xedab,	// (0x0001d541) bg_button_pane_cp11_ParamLimits

0xedab,	// (0x0001d541) bg_button_pane_cp11

0xedbe,	// (0x0001d554) graphic2_pages_pane_g1_ParamLimits

0xedbe,	// (0x0001d554) graphic2_pages_pane_g1

0xedd9,	// (0x0001d56f) graphic2_pages_pane_g2_ParamLimits

0xedd9,	// (0x0001d56f) graphic2_pages_pane_g2

0x0001,

0xfdbc,	// (0x0001e552) graphic2_pages_pane_g_ParamLimits

0xfdbc,	// (0x0001e552) graphic2_pages_pane_g

0xedf1,	// (0x0001d587) graphic2_pages_pane_t1_ParamLimits

0xedf1,	// (0x0001d587) graphic2_pages_pane_t1

0xee07,	// (0x0001d59d) cell_graphic2_control_pane_ParamLimits

0xee07,	// (0x0001d59d) cell_graphic2_control_pane

0xee21,	// (0x0001d5b7) cell_graphic2_pane_g1_ParamLimits

0xee21,	// (0x0001d5b7) cell_graphic2_pane_g1

0xee2e,	// (0x0001d5c4) cell_graphic2_pane_g2_ParamLimits

0xee2e,	// (0x0001d5c4) cell_graphic2_pane_g2

0xee3b,	// (0x0001d5d1) cell_graphic2_pane_g3_ParamLimits

0xee3b,	// (0x0001d5d1) cell_graphic2_pane_g3

0xee48,	// (0x0001d5de) cell_graphic2_pane_g4_ParamLimits

0xee48,	// (0x0001d5de) cell_graphic2_pane_g4

0xee55,	// (0x0001d5eb) cell_graphic2_pane_g5_ParamLimits

0xee55,	// (0x0001d5eb) cell_graphic2_pane_g5

0x0004,

0xfdc1,	// (0x0001e557) cell_graphic2_pane_g_ParamLimits

0xfdc1,	// (0x0001e557) cell_graphic2_pane_g

0xee70,	// (0x0001d606) cell_graphic2_pane_t1_ParamLimits

0xee70,	// (0x0001d606) cell_graphic2_pane_t1

0x5028,	// (0x000137be) grid_highlight_pane_cp11_ParamLimits

0x5028,	// (0x000137be) grid_highlight_pane_cp11

0x3290,	// (0x00011a26) bg_button_pane_cp05

0xee86,	// (0x0001d61c) cell_graphic2_control_pane_g1

0x78af,	// (0x00016045) bg_touch_area_indi_pane_g1

0xae02,	// (0x00019598) aid_cmod_rocker_key_size

0xae0c,	// (0x000195a2) aid_cmode_itu_key_size

0xae16,	// (0x000195ac) main_cmode_video_pane

0xae20,	// (0x000195b6) main_comp_mode_itu_pane

0xae2c,	// (0x000195c2) main_comp_mode_rocker_pane

0xae38,	// (0x000195ce) cell_cmode_rocker_pane_ParamLimits

0xae38,	// (0x000195ce) cell_cmode_rocker_pane

0xae4a,	// (0x000195e0) cell_cmode_itu_pane_ParamLimits

0xae4a,	// (0x000195e0) cell_cmode_itu_pane

0x3290,	// (0x00011a26) bg_button_pane_cp06_ParamLimits

0x3290,	// (0x00011a26) bg_button_pane_cp06

0x7b56,	// (0x000162ec) cell_cmode_rocker_pane_g1_ParamLimits

0x7b56,	// (0x000162ec) cell_cmode_rocker_pane_g1

0x93b4,	// (0x00017b4a) cell_cmode_rocker_pane_g2_ParamLimits

0x93b4,	// (0x00017b4a) cell_cmode_rocker_pane_g2

0x0001,

0xfdcc,	// (0x0001e562) cell_cmode_rocker_pane_g_ParamLimits

0xfdcc,	// (0x0001e562) cell_cmode_rocker_pane_g

0x23c3,	// (0x00010b59) bg_button_pane_cp07

0xae5f,	// (0x000195f5) cell_cmode_itu_pane_g1

0xae68,	// (0x000195fe) cell_cmode_itu_pane_t1

0xae76,	// (0x0001960c) cell_cmode_itu_pane_t2

0x0001,

0xfdd1,	// (0x0001e567) cell_cmode_itu_pane_t

0x95da,	// (0x00017d70) aid_touch_ctrl_left

0x95e2,	// (0x00017d78) aid_touch_ctrl_right

0x23c3,	// (0x00010b59) compa_mode_pane

0xee93,	// (0x0001d629) aid_cmod_rocker_key_size_cp

0xee9d,	// (0x0001d633) aid_cmode_itu_key_size_cp

0xae84,	// (0x0001961a) compa_mode_pane_g1

0xae8c,	// (0x00019622) compa_mode_pane_g2

0xae94,	// (0x0001962a) compa_mode_pane_g3

0x0002,

0xfdd6,	// (0x0001e56c) compa_mode_pane_g

0xeea7,	// (0x0001d63d) main_comp_mode_itu_pane_cp

0xeeaf,	// (0x0001d645) main_comp_mode_rocker_pane_cp

0xeeb7,	// (0x0001d64d) cell_cmode_itu_pane_cp_ParamLimits

0xeeb7,	// (0x0001d64d) cell_cmode_itu_pane_cp

0xeecc,	// (0x0001d662) cell_cmode_rocker_pane_cp_ParamLimits

0xeecc,	// (0x0001d662) cell_cmode_rocker_pane_cp

0x3290,	// (0x00011a26) bg_button_pane_cp06_cp_ParamLimits

0x3290,	// (0x00011a26) bg_button_pane_cp06_cp

0x7b56,	// (0x000162ec) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7b56,	// (0x000162ec) cell_cmode_rocker_pane_g1_cp

0x78af,	// (0x00016045) cell_cmode_rocker_pane_g2_cp

0x23c3,	// (0x00010b59) bg_button_pane_cp07_cp

0xeede,	// (0x0001d674) cell_cmode_itu_pane_g1_cp

0xeee7,	// (0x0001d67d) cell_cmode_itu_pane_t1_cp

0xeee7,	// (0x0001d67d) cell_cmode_itu_pane_t2_cp

0x6513,	// (0x00014ca9) settings_code_pane_cp2

0x24b7,	// (0x00010c4d) bg_popup_window_pane_cp3_ParamLimits

0x2928,	// (0x000110be) heading_pane_cp3_ParamLimits

0x2934,	// (0x000110ca) listscroll_popup_graphic_pane_ParamLimits

0xe237,	// (0x0001c9cd) fep_hwr_aid_pane_ParamLimits

0xe5e6,	// (0x0001cd7c) aid_touch_sctrl_top_ParamLimits

0xe5f3,	// (0x0001cd89) sctrl_sk_top_pane_g1_ParamLimits

0x7b56,	// (0x000162ec) sctrl_sk_top_pane_g2_ParamLimits

0xfd11,	// (0x0001e4a7) sctrl_sk_top_pane_g_ParamLimits

0xe600,	// (0x0001cd96) sctrl_sk_top_pane_t1_ParamLimits

0xe5e6,	// (0x0001cd7c) aid_touch_sctrl_bottom_ParamLimits

0xe600,	// (0x0001cd96) sctrl_sk_bottom_pane_t1_ParamLimits

0x9524,	// (0x00017cba) aid_area_touch_clock

0xe7d7,	// (0x0001cf6d) aid_vkb2_area_top_pane_cell_ParamLimits

0xe7d7,	// (0x0001cf6d) aid_vkb2_area_top_pane_cell

0xe922,	// (0x0001d0b8) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe922,	// (0x0001d0b8) aid_vkb2_area_bottom_pane_cell

0xad61,	// (0x000194f7) popup_char_count_window

0xae9c,	// (0x00019632) popup_char_count_window_g1

0xaea5,	// (0x0001963b) popup_char_count_window_g2

0xaeae,	// (0x00019644) popup_char_count_window_g3

0x0002,

0xfddd,	// (0x0001e573) popup_char_count_window_g

0xaeb7,	// (0x0001964d) popup_char_count_window_t1

0xe6a5,	// (0x0001ce3b) popup_fep_char_preview_window_ParamLimits

0xe6a5,	// (0x0001ce3b) popup_fep_char_preview_window

0xe7f5,	// (0x0001cf8b) vkb2_top_candi_pane_ParamLimits

0xe7f5,	// (0x0001cf8b) vkb2_top_candi_pane

0xeef5,	// (0x0001d68b) cell_vkb2_top_candi_pane_ParamLimits

0xeef5,	// (0x0001d68b) cell_vkb2_top_candi_pane

0x5634,	// (0x00013dca) bg_popup_fep_char_preview_window_ParamLimits

0x5634,	// (0x00013dca) bg_popup_fep_char_preview_window

0xef42,	// (0x0001d6d8) popup_fep_char_preview_window_t1_ParamLimits

0xef42,	// (0x0001d6d8) popup_fep_char_preview_window_t1

0xaed5,	// (0x0001966b) bg_popup_fep_char_preview_window_g1

0xaecd,	// (0x00019663) bg_popup_fep_char_preview_window_g2

0xaec5,	// (0x0001965b) bg_popup_fep_char_preview_window_g3

0xaef5,	// (0x0001968b) bg_popup_fep_char_preview_window_g4

0xaeed,	// (0x00019683) bg_popup_fep_char_preview_window_g5

0xef7c,	// (0x0001d712) bg_popup_fep_char_preview_window_g6

0xaee5,	// (0x0001967b) bg_popup_fep_char_preview_window_g7

0xaedd,	// (0x00019673) bg_popup_fep_char_preview_window_g8

0xaefd,	// (0x00019693) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde4,	// (0x0001e57a) bg_popup_fep_char_preview_window_g

0x7b56,	// (0x000162ec) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7b56,	// (0x000162ec) cell_vkb2_top_candi_pane_g1

0x815d,	// (0x000168f3) cell_vkb2_top_candi_pane_g2_ParamLimits

0x815d,	// (0x000168f3) cell_vkb2_top_candi_pane_g2

0x817e,	// (0x00016914) cell_vkb2_top_candi_pane_g3_ParamLimits

0x817e,	// (0x00016914) cell_vkb2_top_candi_pane_g3

0xef84,	// (0x0001d71a) cell_vkb2_top_candi_pane_g4_ParamLimits

0xef84,	// (0x0001d71a) cell_vkb2_top_candi_pane_g4

0xad32,	// (0x000194c8) cell_vkb2_top_candi_pane_g5_ParamLimits

0xad32,	// (0x000194c8) cell_vkb2_top_candi_pane_g5

0x93b4,	// (0x00017b4a) cell_vkb2_top_candi_pane_g6_ParamLimits

0x93b4,	// (0x00017b4a) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf7,	// (0x0001e58d) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf7,	// (0x0001e58d) cell_vkb2_top_candi_pane_g

0xefa5,	// (0x0001d73b) cell_vkb2_top_candi_pane_t1

0xe054,	// (0x0001c7ea) aid_size_touch_slider_mark_ParamLimits

0xe054,	// (0x0001c7ea) aid_size_touch_slider_mark

0xecab,	// (0x0001d441) grid_graphic2_catg_pane_ParamLimits

0xecab,	// (0x0001d441) grid_graphic2_catg_pane

0xed25,	// (0x0001d4bb) popup_grid_graphic2_window_t1_ParamLimits

0xed25,	// (0x0001d4bb) popup_grid_graphic2_window_t1

0xed37,	// (0x0001d4cd) popup_grid_graphic2_window_t2_ParamLimits

0xed37,	// (0x0001d4cd) popup_grid_graphic2_window_t2

0x0001,

0xfdb7,	// (0x0001e54d) popup_grid_graphic2_window_t_ParamLimits

0xfdb7,	// (0x0001e54d) popup_grid_graphic2_window_t

0x3290,	// (0x00011a26) bg_button_pane_cp05_ParamLimits

0xee86,	// (0x0001d61c) cell_graphic2_control_pane_g1_ParamLimits

0xefc4,	// (0x0001d75a) cell_graphic2_catg_pane_ParamLimits

0xefc4,	// (0x0001d75a) cell_graphic2_catg_pane

0x23c3,	// (0x00010b59) bg_button_pane_cp12

0xefd6,	// (0x0001d76c) cell_graphic2_catg_pane_g1

0x94f0,	// (0x00017c86) cell_tb_ext_pane_t1_ParamLimits

0xea7f,	// (0x0001d215) vkb2_top_cell_right_narrow_pane_ParamLimits

0xea7f,	// (0x0001d215) vkb2_top_cell_right_narrow_pane

0xea97,	// (0x0001d22d) vkb2_top_cell_right_wide_pane_ParamLimits

0xea97,	// (0x0001d22d) vkb2_top_cell_right_wide_pane

0x7975,	// (0x0001610b) bg_vkb2_func_pane_ParamLimits

0x7975,	// (0x0001610b) bg_vkb2_func_pane

0xeb08,	// (0x0001d29e) vkb2_top_cell_left_pane_g1_ParamLimits

0x7975,	// (0x0001610b) bg_vkb2_fuc_pane_cp03_ParamLimits

0x7975,	// (0x0001610b) bg_vkb2_fuc_pane_cp03

0xeb66,	// (0x0001d2fc) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4f1e,	// (0x000136b4) bg_vkb2_func_pane_g1

0x4f16,	// (0x000136ac) bg_vkb2_func_pane_g2

0x4f26,	// (0x000136bc) bg_vkb2_func_pane_g3

0x4f2e,	// (0x000136c4) bg_vkb2_func_pane_g4

0x4f36,	// (0x000136cc) bg_vkb2_func_pane_g5

0x4f3e,	// (0x000136d4) bg_vkb2_func_pane_g6

0x4f4e,	// (0x000136e4) bg_vkb2_func_pane_g7

0x4f46,	// (0x000136dc) bg_vkb2_func_pane_g8

0x4f0e,	// (0x000136a4) bg_vkb2_func_pane_g9

0x0008,

0xfe04,	// (0x0001e59a) bg_vkb2_func_pane_g

0x7975,	// (0x0001610b) bg_vkb2_fuc_pane_cp01_ParamLimits

0x7975,	// (0x0001610b) bg_vkb2_fuc_pane_cp01

0xeb08,	// (0x0001d29e) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xeb08,	// (0x0001d29e) vkb2_top_cell_right_wide_pane_g1

0x7975,	// (0x0001610b) bg_vkb2_fuc_pane_cp02_ParamLimits

0x7975,	// (0x0001610b) bg_vkb2_fuc_pane_cp02

0xeb66,	// (0x0001d2fc) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xeb66,	// (0x0001d2fc) vkb2_top_cell_right_narrow_pane_g1

0x911c,	// (0x000178b2) aid_touch_area_decrease_ParamLimits

0x911c,	// (0x000178b2) aid_touch_area_decrease

0x9140,	// (0x000178d6) aid_touch_area_increase_ParamLimits

0x9140,	// (0x000178d6) aid_touch_area_increase

0x914c,	// (0x000178e2) aid_touch_area_mute_ParamLimits

0x914c,	// (0x000178e2) aid_touch_area_mute

0x9170,	// (0x00017906) aid_touch_area_slider_ParamLimits

0x9170,	// (0x00017906) aid_touch_area_slider

0x925c,	// (0x000179f2) popup_slider_window_g4_ParamLimits

0x925c,	// (0x000179f2) popup_slider_window_g4

0x9268,	// (0x000179fe) popup_slider_window_g5_ParamLimits

0x9268,	// (0x000179fe) popup_slider_window_g5

0x928a,	// (0x00017a20) popup_slider_window_g6_ParamLimits

0x928a,	// (0x00017a20) popup_slider_window_g6

0x92ca,	// (0x00017a60) popup_slider_window_t2_ParamLimits

0x92ca,	// (0x00017a60) popup_slider_window_t2

0x0001,

0xfd05,	// (0x0001e49b) popup_slider_window_t_ParamLimits

0xfd05,	// (0x0001e49b) popup_slider_window_t

0x92e2,	// (0x00017a78) slider_pane_ParamLimits

0x92e2,	// (0x00017a78) slider_pane

0xaf05,	// (0x0001969b) slider_pane_g1_ParamLimits

0xaf05,	// (0x0001969b) slider_pane_g1

0xaf19,	// (0x000196af) slider_pane_g2_ParamLimits

0xaf19,	// (0x000196af) slider_pane_g2

0xaf2f,	// (0x000196c5) slider_pane_g3_ParamLimits

0xaf2f,	// (0x000196c5) slider_pane_g3

0x0003,

0xfe17,	// (0x0001e5ad) slider_pane_g_ParamLimits

0xfe17,	// (0x0001e5ad) slider_pane_g

0x4926,	// (0x000130bc) popup_tb_float_extension_window_ParamLimits

0x4926,	// (0x000130bc) popup_tb_float_extension_window

0xaf5b,	// (0x000196f1) aid_size_cell_tb_float_ext

0x23c3,	// (0x00010b59) bg_popup_sub_window_cp28

0xaf67,	// (0x000196fd) grid_tb_float_ext_pane

0xaf71,	// (0x00019707) cell_tb_float_ext_pane_ParamLimits

0xaf71,	// (0x00019707) cell_tb_float_ext_pane

0xaf8b,	// (0x00019721) cell_tb_float_ext_pane_g1

0xaf94,	// (0x0001972a) grid_highlight_pane_cp12

0xe36a,	// (0x0001cb00) cell_last_hwr_side_pane_ParamLimits

0xe36a,	// (0x0001cb00) cell_last_hwr_side_pane

0x78af,	// (0x00016045) cell_last_hwr_side_pane_g1

0xaf9d,	// (0x00019733) cell_last_hwr_side_pane_g2

0x0001,

0xfe20,	// (0x0001e5b6) cell_last_hwr_side_pane_g

0xe9ee,	// (0x0001d184) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe9ee,	// (0x0001d184) vkb2_area_bottom_space_btn_pane

0x7b56,	// (0x000162ec) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xadd6,	// (0x0001956c) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xefa5,	// (0x0001d73b) cell_vkb2_top_candi_pane_t1_ParamLimits

0xefdf,	// (0x0001d775) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xefdf,	// (0x0001d775) vkb2_area_bottom_space_btn_pane_g1

0xf019,	// (0x0001d7af) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xf019,	// (0x0001d7af) vkb2_area_bottom_space_btn_pane_g2

0xf04f,	// (0x0001d7e5) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xf04f,	// (0x0001d7e5) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe25,	// (0x0001e5bb) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe25,	// (0x0001e5bb) vkb2_area_bottom_space_btn_pane_g

0xe2de,	// (0x0001ca74) cel_fep_hwr_func_pane_ParamLimits

0xe2de,	// (0x0001ca74) cel_fep_hwr_func_pane

0xe31a,	// (0x0001cab0) cell_hwr_side_button_pane_ParamLimits

0xe31a,	// (0x0001cab0) cell_hwr_side_button_pane

0x9524,	// (0x00017cba) aid_area_touch_clock_ParamLimits

0x275a,	// (0x00010ef0) bg_uniindi_top_pane_ParamLimits

0x9536,	// (0x00017ccc) uniindi_top_pane_g1_ParamLimits

0x954c,	// (0x00017ce2) uniindi_top_pane_g2_ParamLimits

0x9558,	// (0x00017cee) uniindi_top_pane_g3_ParamLimits

0x9569,	// (0x00017cff) uniindi_top_pane_g4_ParamLimits

0xfd3d,	// (0x0001e4d3) uniindi_top_pane_g_ParamLimits

0x9576,	// (0x00017d0c) uniindi_top_pane_t1_ParamLimits

0x275a,	// (0x00010ef0) bg_vkb2_func_pane_cp01_ParamLimits

0x275a,	// (0x00010ef0) bg_vkb2_func_pane_cp01

0xafa6,	// (0x0001973c) cel_fep_hwr_func_pane_g1_ParamLimits

0xafa6,	// (0x0001973c) cel_fep_hwr_func_pane_g1

0x275a,	// (0x00010ef0) bg_vkb2_func_pane_cp02_ParamLimits

0x275a,	// (0x00010ef0) bg_vkb2_func_pane_cp02

0xafa6,	// (0x0001973c) cell_hwr_side_button_pane_g1_ParamLimits

0xafa6,	// (0x0001973c) cell_hwr_side_button_pane_g1

0x4d6f,	// (0x00013505) status_pane_g4_ParamLimits

0x4d6f,	// (0x00013505) status_pane_g4

0x4d87,	// (0x0001351d) status_pane_t1

0x75b1,	// (0x00015d47) form2_midp_gauge_slider_cont_pane

0x75b9,	// (0x00015d4f) form2_midp_gauge_slider_pane_t1_ParamLimits

0x75cb,	// (0x00015d61) form2_midp_gauge_slider_pane_t2_ParamLimits

0x75dd,	// (0x00015d73) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb10,	// (0x0001e2a6) form2_midp_gauge_slider_pane_t_ParamLimits

0x75ef,	// (0x00015d85) form2_midp_slider_pane_ParamLimits

0xe665,	// (0x0001cdfb) aid_size_cell_func_vkb2_ParamLimits

0xe665,	// (0x0001cdfb) aid_size_cell_func_vkb2

0xaf47,	// (0x000196dd) slider_pane_g4_ParamLimits

0xaf47,	// (0x000196dd) slider_pane_g4

0xf099,	// (0x0001d82f) form2_midp_gauge_slider_pane_t2_cp01

0xf0a7,	// (0x0001d83d) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xf0a7,	// (0x0001d83d) form2_midp_gauge_slider_pane_t3_cp01

0xf0c4,	// (0x0001d85a) form2_midp_slider_pane_cp01

0x23c3,	// (0x00010b59) navi_smil_pane

0xafd6,	// (0x0001976c) navi_smil_pane_g1

0xafde,	// (0x00019774) navi_smil_pane_t1

0xafb4,	// (0x0001974a) form2_midp_slider_pane_g1

0xafbd,	// (0x00019753) form2_midp_slider_pane_g2

0xafc5,	// (0x0001975b) form2_midp_slider_pane_g3

0xafb4,	// (0x0001974a) form2_midp_slider_pane_g4

0xf0cd,	// (0x0001d863) form2_midp_slider_pane_g5

0x0004,

0xfe2e,	// (0x0001e5c4) form2_midp_slider_pane_g

0xf089,	// (0x0001d81f) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xf089,	// (0x0001d81f) vkb2_area_bottom_space_btn_pane_g4

0x4ba5,	// (0x0001333b) lc0_navi_pane_ParamLimits

0x4ba5,	// (0x0001333b) lc0_navi_pane

0x4c1b,	// (0x000133b1) lc0_stat_indi_pane_ParamLimits

0x4c1b,	// (0x000133b1) lc0_stat_indi_pane

0x4c32,	// (0x000133c8) ls0_title_pane_ParamLimits

0x4c32,	// (0x000133c8) ls0_title_pane

0x3290,	// (0x00011a26) bg_popup_sub_pane_cp14_ParamLimits

0x950b,	// (0x00017ca1) list_uniindi_pane_ParamLimits

0x9517,	// (0x00017cad) uniindi_top_pane_ParamLimits

0x95b2,	// (0x00017d48) list_single_uniindi_pane_g1_ParamLimits

0x95c5,	// (0x00017d5b) list_single_uniindi_pane_t1_ParamLimits

0xf0d6,	// (0x0001d86c) lc0_stat_clock_pane_ParamLimits

0xf0d6,	// (0x0001d86c) lc0_stat_clock_pane

0xf0e3,	// (0x0001d879) lc0_stat_indi_pane_g1_ParamLimits

0xf0e3,	// (0x0001d879) lc0_stat_indi_pane_g1

0xf0f0,	// (0x0001d886) lc0_stat_indi_pane_g2_ParamLimits

0xf0f0,	// (0x0001d886) lc0_stat_indi_pane_g2

0x0001,

0xfe39,	// (0x0001e5cf) lc0_stat_indi_pane_g_ParamLimits

0xfe39,	// (0x0001e5cf) lc0_stat_indi_pane_g

0xf0fd,	// (0x0001d893) lc0_uni_indicator_pane_ParamLimits

0xf0fd,	// (0x0001d893) lc0_uni_indicator_pane

0xf10a,	// (0x0001d8a0) ls0_title_pane_g1_ParamLimits

0xf10a,	// (0x0001d8a0) ls0_title_pane_g1

0xf11e,	// (0x0001d8b4) ls0_title_pane_t1_ParamLimits

0xf11e,	// (0x0001d8b4) ls0_title_pane_t1

0xf154,	// (0x0001d8ea) lc0_uni_indicator_pane_g1_ParamLimits

0xf154,	// (0x0001d8ea) lc0_uni_indicator_pane_g1

0xafec,	// (0x00019782) lc0_stat_clock_pane_t1

0x23c3,	// (0x00010b59) main_ai5_pane

0xaffa,	// (0x00019790) ai5_sk_pane_ParamLimits

0xaffa,	// (0x00019790) ai5_sk_pane

0xf16a,	// (0x0001d900) cell_ai5_widget_pane_ParamLimits

0xf16a,	// (0x0001d900) cell_ai5_widget_pane

0xb007,	// (0x0001979d) aid_size_cell_widget_grid

0xb01b,	// (0x000197b1) bg_ai5_widget_pane_ParamLimits

0xb01b,	// (0x000197b1) bg_ai5_widget_pane

0xf214,	// (0x0001d9aa) cell_ai5_widget_pane_g2

0xf224,	// (0x0001d9ba) cell_ai5_widget_pane_g3

0xf238,	// (0x0001d9ce) cell_ai5_widget_pane_g4

0xf244,	// (0x0001d9da) cell_ai5_widget_pane_g5

0xf250,	// (0x0001d9e6) cell_ai5_widget_pane_g6

0xf25c,	// (0x0001d9f2) cell_ai5_widget_pane_g7

0xf2a4,	// (0x0001da3a) cell_ai5_widget_pane_t1_ParamLimits

0xf2a4,	// (0x0001da3a) cell_ai5_widget_pane_t1

0xf2c1,	// (0x0001da57) cell_ai5_widget_pane_t2_ParamLimits

0xf2c1,	// (0x0001da57) cell_ai5_widget_pane_t2

0xf2d9,	// (0x0001da6f) cell_ai5_widget_pane_t3_ParamLimits

0xf2d9,	// (0x0001da6f) cell_ai5_widget_pane_t3

0xf2f1,	// (0x0001da87) cell_ai5_widget_pane_t4_ParamLimits

0xf2f1,	// (0x0001da87) cell_ai5_widget_pane_t4

0xf30b,	// (0x0001daa1) cell_ai5_widget_pane_t5_ParamLimits

0xf30b,	// (0x0001daa1) cell_ai5_widget_pane_t5

0xb027,	// (0x000197bd) cell_ai5_widget_pane_t6_ParamLimits

0xb027,	// (0x000197bd) cell_ai5_widget_pane_t6

0xb039,	// (0x000197cf) cell_ai5_widget_pane_t7_ParamLimits

0xb039,	// (0x000197cf) cell_ai5_widget_pane_t7

0xf32a,	// (0x0001dac0) cell_ai5_widget_pane_t8_ParamLimits

0xf32a,	// (0x0001dac0) cell_ai5_widget_pane_t8

0x0009,

0xfe53,	// (0x0001e5e9) cell_ai5_widget_pane_t_ParamLimits

0xfe53,	// (0x0001e5e9) cell_ai5_widget_pane_t

0xf372,	// (0x0001db08) grid_ai5_widget_pane

0x3290,	// (0x00011a26) highlight_cell_ai5_widget_pane_ParamLimits

0x3290,	// (0x00011a26) highlight_cell_ai5_widget_pane

0xf388,	// (0x0001db1e) ai5_sk_left_pane

0xf392,	// (0x0001db28) ai5_sk_middle_pane

0xf39c,	// (0x0001db32) ai5_sk_right_pane

0xb052,	// (0x000197e8) bg_ai5_widget_pane_g1_ParamLimits

0xb052,	// (0x000197e8) bg_ai5_widget_pane_g1

0xb05e,	// (0x000197f4) bg_ai5_widget_pane_g2_ParamLimits

0xb05e,	// (0x000197f4) bg_ai5_widget_pane_g2

0xb06a,	// (0x00019800) bg_ai5_widget_pane_g3_ParamLimits

0xb06a,	// (0x00019800) bg_ai5_widget_pane_g3

0xb076,	// (0x0001980c) bg_ai5_widget_pane_g4_ParamLimits

0xb076,	// (0x0001980c) bg_ai5_widget_pane_g4

0xb082,	// (0x00019818) bg_ai5_widget_pane_g5_ParamLimits

0xb082,	// (0x00019818) bg_ai5_widget_pane_g5

0xb08e,	// (0x00019824) bg_ai5_widget_pane_g6_ParamLimits

0xb08e,	// (0x00019824) bg_ai5_widget_pane_g6

0xb09a,	// (0x00019830) bg_ai5_widget_pane_g7_ParamLimits

0xb09a,	// (0x00019830) bg_ai5_widget_pane_g7

0xb0a6,	// (0x0001983c) bg_ai5_widget_pane_g8_ParamLimits

0xb0a6,	// (0x0001983c) bg_ai5_widget_pane_g8

0xb0b2,	// (0x00019848) bg_ai5_widget_pane_g9_ParamLimits

0xb0b2,	// (0x00019848) bg_ai5_widget_pane_g9

0x0008,

0xfe68,	// (0x0001e5fe) bg_ai5_widget_pane_g_ParamLimits

0xfe68,	// (0x0001e5fe) bg_ai5_widget_pane_g

0xb0e5,	// (0x0001987b) cell_shortcut_ai5_widget_pane_ParamLimits

0xb0e5,	// (0x0001987b) cell_shortcut_ai5_widget_pane

0x259a,	// (0x00010d30) bg_cell_shortcut_ai5_widget_pane

0xb0f6,	// (0x0001988c) cell_grid_ai5_widget_pane_g1

0xb0ff,	// (0x00019895) highlight_cell_shortcut_ai5_widget_pane

0x4f16,	// (0x000136ac) ai5_sk_left_pane_g1

0xb107,	// (0x0001989d) ai5_sk_left_pane_g2

0xb10f,	// (0x000198a5) ai5_sk_left_pane_g3

0xb117,	// (0x000198ad) ai5_sk_left_pane_g4

0x0003,

0xfe7b,	// (0x0001e611) ai5_sk_left_pane_g

0xb11f,	// (0x000198b5) ai5_sk_left_pane_t1

0x4f1e,	// (0x000136b4) ai5_sk_right_pane_g1

0xb12d,	// (0x000198c3) ai5_sk_right_pane_g2

0xb135,	// (0x000198cb) ai5_sk_right_pane_g3

0xb13d,	// (0x000198d3) ai5_sk_right_pane_g4

0x0003,

0xfe84,	// (0x0001e61a) ai5_sk_right_pane_g

0xb145,	// (0x000198db) ai5_sk_right_pane_t1

0x4f1e,	// (0x000136b4) ai5_sk_middle_pane_g1

0x4f16,	// (0x000136ac) ai5_sk_middle_pane_g2

0x4f36,	// (0x000136cc) ai5_sk_middle_pane_g3

0xb135,	// (0x000198cb) ai5_sk_middle_pane_g4

0xb10f,	// (0x000198a5) ai5_sk_middle_pane_g5

0xb153,	// (0x000198e9) ai5_sk_middle_pane_g6

0xf3a6,	// (0x0001db3c) ai5_sk_middle_pane_g7

0x0006,

0xfe8d,	// (0x0001e623) ai5_sk_middle_pane_g

0x4a31,	// (0x000131c7) aid_touch_area_size_lc0_ParamLimits

0x4a31,	// (0x000131c7) aid_touch_area_size_lc0

0xe469,	// (0x0001cbff) cell_hwr_candidate_pane_t1_ParamLimits

0x4a4d,	// (0x000131e3) aid_touch_navi_pane

0x4d19,	// (0x000134af) status_dt_navi_pane_ParamLimits

0x4d19,	// (0x000134af) status_dt_navi_pane

0x4d26,	// (0x000134bc) status_dt_sta_pane_ParamLimits

0x4d26,	// (0x000134bc) status_dt_sta_pane

0xf3ae,	// (0x0001db44) dt_sta_controll_pane

0xf3bb,	// (0x0001db51) dt_sta_indi_pane

0xf3cc,	// (0x0001db62) dt_sta_title_pane

0x275a,	// (0x00010ef0) bg_dt_sta_indi_pane_ParamLimits

0x275a,	// (0x00010ef0) bg_dt_sta_indi_pane

0xf3df,	// (0x0001db75) dt_sta_battery_pane

0xf3e7,	// (0x0001db7d) dt_sta_indi_pane_g1

0xb15b,	// (0x000198f1) dt_sta_indi_pane_g2

0xb164,	// (0x000198fa) dt_sta_indi_pane_g3

0x0002,

0xfe9c,	// (0x0001e632) dt_sta_indi_pane_g

0xb16d,	// (0x00019903) dt_sta_signal_pane

0x3290,	// (0x00011a26) bg_dt_sta_title_pane_ParamLimits

0x3290,	// (0x00011a26) bg_dt_sta_title_pane

0x5e02,	// (0x00014598) dt_sta_title_pane_g1

0xf3f0,	// (0x0001db86) dt_sta_title_pane_t1_ParamLimits

0xf3f0,	// (0x0001db86) dt_sta_title_pane_t1

0x23c3,	// (0x00010b59) bg_dt_sta_control_pane

0xf405,	// (0x0001db9b) dt_sta_controll_pane_g1

0xb176,	// (0x0001990c) bg_dt_sta_title_pane_g1

0xb17f,	// (0x00019915) bg_dt_sta_title_pane_g2

0xb188,	// (0x0001991e) bg_dt_sta_title_pane_g3

0x0002,

0xfea3,	// (0x0001e639) bg_dt_sta_title_pane_g

0x78af,	// (0x00016045) bg_dt_sta_indi_pane_g1

0xb191,	// (0x00019927) dt_sta_signal_pane_g1

0xb199,	// (0x0001992f) dt_sta_signal_pane_g2

0x0001,

0xfeaa,	// (0x0001e640) dt_sta_signal_pane_g

0xb1a1,	// (0x00019937) dt_sta_battery_pane_g1

0xb1aa,	// (0x00019940) dt_sta_battery_pane_t1

0x78af,	// (0x00016045) bg_dt_sta_control_pane_g1

0x3b4c,	// (0x000122e2) fep_china_uni_eep_pane

0x3b54,	// (0x000122ea) fep_china_uni_entry_pane_ParamLimits

0x3b64,	// (0x000122fa) popup_fep_china_uni_window_g1_ParamLimits

0x3b74,	// (0x0001230a) popup_fep_china_uni_window_g2_ParamLimits

0x3b74,	// (0x0001230a) popup_fep_china_uni_window_g2

0x0001,

0xf758,	// (0x0001deee) popup_fep_china_uni_window_g_ParamLimits

0xf758,	// (0x0001deee) popup_fep_china_uni_window_g

0xb1b9,	// (0x0001994f) fep_china_uni_eep_pane_g1

0xb1c1,	// (0x00019957) fep_china_uni_eep_pane_t1

0xafcd,	// (0x00019763) aid_touch_area_size_smil_player

0x4b9d,	// (0x00013333) lc0_clock_pane

0x4d7b,	// (0x00013511) status_pane_g5_ParamLimits

0x4d7b,	// (0x00013511) status_pane_g5

0x45f3,	// (0x00012d89) popup_keymap_window

0x4d3b,	// (0x000134d1) status_icon_pane

0xf224,	// (0x0001d9ba) cell_ai5_widget_pane_g3_ParamLimits

0xf238,	// (0x0001d9ce) cell_ai5_widget_pane_g4_ParamLimits

0xf244,	// (0x0001d9da) cell_ai5_widget_pane_g5_ParamLimits

0xf268,	// (0x0001d9fe) cell_ai5_widget_pane_g8_ParamLimits

0xf268,	// (0x0001d9fe) cell_ai5_widget_pane_g8

0xf27c,	// (0x0001da12) cell_ai5_widget_pane_g9_ParamLimits

0xf27c,	// (0x0001da12) cell_ai5_widget_pane_g9

0xf290,	// (0x0001da26) cell_ai5_widget_pane_g10_ParamLimits

0xf290,	// (0x0001da26) cell_ai5_widget_pane_g10

0xb1d0,	// (0x00019966) status_icon_pane_g1

0x23c3,	// (0x00010b59) bg_popup_sub_pane_cp13

0xb1d8,	// (0x0001996e) popup_keymap_window_t1

0x43c3,	// (0x00012b59) control_pane_g6_ParamLimits

0x43c3,	// (0x00012b59) control_pane_g6

0x43b6,	// (0x00012b4c) control_pane_g7_ParamLimits

0x43b6,	// (0x00012b4c) control_pane_g7

0x43a9,	// (0x00012b3f) control_pane_g8_ParamLimits

0x43a9,	// (0x00012b3f) control_pane_g8

0xf3ae,	// (0x0001db44) dt_sta_controll_pane_ParamLimits

0xf3bb,	// (0x0001db51) dt_sta_indi_pane_ParamLimits

0xf3cc,	// (0x0001db62) dt_sta_title_pane_ParamLimits

0x2c5c,	// (0x000113f2) aid_size_touch_scroll_bar_cale

0xd5a1,	// (0x0001bd37) popup_discreet_window_ParamLimits

0xd5a1,	// (0x0001bd37) popup_discreet_window

0xd61b,	// (0x0001bdb1) popup_sk_window

0x5634,	// (0x00013dca) bg_popup_sub_pane_cp28_ParamLimits

0x5634,	// (0x00013dca) bg_popup_sub_pane_cp28

0xb1e6,	// (0x0001997c) popup_discreet_window_g1_ParamLimits

0xb1e6,	// (0x0001997c) popup_discreet_window_g1

0xb206,	// (0x0001999c) popup_discreet_window_t1_ParamLimits

0xb206,	// (0x0001999c) popup_discreet_window_t1

0xb224,	// (0x000199ba) popup_discreet_window_t2_ParamLimits

0xb224,	// (0x000199ba) popup_discreet_window_t2

0x0002,

0xfeaf,	// (0x0001e645) popup_discreet_window_t_ParamLimits

0xfeaf,	// (0x0001e645) popup_discreet_window_t

0xf40e,	// (0x0001dba4) popup_sk_window_g1

0xf418,	// (0x0001dbae) popup_sk_window_g2

0x0001,

0xfeb6,	// (0x0001e64c) popup_sk_window_g

0xb284,	// (0x00019a1a) popup_sk_window_t1

0xb276,	// (0x00019a0c) popup_sk_window_t1_copy1

0xf214,	// (0x0001d9aa) cell_ai5_widget_pane_g2_ParamLimits

0xf33c,	// (0x0001dad2) cell_ai5_widget_pane_t9_ParamLimits

0xf33c,	// (0x0001dad2) cell_ai5_widget_pane_t9

0x23c3,	// (0x00010b59) main_fep_fshwr2_pane

0xf422,	// (0x0001dbb8) aid_fshwr2_btn_pane

0xf42a,	// (0x0001dbc0) aid_fshwr2_syb_pane

0xf432,	// (0x0001dbc8) aid_fshwr2_txt_pane

0xf43a,	// (0x0001dbd0) fshwr2_func_candi_pane

0xf446,	// (0x0001dbdc) fshwr2_hwr_syb_pane

0xf452,	// (0x0001dbe8) fshwr2_icf_pane

0x23c3,	// (0x00010b59) fshwr2_icf_bg_pane

0xf45c,	// (0x0001dbf2) fshwr2_icf_pane_t1_ParamLimits

0xf45c,	// (0x0001dbf2) fshwr2_icf_pane_t1

0x78af,	// (0x00016045) fshwr2_func_candi_pane_g1

0xb2a6,	// (0x00019a3c) fshwr2_func_candi_row_pane_ParamLimits

0xb2a6,	// (0x00019a3c) fshwr2_func_candi_row_pane

0xf473,	// (0x0001dc09) cell_fshwr2_syb_pane_ParamLimits

0xf473,	// (0x0001dc09) cell_fshwr2_syb_pane

0x7b56,	// (0x000162ec) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7b56,	// (0x000162ec) fshwr2_hwr_syb_pane_g1

0x23c3,	// (0x00010b59) bg_popup_call_pane_cp01

0xb2b7,	// (0x00019a4d) fshwr2_func_candi_cell_pane_ParamLimits

0xb2b7,	// (0x00019a4d) fshwr2_func_candi_cell_pane

0xb2e8,	// (0x00019a7e) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xb2e8,	// (0x00019a7e) fshwr2_func_candi_cell_bg_pane

0xb302,	// (0x00019a98) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xb302,	// (0x00019a98) fshwr2_func_candi_cell_pane_g1

0xb322,	// (0x00019ab8) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xb322,	// (0x00019ab8) fshwr2_func_candi_cell_pane_t1

0x23c3,	// (0x00010b59) bg_button_pane_cp08

0x40d6,	// (0x0001286c) cell_fshwr2_syb_bg_pane

0xf48f,	// (0x0001dc25) cell_fshwr2_syb_bg_pane_g1

0xb335,	// (0x00019acb) cell_fshwr2_syb_bg_pane_t1

0x3290,	// (0x00011a26) main_tmo_pane

0x6145,	// (0x000148db) uni_indicator_pane_g1_ParamLimits

0x615a,	// (0x000148f0) uni_indicator_pane_g2_ParamLimits

0x6170,	// (0x00014906) uni_indicator_pane_g3_ParamLimits

0x6186,	// (0x0001491c) uni_indicator_pane_g4_ParamLimits

0x6186,	// (0x0001491c) uni_indicator_pane_g4

0x619a,	// (0x00014930) uni_indicator_pane_g5_ParamLimits

0x619a,	// (0x00014930) uni_indicator_pane_g5

0x61ae,	// (0x00014944) uni_indicator_pane_g6_ParamLimits

0x61ae,	// (0x00014944) uni_indicator_pane_g6

0xf949,	// (0x0001e0df) uni_indicator_pane_g_ParamLimits

0x90fe,	// (0x00017894) popup_tmo_note_window_ParamLimits

0x90fe,	// (0x00017894) popup_tmo_note_window

0x23c3,	// (0x00010b59) fshwr2_bg_pane

0xb313,	// (0x00019aa9) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xb313,	// (0x00019aa9) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebb,	// (0x0001e651) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebb,	// (0x0001e651) fshwr2_func_candi_cell_pane_g

0x78af,	// (0x00016045) bg_popup_window_pane_cp01

0xb344,	// (0x00019ada) bg_popup_window_pane_g1_cp01

0xb34d,	// (0x00019ae3) bg_popup_window_pane_cp22_ParamLimits

0xb34d,	// (0x00019ae3) bg_popup_window_pane_cp22

0xb35b,	// (0x00019af1) listscroll_tmo_link_pane_ParamLimits

0xb35b,	// (0x00019af1) listscroll_tmo_link_pane

0xb39b,	// (0x00019b31) popup_tmo_note_window_g1_ParamLimits

0xb39b,	// (0x00019b31) popup_tmo_note_window_g1

0xb3a8,	// (0x00019b3e) tmo_note_info_pane_ParamLimits

0xb3a8,	// (0x00019b3e) tmo_note_info_pane

0xf497,	// (0x0001dc2d) list_tmo_note_info_pane_g1_ParamLimits

0xf497,	// (0x0001dc2d) list_tmo_note_info_pane_g1

0xb3d6,	// (0x00019b6c) list_tmo_note_info_pane_g2_ParamLimits

0xb3d6,	// (0x00019b6c) list_tmo_note_info_pane_g2

0x0001,

0xfec0,	// (0x0001e656) list_tmo_note_info_pane_g_ParamLimits

0xfec0,	// (0x0001e656) list_tmo_note_info_pane_g

0xb3f2,	// (0x00019b88) list_tmo_note_info_text_pane_ParamLimits

0xb3f2,	// (0x00019b88) list_tmo_note_info_text_pane

0xb434,	// (0x00019bca) list_tmo_link_pane

0xb441,	// (0x00019bd7) scroll_pane_cp20

0xb44e,	// (0x00019be4) list_single_tmo_link_pane_ParamLimits

0xb44e,	// (0x00019be4) list_single_tmo_link_pane

0xb45e,	// (0x00019bf4) list_single_tmo_link_pane_t1

0xb46c,	// (0x00019c02) list_tmo_note_info_text_pane_t1_ParamLimits

0xb46c,	// (0x00019c02) list_tmo_note_info_text_pane_t1

0x34d3,	// (0x00011c69) aid_size_touch_scroll_bar_cp01_ParamLimits

0x34d3,	// (0x00011c69) aid_size_touch_scroll_bar_cp01

0xc95d,	// (0x0001b0f3) aid_size_touch_slider_marker

0xd603,	// (0x0001bd99) popup_settings_window_ParamLimits

0xd603,	// (0x0001bd99) popup_settings_window

0xcb25,	// (0x0001b2bb) popup_candi_list_indi_window

0x4a4d,	// (0x000131e3) aid_touch_navi_pane_ParamLimits

0xe5ba,	// (0x0001cd50) rs_clock_indi_pane

0xe5c3,	// (0x0001cd59) sctrl_sk_bottom_pane_ParamLimits

0xe5d4,	// (0x0001cd6a) sctrl_sk_top_pane_ParamLimits

0xe6bf,	// (0x0001ce55) popup_fep_tooltip_window

0xb007,	// (0x0001979d) aid_size_cell_widget_grid_ParamLimits

0xf208,	// (0x0001d99e) cell_ai5_widget_pane_g1_ParamLimits

0xf208,	// (0x0001d99e) cell_ai5_widget_pane_g1

0xf250,	// (0x0001d9e6) cell_ai5_widget_pane_g6_ParamLimits

0xf25c,	// (0x0001d9f2) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3e,	// (0x0001e5d4) cell_ai5_widget_pane_g_ParamLimits

0xfe3e,	// (0x0001e5d4) cell_ai5_widget_pane_g

0xf360,	// (0x0001daf6) cell_ai5_widget_pane_t10_ParamLimits

0xf360,	// (0x0001daf6) cell_ai5_widget_pane_t10

0xf372,	// (0x0001db08) grid_ai5_widget_pane_ParamLimits

0xb0be,	// (0x00019854) cell_contacts_ai5_widget_pane_ParamLimits

0xb0be,	// (0x00019854) cell_contacts_ai5_widget_pane

0xb239,	// (0x000199cf) popup_discreet_window_t3_ParamLimits

0xb239,	// (0x000199cf) popup_discreet_window_t3

0xb292,	// (0x00019a28) popup_fshwr2_char_preview_window_ParamLimits

0xb292,	// (0x00019a28) popup_fshwr2_char_preview_window

0xf4ae,	// (0x0001dc44) tmo_note_info_pane_t1

0xf4c3,	// (0x0001dc59) tmo_note_info_pane_t2

0xf4dc,	// (0x0001dc72) tmo_note_info_pane_t3

0xb410,	// (0x00019ba6) tmo_note_info_pane_t4

0xb422,	// (0x00019bb8) tmo_note_info_pane_t5

0x0004,

0xfec5,	// (0x0001e65b) tmo_note_info_pane_t

0xb434,	// (0x00019bca) list_tmo_link_pane_ParamLimits

0xb441,	// (0x00019bd7) scroll_pane_cp20_ParamLimits

0x23c3,	// (0x00010b59) bg_popup_fep_char_preview_window_cp01

0xb485,	// (0x00019c1b) popup_fshwr2_char_preview_window_t1

0xb493,	// (0x00019c29) popup_candi_list_indi_window_g1

0xb49c,	// (0x00019c32) bg_cell_contacts_ai5_widget_pane

0xb4a8,	// (0x00019c3e) cell_contacts_ai5_widget_pane_g1

0xb4bc,	// (0x00019c52) cell_contacts_ai5_widget_pane_g2

0xb4cb,	// (0x00019c61) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed0,	// (0x0001e666) cell_contacts_ai5_widget_pane_g

0xb4de,	// (0x00019c74) cell_contacts_ai5_widget_pane_t1

0x3290,	// (0x00011a26) highlight_cell_shortcut_ai5_widget_pane_cp01

0xb558,	// (0x00019cee) settings_container_pane

0x40d6,	// (0x0001286c) listscroll_set_pane_copy1

0x6d9c,	// (0x00015532) scroll_pane_cp121_copy1

0xb564,	// (0x00019cfa) set_content_pane_copy1

0xb56c,	// (0x00019d02) aid_height_set_list_copy1_ParamLimits

0xb56c,	// (0x00019d02) aid_height_set_list_copy1

0x63c9,	// (0x00014b5f) aid_size_parent_copy1_ParamLimits

0x63c9,	// (0x00014b5f) aid_size_parent_copy1

0xb578,	// (0x00019d0e) button_value_adjust_pane_cp6_copy1_ParamLimits

0xb578,	// (0x00019d0e) button_value_adjust_pane_cp6_copy1

0x445c,	// (0x00012bf2) list_highlight_pane_cp2_copy1_ParamLimits

0x445c,	// (0x00012bf2) list_highlight_pane_cp2_copy1

0xb58c,	// (0x00019d22) list_set_pane_copy1_ParamLimits

0xb58c,	// (0x00019d22) list_set_pane_copy1

0xb4f3,	// (0x00019c89) main_pane_set_t1_copy1_ParamLimits

0xb4f3,	// (0x00019c89) main_pane_set_t1_copy1

0xb52d,	// (0x00019cc3) main_pane_set_t2_copy1_ParamLimits

0xb52d,	// (0x00019cc3) main_pane_set_t2_copy1

0xb639,	// (0x00019dcf) main_pane_set_t3_copy1

0xb647,	// (0x00019ddd) main_pane_set_t4_copy1

0xb54c,	// (0x00019ce2) set_content_pane_g1_copy1_ParamLimits

0xb54c,	// (0x00019ce2) set_content_pane_g1_copy1

0xb655,	// (0x00019deb) setting_code_pane_copy1

0xb65f,	// (0x00019df5) setting_slider_graphic_pane_copy1

0xb65f,	// (0x00019df5) setting_slider_pane_copy1

0xb669,	// (0x00019dff) setting_text_pane_copy1

0xb673,	// (0x00019e09) setting_volume_pane_copy1

0xb67c,	// (0x00019e12) settings_code_pane_cp2_copy1

0xb684,	// (0x00019e1a) settings_code_pane_cp_copy1_ParamLimits

0xb684,	// (0x00019e1a) settings_code_pane_cp_copy1

0xb698,	// (0x00019e2e) volume_set_pane_copy1

0xb6a0,	// (0x00019e36) volume_set_pane_g10_copy1

0xb6a8,	// (0x00019e3e) volume_set_pane_g1_copy1

0xb6b0,	// (0x00019e46) volume_set_pane_g2_copy1

0xb6b8,	// (0x00019e4e) volume_set_pane_g3_copy1

0xb6c0,	// (0x00019e56) volume_set_pane_g4_copy1

0xb6c8,	// (0x00019e5e) volume_set_pane_g5_copy1

0xb6d0,	// (0x00019e66) volume_set_pane_g6_copy1

0xb6d8,	// (0x00019e6e) volume_set_pane_g7_copy1

0xb6e0,	// (0x00019e76) volume_set_pane_g8_copy1

0xb6e8,	// (0x00019e7e) volume_set_pane_g9_copy1

0x24b7,	// (0x00010c4d) bg_set_opt_pane_cp_copy1_ParamLimits

0x24b7,	// (0x00010c4d) bg_set_opt_pane_cp_copy1

0xb6f0,	// (0x00019e86) setting_slider_pane_t1_copy1_ParamLimits

0xb6f0,	// (0x00019e86) setting_slider_pane_t1_copy1

0xb70e,	// (0x00019ea4) setting_slider_pane_t2_copy1_ParamLimits

0xb70e,	// (0x00019ea4) setting_slider_pane_t2_copy1

0xb728,	// (0x00019ebe) setting_slider_pane_t3_copy1_ParamLimits

0xb728,	// (0x00019ebe) setting_slider_pane_t3_copy1

0xb740,	// (0x00019ed6) slider_set_pane_copy1_ParamLimits

0xb740,	// (0x00019ed6) slider_set_pane_copy1

0x33cc,	// (0x00011b62) set_opt_bg_pane_g1_copy2

0x33d4,	// (0x00011b6a) set_opt_bg_pane_g2_copy2

0xb756,	// (0x00019eec) set_opt_bg_pane_g3_copy2

0x33e4,	// (0x00011b7a) set_opt_bg_pane_g4_copy2

0x33ec,	// (0x00011b82) set_opt_bg_pane_g5_copy2

0x33f4,	// (0x00011b8a) set_opt_bg_pane_g6_copy2

0xb760,	// (0x00019ef6) set_opt_bg_pane_g7_copy2

0xb768,	// (0x00019efe) set_opt_bg_pane_g8_copy2

0xb772,	// (0x00019f08) set_opt_bg_pane_g9_copy2

0xf4f1,	// (0x0001dc87) aid_size_touch_slider_mark_copy1_ParamLimits

0xf4f1,	// (0x0001dc87) aid_size_touch_slider_mark_copy1

0xb77c,	// (0x00019f12) slider_set_pane_g1_copy1

0xf505,	// (0x0001dc9b) slider_set_pane_g2_copy1

0xe074,	// (0x0001c80a) slider_set_pane_g3_copy1_ParamLimits

0xe074,	// (0x0001c80a) slider_set_pane_g3_copy1

0xe088,	// (0x0001c81e) slider_set_pane_g4_copy1_ParamLimits

0xe088,	// (0x0001c81e) slider_set_pane_g4_copy1

0xe0a0,	// (0x0001c836) slider_set_pane_g5_copy1_ParamLimits

0xe0a0,	// (0x0001c836) slider_set_pane_g5_copy1

0xe074,	// (0x0001c80a) slider_set_pane_g6_copy1_ParamLimits

0xe074,	// (0x0001c80a) slider_set_pane_g6_copy1

0xf50d,	// (0x0001dca3) slider_set_pane_g7_copy1_ParamLimits

0xf50d,	// (0x0001dca3) slider_set_pane_g7_copy1

0x23d7,	// (0x00010b6d) bg_set_opt_pane_cp2_copy1

0xb785,	// (0x00019f1b) setting_slider_graphic_pane_g1_copy1

0xb78e,	// (0x00019f24) setting_slider_graphic_pane_t1_copy1

0xb79e,	// (0x00019f34) setting_slider_graphic_pane_t2_copy1

0xb7ae,	// (0x00019f44) slider_set_pane_cp_copy1

0xb7be,	// (0x00019f54) input_focus_pane_cp1_copy1

0xb7c7,	// (0x00019f5d) list_set_text_pane_copy1

0xb7cf,	// (0x00019f65) setting_text_pane_g1_copy1

0xd314,	// (0x0001baaa) set_text_pane_t1_copy1

0xb7be,	// (0x00019f54) input_focus_pane_cp2_copy1

0xb7cf,	// (0x00019f65) setting_code_pane_g1_copy1

0xb7f5,	// (0x00019f8b) setting_code_pane_t1_copy1

0xb3c2,	// (0x00019b58) list_set_graphic_pane_copy1

0x23d7,	// (0x00010b6d) bg_set_opt_pane_cp4_copy1

0x3dd8,	// (0x0001256e) list_set_graphic_pane_g1_copy1_ParamLimits

0x3dd8,	// (0x0001256e) list_set_graphic_pane_g1_copy1

0xb803,	// (0x00019f99) list_set_graphic_pane_g2_copy1

0x3df0,	// (0x00012586) list_set_graphic_pane_t1_copy1_ParamLimits

0x3df0,	// (0x00012586) list_set_graphic_pane_t1_copy1

0x78af,	// (0x00016045) rs_clock_indi_pane_g1

0xb80b,	// (0x00019fa1) rs_clock_indi_pane_t1

0xb819,	// (0x00019faf) rs_indi_pane

0xb821,	// (0x00019fb7) rs_indi_pane_g1

0xb82a,	// (0x00019fc0) rs_indi_pane_g2

0xb833,	// (0x00019fc9) rs_indi_pane_g3

0x0002,

0xfed7,	// (0x0001e66d) rs_indi_pane_g

0x40d6,	// (0x0001286c) bg_popup_preview_window_pane_cp03

0xb83c,	// (0x00019fd2) popup_fep_tooltip_window_t1

0x873c,	// (0x00016ed2) popup_note2_window_g2_ParamLimits

0x873c,	// (0x00016ed2) popup_note2_window_g2

0x0001,

0xfc7c,	// (0x0001e412) popup_note2_window_g_ParamLimits

0xfc7c,	// (0x0001e412) popup_note2_window_g

0x8d1e,	// (0x000174b4) bg_popup_sub_pane_cp11_ParamLimits

0x8d2b,	// (0x000174c1) cell_ai3_links_pane_g1_ParamLimits

0x8d42,	// (0x000174d8) cell_ai3_links_pane_t1

0xd314,	// (0x0001baaa) set_text_pane_t1_copy1_ParamLimits

0x3fe5,	// (0x0001277b) cell_graphic_popup_pane_cp2_ParamLimits

0x3fe5,	// (0x0001277b) cell_graphic_popup_pane_cp2

0xb84a,	// (0x00019fe0) cell_graphic_popup_pane_g1_cp2

0x2a6f,	// (0x00011205) cell_graphic_popup_pane_g2_cp2

0xb852,	// (0x00019fe8) cell_graphic_popup_pane_g3_cp2

0xb85a,	// (0x00019ff0) cell_graphic_popup_pane_t2_cp2

0x2a80,	// (0x00011216) grid_highlight_pane_cp3_cp2

0x37b2,	// (0x00011f48) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3290,	// (0x00011a26) main_tmo_pane_ParamLimits

0x90f2,	// (0x00017888) popup_tmo_big_image_note_window

0xf1f8,	// (0x0001d98e) cell_ai5_widget_list_pane

0xf200,	// (0x0001d996) cell_ai5_widget_lrg_icon_pane

0xf4ae,	// (0x0001dc44) tmo_note_info_pane_t1_ParamLimits

0xf4c3,	// (0x0001dc59) tmo_note_info_pane_t2_ParamLimits

0xf4dc,	// (0x0001dc72) tmo_note_info_pane_t3_ParamLimits

0xb410,	// (0x00019ba6) tmo_note_info_pane_t4_ParamLimits

0xb422,	// (0x00019bb8) tmo_note_info_pane_t5_ParamLimits

0xfec5,	// (0x0001e65b) tmo_note_info_pane_t_ParamLimits

0xb558,	// (0x00019cee) settings_container_pane_ParamLimits

0xb7b6,	// (0x00019f4c) indicator_popup_pane_cp5

0xb7b6,	// (0x00019f4c) indicator_popup_pane_cp6

0xb3c2,	// (0x00019b58) list_set_graphic_pane_copy1_ParamLimits

0x23c3,	// (0x00010b59) bg_popup_window_pane_cp23

0xb868,	// (0x00019ffe) popup_tmo_big_image_note_window_g1

0xb873,	// (0x0001a009) popup_tmo_big_image_note_window_t1

0xb883,	// (0x0001a019) popup_tmo_big_image_note_window_t2

0xb893,	// (0x0001a029) popup_tmo_big_image_note_window_t3

0x0002,

0xfede,	// (0x0001e674) popup_tmo_big_image_note_window_t

0xf523,	// (0x0001dcb9) cell_ai5_widget_lrg_icon_pane_g1

0xf52b,	// (0x0001dcc1) cell_ai5_widget_lrg_icon_pane_t1

0xf539,	// (0x0001dccf) cell_ai5_widget_list_row_pane_ParamLimits

0xf539,	// (0x0001dccf) cell_ai5_widget_list_row_pane

0xf552,	// (0x0001dce8) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf552,	// (0x0001dce8) cell_ai5_widget_list_row_pane_g1

0xf55f,	// (0x0001dcf5) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf55f,	// (0x0001dcf5) cell_ai5_widget_list_row_pane_t1

0xf577,	// (0x0001dd0d) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf577,	// (0x0001dd0d) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfee5,	// (0x0001e67b) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee5,	// (0x0001e67b) cell_ai5_widget_list_row_pane_t

0x23c3,	// (0x00010b59) main_fep_vtchi_ss_pane

0xb8a3,	// (0x0001a039) popup_fep_char_pre_window

0xb8ab,	// (0x0001a041) popup_fep_ituss_window

0xb8b6,	// (0x0001a04c) popup_fep_vkbss_window

0xb8bf,	// (0x0001a055) grid_vkbss_keypad_pane_ParamLimits

0xb8bf,	// (0x0001a055) grid_vkbss_keypad_pane

0xb8cf,	// (0x0001a065) ituss_keypad_pane

0xb8d7,	// (0x0001a06d) aid_vkbss_key_offset_ParamLimits

0xb8d7,	// (0x0001a06d) aid_vkbss_key_offset

0xb8e6,	// (0x0001a07c) cell_vkbss_key_pane_ParamLimits

0xb8e6,	// (0x0001a07c) cell_vkbss_key_pane

0xb8fc,	// (0x0001a092) bg_cell_vkbss_key_g1_ParamLimits

0xb8fc,	// (0x0001a092) bg_cell_vkbss_key_g1

0xb908,	// (0x0001a09e) cell_vkbss_key_3p_pane_ParamLimits

0xb908,	// (0x0001a09e) cell_vkbss_key_3p_pane

0xb922,	// (0x0001a0b8) cell_vkbss_key_g1_ParamLimits

0xb922,	// (0x0001a0b8) cell_vkbss_key_g1

0xb93c,	// (0x0001a0d2) cell_vkbss_key_t1_ParamLimits

0xb93c,	// (0x0001a0d2) cell_vkbss_key_t1

0xb967,	// (0x0001a0fd) cell_ituss_key_pane_ParamLimits

0xb967,	// (0x0001a0fd) cell_ituss_key_pane

0xb976,	// (0x0001a10c) bg_cell_ituss_key_g1_ParamLimits

0xb976,	// (0x0001a10c) bg_cell_ituss_key_g1

0xb982,	// (0x0001a118) cell_ituss_key_pane_g1_ParamLimits

0xb982,	// (0x0001a118) cell_ituss_key_pane_g1

0xb98e,	// (0x0001a124) cell_ituss_key_pane_g2_ParamLimits

0xb98e,	// (0x0001a124) cell_ituss_key_pane_g2

0x0001,

0xfeea,	// (0x0001e680) cell_ituss_key_pane_g_ParamLimits

0xfeea,	// (0x0001e680) cell_ituss_key_pane_g

0xb9a1,	// (0x0001a137) cell_ituss_key_t1_ParamLimits

0xb9a1,	// (0x0001a137) cell_ituss_key_t1

0xb9bf,	// (0x0001a155) cell_ituss_key_t2_ParamLimits

0xb9bf,	// (0x0001a155) cell_ituss_key_t2

0xb9de,	// (0x0001a174) cell_ituss_key_t3_ParamLimits

0xb9de,	// (0x0001a174) cell_ituss_key_t3

0xb9fd,	// (0x0001a193) cell_ituss_key_t4_ParamLimits

0xb9fd,	// (0x0001a193) cell_ituss_key_t4

0x0003,

0xfeef,	// (0x0001e685) cell_ituss_key_t_ParamLimits

0xfeef,	// (0x0001e685) cell_ituss_key_t

0xba1c,	// (0x0001a1b2) cell_vkbss_key_3p_pane_g1

0xba24,	// (0x0001a1ba) cell_vkbss_key_3p_pane_g2

0xba2c,	// (0x0001a1c2) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef8,	// (0x0001e68e) cell_vkbss_key_3p_pane_g

0x23c3,	// (0x00010b59) bg_popup_fep_char_preview_window_cp02

0xba34,	// (0x0001a1ca) popup_fep_char_pre_window_t1

0xf1ee,	// (0x0001d984) main_ai5_sk_pane

0xb49c,	// (0x00019c32) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xb4a8,	// (0x00019c3e) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xb4bc,	// (0x00019c52) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xb4cb,	// (0x00019c61) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed0,	// (0x0001e666) cell_contacts_ai5_widget_pane_g_ParamLimits

0xb4de,	// (0x00019c74) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3290,	// (0x00011a26) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf589,	// (0x0001dd1f) main_ai5_sk_pane_g1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Small

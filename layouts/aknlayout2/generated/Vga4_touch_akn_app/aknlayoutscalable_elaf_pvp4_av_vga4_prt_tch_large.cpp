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

#include "aknlayoutscalable_elaf_pvp4_av_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00041d56 };

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
0x5c7d,	// (0x000479d3) Screen

0x5c89,	// (0x000479df) application_window_ParamLimits

0x5c89,	// (0x000479df) application_window

0xd1f5,	// (0x0004ef4b) screen_g1

0x5ce5,	// (0x00047a3b) area_bottom_pane_ParamLimits

0x5ce5,	// (0x00047a3b) area_bottom_pane

0x5da5,	// (0x00047afb) area_top_pane_ParamLimits

0x5da5,	// (0x00047afb) area_top_pane

0x5e39,	// (0x00047b8f) main_pane_ParamLimits

0x5e39,	// (0x00047b8f) main_pane

0xd1ff,	// (0x0004ef55) misc_graphics

0x8c1f,	// (0x0004a975) battery_pane_ParamLimits

0x8c1f,	// (0x0004a975) battery_pane

0x9965,	// (0x0004b6bb) bg_status_flat_pane_g8

0x996d,	// (0x0004b6c3) bg_status_flat_pane_g9

0x8ce7,	// (0x0004aa3d) context_pane_ParamLimits

0x8ce7,	// (0x0004aa3d) context_pane

0x8e0b,	// (0x0004ab61) navi_pane_ParamLimits

0x8e0b,	// (0x0004ab61) navi_pane

0x8e9b,	// (0x0004abf1) signal_pane_ParamLimits

0x8e9b,	// (0x0004abf1) signal_pane

0x0008,

0xf884,	// (0x000515da) bg_status_flat_pane_g

0x8f08,	// (0x0004ac5e) status_pane_g1_ParamLimits

0x8f08,	// (0x0004ac5e) status_pane_g1

0x8f1c,	// (0x0004ac72) status_pane_g2_ParamLimits

0x8f1c,	// (0x0004ac72) status_pane_g2

0x8f28,	// (0x0004ac7e) status_pane_g3_ParamLimits

0x8f28,	// (0x0004ac7e) status_pane_g3

0x0004,

0xf7ab,	// (0x00051501) status_pane_g_ParamLimits

0xf7ab,	// (0x00051501) status_pane_g

0x8f5c,	// (0x0004acb2) title_pane_ParamLimits

0x8f5c,	// (0x0004acb2) title_pane

0x8f99,	// (0x0004acef) uni_indicator_pane_ParamLimits

0x8f99,	// (0x0004acef) uni_indicator_pane

0x8b39,	// (0x0004a88f) bg_list_pane_ParamLimits

0x8b39,	// (0x0004a88f) bg_list_pane

0x8b59,	// (0x0004a8af) find_pane

0x8b61,	// (0x0004a8b7) listscroll_app_pane_ParamLimits

0x8b61,	// (0x0004a8b7) listscroll_app_pane

0x8b6d,	// (0x0004a8c3) listscroll_form_pane

0x6db3,	// (0x00048b09) listscroll_gen_pane_ParamLimits

0x6db3,	// (0x00048b09) listscroll_gen_pane

0x8b6d,	// (0x0004a8c3) listscroll_set_pane

0x6539,	// (0x0004828f) main_idle_act_pane

0x883b,	// (0x0004a591) main_idle_trad_pane

0x883b,	// (0x0004a591) main_list_empty_pane

0x8b87,	// (0x0004a8dd) main_midp_pane

0x8b93,	// (0x0004a8e9) main_pane_g1_ParamLimits

0x8b93,	// (0x0004a8e9) main_pane_g1

0x6dc7,	// (0x00048b1d) popup_ai_message_window_ParamLimits

0x6dc7,	// (0x00048b1d) popup_ai_message_window

0x6e7b,	// (0x00048bd1) popup_fep_china_uni_window_ParamLimits

0x6e7b,	// (0x00048bd1) popup_fep_china_uni_window

0x6edb,	// (0x00048c31) popup_fep_japan_candidate_window_ParamLimits

0x6edb,	// (0x00048c31) popup_fep_japan_candidate_window

0x6f05,	// (0x00048c5b) popup_fep_japan_predictive_window_ParamLimits

0x6f05,	// (0x00048c5b) popup_fep_japan_predictive_window

0x6f3b,	// (0x00048c91) popup_find_window

0x6f48,	// (0x00048c9e) popup_grid_graphic_window_ParamLimits

0x6f48,	// (0x00048c9e) popup_grid_graphic_window

0x6f76,	// (0x00048ccc) popup_large_graphic_colour_window

0x6f9c,	// (0x00048cf2) popup_menu_window_ParamLimits

0x6f9c,	// (0x00048cf2) popup_menu_window

0x7166,	// (0x00048ebc) popup_note_image_window

0x7150,	// (0x00048ea6) popup_note_wait_window_ParamLimits

0x7150,	// (0x00048ea6) popup_note_wait_window

0x7150,	// (0x00048ea6) popup_note_window_ParamLimits

0x7150,	// (0x00048ea6) popup_note_window

0x71cc,	// (0x00048f22) popup_query_code_window_ParamLimits

0x71cc,	// (0x00048f22) popup_query_code_window

0x71e2,	// (0x00048f38) popup_query_data_code_window_ParamLimits

0x71e2,	// (0x00048f38) popup_query_data_code_window

0x7205,	// (0x00048f5b) popup_query_data_window_ParamLimits

0x7205,	// (0x00048f5b) popup_query_data_window

0x7227,	// (0x00048f7d) popup_query_sat_info_window_ParamLimits

0x7227,	// (0x00048f7d) popup_query_sat_info_window

0x7266,	// (0x00048fbc) popup_snote_single_graphic_window_ParamLimits

0x7266,	// (0x00048fbc) popup_snote_single_graphic_window

0x7266,	// (0x00048fbc) popup_snote_single_text_window_ParamLimits

0x7266,	// (0x00048fbc) popup_snote_single_text_window

0x727d,	// (0x00048fd3) popup_sub_window_general

0x73c3,	// (0x00049119) popup_window_general_ParamLimits

0x73c3,	// (0x00049119) popup_window_general

0x8ba1,	// (0x0004a8f7) power_save_pane

0x6c57,	// (0x000489ad) control_pane_g1_ParamLimits

0x6c57,	// (0x000489ad) control_pane_g1

0x6c80,	// (0x000489d6) control_pane_g2_ParamLimits

0x6c80,	// (0x000489d6) control_pane_g2

0x8afc,	// (0x0004a852) control_pane_g3_ParamLimits

0x8afc,	// (0x0004a852) control_pane_g3

0x0007,

0xf793,	// (0x000514e9) control_pane_g_ParamLimits

0xf793,	// (0x000514e9) control_pane_g

0x6cc8,	// (0x00048a1e) control_pane_t1_ParamLimits

0x6cc8,	// (0x00048a1e) control_pane_t1

0x6d14,	// (0x00048a6a) control_pane_t2_ParamLimits

0x6d14,	// (0x00048a6a) control_pane_t2

0x0002,

0xf7a4,	// (0x000514fa) control_pane_t_ParamLimits

0xf7a4,	// (0x000514fa) control_pane_t

0x8a1d,	// (0x0004a773) navi_navi_volume_pane_cp1

0x8a26,	// (0x0004a77c) status_small_icon_pane

0x8a2e,	// (0x0004a784) status_small_pane_g1_ParamLimits

0x8a2e,	// (0x0004a784) status_small_pane_g1

0x8a62,	// (0x0004a7b8) status_small_pane_g2_ParamLimits

0x8a62,	// (0x0004a7b8) status_small_pane_g2

0x8a6e,	// (0x0004a7c4) status_small_pane_g3_ParamLimits

0x8a6e,	// (0x0004a7c4) status_small_pane_g3

0x8a7a,	// (0x0004a7d0) status_small_pane_g4_ParamLimits

0x8a7a,	// (0x0004a7d0) status_small_pane_g4

0x8a86,	// (0x0004a7dc) status_small_pane_g5_ParamLimits

0x8a86,	// (0x0004a7dc) status_small_pane_g5

0x8a95,	// (0x0004a7eb) status_small_pane_g6_ParamLimits

0x8a95,	// (0x0004a7eb) status_small_pane_g6

0x0007,

0xf782,	// (0x000514d8) status_small_pane_g_ParamLimits

0xf782,	// (0x000514d8) status_small_pane_g

0x8ac5,	// (0x0004a81b) status_small_pane_t1

0x8ae8,	// (0x0004a83e) status_small_wait_pane_ParamLimits

0x8ae8,	// (0x0004a83e) status_small_wait_pane

0x68b2,	// (0x00048608) aid_levels_signal_ParamLimits

0x68b2,	// (0x00048608) aid_levels_signal

0x68c4,	// (0x0004861a) signal_pane_g1_ParamLimits

0x68c4,	// (0x0004861a) signal_pane_g1

0x68d9,	// (0x0004862f) signal_pane_g2_ParamLimits

0x68d9,	// (0x0004862f) signal_pane_g2

0x0003,

0xf713,	// (0x00051469) signal_pane_g_ParamLimits

0xf713,	// (0x00051469) signal_pane_g

0x404a,	// (0x00045da0) context_pane_g1

0x6090,	// (0x00047de6) title_pane_g1

0x60ba,	// (0x00047e10) title_pane_t1

0xd215,	// (0x0004ef6b) title_pane_t2

0xd23b,	// (0x0004ef91) title_pane_t3

0x0002,

0xf55d,	// (0x000512b3) title_pane_t

0x8fb1,	// (0x0004ad07) aid_levels_battery_ParamLimits

0x8fb1,	// (0x0004ad07) aid_levels_battery

0x8fc5,	// (0x0004ad1b) battery_pane_g1_ParamLimits

0x8fc5,	// (0x0004ad1b) battery_pane_g1

0x8fdb,	// (0x0004ad31) battery_pane_g2_ParamLimits

0x8fdb,	// (0x0004ad31) battery_pane_g2

0x0001,

0xf7b6,	// (0x0005150c) battery_pane_g_ParamLimits

0xf7b6,	// (0x0005150c) battery_pane_g

0xa2b5,	// (0x0004c00b) uni_indicator_pane_g1

0xa2ca,	// (0x0004c020) uni_indicator_pane_g2

0xa2e0,	// (0x0004c036) uni_indicator_pane_g3

0x0005,

0xf92c,	// (0x00051682) uni_indicator_pane_g

0x86a9,	// (0x0004a3ff) navi_icon_pane_ParamLimits

0x86a9,	// (0x0004a3ff) navi_icon_pane

0x441f,	// (0x00046175) navi_midp_pane

0x86c5,	// (0x0004a41b) navi_navi_pane

0x86cf,	// (0x0004a425) navi_text_pane_ParamLimits

0x86cf,	// (0x0004a425) navi_text_pane

0xd1f5,	// (0x0004ef4b) status_small_wait_pane_g1

0x070d,	// (0x00042463) status_small_wait_pane_g2

0x0001,

0xf927,	// (0x0005167d) status_small_wait_pane_g

0x9fc8,	// (0x0004bd1e) navi_navi_icon_text_pane

0x9fd0,	// (0x0004bd26) navi_navi_pane_g1_ParamLimits

0x9fd0,	// (0x0004bd26) navi_navi_pane_g1

0x9fe2,	// (0x0004bd38) navi_navi_pane_g2_ParamLimits

0x9fe2,	// (0x0004bd38) navi_navi_pane_g2

0x0001,

0xf8f5,	// (0x0005164b) navi_navi_pane_g_ParamLimits

0xf8f5,	// (0x0005164b) navi_navi_pane_g

0x9ff4,	// (0x0004bd4a) navi_navi_tabs_pane

0x9ffd,	// (0x0004bd53) navi_navi_text_pane

0x9fc8,	// (0x0004bd1e) navi_navi_volume_pane

0x9fa1,	// (0x0004bcf7) navi_text_pane_t1

0x9f92,	// (0x0004bce8) navi_icon_pane_g1

0x9ee5,	// (0x0004bc3b) navi_navi_text_pane_t1

0x7678,	// (0x000493ce) navi_navi_volume_pane_g1

0x7680,	// (0x000493d6) volume_small_pane

0x9e4b,	// (0x0004bba1) navi_navi_icon_text_pane_g1

0x9e53,	// (0x0004bba9) navi_navi_icon_text_pane_t1

0x86c5,	// (0x0004a41b) navi_tabs_2_long_pane

0x86c5,	// (0x0004a41b) navi_tabs_2_pane

0x86c5,	// (0x0004a41b) navi_tabs_3_long_pane

0x86c5,	// (0x0004a41b) navi_tabs_3_pane

0x86c5,	// (0x0004a41b) navi_tabs_4_pane

0x7658,	// (0x000493ae) tabs_2_active_pane_ParamLimits

0x7658,	// (0x000493ae) tabs_2_active_pane

0x7668,	// (0x000493be) tabs_2_passive_pane_ParamLimits

0x7668,	// (0x000493be) tabs_2_passive_pane

0x7626,	// (0x0004937c) tabs_3_active_pane_ParamLimits

0x7626,	// (0x0004937c) tabs_3_active_pane

0x7636,	// (0x0004938c) tabs_3_passive_pane_ParamLimits

0x7636,	// (0x0004938c) tabs_3_passive_pane

0x7647,	// (0x0004939d) tabs_3_passive_pane_cp_ParamLimits

0x7647,	// (0x0004939d) tabs_3_passive_pane_cp

0x75da,	// (0x00049330) tabs_4_active_pane_ParamLimits

0x75da,	// (0x00049330) tabs_4_active_pane

0x75ed,	// (0x00049343) tabs_4_passive_pane_ParamLimits

0x75ed,	// (0x00049343) tabs_4_passive_pane

0x75fe,	// (0x00049354) tabs_4_passive_pane_cp_ParamLimits

0x75fe,	// (0x00049354) tabs_4_passive_pane_cp

0x760f,	// (0x00049365) tabs_4_passive_pane_cp2_ParamLimits

0x760f,	// (0x00049365) tabs_4_passive_pane_cp2

0x75b6,	// (0x0004930c) tabs_2_long_active_pane_ParamLimits

0x75b6,	// (0x0004930c) tabs_2_long_active_pane

0x75c8,	// (0x0004931e) tabs_2_long_passive_pane_ParamLimits

0x75c8,	// (0x0004931e) tabs_2_long_passive_pane

0x7577,	// (0x000492cd) tabs_3_long_active_pane_ParamLimits

0x7577,	// (0x000492cd) tabs_3_long_active_pane

0x758a,	// (0x000492e0) tabs_3_long_passive_pane_ParamLimits

0x758a,	// (0x000492e0) tabs_3_long_passive_pane

0x75a3,	// (0x000492f9) tabs_3_long_passive_pane_cp_ParamLimits

0x75a3,	// (0x000492f9) tabs_3_long_passive_pane_cp

0x751d,	// (0x00049273) volume_small_pane_g1

0x7526,	// (0x0004927c) volume_small_pane_g2

0x752f,	// (0x00049285) volume_small_pane_g3

0x7538,	// (0x0004928e) volume_small_pane_g4

0x7541,	// (0x00049297) volume_small_pane_g5

0x754a,	// (0x000492a0) volume_small_pane_g6

0x7553,	// (0x000492a9) volume_small_pane_g7

0x755c,	// (0x000492b2) volume_small_pane_g8

0x7565,	// (0x000492bb) volume_small_pane_g9

0x756e,	// (0x000492c4) volume_small_pane_g10

0x0009,

0xf8c1,	// (0x00051617) volume_small_pane_g

0xd24d,	// (0x0004efa3) bg_active_tab_pane_cp2_ParamLimits

0xd24d,	// (0x0004efa3) bg_active_tab_pane_cp2

0x6122,	// (0x00047e78) tabs_3_active_pane_g1

0x612a,	// (0x00047e80) tabs_3_active_pane_t1

0xd24d,	// (0x0004efa3) bg_passive_tab_pane_cp2_ParamLimits

0xd24d,	// (0x0004efa3) bg_passive_tab_pane_cp2

0x6122,	// (0x00047e78) tabs_3_passive_pane_g1

0x612a,	// (0x00047e80) tabs_3_passive_pane_t1

0xd24d,	// (0x0004efa3) bg_active_tab_pane_cp3_ParamLimits

0xd24d,	// (0x0004efa3) bg_active_tab_pane_cp3

0x613c,	// (0x00047e92) tabs_4_active_pane_g1

0x6144,	// (0x00047e9a) tabs_4_active_pane_t1

0xd24d,	// (0x0004efa3) bg_passive_tab_pane_cp3_ParamLimits

0xd24d,	// (0x0004efa3) bg_passive_tab_pane_cp3

0x613c,	// (0x00047e92) tabs_4_1_passive_pane_g1

0x6144,	// (0x00047e9a) tabs_4_1_passive_pane_t1

0x8b87,	// (0x0004a8dd) list_highlight_pane_cp2

0xa544,	// (0x0004c29a) list_set_pane_ParamLimits

0xa544,	// (0x0004c29a) list_set_pane

0xa60c,	// (0x0004c362) main_pane_set_t1_ParamLimits

0xa60c,	// (0x0004c362) main_pane_set_t1

0xa62c,	// (0x0004c382) main_pane_set_t2_ParamLimits

0xa62c,	// (0x0004c382) main_pane_set_t2

0xa640,	// (0x0004c396) main_pane_set_t3_ParamLimits

0xa640,	// (0x0004c396) main_pane_set_t3

0xa654,	// (0x0004c3aa) main_pane_set_t4_ParamLimits

0xa654,	// (0x0004c3aa) main_pane_set_t4

0x0003,

0xf991,	// (0x000516e7) main_pane_set_t_ParamLimits

0xf991,	// (0x000516e7) main_pane_set_t

0xa668,	// (0x0004c3be) setting_code_pane

0xa672,	// (0x0004c3c8) setting_slider_graphic_pane

0xa672,	// (0x0004c3c8) setting_slider_pane

0xa672,	// (0x0004c3c8) setting_text_pane

0xa672,	// (0x0004c3c8) setting_volume_pane

0x6156,	// (0x00047eac) volume_set_pane

0xd24d,	// (0x0004efa3) bg_set_opt_pane_cp

0x6160,	// (0x00047eb6) setting_slider_pane_t1

0x6179,	// (0x00047ecf) setting_slider_pane_t2

0x6193,	// (0x00047ee9) setting_slider_pane_t3

0x0002,

0xf564,	// (0x000512ba) setting_slider_pane_t

0x61ab,	// (0x00047f01) slider_set_pane

0xd1ff,	// (0x0004ef55) bg_set_opt_pane_cp2

0xd25b,	// (0x0004efb1) setting_slider_graphic_pane_g1

0x61c1,	// (0x00047f17) setting_slider_graphic_pane_t1

0x61d1,	// (0x00047f27) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x000512c1) setting_slider_graphic_pane_t

0x61e1,	// (0x00047f37) slider_set_pane_cp

0xd1ff,	// (0x0004ef55) input_focus_pane_cp1

0xa505,	// (0x0004c25b) list_set_text_pane

0xd1f5,	// (0x0004ef4b) setting_text_pane_g1

0xd1ff,	// (0x0004ef55) input_focus_pane_cp2

0xd1f5,	// (0x0004ef4b) setting_code_pane_g1

0xd264,	// (0x0004efba) setting_code_pane_t1

0x4ede,	// (0x00046c34) set_text_pane_t1_ParamLimits

0x4ede,	// (0x00046c34) set_text_pane_t1

0x0aae,	// (0x00042804) set_opt_bg_pane_g1

0x0ab6,	// (0x0004280c) set_opt_bg_pane_g2

0xa4dd,	// (0x0004c233) set_opt_bg_pane_g3

0x0ac6,	// (0x0004281c) set_opt_bg_pane_g4

0x0ace,	// (0x00042824) set_opt_bg_pane_g5

0x0ad6,	// (0x0004282c) set_opt_bg_pane_g6

0xa4e7,	// (0x0004c23d) set_opt_bg_pane_g7

0xa4f1,	// (0x0004c247) set_opt_bg_pane_g8

0xa4fb,	// (0x0004c251) set_opt_bg_pane_g9

0x0008,

0xf97e,	// (0x000516d4) set_opt_bg_pane_g

0xa4d0,	// (0x0004c226) slider_set_pane_g1

0x7701,	// (0x00049457) slider_set_pane_g2

0x0006,

0xf96f,	// (0x000516c5) slider_set_pane_g

0x7689,	// (0x000493df) volume_set_pane_g1

0x7693,	// (0x000493e9) volume_set_pane_g2

0x769d,	// (0x000493f3) volume_set_pane_g3

0x76a7,	// (0x000493fd) volume_set_pane_g4

0x76b1,	// (0x00049407) volume_set_pane_g5

0x76bb,	// (0x00049411) volume_set_pane_g6

0x76c5,	// (0x0004941b) volume_set_pane_g7

0x76cf,	// (0x00049425) volume_set_pane_g8

0x76d9,	// (0x0004942f) volume_set_pane_g9

0x76e3,	// (0x00049439) volume_set_pane_g10

0x0009,

0xf947,	// (0x0005169d) volume_set_pane_g

0x61e9,	// (0x00047f3f) indicator_pane_ParamLimits

0x61e9,	// (0x00047f3f) indicator_pane

0x61f5,	// (0x00047f4b) main_idle_pane_g2_ParamLimits

0x61f5,	// (0x00047f4b) main_idle_pane_g2

0x621d,	// (0x00047f73) main_pane_idle_g1_ParamLimits

0x621d,	// (0x00047f73) main_pane_idle_g1

0xd272,	// (0x0004efc8) popup_clock_digital_analogue_window_ParamLimits

0xd272,	// (0x0004efc8) popup_clock_digital_analogue_window

0x622b,	// (0x00047f81) soft_indicator_pane_ParamLimits

0x622b,	// (0x00047f81) soft_indicator_pane

0x6239,	// (0x00047f8f) wallpaper_pane_ParamLimits

0x6239,	// (0x00047f8f) wallpaper_pane

0xd1f5,	// (0x0004ef4b) wallpaper_pane_g1

0x6245,	// (0x00047f9b) indicator_pane_g1_ParamLimits

0x6245,	// (0x00047f9b) indicator_pane_g1

0xa922,	// (0x0004c678) navi_navi_icon_text_pane_srt_g1

0xd2a0,	// (0x0004eff6) soft_indicator_pane_t1

0xd2ba,	// (0x0004f010) aid_ps_area_pane

0x6251,	// (0x00047fa7) aid_ps_clock_pane

0xd2cb,	// (0x0004f021) aid_ps_indicator_pane

0xd2d7,	// (0x0004f02d) indicator_ps_pane_ParamLimits

0xd2d7,	// (0x0004f02d) indicator_ps_pane

0xd2e6,	// (0x0004f03c) power_save_pane_g1_ParamLimits

0xd2e6,	// (0x0004f03c) power_save_pane_g1

0xd2f2,	// (0x0004f048) power_save_pane_g2_ParamLimits

0xd2f2,	// (0x0004f048) power_save_pane_g2

0x5c99,	// (0x000479ef) aid_navinavi_width_pane

0xd2ba,	// (0x0004f010) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x000512c6) power_save_pane_g_ParamLimits

0xf570,	// (0x000512c6) power_save_pane_g

0xd300,	// (0x0004f056) power_save_pane_t1_ParamLimits

0xd300,	// (0x0004f056) power_save_pane_t1

0x6251,	// (0x00047fa7) aid_ps_clock_pane_ParamLimits

0xd2cb,	// (0x0004f021) aid_ps_indicator_pane_ParamLimits

0xd312,	// (0x0004f068) power_save_pane_t4_ParamLimits

0xd312,	// (0x0004f068) power_save_pane_t4

0x0001,

0xf575,	// (0x000512cb) power_save_pane_t_ParamLimits

0xf575,	// (0x000512cb) power_save_pane_t

0xd33c,	// (0x0004f092) power_save_t3_ParamLimits

0xd33c,	// (0x0004f092) power_save_t3

0xd327,	// (0x0004f07d) power_save_t2_ParamLimits

0xd327,	// (0x0004f07d) power_save_t2

0xd351,	// (0x0004f0a7) indicator_ps_pane_g1

0x625f,	// (0x00047fb5) ai_gene_pane_ParamLimits

0x625f,	// (0x00047fb5) ai_gene_pane

0x626b,	// (0x00047fc1) ai_links_pane_ParamLimits

0x626b,	// (0x00047fc1) ai_links_pane

0x6277,	// (0x00047fcd) indicator_pane_cp1_ParamLimits

0x6277,	// (0x00047fcd) indicator_pane_cp1

0x6283,	// (0x00047fd9) main_pane_idle_g1_cp_ParamLimits

0x6283,	// (0x00047fd9) main_pane_idle_g1_cp

0xd35a,	// (0x0004f0b0) popup_ai_links_title_window

0x628f,	// (0x00047fe5) soft_indicator_pane_cp1_ParamLimits

0x628f,	// (0x00047fe5) soft_indicator_pane_cp1

0xa2a3,	// (0x0004bff9) ai_links_pane_g1

0xa2ac,	// (0x0004c002) grid_ai_links_pane

0xa288,	// (0x0004bfde) ai_gene_pane_1

0xa291,	// (0x0004bfe7) ai_gene_pane_2

0xa29a,	// (0x0004bff0) list_highlight_pane_cp4

0xa268,	// (0x0004bfbe) cell_ai_link_pane_ParamLimits

0xa268,	// (0x0004bfbe) cell_ai_link_pane

0xa260,	// (0x0004bfb6) cell_ai_link_pane_g1

0x070d,	// (0x00042463) cell_ai_link_pane_g2

0x0001,

0xf922,	// (0x00051678) cell_ai_link_pane_g

0xd1ff,	// (0x0004ef55) grid_highlight_cp2

0xd1ff,	// (0x0004ef55) bg_popup_sub_pane_cp1

0xd371,	// (0x0004f0c7) popup_ai_links_title_window_t1

0xa1ac,	// (0x0004bf02) ai_gene_pane_1_g1_ParamLimits

0xa1ac,	// (0x0004bf02) ai_gene_pane_1_g1

0xa1b8,	// (0x0004bf0e) ai_gene_pane_1_g2_ParamLimits

0xa1b8,	// (0x0004bf0e) ai_gene_pane_1_g2

0x0001,

0xf918,	// (0x0005166e) ai_gene_pane_1_g_ParamLimits

0xf918,	// (0x0005166e) ai_gene_pane_1_g

0xa1c5,	// (0x0004bf1b) ai_gene_pane_1_t1_ParamLimits

0xa1c5,	// (0x0004bf1b) ai_gene_pane_1_t1

0xa1f9,	// (0x0004bf4f) grid_ai_soft_ind_pane

0xa197,	// (0x0004beed) ai_gene_pane_2_t1_ParamLimits

0xa197,	// (0x0004beed) ai_gene_pane_2_t1

0x629b,	// (0x00047ff1) main_pane_empty_t1_ParamLimits

0x629b,	// (0x00047ff1) main_pane_empty_t1

0x62b3,	// (0x00048009) main_pane_empty_t2_ParamLimits

0x62b3,	// (0x00048009) main_pane_empty_t2

0x62c8,	// (0x0004801e) main_pane_empty_t3_ParamLimits

0x62c8,	// (0x0004801e) main_pane_empty_t3

0x62da,	// (0x00048030) main_pane_empty_t4_ParamLimits

0x62da,	// (0x00048030) main_pane_empty_t4

0x62ec,	// (0x00048042) main_pane_empty_t5_ParamLimits

0x62ec,	// (0x00048042) main_pane_empty_t5

0x0004,

0xf57a,	// (0x000512d0) main_pane_empty_t_ParamLimits

0xf57a,	// (0x000512d0) main_pane_empty_t

0x0aff,	// (0x00042855) bg_popup_window_pane_ParamLimits

0x0aff,	// (0x00042855) bg_popup_window_pane

0x9ef3,	// (0x0004bc49) find_popup_pane_cp2_ParamLimits

0x9ef3,	// (0x0004bc49) find_popup_pane_cp2

0x9eff,	// (0x0004bc55) heading_pane_ParamLimits

0x9eff,	// (0x0004bc55) heading_pane

0xd1ff,	// (0x0004ef55) bg_popup_sub_pane

0x9e6d,	// (0x0004bbc3) bg_popup_window_pane_g1_ParamLimits

0x9e6d,	// (0x0004bbc3) bg_popup_window_pane_g1

0x9e79,	// (0x0004bbcf) bg_popup_window_pane_g2_ParamLimits

0x9e79,	// (0x0004bbcf) bg_popup_window_pane_g2

0x9e85,	// (0x0004bbdb) bg_popup_window_pane_g3_ParamLimits

0x9e85,	// (0x0004bbdb) bg_popup_window_pane_g3

0x9e91,	// (0x0004bbe7) bg_popup_window_pane_g4_ParamLimits

0x9e91,	// (0x0004bbe7) bg_popup_window_pane_g4

0x9e9d,	// (0x0004bbf3) bg_popup_window_pane_g5_ParamLimits

0x9e9d,	// (0x0004bbf3) bg_popup_window_pane_g5

0x9ea9,	// (0x0004bbff) bg_popup_window_pane_g6_ParamLimits

0x9ea9,	// (0x0004bbff) bg_popup_window_pane_g6

0x9eb5,	// (0x0004bc0b) bg_popup_window_pane_g7_ParamLimits

0x9eb5,	// (0x0004bc0b) bg_popup_window_pane_g7

0x9ec1,	// (0x0004bc17) bg_popup_window_pane_g8_ParamLimits

0x9ec1,	// (0x0004bc17) bg_popup_window_pane_g8

0x9ecd,	// (0x0004bc23) bg_popup_window_pane_g9_ParamLimits

0x9ecd,	// (0x0004bc23) bg_popup_window_pane_g9

0x9ed9,	// (0x0004bc2f) bg_popup_window_pane_g10_ParamLimits

0x9ed9,	// (0x0004bc2f) bg_popup_window_pane_g10

0x0009,

0xf8e0,	// (0x00051636) bg_popup_window_pane_g_ParamLimits

0xf8e0,	// (0x00051636) bg_popup_window_pane_g

0x9e02,	// (0x0004bb58) bg_popup_heading_pane_ParamLimits

0x9e02,	// (0x0004bb58) bg_popup_heading_pane

0x7787,	// (0x000494dd) tabs_4_passive_pane_cp_srt_ParamLimits

0x7787,	// (0x000494dd) tabs_4_passive_pane_cp_srt

0x7799,	// (0x000494ef) tabs_4_passive_pane_srt_ParamLimits

0x9e16,	// (0x0004bb6c) heading_pane_g2

0x7799,	// (0x000494ef) tabs_4_passive_pane_srt

0x8b87,	// (0x0004a8dd) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8b87,	// (0x0004a8dd) bg_passive_tab_pane_cp3_srt

0x9e1e,	// (0x0004bb74) heading_pane_t1_ParamLimits

0x9e1e,	// (0x0004bb74) heading_pane_t1

0x9e35,	// (0x0004bb8b) heading_pane_t2_ParamLimits

0x9e35,	// (0x0004bb8b) heading_pane_t2

0x0001,

0xf8db,	// (0x00051631) heading_pane_t_ParamLimits

0xf8db,	// (0x00051631) heading_pane_t

0x992d,	// (0x0004b683) bg_popup_heading_pane_g1

0x99dc,	// (0x0004b732) bg_popup_heading_pane_g2

0x99e6,	// (0x0004b73c) bg_popup_heading_pane_g3

0x99f0,	// (0x0004b746) bg_popup_heading_pane_g4

0x99fa,	// (0x0004b750) bg_popup_heading_pane_g5

0x9a04,	// (0x0004b75a) bg_popup_heading_pane_g6

0x9a0c,	// (0x0004b762) bg_popup_heading_pane_g7

0x9a14,	// (0x0004b76a) bg_popup_heading_pane_g8

0x9a1e,	// (0x0004b774) bg_popup_heading_pane_g9

0x0008,

0xf897,	// (0x000515ed) bg_popup_heading_pane_g

0x90b3,	// (0x0004ae09) bg_popup_sub_pane_g1

0x90bb,	// (0x0004ae11) bg_popup_sub_pane_g2

0x90c3,	// (0x0004ae19) bg_popup_sub_pane_g3

0x90cb,	// (0x0004ae21) bg_popup_sub_pane_g4

0x90d3,	// (0x0004ae29) bg_popup_sub_pane_g5

0x90db,	// (0x0004ae31) bg_popup_sub_pane_g6

0x90e3,	// (0x0004ae39) bg_popup_sub_pane_g7

0x90eb,	// (0x0004ae41) bg_popup_sub_pane_g8

0x90f3,	// (0x0004ae49) bg_popup_sub_pane_g9

0x0008,

0xf871,	// (0x000515c7) bg_popup_sub_pane_g

0xd380,	// (0x0004f0d6) bg_popup_window_pane_cp5_ParamLimits

0xd380,	// (0x0004f0d6) bg_popup_window_pane_cp5

0xd39c,	// (0x0004f0f2) popup_note_window_g1_ParamLimits

0xd39c,	// (0x0004f0f2) popup_note_window_g1

0xd3a8,	// (0x0004f0fe) popup_note_window_t1_ParamLimits

0xd3a8,	// (0x0004f0fe) popup_note_window_t1

0xd3be,	// (0x0004f114) popup_note_window_t2_ParamLimits

0xd3be,	// (0x0004f114) popup_note_window_t2

0xd3d4,	// (0x0004f12a) popup_note_window_t3_ParamLimits

0xd3d4,	// (0x0004f12a) popup_note_window_t3

0xd3ea,	// (0x0004f140) popup_note_window_t4_ParamLimits

0xd3ea,	// (0x0004f140) popup_note_window_t4

0xd412,	// (0x0004f168) popup_note_window_t5_ParamLimits

0xd412,	// (0x0004f168) popup_note_window_t5

0x0004,

0xf585,	// (0x000512db) popup_note_window_t_ParamLimits

0xf585,	// (0x000512db) popup_note_window_t

0xd436,	// (0x0004f18c) bg_popup_window_pane_cp6_ParamLimits

0xd436,	// (0x0004f18c) bg_popup_window_pane_cp6

0x98a9,	// (0x0004b5ff) popup_note_image_window_g1_ParamLimits

0x98a9,	// (0x0004b5ff) popup_note_image_window_g1

0x98b5,	// (0x0004b60b) popup_note_image_window_g2_ParamLimits

0x98b5,	// (0x0004b60b) popup_note_image_window_g2

0x0001,

0xf865,	// (0x000515bb) popup_note_image_window_g_ParamLimits

0xf865,	// (0x000515bb) popup_note_image_window_g

0x98ce,	// (0x0004b624) popup_note_image_window_t1_ParamLimits

0x98ce,	// (0x0004b624) popup_note_image_window_t1

0x98e7,	// (0x0004b63d) popup_note_image_window_t2_ParamLimits

0x98e7,	// (0x0004b63d) popup_note_image_window_t2

0x9900,	// (0x0004b656) popup_note_image_window_t3_ParamLimits

0x9900,	// (0x0004b656) popup_note_image_window_t3

0x0002,

0xf86a,	// (0x000515c0) popup_note_image_window_t_ParamLimits

0xf86a,	// (0x000515c0) popup_note_image_window_t

0x9769,	// (0x0004b4bf) bg_popup_window_pane_cp7_ParamLimits

0x9769,	// (0x0004b4bf) bg_popup_window_pane_cp7

0x9799,	// (0x0004b4ef) popup_note_wait_window_g1_ParamLimits

0x9799,	// (0x0004b4ef) popup_note_wait_window_g1

0x97a5,	// (0x0004b4fb) popup_note_wait_window_g2_ParamLimits

0x97a5,	// (0x0004b4fb) popup_note_wait_window_g2

0x0002,

0xf853,	// (0x000515a9) popup_note_wait_window_g_ParamLimits

0xf853,	// (0x000515a9) popup_note_wait_window_g

0x97bd,	// (0x0004b513) popup_note_wait_window_t1_ParamLimits

0x97bd,	// (0x0004b513) popup_note_wait_window_t1

0x97e4,	// (0x0004b53a) popup_note_wait_window_t2_ParamLimits

0x97e4,	// (0x0004b53a) popup_note_wait_window_t2

0x9802,	// (0x0004b558) popup_note_wait_window_t3_ParamLimits

0x9802,	// (0x0004b558) popup_note_wait_window_t3

0x9815,	// (0x0004b56b) popup_note_wait_window_t4_ParamLimits

0x9815,	// (0x0004b56b) popup_note_wait_window_t4

0x0004,

0xf85a,	// (0x000515b0) popup_note_wait_window_t_ParamLimits

0xf85a,	// (0x000515b0) popup_note_wait_window_t

0x983a,	// (0x0004b590) wait_bar_pane_ParamLimits

0x983a,	// (0x0004b590) wait_bar_pane

0xd1ff,	// (0x0004ef55) wait_anim_pane

0xd1ff,	// (0x0004ef55) wait_border_pane

0xd1f5,	// (0x0004ef4b) wait_anim_pane_g1

0xd1f5,	// (0x0004ef4b) wait_anim_pane_g2

0x0001,

0xf70e,	// (0x00051464) wait_anim_pane_g

0x970d,	// (0x0004b463) wait_border_pane_g1

0x9718,	// (0x0004b46e) wait_border_pane_g2

0x9721,	// (0x0004b477) wait_border_pane_g3

0x0002,

0xf84c,	// (0x000515a2) wait_border_pane_g

0x9577,	// (0x0004b2cd) bg_popup_window_pane_cp16_ParamLimits

0x9577,	// (0x0004b2cd) bg_popup_window_pane_cp16

0x9677,	// (0x0004b3cd) indicator_popup_pane_cp4_ParamLimits

0x9677,	// (0x0004b3cd) indicator_popup_pane_cp4

0x968b,	// (0x0004b3e1) popup_query_data_window_t1_ParamLimits

0x968b,	// (0x0004b3e1) popup_query_data_window_t1

0x969d,	// (0x0004b3f3) popup_query_data_window_t2_ParamLimits

0x969d,	// (0x0004b3f3) popup_query_data_window_t2

0x96b6,	// (0x0004b40c) popup_query_data_window_t3_ParamLimits

0x96b6,	// (0x0004b40c) popup_query_data_window_t3

0x0002,

0xf845,	// (0x0005159b) popup_query_data_window_t_ParamLimits

0xf845,	// (0x0005159b) popup_query_data_window_t

0x96d0,	// (0x0004b426) query_popup_data_pane_ParamLimits

0x96d0,	// (0x0004b426) query_popup_data_pane

0x96e4,	// (0x0004b43a) query_popup_data_pane_cp1_ParamLimits

0x96e4,	// (0x0004b43a) query_popup_data_pane_cp1

0x9577,	// (0x0004b2cd) bg_popup_window_pane_cp10_ParamLimits

0x9577,	// (0x0004b2cd) bg_popup_window_pane_cp10

0x95a9,	// (0x0004b2ff) indicator_popup_pane_ParamLimits

0x95a9,	// (0x0004b2ff) indicator_popup_pane

0x95cb,	// (0x0004b321) popup_query_code_window_t1_ParamLimits

0x95cb,	// (0x0004b321) popup_query_code_window_t1

0x95e5,	// (0x0004b33b) popup_query_code_window_t2_ParamLimits

0x95e5,	// (0x0004b33b) popup_query_code_window_t2

0x962e,	// (0x0004b384) popup_query_code_window_t3_ParamLimits

0x962e,	// (0x0004b384) popup_query_code_window_t3

0x0002,

0xf83e,	// (0x00051594) popup_query_code_window_t_ParamLimits

0xf83e,	// (0x00051594) popup_query_code_window_t

0x965d,	// (0x0004b3b3) query_popup_pane_ParamLimits

0x965d,	// (0x0004b3b3) query_popup_pane

0xd436,	// (0x0004f18c) bg_popup_window_pane_cp15_ParamLimits

0xd436,	// (0x0004f18c) bg_popup_window_pane_cp15

0xd456,	// (0x0004f1ac) indicator_popup_pane_cp1_ParamLimits

0xd456,	// (0x0004f1ac) indicator_popup_pane_cp1

0xd469,	// (0x0004f1bf) indicator_popup_pane_cp2_ParamLimits

0xd469,	// (0x0004f1bf) indicator_popup_pane_cp2

0xd484,	// (0x0004f1da) popup_query_data_code_window_g1_ParamLimits

0xd484,	// (0x0004f1da) popup_query_data_code_window_g1

0xd497,	// (0x0004f1ed) popup_query_data_code_window_t1_ParamLimits

0xd497,	// (0x0004f1ed) popup_query_data_code_window_t1

0xd4a9,	// (0x0004f1ff) popup_query_data_code_window_t2_ParamLimits

0xd4a9,	// (0x0004f1ff) popup_query_data_code_window_t2

0xd4bb,	// (0x0004f211) popup_query_data_code_window_t3_ParamLimits

0xd4bb,	// (0x0004f211) popup_query_data_code_window_t3

0x06a8,	// (0x000423fe) popup_query_data_code_window_t4_ParamLimits

0x06a8,	// (0x000423fe) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x000512e6) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x000512e6) popup_query_data_code_window_t

0x8665,	// (0x0004a3bb) list_single_midp_graphic_pane_g3

0x06c2,	// (0x00042418) query_popup_data_pane_cp2_ParamLimits

0x06d5,	// (0x0004242b) query_popup_pane_cp2_ParamLimits

0x06d5,	// (0x0004242b) query_popup_pane_cp2

0xd1ff,	// (0x0004ef55) bg_popup_window_pane_cp11

0x956f,	// (0x0004b2c5) heading_pane_cp5

0x076b,	// (0x000424c1) listscroll_popup_info_pane

0xd1ff,	// (0x0004ef55) input_focus_pane_cp3

0x06f0,	// (0x00042446) query_popup_pane_t1

0x06fe,	// (0x00042454) list_popup_info_pane_ParamLimits

0x06fe,	// (0x00042454) list_popup_info_pane

0x070d,	// (0x00042463) listscroll_popup_info_pane_g1

0x0715,	// (0x0004246b) scroll_pane_cp7

0x071f,	// (0x00042475) popup_info_list_pane_t1_ParamLimits

0x071f,	// (0x00042475) popup_info_list_pane_t1

0x0739,	// (0x0004248f) popup_info_list_pane_t2_ParamLimits

0x0739,	// (0x0004248f) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x000512ef) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x000512ef) popup_info_list_pane_t

0xd1ff,	// (0x0004ef55) bg_popup_window_pane_cp12

0xa93c,	// (0x0004c692) find_popup_pane

0xd24d,	// (0x0004efa3) bg_popup_window_pane_cp3

0x0753,	// (0x000424a9) heading_pane_cp3

0x075f,	// (0x000424b5) listscroll_popup_graphic_pane

0xd1ff,	// (0x0004ef55) bg_popup_window_pane_cp4

0x634e,	// (0x000480a4) heading_pane_cp4

0x076b,	// (0x000424c1) listscroll_popup_colour_pane

0x6358,	// (0x000480ae) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x6358,	// (0x000480ae) cell_large_graphic_colour_none_popup_pane

0x636c,	// (0x000480c2) grid_large_graphic_colour_popup_pane_ParamLimits

0x636c,	// (0x000480c2) grid_large_graphic_colour_popup_pane

0x6398,	// (0x000480ee) listscroll_popup_colour_pane_g1_ParamLimits

0x6398,	// (0x000480ee) listscroll_popup_colour_pane_g1

0x63af,	// (0x00048105) listscroll_popup_colour_pane_g2_ParamLimits

0x63af,	// (0x00048105) listscroll_popup_colour_pane_g2

0x63c6,	// (0x0004811c) listscroll_popup_colour_pane_g3_ParamLimits

0x63c6,	// (0x0004811c) listscroll_popup_colour_pane_g3

0x63d6,	// (0x0004812c) listscroll_popup_colour_pane_g4_ParamLimits

0x63d6,	// (0x0004812c) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x000512f4) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x000512f4) listscroll_popup_colour_pane_g

0x0773,	// (0x000424c9) scroll_pane_cp6_ParamLimits

0x0773,	// (0x000424c9) scroll_pane_cp6

0x63ea,	// (0x00048140) cell_large_graphic_colour_popup_pane_ParamLimits

0x63ea,	// (0x00048140) cell_large_graphic_colour_popup_pane

0x0785,	// (0x000424db) cell_large_graphic_colour_none_popup_pane_t1

0xd1ff,	// (0x0004ef55) grid_highlight_pane_cp5

0x0794,	// (0x000424ea) cell_large_graphic_colour_popup_pane_g1

0x079c,	// (0x000424f2) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x000512fd) cell_large_graphic_colour_popup_pane_g

0x07a4,	// (0x000424fa) cell_large_graphic_colour_popup_pane_g2_copy1

0x07ad,	// (0x00042503) grid_highlight_pane_cp4

0x07b5,	// (0x0004250b) bg_popup_window_pane_cp8_ParamLimits

0x07b5,	// (0x0004250b) bg_popup_window_pane_cp8

0x07d0,	// (0x00042526) popup_snote_single_text_window_g1_ParamLimits

0x07d0,	// (0x00042526) popup_snote_single_text_window_g1

0x07e2,	// (0x00042538) popup_snote_single_text_window_t1_ParamLimits

0x07e2,	// (0x00042538) popup_snote_single_text_window_t1

0x07f5,	// (0x0004254b) popup_snote_single_text_window_t2_ParamLimits

0x07f5,	// (0x0004254b) popup_snote_single_text_window_t2

0x0808,	// (0x0004255e) popup_snote_single_text_window_t3_ParamLimits

0x0808,	// (0x0004255e) popup_snote_single_text_window_t3

0x0841,	// (0x00042597) popup_snote_single_text_window_t4_ParamLimits

0x0841,	// (0x00042597) popup_snote_single_text_window_t4

0x0875,	// (0x000425cb) popup_snote_single_text_window_t5_ParamLimits

0x0875,	// (0x000425cb) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x00051302) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x00051302) popup_snote_single_text_window_t

0x08a4,	// (0x000425fa) bg_popup_window_pane_cp9_ParamLimits

0x08a4,	// (0x000425fa) bg_popup_window_pane_cp9

0x07d0,	// (0x00042526) popup_snote_single_graphic_window_g1_ParamLimits

0x07d0,	// (0x00042526) popup_snote_single_graphic_window_g1

0x08b2,	// (0x00042608) popup_snote_single_graphic_window_g2_ParamLimits

0x08b2,	// (0x00042608) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0005130d) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0005130d) popup_snote_single_graphic_window_g

0x08be,	// (0x00042614) popup_snote_single_graphic_window_t1_ParamLimits

0x08be,	// (0x00042614) popup_snote_single_graphic_window_t1

0x08d1,	// (0x00042627) popup_snote_single_graphic_window_t2_ParamLimits

0x08d1,	// (0x00042627) popup_snote_single_graphic_window_t2

0x08e4,	// (0x0004263a) popup_snote_single_graphic_window_t3_ParamLimits

0x08e4,	// (0x0004263a) popup_snote_single_graphic_window_t3

0x091d,	// (0x00042673) popup_snote_single_graphic_window_t4_ParamLimits

0x091d,	// (0x00042673) popup_snote_single_graphic_window_t4

0x0951,	// (0x000426a7) popup_snote_single_graphic_window_t5_ParamLimits

0x0951,	// (0x000426a7) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x00051312) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x00051312) popup_snote_single_graphic_window_t

0xa87a,	// (0x0004c5d0) grid_graphic_popup_pane_ParamLimits

0xa87a,	// (0x0004c5d0) grid_graphic_popup_pane

0xa8a8,	// (0x0004c5fe) listscroll_popup_graphic_pane_g1_ParamLimits

0xa8a8,	// (0x0004c5fe) listscroll_popup_graphic_pane_g1

0xa8bc,	// (0x0004c612) listscroll_popup_graphic_pane_g2_ParamLimits

0xa8bc,	// (0x0004c612) listscroll_popup_graphic_pane_g2

0x0001,

0xf9bb,	// (0x00051711) listscroll_popup_graphic_pane_g_ParamLimits

0xf9bb,	// (0x00051711) listscroll_popup_graphic_pane_g

0xa8d0,	// (0x0004c626) scroll_pane_cp5

0xa822,	// (0x0004c578) cell_graphic_popup_pane_ParamLimits

0xa822,	// (0x0004c578) cell_graphic_popup_pane

0xa803,	// (0x0004c559) cell_graphic_popup_pane_g1

0xa80b,	// (0x0004c561) cell_graphic_popup_pane_g2

0x07a4,	// (0x000424fa) cell_graphic_popup_pane_g3

0x0002,

0xf9b4,	// (0x0005170a) cell_graphic_popup_pane_g

0xa814,	// (0x0004c56a) cell_graphic_popup_pane_t2

0x07ad,	// (0x00042503) grid_highlight_pane_cp3

0x0992,	// (0x000426e8) list_gen_pane_ParamLimits

0x0992,	// (0x000426e8) list_gen_pane

0x09ba,	// (0x00042710) scroll_pane

0xa765,	// (0x0004c4bb) bg_list_pane_g1_ParamLimits

0xa765,	// (0x0004c4bb) bg_list_pane_g1

0xa780,	// (0x0004c4d6) bg_list_pane_g2_ParamLimits

0xa780,	// (0x0004c4d6) bg_list_pane_g2

0xa793,	// (0x0004c4e9) bg_list_pane_g3_ParamLimits

0xa793,	// (0x0004c4e9) bg_list_pane_g3

0xa7a5,	// (0x0004c4fb) bg_list_pane_g4_ParamLimits

0xa7a5,	// (0x0004c4fb) bg_list_pane_g4

0xa7b7,	// (0x0004c50d) bg_list_pane_g5_ParamLimits

0xa7b7,	// (0x0004c50d) bg_list_pane_g5

0x0004,

0xf9a9,	// (0x000516ff) bg_list_pane_g_ParamLimits

0xf9a9,	// (0x000516ff) bg_list_pane_g

0x7723,	// (0x00049479) list_double2_graphic_large_graphic_pane_ParamLimits

0x7723,	// (0x00049479) list_double2_graphic_large_graphic_pane

0x7723,	// (0x00049479) list_double2_graphic_pane_ParamLimits

0x7723,	// (0x00049479) list_double2_graphic_pane

0x7723,	// (0x00049479) list_double2_large_graphic_pane_ParamLimits

0x7723,	// (0x00049479) list_double2_large_graphic_pane

0x7723,	// (0x00049479) list_double2_pane_ParamLimits

0x7723,	// (0x00049479) list_double2_pane

0x7723,	// (0x00049479) list_double_graphic_heading_pane_ParamLimits

0x7723,	// (0x00049479) list_double_graphic_heading_pane

0x7723,	// (0x00049479) list_double_graphic_pane_ParamLimits

0x7723,	// (0x00049479) list_double_graphic_pane

0x7723,	// (0x00049479) list_double_heading_pane_ParamLimits

0x7723,	// (0x00049479) list_double_heading_pane

0x7723,	// (0x00049479) list_double_large_graphic_pane_ParamLimits

0x7723,	// (0x00049479) list_double_large_graphic_pane

0x7723,	// (0x00049479) list_double_number_pane_ParamLimits

0x7723,	// (0x00049479) list_double_number_pane

0x7723,	// (0x00049479) list_double_pane_ParamLimits

0x7723,	// (0x00049479) list_double_pane

0x7723,	// (0x00049479) list_double_time_pane_ParamLimits

0x7723,	// (0x00049479) list_double_time_pane

0x7723,	// (0x00049479) list_setting_number_pane_ParamLimits

0x7723,	// (0x00049479) list_setting_number_pane

0x7723,	// (0x00049479) list_setting_pane_ParamLimits

0x7723,	// (0x00049479) list_setting_pane

0xa721,	// (0x0004c477) list_single_2graphic_pane_ParamLimits

0xa721,	// (0x0004c477) list_single_2graphic_pane

0xa721,	// (0x0004c477) list_single_graphic_heading_pane_ParamLimits

0xa721,	// (0x0004c477) list_single_graphic_heading_pane

0xa721,	// (0x0004c477) list_single_graphic_pane_ParamLimits

0xa721,	// (0x0004c477) list_single_graphic_pane

0xa721,	// (0x0004c477) list_single_heading_pane_ParamLimits

0xa721,	// (0x0004c477) list_single_heading_pane

0x774b,	// (0x000494a1) list_single_large_graphic_pane_ParamLimits

0x774b,	// (0x000494a1) list_single_large_graphic_pane

0xa721,	// (0x0004c477) list_single_number_heading_pane_ParamLimits

0xa721,	// (0x0004c477) list_single_number_heading_pane

0xa721,	// (0x0004c477) list_single_number_pane_ParamLimits

0xa721,	// (0x0004c477) list_single_number_pane

0xa721,	// (0x0004c477) list_single_pane_ParamLimits

0xa721,	// (0x0004c477) list_single_pane

0xd1ff,	// (0x0004ef55) list_highlight_pane_cp1

0x1c3a,	// (0x00043990) list_single_pane_g1_ParamLimits

0x1c3a,	// (0x00043990) list_single_pane_g1

0x6419,	// (0x0004816f) list_single_pane_g2_ParamLimits

0x6419,	// (0x0004816f) list_single_pane_g2

0x0001,

0xf5d8,	// (0x0005132e) list_single_pane_g_ParamLimits

0xf5d8,	// (0x0005132e) list_single_pane_g

0x57c7,	// (0x0004751d) list_single_pane_t1_ParamLimits

0x57c7,	// (0x0004751d) list_single_pane_t1

0x1c3a,	// (0x00043990) list_single_number_pane_g1_ParamLimits

0x1c3a,	// (0x00043990) list_single_number_pane_g1

0x6419,	// (0x0004816f) list_single_number_pane_g2_ParamLimits

0x6419,	// (0x0004816f) list_single_number_pane_g2

0x0001,

0xf5d8,	// (0x0005132e) list_single_number_pane_g_ParamLimits

0xf5d8,	// (0x0005132e) list_single_number_pane_g

0x5769,	// (0x000474bf) list_single_number_pane_t1_ParamLimits

0x5769,	// (0x000474bf) list_single_number_pane_t1

0x577f,	// (0x000474d5) list_single_number_pane_t2_ParamLimits

0x577f,	// (0x000474d5) list_single_number_pane_t2

0x0001,

0xf96a,	// (0x000516c0) list_single_number_pane_t_ParamLimits

0xf96a,	// (0x000516c0) list_single_number_pane_t

0x4ef7,	// (0x00046c4d) list_single_graphic_pane_g1_ParamLimits

0x4ef7,	// (0x00046c4d) list_single_graphic_pane_g1

0x1c3a,	// (0x00043990) list_single_graphic_pane_g2_ParamLimits

0x1c3a,	// (0x00043990) list_single_graphic_pane_g2

0x6419,	// (0x0004816f) list_single_graphic_pane_g3_ParamLimits

0x6419,	// (0x0004816f) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0005131d) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0005131d) list_single_graphic_pane_g

0x4f03,	// (0x00046c59) list_single_graphic_pane_t1_ParamLimits

0x4f03,	// (0x00046c59) list_single_graphic_pane_t1

0x4f19,	// (0x00046c6f) list_single_heading_pane_g1_ParamLimits

0x4f19,	// (0x00046c6f) list_single_heading_pane_g1

0x6419,	// (0x0004816f) list_single_heading_pane_g2_ParamLimits

0x6419,	// (0x0004816f) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x00051324) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x00051324) list_single_heading_pane_g

0x4f2c,	// (0x00046c82) list_single_heading_pane_t1_ParamLimits

0x4f2c,	// (0x00046c82) list_single_heading_pane_t1

0x6425,	// (0x0004817b) list_single_heading_pane_t2_ParamLimits

0x6425,	// (0x0004817b) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x00051329) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x00051329) list_single_heading_pane_t

0x1c3a,	// (0x00043990) list_single_number_heading_pane_g1_ParamLimits

0x1c3a,	// (0x00043990) list_single_number_heading_pane_g1

0x6419,	// (0x0004816f) list_single_number_heading_pane_g2_ParamLimits

0x6419,	// (0x0004816f) list_single_number_heading_pane_g2

0x0001,

0xf5d8,	// (0x0005132e) list_single_number_heading_pane_g_ParamLimits

0xf5d8,	// (0x0005132e) list_single_number_heading_pane_g

0x4f42,	// (0x00046c98) list_single_number_heading_pane_t1_ParamLimits

0x4f42,	// (0x00046c98) list_single_number_heading_pane_t1

0x4f58,	// (0x00046cae) list_single_number_heading_pane_t2_ParamLimits

0x4f58,	// (0x00046cae) list_single_number_heading_pane_t2

0x4f6a,	// (0x00046cc0) list_single_number_heading_pane_t3_ParamLimits

0x4f6a,	// (0x00046cc0) list_single_number_heading_pane_t3

0x0002,

0xf5dd,	// (0x00051333) list_single_number_heading_pane_t_ParamLimits

0xf5dd,	// (0x00051333) list_single_number_heading_pane_t

0x4f7c,	// (0x00046cd2) list_single_graphic_heading_pane_g1_ParamLimits

0x4f7c,	// (0x00046cd2) list_single_graphic_heading_pane_g1

0x6437,	// (0x0004818d) list_single_graphic_heading_pane_g4_ParamLimits

0x6437,	// (0x0004818d) list_single_graphic_heading_pane_g4

0x6419,	// (0x0004816f) list_single_graphic_heading_pane_g5_ParamLimits

0x6419,	// (0x0004816f) list_single_graphic_heading_pane_g5

0x0002,

0xf5e4,	// (0x0005133a) list_single_graphic_heading_pane_g_ParamLimits

0xf5e4,	// (0x0005133a) list_single_graphic_heading_pane_g

0x4f42,	// (0x00046c98) list_single_graphic_heading_pane_t1_ParamLimits

0x4f42,	// (0x00046c98) list_single_graphic_heading_pane_t1

0x4f94,	// (0x00046cea) list_single_graphic_heading_pane_t2_ParamLimits

0x4f94,	// (0x00046cea) list_single_graphic_heading_pane_t2

0x0001,

0xf5eb,	// (0x00051341) list_single_graphic_heading_pane_t_ParamLimits

0xf5eb,	// (0x00051341) list_single_graphic_heading_pane_t

0x6448,	// (0x0004819e) list_single_large_graphic_pane_g1_ParamLimits

0x6448,	// (0x0004819e) list_single_large_graphic_pane_g1

0x6454,	// (0x000481aa) list_single_large_graphic_pane_g2_ParamLimits

0x6454,	// (0x000481aa) list_single_large_graphic_pane_g2

0x6460,	// (0x000481b6) list_single_large_graphic_pane_g3_ParamLimits

0x6460,	// (0x000481b6) list_single_large_graphic_pane_g3

0x0002,

0xf5f0,	// (0x00051346) list_single_large_graphic_pane_g_ParamLimits

0xf5f0,	// (0x00051346) list_single_large_graphic_pane_g

0x9718,	// (0x0004b46e) wait_border_pane_g2_copy1

0x646c,	// (0x000481c2) list_single_large_graphic_pane_g4_cp2

0x4fac,	// (0x00046d02) list_single_large_graphic_pane_t1_ParamLimits

0x4fac,	// (0x00046d02) list_single_large_graphic_pane_t1

0x6474,	// (0x000481ca) list_double_pane_g1_ParamLimits

0x6474,	// (0x000481ca) list_double_pane_g1

0x6480,	// (0x000481d6) list_double_pane_g2_ParamLimits

0x6480,	// (0x000481d6) list_double_pane_g2

0x0001,

0xf5f7,	// (0x0005134d) list_double_pane_g_ParamLimits

0xf5f7,	// (0x0005134d) list_double_pane_g

0x4fc2,	// (0x00046d18) list_double_pane_t1_ParamLimits

0x4fc2,	// (0x00046d18) list_double_pane_t1

0x4fd8,	// (0x00046d2e) list_double_pane_t2_ParamLimits

0x4fd8,	// (0x00046d2e) list_double_pane_t2

0x0001,

0xf5fc,	// (0x00051352) list_double_pane_t_ParamLimits

0xf5fc,	// (0x00051352) list_double_pane_t

0x4fea,	// (0x00046d40) list_double2_pane_g1_ParamLimits

0x4fea,	// (0x00046d40) list_double2_pane_g1

0x4ffb,	// (0x00046d51) list_double2_pane_g2_ParamLimits

0x4ffb,	// (0x00046d51) list_double2_pane_g2

0x0001,

0xf601,	// (0x00051357) list_double2_pane_g_ParamLimits

0xf601,	// (0x00051357) list_double2_pane_g

0x5007,	// (0x00046d5d) list_double2_pane_t1_ParamLimits

0x5007,	// (0x00046d5d) list_double2_pane_t1

0x501d,	// (0x00046d73) list_double2_pane_t2_ParamLimits

0x501d,	// (0x00046d73) list_double2_pane_t2

0x0001,

0xf606,	// (0x0005135c) list_double2_pane_t_ParamLimits

0xf606,	// (0x0005135c) list_double2_pane_t

0x6474,	// (0x000481ca) list_double_number_pane_g1_ParamLimits

0x6474,	// (0x000481ca) list_double_number_pane_g1

0x6480,	// (0x000481d6) list_double_number_pane_g2_ParamLimits

0x6480,	// (0x000481d6) list_double_number_pane_g2

0x0001,

0xf5f7,	// (0x0005134d) list_double_number_pane_g_ParamLimits

0xf5f7,	// (0x0005134d) list_double_number_pane_g

0x502f,	// (0x00046d85) list_double_number_pane_t1_ParamLimits

0x502f,	// (0x00046d85) list_double_number_pane_t1

0x5041,	// (0x00046d97) list_double_number_pane_t2_ParamLimits

0x5041,	// (0x00046d97) list_double_number_pane_t2

0x5057,	// (0x00046dad) list_double_number_pane_t3_ParamLimits

0x5057,	// (0x00046dad) list_double_number_pane_t3

0x0002,

0xf60b,	// (0x00051361) list_double_number_pane_t_ParamLimits

0xf60b,	// (0x00051361) list_double_number_pane_t

0x5069,	// (0x00046dbf) list_double_graphic_pane_g1_ParamLimits

0x5069,	// (0x00046dbf) list_double_graphic_pane_g1

0x5075,	// (0x00046dcb) list_double_graphic_pane_g2_ParamLimits

0x5075,	// (0x00046dcb) list_double_graphic_pane_g2

0x5084,	// (0x00046dda) list_double_graphic_pane_g3_ParamLimits

0x5084,	// (0x00046dda) list_double_graphic_pane_g3

0x0003,

0xf612,	// (0x00051368) list_double_graphic_pane_g_ParamLimits

0xf612,	// (0x00051368) list_double_graphic_pane_g

0x509c,	// (0x00046df2) list_double_graphic_pane_t1_ParamLimits

0x509c,	// (0x00046df2) list_double_graphic_pane_t1

0x50b2,	// (0x00046e08) list_double_graphic_pane_t2_ParamLimits

0x50b2,	// (0x00046e08) list_double_graphic_pane_t2

0x0001,

0xf61b,	// (0x00051371) list_double_graphic_pane_t_ParamLimits

0xf61b,	// (0x00051371) list_double_graphic_pane_t

0x50c4,	// (0x00046e1a) list_double2_graphic_pane_g1_ParamLimits

0x50c4,	// (0x00046e1a) list_double2_graphic_pane_g1

0x648c,	// (0x000481e2) list_double2_graphic_pane_g2_ParamLimits

0x648c,	// (0x000481e2) list_double2_graphic_pane_g2

0x50d0,	// (0x00046e26) list_double2_graphic_pane_g3_ParamLimits

0x50d0,	// (0x00046e26) list_double2_graphic_pane_g3

0x0002,

0xf620,	// (0x00051376) list_double2_graphic_pane_g_ParamLimits

0xf620,	// (0x00051376) list_double2_graphic_pane_g

0x50dc,	// (0x00046e32) list_double2_graphic_pane_t1_ParamLimits

0x50dc,	// (0x00046e32) list_double2_graphic_pane_t1

0x50f2,	// (0x00046e48) list_double2_graphic_pane_t2_ParamLimits

0x50f2,	// (0x00046e48) list_double2_graphic_pane_t2

0x0001,

0xf627,	// (0x0005137d) list_double2_graphic_pane_t_ParamLimits

0xf627,	// (0x0005137d) list_double2_graphic_pane_t

0x5104,	// (0x00046e5a) list_double_large_graphic_pane_g1_ParamLimits

0x5104,	// (0x00046e5a) list_double_large_graphic_pane_g1

0x512f,	// (0x00046e85) list_double_large_graphic_pane_g2_ParamLimits

0x512f,	// (0x00046e85) list_double_large_graphic_pane_g2

0x6480,	// (0x000481d6) list_double_large_graphic_pane_g3_ParamLimits

0x6480,	// (0x000481d6) list_double_large_graphic_pane_g3

0x5145,	// (0x00046e9b) list_double_large_graphic_pane_g4_ParamLimits

0x5145,	// (0x00046e9b) list_double_large_graphic_pane_g4

0x0004,

0xf62c,	// (0x00051382) list_double_large_graphic_pane_g_ParamLimits

0xf62c,	// (0x00051382) list_double_large_graphic_pane_g

0x5158,	// (0x00046eae) list_double_large_graphic_pane_t1_ParamLimits

0x5158,	// (0x00046eae) list_double_large_graphic_pane_t1

0x5171,	// (0x00046ec7) list_double_large_graphic_pane_t2_ParamLimits

0x5171,	// (0x00046ec7) list_double_large_graphic_pane_t2

0x0001,

0xf637,	// (0x0005138d) list_double_large_graphic_pane_t_ParamLimits

0xf637,	// (0x0005138d) list_double_large_graphic_pane_t

0x64ad,	// (0x00048203) list_double2_large_graphic_pane_g1_ParamLimits

0x64ad,	// (0x00048203) list_double2_large_graphic_pane_g1

0x5183,	// (0x00046ed9) list_double2_large_graphic_pane_g2_ParamLimits

0x5183,	// (0x00046ed9) list_double2_large_graphic_pane_g2

0x50d0,	// (0x00046e26) list_double2_large_graphic_pane_g3_ParamLimits

0x50d0,	// (0x00046e26) list_double2_large_graphic_pane_g3

0x0002,

0xf63c,	// (0x00051392) list_double2_large_graphic_pane_g_ParamLimits

0xf63c,	// (0x00051392) list_double2_large_graphic_pane_g

0x5194,	// (0x00046eea) list_double2_large_graphic_pane_t1_ParamLimits

0x5194,	// (0x00046eea) list_double2_large_graphic_pane_t1

0x51aa,	// (0x00046f00) list_double2_large_graphic_pane_t2_ParamLimits

0x51aa,	// (0x00046f00) list_double2_large_graphic_pane_t2

0x0001,

0xf643,	// (0x00051399) list_double2_large_graphic_pane_t_ParamLimits

0xf643,	// (0x00051399) list_double2_large_graphic_pane_t

0x51bc,	// (0x00046f12) list_double_heading_pane_g1_ParamLimits

0x51bc,	// (0x00046f12) list_double_heading_pane_g1

0x51cd,	// (0x00046f23) list_double_heading_pane_g2_ParamLimits

0x51cd,	// (0x00046f23) list_double_heading_pane_g2

0x0001,

0xf648,	// (0x0005139e) list_double_heading_pane_g_ParamLimits

0xf648,	// (0x0005139e) list_double_heading_pane_g

0x51d9,	// (0x00046f2f) list_double_heading_pane_t1_ParamLimits

0x51d9,	// (0x00046f2f) list_double_heading_pane_t1

0x51ef,	// (0x00046f45) list_double_heading_pane_t2_ParamLimits

0x51ef,	// (0x00046f45) list_double_heading_pane_t2

0x0001,

0xf64d,	// (0x000513a3) list_double_heading_pane_t_ParamLimits

0xf64d,	// (0x000513a3) list_double_heading_pane_t

0x5201,	// (0x00046f57) list_double_graphic_heading_pane_g1_ParamLimits

0x5201,	// (0x00046f57) list_double_graphic_heading_pane_g1

0x51bc,	// (0x00046f12) list_double_graphic_heading_pane_g2_ParamLimits

0x51bc,	// (0x00046f12) list_double_graphic_heading_pane_g2

0x51cd,	// (0x00046f23) list_double_graphic_heading_pane_g3_ParamLimits

0x51cd,	// (0x00046f23) list_double_graphic_heading_pane_g3

0x0002,

0xf652,	// (0x000513a8) list_double_graphic_heading_pane_g_ParamLimits

0xf652,	// (0x000513a8) list_double_graphic_heading_pane_g

0x520d,	// (0x00046f63) list_double_graphic_heading_pane_t1_ParamLimits

0x520d,	// (0x00046f63) list_double_graphic_heading_pane_t1

0x5223,	// (0x00046f79) list_double_graphic_heading_pane_t2_ParamLimits

0x5223,	// (0x00046f79) list_double_graphic_heading_pane_t2

0x0001,

0xf659,	// (0x000513af) list_double_graphic_heading_pane_t_ParamLimits

0xf659,	// (0x000513af) list_double_graphic_heading_pane_t

0x5235,	// (0x00046f8b) list_double_time_pane_g1_ParamLimits

0x5235,	// (0x00046f8b) list_double_time_pane_g1

0x5246,	// (0x00046f9c) list_double_time_pane_g2_ParamLimits

0x5246,	// (0x00046f9c) list_double_time_pane_g2

0x0001,

0xf65e,	// (0x000513b4) list_double_time_pane_g_ParamLimits

0xf65e,	// (0x000513b4) list_double_time_pane_g

0x5252,	// (0x00046fa8) list_double_time_pane_t1_ParamLimits

0x5252,	// (0x00046fa8) list_double_time_pane_t1

0x5268,	// (0x00046fbe) list_double_time_pane_t2_ParamLimits

0x5268,	// (0x00046fbe) list_double_time_pane_t2

0x527a,	// (0x00046fd0) list_double_time_pane_t3_ParamLimits

0x527a,	// (0x00046fd0) list_double_time_pane_t3

0x528c,	// (0x00046fe2) list_double_time_pane_t4_ParamLimits

0x528c,	// (0x00046fe2) list_double_time_pane_t4

0x0003,

0xf663,	// (0x000513b9) list_double_time_pane_t_ParamLimits

0xf663,	// (0x000513b9) list_double_time_pane_t

0x529e,	// (0x00046ff4) list_setting_pane_g1_ParamLimits

0x529e,	// (0x00046ff4) list_setting_pane_g1

0x52aa,	// (0x00047000) list_setting_pane_g2_ParamLimits

0x52aa,	// (0x00047000) list_setting_pane_g2

0x0001,

0xf66c,	// (0x000513c2) list_setting_pane_g_ParamLimits

0xf66c,	// (0x000513c2) list_setting_pane_g

0x52b6,	// (0x0004700c) list_setting_pane_t1_ParamLimits

0x52b6,	// (0x0004700c) list_setting_pane_t1

0x52d0,	// (0x00047026) list_setting_pane_t2_ParamLimits

0x52d0,	// (0x00047026) list_setting_pane_t2

0x0002,

0xf671,	// (0x000513c7) list_setting_pane_t_ParamLimits

0xf671,	// (0x000513c7) list_setting_pane_t

0x530f,	// (0x00047065) set_value_pane_cp_ParamLimits

0x530f,	// (0x00047065) set_value_pane_cp

0x531d,	// (0x00047073) list_setting_number_pane_g1_ParamLimits

0x531d,	// (0x00047073) list_setting_number_pane_g1

0x5329,	// (0x0004707f) list_setting_number_pane_g2_ParamLimits

0x5329,	// (0x0004707f) list_setting_number_pane_g2

0x0001,

0xf678,	// (0x000513ce) list_setting_number_pane_g_ParamLimits

0xf678,	// (0x000513ce) list_setting_number_pane_g

0x5335,	// (0x0004708b) list_setting_number_pane_t1_ParamLimits

0x5335,	// (0x0004708b) list_setting_number_pane_t1

0x534e,	// (0x000470a4) list_setting_number_pane_t2_ParamLimits

0x534e,	// (0x000470a4) list_setting_number_pane_t2

0x5368,	// (0x000470be) list_setting_number_pane_t3_ParamLimits

0x5368,	// (0x000470be) list_setting_number_pane_t3

0x0003,

0xf67d,	// (0x000513d3) list_setting_number_pane_t_ParamLimits

0xf67d,	// (0x000513d3) list_setting_number_pane_t

0x530f,	// (0x00047065) set_value_pane_ParamLimits

0x530f,	// (0x00047065) set_value_pane

0x09ee,	// (0x00042744) bg_set_opt_pane_ParamLimits

0x09ee,	// (0x00042744) bg_set_opt_pane

0x53ab,	// (0x00047101) set_value_pane_t1

0x0a0f,	// (0x00042765) slider_set_pane_cp3

0x0a18,	// (0x0004276e) volume_small_pane_cp

0x0a21,	// (0x00042777) list_form_gen_pane

0x0a2a,	// (0x00042780) scroll_pane_cp8

0x53c1,	// (0x00047117) form_field_data_pane_ParamLimits

0x53c1,	// (0x00047117) form_field_data_pane

0x53e9,	// (0x0004713f) form_field_data_wide_pane_ParamLimits

0x53e9,	// (0x0004713f) form_field_data_wide_pane

0x5410,	// (0x00047166) form_field_popup_pane_ParamLimits

0x5410,	// (0x00047166) form_field_popup_pane

0x5432,	// (0x00047188) form_field_popup_wide_pane_ParamLimits

0x5432,	// (0x00047188) form_field_popup_wide_pane

0x5453,	// (0x000471a9) form_field_slider_pane_ParamLimits

0x5453,	// (0x000471a9) form_field_slider_pane

0x5466,	// (0x000471bc) form_field_slider_wide_pane_ParamLimits

0x5466,	// (0x000471bc) form_field_slider_wide_pane

0x0a3b,	// (0x00042791) data_form_pane

0x5483,	// (0x000471d9) form_field_data_pane_t1

0x0a47,	// (0x0004279d) input_focus_pane

0x0a55,	// (0x000427ab) data_form_wide_pane

0x54a9,	// (0x000471ff) form_field_data_wide_pane_t1

0x07c2,	// (0x00042518) input_focus_pane_cp6

0x54cb,	// (0x00047221) form_field_popup_pane_t1

0x0a47,	// (0x0004279d) input_focus_pane_cp7

0x0a81,	// (0x000427d7) list_form_pane

0x54ed,	// (0x00047243) form_field_popup_wide_pane_t1

0x0a47,	// (0x0004279d) input_focus_pane_cp8

0x0a8d,	// (0x000427e3) list_form_wide_pane

0x550a,	// (0x00047260) form_field_slider_pane_t1_ParamLimits

0x550a,	// (0x00047260) form_field_slider_pane_t1

0x5522,	// (0x00047278) form_field_slider_pane_t2_ParamLimits

0x5522,	// (0x00047278) form_field_slider_pane_t2

0x0001,

0xf68d,	// (0x000513e3) form_field_slider_pane_t_ParamLimits

0xf68d,	// (0x000513e3) form_field_slider_pane_t

0xd380,	// (0x0004f0d6) input_focus_pane_cp9_ParamLimits

0xd380,	// (0x0004f0d6) input_focus_pane_cp9

0x5537,	// (0x0004728d) slider_cont_pane_ParamLimits

0x5537,	// (0x0004728d) slider_cont_pane

0x0a9c,	// (0x000427f2) form_field_slider_wide_pane_t1_ParamLimits

0x0a9c,	// (0x000427f2) form_field_slider_wide_pane_t1

0x554b,	// (0x000472a1) form_field_slider_wide_pane_t2_ParamLimits

0x554b,	// (0x000472a1) form_field_slider_wide_pane_t2

0x0001,

0xf692,	// (0x000513e8) form_field_slider_wide_pane_t_ParamLimits

0xf692,	// (0x000513e8) form_field_slider_wide_pane_t

0xd380,	// (0x0004f0d6) input_focus_pane_cp10_ParamLimits

0xd380,	// (0x0004f0d6) input_focus_pane_cp10

0x555d,	// (0x000472b3) slider_cont_pane_cp1_ParamLimits

0x555d,	// (0x000472b3) slider_cont_pane_cp1

0x5571,	// (0x000472c7) slider_form_pane_cp

0x0aae,	// (0x00042804) input_focus_pane_g1

0x0ab6,	// (0x0004280c) input_focus_pane_g2

0x0abe,	// (0x00042814) input_focus_pane_g3

0x0ac6,	// (0x0004281c) input_focus_pane_g4

0x0ace,	// (0x00042824) input_focus_pane_g5

0x0ad6,	// (0x0004282c) input_focus_pane_g6

0x0ade,	// (0x00042834) input_focus_pane_g7

0x0ae6,	// (0x0004283c) input_focus_pane_g8

0x0aee,	// (0x00042844) input_focus_pane_g9

0xd1f5,	// (0x0004ef4b) input_focus_pane_g10

0x0009,

0xf697,	// (0x000513ed) input_focus_pane_g

0x9721,	// (0x0004b477) wait_border_pane_g3_copy1

0x5579,	// (0x000472cf) data_form_pane_t1

0xd1f5,	// (0x0004ef4b) wait_anim_pane_g1_copy1

0x5791,	// (0x000474e7) data_form_wide_pane_t1

0x5598,	// (0x000472ee) list_form_graphic_pane_cp_ParamLimits

0x5598,	// (0x000472ee) list_form_graphic_pane_cp

0xa69a,	// (0x0004c3f0) slider_form_pane_g1

0xa6a3,	// (0x0004c3f9) slider_form_pane_g2

0x0006,

0xf99a,	// (0x000516f0) slider_form_pane_g

0x5598,	// (0x000472ee) list_form_graphic_pane_ParamLimits

0x5598,	// (0x000472ee) list_form_graphic_pane

0x55aa,	// (0x00047300) list_form_graphic_pane_g1

0x55b2,	// (0x00047308) list_form_graphic_pane_t1_ParamLimits

0x55b2,	// (0x00047308) list_form_graphic_pane_t1

0xd24d,	// (0x0004efa3) list_highlight_pane_cp5_ParamLimits

0xd24d,	// (0x0004efa3) list_highlight_pane_cp5

0x64b9,	// (0x0004820f) find_pane_g1

0x0af6,	// (0x0004284c) input_find_pane

0x55c7,	// (0x0004731d) input_find_pane_g1_ParamLimits

0x55c7,	// (0x0004731d) input_find_pane_g1

0x55d3,	// (0x00047329) input_find_pane_t1_ParamLimits

0x55d3,	// (0x00047329) input_find_pane_t1

0x55e8,	// (0x0004733e) input_find_pane_t2_ParamLimits

0x55e8,	// (0x0004733e) input_find_pane_t2

0x0001,

0xf6ac,	// (0x00051402) input_find_pane_t_ParamLimits

0xf6ac,	// (0x00051402) input_find_pane_t

0x0aff,	// (0x00042855) input_focus_pane_cp5_ParamLimits

0x0aff,	// (0x00042855) input_focus_pane_cp5

0x0b0d,	// (0x00042863) bg_popup_window_pane_cp2_ParamLimits

0x0b0d,	// (0x00042863) bg_popup_window_pane_cp2

0x0b1a,	// (0x00042870) listscroll_menu_pane_ParamLimits

0x0b1a,	// (0x00042870) listscroll_menu_pane

0x64ce,	// (0x00048224) popup_submenu_window_ParamLimits

0x64ce,	// (0x00048224) popup_submenu_window

0x0b26,	// (0x0004287c) find_popup_pane_g1

0x0b2e,	// (0x00042884) input_popup_find_pane_cp

0x0aff,	// (0x00042855) input_focus_pane_cp4_ParamLimits

0x0aff,	// (0x00042855) input_focus_pane_cp4

0x0b38,	// (0x0004288e) input_popup_find_pane_t1_ParamLimits

0x0b38,	// (0x0004288e) input_popup_find_pane_t1

0xd1ff,	// (0x0004ef55) bg_popup_sub_pane_cp

0x0b66,	// (0x000428bc) listscroll_popup_sub_pane

0x0b6e,	// (0x000428c4) list_submenu_pane_ParamLimits

0x0b6e,	// (0x000428c4) list_submenu_pane

0x0b7f,	// (0x000428d5) scroll_pane_cp4

0x0b87,	// (0x000428dd) list_single_popup_submenu_pane_ParamLimits

0x0b87,	// (0x000428dd) list_single_popup_submenu_pane

0x0b9c,	// (0x000428f2) list_single_popup_submenu_pane_g1

0x0ba4,	// (0x000428fa) list_single_popup_submenu_pane_t1_ParamLimits

0x0ba4,	// (0x000428fa) list_single_popup_submenu_pane_t1

0xd24d,	// (0x0004efa3) bg_active_tab_pane_cp1_ParamLimits

0xd24d,	// (0x0004efa3) bg_active_tab_pane_cp1

0x650c,	// (0x00048262) tabs_2_active_pane_g1

0x6514,	// (0x0004826a) tabs_2_active_pane_t1

0xd24d,	// (0x0004efa3) bg_passive_tab_pane_cp1_ParamLimits

0xd24d,	// (0x0004efa3) bg_passive_tab_pane_cp1

0x650c,	// (0x00048262) tabs_2_passive_pane_g1

0x6514,	// (0x0004826a) tabs_2_passive_pane_t1

0x18c9,	// (0x0004361f) bg_active_tab_pane_cp4

0x6526,	// (0x0004827c) tabs_2_long_active_pane_t1

0x6539,	// (0x0004828f) bg_passive_tab_pane_cp4

0x743d,	// (0x00049193) list_single_midp_graphic_pane_g4_ParamLimits

0x18c9,	// (0x0004361f) bg_active_tab_pane_cp5

0x6545,	// (0x0004829b) tabs_3_long_active_pane_t1

0x6539,	// (0x0004828f) bg_passive_tab_pane_cp5

0x743d,	// (0x00049193) list_single_midp_graphic_pane_g4

0xd24d,	// (0x0004efa3) bg_popup_window_pane_cp13_ParamLimits

0xd24d,	// (0x0004efa3) bg_popup_window_pane_cp13

0x0bc2,	// (0x00042918) listscroll_popup_fast_pane_ParamLimits

0x0bc2,	// (0x00042918) listscroll_popup_fast_pane

0x0bd1,	// (0x00042927) grid_popup_fast_pane_ParamLimits

0x0bd1,	// (0x00042927) grid_popup_fast_pane

0x0be3,	// (0x00042939) scroll_pane_cp9_ParamLimits

0x0be3,	// (0x00042939) scroll_pane_cp9

0xc025,	// (0x0004dd7b) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc025,	// (0x0004dd7b) list_single_graphic_hl_pane_t1_cp2

0x0c07,	// (0x0004295d) input_focus_pane_cp20_ParamLimits

0x0c07,	// (0x0004295d) input_focus_pane_cp20

0x0c15,	// (0x0004296b) query_popup_data_pane_t1_ParamLimits

0x0c15,	// (0x0004296b) query_popup_data_pane_t1

0x0c28,	// (0x0004297e) query_popup_data_pane_t2_ParamLimits

0x0c28,	// (0x0004297e) query_popup_data_pane_t2

0x0c6e,	// (0x000429c4) query_popup_data_pane_t3_ParamLimits

0x0c6e,	// (0x000429c4) query_popup_data_pane_t3

0x0caf,	// (0x00042a05) query_popup_data_pane_t4_ParamLimits

0x0caf,	// (0x00042a05) query_popup_data_pane_t4

0x0ceb,	// (0x00042a41) query_popup_data_pane_t5_ParamLimits

0x0ceb,	// (0x00042a41) query_popup_data_pane_t5

0x0004,

0xf6b1,	// (0x00051407) query_popup_data_pane_t_ParamLimits

0xf6b1,	// (0x00051407) query_popup_data_pane_t

0x0aae,	// (0x00042804) bg_set_opt_pane_g1

0x0ab6,	// (0x0004280c) bg_set_opt_pane_g2

0x0abe,	// (0x00042814) bg_set_opt_pane_g3

0x0ac6,	// (0x0004281c) bg_set_opt_pane_g4

0x0ace,	// (0x00042824) bg_set_opt_pane_g5

0x0ad6,	// (0x0004282c) bg_set_opt_pane_g6

0x0ade,	// (0x00042834) bg_set_opt_pane_g7

0x0ae6,	// (0x0004283c) bg_set_opt_pane_g8

0x0aee,	// (0x00042844) bg_set_opt_pane_g9

0x0008,

0xf6bc,	// (0x00051412) bg_set_opt_pane_g

0x69dd,	// (0x00048733) control_top_pane_stacon_ParamLimits

0x69dd,	// (0x00048733) control_top_pane_stacon

0x6a30,	// (0x00048786) signal_pane_stacon_ParamLimits

0x6a30,	// (0x00048786) signal_pane_stacon

0x4297,	// (0x00045fed) stacon_top_pane_g1_ParamLimits

0x4297,	// (0x00045fed) stacon_top_pane_g1

0x6a55,	// (0x000487ab) title_pane_stacon_ParamLimits

0x6a55,	// (0x000487ab) title_pane_stacon

0x6a7f,	// (0x000487d5) uni_indicator_pane_stacon_ParamLimits

0x6a7f,	// (0x000487d5) uni_indicator_pane_stacon

0x6a97,	// (0x000487ed) battery_pane_stacon_ParamLimits

0x6a97,	// (0x000487ed) battery_pane_stacon

0x6adb,	// (0x00048831) control_bottom_pane_stacon_ParamLimits

0x6adb,	// (0x00048831) control_bottom_pane_stacon

0x6afe,	// (0x00048854) navi_pane_stacon_ParamLimits

0x6afe,	// (0x00048854) navi_pane_stacon

0x4385,	// (0x000460db) stacon_bottom_pane_g1_ParamLimits

0x4385,	// (0x000460db) stacon_bottom_pane_g1

0x6557,	// (0x000482ad) aid_levels_signal_lsc_ParamLimits

0x6557,	// (0x000482ad) aid_levels_signal_lsc

0x656e,	// (0x000482c4) signal_pane_stacon_g1_ParamLimits

0x656e,	// (0x000482c4) signal_pane_stacon_g1

0x6582,	// (0x000482d8) signal_pane_stacon_g2_ParamLimits

0x6582,	// (0x000482d8) signal_pane_stacon_g2

0x0001,

0xf6cf,	// (0x00051425) signal_pane_stacon_g_ParamLimits

0xf6cf,	// (0x00051425) signal_pane_stacon_g

0x65b7,	// (0x0004830d) title_pane_stacon_t1_ParamLimits

0x65b7,	// (0x0004830d) title_pane_stacon_t1

0x0d43,	// (0x00042a99) uni_indicator_pane_stacon_g1

0x0d4d,	// (0x00042aa3) uni_indicator_pane_stacon_g2

0x0d2f,	// (0x00042a85) uni_indicator_pane_stacon_g3

0x0d39,	// (0x00042a8f) uni_indicator_pane_stacon_g4

0x0003,

0xf6db,	// (0x00051431) uni_indicator_pane_stacon_g

0x65dc,	// (0x00048332) control_top_pane_stacon_g1

0x65e4,	// (0x0004833a) control_top_pane_stacon_t1_ParamLimits

0x65e4,	// (0x0004833a) control_top_pane_stacon_t1

0x661b,	// (0x00048371) aid_levels_battery_lsc_ParamLimits

0x661b,	// (0x00048371) aid_levels_battery_lsc

0x6633,	// (0x00048389) battery_pane_stacon_g1_ParamLimits

0x6633,	// (0x00048389) battery_pane_stacon_g1

0x6646,	// (0x0004839c) battery_pane_stacon_g2_ParamLimits

0x6646,	// (0x0004839c) battery_pane_stacon_g2

0x0001,

0xf6e4,	// (0x0005143a) battery_pane_stacon_g_ParamLimits

0xf6e4,	// (0x0005143a) battery_pane_stacon_g

0x6684,	// (0x000483da) navi_icon_pane_stacon

0x6698,	// (0x000483ee) navi_navi_pane_stacon

0x6684,	// (0x000483da) navi_text_pane_stacon

0x65dc,	// (0x00048332) control_bottom_pane_stacon_g1

0x66ae,	// (0x00048404) control_bottom_pane_stacon_t1_ParamLimits

0x66ae,	// (0x00048404) control_bottom_pane_stacon_t1

0x66e5,	// (0x0004843b) grid_app_pane_ParamLimits

0x66e5,	// (0x0004843b) grid_app_pane

0x6709,	// (0x0004845f) scroll_pane_cp15_ParamLimits

0x6709,	// (0x0004845f) scroll_pane_cp15

0x671e,	// (0x00048474) cell_app_pane_ParamLimits

0x671e,	// (0x00048474) cell_app_pane

0x674a,	// (0x000484a0) cell_app_pane_g1_ParamLimits

0x674a,	// (0x000484a0) cell_app_pane_g1

0x0d71,	// (0x00042ac7) cell_app_pane_g2_ParamLimits

0x0d71,	// (0x00042ac7) cell_app_pane_g2

0x0001,

0xf6e9,	// (0x0005143f) cell_app_pane_g_ParamLimits

0xf6e9,	// (0x0005143f) cell_app_pane_g

0x0d7d,	// (0x00042ad3) cell_app_pane_t1_ParamLimits

0x0d7d,	// (0x00042ad3) cell_app_pane_t1

0x0d8f,	// (0x00042ae5) grid_highlight_pane_ParamLimits

0x0d8f,	// (0x00042ae5) grid_highlight_pane

0x0aae,	// (0x00042804) cell_highlight_pane_g1

0x0ab6,	// (0x0004280c) cell_highlight_pane_g2

0x0abe,	// (0x00042814) cell_highlight_pane_g3

0x0ac6,	// (0x0004281c) cell_highlight_pane_g4

0x0ace,	// (0x00042824) cell_highlight_pane_g5

0x0ad6,	// (0x0004282c) cell_highlight_pane_g6

0x0ade,	// (0x00042834) cell_highlight_pane_g7

0x0ae6,	// (0x0004283c) cell_highlight_pane_g8

0x0aee,	// (0x00042844) cell_highlight_pane_g9

0xd1f5,	// (0x0004ef4b) cell_highlight_pane_g10

0x0009,

0xf697,	// (0x000513ed) cell_highlight_pane_g

0x0da0,	// (0x00042af6) bg_scroll_pane

0x6781,	// (0x000484d7) scroll_handle_pane

0x0de7,	// (0x00042b3d) scroll_bg_pane_g1

0x0dfc,	// (0x00042b52) scroll_bg_pane_g2

0x0e14,	// (0x00042b6a) scroll_bg_pane_g3

0x0002,

0xf6ee,	// (0x00051444) scroll_bg_pane_g

0x0e29,	// (0x00042b7f) scroll_handle_focus_pane_ParamLimits

0x0e29,	// (0x00042b7f) scroll_handle_focus_pane

0x0de7,	// (0x00042b3d) scroll_handle_pane_g1

0x0e36,	// (0x00042b8c) scroll_handle_pane_g2

0x0e14,	// (0x00042b6a) scroll_handle_pane_g3

0x0002,

0xf6f5,	// (0x0005144b) scroll_handle_pane_g

0x0aff,	// (0x00042855) bg_popup_sub_pane_cp21_ParamLimits

0x0aff,	// (0x00042855) bg_popup_sub_pane_cp21

0x0e4a,	// (0x00042ba0) popup_fep_japan_predictive_window_t1_ParamLimits

0x0e4a,	// (0x00042ba0) popup_fep_japan_predictive_window_t1

0x0e61,	// (0x00042bb7) popup_fep_japan_predictive_window_t2_ParamLimits

0x0e61,	// (0x00042bb7) popup_fep_japan_predictive_window_t2

0x0e94,	// (0x00042bea) popup_fep_japan_predictive_window_t3_ParamLimits

0x0e94,	// (0x00042bea) popup_fep_japan_predictive_window_t3

0x0002,

0xf6fc,	// (0x00051452) popup_fep_japan_predictive_window_t_ParamLimits

0xf6fc,	// (0x00051452) popup_fep_japan_predictive_window_t

0xd1ff,	// (0x0004ef55) bg_popup_sub_pane_cp23

0x0ecb,	// (0x00042c21) listscroll_japin_cand_pane

0x0ed3,	// (0x00042c29) popup_fep_japan_candidate_window_t1

0x0ee1,	// (0x00042c37) candidate_pane_ParamLimits

0x0ee1,	// (0x00042c37) candidate_pane

0x0ef3,	// (0x00042c49) scroll_pane_cp30

0x0efd,	// (0x00042c53) list_single_popup_jap_candidate_pane_ParamLimits

0x0efd,	// (0x00042c53) list_single_popup_jap_candidate_pane

0xd1ff,	// (0x0004ef55) list_highlight_pane_cp30

0x0f11,	// (0x00042c67) list_single_popup_jap_candidate_pane_t1

0x67aa,	// (0x00048500) level_1_signal

0x67b7,	// (0x0004850d) level_2_signal

0x67c4,	// (0x0004851a) level_3_signal

0x67d1,	// (0x00048527) level_4_signal

0x67de,	// (0x00048534) level_5_signal

0x67eb,	// (0x00048541) level_6_signal

0x67f8,	// (0x0004854e) level_7_signal

0x67aa,	// (0x00048500) level_1_battery

0x67b7,	// (0x0004850d) level_2_battery

0x67c4,	// (0x0004851a) level_3_battery

0x67d1,	// (0x00048527) level_4_battery

0x67de,	// (0x00048534) level_5_battery

0x67eb,	// (0x00048541) level_6_battery

0x67f8,	// (0x0004854e) level_7_battery

0x3fa0,	// (0x00045cf6) list_menu_pane_ParamLimits

0x3fa0,	// (0x00045cf6) list_menu_pane

0x3fb6,	// (0x00045d0c) scroll_pane_cp25_ParamLimits

0x3fb6,	// (0x00045d0c) scroll_pane_cp25

0x3fcf,	// (0x00045d25) list_double2_graphic_pane_cp2_ParamLimits

0x3fcf,	// (0x00045d25) list_double2_graphic_pane_cp2

0x3fcf,	// (0x00045d25) list_double2_large_graphic_pane_cp2_ParamLimits

0x3fcf,	// (0x00045d25) list_double2_large_graphic_pane_cp2

0x3fcf,	// (0x00045d25) list_double2_pane_cp2_ParamLimits

0x3fcf,	// (0x00045d25) list_double2_pane_cp2

0x3fcf,	// (0x00045d25) list_double_graphic_pane_cp2_ParamLimits

0x3fcf,	// (0x00045d25) list_double_graphic_pane_cp2

0x3fcf,	// (0x00045d25) list_double_large_graphic_pane_cp2_ParamLimits

0x3fcf,	// (0x00045d25) list_double_large_graphic_pane_cp2

0x3fcf,	// (0x00045d25) list_double_number_pane_cp2_ParamLimits

0x3fcf,	// (0x00045d25) list_double_number_pane_cp2

0x3fcf,	// (0x00045d25) list_double_pane_cp2_ParamLimits

0x3fcf,	// (0x00045d25) list_double_pane_cp2

0x683a,	// (0x00048590) list_single_2graphic_pane_cp2_ParamLimits

0x683a,	// (0x00048590) list_single_2graphic_pane_cp2

0x683a,	// (0x00048590) list_single_graphic_heading_pane_cp2_ParamLimits

0x683a,	// (0x00048590) list_single_graphic_heading_pane_cp2

0x683a,	// (0x00048590) list_single_graphic_pane_cp2_ParamLimits

0x683a,	// (0x00048590) list_single_graphic_pane_cp2

0x683a,	// (0x00048590) list_single_heading_pane_cp2_ParamLimits

0x683a,	// (0x00048590) list_single_heading_pane_cp2

0x3fdf,	// (0x00045d35) list_single_large_graphic_pane_cp2_ParamLimits

0x3fdf,	// (0x00045d35) list_single_large_graphic_pane_cp2

0x683a,	// (0x00048590) list_single_number_heading_pane_cp2_ParamLimits

0x683a,	// (0x00048590) list_single_number_heading_pane_cp2

0x683a,	// (0x00048590) list_single_number_pane_cp2_ParamLimits

0x683a,	// (0x00048590) list_single_number_pane_cp2

0x683a,	// (0x00048590) list_single_pane_cp2_ParamLimits

0x683a,	// (0x00048590) list_single_pane_cp2

0x4053,	// (0x00045da9) bg_popup_sub_pane_cp22

0x6923,	// (0x00048679) popup_side_volume_key_window_g1

0x694d,	// (0x000486a3) popup_side_volume_key_window_t1

0x696b,	// (0x000486c1) volume_small_pane_cp1

0xd380,	// (0x0004f0d6) bg_popup_sub_pane_cp24_ParamLimits

0xd380,	// (0x0004f0d6) bg_popup_sub_pane_cp24

0x40c8,	// (0x00045e1e) fep_china_uni_candidate_pane_ParamLimits

0x40c8,	// (0x00045e1e) fep_china_uni_candidate_pane

0x40dc,	// (0x00045e32) fep_china_uni_entry_pane

0x40ec,	// (0x00045e42) popup_fep_china_uni_window_g1

0x4108,	// (0x00045e5e) fep_china_uni_entry_pane_g1

0x4112,	// (0x00045e68) fep_china_uni_entry_pane_g2

0x0001,

0xf72d,	// (0x00051483) fep_china_uni_entry_pane_g

0x411c,	// (0x00045e72) fep_entry_item_pane

0x4126,	// (0x00045e7c) fep_candidate_item_pane

0x412e,	// (0x00045e84) fep_china_uni_candidate_pane_g1

0x4138,	// (0x00045e8e) fep_china_uni_candidate_pane_g2

0x4140,	// (0x00045e96) fep_china_uni_candidate_pane_g3

0x4148,	// (0x00045e9e) fep_china_uni_candidate_pane_g4

0x0003,

0xf732,	// (0x00051488) fep_china_uni_candidate_pane_g

0xd1f5,	// (0x0004ef4b) fep_entry_item_pane_g1

0x4152,	// (0x00045ea8) fep_entry_item_pane_t1_ParamLimits

0x4152,	// (0x00045ea8) fep_entry_item_pane_t1

0x4168,	// (0x00045ebe) fep_candidate_item_pane_t1_ParamLimits

0x4168,	// (0x00045ebe) fep_candidate_item_pane_t1

0x417d,	// (0x00045ed3) fep_candidate_item_pane_t2_ParamLimits

0x417d,	// (0x00045ed3) fep_candidate_item_pane_t2

0x0001,

0xf73b,	// (0x00051491) fep_candidate_item_pane_t_ParamLimits

0xf73b,	// (0x00051491) fep_candidate_item_pane_t

0xd24d,	// (0x0004efa3) list_highlight_pane_cp31_ParamLimits

0xd24d,	// (0x0004efa3) list_highlight_pane_cp31

0x418f,	// (0x00045ee5) level_1_signal_lsc

0x4198,	// (0x00045eee) level_2_signal_lsc

0x41a1,	// (0x00045ef7) level_3_signal_lsc

0x41aa,	// (0x00045f00) level_4_signal_lsc

0x41b3,	// (0x00045f09) level_5_signal_lsc

0x41bc,	// (0x00045f12) level_6_signal_lsc

0x41c5,	// (0x00045f1b) level_7_signal_lsc

0x41c5,	// (0x00045f1b) level_1_battery_lsc

0x41ce,	// (0x00045f24) level_2_battery_lsc

0x41d7,	// (0x00045f2d) level_3_battery_lsc

0x41e0,	// (0x00045f36) level_4_battery_lsc

0x41e9,	// (0x00045f3f) level_5_battery_lsc

0x41f2,	// (0x00045f48) level_6_battery_lsc

0x418f,	// (0x00045ee5) level_7_battery_lsc

0x41fb,	// (0x00045f51) scroll_handle_focus_pane_g1

0x4204,	// (0x00045f5a) scroll_handle_focus_pane_g2

0x420d,	// (0x00045f63) scroll_handle_focus_pane_g3

0x0002,

0xf740,	// (0x00051496) scroll_handle_focus_pane_g

0x55fd,	// (0x00047353) list_single_2graphic_pane_g1_ParamLimits

0x55fd,	// (0x00047353) list_single_2graphic_pane_g1

0x6437,	// (0x0004818d) list_single_2graphic_pane_g2_ParamLimits

0x6437,	// (0x0004818d) list_single_2graphic_pane_g2

0x6419,	// (0x0004816f) list_single_2graphic_pane_g3_ParamLimits

0x6419,	// (0x0004816f) list_single_2graphic_pane_g3

0x6973,	// (0x000486c9) list_single_2graphic_pane_g4_ParamLimits

0x6973,	// (0x000486c9) list_single_2graphic_pane_g4

0x0003,

0xf747,	// (0x0005149d) list_single_2graphic_pane_g_ParamLimits

0xf747,	// (0x0005149d) list_single_2graphic_pane_g

0x5609,	// (0x0004735f) list_single_2graphic_pane_t1_ParamLimits

0x5609,	// (0x0004735f) list_single_2graphic_pane_t1

0x697f,	// (0x000486d5) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x697f,	// (0x000486d5) list_double2_graphic_large_graphic_pane_g1

0x5183,	// (0x00046ed9) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x5183,	// (0x00046ed9) list_double2_graphic_large_graphic_pane_g2

0x50d0,	// (0x00046e26) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x50d0,	// (0x00046e26) list_double2_graphic_large_graphic_pane_g3

0x5637,	// (0x0004738d) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5637,	// (0x0004738d) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf750,	// (0x000514a6) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf750,	// (0x000514a6) list_double2_graphic_large_graphic_pane_g

0x5643,	// (0x00047399) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5643,	// (0x00047399) list_double2_graphic_large_graphic_pane_t1

0x5659,	// (0x000473af) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5659,	// (0x000473af) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf759,	// (0x000514af) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf759,	// (0x000514af) list_double2_graphic_large_graphic_pane_t

0x43e3,	// (0x00046139) popup_fast_swap_window_ParamLimits

0x43e3,	// (0x00046139) popup_fast_swap_window

0x4401,	// (0x00046157) popup_side_volume_key_window

0x441f,	// (0x00046175) stacon_top_pane

0x4429,	// (0x0004617f) status_pane_ParamLimits

0x4429,	// (0x0004617f) status_pane

0x441f,	// (0x00046175) status_small_pane

0xd1ff,	// (0x0004ef55) control_pane

0xd1ff,	// (0x0004ef55) stacon_bottom_pane

0x0a2a,	// (0x00042780) scroll_pane_cp121

0x0a21,	// (0x00042777) set_content_pane

0x6991,	// (0x000486e7) bg_active_tab_pane_g1_cp1

0x4216,	// (0x00045f6c) bg_active_tab_pane_g2_cp1

0x699a,	// (0x000486f0) bg_active_tab_pane_g3_cp1

0x6991,	// (0x000486e7) bg_passive_tab_pane_g1_cp1

0x4216,	// (0x00045f6c) bg_passive_tab_pane_g2_cp1

0x699a,	// (0x000486f0) bg_passive_tab_pane_g3_cp1

0x69a3,	// (0x000486f9) bg_active_tab_pane_g1_cp2

0x4216,	// (0x00045f6c) bg_active_tab_pane_g2_cp2

0x69ac,	// (0x00048702) bg_active_tab_pane_g3_cp2

0x69a3,	// (0x000486f9) bg_passive_tab_pane_g1_cp2

0x4216,	// (0x00045f6c) bg_passive_tab_pane_g2_cp2

0x69ac,	// (0x00048702) bg_passive_tab_pane_g3_cp2

0x69b5,	// (0x0004870b) bg_active_tab_pane_g1_cp3

0x4216,	// (0x00045f6c) bg_active_tab_pane_g2_cp3

0x69be,	// (0x00048714) bg_active_tab_pane_g3_cp3

0x69b5,	// (0x0004870b) bg_passive_tab_pane_g1_cp3

0x4216,	// (0x00045f6c) bg_passive_tab_pane_g2_cp3

0x69be,	// (0x00048714) bg_passive_tab_pane_g3_cp3

0x69c7,	// (0x0004871d) bg_active_tab_pane_g1_cp4

0x4216,	// (0x00045f6c) bg_active_tab_pane_g2_cp4

0x69d2,	// (0x00048728) bg_active_tab_pane_g3_cp4

0x69c7,	// (0x0004871d) bg_passive_tab_pane_g1_cp4

0x4216,	// (0x00045f6c) bg_passive_tab_pane_g2_cp4

0x69d2,	// (0x00048728) bg_passive_tab_pane_g3_cp4

0x43aa,	// (0x00046100) bg_active_tab_pane_g1_cp5

0x4216,	// (0x00045f6c) bg_active_tab_pane_g2_cp5

0x43a1,	// (0x000460f7) bg_active_tab_pane_g3_cp5

0x43aa,	// (0x00046100) bg_passive_tab_pane_g1_cp5

0x4216,	// (0x00045f6c) bg_passive_tab_pane_g2_cp5

0x43a1,	// (0x000460f7) bg_passive_tab_pane_g3_cp5

0x6b21,	// (0x00048877) list_set_graphic_pane_ParamLimits

0x6b21,	// (0x00048877) list_set_graphic_pane

0xd1ff,	// (0x0004ef55) bg_set_opt_pane_cp4

0x6b36,	// (0x0004888c) list_set_graphic_pane_g1_ParamLimits

0x6b36,	// (0x0004888c) list_set_graphic_pane_g1

0x6b42,	// (0x00048898) list_set_graphic_pane_g2_ParamLimits

0x6b42,	// (0x00048898) list_set_graphic_pane_g2

0x0001,

0xf75e,	// (0x000514b4) list_set_graphic_pane_g_ParamLimits

0xf75e,	// (0x000514b4) list_set_graphic_pane_g

0x0009,

0xfadd,	// (0x00051833) volume_small_pane_cp_g

0x6b66,	// (0x000488bc) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x6b66,	// (0x000488bc) list_double2_large_graphic_pane_g1_cp2

0x6b74,	// (0x000488ca) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x6b74,	// (0x000488ca) list_double2_large_graphic_pane_g2_cp2

0x43b3,	// (0x00046109) list_double2_large_graphic_pane_g3_cp2

0x43bb,	// (0x00046111) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x43bb,	// (0x00046111) list_double2_large_graphic_pane_t1_cp2

0x43d1,	// (0x00046127) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x43d1,	// (0x00046127) list_double2_large_graphic_pane_t2_cp2

0xa20b,	// (0x0004bf61) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa20b,	// (0x0004bf61) list_double_large_graphic_pane_g1_cp2

0xa21e,	// (0x0004bf74) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa21e,	// (0x0004bf74) list_double_large_graphic_pane_g2_cp2

0x8718,	// (0x0004a46e) list_double_large_graphic_pane_g3_cp2

0xa22f,	// (0x0004bf85) list_double_large_graphic_pane_g4_cp

0xa237,	// (0x0004bf8d) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa237,	// (0x0004bf8d) list_double_large_graphic_pane_t1_cp2

0xa24e,	// (0x0004bfa4) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa24e,	// (0x0004bfa4) list_double_large_graphic_pane_t2_cp2

0x6b85,	// (0x000488db) list_double2_graphic_pane_g1_cp2_ParamLimits

0x6b85,	// (0x000488db) list_double2_graphic_pane_g1_cp2

0x6b93,	// (0x000488e9) list_double2_graphic_pane_g2_cp2_ParamLimits

0x6b93,	// (0x000488e9) list_double2_graphic_pane_g2_cp2

0x6ba4,	// (0x000488fa) list_double2_graphic_pane_g3_cp2

0x4437,	// (0x0004618d) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4437,	// (0x0004618d) list_double2_graphic_pane_t1_cp2

0x444d,	// (0x000461a3) list_double2_graphic_pane_t2_cp2_ParamLimits

0x444d,	// (0x000461a3) list_double2_graphic_pane_t2_cp2

0x445f,	// (0x000461b5) list_single_number_heading_pane_g1_cp2_ParamLimits

0x445f,	// (0x000461b5) list_single_number_heading_pane_g1_cp2

0x8665,	// (0x0004a3bb) list_single_number_heading_pane_g2_cp2

0x866d,	// (0x0004a3c3) list_single_number_heading_pane_t1_cp2_ParamLimits

0x866d,	// (0x0004a3c3) list_single_number_heading_pane_t1_cp2

0x8683,	// (0x0004a3d9) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8683,	// (0x0004a3d9) list_single_number_heading_pane_t2_cp2

0x8697,	// (0x0004a3ed) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8697,	// (0x0004a3ed) list_single_number_heading_pane_t3_cp2

0x445f,	// (0x000461b5) list_single_heading_pane_g1_cp2_ParamLimits

0x445f,	// (0x000461b5) list_single_heading_pane_g1_cp2

0x8665,	// (0x0004a3bb) list_single_heading_pane_g2_cp2

0x866d,	// (0x0004a3c3) list_single_heading_pane_t1_cp2_ParamLimits

0x866d,	// (0x0004a3c3) list_single_heading_pane_t1_cp2

0xa005,	// (0x0004bd5b) list_single_heading_pane_t2_cp2_ParamLimits

0xa005,	// (0x0004bd5b) list_single_heading_pane_t2_cp2

0x9f47,	// (0x0004bc9d) list_double_graphic_pane_g1_cp2_ParamLimits

0x9f47,	// (0x0004bc9d) list_double_graphic_pane_g1_cp2

0x9f53,	// (0x0004bca9) list_double_graphic_pane_g2_cp2_ParamLimits

0x9f53,	// (0x0004bca9) list_double_graphic_pane_g2_cp2

0x9f62,	// (0x0004bcb8) list_double_graphic_pane_g3_cp2

0x9f6a,	// (0x0004bcc0) list_double_graphic_pane_t1_cp2_ParamLimits

0x9f6a,	// (0x0004bcc0) list_double_graphic_pane_t1_cp2

0x9f80,	// (0x0004bcd6) list_double_graphic_pane_t2_cp2_ParamLimits

0x9f80,	// (0x0004bcd6) list_double_graphic_pane_t2_cp2

0x870c,	// (0x0004a462) list_double_number_pane_g1_cp2_ParamLimits

0x870c,	// (0x0004a462) list_double_number_pane_g1_cp2

0x8718,	// (0x0004a46e) list_double_number_pane_g2_cp2

0x9f0b,	// (0x0004bc61) list_double_number_pane_t1_cp2_ParamLimits

0x9f0b,	// (0x0004bc61) list_double_number_pane_t1_cp2

0x9f1f,	// (0x0004bc75) list_double_number_pane_t2_cp2_ParamLimits

0x9f1f,	// (0x0004bc75) list_double_number_pane_t2_cp2

0x9f35,	// (0x0004bc8b) list_double_number_pane_t3_cp2_ParamLimits

0x9f35,	// (0x0004bc8b) list_double_number_pane_t3_cp2

0x9df4,	// (0x0004bb4a) list_single_graphic_pane_g1_cp2_ParamLimits

0x9df4,	// (0x0004bb4a) list_single_graphic_pane_g1_cp2

0x8772,	// (0x0004a4c8) list_single_graphic_pane_g2_cp2_ParamLimits

0x8772,	// (0x0004a4c8) list_single_graphic_pane_g2_cp2

0x877e,	// (0x0004a4d4) list_single_graphic_pane_g3_cp2

0x9dca,	// (0x0004bb20) list_single_graphic_pane_t1_cp2_ParamLimits

0x9dca,	// (0x0004bb20) list_single_graphic_pane_t1_cp2

0x8772,	// (0x0004a4c8) list_single_number_pane_g1_cp2_ParamLimits

0x8772,	// (0x0004a4c8) list_single_number_pane_g1_cp2

0x877e,	// (0x0004a4d4) list_single_number_pane_g2_cp2

0x9dca,	// (0x0004bb20) list_single_number_pane_t1_cp2_ParamLimits

0x9dca,	// (0x0004bb20) list_single_number_pane_t1_cp2

0x9de0,	// (0x0004bb36) list_single_number_pane_t2_cp2_ParamLimits

0x9de0,	// (0x0004bb36) list_single_number_pane_t2_cp2

0x6b74,	// (0x000488ca) list_double2_pane_g1_cp2_ParamLimits

0x6b74,	// (0x000488ca) list_double2_pane_g1_cp2

0x43b3,	// (0x00046109) list_double2_pane_g2_cp2

0x86e4,	// (0x0004a43a) list_double2_pane_t1_cp2_ParamLimits

0x86e4,	// (0x0004a43a) list_double2_pane_t1_cp2

0x86fa,	// (0x0004a450) list_double2_pane_t2_cp2_ParamLimits

0x86fa,	// (0x0004a450) list_double2_pane_t2_cp2

0x870c,	// (0x0004a462) list_double_pane_g1_cp2_ParamLimits

0x870c,	// (0x0004a462) list_double_pane_g1_cp2

0x8718,	// (0x0004a46e) list_double_pane_g2_cp2

0x8720,	// (0x0004a476) list_double_pane_t1_cp2_ParamLimits

0x8720,	// (0x0004a476) list_double_pane_t1_cp2

0x8736,	// (0x0004a48c) list_double_pane_t2_cp2_ParamLimits

0x8736,	// (0x0004a48c) list_double_pane_t2_cp2

0x8762,	// (0x0004a4b8) list_single_pane_cp2_g3

0x8772,	// (0x0004a4c8) list_single_pane_g1_cp2_ParamLimits

0x8772,	// (0x0004a4c8) list_single_pane_g1_cp2

0x877e,	// (0x0004a4d4) list_single_pane_g2_cp2

0x8786,	// (0x0004a4dc) list_single_pane_t1_cp2_ParamLimits

0x8786,	// (0x0004a4dc) list_single_pane_t1_cp2

0x879e,	// (0x0004a4f4) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x879e,	// (0x0004a4f4) list_single_large_graphic_pane_g1_cp2

0x87ac,	// (0x0004a502) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x87ac,	// (0x0004a502) list_single_large_graphic_pane_g2_cp2

0x87b8,	// (0x0004a50e) list_single_large_graphic_pane_g3_cp2

0x87c0,	// (0x0004a516) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x87c0,	// (0x0004a516) list_single_large_graphic_pane_g4_cp1

0x87da,	// (0x0004a530) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x87da,	// (0x0004a530) list_single_large_graphic_pane_t1_cp2

0x9d94,	// (0x0004baea) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9d94,	// (0x0004baea) list_single_graphic_heading_pane_g1_cp2

0x9d61,	// (0x0004bab7) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9d61,	// (0x0004bab7) list_single_graphic_heading_pane_g4_cp2

0x877e,	// (0x0004a4d4) list_single_graphic_heading_pane_g5_cp2

0x9da0,	// (0x0004baf6) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x9da0,	// (0x0004baf6) list_single_graphic_heading_pane_t1_cp2

0x9db6,	// (0x0004bb0c) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9db6,	// (0x0004bb0c) list_single_graphic_heading_pane_t2_cp2

0x9d55,	// (0x0004baab) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9d55,	// (0x0004baab) list_single_2graphic_pane_g1_cp2

0x9d61,	// (0x0004bab7) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9d61,	// (0x0004bab7) list_single_2graphic_pane_g2_cp2

0x877e,	// (0x0004a4d4) list_single_2graphic_pane_g3_cp2

0x9d72,	// (0x0004bac8) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9d72,	// (0x0004bac8) list_single_2graphic_pane_g4_cp2

0x9d7e,	// (0x0004bad4) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9d7e,	// (0x0004bad4) list_single_2graphic_pane_t1_cp2

0xd1f5,	// (0x0004ef4b) list_highlight_pane_g10_cp1

0x992d,	// (0x0004b683) list_highlight_pane_g1_cp1

0x9935,	// (0x0004b68b) list_highlight_pane_g2_cp1

0x993d,	// (0x0004b693) list_highlight_pane_g3_cp1

0x9945,	// (0x0004b69b) list_highlight_pane_g4_cp1

0x994d,	// (0x0004b6a3) list_highlight_pane_g5_cp1

0x9955,	// (0x0004b6ab) list_highlight_pane_g6_cp1

0x995d,	// (0x0004b6b3) list_highlight_pane_g7_cp1

0x9965,	// (0x0004b6bb) list_highlight_pane_g8_cp1

0x996d,	// (0x0004b6c3) list_highlight_pane_g9_cp1

0x984d,	// (0x0004b5a3) form_field_slider_pane_t3

0x985b,	// (0x0004b5b1) form_field_slider_pane_t4

0x9869,	// (0x0004b5bf) slider_form_pane_ParamLimits

0x9869,	// (0x0004b5bf) slider_form_pane

0xd1ff,	// (0x0004ef55) control_abbreviations

0xd1ff,	// (0x0004ef55) control_conventions

0xd1ff,	// (0x0004ef55) control_definitions

0xd1ff,	// (0x0004ef55) format_table_attribute

0xa05b,	// (0x0004bdb1) bg_popup_preview_window_pane_g9

0xd1ff,	// (0x0004ef55) format_table_data2

0xd1ff,	// (0x0004ef55) format_table_data3

0xd1ff,	// (0x0004ef55) format_table_data_example

0x0008,

0xd1ff,	// (0x0004ef55) intro_purpose

0xf8fa,	// (0x00051650) bg_popup_preview_window_pane_g

0xd1ff,	// (0x0004ef55) texts_category

0xd1ff,	// (0x0004ef55) texts_graphics

0x87f0,	// (0x0004a546) text_digital

0x87ff,	// (0x0004a555) text_primary

0x880e,	// (0x0004a564) text_primary_small

0x881d,	// (0x0004a573) text_secondary

0x882c,	// (0x0004a582) text_title

0xa7d7,	// (0x0004c52d) bg_passive_tab_pane_g1_cp3_srt

0x4216,	// (0x00045f6c) bg_passive_tab_pane_g2_cp3_srt

0xa7e0,	// (0x0004c536) bg_passive_tab_pane_g3_cp3_srt

0xd24d,	// (0x0004efa3) bg_active_tab_pane_cp3_srt_ParamLimits

0xd24d,	// (0x0004efa3) bg_active_tab_pane_cp3_srt

0xa7e9,	// (0x0004c53f) tabs_4_active_pane_srt_g1

0xa7f1,	// (0x0004c547) tabs_4_active_pane_srt_t1_ParamLimits

0xa7f1,	// (0x0004c547) tabs_4_active_pane_srt_t1

0xa7d7,	// (0x0004c52d) bg_active_tab_pane_g1_cp3_copy1

0x4216,	// (0x00045f6c) bg_active_tab_pane_g2_cp3_copy1

0xa7e0,	// (0x0004c536) bg_active_tab_pane_g3_cp3_copy1

0xd24d,	// (0x0004efa3) tabs_2_long_active_pane_srt_ParamLimits

0xd24d,	// (0x0004efa3) tabs_2_long_active_pane_srt

0xd24d,	// (0x0004efa3) tabs_2_long_passive_pane_srt_ParamLimits

0xd24d,	// (0x0004efa3) tabs_2_long_passive_pane_srt

0x6539,	// (0x0004828f) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6539,	// (0x0004828f) bg_passive_tab_pane_cp4_srt

0xa4ab,	// (0x0004c201) bg_passive_tab_pane_g1_cp4_srt

0x4216,	// (0x00045f6c) bg_passive_tab_pane_g2_cp4_srt

0xa4b4,	// (0x0004c20a) bg_passive_tab_pane_g3_cp4_srt

0x18c9,	// (0x0004361f) bg_active_tab_pane_cp4_srt_ParamLimits

0x18c9,	// (0x0004361f) bg_active_tab_pane_cp4_srt

0xa4bd,	// (0x0004c213) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa4bd,	// (0x0004c213) tabs_2_long_active_pane_srt_t1

0xa4ab,	// (0x0004c201) bg_active_tab_pane_g1_cp4_srt

0x4216,	// (0x00045f6c) bg_active_tab_pane_g2_cp4_srt

0xa4b4,	// (0x0004c20a) bg_active_tab_pane_g3_cp4_srt

0xd380,	// (0x0004f0d6) tabs_3_long_active_pane_srt_ParamLimits

0xd380,	// (0x0004f0d6) tabs_3_long_active_pane_srt

0xd380,	// (0x0004f0d6) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xd380,	// (0x0004f0d6) tabs_3_long_passive_pane_cp_srt

0xd380,	// (0x0004f0d6) tabs_3_long_passive_pane_srt_ParamLimits

0xd380,	// (0x0004f0d6) tabs_3_long_passive_pane_srt

0x6539,	// (0x0004828f) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6539,	// (0x0004828f) bg_passive_tab_pane_cp5_srt

0x43aa,	// (0x00046100) bg_passive_tab_pane_g1_cp5_srt

0x4216,	// (0x00045f6c) bg_passive_tab_pane_g2_cp5_srt

0x43a1,	// (0x000460f7) bg_passive_tab_pane_g3_cp5_srt

0x18c9,	// (0x0004361f) bg_active_tab_pane_cp5_srt_ParamLimits

0x18c9,	// (0x0004361f) bg_active_tab_pane_cp5_srt

0xa499,	// (0x0004c1ef) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa499,	// (0x0004c1ef) tabs_3_long_active_pane_srt_t1

0x43aa,	// (0x00046100) bg_active_tab_pane_g1_cp5_srt

0x4216,	// (0x00045f6c) bg_active_tab_pane_g2_cp5_srt

0x43a1,	// (0x000460f7) bg_active_tab_pane_g3_cp5_srt

0xa48b,	// (0x0004c1e1) navi_text_pane_srt_t1

0xa483,	// (0x0004c1d9) navi_icon_pane_srt_g1

0x89f7,	// (0x0004a74d) midp_editing_number_pane_srt

0x883b,	// (0x0004a591) midp_ticker_pane_srt

0x89ff,	// (0x0004a755) midp_ticker_pane_srt_g1

0x8a07,	// (0x0004a75d) midp_ticker_pane_srt_g2

0x0001,

0xf77d,	// (0x000514d3) midp_ticker_pane_srt_g

0x8a0f,	// (0x0004a765) midp_ticker_pane_srt_t1

0xa474,	// (0x0004c1ca) midp_editing_number_pane_t1_copy1

0x6539,	// (0x0004828f) listscroll_midp_pane

0x6539,	// (0x0004828f) midp_form_pane

0x88a5,	// (0x0004a5fb) midp_info_popup_window_ParamLimits

0x88a5,	// (0x0004a5fb) midp_info_popup_window

0x0aff,	// (0x00042855) bg_popup_sub_pane_cp50_ParamLimits

0x0aff,	// (0x00042855) bg_popup_sub_pane_cp50

0x9563,	// (0x0004b2b9) listscroll_midp_info_pane_ParamLimits

0x9563,	// (0x0004b2b9) listscroll_midp_info_pane

0x954b,	// (0x0004b2a1) listscroll_form_midp_pane_ParamLimits

0x954b,	// (0x0004b2a1) listscroll_form_midp_pane

0x9557,	// (0x0004b2ad) scroll_bar_cp050

0x952b,	// (0x0004b281) list_midp_pane

0xb2bc,	// (0x0004d012) signal_pane_g2_cp

0x9465,	// (0x0004b1bb) listscroll_midp_info_pane_t1_ParamLimits

0x9465,	// (0x0004b1bb) listscroll_midp_info_pane_t1

0x947d,	// (0x0004b1d3) listscroll_midp_info_pane_t2_ParamLimits

0x947d,	// (0x0004b1d3) listscroll_midp_info_pane_t2

0x94bb,	// (0x0004b211) listscroll_midp_info_pane_t3_ParamLimits

0x94bb,	// (0x0004b211) listscroll_midp_info_pane_t3

0x94f5,	// (0x0004b24b) listscroll_midp_info_pane_t4_ParamLimits

0x94f5,	// (0x0004b24b) listscroll_midp_info_pane_t4

0x0003,

0xf835,	// (0x0005158b) listscroll_midp_info_pane_t_ParamLimits

0xf835,	// (0x0005158b) listscroll_midp_info_pane_t

0x0b7f,	// (0x000428d5) scroll_pane_cp21

0x93ff,	// (0x0004b155) form_midp_field_choice_group_pane

0x9408,	// (0x0004b15e) form_midp_field_text_pane

0x944b,	// (0x0004b1a1) form_midp_field_time_pane

0x9453,	// (0x0004b1a9) form_midp_gauge_slider_pane

0x945c,	// (0x0004b1b2) form_midp_gauge_wait_pane

0xd1ff,	// (0x0004ef55) form_midp_image_pane

0x574a,	// (0x000474a0) list_single_midp_pane_ParamLimits

0x574a,	// (0x000474a0) list_single_midp_pane

0x93c3,	// (0x0004b119) form_midp_field_text_pane_t1

0x91af,	// (0x0004af05) input_focus_pane_cp050

0x93ee,	// (0x0004b144) list_midp_form_text_pane

0x9392,	// (0x0004b0e8) form_midp_field_choice_group_pane_t1

0x93a0,	// (0x0004b0f6) input_focus_pane_cp051

0x93b4,	// (0x0004b10a) list_midp_choice_pane

0xd1ff,	// (0x0004ef55) status_idle_pane

0x9376,	// (0x0004b0cc) form_midp_field_time_pane_t1

0xd1f5,	// (0x0004ef4b) wait_anim_pane_g2_copy1

0x9384,	// (0x0004b0da) form_midp_field_time_pane_t2

0x0001,

0x8955,	// (0x0004a6ab) aid_navinavi_width_2_pane

0xf830,	// (0x00051586) form_midp_field_time_pane_t

0xd1ff,	// (0x0004ef55) input_focus_pane_cp052

0xd1ff,	// (0x0004ef55) bg_input_focus_pane_cp040

0x9336,	// (0x0004b08c) form_midp_gauge_slider_pane_t1

0x9344,	// (0x0004b09a) form_midp_gauge_slider_pane_t2

0x9352,	// (0x0004b0a8) form_midp_gauge_slider_pane_t3

0x9360,	// (0x0004b0b6) form_midp_gauge_slider_pane_t4

0x0003,

0xf827,	// (0x0005157d) form_midp_gauge_slider_pane_t

0x936e,	// (0x0004b0c4) form_midp_slider_pane

0xd24d,	// (0x0004efa3) bg_input_focus_pane_cp041_ParamLimits

0xd24d,	// (0x0004efa3) bg_input_focus_pane_cp041

0x9303,	// (0x0004b059) form_midp_gauge_wait_pane_t1_ParamLimits

0x9303,	// (0x0004b059) form_midp_gauge_wait_pane_t1

0x9315,	// (0x0004b06b) form_midp_gauge_wait_pane_t2_ParamLimits

0x9315,	// (0x0004b06b) form_midp_gauge_wait_pane_t2

0x0001,

0xf822,	// (0x00051578) form_midp_gauge_wait_pane_t_ParamLimits

0xf822,	// (0x00051578) form_midp_gauge_wait_pane_t

0x9327,	// (0x0004b07d) form_midp_wait_pane_ParamLimits

0x9327,	// (0x0004b07d) form_midp_wait_pane

0x92cb,	// (0x0004b021) form_midp_image_pane_g1

0x92d4,	// (0x0004b02a) form_midp_image_pane_t1

0x92e3,	// (0x0004b039) form_midp_image_pane_t2

0x92f2,	// (0x0004b048) form_midp_image_pane_t3

0x0002,

0xf81b,	// (0x00051571) form_midp_image_pane_t

0x92c2,	// (0x0004b018) list_single_midp_pane_g1

0x573b,	// (0x00047491) list_single_midp_pane_t1

0x92a8,	// (0x0004affe) list_midp_form_item_pane_ParamLimits

0x92a8,	// (0x0004affe) list_midp_form_item_pane

0x88fd,	// (0x0004a653) list_midp_form_item_pane_t1

0x890c,	// (0x0004a662) midp_ticker_pane_g1

0x8918,	// (0x0004a66e) midp_ticker_pane_g2

0x0001,

0xf763,	// (0x000514b9) midp_ticker_pane_g

0x8924,	// (0x0004a67a) midp_ticker_pane_t1

0xa6e7,	// (0x0004c43d) midp_editing_number_pane_t1

0xa6c5,	// (0x0004c41b) midp_editing_number_pane

0xa6d4,	// (0x0004c42a) midp_ticker_pane

0xa464,	// (0x0004c1ba) ai_message_heading_pane

0xd1ff,	// (0x0004ef55) bg_popup_window_pane_cp14

0xa46c,	// (0x0004c1c2) listscroll_ai_message_pane

0xa3ea,	// (0x0004c140) ai_message_heading_pane_g1_ParamLimits

0xa3ea,	// (0x0004c140) ai_message_heading_pane_g1

0xa3f6,	// (0x0004c14c) ai_message_heading_pane_g2_ParamLimits

0xa3f6,	// (0x0004c14c) ai_message_heading_pane_g2

0xa404,	// (0x0004c15a) ai_message_heading_pane_g3_ParamLimits

0xa404,	// (0x0004c15a) ai_message_heading_pane_g3

0xa410,	// (0x0004c166) ai_message_heading_pane_g4_ParamLimits

0xa410,	// (0x0004c166) ai_message_heading_pane_g4

0x0003,

0xf95c,	// (0x000516b2) ai_message_heading_pane_g_ParamLimits

0xf95c,	// (0x000516b2) ai_message_heading_pane_g

0xa41c,	// (0x0004c172) ai_message_heading_pane_t1_ParamLimits

0xa41c,	// (0x0004c172) ai_message_heading_pane_t1

0xa436,	// (0x0004c18c) ai_message_heading_pane_t2_ParamLimits

0xa436,	// (0x0004c18c) ai_message_heading_pane_t2

0x0001,

0xf965,	// (0x000516bb) ai_message_heading_pane_t_ParamLimits

0xf965,	// (0x000516bb) ai_message_heading_pane_t

0xa44a,	// (0x0004c1a0) bg_popup_heading_pane_cp1_ParamLimits

0xa44a,	// (0x0004c1a0) bg_popup_heading_pane_cp1

0xa3d8,	// (0x0004c12e) list_ai_message_pane_ParamLimits

0xa3d8,	// (0x0004c12e) list_ai_message_pane

0x0b7f,	// (0x000428d5) scroll_pane_cp10

0xa374,	// (0x0004c0ca) list_ai_message_pane_g1

0xa37c,	// (0x0004c0d2) list_ai_message_pane_g2

0x0001,

0xf939,	// (0x0005168f) list_ai_message_pane_g

0xa384,	// (0x0004c0da) list_ai_message_pane_t1_ParamLimits

0xa384,	// (0x0004c0da) list_ai_message_pane_t1

0xa399,	// (0x0004c0ef) list_ai_message_pane_t2_ParamLimits

0xa399,	// (0x0004c0ef) list_ai_message_pane_t2

0xa3ae,	// (0x0004c104) list_ai_message_pane_t3_ParamLimits

0xa3ae,	// (0x0004c104) list_ai_message_pane_t3

0xa3c3,	// (0x0004c119) list_ai_message_pane_t4_ParamLimits

0xa3c3,	// (0x0004c119) list_ai_message_pane_t4

0x0003,

0xf93e,	// (0x00051694) list_ai_message_pane_t_ParamLimits

0xf93e,	// (0x00051694) list_ai_message_pane_t

0xa35d,	// (0x0004c0b3) cell_ai_soft_ind_pane_ParamLimits

0xa35d,	// (0x0004c0b3) cell_ai_soft_ind_pane

0x8936,	// (0x0004a68c) cell_ai_soft_ind_pane_g1_ParamLimits

0x8936,	// (0x0004a68c) cell_ai_soft_ind_pane_g1

0xd1ff,	// (0x0004ef55) grid_highlight_cp1

0x8943,	// (0x0004a699) text_secondary_cp56_ParamLimits

0x8943,	// (0x0004a699) text_secondary_cp56

0xa332,	// (0x0004c088) example_general_pane_ParamLimits

0xa332,	// (0x0004c088) example_general_pane

0xa33e,	// (0x0004c094) example_parent_pane_g1_ParamLimits

0xa33e,	// (0x0004c094) example_parent_pane_g1

0xa34a,	// (0x0004c0a0) example_parent_pane_t1_ParamLimits

0xa34a,	// (0x0004c0a0) example_parent_pane_t1

0x7174,	// (0x00048eca) popup_preview_text_window_ParamLimits

0x7174,	// (0x00048eca) popup_preview_text_window

0x876a,	// (0x0004a4c0) list_single_pane_cp2_g4

0xd436,	// (0x0004f18c) bg_popup_preview_window_pane_ParamLimits

0xd436,	// (0x0004f18c) bg_popup_preview_window_pane

0xa065,	// (0x0004bdbb) popup_preview_text_window_t1_ParamLimits

0xa065,	// (0x0004bdbb) popup_preview_text_window_t1

0xa083,	// (0x0004bdd9) popup_preview_text_window_t2_ParamLimits

0xa083,	// (0x0004bdd9) popup_preview_text_window_t2

0xa0cc,	// (0x0004be22) popup_preview_text_window_t3_ParamLimits

0xa0cc,	// (0x0004be22) popup_preview_text_window_t3

0xa111,	// (0x0004be67) popup_preview_text_window_t4_ParamLimits

0xa111,	// (0x0004be67) popup_preview_text_window_t4

0x0004,

0xf90d,	// (0x00051663) popup_preview_text_window_t_ParamLimits

0xf90d,	// (0x00051663) popup_preview_text_window_t

0xa18f,	// (0x0004bee5) scroll_pane_cp11

0x90b3,	// (0x0004ae09) bg_popup_preview_window_pane_g1

0xa019,	// (0x0004bd6f) bg_popup_preview_window_pane_g2

0xa023,	// (0x0004bd79) bg_popup_preview_window_pane_g3

0xa02d,	// (0x0004bd83) bg_popup_preview_window_pane_g4

0xa037,	// (0x0004bd8d) bg_popup_preview_window_pane_g5

0xa041,	// (0x0004bd97) bg_popup_preview_window_pane_g6

0xa049,	// (0x0004bd9f) bg_popup_preview_window_pane_g7

0xa051,	// (0x0004bda7) bg_popup_preview_window_pane_g8

0x5ca5,	// (0x000479fb) aid_popup_width_pane

0x7150,	// (0x00048ea6) popup_midp_note_alarm_window_ParamLimits

0x7150,	// (0x00048ea6) popup_midp_note_alarm_window

0x0a3b,	// (0x00042791) data_form_pane_ParamLimits

0x5479,	// (0x000471cf) form_field_data_pane_g1

0x5483,	// (0x000471d9) form_field_data_pane_t1_ParamLimits

0x0a47,	// (0x0004279d) input_focus_pane_ParamLimits

0x0a55,	// (0x000427ab) data_form_wide_pane_ParamLimits

0x549d,	// (0x000471f3) form_field_data_wide_pane_g1

0x54a9,	// (0x000471ff) form_field_data_wide_pane_t1_ParamLimits

0x07c2,	// (0x00042518) input_focus_pane_cp6_ParamLimits

0x64fe,	// (0x00048254) input_popup_find_pane_g1_ParamLimits

0x64fe,	// (0x00048254) input_popup_find_pane_g1

0x6657,	// (0x000483ad) aid_navi_side_left_pane

0x666c,	// (0x000483c2) aid_navi_side_right_pane

0x9a28,	// (0x0004b77e) bg_popup_window_pane_cp30_ParamLimits

0x9a28,	// (0x0004b77e) bg_popup_window_pane_cp30

0x9aa2,	// (0x0004b7f8) popup_midp_note_alarm_window_g1_ParamLimits

0x9aa2,	// (0x0004b7f8) popup_midp_note_alarm_window_g1

0x9ad2,	// (0x0004b828) popup_midp_note_alarm_window_t1_ParamLimits

0x9ad2,	// (0x0004b828) popup_midp_note_alarm_window_t1

0x9b73,	// (0x0004b8c9) popup_midp_note_alarm_window_t2_ParamLimits

0x9b73,	// (0x0004b8c9) popup_midp_note_alarm_window_t2

0x9c21,	// (0x0004b977) popup_midp_note_alarm_window_t3_ParamLimits

0x9c21,	// (0x0004b977) popup_midp_note_alarm_window_t3

0x9c53,	// (0x0004b9a9) popup_midp_note_alarm_window_t4_ParamLimits

0x9c53,	// (0x0004b9a9) popup_midp_note_alarm_window_t4

0x9c79,	// (0x0004b9cf) popup_midp_note_alarm_window_t5_ParamLimits

0x9c79,	// (0x0004b9cf) popup_midp_note_alarm_window_t5

0x000a,

0xf8aa,	// (0x00051600) popup_midp_note_alarm_window_t_ParamLimits

0xf8aa,	// (0x00051600) popup_midp_note_alarm_window_t

0x9d25,	// (0x0004ba7b) wait_bar_pane_cp1_ParamLimits

0x9d25,	// (0x0004ba7b) wait_bar_pane_cp1

0xd1ff,	// (0x0004ef55) wait_anim_pane_copy1

0xd1ff,	// (0x0004ef55) wait_border_pane_copy1

0x970d,	// (0x0004b463) wait_border_pane_g1_copy1

0x54c3,	// (0x00047219) form_field_popup_pane_g1

0x54cb,	// (0x00047221) form_field_popup_pane_t1_ParamLimits

0x0a47,	// (0x0004279d) input_focus_pane_cp7_ParamLimits

0x0a81,	// (0x000427d7) list_form_pane_ParamLimits

0x54e5,	// (0x0004723b) form_field_popup_wide_pane_g1

0x54ed,	// (0x00047243) form_field_popup_wide_pane_t1_ParamLimits

0x0a47,	// (0x0004279d) input_focus_pane_cp8_ParamLimits

0x0a8d,	// (0x000427e3) list_form_wide_pane_ParamLimits

0xa864,	// (0x0004c5ba) aid_size_cell_graphic_pane

0x5579,	// (0x000472cf) data_form_pane_t1_ParamLimits

0x5791,	// (0x000474e7) data_form_wide_pane_t1_ParamLimits

0x8c60,	// (0x0004a9b6) bg_status_flat_pane

0x60ba,	// (0x00047e10) title_pane_t1_ParamLimits

0xd215,	// (0x0004ef6b) title_pane_t2_ParamLimits

0xd23b,	// (0x0004ef91) title_pane_t3_ParamLimits

0xf55d,	// (0x000512b3) title_pane_t_ParamLimits

0x67aa,	// (0x00048500) level_1_signal_ParamLimits

0x67b7,	// (0x0004850d) level_2_signal_ParamLimits

0x67c4,	// (0x0004851a) level_3_signal_ParamLimits

0x67d1,	// (0x00048527) level_4_signal_ParamLimits

0x67de,	// (0x00048534) level_5_signal_ParamLimits

0x67eb,	// (0x00048541) level_6_signal_ParamLimits

0x67f8,	// (0x0004854e) level_7_signal_ParamLimits

0x67aa,	// (0x00048500) level_1_battery_ParamLimits

0x67b7,	// (0x0004850d) level_2_battery_ParamLimits

0x67c4,	// (0x0004851a) level_3_battery_ParamLimits

0x67d1,	// (0x00048527) level_4_battery_ParamLimits

0x67de,	// (0x00048534) level_5_battery_ParamLimits

0x67eb,	// (0x00048541) level_6_battery_ParamLimits

0x67f8,	// (0x0004854e) level_7_battery_ParamLimits

0x992d,	// (0x0004b683) bg_status_flat_pane_g1

0x9935,	// (0x0004b68b) bg_status_flat_pane_g2

0x993d,	// (0x0004b693) bg_status_flat_pane_g3

0x9945,	// (0x0004b69b) bg_status_flat_pane_g4

0x994d,	// (0x0004b6a3) bg_status_flat_pane_g5

0x9955,	// (0x0004b6ab) bg_status_flat_pane_g6

0x995d,	// (0x0004b6b3) bg_status_flat_pane_g7

0x612a,	// (0x00047e80) tabs_3_active_pane_t1_ParamLimits

0x612a,	// (0x00047e80) tabs_3_passive_pane_t1_ParamLimits

0x6144,	// (0x00047e9a) tabs_4_active_pane_t1_ParamLimits

0x6144,	// (0x00047e9a) tabs_4_1_passive_pane_t1_ParamLimits

0x6514,	// (0x0004826a) tabs_2_active_pane_t1_ParamLimits

0x6514,	// (0x0004826a) tabs_2_passive_pane_t1_ParamLimits

0x18c9,	// (0x0004361f) bg_active_tab_pane_cp4_ParamLimits

0x6526,	// (0x0004827c) tabs_2_long_active_pane_t1_ParamLimits

0x6539,	// (0x0004828f) bg_passive_tab_pane_cp4_ParamLimits

0x7464,	// (0x000491ba) list_single_midp_graphic_pane_t1_ParamLimits

0x18c9,	// (0x0004361f) bg_active_tab_pane_cp5_ParamLimits

0x6545,	// (0x0004829b) tabs_3_long_active_pane_t1_ParamLimits

0x6539,	// (0x0004828f) bg_passive_tab_pane_cp5_ParamLimits

0x7464,	// (0x000491ba) list_single_midp_graphic_pane_t1

0x8c60,	// (0x0004a9b6) bg_status_flat_pane_ParamLimits

0x8d2b,	// (0x0004aa81) indicator_pane_cp2_ParamLimits

0x8d2b,	// (0x0004aa81) indicator_pane_cp2

0x8e6e,	// (0x0004abc4) navi_pane_srt_ParamLimits

0x8e6e,	// (0x0004abc4) navi_pane_srt

0x8e92,	// (0x0004abe8) popup_clock_digital_analogue_window_cp1

0xd291,	// (0x0004efe7) indicator_pane_t1

0x883b,	// (0x0004a591) copy_highlight_pane

0x883b,	// (0x0004a591) cursor_graphics_pane

0x883b,	// (0x0004a591) graphic_within_text_pane

0x883b,	// (0x0004a591) link_highlight_pane

0xa152,	// (0x0004bea8) popup_preview_text_window_t5_ParamLimits

0xa152,	// (0x0004bea8) popup_preview_text_window_t5

0x895f,	// (0x0004a6b5) cursor_digital_pane

0x895f,	// (0x0004a6b5) cursor_primary_pane

0x8970,	// (0x0004a6c6) cursor_primary_small_pane

0x8978,	// (0x0004a6ce) cursor_secondary_pane

0x8980,	// (0x0004a6d6) cursor_title_pane

0x895f,	// (0x0004a6b5) link_highlight_digital_pane

0x8967,	// (0x0004a6bd) link_highlight_primary_pane

0x8970,	// (0x0004a6c6) link_highlight_primary_small_pane

0x8978,	// (0x0004a6ce) link_highlight_secondary_pane

0x8980,	// (0x0004a6d6) link_highlight_title_pane

0x895f,	// (0x0004a6b5) copy_highlight_digital_pane

0x895f,	// (0x0004a6b5) copy_highlight_primary_pane

0x8970,	// (0x0004a6c6) copy_highlight_primary_small_pane

0x8978,	// (0x0004a6ce) copy_highlight_secondary_pane

0x8980,	// (0x0004a6d6) copy_highlight_title_pane

0x8978,	// (0x0004a6ce) graphic_text_digital_pane

0x99cb,	// (0x0004b721) graphic_text_primary_pane

0x99d4,	// (0x0004b72a) graphic_text_primary_small_pane

0x8970,	// (0x0004a6c6) graphic_text_secondary_pane

0x895f,	// (0x0004a6b5) graphic_text_title_pane

0x8988,	// (0x0004a6de) cursor_primary_pane_g1

0x99bd,	// (0x0004b713) cursor_text_primary_t1

0x99a5,	// (0x0004b6fb) cursor_primary_small_pane_g1

0x99af,	// (0x0004b705) cursor_text_primary_small_t1

0x998d,	// (0x0004b6e3) cursor_primary_small_pane_g1_copy1

0x9997,	// (0x0004b6ed) cursor_text_primary_small_t1_copy1

0x9975,	// (0x0004b6cb) cursor_text_title_t1

0x9983,	// (0x0004b6d9) cursor_title_pane_g1

0x8988,	// (0x0004a6de) cursor_digital_pane_g1

0x8992,	// (0x0004a6e8) cursor_text_digital_t1

0x89a0,	// (0x0004a6f6) link_highlight_primary_pane_g1

0x991e,	// (0x0004b674) link_highlight_primary_pane_t1

0x89a0,	// (0x0004a6f6) link_highlight_primary_small_pane_g1

0x89a8,	// (0x0004a6fe) link_highlight_primary_small_pane_t1

0x89b7,	// (0x0004a70d) link_highlight_secondary_pane_g1

0x89bf,	// (0x0004a715) link_highlight_secondary_pane_t1

0x9892,	// (0x0004b5e8) link_highlight_title_pane_g1

0x989a,	// (0x0004b5f0) link_highlight_title_pane_t1

0x987b,	// (0x0004b5d1) link_highlight_digital_pane_g1

0x9883,	// (0x0004b5d9) link_highlight_digital_pane_t1

0x9743,	// (0x0004b499) copy_highlight_primary_pane_g1

0x975a,	// (0x0004b4b0) copy_highlight_primary_pane_t1

0x9743,	// (0x0004b499) copy_highlight_primary_small_pane_g1

0x974b,	// (0x0004b4a1) copy_highlight_primary_small_pane_t1

0x89ce,	// (0x0004a724) copy_highlight_secondary_pane_g1

0x89d6,	// (0x0004a72c) copy_highlight_secondary_pane_t1

0x972c,	// (0x0004b482) copy_highlight_title_pane_g1

0x9734,	// (0x0004b48a) copy_highlight_title_pane_t1

0x9743,	// (0x0004b499) copy_highlight_digital_pane_g1

0xaa34,	// (0x0004c78a) copy_highlight_digital_pane_t1

0xa988,	// (0x0004c6de) graphic_text_primary_pane_g1

0xaa18,	// (0x0004c76e) graphic_text_primary_pane_t1

0xaa26,	// (0x0004c77c) graphic_text_primary_pane_t2

0x0001,

0xf9d9,	// (0x0005172f) graphic_text_primary_pane_t

0xa9f4,	// (0x0004c74a) graphic_text_primary_small_pane_g1

0xa9fc,	// (0x0004c752) graphic_text_primary_small_pane_t1

0xaa0a,	// (0x0004c760) graphic_text_primary_small_pane_t2

0x0001,

0xf9d4,	// (0x0005172a) graphic_text_primary_small_pane_t

0xa9d0,	// (0x0004c726) graphic_text_secondary_pane_g1

0xa9d8,	// (0x0004c72e) graphic_text_secondary_pane_t1

0xa9e6,	// (0x0004c73c) graphic_text_secondary_pane_t2

0x0001,

0xf9cf,	// (0x00051725) graphic_text_secondary_pane_t

0xa9ac,	// (0x0004c702) graphic_text_title_pane_g1

0xa9b4,	// (0x0004c70a) graphic_text_title_pane_t1

0xa9c2,	// (0x0004c718) graphic_text_title_pane_t2

0x0001,

0xf9ca,	// (0x00051720) graphic_text_title_pane_t

0xa988,	// (0x0004c6de) graphic_text_digital_pane_g1

0xa990,	// (0x0004c6e6) graphic_text_digital_pane_t1

0xa99e,	// (0x0004c6f4) graphic_text_digital_pane_t2

0x0001,

0xf9c5,	// (0x0005171b) graphic_text_digital_pane_t

0xd24d,	// (0x0004efa3) navi_icon_pane_srt_ParamLimits

0xd24d,	// (0x0004efa3) navi_icon_pane_srt

0xd1ff,	// (0x0004ef55) navi_midp_pane_srt

0xd1ff,	// (0x0004ef55) navi_navi_pane_srt

0xd24d,	// (0x0004efa3) navi_text_pane_srt_ParamLimits

0xd24d,	// (0x0004efa3) navi_text_pane_srt

0xa953,	// (0x0004c6a9) navi_navi_icon_text_pane_srt

0xa95b,	// (0x0004c6b1) navi_navi_pane_srt_g1_ParamLimits

0xa95b,	// (0x0004c6b1) navi_navi_pane_srt_g1

0xa96d,	// (0x0004c6c3) navi_navi_pane_srt_g2_ParamLimits

0xa96d,	// (0x0004c6c3) navi_navi_pane_srt_g2

0x0001,

0xf9c0,	// (0x00051716) navi_navi_pane_srt_g_ParamLimits

0xf9c0,	// (0x00051716) navi_navi_pane_srt_g

0xa97f,	// (0x0004c6d5) navi_navi_tabs_pane_srt

0xa953,	// (0x0004c6a9) navi_navi_text_pane_srt

0xa953,	// (0x0004c6a9) navi_navi_volume_pane_srt

0xa944,	// (0x0004c69a) navi_navi_text_pane_srt_t1

0x77fe,	// (0x00049554) navi_navi_volume_pane_srt_g1

0x7806,	// (0x0004955c) volume_small_pane_srt_ParamLimits

0x7806,	// (0x0004955c) volume_small_pane_srt

0x6bae,	// (0x00048904) volume_small_pane_srt_g1_ParamLimits

0x6bae,	// (0x00048904) volume_small_pane_srt_g1

0x6bbe,	// (0x00048914) volume_small_pane_srt_g2_ParamLimits

0x6bbe,	// (0x00048914) volume_small_pane_srt_g2

0x6bcf,	// (0x00048925) volume_small_pane_srt_g3_ParamLimits

0x6bcf,	// (0x00048925) volume_small_pane_srt_g3

0x6be0,	// (0x00048936) volume_small_pane_srt_g4_ParamLimits

0x6be0,	// (0x00048936) volume_small_pane_srt_g4

0x6bf1,	// (0x00048947) volume_small_pane_srt_g5_ParamLimits

0x6bf1,	// (0x00048947) volume_small_pane_srt_g5

0x6c02,	// (0x00048958) volume_small_pane_srt_g6_ParamLimits

0x6c02,	// (0x00048958) volume_small_pane_srt_g6

0x6c13,	// (0x00048969) volume_small_pane_srt_g7_ParamLimits

0x6c13,	// (0x00048969) volume_small_pane_srt_g7

0x6c24,	// (0x0004897a) volume_small_pane_srt_g8_ParamLimits

0x6c24,	// (0x0004897a) volume_small_pane_srt_g8

0x6c35,	// (0x0004898b) volume_small_pane_srt_g9_ParamLimits

0x6c35,	// (0x0004898b) volume_small_pane_srt_g9

0x6c46,	// (0x0004899c) volume_small_pane_srt_g10_ParamLimits

0x6c46,	// (0x0004899c) volume_small_pane_srt_g10

0x0009,

0xf768,	// (0x000514be) volume_small_pane_srt_g_ParamLimits

0xf768,	// (0x000514be) volume_small_pane_srt_g

0x06c2,	// (0x00042418) query_popup_data_pane_cp2

0xa92a,	// (0x0004c680) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xa92a,	// (0x0004c680) navi_navi_icon_text_pane_srt_t1

0x99cb,	// (0x0004b721) navi_tabs_2_long_pane_srt

0x99cb,	// (0x0004b721) navi_tabs_2_pane_srt

0x99cb,	// (0x0004b721) navi_tabs_3_long_pane_srt

0x99cb,	// (0x0004b721) navi_tabs_3_pane_srt

0x99cb,	// (0x0004b721) navi_tabs_4_pane_srt

0x77de,	// (0x00049534) tabs_2_active_pane_srt_ParamLimits

0x77de,	// (0x00049534) tabs_2_active_pane_srt

0x77ee,	// (0x00049544) tabs_2_passive_pane_srt_ParamLimits

0x77ee,	// (0x00049544) tabs_2_passive_pane_srt

0x8b87,	// (0x0004a8dd) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8b87,	// (0x0004a8dd) bg_passive_tab_pane_cp1_srt

0xa8f6,	// (0x0004c64c) bg_passive_tab_pane_g1_cp1_srt

0x4216,	// (0x00045f6c) bg_passive_tab_pane_g2_cp1_srt

0xa8ff,	// (0x0004c655) bg_passive_tab_pane_g3_cp1_srt

0xd24d,	// (0x0004efa3) bg_active_tab_pane_cp1_srt_ParamLimits

0xd24d,	// (0x0004efa3) bg_active_tab_pane_cp1_srt

0xa908,	// (0x0004c65e) tabs_2_active_pane_srt_g1

0xa910,	// (0x0004c666) tabs_2_active_pane_srt_t1_ParamLimits

0xa910,	// (0x0004c666) tabs_2_active_pane_srt_t1

0xa8f6,	// (0x0004c64c) bg_active_tab_pane_g1_cp1_srt

0x4216,	// (0x00045f6c) bg_active_tab_pane_g2_cp1_srt

0xa8ff,	// (0x0004c655) bg_active_tab_pane_g3_cp1_srt

0x77ab,	// (0x00049501) tabs_3_active_pane_srt_ParamLimits

0x77ab,	// (0x00049501) tabs_3_active_pane_srt

0x77bc,	// (0x00049512) tabs_3_passive_pane_cp_srt_ParamLimits

0x77bc,	// (0x00049512) tabs_3_passive_pane_cp_srt

0x77cd,	// (0x00049523) tabs_3_passive_pane_srt_ParamLimits

0x77cd,	// (0x00049523) tabs_3_passive_pane_srt

0x8b87,	// (0x0004a8dd) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8b87,	// (0x0004a8dd) bg_passive_tab_pane_cp2_srt

0x89e5,	// (0x0004a73b) bg_passive_tab_pane_g1_cp2_srt

0x4216,	// (0x00045f6c) bg_passive_tab_pane_g2_cp2_srt

0x89ee,	// (0x0004a744) bg_passive_tab_pane_g3_cp2_srt

0xd24d,	// (0x0004efa3) bg_active_tab_pane_cp2_srt_ParamLimits

0xd24d,	// (0x0004efa3) bg_active_tab_pane_cp2_srt

0xa8dc,	// (0x0004c632) tabs_3_active_pane_srt_g1

0xa8e4,	// (0x0004c63a) tabs_3_active_pane_srt_t1_ParamLimits

0xa8e4,	// (0x0004c63a) tabs_3_active_pane_srt_t1

0x89e5,	// (0x0004a73b) bg_active_tab_pane_g1_cp2_srt

0x4216,	// (0x00045f6c) bg_active_tab_pane_g2_cp2_srt

0x89ee,	// (0x0004a744) bg_active_tab_pane_g3_cp2_srt

0x7763,	// (0x000494b9) tabs_4_active_pane_srt_ParamLimits

0x7763,	// (0x000494b9) tabs_4_active_pane_srt

0x7775,	// (0x000494cb) tabs_4_passive_pane_cp2_srt_ParamLimits

0x7775,	// (0x000494cb) tabs_4_passive_pane_cp2_srt

0x6dab,	// (0x00048b01) aid_size_cell_toolbar

0x6539,	// (0x0004828f) main_idle_act_pane_ParamLimits

0x6f76,	// (0x00048ccc) popup_large_graphic_colour_window_ParamLimits

0x731d,	// (0x00049073) popup_toolbar_window_ParamLimits

0x731d,	// (0x00049073) popup_toolbar_window

0xa6f6,	// (0x0004c44c) list_single_graphic_2heading_pane_ParamLimits

0xa6f6,	// (0x0004c44c) list_single_graphic_2heading_pane

0x0d57,	// (0x00042aad) aid_size_cell_apps_grid_lsc_pane

0x0d69,	// (0x00042abf) aid_size_cell_apps_grid_prt_pane

0x8b87,	// (0x0004a8dd) bg_wml_button_pane_cp1_ParamLimits

0x8b87,	// (0x0004a8dd) bg_wml_button_pane_cp1

0x93c3,	// (0x0004b119) form_midp_field_text_pane_t1_ParamLimits

0x91af,	// (0x0004af05) input_focus_pane_cp050_ParamLimits

0x93ee,	// (0x0004b144) list_midp_form_text_pane_ParamLimits

0x93a0,	// (0x0004b0f6) input_focus_pane_cp051_ParamLimits

0x93b4,	// (0x0004b10a) list_midp_choice_pane_ParamLimits

0x9268,	// (0x0004afbe) list_single_2graphic_pane_cp3_ParamLimits

0x9268,	// (0x0004afbe) list_single_2graphic_pane_cp3

0x9281,	// (0x0004afd7) list_single_midp_graphic_pane_ParamLimits

0x9281,	// (0x0004afd7) list_single_midp_graphic_pane

0x5683,	// (0x000473d9) list_single_graphic_2heading_pane_g1_ParamLimits

0x5683,	// (0x000473d9) list_single_graphic_2heading_pane_g1

0x568f,	// (0x000473e5) list_single_graphic_2heading_pane_g4_ParamLimits

0x568f,	// (0x000473e5) list_single_graphic_2heading_pane_g4

0x569b,	// (0x000473f1) list_single_graphic_2heading_pane_g5_ParamLimits

0x569b,	// (0x000473f1) list_single_graphic_2heading_pane_g5

0x0002,

0xf7bb,	// (0x00051511) list_single_graphic_2heading_pane_g_ParamLimits

0xf7bb,	// (0x00051511) list_single_graphic_2heading_pane_g

0x56a7,	// (0x000473fd) list_single_graphic_2heading_pane_t1_ParamLimits

0x56a7,	// (0x000473fd) list_single_graphic_2heading_pane_t1

0x56bb,	// (0x00047411) list_single_graphic_2heading_pane_t2_ParamLimits

0x56bb,	// (0x00047411) list_single_graphic_2heading_pane_t2

0x56d7,	// (0x0004742d) list_single_graphic_2heading_pane_t3_ParamLimits

0x56d7,	// (0x0004742d) list_single_graphic_2heading_pane_t3

0x0002,

0xf7c2,	// (0x00051518) list_single_graphic_2heading_pane_t_ParamLimits

0xf7c2,	// (0x00051518) list_single_graphic_2heading_pane_t

0x8ff1,	// (0x0004ad47) bg_popup_sub_pane_cp2

0x901b,	// (0x0004ad71) grid_toobar_pane

0x73dc,	// (0x00049132) cell_toolbar_pane_ParamLimits

0x73dc,	// (0x00049132) cell_toolbar_pane

0x9057,	// (0x0004adad) cell_toolbar_pane_g1_ParamLimits

0x9057,	// (0x0004adad) cell_toolbar_pane_g1

0x906b,	// (0x0004adc1) cell_toolbar_pane_g2_ParamLimits

0x906b,	// (0x0004adc1) cell_toolbar_pane_g2

0x0001,

0xf7d0,	// (0x00051526) cell_toolbar_pane_g_ParamLimits

0xf7d0,	// (0x00051526) cell_toolbar_pane_g

0x908d,	// (0x0004ade3) grid_highlight_pane_cp2_ParamLimits

0x908d,	// (0x0004ade3) grid_highlight_pane_cp2

0x90a7,	// (0x0004adfd) toolbar_button_pane

0x90b3,	// (0x0004ae09) toolbar_button_pane_g1

0x90bb,	// (0x0004ae11) toolbar_button_pane_g2

0x90c3,	// (0x0004ae19) toolbar_button_pane_g3

0x90cb,	// (0x0004ae21) toolbar_button_pane_g4

0x90d3,	// (0x0004ae29) toolbar_button_pane_g5

0x90db,	// (0x0004ae31) toolbar_button_pane_g6

0x90e3,	// (0x0004ae39) toolbar_button_pane_g7

0x90eb,	// (0x0004ae41) toolbar_button_pane_g8

0x90f3,	// (0x0004ae49) toolbar_button_pane_g9

0x0009,

0xf7d5,	// (0x0005152b) toolbar_button_pane_g

0x7420,	// (0x00049176) list_single_2graphic_pane_g1_cp3_ParamLimits

0x7420,	// (0x00049176) list_single_2graphic_pane_g1_cp3

0x742c,	// (0x00049182) list_single_2graphic_pane_g2_cp3_ParamLimits

0x742c,	// (0x00049182) list_single_2graphic_pane_g2_cp3

0x8665,	// (0x0004a3bb) list_single_2graphic_pane_g3_cp3

0x743d,	// (0x00049193) list_single_2graphic_pane_g4_cp3_ParamLimits

0x743d,	// (0x00049193) list_single_2graphic_pane_g4_cp3

0x7449,	// (0x0004919f) list_single_2graphic_pane_t1_cp3_ParamLimits

0x7449,	// (0x0004919f) list_single_2graphic_pane_t1_cp3

0x445f,	// (0x000461b5) list_single_midp_graphic_pane_g2_ParamLimits

0x445f,	// (0x000461b5) list_single_midp_graphic_pane_g2

0x566b,	// (0x000473c1) aid_zoom_text_primary

0x5673,	// (0x000473c9) aid_zoom_text_secondary

0x8aa2,	// (0x0004a7f8) status_small_pane_g7_ParamLimits

0x8aa2,	// (0x0004a7f8) status_small_pane_g7

0x8ac5,	// (0x0004a81b) status_small_pane_t1_ParamLimits

0x609d,	// (0x00047df3) title_pane_g2

0x0003,

0xf554,	// (0x000512aa) title_pane_g

0x62fe,	// (0x00048054) aid_size_cell_colour_1_pane_ParamLimits

0x62fe,	// (0x00048054) aid_size_cell_colour_1_pane

0x6312,	// (0x00048068) aid_size_cell_colour_2_pane_ParamLimits

0x6312,	// (0x00048068) aid_size_cell_colour_2_pane

0x6326,	// (0x0004807c) aid_size_cell_colour_3_pane_ParamLimits

0x6326,	// (0x0004807c) aid_size_cell_colour_3_pane

0x633a,	// (0x00048090) aid_size_cell_colour_4_pane_ParamLimits

0x633a,	// (0x00048090) aid_size_cell_colour_4_pane

0x6593,	// (0x000482e9) title_pane_stacon_g1_ParamLimits

0x6593,	// (0x000482e9) title_pane_stacon_g1

0x97b1,	// (0x0004b507) popup_note_wait_window_g3_ParamLimits

0x97b1,	// (0x0004b507) popup_note_wait_window_g3

0x9828,	// (0x0004b57e) popup_note_wait_window_t5_ParamLimits

0x9828,	// (0x0004b57e) popup_note_wait_window_t5

0xd1ff,	// (0x0004ef55) main_feb_china_hwr_fs_writing_pane

0x6e3d,	// (0x00048b93) popup_feb_china_hwr_fs_window_ParamLimits

0x6e3d,	// (0x00048b93) popup_feb_china_hwr_fs_window

0x747a,	// (0x000491d0) aid_size_cell_hwr_fs_ParamLimits

0x747a,	// (0x000491d0) aid_size_cell_hwr_fs

0x91af,	// (0x0004af05) bg_popup_sub_pane_cp3_ParamLimits

0x91af,	// (0x0004af05) bg_popup_sub_pane_cp3

0x748f,	// (0x000491e5) grid_hwr_fs_pane_ParamLimits

0x748f,	// (0x000491e5) grid_hwr_fs_pane

0x74a7,	// (0x000491fd) linegrid_hwr_fs_pane_ParamLimits

0x74a7,	// (0x000491fd) linegrid_hwr_fs_pane

0x74b7,	// (0x0004920d) cell_hwr_fs_pane_ParamLimits

0x74b7,	// (0x0004920d) cell_hwr_fs_pane

0x91bb,	// (0x0004af11) linegrid_hwr_fs_pane_g1_ParamLimits

0x91bb,	// (0x0004af11) linegrid_hwr_fs_pane_g1

0x91c7,	// (0x0004af1d) linegrid_hwr_fs_pane_g2_ParamLimits

0x91c7,	// (0x0004af1d) linegrid_hwr_fs_pane_g2

0x91d9,	// (0x0004af2f) linegrid_hwr_fs_pane_g3_ParamLimits

0x91d9,	// (0x0004af2f) linegrid_hwr_fs_pane_g3

0x74db,	// (0x00049231) linegrid_hwr_fs_pane_g4_ParamLimits

0x74db,	// (0x00049231) linegrid_hwr_fs_pane_g4

0x74f9,	// (0x0004924f) linegrid_hwr_fs_pane_g5_ParamLimits

0x74f9,	// (0x0004924f) linegrid_hwr_fs_pane_g5

0x0004,

0xf800,	// (0x00051556) linegrid_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x00051556) linegrid_hwr_fs_pane_g

0x91e5,	// (0x0004af3b) cell_hwr_fs_pane_g1_ParamLimits

0x91e5,	// (0x0004af3b) cell_hwr_fs_pane_g1

0x8f28,	// (0x0004ac7e) cell_hwr_fs_pane_g2_ParamLimits

0x8f28,	// (0x0004ac7e) cell_hwr_fs_pane_g2

0x91fb,	// (0x0004af51) cell_hwr_fs_pane_g3_ParamLimits

0x91fb,	// (0x0004af51) cell_hwr_fs_pane_g3

0x9208,	// (0x0004af5e) cell_hwr_fs_pane_g4_ParamLimits

0x9208,	// (0x0004af5e) cell_hwr_fs_pane_g4

0x0003,

0xf80b,	// (0x00051561) cell_hwr_fs_pane_g_ParamLimits

0xf80b,	// (0x00051561) cell_hwr_fs_pane_g

0x750f,	// (0x00049265) cell_hwr_fs_pane_t1

0xd1ff,	// (0x0004ef55) grid_highlight_pane_cp6

0xd1ff,	// (0x0004ef55) main_idle_act2_pane

0x0b66,	// (0x000428bc) aid_inside_area_popup_secondary

0x9e61,	// (0x0004bbb7) aid_inside_area_window_primary_ParamLimits

0x9e61,	// (0x0004bbb7) aid_inside_area_window_primary

0xaa43,	// (0x0004c799) ai2_news_ticker_pane

0xaa4b,	// (0x0004c7a1) aid_size_cell_ai1_link_ParamLimits

0xaa4b,	// (0x0004c7a1) aid_size_cell_ai1_link

0xaa65,	// (0x0004c7bb) popup_ai2_data_window_ParamLimits

0xaa65,	// (0x0004c7bb) popup_ai2_data_window

0xaa83,	// (0x0004c7d9) popup_ai2_link_window_ParamLimits

0xaa83,	// (0x0004c7d9) popup_ai2_link_window

0x91af,	// (0x0004af05) bg_popup_sub_pane_cp4_ParamLimits

0x91af,	// (0x0004af05) bg_popup_sub_pane_cp4

0xaa99,	// (0x0004c7ef) grid_ai2_link_pane_ParamLimits

0xaa99,	// (0x0004c7ef) grid_ai2_link_pane

0xaab0,	// (0x0004c806) popup_ai2_link_window_g1_ParamLimits

0xaab0,	// (0x0004c806) popup_ai2_link_window_g1

0xaabc,	// (0x0004c812) popup_ai2_link_window_g2_ParamLimits

0xaabc,	// (0x0004c812) popup_ai2_link_window_g2

0x0001,

0xf9de,	// (0x00051734) popup_ai2_link_window_g_ParamLimits

0xf9de,	// (0x00051734) popup_ai2_link_window_g

0xaacd,	// (0x0004c823) ai2_mp_button_pane

0xaad5,	// (0x0004c82b) ai2_mp_volume_pane

0x93a0,	// (0x0004b0f6) bg_popup_sub_pane_cp5_ParamLimits

0x93a0,	// (0x0004b0f6) bg_popup_sub_pane_cp5

0xaadd,	// (0x0004c833) heading_ai2_gene_pane_ParamLimits

0xaadd,	// (0x0004c833) heading_ai2_gene_pane

0xaae9,	// (0x0004c83f) list_ai2_gene_pane_ParamLimits

0xaae9,	// (0x0004c83f) list_ai2_gene_pane

0xab31,	// (0x0004c887) cell_ai2_link_pane_ParamLimits

0xab31,	// (0x0004c887) cell_ai2_link_pane

0xab47,	// (0x0004c89d) cell_ai2_link_pane_g1

0xd1ff,	// (0x0004ef55) grid_highlight_pane_cp7

0x781b,	// (0x00049571) ai2_mp_volume_pane_g1

0xac22,	// (0x0004c978) ai2_mp_volume_pane_g2

0xab8f,	// (0x0004c8e5) list_ai2_gene_pane_t1

0xac1a,	// (0x0004c970) ai2_mp_volume_pane_g3

0x0002,

0xf9f7,	// (0x0005174d) ai2_mp_volume_pane_g

0x7823,	// (0x00049579) volume_small_pane_cp3

0xac2a,	// (0x0004c980) aid_size_cell_ai2_button

0xac32,	// (0x0004c988) grid_ai2_button_pane

0xac3b,	// (0x0004c991) cell_ai2_button_pane_ParamLimits

0xac3b,	// (0x0004c991) cell_ai2_button_pane

0xd1f5,	// (0x0004ef4b) cell_ai2_button_pane_g1

0xd1ff,	// (0x0004ef55) grid_highlight_pane_cp8

0xabda,	// (0x0004c930) ai2_gene_pane_t1_ParamLimits

0xabda,	// (0x0004c930) ai2_gene_pane_t1

0x6da1,	// (0x00048af7) aid_height_parent_landscape

0xa50d,	// (0x0004c263) aid_height_set_list

0xa51e,	// (0x0004c274) aid_size_parent

0xa864,	// (0x0004c5ba) aid_size_cell_graphic_pane_ParamLimits

0xaaf9,	// (0x0004c84f) popup_ai2_data_window_g1_ParamLimits

0xaaf9,	// (0x0004c84f) popup_ai2_data_window_g1

0xab05,	// (0x0004c85b) ai2_news_ticker_pane_g1

0xab0d,	// (0x0004c863) ai2_news_ticker_pane_g2

0x0001,

0xf9e3,	// (0x00051739) ai2_news_ticker_pane_g

0xab15,	// (0x0004c86b) ai2_news_ticker_pane_t1

0xab23,	// (0x0004c879) ai2_news_ticker_pane_t2

0x0001,

0xf9e8,	// (0x0005173e) ai2_news_ticker_pane_t

0xab50,	// (0x0004c8a6) heading_ai2_gene_pane_g1

0xab58,	// (0x0004c8ae) heading_ai2_gene_pane_t1_ParamLimits

0xab58,	// (0x0004c8ae) heading_ai2_gene_pane_t1

0xab6d,	// (0x0004c8c3) list_highlight_pane_cp6

0xab75,	// (0x0004c8cb) ai2_gene_pane_ParamLimits

0xab75,	// (0x0004c8cb) ai2_gene_pane

0xab9d,	// (0x0004c8f3) list_ai2_gene_pane_t2

0x0001,

0xf9ed,	// (0x00051743) list_ai2_gene_pane_t

0xabab,	// (0x0004c901) list_highlight_pane_cp8_ParamLimits

0xabab,	// (0x0004c901) list_highlight_pane_cp8

0xabbc,	// (0x0004c912) ai2_gene_pane_g1_ParamLimits

0xabbc,	// (0x0004c912) ai2_gene_pane_g1

0xabce,	// (0x0004c924) ai2_gene_pane_g2_ParamLimits

0xabce,	// (0x0004c924) ai2_gene_pane_g2

0x0001,

0xf9f2,	// (0x00051748) ai2_gene_pane_g_ParamLimits

0xf9f2,	// (0x00051748) ai2_gene_pane_g

0x09dd,	// (0x00042733) scroll_pane_cp12

0x6d60,	// (0x00048ab6) control_pane_t3_ParamLimits

0x6d60,	// (0x00048ab6) control_pane_t3

0x8ab6,	// (0x0004a80c) status_small_pane_g8_ParamLimits

0x8ab6,	// (0x0004a80c) status_small_pane_g8

0x6f3b,	// (0x00048c91) popup_find_window_ParamLimits

0x7166,	// (0x00048ebc) popup_note_image_window_ParamLimits

0x56ef,	// (0x00047445) list_double2_graphic_pane_vc_g1_ParamLimits

0x56ef,	// (0x00047445) list_double2_graphic_pane_vc_g1

0x87ac,	// (0x0004a502) list_double2_graphic_pane_vc_g2_ParamLimits

0x87ac,	// (0x0004a502) list_double2_graphic_pane_vc_g2

0x740c,	// (0x00049162) list_double2_graphic_pane_vc_g3_ParamLimits

0x740c,	// (0x00049162) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c9,	// (0x0005151f) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c9,	// (0x0005151f) list_double2_graphic_pane_vc_g

0x56fb,	// (0x00047451) list_double2_graphic_pane_vc_t1_ParamLimits

0x56fb,	// (0x00047451) list_double2_graphic_pane_vc_t1

0x87ac,	// (0x0004a502) list_single_heading_pane_vc_g1_ParamLimits

0x87ac,	// (0x0004a502) list_single_heading_pane_vc_g1

0x740c,	// (0x00049162) list_single_heading_pane_vc_g2_ParamLimits

0x740c,	// (0x00049162) list_single_heading_pane_vc_g2

0x0001,

0xf7ea,	// (0x00051540) list_single_heading_pane_vc_g_ParamLimits

0xf7ea,	// (0x00051540) list_single_heading_pane_vc_g

0x5711,	// (0x00047467) list_single_heading_pane_vc_t1_ParamLimits

0x5711,	// (0x00047467) list_single_heading_pane_vc_t1

0x5729,	// (0x0004747f) list_single_heading_pane_vc_t2_ParamLimits

0x5729,	// (0x0004747f) list_single_heading_pane_vc_t2

0x0001,

0xf7ef,	// (0x00051545) list_single_heading_pane_vc_t_ParamLimits

0xf7ef,	// (0x00051545) list_single_heading_pane_vc_t

0x90fb,	// (0x0004ae51) list_setting_number_pane_vc_g1_ParamLimits

0x90fb,	// (0x0004ae51) list_setting_number_pane_vc_g1

0x9107,	// (0x0004ae5d) list_setting_number_pane_vc_g2_ParamLimits

0x9107,	// (0x0004ae5d) list_setting_number_pane_vc_g2

0x0001,

0xf7f4,	// (0x0005154a) list_setting_number_pane_vc_g_ParamLimits

0xf7f4,	// (0x0005154a) list_setting_number_pane_vc_g

0x9113,	// (0x0004ae69) list_setting_number_pane_vc_t1_ParamLimits

0x9113,	// (0x0004ae69) list_setting_number_pane_vc_t1

0x9127,	// (0x0004ae7d) list_setting_number_pane_vc_t2_ParamLimits

0x9127,	// (0x0004ae7d) list_setting_number_pane_vc_t2

0x9143,	// (0x0004ae99) list_setting_number_pane_vc_t3_ParamLimits

0x9143,	// (0x0004ae99) list_setting_number_pane_vc_t3

0x0002,

0xf7f9,	// (0x0005154f) list_setting_number_pane_vc_t_ParamLimits

0xf7f9,	// (0x0005154f) list_setting_number_pane_vc_t

0x9171,	// (0x0004aec7) set_value_pane_vc_ParamLimits

0x9171,	// (0x0004aec7) set_value_pane_vc

0xa6f6,	// (0x0004c44c) list_double2_graphic_pane_vc_ParamLimits

0xa6f6,	// (0x0004c44c) list_double2_graphic_pane_vc

0xa6f6,	// (0x0004c44c) list_double2_large_graphic_pane_vc_ParamLimits

0xa6f6,	// (0x0004c44c) list_double2_large_graphic_pane_vc

0xa6f6,	// (0x0004c44c) list_double2_pane_vc_ParamLimits

0xa6f6,	// (0x0004c44c) list_double2_pane_vc

0xa6f6,	// (0x0004c44c) list_double_graphic_heading_pane_vc_ParamLimits

0xa6f6,	// (0x0004c44c) list_double_graphic_heading_pane_vc

0xa6f6,	// (0x0004c44c) list_double_graphic_pane_vc_ParamLimits

0xa6f6,	// (0x0004c44c) list_double_graphic_pane_vc

0xa6f6,	// (0x0004c44c) list_double_heading_pane_vc_ParamLimits

0xa6f6,	// (0x0004c44c) list_double_heading_pane_vc

0xa6f6,	// (0x0004c44c) list_double_large_graphic_pane_vc_ParamLimits

0xa6f6,	// (0x0004c44c) list_double_large_graphic_pane_vc

0xa6f6,	// (0x0004c44c) list_double_number_pane_vc_ParamLimits

0xa6f6,	// (0x0004c44c) list_double_number_pane_vc

0xa6f6,	// (0x0004c44c) list_double_pane_vc_ParamLimits

0xa6f6,	// (0x0004c44c) list_double_pane_vc

0xa6f6,	// (0x0004c44c) list_double_time_pane_vc_ParamLimits

0xa6f6,	// (0x0004c44c) list_double_time_pane_vc

0xa6f6,	// (0x0004c44c) list_setting_number_pane_vc_ParamLimits

0xa6f6,	// (0x0004c44c) list_setting_number_pane_vc

0xa6f6,	// (0x0004c44c) list_setting_pane_vc_ParamLimits

0xa6f6,	// (0x0004c44c) list_setting_pane_vc

0xa6f6,	// (0x0004c44c) list_single_graphic_heading_pane_vc_ParamLimits

0xa6f6,	// (0x0004c44c) list_single_graphic_heading_pane_vc

0xa6f6,	// (0x0004c44c) list_single_heading_pane_vc_ParamLimits

0xa6f6,	// (0x0004c44c) list_single_heading_pane_vc

0xa70a,	// (0x0004c460) list_single_number_heading_pane_vc_ParamLimits

0xa70a,	// (0x0004c460) list_single_number_heading_pane_vc

0x56ef,	// (0x00047445) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x56ef,	// (0x00047445) list_double_graphic_heading_pane_vc_g1

0x782c,	// (0x00049582) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x782c,	// (0x00049582) list_double_graphic_heading_pane_vc_g2

0x7838,	// (0x0004958e) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x7838,	// (0x0004958e) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9fe,	// (0x00051754) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9fe,	// (0x00051754) list_double_graphic_heading_pane_vc_g

0x57dd,	// (0x00047533) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x57dd,	// (0x00047533) list_double_graphic_heading_pane_vc_t1

0x5711,	// (0x00047467) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5711,	// (0x00047467) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa05,	// (0x0005175b) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa05,	// (0x0005175b) list_double_graphic_heading_pane_vc_t

0x90fb,	// (0x0004ae51) list_setting_pane_vc_g1_ParamLimits

0x90fb,	// (0x0004ae51) list_setting_pane_vc_g1

0x9107,	// (0x0004ae5d) list_setting_pane_vc_g2_ParamLimits

0x9107,	// (0x0004ae5d) list_setting_pane_vc_g2

0x0001,

0xf7f4,	// (0x0005154a) list_setting_pane_vc_g_ParamLimits

0xf7f4,	// (0x0005154a) list_setting_pane_vc_g

0xaea2,	// (0x0004cbf8) list_setting_pane_vc_t1_ParamLimits

0xaea2,	// (0x0004cbf8) list_setting_pane_vc_t1

0xaebe,	// (0x0004cc14) list_setting_pane_vc_t2_ParamLimits

0xaebe,	// (0x0004cc14) list_setting_pane_vc_t2

0x0001,

0xfa33,	// (0x00051789) list_setting_pane_vc_t_ParamLimits

0xfa33,	// (0x00051789) list_setting_pane_vc_t

0x9171,	// (0x0004aec7) set_value_pane_cp_vc_ParamLimits

0x9171,	// (0x0004aec7) set_value_pane_cp_vc

0x87ac,	// (0x0004a502) list_single_number_heading_pane_vc_g1_ParamLimits

0x87ac,	// (0x0004a502) list_single_number_heading_pane_vc_g1

0x740c,	// (0x00049162) list_single_number_heading_pane_vc_g2_ParamLimits

0x740c,	// (0x00049162) list_single_number_heading_pane_vc_g2

0x0001,

0xf7ea,	// (0x00051540) list_single_number_heading_pane_vc_g_ParamLimits

0xf7ea,	// (0x00051540) list_single_number_heading_pane_vc_g

0x5711,	// (0x00047467) list_single_number_heading_pane_vc_t1_ParamLimits

0x5711,	// (0x00047467) list_single_number_heading_pane_vc_t1

0x57ef,	// (0x00047545) list_single_number_heading_pane_vc_t2_ParamLimits

0x57ef,	// (0x00047545) list_single_number_heading_pane_vc_t2

0x5801,	// (0x00047557) list_single_number_heading_pane_vc_t3_ParamLimits

0x5801,	// (0x00047557) list_single_number_heading_pane_vc_t3

0x0002,

0xfa38,	// (0x0005178e) list_single_number_heading_pane_vc_t_ParamLimits

0xfa38,	// (0x0005178e) list_single_number_heading_pane_vc_t

0x56ef,	// (0x00047445) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x56ef,	// (0x00047445) list_single_graphic_heading_pane_vc_g1

0x87ac,	// (0x0004a502) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x87ac,	// (0x0004a502) list_single_graphic_heading_pane_vc_g4

0x740c,	// (0x00049162) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x740c,	// (0x00049162) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c9,	// (0x0005151f) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c9,	// (0x0005151f) list_single_graphic_heading_pane_vc_g

0x5711,	// (0x00047467) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5711,	// (0x00047467) list_single_graphic_heading_pane_vc_t1

0x5813,	// (0x00047569) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5813,	// (0x00047569) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3f,	// (0x00051795) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3f,	// (0x00051795) list_single_graphic_heading_pane_vc_t

0x87ac,	// (0x0004a502) list_double2_pane_vc_g1_ParamLimits

0x87ac,	// (0x0004a502) list_double2_pane_vc_g1

0x740c,	// (0x00049162) list_double2_pane_vc_g2_ParamLimits

0x740c,	// (0x00049162) list_double2_pane_vc_g2

0x0001,

0xf7ea,	// (0x00051540) list_double2_pane_vc_g_ParamLimits

0xf7ea,	// (0x00051540) list_double2_pane_vc_g

0x5825,	// (0x0004757b) list_double2_pane_vc_t1_ParamLimits

0x5825,	// (0x0004757b) list_double2_pane_vc_t1

0x7844,	// (0x0004959a) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x7844,	// (0x0004959a) list_double2_large_graphic_pane_vc_g1

0x87ac,	// (0x0004a502) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x87ac,	// (0x0004a502) list_double2_large_graphic_pane_vc_g2

0x740c,	// (0x00049162) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x740c,	// (0x00049162) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa44,	// (0x0005179a) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa44,	// (0x0005179a) list_double2_large_graphic_pane_vc_g

0x583b,	// (0x00047591) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x583b,	// (0x00047591) list_double2_large_graphic_pane_vc_t1

0x7850,	// (0x000495a6) list_double_time_pane_vc_g1_ParamLimits

0x7850,	// (0x000495a6) list_double_time_pane_vc_g1

0x785c,	// (0x000495b2) list_double_time_pane_vc_g2_ParamLimits

0x785c,	// (0x000495b2) list_double_time_pane_vc_g2

0x0001,

0xfa4b,	// (0x000517a1) list_double_time_pane_vc_g_ParamLimits

0xfa4b,	// (0x000517a1) list_double_time_pane_vc_g

0x5851,	// (0x000475a7) list_double_time_pane_vc_t1_ParamLimits

0x5851,	// (0x000475a7) list_double_time_pane_vc_t1

0x587b,	// (0x000475d1) list_double_time_pane_vc_t2_ParamLimits

0x587b,	// (0x000475d1) list_double_time_pane_vc_t2

0x58c4,	// (0x0004761a) list_double_time_pane_vc_t3_ParamLimits

0x58c4,	// (0x0004761a) list_double_time_pane_vc_t3

0x58d6,	// (0x0004762c) list_double_time_pane_vc_t4_ParamLimits

0x58d6,	// (0x0004762c) list_double_time_pane_vc_t4

0x0003,

0xfa50,	// (0x000517a6) list_double_time_pane_vc_t_ParamLimits

0xfa50,	// (0x000517a6) list_double_time_pane_vc_t

0x87ac,	// (0x0004a502) list_double_pane_vc_g1_ParamLimits

0x87ac,	// (0x0004a502) list_double_pane_vc_g1

0x740c,	// (0x00049162) list_double_pane_vc_g2_ParamLimits

0x740c,	// (0x00049162) list_double_pane_vc_g2

0x0001,

0xf7ea,	// (0x00051540) list_double_pane_vc_g_ParamLimits

0xf7ea,	// (0x00051540) list_double_pane_vc_g

0x58fb,	// (0x00047651) list_double_pane_vc_t1_ParamLimits

0x58fb,	// (0x00047651) list_double_pane_vc_t1

0x590f,	// (0x00047665) list_double_pane_vc_t2_ParamLimits

0x590f,	// (0x00047665) list_double_pane_vc_t2

0x0001,

0xfa59,	// (0x000517af) list_double_pane_vc_t_ParamLimits

0xfa59,	// (0x000517af) list_double_pane_vc_t

0x87ac,	// (0x0004a502) list_double_number_pane_vc_g1_ParamLimits

0x87ac,	// (0x0004a502) list_double_number_pane_vc_g1

0x740c,	// (0x00049162) list_double_number_pane_vc_g2_ParamLimits

0x740c,	// (0x00049162) list_double_number_pane_vc_g2

0x0001,

0xf7ea,	// (0x00051540) list_double_number_pane_vc_g_ParamLimits

0xf7ea,	// (0x00051540) list_double_number_pane_vc_g

0x5925,	// (0x0004767b) list_double_number_pane_vc_t1_ParamLimits

0x5925,	// (0x0004767b) list_double_number_pane_vc_t1

0x5939,	// (0x0004768f) list_double_number_pane_vc_t2_ParamLimits

0x5939,	// (0x0004768f) list_double_number_pane_vc_t2

0x590f,	// (0x00047665) list_double_number_pane_vc_t3_ParamLimits

0x590f,	// (0x00047665) list_double_number_pane_vc_t3

0x0002,

0xfa5e,	// (0x000517b4) list_double_number_pane_vc_t_ParamLimits

0xfa5e,	// (0x000517b4) list_double_number_pane_vc_t

0x7868,	// (0x000495be) list_double_large_graphic_pane_vc_g1_ParamLimits

0x7868,	// (0x000495be) list_double_large_graphic_pane_vc_g1

0x7879,	// (0x000495cf) list_double_large_graphic_pane_vc_g2_ParamLimits

0x7879,	// (0x000495cf) list_double_large_graphic_pane_vc_g2

0x740c,	// (0x00049162) list_double_large_graphic_pane_vc_g3_ParamLimits

0x740c,	// (0x00049162) list_double_large_graphic_pane_vc_g3

0x594d,	// (0x000476a3) list_double_large_graphic_pane_vc_g4_ParamLimits

0x594d,	// (0x000476a3) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa65,	// (0x000517bb) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa65,	// (0x000517bb) list_double_large_graphic_pane_vc_g

0x5959,	// (0x000476af) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5959,	// (0x000476af) list_double_large_graphic_pane_vc_t1

0x5972,	// (0x000476c8) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5972,	// (0x000476c8) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6e,	// (0x000517c4) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6e,	// (0x000517c4) list_double_large_graphic_pane_vc_t

0x782c,	// (0x00049582) list_double_heading_pane_vc_g1_ParamLimits

0x782c,	// (0x00049582) list_double_heading_pane_vc_g1

0x7838,	// (0x0004958e) list_double_heading_pane_vc_g2_ParamLimits

0x7838,	// (0x0004958e) list_double_heading_pane_vc_g2

0x0001,

0xfa73,	// (0x000517c9) list_double_heading_pane_vc_g_ParamLimits

0xfa73,	// (0x000517c9) list_double_heading_pane_vc_g

0x5989,	// (0x000476df) list_double_heading_pane_vc_t1_ParamLimits

0x5989,	// (0x000476df) list_double_heading_pane_vc_t1

0x5711,	// (0x00047467) list_double_heading_pane_vc_t2_ParamLimits

0x5711,	// (0x00047467) list_double_heading_pane_vc_t2

0x0001,

0xfa78,	// (0x000517ce) list_double_heading_pane_vc_t_ParamLimits

0xfa78,	// (0x000517ce) list_double_heading_pane_vc_t

0x56ef,	// (0x00047445) list_double_graphic_pane_vc_g1_ParamLimits

0x56ef,	// (0x00047445) list_double_graphic_pane_vc_g1

0x7888,	// (0x000495de) list_double_graphic_pane_vc_g2_ParamLimits

0x7888,	// (0x000495de) list_double_graphic_pane_vc_g2

0x7897,	// (0x000495ed) list_double_graphic_pane_vc_g3_ParamLimits

0x7897,	// (0x000495ed) list_double_graphic_pane_vc_g3

0x0002,

0xfa7d,	// (0x000517d3) list_double_graphic_pane_vc_g_ParamLimits

0xfa7d,	// (0x000517d3) list_double_graphic_pane_vc_g

0x599b,	// (0x000476f1) list_double_graphic_pane_vc_t1_ParamLimits

0x599b,	// (0x000476f1) list_double_graphic_pane_vc_t1

0x590f,	// (0x00047665) list_double_graphic_pane_vc_t2_ParamLimits

0x590f,	// (0x00047665) list_double_graphic_pane_vc_t2

0x0001,

0xfa84,	// (0x000517da) list_double_graphic_pane_vc_t_ParamLimits

0xfa84,	// (0x000517da) list_double_graphic_pane_vc_t

0x5cb1,	// (0x00047a07) aid_size_cell_fastswap

0x5cb9,	// (0x00047a0f) aid_size_cell_touch_ParamLimits

0x5cb9,	// (0x00047a0f) aid_size_cell_touch

0x5f1a,	// (0x00047c70) popup_fast_swap_wide_window_ParamLimits

0x5f1a,	// (0x00047c70) popup_fast_swap_wide_window

0x6030,	// (0x00047d86) touch_pane_ParamLimits

0x6030,	// (0x00047d86) touch_pane

0x0a33,	// (0x00042789) button_value_adjust_pane_cp2

0x53b9,	// (0x0004710f) button_value_adjust_pane_cp4

0x53e1,	// (0x00047137) form_field_data_pane_cp2

0x5406,	// (0x0004715c) form_field_data_wide_pane_cp2

0x0da0,	// (0x00042af6) bg_scroll_pane_ParamLimits

0x6781,	// (0x000484d7) scroll_handle_pane_ParamLimits

0x6795,	// (0x000484eb) scroll_sc2_down_pane_ParamLimits

0x6795,	// (0x000484eb) scroll_sc2_down_pane

0x0dd1,	// (0x00042b27) scroll_sc2_up_pane_ParamLimits

0x0dd1,	// (0x00042b27) scroll_sc2_up_pane

0xb3a4,	// (0x0004d0fa) grid_wheel_folder_pane_g1_ParamLimits

0xb3a4,	// (0x0004d0fa) grid_wheel_folder_pane_g1

0x6ab9,	// (0x0004880f) clock_nsta_pane_cp2_ParamLimits

0x6ab9,	// (0x0004880f) clock_nsta_pane_cp2

0x6539,	// (0x0004828f) listscroll_midp_pane_ParamLimits

0x8843,	// (0x0004a599) midp_canvas_pane

0x8b31,	// (0x0004a887) nsta_clock_indic_pane

0x8b6d,	// (0x0004a8c3) listscroll_form_pane_vc

0x8b75,	// (0x0004a8cb) listscroll_set_pane_vc_ParamLimits

0x8b75,	// (0x0004a8cb) listscroll_set_pane_vc

0x8c7c,	// (0x0004a9d2) clock_nsta_pane

0x8cf9,	// (0x0004aa4f) indicator_nsta_pane

0x8ff1,	// (0x0004ad47) bg_popup_sub_pane_cp2_ParamLimits

0x9005,	// (0x0004ad5b) find_pane_cp2_ParamLimits

0x9005,	// (0x0004ad5b) find_pane_cp2

0x901b,	// (0x0004ad71) grid_toobar_pane_ParamLimits

0x9183,	// (0x0004aed9) list_form_gen_pane_vc_ParamLimits

0x9183,	// (0x0004aed9) list_form_gen_pane_vc

0x9199,	// (0x0004aeef) scroll_pane_cp8_vc_ParamLimits

0x9199,	// (0x0004aeef) scroll_pane_cp8_vc

0x9215,	// (0x0004af6b) data_form_wide_pane_vc_ParamLimits

0x9215,	// (0x0004af6b) data_form_wide_pane_vc

0x9221,	// (0x0004af77) form_field_data_wide_pane_vc_g1

0x9229,	// (0x0004af7f) form_field_data_wide_pane_vc_t1_ParamLimits

0x9229,	// (0x0004af7f) form_field_data_wide_pane_vc_t1

0x0a47,	// (0x0004279d) input_focus_pane_cp6_vc_ParamLimits

0x0a47,	// (0x0004279d) input_focus_pane_cp6_vc

0x952b,	// (0x0004b281) list_midp_pane_ParamLimits

0x9537,	// (0x0004b28d) scroll_pane_cp16_ParamLimits

0x9537,	// (0x0004b28d) scroll_pane_cp16

0x9585,	// (0x0004b2db) button_value_adjust_pane_ParamLimits

0x9585,	// (0x0004b2db) button_value_adjust_pane

0xa530,	// (0x0004c286) button_value_adjust_pane_cp6_ParamLimits

0xa530,	// (0x0004c286) button_value_adjust_pane_cp6

0xa67e,	// (0x0004c3d4) settings_code_pane_cp_ParamLimits

0xa67e,	// (0x0004c3d4) settings_code_pane_cp

0xd1f5,	// (0x0004ef4b) cell_touch_pane_g1

0xd1f5,	// (0x0004ef4b) cell_touch_pane_g2

0x0001,

0xf70e,	// (0x00051464) cell_touch_pane_g

0xac4d,	// (0x0004c9a3) cell_touch_pane_cp_ParamLimits

0xac4d,	// (0x0004c9a3) cell_touch_pane_cp

0xac5d,	// (0x0004c9b3) cell_touch_pane_ParamLimits

0xac5d,	// (0x0004c9b3) cell_touch_pane

0xd1f5,	// (0x0004ef4b) scroll_sc2_down_pane_g1

0xd1f5,	// (0x0004ef4b) scroll_sc2_up_pane_g1

0xd1ff,	// (0x0004ef55) bg_set_opt_pane_cp4_vc

0xac6e,	// (0x0004c9c4) list_set_graphic_pane_vc_g1_ParamLimits

0xac6e,	// (0x0004c9c4) list_set_graphic_pane_vc_g1

0xac7a,	// (0x0004c9d0) list_set_graphic_pane_vc_g2_ParamLimits

0xac7a,	// (0x0004c9d0) list_set_graphic_pane_vc_g2

0x0001,

0xfa0a,	// (0x00051760) list_set_graphic_pane_vc_g_ParamLimits

0xfa0a,	// (0x00051760) list_set_graphic_pane_vc_g

0xac86,	// (0x0004c9dc) text_primary_small_cp13_vc_ParamLimits

0xac86,	// (0x0004c9dc) text_primary_small_cp13_vc

0xac9e,	// (0x0004c9f4) list_set_graphic_pane_vc_ParamLimits

0xac9e,	// (0x0004c9f4) list_set_graphic_pane_vc

0xd1ff,	// (0x0004ef55) input_focus_pane_cp2_vc

0xd1f5,	// (0x0004ef4b) setting_code_pane_vc_g1

0xd264,	// (0x0004efba) setting_code_pane_vc_t1

0xacb3,	// (0x0004ca09) set_text_pane_vc_t1_ParamLimits

0xacb3,	// (0x0004ca09) set_text_pane_vc_t1

0xd1ff,	// (0x0004ef55) input_focus_pane_cp1_vc

0xacd1,	// (0x0004ca27) list_set_text_pane_vc

0xd1f5,	// (0x0004ef4b) setting_text_pane_vc_g1

0xd1ff,	// (0x0004ef55) bg_set_opt_pane_cp2_vc

0xd25b,	// (0x0004efb1) setting_slider_graphic_pane_vc_g1

0xacdb,	// (0x0004ca31) setting_slider_graphic_pane_vc_t1

0xaced,	// (0x0004ca43) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa0f,	// (0x00051765) setting_slider_graphic_pane_vc_t

0xacff,	// (0x0004ca55) slider_set_pane_cp_vc

0xad09,	// (0x0004ca5f) slider_set_pane_vc_g1

0xad12,	// (0x0004ca68) slider_set_pane_vc_g2

0x0006,

0xfa14,	// (0x0005176a) slider_set_pane_vc_g

0x0aae,	// (0x00042804) set_opt_bg_pane_g1_copy1

0x0ab6,	// (0x0004280c) set_opt_bg_pane_g2_copy1

0xad3e,	// (0x0004ca94) set_opt_bg_pane_g3_copy1

0x0ac6,	// (0x0004281c) set_opt_bg_pane_g4_copy1

0x0ace,	// (0x00042824) set_opt_bg_pane_g5_copy1

0x0ad6,	// (0x0004282c) set_opt_bg_pane_g6_copy1

0xad48,	// (0x0004ca9e) set_opt_bg_pane_g7_copy1

0xad52,	// (0x0004caa8) set_opt_bg_pane_g8_copy1

0xad5c,	// (0x0004cab2) set_opt_bg_pane_g9_copy1

0xd1ff,	// (0x0004ef55) bg_set_opt_pane_cp_vc

0xad66,	// (0x0004cabc) setting_slider_pane_vc_t1

0xad75,	// (0x0004cacb) setting_slider_pane_vc_t2

0xad87,	// (0x0004cadd) setting_slider_pane_vc_t3

0x0002,

0xfa23,	// (0x00051779) setting_slider_pane_vc_t

0xad99,	// (0x0004caef) slider_set_pane_vc

0x751d,	// (0x00049273) volume_set_pane_vc_g1

0x7526,	// (0x0004927c) volume_set_pane_vc_g2

0x752f,	// (0x00049285) volume_set_pane_vc_g3

0x7538,	// (0x0004928e) volume_set_pane_vc_g4

0x7541,	// (0x00049297) volume_set_pane_vc_g5

0x754a,	// (0x000492a0) volume_set_pane_vc_g6

0x7553,	// (0x000492a9) volume_set_pane_vc_g7

0x755c,	// (0x000492b2) volume_set_pane_vc_g8

0x7565,	// (0x000492bb) volume_set_pane_vc_g9

0x756e,	// (0x000492c4) volume_set_pane_vc_g10

0x0009,

0xf8c1,	// (0x00051617) volume_set_pane_vc_g

0xada3,	// (0x0004caf9) volume_set_pane_vc

0xadad,	// (0x0004cb03) button_value_adjust_pane_cp1_vc

0xadb7,	// (0x0004cb0d) list_highlight_pane_cp2_vc

0xadc0,	// (0x0004cb16) list_set_pane_vc_ParamLimits

0xadc0,	// (0x0004cb16) list_set_pane_vc

0xae30,	// (0x0004cb86) main_pane_set_vc_t1_ParamLimits

0xae30,	// (0x0004cb86) main_pane_set_vc_t1

0xae45,	// (0x0004cb9b) main_pane_set_vc_t2_ParamLimits

0xae45,	// (0x0004cb9b) main_pane_set_vc_t2

0xae57,	// (0x0004cbad) main_pane_set_vc_t3_ParamLimits

0xae57,	// (0x0004cbad) main_pane_set_vc_t3

0xae6b,	// (0x0004cbc1) main_pane_set_vc_t4_ParamLimits

0xae6b,	// (0x0004cbc1) main_pane_set_vc_t4

0x0003,

0xfa2a,	// (0x00051780) main_pane_set_vc_t_ParamLimits

0xfa2a,	// (0x00051780) main_pane_set_vc_t

0xae7f,	// (0x0004cbd5) setting_code_pane_vc_ParamLimits

0xae7f,	// (0x0004cbd5) setting_code_pane_vc

0xae90,	// (0x0004cbe6) setting_slider_graphic_pane_vc

0xae90,	// (0x0004cbe6) setting_slider_pane_vc

0xae90,	// (0x0004cbe6) setting_text_pane_vc

0xae90,	// (0x0004cbe6) setting_volume_pane_vc

0xae9a,	// (0x0004cbf0) scroll_pane_cp121_vc

0x0a21,	// (0x00042777) set_content_pane_vc

0xaeda,	// (0x0004cc30) button_value_adjust_pane_g1

0xaee3,	// (0x0004cc39) button_value_adjust_pane_g2

0x0001,

0xfa89,	// (0x000517df) button_value_adjust_pane_g

0xaeec,	// (0x0004cc42) form_field_slider_wide_pane_vc_t1_ParamLimits

0xaeec,	// (0x0004cc42) form_field_slider_wide_pane_vc_t1

0xaf00,	// (0x0004cc56) form_field_slider_wide_pane_vc_t2_ParamLimits

0xaf00,	// (0x0004cc56) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8e,	// (0x000517e4) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8e,	// (0x000517e4) form_field_slider_wide_pane_vc_t

0xd380,	// (0x0004f0d6) input_focus_pane_cp10_vc_ParamLimits

0xd380,	// (0x0004f0d6) input_focus_pane_cp10_vc

0xaf2e,	// (0x0004cc84) slider_cont_pane_cp1_vc_ParamLimits

0xaf2e,	// (0x0004cc84) slider_cont_pane_cp1_vc

0xaf3e,	// (0x0004cc94) slider_form_pane_g1_cp2

0xad12,	// (0x0004ca68) slider_form_pane_g2_cp2

0xaf6b,	// (0x0004ccc1) form_field_slider_pane_vc_t3

0xaf79,	// (0x0004cccf) form_field_slider_pane_vc_t4

0xaf87,	// (0x0004ccdd) slider_form_pane_vc_ParamLimits

0xaf87,	// (0x0004ccdd) slider_form_pane_vc

0xaf94,	// (0x0004ccea) form_field_slider_pane_vc_t1_ParamLimits

0xaf94,	// (0x0004ccea) form_field_slider_pane_vc_t1

0xaf00,	// (0x0004cc56) form_field_slider_pane_vc_t2_ParamLimits

0xaf00,	// (0x0004cc56) form_field_slider_pane_vc_t2

0x0001,

0xfaa0,	// (0x000517f6) form_field_slider_pane_vc_t_ParamLimits

0xfaa0,	// (0x000517f6) form_field_slider_pane_vc_t

0xd380,	// (0x0004f0d6) input_focus_pane_cp9_vc_ParamLimits

0xd380,	// (0x0004f0d6) input_focus_pane_cp9_vc

0xafb0,	// (0x0004cd06) slider_cont_pane_vc_ParamLimits

0xafb0,	// (0x0004cd06) slider_cont_pane_vc

0xafc2,	// (0x0004cd18) list_form_graphic_pane_cp_vc_ParamLimits

0xafc2,	// (0x0004cd18) list_form_graphic_pane_cp_vc

0x9221,	// (0x0004af77) form_field_popup_wide_pane_vc_g1

0xafd7,	// (0x0004cd2d) form_field_popup_wide_pane_vc_t1_ParamLimits

0xafd7,	// (0x0004cd2d) form_field_popup_wide_pane_vc_t1

0x0a47,	// (0x0004279d) input_focus_pane_cp8_vc_ParamLimits

0x0a47,	// (0x0004279d) input_focus_pane_cp8_vc

0xb01c,	// (0x0004cd72) list_form_wide_pane_vc_ParamLimits

0xb01c,	// (0x0004cd72) list_form_wide_pane_vc

0xb028,	// (0x0004cd7e) list_form_graphic_pane_vc_g1

0xb030,	// (0x0004cd86) list_form_graphic_pane_vc_t1_ParamLimits

0xb030,	// (0x0004cd86) list_form_graphic_pane_vc_t1

0xd24d,	// (0x0004efa3) list_highlight_pane_cp5_vc_ParamLimits

0xd24d,	// (0x0004efa3) list_highlight_pane_cp5_vc

0xb04c,	// (0x0004cda2) list_form_graphic_pane_vc_ParamLimits

0xb04c,	// (0x0004cda2) list_form_graphic_pane_vc

0x9221,	// (0x0004af77) form_field_popup_pane_vc_g1

0xb062,	// (0x0004cdb8) form_field_popup_pane_vc_t1_ParamLimits

0xb062,	// (0x0004cdb8) form_field_popup_pane_vc_t1

0x0a47,	// (0x0004279d) input_focus_pane_cp7_vc_ParamLimits

0x0a47,	// (0x0004279d) input_focus_pane_cp7_vc

0xb079,	// (0x0004cdcf) list_form_pane_vc_ParamLimits

0xb079,	// (0x0004cdcf) list_form_pane_vc

0xb085,	// (0x0004cddb) data_form_pane_vc_t1_ParamLimits

0xb085,	// (0x0004cddb) data_form_pane_vc_t1

0x0aae,	// (0x00042804) input_focus_pane_vc_g1

0x0ab6,	// (0x0004280c) input_focus_pane_vc_g2

0x0abe,	// (0x00042814) input_focus_pane_vc_g3

0x0ac6,	// (0x0004281c) input_focus_pane_vc_g4

0x0ace,	// (0x00042824) input_focus_pane_vc_g5

0x0ad6,	// (0x0004282c) input_focus_pane_vc_g6

0x0ade,	// (0x00042834) input_focus_pane_vc_g7

0x0ae6,	// (0x0004283c) input_focus_pane_vc_g8

0x0aee,	// (0x00042844) input_focus_pane_vc_g9

0xd1f5,	// (0x0004ef4b) input_focus_pane_vc_g10

0x0009,

0xf697,	// (0x000513ed) input_focus_pane_vc_g

0x9215,	// (0x0004af6b) data_form_pane_vc_ParamLimits

0x9215,	// (0x0004af6b) data_form_pane_vc

0x9221,	// (0x0004af77) form_field_data_pane_vc_g1

0xb0a2,	// (0x0004cdf8) form_field_data_pane_vc_t1_ParamLimits

0xb0a2,	// (0x0004cdf8) form_field_data_pane_vc_t1

0x0a47,	// (0x0004279d) input_focus_pane_vc_ParamLimits

0x0a47,	// (0x0004279d) input_focus_pane_vc

0xb0bc,	// (0x0004ce12) button_value_adjust_pane_cp3_vc

0xb0c4,	// (0x0004ce1a) button_value_adjust_pane_cp5_vc

0xb0cc,	// (0x0004ce22) form_field_data_pane_vc_ParamLimits

0xb0cc,	// (0x0004ce22) form_field_data_pane_vc

0xb0e7,	// (0x0004ce3d) form_field_data_pane_vc_cp2

0xb0ef,	// (0x0004ce45) form_field_data_wide_pane_vc_ParamLimits

0xb0ef,	// (0x0004ce45) form_field_data_wide_pane_vc

0xb109,	// (0x0004ce5f) form_field_data_wide_pane_vc_cp2

0xb111,	// (0x0004ce67) form_field_popup_pane_vc_ParamLimits

0xb111,	// (0x0004ce67) form_field_popup_pane_vc

0xb12c,	// (0x0004ce82) form_field_popup_wide_pane_vc_ParamLimits

0xb12c,	// (0x0004ce82) form_field_popup_wide_pane_vc

0xb146,	// (0x0004ce9c) form_field_slider_pane_vc_ParamLimits

0xb146,	// (0x0004ce9c) form_field_slider_pane_vc

0xb159,	// (0x0004ceaf) form_field_slider_wide_pane_vc_ParamLimits

0xb159,	// (0x0004ceaf) form_field_slider_wide_pane_vc

0xb16c,	// (0x0004cec2) grid_touch_1_pane_ParamLimits

0xb16c,	// (0x0004cec2) grid_touch_1_pane

0xb178,	// (0x0004cece) grid_touch_2_pane_ParamLimits

0xb178,	// (0x0004cece) grid_touch_2_pane

0x8afc,	// (0x0004a852) touch_pane_g1_ParamLimits

0x8afc,	// (0x0004a852) touch_pane_g1

0xb192,	// (0x0004cee8) cell_app_pane_cp_wide_ParamLimits

0xb192,	// (0x0004cee8) cell_app_pane_cp_wide

0xb1a3,	// (0x0004cef9) grid_popup_fast_wide_pane_ParamLimits

0xb1a3,	// (0x0004cef9) grid_popup_fast_wide_pane

0xb1b7,	// (0x0004cf0d) scroll_pane_cp19_ParamLimits

0xb1b7,	// (0x0004cf0d) scroll_pane_cp19

0xd1ff,	// (0x0004ef55) bg_popup_window_pane_cp20

0xb1cb,	// (0x0004cf21) listscroll_popup_fast_wide_pane

0xd24d,	// (0x0004efa3) grid_indicator_nsta_pane

0xb1d3,	// (0x0004cf29) clock_nsta_pane_g1

0xb1dc,	// (0x0004cf32) clock_nsta_pane_t1

0xb1f8,	// (0x0004cf4e) cell_indicator_nsta_pane_ParamLimits

0xb1f8,	// (0x0004cf4e) cell_indicator_nsta_pane

0xb230,	// (0x0004cf86) cell_indicator_nsta_pane_g1

0xb23e,	// (0x0004cf94) cell_indicator_nsta_pane_g2

0x0001,

0xfab1,	// (0x00051807) cell_indicator_nsta_pane_g

0xb254,	// (0x0004cfaa) clock_nsta_pane_cp

0xb25c,	// (0x0004cfb2) indicator_nsta_pane_cp

0xb265,	// (0x0004cfbb) nsta_clock_indic_pane_g1

0xd289,	// (0x0004efdf) grid_indicator_pane

0x0ec3,	// (0x00042c19) scroll_pane_cp29

0x6a05,	// (0x0004875b) indicator_nsta_pane_cp2_ParamLimits

0x6a05,	// (0x0004875b) indicator_nsta_pane_cp2

0xd24d,	// (0x0004efa3) main_apps_wheel_pane

0x9408,	// (0x0004b15e) form_midp_field_text_pane_ParamLimits

0x9557,	// (0x0004b2ad) scroll_bar_cp050_ParamLimits

0xb2ce,	// (0x0004d024) cell_indicator_pane_ParamLimits

0xb2ce,	// (0x0004d024) cell_indicator_pane

0xb2e6,	// (0x0004d03c) cell_indicator_pane_g1

0xb2f0,	// (0x0004d046) grid_wheel_folder_pane_ParamLimits

0xb2f0,	// (0x0004d046) grid_wheel_folder_pane

0xb304,	// (0x0004d05a) list_wheel_apps_pane_ParamLimits

0xb304,	// (0x0004d05a) list_wheel_apps_pane

0xb317,	// (0x0004d06d) main_apps_wheel_pane_g1_ParamLimits

0xb317,	// (0x0004d06d) main_apps_wheel_pane_g1

0xb333,	// (0x0004d089) main_apps_wheel_pane_g2_ParamLimits

0xb333,	// (0x0004d089) main_apps_wheel_pane_g2

0x0001,

0xfacd,	// (0x00051823) main_apps_wheel_pane_g_ParamLimits

0xfacd,	// (0x00051823) main_apps_wheel_pane_g

0xb34f,	// (0x0004d0a5) main_apps_wheel_pane_t1_ParamLimits

0xb34f,	// (0x0004d0a5) main_apps_wheel_pane_t1

0xb378,	// (0x0004d0ce) list_wheel_apps_pane_g1

0xb380,	// (0x0004d0d6) list_wheel_apps_pane_g2

0xb388,	// (0x0004d0de) list_wheel_apps_pane_g3

0xb390,	// (0x0004d0e6) list_wheel_apps_pane_g4

0xb39a,	// (0x0004d0f0) list_wheel_apps_pane_g5

0x0004,

0xfad2,	// (0x00051828) list_wheel_apps_pane_g

0x86b7,	// (0x0004a40d) navi_icon_text_pane

0x8ba9,	// (0x0004a8ff) aid_fill_nsta

0xb3bb,	// (0x0004d111) navi_icon_text_pane_g1

0xb3ca,	// (0x0004d120) navi_icon_text_pane_t1

0x6b4e,	// (0x000488a4) list_set_graphic_pane_t1_ParamLimits

0x6b4e,	// (0x000488a4) list_set_graphic_pane_t1

0x9ca8,	// (0x0004b9fe) popup_midp_note_alarm_window_t6_ParamLimits

0x9ca8,	// (0x0004b9fe) popup_midp_note_alarm_window_t6

0x9cba,	// (0x0004ba10) popup_midp_note_alarm_window_t7_ParamLimits

0x9cba,	// (0x0004ba10) popup_midp_note_alarm_window_t7

0x9ccc,	// (0x0004ba22) popup_midp_note_alarm_window_t8_ParamLimits

0x9ccc,	// (0x0004ba22) popup_midp_note_alarm_window_t8

0x9cde,	// (0x0004ba34) popup_midp_note_alarm_window_t9_ParamLimits

0x9cde,	// (0x0004ba34) popup_midp_note_alarm_window_t9

0x9cf0,	// (0x0004ba46) popup_midp_note_alarm_window_t10_ParamLimits

0x9cf0,	// (0x0004ba46) popup_midp_note_alarm_window_t10

0x9d02,	// (0x0004ba58) popup_midp_note_alarm_window_t11_ParamLimits

0x9d02,	// (0x0004ba58) popup_midp_note_alarm_window_t11

0x9d14,	// (0x0004ba6a) scroll_pane_cp17_ParamLimits

0x9d14,	// (0x0004ba6a) scroll_pane_cp17

0x751d,	// (0x00049273) volume_small_pane_cp_g1

0x78a3,	// (0x000495f9) volume_small_pane_cp_g2

0x78ac,	// (0x00049602) volume_small_pane_cp_g3

0x78b5,	// (0x0004960b) volume_small_pane_cp_g4

0x78be,	// (0x00049614) volume_small_pane_cp_g5

0x78c7,	// (0x0004961d) volume_small_pane_cp_g6

0x78d0,	// (0x00049626) volume_small_pane_cp_g7

0x78d9,	// (0x0004962f) volume_small_pane_cp_g8

0x78e2,	// (0x00049638) volume_small_pane_cp_g9

0x78eb,	// (0x00049641) volume_small_pane_cp_g10

0x890c,	// (0x0004a662) midp_ticker_pane_g1_ParamLimits

0x8918,	// (0x0004a66e) midp_ticker_pane_g2_ParamLimits

0xf763,	// (0x000514b9) midp_ticker_pane_g_ParamLimits

0x8924,	// (0x0004a67a) midp_ticker_pane_t1_ParamLimits

0x8bbf,	// (0x0004a915) aid_fill_nsta_2

0x9543,	// (0x0004b299) list_form2_midp_pane

0xa6c5,	// (0x0004c41b) midp_editing_number_pane_ParamLimits

0xa6d4,	// (0x0004c42a) midp_ticker_pane_ParamLimits

0xb3df,	// (0x0004d135) form2_midp_field_pane

0xb403,	// (0x0004d159) scroll_pane_cp51

0xb423,	// (0x0004d179) form2_midp_button_pane_ParamLimits

0xb423,	// (0x0004d179) form2_midp_button_pane

0xb435,	// (0x0004d18b) form2_midp_content_pane_ParamLimits

0xb435,	// (0x0004d18b) form2_midp_content_pane

0xb44f,	// (0x0004d1a5) form2_midp_field_choice_group_pane

0xb457,	// (0x0004d1ad) form2_midp_field_pane_g1

0xb45f,	// (0x0004d1b5) form2_midp_field_pane_g2

0xb467,	// (0x0004d1bd) form2_midp_field_pane_g3

0xb46f,	// (0x0004d1c5) form2_midp_field_pane_g4

0x0003,

0xfaf7,	// (0x0005184d) form2_midp_field_pane_g

0xb477,	// (0x0004d1cd) form2_midp_gauge_slider_pane

0xb47f,	// (0x0004d1d5) form2_midp_gauge_wait_pane

0xb487,	// (0x0004d1dd) form2_midp_image_pane_ParamLimits

0xb487,	// (0x0004d1dd) form2_midp_image_pane

0xb4a2,	// (0x0004d1f8) form2_midp_label_pane_ParamLimits

0xb4a2,	// (0x0004d1f8) form2_midp_label_pane

0xb4c1,	// (0x0004d217) form2_midp_label_pane_cp_ParamLimits

0xb4c1,	// (0x0004d217) form2_midp_label_pane_cp

0xb4e2,	// (0x0004d238) form2_midp_string_pane_ParamLimits

0xb4e2,	// (0x0004d238) form2_midp_string_pane

0x59af,	// (0x00047705) form2_midp_text_pane_ParamLimits

0x59af,	// (0x00047705) form2_midp_text_pane

0xb4f4,	// (0x0004d24a) form2_midp_time_pane

0xb504,	// (0x0004d25a) input_focus_pane_cp51_ParamLimits

0xb504,	// (0x0004d25a) input_focus_pane_cp51

0xb51c,	// (0x0004d272) form2_midp_label_pane_t1_ParamLimits

0xb51c,	// (0x0004d272) form2_midp_label_pane_t1

0x59d2,	// (0x00047728) form2_mdip_text_pane_t1_ParamLimits

0x59d2,	// (0x00047728) form2_mdip_text_pane_t1

0x59f1,	// (0x00047747) form2_midp_time_pane_t1

0xb56a,	// (0x0004d2c0) form2_midp_gauge_slider_pane_t1

0xb57c,	// (0x0004d2d2) form2_midp_gauge_slider_pane_t2

0xb58e,	// (0x0004d2e4) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb00,	// (0x00051856) form2_midp_gauge_slider_pane_t

0xb5a0,	// (0x0004d2f6) form2_midp_slider_pane

0xb5ac,	// (0x0004d302) form2_midp_gauge_wait_pane_t1

0xb5ba,	// (0x0004d310) form2_midp_wait_pane_ParamLimits

0xb5ba,	// (0x0004d310) form2_midp_wait_pane

0x9268,	// (0x0004afbe) list_single_2graphic_pane_cp4_ParamLimits

0x9268,	// (0x0004afbe) list_single_2graphic_pane_cp4

0xb5e5,	// (0x0004d33b) list_single_midp_graphic_pane_cp_ParamLimits

0xb5e5,	// (0x0004d33b) list_single_midp_graphic_pane_cp

0xd1ff,	// (0x0004ef55) list_highlight_pane_cp20

0xb609,	// (0x0004d35f) list_single_2graphic_pane_g1_cp4

0xab50,	// (0x0004c8a6) list_single_2graphic_pane_g2_cp4

0xb611,	// (0x0004d367) list_single_2graphic_pane_t1_cp4

0xd24d,	// (0x0004efa3) list_highlight_pane_cp21

0xb620,	// (0x0004d376) list_single_midp_graphic_pane_g4_cp

0xb62f,	// (0x0004d385) list_single_midp_graphic_pane_t1_cp

0xb644,	// (0x0004d39a) form2_mdip_string_pane_t1_ParamLimits

0xb644,	// (0x0004d39a) form2_mdip_string_pane_t1

0xd1ff,	// (0x0004ef55) bg_wml_button_pane_cp2

0xd1f5,	// (0x0004ef4b) form2_midp_image_pane_g1

0x6498,	// (0x000481ee) list_double_large_graphic_pane_g5_ParamLimits

0x6498,	// (0x000481ee) list_double_large_graphic_pane_g5

0x6539,	// (0x0004828f) midp_form_pane_ParamLimits

0xd24d,	// (0x0004efa3) main_apps_wheel_pane_ParamLimits

0x718e,	// (0x00048ee4) popup_preview_window_ParamLimits

0x718e,	// (0x00048ee4) popup_preview_window

0x7375,	// (0x000490cb) popup_touch_info_window_ParamLimits

0x7375,	// (0x000490cb) popup_touch_info_window

0x7397,	// (0x000490ed) popup_touch_menu_window_ParamLimits

0x7397,	// (0x000490ed) popup_touch_menu_window

0xd1eb,	// (0x0004ef41) bg_popup_sub_pane_cp6

0xb6e9,	// (0x0004d43f) list_touch_menu_pane

0xb6f1,	// (0x0004d447) list_single_touch_menu_pane_ParamLimits

0xb6f1,	// (0x0004d447) list_single_touch_menu_pane

0xb709,	// (0x0004d45f) list_single_touch_menu_pane_t1

0xd24d,	// (0x0004efa3) bg_popup_sub_pane_cp7_ParamLimits

0xd24d,	// (0x0004efa3) bg_popup_sub_pane_cp7

0xb717,	// (0x0004d46d) heading_sub_pane

0xb71f,	// (0x0004d475) list_touch_info_pane_ParamLimits

0xb71f,	// (0x0004d475) list_touch_info_pane

0xb72e,	// (0x0004d484) list_single_touch_info_pane_ParamLimits

0xb72e,	// (0x0004d484) list_single_touch_info_pane

0xb740,	// (0x0004d496) list_single_touch_info_pane_t1

0xb74e,	// (0x0004d4a4) list_single_touch_info_pane_t2

0x0001,

0xfb0e,	// (0x00051864) list_single_touch_info_pane_t

0x883b,	// (0x0004a591) bg_popup_heading_pane_cp

0xb75c,	// (0x0004d4b2) heading_sub_pane_t1

0x91af,	// (0x0004af05) bg_popup_preview_window_pane_cp_ParamLimits

0x91af,	// (0x0004af05) bg_popup_preview_window_pane_cp

0xb717,	// (0x0004d46d) heading_preview_pane

0xb71f,	// (0x0004d475) list_preview_pane_ParamLimits

0xb71f,	// (0x0004d475) list_preview_pane

0xb76a,	// (0x0004d4c0) popup_preview_window_g1

0xb72e,	// (0x0004d484) list_single_preview_pane_ParamLimits

0xb72e,	// (0x0004d484) list_single_preview_pane

0xb772,	// (0x0004d4c8) list_single_preview_pane_g1

0xb77a,	// (0x0004d4d0) list_single_preview_pane_t1

0xb740,	// (0x0004d496) list_single_preview_pane_t2

0x0001,

0xfb13,	// (0x00051869) list_single_preview_pane_t

0xb788,	// (0x0004d4de) bg_popup_heading_pane_cp2_ParamLimits

0xb788,	// (0x0004d4de) bg_popup_heading_pane_cp2

0xb79e,	// (0x0004d4f4) heading_preview_pane_g1

0xb7a6,	// (0x0004d4fc) heading_preview_pane_t1_ParamLimits

0xb7a6,	// (0x0004d4fc) heading_preview_pane_t1

0xd2a0,	// (0x0004eff6) soft_indicator_pane_t1_ParamLimits

0x09ba,	// (0x00042710) scroll_pane_ParamLimits

0x0dc8,	// (0x00042b1e) scroll_sc2_left_pane

0x0dbf,	// (0x00042b15) scroll_sc2_right_pane

0x0de7,	// (0x00042b3d) scroll_bg_pane_g1_ParamLimits

0x0dfc,	// (0x00042b52) scroll_bg_pane_g2_ParamLimits

0x0e14,	// (0x00042b6a) scroll_bg_pane_g3_ParamLimits

0xf6ee,	// (0x00051444) scroll_bg_pane_g_ParamLimits

0x0de7,	// (0x00042b3d) scroll_handle_pane_g1_ParamLimits

0x0e36,	// (0x00042b8c) scroll_handle_pane_g2_ParamLimits

0x0e14,	// (0x00042b6a) scroll_handle_pane_g3_ParamLimits

0xf6f5,	// (0x0005144b) scroll_handle_pane_g_ParamLimits

0x6dd5,	// (0x00048b2b) popup_choice_list_window_ParamLimits

0x6dd5,	// (0x00048b2b) popup_choice_list_window

0x8ffd,	// (0x0004ad53) choice_list_pane

0x907f,	// (0x0004add5) cell_toolbar_pane_t1

0x90a7,	// (0x0004adfd) toolbar_button_pane_ParamLimits

0xa1e4,	// (0x0004bf3a) ai_gene_pane_1_t2_ParamLimits

0xa1e4,	// (0x0004bf3a) ai_gene_pane_1_t2

0x0001,

0xf91d,	// (0x00051673) ai_gene_pane_1_t_ParamLimits

0xf91d,	// (0x00051673) ai_gene_pane_1_t

0xb7c3,	// (0x0004d519) scroll_sc2_left_pane_g1

0xb7c3,	// (0x0004d519) scroll_sc2_right_pane_g1

0x8b87,	// (0x0004a8dd) bg_popup_sub_pane_cp10

0xb7cd,	// (0x0004d523) list_choice_list_pane

0xb7e6,	// (0x0004d53c) list_single_choice_list_pane_ParamLimits

0xb7e6,	// (0x0004d53c) list_single_choice_list_pane

0xb7fe,	// (0x0004d554) list_single_choice_list_pane_g1

0x0ba4,	// (0x000428fa) list_single_choice_list_pane_t1_ParamLimits

0x0ba4,	// (0x000428fa) list_single_choice_list_pane_t1

0xb806,	// (0x0004d55c) choice_list_pane_g1

0xb80e,	// (0x0004d564) choice_list_pane_t1

0xd1eb,	// (0x0004ef41) input_focus_pane_cp11

0x0d22,	// (0x00042a78) title_pane_stacon_g2_ParamLimits

0x0d22,	// (0x00042a78) title_pane_stacon_g2

0x0002,

0xf6d4,	// (0x0005142a) title_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0005142a) title_pane_stacon_g

0x883b,	// (0x0004a591) cursor_press_pane

0x6e8f,	// (0x00048be5) popup_fep_hwr_window_ParamLimits

0x6e8f,	// (0x00048be5) popup_fep_hwr_window

0x6f19,	// (0x00048c6f) popup_fep_vkb_window_ParamLimits

0x6f19,	// (0x00048c6f) popup_fep_vkb_window

0xb81c,	// (0x0004d572) cursor_press_pane_g1

0x0002,

0xfb3c,	// (0x00051892) fep_vkb_side_pane_g_ParamLimits

0x792d,	// (0x00049683) fep_hwr_candidate_pane_ParamLimits

0x792d,	// (0x00049683) fep_hwr_candidate_pane

0x7957,	// (0x000496ad) fep_hwr_side_pane_ParamLimits

0x7957,	// (0x000496ad) fep_hwr_side_pane

0x7979,	// (0x000496cf) fep_hwr_top_pane_ParamLimits

0x7979,	// (0x000496cf) fep_hwr_top_pane

0x7991,	// (0x000496e7) fep_hwr_write_pane_ParamLimits

0x7991,	// (0x000496e7) fep_hwr_write_pane

0xfb3c,	// (0x00051892) fep_vkb_side_pane_g

0xb824,	// (0x0004d57a) fep_hwr_top_pane_g1

0xb836,	// (0x0004d58c) fep_hwr_top_pane_g2

0x79bd,	// (0x00049713) fep_hwr_top_pane_g3

0x0002,

0xfb18,	// (0x0005186e) fep_hwr_top_pane_g

0x79d2,	// (0x00049728) fep_hwr_top_text_pane

0x3f79,	// (0x00045ccf) fep_hwr_top_text_pane_g1

0xb86c,	// (0x0004d5c2) fep_hwr_top_text_pane_t1

0x7adc,	// (0x00049832) fep_hwr_candidate_pane_g1

0xbab7,	// (0x0004d80d) fep_vkb_keypad_pane_g3_ParamLimits

0xbab7,	// (0x0004d80d) fep_vkb_keypad_pane_g3

0xbae3,	// (0x0004d839) fep_vkb_keypad_pane_g4_ParamLimits

0xbae3,	// (0x0004d839) fep_vkb_keypad_pane_g4

0xbb5a,	// (0x0004d8b0) fep_vkb_bottom_pane_g2_ParamLimits

0xbb5a,	// (0x0004d8b0) fep_vkb_bottom_pane_g2

0x0001,

0xfb43,	// (0x00051899) fep_vkb_bottom_pane_g_ParamLimits

0xfb43,	// (0x00051899) fep_vkb_bottom_pane_g

0xb7c3,	// (0x0004d519) cell_vkb_side_pane_g2

0x0001,

0xfb4d,	// (0x000518a3) cell_vkb_side_pane_g

0xbbe5,	// (0x0004d93b) cell_vkb_side_pane_t1

0xbbf3,	// (0x0004d949) cell_vkb_side_pane_t1_copy1

0xb7c3,	// (0x0004d519) bg_fep_vkb_candidate_pane_g2

0xbd37,	// (0x0004da8d) cell_vkb_candidate_pane_ParamLimits

0xb87a,	// (0x0004d5d0) aid_size_cell_vkb_ParamLimits

0xb87a,	// (0x0004d5d0) aid_size_cell_vkb

0xbd37,	// (0x0004da8d) cell_vkb_candidate_pane

0x7af6,	// (0x0004984c) bg_popup_fep_shadow_pane_g1

0xb90c,	// (0x0004d662) fep_vkb_bottom_pane_ParamLimits

0xb90c,	// (0x0004d662) fep_vkb_bottom_pane

0xb949,	// (0x0004d69f) fep_vkb_candidate_pane_ParamLimits

0xb949,	// (0x0004d69f) fep_vkb_candidate_pane

0xb965,	// (0x0004d6bb) fep_vkb_keypad_pane_ParamLimits

0xb965,	// (0x0004d6bb) fep_vkb_keypad_pane

0xb998,	// (0x0004d6ee) fep_vkb_side_pane_ParamLimits

0xb998,	// (0x0004d6ee) fep_vkb_side_pane

0xb9d4,	// (0x0004d72a) fep_vkb_top_pane_ParamLimits

0xb9d4,	// (0x0004d72a) fep_vkb_top_pane

0xba10,	// (0x0004d766) fep_vkb_top_pane_g1_ParamLimits

0xba10,	// (0x0004d766) fep_vkb_top_pane_g1

0xba1f,	// (0x0004d775) fep_vkb_top_pane_g2_ParamLimits

0xba1f,	// (0x0004d775) fep_vkb_top_pane_g2

0xba2e,	// (0x0004d784) fep_vkb_top_pane_g3_ParamLimits

0xba2e,	// (0x0004d784) fep_vkb_top_pane_g3

0x0003,

0xfb33,	// (0x00051889) fep_vkb_top_pane_g_ParamLimits

0xfb33,	// (0x00051889) fep_vkb_top_pane_g

0xba4c,	// (0x0004d7a2) fep_vkb_top_text_pane_ParamLimits

0xba4c,	// (0x0004d7a2) fep_vkb_top_text_pane

0xba5d,	// (0x0004d7b3) fep_vkb_side_pane_g1_ParamLimits

0xba5d,	// (0x0004d7b3) fep_vkb_side_pane_g1

0xbaa6,	// (0x0004d7fc) grid_vkb_side_pane_ParamLimits

0xbaa6,	// (0x0004d7fc) grid_vkb_side_pane

0x7afe,	// (0x00049854) bg_popup_fep_shadow_pane_g2

0x7b07,	// (0x0004985d) bg_popup_fep_shadow_pane_g3

0x7b0f,	// (0x00049865) bg_popup_fep_shadow_pane_g4

0x7b18,	// (0x0004986e) bg_popup_fep_shadow_pane_g5

0x7b22,	// (0x00049878) bg_popup_fep_shadow_pane_g6

0x7b2a,	// (0x00049880) bg_popup_fep_shadow_pane_g7

0x0ace,	// (0x00042824) bg_popup_fep_shadow_pane_g8

0xbb05,	// (0x0004d85b) grid_vkb_keypad_number_pane_ParamLimits

0xbb05,	// (0x0004d85b) grid_vkb_keypad_number_pane

0xbb19,	// (0x0004d86f) grid_vkb_keypad_pane_ParamLimits

0xbb19,	// (0x0004d86f) grid_vkb_keypad_pane

0xbb3f,	// (0x0004d895) fep_vkb_bottom_pane_g1_ParamLimits

0xbb3f,	// (0x0004d895) fep_vkb_bottom_pane_g1

0xbb68,	// (0x0004d8be) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xbb68,	// (0x0004d8be) grid_vkb_keypad_bottom_left_pane

0xbb7d,	// (0x0004d8d3) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xbb7d,	// (0x0004d8d3) grid_vkb_keypad_bottom_right_pane

0xbb92,	// (0x0004d8e8) fep_vkb_top_text_pane_g1

0xbbad,	// (0x0004d903) fep_vkb_top_text_pane_t1

0xbbc2,	// (0x0004d918) cell_vkb_side_pane_ParamLimits

0xbbc2,	// (0x0004d918) cell_vkb_side_pane

0xb7c3,	// (0x0004d519) cell_vkb_side_pane_g1

0xbc01,	// (0x0004d957) cell_vkb_keypad_pane_ParamLimits

0xbc01,	// (0x0004d957) cell_vkb_keypad_pane

0xbc8e,	// (0x0004d9e4) cell_vkb_keypad_pane_g1

0x0008,

0xfb60,	// (0x000518b6) bg_popup_fep_shadow_pane_g

0xb7c3,	// (0x0004d519) cell_hwr_side_pane_g1

0xb7c3,	// (0x0004d519) cell_hwr_side_pane_g2

0xbc98,	// (0x0004d9ee) cell_vkb_keypad_pane_t1

0xbca6,	// (0x0004d9fc) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbca6,	// (0x0004d9fc) cell_vkb_keypad_bottom_left_pane

0xbcc3,	// (0x0004da19) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbcc3,	// (0x0004da19) cell_vkb_keypad_bottom_right_pane

0xb7c3,	// (0x0004d519) cell_vkb_keypad_bottom_left_pane_g1

0xb7c3,	// (0x0004d519) cell_vkb_keypad_bottom_right_pane_g1

0xbcfc,	// (0x0004da52) cell_vkb_keypad_number_pane_ParamLimits

0xbcfc,	// (0x0004da52) cell_vkb_keypad_number_pane

0xbd1b,	// (0x0004da71) cell_vkb_keypad_number_pane_g1

0xbd25,	// (0x0004da7b) cell_vkb_keypad_number_pane_g2

0xbd2e,	// (0x0004da84) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb52,	// (0x000518a8) cell_vkb_keypad_number_pane_g

0xbc98,	// (0x0004d9ee) cell_vkb_keypad_number_pane_t1

0xbd58,	// (0x0004daae) fep_vkb_candidate_pane_g1

0x0001,

0xfb4d,	// (0x000518a3) cell_hwr_side_pane_g

0xbd71,	// (0x0004dac7) cell_hwr_side_pane_t1

0x7b3c,	// (0x00049892) cell_hwr_side_pane_t1_copy1

0xba3e,	// (0x0004d794) cell_hwr_candidate_pane_g1

0x7b4a,	// (0x000498a0) cell_hwr_candidate_pane_t1

0xb7c3,	// (0x0004d519) cell_vkb_candidate_pane_g2

0xbdf7,	// (0x0004db4d) cell_vkb_candidate_pane_t1

0x78f4,	// (0x0004964a) bg_popup_fep_shadow_pane_ParamLimits

0x78f4,	// (0x0004964a) bg_popup_fep_shadow_pane

0x21f7,	// (0x00043f4d) bg_fep_hwr_top_pane_g4

0xb848,	// (0x0004d59e) bg_hwr_side_pane_g1_ParamLimits

0xb848,	// (0x0004d59e) bg_hwr_side_pane_g1

0x7a10,	// (0x00049766) cell_hwr_side_pane_ParamLimits

0x7a10,	// (0x00049766) cell_hwr_side_pane

0x7a4d,	// (0x000497a3) fep_hwr_write_pane_g1_ParamLimits

0x7a4d,	// (0x000497a3) fep_hwr_write_pane_g1

0x7a5a,	// (0x000497b0) fep_hwr_write_pane_g2_ParamLimits

0x7a5a,	// (0x000497b0) fep_hwr_write_pane_g2

0x7a67,	// (0x000497bd) fep_hwr_write_pane_g3_ParamLimits

0x7a67,	// (0x000497bd) fep_hwr_write_pane_g3

0x7a75,	// (0x000497cb) fep_hwr_write_pane_g4_ParamLimits

0x7a75,	// (0x000497cb) fep_hwr_write_pane_g4

0x0005,

0xfb1f,	// (0x00051875) fep_hwr_write_pane_g_ParamLimits

0xfb1f,	// (0x00051875) fep_hwr_write_pane_g

0x21f7,	// (0x00043f4d) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x21f7,	// (0x00043f4d) bg_fep_hwr_candidate_pane_g2

0x7a8a,	// (0x000497e0) cell_hwr_candidate_pane_ParamLimits

0x7a8a,	// (0x000497e0) cell_hwr_candidate_pane

0x7adc,	// (0x00049832) fep_hwr_candidate_pane_g1_ParamLimits

0xb8a8,	// (0x0004d5fe) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xb8a8,	// (0x0004d5fe) bg_popup_fep_shadow_pane_cp2

0xba3e,	// (0x0004d794) fep_vkb_top_pane_g4_ParamLimits

0xba3e,	// (0x0004d794) fep_vkb_top_pane_g4

0xba84,	// (0x0004d7da) fep_vkb_side_pane_g2_ParamLimits

0xba84,	// (0x0004d7da) fep_vkb_side_pane_g2

0x52e4,	// (0x0004703a) list_setting_pane_t4_ParamLimits

0x52e4,	// (0x0004703a) list_setting_pane_t4

0x5380,	// (0x000470d6) list_setting_number_pane_t5_ParamLimits

0x5380,	// (0x000470d6) list_setting_number_pane_t5

0x6824,	// (0x0004857a) list_double_heading_pane_cp2_ParamLimits

0x6824,	// (0x0004857a) list_double_heading_pane_cp2

0x0a61,	// (0x000427b7) list_double_heading_pane_g1_cp2_ParamLimits

0x0a61,	// (0x000427b7) list_double_heading_pane_g1_cp2

0x0a6d,	// (0x000427c3) list_double_heading_pane_g2_cp2_ParamLimits

0x0a6d,	// (0x000427c3) list_double_heading_pane_g2_cp2

0xbe05,	// (0x0004db5b) list_double_heading_pane_t1_cp2_ParamLimits

0xbe05,	// (0x0004db5b) list_double_heading_pane_t1_cp2

0xbe1b,	// (0x0004db71) list_double_heading_pane_t2_cp2_ParamLimits

0xbe1b,	// (0x0004db71) list_double_heading_pane_t2_cp2

0xd1e3,	// (0x0004ef39) aid_value_unit2

0x5f78,	// (0x00047cce) popup_preview_fixed_window

0xd38e,	// (0x0004f0e4) bg_popup_preview_window_pane_cp02

0xbe2d,	// (0x0004db83) list_preview_fixed_pane

0xbe73,	// (0x0004dbc9) list_empty_pane_fp_ParamLimits

0xbe73,	// (0x0004dbc9) list_empty_pane_fp

0xbe73,	// (0x0004dbc9) list_single_cale_day_pane_fp_ParamLimits

0xbe73,	// (0x0004dbc9) list_single_cale_day_pane_fp

0xbe73,	// (0x0004dbc9) list_single_graphic_heading_pane_fp_ParamLimits

0xbe73,	// (0x0004dbc9) list_single_graphic_heading_pane_fp

0xbe73,	// (0x0004dbc9) list_single_graphic_pane_fp_ParamLimits

0xbe73,	// (0x0004dbc9) list_single_graphic_pane_fp

0xbe73,	// (0x0004dbc9) list_single_heading_pane_fp_ParamLimits

0xbe73,	// (0x0004dbc9) list_single_heading_pane_fp

0xbe73,	// (0x0004dbc9) list_single_pane_fp_ParamLimits

0xbe73,	// (0x0004dbc9) list_single_pane_fp

0xbe8c,	// (0x0004dbe2) list_single_pane_fp_g1_ParamLimits

0xbe8c,	// (0x0004dbe2) list_single_pane_fp_g1

0x648c,	// (0x000481e2) list_single_pane_fp_g2_ParamLimits

0x648c,	// (0x000481e2) list_single_pane_fp_g2

0x7b68,	// (0x000498be) list_single_pane_fp_g3_ParamLimits

0x7b68,	// (0x000498be) list_single_pane_fp_g3

0xbe98,	// (0x0004dbee) list_single_pane_fp_g4_ParamLimits

0xbe98,	// (0x0004dbee) list_single_pane_fp_g4

0x0003,

0xfb81,	// (0x000518d7) list_single_pane_fp_g_ParamLimits

0xfb81,	// (0x000518d7) list_single_pane_fp_g

0x5a04,	// (0x0004775a) list_single_pane_fp_t1_ParamLimits

0x5a04,	// (0x0004775a) list_single_pane_fp_t1

0x5a1b,	// (0x00047771) list_single_graphic_pane_fp_g1_ParamLimits

0x5a1b,	// (0x00047771) list_single_graphic_pane_fp_g1

0xbe8c,	// (0x0004dbe2) list_single_graphic_pane_fp_g2_ParamLimits

0xbe8c,	// (0x0004dbe2) list_single_graphic_pane_fp_g2

0x648c,	// (0x000481e2) list_single_graphic_pane_fp_g3_ParamLimits

0x648c,	// (0x000481e2) list_single_graphic_pane_fp_g3

0x7b68,	// (0x000498be) list_single_graphic_pane_fp_g4_ParamLimits

0x7b68,	// (0x000498be) list_single_graphic_pane_fp_g4

0xbe98,	// (0x0004dbee) list_single_graphic_pane_fp_g5_ParamLimits

0xbe98,	// (0x0004dbee) list_single_graphic_pane_fp_g5

0x0004,

0xfb8a,	// (0x000518e0) list_single_graphic_pane_fp_g_ParamLimits

0xfb8a,	// (0x000518e0) list_single_graphic_pane_fp_g

0x5a27,	// (0x0004777d) list_single_graphic_pane_fp_t1_ParamLimits

0x5a27,	// (0x0004777d) list_single_graphic_pane_fp_t1

0x5a1b,	// (0x00047771) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x5a1b,	// (0x00047771) list_single_graphic_heading_pane_fp_g1

0xbe8c,	// (0x0004dbe2) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xbe8c,	// (0x0004dbe2) list_single_graphic_heading_pane_fp_g2

0x648c,	// (0x000481e2) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x648c,	// (0x000481e2) list_single_graphic_heading_pane_fp_g3

0x7b68,	// (0x000498be) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x7b68,	// (0x000498be) list_single_graphic_heading_pane_fp_g4

0xbe98,	// (0x0004dbee) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xbe98,	// (0x0004dbee) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x000518e0) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x000518e0) list_single_graphic_heading_pane_fp_g

0x5a3d,	// (0x00047793) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x5a3d,	// (0x00047793) list_single_graphic_heading_pane_fp_t1

0x5a53,	// (0x000477a9) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5a53,	// (0x000477a9) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb95,	// (0x000518eb) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb95,	// (0x000518eb) list_single_graphic_heading_pane_fp_t

0x5a65,	// (0x000477bb) list_single_cale_day_pane_fp_g1_ParamLimits

0x5a65,	// (0x000477bb) list_single_cale_day_pane_fp_g1

0xbea4,	// (0x0004dbfa) list_single_cale_day_pane_fp_g2_ParamLimits

0xbea4,	// (0x0004dbfa) list_single_cale_day_pane_fp_g2

0x7b7c,	// (0x000498d2) list_single_cale_day_pane_fp_g3_ParamLimits

0x7b7c,	// (0x000498d2) list_single_cale_day_pane_fp_g3

0x7ba4,	// (0x000498fa) list_single_cale_day_pane_fp_g4_ParamLimits

0x7ba4,	// (0x000498fa) list_single_cale_day_pane_fp_g4

0x7bc8,	// (0x0004991e) list_single_cale_day_pane_fp_g5_ParamLimits

0x7bc8,	// (0x0004991e) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9a,	// (0x000518f0) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9a,	// (0x000518f0) list_single_cale_day_pane_fp_g

0x5a9d,	// (0x000477f3) list_single_cale_day_pane_fp_t1_ParamLimits

0x5a9d,	// (0x000477f3) list_single_cale_day_pane_fp_t1

0x5ac3,	// (0x00047819) list_single_cale_day_pane_fp_t2_ParamLimits

0x5ac3,	// (0x00047819) list_single_cale_day_pane_fp_t2

0x5adc,	// (0x00047832) list_single_cale_day_pane_fp_t3_ParamLimits

0x5adc,	// (0x00047832) list_single_cale_day_pane_fp_t3

0x0002,

0xfba5,	// (0x000518fb) list_single_cale_day_pane_fp_t_ParamLimits

0xfba5,	// (0x000518fb) list_single_cale_day_pane_fp_t

0xbe8c,	// (0x0004dbe2) list_empty_pane_fp_g1_ParamLimits

0xbe8c,	// (0x0004dbe2) list_empty_pane_fp_g1

0x5af5,	// (0x0004784b) list_empty_pane_fp_t1

0x5b03,	// (0x00047859) list_empty_pane_fp_t2

0x0001,

0xfbac,	// (0x00051902) list_empty_pane_fp_t

0xbe8c,	// (0x0004dbe2) list_single_heading_pane_fp_g1_ParamLimits

0xbe8c,	// (0x0004dbe2) list_single_heading_pane_fp_g1

0x648c,	// (0x000481e2) list_single_heading_pane_fp_g2_ParamLimits

0x648c,	// (0x000481e2) list_single_heading_pane_fp_g2

0x7b68,	// (0x000498be) list_single_heading_pane_fp_g3_ParamLimits

0x7b68,	// (0x000498be) list_single_heading_pane_fp_g3

0x0002,

0xfbb1,	// (0x00051907) list_single_heading_pane_fp_g_ParamLimits

0xfbb1,	// (0x00051907) list_single_heading_pane_fp_g

0x5b11,	// (0x00047867) list_single_heading_pane_fp_t1_ParamLimits

0x5b11,	// (0x00047867) list_single_heading_pane_fp_t1

0x5b23,	// (0x00047879) list_single_heading_pane_fp_t2_ParamLimits

0x5b23,	// (0x00047879) list_single_heading_pane_fp_t2

0x0001,

0xfbb8,	// (0x0005190e) list_single_heading_pane_fp_t_ParamLimits

0xfbb8,	// (0x0005190e) list_single_heading_pane_fp_t

0x0bb9,	// (0x0004290f) aid_size_cell_fast

0xd363,	// (0x0004f0b9) soft_indicator_pane_cp1_t1

0x0bf6,	// (0x0004294c) cell_app_pane_cp2_ParamLimits

0x0bf6,	// (0x0004294c) cell_app_pane_cp2

0x7916,	// (0x0004966c) fep_hwr_candidate_drop_down_list_pane

0x2205,	// (0x00043f5b) fep_hwr_candidate_pane_g3_ParamLimits

0x2205,	// (0x00043f5b) fep_hwr_candidate_pane_g3

0x2212,	// (0x00043f68) fep_hwr_candidate_pane_g4_ParamLimits

0x2212,	// (0x00043f68) fep_hwr_candidate_pane_g4

0x0002,

0xfb2c,	// (0x00051882) fep_hwr_candidate_pane_g_ParamLimits

0xfb2c,	// (0x00051882) fep_hwr_candidate_pane_g

0xb938,	// (0x0004d68e) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xb938,	// (0x0004d68e) fep_vkb_candidate_drop_down_list_pane

0xbd60,	// (0x0004dab6) fep_vkb_candidate_pane_g3

0xbd68,	// (0x0004dabe) fep_vkb_candidate_pane_g4

0x0002,

0xfb59,	// (0x000518af) fep_vkb_candidate_pane_g

0xba3e,	// (0x0004d794) cell_hwr_candidate_pane_g1_ParamLimits

0xbd7f,	// (0x0004dad5) cell_hwr_candidate_pane_g3_ParamLimits

0xbd7f,	// (0x0004dad5) cell_hwr_candidate_pane_g3

0xbda0,	// (0x0004daf6) cell_hwr_candidate_pane_g4_ParamLimits

0xbda0,	// (0x0004daf6) cell_hwr_candidate_pane_g4

0x0002,

0xfb73,	// (0x000518c9) cell_hwr_candidate_pane_g_ParamLimits

0xfb73,	// (0x000518c9) cell_hwr_candidate_pane_g

0xbdc1,	// (0x0004db17) cell_vkb_candidate_pane_g3_ParamLimits

0xbdc1,	// (0x0004db17) cell_vkb_candidate_pane_g3

0xbddc,	// (0x0004db32) cell_vkb_candidate_pane_g4_ParamLimits

0xbddc,	// (0x0004db32) cell_vkb_candidate_pane_g4

0xbeb0,	// (0x0004dc06) cell_app_pane_cp2_g1_ParamLimits

0xbeb0,	// (0x0004dc06) cell_app_pane_cp2_g1

0xbece,	// (0x0004dc24) cell_app_pane_cp2_g2_ParamLimits

0xbece,	// (0x0004dc24) cell_app_pane_cp2_g2

0x0001,

0xfbbd,	// (0x00051913) cell_app_pane_cp2_g_ParamLimits

0xfbbd,	// (0x00051913) cell_app_pane_cp2_g

0xbeda,	// (0x0004dc30) cell_app_pane_cp2_t1_ParamLimits

0xbeda,	// (0x0004dc30) cell_app_pane_cp2_t1

0x0a47,	// (0x0004279d) grid_highlight_pane_cp1_ParamLimits

0x0a47,	// (0x0004279d) grid_highlight_pane_cp1

0x7bec,	// (0x00049942) cell_hwr_candidate_pane_cp1_ParamLimits

0x7bec,	// (0x00049942) cell_hwr_candidate_pane_cp1

0xba3e,	// (0x0004d794) fep_hwr_candidate_drop_down_list_pane_g1

0xbeec,	// (0x0004dc42) fep_hwr_candidate_drop_down_list_pane_g2

0xbef9,	// (0x0004dc4f) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc2,	// (0x00051918) fep_hwr_candidate_drop_down_list_pane_g

0x7c10,	// (0x00049966) fep_hwr_candidate_drop_down_list_scroll_pane

0x7c19,	// (0x0004996f) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7c19,	// (0x0004996f) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7c26,	// (0x0004997c) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7c26,	// (0x0004997c) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7c33,	// (0x00049989) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7c33,	// (0x00049989) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xbdc1,	// (0x0004db17) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xbdc1,	// (0x0004db17) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xbddc,	// (0x0004db32) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xbddc,	// (0x0004db32) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7c40,	// (0x00049996) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7c40,	// (0x00049996) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7c5b,	// (0x000499b1) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7c5b,	// (0x000499b1) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7c76,	// (0x000499cc) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7c76,	// (0x000499cc) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc9,	// (0x0005191f) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc9,	// (0x0005191f) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xbf06,	// (0x0004dc5c) cell_vkb_candidate_pane_cp1_ParamLimits

0xbf06,	// (0x0004dc5c) cell_vkb_candidate_pane_cp1

0xba3e,	// (0x0004d794) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xba3e,	// (0x0004d794) fep_vkb_candidate_drop_down_list_pane_g1

0xbeec,	// (0x0004dc42) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xbeec,	// (0x0004dc42) fep_vkb_candidate_drop_down_list_pane_g2

0xbef9,	// (0x0004dc4f) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xbef9,	// (0x0004dc4f) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc2,	// (0x00051918) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc2,	// (0x00051918) fep_vkb_candidate_drop_down_list_pane_g

0xbf2c,	// (0x0004dc82) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xbf2c,	// (0x0004dc82) fep_vkb_candidate_drop_down_list_scroll_pane

0xbf39,	// (0x0004dc8f) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xbf39,	// (0x0004dc8f) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xbf46,	// (0x0004dc9c) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xbf46,	// (0x0004dc9c) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xbf52,	// (0x0004dca8) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xbf52,	// (0x0004dca8) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xbd7f,	// (0x0004dad5) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xbd7f,	// (0x0004dad5) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xbda0,	// (0x0004daf6) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xbda0,	// (0x0004daf6) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xbf5e,	// (0x0004dcb4) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xbf5e,	// (0x0004dcb4) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xbf7f,	// (0x0004dcd5) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xbf7f,	// (0x0004dcd5) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xbfa0,	// (0x0004dcf6) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xbfa0,	// (0x0004dcf6) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbda,	// (0x00051930) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbda,	// (0x00051930) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x6090,	// (0x00047de6) title_pane_g1_ParamLimits

0x609d,	// (0x00047df3) title_pane_g2_ParamLimits

0xf554,	// (0x000512aa) title_pane_g_ParamLimits

0x3f71,	// (0x00045cc7) aid_call2_pane

0x3f69,	// (0x00045cbf) aid_call_pane

0x3f79,	// (0x00045ccf) popup_clock_analogue_window_g1

0x3f79,	// (0x00045ccf) popup_clock_analogue_window_g2

0x6805,	// (0x0004855b) popup_clock_analogue_window_g3

0x680e,	// (0x00048564) popup_clock_analogue_window_g4

0xd1f5,	// (0x0004ef4b) popup_clock_analogue_window_g5

0x0004,

0xf703,	// (0x00051459) popup_clock_analogue_window_g

0x6816,	// (0x0004856c) popup_clock_analogue_window_t1

0x6857,	// (0x000485ad) clock_digital_number_pane_ParamLimits

0x6857,	// (0x000485ad) clock_digital_number_pane

0x6863,	// (0x000485b9) clock_digital_number_pane_cp02_ParamLimits

0x6863,	// (0x000485b9) clock_digital_number_pane_cp02

0x686f,	// (0x000485c5) clock_digital_number_pane_cp03_ParamLimits

0x686f,	// (0x000485c5) clock_digital_number_pane_cp03

0x687b,	// (0x000485d1) clock_digital_number_pane_cp04_ParamLimits

0x687b,	// (0x000485d1) clock_digital_number_pane_cp04

0x6887,	// (0x000485dd) clock_digital_separator_pane_ParamLimits

0x6887,	// (0x000485dd) clock_digital_separator_pane

0x6893,	// (0x000485e9) popup_clock_digital_window_t1_ParamLimits

0x6893,	// (0x000485e9) popup_clock_digital_window_t1

0xd1f5,	// (0x0004ef4b) clock_digital_number_pane_g1

0xd1f5,	// (0x0004ef4b) clock_digital_number_pane_g2

0x0001,

0xf70e,	// (0x00051464) clock_digital_number_pane_g

0xd1f5,	// (0x0004ef4b) clock_digital_separator_pane_g1

0xd1f5,	// (0x0004ef4b) clock_digital_separator_pane_g2

0x0001,

0xf70e,	// (0x00051464) clock_digital_separator_pane_g

0x8ba9,	// (0x0004a8ff) aid_fill_nsta_ParamLimits

0x8cf9,	// (0x0004aa4f) indicator_nsta_pane_ParamLimits

0x8e8a,	// (0x0004abe0) popup_clock_analogue_window

0x8e8a,	// (0x0004abe0) popup_clock_digital_window

0xd24d,	// (0x0004efa3) grid_indicator_nsta_pane_ParamLimits

0xb1ea,	// (0x0004cf40) clock_nsta_pane_t2

0x0001,

0xfaac,	// (0x00051802) clock_nsta_pane_t

0x676e,	// (0x000484c4) aid_size_max_handle

0x6778,	// (0x000484ce) aid_size_min_handle

0x883b,	// (0x0004a591) editor_scroll_pane

0xbfbb,	// (0x0004dd11) ex_editor_pane

0x0b7f,	// (0x000428d5) scroll_pane_cp13

0x09e6,	// (0x0004273c) scroll_pane_cp14

0x3fc7,	// (0x00045d1d) scroll_pane_cp36

0x683a,	// (0x00048590) list_single_graphic_hl_pane_cp2_ParamLimits

0x683a,	// (0x00048590) list_single_graphic_hl_pane_cp2

0x7737,	// (0x0004948d) list_single_graphic_hl_pane_ParamLimits

0x7737,	// (0x0004948d) list_single_graphic_hl_pane

0x5b39,	// (0x0004788f) aid_size_min_hl_cp1

0xbfc3,	// (0x0004dd19) list_highlight_pane_cp34_ParamLimits

0xbfc3,	// (0x0004dd19) list_highlight_pane_cp34

0xbfd4,	// (0x0004dd2a) list_single_graphic_hl_pane_g1_ParamLimits

0xbfd4,	// (0x0004dd2a) list_single_graphic_hl_pane_g1

0x5b42,	// (0x00047898) list_single_graphic_hl_pane_g2_ParamLimits

0x5b42,	// (0x00047898) list_single_graphic_hl_pane_g2

0x5b42,	// (0x00047898) list_single_graphic_hl_pane_g3_ParamLimits

0x5b42,	// (0x00047898) list_single_graphic_hl_pane_g3

0x782c,	// (0x00049582) list_single_graphic_hl_pane_g4_ParamLimits

0x782c,	// (0x00049582) list_single_graphic_hl_pane_g4

0x7c91,	// (0x000499e7) list_single_graphic_hl_pane_g5_ParamLimits

0x7c91,	// (0x000499e7) list_single_graphic_hl_pane_g5

0x0004,

0xfbeb,	// (0x00051941) list_single_graphic_hl_pane_g_ParamLimits

0xfbeb,	// (0x00051941) list_single_graphic_hl_pane_g

0x5b4e,	// (0x000478a4) list_single_graphic_hl_pane_t1_ParamLimits

0x5b4e,	// (0x000478a4) list_single_graphic_hl_pane_t1

0xbfe1,	// (0x0004dd37) aid_size_min_hl_cp2

0xbfea,	// (0x0004dd40) list_highlight_pane_cp34_cp2_ParamLimits

0xbfea,	// (0x0004dd40) list_highlight_pane_cp34_cp2

0xbfd4,	// (0x0004dd2a) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xbfd4,	// (0x0004dd2a) list_single_graphic_hl_pane_g1_cp2

0xbff7,	// (0x0004dd4d) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xbff7,	// (0x0004dd4d) list_single_graphic_hl_pane_g2_cp2

0xc003,	// (0x0004dd59) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc003,	// (0x0004dd59) list_single_graphic_hl_pane_g3_cp2

0x1c3a,	// (0x00043990) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x1c3a,	// (0x00043990) list_single_graphic_hl_pane_g4_cp2

0xc011,	// (0x0004dd67) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc011,	// (0x0004dd67) list_single_graphic_hl_pane_g5_cp2

0x6ca5,	// (0x000489fb) control_pane_g4_ParamLimits

0x6ca5,	// (0x000489fb) control_pane_g4

0x8b87,	// (0x0004a8dd) bg_popup_sub_pane_cp10_ParamLimits

0xb7cd,	// (0x0004d523) list_choice_list_pane_ParamLimits

0xb7dc,	// (0x0004d532) scroll_pane_cp23

0xd38e,	// (0x0004f0e4) bg_popup_preview_window_pane_cp02_ParamLimits

0xbe2d,	// (0x0004db83) list_preview_fixed_pane_ParamLimits

0xbe43,	// (0x0004db99) list_preview_fixed_pane_cp_ParamLimits

0xbe43,	// (0x0004db99) list_preview_fixed_pane_cp

0xbe4f,	// (0x0004dba5) popup_preview_fixed_window_g1_ParamLimits

0xbe4f,	// (0x0004dba5) popup_preview_fixed_window_g1

0xbe5b,	// (0x0004dbb1) popup_preview_fixed_window_g2_ParamLimits

0xbe5b,	// (0x0004dbb1) popup_preview_fixed_window_g2

0x0002,

0xfb7a,	// (0x000518d0) popup_preview_fixed_window_g_ParamLimits

0xfb7a,	// (0x000518d0) popup_preview_fixed_window_g

0x6657,	// (0x000483ad) aid_navi_side_left_pane_ParamLimits

0x666c,	// (0x000483c2) aid_navi_side_right_pane_ParamLimits

0x6684,	// (0x000483da) navi_icon_pane_stacon_ParamLimits

0x6698,	// (0x000483ee) navi_navi_pane_stacon_ParamLimits

0x6684,	// (0x000483da) navi_text_pane_stacon_ParamLimits

0xd1eb,	// (0x0004ef41) main_text_info_pane

0xc03b,	// (0x0004dd91) listscroll_text_info_pane

0xc043,	// (0x0004dd99) list_text_info_pane_ParamLimits

0xc043,	// (0x0004dd99) list_text_info_pane

0xc052,	// (0x0004dda8) scroll_pane_cp24_ParamLimits

0xc052,	// (0x0004dda8) scroll_pane_cp24

0xc070,	// (0x0004ddc6) list_text_info_pane_t1_ParamLimits

0xc070,	// (0x0004ddc6) list_text_info_pane_t1

0x6df7,	// (0x00048b4d) popup_fast_swap2_window_ParamLimits

0x6df7,	// (0x00048b4d) popup_fast_swap2_window

0xc095,	// (0x0004ddeb) aid_size_cell_fast2

0xd1eb,	// (0x0004ef41) bg_popup_window_pane_cp17

0x956f,	// (0x0004b2c5) heading_pane_cp2

0x076b,	// (0x000424c1) listscroll_fast2_pane

0xc09f,	// (0x0004ddf5) grid_fast2_pane

0xc0a9,	// (0x0004ddff) listscroll_fast2_pane_g1

0xc0b3,	// (0x0004de09) listscroll_fast2_pane_g2

0x0001,

0xfbf6,	// (0x0005194c) listscroll_fast2_pane_g

0x0b7f,	// (0x000428d5) scroll_pane_cp26

0xc0bd,	// (0x0004de13) cell_fast2_pane_ParamLimits

0xc0bd,	// (0x0004de13) cell_fast2_pane

0xc0d4,	// (0x0004de2a) cell_fast2_pane_g1

0xc0dd,	// (0x0004de33) cell_fast2_pane_g2

0xc0e6,	// (0x0004de3c) cell_fast2_pane_g3

0x0002,

0xfbfb,	// (0x00051951) cell_fast2_pane_g

0x07ad,	// (0x00042503) grid_highlight_pane_cp9

0x07c2,	// (0x00042518) main_eswt_pane_ParamLimits

0x07c2,	// (0x00042518) main_eswt_pane

0xc067,	// (0x0004ddbd) list_single_text_info_pane

0xc0ee,	// (0x0004de44) eswt_ctrl_button_pane

0xc0ee,	// (0x0004de44) eswt_ctrl_canvas_pane

0xc0f6,	// (0x0004de4c) eswt_ctrl_combo_pane

0xc0ee,	// (0x0004de44) eswt_ctrl_default_pane

0xc0ee,	// (0x0004de44) eswt_ctrl_label_pane

0xc0fe,	// (0x0004de54) eswt_ctrl_wait_pane

0xc106,	// (0x0004de5c) eswt_shell_pane

0xd1eb,	// (0x0004ef41) listscroll_eswt_app_pane

0xc126,	// (0x0004de7c) popup_eswt_tasktip_window_ParamLimits

0xc126,	// (0x0004de7c) popup_eswt_tasktip_window

0x91af,	// (0x0004af05) bg_popup_window_pane_cp18

0xc137,	// (0x0004de8d) eswt_control_pane_g1_ParamLimits

0xc137,	// (0x0004de8d) eswt_control_pane_g1

0xc144,	// (0x0004de9a) eswt_control_pane_g2_ParamLimits

0xc144,	// (0x0004de9a) eswt_control_pane_g2

0xc151,	// (0x0004dea7) eswt_control_pane_g3_ParamLimits

0xc151,	// (0x0004dea7) eswt_control_pane_g3

0xc15e,	// (0x0004deb4) eswt_control_pane_g4_ParamLimits

0xc15e,	// (0x0004deb4) eswt_control_pane_g4

0x0003,

0xfc02,	// (0x00051958) eswt_control_pane_g_ParamLimits

0xfc02,	// (0x00051958) eswt_control_pane_g

0x0a47,	// (0x0004279d) bg_button_pane_ParamLimits

0x0a47,	// (0x0004279d) bg_button_pane

0x07c2,	// (0x00042518) common_borders_pane_copy2_ParamLimits

0x07c2,	// (0x00042518) common_borders_pane_copy2

0xc16b,	// (0x0004dec1) control_button_pane_g1_ParamLimits

0xc16b,	// (0x0004dec1) control_button_pane_g1

0xc177,	// (0x0004decd) control_button_pane_g2_ParamLimits

0xc177,	// (0x0004decd) control_button_pane_g2

0xc183,	// (0x0004ded9) control_button_pane_g3_ParamLimits

0xc183,	// (0x0004ded9) control_button_pane_g3

0x0002,

0xfc0b,	// (0x00051961) control_button_pane_g_ParamLimits

0xfc0b,	// (0x00051961) control_button_pane_g

0xc197,	// (0x0004deed) control_button_pane_t1

0xc1a5,	// (0x0004defb) control_button_pane_t2

0x0001,

0xfc12,	// (0x00051968) control_button_pane_t

0x90b3,	// (0x0004ae09) bg_button_pane_g1

0x90bb,	// (0x0004ae11) bg_button_pane_g2

0x90c3,	// (0x0004ae19) bg_button_pane_g3

0x90cb,	// (0x0004ae21) bg_button_pane_g4

0x90d3,	// (0x0004ae29) bg_button_pane_g5

0x90db,	// (0x0004ae31) bg_button_pane_g6

0x90e3,	// (0x0004ae39) bg_button_pane_g7

0x90eb,	// (0x0004ae41) bg_button_pane_g8

0x90f3,	// (0x0004ae49) bg_button_pane_g9

0x0008,

0xf871,	// (0x000515c7) bg_button_pane_g

0xb788,	// (0x0004d4de) common_borders_pane_ParamLimits

0xb788,	// (0x0004d4de) common_borders_pane

0xc137,	// (0x0004de8d) eswt_control_pane_g1_copy1_ParamLimits

0xc137,	// (0x0004de8d) eswt_control_pane_g1_copy1

0xc144,	// (0x0004de9a) eswt_control_pane_g2_copy1_ParamLimits

0xc144,	// (0x0004de9a) eswt_control_pane_g2_copy1

0xc151,	// (0x0004dea7) eswt_control_pane_g3_copy1_ParamLimits

0xc151,	// (0x0004dea7) eswt_control_pane_g3_copy1

0xc15e,	// (0x0004deb4) eswt_control_pane_g4_copy1_ParamLimits

0xc15e,	// (0x0004deb4) eswt_control_pane_g4_copy1

0xb7c3,	// (0x0004d519) bg_eswt_ctrl_canvas_pane_g1

0xb788,	// (0x0004d4de) common_borders_pane_cp2_ParamLimits

0xb788,	// (0x0004d4de) common_borders_pane_cp2

0xb788,	// (0x0004d4de) common_borders_pane_cp3_ParamLimits

0xb788,	// (0x0004d4de) common_borders_pane_cp3

0xc1b3,	// (0x0004df09) separator_horizontal_pane

0xc1bb,	// (0x0004df11) separator_vertical_pane

0xc137,	// (0x0004de8d) eswt_control_pane_g1_copy2_ParamLimits

0xc137,	// (0x0004de8d) eswt_control_pane_g1_copy2

0xc144,	// (0x0004de9a) eswt_control_pane_g2_copy2_ParamLimits

0xc144,	// (0x0004de9a) eswt_control_pane_g2_copy2

0xc151,	// (0x0004dea7) eswt_control_pane_g3_copy2_ParamLimits

0xc151,	// (0x0004dea7) eswt_control_pane_g3_copy2

0xc15e,	// (0x0004deb4) eswt_control_pane_g4_copy2_ParamLimits

0xc15e,	// (0x0004deb4) eswt_control_pane_g4_copy2

0xd1eb,	// (0x0004ef41) common_borders_pane_cp4

0xc1c4,	// (0x0004df1a) separator_horizontal_pane_g1

0xc1cd,	// (0x0004df23) separator_horizontal_pane_g2

0xc1d6,	// (0x0004df2c) separator_horizontal_pane_g3

0x0002,

0xfc17,	// (0x0005196d) separator_horizontal_pane_g

0xc137,	// (0x0004de8d) eswt_control_pane_g1_copy3_ParamLimits

0xc137,	// (0x0004de8d) eswt_control_pane_g1_copy3

0xc144,	// (0x0004de9a) eswt_control_pane_g2_copy3_ParamLimits

0xc144,	// (0x0004de9a) eswt_control_pane_g2_copy3

0xc151,	// (0x0004dea7) eswt_control_pane_g3_copy3_ParamLimits

0xc151,	// (0x0004dea7) eswt_control_pane_g3_copy3

0xc15e,	// (0x0004deb4) eswt_control_pane_g4_copy3_ParamLimits

0xc15e,	// (0x0004deb4) eswt_control_pane_g4_copy3

0xd1eb,	// (0x0004ef41) common_borders_pane_cp5

0xc1df,	// (0x0004df35) separator_vertical_pane_g1

0xc1e8,	// (0x0004df3e) separator_vertical_pane_g2

0xc1f1,	// (0x0004df47) separator_vertical_pane_g3

0x0002,

0xfc1e,	// (0x00051974) separator_vertical_pane_g

0xc137,	// (0x0004de8d) eswt_control_pane_g1_copy4_ParamLimits

0xc137,	// (0x0004de8d) eswt_control_pane_g1_copy4

0xc144,	// (0x0004de9a) eswt_control_pane_g2_copy4_ParamLimits

0xc144,	// (0x0004de9a) eswt_control_pane_g2_copy4

0xc151,	// (0x0004dea7) eswt_control_pane_g3_copy4_ParamLimits

0xc151,	// (0x0004dea7) eswt_control_pane_g3_copy4

0xc15e,	// (0x0004deb4) eswt_control_pane_g4_copy4_ParamLimits

0xc15e,	// (0x0004deb4) eswt_control_pane_g4_copy4

0xc1fa,	// (0x0004df50) eswt_ctrl_combo_button_pane

0xc202,	// (0x0004df58) eswt_ctrl_input_pane

0xc20a,	// (0x0004df60) popup_choice_list_window_cp70

0xc212,	// (0x0004df68) eswt_ctrl_input_pane_t1

0xd1eb,	// (0x0004ef41) input_focus_pane_cp70

0xb788,	// (0x0004d4de) bg_button_pane_cp70_ParamLimits

0xb788,	// (0x0004d4de) bg_button_pane_cp70

0xc220,	// (0x0004df76) eswt_ctrl_combo_button_pane_g1

0xc228,	// (0x0004df7e) wait_bar_pane_cp70

0x91af,	// (0x0004af05) bg_popup_window_pane_cp70_ParamLimits

0x91af,	// (0x0004af05) bg_popup_window_pane_cp70

0xc230,	// (0x0004df86) popup_eswt_tasktip_window_t1

0xc246,	// (0x0004df9c) wait_bar_pane_cp71_ParamLimits

0xc246,	// (0x0004df9c) wait_bar_pane_cp71

0xc252,	// (0x0004dfa8) grid_eswt_app_pane

0x0dbf,	// (0x00042b15) scroll_pane_cp70

0xc25b,	// (0x0004dfb1) cell_eswt_app_pane_ParamLimits

0xc25b,	// (0x0004dfb1) cell_eswt_app_pane

0xc28d,	// (0x0004dfe3) cell_eswt_app_pane_g1_ParamLimits

0xc28d,	// (0x0004dfe3) cell_eswt_app_pane_g1

0xc2bc,	// (0x0004e012) cell_eswt_app_pane_g2_ParamLimits

0xc2bc,	// (0x0004e012) cell_eswt_app_pane_g2

0x0001,

0xfc25,	// (0x0005197b) cell_eswt_app_pane_g_ParamLimits

0xfc25,	// (0x0005197b) cell_eswt_app_pane_g

0xc2e5,	// (0x0004e03b) cell_eswt_app_pane_t1_ParamLimits

0xc2e5,	// (0x0004e03b) cell_eswt_app_pane_t1

0xc317,	// (0x0004e06d) grid_highlight_pane_cp70_ParamLimits

0xc317,	// (0x0004e06d) grid_highlight_pane_cp70

0x870c,	// (0x0004a462) set_content_pane_g1

0x8adf,	// (0x0004a835) status_small_volume_pane

0x7ca5,	// (0x000499fb) status_small_volume_pane_g1

0x7cad,	// (0x00049a03) volume_small2_pane

0x7cb6,	// (0x00049a0c) volume_small2_pane_g1

0x7cbf,	// (0x00049a15) volume_small2_pane_g2

0x7cc8,	// (0x00049a1e) volume_small2_pane_g3

0x7cd1,	// (0x00049a27) volume_small2_pane_g4

0x7cda,	// (0x00049a30) volume_small2_pane_g5

0x7ce3,	// (0x00049a39) volume_small2_pane_g6

0x7cec,	// (0x00049a42) volume_small2_pane_g7

0x7cf5,	// (0x00049a4b) volume_small2_pane_g8

0x7cfe,	// (0x00049a54) volume_small2_pane_g9

0x7d07,	// (0x00049a5d) volume_small2_pane_g10

0x0009,

0xfc2a,	// (0x00051980) volume_small2_pane_g

0xbb92,	// (0x0004d8e8) fep_vkb_top_text_pane_g1_ParamLimits

0xbbad,	// (0x0004d903) fep_vkb_top_text_pane_t1_ParamLimits

0xbe67,	// (0x0004dbbd) popup_preview_fixed_window_g3_ParamLimits

0xbe67,	// (0x0004dbbd) popup_preview_fixed_window_g3

0x7308,	// (0x0004905e) popup_toolbar_trans_pane

0xa50d,	// (0x0004c263) aid_height_set_list_ParamLimits

0xa51e,	// (0x0004c274) aid_size_parent_ParamLimits

0x8b87,	// (0x0004a8dd) list_highlight_pane_cp2_ParamLimits

0x870c,	// (0x0004a462) set_content_pane_g1_ParamLimits

0xa751,	// (0x0004c4a7) list_single_image_pane_ParamLimits

0xa751,	// (0x0004c4a7) list_single_image_pane

0xc323,	// (0x0004e079) aid_size_cell_image_ParamLimits

0xc323,	// (0x0004e079) aid_size_cell_image

0xc330,	// (0x0004e086) grid_single_image_pane_ParamLimits

0xc330,	// (0x0004e086) grid_single_image_pane

0x0a61,	// (0x000427b7) list_single_image_pane_g1_ParamLimits

0x0a61,	// (0x000427b7) list_single_image_pane_g1

0x0a6d,	// (0x000427c3) list_single_image_pane_g2_ParamLimits

0x0a6d,	// (0x000427c3) list_single_image_pane_g2

0x0001,

0xfc3f,	// (0x00051995) list_single_image_pane_g_ParamLimits

0xfc3f,	// (0x00051995) list_single_image_pane_g

0xc33e,	// (0x0004e094) list_single_image_pane_t1_ParamLimits

0xc33e,	// (0x0004e094) list_single_image_pane_t1

0xc354,	// (0x0004e0aa) cell_image_list_pane_ParamLimits

0xc354,	// (0x0004e0aa) cell_image_list_pane

0xc36a,	// (0x0004e0c0) cell_image_list_pane_g1

0xc373,	// (0x0004e0c9) cell_image_list_pane_g2

0x0001,

0xfc44,	// (0x0005199a) cell_image_list_pane_g

0xc37c,	// (0x0004e0d2) aid_size_cell_tb_trans_pane

0x0a47,	// (0x0004279d) bg_tb_trans_pane

0xc38e,	// (0x0004e0e4) grid_tb_trans_pane

0x90b3,	// (0x0004ae09) bg_tb_trans_pane_g1

0x90bb,	// (0x0004ae11) bg_tb_trans_pane_g2

0x90c3,	// (0x0004ae19) bg_tb_trans_pane_g3

0x90cb,	// (0x0004ae21) bg_tb_trans_pane_g4

0x90d3,	// (0x0004ae29) bg_tb_trans_pane_g5

0x90eb,	// (0x0004ae41) bg_tb_trans_pane_g6

0x90f3,	// (0x0004ae49) bg_tb_trans_pane_g7

0x90db,	// (0x0004ae31) bg_tb_trans_pane_g8

0x90e3,	// (0x0004ae39) bg_tb_trans_pane_g9

0x0008,

0xfc49,	// (0x0005199f) bg_tb_trans_pane_g

0xc3a2,	// (0x0004e0f8) cell_toolbar_trans_pane_ParamLimits

0xc3a2,	// (0x0004e0f8) cell_toolbar_trans_pane

0xb7c3,	// (0x0004d519) cell_toolbar_trans_pane_g1

0xb3e7,	// (0x0004d13d) list_form2_midp_pane_t1

0xb3f5,	// (0x0004d14b) list_form2_midp_pane_t2

0x0001,

0xfaf2,	// (0x00051848) list_form2_midp_pane_t

0xb403,	// (0x0004d159) scroll_pane_cp51_ParamLimits

0xb5ca,	// (0x0004d320) form2_midp_wait_pane_g1

0xb5d3,	// (0x0004d329) form2_midp_wait_pane_g2

0xb5dc,	// (0x0004d332) form2_midp_wait_pane_g3

0x0002,

0xfb07,	// (0x0005185d) form2_midp_wait_pane_g

0xd24d,	// (0x0004efa3) list_highlight_pane_cp21_ParamLimits

0xb620,	// (0x0004d376) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xb62f,	// (0x0004d385) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa70a,	// (0x0004c460) list_single_2graphic_im_pane_ParamLimits

0xa70a,	// (0x0004c460) list_single_2graphic_im_pane

0xc3c8,	// (0x0004e11e) list_single_2graphic_im_pane_g1_ParamLimits

0xc3c8,	// (0x0004e11e) list_single_2graphic_im_pane_g1

0xc3d9,	// (0x0004e12f) list_single_2graphic_im_pane_g2_ParamLimits

0xc3d9,	// (0x0004e12f) list_single_2graphic_im_pane_g2

0xc3e5,	// (0x0004e13b) list_single_2graphic_im_pane_g3_ParamLimits

0xc3e5,	// (0x0004e13b) list_single_2graphic_im_pane_g3

0x0003,

0xfc5c,	// (0x000519b2) list_single_2graphic_im_pane_g_ParamLimits

0xfc5c,	// (0x000519b2) list_single_2graphic_im_pane_g

0xc405,	// (0x0004e15b) list_single_2graphic_im_pane_t1_ParamLimits

0xc405,	// (0x0004e15b) list_single_2graphic_im_pane_t1

0xbe73,	// (0x0004dbc9) list_single_graphic_2heading_pane_fp_ParamLimits

0xbe73,	// (0x0004dbc9) list_single_graphic_2heading_pane_fp

0x5a1b,	// (0x00047771) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x5a1b,	// (0x00047771) list_single_graphic_2heading_pane_fp_g1

0xbe8c,	// (0x0004dbe2) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xbe8c,	// (0x0004dbe2) list_single_graphic_2heading_pane_fp_g2

0x648c,	// (0x000481e2) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x648c,	// (0x000481e2) list_single_graphic_2heading_pane_fp_g3

0x7b68,	// (0x000498be) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x7b68,	// (0x000498be) list_single_graphic_2heading_pane_fp_g4

0xbe98,	// (0x0004dbee) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xbe98,	// (0x0004dbee) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x000518e0) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x000518e0) list_single_graphic_2heading_pane_fp_g

0x5b64,	// (0x000478ba) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5b64,	// (0x000478ba) list_single_graphic_2heading_pane_fp_t1

0x5a53,	// (0x000477a9) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5a53,	// (0x000477a9) list_single_graphic_2heading_pane_fp_t2

0x5b7a,	// (0x000478d0) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5b7a,	// (0x000478d0) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc65,	// (0x000519bb) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc65,	// (0x000519bb) list_single_graphic_2heading_pane_fp_t

0xb854,	// (0x0004d5aa) fep_hwr_write_pane_g5_ParamLimits

0xb854,	// (0x0004d5aa) fep_hwr_write_pane_g5

0xb860,	// (0x0004d5b6) fep_hwr_write_pane_g6_ParamLimits

0xb860,	// (0x0004d5b6) fep_hwr_write_pane_g6

0xc106,	// (0x0004de5c) eswt_shell_pane_ParamLimits

0x91af,	// (0x0004af05) bg_popup_window_pane_cp18_ParamLimits

0xa464,	// (0x0004c1ba) heading_pane_cp70

0xc230,	// (0x0004df86) popup_eswt_tasktip_window_t1_ParamLimits

0x8c00,	// (0x0004a956) aid_touch_tab_arrow_left

0x8c0f,	// (0x0004a965) aid_touch_tab_arrow_right

0x60ae,	// (0x00047e04) title_pane_g3_ParamLimits

0x60ae,	// (0x00047e04) title_pane_g3

0x0a06,	// (0x0004275c) set_value_pane_g1

0x7308,	// (0x0004905e) popup_toolbar_trans_pane_ParamLimits

0xc37c,	// (0x0004e0d2) aid_size_cell_tb_trans_pane_ParamLimits

0x0a47,	// (0x0004279d) bg_tb_trans_pane_ParamLimits

0xc38e,	// (0x0004e0e4) grid_tb_trans_pane_ParamLimits

0xd38e,	// (0x0004f0e4) cont_note_pane_ParamLimits

0xd38e,	// (0x0004f0e4) cont_note_pane

0x07c2,	// (0x00042518) cont_snote2_single_text_pane_ParamLimits

0x07c2,	// (0x00042518) cont_snote2_single_text_pane

0x07c2,	// (0x00042518) cont_snote2_single_graphic_pane_ParamLimits

0x07c2,	// (0x00042518) cont_snote2_single_graphic_pane

0x978b,	// (0x0004b4e1) cont_note_wait_pane_ParamLimits

0x978b,	// (0x0004b4e1) cont_note_wait_pane

0x978b,	// (0x0004b4e1) cont_note_image_pane_ParamLimits

0x978b,	// (0x0004b4e1) cont_note_image_pane

0xc436,	// (0x0004e18c) popup_note2_window_g1_ParamLimits

0xc436,	// (0x0004e18c) popup_note2_window_g1

0xc467,	// (0x0004e1bd) popup_note2_window_t1_ParamLimits

0xc467,	// (0x0004e1bd) popup_note2_window_t1

0xc4ac,	// (0x0004e202) popup_note2_window_t2_ParamLimits

0xc4ac,	// (0x0004e202) popup_note2_window_t2

0xc4f1,	// (0x0004e247) popup_note2_window_t3_ParamLimits

0xc4f1,	// (0x0004e247) popup_note2_window_t3

0xc536,	// (0x0004e28c) popup_note2_window_t4_ParamLimits

0xc536,	// (0x0004e28c) popup_note2_window_t4

0xd412,	// (0x0004f168) popup_note2_window_t5_ParamLimits

0xd412,	// (0x0004f168) popup_note2_window_t5

0x0004,

0xfc71,	// (0x000519c7) popup_note2_window_t_ParamLimits

0xfc71,	// (0x000519c7) popup_note2_window_t

0xc565,	// (0x0004e2bb) popup_note2_image_window_g1_ParamLimits

0xc565,	// (0x0004e2bb) popup_note2_image_window_g1

0xc571,	// (0x0004e2c7) popup_note2_image_window_g2_ParamLimits

0xc571,	// (0x0004e2c7) popup_note2_image_window_g2

0x0001,

0xfc7c,	// (0x000519d2) popup_note2_image_window_g_ParamLimits

0xfc7c,	// (0x000519d2) popup_note2_image_window_g

0xc583,	// (0x0004e2d9) popup_note2_image_window_t1_ParamLimits

0xc583,	// (0x0004e2d9) popup_note2_image_window_t1

0xc59b,	// (0x0004e2f1) popup_note2_image_window_t2_ParamLimits

0xc59b,	// (0x0004e2f1) popup_note2_image_window_t2

0xc5b3,	// (0x0004e309) popup_note2_image_window_t3_ParamLimits

0xc5b3,	// (0x0004e309) popup_note2_image_window_t3

0x0002,

0xfc81,	// (0x000519d7) popup_note2_image_window_t_ParamLimits

0xfc81,	// (0x000519d7) popup_note2_image_window_t

0x9799,	// (0x0004b4ef) popup_note2_wait_window_g1_ParamLimits

0x9799,	// (0x0004b4ef) popup_note2_wait_window_g1

0xc5cf,	// (0x0004e325) popup_note2_wait_window_g2_ParamLimits

0xc5cf,	// (0x0004e325) popup_note2_wait_window_g2

0x97b1,	// (0x0004b507) popup_note2_wait_window_g3_ParamLimits

0x97b1,	// (0x0004b507) popup_note2_wait_window_g3

0x0002,

0xfc88,	// (0x000519de) popup_note2_wait_window_g_ParamLimits

0xfc88,	// (0x000519de) popup_note2_wait_window_g

0xc5db,	// (0x0004e331) popup_note2_wait_window_t1_ParamLimits

0xc5db,	// (0x0004e331) popup_note2_wait_window_t1

0xc5f9,	// (0x0004e34f) popup_note2_wait_window_t2_ParamLimits

0xc5f9,	// (0x0004e34f) popup_note2_wait_window_t2

0xc617,	// (0x0004e36d) popup_note2_wait_window_t3_ParamLimits

0xc617,	// (0x0004e36d) popup_note2_wait_window_t3

0xc629,	// (0x0004e37f) popup_note2_wait_window_t4_ParamLimits

0xc629,	// (0x0004e37f) popup_note2_wait_window_t4

0x0003,

0xfc8f,	// (0x000519e5) popup_note2_wait_window_t_ParamLimits

0xfc8f,	// (0x000519e5) popup_note2_wait_window_t

0xc63b,	// (0x0004e391) wait_bar2_pane_ParamLimits

0xc63b,	// (0x0004e391) wait_bar2_pane

0xc653,	// (0x0004e3a9) popup_snote2_single_text_window_g1_ParamLimits

0xc653,	// (0x0004e3a9) popup_snote2_single_text_window_g1

0xc67b,	// (0x0004e3d1) popup_snote2_single_text_window_t1_ParamLimits

0xc67b,	// (0x0004e3d1) popup_snote2_single_text_window_t1

0xc6c7,	// (0x0004e41d) popup_snote2_single_text_window_t2_ParamLimits

0xc6c7,	// (0x0004e41d) popup_snote2_single_text_window_t2

0xc713,	// (0x0004e469) popup_snote2_single_text_window_t3_ParamLimits

0xc713,	// (0x0004e469) popup_snote2_single_text_window_t3

0xc754,	// (0x0004e4aa) popup_snote2_single_text_window_t4_ParamLimits

0xc754,	// (0x0004e4aa) popup_snote2_single_text_window_t4

0xc78a,	// (0x0004e4e0) popup_snote2_single_text_window_t5_ParamLimits

0xc78a,	// (0x0004e4e0) popup_snote2_single_text_window_t5

0x0004,

0xfc98,	// (0x000519ee) popup_snote2_single_text_window_t_ParamLimits

0xfc98,	// (0x000519ee) popup_snote2_single_text_window_t

0xc7b5,	// (0x0004e50b) popup_snote2_single_graphic_window_g1_ParamLimits

0xc7b5,	// (0x0004e50b) popup_snote2_single_graphic_window_g1

0xc7dd,	// (0x0004e533) popup_snote2_single_graphic_window_g2_ParamLimits

0xc7dd,	// (0x0004e533) popup_snote2_single_graphic_window_g2

0x0001,

0xfca3,	// (0x000519f9) popup_snote2_single_graphic_window_g_ParamLimits

0xfca3,	// (0x000519f9) popup_snote2_single_graphic_window_g

0xc805,	// (0x0004e55b) popup_snote2_single_graphic_window_t1_ParamLimits

0xc805,	// (0x0004e55b) popup_snote2_single_graphic_window_t1

0xc851,	// (0x0004e5a7) popup_snote2_single_graphic_window_t2_ParamLimits

0xc851,	// (0x0004e5a7) popup_snote2_single_graphic_window_t2

0xc713,	// (0x0004e469) popup_snote2_single_graphic_window_t3_ParamLimits

0xc713,	// (0x0004e469) popup_snote2_single_graphic_window_t3

0xc754,	// (0x0004e4aa) popup_snote2_single_graphic_window_t4_ParamLimits

0xc754,	// (0x0004e4aa) popup_snote2_single_graphic_window_t4

0xc78a,	// (0x0004e4e0) popup_snote2_single_graphic_window_t5_ParamLimits

0xc78a,	// (0x0004e4e0) popup_snote2_single_graphic_window_t5

0x0004,

0xfca8,	// (0x000519fe) popup_snote2_single_graphic_window_t_ParamLimits

0xfca8,	// (0x000519fe) popup_snote2_single_graphic_window_t

0xb2ad,	// (0x0004d003) clock_nsta_pane_cp2_t1

0xb2ad,	// (0x0004d003) clock_nsta_pane_cp2_t2

0x0001,

0xfac8,	// (0x0005181e) clock_nsta_pane_cp2_t

0x549d,	// (0x000471f3) form_field_data_wide_pane_g1_ParamLimits

0x0a61,	// (0x000427b7) form_field_data_wide_pane_g2_ParamLimits

0x0a61,	// (0x000427b7) form_field_data_wide_pane_g2

0x0a6d,	// (0x000427c3) form_field_data_wide_pane_g3_ParamLimits

0x0a6d,	// (0x000427c3) form_field_data_wide_pane_g3

0x0002,

0xf686,	// (0x000513dc) form_field_data_wide_pane_g_ParamLimits

0xf686,	// (0x000513dc) form_field_data_wide_pane_g

0xb186,	// (0x0004cedc) grid_touch_3_pane_ParamLimits

0xb186,	// (0x0004cedc) grid_touch_3_pane

0xc89d,	// (0x0004e5f3) cell_touch_3_pane_ParamLimits

0xc89d,	// (0x0004e5f3) cell_touch_3_pane

0xb7c3,	// (0x0004d519) cell_touch_3_pane_g1

0xb7c3,	// (0x0004d519) cell_touch_3_pane_g2

0x0001,

0xfb4d,	// (0x000518a3) cell_touch_3_pane_g

0xd444,	// (0x0004f19a) cont_query_data_pane

0xd44c,	// (0x0004f1a2) cont_query_data_pane_cp1

0xc8d0,	// (0x0004e626) button_value_adjust_pane_cp7

0xc8d8,	// (0x0004e62e) query_popup_pane_cp3

0x4053,	// (0x00045da9) bg_popup_sub_pane_cp22_ParamLimits

0x6914,	// (0x0004866a) navi_navi_volume_pane_cp2

0x692f,	// (0x00048685) popup_side_volume_key_window_g2

0x693e,	// (0x00048694) popup_side_volume_key_window_g3

0x0002,

0xf71c,	// (0x00051472) popup_side_volume_key_window_g

0x695b,	// (0x000486b1) popup_side_volume_key_window_t2

0x0001,

0xf723,	// (0x00051479) popup_side_volume_key_window_t

0x4401,	// (0x00046157) popup_side_volume_key_window_ParamLimits

0x5090,	// (0x00046de6) list_double_graphic_pane_g4_ParamLimits

0x5090,	// (0x00046de6) list_double_graphic_pane_g4

0xa739,	// (0x0004c48f) list_single_2heading_msg_pane_ParamLimits

0xa739,	// (0x0004c48f) list_single_2heading_msg_pane

0x7d10,	// (0x00049a66) list_single_2heading_msg_pane_g1_ParamLimits

0x7d10,	// (0x00049a66) list_single_2heading_msg_pane_g1

0x1c3a,	// (0x00043990) list_single_2heading_msg_pane_g2_ParamLimits

0x1c3a,	// (0x00043990) list_single_2heading_msg_pane_g2

0x7d1c,	// (0x00049a72) list_single_2heading_msg_pane_g3_ParamLimits

0x7d1c,	// (0x00049a72) list_single_2heading_msg_pane_g3

0x7d28,	// (0x00049a7e) list_single_2heading_msg_pane_g4_ParamLimits

0x7d28,	// (0x00049a7e) list_single_2heading_msg_pane_g4

0x0003,

0xfcb3,	// (0x00051a09) list_single_2heading_msg_pane_g_ParamLimits

0xfcb3,	// (0x00051a09) list_single_2heading_msg_pane_g

0x5b9a,	// (0x000478f0) list_single_2heading_msg_pane_t1_ParamLimits

0x5b9a,	// (0x000478f0) list_single_2heading_msg_pane_t1

0x5bc2,	// (0x00047918) list_single_2heading_msg_pane_t2_ParamLimits

0x5bc2,	// (0x00047918) list_single_2heading_msg_pane_t2

0x5bf1,	// (0x00047947) list_single_2heading_msg_pane_t3_ParamLimits

0x5bf1,	// (0x00047947) list_single_2heading_msg_pane_t3

0x5c2a,	// (0x00047980) list_single_2heading_msg_pane_t4_ParamLimits

0x5c2a,	// (0x00047980) list_single_2heading_msg_pane_t4

0x0003,

0xfcbc,	// (0x00051a12) list_single_2heading_msg_pane_t_ParamLimits

0xfcbc,	// (0x00051a12) list_single_2heading_msg_pane_t

0xd209,	// (0x0004ef5f) title_pane_g4_ParamLimits

0xd209,	// (0x0004ef5f) title_pane_g4

0x65a7,	// (0x000482fd) title_pane_stacon_g3_ParamLimits

0x65a7,	// (0x000482fd) title_pane_stacon_g3

0xc3f9,	// (0x0004e14f) list_single_2graphic_im_pane_g4_ParamLimits

0xc3f9,	// (0x0004e14f) list_single_2graphic_im_pane_g4

0xa201,	// (0x0004bf57) popup_side_volume_key_window_cp

0xaa57,	// (0x0004c7ad) main_idle_act2_pane_t1

0x7418,	// (0x0004916e) toolbar_button_pane_g10

0x640f,	// (0x00048165) popup_toolbar_window_cp1

0xb29e,	// (0x0004cff4) clock_nsta_pane_cp_t1

0xb29e,	// (0x0004cff4) clock_nsta_pane_cp_t2

0x0001,

0xfac3,	// (0x00051819) clock_nsta_pane_cp_t

0x6914,	// (0x0004866a) navi_navi_volume_pane_cp2_ParamLimits

0x6923,	// (0x00048679) popup_side_volume_key_window_g1_ParamLimits

0x692f,	// (0x00048685) popup_side_volume_key_window_g2_ParamLimits

0x693e,	// (0x00048694) popup_side_volume_key_window_g3_ParamLimits

0xf71c,	// (0x00051472) popup_side_volume_key_window_g_ParamLimits

0x7902,	// (0x00049658) fep_hwr_aid_pane

0x21f7,	// (0x00043f4d) bg_fep_hwr_top_pane_g4_ParamLimits

0xb824,	// (0x0004d57a) fep_hwr_top_pane_g1_ParamLimits

0xb836,	// (0x0004d58c) fep_hwr_top_pane_g2_ParamLimits

0x79bd,	// (0x00049713) fep_hwr_top_pane_g3_ParamLimits

0xfb18,	// (0x0005186e) fep_hwr_top_pane_g_ParamLimits

0x79d2,	// (0x00049728) fep_hwr_top_text_pane_ParamLimits

0x9fb6,	// (0x0004bd0c) aid_touch_tab_arrow_arrow_2

0x9fbf,	// (0x0004bd15) aid_touch_tab_arrow_left_2

0x7916,	// (0x0004966c) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x794d,	// (0x000496a3) fep_hwr_prediction_pane

0xb98c,	// (0x0004d6e2) fep_vkb_prediction_pane

0xba92,	// (0x0004d7e8) fep_vkb_side_pane_g3_ParamLimits

0xba92,	// (0x0004d7e8) fep_vkb_side_pane_g3

0xba3e,	// (0x0004d794) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xbeec,	// (0x0004dc42) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xbef9,	// (0x0004dc4f) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc2,	// (0x00051918) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xc8ff,	// (0x0004e655) fep_hwr_prediction_pane_g1

0x7d40,	// (0x00049a96) fep_hwr_prediction_pane_g2

0x7d48,	// (0x00049a9e) fep_hwr_prediction_pane_g3

0x7d50,	// (0x00049aa6) fep_hwr_prediction_pane_g4

0x0003,

0xfcc5,	// (0x00051a1b) fep_hwr_prediction_pane_g

0xc8ff,	// (0x0004e655) fep_vkb_prediction_pane_g1

0xc909,	// (0x0004e65f) fep_vkb_prediction_pane_g2

0xc911,	// (0x0004e667) fep_vkb_prediction_pane_g3

0xc919,	// (0x0004e66f) fep_vkb_prediction_pane_g4

0x0003,

0xfcce,	// (0x00051a24) fep_vkb_prediction_pane_g

0xd4d1,	// (0x0004f227) slider_set_pane_g3

0xd4e5,	// (0x0004f23b) slider_set_pane_g4

0xd4fd,	// (0x0004f253) slider_set_pane_g5

0xd4d1,	// (0x0004f227) slider_set_pane_g6

0x770d,	// (0x00049463) slider_set_pane_g7

0xa6a3,	// (0x0004c3f9) slider_form_pane_g3

0xa6ac,	// (0x0004c402) slider_form_pane_g4

0xa6b4,	// (0x0004c40a) slider_form_pane_g5

0xa6a3,	// (0x0004c3f9) slider_form_pane_g6

0xa6bc,	// (0x0004c412) slider_form_pane_g7

0xad1a,	// (0x0004ca70) slider_set_pane_vc_g3

0xad23,	// (0x0004ca79) slider_set_pane_vc_g4

0xad2c,	// (0x0004ca82) slider_set_pane_vc_g5

0xad1a,	// (0x0004ca70) slider_set_pane_vc_g6

0xad35,	// (0x0004ca8b) slider_set_pane_vc_g7

0xaf47,	// (0x0004cc9d) slider_form_pane_vc_g1

0xaf50,	// (0x0004cca6) slider_form_pane_vc_g2

0xaf59,	// (0x0004ccaf) slider_form_pane_vc_g3

0xaf47,	// (0x0004cc9d) slider_form_pane_vc_g4

0xaf62,	// (0x0004ccb8) slider_form_pane_vc_g5

0x0004,

0xfa95,	// (0x000517eb) slider_form_pane_vc_g

0xd1eb,	// (0x0004ef41) main_idle_act3_pane

0xc921,	// (0x0004e677) ai3_links_pane

0xc92a,	// (0x0004e680) popup_ai3_data_window_ParamLimits

0xc92a,	// (0x0004e680) popup_ai3_data_window

0xd1eb,	// (0x0004ef41) grid_ai3_links_pane

0xc948,	// (0x0004e69e) cell_ai3_links_pane_ParamLimits

0xc948,	// (0x0004e69e) cell_ai3_links_pane

0xc962,	// (0x0004e6b8) bg_popup_sub_pane_cp11

0xc96f,	// (0x0004e6c5) cell_ai3_links_pane_g1

0xd1eb,	// (0x0004ef41) bg_popup_sub_pane_cp12

0xc994,	// (0x0004e6ea) heading_ai3_data_pane

0xc99c,	// (0x0004e6f2) list_ai3_gene_pane

0xc9a8,	// (0x0004e6fe) popup_ai3_data_window_g1

0xc9b0,	// (0x0004e706) heading_ai3_data_pane_g1

0xc9b8,	// (0x0004e70e) heading_ai3_data_pane_t1

0xc9c6,	// (0x0004e71c) list_double_ai3_gene_pane_ParamLimits

0xc9c6,	// (0x0004e71c) list_double_ai3_gene_pane

0xc9d3,	// (0x0004e729) list_single_ai3_gene_pane_ParamLimits

0xc9d3,	// (0x0004e729) list_single_ai3_gene_pane

0xb788,	// (0x0004d4de) list_highlight_pane_cp7_ParamLimits

0xb788,	// (0x0004d4de) list_highlight_pane_cp7

0xc9e0,	// (0x0004e736) list_single_a13_gene_pane_t1_ParamLimits

0xc9e0,	// (0x0004e736) list_single_a13_gene_pane_t1

0xc9f7,	// (0x0004e74d) list_single_ai3_gene_pane_g1

0xca00,	// (0x0004e756) list_single_ai3_gene_pane_g2

0x0001,

0xfcd7,	// (0x00051a2d) list_single_ai3_gene_pane_g

0xca08,	// (0x0004e75e) list_double_ai3_gene_pane_g1_ParamLimits

0xca08,	// (0x0004e75e) list_double_ai3_gene_pane_g1

0xca14,	// (0x0004e76a) list_double_ai3_gene_pane_t1_ParamLimits

0xca14,	// (0x0004e76a) list_double_ai3_gene_pane_t1

0xca30,	// (0x0004e786) list_double_ai3_gene_pane_t2_ParamLimits

0xca30,	// (0x0004e786) list_double_ai3_gene_pane_t2

0xca45,	// (0x0004e79b) list_double_ai3_gene_pane_t3_ParamLimits

0xca45,	// (0x0004e79b) list_double_ai3_gene_pane_t3

0x0002,

0xfcdc,	// (0x00051a32) list_double_ai3_gene_pane_t_ParamLimits

0xfcdc,	// (0x00051a32) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5b90,	// (0x000478e6) aid_size_min_col_2

0xc8e9,	// (0x0004e63f) aid_size_min_msg_ParamLimits

0xc8e9,	// (0x0004e63f) aid_size_min_msg

0xbb9e,	// (0x0004d8f4) fep_vkb_top_text_pane_g2_ParamLimits

0xbb9e,	// (0x0004d8f4) fep_vkb_top_text_pane_g2

0x0001,

0xfb48,	// (0x0005189e) fep_vkb_top_text_pane_g_ParamLimits

0xfb48,	// (0x0005189e) fep_vkb_top_text_pane_g

0xd1eb,	// (0x0004ef41) main_hc_apps_shell_pane

0xca62,	// (0x0004e7b8) grid_hc_apps_pane_ParamLimits

0xca62,	// (0x0004e7b8) grid_hc_apps_pane

0xca71,	// (0x0004e7c7) list_hc_apps_pane

0xca79,	// (0x0004e7cf) scroll_pane_cp37_ParamLimits

0xca79,	// (0x0004e7cf) scroll_pane_cp37

0xca85,	// (0x0004e7db) cell_hc_apps_pane_ParamLimits

0xca85,	// (0x0004e7db) cell_hc_apps_pane

0xcb3d,	// (0x0004e893) cell_hc_apps_pane_g1_ParamLimits

0xcb3d,	// (0x0004e893) cell_hc_apps_pane_g1

0xcb6e,	// (0x0004e8c4) cell_hc_apps_pane_g2_ParamLimits

0xcb6e,	// (0x0004e8c4) cell_hc_apps_pane_g2

0xcb8a,	// (0x0004e8e0) cell_hc_apps_pane_g3_ParamLimits

0xcb8a,	// (0x0004e8e0) cell_hc_apps_pane_g3

0x0002,

0xfce3,	// (0x00051a39) cell_hc_apps_pane_g_ParamLimits

0xfce3,	// (0x00051a39) cell_hc_apps_pane_g

0xcbac,	// (0x0004e902) cell_hc_apps_pane_t1_ParamLimits

0xcbac,	// (0x0004e902) cell_hc_apps_pane_t1

0xd38e,	// (0x0004f0e4) grid_highlight_pane_cp10_ParamLimits

0xd38e,	// (0x0004f0e4) grid_highlight_pane_cp10

0xcbec,	// (0x0004e942) list_single_hc_apps_pane_ParamLimits

0xcbec,	// (0x0004e942) list_single_hc_apps_pane

0xcc2b,	// (0x0004e981) list_single_hc_apps_pane_g1

0x7d58,	// (0x00049aae) list_single_hc_apps_pane_g2

0x0001,

0xfcea,	// (0x00051a40) list_single_hc_apps_pane_g

0x7d71,	// (0x00049ac7) list_single_hc_apps_pane_g2_copy1

0x5c4f,	// (0x000479a5) list_single_hc_apps_pane_t1

0xd24d,	// (0x0004efa3) bg_set_opt_pane_cp_ParamLimits

0x6160,	// (0x00047eb6) setting_slider_pane_t1_ParamLimits

0x6179,	// (0x00047ecf) setting_slider_pane_t2_ParamLimits

0x6193,	// (0x00047ee9) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x000512ba) setting_slider_pane_t_ParamLimits

0x61ab,	// (0x00047f01) slider_set_pane_ParamLimits

0x6cb9,	// (0x00048a0f) control_pane_g5_ParamLimits

0x6cb9,	// (0x00048a0f) control_pane_g5

0xa4d0,	// (0x0004c226) slider_set_pane_g1_ParamLimits

0x7701,	// (0x00049457) slider_set_pane_g2_ParamLimits

0xd4d1,	// (0x0004f227) slider_set_pane_g3_ParamLimits

0xd4e5,	// (0x0004f23b) slider_set_pane_g4_ParamLimits

0xd4fd,	// (0x0004f253) slider_set_pane_g5_ParamLimits

0xd4d1,	// (0x0004f227) slider_set_pane_g6_ParamLimits

0x770d,	// (0x00049463) slider_set_pane_g7_ParamLimits

0xf96f,	// (0x000516c5) slider_set_pane_g_ParamLimits

0x86b7,	// (0x0004a40d) navi_icon_text_pane_ParamLimits

0x8bbf,	// (0x0004a915) aid_fill_nsta_2_ParamLimits

0x8c00,	// (0x0004a956) aid_touch_tab_arrow_left_ParamLimits

0x8c0f,	// (0x0004a965) aid_touch_tab_arrow_right_ParamLimits

0x8c7c,	// (0x0004a9d2) clock_nsta_pane_ParamLimits

0x9f92,	// (0x0004bce8) navi_icon_pane_g1_ParamLimits

0x9fa1,	// (0x0004bcf7) navi_text_pane_t1_ParamLimits

0xb3bb,	// (0x0004d111) navi_icon_text_pane_g1_ParamLimits

0xb3ca,	// (0x0004d120) navi_icon_text_pane_t1_ParamLimits

0xcc2b,	// (0x0004e981) list_single_hc_apps_pane_g1_ParamLimits

0x7d58,	// (0x00049aae) list_single_hc_apps_pane_g2_ParamLimits

0xfcea,	// (0x00051a40) list_single_hc_apps_pane_g_ParamLimits

0x7d71,	// (0x00049ac7) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5c4f,	// (0x000479a5) list_single_hc_apps_pane_t1_ParamLimits

0x5fa4,	// (0x00047cfa) popup_toolbar2_fixed_window_ParamLimits

0x5fa4,	// (0x00047cfa) popup_toolbar2_fixed_window

0x72fe,	// (0x00049054) popup_toolbar2_float_window

0xd1eb,	// (0x0004ef41) bg_popup_sub_pane_cp27

0xcc44,	// (0x0004e99a) grid_toolbar2_float_pane

0xd1eb,	// (0x0004ef41) bg_popup_sub_pane_cp26

0xcc44,	// (0x0004e99a) grid_toolbar2_fixed_pane

0xcc4c,	// (0x0004e9a2) cell_toolbar2_fixed_pane_ParamLimits

0xcc4c,	// (0x0004e9a2) cell_toolbar2_fixed_pane

0xcc5c,	// (0x0004e9b2) cell_toolbar2_fixed_pane_g1

0xcc65,	// (0x0004e9bb) toolbar2_fixed_button_pane

0x90b3,	// (0x0004ae09) toolbar2_fixed_button_pane_g1

0x90bb,	// (0x0004ae11) toolbar2_fixed_button_pane_g2

0x90c3,	// (0x0004ae19) toolbar2_fixed_button_pane_g3

0x90cb,	// (0x0004ae21) toolbar2_fixed_button_pane_g4

0x90d3,	// (0x0004ae29) toolbar2_fixed_button_pane_g5

0x90db,	// (0x0004ae31) toolbar2_fixed_button_pane_g6

0x90e3,	// (0x0004ae39) toolbar2_fixed_button_pane_g7

0x90eb,	// (0x0004ae41) toolbar2_fixed_button_pane_g8

0x90f3,	// (0x0004ae49) toolbar2_fixed_button_pane_g9

0x0008,

0xf871,	// (0x000515c7) toolbar2_fixed_button_pane_g

0xcc6d,	// (0x0004e9c3) cell_toolbar2_float_pane_ParamLimits

0xcc6d,	// (0x0004e9c3) cell_toolbar2_float_pane

0xcc7e,	// (0x0004e9d4) cell_toolbar2_float_pane_g1

0xcc65,	// (0x0004e9bb) toolbar2_fixed_button_pane_cp

0xb8fa,	// (0x0004d650) fep_vkb_accented_list_pane_ParamLimits

0xb8fa,	// (0x0004d650) fep_vkb_accented_list_pane

0x7b34,	// (0x0004988a) bg_popup_fep_shadow_pane_g9

0x883b,	// (0x0004a591) bg_popup_fep_shadow_pane_cp3

0x0b66,	// (0x000428bc) list_accented_list_pane

0xcc87,	// (0x0004e9dd) list_single_accented_list_pane_ParamLimits

0xcc87,	// (0x0004e9dd) list_single_accented_list_pane

0x883b,	// (0x0004a591) list_highlight_pane_cp10

0xcc98,	// (0x0004e9ee) list_single_accented_list_pane_t1

0x7244,	// (0x00048f9a) popup_slider_window_ParamLimits

0x7244,	// (0x00048f9a) popup_slider_window

0xc8e0,	// (0x0004e636) aid_indentation_list_msg

0xcd64,	// (0x0004eaba) bg_popup_window_pane_cp19

0xcdd2,	// (0x0004eb28) popup_slider_window_g1

0xcdee,	// (0x0004eb44) popup_slider_window_g2

0xce0a,	// (0x0004eb60) popup_slider_window_g3

0x0005,

0xfcef,	// (0x00051a45) popup_slider_window_g

0xce66,	// (0x0004ebbc) popup_slider_window_t1

0xceda,	// (0x0004ec30) small_volume_slider_vertical_pane

0xb7c3,	// (0x0004d519) small_volume_slider_vertical_pane_g1

0xb7c3,	// (0x0004d519) small_volume_slider_vertical_pane_g2

0xcef6,	// (0x0004ec4c) small_volume_slider_vertical_pane_g3

0x0002,

0xfd01,	// (0x00051a57) small_volume_slider_vertical_pane_g

0x5d5c,	// (0x00047ab2) area_side_right_pane_ParamLimits

0x5d5c,	// (0x00047ab2) area_side_right_pane

0x7d8d,	// (0x00049ae3) aid_size_side_button_ParamLimits

0x7d8d,	// (0x00049ae3) aid_size_side_button

0x7da1,	// (0x00049af7) grid_sctrl_middle_pane_ParamLimits

0x7da1,	// (0x00049af7) grid_sctrl_middle_pane

0x7dc1,	// (0x00049b17) sctrl_sk_bottom_pane

0x7dd2,	// (0x00049b28) sctrl_sk_top_pane

0x7de4,	// (0x00049b3a) aid_touch_sctrl_top

0xd38e,	// (0x0004f0e4) bg_sctrl_sk_pane_ParamLimits

0xd38e,	// (0x0004f0e4) bg_sctrl_sk_pane

0x7df1,	// (0x00049b47) sctrl_sk_top_pane_g1

0x7dfe,	// (0x00049b54) sctrl_sk_top_pane_t1

0x7de4,	// (0x00049b3a) aid_touch_sctrl_bottom

0xd38e,	// (0x0004f0e4) bg_sctrl_sk_pane_cp_ParamLimits

0xd38e,	// (0x0004f0e4) bg_sctrl_sk_pane_cp

0x7e19,	// (0x00049b6f) sctrl_sk_bottom_pane_g1

0x7dfe,	// (0x00049b54) sctrl_sk_bottom_pane_t1

0x7e22,	// (0x00049b78) cell_sctrl_middle_pane_ParamLimits

0x7e22,	// (0x00049b78) cell_sctrl_middle_pane

0x7e3f,	// (0x00049b95) aid_touch_sctrl_middle_ParamLimits

0x7e3f,	// (0x00049b95) aid_touch_sctrl_middle

0x0a47,	// (0x0004279d) bg_sctrl_middle_pane_ParamLimits

0x0a47,	// (0x0004279d) bg_sctrl_middle_pane

0xba3e,	// (0x0004d794) cell_sctrl_middle_pane_g1_ParamLimits

0xba3e,	// (0x0004d794) cell_sctrl_middle_pane_g1

0x7e51,	// (0x00049ba7) cell_sctrl_middle_pane_g2_ParamLimits

0x7e51,	// (0x00049ba7) cell_sctrl_middle_pane_g2

0x0001,

0xfd0d,	// (0x00051a63) cell_sctrl_middle_pane_g_ParamLimits

0xfd0d,	// (0x00051a63) cell_sctrl_middle_pane_g

0x90b3,	// (0x0004ae09) bg_sctrl_middle_pane_g1

0x90bb,	// (0x0004ae11) bg_sctrl_middle_pane_g2

0x90c3,	// (0x0004ae19) bg_sctrl_middle_pane_g3

0x90cb,	// (0x0004ae21) bg_sctrl_middle_pane_g4

0x90d3,	// (0x0004ae29) bg_sctrl_middle_pane_g5

0x90db,	// (0x0004ae31) bg_sctrl_middle_pane_g6

0x90e3,	// (0x0004ae39) bg_sctrl_middle_pane_g7

0x90eb,	// (0x0004ae41) bg_sctrl_middle_pane_g8

0x0007,

0xfd12,	// (0x00051a68) bg_sctrl_middle_pane_g

0x90f3,	// (0x0004ae49) bg_sctrl_middle_pane_g8_copy1

0x90b3,	// (0x0004ae09) bg_sctrl_sk_pane_g1

0x90bb,	// (0x0004ae11) bg_sctrl_sk_pane_g2

0x90c3,	// (0x0004ae19) bg_sctrl_sk_pane_g3

0x0008,

0xf871,	// (0x000515c7) bg_sctrl_sk_pane_g

0x0980,	// (0x000426d6) aid_size_touch_scroll_bar

0x90cb,	// (0x0004ae21) bg_sctrl_sk_pane_g4

0x90d3,	// (0x0004ae29) bg_sctrl_sk_pane_g5

0x90db,	// (0x0004ae31) bg_sctrl_sk_pane_g6

0x90e3,	// (0x0004ae39) bg_sctrl_sk_pane_g7

0x90eb,	// (0x0004ae41) bg_sctrl_sk_pane_g8

0x90f3,	// (0x0004ae49) bg_sctrl_sk_pane_g9

0x6e5b,	// (0x00048bb1) popup_fep_china_hwr2_fs_candidate_window

0x6e65,	// (0x00048bbb) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x6e65,	// (0x00048bbb) popup_fep_china_hwr2_fs_control_window

0xba3e,	// (0x0004d794) sctrl_sk_top_pane_g2

0x0001,

0xfd08,	// (0x00051a5e) sctrl_sk_top_pane_g

0xceff,	// (0x0004ec55) aid_fep_china_hwr2_fs_cell_ParamLimits

0xceff,	// (0x0004ec55) aid_fep_china_hwr2_fs_cell

0xcf12,	// (0x0004ec68) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xcf12,	// (0x0004ec68) bg_popup_fep_shadow_pane_cp4

0xcf2b,	// (0x0004ec81) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xcf2b,	// (0x0004ec81) bg_popup_fep_shadow_pane_cp5

0xcf3d,	// (0x0004ec93) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xcf3d,	// (0x0004ec93) popup_fep_china_hwr2_fs_control_bar_grid

0xcf4d,	// (0x0004eca3) popup_fep_china_hwr2_fs_control_funtion_grid

0xcf55,	// (0x0004ecab) aid_fep_china_hwr2_fs_candi_cell

0xd1eb,	// (0x0004ef41) bg_popup_fep_shadow_pane_cp6

0xcf5f,	// (0x0004ecb5) popup_fep_china_hwr2_fs_candidate_grid

0xcf69,	// (0x0004ecbf) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xcf69,	// (0x0004ecbf) cell_fep_china_hwr2_fs_funtion_grid

0xb7c3,	// (0x0004d519) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xcf81,	// (0x0004ecd7) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xcf81,	// (0x0004ecd7) cell_fep_china_hwr2_fs_funtion_grid_g1

0xcf8f,	// (0x0004ece5) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xcf8f,	// (0x0004ece5) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd23,	// (0x00051a79) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd23,	// (0x00051a79) cell_fep_china_hwr2_fs_funtion_grid_g

0xcfa5,	// (0x0004ecfb) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xcfa5,	// (0x0004ecfb) cell_fep_china_hwr2_fs_funtion_grid_t1

0xcfba,	// (0x0004ed10) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xcfba,	// (0x0004ed10) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd28,	// (0x00051a7e) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd28,	// (0x00051a7e) cell_fep_china_hwr2_fs_funtion_grid_t

0xcfd6,	// (0x0004ed2c) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xcfde,	// (0x0004ed34) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xcfe6,	// (0x0004ed3c) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2d,	// (0x00051a83) popup_fep_china_hwr2_fs_control_bar_grid_g

0xcfee,	// (0x0004ed44) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xcfee,	// (0x0004ed44) cell_fep_china_hwr2_fs_candidate_grid

0xd00d,	// (0x0004ed63) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd015,	// (0x0004ed6b) popup_fep_china_hwr2_fs_candidate_grid_g21

0xb7c3,	// (0x0004d519) cell_fep_china_hwr2_fs_candidate_grid_g1

0xb7c3,	// (0x0004d519) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4d,	// (0x000518a3) cell_fep_china_hwr2_fs_candidate_grid_g

0xd01d,	// (0x0004ed73) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8c8f,	// (0x0004a9e5) clock_nsta_pane_cp_24_ParamLimits

0x8c8f,	// (0x0004a9e5) clock_nsta_pane_cp_24

0x8d0f,	// (0x0004aa65) indicator_nsta_pane_cp_24_ParamLimits

0x8d0f,	// (0x0004aa65) indicator_nsta_pane_cp_24

0x9e0e,	// (0x0004bb64) heading_pane_g1

0x0001,

0xf8d6,	// (0x0005162c) heading_pane_g

0xa89e,	// (0x0004c5f4) grid_sct_catagory_button_pane

0xa8d0,	// (0x0004c626) scroll_pane_cp5_ParamLimits

0xb40f,	// (0x0004d165) button_value_adjust_pane_cp5_ParamLimits

0xb40f,	// (0x0004d165) button_value_adjust_pane_cp5

0xb4f4,	// (0x0004d24a) form2_midp_time_pane_ParamLimits

0xd02b,	// (0x0004ed81) cell_sct_catagory_button_pane_ParamLimits

0xd02b,	// (0x0004ed81) cell_sct_catagory_button_pane

0xb788,	// (0x0004d4de) bg_button_pane_cp01_ParamLimits

0xb788,	// (0x0004d4de) bg_button_pane_cp01

0xb7c3,	// (0x0004d519) cell_sct_catagory_button_pane_g1

0x7285,	// (0x00048fdb) popup_tb_extension_window

0xd03d,	// (0x0004ed93) aid_size_cell_ext_ParamLimits

0xd03d,	// (0x0004ed93) aid_size_cell_ext

0xd38e,	// (0x0004f0e4) bg_tb_trans_pane_cp1_ParamLimits

0xd38e,	// (0x0004f0e4) bg_tb_trans_pane_cp1

0xd05d,	// (0x0004edb3) grid_tb_ext_pane_ParamLimits

0xd05d,	// (0x0004edb3) grid_tb_ext_pane

0xd08d,	// (0x0004ede3) cell_tb_ext_pane_ParamLimits

0xd08d,	// (0x0004ede3) cell_tb_ext_pane

0xd0a4,	// (0x0004edfa) cell_tb_ext_pane_g1_ParamLimits

0xd0a4,	// (0x0004edfa) cell_tb_ext_pane_g1

0xd0c1,	// (0x0004ee17) cell_tb_ext_pane_t1

0xd38e,	// (0x0004f0e4) list_highlight_pane_cp11_ParamLimits

0xd38e,	// (0x0004f0e4) list_highlight_pane_cp11

0x5fc3,	// (0x00047d19) popup_uni_indicator_window_ParamLimits

0x5fc3,	// (0x00047d19) popup_uni_indicator_window

0x0a47,	// (0x0004279d) bg_popup_sub_pane_cp14

0xd0dc,	// (0x0004ee32) list_uniindi_pane

0xd0e8,	// (0x0004ee3e) uniindi_top_pane

0xd38e,	// (0x0004f0e4) bg_uniindi_top_pane

0xd109,	// (0x0004ee5f) uniindi_top_pane_g1

0xd11f,	// (0x0004ee75) uniindi_top_pane_g2

0x0003,

0xfd34,	// (0x00051a8a) uniindi_top_pane_g

0xd149,	// (0x0004ee9f) uniindi_top_pane_t1

0xd175,	// (0x0004eecb) list_single_uniindi_pane_ParamLimits

0xd175,	// (0x0004eecb) list_single_uniindi_pane

0xb7c3,	// (0x0004d519) bg_uniindi_top_pane_g1

0xd187,	// (0x0004eedd) list_single_uniindi_pane_g1

0xd19a,	// (0x0004eef0) list_single_uniindi_pane_t1

0xd1eb,	// (0x0004ef41) control_bg_pane

0xd1bf,	// (0x0004ef15) bg_sctrl_sk_pane_cp1

0xd1c8,	// (0x0004ef1e) bg_sctrl_sk_pane_cp2

0xd1d1,	// (0x0004ef27) control_bg_pane_g1

0xd1da,	// (0x0004ef30) control_bg_pane_g2

0x0001,

0xfd3d,	// (0x00051a93) control_bg_pane_g

0xb230,	// (0x0004cf86) cell_indicator_nsta_pane_g1_ParamLimits

0xb23e,	// (0x0004cf94) cell_indicator_nsta_pane_g2_ParamLimits

0xfab1,	// (0x00051807) cell_indicator_nsta_pane_g_ParamLimits

0x59f1,	// (0x00047747) form2_midp_time_pane_t1_ParamLimits

0x07c2,	// (0x00042518) main_idle_act4_pane_ParamLimits

0x07c2,	// (0x00042518) main_idle_act4_pane

0x7285,	// (0x00048fdb) popup_tb_extension_window_ParamLimits

0xd07f,	// (0x0004edd5) tb_ext_find_pane_ParamLimits

0xd07f,	// (0x0004edd5) tb_ext_find_pane

0xd513,	// (0x0004f269) ai_gene_pane_1_cp1

0x8978,	// (0x0004a6ce) ai_gene_pane_2_cp1

0xd51b,	// (0x0004f271) list_single_idle_plugin_calendar_pane

0xd524,	// (0x0004f27a) list_single_idle_plugin_notification_pane

0xd52d,	// (0x0004f283) list_single_idle_plugin_player_pane

0xd536,	// (0x0004f28c) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd536,	// (0x0004f28c) list_single_idle_plugin_shortcut_pane

0xd558,	// (0x0004f2ae) main_idle_act4_pane_t1

0xd56a,	// (0x0004f2c0) main_idle_act4_pane_t2

0x0001,

0xfd42,	// (0x00051a98) main_idle_act4_pane_t

0xd57c,	// (0x0004f2d2) middle_sk_idle_act4_pane_ParamLimits

0xd57c,	// (0x0004f2d2) middle_sk_idle_act4_pane

0xd592,	// (0x0004f2e8) popup_clock_digital_analogue_window_cp2

0xd5ac,	// (0x0004f302) shortcut_wheel_idle_act4_pane_ParamLimits

0xd5ac,	// (0x0004f302) shortcut_wheel_idle_act4_pane

0xb7c3,	// (0x0004d519) shortcut_wheel_idle_act4_pane_g1

0xb7c3,	// (0x0004d519) shortcut_wheel_idle_act4_pane_g2

0xb7c3,	// (0x0004d519) shortcut_wheel_idle_act4_pane_g3

0xb7c3,	// (0x0004d519) shortcut_wheel_idle_act4_pane_g4

0xb7c3,	// (0x0004d519) shortcut_wheel_idle_act4_pane_g5

0xd5c0,	// (0x0004f316) shortcut_wheel_idle_act4_pane_g6

0xd5c8,	// (0x0004f31e) shortcut_wheel_idle_act4_pane_g7

0xd5d0,	// (0x0004f326) shortcut_wheel_idle_act4_pane_g8

0xd5d8,	// (0x0004f32e) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd47,	// (0x00051a9d) shortcut_wheel_idle_act4_pane_g

0xba3e,	// (0x0004d794) middle_sk_idle_act4_pane_g1_ParamLimits

0xba3e,	// (0x0004d794) middle_sk_idle_act4_pane_g1

0xd63c,	// (0x0004f392) middle_sk_idle_act4_pane_g2_ParamLimits

0xd63c,	// (0x0004f392) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6a,	// (0x00051ac0) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6a,	// (0x00051ac0) middle_sk_idle_act4_pane_g

0xd648,	// (0x0004f39e) middle_sk_idle_act4_pane_t1_ParamLimits

0xd648,	// (0x0004f39e) middle_sk_idle_act4_pane_t1

0xd665,	// (0x0004f3bb) grid_ai_shortcut_pane_ParamLimits

0xd665,	// (0x0004f3bb) grid_ai_shortcut_pane

0xd67e,	// (0x0004f3d4) list_highlight_pane_cp16_ParamLimits

0xd67e,	// (0x0004f3d4) list_highlight_pane_cp16

0xd68b,	// (0x0004f3e1) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd68b,	// (0x0004f3e1) list_single_idle_plugin_shortcut_pane_g1

0xd697,	// (0x0004f3ed) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd697,	// (0x0004f3ed) list_single_idle_plugin_shortcut_pane_g2

0xd6b1,	// (0x0004f407) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd6b1,	// (0x0004f407) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6f,	// (0x00051ac5) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6f,	// (0x00051ac5) list_single_idle_plugin_shortcut_pane_g

0xd6c4,	// (0x0004f41a) cell_ai_shortcut_pane_ParamLimits

0xd6c4,	// (0x0004f41a) cell_ai_shortcut_pane

0xd6e7,	// (0x0004f43d) cell_ai_shortcut_pane_g1_ParamLimits

0xd6e7,	// (0x0004f43d) cell_ai_shortcut_pane_g1

0xd513,	// (0x0004f269) ai_gene_pane_1_cp2

0xd709,	// (0x0004f45f) ai_gene_pane_2_cp2

0xd711,	// (0x0004f467) list_highlight_pane_cp15

0xd71a,	// (0x0004f470) list_single_idle_plugin_calendar_pane_g1

0xd711,	// (0x0004f467) list_highlight_pane_cp17

0xd722,	// (0x0004f478) list_single_idle_plugin_calendar_pane_g1_copy1

0xd72a,	// (0x0004f480) list_single_idle_plugin_player_pane_g1

0xab05,	// (0x0004c85b) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd76,	// (0x00051acc) list_single_idle_plugin_player_pane_g

0xd732,	// (0x0004f488) list_single_idle_plugin_player_pane_t1

0xd740,	// (0x0004f496) list_single_idle_plugin_player_pane_t2

0xd74e,	// (0x0004f4a4) list_single_idle_plugin_player_pane_t3

0xd75c,	// (0x0004f4b2) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7b,	// (0x00051ad1) list_single_idle_plugin_player_pane_t

0xd76a,	// (0x0004f4c0) wait_bar_pane_cp15

0xd772,	// (0x0004f4c8) grid_ai_notification_pane

0xab05,	// (0x0004c85b) list_single_idle_plugin_notification_pane_g1

0xd77b,	// (0x0004f4d1) cell_ai_notification_pane_ParamLimits

0xd77b,	// (0x0004f4d1) cell_ai_notification_pane

0xd788,	// (0x0004f4de) cell_ai_notification_pane_g1

0xd790,	// (0x0004f4e6) cell_ai_notification_pane_t1

0xd79e,	// (0x0004f4f4) tb_ext_find_button_pane

0xd7a6,	// (0x0004f4fc) tb_ext_find_pane_g1

0xd7ae,	// (0x0004f504) tb_ext_find_pane_t1

0x3f79,	// (0x00045ccf) tb_ext_find_button_pane_g1

0xd7bc,	// (0x0004f512) tb_ext_find_button_pane_g2

0x0001,

0xfd84,	// (0x00051ada) tb_ext_find_button_pane_g

0xd558,	// (0x0004f2ae) main_idle_act4_pane_t1_ParamLimits

0xd56a,	// (0x0004f2c0) main_idle_act4_pane_t2_ParamLimits

0xfd42,	// (0x00051a98) main_idle_act4_pane_t_ParamLimits

0xd592,	// (0x0004f2e8) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd5a0,	// (0x0004f2f6) sat_plugin_idle_act4_pane_ParamLimits

0xd5a0,	// (0x0004f2f6) sat_plugin_idle_act4_pane

0xd7c5,	// (0x0004f51b) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd7c5,	// (0x0004f51b) sat_plugin_idle_act4_pane_t1

0xd7d8,	// (0x0004f52e) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd7d8,	// (0x0004f52e) sat_plugin_idle_act4_pane_t2

0xd7eb,	// (0x0004f541) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd7eb,	// (0x0004f541) sat_plugin_idle_act4_pane_t3

0xd7fe,	// (0x0004f554) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd7fe,	// (0x0004f554) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd89,	// (0x00051adf) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd89,	// (0x00051adf) sat_plugin_idle_act4_pane_t

0x5ef4,	// (0x00047c4a) popup_battery_window_ParamLimits

0x5ef4,	// (0x00047c4a) popup_battery_window

0xd38e,	// (0x0004f0e4) bg_popup_sub_pane_cp25_ParamLimits

0xd38e,	// (0x0004f0e4) bg_popup_sub_pane_cp25

0xd811,	// (0x0004f567) popup_battery_window_g1_ParamLimits

0xd811,	// (0x0004f567) popup_battery_window_g1

0xd81d,	// (0x0004f573) popup_battery_window_t1_ParamLimits

0xd81d,	// (0x0004f573) popup_battery_window_t1

0xd82f,	// (0x0004f585) popup_battery_window_t2_ParamLimits

0xd82f,	// (0x0004f585) popup_battery_window_t2

0x0001,

0xfd92,	// (0x00051ae8) popup_battery_window_t_ParamLimits

0xfd92,	// (0x00051ae8) popup_battery_window_t

0x8843,	// (0x0004a599) midp_canvas_pane_ParamLimits

0x88ba,	// (0x0004a610) midp_keypad_pane_ParamLimits

0x88ba,	// (0x0004a610) midp_keypad_pane

0x8b87,	// (0x0004a8dd) main_midp_pane_ParamLimits

0xb2bc,	// (0x0004d012) signal_pane_g2_cp_ParamLimits

0xd84c,	// (0x0004f5a2) aid_size_cell_midp_keypad_ParamLimits

0xd84c,	// (0x0004f5a2) aid_size_cell_midp_keypad

0xd866,	// (0x0004f5bc) midp_keyp_game_grid_pane_ParamLimits

0xd866,	// (0x0004f5bc) midp_keyp_game_grid_pane

0xd886,	// (0x0004f5dc) midp_keyp_rocker_pane_ParamLimits

0xd886,	// (0x0004f5dc) midp_keyp_rocker_pane

0xd8b1,	// (0x0004f607) midp_keyp_sk_left_pane_ParamLimits

0xd8b1,	// (0x0004f607) midp_keyp_sk_left_pane

0xd90b,	// (0x0004f661) midp_keyp_sk_right_pane_ParamLimits

0xd90b,	// (0x0004f661) midp_keyp_sk_right_pane

0xd1eb,	// (0x0004ef41) bg_button_pane_cp03

0xd965,	// (0x0004f6bb) midp_keyp_sk_left_pane_g1

0xd1eb,	// (0x0004ef41) bg_button_pane_cp04

0xd965,	// (0x0004f6bb) midp_keyp_sk_right_pane_g1

0xb7c3,	// (0x0004d519) midp_keyp_rocker_pane_g1

0xd96e,	// (0x0004f6c4) keyp_game_cell_pane_ParamLimits

0xd96e,	// (0x0004f6c4) keyp_game_cell_pane

0xd1eb,	// (0x0004ef41) bg_button_pane_cp02

0xd981,	// (0x0004f6d7) keyp_game_cell_pane_g1

0x5f3e,	// (0x00047c94) popup_fep_vkb2_window_ParamLimits

0x5f3e,	// (0x00047c94) popup_fep_vkb2_window

0x7e6f,	// (0x00049bc5) aid_size_cell_vkb2_ParamLimits

0x7e6f,	// (0x00049bc5) aid_size_cell_vkb2

0x7ec3,	// (0x00049c19) popup_fep_vkb2_window_g1_ParamLimits

0x7ec3,	// (0x00049c19) popup_fep_vkb2_window_g1

0x7f0b,	// (0x00049c61) vkb2_area_bottom_pane_ParamLimits

0x7f0b,	// (0x00049c61) vkb2_area_bottom_pane

0x7f5f,	// (0x00049cb5) vkb2_area_keypad_pane_ParamLimits

0x7f5f,	// (0x00049cb5) vkb2_area_keypad_pane

0x7fa5,	// (0x00049cfb) vkb2_area_top_pane_ParamLimits

0x7fa5,	// (0x00049cfb) vkb2_area_top_pane

0x801f,	// (0x00049d75) vkb2_top_entry_pane_ParamLimits

0x801f,	// (0x00049d75) vkb2_top_entry_pane

0x8049,	// (0x00049d9f) vkb2_top_grid_left_pane_ParamLimits

0x8049,	// (0x00049d9f) vkb2_top_grid_left_pane

0x8067,	// (0x00049dbd) vkb2_top_grid_right_pane_ParamLimits

0x8067,	// (0x00049dbd) vkb2_top_grid_right_pane

0x8085,	// (0x00049ddb) vkb2_cell_keypad_pane_ParamLimits

0x8085,	// (0x00049ddb) vkb2_cell_keypad_pane

0x8156,	// (0x00049eac) vkb2_area_bottom_grid_pane_ParamLimits

0x8156,	// (0x00049eac) vkb2_area_bottom_grid_pane

0x817c,	// (0x00049ed2) vkb2_area_bottom_pane_g1_ParamLimits

0x817c,	// (0x00049ed2) vkb2_area_bottom_pane_g1

0x81a0,	// (0x00049ef6) vkb2_area_bottom_pane_g2_ParamLimits

0x81a0,	// (0x00049ef6) vkb2_area_bottom_pane_g2

0x81ce,	// (0x00049f24) vkb2_area_bottom_pane_g3_ParamLimits

0x81ce,	// (0x00049f24) vkb2_area_bottom_pane_g3

0x0002,

0xfd97,	// (0x00051aed) vkb2_area_bottom_pane_g_ParamLimits

0xfd97,	// (0x00051aed) vkb2_area_bottom_pane_g

0x822f,	// (0x00049f85) vkb2_top_cell_left_pane_ParamLimits

0x822f,	// (0x00049f85) vkb2_top_cell_left_pane

0xd992,	// (0x0004f6e8) vkb2_top_entry_pane_g1_ParamLimits

0xd992,	// (0x0004f6e8) vkb2_top_entry_pane_g1

0xd9a0,	// (0x0004f6f6) vkb2_top_entry_pane_t1_ParamLimits

0xd9a0,	// (0x0004f6f6) vkb2_top_entry_pane_t1

0xd9d2,	// (0x0004f728) vkb2_top_entry_pane_t2_ParamLimits

0xd9d2,	// (0x0004f728) vkb2_top_entry_pane_t2

0xda04,	// (0x0004f75a) vkb2_top_entry_pane_t3_ParamLimits

0xda04,	// (0x0004f75a) vkb2_top_entry_pane_t3

0x0002,

0xfd9e,	// (0x00051af4) vkb2_top_entry_pane_t_ParamLimits

0xfd9e,	// (0x00051af4) vkb2_top_entry_pane_t

0x827c,	// (0x00049fd2) vkb2_top_grid_right_pane_g1_ParamLimits

0x827c,	// (0x00049fd2) vkb2_top_grid_right_pane_g1

0x8292,	// (0x00049fe8) vkb2_top_grid_right_pane_g2_ParamLimits

0x8292,	// (0x00049fe8) vkb2_top_grid_right_pane_g2

0x82aa,	// (0x0004a000) vkb2_top_grid_right_pane_g3_ParamLimits

0x82aa,	// (0x0004a000) vkb2_top_grid_right_pane_g3

0x82c2,	// (0x0004a018) vkb2_top_grid_right_pane_g4_ParamLimits

0x82c2,	// (0x0004a018) vkb2_top_grid_right_pane_g4

0x0003,

0xfda5,	// (0x00051afb) vkb2_top_grid_right_pane_g_ParamLimits

0xfda5,	// (0x00051afb) vkb2_top_grid_right_pane_g

0x82d8,	// (0x0004a02e) vkb2_top_cell_left_pane_g1

0x82ef,	// (0x0004a045) vkb2_cell_keypad_pane_g1_ParamLimits

0x82ef,	// (0x0004a045) vkb2_cell_keypad_pane_g1

0xda28,	// (0x0004f77e) vkb2_cell_keypad_pane_t1_ParamLimits

0xda28,	// (0x0004f77e) vkb2_cell_keypad_pane_t1

0x82fd,	// (0x0004a053) vkb2_cell_bottom_grid_pane_ParamLimits

0x82fd,	// (0x0004a053) vkb2_cell_bottom_grid_pane

0x8336,	// (0x0004a08c) vkb2_cell_bottom_grid_pane_g1

0xd5e0,	// (0x0004f336) aid_call2_pane_cp02

0xd5e8,	// (0x0004f33e) aid_call_pane_cp02

0xd5f0,	// (0x0004f346) clock_digital_number_pane_cp10

0xd5f8,	// (0x0004f34e) clock_digital_number_pane_cp11

0xd600,	// (0x0004f356) clock_digital_number_pane_cp12

0xd608,	// (0x0004f35e) clock_digital_number_pane_cp13

0xd610,	// (0x0004f366) clock_digital_separator_pane_cp10

0x3f79,	// (0x00045ccf) popup_clock_digital_analogue_window_cp2_g1

0x3f79,	// (0x00045ccf) popup_clock_digital_analogue_window_cp2_g2

0xd618,	// (0x0004f36e) popup_clock_digital_analogue_window_cp2_g3

0x3f79,	// (0x00045ccf) popup_clock_digital_analogue_window_cp2_g4

0xd618,	// (0x0004f36e) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5a,	// (0x00051ab0) popup_clock_digital_analogue_window_cp2_g

0xd620,	// (0x0004f376) popup_clock_digital_analogue_window_cp2_t1

0xd62e,	// (0x0004f384) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd65,	// (0x00051abb) popup_clock_digital_analogue_window_cp2_t

0xb7c3,	// (0x0004d519) clock_digital_number_pane_cp10_g1

0xb7c3,	// (0x0004d519) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4d,	// (0x000518a3) clock_digital_number_pane_cp10_g

0xb7c3,	// (0x0004d519) clock_digital_separator_pane_cp10_g1

0xb7c3,	// (0x0004d519) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4d,	// (0x000518a3) clock_digital_separator_pane_cp10_g

0xd12b,	// (0x0004ee81) uniindi_top_pane_g3

0xd13c,	// (0x0004ee92) uniindi_top_pane_g4

0x8110,	// (0x00049e66) vkb2_row_keypad_pane_ParamLimits

0x8110,	// (0x00049e66) vkb2_row_keypad_pane

0x8352,	// (0x0004a0a8) vkb2_cell_t_keypad_pane_ParamLimits

0x8352,	// (0x0004a0a8) vkb2_cell_t_keypad_pane

0x8362,	// (0x0004a0b8) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x8362,	// (0x0004a0b8) vkb2_cell_t_keypad_pane_cp08

0x8377,	// (0x0004a0cd) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x8377,	// (0x0004a0cd) vkb2_cell_t_keypad_pane_cp09

0x838b,	// (0x0004a0e1) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x838b,	// (0x0004a0e1) vkb2_cell_t_keypad_pane_cp01

0x839c,	// (0x0004a0f2) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x839c,	// (0x0004a0f2) vkb2_cell_t_keypad_pane_cp02

0x83ad,	// (0x0004a103) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x83ad,	// (0x0004a103) vkb2_cell_t_keypad_pane_cp03

0x83be,	// (0x0004a114) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x83be,	// (0x0004a114) vkb2_cell_t_keypad_pane_cp04

0x83cf,	// (0x0004a125) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x83cf,	// (0x0004a125) vkb2_cell_t_keypad_pane_cp05

0x83e0,	// (0x0004a136) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x83e0,	// (0x0004a136) vkb2_cell_t_keypad_pane_cp06

0x83f3,	// (0x0004a149) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x83f3,	// (0x0004a149) vkb2_cell_t_keypad_pane_cp07

0x8408,	// (0x0004a15e) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x8408,	// (0x0004a15e) vkb2_cell_t_keypad_pane_cp10

0xba3e,	// (0x0004d794) vkb2_cell_t_keypad_pane_g1

0xda3f,	// (0x0004f795) vkb2_cell_t_keypad_pane_t1

0xd1eb,	// (0x0004ef41) popup_grid_graphic2_window

0xda51,	// (0x0004f7a7) aid_size_cell_graphic2_ParamLimits

0xda51,	// (0x0004f7a7) aid_size_cell_graphic2

0xda89,	// (0x0004f7df) bg_popup_window_pane_cp21_ParamLimits

0xda89,	// (0x0004f7df) bg_popup_window_pane_cp21

0xda97,	// (0x0004f7ed) graphic2_pages_pane_ParamLimits

0xda97,	// (0x0004f7ed) graphic2_pages_pane

0xdadd,	// (0x0004f833) grid_graphic2_control_pane_ParamLimits

0xdadd,	// (0x0004f833) grid_graphic2_control_pane

0xdb1b,	// (0x0004f871) grid_graphic2_pane_ParamLimits

0xdb1b,	// (0x0004f871) grid_graphic2_pane

0xdb91,	// (0x0004f8e7) cell_graphic2_pane

0xd1eb,	// (0x0004ef41) main_comp_mode_pane

0xc99c,	// (0x0004e6f2) list_ai3_gene_pane_ParamLimits

0xcd64,	// (0x0004eaba) bg_popup_window_pane_cp19_ParamLimits

0xcd70,	// (0x0004eac6) bg_touch_area_indi_pane_ParamLimits

0xcd70,	// (0x0004eac6) bg_touch_area_indi_pane

0xcd86,	// (0x0004eadc) bg_touch_area_indi_pane_cp01_ParamLimits

0xcd86,	// (0x0004eadc) bg_touch_area_indi_pane_cp01

0xcd9e,	// (0x0004eaf4) bg_touch_area_indi_pane_cp02_ParamLimits

0xcd9e,	// (0x0004eaf4) bg_touch_area_indi_pane_cp02

0xcdb8,	// (0x0004eb0e) bg_touch_area_indi_pane_cp03_ParamLimits

0xcdb8,	// (0x0004eb0e) bg_touch_area_indi_pane_cp03

0xcdd2,	// (0x0004eb28) popup_slider_window_g1_ParamLimits

0xcdee,	// (0x0004eb44) popup_slider_window_g2_ParamLimits

0xce0a,	// (0x0004eb60) popup_slider_window_g3_ParamLimits

0xfcef,	// (0x00051a45) popup_slider_window_g_ParamLimits

0xce66,	// (0x0004ebbc) popup_slider_window_t1_ParamLimits

0xceda,	// (0x0004ec30) small_volume_slider_vertical_pane_ParamLimits

0xdb91,	// (0x0004f8e7) cell_graphic2_pane_ParamLimits

0xdbe3,	// (0x0004f939) bg_button_pane_cp10_ParamLimits

0xdbe3,	// (0x0004f939) bg_button_pane_cp10

0xdbf8,	// (0x0004f94e) bg_button_pane_cp11_ParamLimits

0xdbf8,	// (0x0004f94e) bg_button_pane_cp11

0xdc0d,	// (0x0004f963) graphic2_pages_pane_g1_ParamLimits

0xdc0d,	// (0x0004f963) graphic2_pages_pane_g1

0xdc28,	// (0x0004f97e) graphic2_pages_pane_g2_ParamLimits

0xdc28,	// (0x0004f97e) graphic2_pages_pane_g2

0x0001,

0xfdb3,	// (0x00051b09) graphic2_pages_pane_g_ParamLimits

0xfdb3,	// (0x00051b09) graphic2_pages_pane_g

0xdc40,	// (0x0004f996) graphic2_pages_pane_t1_ParamLimits

0xdc40,	// (0x0004f996) graphic2_pages_pane_t1

0xdc56,	// (0x0004f9ac) cell_graphic2_control_pane_ParamLimits

0xdc56,	// (0x0004f9ac) cell_graphic2_control_pane

0xdc79,	// (0x0004f9cf) cell_graphic2_pane_g1_ParamLimits

0xdc79,	// (0x0004f9cf) cell_graphic2_pane_g1

0xdc86,	// (0x0004f9dc) cell_graphic2_pane_g2_ParamLimits

0xdc86,	// (0x0004f9dc) cell_graphic2_pane_g2

0xdc93,	// (0x0004f9e9) cell_graphic2_pane_g3_ParamLimits

0xdc93,	// (0x0004f9e9) cell_graphic2_pane_g3

0xdca0,	// (0x0004f9f6) cell_graphic2_pane_g4_ParamLimits

0xdca0,	// (0x0004f9f6) cell_graphic2_pane_g4

0xdcad,	// (0x0004fa03) cell_graphic2_pane_g5_ParamLimits

0xdcad,	// (0x0004fa03) cell_graphic2_pane_g5

0x0004,

0xfdb8,	// (0x00051b0e) cell_graphic2_pane_g_ParamLimits

0xfdb8,	// (0x00051b0e) cell_graphic2_pane_g

0xdcc8,	// (0x0004fa1e) cell_graphic2_pane_t1_ParamLimits

0xdcc8,	// (0x0004fa1e) cell_graphic2_pane_t1

0x91af,	// (0x0004af05) grid_highlight_pane_cp11_ParamLimits

0x91af,	// (0x0004af05) grid_highlight_pane_cp11

0xd38e,	// (0x0004f0e4) bg_button_pane_cp05

0xdcf1,	// (0x0004fa47) cell_graphic2_control_pane_g1

0xb7c3,	// (0x0004d519) bg_touch_area_indi_pane_g1

0xdd19,	// (0x0004fa6f) aid_cmod_rocker_key_size

0xdd23,	// (0x0004fa79) aid_cmode_itu_key_size

0xdd2d,	// (0x0004fa83) main_cmode_video_pane

0xdd37,	// (0x0004fa8d) main_comp_mode_itu_pane

0xdd43,	// (0x0004fa99) main_comp_mode_rocker_pane

0xdd4f,	// (0x0004faa5) cell_cmode_rocker_pane_ParamLimits

0xdd4f,	// (0x0004faa5) cell_cmode_rocker_pane

0xdd63,	// (0x0004fab9) cell_cmode_itu_pane_ParamLimits

0xdd63,	// (0x0004fab9) cell_cmode_itu_pane

0x0a47,	// (0x0004279d) bg_button_pane_cp06_ParamLimits

0x0a47,	// (0x0004279d) bg_button_pane_cp06

0xba3e,	// (0x0004d794) cell_cmode_rocker_pane_g1_ParamLimits

0xba3e,	// (0x0004d794) cell_cmode_rocker_pane_g1

0xcf81,	// (0x0004ecd7) cell_cmode_rocker_pane_g2_ParamLimits

0xcf81,	// (0x0004ecd7) cell_cmode_rocker_pane_g2

0x0001,

0xfdc8,	// (0x00051b1e) cell_cmode_rocker_pane_g_ParamLimits

0xfdc8,	// (0x00051b1e) cell_cmode_rocker_pane_g

0xd1eb,	// (0x0004ef41) bg_button_pane_cp07

0xdd7a,	// (0x0004fad0) cell_cmode_itu_pane_g1

0xdd83,	// (0x0004fad9) cell_cmode_itu_pane_t1

0xdd91,	// (0x0004fae7) cell_cmode_itu_pane_t2

0x0001,

0xfdcd,	// (0x00051b23) cell_cmode_itu_pane_t

0xd1af,	// (0x0004ef05) aid_touch_ctrl_left

0xd1b7,	// (0x0004ef0d) aid_touch_ctrl_right

0xd1eb,	// (0x0004ef41) compa_mode_pane

0xdd9f,	// (0x0004faf5) aid_cmod_rocker_key_size_cp

0xdda9,	// (0x0004faff) aid_cmode_itu_key_size_cp

0xddb3,	// (0x0004fb09) compa_mode_pane_g1

0xddbb,	// (0x0004fb11) compa_mode_pane_g2

0xddc3,	// (0x0004fb19) compa_mode_pane_g3

0x0002,

0xfdd2,	// (0x00051b28) compa_mode_pane_g

0xddcb,	// (0x0004fb21) main_comp_mode_itu_pane_cp

0xddd3,	// (0x0004fb29) main_comp_mode_rocker_pane_cp

0xdddb,	// (0x0004fb31) cell_cmode_itu_pane_cp_ParamLimits

0xdddb,	// (0x0004fb31) cell_cmode_itu_pane_cp

0xddf0,	// (0x0004fb46) cell_cmode_rocker_pane_cp_ParamLimits

0xddf0,	// (0x0004fb46) cell_cmode_rocker_pane_cp

0x0a47,	// (0x0004279d) bg_button_pane_cp06_cp_ParamLimits

0x0a47,	// (0x0004279d) bg_button_pane_cp06_cp

0xba3e,	// (0x0004d794) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xba3e,	// (0x0004d794) cell_cmode_rocker_pane_g1_cp

0xb7c3,	// (0x0004d519) cell_cmode_rocker_pane_g2_cp

0xd1eb,	// (0x0004ef41) bg_button_pane_cp07_cp

0xde02,	// (0x0004fb58) cell_cmode_itu_pane_g1_cp

0xde0b,	// (0x0004fb61) cell_cmode_itu_pane_t1_cp

0xde0b,	// (0x0004fb61) cell_cmode_itu_pane_t2_cp

0xa692,	// (0x0004c3e8) settings_code_pane_cp2

0xd24d,	// (0x0004efa3) bg_popup_window_pane_cp3_ParamLimits

0x0753,	// (0x000424a9) heading_pane_cp3_ParamLimits

0x075f,	// (0x000424b5) listscroll_popup_graphic_pane_ParamLimits

0x7902,	// (0x00049658) fep_hwr_aid_pane_ParamLimits

0x7de4,	// (0x00049b3a) aid_touch_sctrl_top_ParamLimits

0x7df1,	// (0x00049b47) sctrl_sk_top_pane_g1_ParamLimits

0xba3e,	// (0x0004d794) sctrl_sk_top_pane_g2_ParamLimits

0xfd08,	// (0x00051a5e) sctrl_sk_top_pane_g_ParamLimits

0x7dfe,	// (0x00049b54) sctrl_sk_top_pane_t1_ParamLimits

0x7de4,	// (0x00049b3a) aid_touch_sctrl_bottom_ParamLimits

0x7dfe,	// (0x00049b54) sctrl_sk_bottom_pane_t1_ParamLimits

0xd0f5,	// (0x0004ee4b) aid_area_touch_clock

0x7fe7,	// (0x00049d3d) aid_vkb2_area_top_pane_cell_ParamLimits

0x7fe7,	// (0x00049d3d) aid_vkb2_area_top_pane_cell

0x8132,	// (0x00049e88) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8132,	// (0x00049e88) aid_vkb2_area_bottom_pane_cell

0xd98a,	// (0x0004f6e0) popup_char_count_window

0xde19,	// (0x0004fb6f) popup_char_count_window_g1

0xde22,	// (0x0004fb78) popup_char_count_window_g2

0xde2b,	// (0x0004fb81) popup_char_count_window_g3

0x0002,

0xfdd9,	// (0x00051b2f) popup_char_count_window_g

0xde34,	// (0x0004fb8a) popup_char_count_window_t1

0x7ea1,	// (0x00049bf7) popup_fep_char_preview_window_ParamLimits

0x7ea1,	// (0x00049bf7) popup_fep_char_preview_window

0x8005,	// (0x00049d5b) vkb2_top_candi_pane_ParamLimits

0x8005,	// (0x00049d5b) vkb2_top_candi_pane

0xde42,	// (0x0004fb98) cell_vkb2_top_candi_pane_ParamLimits

0xde42,	// (0x0004fb98) cell_vkb2_top_candi_pane

0x978b,	// (0x0004b4e1) bg_popup_fep_char_preview_window_ParamLimits

0x978b,	// (0x0004b4e1) bg_popup_fep_char_preview_window

0x841d,	// (0x0004a173) popup_fep_char_preview_window_t1_ParamLimits

0x841d,	// (0x0004a173) popup_fep_char_preview_window_t1

0xde93,	// (0x0004fbe9) bg_popup_fep_char_preview_window_g1

0xde9b,	// (0x0004fbf1) bg_popup_fep_char_preview_window_g2

0xdea3,	// (0x0004fbf9) bg_popup_fep_char_preview_window_g3

0xdeab,	// (0x0004fc01) bg_popup_fep_char_preview_window_g4

0xdeb3,	// (0x0004fc09) bg_popup_fep_char_preview_window_g5

0x8457,	// (0x0004a1ad) bg_popup_fep_char_preview_window_g6

0xdebb,	// (0x0004fc11) bg_popup_fep_char_preview_window_g7

0xdec3,	// (0x0004fc19) bg_popup_fep_char_preview_window_g8

0xdecb,	// (0x0004fc21) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde0,	// (0x00051b36) bg_popup_fep_char_preview_window_g

0xba3e,	// (0x0004d794) cell_vkb2_top_candi_pane_g1_ParamLimits

0xba3e,	// (0x0004d794) cell_vkb2_top_candi_pane_g1

0xbd7f,	// (0x0004dad5) cell_vkb2_top_candi_pane_g2_ParamLimits

0xbd7f,	// (0x0004dad5) cell_vkb2_top_candi_pane_g2

0xbda0,	// (0x0004daf6) cell_vkb2_top_candi_pane_g3_ParamLimits

0xbda0,	// (0x0004daf6) cell_vkb2_top_candi_pane_g3

0x845f,	// (0x0004a1b5) cell_vkb2_top_candi_pane_g4_ParamLimits

0x845f,	// (0x0004a1b5) cell_vkb2_top_candi_pane_g4

0xded3,	// (0x0004fc29) cell_vkb2_top_candi_pane_g5_ParamLimits

0xded3,	// (0x0004fc29) cell_vkb2_top_candi_pane_g5

0xcf81,	// (0x0004ecd7) cell_vkb2_top_candi_pane_g6_ParamLimits

0xcf81,	// (0x0004ecd7) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf3,	// (0x00051b49) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf3,	// (0x00051b49) cell_vkb2_top_candi_pane_g

0x8480,	// (0x0004a1d6) cell_vkb2_top_candi_pane_t1

0x76ed,	// (0x00049443) aid_size_touch_slider_mark_ParamLimits

0x76ed,	// (0x00049443) aid_size_touch_slider_mark

0xdacd,	// (0x0004f823) grid_graphic2_catg_pane_ParamLimits

0xdacd,	// (0x0004f823) grid_graphic2_catg_pane

0xdb6b,	// (0x0004f8c1) popup_grid_graphic2_window_t1_ParamLimits

0xdb6b,	// (0x0004f8c1) popup_grid_graphic2_window_t1

0xdb7d,	// (0x0004f8d3) popup_grid_graphic2_window_t2_ParamLimits

0xdb7d,	// (0x0004f8d3) popup_grid_graphic2_window_t2

0x0001,

0xfdae,	// (0x00051b04) popup_grid_graphic2_window_t_ParamLimits

0xfdae,	// (0x00051b04) popup_grid_graphic2_window_t

0xd38e,	// (0x0004f0e4) bg_button_pane_cp05_ParamLimits

0xdcf1,	// (0x0004fa47) cell_graphic2_control_pane_g1_ParamLimits

0xdef4,	// (0x0004fc4a) cell_graphic2_catg_pane_ParamLimits

0xdef4,	// (0x0004fc4a) cell_graphic2_catg_pane

0xd1eb,	// (0x0004ef41) bg_button_pane_cp12

0xdf06,	// (0x0004fc5c) cell_graphic2_catg_pane_g1

0xd0c1,	// (0x0004ee17) cell_tb_ext_pane_t1_ParamLimits

0x824f,	// (0x00049fa5) vkb2_top_cell_right_narrow_pane_ParamLimits

0x824f,	// (0x00049fa5) vkb2_top_cell_right_narrow_pane

0x8267,	// (0x00049fbd) vkb2_top_cell_right_wide_pane_ParamLimits

0x8267,	// (0x00049fbd) vkb2_top_cell_right_wide_pane

0x78f4,	// (0x0004964a) bg_vkb2_func_pane_ParamLimits

0x78f4,	// (0x0004964a) bg_vkb2_func_pane

0x82d8,	// (0x0004a02e) vkb2_top_cell_left_pane_g1_ParamLimits

0x78f4,	// (0x0004964a) bg_vkb2_fuc_pane_cp03_ParamLimits

0x78f4,	// (0x0004964a) bg_vkb2_fuc_pane_cp03

0x8336,	// (0x0004a08c) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x90bb,	// (0x0004ae11) bg_vkb2_func_pane_g1

0x90c3,	// (0x0004ae19) bg_vkb2_func_pane_g2

0x90d3,	// (0x0004ae29) bg_vkb2_func_pane_g3

0x90cb,	// (0x0004ae21) bg_vkb2_func_pane_g4

0x90db,	// (0x0004ae31) bg_vkb2_func_pane_g5

0x90e3,	// (0x0004ae39) bg_vkb2_func_pane_g6

0x90eb,	// (0x0004ae41) bg_vkb2_func_pane_g7

0x90f3,	// (0x0004ae49) bg_vkb2_func_pane_g8

0x90b3,	// (0x0004ae09) bg_vkb2_func_pane_g9

0x0008,

0xfe00,	// (0x00051b56) bg_vkb2_func_pane_g

0x78f4,	// (0x0004964a) bg_vkb2_fuc_pane_cp01_ParamLimits

0x78f4,	// (0x0004964a) bg_vkb2_fuc_pane_cp01

0x82d8,	// (0x0004a02e) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x82d8,	// (0x0004a02e) vkb2_top_cell_right_wide_pane_g1

0x78f4,	// (0x0004964a) bg_vkb2_fuc_pane_cp02_ParamLimits

0x78f4,	// (0x0004964a) bg_vkb2_fuc_pane_cp02

0x8336,	// (0x0004a08c) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x8336,	// (0x0004a08c) vkb2_top_cell_right_narrow_pane_g1

0xcce2,	// (0x0004ea38) aid_touch_area_decrease_ParamLimits

0xcce2,	// (0x0004ea38) aid_touch_area_decrease

0xcd06,	// (0x0004ea5c) aid_touch_area_increase_ParamLimits

0xcd06,	// (0x0004ea5c) aid_touch_area_increase

0xcd12,	// (0x0004ea68) aid_touch_area_mute_ParamLimits

0xcd12,	// (0x0004ea68) aid_touch_area_mute

0xcd36,	// (0x0004ea8c) aid_touch_area_slider_ParamLimits

0xcd36,	// (0x0004ea8c) aid_touch_area_slider

0xce26,	// (0x0004eb7c) popup_slider_window_g4_ParamLimits

0xce26,	// (0x0004eb7c) popup_slider_window_g4

0xce32,	// (0x0004eb88) popup_slider_window_g5_ParamLimits

0xce32,	// (0x0004eb88) popup_slider_window_g5

0xce54,	// (0x0004ebaa) popup_slider_window_g6_ParamLimits

0xce54,	// (0x0004ebaa) popup_slider_window_g6

0xce94,	// (0x0004ebea) popup_slider_window_t2_ParamLimits

0xce94,	// (0x0004ebea) popup_slider_window_t2

0x0001,

0xfcfc,	// (0x00051a52) popup_slider_window_t_ParamLimits

0xfcfc,	// (0x00051a52) popup_slider_window_t

0xceac,	// (0x0004ec02) slider_pane_ParamLimits

0xceac,	// (0x0004ec02) slider_pane

0xdf0f,	// (0x0004fc65) slider_pane_g1_ParamLimits

0xdf0f,	// (0x0004fc65) slider_pane_g1

0xdf23,	// (0x0004fc79) slider_pane_g2_ParamLimits

0xdf23,	// (0x0004fc79) slider_pane_g2

0xdf39,	// (0x0004fc8f) slider_pane_g3_ParamLimits

0xdf39,	// (0x0004fc8f) slider_pane_g3

0x0003,

0xfe13,	// (0x00051b69) slider_pane_g_ParamLimits

0xfe13,	// (0x00051b69) slider_pane_g

0x72e7,	// (0x0004903d) popup_tb_float_extension_window_ParamLimits

0x72e7,	// (0x0004903d) popup_tb_float_extension_window

0xdf65,	// (0x0004fcbb) aid_size_cell_tb_float_ext

0xd1eb,	// (0x0004ef41) bg_popup_sub_window_cp28

0xdf71,	// (0x0004fcc7) grid_tb_float_ext_pane

0xdf7d,	// (0x0004fcd3) cell_tb_float_ext_pane_ParamLimits

0xdf7d,	// (0x0004fcd3) cell_tb_float_ext_pane

0xdf99,	// (0x0004fcef) cell_tb_float_ext_pane_g1

0xdfa2,	// (0x0004fcf8) grid_highlight_pane_cp12

0x7a3b,	// (0x00049791) cell_last_hwr_side_pane_ParamLimits

0x7a3b,	// (0x00049791) cell_last_hwr_side_pane

0xb7c3,	// (0x0004d519) cell_last_hwr_side_pane_g1

0xdfab,	// (0x0004fd01) cell_last_hwr_side_pane_g2

0x0001,

0xfe1c,	// (0x00051b72) cell_last_hwr_side_pane_g

0x81fe,	// (0x00049f54) vkb2_area_bottom_space_btn_pane_ParamLimits

0x81fe,	// (0x00049f54) vkb2_area_bottom_space_btn_pane

0xba3e,	// (0x0004d794) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xda3f,	// (0x0004f795) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x8480,	// (0x0004a1d6) cell_vkb2_top_candi_pane_t1_ParamLimits

0x849e,	// (0x0004a1f4) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x849e,	// (0x0004a1f4) vkb2_area_bottom_space_btn_pane_g1

0x84d8,	// (0x0004a22e) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x84d8,	// (0x0004a22e) vkb2_area_bottom_space_btn_pane_g2

0x850e,	// (0x0004a264) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x850e,	// (0x0004a264) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe21,	// (0x00051b77) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe21,	// (0x00051b77) vkb2_area_bottom_space_btn_pane_g

0x79ab,	// (0x00049701) cel_fep_hwr_func_pane_ParamLimits

0x79ab,	// (0x00049701) cel_fep_hwr_func_pane

0x79e7,	// (0x0004973d) cell_hwr_side_button_pane_ParamLimits

0x79e7,	// (0x0004973d) cell_hwr_side_button_pane

0xd0f5,	// (0x0004ee4b) aid_area_touch_clock_ParamLimits

0xd38e,	// (0x0004f0e4) bg_uniindi_top_pane_ParamLimits

0xd109,	// (0x0004ee5f) uniindi_top_pane_g1_ParamLimits

0xd11f,	// (0x0004ee75) uniindi_top_pane_g2_ParamLimits

0xd12b,	// (0x0004ee81) uniindi_top_pane_g3_ParamLimits

0xd13c,	// (0x0004ee92) uniindi_top_pane_g4_ParamLimits

0xfd34,	// (0x00051a8a) uniindi_top_pane_g_ParamLimits

0xd149,	// (0x0004ee9f) uniindi_top_pane_t1_ParamLimits

0xd38e,	// (0x0004f0e4) bg_vkb2_func_pane_cp01_ParamLimits

0xd38e,	// (0x0004f0e4) bg_vkb2_func_pane_cp01

0xdfb4,	// (0x0004fd0a) cel_fep_hwr_func_pane_g1_ParamLimits

0xdfb4,	// (0x0004fd0a) cel_fep_hwr_func_pane_g1

0xd38e,	// (0x0004f0e4) bg_vkb2_func_pane_cp02_ParamLimits

0xd38e,	// (0x0004f0e4) bg_vkb2_func_pane_cp02

0xdfb4,	// (0x0004fd0a) cell_hwr_side_button_pane_g1_ParamLimits

0xdfb4,	// (0x0004fd0a) cell_hwr_side_button_pane_g1

0x8f34,	// (0x0004ac8a) status_pane_g4_ParamLimits

0x8f34,	// (0x0004ac8a) status_pane_g4

0x8f4e,	// (0x0004aca4) status_pane_t1

0xb562,	// (0x0004d2b8) form2_midp_gauge_slider_cont_pane

0xb56a,	// (0x0004d2c0) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb57c,	// (0x0004d2d2) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb58e,	// (0x0004d2e4) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb00,	// (0x00051856) form2_midp_gauge_slider_pane_t_ParamLimits

0xb5a0,	// (0x0004d2f6) form2_midp_slider_pane_ParamLimits

0x7e61,	// (0x00049bb7) aid_size_cell_func_vkb2_ParamLimits

0x7e61,	// (0x00049bb7) aid_size_cell_func_vkb2

0xdf51,	// (0x0004fca7) slider_pane_g4_ParamLimits

0xdf51,	// (0x0004fca7) slider_pane_g4

0x8558,	// (0x0004a2ae) form2_midp_gauge_slider_pane_t2_cp01

0x8566,	// (0x0004a2bc) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x8566,	// (0x0004a2bc) form2_midp_gauge_slider_pane_t3_cp01

0x8583,	// (0x0004a2d9) form2_midp_slider_pane_cp01

0xd1eb,	// (0x0004ef41) navi_smil_pane

0xdfed,	// (0x0004fd43) navi_smil_pane_g1

0xdff5,	// (0x0004fd4b) navi_smil_pane_t1

0xdfc2,	// (0x0004fd18) form2_midp_slider_pane_g1

0xdfcb,	// (0x0004fd21) form2_midp_slider_pane_g2

0xdfd3,	// (0x0004fd29) form2_midp_slider_pane_g3

0xdfc2,	// (0x0004fd18) form2_midp_slider_pane_g4

0xdfdb,	// (0x0004fd31) form2_midp_slider_pane_g5

0x0004,

0xfe2a,	// (0x00051b80) form2_midp_slider_pane_g

0x8548,	// (0x0004a29e) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x8548,	// (0x0004a29e) vkb2_area_bottom_space_btn_pane_g4

0x8d4b,	// (0x0004aaa1) lc0_navi_pane_ParamLimits

0x8d4b,	// (0x0004aaa1) lc0_navi_pane

0x8dc7,	// (0x0004ab1d) lc0_stat_indi_pane_ParamLimits

0x8dc7,	// (0x0004ab1d) lc0_stat_indi_pane

0x8dde,	// (0x0004ab34) ls0_title_pane_ParamLimits

0x8dde,	// (0x0004ab34) ls0_title_pane

0x0a47,	// (0x0004279d) bg_popup_sub_pane_cp14_ParamLimits

0xd0dc,	// (0x0004ee32) list_uniindi_pane_ParamLimits

0xd0e8,	// (0x0004ee3e) uniindi_top_pane_ParamLimits

0xd187,	// (0x0004eedd) list_single_uniindi_pane_g1_ParamLimits

0xd19a,	// (0x0004eef0) list_single_uniindi_pane_t1_ParamLimits

0x858c,	// (0x0004a2e2) lc0_stat_clock_pane_ParamLimits

0x858c,	// (0x0004a2e2) lc0_stat_clock_pane

0xe003,	// (0x0004fd59) lc0_stat_indi_pane_g1_ParamLimits

0xe003,	// (0x0004fd59) lc0_stat_indi_pane_g1

0xe010,	// (0x0004fd66) lc0_stat_indi_pane_g2_ParamLimits

0xe010,	// (0x0004fd66) lc0_stat_indi_pane_g2

0x0001,

0xfe35,	// (0x00051b8b) lc0_stat_indi_pane_g_ParamLimits

0xfe35,	// (0x00051b8b) lc0_stat_indi_pane_g

0x8599,	// (0x0004a2ef) lc0_uni_indicator_pane_ParamLimits

0x8599,	// (0x0004a2ef) lc0_uni_indicator_pane

0xe01d,	// (0x0004fd73) ls0_title_pane_g1_ParamLimits

0xe01d,	// (0x0004fd73) ls0_title_pane_g1

0xe031,	// (0x0004fd87) ls0_title_pane_t1_ParamLimits

0xe031,	// (0x0004fd87) ls0_title_pane_t1

0x85a6,	// (0x0004a2fc) lc0_uni_indicator_pane_g1_ParamLimits

0x85a6,	// (0x0004a2fc) lc0_uni_indicator_pane_g1

0xe067,	// (0x0004fdbd) lc0_stat_clock_pane_t1

0xd1eb,	// (0x0004ef41) main_ai5_pane

0xe075,	// (0x0004fdcb) ai5_sk_pane_ParamLimits

0xe075,	// (0x0004fdcb) ai5_sk_pane

0xe082,	// (0x0004fdd8) cell_ai5_widget_pane_ParamLimits

0xe082,	// (0x0004fdd8) cell_ai5_widget_pane

0xe61e,	// (0x00050374) aid_size_cell_widget_grid

0xe634,	// (0x0005038a) bg_ai5_widget_pane_ParamLimits

0xe634,	// (0x0005038a) bg_ai5_widget_pane

0xe69e,	// (0x000503f4) cell_ai5_widget_pane_g2

0xe6ae,	// (0x00050404) cell_ai5_widget_pane_g3

0xe6cd,	// (0x00050423) cell_ai5_widget_pane_g4

0xe6d9,	// (0x0005042f) cell_ai5_widget_pane_g5

0xe6e5,	// (0x0005043b) cell_ai5_widget_pane_g6

0xe6f1,	// (0x00050447) cell_ai5_widget_pane_g7

0xe739,	// (0x0005048f) cell_ai5_widget_pane_t1_ParamLimits

0xe739,	// (0x0005048f) cell_ai5_widget_pane_t1

0xe756,	// (0x000504ac) cell_ai5_widget_pane_t2_ParamLimits

0xe756,	// (0x000504ac) cell_ai5_widget_pane_t2

0xe76e,	// (0x000504c4) cell_ai5_widget_pane_t3_ParamLimits

0xe76e,	// (0x000504c4) cell_ai5_widget_pane_t3

0xe786,	// (0x000504dc) cell_ai5_widget_pane_t4_ParamLimits

0xe786,	// (0x000504dc) cell_ai5_widget_pane_t4

0xe7a0,	// (0x000504f6) cell_ai5_widget_pane_t5_ParamLimits

0xe7a0,	// (0x000504f6) cell_ai5_widget_pane_t5

0xe7bf,	// (0x00050515) cell_ai5_widget_pane_t6_ParamLimits

0xe7bf,	// (0x00050515) cell_ai5_widget_pane_t6

0xe7d1,	// (0x00050527) cell_ai5_widget_pane_t7_ParamLimits

0xe7d1,	// (0x00050527) cell_ai5_widget_pane_t7

0xe7ea,	// (0x00050540) cell_ai5_widget_pane_t8_ParamLimits

0xe7ea,	// (0x00050540) cell_ai5_widget_pane_t8

0x0009,

0xfe4f,	// (0x00051ba5) cell_ai5_widget_pane_t_ParamLimits

0xfe4f,	// (0x00051ba5) cell_ai5_widget_pane_t

0xe836,	// (0x0005058c) grid_ai5_widget_pane

0x0a47,	// (0x0004279d) highlight_cell_ai5_widget_pane_ParamLimits

0x0a47,	// (0x0004279d) highlight_cell_ai5_widget_pane

0xe84e,	// (0x000505a4) ai5_sk_left_pane

0xe858,	// (0x000505ae) ai5_sk_middle_pane

0xe862,	// (0x000505b8) ai5_sk_right_pane

0xe86c,	// (0x000505c2) bg_ai5_widget_pane_g1_ParamLimits

0xe86c,	// (0x000505c2) bg_ai5_widget_pane_g1

0xe878,	// (0x000505ce) bg_ai5_widget_pane_g2_ParamLimits

0xe878,	// (0x000505ce) bg_ai5_widget_pane_g2

0xe884,	// (0x000505da) bg_ai5_widget_pane_g3_ParamLimits

0xe884,	// (0x000505da) bg_ai5_widget_pane_g3

0xe890,	// (0x000505e6) bg_ai5_widget_pane_g4_ParamLimits

0xe890,	// (0x000505e6) bg_ai5_widget_pane_g4

0xe89c,	// (0x000505f2) bg_ai5_widget_pane_g5_ParamLimits

0xe89c,	// (0x000505f2) bg_ai5_widget_pane_g5

0xe8a8,	// (0x000505fe) bg_ai5_widget_pane_g6_ParamLimits

0xe8a8,	// (0x000505fe) bg_ai5_widget_pane_g6

0xe8b4,	// (0x0005060a) bg_ai5_widget_pane_g7_ParamLimits

0xe8b4,	// (0x0005060a) bg_ai5_widget_pane_g7

0xe8c0,	// (0x00050616) bg_ai5_widget_pane_g8_ParamLimits

0xe8c0,	// (0x00050616) bg_ai5_widget_pane_g8

0xe8cc,	// (0x00050622) bg_ai5_widget_pane_g9_ParamLimits

0xe8cc,	// (0x00050622) bg_ai5_widget_pane_g9

0x0008,

0xfe64,	// (0x00051bba) bg_ai5_widget_pane_g_ParamLimits

0xfe64,	// (0x00051bba) bg_ai5_widget_pane_g

0xe8f4,	// (0x0005064a) cell_shortcut_ai5_widget_pane_ParamLimits

0xe8f4,	// (0x0005064a) cell_shortcut_ai5_widget_pane

0xd289,	// (0x0004efdf) bg_cell_shortcut_ai5_widget_pane

0xe907,	// (0x0005065d) cell_grid_ai5_widget_pane_g1

0xe910,	// (0x00050666) highlight_cell_shortcut_ai5_widget_pane

0x90c3,	// (0x0004ae19) ai5_sk_left_pane_g1

0xe918,	// (0x0005066e) ai5_sk_left_pane_g2

0xe920,	// (0x00050676) ai5_sk_left_pane_g3

0xe928,	// (0x0005067e) ai5_sk_left_pane_g4

0x0003,

0xfe77,	// (0x00051bcd) ai5_sk_left_pane_g

0xe930,	// (0x00050686) ai5_sk_left_pane_t1

0x90bb,	// (0x0004ae11) ai5_sk_right_pane_g1

0xe93e,	// (0x00050694) ai5_sk_right_pane_g2

0xe946,	// (0x0005069c) ai5_sk_right_pane_g3

0xe94e,	// (0x000506a4) ai5_sk_right_pane_g4

0x0003,

0xfe80,	// (0x00051bd6) ai5_sk_right_pane_g

0xe956,	// (0x000506ac) ai5_sk_right_pane_t1

0x90bb,	// (0x0004ae11) ai5_sk_middle_pane_g1

0x90c3,	// (0x0004ae19) ai5_sk_middle_pane_g2

0x90db,	// (0x0004ae31) ai5_sk_middle_pane_g3

0xe946,	// (0x0005069c) ai5_sk_middle_pane_g4

0xe920,	// (0x00050676) ai5_sk_middle_pane_g5

0xe964,	// (0x000506ba) ai5_sk_middle_pane_g6

0xe96c,	// (0x000506c2) ai5_sk_middle_pane_g7

0x0006,

0xfe89,	// (0x00051bdf) ai5_sk_middle_pane_g

0x8bcd,	// (0x0004a923) aid_touch_area_size_lc0_ParamLimits

0x8bcd,	// (0x0004a923) aid_touch_area_size_lc0

0x7b4a,	// (0x000498a0) cell_hwr_candidate_pane_t1_ParamLimits

0x8beb,	// (0x0004a941) aid_touch_navi_pane

0x8ede,	// (0x0004ac34) status_dt_navi_pane_ParamLimits

0x8ede,	// (0x0004ac34) status_dt_navi_pane

0x8eeb,	// (0x0004ac41) status_dt_sta_pane_ParamLimits

0x8eeb,	// (0x0004ac41) status_dt_sta_pane

0xe974,	// (0x000506ca) dt_sta_controll_pane

0xe981,	// (0x000506d7) dt_sta_indi_pane

0xe992,	// (0x000506e8) dt_sta_title_pane

0xd38e,	// (0x0004f0e4) bg_dt_sta_indi_pane_ParamLimits

0xd38e,	// (0x0004f0e4) bg_dt_sta_indi_pane

0xe9a5,	// (0x000506fb) dt_sta_battery_pane

0xe9ad,	// (0x00050703) dt_sta_indi_pane_g1

0xe9b6,	// (0x0005070c) dt_sta_indi_pane_g2

0xe9bf,	// (0x00050715) dt_sta_indi_pane_g3

0x0002,

0xfe98,	// (0x00051bee) dt_sta_indi_pane_g

0xe9c8,	// (0x0005071e) dt_sta_signal_pane

0x0a47,	// (0x0004279d) bg_dt_sta_title_pane_ParamLimits

0x0a47,	// (0x0004279d) bg_dt_sta_title_pane

0xe9d1,	// (0x00050727) dt_sta_title_pane_g1

0xe9d9,	// (0x0005072f) dt_sta_title_pane_t1_ParamLimits

0xe9d9,	// (0x0005072f) dt_sta_title_pane_t1

0xd1eb,	// (0x0004ef41) bg_dt_sta_control_pane

0xe9ee,	// (0x00050744) dt_sta_controll_pane_g1

0xe9f7,	// (0x0005074d) bg_dt_sta_title_pane_g1

0xea00,	// (0x00050756) bg_dt_sta_title_pane_g2

0xea09,	// (0x0005075f) bg_dt_sta_title_pane_g3

0x0002,

0xfe9f,	// (0x00051bf5) bg_dt_sta_title_pane_g

0xb7c3,	// (0x0004d519) bg_dt_sta_indi_pane_g1

0xea12,	// (0x00050768) dt_sta_signal_pane_g1

0xea1a,	// (0x00050770) dt_sta_signal_pane_g2

0x0001,

0xfea6,	// (0x00051bfc) dt_sta_signal_pane_g

0xea22,	// (0x00050778) dt_sta_battery_pane_g1

0xea2b,	// (0x00050781) dt_sta_battery_pane_t1

0xb7c3,	// (0x0004d519) bg_dt_sta_control_pane_g1

0x40d4,	// (0x00045e2a) fep_china_uni_eep_pane

0x40dc,	// (0x00045e32) fep_china_uni_entry_pane_ParamLimits

0x40ec,	// (0x00045e42) popup_fep_china_uni_window_g1_ParamLimits

0x40fc,	// (0x00045e52) popup_fep_china_uni_window_g2_ParamLimits

0x40fc,	// (0x00045e52) popup_fep_china_uni_window_g2

0x0001,

0xf728,	// (0x0005147e) popup_fep_china_uni_window_g_ParamLimits

0xf728,	// (0x0005147e) popup_fep_china_uni_window_g

0xea3a,	// (0x00050790) fep_china_uni_eep_pane_g1

0xea42,	// (0x00050798) fep_china_uni_eep_pane_t1

0xdfe4,	// (0x0004fd3a) aid_touch_area_size_smil_player

0x8d43,	// (0x0004aa99) lc0_clock_pane

0x8f42,	// (0x0004ac98) status_pane_g5_ParamLimits

0x8f42,	// (0x0004ac98) status_pane_g5

0x6f6c,	// (0x00048cc2) popup_keymap_window

0x8f00,	// (0x0004ac56) status_icon_pane

0xe6ae,	// (0x00050404) cell_ai5_widget_pane_g3_ParamLimits

0xe6cd,	// (0x00050423) cell_ai5_widget_pane_g4_ParamLimits

0xe6d9,	// (0x0005042f) cell_ai5_widget_pane_g5_ParamLimits

0xe6fd,	// (0x00050453) cell_ai5_widget_pane_g8_ParamLimits

0xe6fd,	// (0x00050453) cell_ai5_widget_pane_g8

0xe711,	// (0x00050467) cell_ai5_widget_pane_g9_ParamLimits

0xe711,	// (0x00050467) cell_ai5_widget_pane_g9

0xe725,	// (0x0005047b) cell_ai5_widget_pane_g10_ParamLimits

0xe725,	// (0x0005047b) cell_ai5_widget_pane_g10

0xea51,	// (0x000507a7) status_icon_pane_g1

0xd1eb,	// (0x0004ef41) bg_popup_sub_pane_cp13

0xea59,	// (0x000507af) popup_keymap_window_t1

0x8b0a,	// (0x0004a860) control_pane_g6_ParamLimits

0x8b0a,	// (0x0004a860) control_pane_g6

0x8b17,	// (0x0004a86d) control_pane_g7_ParamLimits

0x8b17,	// (0x0004a86d) control_pane_g7

0x8b24,	// (0x0004a87a) control_pane_g8_ParamLimits

0x8b24,	// (0x0004a87a) control_pane_g8

0xe974,	// (0x000506ca) dt_sta_controll_pane_ParamLimits

0xe981,	// (0x000506d7) dt_sta_indi_pane_ParamLimits

0xe992,	// (0x000506e8) dt_sta_title_pane_ParamLimits

0x0989,	// (0x000426df) aid_size_touch_scroll_bar_cale

0x5f0c,	// (0x00047c62) popup_discreet_window_ParamLimits

0x5f0c,	// (0x00047c62) popup_discreet_window

0x5f9a,	// (0x00047cf0) popup_sk_window

0x978b,	// (0x0004b4e1) bg_popup_sub_pane_cp28_ParamLimits

0x978b,	// (0x0004b4e1) bg_popup_sub_pane_cp28

0xea67,	// (0x000507bd) popup_discreet_window_g1_ParamLimits

0xea67,	// (0x000507bd) popup_discreet_window_g1

0xea87,	// (0x000507dd) popup_discreet_window_t1_ParamLimits

0xea87,	// (0x000507dd) popup_discreet_window_t1

0xeaa5,	// (0x000507fb) popup_discreet_window_t2_ParamLimits

0xeaa5,	// (0x000507fb) popup_discreet_window_t2

0x0002,

0xfeab,	// (0x00051c01) popup_discreet_window_t_ParamLimits

0xfeab,	// (0x00051c01) popup_discreet_window_t

0x85b9,	// (0x0004a30f) popup_sk_window_g1

0x85c3,	// (0x0004a319) popup_sk_window_g2

0x0001,

0xfeb2,	// (0x00051c08) popup_sk_window_g

0x85cd,	// (0x0004a323) popup_sk_window_t1

0x85dd,	// (0x0004a333) popup_sk_window_t1_copy1

0xe69e,	// (0x000503f4) cell_ai5_widget_pane_g2_ParamLimits

0xe7fc,	// (0x00050552) cell_ai5_widget_pane_t9_ParamLimits

0xe7fc,	// (0x00050552) cell_ai5_widget_pane_t9

0xd1eb,	// (0x0004ef41) main_fep_fshwr2_pane

0x85eb,	// (0x0004a341) aid_fshwr2_btn_pane

0x85f7,	// (0x0004a34d) aid_fshwr2_syb_pane

0x8608,	// (0x0004a35e) aid_fshwr2_txt_pane

0x8614,	// (0x0004a36a) fshwr2_func_candi_pane

0x8625,	// (0x0004a37b) fshwr2_hwr_syb_pane

0x8638,	// (0x0004a38e) fshwr2_icf_pane

0xd1eb,	// (0x0004ef41) fshwr2_icf_bg_pane

0xeaf7,	// (0x0005084d) fshwr2_icf_pane_t1_ParamLimits

0xeaf7,	// (0x0005084d) fshwr2_icf_pane_t1

0xb7c3,	// (0x0004d519) fshwr2_func_candi_pane_g1

0xeb0e,	// (0x00050864) fshwr2_func_candi_row_pane_ParamLimits

0xeb0e,	// (0x00050864) fshwr2_func_candi_row_pane

0xeb1f,	// (0x00050875) cell_fshwr2_syb_pane_ParamLimits

0xeb1f,	// (0x00050875) cell_fshwr2_syb_pane

0xba3e,	// (0x0004d794) fshwr2_hwr_syb_pane_g1_ParamLimits

0xba3e,	// (0x0004d794) fshwr2_hwr_syb_pane_g1

0xd1eb,	// (0x0004ef41) bg_popup_call_pane_cp01

0xeb39,	// (0x0005088f) fshwr2_func_candi_cell_pane_ParamLimits

0xeb39,	// (0x0005088f) fshwr2_func_candi_cell_pane

0xeb6b,	// (0x000508c1) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xeb6b,	// (0x000508c1) fshwr2_func_candi_cell_bg_pane

0xeb85,	// (0x000508db) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xeb85,	// (0x000508db) fshwr2_func_candi_cell_pane_g1

0xeba5,	// (0x000508fb) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xeba5,	// (0x000508fb) fshwr2_func_candi_cell_pane_t1

0xd1eb,	// (0x0004ef41) bg_button_pane_cp08

0x883b,	// (0x0004a591) cell_fshwr2_syb_bg_pane

0xebb8,	// (0x0005090e) cell_fshwr2_syb_bg_pane_g1

0xebc0,	// (0x00050916) cell_fshwr2_syb_bg_pane_t1

0x0a47,	// (0x0004279d) main_tmo_pane

0xa2b5,	// (0x0004c00b) uni_indicator_pane_g1_ParamLimits

0xa2ca,	// (0x0004c020) uni_indicator_pane_g2_ParamLimits

0xa2e0,	// (0x0004c036) uni_indicator_pane_g3_ParamLimits

0xa2f6,	// (0x0004c04c) uni_indicator_pane_g4_ParamLimits

0xa2f6,	// (0x0004c04c) uni_indicator_pane_g4

0xa30a,	// (0x0004c060) uni_indicator_pane_g5_ParamLimits

0xa30a,	// (0x0004c060) uni_indicator_pane_g5

0xa31e,	// (0x0004c074) uni_indicator_pane_g6_ParamLimits

0xa31e,	// (0x0004c074) uni_indicator_pane_g6

0xf92c,	// (0x00051682) uni_indicator_pane_g_ParamLimits

0xccb2,	// (0x0004ea08) popup_tmo_note_window_ParamLimits

0xccb2,	// (0x0004ea08) popup_tmo_note_window

0x0a47,	// (0x0004279d) fshwr2_bg_pane

0xeb96,	// (0x000508ec) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xeb96,	// (0x000508ec) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb7,	// (0x00051c0d) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb7,	// (0x00051c0d) fshwr2_func_candi_cell_pane_g

0xb7c3,	// (0x0004d519) bg_popup_window_pane_cp01

0xebcf,	// (0x00050925) bg_popup_window_pane_g1_cp01

0xebd8,	// (0x0005092e) bg_popup_window_pane_cp22_ParamLimits

0xebd8,	// (0x0005092e) bg_popup_window_pane_cp22

0xebe6,	// (0x0005093c) listscroll_tmo_link_pane_ParamLimits

0xebe6,	// (0x0005093c) listscroll_tmo_link_pane

0xec26,	// (0x0005097c) popup_tmo_note_window_g1_ParamLimits

0xec26,	// (0x0005097c) popup_tmo_note_window_g1

0xec33,	// (0x00050989) tmo_note_info_pane_ParamLimits

0xec33,	// (0x00050989) tmo_note_info_pane

0xec4d,	// (0x000509a3) list_tmo_note_info_pane_g1_ParamLimits

0xec4d,	// (0x000509a3) list_tmo_note_info_pane_g1

0xec64,	// (0x000509ba) list_tmo_note_info_pane_g2_ParamLimits

0xec64,	// (0x000509ba) list_tmo_note_info_pane_g2

0x0001,

0xfebc,	// (0x00051c12) list_tmo_note_info_pane_g_ParamLimits

0xfebc,	// (0x00051c12) list_tmo_note_info_pane_g

0xec80,	// (0x000509d6) list_tmo_note_info_text_pane_ParamLimits

0xec80,	// (0x000509d6) list_tmo_note_info_text_pane

0xed05,	// (0x00050a5b) list_tmo_link_pane

0xed12,	// (0x00050a68) scroll_pane_cp20

0xed1f,	// (0x00050a75) list_single_tmo_link_pane_ParamLimits

0xed1f,	// (0x00050a75) list_single_tmo_link_pane

0xed2f,	// (0x00050a85) list_single_tmo_link_pane_t1

0xed3d,	// (0x00050a93) list_tmo_note_info_text_pane_t1_ParamLimits

0xed3d,	// (0x00050a93) list_tmo_note_info_text_pane_t1

0x64c2,	// (0x00048218) aid_size_touch_scroll_bar_cp01_ParamLimits

0x64c2,	// (0x00048218) aid_size_touch_scroll_bar_cp01

0x5502,	// (0x00047258) aid_size_touch_slider_marker

0x5f82,	// (0x00047cd8) popup_settings_window_ParamLimits

0x5f82,	// (0x00047cd8) popup_settings_window

0x567b,	// (0x000473d1) popup_candi_list_indi_window

0x8beb,	// (0x0004a941) aid_touch_navi_pane_ParamLimits

0x7db8,	// (0x00049b0e) rs_clock_indi_pane

0x7dc1,	// (0x00049b17) sctrl_sk_bottom_pane_ParamLimits

0x7dd2,	// (0x00049b28) sctrl_sk_top_pane_ParamLimits

0x7ebb,	// (0x00049c11) popup_fep_tooltip_window

0xe61e,	// (0x00050374) aid_size_cell_widget_grid_ParamLimits

0xe692,	// (0x000503e8) cell_ai5_widget_pane_g1_ParamLimits

0xe692,	// (0x000503e8) cell_ai5_widget_pane_g1

0xe6e5,	// (0x0005043b) cell_ai5_widget_pane_g6_ParamLimits

0xe6f1,	// (0x00050447) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3a,	// (0x00051b90) cell_ai5_widget_pane_g_ParamLimits

0xfe3a,	// (0x00051b90) cell_ai5_widget_pane_g

0xe820,	// (0x00050576) cell_ai5_widget_pane_t10_ParamLimits

0xe820,	// (0x00050576) cell_ai5_widget_pane_t10

0xe836,	// (0x0005058c) grid_ai5_widget_pane_ParamLimits

0xe8d8,	// (0x0005062e) cell_contacts_ai5_widget_pane_ParamLimits

0xe8d8,	// (0x0005062e) cell_contacts_ai5_widget_pane

0xeaba,	// (0x00050810) popup_discreet_window_t3_ParamLimits

0xeaba,	// (0x00050810) popup_discreet_window_t3

0x864d,	// (0x0004a3a3) popup_fshwr2_char_preview_window_ParamLimits

0x864d,	// (0x0004a3a3) popup_fshwr2_char_preview_window

0xec9e,	// (0x000509f4) tmo_note_info_pane_t1

0xecb3,	// (0x00050a09) tmo_note_info_pane_t2

0xeccc,	// (0x00050a22) tmo_note_info_pane_t3

0xece1,	// (0x00050a37) tmo_note_info_pane_t4

0xecf3,	// (0x00050a49) tmo_note_info_pane_t5

0x0004,

0xfec1,	// (0x00051c17) tmo_note_info_pane_t

0xed05,	// (0x00050a5b) list_tmo_link_pane_ParamLimits

0xed12,	// (0x00050a68) scroll_pane_cp20_ParamLimits

0xd1eb,	// (0x0004ef41) bg_popup_fep_char_preview_window_cp01

0xed56,	// (0x00050aac) popup_fshwr2_char_preview_window_t1

0xed64,	// (0x00050aba) popup_candi_list_indi_window_g1

0xed6d,	// (0x00050ac3) bg_cell_contacts_ai5_widget_pane

0xed79,	// (0x00050acf) cell_contacts_ai5_widget_pane_g1

0xed89,	// (0x00050adf) cell_contacts_ai5_widget_pane_g2

0xed95,	// (0x00050aeb) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfecc,	// (0x00051c22) cell_contacts_ai5_widget_pane_g

0xeda1,	// (0x00050af7) cell_contacts_ai5_widget_pane_t1

0x0a47,	// (0x0004279d) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee1b,	// (0x00050b71) settings_container_pane

0x883b,	// (0x0004a591) listscroll_set_pane_copy1

0xae9a,	// (0x0004cbf0) scroll_pane_cp121_copy1

0xee27,	// (0x00050b7d) set_content_pane_copy1

0xee2f,	// (0x00050b85) aid_height_set_list_copy1_ParamLimits

0xee2f,	// (0x00050b85) aid_height_set_list_copy1

0xa51e,	// (0x0004c274) aid_size_parent_copy1_ParamLimits

0xa51e,	// (0x0004c274) aid_size_parent_copy1

0xee3b,	// (0x00050b91) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee3b,	// (0x00050b91) button_value_adjust_pane_cp6_copy1

0x8b87,	// (0x0004a8dd) list_highlight_pane_cp2_copy1_ParamLimits

0x8b87,	// (0x0004a8dd) list_highlight_pane_cp2_copy1

0xee4f,	// (0x00050ba5) list_set_pane_copy1_ParamLimits

0xee4f,	// (0x00050ba5) list_set_pane_copy1

0xedb6,	// (0x00050b0c) main_pane_set_t1_copy1_ParamLimits

0xedb6,	// (0x00050b0c) main_pane_set_t1_copy1

0xedf0,	// (0x00050b46) main_pane_set_t2_copy1_ParamLimits

0xedf0,	// (0x00050b46) main_pane_set_t2_copy1

0xef16,	// (0x00050c6c) main_pane_set_t3_copy1

0xef24,	// (0x00050c7a) main_pane_set_t4_copy1

0xee0f,	// (0x00050b65) set_content_pane_g1_copy1_ParamLimits

0xee0f,	// (0x00050b65) set_content_pane_g1_copy1

0xef32,	// (0x00050c88) setting_code_pane_copy1

0xef3a,	// (0x00050c90) setting_slider_graphic_pane_copy1

0xef3a,	// (0x00050c90) setting_slider_pane_copy1

0xef3a,	// (0x00050c90) setting_text_pane_copy1

0xef3a,	// (0x00050c90) setting_volume_pane_copy1

0xef32,	// (0x00050c88) settings_code_pane_cp2_copy1

0xef42,	// (0x00050c98) settings_code_pane_cp_copy1_ParamLimits

0xef42,	// (0x00050c98) settings_code_pane_cp_copy1

0xef56,	// (0x00050cac) volume_set_pane_copy1

0xef62,	// (0x00050cb8) volume_set_pane_g10_copy1

0xef6e,	// (0x00050cc4) volume_set_pane_g1_copy1

0xef78,	// (0x00050cce) volume_set_pane_g2_copy1

0xef82,	// (0x00050cd8) volume_set_pane_g3_copy1

0xef8c,	// (0x00050ce2) volume_set_pane_g4_copy1

0xef96,	// (0x00050cec) volume_set_pane_g5_copy1

0xefa0,	// (0x00050cf6) volume_set_pane_g6_copy1

0xefaa,	// (0x00050d00) volume_set_pane_g7_copy1

0xefb4,	// (0x00050d0a) volume_set_pane_g8_copy1

0xefbe,	// (0x00050d14) volume_set_pane_g9_copy1

0xd24d,	// (0x0004efa3) bg_set_opt_pane_cp_copy1_ParamLimits

0xd24d,	// (0x0004efa3) bg_set_opt_pane_cp_copy1

0xefc8,	// (0x00050d1e) setting_slider_pane_t1_copy1_ParamLimits

0xefc8,	// (0x00050d1e) setting_slider_pane_t1_copy1

0xefe6,	// (0x00050d3c) setting_slider_pane_t2_copy1_ParamLimits

0xefe6,	// (0x00050d3c) setting_slider_pane_t2_copy1

0xf000,	// (0x00050d56) setting_slider_pane_t3_copy1_ParamLimits

0xf000,	// (0x00050d56) setting_slider_pane_t3_copy1

0xf018,	// (0x00050d6e) slider_set_pane_copy1_ParamLimits

0xf018,	// (0x00050d6e) slider_set_pane_copy1

0x0aae,	// (0x00042804) set_opt_bg_pane_g1_copy2

0x0ab6,	// (0x0004280c) set_opt_bg_pane_g2_copy2

0xf02e,	// (0x00050d84) set_opt_bg_pane_g3_copy2

0x0ac6,	// (0x0004281c) set_opt_bg_pane_g4_copy2

0x0ace,	// (0x00042824) set_opt_bg_pane_g5_copy2

0x0ad6,	// (0x0004282c) set_opt_bg_pane_g6_copy2

0xf038,	// (0x00050d8e) set_opt_bg_pane_g7_copy2

0xf042,	// (0x00050d98) set_opt_bg_pane_g8_copy2

0xf04c,	// (0x00050da2) set_opt_bg_pane_g9_copy2

0xf056,	// (0x00050dac) aid_size_touch_slider_mark_copy1_ParamLimits

0xf056,	// (0x00050dac) aid_size_touch_slider_mark_copy1

0xf06a,	// (0x00050dc0) slider_set_pane_g1_copy1

0xf073,	// (0x00050dc9) slider_set_pane_g2_copy1

0xd4d1,	// (0x0004f227) slider_set_pane_g3_copy1_ParamLimits

0xd4d1,	// (0x0004f227) slider_set_pane_g3_copy1

0xd4e5,	// (0x0004f23b) slider_set_pane_g4_copy1_ParamLimits

0xd4e5,	// (0x0004f23b) slider_set_pane_g4_copy1

0xd4fd,	// (0x0004f253) slider_set_pane_g5_copy1_ParamLimits

0xd4fd,	// (0x0004f253) slider_set_pane_g5_copy1

0xd4d1,	// (0x0004f227) slider_set_pane_g6_copy1_ParamLimits

0xd4d1,	// (0x0004f227) slider_set_pane_g6_copy1

0xf07b,	// (0x00050dd1) slider_set_pane_g7_copy1_ParamLimits

0xf07b,	// (0x00050dd1) slider_set_pane_g7_copy1

0xd1ff,	// (0x0004ef55) bg_set_opt_pane_cp2_copy1

0xf091,	// (0x00050de7) setting_slider_graphic_pane_g1_copy1

0xf09a,	// (0x00050df0) setting_slider_graphic_pane_t1_copy1

0xf0aa,	// (0x00050e00) setting_slider_graphic_pane_t2_copy1

0xf0ba,	// (0x00050e10) slider_set_pane_cp_copy1

0xf0ca,	// (0x00050e20) input_focus_pane_cp1_copy1

0xf0d3,	// (0x00050e29) list_set_text_pane_copy1

0xf0db,	// (0x00050e31) setting_text_pane_g1_copy1

0x4ede,	// (0x00046c34) set_text_pane_t1_copy1

0xf0ca,	// (0x00050e20) input_focus_pane_cp2_copy1

0xf0db,	// (0x00050e31) setting_code_pane_g1_copy1

0xf0e4,	// (0x00050e3a) setting_code_pane_t1_copy1

0xf0f2,	// (0x00050e48) list_set_graphic_pane_copy1

0xd1ff,	// (0x0004ef55) bg_set_opt_pane_cp4_copy1

0x6b36,	// (0x0004888c) list_set_graphic_pane_g1_copy1_ParamLimits

0x6b36,	// (0x0004888c) list_set_graphic_pane_g1_copy1

0xf104,	// (0x00050e5a) list_set_graphic_pane_g2_copy1

0x6b4e,	// (0x000488a4) list_set_graphic_pane_t1_copy1_ParamLimits

0x6b4e,	// (0x000488a4) list_set_graphic_pane_t1_copy1

0xb7c3,	// (0x0004d519) rs_clock_indi_pane_g1

0xf10c,	// (0x00050e62) rs_clock_indi_pane_t1

0xf11a,	// (0x00050e70) rs_indi_pane

0xf122,	// (0x00050e78) rs_indi_pane_g1

0xf12b,	// (0x00050e81) rs_indi_pane_g2

0xf134,	// (0x00050e8a) rs_indi_pane_g3

0x0002,

0xfed3,	// (0x00051c29) rs_indi_pane_g

0x883b,	// (0x0004a591) bg_popup_preview_window_pane_cp03

0xf13d,	// (0x00050e93) popup_fep_tooltip_window_t1

0xc45a,	// (0x0004e1b0) popup_note2_window_g2_ParamLimits

0xc45a,	// (0x0004e1b0) popup_note2_window_g2

0x0001,

0xfc6c,	// (0x000519c2) popup_note2_window_g_ParamLimits

0xfc6c,	// (0x000519c2) popup_note2_window_g

0xc962,	// (0x0004e6b8) bg_popup_sub_pane_cp11_ParamLimits

0xc96f,	// (0x0004e6c5) cell_ai3_links_pane_g1_ParamLimits

0xc986,	// (0x0004e6dc) cell_ai3_links_pane_t1

0x4ede,	// (0x00046c34) set_text_pane_t1_copy1_ParamLimits

0x8748,	// (0x0004a49e) cell_graphic_popup_pane_cp2_ParamLimits

0x8748,	// (0x0004a49e) cell_graphic_popup_pane_cp2

0xf14b,	// (0x00050ea1) cell_graphic_popup_pane_g1_cp2

0x079c,	// (0x000424f2) cell_graphic_popup_pane_g2_cp2

0xf153,	// (0x00050ea9) cell_graphic_popup_pane_g3_cp2

0xf15b,	// (0x00050eb1) cell_graphic_popup_pane_t2_cp2

0x07ad,	// (0x00042503) grid_highlight_pane_cp3_cp2

0x0d57,	// (0x00042aad) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x0a47,	// (0x0004279d) main_tmo_pane_ParamLimits

0xcca6,	// (0x0004e9fc) popup_tmo_big_image_note_window

0xe682,	// (0x000503d8) cell_ai5_widget_list_pane

0xe68a,	// (0x000503e0) cell_ai5_widget_lrg_icon_pane

0xec9e,	// (0x000509f4) tmo_note_info_pane_t1_ParamLimits

0xecb3,	// (0x00050a09) tmo_note_info_pane_t2_ParamLimits

0xeccc,	// (0x00050a22) tmo_note_info_pane_t3_ParamLimits

0xece1,	// (0x00050a37) tmo_note_info_pane_t4_ParamLimits

0xecf3,	// (0x00050a49) tmo_note_info_pane_t5_ParamLimits

0xfec1,	// (0x00051c17) tmo_note_info_pane_t_ParamLimits

0xee1b,	// (0x00050b71) settings_container_pane_ParamLimits

0xf0c2,	// (0x00050e18) indicator_popup_pane_cp5

0xf0c2,	// (0x00050e18) indicator_popup_pane_cp6

0xf0f2,	// (0x00050e48) list_set_graphic_pane_copy1_ParamLimits

0xd1eb,	// (0x0004ef41) bg_popup_window_pane_cp23

0xf169,	// (0x00050ebf) popup_tmo_big_image_note_window_g1

0xf175,	// (0x00050ecb) popup_tmo_big_image_note_window_t1

0xf185,	// (0x00050edb) popup_tmo_big_image_note_window_t2

0xf195,	// (0x00050eeb) popup_tmo_big_image_note_window_t3

0x0002,

0xfeda,	// (0x00051c30) popup_tmo_big_image_note_window_t

0xf1a5,	// (0x00050efb) cell_ai5_widget_lrg_icon_pane_g1

0xf1ad,	// (0x00050f03) cell_ai5_widget_lrg_icon_pane_t1

0xf1bb,	// (0x00050f11) cell_ai5_widget_list_row_pane_ParamLimits

0xf1bb,	// (0x00050f11) cell_ai5_widget_list_row_pane

0xf1d4,	// (0x00050f2a) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf1d4,	// (0x00050f2a) cell_ai5_widget_list_row_pane_g1

0xf1e1,	// (0x00050f37) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf1e1,	// (0x00050f37) cell_ai5_widget_list_row_pane_t1

0xf1f9,	// (0x00050f4f) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf1f9,	// (0x00050f4f) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee1,	// (0x00051c37) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee1,	// (0x00051c37) cell_ai5_widget_list_row_pane_t

0xd1eb,	// (0x0004ef41) main_fep_vtchi_ss_pane

0xf230,	// (0x00050f86) popup_fep_char_pre_window

0xf238,	// (0x00050f8e) popup_fep_ituss_window

0xf259,	// (0x00050faf) popup_fep_vkbss_window

0xf27a,	// (0x00050fd0) grid_vkbss_keypad_pane_ParamLimits

0xf27a,	// (0x00050fd0) grid_vkbss_keypad_pane

0xf28a,	// (0x00050fe0) ituss_keypad_pane

0xf2a6,	// (0x00050ffc) aid_vkbss_key_offset_ParamLimits

0xf2a6,	// (0x00050ffc) aid_vkbss_key_offset

0xf2b2,	// (0x00051008) cell_vkbss_key_pane_ParamLimits

0xf2b2,	// (0x00051008) cell_vkbss_key_pane

0xf2c8,	// (0x0005101e) bg_cell_vkbss_key_g1_ParamLimits

0xf2c8,	// (0x0005101e) bg_cell_vkbss_key_g1

0xf2d4,	// (0x0005102a) cell_vkbss_key_3p_pane_ParamLimits

0xf2d4,	// (0x0005102a) cell_vkbss_key_3p_pane

0xf2ee,	// (0x00051044) cell_vkbss_key_g1_ParamLimits

0xf2ee,	// (0x00051044) cell_vkbss_key_g1

0xf308,	// (0x0005105e) cell_vkbss_key_t1_ParamLimits

0xf308,	// (0x0005105e) cell_vkbss_key_t1

0xf333,	// (0x00051089) cell_ituss_key_pane_ParamLimits

0xf333,	// (0x00051089) cell_ituss_key_pane

0xf344,	// (0x0005109a) bg_cell_ituss_key_g1_ParamLimits

0xf344,	// (0x0005109a) bg_cell_ituss_key_g1

0xf350,	// (0x000510a6) cell_ituss_key_pane_g1_ParamLimits

0xf350,	// (0x000510a6) cell_ituss_key_pane_g1

0xf364,	// (0x000510ba) cell_ituss_key_pane_g2_ParamLimits

0xf364,	// (0x000510ba) cell_ituss_key_pane_g2

0x0001,

0xfee8,	// (0x00051c3e) cell_ituss_key_pane_g_ParamLimits

0xfee8,	// (0x00051c3e) cell_ituss_key_pane_g

0xf38f,	// (0x000510e5) cell_ituss_key_t1_ParamLimits

0xf38f,	// (0x000510e5) cell_ituss_key_t1

0xf3bd,	// (0x00051113) cell_ituss_key_t2_ParamLimits

0xf3bd,	// (0x00051113) cell_ituss_key_t2

0xf3ee,	// (0x00051144) cell_ituss_key_t3_ParamLimits

0xf3ee,	// (0x00051144) cell_ituss_key_t3

0xf41f,	// (0x00051175) cell_ituss_key_t4_ParamLimits

0xf41f,	// (0x00051175) cell_ituss_key_t4

0x0003,

0xfeed,	// (0x00051c43) cell_ituss_key_t_ParamLimits

0xfeed,	// (0x00051c43) cell_ituss_key_t

0xf450,	// (0x000511a6) cell_vkbss_key_3p_pane_g1

0xf458,	// (0x000511ae) cell_vkbss_key_3p_pane_g2

0xf460,	// (0x000511b6) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef6,	// (0x00051c4c) cell_vkbss_key_3p_pane_g

0xd1eb,	// (0x0004ef41) bg_popup_fep_char_preview_window_cp02

0xf468,	// (0x000511be) popup_fep_char_pre_window_t1

0xe614,	// (0x0005036a) main_ai5_sk_pane

0xed6d,	// (0x00050ac3) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed79,	// (0x00050acf) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xed89,	// (0x00050adf) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed95,	// (0x00050aeb) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfecc,	// (0x00051c22) cell_contacts_ai5_widget_pane_g_ParamLimits

0xeda1,	// (0x00050af7) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x0a47,	// (0x0004279d) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf477,	// (0x000511cd) main_ai5_sk_pane_g1

0x95c3,	// (0x0004b319) popup_query_code_window_g1

0xf24e,	// (0x00050fa4) popup_fep_vkb_icf_pane

0xf264,	// (0x00050fba) popup_fep_vtchi_icf_pane

0x0a47,	// (0x0004279d) bg_icf_pane

0xf480,	// (0x000511d6) list_vkb_icf_pane

0x0a47,	// (0x0004279d) bg_icf_pane_cp01

0xf48c,	// (0x000511e2) vtchi_icf_list_pane

0xf49d,	// (0x000511f3) list_vkb_icf_pane_t1_ParamLimits

0xf49d,	// (0x000511f3) list_vkb_icf_pane_t1

0xf4b4,	// (0x0005120a) vtchi_icf_list_pane_t1_ParamLimits

0xf4b4,	// (0x0005120a) vtchi_icf_list_pane_t1

0xf238,	// (0x00050f8e) popup_fep_ituss_window_ParamLimits

0xf264,	// (0x00050fba) popup_fep_vtchi_icf_pane_ParamLimits

0xf28a,	// (0x00050fe0) ituss_keypad_pane_ParamLimits

0xf29a,	// (0x00050ff0) ituss_sks_pane

0x0a47,	// (0x0004279d) bg_icf_pane_ParamLimits

0xf221,	// (0x00050f77) icf_edit_indi_pane_ParamLimits

0xf221,	// (0x00050f77) icf_edit_indi_pane

0xf480,	// (0x000511d6) list_vkb_icf_pane_ParamLimits

0x0a47,	// (0x0004279d) bg_icf_pane_cp01_ParamLimits

0xf221,	// (0x00050f77) icf_edit_indi_pane_cp01_ParamLimits

0xf221,	// (0x00050f77) icf_edit_indi_pane_cp01

0xf494,	// (0x000511ea) vtchi_query_pane

0xba3e,	// (0x0004d794) icf_edit_indi_pane_g1_ParamLimits

0xba3e,	// (0x0004d794) icf_edit_indi_pane_g1

0xf537,	// (0x0005128d) icf_edit_indi_pane_g2_ParamLimits

0xf537,	// (0x0005128d) icf_edit_indi_pane_g2

0x0001,

0xff0e,	// (0x00051c64) icf_edit_indi_pane_g_ParamLimits

0xff0e,	// (0x00051c64) icf_edit_indi_pane_g

0xf546,	// (0x0005129c) icf_edit_indi_pane_t1

0xf4cd,	// (0x00051223) bg_input_focus_pane_cp042

0x0980,	// (0x000426d6) vtchi_button_pane

0xf4d6,	// (0x0005122c) vtchi_query_pane_t1

0xf4e4,	// (0x0005123a) vtchi_query_pane_t2

0xf4f2,	// (0x00051248) vtchi_query_pane_t3

0x0002,

0xfefd,	// (0x00051c53) vtchi_query_pane_t

0xd1eb,	// (0x0004ef41) bg_button_pane_cp13

0xf500,	// (0x00051256) vtchi_button_pane_g1

0xf508,	// (0x0005125e) ituss_sks_pane_g1

0xf513,	// (0x00051269) ituss_sks_pane_g2

0x0001,

0xff04,	// (0x00051c5a) ituss_sks_pane_g

0xf51b,	// (0x00051271) ituss_sks_pane_t1

0xf529,	// (0x0005127f) ituss_sks_pane_t2

0x0001,

0xff09,	// (0x00051c5f) ituss_sks_pane_t

0xb26d,	// (0x0004cfc3) indicator_nsta_pane_cp_g1

0xb276,	// (0x0004cfcc) indicator_nsta_pane_cp_g2

0xb27e,	// (0x0004cfd4) indicator_nsta_pane_cp_g3

0xb286,	// (0x0004cfdc) indicator_nsta_pane_cp_g4

0xb28e,	// (0x0004cfe4) indicator_nsta_pane_cp_g5

0xb296,	// (0x0004cfec) indicator_nsta_pane_cp_g6

0x0005,

0xfab6,	// (0x0005180c) indicator_nsta_pane_cp_g

0xdcde,	// (0x0004fa34) cell_graphic2_pane_t2_ParamLimits

0xdcde,	// (0x0004fa34) cell_graphic2_pane_t2

0x0001,

0xfdc3,	// (0x00051b19) cell_graphic2_pane_t_ParamLimits

0xfdc3,	// (0x00051b19) cell_graphic2_pane_t

0xdd0b,	// (0x0004fa61) cell_graphic2_control_pane_t1

0x68ee,	// (0x00048644) signal_pane_g3_ParamLimits

0x68ee,	// (0x00048644) signal_pane_g3

0x6900,	// (0x00048656) signal_pane_g4_ParamLimits

0x6900,	// (0x00048656) signal_pane_g4

0xf20b,	// (0x00050f61) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf20b,	// (0x00050f61) cell_ai5_widget_list_row_pane_t3

0xf37d,	// (0x000510d3) cell_ituss_key_pane_t1_ParamLimits

0xf37d,	// (0x000510d3) cell_ituss_key_pane_t1

0x9240,	// (0x0004af96) form_field_data_wide_pane_vc_t2_ParamLimits

0x9240,	// (0x0004af96) form_field_data_wide_pane_vc_t2

0x9254,	// (0x0004afaa) form_field_data_wide_pane_vc_t3_ParamLimits

0x9254,	// (0x0004afaa) form_field_data_wide_pane_vc_t3

0x0002,

0xf814,	// (0x0005156a) form_field_data_wide_pane_vc_t_ParamLimits

0xf814,	// (0x0005156a) form_field_data_wide_pane_vc_t

0xaf12,	// (0x0004cc68) form_field_slider_wide_pane_vc_t3_ParamLimits

0xaf12,	// (0x0004cc68) form_field_slider_wide_pane_vc_t3

0xafee,	// (0x0004cd44) form_field_popup_wide_pane_vc_t2_ParamLimits

0xafee,	// (0x0004cd44) form_field_popup_wide_pane_vc_t2

0xb005,	// (0x0004cd5b) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb005,	// (0x0004cd5b) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa5,	// (0x000517fb) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa5,	// (0x000517fb) form_field_popup_wide_pane_vc_t

0x85eb,	// (0x0004a341) aid_fshwr2_btn_pane_ParamLimits

0x85f7,	// (0x0004a34d) aid_fshwr2_syb_pane_ParamLimits

0x8608,	// (0x0004a35e) aid_fshwr2_txt_pane_ParamLimits

0x0a47,	// (0x0004279d) fshwr2_bg_pane_ParamLimits

0x8614,	// (0x0004a36a) fshwr2_func_candi_pane_ParamLimits

0x8625,	// (0x0004a37b) fshwr2_hwr_syb_pane_ParamLimits

0x8638,	// (0x0004a38e) fshwr2_icf_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Large

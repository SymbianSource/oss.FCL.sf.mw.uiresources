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

#include "aknlayoutscalable_elaf_phl_av_qhd_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0003fb96 };

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
0xbc0f,	// (0x0004b7a5) Screen

0xbc1b,	// (0x0004b7b1) application_window_ParamLimits

0xbc1b,	// (0x0004b7b1) application_window

0x31ff,	// (0x00042d95) screen_g1

0xbc53,	// (0x0004b7e9) area_bottom_pane_ParamLimits

0xbc53,	// (0x0004b7e9) area_bottom_pane

0x0ec5,	// (0x00040a5b) area_top_pane_ParamLimits

0x0ec5,	// (0x00040a5b) area_top_pane

0x0f59,	// (0x00040aef) main_pane_ParamLimits

0x0f59,	// (0x00040aef) main_pane

0x3209,	// (0x00042d9f) misc_graphics

0xd57c,	// (0x0004d112) battery_pane_ParamLimits

0xd57c,	// (0x0004d112) battery_pane

0x5874,	// (0x0004540a) bg_status_flat_pane_g8

0x587c,	// (0x00045412) bg_status_flat_pane_g9

0x4c72,	// (0x00044808) context_pane_ParamLimits

0x4c72,	// (0x00044808) context_pane

0xd6e7,	// (0x0004d27d) navi_pane_ParamLimits

0xd6e7,	// (0x0004d27d) navi_pane

0xd75f,	// (0x0004d2f5) signal_pane_ParamLimits

0xd75f,	// (0x0004d2f5) signal_pane

0x0008,

0xf87f,	// (0x0004f415) bg_status_flat_pane_g

0xd7ef,	// (0x0004d385) status_pane_g1_ParamLimits

0xd7ef,	// (0x0004d385) status_pane_g1

0xd805,	// (0x0004d39b) status_pane_g2_ParamLimits

0xd805,	// (0x0004d39b) status_pane_g2

0x4e97,	// (0x00044a2d) status_pane_g3_ParamLimits

0x4e97,	// (0x00044a2d) status_pane_g3

0x0004,

0xf7ab,	// (0x0004f341) status_pane_g_ParamLimits

0xf7ab,	// (0x0004f341) status_pane_g

0xd811,	// (0x0004d3a7) title_pane_ParamLimits

0xd811,	// (0x0004d3a7) title_pane

0xd874,	// (0x0004d40a) uni_indicator_pane_ParamLimits

0xd874,	// (0x0004d40a) uni_indicator_pane

0x4ad8,	// (0x0004466e) bg_list_pane_ParamLimits

0x4ad8,	// (0x0004466e) bg_list_pane

0xd4e3,	// (0x0004d079) find_pane

0xd4eb,	// (0x0004d081) listscroll_app_pane_ParamLimits

0xd4eb,	// (0x0004d081) listscroll_app_pane

0x4b04,	// (0x0004469a) listscroll_form_pane

0xc0ca,	// (0x0004bc60) listscroll_gen_pane_ParamLimits

0xc0ca,	// (0x0004bc60) listscroll_gen_pane

0x4b04,	// (0x0004469a) listscroll_set_pane

0x640b,	// (0x00045fa1) main_idle_act_pane

0x47de,	// (0x00044374) main_idle_trad_pane

0x47de,	// (0x00044374) main_list_empty_pane

0x4b1e,	// (0x000446b4) main_midp_pane

0x4b2a,	// (0x000446c0) main_pane_g1_ParamLimits

0x4b2a,	// (0x000446c0) main_pane_g1

0xc0de,	// (0x0004bc74) popup_ai_message_window_ParamLimits

0xc0de,	// (0x0004bc74) popup_ai_message_window

0xc16f,	// (0x0004bd05) popup_fep_china_uni_window_ParamLimits

0xc16f,	// (0x0004bd05) popup_fep_china_uni_window

0x1a00,	// (0x00041596) popup_fep_japan_candidate_window_ParamLimits

0x1a00,	// (0x00041596) popup_fep_japan_candidate_window

0x1a20,	// (0x000415b6) popup_fep_japan_predictive_window_ParamLimits

0x1a20,	// (0x000415b6) popup_fep_japan_predictive_window

0xc1cb,	// (0x0004bd61) popup_find_window

0xc1e8,	// (0x0004bd7e) popup_grid_graphic_window_ParamLimits

0xc1e8,	// (0x0004bd7e) popup_grid_graphic_window

0x1a85,	// (0x0004161b) popup_large_graphic_colour_window

0xc280,	// (0x0004be16) popup_menu_window_ParamLimits

0xc280,	// (0x0004be16) popup_menu_window

0xc452,	// (0x0004bfe8) popup_note_image_window

0xc418,	// (0x0004bfae) popup_note_wait_window_ParamLimits

0xc418,	// (0x0004bfae) popup_note_wait_window

0xc46a,	// (0x0004c000) popup_note_window_ParamLimits

0xc46a,	// (0x0004c000) popup_note_window

0xc510,	// (0x0004c0a6) popup_query_code_window_ParamLimits

0xc510,	// (0x0004c0a6) popup_query_code_window

0x1ccd,	// (0x00041863) popup_query_data_code_window_ParamLimits

0x1ccd,	// (0x00041863) popup_query_data_code_window

0xc54a,	// (0x0004c0e0) popup_query_data_window_ParamLimits

0xc54a,	// (0x0004c0e0) popup_query_data_window

0xc5cc,	// (0x0004c162) popup_query_sat_info_window_ParamLimits

0xc5cc,	// (0x0004c162) popup_query_sat_info_window

0xc663,	// (0x0004c1f9) popup_snote_single_graphic_window_ParamLimits

0xc663,	// (0x0004c1f9) popup_snote_single_graphic_window

0xc663,	// (0x0004c1f9) popup_snote_single_text_window_ParamLimits

0xc663,	// (0x0004c1f9) popup_snote_single_text_window

0x1d54,	// (0x000418ea) popup_sub_window_general

0x1e84,	// (0x00041a1a) popup_window_general_ParamLimits

0x1e84,	// (0x00041a1a) popup_window_general

0x4b38,	// (0x000446ce) power_save_pane

0xbf59,	// (0x0004baef) control_pane_g1_ParamLimits

0xbf59,	// (0x0004baef) control_pane_g1

0xbf82,	// (0x0004bb18) control_pane_g2_ParamLimits

0xbf82,	// (0x0004bb18) control_pane_g2

0x4a9b,	// (0x00044631) control_pane_g3_ParamLimits

0x4a9b,	// (0x00044631) control_pane_g3

0x0007,

0xf793,	// (0x0004f329) control_pane_g_ParamLimits

0xf793,	// (0x0004f329) control_pane_g

0xbfc3,	// (0x0004bb59) control_pane_t1_ParamLimits

0xbfc3,	// (0x0004bb59) control_pane_t1

0xc021,	// (0x0004bbb7) control_pane_t2_ParamLimits

0xc021,	// (0x0004bbb7) control_pane_t2

0x0002,

0xf7a4,	// (0x0004f33a) control_pane_t_ParamLimits

0xf7a4,	// (0x0004f33a) control_pane_t

0x49bc,	// (0x00044552) navi_navi_volume_pane_cp1

0x49c5,	// (0x0004455b) status_small_icon_pane

0x49cd,	// (0x00044563) status_small_pane_g1_ParamLimits

0x49cd,	// (0x00044563) status_small_pane_g1

0x4a01,	// (0x00044597) status_small_pane_g2_ParamLimits

0x4a01,	// (0x00044597) status_small_pane_g2

0x4a0d,	// (0x000445a3) status_small_pane_g3_ParamLimits

0x4a0d,	// (0x000445a3) status_small_pane_g3

0x4a19,	// (0x000445af) status_small_pane_g4_ParamLimits

0x4a19,	// (0x000445af) status_small_pane_g4

0x4a25,	// (0x000445bb) status_small_pane_g5_ParamLimits

0x4a25,	// (0x000445bb) status_small_pane_g5

0x4a34,	// (0x000445ca) status_small_pane_g6_ParamLimits

0x4a34,	// (0x000445ca) status_small_pane_g6

0x0007,

0xf782,	// (0x0004f318) status_small_pane_g_ParamLimits

0xf782,	// (0x0004f318) status_small_pane_g

0x4a64,	// (0x000445fa) status_small_pane_t1

0x4a87,	// (0x0004461d) status_small_wait_pane_ParamLimits

0x4a87,	// (0x0004461d) status_small_wait_pane

0xd2b8,	// (0x0004ce4e) aid_levels_signal_ParamLimits

0xd2b8,	// (0x0004ce4e) aid_levels_signal

0xd2d0,	// (0x0004ce66) signal_pane_g1_ParamLimits

0xd2d0,	// (0x0004ce66) signal_pane_g1

0xd2eb,	// (0x0004ce81) signal_pane_g2_ParamLimits

0xd2eb,	// (0x0004ce81) signal_pane_g2

0x0003,

0xf713,	// (0x0004f2a9) signal_pane_g_ParamLimits

0xf713,	// (0x0004f2a9) signal_pane_g

0x42bd,	// (0x00043e53) context_pane_g1

0xbdcc,	// (0x0004b962) title_pane_g1

0xbe03,	// (0x0004b999) title_pane_t1

0x32b1,	// (0x00042e47) title_pane_t2

0x32d7,	// (0x00042e6d) title_pane_t3

0x0002,

0xf55d,	// (0x0004f0f3) title_pane_t

0xd89c,	// (0x0004d432) aid_levels_battery_ParamLimits

0xd89c,	// (0x0004d432) aid_levels_battery

0xd8b8,	// (0x0004d44e) battery_pane_g1_ParamLimits

0xd8b8,	// (0x0004d44e) battery_pane_g1

0xd8d5,	// (0x0004d46b) battery_pane_g2_ParamLimits

0xd8d5,	// (0x0004d46b) battery_pane_g2

0x0001,

0xf7b6,	// (0x0004f34c) battery_pane_g_ParamLimits

0xf7b6,	// (0x0004f34c) battery_pane_g

0xdb81,	// (0x0004d717) uni_indicator_pane_g1

0xdb96,	// (0x0004d72c) uni_indicator_pane_g2

0x61d5,	// (0x00045d6b) uni_indicator_pane_g3

0x0005,

0xf927,	// (0x0004f4bd) uni_indicator_pane_g

0x4650,	// (0x000441e6) navi_icon_pane_ParamLimits

0x4650,	// (0x000441e6) navi_icon_pane

0x4599,	// (0x0004412f) navi_midp_pane

0x466c,	// (0x00044202) navi_navi_pane

0x4676,	// (0x0004420c) navi_text_pane_ParamLimits

0x4676,	// (0x0004420c) navi_text_pane

0x31ff,	// (0x00042d95) status_small_wait_pane_g1

0x3706,	// (0x0004329c) status_small_wait_pane_g2

0x0001,

0xf922,	// (0x0004f4b8) status_small_wait_pane_g

0xdae8,	// (0x0004d67e) navi_navi_icon_text_pane

0xdaf0,	// (0x0004d686) navi_navi_pane_g1_ParamLimits

0xdaf0,	// (0x0004d686) navi_navi_pane_g1

0xdb02,	// (0x0004d698) navi_navi_pane_g2_ParamLimits

0xdb02,	// (0x0004d698) navi_navi_pane_g2

0x0001,

0xf8f0,	// (0x0004f486) navi_navi_pane_g_ParamLimits

0xf8f0,	// (0x0004f486) navi_navi_pane_g

0x5efb,	// (0x00045a91) navi_navi_tabs_pane

0xdb14,	// (0x0004d6aa) navi_navi_text_pane

0xdae8,	// (0x0004d67e) navi_navi_volume_pane

0x5eab,	// (0x00045a41) navi_text_pane_t1

0x5e9f,	// (0x00045a35) navi_icon_pane_g1

0x5df2,	// (0x00045988) navi_navi_text_pane_t1

0xc92c,	// (0x0004c4c2) navi_navi_volume_pane_g1

0xc934,	// (0x0004c4ca) volume_small_pane

0xda30,	// (0x0004d5c6) navi_navi_icon_text_pane_g1

0xda38,	// (0x0004d5ce) navi_navi_icon_text_pane_t1

0x466c,	// (0x00044202) navi_tabs_2_long_pane

0x466c,	// (0x00044202) navi_tabs_2_pane

0x466c,	// (0x00044202) navi_tabs_3_long_pane

0x466c,	// (0x00044202) navi_tabs_3_pane

0x466c,	// (0x00044202) navi_tabs_4_pane

0xc90c,	// (0x0004c4a2) tabs_2_active_pane_ParamLimits

0xc90c,	// (0x0004c4a2) tabs_2_active_pane

0xc91c,	// (0x0004c4b2) tabs_2_passive_pane_ParamLimits

0xc91c,	// (0x0004c4b2) tabs_2_passive_pane

0xc8da,	// (0x0004c470) tabs_3_active_pane_ParamLimits

0xc8da,	// (0x0004c470) tabs_3_active_pane

0xc8ea,	// (0x0004c480) tabs_3_passive_pane_ParamLimits

0xc8ea,	// (0x0004c480) tabs_3_passive_pane

0xc8fb,	// (0x0004c491) tabs_3_passive_pane_cp_ParamLimits

0xc8fb,	// (0x0004c491) tabs_3_passive_pane_cp

0xc896,	// (0x0004c42c) tabs_4_active_pane_ParamLimits

0xc896,	// (0x0004c42c) tabs_4_active_pane

0xc8a7,	// (0x0004c43d) tabs_4_passive_pane_ParamLimits

0xc8a7,	// (0x0004c43d) tabs_4_passive_pane

0xc8b8,	// (0x0004c44e) tabs_4_passive_pane_cp_ParamLimits

0xc8b8,	// (0x0004c44e) tabs_4_passive_pane_cp

0xc8c9,	// (0x0004c45f) tabs_4_passive_pane_cp2_ParamLimits

0xc8c9,	// (0x0004c45f) tabs_4_passive_pane_cp2

0xc876,	// (0x0004c40c) tabs_2_long_active_pane_ParamLimits

0xc876,	// (0x0004c40c) tabs_2_long_active_pane

0xc886,	// (0x0004c41c) tabs_2_long_passive_pane_ParamLimits

0xc886,	// (0x0004c41c) tabs_2_long_passive_pane

0xc843,	// (0x0004c3d9) tabs_3_long_active_pane_ParamLimits

0xc843,	// (0x0004c3d9) tabs_3_long_active_pane

0xc854,	// (0x0004c3ea) tabs_3_long_passive_pane_ParamLimits

0xc854,	// (0x0004c3ea) tabs_3_long_passive_pane

0xc865,	// (0x0004c3fb) tabs_3_long_passive_pane_cp_ParamLimits

0xc865,	// (0x0004c3fb) tabs_3_long_passive_pane_cp

0x1fe9,	// (0x00041b7f) volume_small_pane_g1

0xc7f2,	// (0x0004c388) volume_small_pane_g2

0xc7fb,	// (0x0004c391) volume_small_pane_g3

0xc804,	// (0x0004c39a) volume_small_pane_g4

0xc80d,	// (0x0004c3a3) volume_small_pane_g5

0xc816,	// (0x0004c3ac) volume_small_pane_g6

0xc81f,	// (0x0004c3b5) volume_small_pane_g7

0xc828,	// (0x0004c3be) volume_small_pane_g8

0xc831,	// (0x0004c3c7) volume_small_pane_g9

0xc83a,	// (0x0004c3d0) volume_small_pane_g10

0x0009,

0xf8bc,	// (0x0004f452) volume_small_pane_g

0x3564,	// (0x000430fa) bg_active_tab_pane_cp2_ParamLimits

0x3564,	// (0x000430fa) bg_active_tab_pane_cp2

0xbe8f,	// (0x0004ba25) tabs_3_active_pane_g1

0xbe97,	// (0x0004ba2d) tabs_3_active_pane_t1

0x3564,	// (0x000430fa) bg_passive_tab_pane_cp2_ParamLimits

0x3564,	// (0x000430fa) bg_passive_tab_pane_cp2

0xbe8f,	// (0x0004ba25) tabs_3_passive_pane_g1

0xbe97,	// (0x0004ba2d) tabs_3_passive_pane_t1

0x3564,	// (0x000430fa) bg_active_tab_pane_cp3_ParamLimits

0x3564,	// (0x000430fa) bg_active_tab_pane_cp3

0xbea9,	// (0x0004ba3f) tabs_4_active_pane_g1

0xbeb1,	// (0x0004ba47) tabs_4_active_pane_t1

0x3564,	// (0x000430fa) bg_passive_tab_pane_cp3_ParamLimits

0x3564,	// (0x000430fa) bg_passive_tab_pane_cp3

0xbea9,	// (0x0004ba3f) tabs_4_1_passive_pane_g1

0xbeb1,	// (0x0004ba47) tabs_4_1_passive_pane_t1

0x4b1e,	// (0x000446b4) list_highlight_pane_cp2

0xdc1f,	// (0x0004d7b5) list_set_pane_ParamLimits

0xdc1f,	// (0x0004d7b5) list_set_pane

0xdcb9,	// (0x0004d84f) main_pane_set_t1_ParamLimits

0xdcb9,	// (0x0004d84f) main_pane_set_t1

0xdcd9,	// (0x0004d86f) main_pane_set_t2_ParamLimits

0xdcd9,	// (0x0004d86f) main_pane_set_t2

0xdced,	// (0x0004d883) main_pane_set_t3_ParamLimits

0xdced,	// (0x0004d883) main_pane_set_t3

0xdcff,	// (0x0004d895) main_pane_set_t4_ParamLimits

0xdcff,	// (0x0004d895) main_pane_set_t4

0x0003,

0xf98c,	// (0x0004f522) main_pane_set_t_ParamLimits

0xf98c,	// (0x0004f522) main_pane_set_t

0xdd11,	// (0x0004d8a7) setting_code_pane

0xdd1b,	// (0x0004d8b1) setting_slider_graphic_pane

0xdd1b,	// (0x0004d8b1) setting_slider_pane

0xdd1b,	// (0x0004d8b1) setting_text_pane

0xdd1b,	// (0x0004d8b1) setting_volume_pane

0x119e,	// (0x00040d34) volume_set_pane

0x32e9,	// (0x00042e7f) bg_set_opt_pane_cp

0x11a6,	// (0x00040d3c) setting_slider_pane_t1

0x11bf,	// (0x00040d55) setting_slider_pane_t2

0x11d9,	// (0x00040d6f) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0004f0fa) setting_slider_pane_t

0x11f1,	// (0x00040d87) slider_set_pane

0x3209,	// (0x00042d9f) bg_set_opt_pane_cp2

0x332b,	// (0x00042ec1) setting_slider_graphic_pane_g1

0x1207,	// (0x00040d9d) setting_slider_graphic_pane_t1

0x1217,	// (0x00040dad) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0004f101) setting_slider_graphic_pane_t

0x1227,	// (0x00040dbd) slider_set_pane_cp

0x3209,	// (0x00042d9f) input_focus_pane_cp1

0x63f2,	// (0x00045f88) list_set_text_pane

0x31ff,	// (0x00042d95) setting_text_pane_g1

0x3209,	// (0x00042d9f) input_focus_pane_cp2

0x31ff,	// (0x00042d95) setting_code_pane_g1

0x3334,	// (0x00042eca) setting_code_pane_t1

0xf53b,	// (0x0004f0d1) set_text_pane_t1_ParamLimits

0xf53b,	// (0x0004f0d1) set_text_pane_t1

0x3bb0,	// (0x00043746) set_opt_bg_pane_g1

0x3bb8,	// (0x0004374e) set_opt_bg_pane_g2

0x63cc,	// (0x00045f62) set_opt_bg_pane_g3

0x3bc8,	// (0x0004375e) set_opt_bg_pane_g4

0x3bd0,	// (0x00043766) set_opt_bg_pane_g5

0x3bd8,	// (0x0004376e) set_opt_bg_pane_g6

0x63d6,	// (0x00045f6c) set_opt_bg_pane_g7

0x63de,	// (0x00045f74) set_opt_bg_pane_g8

0x63e8,	// (0x00045f7e) set_opt_bg_pane_g9

0x0008,

0xf979,	// (0x0004f50f) set_opt_bg_pane_g

0x63bf,	// (0x00045f55) slider_set_pane_g1

0x21b1,	// (0x00041d47) slider_set_pane_g2

0x0006,

0xf96a,	// (0x0004f500) slider_set_pane_g

0x214d,	// (0x00041ce3) volume_set_pane_g1

0x2155,	// (0x00041ceb) volume_set_pane_g2

0x215d,	// (0x00041cf3) volume_set_pane_g3

0x2165,	// (0x00041cfb) volume_set_pane_g4

0x216d,	// (0x00041d03) volume_set_pane_g5

0x2175,	// (0x00041d0b) volume_set_pane_g6

0x217d,	// (0x00041d13) volume_set_pane_g7

0x2185,	// (0x00041d1b) volume_set_pane_g8

0x218d,	// (0x00041d23) volume_set_pane_g9

0x2195,	// (0x00041d2b) volume_set_pane_g10

0x0009,

0xf942,	// (0x0004f4d8) volume_set_pane_g

0xbec3,	// (0x0004ba59) indicator_pane_ParamLimits

0xbec3,	// (0x0004ba59) indicator_pane

0xcf11,	// (0x0004caa7) main_idle_pane_g2_ParamLimits

0xcf11,	// (0x0004caa7) main_idle_pane_g2

0xcf49,	// (0x0004cadf) main_pane_idle_g1_ParamLimits

0xcf49,	// (0x0004cadf) main_pane_idle_g1

0x3383,	// (0x00042f19) popup_clock_digital_analogue_window_ParamLimits

0x3383,	// (0x00042f19) popup_clock_digital_analogue_window

0xcf70,	// (0x0004cb06) soft_indicator_pane_ParamLimits

0xcf70,	// (0x0004cb06) soft_indicator_pane

0xcf8a,	// (0x0004cb20) wallpaper_pane_ParamLimits

0xcf8a,	// (0x0004cb20) wallpaper_pane

0x31ff,	// (0x00042d95) wallpaper_pane_g1

0xcf9c,	// (0x0004cb32) indicator_pane_g1_ParamLimits

0xcf9c,	// (0x0004cb32) indicator_pane_g1

0x6795,	// (0x0004632b) navi_navi_icon_text_pane_srt_g1

0x33d5,	// (0x00042f6b) soft_indicator_pane_t1

0x33ef,	// (0x00042f85) aid_ps_area_pane

0xcfb2,	// (0x0004cb48) aid_ps_clock_pane

0x340e,	// (0x00042fa4) aid_ps_indicator_pane

0x341a,	// (0x00042fb0) indicator_ps_pane_ParamLimits

0x341a,	// (0x00042fb0) indicator_ps_pane

0x3429,	// (0x00042fbf) power_save_pane_g1_ParamLimits

0x3429,	// (0x00042fbf) power_save_pane_g1

0x3435,	// (0x00042fcb) power_save_pane_g2_ParamLimits

0x3435,	// (0x00042fcb) power_save_pane_g2

0x0db9,	// (0x0004094f) aid_navinavi_width_pane

0x33ef,	// (0x00042f85) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0004f106) power_save_pane_g_ParamLimits

0xf570,	// (0x0004f106) power_save_pane_g

0x3443,	// (0x00042fd9) power_save_pane_t1_ParamLimits

0x3443,	// (0x00042fd9) power_save_pane_t1

0xcfb2,	// (0x0004cb48) aid_ps_clock_pane_ParamLimits

0x340e,	// (0x00042fa4) aid_ps_indicator_pane_ParamLimits

0x3455,	// (0x00042feb) power_save_pane_t4_ParamLimits

0x3455,	// (0x00042feb) power_save_pane_t4

0x0001,

0xf575,	// (0x0004f10b) power_save_pane_t_ParamLimits

0xf575,	// (0x0004f10b) power_save_pane_t

0x347f,	// (0x00043015) power_save_t3_ParamLimits

0x347f,	// (0x00043015) power_save_t3

0x346a,	// (0x00043000) power_save_t2_ParamLimits

0x346a,	// (0x00043000) power_save_t2

0x3494,	// (0x0004302a) indicator_ps_pane_g1

0xcfc0,	// (0x0004cb56) ai_gene_pane_ParamLimits

0xcfc0,	// (0x0004cb56) ai_gene_pane

0xcfd7,	// (0x0004cb6d) ai_links_pane_ParamLimits

0xcfd7,	// (0x0004cb6d) ai_links_pane

0xcfef,	// (0x0004cb85) indicator_pane_cp1_ParamLimits

0xcfef,	// (0x0004cb85) indicator_pane_cp1

0xcffe,	// (0x0004cb94) main_pane_idle_g1_cp_ParamLimits

0xcffe,	// (0x0004cb94) main_pane_idle_g1_cp

0x34cd,	// (0x00043063) popup_ai_links_title_window

0xd016,	// (0x0004cbac) soft_indicator_pane_cp1_ParamLimits

0xd016,	// (0x0004cbac) soft_indicator_pane_cp1

0x6198,	// (0x00045d2e) ai_links_pane_g1

0x61a1,	// (0x00045d37) grid_ai_links_pane

0xdb78,	// (0x0004d70e) ai_gene_pane_1

0x6186,	// (0x00045d1c) ai_gene_pane_2

0x618f,	// (0x00045d25) list_highlight_pane_cp4

0xdb54,	// (0x0004d6ea) cell_ai_link_pane_ParamLimits

0xdb54,	// (0x0004d6ea) cell_ai_link_pane

0x6157,	// (0x00045ced) cell_ai_link_pane_g1

0x3706,	// (0x0004329c) cell_ai_link_pane_g2

0x0001,

0xf91d,	// (0x0004f4b3) cell_ai_link_pane_g

0x3209,	// (0x00042d9f) grid_highlight_cp2

0x3209,	// (0x00042d9f) bg_popup_sub_pane_cp1

0x34f0,	// (0x00043086) popup_ai_links_title_window_t1

0x60a5,	// (0x00045c3b) ai_gene_pane_1_g1_ParamLimits

0x60a5,	// (0x00045c3b) ai_gene_pane_1_g1

0x60b1,	// (0x00045c47) ai_gene_pane_1_g2_ParamLimits

0x60b1,	// (0x00045c47) ai_gene_pane_1_g2

0x0001,

0xf913,	// (0x0004f4a9) ai_gene_pane_1_g_ParamLimits

0xf913,	// (0x0004f4a9) ai_gene_pane_1_g

0x60be,	// (0x00045c54) ai_gene_pane_1_t1_ParamLimits

0x60be,	// (0x00045c54) ai_gene_pane_1_t1

0x60f2,	// (0x00045c88) grid_ai_soft_ind_pane

0x6090,	// (0x00045c26) ai_gene_pane_2_t1_ParamLimits

0x6090,	// (0x00045c26) ai_gene_pane_2_t1

0xd02a,	// (0x0004cbc0) main_pane_empty_t1_ParamLimits

0xd02a,	// (0x0004cbc0) main_pane_empty_t1

0xd042,	// (0x0004cbd8) main_pane_empty_t2_ParamLimits

0xd042,	// (0x0004cbd8) main_pane_empty_t2

0xd057,	// (0x0004cbed) main_pane_empty_t3_ParamLimits

0xd057,	// (0x0004cbed) main_pane_empty_t3

0xd069,	// (0x0004cbff) main_pane_empty_t4_ParamLimits

0xd069,	// (0x0004cbff) main_pane_empty_t4

0xd07b,	// (0x0004cc11) main_pane_empty_t5_ParamLimits

0xd07b,	// (0x0004cc11) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0004f110) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0004f110) main_pane_empty_t

0x3c01,	// (0x00043797) bg_popup_window_pane_ParamLimits

0x3c01,	// (0x00043797) bg_popup_window_pane

0x5e00,	// (0x00045996) find_popup_pane_cp2_ParamLimits

0x5e00,	// (0x00045996) find_popup_pane_cp2

0x5e0c,	// (0x000459a2) heading_pane_ParamLimits

0x5e0c,	// (0x000459a2) heading_pane

0x3209,	// (0x00042d9f) bg_popup_sub_pane

0xda55,	// (0x0004d5eb) bg_popup_window_pane_g1_ParamLimits

0xda55,	// (0x0004d5eb) bg_popup_window_pane_g1

0xda64,	// (0x0004d5fa) bg_popup_window_pane_g2_ParamLimits

0xda64,	// (0x0004d5fa) bg_popup_window_pane_g2

0xda70,	// (0x0004d606) bg_popup_window_pane_g3_ParamLimits

0xda70,	// (0x0004d606) bg_popup_window_pane_g3

0xda7c,	// (0x0004d612) bg_popup_window_pane_g4_ParamLimits

0xda7c,	// (0x0004d612) bg_popup_window_pane_g4

0xda8b,	// (0x0004d621) bg_popup_window_pane_g5_ParamLimits

0xda8b,	// (0x0004d621) bg_popup_window_pane_g5

0xda9b,	// (0x0004d631) bg_popup_window_pane_g6_ParamLimits

0xda9b,	// (0x0004d631) bg_popup_window_pane_g6

0xdaa7,	// (0x0004d63d) bg_popup_window_pane_g7_ParamLimits

0xdaa7,	// (0x0004d63d) bg_popup_window_pane_g7

0xdab6,	// (0x0004d64c) bg_popup_window_pane_g8_ParamLimits

0xdab6,	// (0x0004d64c) bg_popup_window_pane_g8

0xdac5,	// (0x0004d65b) bg_popup_window_pane_g9_ParamLimits

0xdac5,	// (0x0004d65b) bg_popup_window_pane_g9

0x5de6,	// (0x0004597c) bg_popup_window_pane_g10_ParamLimits

0x5de6,	// (0x0004597c) bg_popup_window_pane_g10

0x0009,

0xf8db,	// (0x0004f471) bg_popup_window_pane_g_ParamLimits

0xf8db,	// (0x0004f471) bg_popup_window_pane_g

0x5d0f,	// (0x000458a5) bg_popup_heading_pane_ParamLimits

0x5d0f,	// (0x000458a5) bg_popup_heading_pane

0x228d,	// (0x00041e23) tabs_4_passive_pane_cp_srt_ParamLimits

0x228d,	// (0x00041e23) tabs_4_passive_pane_cp_srt

0x229f,	// (0x00041e35) tabs_4_passive_pane_srt_ParamLimits

0x5d23,	// (0x000458b9) heading_pane_g2

0x229f,	// (0x00041e35) tabs_4_passive_pane_srt

0x5096,	// (0x00044c2c) bg_passive_tab_pane_cp3_srt_ParamLimits

0x5096,	// (0x00044c2c) bg_passive_tab_pane_cp3_srt

0x5d2b,	// (0x000458c1) heading_pane_t1_ParamLimits

0x5d2b,	// (0x000458c1) heading_pane_t1

0x5d42,	// (0x000458d8) heading_pane_t2_ParamLimits

0x5d42,	// (0x000458d8) heading_pane_t2

0x0001,

0xf8d6,	// (0x0004f46c) heading_pane_t_ParamLimits

0xf8d6,	// (0x0004f46c) heading_pane_t

0x583c,	// (0x000453d2) bg_popup_heading_pane_g1

0x58eb,	// (0x00045481) bg_popup_heading_pane_g2

0x58f5,	// (0x0004548b) bg_popup_heading_pane_g3

0x58ff,	// (0x00045495) bg_popup_heading_pane_g4

0x5909,	// (0x0004549f) bg_popup_heading_pane_g5

0x5913,	// (0x000454a9) bg_popup_heading_pane_g6

0x591b,	// (0x000454b1) bg_popup_heading_pane_g7

0x5923,	// (0x000454b9) bg_popup_heading_pane_g8

0x592d,	// (0x000454c3) bg_popup_heading_pane_g9

0x0008,

0xf892,	// (0x0004f428) bg_popup_heading_pane_g

0x5022,	// (0x00044bb8) bg_popup_sub_pane_g1

0x502a,	// (0x00044bc0) bg_popup_sub_pane_g2

0x5032,	// (0x00044bc8) bg_popup_sub_pane_g3

0x503a,	// (0x00044bd0) bg_popup_sub_pane_g4

0x5042,	// (0x00044bd8) bg_popup_sub_pane_g5

0x504a,	// (0x00044be0) bg_popup_sub_pane_g6

0x5052,	// (0x00044be8) bg_popup_sub_pane_g7

0x505a,	// (0x00044bf0) bg_popup_sub_pane_g8

0x5062,	// (0x00044bf8) bg_popup_sub_pane_g9

0x0008,

0xf86c,	// (0x0004f402) bg_popup_sub_pane_g

0x3564,	// (0x000430fa) bg_popup_window_pane_cp5_ParamLimits

0x3564,	// (0x000430fa) bg_popup_window_pane_cp5

0x3580,	// (0x00043116) popup_note_window_g1_ParamLimits

0x3580,	// (0x00043116) popup_note_window_g1

0x358c,	// (0x00043122) popup_note_window_t1_ParamLimits

0x358c,	// (0x00043122) popup_note_window_t1

0x35a2,	// (0x00043138) popup_note_window_t2_ParamLimits

0x35a2,	// (0x00043138) popup_note_window_t2

0x35b8,	// (0x0004314e) popup_note_window_t3_ParamLimits

0x35b8,	// (0x0004314e) popup_note_window_t3

0x35ce,	// (0x00043164) popup_note_window_t4_ParamLimits

0x35ce,	// (0x00043164) popup_note_window_t4

0x35f6,	// (0x0004318c) popup_note_window_t5_ParamLimits

0x35f6,	// (0x0004318c) popup_note_window_t5

0x0004,

0xf585,	// (0x0004f11b) popup_note_window_t_ParamLimits

0xf585,	// (0x0004f11b) popup_note_window_t

0x361a,	// (0x000431b0) bg_popup_window_pane_cp6_ParamLimits

0x361a,	// (0x000431b0) bg_popup_window_pane_cp6

0x57b8,	// (0x0004534e) popup_note_image_window_g1_ParamLimits

0x57b8,	// (0x0004534e) popup_note_image_window_g1

0x57c4,	// (0x0004535a) popup_note_image_window_g2_ParamLimits

0x57c4,	// (0x0004535a) popup_note_image_window_g2

0x0001,

0xf860,	// (0x0004f3f6) popup_note_image_window_g_ParamLimits

0xf860,	// (0x0004f3f6) popup_note_image_window_g

0x57dd,	// (0x00045373) popup_note_image_window_t1_ParamLimits

0x57dd,	// (0x00045373) popup_note_image_window_t1

0x57f6,	// (0x0004538c) popup_note_image_window_t2_ParamLimits

0x57f6,	// (0x0004538c) popup_note_image_window_t2

0x580f,	// (0x000453a5) popup_note_image_window_t3_ParamLimits

0x580f,	// (0x000453a5) popup_note_image_window_t3

0x0002,

0xf865,	// (0x0004f3fb) popup_note_image_window_t_ParamLimits

0xf865,	// (0x0004f3fb) popup_note_image_window_t

0x5679,	// (0x0004520f) bg_popup_window_pane_cp7_ParamLimits

0x5679,	// (0x0004520f) bg_popup_window_pane_cp7

0x56a9,	// (0x0004523f) popup_note_wait_window_g1_ParamLimits

0x56a9,	// (0x0004523f) popup_note_wait_window_g1

0x56b5,	// (0x0004524b) popup_note_wait_window_g2_ParamLimits

0x56b5,	// (0x0004524b) popup_note_wait_window_g2

0x0002,

0xf84e,	// (0x0004f3e4) popup_note_wait_window_g_ParamLimits

0xf84e,	// (0x0004f3e4) popup_note_wait_window_g

0x56cd,	// (0x00045263) popup_note_wait_window_t1_ParamLimits

0x56cd,	// (0x00045263) popup_note_wait_window_t1

0x56f4,	// (0x0004528a) popup_note_wait_window_t2_ParamLimits

0x56f4,	// (0x0004528a) popup_note_wait_window_t2

0x5711,	// (0x000452a7) popup_note_wait_window_t3_ParamLimits

0x5711,	// (0x000452a7) popup_note_wait_window_t3

0x5724,	// (0x000452ba) popup_note_wait_window_t4_ParamLimits

0x5724,	// (0x000452ba) popup_note_wait_window_t4

0x0004,

0xf855,	// (0x0004f3eb) popup_note_wait_window_t_ParamLimits

0xf855,	// (0x0004f3eb) popup_note_wait_window_t

0x5749,	// (0x000452df) wait_bar_pane_ParamLimits

0x5749,	// (0x000452df) wait_bar_pane

0x3209,	// (0x00042d9f) wait_anim_pane

0x3209,	// (0x00042d9f) wait_border_pane

0x31ff,	// (0x00042d95) wait_anim_pane_g1

0x31ff,	// (0x00042d95) wait_anim_pane_g2

0x0001,

0xf70e,	// (0x0004f2a4) wait_anim_pane_g

0x561d,	// (0x000451b3) wait_border_pane_g1

0x5628,	// (0x000451be) wait_border_pane_g2

0x5631,	// (0x000451c7) wait_border_pane_g3

0x0002,

0xf847,	// (0x0004f3dd) wait_border_pane_g

0x5488,	// (0x0004501e) bg_popup_window_pane_cp16_ParamLimits

0x5488,	// (0x0004501e) bg_popup_window_pane_cp16

0x5588,	// (0x0004511e) indicator_popup_pane_cp4_ParamLimits

0x5588,	// (0x0004511e) indicator_popup_pane_cp4

0x559c,	// (0x00045132) popup_query_data_window_t1_ParamLimits

0x559c,	// (0x00045132) popup_query_data_window_t1

0x55ae,	// (0x00045144) popup_query_data_window_t2_ParamLimits

0x55ae,	// (0x00045144) popup_query_data_window_t2

0x55c7,	// (0x0004515d) popup_query_data_window_t3_ParamLimits

0x55c7,	// (0x0004515d) popup_query_data_window_t3

0x0002,

0xf840,	// (0x0004f3d6) popup_query_data_window_t_ParamLimits

0xf840,	// (0x0004f3d6) popup_query_data_window_t

0x55e1,	// (0x00045177) query_popup_data_pane_ParamLimits

0x55e1,	// (0x00045177) query_popup_data_pane

0x55f5,	// (0x0004518b) query_popup_data_pane_cp1_ParamLimits

0x55f5,	// (0x0004518b) query_popup_data_pane_cp1

0x5488,	// (0x0004501e) bg_popup_window_pane_cp10_ParamLimits

0x5488,	// (0x0004501e) bg_popup_window_pane_cp10

0x54ba,	// (0x00045050) indicator_popup_pane_ParamLimits

0x54ba,	// (0x00045050) indicator_popup_pane

0x54dc,	// (0x00045072) popup_query_code_window_t1_ParamLimits

0x54dc,	// (0x00045072) popup_query_code_window_t1

0x54f6,	// (0x0004508c) popup_query_code_window_t2_ParamLimits

0x54f6,	// (0x0004508c) popup_query_code_window_t2

0x553f,	// (0x000450d5) popup_query_code_window_t3_ParamLimits

0x553f,	// (0x000450d5) popup_query_code_window_t3

0x0002,

0xf839,	// (0x0004f3cf) popup_query_code_window_t_ParamLimits

0xf839,	// (0x0004f3cf) popup_query_code_window_t

0x556e,	// (0x00045104) query_popup_pane_ParamLimits

0x556e,	// (0x00045104) query_popup_pane

0x361a,	// (0x000431b0) bg_popup_window_pane_cp15_ParamLimits

0x361a,	// (0x000431b0) bg_popup_window_pane_cp15

0x3638,	// (0x000431ce) indicator_popup_pane_cp1_ParamLimits

0x3638,	// (0x000431ce) indicator_popup_pane_cp1

0x364b,	// (0x000431e1) indicator_popup_pane_cp2_ParamLimits

0x364b,	// (0x000431e1) indicator_popup_pane_cp2

0x365e,	// (0x000431f4) popup_query_data_code_window_g1_ParamLimits

0x365e,	// (0x000431f4) popup_query_data_code_window_g1

0x3671,	// (0x00043207) popup_query_data_code_window_t1_ParamLimits

0x3671,	// (0x00043207) popup_query_data_code_window_t1

0x3683,	// (0x00043219) popup_query_data_code_window_t2_ParamLimits

0x3683,	// (0x00043219) popup_query_data_code_window_t2

0x3695,	// (0x0004322b) popup_query_data_code_window_t3_ParamLimits

0x3695,	// (0x0004322b) popup_query_data_code_window_t3

0x36ab,	// (0x00043241) popup_query_data_code_window_t4_ParamLimits

0x36ab,	// (0x00043241) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0004f126) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0004f126) popup_query_data_code_window_t

0x1efa,	// (0x00041a90) list_single_midp_graphic_pane_g3

0x36c3,	// (0x00043259) query_popup_data_pane_cp2_ParamLimits

0x36d6,	// (0x0004326c) query_popup_pane_cp2_ParamLimits

0x36d6,	// (0x0004326c) query_popup_pane_cp2

0x3209,	// (0x00042d9f) bg_popup_window_pane_cp11

0x5480,	// (0x00045016) heading_pane_cp5

0x37be,	// (0x00043354) listscroll_popup_info_pane

0x3209,	// (0x00042d9f) input_focus_pane_cp3

0x36e9,	// (0x0004327f) query_popup_pane_t1

0x36f7,	// (0x0004328d) list_popup_info_pane_ParamLimits

0x36f7,	// (0x0004328d) list_popup_info_pane

0x3706,	// (0x0004329c) listscroll_popup_info_pane_g1

0x370e,	// (0x000432a4) scroll_pane_cp7

0x3718,	// (0x000432ae) popup_info_list_pane_t1_ParamLimits

0x3718,	// (0x000432ae) popup_info_list_pane_t1

0x3732,	// (0x000432c8) popup_info_list_pane_t2_ParamLimits

0x3732,	// (0x000432c8) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0004f12f) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0004f12f) popup_info_list_pane_t

0x3209,	// (0x00042d9f) bg_popup_window_pane_cp12

0x67af,	// (0x00046345) find_popup_pane

0x32e9,	// (0x00042e7f) bg_popup_window_pane_cp3

0x374c,	// (0x000432e2) heading_pane_cp3

0x3758,	// (0x000432ee) listscroll_popup_graphic_pane

0x3209,	// (0x00042d9f) bg_popup_window_pane_cp4

0xd0dd,	// (0x0004cc73) heading_pane_cp4

0x37be,	// (0x00043354) listscroll_popup_colour_pane

0x37c6,	// (0x0004335c) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x37c6,	// (0x0004335c) cell_large_graphic_colour_none_popup_pane

0xd0e5,	// (0x0004cc7b) grid_large_graphic_colour_popup_pane_ParamLimits

0xd0e5,	// (0x0004cc7b) grid_large_graphic_colour_popup_pane

0x3806,	// (0x0004339c) listscroll_popup_colour_pane_g1_ParamLimits

0x3806,	// (0x0004339c) listscroll_popup_colour_pane_g1

0x381d,	// (0x000433b3) listscroll_popup_colour_pane_g2_ParamLimits

0x381d,	// (0x000433b3) listscroll_popup_colour_pane_g2

0x3834,	// (0x000433ca) listscroll_popup_colour_pane_g3_ParamLimits

0x3834,	// (0x000433ca) listscroll_popup_colour_pane_g3

0xd109,	// (0x0004cc9f) listscroll_popup_colour_pane_g4_ParamLimits

0xd109,	// (0x0004cc9f) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0004f134) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0004f134) listscroll_popup_colour_pane_g

0x3858,	// (0x000433ee) scroll_pane_cp6_ParamLimits

0x3858,	// (0x000433ee) scroll_pane_cp6

0xd119,	// (0x0004ccaf) cell_large_graphic_colour_popup_pane_ParamLimits

0xd119,	// (0x0004ccaf) cell_large_graphic_colour_popup_pane

0x3889,	// (0x0004341f) cell_large_graphic_colour_none_popup_pane_t1

0x3209,	// (0x00042d9f) grid_highlight_pane_cp5

0x3898,	// (0x0004342e) cell_large_graphic_colour_popup_pane_g1

0x38a0,	// (0x00043436) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0004f13d) cell_large_graphic_colour_popup_pane_g

0x38a8,	// (0x0004343e) cell_large_graphic_colour_popup_pane_g2_copy1

0x38b1,	// (0x00043447) grid_highlight_pane_cp4

0x38b9,	// (0x0004344f) bg_popup_window_pane_cp8_ParamLimits

0x38b9,	// (0x0004344f) bg_popup_window_pane_cp8

0x38d4,	// (0x0004346a) popup_snote_single_text_window_g1_ParamLimits

0x38d4,	// (0x0004346a) popup_snote_single_text_window_g1

0x38e6,	// (0x0004347c) popup_snote_single_text_window_t1_ParamLimits

0x38e6,	// (0x0004347c) popup_snote_single_text_window_t1

0x38f9,	// (0x0004348f) popup_snote_single_text_window_t2_ParamLimits

0x38f9,	// (0x0004348f) popup_snote_single_text_window_t2

0x390c,	// (0x000434a2) popup_snote_single_text_window_t3_ParamLimits

0x390c,	// (0x000434a2) popup_snote_single_text_window_t3

0x3945,	// (0x000434db) popup_snote_single_text_window_t4_ParamLimits

0x3945,	// (0x000434db) popup_snote_single_text_window_t4

0x3979,	// (0x0004350f) popup_snote_single_text_window_t5_ParamLimits

0x3979,	// (0x0004350f) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0004f142) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0004f142) popup_snote_single_text_window_t

0x39a8,	// (0x0004353e) bg_popup_window_pane_cp9_ParamLimits

0x39a8,	// (0x0004353e) bg_popup_window_pane_cp9

0x38d4,	// (0x0004346a) popup_snote_single_graphic_window_g1_ParamLimits

0x38d4,	// (0x0004346a) popup_snote_single_graphic_window_g1

0x39b6,	// (0x0004354c) popup_snote_single_graphic_window_g2_ParamLimits

0x39b6,	// (0x0004354c) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0004f14d) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0004f14d) popup_snote_single_graphic_window_g

0x39c2,	// (0x00043558) popup_snote_single_graphic_window_t1_ParamLimits

0x39c2,	// (0x00043558) popup_snote_single_graphic_window_t1

0x39d5,	// (0x0004356b) popup_snote_single_graphic_window_t2_ParamLimits

0x39d5,	// (0x0004356b) popup_snote_single_graphic_window_t2

0x39e8,	// (0x0004357e) popup_snote_single_graphic_window_t3_ParamLimits

0x39e8,	// (0x0004357e) popup_snote_single_graphic_window_t3

0x3a21,	// (0x000435b7) popup_snote_single_graphic_window_t4_ParamLimits

0x3a21,	// (0x000435b7) popup_snote_single_graphic_window_t4

0x3a55,	// (0x000435eb) popup_snote_single_graphic_window_t5_ParamLimits

0x3a55,	// (0x000435eb) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0004f152) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0004f152) popup_snote_single_graphic_window_t

0x66f3,	// (0x00046289) grid_graphic_popup_pane_ParamLimits

0x66f3,	// (0x00046289) grid_graphic_popup_pane

0x671b,	// (0x000462b1) listscroll_popup_graphic_pane_g1_ParamLimits

0x671b,	// (0x000462b1) listscroll_popup_graphic_pane_g1

0xde0c,	// (0x0004d9a2) listscroll_popup_graphic_pane_g2_ParamLimits

0xde0c,	// (0x0004d9a2) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b6,	// (0x0004f54c) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b6,	// (0x0004f54c) listscroll_popup_graphic_pane_g

0x6743,	// (0x000462d9) scroll_pane_cp5

0xddcf,	// (0x0004d965) cell_graphic_popup_pane_ParamLimits

0xddcf,	// (0x0004d965) cell_graphic_popup_pane

0x667d,	// (0x00046213) cell_graphic_popup_pane_g1

0x6685,	// (0x0004621b) cell_graphic_popup_pane_g2

0x38a8,	// (0x0004343e) cell_graphic_popup_pane_g3

0x0002,

0xf9af,	// (0x0004f545) cell_graphic_popup_pane_g

0x668e,	// (0x00046224) cell_graphic_popup_pane_t2

0x38b1,	// (0x00043447) grid_highlight_pane_cp3

0x3a96,	// (0x0004362c) list_gen_pane_ParamLimits

0x3a96,	// (0x0004362c) list_gen_pane

0x3ac8,	// (0x0004365e) scroll_pane

0xdd86,	// (0x0004d91c) bg_list_pane_g1_ParamLimits

0xdd86,	// (0x0004d91c) bg_list_pane_g1

0x65f2,	// (0x00046188) bg_list_pane_g2_ParamLimits

0x65f2,	// (0x00046188) bg_list_pane_g2

0x6607,	// (0x0004619d) bg_list_pane_g3_ParamLimits

0x6607,	// (0x0004619d) bg_list_pane_g3

0x661b,	// (0x000461b1) bg_list_pane_g4_ParamLimits

0x661b,	// (0x000461b1) bg_list_pane_g4

0xdda3,	// (0x0004d939) bg_list_pane_g5_ParamLimits

0xdda3,	// (0x0004d939) bg_list_pane_g5

0x0004,

0xf9a4,	// (0x0004f53a) bg_list_pane_g_ParamLimits

0xf9a4,	// (0x0004f53a) bg_list_pane_g

0xdd4e,	// (0x0004d8e4) list_double2_graphic_large_graphic_pane_ParamLimits

0xdd4e,	// (0x0004d8e4) list_double2_graphic_large_graphic_pane

0xdd4e,	// (0x0004d8e4) list_double2_graphic_pane_ParamLimits

0xdd4e,	// (0x0004d8e4) list_double2_graphic_pane

0xdd4e,	// (0x0004d8e4) list_double2_large_graphic_pane_ParamLimits

0xdd4e,	// (0x0004d8e4) list_double2_large_graphic_pane

0xdd4e,	// (0x0004d8e4) list_double2_pane_ParamLimits

0xdd4e,	// (0x0004d8e4) list_double2_pane

0xdd4e,	// (0x0004d8e4) list_double_graphic_heading_pane_ParamLimits

0xdd4e,	// (0x0004d8e4) list_double_graphic_heading_pane

0xdd4e,	// (0x0004d8e4) list_double_graphic_pane_ParamLimits

0xdd4e,	// (0x0004d8e4) list_double_graphic_pane

0xdd4e,	// (0x0004d8e4) list_double_heading_pane_ParamLimits

0xdd4e,	// (0x0004d8e4) list_double_heading_pane

0xdd4e,	// (0x0004d8e4) list_double_large_graphic_pane_ParamLimits

0xdd4e,	// (0x0004d8e4) list_double_large_graphic_pane

0xdd4e,	// (0x0004d8e4) list_double_number_pane_ParamLimits

0xdd4e,	// (0x0004d8e4) list_double_number_pane

0xdd4e,	// (0x0004d8e4) list_double_pane_ParamLimits

0xdd4e,	// (0x0004d8e4) list_double_pane

0xdd4e,	// (0x0004d8e4) list_double_time_pane_ParamLimits

0xdd4e,	// (0x0004d8e4) list_double_time_pane

0xdd4e,	// (0x0004d8e4) list_setting_number_pane_ParamLimits

0xdd4e,	// (0x0004d8e4) list_setting_number_pane

0xdd4e,	// (0x0004d8e4) list_setting_pane_ParamLimits

0xdd4e,	// (0x0004d8e4) list_setting_pane

0xdd60,	// (0x0004d8f6) list_single_2graphic_pane_ParamLimits

0xdd60,	// (0x0004d8f6) list_single_2graphic_pane

0xdd60,	// (0x0004d8f6) list_single_graphic_heading_pane_ParamLimits

0xdd60,	// (0x0004d8f6) list_single_graphic_heading_pane

0xdd60,	// (0x0004d8f6) list_single_graphic_pane_ParamLimits

0xdd60,	// (0x0004d8f6) list_single_graphic_pane

0xdd60,	// (0x0004d8f6) list_single_heading_pane_ParamLimits

0xdd60,	// (0x0004d8f6) list_single_heading_pane

0xdd4e,	// (0x0004d8e4) list_single_large_graphic_pane_ParamLimits

0xdd4e,	// (0x0004d8e4) list_single_large_graphic_pane

0xdd60,	// (0x0004d8f6) list_single_number_heading_pane_ParamLimits

0xdd60,	// (0x0004d8f6) list_single_number_heading_pane

0xdd60,	// (0x0004d8f6) list_single_number_pane_ParamLimits

0xdd60,	// (0x0004d8f6) list_single_number_pane

0xdd60,	// (0x0004d8f6) list_single_pane_ParamLimits

0xdd60,	// (0x0004d8f6) list_single_pane

0x3209,	// (0x00042d9f) list_highlight_pane_cp1

0x4717,	// (0x000442ad) list_single_pane_g1_ParamLimits

0x4717,	// (0x000442ad) list_single_pane_g1

0x1ec9,	// (0x00041a5f) list_single_pane_g2_ParamLimits

0x1ec9,	// (0x00041a5f) list_single_pane_g2

0x0001,

0xf5d8,	// (0x0004f16e) list_single_pane_g_ParamLimits

0xf5d8,	// (0x0004f16e) list_single_pane_g

0x08f8,	// (0x0004048e) list_single_pane_t1_ParamLimits

0x08f8,	// (0x0004048e) list_single_pane_t1

0x4717,	// (0x000442ad) list_single_number_pane_g1_ParamLimits

0x4717,	// (0x000442ad) list_single_number_pane_g1

0x1ec9,	// (0x00041a5f) list_single_number_pane_g2_ParamLimits

0x1ec9,	// (0x00041a5f) list_single_number_pane_g2

0x0001,

0xf5d8,	// (0x0004f16e) list_single_number_pane_g_ParamLimits

0xf5d8,	// (0x0004f16e) list_single_number_pane_g

0x06b2,	// (0x00040248) list_single_number_pane_t1_ParamLimits

0x06b2,	// (0x00040248) list_single_number_pane_t1

0xba75,	// (0x0004b60b) list_single_number_pane_t2_ParamLimits

0xba75,	// (0x0004b60b) list_single_number_pane_t2

0x0001,

0xf965,	// (0x0004f4fb) list_single_number_pane_t_ParamLimits

0xf965,	// (0x0004f4fb) list_single_number_pane_t

0xb40e,	// (0x0004afa4) list_single_graphic_pane_g1_ParamLimits

0xb40e,	// (0x0004afa4) list_single_graphic_pane_g1

0x4717,	// (0x000442ad) list_single_graphic_pane_g2_ParamLimits

0x4717,	// (0x000442ad) list_single_graphic_pane_g2

0x1ec9,	// (0x00041a5f) list_single_graphic_pane_g3_ParamLimits

0x1ec9,	// (0x00041a5f) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0004f15d) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0004f15d) list_single_graphic_pane_g

0xb41a,	// (0x0004afb0) list_single_graphic_pane_t1_ParamLimits

0xb41a,	// (0x0004afb0) list_single_graphic_pane_t1

0xb430,	// (0x0004afc6) list_single_heading_pane_g1_ParamLimits

0xb430,	// (0x0004afc6) list_single_heading_pane_g1

0x1ec9,	// (0x00041a5f) list_single_heading_pane_g2_ParamLimits

0x1ec9,	// (0x00041a5f) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0004f164) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0004f164) list_single_heading_pane_g

0xb443,	// (0x0004afd9) list_single_heading_pane_t1_ParamLimits

0xb443,	// (0x0004afd9) list_single_heading_pane_t1

0xbeeb,	// (0x0004ba81) list_single_heading_pane_t2_ParamLimits

0xbeeb,	// (0x0004ba81) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0004f169) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0004f169) list_single_heading_pane_t

0x4717,	// (0x000442ad) list_single_number_heading_pane_g1_ParamLimits

0x4717,	// (0x000442ad) list_single_number_heading_pane_g1

0x1ec9,	// (0x00041a5f) list_single_number_heading_pane_g2_ParamLimits

0x1ec9,	// (0x00041a5f) list_single_number_heading_pane_g2

0x0001,

0xf5d8,	// (0x0004f16e) list_single_number_heading_pane_g_ParamLimits

0xf5d8,	// (0x0004f16e) list_single_number_heading_pane_g

0xb459,	// (0x0004afef) list_single_number_heading_pane_t1_ParamLimits

0xb459,	// (0x0004afef) list_single_number_heading_pane_t1

0xb46f,	// (0x0004b005) list_single_number_heading_pane_t2_ParamLimits

0xb46f,	// (0x0004b005) list_single_number_heading_pane_t2

0x08d2,	// (0x00040468) list_single_number_heading_pane_t3_ParamLimits

0x08d2,	// (0x00040468) list_single_number_heading_pane_t3

0x0002,

0xf5dd,	// (0x0004f173) list_single_number_heading_pane_t_ParamLimits

0xf5dd,	// (0x0004f173) list_single_number_heading_pane_t

0xb481,	// (0x0004b017) list_single_graphic_heading_pane_g1_ParamLimits

0xb481,	// (0x0004b017) list_single_graphic_heading_pane_g1

0xbefd,	// (0x0004ba93) list_single_graphic_heading_pane_g4_ParamLimits

0xbefd,	// (0x0004ba93) list_single_graphic_heading_pane_g4

0x1ec9,	// (0x00041a5f) list_single_graphic_heading_pane_g5_ParamLimits

0x1ec9,	// (0x00041a5f) list_single_graphic_heading_pane_g5

0x0002,

0xf5e4,	// (0x0004f17a) list_single_graphic_heading_pane_g_ParamLimits

0xf5e4,	// (0x0004f17a) list_single_graphic_heading_pane_g

0xb459,	// (0x0004afef) list_single_graphic_heading_pane_t1_ParamLimits

0xb459,	// (0x0004afef) list_single_graphic_heading_pane_t1

0xb499,	// (0x0004b02f) list_single_graphic_heading_pane_t2_ParamLimits

0xb499,	// (0x0004b02f) list_single_graphic_heading_pane_t2

0x0001,

0xf5eb,	// (0x0004f181) list_single_graphic_heading_pane_t_ParamLimits

0xf5eb,	// (0x0004f181) list_single_graphic_heading_pane_t

0x090e,	// (0x000404a4) list_single_large_graphic_pane_g1_ParamLimits

0x090e,	// (0x000404a4) list_single_large_graphic_pane_g1

0x091a,	// (0x000404b0) list_single_large_graphic_pane_g2_ParamLimits

0x091a,	// (0x000404b0) list_single_large_graphic_pane_g2

0x0926,	// (0x000404bc) list_single_large_graphic_pane_g3_ParamLimits

0x0926,	// (0x000404bc) list_single_large_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0004f186) list_single_large_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0004f186) list_single_large_graphic_pane_g

0x5628,	// (0x000451be) wait_border_pane_g2_copy1

0xb4af,	// (0x0004b045) list_single_large_graphic_pane_g4_cp2

0x0932,	// (0x000404c8) list_single_large_graphic_pane_t1_ParamLimits

0x0932,	// (0x000404c8) list_single_large_graphic_pane_t1

0x4602,	// (0x00044198) list_double_pane_g1_ParamLimits

0x4602,	// (0x00044198) list_double_pane_g1

0xbf0e,	// (0x0004baa4) list_double_pane_g2_ParamLimits

0xbf0e,	// (0x0004baa4) list_double_pane_g2

0x0001,

0xf5f7,	// (0x0004f18d) list_double_pane_g_ParamLimits

0xf5f7,	// (0x0004f18d) list_double_pane_g

0xb4b7,	// (0x0004b04d) list_double_pane_t1_ParamLimits

0xb4b7,	// (0x0004b04d) list_double_pane_t1

0xb4cd,	// (0x0004b063) list_double_pane_t2_ParamLimits

0xb4cd,	// (0x0004b063) list_double_pane_t2

0x0001,

0xf5fc,	// (0x0004f192) list_double_pane_t_ParamLimits

0xf5fc,	// (0x0004f192) list_double_pane_t

0xb4df,	// (0x0004b075) list_double2_pane_g1_ParamLimits

0xb4df,	// (0x0004b075) list_double2_pane_g1

0xb4f0,	// (0x0004b086) list_double2_pane_g2_ParamLimits

0xb4f0,	// (0x0004b086) list_double2_pane_g2

0x0001,

0xf601,	// (0x0004f197) list_double2_pane_g_ParamLimits

0xf601,	// (0x0004f197) list_double2_pane_g

0xb4fc,	// (0x0004b092) list_double2_pane_t1_ParamLimits

0xb4fc,	// (0x0004b092) list_double2_pane_t1

0xb512,	// (0x0004b0a8) list_double2_pane_t2_ParamLimits

0xb512,	// (0x0004b0a8) list_double2_pane_t2

0x0001,

0xf606,	// (0x0004f19c) list_double2_pane_t_ParamLimits

0xf606,	// (0x0004f19c) list_double2_pane_t

0x4602,	// (0x00044198) list_double_number_pane_g1_ParamLimits

0x4602,	// (0x00044198) list_double_number_pane_g1

0xbf0e,	// (0x0004baa4) list_double_number_pane_g2_ParamLimits

0xbf0e,	// (0x0004baa4) list_double_number_pane_g2

0x0001,

0xf5f7,	// (0x0004f18d) list_double_number_pane_g_ParamLimits

0xf5f7,	// (0x0004f18d) list_double_number_pane_g

0xb524,	// (0x0004b0ba) list_double_number_pane_t1_ParamLimits

0xb524,	// (0x0004b0ba) list_double_number_pane_t1

0xb536,	// (0x0004b0cc) list_double_number_pane_t2_ParamLimits

0xb536,	// (0x0004b0cc) list_double_number_pane_t2

0xb54c,	// (0x0004b0e2) list_double_number_pane_t3_ParamLimits

0xb54c,	// (0x0004b0e2) list_double_number_pane_t3

0x0002,

0xf60b,	// (0x0004f1a1) list_double_number_pane_t_ParamLimits

0xf60b,	// (0x0004f1a1) list_double_number_pane_t

0xb55e,	// (0x0004b0f4) list_double_graphic_pane_g1_ParamLimits

0xb55e,	// (0x0004b0f4) list_double_graphic_pane_g1

0xb56a,	// (0x0004b100) list_double_graphic_pane_g2_ParamLimits

0xb56a,	// (0x0004b100) list_double_graphic_pane_g2

0xb579,	// (0x0004b10f) list_double_graphic_pane_g3_ParamLimits

0xb579,	// (0x0004b10f) list_double_graphic_pane_g3

0x0003,

0xf612,	// (0x0004f1a8) list_double_graphic_pane_g_ParamLimits

0xf612,	// (0x0004f1a8) list_double_graphic_pane_g

0xb585,	// (0x0004b11b) list_double_graphic_pane_t1_ParamLimits

0xb585,	// (0x0004b11b) list_double_graphic_pane_t1

0xb59b,	// (0x0004b131) list_double_graphic_pane_t2_ParamLimits

0xb59b,	// (0x0004b131) list_double_graphic_pane_t2

0x0001,

0xf61b,	// (0x0004f1b1) list_double_graphic_pane_t_ParamLimits

0xf61b,	// (0x0004f1b1) list_double_graphic_pane_t

0xb5ad,	// (0x0004b143) list_double2_graphic_pane_g1_ParamLimits

0xb5ad,	// (0x0004b143) list_double2_graphic_pane_g1

0xb5b9,	// (0x0004b14f) list_double2_graphic_pane_g2_ParamLimits

0xb5b9,	// (0x0004b14f) list_double2_graphic_pane_g2

0xbf26,	// (0x0004babc) list_double2_graphic_pane_g3_ParamLimits

0xbf26,	// (0x0004babc) list_double2_graphic_pane_g3

0x0002,

0xf620,	// (0x0004f1b6) list_double2_graphic_pane_g_ParamLimits

0xf620,	// (0x0004f1b6) list_double2_graphic_pane_g

0xb5c5,	// (0x0004b15b) list_double2_graphic_pane_t1_ParamLimits

0xb5c5,	// (0x0004b15b) list_double2_graphic_pane_t1

0xb5db,	// (0x0004b171) list_double2_graphic_pane_t2_ParamLimits

0xb5db,	// (0x0004b171) list_double2_graphic_pane_t2

0x0001,

0xf627,	// (0x0004f1bd) list_double2_graphic_pane_t_ParamLimits

0xf627,	// (0x0004f1bd) list_double2_graphic_pane_t

0xb5ed,	// (0x0004b183) list_double_large_graphic_pane_g1_ParamLimits

0xb5ed,	// (0x0004b183) list_double_large_graphic_pane_g1

0xb618,	// (0x0004b1ae) list_double_large_graphic_pane_g2_ParamLimits

0xb618,	// (0x0004b1ae) list_double_large_graphic_pane_g2

0xbf0e,	// (0x0004baa4) list_double_large_graphic_pane_g3_ParamLimits

0xbf0e,	// (0x0004baa4) list_double_large_graphic_pane_g3

0xb62e,	// (0x0004b1c4) list_double_large_graphic_pane_g4_ParamLimits

0xb62e,	// (0x0004b1c4) list_double_large_graphic_pane_g4

0x0004,

0xf62c,	// (0x0004f1c2) list_double_large_graphic_pane_g_ParamLimits

0xf62c,	// (0x0004f1c2) list_double_large_graphic_pane_g

0xb640,	// (0x0004b1d6) list_double_large_graphic_pane_t1_ParamLimits

0xb640,	// (0x0004b1d6) list_double_large_graphic_pane_t1

0xb659,	// (0x0004b1ef) list_double_large_graphic_pane_t2_ParamLimits

0xb659,	// (0x0004b1ef) list_double_large_graphic_pane_t2

0x0001,

0xf637,	// (0x0004f1cd) list_double_large_graphic_pane_t_ParamLimits

0xf637,	// (0x0004f1cd) list_double_large_graphic_pane_t

0xbf32,	// (0x0004bac8) list_double2_large_graphic_pane_g1_ParamLimits

0xbf32,	// (0x0004bac8) list_double2_large_graphic_pane_g1

0xb66b,	// (0x0004b201) list_double2_large_graphic_pane_g2_ParamLimits

0xb66b,	// (0x0004b201) list_double2_large_graphic_pane_g2

0xbf26,	// (0x0004babc) list_double2_large_graphic_pane_g3_ParamLimits

0xbf26,	// (0x0004babc) list_double2_large_graphic_pane_g3

0x0002,

0xf63c,	// (0x0004f1d2) list_double2_large_graphic_pane_g_ParamLimits

0xf63c,	// (0x0004f1d2) list_double2_large_graphic_pane_g

0xb67c,	// (0x0004b212) list_double2_large_graphic_pane_t1_ParamLimits

0xb67c,	// (0x0004b212) list_double2_large_graphic_pane_t1

0xb692,	// (0x0004b228) list_double2_large_graphic_pane_t2_ParamLimits

0xb692,	// (0x0004b228) list_double2_large_graphic_pane_t2

0x0001,

0xf643,	// (0x0004f1d9) list_double2_large_graphic_pane_t_ParamLimits

0xf643,	// (0x0004f1d9) list_double2_large_graphic_pane_t

0xb6a4,	// (0x0004b23a) list_double_heading_pane_g1_ParamLimits

0xb6a4,	// (0x0004b23a) list_double_heading_pane_g1

0xb6b5,	// (0x0004b24b) list_double_heading_pane_g2_ParamLimits

0xb6b5,	// (0x0004b24b) list_double_heading_pane_g2

0x0001,

0xf648,	// (0x0004f1de) list_double_heading_pane_g_ParamLimits

0xf648,	// (0x0004f1de) list_double_heading_pane_g

0xb6c1,	// (0x0004b257) list_double_heading_pane_t1_ParamLimits

0xb6c1,	// (0x0004b257) list_double_heading_pane_t1

0xb512,	// (0x0004b0a8) list_double_heading_pane_t2_ParamLimits

0xb512,	// (0x0004b0a8) list_double_heading_pane_t2

0x0001,

0xf64d,	// (0x0004f1e3) list_double_heading_pane_t_ParamLimits

0xf64d,	// (0x0004f1e3) list_double_heading_pane_t

0xb6d7,	// (0x0004b26d) list_double_graphic_heading_pane_g1_ParamLimits

0xb6d7,	// (0x0004b26d) list_double_graphic_heading_pane_g1

0xb6a4,	// (0x0004b23a) list_double_graphic_heading_pane_g2_ParamLimits

0xb6a4,	// (0x0004b23a) list_double_graphic_heading_pane_g2

0xb6b5,	// (0x0004b24b) list_double_graphic_heading_pane_g3_ParamLimits

0xb6b5,	// (0x0004b24b) list_double_graphic_heading_pane_g3

0x0002,

0xf652,	// (0x0004f1e8) list_double_graphic_heading_pane_g_ParamLimits

0xf652,	// (0x0004f1e8) list_double_graphic_heading_pane_g

0xb6e3,	// (0x0004b279) list_double_graphic_heading_pane_t1_ParamLimits

0xb6e3,	// (0x0004b279) list_double_graphic_heading_pane_t1

0xb5db,	// (0x0004b171) list_double_graphic_heading_pane_t2_ParamLimits

0xb5db,	// (0x0004b171) list_double_graphic_heading_pane_t2

0x0001,

0xf659,	// (0x0004f1ef) list_double_graphic_heading_pane_t_ParamLimits

0xf659,	// (0x0004f1ef) list_double_graphic_heading_pane_t

0xb6f9,	// (0x0004b28f) list_double_time_pane_g1_ParamLimits

0xb6f9,	// (0x0004b28f) list_double_time_pane_g1

0xb70a,	// (0x0004b2a0) list_double_time_pane_g2_ParamLimits

0xb70a,	// (0x0004b2a0) list_double_time_pane_g2

0x0001,

0xf65e,	// (0x0004f1f4) list_double_time_pane_g_ParamLimits

0xf65e,	// (0x0004f1f4) list_double_time_pane_g

0xb716,	// (0x0004b2ac) list_double_time_pane_t1_ParamLimits

0xb716,	// (0x0004b2ac) list_double_time_pane_t1

0xb72c,	// (0x0004b2c2) list_double_time_pane_t2_ParamLimits

0xb72c,	// (0x0004b2c2) list_double_time_pane_t2

0xb73e,	// (0x0004b2d4) list_double_time_pane_t3_ParamLimits

0xb73e,	// (0x0004b2d4) list_double_time_pane_t3

0xb750,	// (0x0004b2e6) list_double_time_pane_t4_ParamLimits

0xb750,	// (0x0004b2e6) list_double_time_pane_t4

0x0003,

0xf663,	// (0x0004f1f9) list_double_time_pane_t_ParamLimits

0xf663,	// (0x0004f1f9) list_double_time_pane_t

0xb762,	// (0x0004b2f8) list_setting_pane_g1_ParamLimits

0xb762,	// (0x0004b2f8) list_setting_pane_g1

0xb4f0,	// (0x0004b086) list_setting_pane_g2_ParamLimits

0xb4f0,	// (0x0004b086) list_setting_pane_g2

0x0001,

0xf66c,	// (0x0004f202) list_setting_pane_g_ParamLimits

0xf66c,	// (0x0004f202) list_setting_pane_g

0xb76e,	// (0x0004b304) list_setting_pane_t1_ParamLimits

0xb76e,	// (0x0004b304) list_setting_pane_t1

0xb788,	// (0x0004b31e) list_setting_pane_t2_ParamLimits

0xb788,	// (0x0004b31e) list_setting_pane_t2

0x0002,

0xf671,	// (0x0004f207) list_setting_pane_t_ParamLimits

0xf671,	// (0x0004f207) list_setting_pane_t

0xb7c7,	// (0x0004b35d) set_value_pane_cp_ParamLimits

0xb7c7,	// (0x0004b35d) set_value_pane_cp

0xb7d3,	// (0x0004b369) list_setting_number_pane_g1_ParamLimits

0xb7d3,	// (0x0004b369) list_setting_number_pane_g1

0xb7df,	// (0x0004b375) list_setting_number_pane_g2_ParamLimits

0xb7df,	// (0x0004b375) list_setting_number_pane_g2

0x0001,

0xf678,	// (0x0004f20e) list_setting_number_pane_g_ParamLimits

0xf678,	// (0x0004f20e) list_setting_number_pane_g

0xb7eb,	// (0x0004b381) list_setting_number_pane_t1_ParamLimits

0xb7eb,	// (0x0004b381) list_setting_number_pane_t1

0xb804,	// (0x0004b39a) list_setting_number_pane_t2_ParamLimits

0xb804,	// (0x0004b39a) list_setting_number_pane_t2

0xb81e,	// (0x0004b3b4) list_setting_number_pane_t3_ParamLimits

0xb81e,	// (0x0004b3b4) list_setting_number_pane_t3

0x0003,

0xf67d,	// (0x0004f213) list_setting_number_pane_t_ParamLimits

0xf67d,	// (0x0004f213) list_setting_number_pane_t

0xb7c7,	// (0x0004b35d) set_value_pane_ParamLimits

0xb7c7,	// (0x0004b35d) set_value_pane

0x3b08,	// (0x0004369e) bg_set_opt_pane_ParamLimits

0x3b08,	// (0x0004369e) bg_set_opt_pane

0x0343,	// (0x0003fed9) set_value_pane_t1

0x3b29,	// (0x000436bf) slider_set_pane_cp3

0x3b32,	// (0x000436c8) volume_small_pane_cp

0x3b3b,	// (0x000436d1) list_form_gen_pane

0x3b44,	// (0x000436da) scroll_pane_cp8

0xb861,	// (0x0004b3f7) form_field_data_pane_ParamLimits

0xb861,	// (0x0004b3f7) form_field_data_pane

0xb878,	// (0x0004b40e) form_field_data_wide_pane_ParamLimits

0xb878,	// (0x0004b40e) form_field_data_wide_pane

0xb898,	// (0x0004b42e) form_field_popup_pane_ParamLimits

0xb898,	// (0x0004b42e) form_field_popup_pane

0xb8b0,	// (0x0004b446) form_field_popup_wide_pane_ParamLimits

0xb8b0,	// (0x0004b446) form_field_popup_wide_pane

0x03df,	// (0x0003ff75) form_field_slider_pane_ParamLimits

0x03df,	// (0x0003ff75) form_field_slider_pane

0x03f2,	// (0x0003ff88) form_field_slider_wide_pane_ParamLimits

0x03f2,	// (0x0003ff88) form_field_slider_wide_pane

0x3b55,	// (0x000436eb) data_form_pane

0xb8d1,	// (0x0004b467) form_field_data_pane_t1

0x3b61,	// (0x000436f7) input_focus_pane

0x0427,	// (0x0003ffbd) data_form_wide_pane

0x0444,	// (0x0003ffda) form_field_data_wide_pane_t1

0x38c6,	// (0x0004345c) input_focus_pane_cp6

0xb8eb,	// (0x0004b481) form_field_popup_pane_t1

0x3b61,	// (0x000436f7) input_focus_pane_cp7

0x3b83,	// (0x00043719) list_form_pane

0x0486,	// (0x0004001c) form_field_popup_wide_pane_t1

0x3b61,	// (0x000436f7) input_focus_pane_cp8

0x3b8f,	// (0x00043725) list_form_wide_pane

0xb90d,	// (0x0004b4a3) form_field_slider_pane_t1_ParamLimits

0xb90d,	// (0x0004b4a3) form_field_slider_pane_t1

0xb925,	// (0x0004b4bb) form_field_slider_pane_t2_ParamLimits

0xb925,	// (0x0004b4bb) form_field_slider_pane_t2

0x0001,

0xf68d,	// (0x0004f223) form_field_slider_pane_t_ParamLimits

0xf68d,	// (0x0004f223) form_field_slider_pane_t

0x3564,	// (0x000430fa) input_focus_pane_cp9_ParamLimits

0x3564,	// (0x000430fa) input_focus_pane_cp9

0xb93a,	// (0x0004b4d0) slider_cont_pane_ParamLimits

0xb93a,	// (0x0004b4d0) slider_cont_pane

0x3b9e,	// (0x00043734) form_field_slider_wide_pane_t1_ParamLimits

0x3b9e,	// (0x00043734) form_field_slider_wide_pane_t1

0x04e2,	// (0x00040078) form_field_slider_wide_pane_t2_ParamLimits

0x04e2,	// (0x00040078) form_field_slider_wide_pane_t2

0x0001,

0xf692,	// (0x0004f228) form_field_slider_wide_pane_t_ParamLimits

0xf692,	// (0x0004f228) form_field_slider_wide_pane_t

0x3564,	// (0x000430fa) input_focus_pane_cp10_ParamLimits

0x3564,	// (0x000430fa) input_focus_pane_cp10

0xb94e,	// (0x0004b4e4) slider_cont_pane_cp1_ParamLimits

0xb94e,	// (0x0004b4e4) slider_cont_pane_cp1

0xb962,	// (0x0004b4f8) slider_form_pane_cp

0x3bb0,	// (0x00043746) input_focus_pane_g1

0x3bb8,	// (0x0004374e) input_focus_pane_g2

0x3bc0,	// (0x00043756) input_focus_pane_g3

0x3bc8,	// (0x0004375e) input_focus_pane_g4

0x3bd0,	// (0x00043766) input_focus_pane_g5

0x3bd8,	// (0x0004376e) input_focus_pane_g6

0x3be0,	// (0x00043776) input_focus_pane_g7

0x3be8,	// (0x0004377e) input_focus_pane_g8

0x3bf0,	// (0x00043786) input_focus_pane_g9

0x31ff,	// (0x00042d95) input_focus_pane_g10

0x0009,

0xf697,	// (0x0004f22d) input_focus_pane_g

0x5631,	// (0x000451c7) wait_border_pane_g3_copy1

0xb96a,	// (0x0004b500) data_form_pane_t1

0x31ff,	// (0x00042d95) wait_anim_pane_g1_copy1

0xba87,	// (0x0004b61d) data_form_wide_pane_t1

0xb983,	// (0x0004b519) list_form_graphic_pane_cp_ParamLimits

0xb983,	// (0x0004b519) list_form_graphic_pane_cp

0x6567,	// (0x000460fd) slider_form_pane_g1

0x6570,	// (0x00046106) slider_form_pane_g2

0x0006,

0xf995,	// (0x0004f52b) slider_form_pane_g

0xb994,	// (0x0004b52a) list_form_graphic_pane_ParamLimits

0xb994,	// (0x0004b52a) list_form_graphic_pane

0x0560,	// (0x000400f6) list_form_graphic_pane_g1

0x0568,	// (0x000400fe) list_form_graphic_pane_t1_ParamLimits

0x0568,	// (0x000400fe) list_form_graphic_pane_t1

0x32e9,	// (0x00042e7f) list_highlight_pane_cp5_ParamLimits

0x32e9,	// (0x00042e7f) list_highlight_pane_cp5

0xb9a6,	// (0x0004b53c) find_pane_g1

0x3bf8,	// (0x0004378e) input_find_pane

0xb9af,	// (0x0004b545) input_find_pane_g1_ParamLimits

0xb9af,	// (0x0004b545) input_find_pane_g1

0xb9bb,	// (0x0004b551) input_find_pane_t1_ParamLimits

0xb9bb,	// (0x0004b551) input_find_pane_t1

0xb9d0,	// (0x0004b566) input_find_pane_t2_ParamLimits

0xb9d0,	// (0x0004b566) input_find_pane_t2

0x0001,

0xf6ac,	// (0x0004f242) input_find_pane_t_ParamLimits

0xf6ac,	// (0x0004f242) input_find_pane_t

0x3c01,	// (0x00043797) input_focus_pane_cp5_ParamLimits

0x3c01,	// (0x00043797) input_focus_pane_cp5

0x3c1b,	// (0x000437b1) bg_popup_window_pane_cp2_ParamLimits

0x3c1b,	// (0x000437b1) bg_popup_window_pane_cp2

0x3c28,	// (0x000437be) listscroll_menu_pane_ParamLimits

0x3c28,	// (0x000437be) listscroll_menu_pane

0xd14e,	// (0x0004cce4) popup_submenu_window_ParamLimits

0xd14e,	// (0x0004cce4) popup_submenu_window

0x3c60,	// (0x000437f6) find_popup_pane_g1

0x3c68,	// (0x000437fe) input_popup_find_pane_cp

0x3c01,	// (0x00043797) input_focus_pane_cp4_ParamLimits

0x3c01,	// (0x00043797) input_focus_pane_cp4

0x3c7e,	// (0x00043814) input_popup_find_pane_t1_ParamLimits

0x3c7e,	// (0x00043814) input_popup_find_pane_t1

0x3209,	// (0x00042d9f) bg_popup_sub_pane_cp

0x3cac,	// (0x00043842) listscroll_popup_sub_pane

0x3cb4,	// (0x0004384a) list_submenu_pane_ParamLimits

0x3cb4,	// (0x0004384a) list_submenu_pane

0x3cc5,	// (0x0004385b) scroll_pane_cp4

0x3ccd,	// (0x00043863) list_single_popup_submenu_pane_ParamLimits

0x3ccd,	// (0x00043863) list_single_popup_submenu_pane

0x3ce1,	// (0x00043877) list_single_popup_submenu_pane_g1

0x3ce9,	// (0x0004387f) list_single_popup_submenu_pane_t1_ParamLimits

0x3ce9,	// (0x0004387f) list_single_popup_submenu_pane_t1

0x3564,	// (0x000430fa) bg_active_tab_pane_cp1_ParamLimits

0x3564,	// (0x000430fa) bg_active_tab_pane_cp1

0xd188,	// (0x0004cd1e) tabs_2_active_pane_g1

0xd190,	// (0x0004cd26) tabs_2_active_pane_t1

0x3564,	// (0x000430fa) bg_passive_tab_pane_cp1_ParamLimits

0x3564,	// (0x000430fa) bg_passive_tab_pane_cp1

0xd188,	// (0x0004cd1e) tabs_2_passive_pane_g1

0xd190,	// (0x0004cd26) tabs_2_passive_pane_t1

0x32e9,	// (0x00042e7f) bg_active_tab_pane_cp4

0xd1a2,	// (0x0004cd38) tabs_2_long_active_pane_t1

0x4b1e,	// (0x000446b4) bg_passive_tab_pane_cp4

0x1588,	// (0x0004111e) list_single_midp_graphic_pane_g4_ParamLimits

0x32e9,	// (0x00042e7f) bg_active_tab_pane_cp5

0xd1b5,	// (0x0004cd4b) tabs_3_long_active_pane_t1

0x4b1e,	// (0x000446b4) bg_passive_tab_pane_cp5

0x1588,	// (0x0004111e) list_single_midp_graphic_pane_g4

0x32e9,	// (0x00042e7f) bg_popup_window_pane_cp13_ParamLimits

0x32e9,	// (0x00042e7f) bg_popup_window_pane_cp13

0x3d60,	// (0x000438f6) listscroll_popup_fast_pane_ParamLimits

0x3d60,	// (0x000438f6) listscroll_popup_fast_pane

0x3d6f,	// (0x00043905) grid_popup_fast_pane_ParamLimits

0x3d6f,	// (0x00043905) grid_popup_fast_pane

0x3d81,	// (0x00043917) scroll_pane_cp9_ParamLimits

0x3d81,	// (0x00043917) scroll_pane_cp9

0x7e6a,	// (0x00047a00) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7e6a,	// (0x00047a00) list_single_graphic_hl_pane_t1_cp2

0x3da5,	// (0x0004393b) input_focus_pane_cp20_ParamLimits

0x3da5,	// (0x0004393b) input_focus_pane_cp20

0x3db3,	// (0x00043949) query_popup_data_pane_t1_ParamLimits

0x3db3,	// (0x00043949) query_popup_data_pane_t1

0x3dc6,	// (0x0004395c) query_popup_data_pane_t2_ParamLimits

0x3dc6,	// (0x0004395c) query_popup_data_pane_t2

0x3e0c,	// (0x000439a2) query_popup_data_pane_t3_ParamLimits

0x3e0c,	// (0x000439a2) query_popup_data_pane_t3

0x3e4d,	// (0x000439e3) query_popup_data_pane_t4_ParamLimits

0x3e4d,	// (0x000439e3) query_popup_data_pane_t4

0x3e89,	// (0x00043a1f) query_popup_data_pane_t5_ParamLimits

0x3e89,	// (0x00043a1f) query_popup_data_pane_t5

0x0004,

0xf6b1,	// (0x0004f247) query_popup_data_pane_t_ParamLimits

0xf6b1,	// (0x0004f247) query_popup_data_pane_t

0x3bb0,	// (0x00043746) bg_set_opt_pane_g1

0x3bb8,	// (0x0004374e) bg_set_opt_pane_g2

0x3bc0,	// (0x00043756) bg_set_opt_pane_g3

0x3bc8,	// (0x0004375e) bg_set_opt_pane_g4

0x3bd0,	// (0x00043766) bg_set_opt_pane_g5

0x3bd8,	// (0x0004376e) bg_set_opt_pane_g6

0x3be0,	// (0x00043776) bg_set_opt_pane_g7

0x3be8,	// (0x0004377e) bg_set_opt_pane_g8

0x3bf0,	// (0x00043786) bg_set_opt_pane_g9

0x0008,

0xf6bc,	// (0x0004f252) bg_set_opt_pane_g

0x1594,	// (0x0004112a) control_top_pane_stacon_ParamLimits

0x1594,	// (0x0004112a) control_top_pane_stacon

0x15e7,	// (0x0004117d) signal_pane_stacon_ParamLimits

0x15e7,	// (0x0004117d) signal_pane_stacon

0x4477,	// (0x0004400d) stacon_top_pane_g1_ParamLimits

0x4477,	// (0x0004400d) stacon_top_pane_g1

0x160c,	// (0x000411a2) title_pane_stacon_ParamLimits

0x160c,	// (0x000411a2) title_pane_stacon

0x1636,	// (0x000411cc) uni_indicator_pane_stacon_ParamLimits

0x1636,	// (0x000411cc) uni_indicator_pane_stacon

0x164b,	// (0x000411e1) battery_pane_stacon_ParamLimits

0x164b,	// (0x000411e1) battery_pane_stacon

0x168f,	// (0x00041225) control_bottom_pane_stacon_ParamLimits

0x168f,	// (0x00041225) control_bottom_pane_stacon

0x16b2,	// (0x00041248) navi_pane_stacon_ParamLimits

0x16b2,	// (0x00041248) navi_pane_stacon

0x4499,	// (0x0004402f) stacon_bottom_pane_g1_ParamLimits

0x4499,	// (0x0004402f) stacon_bottom_pane_g1

0x12db,	// (0x00040e71) aid_levels_signal_lsc_ParamLimits

0x12db,	// (0x00040e71) aid_levels_signal_lsc

0x12f1,	// (0x00040e87) signal_pane_stacon_g1_ParamLimits

0x12f1,	// (0x00040e87) signal_pane_stacon_g1

0x1305,	// (0x00040e9b) signal_pane_stacon_g2_ParamLimits

0x1305,	// (0x00040e9b) signal_pane_stacon_g2

0x0001,

0xf6cf,	// (0x0004f265) signal_pane_stacon_g_ParamLimits

0xf6cf,	// (0x0004f265) signal_pane_stacon_g

0x133a,	// (0x00040ed0) title_pane_stacon_t1_ParamLimits

0x133a,	// (0x00040ed0) title_pane_stacon_t1

0x3ecd,	// (0x00043a63) uni_indicator_pane_stacon_g1

0x3ed7,	// (0x00043a6d) uni_indicator_pane_stacon_g2

0x3ee1,	// (0x00043a77) uni_indicator_pane_stacon_g3

0x3eeb,	// (0x00043a81) uni_indicator_pane_stacon_g4

0x0003,

0xf6db,	// (0x0004f271) uni_indicator_pane_stacon_g

0x135f,	// (0x00040ef5) control_top_pane_stacon_g1

0x1367,	// (0x00040efd) control_top_pane_stacon_t1_ParamLimits

0x1367,	// (0x00040efd) control_top_pane_stacon_t1

0x139e,	// (0x00040f34) aid_levels_battery_lsc_ParamLimits

0x139e,	// (0x00040f34) aid_levels_battery_lsc

0x13b5,	// (0x00040f4b) battery_pane_stacon_g1_ParamLimits

0x13b5,	// (0x00040f4b) battery_pane_stacon_g1

0x13c8,	// (0x00040f5e) battery_pane_stacon_g2_ParamLimits

0x13c8,	// (0x00040f5e) battery_pane_stacon_g2

0x0001,

0xf6e4,	// (0x0004f27a) battery_pane_stacon_g_ParamLimits

0xf6e4,	// (0x0004f27a) battery_pane_stacon_g

0x1406,	// (0x00040f9c) navi_icon_pane_stacon

0x141a,	// (0x00040fb0) navi_navi_pane_stacon

0x1406,	// (0x00040f9c) navi_text_pane_stacon

0x135f,	// (0x00040ef5) control_bottom_pane_stacon_g1

0x142e,	// (0x00040fc4) control_bottom_pane_stacon_t1_ParamLimits

0x142e,	// (0x00040fc4) control_bottom_pane_stacon_t1

0xd1c7,	// (0x0004cd5d) grid_app_pane_ParamLimits

0xd1c7,	// (0x0004cd5d) grid_app_pane

0xd1ff,	// (0x0004cd95) scroll_pane_cp15_ParamLimits

0xd1ff,	// (0x0004cd95) scroll_pane_cp15

0xd218,	// (0x0004cdae) cell_app_pane_ParamLimits

0xd218,	// (0x0004cdae) cell_app_pane

0xd25d,	// (0x0004cdf3) cell_app_pane_g1_ParamLimits

0xd25d,	// (0x0004cdf3) cell_app_pane_g1

0x3f8c,	// (0x00043b22) cell_app_pane_g2_ParamLimits

0x3f8c,	// (0x00043b22) cell_app_pane_g2

0x0001,

0xf6e9,	// (0x0004f27f) cell_app_pane_g_ParamLimits

0xf6e9,	// (0x0004f27f) cell_app_pane_g

0xd27d,	// (0x0004ce13) cell_app_pane_t1_ParamLimits

0xd27d,	// (0x0004ce13) cell_app_pane_t1

0x3faf,	// (0x00043b45) grid_highlight_pane_ParamLimits

0x3faf,	// (0x00043b45) grid_highlight_pane

0x3bb0,	// (0x00043746) cell_highlight_pane_g1

0x3bb8,	// (0x0004374e) cell_highlight_pane_g2

0x3bc0,	// (0x00043756) cell_highlight_pane_g3

0x3bc8,	// (0x0004375e) cell_highlight_pane_g4

0x3bd0,	// (0x00043766) cell_highlight_pane_g5

0x3bd8,	// (0x0004376e) cell_highlight_pane_g6

0x3be0,	// (0x00043776) cell_highlight_pane_g7

0x3be8,	// (0x0004377e) cell_highlight_pane_g8

0x3bf0,	// (0x00043786) cell_highlight_pane_g9

0x31ff,	// (0x00042d95) cell_highlight_pane_g10

0x0009,

0xf697,	// (0x0004f22d) cell_highlight_pane_g

0x3fc0,	// (0x00043b56) bg_scroll_pane

0x1478,	// (0x0004100e) scroll_handle_pane

0x4007,	// (0x00043b9d) scroll_bg_pane_g1

0x401c,	// (0x00043bb2) scroll_bg_pane_g2

0x4034,	// (0x00043bca) scroll_bg_pane_g3

0x0002,

0xf6ee,	// (0x0004f284) scroll_bg_pane_g

0x4049,	// (0x00043bdf) scroll_handle_focus_pane_ParamLimits

0x4049,	// (0x00043bdf) scroll_handle_focus_pane

0x4007,	// (0x00043b9d) scroll_handle_pane_g1

0x4056,	// (0x00043bec) scroll_handle_pane_g2

0x4034,	// (0x00043bca) scroll_handle_pane_g3

0x0002,

0xf6f5,	// (0x0004f28b) scroll_handle_pane_g

0x3c01,	// (0x00043797) bg_popup_sub_pane_cp21_ParamLimits

0x3c01,	// (0x00043797) bg_popup_sub_pane_cp21

0x406a,	// (0x00043c00) popup_fep_japan_predictive_window_t1_ParamLimits

0x406a,	// (0x00043c00) popup_fep_japan_predictive_window_t1

0x4084,	// (0x00043c1a) popup_fep_japan_predictive_window_t2_ParamLimits

0x4084,	// (0x00043c1a) popup_fep_japan_predictive_window_t2

0x40b7,	// (0x00043c4d) popup_fep_japan_predictive_window_t3_ParamLimits

0x40b7,	// (0x00043c4d) popup_fep_japan_predictive_window_t3

0x0002,

0xf6fc,	// (0x0004f292) popup_fep_japan_predictive_window_t_ParamLimits

0xf6fc,	// (0x0004f292) popup_fep_japan_predictive_window_t

0x3209,	// (0x00042d9f) bg_popup_sub_pane_cp23

0x40ee,	// (0x00043c84) listscroll_japin_cand_pane

0x40f6,	// (0x00043c8c) popup_fep_japan_candidate_window_t1

0x4104,	// (0x00043c9a) candidate_pane_ParamLimits

0x4104,	// (0x00043c9a) candidate_pane

0x4116,	// (0x00043cac) scroll_pane_cp30

0x411e,	// (0x00043cb4) list_single_popup_jap_candidate_pane_ParamLimits

0x411e,	// (0x00043cb4) list_single_popup_jap_candidate_pane

0x3209,	// (0x00042d9f) list_highlight_pane_cp30

0x4133,	// (0x00043cc9) list_single_popup_jap_candidate_pane_t1

0x4142,	// (0x00043cd8) level_1_signal

0x4154,	// (0x00043cea) level_2_signal

0x4167,	// (0x00043cfd) level_3_signal

0x417a,	// (0x00043d10) level_4_signal

0x418d,	// (0x00043d23) level_5_signal

0x41a0,	// (0x00043d36) level_6_signal

0x41b3,	// (0x00043d49) level_7_signal

0x4142,	// (0x00043cd8) level_1_battery

0x4154,	// (0x00043cea) level_2_battery

0x4167,	// (0x00043cfd) level_3_battery

0x417a,	// (0x00043d10) level_4_battery

0x418d,	// (0x00043d23) level_5_battery

0x41a0,	// (0x00043d36) level_6_battery

0x41b3,	// (0x00043d49) level_7_battery

0x41de,	// (0x00043d74) list_menu_pane_ParamLimits

0x41de,	// (0x00043d74) list_menu_pane

0x41f4,	// (0x00043d8a) scroll_pane_cp25_ParamLimits

0x41f4,	// (0x00043d8a) scroll_pane_cp25

0x420d,	// (0x00043da3) list_double2_graphic_pane_cp2_ParamLimits

0x420d,	// (0x00043da3) list_double2_graphic_pane_cp2

0x420d,	// (0x00043da3) list_double2_large_graphic_pane_cp2_ParamLimits

0x420d,	// (0x00043da3) list_double2_large_graphic_pane_cp2

0x420d,	// (0x00043da3) list_double2_pane_cp2_ParamLimits

0x420d,	// (0x00043da3) list_double2_pane_cp2

0x420d,	// (0x00043da3) list_double_graphic_pane_cp2_ParamLimits

0x420d,	// (0x00043da3) list_double_graphic_pane_cp2

0x420d,	// (0x00043da3) list_double_large_graphic_pane_cp2_ParamLimits

0x420d,	// (0x00043da3) list_double_large_graphic_pane_cp2

0x420d,	// (0x00043da3) list_double_number_pane_cp2_ParamLimits

0x420d,	// (0x00043da3) list_double_number_pane_cp2

0x420d,	// (0x00043da3) list_double_pane_cp2_ParamLimits

0x420d,	// (0x00043da3) list_double_pane_cp2

0xd2a5,	// (0x0004ce3b) list_single_2graphic_pane_cp2_ParamLimits

0xd2a5,	// (0x0004ce3b) list_single_2graphic_pane_cp2

0xd2a5,	// (0x0004ce3b) list_single_graphic_heading_pane_cp2_ParamLimits

0xd2a5,	// (0x0004ce3b) list_single_graphic_heading_pane_cp2

0xd2a5,	// (0x0004ce3b) list_single_graphic_pane_cp2_ParamLimits

0xd2a5,	// (0x0004ce3b) list_single_graphic_pane_cp2

0xd2a5,	// (0x0004ce3b) list_single_heading_pane_cp2_ParamLimits

0xd2a5,	// (0x0004ce3b) list_single_heading_pane_cp2

0x424a,	// (0x00043de0) list_single_large_graphic_pane_cp2_ParamLimits

0x424a,	// (0x00043de0) list_single_large_graphic_pane_cp2

0xd2a5,	// (0x0004ce3b) list_single_number_heading_pane_cp2_ParamLimits

0xd2a5,	// (0x0004ce3b) list_single_number_heading_pane_cp2

0xd2a5,	// (0x0004ce3b) list_single_number_pane_cp2_ParamLimits

0xd2a5,	// (0x0004ce3b) list_single_number_pane_cp2

0xd2a5,	// (0x0004ce3b) list_single_pane_cp2_ParamLimits

0xd2a5,	// (0x0004ce3b) list_single_pane_cp2

0x42c6,	// (0x00043e5c) bg_popup_sub_pane_cp22

0x152a,	// (0x000410c0) popup_side_volume_key_window_g1

0x1554,	// (0x000410ea) popup_side_volume_key_window_t1

0x1570,	// (0x00041106) volume_small_pane_cp1

0x3564,	// (0x000430fa) bg_popup_sub_pane_cp24_ParamLimits

0x3564,	// (0x000430fa) bg_popup_sub_pane_cp24

0x42dc,	// (0x00043e72) fep_china_uni_candidate_pane_ParamLimits

0x42dc,	// (0x00043e72) fep_china_uni_candidate_pane

0x42f0,	// (0x00043e86) fep_china_uni_entry_pane

0x4300,	// (0x00043e96) popup_fep_china_uni_window_g1

0x431c,	// (0x00043eb2) fep_china_uni_entry_pane_g1

0x4324,	// (0x00043eba) fep_china_uni_entry_pane_g2

0x0001,

0xf72d,	// (0x0004f2c3) fep_china_uni_entry_pane_g

0x432c,	// (0x00043ec2) fep_entry_item_pane

0x4336,	// (0x00043ecc) fep_candidate_item_pane

0x433e,	// (0x00043ed4) fep_china_uni_candidate_pane_g1

0x4346,	// (0x00043edc) fep_china_uni_candidate_pane_g2

0x434e,	// (0x00043ee4) fep_china_uni_candidate_pane_g3

0x4356,	// (0x00043eec) fep_china_uni_candidate_pane_g4

0x0003,

0xf732,	// (0x0004f2c8) fep_china_uni_candidate_pane_g

0x31ff,	// (0x00042d95) fep_entry_item_pane_g1

0x435e,	// (0x00043ef4) fep_entry_item_pane_t1_ParamLimits

0x435e,	// (0x00043ef4) fep_entry_item_pane_t1

0x4374,	// (0x00043f0a) fep_candidate_item_pane_t1_ParamLimits

0x4374,	// (0x00043f0a) fep_candidate_item_pane_t1

0x4389,	// (0x00043f1f) fep_candidate_item_pane_t2_ParamLimits

0x4389,	// (0x00043f1f) fep_candidate_item_pane_t2

0x0001,

0xf73b,	// (0x0004f2d1) fep_candidate_item_pane_t_ParamLimits

0xf73b,	// (0x0004f2d1) fep_candidate_item_pane_t

0x32e9,	// (0x00042e7f) list_highlight_pane_cp31_ParamLimits

0x32e9,	// (0x00042e7f) list_highlight_pane_cp31

0x439b,	// (0x00043f31) level_1_signal_lsc

0x43a4,	// (0x00043f3a) level_2_signal_lsc

0x43ad,	// (0x00043f43) level_3_signal_lsc

0x43b6,	// (0x00043f4c) level_4_signal_lsc

0x43bf,	// (0x00043f55) level_5_signal_lsc

0x43c8,	// (0x00043f5e) level_6_signal_lsc

0x43d1,	// (0x00043f67) level_7_signal_lsc

0x43d1,	// (0x00043f67) level_1_battery_lsc

0x43da,	// (0x00043f70) level_2_battery_lsc

0x43e3,	// (0x00043f79) level_3_battery_lsc

0x43ec,	// (0x00043f82) level_4_battery_lsc

0x43f5,	// (0x00043f8b) level_5_battery_lsc

0x43fe,	// (0x00043f94) level_6_battery_lsc

0x439b,	// (0x00043f31) level_7_battery_lsc

0x4407,	// (0x00043f9d) scroll_handle_focus_pane_g1

0x4410,	// (0x00043fa6) scroll_handle_focus_pane_g2

0x4419,	// (0x00043faf) scroll_handle_focus_pane_g3

0x0002,

0xf740,	// (0x0004f2d6) scroll_handle_focus_pane_g

0xb9e5,	// (0x0004b57b) list_single_2graphic_pane_g1_ParamLimits

0xb9e5,	// (0x0004b57b) list_single_2graphic_pane_g1

0xbefd,	// (0x0004ba93) list_single_2graphic_pane_g2_ParamLimits

0xbefd,	// (0x0004ba93) list_single_2graphic_pane_g2

0x1ec9,	// (0x00041a5f) list_single_2graphic_pane_g3_ParamLimits

0x1ec9,	// (0x00041a5f) list_single_2graphic_pane_g3

0xb9f1,	// (0x0004b587) list_single_2graphic_pane_g4_ParamLimits

0xb9f1,	// (0x0004b587) list_single_2graphic_pane_g4

0x0003,

0xf747,	// (0x0004f2dd) list_single_2graphic_pane_g_ParamLimits

0xf747,	// (0x0004f2dd) list_single_2graphic_pane_g

0xb9fd,	// (0x0004b593) list_single_2graphic_pane_t1_ParamLimits

0xb9fd,	// (0x0004b593) list_single_2graphic_pane_t1

0xbf47,	// (0x0004badd) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbf47,	// (0x0004badd) list_double2_graphic_large_graphic_pane_g1

0xb66b,	// (0x0004b201) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb66b,	// (0x0004b201) list_double2_graphic_large_graphic_pane_g2

0xbf26,	// (0x0004babc) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xbf26,	// (0x0004babc) list_double2_graphic_large_graphic_pane_g3

0xba2b,	// (0x0004b5c1) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xba2b,	// (0x0004b5c1) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf750,	// (0x0004f2e6) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf750,	// (0x0004f2e6) list_double2_graphic_large_graphic_pane_g

0xba37,	// (0x0004b5cd) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xba37,	// (0x0004b5cd) list_double2_graphic_large_graphic_pane_t1

0xba4d,	// (0x0004b5e3) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xba4d,	// (0x0004b5e3) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf759,	// (0x0004f2ef) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf759,	// (0x0004f2ef) list_double2_graphic_large_graphic_pane_t

0x4561,	// (0x000440f7) popup_fast_swap_window_ParamLimits

0x4561,	// (0x000440f7) popup_fast_swap_window

0x457d,	// (0x00044113) popup_side_volume_key_window

0x4599,	// (0x0004412f) stacon_top_pane

0x45a3,	// (0x00044139) status_pane_ParamLimits

0x45a3,	// (0x00044139) status_pane

0x4599,	// (0x0004412f) status_small_pane

0x3209,	// (0x00042d9f) control_pane

0x3209,	// (0x00042d9f) stacon_bottom_pane

0x3b44,	// (0x000436da) scroll_pane_cp121

0x3b3b,	// (0x000436d1) set_content_pane

0x443d,	// (0x00043fd3) bg_active_tab_pane_g1_cp1

0x442b,	// (0x00043fc1) bg_active_tab_pane_g2_cp1

0x4446,	// (0x00043fdc) bg_active_tab_pane_g3_cp1

0x443d,	// (0x00043fd3) bg_passive_tab_pane_g1_cp1

0x442b,	// (0x00043fc1) bg_passive_tab_pane_g2_cp1

0x4446,	// (0x00043fdc) bg_passive_tab_pane_g3_cp1

0xd333,	// (0x0004cec9) bg_active_tab_pane_g1_cp2

0x442b,	// (0x00043fc1) bg_active_tab_pane_g2_cp2

0xd33c,	// (0x0004ced2) bg_active_tab_pane_g3_cp2

0xd333,	// (0x0004cec9) bg_passive_tab_pane_g1_cp2

0x442b,	// (0x00043fc1) bg_passive_tab_pane_g2_cp2

0xd33c,	// (0x0004ced2) bg_passive_tab_pane_g3_cp2

0xd345,	// (0x0004cedb) bg_active_tab_pane_g1_cp3

0x442b,	// (0x00043fc1) bg_active_tab_pane_g2_cp3

0xd34e,	// (0x0004cee4) bg_active_tab_pane_g3_cp3

0xd345,	// (0x0004cedb) bg_passive_tab_pane_g1_cp3

0x442b,	// (0x00043fc1) bg_passive_tab_pane_g2_cp3

0xd34e,	// (0x0004cee4) bg_passive_tab_pane_g3_cp3

0xd357,	// (0x0004ceed) bg_active_tab_pane_g1_cp4

0x442b,	// (0x00043fc1) bg_active_tab_pane_g2_cp4

0xd360,	// (0x0004cef6) bg_active_tab_pane_g3_cp4

0xd357,	// (0x0004ceed) bg_passive_tab_pane_g1_cp4

0x442b,	// (0x00043fc1) bg_passive_tab_pane_g2_cp4

0xd360,	// (0x0004cef6) bg_passive_tab_pane_g3_cp4

0x44b5,	// (0x0004404b) bg_active_tab_pane_g1_cp5

0x442b,	// (0x00043fc1) bg_active_tab_pane_g2_cp5

0x44be,	// (0x00044054) bg_active_tab_pane_g3_cp5

0x44b5,	// (0x0004404b) bg_passive_tab_pane_g1_cp5

0x442b,	// (0x00043fc1) bg_passive_tab_pane_g2_cp5

0x44be,	// (0x00044054) bg_passive_tab_pane_g3_cp5

0x6b45,	// (0x000466db) list_set_graphic_pane_ParamLimits

0x6b45,	// (0x000466db) list_set_graphic_pane

0x3209,	// (0x00042d9f) bg_set_opt_pane_cp4

0xd369,	// (0x0004ceff) list_set_graphic_pane_g1_ParamLimits

0xd369,	// (0x0004ceff) list_set_graphic_pane_g1

0xd375,	// (0x0004cf0b) list_set_graphic_pane_g2_ParamLimits

0xd375,	// (0x0004cf0b) list_set_graphic_pane_g2

0x0001,

0xf75e,	// (0x0004f2f4) list_set_graphic_pane_g_ParamLimits

0xf75e,	// (0x0004f2f4) list_set_graphic_pane_g

0x0009,

0xfada,	// (0x0004f670) volume_small_pane_cp_g

0xd399,	// (0x0004cf2f) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xd399,	// (0x0004cf2f) list_double2_large_graphic_pane_g1_cp2

0xd3a7,	// (0x0004cf3d) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xd3a7,	// (0x0004cf3d) list_double2_large_graphic_pane_g2_cp2

0x4531,	// (0x000440c7) list_double2_large_graphic_pane_g3_cp2

0x4539,	// (0x000440cf) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4539,	// (0x000440cf) list_double2_large_graphic_pane_t1_cp2

0x454f,	// (0x000440e5) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x454f,	// (0x000440e5) list_double2_large_graphic_pane_t2_cp2

0xdb30,	// (0x0004d6c6) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xdb30,	// (0x0004d6c6) list_double_large_graphic_pane_g1_cp2

0xdb43,	// (0x0004d6d9) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xdb43,	// (0x0004d6d9) list_double_large_graphic_pane_g2_cp2

0x46bf,	// (0x00044255) list_double_large_graphic_pane_g3_cp2

0x6126,	// (0x00045cbc) list_double_large_graphic_pane_g4_cp

0x612e,	// (0x00045cc4) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x612e,	// (0x00045cc4) list_double_large_graphic_pane_t1_cp2

0x6145,	// (0x00045cdb) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x6145,	// (0x00045cdb) list_double_large_graphic_pane_t2_cp2

0xd3b8,	// (0x0004cf4e) list_double2_graphic_pane_g1_cp2_ParamLimits

0xd3b8,	// (0x0004cf4e) list_double2_graphic_pane_g1_cp2

0xd3c6,	// (0x0004cf5c) list_double2_graphic_pane_g2_cp2_ParamLimits

0xd3c6,	// (0x0004cf5c) list_double2_graphic_pane_g2_cp2

0xd3d7,	// (0x0004cf6d) list_double2_graphic_pane_g3_cp2

0x45da,	// (0x00044170) list_double2_graphic_pane_t1_cp2_ParamLimits

0x45da,	// (0x00044170) list_double2_graphic_pane_t1_cp2

0x45f0,	// (0x00044186) list_double2_graphic_pane_t2_cp2_ParamLimits

0x45f0,	// (0x00044186) list_double2_graphic_pane_t2_cp2

0x4602,	// (0x00044198) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4602,	// (0x00044198) list_single_number_heading_pane_g1_cp2

0x460e,	// (0x000441a4) list_single_number_heading_pane_g2_cp2

0x4616,	// (0x000441ac) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4616,	// (0x000441ac) list_single_number_heading_pane_t1_cp2

0xd3e1,	// (0x0004cf77) list_single_number_heading_pane_t2_cp2_ParamLimits

0xd3e1,	// (0x0004cf77) list_single_number_heading_pane_t2_cp2

0x463e,	// (0x000441d4) list_single_number_heading_pane_t3_cp2_ParamLimits

0x463e,	// (0x000441d4) list_single_number_heading_pane_t3_cp2

0x4602,	// (0x00044198) list_single_heading_pane_g1_cp2_ParamLimits

0x4602,	// (0x00044198) list_single_heading_pane_g1_cp2

0x460e,	// (0x000441a4) list_single_heading_pane_g2_cp2

0x4616,	// (0x000441ac) list_single_heading_pane_t1_cp2_ParamLimits

0x4616,	// (0x000441ac) list_single_heading_pane_t1_cp2

0xdb1c,	// (0x0004d6b2) list_single_heading_pane_t2_cp2_ParamLimits

0xdb1c,	// (0x0004d6b2) list_single_heading_pane_t2_cp2

0x5e54,	// (0x000459ea) list_double_graphic_pane_g1_cp2_ParamLimits

0x5e54,	// (0x000459ea) list_double_graphic_pane_g1_cp2

0x5e60,	// (0x000459f6) list_double_graphic_pane_g2_cp2_ParamLimits

0x5e60,	// (0x000459f6) list_double_graphic_pane_g2_cp2

0x5e6f,	// (0x00045a05) list_double_graphic_pane_g3_cp2

0x5e77,	// (0x00045a0d) list_double_graphic_pane_t1_cp2_ParamLimits

0x5e77,	// (0x00045a0d) list_double_graphic_pane_t1_cp2

0x5e8d,	// (0x00045a23) list_double_graphic_pane_t2_cp2_ParamLimits

0x5e8d,	// (0x00045a23) list_double_graphic_pane_t2_cp2

0x46b3,	// (0x00044249) list_double_number_pane_g1_cp2_ParamLimits

0x46b3,	// (0x00044249) list_double_number_pane_g1_cp2

0x46bf,	// (0x00044255) list_double_number_pane_g2_cp2

0xdad4,	// (0x0004d66a) list_double_number_pane_t1_cp2_ParamLimits

0xdad4,	// (0x0004d66a) list_double_number_pane_t1_cp2

0x5e2c,	// (0x000459c2) list_double_number_pane_t2_cp2_ParamLimits

0x5e2c,	// (0x000459c2) list_double_number_pane_t2_cp2

0x5e42,	// (0x000459d8) list_double_number_pane_t3_cp2_ParamLimits

0x5e42,	// (0x000459d8) list_double_number_pane_t3_cp2

0xda22,	// (0x0004d5b8) list_single_graphic_pane_g1_cp2_ParamLimits

0xda22,	// (0x0004d5b8) list_single_graphic_pane_g1_cp2

0x4717,	// (0x000442ad) list_single_graphic_pane_g2_cp2_ParamLimits

0x4717,	// (0x000442ad) list_single_graphic_pane_g2_cp2

0x4723,	// (0x000442b9) list_single_graphic_pane_g3_cp2

0x5cd7,	// (0x0004586d) list_single_graphic_pane_t1_cp2_ParamLimits

0x5cd7,	// (0x0004586d) list_single_graphic_pane_t1_cp2

0x4717,	// (0x000442ad) list_single_number_pane_g1_cp2_ParamLimits

0x4717,	// (0x000442ad) list_single_number_pane_g1_cp2

0x4723,	// (0x000442b9) list_single_number_pane_g2_cp2

0x5cd7,	// (0x0004586d) list_single_number_pane_t1_cp2_ParamLimits

0x5cd7,	// (0x0004586d) list_single_number_pane_t1_cp2

0xda0e,	// (0x0004d5a4) list_single_number_pane_t2_cp2_ParamLimits

0xda0e,	// (0x0004d5a4) list_single_number_pane_t2_cp2

0xd3a7,	// (0x0004cf3d) list_double2_pane_g1_cp2_ParamLimits

0xd3a7,	// (0x0004cf3d) list_double2_pane_g1_cp2

0x4531,	// (0x000440c7) list_double2_pane_g2_cp2

0x468b,	// (0x00044221) list_double2_pane_t1_cp2_ParamLimits

0x468b,	// (0x00044221) list_double2_pane_t1_cp2

0x46a1,	// (0x00044237) list_double2_pane_t2_cp2_ParamLimits

0x46a1,	// (0x00044237) list_double2_pane_t2_cp2

0x46b3,	// (0x00044249) list_double_pane_g1_cp2_ParamLimits

0x46b3,	// (0x00044249) list_double_pane_g1_cp2

0x46bf,	// (0x00044255) list_double_pane_g2_cp2

0x46c7,	// (0x0004425d) list_double_pane_t1_cp2_ParamLimits

0x46c7,	// (0x0004425d) list_double_pane_t1_cp2

0x46dd,	// (0x00044273) list_double_pane_t2_cp2_ParamLimits

0x46dd,	// (0x00044273) list_double_pane_t2_cp2

0x4707,	// (0x0004429d) list_single_pane_cp2_g3

0x4717,	// (0x000442ad) list_single_pane_g1_cp2_ParamLimits

0x4717,	// (0x000442ad) list_single_pane_g1_cp2

0x4723,	// (0x000442b9) list_single_pane_g2_cp2

0x472b,	// (0x000442c1) list_single_pane_t1_cp2_ParamLimits

0x472b,	// (0x000442c1) list_single_pane_t1_cp2

0xd40d,	// (0x0004cfa3) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xd40d,	// (0x0004cfa3) list_single_large_graphic_pane_g1_cp2

0x474f,	// (0x000442e5) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x474f,	// (0x000442e5) list_single_large_graphic_pane_g2_cp2

0x475b,	// (0x000442f1) list_single_large_graphic_pane_g3_cp2

0x4763,	// (0x000442f9) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4763,	// (0x000442f9) list_single_large_graphic_pane_g4_cp1

0x477d,	// (0x00044313) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x477d,	// (0x00044313) list_single_large_graphic_pane_t1_cp2

0x5ca3,	// (0x00045839) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5ca3,	// (0x00045839) list_single_graphic_heading_pane_g1_cp2

0xd9e9,	// (0x0004d57f) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xd9e9,	// (0x0004d57f) list_single_graphic_heading_pane_g4_cp2

0x4723,	// (0x000442b9) list_single_graphic_heading_pane_g5_cp2

0x5caf,	// (0x00045845) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5caf,	// (0x00045845) list_single_graphic_heading_pane_t1_cp2

0xd9fa,	// (0x0004d590) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xd9fa,	// (0x0004d590) list_single_graphic_heading_pane_t2_cp2

0x5c64,	// (0x000457fa) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5c64,	// (0x000457fa) list_single_2graphic_pane_g1_cp2

0xd9e9,	// (0x0004d57f) list_single_2graphic_pane_g2_cp2_ParamLimits

0xd9e9,	// (0x0004d57f) list_single_2graphic_pane_g2_cp2

0x4723,	// (0x000442b9) list_single_2graphic_pane_g3_cp2

0x5c81,	// (0x00045817) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5c81,	// (0x00045817) list_single_2graphic_pane_g4_cp2

0x5c8d,	// (0x00045823) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5c8d,	// (0x00045823) list_single_2graphic_pane_t1_cp2

0x31ff,	// (0x00042d95) list_highlight_pane_g10_cp1

0x583c,	// (0x000453d2) list_highlight_pane_g1_cp1

0x5844,	// (0x000453da) list_highlight_pane_g2_cp1

0x584c,	// (0x000453e2) list_highlight_pane_g3_cp1

0x5854,	// (0x000453ea) list_highlight_pane_g4_cp1

0x585c,	// (0x000453f2) list_highlight_pane_g5_cp1

0x5864,	// (0x000453fa) list_highlight_pane_g6_cp1

0x586c,	// (0x00045402) list_highlight_pane_g7_cp1

0x5874,	// (0x0004540a) list_highlight_pane_g8_cp1

0x587c,	// (0x00045412) list_highlight_pane_g9_cp1

0xd9af,	// (0x0004d545) form_field_slider_pane_t3

0xd9bd,	// (0x0004d553) form_field_slider_pane_t4

0x5778,	// (0x0004530e) slider_form_pane_ParamLimits

0x5778,	// (0x0004530e) slider_form_pane

0x3209,	// (0x00042d9f) control_abbreviations

0x3209,	// (0x00042d9f) control_conventions

0x3209,	// (0x00042d9f) control_definitions

0x3209,	// (0x00042d9f) format_table_attribute

0x5f56,	// (0x00045aec) bg_popup_preview_window_pane_g9

0x3209,	// (0x00042d9f) format_table_data2

0x3209,	// (0x00042d9f) format_table_data3

0x3209,	// (0x00042d9f) format_table_data_example

0x0008,

0x3209,	// (0x00042d9f) intro_purpose

0xf8f5,	// (0x0004f48b) bg_popup_preview_window_pane_g

0x3209,	// (0x00042d9f) texts_category

0x3209,	// (0x00042d9f) texts_graphics

0x4793,	// (0x00044329) text_digital

0x47a2,	// (0x00044338) text_primary

0x47b1,	// (0x00044347) text_primary_small

0x47c0,	// (0x00044356) text_secondary

0x47cf,	// (0x00044365) text_title

0x6651,	// (0x000461e7) bg_passive_tab_pane_g1_cp3_srt

0x442b,	// (0x00043fc1) bg_passive_tab_pane_g2_cp3_srt

0x665a,	// (0x000461f0) bg_passive_tab_pane_g3_cp3_srt

0x3564,	// (0x000430fa) bg_active_tab_pane_cp3_srt_ParamLimits

0x3564,	// (0x000430fa) bg_active_tab_pane_cp3_srt

0x6663,	// (0x000461f9) tabs_4_active_pane_srt_g1

0xddb9,	// (0x0004d94f) tabs_4_active_pane_srt_t1_ParamLimits

0xddb9,	// (0x0004d94f) tabs_4_active_pane_srt_t1

0x6651,	// (0x000461e7) bg_active_tab_pane_g1_cp3_copy1

0x442b,	// (0x00043fc1) bg_active_tab_pane_g2_cp3_copy1

0x665a,	// (0x000461f0) bg_active_tab_pane_g3_cp3_copy1

0x32e9,	// (0x00042e7f) tabs_2_long_active_pane_srt_ParamLimits

0x32e9,	// (0x00042e7f) tabs_2_long_active_pane_srt

0x32e9,	// (0x00042e7f) tabs_2_long_passive_pane_srt_ParamLimits

0x32e9,	// (0x00042e7f) tabs_2_long_passive_pane_srt

0x4b1e,	// (0x000446b4) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4b1e,	// (0x000446b4) bg_passive_tab_pane_cp4_srt

0x639a,	// (0x00045f30) bg_passive_tab_pane_g1_cp4_srt

0x442b,	// (0x00043fc1) bg_passive_tab_pane_g2_cp4_srt

0x63a3,	// (0x00045f39) bg_passive_tab_pane_g3_cp4_srt

0x32e9,	// (0x00042e7f) bg_active_tab_pane_cp4_srt_ParamLimits

0x32e9,	// (0x00042e7f) bg_active_tab_pane_cp4_srt

0xdbe3,	// (0x0004d779) tabs_2_long_active_pane_srt_t1_ParamLimits

0xdbe3,	// (0x0004d779) tabs_2_long_active_pane_srt_t1

0x639a,	// (0x00045f30) bg_active_tab_pane_g1_cp4_srt

0x442b,	// (0x00043fc1) bg_active_tab_pane_g2_cp4_srt

0x63a3,	// (0x00045f39) bg_active_tab_pane_g3_cp4_srt

0x3564,	// (0x000430fa) tabs_3_long_active_pane_srt_ParamLimits

0x3564,	// (0x000430fa) tabs_3_long_active_pane_srt

0x3564,	// (0x000430fa) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x3564,	// (0x000430fa) tabs_3_long_passive_pane_cp_srt

0x3564,	// (0x000430fa) tabs_3_long_passive_pane_srt_ParamLimits

0x3564,	// (0x000430fa) tabs_3_long_passive_pane_srt

0x4b1e,	// (0x000446b4) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4b1e,	// (0x000446b4) bg_passive_tab_pane_cp5_srt

0x44b5,	// (0x0004404b) bg_passive_tab_pane_g1_cp5_srt

0x442b,	// (0x00043fc1) bg_passive_tab_pane_g2_cp5_srt

0x44be,	// (0x00044054) bg_passive_tab_pane_g3_cp5_srt

0x32e9,	// (0x00042e7f) bg_active_tab_pane_cp5_srt_ParamLimits

0x32e9,	// (0x00042e7f) bg_active_tab_pane_cp5_srt

0xdbcd,	// (0x0004d763) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdbcd,	// (0x0004d763) tabs_3_long_active_pane_srt_t1

0x44b5,	// (0x0004404b) bg_active_tab_pane_g1_cp5_srt

0x442b,	// (0x00043fc1) bg_active_tab_pane_g2_cp5_srt

0x44be,	// (0x00044054) bg_active_tab_pane_g3_cp5_srt

0x637a,	// (0x00045f10) navi_text_pane_srt_t1

0x6372,	// (0x00045f08) navi_icon_pane_srt_g1

0x4996,	// (0x0004452c) midp_editing_number_pane_srt

0x47de,	// (0x00044374) midp_ticker_pane_srt

0x499e,	// (0x00044534) midp_ticker_pane_srt_g1

0x49a6,	// (0x0004453c) midp_ticker_pane_srt_g2

0x0001,

0xf77d,	// (0x0004f313) midp_ticker_pane_srt_g

0x49ae,	// (0x00044544) midp_ticker_pane_srt_t1

0x6363,	// (0x00045ef9) midp_editing_number_pane_t1_copy1

0x4b1e,	// (0x000446b4) listscroll_midp_pane

0x4b1e,	// (0x000446b4) midp_form_pane

0x4848,	// (0x000443de) midp_info_popup_window_ParamLimits

0x4848,	// (0x000443de) midp_info_popup_window

0x3c01,	// (0x00043797) bg_popup_sub_pane_cp50_ParamLimits

0x3c01,	// (0x00043797) bg_popup_sub_pane_cp50

0x5474,	// (0x0004500a) listscroll_midp_info_pane_ParamLimits

0x5474,	// (0x0004500a) listscroll_midp_info_pane

0x545c,	// (0x00044ff2) listscroll_form_midp_pane_ParamLimits

0x545c,	// (0x00044ff2) listscroll_form_midp_pane

0x5468,	// (0x00044ffe) scroll_bar_cp050

0xd9a3,	// (0x0004d539) list_midp_pane

0x70e3,	// (0x00046c79) signal_pane_g2_cp

0x5376,	// (0x00044f0c) listscroll_midp_info_pane_t1_ParamLimits

0x5376,	// (0x00044f0c) listscroll_midp_info_pane_t1

0x538e,	// (0x00044f24) listscroll_midp_info_pane_t2_ParamLimits

0x538e,	// (0x00044f24) listscroll_midp_info_pane_t2

0x53cc,	// (0x00044f62) listscroll_midp_info_pane_t3_ParamLimits

0x53cc,	// (0x00044f62) listscroll_midp_info_pane_t3

0x5406,	// (0x00044f9c) listscroll_midp_info_pane_t4_ParamLimits

0x5406,	// (0x00044f9c) listscroll_midp_info_pane_t4

0x0003,

0xf830,	// (0x0004f3c6) listscroll_midp_info_pane_t_ParamLimits

0xf830,	// (0x0004f3c6) listscroll_midp_info_pane_t

0x3cc5,	// (0x0004385b) scroll_pane_cp21

0x5314,	// (0x00044eaa) form_midp_field_choice_group_pane

0x531d,	// (0x00044eb3) form_midp_field_text_pane

0x535c,	// (0x00044ef2) form_midp_field_time_pane

0x5364,	// (0x00044efa) form_midp_gauge_slider_pane

0x536d,	// (0x00044f03) form_midp_gauge_wait_pane

0x3209,	// (0x00042d9f) form_midp_image_pane

0xba5f,	// (0x0004b5f5) list_single_midp_pane_ParamLimits

0xba5f,	// (0x0004b5f5) list_single_midp_pane

0xd981,	// (0x0004d517) form_midp_field_text_pane_t1

0x5096,	// (0x00044c2c) input_focus_pane_cp050

0x5303,	// (0x00044e99) list_midp_form_text_pane

0x529b,	// (0x00044e31) form_midp_field_choice_group_pane_t1

0x52a9,	// (0x00044e3f) input_focus_pane_cp051

0x52bd,	// (0x00044e53) list_midp_choice_pane

0x3209,	// (0x00042d9f) status_idle_pane

0x527f,	// (0x00044e15) form_midp_field_time_pane_t1

0x31ff,	// (0x00042d95) wait_anim_pane_g2_copy1

0x528d,	// (0x00044e23) form_midp_field_time_pane_t2

0x0001,

0x48f6,	// (0x0004448c) aid_navinavi_width_2_pane

0xf82b,	// (0x0004f3c1) form_midp_field_time_pane_t

0x3209,	// (0x00042d9f) input_focus_pane_cp052

0x3209,	// (0x00042d9f) bg_input_focus_pane_cp040

0x523f,	// (0x00044dd5) form_midp_gauge_slider_pane_t1

0x524d,	// (0x00044de3) form_midp_gauge_slider_pane_t2

0xd965,	// (0x0004d4fb) form_midp_gauge_slider_pane_t3

0xd973,	// (0x0004d509) form_midp_gauge_slider_pane_t4

0x0003,

0xf822,	// (0x0004f3b8) form_midp_gauge_slider_pane_t

0x5277,	// (0x00044e0d) form_midp_slider_pane

0x32e9,	// (0x00042e7f) bg_input_focus_pane_cp041_ParamLimits

0x32e9,	// (0x00042e7f) bg_input_focus_pane_cp041

0x520c,	// (0x00044da2) form_midp_gauge_wait_pane_t1_ParamLimits

0x520c,	// (0x00044da2) form_midp_gauge_wait_pane_t1

0x521e,	// (0x00044db4) form_midp_gauge_wait_pane_t2_ParamLimits

0x521e,	// (0x00044db4) form_midp_gauge_wait_pane_t2

0x0001,

0xf81d,	// (0x0004f3b3) form_midp_gauge_wait_pane_t_ParamLimits

0xf81d,	// (0x0004f3b3) form_midp_gauge_wait_pane_t

0x5230,	// (0x00044dc6) form_midp_wait_pane_ParamLimits

0x5230,	// (0x00044dc6) form_midp_wait_pane

0x51d6,	// (0x00044d6c) form_midp_image_pane_g1

0x51df,	// (0x00044d75) form_midp_image_pane_t1

0x51ee,	// (0x00044d84) form_midp_image_pane_t2

0x51fd,	// (0x00044d93) form_midp_image_pane_t3

0x0002,

0xf816,	// (0x0004f3ac) form_midp_image_pane_t

0x51cd,	// (0x00044d63) list_single_midp_pane_g1

0x0760,	// (0x000402f6) list_single_midp_pane_t1

0xd950,	// (0x0004d4e6) list_midp_form_item_pane_ParamLimits

0xd950,	// (0x0004d4e6) list_midp_form_item_pane

0x489e,	// (0x00044434) list_midp_form_item_pane_t1

0x48ad,	// (0x00044443) midp_ticker_pane_g1

0x48b9,	// (0x0004444f) midp_ticker_pane_g2

0x0001,

0xf763,	// (0x0004f2f9) midp_ticker_pane_g

0x48c5,	// (0x0004445b) midp_ticker_pane_t1

0x65b4,	// (0x0004614a) midp_editing_number_pane_t1

0x6592,	// (0x00046128) midp_editing_number_pane

0x65a1,	// (0x00046137) midp_ticker_pane

0x6353,	// (0x00045ee9) ai_message_heading_pane

0x3209,	// (0x00042d9f) bg_popup_window_pane_cp14

0x635b,	// (0x00045ef1) listscroll_ai_message_pane

0x62dd,	// (0x00045e73) ai_message_heading_pane_g1_ParamLimits

0x62dd,	// (0x00045e73) ai_message_heading_pane_g1

0x62e9,	// (0x00045e7f) ai_message_heading_pane_g2_ParamLimits

0x62e9,	// (0x00045e7f) ai_message_heading_pane_g2

0x62f5,	// (0x00045e8b) ai_message_heading_pane_g3_ParamLimits

0x62f5,	// (0x00045e8b) ai_message_heading_pane_g3

0x6301,	// (0x00045e97) ai_message_heading_pane_g4_ParamLimits

0x6301,	// (0x00045e97) ai_message_heading_pane_g4

0x0003,

0xf957,	// (0x0004f4ed) ai_message_heading_pane_g_ParamLimits

0xf957,	// (0x0004f4ed) ai_message_heading_pane_g

0x630d,	// (0x00045ea3) ai_message_heading_pane_t1_ParamLimits

0x630d,	// (0x00045ea3) ai_message_heading_pane_t1

0x6327,	// (0x00045ebd) ai_message_heading_pane_t2_ParamLimits

0x6327,	// (0x00045ebd) ai_message_heading_pane_t2

0x0001,

0xf960,	// (0x0004f4f6) ai_message_heading_pane_t_ParamLimits

0xf960,	// (0x0004f4f6) ai_message_heading_pane_t

0x6339,	// (0x00045ecf) bg_popup_heading_pane_cp1_ParamLimits

0x6339,	// (0x00045ecf) bg_popup_heading_pane_cp1

0x62cb,	// (0x00045e61) list_ai_message_pane_ParamLimits

0x62cb,	// (0x00045e61) list_ai_message_pane

0x3cc5,	// (0x0004385b) scroll_pane_cp10

0x6267,	// (0x00045dfd) list_ai_message_pane_g1

0x626f,	// (0x00045e05) list_ai_message_pane_g2

0x0001,

0xf934,	// (0x0004f4ca) list_ai_message_pane_g

0x6277,	// (0x00045e0d) list_ai_message_pane_t1_ParamLimits

0x6277,	// (0x00045e0d) list_ai_message_pane_t1

0x628c,	// (0x00045e22) list_ai_message_pane_t2_ParamLimits

0x628c,	// (0x00045e22) list_ai_message_pane_t2

0x62a1,	// (0x00045e37) list_ai_message_pane_t3_ParamLimits

0x62a1,	// (0x00045e37) list_ai_message_pane_t3

0x62b6,	// (0x00045e4c) list_ai_message_pane_t4_ParamLimits

0x62b6,	// (0x00045e4c) list_ai_message_pane_t4

0x0003,

0xf939,	// (0x0004f4cf) list_ai_message_pane_t_ParamLimits

0xf939,	// (0x0004f4cf) list_ai_message_pane_t

0xdbac,	// (0x0004d742) cell_ai_soft_ind_pane_ParamLimits

0xdbac,	// (0x0004d742) cell_ai_soft_ind_pane

0x48d7,	// (0x0004446d) cell_ai_soft_ind_pane_g1_ParamLimits

0x48d7,	// (0x0004446d) cell_ai_soft_ind_pane_g1

0x3209,	// (0x00042d9f) grid_highlight_cp1

0x48e4,	// (0x0004447a) text_secondary_cp56_ParamLimits

0x48e4,	// (0x0004447a) text_secondary_cp56

0x6227,	// (0x00045dbd) example_general_pane_ParamLimits

0x6227,	// (0x00045dbd) example_general_pane

0x6233,	// (0x00045dc9) example_parent_pane_g1_ParamLimits

0x6233,	// (0x00045dc9) example_parent_pane_g1

0x623f,	// (0x00045dd5) example_parent_pane_t1_ParamLimits

0x623f,	// (0x00045dd5) example_parent_pane_t1

0xc49c,	// (0x0004c032) popup_preview_text_window_ParamLimits

0xc49c,	// (0x0004c032) popup_preview_text_window

0x470f,	// (0x000442a5) list_single_pane_cp2_g4

0x361a,	// (0x000431b0) bg_popup_preview_window_pane_ParamLimits

0x361a,	// (0x000431b0) bg_popup_preview_window_pane

0x5f5e,	// (0x00045af4) popup_preview_text_window_t1_ParamLimits

0x5f5e,	// (0x00045af4) popup_preview_text_window_t1

0x5f7c,	// (0x00045b12) popup_preview_text_window_t2_ParamLimits

0x5f7c,	// (0x00045b12) popup_preview_text_window_t2

0x5fc5,	// (0x00045b5b) popup_preview_text_window_t3_ParamLimits

0x5fc5,	// (0x00045b5b) popup_preview_text_window_t3

0x600a,	// (0x00045ba0) popup_preview_text_window_t4_ParamLimits

0x600a,	// (0x00045ba0) popup_preview_text_window_t4

0x0004,

0xf908,	// (0x0004f49e) popup_preview_text_window_t_ParamLimits

0xf908,	// (0x0004f49e) popup_preview_text_window_t

0x6088,	// (0x00045c1e) scroll_pane_cp11

0x5022,	// (0x00044bb8) bg_popup_preview_window_pane_g1

0x5f1e,	// (0x00045ab4) bg_popup_preview_window_pane_g2

0x5f26,	// (0x00045abc) bg_popup_preview_window_pane_g3

0x5f2e,	// (0x00045ac4) bg_popup_preview_window_pane_g4

0x5f36,	// (0x00045acc) bg_popup_preview_window_pane_g5

0x5f3e,	// (0x00045ad4) bg_popup_preview_window_pane_g6

0x5f46,	// (0x00045adc) bg_popup_preview_window_pane_g7

0x5f4e,	// (0x00045ae4) bg_popup_preview_window_pane_g8

0x0dc5,	// (0x0004095b) aid_popup_width_pane

0xc418,	// (0x0004bfae) popup_midp_note_alarm_window_ParamLimits

0xc418,	// (0x0004bfae) popup_midp_note_alarm_window

0x3b55,	// (0x000436eb) data_form_pane_ParamLimits

0xb8c7,	// (0x0004b45d) form_field_data_pane_g1

0xb8d1,	// (0x0004b467) form_field_data_pane_t1_ParamLimits

0x3b61,	// (0x000436f7) input_focus_pane_ParamLimits

0x0427,	// (0x0003ffbd) data_form_wide_pane_ParamLimits

0x0438,	// (0x0003ffce) form_field_data_wide_pane_g1

0x0444,	// (0x0003ffda) form_field_data_wide_pane_t1_ParamLimits

0x38c6,	// (0x0004345c) input_focus_pane_cp6_ParamLimits

0xd17a,	// (0x0004cd10) input_popup_find_pane_g1_ParamLimits

0xd17a,	// (0x0004cd10) input_popup_find_pane_g1

0x13d9,	// (0x00040f6f) aid_navi_side_left_pane

0x13ee,	// (0x00040f84) aid_navi_side_right_pane

0x5937,	// (0x000454cd) bg_popup_window_pane_cp30_ParamLimits

0x5937,	// (0x000454cd) bg_popup_window_pane_cp30

0x59b1,	// (0x00045547) popup_midp_note_alarm_window_g1_ParamLimits

0x59b1,	// (0x00045547) popup_midp_note_alarm_window_g1

0x59e1,	// (0x00045577) popup_midp_note_alarm_window_t1_ParamLimits

0x59e1,	// (0x00045577) popup_midp_note_alarm_window_t1

0x5a82,	// (0x00045618) popup_midp_note_alarm_window_t2_ParamLimits

0x5a82,	// (0x00045618) popup_midp_note_alarm_window_t2

0x5b30,	// (0x000456c6) popup_midp_note_alarm_window_t3_ParamLimits

0x5b30,	// (0x000456c6) popup_midp_note_alarm_window_t3

0x5b62,	// (0x000456f8) popup_midp_note_alarm_window_t4_ParamLimits

0x5b62,	// (0x000456f8) popup_midp_note_alarm_window_t4

0x5b88,	// (0x0004571e) popup_midp_note_alarm_window_t5_ParamLimits

0x5b88,	// (0x0004571e) popup_midp_note_alarm_window_t5

0x000a,

0xf8a5,	// (0x0004f43b) popup_midp_note_alarm_window_t_ParamLimits

0xf8a5,	// (0x0004f43b) popup_midp_note_alarm_window_t

0x5c34,	// (0x000457ca) wait_bar_pane_cp1_ParamLimits

0x5c34,	// (0x000457ca) wait_bar_pane_cp1

0x3209,	// (0x00042d9f) wait_anim_pane_copy1

0x3209,	// (0x00042d9f) wait_border_pane_copy1

0x561d,	// (0x000451b3) wait_border_pane_g1_copy1

0x045e,	// (0x0003fff4) form_field_popup_pane_g1

0xb8eb,	// (0x0004b481) form_field_popup_pane_t1_ParamLimits

0x3b61,	// (0x000436f7) input_focus_pane_cp7_ParamLimits

0x3b83,	// (0x00043719) list_form_pane_ParamLimits

0x047e,	// (0x00040014) form_field_popup_wide_pane_g1

0x0486,	// (0x0004001c) form_field_popup_wide_pane_t1_ParamLimits

0x3b61,	// (0x000436f7) input_focus_pane_cp8_ParamLimits

0x3b8f,	// (0x00043725) list_form_wide_pane_ParamLimits

0x66dd,	// (0x00046273) aid_size_cell_graphic_pane

0xb96a,	// (0x0004b500) data_form_pane_t1_ParamLimits

0xba87,	// (0x0004b61d) data_form_wide_pane_t1_ParamLimits

0xd5db,	// (0x0004d171) bg_status_flat_pane

0xbe03,	// (0x0004b999) title_pane_t1_ParamLimits

0x32b1,	// (0x00042e47) title_pane_t2_ParamLimits

0x32d7,	// (0x00042e6d) title_pane_t3_ParamLimits

0xf55d,	// (0x0004f0f3) title_pane_t_ParamLimits

0x4142,	// (0x00043cd8) level_1_signal_ParamLimits

0x4154,	// (0x00043cea) level_2_signal_ParamLimits

0x4167,	// (0x00043cfd) level_3_signal_ParamLimits

0x417a,	// (0x00043d10) level_4_signal_ParamLimits

0x418d,	// (0x00043d23) level_5_signal_ParamLimits

0x41a0,	// (0x00043d36) level_6_signal_ParamLimits

0x41b3,	// (0x00043d49) level_7_signal_ParamLimits

0x4142,	// (0x00043cd8) level_1_battery_ParamLimits

0x4154,	// (0x00043cea) level_2_battery_ParamLimits

0x4167,	// (0x00043cfd) level_3_battery_ParamLimits

0x417a,	// (0x00043d10) level_4_battery_ParamLimits

0x418d,	// (0x00043d23) level_5_battery_ParamLimits

0x41a0,	// (0x00043d36) level_6_battery_ParamLimits

0x41b3,	// (0x00043d49) level_7_battery_ParamLimits

0x583c,	// (0x000453d2) bg_status_flat_pane_g1

0x5844,	// (0x000453da) bg_status_flat_pane_g2

0x584c,	// (0x000453e2) bg_status_flat_pane_g3

0x5854,	// (0x000453ea) bg_status_flat_pane_g4

0x585c,	// (0x000453f2) bg_status_flat_pane_g5

0x5864,	// (0x000453fa) bg_status_flat_pane_g6

0x586c,	// (0x00045402) bg_status_flat_pane_g7

0xbe97,	// (0x0004ba2d) tabs_3_active_pane_t1_ParamLimits

0xbe97,	// (0x0004ba2d) tabs_3_passive_pane_t1_ParamLimits

0xbeb1,	// (0x0004ba47) tabs_4_active_pane_t1_ParamLimits

0xbeb1,	// (0x0004ba47) tabs_4_1_passive_pane_t1_ParamLimits

0xd190,	// (0x0004cd26) tabs_2_active_pane_t1_ParamLimits

0xd190,	// (0x0004cd26) tabs_2_passive_pane_t1_ParamLimits

0x32e9,	// (0x00042e7f) bg_active_tab_pane_cp4_ParamLimits

0xd1a2,	// (0x0004cd38) tabs_2_long_active_pane_t1_ParamLimits

0x4b1e,	// (0x000446b4) bg_passive_tab_pane_cp4_ParamLimits

0x1f1e,	// (0x00041ab4) list_single_midp_graphic_pane_t1_ParamLimits

0x32e9,	// (0x00042e7f) bg_active_tab_pane_cp5_ParamLimits

0xd1b5,	// (0x0004cd4b) tabs_3_long_active_pane_t1_ParamLimits

0x4b1e,	// (0x000446b4) bg_passive_tab_pane_cp5_ParamLimits

0x1f1e,	// (0x00041ab4) list_single_midp_graphic_pane_t1

0xd5db,	// (0x0004d171) bg_status_flat_pane_ParamLimits

0x4cb4,	// (0x0004484a) indicator_pane_cp2_ParamLimits

0x4cb4,	// (0x0004484a) indicator_pane_cp2

0xd753,	// (0x0004d2e9) navi_pane_srt_ParamLimits

0xd753,	// (0x0004d2e9) navi_pane_srt

0x4e09,	// (0x0004499f) popup_clock_digital_analogue_window_cp1

0x33c6,	// (0x00042f5c) indicator_pane_t1

0x47de,	// (0x00044374) copy_highlight_pane

0x47de,	// (0x00044374) cursor_graphics_pane

0x47de,	// (0x00044374) graphic_within_text_pane

0x47de,	// (0x00044374) link_highlight_pane

0x604b,	// (0x00045be1) popup_preview_text_window_t5_ParamLimits

0x604b,	// (0x00045be1) popup_preview_text_window_t5

0x48fe,	// (0x00044494) cursor_digital_pane

0x48fe,	// (0x00044494) cursor_primary_pane

0x490f,	// (0x000444a5) cursor_primary_small_pane

0x4917,	// (0x000444ad) cursor_secondary_pane

0x491f,	// (0x000444b5) cursor_title_pane

0x48fe,	// (0x00044494) link_highlight_digital_pane

0x4906,	// (0x0004449c) link_highlight_primary_pane

0x490f,	// (0x000444a5) link_highlight_primary_small_pane

0x4917,	// (0x000444ad) link_highlight_secondary_pane

0x491f,	// (0x000444b5) link_highlight_title_pane

0x48fe,	// (0x00044494) copy_highlight_digital_pane

0x48fe,	// (0x00044494) copy_highlight_primary_pane

0x490f,	// (0x000444a5) copy_highlight_primary_small_pane

0x4917,	// (0x000444ad) copy_highlight_secondary_pane

0x491f,	// (0x000444b5) copy_highlight_title_pane

0x4917,	// (0x000444ad) graphic_text_digital_pane

0x58da,	// (0x00045470) graphic_text_primary_pane

0x58e3,	// (0x00045479) graphic_text_primary_small_pane

0x490f,	// (0x000444a5) graphic_text_secondary_pane

0x48fe,	// (0x00044494) graphic_text_title_pane

0xd4b2,	// (0x0004d048) cursor_primary_pane_g1

0x58cc,	// (0x00045462) cursor_text_primary_t1

0xd9df,	// (0x0004d575) cursor_primary_small_pane_g1

0x58be,	// (0x00045454) cursor_text_primary_small_t1

0xd9d5,	// (0x0004d56b) cursor_primary_small_pane_g1_copy1

0x58a6,	// (0x0004543c) cursor_text_primary_small_t1_copy1

0x5884,	// (0x0004541a) cursor_text_title_t1

0xd9cb,	// (0x0004d561) cursor_title_pane_g1

0xd4b2,	// (0x0004d048) cursor_digital_pane_g1

0x4931,	// (0x000444c7) cursor_text_digital_t1

0x4956,	// (0x000444ec) link_highlight_primary_pane_g1

0x582d,	// (0x000453c3) link_highlight_primary_pane_t1

0x493f,	// (0x000444d5) link_highlight_primary_small_pane_g1

0x4947,	// (0x000444dd) link_highlight_primary_small_pane_t1

0x4956,	// (0x000444ec) link_highlight_secondary_pane_g1

0x495e,	// (0x000444f4) link_highlight_secondary_pane_t1

0x57a1,	// (0x00045337) link_highlight_title_pane_g1

0x57a9,	// (0x0004533f) link_highlight_title_pane_t1

0x578a,	// (0x00045320) link_highlight_digital_pane_g1

0x5792,	// (0x00045328) link_highlight_digital_pane_t1

0x5662,	// (0x000451f8) copy_highlight_primary_pane_g1

0x566a,	// (0x00045200) copy_highlight_primary_pane_t1

0x563c,	// (0x000451d2) copy_highlight_primary_small_pane_g1

0x5653,	// (0x000451e9) copy_highlight_primary_small_pane_t1

0x496d,	// (0x00044503) copy_highlight_secondary_pane_g1

0x4975,	// (0x0004450b) copy_highlight_secondary_pane_t1

0x563c,	// (0x000451d2) copy_highlight_title_pane_g1

0x5644,	// (0x000451da) copy_highlight_title_pane_t1

0x5662,	// (0x000451f8) copy_highlight_digital_pane_g1

0x68e9,	// (0x0004647f) copy_highlight_digital_pane_t1

0x67fb,	// (0x00046391) graphic_text_primary_pane_g1

0x68cd,	// (0x00046463) graphic_text_primary_pane_t1

0x68db,	// (0x00046471) graphic_text_primary_pane_t2

0x0001,

0xf9d4,	// (0x0004f56a) graphic_text_primary_pane_t

0x6867,	// (0x000463fd) graphic_text_primary_small_pane_g1

0x686f,	// (0x00046405) graphic_text_primary_small_pane_t1

0x68bf,	// (0x00046455) graphic_text_primary_small_pane_t2

0x0001,

0xf9cf,	// (0x0004f565) graphic_text_primary_small_pane_t

0x6843,	// (0x000463d9) graphic_text_secondary_pane_g1

0x684b,	// (0x000463e1) graphic_text_secondary_pane_t1

0x6859,	// (0x000463ef) graphic_text_secondary_pane_t2

0x0001,

0xf9ca,	// (0x0004f560) graphic_text_secondary_pane_t

0x681f,	// (0x000463b5) graphic_text_title_pane_g1

0x6827,	// (0x000463bd) graphic_text_title_pane_t1

0x6835,	// (0x000463cb) graphic_text_title_pane_t2

0x0001,

0xf9c5,	// (0x0004f55b) graphic_text_title_pane_t

0x67fb,	// (0x00046391) graphic_text_digital_pane_g1

0x6803,	// (0x00046399) graphic_text_digital_pane_t1

0x6811,	// (0x000463a7) graphic_text_digital_pane_t2

0x0001,

0xf9c0,	// (0x0004f556) graphic_text_digital_pane_t

0x32e9,	// (0x00042e7f) navi_icon_pane_srt_ParamLimits

0x32e9,	// (0x00042e7f) navi_icon_pane_srt

0x3209,	// (0x00042d9f) navi_midp_pane_srt

0x3209,	// (0x00042d9f) navi_navi_pane_srt

0x32e9,	// (0x00042e7f) navi_text_pane_srt_ParamLimits

0x32e9,	// (0x00042e7f) navi_text_pane_srt

0x67c6,	// (0x0004635c) navi_navi_icon_text_pane_srt

0x67ce,	// (0x00046364) navi_navi_pane_srt_g1_ParamLimits

0x67ce,	// (0x00046364) navi_navi_pane_srt_g1

0x67e0,	// (0x00046376) navi_navi_pane_srt_g2_ParamLimits

0x67e0,	// (0x00046376) navi_navi_pane_srt_g2

0x0001,

0xf9bb,	// (0x0004f551) navi_navi_pane_srt_g_ParamLimits

0xf9bb,	// (0x0004f551) navi_navi_pane_srt_g

0x67f2,	// (0x00046388) navi_navi_tabs_pane_srt

0x67c6,	// (0x0004635c) navi_navi_text_pane_srt

0x67c6,	// (0x0004635c) navi_navi_volume_pane_srt

0x67b7,	// (0x0004634d) navi_navi_text_pane_srt_t1

0x2304,	// (0x00041e9a) navi_navi_volume_pane_srt_g1

0x230c,	// (0x00041ea2) volume_small_pane_srt_ParamLimits

0x230c,	// (0x00041ea2) volume_small_pane_srt

0x16d5,	// (0x0004126b) volume_small_pane_srt_g1_ParamLimits

0x16d5,	// (0x0004126b) volume_small_pane_srt_g1

0x16e5,	// (0x0004127b) volume_small_pane_srt_g2_ParamLimits

0x16e5,	// (0x0004127b) volume_small_pane_srt_g2

0x16f6,	// (0x0004128c) volume_small_pane_srt_g3_ParamLimits

0x16f6,	// (0x0004128c) volume_small_pane_srt_g3

0x1707,	// (0x0004129d) volume_small_pane_srt_g4_ParamLimits

0x1707,	// (0x0004129d) volume_small_pane_srt_g4

0x1718,	// (0x000412ae) volume_small_pane_srt_g5_ParamLimits

0x1718,	// (0x000412ae) volume_small_pane_srt_g5

0x1729,	// (0x000412bf) volume_small_pane_srt_g6_ParamLimits

0x1729,	// (0x000412bf) volume_small_pane_srt_g6

0x173a,	// (0x000412d0) volume_small_pane_srt_g7_ParamLimits

0x173a,	// (0x000412d0) volume_small_pane_srt_g7

0x174b,	// (0x000412e1) volume_small_pane_srt_g8_ParamLimits

0x174b,	// (0x000412e1) volume_small_pane_srt_g8

0x175c,	// (0x000412f2) volume_small_pane_srt_g9_ParamLimits

0x175c,	// (0x000412f2) volume_small_pane_srt_g9

0x176d,	// (0x00041303) volume_small_pane_srt_g10_ParamLimits

0x176d,	// (0x00041303) volume_small_pane_srt_g10

0x0009,

0xf768,	// (0x0004f2fe) volume_small_pane_srt_g_ParamLimits

0xf768,	// (0x0004f2fe) volume_small_pane_srt_g

0x36c3,	// (0x00043259) query_popup_data_pane_cp2

0x679d,	// (0x00046333) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x679d,	// (0x00046333) navi_navi_icon_text_pane_srt_t1

0x58da,	// (0x00045470) navi_tabs_2_long_pane_srt

0x58da,	// (0x00045470) navi_tabs_2_pane_srt

0x58da,	// (0x00045470) navi_tabs_3_long_pane_srt

0x58da,	// (0x00045470) navi_tabs_3_pane_srt

0x58da,	// (0x00045470) navi_tabs_4_pane_srt

0x22e4,	// (0x00041e7a) tabs_2_active_pane_srt_ParamLimits

0x22e4,	// (0x00041e7a) tabs_2_active_pane_srt

0x22f4,	// (0x00041e8a) tabs_2_passive_pane_srt_ParamLimits

0x22f4,	// (0x00041e8a) tabs_2_passive_pane_srt

0x5096,	// (0x00044c2c) bg_passive_tab_pane_cp1_srt_ParamLimits

0x5096,	// (0x00044c2c) bg_passive_tab_pane_cp1_srt

0x6769,	// (0x000462ff) bg_passive_tab_pane_g1_cp1_srt

0x442b,	// (0x00043fc1) bg_passive_tab_pane_g2_cp1_srt

0x6772,	// (0x00046308) bg_passive_tab_pane_g3_cp1_srt

0x3564,	// (0x000430fa) bg_active_tab_pane_cp1_srt_ParamLimits

0x3564,	// (0x000430fa) bg_active_tab_pane_cp1_srt

0x677b,	// (0x00046311) tabs_2_active_pane_srt_g1

0xde36,	// (0x0004d9cc) tabs_2_active_pane_srt_t1_ParamLimits

0xde36,	// (0x0004d9cc) tabs_2_active_pane_srt_t1

0x6769,	// (0x000462ff) bg_active_tab_pane_g1_cp1_srt

0x442b,	// (0x00043fc1) bg_active_tab_pane_g2_cp1_srt

0x6772,	// (0x00046308) bg_active_tab_pane_g3_cp1_srt

0x22b1,	// (0x00041e47) tabs_3_active_pane_srt_ParamLimits

0x22b1,	// (0x00041e47) tabs_3_active_pane_srt

0x22c2,	// (0x00041e58) tabs_3_passive_pane_cp_srt_ParamLimits

0x22c2,	// (0x00041e58) tabs_3_passive_pane_cp_srt

0x22d3,	// (0x00041e69) tabs_3_passive_pane_srt_ParamLimits

0x22d3,	// (0x00041e69) tabs_3_passive_pane_srt

0x5096,	// (0x00044c2c) bg_passive_tab_pane_cp2_srt_ParamLimits

0x5096,	// (0x00044c2c) bg_passive_tab_pane_cp2_srt

0x4984,	// (0x0004451a) bg_passive_tab_pane_g1_cp2_srt

0x442b,	// (0x00043fc1) bg_passive_tab_pane_g2_cp2_srt

0x498d,	// (0x00044523) bg_passive_tab_pane_g3_cp2_srt

0x3564,	// (0x000430fa) bg_active_tab_pane_cp2_srt_ParamLimits

0x3564,	// (0x000430fa) bg_active_tab_pane_cp2_srt

0x674f,	// (0x000462e5) tabs_3_active_pane_srt_g1

0xde20,	// (0x0004d9b6) tabs_3_active_pane_srt_t1_ParamLimits

0xde20,	// (0x0004d9b6) tabs_3_active_pane_srt_t1

0x4984,	// (0x0004451a) bg_active_tab_pane_g1_cp2_srt

0x442b,	// (0x00043fc1) bg_active_tab_pane_g2_cp2_srt

0x498d,	// (0x00044523) bg_active_tab_pane_g3_cp2_srt

0x2269,	// (0x00041dff) tabs_4_active_pane_srt_ParamLimits

0x2269,	// (0x00041dff) tabs_4_active_pane_srt

0x227b,	// (0x00041e11) tabs_4_passive_pane_cp2_srt_ParamLimits

0x227b,	// (0x00041e11) tabs_4_passive_pane_cp2_srt

0x18d2,	// (0x00041468) aid_size_cell_toolbar

0x640b,	// (0x00045fa1) main_idle_act_pane_ParamLimits

0x1a85,	// (0x0004161b) popup_large_graphic_colour_window_ParamLimits

0xc728,	// (0x0004c2be) popup_toolbar_window_ParamLimits

0xc728,	// (0x0004c2be) popup_toolbar_window

0x65c3,	// (0x00046159) list_single_graphic_2heading_pane_ParamLimits

0x65c3,	// (0x00046159) list_single_graphic_2heading_pane

0x3ef5,	// (0x00043a8b) aid_size_cell_apps_grid_lsc_pane

0x3f07,	// (0x00043a9d) aid_size_cell_apps_grid_prt_pane

0x4b1e,	// (0x000446b4) bg_wml_button_pane_cp1_ParamLimits

0x4b1e,	// (0x000446b4) bg_wml_button_pane_cp1

0xd981,	// (0x0004d517) form_midp_field_text_pane_t1_ParamLimits

0x5096,	// (0x00044c2c) input_focus_pane_cp050_ParamLimits

0x5303,	// (0x00044e99) list_midp_form_text_pane_ParamLimits

0x52a9,	// (0x00044e3f) input_focus_pane_cp051_ParamLimits

0x52bd,	// (0x00044e53) list_midp_choice_pane_ParamLimits

0xd91e,	// (0x0004d4b4) list_single_2graphic_pane_cp3_ParamLimits

0xd91e,	// (0x0004d4b4) list_single_2graphic_pane_cp3

0xd931,	// (0x0004d4c7) list_single_midp_graphic_pane_ParamLimits

0xd931,	// (0x0004d4c7) list_single_midp_graphic_pane

0x063a,	// (0x000401d0) list_single_graphic_2heading_pane_g1_ParamLimits

0x063a,	// (0x000401d0) list_single_graphic_2heading_pane_g1

0x0646,	// (0x000401dc) list_single_graphic_2heading_pane_g4_ParamLimits

0x0646,	// (0x000401dc) list_single_graphic_2heading_pane_g4

0x0652,	// (0x000401e8) list_single_graphic_2heading_pane_g5_ParamLimits

0x0652,	// (0x000401e8) list_single_graphic_2heading_pane_g5

0x0002,

0xf7bb,	// (0x0004f351) list_single_graphic_2heading_pane_g_ParamLimits

0xf7bb,	// (0x0004f351) list_single_graphic_2heading_pane_g

0x065e,	// (0x000401f4) list_single_graphic_2heading_pane_t1_ParamLimits

0x065e,	// (0x000401f4) list_single_graphic_2heading_pane_t1

0x0672,	// (0x00040208) list_single_graphic_2heading_pane_t2_ParamLimits

0x0672,	// (0x00040208) list_single_graphic_2heading_pane_t2

0x068e,	// (0x00040224) list_single_graphic_2heading_pane_t3_ParamLimits

0x068e,	// (0x00040224) list_single_graphic_2heading_pane_t3

0x0002,

0xf7c2,	// (0x0004f358) list_single_graphic_2heading_pane_t_ParamLimits

0xf7c2,	// (0x0004f358) list_single_graphic_2heading_pane_t

0x4f60,	// (0x00044af6) bg_popup_sub_pane_cp2

0x4f8a,	// (0x00044b20) grid_toobar_pane

0x1e99,	// (0x00041a2f) cell_toolbar_pane_ParamLimits

0x1e99,	// (0x00041a2f) cell_toolbar_pane

0x4fc6,	// (0x00044b5c) cell_toolbar_pane_g1_ParamLimits

0x4fc6,	// (0x00044b5c) cell_toolbar_pane_g1

0x4fda,	// (0x00044b70) cell_toolbar_pane_g2_ParamLimits

0x4fda,	// (0x00044b70) cell_toolbar_pane_g2

0x0001,

0xf7d0,	// (0x0004f366) cell_toolbar_pane_g_ParamLimits

0xf7d0,	// (0x0004f366) cell_toolbar_pane_g

0x4ffc,	// (0x00044b92) grid_highlight_pane_cp2_ParamLimits

0x4ffc,	// (0x00044b92) grid_highlight_pane_cp2

0x5016,	// (0x00044bac) toolbar_button_pane

0x5022,	// (0x00044bb8) toolbar_button_pane_g1

0x502a,	// (0x00044bc0) toolbar_button_pane_g2

0x5032,	// (0x00044bc8) toolbar_button_pane_g3

0x503a,	// (0x00044bd0) toolbar_button_pane_g4

0x5042,	// (0x00044bd8) toolbar_button_pane_g5

0x504a,	// (0x00044be0) toolbar_button_pane_g6

0x5052,	// (0x00044be8) toolbar_button_pane_g7

0x505a,	// (0x00044bf0) toolbar_button_pane_g8

0x5062,	// (0x00044bf8) toolbar_button_pane_g9

0x0009,

0xf7d5,	// (0x0004f36b) toolbar_button_pane_g

0x1edd,	// (0x00041a73) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1edd,	// (0x00041a73) list_single_2graphic_pane_g1_cp3

0xc780,	// (0x0004c316) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc780,	// (0x0004c316) list_single_2graphic_pane_g2_cp3

0x1efa,	// (0x00041a90) list_single_2graphic_pane_g3_cp3

0x1588,	// (0x0004111e) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1588,	// (0x0004111e) list_single_2graphic_pane_g4_cp3

0x1f02,	// (0x00041a98) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1f02,	// (0x00041a98) list_single_2graphic_pane_t1_cp3

0x4d4a,	// (0x000448e0) list_single_midp_graphic_pane_g2_ParamLimits

0x4d4a,	// (0x000448e0) list_single_midp_graphic_pane_g2

0x062a,	// (0x000401c0) aid_zoom_text_primary

0x18da,	// (0x00041470) aid_zoom_text_secondary

0x4a41,	// (0x000445d7) status_small_pane_g7_ParamLimits

0x4a41,	// (0x000445d7) status_small_pane_g7

0x4a64,	// (0x000445fa) status_small_pane_t1_ParamLimits

0xbddf,	// (0x0004b975) title_pane_g2

0x0003,

0xf554,	// (0x0004f0ea) title_pane_g

0xd08d,	// (0x0004cc23) aid_size_cell_colour_1_pane_ParamLimits

0xd08d,	// (0x0004cc23) aid_size_cell_colour_1_pane

0xd0a1,	// (0x0004cc37) aid_size_cell_colour_2_pane_ParamLimits

0xd0a1,	// (0x0004cc37) aid_size_cell_colour_2_pane

0xd0b5,	// (0x0004cc4b) aid_size_cell_colour_3_pane_ParamLimits

0xd0b5,	// (0x0004cc4b) aid_size_cell_colour_3_pane

0xd0c9,	// (0x0004cc5f) aid_size_cell_colour_4_pane_ParamLimits

0xd0c9,	// (0x0004cc5f) aid_size_cell_colour_4_pane

0x1316,	// (0x00040eac) title_pane_stacon_g1_ParamLimits

0x1316,	// (0x00040eac) title_pane_stacon_g1

0x56c1,	// (0x00045257) popup_note_wait_window_g3_ParamLimits

0x56c1,	// (0x00045257) popup_note_wait_window_g3

0x5737,	// (0x000452cd) popup_note_wait_window_t5_ParamLimits

0x5737,	// (0x000452cd) popup_note_wait_window_t5

0x3209,	// (0x00042d9f) main_feb_china_hwr_fs_writing_pane

0xc136,	// (0x0004bccc) popup_feb_china_hwr_fs_window_ParamLimits

0xc136,	// (0x0004bccc) popup_feb_china_hwr_fs_window

0xc791,	// (0x0004c327) aid_size_cell_hwr_fs_ParamLimits

0xc791,	// (0x0004c327) aid_size_cell_hwr_fs

0x5096,	// (0x00044c2c) bg_popup_sub_pane_cp3_ParamLimits

0x5096,	// (0x00044c2c) bg_popup_sub_pane_cp3

0xc7a6,	// (0x0004c33c) grid_hwr_fs_pane_ParamLimits

0xc7a6,	// (0x0004c33c) grid_hwr_fs_pane

0x1f79,	// (0x00041b0f) linegrid_hwr_fs_pane_ParamLimits

0x1f79,	// (0x00041b0f) linegrid_hwr_fs_pane

0xc7be,	// (0x0004c354) cell_hwr_fs_pane_ParamLimits

0xc7be,	// (0x0004c354) cell_hwr_fs_pane

0x50a2,	// (0x00044c38) linegrid_hwr_fs_pane_g1_ParamLimits

0x50a2,	// (0x00044c38) linegrid_hwr_fs_pane_g1

0xd8f2,	// (0x0004d488) linegrid_hwr_fs_pane_g2_ParamLimits

0xd8f2,	// (0x0004d488) linegrid_hwr_fs_pane_g2

0x50c0,	// (0x00044c56) linegrid_hwr_fs_pane_g3_ParamLimits

0x50c0,	// (0x00044c56) linegrid_hwr_fs_pane_g3

0x1fab,	// (0x00041b41) linegrid_hwr_fs_pane_g4_ParamLimits

0x1fab,	// (0x00041b41) linegrid_hwr_fs_pane_g4

0x1fc5,	// (0x00041b5b) linegrid_hwr_fs_pane_g5_ParamLimits

0x1fc5,	// (0x00041b5b) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fb,	// (0x0004f391) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0004f391) linegrid_hwr_fs_pane_g

0x50cc,	// (0x00044c62) cell_hwr_fs_pane_g1_ParamLimits

0x50cc,	// (0x00044c62) cell_hwr_fs_pane_g1

0x4e97,	// (0x00044a2d) cell_hwr_fs_pane_g2_ParamLimits

0x4e97,	// (0x00044a2d) cell_hwr_fs_pane_g2

0xd904,	// (0x0004d49a) cell_hwr_fs_pane_g3_ParamLimits

0xd904,	// (0x0004d49a) cell_hwr_fs_pane_g3

0xd911,	// (0x0004d4a7) cell_hwr_fs_pane_g4_ParamLimits

0xd911,	// (0x0004d4a7) cell_hwr_fs_pane_g4

0x0003,

0xf806,	// (0x0004f39c) cell_hwr_fs_pane_g_ParamLimits

0xf806,	// (0x0004f39c) cell_hwr_fs_pane_g

0xc7e4,	// (0x0004c37a) cell_hwr_fs_pane_t1

0x3209,	// (0x00042d9f) grid_highlight_pane_cp6

0x3209,	// (0x00042d9f) main_idle_act2_pane

0x3cac,	// (0x00043842) aid_inside_area_popup_secondary

0xda46,	// (0x0004d5dc) aid_inside_area_window_primary_ParamLimits

0xda46,	// (0x0004d5dc) aid_inside_area_window_primary

0x68f8,	// (0x0004648e) ai2_news_ticker_pane

0x6900,	// (0x00046496) aid_size_cell_ai1_link_ParamLimits

0x6900,	// (0x00046496) aid_size_cell_ai1_link

0xde4c,	// (0x0004d9e2) popup_ai2_data_window_ParamLimits

0xde4c,	// (0x0004d9e2) popup_ai2_data_window

0x6930,	// (0x000464c6) popup_ai2_link_window_ParamLimits

0x6930,	// (0x000464c6) popup_ai2_link_window

0x5096,	// (0x00044c2c) bg_popup_sub_pane_cp4_ParamLimits

0x5096,	// (0x00044c2c) bg_popup_sub_pane_cp4

0x6944,	// (0x000464da) grid_ai2_link_pane_ParamLimits

0x6944,	// (0x000464da) grid_ai2_link_pane

0x695b,	// (0x000464f1) popup_ai2_link_window_g1_ParamLimits

0x695b,	// (0x000464f1) popup_ai2_link_window_g1

0x6967,	// (0x000464fd) popup_ai2_link_window_g2_ParamLimits

0x6967,	// (0x000464fd) popup_ai2_link_window_g2

0x0001,

0xf9d9,	// (0x0004f56f) popup_ai2_link_window_g_ParamLimits

0xf9d9,	// (0x0004f56f) popup_ai2_link_window_g

0x6976,	// (0x0004650c) ai2_mp_button_pane

0x697e,	// (0x00046514) ai2_mp_volume_pane

0x52a9,	// (0x00044e3f) bg_popup_sub_pane_cp5_ParamLimits

0x52a9,	// (0x00044e3f) bg_popup_sub_pane_cp5

0x6986,	// (0x0004651c) heading_ai2_gene_pane_ParamLimits

0x6986,	// (0x0004651c) heading_ai2_gene_pane

0x6992,	// (0x00046528) list_ai2_gene_pane_ParamLimits

0x6992,	// (0x00046528) list_ai2_gene_pane

0x69da,	// (0x00046570) cell_ai2_link_pane_ParamLimits

0x69da,	// (0x00046570) cell_ai2_link_pane

0x69f0,	// (0x00046586) cell_ai2_link_pane_g1

0x3209,	// (0x00042d9f) grid_highlight_pane_cp7

0x2321,	// (0x00041eb7) ai2_mp_volume_pane_g1

0x6ac0,	// (0x00046656) ai2_mp_volume_pane_g2

0xde76,	// (0x0004da0c) list_ai2_gene_pane_t1

0x6ac8,	// (0x0004665e) ai2_mp_volume_pane_g3

0x0002,

0xf9f2,	// (0x0004f588) ai2_mp_volume_pane_g

0x2329,	// (0x00041ebf) volume_small_pane_cp3

0x6ad0,	// (0x00046666) aid_size_cell_ai2_button

0x6ad8,	// (0x0004666e) grid_ai2_button_pane

0x6ae1,	// (0x00046677) cell_ai2_button_pane_ParamLimits

0x6ae1,	// (0x00046677) cell_ai2_button_pane

0x31ff,	// (0x00042d95) cell_ai2_button_pane_g1

0x3209,	// (0x00042d9f) grid_highlight_pane_cp8

0x6a80,	// (0x00046616) ai2_gene_pane_t1_ParamLimits

0x6a80,	// (0x00046616) ai2_gene_pane_t1

0xc0c0,	// (0x0004bc56) aid_height_parent_landscape

0xdbfa,	// (0x0004d790) aid_height_set_list

0x640b,	// (0x00045fa1) aid_size_parent

0x66dd,	// (0x00046273) aid_size_cell_graphic_pane_ParamLimits

0x69a2,	// (0x00046538) popup_ai2_data_window_g1_ParamLimits

0x69a2,	// (0x00046538) popup_ai2_data_window_g1

0x69ae,	// (0x00046544) ai2_news_ticker_pane_g1

0x69b6,	// (0x0004654c) ai2_news_ticker_pane_g2

0x0001,

0xf9de,	// (0x0004f574) ai2_news_ticker_pane_g

0x69be,	// (0x00046554) ai2_news_ticker_pane_t1

0x69cc,	// (0x00046562) ai2_news_ticker_pane_t2

0x0001,

0xf9e3,	// (0x0004f579) ai2_news_ticker_pane_t

0x69f9,	// (0x0004658f) heading_ai2_gene_pane_g1

0x6a01,	// (0x00046597) heading_ai2_gene_pane_t1_ParamLimits

0x6a01,	// (0x00046597) heading_ai2_gene_pane_t1

0x6a16,	// (0x000465ac) list_highlight_pane_cp6

0xde60,	// (0x0004d9f6) ai2_gene_pane_ParamLimits

0xde60,	// (0x0004d9f6) ai2_gene_pane

0xde84,	// (0x0004da1a) list_ai2_gene_pane_t2

0x0001,

0xf9e8,	// (0x0004f57e) list_ai2_gene_pane_t

0x6a51,	// (0x000465e7) list_highlight_pane_cp8_ParamLimits

0x6a51,	// (0x000465e7) list_highlight_pane_cp8

0x6a62,	// (0x000465f8) ai2_gene_pane_g1_ParamLimits

0x6a62,	// (0x000465f8) ai2_gene_pane_g1

0x6a74,	// (0x0004660a) ai2_gene_pane_g2_ParamLimits

0x6a74,	// (0x0004660a) ai2_gene_pane_g2

0x0001,

0xf9ed,	// (0x0004f583) ai2_gene_pane_g_ParamLimits

0xf9ed,	// (0x0004f583) ai2_gene_pane_g

0x3aeb,	// (0x00043681) scroll_pane_cp12

0xc07f,	// (0x0004bc15) control_pane_t3_ParamLimits

0xc07f,	// (0x0004bc15) control_pane_t3

0x4a55,	// (0x000445eb) status_small_pane_g8_ParamLimits

0x4a55,	// (0x000445eb) status_small_pane_g8

0xc1cb,	// (0x0004bd61) popup_find_window_ParamLimits

0xc452,	// (0x0004bfe8) popup_note_image_window_ParamLimits

0x06a6,	// (0x0004023c) list_double2_graphic_pane_vc_g1_ParamLimits

0x06a6,	// (0x0004023c) list_double2_graphic_pane_vc_g1

0x4717,	// (0x000442ad) list_double2_graphic_pane_vc_g2_ParamLimits

0x4717,	// (0x000442ad) list_double2_graphic_pane_vc_g2

0x1ec9,	// (0x00041a5f) list_double2_graphic_pane_vc_g3_ParamLimits

0x1ec9,	// (0x00041a5f) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c9,	// (0x0004f35f) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c9,	// (0x0004f35f) list_double2_graphic_pane_vc_g

0x06b2,	// (0x00040248) list_double2_graphic_pane_vc_t1_ParamLimits

0x06b2,	// (0x00040248) list_double2_graphic_pane_vc_t1

0x4717,	// (0x000442ad) list_single_heading_pane_vc_g1_ParamLimits

0x4717,	// (0x000442ad) list_single_heading_pane_vc_g1

0x1ec9,	// (0x00041a5f) list_single_heading_pane_vc_g2_ParamLimits

0x1ec9,	// (0x00041a5f) list_single_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x0004f16e) list_single_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x0004f16e) list_single_heading_pane_vc_g

0x06c8,	// (0x0004025e) list_single_heading_pane_vc_t1_ParamLimits

0x06c8,	// (0x0004025e) list_single_heading_pane_vc_t1

0x06e0,	// (0x00040276) list_single_heading_pane_vc_t2_ParamLimits

0x06e0,	// (0x00040276) list_single_heading_pane_vc_t2

0x0001,

0xf7ea,	// (0x0004f380) list_single_heading_pane_vc_t_ParamLimits

0xf7ea,	// (0x0004f380) list_single_heading_pane_vc_t

0x1f34,	// (0x00041aca) list_setting_number_pane_vc_g1_ParamLimits

0x1f34,	// (0x00041aca) list_setting_number_pane_vc_g1

0x1f40,	// (0x00041ad6) list_setting_number_pane_vc_g2_ParamLimits

0x1f40,	// (0x00041ad6) list_setting_number_pane_vc_g2

0x0001,

0xf7ef,	// (0x0004f385) list_setting_number_pane_vc_g_ParamLimits

0xf7ef,	// (0x0004f385) list_setting_number_pane_vc_g

0x06f4,	// (0x0004028a) list_setting_number_pane_vc_t1_ParamLimits

0x06f4,	// (0x0004028a) list_setting_number_pane_vc_t1

0x0708,	// (0x0004029e) list_setting_number_pane_vc_t2_ParamLimits

0x0708,	// (0x0004029e) list_setting_number_pane_vc_t2

0x0724,	// (0x000402ba) list_setting_number_pane_vc_t3_ParamLimits

0x0724,	// (0x000402ba) list_setting_number_pane_vc_t3

0x0002,

0xf7f4,	// (0x0004f38a) list_setting_number_pane_vc_t_ParamLimits

0xf7f4,	// (0x0004f38a) list_setting_number_pane_vc_t

0x0750,	// (0x000402e6) set_value_pane_vc_ParamLimits

0x0750,	// (0x000402e6) set_value_pane_vc

0x65c3,	// (0x00046159) list_double2_graphic_pane_vc_ParamLimits

0x65c3,	// (0x00046159) list_double2_graphic_pane_vc

0x0808,	// (0x0004039e) list_double2_large_graphic_pane_vc_ParamLimits

0x0808,	// (0x0004039e) list_double2_large_graphic_pane_vc

0x65c3,	// (0x00046159) list_double2_pane_vc_ParamLimits

0x65c3,	// (0x00046159) list_double2_pane_vc

0x65c3,	// (0x00046159) list_double_graphic_heading_pane_vc_ParamLimits

0x65c3,	// (0x00046159) list_double_graphic_heading_pane_vc

0x65c3,	// (0x00046159) list_double_graphic_pane_vc_ParamLimits

0x65c3,	// (0x00046159) list_double_graphic_pane_vc

0x65c3,	// (0x00046159) list_double_heading_pane_vc_ParamLimits

0x65c3,	// (0x00046159) list_double_heading_pane_vc

0x0808,	// (0x0004039e) list_double_large_graphic_pane_vc_ParamLimits

0x0808,	// (0x0004039e) list_double_large_graphic_pane_vc

0x65c3,	// (0x00046159) list_double_number_pane_vc_ParamLimits

0x65c3,	// (0x00046159) list_double_number_pane_vc

0x65c3,	// (0x00046159) list_double_pane_vc_ParamLimits

0x65c3,	// (0x00046159) list_double_pane_vc

0x65c3,	// (0x00046159) list_double_time_pane_vc_ParamLimits

0x65c3,	// (0x00046159) list_double_time_pane_vc

0x65c3,	// (0x00046159) list_setting_number_pane_vc_ParamLimits

0x65c3,	// (0x00046159) list_setting_number_pane_vc

0x65c3,	// (0x00046159) list_setting_pane_vc_ParamLimits

0x65c3,	// (0x00046159) list_setting_pane_vc

0x65c3,	// (0x00046159) list_single_graphic_heading_pane_vc_ParamLimits

0x65c3,	// (0x00046159) list_single_graphic_heading_pane_vc

0x65c3,	// (0x00046159) list_single_heading_pane_vc_ParamLimits

0x65c3,	// (0x00046159) list_single_heading_pane_vc

0x65c3,	// (0x00046159) list_single_number_heading_pane_vc_ParamLimits

0x65c3,	// (0x00046159) list_single_number_heading_pane_vc

0x06a6,	// (0x0004023c) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x06a6,	// (0x0004023c) list_double_graphic_heading_pane_vc_g1

0x4717,	// (0x000442ad) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x4717,	// (0x000442ad) list_double_graphic_heading_pane_vc_g2

0x1ec9,	// (0x00041a5f) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x1ec9,	// (0x00041a5f) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c9,	// (0x0004f35f) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c9,	// (0x0004f35f) list_double_graphic_heading_pane_vc_g

0x084c,	// (0x000403e2) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x084c,	// (0x000403e2) list_double_graphic_heading_pane_vc_t1

0x0868,	// (0x000403fe) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x0868,	// (0x000403fe) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f9,	// (0x0004f58f) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f9,	// (0x0004f58f) list_double_graphic_heading_pane_vc_t

0x1f34,	// (0x00041aca) list_setting_pane_vc_g1_ParamLimits

0x1f34,	// (0x00041aca) list_setting_pane_vc_g1

0x1f40,	// (0x00041ad6) list_setting_pane_vc_g2_ParamLimits

0x1f40,	// (0x00041ad6) list_setting_pane_vc_g2

0x0001,

0xf7ef,	// (0x0004f385) list_setting_pane_vc_g_ParamLimits

0xf7ef,	// (0x0004f385) list_setting_pane_vc_g

0x0886,	// (0x0004041c) list_setting_pane_vc_t1_ParamLimits

0x0886,	// (0x0004041c) list_setting_pane_vc_t1

0x08a2,	// (0x00040438) list_setting_pane_vc_t2_ParamLimits

0x08a2,	// (0x00040438) list_setting_pane_vc_t2

0x0001,

0xfa3c,	// (0x0004f5d2) list_setting_pane_vc_t_ParamLimits

0xfa3c,	// (0x0004f5d2) list_setting_pane_vc_t

0x0750,	// (0x000402e6) set_value_pane_cp_vc_ParamLimits

0x0750,	// (0x000402e6) set_value_pane_cp_vc

0x4717,	// (0x000442ad) list_single_number_heading_pane_vc_g1_ParamLimits

0x4717,	// (0x000442ad) list_single_number_heading_pane_vc_g1

0x1ec9,	// (0x00041a5f) list_single_number_heading_pane_vc_g2_ParamLimits

0x1ec9,	// (0x00041a5f) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x0004f16e) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x0004f16e) list_single_number_heading_pane_vc_g

0x06c8,	// (0x0004025e) list_single_number_heading_pane_vc_t1_ParamLimits

0x06c8,	// (0x0004025e) list_single_number_heading_pane_vc_t1

0x08be,	// (0x00040454) list_single_number_heading_pane_vc_t2_ParamLimits

0x08be,	// (0x00040454) list_single_number_heading_pane_vc_t2

0x08d2,	// (0x00040468) list_single_number_heading_pane_vc_t3_ParamLimits

0x08d2,	// (0x00040468) list_single_number_heading_pane_vc_t3

0x0002,

0xfa41,	// (0x0004f5d7) list_single_number_heading_pane_vc_t_ParamLimits

0xfa41,	// (0x0004f5d7) list_single_number_heading_pane_vc_t

0x06a6,	// (0x0004023c) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x06a6,	// (0x0004023c) list_single_graphic_heading_pane_vc_g1

0x4717,	// (0x000442ad) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x4717,	// (0x000442ad) list_single_graphic_heading_pane_vc_g4

0x1ec9,	// (0x00041a5f) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x1ec9,	// (0x00041a5f) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c9,	// (0x0004f35f) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c9,	// (0x0004f35f) list_single_graphic_heading_pane_vc_g

0x06c8,	// (0x0004025e) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x06c8,	// (0x0004025e) list_single_graphic_heading_pane_vc_t1

0x08e4,	// (0x0004047a) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x08e4,	// (0x0004047a) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa48,	// (0x0004f5de) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa48,	// (0x0004f5de) list_single_graphic_heading_pane_vc_t

0x4717,	// (0x000442ad) list_double2_pane_vc_g1_ParamLimits

0x4717,	// (0x000442ad) list_double2_pane_vc_g1

0x1ec9,	// (0x00041a5f) list_double2_pane_vc_g2_ParamLimits

0x1ec9,	// (0x00041a5f) list_double2_pane_vc_g2

0x0001,

0xf5d8,	// (0x0004f16e) list_double2_pane_vc_g_ParamLimits

0xf5d8,	// (0x0004f16e) list_double2_pane_vc_g

0x08f8,	// (0x0004048e) list_double2_pane_vc_t1_ParamLimits

0x08f8,	// (0x0004048e) list_double2_pane_vc_t1

0x090e,	// (0x000404a4) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x090e,	// (0x000404a4) list_double2_large_graphic_pane_vc_g1

0x091a,	// (0x000404b0) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x091a,	// (0x000404b0) list_double2_large_graphic_pane_vc_g2

0x0926,	// (0x000404bc) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x0926,	// (0x000404bc) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5f0,	// (0x0004f186) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5f0,	// (0x0004f186) list_double2_large_graphic_pane_vc_g

0x0932,	// (0x000404c8) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0932,	// (0x000404c8) list_double2_large_graphic_pane_vc_t1

0x2332,	// (0x00041ec8) list_double_time_pane_vc_g1_ParamLimits

0x2332,	// (0x00041ec8) list_double_time_pane_vc_g1

0x233e,	// (0x00041ed4) list_double_time_pane_vc_g2_ParamLimits

0x233e,	// (0x00041ed4) list_double_time_pane_vc_g2

0x0001,

0xfa4d,	// (0x0004f5e3) list_double_time_pane_vc_g_ParamLimits

0xfa4d,	// (0x0004f5e3) list_double_time_pane_vc_g

0x0948,	// (0x000404de) list_double_time_pane_vc_t1_ParamLimits

0x0948,	// (0x000404de) list_double_time_pane_vc_t1

0x096c,	// (0x00040502) list_double_time_pane_vc_t2_ParamLimits

0x096c,	// (0x00040502) list_double_time_pane_vc_t2

0x09bb,	// (0x00040551) list_double_time_pane_vc_t3_ParamLimits

0x09bb,	// (0x00040551) list_double_time_pane_vc_t3

0x09cd,	// (0x00040563) list_double_time_pane_vc_t4_ParamLimits

0x09cd,	// (0x00040563) list_double_time_pane_vc_t4

0x0003,

0xfa52,	// (0x0004f5e8) list_double_time_pane_vc_t_ParamLimits

0xfa52,	// (0x0004f5e8) list_double_time_pane_vc_t

0x4717,	// (0x000442ad) list_double_pane_vc_g1_ParamLimits

0x4717,	// (0x000442ad) list_double_pane_vc_g1

0x1ec9,	// (0x00041a5f) list_double_pane_vc_g2_ParamLimits

0x1ec9,	// (0x00041a5f) list_double_pane_vc_g2

0x0001,

0xf5d8,	// (0x0004f16e) list_double_pane_vc_g_ParamLimits

0xf5d8,	// (0x0004f16e) list_double_pane_vc_g

0x09e1,	// (0x00040577) list_double_pane_vc_t1_ParamLimits

0x09e1,	// (0x00040577) list_double_pane_vc_t1

0x09f5,	// (0x0004058b) list_double_pane_vc_t2_ParamLimits

0x09f5,	// (0x0004058b) list_double_pane_vc_t2

0x0001,

0xfa5b,	// (0x0004f5f1) list_double_pane_vc_t_ParamLimits

0xfa5b,	// (0x0004f5f1) list_double_pane_vc_t

0x4717,	// (0x000442ad) list_double_number_pane_vc_g1_ParamLimits

0x4717,	// (0x000442ad) list_double_number_pane_vc_g1

0x1ec9,	// (0x00041a5f) list_double_number_pane_vc_g2_ParamLimits

0x1ec9,	// (0x00041a5f) list_double_number_pane_vc_g2

0x0001,

0xf5d8,	// (0x0004f16e) list_double_number_pane_vc_g_ParamLimits

0xf5d8,	// (0x0004f16e) list_double_number_pane_vc_g

0x0a0d,	// (0x000405a3) list_double_number_pane_vc_t1_ParamLimits

0x0a0d,	// (0x000405a3) list_double_number_pane_vc_t1

0x0a21,	// (0x000405b7) list_double_number_pane_vc_t2_ParamLimits

0x0a21,	// (0x000405b7) list_double_number_pane_vc_t2

0x0a35,	// (0x000405cb) list_double_number_pane_vc_t3_ParamLimits

0x0a35,	// (0x000405cb) list_double_number_pane_vc_t3

0x0002,

0xfa60,	// (0x0004f5f6) list_double_number_pane_vc_t_ParamLimits

0xfa60,	// (0x0004f5f6) list_double_number_pane_vc_t

0x0a4d,	// (0x000405e3) list_double_large_graphic_pane_vc_g1_ParamLimits

0x0a4d,	// (0x000405e3) list_double_large_graphic_pane_vc_g1

0x0a5e,	// (0x000405f4) list_double_large_graphic_pane_vc_g2_ParamLimits

0x0a5e,	// (0x000405f4) list_double_large_graphic_pane_vc_g2

0x0926,	// (0x000404bc) list_double_large_graphic_pane_vc_g3_ParamLimits

0x0926,	// (0x000404bc) list_double_large_graphic_pane_vc_g3

0x0a6d,	// (0x00040603) list_double_large_graphic_pane_vc_g4_ParamLimits

0x0a6d,	// (0x00040603) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa67,	// (0x0004f5fd) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa67,	// (0x0004f5fd) list_double_large_graphic_pane_vc_g

0x0a79,	// (0x0004060f) list_double_large_graphic_pane_vc_t1_ParamLimits

0x0a79,	// (0x0004060f) list_double_large_graphic_pane_vc_t1

0x0a92,	// (0x00040628) list_double_large_graphic_pane_vc_t2_ParamLimits

0x0a92,	// (0x00040628) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa70,	// (0x0004f606) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa70,	// (0x0004f606) list_double_large_graphic_pane_vc_t

0x4717,	// (0x000442ad) list_double_heading_pane_vc_g1_ParamLimits

0x4717,	// (0x000442ad) list_double_heading_pane_vc_g1

0x1ec9,	// (0x00041a5f) list_double_heading_pane_vc_g2_ParamLimits

0x1ec9,	// (0x00041a5f) list_double_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x0004f16e) list_double_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x0004f16e) list_double_heading_pane_vc_g

0x0aab,	// (0x00040641) list_double_heading_pane_vc_t1_ParamLimits

0x0aab,	// (0x00040641) list_double_heading_pane_vc_t1

0x06c8,	// (0x0004025e) list_double_heading_pane_vc_t2_ParamLimits

0x06c8,	// (0x0004025e) list_double_heading_pane_vc_t2

0x0001,

0xfa75,	// (0x0004f60b) list_double_heading_pane_vc_t_ParamLimits

0xfa75,	// (0x0004f60b) list_double_heading_pane_vc_t

0x06a6,	// (0x0004023c) list_double_graphic_pane_vc_g1_ParamLimits

0x06a6,	// (0x0004023c) list_double_graphic_pane_vc_g1

0x234a,	// (0x00041ee0) list_double_graphic_pane_vc_g2_ParamLimits

0x234a,	// (0x00041ee0) list_double_graphic_pane_vc_g2

0x6b21,	// (0x000466b7) list_double_graphic_pane_vc_g3_ParamLimits

0x6b21,	// (0x000466b7) list_double_graphic_pane_vc_g3

0x0002,

0xfa7a,	// (0x0004f610) list_double_graphic_pane_vc_g_ParamLimits

0xfa7a,	// (0x0004f610) list_double_graphic_pane_vc_g

0x0abf,	// (0x00040655) list_double_graphic_pane_vc_t1_ParamLimits

0x0abf,	// (0x00040655) list_double_graphic_pane_vc_t1

0x0ad3,	// (0x00040669) list_double_graphic_pane_vc_t2_ParamLimits

0x0ad3,	// (0x00040669) list_double_graphic_pane_vc_t2

0x0001,

0xfa81,	// (0x0004f617) list_double_graphic_pane_vc_t_ParamLimits

0xfa81,	// (0x0004f617) list_double_graphic_pane_vc_t

0x0dd1,	// (0x00040967) aid_size_cell_fastswap

0xbc2b,	// (0x0004b7c1) aid_size_cell_touch_ParamLimits

0xbc2b,	// (0x0004b7c1) aid_size_cell_touch

0x1034,	// (0x00040bca) popup_fast_swap_wide_window_ParamLimits

0x1034,	// (0x00040bca) popup_fast_swap_wide_window

0xbd76,	// (0x0004b90c) touch_pane_ParamLimits

0xbd76,	// (0x0004b90c) touch_pane

0x3b4d,	// (0x000436e3) button_value_adjust_pane_cp2

0x0351,	// (0x0003fee7) button_value_adjust_pane_cp4

0x0375,	// (0x0003ff0b) form_field_data_pane_cp2

0xb88e,	// (0x0004b424) form_field_data_wide_pane_cp2

0x3fc0,	// (0x00043b56) bg_scroll_pane_ParamLimits

0x1478,	// (0x0004100e) scroll_handle_pane_ParamLimits

0x148c,	// (0x00041022) scroll_sc2_down_pane_ParamLimits

0x148c,	// (0x00041022) scroll_sc2_down_pane

0x3ff1,	// (0x00043b87) scroll_sc2_up_pane_ParamLimits

0x3ff1,	// (0x00043b87) scroll_sc2_up_pane

0xdfae,	// (0x0004db44) grid_wheel_folder_pane_g1_ParamLimits

0xdfae,	// (0x0004db44) grid_wheel_folder_pane_g1

0x166d,	// (0x00041203) clock_nsta_pane_cp2_ParamLimits

0x166d,	// (0x00041203) clock_nsta_pane_cp2

0x4b1e,	// (0x000446b4) listscroll_midp_pane_ParamLimits

0xd41b,	// (0x0004cfb1) midp_canvas_pane

0x4ad0,	// (0x00044666) nsta_clock_indic_pane

0x4b04,	// (0x0004469a) listscroll_form_pane_vc

0x4b0c,	// (0x000446a2) listscroll_set_pane_vc_ParamLimits

0x4b0c,	// (0x000446a2) listscroll_set_pane_vc

0xd603,	// (0x0004d199) clock_nsta_pane

0xd62d,	// (0x0004d1c3) indicator_nsta_pane

0x4f60,	// (0x00044af6) bg_popup_sub_pane_cp2_ParamLimits

0x4f74,	// (0x00044b0a) find_pane_cp2_ParamLimits

0x4f74,	// (0x00044b0a) find_pane_cp2

0x4f8a,	// (0x00044b20) grid_toobar_pane_ParamLimits

0x506a,	// (0x00044c00) list_form_gen_pane_vc_ParamLimits

0x506a,	// (0x00044c00) list_form_gen_pane_vc

0x5080,	// (0x00044c16) scroll_pane_cp8_vc_ParamLimits

0x5080,	// (0x00044c16) scroll_pane_cp8_vc

0x50fc,	// (0x00044c92) data_form_wide_pane_vc_ParamLimits

0x50fc,	// (0x00044c92) data_form_wide_pane_vc

0x5108,	// (0x00044c9e) form_field_data_wide_pane_vc_g1

0x5110,	// (0x00044ca6) form_field_data_wide_pane_vc_t1_ParamLimits

0x5110,	// (0x00044ca6) form_field_data_wide_pane_vc_t1

0x3b61,	// (0x000436f7) input_focus_pane_cp6_vc_ParamLimits

0x3b61,	// (0x000436f7) input_focus_pane_cp6_vc

0xd9a3,	// (0x0004d539) list_midp_pane_ParamLimits

0x6743,	// (0x000462d9) scroll_pane_cp16_ParamLimits

0x6743,	// (0x000462d9) scroll_pane_cp16

0x5496,	// (0x0004502c) button_value_adjust_pane_ParamLimits

0x5496,	// (0x0004502c) button_value_adjust_pane

0xdc0b,	// (0x0004d7a1) button_value_adjust_pane_cp6_ParamLimits

0xdc0b,	// (0x0004d7a1) button_value_adjust_pane_cp6

0xdd25,	// (0x0004d8bb) settings_code_pane_cp_ParamLimits

0xdd25,	// (0x0004d8bb) settings_code_pane_cp

0x31ff,	// (0x00042d95) cell_touch_pane_g1

0x31ff,	// (0x00042d95) cell_touch_pane_g2

0x0001,

0xf70e,	// (0x0004f2a4) cell_touch_pane_g

0xde92,	// (0x0004da28) cell_touch_pane_cp_ParamLimits

0xde92,	// (0x0004da28) cell_touch_pane_cp

0xdeae,	// (0x0004da44) cell_touch_pane_ParamLimits

0xdeae,	// (0x0004da44) cell_touch_pane

0x31ff,	// (0x00042d95) scroll_sc2_down_pane_g1

0x31ff,	// (0x00042d95) scroll_sc2_up_pane_g1

0x3209,	// (0x00042d9f) bg_set_opt_pane_cp4_vc

0x6b15,	// (0x000466ab) list_set_graphic_pane_vc_g1_ParamLimits

0x6b15,	// (0x000466ab) list_set_graphic_pane_vc_g1

0x6b21,	// (0x000466b7) list_set_graphic_pane_vc_g2_ParamLimits

0x6b21,	// (0x000466b7) list_set_graphic_pane_vc_g2

0x0001,

0xf9fe,	// (0x0004f594) list_set_graphic_pane_vc_g_ParamLimits

0xf9fe,	// (0x0004f594) list_set_graphic_pane_vc_g

0x6b2d,	// (0x000466c3) text_primary_small_cp13_vc_ParamLimits

0x6b2d,	// (0x000466c3) text_primary_small_cp13_vc

0x6b45,	// (0x000466db) list_set_graphic_pane_vc_ParamLimits

0x6b45,	// (0x000466db) list_set_graphic_pane_vc

0x3209,	// (0x00042d9f) input_focus_pane_cp2_vc

0x31ff,	// (0x00042d95) setting_code_pane_vc_g1

0x3334,	// (0x00042eca) setting_code_pane_vc_t1

0x6b57,	// (0x000466ed) set_text_pane_vc_t1_ParamLimits

0x6b57,	// (0x000466ed) set_text_pane_vc_t1

0x3209,	// (0x00042d9f) input_focus_pane_cp1_vc

0x6b73,	// (0x00046709) list_set_text_pane_vc

0x31ff,	// (0x00042d95) setting_text_pane_vc_g1

0x3209,	// (0x00042d9f) bg_set_opt_pane_cp2_vc

0x332b,	// (0x00042ec1) setting_slider_graphic_pane_vc_g1

0x6b7d,	// (0x00046713) setting_slider_graphic_pane_vc_t1

0x6b8d,	// (0x00046723) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa03,	// (0x0004f599) setting_slider_graphic_pane_vc_t

0x6b9d,	// (0x00046733) slider_set_pane_cp_vc

0x6ba5,	// (0x0004673b) slider_set_pane_vc_g1

0x6bae,	// (0x00046744) slider_set_pane_vc_g2

0x0006,

0xfa08,	// (0x0004f59e) slider_set_pane_vc_g

0x3bb0,	// (0x00043746) set_opt_bg_pane_g1_copy1

0x3bb8,	// (0x0004374e) set_opt_bg_pane_g2_copy1

0x6bda,	// (0x00046770) set_opt_bg_pane_g3_copy1

0x3bc8,	// (0x0004375e) set_opt_bg_pane_g4_copy1

0x3bd0,	// (0x00043766) set_opt_bg_pane_g5_copy1

0x3bd8,	// (0x0004376e) set_opt_bg_pane_g6_copy1

0x6be4,	// (0x0004677a) set_opt_bg_pane_g7_copy1

0x6bec,	// (0x00046782) set_opt_bg_pane_g8_copy1

0x6bf6,	// (0x0004678c) set_opt_bg_pane_g9_copy1

0x3209,	// (0x00042d9f) bg_set_opt_pane_cp_vc

0x6c00,	// (0x00046796) setting_slider_pane_vc_t1

0x6c0f,	// (0x000467a5) setting_slider_pane_vc_t2

0x6c1f,	// (0x000467b5) setting_slider_pane_vc_t3

0x0002,

0xfa17,	// (0x0004f5ad) setting_slider_pane_vc_t

0x6c2f,	// (0x000467c5) slider_set_pane_vc

0x1fe9,	// (0x00041b7f) volume_set_pane_vc_g1

0x1ff2,	// (0x00041b88) volume_set_pane_vc_g2

0x1ffb,	// (0x00041b91) volume_set_pane_vc_g3

0x2004,	// (0x00041b9a) volume_set_pane_vc_g4

0x200d,	// (0x00041ba3) volume_set_pane_vc_g5

0x2016,	// (0x00041bac) volume_set_pane_vc_g6

0x201f,	// (0x00041bb5) volume_set_pane_vc_g7

0x2028,	// (0x00041bbe) volume_set_pane_vc_g8

0x2031,	// (0x00041bc7) volume_set_pane_vc_g9

0x203a,	// (0x00041bd0) volume_set_pane_vc_g10

0x0009,

0xfa1e,	// (0x0004f5b4) volume_set_pane_vc_g

0x6c37,	// (0x000467cd) volume_set_pane_vc

0x6c3f,	// (0x000467d5) button_value_adjust_pane_cp1_vc

0x6c49,	// (0x000467df) list_highlight_pane_cp2_vc

0x6c52,	// (0x000467e8) list_set_pane_vc_ParamLimits

0x6c52,	// (0x000467e8) list_set_pane_vc

0x6cb0,	// (0x00046846) main_pane_set_vc_t1_ParamLimits

0x6cb0,	// (0x00046846) main_pane_set_vc_t1

0x6cc5,	// (0x0004685b) main_pane_set_vc_t2_ParamLimits

0x6cc5,	// (0x0004685b) main_pane_set_vc_t2

0x6cd7,	// (0x0004686d) main_pane_set_vc_t3_ParamLimits

0x6cd7,	// (0x0004686d) main_pane_set_vc_t3

0x6ceb,	// (0x00046881) main_pane_set_vc_t4_ParamLimits

0x6ceb,	// (0x00046881) main_pane_set_vc_t4

0x0003,

0xfa33,	// (0x0004f5c9) main_pane_set_vc_t_ParamLimits

0xfa33,	// (0x0004f5c9) main_pane_set_vc_t

0x6cff,	// (0x00046895) setting_code_pane_vc_ParamLimits

0x6cff,	// (0x00046895) setting_code_pane_vc

0x6d10,	// (0x000468a6) setting_slider_graphic_pane_vc

0x6d10,	// (0x000468a6) setting_slider_pane_vc

0x6d10,	// (0x000468a6) setting_text_pane_vc

0x6d10,	// (0x000468a6) setting_volume_pane_vc

0x6d1a,	// (0x000468b0) scroll_pane_cp121_vc

0x3b3b,	// (0x000436d1) set_content_pane_vc

0x6d22,	// (0x000468b8) button_value_adjust_pane_g1

0x6d2b,	// (0x000468c1) button_value_adjust_pane_g2

0x0001,

0xfa86,	// (0x0004f61c) button_value_adjust_pane_g

0x6d34,	// (0x000468ca) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6d34,	// (0x000468ca) form_field_slider_wide_pane_vc_t1

0x6d48,	// (0x000468de) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6d48,	// (0x000468de) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8b,	// (0x0004f621) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8b,	// (0x0004f621) form_field_slider_wide_pane_vc_t

0x3564,	// (0x000430fa) input_focus_pane_cp10_vc_ParamLimits

0x3564,	// (0x000430fa) input_focus_pane_cp10_vc

0x6d76,	// (0x0004690c) slider_cont_pane_cp1_vc_ParamLimits

0x6d76,	// (0x0004690c) slider_cont_pane_cp1_vc

0x6d88,	// (0x0004691e) slider_form_pane_g1_cp2

0x6bae,	// (0x00046744) slider_form_pane_g2_cp2

0x6db5,	// (0x0004694b) form_field_slider_pane_vc_t3

0x6dc3,	// (0x00046959) form_field_slider_pane_vc_t4

0x6dd1,	// (0x00046967) slider_form_pane_vc_ParamLimits

0x6dd1,	// (0x00046967) slider_form_pane_vc

0x6dde,	// (0x00046974) form_field_slider_pane_vc_t1_ParamLimits

0x6dde,	// (0x00046974) form_field_slider_pane_vc_t1

0x6d48,	// (0x000468de) form_field_slider_pane_vc_t2_ParamLimits

0x6d48,	// (0x000468de) form_field_slider_pane_vc_t2

0x0001,

0xfa9d,	// (0x0004f633) form_field_slider_pane_vc_t_ParamLimits

0xfa9d,	// (0x0004f633) form_field_slider_pane_vc_t

0x3564,	// (0x000430fa) input_focus_pane_cp9_vc_ParamLimits

0x3564,	// (0x000430fa) input_focus_pane_cp9_vc

0x6dfa,	// (0x00046990) slider_cont_pane_vc_ParamLimits

0x6dfa,	// (0x00046990) slider_cont_pane_vc

0x6e0e,	// (0x000469a4) list_form_graphic_pane_cp_vc_ParamLimits

0x6e0e,	// (0x000469a4) list_form_graphic_pane_cp_vc

0x5108,	// (0x00044c9e) form_field_popup_wide_pane_vc_g1

0x6e23,	// (0x000469b9) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6e23,	// (0x000469b9) form_field_popup_wide_pane_vc_t1

0x3b61,	// (0x000436f7) input_focus_pane_cp8_vc_ParamLimits

0x3b61,	// (0x000436f7) input_focus_pane_cp8_vc

0x6e68,	// (0x000469fe) list_form_wide_pane_vc_ParamLimits

0x6e68,	// (0x000469fe) list_form_wide_pane_vc

0x6e74,	// (0x00046a0a) list_form_graphic_pane_vc_g1

0x6e7c,	// (0x00046a12) list_form_graphic_pane_vc_t1_ParamLimits

0x6e7c,	// (0x00046a12) list_form_graphic_pane_vc_t1

0x32e9,	// (0x00042e7f) list_highlight_pane_cp5_vc_ParamLimits

0x32e9,	// (0x00042e7f) list_highlight_pane_cp5_vc

0x6e98,	// (0x00046a2e) list_form_graphic_pane_vc_ParamLimits

0x6e98,	// (0x00046a2e) list_form_graphic_pane_vc

0x5108,	// (0x00044c9e) form_field_popup_pane_vc_g1

0x6eae,	// (0x00046a44) form_field_popup_pane_vc_t1_ParamLimits

0x6eae,	// (0x00046a44) form_field_popup_pane_vc_t1

0x3b61,	// (0x000436f7) input_focus_pane_cp7_vc_ParamLimits

0x3b61,	// (0x000436f7) input_focus_pane_cp7_vc

0x6ec5,	// (0x00046a5b) list_form_pane_vc_ParamLimits

0x6ec5,	// (0x00046a5b) list_form_pane_vc

0x6ed1,	// (0x00046a67) data_form_pane_vc_t1_ParamLimits

0x6ed1,	// (0x00046a67) data_form_pane_vc_t1

0x3bb0,	// (0x00043746) input_focus_pane_vc_g1

0x3bb8,	// (0x0004374e) input_focus_pane_vc_g2

0x3bc0,	// (0x00043756) input_focus_pane_vc_g3

0x3bc8,	// (0x0004375e) input_focus_pane_vc_g4

0x3bd0,	// (0x00043766) input_focus_pane_vc_g5

0x3bd8,	// (0x0004376e) input_focus_pane_vc_g6

0x3be0,	// (0x00043776) input_focus_pane_vc_g7

0x3be8,	// (0x0004377e) input_focus_pane_vc_g8

0x3bf0,	// (0x00043786) input_focus_pane_vc_g9

0x31ff,	// (0x00042d95) input_focus_pane_vc_g10

0x0009,

0xf697,	// (0x0004f22d) input_focus_pane_vc_g

0x50fc,	// (0x00044c92) data_form_pane_vc_ParamLimits

0x50fc,	// (0x00044c92) data_form_pane_vc

0x5108,	// (0x00044c9e) form_field_data_pane_vc_g1

0x6eec,	// (0x00046a82) form_field_data_pane_vc_t1_ParamLimits

0x6eec,	// (0x00046a82) form_field_data_pane_vc_t1

0x3b61,	// (0x000436f7) input_focus_pane_vc_ParamLimits

0x3b61,	// (0x000436f7) input_focus_pane_vc

0x6f06,	// (0x00046a9c) button_value_adjust_pane_cp3_vc

0x6f0e,	// (0x00046aa4) button_value_adjust_pane_cp5_vc

0x6f16,	// (0x00046aac) form_field_data_pane_vc_ParamLimits

0x6f16,	// (0x00046aac) form_field_data_pane_vc

0x6f2d,	// (0x00046ac3) form_field_data_pane_vc_cp2

0x6f35,	// (0x00046acb) form_field_data_wide_pane_vc_ParamLimits

0x6f35,	// (0x00046acb) form_field_data_wide_pane_vc

0x6f4b,	// (0x00046ae1) form_field_data_wide_pane_vc_cp2

0x6f53,	// (0x00046ae9) form_field_popup_pane_vc_ParamLimits

0x6f53,	// (0x00046ae9) form_field_popup_pane_vc

0x6f6a,	// (0x00046b00) form_field_popup_wide_pane_vc_ParamLimits

0x6f6a,	// (0x00046b00) form_field_popup_wide_pane_vc

0x6f80,	// (0x00046b16) form_field_slider_pane_vc_ParamLimits

0x6f80,	// (0x00046b16) form_field_slider_pane_vc

0x6f93,	// (0x00046b29) form_field_slider_wide_pane_vc_ParamLimits

0x6f93,	// (0x00046b29) form_field_slider_wide_pane_vc

0xdecc,	// (0x0004da62) grid_touch_1_pane_ParamLimits

0xdecc,	// (0x0004da62) grid_touch_1_pane

0xdee0,	// (0x0004da76) grid_touch_2_pane_ParamLimits

0xdee0,	// (0x0004da76) grid_touch_2_pane

0x7068,	// (0x00046bfe) touch_pane_g1_ParamLimits

0x7068,	// (0x00046bfe) touch_pane_g1

0x6fca,	// (0x00046b60) cell_app_pane_cp_wide_ParamLimits

0x6fca,	// (0x00046b60) cell_app_pane_cp_wide

0x6fdb,	// (0x00046b71) grid_popup_fast_wide_pane_ParamLimits

0x6fdb,	// (0x00046b71) grid_popup_fast_wide_pane

0x6fef,	// (0x00046b85) scroll_pane_cp19_ParamLimits

0x6fef,	// (0x00046b85) scroll_pane_cp19

0x3209,	// (0x00042d9f) bg_popup_window_pane_cp20

0x7003,	// (0x00046b99) listscroll_popup_fast_wide_pane

0x3d18,	// (0x000438ae) grid_indicator_nsta_pane

0x700b,	// (0x00046ba1) clock_nsta_pane_g1

0x7014,	// (0x00046baa) clock_nsta_pane_t1

0xdf0a,	// (0x0004daa0) cell_indicator_nsta_pane_ParamLimits

0xdf0a,	// (0x0004daa0) cell_indicator_nsta_pane

0x7068,	// (0x00046bfe) cell_indicator_nsta_pane_g1

0xdf23,	// (0x0004dab9) cell_indicator_nsta_pane_g2

0x0001,

0xfaae,	// (0x0004f644) cell_indicator_nsta_pane_g

0x708c,	// (0x00046c22) clock_nsta_pane_cp

0x7094,	// (0x00046c2a) indicator_nsta_pane_cp

0x709c,	// (0x00046c32) nsta_clock_indic_pane_g1

0x33b2,	// (0x00042f48) grid_indicator_pane

0x40e6,	// (0x00043c7c) scroll_pane_cp29

0x15bc,	// (0x00041152) indicator_nsta_pane_cp2_ParamLimits

0x15bc,	// (0x00041152) indicator_nsta_pane_cp2

0x32e9,	// (0x00042e7f) main_apps_wheel_pane

0x531d,	// (0x00044eb3) form_midp_field_text_pane_ParamLimits

0x5468,	// (0x00044ffe) scroll_bar_cp050_ParamLimits

0x70f5,	// (0x00046c8b) cell_indicator_pane_ParamLimits

0x70f5,	// (0x00046c8b) cell_indicator_pane

0x710c,	// (0x00046ca2) cell_indicator_pane_g1

0xdf38,	// (0x0004dace) grid_wheel_folder_pane_ParamLimits

0xdf38,	// (0x0004dace) grid_wheel_folder_pane

0xdf46,	// (0x0004dadc) list_wheel_apps_pane_ParamLimits

0xdf46,	// (0x0004dadc) list_wheel_apps_pane

0xdf54,	// (0x0004daea) main_apps_wheel_pane_g1_ParamLimits

0xdf54,	// (0x0004daea) main_apps_wheel_pane_g1

0xdf60,	// (0x0004daf6) main_apps_wheel_pane_g2_ParamLimits

0xdf60,	// (0x0004daf6) main_apps_wheel_pane_g2

0x0001,

0xfaca,	// (0x0004f660) main_apps_wheel_pane_g_ParamLimits

0xfaca,	// (0x0004f660) main_apps_wheel_pane_g

0xdf6e,	// (0x0004db04) main_apps_wheel_pane_t1_ParamLimits

0xdf6e,	// (0x0004db04) main_apps_wheel_pane_t1

0xdf82,	// (0x0004db18) list_wheel_apps_pane_g1

0xdf8a,	// (0x0004db20) list_wheel_apps_pane_g2

0xdf92,	// (0x0004db28) list_wheel_apps_pane_g3

0xdf9a,	// (0x0004db30) list_wheel_apps_pane_g4

0xdfa4,	// (0x0004db3a) list_wheel_apps_pane_g5

0x0004,

0xfacf,	// (0x0004f665) list_wheel_apps_pane_g

0x465e,	// (0x000441f4) navi_icon_text_pane

0xd4f7,	// (0x0004d08d) aid_fill_nsta

0xdfbb,	// (0x0004db51) navi_icon_text_pane_g1

0x71dd,	// (0x00046d73) navi_icon_text_pane_t1

0xd381,	// (0x0004cf17) list_set_graphic_pane_t1_ParamLimits

0xd381,	// (0x0004cf17) list_set_graphic_pane_t1

0x5bb7,	// (0x0004574d) popup_midp_note_alarm_window_t6_ParamLimits

0x5bb7,	// (0x0004574d) popup_midp_note_alarm_window_t6

0x5bc9,	// (0x0004575f) popup_midp_note_alarm_window_t7_ParamLimits

0x5bc9,	// (0x0004575f) popup_midp_note_alarm_window_t7

0x5bdb,	// (0x00045771) popup_midp_note_alarm_window_t8_ParamLimits

0x5bdb,	// (0x00045771) popup_midp_note_alarm_window_t8

0x5bed,	// (0x00045783) popup_midp_note_alarm_window_t9_ParamLimits

0x5bed,	// (0x00045783) popup_midp_note_alarm_window_t9

0x5bff,	// (0x00045795) popup_midp_note_alarm_window_t10_ParamLimits

0x5bff,	// (0x00045795) popup_midp_note_alarm_window_t10

0x5c11,	// (0x000457a7) popup_midp_note_alarm_window_t11_ParamLimits

0x5c11,	// (0x000457a7) popup_midp_note_alarm_window_t11

0x5c23,	// (0x000457b9) scroll_pane_cp17_ParamLimits

0x5c23,	// (0x000457b9) scroll_pane_cp17

0x1fe9,	// (0x00041b7f) volume_small_pane_cp_g1

0x2359,	// (0x00041eef) volume_small_pane_cp_g2

0x2362,	// (0x00041ef8) volume_small_pane_cp_g3

0x236b,	// (0x00041f01) volume_small_pane_cp_g4

0x2374,	// (0x00041f0a) volume_small_pane_cp_g5

0x237d,	// (0x00041f13) volume_small_pane_cp_g6

0x2386,	// (0x00041f1c) volume_small_pane_cp_g7

0x238f,	// (0x00041f25) volume_small_pane_cp_g8

0x2398,	// (0x00041f2e) volume_small_pane_cp_g9

0x23a1,	// (0x00041f37) volume_small_pane_cp_g10

0x48ad,	// (0x00044443) midp_ticker_pane_g1_ParamLimits

0x48b9,	// (0x0004444f) midp_ticker_pane_g2_ParamLimits

0xf763,	// (0x0004f2f9) midp_ticker_pane_g_ParamLimits

0x48c5,	// (0x0004445b) midp_ticker_pane_t1_ParamLimits

0xd51b,	// (0x0004d0b1) aid_fill_nsta_2

0x5454,	// (0x00044fea) list_form2_midp_pane

0x6592,	// (0x00046128) midp_editing_number_pane_ParamLimits

0x65a1,	// (0x00046137) midp_ticker_pane_ParamLimits

0x71ef,	// (0x00046d85) form2_midp_field_pane

0x7213,	// (0x00046da9) scroll_pane_cp51

0x7233,	// (0x00046dc9) form2_midp_button_pane_ParamLimits

0x7233,	// (0x00046dc9) form2_midp_button_pane

0x7245,	// (0x00046ddb) form2_midp_content_pane_ParamLimits

0x7245,	// (0x00046ddb) form2_midp_content_pane

0x725f,	// (0x00046df5) form2_midp_field_choice_group_pane

0x7267,	// (0x00046dfd) form2_midp_field_pane_g1

0x726f,	// (0x00046e05) form2_midp_field_pane_g2

0x7277,	// (0x00046e0d) form2_midp_field_pane_g3

0x727f,	// (0x00046e15) form2_midp_field_pane_g4

0x0003,

0xfaf4,	// (0x0004f68a) form2_midp_field_pane_g

0x7287,	// (0x00046e1d) form2_midp_gauge_slider_pane

0x728f,	// (0x00046e25) form2_midp_gauge_wait_pane

0x7297,	// (0x00046e2d) form2_midp_image_pane_ParamLimits

0x7297,	// (0x00046e2d) form2_midp_image_pane

0x72b2,	// (0x00046e48) form2_midp_label_pane_ParamLimits

0x72b2,	// (0x00046e48) form2_midp_label_pane

0xdfe3,	// (0x0004db79) form2_midp_label_pane_cp_ParamLimits

0xdfe3,	// (0x0004db79) form2_midp_label_pane_cp

0x72ec,	// (0x00046e82) form2_midp_string_pane_ParamLimits

0x72ec,	// (0x00046e82) form2_midp_string_pane

0xbab3,	// (0x0004b649) form2_midp_text_pane_ParamLimits

0xbab3,	// (0x0004b649) form2_midp_text_pane

0x72fe,	// (0x00046e94) form2_midp_time_pane

0x730e,	// (0x00046ea4) input_focus_pane_cp51_ParamLimits

0x730e,	// (0x00046ea4) input_focus_pane_cp51

0x7326,	// (0x00046ebc) form2_midp_label_pane_t1_ParamLimits

0x7326,	// (0x00046ebc) form2_midp_label_pane_t1

0xbad2,	// (0x0004b668) form2_mdip_text_pane_t1_ParamLimits

0xbad2,	// (0x0004b668) form2_mdip_text_pane_t1

0x0b28,	// (0x000406be) form2_midp_time_pane_t1

0x736f,	// (0x00046f05) form2_midp_gauge_slider_pane_t1

0xe002,	// (0x0004db98) form2_midp_gauge_slider_pane_t2

0xe014,	// (0x0004dbaa) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafd,	// (0x0004f693) form2_midp_gauge_slider_pane_t

0x73a5,	// (0x00046f3b) form2_midp_slider_pane

0x73b1,	// (0x00046f47) form2_midp_gauge_wait_pane_t1

0x73bf,	// (0x00046f55) form2_midp_wait_pane_ParamLimits

0x73bf,	// (0x00046f55) form2_midp_wait_pane

0xe026,	// (0x0004dbbc) list_single_2graphic_pane_cp4_ParamLimits

0xe026,	// (0x0004dbbc) list_single_2graphic_pane_cp4

0xd931,	// (0x0004d4c7) list_single_midp_graphic_pane_cp_ParamLimits

0xd931,	// (0x0004d4c7) list_single_midp_graphic_pane_cp

0x3209,	// (0x00042d9f) list_highlight_pane_cp20

0x7419,	// (0x00046faf) list_single_2graphic_pane_g1_cp4

0x7421,	// (0x00046fb7) list_single_2graphic_pane_g2_cp4

0x7429,	// (0x00046fbf) list_single_2graphic_pane_t1_cp4

0x32e9,	// (0x00042e7f) list_highlight_pane_cp21

0x7438,	// (0x00046fce) list_single_midp_graphic_pane_g4_cp

0x7447,	// (0x00046fdd) list_single_midp_graphic_pane_t1_cp

0xe03a,	// (0x0004dbd0) form2_mdip_string_pane_t1_ParamLimits

0xe03a,	// (0x0004dbd0) form2_mdip_string_pane_t1

0x3209,	// (0x00042d9f) bg_wml_button_pane_cp2

0x31ff,	// (0x00042d95) form2_midp_image_pane_g1

0x12ae,	// (0x00040e44) list_double_large_graphic_pane_g5_ParamLimits

0x12ae,	// (0x00040e44) list_double_large_graphic_pane_g5

0x4b1e,	// (0x000446b4) midp_form_pane_ParamLimits

0x32e9,	// (0x00042e7f) main_apps_wheel_pane_ParamLimits

0xc4d0,	// (0x0004c066) popup_preview_window_ParamLimits

0xc4d0,	// (0x0004c066) popup_preview_window

0x1e44,	// (0x000419da) popup_touch_info_window_ParamLimits

0x1e44,	// (0x000419da) popup_touch_info_window

0x1e62,	// (0x000419f8) popup_touch_menu_window_ParamLimits

0x1e62,	// (0x000419f8) popup_touch_menu_window

0x31f5,	// (0x00042d8b) bg_popup_sub_pane_cp6

0x7555,	// (0x000470eb) list_touch_menu_pane

0x755d,	// (0x000470f3) list_single_touch_menu_pane_ParamLimits

0x755d,	// (0x000470f3) list_single_touch_menu_pane

0x7573,	// (0x00047109) list_single_touch_menu_pane_t1

0x32e9,	// (0x00042e7f) bg_popup_sub_pane_cp7_ParamLimits

0x32e9,	// (0x00042e7f) bg_popup_sub_pane_cp7

0x7581,	// (0x00047117) heading_sub_pane

0x7589,	// (0x0004711f) list_touch_info_pane_ParamLimits

0x7589,	// (0x0004711f) list_touch_info_pane

0x7598,	// (0x0004712e) list_single_touch_info_pane_ParamLimits

0x7598,	// (0x0004712e) list_single_touch_info_pane

0x75aa,	// (0x00047140) list_single_touch_info_pane_t1

0x75b8,	// (0x0004714e) list_single_touch_info_pane_t2

0x0001,

0xfb0b,	// (0x0004f6a1) list_single_touch_info_pane_t

0x47de,	// (0x00044374) bg_popup_heading_pane_cp

0x75c6,	// (0x0004715c) heading_sub_pane_t1

0x5096,	// (0x00044c2c) bg_popup_preview_window_pane_cp_ParamLimits

0x5096,	// (0x00044c2c) bg_popup_preview_window_pane_cp

0x7581,	// (0x00047117) heading_preview_pane

0x7589,	// (0x0004711f) list_preview_pane_ParamLimits

0x7589,	// (0x0004711f) list_preview_pane

0x75d4,	// (0x0004716a) popup_preview_window_g1

0x7598,	// (0x0004712e) list_single_preview_pane_ParamLimits

0x7598,	// (0x0004712e) list_single_preview_pane

0x75dc,	// (0x00047172) list_single_preview_pane_g1

0x75e4,	// (0x0004717a) list_single_preview_pane_t1

0x75aa,	// (0x00047140) list_single_preview_pane_t2

0x0001,

0xfb10,	// (0x0004f6a6) list_single_preview_pane_t

0x75f2,	// (0x00047188) bg_popup_heading_pane_cp2_ParamLimits

0x75f2,	// (0x00047188) bg_popup_heading_pane_cp2

0x7608,	// (0x0004719e) heading_preview_pane_g1

0x7610,	// (0x000471a6) heading_preview_pane_t1_ParamLimits

0x7610,	// (0x000471a6) heading_preview_pane_t1

0x33d5,	// (0x00042f6b) soft_indicator_pane_t1_ParamLimits

0x3ac8,	// (0x0004365e) scroll_pane_ParamLimits

0x3fdf,	// (0x00043b75) scroll_sc2_left_pane

0x3fe8,	// (0x00043b7e) scroll_sc2_right_pane

0x4007,	// (0x00043b9d) scroll_bg_pane_g1_ParamLimits

0x401c,	// (0x00043bb2) scroll_bg_pane_g2_ParamLimits

0x4034,	// (0x00043bca) scroll_bg_pane_g3_ParamLimits

0xf6ee,	// (0x0004f284) scroll_bg_pane_g_ParamLimits

0x4007,	// (0x00043b9d) scroll_handle_pane_g1_ParamLimits

0x4056,	// (0x00043bec) scroll_handle_pane_g2_ParamLimits

0x4034,	// (0x00043bca) scroll_handle_pane_g3_ParamLimits

0xf6f5,	// (0x0004f28b) scroll_handle_pane_g_ParamLimits

0x190c,	// (0x000414a2) popup_choice_list_window_ParamLimits

0x190c,	// (0x000414a2) popup_choice_list_window

0x4f6c,	// (0x00044b02) choice_list_pane

0x4fee,	// (0x00044b84) cell_toolbar_pane_t1

0x5016,	// (0x00044bac) toolbar_button_pane_ParamLimits

0x60dd,	// (0x00045c73) ai_gene_pane_1_t2_ParamLimits

0x60dd,	// (0x00045c73) ai_gene_pane_1_t2

0x0001,

0xf918,	// (0x0004f4ae) ai_gene_pane_1_t_ParamLimits

0xf918,	// (0x0004f4ae) ai_gene_pane_1_t

0x762d,	// (0x000471c3) scroll_sc2_left_pane_g1

0x762d,	// (0x000471c3) scroll_sc2_right_pane_g1

0x4b1e,	// (0x000446b4) bg_popup_sub_pane_cp10

0x7637,	// (0x000471cd) list_choice_list_pane

0x7650,	// (0x000471e6) list_single_choice_list_pane_ParamLimits

0x7650,	// (0x000471e6) list_single_choice_list_pane

0x7663,	// (0x000471f9) list_single_choice_list_pane_g1

0x3ce9,	// (0x0004387f) list_single_choice_list_pane_t1_ParamLimits

0x3ce9,	// (0x0004387f) list_single_choice_list_pane_t1

0x766b,	// (0x00047201) choice_list_pane_g1

0x7673,	// (0x00047209) choice_list_pane_t1

0x31f5,	// (0x00042d8b) input_focus_pane_cp11

0x3ec0,	// (0x00043a56) title_pane_stacon_g2_ParamLimits

0x3ec0,	// (0x00043a56) title_pane_stacon_g2

0x0002,

0xf6d4,	// (0x0004f26a) title_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0004f26a) title_pane_stacon_g

0x47de,	// (0x00044374) cursor_press_pane

0xc183,	// (0x0004bd19) popup_fep_hwr_window_ParamLimits

0xc183,	// (0x0004bd19) popup_fep_hwr_window

0x1a32,	// (0x000415c8) popup_fep_vkb_window_ParamLimits

0x1a32,	// (0x000415c8) popup_fep_vkb_window

0x7681,	// (0x00047217) cursor_press_pane_g1

0x0002,

0xfb39,	// (0x0004f6cf) fep_vkb_side_pane_g_ParamLimits

0x23e3,	// (0x00041f79) fep_hwr_candidate_pane_ParamLimits

0x23e3,	// (0x00041f79) fep_hwr_candidate_pane

0x240d,	// (0x00041fa3) fep_hwr_side_pane_ParamLimits

0x240d,	// (0x00041fa3) fep_hwr_side_pane

0x242d,	// (0x00041fc3) fep_hwr_top_pane_ParamLimits

0x242d,	// (0x00041fc3) fep_hwr_top_pane

0x2445,	// (0x00041fdb) fep_hwr_write_pane_ParamLimits

0x2445,	// (0x00041fdb) fep_hwr_write_pane

0xfb39,	// (0x0004f6cf) fep_vkb_side_pane_g

0x7689,	// (0x0004721f) fep_hwr_top_pane_g1

0x769b,	// (0x00047231) fep_hwr_top_pane_g2

0x2471,	// (0x00042007) fep_hwr_top_pane_g3

0x0002,

0xfb15,	// (0x0004f6ab) fep_hwr_top_pane_g

0x2486,	// (0x0004201c) fep_hwr_top_text_pane

0x41d6,	// (0x00043d6c) fep_hwr_top_text_pane_g1

0x76d1,	// (0x00047267) fep_hwr_top_text_pane_t1

0x257c,	// (0x00042112) fep_hwr_candidate_pane_g1

0x7924,	// (0x000474ba) fep_vkb_keypad_pane_g3_ParamLimits

0x7924,	// (0x000474ba) fep_vkb_keypad_pane_g3

0x794c,	// (0x000474e2) fep_vkb_keypad_pane_g4_ParamLimits

0x794c,	// (0x000474e2) fep_vkb_keypad_pane_g4

0x79bb,	// (0x00047551) fep_vkb_bottom_pane_g2_ParamLimits

0x79bb,	// (0x00047551) fep_vkb_bottom_pane_g2

0x0001,

0xfb40,	// (0x0004f6d6) fep_vkb_bottom_pane_g_ParamLimits

0xfb40,	// (0x0004f6d6) fep_vkb_bottom_pane_g

0x762d,	// (0x000471c3) cell_vkb_side_pane_g2

0x0001,

0xfb4a,	// (0x0004f6e0) cell_vkb_side_pane_g

0x7a46,	// (0x000475dc) cell_vkb_side_pane_t1

0x7a54,	// (0x000475ea) cell_vkb_side_pane_t1_copy1

0x762d,	// (0x000471c3) bg_fep_vkb_candidate_pane_g2

0x7b80,	// (0x00047716) cell_vkb_candidate_pane_ParamLimits

0x76df,	// (0x00047275) aid_size_cell_vkb_ParamLimits

0x76df,	// (0x00047275) aid_size_cell_vkb

0x7b80,	// (0x00047716) cell_vkb_candidate_pane

0x2596,	// (0x0004212c) bg_popup_fep_shadow_pane_g1

0xe0e6,	// (0x0004dc7c) fep_vkb_bottom_pane_ParamLimits

0xe0e6,	// (0x0004dc7c) fep_vkb_bottom_pane

0x77a3,	// (0x00047339) fep_vkb_candidate_pane_ParamLimits

0x77a3,	// (0x00047339) fep_vkb_candidate_pane

0xe10b,	// (0x0004dca1) fep_vkb_keypad_pane_ParamLimits

0xe10b,	// (0x0004dca1) fep_vkb_keypad_pane

0xe147,	// (0x0004dcdd) fep_vkb_side_pane_ParamLimits

0xe147,	// (0x0004dcdd) fep_vkb_side_pane

0xe183,	// (0x0004dd19) fep_vkb_top_pane_ParamLimits

0xe183,	// (0x0004dd19) fep_vkb_top_pane

0x787d,	// (0x00047413) fep_vkb_top_pane_g1_ParamLimits

0x787d,	// (0x00047413) fep_vkb_top_pane_g1

0x788c,	// (0x00047422) fep_vkb_top_pane_g2_ParamLimits

0x788c,	// (0x00047422) fep_vkb_top_pane_g2

0x789b,	// (0x00047431) fep_vkb_top_pane_g3_ParamLimits

0x789b,	// (0x00047431) fep_vkb_top_pane_g3

0x0003,

0xfb30,	// (0x0004f6c6) fep_vkb_top_pane_g_ParamLimits

0xfb30,	// (0x0004f6c6) fep_vkb_top_pane_g

0x78b9,	// (0x0004744f) fep_vkb_top_text_pane_ParamLimits

0x78b9,	// (0x0004744f) fep_vkb_top_text_pane

0xe1bf,	// (0x0004dd55) fep_vkb_side_pane_g1_ParamLimits

0xe1bf,	// (0x0004dd55) fep_vkb_side_pane_g1

0x7913,	// (0x000474a9) grid_vkb_side_pane_ParamLimits

0x7913,	// (0x000474a9) grid_vkb_side_pane

0x259e,	// (0x00042134) bg_popup_fep_shadow_pane_g2

0x25a7,	// (0x0004213d) bg_popup_fep_shadow_pane_g3

0x25af,	// (0x00042145) bg_popup_fep_shadow_pane_g4

0x25b8,	// (0x0004214e) bg_popup_fep_shadow_pane_g5

0x25c2,	// (0x00042158) bg_popup_fep_shadow_pane_g6

0x25ca,	// (0x00042160) bg_popup_fep_shadow_pane_g7

0x3bd0,	// (0x00043766) bg_popup_fep_shadow_pane_g8

0x796a,	// (0x00047500) grid_vkb_keypad_number_pane_ParamLimits

0x796a,	// (0x00047500) grid_vkb_keypad_number_pane

0x797a,	// (0x00047510) grid_vkb_keypad_pane_ParamLimits

0x797a,	// (0x00047510) grid_vkb_keypad_pane

0x79a0,	// (0x00047536) fep_vkb_bottom_pane_g1_ParamLimits

0x79a0,	// (0x00047536) fep_vkb_bottom_pane_g1

0x79c9,	// (0x0004755f) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x79c9,	// (0x0004755f) grid_vkb_keypad_bottom_left_pane

0x79de,	// (0x00047574) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x79de,	// (0x00047574) grid_vkb_keypad_bottom_right_pane

0x79f3,	// (0x00047589) fep_vkb_top_text_pane_g1

0xe206,	// (0x0004dd9c) fep_vkb_top_text_pane_t1

0xe218,	// (0x0004ddae) cell_vkb_side_pane_ParamLimits

0xe218,	// (0x0004ddae) cell_vkb_side_pane

0x762d,	// (0x000471c3) cell_vkb_side_pane_g1

0x7a62,	// (0x000475f8) cell_vkb_keypad_pane_ParamLimits

0x7a62,	// (0x000475f8) cell_vkb_keypad_pane

0x7ad7,	// (0x0004766d) cell_vkb_keypad_pane_g1

0x0008,

0xfb5d,	// (0x0004f6f3) bg_popup_fep_shadow_pane_g

0x762d,	// (0x000471c3) cell_hwr_side_pane_g1

0x762d,	// (0x000471c3) cell_hwr_side_pane_g2

0x7ae1,	// (0x00047677) cell_vkb_keypad_pane_t1

0xe22e,	// (0x0004ddc4) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe22e,	// (0x0004ddc4) cell_vkb_keypad_bottom_left_pane

0xe243,	// (0x0004ddd9) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe243,	// (0x0004ddd9) cell_vkb_keypad_bottom_right_pane

0x762d,	// (0x000471c3) cell_vkb_keypad_bottom_left_pane_g1

0x762d,	// (0x000471c3) cell_vkb_keypad_bottom_right_pane_g1

0x7b45,	// (0x000476db) cell_vkb_keypad_number_pane_ParamLimits

0x7b45,	// (0x000476db) cell_vkb_keypad_number_pane

0x7b64,	// (0x000476fa) cell_vkb_keypad_number_pane_g1

0x7b6e,	// (0x00047704) cell_vkb_keypad_number_pane_g2

0x7b77,	// (0x0004770d) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4f,	// (0x0004f6e5) cell_vkb_keypad_number_pane_g

0x7ae1,	// (0x00047677) cell_vkb_keypad_number_pane_t1

0x7b9b,	// (0x00047731) fep_vkb_candidate_pane_g1

0x0001,

0xfb4a,	// (0x0004f6e0) cell_hwr_side_pane_g

0x7bb4,	// (0x0004774a) cell_hwr_side_pane_t1

0x25dc,	// (0x00042172) cell_hwr_side_pane_t1_copy1

0x78ab,	// (0x00047441) cell_hwr_candidate_pane_g1

0x25ea,	// (0x00042180) cell_hwr_candidate_pane_t1

0x762d,	// (0x000471c3) cell_vkb_candidate_pane_g2

0x7c3a,	// (0x000477d0) cell_vkb_candidate_pane_t1

0x23aa,	// (0x00041f40) bg_popup_fep_shadow_pane_ParamLimits

0x23aa,	// (0x00041f40) bg_popup_fep_shadow_pane

0xe0ac,	// (0x0004dc42) bg_fep_hwr_top_pane_g4

0x76ad,	// (0x00047243) bg_hwr_side_pane_g1_ParamLimits

0x76ad,	// (0x00047243) bg_hwr_side_pane_g1

0xc977,	// (0x0004c50d) cell_hwr_side_pane_ParamLimits

0xc977,	// (0x0004c50d) cell_hwr_side_pane

0x24fd,	// (0x00042093) fep_hwr_write_pane_g1_ParamLimits

0x24fd,	// (0x00042093) fep_hwr_write_pane_g1

0x250a,	// (0x000420a0) fep_hwr_write_pane_g2_ParamLimits

0x250a,	// (0x000420a0) fep_hwr_write_pane_g2

0x2517,	// (0x000420ad) fep_hwr_write_pane_g3_ParamLimits

0x2517,	// (0x000420ad) fep_hwr_write_pane_g3

0xc997,	// (0x0004c52d) fep_hwr_write_pane_g4_ParamLimits

0xc997,	// (0x0004c52d) fep_hwr_write_pane_g4

0x0005,

0xfb1c,	// (0x0004f6b2) fep_hwr_write_pane_g_ParamLimits

0xfb1c,	// (0x0004f6b2) fep_hwr_write_pane_g

0xe0ac,	// (0x0004dc42) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xe0ac,	// (0x0004dc42) bg_fep_hwr_candidate_pane_g2

0x253a,	// (0x000420d0) cell_hwr_candidate_pane_ParamLimits

0x253a,	// (0x000420d0) cell_hwr_candidate_pane

0x257c,	// (0x00042112) fep_hwr_candidate_pane_g1_ParamLimits

0x770d,	// (0x000472a3) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x770d,	// (0x000472a3) bg_popup_fep_shadow_pane_cp2

0x78ab,	// (0x00047441) fep_vkb_top_pane_g4_ParamLimits

0x78ab,	// (0x00047441) fep_vkb_top_pane_g4

0x78f1,	// (0x00047487) fep_vkb_side_pane_g2_ParamLimits

0x78f1,	// (0x00047487) fep_vkb_side_pane_g2

0xb79c,	// (0x0004b332) list_setting_pane_t4_ParamLimits

0xb79c,	// (0x0004b332) list_setting_pane_t4

0xb836,	// (0x0004b3cc) list_setting_number_pane_t5_ParamLimits

0xb836,	// (0x0004b3cc) list_setting_number_pane_t5

0xd294,	// (0x0004ce2a) list_double_heading_pane_cp2_ParamLimits

0xd294,	// (0x0004ce2a) list_double_heading_pane_cp2

0x3afc,	// (0x00043692) list_double_heading_pane_g1_cp2_ParamLimits

0x3afc,	// (0x00043692) list_double_heading_pane_g1_cp2

0x3b6f,	// (0x00043705) list_double_heading_pane_g2_cp2_ParamLimits

0x3b6f,	// (0x00043705) list_double_heading_pane_g2_cp2

0x7c48,	// (0x000477de) list_double_heading_pane_t1_cp2_ParamLimits

0x7c48,	// (0x000477de) list_double_heading_pane_t1_cp2

0x7c5e,	// (0x000477f4) list_double_heading_pane_t2_cp2_ParamLimits

0x7c5e,	// (0x000477f4) list_double_heading_pane_t2_cp2

0x31dd,	// (0x00042d73) aid_value_unit2

0x108e,	// (0x00040c24) popup_preview_fixed_window

0x3572,	// (0x00043108) bg_popup_preview_window_pane_cp02

0x7c70,	// (0x00047806) list_preview_fixed_pane

0x7cb6,	// (0x0004784c) list_empty_pane_fp_ParamLimits

0x7cb6,	// (0x0004784c) list_empty_pane_fp

0x7cb6,	// (0x0004784c) list_single_cale_day_pane_fp_ParamLimits

0x7cb6,	// (0x0004784c) list_single_cale_day_pane_fp

0x7cb6,	// (0x0004784c) list_single_graphic_heading_pane_fp_ParamLimits

0x7cb6,	// (0x0004784c) list_single_graphic_heading_pane_fp

0x7cb6,	// (0x0004784c) list_single_graphic_pane_fp_ParamLimits

0x7cb6,	// (0x0004784c) list_single_graphic_pane_fp

0x7cb6,	// (0x0004784c) list_single_heading_pane_fp_ParamLimits

0x7cb6,	// (0x0004784c) list_single_heading_pane_fp

0x7cb6,	// (0x0004784c) list_single_pane_fp_ParamLimits

0x7cb6,	// (0x0004784c) list_single_pane_fp

0x7ccb,	// (0x00047861) list_single_pane_fp_g1_ParamLimits

0x7ccb,	// (0x00047861) list_single_pane_fp_g1

0x3afc,	// (0x00043692) list_single_pane_fp_g2_ParamLimits

0x3afc,	// (0x00043692) list_single_pane_fp_g2

0x3b6f,	// (0x00043705) list_single_pane_fp_g3_ParamLimits

0x3b6f,	// (0x00043705) list_single_pane_fp_g3

0x7cd7,	// (0x0004786d) list_single_pane_fp_g4_ParamLimits

0x7cd7,	// (0x0004786d) list_single_pane_fp_g4

0x0003,

0xfb7e,	// (0x0004f714) list_single_pane_fp_g_ParamLimits

0xfb7e,	// (0x0004f714) list_single_pane_fp_g

0x0b3b,	// (0x000406d1) list_single_pane_fp_t1_ParamLimits

0x0b3b,	// (0x000406d1) list_single_pane_fp_t1

0x0b52,	// (0x000406e8) list_single_graphic_pane_fp_g1_ParamLimits

0x0b52,	// (0x000406e8) list_single_graphic_pane_fp_g1

0x7ccb,	// (0x00047861) list_single_graphic_pane_fp_g2_ParamLimits

0x7ccb,	// (0x00047861) list_single_graphic_pane_fp_g2

0x3afc,	// (0x00043692) list_single_graphic_pane_fp_g3_ParamLimits

0x3afc,	// (0x00043692) list_single_graphic_pane_fp_g3

0x3b6f,	// (0x00043705) list_single_graphic_pane_fp_g4_ParamLimits

0x3b6f,	// (0x00043705) list_single_graphic_pane_fp_g4

0x7cd7,	// (0x0004786d) list_single_graphic_pane_fp_g5_ParamLimits

0x7cd7,	// (0x0004786d) list_single_graphic_pane_fp_g5

0x0004,

0xfb87,	// (0x0004f71d) list_single_graphic_pane_fp_g_ParamLimits

0xfb87,	// (0x0004f71d) list_single_graphic_pane_fp_g

0x0b5e,	// (0x000406f4) list_single_graphic_pane_fp_t1_ParamLimits

0x0b5e,	// (0x000406f4) list_single_graphic_pane_fp_t1

0x0b52,	// (0x000406e8) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x0b52,	// (0x000406e8) list_single_graphic_heading_pane_fp_g1

0x7ccb,	// (0x00047861) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7ccb,	// (0x00047861) list_single_graphic_heading_pane_fp_g2

0x3afc,	// (0x00043692) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x3afc,	// (0x00043692) list_single_graphic_heading_pane_fp_g3

0x3b6f,	// (0x00043705) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x3b6f,	// (0x00043705) list_single_graphic_heading_pane_fp_g4

0x7cd7,	// (0x0004786d) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7cd7,	// (0x0004786d) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb87,	// (0x0004f71d) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb87,	// (0x0004f71d) list_single_graphic_heading_pane_fp_g

0x0b74,	// (0x0004070a) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x0b74,	// (0x0004070a) list_single_graphic_heading_pane_fp_t1

0x0b8a,	// (0x00040720) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x0b8a,	// (0x00040720) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb92,	// (0x0004f728) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb92,	// (0x0004f728) list_single_graphic_heading_pane_fp_t

0x0b9c,	// (0x00040732) list_single_cale_day_pane_fp_g1_ParamLimits

0x0b9c,	// (0x00040732) list_single_cale_day_pane_fp_g1

0x7ce3,	// (0x00047879) list_single_cale_day_pane_fp_g2_ParamLimits

0x7ce3,	// (0x00047879) list_single_cale_day_pane_fp_g2

0x2608,	// (0x0004219e) list_single_cale_day_pane_fp_g3_ParamLimits

0x2608,	// (0x0004219e) list_single_cale_day_pane_fp_g3

0x2630,	// (0x000421c6) list_single_cale_day_pane_fp_g4_ParamLimits

0x2630,	// (0x000421c6) list_single_cale_day_pane_fp_g4

0x2654,	// (0x000421ea) list_single_cale_day_pane_fp_g5_ParamLimits

0x2654,	// (0x000421ea) list_single_cale_day_pane_fp_g5

0x0004,

0xfb97,	// (0x0004f72d) list_single_cale_day_pane_fp_g_ParamLimits

0xfb97,	// (0x0004f72d) list_single_cale_day_pane_fp_g

0x0bd4,	// (0x0004076a) list_single_cale_day_pane_fp_t1_ParamLimits

0x0bd4,	// (0x0004076a) list_single_cale_day_pane_fp_t1

0x0bfa,	// (0x00040790) list_single_cale_day_pane_fp_t2_ParamLimits

0x0bfa,	// (0x00040790) list_single_cale_day_pane_fp_t2

0x0c13,	// (0x000407a9) list_single_cale_day_pane_fp_t3_ParamLimits

0x0c13,	// (0x000407a9) list_single_cale_day_pane_fp_t3

0x0002,

0xfba2,	// (0x0004f738) list_single_cale_day_pane_fp_t_ParamLimits

0xfba2,	// (0x0004f738) list_single_cale_day_pane_fp_t

0x7ccb,	// (0x00047861) list_empty_pane_fp_g1_ParamLimits

0x7ccb,	// (0x00047861) list_empty_pane_fp_g1

0x0c2c,	// (0x000407c2) list_empty_pane_fp_t1

0x0c3a,	// (0x000407d0) list_empty_pane_fp_t2

0x0001,

0xfba9,	// (0x0004f73f) list_empty_pane_fp_t

0x7ccb,	// (0x00047861) list_single_heading_pane_fp_g1_ParamLimits

0x7ccb,	// (0x00047861) list_single_heading_pane_fp_g1

0x3afc,	// (0x00043692) list_single_heading_pane_fp_g2_ParamLimits

0x3afc,	// (0x00043692) list_single_heading_pane_fp_g2

0x3b6f,	// (0x00043705) list_single_heading_pane_fp_g3_ParamLimits

0x3b6f,	// (0x00043705) list_single_heading_pane_fp_g3

0x0002,

0xfbae,	// (0x0004f744) list_single_heading_pane_fp_g_ParamLimits

0xfbae,	// (0x0004f744) list_single_heading_pane_fp_g

0x0c48,	// (0x000407de) list_single_heading_pane_fp_t1_ParamLimits

0x0c48,	// (0x000407de) list_single_heading_pane_fp_t1

0x0c5a,	// (0x000407f0) list_single_heading_pane_fp_t2_ParamLimits

0x0c5a,	// (0x000407f0) list_single_heading_pane_fp_t2

0x0001,

0xfbb5,	// (0x0004f74b) list_single_heading_pane_fp_t_ParamLimits

0xfbb5,	// (0x0004f74b) list_single_heading_pane_fp_t

0x3d57,	// (0x000438ed) aid_size_cell_fast

0x34e2,	// (0x00043078) soft_indicator_pane_cp1_t1

0x3d94,	// (0x0004392a) cell_app_pane_cp2_ParamLimits

0x3d94,	// (0x0004392a) cell_app_pane_cp2

0x23cc,	// (0x00041f62) fep_hwr_candidate_drop_down_list_pane

0xe0ba,	// (0x0004dc50) fep_hwr_candidate_pane_g3_ParamLimits

0xe0ba,	// (0x0004dc50) fep_hwr_candidate_pane_g3

0xe0c7,	// (0x0004dc5d) fep_hwr_candidate_pane_g4_ParamLimits

0xe0c7,	// (0x0004dc5d) fep_hwr_candidate_pane_g4

0x0002,

0xfb29,	// (0x0004f6bf) fep_hwr_candidate_pane_g_ParamLimits

0xfb29,	// (0x0004f6bf) fep_hwr_candidate_pane_g

0x7792,	// (0x00047328) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7792,	// (0x00047328) fep_vkb_candidate_drop_down_list_pane

0x7ba3,	// (0x00047739) fep_vkb_candidate_pane_g3

0x7bab,	// (0x00047741) fep_vkb_candidate_pane_g4

0x0002,

0xfb56,	// (0x0004f6ec) fep_vkb_candidate_pane_g

0x78ab,	// (0x00047441) cell_hwr_candidate_pane_g1_ParamLimits

0x7bc2,	// (0x00047758) cell_hwr_candidate_pane_g3_ParamLimits

0x7bc2,	// (0x00047758) cell_hwr_candidate_pane_g3

0x7be3,	// (0x00047779) cell_hwr_candidate_pane_g4_ParamLimits

0x7be3,	// (0x00047779) cell_hwr_candidate_pane_g4

0x0002,

0xfb70,	// (0x0004f706) cell_hwr_candidate_pane_g_ParamLimits

0xfb70,	// (0x0004f706) cell_hwr_candidate_pane_g

0x7c04,	// (0x0004779a) cell_vkb_candidate_pane_g3_ParamLimits

0x7c04,	// (0x0004779a) cell_vkb_candidate_pane_g3

0x7c1f,	// (0x000477b5) cell_vkb_candidate_pane_g4_ParamLimits

0x7c1f,	// (0x000477b5) cell_vkb_candidate_pane_g4

0x7cef,	// (0x00047885) cell_app_pane_cp2_g1_ParamLimits

0x7cef,	// (0x00047885) cell_app_pane_cp2_g1

0x7d0d,	// (0x000478a3) cell_app_pane_cp2_g2_ParamLimits

0x7d0d,	// (0x000478a3) cell_app_pane_cp2_g2

0x0001,

0xfbba,	// (0x0004f750) cell_app_pane_cp2_g_ParamLimits

0xfbba,	// (0x0004f750) cell_app_pane_cp2_g

0x7d19,	// (0x000478af) cell_app_pane_cp2_t1_ParamLimits

0x7d19,	// (0x000478af) cell_app_pane_cp2_t1

0x3b61,	// (0x000436f7) grid_highlight_pane_cp1_ParamLimits

0x3b61,	// (0x000436f7) grid_highlight_pane_cp1

0x2678,	// (0x0004220e) cell_hwr_candidate_pane_cp1_ParamLimits

0x2678,	// (0x0004220e) cell_hwr_candidate_pane_cp1

0x78ab,	// (0x00047441) fep_hwr_candidate_drop_down_list_pane_g1

0x7d2b,	// (0x000478c1) fep_hwr_candidate_drop_down_list_pane_g2

0x7d38,	// (0x000478ce) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbf,	// (0x0004f755) fep_hwr_candidate_drop_down_list_pane_g

0x2697,	// (0x0004222d) fep_hwr_candidate_drop_down_list_scroll_pane

0x26a0,	// (0x00042236) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x26a0,	// (0x00042236) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x26ad,	// (0x00042243) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x26ad,	// (0x00042243) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x26ba,	// (0x00042250) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x26ba,	// (0x00042250) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7c04,	// (0x0004779a) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7c04,	// (0x0004779a) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7c1f,	// (0x000477b5) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7c1f,	// (0x000477b5) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x26c7,	// (0x0004225d) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x26c7,	// (0x0004225d) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x26e2,	// (0x00042278) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x26e2,	// (0x00042278) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x26fd,	// (0x00042293) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x26fd,	// (0x00042293) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc6,	// (0x0004f75c) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc6,	// (0x0004f75c) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7d45,	// (0x000478db) cell_vkb_candidate_pane_cp1_ParamLimits

0x7d45,	// (0x000478db) cell_vkb_candidate_pane_cp1

0x78ab,	// (0x00047441) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x78ab,	// (0x00047441) fep_vkb_candidate_drop_down_list_pane_g1

0x7d2b,	// (0x000478c1) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7d2b,	// (0x000478c1) fep_vkb_candidate_drop_down_list_pane_g2

0x7d38,	// (0x000478ce) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7d38,	// (0x000478ce) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbbf,	// (0x0004f755) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbbf,	// (0x0004f755) fep_vkb_candidate_drop_down_list_pane_g

0x7d65,	// (0x000478fb) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7d65,	// (0x000478fb) fep_vkb_candidate_drop_down_list_scroll_pane

0x7d72,	// (0x00047908) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7d72,	// (0x00047908) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7d7f,	// (0x00047915) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7d7f,	// (0x00047915) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7d8b,	// (0x00047921) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7d8b,	// (0x00047921) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7bc2,	// (0x00047758) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7bc2,	// (0x00047758) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7be3,	// (0x00047779) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7be3,	// (0x00047779) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7d97,	// (0x0004792d) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7d97,	// (0x0004792d) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7db8,	// (0x0004794e) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7db8,	// (0x0004794e) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7dd9,	// (0x0004796f) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7dd9,	// (0x0004796f) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd7,	// (0x0004f76d) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd7,	// (0x0004f76d) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xbdcc,	// (0x0004b962) title_pane_g1_ParamLimits

0xbddf,	// (0x0004b975) title_pane_g2_ParamLimits

0xf554,	// (0x0004f0ea) title_pane_g_ParamLimits

0x41c6,	// (0x00043d5c) aid_call2_pane

0x41ce,	// (0x00043d64) aid_call_pane

0x41d6,	// (0x00043d6c) popup_clock_analogue_window_g1

0x41d6,	// (0x00043d6c) popup_clock_analogue_window_g2

0x14a1,	// (0x00041037) popup_clock_analogue_window_g3

0x14aa,	// (0x00041040) popup_clock_analogue_window_g4

0x31ff,	// (0x00042d95) popup_clock_analogue_window_g5

0x0004,

0xf703,	// (0x0004f299) popup_clock_analogue_window_g

0x14b2,	// (0x00041048) popup_clock_analogue_window_t1

0x14c0,	// (0x00041056) clock_digital_number_pane_ParamLimits

0x14c0,	// (0x00041056) clock_digital_number_pane

0x14cc,	// (0x00041062) clock_digital_number_pane_cp02_ParamLimits

0x14cc,	// (0x00041062) clock_digital_number_pane_cp02

0x14d8,	// (0x0004106e) clock_digital_number_pane_cp03_ParamLimits

0x14d8,	// (0x0004106e) clock_digital_number_pane_cp03

0x14e4,	// (0x0004107a) clock_digital_number_pane_cp04_ParamLimits

0x14e4,	// (0x0004107a) clock_digital_number_pane_cp04

0x14f0,	// (0x00041086) clock_digital_separator_pane_ParamLimits

0x14f0,	// (0x00041086) clock_digital_separator_pane

0x14fc,	// (0x00041092) popup_clock_digital_window_t1_ParamLimits

0x14fc,	// (0x00041092) popup_clock_digital_window_t1

0x31ff,	// (0x00042d95) clock_digital_number_pane_g1

0x31ff,	// (0x00042d95) clock_digital_number_pane_g2

0x0001,

0xf70e,	// (0x0004f2a4) clock_digital_number_pane_g

0x31ff,	// (0x00042d95) clock_digital_separator_pane_g1

0x31ff,	// (0x00042d95) clock_digital_separator_pane_g2

0x0001,

0xf70e,	// (0x0004f2a4) clock_digital_separator_pane_g

0xd4f7,	// (0x0004d08d) aid_fill_nsta_ParamLimits

0xd62d,	// (0x0004d1c3) indicator_nsta_pane_ParamLimits

0x4e01,	// (0x00044997) popup_clock_analogue_window

0x4e01,	// (0x00044997) popup_clock_digital_window

0x3d18,	// (0x000438ae) grid_indicator_nsta_pane_ParamLimits

0x7022,	// (0x00046bb8) clock_nsta_pane_t2

0x0001,

0xfaa9,	// (0x0004f63f) clock_nsta_pane_t

0x1465,	// (0x00040ffb) aid_size_max_handle

0xbf3e,	// (0x0004bad4) aid_size_min_handle

0x47de,	// (0x00044374) editor_scroll_pane

0x7df4,	// (0x0004798a) ex_editor_pane

0x3cc5,	// (0x0004385b) scroll_pane_cp13

0x3af4,	// (0x0004368a) scroll_pane_cp14

0x4205,	// (0x00043d9b) scroll_pane_cp36

0xd2a5,	// (0x0004ce3b) list_single_graphic_hl_pane_cp2_ParamLimits

0xd2a5,	// (0x0004ce3b) list_single_graphic_hl_pane_cp2

0xc93d,	// (0x0004c4d3) list_single_graphic_hl_pane_ParamLimits

0xc93d,	// (0x0004c4d3) list_single_graphic_hl_pane

0x0c70,	// (0x00040806) aid_size_min_hl_cp1

0x7dfc,	// (0x00047992) list_highlight_pane_cp34_ParamLimits

0x7dfc,	// (0x00047992) list_highlight_pane_cp34

0x7e0d,	// (0x000479a3) list_single_graphic_hl_pane_g1_ParamLimits

0x7e0d,	// (0x000479a3) list_single_graphic_hl_pane_g1

0xbaec,	// (0x0004b682) list_single_graphic_hl_pane_g2_ParamLimits

0xbaec,	// (0x0004b682) list_single_graphic_hl_pane_g2

0xbaec,	// (0x0004b682) list_single_graphic_hl_pane_g3_ParamLimits

0xbaec,	// (0x0004b682) list_single_graphic_hl_pane_g3

0x474f,	// (0x000442e5) list_single_graphic_hl_pane_g4_ParamLimits

0x474f,	// (0x000442e5) list_single_graphic_hl_pane_g4

0x2718,	// (0x000422ae) list_single_graphic_hl_pane_g5_ParamLimits

0x2718,	// (0x000422ae) list_single_graphic_hl_pane_g5

0x0004,

0xfbe8,	// (0x0004f77e) list_single_graphic_hl_pane_g_ParamLimits

0xfbe8,	// (0x0004f77e) list_single_graphic_hl_pane_g

0xbaf8,	// (0x0004b68e) list_single_graphic_hl_pane_t1_ParamLimits

0xbaf8,	// (0x0004b68e) list_single_graphic_hl_pane_t1

0x7e1a,	// (0x000479b0) aid_size_min_hl_cp2

0x7e23,	// (0x000479b9) list_highlight_pane_cp34_cp2_ParamLimits

0x7e23,	// (0x000479b9) list_highlight_pane_cp34_cp2

0x7e0d,	// (0x000479a3) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7e0d,	// (0x000479a3) list_single_graphic_hl_pane_g1_cp2

0x7e30,	// (0x000479c6) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7e30,	// (0x000479c6) list_single_graphic_hl_pane_g2_cp2

0xe25e,	// (0x0004ddf4) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xe25e,	// (0x0004ddf4) list_single_graphic_hl_pane_g3_cp2

0x7e4a,	// (0x000479e0) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7e4a,	// (0x000479e0) list_single_graphic_hl_pane_g4_cp2

0x7e56,	// (0x000479ec) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7e56,	// (0x000479ec) list_single_graphic_hl_pane_g5_cp2

0xbfab,	// (0x0004bb41) control_pane_g4_ParamLimits

0xbfab,	// (0x0004bb41) control_pane_g4

0x4b1e,	// (0x000446b4) bg_popup_sub_pane_cp10_ParamLimits

0x7637,	// (0x000471cd) list_choice_list_pane_ParamLimits

0x7646,	// (0x000471dc) scroll_pane_cp23

0x3572,	// (0x00043108) bg_popup_preview_window_pane_cp02_ParamLimits

0x7c70,	// (0x00047806) list_preview_fixed_pane_ParamLimits

0x7c86,	// (0x0004781c) list_preview_fixed_pane_cp_ParamLimits

0x7c86,	// (0x0004781c) list_preview_fixed_pane_cp

0x7c92,	// (0x00047828) popup_preview_fixed_window_g1_ParamLimits

0x7c92,	// (0x00047828) popup_preview_fixed_window_g1

0x7c9e,	// (0x00047834) popup_preview_fixed_window_g2_ParamLimits

0x7c9e,	// (0x00047834) popup_preview_fixed_window_g2

0x0002,

0xfb77,	// (0x0004f70d) popup_preview_fixed_window_g_ParamLimits

0xfb77,	// (0x0004f70d) popup_preview_fixed_window_g

0x13d9,	// (0x00040f6f) aid_navi_side_left_pane_ParamLimits

0x13ee,	// (0x00040f84) aid_navi_side_right_pane_ParamLimits

0x1406,	// (0x00040f9c) navi_icon_pane_stacon_ParamLimits

0x141a,	// (0x00040fb0) navi_navi_pane_stacon_ParamLimits

0x1406,	// (0x00040f9c) navi_text_pane_stacon_ParamLimits

0x31f5,	// (0x00042d8b) main_text_info_pane

0x7e80,	// (0x00047a16) listscroll_text_info_pane

0x7e88,	// (0x00047a1e) list_text_info_pane_ParamLimits

0x7e88,	// (0x00047a1e) list_text_info_pane

0x7e97,	// (0x00047a2d) scroll_pane_cp24_ParamLimits

0x7e97,	// (0x00047a2d) scroll_pane_cp24

0xe26c,	// (0x0004de02) list_text_info_pane_t1_ParamLimits

0xe26c,	// (0x0004de02) list_text_info_pane_t1

0xc0f6,	// (0x0004bc8c) popup_fast_swap2_window_ParamLimits

0xc0f6,	// (0x0004bc8c) popup_fast_swap2_window

0x7ee6,	// (0x00047a7c) aid_size_cell_fast2

0x31f5,	// (0x00042d8b) bg_popup_window_pane_cp17

0x5480,	// (0x00045016) heading_pane_cp2

0x37be,	// (0x00043354) listscroll_fast2_pane

0x7ef0,	// (0x00047a86) grid_fast2_pane

0x7efa,	// (0x00047a90) listscroll_fast2_pane_g1

0x7f02,	// (0x00047a98) listscroll_fast2_pane_g2

0x0001,

0xfbf3,	// (0x0004f789) listscroll_fast2_pane_g

0x3cc5,	// (0x0004385b) scroll_pane_cp26

0x7f0c,	// (0x00047aa2) cell_fast2_pane_ParamLimits

0x7f0c,	// (0x00047aa2) cell_fast2_pane

0x7f21,	// (0x00047ab7) cell_fast2_pane_g1

0x7f2a,	// (0x00047ac0) cell_fast2_pane_g2

0x7f33,	// (0x00047ac9) cell_fast2_pane_g3

0x0002,

0xfbf8,	// (0x0004f78e) cell_fast2_pane_g

0x38b1,	// (0x00043447) grid_highlight_pane_cp9

0x38c6,	// (0x0004345c) main_eswt_pane_ParamLimits

0x38c6,	// (0x0004345c) main_eswt_pane

0x7eac,	// (0x00047a42) list_single_text_info_pane

0x7f3b,	// (0x00047ad1) eswt_ctrl_button_pane

0x7f3b,	// (0x00047ad1) eswt_ctrl_canvas_pane

0x7f43,	// (0x00047ad9) eswt_ctrl_combo_pane

0x7f3b,	// (0x00047ad1) eswt_ctrl_default_pane

0x7f3b,	// (0x00047ad1) eswt_ctrl_label_pane

0x7f4b,	// (0x00047ae1) eswt_ctrl_wait_pane

0x7f53,	// (0x00047ae9) eswt_shell_pane

0x31f5,	// (0x00042d8b) listscroll_eswt_app_pane

0x7f73,	// (0x00047b09) popup_eswt_tasktip_window_ParamLimits

0x7f73,	// (0x00047b09) popup_eswt_tasktip_window

0x5096,	// (0x00044c2c) bg_popup_window_pane_cp18

0x7f84,	// (0x00047b1a) eswt_control_pane_g1_ParamLimits

0x7f84,	// (0x00047b1a) eswt_control_pane_g1

0x7f91,	// (0x00047b27) eswt_control_pane_g2_ParamLimits

0x7f91,	// (0x00047b27) eswt_control_pane_g2

0x7f9e,	// (0x00047b34) eswt_control_pane_g3_ParamLimits

0x7f9e,	// (0x00047b34) eswt_control_pane_g3

0x7fab,	// (0x00047b41) eswt_control_pane_g4_ParamLimits

0x7fab,	// (0x00047b41) eswt_control_pane_g4

0x0003,

0xfbff,	// (0x0004f795) eswt_control_pane_g_ParamLimits

0xfbff,	// (0x0004f795) eswt_control_pane_g

0x3b61,	// (0x000436f7) bg_button_pane_ParamLimits

0x3b61,	// (0x000436f7) bg_button_pane

0x38c6,	// (0x0004345c) common_borders_pane_copy2_ParamLimits

0x38c6,	// (0x0004345c) common_borders_pane_copy2

0x7fb8,	// (0x00047b4e) control_button_pane_g1_ParamLimits

0x7fb8,	// (0x00047b4e) control_button_pane_g1

0x7fc4,	// (0x00047b5a) control_button_pane_g2_ParamLimits

0x7fc4,	// (0x00047b5a) control_button_pane_g2

0x7fd0,	// (0x00047b66) control_button_pane_g3_ParamLimits

0x7fd0,	// (0x00047b66) control_button_pane_g3

0x0002,

0xfc08,	// (0x0004f79e) control_button_pane_g_ParamLimits

0xfc08,	// (0x0004f79e) control_button_pane_g

0x7fe4,	// (0x00047b7a) control_button_pane_t1

0x7ff2,	// (0x00047b88) control_button_pane_t2

0x0001,

0xfc0f,	// (0x0004f7a5) control_button_pane_t

0x5022,	// (0x00044bb8) bg_button_pane_g1

0x502a,	// (0x00044bc0) bg_button_pane_g2

0x5032,	// (0x00044bc8) bg_button_pane_g3

0x503a,	// (0x00044bd0) bg_button_pane_g4

0x5042,	// (0x00044bd8) bg_button_pane_g5

0x504a,	// (0x00044be0) bg_button_pane_g6

0x5052,	// (0x00044be8) bg_button_pane_g7

0x505a,	// (0x00044bf0) bg_button_pane_g8

0x5062,	// (0x00044bf8) bg_button_pane_g9

0x0008,

0xf86c,	// (0x0004f402) bg_button_pane_g

0x75f2,	// (0x00047188) common_borders_pane_ParamLimits

0x75f2,	// (0x00047188) common_borders_pane

0x7f84,	// (0x00047b1a) eswt_control_pane_g1_copy1_ParamLimits

0x7f84,	// (0x00047b1a) eswt_control_pane_g1_copy1

0x7f91,	// (0x00047b27) eswt_control_pane_g2_copy1_ParamLimits

0x7f91,	// (0x00047b27) eswt_control_pane_g2_copy1

0x7f9e,	// (0x00047b34) eswt_control_pane_g3_copy1_ParamLimits

0x7f9e,	// (0x00047b34) eswt_control_pane_g3_copy1

0x7fab,	// (0x00047b41) eswt_control_pane_g4_copy1_ParamLimits

0x7fab,	// (0x00047b41) eswt_control_pane_g4_copy1

0x762d,	// (0x000471c3) bg_eswt_ctrl_canvas_pane_g1

0x75f2,	// (0x00047188) common_borders_pane_cp2_ParamLimits

0x75f2,	// (0x00047188) common_borders_pane_cp2

0x75f2,	// (0x00047188) common_borders_pane_cp3_ParamLimits

0x75f2,	// (0x00047188) common_borders_pane_cp3

0x8000,	// (0x00047b96) separator_horizontal_pane

0x8008,	// (0x00047b9e) separator_vertical_pane

0x7f84,	// (0x00047b1a) eswt_control_pane_g1_copy2_ParamLimits

0x7f84,	// (0x00047b1a) eswt_control_pane_g1_copy2

0x7f91,	// (0x00047b27) eswt_control_pane_g2_copy2_ParamLimits

0x7f91,	// (0x00047b27) eswt_control_pane_g2_copy2

0x7f9e,	// (0x00047b34) eswt_control_pane_g3_copy2_ParamLimits

0x7f9e,	// (0x00047b34) eswt_control_pane_g3_copy2

0x7fab,	// (0x00047b41) eswt_control_pane_g4_copy2_ParamLimits

0x7fab,	// (0x00047b41) eswt_control_pane_g4_copy2

0x31f5,	// (0x00042d8b) common_borders_pane_cp4

0x8011,	// (0x00047ba7) separator_horizontal_pane_g1

0x801a,	// (0x00047bb0) separator_horizontal_pane_g2

0x8023,	// (0x00047bb9) separator_horizontal_pane_g3

0x0002,

0xfc14,	// (0x0004f7aa) separator_horizontal_pane_g

0x7f84,	// (0x00047b1a) eswt_control_pane_g1_copy3_ParamLimits

0x7f84,	// (0x00047b1a) eswt_control_pane_g1_copy3

0x7f91,	// (0x00047b27) eswt_control_pane_g2_copy3_ParamLimits

0x7f91,	// (0x00047b27) eswt_control_pane_g2_copy3

0x7f9e,	// (0x00047b34) eswt_control_pane_g3_copy3_ParamLimits

0x7f9e,	// (0x00047b34) eswt_control_pane_g3_copy3

0x7fab,	// (0x00047b41) eswt_control_pane_g4_copy3_ParamLimits

0x7fab,	// (0x00047b41) eswt_control_pane_g4_copy3

0x31f5,	// (0x00042d8b) common_borders_pane_cp5

0x802c,	// (0x00047bc2) separator_vertical_pane_g1

0x8035,	// (0x00047bcb) separator_vertical_pane_g2

0x803e,	// (0x00047bd4) separator_vertical_pane_g3

0x0002,

0xfc1b,	// (0x0004f7b1) separator_vertical_pane_g

0x7f84,	// (0x00047b1a) eswt_control_pane_g1_copy4_ParamLimits

0x7f84,	// (0x00047b1a) eswt_control_pane_g1_copy4

0x7f91,	// (0x00047b27) eswt_control_pane_g2_copy4_ParamLimits

0x7f91,	// (0x00047b27) eswt_control_pane_g2_copy4

0x7f9e,	// (0x00047b34) eswt_control_pane_g3_copy4_ParamLimits

0x7f9e,	// (0x00047b34) eswt_control_pane_g3_copy4

0x7fab,	// (0x00047b41) eswt_control_pane_g4_copy4_ParamLimits

0x7fab,	// (0x00047b41) eswt_control_pane_g4_copy4

0xe287,	// (0x0004de1d) eswt_ctrl_combo_button_pane

0xe28f,	// (0x0004de25) eswt_ctrl_input_pane

0xe297,	// (0x0004de2d) popup_choice_list_window_cp70

0xe29f,	// (0x0004de35) eswt_ctrl_input_pane_t1

0x31f5,	// (0x00042d8b) input_focus_pane_cp70

0x75f2,	// (0x00047188) bg_button_pane_cp70_ParamLimits

0x75f2,	// (0x00047188) bg_button_pane_cp70

0xe2ad,	// (0x0004de43) eswt_ctrl_combo_button_pane_g1

0x8075,	// (0x00047c0b) wait_bar_pane_cp70

0x5096,	// (0x00044c2c) bg_popup_window_pane_cp70_ParamLimits

0x5096,	// (0x00044c2c) bg_popup_window_pane_cp70

0x807d,	// (0x00047c13) popup_eswt_tasktip_window_t1

0x8093,	// (0x00047c29) wait_bar_pane_cp71_ParamLimits

0x8093,	// (0x00047c29) wait_bar_pane_cp71

0x809f,	// (0x00047c35) grid_eswt_app_pane

0x3fe8,	// (0x00043b7e) scroll_pane_cp70

0xe2b5,	// (0x0004de4b) cell_eswt_app_pane_ParamLimits

0xe2b5,	// (0x0004de4b) cell_eswt_app_pane

0xe2df,	// (0x0004de75) cell_eswt_app_pane_g1_ParamLimits

0xe2df,	// (0x0004de75) cell_eswt_app_pane_g1

0xe30e,	// (0x0004dea4) cell_eswt_app_pane_g2_ParamLimits

0xe30e,	// (0x0004dea4) cell_eswt_app_pane_g2

0x0001,

0xfc22,	// (0x0004f7b8) cell_eswt_app_pane_g_ParamLimits

0xfc22,	// (0x0004f7b8) cell_eswt_app_pane_g

0xe337,	// (0x0004decd) cell_eswt_app_pane_t1_ParamLimits

0xe337,	// (0x0004decd) cell_eswt_app_pane_t1

0x8162,	// (0x00047cf8) grid_highlight_pane_cp70_ParamLimits

0x8162,	// (0x00047cf8) grid_highlight_pane_cp70

0x46b3,	// (0x00044249) set_content_pane_g1

0x4a7e,	// (0x00044614) status_small_volume_pane

0x272c,	// (0x000422c2) status_small_volume_pane_g1

0x2734,	// (0x000422ca) volume_small2_pane

0x273d,	// (0x000422d3) volume_small2_pane_g1

0x2746,	// (0x000422dc) volume_small2_pane_g2

0x274f,	// (0x000422e5) volume_small2_pane_g3

0x2758,	// (0x000422ee) volume_small2_pane_g4

0x2761,	// (0x000422f7) volume_small2_pane_g5

0x276a,	// (0x00042300) volume_small2_pane_g6

0x2773,	// (0x00042309) volume_small2_pane_g7

0x277c,	// (0x00042312) volume_small2_pane_g8

0x2785,	// (0x0004231b) volume_small2_pane_g9

0x278e,	// (0x00042324) volume_small2_pane_g10

0x0009,

0xfc27,	// (0x0004f7bd) volume_small2_pane_g

0x79f3,	// (0x00047589) fep_vkb_top_text_pane_g1_ParamLimits

0xe206,	// (0x0004dd9c) fep_vkb_top_text_pane_t1_ParamLimits

0x7caa,	// (0x00047840) popup_preview_fixed_window_g3_ParamLimits

0x7caa,	// (0x00047840) popup_preview_fixed_window_g3

0xc713,	// (0x0004c2a9) popup_toolbar_trans_pane

0xdbfa,	// (0x0004d790) aid_height_set_list_ParamLimits

0x640b,	// (0x00045fa1) aid_size_parent_ParamLimits

0x4b1e,	// (0x000446b4) list_highlight_pane_cp2_ParamLimits

0x46b3,	// (0x00044249) set_content_pane_g1_ParamLimits

0xc94e,	// (0x0004c4e4) list_single_image_pane_ParamLimits

0xc94e,	// (0x0004c4e4) list_single_image_pane

0xe369,	// (0x0004deff) aid_size_cell_image_ParamLimits

0xe369,	// (0x0004deff) aid_size_cell_image

0xe376,	// (0x0004df0c) grid_single_image_pane_ParamLimits

0xe376,	// (0x0004df0c) grid_single_image_pane

0x4d4a,	// (0x000448e0) list_single_image_pane_g1_ParamLimits

0x4d4a,	// (0x000448e0) list_single_image_pane_g1

0x8187,	// (0x00047d1d) list_single_image_pane_g2_ParamLimits

0x8187,	// (0x00047d1d) list_single_image_pane_g2

0x0001,

0xfc3c,	// (0x0004f7d2) list_single_image_pane_g_ParamLimits

0xfc3c,	// (0x0004f7d2) list_single_image_pane_g

0x819b,	// (0x00047d31) list_single_image_pane_t1_ParamLimits

0x819b,	// (0x00047d31) list_single_image_pane_t1

0xe384,	// (0x0004df1a) cell_image_list_pane_ParamLimits

0xe384,	// (0x0004df1a) cell_image_list_pane

0xe39a,	// (0x0004df30) cell_image_list_pane_g1

0xe3a3,	// (0x0004df39) cell_image_list_pane_g2

0x0001,

0xfc41,	// (0x0004f7d7) cell_image_list_pane_g

0x81d7,	// (0x00047d6d) aid_size_cell_tb_trans_pane

0x3b61,	// (0x000436f7) bg_tb_trans_pane

0x81e9,	// (0x00047d7f) grid_tb_trans_pane

0x5022,	// (0x00044bb8) bg_tb_trans_pane_g1

0x502a,	// (0x00044bc0) bg_tb_trans_pane_g2

0x5032,	// (0x00044bc8) bg_tb_trans_pane_g3

0x503a,	// (0x00044bd0) bg_tb_trans_pane_g4

0x5042,	// (0x00044bd8) bg_tb_trans_pane_g5

0x505a,	// (0x00044bf0) bg_tb_trans_pane_g6

0x5062,	// (0x00044bf8) bg_tb_trans_pane_g7

0x504a,	// (0x00044be0) bg_tb_trans_pane_g8

0x5052,	// (0x00044be8) bg_tb_trans_pane_g9

0x0008,

0xfc46,	// (0x0004f7dc) bg_tb_trans_pane_g

0x81fd,	// (0x00047d93) cell_toolbar_trans_pane_ParamLimits

0x81fd,	// (0x00047d93) cell_toolbar_trans_pane

0x762d,	// (0x000471c3) cell_toolbar_trans_pane_g1

0xdfc7,	// (0x0004db5d) list_form2_midp_pane_t1

0xdfd5,	// (0x0004db6b) list_form2_midp_pane_t2

0x0001,

0xfaef,	// (0x0004f685) list_form2_midp_pane_t

0x7213,	// (0x00046da9) scroll_pane_cp51_ParamLimits

0x73cf,	// (0x00046f65) form2_midp_wait_pane_g1

0x73d8,	// (0x00046f6e) form2_midp_wait_pane_g2

0x73e1,	// (0x00046f77) form2_midp_wait_pane_g3

0x0002,

0xfb04,	// (0x0004f69a) form2_midp_wait_pane_g

0x32e9,	// (0x00042e7f) list_highlight_pane_cp21_ParamLimits

0x7438,	// (0x00046fce) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7447,	// (0x00046fdd) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x65c3,	// (0x00046159) list_single_2graphic_im_pane_ParamLimits

0x65c3,	// (0x00046159) list_single_2graphic_im_pane

0xe3ac,	// (0x0004df42) list_single_2graphic_im_pane_g1_ParamLimits

0xe3ac,	// (0x0004df42) list_single_2graphic_im_pane_g1

0xe3bd,	// (0x0004df53) list_single_2graphic_im_pane_g2_ParamLimits

0xe3bd,	// (0x0004df53) list_single_2graphic_im_pane_g2

0xe3c9,	// (0x0004df5f) list_single_2graphic_im_pane_g3_ParamLimits

0xe3c9,	// (0x0004df5f) list_single_2graphic_im_pane_g3

0x0003,

0xfc59,	// (0x0004f7ef) list_single_2graphic_im_pane_g_ParamLimits

0xfc59,	// (0x0004f7ef) list_single_2graphic_im_pane_g

0xe3dd,	// (0x0004df73) list_single_2graphic_im_pane_t1_ParamLimits

0xe3dd,	// (0x0004df73) list_single_2graphic_im_pane_t1

0x7cb6,	// (0x0004784c) list_single_graphic_2heading_pane_fp_ParamLimits

0x7cb6,	// (0x0004784c) list_single_graphic_2heading_pane_fp

0x0b52,	// (0x000406e8) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x0b52,	// (0x000406e8) list_single_graphic_2heading_pane_fp_g1

0x7ccb,	// (0x00047861) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7ccb,	// (0x00047861) list_single_graphic_2heading_pane_fp_g2

0x3afc,	// (0x00043692) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x3afc,	// (0x00043692) list_single_graphic_2heading_pane_fp_g3

0x3b6f,	// (0x00043705) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x3b6f,	// (0x00043705) list_single_graphic_2heading_pane_fp_g4

0x7cd7,	// (0x0004786d) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7cd7,	// (0x0004786d) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb87,	// (0x0004f71d) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb87,	// (0x0004f71d) list_single_graphic_2heading_pane_fp_g

0x0c9b,	// (0x00040831) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x0c9b,	// (0x00040831) list_single_graphic_2heading_pane_fp_t1

0x0b8a,	// (0x00040720) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x0b8a,	// (0x00040720) list_single_graphic_2heading_pane_fp_t2

0x0cb1,	// (0x00040847) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x0cb1,	// (0x00040847) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc62,	// (0x0004f7f8) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc62,	// (0x0004f7f8) list_single_graphic_2heading_pane_fp_t

0x76b9,	// (0x0004724f) fep_hwr_write_pane_g5_ParamLimits

0x76b9,	// (0x0004724f) fep_hwr_write_pane_g5

0x76c5,	// (0x0004725b) fep_hwr_write_pane_g6_ParamLimits

0x76c5,	// (0x0004725b) fep_hwr_write_pane_g6

0x7f53,	// (0x00047ae9) eswt_shell_pane_ParamLimits

0x5096,	// (0x00044c2c) bg_popup_window_pane_cp18_ParamLimits

0x6353,	// (0x00045ee9) heading_pane_cp70

0x807d,	// (0x00047c13) popup_eswt_tasktip_window_t1_ParamLimits

0xd552,	// (0x0004d0e8) aid_touch_tab_arrow_left

0xd568,	// (0x0004d0fe) aid_touch_tab_arrow_right

0xbdf7,	// (0x0004b98d) title_pane_g3_ParamLimits

0xbdf7,	// (0x0004b98d) title_pane_g3

0x3b20,	// (0x000436b6) set_value_pane_g1

0xc713,	// (0x0004c2a9) popup_toolbar_trans_pane_ParamLimits

0x81d7,	// (0x00047d6d) aid_size_cell_tb_trans_pane_ParamLimits

0x3b61,	// (0x000436f7) bg_tb_trans_pane_ParamLimits

0x81e9,	// (0x00047d7f) grid_tb_trans_pane_ParamLimits

0x3572,	// (0x00043108) cont_note_pane_ParamLimits

0x3572,	// (0x00043108) cont_note_pane

0x38c6,	// (0x0004345c) cont_snote2_single_text_pane_ParamLimits

0x38c6,	// (0x0004345c) cont_snote2_single_text_pane

0x38c6,	// (0x0004345c) cont_snote2_single_graphic_pane_ParamLimits

0x38c6,	// (0x0004345c) cont_snote2_single_graphic_pane

0x569b,	// (0x00045231) cont_note_wait_pane_ParamLimits

0x569b,	// (0x00045231) cont_note_wait_pane

0x569b,	// (0x00045231) cont_note_image_pane_ParamLimits

0x569b,	// (0x00045231) cont_note_image_pane

0x8291,	// (0x00047e27) popup_note2_window_g1_ParamLimits

0x8291,	// (0x00047e27) popup_note2_window_g1

0x82c2,	// (0x00047e58) popup_note2_window_t1_ParamLimits

0x82c2,	// (0x00047e58) popup_note2_window_t1

0x8307,	// (0x00047e9d) popup_note2_window_t2_ParamLimits

0x8307,	// (0x00047e9d) popup_note2_window_t2

0x834c,	// (0x00047ee2) popup_note2_window_t3_ParamLimits

0x834c,	// (0x00047ee2) popup_note2_window_t3

0x8391,	// (0x00047f27) popup_note2_window_t4_ParamLimits

0x8391,	// (0x00047f27) popup_note2_window_t4

0x35f6,	// (0x0004318c) popup_note2_window_t5_ParamLimits

0x35f6,	// (0x0004318c) popup_note2_window_t5

0x0004,

0xfc6e,	// (0x0004f804) popup_note2_window_t_ParamLimits

0xfc6e,	// (0x0004f804) popup_note2_window_t

0x83c0,	// (0x00047f56) popup_note2_image_window_g1_ParamLimits

0x83c0,	// (0x00047f56) popup_note2_image_window_g1

0x83cc,	// (0x00047f62) popup_note2_image_window_g2_ParamLimits

0x83cc,	// (0x00047f62) popup_note2_image_window_g2

0x0001,

0xfc79,	// (0x0004f80f) popup_note2_image_window_g_ParamLimits

0xfc79,	// (0x0004f80f) popup_note2_image_window_g

0x83de,	// (0x00047f74) popup_note2_image_window_t1_ParamLimits

0x83de,	// (0x00047f74) popup_note2_image_window_t1

0x83f6,	// (0x00047f8c) popup_note2_image_window_t2_ParamLimits

0x83f6,	// (0x00047f8c) popup_note2_image_window_t2

0x840e,	// (0x00047fa4) popup_note2_image_window_t3_ParamLimits

0x840e,	// (0x00047fa4) popup_note2_image_window_t3

0x0002,

0xfc7e,	// (0x0004f814) popup_note2_image_window_t_ParamLimits

0xfc7e,	// (0x0004f814) popup_note2_image_window_t

0x56a9,	// (0x0004523f) popup_note2_wait_window_g1_ParamLimits

0x56a9,	// (0x0004523f) popup_note2_wait_window_g1

0x842a,	// (0x00047fc0) popup_note2_wait_window_g2_ParamLimits

0x842a,	// (0x00047fc0) popup_note2_wait_window_g2

0x56c1,	// (0x00045257) popup_note2_wait_window_g3_ParamLimits

0x56c1,	// (0x00045257) popup_note2_wait_window_g3

0x0002,

0xfc85,	// (0x0004f81b) popup_note2_wait_window_g_ParamLimits

0xfc85,	// (0x0004f81b) popup_note2_wait_window_g

0x8436,	// (0x00047fcc) popup_note2_wait_window_t1_ParamLimits

0x8436,	// (0x00047fcc) popup_note2_wait_window_t1

0x8454,	// (0x00047fea) popup_note2_wait_window_t2_ParamLimits

0x8454,	// (0x00047fea) popup_note2_wait_window_t2

0x8472,	// (0x00048008) popup_note2_wait_window_t3_ParamLimits

0x8472,	// (0x00048008) popup_note2_wait_window_t3

0x8484,	// (0x0004801a) popup_note2_wait_window_t4_ParamLimits

0x8484,	// (0x0004801a) popup_note2_wait_window_t4

0x0003,

0xfc8c,	// (0x0004f822) popup_note2_wait_window_t_ParamLimits

0xfc8c,	// (0x0004f822) popup_note2_wait_window_t

0x8496,	// (0x0004802c) wait_bar2_pane_ParamLimits

0x8496,	// (0x0004802c) wait_bar2_pane

0x84ae,	// (0x00048044) popup_snote2_single_text_window_g1_ParamLimits

0x84ae,	// (0x00048044) popup_snote2_single_text_window_g1

0x84d6,	// (0x0004806c) popup_snote2_single_text_window_t1_ParamLimits

0x84d6,	// (0x0004806c) popup_snote2_single_text_window_t1

0x8522,	// (0x000480b8) popup_snote2_single_text_window_t2_ParamLimits

0x8522,	// (0x000480b8) popup_snote2_single_text_window_t2

0x856e,	// (0x00048104) popup_snote2_single_text_window_t3_ParamLimits

0x856e,	// (0x00048104) popup_snote2_single_text_window_t3

0x85af,	// (0x00048145) popup_snote2_single_text_window_t4_ParamLimits

0x85af,	// (0x00048145) popup_snote2_single_text_window_t4

0x85e5,	// (0x0004817b) popup_snote2_single_text_window_t5_ParamLimits

0x85e5,	// (0x0004817b) popup_snote2_single_text_window_t5

0x0004,

0xfc95,	// (0x0004f82b) popup_snote2_single_text_window_t_ParamLimits

0xfc95,	// (0x0004f82b) popup_snote2_single_text_window_t

0x8610,	// (0x000481a6) popup_snote2_single_graphic_window_g1_ParamLimits

0x8610,	// (0x000481a6) popup_snote2_single_graphic_window_g1

0x8638,	// (0x000481ce) popup_snote2_single_graphic_window_g2_ParamLimits

0x8638,	// (0x000481ce) popup_snote2_single_graphic_window_g2

0x0001,

0xfca0,	// (0x0004f836) popup_snote2_single_graphic_window_g_ParamLimits

0xfca0,	// (0x0004f836) popup_snote2_single_graphic_window_g

0x8660,	// (0x000481f6) popup_snote2_single_graphic_window_t1_ParamLimits

0x8660,	// (0x000481f6) popup_snote2_single_graphic_window_t1

0x86ac,	// (0x00048242) popup_snote2_single_graphic_window_t2_ParamLimits

0x86ac,	// (0x00048242) popup_snote2_single_graphic_window_t2

0x856e,	// (0x00048104) popup_snote2_single_graphic_window_t3_ParamLimits

0x856e,	// (0x00048104) popup_snote2_single_graphic_window_t3

0x85af,	// (0x00048145) popup_snote2_single_graphic_window_t4_ParamLimits

0x85af,	// (0x00048145) popup_snote2_single_graphic_window_t4

0x85e5,	// (0x0004817b) popup_snote2_single_graphic_window_t5_ParamLimits

0x85e5,	// (0x0004817b) popup_snote2_single_graphic_window_t5

0x0004,

0xfca5,	// (0x0004f83b) popup_snote2_single_graphic_window_t_ParamLimits

0xfca5,	// (0x0004f83b) popup_snote2_single_graphic_window_t

0x70d4,	// (0x00046c6a) clock_nsta_pane_cp2_t1

0x70d4,	// (0x00046c6a) clock_nsta_pane_cp2_t2

0x0001,

0xfac5,	// (0x0004f65b) clock_nsta_pane_cp2_t

0x0438,	// (0x0003ffce) form_field_data_wide_pane_g1_ParamLimits

0x3afc,	// (0x00043692) form_field_data_wide_pane_g2_ParamLimits

0x3afc,	// (0x00043692) form_field_data_wide_pane_g2

0x3b6f,	// (0x00043705) form_field_data_wide_pane_g3_ParamLimits

0x3b6f,	// (0x00043705) form_field_data_wide_pane_g3

0x0002,

0xf686,	// (0x0004f21c) form_field_data_wide_pane_g_ParamLimits

0xf686,	// (0x0004f21c) form_field_data_wide_pane_g

0xdef4,	// (0x0004da8a) grid_touch_3_pane_ParamLimits

0xdef4,	// (0x0004da8a) grid_touch_3_pane

0xe40e,	// (0x0004dfa4) cell_touch_3_pane_ParamLimits

0xe40e,	// (0x0004dfa4) cell_touch_3_pane

0x762d,	// (0x000471c3) cell_touch_3_pane_g1

0x762d,	// (0x000471c3) cell_touch_3_pane_g2

0x0001,

0xfb4a,	// (0x0004f6e0) cell_touch_3_pane_g

0x3628,	// (0x000431be) cont_query_data_pane

0x3630,	// (0x000431c6) cont_query_data_pane_cp1

0x8726,	// (0x000482bc) button_value_adjust_pane_cp7

0x872e,	// (0x000482c4) query_popup_pane_cp3

0x42c6,	// (0x00043e5c) bg_popup_sub_pane_cp22_ParamLimits

0x151b,	// (0x000410b1) navi_navi_volume_pane_cp2

0x1536,	// (0x000410cc) popup_side_volume_key_window_g2

0x1545,	// (0x000410db) popup_side_volume_key_window_g3

0x0002,

0xf71c,	// (0x0004f2b2) popup_side_volume_key_window_g

0x1562,	// (0x000410f8) popup_side_volume_key_window_t2

0x0001,

0xf723,	// (0x0004f2b9) popup_side_volume_key_window_t

0x457d,	// (0x00044113) popup_side_volume_key_window_ParamLimits

0xbf1a,	// (0x0004bab0) list_double_graphic_pane_g4_ParamLimits

0xbf1a,	// (0x0004bab0) list_double_graphic_pane_g4

0xdd73,	// (0x0004d909) list_single_2heading_msg_pane_ParamLimits

0xdd73,	// (0x0004d909) list_single_2heading_msg_pane

0xc9ac,	// (0x0004c542) list_single_2heading_msg_pane_g1_ParamLimits

0xc9ac,	// (0x0004c542) list_single_2heading_msg_pane_g1

0xc9b8,	// (0x0004c54e) list_single_2heading_msg_pane_g2_ParamLimits

0xc9b8,	// (0x0004c54e) list_single_2heading_msg_pane_g2

0xc9cb,	// (0x0004c561) list_single_2heading_msg_pane_g3_ParamLimits

0xc9cb,	// (0x0004c561) list_single_2heading_msg_pane_g3

0xc9d7,	// (0x0004c56d) list_single_2heading_msg_pane_g4_ParamLimits

0xc9d7,	// (0x0004c56d) list_single_2heading_msg_pane_g4

0x0003,

0xfcb0,	// (0x0004f846) list_single_2heading_msg_pane_g_ParamLimits

0xfcb0,	// (0x0004f846) list_single_2heading_msg_pane_g

0xbb0e,	// (0x0004b6a4) list_single_2heading_msg_pane_t1_ParamLimits

0xbb0e,	// (0x0004b6a4) list_single_2heading_msg_pane_t1

0xbb36,	// (0x0004b6cc) list_single_2heading_msg_pane_t2_ParamLimits

0xbb36,	// (0x0004b6cc) list_single_2heading_msg_pane_t2

0xbba1,	// (0x0004b737) list_single_2heading_msg_pane_t3_ParamLimits

0xbba1,	// (0x0004b737) list_single_2heading_msg_pane_t3

0x0d66,	// (0x000408fc) list_single_2heading_msg_pane_t4_ParamLimits

0x0d66,	// (0x000408fc) list_single_2heading_msg_pane_t4

0x0003,

0xfcb9,	// (0x0004f84f) list_single_2heading_msg_pane_t_ParamLimits

0xfcb9,	// (0x0004f84f) list_single_2heading_msg_pane_t

0x323d,	// (0x00042dd3) title_pane_g4_ParamLimits

0x323d,	// (0x00042dd3) title_pane_g4

0x132a,	// (0x00040ec0) title_pane_stacon_g3_ParamLimits

0x132a,	// (0x00040ec0) title_pane_stacon_g3

0x8254,	// (0x00047dea) list_single_2graphic_im_pane_g4_ParamLimits

0x8254,	// (0x00047dea) list_single_2graphic_im_pane_g4

0x60fa,	// (0x00045c90) popup_side_volume_key_window_cp

0x690c,	// (0x000464a2) main_idle_act2_pane_t1

0x1ed5,	// (0x00041a6b) toolbar_button_pane_g10

0xd138,	// (0x0004ccce) popup_toolbar_window_cp1

0x70c5,	// (0x00046c5b) clock_nsta_pane_cp_t1

0x70c5,	// (0x00046c5b) clock_nsta_pane_cp_t2

0x0001,

0xfac0,	// (0x0004f656) clock_nsta_pane_cp_t

0x151b,	// (0x000410b1) navi_navi_volume_pane_cp2_ParamLimits

0x152a,	// (0x000410c0) popup_side_volume_key_window_g1_ParamLimits

0x1536,	// (0x000410cc) popup_side_volume_key_window_g2_ParamLimits

0x1545,	// (0x000410db) popup_side_volume_key_window_g3_ParamLimits

0xf71c,	// (0x0004f2b2) popup_side_volume_key_window_g_ParamLimits

0x23b8,	// (0x00041f4e) fep_hwr_aid_pane

0xe0ac,	// (0x0004dc42) bg_fep_hwr_top_pane_g4_ParamLimits

0x7689,	// (0x0004721f) fep_hwr_top_pane_g1_ParamLimits

0x769b,	// (0x00047231) fep_hwr_top_pane_g2_ParamLimits

0x2471,	// (0x00042007) fep_hwr_top_pane_g3_ParamLimits

0xfb15,	// (0x0004f6ab) fep_hwr_top_pane_g_ParamLimits

0x2486,	// (0x0004201c) fep_hwr_top_text_pane_ParamLimits

0x5ebd,	// (0x00045a53) aid_touch_tab_arrow_arrow_2

0x5ec6,	// (0x00045a5c) aid_touch_tab_arrow_left_2

0x23cc,	// (0x00041f62) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x2403,	// (0x00041f99) fep_hwr_prediction_pane

0x77fb,	// (0x00047391) fep_vkb_prediction_pane

0xe1e6,	// (0x0004dd7c) fep_vkb_side_pane_g3_ParamLimits

0xe1e6,	// (0x0004dd7c) fep_vkb_side_pane_g3

0x78ab,	// (0x00047441) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7d2b,	// (0x000478c1) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7d38,	// (0x000478ce) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbf,	// (0x0004f755) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x8753,	// (0x000482e9) fep_hwr_prediction_pane_g1

0x27bb,	// (0x00042351) fep_hwr_prediction_pane_g2

0x27c3,	// (0x00042359) fep_hwr_prediction_pane_g3

0x27cb,	// (0x00042361) fep_hwr_prediction_pane_g4

0x0003,

0xfcc2,	// (0x0004f858) fep_hwr_prediction_pane_g

0x8753,	// (0x000482e9) fep_vkb_prediction_pane_g1

0x875d,	// (0x000482f3) fep_vkb_prediction_pane_g2

0x8765,	// (0x000482fb) fep_vkb_prediction_pane_g3

0x876d,	// (0x00048303) fep_vkb_prediction_pane_g4

0x0003,

0xfccb,	// (0x0004f861) fep_vkb_prediction_pane_g

0x687d,	// (0x00046413) slider_set_pane_g3

0x6891,	// (0x00046427) slider_set_pane_g4

0x68a9,	// (0x0004643f) slider_set_pane_g5

0x687d,	// (0x00046413) slider_set_pane_g6

0x21bd,	// (0x00041d53) slider_set_pane_g7

0x6570,	// (0x00046106) slider_form_pane_g3

0x6579,	// (0x0004610f) slider_form_pane_g4

0x6581,	// (0x00046117) slider_form_pane_g5

0x6570,	// (0x00046106) slider_form_pane_g6

0xdd45,	// (0x0004d8db) slider_form_pane_g7

0x6bb6,	// (0x0004674c) slider_set_pane_vc_g3

0x6bbf,	// (0x00046755) slider_set_pane_vc_g4

0x6bc8,	// (0x0004675e) slider_set_pane_vc_g5

0x6bb6,	// (0x0004674c) slider_set_pane_vc_g6

0x6bd1,	// (0x00046767) slider_set_pane_vc_g7

0x6d91,	// (0x00046927) slider_form_pane_vc_g1

0x6d9a,	// (0x00046930) slider_form_pane_vc_g2

0x6da3,	// (0x00046939) slider_form_pane_vc_g3

0x6d91,	// (0x00046927) slider_form_pane_vc_g4

0x6dac,	// (0x00046942) slider_form_pane_vc_g5

0x0004,

0xfa92,	// (0x0004f628) slider_form_pane_vc_g

0x31f5,	// (0x00042d8b) main_idle_act3_pane

0x8775,	// (0x0004830b) ai3_links_pane

0xe456,	// (0x0004dfec) popup_ai3_data_window_ParamLimits

0xe456,	// (0x0004dfec) popup_ai3_data_window

0x31f5,	// (0x00042d8b) grid_ai3_links_pane

0xe470,	// (0x0004e006) cell_ai3_links_pane_ParamLimits

0xe470,	// (0x0004e006) cell_ai3_links_pane

0x87b0,	// (0x00048346) bg_popup_sub_pane_cp11

0x87bd,	// (0x00048353) cell_ai3_links_pane_g1

0x31f5,	// (0x00042d8b) bg_popup_sub_pane_cp12

0x87e2,	// (0x00048378) heading_ai3_data_pane

0x87ea,	// (0x00048380) list_ai3_gene_pane

0x87f6,	// (0x0004838c) popup_ai3_data_window_g1

0x87fe,	// (0x00048394) heading_ai3_data_pane_g1

0x8806,	// (0x0004839c) heading_ai3_data_pane_t1

0x8814,	// (0x000483aa) list_double_ai3_gene_pane_ParamLimits

0x8814,	// (0x000483aa) list_double_ai3_gene_pane

0x8821,	// (0x000483b7) list_single_ai3_gene_pane_ParamLimits

0x8821,	// (0x000483b7) list_single_ai3_gene_pane

0x75f2,	// (0x00047188) list_highlight_pane_cp7_ParamLimits

0x75f2,	// (0x00047188) list_highlight_pane_cp7

0x882e,	// (0x000483c4) list_single_a13_gene_pane_t1_ParamLimits

0x882e,	// (0x000483c4) list_single_a13_gene_pane_t1

0x8845,	// (0x000483db) list_single_ai3_gene_pane_g1

0x884e,	// (0x000483e4) list_single_ai3_gene_pane_g2

0x0001,

0xfcd4,	// (0x0004f86a) list_single_ai3_gene_pane_g

0x8856,	// (0x000483ec) list_double_ai3_gene_pane_g1_ParamLimits

0x8856,	// (0x000483ec) list_double_ai3_gene_pane_g1

0x8862,	// (0x000483f8) list_double_ai3_gene_pane_t1_ParamLimits

0x8862,	// (0x000483f8) list_double_ai3_gene_pane_t1

0x887e,	// (0x00048414) list_double_ai3_gene_pane_t2_ParamLimits

0x887e,	// (0x00048414) list_double_ai3_gene_pane_t2

0x8894,	// (0x0004842a) list_double_ai3_gene_pane_t3_ParamLimits

0x8894,	// (0x0004842a) list_double_ai3_gene_pane_t3

0x0002,

0xfcd9,	// (0x0004f86f) list_double_ai3_gene_pane_t_ParamLimits

0xfcd9,	// (0x0004f86f) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0cc7,	// (0x0004085d) aid_size_min_col_2

0xe440,	// (0x0004dfd6) aid_size_min_msg_ParamLimits

0xe440,	// (0x0004dfd6) aid_size_min_msg

0xe1fa,	// (0x0004dd90) fep_vkb_top_text_pane_g2_ParamLimits

0xe1fa,	// (0x0004dd90) fep_vkb_top_text_pane_g2

0x0001,

0xfb45,	// (0x0004f6db) fep_vkb_top_text_pane_g_ParamLimits

0xfb45,	// (0x0004f6db) fep_vkb_top_text_pane_g

0x31f5,	// (0x00042d8b) main_hc_apps_shell_pane

0x88b1,	// (0x00048447) grid_hc_apps_pane_ParamLimits

0x88b1,	// (0x00048447) grid_hc_apps_pane

0x88c0,	// (0x00048456) list_hc_apps_pane

0x88c8,	// (0x0004845e) scroll_pane_cp37_ParamLimits

0x88c8,	// (0x0004845e) scroll_pane_cp37

0xe48a,	// (0x0004e020) cell_hc_apps_pane_ParamLimits

0xe48a,	// (0x0004e020) cell_hc_apps_pane

0xe548,	// (0x0004e0de) cell_hc_apps_pane_g1_ParamLimits

0xe548,	// (0x0004e0de) cell_hc_apps_pane_g1

0x89b3,	// (0x00048549) cell_hc_apps_pane_g2_ParamLimits

0x89b3,	// (0x00048549) cell_hc_apps_pane_g2

0x89cf,	// (0x00048565) cell_hc_apps_pane_g3_ParamLimits

0x89cf,	// (0x00048565) cell_hc_apps_pane_g3

0x0002,

0xfce0,	// (0x0004f876) cell_hc_apps_pane_g_ParamLimits

0xfce0,	// (0x0004f876) cell_hc_apps_pane_g

0xe575,	// (0x0004e10b) cell_hc_apps_pane_t1_ParamLimits

0xe575,	// (0x0004e10b) cell_hc_apps_pane_t1

0x3572,	// (0x00043108) grid_highlight_pane_cp10_ParamLimits

0x3572,	// (0x00043108) grid_highlight_pane_cp10

0xe5b3,	// (0x0004e149) list_single_hc_apps_pane_ParamLimits

0xe5b3,	// (0x0004e149) list_single_hc_apps_pane

0xe5e0,	// (0x0004e176) list_single_hc_apps_pane_g1

0xc9ef,	// (0x0004c585) list_single_hc_apps_pane_g2

0x0001,

0xfce7,	// (0x0004f87d) list_single_hc_apps_pane_g

0xca08,	// (0x0004c59e) list_single_hc_apps_pane_g2_copy1

0x0d8b,	// (0x00040921) list_single_hc_apps_pane_t1

0x32e9,	// (0x00042e7f) bg_set_opt_pane_cp_ParamLimits

0x11a6,	// (0x00040d3c) setting_slider_pane_t1_ParamLimits

0x11bf,	// (0x00040d55) setting_slider_pane_t2_ParamLimits

0x11d9,	// (0x00040d6f) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0004f0fa) setting_slider_pane_t_ParamLimits

0x11f1,	// (0x00040d87) slider_set_pane_ParamLimits

0x17e0,	// (0x00041376) control_pane_g5_ParamLimits

0x17e0,	// (0x00041376) control_pane_g5

0x63bf,	// (0x00045f55) slider_set_pane_g1_ParamLimits

0x21b1,	// (0x00041d47) slider_set_pane_g2_ParamLimits

0x687d,	// (0x00046413) slider_set_pane_g3_ParamLimits

0x6891,	// (0x00046427) slider_set_pane_g4_ParamLimits

0x68a9,	// (0x0004643f) slider_set_pane_g5_ParamLimits

0x687d,	// (0x00046413) slider_set_pane_g6_ParamLimits

0x21bd,	// (0x00041d53) slider_set_pane_g7_ParamLimits

0xf96a,	// (0x0004f500) slider_set_pane_g_ParamLimits

0x465e,	// (0x000441f4) navi_icon_text_pane_ParamLimits

0xd51b,	// (0x0004d0b1) aid_fill_nsta_2_ParamLimits

0xd552,	// (0x0004d0e8) aid_touch_tab_arrow_left_ParamLimits

0xd568,	// (0x0004d0fe) aid_touch_tab_arrow_right_ParamLimits

0xd603,	// (0x0004d199) clock_nsta_pane_ParamLimits

0x5e9f,	// (0x00045a35) navi_icon_pane_g1_ParamLimits

0x5eab,	// (0x00045a41) navi_text_pane_t1_ParamLimits

0xdfbb,	// (0x0004db51) navi_icon_text_pane_g1_ParamLimits

0x71dd,	// (0x00046d73) navi_icon_text_pane_t1_ParamLimits

0xe5e0,	// (0x0004e176) list_single_hc_apps_pane_g1_ParamLimits

0xc9ef,	// (0x0004c585) list_single_hc_apps_pane_g2_ParamLimits

0xfce7,	// (0x0004f87d) list_single_hc_apps_pane_g_ParamLimits

0xca08,	// (0x0004c59e) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x0d8b,	// (0x00040921) list_single_hc_apps_pane_t1_ParamLimits

0xbd61,	// (0x0004b8f7) popup_toolbar2_fixed_window_ParamLimits

0xbd61,	// (0x0004b8f7) popup_toolbar2_fixed_window

0xc709,	// (0x0004c29f) popup_toolbar2_float_window

0x31f5,	// (0x00042d8b) bg_popup_sub_pane_cp27

0x8aa6,	// (0x0004863c) grid_toolbar2_float_pane

0x31f5,	// (0x00042d8b) bg_popup_sub_pane_cp26

0x8aa6,	// (0x0004863c) grid_toolbar2_fixed_pane

0xe5f9,	// (0x0004e18f) cell_toolbar2_fixed_pane_ParamLimits

0xe5f9,	// (0x0004e18f) cell_toolbar2_fixed_pane

0xe613,	// (0x0004e1a9) cell_toolbar2_fixed_pane_g1

0x8ac7,	// (0x0004865d) toolbar2_fixed_button_pane

0x5022,	// (0x00044bb8) toolbar2_fixed_button_pane_g1

0x502a,	// (0x00044bc0) toolbar2_fixed_button_pane_g2

0x5032,	// (0x00044bc8) toolbar2_fixed_button_pane_g3

0x503a,	// (0x00044bd0) toolbar2_fixed_button_pane_g4

0x5042,	// (0x00044bd8) toolbar2_fixed_button_pane_g5

0x504a,	// (0x00044be0) toolbar2_fixed_button_pane_g6

0x5052,	// (0x00044be8) toolbar2_fixed_button_pane_g7

0x505a,	// (0x00044bf0) toolbar2_fixed_button_pane_g8

0x5062,	// (0x00044bf8) toolbar2_fixed_button_pane_g9

0x0008,

0xf86c,	// (0x0004f402) toolbar2_fixed_button_pane_g

0x8acf,	// (0x00048665) cell_toolbar2_float_pane_ParamLimits

0x8acf,	// (0x00048665) cell_toolbar2_float_pane

0x8ae0,	// (0x00048676) cell_toolbar2_float_pane_g1

0x8ac7,	// (0x0004865d) toolbar2_fixed_button_pane_cp

0xe0d4,	// (0x0004dc6a) fep_vkb_accented_list_pane_ParamLimits

0xe0d4,	// (0x0004dc6a) fep_vkb_accented_list_pane

0x25d4,	// (0x0004216a) bg_popup_fep_shadow_pane_g9

0x47de,	// (0x00044374) bg_popup_fep_shadow_pane_cp3

0x3cac,	// (0x00043842) list_accented_list_pane

0x8ae9,	// (0x0004867f) list_single_accented_list_pane_ParamLimits

0x8ae9,	// (0x0004867f) list_single_accented_list_pane

0x47de,	// (0x00044374) list_highlight_pane_cp10

0x8afa,	// (0x00048690) list_single_accented_list_pane_t1

0xc633,	// (0x0004c1c9) popup_slider_window_ParamLimits

0xc633,	// (0x0004c1c9) popup_slider_window

0x8736,	// (0x000482cc) aid_indentation_list_msg

0xe70c,	// (0x0004e2a2) bg_popup_window_pane_cp19

0x8c1e,	// (0x000487b4) popup_slider_window_g1

0x8c3a,	// (0x000487d0) popup_slider_window_g2

0x8c56,	// (0x000487ec) popup_slider_window_g3

0x0005,

0xfcec,	// (0x0004f882) popup_slider_window_g

0x8cb2,	// (0x00048848) popup_slider_window_t1

0x8d26,	// (0x000488bc) small_volume_slider_vertical_pane

0x762d,	// (0x000471c3) small_volume_slider_vertical_pane_g1

0x762d,	// (0x000471c3) small_volume_slider_vertical_pane_g2

0x8d42,	// (0x000488d8) small_volume_slider_vertical_pane_g3

0x0002,

0xfcfe,	// (0x0004f894) small_volume_slider_vertical_pane_g

0xbccf,	// (0x0004b865) area_side_right_pane_ParamLimits

0xbccf,	// (0x0004b865) area_side_right_pane

0xca24,	// (0x0004c5ba) aid_size_side_button_ParamLimits

0xca24,	// (0x0004c5ba) aid_size_side_button

0xca3d,	// (0x0004c5d3) grid_sctrl_middle_pane_ParamLimits

0xca3d,	// (0x0004c5d3) grid_sctrl_middle_pane

0x283b,	// (0x000423d1) sctrl_sk_bottom_pane

0x284c,	// (0x000423e2) sctrl_sk_top_pane

0x285e,	// (0x000423f4) aid_touch_sctrl_top

0x3572,	// (0x00043108) bg_sctrl_sk_pane_ParamLimits

0x3572,	// (0x00043108) bg_sctrl_sk_pane

0x286b,	// (0x00042401) sctrl_sk_top_pane_g1

0x2878,	// (0x0004240e) sctrl_sk_top_pane_t1

0x285e,	// (0x000423f4) aid_touch_sctrl_bottom

0x3572,	// (0x00043108) bg_sctrl_sk_pane_cp_ParamLimits

0x3572,	// (0x00043108) bg_sctrl_sk_pane_cp

0x2893,	// (0x00042429) sctrl_sk_bottom_pane_g1

0x2878,	// (0x0004240e) sctrl_sk_bottom_pane_t1

0xca57,	// (0x0004c5ed) cell_sctrl_middle_pane_ParamLimits

0xca57,	// (0x0004c5ed) cell_sctrl_middle_pane

0xca68,	// (0x0004c5fe) aid_touch_sctrl_middle_ParamLimits

0xca68,	// (0x0004c5fe) aid_touch_sctrl_middle

0xca75,	// (0x0004c60b) bg_sctrl_middle_pane_ParamLimits

0xca75,	// (0x0004c60b) bg_sctrl_middle_pane

0x8dca,	// (0x00048960) cell_sctrl_middle_pane_g1_ParamLimits

0x8dca,	// (0x00048960) cell_sctrl_middle_pane_g1

0xca83,	// (0x0004c619) cell_sctrl_middle_pane_g2_ParamLimits

0xca83,	// (0x0004c619) cell_sctrl_middle_pane_g2

0x0001,

0xfd0a,	// (0x0004f8a0) cell_sctrl_middle_pane_g_ParamLimits

0xfd0a,	// (0x0004f8a0) cell_sctrl_middle_pane_g

0x5022,	// (0x00044bb8) bg_sctrl_middle_pane_g1

0x502a,	// (0x00044bc0) bg_sctrl_middle_pane_g2

0x5032,	// (0x00044bc8) bg_sctrl_middle_pane_g3

0x503a,	// (0x00044bd0) bg_sctrl_middle_pane_g4

0x5042,	// (0x00044bd8) bg_sctrl_middle_pane_g5

0x504a,	// (0x00044be0) bg_sctrl_middle_pane_g6

0x5052,	// (0x00044be8) bg_sctrl_middle_pane_g7

0x505a,	// (0x00044bf0) bg_sctrl_middle_pane_g8

0x0007,

0xfd0f,	// (0x0004f8a5) bg_sctrl_middle_pane_g

0x5062,	// (0x00044bf8) bg_sctrl_middle_pane_g8_copy1

0x5022,	// (0x00044bb8) bg_sctrl_sk_pane_g1

0x502a,	// (0x00044bc0) bg_sctrl_sk_pane_g2

0x5032,	// (0x00044bc8) bg_sctrl_sk_pane_g3

0x0008,

0xf86c,	// (0x0004f402) bg_sctrl_sk_pane_g

0x3a84,	// (0x0004361a) aid_size_touch_scroll_bar

0x503a,	// (0x00044bd0) bg_sctrl_sk_pane_g4

0x5042,	// (0x00044bd8) bg_sctrl_sk_pane_g5

0x504a,	// (0x00044be0) bg_sctrl_sk_pane_g6

0x5052,	// (0x00044be8) bg_sctrl_sk_pane_g7

0x505a,	// (0x00044bf0) bg_sctrl_sk_pane_g8

0x5062,	// (0x00044bf8) bg_sctrl_sk_pane_g9

0x1988,	// (0x0004151e) popup_fep_china_hwr2_fs_candidate_window

0xc153,	// (0x0004bce9) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc153,	// (0x0004bce9) popup_fep_china_hwr2_fs_control_window

0x78ab,	// (0x00047441) sctrl_sk_top_pane_g2

0x0001,

0xfd05,	// (0x0004f89b) sctrl_sk_top_pane_g

0xe7c4,	// (0x0004e35a) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe7c4,	// (0x0004e35a) aid_fep_china_hwr2_fs_cell

0xe7d8,	// (0x0004e36e) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe7d8,	// (0x0004e36e) bg_popup_fep_shadow_pane_cp4

0xe7ef,	// (0x0004e385) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe7ef,	// (0x0004e385) bg_popup_fep_shadow_pane_cp5

0xe801,	// (0x0004e397) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe801,	// (0x0004e397) popup_fep_china_hwr2_fs_control_bar_grid

0xe815,	// (0x0004e3ab) popup_fep_china_hwr2_fs_control_funtion_grid

0x8d9e,	// (0x00048934) aid_fep_china_hwr2_fs_candi_cell

0x31f5,	// (0x00042d8b) bg_popup_fep_shadow_pane_cp6

0x8da8,	// (0x0004893e) popup_fep_china_hwr2_fs_candidate_grid

0xe81d,	// (0x0004e3b3) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe81d,	// (0x0004e3b3) cell_fep_china_hwr2_fs_funtion_grid

0x762d,	// (0x000471c3) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8dca,	// (0x00048960) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8dca,	// (0x00048960) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8dd8,	// (0x0004896e) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8dd8,	// (0x0004896e) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd20,	// (0x0004f8b6) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd20,	// (0x0004f8b6) cell_fep_china_hwr2_fs_funtion_grid_g

0xe835,	// (0x0004e3cb) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe835,	// (0x0004e3cb) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe84a,	// (0x0004e3e0) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe84a,	// (0x0004e3e0) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd25,	// (0x0004f8bb) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd25,	// (0x0004f8bb) cell_fep_china_hwr2_fs_funtion_grid_t

0x8e1f,	// (0x000489b5) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8e27,	// (0x000489bd) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8e2f,	// (0x000489c5) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2a,	// (0x0004f8c0) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8e37,	// (0x000489cd) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8e37,	// (0x000489cd) cell_fep_china_hwr2_fs_candidate_grid

0x8e50,	// (0x000489e6) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8e58,	// (0x000489ee) popup_fep_china_hwr2_fs_candidate_grid_g21

0x762d,	// (0x000471c3) cell_fep_china_hwr2_fs_candidate_grid_g1

0x762d,	// (0x000471c3) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4a,	// (0x0004f6e0) cell_fep_china_hwr2_fs_candidate_grid_g

0x8e60,	// (0x000489f6) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4c1a,	// (0x000447b0) clock_nsta_pane_cp_24_ParamLimits

0x4c1a,	// (0x000447b0) clock_nsta_pane_cp_24

0x4c98,	// (0x0004482e) indicator_nsta_pane_cp_24_ParamLimits

0x4c98,	// (0x0004482e) indicator_nsta_pane_cp_24

0x5d1b,	// (0x000458b1) heading_pane_g1

0x0001,

0xf8d1,	// (0x0004f467) heading_pane_g

0x6713,	// (0x000462a9) grid_sct_catagory_button_pane

0x6743,	// (0x000462d9) scroll_pane_cp5_ParamLimits

0x721f,	// (0x00046db5) button_value_adjust_pane_cp5_ParamLimits

0x721f,	// (0x00046db5) button_value_adjust_pane_cp5

0x72fe,	// (0x00046e94) form2_midp_time_pane_ParamLimits

0x8e6e,	// (0x00048a04) cell_sct_catagory_button_pane_ParamLimits

0x8e6e,	// (0x00048a04) cell_sct_catagory_button_pane

0x75f2,	// (0x00047188) bg_button_pane_cp01_ParamLimits

0x75f2,	// (0x00047188) bg_button_pane_cp01

0x762d,	// (0x000471c3) cell_sct_catagory_button_pane_g1

0xc6ac,	// (0x0004c242) popup_tb_extension_window

0xe866,	// (0x0004e3fc) aid_size_cell_ext_ParamLimits

0xe866,	// (0x0004e3fc) aid_size_cell_ext

0x38c6,	// (0x0004345c) bg_tb_trans_pane_cp1_ParamLimits

0x38c6,	// (0x0004345c) bg_tb_trans_pane_cp1

0xe88c,	// (0x0004e422) grid_tb_ext_pane_ParamLimits

0xe88c,	// (0x0004e422) grid_tb_ext_pane

0xe8c7,	// (0x0004e45d) cell_tb_ext_pane_ParamLimits

0xe8c7,	// (0x0004e45d) cell_tb_ext_pane

0xe8ef,	// (0x0004e485) cell_tb_ext_pane_g1_ParamLimits

0xe8ef,	// (0x0004e485) cell_tb_ext_pane_g1

0x8f02,	// (0x00048a98) cell_tb_ext_pane_t1

0x3572,	// (0x00043108) list_highlight_pane_cp11_ParamLimits

0x3572,	// (0x00043108) list_highlight_pane_cp11

0x10d9,	// (0x00040c6f) popup_uni_indicator_window_ParamLimits

0x10d9,	// (0x00040c6f) popup_uni_indicator_window

0x3b61,	// (0x000436f7) bg_popup_sub_pane_cp14

0x8f1d,	// (0x00048ab3) list_uniindi_pane

0x8f29,	// (0x00048abf) uniindi_top_pane

0x3572,	// (0x00043108) bg_uniindi_top_pane

0x8f48,	// (0x00048ade) uniindi_top_pane_g1

0x8f5e,	// (0x00048af4) uniindi_top_pane_g2

0x0003,

0xfd31,	// (0x0004f8c7) uniindi_top_pane_g

0x8f88,	// (0x00048b1e) uniindi_top_pane_t1

0x8fb2,	// (0x00048b48) list_single_uniindi_pane_ParamLimits

0x8fb2,	// (0x00048b48) list_single_uniindi_pane

0x762d,	// (0x000471c3) bg_uniindi_top_pane_g1

0x8fc5,	// (0x00048b5b) list_single_uniindi_pane_g1

0x8fd8,	// (0x00048b6e) list_single_uniindi_pane_t1

0x31f5,	// (0x00042d8b) control_bg_pane

0x8ffd,	// (0x00048b93) bg_sctrl_sk_pane_cp1

0x9006,	// (0x00048b9c) bg_sctrl_sk_pane_cp2

0x900f,	// (0x00048ba5) control_bg_pane_g1

0x9018,	// (0x00048bae) control_bg_pane_g2

0x0001,

0xfd3a,	// (0x0004f8d0) control_bg_pane_g

0x7068,	// (0x00046bfe) cell_indicator_nsta_pane_g1_ParamLimits

0xdf23,	// (0x0004dab9) cell_indicator_nsta_pane_g2_ParamLimits

0xfaae,	// (0x0004f644) cell_indicator_nsta_pane_g_ParamLimits

0x0b28,	// (0x000406be) form2_midp_time_pane_t1_ParamLimits

0x23aa,	// (0x00041f40) main_idle_act4_pane_ParamLimits

0x23aa,	// (0x00041f40) main_idle_act4_pane

0xc6ac,	// (0x0004c242) popup_tb_extension_window_ParamLimits

0xe8ae,	// (0x0004e444) tb_ext_find_pane_ParamLimits

0xe8ae,	// (0x0004e444) tb_ext_find_pane

0x9021,	// (0x00048bb7) ai_gene_pane_1_cp1

0x4917,	// (0x000444ad) ai_gene_pane_2_cp1

0x9029,	// (0x00048bbf) list_single_idle_plugin_calendar_pane

0x9032,	// (0x00048bc8) list_single_idle_plugin_notification_pane

0x903b,	// (0x00048bd1) list_single_idle_plugin_player_pane

0xe90c,	// (0x0004e4a2) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe90c,	// (0x0004e4a2) list_single_idle_plugin_shortcut_pane

0xe934,	// (0x0004e4ca) main_idle_act4_pane_t1

0xe94a,	// (0x0004e4e0) main_idle_act4_pane_t2

0x0001,

0xfd3f,	// (0x0004f8d5) main_idle_act4_pane_t

0xe960,	// (0x0004e4f6) middle_sk_idle_act4_pane_ParamLimits

0xe960,	// (0x0004e4f6) middle_sk_idle_act4_pane

0xe97c,	// (0x0004e512) popup_clock_digital_analogue_window_cp2

0xe9a4,	// (0x0004e53a) shortcut_wheel_idle_act4_pane_ParamLimits

0xe9a4,	// (0x0004e53a) shortcut_wheel_idle_act4_pane

0x762d,	// (0x000471c3) shortcut_wheel_idle_act4_pane_g1

0x762d,	// (0x000471c3) shortcut_wheel_idle_act4_pane_g2

0x762d,	// (0x000471c3) shortcut_wheel_idle_act4_pane_g3

0x762d,	// (0x000471c3) shortcut_wheel_idle_act4_pane_g4

0x762d,	// (0x000471c3) shortcut_wheel_idle_act4_pane_g5

0x90ce,	// (0x00048c64) shortcut_wheel_idle_act4_pane_g6

0x90d6,	// (0x00048c6c) shortcut_wheel_idle_act4_pane_g7

0x90de,	// (0x00048c74) shortcut_wheel_idle_act4_pane_g8

0x90e6,	// (0x00048c7c) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd44,	// (0x0004f8da) shortcut_wheel_idle_act4_pane_g

0xe0ac,	// (0x0004dc42) middle_sk_idle_act4_pane_g1_ParamLimits

0xe0ac,	// (0x0004dc42) middle_sk_idle_act4_pane_g1

0xea21,	// (0x0004e5b7) middle_sk_idle_act4_pane_g2_ParamLimits

0xea21,	// (0x0004e5b7) middle_sk_idle_act4_pane_g2

0x0001,

0xfd67,	// (0x0004f8fd) middle_sk_idle_act4_pane_g_ParamLimits

0xfd67,	// (0x0004f8fd) middle_sk_idle_act4_pane_g

0xea39,	// (0x0004e5cf) middle_sk_idle_act4_pane_t1_ParamLimits

0xea39,	// (0x0004e5cf) middle_sk_idle_act4_pane_t1

0xea75,	// (0x0004e60b) grid_ai_shortcut_pane_ParamLimits

0xea75,	// (0x0004e60b) grid_ai_shortcut_pane

0xea92,	// (0x0004e628) list_highlight_pane_cp16_ParamLimits

0xea92,	// (0x0004e628) list_highlight_pane_cp16

0xea9f,	// (0x0004e635) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xea9f,	// (0x0004e635) list_single_idle_plugin_shortcut_pane_g1

0xeaab,	// (0x0004e641) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xeaab,	// (0x0004e641) list_single_idle_plugin_shortcut_pane_g2

0xeac7,	// (0x0004e65d) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xeac7,	// (0x0004e65d) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6c,	// (0x0004f902) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6c,	// (0x0004f902) list_single_idle_plugin_shortcut_pane_g

0xeadc,	// (0x0004e672) cell_ai_shortcut_pane_ParamLimits

0xeadc,	// (0x0004e672) cell_ai_shortcut_pane

0xeaf2,	// (0x0004e688) cell_ai_shortcut_pane_g1_ParamLimits

0xeaf2,	// (0x0004e688) cell_ai_shortcut_pane_g1

0x9021,	// (0x00048bb7) ai_gene_pane_1_cp2

0x9216,	// (0x00048dac) ai_gene_pane_2_cp2

0x921e,	// (0x00048db4) list_highlight_pane_cp15

0x9227,	// (0x00048dbd) list_single_idle_plugin_calendar_pane_g1

0x921e,	// (0x00048db4) list_highlight_pane_cp17

0x922f,	// (0x00048dc5) list_single_idle_plugin_calendar_pane_g1_copy1

0x9237,	// (0x00048dcd) list_single_idle_plugin_player_pane_g1

0x69ae,	// (0x00046544) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd73,	// (0x0004f909) list_single_idle_plugin_player_pane_g

0x923f,	// (0x00048dd5) list_single_idle_plugin_player_pane_t1

0x924d,	// (0x00048de3) list_single_idle_plugin_player_pane_t2

0x925b,	// (0x00048df1) list_single_idle_plugin_player_pane_t3

0x9269,	// (0x00048dff) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd78,	// (0x0004f90e) list_single_idle_plugin_player_pane_t

0x9277,	// (0x00048e0d) wait_bar_pane_cp15

0x927f,	// (0x00048e15) grid_ai_notification_pane

0x69ae,	// (0x00046544) list_single_idle_plugin_notification_pane_g1

0xeb14,	// (0x0004e6aa) cell_ai_notification_pane_ParamLimits

0xeb14,	// (0x0004e6aa) cell_ai_notification_pane

0x9295,	// (0x00048e2b) cell_ai_notification_pane_g1

0x929d,	// (0x00048e33) cell_ai_notification_pane_t1

0xeb21,	// (0x0004e6b7) tb_ext_find_button_pane

0xeb29,	// (0x0004e6bf) tb_ext_find_pane_g1

0xeb31,	// (0x0004e6c7) tb_ext_find_pane_t1

0x41d6,	// (0x00043d6c) tb_ext_find_button_pane_g1

0x92c9,	// (0x00048e5f) tb_ext_find_button_pane_g2

0x0001,

0xfd81,	// (0x0004f917) tb_ext_find_button_pane_g

0xe934,	// (0x0004e4ca) main_idle_act4_pane_t1_ParamLimits

0xe94a,	// (0x0004e4e0) main_idle_act4_pane_t2_ParamLimits

0xfd3f,	// (0x0004f8d5) main_idle_act4_pane_t_ParamLimits

0xe97c,	// (0x0004e512) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe994,	// (0x0004e52a) sat_plugin_idle_act4_pane_ParamLimits

0xe994,	// (0x0004e52a) sat_plugin_idle_act4_pane

0xeb3f,	// (0x0004e6d5) sat_plugin_idle_act4_pane_t1_ParamLimits

0xeb3f,	// (0x0004e6d5) sat_plugin_idle_act4_pane_t1

0xeb57,	// (0x0004e6ed) sat_plugin_idle_act4_pane_t2_ParamLimits

0xeb57,	// (0x0004e6ed) sat_plugin_idle_act4_pane_t2

0xeb6f,	// (0x0004e705) sat_plugin_idle_act4_pane_t3_ParamLimits

0xeb6f,	// (0x0004e705) sat_plugin_idle_act4_pane_t3

0xeb87,	// (0x0004e71d) sat_plugin_idle_act4_pane_t4_ParamLimits

0xeb87,	// (0x0004e71d) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd86,	// (0x0004f91c) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd86,	// (0x0004f91c) sat_plugin_idle_act4_pane_t

0x1014,	// (0x00040baa) popup_battery_window_ParamLimits

0x1014,	// (0x00040baa) popup_battery_window

0x3572,	// (0x00043108) bg_popup_sub_pane_cp25_ParamLimits

0x3572,	// (0x00043108) bg_popup_sub_pane_cp25

0x931e,	// (0x00048eb4) popup_battery_window_g1_ParamLimits

0x931e,	// (0x00048eb4) popup_battery_window_g1

0x932a,	// (0x00048ec0) popup_battery_window_t1_ParamLimits

0x932a,	// (0x00048ec0) popup_battery_window_t1

0x933c,	// (0x00048ed2) popup_battery_window_t2_ParamLimits

0x933c,	// (0x00048ed2) popup_battery_window_t2

0x0001,

0xfd8f,	// (0x0004f925) popup_battery_window_t_ParamLimits

0xfd8f,	// (0x0004f925) popup_battery_window_t

0xd41b,	// (0x0004cfb1) midp_canvas_pane_ParamLimits

0xd476,	// (0x0004d00c) midp_keypad_pane_ParamLimits

0xd476,	// (0x0004d00c) midp_keypad_pane

0x4b1e,	// (0x000446b4) main_midp_pane_ParamLimits

0x70e3,	// (0x00046c79) signal_pane_g2_cp_ParamLimits

0xeb9f,	// (0x0004e735) aid_size_cell_midp_keypad_ParamLimits

0xeb9f,	// (0x0004e735) aid_size_cell_midp_keypad

0xebbd,	// (0x0004e753) midp_keyp_game_grid_pane_ParamLimits

0xebbd,	// (0x0004e753) midp_keyp_game_grid_pane

0xebe4,	// (0x0004e77a) midp_keyp_rocker_pane_ParamLimits

0xebe4,	// (0x0004e77a) midp_keyp_rocker_pane

0xec2d,	// (0x0004e7c3) midp_keyp_sk_left_pane_ParamLimits

0xec2d,	// (0x0004e7c3) midp_keyp_sk_left_pane

0xec7f,	// (0x0004e815) midp_keyp_sk_right_pane_ParamLimits

0xec7f,	// (0x0004e815) midp_keyp_sk_right_pane

0x31f5,	// (0x00042d8b) bg_button_pane_cp03

0xecd1,	// (0x0004e867) midp_keyp_sk_left_pane_g1

0x31f5,	// (0x00042d8b) bg_button_pane_cp04

0xecd1,	// (0x0004e867) midp_keyp_sk_right_pane_g1

0x762d,	// (0x000471c3) midp_keyp_rocker_pane_g1

0xecda,	// (0x0004e870) keyp_game_cell_pane_ParamLimits

0xecda,	// (0x0004e870) keyp_game_cell_pane

0x31f5,	// (0x00042d8b) bg_button_pane_cp02

0xecfe,	// (0x0004e894) keyp_game_cell_pane_g1

0xbd11,	// (0x0004b8a7) popup_fep_vkb2_window_ParamLimits

0xbd11,	// (0x0004b8a7) popup_fep_vkb2_window

0xca8f,	// (0x0004c625) aid_size_cell_vkb2_ParamLimits

0xca8f,	// (0x0004c625) aid_size_cell_vkb2

0xcac5,	// (0x0004c65b) popup_fep_vkb2_window_g1_ParamLimits

0xcac5,	// (0x0004c65b) popup_fep_vkb2_window_g1

0xcb15,	// (0x0004c6ab) vkb2_area_bottom_pane_ParamLimits

0xcb15,	// (0x0004c6ab) vkb2_area_bottom_pane

0xcb69,	// (0x0004c6ff) vkb2_area_keypad_pane_ParamLimits

0xcb69,	// (0x0004c6ff) vkb2_area_keypad_pane

0xcbb1,	// (0x0004c747) vkb2_area_top_pane_ParamLimits

0xcbb1,	// (0x0004c747) vkb2_area_top_pane

0xcc37,	// (0x0004c7cd) vkb2_top_entry_pane_ParamLimits

0xcc37,	// (0x0004c7cd) vkb2_top_entry_pane

0xcc64,	// (0x0004c7fa) vkb2_top_grid_left_pane_ParamLimits

0xcc64,	// (0x0004c7fa) vkb2_top_grid_left_pane

0xcc84,	// (0x0004c81a) vkb2_top_grid_right_pane_ParamLimits

0xcc84,	// (0x0004c81a) vkb2_top_grid_right_pane

0x2af1,	// (0x00042687) vkb2_cell_keypad_pane_ParamLimits

0x2af1,	// (0x00042687) vkb2_cell_keypad_pane

0xccca,	// (0x0004c860) vkb2_area_bottom_grid_pane_ParamLimits

0xccca,	// (0x0004c860) vkb2_area_bottom_grid_pane

0xccf4,	// (0x0004c88a) vkb2_area_bottom_pane_g1_ParamLimits

0xccf4,	// (0x0004c88a) vkb2_area_bottom_pane_g1

0xcd1a,	// (0x0004c8b0) vkb2_area_bottom_pane_g2_ParamLimits

0xcd1a,	// (0x0004c8b0) vkb2_area_bottom_pane_g2

0xcd4b,	// (0x0004c8e1) vkb2_area_bottom_pane_g3_ParamLimits

0xcd4b,	// (0x0004c8e1) vkb2_area_bottom_pane_g3

0x0002,

0xfd94,	// (0x0004f92a) vkb2_area_bottom_pane_g_ParamLimits

0xfd94,	// (0x0004f92a) vkb2_area_bottom_pane_g

0x2c9b,	// (0x00042831) vkb2_top_cell_left_pane_ParamLimits

0x2c9b,	// (0x00042831) vkb2_top_cell_left_pane

0xed07,	// (0x0004e89d) vkb2_top_entry_pane_g1_ParamLimits

0xed07,	// (0x0004e89d) vkb2_top_entry_pane_g1

0xed15,	// (0x0004e8ab) vkb2_top_entry_pane_t1_ParamLimits

0xed15,	// (0x0004e8ab) vkb2_top_entry_pane_t1

0x94e5,	// (0x0004907b) vkb2_top_entry_pane_t2_ParamLimits

0x94e5,	// (0x0004907b) vkb2_top_entry_pane_t2

0x9517,	// (0x000490ad) vkb2_top_entry_pane_t3_ParamLimits

0x9517,	// (0x000490ad) vkb2_top_entry_pane_t3

0x0002,

0xfd9b,	// (0x0004f931) vkb2_top_entry_pane_t_ParamLimits

0xfd9b,	// (0x0004f931) vkb2_top_entry_pane_t

0xcdb5,	// (0x0004c94b) vkb2_top_grid_right_pane_g1_ParamLimits

0xcdb5,	// (0x0004c94b) vkb2_top_grid_right_pane_g1

0x2cfe,	// (0x00042894) vkb2_top_grid_right_pane_g2_ParamLimits

0x2cfe,	// (0x00042894) vkb2_top_grid_right_pane_g2

0x2d16,	// (0x000428ac) vkb2_top_grid_right_pane_g3_ParamLimits

0x2d16,	// (0x000428ac) vkb2_top_grid_right_pane_g3

0xcdcb,	// (0x0004c961) vkb2_top_grid_right_pane_g4_ParamLimits

0xcdcb,	// (0x0004c961) vkb2_top_grid_right_pane_g4

0x0003,

0xfda2,	// (0x0004f938) vkb2_top_grid_right_pane_g_ParamLimits

0xfda2,	// (0x0004f938) vkb2_top_grid_right_pane_g

0x2d44,	// (0x000428da) vkb2_top_cell_left_pane_g1

0x2d5b,	// (0x000428f1) vkb2_cell_keypad_pane_g1_ParamLimits

0x2d5b,	// (0x000428f1) vkb2_cell_keypad_pane_g1

0x953b,	// (0x000490d1) vkb2_cell_keypad_pane_t1_ParamLimits

0x953b,	// (0x000490d1) vkb2_cell_keypad_pane_t1

0x2d69,	// (0x000428ff) vkb2_cell_bottom_grid_pane_ParamLimits

0x2d69,	// (0x000428ff) vkb2_cell_bottom_grid_pane

0x2da2,	// (0x00042938) vkb2_cell_bottom_grid_pane_g1

0xe9c5,	// (0x0004e55b) aid_call2_pane_cp02

0xe9cd,	// (0x0004e563) aid_call_pane_cp02

0xe9d5,	// (0x0004e56b) clock_digital_number_pane_cp10

0xe9dd,	// (0x0004e573) clock_digital_number_pane_cp11

0xe9e5,	// (0x0004e57b) clock_digital_number_pane_cp12

0xe9ed,	// (0x0004e583) clock_digital_number_pane_cp13

0xe9f5,	// (0x0004e58b) clock_digital_separator_pane_cp10

0x41d6,	// (0x00043d6c) popup_clock_digital_analogue_window_cp2_g1

0x41d6,	// (0x00043d6c) popup_clock_digital_analogue_window_cp2_g2

0xe9fd,	// (0x0004e593) popup_clock_digital_analogue_window_cp2_g3

0x41d6,	// (0x00043d6c) popup_clock_digital_analogue_window_cp2_g4

0xe9fd,	// (0x0004e593) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd57,	// (0x0004f8ed) popup_clock_digital_analogue_window_cp2_g

0xea05,	// (0x0004e59b) popup_clock_digital_analogue_window_cp2_t1

0xea13,	// (0x0004e5a9) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd62,	// (0x0004f8f8) popup_clock_digital_analogue_window_cp2_t

0x762d,	// (0x000471c3) clock_digital_number_pane_cp10_g1

0x762d,	// (0x000471c3) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4a,	// (0x0004f6e0) clock_digital_number_pane_cp10_g

0x762d,	// (0x000471c3) clock_digital_separator_pane_cp10_g1

0x762d,	// (0x000471c3) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4a,	// (0x0004f6e0) clock_digital_separator_pane_cp10_g

0x8f6a,	// (0x00048b00) uniindi_top_pane_g3

0x8f7b,	// (0x00048b11) uniindi_top_pane_g4

0x2b7c,	// (0x00042712) vkb2_row_keypad_pane_ParamLimits

0x2b7c,	// (0x00042712) vkb2_row_keypad_pane

0x2dbe,	// (0x00042954) vkb2_cell_t_keypad_pane_ParamLimits

0x2dbe,	// (0x00042954) vkb2_cell_t_keypad_pane

0x2dce,	// (0x00042964) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2dce,	// (0x00042964) vkb2_cell_t_keypad_pane_cp08

0x2de1,	// (0x00042977) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2de1,	// (0x00042977) vkb2_cell_t_keypad_pane_cp09

0x2df5,	// (0x0004298b) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x2df5,	// (0x0004298b) vkb2_cell_t_keypad_pane_cp01

0x2e06,	// (0x0004299c) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2e06,	// (0x0004299c) vkb2_cell_t_keypad_pane_cp02

0x2e17,	// (0x000429ad) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2e17,	// (0x000429ad) vkb2_cell_t_keypad_pane_cp03

0x2e28,	// (0x000429be) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2e28,	// (0x000429be) vkb2_cell_t_keypad_pane_cp04

0x2e39,	// (0x000429cf) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2e39,	// (0x000429cf) vkb2_cell_t_keypad_pane_cp05

0x2e4a,	// (0x000429e0) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2e4a,	// (0x000429e0) vkb2_cell_t_keypad_pane_cp06

0x2e5b,	// (0x000429f1) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2e5b,	// (0x000429f1) vkb2_cell_t_keypad_pane_cp07

0x2e6c,	// (0x00042a02) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x2e6c,	// (0x00042a02) vkb2_cell_t_keypad_pane_cp10

0x78ab,	// (0x00047441) vkb2_cell_t_keypad_pane_g1

0x9552,	// (0x000490e8) vkb2_cell_t_keypad_pane_t1

0x31f5,	// (0x00042d8b) popup_grid_graphic2_window

0xed4e,	// (0x0004e8e4) aid_size_cell_graphic2_ParamLimits

0xed4e,	// (0x0004e8e4) aid_size_cell_graphic2

0xed8c,	// (0x0004e922) bg_popup_window_pane_cp21_ParamLimits

0xed8c,	// (0x0004e922) bg_popup_window_pane_cp21

0xed9a,	// (0x0004e930) graphic2_pages_pane_ParamLimits

0xed9a,	// (0x0004e930) graphic2_pages_pane

0xedf0,	// (0x0004e986) grid_graphic2_control_pane_ParamLimits

0xedf0,	// (0x0004e986) grid_graphic2_control_pane

0xee38,	// (0x0004e9ce) grid_graphic2_pane_ParamLimits

0xee38,	// (0x0004e9ce) grid_graphic2_pane

0xeebf,	// (0x0004ea55) cell_graphic2_pane

0x31f5,	// (0x00042d8b) main_comp_mode_pane

0x87ea,	// (0x00048380) list_ai3_gene_pane_ParamLimits

0xe70c,	// (0x0004e2a2) bg_popup_window_pane_cp19_ParamLimits

0x8bc0,	// (0x00048756) bg_touch_area_indi_pane_ParamLimits

0x8bc0,	// (0x00048756) bg_touch_area_indi_pane

0x8bd6,	// (0x0004876c) bg_touch_area_indi_pane_cp01_ParamLimits

0x8bd6,	// (0x0004876c) bg_touch_area_indi_pane_cp01

0x8bec,	// (0x00048782) bg_touch_area_indi_pane_cp02_ParamLimits

0x8bec,	// (0x00048782) bg_touch_area_indi_pane_cp02

0x8c04,	// (0x0004879a) bg_touch_area_indi_pane_cp03_ParamLimits

0x8c04,	// (0x0004879a) bg_touch_area_indi_pane_cp03

0x8c1e,	// (0x000487b4) popup_slider_window_g1_ParamLimits

0x8c3a,	// (0x000487d0) popup_slider_window_g2_ParamLimits

0x8c56,	// (0x000487ec) popup_slider_window_g3_ParamLimits

0xfcec,	// (0x0004f882) popup_slider_window_g_ParamLimits

0x8cb2,	// (0x00048848) popup_slider_window_t1_ParamLimits

0x8d26,	// (0x000488bc) small_volume_slider_vertical_pane_ParamLimits

0xeebf,	// (0x0004ea55) cell_graphic2_pane_ParamLimits

0xef1c,	// (0x0004eab2) bg_button_pane_cp10_ParamLimits

0xef1c,	// (0x0004eab2) bg_button_pane_cp10

0xef2f,	// (0x0004eac5) bg_button_pane_cp11_ParamLimits

0xef2f,	// (0x0004eac5) bg_button_pane_cp11

0xef42,	// (0x0004ead8) graphic2_pages_pane_g1_ParamLimits

0xef42,	// (0x0004ead8) graphic2_pages_pane_g1

0xef5d,	// (0x0004eaf3) graphic2_pages_pane_g2_ParamLimits

0xef5d,	// (0x0004eaf3) graphic2_pages_pane_g2

0x0001,

0xfdb0,	// (0x0004f946) graphic2_pages_pane_g_ParamLimits

0xfdb0,	// (0x0004f946) graphic2_pages_pane_g

0xef75,	// (0x0004eb0b) graphic2_pages_pane_t1_ParamLimits

0xef75,	// (0x0004eb0b) graphic2_pages_pane_t1

0xef8d,	// (0x0004eb23) cell_graphic2_control_pane_ParamLimits

0xef8d,	// (0x0004eb23) cell_graphic2_control_pane

0xefbf,	// (0x0004eb55) cell_graphic2_pane_g1_ParamLimits

0xefbf,	// (0x0004eb55) cell_graphic2_pane_g1

0xe0ba,	// (0x0004dc50) cell_graphic2_pane_g2_ParamLimits

0xe0ba,	// (0x0004dc50) cell_graphic2_pane_g2

0xea68,	// (0x0004e5fe) cell_graphic2_pane_g3_ParamLimits

0xea68,	// (0x0004e5fe) cell_graphic2_pane_g3

0xe0c7,	// (0x0004dc5d) cell_graphic2_pane_g4_ParamLimits

0xe0c7,	// (0x0004dc5d) cell_graphic2_pane_g4

0xefcc,	// (0x0004eb62) cell_graphic2_pane_g5_ParamLimits

0xefcc,	// (0x0004eb62) cell_graphic2_pane_g5

0x0004,

0xfdb5,	// (0x0004f94b) cell_graphic2_pane_g_ParamLimits

0xfdb5,	// (0x0004f94b) cell_graphic2_pane_g

0xefec,	// (0x0004eb82) cell_graphic2_pane_t1_ParamLimits

0xefec,	// (0x0004eb82) cell_graphic2_pane_t1

0x5d0f,	// (0x000458a5) grid_highlight_pane_cp11_ParamLimits

0x5d0f,	// (0x000458a5) grid_highlight_pane_cp11

0x3572,	// (0x00043108) bg_button_pane_cp05

0xf021,	// (0x0004ebb7) cell_graphic2_control_pane_g1

0x762d,	// (0x000471c3) bg_touch_area_indi_pane_g1

0x9822,	// (0x000493b8) aid_cmod_rocker_key_size

0x982c,	// (0x000493c2) aid_cmode_itu_key_size

0x9836,	// (0x000493cc) main_cmode_video_pane

0x9840,	// (0x000493d6) main_comp_mode_itu_pane

0x984c,	// (0x000493e2) main_comp_mode_rocker_pane

0x9858,	// (0x000493ee) cell_cmode_rocker_pane_ParamLimits

0x9858,	// (0x000493ee) cell_cmode_rocker_pane

0x986a,	// (0x00049400) cell_cmode_itu_pane_ParamLimits

0x986a,	// (0x00049400) cell_cmode_itu_pane

0x3b61,	// (0x000436f7) bg_button_pane_cp06_ParamLimits

0x3b61,	// (0x000436f7) bg_button_pane_cp06

0x78ab,	// (0x00047441) cell_cmode_rocker_pane_g1_ParamLimits

0x78ab,	// (0x00047441) cell_cmode_rocker_pane_g1

0x8dca,	// (0x00048960) cell_cmode_rocker_pane_g2_ParamLimits

0x8dca,	// (0x00048960) cell_cmode_rocker_pane_g2

0x0001,

0xfdc5,	// (0x0004f95b) cell_cmode_rocker_pane_g_ParamLimits

0xfdc5,	// (0x0004f95b) cell_cmode_rocker_pane_g

0x31f5,	// (0x00042d8b) bg_button_pane_cp07

0x987f,	// (0x00049415) cell_cmode_itu_pane_g1

0x9888,	// (0x0004941e) cell_cmode_itu_pane_t1

0x9896,	// (0x0004942c) cell_cmode_itu_pane_t2

0x0001,

0xfdca,	// (0x0004f960) cell_cmode_itu_pane_t

0x8fed,	// (0x00048b83) aid_touch_ctrl_left

0x8ff5,	// (0x00048b8b) aid_touch_ctrl_right

0x31f5,	// (0x00042d8b) compa_mode_pane

0xf047,	// (0x0004ebdd) aid_cmod_rocker_key_size_cp

0xf051,	// (0x0004ebe7) aid_cmode_itu_key_size_cp

0x98b8,	// (0x0004944e) compa_mode_pane_g1

0x98c0,	// (0x00049456) compa_mode_pane_g2

0x98c8,	// (0x0004945e) compa_mode_pane_g3

0x0002,

0xfdcf,	// (0x0004f965) compa_mode_pane_g

0xf05b,	// (0x0004ebf1) main_comp_mode_itu_pane_cp

0xf063,	// (0x0004ebf9) main_comp_mode_rocker_pane_cp

0xf06b,	// (0x0004ec01) cell_cmode_itu_pane_cp_ParamLimits

0xf06b,	// (0x0004ec01) cell_cmode_itu_pane_cp

0xf080,	// (0x0004ec16) cell_cmode_rocker_pane_cp_ParamLimits

0xf080,	// (0x0004ec16) cell_cmode_rocker_pane_cp

0x3b61,	// (0x000436f7) bg_button_pane_cp06_cp_ParamLimits

0x3b61,	// (0x000436f7) bg_button_pane_cp06_cp

0x78ab,	// (0x00047441) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x78ab,	// (0x00047441) cell_cmode_rocker_pane_g1_cp

0x762d,	// (0x000471c3) cell_cmode_rocker_pane_g2_cp

0x31f5,	// (0x00042d8b) bg_button_pane_cp07_cp

0xf092,	// (0x0004ec28) cell_cmode_itu_pane_g1_cp

0xf09b,	// (0x0004ec31) cell_cmode_itu_pane_t1_cp

0xf09b,	// (0x0004ec31) cell_cmode_itu_pane_t2_cp

0xdd3b,	// (0x0004d8d1) settings_code_pane_cp2

0x32e9,	// (0x00042e7f) bg_popup_window_pane_cp3_ParamLimits

0x374c,	// (0x000432e2) heading_pane_cp3_ParamLimits

0x3758,	// (0x000432ee) listscroll_popup_graphic_pane_ParamLimits

0x23b8,	// (0x00041f4e) fep_hwr_aid_pane_ParamLimits

0x285e,	// (0x000423f4) aid_touch_sctrl_top_ParamLimits

0x286b,	// (0x00042401) sctrl_sk_top_pane_g1_ParamLimits

0x78ab,	// (0x00047441) sctrl_sk_top_pane_g2_ParamLimits

0xfd05,	// (0x0004f89b) sctrl_sk_top_pane_g_ParamLimits

0x2878,	// (0x0004240e) sctrl_sk_top_pane_t1_ParamLimits

0x285e,	// (0x000423f4) aid_touch_sctrl_bottom_ParamLimits

0x2878,	// (0x0004240e) sctrl_sk_bottom_pane_t1_ParamLimits

0x8f36,	// (0x00048acc) aid_area_touch_clock

0xcbf9,	// (0x0004c78f) aid_vkb2_area_top_pane_cell_ParamLimits

0xcbf9,	// (0x0004c78f) aid_vkb2_area_top_pane_cell

0xcca4,	// (0x0004c83a) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcca4,	// (0x0004c83a) aid_vkb2_area_bottom_pane_cell

0x949d,	// (0x00049033) popup_char_count_window

0x9915,	// (0x000494ab) popup_char_count_window_g1

0x991e,	// (0x000494b4) popup_char_count_window_g2

0x9927,	// (0x000494bd) popup_char_count_window_g3

0x0002,

0xfdd6,	// (0x0004f96c) popup_char_count_window_g

0x9930,	// (0x000494c6) popup_char_count_window_t1

0x2919,	// (0x000424af) popup_fep_char_preview_window_ParamLimits

0x2919,	// (0x000424af) popup_fep_char_preview_window

0xcc19,	// (0x0004c7af) vkb2_top_candi_pane_ParamLimits

0xcc19,	// (0x0004c7af) vkb2_top_candi_pane

0xf0a9,	// (0x0004ec3f) cell_vkb2_top_candi_pane_ParamLimits

0xf0a9,	// (0x0004ec3f) cell_vkb2_top_candi_pane

0x569b,	// (0x00045231) bg_popup_fep_char_preview_window_ParamLimits

0x569b,	// (0x00045231) bg_popup_fep_char_preview_window

0x2e81,	// (0x00042a17) popup_fep_char_preview_window_t1_ParamLimits

0x2e81,	// (0x00042a17) popup_fep_char_preview_window_t1

0x998b,	// (0x00049521) bg_popup_fep_char_preview_window_g1

0x9993,	// (0x00049529) bg_popup_fep_char_preview_window_g2

0x999b,	// (0x00049531) bg_popup_fep_char_preview_window_g3

0x99a3,	// (0x00049539) bg_popup_fep_char_preview_window_g4

0x99ab,	// (0x00049541) bg_popup_fep_char_preview_window_g5

0x2ebb,	// (0x00042a51) bg_popup_fep_char_preview_window_g6

0x99b3,	// (0x00049549) bg_popup_fep_char_preview_window_g7

0x99bb,	// (0x00049551) bg_popup_fep_char_preview_window_g8

0x99c3,	// (0x00049559) bg_popup_fep_char_preview_window_g9

0x0008,

0xfddd,	// (0x0004f973) bg_popup_fep_char_preview_window_g

0x78ab,	// (0x00047441) cell_vkb2_top_candi_pane_g1_ParamLimits

0x78ab,	// (0x00047441) cell_vkb2_top_candi_pane_g1

0x7bc2,	// (0x00047758) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7bc2,	// (0x00047758) cell_vkb2_top_candi_pane_g2

0x7be3,	// (0x00047779) cell_vkb2_top_candi_pane_g3_ParamLimits

0x7be3,	// (0x00047779) cell_vkb2_top_candi_pane_g3

0x2ec3,	// (0x00042a59) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2ec3,	// (0x00042a59) cell_vkb2_top_candi_pane_g4

0x99cb,	// (0x00049561) cell_vkb2_top_candi_pane_g5_ParamLimits

0x99cb,	// (0x00049561) cell_vkb2_top_candi_pane_g5

0x8dca,	// (0x00048960) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8dca,	// (0x00048960) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf0,	// (0x0004f986) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf0,	// (0x0004f986) cell_vkb2_top_candi_pane_g

0x2ee4,	// (0x00042a7a) cell_vkb2_top_candi_pane_t1

0x219d,	// (0x00041d33) aid_size_touch_slider_mark_ParamLimits

0x219d,	// (0x00041d33) aid_size_touch_slider_mark

0xedd6,	// (0x0004e96c) grid_graphic2_catg_pane_ParamLimits

0xedd6,	// (0x0004e96c) grid_graphic2_catg_pane

0xee92,	// (0x0004ea28) popup_grid_graphic2_window_t1_ParamLimits

0xee92,	// (0x0004ea28) popup_grid_graphic2_window_t1

0xeea8,	// (0x0004ea3e) popup_grid_graphic2_window_t2_ParamLimits

0xeea8,	// (0x0004ea3e) popup_grid_graphic2_window_t2

0x0001,

0xfdab,	// (0x0004f941) popup_grid_graphic2_window_t_ParamLimits

0xfdab,	// (0x0004f941) popup_grid_graphic2_window_t

0x3572,	// (0x00043108) bg_button_pane_cp05_ParamLimits

0xf021,	// (0x0004ebb7) cell_graphic2_control_pane_g1_ParamLimits

0xf10f,	// (0x0004eca5) cell_graphic2_catg_pane_ParamLimits

0xf10f,	// (0x0004eca5) cell_graphic2_catg_pane

0x31f5,	// (0x00042d8b) bg_button_pane_cp12

0xf121,	// (0x0004ecb7) cell_graphic2_catg_pane_g1

0x8f02,	// (0x00048a98) cell_tb_ext_pane_t1_ParamLimits

0x2cbb,	// (0x00042851) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2cbb,	// (0x00042851) vkb2_top_cell_right_narrow_pane

0x2cd3,	// (0x00042869) vkb2_top_cell_right_wide_pane_ParamLimits

0x2cd3,	// (0x00042869) vkb2_top_cell_right_wide_pane

0x23aa,	// (0x00041f40) bg_vkb2_func_pane_ParamLimits

0x23aa,	// (0x00041f40) bg_vkb2_func_pane

0x2d44,	// (0x000428da) vkb2_top_cell_left_pane_g1_ParamLimits

0x23aa,	// (0x00041f40) bg_vkb2_fuc_pane_cp03_ParamLimits

0x23aa,	// (0x00041f40) bg_vkb2_fuc_pane_cp03

0x2da2,	// (0x00042938) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x502a,	// (0x00044bc0) bg_vkb2_func_pane_g1

0x5032,	// (0x00044bc8) bg_vkb2_func_pane_g2

0x5042,	// (0x00044bd8) bg_vkb2_func_pane_g3

0x503a,	// (0x00044bd0) bg_vkb2_func_pane_g4

0x504a,	// (0x00044be0) bg_vkb2_func_pane_g5

0x5052,	// (0x00044be8) bg_vkb2_func_pane_g6

0x505a,	// (0x00044bf0) bg_vkb2_func_pane_g7

0x5062,	// (0x00044bf8) bg_vkb2_func_pane_g8

0x5022,	// (0x00044bb8) bg_vkb2_func_pane_g9

0x0008,

0xfdfd,	// (0x0004f993) bg_vkb2_func_pane_g

0x23aa,	// (0x00041f40) bg_vkb2_fuc_pane_cp01_ParamLimits

0x23aa,	// (0x00041f40) bg_vkb2_fuc_pane_cp01

0x2d44,	// (0x000428da) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2d44,	// (0x000428da) vkb2_top_cell_right_wide_pane_g1

0x23aa,	// (0x00041f40) bg_vkb2_fuc_pane_cp02_ParamLimits

0x23aa,	// (0x00041f40) bg_vkb2_fuc_pane_cp02

0x2da2,	// (0x00042938) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2da2,	// (0x00042938) vkb2_top_cell_right_narrow_pane_g1

0xe64c,	// (0x0004e1e2) aid_touch_area_decrease_ParamLimits

0xe64c,	// (0x0004e1e2) aid_touch_area_decrease

0xe680,	// (0x0004e216) aid_touch_area_increase_ParamLimits

0xe680,	// (0x0004e216) aid_touch_area_increase

0xe6a8,	// (0x0004e23e) aid_touch_area_mute_ParamLimits

0xe6a8,	// (0x0004e23e) aid_touch_area_mute

0xe6d8,	// (0x0004e26e) aid_touch_area_slider_ParamLimits

0xe6d8,	// (0x0004e26e) aid_touch_area_slider

0xe718,	// (0x0004e2ae) popup_slider_window_g4_ParamLimits

0xe718,	// (0x0004e2ae) popup_slider_window_g4

0xe740,	// (0x0004e2d6) popup_slider_window_g5_ParamLimits

0xe740,	// (0x0004e2d6) popup_slider_window_g5

0xe774,	// (0x0004e30a) popup_slider_window_g6_ParamLimits

0xe774,	// (0x0004e30a) popup_slider_window_g6

0x8ce0,	// (0x00048876) popup_slider_window_t2_ParamLimits

0x8ce0,	// (0x00048876) popup_slider_window_t2

0x0001,

0xfcf9,	// (0x0004f88f) popup_slider_window_t_ParamLimits

0xfcf9,	// (0x0004f88f) popup_slider_window_t

0xe790,	// (0x0004e326) slider_pane_ParamLimits

0xe790,	// (0x0004e326) slider_pane

0x9a07,	// (0x0004959d) slider_pane_g1_ParamLimits

0x9a07,	// (0x0004959d) slider_pane_g1

0x9a1b,	// (0x000495b1) slider_pane_g2_ParamLimits

0x9a1b,	// (0x000495b1) slider_pane_g2

0x9a31,	// (0x000495c7) slider_pane_g3_ParamLimits

0x9a31,	// (0x000495c7) slider_pane_g3

0x0003,

0xfe10,	// (0x0004f9a6) slider_pane_g_ParamLimits

0xfe10,	// (0x0004f9a6) slider_pane_g

0xc6f4,	// (0x0004c28a) popup_tb_float_extension_window_ParamLimits

0xc6f4,	// (0x0004c28a) popup_tb_float_extension_window

0x9a5d,	// (0x000495f3) aid_size_cell_tb_float_ext

0x31f5,	// (0x00042d8b) bg_popup_sub_window_cp28

0x9a69,	// (0x000495ff) grid_tb_float_ext_pane

0x9a73,	// (0x00049609) cell_tb_float_ext_pane_ParamLimits

0x9a73,	// (0x00049609) cell_tb_float_ext_pane

0x9a8d,	// (0x00049623) cell_tb_float_ext_pane_g1

0x9a96,	// (0x0004962c) grid_highlight_pane_cp12

0xc98a,	// (0x0004c520) cell_last_hwr_side_pane_ParamLimits

0xc98a,	// (0x0004c520) cell_last_hwr_side_pane

0x762d,	// (0x000471c3) cell_last_hwr_side_pane_g1

0x9a9f,	// (0x00049635) cell_last_hwr_side_pane_g2

0x0001,

0xfe19,	// (0x0004f9af) cell_last_hwr_side_pane_g

0xcd80,	// (0x0004c916) vkb2_area_bottom_space_btn_pane_ParamLimits

0xcd80,	// (0x0004c916) vkb2_area_bottom_space_btn_pane

0x78ab,	// (0x00047441) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9552,	// (0x000490e8) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2ee4,	// (0x00042a7a) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2f03,	// (0x00042a99) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2f03,	// (0x00042a99) vkb2_area_bottom_space_btn_pane_g1

0x2f3d,	// (0x00042ad3) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2f3d,	// (0x00042ad3) vkb2_area_bottom_space_btn_pane_g2

0x2f73,	// (0x00042b09) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2f73,	// (0x00042b09) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1e,	// (0x0004f9b4) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1e,	// (0x0004f9b4) vkb2_area_bottom_space_btn_pane_g

0x245f,	// (0x00041ff5) cel_fep_hwr_func_pane_ParamLimits

0x245f,	// (0x00041ff5) cel_fep_hwr_func_pane

0xc95f,	// (0x0004c4f5) cell_hwr_side_button_pane_ParamLimits

0xc95f,	// (0x0004c4f5) cell_hwr_side_button_pane

0x8f36,	// (0x00048acc) aid_area_touch_clock_ParamLimits

0x3572,	// (0x00043108) bg_uniindi_top_pane_ParamLimits

0x8f48,	// (0x00048ade) uniindi_top_pane_g1_ParamLimits

0x8f5e,	// (0x00048af4) uniindi_top_pane_g2_ParamLimits

0x8f6a,	// (0x00048b00) uniindi_top_pane_g3_ParamLimits

0x8f7b,	// (0x00048b11) uniindi_top_pane_g4_ParamLimits

0xfd31,	// (0x0004f8c7) uniindi_top_pane_g_ParamLimits

0x8f88,	// (0x00048b1e) uniindi_top_pane_t1_ParamLimits

0x3572,	// (0x00043108) bg_vkb2_func_pane_cp01_ParamLimits

0x3572,	// (0x00043108) bg_vkb2_func_pane_cp01

0x9aa8,	// (0x0004963e) cel_fep_hwr_func_pane_g1_ParamLimits

0x9aa8,	// (0x0004963e) cel_fep_hwr_func_pane_g1

0x3572,	// (0x00043108) bg_vkb2_func_pane_cp02_ParamLimits

0x3572,	// (0x00043108) bg_vkb2_func_pane_cp02

0x9aa8,	// (0x0004963e) cell_hwr_side_button_pane_g1_ParamLimits

0x9aa8,	// (0x0004963e) cell_hwr_side_button_pane_g1

0x4ea3,	// (0x00044a39) status_pane_g4_ParamLimits

0x4ea3,	// (0x00044a39) status_pane_g4

0x4ebd,	// (0x00044a53) status_pane_t1

0x7367,	// (0x00046efd) form2_midp_gauge_slider_cont_pane

0x736f,	// (0x00046f05) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe002,	// (0x0004db98) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe014,	// (0x0004dbaa) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafd,	// (0x0004f693) form2_midp_gauge_slider_pane_t_ParamLimits

0x73a5,	// (0x00046f3b) form2_midp_slider_pane_ParamLimits

0x28d9,	// (0x0004246f) aid_size_cell_func_vkb2_ParamLimits

0x28d9,	// (0x0004246f) aid_size_cell_func_vkb2

0x9a49,	// (0x000495df) slider_pane_g4_ParamLimits

0x9a49,	// (0x000495df) slider_pane_g4

0xcde1,	// (0x0004c977) form2_midp_gauge_slider_pane_t2_cp01

0xcdef,	// (0x0004c985) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xcdef,	// (0x0004c985) form2_midp_gauge_slider_pane_t3_cp01

0x2fe8,	// (0x00042b7e) form2_midp_slider_pane_cp01

0x31f5,	// (0x00042d8b) navi_smil_pane

0x9ae1,	// (0x00049677) navi_smil_pane_g1

0x9ae9,	// (0x0004967f) navi_smil_pane_t1

0x9ab6,	// (0x0004964c) form2_midp_slider_pane_g1

0x9abf,	// (0x00049655) form2_midp_slider_pane_g2

0x9ac7,	// (0x0004965d) form2_midp_slider_pane_g3

0x9ab6,	// (0x0004964c) form2_midp_slider_pane_g4

0xf12a,	// (0x0004ecc0) form2_midp_slider_pane_g5

0x0004,

0xfe27,	// (0x0004f9bd) form2_midp_slider_pane_g

0x2fad,	// (0x00042b43) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2fad,	// (0x00042b43) vkb2_area_bottom_space_btn_pane_g4

0xd64e,	// (0x0004d1e4) lc0_navi_pane_ParamLimits

0xd64e,	// (0x0004d1e4) lc0_navi_pane

0xd6b8,	// (0x0004d24e) lc0_stat_indi_pane_ParamLimits

0xd6b8,	// (0x0004d24e) lc0_stat_indi_pane

0xd6cd,	// (0x0004d263) ls0_title_pane_ParamLimits

0xd6cd,	// (0x0004d263) ls0_title_pane

0x3b61,	// (0x000436f7) bg_popup_sub_pane_cp14_ParamLimits

0x8f1d,	// (0x00048ab3) list_uniindi_pane_ParamLimits

0x8f29,	// (0x00048abf) uniindi_top_pane_ParamLimits

0x8fc5,	// (0x00048b5b) list_single_uniindi_pane_g1_ParamLimits

0x8fd8,	// (0x00048b6e) list_single_uniindi_pane_t1_ParamLimits

0xce0c,	// (0x0004c9a2) lc0_stat_clock_pane_ParamLimits

0xce0c,	// (0x0004c9a2) lc0_stat_clock_pane

0xf135,	// (0x0004eccb) lc0_stat_indi_pane_g1_ParamLimits

0xf135,	// (0x0004eccb) lc0_stat_indi_pane_g1

0xf142,	// (0x0004ecd8) lc0_stat_indi_pane_g2_ParamLimits

0xf142,	// (0x0004ecd8) lc0_stat_indi_pane_g2

0x0001,

0xfe32,	// (0x0004f9c8) lc0_stat_indi_pane_g_ParamLimits

0xfe32,	// (0x0004f9c8) lc0_stat_indi_pane_g

0xce19,	// (0x0004c9af) lc0_uni_indicator_pane_ParamLimits

0xce19,	// (0x0004c9af) lc0_uni_indicator_pane

0xf14f,	// (0x0004ece5) ls0_title_pane_g1_ParamLimits

0xf14f,	// (0x0004ece5) ls0_title_pane_g1

0xf163,	// (0x0004ecf9) ls0_title_pane_t1_ParamLimits

0xf163,	// (0x0004ecf9) ls0_title_pane_t1

0xce26,	// (0x0004c9bc) lc0_uni_indicator_pane_g1_ParamLimits

0xce26,	// (0x0004c9bc) lc0_uni_indicator_pane_g1

0x9b5b,	// (0x000496f1) lc0_stat_clock_pane_t1

0x31f5,	// (0x00042d8b) main_ai5_pane

0x9b69,	// (0x000496ff) ai5_sk_pane_ParamLimits

0x9b69,	// (0x000496ff) ai5_sk_pane

0xf191,	// (0x0004ed27) cell_ai5_widget_pane_ParamLimits

0xf191,	// (0x0004ed27) cell_ai5_widget_pane

0x9c2c,	// (0x000497c2) aid_size_cell_widget_grid

0x9c42,	// (0x000497d8) bg_ai5_widget_pane_ParamLimits

0x9c42,	// (0x000497d8) bg_ai5_widget_pane

0x9cac,	// (0x00049842) cell_ai5_widget_pane_g2

0x9cbc,	// (0x00049852) cell_ai5_widget_pane_g3

0x9cdb,	// (0x00049871) cell_ai5_widget_pane_g4

0x9ce7,	// (0x0004987d) cell_ai5_widget_pane_g5

0x9cf3,	// (0x00049889) cell_ai5_widget_pane_g6

0x9cff,	// (0x00049895) cell_ai5_widget_pane_g7

0x9d47,	// (0x000498dd) cell_ai5_widget_pane_t1_ParamLimits

0x9d47,	// (0x000498dd) cell_ai5_widget_pane_t1

0x9d64,	// (0x000498fa) cell_ai5_widget_pane_t2_ParamLimits

0x9d64,	// (0x000498fa) cell_ai5_widget_pane_t2

0x9d7c,	// (0x00049912) cell_ai5_widget_pane_t3_ParamLimits

0x9d7c,	// (0x00049912) cell_ai5_widget_pane_t3

0x9d94,	// (0x0004992a) cell_ai5_widget_pane_t4_ParamLimits

0x9d94,	// (0x0004992a) cell_ai5_widget_pane_t4

0x9dae,	// (0x00049944) cell_ai5_widget_pane_t5_ParamLimits

0x9dae,	// (0x00049944) cell_ai5_widget_pane_t5

0x9dcd,	// (0x00049963) cell_ai5_widget_pane_t6_ParamLimits

0x9dcd,	// (0x00049963) cell_ai5_widget_pane_t6

0x9ddf,	// (0x00049975) cell_ai5_widget_pane_t7_ParamLimits

0x9ddf,	// (0x00049975) cell_ai5_widget_pane_t7

0x9df8,	// (0x0004998e) cell_ai5_widget_pane_t8_ParamLimits

0x9df8,	// (0x0004998e) cell_ai5_widget_pane_t8

0x0009,

0xfe4c,	// (0x0004f9e2) cell_ai5_widget_pane_t_ParamLimits

0xfe4c,	// (0x0004f9e2) cell_ai5_widget_pane_t

0x9e44,	// (0x000499da) grid_ai5_widget_pane

0x3b61,	// (0x000436f7) highlight_cell_ai5_widget_pane_ParamLimits

0x3b61,	// (0x000436f7) highlight_cell_ai5_widget_pane

0xf1fb,	// (0x0004ed91) ai5_sk_left_pane

0xf205,	// (0x0004ed9b) ai5_sk_middle_pane

0xf20f,	// (0x0004eda5) ai5_sk_right_pane

0x9e7a,	// (0x00049a10) bg_ai5_widget_pane_g1_ParamLimits

0x9e7a,	// (0x00049a10) bg_ai5_widget_pane_g1

0x9e86,	// (0x00049a1c) bg_ai5_widget_pane_g2_ParamLimits

0x9e86,	// (0x00049a1c) bg_ai5_widget_pane_g2

0x9e92,	// (0x00049a28) bg_ai5_widget_pane_g3_ParamLimits

0x9e92,	// (0x00049a28) bg_ai5_widget_pane_g3

0x9e9e,	// (0x00049a34) bg_ai5_widget_pane_g4_ParamLimits

0x9e9e,	// (0x00049a34) bg_ai5_widget_pane_g4

0x9eaa,	// (0x00049a40) bg_ai5_widget_pane_g5_ParamLimits

0x9eaa,	// (0x00049a40) bg_ai5_widget_pane_g5

0x9eb6,	// (0x00049a4c) bg_ai5_widget_pane_g6_ParamLimits

0x9eb6,	// (0x00049a4c) bg_ai5_widget_pane_g6

0x9ec2,	// (0x00049a58) bg_ai5_widget_pane_g7_ParamLimits

0x9ec2,	// (0x00049a58) bg_ai5_widget_pane_g7

0x9ece,	// (0x00049a64) bg_ai5_widget_pane_g8_ParamLimits

0x9ece,	// (0x00049a64) bg_ai5_widget_pane_g8

0x9eda,	// (0x00049a70) bg_ai5_widget_pane_g9_ParamLimits

0x9eda,	// (0x00049a70) bg_ai5_widget_pane_g9

0x0008,

0xfe61,	// (0x0004f9f7) bg_ai5_widget_pane_g_ParamLimits

0xfe61,	// (0x0004f9f7) bg_ai5_widget_pane_g

0x9f0d,	// (0x00049aa3) cell_shortcut_ai5_widget_pane_ParamLimits

0x9f0d,	// (0x00049aa3) cell_shortcut_ai5_widget_pane

0x47de,	// (0x00044374) bg_cell_shortcut_ai5_widget_pane

0x9f1e,	// (0x00049ab4) cell_grid_ai5_widget_pane_g1

0x9f27,	// (0x00049abd) highlight_cell_shortcut_ai5_widget_pane

0x5032,	// (0x00044bc8) ai5_sk_left_pane_g1

0x9f2f,	// (0x00049ac5) ai5_sk_left_pane_g2

0x9f37,	// (0x00049acd) ai5_sk_left_pane_g3

0x9f3f,	// (0x00049ad5) ai5_sk_left_pane_g4

0x0003,

0xfe74,	// (0x0004fa0a) ai5_sk_left_pane_g

0x9f47,	// (0x00049add) ai5_sk_left_pane_t1

0x502a,	// (0x00044bc0) ai5_sk_right_pane_g1

0x9f55,	// (0x00049aeb) ai5_sk_right_pane_g2

0x9f5d,	// (0x00049af3) ai5_sk_right_pane_g3

0x9f65,	// (0x00049afb) ai5_sk_right_pane_g4

0x0003,

0xfe7d,	// (0x0004fa13) ai5_sk_right_pane_g

0x9f6d,	// (0x00049b03) ai5_sk_right_pane_t1

0x502a,	// (0x00044bc0) ai5_sk_middle_pane_g1

0x5032,	// (0x00044bc8) ai5_sk_middle_pane_g2

0x504a,	// (0x00044be0) ai5_sk_middle_pane_g3

0x9f5d,	// (0x00049af3) ai5_sk_middle_pane_g4

0x9f37,	// (0x00049acd) ai5_sk_middle_pane_g5

0x9f7b,	// (0x00049b11) ai5_sk_middle_pane_g6

0xf219,	// (0x0004edaf) ai5_sk_middle_pane_g7

0x0006,

0xfe86,	// (0x0004fa1c) ai5_sk_middle_pane_g

0xd53a,	// (0x0004d0d0) aid_touch_area_size_lc0_ParamLimits

0xd53a,	// (0x0004d0d0) aid_touch_area_size_lc0

0x25ea,	// (0x00042180) cell_hwr_candidate_pane_t1_ParamLimits

0x4b80,	// (0x00044716) aid_touch_navi_pane

0xd7c0,	// (0x0004d356) status_dt_navi_pane_ParamLimits

0xd7c0,	// (0x0004d356) status_dt_navi_pane

0xd7d8,	// (0x0004d36e) status_dt_sta_pane_ParamLimits

0xd7d8,	// (0x0004d36e) status_dt_sta_pane

0xf221,	// (0x0004edb7) dt_sta_controll_pane

0xf22e,	// (0x0004edc4) dt_sta_indi_pane

0xf23b,	// (0x0004edd1) dt_sta_title_pane

0x3572,	// (0x00043108) bg_dt_sta_indi_pane_ParamLimits

0x3572,	// (0x00043108) bg_dt_sta_indi_pane

0xf24d,	// (0x0004ede3) dt_sta_battery_pane

0xf255,	// (0x0004edeb) dt_sta_indi_pane_g1

0x9fcd,	// (0x00049b63) dt_sta_indi_pane_g2

0x9fd6,	// (0x00049b6c) dt_sta_indi_pane_g3

0x0002,

0xfe95,	// (0x0004fa2b) dt_sta_indi_pane_g

0x9fdf,	// (0x00049b75) dt_sta_signal_pane

0x3b61,	// (0x000436f7) bg_dt_sta_title_pane_ParamLimits

0x3b61,	// (0x000436f7) bg_dt_sta_title_pane

0x9fe8,	// (0x00049b7e) dt_sta_title_pane_g1

0x9ff0,	// (0x00049b86) dt_sta_title_pane_t1_ParamLimits

0x9ff0,	// (0x00049b86) dt_sta_title_pane_t1

0x31f5,	// (0x00042d8b) bg_dt_sta_control_pane

0xf25e,	// (0x0004edf4) dt_sta_controll_pane_g1

0xa00e,	// (0x00049ba4) bg_dt_sta_title_pane_g1

0xa017,	// (0x00049bad) bg_dt_sta_title_pane_g2

0xa020,	// (0x00049bb6) bg_dt_sta_title_pane_g3

0x0002,

0xfe9c,	// (0x0004fa32) bg_dt_sta_title_pane_g

0x762d,	// (0x000471c3) bg_dt_sta_indi_pane_g1

0xa029,	// (0x00049bbf) dt_sta_signal_pane_g1

0xa031,	// (0x00049bc7) dt_sta_signal_pane_g2

0x0001,

0xfea3,	// (0x0004fa39) dt_sta_signal_pane_g

0xa039,	// (0x00049bcf) dt_sta_battery_pane_g1

0xa042,	// (0x00049bd8) dt_sta_battery_pane_t1

0x762d,	// (0x000471c3) bg_dt_sta_control_pane_g1

0x42e8,	// (0x00043e7e) fep_china_uni_eep_pane

0x42f0,	// (0x00043e86) fep_china_uni_entry_pane_ParamLimits

0x4300,	// (0x00043e96) popup_fep_china_uni_window_g1_ParamLimits

0x4310,	// (0x00043ea6) popup_fep_china_uni_window_g2_ParamLimits

0x4310,	// (0x00043ea6) popup_fep_china_uni_window_g2

0x0001,

0xf728,	// (0x0004f2be) popup_fep_china_uni_window_g_ParamLimits

0xf728,	// (0x0004f2be) popup_fep_china_uni_window_g

0xa051,	// (0x00049be7) fep_china_uni_eep_pane_g1

0xa059,	// (0x00049bef) fep_china_uni_eep_pane_t1

0x9ad8,	// (0x0004966e) aid_touch_area_size_smil_player

0x4ccc,	// (0x00044862) lc0_clock_pane

0x4eb1,	// (0x00044a47) status_pane_g5_ParamLimits

0x4eb1,	// (0x00044a47) status_pane_g5

0xc276,	// (0x0004be0c) popup_keymap_window

0x4e77,	// (0x00044a0d) status_icon_pane

0x9cbc,	// (0x00049852) cell_ai5_widget_pane_g3_ParamLimits

0x9cdb,	// (0x00049871) cell_ai5_widget_pane_g4_ParamLimits

0x9ce7,	// (0x0004987d) cell_ai5_widget_pane_g5_ParamLimits

0x9d0b,	// (0x000498a1) cell_ai5_widget_pane_g8_ParamLimits

0x9d0b,	// (0x000498a1) cell_ai5_widget_pane_g8

0x9d1f,	// (0x000498b5) cell_ai5_widget_pane_g9_ParamLimits

0x9d1f,	// (0x000498b5) cell_ai5_widget_pane_g9

0x9d33,	// (0x000498c9) cell_ai5_widget_pane_g10_ParamLimits

0x9d33,	// (0x000498c9) cell_ai5_widget_pane_g10

0xa068,	// (0x00049bfe) status_icon_pane_g1

0x31f5,	// (0x00042d8b) bg_popup_sub_pane_cp13

0xa070,	// (0x00049c06) popup_keymap_window_t1

0xd4bc,	// (0x0004d052) control_pane_g6_ParamLimits

0xd4bc,	// (0x0004d052) control_pane_g6

0xd4c9,	// (0x0004d05f) control_pane_g7_ParamLimits

0xd4c9,	// (0x0004d05f) control_pane_g7

0xd4d6,	// (0x0004d06c) control_pane_g8_ParamLimits

0xd4d6,	// (0x0004d06c) control_pane_g8

0xf221,	// (0x0004edb7) dt_sta_controll_pane_ParamLimits

0xf22e,	// (0x0004edc4) dt_sta_indi_pane_ParamLimits

0xf23b,	// (0x0004edd1) dt_sta_title_pane_ParamLimits

0x3a8d,	// (0x00043623) aid_size_touch_scroll_bar_cale

0x1028,	// (0x00040bbe) popup_discreet_window_ParamLimits

0x1028,	// (0x00040bbe) popup_discreet_window

0xbd57,	// (0x0004b8ed) popup_sk_window

0x569b,	// (0x00045231) bg_popup_sub_pane_cp28_ParamLimits

0x569b,	// (0x00045231) bg_popup_sub_pane_cp28

0xa07e,	// (0x00049c14) popup_discreet_window_g1_ParamLimits

0xa07e,	// (0x00049c14) popup_discreet_window_g1

0xa09e,	// (0x00049c34) popup_discreet_window_t1_ParamLimits

0xa09e,	// (0x00049c34) popup_discreet_window_t1

0xa0bc,	// (0x00049c52) popup_discreet_window_t2_ParamLimits

0xa0bc,	// (0x00049c52) popup_discreet_window_t2

0x0002,

0xfea8,	// (0x0004fa3e) popup_discreet_window_t_ParamLimits

0xfea8,	// (0x0004fa3e) popup_discreet_window_t

0x301f,	// (0x00042bb5) popup_sk_window_g1

0x3029,	// (0x00042bbf) popup_sk_window_g2

0x0001,

0xfeaf,	// (0x0004fa45) popup_sk_window_g

0x3033,	// (0x00042bc9) popup_sk_window_t1

0x3041,	// (0x00042bd7) popup_sk_window_t1_copy1

0x9cac,	// (0x00049842) cell_ai5_widget_pane_g2_ParamLimits

0x9e0a,	// (0x000499a0) cell_ai5_widget_pane_t9_ParamLimits

0x9e0a,	// (0x000499a0) cell_ai5_widget_pane_t9

0x31f5,	// (0x00042d8b) main_fep_fshwr2_pane

0xce4d,	// (0x0004c9e3) aid_fshwr2_btn_pane

0xce5c,	// (0x0004c9f2) aid_fshwr2_syb_pane

0xce6e,	// (0x0004ca04) aid_fshwr2_txt_pane

0xce7d,	// (0x0004ca13) fshwr2_func_candi_pane

0xce8e,	// (0x0004ca24) fshwr2_hwr_syb_pane

0xcea9,	// (0x0004ca3f) fshwr2_icf_pane

0x31f5,	// (0x00042d8b) fshwr2_icf_bg_pane

0xf267,	// (0x0004edfd) fshwr2_icf_pane_t1_ParamLimits

0xf267,	// (0x0004edfd) fshwr2_icf_pane_t1

0x762d,	// (0x000471c3) fshwr2_func_candi_pane_g1

0xa125,	// (0x00049cbb) fshwr2_func_candi_row_pane_ParamLimits

0xa125,	// (0x00049cbb) fshwr2_func_candi_row_pane

0xf27f,	// (0x0004ee15) cell_fshwr2_syb_pane_ParamLimits

0xf27f,	// (0x0004ee15) cell_fshwr2_syb_pane

0x78ab,	// (0x00047441) fshwr2_hwr_syb_pane_g1_ParamLimits

0x78ab,	// (0x00047441) fshwr2_hwr_syb_pane_g1

0x31f5,	// (0x00042d8b) bg_popup_call_pane_cp01

0xa150,	// (0x00049ce6) fshwr2_func_candi_cell_pane_ParamLimits

0xa150,	// (0x00049ce6) fshwr2_func_candi_cell_pane

0xa181,	// (0x00049d17) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa181,	// (0x00049d17) fshwr2_func_candi_cell_bg_pane

0xa19b,	// (0x00049d31) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xa19b,	// (0x00049d31) fshwr2_func_candi_cell_pane_g1

0xa1c3,	// (0x00049d59) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xa1c3,	// (0x00049d59) fshwr2_func_candi_cell_pane_t1

0x31f5,	// (0x00042d8b) bg_button_pane_cp08

0x47de,	// (0x00044374) cell_fshwr2_syb_bg_pane

0xf299,	// (0x0004ee2f) cell_fshwr2_syb_bg_pane_g1

0xf2a1,	// (0x0004ee37) cell_fshwr2_syb_bg_pane_t1

0x3b61,	// (0x000436f7) main_tmo_pane

0xdb81,	// (0x0004d717) uni_indicator_pane_g1_ParamLimits

0xdb96,	// (0x0004d72c) uni_indicator_pane_g2_ParamLimits

0x61d5,	// (0x00045d6b) uni_indicator_pane_g3_ParamLimits

0x61eb,	// (0x00045d81) uni_indicator_pane_g4_ParamLimits

0x61eb,	// (0x00045d81) uni_indicator_pane_g4

0x61ff,	// (0x00045d95) uni_indicator_pane_g5_ParamLimits

0x61ff,	// (0x00045d95) uni_indicator_pane_g5

0x6213,	// (0x00045da9) uni_indicator_pane_g6_ParamLimits

0x6213,	// (0x00045da9) uni_indicator_pane_g6

0xf927,	// (0x0004f4bd) uni_indicator_pane_g_ParamLimits

0xe628,	// (0x0004e1be) popup_tmo_note_window_ParamLimits

0xe628,	// (0x0004e1be) popup_tmo_note_window

0x3b61,	// (0x000436f7) fshwr2_bg_pane

0xa1b4,	// (0x00049d4a) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xa1b4,	// (0x00049d4a) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb4,	// (0x0004fa4a) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb4,	// (0x0004fa4a) fshwr2_func_candi_cell_pane_g

0x762d,	// (0x000471c3) bg_popup_window_pane_cp01

0xa1ed,	// (0x00049d83) bg_popup_window_pane_g1_cp01

0xa1f6,	// (0x00049d8c) bg_popup_window_pane_cp22_ParamLimits

0xa1f6,	// (0x00049d8c) bg_popup_window_pane_cp22

0xa204,	// (0x00049d9a) listscroll_tmo_link_pane_ParamLimits

0xa204,	// (0x00049d9a) listscroll_tmo_link_pane

0xa244,	// (0x00049dda) popup_tmo_note_window_g1_ParamLimits

0xa244,	// (0x00049dda) popup_tmo_note_window_g1

0xa251,	// (0x00049de7) tmo_note_info_pane_ParamLimits

0xa251,	// (0x00049de7) tmo_note_info_pane

0xf2b0,	// (0x0004ee46) list_tmo_note_info_pane_g1_ParamLimits

0xf2b0,	// (0x0004ee46) list_tmo_note_info_pane_g1

0xa282,	// (0x00049e18) list_tmo_note_info_pane_g2_ParamLimits

0xa282,	// (0x00049e18) list_tmo_note_info_pane_g2

0x0001,

0xfeb9,	// (0x0004fa4f) list_tmo_note_info_pane_g_ParamLimits

0xfeb9,	// (0x0004fa4f) list_tmo_note_info_pane_g

0xa29e,	// (0x00049e34) list_tmo_note_info_text_pane_ParamLimits

0xa29e,	// (0x00049e34) list_tmo_note_info_text_pane

0xa31f,	// (0x00049eb5) list_tmo_link_pane

0xa32c,	// (0x00049ec2) scroll_pane_cp20

0xa339,	// (0x00049ecf) list_single_tmo_link_pane_ParamLimits

0xa339,	// (0x00049ecf) list_single_tmo_link_pane

0xa349,	// (0x00049edf) list_single_tmo_link_pane_t1

0xa357,	// (0x00049eed) list_tmo_note_info_text_pane_t1_ParamLimits

0xa357,	// (0x00049eed) list_tmo_note_info_text_pane_t1

0xd142,	// (0x0004ccd8) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd142,	// (0x0004ccd8) aid_size_touch_scroll_bar_cp01

0xb905,	// (0x0004b49b) aid_size_touch_slider_marker

0xbd47,	// (0x0004b8dd) popup_settings_window_ParamLimits

0xbd47,	// (0x0004b8dd) popup_settings_window

0x0632,	// (0x000401c8) popup_candi_list_indi_window

0x4b80,	// (0x00044716) aid_touch_navi_pane_ParamLimits

0x2832,	// (0x000423c8) rs_clock_indi_pane

0x283b,	// (0x000423d1) sctrl_sk_bottom_pane_ParamLimits

0x284c,	// (0x000423e2) sctrl_sk_top_pane_ParamLimits

0x2933,	// (0x000424c9) popup_fep_tooltip_window

0x9c2c,	// (0x000497c2) aid_size_cell_widget_grid_ParamLimits

0x9ca0,	// (0x00049836) cell_ai5_widget_pane_g1_ParamLimits

0x9ca0,	// (0x00049836) cell_ai5_widget_pane_g1

0x9cf3,	// (0x00049889) cell_ai5_widget_pane_g6_ParamLimits

0x9cff,	// (0x00049895) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe37,	// (0x0004f9cd) cell_ai5_widget_pane_g_ParamLimits

0xfe37,	// (0x0004f9cd) cell_ai5_widget_pane_g

0x9e2e,	// (0x000499c4) cell_ai5_widget_pane_t10_ParamLimits

0x9e2e,	// (0x000499c4) cell_ai5_widget_pane_t10

0x9e44,	// (0x000499da) grid_ai5_widget_pane_ParamLimits

0x9ee6,	// (0x00049a7c) cell_contacts_ai5_widget_pane_ParamLimits

0x9ee6,	// (0x00049a7c) cell_contacts_ai5_widget_pane

0xa0d1,	// (0x00049c67) popup_discreet_window_t3_ParamLimits

0xa0d1,	// (0x00049c67) popup_discreet_window_t3

0x30b9,	// (0x00042c4f) popup_fshwr2_char_preview_window_ParamLimits

0x30b9,	// (0x00042c4f) popup_fshwr2_char_preview_window

0xf2c7,	// (0x0004ee5d) tmo_note_info_pane_t1

0xf2dc,	// (0x0004ee72) tmo_note_info_pane_t2

0xf2f3,	// (0x0004ee89) tmo_note_info_pane_t3

0xa2fb,	// (0x00049e91) tmo_note_info_pane_t4

0xa30d,	// (0x00049ea3) tmo_note_info_pane_t5

0x0004,

0xfebe,	// (0x0004fa54) tmo_note_info_pane_t

0xa31f,	// (0x00049eb5) list_tmo_link_pane_ParamLimits

0xa32c,	// (0x00049ec2) scroll_pane_cp20_ParamLimits

0x31f5,	// (0x00042d8b) bg_popup_fep_char_preview_window_cp01

0xa370,	// (0x00049f06) popup_fshwr2_char_preview_window_t1

0xa37e,	// (0x00049f14) popup_candi_list_indi_window_g1

0xa387,	// (0x00049f1d) bg_cell_contacts_ai5_widget_pane

0xa393,	// (0x00049f29) cell_contacts_ai5_widget_pane_g1

0xa3a7,	// (0x00049f3d) cell_contacts_ai5_widget_pane_g2

0xa3b3,	// (0x00049f49) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec9,	// (0x0004fa5f) cell_contacts_ai5_widget_pane_g

0xa3c6,	// (0x00049f5c) cell_contacts_ai5_widget_pane_t1

0x3b61,	// (0x000436f7) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf36d,	// (0x0004ef03) settings_container_pane

0x47de,	// (0x00044374) listscroll_set_pane_copy1

0x6d1a,	// (0x000468b0) scroll_pane_cp121_copy1

0xa449,	// (0x00049fdf) set_content_pane_copy1

0xf379,	// (0x0004ef0f) aid_height_set_list_copy1_ParamLimits

0xf379,	// (0x0004ef0f) aid_height_set_list_copy1

0x640b,	// (0x00045fa1) aid_size_parent_copy1_ParamLimits

0x640b,	// (0x00045fa1) aid_size_parent_copy1

0xf385,	// (0x0004ef1b) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf385,	// (0x0004ef1b) button_value_adjust_pane_cp6_copy1

0x4b1e,	// (0x000446b4) list_highlight_pane_cp2_copy1_ParamLimits

0x4b1e,	// (0x000446b4) list_highlight_pane_cp2_copy1

0xf399,	// (0x0004ef2f) list_set_pane_copy1_ParamLimits

0xf399,	// (0x0004ef2f) list_set_pane_copy1

0xf308,	// (0x0004ee9e) main_pane_set_t1_copy1_ParamLimits

0xf308,	// (0x0004ee9e) main_pane_set_t1_copy1

0xf342,	// (0x0004eed8) main_pane_set_t2_copy1_ParamLimits

0xf342,	// (0x0004eed8) main_pane_set_t2_copy1

0xf446,	// (0x0004efdc) main_pane_set_t3_copy1

0xf454,	// (0x0004efea) main_pane_set_t4_copy1

0xf361,	// (0x0004eef7) set_content_pane_g1_copy1_ParamLimits

0xf361,	// (0x0004eef7) set_content_pane_g1_copy1

0xf462,	// (0x0004eff8) setting_code_pane_copy1

0xa542,	// (0x0004a0d8) setting_slider_graphic_pane_copy1

0xa542,	// (0x0004a0d8) setting_slider_pane_copy1

0xa542,	// (0x0004a0d8) setting_text_pane_copy1

0xa542,	// (0x0004a0d8) setting_volume_pane_copy1

0xf462,	// (0x0004eff8) settings_code_pane_cp2_copy1

0xf46a,	// (0x0004f000) settings_code_pane_cp_copy1_ParamLimits

0xf46a,	// (0x0004f000) settings_code_pane_cp_copy1

0xcec1,	// (0x0004ca57) volume_set_pane_copy1

0xf47e,	// (0x0004f014) volume_set_pane_g10_copy1

0xf486,	// (0x0004f01c) volume_set_pane_g1_copy1

0xf48e,	// (0x0004f024) volume_set_pane_g2_copy1

0xf496,	// (0x0004f02c) volume_set_pane_g3_copy1

0xf49e,	// (0x0004f034) volume_set_pane_g4_copy1

0xf4a6,	// (0x0004f03c) volume_set_pane_g5_copy1

0xf4ae,	// (0x0004f044) volume_set_pane_g6_copy1

0xf4b6,	// (0x0004f04c) volume_set_pane_g7_copy1

0xf4be,	// (0x0004f054) volume_set_pane_g8_copy1

0xf4c6,	// (0x0004f05c) volume_set_pane_g9_copy1

0x32e9,	// (0x00042e7f) bg_set_opt_pane_cp_copy1_ParamLimits

0x32e9,	// (0x00042e7f) bg_set_opt_pane_cp_copy1

0x30d5,	// (0x00042c6b) setting_slider_pane_t1_copy1_ParamLimits

0x30d5,	// (0x00042c6b) setting_slider_pane_t1_copy1

0xcec9,	// (0x0004ca5f) setting_slider_pane_t2_copy1_ParamLimits

0xcec9,	// (0x0004ca5f) setting_slider_pane_t2_copy1

0xcee3,	// (0x0004ca79) setting_slider_pane_t3_copy1_ParamLimits

0xcee3,	// (0x0004ca79) setting_slider_pane_t3_copy1

0xcefb,	// (0x0004ca91) slider_set_pane_copy1_ParamLimits

0xcefb,	// (0x0004ca91) slider_set_pane_copy1

0x3bb0,	// (0x00043746) set_opt_bg_pane_g1_copy2

0x3bb8,	// (0x0004374e) set_opt_bg_pane_g2_copy2

0xa5ae,	// (0x0004a144) set_opt_bg_pane_g3_copy2

0x3bc8,	// (0x0004375e) set_opt_bg_pane_g4_copy2

0x3bd0,	// (0x00043766) set_opt_bg_pane_g5_copy2

0x3bd8,	// (0x0004376e) set_opt_bg_pane_g6_copy2

0xf4ce,	// (0x0004f064) set_opt_bg_pane_g7_copy2

0xa5c0,	// (0x0004a156) set_opt_bg_pane_g8_copy2

0xa5ca,	// (0x0004a160) set_opt_bg_pane_g9_copy2

0xa5d4,	// (0x0004a16a) aid_size_touch_slider_mark_copy1_ParamLimits

0xa5d4,	// (0x0004a16a) aid_size_touch_slider_mark_copy1

0xa5e8,	// (0x0004a17e) slider_set_pane_g1_copy1

0xa5f1,	// (0x0004a187) slider_set_pane_g2_copy1

0x687d,	// (0x00046413) slider_set_pane_g3_copy1_ParamLimits

0x687d,	// (0x00046413) slider_set_pane_g3_copy1

0x6891,	// (0x00046427) slider_set_pane_g4_copy1_ParamLimits

0x6891,	// (0x00046427) slider_set_pane_g4_copy1

0x68a9,	// (0x0004643f) slider_set_pane_g5_copy1_ParamLimits

0x68a9,	// (0x0004643f) slider_set_pane_g5_copy1

0x687d,	// (0x00046413) slider_set_pane_g6_copy1_ParamLimits

0x687d,	// (0x00046413) slider_set_pane_g6_copy1

0xf4d6,	// (0x0004f06c) slider_set_pane_g7_copy1_ParamLimits

0xf4d6,	// (0x0004f06c) slider_set_pane_g7_copy1

0x3209,	// (0x00042d9f) bg_set_opt_pane_cp2_copy1

0xa60f,	// (0x0004a1a5) setting_slider_graphic_pane_g1_copy1

0xf4ec,	// (0x0004f082) setting_slider_graphic_pane_t1_copy1

0xf4fc,	// (0x0004f092) setting_slider_graphic_pane_t2_copy1

0xf50c,	// (0x0004f0a2) slider_set_pane_cp_copy1

0xa648,	// (0x0004a1de) input_focus_pane_cp1_copy1

0xa651,	// (0x0004a1e7) list_set_text_pane_copy1

0xa659,	// (0x0004a1ef) setting_text_pane_g1_copy1

0xf53b,	// (0x0004f0d1) set_text_pane_t1_copy1

0xa648,	// (0x0004a1de) input_focus_pane_cp2_copy1

0xa659,	// (0x0004a1ef) setting_code_pane_g1_copy1

0xf514,	// (0x0004f0aa) setting_code_pane_t1_copy1

0x6b45,	// (0x000466db) list_set_graphic_pane_copy1

0x3209,	// (0x00042d9f) bg_set_opt_pane_cp4_copy1

0xd369,	// (0x0004ceff) list_set_graphic_pane_g1_copy1_ParamLimits

0xd369,	// (0x0004ceff) list_set_graphic_pane_g1_copy1

0xf522,	// (0x0004f0b8) list_set_graphic_pane_g2_copy1

0xd381,	// (0x0004cf17) list_set_graphic_pane_t1_copy1_ParamLimits

0xd381,	// (0x0004cf17) list_set_graphic_pane_t1_copy1

0x762d,	// (0x000471c3) rs_clock_indi_pane_g1

0xa68a,	// (0x0004a220) rs_clock_indi_pane_t1

0xa698,	// (0x0004a22e) rs_indi_pane

0xa6a0,	// (0x0004a236) rs_indi_pane_g1

0xa6a9,	// (0x0004a23f) rs_indi_pane_g2

0xa6b2,	// (0x0004a248) rs_indi_pane_g3

0x0002,

0xfed0,	// (0x0004fa66) rs_indi_pane_g

0x47de,	// (0x00044374) bg_popup_preview_window_pane_cp03

0xa6bb,	// (0x0004a251) popup_fep_tooltip_window_t1

0x82b5,	// (0x00047e4b) popup_note2_window_g2_ParamLimits

0x82b5,	// (0x00047e4b) popup_note2_window_g2

0x0001,

0xfc69,	// (0x0004f7ff) popup_note2_window_g_ParamLimits

0xfc69,	// (0x0004f7ff) popup_note2_window_g

0x87b0,	// (0x00048346) bg_popup_sub_pane_cp11_ParamLimits

0x87bd,	// (0x00048353) cell_ai3_links_pane_g1_ParamLimits

0x87d4,	// (0x0004836a) cell_ai3_links_pane_t1

0xf53b,	// (0x0004f0d1) set_text_pane_t1_copy1_ParamLimits

0xd3f5,	// (0x0004cf8b) cell_graphic_popup_pane_cp2_ParamLimits

0xd3f5,	// (0x0004cf8b) cell_graphic_popup_pane_cp2

0xf52a,	// (0x0004f0c0) cell_graphic_popup_pane_g1_cp2

0x38a0,	// (0x00043436) cell_graphic_popup_pane_g2_cp2

0xa6d1,	// (0x0004a267) cell_graphic_popup_pane_g3_cp2

0xa6d9,	// (0x0004a26f) cell_graphic_popup_pane_t2_cp2

0x38b1,	// (0x00043447) grid_highlight_pane_cp3_cp2

0x3ef5,	// (0x00043a8b) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3b61,	// (0x000436f7) main_tmo_pane_ParamLimits

0xe61c,	// (0x0004e1b2) popup_tmo_big_image_note_window

0x9c90,	// (0x00049826) cell_ai5_widget_list_pane

0x9c98,	// (0x0004982e) cell_ai5_widget_lrg_icon_pane

0xf2c7,	// (0x0004ee5d) tmo_note_info_pane_t1_ParamLimits

0xf2dc,	// (0x0004ee72) tmo_note_info_pane_t2_ParamLimits

0xf2f3,	// (0x0004ee89) tmo_note_info_pane_t3_ParamLimits

0xa2fb,	// (0x00049e91) tmo_note_info_pane_t4_ParamLimits

0xa30d,	// (0x00049ea3) tmo_note_info_pane_t5_ParamLimits

0xfebe,	// (0x0004fa54) tmo_note_info_pane_t_ParamLimits

0xf36d,	// (0x0004ef03) settings_container_pane_ParamLimits

0xa640,	// (0x0004a1d6) indicator_popup_pane_cp5

0xa640,	// (0x0004a1d6) indicator_popup_pane_cp6

0x6b45,	// (0x000466db) list_set_graphic_pane_copy1_ParamLimits

0x31f5,	// (0x00042d8b) bg_popup_window_pane_cp23

0xa6e7,	// (0x0004a27d) popup_tmo_big_image_note_window_g1

0xa6f1,	// (0x0004a287) popup_tmo_big_image_note_window_t1

0xa701,	// (0x0004a297) popup_tmo_big_image_note_window_t2

0xa711,	// (0x0004a2a7) popup_tmo_big_image_note_window_t3

0x0002,

0xfed7,	// (0x0004fa6d) popup_tmo_big_image_note_window_t

0xa721,	// (0x0004a2b7) cell_ai5_widget_lrg_icon_pane_g1

0xa729,	// (0x0004a2bf) cell_ai5_widget_lrg_icon_pane_t1

0xa737,	// (0x0004a2cd) cell_ai5_widget_list_row_pane_ParamLimits

0xa737,	// (0x0004a2cd) cell_ai5_widget_list_row_pane

0xa74f,	// (0x0004a2e5) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa74f,	// (0x0004a2e5) cell_ai5_widget_list_row_pane_g1

0xa75c,	// (0x0004a2f2) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa75c,	// (0x0004a2f2) cell_ai5_widget_list_row_pane_t1

0xa774,	// (0x0004a30a) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa774,	// (0x0004a30a) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfede,	// (0x0004fa74) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfede,	// (0x0004fa74) cell_ai5_widget_list_row_pane_t

0x31f5,	// (0x00042d8b) main_fep_vtchi_ss_pane

0x314a,	// (0x00042ce0) popup_fep_char_pre_window

0x3152,	// (0x00042ce8) popup_fep_ituss_window

0x3173,	// (0x00042d09) popup_fep_vkbss_window

0xa79c,	// (0x0004a332) grid_vkbss_keypad_pane_ParamLimits

0xa79c,	// (0x0004a332) grid_vkbss_keypad_pane

0xa7ac,	// (0x0004a342) ituss_keypad_pane

0x319e,	// (0x00042d34) aid_vkbss_key_offset_ParamLimits

0x319e,	// (0x00042d34) aid_vkbss_key_offset

0x31aa,	// (0x00042d40) cell_vkbss_key_pane_ParamLimits

0x31aa,	// (0x00042d40) cell_vkbss_key_pane

0xa7bc,	// (0x0004a352) bg_cell_vkbss_key_g1_ParamLimits

0xa7bc,	// (0x0004a352) bg_cell_vkbss_key_g1

0xa7c8,	// (0x0004a35e) cell_vkbss_key_3p_pane_ParamLimits

0xa7c8,	// (0x0004a35e) cell_vkbss_key_3p_pane

0xa7e2,	// (0x0004a378) cell_vkbss_key_g1_ParamLimits

0xa7e2,	// (0x0004a378) cell_vkbss_key_g1

0xa7fc,	// (0x0004a392) cell_vkbss_key_t1_ParamLimits

0xa7fc,	// (0x0004a392) cell_vkbss_key_t1

0x31c0,	// (0x00042d56) cell_ituss_key_pane_ParamLimits

0x31c0,	// (0x00042d56) cell_ituss_key_pane

0xa827,	// (0x0004a3bd) bg_cell_ituss_key_g1_ParamLimits

0xa827,	// (0x0004a3bd) bg_cell_ituss_key_g1

0xa833,	// (0x0004a3c9) cell_ituss_key_pane_g1_ParamLimits

0xa833,	// (0x0004a3c9) cell_ituss_key_pane_g1

0xa84d,	// (0x0004a3e3) cell_ituss_key_pane_g2_ParamLimits

0xa84d,	// (0x0004a3e3) cell_ituss_key_pane_g2

0x0001,

0xfee5,	// (0x0004fa7b) cell_ituss_key_pane_g_ParamLimits

0xfee5,	// (0x0004fa7b) cell_ituss_key_pane_g

0xa87b,	// (0x0004a411) cell_ituss_key_t1_ParamLimits

0xa87b,	// (0x0004a411) cell_ituss_key_t1

0xa8b1,	// (0x0004a447) cell_ituss_key_t2_ParamLimits

0xa8b1,	// (0x0004a447) cell_ituss_key_t2

0xa8e2,	// (0x0004a478) cell_ituss_key_t3_ParamLimits

0xa8e2,	// (0x0004a478) cell_ituss_key_t3

0xa91c,	// (0x0004a4b2) cell_ituss_key_t4_ParamLimits

0xa91c,	// (0x0004a4b2) cell_ituss_key_t4

0x0003,

0xfeea,	// (0x0004fa80) cell_ituss_key_t_ParamLimits

0xfeea,	// (0x0004fa80) cell_ituss_key_t

0xa956,	// (0x0004a4ec) cell_vkbss_key_3p_pane_g1

0xa95e,	// (0x0004a4f4) cell_vkbss_key_3p_pane_g2

0xa966,	// (0x0004a4fc) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef3,	// (0x0004fa89) cell_vkbss_key_3p_pane_g

0x31f5,	// (0x00042d8b) bg_popup_fep_char_preview_window_cp02

0xa96e,	// (0x0004a504) popup_fep_char_pre_window_t1

0xf1f1,	// (0x0004ed87) main_ai5_sk_pane

0xa387,	// (0x00049f1d) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa393,	// (0x00049f29) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa3a7,	// (0x00049f3d) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa3b3,	// (0x00049f49) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec9,	// (0x0004fa5f) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa3c6,	// (0x00049f5c) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3b61,	// (0x000436f7) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf532,	// (0x0004f0c8) main_ai5_sk_pane_g1

0x54d4,	// (0x0004506a) popup_query_code_window_g1

0x3168,	// (0x00042cfe) popup_fep_vkb_icf_pane

0x317c,	// (0x00042d12) popup_fep_vtchi_icf_pane

0x3b61,	// (0x000436f7) bg_icf_pane

0xa986,	// (0x0004a51c) list_vkb_icf_pane

0x3b61,	// (0x000436f7) bg_icf_pane_cp01

0xa992,	// (0x0004a528) vtchi_icf_list_pane

0xa9a3,	// (0x0004a539) list_vkb_icf_pane_t1_ParamLimits

0xa9a3,	// (0x0004a539) list_vkb_icf_pane_t1

0xa9b9,	// (0x0004a54f) vtchi_icf_list_pane_t1_ParamLimits

0xa9b9,	// (0x0004a54f) vtchi_icf_list_pane_t1

0x3152,	// (0x00042ce8) popup_fep_ituss_window_ParamLimits

0x317c,	// (0x00042d12) popup_fep_vtchi_icf_pane_ParamLimits

0xa7ac,	// (0x0004a342) ituss_keypad_pane_ParamLimits

0x3192,	// (0x00042d28) ituss_sks_pane

0x3b61,	// (0x000436f7) bg_icf_pane_ParamLimits

0x313b,	// (0x00042cd1) icf_edit_indi_pane_ParamLimits

0x313b,	// (0x00042cd1) icf_edit_indi_pane

0xa986,	// (0x0004a51c) list_vkb_icf_pane_ParamLimits

0x3b61,	// (0x000436f7) bg_icf_pane_cp01_ParamLimits

0x313b,	// (0x00042cd1) icf_edit_indi_pane_cp01_ParamLimits

0x313b,	// (0x00042cd1) icf_edit_indi_pane_cp01

0xa99a,	// (0x0004a530) vtchi_query_pane

0x78ab,	// (0x00047441) icf_edit_indi_pane_g1_ParamLimits

0x78ab,	// (0x00047441) icf_edit_indi_pane_g1

0xaa3e,	// (0x0004a5d4) icf_edit_indi_pane_g2_ParamLimits

0xaa3e,	// (0x0004a5d4) icf_edit_indi_pane_g2

0x0001,

0xff0b,	// (0x0004faa1) icf_edit_indi_pane_g_ParamLimits

0xff0b,	// (0x0004faa1) icf_edit_indi_pane_g

0xaa4d,	// (0x0004a5e3) icf_edit_indi_pane_t1

0xa9d4,	// (0x0004a56a) bg_input_focus_pane_cp042

0x3a84,	// (0x0004361a) vtchi_button_pane

0xa9dd,	// (0x0004a573) vtchi_query_pane_t1

0xa9eb,	// (0x0004a581) vtchi_query_pane_t2

0xa9f9,	// (0x0004a58f) vtchi_query_pane_t3

0x0002,

0xfefa,	// (0x0004fa90) vtchi_query_pane_t

0x31f5,	// (0x00042d8b) bg_button_pane_cp13

0xaa07,	// (0x0004a59d) vtchi_button_pane_g1

0xaa0f,	// (0x0004a5a5) ituss_sks_pane_g1

0xaa1a,	// (0x0004a5b0) ituss_sks_pane_g2

0x0001,

0xff01,	// (0x0004fa97) ituss_sks_pane_g

0xaa22,	// (0x0004a5b8) ituss_sks_pane_t1

0xaa30,	// (0x0004a5c6) ituss_sks_pane_t2

0x0001,

0xff06,	// (0x0004fa9c) ituss_sks_pane_t

0x70a4,	// (0x00046c3a) indicator_nsta_pane_cp_g1

0x70ad,	// (0x00046c43) indicator_nsta_pane_cp_g2

0x70b5,	// (0x00046c4b) indicator_nsta_pane_cp_g3

0x70bd,	// (0x00046c53) indicator_nsta_pane_cp_g4

0x70bd,	// (0x00046c53) indicator_nsta_pane_cp_g5

0x70bd,	// (0x00046c53) indicator_nsta_pane_cp_g6

0x0005,

0xfab3,	// (0x0004f649) indicator_nsta_pane_cp_g

0xf003,	// (0x0004eb99) cell_graphic2_pane_t2_ParamLimits

0xf003,	// (0x0004eb99) cell_graphic2_pane_t2

0x0001,

0xfdc0,	// (0x0004f956) cell_graphic2_pane_t_ParamLimits

0xfdc0,	// (0x0004f956) cell_graphic2_pane_t

0xf039,	// (0x0004ebcf) cell_graphic2_control_pane_t1

0xd307,	// (0x0004ce9d) signal_pane_g3_ParamLimits

0xd307,	// (0x0004ce9d) signal_pane_g3

0xd31b,	// (0x0004ceb1) signal_pane_g4_ParamLimits

0xd31b,	// (0x0004ceb1) signal_pane_g4

0xa786,	// (0x0004a31c) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa786,	// (0x0004a31c) cell_ai5_widget_list_row_pane_t3

0xa869,	// (0x0004a3ff) cell_ituss_key_pane_t1_ParamLimits

0xa869,	// (0x0004a3ff) cell_ituss_key_pane_t1

0x5127,	// (0x00044cbd) form_field_data_wide_pane_vc_t2_ParamLimits

0x5127,	// (0x00044cbd) form_field_data_wide_pane_vc_t2

0x513b,	// (0x00044cd1) form_field_data_wide_pane_vc_t3_ParamLimits

0x513b,	// (0x00044cd1) form_field_data_wide_pane_vc_t3

0x0002,

0xf80f,	// (0x0004f3a5) form_field_data_wide_pane_vc_t_ParamLimits

0xf80f,	// (0x0004f3a5) form_field_data_wide_pane_vc_t

0x6d5c,	// (0x000468f2) form_field_slider_wide_pane_vc_t3_ParamLimits

0x6d5c,	// (0x000468f2) form_field_slider_wide_pane_vc_t3

0x6e3a,	// (0x000469d0) form_field_popup_wide_pane_vc_t2_ParamLimits

0x6e3a,	// (0x000469d0) form_field_popup_wide_pane_vc_t2

0x6e51,	// (0x000469e7) form_field_popup_wide_pane_vc_t3_ParamLimits

0x6e51,	// (0x000469e7) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa2,	// (0x0004f638) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa2,	// (0x0004f638) form_field_popup_wide_pane_vc_t

0xce4d,	// (0x0004c9e3) aid_fshwr2_btn_pane_ParamLimits

0xce5c,	// (0x0004c9f2) aid_fshwr2_syb_pane_ParamLimits

0xce6e,	// (0x0004ca04) aid_fshwr2_txt_pane_ParamLimits

0x3b61,	// (0x000436f7) fshwr2_bg_pane_ParamLimits

0xce7d,	// (0x0004ca13) fshwr2_func_candi_pane_ParamLimits

0xce8e,	// (0x0004ca24) fshwr2_hwr_syb_pane_ParamLimits

0xcea9,	// (0x0004ca3f) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Large

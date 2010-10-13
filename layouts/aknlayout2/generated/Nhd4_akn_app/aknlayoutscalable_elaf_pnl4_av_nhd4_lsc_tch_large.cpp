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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0004b7cc };

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
0x8e94,	// (0x00054660) Screen

0x8ea8,	// (0x00054674) application_window_ParamLimits

0x8ea8,	// (0x00054674) application_window

0x8ec2,	// (0x0005468e) screen_g1

0x8ef4,	// (0x000546c0) area_bottom_pane_ParamLimits

0x8ef4,	// (0x000546c0) area_bottom_pane

0x8fb2,	// (0x0005477e) area_top_pane_ParamLimits

0x8fb2,	// (0x0005477e) area_top_pane

0x9046,	// (0x00054812) main_pane_ParamLimits

0x9046,	// (0x00054812) main_pane

0x9101,	// (0x000548cd) misc_graphics

0xb02d,	// (0x000567f9) battery_pane_ParamLimits

0xb02d,	// (0x000567f9) battery_pane

0x2a53,	// (0x0004e21f) bg_status_flat_pane_g8

0x2a5b,	// (0x0004e227) bg_status_flat_pane_g9

0x074e,	// (0x0004bf1a) context_pane_ParamLimits

0x074e,	// (0x0004bf1a) context_pane

0xb198,	// (0x00056964) navi_pane_ParamLimits

0xb198,	// (0x00056964) navi_pane

0xb216,	// (0x000569e2) signal_pane_ParamLimits

0xb216,	// (0x000569e2) signal_pane

0x0008,

0xf83e,	// (0x0005b00a) bg_status_flat_pane_g

0xb2a6,	// (0x00056a72) status_pane_g1_ParamLimits

0xb2a6,	// (0x00056a72) status_pane_g1

0xb2bc,	// (0x00056a88) status_pane_g2_ParamLimits

0xb2bc,	// (0x00056a88) status_pane_g2

0x2054,	// (0x0004d820) status_pane_g3_ParamLimits

0x2054,	// (0x0004d820) status_pane_g3

0x0004,

0xf771,	// (0x0005af3d) status_pane_g_ParamLimits

0xf771,	// (0x0005af3d) status_pane_g

0xb2c8,	// (0x00056a94) title_pane_ParamLimits

0xb2c8,	// (0x00056a94) title_pane

0xb32b,	// (0x00056af7) uni_indicator_pane_ParamLimits

0xb32b,	// (0x00056af7) uni_indicator_pane

0xc5ec,	// (0x00057db8) bg_list_pane_ParamLimits

0xc5ec,	// (0x00057db8) bg_list_pane

0xa81b,	// (0x00055fe7) find_pane

0x2268,	// (0x0004da34) listscroll_app_pane_ParamLimits

0x2268,	// (0x0004da34) listscroll_app_pane

0xc60c,	// (0x00057dd8) listscroll_form_pane

0xa823,	// (0x00055fef) listscroll_gen_pane_ParamLimits

0xa823,	// (0x00055fef) listscroll_gen_pane

0x0067,	// (0x0004b833) listscroll_set_pane

0x35b7,	// (0x0004ed83) main_idle_act_pane

0xc480,	// (0x00057c4c) main_idle_trad_pane

0xc480,	// (0x00057c4c) main_list_empty_pane

0x9ec6,	// (0x00055692) main_midp_pane

0xc626,	// (0x00057df2) main_pane_g1_ParamLimits

0xc626,	// (0x00057df2) main_pane_g1

0xa837,	// (0x00056003) popup_ai_message_window_ParamLimits

0xa837,	// (0x00056003) popup_ai_message_window

0xa8e8,	// (0x000560b4) popup_fep_china_uni_window_ParamLimits

0xa8e8,	// (0x000560b4) popup_fep_china_uni_window

0xa942,	// (0x0005610e) popup_fep_japan_candidate_window_ParamLimits

0xa942,	// (0x0005610e) popup_fep_japan_candidate_window

0xa960,	// (0x0005612c) popup_fep_japan_predictive_window_ParamLimits

0xa960,	// (0x0005612c) popup_fep_japan_predictive_window

0xa972,	// (0x0005613e) popup_find_window

0xa98f,	// (0x0005615b) popup_grid_graphic_window_ParamLimits

0xa98f,	// (0x0005615b) popup_grid_graphic_window

0x01f2,	// (0x0004b9be) popup_large_graphic_colour_window

0xaa2d,	// (0x000561f9) popup_menu_window_ParamLimits

0xaa2d,	// (0x000561f9) popup_menu_window

0xabff,	// (0x000563cb) popup_note_image_window

0xabc5,	// (0x00056391) popup_note_wait_window_ParamLimits

0xabc5,	// (0x00056391) popup_note_wait_window

0xac17,	// (0x000563e3) popup_note_window_ParamLimits

0xac17,	// (0x000563e3) popup_note_window

0xacc6,	// (0x00056492) popup_query_code_window_ParamLimits

0xacc6,	// (0x00056492) popup_query_code_window

0xad00,	// (0x000564cc) popup_query_data_code_window_ParamLimits

0xad00,	// (0x000564cc) popup_query_data_code_window

0xad1d,	// (0x000564e9) popup_query_data_window_ParamLimits

0xad1d,	// (0x000564e9) popup_query_data_window

0xad9f,	// (0x0005656b) popup_query_sat_info_window_ParamLimits

0xad9f,	// (0x0005656b) popup_query_sat_info_window

0xae36,	// (0x00056602) popup_snote_single_graphic_window_ParamLimits

0xae36,	// (0x00056602) popup_snote_single_graphic_window

0xae36,	// (0x00056602) popup_snote_single_text_window_ParamLimits

0xae36,	// (0x00056602) popup_snote_single_text_window

0x04c5,	// (0x0004bc91) popup_sub_window_general

0xaf93,	// (0x0005675f) popup_window_general_ParamLimits

0xaf93,	// (0x0005675f) popup_window_general

0x060a,	// (0x0004bdd6) power_save_pane

0xa675,	// (0x00055e41) control_pane_g1_ParamLimits

0xa675,	// (0x00055e41) control_pane_g1

0xa69e,	// (0x00055e6a) control_pane_g2_ParamLimits

0xa69e,	// (0x00055e6a) control_pane_g2

0xc5d6,	// (0x00057da2) control_pane_g3_ParamLimits

0xc5d6,	// (0x00057da2) control_pane_g3

0x0007,

0xf759,	// (0x0005af25) control_pane_g_ParamLimits

0xf759,	// (0x0005af25) control_pane_g

0xa706,	// (0x00055ed2) control_pane_t1_ParamLimits

0xa706,	// (0x00055ed2) control_pane_t1

0xa76e,	// (0x00055f3a) control_pane_t2_ParamLimits

0xa76e,	// (0x00055f3a) control_pane_t2

0x0002,

0xf76a,	// (0x0005af36) control_pane_t_ParamLimits

0xf76a,	// (0x0005af36) control_pane_t

0xa5ec,	// (0x00055db8) navi_navi_volume_pane_cp1

0xa5f4,	// (0x00055dc0) status_small_icon_pane

0xc582,	// (0x00057d4e) status_small_pane_g1_ParamLimits

0xc582,	// (0x00057d4e) status_small_pane_g1

0xa5fc,	// (0x00055dc8) status_small_pane_g2_ParamLimits

0xa5fc,	// (0x00055dc8) status_small_pane_g2

0xc5b6,	// (0x00057d82) status_small_pane_g3_ParamLimits

0xc5b6,	// (0x00057d82) status_small_pane_g3

0xa608,	// (0x00055dd4) status_small_pane_g4_ParamLimits

0xa608,	// (0x00055dd4) status_small_pane_g4

0xa616,	// (0x00055de2) status_small_pane_g5_ParamLimits

0xa616,	// (0x00055de2) status_small_pane_g5

0xa624,	// (0x00055df0) status_small_pane_g6_ParamLimits

0xa624,	// (0x00055df0) status_small_pane_g6

0x0007,

0xf748,	// (0x0005af14) status_small_pane_g_ParamLimits

0xf748,	// (0x0005af14) status_small_pane_g

0xa63f,	// (0x00055e0b) status_small_pane_t1

0xa661,	// (0x00055e2d) status_small_wait_pane_ParamLimits

0xa661,	// (0x00055e2d) status_small_wait_pane

0xa35f,	// (0x00055b2b) aid_levels_signal_ParamLimits

0xa35f,	// (0x00055b2b) aid_levels_signal

0xa377,	// (0x00055b43) signal_pane_g1_ParamLimits

0xa377,	// (0x00055b43) signal_pane_g1

0xa392,	// (0x00055b5e) signal_pane_g2_ParamLimits

0xa392,	// (0x00055b5e) signal_pane_g2

0x0003,

0xf6d9,	// (0x0005aea5) signal_pane_g_ParamLimits

0xf6d9,	// (0x0005aea5) signal_pane_g

0xc07a,	// (0x00057846) context_pane_g1

0x924b,	// (0x00054a17) title_pane_g1

0x928e,	// (0x00054a5a) title_pane_t1

0x931a,	// (0x00054ae6) title_pane_t2

0x9340,	// (0x00054b0c) title_pane_t3

0x0002,

0xf532,	// (0x0005acfe) title_pane_t

0xb353,	// (0x00056b1f) aid_levels_battery_ParamLimits

0xb353,	// (0x00056b1f) aid_levels_battery

0xb36f,	// (0x00056b3b) battery_pane_g1_ParamLimits

0xb36f,	// (0x00056b3b) battery_pane_g1

0xb38c,	// (0x00056b58) battery_pane_g2_ParamLimits

0xb38c,	// (0x00056b58) battery_pane_g2

0x0001,

0xf77c,	// (0x0005af48) battery_pane_g_ParamLimits

0xf77c,	// (0x0005af48) battery_pane_g

0xc9f5,	// (0x000581c1) uni_indicator_pane_g1

0xca0b,	// (0x000581d7) uni_indicator_pane_g2

0xca21,	// (0x000581ed) uni_indicator_pane_g3

0x0005,

0xf8e6,	// (0x0005b0b2) uni_indicator_pane_g

0xc323,	// (0x00057aef) navi_icon_pane_ParamLimits

0xc323,	// (0x00057aef) navi_icon_pane

0xc26c,	// (0x00057a38) navi_midp_pane

0xc33f,	// (0x00057b0b) navi_navi_pane

0xc349,	// (0x00057b15) navi_text_pane_ParamLimits

0xc349,	// (0x00057b15) navi_text_pane

0x8ec2,	// (0x0005468e) status_small_wait_pane_g1

0x98c0,	// (0x0005508c) status_small_wait_pane_g2

0x0001,

0xf8e1,	// (0x0005b0ad) status_small_wait_pane_g

0xc94e,	// (0x0005811a) navi_navi_icon_text_pane

0x30a6,	// (0x0004e872) navi_navi_pane_g1_ParamLimits

0x30a6,	// (0x0004e872) navi_navi_pane_g1

0x30b8,	// (0x0004e884) navi_navi_pane_g2_ParamLimits

0x30b8,	// (0x0004e884) navi_navi_pane_g2

0x0001,

0xf8af,	// (0x0005b07b) navi_navi_pane_g_ParamLimits

0xf8af,	// (0x0005b07b) navi_navi_pane_g

0x30ca,	// (0x0004e896) navi_navi_tabs_pane

0x30d3,	// (0x0004e89f) navi_navi_text_pane

0xc94e,	// (0x0005811a) navi_navi_volume_pane

0x307a,	// (0x0004e846) navi_text_pane_t1

0x306e,	// (0x0004e83a) navi_icon_pane_g1

0x2fc1,	// (0x0004e78d) navi_navi_text_pane_t1

0xb639,	// (0x00056e05) navi_navi_volume_pane_g1

0x0bc8,	// (0x0004c394) volume_small_pane

0x2f27,	// (0x0004e6f3) navi_navi_icon_text_pane_g1

0xc8a6,	// (0x00058072) navi_navi_icon_text_pane_t1

0xc33f,	// (0x00057b0b) navi_tabs_2_long_pane

0xc33f,	// (0x00057b0b) navi_tabs_2_pane

0xc33f,	// (0x00057b0b) navi_tabs_3_long_pane

0xc33f,	// (0x00057b0b) navi_tabs_3_pane

0xc33f,	// (0x00057b0b) navi_tabs_4_pane

0x0ba0,	// (0x0004c36c) tabs_2_active_pane_ParamLimits

0x0ba0,	// (0x0004c36c) tabs_2_active_pane

0x0bb0,	// (0x0004c37c) tabs_2_passive_pane_ParamLimits

0x0bb0,	// (0x0004c37c) tabs_2_passive_pane

0x0b6e,	// (0x0004c33a) tabs_3_active_pane_ParamLimits

0x0b6e,	// (0x0004c33a) tabs_3_active_pane

0x0b7e,	// (0x0004c34a) tabs_3_passive_pane_ParamLimits

0x0b7e,	// (0x0004c34a) tabs_3_passive_pane

0x0b8f,	// (0x0004c35b) tabs_3_passive_pane_cp_ParamLimits

0x0b8f,	// (0x0004c35b) tabs_3_passive_pane_cp

0x0b2a,	// (0x0004c2f6) tabs_4_active_pane_ParamLimits

0x0b2a,	// (0x0004c2f6) tabs_4_active_pane

0x0b3b,	// (0x0004c307) tabs_4_passive_pane_ParamLimits

0x0b3b,	// (0x0004c307) tabs_4_passive_pane

0x0b4c,	// (0x0004c318) tabs_4_passive_pane_cp_ParamLimits

0x0b4c,	// (0x0004c318) tabs_4_passive_pane_cp

0x0b5d,	// (0x0004c329) tabs_4_passive_pane_cp2_ParamLimits

0x0b5d,	// (0x0004c329) tabs_4_passive_pane_cp2

0x0b06,	// (0x0004c2d2) tabs_2_long_active_pane_ParamLimits

0x0b06,	// (0x0004c2d2) tabs_2_long_active_pane

0x0b18,	// (0x0004c2e4) tabs_2_long_passive_pane_ParamLimits

0x0b18,	// (0x0004c2e4) tabs_2_long_passive_pane

0x0ac1,	// (0x0004c28d) tabs_3_long_active_pane_ParamLimits

0x0ac1,	// (0x0004c28d) tabs_3_long_active_pane

0x0ada,	// (0x0004c2a6) tabs_3_long_passive_pane_ParamLimits

0x0ada,	// (0x0004c2a6) tabs_3_long_passive_pane

0x0aed,	// (0x0004c2b9) tabs_3_long_passive_pane_cp_ParamLimits

0x0aed,	// (0x0004c2b9) tabs_3_long_passive_pane_cp

0x0a67,	// (0x0004c233) volume_small_pane_g1

0x0a70,	// (0x0004c23c) volume_small_pane_g2

0x0a79,	// (0x0004c245) volume_small_pane_g3

0x0a82,	// (0x0004c24e) volume_small_pane_g4

0x0a8b,	// (0x0004c257) volume_small_pane_g5

0x0a94,	// (0x0004c260) volume_small_pane_g6

0x0a9d,	// (0x0004c269) volume_small_pane_g7

0x0aa6,	// (0x0004c272) volume_small_pane_g8

0x0aaf,	// (0x0004c27b) volume_small_pane_g9

0x0ab8,	// (0x0004c284) volume_small_pane_g10

0x0009,

0xf87b,	// (0x0005b047) volume_small_pane_g

0x9352,	// (0x00054b1e) bg_active_tab_pane_cp2_ParamLimits

0x9352,	// (0x00054b1e) bg_active_tab_pane_cp2

0x9360,	// (0x00054b2c) tabs_3_active_pane_g1

0x9368,	// (0x00054b34) tabs_3_active_pane_t1

0x9352,	// (0x00054b1e) bg_passive_tab_pane_cp2_ParamLimits

0x9352,	// (0x00054b1e) bg_passive_tab_pane_cp2

0x9360,	// (0x00054b2c) tabs_3_passive_pane_g1

0x9368,	// (0x00054b34) tabs_3_passive_pane_t1

0x9352,	// (0x00054b1e) bg_active_tab_pane_cp3_ParamLimits

0x9352,	// (0x00054b1e) bg_active_tab_pane_cp3

0x937a,	// (0x00054b46) tabs_4_active_pane_g1

0x9382,	// (0x00054b4e) tabs_4_active_pane_t1

0x9352,	// (0x00054b1e) bg_passive_tab_pane_cp3_ParamLimits

0x9352,	// (0x00054b1e) bg_passive_tab_pane_cp3

0x937a,	// (0x00054b46) tabs_4_1_passive_pane_g1

0x9382,	// (0x00054b4e) tabs_4_1_passive_pane_t1

0x9ec6,	// (0x00055692) list_highlight_pane_cp2

0xcb2f,	// (0x000582fb) list_set_pane_ParamLimits

0xcb2f,	// (0x000582fb) list_set_pane

0xcbc9,	// (0x00058395) main_pane_set_t1_ParamLimits

0xcbc9,	// (0x00058395) main_pane_set_t1

0xcbe9,	// (0x000583b5) main_pane_set_t2_ParamLimits

0xcbe9,	// (0x000583b5) main_pane_set_t2

0xcbfd,	// (0x000583c9) main_pane_set_t3_ParamLimits

0xcbfd,	// (0x000583c9) main_pane_set_t3

0xcc0f,	// (0x000583db) main_pane_set_t4_ParamLimits

0xcc0f,	// (0x000583db) main_pane_set_t4

0x0003,

0xf94b,	// (0x0005b117) main_pane_set_t_ParamLimits

0xf94b,	// (0x0005b117) main_pane_set_t

0xcc21,	// (0x000583ed) setting_code_pane

0xcc2b,	// (0x000583f7) setting_slider_graphic_pane

0xcc2b,	// (0x000583f7) setting_slider_pane

0xcc2b,	// (0x000583f7) setting_text_pane

0xcc2b,	// (0x000583f7) setting_volume_pane

0x9394,	// (0x00054b60) volume_set_pane

0x939c,	// (0x00054b68) bg_set_opt_pane_cp

0x93aa,	// (0x00054b76) setting_slider_pane_t1

0x93c3,	// (0x00054b8f) setting_slider_pane_t2

0x93dd,	// (0x00054ba9) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0005ad05) setting_slider_pane_t

0x93f5,	// (0x00054bc1) slider_set_pane

0x9101,	// (0x000548cd) bg_set_opt_pane_cp2

0x940b,	// (0x00054bd7) setting_slider_graphic_pane_g1

0x9414,	// (0x00054be0) setting_slider_graphic_pane_t1

0x9424,	// (0x00054bf0) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0005ad0c) setting_slider_graphic_pane_t

0x9434,	// (0x00054c00) slider_set_pane_cp

0x9101,	// (0x000548cd) input_focus_pane_cp1

0x359e,	// (0x0004ed6a) list_set_text_pane

0x8ec2,	// (0x0005468e) setting_text_pane_g1

0x9101,	// (0x000548cd) input_focus_pane_cp2

0x8ec2,	// (0x0005468e) setting_code_pane_g1

0x943c,	// (0x00054c08) setting_code_pane_t1

0xe7f6,	// (0x00059fc2) set_text_pane_t1_ParamLimits

0xe7f6,	// (0x00059fc2) set_text_pane_t1

0x9d3a,	// (0x00055506) set_opt_bg_pane_g1

0x9d42,	// (0x0005550e) set_opt_bg_pane_g2

0xcae4,	// (0x000582b0) set_opt_bg_pane_g3

0x9d52,	// (0x0005551e) set_opt_bg_pane_g4

0x9d5a,	// (0x00055526) set_opt_bg_pane_g5

0x9d62,	// (0x0005552e) set_opt_bg_pane_g6

0xcaee,	// (0x000582ba) set_opt_bg_pane_g7

0xcaf6,	// (0x000582c2) set_opt_bg_pane_g8

0xcb00,	// (0x000582cc) set_opt_bg_pane_g9

0x0008,

0xf938,	// (0x0005b104) set_opt_bg_pane_g

0xcad7,	// (0x000582a3) slider_set_pane_g1

0x0c35,	// (0x0004c401) slider_set_pane_g2

0x0006,

0xf929,	// (0x0005b0f5) slider_set_pane_g

0xb641,	// (0x00056e0d) volume_set_pane_g1

0xb649,	// (0x00056e15) volume_set_pane_g2

0xb651,	// (0x00056e1d) volume_set_pane_g3

0xb659,	// (0x00056e25) volume_set_pane_g4

0xb661,	// (0x00056e2d) volume_set_pane_g5

0xb669,	// (0x00056e35) volume_set_pane_g6

0xb671,	// (0x00056e3d) volume_set_pane_g7

0xb679,	// (0x00056e45) volume_set_pane_g8

0xb681,	// (0x00056e4d) volume_set_pane_g9

0xb689,	// (0x00056e55) volume_set_pane_g10

0x0009,

0xf901,	// (0x0005b0cd) volume_set_pane_g

0x944a,	// (0x00054c16) indicator_pane_ParamLimits

0x944a,	// (0x00054c16) indicator_pane

0x9472,	// (0x00054c3e) main_idle_pane_g2_ParamLimits

0x9472,	// (0x00054c3e) main_idle_pane_g2

0x94aa,	// (0x00054c76) main_pane_idle_g1_ParamLimits

0x94aa,	// (0x00054c76) main_pane_idle_g1

0x94d1,	// (0x00054c9d) popup_clock_digital_analogue_window_ParamLimits

0x94d1,	// (0x00054c9d) popup_clock_digital_analogue_window

0x94e8,	// (0x00054cb4) soft_indicator_pane_ParamLimits

0x94e8,	// (0x00054cb4) soft_indicator_pane

0x950c,	// (0x00054cd8) wallpaper_pane_ParamLimits

0x950c,	// (0x00054cd8) wallpaper_pane

0x8ec2,	// (0x0005468e) wallpaper_pane_g1

0x9526,	// (0x00054cf2) indicator_pane_g1_ParamLimits

0x9526,	// (0x00054cf2) indicator_pane_g1

0x3953,	// (0x0004f11f) navi_navi_icon_text_pane_srt_g1

0x954b,	// (0x00054d17) soft_indicator_pane_t1

0x9565,	// (0x00054d31) aid_ps_area_pane

0x9576,	// (0x00054d42) aid_ps_clock_pane

0x9584,	// (0x00054d50) aid_ps_indicator_pane

0x9590,	// (0x00054d5c) indicator_ps_pane_ParamLimits

0x9590,	// (0x00054d5c) indicator_ps_pane

0x959f,	// (0x00054d6b) power_save_pane_g1_ParamLimits

0x959f,	// (0x00054d6b) power_save_pane_g1

0x95ab,	// (0x00054d77) power_save_pane_g2_ParamLimits

0x95ab,	// (0x00054d77) power_save_pane_g2

0xe7b6,	// (0x00059f82) aid_navinavi_width_pane

0x9565,	// (0x00054d31) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0005ad11) power_save_pane_g_ParamLimits

0xf545,	// (0x0005ad11) power_save_pane_g

0x95b9,	// (0x00054d85) power_save_pane_t1_ParamLimits

0x95b9,	// (0x00054d85) power_save_pane_t1

0x9576,	// (0x00054d42) aid_ps_clock_pane_ParamLimits

0x9584,	// (0x00054d50) aid_ps_indicator_pane_ParamLimits

0x95cb,	// (0x00054d97) power_save_pane_t4_ParamLimits

0x95cb,	// (0x00054d97) power_save_pane_t4

0x0001,

0xf54a,	// (0x0005ad16) power_save_pane_t_ParamLimits

0xf54a,	// (0x0005ad16) power_save_pane_t

0x95f5,	// (0x00054dc1) power_save_t3_ParamLimits

0x95f5,	// (0x00054dc1) power_save_t3

0x95e0,	// (0x00054dac) power_save_t2_ParamLimits

0x95e0,	// (0x00054dac) power_save_t2

0x960a,	// (0x00054dd6) indicator_ps_pane_g1

0x9613,	// (0x00054ddf) ai_gene_pane_ParamLimits

0x9613,	// (0x00054ddf) ai_gene_pane

0x962a,	// (0x00054df6) ai_links_pane_ParamLimits

0x962a,	// (0x00054df6) ai_links_pane

0x9642,	// (0x00054e0e) indicator_pane_cp1_ParamLimits

0x9642,	// (0x00054e0e) indicator_pane_cp1

0x9651,	// (0x00054e1d) main_pane_idle_g1_cp_ParamLimits

0x9651,	// (0x00054e1d) main_pane_idle_g1_cp

0x9669,	// (0x00054e35) popup_ai_links_title_window

0x9672,	// (0x00054e3e) soft_indicator_pane_cp1_ParamLimits

0x9672,	// (0x00054e3e) soft_indicator_pane_cp1

0x3365,	// (0x0004eb31) ai_links_pane_g1

0x336e,	// (0x0004eb3a) grid_ai_links_pane

0xc9ec,	// (0x000581b8) ai_gene_pane_1

0x3353,	// (0x0004eb1f) ai_gene_pane_2

0x335c,	// (0x0004eb28) list_highlight_pane_cp4

0xc9c8,	// (0x00058194) cell_ai_link_pane_ParamLimits

0xc9c8,	// (0x00058194) cell_ai_link_pane

0x3324,	// (0x0004eaf0) cell_ai_link_pane_g1

0x98c0,	// (0x0005508c) cell_ai_link_pane_g2

0x0001,

0xf8dc,	// (0x0005b0a8) cell_ai_link_pane_g

0x9101,	// (0x000548cd) grid_highlight_cp2

0x9101,	// (0x000548cd) bg_popup_sub_pane_cp1

0x9694,	// (0x00054e60) popup_ai_links_title_window_t1

0x3274,	// (0x0004ea40) ai_gene_pane_1_g1_ParamLimits

0x3274,	// (0x0004ea40) ai_gene_pane_1_g1

0x3280,	// (0x0004ea4c) ai_gene_pane_1_g2_ParamLimits

0x3280,	// (0x0004ea4c) ai_gene_pane_1_g2

0x0001,

0xf8d2,	// (0x0005b09e) ai_gene_pane_1_g_ParamLimits

0xf8d2,	// (0x0005b09e) ai_gene_pane_1_g

0x328d,	// (0x0004ea59) ai_gene_pane_1_t1_ParamLimits

0x328d,	// (0x0004ea59) ai_gene_pane_1_t1

0x32c1,	// (0x0004ea8d) grid_ai_soft_ind_pane

0x325f,	// (0x0004ea2b) ai_gene_pane_2_t1_ParamLimits

0x325f,	// (0x0004ea2b) ai_gene_pane_2_t1

0x96a3,	// (0x00054e6f) main_pane_empty_t1_ParamLimits

0x96a3,	// (0x00054e6f) main_pane_empty_t1

0x96bb,	// (0x00054e87) main_pane_empty_t2_ParamLimits

0x96bb,	// (0x00054e87) main_pane_empty_t2

0x96d0,	// (0x00054e9c) main_pane_empty_t3_ParamLimits

0x96d0,	// (0x00054e9c) main_pane_empty_t3

0x96e2,	// (0x00054eae) main_pane_empty_t4_ParamLimits

0x96e2,	// (0x00054eae) main_pane_empty_t4

0x96f4,	// (0x00054ec0) main_pane_empty_t5_ParamLimits

0x96f4,	// (0x00054ec0) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0005ad1b) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0005ad1b) main_pane_empty_t

0x9dfd,	// (0x000555c9) bg_popup_window_pane_ParamLimits

0x9dfd,	// (0x000555c9) bg_popup_window_pane

0xc942,	// (0x0005810e) find_popup_pane_cp2_ParamLimits

0xc942,	// (0x0005810e) find_popup_pane_cp2

0x2fdb,	// (0x0004e7a7) heading_pane_ParamLimits

0x2fdb,	// (0x0004e7a7) heading_pane

0x9101,	// (0x000548cd) bg_popup_sub_pane

0xc8c3,	// (0x0005808f) bg_popup_window_pane_g1_ParamLimits

0xc8c3,	// (0x0005808f) bg_popup_window_pane_g1

0xc8d2,	// (0x0005809e) bg_popup_window_pane_g2_ParamLimits

0xc8d2,	// (0x0005809e) bg_popup_window_pane_g2

0xc8de,	// (0x000580aa) bg_popup_window_pane_g3_ParamLimits

0xc8de,	// (0x000580aa) bg_popup_window_pane_g3

0xc8ea,	// (0x000580b6) bg_popup_window_pane_g4_ParamLimits

0xc8ea,	// (0x000580b6) bg_popup_window_pane_g4

0xc8f9,	// (0x000580c5) bg_popup_window_pane_g5_ParamLimits

0xc8f9,	// (0x000580c5) bg_popup_window_pane_g5

0xc909,	// (0x000580d5) bg_popup_window_pane_g6_ParamLimits

0xc909,	// (0x000580d5) bg_popup_window_pane_g6

0xc915,	// (0x000580e1) bg_popup_window_pane_g7_ParamLimits

0xc915,	// (0x000580e1) bg_popup_window_pane_g7

0xc924,	// (0x000580f0) bg_popup_window_pane_g8_ParamLimits

0xc924,	// (0x000580f0) bg_popup_window_pane_g8

0xc933,	// (0x000580ff) bg_popup_window_pane_g9_ParamLimits

0xc933,	// (0x000580ff) bg_popup_window_pane_g9

0x2fb5,	// (0x0004e781) bg_popup_window_pane_g10_ParamLimits

0x2fb5,	// (0x0004e781) bg_popup_window_pane_g10

0x0009,

0xf89a,	// (0x0005b066) bg_popup_window_pane_g_ParamLimits

0xf89a,	// (0x0005b066) bg_popup_window_pane_g

0x2ede,	// (0x0004e6aa) bg_popup_heading_pane_ParamLimits

0x2ede,	// (0x0004e6aa) bg_popup_heading_pane

0x0d68,	// (0x0004c534) tabs_4_passive_pane_cp_srt_ParamLimits

0x0d68,	// (0x0004c534) tabs_4_passive_pane_cp_srt

0x0d7a,	// (0x0004c546) tabs_4_passive_pane_srt_ParamLimits

0x2ef2,	// (0x0004e6be) heading_pane_g2

0x0d7a,	// (0x0004c546) tabs_4_passive_pane_srt

0x2268,	// (0x0004da34) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2268,	// (0x0004da34) bg_passive_tab_pane_cp3_srt

0x2efa,	// (0x0004e6c6) heading_pane_t1_ParamLimits

0x2efa,	// (0x0004e6c6) heading_pane_t1

0x2f11,	// (0x0004e6dd) heading_pane_t2_ParamLimits

0x2f11,	// (0x0004e6dd) heading_pane_t2

0x0001,

0xf895,	// (0x0005b061) heading_pane_t_ParamLimits

0xf895,	// (0x0005b061) heading_pane_t

0x2a1b,	// (0x0004e1e7) bg_popup_heading_pane_g1

0x2aca,	// (0x0004e296) bg_popup_heading_pane_g2

0x2ad4,	// (0x0004e2a0) bg_popup_heading_pane_g3

0x2ade,	// (0x0004e2aa) bg_popup_heading_pane_g4

0x2ae8,	// (0x0004e2b4) bg_popup_heading_pane_g5

0x2af2,	// (0x0004e2be) bg_popup_heading_pane_g6

0x2afa,	// (0x0004e2c6) bg_popup_heading_pane_g7

0x2b02,	// (0x0004e2ce) bg_popup_heading_pane_g8

0x2b0c,	// (0x0004e2d8) bg_popup_heading_pane_g9

0x0008,

0xf851,	// (0x0005b01d) bg_popup_heading_pane_g

0x21dc,	// (0x0004d9a8) bg_popup_sub_pane_g1

0x21e4,	// (0x0004d9b0) bg_popup_sub_pane_g2

0x21ec,	// (0x0004d9b8) bg_popup_sub_pane_g3

0x21f4,	// (0x0004d9c0) bg_popup_sub_pane_g4

0x21fc,	// (0x0004d9c8) bg_popup_sub_pane_g5

0x2204,	// (0x0004d9d0) bg_popup_sub_pane_g6

0x220c,	// (0x0004d9d8) bg_popup_sub_pane_g7

0x2214,	// (0x0004d9e0) bg_popup_sub_pane_g8

0x221c,	// (0x0004d9e8) bg_popup_sub_pane_g9

0x0008,

0xf82b,	// (0x0005aff7) bg_popup_sub_pane_g

0x9352,	// (0x00054b1e) bg_popup_window_pane_cp5_ParamLimits

0x9352,	// (0x00054b1e) bg_popup_window_pane_cp5

0x9714,	// (0x00054ee0) popup_note_window_g1_ParamLimits

0x9714,	// (0x00054ee0) popup_note_window_g1

0x9720,	// (0x00054eec) popup_note_window_t1_ParamLimits

0x9720,	// (0x00054eec) popup_note_window_t1

0x9736,	// (0x00054f02) popup_note_window_t2_ParamLimits

0x9736,	// (0x00054f02) popup_note_window_t2

0x974c,	// (0x00054f18) popup_note_window_t3_ParamLimits

0x974c,	// (0x00054f18) popup_note_window_t3

0x9762,	// (0x00054f2e) popup_note_window_t4_ParamLimits

0x9762,	// (0x00054f2e) popup_note_window_t4

0x978a,	// (0x00054f56) popup_note_window_t5_ParamLimits

0x978a,	// (0x00054f56) popup_note_window_t5

0x0004,

0xf55a,	// (0x0005ad26) popup_note_window_t_ParamLimits

0xf55a,	// (0x0005ad26) popup_note_window_t

0x97d4,	// (0x00054fa0) bg_popup_window_pane_cp6_ParamLimits

0x97d4,	// (0x00054fa0) bg_popup_window_pane_cp6

0x2997,	// (0x0004e163) popup_note_image_window_g1_ParamLimits

0x2997,	// (0x0004e163) popup_note_image_window_g1

0xc768,	// (0x00057f34) popup_note_image_window_g2_ParamLimits

0xc768,	// (0x00057f34) popup_note_image_window_g2

0x0001,

0xf81f,	// (0x0005afeb) popup_note_image_window_g_ParamLimits

0xf81f,	// (0x0005afeb) popup_note_image_window_g

0x29bc,	// (0x0004e188) popup_note_image_window_t1_ParamLimits

0x29bc,	// (0x0004e188) popup_note_image_window_t1

0x29d5,	// (0x0004e1a1) popup_note_image_window_t2_ParamLimits

0x29d5,	// (0x0004e1a1) popup_note_image_window_t2

0x29ee,	// (0x0004e1ba) popup_note_image_window_t3_ParamLimits

0x29ee,	// (0x0004e1ba) popup_note_image_window_t3

0x0002,

0xf824,	// (0x0005aff0) popup_note_image_window_t_ParamLimits

0xf824,	// (0x0005aff0) popup_note_image_window_t

0x2860,	// (0x0004e02c) bg_popup_window_pane_cp7_ParamLimits

0x2860,	// (0x0004e02c) bg_popup_window_pane_cp7

0x2890,	// (0x0004e05c) popup_note_wait_window_g1_ParamLimits

0x2890,	// (0x0004e05c) popup_note_wait_window_g1

0x289c,	// (0x0004e068) popup_note_wait_window_g2_ParamLimits

0x289c,	// (0x0004e068) popup_note_wait_window_g2

0x0002,

0xf80d,	// (0x0005afd9) popup_note_wait_window_g_ParamLimits

0xf80d,	// (0x0005afd9) popup_note_wait_window_g

0x28b4,	// (0x0004e080) popup_note_wait_window_t1_ParamLimits

0x28b4,	// (0x0004e080) popup_note_wait_window_t1

0xc709,	// (0x00057ed5) popup_note_wait_window_t2_ParamLimits

0xc709,	// (0x00057ed5) popup_note_wait_window_t2

0xc726,	// (0x00057ef2) popup_note_wait_window_t3_ParamLimits

0xc726,	// (0x00057ef2) popup_note_wait_window_t3

0xc739,	// (0x00057f05) popup_note_wait_window_t4_ParamLimits

0xc739,	// (0x00057f05) popup_note_wait_window_t4

0x0004,

0xf814,	// (0x0005afe0) popup_note_wait_window_t_ParamLimits

0xf814,	// (0x0005afe0) popup_note_wait_window_t

0x2930,	// (0x0004e0fc) wait_bar_pane_ParamLimits

0x2930,	// (0x0004e0fc) wait_bar_pane

0x9101,	// (0x000548cd) wait_anim_pane

0x9101,	// (0x000548cd) wait_border_pane

0x8ec2,	// (0x0005468e) wait_anim_pane_g1

0x8ec2,	// (0x0005468e) wait_anim_pane_g2

0x0001,

0xf6d4,	// (0x0005aea0) wait_anim_pane_g

0x280c,	// (0x0004dfd8) wait_border_pane_g1

0x2817,	// (0x0004dfe3) wait_border_pane_g2

0x2820,	// (0x0004dfec) wait_border_pane_g3

0x0002,

0xf806,	// (0x0005afd2) wait_border_pane_g

0x2677,	// (0x0004de43) bg_popup_window_pane_cp16_ParamLimits

0x2677,	// (0x0004de43) bg_popup_window_pane_cp16

0xc6b9,	// (0x00057e85) indicator_popup_pane_cp4_ParamLimits

0xc6b9,	// (0x00057e85) indicator_popup_pane_cp4

0x278b,	// (0x0004df57) popup_query_data_window_t1_ParamLimits

0x278b,	// (0x0004df57) popup_query_data_window_t1

0x279d,	// (0x0004df69) popup_query_data_window_t2_ParamLimits

0x279d,	// (0x0004df69) popup_query_data_window_t2

0x27b6,	// (0x0004df82) popup_query_data_window_t3_ParamLimits

0x27b6,	// (0x0004df82) popup_query_data_window_t3

0x0002,

0xf7ff,	// (0x0005afcb) popup_query_data_window_t_ParamLimits

0xf7ff,	// (0x0005afcb) popup_query_data_window_t

0xc6cd,	// (0x00057e99) query_popup_data_pane_ParamLimits

0xc6cd,	// (0x00057e99) query_popup_data_pane

0xc6e1,	// (0x00057ead) query_popup_data_pane_cp1_ParamLimits

0xc6e1,	// (0x00057ead) query_popup_data_pane_cp1

0x2677,	// (0x0004de43) bg_popup_window_pane_cp10_ParamLimits

0x2677,	// (0x0004de43) bg_popup_window_pane_cp10

0xc634,	// (0x00057e00) indicator_popup_pane_ParamLimits

0xc634,	// (0x00057e00) indicator_popup_pane

0xc656,	// (0x00057e22) popup_query_code_window_t1_ParamLimits

0xc656,	// (0x00057e22) popup_query_code_window_t1

0xc670,	// (0x00057e3c) popup_query_code_window_t2_ParamLimits

0xc670,	// (0x00057e3c) popup_query_code_window_t2

0x272e,	// (0x0004defa) popup_query_code_window_t3_ParamLimits

0x272e,	// (0x0004defa) popup_query_code_window_t3

0x0002,

0xf7f8,	// (0x0005afc4) popup_query_code_window_t_ParamLimits

0xf7f8,	// (0x0005afc4) popup_query_code_window_t

0x275d,	// (0x0004df29) query_popup_pane_ParamLimits

0x275d,	// (0x0004df29) query_popup_pane

0x97d4,	// (0x00054fa0) bg_popup_window_pane_cp15_ParamLimits

0x97d4,	// (0x00054fa0) bg_popup_window_pane_cp15

0x97f2,	// (0x00054fbe) indicator_popup_pane_cp1_ParamLimits

0x97f2,	// (0x00054fbe) indicator_popup_pane_cp1

0x9805,	// (0x00054fd1) indicator_popup_pane_cp2_ParamLimits

0x9805,	// (0x00054fd1) indicator_popup_pane_cp2

0x9818,	// (0x00054fe4) popup_query_data_code_window_g1_ParamLimits

0x9818,	// (0x00054fe4) popup_query_data_code_window_g1

0x982b,	// (0x00054ff7) popup_query_data_code_window_t1_ParamLimits

0x982b,	// (0x00054ff7) popup_query_data_code_window_t1

0x983d,	// (0x00055009) popup_query_data_code_window_t2_ParamLimits

0x983d,	// (0x00055009) popup_query_data_code_window_t2

0x984f,	// (0x0005501b) popup_query_data_code_window_t3_ParamLimits

0x984f,	// (0x0005501b) popup_query_data_code_window_t3

0x9865,	// (0x00055031) popup_query_data_code_window_t4_ParamLimits

0x9865,	// (0x00055031) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0005ad31) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0005ad31) popup_query_data_code_window_t

0xc2e1,	// (0x00057aad) list_single_midp_graphic_pane_g3

0x987d,	// (0x00055049) query_popup_data_pane_cp2_ParamLimits

0x9890,	// (0x0005505c) query_popup_pane_cp2_ParamLimits

0x9890,	// (0x0005505c) query_popup_pane_cp2

0x9101,	// (0x000548cd) bg_popup_window_pane_cp11

0x265b,	// (0x0004de27) heading_pane_cp5

0x2663,	// (0x0004de2f) listscroll_popup_info_pane

0x9101,	// (0x000548cd) input_focus_pane_cp3

0x98a3,	// (0x0005506f) query_popup_pane_t1

0x98b1,	// (0x0005507d) list_popup_info_pane_ParamLimits

0x98b1,	// (0x0005507d) list_popup_info_pane

0x98c0,	// (0x0005508c) listscroll_popup_info_pane_g1

0x98c8,	// (0x00055094) scroll_pane_cp7

0x98d2,	// (0x0005509e) popup_info_list_pane_t1_ParamLimits

0x98d2,	// (0x0005509e) popup_info_list_pane_t1

0x98ec,	// (0x000550b8) popup_info_list_pane_t2_ParamLimits

0x98ec,	// (0x000550b8) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0005ad3a) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0005ad3a) popup_info_list_pane_t

0x9101,	// (0x000548cd) bg_popup_window_pane_cp12

0xcdd0,	// (0x0005859c) find_popup_pane

0x939c,	// (0x00054b68) bg_popup_window_pane_cp3

0x9906,	// (0x000550d2) heading_pane_cp3

0x9915,	// (0x000550e1) listscroll_popup_graphic_pane

0x9101,	// (0x000548cd) bg_popup_window_pane_cp4

0x9975,	// (0x00055141) heading_pane_cp4

0x997f,	// (0x0005514b) listscroll_popup_colour_pane

0x9987,	// (0x00055153) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9987,	// (0x00055153) cell_large_graphic_colour_none_popup_pane

0x999b,	// (0x00055167) grid_large_graphic_colour_popup_pane_ParamLimits

0x999b,	// (0x00055167) grid_large_graphic_colour_popup_pane

0x99bf,	// (0x0005518b) listscroll_popup_colour_pane_g1_ParamLimits

0x99bf,	// (0x0005518b) listscroll_popup_colour_pane_g1

0x99d6,	// (0x000551a2) listscroll_popup_colour_pane_g2_ParamLimits

0x99d6,	// (0x000551a2) listscroll_popup_colour_pane_g2

0x99ea,	// (0x000551b6) listscroll_popup_colour_pane_g3_ParamLimits

0x99ea,	// (0x000551b6) listscroll_popup_colour_pane_g3

0x99fa,	// (0x000551c6) listscroll_popup_colour_pane_g4_ParamLimits

0x99fa,	// (0x000551c6) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0005ad3f) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0005ad3f) listscroll_popup_colour_pane_g

0x9a0a,	// (0x000551d6) scroll_pane_cp6_ParamLimits

0x9a0a,	// (0x000551d6) scroll_pane_cp6

0x9a1c,	// (0x000551e8) cell_large_graphic_colour_popup_pane_ParamLimits

0x9a1c,	// (0x000551e8) cell_large_graphic_colour_popup_pane

0x9a3b,	// (0x00055207) cell_large_graphic_colour_none_popup_pane_t1

0x9101,	// (0x000548cd) grid_highlight_pane_cp5

0x9a4a,	// (0x00055216) cell_large_graphic_colour_popup_pane_g1

0x9a52,	// (0x0005521e) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0005ad48) cell_large_graphic_colour_popup_pane_g

0x9a5a,	// (0x00055226) cell_large_graphic_colour_popup_pane_g2_copy1

0x9a63,	// (0x0005522f) grid_highlight_pane_cp4

0x9a6b,	// (0x00055237) bg_popup_window_pane_cp8_ParamLimits

0x9a6b,	// (0x00055237) bg_popup_window_pane_cp8

0x9a86,	// (0x00055252) popup_snote_single_text_window_g1_ParamLimits

0x9a86,	// (0x00055252) popup_snote_single_text_window_g1

0x9a98,	// (0x00055264) popup_snote_single_text_window_t1_ParamLimits

0x9a98,	// (0x00055264) popup_snote_single_text_window_t1

0x9aab,	// (0x00055277) popup_snote_single_text_window_t2_ParamLimits

0x9aab,	// (0x00055277) popup_snote_single_text_window_t2

0x9abe,	// (0x0005528a) popup_snote_single_text_window_t3_ParamLimits

0x9abe,	// (0x0005528a) popup_snote_single_text_window_t3

0x9af7,	// (0x000552c3) popup_snote_single_text_window_t4_ParamLimits

0x9af7,	// (0x000552c3) popup_snote_single_text_window_t4

0x9b2b,	// (0x000552f7) popup_snote_single_text_window_t5_ParamLimits

0x9b2b,	// (0x000552f7) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0005ad4d) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0005ad4d) popup_snote_single_text_window_t

0x9b5a,	// (0x00055326) bg_popup_window_pane_cp9_ParamLimits

0x9b5a,	// (0x00055326) bg_popup_window_pane_cp9

0x9a86,	// (0x00055252) popup_snote_single_graphic_window_g1_ParamLimits

0x9a86,	// (0x00055252) popup_snote_single_graphic_window_g1

0x9b68,	// (0x00055334) popup_snote_single_graphic_window_g2_ParamLimits

0x9b68,	// (0x00055334) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0005ad58) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0005ad58) popup_snote_single_graphic_window_g

0x9b74,	// (0x00055340) popup_snote_single_graphic_window_t1_ParamLimits

0x9b74,	// (0x00055340) popup_snote_single_graphic_window_t1

0x9b87,	// (0x00055353) popup_snote_single_graphic_window_t2_ParamLimits

0x9b87,	// (0x00055353) popup_snote_single_graphic_window_t2

0x9abe,	// (0x0005528a) popup_snote_single_graphic_window_t3_ParamLimits

0x9abe,	// (0x0005528a) popup_snote_single_graphic_window_t3

0x9af7,	// (0x000552c3) popup_snote_single_graphic_window_t4_ParamLimits

0x9af7,	// (0x000552c3) popup_snote_single_graphic_window_t4

0x9b9a,	// (0x00055366) popup_snote_single_graphic_window_t5_ParamLimits

0x9b9a,	// (0x00055366) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0005ad5d) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0005ad5d) popup_snote_single_graphic_window_t

0x38af,	// (0x0004f07b) grid_graphic_popup_pane_ParamLimits

0x38af,	// (0x0004f07b) grid_graphic_popup_pane

0x38d9,	// (0x0004f0a5) listscroll_popup_graphic_pane_g1_ParamLimits

0x38d9,	// (0x0004f0a5) listscroll_popup_graphic_pane_g1

0xcd6e,	// (0x0005853a) listscroll_popup_graphic_pane_g2_ParamLimits

0xcd6e,	// (0x0005853a) listscroll_popup_graphic_pane_g2

0x0001,

0xf975,	// (0x0005b141) listscroll_popup_graphic_pane_g_ParamLimits

0xf975,	// (0x0005b141) listscroll_popup_graphic_pane_g

0x3901,	// (0x0004f0cd) scroll_pane_cp5

0xcd2d,	// (0x000584f9) cell_graphic_popup_pane_ParamLimits

0xcd2d,	// (0x000584f9) cell_graphic_popup_pane

0x3826,	// (0x0004eff2) cell_graphic_popup_pane_g1

0x382e,	// (0x0004effa) cell_graphic_popup_pane_g2

0x9a5a,	// (0x00055226) cell_graphic_popup_pane_g3

0x0002,

0xf96e,	// (0x0005b13a) cell_graphic_popup_pane_g

0x3837,	// (0x0004f003) cell_graphic_popup_pane_t2

0x9a63,	// (0x0005522f) grid_highlight_pane_cp3

0x9bdb,	// (0x000553a7) list_gen_pane_ParamLimits

0x9bdb,	// (0x000553a7) list_gen_pane

0x9c0d,	// (0x000553d9) scroll_pane

0xcc97,	// (0x00058463) bg_list_pane_g1_ParamLimits

0xcc97,	// (0x00058463) bg_list_pane_g1

0xccb2,	// (0x0005847e) bg_list_pane_g2_ParamLimits

0xccb2,	// (0x0005847e) bg_list_pane_g2

0xccc5,	// (0x00058491) bg_list_pane_g3_ParamLimits

0xccc5,	// (0x00058491) bg_list_pane_g3

0xccd7,	// (0x000584a3) bg_list_pane_g4_ParamLimits

0xccd7,	// (0x000584a3) bg_list_pane_g4

0xcce9,	// (0x000584b5) bg_list_pane_g5_ParamLimits

0xcce9,	// (0x000584b5) bg_list_pane_g5

0x0004,

0xf963,	// (0x0005b12f) bg_list_pane_g_ParamLimits

0xf963,	// (0x0005b12f) bg_list_pane_g

0xb6fd,	// (0x00056ec9) list_double2_graphic_large_graphic_pane_ParamLimits

0xb6fd,	// (0x00056ec9) list_double2_graphic_large_graphic_pane

0xb6fd,	// (0x00056ec9) list_double2_graphic_pane_ParamLimits

0xb6fd,	// (0x00056ec9) list_double2_graphic_pane

0xb6fd,	// (0x00056ec9) list_double2_large_graphic_pane_ParamLimits

0xb6fd,	// (0x00056ec9) list_double2_large_graphic_pane

0xb6fd,	// (0x00056ec9) list_double2_pane_ParamLimits

0xb6fd,	// (0x00056ec9) list_double2_pane

0xb6fd,	// (0x00056ec9) list_double_graphic_heading_pane_ParamLimits

0xb6fd,	// (0x00056ec9) list_double_graphic_heading_pane

0xb6fd,	// (0x00056ec9) list_double_graphic_pane_ParamLimits

0xb6fd,	// (0x00056ec9) list_double_graphic_pane

0xb6fd,	// (0x00056ec9) list_double_heading_pane_ParamLimits

0xb6fd,	// (0x00056ec9) list_double_heading_pane

0xb6fd,	// (0x00056ec9) list_double_large_graphic_pane_ParamLimits

0xb6fd,	// (0x00056ec9) list_double_large_graphic_pane

0xb6fd,	// (0x00056ec9) list_double_number_pane_ParamLimits

0xb6fd,	// (0x00056ec9) list_double_number_pane

0xb6fd,	// (0x00056ec9) list_double_pane_ParamLimits

0xb6fd,	// (0x00056ec9) list_double_pane

0xb6fd,	// (0x00056ec9) list_double_time_pane_ParamLimits

0xb6fd,	// (0x00056ec9) list_double_time_pane

0xb6fd,	// (0x00056ec9) list_setting_number_pane_ParamLimits

0xb6fd,	// (0x00056ec9) list_setting_number_pane

0xb6fd,	// (0x00056ec9) list_setting_pane_ParamLimits

0xb6fd,	// (0x00056ec9) list_setting_pane

0x9e68,	// (0x00055634) list_single_2graphic_pane_ParamLimits

0x9e68,	// (0x00055634) list_single_2graphic_pane

0x9e68,	// (0x00055634) list_single_graphic_heading_pane_ParamLimits

0x9e68,	// (0x00055634) list_single_graphic_heading_pane

0x9e68,	// (0x00055634) list_single_graphic_pane_ParamLimits

0x9e68,	// (0x00055634) list_single_graphic_pane

0x9e68,	// (0x00055634) list_single_heading_pane_ParamLimits

0x9e68,	// (0x00055634) list_single_heading_pane

0xcc84,	// (0x00058450) list_single_large_graphic_pane_ParamLimits

0xcc84,	// (0x00058450) list_single_large_graphic_pane

0x9e68,	// (0x00055634) list_single_number_heading_pane_ParamLimits

0x9e68,	// (0x00055634) list_single_number_heading_pane

0x9e68,	// (0x00055634) list_single_number_pane_ParamLimits

0x9e68,	// (0x00055634) list_single_number_pane

0x9e68,	// (0x00055634) list_single_pane_ParamLimits

0x9e68,	// (0x00055634) list_single_pane

0x9101,	// (0x000548cd) list_highlight_pane_cp1

0xbfb8,	// (0x00057784) list_single_pane_g1_ParamLimits

0xbfb8,	// (0x00057784) list_single_pane_g1

0x095b,	// (0x0004c127) list_single_pane_g2_ParamLimits

0x095b,	// (0x0004c127) list_single_pane_g2

0x0001,

0xf5ad,	// (0x0005ad79) list_single_pane_g_ParamLimits

0xf5ad,	// (0x0005ad79) list_single_pane_g

0x8cf1,	// (0x000544bd) list_single_pane_t1_ParamLimits

0x8cf1,	// (0x000544bd) list_single_pane_t1

0xbfb8,	// (0x00057784) list_single_number_pane_g1_ParamLimits

0xbfb8,	// (0x00057784) list_single_number_pane_g1

0x095b,	// (0x0004c127) list_single_number_pane_g2_ParamLimits

0x095b,	// (0x0004c127) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x0005ad79) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x0005ad79) list_single_number_pane_g

0xe81b,	// (0x00059fe7) list_single_number_pane_t1_ParamLimits

0xe81b,	// (0x00059fe7) list_single_number_pane_t1

0x8cb1,	// (0x0005447d) list_single_number_pane_t2_ParamLimits

0x8cb1,	// (0x0005447d) list_single_number_pane_t2

0x0001,

0xf924,	// (0x0005b0f0) list_single_number_pane_t_ParamLimits

0xf924,	// (0x0005b0f0) list_single_number_pane_t

0xe80f,	// (0x00059fdb) list_single_graphic_pane_g1_ParamLimits

0xe80f,	// (0x00059fdb) list_single_graphic_pane_g1

0xbfb8,	// (0x00057784) list_single_graphic_pane_g2_ParamLimits

0xbfb8,	// (0x00057784) list_single_graphic_pane_g2

0x095b,	// (0x0004c127) list_single_graphic_pane_g3_ParamLimits

0x095b,	// (0x0004c127) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0005ad68) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0005ad68) list_single_graphic_pane_g

0xe81b,	// (0x00059fe7) list_single_graphic_pane_t1_ParamLimits

0xe81b,	// (0x00059fe7) list_single_graphic_pane_t1

0x86a5,	// (0x00053e71) list_single_heading_pane_g1_ParamLimits

0x86a5,	// (0x00053e71) list_single_heading_pane_g1

0x095b,	// (0x0004c127) list_single_heading_pane_g2_ParamLimits

0x095b,	// (0x0004c127) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0005ad6f) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0005ad6f) list_single_heading_pane_g

0x86b8,	// (0x00053e84) list_single_heading_pane_t1_ParamLimits

0x86b8,	// (0x00053e84) list_single_heading_pane_t1

0x9c41,	// (0x0005540d) list_single_heading_pane_t2_ParamLimits

0x9c41,	// (0x0005540d) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0005ad74) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0005ad74) list_single_heading_pane_t

0xbfb8,	// (0x00057784) list_single_number_heading_pane_g1_ParamLimits

0xbfb8,	// (0x00057784) list_single_number_heading_pane_g1

0x095b,	// (0x0004c127) list_single_number_heading_pane_g2_ParamLimits

0x095b,	// (0x0004c127) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x0005ad79) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x0005ad79) list_single_number_heading_pane_g

0xe831,	// (0x00059ffd) list_single_number_heading_pane_t1_ParamLimits

0xe831,	// (0x00059ffd) list_single_number_heading_pane_t1

0x86ce,	// (0x00053e9a) list_single_number_heading_pane_t2_ParamLimits

0x86ce,	// (0x00053e9a) list_single_number_heading_pane_t2

0x86e0,	// (0x00053eac) list_single_number_heading_pane_t3_ParamLimits

0x86e0,	// (0x00053eac) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x0005ad7e) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x0005ad7e) list_single_number_heading_pane_t

0x86f2,	// (0x00053ebe) list_single_graphic_heading_pane_g1_ParamLimits

0x86f2,	// (0x00053ebe) list_single_graphic_heading_pane_g1

0x9c53,	// (0x0005541f) list_single_graphic_heading_pane_g4_ParamLimits

0x9c53,	// (0x0005541f) list_single_graphic_heading_pane_g4

0x095b,	// (0x0004c127) list_single_graphic_heading_pane_g5_ParamLimits

0x095b,	// (0x0004c127) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x0005ad85) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x0005ad85) list_single_graphic_heading_pane_g

0xe831,	// (0x00059ffd) list_single_graphic_heading_pane_t1_ParamLimits

0xe831,	// (0x00059ffd) list_single_graphic_heading_pane_t1

0x86fe,	// (0x00053eca) list_single_graphic_heading_pane_t2_ParamLimits

0x86fe,	// (0x00053eca) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x0005ad8c) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x0005ad8c) list_single_graphic_heading_pane_t

0x0e5e,	// (0x0004c62a) list_single_large_graphic_pane_g1_ParamLimits

0x0e5e,	// (0x0004c62a) list_single_large_graphic_pane_g1

0xf0ba,	// (0x0005a886) list_single_large_graphic_pane_g2_ParamLimits

0xf0ba,	// (0x0005a886) list_single_large_graphic_pane_g2

0xf0c6,	// (0x0005a892) list_single_large_graphic_pane_g3_ParamLimits

0xf0c6,	// (0x0005a892) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x0005ad91) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x0005ad91) list_single_large_graphic_pane_g

0x2817,	// (0x0004dfe3) wait_border_pane_g2_copy1

0x9c64,	// (0x00055430) list_single_large_graphic_pane_g4_cp2

0xe847,	// (0x0005a013) list_single_large_graphic_pane_t1_ParamLimits

0xe847,	// (0x0005a013) list_single_large_graphic_pane_t1

0x8710,	// (0x00053edc) list_double_pane_g1_ParamLimits

0x8710,	// (0x00053edc) list_double_pane_g1

0x871c,	// (0x00053ee8) list_double_pane_g2_ParamLimits

0x871c,	// (0x00053ee8) list_double_pane_g2

0x0001,

0xf5cc,	// (0x0005ad98) list_double_pane_g_ParamLimits

0xf5cc,	// (0x0005ad98) list_double_pane_g

0x8728,	// (0x00053ef4) list_double_pane_t1_ParamLimits

0x8728,	// (0x00053ef4) list_double_pane_t1

0x873e,	// (0x00053f0a) list_double_pane_t2_ParamLimits

0x873e,	// (0x00053f0a) list_double_pane_t2

0x0001,

0xf5d1,	// (0x0005ad9d) list_double_pane_t_ParamLimits

0xf5d1,	// (0x0005ad9d) list_double_pane_t

0x8750,	// (0x00053f1c) list_double2_pane_g1_ParamLimits

0x8750,	// (0x00053f1c) list_double2_pane_g1

0x8761,	// (0x00053f2d) list_double2_pane_g2_ParamLimits

0x8761,	// (0x00053f2d) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x0005ada2) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x0005ada2) list_double2_pane_g

0x876d,	// (0x00053f39) list_double2_pane_t1_ParamLimits

0x876d,	// (0x00053f39) list_double2_pane_t1

0x8783,	// (0x00053f4f) list_double2_pane_t2_ParamLimits

0x8783,	// (0x00053f4f) list_double2_pane_t2

0x0001,

0xf5db,	// (0x0005ada7) list_double2_pane_t_ParamLimits

0xf5db,	// (0x0005ada7) list_double2_pane_t

0x8710,	// (0x00053edc) list_double_number_pane_g1_ParamLimits

0x8710,	// (0x00053edc) list_double_number_pane_g1

0x871c,	// (0x00053ee8) list_double_number_pane_g2_ParamLimits

0x871c,	// (0x00053ee8) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x0005ad98) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x0005ad98) list_double_number_pane_g

0x8795,	// (0x00053f61) list_double_number_pane_t1_ParamLimits

0x8795,	// (0x00053f61) list_double_number_pane_t1

0x87a7,	// (0x00053f73) list_double_number_pane_t2_ParamLimits

0x87a7,	// (0x00053f73) list_double_number_pane_t2

0x87bd,	// (0x00053f89) list_double_number_pane_t3_ParamLimits

0x87bd,	// (0x00053f89) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x0005adac) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x0005adac) list_double_number_pane_t

0x87cf,	// (0x00053f9b) list_double_graphic_pane_g1_ParamLimits

0x87cf,	// (0x00053f9b) list_double_graphic_pane_g1

0x87db,	// (0x00053fa7) list_double_graphic_pane_g2_ParamLimits

0x87db,	// (0x00053fa7) list_double_graphic_pane_g2

0x3c9d,	// (0x0004f469) list_double_graphic_pane_g3_ParamLimits

0x3c9d,	// (0x0004f469) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x0005adb3) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x0005adb3) list_double_graphic_pane_g

0x8728,	// (0x00053ef4) list_double_graphic_pane_t1_ParamLimits

0x8728,	// (0x00053ef4) list_double_graphic_pane_t1

0x873e,	// (0x00053f0a) list_double_graphic_pane_t2_ParamLimits

0x873e,	// (0x00053f0a) list_double_graphic_pane_t2

0x0001,

0xf5d1,	// (0x0005ad9d) list_double_graphic_pane_t_ParamLimits

0xf5d1,	// (0x0005ad9d) list_double_graphic_pane_t

0x87f6,	// (0x00053fc2) list_double2_graphic_pane_g1_ParamLimits

0x87f6,	// (0x00053fc2) list_double2_graphic_pane_g1

0x8802,	// (0x00053fce) list_double2_graphic_pane_g2_ParamLimits

0x8802,	// (0x00053fce) list_double2_graphic_pane_g2

0x9c6c,	// (0x00055438) list_double2_graphic_pane_g3_ParamLimits

0x9c6c,	// (0x00055438) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0005adbc) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0005adbc) list_double2_graphic_pane_g

0x880e,	// (0x00053fda) list_double2_graphic_pane_t1_ParamLimits

0x880e,	// (0x00053fda) list_double2_graphic_pane_t1

0x8824,	// (0x00053ff0) list_double2_graphic_pane_t2_ParamLimits

0x8824,	// (0x00053ff0) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0005adc3) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0005adc3) list_double2_graphic_pane_t

0x8836,	// (0x00054002) list_double_large_graphic_pane_g1_ParamLimits

0x8836,	// (0x00054002) list_double_large_graphic_pane_g1

0x8855,	// (0x00054021) list_double_large_graphic_pane_g2_ParamLimits

0x8855,	// (0x00054021) list_double_large_graphic_pane_g2

0x871c,	// (0x00053ee8) list_double_large_graphic_pane_g3_ParamLimits

0x871c,	// (0x00053ee8) list_double_large_graphic_pane_g3

0x886b,	// (0x00054037) list_double_large_graphic_pane_g4_ParamLimits

0x886b,	// (0x00054037) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0005adc8) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0005adc8) list_double_large_graphic_pane_g

0x887e,	// (0x0005404a) list_double_large_graphic_pane_t1_ParamLimits

0x887e,	// (0x0005404a) list_double_large_graphic_pane_t1

0x8897,	// (0x00054063) list_double_large_graphic_pane_t2_ParamLimits

0x8897,	// (0x00054063) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0005add3) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0005add3) list_double_large_graphic_pane_t

0x88a9,	// (0x00054075) list_double2_large_graphic_pane_g1_ParamLimits

0x88a9,	// (0x00054075) list_double2_large_graphic_pane_g1

0x9c78,	// (0x00055444) list_double2_large_graphic_pane_g2_ParamLimits

0x9c78,	// (0x00055444) list_double2_large_graphic_pane_g2

0x9c6c,	// (0x00055438) list_double2_large_graphic_pane_g3_ParamLimits

0x9c6c,	// (0x00055438) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0005add8) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0005add8) list_double2_large_graphic_pane_g

0x880e,	// (0x00053fda) list_double2_large_graphic_pane_t1_ParamLimits

0x880e,	// (0x00053fda) list_double2_large_graphic_pane_t1

0x8824,	// (0x00053ff0) list_double2_large_graphic_pane_t2_ParamLimits

0x8824,	// (0x00053ff0) list_double2_large_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0005adc3) list_double2_large_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0005adc3) list_double2_large_graphic_pane_t

0x88b5,	// (0x00054081) list_double_heading_pane_g1_ParamLimits

0x88b5,	// (0x00054081) list_double_heading_pane_g1

0xf0e7,	// (0x0005a8b3) list_double_heading_pane_g2_ParamLimits

0xf0e7,	// (0x0005a8b3) list_double_heading_pane_g2

0x0001,

0xf613,	// (0x0005addf) list_double_heading_pane_g_ParamLimits

0xf613,	// (0x0005addf) list_double_heading_pane_g

0x88c6,	// (0x00054092) list_double_heading_pane_t1_ParamLimits

0x88c6,	// (0x00054092) list_double_heading_pane_t1

0x8824,	// (0x00053ff0) list_double_heading_pane_t2_ParamLimits

0x8824,	// (0x00053ff0) list_double_heading_pane_t2

0x0001,

0xf618,	// (0x0005ade4) list_double_heading_pane_t_ParamLimits

0xf618,	// (0x0005ade4) list_double_heading_pane_t

0x88dc,	// (0x000540a8) list_double_graphic_heading_pane_g1_ParamLimits

0x88dc,	// (0x000540a8) list_double_graphic_heading_pane_g1

0x88b5,	// (0x00054081) list_double_graphic_heading_pane_g2_ParamLimits

0x88b5,	// (0x00054081) list_double_graphic_heading_pane_g2

0xf0e7,	// (0x0005a8b3) list_double_graphic_heading_pane_g3_ParamLimits

0xf0e7,	// (0x0005a8b3) list_double_graphic_heading_pane_g3

0x0002,

0xf61d,	// (0x0005ade9) list_double_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x0005ade9) list_double_graphic_heading_pane_g

0x88c6,	// (0x00054092) list_double_graphic_heading_pane_t1_ParamLimits

0x88c6,	// (0x00054092) list_double_graphic_heading_pane_t1

0x8824,	// (0x00053ff0) list_double_graphic_heading_pane_t2_ParamLimits

0x8824,	// (0x00053ff0) list_double_graphic_heading_pane_t2

0x0001,

0xf618,	// (0x0005ade4) list_double_graphic_heading_pane_t_ParamLimits

0xf618,	// (0x0005ade4) list_double_graphic_heading_pane_t

0x88e8,	// (0x000540b4) list_double_time_pane_g1_ParamLimits

0x88e8,	// (0x000540b4) list_double_time_pane_g1

0xe85d,	// (0x0005a029) list_double_time_pane_g2_ParamLimits

0xe85d,	// (0x0005a029) list_double_time_pane_g2

0x0001,

0xf624,	// (0x0005adf0) list_double_time_pane_g_ParamLimits

0xf624,	// (0x0005adf0) list_double_time_pane_g

0x88f9,	// (0x000540c5) list_double_time_pane_t1_ParamLimits

0x88f9,	// (0x000540c5) list_double_time_pane_t1

0x890f,	// (0x000540db) list_double_time_pane_t2_ParamLimits

0x890f,	// (0x000540db) list_double_time_pane_t2

0x8921,	// (0x000540ed) list_double_time_pane_t3_ParamLimits

0x8921,	// (0x000540ed) list_double_time_pane_t3

0x8933,	// (0x000540ff) list_double_time_pane_t4_ParamLimits

0x8933,	// (0x000540ff) list_double_time_pane_t4

0x0003,

0xf629,	// (0x0005adf5) list_double_time_pane_t_ParamLimits

0xf629,	// (0x0005adf5) list_double_time_pane_t

0x8945,	// (0x00054111) list_setting_pane_g1_ParamLimits

0x8945,	// (0x00054111) list_setting_pane_g1

0x8951,	// (0x0005411d) list_setting_pane_g2_ParamLimits

0x8951,	// (0x0005411d) list_setting_pane_g2

0x0001,

0xf632,	// (0x0005adfe) list_setting_pane_g_ParamLimits

0xf632,	// (0x0005adfe) list_setting_pane_g

0x895d,	// (0x00054129) list_setting_pane_t1_ParamLimits

0x895d,	// (0x00054129) list_setting_pane_t1

0x8977,	// (0x00054143) list_setting_pane_t2_ParamLimits

0x8977,	// (0x00054143) list_setting_pane_t2

0x0002,

0xf637,	// (0x0005ae03) list_setting_pane_t_ParamLimits

0xf637,	// (0x0005ae03) list_setting_pane_t

0x89b6,	// (0x00054182) set_value_pane_cp_ParamLimits

0x89b6,	// (0x00054182) set_value_pane_cp

0x89c2,	// (0x0005418e) list_setting_number_pane_g1_ParamLimits

0x89c2,	// (0x0005418e) list_setting_number_pane_g1

0x89ce,	// (0x0005419a) list_setting_number_pane_g2_ParamLimits

0x89ce,	// (0x0005419a) list_setting_number_pane_g2

0x0001,

0xf63e,	// (0x0005ae0a) list_setting_number_pane_g_ParamLimits

0xf63e,	// (0x0005ae0a) list_setting_number_pane_g

0x89da,	// (0x000541a6) list_setting_number_pane_t1_ParamLimits

0x89da,	// (0x000541a6) list_setting_number_pane_t1

0x89f3,	// (0x000541bf) list_setting_number_pane_t2_ParamLimits

0x89f3,	// (0x000541bf) list_setting_number_pane_t2

0x8a0d,	// (0x000541d9) list_setting_number_pane_t3_ParamLimits

0x8a0d,	// (0x000541d9) list_setting_number_pane_t3

0x0003,

0xf643,	// (0x0005ae0f) list_setting_number_pane_t_ParamLimits

0xf643,	// (0x0005ae0f) list_setting_number_pane_t

0x89b6,	// (0x00054182) set_value_pane_ParamLimits

0x89b6,	// (0x00054182) set_value_pane

0x9c89,	// (0x00055455) bg_set_opt_pane_ParamLimits

0x9c89,	// (0x00055455) bg_set_opt_pane

0xe869,	// (0x0005a035) set_value_pane_t1

0x9caa,	// (0x00055476) slider_set_pane_cp3

0x9cb3,	// (0x0005547f) volume_small_pane_cp

0x9cbc,	// (0x00055488) list_form_gen_pane

0x9cc5,	// (0x00055491) scroll_pane_cp8

0x8a50,	// (0x0005421c) form_field_data_pane_ParamLimits

0x8a50,	// (0x0005421c) form_field_data_pane

0x8a67,	// (0x00054233) form_field_data_wide_pane_ParamLimits

0x8a67,	// (0x00054233) form_field_data_wide_pane

0x8a87,	// (0x00054253) form_field_popup_pane_ParamLimits

0x8a87,	// (0x00054253) form_field_popup_pane

0x8aa7,	// (0x00054273) form_field_popup_wide_pane_ParamLimits

0x8aa7,	// (0x00054273) form_field_popup_wide_pane

0xe887,	// (0x0005a053) form_field_slider_pane_ParamLimits

0xe887,	// (0x0005a053) form_field_slider_pane

0x8abe,	// (0x0005428a) form_field_slider_wide_pane_ParamLimits

0x8abe,	// (0x0005428a) form_field_slider_wide_pane

0x9cd6,	// (0x000554a2) data_form_pane

0x8adb,	// (0x000542a7) form_field_data_pane_t1

0x9ce2,	// (0x000554ae) input_focus_pane

0xe89a,	// (0x0005a066) data_form_wide_pane

0xe8b7,	// (0x0005a083) form_field_data_wide_pane_t1

0x9a78,	// (0x00055244) input_focus_pane_cp6

0x8af5,	// (0x000542c1) form_field_popup_pane_t1

0x9ce2,	// (0x000554ae) input_focus_pane_cp7

0x9d10,	// (0x000554dc) list_form_pane

0xe8e1,	// (0x0005a0ad) form_field_popup_wide_pane_t1

0x9ce2,	// (0x000554ae) input_focus_pane_cp8

0x9d1c,	// (0x000554e8) list_form_wide_pane

0x8b17,	// (0x000542e3) form_field_slider_pane_t1_ParamLimits

0x8b17,	// (0x000542e3) form_field_slider_pane_t1

0x8b2f,	// (0x000542fb) form_field_slider_pane_t2_ParamLimits

0x8b2f,	// (0x000542fb) form_field_slider_pane_t2

0x0001,

0xf653,	// (0x0005ae1f) form_field_slider_pane_t_ParamLimits

0xf653,	// (0x0005ae1f) form_field_slider_pane_t

0x9352,	// (0x00054b1e) input_focus_pane_cp9_ParamLimits

0x9352,	// (0x00054b1e) input_focus_pane_cp9

0x8b44,	// (0x00054310) slider_cont_pane_ParamLimits

0x8b44,	// (0x00054310) slider_cont_pane

0x9d28,	// (0x000554f4) form_field_slider_wide_pane_t1_ParamLimits

0x9d28,	// (0x000554f4) form_field_slider_wide_pane_t1

0xe8f6,	// (0x0005a0c2) form_field_slider_wide_pane_t2_ParamLimits

0xe8f6,	// (0x0005a0c2) form_field_slider_wide_pane_t2

0x0001,

0xf658,	// (0x0005ae24) form_field_slider_wide_pane_t_ParamLimits

0xf658,	// (0x0005ae24) form_field_slider_wide_pane_t

0x9352,	// (0x00054b1e) input_focus_pane_cp10_ParamLimits

0x9352,	// (0x00054b1e) input_focus_pane_cp10

0x8b58,	// (0x00054324) slider_cont_pane_cp1_ParamLimits

0x8b58,	// (0x00054324) slider_cont_pane_cp1

0x8b6c,	// (0x00054338) slider_form_pane_cp

0x9d3a,	// (0x00055506) input_focus_pane_g1

0x9d42,	// (0x0005550e) input_focus_pane_g2

0x9d4a,	// (0x00055516) input_focus_pane_g3

0x9d52,	// (0x0005551e) input_focus_pane_g4

0x9d5a,	// (0x00055526) input_focus_pane_g5

0x9d62,	// (0x0005552e) input_focus_pane_g6

0x9d6a,	// (0x00055536) input_focus_pane_g7

0x9d72,	// (0x0005553e) input_focus_pane_g8

0x9d7a,	// (0x00055546) input_focus_pane_g9

0x8ec2,	// (0x0005468e) input_focus_pane_g10

0x0009,

0xf65d,	// (0x0005ae29) input_focus_pane_g

0x2820,	// (0x0004dfec) wait_border_pane_g3_copy1

0x8b74,	// (0x00054340) data_form_pane_t1

0x8ec2,	// (0x0005468e) wait_anim_pane_g1_copy1

0x8cc3,	// (0x0005448f) data_form_wide_pane_t1

0x8b8e,	// (0x0005435a) list_form_graphic_pane_cp_ParamLimits

0x8b8e,	// (0x0005435a) list_form_graphic_pane_cp

0x370f,	// (0x0004eedb) slider_form_pane_g1

0x3718,	// (0x0004eee4) slider_form_pane_g2

0x0006,

0xf954,	// (0x0005b120) slider_form_pane_g

0x8ba0,	// (0x0005436c) list_form_graphic_pane_ParamLimits

0x8ba0,	// (0x0005436c) list_form_graphic_pane

0x8bb3,	// (0x0005437f) list_form_graphic_pane_g1

0x8bbb,	// (0x00054387) list_form_graphic_pane_t1_ParamLimits

0x8bbb,	// (0x00054387) list_form_graphic_pane_t1

0x939c,	// (0x00054b68) list_highlight_pane_cp5_ParamLimits

0x939c,	// (0x00054b68) list_highlight_pane_cp5

0x8bd0,	// (0x0005439c) find_pane_g1

0x9d82,	// (0x0005554e) input_find_pane

0x8bd9,	// (0x000543a5) input_find_pane_g1_ParamLimits

0x8bd9,	// (0x000543a5) input_find_pane_g1

0x8be5,	// (0x000543b1) input_find_pane_t1_ParamLimits

0x8be5,	// (0x000543b1) input_find_pane_t1

0x8bfa,	// (0x000543c6) input_find_pane_t2_ParamLimits

0x8bfa,	// (0x000543c6) input_find_pane_t2

0x0001,

0xf672,	// (0x0005ae3e) input_find_pane_t_ParamLimits

0xf672,	// (0x0005ae3e) input_find_pane_t

0x9d8b,	// (0x00055557) input_focus_pane_cp5_ParamLimits

0x9d8b,	// (0x00055557) input_focus_pane_cp5

0x9daa,	// (0x00055576) bg_popup_window_pane_cp2_ParamLimits

0x9daa,	// (0x00055576) bg_popup_window_pane_cp2

0x9db7,	// (0x00055583) listscroll_menu_pane_ParamLimits

0x9db7,	// (0x00055583) listscroll_menu_pane

0x9dc3,	// (0x0005558f) popup_submenu_window_ParamLimits

0x9dc3,	// (0x0005558f) popup_submenu_window

0x9deb,	// (0x000555b7) find_popup_pane_g1

0x9df3,	// (0x000555bf) input_popup_find_pane_cp

0x9dfd,	// (0x000555c9) input_focus_pane_cp4_ParamLimits

0x9dfd,	// (0x000555c9) input_focus_pane_cp4

0x9e19,	// (0x000555e5) input_popup_find_pane_t1_ParamLimits

0x9e19,	// (0x000555e5) input_popup_find_pane_t1

0x9101,	// (0x000548cd) bg_popup_sub_pane_cp

0x9e47,	// (0x00055613) listscroll_popup_sub_pane

0x9e4f,	// (0x0005561b) list_submenu_pane_ParamLimits

0x9e4f,	// (0x0005561b) list_submenu_pane

0x9e60,	// (0x0005562c) scroll_pane_cp4

0x9e68,	// (0x00055634) list_single_popup_submenu_pane_ParamLimits

0x9e68,	// (0x00055634) list_single_popup_submenu_pane

0x9e7c,	// (0x00055648) list_single_popup_submenu_pane_g1

0x9e84,	// (0x00055650) list_single_popup_submenu_pane_t1_ParamLimits

0x9e84,	// (0x00055650) list_single_popup_submenu_pane_t1

0x9352,	// (0x00054b1e) bg_active_tab_pane_cp1_ParamLimits

0x9352,	// (0x00054b1e) bg_active_tab_pane_cp1

0x9e99,	// (0x00055665) tabs_2_active_pane_g1

0x9ea1,	// (0x0005566d) tabs_2_active_pane_t1

0x9352,	// (0x00054b1e) bg_passive_tab_pane_cp1_ParamLimits

0x9352,	// (0x00054b1e) bg_passive_tab_pane_cp1

0x9e99,	// (0x00055665) tabs_2_passive_pane_g1

0x9ea1,	// (0x0005566d) tabs_2_passive_pane_t1

0x939c,	// (0x00054b68) bg_active_tab_pane_cp4

0x9eb3,	// (0x0005567f) tabs_2_long_active_pane_t1

0x9ec6,	// (0x00055692) bg_passive_tab_pane_cp4

0x098c,	// (0x0004c158) list_single_midp_graphic_pane_g4_ParamLimits

0x939c,	// (0x00054b68) bg_active_tab_pane_cp5

0x9ed2,	// (0x0005569e) tabs_3_long_active_pane_t1

0x9ec6,	// (0x00055692) bg_passive_tab_pane_cp5

0x098c,	// (0x0004c158) list_single_midp_graphic_pane_g4

0x939c,	// (0x00054b68) bg_popup_window_pane_cp13_ParamLimits

0x939c,	// (0x00054b68) bg_popup_window_pane_cp13

0x9eed,	// (0x000556b9) listscroll_popup_fast_pane_ParamLimits

0x9eed,	// (0x000556b9) listscroll_popup_fast_pane

0x9ef9,	// (0x000556c5) grid_popup_fast_pane_ParamLimits

0x9ef9,	// (0x000556c5) grid_popup_fast_pane

0x9f0b,	// (0x000556d7) scroll_pane_cp9_ParamLimits

0x9f0b,	// (0x000556d7) scroll_pane_cp9

0x501f,	// (0x000507eb) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x501f,	// (0x000507eb) list_single_graphic_hl_pane_t1_cp2

0x9f2f,	// (0x000556fb) input_focus_pane_cp20_ParamLimits

0x9f2f,	// (0x000556fb) input_focus_pane_cp20

0x9f3d,	// (0x00055709) query_popup_data_pane_t1_ParamLimits

0x9f3d,	// (0x00055709) query_popup_data_pane_t1

0x9f50,	// (0x0005571c) query_popup_data_pane_t2_ParamLimits

0x9f50,	// (0x0005571c) query_popup_data_pane_t2

0x9f96,	// (0x00055762) query_popup_data_pane_t3_ParamLimits

0x9f96,	// (0x00055762) query_popup_data_pane_t3

0x9fd7,	// (0x000557a3) query_popup_data_pane_t4_ParamLimits

0x9fd7,	// (0x000557a3) query_popup_data_pane_t4

0xa013,	// (0x000557df) query_popup_data_pane_t5_ParamLimits

0xa013,	// (0x000557df) query_popup_data_pane_t5

0x0004,

0xf677,	// (0x0005ae43) query_popup_data_pane_t_ParamLimits

0xf677,	// (0x0005ae43) query_popup_data_pane_t

0x9d3a,	// (0x00055506) bg_set_opt_pane_g1

0x9d42,	// (0x0005550e) bg_set_opt_pane_g2

0x9d4a,	// (0x00055516) bg_set_opt_pane_g3

0x9d52,	// (0x0005551e) bg_set_opt_pane_g4

0x9d5a,	// (0x00055526) bg_set_opt_pane_g5

0x9d62,	// (0x0005552e) bg_set_opt_pane_g6

0x9d6a,	// (0x00055536) bg_set_opt_pane_g7

0x9d72,	// (0x0005553e) bg_set_opt_pane_g8

0x9d7a,	// (0x00055546) bg_set_opt_pane_g9

0x0008,

0xf682,	// (0x0005ae4e) bg_set_opt_pane_g

0xf330,	// (0x0005aafc) control_top_pane_stacon_ParamLimits

0xf330,	// (0x0005aafc) control_top_pane_stacon

0xf383,	// (0x0005ab4f) signal_pane_stacon_ParamLimits

0xf383,	// (0x0005ab4f) signal_pane_stacon

0xc1bf,	// (0x0005798b) stacon_top_pane_g1_ParamLimits

0xc1bf,	// (0x0005798b) stacon_top_pane_g1

0xf3a8,	// (0x0005ab74) title_pane_stacon_ParamLimits

0xf3a8,	// (0x0005ab74) title_pane_stacon

0xf3d2,	// (0x0005ab9e) uni_indicator_pane_stacon_ParamLimits

0xf3d2,	// (0x0005ab9e) uni_indicator_pane_stacon

0xf3e7,	// (0x0005abb3) battery_pane_stacon_ParamLimits

0xf3e7,	// (0x0005abb3) battery_pane_stacon

0xf42b,	// (0x0005abf7) control_bottom_pane_stacon_ParamLimits

0xf42b,	// (0x0005abf7) control_bottom_pane_stacon

0xf44e,	// (0x0005ac1a) navi_pane_stacon_ParamLimits

0xf44e,	// (0x0005ac1a) navi_pane_stacon

0xc1e1,	// (0x000579ad) stacon_bottom_pane_g1_ParamLimits

0xc1e1,	// (0x000579ad) stacon_bottom_pane_g1

0xf0f3,	// (0x0005a8bf) aid_levels_signal_lsc_ParamLimits

0xf0f3,	// (0x0005a8bf) aid_levels_signal_lsc

0xf109,	// (0x0005a8d5) signal_pane_stacon_g1_ParamLimits

0xf109,	// (0x0005a8d5) signal_pane_stacon_g1

0xf11d,	// (0x0005a8e9) signal_pane_stacon_g2_ParamLimits

0xf11d,	// (0x0005a8e9) signal_pane_stacon_g2

0x0001,

0xf695,	// (0x0005ae61) signal_pane_stacon_g_ParamLimits

0xf695,	// (0x0005ae61) signal_pane_stacon_g

0xf152,	// (0x0005a91e) title_pane_stacon_t1_ParamLimits

0xf152,	// (0x0005a91e) title_pane_stacon_t1

0xa057,	// (0x00055823) uni_indicator_pane_stacon_g1

0xa061,	// (0x0005582d) uni_indicator_pane_stacon_g2

0xa06b,	// (0x00055837) uni_indicator_pane_stacon_g3

0xa075,	// (0x00055841) uni_indicator_pane_stacon_g4

0x0003,

0xf6a1,	// (0x0005ae6d) uni_indicator_pane_stacon_g

0xf177,	// (0x0005a943) control_top_pane_stacon_g1

0xf17f,	// (0x0005a94b) control_top_pane_stacon_t1_ParamLimits

0xf17f,	// (0x0005a94b) control_top_pane_stacon_t1

0xf1b6,	// (0x0005a982) aid_levels_battery_lsc_ParamLimits

0xf1b6,	// (0x0005a982) aid_levels_battery_lsc

0xf1cd,	// (0x0005a999) battery_pane_stacon_g1_ParamLimits

0xf1cd,	// (0x0005a999) battery_pane_stacon_g1

0xf1e0,	// (0x0005a9ac) battery_pane_stacon_g2_ParamLimits

0xf1e0,	// (0x0005a9ac) battery_pane_stacon_g2

0x0001,

0xf6aa,	// (0x0005ae76) battery_pane_stacon_g_ParamLimits

0xf6aa,	// (0x0005ae76) battery_pane_stacon_g

0xf21e,	// (0x0005a9ea) navi_icon_pane_stacon

0xf232,	// (0x0005a9fe) navi_navi_pane_stacon

0xf21e,	// (0x0005a9ea) navi_text_pane_stacon

0xf177,	// (0x0005a943) control_bottom_pane_stacon_g1

0xf246,	// (0x0005aa12) control_bottom_pane_stacon_t1_ParamLimits

0xf246,	// (0x0005aa12) control_bottom_pane_stacon_t1

0xa099,	// (0x00055865) grid_app_pane_ParamLimits

0xa099,	// (0x00055865) grid_app_pane

0xa0d1,	// (0x0005589d) scroll_pane_cp15_ParamLimits

0xa0d1,	// (0x0005589d) scroll_pane_cp15

0xa0e6,	// (0x000558b2) cell_app_pane_ParamLimits

0xa0e6,	// (0x000558b2) cell_app_pane

0xa12b,	// (0x000558f7) cell_app_pane_g1_ParamLimits

0xa12b,	// (0x000558f7) cell_app_pane_g1

0xa14f,	// (0x0005591b) cell_app_pane_g2_ParamLimits

0xa14f,	// (0x0005591b) cell_app_pane_g2

0x0001,

0xf6af,	// (0x0005ae7b) cell_app_pane_g_ParamLimits

0xf6af,	// (0x0005ae7b) cell_app_pane_g

0xa15b,	// (0x00055927) cell_app_pane_t1_ParamLimits

0xa15b,	// (0x00055927) cell_app_pane_t1

0xa172,	// (0x0005593e) grid_highlight_pane_ParamLimits

0xa172,	// (0x0005593e) grid_highlight_pane

0x9d3a,	// (0x00055506) cell_highlight_pane_g1

0x9d42,	// (0x0005550e) cell_highlight_pane_g2

0x9d4a,	// (0x00055516) cell_highlight_pane_g3

0x9d52,	// (0x0005551e) cell_highlight_pane_g4

0x9d5a,	// (0x00055526) cell_highlight_pane_g5

0x9d62,	// (0x0005552e) cell_highlight_pane_g6

0x9d6a,	// (0x00055536) cell_highlight_pane_g7

0x9d72,	// (0x0005553e) cell_highlight_pane_g8

0x9d7a,	// (0x00055546) cell_highlight_pane_g9

0x8ec2,	// (0x0005468e) cell_highlight_pane_g10

0x0009,

0xf65d,	// (0x0005ae29) cell_highlight_pane_g

0xa18c,	// (0x00055958) bg_scroll_pane

0xa1ab,	// (0x00055977) scroll_handle_pane

0xa1e7,	// (0x000559b3) scroll_bg_pane_g1

0xa1fc,	// (0x000559c8) scroll_bg_pane_g2

0xa214,	// (0x000559e0) scroll_bg_pane_g3

0x0002,

0xf6b4,	// (0x0005ae80) scroll_bg_pane_g

0xa229,	// (0x000559f5) scroll_handle_focus_pane_ParamLimits

0xa229,	// (0x000559f5) scroll_handle_focus_pane

0xa1e7,	// (0x000559b3) scroll_handle_pane_g1

0xa236,	// (0x00055a02) scroll_handle_pane_g2

0xa214,	// (0x000559e0) scroll_handle_pane_g3

0x0002,

0xf6bb,	// (0x0005ae87) scroll_handle_pane_g

0x9dfd,	// (0x000555c9) bg_popup_sub_pane_cp21_ParamLimits

0x9dfd,	// (0x000555c9) bg_popup_sub_pane_cp21

0xa24a,	// (0x00055a16) popup_fep_japan_predictive_window_t1_ParamLimits

0xa24a,	// (0x00055a16) popup_fep_japan_predictive_window_t1

0xa261,	// (0x00055a2d) popup_fep_japan_predictive_window_t2_ParamLimits

0xa261,	// (0x00055a2d) popup_fep_japan_predictive_window_t2

0xa294,	// (0x00055a60) popup_fep_japan_predictive_window_t3_ParamLimits

0xa294,	// (0x00055a60) popup_fep_japan_predictive_window_t3

0x0002,

0xf6c2,	// (0x0005ae8e) popup_fep_japan_predictive_window_t_ParamLimits

0xf6c2,	// (0x0005ae8e) popup_fep_japan_predictive_window_t

0x9101,	// (0x000548cd) bg_popup_sub_pane_cp23

0xa2cb,	// (0x00055a97) listscroll_japin_cand_pane

0xa2d3,	// (0x00055a9f) popup_fep_japan_candidate_window_t1

0xa2e1,	// (0x00055aad) candidate_pane_ParamLimits

0xa2e1,	// (0x00055aad) candidate_pane

0xa2f3,	// (0x00055abf) scroll_pane_cp30

0xa2fb,	// (0x00055ac7) list_single_popup_jap_candidate_pane_ParamLimits

0xa2fb,	// (0x00055ac7) list_single_popup_jap_candidate_pane

0x9101,	// (0x000548cd) list_highlight_pane_cp30

0xa310,	// (0x00055adc) list_single_popup_jap_candidate_pane_t1

0xa31f,	// (0x00055aeb) level_1_signal

0xbfc4,	// (0x00057790) level_2_signal

0xbfd1,	// (0x0005779d) level_3_signal

0xbfde,	// (0x000577aa) level_4_signal

0xbfeb,	// (0x000577b7) level_5_signal

0xbff8,	// (0x000577c4) level_6_signal

0xc005,	// (0x000577d1) level_7_signal

0xa31f,	// (0x00055aeb) level_1_battery

0xbfc4,	// (0x00057790) level_2_battery

0xbfd1,	// (0x0005779d) level_3_battery

0xbfde,	// (0x000577aa) level_4_battery

0xbfeb,	// (0x000577b7) level_5_battery

0xbff8,	// (0x000577c4) level_6_battery

0xc005,	// (0x000577d1) level_7_battery

0xc02a,	// (0x000577f6) list_menu_pane_ParamLimits

0xc02a,	// (0x000577f6) list_menu_pane

0xc040,	// (0x0005780c) scroll_pane_cp25_ParamLimits

0xc040,	// (0x0005780c) scroll_pane_cp25

0xa32c,	// (0x00055af8) list_double2_graphic_pane_cp2_ParamLimits

0xa32c,	// (0x00055af8) list_double2_graphic_pane_cp2

0xa32c,	// (0x00055af8) list_double2_large_graphic_pane_cp2_ParamLimits

0xa32c,	// (0x00055af8) list_double2_large_graphic_pane_cp2

0xa32c,	// (0x00055af8) list_double2_pane_cp2_ParamLimits

0xa32c,	// (0x00055af8) list_double2_pane_cp2

0xa32c,	// (0x00055af8) list_double_graphic_pane_cp2_ParamLimits

0xa32c,	// (0x00055af8) list_double_graphic_pane_cp2

0xa32c,	// (0x00055af8) list_double_large_graphic_pane_cp2_ParamLimits

0xa32c,	// (0x00055af8) list_double_large_graphic_pane_cp2

0xa32c,	// (0x00055af8) list_double_number_pane_cp2_ParamLimits

0xa32c,	// (0x00055af8) list_double_number_pane_cp2

0xa32c,	// (0x00055af8) list_double_pane_cp2_ParamLimits

0xa32c,	// (0x00055af8) list_double_pane_cp2

0xa33b,	// (0x00055b07) list_single_2graphic_pane_cp2_ParamLimits

0xa33b,	// (0x00055b07) list_single_2graphic_pane_cp2

0xa33b,	// (0x00055b07) list_single_graphic_heading_pane_cp2_ParamLimits

0xa33b,	// (0x00055b07) list_single_graphic_heading_pane_cp2

0xa33b,	// (0x00055b07) list_single_graphic_pane_cp2_ParamLimits

0xa33b,	// (0x00055b07) list_single_graphic_pane_cp2

0xa33b,	// (0x00055b07) list_single_heading_pane_cp2_ParamLimits

0xa33b,	// (0x00055b07) list_single_heading_pane_cp2

0xc069,	// (0x00057835) list_single_large_graphic_pane_cp2_ParamLimits

0xc069,	// (0x00057835) list_single_large_graphic_pane_cp2

0xa33b,	// (0x00055b07) list_single_number_heading_pane_cp2_ParamLimits

0xa33b,	// (0x00055b07) list_single_number_heading_pane_cp2

0xa33b,	// (0x00055b07) list_single_number_pane_cp2_ParamLimits

0xa33b,	// (0x00055b07) list_single_number_pane_cp2

0xa34d,	// (0x00055b19) list_single_pane_cp2_ParamLimits

0xa34d,	// (0x00055b19) list_single_pane_cp2

0xc083,	// (0x0005784f) bg_popup_sub_pane_cp22

0xf316,	// (0x0005aae2) popup_side_volume_key_window_g1

0xf322,	// (0x0005aaee) popup_side_volume_key_window_t1

0xa415,	// (0x00055be1) volume_small_pane_cp1

0x9352,	// (0x00054b1e) bg_popup_sub_pane_cp24_ParamLimits

0x9352,	// (0x00054b1e) bg_popup_sub_pane_cp24

0xc099,	// (0x00057865) fep_china_uni_candidate_pane_ParamLimits

0xc099,	// (0x00057865) fep_china_uni_candidate_pane

0xc0ad,	// (0x00057879) fep_china_uni_entry_pane

0xc0bd,	// (0x00057889) popup_fep_china_uni_window_g1

0xa41d,	// (0x00055be9) fep_china_uni_entry_pane_g1

0xa425,	// (0x00055bf1) fep_china_uni_entry_pane_g2

0x0001,

0xf6f3,	// (0x0005aebf) fep_china_uni_entry_pane_g

0xc0d9,	// (0x000578a5) fep_entry_item_pane

0xc0e3,	// (0x000578af) fep_candidate_item_pane

0xa42d,	// (0x00055bf9) fep_china_uni_candidate_pane_g1

0xc0eb,	// (0x000578b7) fep_china_uni_candidate_pane_g2

0xc0f3,	// (0x000578bf) fep_china_uni_candidate_pane_g3

0xa435,	// (0x00055c01) fep_china_uni_candidate_pane_g4

0x0003,

0xf6f8,	// (0x0005aec4) fep_china_uni_candidate_pane_g

0x8ec2,	// (0x0005468e) fep_entry_item_pane_g1

0xc0fb,	// (0x000578c7) fep_entry_item_pane_t1_ParamLimits

0xc0fb,	// (0x000578c7) fep_entry_item_pane_t1

0xc111,	// (0x000578dd) fep_candidate_item_pane_t1_ParamLimits

0xc111,	// (0x000578dd) fep_candidate_item_pane_t1

0xc126,	// (0x000578f2) fep_candidate_item_pane_t2_ParamLimits

0xc126,	// (0x000578f2) fep_candidate_item_pane_t2

0x0001,

0xf701,	// (0x0005aecd) fep_candidate_item_pane_t_ParamLimits

0xf701,	// (0x0005aecd) fep_candidate_item_pane_t

0x939c,	// (0x00054b68) list_highlight_pane_cp31_ParamLimits

0x939c,	// (0x00054b68) list_highlight_pane_cp31

0xc138,	// (0x00057904) level_1_signal_lsc

0xc141,	// (0x0005790d) level_2_signal_lsc

0xc14a,	// (0x00057916) level_3_signal_lsc

0xc153,	// (0x0005791f) level_4_signal_lsc

0xc15c,	// (0x00057928) level_5_signal_lsc

0xc165,	// (0x00057931) level_6_signal_lsc

0xc16e,	// (0x0005793a) level_7_signal_lsc

0xc16e,	// (0x0005793a) level_1_battery_lsc

0xc177,	// (0x00057943) level_2_battery_lsc

0xc180,	// (0x0005794c) level_3_battery_lsc

0xc189,	// (0x00057955) level_4_battery_lsc

0xc192,	// (0x0005795e) level_5_battery_lsc

0xc19b,	// (0x00057967) level_6_battery_lsc

0xc138,	// (0x00057904) level_7_battery_lsc

0xc1a4,	// (0x00057970) scroll_handle_focus_pane_g1

0xc1ad,	// (0x00057979) scroll_handle_focus_pane_g2

0xc1b6,	// (0x00057982) scroll_handle_focus_pane_g3

0x0002,

0xf706,	// (0x0005aed2) scroll_handle_focus_pane_g

0x8c0f,	// (0x000543db) list_single_2graphic_pane_g1_ParamLimits

0x8c0f,	// (0x000543db) list_single_2graphic_pane_g1

0x9c53,	// (0x0005541f) list_single_2graphic_pane_g2_ParamLimits

0x9c53,	// (0x0005541f) list_single_2graphic_pane_g2

0x095b,	// (0x0004c127) list_single_2graphic_pane_g3_ParamLimits

0x095b,	// (0x0004c127) list_single_2graphic_pane_g3

0x8c1b,	// (0x000543e7) list_single_2graphic_pane_g4_ParamLimits

0x8c1b,	// (0x000543e7) list_single_2graphic_pane_g4

0x0003,

0xf70d,	// (0x0005aed9) list_single_2graphic_pane_g_ParamLimits

0xf70d,	// (0x0005aed9) list_single_2graphic_pane_g

0x8c27,	// (0x000543f3) list_single_2graphic_pane_t1_ParamLimits

0x8c27,	// (0x000543f3) list_single_2graphic_pane_t1

0x8c55,	// (0x00054421) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x8c55,	// (0x00054421) list_double2_graphic_large_graphic_pane_g1

0x9c78,	// (0x00055444) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9c78,	// (0x00055444) list_double2_graphic_large_graphic_pane_g2

0x9c6c,	// (0x00055438) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9c6c,	// (0x00055438) list_double2_graphic_large_graphic_pane_g3

0x8c67,	// (0x00054433) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x8c67,	// (0x00054433) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf716,	// (0x0005aee2) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf716,	// (0x0005aee2) list_double2_graphic_large_graphic_pane_g

0x8c73,	// (0x0005443f) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x8c73,	// (0x0005443f) list_double2_graphic_large_graphic_pane_t1

0x8c89,	// (0x00054455) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x8c89,	// (0x00054455) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf71f,	// (0x0005aeeb) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf71f,	// (0x0005aeeb) list_double2_graphic_large_graphic_pane_t

0xa4b0,	// (0x00055c7c) popup_fast_swap_window_ParamLimits

0xa4b0,	// (0x00055c7c) popup_fast_swap_window

0xa4cc,	// (0x00055c98) popup_side_volume_key_window

0xc26c,	// (0x00057a38) stacon_top_pane

0xc276,	// (0x00057a42) status_pane_ParamLimits

0xc276,	// (0x00057a42) status_pane

0x8eb8,	// (0x00054684) status_small_pane

0x9101,	// (0x000548cd) control_pane

0x9101,	// (0x000548cd) stacon_bottom_pane

0x9cc5,	// (0x00055491) scroll_pane_cp121

0x9cbc,	// (0x00055488) set_content_pane

0xa43d,	// (0x00055c09) bg_active_tab_pane_g1_cp1

0xa446,	// (0x00055c12) bg_active_tab_pane_g2_cp1

0xa44f,	// (0x00055c1b) bg_active_tab_pane_g3_cp1

0xa43d,	// (0x00055c09) bg_passive_tab_pane_g1_cp1

0xa446,	// (0x00055c12) bg_passive_tab_pane_g2_cp1

0xa44f,	// (0x00055c1b) bg_passive_tab_pane_g3_cp1

0xa458,	// (0x00055c24) bg_active_tab_pane_g1_cp2

0xa446,	// (0x00055c12) bg_active_tab_pane_g2_cp2

0xa461,	// (0x00055c2d) bg_active_tab_pane_g3_cp2

0xa458,	// (0x00055c24) bg_passive_tab_pane_g1_cp2

0xa446,	// (0x00055c12) bg_passive_tab_pane_g2_cp2

0xa461,	// (0x00055c2d) bg_passive_tab_pane_g3_cp2

0xa46a,	// (0x00055c36) bg_active_tab_pane_g1_cp3

0xa446,	// (0x00055c12) bg_active_tab_pane_g2_cp3

0xa473,	// (0x00055c3f) bg_active_tab_pane_g3_cp3

0xa46a,	// (0x00055c36) bg_passive_tab_pane_g1_cp3

0xa446,	// (0x00055c12) bg_passive_tab_pane_g2_cp3

0xa473,	// (0x00055c3f) bg_passive_tab_pane_g3_cp3

0xa47c,	// (0x00055c48) bg_active_tab_pane_g1_cp4

0xa446,	// (0x00055c12) bg_active_tab_pane_g2_cp4

0xa487,	// (0x00055c53) bg_active_tab_pane_g3_cp4

0xa47c,	// (0x00055c48) bg_passive_tab_pane_g1_cp4

0xa446,	// (0x00055c12) bg_passive_tab_pane_g2_cp4

0xa487,	// (0x00055c53) bg_passive_tab_pane_g3_cp4

0xa492,	// (0x00055c5e) bg_active_tab_pane_g1_cp5

0xa446,	// (0x00055c12) bg_active_tab_pane_g2_cp5

0xa49b,	// (0x00055c67) bg_active_tab_pane_g3_cp5

0xa492,	// (0x00055c5e) bg_passive_tab_pane_g1_cp5

0xa446,	// (0x00055c12) bg_passive_tab_pane_g2_cp5

0xa49b,	// (0x00055c67) bg_passive_tab_pane_g3_cp5

0x3cc1,	// (0x0004f48d) list_set_graphic_pane_ParamLimits

0x3cc1,	// (0x0004f48d) list_set_graphic_pane

0x9101,	// (0x000548cd) bg_set_opt_pane_cp4

0xc1fd,	// (0x000579c9) list_set_graphic_pane_g1_ParamLimits

0xc1fd,	// (0x000579c9) list_set_graphic_pane_g1

0xc209,	// (0x000579d5) list_set_graphic_pane_g2_ParamLimits

0xc209,	// (0x000579d5) list_set_graphic_pane_g2

0x0001,

0xf724,	// (0x0005aef0) list_set_graphic_pane_g_ParamLimits

0xf724,	// (0x0005aef0) list_set_graphic_pane_g

0x0009,

0xfaa9,	// (0x0005b275) volume_small_pane_cp_g

0xa4a4,	// (0x00055c70) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa4a4,	// (0x00055c70) list_double2_large_graphic_pane_g1_cp2

0xc22b,	// (0x000579f7) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xc22b,	// (0x000579f7) list_double2_large_graphic_pane_g2_cp2

0xc23c,	// (0x00057a08) list_double2_large_graphic_pane_g3_cp2

0xc244,	// (0x00057a10) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xc244,	// (0x00057a10) list_double2_large_graphic_pane_t1_cp2

0xc25a,	// (0x00057a26) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xc25a,	// (0x00057a26) list_double2_large_graphic_pane_t2_cp2

0xc9b7,	// (0x00058183) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xc9b7,	// (0x00058183) list_double_large_graphic_pane_g1_cp2

0x32e2,	// (0x0004eaae) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x32e2,	// (0x0004eaae) list_double_large_graphic_pane_g2_cp2

0xc392,	// (0x00057b5e) list_double_large_graphic_pane_g3_cp2

0x32f3,	// (0x0004eabf) list_double_large_graphic_pane_g4_cp

0x32fb,	// (0x0004eac7) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x32fb,	// (0x0004eac7) list_double_large_graphic_pane_t1_cp2

0x3312,	// (0x0004eade) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3312,	// (0x0004eade) list_double_large_graphic_pane_t2_cp2

0xc284,	// (0x00057a50) list_double2_graphic_pane_g1_cp2_ParamLimits

0xc284,	// (0x00057a50) list_double2_graphic_pane_g1_cp2

0xc292,	// (0x00057a5e) list_double2_graphic_pane_g2_cp2_ParamLimits

0xc292,	// (0x00057a5e) list_double2_graphic_pane_g2_cp2

0xc2a3,	// (0x00057a6f) list_double2_graphic_pane_g3_cp2

0xc2ad,	// (0x00057a79) list_double2_graphic_pane_t1_cp2_ParamLimits

0xc2ad,	// (0x00057a79) list_double2_graphic_pane_t1_cp2

0xc2c3,	// (0x00057a8f) list_double2_graphic_pane_t2_cp2_ParamLimits

0xc2c3,	// (0x00057a8f) list_double2_graphic_pane_t2_cp2

0xc2d5,	// (0x00057aa1) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc2d5,	// (0x00057aa1) list_single_number_heading_pane_g1_cp2

0xc2e1,	// (0x00057aad) list_single_number_heading_pane_g2_cp2

0xc2e9,	// (0x00057ab5) list_single_number_heading_pane_t1_cp2_ParamLimits

0xc2e9,	// (0x00057ab5) list_single_number_heading_pane_t1_cp2

0xc2ff,	// (0x00057acb) list_single_number_heading_pane_t2_cp2_ParamLimits

0xc2ff,	// (0x00057acb) list_single_number_heading_pane_t2_cp2

0xc311,	// (0x00057add) list_single_number_heading_pane_t3_cp2_ParamLimits

0xc311,	// (0x00057add) list_single_number_heading_pane_t3_cp2

0xc2d5,	// (0x00057aa1) list_single_heading_pane_g1_cp2_ParamLimits

0xc2d5,	// (0x00057aa1) list_single_heading_pane_g1_cp2

0xc2e1,	// (0x00057aad) list_single_heading_pane_g2_cp2

0xc2e9,	// (0x00057ab5) list_single_heading_pane_t1_cp2_ParamLimits

0xc2e9,	// (0x00057ab5) list_single_heading_pane_t1_cp2

0x30db,	// (0x0004e8a7) list_single_heading_pane_t2_cp2_ParamLimits

0x30db,	// (0x0004e8a7) list_single_heading_pane_t2_cp2

0x3023,	// (0x0004e7ef) list_double_graphic_pane_g1_cp2_ParamLimits

0x3023,	// (0x0004e7ef) list_double_graphic_pane_g1_cp2

0x302f,	// (0x0004e7fb) list_double_graphic_pane_g2_cp2_ParamLimits

0x302f,	// (0x0004e7fb) list_double_graphic_pane_g2_cp2

0x303e,	// (0x0004e80a) list_double_graphic_pane_g3_cp2

0x3046,	// (0x0004e812) list_double_graphic_pane_t1_cp2_ParamLimits

0x3046,	// (0x0004e812) list_double_graphic_pane_t1_cp2

0x305c,	// (0x0004e828) list_double_graphic_pane_t2_cp2_ParamLimits

0x305c,	// (0x0004e828) list_double_graphic_pane_t2_cp2

0xc386,	// (0x00057b52) list_double_number_pane_g1_cp2_ParamLimits

0xc386,	// (0x00057b52) list_double_number_pane_g1_cp2

0xc392,	// (0x00057b5e) list_double_number_pane_g2_cp2

0x2fe7,	// (0x0004e7b3) list_double_number_pane_t1_cp2_ParamLimits

0x2fe7,	// (0x0004e7b3) list_double_number_pane_t1_cp2

0x2ffb,	// (0x0004e7c7) list_double_number_pane_t2_cp2_ParamLimits

0x2ffb,	// (0x0004e7c7) list_double_number_pane_t2_cp2

0x3011,	// (0x0004e7dd) list_double_number_pane_t3_cp2_ParamLimits

0x3011,	// (0x0004e7dd) list_double_number_pane_t3_cp2

0x2ed0,	// (0x0004e69c) list_single_graphic_pane_g1_cp2_ParamLimits

0x2ed0,	// (0x0004e69c) list_single_graphic_pane_g1_cp2

0xbfb8,	// (0x00057784) list_single_graphic_pane_g2_cp2_ParamLimits

0xbfb8,	// (0x00057784) list_single_graphic_pane_g2_cp2

0xc3eb,	// (0x00057bb7) list_single_graphic_pane_g3_cp2

0x2ea6,	// (0x0004e672) list_single_graphic_pane_t1_cp2_ParamLimits

0x2ea6,	// (0x0004e672) list_single_graphic_pane_t1_cp2

0xbfb8,	// (0x00057784) list_single_number_pane_g1_cp2_ParamLimits

0xbfb8,	// (0x00057784) list_single_number_pane_g1_cp2

0xc3eb,	// (0x00057bb7) list_single_number_pane_g2_cp2

0x2ea6,	// (0x0004e672) list_single_number_pane_t1_cp2_ParamLimits

0x2ea6,	// (0x0004e672) list_single_number_pane_t1_cp2

0x2ebc,	// (0x0004e688) list_single_number_pane_t2_cp2_ParamLimits

0x2ebc,	// (0x0004e688) list_single_number_pane_t2_cp2

0xc22b,	// (0x000579f7) list_double2_pane_g1_cp2_ParamLimits

0xc22b,	// (0x000579f7) list_double2_pane_g1_cp2

0xc23c,	// (0x00057a08) list_double2_pane_g2_cp2

0xc35e,	// (0x00057b2a) list_double2_pane_t1_cp2_ParamLimits

0xc35e,	// (0x00057b2a) list_double2_pane_t1_cp2

0xc374,	// (0x00057b40) list_double2_pane_t2_cp2_ParamLimits

0xc374,	// (0x00057b40) list_double2_pane_t2_cp2

0xc386,	// (0x00057b52) list_double_pane_g1_cp2_ParamLimits

0xc386,	// (0x00057b52) list_double_pane_g1_cp2

0xc392,	// (0x00057b5e) list_double_pane_g2_cp2

0xc39a,	// (0x00057b66) list_double_pane_t1_cp2_ParamLimits

0xc39a,	// (0x00057b66) list_double_pane_t1_cp2

0xc3b0,	// (0x00057b7c) list_double_pane_t2_cp2_ParamLimits

0xc3b0,	// (0x00057b7c) list_double_pane_t2_cp2

0xa4e6,	// (0x00055cb2) list_single_pane_cp2_g3

0xbfb8,	// (0x00057784) list_single_pane_g1_cp2_ParamLimits

0xbfb8,	// (0x00057784) list_single_pane_g1_cp2

0xc3eb,	// (0x00057bb7) list_single_pane_g2_cp2

0xc3f3,	// (0x00057bbf) list_single_pane_t1_cp2_ParamLimits

0xc3f3,	// (0x00057bbf) list_single_pane_t1_cp2

0xa4ee,	// (0x00055cba) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa4ee,	// (0x00055cba) list_single_large_graphic_pane_g1_cp2

0xc40b,	// (0x00057bd7) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xc40b,	// (0x00057bd7) list_single_large_graphic_pane_g2_cp2

0xc417,	// (0x00057be3) list_single_large_graphic_pane_g3_cp2

0xa4fa,	// (0x00055cc6) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xa4fa,	// (0x00055cc6) list_single_large_graphic_pane_g4_cp1

0xc41f,	// (0x00057beb) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xc41f,	// (0x00057beb) list_single_large_graphic_pane_t1_cp2

0x2e72,	// (0x0004e63e) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x2e72,	// (0x0004e63e) list_single_graphic_heading_pane_g1_cp2

0x2e3f,	// (0x0004e60b) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x2e3f,	// (0x0004e60b) list_single_graphic_heading_pane_g4_cp2

0xc3eb,	// (0x00057bb7) list_single_graphic_heading_pane_g5_cp2

0x2e7e,	// (0x0004e64a) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x2e7e,	// (0x0004e64a) list_single_graphic_heading_pane_t1_cp2

0x2e94,	// (0x0004e660) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x2e94,	// (0x0004e660) list_single_graphic_heading_pane_t2_cp2

0x2e33,	// (0x0004e5ff) list_single_2graphic_pane_g1_cp2_ParamLimits

0x2e33,	// (0x0004e5ff) list_single_2graphic_pane_g1_cp2

0x2e3f,	// (0x0004e60b) list_single_2graphic_pane_g2_cp2_ParamLimits

0x2e3f,	// (0x0004e60b) list_single_2graphic_pane_g2_cp2

0xc3eb,	// (0x00057bb7) list_single_2graphic_pane_g3_cp2

0x2e50,	// (0x0004e61c) list_single_2graphic_pane_g4_cp2_ParamLimits

0x2e50,	// (0x0004e61c) list_single_2graphic_pane_g4_cp2

0x2e5c,	// (0x0004e628) list_single_2graphic_pane_t1_cp2_ParamLimits

0x2e5c,	// (0x0004e628) list_single_2graphic_pane_t1_cp2

0x8ec2,	// (0x0005468e) list_highlight_pane_g10_cp1

0x2a1b,	// (0x0004e1e7) list_highlight_pane_g1_cp1

0x2a23,	// (0x0004e1ef) list_highlight_pane_g2_cp1

0x2a2b,	// (0x0004e1f7) list_highlight_pane_g3_cp1

0x2a33,	// (0x0004e1ff) list_highlight_pane_g4_cp1

0x2a3b,	// (0x0004e207) list_highlight_pane_g5_cp1

0x2a43,	// (0x0004e20f) list_highlight_pane_g6_cp1

0x2a4b,	// (0x0004e217) list_highlight_pane_g7_cp1

0x2a53,	// (0x0004e21f) list_highlight_pane_g8_cp1

0x2a5b,	// (0x0004e227) list_highlight_pane_g9_cp1

0xc74c,	// (0x00057f18) form_field_slider_pane_t3

0xc75a,	// (0x00057f26) form_field_slider_pane_t4

0x295f,	// (0x0004e12b) slider_form_pane_ParamLimits

0x295f,	// (0x0004e12b) slider_form_pane

0x9101,	// (0x000548cd) control_abbreviations

0x9101,	// (0x000548cd) control_conventions

0x9101,	// (0x000548cd) control_definitions

0x9101,	// (0x000548cd) format_table_attribute

0xc98e,	// (0x0005815a) bg_popup_preview_window_pane_g9

0x9101,	// (0x000548cd) format_table_data2

0x9101,	// (0x000548cd) format_table_data3

0x9101,	// (0x000548cd) format_table_data_example

0x0008,

0x9101,	// (0x000548cd) intro_purpose

0xf8b4,	// (0x0005b080) bg_popup_preview_window_pane_g

0x9101,	// (0x000548cd) texts_category

0x9101,	// (0x000548cd) texts_graphics

0xc435,	// (0x00057c01) text_digital

0xc444,	// (0x00057c10) text_primary

0xc453,	// (0x00057c1f) text_primary_small

0xc462,	// (0x00057c2e) text_secondary

0xc471,	// (0x00057c3d) text_title

0xccfd,	// (0x000584c9) bg_passive_tab_pane_g1_cp3_srt

0xa446,	// (0x00055c12) bg_passive_tab_pane_g2_cp3_srt

0xcd06,	// (0x000584d2) bg_passive_tab_pane_g3_cp3_srt

0x9352,	// (0x00054b1e) bg_active_tab_pane_cp3_srt_ParamLimits

0x9352,	// (0x00054b1e) bg_active_tab_pane_cp3_srt

0xcd0f,	// (0x000584db) tabs_4_active_pane_srt_g1

0xcd17,	// (0x000584e3) tabs_4_active_pane_srt_t1_ParamLimits

0xcd17,	// (0x000584e3) tabs_4_active_pane_srt_t1

0xccfd,	// (0x000584c9) bg_active_tab_pane_g1_cp3_copy1

0xa446,	// (0x00055c12) bg_active_tab_pane_g2_cp3_copy1

0xcd06,	// (0x000584d2) bg_active_tab_pane_g3_cp3_copy1

0x939c,	// (0x00054b68) tabs_2_long_active_pane_srt_ParamLimits

0x939c,	// (0x00054b68) tabs_2_long_active_pane_srt

0x939c,	// (0x00054b68) tabs_2_long_passive_pane_srt_ParamLimits

0x939c,	// (0x00054b68) tabs_2_long_passive_pane_srt

0x9ec6,	// (0x00055692) bg_passive_tab_pane_cp4_srt_ParamLimits

0x9ec6,	// (0x00055692) bg_passive_tab_pane_cp4_srt

0xcaae,	// (0x0005827a) bg_passive_tab_pane_g1_cp4_srt

0xa446,	// (0x00055c12) bg_passive_tab_pane_g2_cp4_srt

0xcab7,	// (0x00058283) bg_passive_tab_pane_g3_cp4_srt

0x939c,	// (0x00054b68) bg_active_tab_pane_cp4_srt_ParamLimits

0x939c,	// (0x00054b68) bg_active_tab_pane_cp4_srt

0xcac0,	// (0x0005828c) tabs_2_long_active_pane_srt_t1_ParamLimits

0xcac0,	// (0x0005828c) tabs_2_long_active_pane_srt_t1

0xcaae,	// (0x0005827a) bg_active_tab_pane_g1_cp4_srt

0xa446,	// (0x00055c12) bg_active_tab_pane_g2_cp4_srt

0xcab7,	// (0x00058283) bg_active_tab_pane_g3_cp4_srt

0x9352,	// (0x00054b1e) tabs_3_long_active_pane_srt_ParamLimits

0x9352,	// (0x00054b1e) tabs_3_long_active_pane_srt

0x9352,	// (0x00054b1e) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x9352,	// (0x00054b1e) tabs_3_long_passive_pane_cp_srt

0x9352,	// (0x00054b1e) tabs_3_long_passive_pane_srt_ParamLimits

0x9352,	// (0x00054b1e) tabs_3_long_passive_pane_srt

0x9ec6,	// (0x00055692) bg_passive_tab_pane_cp5_srt_ParamLimits

0x9ec6,	// (0x00055692) bg_passive_tab_pane_cp5_srt

0xa492,	// (0x00055c5e) bg_passive_tab_pane_g1_cp5_srt

0xa446,	// (0x00055c12) bg_passive_tab_pane_g2_cp5_srt

0xa49b,	// (0x00055c67) bg_passive_tab_pane_g3_cp5_srt

0x939c,	// (0x00054b68) bg_active_tab_pane_cp5_srt_ParamLimits

0x939c,	// (0x00054b68) bg_active_tab_pane_cp5_srt

0xca98,	// (0x00058264) tabs_3_long_active_pane_srt_t1_ParamLimits

0xca98,	// (0x00058264) tabs_3_long_active_pane_srt_t1

0xa492,	// (0x00055c5e) bg_active_tab_pane_g1_cp5_srt

0xa446,	// (0x00055c12) bg_active_tab_pane_g2_cp5_srt

0xa49b,	// (0x00055c67) bg_active_tab_pane_g3_cp5_srt

0x3526,	// (0x0004ecf2) navi_text_pane_srt_t1

0x351e,	// (0x0004ecea) navi_icon_pane_srt_g1

0xc55c,	// (0x00057d28) midp_editing_number_pane_srt

0xc480,	// (0x00057c4c) midp_ticker_pane_srt

0xc564,	// (0x00057d30) midp_ticker_pane_srt_g1

0xc56c,	// (0x00057d38) midp_ticker_pane_srt_g2

0x0001,

0xf743,	// (0x0005af0f) midp_ticker_pane_srt_g

0xc574,	// (0x00057d40) midp_ticker_pane_srt_t1

0x350f,	// (0x0004ecdb) midp_editing_number_pane_t1_copy1

0xa514,	// (0x00055ce0) listscroll_midp_pane

0xa514,	// (0x00055ce0) midp_form_pane

0xa57f,	// (0x00055d4b) midp_info_popup_window_ParamLimits

0xa57f,	// (0x00055d4b) midp_info_popup_window

0x9dfd,	// (0x000555c9) bg_popup_sub_pane_cp50_ParamLimits

0x9dfd,	// (0x000555c9) bg_popup_sub_pane_cp50

0x264f,	// (0x0004de1b) listscroll_midp_info_pane_ParamLimits

0x264f,	// (0x0004de1b) listscroll_midp_info_pane

0x262f,	// (0x0004ddfb) listscroll_form_midp_pane_ParamLimits

0x262f,	// (0x0004ddfb) listscroll_form_midp_pane

0x263b,	// (0x0004de07) scroll_bar_cp050

0x262f,	// (0x0004ddfb) list_midp_pane

0xcea1,	// (0x0005866d) signal_pane_g2_cp

0x2549,	// (0x0004dd15) listscroll_midp_info_pane_t1_ParamLimits

0x2549,	// (0x0004dd15) listscroll_midp_info_pane_t1

0xb58b,	// (0x00056d57) listscroll_midp_info_pane_t2_ParamLimits

0xb58b,	// (0x00056d57) listscroll_midp_info_pane_t2

0xb5c9,	// (0x00056d95) listscroll_midp_info_pane_t3_ParamLimits

0xb5c9,	// (0x00056d95) listscroll_midp_info_pane_t3

0xb603,	// (0x00056dcf) listscroll_midp_info_pane_t4_ParamLimits

0xb603,	// (0x00056dcf) listscroll_midp_info_pane_t4

0x0003,

0xf7ef,	// (0x0005afbb) listscroll_midp_info_pane_t_ParamLimits

0xf7ef,	// (0x0005afbb) listscroll_midp_info_pane_t

0x9e60,	// (0x0005562c) scroll_pane_cp21

0x24e9,	// (0x0004dcb5) form_midp_field_choice_group_pane

0xb54e,	// (0x00056d1a) form_midp_field_text_pane

0x252f,	// (0x0004dcfb) form_midp_field_time_pane

0x2537,	// (0x0004dd03) form_midp_gauge_slider_pane

0x2540,	// (0x0004dd0c) form_midp_gauge_wait_pane

0x9101,	// (0x000548cd) form_midp_image_pane

0x8c9b,	// (0x00054467) list_single_midp_pane_ParamLimits

0x8c9b,	// (0x00054467) list_single_midp_pane

0xb52c,	// (0x00056cf8) form_midp_field_text_pane_t1

0x2268,	// (0x0004da34) input_focus_pane_cp050

0x24d8,	// (0x0004dca4) list_midp_form_text_pane

0x246d,	// (0x0004dc39) form_midp_field_choice_group_pane_t1

0x247b,	// (0x0004dc47) input_focus_pane_cp051

0x248f,	// (0x0004dc5b) list_midp_choice_pane

0x9101,	// (0x000548cd) status_idle_pane

0x2451,	// (0x0004dc1d) form_midp_field_time_pane_t1

0x8ec2,	// (0x0005468e) wait_anim_pane_g2_copy1

0x245f,	// (0x0004dc2b) form_midp_field_time_pane_t2

0x0001,

0xc4e0,	// (0x00057cac) aid_navinavi_width_2_pane

0xf7ea,	// (0x0005afb6) form_midp_field_time_pane_t

0x9101,	// (0x000548cd) input_focus_pane_cp052

0x9101,	// (0x000548cd) bg_input_focus_pane_cp040

0x2411,	// (0x0004dbdd) form_midp_gauge_slider_pane_t1

0x241f,	// (0x0004dbeb) form_midp_gauge_slider_pane_t2

0xb510,	// (0x00056cdc) form_midp_gauge_slider_pane_t3

0xb51e,	// (0x00056cea) form_midp_gauge_slider_pane_t4

0x0003,

0xf7e1,	// (0x0005afad) form_midp_gauge_slider_pane_t

0x2449,	// (0x0004dc15) form_midp_slider_pane

0x939c,	// (0x00054b68) bg_input_focus_pane_cp041_ParamLimits

0x939c,	// (0x00054b68) bg_input_focus_pane_cp041

0x23de,	// (0x0004dbaa) form_midp_gauge_wait_pane_t1_ParamLimits

0x23de,	// (0x0004dbaa) form_midp_gauge_wait_pane_t1

0x23f0,	// (0x0004dbbc) form_midp_gauge_wait_pane_t2_ParamLimits

0x23f0,	// (0x0004dbbc) form_midp_gauge_wait_pane_t2

0x0001,

0xf7dc,	// (0x0005afa8) form_midp_gauge_wait_pane_t_ParamLimits

0xf7dc,	// (0x0005afa8) form_midp_gauge_wait_pane_t

0x2402,	// (0x0004dbce) form_midp_wait_pane_ParamLimits

0x2402,	// (0x0004dbce) form_midp_wait_pane

0xb4da,	// (0x00056ca6) form_midp_image_pane_g1

0xb4e3,	// (0x00056caf) form_midp_image_pane_t1

0xb4f2,	// (0x00056cbe) form_midp_image_pane_t2

0xb501,	// (0x00056ccd) form_midp_image_pane_t3

0x0002,

0xf7d5,	// (0x0005afa1) form_midp_image_pane_t

0x239f,	// (0x0004db6b) list_single_midp_pane_g1

0xea14,	// (0x0005a1e0) list_single_midp_pane_t1

0xb4c5,	// (0x00056c91) list_midp_form_item_pane_ParamLimits

0xb4c5,	// (0x00056c91) list_midp_form_item_pane

0xc488,	// (0x00057c54) list_midp_form_item_pane_t1

0xc497,	// (0x00057c63) midp_ticker_pane_g1

0xc4a3,	// (0x00057c6f) midp_ticker_pane_g2

0x0001,

0xf729,	// (0x0005aef5) midp_ticker_pane_g

0xc4af,	// (0x00057c7b) midp_ticker_pane_t1

0x375c,	// (0x0004ef28) midp_editing_number_pane_t1

0x373a,	// (0x0004ef06) midp_editing_number_pane

0x3749,	// (0x0004ef15) midp_ticker_pane

0x34ff,	// (0x0004eccb) ai_message_heading_pane

0x9101,	// (0x000548cd) bg_popup_window_pane_cp14

0x3507,	// (0x0004ecd3) listscroll_ai_message_pane

0x3489,	// (0x0004ec55) ai_message_heading_pane_g1_ParamLimits

0x3489,	// (0x0004ec55) ai_message_heading_pane_g1

0xca60,	// (0x0005822c) ai_message_heading_pane_g2_ParamLimits

0xca60,	// (0x0005822c) ai_message_heading_pane_g2

0x34a1,	// (0x0004ec6d) ai_message_heading_pane_g3_ParamLimits

0x34a1,	// (0x0004ec6d) ai_message_heading_pane_g3

0x34ad,	// (0x0004ec79) ai_message_heading_pane_g4_ParamLimits

0x34ad,	// (0x0004ec79) ai_message_heading_pane_g4

0x0003,

0xf916,	// (0x0005b0e2) ai_message_heading_pane_g_ParamLimits

0xf916,	// (0x0005b0e2) ai_message_heading_pane_g

0xca6c,	// (0x00058238) ai_message_heading_pane_t1_ParamLimits

0xca6c,	// (0x00058238) ai_message_heading_pane_t1

0xca86,	// (0x00058252) ai_message_heading_pane_t2_ParamLimits

0xca86,	// (0x00058252) ai_message_heading_pane_t2

0x0001,

0xf91f,	// (0x0005b0eb) ai_message_heading_pane_t_ParamLimits

0xf91f,	// (0x0005b0eb) ai_message_heading_pane_t

0x34e5,	// (0x0004ecb1) bg_popup_heading_pane_cp1_ParamLimits

0x34e5,	// (0x0004ecb1) bg_popup_heading_pane_cp1

0x3477,	// (0x0004ec43) list_ai_message_pane_ParamLimits

0x3477,	// (0x0004ec43) list_ai_message_pane

0x9e60,	// (0x0005562c) scroll_pane_cp10

0xca58,	// (0x00058224) list_ai_message_pane_g1

0x341b,	// (0x0004ebe7) list_ai_message_pane_g2

0x0001,

0xf8f3,	// (0x0005b0bf) list_ai_message_pane_g

0x3423,	// (0x0004ebef) list_ai_message_pane_t1_ParamLimits

0x3423,	// (0x0004ebef) list_ai_message_pane_t1

0x3438,	// (0x0004ec04) list_ai_message_pane_t2_ParamLimits

0x3438,	// (0x0004ec04) list_ai_message_pane_t2

0x344d,	// (0x0004ec19) list_ai_message_pane_t3_ParamLimits

0x344d,	// (0x0004ec19) list_ai_message_pane_t3

0x3462,	// (0x0004ec2e) list_ai_message_pane_t4_ParamLimits

0x3462,	// (0x0004ec2e) list_ai_message_pane_t4

0x0003,

0xf8f8,	// (0x0005b0c4) list_ai_message_pane_t_ParamLimits

0xf8f8,	// (0x0005b0c4) list_ai_message_pane_t

0xca34,	// (0x00058200) cell_ai_soft_ind_pane_ParamLimits

0xca34,	// (0x00058200) cell_ai_soft_ind_pane

0xc4c1,	// (0x00057c8d) cell_ai_soft_ind_pane_g1_ParamLimits

0xc4c1,	// (0x00057c8d) cell_ai_soft_ind_pane_g1

0x9101,	// (0x000548cd) grid_highlight_cp1

0xc4ce,	// (0x00057c9a) text_secondary_cp56_ParamLimits

0xc4ce,	// (0x00057c9a) text_secondary_cp56

0x33d3,	// (0x0004eb9f) example_general_pane_ParamLimits

0x33d3,	// (0x0004eb9f) example_general_pane

0x33df,	// (0x0004ebab) example_parent_pane_g1_ParamLimits

0x33df,	// (0x0004ebab) example_parent_pane_g1

0x33eb,	// (0x0004ebb7) example_parent_pane_t1_ParamLimits

0x33eb,	// (0x0004ebb7) example_parent_pane_t1

0xac49,	// (0x00056415) popup_preview_text_window_ParamLimits

0xac49,	// (0x00056415) popup_preview_text_window

0xc3e3,	// (0x00057baf) list_single_pane_cp2_g4

0x97d4,	// (0x00054fa0) bg_popup_preview_window_pane_ParamLimits

0x97d4,	// (0x00054fa0) bg_popup_preview_window_pane

0xc996,	// (0x00058162) popup_preview_text_window_t1_ParamLimits

0xc996,	// (0x00058162) popup_preview_text_window_t1

0x314b,	// (0x0004e917) popup_preview_text_window_t2_ParamLimits

0x314b,	// (0x0004e917) popup_preview_text_window_t2

0x3194,	// (0x0004e960) popup_preview_text_window_t3_ParamLimits

0x3194,	// (0x0004e960) popup_preview_text_window_t3

0x31d9,	// (0x0004e9a5) popup_preview_text_window_t4_ParamLimits

0x31d9,	// (0x0004e9a5) popup_preview_text_window_t4

0x0004,

0xf8c7,	// (0x0005b093) popup_preview_text_window_t_ParamLimits

0xf8c7,	// (0x0005b093) popup_preview_text_window_t

0x3257,	// (0x0004ea23) scroll_pane_cp11

0x21dc,	// (0x0004d9a8) bg_popup_preview_window_pane_g1

0xc956,	// (0x00058122) bg_popup_preview_window_pane_g2

0xc95e,	// (0x0005812a) bg_popup_preview_window_pane_g3

0xc966,	// (0x00058132) bg_popup_preview_window_pane_g4

0xc96e,	// (0x0005813a) bg_popup_preview_window_pane_g5

0xc976,	// (0x00058142) bg_popup_preview_window_pane_g6

0xc97e,	// (0x0005814a) bg_popup_preview_window_pane_g7

0xc986,	// (0x00058152) bg_popup_preview_window_pane_g8

0xe7c2,	// (0x00059f8e) aid_popup_width_pane

0xabc5,	// (0x00056391) popup_midp_note_alarm_window_ParamLimits

0xabc5,	// (0x00056391) popup_midp_note_alarm_window

0x9cd6,	// (0x000554a2) data_form_pane_ParamLimits

0x8ad1,	// (0x0005429d) form_field_data_pane_g1

0x8adb,	// (0x000542a7) form_field_data_pane_t1_ParamLimits

0x9ce2,	// (0x000554ae) input_focus_pane_ParamLimits

0xe89a,	// (0x0005a066) data_form_wide_pane_ParamLimits

0xe8ab,	// (0x0005a077) form_field_data_wide_pane_g1

0xe8b7,	// (0x0005a083) form_field_data_wide_pane_t1_ParamLimits

0x9a78,	// (0x00055244) input_focus_pane_cp6_ParamLimits

0x9e0b,	// (0x000555d7) input_popup_find_pane_g1_ParamLimits

0x9e0b,	// (0x000555d7) input_popup_find_pane_g1

0xf1f1,	// (0x0005a9bd) aid_navi_side_left_pane

0xf206,	// (0x0005a9d2) aid_navi_side_right_pane

0x2b16,	// (0x0004e2e2) bg_popup_window_pane_cp30_ParamLimits

0x2b16,	// (0x0004e2e2) bg_popup_window_pane_cp30

0x2b90,	// (0x0004e35c) popup_midp_note_alarm_window_g1_ParamLimits

0x2b90,	// (0x0004e35c) popup_midp_note_alarm_window_g1

0x2bc0,	// (0x0004e38c) popup_midp_note_alarm_window_t1_ParamLimits

0x2bc0,	// (0x0004e38c) popup_midp_note_alarm_window_t1

0xc79f,	// (0x00057f6b) popup_midp_note_alarm_window_t2_ParamLimits

0xc79f,	// (0x00057f6b) popup_midp_note_alarm_window_t2

0xc84d,	// (0x00058019) popup_midp_note_alarm_window_t3_ParamLimits

0xc84d,	// (0x00058019) popup_midp_note_alarm_window_t3

0xc875,	// (0x00058041) popup_midp_note_alarm_window_t4_ParamLimits

0xc875,	// (0x00058041) popup_midp_note_alarm_window_t4

0x2d57,	// (0x0004e523) popup_midp_note_alarm_window_t5_ParamLimits

0x2d57,	// (0x0004e523) popup_midp_note_alarm_window_t5

0x000a,

0xf864,	// (0x0005b030) popup_midp_note_alarm_window_t_ParamLimits

0xf864,	// (0x0005b030) popup_midp_note_alarm_window_t

0x2e03,	// (0x0004e5cf) wait_bar_pane_cp1_ParamLimits

0x2e03,	// (0x0004e5cf) wait_bar_pane_cp1

0x9101,	// (0x000548cd) wait_anim_pane_copy1

0x9101,	// (0x000548cd) wait_border_pane_copy1

0x280c,	// (0x0004dfd8) wait_border_pane_g1_copy1

0xe8d1,	// (0x0005a09d) form_field_popup_pane_g1

0x8af5,	// (0x000542c1) form_field_popup_pane_t1_ParamLimits

0x9ce2,	// (0x000554ae) input_focus_pane_cp7_ParamLimits

0x9d10,	// (0x000554dc) list_form_pane_ParamLimits

0xe8d9,	// (0x0005a0a5) form_field_popup_wide_pane_g1

0xe8e1,	// (0x0005a0ad) form_field_popup_wide_pane_t1_ParamLimits

0x9ce2,	// (0x000554ae) input_focus_pane_cp8_ParamLimits

0x9d1c,	// (0x000554e8) list_form_wide_pane_ParamLimits

0x3897,	// (0x0004f063) aid_size_cell_graphic_pane

0x8b74,	// (0x00054340) data_form_pane_t1_ParamLimits

0x8cc3,	// (0x0005448f) data_form_wide_pane_t1_ParamLimits

0xb08c,	// (0x00056858) bg_status_flat_pane

0x928e,	// (0x00054a5a) title_pane_t1_ParamLimits

0x931a,	// (0x00054ae6) title_pane_t2_ParamLimits

0x9340,	// (0x00054b0c) title_pane_t3_ParamLimits

0xf532,	// (0x0005acfe) title_pane_t_ParamLimits

0xa31f,	// (0x00055aeb) level_1_signal_ParamLimits

0xbfc4,	// (0x00057790) level_2_signal_ParamLimits

0xbfd1,	// (0x0005779d) level_3_signal_ParamLimits

0xbfde,	// (0x000577aa) level_4_signal_ParamLimits

0xbfeb,	// (0x000577b7) level_5_signal_ParamLimits

0xbff8,	// (0x000577c4) level_6_signal_ParamLimits

0xc005,	// (0x000577d1) level_7_signal_ParamLimits

0xa31f,	// (0x00055aeb) level_1_battery_ParamLimits

0xbfc4,	// (0x00057790) level_2_battery_ParamLimits

0xbfd1,	// (0x0005779d) level_3_battery_ParamLimits

0xbfde,	// (0x000577aa) level_4_battery_ParamLimits

0xbfeb,	// (0x000577b7) level_5_battery_ParamLimits

0xbff8,	// (0x000577c4) level_6_battery_ParamLimits

0xc005,	// (0x000577d1) level_7_battery_ParamLimits

0x2a1b,	// (0x0004e1e7) bg_status_flat_pane_g1

0x2a23,	// (0x0004e1ef) bg_status_flat_pane_g2

0x2a2b,	// (0x0004e1f7) bg_status_flat_pane_g3

0x2a33,	// (0x0004e1ff) bg_status_flat_pane_g4

0x2a3b,	// (0x0004e207) bg_status_flat_pane_g5

0x2a43,	// (0x0004e20f) bg_status_flat_pane_g6

0x2a4b,	// (0x0004e217) bg_status_flat_pane_g7

0x9368,	// (0x00054b34) tabs_3_active_pane_t1_ParamLimits

0x9368,	// (0x00054b34) tabs_3_passive_pane_t1_ParamLimits

0x9382,	// (0x00054b4e) tabs_4_active_pane_t1_ParamLimits

0x9382,	// (0x00054b4e) tabs_4_1_passive_pane_t1_ParamLimits

0x9ea1,	// (0x0005566d) tabs_2_active_pane_t1_ParamLimits

0x9ea1,	// (0x0005566d) tabs_2_passive_pane_t1_ParamLimits

0x939c,	// (0x00054b68) bg_active_tab_pane_cp4_ParamLimits

0x9eb3,	// (0x0005567f) tabs_2_long_active_pane_t1_ParamLimits

0x9ec6,	// (0x00055692) bg_passive_tab_pane_cp4_ParamLimits

0x09b4,	// (0x0004c180) list_single_midp_graphic_pane_t1_ParamLimits

0x939c,	// (0x00054b68) bg_active_tab_pane_cp5_ParamLimits

0x9ed2,	// (0x0005569e) tabs_3_long_active_pane_t1_ParamLimits

0x9ec6,	// (0x00055692) bg_passive_tab_pane_cp5_ParamLimits

0x09b4,	// (0x0004c180) list_single_midp_graphic_pane_t1

0xb08c,	// (0x00056858) bg_status_flat_pane_ParamLimits

0x0790,	// (0x0004bf5c) indicator_pane_cp2_ParamLimits

0x0790,	// (0x0004bf5c) indicator_pane_cp2

0xb20a,	// (0x000569d6) navi_pane_srt_ParamLimits

0xb20a,	// (0x000569d6) navi_pane_srt

0x08df,	// (0x0004c0ab) popup_clock_digital_analogue_window_cp1

0x953c,	// (0x00054d08) indicator_pane_t1

0xc480,	// (0x00057c4c) copy_highlight_pane

0xc480,	// (0x00057c4c) cursor_graphics_pane

0xc480,	// (0x00057c4c) graphic_within_text_pane

0xc480,	// (0x00057c4c) link_highlight_pane

0x321a,	// (0x0004e9e6) popup_preview_text_window_t5_ParamLimits

0x321a,	// (0x0004e9e6) popup_preview_text_window_t5

0xc4e8,	// (0x00057cb4) cursor_digital_pane

0xc4e8,	// (0x00057cb4) cursor_primary_pane

0xc4f9,	// (0x00057cc5) cursor_primary_small_pane

0xc501,	// (0x00057ccd) cursor_secondary_pane

0xc509,	// (0x00057cd5) cursor_title_pane

0xc4e8,	// (0x00057cb4) link_highlight_digital_pane

0xc4f0,	// (0x00057cbc) link_highlight_primary_pane

0xc4f9,	// (0x00057cc5) link_highlight_primary_small_pane

0xc501,	// (0x00057ccd) link_highlight_secondary_pane

0xc509,	// (0x00057cd5) link_highlight_title_pane

0xc4e8,	// (0x00057cb4) copy_highlight_digital_pane

0xc4e8,	// (0x00057cb4) copy_highlight_primary_pane

0xc4f9,	// (0x00057cc5) copy_highlight_primary_small_pane

0xc501,	// (0x00057ccd) copy_highlight_secondary_pane

0xc509,	// (0x00057cd5) copy_highlight_title_pane

0xc501,	// (0x00057ccd) graphic_text_digital_pane

0x2ab9,	// (0x0004e285) graphic_text_primary_pane

0x2ac2,	// (0x0004e28e) graphic_text_primary_small_pane

0xc4f9,	// (0x00057cc5) graphic_text_secondary_pane

0xc4e8,	// (0x00057cb4) graphic_text_title_pane

0xa5d0,	// (0x00055d9c) cursor_primary_pane_g1

0x2aab,	// (0x0004e277) cursor_text_primary_t1

0xc795,	// (0x00057f61) cursor_primary_small_pane_g1

0x2a9d,	// (0x0004e269) cursor_text_primary_small_t1

0xc78b,	// (0x00057f57) cursor_primary_small_pane_g1_copy1

0x2a85,	// (0x0004e251) cursor_text_primary_small_t1_copy1

0x2a63,	// (0x0004e22f) cursor_text_title_t1

0xc781,	// (0x00057f4d) cursor_title_pane_g1

0xa5d0,	// (0x00055d9c) cursor_digital_pane_g1

0xc511,	// (0x00057cdd) cursor_text_digital_t1

0xc51f,	// (0x00057ceb) link_highlight_primary_pane_g1

0x2a0c,	// (0x0004e1d8) link_highlight_primary_pane_t1

0xc51f,	// (0x00057ceb) link_highlight_primary_small_pane_g1

0xc527,	// (0x00057cf3) link_highlight_primary_small_pane_t1

0xc51f,	// (0x00057ceb) link_highlight_secondary_pane_g1

0xc536,	// (0x00057d02) link_highlight_secondary_pane_t1

0x2971,	// (0x0004e13d) link_highlight_title_pane_g1

0x2988,	// (0x0004e154) link_highlight_title_pane_t1

0x2971,	// (0x0004e13d) link_highlight_digital_pane_g1

0x2979,	// (0x0004e145) link_highlight_digital_pane_t1

0x282b,	// (0x0004dff7) copy_highlight_primary_pane_g1

0x2851,	// (0x0004e01d) copy_highlight_primary_pane_t1

0x282b,	// (0x0004dff7) copy_highlight_primary_small_pane_g1

0x2842,	// (0x0004e00e) copy_highlight_primary_small_pane_t1

0xc545,	// (0x00057d11) copy_highlight_secondary_pane_g1

0xc54d,	// (0x00057d19) copy_highlight_secondary_pane_t1

0x282b,	// (0x0004dff7) copy_highlight_title_pane_g1

0x2833,	// (0x0004dfff) copy_highlight_title_pane_t1

0x282b,	// (0x0004dff7) copy_highlight_digital_pane_g1

0x3a65,	// (0x0004f231) copy_highlight_digital_pane_t1

0x39b9,	// (0x0004f185) graphic_text_primary_pane_g1

0x3a49,	// (0x0004f215) graphic_text_primary_pane_t1

0x3a57,	// (0x0004f223) graphic_text_primary_pane_t2

0x0001,

0xf993,	// (0x0005b15f) graphic_text_primary_pane_t

0x3a25,	// (0x0004f1f1) graphic_text_primary_small_pane_g1

0x3a2d,	// (0x0004f1f9) graphic_text_primary_small_pane_t1

0x3a3b,	// (0x0004f207) graphic_text_primary_small_pane_t2

0x0001,

0xf98e,	// (0x0005b15a) graphic_text_primary_small_pane_t

0x3a01,	// (0x0004f1cd) graphic_text_secondary_pane_g1

0x3a09,	// (0x0004f1d5) graphic_text_secondary_pane_t1

0x3a17,	// (0x0004f1e3) graphic_text_secondary_pane_t2

0x0001,

0xf989,	// (0x0005b155) graphic_text_secondary_pane_t

0x39dd,	// (0x0004f1a9) graphic_text_title_pane_g1

0x39e5,	// (0x0004f1b1) graphic_text_title_pane_t1

0x39f3,	// (0x0004f1bf) graphic_text_title_pane_t2

0x0001,

0xf984,	// (0x0005b150) graphic_text_title_pane_t

0x39b9,	// (0x0004f185) graphic_text_digital_pane_g1

0x39c1,	// (0x0004f18d) graphic_text_digital_pane_t1

0x39cf,	// (0x0004f19b) graphic_text_digital_pane_t2

0x0001,

0xf97f,	// (0x0005b14b) graphic_text_digital_pane_t

0x939c,	// (0x00054b68) navi_icon_pane_srt_ParamLimits

0x939c,	// (0x00054b68) navi_icon_pane_srt

0x9101,	// (0x000548cd) navi_midp_pane_srt

0x9101,	// (0x000548cd) navi_navi_pane_srt

0x939c,	// (0x00054b68) navi_text_pane_srt_ParamLimits

0x939c,	// (0x00054b68) navi_text_pane_srt

0x3984,	// (0x0004f150) navi_navi_icon_text_pane_srt

0x398c,	// (0x0004f158) navi_navi_pane_srt_g1_ParamLimits

0x398c,	// (0x0004f158) navi_navi_pane_srt_g1

0x399e,	// (0x0004f16a) navi_navi_pane_srt_g2_ParamLimits

0x399e,	// (0x0004f16a) navi_navi_pane_srt_g2

0x0001,

0xf97a,	// (0x0005b146) navi_navi_pane_srt_g_ParamLimits

0xf97a,	// (0x0005b146) navi_navi_pane_srt_g

0x39b0,	// (0x0004f17c) navi_navi_tabs_pane_srt

0x3984,	// (0x0004f150) navi_navi_text_pane_srt

0x3984,	// (0x0004f150) navi_navi_volume_pane_srt

0x3975,	// (0x0004f141) navi_navi_text_pane_srt_t1

0x0ddf,	// (0x0004c5ab) navi_navi_volume_pane_srt_g1

0x0de7,	// (0x0004c5b3) volume_small_pane_srt_ParamLimits

0x0de7,	// (0x0004c5b3) volume_small_pane_srt

0xf471,	// (0x0005ac3d) volume_small_pane_srt_g1_ParamLimits

0xf471,	// (0x0005ac3d) volume_small_pane_srt_g1

0xf481,	// (0x0005ac4d) volume_small_pane_srt_g2_ParamLimits

0xf481,	// (0x0005ac4d) volume_small_pane_srt_g2

0xf492,	// (0x0005ac5e) volume_small_pane_srt_g3_ParamLimits

0xf492,	// (0x0005ac5e) volume_small_pane_srt_g3

0xf4a3,	// (0x0005ac6f) volume_small_pane_srt_g4_ParamLimits

0xf4a3,	// (0x0005ac6f) volume_small_pane_srt_g4

0xf4b4,	// (0x0005ac80) volume_small_pane_srt_g5_ParamLimits

0xf4b4,	// (0x0005ac80) volume_small_pane_srt_g5

0xf4c5,	// (0x0005ac91) volume_small_pane_srt_g6_ParamLimits

0xf4c5,	// (0x0005ac91) volume_small_pane_srt_g6

0xf4d6,	// (0x0005aca2) volume_small_pane_srt_g7_ParamLimits

0xf4d6,	// (0x0005aca2) volume_small_pane_srt_g7

0xf4e7,	// (0x0005acb3) volume_small_pane_srt_g8_ParamLimits

0xf4e7,	// (0x0005acb3) volume_small_pane_srt_g8

0xf4f8,	// (0x0005acc4) volume_small_pane_srt_g9_ParamLimits

0xf4f8,	// (0x0005acc4) volume_small_pane_srt_g9

0xf509,	// (0x0005acd5) volume_small_pane_srt_g10_ParamLimits

0xf509,	// (0x0005acd5) volume_small_pane_srt_g10

0x0009,

0xf72e,	// (0x0005aefa) volume_small_pane_srt_g_ParamLimits

0xf72e,	// (0x0005aefa) volume_small_pane_srt_g

0x987d,	// (0x00055049) query_popup_data_pane_cp2

0x395b,	// (0x0004f127) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x395b,	// (0x0004f127) navi_navi_icon_text_pane_srt_t1

0x2ab9,	// (0x0004e285) navi_tabs_2_long_pane_srt

0x2ab9,	// (0x0004e285) navi_tabs_2_pane_srt

0x2ab9,	// (0x0004e285) navi_tabs_3_long_pane_srt

0x2ab9,	// (0x0004e285) navi_tabs_3_pane_srt

0x2ab9,	// (0x0004e285) navi_tabs_4_pane_srt

0xb754,	// (0x00056f20) tabs_2_active_pane_srt_ParamLimits

0xb754,	// (0x00056f20) tabs_2_active_pane_srt

0xb764,	// (0x00056f30) tabs_2_passive_pane_srt_ParamLimits

0xb764,	// (0x00056f30) tabs_2_passive_pane_srt

0x2268,	// (0x0004da34) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2268,	// (0x0004da34) bg_passive_tab_pane_cp1_srt

0xcda0,	// (0x0005856c) bg_passive_tab_pane_g1_cp1_srt

0xa446,	// (0x00055c12) bg_passive_tab_pane_g2_cp1_srt

0xcda9,	// (0x00058575) bg_passive_tab_pane_g3_cp1_srt

0x9352,	// (0x00054b1e) bg_active_tab_pane_cp1_srt_ParamLimits

0x9352,	// (0x00054b1e) bg_active_tab_pane_cp1_srt

0xcdb2,	// (0x0005857e) tabs_2_active_pane_srt_g1

0xcdba,	// (0x00058586) tabs_2_active_pane_srt_t1_ParamLimits

0xcdba,	// (0x00058586) tabs_2_active_pane_srt_t1

0xcda0,	// (0x0005856c) bg_active_tab_pane_g1_cp1_srt

0xa446,	// (0x00055c12) bg_active_tab_pane_g2_cp1_srt

0xcda9,	// (0x00058575) bg_active_tab_pane_g3_cp1_srt

0xb721,	// (0x00056eed) tabs_3_active_pane_srt_ParamLimits

0xb721,	// (0x00056eed) tabs_3_active_pane_srt

0xb732,	// (0x00056efe) tabs_3_passive_pane_cp_srt_ParamLimits

0xb732,	// (0x00056efe) tabs_3_passive_pane_cp_srt

0xb743,	// (0x00056f0f) tabs_3_passive_pane_srt_ParamLimits

0xb743,	// (0x00056f0f) tabs_3_passive_pane_srt

0x2268,	// (0x0004da34) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2268,	// (0x0004da34) bg_passive_tab_pane_cp2_srt

0xa5da,	// (0x00055da6) bg_passive_tab_pane_g1_cp2_srt

0xa446,	// (0x00055c12) bg_passive_tab_pane_g2_cp2_srt

0xa5e3,	// (0x00055daf) bg_passive_tab_pane_g3_cp2_srt

0x9352,	// (0x00054b1e) bg_active_tab_pane_cp2_srt_ParamLimits

0x9352,	// (0x00054b1e) bg_active_tab_pane_cp2_srt

0xcd82,	// (0x0005854e) tabs_3_active_pane_srt_g1

0xcd8a,	// (0x00058556) tabs_3_active_pane_srt_t1_ParamLimits

0xcd8a,	// (0x00058556) tabs_3_active_pane_srt_t1

0xa5da,	// (0x00055da6) bg_active_tab_pane_g1_cp2_srt

0xa446,	// (0x00055c12) bg_active_tab_pane_g2_cp2_srt

0xa5e3,	// (0x00055daf) bg_active_tab_pane_g3_cp2_srt

0x0d44,	// (0x0004c510) tabs_4_active_pane_srt_ParamLimits

0x0d44,	// (0x0004c510) tabs_4_active_pane_srt

0x0d56,	// (0x0004c522) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0d56,	// (0x0004c522) tabs_4_passive_pane_cp2_srt

0x003b,	// (0x0004b807) aid_size_cell_toolbar

0x35b7,	// (0x0004ed83) main_idle_act_pane_ParamLimits

0x01f2,	// (0x0004b9be) popup_large_graphic_colour_window_ParamLimits

0xaefb,	// (0x000566c7) popup_toolbar_window_ParamLimits

0xaefb,	// (0x000566c7) popup_toolbar_window

0x376b,	// (0x0004ef37) list_single_graphic_2heading_pane_ParamLimits

0x376b,	// (0x0004ef37) list_single_graphic_2heading_pane

0xa07f,	// (0x0005584b) aid_size_cell_apps_grid_lsc_pane

0xa091,	// (0x0005585d) aid_size_cell_apps_grid_prt_pane

0x9ec6,	// (0x00055692) bg_wml_button_pane_cp1_ParamLimits

0x9ec6,	// (0x00055692) bg_wml_button_pane_cp1

0xb52c,	// (0x00056cf8) form_midp_field_text_pane_t1_ParamLimits

0x2268,	// (0x0004da34) input_focus_pane_cp050_ParamLimits

0x24d8,	// (0x0004dca4) list_midp_form_text_pane_ParamLimits

0x247b,	// (0x0004dc47) input_focus_pane_cp051_ParamLimits

0x248f,	// (0x0004dc5b) list_midp_choice_pane_ParamLimits

0xb491,	// (0x00056c5d) list_single_2graphic_pane_cp3_ParamLimits

0xb491,	// (0x00056c5d) list_single_2graphic_pane_cp3

0xb4a5,	// (0x00056c71) list_single_midp_graphic_pane_ParamLimits

0xb4a5,	// (0x00056c71) list_single_midp_graphic_pane

0xe918,	// (0x0005a0e4) list_single_graphic_2heading_pane_g1_ParamLimits

0xe918,	// (0x0005a0e4) list_single_graphic_2heading_pane_g1

0xe924,	// (0x0005a0f0) list_single_graphic_2heading_pane_g4_ParamLimits

0xe924,	// (0x0005a0f0) list_single_graphic_2heading_pane_g4

0xe930,	// (0x0005a0fc) list_single_graphic_2heading_pane_g5_ParamLimits

0xe930,	// (0x0005a0fc) list_single_graphic_2heading_pane_g5

0x0002,

0xf781,	// (0x0005af4d) list_single_graphic_2heading_pane_g_ParamLimits

0xf781,	// (0x0005af4d) list_single_graphic_2heading_pane_g

0xe93c,	// (0x0005a108) list_single_graphic_2heading_pane_t1_ParamLimits

0xe93c,	// (0x0005a108) list_single_graphic_2heading_pane_t1

0xe950,	// (0x0005a11c) list_single_graphic_2heading_pane_t2_ParamLimits

0xe950,	// (0x0005a11c) list_single_graphic_2heading_pane_t2

0xe96a,	// (0x0005a136) list_single_graphic_2heading_pane_t3_ParamLimits

0xe96a,	// (0x0005a136) list_single_graphic_2heading_pane_t3

0x0002,

0xf788,	// (0x0005af54) list_single_graphic_2heading_pane_t_ParamLimits

0xf788,	// (0x0005af54) list_single_graphic_2heading_pane_t

0x211a,	// (0x0004d8e6) bg_popup_sub_pane_cp2

0x2144,	// (0x0004d910) grid_toobar_pane

0x092b,	// (0x0004c0f7) cell_toolbar_pane_ParamLimits

0x092b,	// (0x0004c0f7) cell_toolbar_pane

0x2180,	// (0x0004d94c) cell_toolbar_pane_g1_ParamLimits

0x2180,	// (0x0004d94c) cell_toolbar_pane_g1

0xb3a9,	// (0x00056b75) cell_toolbar_pane_g2_ParamLimits

0xb3a9,	// (0x00056b75) cell_toolbar_pane_g2

0x0001,

0xf78f,	// (0x0005af5b) cell_toolbar_pane_g_ParamLimits

0xf78f,	// (0x0005af5b) cell_toolbar_pane_g

0x21b6,	// (0x0004d982) grid_highlight_pane_cp2_ParamLimits

0x21b6,	// (0x0004d982) grid_highlight_pane_cp2

0x21d0,	// (0x0004d99c) toolbar_button_pane

0x21dc,	// (0x0004d9a8) toolbar_button_pane_g1

0x21e4,	// (0x0004d9b0) toolbar_button_pane_g2

0x21ec,	// (0x0004d9b8) toolbar_button_pane_g3

0x21f4,	// (0x0004d9c0) toolbar_button_pane_g4

0x21fc,	// (0x0004d9c8) toolbar_button_pane_g5

0x2204,	// (0x0004d9d0) toolbar_button_pane_g6

0x220c,	// (0x0004d9d8) toolbar_button_pane_g7

0x2214,	// (0x0004d9e0) toolbar_button_pane_g8

0x221c,	// (0x0004d9e8) toolbar_button_pane_g9

0x0009,

0xf794,	// (0x0005af60) toolbar_button_pane_g

0x096f,	// (0x0004c13b) list_single_2graphic_pane_g1_cp3_ParamLimits

0x096f,	// (0x0004c13b) list_single_2graphic_pane_g1_cp3

0xb3bd,	// (0x00056b89) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb3bd,	// (0x00056b89) list_single_2graphic_pane_g2_cp3

0xc2e1,	// (0x00057aad) list_single_2graphic_pane_g3_cp3

0x098c,	// (0x0004c158) list_single_2graphic_pane_g4_cp3_ParamLimits

0x098c,	// (0x0004c158) list_single_2graphic_pane_g4_cp3

0xb3ce,	// (0x00056b9a) list_single_2graphic_pane_t1_cp3_ParamLimits

0xb3ce,	// (0x00056b9a) list_single_2graphic_pane_t1_cp3

0xc2d5,	// (0x00057aa1) list_single_midp_graphic_pane_g2_ParamLimits

0xc2d5,	// (0x00057aa1) list_single_midp_graphic_pane_g2

0xe908,	// (0x0005a0d4) aid_zoom_text_primary

0x0043,	// (0x0004b80f) aid_zoom_text_secondary

0xc5c2,	// (0x00057d8e) status_small_pane_g7_ParamLimits

0xc5c2,	// (0x00057d8e) status_small_pane_g7

0xa63f,	// (0x00055e0b) status_small_pane_t1_ParamLimits

0x925e,	// (0x00054a2a) title_pane_g2

0x0003,

0xf529,	// (0x0005acf5) title_pane_g

0x9925,	// (0x000550f1) aid_size_cell_colour_1_pane_ParamLimits

0x9925,	// (0x000550f1) aid_size_cell_colour_1_pane

0x9939,	// (0x00055105) aid_size_cell_colour_2_pane_ParamLimits

0x9939,	// (0x00055105) aid_size_cell_colour_2_pane

0x994d,	// (0x00055119) aid_size_cell_colour_3_pane_ParamLimits

0x994d,	// (0x00055119) aid_size_cell_colour_3_pane

0x9961,	// (0x0005512d) aid_size_cell_colour_4_pane_ParamLimits

0x9961,	// (0x0005512d) aid_size_cell_colour_4_pane

0xf12e,	// (0x0005a8fa) title_pane_stacon_g1_ParamLimits

0xf12e,	// (0x0005a8fa) title_pane_stacon_g1

0x28a8,	// (0x0004e074) popup_note_wait_window_g3_ParamLimits

0x28a8,	// (0x0004e074) popup_note_wait_window_g3

0x291e,	// (0x0004e0ea) popup_note_wait_window_t5_ParamLimits

0x291e,	// (0x0004e0ea) popup_note_wait_window_t5

0x9101,	// (0x000548cd) main_feb_china_hwr_fs_writing_pane

0xa8af,	// (0x0005607b) popup_feb_china_hwr_fs_window_ParamLimits

0xa8af,	// (0x0005607b) popup_feb_china_hwr_fs_window

0xb3ea,	// (0x00056bb6) aid_size_cell_hwr_fs_ParamLimits

0xb3ea,	// (0x00056bb6) aid_size_cell_hwr_fs

0x2268,	// (0x0004da34) bg_popup_sub_pane_cp3_ParamLimits

0x2268,	// (0x0004da34) bg_popup_sub_pane_cp3

0xb3ff,	// (0x00056bcb) grid_hwr_fs_pane_ParamLimits

0xb3ff,	// (0x00056bcb) grid_hwr_fs_pane

0x09f7,	// (0x0004c1c3) linegrid_hwr_fs_pane_ParamLimits

0x09f7,	// (0x0004c1c3) linegrid_hwr_fs_pane

0xb417,	// (0x00056be3) cell_hwr_fs_pane_ParamLimits

0xb417,	// (0x00056be3) cell_hwr_fs_pane

0x2274,	// (0x0004da40) linegrid_hwr_fs_pane_g1_ParamLimits

0x2274,	// (0x0004da40) linegrid_hwr_fs_pane_g1

0xb43d,	// (0x00056c09) linegrid_hwr_fs_pane_g2_ParamLimits

0xb43d,	// (0x00056c09) linegrid_hwr_fs_pane_g2

0x2292,	// (0x0004da5e) linegrid_hwr_fs_pane_g3_ParamLimits

0x2292,	// (0x0004da5e) linegrid_hwr_fs_pane_g3

0xb44f,	// (0x00056c1b) linegrid_hwr_fs_pane_g4_ParamLimits

0xb44f,	// (0x00056c1b) linegrid_hwr_fs_pane_g4

0x0a43,	// (0x0004c20f) linegrid_hwr_fs_pane_g5_ParamLimits

0x0a43,	// (0x0004c20f) linegrid_hwr_fs_pane_g5

0x0004,

0xf7ba,	// (0x0005af86) linegrid_hwr_fs_pane_g_ParamLimits

0xf7ba,	// (0x0005af86) linegrid_hwr_fs_pane_g

0x229e,	// (0x0004da6a) cell_hwr_fs_pane_g1_ParamLimits

0x229e,	// (0x0004da6a) cell_hwr_fs_pane_g1

0x2054,	// (0x0004d820) cell_hwr_fs_pane_g2_ParamLimits

0x2054,	// (0x0004d820) cell_hwr_fs_pane_g2

0xb469,	// (0x00056c35) cell_hwr_fs_pane_g3_ParamLimits

0xb469,	// (0x00056c35) cell_hwr_fs_pane_g3

0xb476,	// (0x00056c42) cell_hwr_fs_pane_g4_ParamLimits

0xb476,	// (0x00056c42) cell_hwr_fs_pane_g4

0x0003,

0xf7c5,	// (0x0005af91) cell_hwr_fs_pane_g_ParamLimits

0xf7c5,	// (0x0005af91) cell_hwr_fs_pane_g

0xb483,	// (0x00056c4f) cell_hwr_fs_pane_t1

0x9101,	// (0x000548cd) grid_highlight_pane_cp6

0x9101,	// (0x000548cd) main_idle_act2_pane

0x9e47,	// (0x00055613) aid_inside_area_popup_secondary

0xc8b4,	// (0x00058080) aid_inside_area_window_primary_ParamLimits

0xc8b4,	// (0x00058080) aid_inside_area_window_primary

0xcdd8,	// (0x000585a4) ai2_news_ticker_pane

0x3a7c,	// (0x0004f248) aid_size_cell_ai1_link_ParamLimits

0x3a7c,	// (0x0004f248) aid_size_cell_ai1_link

0xcde0,	// (0x000585ac) popup_ai2_data_window_ParamLimits

0xcde0,	// (0x000585ac) popup_ai2_data_window

0x3aac,	// (0x0004f278) popup_ai2_link_window_ParamLimits

0x3aac,	// (0x0004f278) popup_ai2_link_window

0x2268,	// (0x0004da34) bg_popup_sub_pane_cp4_ParamLimits

0x2268,	// (0x0004da34) bg_popup_sub_pane_cp4

0x3ac0,	// (0x0004f28c) grid_ai2_link_pane_ParamLimits

0x3ac0,	// (0x0004f28c) grid_ai2_link_pane

0x3ad7,	// (0x0004f2a3) popup_ai2_link_window_g1_ParamLimits

0x3ad7,	// (0x0004f2a3) popup_ai2_link_window_g1

0x3ae3,	// (0x0004f2af) popup_ai2_link_window_g2_ParamLimits

0x3ae3,	// (0x0004f2af) popup_ai2_link_window_g2

0x0001,

0xf998,	// (0x0005b164) popup_ai2_link_window_g_ParamLimits

0xf998,	// (0x0005b164) popup_ai2_link_window_g

0x3af2,	// (0x0004f2be) ai2_mp_button_pane

0x3afa,	// (0x0004f2c6) ai2_mp_volume_pane

0x247b,	// (0x0004dc47) bg_popup_sub_pane_cp5_ParamLimits

0x247b,	// (0x0004dc47) bg_popup_sub_pane_cp5

0x3b02,	// (0x0004f2ce) heading_ai2_gene_pane_ParamLimits

0x3b02,	// (0x0004f2ce) heading_ai2_gene_pane

0x3b0e,	// (0x0004f2da) list_ai2_gene_pane_ParamLimits

0x3b0e,	// (0x0004f2da) list_ai2_gene_pane

0x3b56,	// (0x0004f322) cell_ai2_link_pane_ParamLimits

0x3b56,	// (0x0004f322) cell_ai2_link_pane

0x3b6c,	// (0x0004f338) cell_ai2_link_pane_g1

0x9101,	// (0x000548cd) grid_highlight_pane_cp7

0x0dfc,	// (0x0004c5c8) ai2_mp_volume_pane_g1

0x3c3c,	// (0x0004f408) ai2_mp_volume_pane_g2

0x3bb1,	// (0x0004f37d) list_ai2_gene_pane_t1

0x3c44,	// (0x0004f410) ai2_mp_volume_pane_g3

0x0002,

0xf9b1,	// (0x0005b17d) ai2_mp_volume_pane_g

0xb774,	// (0x00056f40) volume_small_pane_cp3

0x3c4c,	// (0x0004f418) aid_size_cell_ai2_button

0x3c54,	// (0x0004f420) grid_ai2_button_pane

0x3c5d,	// (0x0004f429) cell_ai2_button_pane_ParamLimits

0x3c5d,	// (0x0004f429) cell_ai2_button_pane

0x8ec2,	// (0x0005468e) cell_ai2_button_pane_g1

0x9101,	// (0x000548cd) grid_highlight_pane_cp8

0x3bfc,	// (0x0004f3c8) ai2_gene_pane_t1_ParamLimits

0x3bfc,	// (0x0004f3c8) ai2_gene_pane_t1

0xa811,	// (0x00055fdd) aid_height_parent_landscape

0xcb0a,	// (0x000582d6) aid_height_set_list

0x35b7,	// (0x0004ed83) aid_size_parent

0x3897,	// (0x0004f063) aid_size_cell_graphic_pane_ParamLimits

0x3b1e,	// (0x0004f2ea) popup_ai2_data_window_g1_ParamLimits

0x3b1e,	// (0x0004f2ea) popup_ai2_data_window_g1

0x3b2a,	// (0x0004f2f6) ai2_news_ticker_pane_g1

0x3b32,	// (0x0004f2fe) ai2_news_ticker_pane_g2

0x0001,

0xf99d,	// (0x0005b169) ai2_news_ticker_pane_g

0x3b3a,	// (0x0004f306) ai2_news_ticker_pane_t1

0x3b48,	// (0x0004f314) ai2_news_ticker_pane_t2

0x0001,

0xf9a2,	// (0x0005b16e) ai2_news_ticker_pane_t

0x3b75,	// (0x0004f341) heading_ai2_gene_pane_g1

0x3b7d,	// (0x0004f349) heading_ai2_gene_pane_t1_ParamLimits

0x3b7d,	// (0x0004f349) heading_ai2_gene_pane_t1

0x3b92,	// (0x0004f35e) list_highlight_pane_cp6

0x3b9a,	// (0x0004f366) ai2_gene_pane_ParamLimits

0x3b9a,	// (0x0004f366) ai2_gene_pane

0x3bbf,	// (0x0004f38b) list_ai2_gene_pane_t2

0x0001,

0xf9a7,	// (0x0005b173) list_ai2_gene_pane_t

0x3bcd,	// (0x0004f399) list_highlight_pane_cp8_ParamLimits

0x3bcd,	// (0x0004f399) list_highlight_pane_cp8

0x3bde,	// (0x0004f3aa) ai2_gene_pane_g1_ParamLimits

0x3bde,	// (0x0004f3aa) ai2_gene_pane_g1

0x3bf0,	// (0x0004f3bc) ai2_gene_pane_g2_ParamLimits

0x3bf0,	// (0x0004f3bc) ai2_gene_pane_g2

0x0001,

0xf9ac,	// (0x0005b178) ai2_gene_pane_g_ParamLimits

0xf9ac,	// (0x0005b178) ai2_gene_pane_g

0x9c30,	// (0x000553fc) scroll_pane_cp12

0xa7ce,	// (0x00055f9a) control_pane_t3_ParamLimits

0xa7ce,	// (0x00055f9a) control_pane_t3

0xa630,	// (0x00055dfc) status_small_pane_g8_ParamLimits

0xa630,	// (0x00055dfc) status_small_pane_g8

0xa972,	// (0x0005613e) popup_find_window_ParamLimits

0xabff,	// (0x000563cb) popup_note_image_window_ParamLimits

0xe80f,	// (0x00059fdb) list_double2_graphic_pane_vc_g1_ParamLimits

0xe80f,	// (0x00059fdb) list_double2_graphic_pane_vc_g1

0xbfb8,	// (0x00057784) list_double2_graphic_pane_vc_g2_ParamLimits

0xbfb8,	// (0x00057784) list_double2_graphic_pane_vc_g2

0x095b,	// (0x0004c127) list_double2_graphic_pane_vc_g3_ParamLimits

0x095b,	// (0x0004c127) list_double2_graphic_pane_vc_g3

0x0002,

0xf59c,	// (0x0005ad68) list_double2_graphic_pane_vc_g_ParamLimits

0xf59c,	// (0x0005ad68) list_double2_graphic_pane_vc_g

0xe81b,	// (0x00059fe7) list_double2_graphic_pane_vc_t1_ParamLimits

0xe81b,	// (0x00059fe7) list_double2_graphic_pane_vc_t1

0xbfb8,	// (0x00057784) list_single_heading_pane_vc_g1_ParamLimits

0xbfb8,	// (0x00057784) list_single_heading_pane_vc_g1

0x095b,	// (0x0004c127) list_single_heading_pane_vc_g2_ParamLimits

0x095b,	// (0x0004c127) list_single_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005ad79) list_single_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005ad79) list_single_heading_pane_vc_g

0xe982,	// (0x0005a14e) list_single_heading_pane_vc_t1_ParamLimits

0xe982,	// (0x0005a14e) list_single_heading_pane_vc_t1

0xe998,	// (0x0005a164) list_single_heading_pane_vc_t2_ParamLimits

0xe998,	// (0x0005a164) list_single_heading_pane_vc_t2

0x0001,

0xf7a9,	// (0x0005af75) list_single_heading_pane_vc_t_ParamLimits

0xf7a9,	// (0x0005af75) list_single_heading_pane_vc_t

0x2224,	// (0x0004d9f0) list_setting_number_pane_vc_g1_ParamLimits

0x2224,	// (0x0004d9f0) list_setting_number_pane_vc_g1

0x2230,	// (0x0004d9fc) list_setting_number_pane_vc_g2_ParamLimits

0x2230,	// (0x0004d9fc) list_setting_number_pane_vc_g2

0x0001,

0xf7ae,	// (0x0005af7a) list_setting_number_pane_vc_g_ParamLimits

0xf7ae,	// (0x0005af7a) list_setting_number_pane_vc_g

0xe9aa,	// (0x0005a176) list_setting_number_pane_vc_t1_ParamLimits

0xe9aa,	// (0x0005a176) list_setting_number_pane_vc_t1

0xe9be,	// (0x0005a18a) list_setting_number_pane_vc_t2_ParamLimits

0xe9be,	// (0x0005a18a) list_setting_number_pane_vc_t2

0xe9da,	// (0x0005a1a6) list_setting_number_pane_vc_t3_ParamLimits

0xe9da,	// (0x0005a1a6) list_setting_number_pane_vc_t3

0x0002,

0xf7b3,	// (0x0005af7f) list_setting_number_pane_vc_t_ParamLimits

0xf7b3,	// (0x0005af7f) list_setting_number_pane_vc_t

0xea04,	// (0x0005a1d0) set_value_pane_vc_ParamLimits

0xea04,	// (0x0005a1d0) set_value_pane_vc

0x376b,	// (0x0004ef37) list_double2_graphic_pane_vc_ParamLimits

0x376b,	// (0x0004ef37) list_double2_graphic_pane_vc

0x0cb5,	// (0x0004c481) list_double2_large_graphic_pane_vc_ParamLimits

0x0cb5,	// (0x0004c481) list_double2_large_graphic_pane_vc

0x376b,	// (0x0004ef37) list_double2_pane_vc_ParamLimits

0x376b,	// (0x0004ef37) list_double2_pane_vc

0x376b,	// (0x0004ef37) list_double_graphic_heading_pane_vc_ParamLimits

0x376b,	// (0x0004ef37) list_double_graphic_heading_pane_vc

0x376b,	// (0x0004ef37) list_double_graphic_pane_vc_ParamLimits

0x376b,	// (0x0004ef37) list_double_graphic_pane_vc

0x376b,	// (0x0004ef37) list_double_heading_pane_vc_ParamLimits

0x376b,	// (0x0004ef37) list_double_heading_pane_vc

0x0cc7,	// (0x0004c493) list_double_large_graphic_pane_vc_ParamLimits

0x0cc7,	// (0x0004c493) list_double_large_graphic_pane_vc

0x376b,	// (0x0004ef37) list_double_number_pane_vc_ParamLimits

0x376b,	// (0x0004ef37) list_double_number_pane_vc

0x376b,	// (0x0004ef37) list_double_pane_vc_ParamLimits

0x376b,	// (0x0004ef37) list_double_pane_vc

0x376b,	// (0x0004ef37) list_double_time_pane_vc_ParamLimits

0x376b,	// (0x0004ef37) list_double_time_pane_vc

0x376b,	// (0x0004ef37) list_setting_number_pane_vc_ParamLimits

0x376b,	// (0x0004ef37) list_setting_number_pane_vc

0x376b,	// (0x0004ef37) list_setting_pane_vc_ParamLimits

0x376b,	// (0x0004ef37) list_setting_pane_vc

0x376b,	// (0x0004ef37) list_single_graphic_heading_pane_vc_ParamLimits

0x376b,	// (0x0004ef37) list_single_graphic_heading_pane_vc

0x376b,	// (0x0004ef37) list_single_heading_pane_vc_ParamLimits

0x376b,	// (0x0004ef37) list_single_heading_pane_vc

0x376b,	// (0x0004ef37) list_single_number_heading_pane_vc_ParamLimits

0x376b,	// (0x0004ef37) list_single_number_heading_pane_vc

0xea23,	// (0x0005a1ef) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xea23,	// (0x0005a1ef) list_double_graphic_heading_pane_vc_g1

0xbfb8,	// (0x00057784) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xbfb8,	// (0x00057784) list_double_graphic_heading_pane_vc_g2

0x095b,	// (0x0004c127) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x095b,	// (0x0004c127) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9b8,	// (0x0005b184) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9b8,	// (0x0005b184) list_double_graphic_heading_pane_vc_g

0xea2f,	// (0x0005a1fb) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xea2f,	// (0x0005a1fb) list_double_graphic_heading_pane_vc_t1

0xea43,	// (0x0005a20f) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xea43,	// (0x0005a20f) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9bf,	// (0x0005b18b) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9bf,	// (0x0005b18b) list_double_graphic_heading_pane_vc_t

0x2224,	// (0x0004d9f0) list_setting_pane_vc_g1_ParamLimits

0x2224,	// (0x0004d9f0) list_setting_pane_vc_g1

0x2230,	// (0x0004d9fc) list_setting_pane_vc_g2_ParamLimits

0x2230,	// (0x0004d9fc) list_setting_pane_vc_g2

0x0001,

0xf7ae,	// (0x0005af7a) list_setting_pane_vc_g_ParamLimits

0xf7ae,	// (0x0005af7a) list_setting_pane_vc_g

0xea5b,	// (0x0005a227) list_setting_pane_vc_t1_ParamLimits

0xea5b,	// (0x0005a227) list_setting_pane_vc_t1

0xea77,	// (0x0005a243) list_setting_pane_vc_t2_ParamLimits

0xea77,	// (0x0005a243) list_setting_pane_vc_t2

0x0001,

0xfa02,	// (0x0005b1ce) list_setting_pane_vc_t_ParamLimits

0xfa02,	// (0x0005b1ce) list_setting_pane_vc_t

0xea04,	// (0x0005a1d0) set_value_pane_cp_vc_ParamLimits

0xea04,	// (0x0005a1d0) set_value_pane_cp_vc

0xbfb8,	// (0x00057784) list_single_number_heading_pane_vc_g1_ParamLimits

0xbfb8,	// (0x00057784) list_single_number_heading_pane_vc_g1

0x095b,	// (0x0004c127) list_single_number_heading_pane_vc_g2_ParamLimits

0x095b,	// (0x0004c127) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005ad79) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005ad79) list_single_number_heading_pane_vc_g

0xe831,	// (0x00059ffd) list_single_number_heading_pane_vc_t1_ParamLimits

0xe831,	// (0x00059ffd) list_single_number_heading_pane_vc_t1

0xea91,	// (0x0005a25d) list_single_number_heading_pane_vc_t2_ParamLimits

0xea91,	// (0x0005a25d) list_single_number_heading_pane_vc_t2

0xeaa7,	// (0x0005a273) list_single_number_heading_pane_vc_t3_ParamLimits

0xeaa7,	// (0x0005a273) list_single_number_heading_pane_vc_t3

0x0002,

0xfa07,	// (0x0005b1d3) list_single_number_heading_pane_vc_t_ParamLimits

0xfa07,	// (0x0005b1d3) list_single_number_heading_pane_vc_t

0xeab9,	// (0x0005a285) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xeab9,	// (0x0005a285) list_single_graphic_heading_pane_vc_g1

0xbfb8,	// (0x00057784) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xbfb8,	// (0x00057784) list_single_graphic_heading_pane_vc_g4

0x095b,	// (0x0004c127) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x095b,	// (0x0004c127) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa0e,	// (0x0005b1da) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa0e,	// (0x0005b1da) list_single_graphic_heading_pane_vc_g

0xe831,	// (0x00059ffd) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xe831,	// (0x00059ffd) list_single_graphic_heading_pane_vc_t1

0xeac5,	// (0x0005a291) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xeac5,	// (0x0005a291) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa15,	// (0x0005b1e1) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa15,	// (0x0005b1e1) list_single_graphic_heading_pane_vc_t

0xbfb8,	// (0x00057784) list_double2_pane_vc_g1_ParamLimits

0xbfb8,	// (0x00057784) list_double2_pane_vc_g1

0x095b,	// (0x0004c127) list_double2_pane_vc_g2_ParamLimits

0x095b,	// (0x0004c127) list_double2_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005ad79) list_double2_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005ad79) list_double2_pane_vc_g

0xead7,	// (0x0005a2a3) list_double2_pane_vc_t1_ParamLimits

0xead7,	// (0x0005a2a3) list_double2_pane_vc_t1

0x0e5e,	// (0x0004c62a) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x0e5e,	// (0x0004c62a) list_double2_large_graphic_pane_vc_g1

0xf0ba,	// (0x0005a886) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xf0ba,	// (0x0005a886) list_double2_large_graphic_pane_vc_g2

0xf0c6,	// (0x0005a892) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xf0c6,	// (0x0005a892) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c5,	// (0x0005ad91) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c5,	// (0x0005ad91) list_double2_large_graphic_pane_vc_g

0xe847,	// (0x0005a013) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xe847,	// (0x0005a013) list_double2_large_graphic_pane_vc_t1

0x0e6a,	// (0x0004c636) list_double_time_pane_vc_g1_ParamLimits

0x0e6a,	// (0x0004c636) list_double_time_pane_vc_g1

0x0e76,	// (0x0004c642) list_double_time_pane_vc_g2_ParamLimits

0x0e76,	// (0x0004c642) list_double_time_pane_vc_g2

0x0001,

0xfa1a,	// (0x0005b1e6) list_double_time_pane_vc_g_ParamLimits

0xfa1a,	// (0x0005b1e6) list_double_time_pane_vc_g

0xeaef,	// (0x0005a2bb) list_double_time_pane_vc_t1_ParamLimits

0xeaef,	// (0x0005a2bb) list_double_time_pane_vc_t1

0xeb13,	// (0x0005a2df) list_double_time_pane_vc_t2_ParamLimits

0xeb13,	// (0x0005a2df) list_double_time_pane_vc_t2

0xeb62,	// (0x0005a32e) list_double_time_pane_vc_t3_ParamLimits

0xeb62,	// (0x0005a32e) list_double_time_pane_vc_t3

0xeb74,	// (0x0005a340) list_double_time_pane_vc_t4_ParamLimits

0xeb74,	// (0x0005a340) list_double_time_pane_vc_t4

0x0003,

0xfa1f,	// (0x0005b1eb) list_double_time_pane_vc_t_ParamLimits

0xfa1f,	// (0x0005b1eb) list_double_time_pane_vc_t

0xbfb8,	// (0x00057784) list_double_pane_vc_g1_ParamLimits

0xbfb8,	// (0x00057784) list_double_pane_vc_g1

0x095b,	// (0x0004c127) list_double_pane_vc_g2_ParamLimits

0x095b,	// (0x0004c127) list_double_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005ad79) list_double_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005ad79) list_double_pane_vc_g

0xeb88,	// (0x0005a354) list_double_pane_vc_t1_ParamLimits

0xeb88,	// (0x0005a354) list_double_pane_vc_t1

0xeb9c,	// (0x0005a368) list_double_pane_vc_t2_ParamLimits

0xeb9c,	// (0x0005a368) list_double_pane_vc_t2

0x0001,

0xfa28,	// (0x0005b1f4) list_double_pane_vc_t_ParamLimits

0xfa28,	// (0x0005b1f4) list_double_pane_vc_t

0xbfb8,	// (0x00057784) list_double_number_pane_vc_g1_ParamLimits

0xbfb8,	// (0x00057784) list_double_number_pane_vc_g1

0x095b,	// (0x0004c127) list_double_number_pane_vc_g2_ParamLimits

0x095b,	// (0x0004c127) list_double_number_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005ad79) list_double_number_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005ad79) list_double_number_pane_vc_g

0xebb4,	// (0x0005a380) list_double_number_pane_vc_t1_ParamLimits

0xebb4,	// (0x0005a380) list_double_number_pane_vc_t1

0xeb88,	// (0x0005a354) list_double_number_pane_vc_t2_ParamLimits

0xeb88,	// (0x0005a354) list_double_number_pane_vc_t2

0xebc6,	// (0x0005a392) list_double_number_pane_vc_t3_ParamLimits

0xebc6,	// (0x0005a392) list_double_number_pane_vc_t3

0x0002,

0xfa2d,	// (0x0005b1f9) list_double_number_pane_vc_t_ParamLimits

0xfa2d,	// (0x0005b1f9) list_double_number_pane_vc_t

0x0e82,	// (0x0004c64e) list_double_large_graphic_pane_vc_g1_ParamLimits

0x0e82,	// (0x0004c64e) list_double_large_graphic_pane_vc_g1

0x0e9e,	// (0x0004c66a) list_double_large_graphic_pane_vc_g2_ParamLimits

0x0e9e,	// (0x0004c66a) list_double_large_graphic_pane_vc_g2

0x0eb2,	// (0x0004c67e) list_double_large_graphic_pane_vc_g3_ParamLimits

0x0eb2,	// (0x0004c67e) list_double_large_graphic_pane_vc_g3

0xebde,	// (0x0005a3aa) list_double_large_graphic_pane_vc_g4_ParamLimits

0xebde,	// (0x0005a3aa) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa34,	// (0x0005b200) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa34,	// (0x0005b200) list_double_large_graphic_pane_vc_g

0xebed,	// (0x0005a3b9) list_double_large_graphic_pane_vc_t1_ParamLimits

0xebed,	// (0x0005a3b9) list_double_large_graphic_pane_vc_t1

0xec09,	// (0x0005a3d5) list_double_large_graphic_pane_vc_t2_ParamLimits

0xec09,	// (0x0005a3d5) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa3d,	// (0x0005b209) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa3d,	// (0x0005b209) list_double_large_graphic_pane_vc_t

0xbfb8,	// (0x00057784) list_double_heading_pane_vc_g1_ParamLimits

0xbfb8,	// (0x00057784) list_double_heading_pane_vc_g1

0x095b,	// (0x0004c127) list_double_heading_pane_vc_g2_ParamLimits

0x095b,	// (0x0004c127) list_double_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005ad79) list_double_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005ad79) list_double_heading_pane_vc_g

0xec2b,	// (0x0005a3f7) list_double_heading_pane_vc_t1_ParamLimits

0xec2b,	// (0x0005a3f7) list_double_heading_pane_vc_t1

0xec3f,	// (0x0005a40b) list_double_heading_pane_vc_t2_ParamLimits

0xec3f,	// (0x0005a40b) list_double_heading_pane_vc_t2

0x0001,

0xfa42,	// (0x0005b20e) list_double_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x0005b20e) list_double_heading_pane_vc_t

0xec57,	// (0x0005a423) list_double_graphic_pane_vc_g1_ParamLimits

0xec57,	// (0x0005a423) list_double_graphic_pane_vc_g1

0x0ec1,	// (0x0004c68d) list_double_graphic_pane_vc_g2_ParamLimits

0x0ec1,	// (0x0004c68d) list_double_graphic_pane_vc_g2

0xbfb8,	// (0x00057784) list_double_graphic_pane_vc_g3_ParamLimits

0xbfb8,	// (0x00057784) list_double_graphic_pane_vc_g3

0x0003,

0xfa47,	// (0x0005b213) list_double_graphic_pane_vc_g_ParamLimits

0xfa47,	// (0x0005b213) list_double_graphic_pane_vc_g

0xec6a,	// (0x0005a436) list_double_graphic_pane_vc_t1_ParamLimits

0xec6a,	// (0x0005a436) list_double_graphic_pane_vc_t1

0xec89,	// (0x0005a455) list_double_graphic_pane_vc_t2_ParamLimits

0xec89,	// (0x0005a455) list_double_graphic_pane_vc_t2

0x0001,

0xfa50,	// (0x0005b21c) list_double_graphic_pane_vc_t_ParamLimits

0xfa50,	// (0x0005b21c) list_double_graphic_pane_vc_t

0xe7ce,	// (0x00059f9a) aid_size_cell_fastswap

0x8ecc,	// (0x00054698) aid_size_cell_touch_ParamLimits

0x8ecc,	// (0x00054698) aid_size_cell_touch

0xe7d6,	// (0x00059fa2) popup_fast_swap_wide_window_ParamLimits

0xe7d6,	// (0x00059fa2) popup_fast_swap_wide_window

0x91f5,	// (0x000549c1) touch_pane_ParamLimits

0x91f5,	// (0x000549c1) touch_pane

0x9cce,	// (0x0005549a) button_value_adjust_pane_cp2

0xe877,	// (0x0005a043) button_value_adjust_pane_cp4

0xe87f,	// (0x0005a04b) form_field_data_pane_cp2

0x8a7d,	// (0x00054249) form_field_data_wide_pane_cp2

0xa18c,	// (0x00055958) bg_scroll_pane_ParamLimits

0xa1ab,	// (0x00055977) scroll_handle_pane_ParamLimits

0xf287,	// (0x0005aa53) scroll_sc2_down_pane_ParamLimits

0xf287,	// (0x0005aa53) scroll_sc2_down_pane

0xa1d1,	// (0x0005599d) scroll_sc2_up_pane_ParamLimits

0xa1d1,	// (0x0005599d) scroll_sc2_up_pane

0xcf29,	// (0x000586f5) grid_wheel_folder_pane_g1_ParamLimits

0xcf29,	// (0x000586f5) grid_wheel_folder_pane_g1

0xf409,	// (0x0005abd5) clock_nsta_pane_cp2_ParamLimits

0xf409,	// (0x0005abd5) clock_nsta_pane_cp2

0xa514,	// (0x00055ce0) listscroll_midp_pane_ParamLimits

0xa520,	// (0x00055cec) midp_canvas_pane

0xc5e4,	// (0x00057db0) nsta_clock_indic_pane

0xc60c,	// (0x00057dd8) listscroll_form_pane_vc

0xc614,	// (0x00057de0) listscroll_set_pane_vc_ParamLimits

0xc614,	// (0x00057de0) listscroll_set_pane_vc

0xb0b4,	// (0x00056880) clock_nsta_pane

0xb0de,	// (0x000568aa) indicator_nsta_pane

0x211a,	// (0x0004d8e6) bg_popup_sub_pane_cp2_ParamLimits

0x212e,	// (0x0004d8fa) find_pane_cp2_ParamLimits

0x212e,	// (0x0004d8fa) find_pane_cp2

0x2144,	// (0x0004d910) grid_toobar_pane_ParamLimits

0x223c,	// (0x0004da08) list_form_gen_pane_vc_ParamLimits

0x223c,	// (0x0004da08) list_form_gen_pane_vc

0x2252,	// (0x0004da1e) scroll_pane_cp8_vc_ParamLimits

0x2252,	// (0x0004da1e) scroll_pane_cp8_vc

0x22ce,	// (0x0004da9a) data_form_wide_pane_vc_ParamLimits

0x22ce,	// (0x0004da9a) data_form_wide_pane_vc

0x22da,	// (0x0004daa6) form_field_data_wide_pane_vc_g1

0x22e2,	// (0x0004daae) form_field_data_wide_pane_vc_t1_ParamLimits

0x22e2,	// (0x0004daae) form_field_data_wide_pane_vc_t1

0x9ce2,	// (0x000554ae) input_focus_pane_cp6_vc_ParamLimits

0x9ce2,	// (0x000554ae) input_focus_pane_cp6_vc

0x262f,	// (0x0004ddfb) list_midp_pane_ParamLimits

0x3901,	// (0x0004f0cd) scroll_pane_cp16_ParamLimits

0x3901,	// (0x0004f0cd) scroll_pane_cp16

0x2685,	// (0x0004de51) button_value_adjust_pane_ParamLimits

0x2685,	// (0x0004de51) button_value_adjust_pane

0xcb1b,	// (0x000582e7) button_value_adjust_pane_cp6_ParamLimits

0xcb1b,	// (0x000582e7) button_value_adjust_pane_cp6

0xcc35,	// (0x00058401) settings_code_pane_cp_ParamLimits

0xcc35,	// (0x00058401) settings_code_pane_cp

0x8ec2,	// (0x0005468e) cell_touch_pane_g1

0x8ec2,	// (0x0005468e) cell_touch_pane_g2

0x0001,

0xf6d4,	// (0x0005aea0) cell_touch_pane_g

0xcdf6,	// (0x000585c2) cell_touch_pane_cp_ParamLimits

0xcdf6,	// (0x000585c2) cell_touch_pane_cp

0xce12,	// (0x000585de) cell_touch_pane_ParamLimits

0xce12,	// (0x000585de) cell_touch_pane

0x8ec2,	// (0x0005468e) scroll_sc2_down_pane_g1

0x8ec2,	// (0x0005468e) scroll_sc2_up_pane_g1

0x9101,	// (0x000548cd) bg_set_opt_pane_cp4_vc

0x3c91,	// (0x0004f45d) list_set_graphic_pane_vc_g1_ParamLimits

0x3c91,	// (0x0004f45d) list_set_graphic_pane_vc_g1

0x3c9d,	// (0x0004f469) list_set_graphic_pane_vc_g2_ParamLimits

0x3c9d,	// (0x0004f469) list_set_graphic_pane_vc_g2

0x0001,

0xf9c4,	// (0x0005b190) list_set_graphic_pane_vc_g_ParamLimits

0xf9c4,	// (0x0005b190) list_set_graphic_pane_vc_g

0x3ca9,	// (0x0004f475) text_primary_small_cp13_vc_ParamLimits

0x3ca9,	// (0x0004f475) text_primary_small_cp13_vc

0x3cc1,	// (0x0004f48d) list_set_graphic_pane_vc_ParamLimits

0x3cc1,	// (0x0004f48d) list_set_graphic_pane_vc

0x9101,	// (0x000548cd) input_focus_pane_cp2_vc

0x8ec2,	// (0x0005468e) setting_code_pane_vc_g1

0x943c,	// (0x00054c08) setting_code_pane_vc_t1

0x3cd4,	// (0x0004f4a0) set_text_pane_vc_t1_ParamLimits

0x3cd4,	// (0x0004f4a0) set_text_pane_vc_t1

0x9101,	// (0x000548cd) input_focus_pane_cp1_vc

0x3cf1,	// (0x0004f4bd) list_set_text_pane_vc

0x8ec2,	// (0x0005468e) setting_text_pane_vc_g1

0x9101,	// (0x000548cd) bg_set_opt_pane_cp2_vc

0x940b,	// (0x00054bd7) setting_slider_graphic_pane_vc_g1

0x3cfb,	// (0x0004f4c7) setting_slider_graphic_pane_vc_t1

0x3d0b,	// (0x0004f4d7) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9c9,	// (0x0005b195) setting_slider_graphic_pane_vc_t

0x3d1b,	// (0x0004f4e7) slider_set_pane_cp_vc

0x3d23,	// (0x0004f4ef) slider_set_pane_vc_g1

0x3d2c,	// (0x0004f4f8) slider_set_pane_vc_g2

0x0006,

0xf9ce,	// (0x0005b19a) slider_set_pane_vc_g

0x9d3a,	// (0x00055506) set_opt_bg_pane_g1_copy1

0x9d42,	// (0x0005550e) set_opt_bg_pane_g2_copy1

0x3d58,	// (0x0004f524) set_opt_bg_pane_g3_copy1

0x9d52,	// (0x0005551e) set_opt_bg_pane_g4_copy1

0x9d5a,	// (0x00055526) set_opt_bg_pane_g5_copy1

0x9d62,	// (0x0005552e) set_opt_bg_pane_g6_copy1

0x3d60,	// (0x0004f52c) set_opt_bg_pane_g7_copy1

0x3d6a,	// (0x0004f536) set_opt_bg_pane_g8_copy1

0x3d72,	// (0x0004f53e) set_opt_bg_pane_g9_copy1

0x9101,	// (0x000548cd) bg_set_opt_pane_cp_vc

0x3d7a,	// (0x0004f546) setting_slider_pane_vc_t1

0x3d89,	// (0x0004f555) setting_slider_pane_vc_t2

0x3d99,	// (0x0004f565) setting_slider_pane_vc_t3

0x0002,

0xf9dd,	// (0x0005b1a9) setting_slider_pane_vc_t

0x3da9,	// (0x0004f575) slider_set_pane_vc

0x0a67,	// (0x0004c233) volume_set_pane_vc_g1

0x0e0d,	// (0x0004c5d9) volume_set_pane_vc_g2

0x0e16,	// (0x0004c5e2) volume_set_pane_vc_g3

0x0e1f,	// (0x0004c5eb) volume_set_pane_vc_g4

0x0e28,	// (0x0004c5f4) volume_set_pane_vc_g5

0x0e31,	// (0x0004c5fd) volume_set_pane_vc_g6

0x0e3a,	// (0x0004c606) volume_set_pane_vc_g7

0x0e43,	// (0x0004c60f) volume_set_pane_vc_g8

0x0e4c,	// (0x0004c618) volume_set_pane_vc_g9

0x0e55,	// (0x0004c621) volume_set_pane_vc_g10

0x0009,

0xf9e4,	// (0x0005b1b0) volume_set_pane_vc_g

0x3db1,	// (0x0004f57d) volume_set_pane_vc

0x3dbb,	// (0x0004f587) button_value_adjust_pane_cp1_vc

0x3dc5,	// (0x0004f591) list_highlight_pane_cp2_vc

0x3dce,	// (0x0004f59a) list_set_pane_vc_ParamLimits

0x3dce,	// (0x0004f59a) list_set_pane_vc

0x3e2c,	// (0x0004f5f8) main_pane_set_vc_t1_ParamLimits

0x3e2c,	// (0x0004f5f8) main_pane_set_vc_t1

0x3e41,	// (0x0004f60d) main_pane_set_vc_t2_ParamLimits

0x3e41,	// (0x0004f60d) main_pane_set_vc_t2

0x3e53,	// (0x0004f61f) main_pane_set_vc_t3_ParamLimits

0x3e53,	// (0x0004f61f) main_pane_set_vc_t3

0x3e65,	// (0x0004f631) main_pane_set_vc_t4_ParamLimits

0x3e65,	// (0x0004f631) main_pane_set_vc_t4

0x0003,

0xf9f9,	// (0x0005b1c5) main_pane_set_vc_t_ParamLimits

0xf9f9,	// (0x0005b1c5) main_pane_set_vc_t

0x3e77,	// (0x0004f643) setting_code_pane_vc_ParamLimits

0x3e77,	// (0x0004f643) setting_code_pane_vc

0x3e86,	// (0x0004f652) setting_slider_graphic_pane_vc

0x3e86,	// (0x0004f652) setting_slider_pane_vc

0x3e86,	// (0x0004f652) setting_text_pane_vc

0x3e86,	// (0x0004f652) setting_volume_pane_vc

0x3e8e,	// (0x0004f65a) scroll_pane_cp121_vc

0x9cbc,	// (0x00055488) set_content_pane_vc

0x3e96,	// (0x0004f662) button_value_adjust_pane_g1

0x3e9f,	// (0x0004f66b) button_value_adjust_pane_g2

0x0001,

0xfa55,	// (0x0005b221) button_value_adjust_pane_g

0x3ea8,	// (0x0004f674) form_field_slider_wide_pane_vc_t1_ParamLimits

0x3ea8,	// (0x0004f674) form_field_slider_wide_pane_vc_t1

0x3ebc,	// (0x0004f688) form_field_slider_wide_pane_vc_t2_ParamLimits

0x3ebc,	// (0x0004f688) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa5a,	// (0x0005b226) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa5a,	// (0x0005b226) form_field_slider_wide_pane_vc_t

0x9352,	// (0x00054b1e) input_focus_pane_cp10_vc_ParamLimits

0x9352,	// (0x00054b1e) input_focus_pane_cp10_vc

0x3eea,	// (0x0004f6b6) slider_cont_pane_cp1_vc_ParamLimits

0x3eea,	// (0x0004f6b6) slider_cont_pane_cp1_vc

0x3efc,	// (0x0004f6c8) slider_form_pane_g1_cp2

0x3d2c,	// (0x0004f4f8) slider_form_pane_g2_cp2

0x3f29,	// (0x0004f6f5) form_field_slider_pane_vc_t3

0x3f37,	// (0x0004f703) form_field_slider_pane_vc_t4

0x3f45,	// (0x0004f711) slider_form_pane_vc_ParamLimits

0x3f45,	// (0x0004f711) slider_form_pane_vc

0x3f52,	// (0x0004f71e) form_field_slider_pane_vc_t1_ParamLimits

0x3f52,	// (0x0004f71e) form_field_slider_pane_vc_t1

0x3ebc,	// (0x0004f688) form_field_slider_pane_vc_t2_ParamLimits

0x3ebc,	// (0x0004f688) form_field_slider_pane_vc_t2

0x0001,

0xfa6c,	// (0x0005b238) form_field_slider_pane_vc_t_ParamLimits

0xfa6c,	// (0x0005b238) form_field_slider_pane_vc_t

0x9352,	// (0x00054b1e) input_focus_pane_cp9_vc_ParamLimits

0x9352,	// (0x00054b1e) input_focus_pane_cp9_vc

0x3f6e,	// (0x0004f73a) slider_cont_pane_vc_ParamLimits

0x3f6e,	// (0x0004f73a) slider_cont_pane_vc

0x3f82,	// (0x0004f74e) list_form_graphic_pane_cp_vc_ParamLimits

0x3f82,	// (0x0004f74e) list_form_graphic_pane_cp_vc

0x22da,	// (0x0004daa6) form_field_popup_wide_pane_vc_g1

0x3f97,	// (0x0004f763) form_field_popup_wide_pane_vc_t1_ParamLimits

0x3f97,	// (0x0004f763) form_field_popup_wide_pane_vc_t1

0x9ce2,	// (0x000554ae) input_focus_pane_cp8_vc_ParamLimits

0x9ce2,	// (0x000554ae) input_focus_pane_cp8_vc

0x3fdc,	// (0x0004f7a8) list_form_wide_pane_vc_ParamLimits

0x3fdc,	// (0x0004f7a8) list_form_wide_pane_vc

0x3fe8,	// (0x0004f7b4) list_form_graphic_pane_vc_g1

0x3ff0,	// (0x0004f7bc) list_form_graphic_pane_vc_t1_ParamLimits

0x3ff0,	// (0x0004f7bc) list_form_graphic_pane_vc_t1

0x939c,	// (0x00054b68) list_highlight_pane_cp5_vc_ParamLimits

0x939c,	// (0x00054b68) list_highlight_pane_cp5_vc

0x400c,	// (0x0004f7d8) list_form_graphic_pane_vc_ParamLimits

0x400c,	// (0x0004f7d8) list_form_graphic_pane_vc

0x22da,	// (0x0004daa6) form_field_popup_pane_vc_g1

0x4022,	// (0x0004f7ee) form_field_popup_pane_vc_t1_ParamLimits

0x4022,	// (0x0004f7ee) form_field_popup_pane_vc_t1

0x9ce2,	// (0x000554ae) input_focus_pane_cp7_vc_ParamLimits

0x9ce2,	// (0x000554ae) input_focus_pane_cp7_vc

0x4039,	// (0x0004f805) list_form_pane_vc_ParamLimits

0x4039,	// (0x0004f805) list_form_pane_vc

0x4045,	// (0x0004f811) data_form_pane_vc_t1_ParamLimits

0x4045,	// (0x0004f811) data_form_pane_vc_t1

0x9d3a,	// (0x00055506) input_focus_pane_vc_g1

0x9d42,	// (0x0005550e) input_focus_pane_vc_g2

0x9d4a,	// (0x00055516) input_focus_pane_vc_g3

0x9d52,	// (0x0005551e) input_focus_pane_vc_g4

0x9d5a,	// (0x00055526) input_focus_pane_vc_g5

0x9d62,	// (0x0005552e) input_focus_pane_vc_g6

0x9d6a,	// (0x00055536) input_focus_pane_vc_g7

0x9d72,	// (0x0005553e) input_focus_pane_vc_g8

0x9d7a,	// (0x00055546) input_focus_pane_vc_g9

0x8ec2,	// (0x0005468e) input_focus_pane_vc_g10

0x0009,

0xf65d,	// (0x0005ae29) input_focus_pane_vc_g

0x22ce,	// (0x0004da9a) data_form_pane_vc_ParamLimits

0x22ce,	// (0x0004da9a) data_form_pane_vc

0x22da,	// (0x0004daa6) form_field_data_pane_vc_g1

0x4060,	// (0x0004f82c) form_field_data_pane_vc_t1_ParamLimits

0x4060,	// (0x0004f82c) form_field_data_pane_vc_t1

0x9ce2,	// (0x000554ae) input_focus_pane_vc_ParamLimits

0x9ce2,	// (0x000554ae) input_focus_pane_vc

0x407a,	// (0x0004f846) button_value_adjust_pane_cp3_vc

0x4082,	// (0x0004f84e) button_value_adjust_pane_cp5_vc

0x408a,	// (0x0004f856) form_field_data_pane_vc_ParamLimits

0x408a,	// (0x0004f856) form_field_data_pane_vc

0x40a1,	// (0x0004f86d) form_field_data_pane_vc_cp2

0x40a9,	// (0x0004f875) form_field_data_wide_pane_vc_ParamLimits

0x40a9,	// (0x0004f875) form_field_data_wide_pane_vc

0x40bf,	// (0x0004f88b) form_field_data_wide_pane_vc_cp2

0x40c7,	// (0x0004f893) form_field_popup_pane_vc_ParamLimits

0x40c7,	// (0x0004f893) form_field_popup_pane_vc

0x40de,	// (0x0004f8aa) form_field_popup_wide_pane_vc_ParamLimits

0x40de,	// (0x0004f8aa) form_field_popup_wide_pane_vc

0x40f4,	// (0x0004f8c0) form_field_slider_pane_vc_ParamLimits

0x40f4,	// (0x0004f8c0) form_field_slider_pane_vc

0x4107,	// (0x0004f8d3) form_field_slider_wide_pane_vc_ParamLimits

0x4107,	// (0x0004f8d3) form_field_slider_wide_pane_vc

0xce2f,	// (0x000585fb) grid_touch_1_pane_ParamLimits

0xce2f,	// (0x000585fb) grid_touch_1_pane

0xce43,	// (0x0005860f) grid_touch_2_pane_ParamLimits

0xce43,	// (0x0005860f) grid_touch_2_pane

0x41eb,	// (0x0004f9b7) touch_pane_g1_ParamLimits

0x41eb,	// (0x0004f9b7) touch_pane_g1

0x413e,	// (0x0004f90a) cell_app_pane_cp_wide_ParamLimits

0x413e,	// (0x0004f90a) cell_app_pane_cp_wide

0x414f,	// (0x0004f91b) grid_popup_fast_wide_pane_ParamLimits

0x414f,	// (0x0004f91b) grid_popup_fast_wide_pane

0x4163,	// (0x0004f92f) scroll_pane_cp19_ParamLimits

0x4163,	// (0x0004f92f) scroll_pane_cp19

0x9101,	// (0x000548cd) bg_popup_window_pane_cp20

0x4177,	// (0x0004f943) listscroll_popup_fast_wide_pane

0xce6d,	// (0x00058639) grid_indicator_nsta_pane

0x4191,	// (0x0004f95d) clock_nsta_pane_g1

0x419a,	// (0x0004f966) clock_nsta_pane_t1

0xce79,	// (0x00058645) cell_indicator_nsta_pane_ParamLimits

0xce79,	// (0x00058645) cell_indicator_nsta_pane

0x41eb,	// (0x0004f9b7) cell_indicator_nsta_pane_g1

0xce94,	// (0x00058660) cell_indicator_nsta_pane_g2

0x0001,

0xfa7d,	// (0x0005b249) cell_indicator_nsta_pane_g

0x420b,	// (0x0004f9d7) clock_nsta_pane_cp

0x4214,	// (0x0004f9e0) indicator_nsta_pane_cp

0x421e,	// (0x0004f9ea) nsta_clock_indic_pane_g1

0x951e,	// (0x00054cea) grid_indicator_pane

0xa2c3,	// (0x00055a8f) scroll_pane_cp29

0xf358,	// (0x0005ab24) indicator_nsta_pane_cp2_ParamLimits

0xf358,	// (0x0005ab24) indicator_nsta_pane_cp2

0x939c,	// (0x00054b68) main_apps_wheel_pane

0xb54e,	// (0x00056d1a) form_midp_field_text_pane_ParamLimits

0x263b,	// (0x0004de07) scroll_bar_cp050_ParamLimits

0x4277,	// (0x0004fa43) cell_indicator_pane_ParamLimits

0x4277,	// (0x0004fa43) cell_indicator_pane

0x4290,	// (0x0004fa5c) cell_indicator_pane_g1

0xceb3,	// (0x0005867f) grid_wheel_folder_pane_ParamLimits

0xceb3,	// (0x0005867f) grid_wheel_folder_pane

0xcec1,	// (0x0005868d) list_wheel_apps_pane_ParamLimits

0xcec1,	// (0x0005868d) list_wheel_apps_pane

0xcecf,	// (0x0005869b) main_apps_wheel_pane_g1_ParamLimits

0xcecf,	// (0x0005869b) main_apps_wheel_pane_g1

0xcedb,	// (0x000586a7) main_apps_wheel_pane_g2_ParamLimits

0xcedb,	// (0x000586a7) main_apps_wheel_pane_g2

0x0001,

0xfa99,	// (0x0005b265) main_apps_wheel_pane_g_ParamLimits

0xfa99,	// (0x0005b265) main_apps_wheel_pane_g

0xcee9,	// (0x000586b5) main_apps_wheel_pane_t1_ParamLimits

0xcee9,	// (0x000586b5) main_apps_wheel_pane_t1

0xcefd,	// (0x000586c9) list_wheel_apps_pane_g1

0xcf05,	// (0x000586d1) list_wheel_apps_pane_g2

0xcf0d,	// (0x000586d9) list_wheel_apps_pane_g3

0xcf15,	// (0x000586e1) list_wheel_apps_pane_g4

0xcf1f,	// (0x000586eb) list_wheel_apps_pane_g5

0x0004,

0xfa9e,	// (0x0005b26a) list_wheel_apps_pane_g

0xc331,	// (0x00057afd) navi_icon_text_pane

0xafa8,	// (0x00056774) aid_fill_nsta

0x4357,	// (0x0004fb23) navi_icon_text_pane_g1

0x4363,	// (0x0004fb2f) navi_icon_text_pane_t1

0xc215,	// (0x000579e1) list_set_graphic_pane_t1_ParamLimits

0xc215,	// (0x000579e1) list_set_graphic_pane_t1

0x2d86,	// (0x0004e552) popup_midp_note_alarm_window_t6_ParamLimits

0x2d86,	// (0x0004e552) popup_midp_note_alarm_window_t6

0x2d98,	// (0x0004e564) popup_midp_note_alarm_window_t7_ParamLimits

0x2d98,	// (0x0004e564) popup_midp_note_alarm_window_t7

0x2daa,	// (0x0004e576) popup_midp_note_alarm_window_t8_ParamLimits

0x2daa,	// (0x0004e576) popup_midp_note_alarm_window_t8

0x2dbc,	// (0x0004e588) popup_midp_note_alarm_window_t9_ParamLimits

0x2dbc,	// (0x0004e588) popup_midp_note_alarm_window_t9

0x2dce,	// (0x0004e59a) popup_midp_note_alarm_window_t10_ParamLimits

0x2dce,	// (0x0004e59a) popup_midp_note_alarm_window_t10

0x2de0,	// (0x0004e5ac) popup_midp_note_alarm_window_t11_ParamLimits

0x2de0,	// (0x0004e5ac) popup_midp_note_alarm_window_t11

0xc895,	// (0x00058061) scroll_pane_cp17_ParamLimits

0xc895,	// (0x00058061) scroll_pane_cp17

0x0a67,	// (0x0004c233) volume_small_pane_cp_g1

0x0ede,	// (0x0004c6aa) volume_small_pane_cp_g2

0x0ee7,	// (0x0004c6b3) volume_small_pane_cp_g3

0x0ef0,	// (0x0004c6bc) volume_small_pane_cp_g4

0x0ef9,	// (0x0004c6c5) volume_small_pane_cp_g5

0x0e28,	// (0x0004c5f4) volume_small_pane_cp_g6

0x0f02,	// (0x0004c6ce) volume_small_pane_cp_g7

0x0f0b,	// (0x0004c6d7) volume_small_pane_cp_g8

0x0f14,	// (0x0004c6e0) volume_small_pane_cp_g9

0x0f1d,	// (0x0004c6e9) volume_small_pane_cp_g10

0xc497,	// (0x00057c63) midp_ticker_pane_g1_ParamLimits

0xc4a3,	// (0x00057c6f) midp_ticker_pane_g2_ParamLimits

0xf729,	// (0x0005aef5) midp_ticker_pane_g_ParamLimits

0xc4af,	// (0x00057c7b) midp_ticker_pane_t1_ParamLimits

0xafcc,	// (0x00056798) aid_fill_nsta_2

0x2627,	// (0x0004ddf3) list_form2_midp_pane

0x373a,	// (0x0004ef06) midp_editing_number_pane_ParamLimits

0x3749,	// (0x0004ef15) midp_ticker_pane_ParamLimits

0x4375,	// (0x0004fb41) form2_midp_field_pane

0x4399,	// (0x0004fb65) scroll_pane_cp51

0x43b9,	// (0x0004fb85) form2_midp_button_pane_ParamLimits

0x43b9,	// (0x0004fb85) form2_midp_button_pane

0x43cb,	// (0x0004fb97) form2_midp_content_pane_ParamLimits

0x43cb,	// (0x0004fb97) form2_midp_content_pane

0x43e5,	// (0x0004fbb1) form2_midp_field_choice_group_pane

0x43ed,	// (0x0004fbb9) form2_midp_field_pane_g1

0x43f5,	// (0x0004fbc1) form2_midp_field_pane_g2

0x43fd,	// (0x0004fbc9) form2_midp_field_pane_g3

0x4405,	// (0x0004fbd1) form2_midp_field_pane_g4

0x0003,

0xfac3,	// (0x0005b28f) form2_midp_field_pane_g

0x440d,	// (0x0004fbd9) form2_midp_gauge_slider_pane

0x4415,	// (0x0004fbe1) form2_midp_gauge_wait_pane

0x441d,	// (0x0004fbe9) form2_midp_image_pane_ParamLimits

0x441d,	// (0x0004fbe9) form2_midp_image_pane

0xcf52,	// (0x0005871e) form2_midp_label_pane_ParamLimits

0xcf52,	// (0x0005871e) form2_midp_label_pane

0xcf6b,	// (0x00058737) form2_midp_label_pane_cp_ParamLimits

0xcf6b,	// (0x00058737) form2_midp_label_pane_cp

0x4472,	// (0x0004fc3e) form2_midp_string_pane_ParamLimits

0x4472,	// (0x0004fc3e) form2_midp_string_pane

0x8d07,	// (0x000544d3) form2_midp_text_pane_ParamLimits

0x8d07,	// (0x000544d3) form2_midp_text_pane

0x4484,	// (0x0004fc50) form2_midp_time_pane

0x4494,	// (0x0004fc60) input_focus_pane_cp51_ParamLimits

0x4494,	// (0x0004fc60) input_focus_pane_cp51

0xcf8a,	// (0x00058756) form2_midp_label_pane_t1_ParamLimits

0xcf8a,	// (0x00058756) form2_midp_label_pane_t1

0x8d20,	// (0x000544ec) form2_mdip_text_pane_t1_ParamLimits

0x8d20,	// (0x000544ec) form2_mdip_text_pane_t1

0xecb3,	// (0x0005a47f) form2_midp_time_pane_t1

0x44f5,	// (0x0004fcc1) form2_midp_gauge_slider_pane_t1

0xcfca,	// (0x00058796) form2_midp_gauge_slider_pane_t2

0xcfdc,	// (0x000587a8) form2_midp_gauge_slider_pane_t3

0x0002,

0xfacc,	// (0x0005b298) form2_midp_gauge_slider_pane_t

0x452b,	// (0x0004fcf7) form2_midp_slider_pane

0x4537,	// (0x0004fd03) form2_midp_gauge_wait_pane_t1

0x4545,	// (0x0004fd11) form2_midp_wait_pane_ParamLimits

0x4545,	// (0x0004fd11) form2_midp_wait_pane

0xcfee,	// (0x000587ba) list_single_2graphic_pane_cp4_ParamLimits

0xcfee,	// (0x000587ba) list_single_2graphic_pane_cp4

0xb4a5,	// (0x00056c71) list_single_midp_graphic_pane_cp_ParamLimits

0xb4a5,	// (0x00056c71) list_single_midp_graphic_pane_cp

0x9101,	// (0x000548cd) list_highlight_pane_cp20

0x4598,	// (0x0004fd64) list_single_2graphic_pane_g1_cp4

0x3b75,	// (0x0004f341) list_single_2graphic_pane_g2_cp4

0x45a0,	// (0x0004fd6c) list_single_2graphic_pane_t1_cp4

0x939c,	// (0x00054b68) list_highlight_pane_cp21

0x45af,	// (0x0004fd7b) list_single_midp_graphic_pane_g4_cp

0x45be,	// (0x0004fd8a) list_single_midp_graphic_pane_t1_cp

0xd003,	// (0x000587cf) form2_mdip_string_pane_t1_ParamLimits

0xd003,	// (0x000587cf) form2_mdip_string_pane_t1

0x9101,	// (0x000548cd) bg_wml_button_pane_cp2

0x8ec2,	// (0x0005468e) form2_midp_image_pane_g1

0xf0d2,	// (0x0005a89e) list_double_large_graphic_pane_g5_ParamLimits

0xf0d2,	// (0x0005a89e) list_double_large_graphic_pane_g5

0xa514,	// (0x00055ce0) midp_form_pane_ParamLimits

0x939c,	// (0x00054b68) main_apps_wheel_pane_ParamLimits

0xac86,	// (0x00056452) popup_preview_window_ParamLimits

0xac86,	// (0x00056452) popup_preview_window

0xaf53,	// (0x0005671f) popup_touch_info_window_ParamLimits

0xaf53,	// (0x0005671f) popup_touch_info_window

0xaf71,	// (0x0005673d) popup_touch_menu_window_ParamLimits

0xaf71,	// (0x0005673d) popup_touch_menu_window

0x8eb8,	// (0x00054684) bg_popup_sub_pane_cp6

0x46da,	// (0x0004fea6) list_touch_menu_pane

0xd079,	// (0x00058845) list_single_touch_menu_pane_ParamLimits

0xd079,	// (0x00058845) list_single_touch_menu_pane

0xd08d,	// (0x00058859) list_single_touch_menu_pane_t1

0x939c,	// (0x00054b68) bg_popup_sub_pane_cp7_ParamLimits

0x939c,	// (0x00054b68) bg_popup_sub_pane_cp7

0x4706,	// (0x0004fed2) heading_sub_pane

0x470e,	// (0x0004feda) list_touch_info_pane_ParamLimits

0x470e,	// (0x0004feda) list_touch_info_pane

0x471d,	// (0x0004fee9) list_single_touch_info_pane_ParamLimits

0x471d,	// (0x0004fee9) list_single_touch_info_pane

0x472f,	// (0x0004fefb) list_single_touch_info_pane_t1

0x473d,	// (0x0004ff09) list_single_touch_info_pane_t2

0x0001,

0xfada,	// (0x0005b2a6) list_single_touch_info_pane_t

0xc480,	// (0x00057c4c) bg_popup_heading_pane_cp

0x474b,	// (0x0004ff17) heading_sub_pane_t1

0x2268,	// (0x0004da34) bg_popup_preview_window_pane_cp_ParamLimits

0x2268,	// (0x0004da34) bg_popup_preview_window_pane_cp

0x4706,	// (0x0004fed2) heading_preview_pane

0x470e,	// (0x0004feda) list_preview_pane_ParamLimits

0x470e,	// (0x0004feda) list_preview_pane

0x4759,	// (0x0004ff25) popup_preview_window_g1

0x471d,	// (0x0004fee9) list_single_preview_pane_ParamLimits

0x471d,	// (0x0004fee9) list_single_preview_pane

0x4761,	// (0x0004ff2d) list_single_preview_pane_g1

0x4769,	// (0x0004ff35) list_single_preview_pane_t1

0x472f,	// (0x0004fefb) list_single_preview_pane_t2

0x0001,

0xfadf,	// (0x0005b2ab) list_single_preview_pane_t

0x4777,	// (0x0004ff43) bg_popup_heading_pane_cp2_ParamLimits

0x4777,	// (0x0004ff43) bg_popup_heading_pane_cp2

0x478d,	// (0x0004ff59) heading_preview_pane_g1

0x4795,	// (0x0004ff61) heading_preview_pane_t1_ParamLimits

0x4795,	// (0x0004ff61) heading_preview_pane_t1

0x954b,	// (0x00054d17) soft_indicator_pane_t1_ParamLimits

0x9c0d,	// (0x000553d9) scroll_pane_ParamLimits

0xa1bf,	// (0x0005598b) scroll_sc2_left_pane

0xa1c8,	// (0x00055994) scroll_sc2_right_pane

0xa1e7,	// (0x000559b3) scroll_bg_pane_g1_ParamLimits

0xa1fc,	// (0x000559c8) scroll_bg_pane_g2_ParamLimits

0xa214,	// (0x000559e0) scroll_bg_pane_g3_ParamLimits

0xf6b4,	// (0x0005ae80) scroll_bg_pane_g_ParamLimits

0xa1e7,	// (0x000559b3) scroll_handle_pane_g1_ParamLimits

0xa236,	// (0x00055a02) scroll_handle_pane_g2_ParamLimits

0xa214,	// (0x000559e0) scroll_handle_pane_g3_ParamLimits

0xf6bb,	// (0x0005ae87) scroll_handle_pane_g_ParamLimits

0xa853,	// (0x0005601f) popup_choice_list_window_ParamLimits

0xa853,	// (0x0005601f) popup_choice_list_window

0x2126,	// (0x0004d8f2) choice_list_pane

0x21a8,	// (0x0004d974) cell_toolbar_pane_t1

0x21d0,	// (0x0004d99c) toolbar_button_pane_ParamLimits

0x32ac,	// (0x0004ea78) ai_gene_pane_1_t2_ParamLimits

0x32ac,	// (0x0004ea78) ai_gene_pane_1_t2

0x0001,

0xf8d7,	// (0x0005b0a3) ai_gene_pane_1_t_ParamLimits

0xf8d7,	// (0x0005b0a3) ai_gene_pane_1_t

0x47b2,	// (0x0004ff7e) scroll_sc2_left_pane_g1

0x47b2,	// (0x0004ff7e) scroll_sc2_right_pane_g1

0x9ec6,	// (0x00055692) bg_popup_sub_pane_cp10

0x47bc,	// (0x0004ff88) list_choice_list_pane

0xcc5e,	// (0x0005842a) list_single_choice_list_pane_ParamLimits

0xcc5e,	// (0x0005842a) list_single_choice_list_pane

0xd09b,	// (0x00058867) list_single_choice_list_pane_g1

0x9e84,	// (0x00055650) list_single_choice_list_pane_t1_ParamLimits

0x9e84,	// (0x00055650) list_single_choice_list_pane_t1

0x47f0,	// (0x0004ffbc) choice_list_pane_g1

0xd0a3,	// (0x0005886f) choice_list_pane_t1

0x8eb8,	// (0x00054684) input_focus_pane_cp11

0xa04a,	// (0x00055816) title_pane_stacon_g2_ParamLimits

0xa04a,	// (0x00055816) title_pane_stacon_g2

0x0002,

0xf69a,	// (0x0005ae66) title_pane_stacon_g_ParamLimits

0xf69a,	// (0x0005ae66) title_pane_stacon_g

0xc480,	// (0x00057c4c) cursor_press_pane

0xa8fa,	// (0x000560c6) popup_fep_hwr_window_ParamLimits

0xa8fa,	// (0x000560c6) popup_fep_hwr_window

0x019d,	// (0x0004b969) popup_fep_vkb_window_ParamLimits

0x019d,	// (0x0004b969) popup_fep_vkb_window

0xd0b1,	// (0x0005887d) cursor_press_pane_g1

0x0002,

0xfb08,	// (0x0005b2d4) fep_vkb_side_pane_g_ParamLimits

0x0f5f,	// (0x0004c72b) fep_hwr_candidate_pane_ParamLimits

0x0f5f,	// (0x0004c72b) fep_hwr_candidate_pane

0x0f89,	// (0x0004c755) fep_hwr_side_pane_ParamLimits

0x0f89,	// (0x0004c755) fep_hwr_side_pane

0x0fa9,	// (0x0004c775) fep_hwr_top_pane_ParamLimits

0x0fa9,	// (0x0004c775) fep_hwr_top_pane

0x0fc1,	// (0x0004c78d) fep_hwr_write_pane_ParamLimits

0x0fc1,	// (0x0004c78d) fep_hwr_write_pane

0xfb08,	// (0x0005b2d4) fep_vkb_side_pane_g

0x480e,	// (0x0004ffda) fep_hwr_top_pane_g1

0x4820,	// (0x0004ffec) fep_hwr_top_pane_g2

0x0fed,	// (0x0004c7b9) fep_hwr_top_pane_g3

0x0002,

0xfae4,	// (0x0005b2b0) fep_hwr_top_pane_g

0x1002,	// (0x0004c7ce) fep_hwr_top_text_pane

0xc022,	// (0x000577ee) fep_hwr_top_text_pane_g1

0x4856,	// (0x00050022) fep_hwr_top_text_pane_t1

0x10f8,	// (0x0004c8c4) fep_hwr_candidate_pane_g1

0x4a9b,	// (0x00050267) fep_vkb_keypad_pane_g3_ParamLimits

0x4a9b,	// (0x00050267) fep_vkb_keypad_pane_g3

0x4ac3,	// (0x0005028f) fep_vkb_keypad_pane_g4_ParamLimits

0x4ac3,	// (0x0005028f) fep_vkb_keypad_pane_g4

0x4b32,	// (0x000502fe) fep_vkb_bottom_pane_g2_ParamLimits

0x4b32,	// (0x000502fe) fep_vkb_bottom_pane_g2

0x0001,

0xfb0f,	// (0x0005b2db) fep_vkb_bottom_pane_g_ParamLimits

0xfb0f,	// (0x0005b2db) fep_vkb_bottom_pane_g

0x47b2,	// (0x0004ff7e) cell_vkb_side_pane_g2

0x0001,

0xfb19,	// (0x0005b2e5) cell_vkb_side_pane_g

0x4bbd,	// (0x00050389) cell_vkb_side_pane_t1

0x4bcb,	// (0x00050397) cell_vkb_side_pane_t1_copy1

0x47b2,	// (0x0004ff7e) bg_fep_vkb_candidate_pane_g2

0x4cf7,	// (0x000504c3) cell_vkb_candidate_pane_ParamLimits

0x4864,	// (0x00050030) aid_size_cell_vkb_ParamLimits

0x4864,	// (0x00050030) aid_size_cell_vkb

0x4cf7,	// (0x000504c3) cell_vkb_candidate_pane

0x1112,	// (0x0004c8de) bg_popup_fep_shadow_pane_g1

0xd0f3,	// (0x000588bf) fep_vkb_bottom_pane_ParamLimits

0xd0f3,	// (0x000588bf) fep_vkb_bottom_pane

0x4928,	// (0x000500f4) fep_vkb_candidate_pane_ParamLimits

0x4928,	// (0x000500f4) fep_vkb_candidate_pane

0xd118,	// (0x000588e4) fep_vkb_keypad_pane_ParamLimits

0xd118,	// (0x000588e4) fep_vkb_keypad_pane

0xd14d,	// (0x00058919) fep_vkb_side_pane_ParamLimits

0xd14d,	// (0x00058919) fep_vkb_side_pane

0xd189,	// (0x00058955) fep_vkb_top_pane_ParamLimits

0xd189,	// (0x00058955) fep_vkb_top_pane

0x49f4,	// (0x000501c0) fep_vkb_top_pane_g1_ParamLimits

0x49f4,	// (0x000501c0) fep_vkb_top_pane_g1

0x4a03,	// (0x000501cf) fep_vkb_top_pane_g2_ParamLimits

0x4a03,	// (0x000501cf) fep_vkb_top_pane_g2

0x4a12,	// (0x000501de) fep_vkb_top_pane_g3_ParamLimits

0x4a12,	// (0x000501de) fep_vkb_top_pane_g3

0x0003,

0xfaff,	// (0x0005b2cb) fep_vkb_top_pane_g_ParamLimits

0xfaff,	// (0x0005b2cb) fep_vkb_top_pane_g

0x4a30,	// (0x000501fc) fep_vkb_top_text_pane_ParamLimits

0x4a30,	// (0x000501fc) fep_vkb_top_text_pane

0xd1be,	// (0x0005898a) fep_vkb_side_pane_g1_ParamLimits

0xd1be,	// (0x0005898a) fep_vkb_side_pane_g1

0x4a8a,	// (0x00050256) grid_vkb_side_pane_ParamLimits

0x4a8a,	// (0x00050256) grid_vkb_side_pane

0x111a,	// (0x0004c8e6) bg_popup_fep_shadow_pane_g2

0x1123,	// (0x0004c8ef) bg_popup_fep_shadow_pane_g3

0x112b,	// (0x0004c8f7) bg_popup_fep_shadow_pane_g4

0x1134,	// (0x0004c900) bg_popup_fep_shadow_pane_g5

0x113e,	// (0x0004c90a) bg_popup_fep_shadow_pane_g6

0x1146,	// (0x0004c912) bg_popup_fep_shadow_pane_g7

0x9d5a,	// (0x00055526) bg_popup_fep_shadow_pane_g8

0x4ae1,	// (0x000502ad) grid_vkb_keypad_number_pane_ParamLimits

0x4ae1,	// (0x000502ad) grid_vkb_keypad_number_pane

0x4af1,	// (0x000502bd) grid_vkb_keypad_pane_ParamLimits

0x4af1,	// (0x000502bd) grid_vkb_keypad_pane

0x4b17,	// (0x000502e3) fep_vkb_bottom_pane_g1_ParamLimits

0x4b17,	// (0x000502e3) fep_vkb_bottom_pane_g1

0x4b40,	// (0x0005030c) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4b40,	// (0x0005030c) grid_vkb_keypad_bottom_left_pane

0x4b55,	// (0x00050321) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4b55,	// (0x00050321) grid_vkb_keypad_bottom_right_pane

0x4b6a,	// (0x00050336) fep_vkb_top_text_pane_g1

0xd205,	// (0x000589d1) fep_vkb_top_text_pane_t1

0xd217,	// (0x000589e3) cell_vkb_side_pane_ParamLimits

0xd217,	// (0x000589e3) cell_vkb_side_pane

0x47b2,	// (0x0004ff7e) cell_vkb_side_pane_g1

0x4bd9,	// (0x000503a5) cell_vkb_keypad_pane_ParamLimits

0x4bd9,	// (0x000503a5) cell_vkb_keypad_pane

0x4c4e,	// (0x0005041a) cell_vkb_keypad_pane_g1

0x0008,

0xfb2c,	// (0x0005b2f8) bg_popup_fep_shadow_pane_g

0x47b2,	// (0x0004ff7e) cell_hwr_side_pane_g1

0x47b2,	// (0x0004ff7e) cell_hwr_side_pane_g2

0x4c58,	// (0x00050424) cell_vkb_keypad_pane_t1

0xd22d,	// (0x000589f9) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd22d,	// (0x000589f9) cell_vkb_keypad_bottom_left_pane

0xd242,	// (0x00058a0e) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd242,	// (0x00058a0e) cell_vkb_keypad_bottom_right_pane

0x47b2,	// (0x0004ff7e) cell_vkb_keypad_bottom_left_pane_g1

0x47b2,	// (0x0004ff7e) cell_vkb_keypad_bottom_right_pane_g1

0x4cbc,	// (0x00050488) cell_vkb_keypad_number_pane_ParamLimits

0x4cbc,	// (0x00050488) cell_vkb_keypad_number_pane

0x4cdb,	// (0x000504a7) cell_vkb_keypad_number_pane_g1

0x4ce5,	// (0x000504b1) cell_vkb_keypad_number_pane_g2

0x4cee,	// (0x000504ba) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb1e,	// (0x0005b2ea) cell_vkb_keypad_number_pane_g

0x4c58,	// (0x00050424) cell_vkb_keypad_number_pane_t1

0x4d12,	// (0x000504de) fep_vkb_candidate_pane_g1

0x0001,

0xfb19,	// (0x0005b2e5) cell_hwr_side_pane_g

0x4d2b,	// (0x000504f7) cell_hwr_side_pane_t1

0x1158,	// (0x0004c924) cell_hwr_side_pane_t1_copy1

0x4a22,	// (0x000501ee) cell_hwr_candidate_pane_g1

0x1166,	// (0x0004c932) cell_hwr_candidate_pane_t1

0x47b2,	// (0x0004ff7e) cell_vkb_candidate_pane_g2

0x4db1,	// (0x0005057d) cell_vkb_candidate_pane_t1

0x0f26,	// (0x0004c6f2) bg_popup_fep_shadow_pane_ParamLimits

0x0f26,	// (0x0004c6f2) bg_popup_fep_shadow_pane

0xd0b9,	// (0x00058885) bg_fep_hwr_top_pane_g4

0x4832,	// (0x0004fffe) bg_hwr_side_pane_g1_ParamLimits

0x4832,	// (0x0004fffe) bg_hwr_side_pane_g1

0xb795,	// (0x00056f61) cell_hwr_side_pane_ParamLimits

0xb795,	// (0x00056f61) cell_hwr_side_pane

0x1079,	// (0x0004c845) fep_hwr_write_pane_g1_ParamLimits

0x1079,	// (0x0004c845) fep_hwr_write_pane_g1

0x1086,	// (0x0004c852) fep_hwr_write_pane_g2_ParamLimits

0x1086,	// (0x0004c852) fep_hwr_write_pane_g2

0x1093,	// (0x0004c85f) fep_hwr_write_pane_g3_ParamLimits

0x1093,	// (0x0004c85f) fep_hwr_write_pane_g3

0xb7b5,	// (0x00056f81) fep_hwr_write_pane_g4_ParamLimits

0xb7b5,	// (0x00056f81) fep_hwr_write_pane_g4

0x0005,

0xfaeb,	// (0x0005b2b7) fep_hwr_write_pane_g_ParamLimits

0xfaeb,	// (0x0005b2b7) fep_hwr_write_pane_g

0xd0b9,	// (0x00058885) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xd0b9,	// (0x00058885) bg_fep_hwr_candidate_pane_g2

0x10b6,	// (0x0004c882) cell_hwr_candidate_pane_ParamLimits

0x10b6,	// (0x0004c882) cell_hwr_candidate_pane

0x10f8,	// (0x0004c8c4) fep_hwr_candidate_pane_g1_ParamLimits

0x4892,	// (0x0005005e) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4892,	// (0x0005005e) bg_popup_fep_shadow_pane_cp2

0x4a22,	// (0x000501ee) fep_vkb_top_pane_g4_ParamLimits

0x4a22,	// (0x000501ee) fep_vkb_top_pane_g4

0x4a68,	// (0x00050234) fep_vkb_side_pane_g2_ParamLimits

0x4a68,	// (0x00050234) fep_vkb_side_pane_g2

0x898b,	// (0x00054157) list_setting_pane_t4_ParamLimits

0x898b,	// (0x00054157) list_setting_pane_t4

0x8a25,	// (0x000541f1) list_setting_number_pane_t5_ParamLimits

0x8a25,	// (0x000541f1) list_setting_number_pane_t5

0xc059,	// (0x00057825) list_double_heading_pane_cp2_ParamLimits

0xc059,	// (0x00057825) list_double_heading_pane_cp2

0xd25d,	// (0x00058a29) list_double_heading_pane_g1_cp2_ParamLimits

0xd25d,	// (0x00058a29) list_double_heading_pane_g1_cp2

0x4dbf,	// (0x0005058b) list_double_heading_pane_g2_cp2_ParamLimits

0x4dbf,	// (0x0005058b) list_double_heading_pane_g2_cp2

0x4dd3,	// (0x0005059f) list_double_heading_pane_t1_cp2_ParamLimits

0x4dd3,	// (0x0005059f) list_double_heading_pane_t1_cp2

0x4de9,	// (0x000505b5) list_double_heading_pane_t2_cp2_ParamLimits

0x4de9,	// (0x000505b5) list_double_heading_pane_t2_cp2

0x8ea0,	// (0x0005466c) aid_value_unit2

0xe7ec,	// (0x00059fb8) popup_preview_fixed_window

0x9706,	// (0x00054ed2) bg_popup_preview_window_pane_cp02

0x4dfb,	// (0x000505c7) list_preview_fixed_pane

0x4e41,	// (0x0005060d) list_empty_pane_fp_ParamLimits

0x4e41,	// (0x0005060d) list_empty_pane_fp

0x4e41,	// (0x0005060d) list_single_cale_day_pane_fp_ParamLimits

0x4e41,	// (0x0005060d) list_single_cale_day_pane_fp

0x4e41,	// (0x0005060d) list_single_graphic_heading_pane_fp_ParamLimits

0x4e41,	// (0x0005060d) list_single_graphic_heading_pane_fp

0x4e41,	// (0x0005060d) list_single_graphic_pane_fp_ParamLimits

0x4e41,	// (0x0005060d) list_single_graphic_pane_fp

0x4e41,	// (0x0005060d) list_single_heading_pane_fp_ParamLimits

0x4e41,	// (0x0005060d) list_single_heading_pane_fp

0x4e41,	// (0x0005060d) list_single_pane_fp_ParamLimits

0x4e41,	// (0x0005060d) list_single_pane_fp

0x4e57,	// (0x00050623) list_single_pane_fp_g1_ParamLimits

0x4e57,	// (0x00050623) list_single_pane_fp_g1

0xd269,	// (0x00058a35) list_single_pane_fp_g2_ParamLimits

0xd269,	// (0x00058a35) list_single_pane_fp_g2

0x4f65,	// (0x00050731) list_single_pane_fp_g3_ParamLimits

0x4f65,	// (0x00050731) list_single_pane_fp_g3

0x4e63,	// (0x0005062f) list_single_pane_fp_g4_ParamLimits

0x4e63,	// (0x0005062f) list_single_pane_fp_g4

0x0003,

0xfb4d,	// (0x0005b319) list_single_pane_fp_g_ParamLimits

0xfb4d,	// (0x0005b319) list_single_pane_fp_g

0xecc6,	// (0x0005a492) list_single_pane_fp_t1_ParamLimits

0xecc6,	// (0x0005a492) list_single_pane_fp_t1

0xecdd,	// (0x0005a4a9) list_single_graphic_pane_fp_g1_ParamLimits

0xecdd,	// (0x0005a4a9) list_single_graphic_pane_fp_g1

0x4e57,	// (0x00050623) list_single_graphic_pane_fp_g2_ParamLimits

0x4e57,	// (0x00050623) list_single_graphic_pane_fp_g2

0xd269,	// (0x00058a35) list_single_graphic_pane_fp_g3_ParamLimits

0xd269,	// (0x00058a35) list_single_graphic_pane_fp_g3

0x4f65,	// (0x00050731) list_single_graphic_pane_fp_g4_ParamLimits

0x4f65,	// (0x00050731) list_single_graphic_pane_fp_g4

0x4e63,	// (0x0005062f) list_single_graphic_pane_fp_g5_ParamLimits

0x4e63,	// (0x0005062f) list_single_graphic_pane_fp_g5

0x0004,

0xfb56,	// (0x0005b322) list_single_graphic_pane_fp_g_ParamLimits

0xfb56,	// (0x0005b322) list_single_graphic_pane_fp_g

0xece9,	// (0x0005a4b5) list_single_graphic_pane_fp_t1_ParamLimits

0xece9,	// (0x0005a4b5) list_single_graphic_pane_fp_t1

0xecdd,	// (0x0005a4a9) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xecdd,	// (0x0005a4a9) list_single_graphic_heading_pane_fp_g1

0x4e57,	// (0x00050623) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x4e57,	// (0x00050623) list_single_graphic_heading_pane_fp_g2

0xd269,	// (0x00058a35) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xd269,	// (0x00058a35) list_single_graphic_heading_pane_fp_g3

0x4f65,	// (0x00050731) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4f65,	// (0x00050731) list_single_graphic_heading_pane_fp_g4

0x4e63,	// (0x0005062f) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x4e63,	// (0x0005062f) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb56,	// (0x0005b322) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb56,	// (0x0005b322) list_single_graphic_heading_pane_fp_g

0xecff,	// (0x0005a4cb) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xecff,	// (0x0005a4cb) list_single_graphic_heading_pane_fp_t1

0xed15,	// (0x0005a4e1) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xed15,	// (0x0005a4e1) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb61,	// (0x0005b32d) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb61,	// (0x0005b32d) list_single_graphic_heading_pane_fp_t

0xed27,	// (0x0005a4f3) list_single_cale_day_pane_fp_g1_ParamLimits

0xed27,	// (0x0005a4f3) list_single_cale_day_pane_fp_g1

0x4e6f,	// (0x0005063b) list_single_cale_day_pane_fp_g2_ParamLimits

0x4e6f,	// (0x0005063b) list_single_cale_day_pane_fp_g2

0x1184,	// (0x0004c950) list_single_cale_day_pane_fp_g3_ParamLimits

0x1184,	// (0x0004c950) list_single_cale_day_pane_fp_g3

0x11ac,	// (0x0004c978) list_single_cale_day_pane_fp_g4_ParamLimits

0x11ac,	// (0x0004c978) list_single_cale_day_pane_fp_g4

0x11d0,	// (0x0004c99c) list_single_cale_day_pane_fp_g5_ParamLimits

0x11d0,	// (0x0004c99c) list_single_cale_day_pane_fp_g5

0x0004,

0xfb66,	// (0x0005b332) list_single_cale_day_pane_fp_g_ParamLimits

0xfb66,	// (0x0005b332) list_single_cale_day_pane_fp_g

0xed5f,	// (0x0005a52b) list_single_cale_day_pane_fp_t1_ParamLimits

0xed5f,	// (0x0005a52b) list_single_cale_day_pane_fp_t1

0xed85,	// (0x0005a551) list_single_cale_day_pane_fp_t2_ParamLimits

0xed85,	// (0x0005a551) list_single_cale_day_pane_fp_t2

0xed9e,	// (0x0005a56a) list_single_cale_day_pane_fp_t3_ParamLimits

0xed9e,	// (0x0005a56a) list_single_cale_day_pane_fp_t3

0x0002,

0xfb71,	// (0x0005b33d) list_single_cale_day_pane_fp_t_ParamLimits

0xfb71,	// (0x0005b33d) list_single_cale_day_pane_fp_t

0x4e57,	// (0x00050623) list_empty_pane_fp_g1_ParamLimits

0x4e57,	// (0x00050623) list_empty_pane_fp_g1

0xedb7,	// (0x0005a583) list_empty_pane_fp_t1

0xedc5,	// (0x0005a591) list_empty_pane_fp_t2

0x0001,

0xfb78,	// (0x0005b344) list_empty_pane_fp_t

0x4e57,	// (0x00050623) list_single_heading_pane_fp_g1_ParamLimits

0x4e57,	// (0x00050623) list_single_heading_pane_fp_g1

0xd269,	// (0x00058a35) list_single_heading_pane_fp_g2_ParamLimits

0xd269,	// (0x00058a35) list_single_heading_pane_fp_g2

0x4f65,	// (0x00050731) list_single_heading_pane_fp_g3_ParamLimits

0x4f65,	// (0x00050731) list_single_heading_pane_fp_g3

0x0002,

0xfb7d,	// (0x0005b349) list_single_heading_pane_fp_g_ParamLimits

0xfb7d,	// (0x0005b349) list_single_heading_pane_fp_g

0xedd3,	// (0x0005a59f) list_single_heading_pane_fp_t1_ParamLimits

0xedd3,	// (0x0005a59f) list_single_heading_pane_fp_t1

0xede5,	// (0x0005a5b1) list_single_heading_pane_fp_t2_ParamLimits

0xede5,	// (0x0005a5b1) list_single_heading_pane_fp_t2

0x0001,

0xfb84,	// (0x0005b350) list_single_heading_pane_fp_t_ParamLimits

0xfb84,	// (0x0005b350) list_single_heading_pane_fp_t

0x9ee4,	// (0x000556b0) aid_size_cell_fast

0x9686,	// (0x00054e52) soft_indicator_pane_cp1_t1

0x9f1e,	// (0x000556ea) cell_app_pane_cp2_ParamLimits

0x9f1e,	// (0x000556ea) cell_app_pane_cp2

0x0f48,	// (0x0004c714) fep_hwr_candidate_drop_down_list_pane

0xd0c7,	// (0x00058893) fep_hwr_candidate_pane_g3_ParamLimits

0xd0c7,	// (0x00058893) fep_hwr_candidate_pane_g3

0xd0d4,	// (0x000588a0) fep_hwr_candidate_pane_g4_ParamLimits

0xd0d4,	// (0x000588a0) fep_hwr_candidate_pane_g4

0x0002,

0xfaf8,	// (0x0005b2c4) fep_hwr_candidate_pane_g_ParamLimits

0xfaf8,	// (0x0005b2c4) fep_hwr_candidate_pane_g

0x4917,	// (0x000500e3) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4917,	// (0x000500e3) fep_vkb_candidate_drop_down_list_pane

0x4d1a,	// (0x000504e6) fep_vkb_candidate_pane_g3

0x4d22,	// (0x000504ee) fep_vkb_candidate_pane_g4

0x0002,

0xfb25,	// (0x0005b2f1) fep_vkb_candidate_pane_g

0x4a22,	// (0x000501ee) cell_hwr_candidate_pane_g1_ParamLimits

0x4d39,	// (0x00050505) cell_hwr_candidate_pane_g3_ParamLimits

0x4d39,	// (0x00050505) cell_hwr_candidate_pane_g3

0x4d5a,	// (0x00050526) cell_hwr_candidate_pane_g4_ParamLimits

0x4d5a,	// (0x00050526) cell_hwr_candidate_pane_g4

0x0002,

0xfb3f,	// (0x0005b30b) cell_hwr_candidate_pane_g_ParamLimits

0xfb3f,	// (0x0005b30b) cell_hwr_candidate_pane_g

0x4d7b,	// (0x00050547) cell_vkb_candidate_pane_g3_ParamLimits

0x4d7b,	// (0x00050547) cell_vkb_candidate_pane_g3

0x4d96,	// (0x00050562) cell_vkb_candidate_pane_g4_ParamLimits

0x4d96,	// (0x00050562) cell_vkb_candidate_pane_g4

0xd275,	// (0x00058a41) cell_app_pane_cp2_g1_ParamLimits

0xd275,	// (0x00058a41) cell_app_pane_cp2_g1

0x4e99,	// (0x00050665) cell_app_pane_cp2_g2_ParamLimits

0x4e99,	// (0x00050665) cell_app_pane_cp2_g2

0x0001,

0xfb89,	// (0x0005b355) cell_app_pane_cp2_g_ParamLimits

0xfb89,	// (0x0005b355) cell_app_pane_cp2_g

0x4ea5,	// (0x00050671) cell_app_pane_cp2_t1_ParamLimits

0x4ea5,	// (0x00050671) cell_app_pane_cp2_t1

0x9ce2,	// (0x000554ae) grid_highlight_pane_cp1_ParamLimits

0x9ce2,	// (0x000554ae) grid_highlight_pane_cp1

0x11f4,	// (0x0004c9c0) cell_hwr_candidate_pane_cp1_ParamLimits

0x11f4,	// (0x0004c9c0) cell_hwr_candidate_pane_cp1

0x4a22,	// (0x000501ee) fep_hwr_candidate_drop_down_list_pane_g1

0x4eb7,	// (0x00050683) fep_hwr_candidate_drop_down_list_pane_g2

0x4ec4,	// (0x00050690) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb8e,	// (0x0005b35a) fep_hwr_candidate_drop_down_list_pane_g

0x1213,	// (0x0004c9df) fep_hwr_candidate_drop_down_list_scroll_pane

0x121c,	// (0x0004c9e8) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x121c,	// (0x0004c9e8) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1229,	// (0x0004c9f5) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1229,	// (0x0004c9f5) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1236,	// (0x0004ca02) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1236,	// (0x0004ca02) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x4d7b,	// (0x00050547) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4d7b,	// (0x00050547) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x4d96,	// (0x00050562) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4d96,	// (0x00050562) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1243,	// (0x0004ca0f) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1243,	// (0x0004ca0f) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x125e,	// (0x0004ca2a) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x125e,	// (0x0004ca2a) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1279,	// (0x0004ca45) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1279,	// (0x0004ca45) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb95,	// (0x0005b361) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb95,	// (0x0005b361) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x4ed1,	// (0x0005069d) cell_vkb_candidate_pane_cp1_ParamLimits

0x4ed1,	// (0x0005069d) cell_vkb_candidate_pane_cp1

0x4a22,	// (0x000501ee) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4a22,	// (0x000501ee) fep_vkb_candidate_drop_down_list_pane_g1

0x4eb7,	// (0x00050683) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x4eb7,	// (0x00050683) fep_vkb_candidate_drop_down_list_pane_g2

0x4ec4,	// (0x00050690) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x4ec4,	// (0x00050690) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb8e,	// (0x0005b35a) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb8e,	// (0x0005b35a) fep_vkb_candidate_drop_down_list_pane_g

0x4ef1,	// (0x000506bd) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x4ef1,	// (0x000506bd) fep_vkb_candidate_drop_down_list_scroll_pane

0x4efe,	// (0x000506ca) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4efe,	// (0x000506ca) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x4f0b,	// (0x000506d7) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4f0b,	// (0x000506d7) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x4f17,	// (0x000506e3) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x4f17,	// (0x000506e3) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x4d39,	// (0x00050505) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4d39,	// (0x00050505) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x4d5a,	// (0x00050526) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4d5a,	// (0x00050526) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x4f23,	// (0x000506ef) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4f23,	// (0x000506ef) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x4f79,	// (0x00050745) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x4f79,	// (0x00050745) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x4f9a,	// (0x00050766) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x4f9a,	// (0x00050766) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba6,	// (0x0005b372) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba6,	// (0x0005b372) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x924b,	// (0x00054a17) title_pane_g1_ParamLimits

0x925e,	// (0x00054a2a) title_pane_g2_ParamLimits

0xf529,	// (0x0005acf5) title_pane_g_ParamLimits

0xc012,	// (0x000577de) aid_call2_pane

0xc01a,	// (0x000577e6) aid_call_pane

0xc022,	// (0x000577ee) popup_clock_analogue_window_g1

0xc022,	// (0x000577ee) popup_clock_analogue_window_g2

0xf29c,	// (0x0005aa68) popup_clock_analogue_window_g3

0xf2a5,	// (0x0005aa71) popup_clock_analogue_window_g4

0x8ec2,	// (0x0005468e) popup_clock_analogue_window_g5

0x0004,

0xf6c9,	// (0x0005ae95) popup_clock_analogue_window_g

0xf2ad,	// (0x0005aa79) popup_clock_analogue_window_t1

0xf2bb,	// (0x0005aa87) clock_digital_number_pane_ParamLimits

0xf2bb,	// (0x0005aa87) clock_digital_number_pane

0xf2c7,	// (0x0005aa93) clock_digital_number_pane_cp02_ParamLimits

0xf2c7,	// (0x0005aa93) clock_digital_number_pane_cp02

0xf2d3,	// (0x0005aa9f) clock_digital_number_pane_cp03_ParamLimits

0xf2d3,	// (0x0005aa9f) clock_digital_number_pane_cp03

0xf2df,	// (0x0005aaab) clock_digital_number_pane_cp04_ParamLimits

0xf2df,	// (0x0005aaab) clock_digital_number_pane_cp04

0xf2eb,	// (0x0005aab7) clock_digital_separator_pane_ParamLimits

0xf2eb,	// (0x0005aab7) clock_digital_separator_pane

0xf2f7,	// (0x0005aac3) popup_clock_digital_window_t1_ParamLimits

0xf2f7,	// (0x0005aac3) popup_clock_digital_window_t1

0x8ec2,	// (0x0005468e) clock_digital_number_pane_g1

0x8ec2,	// (0x0005468e) clock_digital_number_pane_g2

0x0001,

0xf6d4,	// (0x0005aea0) clock_digital_number_pane_g

0x8ec2,	// (0x0005468e) clock_digital_separator_pane_g1

0x8ec2,	// (0x0005468e) clock_digital_separator_pane_g2

0x0001,

0xf6d4,	// (0x0005aea0) clock_digital_separator_pane_g

0xafa8,	// (0x00056774) aid_fill_nsta_ParamLimits

0xb0de,	// (0x000568aa) indicator_nsta_pane_ParamLimits

0x08d7,	// (0x0004c0a3) popup_clock_analogue_window

0x08d7,	// (0x0004c0a3) popup_clock_digital_window

0xce6d,	// (0x00058639) grid_indicator_nsta_pane_ParamLimits

0x41a8,	// (0x0004f974) clock_nsta_pane_t2

0x0001,

0xfa78,	// (0x0005b244) clock_nsta_pane_t

0xf27d,	// (0x0005aa49) aid_size_max_handle

0xa183,	// (0x0005594f) aid_size_min_handle

0xc480,	// (0x00057c4c) editor_scroll_pane

0x4fb5,	// (0x00050781) ex_editor_pane

0x9e60,	// (0x0005562c) scroll_pane_cp13

0x9c39,	// (0x00055405) scroll_pane_cp14

0xc051,	// (0x0005781d) scroll_pane_cp36

0xa33b,	// (0x00055b07) list_single_graphic_hl_pane_cp2_ParamLimits

0xa33b,	// (0x00055b07) list_single_graphic_hl_pane_cp2

0xb70f,	// (0x00056edb) list_single_graphic_hl_pane_ParamLimits

0xb70f,	// (0x00056edb) list_single_graphic_hl_pane

0x8d3a,	// (0x00054506) aid_size_min_hl_cp1

0x4fbd,	// (0x00050789) list_highlight_pane_cp34_ParamLimits

0x4fbd,	// (0x00050789) list_highlight_pane_cp34

0x4fce,	// (0x0005079a) list_single_graphic_hl_pane_g1_ParamLimits

0x4fce,	// (0x0005079a) list_single_graphic_hl_pane_g1

0x8d43,	// (0x0005450f) list_single_graphic_hl_pane_g2_ParamLimits

0x8d43,	// (0x0005450f) list_single_graphic_hl_pane_g2

0x8d43,	// (0x0005450f) list_single_graphic_hl_pane_g3_ParamLimits

0x8d43,	// (0x0005450f) list_single_graphic_hl_pane_g3

0xc40b,	// (0x00057bd7) list_single_graphic_hl_pane_g4_ParamLimits

0xc40b,	// (0x00057bd7) list_single_graphic_hl_pane_g4

0xb7ca,	// (0x00056f96) list_single_graphic_hl_pane_g5_ParamLimits

0xb7ca,	// (0x00056f96) list_single_graphic_hl_pane_g5

0x0004,

0xfbb7,	// (0x0005b383) list_single_graphic_hl_pane_g_ParamLimits

0xfbb7,	// (0x0005b383) list_single_graphic_hl_pane_g

0x8d4f,	// (0x0005451b) list_single_graphic_hl_pane_t1_ParamLimits

0x8d4f,	// (0x0005451b) list_single_graphic_hl_pane_t1

0x4fdb,	// (0x000507a7) aid_size_min_hl_cp2

0x4fe4,	// (0x000507b0) list_highlight_pane_cp34_cp2_ParamLimits

0x4fe4,	// (0x000507b0) list_highlight_pane_cp34_cp2

0x4fce,	// (0x0005079a) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x4fce,	// (0x0005079a) list_single_graphic_hl_pane_g1_cp2

0x4ff1,	// (0x000507bd) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x4ff1,	// (0x000507bd) list_single_graphic_hl_pane_g2_cp2

0xd293,	// (0x00058a5f) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xd293,	// (0x00058a5f) list_single_graphic_hl_pane_g3_cp2

0xbfb8,	// (0x00057784) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xbfb8,	// (0x00057784) list_single_graphic_hl_pane_g4_cp2

0x500b,	// (0x000507d7) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x500b,	// (0x000507d7) list_single_graphic_hl_pane_g5_cp2

0xa6c7,	// (0x00055e93) control_pane_g4_ParamLimits

0xa6c7,	// (0x00055e93) control_pane_g4

0x9ec6,	// (0x00055692) bg_popup_sub_pane_cp10_ParamLimits

0x47bc,	// (0x0004ff88) list_choice_list_pane_ParamLimits

0x47cb,	// (0x0004ff97) scroll_pane_cp23

0x9706,	// (0x00054ed2) bg_popup_preview_window_pane_cp02_ParamLimits

0x4dfb,	// (0x000505c7) list_preview_fixed_pane_ParamLimits

0x4e11,	// (0x000505dd) list_preview_fixed_pane_cp_ParamLimits

0x4e11,	// (0x000505dd) list_preview_fixed_pane_cp

0x4e1d,	// (0x000505e9) popup_preview_fixed_window_g1_ParamLimits

0x4e1d,	// (0x000505e9) popup_preview_fixed_window_g1

0x4e29,	// (0x000505f5) popup_preview_fixed_window_g2_ParamLimits

0x4e29,	// (0x000505f5) popup_preview_fixed_window_g2

0x0002,

0xfb46,	// (0x0005b312) popup_preview_fixed_window_g_ParamLimits

0xfb46,	// (0x0005b312) popup_preview_fixed_window_g

0xf1f1,	// (0x0005a9bd) aid_navi_side_left_pane_ParamLimits

0xf206,	// (0x0005a9d2) aid_navi_side_right_pane_ParamLimits

0xf21e,	// (0x0005a9ea) navi_icon_pane_stacon_ParamLimits

0xf232,	// (0x0005a9fe) navi_navi_pane_stacon_ParamLimits

0xf21e,	// (0x0005a9ea) navi_text_pane_stacon_ParamLimits

0x8eb8,	// (0x00054684) main_text_info_pane

0x5035,	// (0x00050801) listscroll_text_info_pane

0x503d,	// (0x00050809) list_text_info_pane_ParamLimits

0x503d,	// (0x00050809) list_text_info_pane

0x504c,	// (0x00050818) scroll_pane_cp24_ParamLimits

0x504c,	// (0x00050818) scroll_pane_cp24

0xd2a1,	// (0x00058a6d) list_text_info_pane_t1_ParamLimits

0xd2a1,	// (0x00058a6d) list_text_info_pane_t1

0xa86f,	// (0x0005603b) popup_fast_swap2_window_ParamLimits

0xa86f,	// (0x0005603b) popup_fast_swap2_window

0x509e,	// (0x0005086a) aid_size_cell_fast2

0x8eb8,	// (0x00054684) bg_popup_window_pane_cp17

0x50a8,	// (0x00050874) heading_pane_cp2

0x50b0,	// (0x0005087c) listscroll_fast2_pane

0x50b8,	// (0x00050884) grid_fast2_pane

0x50c2,	// (0x0005088e) listscroll_fast2_pane_g1

0x50ca,	// (0x00050896) listscroll_fast2_pane_g2

0x0001,

0xfbc2,	// (0x0005b38e) listscroll_fast2_pane_g

0x9e60,	// (0x0005562c) scroll_pane_cp26

0x50d4,	// (0x000508a0) cell_fast2_pane_ParamLimits

0x50d4,	// (0x000508a0) cell_fast2_pane

0x50e9,	// (0x000508b5) cell_fast2_pane_g1

0x50f2,	// (0x000508be) cell_fast2_pane_g2

0x50fb,	// (0x000508c7) cell_fast2_pane_g3

0x0002,

0xfbc7,	// (0x0005b393) cell_fast2_pane_g

0x9a63,	// (0x0005522f) grid_highlight_pane_cp9

0x9a78,	// (0x00055244) main_eswt_pane_ParamLimits

0x9a78,	// (0x00055244) main_eswt_pane

0x5061,	// (0x0005082d) list_single_text_info_pane

0x5103,	// (0x000508cf) eswt_ctrl_button_pane

0x5103,	// (0x000508cf) eswt_ctrl_canvas_pane

0xd2bd,	// (0x00058a89) eswt_ctrl_combo_pane

0x5103,	// (0x000508cf) eswt_ctrl_default_pane

0x5103,	// (0x000508cf) eswt_ctrl_label_pane

0x5113,	// (0x000508df) eswt_ctrl_wait_pane

0xd2c5,	// (0x00058a91) eswt_shell_pane

0x8eb8,	// (0x00054684) listscroll_eswt_app_pane

0x513b,	// (0x00050907) popup_eswt_tasktip_window_ParamLimits

0x513b,	// (0x00050907) popup_eswt_tasktip_window

0x2268,	// (0x0004da34) bg_popup_window_pane_cp18

0x5154,	// (0x00050920) eswt_control_pane_g1_ParamLimits

0x5154,	// (0x00050920) eswt_control_pane_g1

0x5161,	// (0x0005092d) eswt_control_pane_g2_ParamLimits

0x5161,	// (0x0005092d) eswt_control_pane_g2

0x516e,	// (0x0005093a) eswt_control_pane_g3_ParamLimits

0x516e,	// (0x0005093a) eswt_control_pane_g3

0x517b,	// (0x00050947) eswt_control_pane_g4_ParamLimits

0x517b,	// (0x00050947) eswt_control_pane_g4

0x0003,

0xfbce,	// (0x0005b39a) eswt_control_pane_g_ParamLimits

0xfbce,	// (0x0005b39a) eswt_control_pane_g

0x9ce2,	// (0x000554ae) bg_button_pane_ParamLimits

0x9ce2,	// (0x000554ae) bg_button_pane

0x9a78,	// (0x00055244) common_borders_pane_copy2_ParamLimits

0x9a78,	// (0x00055244) common_borders_pane_copy2

0x5188,	// (0x00050954) control_button_pane_g1_ParamLimits

0x5188,	// (0x00050954) control_button_pane_g1

0x5194,	// (0x00050960) control_button_pane_g2_ParamLimits

0x5194,	// (0x00050960) control_button_pane_g2

0x51a0,	// (0x0005096c) control_button_pane_g3_ParamLimits

0x51a0,	// (0x0005096c) control_button_pane_g3

0x0002,

0xfbd7,	// (0x0005b3a3) control_button_pane_g_ParamLimits

0xfbd7,	// (0x0005b3a3) control_button_pane_g

0x51b4,	// (0x00050980) control_button_pane_t1

0x51c2,	// (0x0005098e) control_button_pane_t2

0x0001,

0xfbde,	// (0x0005b3aa) control_button_pane_t

0x21dc,	// (0x0004d9a8) bg_button_pane_g1

0x21e4,	// (0x0004d9b0) bg_button_pane_g2

0x21ec,	// (0x0004d9b8) bg_button_pane_g3

0x21f4,	// (0x0004d9c0) bg_button_pane_g4

0x21fc,	// (0x0004d9c8) bg_button_pane_g5

0x2204,	// (0x0004d9d0) bg_button_pane_g6

0x220c,	// (0x0004d9d8) bg_button_pane_g7

0x2214,	// (0x0004d9e0) bg_button_pane_g8

0x221c,	// (0x0004d9e8) bg_button_pane_g9

0x0008,

0xf82b,	// (0x0005aff7) bg_button_pane_g

0x4777,	// (0x0004ff43) common_borders_pane_ParamLimits

0x4777,	// (0x0004ff43) common_borders_pane

0x5154,	// (0x00050920) eswt_control_pane_g1_copy1_ParamLimits

0x5154,	// (0x00050920) eswt_control_pane_g1_copy1

0x5161,	// (0x0005092d) eswt_control_pane_g2_copy1_ParamLimits

0x5161,	// (0x0005092d) eswt_control_pane_g2_copy1

0x516e,	// (0x0005093a) eswt_control_pane_g3_copy1_ParamLimits

0x516e,	// (0x0005093a) eswt_control_pane_g3_copy1

0x517b,	// (0x00050947) eswt_control_pane_g4_copy1_ParamLimits

0x517b,	// (0x00050947) eswt_control_pane_g4_copy1

0x47b2,	// (0x0004ff7e) bg_eswt_ctrl_canvas_pane_g1

0x4777,	// (0x0004ff43) common_borders_pane_cp2_ParamLimits

0x4777,	// (0x0004ff43) common_borders_pane_cp2

0x4777,	// (0x0004ff43) common_borders_pane_cp3_ParamLimits

0x4777,	// (0x0004ff43) common_borders_pane_cp3

0x51d0,	// (0x0005099c) separator_horizontal_pane

0x51d8,	// (0x000509a4) separator_vertical_pane

0x5154,	// (0x00050920) eswt_control_pane_g1_copy2_ParamLimits

0x5154,	// (0x00050920) eswt_control_pane_g1_copy2

0x5161,	// (0x0005092d) eswt_control_pane_g2_copy2_ParamLimits

0x5161,	// (0x0005092d) eswt_control_pane_g2_copy2

0x516e,	// (0x0005093a) eswt_control_pane_g3_copy2_ParamLimits

0x516e,	// (0x0005093a) eswt_control_pane_g3_copy2

0x517b,	// (0x00050947) eswt_control_pane_g4_copy2_ParamLimits

0x517b,	// (0x00050947) eswt_control_pane_g4_copy2

0x8eb8,	// (0x00054684) common_borders_pane_cp4

0x51e1,	// (0x000509ad) separator_horizontal_pane_g1

0x51ea,	// (0x000509b6) separator_horizontal_pane_g2

0x51f3,	// (0x000509bf) separator_horizontal_pane_g3

0x0002,

0xfbe3,	// (0x0005b3af) separator_horizontal_pane_g

0x5154,	// (0x00050920) eswt_control_pane_g1_copy3_ParamLimits

0x5154,	// (0x00050920) eswt_control_pane_g1_copy3

0x5161,	// (0x0005092d) eswt_control_pane_g2_copy3_ParamLimits

0x5161,	// (0x0005092d) eswt_control_pane_g2_copy3

0x516e,	// (0x0005093a) eswt_control_pane_g3_copy3_ParamLimits

0x516e,	// (0x0005093a) eswt_control_pane_g3_copy3

0x517b,	// (0x00050947) eswt_control_pane_g4_copy3_ParamLimits

0x517b,	// (0x00050947) eswt_control_pane_g4_copy3

0x8eb8,	// (0x00054684) common_borders_pane_cp5

0x51fc,	// (0x000509c8) separator_vertical_pane_g1

0x5205,	// (0x000509d1) separator_vertical_pane_g2

0x520e,	// (0x000509da) separator_vertical_pane_g3

0x0002,

0xfbea,	// (0x0005b3b6) separator_vertical_pane_g

0x5154,	// (0x00050920) eswt_control_pane_g1_copy4_ParamLimits

0x5154,	// (0x00050920) eswt_control_pane_g1_copy4

0x5161,	// (0x0005092d) eswt_control_pane_g2_copy4_ParamLimits

0x5161,	// (0x0005092d) eswt_control_pane_g2_copy4

0x516e,	// (0x0005093a) eswt_control_pane_g3_copy4_ParamLimits

0x516e,	// (0x0005093a) eswt_control_pane_g3_copy4

0x517b,	// (0x00050947) eswt_control_pane_g4_copy4_ParamLimits

0x517b,	// (0x00050947) eswt_control_pane_g4_copy4

0xd2e5,	// (0x00058ab1) eswt_ctrl_combo_button_pane

0xd2ed,	// (0x00058ab9) eswt_ctrl_input_pane

0xd2f5,	// (0x00058ac1) popup_choice_list_window_cp70

0xd2fd,	// (0x00058ac9) eswt_ctrl_input_pane_t1

0x8eb8,	// (0x00054684) input_focus_pane_cp70

0x4777,	// (0x0004ff43) bg_button_pane_cp70_ParamLimits

0x4777,	// (0x0004ff43) bg_button_pane_cp70

0xd30b,	// (0x00058ad7) eswt_ctrl_combo_button_pane_g1

0x5245,	// (0x00050a11) wait_bar_pane_cp70

0x2268,	// (0x0004da34) bg_popup_window_pane_cp70_ParamLimits

0x2268,	// (0x0004da34) bg_popup_window_pane_cp70

0x524d,	// (0x00050a19) popup_eswt_tasktip_window_t1

0x5263,	// (0x00050a2f) wait_bar_pane_cp71_ParamLimits

0x5263,	// (0x00050a2f) wait_bar_pane_cp71

0x526f,	// (0x00050a3b) grid_eswt_app_pane

0xa1c8,	// (0x00055994) scroll_pane_cp70

0xd313,	// (0x00058adf) cell_eswt_app_pane_ParamLimits

0xd313,	// (0x00058adf) cell_eswt_app_pane

0xd33d,	// (0x00058b09) cell_eswt_app_pane_g1_ParamLimits

0xd33d,	// (0x00058b09) cell_eswt_app_pane_g1

0xd36c,	// (0x00058b38) cell_eswt_app_pane_g2_ParamLimits

0xd36c,	// (0x00058b38) cell_eswt_app_pane_g2

0x0001,

0xfbf1,	// (0x0005b3bd) cell_eswt_app_pane_g_ParamLimits

0xfbf1,	// (0x0005b3bd) cell_eswt_app_pane_g

0xd390,	// (0x00058b5c) cell_eswt_app_pane_t1_ParamLimits

0xd390,	// (0x00058b5c) cell_eswt_app_pane_t1

0x532d,	// (0x00050af9) grid_highlight_pane_cp70_ParamLimits

0x532d,	// (0x00050af9) grid_highlight_pane_cp70

0xc386,	// (0x00057b52) set_content_pane_g1

0xa659,	// (0x00055e25) status_small_volume_pane

0xb7de,	// (0x00056faa) status_small_volume_pane_g1

0xb7e6,	// (0x00056fb2) volume_small2_pane

0xb7ef,	// (0x00056fbb) volume_small2_pane_g1

0xb7f8,	// (0x00056fc4) volume_small2_pane_g2

0xb801,	// (0x00056fcd) volume_small2_pane_g3

0xb80a,	// (0x00056fd6) volume_small2_pane_g4

0xb813,	// (0x00056fdf) volume_small2_pane_g5

0xb81c,	// (0x00056fe8) volume_small2_pane_g6

0xb825,	// (0x00056ff1) volume_small2_pane_g7

0xb82e,	// (0x00056ffa) volume_small2_pane_g8

0xb837,	// (0x00057003) volume_small2_pane_g9

0xb840,	// (0x0005700c) volume_small2_pane_g10

0x0009,

0xfbf6,	// (0x0005b3c2) volume_small2_pane_g

0x4b6a,	// (0x00050336) fep_vkb_top_text_pane_g1_ParamLimits

0xd205,	// (0x000589d1) fep_vkb_top_text_pane_t1_ParamLimits

0x4e35,	// (0x00050601) popup_preview_fixed_window_g3_ParamLimits

0x4e35,	// (0x00050601) popup_preview_fixed_window_g3

0xaee6,	// (0x000566b2) popup_toolbar_trans_pane

0xcb0a,	// (0x000582d6) aid_height_set_list_ParamLimits

0x35b7,	// (0x0004ed83) aid_size_parent_ParamLimits

0x9ec6,	// (0x00055692) list_highlight_pane_cp2_ParamLimits

0xc386,	// (0x00057b52) set_content_pane_g1_ParamLimits

0xcc72,	// (0x0005843e) list_single_image_pane_ParamLimits

0xcc72,	// (0x0005843e) list_single_image_pane

0xd3c2,	// (0x00058b8e) aid_size_cell_image_ParamLimits

0xd3c2,	// (0x00058b8e) aid_size_cell_image

0xd3cf,	// (0x00058b9b) grid_single_image_pane_ParamLimits

0xd3cf,	// (0x00058b9b) grid_single_image_pane

0xd269,	// (0x00058a35) list_single_image_pane_g1_ParamLimits

0xd269,	// (0x00058a35) list_single_image_pane_g1

0x4f65,	// (0x00050731) list_single_image_pane_g2_ParamLimits

0x4f65,	// (0x00050731) list_single_image_pane_g2

0x0001,

0xfc0b,	// (0x0005b3d7) list_single_image_pane_g_ParamLimits

0xfc0b,	// (0x0005b3d7) list_single_image_pane_g

0x5352,	// (0x00050b1e) list_single_image_pane_t1_ParamLimits

0x5352,	// (0x00050b1e) list_single_image_pane_t1

0xd3db,	// (0x00058ba7) cell_image_list_pane_ParamLimits

0xd3db,	// (0x00058ba7) cell_image_list_pane

0xd3ef,	// (0x00058bbb) cell_image_list_pane_g1

0xd3f8,	// (0x00058bc4) cell_image_list_pane_g2

0x0001,

0xfc10,	// (0x0005b3dc) cell_image_list_pane_g

0xd401,	// (0x00058bcd) aid_size_cell_tb_trans_pane

0x9ce2,	// (0x000554ae) bg_tb_trans_pane

0xd413,	// (0x00058bdf) grid_tb_trans_pane

0x21dc,	// (0x0004d9a8) bg_tb_trans_pane_g1

0x21e4,	// (0x0004d9b0) bg_tb_trans_pane_g2

0x21ec,	// (0x0004d9b8) bg_tb_trans_pane_g3

0x21f4,	// (0x0004d9c0) bg_tb_trans_pane_g4

0x21fc,	// (0x0004d9c8) bg_tb_trans_pane_g5

0x2214,	// (0x0004d9e0) bg_tb_trans_pane_g6

0x221c,	// (0x0004d9e8) bg_tb_trans_pane_g7

0x2204,	// (0x0004d9d0) bg_tb_trans_pane_g8

0x220c,	// (0x0004d9d8) bg_tb_trans_pane_g9

0x0008,

0xfc15,	// (0x0005b3e1) bg_tb_trans_pane_g

0xd427,	// (0x00058bf3) cell_toolbar_trans_pane_ParamLimits

0xd427,	// (0x00058bf3) cell_toolbar_trans_pane

0x47b2,	// (0x0004ff7e) cell_toolbar_trans_pane_g1

0xcf36,	// (0x00058702) list_form2_midp_pane_t1

0xcf44,	// (0x00058710) list_form2_midp_pane_t2

0x0001,

0xfabe,	// (0x0005b28a) list_form2_midp_pane_t

0x4399,	// (0x0004fb65) scroll_pane_cp51_ParamLimits

0x4555,	// (0x0004fd21) form2_midp_wait_pane_g1

0x455e,	// (0x0004fd2a) form2_midp_wait_pane_g2

0x4567,	// (0x0004fd33) form2_midp_wait_pane_g3

0x0002,

0xfad3,	// (0x0005b29f) form2_midp_wait_pane_g

0x939c,	// (0x00054b68) list_highlight_pane_cp21_ParamLimits

0x45af,	// (0x0004fd7b) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x45be,	// (0x0004fd8a) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x376b,	// (0x0004ef37) list_single_2graphic_im_pane_ParamLimits

0x376b,	// (0x0004ef37) list_single_2graphic_im_pane

0xd44d,	// (0x00058c19) list_single_2graphic_im_pane_g1_ParamLimits

0xd44d,	// (0x00058c19) list_single_2graphic_im_pane_g1

0xd45e,	// (0x00058c2a) list_single_2graphic_im_pane_g2_ParamLimits

0xd45e,	// (0x00058c2a) list_single_2graphic_im_pane_g2

0xd46a,	// (0x00058c36) list_single_2graphic_im_pane_g3_ParamLimits

0xd46a,	// (0x00058c36) list_single_2graphic_im_pane_g3

0x0003,

0xfc28,	// (0x0005b3f4) list_single_2graphic_im_pane_g_ParamLimits

0xfc28,	// (0x0005b3f4) list_single_2graphic_im_pane_g

0xd47e,	// (0x00058c4a) list_single_2graphic_im_pane_t1_ParamLimits

0xd47e,	// (0x00058c4a) list_single_2graphic_im_pane_t1

0x4e41,	// (0x0005060d) list_single_graphic_2heading_pane_fp_ParamLimits

0x4e41,	// (0x0005060d) list_single_graphic_2heading_pane_fp

0xecdd,	// (0x0005a4a9) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xecdd,	// (0x0005a4a9) list_single_graphic_2heading_pane_fp_g1

0x4e57,	// (0x00050623) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x4e57,	// (0x00050623) list_single_graphic_2heading_pane_fp_g2

0xd269,	// (0x00058a35) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xd269,	// (0x00058a35) list_single_graphic_2heading_pane_fp_g3

0x4f65,	// (0x00050731) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4f65,	// (0x00050731) list_single_graphic_2heading_pane_fp_g4

0x4e63,	// (0x0005062f) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x4e63,	// (0x0005062f) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb56,	// (0x0005b322) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb56,	// (0x0005b322) list_single_graphic_2heading_pane_fp_g

0xedfb,	// (0x0005a5c7) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xedfb,	// (0x0005a5c7) list_single_graphic_2heading_pane_fp_t1

0xed15,	// (0x0005a4e1) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xed15,	// (0x0005a4e1) list_single_graphic_2heading_pane_fp_t2

0xee11,	// (0x0005a5dd) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xee11,	// (0x0005a5dd) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc31,	// (0x0005b3fd) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc31,	// (0x0005b3fd) list_single_graphic_2heading_pane_fp_t

0x483e,	// (0x0005000a) fep_hwr_write_pane_g5_ParamLimits

0x483e,	// (0x0005000a) fep_hwr_write_pane_g5

0x484a,	// (0x00050016) fep_hwr_write_pane_g6_ParamLimits

0x484a,	// (0x00050016) fep_hwr_write_pane_g6

0xd2c5,	// (0x00058a91) eswt_shell_pane_ParamLimits

0x2268,	// (0x0004da34) bg_popup_window_pane_cp18_ParamLimits

0x514c,	// (0x00050918) heading_pane_cp70

0x524d,	// (0x00050a19) popup_eswt_tasktip_window_t1_ParamLimits

0xb003,	// (0x000567cf) aid_touch_tab_arrow_left

0xb019,	// (0x000567e5) aid_touch_tab_arrow_right

0x9276,	// (0x00054a42) title_pane_g3_ParamLimits

0x9276,	// (0x00054a42) title_pane_g3

0x9ca1,	// (0x0005546d) set_value_pane_g1

0xaee6,	// (0x000566b2) popup_toolbar_trans_pane_ParamLimits

0xd401,	// (0x00058bcd) aid_size_cell_tb_trans_pane_ParamLimits

0x9ce2,	// (0x000554ae) bg_tb_trans_pane_ParamLimits

0xd413,	// (0x00058bdf) grid_tb_trans_pane_ParamLimits

0x9706,	// (0x00054ed2) cont_note_pane_ParamLimits

0x9706,	// (0x00054ed2) cont_note_pane

0x9a78,	// (0x00055244) cont_snote2_single_text_pane_ParamLimits

0x9a78,	// (0x00055244) cont_snote2_single_text_pane

0x9a78,	// (0x00055244) cont_snote2_single_graphic_pane_ParamLimits

0x9a78,	// (0x00055244) cont_snote2_single_graphic_pane

0x2882,	// (0x0004e04e) cont_note_wait_pane_ParamLimits

0x2882,	// (0x0004e04e) cont_note_wait_pane

0x2882,	// (0x0004e04e) cont_note_image_pane_ParamLimits

0x2882,	// (0x0004e04e) cont_note_image_pane

0x5448,	// (0x00050c14) popup_note2_window_g1_ParamLimits

0x5448,	// (0x00050c14) popup_note2_window_g1

0xd4bc,	// (0x00058c88) popup_note2_window_t1_ParamLimits

0xd4bc,	// (0x00058c88) popup_note2_window_t1

0xd501,	// (0x00058ccd) popup_note2_window_t2_ParamLimits

0xd501,	// (0x00058ccd) popup_note2_window_t2

0xd546,	// (0x00058d12) popup_note2_window_t3_ParamLimits

0xd546,	// (0x00058d12) popup_note2_window_t3

0x5548,	// (0x00050d14) popup_note2_window_t4_ParamLimits

0x5548,	// (0x00050d14) popup_note2_window_t4

0x978a,	// (0x00054f56) popup_note2_window_t5_ParamLimits

0x978a,	// (0x00054f56) popup_note2_window_t5

0x0004,

0xfc3d,	// (0x0005b409) popup_note2_window_t_ParamLimits

0xfc3d,	// (0x0005b409) popup_note2_window_t

0x5577,	// (0x00050d43) popup_note2_image_window_g1_ParamLimits

0x5577,	// (0x00050d43) popup_note2_image_window_g1

0xd58b,	// (0x00058d57) popup_note2_image_window_g2_ParamLimits

0xd58b,	// (0x00058d57) popup_note2_image_window_g2

0x0001,

0xfc48,	// (0x0005b414) popup_note2_image_window_g_ParamLimits

0xfc48,	// (0x0005b414) popup_note2_image_window_g

0x5595,	// (0x00050d61) popup_note2_image_window_t1_ParamLimits

0x5595,	// (0x00050d61) popup_note2_image_window_t1

0x55ad,	// (0x00050d79) popup_note2_image_window_t2_ParamLimits

0x55ad,	// (0x00050d79) popup_note2_image_window_t2

0x55c5,	// (0x00050d91) popup_note2_image_window_t3_ParamLimits

0x55c5,	// (0x00050d91) popup_note2_image_window_t3

0x0002,

0xfc4d,	// (0x0005b419) popup_note2_image_window_t_ParamLimits

0xfc4d,	// (0x0005b419) popup_note2_image_window_t

0x2890,	// (0x0004e05c) popup_note2_wait_window_g1_ParamLimits

0x2890,	// (0x0004e05c) popup_note2_wait_window_g1

0x289c,	// (0x0004e068) popup_note2_wait_window_g2_ParamLimits

0x289c,	// (0x0004e068) popup_note2_wait_window_g2

0x28a8,	// (0x0004e074) popup_note2_wait_window_g3_ParamLimits

0x28a8,	// (0x0004e074) popup_note2_wait_window_g3

0x0002,

0xf80d,	// (0x0005afd9) popup_note2_wait_window_g_ParamLimits

0xf80d,	// (0x0005afd9) popup_note2_wait_window_g

0x55e1,	// (0x00050dad) popup_note2_wait_window_t1_ParamLimits

0x55e1,	// (0x00050dad) popup_note2_wait_window_t1

0x55ff,	// (0x00050dcb) popup_note2_wait_window_t2_ParamLimits

0x55ff,	// (0x00050dcb) popup_note2_wait_window_t2

0x561d,	// (0x00050de9) popup_note2_wait_window_t3_ParamLimits

0x561d,	// (0x00050de9) popup_note2_wait_window_t3

0x562f,	// (0x00050dfb) popup_note2_wait_window_t4_ParamLimits

0x562f,	// (0x00050dfb) popup_note2_wait_window_t4

0x0003,

0xfc54,	// (0x0005b420) popup_note2_wait_window_t_ParamLimits

0xfc54,	// (0x0005b420) popup_note2_wait_window_t

0x5641,	// (0x00050e0d) wait_bar2_pane_ParamLimits

0x5641,	// (0x00050e0d) wait_bar2_pane

0x5659,	// (0x00050e25) popup_snote2_single_text_window_g1_ParamLimits

0x5659,	// (0x00050e25) popup_snote2_single_text_window_g1

0x5681,	// (0x00050e4d) popup_snote2_single_text_window_t1_ParamLimits

0x5681,	// (0x00050e4d) popup_snote2_single_text_window_t1

0x56cd,	// (0x00050e99) popup_snote2_single_text_window_t2_ParamLimits

0x56cd,	// (0x00050e99) popup_snote2_single_text_window_t2

0x5719,	// (0x00050ee5) popup_snote2_single_text_window_t3_ParamLimits

0x5719,	// (0x00050ee5) popup_snote2_single_text_window_t3

0x575a,	// (0x00050f26) popup_snote2_single_text_window_t4_ParamLimits

0x575a,	// (0x00050f26) popup_snote2_single_text_window_t4

0x5790,	// (0x00050f5c) popup_snote2_single_text_window_t5_ParamLimits

0x5790,	// (0x00050f5c) popup_snote2_single_text_window_t5

0x0004,

0xfc5d,	// (0x0005b429) popup_snote2_single_text_window_t_ParamLimits

0xfc5d,	// (0x0005b429) popup_snote2_single_text_window_t

0xd59d,	// (0x00058d69) popup_snote2_single_graphic_window_g1_ParamLimits

0xd59d,	// (0x00058d69) popup_snote2_single_graphic_window_g1

0x57e3,	// (0x00050faf) popup_snote2_single_graphic_window_g2_ParamLimits

0x57e3,	// (0x00050faf) popup_snote2_single_graphic_window_g2

0x0001,

0xfc68,	// (0x0005b434) popup_snote2_single_graphic_window_g_ParamLimits

0xfc68,	// (0x0005b434) popup_snote2_single_graphic_window_g

0x580b,	// (0x00050fd7) popup_snote2_single_graphic_window_t1_ParamLimits

0x580b,	// (0x00050fd7) popup_snote2_single_graphic_window_t1

0x5857,	// (0x00051023) popup_snote2_single_graphic_window_t2_ParamLimits

0x5857,	// (0x00051023) popup_snote2_single_graphic_window_t2

0x5719,	// (0x00050ee5) popup_snote2_single_graphic_window_t3_ParamLimits

0x5719,	// (0x00050ee5) popup_snote2_single_graphic_window_t3

0x575a,	// (0x00050f26) popup_snote2_single_graphic_window_t4_ParamLimits

0x575a,	// (0x00050f26) popup_snote2_single_graphic_window_t4

0x5790,	// (0x00050f5c) popup_snote2_single_graphic_window_t5_ParamLimits

0x5790,	// (0x00050f5c) popup_snote2_single_graphic_window_t5

0x0004,

0xfc6d,	// (0x0005b439) popup_snote2_single_graphic_window_t_ParamLimits

0xfc6d,	// (0x0005b439) popup_snote2_single_graphic_window_t

0x4256,	// (0x0004fa22) clock_nsta_pane_cp2_t1

0x4256,	// (0x0004fa22) clock_nsta_pane_cp2_t2

0x0001,

0xfa94,	// (0x0005b260) clock_nsta_pane_cp2_t

0xe8ab,	// (0x0005a077) form_field_data_wide_pane_g1_ParamLimits

0x9cf0,	// (0x000554bc) form_field_data_wide_pane_g2_ParamLimits

0x9cf0,	// (0x000554bc) form_field_data_wide_pane_g2

0x9cfc,	// (0x000554c8) form_field_data_wide_pane_g3_ParamLimits

0x9cfc,	// (0x000554c8) form_field_data_wide_pane_g3

0x0002,

0xf64c,	// (0x0005ae18) form_field_data_wide_pane_g_ParamLimits

0xf64c,	// (0x0005ae18) form_field_data_wide_pane_g

0xce57,	// (0x00058623) grid_touch_3_pane_ParamLimits

0xce57,	// (0x00058623) grid_touch_3_pane

0xd5c5,	// (0x00058d91) cell_touch_3_pane_ParamLimits

0xd5c5,	// (0x00058d91) cell_touch_3_pane

0x47b2,	// (0x0004ff7e) cell_touch_3_pane_g1

0x47b2,	// (0x0004ff7e) cell_touch_3_pane_g2

0x0001,

0xfb19,	// (0x0005b2e5) cell_touch_3_pane_g

0x97e2,	// (0x00054fae) cont_query_data_pane

0x97ea,	// (0x00054fb6) cont_query_data_pane_cp1

0x58d1,	// (0x0005109d) button_value_adjust_pane_cp7

0x58d9,	// (0x000510a5) query_popup_pane_cp3

0xc083,	// (0x0005784f) bg_popup_sub_pane_cp22_ParamLimits

0xa3da,	// (0x00055ba6) navi_navi_volume_pane_cp2

0xa3e9,	// (0x00055bb5) popup_side_volume_key_window_g2

0xa3f8,	// (0x00055bc4) popup_side_volume_key_window_g3

0x0002,

0xf6e2,	// (0x0005aeae) popup_side_volume_key_window_g

0xa407,	// (0x00055bd3) popup_side_volume_key_window_t2

0x0001,

0xf6e9,	// (0x0005aeb5) popup_side_volume_key_window_t

0xa4cc,	// (0x00055c98) popup_side_volume_key_window_ParamLimits

0x87ea,	// (0x00053fb6) list_double_graphic_pane_g4_ParamLimits

0x87ea,	// (0x00053fb6) list_double_graphic_pane_g4

0xcc5e,	// (0x0005842a) list_single_2heading_msg_pane_ParamLimits

0xcc5e,	// (0x0005842a) list_single_2heading_msg_pane

0xb849,	// (0x00057015) list_single_2heading_msg_pane_g1_ParamLimits

0xb849,	// (0x00057015) list_single_2heading_msg_pane_g1

0xb855,	// (0x00057021) list_single_2heading_msg_pane_g2_ParamLimits

0xb855,	// (0x00057021) list_single_2heading_msg_pane_g2

0xb868,	// (0x00057034) list_single_2heading_msg_pane_g3_ParamLimits

0xb868,	// (0x00057034) list_single_2heading_msg_pane_g3

0xb874,	// (0x00057040) list_single_2heading_msg_pane_g4_ParamLimits

0xb874,	// (0x00057040) list_single_2heading_msg_pane_g4

0x0003,

0xfc78,	// (0x0005b444) list_single_2heading_msg_pane_g_ParamLimits

0xfc78,	// (0x0005b444) list_single_2heading_msg_pane_g

0x8d65,	// (0x00054531) list_single_2heading_msg_pane_t1_ParamLimits

0x8d65,	// (0x00054531) list_single_2heading_msg_pane_t1

0x8d8d,	// (0x00054559) list_single_2heading_msg_pane_t2_ParamLimits

0x8d8d,	// (0x00054559) list_single_2heading_msg_pane_t2

0x8df8,	// (0x000545c4) list_single_2heading_msg_pane_t3_ParamLimits

0x8df8,	// (0x000545c4) list_single_2heading_msg_pane_t3

0xee31,	// (0x0005a5fd) list_single_2heading_msg_pane_t4_ParamLimits

0xee31,	// (0x0005a5fd) list_single_2heading_msg_pane_t4

0x0003,

0xfc81,	// (0x0005b44d) list_single_2heading_msg_pane_t_ParamLimits

0xfc81,	// (0x0005b44d) list_single_2heading_msg_pane_t

0x9282,	// (0x00054a4e) title_pane_g4_ParamLimits

0x9282,	// (0x00054a4e) title_pane_g4

0xf142,	// (0x0005a90e) title_pane_stacon_g3_ParamLimits

0xf142,	// (0x0005a90e) title_pane_stacon_g3

0x540b,	// (0x00050bd7) list_single_2graphic_im_pane_g4_ParamLimits

0x540b,	// (0x00050bd7) list_single_2graphic_im_pane_g4

0xc9af,	// (0x0005817b) popup_side_volume_key_window_cp

0x3a88,	// (0x0004f254) main_idle_act2_pane_t1

0x0967,	// (0x0004c133) toolbar_button_pane_g10

0x9c03,	// (0x000553cf) popup_toolbar_window_cp1

0x4247,	// (0x0004fa13) clock_nsta_pane_cp_t1

0x4247,	// (0x0004fa13) clock_nsta_pane_cp_t2

0x0001,

0xfa8f,	// (0x0005b25b) clock_nsta_pane_cp_t

0xa3da,	// (0x00055ba6) navi_navi_volume_pane_cp2_ParamLimits

0xf316,	// (0x0005aae2) popup_side_volume_key_window_g1_ParamLimits

0xa3e9,	// (0x00055bb5) popup_side_volume_key_window_g2_ParamLimits

0xa3f8,	// (0x00055bc4) popup_side_volume_key_window_g3_ParamLimits

0xf6e2,	// (0x0005aeae) popup_side_volume_key_window_g_ParamLimits

0x0f34,	// (0x0004c700) fep_hwr_aid_pane

0xd0b9,	// (0x00058885) bg_fep_hwr_top_pane_g4_ParamLimits

0x480e,	// (0x0004ffda) fep_hwr_top_pane_g1_ParamLimits

0x4820,	// (0x0004ffec) fep_hwr_top_pane_g2_ParamLimits

0x0fed,	// (0x0004c7b9) fep_hwr_top_pane_g3_ParamLimits

0xfae4,	// (0x0005b2b0) fep_hwr_top_pane_g_ParamLimits

0x1002,	// (0x0004c7ce) fep_hwr_top_text_pane_ParamLimits

0x308c,	// (0x0004e858) aid_touch_tab_arrow_arrow_2

0x3095,	// (0x0004e861) aid_touch_tab_arrow_left_2

0x0f48,	// (0x0004c714) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0f7f,	// (0x0004c74b) fep_hwr_prediction_pane

0x4979,	// (0x00050145) fep_vkb_prediction_pane

0xd1e5,	// (0x000589b1) fep_vkb_side_pane_g3_ParamLimits

0xd1e5,	// (0x000589b1) fep_vkb_side_pane_g3

0x4a22,	// (0x000501ee) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x4eb7,	// (0x00050683) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x4ec4,	// (0x00050690) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb8e,	// (0x0005b35a) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x58fe,	// (0x000510ca) fep_hwr_prediction_pane_g1

0x132f,	// (0x0004cafb) fep_hwr_prediction_pane_g2

0x1337,	// (0x0004cb03) fep_hwr_prediction_pane_g3

0x133f,	// (0x0004cb0b) fep_hwr_prediction_pane_g4

0x0003,

0xfc8a,	// (0x0005b456) fep_hwr_prediction_pane_g

0x58fe,	// (0x000510ca) fep_vkb_prediction_pane_g1

0x5908,	// (0x000510d4) fep_vkb_prediction_pane_g2

0x5910,	// (0x000510dc) fep_vkb_prediction_pane_g3

0x5918,	// (0x000510e4) fep_vkb_prediction_pane_g4

0x0003,

0xfc93,	// (0x0005b45f) fep_vkb_prediction_pane_g

0xb6a5,	// (0x00056e71) slider_set_pane_g3

0xb6b9,	// (0x00056e85) slider_set_pane_g4

0xb6d1,	// (0x00056e9d) slider_set_pane_g5

0xb6a5,	// (0x00056e71) slider_set_pane_g6

0xb6e7,	// (0x00056eb3) slider_set_pane_g7

0x3718,	// (0x0004eee4) slider_form_pane_g3

0x3721,	// (0x0004eeed) slider_form_pane_g4

0x3729,	// (0x0004eef5) slider_form_pane_g5

0x3718,	// (0x0004eee4) slider_form_pane_g6

0xcc55,	// (0x00058421) slider_form_pane_g7

0x3d34,	// (0x0004f500) slider_set_pane_vc_g3

0x3d3d,	// (0x0004f509) slider_set_pane_vc_g4

0x3d46,	// (0x0004f512) slider_set_pane_vc_g5

0x3d34,	// (0x0004f500) slider_set_pane_vc_g6

0x3d4f,	// (0x0004f51b) slider_set_pane_vc_g7

0x3f05,	// (0x0004f6d1) slider_form_pane_vc_g1

0x3f0e,	// (0x0004f6da) slider_form_pane_vc_g2

0x3f17,	// (0x0004f6e3) slider_form_pane_vc_g3

0x3f05,	// (0x0004f6d1) slider_form_pane_vc_g4

0x3f20,	// (0x0004f6ec) slider_form_pane_vc_g5

0x0004,

0xfa61,	// (0x0005b22d) slider_form_pane_vc_g

0x8eb8,	// (0x00054684) main_idle_act3_pane

0x5920,	// (0x000510ec) ai3_links_pane

0xd60e,	// (0x00058dda) popup_ai3_data_window_ParamLimits

0xd60e,	// (0x00058dda) popup_ai3_data_window

0x8eb8,	// (0x00054684) grid_ai3_links_pane

0xd626,	// (0x00058df2) cell_ai3_links_pane_ParamLimits

0xd626,	// (0x00058df2) cell_ai3_links_pane

0x5959,	// (0x00051125) bg_popup_sub_pane_cp11

0x5966,	// (0x00051132) cell_ai3_links_pane_g1

0x8eb8,	// (0x00054684) bg_popup_sub_pane_cp12

0x598b,	// (0x00051157) heading_ai3_data_pane

0x5993,	// (0x0005115f) list_ai3_gene_pane

0x599f,	// (0x0005116b) popup_ai3_data_window_g1

0x59a7,	// (0x00051173) heading_ai3_data_pane_g1

0x59af,	// (0x0005117b) heading_ai3_data_pane_t1

0xd640,	// (0x00058e0c) list_double_ai3_gene_pane_ParamLimits

0xd640,	// (0x00058e0c) list_double_ai3_gene_pane

0x59ca,	// (0x00051196) list_single_ai3_gene_pane_ParamLimits

0x59ca,	// (0x00051196) list_single_ai3_gene_pane

0x4777,	// (0x0004ff43) list_highlight_pane_cp7_ParamLimits

0x4777,	// (0x0004ff43) list_highlight_pane_cp7

0x59d7,	// (0x000511a3) list_single_a13_gene_pane_t1_ParamLimits

0x59d7,	// (0x000511a3) list_single_a13_gene_pane_t1

0x59ee,	// (0x000511ba) list_single_ai3_gene_pane_g1

0x59f7,	// (0x000511c3) list_single_ai3_gene_pane_g2

0x0001,

0xfc9c,	// (0x0005b468) list_single_ai3_gene_pane_g

0x59ff,	// (0x000511cb) list_double_ai3_gene_pane_g1_ParamLimits

0x59ff,	// (0x000511cb) list_double_ai3_gene_pane_g1

0xd64d,	// (0x00058e19) list_double_ai3_gene_pane_t1_ParamLimits

0xd64d,	// (0x00058e19) list_double_ai3_gene_pane_t1

0x5a27,	// (0x000511f3) list_double_ai3_gene_pane_t2_ParamLimits

0x5a27,	// (0x000511f3) list_double_ai3_gene_pane_t2

0x5a3c,	// (0x00051208) list_double_ai3_gene_pane_t3_ParamLimits

0x5a3c,	// (0x00051208) list_double_ai3_gene_pane_t3

0x0002,

0xfca1,	// (0x0005b46d) list_double_ai3_gene_pane_t_ParamLimits

0xfca1,	// (0x0005b46d) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xee27,	// (0x0005a5f3) aid_size_min_col_2

0xd5f8,	// (0x00058dc4) aid_size_min_msg_ParamLimits

0xd5f8,	// (0x00058dc4) aid_size_min_msg

0xd1f9,	// (0x000589c5) fep_vkb_top_text_pane_g2_ParamLimits

0xd1f9,	// (0x000589c5) fep_vkb_top_text_pane_g2

0x0001,

0xfb14,	// (0x0005b2e0) fep_vkb_top_text_pane_g_ParamLimits

0xfb14,	// (0x0005b2e0) fep_vkb_top_text_pane_g

0x8eb8,	// (0x00054684) main_hc_apps_shell_pane

0x5a59,	// (0x00051225) grid_hc_apps_pane_ParamLimits

0x5a59,	// (0x00051225) grid_hc_apps_pane

0x5a6b,	// (0x00051237) list_hc_apps_pane

0x5a73,	// (0x0005123f) scroll_pane_cp37_ParamLimits

0x5a73,	// (0x0005123f) scroll_pane_cp37

0xd669,	// (0x00058e35) cell_hc_apps_pane_ParamLimits

0xd669,	// (0x00058e35) cell_hc_apps_pane

0xd727,	// (0x00058ef3) cell_hc_apps_pane_g1_ParamLimits

0xd727,	// (0x00058ef3) cell_hc_apps_pane_g1

0x5b5d,	// (0x00051329) cell_hc_apps_pane_g2_ParamLimits

0x5b5d,	// (0x00051329) cell_hc_apps_pane_g2

0x5b79,	// (0x00051345) cell_hc_apps_pane_g3_ParamLimits

0x5b79,	// (0x00051345) cell_hc_apps_pane_g3

0x0002,

0xfca8,	// (0x0005b474) cell_hc_apps_pane_g_ParamLimits

0xfca8,	// (0x0005b474) cell_hc_apps_pane_g

0xd753,	// (0x00058f1f) cell_hc_apps_pane_t1_ParamLimits

0xd753,	// (0x00058f1f) cell_hc_apps_pane_t1

0x9706,	// (0x00054ed2) grid_highlight_pane_cp10_ParamLimits

0x9706,	// (0x00054ed2) grid_highlight_pane_cp10

0xd791,	// (0x00058f5d) list_single_hc_apps_pane_ParamLimits

0xd791,	// (0x00058f5d) list_single_hc_apps_pane

0xd7c1,	// (0x00058f8d) list_single_hc_apps_pane_g1

0xb88c,	// (0x00057058) list_single_hc_apps_pane_g2

0x0001,

0xfcaf,	// (0x0005b47b) list_single_hc_apps_pane_g

0xb8a5,	// (0x00057071) list_single_hc_apps_pane_g2_copy1

0x8e66,	// (0x00054632) list_single_hc_apps_pane_t1

0x939c,	// (0x00054b68) bg_set_opt_pane_cp_ParamLimits

0x93aa,	// (0x00054b76) setting_slider_pane_t1_ParamLimits

0x93c3,	// (0x00054b8f) setting_slider_pane_t2_ParamLimits

0x93dd,	// (0x00054ba9) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0005ad05) setting_slider_pane_t_ParamLimits

0x93f5,	// (0x00054bc1) slider_set_pane_ParamLimits

0xf51a,	// (0x0005ace6) control_pane_g5_ParamLimits

0xf51a,	// (0x0005ace6) control_pane_g5

0xcad7,	// (0x000582a3) slider_set_pane_g1_ParamLimits

0x0c35,	// (0x0004c401) slider_set_pane_g2_ParamLimits

0xb6a5,	// (0x00056e71) slider_set_pane_g3_ParamLimits

0xb6b9,	// (0x00056e85) slider_set_pane_g4_ParamLimits

0xb6d1,	// (0x00056e9d) slider_set_pane_g5_ParamLimits

0xb6a5,	// (0x00056e71) slider_set_pane_g6_ParamLimits

0xb6e7,	// (0x00056eb3) slider_set_pane_g7_ParamLimits

0xf929,	// (0x0005b0f5) slider_set_pane_g_ParamLimits

0xc331,	// (0x00057afd) navi_icon_text_pane_ParamLimits

0xafcc,	// (0x00056798) aid_fill_nsta_2_ParamLimits

0xb003,	// (0x000567cf) aid_touch_tab_arrow_left_ParamLimits

0xb019,	// (0x000567e5) aid_touch_tab_arrow_right_ParamLimits

0xb0b4,	// (0x00056880) clock_nsta_pane_ParamLimits

0x306e,	// (0x0004e83a) navi_icon_pane_g1_ParamLimits

0x307a,	// (0x0004e846) navi_text_pane_t1_ParamLimits

0x4357,	// (0x0004fb23) navi_icon_text_pane_g1_ParamLimits

0x4363,	// (0x0004fb2f) navi_icon_text_pane_t1_ParamLimits

0xd7c1,	// (0x00058f8d) list_single_hc_apps_pane_g1_ParamLimits

0xb88c,	// (0x00057058) list_single_hc_apps_pane_g2_ParamLimits

0xfcaf,	// (0x0005b47b) list_single_hc_apps_pane_g_ParamLimits

0xb8a5,	// (0x00057071) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8e66,	// (0x00054632) list_single_hc_apps_pane_t1_ParamLimits

0x917b,	// (0x00054947) popup_toolbar2_fixed_window_ParamLimits

0x917b,	// (0x00054947) popup_toolbar2_fixed_window

0xaedc,	// (0x000566a8) popup_toolbar2_float_window

0x8eb8,	// (0x00054684) bg_popup_sub_pane_cp27

0x5c57,	// (0x00051423) grid_toolbar2_float_pane

0x8eb8,	// (0x00054684) bg_popup_sub_pane_cp26

0x5c57,	// (0x00051423) grid_toolbar2_fixed_pane

0xd7da,	// (0x00058fa6) cell_toolbar2_fixed_pane_ParamLimits

0xd7da,	// (0x00058fa6) cell_toolbar2_fixed_pane

0xd7f4,	// (0x00058fc0) cell_toolbar2_fixed_pane_g1

0x215c,	// (0x0004d928) toolbar2_fixed_button_pane

0x21dc,	// (0x0004d9a8) toolbar2_fixed_button_pane_g1

0x21e4,	// (0x0004d9b0) toolbar2_fixed_button_pane_g2

0x21ec,	// (0x0004d9b8) toolbar2_fixed_button_pane_g3

0x21f4,	// (0x0004d9c0) toolbar2_fixed_button_pane_g4

0x21fc,	// (0x0004d9c8) toolbar2_fixed_button_pane_g5

0x2204,	// (0x0004d9d0) toolbar2_fixed_button_pane_g6

0x220c,	// (0x0004d9d8) toolbar2_fixed_button_pane_g7

0x2214,	// (0x0004d9e0) toolbar2_fixed_button_pane_g8

0x221c,	// (0x0004d9e8) toolbar2_fixed_button_pane_g9

0x0008,

0xf82b,	// (0x0005aff7) toolbar2_fixed_button_pane_g

0x5c78,	// (0x00051444) cell_toolbar2_float_pane_ParamLimits

0x5c78,	// (0x00051444) cell_toolbar2_float_pane

0x5c89,	// (0x00051455) cell_toolbar2_float_pane_g1

0x215c,	// (0x0004d928) toolbar2_fixed_button_pane_cp

0xd0e1,	// (0x000588ad) fep_vkb_accented_list_pane_ParamLimits

0xd0e1,	// (0x000588ad) fep_vkb_accented_list_pane

0x1150,	// (0x0004c91c) bg_popup_fep_shadow_pane_g9

0xc480,	// (0x00057c4c) bg_popup_fep_shadow_pane_cp3

0x9e47,	// (0x00055613) list_accented_list_pane

0x5c92,	// (0x0005145e) list_single_accented_list_pane_ParamLimits

0x5c92,	// (0x0005145e) list_single_accented_list_pane

0xc480,	// (0x00057c4c) list_highlight_pane_cp10

0x5ca3,	// (0x0005146f) list_single_accented_list_pane_t1

0xae06,	// (0x000565d2) popup_slider_window_ParamLimits

0xae06,	// (0x000565d2) popup_slider_window

0x58e1,	// (0x000510ad) aid_indentation_list_msg

0xd8e5,	// (0x000590b1) bg_popup_window_pane_cp19

0x5dc9,	// (0x00051595) popup_slider_window_g1

0x5de5,	// (0x000515b1) popup_slider_window_g2

0x5e01,	// (0x000515cd) popup_slider_window_g3

0x0005,

0xfcb4,	// (0x0005b480) popup_slider_window_g

0x5e67,	// (0x00051633) popup_slider_window_t1

0x5edb,	// (0x000516a7) small_volume_slider_vertical_pane

0x47b2,	// (0x0004ff7e) small_volume_slider_vertical_pane_g1

0x47b2,	// (0x0004ff7e) small_volume_slider_vertical_pane_g2

0x5ef7,	// (0x000516c3) small_volume_slider_vertical_pane_g3

0x0002,

0xfcc6,	// (0x0005b492) small_volume_slider_vertical_pane_g

0x8f70,	// (0x0005473c) area_side_right_pane_ParamLimits

0x8f70,	// (0x0005473c) area_side_right_pane

0xb8c1,	// (0x0005708d) aid_size_side_button_ParamLimits

0xb8c1,	// (0x0005708d) aid_size_side_button

0xb8da,	// (0x000570a6) grid_sctrl_middle_pane_ParamLimits

0xb8da,	// (0x000570a6) grid_sctrl_middle_pane

0x13af,	// (0x0004cb7b) sctrl_sk_bottom_pane

0x13c0,	// (0x0004cb8c) sctrl_sk_top_pane

0x13d2,	// (0x0004cb9e) aid_touch_sctrl_top

0x9706,	// (0x00054ed2) bg_sctrl_sk_pane_ParamLimits

0x9706,	// (0x00054ed2) bg_sctrl_sk_pane

0x13df,	// (0x0004cbab) sctrl_sk_top_pane_g1

0x13ec,	// (0x0004cbb8) sctrl_sk_top_pane_t1

0x13d2,	// (0x0004cb9e) aid_touch_sctrl_bottom

0x9706,	// (0x00054ed2) bg_sctrl_sk_pane_cp_ParamLimits

0x9706,	// (0x00054ed2) bg_sctrl_sk_pane_cp

0x1407,	// (0x0004cbd3) sctrl_sk_bottom_pane_g1

0x13ec,	// (0x0004cbb8) sctrl_sk_bottom_pane_t1

0xb8f4,	// (0x000570c0) cell_sctrl_middle_pane_ParamLimits

0xb8f4,	// (0x000570c0) cell_sctrl_middle_pane

0xb905,	// (0x000570d1) aid_touch_sctrl_middle_ParamLimits

0xb905,	// (0x000570d1) aid_touch_sctrl_middle

0xb912,	// (0x000570de) bg_sctrl_middle_pane_ParamLimits

0xb912,	// (0x000570de) bg_sctrl_middle_pane

0x5f7f,	// (0x0005174b) cell_sctrl_middle_pane_g1_ParamLimits

0x5f7f,	// (0x0005174b) cell_sctrl_middle_pane_g1

0xb920,	// (0x000570ec) cell_sctrl_middle_pane_g2_ParamLimits

0xb920,	// (0x000570ec) cell_sctrl_middle_pane_g2

0x0001,

0xfcd2,	// (0x0005b49e) cell_sctrl_middle_pane_g_ParamLimits

0xfcd2,	// (0x0005b49e) cell_sctrl_middle_pane_g

0x21dc,	// (0x0004d9a8) bg_sctrl_middle_pane_g1

0x21e4,	// (0x0004d9b0) bg_sctrl_middle_pane_g2

0x21ec,	// (0x0004d9b8) bg_sctrl_middle_pane_g3

0x21f4,	// (0x0004d9c0) bg_sctrl_middle_pane_g4

0x21fc,	// (0x0004d9c8) bg_sctrl_middle_pane_g5

0x2204,	// (0x0004d9d0) bg_sctrl_middle_pane_g6

0x220c,	// (0x0004d9d8) bg_sctrl_middle_pane_g7

0x2214,	// (0x0004d9e0) bg_sctrl_middle_pane_g8

0x0007,

0xfcd7,	// (0x0005b4a3) bg_sctrl_middle_pane_g

0x221c,	// (0x0004d9e8) bg_sctrl_middle_pane_g8_copy1

0x21dc,	// (0x0004d9a8) bg_sctrl_sk_pane_g1

0x21e4,	// (0x0004d9b0) bg_sctrl_sk_pane_g2

0x21ec,	// (0x0004d9b8) bg_sctrl_sk_pane_g3

0x0008,

0xf82b,	// (0x0005aff7) bg_sctrl_sk_pane_g

0x9bc9,	// (0x00055395) aid_size_touch_scroll_bar

0x21f4,	// (0x0004d9c0) bg_sctrl_sk_pane_g4

0x21fc,	// (0x0004d9c8) bg_sctrl_sk_pane_g5

0x2204,	// (0x0004d9d0) bg_sctrl_sk_pane_g6

0x220c,	// (0x0004d9d8) bg_sctrl_sk_pane_g7

0x2214,	// (0x0004d9e0) bg_sctrl_sk_pane_g8

0x221c,	// (0x0004d9e8) bg_sctrl_sk_pane_g9

0x00f7,	// (0x0004b8c3) popup_fep_china_hwr2_fs_candidate_window

0xa8cc,	// (0x00056098) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa8cc,	// (0x00056098) popup_fep_china_hwr2_fs_control_window

0x4a22,	// (0x000501ee) sctrl_sk_top_pane_g2

0x0001,

0xfccd,	// (0x0005b499) sctrl_sk_top_pane_g

0xd97b,	// (0x00059147) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd97b,	// (0x00059147) aid_fep_china_hwr2_fs_cell

0xd98f,	// (0x0005915b) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd98f,	// (0x0005915b) bg_popup_fep_shadow_pane_cp4

0xd9a6,	// (0x00059172) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd9a6,	// (0x00059172) bg_popup_fep_shadow_pane_cp5

0xd9b8,	// (0x00059184) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd9b8,	// (0x00059184) popup_fep_china_hwr2_fs_control_bar_grid

0xd9cc,	// (0x00059198) popup_fep_china_hwr2_fs_control_funtion_grid

0x5f53,	// (0x0005171f) aid_fep_china_hwr2_fs_candi_cell

0x8eb8,	// (0x00054684) bg_popup_fep_shadow_pane_cp6

0x5f5d,	// (0x00051729) popup_fep_china_hwr2_fs_candidate_grid

0xd9d4,	// (0x000591a0) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd9d4,	// (0x000591a0) cell_fep_china_hwr2_fs_funtion_grid

0x47b2,	// (0x0004ff7e) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x5f7f,	// (0x0005174b) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x5f7f,	// (0x0005174b) cell_fep_china_hwr2_fs_funtion_grid_g1

0x5f8d,	// (0x00051759) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x5f8d,	// (0x00051759) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfce8,	// (0x0005b4b4) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfce8,	// (0x0005b4b4) cell_fep_china_hwr2_fs_funtion_grid_g

0xd9ec,	// (0x000591b8) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd9ec,	// (0x000591b8) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda01,	// (0x000591cd) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda01,	// (0x000591cd) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfced,	// (0x0005b4b9) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfced,	// (0x0005b4b9) cell_fep_china_hwr2_fs_funtion_grid_t

0x5fd4,	// (0x000517a0) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x5fdc,	// (0x000517a8) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x5fe4,	// (0x000517b0) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcf2,	// (0x0005b4be) popup_fep_china_hwr2_fs_control_bar_grid_g

0x5fec,	// (0x000517b8) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x5fec,	// (0x000517b8) cell_fep_china_hwr2_fs_candidate_grid

0x6005,	// (0x000517d1) popup_fep_china_hwr2_fs_candidate_grid_g20

0x600d,	// (0x000517d9) popup_fep_china_hwr2_fs_candidate_grid_g21

0x47b2,	// (0x0004ff7e) cell_fep_china_hwr2_fs_candidate_grid_g1

0x47b2,	// (0x0004ff7e) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb19,	// (0x0005b2e5) cell_fep_china_hwr2_fs_candidate_grid_g

0x6015,	// (0x000517e1) cell_fep_china_hwr2_fs_candidate_grid_t1

0x06f6,	// (0x0004bec2) clock_nsta_pane_cp_24_ParamLimits

0x06f6,	// (0x0004bec2) clock_nsta_pane_cp_24

0x0774,	// (0x0004bf40) indicator_nsta_pane_cp_24_ParamLimits

0x0774,	// (0x0004bf40) indicator_nsta_pane_cp_24

0x2eea,	// (0x0004e6b6) heading_pane_g1

0x0001,

0xf890,	// (0x0005b05c) heading_pane_g

0x38d1,	// (0x0004f09d) grid_sct_catagory_button_pane

0x3901,	// (0x0004f0cd) scroll_pane_cp5_ParamLimits

0x43a5,	// (0x0004fb71) button_value_adjust_pane_cp5_ParamLimits

0x43a5,	// (0x0004fb71) button_value_adjust_pane_cp5

0x4484,	// (0x0004fc50) form2_midp_time_pane_ParamLimits

0x6023,	// (0x000517ef) cell_sct_catagory_button_pane_ParamLimits

0x6023,	// (0x000517ef) cell_sct_catagory_button_pane

0x4777,	// (0x0004ff43) bg_button_pane_cp01_ParamLimits

0x4777,	// (0x0004ff43) bg_button_pane_cp01

0x47b2,	// (0x0004ff7e) cell_sct_catagory_button_pane_g1

0xae7f,	// (0x0005664b) popup_tb_extension_window

0xda1d,	// (0x000591e9) aid_size_cell_ext_ParamLimits

0xda1d,	// (0x000591e9) aid_size_cell_ext

0x9a78,	// (0x00055244) bg_tb_trans_pane_cp1_ParamLimits

0x9a78,	// (0x00055244) bg_tb_trans_pane_cp1

0xda43,	// (0x0005920f) grid_tb_ext_pane_ParamLimits

0xda43,	// (0x0005920f) grid_tb_ext_pane

0xda82,	// (0x0005924e) cell_tb_ext_pane_ParamLimits

0xda82,	// (0x0005924e) cell_tb_ext_pane

0xdaaa,	// (0x00059276) cell_tb_ext_pane_g1_ParamLimits

0xdaaa,	// (0x00059276) cell_tb_ext_pane_g1

0x60b9,	// (0x00051885) cell_tb_ext_pane_t1

0x9706,	// (0x00054ed2) list_highlight_pane_cp11_ParamLimits

0x9706,	// (0x00054ed2) list_highlight_pane_cp11

0x9190,	// (0x0005495c) popup_uni_indicator_window_ParamLimits

0x9190,	// (0x0005495c) popup_uni_indicator_window

0x9ce2,	// (0x000554ae) bg_popup_sub_pane_cp14

0xdac7,	// (0x00059293) list_uniindi_pane

0xdad3,	// (0x0005929f) uniindi_top_pane

0x9706,	// (0x00054ed2) bg_uniindi_top_pane

0xdaf2,	// (0x000592be) uniindi_top_pane_g1

0xdb08,	// (0x000592d4) uniindi_top_pane_g2

0x0003,

0xfcf9,	// (0x0005b4c5) uniindi_top_pane_g

0xdb25,	// (0x000592f1) uniindi_top_pane_t1

0x616a,	// (0x00051936) list_single_uniindi_pane_ParamLimits

0x616a,	// (0x00051936) list_single_uniindi_pane

0x47b2,	// (0x0004ff7e) bg_uniindi_top_pane_g1

0x617d,	// (0x00051949) list_single_uniindi_pane_g1

0x6190,	// (0x0005195c) list_single_uniindi_pane_t1

0x8eb8,	// (0x00054684) control_bg_pane

0x61b5,	// (0x00051981) bg_sctrl_sk_pane_cp1

0x61be,	// (0x0005198a) bg_sctrl_sk_pane_cp2

0x61c7,	// (0x00051993) control_bg_pane_g1

0x61d0,	// (0x0005199c) control_bg_pane_g2

0x0001,

0xfd02,	// (0x0005b4ce) control_bg_pane_g

0x41eb,	// (0x0004f9b7) cell_indicator_nsta_pane_g1_ParamLimits

0xce94,	// (0x00058660) cell_indicator_nsta_pane_g2_ParamLimits

0xfa7d,	// (0x0005b249) cell_indicator_nsta_pane_g_ParamLimits

0xecb3,	// (0x0005a47f) form2_midp_time_pane_t1_ParamLimits

0x0f26,	// (0x0004c6f2) main_idle_act4_pane_ParamLimits

0x0f26,	// (0x0004c6f2) main_idle_act4_pane

0xae7f,	// (0x0005664b) popup_tb_extension_window_ParamLimits

0xda68,	// (0x00059234) tb_ext_find_pane_ParamLimits

0xda68,	// (0x00059234) tb_ext_find_pane

0x61d9,	// (0x000519a5) ai_gene_pane_1_cp1

0xc501,	// (0x00057ccd) ai_gene_pane_2_cp1

0xdb4f,	// (0x0005931b) list_single_idle_plugin_calendar_pane

0x61ea,	// (0x000519b6) list_single_idle_plugin_notification_pane

0x61f3,	// (0x000519bf) list_single_idle_plugin_player_pane

0xdb58,	// (0x00059324) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdb58,	// (0x00059324) list_single_idle_plugin_shortcut_pane

0xdb80,	// (0x0005934c) main_idle_act4_pane_t1

0xdb97,	// (0x00059363) main_idle_act4_pane_t2

0x0001,

0xfd07,	// (0x0005b4d3) main_idle_act4_pane_t

0xdbae,	// (0x0005937a) middle_sk_idle_act4_pane_ParamLimits

0xdbae,	// (0x0005937a) middle_sk_idle_act4_pane

0xdbca,	// (0x00059396) popup_clock_digital_analogue_window_cp2

0xdbf6,	// (0x000593c2) shortcut_wheel_idle_act4_pane_ParamLimits

0xdbf6,	// (0x000593c2) shortcut_wheel_idle_act4_pane

0x47b2,	// (0x0004ff7e) shortcut_wheel_idle_act4_pane_g1

0x47b2,	// (0x0004ff7e) shortcut_wheel_idle_act4_pane_g2

0x47b2,	// (0x0004ff7e) shortcut_wheel_idle_act4_pane_g3

0x47b2,	// (0x0004ff7e) shortcut_wheel_idle_act4_pane_g4

0x47b2,	// (0x0004ff7e) shortcut_wheel_idle_act4_pane_g5

0x6286,	// (0x00051a52) shortcut_wheel_idle_act4_pane_g6

0x628e,	// (0x00051a5a) shortcut_wheel_idle_act4_pane_g7

0x6296,	// (0x00051a62) shortcut_wheel_idle_act4_pane_g8

0x629e,	// (0x00051a6a) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd0c,	// (0x0005b4d8) shortcut_wheel_idle_act4_pane_g

0xd0b9,	// (0x00058885) middle_sk_idle_act4_pane_g1_ParamLimits

0xd0b9,	// (0x00058885) middle_sk_idle_act4_pane_g1

0xdc73,	// (0x0005943f) middle_sk_idle_act4_pane_g2_ParamLimits

0xdc73,	// (0x0005943f) middle_sk_idle_act4_pane_g2

0x0001,

0xfd2f,	// (0x0005b4fb) middle_sk_idle_act4_pane_g_ParamLimits

0xfd2f,	// (0x0005b4fb) middle_sk_idle_act4_pane_g

0xdc8b,	// (0x00059457) middle_sk_idle_act4_pane_t1_ParamLimits

0xdc8b,	// (0x00059457) middle_sk_idle_act4_pane_t1

0xdcba,	// (0x00059486) grid_ai_shortcut_pane_ParamLimits

0xdcba,	// (0x00059486) grid_ai_shortcut_pane

0xdcd7,	// (0x000594a3) list_highlight_pane_cp16_ParamLimits

0xdcd7,	// (0x000594a3) list_highlight_pane_cp16

0xdce4,	// (0x000594b0) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdce4,	// (0x000594b0) list_single_idle_plugin_shortcut_pane_g1

0xdcf0,	// (0x000594bc) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdcf0,	// (0x000594bc) list_single_idle_plugin_shortcut_pane_g2

0xdd0c,	// (0x000594d8) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdd0c,	// (0x000594d8) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd34,	// (0x0005b500) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd34,	// (0x0005b500) list_single_idle_plugin_shortcut_pane_g

0xdd21,	// (0x000594ed) cell_ai_shortcut_pane_ParamLimits

0xdd21,	// (0x000594ed) cell_ai_shortcut_pane

0xdd37,	// (0x00059503) cell_ai_shortcut_pane_g1_ParamLimits

0xdd37,	// (0x00059503) cell_ai_shortcut_pane_g1

0x61d9,	// (0x000519a5) ai_gene_pane_1_cp2

0x63ce,	// (0x00051b9a) ai_gene_pane_2_cp2

0x63d6,	// (0x00051ba2) list_highlight_pane_cp15

0xdd59,	// (0x00059525) list_single_idle_plugin_calendar_pane_g1

0x63d6,	// (0x00051ba2) list_highlight_pane_cp17

0x63e7,	// (0x00051bb3) list_single_idle_plugin_calendar_pane_g1_copy1

0x63ef,	// (0x00051bbb) list_single_idle_plugin_player_pane_g1

0x3b2a,	// (0x0004f2f6) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd3b,	// (0x0005b507) list_single_idle_plugin_player_pane_g

0x63f7,	// (0x00051bc3) list_single_idle_plugin_player_pane_t1

0x6405,	// (0x00051bd1) list_single_idle_plugin_player_pane_t2

0x6413,	// (0x00051bdf) list_single_idle_plugin_player_pane_t3

0x6421,	// (0x00051bed) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd40,	// (0x0005b50c) list_single_idle_plugin_player_pane_t

0x642f,	// (0x00051bfb) wait_bar_pane_cp15

0x6437,	// (0x00051c03) grid_ai_notification_pane

0x3b2a,	// (0x0004f2f6) list_single_idle_plugin_notification_pane_g1

0xdd61,	// (0x0005952d) cell_ai_notification_pane_ParamLimits

0xdd61,	// (0x0005952d) cell_ai_notification_pane

0x644d,	// (0x00051c19) cell_ai_notification_pane_g1

0x6455,	// (0x00051c21) cell_ai_notification_pane_t1

0xdd6e,	// (0x0005953a) tb_ext_find_button_pane

0xdd76,	// (0x00059542) tb_ext_find_pane_g1

0xdd7e,	// (0x0005954a) tb_ext_find_pane_t1

0xc022,	// (0x000577ee) tb_ext_find_button_pane_g1

0xdd8c,	// (0x00059558) tb_ext_find_button_pane_g2

0x0001,

0xfd49,	// (0x0005b515) tb_ext_find_button_pane_g

0xdb80,	// (0x0005934c) main_idle_act4_pane_t1_ParamLimits

0xdb97,	// (0x00059363) main_idle_act4_pane_t2_ParamLimits

0xfd07,	// (0x0005b4d3) main_idle_act4_pane_t_ParamLimits

0xdbca,	// (0x00059396) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdbe2,	// (0x000593ae) sat_plugin_idle_act4_pane_ParamLimits

0xdbe2,	// (0x000593ae) sat_plugin_idle_act4_pane

0xdd95,	// (0x00059561) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdd95,	// (0x00059561) sat_plugin_idle_act4_pane_t1

0xddad,	// (0x00059579) sat_plugin_idle_act4_pane_t2_ParamLimits

0xddad,	// (0x00059579) sat_plugin_idle_act4_pane_t2

0xddc5,	// (0x00059591) sat_plugin_idle_act4_pane_t3_ParamLimits

0xddc5,	// (0x00059591) sat_plugin_idle_act4_pane_t3

0xdddd,	// (0x000595a9) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdddd,	// (0x000595a9) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd4e,	// (0x0005b51a) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd4e,	// (0x0005b51a) sat_plugin_idle_act4_pane_t

0x910b,	// (0x000548d7) popup_battery_window_ParamLimits

0x910b,	// (0x000548d7) popup_battery_window

0x9706,	// (0x00054ed2) bg_popup_sub_pane_cp25_ParamLimits

0x9706,	// (0x00054ed2) bg_popup_sub_pane_cp25

0x64d6,	// (0x00051ca2) popup_battery_window_g1_ParamLimits

0x64d6,	// (0x00051ca2) popup_battery_window_g1

0x64e2,	// (0x00051cae) popup_battery_window_t1_ParamLimits

0x64e2,	// (0x00051cae) popup_battery_window_t1

0x64f4,	// (0x00051cc0) popup_battery_window_t2_ParamLimits

0x64f4,	// (0x00051cc0) popup_battery_window_t2

0x0001,

0xfd57,	// (0x0005b523) popup_battery_window_t_ParamLimits

0xfd57,	// (0x0005b523) popup_battery_window_t

0xa520,	// (0x00055cec) midp_canvas_pane_ParamLimits

0xa592,	// (0x00055d5e) midp_keypad_pane_ParamLimits

0xa592,	// (0x00055d5e) midp_keypad_pane

0x9ec6,	// (0x00055692) main_midp_pane_ParamLimits

0xcea1,	// (0x0005866d) signal_pane_g2_cp_ParamLimits

0xddf5,	// (0x000595c1) aid_size_cell_midp_keypad_ParamLimits

0xddf5,	// (0x000595c1) aid_size_cell_midp_keypad

0xde13,	// (0x000595df) midp_keyp_game_grid_pane_ParamLimits

0xde13,	// (0x000595df) midp_keyp_game_grid_pane

0xde3a,	// (0x00059606) midp_keyp_rocker_pane_ParamLimits

0xde3a,	// (0x00059606) midp_keyp_rocker_pane

0xde8b,	// (0x00059657) midp_keyp_sk_left_pane_ParamLimits

0xde8b,	// (0x00059657) midp_keyp_sk_left_pane

0xdedf,	// (0x000596ab) midp_keyp_sk_right_pane_ParamLimits

0xdedf,	// (0x000596ab) midp_keyp_sk_right_pane

0x8eb8,	// (0x00054684) bg_button_pane_cp03

0xdf33,	// (0x000596ff) midp_keyp_sk_left_pane_g1

0x8eb8,	// (0x00054684) bg_button_pane_cp04

0xdf33,	// (0x000596ff) midp_keyp_sk_right_pane_g1

0x47b2,	// (0x0004ff7e) midp_keyp_rocker_pane_g1

0xdf3c,	// (0x00059708) keyp_game_cell_pane_ParamLimits

0xdf3c,	// (0x00059708) keyp_game_cell_pane

0x8eb8,	// (0x00054684) bg_button_pane_cp02

0xdf60,	// (0x0005972c) keyp_game_cell_pane_g1

0x912b,	// (0x000548f7) popup_fep_vkb2_window_ParamLimits

0x912b,	// (0x000548f7) popup_fep_vkb2_window

0xb92c,	// (0x000570f8) aid_size_cell_vkb2_ParamLimits

0xb92c,	// (0x000570f8) aid_size_cell_vkb2

0xb960,	// (0x0005712c) popup_fep_vkb2_window_g1_ParamLimits

0xb960,	// (0x0005712c) popup_fep_vkb2_window_g1

0xb9b0,	// (0x0005717c) vkb2_area_bottom_pane_ParamLimits

0xb9b0,	// (0x0005717c) vkb2_area_bottom_pane

0xba04,	// (0x000571d0) vkb2_area_keypad_pane_ParamLimits

0xba04,	// (0x000571d0) vkb2_area_keypad_pane

0xba4c,	// (0x00057218) vkb2_area_top_pane_ParamLimits

0xba4c,	// (0x00057218) vkb2_area_top_pane

0xbad8,	// (0x000572a4) vkb2_top_entry_pane_ParamLimits

0xbad8,	// (0x000572a4) vkb2_top_entry_pane

0xbb05,	// (0x000572d1) vkb2_top_grid_left_pane_ParamLimits

0xbb05,	// (0x000572d1) vkb2_top_grid_left_pane

0xbb26,	// (0x000572f2) vkb2_top_grid_right_pane_ParamLimits

0xbb26,	// (0x000572f2) vkb2_top_grid_right_pane

0x1664,	// (0x0004ce30) vkb2_cell_keypad_pane_ParamLimits

0x1664,	// (0x0004ce30) vkb2_cell_keypad_pane

0xbb6e,	// (0x0005733a) vkb2_area_bottom_grid_pane_ParamLimits

0xbb6e,	// (0x0005733a) vkb2_area_bottom_grid_pane

0xbb98,	// (0x00057364) vkb2_area_bottom_pane_g1_ParamLimits

0xbb98,	// (0x00057364) vkb2_area_bottom_pane_g1

0xbbbe,	// (0x0005738a) vkb2_area_bottom_pane_g2_ParamLimits

0xbbbe,	// (0x0005738a) vkb2_area_bottom_pane_g2

0xbbef,	// (0x000573bb) vkb2_area_bottom_pane_g3_ParamLimits

0xbbef,	// (0x000573bb) vkb2_area_bottom_pane_g3

0x0002,

0xfd5c,	// (0x0005b528) vkb2_area_bottom_pane_g_ParamLimits

0xfd5c,	// (0x0005b528) vkb2_area_bottom_pane_g

0x180e,	// (0x0004cfda) vkb2_top_cell_left_pane_ParamLimits

0x180e,	// (0x0004cfda) vkb2_top_cell_left_pane

0xdf69,	// (0x00059735) vkb2_top_entry_pane_g1_ParamLimits

0xdf69,	// (0x00059735) vkb2_top_entry_pane_g1

0xdf77,	// (0x00059743) vkb2_top_entry_pane_t1_ParamLimits

0xdf77,	// (0x00059743) vkb2_top_entry_pane_t1

0x66a5,	// (0x00051e71) vkb2_top_entry_pane_t2_ParamLimits

0x66a5,	// (0x00051e71) vkb2_top_entry_pane_t2

0x66d7,	// (0x00051ea3) vkb2_top_entry_pane_t3_ParamLimits

0x66d7,	// (0x00051ea3) vkb2_top_entry_pane_t3

0x0002,

0xfd63,	// (0x0005b52f) vkb2_top_entry_pane_t_ParamLimits

0xfd63,	// (0x0005b52f) vkb2_top_entry_pane_t

0xbc59,	// (0x00057425) vkb2_top_grid_right_pane_g1_ParamLimits

0xbc59,	// (0x00057425) vkb2_top_grid_right_pane_g1

0x1871,	// (0x0004d03d) vkb2_top_grid_right_pane_g2_ParamLimits

0x1871,	// (0x0004d03d) vkb2_top_grid_right_pane_g2

0x1889,	// (0x0004d055) vkb2_top_grid_right_pane_g3_ParamLimits

0x1889,	// (0x0004d055) vkb2_top_grid_right_pane_g3

0xbc6f,	// (0x0005743b) vkb2_top_grid_right_pane_g4_ParamLimits

0xbc6f,	// (0x0005743b) vkb2_top_grid_right_pane_g4

0x0003,

0xfd6a,	// (0x0005b536) vkb2_top_grid_right_pane_g_ParamLimits

0xfd6a,	// (0x0005b536) vkb2_top_grid_right_pane_g

0x18b7,	// (0x0004d083) vkb2_top_cell_left_pane_g1

0x18d9,	// (0x0004d0a5) vkb2_cell_keypad_pane_g1_ParamLimits

0x18d9,	// (0x0004d0a5) vkb2_cell_keypad_pane_g1

0x66fb,	// (0x00051ec7) vkb2_cell_keypad_pane_t1_ParamLimits

0x66fb,	// (0x00051ec7) vkb2_cell_keypad_pane_t1

0x18e7,	// (0x0004d0b3) vkb2_cell_bottom_grid_pane_ParamLimits

0x18e7,	// (0x0004d0b3) vkb2_cell_bottom_grid_pane

0x1920,	// (0x0004d0ec) vkb2_cell_bottom_grid_pane_g1

0xdc17,	// (0x000593e3) aid_call2_pane_cp02

0xdc1f,	// (0x000593eb) aid_call_pane_cp02

0xdc27,	// (0x000593f3) clock_digital_number_pane_cp10

0xdc2f,	// (0x000593fb) clock_digital_number_pane_cp11

0xdc37,	// (0x00059403) clock_digital_number_pane_cp12

0xdc3f,	// (0x0005940b) clock_digital_number_pane_cp13

0xdc47,	// (0x00059413) clock_digital_separator_pane_cp10

0xc022,	// (0x000577ee) popup_clock_digital_analogue_window_cp2_g1

0xc022,	// (0x000577ee) popup_clock_digital_analogue_window_cp2_g2

0xdc4f,	// (0x0005941b) popup_clock_digital_analogue_window_cp2_g3

0xc022,	// (0x000577ee) popup_clock_digital_analogue_window_cp2_g4

0xdc4f,	// (0x0005941b) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd1f,	// (0x0005b4eb) popup_clock_digital_analogue_window_cp2_g

0xdc57,	// (0x00059423) popup_clock_digital_analogue_window_cp2_t1

0xdc65,	// (0x00059431) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd2a,	// (0x0005b4f6) popup_clock_digital_analogue_window_cp2_t

0x47b2,	// (0x0004ff7e) clock_digital_number_pane_cp10_g1

0x47b2,	// (0x0004ff7e) clock_digital_number_pane_cp10_g2

0x0001,

0xfb19,	// (0x0005b2e5) clock_digital_number_pane_cp10_g

0x47b2,	// (0x0004ff7e) clock_digital_separator_pane_cp10_g1

0x47b2,	// (0x0004ff7e) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb19,	// (0x0005b2e5) clock_digital_separator_pane_cp10_g

0xdb14,	// (0x000592e0) uniindi_top_pane_g3

0x6133,	// (0x000518ff) uniindi_top_pane_g4

0x16ef,	// (0x0004cebb) vkb2_row_keypad_pane_ParamLimits

0x16ef,	// (0x0004cebb) vkb2_row_keypad_pane

0x1940,	// (0x0004d10c) vkb2_cell_t_keypad_pane_ParamLimits

0x1940,	// (0x0004d10c) vkb2_cell_t_keypad_pane

0x1950,	// (0x0004d11c) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1950,	// (0x0004d11c) vkb2_cell_t_keypad_pane_cp08

0x1963,	// (0x0004d12f) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1963,	// (0x0004d12f) vkb2_cell_t_keypad_pane_cp09

0x1977,	// (0x0004d143) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1977,	// (0x0004d143) vkb2_cell_t_keypad_pane_cp01

0x1988,	// (0x0004d154) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1988,	// (0x0004d154) vkb2_cell_t_keypad_pane_cp02

0x1999,	// (0x0004d165) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1999,	// (0x0004d165) vkb2_cell_t_keypad_pane_cp03

0x19aa,	// (0x0004d176) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x19aa,	// (0x0004d176) vkb2_cell_t_keypad_pane_cp04

0x19bb,	// (0x0004d187) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x19bb,	// (0x0004d187) vkb2_cell_t_keypad_pane_cp05

0x19cc,	// (0x0004d198) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x19cc,	// (0x0004d198) vkb2_cell_t_keypad_pane_cp06

0x19dd,	// (0x0004d1a9) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x19dd,	// (0x0004d1a9) vkb2_cell_t_keypad_pane_cp07

0x19ee,	// (0x0004d1ba) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x19ee,	// (0x0004d1ba) vkb2_cell_t_keypad_pane_cp10

0x4a22,	// (0x000501ee) vkb2_cell_t_keypad_pane_g1

0x6712,	// (0x00051ede) vkb2_cell_t_keypad_pane_t1

0x8eb8,	// (0x00054684) popup_grid_graphic2_window

0xdfb0,	// (0x0005977c) aid_size_cell_graphic2_ParamLimits

0xdfb0,	// (0x0005977c) aid_size_cell_graphic2

0xdfee,	// (0x000597ba) bg_popup_window_pane_cp21_ParamLimits

0xdfee,	// (0x000597ba) bg_popup_window_pane_cp21

0xdffc,	// (0x000597c8) graphic2_pages_pane_ParamLimits

0xdffc,	// (0x000597c8) graphic2_pages_pane

0xe052,	// (0x0005981e) grid_graphic2_control_pane_ParamLimits

0xe052,	// (0x0005981e) grid_graphic2_control_pane

0xe09a,	// (0x00059866) grid_graphic2_pane_ParamLimits

0xe09a,	// (0x00059866) grid_graphic2_pane

0xe121,	// (0x000598ed) cell_graphic2_pane

0x8eb8,	// (0x00054684) main_comp_mode_pane

0x5993,	// (0x0005115f) list_ai3_gene_pane_ParamLimits

0xd8e5,	// (0x000590b1) bg_popup_window_pane_cp19_ParamLimits

0x5d6d,	// (0x00051539) bg_touch_area_indi_pane_ParamLimits

0x5d6d,	// (0x00051539) bg_touch_area_indi_pane

0x5d83,	// (0x0005154f) bg_touch_area_indi_pane_cp01_ParamLimits

0x5d83,	// (0x0005154f) bg_touch_area_indi_pane_cp01

0x5d99,	// (0x00051565) bg_touch_area_indi_pane_cp02_ParamLimits

0x5d99,	// (0x00051565) bg_touch_area_indi_pane_cp02

0x5daf,	// (0x0005157b) bg_touch_area_indi_pane_cp03_ParamLimits

0x5daf,	// (0x0005157b) bg_touch_area_indi_pane_cp03

0x5dc9,	// (0x00051595) popup_slider_window_g1_ParamLimits

0x5de5,	// (0x000515b1) popup_slider_window_g2_ParamLimits

0x5e01,	// (0x000515cd) popup_slider_window_g3_ParamLimits

0xfcb4,	// (0x0005b480) popup_slider_window_g_ParamLimits

0x5e67,	// (0x00051633) popup_slider_window_t1_ParamLimits

0x5edb,	// (0x000516a7) small_volume_slider_vertical_pane_ParamLimits

0xe121,	// (0x000598ed) cell_graphic2_pane_ParamLimits

0xe17c,	// (0x00059948) bg_button_pane_cp10_ParamLimits

0xe17c,	// (0x00059948) bg_button_pane_cp10

0xe18f,	// (0x0005995b) bg_button_pane_cp11_ParamLimits

0xe18f,	// (0x0005995b) bg_button_pane_cp11

0xe1a2,	// (0x0005996e) graphic2_pages_pane_g1_ParamLimits

0xe1a2,	// (0x0005996e) graphic2_pages_pane_g1

0xe1bd,	// (0x00059989) graphic2_pages_pane_g2_ParamLimits

0xe1bd,	// (0x00059989) graphic2_pages_pane_g2

0x0001,

0xfd78,	// (0x0005b544) graphic2_pages_pane_g_ParamLimits

0xfd78,	// (0x0005b544) graphic2_pages_pane_g

0xe1d5,	// (0x000599a1) graphic2_pages_pane_t1_ParamLimits

0xe1d5,	// (0x000599a1) graphic2_pages_pane_t1

0xe1ed,	// (0x000599b9) cell_graphic2_control_pane_ParamLimits

0xe1ed,	// (0x000599b9) cell_graphic2_control_pane

0xe21f,	// (0x000599eb) cell_graphic2_pane_g1_ParamLimits

0xe21f,	// (0x000599eb) cell_graphic2_pane_g1

0xd0c7,	// (0x00058893) cell_graphic2_pane_g2_ParamLimits

0xd0c7,	// (0x00058893) cell_graphic2_pane_g2

0xe22c,	// (0x000599f8) cell_graphic2_pane_g3_ParamLimits

0xe22c,	// (0x000599f8) cell_graphic2_pane_g3

0xd0d4,	// (0x000588a0) cell_graphic2_pane_g4_ParamLimits

0xd0d4,	// (0x000588a0) cell_graphic2_pane_g4

0xe239,	// (0x00059a05) cell_graphic2_pane_g5_ParamLimits

0xe239,	// (0x00059a05) cell_graphic2_pane_g5

0x0004,

0xfd7d,	// (0x0005b549) cell_graphic2_pane_g_ParamLimits

0xfd7d,	// (0x0005b549) cell_graphic2_pane_g

0xe256,	// (0x00059a22) cell_graphic2_pane_t1_ParamLimits

0xe256,	// (0x00059a22) cell_graphic2_pane_t1

0x2ede,	// (0x0004e6aa) grid_highlight_pane_cp11_ParamLimits

0x2ede,	// (0x0004e6aa) grid_highlight_pane_cp11

0x9706,	// (0x00054ed2) bg_button_pane_cp05

0xe2a0,	// (0x00059a6c) cell_graphic2_control_pane_g1

0x47b2,	// (0x0004ff7e) bg_touch_area_indi_pane_g1

0x69eb,	// (0x000521b7) aid_cmod_rocker_key_size

0x69f5,	// (0x000521c1) aid_cmode_itu_key_size

0x69ff,	// (0x000521cb) main_cmode_video_pane

0x6a09,	// (0x000521d5) main_comp_mode_itu_pane

0x6a15,	// (0x000521e1) main_comp_mode_rocker_pane

0x6a21,	// (0x000521ed) cell_cmode_rocker_pane_ParamLimits

0x6a21,	// (0x000521ed) cell_cmode_rocker_pane

0x6a33,	// (0x000521ff) cell_cmode_itu_pane_ParamLimits

0x6a33,	// (0x000521ff) cell_cmode_itu_pane

0x9ce2,	// (0x000554ae) bg_button_pane_cp06_ParamLimits

0x9ce2,	// (0x000554ae) bg_button_pane_cp06

0x4a22,	// (0x000501ee) cell_cmode_rocker_pane_g1_ParamLimits

0x4a22,	// (0x000501ee) cell_cmode_rocker_pane_g1

0x5f7f,	// (0x0005174b) cell_cmode_rocker_pane_g2_ParamLimits

0x5f7f,	// (0x0005174b) cell_cmode_rocker_pane_g2

0x0001,

0xfd8d,	// (0x0005b559) cell_cmode_rocker_pane_g_ParamLimits

0xfd8d,	// (0x0005b559) cell_cmode_rocker_pane_g

0x8eb8,	// (0x00054684) bg_button_pane_cp07

0x6a48,	// (0x00052214) cell_cmode_itu_pane_g1

0x6a51,	// (0x0005221d) cell_cmode_itu_pane_t1

0x6a5f,	// (0x0005222b) cell_cmode_itu_pane_t2

0x0001,

0xfd92,	// (0x0005b55e) cell_cmode_itu_pane_t

0x61a5,	// (0x00051971) aid_touch_ctrl_left

0x61ad,	// (0x00051979) aid_touch_ctrl_right

0x8eb8,	// (0x00054684) compa_mode_pane

0xe2c6,	// (0x00059a92) aid_cmod_rocker_key_size_cp

0xe2d0,	// (0x00059a9c) aid_cmode_itu_key_size_cp

0x6a81,	// (0x0005224d) compa_mode_pane_g1

0x6a89,	// (0x00052255) compa_mode_pane_g2

0x6a91,	// (0x0005225d) compa_mode_pane_g3

0x0002,

0xfd97,	// (0x0005b563) compa_mode_pane_g

0xe2da,	// (0x00059aa6) main_comp_mode_itu_pane_cp

0xe2e2,	// (0x00059aae) main_comp_mode_rocker_pane_cp

0xe2ea,	// (0x00059ab6) cell_cmode_itu_pane_cp_ParamLimits

0xe2ea,	// (0x00059ab6) cell_cmode_itu_pane_cp

0xe2ff,	// (0x00059acb) cell_cmode_rocker_pane_cp_ParamLimits

0xe2ff,	// (0x00059acb) cell_cmode_rocker_pane_cp

0x9ce2,	// (0x000554ae) bg_button_pane_cp06_cp_ParamLimits

0x9ce2,	// (0x000554ae) bg_button_pane_cp06_cp

0x4a22,	// (0x000501ee) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4a22,	// (0x000501ee) cell_cmode_rocker_pane_g1_cp

0x47b2,	// (0x0004ff7e) cell_cmode_rocker_pane_g2_cp

0x8eb8,	// (0x00054684) bg_button_pane_cp07_cp

0xe311,	// (0x00059add) cell_cmode_itu_pane_g1_cp

0xe31a,	// (0x00059ae6) cell_cmode_itu_pane_t1_cp

0xe31a,	// (0x00059ae6) cell_cmode_itu_pane_t2_cp

0xcc4b,	// (0x00058417) settings_code_pane_cp2

0x939c,	// (0x00054b68) bg_popup_window_pane_cp3_ParamLimits

0x9906,	// (0x000550d2) heading_pane_cp3_ParamLimits

0x9915,	// (0x000550e1) listscroll_popup_graphic_pane_ParamLimits

0x0f34,	// (0x0004c700) fep_hwr_aid_pane_ParamLimits

0x13d2,	// (0x0004cb9e) aid_touch_sctrl_top_ParamLimits

0x13df,	// (0x0004cbab) sctrl_sk_top_pane_g1_ParamLimits

0x4a22,	// (0x000501ee) sctrl_sk_top_pane_g2_ParamLimits

0xfccd,	// (0x0005b499) sctrl_sk_top_pane_g_ParamLimits

0x13ec,	// (0x0004cbb8) sctrl_sk_top_pane_t1_ParamLimits

0x13d2,	// (0x0004cb9e) aid_touch_sctrl_bottom_ParamLimits

0x13ec,	// (0x0004cbb8) sctrl_sk_bottom_pane_t1_ParamLimits

0xdae0,	// (0x000592ac) aid_area_touch_clock

0xba98,	// (0x00057264) aid_vkb2_area_top_pane_cell_ParamLimits

0xba98,	// (0x00057264) aid_vkb2_area_top_pane_cell

0xbb47,	// (0x00057313) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xbb47,	// (0x00057313) aid_vkb2_area_bottom_pane_cell

0x665d,	// (0x00051e29) popup_char_count_window

0x6ae7,	// (0x000522b3) popup_char_count_window_g1

0x6af0,	// (0x000522bc) popup_char_count_window_g2

0x6af9,	// (0x000522c5) popup_char_count_window_g3

0x0002,

0xfd9e,	// (0x0005b56a) popup_char_count_window_g

0x6b02,	// (0x000522ce) popup_char_count_window_t1

0x1485,	// (0x0004cc51) popup_fep_char_preview_window_ParamLimits

0x1485,	// (0x0004cc51) popup_fep_char_preview_window

0xbab8,	// (0x00057284) vkb2_top_candi_pane_ParamLimits

0xbab8,	// (0x00057284) vkb2_top_candi_pane

0xe328,	// (0x00059af4) cell_vkb2_top_candi_pane_ParamLimits

0xe328,	// (0x00059af4) cell_vkb2_top_candi_pane

0x2882,	// (0x0004e04e) bg_popup_fep_char_preview_window_ParamLimits

0x2882,	// (0x0004e04e) bg_popup_fep_char_preview_window

0x1a03,	// (0x0004d1cf) popup_fep_char_preview_window_t1_ParamLimits

0x1a03,	// (0x0004d1cf) popup_fep_char_preview_window_t1

0x6b5a,	// (0x00052326) bg_popup_fep_char_preview_window_g1

0x6b62,	// (0x0005232e) bg_popup_fep_char_preview_window_g2

0x6b6a,	// (0x00052336) bg_popup_fep_char_preview_window_g3

0x6b72,	// (0x0005233e) bg_popup_fep_char_preview_window_g4

0x6b7a,	// (0x00052346) bg_popup_fep_char_preview_window_g5

0x6b82,	// (0x0005234e) bg_popup_fep_char_preview_window_g6

0x6b8a,	// (0x00052356) bg_popup_fep_char_preview_window_g7

0x6b92,	// (0x0005235e) bg_popup_fep_char_preview_window_g8

0x6b9a,	// (0x00052366) bg_popup_fep_char_preview_window_g9

0x0009,

0xfda5,	// (0x0005b571) bg_popup_fep_char_preview_window_g

0x4a22,	// (0x000501ee) cell_vkb2_top_candi_pane_g1_ParamLimits

0x4a22,	// (0x000501ee) cell_vkb2_top_candi_pane_g1

0x4d39,	// (0x00050505) cell_vkb2_top_candi_pane_g2_ParamLimits

0x4d39,	// (0x00050505) cell_vkb2_top_candi_pane_g2

0x4d5a,	// (0x00050526) cell_vkb2_top_candi_pane_g3_ParamLimits

0x4d5a,	// (0x00050526) cell_vkb2_top_candi_pane_g3

0x1a45,	// (0x0004d211) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1a45,	// (0x0004d211) cell_vkb2_top_candi_pane_g4

0x4f44,	// (0x00050710) cell_vkb2_top_candi_pane_g5_ParamLimits

0x4f44,	// (0x00050710) cell_vkb2_top_candi_pane_g5

0x5f7f,	// (0x0005174b) cell_vkb2_top_candi_pane_g6_ParamLimits

0x5f7f,	// (0x0005174b) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdba,	// (0x0005b586) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdba,	// (0x0005b586) cell_vkb2_top_candi_pane_g

0x1a66,	// (0x0004d232) cell_vkb2_top_candi_pane_t1

0xb691,	// (0x00056e5d) aid_size_touch_slider_mark_ParamLimits

0xb691,	// (0x00056e5d) aid_size_touch_slider_mark

0xe038,	// (0x00059804) grid_graphic2_catg_pane_ParamLimits

0xe038,	// (0x00059804) grid_graphic2_catg_pane

0xe0f4,	// (0x000598c0) popup_grid_graphic2_window_t1_ParamLimits

0xe0f4,	// (0x000598c0) popup_grid_graphic2_window_t1

0xe10a,	// (0x000598d6) popup_grid_graphic2_window_t2_ParamLimits

0xe10a,	// (0x000598d6) popup_grid_graphic2_window_t2

0x0001,

0xfd73,	// (0x0005b53f) popup_grid_graphic2_window_t_ParamLimits

0xfd73,	// (0x0005b53f) popup_grid_graphic2_window_t

0x9706,	// (0x00054ed2) bg_button_pane_cp05_ParamLimits

0xe2a0,	// (0x00059a6c) cell_graphic2_control_pane_g1_ParamLimits

0xe388,	// (0x00059b54) cell_graphic2_catg_pane_ParamLimits

0xe388,	// (0x00059b54) cell_graphic2_catg_pane

0x8eb8,	// (0x00054684) bg_button_pane_cp12

0xe39a,	// (0x00059b66) cell_graphic2_catg_pane_g1

0x60b9,	// (0x00051885) cell_tb_ext_pane_t1_ParamLimits

0x182e,	// (0x0004cffa) vkb2_top_cell_right_narrow_pane_ParamLimits

0x182e,	// (0x0004cffa) vkb2_top_cell_right_narrow_pane

0x1846,	// (0x0004d012) vkb2_top_cell_right_wide_pane_ParamLimits

0x1846,	// (0x0004d012) vkb2_top_cell_right_wide_pane

0x0f26,	// (0x0004c6f2) bg_vkb2_func_pane_ParamLimits

0x0f26,	// (0x0004c6f2) bg_vkb2_func_pane

0x18b7,	// (0x0004d083) vkb2_top_cell_left_pane_g1_ParamLimits

0x0f26,	// (0x0004c6f2) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0f26,	// (0x0004c6f2) bg_vkb2_fuc_pane_cp03

0x1920,	// (0x0004d0ec) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x21e4,	// (0x0004d9b0) bg_vkb2_func_pane_g1

0x21ec,	// (0x0004d9b8) bg_vkb2_func_pane_g2

0x21fc,	// (0x0004d9c8) bg_vkb2_func_pane_g3

0x21f4,	// (0x0004d9c0) bg_vkb2_func_pane_g4

0x2204,	// (0x0004d9d0) bg_vkb2_func_pane_g5

0x220c,	// (0x0004d9d8) bg_vkb2_func_pane_g6

0x2214,	// (0x0004d9e0) bg_vkb2_func_pane_g7

0x221c,	// (0x0004d9e8) bg_vkb2_func_pane_g8

0x21dc,	// (0x0004d9a8) bg_vkb2_func_pane_g9

0x0008,

0xfdc7,	// (0x0005b593) bg_vkb2_func_pane_g

0x0f26,	// (0x0004c6f2) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0f26,	// (0x0004c6f2) bg_vkb2_fuc_pane_cp01

0x18b7,	// (0x0004d083) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x18b7,	// (0x0004d083) vkb2_top_cell_right_wide_pane_g1

0x0f26,	// (0x0004c6f2) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0f26,	// (0x0004c6f2) bg_vkb2_fuc_pane_cp02

0x1a85,	// (0x0004d251) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1a85,	// (0x0004d251) vkb2_top_cell_right_narrow_pane_g1

0xd827,	// (0x00058ff3) aid_touch_area_decrease_ParamLimits

0xd827,	// (0x00058ff3) aid_touch_area_decrease

0xd861,	// (0x0005902d) aid_touch_area_increase_ParamLimits

0xd861,	// (0x0005902d) aid_touch_area_increase

0xd889,	// (0x00059055) aid_touch_area_mute_ParamLimits

0xd889,	// (0x00059055) aid_touch_area_mute

0xd8b1,	// (0x0005907d) aid_touch_area_slider_ParamLimits

0xd8b1,	// (0x0005907d) aid_touch_area_slider

0xd8f1,	// (0x000590bd) popup_slider_window_g4_ParamLimits

0xd8f1,	// (0x000590bd) popup_slider_window_g4

0xd90b,	// (0x000590d7) popup_slider_window_g5_ParamLimits

0xd90b,	// (0x000590d7) popup_slider_window_g5

0xd931,	// (0x000590fd) popup_slider_window_g6_ParamLimits

0xd931,	// (0x000590fd) popup_slider_window_g6

0x5e95,	// (0x00051661) popup_slider_window_t2_ParamLimits

0x5e95,	// (0x00051661) popup_slider_window_t2

0x0001,

0xfcc1,	// (0x0005b48d) popup_slider_window_t_ParamLimits

0xfcc1,	// (0x0005b48d) popup_slider_window_t

0xd947,	// (0x00059113) slider_pane_ParamLimits

0xd947,	// (0x00059113) slider_pane

0x6bbd,	// (0x00052389) slider_pane_g1_ParamLimits

0x6bbd,	// (0x00052389) slider_pane_g1

0x6bd1,	// (0x0005239d) slider_pane_g2_ParamLimits

0x6bd1,	// (0x0005239d) slider_pane_g2

0x6be7,	// (0x000523b3) slider_pane_g3_ParamLimits

0x6be7,	// (0x000523b3) slider_pane_g3

0x0003,

0xfdda,	// (0x0005b5a6) slider_pane_g_ParamLimits

0xfdda,	// (0x0005b5a6) slider_pane_g

0xaec7,	// (0x00056693) popup_tb_float_extension_window_ParamLimits

0xaec7,	// (0x00056693) popup_tb_float_extension_window

0x6c13,	// (0x000523df) aid_size_cell_tb_float_ext

0x8eb8,	// (0x00054684) bg_popup_sub_window_cp28

0xe3a3,	// (0x00059b6f) grid_tb_float_ext_pane

0xe3ad,	// (0x00059b79) cell_tb_float_ext_pane_ParamLimits

0xe3ad,	// (0x00059b79) cell_tb_float_ext_pane

0xe3c7,	// (0x00059b93) cell_tb_float_ext_pane_g1

0xe3d0,	// (0x00059b9c) grid_highlight_pane_cp12

0xb7a8,	// (0x00056f74) cell_last_hwr_side_pane_ParamLimits

0xb7a8,	// (0x00056f74) cell_last_hwr_side_pane

0x47b2,	// (0x0004ff7e) cell_last_hwr_side_pane_g1

0x6c55,	// (0x00052421) cell_last_hwr_side_pane_g2

0x0001,

0xfde3,	// (0x0005b5af) cell_last_hwr_side_pane_g

0xbc24,	// (0x000573f0) vkb2_area_bottom_space_btn_pane_ParamLimits

0xbc24,	// (0x000573f0) vkb2_area_bottom_space_btn_pane

0x4a22,	// (0x000501ee) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6712,	// (0x00051ede) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x1a66,	// (0x0004d232) cell_vkb2_top_candi_pane_t1_ParamLimits

0x1aa5,	// (0x0004d271) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x1aa5,	// (0x0004d271) vkb2_area_bottom_space_btn_pane_g1

0x1adf,	// (0x0004d2ab) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x1adf,	// (0x0004d2ab) vkb2_area_bottom_space_btn_pane_g2

0x1b15,	// (0x0004d2e1) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1b15,	// (0x0004d2e1) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfde8,	// (0x0005b5b4) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfde8,	// (0x0005b5b4) vkb2_area_bottom_space_btn_pane_g

0x0fdb,	// (0x0004c7a7) cel_fep_hwr_func_pane_ParamLimits

0x0fdb,	// (0x0004c7a7) cel_fep_hwr_func_pane

0xb77d,	// (0x00056f49) cell_hwr_side_button_pane_ParamLimits

0xb77d,	// (0x00056f49) cell_hwr_side_button_pane

0xdae0,	// (0x000592ac) aid_area_touch_clock_ParamLimits

0x9706,	// (0x00054ed2) bg_uniindi_top_pane_ParamLimits

0xdaf2,	// (0x000592be) uniindi_top_pane_g1_ParamLimits

0xdb08,	// (0x000592d4) uniindi_top_pane_g2_ParamLimits

0xdb14,	// (0x000592e0) uniindi_top_pane_g3_ParamLimits

0x6133,	// (0x000518ff) uniindi_top_pane_g4_ParamLimits

0xfcf9,	// (0x0005b4c5) uniindi_top_pane_g_ParamLimits

0xdb25,	// (0x000592f1) uniindi_top_pane_t1_ParamLimits

0x9706,	// (0x00054ed2) bg_vkb2_func_pane_cp01_ParamLimits

0x9706,	// (0x00054ed2) bg_vkb2_func_pane_cp01

0x6c5e,	// (0x0005242a) cel_fep_hwr_func_pane_g1_ParamLimits

0x6c5e,	// (0x0005242a) cel_fep_hwr_func_pane_g1

0x9706,	// (0x00054ed2) bg_vkb2_func_pane_cp02_ParamLimits

0x9706,	// (0x00054ed2) bg_vkb2_func_pane_cp02

0x6c5e,	// (0x0005242a) cell_hwr_side_button_pane_g1_ParamLimits

0x6c5e,	// (0x0005242a) cell_hwr_side_button_pane_g1

0x2060,	// (0x0004d82c) status_pane_g4_ParamLimits

0x2060,	// (0x0004d82c) status_pane_g4

0x207a,	// (0x0004d846) status_pane_t1

0x44ed,	// (0x0004fcb9) form2_midp_gauge_slider_cont_pane

0x44f5,	// (0x0004fcc1) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcfca,	// (0x00058796) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcfdc,	// (0x000587a8) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfacc,	// (0x0005b298) form2_midp_gauge_slider_pane_t_ParamLimits

0x452b,	// (0x0004fcf7) form2_midp_slider_pane_ParamLimits

0x144d,	// (0x0004cc19) aid_size_cell_func_vkb2_ParamLimits

0x144d,	// (0x0004cc19) aid_size_cell_func_vkb2

0x6bff,	// (0x000523cb) slider_pane_g4_ParamLimits

0x6bff,	// (0x000523cb) slider_pane_g4

0xbc8d,	// (0x00057459) form2_midp_gauge_slider_pane_t2_cp01

0xbc9b,	// (0x00057467) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xbc9b,	// (0x00057467) form2_midp_gauge_slider_pane_t3_cp01

0x1b8a,	// (0x0004d356) form2_midp_slider_pane_cp01

0x8eb8,	// (0x00054684) navi_smil_pane

0x6c97,	// (0x00052463) navi_smil_pane_g1

0x6c9f,	// (0x0005246b) navi_smil_pane_t1

0x6c6c,	// (0x00052438) form2_midp_slider_pane_g1

0x6c75,	// (0x00052441) form2_midp_slider_pane_g2

0x6c7d,	// (0x00052449) form2_midp_slider_pane_g3

0x6c6c,	// (0x00052438) form2_midp_slider_pane_g4

0xe3d9,	// (0x00059ba5) form2_midp_slider_pane_g5

0x0004,

0xfdf1,	// (0x0005b5bd) form2_midp_slider_pane_g

0x1b4f,	// (0x0004d31b) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x1b4f,	// (0x0004d31b) vkb2_area_bottom_space_btn_pane_g4

0xb0ff,	// (0x000568cb) lc0_navi_pane_ParamLimits

0xb0ff,	// (0x000568cb) lc0_navi_pane

0xb169,	// (0x00056935) lc0_stat_indi_pane_ParamLimits

0xb169,	// (0x00056935) lc0_stat_indi_pane

0xb17e,	// (0x0005694a) ls0_title_pane_ParamLimits

0xb17e,	// (0x0005694a) ls0_title_pane

0x9ce2,	// (0x000554ae) bg_popup_sub_pane_cp14_ParamLimits

0xdac7,	// (0x00059293) list_uniindi_pane_ParamLimits

0xdad3,	// (0x0005929f) uniindi_top_pane_ParamLimits

0x617d,	// (0x00051949) list_single_uniindi_pane_g1_ParamLimits

0x6190,	// (0x0005195c) list_single_uniindi_pane_t1_ParamLimits

0xbcb8,	// (0x00057484) lc0_stat_clock_pane_ParamLimits

0xbcb8,	// (0x00057484) lc0_stat_clock_pane

0xe3e4,	// (0x00059bb0) lc0_stat_indi_pane_g1_ParamLimits

0xe3e4,	// (0x00059bb0) lc0_stat_indi_pane_g1

0xe3f1,	// (0x00059bbd) lc0_stat_indi_pane_g2_ParamLimits

0xe3f1,	// (0x00059bbd) lc0_stat_indi_pane_g2

0x0001,

0xfdfc,	// (0x0005b5c8) lc0_stat_indi_pane_g_ParamLimits

0xfdfc,	// (0x0005b5c8) lc0_stat_indi_pane_g

0xbcc8,	// (0x00057494) lc0_uni_indicator_pane_ParamLimits

0xbcc8,	// (0x00057494) lc0_uni_indicator_pane

0xe3fe,	// (0x00059bca) ls0_title_pane_g1_ParamLimits

0xe3fe,	// (0x00059bca) ls0_title_pane_g1

0xe412,	// (0x00059bde) ls0_title_pane_t1_ParamLimits

0xe412,	// (0x00059bde) ls0_title_pane_t1

0xbcd8,	// (0x000574a4) lc0_uni_indicator_pane_g1_ParamLimits

0xbcd8,	// (0x000574a4) lc0_uni_indicator_pane_g1

0x6d11,	// (0x000524dd) lc0_stat_clock_pane_t1

0x8eb8,	// (0x00054684) main_ai5_pane

0x6d1f,	// (0x000524eb) ai5_sk_pane_ParamLimits

0x6d1f,	// (0x000524eb) ai5_sk_pane

0xe440,	// (0x00059c0c) cell_ai5_widget_pane_ParamLimits

0xe440,	// (0x00059c0c) cell_ai5_widget_pane

0x6df5,	// (0x000525c1) aid_size_cell_widget_grid

0x6e03,	// (0x000525cf) bg_ai5_widget_pane_ParamLimits

0x6e03,	// (0x000525cf) bg_ai5_widget_pane

0x6e7f,	// (0x0005264b) cell_ai5_widget_pane_g2

0x6e93,	// (0x0005265f) cell_ai5_widget_pane_g3

0x6ead,	// (0x00052679) cell_ai5_widget_pane_g4

0x6ebd,	// (0x00052689) cell_ai5_widget_pane_g5

0x6ecd,	// (0x00052699) cell_ai5_widget_pane_g6

0x6ed9,	// (0x000526a5) cell_ai5_widget_pane_g7

0x6f45,	// (0x00052711) cell_ai5_widget_pane_t1_ParamLimits

0x6f45,	// (0x00052711) cell_ai5_widget_pane_t1

0x6f62,	// (0x0005272e) cell_ai5_widget_pane_t2_ParamLimits

0x6f62,	// (0x0005272e) cell_ai5_widget_pane_t2

0x6f7a,	// (0x00052746) cell_ai5_widget_pane_t3_ParamLimits

0x6f7a,	// (0x00052746) cell_ai5_widget_pane_t3

0x6f92,	// (0x0005275e) cell_ai5_widget_pane_t4_ParamLimits

0x6f92,	// (0x0005275e) cell_ai5_widget_pane_t4

0xe4ac,	// (0x00059c78) cell_ai5_widget_pane_t5_ParamLimits

0xe4ac,	// (0x00059c78) cell_ai5_widget_pane_t5

0x6fd7,	// (0x000527a3) cell_ai5_widget_pane_t6_ParamLimits

0x6fd7,	// (0x000527a3) cell_ai5_widget_pane_t6

0x6fe9,	// (0x000527b5) cell_ai5_widget_pane_t7_ParamLimits

0x6fe9,	// (0x000527b5) cell_ai5_widget_pane_t7

0x7008,	// (0x000527d4) cell_ai5_widget_pane_t8_ParamLimits

0x7008,	// (0x000527d4) cell_ai5_widget_pane_t8

0x000b,

0xfe1c,	// (0x0005b5e8) cell_ai5_widget_pane_t_ParamLimits

0xfe1c,	// (0x0005b5e8) cell_ai5_widget_pane_t

0x708c,	// (0x00052858) grid_ai5_widget_pane

0x9ce2,	// (0x000554ae) highlight_cell_ai5_widget_pane_ParamLimits

0x9ce2,	// (0x000554ae) highlight_cell_ai5_widget_pane

0xe4cc,	// (0x00059c98) ai5_sk_left_pane

0xe4d6,	// (0x00059ca2) ai5_sk_middle_pane

0xe4e0,	// (0x00059cac) ai5_sk_right_pane

0x70b8,	// (0x00052884) bg_ai5_widget_pane_g1_ParamLimits

0x70b8,	// (0x00052884) bg_ai5_widget_pane_g1

0x70c4,	// (0x00052890) bg_ai5_widget_pane_g2_ParamLimits

0x70c4,	// (0x00052890) bg_ai5_widget_pane_g2

0x70d0,	// (0x0005289c) bg_ai5_widget_pane_g3_ParamLimits

0x70d0,	// (0x0005289c) bg_ai5_widget_pane_g3

0x70dc,	// (0x000528a8) bg_ai5_widget_pane_g4_ParamLimits

0x70dc,	// (0x000528a8) bg_ai5_widget_pane_g4

0x70e8,	// (0x000528b4) bg_ai5_widget_pane_g5_ParamLimits

0x70e8,	// (0x000528b4) bg_ai5_widget_pane_g5

0x70f4,	// (0x000528c0) bg_ai5_widget_pane_g6_ParamLimits

0x70f4,	// (0x000528c0) bg_ai5_widget_pane_g6

0x7100,	// (0x000528cc) bg_ai5_widget_pane_g7_ParamLimits

0x7100,	// (0x000528cc) bg_ai5_widget_pane_g7

0x710c,	// (0x000528d8) bg_ai5_widget_pane_g8_ParamLimits

0x710c,	// (0x000528d8) bg_ai5_widget_pane_g8

0x7118,	// (0x000528e4) bg_ai5_widget_pane_g9_ParamLimits

0x7118,	// (0x000528e4) bg_ai5_widget_pane_g9

0x0008,

0xfe35,	// (0x0005b601) bg_ai5_widget_pane_g_ParamLimits

0xfe35,	// (0x0005b601) bg_ai5_widget_pane_g

0x714a,	// (0x00052916) cell_shortcut_ai5_widget_pane_ParamLimits

0x714a,	// (0x00052916) cell_shortcut_ai5_widget_pane

0xc480,	// (0x00057c4c) bg_cell_shortcut_ai5_widget_pane

0x715b,	// (0x00052927) cell_grid_ai5_widget_pane_g1

0xc480,	// (0x00057c4c) highlight_cell_shortcut_ai5_widget_pane

0x21ec,	// (0x0004d9b8) ai5_sk_left_pane_g1

0x7164,	// (0x00052930) ai5_sk_left_pane_g2

0x716c,	// (0x00052938) ai5_sk_left_pane_g3

0x7174,	// (0x00052940) ai5_sk_left_pane_g4

0x0003,

0xfe48,	// (0x0005b614) ai5_sk_left_pane_g

0x717c,	// (0x00052948) ai5_sk_left_pane_t1

0x21e4,	// (0x0004d9b0) ai5_sk_right_pane_g1

0x718a,	// (0x00052956) ai5_sk_right_pane_g2

0x7192,	// (0x0005295e) ai5_sk_right_pane_g3

0x719a,	// (0x00052966) ai5_sk_right_pane_g4

0x0003,

0xfe51,	// (0x0005b61d) ai5_sk_right_pane_g

0x71a2,	// (0x0005296e) ai5_sk_right_pane_t1

0x21e4,	// (0x0004d9b0) ai5_sk_middle_pane_g1

0x21ec,	// (0x0004d9b8) ai5_sk_middle_pane_g2

0x2204,	// (0x0004d9d0) ai5_sk_middle_pane_g3

0x7192,	// (0x0005295e) ai5_sk_middle_pane_g4

0x716c,	// (0x00052938) ai5_sk_middle_pane_g5

0x71b0,	// (0x0005297c) ai5_sk_middle_pane_g6

0xe4ea,	// (0x00059cb6) ai5_sk_middle_pane_g7

0x0006,

0xfe5a,	// (0x0005b626) ai5_sk_middle_pane_g

0xafeb,	// (0x000567b7) aid_touch_area_size_lc0_ParamLimits

0xafeb,	// (0x000567b7) aid_touch_area_size_lc0

0x1166,	// (0x0004c932) cell_hwr_candidate_pane_t1_ParamLimits

0x0652,	// (0x0004be1e) aid_touch_navi_pane

0xb277,	// (0x00056a43) status_dt_navi_pane_ParamLimits

0xb277,	// (0x00056a43) status_dt_navi_pane

0xb28f,	// (0x00056a5b) status_dt_sta_pane_ParamLimits

0xb28f,	// (0x00056a5b) status_dt_sta_pane

0xe4f2,	// (0x00059cbe) dt_sta_controll_pane

0xe4ff,	// (0x00059ccb) dt_sta_indi_pane

0xe50c,	// (0x00059cd8) dt_sta_title_pane

0x9706,	// (0x00054ed2) bg_dt_sta_indi_pane_ParamLimits

0x9706,	// (0x00054ed2) bg_dt_sta_indi_pane

0xe51e,	// (0x00059cea) dt_sta_battery_pane

0xe526,	// (0x00059cf2) dt_sta_indi_pane_g1

0x7202,	// (0x000529ce) dt_sta_indi_pane_g2

0x720b,	// (0x000529d7) dt_sta_indi_pane_g3

0x0002,

0xfe69,	// (0x0005b635) dt_sta_indi_pane_g

0x7214,	// (0x000529e0) dt_sta_signal_pane

0x9ce2,	// (0x000554ae) bg_dt_sta_title_pane_ParamLimits

0x9ce2,	// (0x000554ae) bg_dt_sta_title_pane

0x303e,	// (0x0004e80a) dt_sta_title_pane_g1

0xe52f,	// (0x00059cfb) dt_sta_title_pane_t1_ParamLimits

0xe52f,	// (0x00059cfb) dt_sta_title_pane_t1

0x8eb8,	// (0x00054684) bg_dt_sta_control_pane

0xe544,	// (0x00059d10) dt_sta_controll_pane_g1

0xe54d,	// (0x00059d19) bg_dt_sta_title_pane_g1

0xe556,	// (0x00059d22) bg_dt_sta_title_pane_g2

0xe55f,	// (0x00059d2b) bg_dt_sta_title_pane_g3

0x0002,

0xfe70,	// (0x0005b63c) bg_dt_sta_title_pane_g

0x47b2,	// (0x0004ff7e) bg_dt_sta_indi_pane_g1

0x7256,	// (0x00052a22) dt_sta_signal_pane_g1

0x725e,	// (0x00052a2a) dt_sta_signal_pane_g2

0x0001,

0xfe77,	// (0x0005b643) dt_sta_signal_pane_g

0x7266,	// (0x00052a32) dt_sta_battery_pane_g1

0x726f,	// (0x00052a3b) dt_sta_battery_pane_t1

0x47b2,	// (0x0004ff7e) bg_dt_sta_control_pane_g1

0xc0a5,	// (0x00057871) fep_china_uni_eep_pane

0xc0ad,	// (0x00057879) fep_china_uni_entry_pane_ParamLimits

0xc0bd,	// (0x00057889) popup_fep_china_uni_window_g1_ParamLimits

0xc0cd,	// (0x00057899) popup_fep_china_uni_window_g2_ParamLimits

0xc0cd,	// (0x00057899) popup_fep_china_uni_window_g2

0x0001,

0xf6ee,	// (0x0005aeba) popup_fep_china_uni_window_g_ParamLimits

0xf6ee,	// (0x0005aeba) popup_fep_china_uni_window_g

0x727e,	// (0x00052a4a) fep_china_uni_eep_pane_g1

0x7286,	// (0x00052a52) fep_china_uni_eep_pane_t1

0x6c8e,	// (0x0005245a) aid_touch_area_size_smil_player

0x07a8,	// (0x0004bf74) lc0_clock_pane

0x206e,	// (0x0004d83a) status_pane_g5_ParamLimits

0x206e,	// (0x0004d83a) status_pane_g5

0xaa23,	// (0x000561ef) popup_keymap_window

0x202c,	// (0x0004d7f8) status_icon_pane

0x6e93,	// (0x0005265f) cell_ai5_widget_pane_g3_ParamLimits

0x6ead,	// (0x00052679) cell_ai5_widget_pane_g4_ParamLimits

0x6ebd,	// (0x00052689) cell_ai5_widget_pane_g5_ParamLimits

0x6ee5,	// (0x000526b1) cell_ai5_widget_pane_g8_ParamLimits

0x6ee5,	// (0x000526b1) cell_ai5_widget_pane_g8

0x6ef9,	// (0x000526c5) cell_ai5_widget_pane_g9_ParamLimits

0x6ef9,	// (0x000526c5) cell_ai5_widget_pane_g9

0x6f0d,	// (0x000526d9) cell_ai5_widget_pane_g10_ParamLimits

0x6f0d,	// (0x000526d9) cell_ai5_widget_pane_g10

0x7295,	// (0x00052a61) status_icon_pane_g1

0x8eb8,	// (0x00054684) bg_popup_sub_pane_cp13

0x729d,	// (0x00052a69) popup_keymap_window_t1

0xa6df,	// (0x00055eab) control_pane_g6_ParamLimits

0xa6df,	// (0x00055eab) control_pane_g6

0xa6ec,	// (0x00055eb8) control_pane_g7_ParamLimits

0xa6ec,	// (0x00055eb8) control_pane_g7

0xa6f9,	// (0x00055ec5) control_pane_g8_ParamLimits

0xa6f9,	// (0x00055ec5) control_pane_g8

0xe4f2,	// (0x00059cbe) dt_sta_controll_pane_ParamLimits

0xe4ff,	// (0x00059ccb) dt_sta_indi_pane_ParamLimits

0xe50c,	// (0x00059cd8) dt_sta_title_pane_ParamLimits

0x9bd2,	// (0x0005539e) aid_size_touch_scroll_bar_cale

0x911f,	// (0x000548eb) popup_discreet_window_ParamLimits

0x911f,	// (0x000548eb) popup_discreet_window

0x9171,	// (0x0005493d) popup_sk_window

0x2882,	// (0x0004e04e) bg_popup_sub_pane_cp28_ParamLimits

0x2882,	// (0x0004e04e) bg_popup_sub_pane_cp28

0x72ab,	// (0x00052a77) popup_discreet_window_g1_ParamLimits

0x72ab,	// (0x00052a77) popup_discreet_window_g1

0xe568,	// (0x00059d34) popup_discreet_window_t1_ParamLimits

0xe568,	// (0x00059d34) popup_discreet_window_t1

0x72e9,	// (0x00052ab5) popup_discreet_window_t2_ParamLimits

0x72e9,	// (0x00052ab5) popup_discreet_window_t2

0x0002,

0xfe7c,	// (0x0005b648) popup_discreet_window_t_ParamLimits

0xfe7c,	// (0x0005b648) popup_discreet_window_t

0x1bc1,	// (0x0004d38d) popup_sk_window_g1

0x1bcb,	// (0x0004d397) popup_sk_window_g2

0x0001,

0xfe83,	// (0x0005b64f) popup_sk_window_g

0xbd03,	// (0x000574cf) popup_sk_window_t1

0xbd11,	// (0x000574dd) popup_sk_window_t1_copy1

0x6e7f,	// (0x0005264b) cell_ai5_widget_pane_g2_ParamLimits

0x701a,	// (0x000527e6) cell_ai5_widget_pane_t9_ParamLimits

0x701a,	// (0x000527e6) cell_ai5_widget_pane_t9

0x8eb8,	// (0x00054684) main_fep_fshwr2_pane

0xbd1f,	// (0x000574eb) aid_fshwr2_btn_pane

0xbd33,	// (0x000574ff) aid_fshwr2_syb_pane

0xbd47,	// (0x00057513) aid_fshwr2_txt_pane

0xbd57,	// (0x00057523) fshwr2_func_candi_pane

0xbd77,	// (0x00057543) fshwr2_hwr_syb_pane

0xbd99,	// (0x00057565) fshwr2_icf_pane

0x8eb8,	// (0x00054684) fshwr2_icf_bg_pane

0x1c93,	// (0x0004d45f) fshwr2_icf_pane_t1_ParamLimits

0x1c93,	// (0x0004d45f) fshwr2_icf_pane_t1

0xc022,	// (0x000577ee) fshwr2_func_candi_pane_g1

0xe586,	// (0x00059d52) fshwr2_func_candi_row_pane_ParamLimits

0xe586,	// (0x00059d52) fshwr2_func_candi_row_pane

0xbdc9,	// (0x00057595) cell_fshwr2_syb_pane_ParamLimits

0xbdc9,	// (0x00057595) cell_fshwr2_syb_pane

0x6c5e,	// (0x0005242a) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6c5e,	// (0x0005242a) fshwr2_hwr_syb_pane_g1

0x8eb8,	// (0x00054684) bg_popup_call_pane_cp01

0xbdef,	// (0x000575bb) fshwr2_func_candi_cell_pane_ParamLimits

0xbdef,	// (0x000575bb) fshwr2_func_candi_cell_pane

0x266b,	// (0x0004de37) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x266b,	// (0x0004de37) fshwr2_func_candi_cell_bg_pane

0xbe3a,	// (0x00057606) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xbe3a,	// (0x00057606) fshwr2_func_candi_cell_pane_g1

0xbe71,	// (0x0005763d) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xbe71,	// (0x0005763d) fshwr2_func_candi_cell_pane_t1

0x8eb8,	// (0x00054684) bg_button_pane_cp08

0x9ec6,	// (0x00055692) cell_fshwr2_syb_bg_pane

0xbe8c,	// (0x00057658) cell_fshwr2_syb_bg_pane_g1

0xbe9f,	// (0x0005766b) cell_fshwr2_syb_bg_pane_t1

0x9ce2,	// (0x000554ae) main_tmo_pane

0xc9f5,	// (0x000581c1) uni_indicator_pane_g1_ParamLimits

0xca0b,	// (0x000581d7) uni_indicator_pane_g2_ParamLimits

0xca21,	// (0x000581ed) uni_indicator_pane_g3_ParamLimits

0x33ab,	// (0x0004eb77) uni_indicator_pane_g4_ParamLimits

0x33ab,	// (0x0004eb77) uni_indicator_pane_g4

0x33bf,	// (0x0004eb8b) uni_indicator_pane_g5_ParamLimits

0x33bf,	// (0x0004eb8b) uni_indicator_pane_g5

0x33bf,	// (0x0004eb8b) uni_indicator_pane_g6_ParamLimits

0x33bf,	// (0x0004eb8b) uni_indicator_pane_g6

0xf8e6,	// (0x0005b0b2) uni_indicator_pane_g_ParamLimits

0xd809,	// (0x00058fd5) popup_tmo_note_window_ParamLimits

0xd809,	// (0x00058fd5) popup_tmo_note_window

0x9ce2,	// (0x000554ae) fshwr2_bg_pane

0xbe62,	// (0x0005762e) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xbe62,	// (0x0005762e) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe88,	// (0x0005b654) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe88,	// (0x0005b654) fshwr2_func_candi_cell_pane_g

0x47b2,	// (0x0004ff7e) bg_popup_window_pane_cp01

0x1d77,	// (0x0004d543) bg_popup_window_pane_g1_cp01

0x7362,	// (0x00052b2e) bg_popup_window_pane_cp22_ParamLimits

0x7362,	// (0x00052b2e) bg_popup_window_pane_cp22

0xe5a9,	// (0x00059d75) listscroll_tmo_link_pane_ParamLimits

0xe5a9,	// (0x00059d75) listscroll_tmo_link_pane

0x73b0,	// (0x00052b7c) popup_tmo_note_window_g1_ParamLimits

0x73b0,	// (0x00052b7c) popup_tmo_note_window_g1

0xe5e9,	// (0x00059db5) tmo_note_info_pane_ParamLimits

0xe5e9,	// (0x00059db5) tmo_note_info_pane

0xe603,	// (0x00059dcf) list_tmo_note_info_pane_g1_ParamLimits

0xe603,	// (0x00059dcf) list_tmo_note_info_pane_g1

0x73ee,	// (0x00052bba) list_tmo_note_info_pane_g2_ParamLimits

0x73ee,	// (0x00052bba) list_tmo_note_info_pane_g2

0x0001,

0xfe8d,	// (0x0005b659) list_tmo_note_info_pane_g_ParamLimits

0xfe8d,	// (0x0005b659) list_tmo_note_info_pane_g

0x740a,	// (0x00052bd6) list_tmo_note_info_text_pane_ParamLimits

0x740a,	// (0x00052bd6) list_tmo_note_info_text_pane

0x748b,	// (0x00052c57) list_tmo_link_pane

0x7498,	// (0x00052c64) scroll_pane_cp20

0x74a5,	// (0x00052c71) list_single_tmo_link_pane_ParamLimits

0x74a5,	// (0x00052c71) list_single_tmo_link_pane

0x74b5,	// (0x00052c81) list_single_tmo_link_pane_t1

0x74c3,	// (0x00052c8f) list_tmo_note_info_text_pane_t1_ParamLimits

0x74c3,	// (0x00052c8f) list_tmo_note_info_text_pane_t1

0x9d9e,	// (0x0005556a) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9d9e,	// (0x0005556a) aid_size_touch_scroll_bar_cp01

0x8b0f,	// (0x000542db) aid_size_touch_slider_marker

0x9161,	// (0x0005492d) popup_settings_window_ParamLimits

0x9161,	// (0x0005492d) popup_settings_window

0xe910,	// (0x0005a0dc) popup_candi_list_indi_window

0x0652,	// (0x0004be1e) aid_touch_navi_pane_ParamLimits

0x13a6,	// (0x0004cb72) rs_clock_indi_pane

0x13af,	// (0x0004cb7b) sctrl_sk_bottom_pane_ParamLimits

0x13c0,	// (0x0004cb8c) sctrl_sk_top_pane_ParamLimits

0xb958,	// (0x00057124) popup_fep_tooltip_window

0x6df5,	// (0x000525c1) aid_size_cell_widget_grid_ParamLimits

0x6e6a,	// (0x00052636) cell_ai5_widget_pane_g1_ParamLimits

0x6e6a,	// (0x00052636) cell_ai5_widget_pane_g1

0x6ecd,	// (0x00052699) cell_ai5_widget_pane_g6_ParamLimits

0x6ed9,	// (0x000526a5) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe01,	// (0x0005b5cd) cell_ai5_widget_pane_g_ParamLimits

0xfe01,	// (0x0005b5cd) cell_ai5_widget_pane_g

0x7049,	// (0x00052815) cell_ai5_widget_pane_t10_ParamLimits

0x7049,	// (0x00052815) cell_ai5_widget_pane_t10

0x708c,	// (0x00052858) grid_ai5_widget_pane_ParamLimits

0x7124,	// (0x000528f0) cell_contacts_ai5_widget_pane_ParamLimits

0x7124,	// (0x000528f0) cell_contacts_ai5_widget_pane

0x72fe,	// (0x00052aca) popup_discreet_window_t3_ParamLimits

0x72fe,	// (0x00052aca) popup_discreet_window_t3

0xbdb5,	// (0x00057581) popup_fshwr2_char_preview_window_ParamLimits

0xbdb5,	// (0x00057581) popup_fshwr2_char_preview_window

0xe61a,	// (0x00059de6) tmo_note_info_pane_t1

0xe62f,	// (0x00059dfb) tmo_note_info_pane_t2

0xe646,	// (0x00059e12) tmo_note_info_pane_t3

0x7467,	// (0x00052c33) tmo_note_info_pane_t4

0x7479,	// (0x00052c45) tmo_note_info_pane_t5

0x0004,

0xfe92,	// (0x0005b65e) tmo_note_info_pane_t

0x748b,	// (0x00052c57) list_tmo_link_pane_ParamLimits

0x7498,	// (0x00052c64) scroll_pane_cp20_ParamLimits

0x8eb8,	// (0x00054684) bg_popup_fep_char_preview_window_cp01

0xe65b,	// (0x00059e27) popup_fshwr2_char_preview_window_t1

0x74ea,	// (0x00052cb6) popup_candi_list_indi_window_g1

0x74f3,	// (0x00052cbf) bg_cell_contacts_ai5_widget_pane

0x74ff,	// (0x00052ccb) cell_contacts_ai5_widget_pane_g1

0x4e99,	// (0x00050665) cell_contacts_ai5_widget_pane_g2

0x7514,	// (0x00052ce0) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe9d,	// (0x0005b669) cell_contacts_ai5_widget_pane_g

0x7520,	// (0x00052cec) cell_contacts_ai5_widget_pane_t1

0x9ce2,	// (0x000554ae) highlight_cell_shortcut_ai5_widget_pane_cp01

0x7597,	// (0x00052d63) settings_container_pane

0xc480,	// (0x00057c4c) listscroll_set_pane_copy1

0x3e8e,	// (0x0004f65a) scroll_pane_cp121_copy1

0x2627,	// (0x0004ddf3) set_content_pane_copy1

0xe669,	// (0x00059e35) aid_height_set_list_copy1_ParamLimits

0xe669,	// (0x00059e35) aid_height_set_list_copy1

0x35b7,	// (0x0004ed83) aid_size_parent_copy1_ParamLimits

0x35b7,	// (0x0004ed83) aid_size_parent_copy1

0xe675,	// (0x00059e41) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe675,	// (0x00059e41) button_value_adjust_pane_cp6_copy1

0x9ec6,	// (0x00055692) list_highlight_pane_cp2_copy1_ParamLimits

0x9ec6,	// (0x00055692) list_highlight_pane_cp2_copy1

0xe689,	// (0x00059e55) list_set_pane_copy1_ParamLimits

0xe689,	// (0x00059e55) list_set_pane_copy1

0x7532,	// (0x00052cfe) main_pane_set_t1_copy1_ParamLimits

0x7532,	// (0x00052cfe) main_pane_set_t1_copy1

0x756c,	// (0x00052d38) main_pane_set_t2_copy1_ParamLimits

0x756c,	// (0x00052d38) main_pane_set_t2_copy1

0xe736,	// (0x00059f02) main_pane_set_t3_copy1

0xe744,	// (0x00059f10) main_pane_set_t4_copy1

0x758b,	// (0x00052d57) set_content_pane_g1_copy1_ParamLimits

0x758b,	// (0x00052d57) set_content_pane_g1_copy1

0xe752,	// (0x00059f1e) setting_code_pane_copy1

0x7694,	// (0x00052e60) setting_slider_graphic_pane_copy1

0x7694,	// (0x00052e60) setting_slider_pane_copy1

0x769c,	// (0x00052e68) setting_text_pane_copy1

0x769c,	// (0x00052e68) setting_volume_pane_copy1

0xe752,	// (0x00059f1e) settings_code_pane_cp2_copy1

0xe75a,	// (0x00059f26) settings_code_pane_cp_copy1_ParamLimits

0xe75a,	// (0x00059f26) settings_code_pane_cp_copy1

0xbeb5,	// (0x00057681) volume_set_pane_copy1

0xe76e,	// (0x00059f3a) volume_set_pane_g10_copy1

0xe776,	// (0x00059f42) volume_set_pane_g1_copy1

0xe77e,	// (0x00059f4a) volume_set_pane_g2_copy1

0xe786,	// (0x00059f52) volume_set_pane_g3_copy1

0xe78e,	// (0x00059f5a) volume_set_pane_g4_copy1

0xe796,	// (0x00059f62) volume_set_pane_g5_copy1

0xe79e,	// (0x00059f6a) volume_set_pane_g6_copy1

0xe7a6,	// (0x00059f72) volume_set_pane_g7_copy1

0xe7ae,	// (0x00059f7a) volume_set_pane_g8_copy1

0xee56,	// (0x0005a622) volume_set_pane_g9_copy1

0x939c,	// (0x00054b68) bg_set_opt_pane_cp_copy1_ParamLimits

0x939c,	// (0x00054b68) bg_set_opt_pane_cp_copy1

0xbebd,	// (0x00057689) setting_slider_pane_t1_copy1_ParamLimits

0xbebd,	// (0x00057689) setting_slider_pane_t1_copy1

0xbedc,	// (0x000576a8) setting_slider_pane_t2_copy1_ParamLimits

0xbedc,	// (0x000576a8) setting_slider_pane_t2_copy1

0xbef6,	// (0x000576c2) setting_slider_pane_t3_copy1_ParamLimits

0xbef6,	// (0x000576c2) setting_slider_pane_t3_copy1

0xbf0e,	// (0x000576da) slider_set_pane_copy1_ParamLimits

0xbf0e,	// (0x000576da) slider_set_pane_copy1

0x9d3a,	// (0x00055506) set_opt_bg_pane_g1_copy2

0x9d42,	// (0x0005550e) set_opt_bg_pane_g2_copy2

0x7708,	// (0x00052ed4) set_opt_bg_pane_g3_copy2

0x9d52,	// (0x0005551e) set_opt_bg_pane_g4_copy2

0x9d5a,	// (0x00055526) set_opt_bg_pane_g5_copy2

0x9d62,	// (0x0005552e) set_opt_bg_pane_g6_copy2

0xee5e,	// (0x0005a62a) set_opt_bg_pane_g7_copy2

0x771a,	// (0x00052ee6) set_opt_bg_pane_g8_copy2

0x7724,	// (0x00052ef0) set_opt_bg_pane_g9_copy2

0xbf24,	// (0x000576f0) aid_size_touch_slider_mark_copy1_ParamLimits

0xbf24,	// (0x000576f0) aid_size_touch_slider_mark_copy1

0xee66,	// (0x0005a632) slider_set_pane_g1_copy1

0x1e03,	// (0x0004d5cf) slider_set_pane_g2_copy1

0xb6a5,	// (0x00056e71) slider_set_pane_g3_copy1_ParamLimits

0xb6a5,	// (0x00056e71) slider_set_pane_g3_copy1

0xb6b9,	// (0x00056e85) slider_set_pane_g4_copy1_ParamLimits

0xb6b9,	// (0x00056e85) slider_set_pane_g4_copy1

0xb6d1,	// (0x00056e9d) slider_set_pane_g5_copy1_ParamLimits

0xb6d1,	// (0x00056e9d) slider_set_pane_g5_copy1

0xb6a5,	// (0x00056e71) slider_set_pane_g6_copy1_ParamLimits

0xb6a5,	// (0x00056e71) slider_set_pane_g6_copy1

0xbf38,	// (0x00057704) slider_set_pane_g7_copy1_ParamLimits

0xbf38,	// (0x00057704) slider_set_pane_g7_copy1

0x9101,	// (0x000548cd) bg_set_opt_pane_cp2_copy1

0xee6f,	// (0x0005a63b) setting_slider_graphic_pane_g1_copy1

0xee78,	// (0x0005a644) setting_slider_graphic_pane_t1_copy1

0xee88,	// (0x0005a654) setting_slider_graphic_pane_t2_copy1

0xee98,	// (0x0005a664) slider_set_pane_cp_copy1

0x7770,	// (0x00052f3c) input_focus_pane_cp1_copy1

0x7779,	// (0x00052f45) list_set_text_pane_copy1

0x7781,	// (0x00052f4d) setting_text_pane_g1_copy1

0xeea8,	// (0x0005a674) set_text_pane_t1_copy1

0x7770,	// (0x00052f3c) input_focus_pane_cp2_copy1

0x7781,	// (0x00052f4d) setting_code_pane_g1_copy1

0x778a,	// (0x00052f56) setting_code_pane_t1_copy1

0x7798,	// (0x00052f64) list_set_graphic_pane_copy1

0x9101,	// (0x000548cd) bg_set_opt_pane_cp4_copy1

0xc1fd,	// (0x000579c9) list_set_graphic_pane_g1_copy1_ParamLimits

0xc1fd,	// (0x000579c9) list_set_graphic_pane_g1_copy1

0x77ac,	// (0x00052f78) list_set_graphic_pane_g2_copy1

0xc215,	// (0x000579e1) list_set_graphic_pane_t1_copy1_ParamLimits

0xc215,	// (0x000579e1) list_set_graphic_pane_t1_copy1

0x47b2,	// (0x0004ff7e) rs_clock_indi_pane_g1

0x77b4,	// (0x00052f80) rs_clock_indi_pane_t1

0x77c2,	// (0x00052f8e) rs_indi_pane

0x77ca,	// (0x00052f96) rs_indi_pane_g1

0x77d3,	// (0x00052f9f) rs_indi_pane_g2

0x74ea,	// (0x00052cb6) rs_indi_pane_g3

0x0002,

0xfea4,	// (0x0005b670) rs_indi_pane_g

0xc480,	// (0x00057c4c) bg_popup_preview_window_pane_cp03

0x77dc,	// (0x00052fa8) popup_fep_tooltip_window_t1

0xd4af,	// (0x00058c7b) popup_note2_window_g2_ParamLimits

0xd4af,	// (0x00058c7b) popup_note2_window_g2

0x0001,

0xfc38,	// (0x0005b404) popup_note2_window_g_ParamLimits

0xfc38,	// (0x0005b404) popup_note2_window_g

0x5959,	// (0x00051125) bg_popup_sub_pane_cp11_ParamLimits

0x5966,	// (0x00051132) cell_ai3_links_pane_g1_ParamLimits

0x597d,	// (0x00051149) cell_ai3_links_pane_t1

0xeea8,	// (0x0005a674) set_text_pane_t1_copy1_ParamLimits

0xc3c2,	// (0x00057b8e) cell_graphic_popup_pane_cp2_ParamLimits

0xc3c2,	// (0x00057b8e) cell_graphic_popup_pane_cp2

0xeec2,	// (0x0005a68e) cell_graphic_popup_pane_g1_cp2

0x9a52,	// (0x0005521e) cell_graphic_popup_pane_g2_cp2

0x77f2,	// (0x00052fbe) cell_graphic_popup_pane_g3_cp2

0xeeca,	// (0x0005a696) cell_graphic_popup_pane_t2_cp2

0x9a63,	// (0x0005522f) grid_highlight_pane_cp3_cp2

0xa07f,	// (0x0005584b) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x9ce2,	// (0x000554ae) main_tmo_pane_ParamLimits

0xd7fd,	// (0x00058fc9) popup_tmo_big_image_note_window

0x6e59,	// (0x00052625) cell_ai5_widget_list_pane

0x6e61,	// (0x0005262d) cell_ai5_widget_lrg_icon_pane

0xe61a,	// (0x00059de6) tmo_note_info_pane_t1_ParamLimits

0xe62f,	// (0x00059dfb) tmo_note_info_pane_t2_ParamLimits

0xe646,	// (0x00059e12) tmo_note_info_pane_t3_ParamLimits

0x7467,	// (0x00052c33) tmo_note_info_pane_t4_ParamLimits

0x7479,	// (0x00052c45) tmo_note_info_pane_t5_ParamLimits

0xfe92,	// (0x0005b65e) tmo_note_info_pane_t_ParamLimits

0x7597,	// (0x00052d63) settings_container_pane_ParamLimits

0xeea0,	// (0x0005a66c) indicator_popup_pane_cp5

0xeea0,	// (0x0005a66c) indicator_popup_pane_cp6

0x7798,	// (0x00052f64) list_set_graphic_pane_copy1_ParamLimits

0x8eb8,	// (0x00054684) bg_popup_window_pane_cp23

0x7808,	// (0x00052fd4) popup_tmo_big_image_note_window_g1

0x7811,	// (0x00052fdd) popup_tmo_big_image_note_window_t1

0x7821,	// (0x00052fed) popup_tmo_big_image_note_window_t2

0x7831,	// (0x00052ffd) popup_tmo_big_image_note_window_t3

0x0002,

0xfeab,	// (0x0005b677) popup_tmo_big_image_note_window_t

0x47b2,	// (0x0004ff7e) cell_ai5_widget_lrg_icon_pane_g1

0x7841,	// (0x0005300d) cell_ai5_widget_lrg_icon_pane_t1

0x784f,	// (0x0005301b) cell_ai5_widget_list_row_pane_ParamLimits

0x784f,	// (0x0005301b) cell_ai5_widget_list_row_pane

0x7866,	// (0x00053032) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x7866,	// (0x00053032) cell_ai5_widget_list_row_pane_g1

0xeed8,	// (0x0005a6a4) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xeed8,	// (0x0005a6a4) cell_ai5_widget_list_row_pane_t1

0x789e,	// (0x0005306a) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x789e,	// (0x0005306a) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeb2,	// (0x0005b67e) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeb2,	// (0x0005b67e) cell_ai5_widget_list_row_pane_t

0x8eb8,	// (0x00054684) main_fep_vtchi_ss_pane

0x78ee,	// (0x000530ba) popup_fep_char_pre_window

0x78f6,	// (0x000530c2) popup_fep_ituss_window

0xef33,	// (0x0005a6ff) popup_fep_vkbss_window

0x9ec6,	// (0x00055692) grid_vkbss_keypad_pane_ParamLimits

0x9ec6,	// (0x00055692) grid_vkbss_keypad_pane

0x7962,	// (0x0005312e) ituss_keypad_pane

0x1e2b,	// (0x0004d5f7) aid_vkbss_key_offset_ParamLimits

0x1e2b,	// (0x0004d5f7) aid_vkbss_key_offset

0xbf4e,	// (0x0005771a) cell_vkbss_key_pane_ParamLimits

0xbf4e,	// (0x0005771a) cell_vkbss_key_pane

0x7972,	// (0x0005313e) bg_cell_vkbss_key_g1_ParamLimits

0x7972,	// (0x0005313e) bg_cell_vkbss_key_g1

0xef40,	// (0x0005a70c) cell_vkbss_key_3p_pane_ParamLimits

0xef40,	// (0x0005a70c) cell_vkbss_key_3p_pane

0xef76,	// (0x0005a742) cell_vkbss_key_g1_ParamLimits

0xef76,	// (0x0005a742) cell_vkbss_key_g1

0xefac,	// (0x0005a778) cell_vkbss_key_t1_ParamLimits

0xefac,	// (0x0005a778) cell_vkbss_key_t1

0x1e82,	// (0x0004d64e) cell_ituss_key_pane_ParamLimits

0x1e82,	// (0x0004d64e) cell_ituss_key_pane

0x7a46,	// (0x00053212) bg_cell_ituss_key_g1_ParamLimits

0x7a46,	// (0x00053212) bg_cell_ituss_key_g1

0x7a52,	// (0x0005321e) cell_ituss_key_pane_g1_ParamLimits

0x7a52,	// (0x0005321e) cell_ituss_key_pane_g1

0x1e93,	// (0x0004d65f) cell_ituss_key_pane_g2_ParamLimits

0x1e93,	// (0x0004d65f) cell_ituss_key_pane_g2

0x0005,

0xfeb9,	// (0x0005b685) cell_ituss_key_pane_g_ParamLimits

0xfeb9,	// (0x0005b685) cell_ituss_key_pane_g

0x1f17,	// (0x0004d6e3) cell_ituss_key_t1_ParamLimits

0x1f17,	// (0x0004d6e3) cell_ituss_key_t1

0x1f51,	// (0x0004d71d) cell_ituss_key_t2_ParamLimits

0x1f51,	// (0x0004d71d) cell_ituss_key_t2

0x1f83,	// (0x0004d74f) cell_ituss_key_t3_ParamLimits

0x1f83,	// (0x0004d74f) cell_ituss_key_t3

0x1fb4,	// (0x0004d780) cell_ituss_key_t4_ParamLimits

0x1fb4,	// (0x0004d780) cell_ituss_key_t4

0x0004,

0xfec6,	// (0x0005b692) cell_ituss_key_t_ParamLimits

0xfec6,	// (0x0005b692) cell_ituss_key_t

0xf008,	// (0x0005a7d4) cell_vkbss_key_3p_pane_g1

0xf010,	// (0x0005a7dc) cell_vkbss_key_3p_pane_g2

0xf018,	// (0x0005a7e4) cell_vkbss_key_3p_pane_g3

0x0002,

0xfed1,	// (0x0005b69d) cell_vkbss_key_3p_pane_g

0xc480,	// (0x00057c4c) bg_popup_fep_char_preview_window_cp02

0x7a90,	// (0x0005325c) popup_fep_char_pre_window_t1

0xe4a2,	// (0x00059c6e) main_ai5_sk_pane

0x74f3,	// (0x00052cbf) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x74ff,	// (0x00052ccb) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x4e99,	// (0x00050665) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x7514,	// (0x00052ce0) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe9d,	// (0x0005b669) cell_contacts_ai5_widget_pane_g_ParamLimits

0x7520,	// (0x00052cec) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x9ce2,	// (0x000554ae) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf020,	// (0x0005a7ec) main_ai5_sk_pane_g1

0xc64e,	// (0x00057e1a) popup_query_code_window_g1

0xef24,	// (0x0005a6f0) popup_fep_vkb_icf_pane

0x7939,	// (0x00053105) popup_fep_vtchi_icf_pane

0x7aa7,	// (0x00053273) bg_icf_pane

0x7aa7,	// (0x00053273) list_vkb_icf_pane

0x7ab3,	// (0x0005327f) bg_icf_pane_cp01

0x7ac6,	// (0x00053292) vtchi_icf_list_pane

0xf075,	// (0x0005a841) list_vkb_icf_pane_t1_ParamLimits

0xf075,	// (0x0005a841) list_vkb_icf_pane_t1

0x7b4b,	// (0x00053317) vtchi_icf_list_pane_t1_ParamLimits

0x7b4b,	// (0x00053317) vtchi_icf_list_pane_t1

0x78f6,	// (0x000530c2) popup_fep_ituss_window_ParamLimits

0x7939,	// (0x00053105) popup_fep_vtchi_icf_pane_ParamLimits

0x7962,	// (0x0005312e) ituss_keypad_pane_ParamLimits

0x1e21,	// (0x0004d5ed) ituss_sks_pane

0x7aa7,	// (0x00053273) bg_icf_pane_ParamLimits

0xef09,	// (0x0005a6d5) icf_edit_indi_pane_ParamLimits

0xef09,	// (0x0005a6d5) icf_edit_indi_pane

0x7aa7,	// (0x00053273) list_vkb_icf_pane_ParamLimits

0x7ab3,	// (0x0005327f) bg_icf_pane_cp01_ParamLimits

0x78e1,	// (0x000530ad) icf_edit_indi_pane_cp01_ParamLimits

0x78e1,	// (0x000530ad) icf_edit_indi_pane_cp01

0x7ac6,	// (0x00053292) vtchi_query_pane

0x6c5e,	// (0x0005242a) icf_edit_indi_pane_g1_ParamLimits

0x6c5e,	// (0x0005242a) icf_edit_indi_pane_g1

0xf08d,	// (0x0005a859) icf_edit_indi_pane_g2_ParamLimits

0xf08d,	// (0x0005a859) icf_edit_indi_pane_g2

0x0001,

0xfefc,	// (0x0005b6c8) icf_edit_indi_pane_g_ParamLimits

0xfefc,	// (0x0005b6c8) icf_edit_indi_pane_g

0xf0a1,	// (0x0005a86d) icf_edit_indi_pane_t1

0x7b6f,	// (0x0005333b) bg_input_focus_pane_cp042

0x9bc9,	// (0x00055395) vtchi_button_pane

0x7b78,	// (0x00053344) vtchi_query_pane_t1

0x7b86,	// (0x00053352) vtchi_query_pane_t2

0x7b94,	// (0x00053360) vtchi_query_pane_t3

0x0002,

0xfeeb,	// (0x0005b6b7) vtchi_query_pane_t

0x8eb8,	// (0x00054684) bg_button_pane_cp13

0x7ba2,	// (0x0005336e) vtchi_button_pane_g1

0x1ff7,	// (0x0004d7c3) ituss_sks_pane_g1

0x2002,	// (0x0004d7ce) ituss_sks_pane_g2

0x0001,

0xfef2,	// (0x0005b6be) ituss_sks_pane_g

0x7baa,	// (0x00053376) ituss_sks_pane_t1

0x7bb8,	// (0x00053384) ituss_sks_pane_t2

0x0001,

0xfef7,	// (0x0005b6c3) ituss_sks_pane_t

0x4226,	// (0x0004f9f2) indicator_nsta_pane_cp_g1

0x422f,	// (0x0004f9fb) indicator_nsta_pane_cp_g2

0x4237,	// (0x0004fa03) indicator_nsta_pane_cp_g3

0x423f,	// (0x0004fa0b) indicator_nsta_pane_cp_g4

0x422f,	// (0x0004f9fb) indicator_nsta_pane_cp_g5

0x4237,	// (0x0004fa03) indicator_nsta_pane_cp_g6

0x0005,

0xfa82,	// (0x0005b24e) indicator_nsta_pane_cp_g

0xe281,	// (0x00059a4d) cell_graphic2_pane_t2_ParamLimits

0xe281,	// (0x00059a4d) cell_graphic2_pane_t2

0x0001,

0xfd88,	// (0x0005b554) cell_graphic2_pane_t_ParamLimits

0xfd88,	// (0x0005b554) cell_graphic2_pane_t

0xe2b8,	// (0x00059a84) cell_graphic2_control_pane_t1

0xa3ae,	// (0x00055b7a) signal_pane_g3_ParamLimits

0xa3ae,	// (0x00055b7a) signal_pane_g3

0xa3c2,	// (0x00055b8e) signal_pane_g4_ParamLimits

0xa3c2,	// (0x00055b8e) signal_pane_g4

0x78b0,	// (0x0005307c) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x78b0,	// (0x0005307c) cell_ai5_widget_list_row_pane_t3

0x7a66,	// (0x00053232) cell_ituss_key_pane_t1_ParamLimits

0x7a66,	// (0x00053232) cell_ituss_key_pane_t1

0x22f6,	// (0x0004dac2) form_field_data_wide_pane_vc_t2_ParamLimits

0x22f6,	// (0x0004dac2) form_field_data_wide_pane_vc_t2

0x230a,	// (0x0004dad6) form_field_data_wide_pane_vc_t3_ParamLimits

0x230a,	// (0x0004dad6) form_field_data_wide_pane_vc_t3

0x0002,

0xf7ce,	// (0x0005af9a) form_field_data_wide_pane_vc_t_ParamLimits

0xf7ce,	// (0x0005af9a) form_field_data_wide_pane_vc_t

0x3ed0,	// (0x0004f69c) form_field_slider_wide_pane_vc_t3_ParamLimits

0x3ed0,	// (0x0004f69c) form_field_slider_wide_pane_vc_t3

0x3fae,	// (0x0004f77a) form_field_popup_wide_pane_vc_t2_ParamLimits

0x3fae,	// (0x0004f77a) form_field_popup_wide_pane_vc_t2

0x3fc5,	// (0x0004f791) form_field_popup_wide_pane_vc_t3_ParamLimits

0x3fc5,	// (0x0004f791) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa71,	// (0x0005b23d) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa71,	// (0x0005b23d) form_field_popup_wide_pane_vc_t

0xbd1f,	// (0x000574eb) aid_fshwr2_btn_pane_ParamLimits

0xbd33,	// (0x000574ff) aid_fshwr2_syb_pane_ParamLimits

0xbd47,	// (0x00057513) aid_fshwr2_txt_pane_ParamLimits

0x9ce2,	// (0x000554ae) fshwr2_bg_pane_ParamLimits

0xbd57,	// (0x00057523) fshwr2_func_candi_pane_ParamLimits

0xbd77,	// (0x00057543) fshwr2_hwr_syb_pane_ParamLimits

0xbd99,	// (0x00057565) fshwr2_icf_pane_ParamLimits

0x0ed2,	// (0x0004c69e) list_double_graphic_pane_vc_g4_ParamLimits

0x0ed2,	// (0x0004c69e) list_double_graphic_pane_vc_g4

0x1eb3,	// (0x0004d67f) cell_ituss_key_pane_g3_ParamLimits

0x1eb3,	// (0x0004d67f) cell_ituss_key_pane_g3

0x1fe5,	// (0x0004d7b1) cell_ituss_key_t5_ParamLimits

0x1fe5,	// (0x0004d7b1) cell_ituss_key_t5

0xef33,	// (0x0005a6ff) popup_fep_vkbss_window_ParamLimits

0x6dec,	// (0x000525b8) aid_cell_ai5_quarter

0xf0a1,	// (0x0005a86d) icf_edit_indi_pane_t1_ParamLimits

0x97ae,	// (0x00054f7a) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x97ae,	// (0x00054f7a) aid_tch_indicator_popup_pane_cp2

0x97c1,	// (0x00054f8d) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x97c1,	// (0x00054f8d) aid_tch_query_popup_data_pane_cp2

0x266b,	// (0x0004de37) aid_tch_query_popup_pane_ParamLimits

0x266b,	// (0x0004de37) aid_tch_query_popup_pane

0x266b,	// (0x0004de37) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x266b,	// (0x0004de37) aid_tch_query_popup_data_pane_cp1

0x9ec6,	// (0x00055692) cell_fshwr2_syb_bg_pane_ParamLimits

0xbe8c,	// (0x00057658) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xbe9f,	// (0x0005766b) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xef24,	// (0x0005a6f0) popup_fep_vkb_icf_pane_ParamLimits

0xbc85,	// (0x00057451) bg_popup_fep_char_preview_window_g10

0x6f21,	// (0x000526ed) cell_ai5_widget_pane_g11_ParamLimits

0x6f21,	// (0x000526ed) cell_ai5_widget_pane_g11

0x6f2d,	// (0x000526f9) cell_ai5_widget_pane_g12_ParamLimits

0x6f2d,	// (0x000526f9) cell_ai5_widget_pane_g12

0x6f39,	// (0x00052705) cell_ai5_widget_pane_g13_ParamLimits

0x6f39,	// (0x00052705) cell_ai5_widget_pane_g13

0x7068,	// (0x00052834) cell_ai5_widget_pane_t11_ParamLimits

0x7068,	// (0x00052834) cell_ai5_widget_pane_t11

0x707a,	// (0x00052846) cell_ai5_widget_pane_t12_ParamLimits

0x707a,	// (0x00052846) cell_ai5_widget_pane_t12

0x1ebf,	// (0x0004d68b) cell_ituss_key_pane_g4_ParamLimits

0x1ebf,	// (0x0004d68b) cell_ituss_key_pane_g4

0x1edb,	// (0x0004d6a7) cell_ituss_key_pane_g5_ParamLimits

0x1edb,	// (0x0004d6a7) cell_ituss_key_pane_g5

0x1ef7,	// (0x0004d6c3) cell_ituss_key_pane_g6_ParamLimits

0x1ef7,	// (0x0004d6c3) cell_ituss_key_pane_g6

0x21dc,	// (0x0004d9a8) bg_icf_pane_g1

0xf029,	// (0x0005a7f5) bg_icf_pane_g2

0xf033,	// (0x0005a7ff) bg_icf_pane_g3

0xf03b,	// (0x0005a807) bg_icf_pane_g4

0xf045,	// (0x0005a811) bg_icf_pane_g5

0xf04f,	// (0x0005a81b) bg_icf_pane_g6

0xf059,	// (0x0005a825) bg_icf_pane_g7

0xf061,	// (0x0005a82d) bg_icf_pane_g8

0xf06b,	// (0x0005a837) bg_icf_pane_g9

0x0008,

0xfed8,	// (0x0005b6a4) bg_icf_pane_g

0x794f,	// (0x0005311b) popup_hyb_candi_window_ParamLimits

0x794f,	// (0x0005311b) popup_hyb_candi_window

0x2268,	// (0x0004da34) bg_popup_sub_pane_cp01_ParamLimits

0x2268,	// (0x0004da34) bg_popup_sub_pane_cp01

0x7bf3,	// (0x000533bf) entry_hyb_candi_pane_ParamLimits

0x7bf3,	// (0x000533bf) entry_hyb_candi_pane

0x7c02,	// (0x000533ce) grid_hyb_candi_pane_ParamLimits

0x7c02,	// (0x000533ce) grid_hyb_candi_pane

0x7c17,	// (0x000533e3) grid_hyb_phrase_pane_ParamLimits

0x7c17,	// (0x000533e3) grid_hyb_phrase_pane

0x7c26,	// (0x000533f2) cell_hyb_candi_pane_ParamLimits

0x7c26,	// (0x000533f2) cell_hyb_candi_pane

0x7c49,	// (0x00053415) cell_hyb_candi_scroll_pane

0xc022,	// (0x000577ee) cell_hyb_candi_pane_g1

0x7c52,	// (0x0005341e) cell_hyb_candi_pane_t1

0x7c60,	// (0x0005342c) cell_hyb_phrase_pane

0xc022,	// (0x000577ee) cell_hyb_phrase_pane_g1

0x7c69,	// (0x00053435) cell_hyb_phrase_pane_t1

0x7c77,	// (0x00053443) entry_hyb_candi_pane_t1

0xc480,	// (0x00057c4c) input_focus_pane_cp06

0x7c85,	// (0x00053451) cell_hyb_candi_scroll_pane_g1

0x7c8d,	// (0x00053459) cell_hyb_candi_scroll_pane_g1_aid

0x7c95,	// (0x00053461) cell_hyb_candi_scroll_pane_g2

0x7c9d,	// (0x00053469) cell_hyb_candi_scroll_pane_g2_aid

0x7ca5,	// (0x00053471) cell_hyb_candi_scroll_pane_g3

0x7cad,	// (0x00053479) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Large

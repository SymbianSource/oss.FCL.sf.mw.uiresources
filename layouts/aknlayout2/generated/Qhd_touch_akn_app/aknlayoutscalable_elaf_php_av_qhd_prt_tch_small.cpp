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

#include "aknlayoutscalable_elaf_php_av_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0001ad3c };

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
0x7c93,	// (0x000229cf) Screen

0x7ca7,	// (0x000229e3) application_window_ParamLimits

0x7ca7,	// (0x000229e3) application_window

0x7cc1,	// (0x000229fd) screen_g1

0x5b5d,	// (0x00020899) area_bottom_pane_ParamLimits

0x5b5d,	// (0x00020899) area_bottom_pane

0x5c1d,	// (0x00020959) area_top_pane_ParamLimits

0x5c1d,	// (0x00020959) area_top_pane

0x5cb1,	// (0x000209ed) main_pane_ParamLimits

0x5cb1,	// (0x000209ed) main_pane

0x7ccb,	// (0x00022a07) misc_graphics

0x9672,	// (0x000243ae) battery_pane_ParamLimits

0x9672,	// (0x000243ae) battery_pane

0xa336,	// (0x00025072) bg_status_flat_pane_g8

0xa33e,	// (0x0002507a) bg_status_flat_pane_g9

0x9734,	// (0x00024470) context_pane_ParamLimits

0x9734,	// (0x00024470) context_pane

0x984a,	// (0x00024586) navi_pane_ParamLimits

0x984a,	// (0x00024586) navi_pane

0x98c8,	// (0x00024604) signal_pane_ParamLimits

0x98c8,	// (0x00024604) signal_pane

0x0008,

0xf878,	// (0x0002a5b4) bg_status_flat_pane_g

0x9935,	// (0x00024671) status_pane_g1_ParamLimits

0x9935,	// (0x00024671) status_pane_g1

0x9941,	// (0x0002467d) status_pane_g2_ParamLimits

0x9941,	// (0x0002467d) status_pane_g2

0x994d,	// (0x00024689) status_pane_g3_ParamLimits

0x994d,	// (0x00024689) status_pane_g3

0x0004,

0xf7a6,	// (0x0002a4e2) status_pane_g_ParamLimits

0xf7a6,	// (0x0002a4e2) status_pane_g

0x9981,	// (0x000246bd) title_pane_ParamLimits

0x9981,	// (0x000246bd) title_pane

0x99be,	// (0x000246fa) uni_indicator_pane_ParamLimits

0x99be,	// (0x000246fa) uni_indicator_pane

0x959a,	// (0x000242d6) bg_list_pane_ParamLimits

0x959a,	// (0x000242d6) bg_list_pane

0x51e6,	// (0x0001ff22) find_pane

0x95ba,	// (0x000242f6) listscroll_app_pane_ParamLimits

0x95ba,	// (0x000242f6) listscroll_app_pane

0x95c6,	// (0x00024302) listscroll_form_pane

0x51ee,	// (0x0001ff2a) listscroll_gen_pane_ParamLimits

0x51ee,	// (0x0001ff2a) listscroll_gen_pane

0x95c6,	// (0x00024302) listscroll_set_pane

0x87fb,	// (0x00023537) main_idle_act_pane

0x92a0,	// (0x00023fdc) main_idle_trad_pane

0x92a0,	// (0x00023fdc) main_list_empty_pane

0x95e0,	// (0x0002431c) main_midp_pane

0x95ec,	// (0x00024328) main_pane_g1_ParamLimits

0x95ec,	// (0x00024328) main_pane_g1

0x6572,	// (0x000212ae) popup_ai_message_window_ParamLimits

0x6572,	// (0x000212ae) popup_ai_message_window

0x6618,	// (0x00021354) popup_fep_china_uni_window_ParamLimits

0x6618,	// (0x00021354) popup_fep_china_uni_window

0x6674,	// (0x000213b0) popup_fep_japan_candidate_window_ParamLimits

0x6674,	// (0x000213b0) popup_fep_japan_candidate_window

0x6694,	// (0x000213d0) popup_fep_japan_predictive_window_ParamLimits

0x6694,	// (0x000213d0) popup_fep_japan_predictive_window

0x66c4,	// (0x00021400) popup_find_window

0x66d1,	// (0x0002140d) popup_grid_graphic_window_ParamLimits

0x66d1,	// (0x0002140d) popup_grid_graphic_window

0x66f9,	// (0x00021435) popup_large_graphic_colour_window

0x671f,	// (0x0002145b) popup_menu_window_ParamLimits

0x671f,	// (0x0002145b) popup_menu_window

0x68d7,	// (0x00021613) popup_note_image_window

0x68c3,	// (0x000215ff) popup_note_wait_window_ParamLimits

0x68c3,	// (0x000215ff) popup_note_wait_window

0x68c3,	// (0x000215ff) popup_note_window_ParamLimits

0x68c3,	// (0x000215ff) popup_note_window

0x692d,	// (0x00021669) popup_query_code_window_ParamLimits

0x692d,	// (0x00021669) popup_query_code_window

0x6941,	// (0x0002167d) popup_query_data_code_window_ParamLimits

0x6941,	// (0x0002167d) popup_query_data_code_window

0x695e,	// (0x0002169a) popup_query_data_window_ParamLimits

0x695e,	// (0x0002169a) popup_query_data_window

0x697a,	// (0x000216b6) popup_query_sat_info_window_ParamLimits

0x697a,	// (0x000216b6) popup_query_sat_info_window

0x69b3,	// (0x000216ef) popup_snote_single_graphic_window_ParamLimits

0x69b3,	// (0x000216ef) popup_snote_single_graphic_window

0x69b3,	// (0x000216ef) popup_snote_single_text_window_ParamLimits

0x69b3,	// (0x000216ef) popup_snote_single_text_window

0x69c8,	// (0x00021704) popup_sub_window_general

0x6af8,	// (0x00021834) popup_window_general_ParamLimits

0x6af8,	// (0x00021834) popup_window_general

0x95fa,	// (0x00024336) power_save_pane

0x640e,	// (0x0002114a) control_pane_g1_ParamLimits

0x640e,	// (0x0002114a) control_pane_g1

0x6435,	// (0x00021171) control_pane_g2_ParamLimits

0x6435,	// (0x00021171) control_pane_g2

0x955d,	// (0x00024299) control_pane_g3_ParamLimits

0x955d,	// (0x00024299) control_pane_g3

0x0007,

0xf78e,	// (0x0002a4ca) control_pane_g_ParamLimits

0xf78e,	// (0x0002a4ca) control_pane_g

0x647f,	// (0x000211bb) control_pane_t1_ParamLimits

0x647f,	// (0x000211bb) control_pane_t1

0x64cb,	// (0x00021207) control_pane_t2_ParamLimits

0x64cb,	// (0x00021207) control_pane_t2

0x0002,

0xf79f,	// (0x0002a4db) control_pane_t_ParamLimits

0xf79f,	// (0x0002a4db) control_pane_t

0x947e,	// (0x000241ba) navi_navi_volume_pane_cp1

0x9487,	// (0x000241c3) status_small_icon_pane

0x948f,	// (0x000241cb) status_small_pane_g1_ParamLimits

0x948f,	// (0x000241cb) status_small_pane_g1

0x94c3,	// (0x000241ff) status_small_pane_g2_ParamLimits

0x94c3,	// (0x000241ff) status_small_pane_g2

0x94cf,	// (0x0002420b) status_small_pane_g3_ParamLimits

0x94cf,	// (0x0002420b) status_small_pane_g3

0x94db,	// (0x00024217) status_small_pane_g4_ParamLimits

0x94db,	// (0x00024217) status_small_pane_g4

0x94e7,	// (0x00024223) status_small_pane_g5_ParamLimits

0x94e7,	// (0x00024223) status_small_pane_g5

0x94f6,	// (0x00024232) status_small_pane_g6_ParamLimits

0x94f6,	// (0x00024232) status_small_pane_g6

0x0007,

0xf77d,	// (0x0002a4b9) status_small_pane_g_ParamLimits

0xf77d,	// (0x0002a4b9) status_small_pane_g

0x9526,	// (0x00024262) status_small_pane_t1

0x9549,	// (0x00024285) status_small_wait_pane_ParamLimits

0x9549,	// (0x00024285) status_small_wait_pane

0x8d1d,	// (0x00023a59) aid_levels_signal_ParamLimits

0x8d1d,	// (0x00023a59) aid_levels_signal

0x8d2f,	// (0x00023a6b) signal_pane_g1_ParamLimits

0x8d2f,	// (0x00023a6b) signal_pane_g1

0x8d44,	// (0x00023a80) signal_pane_g2_ParamLimits

0x8d44,	// (0x00023a80) signal_pane_g2

0x0003,

0xf70e,	// (0x0002a44a) signal_pane_g_ParamLimits

0xf70e,	// (0x0002a44a) signal_pane_g

0x8d7f,	// (0x00023abb) context_pane_g1

0x7cd5,	// (0x00022a11) title_pane_g1

0x7d0b,	// (0x00022a47) title_pane_t1

0x7d73,	// (0x00022aaf) title_pane_t2

0x7d99,	// (0x00022ad5) title_pane_t3

0x0002,

0xf55d,	// (0x0002a299) title_pane_t

0x99d6,	// (0x00024712) aid_levels_battery_ParamLimits

0x99d6,	// (0x00024712) aid_levels_battery

0x99ea,	// (0x00024726) battery_pane_g1_ParamLimits

0x99ea,	// (0x00024726) battery_pane_g1

0x9a00,	// (0x0002473c) battery_pane_g2_ParamLimits

0x9a00,	// (0x0002473c) battery_pane_g2

0x0001,

0xf7b1,	// (0x0002a4ed) battery_pane_g_ParamLimits

0xf7b1,	// (0x0002a4ed) battery_pane_g

0xac6c,	// (0x000259a8) uni_indicator_pane_g1

0xac81,	// (0x000259bd) uni_indicator_pane_g2

0xac97,	// (0x000259d3) uni_indicator_pane_g3

0x0005,

0xf920,	// (0x0002a65c) uni_indicator_pane_g

0x9112,	// (0x00023e4e) navi_icon_pane_ParamLimits

0x9112,	// (0x00023e4e) navi_icon_pane

0x905b,	// (0x00023d97) navi_midp_pane

0x912e,	// (0x00023e6a) navi_navi_pane

0x9138,	// (0x00023e74) navi_text_pane_ParamLimits

0x9138,	// (0x00023e74) navi_text_pane

0x7cc1,	// (0x000229fd) status_small_wait_pane_g1

0x81c8,	// (0x00022f04) status_small_wait_pane_g2

0x0001,

0xf91b,	// (0x0002a657) status_small_wait_pane_g

0xa991,	// (0x000256cd) navi_navi_icon_text_pane

0xa999,	// (0x000256d5) navi_navi_pane_g1_ParamLimits

0xa999,	// (0x000256d5) navi_navi_pane_g1

0xa9ab,	// (0x000256e7) navi_navi_pane_g2_ParamLimits

0xa9ab,	// (0x000256e7) navi_navi_pane_g2

0x0001,

0xf8e9,	// (0x0002a625) navi_navi_pane_g_ParamLimits

0xf8e9,	// (0x0002a625) navi_navi_pane_g

0xa9bd,	// (0x000256f9) navi_navi_tabs_pane

0xa9c6,	// (0x00025702) navi_navi_text_pane

0xa991,	// (0x000256cd) navi_navi_volume_pane

0xa96d,	// (0x000256a9) navi_text_pane_t1

0xa961,	// (0x0002569d) navi_icon_pane_g1

0xa8b4,	// (0x000255f0) navi_navi_text_pane_t1

0x6d98,	// (0x00021ad4) navi_navi_volume_pane_g1

0x6da0,	// (0x00021adc) volume_small_pane

0xa81a,	// (0x00025556) navi_navi_icon_text_pane_g1

0xa822,	// (0x0002555e) navi_navi_icon_text_pane_t1

0x912e,	// (0x00023e6a) navi_tabs_2_long_pane

0x912e,	// (0x00023e6a) navi_tabs_2_pane

0x912e,	// (0x00023e6a) navi_tabs_3_long_pane

0x912e,	// (0x00023e6a) navi_tabs_3_pane

0x912e,	// (0x00023e6a) navi_tabs_4_pane

0x6d78,	// (0x00021ab4) tabs_2_active_pane_ParamLimits

0x6d78,	// (0x00021ab4) tabs_2_active_pane

0x6d88,	// (0x00021ac4) tabs_2_passive_pane_ParamLimits

0x6d88,	// (0x00021ac4) tabs_2_passive_pane

0x6d46,	// (0x00021a82) tabs_3_active_pane_ParamLimits

0x6d46,	// (0x00021a82) tabs_3_active_pane

0x6d56,	// (0x00021a92) tabs_3_passive_pane_ParamLimits

0x6d56,	// (0x00021a92) tabs_3_passive_pane

0x6d67,	// (0x00021aa3) tabs_3_passive_pane_cp_ParamLimits

0x6d67,	// (0x00021aa3) tabs_3_passive_pane_cp

0x6d02,	// (0x00021a3e) tabs_4_active_pane_ParamLimits

0x6d02,	// (0x00021a3e) tabs_4_active_pane

0x6d13,	// (0x00021a4f) tabs_4_passive_pane_ParamLimits

0x6d13,	// (0x00021a4f) tabs_4_passive_pane

0x6d24,	// (0x00021a60) tabs_4_passive_pane_cp_ParamLimits

0x6d24,	// (0x00021a60) tabs_4_passive_pane_cp

0x6d35,	// (0x00021a71) tabs_4_passive_pane_cp2_ParamLimits

0x6d35,	// (0x00021a71) tabs_4_passive_pane_cp2

0x6cde,	// (0x00021a1a) tabs_2_long_active_pane_ParamLimits

0x6cde,	// (0x00021a1a) tabs_2_long_active_pane

0x6cf0,	// (0x00021a2c) tabs_2_long_passive_pane_ParamLimits

0x6cf0,	// (0x00021a2c) tabs_2_long_passive_pane

0x6c9f,	// (0x000219db) tabs_3_long_active_pane_ParamLimits

0x6c9f,	// (0x000219db) tabs_3_long_active_pane

0x6cb2,	// (0x000219ee) tabs_3_long_passive_pane_ParamLimits

0x6cb2,	// (0x000219ee) tabs_3_long_passive_pane

0x6ccb,	// (0x00021a07) tabs_3_long_passive_pane_cp_ParamLimits

0x6ccb,	// (0x00021a07) tabs_3_long_passive_pane_cp

0x6c45,	// (0x00021981) volume_small_pane_g1

0x6c4e,	// (0x0002198a) volume_small_pane_g2

0x6c57,	// (0x00021993) volume_small_pane_g3

0x6c60,	// (0x0002199c) volume_small_pane_g4

0x6c69,	// (0x000219a5) volume_small_pane_g5

0x6c72,	// (0x000219ae) volume_small_pane_g6

0x6c7b,	// (0x000219b7) volume_small_pane_g7

0x6c84,	// (0x000219c0) volume_small_pane_g8

0x6c8d,	// (0x000219c9) volume_small_pane_g9

0x6c96,	// (0x000219d2) volume_small_pane_g10

0x0009,

0xf8b5,	// (0x0002a5f1) volume_small_pane_g

0x7dab,	// (0x00022ae7) bg_active_tab_pane_cp2_ParamLimits

0x7dab,	// (0x00022ae7) bg_active_tab_pane_cp2

0x7db9,	// (0x00022af5) tabs_3_active_pane_g1

0x7dc1,	// (0x00022afd) tabs_3_active_pane_t1

0x7dab,	// (0x00022ae7) bg_passive_tab_pane_cp2_ParamLimits

0x7dab,	// (0x00022ae7) bg_passive_tab_pane_cp2

0x7db9,	// (0x00022af5) tabs_3_passive_pane_g1

0x7dc1,	// (0x00022afd) tabs_3_passive_pane_t1

0x7dab,	// (0x00022ae7) bg_active_tab_pane_cp3_ParamLimits

0x7dab,	// (0x00022ae7) bg_active_tab_pane_cp3

0x7dd3,	// (0x00022b0f) tabs_4_active_pane_g1

0x7ddb,	// (0x00022b17) tabs_4_active_pane_t1

0x7dab,	// (0x00022ae7) bg_passive_tab_pane_cp3_ParamLimits

0x7dab,	// (0x00022ae7) bg_passive_tab_pane_cp3

0x7dd3,	// (0x00022b0f) tabs_4_1_passive_pane_g1

0x7ddb,	// (0x00022b17) tabs_4_1_passive_pane_t1

0x95e0,	// (0x0002431c) list_highlight_pane_cp2

0xaef5,	// (0x00025c31) list_set_pane_ParamLimits

0xaef5,	// (0x00025c31) list_set_pane

0xaf9b,	// (0x00025cd7) main_pane_set_t1_ParamLimits

0xaf9b,	// (0x00025cd7) main_pane_set_t1

0xafbb,	// (0x00025cf7) main_pane_set_t2_ParamLimits

0xafbb,	// (0x00025cf7) main_pane_set_t2

0xafcf,	// (0x00025d0b) main_pane_set_t3_ParamLimits

0xafcf,	// (0x00025d0b) main_pane_set_t3

0xafe1,	// (0x00025d1d) main_pane_set_t4_ParamLimits

0xafe1,	// (0x00025d1d) main_pane_set_t4

0x0003,

0xf985,	// (0x0002a6c1) main_pane_set_t_ParamLimits

0xf985,	// (0x0002a6c1) main_pane_set_t

0xaff3,	// (0x00025d2f) setting_code_pane

0xafff,	// (0x00025d3b) setting_slider_graphic_pane

0xafff,	// (0x00025d3b) setting_slider_pane

0xafff,	// (0x00025d3b) setting_text_pane

0xafff,	// (0x00025d3b) setting_volume_pane

0x5ef6,	// (0x00020c32) volume_set_pane

0x7dab,	// (0x00022ae7) bg_set_opt_pane_cp

0x5efe,	// (0x00020c3a) setting_slider_pane_t1

0x5f17,	// (0x00020c53) setting_slider_pane_t2

0x5f31,	// (0x00020c6d) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0002a2a0) setting_slider_pane_t

0x5f49,	// (0x00020c85) slider_set_pane

0x7ccb,	// (0x00022a07) bg_set_opt_pane_cp2

0x7ded,	// (0x00022b29) setting_slider_graphic_pane_g1

0x5f5f,	// (0x00020c9b) setting_slider_graphic_pane_t1

0x5f6f,	// (0x00020cab) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0002a2a7) setting_slider_graphic_pane_t

0x5f7f,	// (0x00020cbb) slider_set_pane_cp

0x7ccb,	// (0x00022a07) input_focus_pane_cp1

0xaeb4,	// (0x00025bf0) list_set_text_pane

0x7cc1,	// (0x000229fd) setting_text_pane_g1

0x7ccb,	// (0x00022a07) input_focus_pane_cp2

0x7cc1,	// (0x000229fd) setting_code_pane_g1

0x7df6,	// (0x00022b32) setting_code_pane_t1

0x4a2f,	// (0x0001f76b) set_text_pane_t1_ParamLimits

0x4a2f,	// (0x0001f76b) set_text_pane_t1

0x8672,	// (0x000233ae) set_opt_bg_pane_g1

0x867a,	// (0x000233b6) set_opt_bg_pane_g2

0xae8e,	// (0x00025bca) set_opt_bg_pane_g3

0x868a,	// (0x000233c6) set_opt_bg_pane_g4

0x8692,	// (0x000233ce) set_opt_bg_pane_g5

0x869a,	// (0x000233d6) set_opt_bg_pane_g6

0xae98,	// (0x00025bd4) set_opt_bg_pane_g7

0xaea0,	// (0x00025bdc) set_opt_bg_pane_g8

0xaeaa,	// (0x00025be6) set_opt_bg_pane_g9

0x0008,

0xf972,	// (0x0002a6ae) set_opt_bg_pane_g

0xae81,	// (0x00025bbd) slider_set_pane_g1

0x6e0d,	// (0x00021b49) slider_set_pane_g2

0x0006,

0xf963,	// (0x0002a69f) slider_set_pane_g

0x6da9,	// (0x00021ae5) volume_set_pane_g1

0x6db1,	// (0x00021aed) volume_set_pane_g2

0x6db9,	// (0x00021af5) volume_set_pane_g3

0x6dc1,	// (0x00021afd) volume_set_pane_g4

0x6dc9,	// (0x00021b05) volume_set_pane_g5

0x6dd1,	// (0x00021b0d) volume_set_pane_g6

0x6dd9,	// (0x00021b15) volume_set_pane_g7

0x6de1,	// (0x00021b1d) volume_set_pane_g8

0x6de9,	// (0x00021b25) volume_set_pane_g9

0x6df1,	// (0x00021b2d) volume_set_pane_g10

0x0009,

0xf93b,	// (0x0002a677) volume_set_pane_g

0x7e04,	// (0x00022b40) indicator_pane_ParamLimits

0x7e04,	// (0x00022b40) indicator_pane

0x7e10,	// (0x00022b4c) main_idle_pane_g2_ParamLimits

0x7e10,	// (0x00022b4c) main_idle_pane_g2

0x7e38,	// (0x00022b74) main_pane_idle_g1_ParamLimits

0x7e38,	// (0x00022b74) main_pane_idle_g1

0x7e45,	// (0x00022b81) popup_clock_digital_analogue_window_ParamLimits

0x7e45,	// (0x00022b81) popup_clock_digital_analogue_window

0x7e5c,	// (0x00022b98) soft_indicator_pane_ParamLimits

0x7e5c,	// (0x00022b98) soft_indicator_pane

0x7e68,	// (0x00022ba4) wallpaper_pane_ParamLimits

0x7e68,	// (0x00022ba4) wallpaper_pane

0x7cc1,	// (0x000229fd) wallpaper_pane_g1

0x7e7c,	// (0x00022bb8) indicator_pane_g1_ParamLimits

0x7e7c,	// (0x00022bb8) indicator_pane_g1

0xb2d0,	// (0x0002600c) navi_navi_icon_text_pane_srt_g1

0x7e97,	// (0x00022bd3) soft_indicator_pane_t1

0x7eb1,	// (0x00022bed) aid_ps_area_pane

0x7ec2,	// (0x00022bfe) aid_ps_clock_pane

0x7ed0,	// (0x00022c0c) aid_ps_indicator_pane

0x7edc,	// (0x00022c18) indicator_ps_pane_ParamLimits

0x7edc,	// (0x00022c18) indicator_ps_pane

0x7eeb,	// (0x00022c27) power_save_pane_g1_ParamLimits

0x7eeb,	// (0x00022c27) power_save_pane_g1

0x7ef7,	// (0x00022c33) power_save_pane_g2_ParamLimits

0x7ef7,	// (0x00022c33) power_save_pane_g2

0x5b11,	// (0x0002084d) aid_navinavi_width_pane

0x7eb1,	// (0x00022bed) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0002a2ac) power_save_pane_g_ParamLimits

0xf570,	// (0x0002a2ac) power_save_pane_g

0x7f05,	// (0x00022c41) power_save_pane_t1_ParamLimits

0x7f05,	// (0x00022c41) power_save_pane_t1

0x7ec2,	// (0x00022bfe) aid_ps_clock_pane_ParamLimits

0x7ed0,	// (0x00022c0c) aid_ps_indicator_pane_ParamLimits

0x7f17,	// (0x00022c53) power_save_pane_t4_ParamLimits

0x7f17,	// (0x00022c53) power_save_pane_t4

0x0001,

0xf575,	// (0x0002a2b1) power_save_pane_t_ParamLimits

0xf575,	// (0x0002a2b1) power_save_pane_t

0x7f41,	// (0x00022c7d) power_save_t3_ParamLimits

0x7f41,	// (0x00022c7d) power_save_t3

0x7f2c,	// (0x00022c68) power_save_t2_ParamLimits

0x7f2c,	// (0x00022c68) power_save_t2

0x7f56,	// (0x00022c92) indicator_ps_pane_g1

0x7f5f,	// (0x00022c9b) ai_gene_pane_ParamLimits

0x7f5f,	// (0x00022c9b) ai_gene_pane

0x7f6b,	// (0x00022ca7) ai_links_pane_ParamLimits

0x7f6b,	// (0x00022ca7) ai_links_pane

0x7f77,	// (0x00022cb3) indicator_pane_cp1_ParamLimits

0x7f77,	// (0x00022cb3) indicator_pane_cp1

0x7f83,	// (0x00022cbf) main_pane_idle_g1_cp_ParamLimits

0x7f83,	// (0x00022cbf) main_pane_idle_g1_cp

0x7f8f,	// (0x00022ccb) popup_ai_links_title_window

0x7f98,	// (0x00022cd4) soft_indicator_pane_cp1_ParamLimits

0x7f98,	// (0x00022cd4) soft_indicator_pane_cp1

0xac5a,	// (0x00025996) ai_links_pane_g1

0xac63,	// (0x0002599f) grid_ai_links_pane

0xac3d,	// (0x00025979) ai_gene_pane_1

0xac48,	// (0x00025984) ai_gene_pane_2

0xac51,	// (0x0002598d) list_highlight_pane_cp4

0xac21,	// (0x0002595d) cell_ai_link_pane_ParamLimits

0xac21,	// (0x0002595d) cell_ai_link_pane

0xac19,	// (0x00025955) cell_ai_link_pane_g1

0x81c8,	// (0x00022f04) cell_ai_link_pane_g2

0x0001,

0xf916,	// (0x0002a652) cell_ai_link_pane_g

0x7ccb,	// (0x00022a07) grid_highlight_cp2

0x7ccb,	// (0x00022a07) bg_popup_sub_pane_cp1

0x7fb2,	// (0x00022cee) popup_ai_links_title_window_t1

0xab67,	// (0x000258a3) ai_gene_pane_1_g1_ParamLimits

0xab67,	// (0x000258a3) ai_gene_pane_1_g1

0xab73,	// (0x000258af) ai_gene_pane_1_g2_ParamLimits

0xab73,	// (0x000258af) ai_gene_pane_1_g2

0x0001,

0xf90c,	// (0x0002a648) ai_gene_pane_1_g_ParamLimits

0xf90c,	// (0x0002a648) ai_gene_pane_1_g

0xab80,	// (0x000258bc) ai_gene_pane_1_t1_ParamLimits

0xab80,	// (0x000258bc) ai_gene_pane_1_t1

0xabb4,	// (0x000258f0) grid_ai_soft_ind_pane

0xab52,	// (0x0002588e) ai_gene_pane_2_t1_ParamLimits

0xab52,	// (0x0002588e) ai_gene_pane_2_t1

0x7fc1,	// (0x00022cfd) main_pane_empty_t1_ParamLimits

0x7fc1,	// (0x00022cfd) main_pane_empty_t1

0x7fd9,	// (0x00022d15) main_pane_empty_t2_ParamLimits

0x7fd9,	// (0x00022d15) main_pane_empty_t2

0x7fee,	// (0x00022d2a) main_pane_empty_t3_ParamLimits

0x7fee,	// (0x00022d2a) main_pane_empty_t3

0x8000,	// (0x00022d3c) main_pane_empty_t4_ParamLimits

0x8000,	// (0x00022d3c) main_pane_empty_t4

0x8012,	// (0x00022d4e) main_pane_empty_t5_ParamLimits

0x8012,	// (0x00022d4e) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0002a2b6) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0002a2b6) main_pane_empty_t

0x86c3,	// (0x000233ff) bg_popup_window_pane_ParamLimits

0x86c3,	// (0x000233ff) bg_popup_window_pane

0xa8c2,	// (0x000255fe) find_popup_pane_cp2_ParamLimits

0xa8c2,	// (0x000255fe) find_popup_pane_cp2

0xa8ce,	// (0x0002560a) heading_pane_ParamLimits

0xa8ce,	// (0x0002560a) heading_pane

0x7ccb,	// (0x00022a07) bg_popup_sub_pane

0xa83c,	// (0x00025578) bg_popup_window_pane_g1_ParamLimits

0xa83c,	// (0x00025578) bg_popup_window_pane_g1

0xa848,	// (0x00025584) bg_popup_window_pane_g2_ParamLimits

0xa848,	// (0x00025584) bg_popup_window_pane_g2

0xa854,	// (0x00025590) bg_popup_window_pane_g3_ParamLimits

0xa854,	// (0x00025590) bg_popup_window_pane_g3

0xa860,	// (0x0002559c) bg_popup_window_pane_g4_ParamLimits

0xa860,	// (0x0002559c) bg_popup_window_pane_g4

0xa86c,	// (0x000255a8) bg_popup_window_pane_g5_ParamLimits

0xa86c,	// (0x000255a8) bg_popup_window_pane_g5

0xa878,	// (0x000255b4) bg_popup_window_pane_g6_ParamLimits

0xa878,	// (0x000255b4) bg_popup_window_pane_g6

0xa884,	// (0x000255c0) bg_popup_window_pane_g7_ParamLimits

0xa884,	// (0x000255c0) bg_popup_window_pane_g7

0xa890,	// (0x000255cc) bg_popup_window_pane_g8_ParamLimits

0xa890,	// (0x000255cc) bg_popup_window_pane_g8

0xa89c,	// (0x000255d8) bg_popup_window_pane_g9_ParamLimits

0xa89c,	// (0x000255d8) bg_popup_window_pane_g9

0xa8a8,	// (0x000255e4) bg_popup_window_pane_g10_ParamLimits

0xa8a8,	// (0x000255e4) bg_popup_window_pane_g10

0x0009,

0xf8d4,	// (0x0002a610) bg_popup_window_pane_g_ParamLimits

0xf8d4,	// (0x0002a610) bg_popup_window_pane_g

0xa7d1,	// (0x0002550d) bg_popup_heading_pane_ParamLimits

0xa7d1,	// (0x0002550d) bg_popup_heading_pane

0x6e53,	// (0x00021b8f) tabs_4_passive_pane_cp_srt_ParamLimits

0x6e53,	// (0x00021b8f) tabs_4_passive_pane_cp_srt

0x6e65,	// (0x00021ba1) tabs_4_passive_pane_srt_ParamLimits

0xa7e5,	// (0x00025521) heading_pane_g2

0x6e65,	// (0x00021ba1) tabs_4_passive_pane_srt

0x95e0,	// (0x0002431c) bg_passive_tab_pane_cp3_srt_ParamLimits

0x95e0,	// (0x0002431c) bg_passive_tab_pane_cp3_srt

0xa7ed,	// (0x00025529) heading_pane_t1_ParamLimits

0xa7ed,	// (0x00025529) heading_pane_t1

0xa804,	// (0x00025540) heading_pane_t2_ParamLimits

0xa804,	// (0x00025540) heading_pane_t2

0x0001,

0xf8cf,	// (0x0002a60b) heading_pane_t_ParamLimits

0xf8cf,	// (0x0002a60b) heading_pane_t

0xa2fe,	// (0x0002503a) bg_popup_heading_pane_g1

0xa3ad,	// (0x000250e9) bg_popup_heading_pane_g2

0xa3b7,	// (0x000250f3) bg_popup_heading_pane_g3

0xa3c1,	// (0x000250fd) bg_popup_heading_pane_g4

0xa3cb,	// (0x00025107) bg_popup_heading_pane_g5

0xa3d5,	// (0x00025111) bg_popup_heading_pane_g6

0xa3dd,	// (0x00025119) bg_popup_heading_pane_g7

0xa3e5,	// (0x00025121) bg_popup_heading_pane_g8

0xa3ef,	// (0x0002512b) bg_popup_heading_pane_g9

0x0008,

0xf88b,	// (0x0002a5c7) bg_popup_heading_pane_g

0x9ad8,	// (0x00024814) bg_popup_sub_pane_g1

0x9ae0,	// (0x0002481c) bg_popup_sub_pane_g2

0x9ae8,	// (0x00024824) bg_popup_sub_pane_g3

0x9af0,	// (0x0002482c) bg_popup_sub_pane_g4

0x9af8,	// (0x00024834) bg_popup_sub_pane_g5

0x9b00,	// (0x0002483c) bg_popup_sub_pane_g6

0x9b08,	// (0x00024844) bg_popup_sub_pane_g7

0x9b10,	// (0x0002484c) bg_popup_sub_pane_g8

0x9b18,	// (0x00024854) bg_popup_sub_pane_g9

0x0008,

0xf865,	// (0x0002a5a1) bg_popup_sub_pane_g

0x8026,	// (0x00022d62) bg_popup_window_pane_cp5_ParamLimits

0x8026,	// (0x00022d62) bg_popup_window_pane_cp5

0x8042,	// (0x00022d7e) popup_note_window_g1_ParamLimits

0x8042,	// (0x00022d7e) popup_note_window_g1

0x804e,	// (0x00022d8a) popup_note_window_t1_ParamLimits

0x804e,	// (0x00022d8a) popup_note_window_t1

0x8064,	// (0x00022da0) popup_note_window_t2_ParamLimits

0x8064,	// (0x00022da0) popup_note_window_t2

0x807a,	// (0x00022db6) popup_note_window_t3_ParamLimits

0x807a,	// (0x00022db6) popup_note_window_t3

0x8090,	// (0x00022dcc) popup_note_window_t4_ParamLimits

0x8090,	// (0x00022dcc) popup_note_window_t4

0x80b8,	// (0x00022df4) popup_note_window_t5_ParamLimits

0x80b8,	// (0x00022df4) popup_note_window_t5

0x0004,

0xf585,	// (0x0002a2c1) popup_note_window_t_ParamLimits

0xf585,	// (0x0002a2c1) popup_note_window_t

0x80dc,	// (0x00022e18) bg_popup_window_pane_cp6_ParamLimits

0x80dc,	// (0x00022e18) bg_popup_window_pane_cp6

0xa27a,	// (0x00024fb6) popup_note_image_window_g1_ParamLimits

0xa27a,	// (0x00024fb6) popup_note_image_window_g1

0xa286,	// (0x00024fc2) popup_note_image_window_g2_ParamLimits

0xa286,	// (0x00024fc2) popup_note_image_window_g2

0x0001,

0xf859,	// (0x0002a595) popup_note_image_window_g_ParamLimits

0xf859,	// (0x0002a595) popup_note_image_window_g

0xa29f,	// (0x00024fdb) popup_note_image_window_t1_ParamLimits

0xa29f,	// (0x00024fdb) popup_note_image_window_t1

0xa2b8,	// (0x00024ff4) popup_note_image_window_t2_ParamLimits

0xa2b8,	// (0x00024ff4) popup_note_image_window_t2

0xa2d1,	// (0x0002500d) popup_note_image_window_t3_ParamLimits

0xa2d1,	// (0x0002500d) popup_note_image_window_t3

0x0002,

0xf85e,	// (0x0002a59a) popup_note_image_window_t_ParamLimits

0xf85e,	// (0x0002a59a) popup_note_image_window_t

0xa13b,	// (0x00024e77) bg_popup_window_pane_cp7_ParamLimits

0xa13b,	// (0x00024e77) bg_popup_window_pane_cp7

0xa16b,	// (0x00024ea7) popup_note_wait_window_g1_ParamLimits

0xa16b,	// (0x00024ea7) popup_note_wait_window_g1

0xa177,	// (0x00024eb3) popup_note_wait_window_g2_ParamLimits

0xa177,	// (0x00024eb3) popup_note_wait_window_g2

0x0002,

0xf847,	// (0x0002a583) popup_note_wait_window_g_ParamLimits

0xf847,	// (0x0002a583) popup_note_wait_window_g

0xa18f,	// (0x00024ecb) popup_note_wait_window_t1_ParamLimits

0xa18f,	// (0x00024ecb) popup_note_wait_window_t1

0xa1b6,	// (0x00024ef2) popup_note_wait_window_t2_ParamLimits

0xa1b6,	// (0x00024ef2) popup_note_wait_window_t2

0xa1d3,	// (0x00024f0f) popup_note_wait_window_t3_ParamLimits

0xa1d3,	// (0x00024f0f) popup_note_wait_window_t3

0xa1e6,	// (0x00024f22) popup_note_wait_window_t4_ParamLimits

0xa1e6,	// (0x00024f22) popup_note_wait_window_t4

0x0004,

0xf84e,	// (0x0002a58a) popup_note_wait_window_t_ParamLimits

0xf84e,	// (0x0002a58a) popup_note_wait_window_t

0xa20b,	// (0x00024f47) wait_bar_pane_ParamLimits

0xa20b,	// (0x00024f47) wait_bar_pane

0x7ccb,	// (0x00022a07) wait_anim_pane

0x7ccb,	// (0x00022a07) wait_border_pane

0x7cc1,	// (0x000229fd) wait_anim_pane_g1

0x7cc1,	// (0x000229fd) wait_anim_pane_g2

0x0001,

0xf709,	// (0x0002a445) wait_anim_pane_g

0xa0df,	// (0x00024e1b) wait_border_pane_g1

0xa0ea,	// (0x00024e26) wait_border_pane_g2

0xa0f3,	// (0x00024e2f) wait_border_pane_g3

0x0002,

0xf840,	// (0x0002a57c) wait_border_pane_g

0x9f3e,	// (0x00024c7a) bg_popup_window_pane_cp16_ParamLimits

0x9f3e,	// (0x00024c7a) bg_popup_window_pane_cp16

0xa04a,	// (0x00024d86) indicator_popup_pane_cp4_ParamLimits

0xa04a,	// (0x00024d86) indicator_popup_pane_cp4

0xa05e,	// (0x00024d9a) popup_query_data_window_t1_ParamLimits

0xa05e,	// (0x00024d9a) popup_query_data_window_t1

0xa070,	// (0x00024dac) popup_query_data_window_t2_ParamLimits

0xa070,	// (0x00024dac) popup_query_data_window_t2

0xa089,	// (0x00024dc5) popup_query_data_window_t3_ParamLimits

0xa089,	// (0x00024dc5) popup_query_data_window_t3

0x0002,

0xf839,	// (0x0002a575) popup_query_data_window_t_ParamLimits

0xf839,	// (0x0002a575) popup_query_data_window_t

0xa0a3,	// (0x00024ddf) query_popup_data_pane_ParamLimits

0xa0a3,	// (0x00024ddf) query_popup_data_pane

0xa0b7,	// (0x00024df3) query_popup_data_pane_cp1_ParamLimits

0xa0b7,	// (0x00024df3) query_popup_data_pane_cp1

0x9f3e,	// (0x00024c7a) bg_popup_window_pane_cp10_ParamLimits

0x9f3e,	// (0x00024c7a) bg_popup_window_pane_cp10

0x9f70,	// (0x00024cac) indicator_popup_pane_ParamLimits

0x9f70,	// (0x00024cac) indicator_popup_pane

0x9f92,	// (0x00024cce) popup_query_code_window_t1_ParamLimits

0x9f92,	// (0x00024cce) popup_query_code_window_t1

0x9fac,	// (0x00024ce8) popup_query_code_window_t2_ParamLimits

0x9fac,	// (0x00024ce8) popup_query_code_window_t2

0xa001,	// (0x00024d3d) popup_query_code_window_t3_ParamLimits

0xa001,	// (0x00024d3d) popup_query_code_window_t3

0x0002,

0xf832,	// (0x0002a56e) popup_query_code_window_t_ParamLimits

0xf832,	// (0x0002a56e) popup_query_code_window_t

0xa030,	// (0x00024d6c) query_popup_pane_ParamLimits

0xa030,	// (0x00024d6c) query_popup_pane

0x80dc,	// (0x00022e18) bg_popup_window_pane_cp15_ParamLimits

0x80dc,	// (0x00022e18) bg_popup_window_pane_cp15

0x80fa,	// (0x00022e36) indicator_popup_pane_cp1_ParamLimits

0x80fa,	// (0x00022e36) indicator_popup_pane_cp1

0x810d,	// (0x00022e49) indicator_popup_pane_cp2_ParamLimits

0x810d,	// (0x00022e49) indicator_popup_pane_cp2

0x8120,	// (0x00022e5c) popup_query_data_code_window_g1_ParamLimits

0x8120,	// (0x00022e5c) popup_query_data_code_window_g1

0x8133,	// (0x00022e6f) popup_query_data_code_window_t1_ParamLimits

0x8133,	// (0x00022e6f) popup_query_data_code_window_t1

0x8145,	// (0x00022e81) popup_query_data_code_window_t2_ParamLimits

0x8145,	// (0x00022e81) popup_query_data_code_window_t2

0x8157,	// (0x00022e93) popup_query_data_code_window_t3_ParamLimits

0x8157,	// (0x00022e93) popup_query_data_code_window_t3

0x816d,	// (0x00022ea9) popup_query_data_code_window_t4_ParamLimits

0x816d,	// (0x00022ea9) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0002a2cc) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0002a2cc) popup_query_data_code_window_t

0x6b62,	// (0x0002189e) list_single_midp_graphic_pane_g3

0x8185,	// (0x00022ec1) query_popup_data_pane_cp2_ParamLimits

0x8198,	// (0x00022ed4) query_popup_pane_cp2_ParamLimits

0x8198,	// (0x00022ed4) query_popup_pane_cp2

0x7ccb,	// (0x00022a07) bg_popup_window_pane_cp11

0x9f36,	// (0x00024c72) heading_pane_cp5

0x8280,	// (0x00022fbc) listscroll_popup_info_pane

0x7ccb,	// (0x00022a07) input_focus_pane_cp3

0x81ab,	// (0x00022ee7) query_popup_pane_t1

0x81b9,	// (0x00022ef5) list_popup_info_pane_ParamLimits

0x81b9,	// (0x00022ef5) list_popup_info_pane

0x81c8,	// (0x00022f04) listscroll_popup_info_pane_g1

0x81d0,	// (0x00022f0c) scroll_pane_cp7

0x81da,	// (0x00022f16) popup_info_list_pane_t1_ParamLimits

0x81da,	// (0x00022f16) popup_info_list_pane_t1

0x81f4,	// (0x00022f30) popup_info_list_pane_t2_ParamLimits

0x81f4,	// (0x00022f30) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0002a2d5) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0002a2d5) popup_info_list_pane_t

0x7ccb,	// (0x00022a07) bg_popup_window_pane_cp12

0xb2ea,	// (0x00026026) find_popup_pane

0x7dab,	// (0x00022ae7) bg_popup_window_pane_cp3

0x820e,	// (0x00022f4a) heading_pane_cp3

0x821a,	// (0x00022f56) listscroll_popup_graphic_pane

0x7ccb,	// (0x00022a07) bg_popup_window_pane_cp4

0x8276,	// (0x00022fb2) heading_pane_cp4

0x8280,	// (0x00022fbc) listscroll_popup_colour_pane

0x8288,	// (0x00022fc4) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x8288,	// (0x00022fc4) cell_large_graphic_colour_none_popup_pane

0x829c,	// (0x00022fd8) grid_large_graphic_colour_popup_pane_ParamLimits

0x829c,	// (0x00022fd8) grid_large_graphic_colour_popup_pane

0x82c8,	// (0x00023004) listscroll_popup_colour_pane_g1_ParamLimits

0x82c8,	// (0x00023004) listscroll_popup_colour_pane_g1

0x82df,	// (0x0002301b) listscroll_popup_colour_pane_g2_ParamLimits

0x82df,	// (0x0002301b) listscroll_popup_colour_pane_g2

0x82f6,	// (0x00023032) listscroll_popup_colour_pane_g3_ParamLimits

0x82f6,	// (0x00023032) listscroll_popup_colour_pane_g3

0x8306,	// (0x00023042) listscroll_popup_colour_pane_g4_ParamLimits

0x8306,	// (0x00023042) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0002a2da) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0002a2da) listscroll_popup_colour_pane_g

0x831a,	// (0x00023056) scroll_pane_cp6_ParamLimits

0x831a,	// (0x00023056) scroll_pane_cp6

0x832c,	// (0x00023068) cell_large_graphic_colour_popup_pane_ParamLimits

0x832c,	// (0x00023068) cell_large_graphic_colour_popup_pane

0x834b,	// (0x00023087) cell_large_graphic_colour_none_popup_pane_t1

0x7ccb,	// (0x00022a07) grid_highlight_pane_cp5

0x835a,	// (0x00023096) cell_large_graphic_colour_popup_pane_g1

0x8362,	// (0x0002309e) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0002a2e3) cell_large_graphic_colour_popup_pane_g

0x836a,	// (0x000230a6) cell_large_graphic_colour_popup_pane_g2_copy1

0x8373,	// (0x000230af) grid_highlight_pane_cp4

0x837b,	// (0x000230b7) bg_popup_window_pane_cp8_ParamLimits

0x837b,	// (0x000230b7) bg_popup_window_pane_cp8

0x8396,	// (0x000230d2) popup_snote_single_text_window_g1_ParamLimits

0x8396,	// (0x000230d2) popup_snote_single_text_window_g1

0x83a8,	// (0x000230e4) popup_snote_single_text_window_t1_ParamLimits

0x83a8,	// (0x000230e4) popup_snote_single_text_window_t1

0x83bb,	// (0x000230f7) popup_snote_single_text_window_t2_ParamLimits

0x83bb,	// (0x000230f7) popup_snote_single_text_window_t2

0x83ce,	// (0x0002310a) popup_snote_single_text_window_t3_ParamLimits

0x83ce,	// (0x0002310a) popup_snote_single_text_window_t3

0x8407,	// (0x00023143) popup_snote_single_text_window_t4_ParamLimits

0x8407,	// (0x00023143) popup_snote_single_text_window_t4

0x843b,	// (0x00023177) popup_snote_single_text_window_t5_ParamLimits

0x843b,	// (0x00023177) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0002a2e8) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0002a2e8) popup_snote_single_text_window_t

0x846a,	// (0x000231a6) bg_popup_window_pane_cp9_ParamLimits

0x846a,	// (0x000231a6) bg_popup_window_pane_cp9

0x8396,	// (0x000230d2) popup_snote_single_graphic_window_g1_ParamLimits

0x8396,	// (0x000230d2) popup_snote_single_graphic_window_g1

0x8478,	// (0x000231b4) popup_snote_single_graphic_window_g2_ParamLimits

0x8478,	// (0x000231b4) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0002a2f3) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0002a2f3) popup_snote_single_graphic_window_g

0x8484,	// (0x000231c0) popup_snote_single_graphic_window_t1_ParamLimits

0x8484,	// (0x000231c0) popup_snote_single_graphic_window_t1

0x8497,	// (0x000231d3) popup_snote_single_graphic_window_t2_ParamLimits

0x8497,	// (0x000231d3) popup_snote_single_graphic_window_t2

0x84aa,	// (0x000231e6) popup_snote_single_graphic_window_t3_ParamLimits

0x84aa,	// (0x000231e6) popup_snote_single_graphic_window_t3

0x84e3,	// (0x0002321f) popup_snote_single_graphic_window_t4_ParamLimits

0x84e3,	// (0x0002321f) popup_snote_single_graphic_window_t4

0x8517,	// (0x00023253) popup_snote_single_graphic_window_t5_ParamLimits

0x8517,	// (0x00023253) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0002a2f8) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0002a2f8) popup_snote_single_graphic_window_t

0xb22e,	// (0x00025f6a) grid_graphic_popup_pane_ParamLimits

0xb22e,	// (0x00025f6a) grid_graphic_popup_pane

0xb256,	// (0x00025f92) listscroll_popup_graphic_pane_g1_ParamLimits

0xb256,	// (0x00025f92) listscroll_popup_graphic_pane_g1

0xb26a,	// (0x00025fa6) listscroll_popup_graphic_pane_g2_ParamLimits

0xb26a,	// (0x00025fa6) listscroll_popup_graphic_pane_g2

0x0001,

0xf9af,	// (0x0002a6eb) listscroll_popup_graphic_pane_g_ParamLimits

0xf9af,	// (0x0002a6eb) listscroll_popup_graphic_pane_g

0xb27e,	// (0x00025fba) scroll_pane_cp5

0xb1d7,	// (0x00025f13) cell_graphic_popup_pane_ParamLimits

0xb1d7,	// (0x00025f13) cell_graphic_popup_pane

0xb1b8,	// (0x00025ef4) cell_graphic_popup_pane_g1

0xb1c0,	// (0x00025efc) cell_graphic_popup_pane_g2

0x836a,	// (0x000230a6) cell_graphic_popup_pane_g3

0x0002,

0xf9a8,	// (0x0002a6e4) cell_graphic_popup_pane_g

0xb1c9,	// (0x00025f05) cell_graphic_popup_pane_t2

0x8373,	// (0x000230af) grid_highlight_pane_cp3

0x8558,	// (0x00023294) list_gen_pane_ParamLimits

0x8558,	// (0x00023294) list_gen_pane

0x858a,	// (0x000232c6) scroll_pane

0xb110,	// (0x00025e4c) bg_list_pane_g1_ParamLimits

0xb110,	// (0x00025e4c) bg_list_pane_g1

0xb12d,	// (0x00025e69) bg_list_pane_g2_ParamLimits

0xb12d,	// (0x00025e69) bg_list_pane_g2

0xb142,	// (0x00025e7e) bg_list_pane_g3_ParamLimits

0xb142,	// (0x00025e7e) bg_list_pane_g3

0xb156,	// (0x00025e92) bg_list_pane_g4_ParamLimits

0xb156,	// (0x00025e92) bg_list_pane_g4

0xb16a,	// (0x00025ea6) bg_list_pane_g5_ParamLimits

0xb16a,	// (0x00025ea6) bg_list_pane_g5

0x0004,

0xf99d,	// (0x0002a6d9) bg_list_pane_g_ParamLimits

0xf99d,	// (0x0002a6d9) bg_list_pane_g

0x53db,	// (0x00020117) list_double2_graphic_large_graphic_pane_ParamLimits

0x53db,	// (0x00020117) list_double2_graphic_large_graphic_pane

0x53db,	// (0x00020117) list_double2_graphic_pane_ParamLimits

0x53db,	// (0x00020117) list_double2_graphic_pane

0x53db,	// (0x00020117) list_double2_large_graphic_pane_ParamLimits

0x53db,	// (0x00020117) list_double2_large_graphic_pane

0x53db,	// (0x00020117) list_double2_pane_ParamLimits

0x53db,	// (0x00020117) list_double2_pane

0x53db,	// (0x00020117) list_double_graphic_heading_pane_ParamLimits

0x53db,	// (0x00020117) list_double_graphic_heading_pane

0x53db,	// (0x00020117) list_double_graphic_pane_ParamLimits

0x53db,	// (0x00020117) list_double_graphic_pane

0x53db,	// (0x00020117) list_double_heading_pane_ParamLimits

0x53db,	// (0x00020117) list_double_heading_pane

0x53db,	// (0x00020117) list_double_large_graphic_pane_ParamLimits

0x53db,	// (0x00020117) list_double_large_graphic_pane

0x53db,	// (0x00020117) list_double_number_pane_ParamLimits

0x53db,	// (0x00020117) list_double_number_pane

0x53db,	// (0x00020117) list_double_pane_ParamLimits

0x53db,	// (0x00020117) list_double_pane

0x53db,	// (0x00020117) list_double_time_pane_ParamLimits

0x53db,	// (0x00020117) list_double_time_pane

0x53db,	// (0x00020117) list_setting_number_pane_ParamLimits

0x53db,	// (0x00020117) list_setting_number_pane

0x53db,	// (0x00020117) list_setting_pane_ParamLimits

0x53db,	// (0x00020117) list_setting_pane

0x5416,	// (0x00020152) list_single_2graphic_pane_ParamLimits

0x5416,	// (0x00020152) list_single_2graphic_pane

0x5416,	// (0x00020152) list_single_graphic_heading_pane_ParamLimits

0x5416,	// (0x00020152) list_single_graphic_heading_pane

0x5416,	// (0x00020152) list_single_graphic_pane_ParamLimits

0x5416,	// (0x00020152) list_single_graphic_pane

0x5416,	// (0x00020152) list_single_heading_pane_ParamLimits

0x5416,	// (0x00020152) list_single_heading_pane

0x5456,	// (0x00020192) list_single_large_graphic_pane_ParamLimits

0x5456,	// (0x00020192) list_single_large_graphic_pane

0x5416,	// (0x00020152) list_single_number_heading_pane_ParamLimits

0x5416,	// (0x00020152) list_single_number_heading_pane

0x5416,	// (0x00020152) list_single_number_pane_ParamLimits

0x5416,	// (0x00020152) list_single_number_pane

0x5416,	// (0x00020152) list_single_pane_ParamLimits

0x5416,	// (0x00020152) list_single_pane

0x7ccb,	// (0x00022a07) list_highlight_pane_cp1

0x4a56,	// (0x0001f792) list_single_pane_g1_ParamLimits

0x4a56,	// (0x0001f792) list_single_pane_g1

0x4a62,	// (0x0001f79e) list_single_pane_g2_ParamLimits

0x4a62,	// (0x0001f79e) list_single_pane_g2

0x0001,

0xf5ce,	// (0x0002a30a) list_single_pane_g_ParamLimits

0xf5ce,	// (0x0002a30a) list_single_pane_g

0x53c5,	// (0x00020101) list_single_pane_t1_ParamLimits

0x53c5,	// (0x00020101) list_single_pane_t1

0x4a56,	// (0x0001f792) list_single_number_pane_g1_ParamLimits

0x4a56,	// (0x0001f792) list_single_number_pane_g1

0x4a62,	// (0x0001f79e) list_single_number_pane_g2_ParamLimits

0x4a62,	// (0x0001f79e) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x0002a30a) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x0002a30a) list_single_number_pane_g

0x536f,	// (0x000200ab) list_single_number_pane_t1_ParamLimits

0x536f,	// (0x000200ab) list_single_number_pane_t1

0x5385,	// (0x000200c1) list_single_number_pane_t2_ParamLimits

0x5385,	// (0x000200c1) list_single_number_pane_t2

0x0001,

0xf95e,	// (0x0002a69a) list_single_number_pane_t_ParamLimits

0xf95e,	// (0x0002a69a) list_single_number_pane_t

0x4a4a,	// (0x0001f786) list_single_graphic_pane_g1_ParamLimits

0x4a4a,	// (0x0001f786) list_single_graphic_pane_g1

0x4a56,	// (0x0001f792) list_single_graphic_pane_g2_ParamLimits

0x4a56,	// (0x0001f792) list_single_graphic_pane_g2

0x4a62,	// (0x0001f79e) list_single_graphic_pane_g3_ParamLimits

0x4a62,	// (0x0001f79e) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0002a303) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0002a303) list_single_graphic_pane_g

0x4a6e,	// (0x0001f7aa) list_single_graphic_pane_t1_ParamLimits

0x4a6e,	// (0x0001f7aa) list_single_graphic_pane_t1

0x4a56,	// (0x0001f792) list_single_heading_pane_g1_ParamLimits

0x4a56,	// (0x0001f792) list_single_heading_pane_g1

0x4a62,	// (0x0001f79e) list_single_heading_pane_g2_ParamLimits

0x4a62,	// (0x0001f79e) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0002a30a) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0002a30a) list_single_heading_pane_g

0x4a84,	// (0x0001f7c0) list_single_heading_pane_t1_ParamLimits

0x4a84,	// (0x0001f7c0) list_single_heading_pane_t1

0x4a9a,	// (0x0001f7d6) list_single_heading_pane_t2_ParamLimits

0x4a9a,	// (0x0001f7d6) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0002a30f) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0002a30f) list_single_heading_pane_t

0x4a56,	// (0x0001f792) list_single_number_heading_pane_g1_ParamLimits

0x4a56,	// (0x0001f792) list_single_number_heading_pane_g1

0x4a62,	// (0x0001f79e) list_single_number_heading_pane_g2_ParamLimits

0x4a62,	// (0x0001f79e) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x0002a30a) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x0002a30a) list_single_number_heading_pane_g

0x4a84,	// (0x0001f7c0) list_single_number_heading_pane_t1_ParamLimits

0x4a84,	// (0x0001f7c0) list_single_number_heading_pane_t1

0x4aac,	// (0x0001f7e8) list_single_number_heading_pane_t2_ParamLimits

0x4aac,	// (0x0001f7e8) list_single_number_heading_pane_t2

0x4abe,	// (0x0001f7fa) list_single_number_heading_pane_t3_ParamLimits

0x4abe,	// (0x0001f7fa) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x0002a314) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x0002a314) list_single_number_heading_pane_t

0x4ad0,	// (0x0001f80c) list_single_graphic_heading_pane_g1_ParamLimits

0x4ad0,	// (0x0001f80c) list_single_graphic_heading_pane_g1

0x4adc,	// (0x0001f818) list_single_graphic_heading_pane_g4_ParamLimits

0x4adc,	// (0x0001f818) list_single_graphic_heading_pane_g4

0x4a62,	// (0x0001f79e) list_single_graphic_heading_pane_g5_ParamLimits

0x4a62,	// (0x0001f79e) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x0002a31b) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x0002a31b) list_single_graphic_heading_pane_g

0x4a84,	// (0x0001f7c0) list_single_graphic_heading_pane_t1_ParamLimits

0x4a84,	// (0x0001f7c0) list_single_graphic_heading_pane_t1

0x4aed,	// (0x0001f829) list_single_graphic_heading_pane_t2_ParamLimits

0x4aed,	// (0x0001f829) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x0002a322) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x0002a322) list_single_graphic_heading_pane_t

0x4aff,	// (0x0001f83b) list_single_large_graphic_pane_g1_ParamLimits

0x4aff,	// (0x0001f83b) list_single_large_graphic_pane_g1

0x4b0b,	// (0x0001f847) list_single_large_graphic_pane_g2_ParamLimits

0x4b0b,	// (0x0001f847) list_single_large_graphic_pane_g2

0x4b17,	// (0x0001f853) list_single_large_graphic_pane_g3_ParamLimits

0x4b17,	// (0x0001f853) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x0002a327) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x0002a327) list_single_large_graphic_pane_g

0xa0ea,	// (0x00024e26) wait_border_pane_g2_copy1

0x4b23,	// (0x0001f85f) list_single_large_graphic_pane_g4_cp2

0x4b2b,	// (0x0001f867) list_single_large_graphic_pane_t1_ParamLimits

0x4b2b,	// (0x0001f867) list_single_large_graphic_pane_t1

0x4b41,	// (0x0001f87d) list_double_pane_g1_ParamLimits

0x4b41,	// (0x0001f87d) list_double_pane_g1

0x4b4d,	// (0x0001f889) list_double_pane_g2_ParamLimits

0x4b4d,	// (0x0001f889) list_double_pane_g2

0x0001,

0xf5f2,	// (0x0002a32e) list_double_pane_g_ParamLimits

0xf5f2,	// (0x0002a32e) list_double_pane_g

0x4b59,	// (0x0001f895) list_double_pane_t1_ParamLimits

0x4b59,	// (0x0001f895) list_double_pane_t1

0x4b6f,	// (0x0001f8ab) list_double_pane_t2_ParamLimits

0x4b6f,	// (0x0001f8ab) list_double_pane_t2

0x0001,

0xf5f7,	// (0x0002a333) list_double_pane_t_ParamLimits

0xf5f7,	// (0x0002a333) list_double_pane_t

0x4b81,	// (0x0001f8bd) list_double2_pane_g1_ParamLimits

0x4b81,	// (0x0001f8bd) list_double2_pane_g1

0x4b92,	// (0x0001f8ce) list_double2_pane_g2_ParamLimits

0x4b92,	// (0x0001f8ce) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x0002a338) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x0002a338) list_double2_pane_g

0x4b9e,	// (0x0001f8da) list_double2_pane_t1_ParamLimits

0x4b9e,	// (0x0001f8da) list_double2_pane_t1

0x4bb4,	// (0x0001f8f0) list_double2_pane_t2_ParamLimits

0x4bb4,	// (0x0001f8f0) list_double2_pane_t2

0x0001,

0xf601,	// (0x0002a33d) list_double2_pane_t_ParamLimits

0xf601,	// (0x0002a33d) list_double2_pane_t

0x4b41,	// (0x0001f87d) list_double_number_pane_g1_ParamLimits

0x4b41,	// (0x0001f87d) list_double_number_pane_g1

0x4b4d,	// (0x0001f889) list_double_number_pane_g2_ParamLimits

0x4b4d,	// (0x0001f889) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x0002a32e) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x0002a32e) list_double_number_pane_g

0x4bc6,	// (0x0001f902) list_double_number_pane_t1_ParamLimits

0x4bc6,	// (0x0001f902) list_double_number_pane_t1

0x4bd8,	// (0x0001f914) list_double_number_pane_t2_ParamLimits

0x4bd8,	// (0x0001f914) list_double_number_pane_t2

0x4bee,	// (0x0001f92a) list_double_number_pane_t3_ParamLimits

0x4bee,	// (0x0001f92a) list_double_number_pane_t3

0x0002,

0xf606,	// (0x0002a342) list_double_number_pane_t_ParamLimits

0xf606,	// (0x0002a342) list_double_number_pane_t

0x4c00,	// (0x0001f93c) list_double_graphic_pane_g1_ParamLimits

0x4c00,	// (0x0001f93c) list_double_graphic_pane_g1

0x4c0c,	// (0x0001f948) list_double_graphic_pane_g2_ParamLimits

0x4c0c,	// (0x0001f948) list_double_graphic_pane_g2

0x4c1b,	// (0x0001f957) list_double_graphic_pane_g3_ParamLimits

0x4c1b,	// (0x0001f957) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x0002a349) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x0002a349) list_double_graphic_pane_g

0x4c33,	// (0x0001f96f) list_double_graphic_pane_t1_ParamLimits

0x4c33,	// (0x0001f96f) list_double_graphic_pane_t1

0x4c49,	// (0x0001f985) list_double_graphic_pane_t2_ParamLimits

0x4c49,	// (0x0001f985) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x0002a352) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x0002a352) list_double_graphic_pane_t

0x4c5b,	// (0x0001f997) list_double2_graphic_pane_g1_ParamLimits

0x4c5b,	// (0x0001f997) list_double2_graphic_pane_g1

0x4c67,	// (0x0001f9a3) list_double2_graphic_pane_g2_ParamLimits

0x4c67,	// (0x0001f9a3) list_double2_graphic_pane_g2

0x4b92,	// (0x0001f8ce) list_double2_graphic_pane_g3_ParamLimits

0x4b92,	// (0x0001f8ce) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x0002a357) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x0002a357) list_double2_graphic_pane_g

0x4c73,	// (0x0001f9af) list_double2_graphic_pane_t1_ParamLimits

0x4c73,	// (0x0001f9af) list_double2_graphic_pane_t1

0x4c89,	// (0x0001f9c5) list_double2_graphic_pane_t2_ParamLimits

0x4c89,	// (0x0001f9c5) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x0002a35e) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x0002a35e) list_double2_graphic_pane_t

0x4c9b,	// (0x0001f9d7) list_double_large_graphic_pane_g1_ParamLimits

0x4c9b,	// (0x0001f9d7) list_double_large_graphic_pane_g1

0x4cb8,	// (0x0001f9f4) list_double_large_graphic_pane_g2_ParamLimits

0x4cb8,	// (0x0001f9f4) list_double_large_graphic_pane_g2

0x4b4d,	// (0x0001f889) list_double_large_graphic_pane_g3_ParamLimits

0x4b4d,	// (0x0001f889) list_double_large_graphic_pane_g3

0x4cc9,	// (0x0001fa05) list_double_large_graphic_pane_g4_ParamLimits

0x4cc9,	// (0x0001fa05) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x0002a363) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x0002a363) list_double_large_graphic_pane_g

0x4cf0,	// (0x0001fa2c) list_double_large_graphic_pane_t1_ParamLimits

0x4cf0,	// (0x0001fa2c) list_double_large_graphic_pane_t1

0x4d09,	// (0x0001fa45) list_double_large_graphic_pane_t2_ParamLimits

0x4d09,	// (0x0001fa45) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x0002a36e) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x0002a36e) list_double_large_graphic_pane_t

0x4d1b,	// (0x0001fa57) list_double2_large_graphic_pane_g1_ParamLimits

0x4d1b,	// (0x0001fa57) list_double2_large_graphic_pane_g1

0x4b81,	// (0x0001f8bd) list_double2_large_graphic_pane_g2_ParamLimits

0x4b81,	// (0x0001f8bd) list_double2_large_graphic_pane_g2

0x4b92,	// (0x0001f8ce) list_double2_large_graphic_pane_g3_ParamLimits

0x4b92,	// (0x0001f8ce) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x0002a373) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x0002a373) list_double2_large_graphic_pane_g

0x4d27,	// (0x0001fa63) list_double2_large_graphic_pane_t1_ParamLimits

0x4d27,	// (0x0001fa63) list_double2_large_graphic_pane_t1

0x4d3d,	// (0x0001fa79) list_double2_large_graphic_pane_t2_ParamLimits

0x4d3d,	// (0x0001fa79) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x0002a37a) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x0002a37a) list_double2_large_graphic_pane_t

0x4d4f,	// (0x0001fa8b) list_double_heading_pane_g1_ParamLimits

0x4d4f,	// (0x0001fa8b) list_double_heading_pane_g1

0x4d60,	// (0x0001fa9c) list_double_heading_pane_g2_ParamLimits

0x4d60,	// (0x0001fa9c) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x0002a37f) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x0002a37f) list_double_heading_pane_g

0x4d6c,	// (0x0001faa8) list_double_heading_pane_t1_ParamLimits

0x4d6c,	// (0x0001faa8) list_double_heading_pane_t1

0x4bb4,	// (0x0001f8f0) list_double_heading_pane_t2_ParamLimits

0x4bb4,	// (0x0001f8f0) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x0002a384) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x0002a384) list_double_heading_pane_t

0x4d82,	// (0x0001fabe) list_double_graphic_heading_pane_g1_ParamLimits

0x4d82,	// (0x0001fabe) list_double_graphic_heading_pane_g1

0x4d4f,	// (0x0001fa8b) list_double_graphic_heading_pane_g2_ParamLimits

0x4d4f,	// (0x0001fa8b) list_double_graphic_heading_pane_g2

0x4d60,	// (0x0001fa9c) list_double_graphic_heading_pane_g3_ParamLimits

0x4d60,	// (0x0001fa9c) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x0002a389) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x0002a389) list_double_graphic_heading_pane_g

0x4d8e,	// (0x0001faca) list_double_graphic_heading_pane_t1_ParamLimits

0x4d8e,	// (0x0001faca) list_double_graphic_heading_pane_t1

0x4c89,	// (0x0001f9c5) list_double_graphic_heading_pane_t2_ParamLimits

0x4c89,	// (0x0001f9c5) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x0002a390) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x0002a390) list_double_graphic_heading_pane_t

0x4cb8,	// (0x0001f9f4) list_double_time_pane_g1_ParamLimits

0x4cb8,	// (0x0001f9f4) list_double_time_pane_g1

0x4b4d,	// (0x0001f889) list_double_time_pane_g2_ParamLimits

0x4b4d,	// (0x0001f889) list_double_time_pane_g2

0x0001,

0xf659,	// (0x0002a395) list_double_time_pane_g_ParamLimits

0xf659,	// (0x0002a395) list_double_time_pane_g

0x4da4,	// (0x0001fae0) list_double_time_pane_t1_ParamLimits

0x4da4,	// (0x0001fae0) list_double_time_pane_t1

0x4dba,	// (0x0001faf6) list_double_time_pane_t2_ParamLimits

0x4dba,	// (0x0001faf6) list_double_time_pane_t2

0x4dcc,	// (0x0001fb08) list_double_time_pane_t3_ParamLimits

0x4dcc,	// (0x0001fb08) list_double_time_pane_t3

0x4dde,	// (0x0001fb1a) list_double_time_pane_t4_ParamLimits

0x4dde,	// (0x0001fb1a) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x0002a39a) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x0002a39a) list_double_time_pane_t

0x4c67,	// (0x0001f9a3) list_setting_pane_g1_ParamLimits

0x4c67,	// (0x0001f9a3) list_setting_pane_g1

0x4b92,	// (0x0001f8ce) list_setting_pane_g2_ParamLimits

0x4b92,	// (0x0001f8ce) list_setting_pane_g2

0x0001,

0xf667,	// (0x0002a3a3) list_setting_pane_g_ParamLimits

0xf667,	// (0x0002a3a3) list_setting_pane_g

0x4df0,	// (0x0001fb2c) list_setting_pane_t1_ParamLimits

0x4df0,	// (0x0001fb2c) list_setting_pane_t1

0x4e0a,	// (0x0001fb46) list_setting_pane_t2_ParamLimits

0x4e0a,	// (0x0001fb46) list_setting_pane_t2

0x0002,

0xf66c,	// (0x0002a3a8) list_setting_pane_t_ParamLimits

0xf66c,	// (0x0002a3a8) list_setting_pane_t

0x4e49,	// (0x0001fb85) set_value_pane_cp_ParamLimits

0x4e49,	// (0x0001fb85) set_value_pane_cp

0x4e55,	// (0x0001fb91) list_setting_number_pane_g1_ParamLimits

0x4e55,	// (0x0001fb91) list_setting_number_pane_g1

0x4e61,	// (0x0001fb9d) list_setting_number_pane_g2_ParamLimits

0x4e61,	// (0x0001fb9d) list_setting_number_pane_g2

0x0001,

0xf673,	// (0x0002a3af) list_setting_number_pane_g_ParamLimits

0xf673,	// (0x0002a3af) list_setting_number_pane_g

0x4e6d,	// (0x0001fba9) list_setting_number_pane_t1_ParamLimits

0x4e6d,	// (0x0001fba9) list_setting_number_pane_t1

0x4e86,	// (0x0001fbc2) list_setting_number_pane_t2_ParamLimits

0x4e86,	// (0x0001fbc2) list_setting_number_pane_t2

0x4ea0,	// (0x0001fbdc) list_setting_number_pane_t3_ParamLimits

0x4ea0,	// (0x0001fbdc) list_setting_number_pane_t3

0x0003,

0xf678,	// (0x0002a3b4) list_setting_number_pane_t_ParamLimits

0xf678,	// (0x0002a3b4) list_setting_number_pane_t

0x4e49,	// (0x0001fb85) set_value_pane_ParamLimits

0x4e49,	// (0x0001fb85) set_value_pane

0x85be,	// (0x000232fa) bg_set_opt_pane_ParamLimits

0x85be,	// (0x000232fa) bg_set_opt_pane

0x4ee3,	// (0x0001fc1f) set_value_pane_t1

0x85df,	// (0x0002331b) slider_set_pane_cp3

0x85e8,	// (0x00023324) volume_small_pane_cp

0x85f1,	// (0x0002332d) list_form_gen_pane

0x85fa,	// (0x00023336) scroll_pane_cp8

0x4ef9,	// (0x0001fc35) form_field_data_pane_ParamLimits

0x4ef9,	// (0x0001fc35) form_field_data_pane

0x4f19,	// (0x0001fc55) form_field_data_wide_pane_ParamLimits

0x4f19,	// (0x0001fc55) form_field_data_wide_pane

0x4f3a,	// (0x0001fc76) form_field_popup_pane_ParamLimits

0x4f3a,	// (0x0001fc76) form_field_popup_pane

0x4f5a,	// (0x0001fc96) form_field_popup_wide_pane_ParamLimits

0x4f5a,	// (0x0001fc96) form_field_popup_wide_pane

0x4f77,	// (0x0001fcb3) form_field_slider_pane_ParamLimits

0x4f77,	// (0x0001fcb3) form_field_slider_pane

0x4f8a,	// (0x0001fcc6) form_field_slider_wide_pane_ParamLimits

0x4f8a,	// (0x0001fcc6) form_field_slider_wide_pane

0x860b,	// (0x00023347) data_form_pane

0x4fa7,	// (0x0001fce3) form_field_data_pane_t1

0x8617,	// (0x00023353) input_focus_pane

0x4fbf,	// (0x0001fcfb) data_form_wide_pane

0x4fdc,	// (0x0001fd18) form_field_data_wide_pane_t1

0x8388,	// (0x000230c4) input_focus_pane_cp6

0x4ffe,	// (0x0001fd3a) form_field_popup_pane_t1

0x8617,	// (0x00023353) input_focus_pane_cp7

0x8645,	// (0x00023381) list_form_pane

0x501e,	// (0x0001fd5a) form_field_popup_wide_pane_t1

0x8617,	// (0x00023353) input_focus_pane_cp8

0x8651,	// (0x0002338d) list_form_wide_pane

0x503b,	// (0x0001fd77) form_field_slider_pane_t1_ParamLimits

0x503b,	// (0x0001fd77) form_field_slider_pane_t1

0x5051,	// (0x0001fd8d) form_field_slider_pane_t2_ParamLimits

0x5051,	// (0x0001fd8d) form_field_slider_pane_t2

0x0001,

0xf688,	// (0x0002a3c4) form_field_slider_pane_t_ParamLimits

0xf688,	// (0x0002a3c4) form_field_slider_pane_t

0x8026,	// (0x00022d62) input_focus_pane_cp9_ParamLimits

0x8026,	// (0x00022d62) input_focus_pane_cp9

0x5066,	// (0x0001fda2) slider_cont_pane_ParamLimits

0x5066,	// (0x0001fda2) slider_cont_pane

0x8660,	// (0x0002339c) form_field_slider_wide_pane_t1_ParamLimits

0x8660,	// (0x0002339c) form_field_slider_wide_pane_t1

0x507a,	// (0x0001fdb6) form_field_slider_wide_pane_t2_ParamLimits

0x507a,	// (0x0001fdb6) form_field_slider_wide_pane_t2

0x0001,

0xf68d,	// (0x0002a3c9) form_field_slider_wide_pane_t_ParamLimits

0xf68d,	// (0x0002a3c9) form_field_slider_wide_pane_t

0x8026,	// (0x00022d62) input_focus_pane_cp10_ParamLimits

0x8026,	// (0x00022d62) input_focus_pane_cp10

0x508c,	// (0x0001fdc8) slider_cont_pane_cp1_ParamLimits

0x508c,	// (0x0001fdc8) slider_cont_pane_cp1

0x50a0,	// (0x0001fddc) slider_form_pane_cp

0x8672,	// (0x000233ae) input_focus_pane_g1

0x867a,	// (0x000233b6) input_focus_pane_g2

0x8682,	// (0x000233be) input_focus_pane_g3

0x868a,	// (0x000233c6) input_focus_pane_g4

0x8692,	// (0x000233ce) input_focus_pane_g5

0x869a,	// (0x000233d6) input_focus_pane_g6

0x86a2,	// (0x000233de) input_focus_pane_g7

0x86aa,	// (0x000233e6) input_focus_pane_g8

0x86b2,	// (0x000233ee) input_focus_pane_g9

0x7cc1,	// (0x000229fd) input_focus_pane_g10

0x0009,

0xf692,	// (0x0002a3ce) input_focus_pane_g

0xa0f3,	// (0x00024e2f) wait_border_pane_g3_copy1

0x50a8,	// (0x0001fde4) data_form_pane_t1

0x7cc1,	// (0x000229fd) wait_anim_pane_g1_copy1

0x5397,	// (0x000200d3) data_form_wide_pane_t1

0x50c3,	// (0x0001fdff) list_form_graphic_pane_cp_ParamLimits

0x50c3,	// (0x0001fdff) list_form_graphic_pane_cp

0xb029,	// (0x00025d65) slider_form_pane_g1

0xb032,	// (0x00025d6e) slider_form_pane_g2

0x0006,

0xf98e,	// (0x0002a6ca) slider_form_pane_g

0x50dc,	// (0x0001fe18) list_form_graphic_pane_ParamLimits

0x50dc,	// (0x0001fe18) list_form_graphic_pane

0x50f8,	// (0x0001fe34) list_form_graphic_pane_g1

0x5100,	// (0x0001fe3c) list_form_graphic_pane_t1_ParamLimits

0x5100,	// (0x0001fe3c) list_form_graphic_pane_t1

0x7dab,	// (0x00022ae7) list_highlight_pane_cp5_ParamLimits

0x7dab,	// (0x00022ae7) list_highlight_pane_cp5

0x5115,	// (0x0001fe51) find_pane_g1

0x86ba,	// (0x000233f6) input_find_pane

0x511e,	// (0x0001fe5a) input_find_pane_g1_ParamLimits

0x511e,	// (0x0001fe5a) input_find_pane_g1

0x512a,	// (0x0001fe66) input_find_pane_t1_ParamLimits

0x512a,	// (0x0001fe66) input_find_pane_t1

0x513f,	// (0x0001fe7b) input_find_pane_t2_ParamLimits

0x513f,	// (0x0001fe7b) input_find_pane_t2

0x0001,

0xf6a7,	// (0x0002a3e3) input_find_pane_t_ParamLimits

0xf6a7,	// (0x0002a3e3) input_find_pane_t

0x86c3,	// (0x000233ff) input_focus_pane_cp5_ParamLimits

0x86c3,	// (0x000233ff) input_focus_pane_cp5

0x86dd,	// (0x00023419) bg_popup_window_pane_cp2_ParamLimits

0x86dd,	// (0x00023419) bg_popup_window_pane_cp2

0x86ea,	// (0x00023426) listscroll_menu_pane_ParamLimits

0x86ea,	// (0x00023426) listscroll_menu_pane

0x86f6,	// (0x00023432) popup_submenu_window_ParamLimits

0x86f6,	// (0x00023432) popup_submenu_window

0x8722,	// (0x0002345e) find_popup_pane_g1

0x872a,	// (0x00023466) input_popup_find_pane_cp

0x86c3,	// (0x000233ff) input_focus_pane_cp4_ParamLimits

0x86c3,	// (0x000233ff) input_focus_pane_cp4

0x8740,	// (0x0002347c) input_popup_find_pane_t1_ParamLimits

0x8740,	// (0x0002347c) input_popup_find_pane_t1

0x7ccb,	// (0x00022a07) bg_popup_sub_pane_cp

0x876e,	// (0x000234aa) listscroll_popup_sub_pane

0x8776,	// (0x000234b2) list_submenu_pane_ParamLimits

0x8776,	// (0x000234b2) list_submenu_pane

0x8787,	// (0x000234c3) scroll_pane_cp4

0x878f,	// (0x000234cb) list_single_popup_submenu_pane_ParamLimits

0x878f,	// (0x000234cb) list_single_popup_submenu_pane

0x87a3,	// (0x000234df) list_single_popup_submenu_pane_g1

0x87ab,	// (0x000234e7) list_single_popup_submenu_pane_t1_ParamLimits

0x87ab,	// (0x000234e7) list_single_popup_submenu_pane_t1

0x7dab,	// (0x00022ae7) bg_active_tab_pane_cp1_ParamLimits

0x7dab,	// (0x00022ae7) bg_active_tab_pane_cp1

0x87c0,	// (0x000234fc) tabs_2_active_pane_g1

0x87c8,	// (0x00023504) tabs_2_active_pane_t1

0x7dab,	// (0x00022ae7) bg_passive_tab_pane_cp1_ParamLimits

0x7dab,	// (0x00022ae7) bg_passive_tab_pane_cp1

0x87c0,	// (0x000234fc) tabs_2_passive_pane_g1

0x87c8,	// (0x00023504) tabs_2_passive_pane_t1

0x87da,	// (0x00023516) bg_active_tab_pane_cp4

0x87e8,	// (0x00023524) tabs_2_long_active_pane_t1

0x87fb,	// (0x00023537) bg_passive_tab_pane_cp4

0x6b6a,	// (0x000218a6) list_single_midp_graphic_pane_g4_ParamLimits

0x87da,	// (0x00023516) bg_active_tab_pane_cp5

0x8807,	// (0x00023543) tabs_3_long_active_pane_t1

0x87fb,	// (0x00023537) bg_passive_tab_pane_cp5

0x6b6a,	// (0x000218a6) list_single_midp_graphic_pane_g4

0x7dab,	// (0x00022ae7) bg_popup_window_pane_cp13_ParamLimits

0x7dab,	// (0x00022ae7) bg_popup_window_pane_cp13

0x8822,	// (0x0002355e) listscroll_popup_fast_pane_ParamLimits

0x8822,	// (0x0002355e) listscroll_popup_fast_pane

0x8831,	// (0x0002356d) grid_popup_fast_pane_ParamLimits

0x8831,	// (0x0002356d) grid_popup_fast_pane

0x8843,	// (0x0002357f) scroll_pane_cp9_ParamLimits

0x8843,	// (0x0002357f) scroll_pane_cp9

0xc963,	// (0x0002769f) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc963,	// (0x0002769f) list_single_graphic_hl_pane_t1_cp2

0x8867,	// (0x000235a3) input_focus_pane_cp20_ParamLimits

0x8867,	// (0x000235a3) input_focus_pane_cp20

0x8875,	// (0x000235b1) query_popup_data_pane_t1_ParamLimits

0x8875,	// (0x000235b1) query_popup_data_pane_t1

0x8888,	// (0x000235c4) query_popup_data_pane_t2_ParamLimits

0x8888,	// (0x000235c4) query_popup_data_pane_t2

0x88ce,	// (0x0002360a) query_popup_data_pane_t3_ParamLimits

0x88ce,	// (0x0002360a) query_popup_data_pane_t3

0x890f,	// (0x0002364b) query_popup_data_pane_t4_ParamLimits

0x890f,	// (0x0002364b) query_popup_data_pane_t4

0x894b,	// (0x00023687) query_popup_data_pane_t5_ParamLimits

0x894b,	// (0x00023687) query_popup_data_pane_t5

0x0004,

0xf6ac,	// (0x0002a3e8) query_popup_data_pane_t_ParamLimits

0xf6ac,	// (0x0002a3e8) query_popup_data_pane_t

0x8672,	// (0x000233ae) bg_set_opt_pane_g1

0x867a,	// (0x000233b6) bg_set_opt_pane_g2

0x8682,	// (0x000233be) bg_set_opt_pane_g3

0x868a,	// (0x000233c6) bg_set_opt_pane_g4

0x8692,	// (0x000233ce) bg_set_opt_pane_g5

0x869a,	// (0x000233d6) bg_set_opt_pane_g6

0x86a2,	// (0x000233de) bg_set_opt_pane_g7

0x86aa,	// (0x000233e6) bg_set_opt_pane_g8

0x86b2,	// (0x000233ee) bg_set_opt_pane_g9

0x0008,

0xf6b7,	// (0x0002a3f3) bg_set_opt_pane_g

0x6224,	// (0x00020f60) control_top_pane_stacon_ParamLimits

0x6224,	// (0x00020f60) control_top_pane_stacon

0x6277,	// (0x00020fb3) signal_pane_stacon_ParamLimits

0x6277,	// (0x00020fb3) signal_pane_stacon

0x8f39,	// (0x00023c75) stacon_top_pane_g1_ParamLimits

0x8f39,	// (0x00023c75) stacon_top_pane_g1

0x629c,	// (0x00020fd8) title_pane_stacon_ParamLimits

0x629c,	// (0x00020fd8) title_pane_stacon

0x62c6,	// (0x00021002) uni_indicator_pane_stacon_ParamLimits

0x62c6,	// (0x00021002) uni_indicator_pane_stacon

0x62db,	// (0x00021017) battery_pane_stacon_ParamLimits

0x62db,	// (0x00021017) battery_pane_stacon

0x631f,	// (0x0002105b) control_bottom_pane_stacon_ParamLimits

0x631f,	// (0x0002105b) control_bottom_pane_stacon

0x6342,	// (0x0002107e) navi_pane_stacon_ParamLimits

0x6342,	// (0x0002107e) navi_pane_stacon

0x8f5b,	// (0x00023c97) stacon_bottom_pane_g1_ParamLimits

0x8f5b,	// (0x00023c97) stacon_bottom_pane_g1

0x5f87,	// (0x00020cc3) aid_levels_signal_lsc_ParamLimits

0x5f87,	// (0x00020cc3) aid_levels_signal_lsc

0x5f9d,	// (0x00020cd9) signal_pane_stacon_g1_ParamLimits

0x5f9d,	// (0x00020cd9) signal_pane_stacon_g1

0x5fb1,	// (0x00020ced) signal_pane_stacon_g2_ParamLimits

0x5fb1,	// (0x00020ced) signal_pane_stacon_g2

0x0001,

0xf6ca,	// (0x0002a406) signal_pane_stacon_g_ParamLimits

0xf6ca,	// (0x0002a406) signal_pane_stacon_g

0x5fe6,	// (0x00020d22) title_pane_stacon_t1_ParamLimits

0x5fe6,	// (0x00020d22) title_pane_stacon_t1

0x898f,	// (0x000236cb) uni_indicator_pane_stacon_g1

0x8999,	// (0x000236d5) uni_indicator_pane_stacon_g2

0x89a3,	// (0x000236df) uni_indicator_pane_stacon_g3

0x89ad,	// (0x000236e9) uni_indicator_pane_stacon_g4

0x0003,

0xf6d6,	// (0x0002a412) uni_indicator_pane_stacon_g

0x600b,	// (0x00020d47) control_top_pane_stacon_g1

0x6013,	// (0x00020d4f) control_top_pane_stacon_t1_ParamLimits

0x6013,	// (0x00020d4f) control_top_pane_stacon_t1

0x604a,	// (0x00020d86) aid_levels_battery_lsc_ParamLimits

0x604a,	// (0x00020d86) aid_levels_battery_lsc

0x6061,	// (0x00020d9d) battery_pane_stacon_g1_ParamLimits

0x6061,	// (0x00020d9d) battery_pane_stacon_g1

0x6074,	// (0x00020db0) battery_pane_stacon_g2_ParamLimits

0x6074,	// (0x00020db0) battery_pane_stacon_g2

0x0001,

0xf6df,	// (0x0002a41b) battery_pane_stacon_g_ParamLimits

0xf6df,	// (0x0002a41b) battery_pane_stacon_g

0x60b2,	// (0x00020dee) navi_icon_pane_stacon

0x60c6,	// (0x00020e02) navi_navi_pane_stacon

0x60b2,	// (0x00020dee) navi_text_pane_stacon

0x600b,	// (0x00020d47) control_bottom_pane_stacon_g1

0x60da,	// (0x00020e16) control_bottom_pane_stacon_t1_ParamLimits

0x60da,	// (0x00020e16) control_bottom_pane_stacon_t1

0x89d1,	// (0x0002370d) grid_app_pane_ParamLimits

0x89d1,	// (0x0002370d) grid_app_pane

0x89f5,	// (0x00023731) scroll_pane_cp15_ParamLimits

0x89f5,	// (0x00023731) scroll_pane_cp15

0x8a0a,	// (0x00023746) cell_app_pane_ParamLimits

0x8a0a,	// (0x00023746) cell_app_pane

0x8a2e,	// (0x0002376a) cell_app_pane_g1_ParamLimits

0x8a2e,	// (0x0002376a) cell_app_pane_g1

0x8a4e,	// (0x0002378a) cell_app_pane_g2_ParamLimits

0x8a4e,	// (0x0002378a) cell_app_pane_g2

0x0001,

0xf6e4,	// (0x0002a420) cell_app_pane_g_ParamLimits

0xf6e4,	// (0x0002a420) cell_app_pane_g

0x8a5a,	// (0x00023796) cell_app_pane_t1_ParamLimits

0x8a5a,	// (0x00023796) cell_app_pane_t1

0x8a71,	// (0x000237ad) grid_highlight_pane_ParamLimits

0x8a71,	// (0x000237ad) grid_highlight_pane

0x8672,	// (0x000233ae) cell_highlight_pane_g1

0x867a,	// (0x000233b6) cell_highlight_pane_g2

0x8682,	// (0x000233be) cell_highlight_pane_g3

0x868a,	// (0x000233c6) cell_highlight_pane_g4

0x8692,	// (0x000233ce) cell_highlight_pane_g5

0x869a,	// (0x000233d6) cell_highlight_pane_g6

0x86a2,	// (0x000233de) cell_highlight_pane_g7

0x86aa,	// (0x000233e6) cell_highlight_pane_g8

0x86b2,	// (0x000233ee) cell_highlight_pane_g9

0x7cc1,	// (0x000229fd) cell_highlight_pane_g10

0x0009,

0xf692,	// (0x0002a3ce) cell_highlight_pane_g

0x8a82,	// (0x000237be) bg_scroll_pane

0x6124,	// (0x00020e60) scroll_handle_pane

0x8ac9,	// (0x00023805) scroll_bg_pane_g1

0x8ade,	// (0x0002381a) scroll_bg_pane_g2

0x8af6,	// (0x00023832) scroll_bg_pane_g3

0x0002,

0xf6e9,	// (0x0002a425) scroll_bg_pane_g

0x8b0b,	// (0x00023847) scroll_handle_focus_pane_ParamLimits

0x8b0b,	// (0x00023847) scroll_handle_focus_pane

0x8ac9,	// (0x00023805) scroll_handle_pane_g1

0x8b18,	// (0x00023854) scroll_handle_pane_g2

0x8af6,	// (0x00023832) scroll_handle_pane_g3

0x0002,

0xf6f0,	// (0x0002a42c) scroll_handle_pane_g

0x86c3,	// (0x000233ff) bg_popup_sub_pane_cp21_ParamLimits

0x86c3,	// (0x000233ff) bg_popup_sub_pane_cp21

0x8b2c,	// (0x00023868) popup_fep_japan_predictive_window_t1_ParamLimits

0x8b2c,	// (0x00023868) popup_fep_japan_predictive_window_t1

0x8b46,	// (0x00023882) popup_fep_japan_predictive_window_t2_ParamLimits

0x8b46,	// (0x00023882) popup_fep_japan_predictive_window_t2

0x8b79,	// (0x000238b5) popup_fep_japan_predictive_window_t3_ParamLimits

0x8b79,	// (0x000238b5) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f7,	// (0x0002a433) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f7,	// (0x0002a433) popup_fep_japan_predictive_window_t

0x7ccb,	// (0x00022a07) bg_popup_sub_pane_cp23

0x8bb0,	// (0x000238ec) listscroll_japin_cand_pane

0x8bb8,	// (0x000238f4) popup_fep_japan_candidate_window_t1

0x8bc6,	// (0x00023902) candidate_pane_ParamLimits

0x8bc6,	// (0x00023902) candidate_pane

0x8bd8,	// (0x00023914) scroll_pane_cp30

0x8be0,	// (0x0002391c) list_single_popup_jap_candidate_pane_ParamLimits

0x8be0,	// (0x0002391c) list_single_popup_jap_candidate_pane

0x7ccb,	// (0x00022a07) list_highlight_pane_cp30

0x8bf5,	// (0x00023931) list_single_popup_jap_candidate_pane_t1

0x8c04,	// (0x00023940) level_1_signal

0x8c16,	// (0x00023952) level_2_signal

0x8c29,	// (0x00023965) level_3_signal

0x8c3c,	// (0x00023978) level_4_signal

0x8c4f,	// (0x0002398b) level_5_signal

0x8c62,	// (0x0002399e) level_6_signal

0x8c75,	// (0x000239b1) level_7_signal

0x8c04,	// (0x00023940) level_1_battery

0x8c16,	// (0x00023952) level_2_battery

0x8c29,	// (0x00023965) level_3_battery

0x8c3c,	// (0x00023978) level_4_battery

0x8c4f,	// (0x0002398b) level_5_battery

0x8c62,	// (0x0002399e) level_6_battery

0x8c75,	// (0x000239b1) level_7_battery

0x8ca0,	// (0x000239dc) list_menu_pane_ParamLimits

0x8ca0,	// (0x000239dc) list_menu_pane

0x8cb6,	// (0x000239f2) scroll_pane_cp25_ParamLimits

0x8cb6,	// (0x000239f2) scroll_pane_cp25

0x8ccf,	// (0x00023a0b) list_double2_graphic_pane_cp2_ParamLimits

0x8ccf,	// (0x00023a0b) list_double2_graphic_pane_cp2

0x8ccf,	// (0x00023a0b) list_double2_large_graphic_pane_cp2_ParamLimits

0x8ccf,	// (0x00023a0b) list_double2_large_graphic_pane_cp2

0x8ccf,	// (0x00023a0b) list_double2_pane_cp2_ParamLimits

0x8ccf,	// (0x00023a0b) list_double2_pane_cp2

0x8ccf,	// (0x00023a0b) list_double_graphic_pane_cp2_ParamLimits

0x8ccf,	// (0x00023a0b) list_double_graphic_pane_cp2

0x8ccf,	// (0x00023a0b) list_double_large_graphic_pane_cp2_ParamLimits

0x8ccf,	// (0x00023a0b) list_double_large_graphic_pane_cp2

0x8ccf,	// (0x00023a0b) list_double_number_pane_cp2_ParamLimits

0x8ccf,	// (0x00023a0b) list_double_number_pane_cp2

0x8ccf,	// (0x00023a0b) list_double_pane_cp2_ParamLimits

0x8ccf,	// (0x00023a0b) list_double_pane_cp2

0x8cf3,	// (0x00023a2f) list_single_2graphic_pane_cp2_ParamLimits

0x8cf3,	// (0x00023a2f) list_single_2graphic_pane_cp2

0x8cf3,	// (0x00023a2f) list_single_graphic_heading_pane_cp2_ParamLimits

0x8cf3,	// (0x00023a2f) list_single_graphic_heading_pane_cp2

0x8cf3,	// (0x00023a2f) list_single_graphic_pane_cp2_ParamLimits

0x8cf3,	// (0x00023a2f) list_single_graphic_pane_cp2

0x8cf3,	// (0x00023a2f) list_single_heading_pane_cp2_ParamLimits

0x8cf3,	// (0x00023a2f) list_single_heading_pane_cp2

0x8d0c,	// (0x00023a48) list_single_large_graphic_pane_cp2_ParamLimits

0x8d0c,	// (0x00023a48) list_single_large_graphic_pane_cp2

0x8cf3,	// (0x00023a2f) list_single_number_heading_pane_cp2_ParamLimits

0x8cf3,	// (0x00023a2f) list_single_number_heading_pane_cp2

0x8cf3,	// (0x00023a2f) list_single_number_pane_cp2_ParamLimits

0x8cf3,	// (0x00023a2f) list_single_number_pane_cp2

0x8cf3,	// (0x00023a2f) list_single_pane_cp2_ParamLimits

0x8cf3,	// (0x00023a2f) list_single_pane_cp2

0x8d88,	// (0x00023ac4) bg_popup_sub_pane_cp22

0x61d6,	// (0x00020f12) popup_side_volume_key_window_g1

0x6200,	// (0x00020f3c) popup_side_volume_key_window_t1

0x621c,	// (0x00020f58) volume_small_pane_cp1

0x8026,	// (0x00022d62) bg_popup_sub_pane_cp24_ParamLimits

0x8026,	// (0x00022d62) bg_popup_sub_pane_cp24

0x8d9e,	// (0x00023ada) fep_china_uni_candidate_pane_ParamLimits

0x8d9e,	// (0x00023ada) fep_china_uni_candidate_pane

0x8db2,	// (0x00023aee) fep_china_uni_entry_pane

0x8dc2,	// (0x00023afe) popup_fep_china_uni_window_g1

0x8dde,	// (0x00023b1a) fep_china_uni_entry_pane_g1

0x8de6,	// (0x00023b22) fep_china_uni_entry_pane_g2

0x0001,

0xf728,	// (0x0002a464) fep_china_uni_entry_pane_g

0x8dee,	// (0x00023b2a) fep_entry_item_pane

0x8df8,	// (0x00023b34) fep_candidate_item_pane

0x8e00,	// (0x00023b3c) fep_china_uni_candidate_pane_g1

0x8e08,	// (0x00023b44) fep_china_uni_candidate_pane_g2

0x8e10,	// (0x00023b4c) fep_china_uni_candidate_pane_g3

0x8e18,	// (0x00023b54) fep_china_uni_candidate_pane_g4

0x0003,

0xf72d,	// (0x0002a469) fep_china_uni_candidate_pane_g

0x7cc1,	// (0x000229fd) fep_entry_item_pane_g1

0x8e20,	// (0x00023b5c) fep_entry_item_pane_t1_ParamLimits

0x8e20,	// (0x00023b5c) fep_entry_item_pane_t1

0x8e36,	// (0x00023b72) fep_candidate_item_pane_t1_ParamLimits

0x8e36,	// (0x00023b72) fep_candidate_item_pane_t1

0x8e4b,	// (0x00023b87) fep_candidate_item_pane_t2_ParamLimits

0x8e4b,	// (0x00023b87) fep_candidate_item_pane_t2

0x0001,

0xf736,	// (0x0002a472) fep_candidate_item_pane_t_ParamLimits

0xf736,	// (0x0002a472) fep_candidate_item_pane_t

0x7dab,	// (0x00022ae7) list_highlight_pane_cp31_ParamLimits

0x7dab,	// (0x00022ae7) list_highlight_pane_cp31

0x8e5d,	// (0x00023b99) level_1_signal_lsc

0x8e66,	// (0x00023ba2) level_2_signal_lsc

0x8e6f,	// (0x00023bab) level_3_signal_lsc

0x8e78,	// (0x00023bb4) level_4_signal_lsc

0x8e81,	// (0x00023bbd) level_5_signal_lsc

0x8e8a,	// (0x00023bc6) level_6_signal_lsc

0x8e93,	// (0x00023bcf) level_7_signal_lsc

0x8e93,	// (0x00023bcf) level_1_battery_lsc

0x8e9c,	// (0x00023bd8) level_2_battery_lsc

0x8ea5,	// (0x00023be1) level_3_battery_lsc

0x8eae,	// (0x00023bea) level_4_battery_lsc

0x8eb7,	// (0x00023bf3) level_5_battery_lsc

0x8ec0,	// (0x00023bfc) level_6_battery_lsc

0x8e5d,	// (0x00023b99) level_7_battery_lsc

0x8ec9,	// (0x00023c05) scroll_handle_focus_pane_g1

0x8ed2,	// (0x00023c0e) scroll_handle_focus_pane_g2

0x8edb,	// (0x00023c17) scroll_handle_focus_pane_g3

0x0002,

0xf73b,	// (0x0002a477) scroll_handle_focus_pane_g

0x5154,	// (0x0001fe90) list_single_2graphic_pane_g1_ParamLimits

0x5154,	// (0x0001fe90) list_single_2graphic_pane_g1

0x4adc,	// (0x0001f818) list_single_2graphic_pane_g2_ParamLimits

0x4adc,	// (0x0001f818) list_single_2graphic_pane_g2

0x4a62,	// (0x0001f79e) list_single_2graphic_pane_g3_ParamLimits

0x4a62,	// (0x0001f79e) list_single_2graphic_pane_g3

0x5160,	// (0x0001fe9c) list_single_2graphic_pane_g4_ParamLimits

0x5160,	// (0x0001fe9c) list_single_2graphic_pane_g4

0x0003,

0xf742,	// (0x0002a47e) list_single_2graphic_pane_g_ParamLimits

0xf742,	// (0x0002a47e) list_single_2graphic_pane_g

0x516c,	// (0x0001fea8) list_single_2graphic_pane_t1_ParamLimits

0x516c,	// (0x0001fea8) list_single_2graphic_pane_t1

0x519a,	// (0x0001fed6) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x519a,	// (0x0001fed6) list_double2_graphic_large_graphic_pane_g1

0x4b81,	// (0x0001f8bd) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4b81,	// (0x0001f8bd) list_double2_graphic_large_graphic_pane_g2

0x4b92,	// (0x0001f8ce) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4b92,	// (0x0001f8ce) list_double2_graphic_large_graphic_pane_g3

0x51aa,	// (0x0001fee6) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x51aa,	// (0x0001fee6) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74b,	// (0x0002a487) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74b,	// (0x0002a487) list_double2_graphic_large_graphic_pane_g

0x51b6,	// (0x0001fef2) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x51b6,	// (0x0001fef2) list_double2_graphic_large_graphic_pane_t1

0x51cc,	// (0x0001ff08) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x51cc,	// (0x0001ff08) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf754,	// (0x0002a490) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf754,	// (0x0002a490) list_double2_graphic_large_graphic_pane_t

0x9023,	// (0x00023d5f) popup_fast_swap_window_ParamLimits

0x9023,	// (0x00023d5f) popup_fast_swap_window

0x903f,	// (0x00023d7b) popup_side_volume_key_window

0x905b,	// (0x00023d97) stacon_top_pane

0x9065,	// (0x00023da1) status_pane_ParamLimits

0x9065,	// (0x00023da1) status_pane

0x905b,	// (0x00023d97) status_small_pane

0x7ccb,	// (0x00022a07) control_pane

0x7ccb,	// (0x00022a07) stacon_bottom_pane

0x85fa,	// (0x00023336) scroll_pane_cp121

0x85f1,	// (0x0002332d) set_content_pane

0x8ee4,	// (0x00023c20) bg_active_tab_pane_g1_cp1

0x8eed,	// (0x00023c29) bg_active_tab_pane_g2_cp1

0x8ef6,	// (0x00023c32) bg_active_tab_pane_g3_cp1

0x8ee4,	// (0x00023c20) bg_passive_tab_pane_g1_cp1

0x8eed,	// (0x00023c29) bg_passive_tab_pane_g2_cp1

0x8ef6,	// (0x00023c32) bg_passive_tab_pane_g3_cp1

0x8eff,	// (0x00023c3b) bg_active_tab_pane_g1_cp2

0x8eed,	// (0x00023c29) bg_active_tab_pane_g2_cp2

0x8f08,	// (0x00023c44) bg_active_tab_pane_g3_cp2

0x8eff,	// (0x00023c3b) bg_passive_tab_pane_g1_cp2

0x8eed,	// (0x00023c29) bg_passive_tab_pane_g2_cp2

0x8f08,	// (0x00023c44) bg_passive_tab_pane_g3_cp2

0x8f11,	// (0x00023c4d) bg_active_tab_pane_g1_cp3

0x8eed,	// (0x00023c29) bg_active_tab_pane_g2_cp3

0x8f1a,	// (0x00023c56) bg_active_tab_pane_g3_cp3

0x8f11,	// (0x00023c4d) bg_passive_tab_pane_g1_cp3

0x8eed,	// (0x00023c29) bg_passive_tab_pane_g2_cp3

0x8f1a,	// (0x00023c56) bg_passive_tab_pane_g3_cp3

0x8f23,	// (0x00023c5f) bg_active_tab_pane_g1_cp4

0x8eed,	// (0x00023c29) bg_active_tab_pane_g2_cp4

0x8f2e,	// (0x00023c6a) bg_active_tab_pane_g3_cp4

0x8f23,	// (0x00023c5f) bg_passive_tab_pane_g1_cp4

0x8eed,	// (0x00023c29) bg_passive_tab_pane_g2_cp4

0x8f2e,	// (0x00023c6a) bg_passive_tab_pane_g3_cp4

0x8f77,	// (0x00023cb3) bg_active_tab_pane_g1_cp5

0x8eed,	// (0x00023c29) bg_active_tab_pane_g2_cp5

0x8f80,	// (0x00023cbc) bg_active_tab_pane_g3_cp5

0x8f77,	// (0x00023cb3) bg_passive_tab_pane_g1_cp5

0x8eed,	// (0x00023c29) bg_passive_tab_pane_g2_cp5

0x8f80,	// (0x00023cbc) bg_passive_tab_pane_g3_cp5

0x8f89,	// (0x00023cc5) list_set_graphic_pane_ParamLimits

0x8f89,	// (0x00023cc5) list_set_graphic_pane

0x7ccb,	// (0x00022a07) bg_set_opt_pane_cp4

0x8fa6,	// (0x00023ce2) list_set_graphic_pane_g1_ParamLimits

0x8fa6,	// (0x00023ce2) list_set_graphic_pane_g1

0x8fb2,	// (0x00023cee) list_set_graphic_pane_g2_ParamLimits

0x8fb2,	// (0x00023cee) list_set_graphic_pane_g2

0x0001,

0xf759,	// (0x0002a495) list_set_graphic_pane_g_ParamLimits

0xf759,	// (0x0002a495) list_set_graphic_pane_g

0x0009,

0xfac5,	// (0x0002a801) volume_small_pane_cp_g

0x8fd6,	// (0x00023d12) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8fd6,	// (0x00023d12) list_double2_large_graphic_pane_g1_cp2

0x8fe2,	// (0x00023d1e) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8fe2,	// (0x00023d1e) list_double2_large_graphic_pane_g2_cp2

0x8ff3,	// (0x00023d2f) list_double2_large_graphic_pane_g3_cp2

0x8ffb,	// (0x00023d37) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8ffb,	// (0x00023d37) list_double2_large_graphic_pane_t1_cp2

0x9011,	// (0x00023d4d) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x9011,	// (0x00023d4d) list_double2_large_graphic_pane_t2_cp2

0xabc6,	// (0x00025902) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xabc6,	// (0x00025902) list_double_large_graphic_pane_g1_cp2

0xabd7,	// (0x00025913) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xabd7,	// (0x00025913) list_double_large_graphic_pane_g2_cp2

0x9181,	// (0x00023ebd) list_double_large_graphic_pane_g3_cp2

0xabe8,	// (0x00025924) list_double_large_graphic_pane_g4_cp

0xabf0,	// (0x0002592c) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xabf0,	// (0x0002592c) list_double_large_graphic_pane_t1_cp2

0xac07,	// (0x00025943) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xac07,	// (0x00025943) list_double_large_graphic_pane_t2_cp2

0x9073,	// (0x00023daf) list_double2_graphic_pane_g1_cp2_ParamLimits

0x9073,	// (0x00023daf) list_double2_graphic_pane_g1_cp2

0x9081,	// (0x00023dbd) list_double2_graphic_pane_g2_cp2_ParamLimits

0x9081,	// (0x00023dbd) list_double2_graphic_pane_g2_cp2

0x9092,	// (0x00023dce) list_double2_graphic_pane_g3_cp2

0x909c,	// (0x00023dd8) list_double2_graphic_pane_t1_cp2_ParamLimits

0x909c,	// (0x00023dd8) list_double2_graphic_pane_t1_cp2

0x90b2,	// (0x00023dee) list_double2_graphic_pane_t2_cp2_ParamLimits

0x90b2,	// (0x00023dee) list_double2_graphic_pane_t2_cp2

0x90c4,	// (0x00023e00) list_single_number_heading_pane_g1_cp2_ParamLimits

0x90c4,	// (0x00023e00) list_single_number_heading_pane_g1_cp2

0x90d0,	// (0x00023e0c) list_single_number_heading_pane_g2_cp2

0x90d8,	// (0x00023e14) list_single_number_heading_pane_t1_cp2_ParamLimits

0x90d8,	// (0x00023e14) list_single_number_heading_pane_t1_cp2

0x90ee,	// (0x00023e2a) list_single_number_heading_pane_t2_cp2_ParamLimits

0x90ee,	// (0x00023e2a) list_single_number_heading_pane_t2_cp2

0x9100,	// (0x00023e3c) list_single_number_heading_pane_t3_cp2_ParamLimits

0x9100,	// (0x00023e3c) list_single_number_heading_pane_t3_cp2

0x90c4,	// (0x00023e00) list_single_heading_pane_g1_cp2_ParamLimits

0x90c4,	// (0x00023e00) list_single_heading_pane_g1_cp2

0x90d0,	// (0x00023e0c) list_single_heading_pane_g2_cp2

0x90d8,	// (0x00023e14) list_single_heading_pane_t1_cp2_ParamLimits

0x90d8,	// (0x00023e14) list_single_heading_pane_t1_cp2

0xa9ce,	// (0x0002570a) list_single_heading_pane_t2_cp2_ParamLimits

0xa9ce,	// (0x0002570a) list_single_heading_pane_t2_cp2

0xa916,	// (0x00025652) list_double_graphic_pane_g1_cp2_ParamLimits

0xa916,	// (0x00025652) list_double_graphic_pane_g1_cp2

0xa922,	// (0x0002565e) list_double_graphic_pane_g2_cp2_ParamLimits

0xa922,	// (0x0002565e) list_double_graphic_pane_g2_cp2

0xa931,	// (0x0002566d) list_double_graphic_pane_g3_cp2

0xa939,	// (0x00025675) list_double_graphic_pane_t1_cp2_ParamLimits

0xa939,	// (0x00025675) list_double_graphic_pane_t1_cp2

0xa94f,	// (0x0002568b) list_double_graphic_pane_t2_cp2_ParamLimits

0xa94f,	// (0x0002568b) list_double_graphic_pane_t2_cp2

0x9175,	// (0x00023eb1) list_double_number_pane_g1_cp2_ParamLimits

0x9175,	// (0x00023eb1) list_double_number_pane_g1_cp2

0x9181,	// (0x00023ebd) list_double_number_pane_g2_cp2

0xa8da,	// (0x00025616) list_double_number_pane_t1_cp2_ParamLimits

0xa8da,	// (0x00025616) list_double_number_pane_t1_cp2

0xa8ee,	// (0x0002562a) list_double_number_pane_t2_cp2_ParamLimits

0xa8ee,	// (0x0002562a) list_double_number_pane_t2_cp2

0xa904,	// (0x00025640) list_double_number_pane_t3_cp2_ParamLimits

0xa904,	// (0x00025640) list_double_number_pane_t3_cp2

0xa7c3,	// (0x000254ff) list_single_graphic_pane_g1_cp2_ParamLimits

0xa7c3,	// (0x000254ff) list_single_graphic_pane_g1_cp2

0x91d9,	// (0x00023f15) list_single_graphic_pane_g2_cp2_ParamLimits

0x91d9,	// (0x00023f15) list_single_graphic_pane_g2_cp2

0x91e5,	// (0x00023f21) list_single_graphic_pane_g3_cp2

0xa799,	// (0x000254d5) list_single_graphic_pane_t1_cp2_ParamLimits

0xa799,	// (0x000254d5) list_single_graphic_pane_t1_cp2

0x91d9,	// (0x00023f15) list_single_number_pane_g1_cp2_ParamLimits

0x91d9,	// (0x00023f15) list_single_number_pane_g1_cp2

0x91e5,	// (0x00023f21) list_single_number_pane_g2_cp2

0xa799,	// (0x000254d5) list_single_number_pane_t1_cp2_ParamLimits

0xa799,	// (0x000254d5) list_single_number_pane_t1_cp2

0xa7af,	// (0x000254eb) list_single_number_pane_t2_cp2_ParamLimits

0xa7af,	// (0x000254eb) list_single_number_pane_t2_cp2

0x8fe2,	// (0x00023d1e) list_double2_pane_g1_cp2_ParamLimits

0x8fe2,	// (0x00023d1e) list_double2_pane_g1_cp2

0x8ff3,	// (0x00023d2f) list_double2_pane_g2_cp2

0x914d,	// (0x00023e89) list_double2_pane_t1_cp2_ParamLimits

0x914d,	// (0x00023e89) list_double2_pane_t1_cp2

0x9163,	// (0x00023e9f) list_double2_pane_t2_cp2_ParamLimits

0x9163,	// (0x00023e9f) list_double2_pane_t2_cp2

0x9175,	// (0x00023eb1) list_double_pane_g1_cp2_ParamLimits

0x9175,	// (0x00023eb1) list_double_pane_g1_cp2

0x9181,	// (0x00023ebd) list_double_pane_g2_cp2

0x9189,	// (0x00023ec5) list_double_pane_t1_cp2_ParamLimits

0x9189,	// (0x00023ec5) list_double_pane_t1_cp2

0x919f,	// (0x00023edb) list_double_pane_t2_cp2_ParamLimits

0x919f,	// (0x00023edb) list_double_pane_t2_cp2

0x91c9,	// (0x00023f05) list_single_pane_cp2_g3

0x91d9,	// (0x00023f15) list_single_pane_g1_cp2_ParamLimits

0x91d9,	// (0x00023f15) list_single_pane_g1_cp2

0x91e5,	// (0x00023f21) list_single_pane_g2_cp2

0x91ed,	// (0x00023f29) list_single_pane_t1_cp2_ParamLimits

0x91ed,	// (0x00023f29) list_single_pane_t1_cp2

0x9205,	// (0x00023f41) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9205,	// (0x00023f41) list_single_large_graphic_pane_g1_cp2

0x9211,	// (0x00023f4d) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x9211,	// (0x00023f4d) list_single_large_graphic_pane_g2_cp2

0x921d,	// (0x00023f59) list_single_large_graphic_pane_g3_cp2

0x9225,	// (0x00023f61) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x9225,	// (0x00023f61) list_single_large_graphic_pane_g4_cp1

0x923f,	// (0x00023f7b) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x923f,	// (0x00023f7b) list_single_large_graphic_pane_t1_cp2

0xa765,	// (0x000254a1) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa765,	// (0x000254a1) list_single_graphic_heading_pane_g1_cp2

0xa732,	// (0x0002546e) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa732,	// (0x0002546e) list_single_graphic_heading_pane_g4_cp2

0x91e5,	// (0x00023f21) list_single_graphic_heading_pane_g5_cp2

0xa771,	// (0x000254ad) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa771,	// (0x000254ad) list_single_graphic_heading_pane_t1_cp2

0xa787,	// (0x000254c3) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa787,	// (0x000254c3) list_single_graphic_heading_pane_t2_cp2

0xa726,	// (0x00025462) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa726,	// (0x00025462) list_single_2graphic_pane_g1_cp2

0xa732,	// (0x0002546e) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa732,	// (0x0002546e) list_single_2graphic_pane_g2_cp2

0x91e5,	// (0x00023f21) list_single_2graphic_pane_g3_cp2

0xa743,	// (0x0002547f) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa743,	// (0x0002547f) list_single_2graphic_pane_g4_cp2

0xa74f,	// (0x0002548b) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa74f,	// (0x0002548b) list_single_2graphic_pane_t1_cp2

0x7cc1,	// (0x000229fd) list_highlight_pane_g10_cp1

0xa2fe,	// (0x0002503a) list_highlight_pane_g1_cp1

0xa306,	// (0x00025042) list_highlight_pane_g2_cp1

0xa30e,	// (0x0002504a) list_highlight_pane_g3_cp1

0xa316,	// (0x00025052) list_highlight_pane_g4_cp1

0xa31e,	// (0x0002505a) list_highlight_pane_g5_cp1

0xa326,	// (0x00025062) list_highlight_pane_g6_cp1

0xa32e,	// (0x0002506a) list_highlight_pane_g7_cp1

0xa336,	// (0x00025072) list_highlight_pane_g8_cp1

0xa33e,	// (0x0002507a) list_highlight_pane_g9_cp1

0xa21e,	// (0x00024f5a) form_field_slider_pane_t3

0xa22c,	// (0x00024f68) form_field_slider_pane_t4

0xa23a,	// (0x00024f76) slider_form_pane_ParamLimits

0xa23a,	// (0x00024f76) slider_form_pane

0x7ccb,	// (0x00022a07) control_abbreviations

0x7ccb,	// (0x00022a07) control_conventions

0x7ccb,	// (0x00022a07) control_definitions

0x7ccb,	// (0x00022a07) format_table_attribute

0xaa18,	// (0x00025754) bg_popup_preview_window_pane_g9

0x7ccb,	// (0x00022a07) format_table_data2

0x7ccb,	// (0x00022a07) format_table_data3

0x7ccb,	// (0x00022a07) format_table_data_example

0x0008,

0x7ccb,	// (0x00022a07) intro_purpose

0xf8ee,	// (0x0002a62a) bg_popup_preview_window_pane_g

0x7ccb,	// (0x00022a07) texts_category

0x7ccb,	// (0x00022a07) texts_graphics

0x9255,	// (0x00023f91) text_digital

0x9264,	// (0x00023fa0) text_primary

0x9273,	// (0x00023faf) text_primary_small

0x9282,	// (0x00023fbe) text_secondary

0x9291,	// (0x00023fcd) text_title

0xb18c,	// (0x00025ec8) bg_passive_tab_pane_g1_cp3_srt

0x8eed,	// (0x00023c29) bg_passive_tab_pane_g2_cp3_srt

0xb195,	// (0x00025ed1) bg_passive_tab_pane_g3_cp3_srt

0x7dab,	// (0x00022ae7) bg_active_tab_pane_cp3_srt_ParamLimits

0x7dab,	// (0x00022ae7) bg_active_tab_pane_cp3_srt

0xb19e,	// (0x00025eda) tabs_4_active_pane_srt_g1

0xb1a6,	// (0x00025ee2) tabs_4_active_pane_srt_t1_ParamLimits

0xb1a6,	// (0x00025ee2) tabs_4_active_pane_srt_t1

0xb18c,	// (0x00025ec8) bg_active_tab_pane_g1_cp3_copy1

0x8eed,	// (0x00023c29) bg_active_tab_pane_g2_cp3_copy1

0xb195,	// (0x00025ed1) bg_active_tab_pane_g3_cp3_copy1

0x7dab,	// (0x00022ae7) tabs_2_long_active_pane_srt_ParamLimits

0x7dab,	// (0x00022ae7) tabs_2_long_active_pane_srt

0x7dab,	// (0x00022ae7) tabs_2_long_passive_pane_srt_ParamLimits

0x7dab,	// (0x00022ae7) tabs_2_long_passive_pane_srt

0x87fb,	// (0x00023537) bg_passive_tab_pane_cp4_srt_ParamLimits

0x87fb,	// (0x00023537) bg_passive_tab_pane_cp4_srt

0xae5c,	// (0x00025b98) bg_passive_tab_pane_g1_cp4_srt

0x8eed,	// (0x00023c29) bg_passive_tab_pane_g2_cp4_srt

0xae65,	// (0x00025ba1) bg_passive_tab_pane_g3_cp4_srt

0x87da,	// (0x00023516) bg_active_tab_pane_cp4_srt_ParamLimits

0x87da,	// (0x00023516) bg_active_tab_pane_cp4_srt

0xae6e,	// (0x00025baa) tabs_2_long_active_pane_srt_t1_ParamLimits

0xae6e,	// (0x00025baa) tabs_2_long_active_pane_srt_t1

0xae5c,	// (0x00025b98) bg_active_tab_pane_g1_cp4_srt

0x8eed,	// (0x00023c29) bg_active_tab_pane_g2_cp4_srt

0xae65,	// (0x00025ba1) bg_active_tab_pane_g3_cp4_srt

0x8026,	// (0x00022d62) tabs_3_long_active_pane_srt_ParamLimits

0x8026,	// (0x00022d62) tabs_3_long_active_pane_srt

0x8026,	// (0x00022d62) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x8026,	// (0x00022d62) tabs_3_long_passive_pane_cp_srt

0x8026,	// (0x00022d62) tabs_3_long_passive_pane_srt_ParamLimits

0x8026,	// (0x00022d62) tabs_3_long_passive_pane_srt

0x87fb,	// (0x00023537) bg_passive_tab_pane_cp5_srt_ParamLimits

0x87fb,	// (0x00023537) bg_passive_tab_pane_cp5_srt

0x8f77,	// (0x00023cb3) bg_passive_tab_pane_g1_cp5_srt

0x8eed,	// (0x00023c29) bg_passive_tab_pane_g2_cp5_srt

0x8f80,	// (0x00023cbc) bg_passive_tab_pane_g3_cp5_srt

0x87da,	// (0x00023516) bg_active_tab_pane_cp5_srt_ParamLimits

0x87da,	// (0x00023516) bg_active_tab_pane_cp5_srt

0xae4a,	// (0x00025b86) tabs_3_long_active_pane_srt_t1_ParamLimits

0xae4a,	// (0x00025b86) tabs_3_long_active_pane_srt_t1

0x8f77,	// (0x00023cb3) bg_active_tab_pane_g1_cp5_srt

0x8eed,	// (0x00023c29) bg_active_tab_pane_g2_cp5_srt

0x8f80,	// (0x00023cbc) bg_active_tab_pane_g3_cp5_srt

0xae3c,	// (0x00025b78) navi_text_pane_srt_t1

0xae34,	// (0x00025b70) navi_icon_pane_srt_g1

0x9458,	// (0x00024194) midp_editing_number_pane_srt

0x92a0,	// (0x00023fdc) midp_ticker_pane_srt

0x9460,	// (0x0002419c) midp_ticker_pane_srt_g1

0x9468,	// (0x000241a4) midp_ticker_pane_srt_g2

0x0001,

0xf778,	// (0x0002a4b4) midp_ticker_pane_srt_g

0x9470,	// (0x000241ac) midp_ticker_pane_srt_t1

0xae25,	// (0x00025b61) midp_editing_number_pane_t1_copy1

0x87fb,	// (0x00023537) listscroll_midp_pane

0x87fb,	// (0x00023537) midp_form_pane

0x930a,	// (0x00024046) midp_info_popup_window_ParamLimits

0x930a,	// (0x00024046) midp_info_popup_window

0x86c3,	// (0x000233ff) bg_popup_sub_pane_cp50_ParamLimits

0x86c3,	// (0x000233ff) bg_popup_sub_pane_cp50

0x9f2a,	// (0x00024c66) listscroll_midp_info_pane_ParamLimits

0x9f2a,	// (0x00024c66) listscroll_midp_info_pane

0x9f12,	// (0x00024c4e) listscroll_form_midp_pane_ParamLimits

0x9f12,	// (0x00024c4e) listscroll_form_midp_pane

0x9f1e,	// (0x00024c5a) scroll_bar_cp050

0x9ef2,	// (0x00024c2e) list_midp_pane

0xbbdc,	// (0x00026918) signal_pane_g2_cp

0x9e2c,	// (0x00024b68) listscroll_midp_info_pane_t1_ParamLimits

0x9e2c,	// (0x00024b68) listscroll_midp_info_pane_t1

0x9e44,	// (0x00024b80) listscroll_midp_info_pane_t2_ParamLimits

0x9e44,	// (0x00024b80) listscroll_midp_info_pane_t2

0x9e82,	// (0x00024bbe) listscroll_midp_info_pane_t3_ParamLimits

0x9e82,	// (0x00024bbe) listscroll_midp_info_pane_t3

0x9ebc,	// (0x00024bf8) listscroll_midp_info_pane_t4_ParamLimits

0x9ebc,	// (0x00024bf8) listscroll_midp_info_pane_t4

0x0003,

0xf829,	// (0x0002a565) listscroll_midp_info_pane_t_ParamLimits

0xf829,	// (0x0002a565) listscroll_midp_info_pane_t

0x8787,	// (0x000234c3) scroll_pane_cp21

0x9dca,	// (0x00024b06) form_midp_field_choice_group_pane

0x9dd3,	// (0x00024b0f) form_midp_field_text_pane

0x9e12,	// (0x00024b4e) form_midp_field_time_pane

0x9e1a,	// (0x00024b56) form_midp_gauge_slider_pane

0x9e23,	// (0x00024b5f) form_midp_gauge_wait_pane

0x7ccb,	// (0x00022a07) form_midp_image_pane

0x533d,	// (0x00020079) list_single_midp_pane_ParamLimits

0x533d,	// (0x00020079) list_single_midp_pane

0x9d82,	// (0x00024abe) form_midp_field_text_pane_t1

0x9b4c,	// (0x00024888) input_focus_pane_cp050

0x9db9,	// (0x00024af5) list_midp_form_text_pane

0x9d51,	// (0x00024a8d) form_midp_field_choice_group_pane_t1

0x9d5f,	// (0x00024a9b) input_focus_pane_cp051

0x9d73,	// (0x00024aaf) list_midp_choice_pane

0x7ccb,	// (0x00022a07) status_idle_pane

0x9d35,	// (0x00024a71) form_midp_field_time_pane_t1

0x7cc1,	// (0x000229fd) wait_anim_pane_g2_copy1

0x9d43,	// (0x00024a7f) form_midp_field_time_pane_t2

0x0001,

0x93b8,	// (0x000240f4) aid_navinavi_width_2_pane

0xf824,	// (0x0002a560) form_midp_field_time_pane_t

0x7ccb,	// (0x00022a07) input_focus_pane_cp052

0x7ccb,	// (0x00022a07) bg_input_focus_pane_cp040

0x9cf5,	// (0x00024a31) form_midp_gauge_slider_pane_t1

0x9d03,	// (0x00024a3f) form_midp_gauge_slider_pane_t2

0x9d11,	// (0x00024a4d) form_midp_gauge_slider_pane_t3

0x9d1f,	// (0x00024a5b) form_midp_gauge_slider_pane_t4

0x0003,

0xf81b,	// (0x0002a557) form_midp_gauge_slider_pane_t

0x9d2d,	// (0x00024a69) form_midp_slider_pane

0x7dab,	// (0x00022ae7) bg_input_focus_pane_cp041_ParamLimits

0x7dab,	// (0x00022ae7) bg_input_focus_pane_cp041

0x9cc2,	// (0x000249fe) form_midp_gauge_wait_pane_t1_ParamLimits

0x9cc2,	// (0x000249fe) form_midp_gauge_wait_pane_t1

0x9cd4,	// (0x00024a10) form_midp_gauge_wait_pane_t2_ParamLimits

0x9cd4,	// (0x00024a10) form_midp_gauge_wait_pane_t2

0x0001,

0xf816,	// (0x0002a552) form_midp_gauge_wait_pane_t_ParamLimits

0xf816,	// (0x0002a552) form_midp_gauge_wait_pane_t

0x9ce6,	// (0x00024a22) form_midp_wait_pane_ParamLimits

0x9ce6,	// (0x00024a22) form_midp_wait_pane

0x9c8c,	// (0x000249c8) form_midp_image_pane_g1

0x9c95,	// (0x000249d1) form_midp_image_pane_t1

0x9ca4,	// (0x000249e0) form_midp_image_pane_t2

0x9cb3,	// (0x000249ef) form_midp_image_pane_t3

0x0002,

0xf80f,	// (0x0002a54b) form_midp_image_pane_t

0x9c83,	// (0x000249bf) list_single_midp_pane_g1

0x532e,	// (0x0002006a) list_single_midp_pane_t1

0x9c5b,	// (0x00024997) list_midp_form_item_pane_ParamLimits

0x9c5b,	// (0x00024997) list_midp_form_item_pane

0x9360,	// (0x0002409c) list_midp_form_item_pane_t1

0x936f,	// (0x000240ab) midp_ticker_pane_g1

0x937b,	// (0x000240b7) midp_ticker_pane_g2

0x0001,

0xf75e,	// (0x0002a49a) midp_ticker_pane_g

0x9387,	// (0x000240c3) midp_ticker_pane_t1

0xb076,	// (0x00025db2) midp_editing_number_pane_t1

0xb054,	// (0x00025d90) midp_editing_number_pane

0xb063,	// (0x00025d9f) midp_ticker_pane

0xae15,	// (0x00025b51) ai_message_heading_pane

0x7ccb,	// (0x00022a07) bg_popup_window_pane_cp14

0xae1d,	// (0x00025b59) listscroll_ai_message_pane

0xad9f,	// (0x00025adb) ai_message_heading_pane_g1_ParamLimits

0xad9f,	// (0x00025adb) ai_message_heading_pane_g1

0xadab,	// (0x00025ae7) ai_message_heading_pane_g2_ParamLimits

0xadab,	// (0x00025ae7) ai_message_heading_pane_g2

0xadb7,	// (0x00025af3) ai_message_heading_pane_g3_ParamLimits

0xadb7,	// (0x00025af3) ai_message_heading_pane_g3

0xadc3,	// (0x00025aff) ai_message_heading_pane_g4_ParamLimits

0xadc3,	// (0x00025aff) ai_message_heading_pane_g4

0x0003,

0xf950,	// (0x0002a68c) ai_message_heading_pane_g_ParamLimits

0xf950,	// (0x0002a68c) ai_message_heading_pane_g

0xadcf,	// (0x00025b0b) ai_message_heading_pane_t1_ParamLimits

0xadcf,	// (0x00025b0b) ai_message_heading_pane_t1

0xade9,	// (0x00025b25) ai_message_heading_pane_t2_ParamLimits

0xade9,	// (0x00025b25) ai_message_heading_pane_t2

0x0001,

0xf959,	// (0x0002a695) ai_message_heading_pane_t_ParamLimits

0xf959,	// (0x0002a695) ai_message_heading_pane_t

0xadfb,	// (0x00025b37) bg_popup_heading_pane_cp1_ParamLimits

0xadfb,	// (0x00025b37) bg_popup_heading_pane_cp1

0xad8d,	// (0x00025ac9) list_ai_message_pane_ParamLimits

0xad8d,	// (0x00025ac9) list_ai_message_pane

0x8787,	// (0x000234c3) scroll_pane_cp10

0xad29,	// (0x00025a65) list_ai_message_pane_g1

0xad31,	// (0x00025a6d) list_ai_message_pane_g2

0x0001,

0xf92d,	// (0x0002a669) list_ai_message_pane_g

0xad39,	// (0x00025a75) list_ai_message_pane_t1_ParamLimits

0xad39,	// (0x00025a75) list_ai_message_pane_t1

0xad4e,	// (0x00025a8a) list_ai_message_pane_t2_ParamLimits

0xad4e,	// (0x00025a8a) list_ai_message_pane_t2

0xad63,	// (0x00025a9f) list_ai_message_pane_t3_ParamLimits

0xad63,	// (0x00025a9f) list_ai_message_pane_t3

0xad78,	// (0x00025ab4) list_ai_message_pane_t4_ParamLimits

0xad78,	// (0x00025ab4) list_ai_message_pane_t4

0x0003,

0xf932,	// (0x0002a66e) list_ai_message_pane_t_ParamLimits

0xf932,	// (0x0002a66e) list_ai_message_pane_t

0xad14,	// (0x00025a50) cell_ai_soft_ind_pane_ParamLimits

0xad14,	// (0x00025a50) cell_ai_soft_ind_pane

0x9399,	// (0x000240d5) cell_ai_soft_ind_pane_g1_ParamLimits

0x9399,	// (0x000240d5) cell_ai_soft_ind_pane_g1

0x7ccb,	// (0x00022a07) grid_highlight_cp1

0x93a6,	// (0x000240e2) text_secondary_cp56_ParamLimits

0x93a6,	// (0x000240e2) text_secondary_cp56

0xace9,	// (0x00025a25) example_general_pane_ParamLimits

0xace9,	// (0x00025a25) example_general_pane

0xacf5,	// (0x00025a31) example_parent_pane_g1_ParamLimits

0xacf5,	// (0x00025a31) example_parent_pane_g1

0xad01,	// (0x00025a3d) example_parent_pane_t1_ParamLimits

0xad01,	// (0x00025a3d) example_parent_pane_t1

0x68e5,	// (0x00021621) popup_preview_text_window_ParamLimits

0x68e5,	// (0x00021621) popup_preview_text_window

0x91d1,	// (0x00023f0d) list_single_pane_cp2_g4

0x80dc,	// (0x00022e18) bg_popup_preview_window_pane_ParamLimits

0x80dc,	// (0x00022e18) bg_popup_preview_window_pane

0xaa20,	// (0x0002575c) popup_preview_text_window_t1_ParamLimits

0xaa20,	// (0x0002575c) popup_preview_text_window_t1

0xaa3e,	// (0x0002577a) popup_preview_text_window_t2_ParamLimits

0xaa3e,	// (0x0002577a) popup_preview_text_window_t2

0xaa87,	// (0x000257c3) popup_preview_text_window_t3_ParamLimits

0xaa87,	// (0x000257c3) popup_preview_text_window_t3

0xaacc,	// (0x00025808) popup_preview_text_window_t4_ParamLimits

0xaacc,	// (0x00025808) popup_preview_text_window_t4

0x0004,

0xf901,	// (0x0002a63d) popup_preview_text_window_t_ParamLimits

0xf901,	// (0x0002a63d) popup_preview_text_window_t

0xab4a,	// (0x00025886) scroll_pane_cp11

0x9ad8,	// (0x00024814) bg_popup_preview_window_pane_g1

0xa9e0,	// (0x0002571c) bg_popup_preview_window_pane_g2

0xa9e8,	// (0x00025724) bg_popup_preview_window_pane_g3

0xa9f0,	// (0x0002572c) bg_popup_preview_window_pane_g4

0xa9f8,	// (0x00025734) bg_popup_preview_window_pane_g5

0xaa00,	// (0x0002573c) bg_popup_preview_window_pane_g6

0xaa08,	// (0x00025744) bg_popup_preview_window_pane_g7

0xaa10,	// (0x0002574c) bg_popup_preview_window_pane_g8

0x5b1d,	// (0x00020859) aid_popup_width_pane

0x68c3,	// (0x000215ff) popup_midp_note_alarm_window_ParamLimits

0x68c3,	// (0x000215ff) popup_midp_note_alarm_window

0x860b,	// (0x00023347) data_form_pane_ParamLimits

0x4f9d,	// (0x0001fcd9) form_field_data_pane_g1

0x4fa7,	// (0x0001fce3) form_field_data_pane_t1_ParamLimits

0x8617,	// (0x00023353) input_focus_pane_ParamLimits

0x4fbf,	// (0x0001fcfb) data_form_wide_pane_ParamLimits

0x4fd0,	// (0x0001fd0c) form_field_data_wide_pane_g1

0x4fdc,	// (0x0001fd18) form_field_data_wide_pane_t1_ParamLimits

0x8388,	// (0x000230c4) input_focus_pane_cp6_ParamLimits

0x8734,	// (0x00023470) input_popup_find_pane_g1_ParamLimits

0x8734,	// (0x00023470) input_popup_find_pane_g1

0x6085,	// (0x00020dc1) aid_navi_side_left_pane

0x609a,	// (0x00020dd6) aid_navi_side_right_pane

0xa3f9,	// (0x00025135) bg_popup_window_pane_cp30_ParamLimits

0xa3f9,	// (0x00025135) bg_popup_window_pane_cp30

0xa473,	// (0x000251af) popup_midp_note_alarm_window_g1_ParamLimits

0xa473,	// (0x000251af) popup_midp_note_alarm_window_g1

0xa4a3,	// (0x000251df) popup_midp_note_alarm_window_t1_ParamLimits

0xa4a3,	// (0x000251df) popup_midp_note_alarm_window_t1

0xa544,	// (0x00025280) popup_midp_note_alarm_window_t2_ParamLimits

0xa544,	// (0x00025280) popup_midp_note_alarm_window_t2

0xa5f2,	// (0x0002532e) popup_midp_note_alarm_window_t3_ParamLimits

0xa5f2,	// (0x0002532e) popup_midp_note_alarm_window_t3

0xa624,	// (0x00025360) popup_midp_note_alarm_window_t4_ParamLimits

0xa624,	// (0x00025360) popup_midp_note_alarm_window_t4

0xa64a,	// (0x00025386) popup_midp_note_alarm_window_t5_ParamLimits

0xa64a,	// (0x00025386) popup_midp_note_alarm_window_t5

0x000a,

0xf89e,	// (0x0002a5da) popup_midp_note_alarm_window_t_ParamLimits

0xf89e,	// (0x0002a5da) popup_midp_note_alarm_window_t

0xa6f6,	// (0x00025432) wait_bar_pane_cp1_ParamLimits

0xa6f6,	// (0x00025432) wait_bar_pane_cp1

0x7ccb,	// (0x00022a07) wait_anim_pane_copy1

0x7ccb,	// (0x00022a07) wait_border_pane_copy1

0xa0df,	// (0x00024e1b) wait_border_pane_g1_copy1

0x4ff6,	// (0x0001fd32) form_field_popup_pane_g1

0x4ffe,	// (0x0001fd3a) form_field_popup_pane_t1_ParamLimits

0x8617,	// (0x00023353) input_focus_pane_cp7_ParamLimits

0x8645,	// (0x00023381) list_form_pane_ParamLimits

0x5016,	// (0x0001fd52) form_field_popup_wide_pane_g1

0x501e,	// (0x0001fd5a) form_field_popup_wide_pane_t1_ParamLimits

0x8617,	// (0x00023353) input_focus_pane_cp8_ParamLimits

0x8651,	// (0x0002338d) list_form_wide_pane_ParamLimits

0xb218,	// (0x00025f54) aid_size_cell_graphic_pane

0x50a8,	// (0x0001fde4) data_form_pane_t1_ParamLimits

0x5397,	// (0x000200d3) data_form_wide_pane_t1_ParamLimits

0x96b3,	// (0x000243ef) bg_status_flat_pane

0x7d0b,	// (0x00022a47) title_pane_t1_ParamLimits

0x7d73,	// (0x00022aaf) title_pane_t2_ParamLimits

0x7d99,	// (0x00022ad5) title_pane_t3_ParamLimits

0xf55d,	// (0x0002a299) title_pane_t_ParamLimits

0x8c04,	// (0x00023940) level_1_signal_ParamLimits

0x8c16,	// (0x00023952) level_2_signal_ParamLimits

0x8c29,	// (0x00023965) level_3_signal_ParamLimits

0x8c3c,	// (0x00023978) level_4_signal_ParamLimits

0x8c4f,	// (0x0002398b) level_5_signal_ParamLimits

0x8c62,	// (0x0002399e) level_6_signal_ParamLimits

0x8c75,	// (0x000239b1) level_7_signal_ParamLimits

0x8c04,	// (0x00023940) level_1_battery_ParamLimits

0x8c16,	// (0x00023952) level_2_battery_ParamLimits

0x8c29,	// (0x00023965) level_3_battery_ParamLimits

0x8c3c,	// (0x00023978) level_4_battery_ParamLimits

0x8c4f,	// (0x0002398b) level_5_battery_ParamLimits

0x8c62,	// (0x0002399e) level_6_battery_ParamLimits

0x8c75,	// (0x000239b1) level_7_battery_ParamLimits

0xa2fe,	// (0x0002503a) bg_status_flat_pane_g1

0xa306,	// (0x00025042) bg_status_flat_pane_g2

0xa30e,	// (0x0002504a) bg_status_flat_pane_g3

0xa316,	// (0x00025052) bg_status_flat_pane_g4

0xa31e,	// (0x0002505a) bg_status_flat_pane_g5

0xa326,	// (0x00025062) bg_status_flat_pane_g6

0xa32e,	// (0x0002506a) bg_status_flat_pane_g7

0x7dc1,	// (0x00022afd) tabs_3_active_pane_t1_ParamLimits

0x7dc1,	// (0x00022afd) tabs_3_passive_pane_t1_ParamLimits

0x7ddb,	// (0x00022b17) tabs_4_active_pane_t1_ParamLimits

0x7ddb,	// (0x00022b17) tabs_4_1_passive_pane_t1_ParamLimits

0x87c8,	// (0x00023504) tabs_2_active_pane_t1_ParamLimits

0x87c8,	// (0x00023504) tabs_2_passive_pane_t1_ParamLimits

0x87da,	// (0x00023516) bg_active_tab_pane_cp4_ParamLimits

0x87e8,	// (0x00023524) tabs_2_long_active_pane_t1_ParamLimits

0x87fb,	// (0x00023537) bg_passive_tab_pane_cp4_ParamLimits

0x6b92,	// (0x000218ce) list_single_midp_graphic_pane_t1_ParamLimits

0x87da,	// (0x00023516) bg_active_tab_pane_cp5_ParamLimits

0x8807,	// (0x00023543) tabs_3_long_active_pane_t1_ParamLimits

0x87fb,	// (0x00023537) bg_passive_tab_pane_cp5_ParamLimits

0x6b92,	// (0x000218ce) list_single_midp_graphic_pane_t1

0x96b3,	// (0x000243ef) bg_status_flat_pane_ParamLimits

0x9776,	// (0x000244b2) indicator_pane_cp2_ParamLimits

0x9776,	// (0x000244b2) indicator_pane_cp2

0x989b,	// (0x000245d7) navi_pane_srt_ParamLimits

0x989b,	// (0x000245d7) navi_pane_srt

0x98bf,	// (0x000245fb) popup_clock_digital_analogue_window_cp1

0x7e88,	// (0x00022bc4) indicator_pane_t1

0x92a0,	// (0x00023fdc) copy_highlight_pane

0x92a0,	// (0x00023fdc) cursor_graphics_pane

0x92a0,	// (0x00023fdc) graphic_within_text_pane

0x92a0,	// (0x00023fdc) link_highlight_pane

0xab0d,	// (0x00025849) popup_preview_text_window_t5_ParamLimits

0xab0d,	// (0x00025849) popup_preview_text_window_t5

0x93c0,	// (0x000240fc) cursor_digital_pane

0x93c0,	// (0x000240fc) cursor_primary_pane

0x93d1,	// (0x0002410d) cursor_primary_small_pane

0x93d9,	// (0x00024115) cursor_secondary_pane

0x93e1,	// (0x0002411d) cursor_title_pane

0x93c0,	// (0x000240fc) link_highlight_digital_pane

0x93c8,	// (0x00024104) link_highlight_primary_pane

0x93d1,	// (0x0002410d) link_highlight_primary_small_pane

0x93d9,	// (0x00024115) link_highlight_secondary_pane

0x93e1,	// (0x0002411d) link_highlight_title_pane

0x93c0,	// (0x000240fc) copy_highlight_digital_pane

0x93c0,	// (0x000240fc) copy_highlight_primary_pane

0x93d1,	// (0x0002410d) copy_highlight_primary_small_pane

0x93d9,	// (0x00024115) copy_highlight_secondary_pane

0x93e1,	// (0x0002411d) copy_highlight_title_pane

0x93d9,	// (0x00024115) graphic_text_digital_pane

0xa39c,	// (0x000250d8) graphic_text_primary_pane

0xa3a5,	// (0x000250e1) graphic_text_primary_small_pane

0x93d1,	// (0x0002410d) graphic_text_secondary_pane

0x93c0,	// (0x000240fc) graphic_text_title_pane

0x93e9,	// (0x00024125) cursor_primary_pane_g1

0xa38e,	// (0x000250ca) cursor_text_primary_t1

0xa376,	// (0x000250b2) cursor_primary_small_pane_g1

0xa380,	// (0x000250bc) cursor_text_primary_small_t1

0xa35e,	// (0x0002509a) cursor_primary_small_pane_g1_copy1

0xa368,	// (0x000250a4) cursor_text_primary_small_t1_copy1

0xa346,	// (0x00025082) cursor_text_title_t1

0xa354,	// (0x00025090) cursor_title_pane_g1

0x93e9,	// (0x00024125) cursor_digital_pane_g1

0x93f3,	// (0x0002412f) cursor_text_digital_t1

0x9418,	// (0x00024154) link_highlight_primary_pane_g1

0xa2ef,	// (0x0002502b) link_highlight_primary_pane_t1

0x9401,	// (0x0002413d) link_highlight_primary_small_pane_g1

0x9409,	// (0x00024145) link_highlight_primary_small_pane_t1

0x9418,	// (0x00024154) link_highlight_secondary_pane_g1

0x9420,	// (0x0002415c) link_highlight_secondary_pane_t1

0xa263,	// (0x00024f9f) link_highlight_title_pane_g1

0xa26b,	// (0x00024fa7) link_highlight_title_pane_t1

0xa24c,	// (0x00024f88) link_highlight_digital_pane_g1

0xa254,	// (0x00024f90) link_highlight_digital_pane_t1

0xa124,	// (0x00024e60) copy_highlight_primary_pane_g1

0xa12c,	// (0x00024e68) copy_highlight_primary_pane_t1

0xa0fe,	// (0x00024e3a) copy_highlight_primary_small_pane_g1

0xa115,	// (0x00024e51) copy_highlight_primary_small_pane_t1

0x942f,	// (0x0002416b) copy_highlight_secondary_pane_g1

0x9437,	// (0x00024173) copy_highlight_secondary_pane_t1

0xa0fe,	// (0x00024e3a) copy_highlight_title_pane_g1

0xa106,	// (0x00024e42) copy_highlight_title_pane_t1

0xa124,	// (0x00024e60) copy_highlight_digital_pane_g1

0xb3e2,	// (0x0002611e) copy_highlight_digital_pane_t1

0xb336,	// (0x00026072) graphic_text_primary_pane_g1

0xb3c6,	// (0x00026102) graphic_text_primary_pane_t1

0xb3d4,	// (0x00026110) graphic_text_primary_pane_t2

0x0001,

0xf9cd,	// (0x0002a709) graphic_text_primary_pane_t

0xb3a2,	// (0x000260de) graphic_text_primary_small_pane_g1

0xb3aa,	// (0x000260e6) graphic_text_primary_small_pane_t1

0xb3b8,	// (0x000260f4) graphic_text_primary_small_pane_t2

0x0001,

0xf9c8,	// (0x0002a704) graphic_text_primary_small_pane_t

0xb37e,	// (0x000260ba) graphic_text_secondary_pane_g1

0xb386,	// (0x000260c2) graphic_text_secondary_pane_t1

0xb394,	// (0x000260d0) graphic_text_secondary_pane_t2

0x0001,

0xf9c3,	// (0x0002a6ff) graphic_text_secondary_pane_t

0xb35a,	// (0x00026096) graphic_text_title_pane_g1

0xb362,	// (0x0002609e) graphic_text_title_pane_t1

0xb370,	// (0x000260ac) graphic_text_title_pane_t2

0x0001,

0xf9be,	// (0x0002a6fa) graphic_text_title_pane_t

0xb336,	// (0x00026072) graphic_text_digital_pane_g1

0xb33e,	// (0x0002607a) graphic_text_digital_pane_t1

0xb34c,	// (0x00026088) graphic_text_digital_pane_t2

0x0001,

0xf9b9,	// (0x0002a6f5) graphic_text_digital_pane_t

0x7dab,	// (0x00022ae7) navi_icon_pane_srt_ParamLimits

0x7dab,	// (0x00022ae7) navi_icon_pane_srt

0x7ccb,	// (0x00022a07) navi_midp_pane_srt

0x7ccb,	// (0x00022a07) navi_navi_pane_srt

0x7dab,	// (0x00022ae7) navi_text_pane_srt_ParamLimits

0x7dab,	// (0x00022ae7) navi_text_pane_srt

0xb301,	// (0x0002603d) navi_navi_icon_text_pane_srt

0xb309,	// (0x00026045) navi_navi_pane_srt_g1_ParamLimits

0xb309,	// (0x00026045) navi_navi_pane_srt_g1

0xb31b,	// (0x00026057) navi_navi_pane_srt_g2_ParamLimits

0xb31b,	// (0x00026057) navi_navi_pane_srt_g2

0x0001,

0xf9b4,	// (0x0002a6f0) navi_navi_pane_srt_g_ParamLimits

0xf9b4,	// (0x0002a6f0) navi_navi_pane_srt_g

0xb32d,	// (0x00026069) navi_navi_tabs_pane_srt

0xb301,	// (0x0002603d) navi_navi_text_pane_srt

0xb301,	// (0x0002603d) navi_navi_volume_pane_srt

0xb2f2,	// (0x0002602e) navi_navi_text_pane_srt_t1

0x6eca,	// (0x00021c06) navi_navi_volume_pane_srt_g1

0x6ed2,	// (0x00021c0e) volume_small_pane_srt_ParamLimits

0x6ed2,	// (0x00021c0e) volume_small_pane_srt

0x6365,	// (0x000210a1) volume_small_pane_srt_g1_ParamLimits

0x6365,	// (0x000210a1) volume_small_pane_srt_g1

0x6375,	// (0x000210b1) volume_small_pane_srt_g2_ParamLimits

0x6375,	// (0x000210b1) volume_small_pane_srt_g2

0x6386,	// (0x000210c2) volume_small_pane_srt_g3_ParamLimits

0x6386,	// (0x000210c2) volume_small_pane_srt_g3

0x6397,	// (0x000210d3) volume_small_pane_srt_g4_ParamLimits

0x6397,	// (0x000210d3) volume_small_pane_srt_g4

0x63a8,	// (0x000210e4) volume_small_pane_srt_g5_ParamLimits

0x63a8,	// (0x000210e4) volume_small_pane_srt_g5

0x63b9,	// (0x000210f5) volume_small_pane_srt_g6_ParamLimits

0x63b9,	// (0x000210f5) volume_small_pane_srt_g6

0x63ca,	// (0x00021106) volume_small_pane_srt_g7_ParamLimits

0x63ca,	// (0x00021106) volume_small_pane_srt_g7

0x63db,	// (0x00021117) volume_small_pane_srt_g8_ParamLimits

0x63db,	// (0x00021117) volume_small_pane_srt_g8

0x63ec,	// (0x00021128) volume_small_pane_srt_g9_ParamLimits

0x63ec,	// (0x00021128) volume_small_pane_srt_g9

0x63fd,	// (0x00021139) volume_small_pane_srt_g10_ParamLimits

0x63fd,	// (0x00021139) volume_small_pane_srt_g10

0x0009,

0xf763,	// (0x0002a49f) volume_small_pane_srt_g_ParamLimits

0xf763,	// (0x0002a49f) volume_small_pane_srt_g

0x8185,	// (0x00022ec1) query_popup_data_pane_cp2

0xb2d8,	// (0x00026014) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb2d8,	// (0x00026014) navi_navi_icon_text_pane_srt_t1

0xa39c,	// (0x000250d8) navi_tabs_2_long_pane_srt

0xa39c,	// (0x000250d8) navi_tabs_2_pane_srt

0xa39c,	// (0x000250d8) navi_tabs_3_long_pane_srt

0xa39c,	// (0x000250d8) navi_tabs_3_pane_srt

0xa39c,	// (0x000250d8) navi_tabs_4_pane_srt

0x6eaa,	// (0x00021be6) tabs_2_active_pane_srt_ParamLimits

0x6eaa,	// (0x00021be6) tabs_2_active_pane_srt

0x6eba,	// (0x00021bf6) tabs_2_passive_pane_srt_ParamLimits

0x6eba,	// (0x00021bf6) tabs_2_passive_pane_srt

0x95e0,	// (0x0002431c) bg_passive_tab_pane_cp1_srt_ParamLimits

0x95e0,	// (0x0002431c) bg_passive_tab_pane_cp1_srt

0xb2a4,	// (0x00025fe0) bg_passive_tab_pane_g1_cp1_srt

0x8eed,	// (0x00023c29) bg_passive_tab_pane_g2_cp1_srt

0xb2ad,	// (0x00025fe9) bg_passive_tab_pane_g3_cp1_srt

0x7dab,	// (0x00022ae7) bg_active_tab_pane_cp1_srt_ParamLimits

0x7dab,	// (0x00022ae7) bg_active_tab_pane_cp1_srt

0xb2b6,	// (0x00025ff2) tabs_2_active_pane_srt_g1

0xb2be,	// (0x00025ffa) tabs_2_active_pane_srt_t1_ParamLimits

0xb2be,	// (0x00025ffa) tabs_2_active_pane_srt_t1

0xb2a4,	// (0x00025fe0) bg_active_tab_pane_g1_cp1_srt

0x8eed,	// (0x00023c29) bg_active_tab_pane_g2_cp1_srt

0xb2ad,	// (0x00025fe9) bg_active_tab_pane_g3_cp1_srt

0x6e77,	// (0x00021bb3) tabs_3_active_pane_srt_ParamLimits

0x6e77,	// (0x00021bb3) tabs_3_active_pane_srt

0x6e88,	// (0x00021bc4) tabs_3_passive_pane_cp_srt_ParamLimits

0x6e88,	// (0x00021bc4) tabs_3_passive_pane_cp_srt

0x6e99,	// (0x00021bd5) tabs_3_passive_pane_srt_ParamLimits

0x6e99,	// (0x00021bd5) tabs_3_passive_pane_srt

0x95e0,	// (0x0002431c) bg_passive_tab_pane_cp2_srt_ParamLimits

0x95e0,	// (0x0002431c) bg_passive_tab_pane_cp2_srt

0x9446,	// (0x00024182) bg_passive_tab_pane_g1_cp2_srt

0x8eed,	// (0x00023c29) bg_passive_tab_pane_g2_cp2_srt

0x944f,	// (0x0002418b) bg_passive_tab_pane_g3_cp2_srt

0x7dab,	// (0x00022ae7) bg_active_tab_pane_cp2_srt_ParamLimits

0x7dab,	// (0x00022ae7) bg_active_tab_pane_cp2_srt

0xb28a,	// (0x00025fc6) tabs_3_active_pane_srt_g1

0xb292,	// (0x00025fce) tabs_3_active_pane_srt_t1_ParamLimits

0xb292,	// (0x00025fce) tabs_3_active_pane_srt_t1

0x9446,	// (0x00024182) bg_active_tab_pane_g1_cp2_srt

0x8eed,	// (0x00023c29) bg_active_tab_pane_g2_cp2_srt

0x944f,	// (0x0002418b) bg_active_tab_pane_g3_cp2_srt

0x6e2f,	// (0x00021b6b) tabs_4_active_pane_srt_ParamLimits

0x6e2f,	// (0x00021b6b) tabs_4_active_pane_srt

0x6e41,	// (0x00021b7d) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6e41,	// (0x00021b7d) tabs_4_passive_pane_cp2_srt

0x6562,	// (0x0002129e) aid_size_cell_toolbar

0x87fb,	// (0x00023537) main_idle_act_pane_ParamLimits

0x66f9,	// (0x00021435) popup_large_graphic_colour_window_ParamLimits

0x6a60,	// (0x0002179c) popup_toolbar_window_ParamLimits

0x6a60,	// (0x0002179c) popup_toolbar_window

0xb0c7,	// (0x00025e03) list_single_graphic_2heading_pane_ParamLimits

0xb0c7,	// (0x00025e03) list_single_graphic_2heading_pane

0x89b7,	// (0x000236f3) aid_size_cell_apps_grid_lsc_pane

0x89c9,	// (0x00023705) aid_size_cell_apps_grid_prt_pane

0x95e0,	// (0x0002431c) bg_wml_button_pane_cp1_ParamLimits

0x95e0,	// (0x0002431c) bg_wml_button_pane_cp1

0x9d82,	// (0x00024abe) form_midp_field_text_pane_t1_ParamLimits

0x9b4c,	// (0x00024888) input_focus_pane_cp050_ParamLimits

0x9db9,	// (0x00024af5) list_midp_form_text_pane_ParamLimits

0x9d5f,	// (0x00024a9b) input_focus_pane_cp051_ParamLimits

0x9d73,	// (0x00024aaf) list_midp_choice_pane_ParamLimits

0x9c05,	// (0x00024941) list_single_2graphic_pane_cp3_ParamLimits

0x9c05,	// (0x00024941) list_single_2graphic_pane_cp3

0x9c29,	// (0x00024965) list_single_midp_graphic_pane_ParamLimits

0x9c29,	// (0x00024965) list_single_midp_graphic_pane

0x520a,	// (0x0001ff46) list_single_graphic_2heading_pane_g1_ParamLimits

0x520a,	// (0x0001ff46) list_single_graphic_2heading_pane_g1

0x5216,	// (0x0001ff52) list_single_graphic_2heading_pane_g4_ParamLimits

0x5216,	// (0x0001ff52) list_single_graphic_2heading_pane_g4

0x5222,	// (0x0001ff5e) list_single_graphic_2heading_pane_g5_ParamLimits

0x5222,	// (0x0001ff5e) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b6,	// (0x0002a4f2) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b6,	// (0x0002a4f2) list_single_graphic_2heading_pane_g

0x522e,	// (0x0001ff6a) list_single_graphic_2heading_pane_t1_ParamLimits

0x522e,	// (0x0001ff6a) list_single_graphic_2heading_pane_t1

0x5242,	// (0x0001ff7e) list_single_graphic_2heading_pane_t2_ParamLimits

0x5242,	// (0x0001ff7e) list_single_graphic_2heading_pane_t2

0x525e,	// (0x0001ff9a) list_single_graphic_2heading_pane_t3_ParamLimits

0x525e,	// (0x0001ff9a) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bd,	// (0x0002a4f9) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bd,	// (0x0002a4f9) list_single_graphic_2heading_pane_t

0x9a16,	// (0x00024752) bg_popup_sub_pane_cp2

0x9a40,	// (0x0002477c) grid_toobar_pane

0x6b0d,	// (0x00021849) cell_toolbar_pane_ParamLimits

0x6b0d,	// (0x00021849) cell_toolbar_pane

0x9a7c,	// (0x000247b8) cell_toolbar_pane_g1_ParamLimits

0x9a7c,	// (0x000247b8) cell_toolbar_pane_g1

0x9a90,	// (0x000247cc) cell_toolbar_pane_g2_ParamLimits

0x9a90,	// (0x000247cc) cell_toolbar_pane_g2

0x0001,

0xf7c4,	// (0x0002a500) cell_toolbar_pane_g_ParamLimits

0xf7c4,	// (0x0002a500) cell_toolbar_pane_g

0x9ab2,	// (0x000247ee) grid_highlight_pane_cp2_ParamLimits

0x9ab2,	// (0x000247ee) grid_highlight_pane_cp2

0x9acc,	// (0x00024808) toolbar_button_pane

0x9ad8,	// (0x00024814) toolbar_button_pane_g1

0x9ae0,	// (0x0002481c) toolbar_button_pane_g2

0x9ae8,	// (0x00024824) toolbar_button_pane_g3

0x9af0,	// (0x0002482c) toolbar_button_pane_g4

0x9af8,	// (0x00024834) toolbar_button_pane_g5

0x9b00,	// (0x0002483c) toolbar_button_pane_g6

0x9b08,	// (0x00024844) toolbar_button_pane_g7

0x9b10,	// (0x0002484c) toolbar_button_pane_g8

0x9b18,	// (0x00024854) toolbar_button_pane_g9

0x0009,

0xf7c9,	// (0x0002a505) toolbar_button_pane_g

0x6b45,	// (0x00021881) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6b45,	// (0x00021881) list_single_2graphic_pane_g1_cp3

0x6b51,	// (0x0002188d) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6b51,	// (0x0002188d) list_single_2graphic_pane_g2_cp3

0x6b62,	// (0x0002189e) list_single_2graphic_pane_g3_cp3

0x6b6a,	// (0x000218a6) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6b6a,	// (0x000218a6) list_single_2graphic_pane_g4_cp3

0x6b76,	// (0x000218b2) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6b76,	// (0x000218b2) list_single_2graphic_pane_t1_cp3

0x9ff5,	// (0x00024d31) list_single_midp_graphic_pane_g2_ParamLimits

0x9ff5,	// (0x00024d31) list_single_midp_graphic_pane_g2

0x656a,	// (0x000212a6) aid_zoom_text_primary

0x51de,	// (0x0001ff1a) aid_zoom_text_secondary

0x9503,	// (0x0002423f) status_small_pane_g7_ParamLimits

0x9503,	// (0x0002423f) status_small_pane_g7

0x9526,	// (0x00024262) status_small_pane_t1_ParamLimits

0x7ce2,	// (0x00022a1e) title_pane_g2

0x0003,

0xf554,	// (0x0002a290) title_pane_g

0x8226,	// (0x00022f62) aid_size_cell_colour_1_pane_ParamLimits

0x8226,	// (0x00022f62) aid_size_cell_colour_1_pane

0x823a,	// (0x00022f76) aid_size_cell_colour_2_pane_ParamLimits

0x823a,	// (0x00022f76) aid_size_cell_colour_2_pane

0x824e,	// (0x00022f8a) aid_size_cell_colour_3_pane_ParamLimits

0x824e,	// (0x00022f8a) aid_size_cell_colour_3_pane

0x8262,	// (0x00022f9e) aid_size_cell_colour_4_pane_ParamLimits

0x8262,	// (0x00022f9e) aid_size_cell_colour_4_pane

0x5fc2,	// (0x00020cfe) title_pane_stacon_g1_ParamLimits

0x5fc2,	// (0x00020cfe) title_pane_stacon_g1

0xa183,	// (0x00024ebf) popup_note_wait_window_g3_ParamLimits

0xa183,	// (0x00024ebf) popup_note_wait_window_g3

0xa1f9,	// (0x00024f35) popup_note_wait_window_t5_ParamLimits

0xa1f9,	// (0x00024f35) popup_note_wait_window_t5

0x7ccb,	// (0x00022a07) main_feb_china_hwr_fs_writing_pane

0x65de,	// (0x0002131a) popup_feb_china_hwr_fs_window_ParamLimits

0x65de,	// (0x0002131a) popup_feb_china_hwr_fs_window

0x6ba8,	// (0x000218e4) aid_size_cell_hwr_fs_ParamLimits

0x6ba8,	// (0x000218e4) aid_size_cell_hwr_fs

0x9b4c,	// (0x00024888) bg_popup_sub_pane_cp3_ParamLimits

0x9b4c,	// (0x00024888) bg_popup_sub_pane_cp3

0x6bbd,	// (0x000218f9) grid_hwr_fs_pane_ParamLimits

0x6bbd,	// (0x000218f9) grid_hwr_fs_pane

0x6bd5,	// (0x00021911) linegrid_hwr_fs_pane_ParamLimits

0x6bd5,	// (0x00021911) linegrid_hwr_fs_pane

0x6be5,	// (0x00021921) cell_hwr_fs_pane_ParamLimits

0x6be5,	// (0x00021921) cell_hwr_fs_pane

0x9b58,	// (0x00024894) linegrid_hwr_fs_pane_g1_ParamLimits

0x9b58,	// (0x00024894) linegrid_hwr_fs_pane_g1

0x9b64,	// (0x000248a0) linegrid_hwr_fs_pane_g2_ParamLimits

0x9b64,	// (0x000248a0) linegrid_hwr_fs_pane_g2

0x9b76,	// (0x000248b2) linegrid_hwr_fs_pane_g3_ParamLimits

0x9b76,	// (0x000248b2) linegrid_hwr_fs_pane_g3

0x6c07,	// (0x00021943) linegrid_hwr_fs_pane_g4_ParamLimits

0x6c07,	// (0x00021943) linegrid_hwr_fs_pane_g4

0x6c21,	// (0x0002195d) linegrid_hwr_fs_pane_g5_ParamLimits

0x6c21,	// (0x0002195d) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f4,	// (0x0002a530) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f4,	// (0x0002a530) linegrid_hwr_fs_pane_g

0x9b82,	// (0x000248be) cell_hwr_fs_pane_g1_ParamLimits

0x9b82,	// (0x000248be) cell_hwr_fs_pane_g1

0x994d,	// (0x00024689) cell_hwr_fs_pane_g2_ParamLimits

0x994d,	// (0x00024689) cell_hwr_fs_pane_g2

0x9b98,	// (0x000248d4) cell_hwr_fs_pane_g3_ParamLimits

0x9b98,	// (0x000248d4) cell_hwr_fs_pane_g3

0x9ba5,	// (0x000248e1) cell_hwr_fs_pane_g4_ParamLimits

0x9ba5,	// (0x000248e1) cell_hwr_fs_pane_g4

0x0003,

0xf7ff,	// (0x0002a53b) cell_hwr_fs_pane_g_ParamLimits

0xf7ff,	// (0x0002a53b) cell_hwr_fs_pane_g

0x6c37,	// (0x00021973) cell_hwr_fs_pane_t1

0x7ccb,	// (0x00022a07) grid_highlight_pane_cp6

0x7ccb,	// (0x00022a07) main_idle_act2_pane

0x876e,	// (0x000234aa) aid_inside_area_popup_secondary

0xa830,	// (0x0002556c) aid_inside_area_window_primary_ParamLimits

0xa830,	// (0x0002556c) aid_inside_area_window_primary

0xb3f1,	// (0x0002612d) ai2_news_ticker_pane

0xb3f9,	// (0x00026135) aid_size_cell_ai1_link_ParamLimits

0xb3f9,	// (0x00026135) aid_size_cell_ai1_link

0xb413,	// (0x0002614f) popup_ai2_data_window_ParamLimits

0xb413,	// (0x0002614f) popup_ai2_data_window

0xb429,	// (0x00026165) popup_ai2_link_window_ParamLimits

0xb429,	// (0x00026165) popup_ai2_link_window

0x9b4c,	// (0x00024888) bg_popup_sub_pane_cp4_ParamLimits

0x9b4c,	// (0x00024888) bg_popup_sub_pane_cp4

0xb43d,	// (0x00026179) grid_ai2_link_pane_ParamLimits

0xb43d,	// (0x00026179) grid_ai2_link_pane

0xb454,	// (0x00026190) popup_ai2_link_window_g1_ParamLimits

0xb454,	// (0x00026190) popup_ai2_link_window_g1

0xb460,	// (0x0002619c) popup_ai2_link_window_g2_ParamLimits

0xb460,	// (0x0002619c) popup_ai2_link_window_g2

0x0001,

0xf9d2,	// (0x0002a70e) popup_ai2_link_window_g_ParamLimits

0xf9d2,	// (0x0002a70e) popup_ai2_link_window_g

0xb46f,	// (0x000261ab) ai2_mp_button_pane

0xb477,	// (0x000261b3) ai2_mp_volume_pane

0x9d5f,	// (0x00024a9b) bg_popup_sub_pane_cp5_ParamLimits

0x9d5f,	// (0x00024a9b) bg_popup_sub_pane_cp5

0xb47f,	// (0x000261bb) heading_ai2_gene_pane_ParamLimits

0xb47f,	// (0x000261bb) heading_ai2_gene_pane

0xb48b,	// (0x000261c7) list_ai2_gene_pane_ParamLimits

0xb48b,	// (0x000261c7) list_ai2_gene_pane

0xb4d3,	// (0x0002620f) cell_ai2_link_pane_ParamLimits

0xb4d3,	// (0x0002620f) cell_ai2_link_pane

0xb4e9,	// (0x00026225) cell_ai2_link_pane_g1

0x7ccb,	// (0x00022a07) grid_highlight_pane_cp7

0x6ee7,	// (0x00021c23) ai2_mp_volume_pane_g1

0xb5b9,	// (0x000262f5) ai2_mp_volume_pane_g2

0xb52e,	// (0x0002626a) list_ai2_gene_pane_t1

0xb5c1,	// (0x000262fd) ai2_mp_volume_pane_g3

0x0002,

0xf9eb,	// (0x0002a727) ai2_mp_volume_pane_g

0x6eef,	// (0x00021c2b) volume_small_pane_cp3

0xb5c9,	// (0x00026305) aid_size_cell_ai2_button

0xb5d1,	// (0x0002630d) grid_ai2_button_pane

0xb5da,	// (0x00026316) cell_ai2_button_pane_ParamLimits

0xb5da,	// (0x00026316) cell_ai2_button_pane

0x7cc1,	// (0x000229fd) cell_ai2_button_pane_g1

0x7ccb,	// (0x00022a07) grid_highlight_pane_cp8

0xb579,	// (0x000262b5) ai2_gene_pane_t1_ParamLimits

0xb579,	// (0x000262b5) ai2_gene_pane_t1

0x6558,	// (0x00021294) aid_height_parent_landscape

0xaebc,	// (0x00025bf8) aid_height_set_list

0xaecd,	// (0x00025c09) aid_size_parent

0xb218,	// (0x00025f54) aid_size_cell_graphic_pane_ParamLimits

0xb49b,	// (0x000261d7) popup_ai2_data_window_g1_ParamLimits

0xb49b,	// (0x000261d7) popup_ai2_data_window_g1

0xb4a7,	// (0x000261e3) ai2_news_ticker_pane_g1

0xb4af,	// (0x000261eb) ai2_news_ticker_pane_g2

0x0001,

0xf9d7,	// (0x0002a713) ai2_news_ticker_pane_g

0xb4b7,	// (0x000261f3) ai2_news_ticker_pane_t1

0xb4c5,	// (0x00026201) ai2_news_ticker_pane_t2

0x0001,

0xf9dc,	// (0x0002a718) ai2_news_ticker_pane_t

0xb4f2,	// (0x0002622e) heading_ai2_gene_pane_g1

0xb4fa,	// (0x00026236) heading_ai2_gene_pane_t1_ParamLimits

0xb4fa,	// (0x00026236) heading_ai2_gene_pane_t1

0xb50f,	// (0x0002624b) list_highlight_pane_cp6

0xb517,	// (0x00026253) ai2_gene_pane_ParamLimits

0xb517,	// (0x00026253) ai2_gene_pane

0xb53c,	// (0x00026278) list_ai2_gene_pane_t2

0x0001,

0xf9e1,	// (0x0002a71d) list_ai2_gene_pane_t

0xb54a,	// (0x00026286) list_highlight_pane_cp8_ParamLimits

0xb54a,	// (0x00026286) list_highlight_pane_cp8

0xb55b,	// (0x00026297) ai2_gene_pane_g1_ParamLimits

0xb55b,	// (0x00026297) ai2_gene_pane_g1

0xb56d,	// (0x000262a9) ai2_gene_pane_g2_ParamLimits

0xb56d,	// (0x000262a9) ai2_gene_pane_g2

0x0001,

0xf9e6,	// (0x0002a722) ai2_gene_pane_g_ParamLimits

0xf9e6,	// (0x0002a722) ai2_gene_pane_g

0x85ad,	// (0x000232e9) scroll_pane_cp12

0x6517,	// (0x00021253) control_pane_t3_ParamLimits

0x6517,	// (0x00021253) control_pane_t3

0x9517,	// (0x00024253) status_small_pane_g8_ParamLimits

0x9517,	// (0x00024253) status_small_pane_g8

0x66c4,	// (0x00021400) popup_find_window_ParamLimits

0x68d7,	// (0x00021613) popup_note_image_window_ParamLimits

0x520a,	// (0x0001ff46) list_double2_graphic_pane_vc_g1_ParamLimits

0x520a,	// (0x0001ff46) list_double2_graphic_pane_vc_g1

0x5216,	// (0x0001ff52) list_double2_graphic_pane_vc_g2_ParamLimits

0x5216,	// (0x0001ff52) list_double2_graphic_pane_vc_g2

0x5222,	// (0x0001ff5e) list_double2_graphic_pane_vc_g3_ParamLimits

0x5222,	// (0x0001ff5e) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b6,	// (0x0002a4f2) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b6,	// (0x0002a4f2) list_double2_graphic_pane_vc_g

0x5276,	// (0x0001ffb2) list_double2_graphic_pane_vc_t1_ParamLimits

0x5276,	// (0x0001ffb2) list_double2_graphic_pane_vc_t1

0x5216,	// (0x0001ff52) list_single_heading_pane_vc_g1_ParamLimits

0x5216,	// (0x0001ff52) list_single_heading_pane_vc_g1

0x5222,	// (0x0001ff5e) list_single_heading_pane_vc_g2_ParamLimits

0x5222,	// (0x0001ff5e) list_single_heading_pane_vc_g2

0x0001,

0xf7de,	// (0x0002a51a) list_single_heading_pane_vc_g_ParamLimits

0xf7de,	// (0x0002a51a) list_single_heading_pane_vc_g

0x528c,	// (0x0001ffc8) list_single_heading_pane_vc_t1_ParamLimits

0x528c,	// (0x0001ffc8) list_single_heading_pane_vc_t1

0x52a4,	// (0x0001ffe0) list_single_heading_pane_vc_t2_ParamLimits

0x52a4,	// (0x0001ffe0) list_single_heading_pane_vc_t2

0x0001,

0xf7e3,	// (0x0002a51f) list_single_heading_pane_vc_t_ParamLimits

0xf7e3,	// (0x0002a51f) list_single_heading_pane_vc_t

0x52b8,	// (0x0001fff4) list_setting_number_pane_vc_g1_ParamLimits

0x52b8,	// (0x0001fff4) list_setting_number_pane_vc_g1

0x52c4,	// (0x00020000) list_setting_number_pane_vc_g2_ParamLimits

0x52c4,	// (0x00020000) list_setting_number_pane_vc_g2

0x0001,

0xf7e8,	// (0x0002a524) list_setting_number_pane_vc_g_ParamLimits

0xf7e8,	// (0x0002a524) list_setting_number_pane_vc_g

0x52d0,	// (0x0002000c) list_setting_number_pane_vc_t1_ParamLimits

0x52d0,	// (0x0002000c) list_setting_number_pane_vc_t1

0x52e4,	// (0x00020020) list_setting_number_pane_vc_t2_ParamLimits

0x52e4,	// (0x00020020) list_setting_number_pane_vc_t2

0x5300,	// (0x0002003c) list_setting_number_pane_vc_t3_ParamLimits

0x5300,	// (0x0002003c) list_setting_number_pane_vc_t3

0x0002,

0xf7ed,	// (0x0002a529) list_setting_number_pane_vc_t_ParamLimits

0xf7ed,	// (0x0002a529) list_setting_number_pane_vc_t

0x531e,	// (0x0002005a) set_value_pane_vc_ParamLimits

0x531e,	// (0x0002005a) set_value_pane_vc

0xb0c7,	// (0x00025e03) list_double2_graphic_pane_vc_ParamLimits

0xb0c7,	// (0x00025e03) list_double2_graphic_pane_vc

0xb0c7,	// (0x00025e03) list_double2_large_graphic_pane_vc_ParamLimits

0xb0c7,	// (0x00025e03) list_double2_large_graphic_pane_vc

0xb0c7,	// (0x00025e03) list_double2_pane_vc_ParamLimits

0xb0c7,	// (0x00025e03) list_double2_pane_vc

0xb0c7,	// (0x00025e03) list_double_graphic_heading_pane_vc_ParamLimits

0xb0c7,	// (0x00025e03) list_double_graphic_heading_pane_vc

0xb0c7,	// (0x00025e03) list_double_graphic_pane_vc_ParamLimits

0xb0c7,	// (0x00025e03) list_double_graphic_pane_vc

0xb0c7,	// (0x00025e03) list_double_heading_pane_vc_ParamLimits

0xb0c7,	// (0x00025e03) list_double_heading_pane_vc

0xb0c7,	// (0x00025e03) list_double_large_graphic_pane_vc_ParamLimits

0xb0c7,	// (0x00025e03) list_double_large_graphic_pane_vc

0xb0c7,	// (0x00025e03) list_double_number_pane_vc_ParamLimits

0xb0c7,	// (0x00025e03) list_double_number_pane_vc

0xb0c7,	// (0x00025e03) list_double_pane_vc_ParamLimits

0xb0c7,	// (0x00025e03) list_double_pane_vc

0xb0c7,	// (0x00025e03) list_double_time_pane_vc_ParamLimits

0xb0c7,	// (0x00025e03) list_double_time_pane_vc

0xb0c7,	// (0x00025e03) list_setting_number_pane_vc_ParamLimits

0xb0c7,	// (0x00025e03) list_setting_number_pane_vc

0xb0c7,	// (0x00025e03) list_setting_pane_vc_ParamLimits

0xb0c7,	// (0x00025e03) list_setting_pane_vc

0xb0c7,	// (0x00025e03) list_single_graphic_heading_pane_vc_ParamLimits

0xb0c7,	// (0x00025e03) list_single_graphic_heading_pane_vc

0xb0c7,	// (0x00025e03) list_single_heading_pane_vc_ParamLimits

0xb0c7,	// (0x00025e03) list_single_heading_pane_vc

0x53f7,	// (0x00020133) list_single_number_heading_pane_vc_ParamLimits

0x53f7,	// (0x00020133) list_single_number_heading_pane_vc

0x520a,	// (0x0001ff46) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x520a,	// (0x0001ff46) list_double_graphic_heading_pane_vc_g1

0x5216,	// (0x0001ff52) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x5216,	// (0x0001ff52) list_double_graphic_heading_pane_vc_g2

0x5222,	// (0x0001ff5e) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x5222,	// (0x0001ff5e) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7b6,	// (0x0002a4f2) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7b6,	// (0x0002a4f2) list_double_graphic_heading_pane_vc_g

0x5478,	// (0x000201b4) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5478,	// (0x000201b4) list_double_graphic_heading_pane_vc_t1

0x5494,	// (0x000201d0) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5494,	// (0x000201d0) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f2,	// (0x0002a72e) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f2,	// (0x0002a72e) list_double_graphic_heading_pane_vc_t

0x52b8,	// (0x0001fff4) list_setting_pane_vc_g1_ParamLimits

0x52b8,	// (0x0001fff4) list_setting_pane_vc_g1

0x52c4,	// (0x00020000) list_setting_pane_vc_g2_ParamLimits

0x52c4,	// (0x00020000) list_setting_pane_vc_g2

0x0001,

0xf7e8,	// (0x0002a524) list_setting_pane_vc_g_ParamLimits

0xf7e8,	// (0x0002a524) list_setting_pane_vc_g

0x54b2,	// (0x000201ee) list_setting_pane_vc_t1_ParamLimits

0x54b2,	// (0x000201ee) list_setting_pane_vc_t1

0x54ce,	// (0x0002020a) list_setting_pane_vc_t2_ParamLimits

0x54ce,	// (0x0002020a) list_setting_pane_vc_t2

0x0001,

0xfa20,	// (0x0002a75c) list_setting_pane_vc_t_ParamLimits

0xfa20,	// (0x0002a75c) list_setting_pane_vc_t

0x531e,	// (0x0002005a) set_value_pane_cp_vc_ParamLimits

0x531e,	// (0x0002005a) set_value_pane_cp_vc

0x5216,	// (0x0001ff52) list_single_number_heading_pane_vc_g1_ParamLimits

0x5216,	// (0x0001ff52) list_single_number_heading_pane_vc_g1

0x5222,	// (0x0001ff5e) list_single_number_heading_pane_vc_g2_ParamLimits

0x5222,	// (0x0001ff5e) list_single_number_heading_pane_vc_g2

0x0001,

0xf7de,	// (0x0002a51a) list_single_number_heading_pane_vc_g_ParamLimits

0xf7de,	// (0x0002a51a) list_single_number_heading_pane_vc_g

0x528c,	// (0x0001ffc8) list_single_number_heading_pane_vc_t1_ParamLimits

0x528c,	// (0x0001ffc8) list_single_number_heading_pane_vc_t1

0x54ea,	// (0x00020226) list_single_number_heading_pane_vc_t2_ParamLimits

0x54ea,	// (0x00020226) list_single_number_heading_pane_vc_t2

0x54fe,	// (0x0002023a) list_single_number_heading_pane_vc_t3_ParamLimits

0x54fe,	// (0x0002023a) list_single_number_heading_pane_vc_t3

0x0002,

0xfa25,	// (0x0002a761) list_single_number_heading_pane_vc_t_ParamLimits

0xfa25,	// (0x0002a761) list_single_number_heading_pane_vc_t

0x520a,	// (0x0001ff46) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x520a,	// (0x0001ff46) list_single_graphic_heading_pane_vc_g1

0x5216,	// (0x0001ff52) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x5216,	// (0x0001ff52) list_single_graphic_heading_pane_vc_g4

0x5222,	// (0x0001ff5e) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x5222,	// (0x0001ff5e) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b6,	// (0x0002a4f2) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b6,	// (0x0002a4f2) list_single_graphic_heading_pane_vc_g

0x528c,	// (0x0001ffc8) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x528c,	// (0x0001ffc8) list_single_graphic_heading_pane_vc_t1

0x5510,	// (0x0002024c) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5510,	// (0x0002024c) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2c,	// (0x0002a768) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2c,	// (0x0002a768) list_single_graphic_heading_pane_vc_t

0x5216,	// (0x0001ff52) list_double2_pane_vc_g1_ParamLimits

0x5216,	// (0x0001ff52) list_double2_pane_vc_g1

0x5222,	// (0x0001ff5e) list_double2_pane_vc_g2_ParamLimits

0x5222,	// (0x0001ff5e) list_double2_pane_vc_g2

0x0001,

0xf7de,	// (0x0002a51a) list_double2_pane_vc_g_ParamLimits

0xf7de,	// (0x0002a51a) list_double2_pane_vc_g

0x5524,	// (0x00020260) list_double2_pane_vc_t1_ParamLimits

0x5524,	// (0x00020260) list_double2_pane_vc_t1

0x553a,	// (0x00020276) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x553a,	// (0x00020276) list_double2_large_graphic_pane_vc_g1

0x5216,	// (0x0001ff52) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x5216,	// (0x0001ff52) list_double2_large_graphic_pane_vc_g2

0x5222,	// (0x0001ff5e) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x5222,	// (0x0001ff5e) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa31,	// (0x0002a76d) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa31,	// (0x0002a76d) list_double2_large_graphic_pane_vc_g

0x5546,	// (0x00020282) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5546,	// (0x00020282) list_double2_large_graphic_pane_vc_t1

0x555c,	// (0x00020298) list_double_time_pane_vc_g1_ParamLimits

0x555c,	// (0x00020298) list_double_time_pane_vc_g1

0x5568,	// (0x000202a4) list_double_time_pane_vc_g2_ParamLimits

0x5568,	// (0x000202a4) list_double_time_pane_vc_g2

0x0001,

0xfa38,	// (0x0002a774) list_double_time_pane_vc_g_ParamLimits

0xfa38,	// (0x0002a774) list_double_time_pane_vc_g

0x5574,	// (0x000202b0) list_double_time_pane_vc_t1_ParamLimits

0x5574,	// (0x000202b0) list_double_time_pane_vc_t1

0x5598,	// (0x000202d4) list_double_time_pane_vc_t2_ParamLimits

0x5598,	// (0x000202d4) list_double_time_pane_vc_t2

0x55e7,	// (0x00020323) list_double_time_pane_vc_t3_ParamLimits

0x55e7,	// (0x00020323) list_double_time_pane_vc_t3

0x55f9,	// (0x00020335) list_double_time_pane_vc_t4_ParamLimits

0x55f9,	// (0x00020335) list_double_time_pane_vc_t4

0x0003,

0xfa3d,	// (0x0002a779) list_double_time_pane_vc_t_ParamLimits

0xfa3d,	// (0x0002a779) list_double_time_pane_vc_t

0x5216,	// (0x0001ff52) list_double_pane_vc_g1_ParamLimits

0x5216,	// (0x0001ff52) list_double_pane_vc_g1

0x5222,	// (0x0001ff5e) list_double_pane_vc_g2_ParamLimits

0x5222,	// (0x0001ff5e) list_double_pane_vc_g2

0x0001,

0xf7de,	// (0x0002a51a) list_double_pane_vc_g_ParamLimits

0xf7de,	// (0x0002a51a) list_double_pane_vc_g

0x560d,	// (0x00020349) list_double_pane_vc_t1_ParamLimits

0x560d,	// (0x00020349) list_double_pane_vc_t1

0x5621,	// (0x0002035d) list_double_pane_vc_t2_ParamLimits

0x5621,	// (0x0002035d) list_double_pane_vc_t2

0x0001,

0xfa46,	// (0x0002a782) list_double_pane_vc_t_ParamLimits

0xfa46,	// (0x0002a782) list_double_pane_vc_t

0x5216,	// (0x0001ff52) list_double_number_pane_vc_g1_ParamLimits

0x5216,	// (0x0001ff52) list_double_number_pane_vc_g1

0x5222,	// (0x0001ff5e) list_double_number_pane_vc_g2_ParamLimits

0x5222,	// (0x0001ff5e) list_double_number_pane_vc_g2

0x0001,

0xf7de,	// (0x0002a51a) list_double_number_pane_vc_g_ParamLimits

0xf7de,	// (0x0002a51a) list_double_number_pane_vc_g

0x5639,	// (0x00020375) list_double_number_pane_vc_t1_ParamLimits

0x5639,	// (0x00020375) list_double_number_pane_vc_t1

0x564d,	// (0x00020389) list_double_number_pane_vc_t2_ParamLimits

0x564d,	// (0x00020389) list_double_number_pane_vc_t2

0x5661,	// (0x0002039d) list_double_number_pane_vc_t3_ParamLimits

0x5661,	// (0x0002039d) list_double_number_pane_vc_t3

0x0002,

0xfa4b,	// (0x0002a787) list_double_number_pane_vc_t_ParamLimits

0xfa4b,	// (0x0002a787) list_double_number_pane_vc_t

0x5679,	// (0x000203b5) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5679,	// (0x000203b5) list_double_large_graphic_pane_vc_g1

0x568a,	// (0x000203c6) list_double_large_graphic_pane_vc_g2_ParamLimits

0x568a,	// (0x000203c6) list_double_large_graphic_pane_vc_g2

0x5222,	// (0x0001ff5e) list_double_large_graphic_pane_vc_g3_ParamLimits

0x5222,	// (0x0001ff5e) list_double_large_graphic_pane_vc_g3

0x5699,	// (0x000203d5) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5699,	// (0x000203d5) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa52,	// (0x0002a78e) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa52,	// (0x0002a78e) list_double_large_graphic_pane_vc_g

0x56a5,	// (0x000203e1) list_double_large_graphic_pane_vc_t1_ParamLimits

0x56a5,	// (0x000203e1) list_double_large_graphic_pane_vc_t1

0x56be,	// (0x000203fa) list_double_large_graphic_pane_vc_t2_ParamLimits

0x56be,	// (0x000203fa) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa5b,	// (0x0002a797) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa5b,	// (0x0002a797) list_double_large_graphic_pane_vc_t

0x5216,	// (0x0001ff52) list_double_heading_pane_vc_g1_ParamLimits

0x5216,	// (0x0001ff52) list_double_heading_pane_vc_g1

0x5222,	// (0x0001ff5e) list_double_heading_pane_vc_g2_ParamLimits

0x5222,	// (0x0001ff5e) list_double_heading_pane_vc_g2

0x0001,

0xf7de,	// (0x0002a51a) list_double_heading_pane_vc_g_ParamLimits

0xf7de,	// (0x0002a51a) list_double_heading_pane_vc_g

0x56d7,	// (0x00020413) list_double_heading_pane_vc_t1_ParamLimits

0x56d7,	// (0x00020413) list_double_heading_pane_vc_t1

0x528c,	// (0x0001ffc8) list_double_heading_pane_vc_t2_ParamLimits

0x528c,	// (0x0001ffc8) list_double_heading_pane_vc_t2

0x0001,

0xfa60,	// (0x0002a79c) list_double_heading_pane_vc_t_ParamLimits

0xfa60,	// (0x0002a79c) list_double_heading_pane_vc_t

0x520a,	// (0x0001ff46) list_double_graphic_pane_vc_g1_ParamLimits

0x520a,	// (0x0001ff46) list_double_graphic_pane_vc_g1

0x56eb,	// (0x00020427) list_double_graphic_pane_vc_g2_ParamLimits

0x56eb,	// (0x00020427) list_double_graphic_pane_vc_g2

0x56fa,	// (0x00020436) list_double_graphic_pane_vc_g3_ParamLimits

0x56fa,	// (0x00020436) list_double_graphic_pane_vc_g3

0x0002,

0xfa65,	// (0x0002a7a1) list_double_graphic_pane_vc_g_ParamLimits

0xfa65,	// (0x0002a7a1) list_double_graphic_pane_vc_g

0x5706,	// (0x00020442) list_double_graphic_pane_vc_t1_ParamLimits

0x5706,	// (0x00020442) list_double_graphic_pane_vc_t1

0x571a,	// (0x00020456) list_double_graphic_pane_vc_t2_ParamLimits

0x571a,	// (0x00020456) list_double_graphic_pane_vc_t2

0x0001,

0xfa6c,	// (0x0002a7a8) list_double_graphic_pane_vc_t_ParamLimits

0xfa6c,	// (0x0002a7a8) list_double_graphic_pane_vc_t

0x5b29,	// (0x00020865) aid_size_cell_fastswap

0x5b31,	// (0x0002086d) aid_size_cell_touch_ParamLimits

0x5b31,	// (0x0002086d) aid_size_cell_touch

0x5d8c,	// (0x00020ac8) popup_fast_swap_wide_window_ParamLimits

0x5d8c,	// (0x00020ac8) popup_fast_swap_wide_window

0x5e96,	// (0x00020bd2) touch_pane_ParamLimits

0x5e96,	// (0x00020bd2) touch_pane

0x8603,	// (0x0002333f) button_value_adjust_pane_cp2

0x4ef1,	// (0x0001fc2d) button_value_adjust_pane_cp4

0x4f11,	// (0x0001fc4d) form_field_data_pane_cp2

0x4f30,	// (0x0001fc6c) form_field_data_wide_pane_cp2

0x8a82,	// (0x000237be) bg_scroll_pane_ParamLimits

0x6124,	// (0x00020e60) scroll_handle_pane_ParamLimits

0x6138,	// (0x00020e74) scroll_sc2_down_pane_ParamLimits

0x6138,	// (0x00020e74) scroll_sc2_down_pane

0x8ab3,	// (0x000237ef) scroll_sc2_up_pane_ParamLimits

0x8ab3,	// (0x000237ef) scroll_sc2_up_pane

0xbcb1,	// (0x000269ed) grid_wheel_folder_pane_g1_ParamLimits

0xbcb1,	// (0x000269ed) grid_wheel_folder_pane_g1

0x62fd,	// (0x00021039) clock_nsta_pane_cp2_ParamLimits

0x62fd,	// (0x00021039) clock_nsta_pane_cp2

0x87fb,	// (0x00023537) listscroll_midp_pane_ParamLimits

0x92a8,	// (0x00023fe4) midp_canvas_pane

0x9592,	// (0x000242ce) nsta_clock_indic_pane

0x95c6,	// (0x00024302) listscroll_form_pane_vc

0x95ce,	// (0x0002430a) listscroll_set_pane_vc_ParamLimits

0x95ce,	// (0x0002430a) listscroll_set_pane_vc

0x96cf,	// (0x0002440b) clock_nsta_pane

0x9744,	// (0x00024480) indicator_nsta_pane

0x9a16,	// (0x00024752) bg_popup_sub_pane_cp2_ParamLimits

0x9a2a,	// (0x00024766) find_pane_cp2_ParamLimits

0x9a2a,	// (0x00024766) find_pane_cp2

0x9a40,	// (0x0002477c) grid_toobar_pane_ParamLimits

0x9b20,	// (0x0002485c) list_form_gen_pane_vc_ParamLimits

0x9b20,	// (0x0002485c) list_form_gen_pane_vc

0x9b36,	// (0x00024872) scroll_pane_cp8_vc_ParamLimits

0x9b36,	// (0x00024872) scroll_pane_cp8_vc

0x9bb2,	// (0x000248ee) data_form_wide_pane_vc_ParamLimits

0x9bb2,	// (0x000248ee) data_form_wide_pane_vc

0x9bbe,	// (0x000248fa) form_field_data_wide_pane_vc_g1

0x9bc6,	// (0x00024902) form_field_data_wide_pane_vc_t1_ParamLimits

0x9bc6,	// (0x00024902) form_field_data_wide_pane_vc_t1

0x8617,	// (0x00023353) input_focus_pane_cp6_vc_ParamLimits

0x8617,	// (0x00023353) input_focus_pane_cp6_vc

0x9ef2,	// (0x00024c2e) list_midp_pane_ParamLimits

0x9efe,	// (0x00024c3a) scroll_pane_cp16_ParamLimits

0x9efe,	// (0x00024c3a) scroll_pane_cp16

0x9f4c,	// (0x00024c88) button_value_adjust_pane_ParamLimits

0x9f4c,	// (0x00024c88) button_value_adjust_pane

0xaedf,	// (0x00025c1b) button_value_adjust_pane_cp6_ParamLimits

0xaedf,	// (0x00025c1b) button_value_adjust_pane_cp6

0xb009,	// (0x00025d45) settings_code_pane_cp_ParamLimits

0xb009,	// (0x00025d45) settings_code_pane_cp

0x7cc1,	// (0x000229fd) cell_touch_pane_g1

0x7cc1,	// (0x000229fd) cell_touch_pane_g2

0x0001,

0xf709,	// (0x0002a445) cell_touch_pane_g

0xb5ec,	// (0x00026328) cell_touch_pane_cp_ParamLimits

0xb5ec,	// (0x00026328) cell_touch_pane_cp

0xb5fc,	// (0x00026338) cell_touch_pane_ParamLimits

0xb5fc,	// (0x00026338) cell_touch_pane

0x7cc1,	// (0x000229fd) scroll_sc2_down_pane_g1

0x7cc1,	// (0x000229fd) scroll_sc2_up_pane_g1

0x7ccb,	// (0x00022a07) bg_set_opt_pane_cp4_vc

0xb60e,	// (0x0002634a) list_set_graphic_pane_vc_g1_ParamLimits

0xb60e,	// (0x0002634a) list_set_graphic_pane_vc_g1

0xb61a,	// (0x00026356) list_set_graphic_pane_vc_g2_ParamLimits

0xb61a,	// (0x00026356) list_set_graphic_pane_vc_g2

0x0001,

0xf9f7,	// (0x0002a733) list_set_graphic_pane_vc_g_ParamLimits

0xf9f7,	// (0x0002a733) list_set_graphic_pane_vc_g

0xb626,	// (0x00026362) text_primary_small_cp13_vc_ParamLimits

0xb626,	// (0x00026362) text_primary_small_cp13_vc

0xb63e,	// (0x0002637a) list_set_graphic_pane_vc_ParamLimits

0xb63e,	// (0x0002637a) list_set_graphic_pane_vc

0x7ccb,	// (0x00022a07) input_focus_pane_cp2_vc

0x7cc1,	// (0x000229fd) setting_code_pane_vc_g1

0x7df6,	// (0x00022b32) setting_code_pane_vc_t1

0xb650,	// (0x0002638c) set_text_pane_vc_t1_ParamLimits

0xb650,	// (0x0002638c) set_text_pane_vc_t1

0x7ccb,	// (0x00022a07) input_focus_pane_cp1_vc

0xb66c,	// (0x000263a8) list_set_text_pane_vc

0x7cc1,	// (0x000229fd) setting_text_pane_vc_g1

0x7ccb,	// (0x00022a07) bg_set_opt_pane_cp2_vc

0x7ded,	// (0x00022b29) setting_slider_graphic_pane_vc_g1

0xb676,	// (0x000263b2) setting_slider_graphic_pane_vc_t1

0xb686,	// (0x000263c2) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fc,	// (0x0002a738) setting_slider_graphic_pane_vc_t

0xb696,	// (0x000263d2) slider_set_pane_cp_vc

0xb69e,	// (0x000263da) slider_set_pane_vc_g1

0xb6a7,	// (0x000263e3) slider_set_pane_vc_g2

0x0006,

0xfa01,	// (0x0002a73d) slider_set_pane_vc_g

0x8672,	// (0x000233ae) set_opt_bg_pane_g1_copy1

0x867a,	// (0x000233b6) set_opt_bg_pane_g2_copy1

0xb6d3,	// (0x0002640f) set_opt_bg_pane_g3_copy1

0x868a,	// (0x000233c6) set_opt_bg_pane_g4_copy1

0x8692,	// (0x000233ce) set_opt_bg_pane_g5_copy1

0x869a,	// (0x000233d6) set_opt_bg_pane_g6_copy1

0xb6dd,	// (0x00026419) set_opt_bg_pane_g7_copy1

0xb6e5,	// (0x00026421) set_opt_bg_pane_g8_copy1

0xb6ef,	// (0x0002642b) set_opt_bg_pane_g9_copy1

0x7ccb,	// (0x00022a07) bg_set_opt_pane_cp_vc

0xb6f9,	// (0x00026435) setting_slider_pane_vc_t1

0xb708,	// (0x00026444) setting_slider_pane_vc_t2

0xb718,	// (0x00026454) setting_slider_pane_vc_t3

0x0002,

0xfa10,	// (0x0002a74c) setting_slider_pane_vc_t

0xb728,	// (0x00026464) slider_set_pane_vc

0x6c45,	// (0x00021981) volume_set_pane_vc_g1

0x6c4e,	// (0x0002198a) volume_set_pane_vc_g2

0x6c57,	// (0x00021993) volume_set_pane_vc_g3

0x6c60,	// (0x0002199c) volume_set_pane_vc_g4

0x6c69,	// (0x000219a5) volume_set_pane_vc_g5

0x6c72,	// (0x000219ae) volume_set_pane_vc_g6

0x6c7b,	// (0x000219b7) volume_set_pane_vc_g7

0x6c84,	// (0x000219c0) volume_set_pane_vc_g8

0x6c8d,	// (0x000219c9) volume_set_pane_vc_g9

0x6c96,	// (0x000219d2) volume_set_pane_vc_g10

0x0009,

0xf8b5,	// (0x0002a5f1) volume_set_pane_vc_g

0xb730,	// (0x0002646c) volume_set_pane_vc

0xb738,	// (0x00026474) button_value_adjust_pane_cp1_vc

0xb742,	// (0x0002647e) list_highlight_pane_cp2_vc

0xb74b,	// (0x00026487) list_set_pane_vc_ParamLimits

0xb74b,	// (0x00026487) list_set_pane_vc

0xb7a9,	// (0x000264e5) main_pane_set_vc_t1_ParamLimits

0xb7a9,	// (0x000264e5) main_pane_set_vc_t1

0xb7be,	// (0x000264fa) main_pane_set_vc_t2_ParamLimits

0xb7be,	// (0x000264fa) main_pane_set_vc_t2

0xb7d0,	// (0x0002650c) main_pane_set_vc_t3_ParamLimits

0xb7d0,	// (0x0002650c) main_pane_set_vc_t3

0xb7e4,	// (0x00026520) main_pane_set_vc_t4_ParamLimits

0xb7e4,	// (0x00026520) main_pane_set_vc_t4

0x0003,

0xfa17,	// (0x0002a753) main_pane_set_vc_t_ParamLimits

0xfa17,	// (0x0002a753) main_pane_set_vc_t

0xb7f8,	// (0x00026534) setting_code_pane_vc_ParamLimits

0xb7f8,	// (0x00026534) setting_code_pane_vc

0xb809,	// (0x00026545) setting_slider_graphic_pane_vc

0xb809,	// (0x00026545) setting_slider_pane_vc

0xb809,	// (0x00026545) setting_text_pane_vc

0xb809,	// (0x00026545) setting_volume_pane_vc

0xb813,	// (0x0002654f) scroll_pane_cp121_vc

0x85f1,	// (0x0002332d) set_content_pane_vc

0xb81b,	// (0x00026557) button_value_adjust_pane_g1

0xb824,	// (0x00026560) button_value_adjust_pane_g2

0x0001,

0xfa71,	// (0x0002a7ad) button_value_adjust_pane_g

0xb82d,	// (0x00026569) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb82d,	// (0x00026569) form_field_slider_wide_pane_vc_t1

0xb841,	// (0x0002657d) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb841,	// (0x0002657d) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa76,	// (0x0002a7b2) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa76,	// (0x0002a7b2) form_field_slider_wide_pane_vc_t

0x8026,	// (0x00022d62) input_focus_pane_cp10_vc_ParamLimits

0x8026,	// (0x00022d62) input_focus_pane_cp10_vc

0xb86f,	// (0x000265ab) slider_cont_pane_cp1_vc_ParamLimits

0xb86f,	// (0x000265ab) slider_cont_pane_cp1_vc

0xb881,	// (0x000265bd) slider_form_pane_g1_cp2

0xb6a7,	// (0x000263e3) slider_form_pane_g2_cp2

0xb8ae,	// (0x000265ea) form_field_slider_pane_vc_t3

0xb8bc,	// (0x000265f8) form_field_slider_pane_vc_t4

0xb8ca,	// (0x00026606) slider_form_pane_vc_ParamLimits

0xb8ca,	// (0x00026606) slider_form_pane_vc

0xb8d7,	// (0x00026613) form_field_slider_pane_vc_t1_ParamLimits

0xb8d7,	// (0x00026613) form_field_slider_pane_vc_t1

0xb841,	// (0x0002657d) form_field_slider_pane_vc_t2_ParamLimits

0xb841,	// (0x0002657d) form_field_slider_pane_vc_t2

0x0001,

0xfa88,	// (0x0002a7c4) form_field_slider_pane_vc_t_ParamLimits

0xfa88,	// (0x0002a7c4) form_field_slider_pane_vc_t

0x8026,	// (0x00022d62) input_focus_pane_cp9_vc_ParamLimits

0x8026,	// (0x00022d62) input_focus_pane_cp9_vc

0xb8f3,	// (0x0002662f) slider_cont_pane_vc_ParamLimits

0xb8f3,	// (0x0002662f) slider_cont_pane_vc

0xb907,	// (0x00026643) list_form_graphic_pane_cp_vc_ParamLimits

0xb907,	// (0x00026643) list_form_graphic_pane_cp_vc

0x9bbe,	// (0x000248fa) form_field_popup_wide_pane_vc_g1

0xb91c,	// (0x00026658) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb91c,	// (0x00026658) form_field_popup_wide_pane_vc_t1

0x8617,	// (0x00023353) input_focus_pane_cp8_vc_ParamLimits

0x8617,	// (0x00023353) input_focus_pane_cp8_vc

0xb961,	// (0x0002669d) list_form_wide_pane_vc_ParamLimits

0xb961,	// (0x0002669d) list_form_wide_pane_vc

0xb96d,	// (0x000266a9) list_form_graphic_pane_vc_g1

0xb975,	// (0x000266b1) list_form_graphic_pane_vc_t1_ParamLimits

0xb975,	// (0x000266b1) list_form_graphic_pane_vc_t1

0x7dab,	// (0x00022ae7) list_highlight_pane_cp5_vc_ParamLimits

0x7dab,	// (0x00022ae7) list_highlight_pane_cp5_vc

0xb991,	// (0x000266cd) list_form_graphic_pane_vc_ParamLimits

0xb991,	// (0x000266cd) list_form_graphic_pane_vc

0x9bbe,	// (0x000248fa) form_field_popup_pane_vc_g1

0xb9a7,	// (0x000266e3) form_field_popup_pane_vc_t1_ParamLimits

0xb9a7,	// (0x000266e3) form_field_popup_pane_vc_t1

0x8617,	// (0x00023353) input_focus_pane_cp7_vc_ParamLimits

0x8617,	// (0x00023353) input_focus_pane_cp7_vc

0xb9be,	// (0x000266fa) list_form_pane_vc_ParamLimits

0xb9be,	// (0x000266fa) list_form_pane_vc

0xb9ca,	// (0x00026706) data_form_pane_vc_t1_ParamLimits

0xb9ca,	// (0x00026706) data_form_pane_vc_t1

0x8672,	// (0x000233ae) input_focus_pane_vc_g1

0x867a,	// (0x000233b6) input_focus_pane_vc_g2

0x8682,	// (0x000233be) input_focus_pane_vc_g3

0x868a,	// (0x000233c6) input_focus_pane_vc_g4

0x8692,	// (0x000233ce) input_focus_pane_vc_g5

0x869a,	// (0x000233d6) input_focus_pane_vc_g6

0x86a2,	// (0x000233de) input_focus_pane_vc_g7

0x86aa,	// (0x000233e6) input_focus_pane_vc_g8

0x86b2,	// (0x000233ee) input_focus_pane_vc_g9

0x7cc1,	// (0x000229fd) input_focus_pane_vc_g10

0x0009,

0xf692,	// (0x0002a3ce) input_focus_pane_vc_g

0x9bb2,	// (0x000248ee) data_form_pane_vc_ParamLimits

0x9bb2,	// (0x000248ee) data_form_pane_vc

0x9bbe,	// (0x000248fa) form_field_data_pane_vc_g1

0xb9e5,	// (0x00026721) form_field_data_pane_vc_t1_ParamLimits

0xb9e5,	// (0x00026721) form_field_data_pane_vc_t1

0x8617,	// (0x00023353) input_focus_pane_vc_ParamLimits

0x8617,	// (0x00023353) input_focus_pane_vc

0xb9ff,	// (0x0002673b) button_value_adjust_pane_cp3_vc

0xba07,	// (0x00026743) button_value_adjust_pane_cp5_vc

0xba0f,	// (0x0002674b) form_field_data_pane_vc_ParamLimits

0xba0f,	// (0x0002674b) form_field_data_pane_vc

0xba26,	// (0x00026762) form_field_data_pane_vc_cp2

0xba2e,	// (0x0002676a) form_field_data_wide_pane_vc_ParamLimits

0xba2e,	// (0x0002676a) form_field_data_wide_pane_vc

0xba44,	// (0x00026780) form_field_data_wide_pane_vc_cp2

0xba4c,	// (0x00026788) form_field_popup_pane_vc_ParamLimits

0xba4c,	// (0x00026788) form_field_popup_pane_vc

0xba63,	// (0x0002679f) form_field_popup_wide_pane_vc_ParamLimits

0xba63,	// (0x0002679f) form_field_popup_wide_pane_vc

0xba79,	// (0x000267b5) form_field_slider_pane_vc_ParamLimits

0xba79,	// (0x000267b5) form_field_slider_pane_vc

0xba8c,	// (0x000267c8) form_field_slider_wide_pane_vc_ParamLimits

0xba8c,	// (0x000267c8) form_field_slider_wide_pane_vc

0xba9f,	// (0x000267db) grid_touch_1_pane_ParamLimits

0xba9f,	// (0x000267db) grid_touch_1_pane

0xbaab,	// (0x000267e7) grid_touch_2_pane_ParamLimits

0xbaab,	// (0x000267e7) grid_touch_2_pane

0x955d,	// (0x00024299) touch_pane_g1_ParamLimits

0x955d,	// (0x00024299) touch_pane_g1

0xbac3,	// (0x000267ff) cell_app_pane_cp_wide_ParamLimits

0xbac3,	// (0x000267ff) cell_app_pane_cp_wide

0xbad4,	// (0x00026810) grid_popup_fast_wide_pane_ParamLimits

0xbad4,	// (0x00026810) grid_popup_fast_wide_pane

0xbae8,	// (0x00026824) scroll_pane_cp19_ParamLimits

0xbae8,	// (0x00026824) scroll_pane_cp19

0x7ccb,	// (0x00022a07) bg_popup_window_pane_cp20

0xbafc,	// (0x00026838) listscroll_popup_fast_wide_pane

0x7dab,	// (0x00022ae7) grid_indicator_nsta_pane

0xbb04,	// (0x00026840) clock_nsta_pane_g1

0xbb0d,	// (0x00026849) clock_nsta_pane_t1

0xbb29,	// (0x00026865) cell_indicator_nsta_pane_ParamLimits

0xbb29,	// (0x00026865) cell_indicator_nsta_pane

0xbb61,	// (0x0002689d) cell_indicator_nsta_pane_g1

0xbb6f,	// (0x000268ab) cell_indicator_nsta_pane_g2

0x0001,

0xfa99,	// (0x0002a7d5) cell_indicator_nsta_pane_g

0xbb85,	// (0x000268c1) clock_nsta_pane_cp

0xbb8d,	// (0x000268c9) indicator_nsta_pane_cp

0xbb95,	// (0x000268d1) nsta_clock_indic_pane_g1

0x7e74,	// (0x00022bb0) grid_indicator_pane

0x8ba8,	// (0x000238e4) scroll_pane_cp29

0x624c,	// (0x00020f88) indicator_nsta_pane_cp2_ParamLimits

0x624c,	// (0x00020f88) indicator_nsta_pane_cp2

0x7dab,	// (0x00022ae7) main_apps_wheel_pane

0x9dd3,	// (0x00024b0f) form_midp_field_text_pane_ParamLimits

0x9f1e,	// (0x00024c5a) scroll_bar_cp050_ParamLimits

0xbbee,	// (0x0002692a) cell_indicator_pane_ParamLimits

0xbbee,	// (0x0002692a) cell_indicator_pane

0xbc05,	// (0x00026941) cell_indicator_pane_g1

0xbc0f,	// (0x0002694b) grid_wheel_folder_pane_ParamLimits

0xbc0f,	// (0x0002694b) grid_wheel_folder_pane

0xbc25,	// (0x00026961) list_wheel_apps_pane_ParamLimits

0xbc25,	// (0x00026961) list_wheel_apps_pane

0xbc36,	// (0x00026972) main_apps_wheel_pane_g1_ParamLimits

0xbc36,	// (0x00026972) main_apps_wheel_pane_g1

0xbc4a,	// (0x00026986) main_apps_wheel_pane_g2_ParamLimits

0xbc4a,	// (0x00026986) main_apps_wheel_pane_g2

0x0001,

0xfab5,	// (0x0002a7f1) main_apps_wheel_pane_g_ParamLimits

0xfab5,	// (0x0002a7f1) main_apps_wheel_pane_g

0xbc62,	// (0x0002699e) main_apps_wheel_pane_t1_ParamLimits

0xbc62,	// (0x0002699e) main_apps_wheel_pane_t1

0xbc85,	// (0x000269c1) list_wheel_apps_pane_g1

0xbc8d,	// (0x000269c9) list_wheel_apps_pane_g2

0xbc95,	// (0x000269d1) list_wheel_apps_pane_g3

0xbc9d,	// (0x000269d9) list_wheel_apps_pane_g4

0xbca7,	// (0x000269e3) list_wheel_apps_pane_g5

0x0004,

0xfaba,	// (0x0002a7f6) list_wheel_apps_pane_g

0x9120,	// (0x00023e5c) navi_icon_text_pane

0x9602,	// (0x0002433e) aid_fill_nsta

0xbcca,	// (0x00026a06) navi_icon_text_pane_g1

0xbcd6,	// (0x00026a12) navi_icon_text_pane_t1

0x8fbe,	// (0x00023cfa) list_set_graphic_pane_t1_ParamLimits

0x8fbe,	// (0x00023cfa) list_set_graphic_pane_t1

0xa679,	// (0x000253b5) popup_midp_note_alarm_window_t6_ParamLimits

0xa679,	// (0x000253b5) popup_midp_note_alarm_window_t6

0xa68b,	// (0x000253c7) popup_midp_note_alarm_window_t7_ParamLimits

0xa68b,	// (0x000253c7) popup_midp_note_alarm_window_t7

0xa69d,	// (0x000253d9) popup_midp_note_alarm_window_t8_ParamLimits

0xa69d,	// (0x000253d9) popup_midp_note_alarm_window_t8

0xa6af,	// (0x000253eb) popup_midp_note_alarm_window_t9_ParamLimits

0xa6af,	// (0x000253eb) popup_midp_note_alarm_window_t9

0xa6c1,	// (0x000253fd) popup_midp_note_alarm_window_t10_ParamLimits

0xa6c1,	// (0x000253fd) popup_midp_note_alarm_window_t10

0xa6d3,	// (0x0002540f) popup_midp_note_alarm_window_t11_ParamLimits

0xa6d3,	// (0x0002540f) popup_midp_note_alarm_window_t11

0xa6e5,	// (0x00025421) scroll_pane_cp17_ParamLimits

0xa6e5,	// (0x00025421) scroll_pane_cp17

0x6c45,	// (0x00021981) volume_small_pane_cp_g1

0x6ef8,	// (0x00021c34) volume_small_pane_cp_g2

0x6f01,	// (0x00021c3d) volume_small_pane_cp_g3

0x6f0a,	// (0x00021c46) volume_small_pane_cp_g4

0x6f13,	// (0x00021c4f) volume_small_pane_cp_g5

0x6f1c,	// (0x00021c58) volume_small_pane_cp_g6

0x6f25,	// (0x00021c61) volume_small_pane_cp_g7

0x6f2e,	// (0x00021c6a) volume_small_pane_cp_g8

0x6f37,	// (0x00021c73) volume_small_pane_cp_g9

0x6f40,	// (0x00021c7c) volume_small_pane_cp_g10

0x936f,	// (0x000240ab) midp_ticker_pane_g1_ParamLimits

0x937b,	// (0x000240b7) midp_ticker_pane_g2_ParamLimits

0xf75e,	// (0x0002a49a) midp_ticker_pane_g_ParamLimits

0x9387,	// (0x000240c3) midp_ticker_pane_t1_ParamLimits

0x9618,	// (0x00024354) aid_fill_nsta_2

0x9f0a,	// (0x00024c46) list_form2_midp_pane

0xb054,	// (0x00025d90) midp_editing_number_pane_ParamLimits

0xb063,	// (0x00025d9f) midp_ticker_pane_ParamLimits

0xbce8,	// (0x00026a24) form2_midp_field_pane

0xbd0c,	// (0x00026a48) scroll_pane_cp51

0xbd2c,	// (0x00026a68) form2_midp_button_pane_ParamLimits

0xbd2c,	// (0x00026a68) form2_midp_button_pane

0xbd3e,	// (0x00026a7a) form2_midp_content_pane_ParamLimits

0xbd3e,	// (0x00026a7a) form2_midp_content_pane

0xbd58,	// (0x00026a94) form2_midp_field_choice_group_pane

0xbd60,	// (0x00026a9c) form2_midp_field_pane_g1

0xbd68,	// (0x00026aa4) form2_midp_field_pane_g2

0xbd70,	// (0x00026aac) form2_midp_field_pane_g3

0xbd78,	// (0x00026ab4) form2_midp_field_pane_g4

0x0003,

0xfadf,	// (0x0002a81b) form2_midp_field_pane_g

0xbd80,	// (0x00026abc) form2_midp_gauge_slider_pane

0xbd88,	// (0x00026ac4) form2_midp_gauge_wait_pane

0xbd90,	// (0x00026acc) form2_midp_image_pane_ParamLimits

0xbd90,	// (0x00026acc) form2_midp_image_pane

0xbdab,	// (0x00026ae7) form2_midp_label_pane_ParamLimits

0xbdab,	// (0x00026ae7) form2_midp_label_pane

0xbdc4,	// (0x00026b00) form2_midp_label_pane_cp_ParamLimits

0xbdc4,	// (0x00026b00) form2_midp_label_pane_cp

0xbdf1,	// (0x00026b2d) form2_midp_string_pane_ParamLimits

0xbdf1,	// (0x00026b2d) form2_midp_string_pane

0x5732,	// (0x0002046e) form2_midp_text_pane_ParamLimits

0x5732,	// (0x0002046e) form2_midp_text_pane

0xbe03,	// (0x00026b3f) form2_midp_time_pane

0xbe13,	// (0x00026b4f) input_focus_pane_cp51_ParamLimits

0xbe13,	// (0x00026b4f) input_focus_pane_cp51

0xbe2b,	// (0x00026b67) form2_midp_label_pane_t1_ParamLimits

0xbe2b,	// (0x00026b67) form2_midp_label_pane_t1

0x574d,	// (0x00020489) form2_mdip_text_pane_t1_ParamLimits

0x574d,	// (0x00020489) form2_mdip_text_pane_t1

0x576b,	// (0x000204a7) form2_midp_time_pane_t1

0xbe74,	// (0x00026bb0) form2_midp_gauge_slider_pane_t1

0xbe86,	// (0x00026bc2) form2_midp_gauge_slider_pane_t2

0xbe98,	// (0x00026bd4) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae8,	// (0x0002a824) form2_midp_gauge_slider_pane_t

0xbeaa,	// (0x00026be6) form2_midp_slider_pane

0xbeb6,	// (0x00026bf2) form2_midp_gauge_wait_pane_t1

0xbec4,	// (0x00026c00) form2_midp_wait_pane_ParamLimits

0xbec4,	// (0x00026c00) form2_midp_wait_pane

0x9c05,	// (0x00024941) list_single_2graphic_pane_cp4_ParamLimits

0x9c05,	// (0x00024941) list_single_2graphic_pane_cp4

0xbeef,	// (0x00026c2b) list_single_midp_graphic_pane_cp_ParamLimits

0xbeef,	// (0x00026c2b) list_single_midp_graphic_pane_cp

0x7ccb,	// (0x00022a07) list_highlight_pane_cp20

0xbf1e,	// (0x00026c5a) list_single_2graphic_pane_g1_cp4

0xbf26,	// (0x00026c62) list_single_2graphic_pane_g2_cp4

0xbf2e,	// (0x00026c6a) list_single_2graphic_pane_t1_cp4

0x7dab,	// (0x00022ae7) list_highlight_pane_cp21

0xbf3d,	// (0x00026c79) list_single_midp_graphic_pane_g4_cp

0xbf4c,	// (0x00026c88) list_single_midp_graphic_pane_t1_cp

0xbf61,	// (0x00026c9d) form2_mdip_string_pane_t1_ParamLimits

0xbf61,	// (0x00026c9d) form2_mdip_string_pane_t1

0x7ccb,	// (0x00022a07) bg_wml_button_pane_cp2

0x7cc1,	// (0x000229fd) form2_midp_image_pane_g1

0x4cdb,	// (0x0001fa17) list_double_large_graphic_pane_g5_ParamLimits

0x4cdb,	// (0x0001fa17) list_double_large_graphic_pane_g5

0x87fb,	// (0x00023537) midp_form_pane_ParamLimits

0x7dab,	// (0x00022ae7) main_apps_wheel_pane_ParamLimits

0x68fd,	// (0x00021639) popup_preview_window_ParamLimits

0x68fd,	// (0x00021639) popup_preview_window

0x6ab8,	// (0x000217f4) popup_touch_info_window_ParamLimits

0x6ab8,	// (0x000217f4) popup_touch_info_window

0x6ad6,	// (0x00021812) popup_touch_menu_window_ParamLimits

0x6ad6,	// (0x00021812) popup_touch_menu_window

0x7cb7,	// (0x000229f3) bg_popup_sub_pane_cp6

0xc05a,	// (0x00026d96) list_touch_menu_pane

0xc062,	// (0x00026d9e) list_single_touch_menu_pane_ParamLimits

0xc062,	// (0x00026d9e) list_single_touch_menu_pane

0xc078,	// (0x00026db4) list_single_touch_menu_pane_t1

0x7dab,	// (0x00022ae7) bg_popup_sub_pane_cp7_ParamLimits

0x7dab,	// (0x00022ae7) bg_popup_sub_pane_cp7

0xc086,	// (0x00026dc2) heading_sub_pane

0xc08e,	// (0x00026dca) list_touch_info_pane_ParamLimits

0xc08e,	// (0x00026dca) list_touch_info_pane

0xc09d,	// (0x00026dd9) list_single_touch_info_pane_ParamLimits

0xc09d,	// (0x00026dd9) list_single_touch_info_pane

0xc0af,	// (0x00026deb) list_single_touch_info_pane_t1

0xc0bd,	// (0x00026df9) list_single_touch_info_pane_t2

0x0001,

0xfaf6,	// (0x0002a832) list_single_touch_info_pane_t

0x92a0,	// (0x00023fdc) bg_popup_heading_pane_cp

0xc0cb,	// (0x00026e07) heading_sub_pane_t1

0x9b4c,	// (0x00024888) bg_popup_preview_window_pane_cp_ParamLimits

0x9b4c,	// (0x00024888) bg_popup_preview_window_pane_cp

0xc086,	// (0x00026dc2) heading_preview_pane

0xc08e,	// (0x00026dca) list_preview_pane_ParamLimits

0xc08e,	// (0x00026dca) list_preview_pane

0xc0d9,	// (0x00026e15) popup_preview_window_g1

0xc09d,	// (0x00026dd9) list_single_preview_pane_ParamLimits

0xc09d,	// (0x00026dd9) list_single_preview_pane

0xc0e1,	// (0x00026e1d) list_single_preview_pane_g1

0xc0e9,	// (0x00026e25) list_single_preview_pane_t1

0xc0af,	// (0x00026deb) list_single_preview_pane_t2

0x0001,

0xfafb,	// (0x0002a837) list_single_preview_pane_t

0xc0f7,	// (0x00026e33) bg_popup_heading_pane_cp2_ParamLimits

0xc0f7,	// (0x00026e33) bg_popup_heading_pane_cp2

0xc10d,	// (0x00026e49) heading_preview_pane_g1

0xc115,	// (0x00026e51) heading_preview_pane_t1_ParamLimits

0xc115,	// (0x00026e51) heading_preview_pane_t1

0x7e97,	// (0x00022bd3) soft_indicator_pane_t1_ParamLimits

0x858a,	// (0x000232c6) scroll_pane_ParamLimits

0x8aa1,	// (0x000237dd) scroll_sc2_left_pane

0x8aaa,	// (0x000237e6) scroll_sc2_right_pane

0x8ac9,	// (0x00023805) scroll_bg_pane_g1_ParamLimits

0x8ade,	// (0x0002381a) scroll_bg_pane_g2_ParamLimits

0x8af6,	// (0x00023832) scroll_bg_pane_g3_ParamLimits

0xf6e9,	// (0x0002a425) scroll_bg_pane_g_ParamLimits

0x8ac9,	// (0x00023805) scroll_handle_pane_g1_ParamLimits

0x8b18,	// (0x00023854) scroll_handle_pane_g2_ParamLimits

0x8af6,	// (0x00023832) scroll_handle_pane_g3_ParamLimits

0xf6f0,	// (0x0002a42c) scroll_handle_pane_g_ParamLimits

0x6580,	// (0x000212bc) popup_choice_list_window_ParamLimits

0x6580,	// (0x000212bc) popup_choice_list_window

0x9a22,	// (0x0002475e) choice_list_pane

0x9aa4,	// (0x000247e0) cell_toolbar_pane_t1

0x9acc,	// (0x00024808) toolbar_button_pane_ParamLimits

0xab9f,	// (0x000258db) ai_gene_pane_1_t2_ParamLimits

0xab9f,	// (0x000258db) ai_gene_pane_1_t2

0x0001,

0xf911,	// (0x0002a64d) ai_gene_pane_1_t_ParamLimits

0xf911,	// (0x0002a64d) ai_gene_pane_1_t

0xc132,	// (0x00026e6e) scroll_sc2_left_pane_g1

0xc132,	// (0x00026e6e) scroll_sc2_right_pane_g1

0x95e0,	// (0x0002431c) bg_popup_sub_pane_cp10

0xc13c,	// (0x00026e78) list_choice_list_pane

0xc155,	// (0x00026e91) list_single_choice_list_pane_ParamLimits

0xc155,	// (0x00026e91) list_single_choice_list_pane

0xc168,	// (0x00026ea4) list_single_choice_list_pane_g1

0x87ab,	// (0x000234e7) list_single_choice_list_pane_t1_ParamLimits

0x87ab,	// (0x000234e7) list_single_choice_list_pane_t1

0xc170,	// (0x00026eac) choice_list_pane_g1

0xc178,	// (0x00026eb4) choice_list_pane_t1

0x7cb7,	// (0x000229f3) input_focus_pane_cp11

0x8982,	// (0x000236be) title_pane_stacon_g2_ParamLimits

0x8982,	// (0x000236be) title_pane_stacon_g2

0x0002,

0xf6cf,	// (0x0002a40b) title_pane_stacon_g_ParamLimits

0xf6cf,	// (0x0002a40b) title_pane_stacon_g

0x92a0,	// (0x00023fdc) cursor_press_pane

0x662c,	// (0x00021368) popup_fep_hwr_window_ParamLimits

0x662c,	// (0x00021368) popup_fep_hwr_window

0x66a6,	// (0x000213e2) popup_fep_vkb_window_ParamLimits

0x66a6,	// (0x000213e2) popup_fep_vkb_window

0xc186,	// (0x00026ec2) cursor_press_pane_g1

0x0002,

0xfb24,	// (0x0002a860) fep_vkb_side_pane_g_ParamLimits

0x6f82,	// (0x00021cbe) fep_hwr_candidate_pane_ParamLimits

0x6f82,	// (0x00021cbe) fep_hwr_candidate_pane

0x6fac,	// (0x00021ce8) fep_hwr_side_pane_ParamLimits

0x6fac,	// (0x00021ce8) fep_hwr_side_pane

0x6fcc,	// (0x00021d08) fep_hwr_top_pane_ParamLimits

0x6fcc,	// (0x00021d08) fep_hwr_top_pane

0x6fe4,	// (0x00021d20) fep_hwr_write_pane_ParamLimits

0x6fe4,	// (0x00021d20) fep_hwr_write_pane

0xfb24,	// (0x0002a860) fep_vkb_side_pane_g

0xc18e,	// (0x00026eca) fep_hwr_top_pane_g1

0xc1a0,	// (0x00026edc) fep_hwr_top_pane_g2

0x7010,	// (0x00021d4c) fep_hwr_top_pane_g3

0x0002,

0xfb00,	// (0x0002a83c) fep_hwr_top_pane_g

0x7025,	// (0x00021d61) fep_hwr_top_text_pane

0x8c98,	// (0x000239d4) fep_hwr_top_text_pane_g1

0xc1d6,	// (0x00026f12) fep_hwr_top_text_pane_t1

0x711b,	// (0x00021e57) fep_hwr_candidate_pane_g1

0xc429,	// (0x00027165) fep_vkb_keypad_pane_g3_ParamLimits

0xc429,	// (0x00027165) fep_vkb_keypad_pane_g3

0xc451,	// (0x0002718d) fep_vkb_keypad_pane_g4_ParamLimits

0xc451,	// (0x0002718d) fep_vkb_keypad_pane_g4

0xc4c0,	// (0x000271fc) fep_vkb_bottom_pane_g2_ParamLimits

0xc4c0,	// (0x000271fc) fep_vkb_bottom_pane_g2

0x0001,

0xfb2b,	// (0x0002a867) fep_vkb_bottom_pane_g_ParamLimits

0xfb2b,	// (0x0002a867) fep_vkb_bottom_pane_g

0xc132,	// (0x00026e6e) cell_vkb_side_pane_g2

0x0001,

0xfb35,	// (0x0002a871) cell_vkb_side_pane_g

0xc54b,	// (0x00027287) cell_vkb_side_pane_t1

0xc559,	// (0x00027295) cell_vkb_side_pane_t1_copy1

0xc132,	// (0x00026e6e) bg_fep_vkb_candidate_pane_g2

0xc685,	// (0x000273c1) cell_vkb_candidate_pane_ParamLimits

0xc1e4,	// (0x00026f20) aid_size_cell_vkb_ParamLimits

0xc1e4,	// (0x00026f20) aid_size_cell_vkb

0xc685,	// (0x000273c1) cell_vkb_candidate_pane

0x7135,	// (0x00021e71) bg_popup_fep_shadow_pane_g1

0xc272,	// (0x00026fae) fep_vkb_bottom_pane_ParamLimits

0xc272,	// (0x00026fae) fep_vkb_bottom_pane

0xc2a8,	// (0x00026fe4) fep_vkb_candidate_pane_ParamLimits

0xc2a8,	// (0x00026fe4) fep_vkb_candidate_pane

0xc2c4,	// (0x00027000) fep_vkb_keypad_pane_ParamLimits

0xc2c4,	// (0x00027000) fep_vkb_keypad_pane

0xc30a,	// (0x00027046) fep_vkb_side_pane_ParamLimits

0xc30a,	// (0x00027046) fep_vkb_side_pane

0xc346,	// (0x00027082) fep_vkb_top_pane_ParamLimits

0xc346,	// (0x00027082) fep_vkb_top_pane

0xc382,	// (0x000270be) fep_vkb_top_pane_g1_ParamLimits

0xc382,	// (0x000270be) fep_vkb_top_pane_g1

0xc391,	// (0x000270cd) fep_vkb_top_pane_g2_ParamLimits

0xc391,	// (0x000270cd) fep_vkb_top_pane_g2

0xc3a0,	// (0x000270dc) fep_vkb_top_pane_g3_ParamLimits

0xc3a0,	// (0x000270dc) fep_vkb_top_pane_g3

0x0003,

0xfb1b,	// (0x0002a857) fep_vkb_top_pane_g_ParamLimits

0xfb1b,	// (0x0002a857) fep_vkb_top_pane_g

0xc3be,	// (0x000270fa) fep_vkb_top_text_pane_ParamLimits

0xc3be,	// (0x000270fa) fep_vkb_top_text_pane

0xc3cf,	// (0x0002710b) fep_vkb_side_pane_g1_ParamLimits

0xc3cf,	// (0x0002710b) fep_vkb_side_pane_g1

0xc418,	// (0x00027154) grid_vkb_side_pane_ParamLimits

0xc418,	// (0x00027154) grid_vkb_side_pane

0x713d,	// (0x00021e79) bg_popup_fep_shadow_pane_g2

0x7146,	// (0x00021e82) bg_popup_fep_shadow_pane_g3

0x714e,	// (0x00021e8a) bg_popup_fep_shadow_pane_g4

0x7157,	// (0x00021e93) bg_popup_fep_shadow_pane_g5

0x7161,	// (0x00021e9d) bg_popup_fep_shadow_pane_g6

0x7169,	// (0x00021ea5) bg_popup_fep_shadow_pane_g7

0x8692,	// (0x000233ce) bg_popup_fep_shadow_pane_g8

0xc46f,	// (0x000271ab) grid_vkb_keypad_number_pane_ParamLimits

0xc46f,	// (0x000271ab) grid_vkb_keypad_number_pane

0xc47f,	// (0x000271bb) grid_vkb_keypad_pane_ParamLimits

0xc47f,	// (0x000271bb) grid_vkb_keypad_pane

0xc4a5,	// (0x000271e1) fep_vkb_bottom_pane_g1_ParamLimits

0xc4a5,	// (0x000271e1) fep_vkb_bottom_pane_g1

0xc4ce,	// (0x0002720a) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc4ce,	// (0x0002720a) grid_vkb_keypad_bottom_left_pane

0xc4e3,	// (0x0002721f) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc4e3,	// (0x0002721f) grid_vkb_keypad_bottom_right_pane

0xc4f8,	// (0x00027234) fep_vkb_top_text_pane_g1

0xc513,	// (0x0002724f) fep_vkb_top_text_pane_t1

0xc528,	// (0x00027264) cell_vkb_side_pane_ParamLimits

0xc528,	// (0x00027264) cell_vkb_side_pane

0xc132,	// (0x00026e6e) cell_vkb_side_pane_g1

0xc567,	// (0x000272a3) cell_vkb_keypad_pane_ParamLimits

0xc567,	// (0x000272a3) cell_vkb_keypad_pane

0xc5dc,	// (0x00027318) cell_vkb_keypad_pane_g1

0x0008,

0xfb48,	// (0x0002a884) bg_popup_fep_shadow_pane_g

0xc132,	// (0x00026e6e) cell_hwr_side_pane_g1

0xc132,	// (0x00026e6e) cell_hwr_side_pane_g2

0xc5e6,	// (0x00027322) cell_vkb_keypad_pane_t1

0xc5f4,	// (0x00027330) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc5f4,	// (0x00027330) cell_vkb_keypad_bottom_left_pane

0xc611,	// (0x0002734d) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc611,	// (0x0002734d) cell_vkb_keypad_bottom_right_pane

0xc132,	// (0x00026e6e) cell_vkb_keypad_bottom_left_pane_g1

0xc132,	// (0x00026e6e) cell_vkb_keypad_bottom_right_pane_g1

0xc64a,	// (0x00027386) cell_vkb_keypad_number_pane_ParamLimits

0xc64a,	// (0x00027386) cell_vkb_keypad_number_pane

0xc669,	// (0x000273a5) cell_vkb_keypad_number_pane_g1

0xc673,	// (0x000273af) cell_vkb_keypad_number_pane_g2

0xc67c,	// (0x000273b8) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb3a,	// (0x0002a876) cell_vkb_keypad_number_pane_g

0xc5e6,	// (0x00027322) cell_vkb_keypad_number_pane_t1

0xc6a0,	// (0x000273dc) fep_vkb_candidate_pane_g1

0x0001,

0xfb35,	// (0x0002a871) cell_hwr_side_pane_g

0xc6b9,	// (0x000273f5) cell_hwr_side_pane_t1

0x717b,	// (0x00021eb7) cell_hwr_side_pane_t1_copy1

0xc3b0,	// (0x000270ec) cell_hwr_candidate_pane_g1

0x7189,	// (0x00021ec5) cell_hwr_candidate_pane_t1

0xc132,	// (0x00026e6e) cell_vkb_candidate_pane_g2

0xc73f,	// (0x0002747b) cell_vkb_candidate_pane_t1

0x6f49,	// (0x00021c85) bg_popup_fep_shadow_pane_ParamLimits

0x6f49,	// (0x00021c85) bg_popup_fep_shadow_pane

0x1db7,	// (0x0001caf3) bg_fep_hwr_top_pane_g4

0xc1b2,	// (0x00026eee) bg_hwr_side_pane_g1_ParamLimits

0xc1b2,	// (0x00026eee) bg_hwr_side_pane_g1

0x7061,	// (0x00021d9d) cell_hwr_side_pane_ParamLimits

0x7061,	// (0x00021d9d) cell_hwr_side_pane

0x709c,	// (0x00021dd8) fep_hwr_write_pane_g1_ParamLimits

0x709c,	// (0x00021dd8) fep_hwr_write_pane_g1

0x70a9,	// (0x00021de5) fep_hwr_write_pane_g2_ParamLimits

0x70a9,	// (0x00021de5) fep_hwr_write_pane_g2

0x70b6,	// (0x00021df2) fep_hwr_write_pane_g3_ParamLimits

0x70b6,	// (0x00021df2) fep_hwr_write_pane_g3

0x70c4,	// (0x00021e00) fep_hwr_write_pane_g4_ParamLimits

0x70c4,	// (0x00021e00) fep_hwr_write_pane_g4

0x0005,

0xfb07,	// (0x0002a843) fep_hwr_write_pane_g_ParamLimits

0xfb07,	// (0x0002a843) fep_hwr_write_pane_g

0x1db7,	// (0x0001caf3) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1db7,	// (0x0001caf3) bg_fep_hwr_candidate_pane_g2

0x70d9,	// (0x00021e15) cell_hwr_candidate_pane_ParamLimits

0x70d9,	// (0x00021e15) cell_hwr_candidate_pane

0x711b,	// (0x00021e57) fep_hwr_candidate_pane_g1_ParamLimits

0xc212,	// (0x00026f4e) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc212,	// (0x00026f4e) bg_popup_fep_shadow_pane_cp2

0xc3b0,	// (0x000270ec) fep_vkb_top_pane_g4_ParamLimits

0xc3b0,	// (0x000270ec) fep_vkb_top_pane_g4

0xc3f6,	// (0x00027132) fep_vkb_side_pane_g2_ParamLimits

0xc3f6,	// (0x00027132) fep_vkb_side_pane_g2

0x4e1e,	// (0x0001fb5a) list_setting_pane_t4_ParamLimits

0x4e1e,	// (0x0001fb5a) list_setting_pane_t4

0x4eb8,	// (0x0001fbf4) list_setting_number_pane_t5_ParamLimits

0x4eb8,	// (0x0001fbf4) list_setting_number_pane_t5

0x8cdf,	// (0x00023a1b) list_double_heading_pane_cp2_ParamLimits

0x8cdf,	// (0x00023a1b) list_double_heading_pane_cp2

0x8625,	// (0x00023361) list_double_heading_pane_g1_cp2_ParamLimits

0x8625,	// (0x00023361) list_double_heading_pane_g1_cp2

0x8631,	// (0x0002336d) list_double_heading_pane_g2_cp2_ParamLimits

0x8631,	// (0x0002336d) list_double_heading_pane_g2_cp2

0xc74d,	// (0x00027489) list_double_heading_pane_t1_cp2_ParamLimits

0xc74d,	// (0x00027489) list_double_heading_pane_t1_cp2

0xc763,	// (0x0002749f) list_double_heading_pane_t2_cp2_ParamLimits

0xc763,	// (0x0002749f) list_double_heading_pane_t2_cp2

0x7c9f,	// (0x000229db) aid_value_unit2

0x5de6,	// (0x00020b22) popup_preview_fixed_window

0x8034,	// (0x00022d70) bg_popup_preview_window_pane_cp02

0xc775,	// (0x000274b1) list_preview_fixed_pane

0xc7bb,	// (0x000274f7) list_empty_pane_fp_ParamLimits

0xc7bb,	// (0x000274f7) list_empty_pane_fp

0xc7bb,	// (0x000274f7) list_single_cale_day_pane_fp_ParamLimits

0xc7bb,	// (0x000274f7) list_single_cale_day_pane_fp

0xc7bb,	// (0x000274f7) list_single_graphic_heading_pane_fp_ParamLimits

0xc7bb,	// (0x000274f7) list_single_graphic_heading_pane_fp

0xc7bb,	// (0x000274f7) list_single_graphic_pane_fp_ParamLimits

0xc7bb,	// (0x000274f7) list_single_graphic_pane_fp

0xc7bb,	// (0x000274f7) list_single_heading_pane_fp_ParamLimits

0xc7bb,	// (0x000274f7) list_single_heading_pane_fp

0xc7bb,	// (0x000274f7) list_single_pane_fp_ParamLimits

0xc7bb,	// (0x000274f7) list_single_pane_fp

0xc7d0,	// (0x0002750c) list_single_pane_fp_g1_ParamLimits

0xc7d0,	// (0x0002750c) list_single_pane_fp_g1

0x577e,	// (0x000204ba) list_single_pane_fp_g2_ParamLimits

0x577e,	// (0x000204ba) list_single_pane_fp_g2

0x578a,	// (0x000204c6) list_single_pane_fp_g3_ParamLimits

0x578a,	// (0x000204c6) list_single_pane_fp_g3

0xc7dc,	// (0x00027518) list_single_pane_fp_g4_ParamLimits

0xc7dc,	// (0x00027518) list_single_pane_fp_g4

0x0003,

0xfb69,	// (0x0002a8a5) list_single_pane_fp_g_ParamLimits

0xfb69,	// (0x0002a8a5) list_single_pane_fp_g

0x579e,	// (0x000204da) list_single_pane_fp_t1_ParamLimits

0x579e,	// (0x000204da) list_single_pane_fp_t1

0x57b5,	// (0x000204f1) list_single_graphic_pane_fp_g1_ParamLimits

0x57b5,	// (0x000204f1) list_single_graphic_pane_fp_g1

0xc7d0,	// (0x0002750c) list_single_graphic_pane_fp_g2_ParamLimits

0xc7d0,	// (0x0002750c) list_single_graphic_pane_fp_g2

0x577e,	// (0x000204ba) list_single_graphic_pane_fp_g3_ParamLimits

0x577e,	// (0x000204ba) list_single_graphic_pane_fp_g3

0x578a,	// (0x000204c6) list_single_graphic_pane_fp_g4_ParamLimits

0x578a,	// (0x000204c6) list_single_graphic_pane_fp_g4

0xc7dc,	// (0x00027518) list_single_graphic_pane_fp_g5_ParamLimits

0xc7dc,	// (0x00027518) list_single_graphic_pane_fp_g5

0x0004,

0xfb72,	// (0x0002a8ae) list_single_graphic_pane_fp_g_ParamLimits

0xfb72,	// (0x0002a8ae) list_single_graphic_pane_fp_g

0x57c1,	// (0x000204fd) list_single_graphic_pane_fp_t1_ParamLimits

0x57c1,	// (0x000204fd) list_single_graphic_pane_fp_t1

0x57b5,	// (0x000204f1) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x57b5,	// (0x000204f1) list_single_graphic_heading_pane_fp_g1

0xc7d0,	// (0x0002750c) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc7d0,	// (0x0002750c) list_single_graphic_heading_pane_fp_g2

0x577e,	// (0x000204ba) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x577e,	// (0x000204ba) list_single_graphic_heading_pane_fp_g3

0x578a,	// (0x000204c6) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x578a,	// (0x000204c6) list_single_graphic_heading_pane_fp_g4

0xc7dc,	// (0x00027518) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc7dc,	// (0x00027518) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb72,	// (0x0002a8ae) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb72,	// (0x0002a8ae) list_single_graphic_heading_pane_fp_g

0x57d7,	// (0x00020513) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x57d7,	// (0x00020513) list_single_graphic_heading_pane_fp_t1

0x57ed,	// (0x00020529) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x57ed,	// (0x00020529) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb7d,	// (0x0002a8b9) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb7d,	// (0x0002a8b9) list_single_graphic_heading_pane_fp_t

0x57ff,	// (0x0002053b) list_single_cale_day_pane_fp_g1_ParamLimits

0x57ff,	// (0x0002053b) list_single_cale_day_pane_fp_g1

0xc7e8,	// (0x00027524) list_single_cale_day_pane_fp_g2_ParamLimits

0xc7e8,	// (0x00027524) list_single_cale_day_pane_fp_g2

0x5837,	// (0x00020573) list_single_cale_day_pane_fp_g3_ParamLimits

0x5837,	// (0x00020573) list_single_cale_day_pane_fp_g3

0x585f,	// (0x0002059b) list_single_cale_day_pane_fp_g4_ParamLimits

0x585f,	// (0x0002059b) list_single_cale_day_pane_fp_g4

0x5883,	// (0x000205bf) list_single_cale_day_pane_fp_g5_ParamLimits

0x5883,	// (0x000205bf) list_single_cale_day_pane_fp_g5

0x0004,

0xfb82,	// (0x0002a8be) list_single_cale_day_pane_fp_g_ParamLimits

0xfb82,	// (0x0002a8be) list_single_cale_day_pane_fp_g

0x58a7,	// (0x000205e3) list_single_cale_day_pane_fp_t1_ParamLimits

0x58a7,	// (0x000205e3) list_single_cale_day_pane_fp_t1

0x58cd,	// (0x00020609) list_single_cale_day_pane_fp_t2_ParamLimits

0x58cd,	// (0x00020609) list_single_cale_day_pane_fp_t2

0x58e6,	// (0x00020622) list_single_cale_day_pane_fp_t3_ParamLimits

0x58e6,	// (0x00020622) list_single_cale_day_pane_fp_t3

0x0002,

0xfb8d,	// (0x0002a8c9) list_single_cale_day_pane_fp_t_ParamLimits

0xfb8d,	// (0x0002a8c9) list_single_cale_day_pane_fp_t

0xc7d0,	// (0x0002750c) list_empty_pane_fp_g1_ParamLimits

0xc7d0,	// (0x0002750c) list_empty_pane_fp_g1

0x58ff,	// (0x0002063b) list_empty_pane_fp_t1

0x590d,	// (0x00020649) list_empty_pane_fp_t2

0x0001,

0xfb94,	// (0x0002a8d0) list_empty_pane_fp_t

0xc7d0,	// (0x0002750c) list_single_heading_pane_fp_g1_ParamLimits

0xc7d0,	// (0x0002750c) list_single_heading_pane_fp_g1

0x577e,	// (0x000204ba) list_single_heading_pane_fp_g2_ParamLimits

0x577e,	// (0x000204ba) list_single_heading_pane_fp_g2

0x578a,	// (0x000204c6) list_single_heading_pane_fp_g3_ParamLimits

0x578a,	// (0x000204c6) list_single_heading_pane_fp_g3

0x0002,

0xfb99,	// (0x0002a8d5) list_single_heading_pane_fp_g_ParamLimits

0xfb99,	// (0x0002a8d5) list_single_heading_pane_fp_g

0x591b,	// (0x00020657) list_single_heading_pane_fp_t1_ParamLimits

0x591b,	// (0x00020657) list_single_heading_pane_fp_t1

0x592d,	// (0x00020669) list_single_heading_pane_fp_t2_ParamLimits

0x592d,	// (0x00020669) list_single_heading_pane_fp_t2

0x0001,

0xfba0,	// (0x0002a8dc) list_single_heading_pane_fp_t_ParamLimits

0xfba0,	// (0x0002a8dc) list_single_heading_pane_fp_t

0x8819,	// (0x00023555) aid_size_cell_fast

0x7fa4,	// (0x00022ce0) soft_indicator_pane_cp1_t1

0x8856,	// (0x00023592) cell_app_pane_cp2_ParamLimits

0x8856,	// (0x00023592) cell_app_pane_cp2

0x6f6b,	// (0x00021ca7) fep_hwr_candidate_drop_down_list_pane

0x1dc5,	// (0x0001cb01) fep_hwr_candidate_pane_g3_ParamLimits

0x1dc5,	// (0x0001cb01) fep_hwr_candidate_pane_g3

0x1dd2,	// (0x0001cb0e) fep_hwr_candidate_pane_g4_ParamLimits

0x1dd2,	// (0x0001cb0e) fep_hwr_candidate_pane_g4

0x0002,

0xfb14,	// (0x0002a850) fep_hwr_candidate_pane_g_ParamLimits

0xfb14,	// (0x0002a850) fep_hwr_candidate_pane_g

0xc297,	// (0x00026fd3) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc297,	// (0x00026fd3) fep_vkb_candidate_drop_down_list_pane

0xc6a8,	// (0x000273e4) fep_vkb_candidate_pane_g3

0xc6b0,	// (0x000273ec) fep_vkb_candidate_pane_g4

0x0002,

0xfb41,	// (0x0002a87d) fep_vkb_candidate_pane_g

0xc3b0,	// (0x000270ec) cell_hwr_candidate_pane_g1_ParamLimits

0xc6c7,	// (0x00027403) cell_hwr_candidate_pane_g3_ParamLimits

0xc6c7,	// (0x00027403) cell_hwr_candidate_pane_g3

0xc6e8,	// (0x00027424) cell_hwr_candidate_pane_g4_ParamLimits

0xc6e8,	// (0x00027424) cell_hwr_candidate_pane_g4

0x0002,

0xfb5b,	// (0x0002a897) cell_hwr_candidate_pane_g_ParamLimits

0xfb5b,	// (0x0002a897) cell_hwr_candidate_pane_g

0xc709,	// (0x00027445) cell_vkb_candidate_pane_g3_ParamLimits

0xc709,	// (0x00027445) cell_vkb_candidate_pane_g3

0xc724,	// (0x00027460) cell_vkb_candidate_pane_g4_ParamLimits

0xc724,	// (0x00027460) cell_vkb_candidate_pane_g4

0xc7f4,	// (0x00027530) cell_app_pane_cp2_g1_ParamLimits

0xc7f4,	// (0x00027530) cell_app_pane_cp2_g1

0xc812,	// (0x0002754e) cell_app_pane_cp2_g2_ParamLimits

0xc812,	// (0x0002754e) cell_app_pane_cp2_g2

0x0001,

0xfba5,	// (0x0002a8e1) cell_app_pane_cp2_g_ParamLimits

0xfba5,	// (0x0002a8e1) cell_app_pane_cp2_g

0xc81e,	// (0x0002755a) cell_app_pane_cp2_t1_ParamLimits

0xc81e,	// (0x0002755a) cell_app_pane_cp2_t1

0x8617,	// (0x00023353) grid_highlight_pane_cp1_ParamLimits

0x8617,	// (0x00023353) grid_highlight_pane_cp1

0x71a7,	// (0x00021ee3) cell_hwr_candidate_pane_cp1_ParamLimits

0x71a7,	// (0x00021ee3) cell_hwr_candidate_pane_cp1

0xc3b0,	// (0x000270ec) fep_hwr_candidate_drop_down_list_pane_g1

0xc830,	// (0x0002756c) fep_hwr_candidate_drop_down_list_pane_g2

0xc83d,	// (0x00027579) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbaa,	// (0x0002a8e6) fep_hwr_candidate_drop_down_list_pane_g

0x71c6,	// (0x00021f02) fep_hwr_candidate_drop_down_list_scroll_pane

0x71cf,	// (0x00021f0b) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x71cf,	// (0x00021f0b) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x71dc,	// (0x00021f18) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x71dc,	// (0x00021f18) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x71e9,	// (0x00021f25) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x71e9,	// (0x00021f25) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc709,	// (0x00027445) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc709,	// (0x00027445) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc724,	// (0x00027460) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc724,	// (0x00027460) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x71f6,	// (0x00021f32) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x71f6,	// (0x00021f32) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7211,	// (0x00021f4d) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7211,	// (0x00021f4d) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x722c,	// (0x00021f68) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x722c,	// (0x00021f68) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb1,	// (0x0002a8ed) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb1,	// (0x0002a8ed) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc84a,	// (0x00027586) cell_vkb_candidate_pane_cp1_ParamLimits

0xc84a,	// (0x00027586) cell_vkb_candidate_pane_cp1

0xc3b0,	// (0x000270ec) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc3b0,	// (0x000270ec) fep_vkb_candidate_drop_down_list_pane_g1

0xc830,	// (0x0002756c) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc830,	// (0x0002756c) fep_vkb_candidate_drop_down_list_pane_g2

0xc83d,	// (0x00027579) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc83d,	// (0x00027579) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbaa,	// (0x0002a8e6) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbaa,	// (0x0002a8e6) fep_vkb_candidate_drop_down_list_pane_g

0xc86a,	// (0x000275a6) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc86a,	// (0x000275a6) fep_vkb_candidate_drop_down_list_scroll_pane

0xc877,	// (0x000275b3) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc877,	// (0x000275b3) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc884,	// (0x000275c0) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc884,	// (0x000275c0) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc890,	// (0x000275cc) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc890,	// (0x000275cc) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc6c7,	// (0x00027403) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc6c7,	// (0x00027403) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc6e8,	// (0x00027424) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc6e8,	// (0x00027424) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc89c,	// (0x000275d8) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc89c,	// (0x000275d8) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc8bd,	// (0x000275f9) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc8bd,	// (0x000275f9) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc8de,	// (0x0002761a) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc8de,	// (0x0002761a) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc2,	// (0x0002a8fe) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc2,	// (0x0002a8fe) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7cd5,	// (0x00022a11) title_pane_g1_ParamLimits

0x7ce2,	// (0x00022a1e) title_pane_g2_ParamLimits

0xf554,	// (0x0002a290) title_pane_g_ParamLimits

0x8c88,	// (0x000239c4) aid_call2_pane

0x8c90,	// (0x000239cc) aid_call_pane

0x8c98,	// (0x000239d4) popup_clock_analogue_window_g1

0x8c98,	// (0x000239d4) popup_clock_analogue_window_g2

0x614d,	// (0x00020e89) popup_clock_analogue_window_g3

0x6156,	// (0x00020e92) popup_clock_analogue_window_g4

0x7cc1,	// (0x000229fd) popup_clock_analogue_window_g5

0x0004,

0xf6fe,	// (0x0002a43a) popup_clock_analogue_window_g

0x615e,	// (0x00020e9a) popup_clock_analogue_window_t1

0x616c,	// (0x00020ea8) clock_digital_number_pane_ParamLimits

0x616c,	// (0x00020ea8) clock_digital_number_pane

0x6178,	// (0x00020eb4) clock_digital_number_pane_cp02_ParamLimits

0x6178,	// (0x00020eb4) clock_digital_number_pane_cp02

0x6184,	// (0x00020ec0) clock_digital_number_pane_cp03_ParamLimits

0x6184,	// (0x00020ec0) clock_digital_number_pane_cp03

0x6190,	// (0x00020ecc) clock_digital_number_pane_cp04_ParamLimits

0x6190,	// (0x00020ecc) clock_digital_number_pane_cp04

0x619c,	// (0x00020ed8) clock_digital_separator_pane_ParamLimits

0x619c,	// (0x00020ed8) clock_digital_separator_pane

0x61a8,	// (0x00020ee4) popup_clock_digital_window_t1_ParamLimits

0x61a8,	// (0x00020ee4) popup_clock_digital_window_t1

0x7cc1,	// (0x000229fd) clock_digital_number_pane_g1

0x7cc1,	// (0x000229fd) clock_digital_number_pane_g2

0x0001,

0xf709,	// (0x0002a445) clock_digital_number_pane_g

0x7cc1,	// (0x000229fd) clock_digital_separator_pane_g1

0x7cc1,	// (0x000229fd) clock_digital_separator_pane_g2

0x0001,

0xf709,	// (0x0002a445) clock_digital_separator_pane_g

0x9602,	// (0x0002433e) aid_fill_nsta_ParamLimits

0x9744,	// (0x00024480) indicator_nsta_pane_ParamLimits

0x98b7,	// (0x000245f3) popup_clock_analogue_window

0x98b7,	// (0x000245f3) popup_clock_digital_window

0x7dab,	// (0x00022ae7) grid_indicator_nsta_pane_ParamLimits

0xbb1b,	// (0x00026857) clock_nsta_pane_t2

0x0001,

0xfa94,	// (0x0002a7d0) clock_nsta_pane_t

0x6111,	// (0x00020e4d) aid_size_max_handle

0x611b,	// (0x00020e57) aid_size_min_handle

0x92a0,	// (0x00023fdc) editor_scroll_pane

0xc8f9,	// (0x00027635) ex_editor_pane

0x8787,	// (0x000234c3) scroll_pane_cp13

0x85b6,	// (0x000232f2) scroll_pane_cp14

0x8cc7,	// (0x00023a03) scroll_pane_cp36

0x8cf3,	// (0x00023a2f) list_single_graphic_hl_pane_cp2_ParamLimits

0x8cf3,	// (0x00023a2f) list_single_graphic_hl_pane_cp2

0xb0d9,	// (0x00025e15) list_single_graphic_hl_pane_ParamLimits

0xb0d9,	// (0x00025e15) list_single_graphic_hl_pane

0x5943,	// (0x0002067f) aid_size_min_hl_cp1

0xc901,	// (0x0002763d) list_highlight_pane_cp34_ParamLimits

0xc901,	// (0x0002763d) list_highlight_pane_cp34

0xc912,	// (0x0002764e) list_single_graphic_hl_pane_g1_ParamLimits

0xc912,	// (0x0002764e) list_single_graphic_hl_pane_g1

0x594c,	// (0x00020688) list_single_graphic_hl_pane_g2_ParamLimits

0x594c,	// (0x00020688) list_single_graphic_hl_pane_g2

0x594c,	// (0x00020688) list_single_graphic_hl_pane_g3_ParamLimits

0x594c,	// (0x00020688) list_single_graphic_hl_pane_g3

0x5958,	// (0x00020694) list_single_graphic_hl_pane_g4_ParamLimits

0x5958,	// (0x00020694) list_single_graphic_hl_pane_g4

0x5964,	// (0x000206a0) list_single_graphic_hl_pane_g5_ParamLimits

0x5964,	// (0x000206a0) list_single_graphic_hl_pane_g5

0x0004,

0xfbd3,	// (0x0002a90f) list_single_graphic_hl_pane_g_ParamLimits

0xfbd3,	// (0x0002a90f) list_single_graphic_hl_pane_g

0x5978,	// (0x000206b4) list_single_graphic_hl_pane_t1_ParamLimits

0x5978,	// (0x000206b4) list_single_graphic_hl_pane_t1

0xc933,	// (0x0002766f) aid_size_min_hl_cp2

0xc93c,	// (0x00027678) list_highlight_pane_cp34_cp2_ParamLimits

0xc93c,	// (0x00027678) list_highlight_pane_cp34_cp2

0xc912,	// (0x0002764e) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc912,	// (0x0002764e) list_single_graphic_hl_pane_g1_cp2

0xc949,	// (0x00027685) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc949,	// (0x00027685) list_single_graphic_hl_pane_g2_cp2

0xc955,	// (0x00027691) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc955,	// (0x00027691) list_single_graphic_hl_pane_g3_cp2

0xbde5,	// (0x00026b21) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xbde5,	// (0x00026b21) list_single_graphic_hl_pane_g4_cp2

0xc91f,	// (0x0002765b) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc91f,	// (0x0002765b) list_single_graphic_hl_pane_g5_cp2

0x645c,	// (0x00021198) control_pane_g4_ParamLimits

0x645c,	// (0x00021198) control_pane_g4

0x95e0,	// (0x0002431c) bg_popup_sub_pane_cp10_ParamLimits

0xc13c,	// (0x00026e78) list_choice_list_pane_ParamLimits

0xc14b,	// (0x00026e87) scroll_pane_cp23

0x8034,	// (0x00022d70) bg_popup_preview_window_pane_cp02_ParamLimits

0xc775,	// (0x000274b1) list_preview_fixed_pane_ParamLimits

0xc78b,	// (0x000274c7) list_preview_fixed_pane_cp_ParamLimits

0xc78b,	// (0x000274c7) list_preview_fixed_pane_cp

0xc797,	// (0x000274d3) popup_preview_fixed_window_g1_ParamLimits

0xc797,	// (0x000274d3) popup_preview_fixed_window_g1

0xc7a3,	// (0x000274df) popup_preview_fixed_window_g2_ParamLimits

0xc7a3,	// (0x000274df) popup_preview_fixed_window_g2

0x0002,

0xfb62,	// (0x0002a89e) popup_preview_fixed_window_g_ParamLimits

0xfb62,	// (0x0002a89e) popup_preview_fixed_window_g

0x6085,	// (0x00020dc1) aid_navi_side_left_pane_ParamLimits

0x609a,	// (0x00020dd6) aid_navi_side_right_pane_ParamLimits

0x60b2,	// (0x00020dee) navi_icon_pane_stacon_ParamLimits

0x60c6,	// (0x00020e02) navi_navi_pane_stacon_ParamLimits

0x60b2,	// (0x00020dee) navi_text_pane_stacon_ParamLimits

0x7cb7,	// (0x000229f3) main_text_info_pane

0xc979,	// (0x000276b5) listscroll_text_info_pane

0xc981,	// (0x000276bd) list_text_info_pane_ParamLimits

0xc981,	// (0x000276bd) list_text_info_pane

0xc990,	// (0x000276cc) scroll_pane_cp24_ParamLimits

0xc990,	// (0x000276cc) scroll_pane_cp24

0xc9ae,	// (0x000276ea) list_text_info_pane_t1_ParamLimits

0xc9ae,	// (0x000276ea) list_text_info_pane_t1

0x659e,	// (0x000212da) popup_fast_swap2_window_ParamLimits

0x659e,	// (0x000212da) popup_fast_swap2_window

0xc9df,	// (0x0002771b) aid_size_cell_fast2

0x7cb7,	// (0x000229f3) bg_popup_window_pane_cp17

0x9f36,	// (0x00024c72) heading_pane_cp2

0x8280,	// (0x00022fbc) listscroll_fast2_pane

0xc9e9,	// (0x00027725) grid_fast2_pane

0xc9f3,	// (0x0002772f) listscroll_fast2_pane_g1

0xc9fb,	// (0x00027737) listscroll_fast2_pane_g2

0x0001,

0xfbde,	// (0x0002a91a) listscroll_fast2_pane_g

0x8787,	// (0x000234c3) scroll_pane_cp26

0xca05,	// (0x00027741) cell_fast2_pane_ParamLimits

0xca05,	// (0x00027741) cell_fast2_pane

0xca1a,	// (0x00027756) cell_fast2_pane_g1

0xca23,	// (0x0002775f) cell_fast2_pane_g2

0xca2c,	// (0x00027768) cell_fast2_pane_g3

0x0002,

0xfbe3,	// (0x0002a91f) cell_fast2_pane_g

0x8373,	// (0x000230af) grid_highlight_pane_cp9

0x8388,	// (0x000230c4) main_eswt_pane_ParamLimits

0x8388,	// (0x000230c4) main_eswt_pane

0xc9a5,	// (0x000276e1) list_single_text_info_pane

0xca34,	// (0x00027770) eswt_ctrl_button_pane

0xca34,	// (0x00027770) eswt_ctrl_canvas_pane

0xca3c,	// (0x00027778) eswt_ctrl_combo_pane

0xca34,	// (0x00027770) eswt_ctrl_default_pane

0xca34,	// (0x00027770) eswt_ctrl_label_pane

0xca44,	// (0x00027780) eswt_ctrl_wait_pane

0xca4c,	// (0x00027788) eswt_shell_pane

0x7cb7,	// (0x000229f3) listscroll_eswt_app_pane

0xca6c,	// (0x000277a8) popup_eswt_tasktip_window_ParamLimits

0xca6c,	// (0x000277a8) popup_eswt_tasktip_window

0x9b4c,	// (0x00024888) bg_popup_window_pane_cp18

0xca7d,	// (0x000277b9) eswt_control_pane_g1_ParamLimits

0xca7d,	// (0x000277b9) eswt_control_pane_g1

0xca8a,	// (0x000277c6) eswt_control_pane_g2_ParamLimits

0xca8a,	// (0x000277c6) eswt_control_pane_g2

0xca97,	// (0x000277d3) eswt_control_pane_g3_ParamLimits

0xca97,	// (0x000277d3) eswt_control_pane_g3

0xcaa4,	// (0x000277e0) eswt_control_pane_g4_ParamLimits

0xcaa4,	// (0x000277e0) eswt_control_pane_g4

0x0003,

0xfbea,	// (0x0002a926) eswt_control_pane_g_ParamLimits

0xfbea,	// (0x0002a926) eswt_control_pane_g

0x8617,	// (0x00023353) bg_button_pane_ParamLimits

0x8617,	// (0x00023353) bg_button_pane

0x8388,	// (0x000230c4) common_borders_pane_copy2_ParamLimits

0x8388,	// (0x000230c4) common_borders_pane_copy2

0xcab1,	// (0x000277ed) control_button_pane_g1_ParamLimits

0xcab1,	// (0x000277ed) control_button_pane_g1

0xcabd,	// (0x000277f9) control_button_pane_g2_ParamLimits

0xcabd,	// (0x000277f9) control_button_pane_g2

0xcac9,	// (0x00027805) control_button_pane_g3_ParamLimits

0xcac9,	// (0x00027805) control_button_pane_g3

0x0002,

0xfbf3,	// (0x0002a92f) control_button_pane_g_ParamLimits

0xfbf3,	// (0x0002a92f) control_button_pane_g

0xcadd,	// (0x00027819) control_button_pane_t1

0xcaeb,	// (0x00027827) control_button_pane_t2

0x0001,

0xfbfa,	// (0x0002a936) control_button_pane_t

0x9ad8,	// (0x00024814) bg_button_pane_g1

0x9ae0,	// (0x0002481c) bg_button_pane_g2

0x9ae8,	// (0x00024824) bg_button_pane_g3

0x9af0,	// (0x0002482c) bg_button_pane_g4

0x9af8,	// (0x00024834) bg_button_pane_g5

0x9b00,	// (0x0002483c) bg_button_pane_g6

0x9b08,	// (0x00024844) bg_button_pane_g7

0x9b10,	// (0x0002484c) bg_button_pane_g8

0x9b18,	// (0x00024854) bg_button_pane_g9

0x0008,

0xf865,	// (0x0002a5a1) bg_button_pane_g

0xc0f7,	// (0x00026e33) common_borders_pane_ParamLimits

0xc0f7,	// (0x00026e33) common_borders_pane

0xca7d,	// (0x000277b9) eswt_control_pane_g1_copy1_ParamLimits

0xca7d,	// (0x000277b9) eswt_control_pane_g1_copy1

0xca8a,	// (0x000277c6) eswt_control_pane_g2_copy1_ParamLimits

0xca8a,	// (0x000277c6) eswt_control_pane_g2_copy1

0xca97,	// (0x000277d3) eswt_control_pane_g3_copy1_ParamLimits

0xca97,	// (0x000277d3) eswt_control_pane_g3_copy1

0xcaa4,	// (0x000277e0) eswt_control_pane_g4_copy1_ParamLimits

0xcaa4,	// (0x000277e0) eswt_control_pane_g4_copy1

0xc132,	// (0x00026e6e) bg_eswt_ctrl_canvas_pane_g1

0xc0f7,	// (0x00026e33) common_borders_pane_cp2_ParamLimits

0xc0f7,	// (0x00026e33) common_borders_pane_cp2

0xc0f7,	// (0x00026e33) common_borders_pane_cp3_ParamLimits

0xc0f7,	// (0x00026e33) common_borders_pane_cp3

0xcaf9,	// (0x00027835) separator_horizontal_pane

0xcb01,	// (0x0002783d) separator_vertical_pane

0xca7d,	// (0x000277b9) eswt_control_pane_g1_copy2_ParamLimits

0xca7d,	// (0x000277b9) eswt_control_pane_g1_copy2

0xca8a,	// (0x000277c6) eswt_control_pane_g2_copy2_ParamLimits

0xca8a,	// (0x000277c6) eswt_control_pane_g2_copy2

0xca97,	// (0x000277d3) eswt_control_pane_g3_copy2_ParamLimits

0xca97,	// (0x000277d3) eswt_control_pane_g3_copy2

0xcaa4,	// (0x000277e0) eswt_control_pane_g4_copy2_ParamLimits

0xcaa4,	// (0x000277e0) eswt_control_pane_g4_copy2

0x7cb7,	// (0x000229f3) common_borders_pane_cp4

0xcb0a,	// (0x00027846) separator_horizontal_pane_g1

0xcb13,	// (0x0002784f) separator_horizontal_pane_g2

0xcb1c,	// (0x00027858) separator_horizontal_pane_g3

0x0002,

0xfbff,	// (0x0002a93b) separator_horizontal_pane_g

0xca7d,	// (0x000277b9) eswt_control_pane_g1_copy3_ParamLimits

0xca7d,	// (0x000277b9) eswt_control_pane_g1_copy3

0xca8a,	// (0x000277c6) eswt_control_pane_g2_copy3_ParamLimits

0xca8a,	// (0x000277c6) eswt_control_pane_g2_copy3

0xca97,	// (0x000277d3) eswt_control_pane_g3_copy3_ParamLimits

0xca97,	// (0x000277d3) eswt_control_pane_g3_copy3

0xcaa4,	// (0x000277e0) eswt_control_pane_g4_copy3_ParamLimits

0xcaa4,	// (0x000277e0) eswt_control_pane_g4_copy3

0x7cb7,	// (0x000229f3) common_borders_pane_cp5

0xcb25,	// (0x00027861) separator_vertical_pane_g1

0xcb2e,	// (0x0002786a) separator_vertical_pane_g2

0xcb37,	// (0x00027873) separator_vertical_pane_g3

0x0002,

0xfc06,	// (0x0002a942) separator_vertical_pane_g

0xca7d,	// (0x000277b9) eswt_control_pane_g1_copy4_ParamLimits

0xca7d,	// (0x000277b9) eswt_control_pane_g1_copy4

0xca8a,	// (0x000277c6) eswt_control_pane_g2_copy4_ParamLimits

0xca8a,	// (0x000277c6) eswt_control_pane_g2_copy4

0xca97,	// (0x000277d3) eswt_control_pane_g3_copy4_ParamLimits

0xca97,	// (0x000277d3) eswt_control_pane_g3_copy4

0xcaa4,	// (0x000277e0) eswt_control_pane_g4_copy4_ParamLimits

0xcaa4,	// (0x000277e0) eswt_control_pane_g4_copy4

0xcb40,	// (0x0002787c) eswt_ctrl_combo_button_pane

0xcb48,	// (0x00027884) eswt_ctrl_input_pane

0xcb50,	// (0x0002788c) popup_choice_list_window_cp70

0xcb58,	// (0x00027894) eswt_ctrl_input_pane_t1

0x7cb7,	// (0x000229f3) input_focus_pane_cp70

0xc0f7,	// (0x00026e33) bg_button_pane_cp70_ParamLimits

0xc0f7,	// (0x00026e33) bg_button_pane_cp70

0xcb66,	// (0x000278a2) eswt_ctrl_combo_button_pane_g1

0xcb6e,	// (0x000278aa) wait_bar_pane_cp70

0x9b4c,	// (0x00024888) bg_popup_window_pane_cp70_ParamLimits

0x9b4c,	// (0x00024888) bg_popup_window_pane_cp70

0xcb76,	// (0x000278b2) popup_eswt_tasktip_window_t1

0xcb8c,	// (0x000278c8) wait_bar_pane_cp71_ParamLimits

0xcb8c,	// (0x000278c8) wait_bar_pane_cp71

0xcb98,	// (0x000278d4) grid_eswt_app_pane

0x8aaa,	// (0x000237e6) scroll_pane_cp70

0xcba1,	// (0x000278dd) cell_eswt_app_pane_ParamLimits

0xcba1,	// (0x000278dd) cell_eswt_app_pane

0xcbd1,	// (0x0002790d) cell_eswt_app_pane_g1_ParamLimits

0xcbd1,	// (0x0002790d) cell_eswt_app_pane_g1

0xcc00,	// (0x0002793c) cell_eswt_app_pane_g2_ParamLimits

0xcc00,	// (0x0002793c) cell_eswt_app_pane_g2

0x0001,

0xfc0d,	// (0x0002a949) cell_eswt_app_pane_g_ParamLimits

0xfc0d,	// (0x0002a949) cell_eswt_app_pane_g

0xcc29,	// (0x00027965) cell_eswt_app_pane_t1_ParamLimits

0xcc29,	// (0x00027965) cell_eswt_app_pane_t1

0xcc5b,	// (0x00027997) grid_highlight_pane_cp70_ParamLimits

0xcc5b,	// (0x00027997) grid_highlight_pane_cp70

0x9175,	// (0x00023eb1) set_content_pane_g1

0x9540,	// (0x0002427c) status_small_volume_pane

0x7247,	// (0x00021f83) status_small_volume_pane_g1

0x724f,	// (0x00021f8b) volume_small2_pane

0x7258,	// (0x00021f94) volume_small2_pane_g1

0x7261,	// (0x00021f9d) volume_small2_pane_g2

0x726a,	// (0x00021fa6) volume_small2_pane_g3

0x7273,	// (0x00021faf) volume_small2_pane_g4

0x727c,	// (0x00021fb8) volume_small2_pane_g5

0x7285,	// (0x00021fc1) volume_small2_pane_g6

0x728e,	// (0x00021fca) volume_small2_pane_g7

0x7297,	// (0x00021fd3) volume_small2_pane_g8

0x72a0,	// (0x00021fdc) volume_small2_pane_g9

0x72a9,	// (0x00021fe5) volume_small2_pane_g10

0x0009,

0xfc12,	// (0x0002a94e) volume_small2_pane_g

0xc4f8,	// (0x00027234) fep_vkb_top_text_pane_g1_ParamLimits

0xc513,	// (0x0002724f) fep_vkb_top_text_pane_t1_ParamLimits

0xc7af,	// (0x000274eb) popup_preview_fixed_window_g3_ParamLimits

0xc7af,	// (0x000274eb) popup_preview_fixed_window_g3

0x6a4b,	// (0x00021787) popup_toolbar_trans_pane

0xaebc,	// (0x00025bf8) aid_height_set_list_ParamLimits

0xaecd,	// (0x00025c09) aid_size_parent_ParamLimits

0x95e0,	// (0x0002431c) list_highlight_pane_cp2_ParamLimits

0x9175,	// (0x00023eb1) set_content_pane_g1_ParamLimits

0xb0f5,	// (0x00025e31) list_single_image_pane_ParamLimits

0xb0f5,	// (0x00025e31) list_single_image_pane

0xcc67,	// (0x000279a3) aid_size_cell_image_ParamLimits

0xcc67,	// (0x000279a3) aid_size_cell_image

0xcc74,	// (0x000279b0) grid_single_image_pane_ParamLimits

0xcc74,	// (0x000279b0) grid_single_image_pane

0x9ff5,	// (0x00024d31) list_single_image_pane_g1_ParamLimits

0x9ff5,	// (0x00024d31) list_single_image_pane_g1

0xcc80,	// (0x000279bc) list_single_image_pane_g2_ParamLimits

0xcc80,	// (0x000279bc) list_single_image_pane_g2

0x0001,

0xfc27,	// (0x0002a963) list_single_image_pane_g_ParamLimits

0xfc27,	// (0x0002a963) list_single_image_pane_g

0xcc94,	// (0x000279d0) list_single_image_pane_t1_ParamLimits

0xcc94,	// (0x000279d0) list_single_image_pane_t1

0xccaa,	// (0x000279e6) cell_image_list_pane_ParamLimits

0xccaa,	// (0x000279e6) cell_image_list_pane

0xccbe,	// (0x000279fa) cell_image_list_pane_g1

0xccc7,	// (0x00027a03) cell_image_list_pane_g2

0x0001,

0xfc2c,	// (0x0002a968) cell_image_list_pane_g

0xccd0,	// (0x00027a0c) aid_size_cell_tb_trans_pane

0x8617,	// (0x00023353) bg_tb_trans_pane

0xcce2,	// (0x00027a1e) grid_tb_trans_pane

0x9ad8,	// (0x00024814) bg_tb_trans_pane_g1

0x9ae0,	// (0x0002481c) bg_tb_trans_pane_g2

0x9ae8,	// (0x00024824) bg_tb_trans_pane_g3

0x9af0,	// (0x0002482c) bg_tb_trans_pane_g4

0x9af8,	// (0x00024834) bg_tb_trans_pane_g5

0x9b10,	// (0x0002484c) bg_tb_trans_pane_g6

0x9b18,	// (0x00024854) bg_tb_trans_pane_g7

0x9b00,	// (0x0002483c) bg_tb_trans_pane_g8

0x9b08,	// (0x00024844) bg_tb_trans_pane_g9

0x0008,

0xfc31,	// (0x0002a96d) bg_tb_trans_pane_g

0xccf6,	// (0x00027a32) cell_toolbar_trans_pane_ParamLimits

0xccf6,	// (0x00027a32) cell_toolbar_trans_pane

0xc132,	// (0x00026e6e) cell_toolbar_trans_pane_g1

0xbcf0,	// (0x00026a2c) list_form2_midp_pane_t1

0xbcfe,	// (0x00026a3a) list_form2_midp_pane_t2

0x0001,

0xfada,	// (0x0002a816) list_form2_midp_pane_t

0xbd0c,	// (0x00026a48) scroll_pane_cp51_ParamLimits

0xbed4,	// (0x00026c10) form2_midp_wait_pane_g1

0xbedd,	// (0x00026c19) form2_midp_wait_pane_g2

0xbee6,	// (0x00026c22) form2_midp_wait_pane_g3

0x0002,

0xfaef,	// (0x0002a82b) form2_midp_wait_pane_g

0x7dab,	// (0x00022ae7) list_highlight_pane_cp21_ParamLimits

0xbf3d,	// (0x00026c79) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbf4c,	// (0x00026c88) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x53f7,	// (0x00020133) list_single_2graphic_im_pane_ParamLimits

0x53f7,	// (0x00020133) list_single_2graphic_im_pane

0xcd1c,	// (0x00027a58) list_single_2graphic_im_pane_g1_ParamLimits

0xcd1c,	// (0x00027a58) list_single_2graphic_im_pane_g1

0xcd2d,	// (0x00027a69) list_single_2graphic_im_pane_g2_ParamLimits

0xcd2d,	// (0x00027a69) list_single_2graphic_im_pane_g2

0xcd39,	// (0x00027a75) list_single_2graphic_im_pane_g3_ParamLimits

0xcd39,	// (0x00027a75) list_single_2graphic_im_pane_g3

0x0003,

0xfc44,	// (0x0002a980) list_single_2graphic_im_pane_g_ParamLimits

0xfc44,	// (0x0002a980) list_single_2graphic_im_pane_g

0xcd59,	// (0x00027a95) list_single_2graphic_im_pane_t1_ParamLimits

0xcd59,	// (0x00027a95) list_single_2graphic_im_pane_t1

0xc7bb,	// (0x000274f7) list_single_graphic_2heading_pane_fp_ParamLimits

0xc7bb,	// (0x000274f7) list_single_graphic_2heading_pane_fp

0x57b5,	// (0x000204f1) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x57b5,	// (0x000204f1) list_single_graphic_2heading_pane_fp_g1

0xc7d0,	// (0x0002750c) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc7d0,	// (0x0002750c) list_single_graphic_2heading_pane_fp_g2

0x577e,	// (0x000204ba) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x577e,	// (0x000204ba) list_single_graphic_2heading_pane_fp_g3

0x578a,	// (0x000204c6) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x578a,	// (0x000204c6) list_single_graphic_2heading_pane_fp_g4

0xc7dc,	// (0x00027518) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc7dc,	// (0x00027518) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb72,	// (0x0002a8ae) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb72,	// (0x0002a8ae) list_single_graphic_2heading_pane_fp_g

0x598e,	// (0x000206ca) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x598e,	// (0x000206ca) list_single_graphic_2heading_pane_fp_t1

0x57ed,	// (0x00020529) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x57ed,	// (0x00020529) list_single_graphic_2heading_pane_fp_t2

0x59a4,	// (0x000206e0) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x59a4,	// (0x000206e0) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc4d,	// (0x0002a989) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc4d,	// (0x0002a989) list_single_graphic_2heading_pane_fp_t

0xc1be,	// (0x00026efa) fep_hwr_write_pane_g5_ParamLimits

0xc1be,	// (0x00026efa) fep_hwr_write_pane_g5

0xc1ca,	// (0x00026f06) fep_hwr_write_pane_g6_ParamLimits

0xc1ca,	// (0x00026f06) fep_hwr_write_pane_g6

0xca4c,	// (0x00027788) eswt_shell_pane_ParamLimits

0x9b4c,	// (0x00024888) bg_popup_window_pane_cp18_ParamLimits

0xae15,	// (0x00025b51) heading_pane_cp70

0xcb76,	// (0x000278b2) popup_eswt_tasktip_window_t1_ParamLimits

0x9657,	// (0x00024393) aid_touch_tab_arrow_left

0x9663,	// (0x0002439f) aid_touch_tab_arrow_right

0x7cf3,	// (0x00022a2f) title_pane_g3_ParamLimits

0x7cf3,	// (0x00022a2f) title_pane_g3

0x85d6,	// (0x00023312) set_value_pane_g1

0x6a4b,	// (0x00021787) popup_toolbar_trans_pane_ParamLimits

0xccd0,	// (0x00027a0c) aid_size_cell_tb_trans_pane_ParamLimits

0x8617,	// (0x00023353) bg_tb_trans_pane_ParamLimits

0xcce2,	// (0x00027a1e) grid_tb_trans_pane_ParamLimits

0x8034,	// (0x00022d70) cont_note_pane_ParamLimits

0x8034,	// (0x00022d70) cont_note_pane

0x8388,	// (0x000230c4) cont_snote2_single_text_pane_ParamLimits

0x8388,	// (0x000230c4) cont_snote2_single_text_pane

0x8388,	// (0x000230c4) cont_snote2_single_graphic_pane_ParamLimits

0x8388,	// (0x000230c4) cont_snote2_single_graphic_pane

0xa15d,	// (0x00024e99) cont_note_wait_pane_ParamLimits

0xa15d,	// (0x00024e99) cont_note_wait_pane

0xa15d,	// (0x00024e99) cont_note_image_pane_ParamLimits

0xa15d,	// (0x00024e99) cont_note_image_pane

0xcd8a,	// (0x00027ac6) popup_note2_window_g1_ParamLimits

0xcd8a,	// (0x00027ac6) popup_note2_window_g1

0xcdbb,	// (0x00027af7) popup_note2_window_t1_ParamLimits

0xcdbb,	// (0x00027af7) popup_note2_window_t1

0xce00,	// (0x00027b3c) popup_note2_window_t2_ParamLimits

0xce00,	// (0x00027b3c) popup_note2_window_t2

0xce45,	// (0x00027b81) popup_note2_window_t3_ParamLimits

0xce45,	// (0x00027b81) popup_note2_window_t3

0xce8a,	// (0x00027bc6) popup_note2_window_t4_ParamLimits

0xce8a,	// (0x00027bc6) popup_note2_window_t4

0x80b8,	// (0x00022df4) popup_note2_window_t5_ParamLimits

0x80b8,	// (0x00022df4) popup_note2_window_t5

0x0004,

0xfc59,	// (0x0002a995) popup_note2_window_t_ParamLimits

0xfc59,	// (0x0002a995) popup_note2_window_t

0xceb9,	// (0x00027bf5) popup_note2_image_window_g1_ParamLimits

0xceb9,	// (0x00027bf5) popup_note2_image_window_g1

0xcec5,	// (0x00027c01) popup_note2_image_window_g2_ParamLimits

0xcec5,	// (0x00027c01) popup_note2_image_window_g2

0x0001,

0xfc64,	// (0x0002a9a0) popup_note2_image_window_g_ParamLimits

0xfc64,	// (0x0002a9a0) popup_note2_image_window_g

0xced7,	// (0x00027c13) popup_note2_image_window_t1_ParamLimits

0xced7,	// (0x00027c13) popup_note2_image_window_t1

0xceef,	// (0x00027c2b) popup_note2_image_window_t2_ParamLimits

0xceef,	// (0x00027c2b) popup_note2_image_window_t2

0xcf07,	// (0x00027c43) popup_note2_image_window_t3_ParamLimits

0xcf07,	// (0x00027c43) popup_note2_image_window_t3

0x0002,

0xfc69,	// (0x0002a9a5) popup_note2_image_window_t_ParamLimits

0xfc69,	// (0x0002a9a5) popup_note2_image_window_t

0xa16b,	// (0x00024ea7) popup_note2_wait_window_g1_ParamLimits

0xa16b,	// (0x00024ea7) popup_note2_wait_window_g1

0xcf23,	// (0x00027c5f) popup_note2_wait_window_g2_ParamLimits

0xcf23,	// (0x00027c5f) popup_note2_wait_window_g2

0xa183,	// (0x00024ebf) popup_note2_wait_window_g3_ParamLimits

0xa183,	// (0x00024ebf) popup_note2_wait_window_g3

0x0002,

0xfc70,	// (0x0002a9ac) popup_note2_wait_window_g_ParamLimits

0xfc70,	// (0x0002a9ac) popup_note2_wait_window_g

0xcf2f,	// (0x00027c6b) popup_note2_wait_window_t1_ParamLimits

0xcf2f,	// (0x00027c6b) popup_note2_wait_window_t1

0xcf4d,	// (0x00027c89) popup_note2_wait_window_t2_ParamLimits

0xcf4d,	// (0x00027c89) popup_note2_wait_window_t2

0xcf6b,	// (0x00027ca7) popup_note2_wait_window_t3_ParamLimits

0xcf6b,	// (0x00027ca7) popup_note2_wait_window_t3

0xcf7d,	// (0x00027cb9) popup_note2_wait_window_t4_ParamLimits

0xcf7d,	// (0x00027cb9) popup_note2_wait_window_t4

0x0003,

0xfc77,	// (0x0002a9b3) popup_note2_wait_window_t_ParamLimits

0xfc77,	// (0x0002a9b3) popup_note2_wait_window_t

0xcf8f,	// (0x00027ccb) wait_bar2_pane_ParamLimits

0xcf8f,	// (0x00027ccb) wait_bar2_pane

0xcfa7,	// (0x00027ce3) popup_snote2_single_text_window_g1_ParamLimits

0xcfa7,	// (0x00027ce3) popup_snote2_single_text_window_g1

0xcfcf,	// (0x00027d0b) popup_snote2_single_text_window_t1_ParamLimits

0xcfcf,	// (0x00027d0b) popup_snote2_single_text_window_t1

0xd01b,	// (0x00027d57) popup_snote2_single_text_window_t2_ParamLimits

0xd01b,	// (0x00027d57) popup_snote2_single_text_window_t2

0xd067,	// (0x00027da3) popup_snote2_single_text_window_t3_ParamLimits

0xd067,	// (0x00027da3) popup_snote2_single_text_window_t3

0xd0a8,	// (0x00027de4) popup_snote2_single_text_window_t4_ParamLimits

0xd0a8,	// (0x00027de4) popup_snote2_single_text_window_t4

0xd0de,	// (0x00027e1a) popup_snote2_single_text_window_t5_ParamLimits

0xd0de,	// (0x00027e1a) popup_snote2_single_text_window_t5

0x0004,

0xfc80,	// (0x0002a9bc) popup_snote2_single_text_window_t_ParamLimits

0xfc80,	// (0x0002a9bc) popup_snote2_single_text_window_t

0xd109,	// (0x00027e45) popup_snote2_single_graphic_window_g1_ParamLimits

0xd109,	// (0x00027e45) popup_snote2_single_graphic_window_g1

0xd131,	// (0x00027e6d) popup_snote2_single_graphic_window_g2_ParamLimits

0xd131,	// (0x00027e6d) popup_snote2_single_graphic_window_g2

0x0001,

0xfc8b,	// (0x0002a9c7) popup_snote2_single_graphic_window_g_ParamLimits

0xfc8b,	// (0x0002a9c7) popup_snote2_single_graphic_window_g

0xd159,	// (0x00027e95) popup_snote2_single_graphic_window_t1_ParamLimits

0xd159,	// (0x00027e95) popup_snote2_single_graphic_window_t1

0xd1a5,	// (0x00027ee1) popup_snote2_single_graphic_window_t2_ParamLimits

0xd1a5,	// (0x00027ee1) popup_snote2_single_graphic_window_t2

0xd067,	// (0x00027da3) popup_snote2_single_graphic_window_t3_ParamLimits

0xd067,	// (0x00027da3) popup_snote2_single_graphic_window_t3

0xd0a8,	// (0x00027de4) popup_snote2_single_graphic_window_t4_ParamLimits

0xd0a8,	// (0x00027de4) popup_snote2_single_graphic_window_t4

0xd0de,	// (0x00027e1a) popup_snote2_single_graphic_window_t5_ParamLimits

0xd0de,	// (0x00027e1a) popup_snote2_single_graphic_window_t5

0x0004,

0xfc90,	// (0x0002a9cc) popup_snote2_single_graphic_window_t_ParamLimits

0xfc90,	// (0x0002a9cc) popup_snote2_single_graphic_window_t

0xbbcd,	// (0x00026909) clock_nsta_pane_cp2_t1

0xbbcd,	// (0x00026909) clock_nsta_pane_cp2_t2

0x0001,

0xfab0,	// (0x0002a7ec) clock_nsta_pane_cp2_t

0x4fd0,	// (0x0001fd0c) form_field_data_wide_pane_g1_ParamLimits

0x8625,	// (0x00023361) form_field_data_wide_pane_g2_ParamLimits

0x8625,	// (0x00023361) form_field_data_wide_pane_g2

0x8631,	// (0x0002336d) form_field_data_wide_pane_g3_ParamLimits

0x8631,	// (0x0002336d) form_field_data_wide_pane_g3

0x0002,

0xf681,	// (0x0002a3bd) form_field_data_wide_pane_g_ParamLimits

0xf681,	// (0x0002a3bd) form_field_data_wide_pane_g

0xbab7,	// (0x000267f3) grid_touch_3_pane_ParamLimits

0xbab7,	// (0x000267f3) grid_touch_3_pane

0xd1f1,	// (0x00027f2d) cell_touch_3_pane_ParamLimits

0xd1f1,	// (0x00027f2d) cell_touch_3_pane

0xc132,	// (0x00026e6e) cell_touch_3_pane_g1

0xc132,	// (0x00026e6e) cell_touch_3_pane_g2

0x0001,

0xfb35,	// (0x0002a871) cell_touch_3_pane_g

0x80ea,	// (0x00022e26) cont_query_data_pane

0x80f2,	// (0x00022e2e) cont_query_data_pane_cp1

0xd21f,	// (0x00027f5b) button_value_adjust_pane_cp7

0xd227,	// (0x00027f63) query_popup_pane_cp3

0x8d88,	// (0x00023ac4) bg_popup_sub_pane_cp22_ParamLimits

0x61c7,	// (0x00020f03) navi_navi_volume_pane_cp2

0x61e2,	// (0x00020f1e) popup_side_volume_key_window_g2

0x61f1,	// (0x00020f2d) popup_side_volume_key_window_g3

0x0002,

0xf717,	// (0x0002a453) popup_side_volume_key_window_g

0x620e,	// (0x00020f4a) popup_side_volume_key_window_t2

0x0001,

0xf71e,	// (0x0002a45a) popup_side_volume_key_window_t

0x903f,	// (0x00023d7b) popup_side_volume_key_window_ParamLimits

0x4c27,	// (0x0001f963) list_double_graphic_pane_g4_ParamLimits

0x4c27,	// (0x0001f963) list_double_graphic_pane_g4

0x5436,	// (0x00020172) list_single_2heading_msg_pane_ParamLimits

0x5436,	// (0x00020172) list_single_2heading_msg_pane

0x59c4,	// (0x00020700) list_single_2heading_msg_pane_g1_ParamLimits

0x59c4,	// (0x00020700) list_single_2heading_msg_pane_g1

0x4a56,	// (0x0001f792) list_single_2heading_msg_pane_g2_ParamLimits

0x4a56,	// (0x0001f792) list_single_2heading_msg_pane_g2

0x59d0,	// (0x0002070c) list_single_2heading_msg_pane_g3_ParamLimits

0x59d0,	// (0x0002070c) list_single_2heading_msg_pane_g3

0x59dc,	// (0x00020718) list_single_2heading_msg_pane_g4_ParamLimits

0x59dc,	// (0x00020718) list_single_2heading_msg_pane_g4

0x0003,

0xfc9b,	// (0x0002a9d7) list_single_2heading_msg_pane_g_ParamLimits

0xfc9b,	// (0x0002a9d7) list_single_2heading_msg_pane_g

0x59f4,	// (0x00020730) list_single_2heading_msg_pane_t1_ParamLimits

0x59f4,	// (0x00020730) list_single_2heading_msg_pane_t1

0x5a1c,	// (0x00020758) list_single_2heading_msg_pane_t2_ParamLimits

0x5a1c,	// (0x00020758) list_single_2heading_msg_pane_t2

0x5a50,	// (0x0002078c) list_single_2heading_msg_pane_t3_ParamLimits

0x5a50,	// (0x0002078c) list_single_2heading_msg_pane_t3

0x5a89,	// (0x000207c5) list_single_2heading_msg_pane_t4_ParamLimits

0x5a89,	// (0x000207c5) list_single_2heading_msg_pane_t4

0x0003,

0xfca4,	// (0x0002a9e0) list_single_2heading_msg_pane_t_ParamLimits

0xfca4,	// (0x0002a9e0) list_single_2heading_msg_pane_t

0x7cff,	// (0x00022a3b) title_pane_g4_ParamLimits

0x7cff,	// (0x00022a3b) title_pane_g4

0x5fd6,	// (0x00020d12) title_pane_stacon_g3_ParamLimits

0x5fd6,	// (0x00020d12) title_pane_stacon_g3

0xcd4d,	// (0x00027a89) list_single_2graphic_im_pane_g4_ParamLimits

0xcd4d,	// (0x00027a89) list_single_2graphic_im_pane_g4

0xabbc,	// (0x000258f8) popup_side_volume_key_window_cp

0xb405,	// (0x00026141) main_idle_act2_pane_t1

0x6b3d,	// (0x00021879) toolbar_button_pane_g10

0x8580,	// (0x000232bc) popup_toolbar_window_cp1

0xbbbe,	// (0x000268fa) clock_nsta_pane_cp_t1

0xbbbe,	// (0x000268fa) clock_nsta_pane_cp_t2

0x0001,

0xfaab,	// (0x0002a7e7) clock_nsta_pane_cp_t

0x61c7,	// (0x00020f03) navi_navi_volume_pane_cp2_ParamLimits

0x61d6,	// (0x00020f12) popup_side_volume_key_window_g1_ParamLimits

0x61e2,	// (0x00020f1e) popup_side_volume_key_window_g2_ParamLimits

0x61f1,	// (0x00020f2d) popup_side_volume_key_window_g3_ParamLimits

0xf717,	// (0x0002a453) popup_side_volume_key_window_g_ParamLimits

0x6f57,	// (0x00021c93) fep_hwr_aid_pane

0x1db7,	// (0x0001caf3) bg_fep_hwr_top_pane_g4_ParamLimits

0xc18e,	// (0x00026eca) fep_hwr_top_pane_g1_ParamLimits

0xc1a0,	// (0x00026edc) fep_hwr_top_pane_g2_ParamLimits

0x7010,	// (0x00021d4c) fep_hwr_top_pane_g3_ParamLimits

0xfb00,	// (0x0002a83c) fep_hwr_top_pane_g_ParamLimits

0x7025,	// (0x00021d61) fep_hwr_top_text_pane_ParamLimits

0xa97f,	// (0x000256bb) aid_touch_tab_arrow_arrow_2

0xa988,	// (0x000256c4) aid_touch_tab_arrow_left_2

0x6f6b,	// (0x00021ca7) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6fa2,	// (0x00021cde) fep_hwr_prediction_pane

0xc300,	// (0x0002703c) fep_vkb_prediction_pane

0xc404,	// (0x00027140) fep_vkb_side_pane_g3_ParamLimits

0xc404,	// (0x00027140) fep_vkb_side_pane_g3

0xc3b0,	// (0x000270ec) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc830,	// (0x0002756c) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc83d,	// (0x00027579) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbaa,	// (0x0002a8e6) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd24c,	// (0x00027f88) fep_hwr_prediction_pane_g1

0x72b2,	// (0x00021fee) fep_hwr_prediction_pane_g2

0x72ba,	// (0x00021ff6) fep_hwr_prediction_pane_g3

0x72c2,	// (0x00021ffe) fep_hwr_prediction_pane_g4

0x0003,

0xfcad,	// (0x0002a9e9) fep_hwr_prediction_pane_g

0xd24c,	// (0x00027f88) fep_vkb_prediction_pane_g1

0xd256,	// (0x00027f92) fep_vkb_prediction_pane_g2

0xd25e,	// (0x00027f9a) fep_vkb_prediction_pane_g3

0xd266,	// (0x00027fa2) fep_vkb_prediction_pane_g4

0x0003,

0xfcb6,	// (0x0002a9f2) fep_vkb_prediction_pane_g

0xb085,	// (0x00025dc1) slider_set_pane_g3

0xb099,	// (0x00025dd5) slider_set_pane_g4

0xb0b1,	// (0x00025ded) slider_set_pane_g5

0xb085,	// (0x00025dc1) slider_set_pane_g6

0x6e19,	// (0x00021b55) slider_set_pane_g7

0xb032,	// (0x00025d6e) slider_form_pane_g3

0xb03b,	// (0x00025d77) slider_form_pane_g4

0xb043,	// (0x00025d7f) slider_form_pane_g5

0xb032,	// (0x00025d6e) slider_form_pane_g6

0xb04b,	// (0x00025d87) slider_form_pane_g7

0xb6af,	// (0x000263eb) slider_set_pane_vc_g3

0xb6b8,	// (0x000263f4) slider_set_pane_vc_g4

0xb6c1,	// (0x000263fd) slider_set_pane_vc_g5

0xb6af,	// (0x000263eb) slider_set_pane_vc_g6

0xb6ca,	// (0x00026406) slider_set_pane_vc_g7

0xb88a,	// (0x000265c6) slider_form_pane_vc_g1

0xb893,	// (0x000265cf) slider_form_pane_vc_g2

0xb89c,	// (0x000265d8) slider_form_pane_vc_g3

0xb88a,	// (0x000265c6) slider_form_pane_vc_g4

0xb8a5,	// (0x000265e1) slider_form_pane_vc_g5

0x0004,

0xfa7d,	// (0x0002a7b9) slider_form_pane_vc_g

0x7cb7,	// (0x000229f3) main_idle_act3_pane

0xd26e,	// (0x00027faa) ai3_links_pane

0xd277,	// (0x00027fb3) popup_ai3_data_window_ParamLimits

0xd277,	// (0x00027fb3) popup_ai3_data_window

0x7cb7,	// (0x000229f3) grid_ai3_links_pane

0xd291,	// (0x00027fcd) cell_ai3_links_pane_ParamLimits

0xd291,	// (0x00027fcd) cell_ai3_links_pane

0xd2a9,	// (0x00027fe5) bg_popup_sub_pane_cp11

0xd2b6,	// (0x00027ff2) cell_ai3_links_pane_g1

0x7cb7,	// (0x000229f3) bg_popup_sub_pane_cp12

0xd2db,	// (0x00028017) heading_ai3_data_pane

0xd2e3,	// (0x0002801f) list_ai3_gene_pane

0xd2ef,	// (0x0002802b) popup_ai3_data_window_g1

0xd2f7,	// (0x00028033) heading_ai3_data_pane_g1

0xd2ff,	// (0x0002803b) heading_ai3_data_pane_t1

0xd30d,	// (0x00028049) list_double_ai3_gene_pane_ParamLimits

0xd30d,	// (0x00028049) list_double_ai3_gene_pane

0xd31a,	// (0x00028056) list_single_ai3_gene_pane_ParamLimits

0xd31a,	// (0x00028056) list_single_ai3_gene_pane

0xc0f7,	// (0x00026e33) list_highlight_pane_cp7_ParamLimits

0xc0f7,	// (0x00026e33) list_highlight_pane_cp7

0xd327,	// (0x00028063) list_single_a13_gene_pane_t1_ParamLimits

0xd327,	// (0x00028063) list_single_a13_gene_pane_t1

0xd33e,	// (0x0002807a) list_single_ai3_gene_pane_g1

0xd347,	// (0x00028083) list_single_ai3_gene_pane_g2

0x0001,

0xfcbf,	// (0x0002a9fb) list_single_ai3_gene_pane_g

0xd34f,	// (0x0002808b) list_double_ai3_gene_pane_g1_ParamLimits

0xd34f,	// (0x0002808b) list_double_ai3_gene_pane_g1

0xd35b,	// (0x00028097) list_double_ai3_gene_pane_t1_ParamLimits

0xd35b,	// (0x00028097) list_double_ai3_gene_pane_t1

0xd377,	// (0x000280b3) list_double_ai3_gene_pane_t2_ParamLimits

0xd377,	// (0x000280b3) list_double_ai3_gene_pane_t2

0xd38d,	// (0x000280c9) list_double_ai3_gene_pane_t3_ParamLimits

0xd38d,	// (0x000280c9) list_double_ai3_gene_pane_t3

0x0002,

0xfcc4,	// (0x0002aa00) list_double_ai3_gene_pane_t_ParamLimits

0xfcc4,	// (0x0002aa00) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x59ba,	// (0x000206f6) aid_size_min_col_2

0xd238,	// (0x00027f74) aid_size_min_msg_ParamLimits

0xd238,	// (0x00027f74) aid_size_min_msg

0xc504,	// (0x00027240) fep_vkb_top_text_pane_g2_ParamLimits

0xc504,	// (0x00027240) fep_vkb_top_text_pane_g2

0x0001,

0xfb30,	// (0x0002a86c) fep_vkb_top_text_pane_g_ParamLimits

0xfb30,	// (0x0002a86c) fep_vkb_top_text_pane_g

0x7cb7,	// (0x000229f3) main_hc_apps_shell_pane

0xd3aa,	// (0x000280e6) grid_hc_apps_pane_ParamLimits

0xd3aa,	// (0x000280e6) grid_hc_apps_pane

0xd3b9,	// (0x000280f5) list_hc_apps_pane

0xd3c1,	// (0x000280fd) scroll_pane_cp37_ParamLimits

0xd3c1,	// (0x000280fd) scroll_pane_cp37

0xd3cd,	// (0x00028109) cell_hc_apps_pane_ParamLimits

0xd3cd,	// (0x00028109) cell_hc_apps_pane

0xd47b,	// (0x000281b7) cell_hc_apps_pane_g1_ParamLimits

0xd47b,	// (0x000281b7) cell_hc_apps_pane_g1

0xd4ac,	// (0x000281e8) cell_hc_apps_pane_g2_ParamLimits

0xd4ac,	// (0x000281e8) cell_hc_apps_pane_g2

0xd4c8,	// (0x00028204) cell_hc_apps_pane_g3_ParamLimits

0xd4c8,	// (0x00028204) cell_hc_apps_pane_g3

0x0002,

0xfccb,	// (0x0002aa07) cell_hc_apps_pane_g_ParamLimits

0xfccb,	// (0x0002aa07) cell_hc_apps_pane_g

0xd4ea,	// (0x00028226) cell_hc_apps_pane_t1_ParamLimits

0xd4ea,	// (0x00028226) cell_hc_apps_pane_t1

0x8034,	// (0x00022d70) grid_highlight_pane_cp10_ParamLimits

0x8034,	// (0x00022d70) grid_highlight_pane_cp10

0xd52a,	// (0x00028266) list_single_hc_apps_pane_ParamLimits

0xd52a,	// (0x00028266) list_single_hc_apps_pane

0xd586,	// (0x000282c2) list_single_hc_apps_pane_g1

0x5aae,	// (0x000207ea) list_single_hc_apps_pane_g2

0x0001,

0xfcd2,	// (0x0002aa0e) list_single_hc_apps_pane_g

0x5ac7,	// (0x00020803) list_single_hc_apps_pane_g2_copy1

0x5ae3,	// (0x0002081f) list_single_hc_apps_pane_t1

0x7dab,	// (0x00022ae7) bg_set_opt_pane_cp_ParamLimits

0x5efe,	// (0x00020c3a) setting_slider_pane_t1_ParamLimits

0x5f17,	// (0x00020c53) setting_slider_pane_t2_ParamLimits

0x5f31,	// (0x00020c6d) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0002a2a0) setting_slider_pane_t_ParamLimits

0x5f49,	// (0x00020c85) slider_set_pane_ParamLimits

0x6470,	// (0x000211ac) control_pane_g5_ParamLimits

0x6470,	// (0x000211ac) control_pane_g5

0xae81,	// (0x00025bbd) slider_set_pane_g1_ParamLimits

0x6e0d,	// (0x00021b49) slider_set_pane_g2_ParamLimits

0xb085,	// (0x00025dc1) slider_set_pane_g3_ParamLimits

0xb099,	// (0x00025dd5) slider_set_pane_g4_ParamLimits

0xb0b1,	// (0x00025ded) slider_set_pane_g5_ParamLimits

0xb085,	// (0x00025dc1) slider_set_pane_g6_ParamLimits

0x6e19,	// (0x00021b55) slider_set_pane_g7_ParamLimits

0xf963,	// (0x0002a69f) slider_set_pane_g_ParamLimits

0x9120,	// (0x00023e5c) navi_icon_text_pane_ParamLimits

0x9618,	// (0x00024354) aid_fill_nsta_2_ParamLimits

0x9657,	// (0x00024393) aid_touch_tab_arrow_left_ParamLimits

0x9663,	// (0x0002439f) aid_touch_tab_arrow_right_ParamLimits

0x96cf,	// (0x0002440b) clock_nsta_pane_ParamLimits

0xa961,	// (0x0002569d) navi_icon_pane_g1_ParamLimits

0xa96d,	// (0x000256a9) navi_text_pane_t1_ParamLimits

0xbcca,	// (0x00026a06) navi_icon_text_pane_g1_ParamLimits

0xbcd6,	// (0x00026a12) navi_icon_text_pane_t1_ParamLimits

0xd586,	// (0x000282c2) list_single_hc_apps_pane_g1_ParamLimits

0x5aae,	// (0x000207ea) list_single_hc_apps_pane_g2_ParamLimits

0xfcd2,	// (0x0002aa0e) list_single_hc_apps_pane_g_ParamLimits

0x5ac7,	// (0x00020803) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5ae3,	// (0x0002081f) list_single_hc_apps_pane_t1_ParamLimits

0x5e12,	// (0x00020b4e) popup_toolbar2_fixed_window_ParamLimits

0x5e12,	// (0x00020b4e) popup_toolbar2_fixed_window

0x6a41,	// (0x0002177d) popup_toolbar2_float_window

0x7cb7,	// (0x000229f3) bg_popup_sub_pane_cp27

0xd59f,	// (0x000282db) grid_toolbar2_float_pane

0x7cb7,	// (0x000229f3) bg_popup_sub_pane_cp26

0xd59f,	// (0x000282db) grid_toolbar2_fixed_pane

0xd5a7,	// (0x000282e3) cell_toolbar2_fixed_pane_ParamLimits

0xd5a7,	// (0x000282e3) cell_toolbar2_fixed_pane

0xd5b7,	// (0x000282f3) cell_toolbar2_fixed_pane_g1

0xd5c0,	// (0x000282fc) toolbar2_fixed_button_pane

0x9ad8,	// (0x00024814) toolbar2_fixed_button_pane_g1

0x9ae0,	// (0x0002481c) toolbar2_fixed_button_pane_g2

0x9ae8,	// (0x00024824) toolbar2_fixed_button_pane_g3

0x9af0,	// (0x0002482c) toolbar2_fixed_button_pane_g4

0x9af8,	// (0x00024834) toolbar2_fixed_button_pane_g5

0x9b00,	// (0x0002483c) toolbar2_fixed_button_pane_g6

0x9b08,	// (0x00024844) toolbar2_fixed_button_pane_g7

0x9b10,	// (0x0002484c) toolbar2_fixed_button_pane_g8

0x9b18,	// (0x00024854) toolbar2_fixed_button_pane_g9

0x0008,

0xf865,	// (0x0002a5a1) toolbar2_fixed_button_pane_g

0xd5c8,	// (0x00028304) cell_toolbar2_float_pane_ParamLimits

0xd5c8,	// (0x00028304) cell_toolbar2_float_pane

0xd5d9,	// (0x00028315) cell_toolbar2_float_pane_g1

0xd5c0,	// (0x000282fc) toolbar2_fixed_button_pane_cp

0xc260,	// (0x00026f9c) fep_vkb_accented_list_pane_ParamLimits

0xc260,	// (0x00026f9c) fep_vkb_accented_list_pane

0x7173,	// (0x00021eaf) bg_popup_fep_shadow_pane_g9

0x92a0,	// (0x00023fdc) bg_popup_fep_shadow_pane_cp3

0x876e,	// (0x000234aa) list_accented_list_pane

0xd5e2,	// (0x0002831e) list_single_accented_list_pane_ParamLimits

0xd5e2,	// (0x0002831e) list_single_accented_list_pane

0x92a0,	// (0x00023fdc) list_highlight_pane_cp10

0xd5f3,	// (0x0002832f) list_single_accented_list_pane_t1

0x6991,	// (0x000216cd) popup_slider_window_ParamLimits

0x6991,	// (0x000216cd) popup_slider_window

0xd22f,	// (0x00027f6b) aid_indentation_list_msg

0xd6ad,	// (0x000283e9) bg_popup_window_pane_cp19

0xd717,	// (0x00028453) popup_slider_window_g1

0xd733,	// (0x0002846f) popup_slider_window_g2

0xd74f,	// (0x0002848b) popup_slider_window_g3

0x0005,

0xfcd7,	// (0x0002aa13) popup_slider_window_g

0xd7ab,	// (0x000284e7) popup_slider_window_t1

0xd81f,	// (0x0002855b) small_volume_slider_vertical_pane

0xc132,	// (0x00026e6e) small_volume_slider_vertical_pane_g1

0xc132,	// (0x00026e6e) small_volume_slider_vertical_pane_g2

0xd83b,	// (0x00028577) small_volume_slider_vertical_pane_g3

0x0002,

0xfce9,	// (0x0002aa25) small_volume_slider_vertical_pane_g

0x5bd4,	// (0x00020910) area_side_right_pane_ParamLimits

0x5bd4,	// (0x00020910) area_side_right_pane

0x72ca,	// (0x00022006) aid_size_side_button_ParamLimits

0x72ca,	// (0x00022006) aid_size_side_button

0x72de,	// (0x0002201a) grid_sctrl_middle_pane_ParamLimits

0x72de,	// (0x0002201a) grid_sctrl_middle_pane

0x72fd,	// (0x00022039) sctrl_sk_bottom_pane

0x730e,	// (0x0002204a) sctrl_sk_top_pane

0x7320,	// (0x0002205c) aid_touch_sctrl_top

0x8034,	// (0x00022d70) bg_sctrl_sk_pane_ParamLimits

0x8034,	// (0x00022d70) bg_sctrl_sk_pane

0x732d,	// (0x00022069) sctrl_sk_top_pane_g1

0x733a,	// (0x00022076) sctrl_sk_top_pane_t1

0x7320,	// (0x0002205c) aid_touch_sctrl_bottom

0x8034,	// (0x00022d70) bg_sctrl_sk_pane_cp_ParamLimits

0x8034,	// (0x00022d70) bg_sctrl_sk_pane_cp

0x7355,	// (0x00022091) sctrl_sk_bottom_pane_g1

0x733a,	// (0x00022076) sctrl_sk_bottom_pane_t1

0x735e,	// (0x0002209a) cell_sctrl_middle_pane_ParamLimits

0x735e,	// (0x0002209a) cell_sctrl_middle_pane

0x7379,	// (0x000220b5) aid_touch_sctrl_middle_ParamLimits

0x7379,	// (0x000220b5) aid_touch_sctrl_middle

0x8617,	// (0x00023353) bg_sctrl_middle_pane_ParamLimits

0x8617,	// (0x00023353) bg_sctrl_middle_pane

0xc3b0,	// (0x000270ec) cell_sctrl_middle_pane_g1_ParamLimits

0xc3b0,	// (0x000270ec) cell_sctrl_middle_pane_g1

0x738b,	// (0x000220c7) cell_sctrl_middle_pane_g2_ParamLimits

0x738b,	// (0x000220c7) cell_sctrl_middle_pane_g2

0x0001,

0xfcf5,	// (0x0002aa31) cell_sctrl_middle_pane_g_ParamLimits

0xfcf5,	// (0x0002aa31) cell_sctrl_middle_pane_g

0x9ad8,	// (0x00024814) bg_sctrl_middle_pane_g1

0x9ae0,	// (0x0002481c) bg_sctrl_middle_pane_g2

0x9ae8,	// (0x00024824) bg_sctrl_middle_pane_g3

0x9af0,	// (0x0002482c) bg_sctrl_middle_pane_g4

0x9af8,	// (0x00024834) bg_sctrl_middle_pane_g5

0x9b00,	// (0x0002483c) bg_sctrl_middle_pane_g6

0x9b08,	// (0x00024844) bg_sctrl_middle_pane_g7

0x9b10,	// (0x0002484c) bg_sctrl_middle_pane_g8

0x0007,

0xfcfa,	// (0x0002aa36) bg_sctrl_middle_pane_g

0x9b18,	// (0x00024854) bg_sctrl_middle_pane_g8_copy1

0x9ad8,	// (0x00024814) bg_sctrl_sk_pane_g1

0x9ae0,	// (0x0002481c) bg_sctrl_sk_pane_g2

0x9ae8,	// (0x00024824) bg_sctrl_sk_pane_g3

0x0008,

0xf865,	// (0x0002a5a1) bg_sctrl_sk_pane_g

0x8546,	// (0x00023282) aid_size_touch_scroll_bar

0x9af0,	// (0x0002482c) bg_sctrl_sk_pane_g4

0x9af8,	// (0x00024834) bg_sctrl_sk_pane_g5

0x9b00,	// (0x0002483c) bg_sctrl_sk_pane_g6

0x9b08,	// (0x00024844) bg_sctrl_sk_pane_g7

0x9b10,	// (0x0002484c) bg_sctrl_sk_pane_g8

0x9b18,	// (0x00024854) bg_sctrl_sk_pane_g9

0x65fc,	// (0x00021338) popup_fep_china_hwr2_fs_candidate_window

0x6606,	// (0x00021342) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x6606,	// (0x00021342) popup_fep_china_hwr2_fs_control_window

0xc3b0,	// (0x000270ec) sctrl_sk_top_pane_g2

0x0001,

0xfcf0,	// (0x0002aa2c) sctrl_sk_top_pane_g

0xd844,	// (0x00028580) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd844,	// (0x00028580) aid_fep_china_hwr2_fs_cell

0xd856,	// (0x00028592) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd856,	// (0x00028592) bg_popup_fep_shadow_pane_cp4

0xd86d,	// (0x000285a9) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd86d,	// (0x000285a9) bg_popup_fep_shadow_pane_cp5

0xd87f,	// (0x000285bb) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd87f,	// (0x000285bb) popup_fep_china_hwr2_fs_control_bar_grid

0xd88f,	// (0x000285cb) popup_fep_china_hwr2_fs_control_funtion_grid

0xd897,	// (0x000285d3) aid_fep_china_hwr2_fs_candi_cell

0x7cb7,	// (0x000229f3) bg_popup_fep_shadow_pane_cp6

0xd8a1,	// (0x000285dd) popup_fep_china_hwr2_fs_candidate_grid

0xd8ab,	// (0x000285e7) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd8ab,	// (0x000285e7) cell_fep_china_hwr2_fs_funtion_grid

0xc132,	// (0x00026e6e) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd8c3,	// (0x000285ff) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd8c3,	// (0x000285ff) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd8d1,	// (0x0002860d) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd8d1,	// (0x0002860d) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd0b,	// (0x0002aa47) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd0b,	// (0x0002aa47) cell_fep_china_hwr2_fs_funtion_grid_g

0xd8e7,	// (0x00028623) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd8e7,	// (0x00028623) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd8fc,	// (0x00028638) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd8fc,	// (0x00028638) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd10,	// (0x0002aa4c) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd10,	// (0x0002aa4c) cell_fep_china_hwr2_fs_funtion_grid_t

0xd918,	// (0x00028654) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd920,	// (0x0002865c) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd928,	// (0x00028664) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd15,	// (0x0002aa51) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd930,	// (0x0002866c) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd930,	// (0x0002866c) cell_fep_china_hwr2_fs_candidate_grid

0xd949,	// (0x00028685) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd951,	// (0x0002868d) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc132,	// (0x00026e6e) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc132,	// (0x00026e6e) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb35,	// (0x0002a871) cell_fep_china_hwr2_fs_candidate_grid_g

0xd959,	// (0x00028695) cell_fep_china_hwr2_fs_candidate_grid_t1

0x96dc,	// (0x00024418) clock_nsta_pane_cp_24_ParamLimits

0x96dc,	// (0x00024418) clock_nsta_pane_cp_24

0x975a,	// (0x00024496) indicator_nsta_pane_cp_24_ParamLimits

0x975a,	// (0x00024496) indicator_nsta_pane_cp_24

0xa7dd,	// (0x00025519) heading_pane_g1

0x0001,

0xf8ca,	// (0x0002a606) heading_pane_g

0xb24e,	// (0x00025f8a) grid_sct_catagory_button_pane

0xb27e,	// (0x00025fba) scroll_pane_cp5_ParamLimits

0xbd18,	// (0x00026a54) button_value_adjust_pane_cp5_ParamLimits

0xbd18,	// (0x00026a54) button_value_adjust_pane_cp5

0xbe03,	// (0x00026b3f) form2_midp_time_pane_ParamLimits

0xd967,	// (0x000286a3) cell_sct_catagory_button_pane_ParamLimits

0xd967,	// (0x000286a3) cell_sct_catagory_button_pane

0xc0f7,	// (0x00026e33) bg_button_pane_cp01_ParamLimits

0xc0f7,	// (0x00026e33) bg_button_pane_cp01

0xc132,	// (0x00026e6e) cell_sct_catagory_button_pane_g1

0x69d0,	// (0x0002170c) popup_tb_extension_window

0xd979,	// (0x000286b5) aid_size_cell_ext_ParamLimits

0xd979,	// (0x000286b5) aid_size_cell_ext

0x8034,	// (0x00022d70) bg_tb_trans_pane_cp1_ParamLimits

0x8034,	// (0x00022d70) bg_tb_trans_pane_cp1

0xd999,	// (0x000286d5) grid_tb_ext_pane_ParamLimits

0xd999,	// (0x000286d5) grid_tb_ext_pane

0xd9c7,	// (0x00028703) cell_tb_ext_pane_ParamLimits

0xd9c7,	// (0x00028703) cell_tb_ext_pane

0xd9de,	// (0x0002871a) cell_tb_ext_pane_g1_ParamLimits

0xd9de,	// (0x0002871a) cell_tb_ext_pane_g1

0xd9fb,	// (0x00028737) cell_tb_ext_pane_t1

0x8034,	// (0x00022d70) list_highlight_pane_cp11_ParamLimits

0x8034,	// (0x00022d70) list_highlight_pane_cp11

0x5e31,	// (0x00020b6d) popup_uni_indicator_window_ParamLimits

0x5e31,	// (0x00020b6d) popup_uni_indicator_window

0x8617,	// (0x00023353) bg_popup_sub_pane_cp14

0xda16,	// (0x00028752) list_uniindi_pane

0xda22,	// (0x0002875e) uniindi_top_pane

0x8034,	// (0x00022d70) bg_uniindi_top_pane

0xda41,	// (0x0002877d) uniindi_top_pane_g1

0xda57,	// (0x00028793) uniindi_top_pane_g2

0x0003,

0xfd1c,	// (0x0002aa58) uniindi_top_pane_g

0xda81,	// (0x000287bd) uniindi_top_pane_t1

0xdaab,	// (0x000287e7) list_single_uniindi_pane_ParamLimits

0xdaab,	// (0x000287e7) list_single_uniindi_pane

0xc132,	// (0x00026e6e) bg_uniindi_top_pane_g1

0xdabe,	// (0x000287fa) list_single_uniindi_pane_g1

0xdad1,	// (0x0002880d) list_single_uniindi_pane_t1

0x7cb7,	// (0x000229f3) control_bg_pane

0xdaf6,	// (0x00028832) bg_sctrl_sk_pane_cp1

0xdaff,	// (0x0002883b) bg_sctrl_sk_pane_cp2

0xdb08,	// (0x00028844) control_bg_pane_g1

0xdb11,	// (0x0002884d) control_bg_pane_g2

0x0001,

0xfd25,	// (0x0002aa61) control_bg_pane_g

0xbb61,	// (0x0002689d) cell_indicator_nsta_pane_g1_ParamLimits

0xbb6f,	// (0x000268ab) cell_indicator_nsta_pane_g2_ParamLimits

0xfa99,	// (0x0002a7d5) cell_indicator_nsta_pane_g_ParamLimits

0x576b,	// (0x000204a7) form2_midp_time_pane_t1_ParamLimits

0x8388,	// (0x000230c4) main_idle_act4_pane_ParamLimits

0x8388,	// (0x000230c4) main_idle_act4_pane

0x69d0,	// (0x0002170c) popup_tb_extension_window_ParamLimits

0xd9b7,	// (0x000286f3) tb_ext_find_pane_ParamLimits

0xd9b7,	// (0x000286f3) tb_ext_find_pane

0xdb1a,	// (0x00028856) ai_gene_pane_1_cp1

0x93d9,	// (0x00024115) ai_gene_pane_2_cp1

0xdb22,	// (0x0002885e) list_single_idle_plugin_calendar_pane

0xdb2b,	// (0x00028867) list_single_idle_plugin_notification_pane

0xdb34,	// (0x00028870) list_single_idle_plugin_player_pane

0xdb3d,	// (0x00028879) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdb3d,	// (0x00028879) list_single_idle_plugin_shortcut_pane

0xdb5f,	// (0x0002889b) main_idle_act4_pane_t1

0xdb71,	// (0x000288ad) main_idle_act4_pane_t2

0x0001,

0xfd2a,	// (0x0002aa66) main_idle_act4_pane_t

0xdb83,	// (0x000288bf) middle_sk_idle_act4_pane_ParamLimits

0xdb83,	// (0x000288bf) middle_sk_idle_act4_pane

0xdb99,	// (0x000288d5) popup_clock_digital_analogue_window_cp2

0xdbb3,	// (0x000288ef) shortcut_wheel_idle_act4_pane_ParamLimits

0xdbb3,	// (0x000288ef) shortcut_wheel_idle_act4_pane

0xc132,	// (0x00026e6e) shortcut_wheel_idle_act4_pane_g1

0xc132,	// (0x00026e6e) shortcut_wheel_idle_act4_pane_g2

0xc132,	// (0x00026e6e) shortcut_wheel_idle_act4_pane_g3

0xc132,	// (0x00026e6e) shortcut_wheel_idle_act4_pane_g4

0xc132,	// (0x00026e6e) shortcut_wheel_idle_act4_pane_g5

0xdbc7,	// (0x00028903) shortcut_wheel_idle_act4_pane_g6

0xdbcf,	// (0x0002890b) shortcut_wheel_idle_act4_pane_g7

0xdbd7,	// (0x00028913) shortcut_wheel_idle_act4_pane_g8

0xdbdf,	// (0x0002891b) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd2f,	// (0x0002aa6b) shortcut_wheel_idle_act4_pane_g

0xc3b0,	// (0x000270ec) middle_sk_idle_act4_pane_g1_ParamLimits

0xc3b0,	// (0x000270ec) middle_sk_idle_act4_pane_g1

0xdc43,	// (0x0002897f) middle_sk_idle_act4_pane_g2_ParamLimits

0xdc43,	// (0x0002897f) middle_sk_idle_act4_pane_g2

0x0001,

0xfd52,	// (0x0002aa8e) middle_sk_idle_act4_pane_g_ParamLimits

0xfd52,	// (0x0002aa8e) middle_sk_idle_act4_pane_g

0xdc4f,	// (0x0002898b) middle_sk_idle_act4_pane_t1_ParamLimits

0xdc4f,	// (0x0002898b) middle_sk_idle_act4_pane_t1

0xdc6c,	// (0x000289a8) grid_ai_shortcut_pane_ParamLimits

0xdc6c,	// (0x000289a8) grid_ai_shortcut_pane

0xdc85,	// (0x000289c1) list_highlight_pane_cp16_ParamLimits

0xdc85,	// (0x000289c1) list_highlight_pane_cp16

0xdc92,	// (0x000289ce) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdc92,	// (0x000289ce) list_single_idle_plugin_shortcut_pane_g1

0xdc9e,	// (0x000289da) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdc9e,	// (0x000289da) list_single_idle_plugin_shortcut_pane_g2

0xdcb6,	// (0x000289f2) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdcb6,	// (0x000289f2) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd57,	// (0x0002aa93) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd57,	// (0x0002aa93) list_single_idle_plugin_shortcut_pane_g

0xdcc9,	// (0x00028a05) cell_ai_shortcut_pane_ParamLimits

0xdcc9,	// (0x00028a05) cell_ai_shortcut_pane

0xdced,	// (0x00028a29) cell_ai_shortcut_pane_g1_ParamLimits

0xdced,	// (0x00028a29) cell_ai_shortcut_pane_g1

0xdb1a,	// (0x00028856) ai_gene_pane_1_cp2

0xdd0f,	// (0x00028a4b) ai_gene_pane_2_cp2

0xdd17,	// (0x00028a53) list_highlight_pane_cp15

0xdd20,	// (0x00028a5c) list_single_idle_plugin_calendar_pane_g1

0xdd17,	// (0x00028a53) list_highlight_pane_cp17

0xdd28,	// (0x00028a64) list_single_idle_plugin_calendar_pane_g1_copy1

0xdd30,	// (0x00028a6c) list_single_idle_plugin_player_pane_g1

0xb4a7,	// (0x000261e3) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd5e,	// (0x0002aa9a) list_single_idle_plugin_player_pane_g

0xdd38,	// (0x00028a74) list_single_idle_plugin_player_pane_t1

0xdd46,	// (0x00028a82) list_single_idle_plugin_player_pane_t2

0xdd54,	// (0x00028a90) list_single_idle_plugin_player_pane_t3

0xdd62,	// (0x00028a9e) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd63,	// (0x0002aa9f) list_single_idle_plugin_player_pane_t

0xdd70,	// (0x00028aac) wait_bar_pane_cp15

0xdd78,	// (0x00028ab4) grid_ai_notification_pane

0xb4a7,	// (0x000261e3) list_single_idle_plugin_notification_pane_g1

0xdd81,	// (0x00028abd) cell_ai_notification_pane_ParamLimits

0xdd81,	// (0x00028abd) cell_ai_notification_pane

0xdd8e,	// (0x00028aca) cell_ai_notification_pane_g1

0xdd96,	// (0x00028ad2) cell_ai_notification_pane_t1

0xdda4,	// (0x00028ae0) tb_ext_find_button_pane

0xddac,	// (0x00028ae8) tb_ext_find_pane_g1

0xddb4,	// (0x00028af0) tb_ext_find_pane_t1

0x8c98,	// (0x000239d4) tb_ext_find_button_pane_g1

0xddc2,	// (0x00028afe) tb_ext_find_button_pane_g2

0x0001,

0xfd6c,	// (0x0002aaa8) tb_ext_find_button_pane_g

0xdb5f,	// (0x0002889b) main_idle_act4_pane_t1_ParamLimits

0xdb71,	// (0x000288ad) main_idle_act4_pane_t2_ParamLimits

0xfd2a,	// (0x0002aa66) main_idle_act4_pane_t_ParamLimits

0xdb99,	// (0x000288d5) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdba7,	// (0x000288e3) sat_plugin_idle_act4_pane_ParamLimits

0xdba7,	// (0x000288e3) sat_plugin_idle_act4_pane

0xddcb,	// (0x00028b07) sat_plugin_idle_act4_pane_t1_ParamLimits

0xddcb,	// (0x00028b07) sat_plugin_idle_act4_pane_t1

0xddde,	// (0x00028b1a) sat_plugin_idle_act4_pane_t2_ParamLimits

0xddde,	// (0x00028b1a) sat_plugin_idle_act4_pane_t2

0xddf1,	// (0x00028b2d) sat_plugin_idle_act4_pane_t3_ParamLimits

0xddf1,	// (0x00028b2d) sat_plugin_idle_act4_pane_t3

0xde04,	// (0x00028b40) sat_plugin_idle_act4_pane_t4_ParamLimits

0xde04,	// (0x00028b40) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd71,	// (0x0002aaad) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd71,	// (0x0002aaad) sat_plugin_idle_act4_pane_t

0x5d6c,	// (0x00020aa8) popup_battery_window_ParamLimits

0x5d6c,	// (0x00020aa8) popup_battery_window

0x8034,	// (0x00022d70) bg_popup_sub_pane_cp25_ParamLimits

0x8034,	// (0x00022d70) bg_popup_sub_pane_cp25

0xde17,	// (0x00028b53) popup_battery_window_g1_ParamLimits

0xde17,	// (0x00028b53) popup_battery_window_g1

0xde23,	// (0x00028b5f) popup_battery_window_t1_ParamLimits

0xde23,	// (0x00028b5f) popup_battery_window_t1

0xde35,	// (0x00028b71) popup_battery_window_t2_ParamLimits

0xde35,	// (0x00028b71) popup_battery_window_t2

0x0001,

0xfd7a,	// (0x0002aab6) popup_battery_window_t_ParamLimits

0xfd7a,	// (0x0002aab6) popup_battery_window_t

0x92a8,	// (0x00023fe4) midp_canvas_pane_ParamLimits

0x931d,	// (0x00024059) midp_keypad_pane_ParamLimits

0x931d,	// (0x00024059) midp_keypad_pane

0x95e0,	// (0x0002431c) main_midp_pane_ParamLimits

0xbbdc,	// (0x00026918) signal_pane_g2_cp_ParamLimits

0xde52,	// (0x00028b8e) aid_size_cell_midp_keypad_ParamLimits

0xde52,	// (0x00028b8e) aid_size_cell_midp_keypad

0xde6c,	// (0x00028ba8) midp_keyp_game_grid_pane_ParamLimits

0xde6c,	// (0x00028ba8) midp_keyp_game_grid_pane

0xde8c,	// (0x00028bc8) midp_keyp_rocker_pane_ParamLimits

0xde8c,	// (0x00028bc8) midp_keyp_rocker_pane

0xdec1,	// (0x00028bfd) midp_keyp_sk_left_pane_ParamLimits

0xdec1,	// (0x00028bfd) midp_keyp_sk_left_pane

0xdf19,	// (0x00028c55) midp_keyp_sk_right_pane_ParamLimits

0xdf19,	// (0x00028c55) midp_keyp_sk_right_pane

0x7cb7,	// (0x000229f3) bg_button_pane_cp03

0xdf71,	// (0x00028cad) midp_keyp_sk_left_pane_g1

0x7cb7,	// (0x000229f3) bg_button_pane_cp04

0xdf71,	// (0x00028cad) midp_keyp_sk_right_pane_g1

0xc132,	// (0x00026e6e) midp_keyp_rocker_pane_g1

0xdf7a,	// (0x00028cb6) keyp_game_cell_pane_ParamLimits

0xdf7a,	// (0x00028cb6) keyp_game_cell_pane

0x7cb7,	// (0x000229f3) bg_button_pane_cp02

0xdf8d,	// (0x00028cc9) keyp_game_cell_pane_g1

0x5db0,	// (0x00020aec) popup_fep_vkb2_window_ParamLimits

0x5db0,	// (0x00020aec) popup_fep_vkb2_window

0x73a9,	// (0x000220e5) aid_size_cell_vkb2_ParamLimits

0x73a9,	// (0x000220e5) aid_size_cell_vkb2

0x73fd,	// (0x00022139) popup_fep_vkb2_window_g1_ParamLimits

0x73fd,	// (0x00022139) popup_fep_vkb2_window_g1

0x7445,	// (0x00022181) vkb2_area_bottom_pane_ParamLimits

0x7445,	// (0x00022181) vkb2_area_bottom_pane

0x7491,	// (0x000221cd) vkb2_area_keypad_pane_ParamLimits

0x7491,	// (0x000221cd) vkb2_area_keypad_pane

0x74d3,	// (0x0002220f) vkb2_area_top_pane_ParamLimits

0x74d3,	// (0x0002220f) vkb2_area_top_pane

0x754d,	// (0x00022289) vkb2_top_entry_pane_ParamLimits

0x754d,	// (0x00022289) vkb2_top_entry_pane

0x7577,	// (0x000222b3) vkb2_top_grid_left_pane_ParamLimits

0x7577,	// (0x000222b3) vkb2_top_grid_left_pane

0x7595,	// (0x000222d1) vkb2_top_grid_right_pane_ParamLimits

0x7595,	// (0x000222d1) vkb2_top_grid_right_pane

0x75b3,	// (0x000222ef) vkb2_cell_keypad_pane_ParamLimits

0x75b3,	// (0x000222ef) vkb2_cell_keypad_pane

0x7684,	// (0x000223c0) vkb2_area_bottom_grid_pane_ParamLimits

0x7684,	// (0x000223c0) vkb2_area_bottom_grid_pane

0x76aa,	// (0x000223e6) vkb2_area_bottom_pane_g1_ParamLimits

0x76aa,	// (0x000223e6) vkb2_area_bottom_pane_g1

0x76ce,	// (0x0002240a) vkb2_area_bottom_pane_g2_ParamLimits

0x76ce,	// (0x0002240a) vkb2_area_bottom_pane_g2

0x76fc,	// (0x00022438) vkb2_area_bottom_pane_g3_ParamLimits

0x76fc,	// (0x00022438) vkb2_area_bottom_pane_g3

0x0002,

0xfd7f,	// (0x0002aabb) vkb2_area_bottom_pane_g_ParamLimits

0xfd7f,	// (0x0002aabb) vkb2_area_bottom_pane_g

0x775d,	// (0x00022499) vkb2_top_cell_left_pane_ParamLimits

0x775d,	// (0x00022499) vkb2_top_cell_left_pane

0xdf9e,	// (0x00028cda) vkb2_top_entry_pane_g1_ParamLimits

0xdf9e,	// (0x00028cda) vkb2_top_entry_pane_g1

0xdfac,	// (0x00028ce8) vkb2_top_entry_pane_t1_ParamLimits

0xdfac,	// (0x00028ce8) vkb2_top_entry_pane_t1

0xdfde,	// (0x00028d1a) vkb2_top_entry_pane_t2_ParamLimits

0xdfde,	// (0x00028d1a) vkb2_top_entry_pane_t2

0xe010,	// (0x00028d4c) vkb2_top_entry_pane_t3_ParamLimits

0xe010,	// (0x00028d4c) vkb2_top_entry_pane_t3

0x0002,

0xfd86,	// (0x0002aac2) vkb2_top_entry_pane_t_ParamLimits

0xfd86,	// (0x0002aac2) vkb2_top_entry_pane_t

0x77aa,	// (0x000224e6) vkb2_top_grid_right_pane_g1_ParamLimits

0x77aa,	// (0x000224e6) vkb2_top_grid_right_pane_g1

0x77c0,	// (0x000224fc) vkb2_top_grid_right_pane_g2_ParamLimits

0x77c0,	// (0x000224fc) vkb2_top_grid_right_pane_g2

0x77d8,	// (0x00022514) vkb2_top_grid_right_pane_g3_ParamLimits

0x77d8,	// (0x00022514) vkb2_top_grid_right_pane_g3

0x77f0,	// (0x0002252c) vkb2_top_grid_right_pane_g4_ParamLimits

0x77f0,	// (0x0002252c) vkb2_top_grid_right_pane_g4

0x0003,

0xfd8d,	// (0x0002aac9) vkb2_top_grid_right_pane_g_ParamLimits

0xfd8d,	// (0x0002aac9) vkb2_top_grid_right_pane_g

0x7806,	// (0x00022542) vkb2_top_cell_left_pane_g1

0x781d,	// (0x00022559) vkb2_cell_keypad_pane_g1_ParamLimits

0x781d,	// (0x00022559) vkb2_cell_keypad_pane_g1

0xe034,	// (0x00028d70) vkb2_cell_keypad_pane_t1_ParamLimits

0xe034,	// (0x00028d70) vkb2_cell_keypad_pane_t1

0x782b,	// (0x00022567) vkb2_cell_bottom_grid_pane_ParamLimits

0x782b,	// (0x00022567) vkb2_cell_bottom_grid_pane

0x7864,	// (0x000225a0) vkb2_cell_bottom_grid_pane_g1

0xdbe7,	// (0x00028923) aid_call2_pane_cp02

0xdbef,	// (0x0002892b) aid_call_pane_cp02

0xdbf7,	// (0x00028933) clock_digital_number_pane_cp10

0xdbff,	// (0x0002893b) clock_digital_number_pane_cp11

0xdc07,	// (0x00028943) clock_digital_number_pane_cp12

0xdc0f,	// (0x0002894b) clock_digital_number_pane_cp13

0xdc17,	// (0x00028953) clock_digital_separator_pane_cp10

0x8c98,	// (0x000239d4) popup_clock_digital_analogue_window_cp2_g1

0x8c98,	// (0x000239d4) popup_clock_digital_analogue_window_cp2_g2

0xdc1f,	// (0x0002895b) popup_clock_digital_analogue_window_cp2_g3

0x8c98,	// (0x000239d4) popup_clock_digital_analogue_window_cp2_g4

0xdc1f,	// (0x0002895b) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd42,	// (0x0002aa7e) popup_clock_digital_analogue_window_cp2_g

0xdc27,	// (0x00028963) popup_clock_digital_analogue_window_cp2_t1

0xdc35,	// (0x00028971) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd4d,	// (0x0002aa89) popup_clock_digital_analogue_window_cp2_t

0xc132,	// (0x00026e6e) clock_digital_number_pane_cp10_g1

0xc132,	// (0x00026e6e) clock_digital_number_pane_cp10_g2

0x0001,

0xfb35,	// (0x0002a871) clock_digital_number_pane_cp10_g

0xc132,	// (0x00026e6e) clock_digital_separator_pane_cp10_g1

0xc132,	// (0x00026e6e) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb35,	// (0x0002a871) clock_digital_separator_pane_cp10_g

0xda63,	// (0x0002879f) uniindi_top_pane_g3

0xda74,	// (0x000287b0) uniindi_top_pane_g4

0x763e,	// (0x0002237a) vkb2_row_keypad_pane_ParamLimits

0x763e,	// (0x0002237a) vkb2_row_keypad_pane

0x7880,	// (0x000225bc) vkb2_cell_t_keypad_pane_ParamLimits

0x7880,	// (0x000225bc) vkb2_cell_t_keypad_pane

0x7890,	// (0x000225cc) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7890,	// (0x000225cc) vkb2_cell_t_keypad_pane_cp08

0x78a3,	// (0x000225df) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x78a3,	// (0x000225df) vkb2_cell_t_keypad_pane_cp09

0x78b7,	// (0x000225f3) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x78b7,	// (0x000225f3) vkb2_cell_t_keypad_pane_cp01

0x78c8,	// (0x00022604) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x78c8,	// (0x00022604) vkb2_cell_t_keypad_pane_cp02

0x78d9,	// (0x00022615) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x78d9,	// (0x00022615) vkb2_cell_t_keypad_pane_cp03

0x78ea,	// (0x00022626) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x78ea,	// (0x00022626) vkb2_cell_t_keypad_pane_cp04

0x78fb,	// (0x00022637) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x78fb,	// (0x00022637) vkb2_cell_t_keypad_pane_cp05

0x790c,	// (0x00022648) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x790c,	// (0x00022648) vkb2_cell_t_keypad_pane_cp06

0x791d,	// (0x00022659) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x791d,	// (0x00022659) vkb2_cell_t_keypad_pane_cp07

0x792e,	// (0x0002266a) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x792e,	// (0x0002266a) vkb2_cell_t_keypad_pane_cp10

0xc3b0,	// (0x000270ec) vkb2_cell_t_keypad_pane_g1

0xe04b,	// (0x00028d87) vkb2_cell_t_keypad_pane_t1

0x7cb7,	// (0x000229f3) popup_grid_graphic2_window

0xe05d,	// (0x00028d99) aid_size_cell_graphic2_ParamLimits

0xe05d,	// (0x00028d99) aid_size_cell_graphic2

0xe095,	// (0x00028dd1) bg_popup_window_pane_cp21_ParamLimits

0xe095,	// (0x00028dd1) bg_popup_window_pane_cp21

0xe0a3,	// (0x00028ddf) graphic2_pages_pane_ParamLimits

0xe0a3,	// (0x00028ddf) graphic2_pages_pane

0xe0e9,	// (0x00028e25) grid_graphic2_control_pane_ParamLimits

0xe0e9,	// (0x00028e25) grid_graphic2_control_pane

0xe127,	// (0x00028e63) grid_graphic2_pane_ParamLimits

0xe127,	// (0x00028e63) grid_graphic2_pane

0xe19b,	// (0x00028ed7) cell_graphic2_pane

0x7cb7,	// (0x000229f3) main_comp_mode_pane

0xd2e3,	// (0x0002801f) list_ai3_gene_pane_ParamLimits

0xd6ad,	// (0x000283e9) bg_popup_window_pane_cp19_ParamLimits

0xd6b9,	// (0x000283f5) bg_touch_area_indi_pane_ParamLimits

0xd6b9,	// (0x000283f5) bg_touch_area_indi_pane

0xd6cf,	// (0x0002840b) bg_touch_area_indi_pane_cp01_ParamLimits

0xd6cf,	// (0x0002840b) bg_touch_area_indi_pane_cp01

0xd6e5,	// (0x00028421) bg_touch_area_indi_pane_cp02_ParamLimits

0xd6e5,	// (0x00028421) bg_touch_area_indi_pane_cp02

0xd6fd,	// (0x00028439) bg_touch_area_indi_pane_cp03_ParamLimits

0xd6fd,	// (0x00028439) bg_touch_area_indi_pane_cp03

0xd717,	// (0x00028453) popup_slider_window_g1_ParamLimits

0xd733,	// (0x0002846f) popup_slider_window_g2_ParamLimits

0xd74f,	// (0x0002848b) popup_slider_window_g3_ParamLimits

0xfcd7,	// (0x0002aa13) popup_slider_window_g_ParamLimits

0xd7ab,	// (0x000284e7) popup_slider_window_t1_ParamLimits

0xd81f,	// (0x0002855b) small_volume_slider_vertical_pane_ParamLimits

0xe19b,	// (0x00028ed7) cell_graphic2_pane_ParamLimits

0xe1e9,	// (0x00028f25) bg_button_pane_cp10_ParamLimits

0xe1e9,	// (0x00028f25) bg_button_pane_cp10

0xe1fc,	// (0x00028f38) bg_button_pane_cp11_ParamLimits

0xe1fc,	// (0x00028f38) bg_button_pane_cp11

0xe20f,	// (0x00028f4b) graphic2_pages_pane_g1_ParamLimits

0xe20f,	// (0x00028f4b) graphic2_pages_pane_g1

0xe22a,	// (0x00028f66) graphic2_pages_pane_g2_ParamLimits

0xe22a,	// (0x00028f66) graphic2_pages_pane_g2

0x0001,

0xfd9b,	// (0x0002aad7) graphic2_pages_pane_g_ParamLimits

0xfd9b,	// (0x0002aad7) graphic2_pages_pane_g

0xe242,	// (0x00028f7e) graphic2_pages_pane_t1_ParamLimits

0xe242,	// (0x00028f7e) graphic2_pages_pane_t1

0xe25a,	// (0x00028f96) cell_graphic2_control_pane_ParamLimits

0xe25a,	// (0x00028f96) cell_graphic2_control_pane

0xe27b,	// (0x00028fb7) cell_graphic2_pane_g1_ParamLimits

0xe27b,	// (0x00028fb7) cell_graphic2_pane_g1

0xe288,	// (0x00028fc4) cell_graphic2_pane_g2_ParamLimits

0xe288,	// (0x00028fc4) cell_graphic2_pane_g2

0xe295,	// (0x00028fd1) cell_graphic2_pane_g3_ParamLimits

0xe295,	// (0x00028fd1) cell_graphic2_pane_g3

0xe2a2,	// (0x00028fde) cell_graphic2_pane_g4_ParamLimits

0xe2a2,	// (0x00028fde) cell_graphic2_pane_g4

0xe2af,	// (0x00028feb) cell_graphic2_pane_g5_ParamLimits

0xe2af,	// (0x00028feb) cell_graphic2_pane_g5

0x0004,

0xfda0,	// (0x0002aadc) cell_graphic2_pane_g_ParamLimits

0xfda0,	// (0x0002aadc) cell_graphic2_pane_g

0xe2ca,	// (0x00029006) cell_graphic2_pane_t1_ParamLimits

0xe2ca,	// (0x00029006) cell_graphic2_pane_t1

0x9b4c,	// (0x00024888) grid_highlight_pane_cp11_ParamLimits

0x9b4c,	// (0x00024888) grid_highlight_pane_cp11

0x8034,	// (0x00022d70) bg_button_pane_cp05

0xe2f3,	// (0x0002902f) cell_graphic2_control_pane_g1

0xc132,	// (0x00026e6e) bg_touch_area_indi_pane_g1

0xe31b,	// (0x00029057) aid_cmod_rocker_key_size

0xe325,	// (0x00029061) aid_cmode_itu_key_size

0xe32f,	// (0x0002906b) main_cmode_video_pane

0xe339,	// (0x00029075) main_comp_mode_itu_pane

0xe345,	// (0x00029081) main_comp_mode_rocker_pane

0xe351,	// (0x0002908d) cell_cmode_rocker_pane_ParamLimits

0xe351,	// (0x0002908d) cell_cmode_rocker_pane

0xe363,	// (0x0002909f) cell_cmode_itu_pane_ParamLimits

0xe363,	// (0x0002909f) cell_cmode_itu_pane

0x8617,	// (0x00023353) bg_button_pane_cp06_ParamLimits

0x8617,	// (0x00023353) bg_button_pane_cp06

0xc3b0,	// (0x000270ec) cell_cmode_rocker_pane_g1_ParamLimits

0xc3b0,	// (0x000270ec) cell_cmode_rocker_pane_g1

0xd8c3,	// (0x000285ff) cell_cmode_rocker_pane_g2_ParamLimits

0xd8c3,	// (0x000285ff) cell_cmode_rocker_pane_g2

0x0001,

0xfdb0,	// (0x0002aaec) cell_cmode_rocker_pane_g_ParamLimits

0xfdb0,	// (0x0002aaec) cell_cmode_rocker_pane_g

0x7cb7,	// (0x000229f3) bg_button_pane_cp07

0xe378,	// (0x000290b4) cell_cmode_itu_pane_g1

0xe381,	// (0x000290bd) cell_cmode_itu_pane_t1

0xe38f,	// (0x000290cb) cell_cmode_itu_pane_t2

0x0001,

0xfdb5,	// (0x0002aaf1) cell_cmode_itu_pane_t

0xdae6,	// (0x00028822) aid_touch_ctrl_left

0xdaee,	// (0x0002882a) aid_touch_ctrl_right

0x7cb7,	// (0x000229f3) compa_mode_pane

0xe39d,	// (0x000290d9) aid_cmod_rocker_key_size_cp

0xe3a7,	// (0x000290e3) aid_cmode_itu_key_size_cp

0xe3b1,	// (0x000290ed) compa_mode_pane_g1

0xe3b9,	// (0x000290f5) compa_mode_pane_g2

0xe3c1,	// (0x000290fd) compa_mode_pane_g3

0x0002,

0xfdba,	// (0x0002aaf6) compa_mode_pane_g

0xe3c9,	// (0x00029105) main_comp_mode_itu_pane_cp

0xe3d1,	// (0x0002910d) main_comp_mode_rocker_pane_cp

0xe3d9,	// (0x00029115) cell_cmode_itu_pane_cp_ParamLimits

0xe3d9,	// (0x00029115) cell_cmode_itu_pane_cp

0xe3ee,	// (0x0002912a) cell_cmode_rocker_pane_cp_ParamLimits

0xe3ee,	// (0x0002912a) cell_cmode_rocker_pane_cp

0x8617,	// (0x00023353) bg_button_pane_cp06_cp_ParamLimits

0x8617,	// (0x00023353) bg_button_pane_cp06_cp

0xc3b0,	// (0x000270ec) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc3b0,	// (0x000270ec) cell_cmode_rocker_pane_g1_cp

0xc132,	// (0x00026e6e) cell_cmode_rocker_pane_g2_cp

0x7cb7,	// (0x000229f3) bg_button_pane_cp07_cp

0xb032,	// (0x00025d6e) cell_cmode_itu_pane_g1_cp

0xe400,	// (0x0002913c) cell_cmode_itu_pane_t1_cp

0xe400,	// (0x0002913c) cell_cmode_itu_pane_t2_cp

0xb01f,	// (0x00025d5b) settings_code_pane_cp2

0x7dab,	// (0x00022ae7) bg_popup_window_pane_cp3_ParamLimits

0x820e,	// (0x00022f4a) heading_pane_cp3_ParamLimits

0x821a,	// (0x00022f56) listscroll_popup_graphic_pane_ParamLimits

0x6f57,	// (0x00021c93) fep_hwr_aid_pane_ParamLimits

0x7320,	// (0x0002205c) aid_touch_sctrl_top_ParamLimits

0x732d,	// (0x00022069) sctrl_sk_top_pane_g1_ParamLimits

0xc3b0,	// (0x000270ec) sctrl_sk_top_pane_g2_ParamLimits

0xfcf0,	// (0x0002aa2c) sctrl_sk_top_pane_g_ParamLimits

0x733a,	// (0x00022076) sctrl_sk_top_pane_t1_ParamLimits

0x7320,	// (0x0002205c) aid_touch_sctrl_bottom_ParamLimits

0x733a,	// (0x00022076) sctrl_sk_bottom_pane_t1_ParamLimits

0xda2f,	// (0x0002876b) aid_area_touch_clock

0x7515,	// (0x00022251) aid_vkb2_area_top_pane_cell_ParamLimits

0x7515,	// (0x00022251) aid_vkb2_area_top_pane_cell

0x7660,	// (0x0002239c) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x7660,	// (0x0002239c) aid_vkb2_area_bottom_pane_cell

0xdf96,	// (0x00028cd2) popup_char_count_window

0xe40e,	// (0x0002914a) popup_char_count_window_g1

0xe417,	// (0x00029153) popup_char_count_window_g2

0xe420,	// (0x0002915c) popup_char_count_window_g3

0x0002,

0xfdc1,	// (0x0002aafd) popup_char_count_window_g

0xe429,	// (0x00029165) popup_char_count_window_t1

0x73db,	// (0x00022117) popup_fep_char_preview_window_ParamLimits

0x73db,	// (0x00022117) popup_fep_char_preview_window

0x7533,	// (0x0002226f) vkb2_top_candi_pane_ParamLimits

0x7533,	// (0x0002226f) vkb2_top_candi_pane

0xe437,	// (0x00029173) cell_vkb2_top_candi_pane_ParamLimits

0xe437,	// (0x00029173) cell_vkb2_top_candi_pane

0xa15d,	// (0x00024e99) bg_popup_fep_char_preview_window_ParamLimits

0xa15d,	// (0x00024e99) bg_popup_fep_char_preview_window

0x7943,	// (0x0002267f) popup_fep_char_preview_window_t1_ParamLimits

0x7943,	// (0x0002267f) popup_fep_char_preview_window_t1

0xe484,	// (0x000291c0) bg_popup_fep_char_preview_window_g1

0xe48c,	// (0x000291c8) bg_popup_fep_char_preview_window_g2

0xe494,	// (0x000291d0) bg_popup_fep_char_preview_window_g3

0xe49c,	// (0x000291d8) bg_popup_fep_char_preview_window_g4

0xe4a4,	// (0x000291e0) bg_popup_fep_char_preview_window_g5

0x797d,	// (0x000226b9) bg_popup_fep_char_preview_window_g6

0xe4ac,	// (0x000291e8) bg_popup_fep_char_preview_window_g7

0xe4b4,	// (0x000291f0) bg_popup_fep_char_preview_window_g8

0xe4bc,	// (0x000291f8) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdc8,	// (0x0002ab04) bg_popup_fep_char_preview_window_g

0xc3b0,	// (0x000270ec) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc3b0,	// (0x000270ec) cell_vkb2_top_candi_pane_g1

0xc6c7,	// (0x00027403) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc6c7,	// (0x00027403) cell_vkb2_top_candi_pane_g2

0xc6e8,	// (0x00027424) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc6e8,	// (0x00027424) cell_vkb2_top_candi_pane_g3

0x7985,	// (0x000226c1) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7985,	// (0x000226c1) cell_vkb2_top_candi_pane_g4

0xe4c4,	// (0x00029200) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe4c4,	// (0x00029200) cell_vkb2_top_candi_pane_g5

0xd8c3,	// (0x000285ff) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd8c3,	// (0x000285ff) cell_vkb2_top_candi_pane_g6

0x0005,

0xfddb,	// (0x0002ab17) cell_vkb2_top_candi_pane_g_ParamLimits

0xfddb,	// (0x0002ab17) cell_vkb2_top_candi_pane_g

0x79a6,	// (0x000226e2) cell_vkb2_top_candi_pane_t1

0x6df9,	// (0x00021b35) aid_size_touch_slider_mark_ParamLimits

0x6df9,	// (0x00021b35) aid_size_touch_slider_mark

0xe0d9,	// (0x00028e15) grid_graphic2_catg_pane_ParamLimits

0xe0d9,	// (0x00028e15) grid_graphic2_catg_pane

0xe177,	// (0x00028eb3) popup_grid_graphic2_window_t1_ParamLimits

0xe177,	// (0x00028eb3) popup_grid_graphic2_window_t1

0xe189,	// (0x00028ec5) popup_grid_graphic2_window_t2_ParamLimits

0xe189,	// (0x00028ec5) popup_grid_graphic2_window_t2

0x0001,

0xfd96,	// (0x0002aad2) popup_grid_graphic2_window_t_ParamLimits

0xfd96,	// (0x0002aad2) popup_grid_graphic2_window_t

0x8034,	// (0x00022d70) bg_button_pane_cp05_ParamLimits

0xe2f3,	// (0x0002902f) cell_graphic2_control_pane_g1_ParamLimits

0xe4e5,	// (0x00029221) cell_graphic2_catg_pane_ParamLimits

0xe4e5,	// (0x00029221) cell_graphic2_catg_pane

0x7cb7,	// (0x000229f3) bg_button_pane_cp12

0xe4f7,	// (0x00029233) cell_graphic2_catg_pane_g1

0xd9fb,	// (0x00028737) cell_tb_ext_pane_t1_ParamLimits

0x777d,	// (0x000224b9) vkb2_top_cell_right_narrow_pane_ParamLimits

0x777d,	// (0x000224b9) vkb2_top_cell_right_narrow_pane

0x7795,	// (0x000224d1) vkb2_top_cell_right_wide_pane_ParamLimits

0x7795,	// (0x000224d1) vkb2_top_cell_right_wide_pane

0x6f49,	// (0x00021c85) bg_vkb2_func_pane_ParamLimits

0x6f49,	// (0x00021c85) bg_vkb2_func_pane

0x7806,	// (0x00022542) vkb2_top_cell_left_pane_g1_ParamLimits

0x6f49,	// (0x00021c85) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6f49,	// (0x00021c85) bg_vkb2_fuc_pane_cp03

0x7864,	// (0x000225a0) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9ae0,	// (0x0002481c) bg_vkb2_func_pane_g1

0x9ae8,	// (0x00024824) bg_vkb2_func_pane_g2

0x9af8,	// (0x00024834) bg_vkb2_func_pane_g3

0x9af0,	// (0x0002482c) bg_vkb2_func_pane_g4

0x9b00,	// (0x0002483c) bg_vkb2_func_pane_g5

0x9b08,	// (0x00024844) bg_vkb2_func_pane_g6

0x9b10,	// (0x0002484c) bg_vkb2_func_pane_g7

0x9b18,	// (0x00024854) bg_vkb2_func_pane_g8

0x9ad8,	// (0x00024814) bg_vkb2_func_pane_g9

0x0008,

0xfde8,	// (0x0002ab24) bg_vkb2_func_pane_g

0x6f49,	// (0x00021c85) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6f49,	// (0x00021c85) bg_vkb2_fuc_pane_cp01

0x7806,	// (0x00022542) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7806,	// (0x00022542) vkb2_top_cell_right_wide_pane_g1

0x6f49,	// (0x00021c85) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6f49,	// (0x00021c85) bg_vkb2_fuc_pane_cp02

0x7864,	// (0x000225a0) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7864,	// (0x000225a0) vkb2_top_cell_right_narrow_pane_g1

0xd631,	// (0x0002836d) aid_touch_area_decrease_ParamLimits

0xd631,	// (0x0002836d) aid_touch_area_decrease

0xd64f,	// (0x0002838b) aid_touch_area_increase_ParamLimits

0xd64f,	// (0x0002838b) aid_touch_area_increase

0xd65b,	// (0x00028397) aid_touch_area_mute_ParamLimits

0xd65b,	// (0x00028397) aid_touch_area_mute

0xd67f,	// (0x000283bb) aid_touch_area_slider_ParamLimits

0xd67f,	// (0x000283bb) aid_touch_area_slider

0xd76b,	// (0x000284a7) popup_slider_window_g4_ParamLimits

0xd76b,	// (0x000284a7) popup_slider_window_g4

0xd777,	// (0x000284b3) popup_slider_window_g5_ParamLimits

0xd777,	// (0x000284b3) popup_slider_window_g5

0xd799,	// (0x000284d5) popup_slider_window_g6_ParamLimits

0xd799,	// (0x000284d5) popup_slider_window_g6

0xd7d9,	// (0x00028515) popup_slider_window_t2_ParamLimits

0xd7d9,	// (0x00028515) popup_slider_window_t2

0x0001,

0xfce4,	// (0x0002aa20) popup_slider_window_t_ParamLimits

0xfce4,	// (0x0002aa20) popup_slider_window_t

0xd7f1,	// (0x0002852d) slider_pane_ParamLimits

0xd7f1,	// (0x0002852d) slider_pane

0xe500,	// (0x0002923c) slider_pane_g1_ParamLimits

0xe500,	// (0x0002923c) slider_pane_g1

0xe514,	// (0x00029250) slider_pane_g2_ParamLimits

0xe514,	// (0x00029250) slider_pane_g2

0xe52a,	// (0x00029266) slider_pane_g3_ParamLimits

0xe52a,	// (0x00029266) slider_pane_g3

0x0003,

0xfdfb,	// (0x0002ab37) slider_pane_g_ParamLimits

0xfdfb,	// (0x0002ab37) slider_pane_g

0x6a2c,	// (0x00021768) popup_tb_float_extension_window_ParamLimits

0x6a2c,	// (0x00021768) popup_tb_float_extension_window

0xe556,	// (0x00029292) aid_size_cell_tb_float_ext

0x7cb7,	// (0x000229f3) bg_popup_sub_window_cp28

0xe562,	// (0x0002929e) grid_tb_float_ext_pane

0xe56c,	// (0x000292a8) cell_tb_float_ext_pane_ParamLimits

0xe56c,	// (0x000292a8) cell_tb_float_ext_pane

0xe586,	// (0x000292c2) cell_tb_float_ext_pane_g1

0xe58f,	// (0x000292cb) grid_highlight_pane_cp12

0x708a,	// (0x00021dc6) cell_last_hwr_side_pane_ParamLimits

0x708a,	// (0x00021dc6) cell_last_hwr_side_pane

0xc132,	// (0x00026e6e) cell_last_hwr_side_pane_g1

0xe598,	// (0x000292d4) cell_last_hwr_side_pane_g2

0x0001,

0xfe04,	// (0x0002ab40) cell_last_hwr_side_pane_g

0x772c,	// (0x00022468) vkb2_area_bottom_space_btn_pane_ParamLimits

0x772c,	// (0x00022468) vkb2_area_bottom_space_btn_pane

0xc3b0,	// (0x000270ec) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe04b,	// (0x00028d87) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x79a6,	// (0x000226e2) cell_vkb2_top_candi_pane_t1_ParamLimits

0x79c5,	// (0x00022701) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x79c5,	// (0x00022701) vkb2_area_bottom_space_btn_pane_g1

0x79ff,	// (0x0002273b) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x79ff,	// (0x0002273b) vkb2_area_bottom_space_btn_pane_g2

0x7a35,	// (0x00022771) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7a35,	// (0x00022771) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe09,	// (0x0002ab45) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe09,	// (0x0002ab45) vkb2_area_bottom_space_btn_pane_g

0x6ffe,	// (0x00021d3a) cel_fep_hwr_func_pane_ParamLimits

0x6ffe,	// (0x00021d3a) cel_fep_hwr_func_pane

0x703a,	// (0x00021d76) cell_hwr_side_button_pane_ParamLimits

0x703a,	// (0x00021d76) cell_hwr_side_button_pane

0xda2f,	// (0x0002876b) aid_area_touch_clock_ParamLimits

0x8034,	// (0x00022d70) bg_uniindi_top_pane_ParamLimits

0xda41,	// (0x0002877d) uniindi_top_pane_g1_ParamLimits

0xda57,	// (0x00028793) uniindi_top_pane_g2_ParamLimits

0xda63,	// (0x0002879f) uniindi_top_pane_g3_ParamLimits

0xda74,	// (0x000287b0) uniindi_top_pane_g4_ParamLimits

0xfd1c,	// (0x0002aa58) uniindi_top_pane_g_ParamLimits

0xda81,	// (0x000287bd) uniindi_top_pane_t1_ParamLimits

0x8034,	// (0x00022d70) bg_vkb2_func_pane_cp01_ParamLimits

0x8034,	// (0x00022d70) bg_vkb2_func_pane_cp01

0xe5a1,	// (0x000292dd) cel_fep_hwr_func_pane_g1_ParamLimits

0xe5a1,	// (0x000292dd) cel_fep_hwr_func_pane_g1

0x8034,	// (0x00022d70) bg_vkb2_func_pane_cp02_ParamLimits

0x8034,	// (0x00022d70) bg_vkb2_func_pane_cp02

0xe5a1,	// (0x000292dd) cell_hwr_side_button_pane_g1_ParamLimits

0xe5a1,	// (0x000292dd) cell_hwr_side_button_pane_g1

0x9959,	// (0x00024695) status_pane_g4_ParamLimits

0x9959,	// (0x00024695) status_pane_g4

0x9973,	// (0x000246af) status_pane_t1

0xbe6c,	// (0x00026ba8) form2_midp_gauge_slider_cont_pane

0xbe74,	// (0x00026bb0) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbe86,	// (0x00026bc2) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbe98,	// (0x00026bd4) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae8,	// (0x0002a824) form2_midp_gauge_slider_pane_t_ParamLimits

0xbeaa,	// (0x00026be6) form2_midp_slider_pane_ParamLimits

0x739b,	// (0x000220d7) aid_size_cell_func_vkb2_ParamLimits

0x739b,	// (0x000220d7) aid_size_cell_func_vkb2

0xe542,	// (0x0002927e) slider_pane_g4_ParamLimits

0xe542,	// (0x0002927e) slider_pane_g4

0x7a7f,	// (0x000227bb) form2_midp_gauge_slider_pane_t2_cp01

0x7a8d,	// (0x000227c9) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7a8d,	// (0x000227c9) form2_midp_gauge_slider_pane_t3_cp01

0x7aaa,	// (0x000227e6) form2_midp_slider_pane_cp01

0x7cb7,	// (0x000229f3) navi_smil_pane

0xe5da,	// (0x00029316) navi_smil_pane_g1

0xe5e2,	// (0x0002931e) navi_smil_pane_t1

0xe5af,	// (0x000292eb) form2_midp_slider_pane_g1

0xe5b8,	// (0x000292f4) form2_midp_slider_pane_g2

0xe5c0,	// (0x000292fc) form2_midp_slider_pane_g3

0xe5af,	// (0x000292eb) form2_midp_slider_pane_g4

0xe5c8,	// (0x00029304) form2_midp_slider_pane_g5

0x0004,

0xfe12,	// (0x0002ab4e) form2_midp_slider_pane_g

0x7a6f,	// (0x000227ab) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7a6f,	// (0x000227ab) vkb2_area_bottom_space_btn_pane_g4

0x9796,	// (0x000244d2) lc0_navi_pane_ParamLimits

0x9796,	// (0x000244d2) lc0_navi_pane

0x980c,	// (0x00024548) lc0_stat_indi_pane_ParamLimits

0x980c,	// (0x00024548) lc0_stat_indi_pane

0x9823,	// (0x0002455f) ls0_title_pane_ParamLimits

0x9823,	// (0x0002455f) ls0_title_pane

0x8617,	// (0x00023353) bg_popup_sub_pane_cp14_ParamLimits

0xda16,	// (0x00028752) list_uniindi_pane_ParamLimits

0xda22,	// (0x0002875e) uniindi_top_pane_ParamLimits

0xdabe,	// (0x000287fa) list_single_uniindi_pane_g1_ParamLimits

0xdad1,	// (0x0002880d) list_single_uniindi_pane_t1_ParamLimits

0x7ab3,	// (0x000227ef) lc0_stat_clock_pane_ParamLimits

0x7ab3,	// (0x000227ef) lc0_stat_clock_pane

0xe5f0,	// (0x0002932c) lc0_stat_indi_pane_g1_ParamLimits

0xe5f0,	// (0x0002932c) lc0_stat_indi_pane_g1

0xe5fd,	// (0x00029339) lc0_stat_indi_pane_g2_ParamLimits

0xe5fd,	// (0x00029339) lc0_stat_indi_pane_g2

0x0001,

0xfe1d,	// (0x0002ab59) lc0_stat_indi_pane_g_ParamLimits

0xfe1d,	// (0x0002ab59) lc0_stat_indi_pane_g

0x7ac0,	// (0x000227fc) lc0_uni_indicator_pane_ParamLimits

0x7ac0,	// (0x000227fc) lc0_uni_indicator_pane

0xe60a,	// (0x00029346) ls0_title_pane_g1_ParamLimits

0xe60a,	// (0x00029346) ls0_title_pane_g1

0xe61e,	// (0x0002935a) ls0_title_pane_t1_ParamLimits

0xe61e,	// (0x0002935a) ls0_title_pane_t1

0x7acd,	// (0x00022809) lc0_uni_indicator_pane_g1_ParamLimits

0x7acd,	// (0x00022809) lc0_uni_indicator_pane_g1

0xe654,	// (0x00029390) lc0_stat_clock_pane_t1

0x7cb7,	// (0x000229f3) main_ai5_pane

0xe662,	// (0x0002939e) ai5_sk_pane_ParamLimits

0xe662,	// (0x0002939e) ai5_sk_pane

0xe66f,	// (0x000293ab) cell_ai5_widget_pane_ParamLimits

0xe66f,	// (0x000293ab) cell_ai5_widget_pane

0xe725,	// (0x00029461) aid_size_cell_widget_grid

0xe73b,	// (0x00029477) bg_ai5_widget_pane_ParamLimits

0xe73b,	// (0x00029477) bg_ai5_widget_pane

0xe7a5,	// (0x000294e1) cell_ai5_widget_pane_g2

0xe7b5,	// (0x000294f1) cell_ai5_widget_pane_g3

0xe7d4,	// (0x00029510) cell_ai5_widget_pane_g4

0xe7e0,	// (0x0002951c) cell_ai5_widget_pane_g5

0xe7ec,	// (0x00029528) cell_ai5_widget_pane_g6

0xe7f8,	// (0x00029534) cell_ai5_widget_pane_g7

0xe840,	// (0x0002957c) cell_ai5_widget_pane_t1_ParamLimits

0xe840,	// (0x0002957c) cell_ai5_widget_pane_t1

0xe85d,	// (0x00029599) cell_ai5_widget_pane_t2_ParamLimits

0xe85d,	// (0x00029599) cell_ai5_widget_pane_t2

0xe875,	// (0x000295b1) cell_ai5_widget_pane_t3_ParamLimits

0xe875,	// (0x000295b1) cell_ai5_widget_pane_t3

0xe88d,	// (0x000295c9) cell_ai5_widget_pane_t4_ParamLimits

0xe88d,	// (0x000295c9) cell_ai5_widget_pane_t4

0xe8a7,	// (0x000295e3) cell_ai5_widget_pane_t5_ParamLimits

0xe8a7,	// (0x000295e3) cell_ai5_widget_pane_t5

0xe8c6,	// (0x00029602) cell_ai5_widget_pane_t6_ParamLimits

0xe8c6,	// (0x00029602) cell_ai5_widget_pane_t6

0xe8d8,	// (0x00029614) cell_ai5_widget_pane_t7_ParamLimits

0xe8d8,	// (0x00029614) cell_ai5_widget_pane_t7

0xe8f1,	// (0x0002962d) cell_ai5_widget_pane_t8_ParamLimits

0xe8f1,	// (0x0002962d) cell_ai5_widget_pane_t8

0x0009,

0xfe37,	// (0x0002ab73) cell_ai5_widget_pane_t_ParamLimits

0xfe37,	// (0x0002ab73) cell_ai5_widget_pane_t

0xe93d,	// (0x00029679) grid_ai5_widget_pane

0x8617,	// (0x00023353) highlight_cell_ai5_widget_pane_ParamLimits

0x8617,	// (0x00023353) highlight_cell_ai5_widget_pane

0xe955,	// (0x00029691) ai5_sk_left_pane

0xe95f,	// (0x0002969b) ai5_sk_middle_pane

0xe969,	// (0x000296a5) ai5_sk_right_pane

0xe973,	// (0x000296af) bg_ai5_widget_pane_g1_ParamLimits

0xe973,	// (0x000296af) bg_ai5_widget_pane_g1

0xe97f,	// (0x000296bb) bg_ai5_widget_pane_g2_ParamLimits

0xe97f,	// (0x000296bb) bg_ai5_widget_pane_g2

0xe98b,	// (0x000296c7) bg_ai5_widget_pane_g3_ParamLimits

0xe98b,	// (0x000296c7) bg_ai5_widget_pane_g3

0xe997,	// (0x000296d3) bg_ai5_widget_pane_g4_ParamLimits

0xe997,	// (0x000296d3) bg_ai5_widget_pane_g4

0xe9a3,	// (0x000296df) bg_ai5_widget_pane_g5_ParamLimits

0xe9a3,	// (0x000296df) bg_ai5_widget_pane_g5

0xe9af,	// (0x000296eb) bg_ai5_widget_pane_g6_ParamLimits

0xe9af,	// (0x000296eb) bg_ai5_widget_pane_g6

0xe9bb,	// (0x000296f7) bg_ai5_widget_pane_g7_ParamLimits

0xe9bb,	// (0x000296f7) bg_ai5_widget_pane_g7

0xe9c7,	// (0x00029703) bg_ai5_widget_pane_g8_ParamLimits

0xe9c7,	// (0x00029703) bg_ai5_widget_pane_g8

0xe9d3,	// (0x0002970f) bg_ai5_widget_pane_g9_ParamLimits

0xe9d3,	// (0x0002970f) bg_ai5_widget_pane_g9

0x0008,

0xfe4c,	// (0x0002ab88) bg_ai5_widget_pane_g_ParamLimits

0xfe4c,	// (0x0002ab88) bg_ai5_widget_pane_g

0xea06,	// (0x00029742) cell_shortcut_ai5_widget_pane_ParamLimits

0xea06,	// (0x00029742) cell_shortcut_ai5_widget_pane

0x92a0,	// (0x00023fdc) bg_cell_shortcut_ai5_widget_pane

0xea17,	// (0x00029753) cell_grid_ai5_widget_pane_g1

0xea20,	// (0x0002975c) highlight_cell_shortcut_ai5_widget_pane

0x9ae8,	// (0x00024824) ai5_sk_left_pane_g1

0xea28,	// (0x00029764) ai5_sk_left_pane_g2

0xea30,	// (0x0002976c) ai5_sk_left_pane_g3

0xea38,	// (0x00029774) ai5_sk_left_pane_g4

0x0003,

0xfe5f,	// (0x0002ab9b) ai5_sk_left_pane_g

0xea40,	// (0x0002977c) ai5_sk_left_pane_t1

0x9ae0,	// (0x0002481c) ai5_sk_right_pane_g1

0xea4e,	// (0x0002978a) ai5_sk_right_pane_g2

0xea56,	// (0x00029792) ai5_sk_right_pane_g3

0xea5e,	// (0x0002979a) ai5_sk_right_pane_g4

0x0003,

0xfe68,	// (0x0002aba4) ai5_sk_right_pane_g

0xea66,	// (0x000297a2) ai5_sk_right_pane_t1

0x9ae0,	// (0x0002481c) ai5_sk_middle_pane_g1

0x9ae8,	// (0x00024824) ai5_sk_middle_pane_g2

0x9b00,	// (0x0002483c) ai5_sk_middle_pane_g3

0xea56,	// (0x00029792) ai5_sk_middle_pane_g4

0xea30,	// (0x0002976c) ai5_sk_middle_pane_g5

0xea74,	// (0x000297b0) ai5_sk_middle_pane_g6

0xea7c,	// (0x000297b8) ai5_sk_middle_pane_g7

0x0006,

0xfe71,	// (0x0002abad) ai5_sk_middle_pane_g

0x9626,	// (0x00024362) aid_touch_area_size_lc0_ParamLimits

0x9626,	// (0x00024362) aid_touch_area_size_lc0

0x7189,	// (0x00021ec5) cell_hwr_candidate_pane_t1_ParamLimits

0x9642,	// (0x0002437e) aid_touch_navi_pane

0x990b,	// (0x00024647) status_dt_navi_pane_ParamLimits

0x990b,	// (0x00024647) status_dt_navi_pane

0x9918,	// (0x00024654) status_dt_sta_pane_ParamLimits

0x9918,	// (0x00024654) status_dt_sta_pane

0xea84,	// (0x000297c0) dt_sta_controll_pane

0xea91,	// (0x000297cd) dt_sta_indi_pane

0xeaa2,	// (0x000297de) dt_sta_title_pane

0x8034,	// (0x00022d70) bg_dt_sta_indi_pane_ParamLimits

0x8034,	// (0x00022d70) bg_dt_sta_indi_pane

0xeab5,	// (0x000297f1) dt_sta_battery_pane

0xeabd,	// (0x000297f9) dt_sta_indi_pane_g1

0xeac6,	// (0x00029802) dt_sta_indi_pane_g2

0xeacf,	// (0x0002980b) dt_sta_indi_pane_g3

0x0002,

0xfe80,	// (0x0002abbc) dt_sta_indi_pane_g

0xead8,	// (0x00029814) dt_sta_signal_pane

0x8617,	// (0x00023353) bg_dt_sta_title_pane_ParamLimits

0x8617,	// (0x00023353) bg_dt_sta_title_pane

0xeae1,	// (0x0002981d) dt_sta_title_pane_g1

0xeae9,	// (0x00029825) dt_sta_title_pane_t1_ParamLimits

0xeae9,	// (0x00029825) dt_sta_title_pane_t1

0x7cb7,	// (0x000229f3) bg_dt_sta_control_pane

0xeafe,	// (0x0002983a) dt_sta_controll_pane_g1

0xeb07,	// (0x00029843) bg_dt_sta_title_pane_g1

0xeb10,	// (0x0002984c) bg_dt_sta_title_pane_g2

0xeb19,	// (0x00029855) bg_dt_sta_title_pane_g3

0x0002,

0xfe87,	// (0x0002abc3) bg_dt_sta_title_pane_g

0xc132,	// (0x00026e6e) bg_dt_sta_indi_pane_g1

0xeb22,	// (0x0002985e) dt_sta_signal_pane_g1

0xeb2a,	// (0x00029866) dt_sta_signal_pane_g2

0x0001,

0xfe8e,	// (0x0002abca) dt_sta_signal_pane_g

0xeb32,	// (0x0002986e) dt_sta_battery_pane_g1

0xeb3b,	// (0x00029877) dt_sta_battery_pane_t1

0xc132,	// (0x00026e6e) bg_dt_sta_control_pane_g1

0x8daa,	// (0x00023ae6) fep_china_uni_eep_pane

0x8db2,	// (0x00023aee) fep_china_uni_entry_pane_ParamLimits

0x8dc2,	// (0x00023afe) popup_fep_china_uni_window_g1_ParamLimits

0x8dd2,	// (0x00023b0e) popup_fep_china_uni_window_g2_ParamLimits

0x8dd2,	// (0x00023b0e) popup_fep_china_uni_window_g2

0x0001,

0xf723,	// (0x0002a45f) popup_fep_china_uni_window_g_ParamLimits

0xf723,	// (0x0002a45f) popup_fep_china_uni_window_g

0xeb4a,	// (0x00029886) fep_china_uni_eep_pane_g1

0xeb52,	// (0x0002988e) fep_china_uni_eep_pane_t1

0xe5d1,	// (0x0002930d) aid_touch_area_size_smil_player

0x978e,	// (0x000244ca) lc0_clock_pane

0x9967,	// (0x000246a3) status_pane_g5_ParamLimits

0x9967,	// (0x000246a3) status_pane_g5

0x66f1,	// (0x0002142d) popup_keymap_window

0x992d,	// (0x00024669) status_icon_pane

0xe7b5,	// (0x000294f1) cell_ai5_widget_pane_g3_ParamLimits

0xe7d4,	// (0x00029510) cell_ai5_widget_pane_g4_ParamLimits

0xe7e0,	// (0x0002951c) cell_ai5_widget_pane_g5_ParamLimits

0xe804,	// (0x00029540) cell_ai5_widget_pane_g8_ParamLimits

0xe804,	// (0x00029540) cell_ai5_widget_pane_g8

0xe818,	// (0x00029554) cell_ai5_widget_pane_g9_ParamLimits

0xe818,	// (0x00029554) cell_ai5_widget_pane_g9

0xe82c,	// (0x00029568) cell_ai5_widget_pane_g10_ParamLimits

0xe82c,	// (0x00029568) cell_ai5_widget_pane_g10

0xeb61,	// (0x0002989d) status_icon_pane_g1

0x7cb7,	// (0x000229f3) bg_popup_sub_pane_cp13

0xeb69,	// (0x000298a5) popup_keymap_window_t1

0x956b,	// (0x000242a7) control_pane_g6_ParamLimits

0x956b,	// (0x000242a7) control_pane_g6

0x9578,	// (0x000242b4) control_pane_g7_ParamLimits

0x9578,	// (0x000242b4) control_pane_g7

0x9585,	// (0x000242c1) control_pane_g8_ParamLimits

0x9585,	// (0x000242c1) control_pane_g8

0xea84,	// (0x000297c0) dt_sta_controll_pane_ParamLimits

0xea91,	// (0x000297cd) dt_sta_indi_pane_ParamLimits

0xeaa2,	// (0x000297de) dt_sta_title_pane_ParamLimits

0x854f,	// (0x0002328b) aid_size_touch_scroll_bar_cale

0x5d80,	// (0x00020abc) popup_discreet_window_ParamLimits

0x5d80,	// (0x00020abc) popup_discreet_window

0x5e08,	// (0x00020b44) popup_sk_window

0xa15d,	// (0x00024e99) bg_popup_sub_pane_cp28_ParamLimits

0xa15d,	// (0x00024e99) bg_popup_sub_pane_cp28

0xeb77,	// (0x000298b3) popup_discreet_window_g1_ParamLimits

0xeb77,	// (0x000298b3) popup_discreet_window_g1

0xeb97,	// (0x000298d3) popup_discreet_window_t1_ParamLimits

0xeb97,	// (0x000298d3) popup_discreet_window_t1

0xebb5,	// (0x000298f1) popup_discreet_window_t2_ParamLimits

0xebb5,	// (0x000298f1) popup_discreet_window_t2

0x0002,

0xfe93,	// (0x0002abcf) popup_discreet_window_t_ParamLimits

0xfe93,	// (0x0002abcf) popup_discreet_window_t

0x7ae1,	// (0x0002281d) popup_sk_window_g1

0x7aeb,	// (0x00022827) popup_sk_window_g2

0x0001,

0xfe9a,	// (0x0002abd6) popup_sk_window_g

0x7af5,	// (0x00022831) popup_sk_window_t1

0x7b03,	// (0x0002283f) popup_sk_window_t1_copy1

0xe7a5,	// (0x000294e1) cell_ai5_widget_pane_g2_ParamLimits

0xe903,	// (0x0002963f) cell_ai5_widget_pane_t9_ParamLimits

0xe903,	// (0x0002963f) cell_ai5_widget_pane_t9

0x7cb7,	// (0x000229f3) main_fep_fshwr2_pane

0x7b11,	// (0x0002284d) aid_fshwr2_btn_pane

0x7b1d,	// (0x00022859) aid_fshwr2_syb_pane

0x7b2e,	// (0x0002286a) aid_fshwr2_txt_pane

0x7b3a,	// (0x00022876) fshwr2_func_candi_pane

0x7b4f,	// (0x0002288b) fshwr2_hwr_syb_pane

0x7b66,	// (0x000228a2) fshwr2_icf_pane

0x7cb7,	// (0x000229f3) fshwr2_icf_bg_pane

0xec07,	// (0x00029943) fshwr2_icf_pane_t1_ParamLimits

0xec07,	// (0x00029943) fshwr2_icf_pane_t1

0xc132,	// (0x00026e6e) fshwr2_func_candi_pane_g1

0xec1e,	// (0x0002995a) fshwr2_func_candi_row_pane_ParamLimits

0xec1e,	// (0x0002995a) fshwr2_func_candi_row_pane

0xec2f,	// (0x0002996b) cell_fshwr2_syb_pane_ParamLimits

0xec2f,	// (0x0002996b) cell_fshwr2_syb_pane

0xc3b0,	// (0x000270ec) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc3b0,	// (0x000270ec) fshwr2_hwr_syb_pane_g1

0x7cb7,	// (0x000229f3) bg_popup_call_pane_cp01

0xec49,	// (0x00029985) fshwr2_func_candi_cell_pane_ParamLimits

0xec49,	// (0x00029985) fshwr2_func_candi_cell_pane

0xec7a,	// (0x000299b6) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xec7a,	// (0x000299b6) fshwr2_func_candi_cell_bg_pane

0xec94,	// (0x000299d0) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xec94,	// (0x000299d0) fshwr2_func_candi_cell_pane_g1

0xecbc,	// (0x000299f8) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xecbc,	// (0x000299f8) fshwr2_func_candi_cell_pane_t1

0x7cb7,	// (0x000229f3) bg_button_pane_cp08

0x92a0,	// (0x00023fdc) cell_fshwr2_syb_bg_pane

0xeccf,	// (0x00029a0b) cell_fshwr2_syb_bg_pane_g1

0xecd7,	// (0x00029a13) cell_fshwr2_syb_bg_pane_t1

0x8617,	// (0x00023353) main_tmo_pane

0xac6c,	// (0x000259a8) uni_indicator_pane_g1_ParamLimits

0xac81,	// (0x000259bd) uni_indicator_pane_g2_ParamLimits

0xac97,	// (0x000259d3) uni_indicator_pane_g3_ParamLimits

0xacad,	// (0x000259e9) uni_indicator_pane_g4_ParamLimits

0xacad,	// (0x000259e9) uni_indicator_pane_g4

0xacc1,	// (0x000259fd) uni_indicator_pane_g5_ParamLimits

0xacc1,	// (0x000259fd) uni_indicator_pane_g5

0xacd5,	// (0x00025a11) uni_indicator_pane_g6_ParamLimits

0xacd5,	// (0x00025a11) uni_indicator_pane_g6

0xf920,	// (0x0002a65c) uni_indicator_pane_g_ParamLimits

0xd60d,	// (0x00028349) popup_tmo_note_window_ParamLimits

0xd60d,	// (0x00028349) popup_tmo_note_window

0x8617,	// (0x00023353) fshwr2_bg_pane

0xecad,	// (0x000299e9) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xecad,	// (0x000299e9) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe9f,	// (0x0002abdb) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe9f,	// (0x0002abdb) fshwr2_func_candi_cell_pane_g

0xc132,	// (0x00026e6e) bg_popup_window_pane_cp01

0xece6,	// (0x00029a22) bg_popup_window_pane_g1_cp01

0xecef,	// (0x00029a2b) bg_popup_window_pane_cp22_ParamLimits

0xecef,	// (0x00029a2b) bg_popup_window_pane_cp22

0xecfd,	// (0x00029a39) listscroll_tmo_link_pane_ParamLimits

0xecfd,	// (0x00029a39) listscroll_tmo_link_pane

0xed3d,	// (0x00029a79) popup_tmo_note_window_g1_ParamLimits

0xed3d,	// (0x00029a79) popup_tmo_note_window_g1

0xed4a,	// (0x00029a86) tmo_note_info_pane_ParamLimits

0xed4a,	// (0x00029a86) tmo_note_info_pane

0xed64,	// (0x00029aa0) list_tmo_note_info_pane_g1_ParamLimits

0xed64,	// (0x00029aa0) list_tmo_note_info_pane_g1

0xed7b,	// (0x00029ab7) list_tmo_note_info_pane_g2_ParamLimits

0xed7b,	// (0x00029ab7) list_tmo_note_info_pane_g2

0x0001,

0xfea4,	// (0x0002abe0) list_tmo_note_info_pane_g_ParamLimits

0xfea4,	// (0x0002abe0) list_tmo_note_info_pane_g

0xed97,	// (0x00029ad3) list_tmo_note_info_text_pane_ParamLimits

0xed97,	// (0x00029ad3) list_tmo_note_info_text_pane

0xee18,	// (0x00029b54) list_tmo_link_pane

0xee25,	// (0x00029b61) scroll_pane_cp20

0xee32,	// (0x00029b6e) list_single_tmo_link_pane_ParamLimits

0xee32,	// (0x00029b6e) list_single_tmo_link_pane

0xee42,	// (0x00029b7e) list_single_tmo_link_pane_t1

0xee50,	// (0x00029b8c) list_tmo_note_info_text_pane_t1_ParamLimits

0xee50,	// (0x00029b8c) list_tmo_note_info_text_pane_t1

0x86d1,	// (0x0002340d) aid_size_touch_scroll_bar_cp01_ParamLimits

0x86d1,	// (0x0002340d) aid_size_touch_scroll_bar_cp01

0x5033,	// (0x0001fd6f) aid_size_touch_slider_marker

0x5df0,	// (0x00020b2c) popup_settings_window_ParamLimits

0x5df0,	// (0x00020b2c) popup_settings_window

0x5202,	// (0x0001ff3e) popup_candi_list_indi_window

0x9642,	// (0x0002437e) aid_touch_navi_pane_ParamLimits

0x72f4,	// (0x00022030) rs_clock_indi_pane

0x72fd,	// (0x00022039) sctrl_sk_bottom_pane_ParamLimits

0x730e,	// (0x0002204a) sctrl_sk_top_pane_ParamLimits

0x73f5,	// (0x00022131) popup_fep_tooltip_window

0xe725,	// (0x00029461) aid_size_cell_widget_grid_ParamLimits

0xe799,	// (0x000294d5) cell_ai5_widget_pane_g1_ParamLimits

0xe799,	// (0x000294d5) cell_ai5_widget_pane_g1

0xe7ec,	// (0x00029528) cell_ai5_widget_pane_g6_ParamLimits

0xe7f8,	// (0x00029534) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe22,	// (0x0002ab5e) cell_ai5_widget_pane_g_ParamLimits

0xfe22,	// (0x0002ab5e) cell_ai5_widget_pane_g

0xe927,	// (0x00029663) cell_ai5_widget_pane_t10_ParamLimits

0xe927,	// (0x00029663) cell_ai5_widget_pane_t10

0xe93d,	// (0x00029679) grid_ai5_widget_pane_ParamLimits

0xe9df,	// (0x0002971b) cell_contacts_ai5_widget_pane_ParamLimits

0xe9df,	// (0x0002971b) cell_contacts_ai5_widget_pane

0xebca,	// (0x00029906) popup_discreet_window_t3_ParamLimits

0xebca,	// (0x00029906) popup_discreet_window_t3

0x7b7b,	// (0x000228b7) popup_fshwr2_char_preview_window_ParamLimits

0x7b7b,	// (0x000228b7) popup_fshwr2_char_preview_window

0xedb5,	// (0x00029af1) tmo_note_info_pane_t1

0xedca,	// (0x00029b06) tmo_note_info_pane_t2

0xeddf,	// (0x00029b1b) tmo_note_info_pane_t3

0xedf4,	// (0x00029b30) tmo_note_info_pane_t4

0xee06,	// (0x00029b42) tmo_note_info_pane_t5

0x0004,

0xfea9,	// (0x0002abe5) tmo_note_info_pane_t

0xee18,	// (0x00029b54) list_tmo_link_pane_ParamLimits

0xee25,	// (0x00029b61) scroll_pane_cp20_ParamLimits

0x7cb7,	// (0x000229f3) bg_popup_fep_char_preview_window_cp01

0xee69,	// (0x00029ba5) popup_fshwr2_char_preview_window_t1

0xee77,	// (0x00029bb3) popup_candi_list_indi_window_g1

0xee80,	// (0x00029bbc) bg_cell_contacts_ai5_widget_pane

0xee8c,	// (0x00029bc8) cell_contacts_ai5_widget_pane_g1

0xeea0,	// (0x00029bdc) cell_contacts_ai5_widget_pane_g2

0xeeac,	// (0x00029be8) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb4,	// (0x0002abf0) cell_contacts_ai5_widget_pane_g

0xeebf,	// (0x00029bfb) cell_contacts_ai5_widget_pane_t1

0x8617,	// (0x00023353) highlight_cell_shortcut_ai5_widget_pane_cp01

0xef36,	// (0x00029c72) settings_container_pane

0x92a0,	// (0x00023fdc) listscroll_set_pane_copy1

0xb813,	// (0x0002654f) scroll_pane_cp121_copy1

0xef42,	// (0x00029c7e) set_content_pane_copy1

0xef4a,	// (0x00029c86) aid_height_set_list_copy1_ParamLimits

0xef4a,	// (0x00029c86) aid_height_set_list_copy1

0xaecd,	// (0x00025c09) aid_size_parent_copy1_ParamLimits

0xaecd,	// (0x00025c09) aid_size_parent_copy1

0xef56,	// (0x00029c92) button_value_adjust_pane_cp6_copy1_ParamLimits

0xef56,	// (0x00029c92) button_value_adjust_pane_cp6_copy1

0x95e0,	// (0x0002431c) list_highlight_pane_cp2_copy1_ParamLimits

0x95e0,	// (0x0002431c) list_highlight_pane_cp2_copy1

0xef6a,	// (0x00029ca6) list_set_pane_copy1_ParamLimits

0xef6a,	// (0x00029ca6) list_set_pane_copy1

0xeed1,	// (0x00029c0d) main_pane_set_t1_copy1_ParamLimits

0xeed1,	// (0x00029c0d) main_pane_set_t1_copy1

0xef0b,	// (0x00029c47) main_pane_set_t2_copy1_ParamLimits

0xef0b,	// (0x00029c47) main_pane_set_t2_copy1

0xf017,	// (0x00029d53) main_pane_set_t3_copy1

0xf025,	// (0x00029d61) main_pane_set_t4_copy1

0xef2a,	// (0x00029c66) set_content_pane_g1_copy1_ParamLimits

0xef2a,	// (0x00029c66) set_content_pane_g1_copy1

0xf033,	// (0x00029d6f) setting_code_pane_copy1

0xf03b,	// (0x00029d77) setting_slider_graphic_pane_copy1

0xf03b,	// (0x00029d77) setting_slider_pane_copy1

0xf03b,	// (0x00029d77) setting_text_pane_copy1

0xf03b,	// (0x00029d77) setting_volume_pane_copy1

0xf033,	// (0x00029d6f) settings_code_pane_cp2_copy1

0xf043,	// (0x00029d7f) settings_code_pane_cp_copy1_ParamLimits

0xf043,	// (0x00029d7f) settings_code_pane_cp_copy1

0x7b8f,	// (0x000228cb) volume_set_pane_copy1

0xf057,	// (0x00029d93) volume_set_pane_g10_copy1

0xf05f,	// (0x00029d9b) volume_set_pane_g1_copy1

0xf067,	// (0x00029da3) volume_set_pane_g2_copy1

0xf06f,	// (0x00029dab) volume_set_pane_g3_copy1

0xf077,	// (0x00029db3) volume_set_pane_g4_copy1

0xf07f,	// (0x00029dbb) volume_set_pane_g5_copy1

0xf087,	// (0x00029dc3) volume_set_pane_g6_copy1

0xf08f,	// (0x00029dcb) volume_set_pane_g7_copy1

0xf097,	// (0x00029dd3) volume_set_pane_g8_copy1

0xf09f,	// (0x00029ddb) volume_set_pane_g9_copy1

0x7dab,	// (0x00022ae7) bg_set_opt_pane_cp_copy1_ParamLimits

0x7dab,	// (0x00022ae7) bg_set_opt_pane_cp_copy1

0x7b97,	// (0x000228d3) setting_slider_pane_t1_copy1_ParamLimits

0x7b97,	// (0x000228d3) setting_slider_pane_t1_copy1

0x7bb5,	// (0x000228f1) setting_slider_pane_t2_copy1_ParamLimits

0x7bb5,	// (0x000228f1) setting_slider_pane_t2_copy1

0x7bcf,	// (0x0002290b) setting_slider_pane_t3_copy1_ParamLimits

0x7bcf,	// (0x0002290b) setting_slider_pane_t3_copy1

0x7be7,	// (0x00022923) slider_set_pane_copy1_ParamLimits

0x7be7,	// (0x00022923) slider_set_pane_copy1

0x8672,	// (0x000233ae) set_opt_bg_pane_g1_copy2

0x867a,	// (0x000233b6) set_opt_bg_pane_g2_copy2

0xf0a7,	// (0x00029de3) set_opt_bg_pane_g3_copy2

0x868a,	// (0x000233c6) set_opt_bg_pane_g4_copy2

0x8692,	// (0x000233ce) set_opt_bg_pane_g5_copy2

0x869a,	// (0x000233d6) set_opt_bg_pane_g6_copy2

0xf0b1,	// (0x00029ded) set_opt_bg_pane_g7_copy2

0xf0b9,	// (0x00029df5) set_opt_bg_pane_g8_copy2

0xf0c3,	// (0x00029dff) set_opt_bg_pane_g9_copy2

0xf0cd,	// (0x00029e09) aid_size_touch_slider_mark_copy1_ParamLimits

0xf0cd,	// (0x00029e09) aid_size_touch_slider_mark_copy1

0xf0e1,	// (0x00029e1d) slider_set_pane_g1_copy1

0xf0ea,	// (0x00029e26) slider_set_pane_g2_copy1

0xb085,	// (0x00025dc1) slider_set_pane_g3_copy1_ParamLimits

0xb085,	// (0x00025dc1) slider_set_pane_g3_copy1

0xb099,	// (0x00025dd5) slider_set_pane_g4_copy1_ParamLimits

0xb099,	// (0x00025dd5) slider_set_pane_g4_copy1

0xb0b1,	// (0x00025ded) slider_set_pane_g5_copy1_ParamLimits

0xb0b1,	// (0x00025ded) slider_set_pane_g5_copy1

0xb085,	// (0x00025dc1) slider_set_pane_g6_copy1_ParamLimits

0xb085,	// (0x00025dc1) slider_set_pane_g6_copy1

0xf0f2,	// (0x00029e2e) slider_set_pane_g7_copy1_ParamLimits

0xf0f2,	// (0x00029e2e) slider_set_pane_g7_copy1

0x7ccb,	// (0x00022a07) bg_set_opt_pane_cp2_copy1

0xf108,	// (0x00029e44) setting_slider_graphic_pane_g1_copy1

0xf111,	// (0x00029e4d) setting_slider_graphic_pane_t1_copy1

0xf121,	// (0x00029e5d) setting_slider_graphic_pane_t2_copy1

0xf131,	// (0x00029e6d) slider_set_pane_cp_copy1

0xf141,	// (0x00029e7d) input_focus_pane_cp1_copy1

0xf14a,	// (0x00029e86) list_set_text_pane_copy1

0xf152,	// (0x00029e8e) setting_text_pane_g1_copy1

0x4a2f,	// (0x0001f76b) set_text_pane_t1_copy1

0xf141,	// (0x00029e7d) input_focus_pane_cp2_copy1

0xf152,	// (0x00029e8e) setting_code_pane_g1_copy1

0xf15b,	// (0x00029e97) setting_code_pane_t1_copy1

0xf169,	// (0x00029ea5) list_set_graphic_pane_copy1

0x7ccb,	// (0x00022a07) bg_set_opt_pane_cp4_copy1

0x8fa6,	// (0x00023ce2) list_set_graphic_pane_g1_copy1_ParamLimits

0x8fa6,	// (0x00023ce2) list_set_graphic_pane_g1_copy1

0xf17b,	// (0x00029eb7) list_set_graphic_pane_g2_copy1

0x8fbe,	// (0x00023cfa) list_set_graphic_pane_t1_copy1_ParamLimits

0x8fbe,	// (0x00023cfa) list_set_graphic_pane_t1_copy1

0xc132,	// (0x00026e6e) rs_clock_indi_pane_g1

0xf183,	// (0x00029ebf) rs_clock_indi_pane_t1

0xf191,	// (0x00029ecd) rs_indi_pane

0xf199,	// (0x00029ed5) rs_indi_pane_g1

0xf1a2,	// (0x00029ede) rs_indi_pane_g2

0xf1ab,	// (0x00029ee7) rs_indi_pane_g3

0x0002,

0xfebb,	// (0x0002abf7) rs_indi_pane_g

0x92a0,	// (0x00023fdc) bg_popup_preview_window_pane_cp03

0xf1b4,	// (0x00029ef0) popup_fep_tooltip_window_t1

0xcdae,	// (0x00027aea) popup_note2_window_g2_ParamLimits

0xcdae,	// (0x00027aea) popup_note2_window_g2

0x0001,

0xfc54,	// (0x0002a990) popup_note2_window_g_ParamLimits

0xfc54,	// (0x0002a990) popup_note2_window_g

0xd2a9,	// (0x00027fe5) bg_popup_sub_pane_cp11_ParamLimits

0xd2b6,	// (0x00027ff2) cell_ai3_links_pane_g1_ParamLimits

0xd2cd,	// (0x00028009) cell_ai3_links_pane_t1

0x4a2f,	// (0x0001f76b) set_text_pane_t1_copy1_ParamLimits

0x91b1,	// (0x00023eed) cell_graphic_popup_pane_cp2_ParamLimits

0x91b1,	// (0x00023eed) cell_graphic_popup_pane_cp2

0xf1c2,	// (0x00029efe) cell_graphic_popup_pane_g1_cp2

0x8362,	// (0x0002309e) cell_graphic_popup_pane_g2_cp2

0xf1ca,	// (0x00029f06) cell_graphic_popup_pane_g3_cp2

0xf1d2,	// (0x00029f0e) cell_graphic_popup_pane_t2_cp2

0x8373,	// (0x000230af) grid_highlight_pane_cp3_cp2

0x89b7,	// (0x000236f3) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8617,	// (0x00023353) main_tmo_pane_ParamLimits

0xd601,	// (0x0002833d) popup_tmo_big_image_note_window

0xe789,	// (0x000294c5) cell_ai5_widget_list_pane

0xe791,	// (0x000294cd) cell_ai5_widget_lrg_icon_pane

0xedb5,	// (0x00029af1) tmo_note_info_pane_t1_ParamLimits

0xedca,	// (0x00029b06) tmo_note_info_pane_t2_ParamLimits

0xeddf,	// (0x00029b1b) tmo_note_info_pane_t3_ParamLimits

0xedf4,	// (0x00029b30) tmo_note_info_pane_t4_ParamLimits

0xee06,	// (0x00029b42) tmo_note_info_pane_t5_ParamLimits

0xfea9,	// (0x0002abe5) tmo_note_info_pane_t_ParamLimits

0xef36,	// (0x00029c72) settings_container_pane_ParamLimits

0xf139,	// (0x00029e75) indicator_popup_pane_cp5

0xf139,	// (0x00029e75) indicator_popup_pane_cp6

0xf169,	// (0x00029ea5) list_set_graphic_pane_copy1_ParamLimits

0x7cb7,	// (0x000229f3) bg_popup_window_pane_cp23

0xf1e0,	// (0x00029f1c) popup_tmo_big_image_note_window_g1

0xf1ea,	// (0x00029f26) popup_tmo_big_image_note_window_t1

0xf1fa,	// (0x00029f36) popup_tmo_big_image_note_window_t2

0xf20a,	// (0x00029f46) popup_tmo_big_image_note_window_t3

0x0002,

0xfec2,	// (0x0002abfe) popup_tmo_big_image_note_window_t

0xf21a,	// (0x00029f56) cell_ai5_widget_lrg_icon_pane_g1

0xf222,	// (0x00029f5e) cell_ai5_widget_lrg_icon_pane_t1

0xf230,	// (0x00029f6c) cell_ai5_widget_list_row_pane_ParamLimits

0xf230,	// (0x00029f6c) cell_ai5_widget_list_row_pane

0xf248,	// (0x00029f84) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf248,	// (0x00029f84) cell_ai5_widget_list_row_pane_g1

0xf255,	// (0x00029f91) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf255,	// (0x00029f91) cell_ai5_widget_list_row_pane_t1

0xf26d,	// (0x00029fa9) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf26d,	// (0x00029fa9) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec9,	// (0x0002ac05) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec9,	// (0x0002ac05) cell_ai5_widget_list_row_pane_t

0x7cb7,	// (0x000229f3) main_fep_vtchi_ss_pane

0x7c0c,	// (0x00022948) popup_fep_char_pre_window

0x7c14,	// (0x00022950) popup_fep_ituss_window

0x7c35,	// (0x00022971) popup_fep_vkbss_window

0xf295,	// (0x00029fd1) grid_vkbss_keypad_pane_ParamLimits

0xf295,	// (0x00029fd1) grid_vkbss_keypad_pane

0xf2a5,	// (0x00029fe1) ituss_keypad_pane

0x7c60,	// (0x0002299c) aid_vkbss_key_offset_ParamLimits

0x7c60,	// (0x0002299c) aid_vkbss_key_offset

0x7c6c,	// (0x000229a8) cell_vkbss_key_pane_ParamLimits

0x7c6c,	// (0x000229a8) cell_vkbss_key_pane

0xf2b5,	// (0x00029ff1) bg_cell_vkbss_key_g1_ParamLimits

0xf2b5,	// (0x00029ff1) bg_cell_vkbss_key_g1

0xf2c1,	// (0x00029ffd) cell_vkbss_key_3p_pane_ParamLimits

0xf2c1,	// (0x00029ffd) cell_vkbss_key_3p_pane

0xf2db,	// (0x0002a017) cell_vkbss_key_g1_ParamLimits

0xf2db,	// (0x0002a017) cell_vkbss_key_g1

0xf2f5,	// (0x0002a031) cell_vkbss_key_t1_ParamLimits

0xf2f5,	// (0x0002a031) cell_vkbss_key_t1

0x7c82,	// (0x000229be) cell_ituss_key_pane_ParamLimits

0x7c82,	// (0x000229be) cell_ituss_key_pane

0xf320,	// (0x0002a05c) bg_cell_ituss_key_g1_ParamLimits

0xf320,	// (0x0002a05c) bg_cell_ituss_key_g1

0xf32c,	// (0x0002a068) cell_ituss_key_pane_g1_ParamLimits

0xf32c,	// (0x0002a068) cell_ituss_key_pane_g1

0xf346,	// (0x0002a082) cell_ituss_key_pane_g2_ParamLimits

0xf346,	// (0x0002a082) cell_ituss_key_pane_g2

0x0001,

0xfed0,	// (0x0002ac0c) cell_ituss_key_pane_g_ParamLimits

0xfed0,	// (0x0002ac0c) cell_ituss_key_pane_g

0xf374,	// (0x0002a0b0) cell_ituss_key_t1_ParamLimits

0xf374,	// (0x0002a0b0) cell_ituss_key_t1

0xf3aa,	// (0x0002a0e6) cell_ituss_key_t2_ParamLimits

0xf3aa,	// (0x0002a0e6) cell_ituss_key_t2

0xf3db,	// (0x0002a117) cell_ituss_key_t3_ParamLimits

0xf3db,	// (0x0002a117) cell_ituss_key_t3

0xf415,	// (0x0002a151) cell_ituss_key_t4_ParamLimits

0xf415,	// (0x0002a151) cell_ituss_key_t4

0x0003,

0xfed5,	// (0x0002ac11) cell_ituss_key_t_ParamLimits

0xfed5,	// (0x0002ac11) cell_ituss_key_t

0xf44f,	// (0x0002a18b) cell_vkbss_key_3p_pane_g1

0xf457,	// (0x0002a193) cell_vkbss_key_3p_pane_g2

0xf45f,	// (0x0002a19b) cell_vkbss_key_3p_pane_g3

0x0002,

0xfede,	// (0x0002ac1a) cell_vkbss_key_3p_pane_g

0x7cb7,	// (0x000229f3) bg_popup_fep_char_preview_window_cp02

0xf467,	// (0x0002a1a3) popup_fep_char_pre_window_t1

0xe71b,	// (0x00029457) main_ai5_sk_pane

0xee80,	// (0x00029bbc) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xee8c,	// (0x00029bc8) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xeea0,	// (0x00029bdc) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xeeac,	// (0x00029be8) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb4,	// (0x0002abf0) cell_contacts_ai5_widget_pane_g_ParamLimits

0xeebf,	// (0x00029bfb) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8617,	// (0x00023353) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf476,	// (0x0002a1b2) main_ai5_sk_pane_g1

0x9f8a,	// (0x00024cc6) popup_query_code_window_g1

0x7c2a,	// (0x00022966) popup_fep_vkb_icf_pane

0x7c3e,	// (0x0002297a) popup_fep_vtchi_icf_pane

0x8617,	// (0x00023353) bg_icf_pane

0xf47f,	// (0x0002a1bb) list_vkb_icf_pane

0x8617,	// (0x00023353) bg_icf_pane_cp01

0xf48b,	// (0x0002a1c7) vtchi_icf_list_pane

0xf49c,	// (0x0002a1d8) list_vkb_icf_pane_t1_ParamLimits

0xf49c,	// (0x0002a1d8) list_vkb_icf_pane_t1

0xf4b2,	// (0x0002a1ee) vtchi_icf_list_pane_t1_ParamLimits

0xf4b2,	// (0x0002a1ee) vtchi_icf_list_pane_t1

0x7c14,	// (0x00022950) popup_fep_ituss_window_ParamLimits

0x7c3e,	// (0x0002297a) popup_fep_vtchi_icf_pane_ParamLimits

0xf2a5,	// (0x00029fe1) ituss_keypad_pane_ParamLimits

0x7c54,	// (0x00022990) ituss_sks_pane

0x8617,	// (0x00023353) bg_icf_pane_ParamLimits

0x7bfd,	// (0x00022939) icf_edit_indi_pane_ParamLimits

0x7bfd,	// (0x00022939) icf_edit_indi_pane

0xf47f,	// (0x0002a1bb) list_vkb_icf_pane_ParamLimits

0x8617,	// (0x00023353) bg_icf_pane_cp01_ParamLimits

0x7bfd,	// (0x00022939) icf_edit_indi_pane_cp01_ParamLimits

0x7bfd,	// (0x00022939) icf_edit_indi_pane_cp01

0xf493,	// (0x0002a1cf) vtchi_query_pane

0xc3b0,	// (0x000270ec) icf_edit_indi_pane_g1_ParamLimits

0xc3b0,	// (0x000270ec) icf_edit_indi_pane_g1

0xf537,	// (0x0002a273) icf_edit_indi_pane_g2_ParamLimits

0xf537,	// (0x0002a273) icf_edit_indi_pane_g2

0x0001,

0xfef6,	// (0x0002ac32) icf_edit_indi_pane_g_ParamLimits

0xfef6,	// (0x0002ac32) icf_edit_indi_pane_g

0xf546,	// (0x0002a282) icf_edit_indi_pane_t1

0xf4cd,	// (0x0002a209) bg_input_focus_pane_cp042

0x8546,	// (0x00023282) vtchi_button_pane

0xf4d6,	// (0x0002a212) vtchi_query_pane_t1

0xf4e4,	// (0x0002a220) vtchi_query_pane_t2

0xf4f2,	// (0x0002a22e) vtchi_query_pane_t3

0x0002,

0xfee5,	// (0x0002ac21) vtchi_query_pane_t

0x7cb7,	// (0x000229f3) bg_button_pane_cp13

0xf500,	// (0x0002a23c) vtchi_button_pane_g1

0xf508,	// (0x0002a244) ituss_sks_pane_g1

0xf513,	// (0x0002a24f) ituss_sks_pane_g2

0x0001,

0xfeec,	// (0x0002ac28) ituss_sks_pane_g

0xf51b,	// (0x0002a257) ituss_sks_pane_t1

0xf529,	// (0x0002a265) ituss_sks_pane_t2

0x0001,

0xfef1,	// (0x0002ac2d) ituss_sks_pane_t

0xbb9d,	// (0x000268d9) indicator_nsta_pane_cp_g1

0xbba6,	// (0x000268e2) indicator_nsta_pane_cp_g2

0xbbae,	// (0x000268ea) indicator_nsta_pane_cp_g3

0xbbb6,	// (0x000268f2) indicator_nsta_pane_cp_g4

0xbbb6,	// (0x000268f2) indicator_nsta_pane_cp_g5

0xbbb6,	// (0x000268f2) indicator_nsta_pane_cp_g6

0x0005,

0xfa9e,	// (0x0002a7da) indicator_nsta_pane_cp_g

0xe2e0,	// (0x0002901c) cell_graphic2_pane_t2_ParamLimits

0xe2e0,	// (0x0002901c) cell_graphic2_pane_t2

0x0001,

0xfdab,	// (0x0002aae7) cell_graphic2_pane_t_ParamLimits

0xfdab,	// (0x0002aae7) cell_graphic2_pane_t

0xe30d,	// (0x00029049) cell_graphic2_control_pane_t1

0x8d59,	// (0x00023a95) signal_pane_g3_ParamLimits

0x8d59,	// (0x00023a95) signal_pane_g3

0x8d6b,	// (0x00023aa7) signal_pane_g4_ParamLimits

0x8d6b,	// (0x00023aa7) signal_pane_g4

0xf27f,	// (0x00029fbb) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf27f,	// (0x00029fbb) cell_ai5_widget_list_row_pane_t3

0xf362,	// (0x0002a09e) cell_ituss_key_pane_t1_ParamLimits

0xf362,	// (0x0002a09e) cell_ituss_key_pane_t1

0x9bdd,	// (0x00024919) form_field_data_wide_pane_vc_t2_ParamLimits

0x9bdd,	// (0x00024919) form_field_data_wide_pane_vc_t2

0x9bf1,	// (0x0002492d) form_field_data_wide_pane_vc_t3_ParamLimits

0x9bf1,	// (0x0002492d) form_field_data_wide_pane_vc_t3

0x0002,

0xf808,	// (0x0002a544) form_field_data_wide_pane_vc_t_ParamLimits

0xf808,	// (0x0002a544) form_field_data_wide_pane_vc_t

0xb855,	// (0x00026591) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb855,	// (0x00026591) form_field_slider_wide_pane_vc_t3

0xb933,	// (0x0002666f) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb933,	// (0x0002666f) form_field_popup_wide_pane_vc_t2

0xb94a,	// (0x00026686) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb94a,	// (0x00026686) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa8d,	// (0x0002a7c9) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa8d,	// (0x0002a7c9) form_field_popup_wide_pane_vc_t

0x7b11,	// (0x0002284d) aid_fshwr2_btn_pane_ParamLimits

0x7b1d,	// (0x00022859) aid_fshwr2_syb_pane_ParamLimits

0x7b2e,	// (0x0002286a) aid_fshwr2_txt_pane_ParamLimits

0x8617,	// (0x00023353) fshwr2_bg_pane_ParamLimits

0x7b3a,	// (0x00022876) fshwr2_func_candi_pane_ParamLimits

0x7b4f,	// (0x0002288b) fshwr2_hwr_syb_pane_ParamLimits

0x7b66,	// (0x000228a2) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Small
